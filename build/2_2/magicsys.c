/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY54545 TY54545;
typedef struct TY54549 TY54549;
typedef struct TY54527 TY54527;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54525 TY54525;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TY54547 TY54547;
typedef struct TY54523 TY54523;
typedef struct TY54537 TY54537;
typedef struct TY51008 TY51008;
typedef struct TY10602 TY10602;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY53011 TY53011;
typedef struct TY46532 TY46532;
typedef struct TY54541 TY54541;
typedef struct TY58107 TY58107;
typedef struct TY54517 TY54517;
typedef struct TY42013 TY42013;
typedef struct TY58109 TY58109;
typedef TY54549* TY99027[40];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY54527 {
TNimType* m_type;
NI Counter;
TY54525* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY54537 {
NU8 K;
NU8 S;
NU8 Flags;
TY54549* T;
TY51008* R;
NI A;
};
struct TY54549 {
  TY53005 Sup;
NU8 Kind;
TY54547* Sons;
TY54523* N;
NU8 Flags;
NU8 Callconv;
TY54545* Owner;
TY54545* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54537 Loc;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10988 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10990 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY10988 Stat;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54545 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54549* Typ;
TY53011* Name;
TY46532 Info;
TY54545* Owner;
NU32 Flags;
TY54527 Tab;
TY54523* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54537 Loc;
TY54541* Annex;
};
struct TY54523 {
TY54549* Typ;
NimStringDesc* Comment;
TY46532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54545* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54517* Sons;
} S6;
} KindU;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY54541 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54523* Path;
};
struct TY58107 {
NI Tos;
TY58109* Stack;
};
struct TY54525 {
  TGenericSeq Sup;
  TY54545* data[SEQ_DECL_SIZE];
};
struct TY54547 {
  TGenericSeq Sup;
  TY54549* data[SEQ_DECL_SIZE];
};
struct TY54517 {
  TGenericSeq Sup;
  TY54523* data[SEQ_DECL_SIZE];
};
struct TY58109 {
  TGenericSeq Sup;
  TY54527 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Registersystype_99005)(TY54549* T_99007);
static N_INLINE(void, asgnRef)(void** Dest_11814, void* Src_11815);
static N_INLINE(void, Incref_11802)(TY10602* C_11804);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11040)(TY10602* C_11042);
static N_INLINE(void, Rtladdcycleroot_11652)(TY10602* C_11654);
N_NOINLINE(void, Incl_10874)(TY10614* S_10877, TY10602* Cell_10878);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(void, Decref_11664)(TY10602* C_11666);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(TY54549*, Newsystype_99044)(NU8 Kind_99046, NI Size_99047);
N_NIMCALL(TY54549*, Newtype_54704)(NU8 Kind_54706, TY54545* Owner_54707);
N_NIMCALL(TY54545*, Getsyssym_99024)(NimStringDesc* Name_99026);
N_NIMCALL(TY54545*, Strtableget_58069)(TY54527* T_58071, TY53011* Name_58072);
N_NIMCALL(TY53011*, Getident_53016)(NimStringDesc* Identifier_53018);
N_NIMCALL(void, Rawmessage_46553)(NU8 Msg_46555, NimStringDesc* Arg_46556);
N_NIMCALL(void, Loadstub_90070)(TY54545* S_90072);
N_NIMCALL(TY54549*, Systypefromname_99073)(NimStringDesc* Name_99075);
N_NIMCALL(TY54549*, Getsystype_99008)(NU8 Kind_99010);
N_NIMCALL(void, Internalerror_46571)(NimStringDesc* Errmsg_46573);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_18379, TNimType* Typ_18380);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_17287);
N_NIMCALL(TY54545*, Getcompilerproc_99011)(NimStringDesc* Name_99013);
N_NIMCALL(TY53011*, Getident_53019)(NimStringDesc* Identifier_53021, NI H_53022);
N_NIMCALL(NI, Getnormalizedhash_43037)(NimStringDesc* S_43039);
N_NIMCALL(void, Strtableadd_58064)(TY54527* T_58067, TY54545* N_58068);
N_NIMCALL(void, Registercompilerproc_99014)(TY54545* S_99016);
N_NIMCALL(void, Initsystem_99017)(TY58107* Tab_99020);
N_NIMCALL(void, Finishsystem_99021)(TY54527* Tab_99023);
N_NIMCALL(void, Initstrtable_54744)(TY54527* X_54747);
STRING_LITERAL(TMP99184, "int", 3);
STRING_LITERAL(TMP99185, "int8", 4);
STRING_LITERAL(TMP99186, "int16", 5);
STRING_LITERAL(TMP99187, "int32", 5);
STRING_LITERAL(TMP99188, "int64", 5);
STRING_LITERAL(TMP99189, "float", 5);
STRING_LITERAL(TMP99190, "float32", 7);
STRING_LITERAL(TMP99191, "float64", 7);
STRING_LITERAL(TMP99192, "bool", 4);
STRING_LITERAL(TMP99193, "char", 4);
STRING_LITERAL(TMP99194, "string", 6);
STRING_LITERAL(TMP99195, "cstring", 7);
STRING_LITERAL(TMP99196, "pointer", 7);
STRING_LITERAL(TMP99197, "request for typekind: ", 22);
STRING_LITERAL(TMP99198, "wanted: ", 8);
STRING_LITERAL(TMP99199, " got: ", 6);
STRING_LITERAL(TMP99200, "type not found: ", 16);
TY54545* Systemmodule_99004;
TY99027 Gsystypes_99028;
TY54527 Compilerprocs_99029;
extern TNimType* NTI54527; /* TStrTable */
extern TY10990 Gch_11010;
extern NI Ptrsize_50572;
extern TNimType* NTI54162; /* TTypeKind */
extern TY54527 Rodcompilerprocs_90059;
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7208;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicInc";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7208 = 0;
F.line = 29;F.filename = "systhread.nim";
Result_7208 = __sync_add_and_fetch(Memloc_3004, X_3005);
framePtr = framePtr->prev;
return Result_7208;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11040)(TY10602* C_11042) {
NIM_BOOL Result_11043;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "canbeCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11043 = 0;
F.line = 103;F.filename = "gc.nim";
Result_11043 = !((((*(*C_11042).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
framePtr = framePtr->prev;
return Result_11043;
}
static N_INLINE(void, Rtladdcycleroot_11652)(TY10602* C_11654) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddCycleRoot";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 205;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 205;F.filename = "gc.nim";
pthread_mutex_lock(&Gch_11010.Cyclerootslock);
LA2: ;
F.line = 206;F.filename = "gc.nim";
Incl_10874(&Gch_11010.Cycleroots, C_11654);
F.line = 207;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 207;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11010.Cyclerootslock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Incref_11802)(TY10602* C_11804) {
NI LOC1;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "incRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 226;F.filename = "gc.nim";
LOC1 = Atomicinc_3001(&(*C_11804).Refcount, 8);
F.line = 227;F.filename = "gc.nim";
LOC3 = Canbecycleroot_11040(C_11804);
if (!LOC3) goto LA4;
F.line = 228;F.filename = "gc.nim";
Rtladdcycleroot_11652(C_11804);
LA4: ;
framePtr = framePtr->prev;
}
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038) {
TY10602* Result_11039;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11039 = 0;
F.line = 100;F.filename = "gc.nim";
Result_11039 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11038))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
framePtr = framePtr->prev;
return Result_11039;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7406;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicDec";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7406 = 0;
F.line = 37;F.filename = "systhread.nim";
Result_7406 = __sync_sub_and_fetch(Memloc_3009, X_3010);
framePtr = framePtr->prev;
return Result_7406;
}
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddZCT";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 211;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 211;F.filename = "gc.nim";
pthread_mutex_lock(&Gch_11010.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_11025(&Gch_11010.Zct, C_11660);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11010.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, Decref_11664)(TY10602* C_11666) {
NI LOC2;
NIM_BOOL LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "decRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 219;F.filename = "gc.nim";
F.line = 220;F.filename = "gc.nim";
LOC2 = Atomicdec_3006(&(*C_11666).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
F.line = 221;F.filename = "gc.nim";
Rtladdzct_11658(C_11666);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11040(C_11666);
if (!LOC5) goto LA6;
F.line = 223;F.filename = "gc.nim";
Rtladdcycleroot_11652(C_11666);
goto LA1;
LA6: ;
LA1: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRef)(void** Dest_11814, void* Src_11815) {
TY10602* LOC4;
TY10602* LOC8;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRef";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 235;F.filename = "gc.nim";
F.line = 237;F.filename = "gc.nim";
if (!!((Src_11815 == NIM_NIL))) goto LA2;
F.line = 237;F.filename = "gc.nim";
LOC4 = Usrtocell_11036(Src_11815);
Incref_11802(LOC4);
LA2: ;
F.line = 238;F.filename = "gc.nim";
if (!!(((*Dest_11814) == NIM_NIL))) goto LA6;
F.line = 238;F.filename = "gc.nim";
LOC8 = Usrtocell_11036((*Dest_11814));
Decref_11664(LOC8);
LA6: ;
F.line = 239;F.filename = "gc.nim";
(*Dest_11814) = Src_11815;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Registersystype_99005)(TY54549* T_99007) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "registerSysType";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 32;F.filename = "magicsys.nim";
if (!(Gsystypes_99028[((*T_99007).Kind)-0] == NIM_NIL)) goto LA2;
F.line = 32;F.filename = "magicsys.nim";
asgnRef((void**) &Gsystypes_99028[((*T_99007).Kind)-0], T_99007);
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY54549*, Newsystype_99044)(NU8 Kind_99046, NI Size_99047) {
TY54549* Result_99048;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newSysType";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_99048 = 0;
F.line = 35;F.filename = "magicsys.nim";
Result_99048 = Newtype_54704(Kind_99046, Systemmodule_99004);
F.line = 36;F.filename = "magicsys.nim";
(*Result_99048).Size = ((NI64) (Size_99047));
F.line = 37;F.filename = "magicsys.nim";
(*Result_99048).Align = Size_99047;
framePtr = framePtr->prev;
return Result_99048;
}
N_NIMCALL(TY54545*, Getsyssym_99024)(NimStringDesc* Name_99026) {
TY54545* Result_99052;
TY53011* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getSysSym";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_99052 = 0;
F.line = 40;F.filename = "magicsys.nim";
LOC1 = 0;
LOC1 = Getident_53016(Name_99026);
Result_99052 = Strtableget_58069(&(*Systemmodule_99004).Tab, LOC1);
F.line = 41;F.filename = "magicsys.nim";
if (!(Result_99052 == NIM_NIL)) goto LA3;
F.line = 41;F.filename = "magicsys.nim";
Rawmessage_46553(((NU8) 61), Name_99026);
LA3: ;
F.line = 42;F.filename = "magicsys.nim";
if (!((*Result_99052).Kind == ((NU8) 20))) goto LA6;
F.line = 42;F.filename = "magicsys.nim";
Loadstub_90070(Result_99052);
LA6: ;
framePtr = framePtr->prev;
return Result_99052;
}
N_NIMCALL(TY54549*, Systypefromname_99073)(NimStringDesc* Name_99075) {
TY54549* Result_99076;
TY54545* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "sysTypeFromName";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_99076 = 0;
F.line = 45;F.filename = "magicsys.nim";
LOC1 = 0;
LOC1 = Getsyssym_99024(Name_99075);
Result_99076 = (*LOC1).Typ;
framePtr = framePtr->prev;
return Result_99076;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17392, NimStringDesc* Src_17393) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17392).data[((*Dest_17392).Sup.len)-0])), ((NCSTRING) ((*Src_17393).data)), ((int) ((NI64)((NI64)((*Src_17393).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17392).Sup.len += (*Src_17393).Sup.len;
framePtr = framePtr->prev;
}
N_NIMCALL(TY54549*, Getsystype_99008)(NU8 Kind_99010) {
TY54549* Result_99080;
NimStringDesc* LOC4;
NimStringDesc* LOC8;
NimStringDesc* LOC12;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getSysType";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_99080 = 0;
F.line = 48;F.filename = "magicsys.nim";
Result_99080 = Gsystypes_99028[(Kind_99010)-0];
F.line = 49;F.filename = "magicsys.nim";
if (!(Result_99080 == NIM_NIL)) goto LA2;
F.line = 50;F.filename = "magicsys.nim";
switch (Kind_99010) {
case ((NU8) 31):
F.line = 51;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99184));
break;
case ((NU8) 32):
F.line = 52;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99185));
break;
case ((NU8) 33):
F.line = 53;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99186));
break;
case ((NU8) 34):
F.line = 54;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99187));
break;
case ((NU8) 35):
F.line = 55;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99188));
break;
case ((NU8) 36):
F.line = 56;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99189));
break;
case ((NU8) 37):
F.line = 57;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99190));
break;
case ((NU8) 38):
F.line = 58;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99191));
break;
case ((NU8) 1):
F.line = 59;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99192));
break;
case ((NU8) 2):
F.line = 60;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99193));
break;
case ((NU8) 28):
F.line = 61;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99194));
break;
case ((NU8) 29):
F.line = 62;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99195));
break;
case ((NU8) 26):
F.line = 63;F.filename = "magicsys.nim";
Result_99080 = Systypefromname_99073(((NimStringDesc*) &TMP99196));
break;
case ((NU8) 5):
F.line = 64;F.filename = "magicsys.nim";
Result_99080 = Newsystype_99044(((NU8) 5), Ptrsize_50572);
break;
default:
F.line = 65;F.filename = "magicsys.nim";
LOC4 = 0;
LOC4 = rawNewString(reprEnum(Kind_99010, NTI54162)->Sup.len + 22);
appendString(LOC4, ((NimStringDesc*) &TMP99197));
appendString(LOC4, reprEnum(Kind_99010, NTI54162));
Internalerror_46571(LOC4);
break;
}
F.line = 66;F.filename = "magicsys.nim";
asgnRef((void**) &Gsystypes_99028[(Kind_99010)-0], Result_99080);
LA2: ;
F.line = 67;F.filename = "magicsys.nim";
if (!!(((*Result_99080).Kind == Kind_99010))) goto LA6;
F.line = 68;F.filename = "magicsys.nim";
LOC8 = 0;
LOC8 = rawNewString(reprEnum(Kind_99010, NTI54162)->Sup.len + reprEnum((*Result_99080).Kind, NTI54162)->Sup.len + 14);
appendString(LOC8, ((NimStringDesc*) &TMP99198));
appendString(LOC8, reprEnum(Kind_99010, NTI54162));
appendString(LOC8, ((NimStringDesc*) &TMP99199));
appendString(LOC8, reprEnum((*Result_99080).Kind, NTI54162));
Internalerror_46571(LOC8);
LA6: ;
F.line = 69;F.filename = "magicsys.nim";
if (!(Result_99080 == NIM_NIL)) goto LA10;
F.line = 69;F.filename = "magicsys.nim";
LOC12 = 0;
LOC12 = rawNewString(reprEnum(Kind_99010, NTI54162)->Sup.len + 16);
appendString(LOC12, ((NimStringDesc*) &TMP99200));
appendString(LOC12, reprEnum(Kind_99010, NTI54162));
Internalerror_46571(LOC12);
LA10: ;
framePtr = framePtr->prev;
return Result_99080;
}
N_NIMCALL(TY54545*, Getcompilerproc_99011)(NimStringDesc* Name_99013) {
TY54545* Result_99204;
TY53011* Ident_99205;
NI LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getCompilerProc";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_99204 = 0;
Ident_99205 = 0;
F.line = 72;F.filename = "magicsys.nim";
LOC1 = Getnormalizedhash_43037(Name_99013);
Ident_99205 = Getident_53019(Name_99013, LOC1);
F.line = 73;F.filename = "magicsys.nim";
Result_99204 = Strtableget_58069(&Compilerprocs_99029, Ident_99205);
F.line = 74;F.filename = "magicsys.nim";
if (!(Result_99204 == NIM_NIL)) goto LA3;
F.line = 75;F.filename = "magicsys.nim";
Result_99204 = Strtableget_58069(&Rodcompilerprocs_90059, Ident_99205);
F.line = 76;F.filename = "magicsys.nim";
if (!!((Result_99204 == NIM_NIL))) goto LA6;
F.line = 77;F.filename = "magicsys.nim";
Strtableadd_58064(&Compilerprocs_99029, Result_99204);
F.line = 78;F.filename = "magicsys.nim";
if (!((*Result_99204).Kind == ((NU8) 20))) goto LA9;
F.line = 78;F.filename = "magicsys.nim";
Loadstub_90070(Result_99204);
LA9: ;
LA6: ;
LA3: ;
framePtr = framePtr->prev;
return Result_99204;
}
N_NIMCALL(void, Registercompilerproc_99014)(TY54545* S_99016) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "registerCompilerProc";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 81;F.filename = "magicsys.nim";
Strtableadd_58064(&Compilerprocs_99029, S_99016);
framePtr = framePtr->prev;
}
N_NIMCALL(void, Initsystem_99017)(TY58107* Tab_99020) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "InitSystem";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Finishsystem_99021)(TY54527* Tab_99023) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "FinishSystem";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
N_NOINLINE(void, magicsysInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "magicsys";
F.prev = framePtr;
F.filename = "rod/magicsys.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Compilerprocs_99029.m_type = NTI54527;
F.line = 86;F.filename = "magicsys.nim";
Initstrtable_54744(&Compilerprocs_99029);
framePtr = framePtr->prev;
}
