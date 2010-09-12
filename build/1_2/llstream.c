/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY68013 TY68013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
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
struct TY68013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
typedef N_STDCALL_PTR(void, TY7816) (TY7804* L_7818);
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY7804 {
void* Debuginfo;
NI32 Lockcount;
NI32 Recursioncount;
NI Owningthread;
NI Locksemaphore;
NI32 Reserved;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY7804 Cyclerootslock;
TY7804 Zctlock;
TY10788 Stat;
};
typedef N_STDCALL_PTR(void, TY7820) (TY7804* L_7822);
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(TY68013*, Llstreamopen_68025)(NimStringDesc* Data_68027);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460);
N_NOINLINE(void, Addzct_10825)(TY10418* S_10828, TY10402* C_10829);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(TY68013*, Llstreamopen_68028)(FILE** F_68031);
N_NIMCALL(TY68013*, Llstreamopen_68032)(NimStringDesc* Filename_68034, NU8 Mode_68035);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(TY68013*, Llstreamopen_68036)(void);
N_NIMCALL(TY68013*, Llstreamopenstdin_68038)(void);
N_NIMCALL(void, Llstreamclose_68040)(TY68013* S_68042);
N_NIMCALL(NI, Llreadfromstdin_68178)(TY68013* S_68180, void* Buf_68181, NI Buflen_68182);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
N_NIMCALL(NimStringDesc*, Readline_3679)(FILE* F_3681);
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_17182, NI Addlen_17183);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, Llstreamread_68043)(TY68013* S_68045, void* Buf_68046, NI Buflen_68047);
N_NIMCALL(NI, Readbuffer_3714)(FILE* F_3716, void* Buffer_3717, NI Len_3718);
N_NIMCALL(NimStringDesc*, Llstreamreadline_68048)(TY68013* S_68050);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NIM_BOOL, Llstreamatend_68071)(TY68013* S_68073);
N_NIMCALL(NIM_BOOL, Endoffile_3638)(FILE* F_3640);
N_NIMCALL(void, Llstreamwrite_68054)(TY68013* S_68056, NimStringDesc* Data_68057);
N_NIMCALL(void, Llstreamwriteln_68067)(TY68013* S_68069, NimStringDesc* Data_68070);
N_NIMCALL(void, Llstreamwrite_68058)(TY68013* S_68060, NIM_CHAR Data_68061);
N_NIMCALL(NI, Writebuffer_3733)(FILE* F_3735, void* Buffer_3736, NI Len_3737);
N_NIMCALL(void, Llstreamwrite_68062)(TY68013* S_68064, void* Buf_68065, NI Buflen_68066);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17225, NI Newlen_17226);
N_NIMCALL(NimStringDesc*, Llstreamreadall_68051)(TY68013* S_68053);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1748, NI First_1749);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
STRING_LITERAL(TMP68174, "", 0);
STRING_LITERAL(TMP68212, "Nimrod> ", 8);
STRING_LITERAL(TMP68213, "\015\012", 2);
extern TNimType* NTI68015; /* PLLStream */
extern TNimType* NTI68013; /* TLLStream */
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838) {
TY10402* Result_10839;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_10839 = 0;
F.line = 100;F.filename = "gc.nim";
Result_10839 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_10838))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
framePtr = framePtr->prev;
return Result_10839;
}
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
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460) {
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
Dl_7815(&Gch_10810.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_10825(&Gch_10810.Zct, C_11460);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
Dl_7819(&Gch_10810.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619) {
TY10402* C_11620;
NI LOC4;
TY10402* C_11622;
NI LOC9;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRefNoCycle";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 244;F.filename = "gc.nim";
if (!!((Src_11619 == NIM_NIL))) goto LA2;
C_11620 = 0;
F.line = 245;F.filename = "gc.nim";
C_11620 = Usrtocell_10836(Src_11619);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_3001(&(*C_11620).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11618) == NIM_NIL))) goto LA6;
C_11622 = 0;
F.line = 248;F.filename = "gc.nim";
C_11622 = Usrtocell_10836((*Dest_11618));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_3006(&(*C_11622).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11458(C_11622);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11618) = Src_11619;
framePtr = framePtr->prev;
}
N_NIMCALL(TY68013*, Llstreamopen_68025)(NimStringDesc* Data_68027) {
TY68013* Result_68077;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamOpen";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68077 = 0;
F.line = 46;F.filename = "llstream.nim";
Result_68077 = (TY68013*) newObj(NTI68015, sizeof(TY68013));
(*Result_68077).Sup.m_type = NTI68013;
F.line = 47;F.filename = "llstream.nim";
asgnRefNoCycle((void**) &(*Result_68077).S, copyString(Data_68027));
F.line = 48;F.filename = "llstream.nim";
(*Result_68077).Kind = ((NU8) 1);
framePtr = framePtr->prev;
return Result_68077;
}
N_NIMCALL(TY68013*, Llstreamopen_68028)(FILE** F_68031) {
TY68013* Result_68101;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamOpen";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68101 = 0;
F.line = 51;F.filename = "llstream.nim";
Result_68101 = (TY68013*) newObj(NTI68015, sizeof(TY68013));
(*Result_68101).Sup.m_type = NTI68013;
F.line = 52;F.filename = "llstream.nim";
(*Result_68101).F = (*F_68031);
F.line = 53;F.filename = "llstream.nim";
(*Result_68101).Kind = ((NU8) 2);
framePtr = framePtr->prev;
return Result_68101;
}
N_NIMCALL(TY68013*, Llstreamopen_68032)(NimStringDesc* Filename_68034, NU8 Mode_68035) {
TY68013* Result_68121;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamOpen";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68121 = 0;
F.line = 56;F.filename = "llstream.nim";
Result_68121 = (TY68013*) newObj(NTI68015, sizeof(TY68013));
(*Result_68121).Sup.m_type = NTI68013;
F.line = 57;F.filename = "llstream.nim";
(*Result_68121).Kind = ((NU8) 2);
F.line = 58;F.filename = "llstream.nim";
LOC2 = Open_3617(&(*Result_68121).F, Filename_68034, Mode_68035, -1);
if (!!(LOC2)) goto LA3;
F.line = 58;F.filename = "llstream.nim";
Result_68121 = NIM_NIL;
LA3: ;
framePtr = framePtr->prev;
return Result_68121;
}
N_NIMCALL(TY68013*, Llstreamopen_68036)(void) {
TY68013* Result_68140;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamOpen";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68140 = 0;
F.line = 61;F.filename = "llstream.nim";
Result_68140 = (TY68013*) newObj(NTI68015, sizeof(TY68013));
(*Result_68140).Sup.m_type = NTI68013;
F.line = 62;F.filename = "llstream.nim";
(*Result_68140).Kind = ((NU8) 0);
framePtr = framePtr->prev;
return Result_68140;
}
N_NIMCALL(TY68013*, Llstreamopenstdin_68038)(void) {
TY68013* Result_68158;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamOpenStdIn";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68158 = 0;
F.line = 65;F.filename = "llstream.nim";
Result_68158 = (TY68013*) newObj(NTI68015, sizeof(TY68013));
(*Result_68158).Sup.m_type = NTI68013;
F.line = 66;F.filename = "llstream.nim";
(*Result_68158).Kind = ((NU8) 3);
F.line = 67;F.filename = "llstream.nim";
asgnRefNoCycle((void**) &(*Result_68158).S, copyString(((NimStringDesc*) &TMP68174)));
framePtr = framePtr->prev;
return Result_68158;
}
N_NIMCALL(void, Llstreamclose_68040)(TY68013* S_68042) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamClose";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 70;F.filename = "llstream.nim";
switch ((*S_68042).Kind) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 3):
break;
case ((NU8) 2):
F.line = 74;F.filename = "llstream.nim";
fclose((*S_68042).F);
break;
}
framePtr = framePtr->prev;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_17192, NimStringDesc* Src_17193) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "appendString";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "sysstr.nim";
memcpy(((NCSTRING) (&(*Dest_17192).data[((*Dest_17192).Sup.len)-0])), ((NCSTRING) ((*Src_17193).data)), ((NI32) ((NI64)((NI64)((*Src_17193).Sup.len + 1) * 1))));
F.line = 151;F.filename = "sysstr.nim";
(*Dest_17192).Sup.len += (*Src_17193).Sup.len;
framePtr = framePtr->prev;
}
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI64)((NU64)(A_5803) - (NU64)(B_5804));
LOC2 = (0 <= (NI64)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5805 ^ (NI64)((NU64) ~(B_5804))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604) {
NI Result_5605;
NIM_BOOL LOC2;
Result_5605 = 0;
Result_5605 = (NI64)((NU64)(A_5603) + (NU64)(B_5604));
LOC2 = (0 <= (NI64)(Result_5605 ^ A_5603));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5605 ^ B_5604));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5605;
}
N_NIMCALL(NI, Llreadfromstdin_68178)(TY68013* S_68180, void* Buf_68181, NI Buflen_68182) {
NI Result_68183;
NimStringDesc* Line_68184;
NI L_68185;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLreadFromStdin";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68183 = 0;
Line_68184 = 0;
L_68185 = 0;
F.line = 80;F.filename = "llstream.nim";
asgnRefNoCycle((void**) &(*S_68180).S, copyString(((NimStringDesc*) &TMP68174)));
F.line = 81;F.filename = "llstream.nim";
(*S_68180).Rd = 0;
F.line = 82;F.filename = "llstream.nim";
while (1) {
F.line = 83;F.filename = "llstream.nim";
Write_3658(stdout, ((NimStringDesc*) &TMP68212));
F.line = 84;F.filename = "llstream.nim";
Line_68184 = Readline_3679(stdin);
F.line = 85;F.filename = "llstream.nim";
L_68185 = Line_68184->Sup.len;
F.line = 86;F.filename = "llstream.nim";
(*S_68180).S = resizeString((*S_68180).S, Line_68184->Sup.len + 0);
appendString((*S_68180).S, Line_68184);
F.line = 87;F.filename = "llstream.nim";
(*S_68180).S = resizeString((*S_68180).S, 2);
appendString((*S_68180).S, ((NimStringDesc*) &TMP68213));
F.line = 88;F.filename = "llstream.nim";
LOC3 = (0 < L_68185);
if (!(LOC3)) goto LA4;
if ((NU)(addInt(subInt(L_68185, 1), 0)) > (NU)(Line_68184->Sup.len)) raiseIndexError();
LOC3 = ((NU8)(Line_68184->data[addInt(subInt(L_68185, 1), 0)]) == (NU8)(35));
LA4: ;
if (!LOC3) goto LA5;
F.line = 88;F.filename = "llstream.nim";
goto LA1;
LA5: ;
} LA1: ;
F.line = 89;F.filename = "llstream.nim";
Result_68183 = ((Buflen_68182 <= subInt((*S_68180).S->Sup.len, (*S_68180).Rd)) ? Buflen_68182 : subInt((*S_68180).S->Sup.len, (*S_68180).Rd));
F.line = 90;F.filename = "llstream.nim";
if (!(0 < Result_68183)) goto LA8;
F.line = 91;F.filename = "llstream.nim";
if ((NU)(addInt(0, (*S_68180).Rd)) > (NU)((*S_68180).S->Sup.len)) raiseIndexError();
memcpy(Buf_68181, ((void*) (&(*S_68180).S->data[addInt(0, (*S_68180).Rd)])), Result_68183);
F.line = 92;F.filename = "llstream.nim";
(*S_68180).Rd = addInt((*S_68180).Rd, Result_68183);
LA8: ;
framePtr = framePtr->prev;
return Result_68183;
}
N_NIMCALL(NI, Llstreamread_68043)(TY68013* S_68045, void* Buf_68046, NI Buflen_68047) {
NI Result_68219;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamRead";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68219 = 0;
F.line = 95;F.filename = "llstream.nim";
switch ((*S_68045).Kind) {
case ((NU8) 0):
F.line = 97;F.filename = "llstream.nim";
Result_68219 = 0;
break;
case ((NU8) 1):
F.line = 99;F.filename = "llstream.nim";
Result_68219 = ((Buflen_68047 <= subInt((*S_68045).S->Sup.len, (*S_68045).Rd)) ? Buflen_68047 : subInt((*S_68045).S->Sup.len, (*S_68045).Rd));
F.line = 100;F.filename = "llstream.nim";
if (!(0 < Result_68219)) goto LA2;
F.line = 101;F.filename = "llstream.nim";
if ((NU)(addInt(0, (*S_68045).Rd)) > (NU)((*S_68045).S->Sup.len)) raiseIndexError();
memcpy(Buf_68046, ((void*) (&(*S_68045).S->data[addInt(0, (*S_68045).Rd)])), Result_68219);
F.line = 102;F.filename = "llstream.nim";
(*S_68045).Rd = addInt((*S_68045).Rd, Result_68219);
LA2: ;
break;
case ((NU8) 2):
F.line = 104;F.filename = "llstream.nim";
Result_68219 = Readbuffer_3714((*S_68045).F, Buf_68046, Buflen_68047);
break;
case ((NU8) 3):
F.line = 106;F.filename = "llstream.nim";
Result_68219 = Llreadfromstdin_68178(S_68045, Buf_68046, Buflen_68047);
break;
}
framePtr = framePtr->prev;
return Result_68219;
}
N_NIMCALL(NimStringDesc*, Llstreamreadline_68048)(TY68013* S_68050) {
NimStringDesc* Result_68242;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamReadLine";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68242 = 0;
F.line = 109;F.filename = "llstream.nim";
switch ((*S_68050).Kind) {
case ((NU8) 0):
F.line = 111;F.filename = "llstream.nim";
Result_68242 = copyString(((NimStringDesc*) &TMP68174));
break;
case ((NU8) 1):
F.line = 113;F.filename = "llstream.nim";
Result_68242 = copyString(((NimStringDesc*) &TMP68174));
F.line = 114;F.filename = "llstream.nim";
while (1) {
if (!((*S_68050).Rd < (*S_68050).S->Sup.len)) goto LA1;
F.line = 115;F.filename = "llstream.nim";
if ((NU)(addInt((*S_68050).Rd, 0)) > (NU)((*S_68050).S->Sup.len)) raiseIndexError();
switch (((NU8)((*S_68050).S->data[addInt((*S_68050).Rd, 0)]))) {
case 13:
F.line = 117;F.filename = "llstream.nim";
(*S_68050).Rd = addInt((*S_68050).Rd, 1);
F.line = 118;F.filename = "llstream.nim";
if ((NU)(addInt((*S_68050).Rd, 0)) > (NU)((*S_68050).S->Sup.len)) raiseIndexError();
if (!((NU8)((*S_68050).S->data[addInt((*S_68050).Rd, 0)]) == (NU8)(10))) goto LA3;
F.line = 118;F.filename = "llstream.nim";
(*S_68050).Rd = addInt((*S_68050).Rd, 1);
LA3: ;
F.line = 119;F.filename = "llstream.nim";
goto LA1;
break;
case 10:
F.line = 121;F.filename = "llstream.nim";
(*S_68050).Rd = addInt((*S_68050).Rd, 1);
F.line = 122;F.filename = "llstream.nim";
goto LA1;
break;
default:
F.line = 124;F.filename = "llstream.nim";
if ((NU)(addInt((*S_68050).Rd, 0)) > (NU)((*S_68050).S->Sup.len)) raiseIndexError();
Result_68242 = addChar(Result_68242, (*S_68050).S->data[addInt((*S_68050).Rd, 0)]);
F.line = 125;F.filename = "llstream.nim";
(*S_68050).Rd = addInt((*S_68050).Rd, 1);
break;
}
} LA1: ;
break;
case ((NU8) 2):
F.line = 127;F.filename = "llstream.nim";
Result_68242 = Readline_3679((*S_68050).F);
break;
case ((NU8) 3):
F.line = 129;F.filename = "llstream.nim";
Result_68242 = Readline_3679(stdin);
break;
}
framePtr = framePtr->prev;
return Result_68242;
}
N_NIMCALL(NIM_BOOL, Llstreamatend_68071)(TY68013* S_68073) {
NIM_BOOL Result_68301;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamAtEnd";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68301 = 0;
F.line = 132;F.filename = "llstream.nim";
switch ((*S_68073).Kind) {
case ((NU8) 0):
F.line = 133;F.filename = "llstream.nim";
Result_68301 = NIM_TRUE;
break;
case ((NU8) 1):
F.line = 134;F.filename = "llstream.nim";
Result_68301 = ((*S_68073).S->Sup.len <= (*S_68073).Rd);
break;
case ((NU8) 2):
F.line = 135;F.filename = "llstream.nim";
Result_68301 = Endoffile_3638((*S_68073).F);
break;
case ((NU8) 3):
F.line = 136;F.filename = "llstream.nim";
Result_68301 = NIM_FALSE;
break;
}
framePtr = framePtr->prev;
return Result_68301;
}
N_NIMCALL(void, Llstreamwrite_68054)(TY68013* S_68056, NimStringDesc* Data_68057) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamWrite";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 139;F.filename = "llstream.nim";
switch ((*S_68056).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
F.line = 143;F.filename = "llstream.nim";
(*S_68056).S = resizeString((*S_68056).S, Data_68057->Sup.len + 0);
appendString((*S_68056).S, Data_68057);
F.line = 144;F.filename = "llstream.nim";
(*S_68056).Wr = addInt((*S_68056).Wr, Data_68057->Sup.len);
break;
case ((NU8) 2):
F.line = 146;F.filename = "llstream.nim";
Write_3658((*S_68056).F, Data_68057);
break;
}
framePtr = framePtr->prev;
}
N_NIMCALL(void, Llstreamwriteln_68067)(TY68013* S_68069, NimStringDesc* Data_68070) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamWriteln";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 149;F.filename = "llstream.nim";
Llstreamwrite_68054(S_68069, Data_68070);
F.line = 150;F.filename = "llstream.nim";
Llstreamwrite_68054(S_68069, ((NimStringDesc*) &TMP68213));
framePtr = framePtr->prev;
}
N_NIMCALL(void, Llstreamwrite_68058)(TY68013* S_68060, NIM_CHAR Data_68061) {
NIM_CHAR C_68332;
NI LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamWrite";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
C_68332 = 0;
F.line = 154;F.filename = "llstream.nim";
switch ((*S_68060).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
F.line = 158;F.filename = "llstream.nim";
(*S_68060).S = addChar((*S_68060).S, Data_68061);
F.line = 159;F.filename = "llstream.nim";
(*S_68060).Wr = addInt((*S_68060).Wr, 1);
break;
case ((NU8) 2):
F.line = 161;F.filename = "llstream.nim";
C_68332 = Data_68061;
F.line = 162;F.filename = "llstream.nim";
LOC1 = Writebuffer_3733((*S_68060).F, ((void*) (&C_68332)), 1);
break;
}
framePtr = framePtr->prev;
}
N_NIMCALL(void, Llstreamwrite_68062)(TY68013* S_68064, void* Buf_68065, NI Buflen_68066) {
NI LOC4;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamWrite";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 165;F.filename = "llstream.nim";
switch ((*S_68064).Kind) {
case ((NU8) 0):
case ((NU8) 3):
break;
case ((NU8) 1):
F.line = 169;F.filename = "llstream.nim";
if (!(0 < Buflen_68066)) goto LA2;
F.line = 170;F.filename = "llstream.nim";
(*S_68064).S = setLengthStr((*S_68064).S, addInt((*S_68064).S->Sup.len, Buflen_68066));
F.line = 171;F.filename = "llstream.nim";
if ((NU)(addInt(0, (*S_68064).Wr)) > (NU)((*S_68064).S->Sup.len)) raiseIndexError();
memcpy(((void*) (&(*S_68064).S->data[addInt(0, (*S_68064).Wr)])), Buf_68065, Buflen_68066);
F.line = 172;F.filename = "llstream.nim";
(*S_68064).Wr = addInt((*S_68064).Wr, Buflen_68066);
LA2: ;
break;
case ((NU8) 2):
F.line = 174;F.filename = "llstream.nim";
LOC4 = Writebuffer_3733((*S_68064).F, Buf_68065, Buflen_68066);
break;
}
framePtr = framePtr->prev;
}
N_NIMCALL(NimStringDesc*, Llstreamreadall_68051)(TY68013* S_68053) {
NimStringDesc* Result_68371;
NI Bytes_68373;
NI I_68374;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "LLStreamReadAll";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_68371 = 0;
Bytes_68373 = 0;
I_68374 = 0;
F.line = 180;F.filename = "llstream.nim";
switch ((*S_68053).Kind) {
case ((NU8) 0):
case ((NU8) 3):
F.line = 182;F.filename = "llstream.nim";
Result_68371 = copyString(((NimStringDesc*) &TMP68174));
break;
case ((NU8) 1):
F.line = 184;F.filename = "llstream.nim";
if (!((*S_68053).Rd == 0)) goto LA2;
F.line = 184;F.filename = "llstream.nim";
Result_68371 = copyString((*S_68053).S);
goto LA1;
LA2: ;
F.line = 185;F.filename = "llstream.nim";
Result_68371 = copyStr((*S_68053).S, addInt((*S_68053).Rd, 0));
LA1: ;
F.line = 186;F.filename = "llstream.nim";
(*S_68053).Rd = (*S_68053).S->Sup.len;
break;
case ((NU8) 2):
F.line = 188;F.filename = "llstream.nim";
Result_68371 = mnewString(2048);
F.line = 189;F.filename = "llstream.nim";
if ((NU)(0) > (NU)(Result_68371->Sup.len)) raiseIndexError();
Bytes_68373 = Readbuffer_3714((*S_68053).F, ((void*) (&Result_68371->data[0])), 2048);
F.line = 190;F.filename = "llstream.nim";
I_68374 = Bytes_68373;
F.line = 191;F.filename = "llstream.nim";
while (1) {
if (!(Bytes_68373 == 2048)) goto LA4;
F.line = 192;F.filename = "llstream.nim";
Result_68371 = setLengthStr(Result_68371, addInt(I_68374, 2048));
F.line = 193;F.filename = "llstream.nim";
if ((NU)(addInt(I_68374, 0)) > (NU)(Result_68371->Sup.len)) raiseIndexError();
Bytes_68373 = Readbuffer_3714((*S_68053).F, ((void*) (&Result_68371->data[addInt(I_68374, 0)])), 2048);
F.line = 194;F.filename = "llstream.nim";
I_68374 = addInt(I_68374, Bytes_68373);
} LA4: ;
F.line = 195;F.filename = "llstream.nim";
Result_68371 = setLengthStr(Result_68371, I_68374);
break;
}
framePtr = framePtr->prev;
return Result_68371;
}
N_NOINLINE(void, llstreamInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "llstream";
F.prev = framePtr;
F.filename = "rod/llstream.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
