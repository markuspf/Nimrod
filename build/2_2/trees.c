/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY54523 TY54523;
typedef struct TY54549 TY54549;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46532 TY46532;
typedef struct TY54545 TY54545;
typedef struct TY53011 TY53011;
typedef struct TY54517 TY54517;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54527 TY54527;
typedef struct TY54525 TY54525;
typedef struct TY54537 TY54537;
typedef struct TY51008 TY51008;
typedef struct TY54541 TY54541;
typedef struct TY10602 TY10602;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TY54547 TY54547;
typedef struct TY42013 TY42013;
struct TGenericSeq {
NI len;
NI space;
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
typedef NU8 TY54997[16];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY54527 {
TNimType* m_type;
NI Counter;
TY54525* Data;
};
struct TY54537 {
NU8 K;
NU8 S;
NU8 Flags;
TY54549* T;
TY51008* R;
NI A;
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
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
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
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY54517 {
  TGenericSeq Sup;
  TY54523* data[SEQ_DECL_SIZE];
};
struct TY54525 {
  TGenericSeq Sup;
  TY54545* data[SEQ_DECL_SIZE];
};
struct TY54547 {
  TGenericSeq Sup;
  TY54549* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Hasson_93046)(TY54523* Father_93048, TY54523* Son_93049);
N_NIMCALL(NI, Sonslen_54801)(TY54523* N_54803);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(NIM_BOOL, Cyclictreeaux_93103)(TY54523* N_93105, TY54523* S_93106);
N_NIMCALL(void, Addson_54821)(TY54523* Father_54823, TY54523* Son_54824);
N_NIMCALL(void, Delson_54833)(TY54523* Father_54835, NI Idx_54836);
N_NIMCALL(NIM_BOOL, Cyclictree_93043)(TY54523* N_93045);
N_NIMCALL(TY54523*, Newnodei_54735)(NU8 Kind_54737, TY46532 Info_54738);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_93035)(TY54523* A_93037, TY54523* B_93038);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17247, NimStringDesc* B_17248);
N_NIMCALL(NIM_BOOL, Sametree_93039)(TY54523* A_93041, TY54523* B_93042);
N_NIMCALL(TY54545*, Getprocsym_93032)(TY54523* Call_93034);
N_NIMCALL(TY54545*, Getopsym_93029)(TY54523* Op_93031);
N_NIMCALL(void, Internalerror_46567)(TY46532 Info_46569, NimStringDesc* Errmsg_46570);
N_NIMCALL(NU8, Getmagic_93013)(TY54523* Op_93015);
N_NIMCALL(TY54545*, Treetosym_93023)(TY54523* T_93025);
N_NIMCALL(NIM_BOOL, Isconstexpr_93016)(TY54523* N_93018);
N_NIMCALL(void, Flattentreeaux_93783)(TY54523* D_93785, TY54523* A_93786, NU8 Op_93787);
N_NIMCALL(TY54523*, Copytree_54856)(TY54523* Src_54858);
N_NIMCALL(TY54523*, Flattentree_93019)(TY54523* Root_93021, NU8 Op_93022);
N_NIMCALL(TY54523*, Copynode_54853)(TY54523* Src_54855);
N_NIMCALL(void, Swapoperands_93026)(TY54523* Op_93028);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
static NIM_CONST TY54997 TMP93101 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP93102, "sons", 4);
static NIM_CONST TY54997 TMP93374 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP93375, "sym", 3);
static NIM_CONST TY54997 TMP93376 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP93377, "ident", 5);
static NIM_CONST TY54997 TMP93378 = {
0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP93379, "intVal", 6);
static NIM_CONST TY54997 TMP93380 = {
0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP93381, "floatVal", 8);
static NIM_CONST TY54997 TMP93382 = {
0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP93383, "strVal", 6);
STRING_LITERAL(TMP93699, "getOpSym", 8);
extern TY10990 Gch_11010;
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
N_NIMCALL(NIM_BOOL, Hasson_93046)(TY54523* Father_93048, TY54523* Son_93049) {
NIM_BOOL Result_93050;
NI I_93073;
NI HEX3Atmp_93096;
NI LOC1;
NI Res_93098;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hasSon";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93050 = 0;
I_93073 = 0;
HEX3Atmp_93096 = 0;
F.line = 29;F.filename = "trees.nim";
LOC1 = Sonslen_54801(Father_93048);
HEX3Atmp_93096 = subInt(LOC1, 1);
Res_93098 = 0;
F.line = 1011;F.filename = "system.nim";
Res_93098 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_93098 <= HEX3Atmp_93096)) goto LA2;
F.line = 1011;F.filename = "system.nim";
I_93073 = Res_93098;
F.line = 30;F.filename = "trees.nim";
if (((TMP93101[(*Father_93048).Kind/8] &(1<<((*Father_93048).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93073) >= (NU)((*Father_93048).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!((*Father_93048).KindU.S6.Sons->data[I_93073] == Son_93049)) goto LA4;
F.line = 31;F.filename = "trees.nim";
F.line = 31;F.filename = "trees.nim";
Result_93050 = NIM_TRUE;
goto BeforeRet;
LA4: ;
F.line = 1014;F.filename = "system.nim";
Res_93098 = addInt(Res_93098, 1);
} LA2: ;
F.line = 32;F.filename = "trees.nim";
Result_93050 = NIM_FALSE;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_93050;
}
N_NIMCALL(NIM_BOOL, Cyclictreeaux_93103)(TY54523* N_93105, TY54523* S_93106) {
NIM_BOOL Result_93107;
NIM_BOOL LOC5;
NI M_93119;
NI I_93139;
NI HEX3Atmp_93153;
NI LOC11;
NI Res_93155;
NIM_BOOL LOC14;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "cyclicTreeAux";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93107 = 0;
F.line = 35;F.filename = "trees.nim";
if (!(N_93105 == NIM_NIL)) goto LA2;
F.line = 36;F.filename = "trees.nim";
F.line = 36;F.filename = "trees.nim";
Result_93107 = NIM_FALSE;
goto BeforeRet;
LA2: ;
F.line = 37;F.filename = "trees.nim";
LOC5 = Hasson_93046(S_93106, N_93105);
if (!LOC5) goto LA6;
F.line = 38;F.filename = "trees.nim";
F.line = 38;F.filename = "trees.nim";
Result_93107 = NIM_TRUE;
goto BeforeRet;
LA6: ;
M_93119 = 0;
F.line = 39;F.filename = "trees.nim";
M_93119 = Sonslen_54801(S_93106);
F.line = 40;F.filename = "trees.nim";
Addson_54821(S_93106, N_93105);
F.line = 41;F.filename = "trees.nim";
if (!!(((*N_93105).Kind >= ((NU8) 1) && (*N_93105).Kind <= ((NU8) 18)))) goto LA9;
I_93139 = 0;
HEX3Atmp_93153 = 0;
F.line = 42;F.filename = "trees.nim";
LOC11 = Sonslen_54801(N_93105);
HEX3Atmp_93153 = subInt(LOC11, 1);
Res_93155 = 0;
F.line = 1011;F.filename = "system.nim";
Res_93155 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_93155 <= HEX3Atmp_93153)) goto LA12;
F.line = 1011;F.filename = "system.nim";
I_93139 = Res_93155;
F.line = 43;F.filename = "trees.nim";
if (((TMP93101[(*N_93105).Kind/8] &(1<<((*N_93105).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93139) >= (NU)((*N_93105).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC14 = Cyclictreeaux_93103((*N_93105).KindU.S6.Sons->data[I_93139], S_93106);
if (!LOC14) goto LA15;
F.line = 44;F.filename = "trees.nim";
F.line = 44;F.filename = "trees.nim";
Result_93107 = NIM_TRUE;
goto BeforeRet;
LA15: ;
F.line = 1014;F.filename = "system.nim";
Res_93155 = addInt(Res_93155, 1);
} LA12: ;
LA9: ;
F.line = 45;F.filename = "trees.nim";
Result_93107 = NIM_FALSE;
F.line = 46;F.filename = "trees.nim";
Delson_54833(S_93106, M_93119);
BeforeRet: ;
framePtr = framePtr->prev;
return Result_93107;
}
N_NIMCALL(NIM_BOOL, Cyclictree_93043)(TY54523* N_93045) {
NIM_BOOL Result_93161;
TY54523* S_93162;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "cyclicTree";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93161 = 0;
S_93162 = 0;
F.line = 49;F.filename = "trees.nim";
S_93162 = Newnodei_54735(((NU8) 1), (*N_93045).Info);
F.line = 50;F.filename = "trees.nim";
Result_93161 = Cyclictreeaux_93103(N_93045, S_93162);
framePtr = framePtr->prev;
return Result_93161;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17247, NimStringDesc* B_17248) {
NIM_BOOL Result_17249;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "eqStrings";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_17249 = 0;
F.line = 32;F.filename = "sysstr.nim";
if (!(A_17247 == B_17248)) goto LA2;
F.line = 32;F.filename = "sysstr.nim";
F.line = 32;F.filename = "sysstr.nim";
Result_17249 = NIM_TRUE;
goto BeforeRet;
LA2: ;
F.line = 33;F.filename = "sysstr.nim";
LOC5 = (A_17247 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_17248 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
F.line = 33;F.filename = "sysstr.nim";
F.line = 33;F.filename = "sysstr.nim";
Result_17249 = NIM_FALSE;
goto BeforeRet;
LA7: ;
F.line = 34;F.filename = "sysstr.nim";
F.line = 34;F.filename = "sysstr.nim";
LOC9 = ((*A_17247).Sup.len == (*B_17248).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_17247).data)), ((NCSTRING) ((*B_17248).data)), ((int) ((NI64)((*A_17247).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17249 = LOC9;
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_17249;
}
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_93035)(TY54523* A_93037, TY54523* B_93038) {
NIM_BOOL Result_93167;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_93343;
NI HEX3Atmp_93369;
NI LOC15;
NI Res_93371;
NIM_BOOL LOC18;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ExprStructuralEquivalent";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93167 = 0;
F.line = 53;F.filename = "trees.nim";
Result_93167 = NIM_FALSE;
F.line = 54;F.filename = "trees.nim";
if (!(A_93037 == B_93038)) goto LA2;
F.line = 55;F.filename = "trees.nim";
Result_93167 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_93037 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_93038 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_93037).Kind == (*B_93038).Kind);
LA7: ;
if (!LOC4) goto LA8;
F.line = 57;F.filename = "trees.nim";
switch ((*A_93037).Kind) {
case ((NU8) 3):
F.line = 60;F.filename = "trees.nim";
if (!(((TMP93374[(*A_93037).Kind/8] &(1<<((*A_93037).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
if (!(((TMP93374[(*B_93038).Kind/8] &(1<<((*B_93038).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
Result_93167 = ((*(*(*A_93037).KindU.S4.Sym).Name).Sup.Id == (*(*(*B_93038).KindU.S4.Sym).Name).Sup.Id);
break;
case ((NU8) 2):
F.line = 61;F.filename = "trees.nim";
if (!(((TMP93376[(*A_93037).Kind/8] &(1<<((*A_93037).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93377));
if (!(((TMP93376[(*B_93038).Kind/8] &(1<<((*B_93038).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93377));
Result_93167 = ((*(*A_93037).KindU.S5.Ident).Sup.Id == (*(*B_93038).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
F.line = 62;F.filename = "trees.nim";
if (!(((TMP93378[(*A_93037).Kind/8] &(1<<((*A_93037).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93379));
if (!(((TMP93378[(*B_93038).Kind/8] &(1<<((*B_93038).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93379));
Result_93167 = ((*A_93037).KindU.S1.Intval == (*B_93038).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
F.line = 63;F.filename = "trees.nim";
if (!(((TMP93380[(*A_93037).Kind/8] &(1<<((*A_93037).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93381));
if (!(((TMP93380[(*B_93038).Kind/8] &(1<<((*B_93038).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93381));
Result_93167 = (((NF) ((*A_93037).KindU.S2.Floatval)) == ((NF) ((*B_93038).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
F.line = 64;F.filename = "trees.nim";
if (!(((TMP93382[(*A_93037).Kind/8] &(1<<((*A_93037).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93383));
if (!(((TMP93382[(*B_93038).Kind/8] &(1<<((*B_93038).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93383));
Result_93167 = eqStrings((*A_93037).KindU.S3.Strval, (*B_93038).KindU.S3.Strval);
break;
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
F.line = 65;F.filename = "trees.nim";
Result_93167 = NIM_TRUE;
break;
default:
F.line = 67;F.filename = "trees.nim";
LOC11 = Sonslen_54801(A_93037);
LOC12 = Sonslen_54801(B_93038);
if (!(LOC11 == LOC12)) goto LA13;
I_93343 = 0;
HEX3Atmp_93369 = 0;
F.line = 68;F.filename = "trees.nim";
LOC15 = Sonslen_54801(A_93037);
HEX3Atmp_93369 = subInt(LOC15, 1);
Res_93371 = 0;
F.line = 1011;F.filename = "system.nim";
Res_93371 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_93371 <= HEX3Atmp_93369)) goto LA16;
F.line = 1011;F.filename = "system.nim";
I_93343 = Res_93371;
F.line = 69;F.filename = "trees.nim";
if (((TMP93101[(*A_93037).Kind/8] &(1<<((*A_93037).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93343) >= (NU)((*A_93037).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP93101[(*B_93038).Kind/8] &(1<<((*B_93038).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93343) >= (NU)((*B_93038).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC18 = Exprstructuralequivalent_93035((*A_93037).KindU.S6.Sons->data[I_93343], (*B_93038).KindU.S6.Sons->data[I_93343]);
if (!!(LOC18)) goto LA19;
F.line = 69;F.filename = "trees.nim";
goto BeforeRet;
LA19: ;
F.line = 1014;F.filename = "system.nim";
Res_93371 = addInt(Res_93371, 1);
} LA16: ;
F.line = 70;F.filename = "trees.nim";
Result_93167 = NIM_TRUE;
LA13: ;
break;
}
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_93167;
}
N_NIMCALL(NIM_BOOL, Sametree_93039)(TY54523* A_93041, TY54523* B_93042) {
NIM_BOOL Result_93388;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC20;
NI LOC21;
NI I_93577;
NI HEX3Atmp_93603;
NI LOC24;
NI Res_93605;
NIM_BOOL LOC27;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "sameTree";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93388 = 0;
F.line = 73;F.filename = "trees.nim";
Result_93388 = NIM_FALSE;
F.line = 74;F.filename = "trees.nim";
if (!(A_93041 == B_93042)) goto LA2;
F.line = 75;F.filename = "trees.nim";
Result_93388 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_93041 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_93042 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_93041).Kind == (*B_93042).Kind);
LA7: ;
if (!LOC4) goto LA8;
F.line = 77;F.filename = "trees.nim";
if (!!(((*A_93041).Flags == (*B_93042).Flags))) goto LA11;
F.line = 77;F.filename = "trees.nim";
goto BeforeRet;
LA11: ;
F.line = 78;F.filename = "trees.nim";
if (!!(((*A_93041).Info.Line == (*B_93042).Info.Line))) goto LA14;
F.line = 78;F.filename = "trees.nim";
goto BeforeRet;
LA14: ;
F.line = 79;F.filename = "trees.nim";
if (!!(((*A_93041).Info.Col == (*B_93042).Info.Col))) goto LA17;
F.line = 80;F.filename = "trees.nim";
goto BeforeRet;
LA17: ;
F.line = 81;F.filename = "trees.nim";
switch ((*A_93041).Kind) {
case ((NU8) 3):
F.line = 84;F.filename = "trees.nim";
if (!(((TMP93374[(*A_93041).Kind/8] &(1<<((*A_93041).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
if (!(((TMP93374[(*B_93042).Kind/8] &(1<<((*B_93042).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
Result_93388 = ((*(*(*A_93041).KindU.S4.Sym).Name).Sup.Id == (*(*(*B_93042).KindU.S4.Sym).Name).Sup.Id);
break;
case ((NU8) 2):
F.line = 85;F.filename = "trees.nim";
if (!(((TMP93376[(*A_93041).Kind/8] &(1<<((*A_93041).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93377));
if (!(((TMP93376[(*B_93042).Kind/8] &(1<<((*B_93042).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93377));
Result_93388 = ((*(*A_93041).KindU.S5.Ident).Sup.Id == (*(*B_93042).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
F.line = 86;F.filename = "trees.nim";
if (!(((TMP93378[(*A_93041).Kind/8] &(1<<((*A_93041).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93379));
if (!(((TMP93378[(*B_93042).Kind/8] &(1<<((*B_93042).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93379));
Result_93388 = ((*A_93041).KindU.S1.Intval == (*B_93042).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
F.line = 87;F.filename = "trees.nim";
if (!(((TMP93380[(*A_93041).Kind/8] &(1<<((*A_93041).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93381));
if (!(((TMP93380[(*B_93042).Kind/8] &(1<<((*B_93042).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93381));
Result_93388 = (((NF) ((*A_93041).KindU.S2.Floatval)) == ((NF) ((*B_93042).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
F.line = 88;F.filename = "trees.nim";
if (!(((TMP93382[(*A_93041).Kind/8] &(1<<((*A_93041).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93383));
if (!(((TMP93382[(*B_93042).Kind/8] &(1<<((*B_93042).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93383));
Result_93388 = eqStrings((*A_93041).KindU.S3.Strval, (*B_93042).KindU.S3.Strval);
break;
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
F.line = 89;F.filename = "trees.nim";
Result_93388 = NIM_TRUE;
break;
default:
F.line = 91;F.filename = "trees.nim";
LOC20 = Sonslen_54801(A_93041);
LOC21 = Sonslen_54801(B_93042);
if (!(LOC20 == LOC21)) goto LA22;
I_93577 = 0;
HEX3Atmp_93603 = 0;
F.line = 92;F.filename = "trees.nim";
LOC24 = Sonslen_54801(A_93041);
HEX3Atmp_93603 = subInt(LOC24, 1);
Res_93605 = 0;
F.line = 1011;F.filename = "system.nim";
Res_93605 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_93605 <= HEX3Atmp_93603)) goto LA25;
F.line = 1011;F.filename = "system.nim";
I_93577 = Res_93605;
F.line = 93;F.filename = "trees.nim";
if (((TMP93101[(*A_93041).Kind/8] &(1<<((*A_93041).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93577) >= (NU)((*A_93041).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP93101[(*B_93042).Kind/8] &(1<<((*B_93042).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93577) >= (NU)((*B_93042).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC27 = Sametree_93039((*A_93041).KindU.S6.Sons->data[I_93577], (*B_93042).KindU.S6.Sons->data[I_93577]);
if (!!(LOC27)) goto LA28;
F.line = 93;F.filename = "trees.nim";
goto BeforeRet;
LA28: ;
F.line = 1014;F.filename = "system.nim";
Res_93605 = addInt(Res_93605, 1);
} LA25: ;
F.line = 94;F.filename = "trees.nim";
Result_93388 = NIM_TRUE;
LA22: ;
break;
}
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_93388;
}
N_NIMCALL(TY54545*, Getprocsym_93032)(TY54523* Call_93034) {
TY54545* Result_93611;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getProcSym";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93611 = 0;
F.line = 97;F.filename = "trees.nim";
if (((TMP93101[(*Call_93034).Kind/8] &(1<<((*Call_93034).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(0) >= (NU)((*Call_93034).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP93374[(*(*Call_93034).KindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*Call_93034).KindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
Result_93611 = (*(*Call_93034).KindU.S6.Sons->data[0]).KindU.S4.Sym;
framePtr = framePtr->prev;
return Result_93611;
}
N_NIMCALL(TY54545*, Getopsym_93029)(TY54523* Op_93031) {
TY54545* Result_93639;
NI LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getOpSym";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93639 = 0;
F.line = 100;F.filename = "trees.nim";
if (!!(((*Op_93031).Kind == ((NU8) 21) || (*Op_93031).Kind == ((NU8) 49) || (*Op_93031).Kind == ((NU8) 20) || (*Op_93031).Kind == ((NU8) 22)))) goto LA2;
F.line = 101;F.filename = "trees.nim";
Result_93639 = NIM_NIL;
goto LA1;
LA2: ;
F.line = 103;F.filename = "trees.nim";
LOC5 = Sonslen_54801(Op_93031);
if (!(LOC5 <= 0)) goto LA6;
F.line = 103;F.filename = "trees.nim";
Internalerror_46567((*Op_93031).Info, ((NimStringDesc*) &TMP93699));
LA6: ;
F.line = 104;F.filename = "trees.nim";
if (((TMP93101[(*Op_93031).Kind/8] &(1<<((*Op_93031).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(0) >= (NU)((*Op_93031).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!((*(*Op_93031).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA9;
F.line = 104;F.filename = "trees.nim";
if (((TMP93101[(*Op_93031).Kind/8] &(1<<((*Op_93031).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(0) >= (NU)((*Op_93031).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP93374[(*(*Op_93031).KindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*Op_93031).KindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
Result_93639 = (*(*Op_93031).KindU.S6.Sons->data[0]).KindU.S4.Sym;
goto LA8;
LA9: ;
F.line = 105;F.filename = "trees.nim";
Result_93639 = NIM_NIL;
LA8: ;
LA1: ;
framePtr = framePtr->prev;
return Result_93639;
}
N_NIMCALL(NU8, Getmagic_93013)(TY54523* Op_93015) {
NU8 Result_93703;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "getMagic";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93703 = 0;
F.line = 108;F.filename = "trees.nim";
switch ((*Op_93015).Kind) {
case ((NU8) 21):
case ((NU8) 49):
case ((NU8) 20):
case ((NU8) 22):
F.line = 110;F.filename = "trees.nim";
if (((TMP93101[(*Op_93015).Kind/8] &(1<<((*Op_93015).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(0) >= (NU)((*Op_93015).KindU.S6.Sons->Sup.len)) raiseIndexError();
switch ((*(*Op_93015).KindU.S6.Sons->data[0]).Kind) {
case ((NU8) 3):
F.line = 111;F.filename = "trees.nim";
if (((TMP93101[(*Op_93015).Kind/8] &(1<<((*Op_93015).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(0) >= (NU)((*Op_93015).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (!(((TMP93374[(*(*Op_93015).KindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*Op_93015).KindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
Result_93703 = (*(*(*Op_93015).KindU.S6.Sons->data[0]).KindU.S4.Sym).Magic;
break;
default:
F.line = 112;F.filename = "trees.nim";
Result_93703 = ((NU8) 0);
break;
}
break;
default:
F.line = 113;F.filename = "trees.nim";
Result_93703 = ((NU8) 0);
break;
}
framePtr = framePtr->prev;
return Result_93703;
}
N_NIMCALL(TY54545*, Treetosym_93023)(TY54523* T_93025) {
TY54545* Result_93743;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "TreeToSym";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93743 = 0;
F.line = 116;F.filename = "trees.nim";
if (!(((TMP93374[(*T_93025).Kind/8] &(1<<((*T_93025).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP93375));
Result_93743 = (*T_93025).KindU.S4.Sym;
framePtr = framePtr->prev;
return Result_93743;
}
N_NIMCALL(NIM_BOOL, Isconstexpr_93016)(TY54523* N_93018) {
NIM_BOOL Result_93759;
NIM_BOOL LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "isConstExpr";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93759 = 0;
F.line = 119;F.filename = "trees.nim";
LOC1 = ((*N_93018).Kind >= ((NU8) 5) && (*N_93018).Kind <= ((NU8) 10) || (*N_93018).Kind >= ((NU8) 14) && (*N_93018).Kind <= ((NU8) 16) || (*N_93018).Kind >= ((NU8) 11) && (*N_93018).Kind <= ((NU8) 13) || (*N_93018).Kind == ((NU8) 18));
if (LOC1) goto LA2;
LOC1 = (((*N_93018).Flags &(1<<((((NU8) 4))&7)))!=0);
LA2: ;
Result_93759 = LOC1;
framePtr = framePtr->prev;
return Result_93759;
}
N_NIMCALL(void, Flattentreeaux_93783)(TY54523* D_93785, TY54523* A_93786, NU8 Op_93787) {
NU8 LOC2;
NI I_93804;
NI HEX3Atmp_93818;
NI LOC5;
NI Res_93820;
TY54523* LOC7;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "flattenTreeAux";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 124;F.filename = "trees.nim";
LOC2 = Getmagic_93013(A_93786);
if (!(LOC2 == Op_93787)) goto LA3;
I_93804 = 0;
HEX3Atmp_93818 = 0;
F.line = 125;F.filename = "trees.nim";
LOC5 = Sonslen_54801(A_93786);
HEX3Atmp_93818 = subInt(LOC5, 1);
Res_93820 = 0;
F.line = 1011;F.filename = "system.nim";
Res_93820 = 1;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_93820 <= HEX3Atmp_93818)) goto LA6;
F.line = 1011;F.filename = "system.nim";
I_93804 = Res_93820;
F.line = 126;F.filename = "trees.nim";
if (((TMP93101[(*A_93786).Kind/8] &(1<<((*A_93786).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(I_93804) >= (NU)((*A_93786).KindU.S6.Sons->Sup.len)) raiseIndexError();
Flattentreeaux_93783(D_93785, (*A_93786).KindU.S6.Sons->data[I_93804], Op_93787);
F.line = 1014;F.filename = "system.nim";
Res_93820 = addInt(Res_93820, 1);
} LA6: ;
goto LA1;
LA3: ;
F.line = 128;F.filename = "trees.nim";
LOC7 = 0;
LOC7 = Copytree_54856(A_93786);
Addson_54821(D_93785, LOC7);
LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY54523*, Flattentree_93019)(TY54523* Root_93021, NU8 Op_93022) {
TY54523* Result_93827;
NU8 LOC2;
TY54523* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "flattenTree";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_93827 = 0;
F.line = 131;F.filename = "trees.nim";
Result_93827 = Copynode_54853(Root_93021);
F.line = 132;F.filename = "trees.nim";
LOC2 = Getmagic_93013(Root_93021);
if (!(LOC2 == Op_93022)) goto LA3;
F.line = 134;F.filename = "trees.nim";
if (((TMP93101[(*Root_93021).Kind/8] &(1<<((*Root_93021).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(0) >= (NU)((*Root_93021).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC5 = 0;
LOC5 = Copynode_54853((*Root_93021).KindU.S6.Sons->data[0]);
Addson_54821(Result_93827, LOC5);
F.line = 135;F.filename = "trees.nim";
Flattentreeaux_93783(Result_93827, Root_93021, Op_93022);
LA3: ;
framePtr = framePtr->prev;
return Result_93827;
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
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819) {
TY10602* C_11820;
NI LOC4;
TY10602* C_11822;
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
if (!!((Src_11819 == NIM_NIL))) goto LA2;
C_11820 = 0;
F.line = 245;F.filename = "gc.nim";
C_11820 = Usrtocell_11036(Src_11819);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_3001(&(*C_11820).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11818) == NIM_NIL))) goto LA6;
C_11822 = 0;
F.line = 248;F.filename = "gc.nim";
C_11822 = Usrtocell_11036((*Dest_11818));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_3006(&(*C_11822).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11658(C_11822);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11818) = Src_11819;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Swapoperands_93026)(TY54523* Op_93028) {
TY54523* Tmp_93864;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "SwapOperands";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Tmp_93864 = 0;
F.line = 138;F.filename = "trees.nim";
if (((TMP93101[(*Op_93028).Kind/8] &(1<<((*Op_93028).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(1) >= (NU)((*Op_93028).KindU.S6.Sons->Sup.len)) raiseIndexError();
Tmp_93864 = (*Op_93028).KindU.S6.Sons->data[1];
F.line = 139;F.filename = "trees.nim";
if (((TMP93101[(*Op_93028).Kind/8] &(1<<((*Op_93028).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(1) >= (NU)((*Op_93028).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP93101[(*Op_93028).Kind/8] &(1<<((*Op_93028).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(2) >= (NU)((*Op_93028).KindU.S6.Sons->Sup.len)) raiseIndexError();
asgnRefNoCycle((void**) &(*Op_93028).KindU.S6.Sons->data[1], (*Op_93028).KindU.S6.Sons->data[2]);
F.line = 140;F.filename = "trees.nim";
if (((TMP93101[(*Op_93028).Kind/8] &(1<<((*Op_93028).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP93102));
if ((NU)(2) >= (NU)((*Op_93028).KindU.S6.Sons->Sup.len)) raiseIndexError();
asgnRefNoCycle((void**) &(*Op_93028).KindU.S6.Sons->data[2], Tmp_93864);
framePtr = framePtr->prev;
}
N_NOINLINE(void, treesInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "trees";
F.prev = framePtr;
F.filename = "rod/trees.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
