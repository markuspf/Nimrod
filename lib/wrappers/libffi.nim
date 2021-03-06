# -----------------------------------------------------------------*-C-*-
#   libffi 3.0.10 - Copyright (c) 2011 Anthony Green
#                    - Copyright (c) 1996-2003, 2007, 2008 Red Hat, Inc.
#
#   Permission is hereby granted, free of charge, to any person
#   obtaining a copy of this software and associated documentation
#   files (the ``Software''), to deal in the Software without
#   restriction, including without limitation the rights to use, copy,
#   modify, merge, publish, distribute, sublicense, and/or sell copies
#   of the Software, and to permit persons to whom the Software is
#   furnished to do so, subject to the following conditions:
#
#   The above copyright notice and this permission notice shall be
#   included in all copies or substantial portions of the Software.
#
#   THE SOFTWARE IS PROVIDED ``AS IS'', WITHOUT WARRANTY OF ANY KIND,
#   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
#   NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
#   HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
#   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
#   DEALINGS IN THE SOFTWARE.
#
#   ----------------------------------------------------------------------- 

{.deadCodeElim: on.}

when defined(windows): 
  const libffidll* = "libffi.dll"
elif defined(macosx): 
  const libffidll* = "libffi.dylib"
else: 
  const libffidll* = "libffi.so"

type
  TArg* = int
  TSArg* = int

when defined(windows) and defined(x86):
  type
    TABI* {.size: sizeof(cint).} = enum
      FIRST_ABI, SYSV, STDCALL

  const DEFAULT_ABI* = SYSV
elif defined(amd64) and defined(windows):
  type 
    TABI* {.size: sizeof(cint).} = enum 
      FIRST_ABI, WIN64
  const DEFAULT_ABI* = WIN64
else:
  type 
    TABI* {.size: sizeof(cint).} = enum
      FIRST_ABI, SYSV, UNIX64

  when defined(i386):
    const DEFAULT_ABI* = SYSV
  else: 
    const DEFAULT_ABI* = UNIX64
    
const 
  tkVOID* = 0
  tkINT* = 1
  tkFLOAT* = 2
  tkDOUBLE* = 3
  tkLONGDOUBLE* = 4
  tkUINT8* = 5
  tkSINT8* = 6
  tkUINT16* = 7
  tkSINT16* = 8
  tkUINT32* = 9
  tkSINT32* = 10
  tkUINT64* = 11
  tkSINT64* = 12
  tkSTRUCT* = 13
  tkPOINTER* = 14

  tkLAST = tkPOINTER
  tkSMALL_STRUCT_1B* = (tkLAST + 1)
  tkSMALL_STRUCT_2B* = (tkLAST + 2)
  tkSMALL_STRUCT_4B* = (tkLAST + 3)

type
  TType* = object
    size*: int
    alignment*: uint16
    typ*: uint16
    elements*: ptr ptr TType

var
  type_void* {.importc: "ffi_type_void", dynlib: libffidll.}: TType
  type_uint8* {.importc: "ffi_type_uint8", dynlib: libffidll.}: TType
  type_sint8* {.importc: "ffi_type_sint8", dynlib: libffidll.}: TType
  type_uint16* {.importc: "ffi_type_uint16", dynlib: libffidll.}: TType
  type_sint16* {.importc: "ffi_type_sint16", dynlib: libffidll.}: TType
  type_uint32* {.importc: "ffi_type_uint32", dynlib: libffidll.}: TType
  type_sint32* {.importc: "ffi_type_sint32", dynlib: libffidll.}: TType
  type_uint64* {.importc: "ffi_type_uint64", dynlib: libffidll.}: TType
  type_sint64* {.importc: "ffi_type_sint64", dynlib: libffidll.}: TType
  type_float* {.importc: "ffi_type_float", dynlib: libffidll.}: TType
  type_double* {.importc: "ffi_type_double", dynlib: libffidll.}: TType
  type_pointer* {.importc: "ffi_type_pointer", dynlib: libffidll.}: TType
  type_longdouble* {.importc: "ffi_type_longdouble", dynlib: libffidll.}: TType

type 
  Tstatus* {.size: sizeof(cint).} = enum 
    OK, BAD_TYPEDEF, BAD_ABI
  TTypeKind* = cuint
  TCif* {.pure, final.} = object 
    abi*: TABI
    nargs*: cuint
    arg_types*: ptr ptr TType
    rtype*: ptr TType
    bytes*: cuint
    flags*: cuint

type
  TRaw* = object 
    sint*: TSArg

proc raw_call*(cif: var Tcif; fn: proc () {.cdecl.}; rvalue: pointer; 
               avalue: ptr TRaw) {.cdecl, importc: "ffi_raw_call", 
                                   dynlib: libffidll.}
proc ptrarray_to_raw*(cif: var Tcif; args: ptr pointer; raw: ptr TRaw) {.cdecl, 
    importc: "ffi_ptrarray_to_raw", dynlib: libffidll.}
proc raw_to_ptrarray*(cif: var Tcif; raw: ptr TRaw; args: ptr pointer) {.cdecl, 
    importc: "ffi_raw_to_ptrarray", dynlib: libffidll.}
proc raw_size*(cif: var Tcif): int {.cdecl, importc: "ffi_raw_size", 
                                     dynlib: libffidll.}

proc prep_cif*(cif: var Tcif; abi: TABI; nargs: cuint; rtype: ptr TType; 
               atypes: ptr ptr TType): TStatus {.cdecl, importc: "ffi_prep_cif", 
    dynlib: libffidll.}
proc call*(cif: var Tcif; fn: proc () {.cdecl.}; rvalue: pointer; 
           avalue: ptr pointer) {.cdecl, importc: "ffi_call", dynlib: libffidll.}

# the same with an easier interface:
type
  TParamList* = array[0..100, ptr TType]
  TArgList* = array[0..100, pointer]

proc prep_cif*(cif: var Tcif; abi: TABI; nargs: cuint; rtype: ptr TType; 
               atypes: TParamList): TStatus {.cdecl, importc: "ffi_prep_cif",
    dynlib: libffidll.}
proc call*(cif: var Tcif; fn, rvalue: pointer;
           avalue: TArgList) {.cdecl, importc: "ffi_call", dynlib: libffidll.}

# Useful for eliminating compiler warnings 
##define FFI_FN(f) ((void (*)(void))f)
