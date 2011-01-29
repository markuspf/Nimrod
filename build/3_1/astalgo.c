/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY59220 TY59220;
typedef struct TY59218 TY59218;
typedef struct TY59216 TY59216;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54547 TY54547;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY53011 TY53011;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY54551 TY54551;
typedef struct TY46536 TY46536;
typedef struct TY54525 TY54525;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY59076 TY59076;
typedef struct TY54563 TY54563;
typedef struct TY54561 TY54561;
typedef struct TY54559 TY54559;
typedef struct TY59104 TY59104;
typedef struct TY59106 TY59106;
typedef struct TY59089 TY59089;
typedef struct TY54569 TY54569;
typedef struct TY54567 TY54567;
typedef struct TY54565 TY54565;
typedef struct TY54519 TY54519;
typedef struct TY54549 TY54549;
typedef struct TY42013 TY42013;
struct TY59216 {
NI Key;
NI Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY59220 {
NI Counter;
TY59218* Data;
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
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
};
struct TY54547 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54551* Typ;
TY53011* Name;
TY46536 Info;
TY54547* Owner;
NU32 Flags;
TY54529 Tab;
TY54525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54539 Loc;
TY54543* Annex;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
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
TY10788 Stat;
};
struct TY59076 {
NI H;
};
struct TY54559 {
TY53005* Key;
TNimObject* Val;
};
struct TY54563 {
NI Counter;
TY54561* Data;
};
struct TY59104 {
NI Tos;
TY59106* Stack;
};
struct TY59089 {
NI H;
TY53011* Name;
};
struct TY54565 {
TY53005* Key;
TY54525* Val;
};
struct TY54569 {
NI Counter;
TY54567* Data;
};
struct TY54525 {
TY54551* Typ;
NimStringDesc* Comment;
TY46536 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54547* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54519* Sons;
} S6;
} KindU;
};
struct TY54551 {
  TY53005 Sup;
NU8 Kind;
TY54549* Sons;
TY54525* N;
NU8 Flags;
NU8 Callconv;
TY54547* Owner;
TY54547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54539 Loc;
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
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
};
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY59218 {
  TGenericSeq Sup;
  TY59216 data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY54561 {
  TGenericSeq Sup;
  TY54559 data[SEQ_DECL_SIZE];
};
struct TY59106 {
  TGenericSeq Sup;
  TY54529 data[SEQ_DECL_SIZE];
};
struct TY54567 {
  TGenericSeq Sup;
  TY54565 data[SEQ_DECL_SIZE];
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
N_NIMCALL(NI, Nexttry_59210)(NI H_59212, NI Maxhash_59213);
N_NIMCALL(NIM_BOOL, Mustrehash_59206)(NI Length_59208, NI Counter_59209);
N_NIMCALL(void, Strtableenlarge_61259)(TY54529* T_61262);
N_NIMCALL(void, Strtablerawinsert_61222)(TY54527** Data_61225, TY54547* N_61226);
N_NIMCALL(void, Internalerror_46571)(TY46536 Info_46573, NimStringDesc* Errmsg_46574);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815);
static N_INLINE(void, Incref_12802)(TY10402* C_12804);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218);
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(void, Decref_12601)(TY10402* C_12603);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(TY54547*, Nextiter_59083)(TY59076* Ti_59086, TY54529* Tab_59087);
N_NIMCALL(NI, Iitablerawget_62033)(TY59220 T_62035, NI Key_62036);
N_NIMCALL(void, Iitablerawinsert_62051)(TY59218** Data_62054, NI Key_62055, NI Val_62056);
N_NIMCALL(NI, Idtablerawget_61667)(TY54563 T_61669, NI Key_61670);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
N_NIMCALL(void, Idtablerawinsert_61719)(TY54561** Data_61722, TY53005* Key_61723, TNimObject* Val_61724);
N_NIMCALL(TY54547*, Strtableget_59066)(TY54529* T_59068, TY53011* Name_59069);
N_NIMCALL(TY54547*, Nextidentiter_59098)(TY59089* Ti_59101, TY54529* Tab_59102);
N_NIMCALL(NI, Idnodetablerawget_61851)(TY54569 T_61853, TY53005* Key_61854);
N_NIMCALL(void, Idnodetablerawinsert_61878)(TY54567** Data_61881, TY53005* Key_61882, TY54525* Val_61883);
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18603, NI Elemsize_18604, NI Newlen_18605);
N_NIMCALL(void, Initstrtable_54746)(TY54529* X_54749);
N_NIMCALL(NU8, Symtabadduniqueat_59140)(TY59104* Tab_59143, TY54547* E_59144, NI At_59145);
N_NIMCALL(void, Strtableadd_59061)(TY54529* T_59064, TY54547* N_59065);
N_NIMCALL(NimStringDesc*, Ropetostr_51063)(TY51008* P_51065);
N_NIMCALL(TY51008*, Debugtype_60347)(TY54551* N_60349);
N_NIMCALL(TY51008*, Torope_51046)(NimStringDesc* S_51048);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19355, TNimType* Typ_19356);
N_NIMCALL(void, App_51036)(TY51008** A_51039, NimStringDesc* B_51040);
static N_INLINE(NI, Sonslen_54806)(TY54551* N_54808);
N_NIMCALL(void, App_51031)(TY51008** A_51034, TY51008* B_51035);
N_NIMCALL(TY54547*, Lookupinrecord_59199)(TY54525* N_59201, TY53011* Field_59202);
static N_INLINE(TY54525*, Lastson_54809)(TY54525* N_54811);
N_NIMCALL(void, Writeln_60742)(FILE* F_60745, NimStringDesc* X_60746);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
STRING_LITERAL(TMP193609, "StrTableRawInsert: ", 19);
STRING_LITERAL(TMP194053, "getSymFromList", 14);
STRING_LITERAL(TMP194136, "null", 4);
STRING_LITERAL(TMP194137, " ", 1);
STRING_LITERAL(TMP194138, "(", 1);
STRING_LITERAL(TMP194139, ", ", 2);
STRING_LITERAL(TMP194140, ")", 1);
STRING_LITERAL(TMP194675, "lookupInRecord", 14);
STRING_LITERAL(TMP194676, "lookupInRecord(record case branch)", 34);
STRING_LITERAL(TMP194677, "lookupInRecord()", 16);
STRING_LITERAL(TMP195503, "\012", 1);
extern TNimType* NTI59218; /* TIIPairSeq */
extern TNimType* NTI54527; /* TSymSeq */
extern TY10790 Gch_10808;
extern TNimType* NTI54561; /* TIdPairSeq */
extern TNimType* NTI59106; /* seq[TStrTable] */
extern TNimType* NTI54567; /* TIdNodePairSeq */
extern TNimType* NTI54162; /* TTypeKind */
N_NIMCALL(void, Initiitable_59225)(TY59220* X_59228) {
NI I_62030;
NI Res_62032;
(*X_59228).Counter = 0;
unsureAsgnRef((void**) &(*X_59228).Data, (TY59218*) newSeq(NTI59218, 8));
I_62030 = 0;
Res_62032 = 0;
Res_62032 = 0;
while (1) {
if (!(Res_62032 <= 7)) goto LA1;
I_62030 = Res_62032;
(*X_59228).Data->data[I_62030].Key = (-2147483647 -1);
Res_62032 += 1;
} LA1: ;
}
N_NIMCALL(NI, Nexttry_59210)(NI H_59212, NI Maxhash_59213) {
NI Result_60792;
Result_60792 = 0;
Result_60792 = (NI32)((NI32)((NI32)(5 * H_59212) + 1) & Maxhash_59213);
return Result_60792;
}
N_NIMCALL(TY54547*, Strtableget_59066)(TY54529* T_59068, TY53011* Name_59069) {
TY54547* Result_61405;
NI H_61406;
Result_61405 = 0;
H_61406 = 0;
H_61406 = (NI32)((*Name_59069).H & ((*T_59068).Data->Sup.len-1));
while (1) {
Result_61405 = (*T_59068).Data->data[H_61406];
if (!(Result_61405 == NIM_NIL)) goto LA3;
goto LA1;
LA3: ;
if (!((*(*Result_61405).Name).Sup.Id == (*Name_59069).Sup.Id)) goto LA6;
goto LA1;
LA6: ;
H_61406 = Nexttry_59210(H_61406, ((*T_59068).Data->Sup.len-1));
} LA1: ;
return Result_61405;
}
N_NIMCALL(NIM_BOOL, Mustrehash_59206)(NI Length_59208, NI Counter_59209) {
NIM_BOOL Result_59523;
NIM_BOOL LOC1;
Result_59523 = 0;
LOC1 = ((NI32)(Length_59208 * 2) < (NI32)(Counter_59209 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI32)(Length_59208 - Counter_59209) < 4);
LA2: ;
Result_59523 = LOC1;
return Result_59523;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI32)((NI32)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7407;
Result_7407 = 0;
(*Memloc_3004) += X_3005;
Result_7407 = (*Memloc_3004);
return Result_7407;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218) {
NIM_BOOL Result_11219;
Result_11219 = 0;
Result_11219 = !((((*(*C_11218).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11219;
}
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854) {
Incl_10674(&Gch_10808.Cycleroots, C_11854);
}
static N_INLINE(void, Incref_12802)(TY10402* C_12804) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_12804).Refcount, 8);
LOC3 = Canbecycleroot_11216(C_12804);
if (!LOC3) goto LA4;
Rtladdcycleroot_11852(C_12804);
LA4: ;
}
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_11214))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
return Result_11215;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7606;
Result_7606 = 0;
(*Memloc_3009) -= X_3010;
Result_7606 = (*Memloc_3009);
return Result_7606;
}
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203) {
Addzct_11201(&Gch_10808.Zct, C_12203);
}
static N_INLINE(void, Decref_12601)(TY10402* C_12603) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_12603).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12201(C_12603);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11216(C_12603);
if (!LOC5) goto LA6;
Rtladdcycleroot_11852(C_12603);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815) {
TY10402* LOC4;
TY10402* LOC8;
if (!!((Src_12815 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11212(Src_12815);
Incref_12802(LOC4);
LA2: ;
if (!!(((*Dest_12814) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11212((*Dest_12814));
Decref_12601(LOC8);
LA6: ;
(*Dest_12814) = Src_12815;
}
N_NIMCALL(void, Strtablerawinsert_61222)(TY54527** Data_61225, TY54547* N_61226) {
NI H_61227;
NimStringDesc* LOC5;
H_61227 = 0;
H_61227 = (NI32)((*(*N_61226).Name).H & ((*Data_61225)->Sup.len-1));
while (1) {
if (!!(((*Data_61225)->data[H_61227] == NIM_NIL))) goto LA1;
if (!((*Data_61225)->data[H_61227] == N_61226)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString((*(*N_61226).Name).S->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP193609));
appendString(LOC5, (*(*N_61226).Name).S);
Internalerror_46571((*N_61226).Info, LOC5);
LA3: ;
H_61227 = Nexttry_59210(H_61227, ((*Data_61225)->Sup.len-1));
} LA1: ;
asgnRef((void**) &(*Data_61225)->data[H_61227], N_61226);
}
N_NIMCALL(void, Strtableenlarge_61259)(TY54529* T_61262) {
TY54527* N_61263;
NI I_61293;
NI HEX3Atmp_61315;
NI Res_61317;
TY54527* LOC5;
N_61263 = 0;
N_61263 = (TY54527*) newSeq(NTI54527, (NI32)((*T_61262).Data->Sup.len * 2));
I_61293 = 0;
HEX3Atmp_61315 = 0;
HEX3Atmp_61315 = ((*T_61262).Data->Sup.len-1);
Res_61317 = 0;
Res_61317 = 0;
while (1) {
if (!(Res_61317 <= HEX3Atmp_61315)) goto LA1;
I_61293 = Res_61317;
if (!!(((*T_61262).Data->data[I_61293] == NIM_NIL))) goto LA3;
Strtablerawinsert_61222(&N_61263, (*T_61262).Data->data[I_61293]);
LA3: ;
Res_61317 += 1;
} LA1: ;
LOC5 = 0;
LOC5 = (*T_61262).Data;
unsureAsgnRef((void**) &(*T_61262).Data, N_61263);
N_61263 = LOC5;
}
N_NIMCALL(void, Strtableadd_59061)(TY54529* T_59064, TY54547* N_59065) {
NIM_BOOL LOC2;
LOC2 = Mustrehash_59206((*T_59064).Data->Sup.len, (*T_59064).Counter);
if (!LOC2) goto LA3;
Strtableenlarge_61259(T_59064);
LA3: ;
Strtablerawinsert_61222(&(*T_59064).Data, N_59065);
(*T_59064).Counter += 1;
}
N_NIMCALL(TY54547*, Nextiter_59083)(TY59076* Ti_59086, TY54529* Tab_59087) {
TY54547* Result_61465;
Result_61465 = 0;
Result_61465 = NIM_NIL;
while (1) {
if (!((*Ti_59086).H <= ((*Tab_59087).Data->Sup.len-1))) goto LA1;
Result_61465 = (*Tab_59087).Data->data[(*Ti_59086).H];
(*Ti_59086).H += 1;
if (!!((Result_61465 == NIM_NIL))) goto LA3;
goto LA1;
LA3: ;
} LA1: ;
return Result_61465;
}
N_NIMCALL(TY54547*, Inittabiter_59078)(TY59076* Ti_59081, TY54529* Tab_59082) {
TY54547* Result_61457;
Result_61457 = 0;
(*Ti_59081).H = 0;
if (!((*Tab_59082).Counter == 0)) goto LA2;
Result_61457 = NIM_NIL;
goto LA1;
LA2: ;
Result_61457 = Nextiter_59083(Ti_59081, Tab_59082);
LA1: ;
return Result_61457;
}
N_NIMCALL(NI, Iitablerawget_62033)(TY59220 T_62035, NI Key_62036) {
NI Result_62037;
NI H_62038;
Result_62037 = 0;
H_62038 = 0;
H_62038 = (NI32)(Key_62036 & (T_62035.Data->Sup.len-1));
while (1) {
if (!!((T_62035.Data->data[H_62038].Key == (-2147483647 -1)))) goto LA1;
if (!(T_62035.Data->data[H_62038].Key == Key_62036)) goto LA3;
Result_62037 = H_62038;
goto BeforeRet;
LA3: ;
H_62038 = Nexttry_59210(H_62038, (T_62035.Data->Sup.len-1));
} LA1: ;
Result_62037 = -1;
BeforeRet: ;
return Result_62037;
}
N_NIMCALL(void, Iitablerawinsert_62051)(TY59218** Data_62054, NI Key_62055, NI Val_62056) {
NI H_62057;
H_62057 = 0;
H_62057 = (NI32)(Key_62055 & ((*Data_62054)->Sup.len-1));
while (1) {
if (!!(((*Data_62054)->data[H_62057].Key == (-2147483647 -1)))) goto LA1;
H_62057 = Nexttry_59210(H_62057, ((*Data_62054)->Sup.len-1));
} LA1: ;
(*Data_62054)->data[H_62057].Key = Key_62055;
(*Data_62054)->data[H_62057].Val = Val_62056;
}
N_NIMCALL(void, Iitableput_59233)(TY59220* T_59236, NI Key_59237, NI Val_59238) {
NI Index_62070;
NIM_BOOL LOC5;
TY59218* N_62085;
NI I_62115;
NI HEX3Atmp_62149;
NI Res_62151;
NI I_62123;
NI HEX3Atmp_62152;
NI Res_62154;
TY59218* LOC13;
Index_62070 = 0;
Index_62070 = Iitablerawget_62033((*T_59236), Key_59237);
if (!(0 <= Index_62070)) goto LA2;
(*T_59236).Data->data[Index_62070].Val = Val_59238;
goto LA1;
LA2: ;
LOC5 = Mustrehash_59206((*T_59236).Data->Sup.len, (*T_59236).Counter);
if (!LOC5) goto LA6;
N_62085 = 0;
N_62085 = (TY59218*) newSeq(NTI59218, (NI32)((*T_59236).Data->Sup.len * 2));
I_62115 = 0;
HEX3Atmp_62149 = 0;
HEX3Atmp_62149 = (N_62085->Sup.len-1);
Res_62151 = 0;
Res_62151 = 0;
while (1) {
if (!(Res_62151 <= HEX3Atmp_62149)) goto LA8;
I_62115 = Res_62151;
N_62085->data[I_62115].Key = (-2147483647 -1);
Res_62151 += 1;
} LA8: ;
I_62123 = 0;
HEX3Atmp_62152 = 0;
HEX3Atmp_62152 = ((*T_59236).Data->Sup.len-1);
Res_62154 = 0;
Res_62154 = 0;
while (1) {
if (!(Res_62154 <= HEX3Atmp_62152)) goto LA9;
I_62123 = Res_62154;
if (!!(((*T_59236).Data->data[I_62123].Key == (-2147483647 -1)))) goto LA11;
Iitablerawinsert_62051(&N_62085, (*T_59236).Data->data[I_62123].Key, (*T_59236).Data->data[I_62123].Val);
LA11: ;
Res_62154 += 1;
} LA9: ;
LOC13 = 0;
LOC13 = (*T_59236).Data;
unsureAsgnRef((void**) &(*T_59236).Data, N_62085);
N_62085 = LOC13;
LA6: ;
Iitablerawinsert_62051(&(*T_59236).Data, Key_59237, Val_59238);
(*T_59236).Counter += 1;
LA1: ;
}
N_NIMCALL(NI, Idtablerawget_61667)(TY54563 T_61669, NI Key_61670) {
NI Result_61671;
NI H_61672;
Result_61671 = 0;
H_61672 = 0;
H_61672 = (NI32)(Key_61670 & (T_61669.Data->Sup.len-1));
while (1) {
if (!!((T_61669.Data->data[H_61672].Key == NIM_NIL))) goto LA1;
if (!((*T_61669.Data->data[H_61672].Key).Id == Key_61670)) goto LA3;
Result_61671 = H_61672;
goto BeforeRet;
LA3: ;
H_61672 = Nexttry_59210(H_61672, (T_61669.Data->Sup.len-1));
} LA1: ;
Result_61671 = -1;
BeforeRet: ;
return Result_61671;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819) {
TY10402* C_12820;
NI LOC4;
TY10402* C_12822;
NI LOC9;
if (!!((Src_12819 == NIM_NIL))) goto LA2;
C_12820 = 0;
C_12820 = Usrtocell_11212(Src_12819);
LOC4 = Atomicinc_3001(&(*C_12820).Refcount, 8);
LA2: ;
if (!!(((*Dest_12818) == NIM_NIL))) goto LA6;
C_12822 = 0;
C_12822 = Usrtocell_11212((*Dest_12818));
LOC9 = Atomicdec_3006(&(*C_12822).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12201(C_12822);
LA10: ;
LA6: ;
(*Dest_12818) = Src_12819;
}
N_NIMCALL(void, Idtablerawinsert_61719)(TY54561** Data_61722, TY53005* Key_61723, TNimObject* Val_61724) {
NI H_61725;
H_61725 = 0;
H_61725 = (NI32)((*Key_61723).Id & ((*Data_61722)->Sup.len-1));
while (1) {
if (!!(((*Data_61722)->data[H_61725].Key == NIM_NIL))) goto LA1;
H_61725 = Nexttry_59210(H_61725, ((*Data_61722)->Sup.len-1));
} LA1: ;
asgnRefNoCycle((void**) &(*Data_61722)->data[H_61725].Key, Key_61723);
asgnRefNoCycle((void**) &(*Data_61722)->data[H_61725].Val, Val_61724);
}
N_NIMCALL(void, Idtableput_59171)(TY54563* T_59174, TY53005* Key_59175, TNimObject* Val_59176) {
NI Index_61756;
TY54561* N_61757;
NIM_BOOL LOC5;
NI I_61810;
NI HEX3Atmp_61845;
NI Res_61847;
TY54561* LOC12;
Index_61756 = 0;
N_61757 = 0;
Index_61756 = Idtablerawget_61667((*T_59174), (*Key_59175).Id);
if (!(0 <= Index_61756)) goto LA2;
asgnRefNoCycle((void**) &(*T_59174).Data->data[Index_61756].Val, Val_59176);
goto LA1;
LA2: ;
LOC5 = Mustrehash_59206((*T_59174).Data->Sup.len, (*T_59174).Counter);
if (!LOC5) goto LA6;
N_61757 = (TY54561*) newSeq(NTI54561, (NI32)((*T_59174).Data->Sup.len * 2));
I_61810 = 0;
HEX3Atmp_61845 = 0;
HEX3Atmp_61845 = ((*T_59174).Data->Sup.len-1);
Res_61847 = 0;
Res_61847 = 0;
while (1) {
if (!(Res_61847 <= HEX3Atmp_61845)) goto LA8;
I_61810 = Res_61847;
if (!!(((*T_59174).Data->data[I_61810].Key == NIM_NIL))) goto LA10;
Idtablerawinsert_61719(&N_61757, (*T_59174).Data->data[I_61810].Key, (*T_59174).Data->data[I_61810].Val);
LA10: ;
Res_61847 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_59174).Data;
unsureAsgnRef((void**) &(*T_59174).Data, N_61757);
N_61757 = LOC12;
LA6: ;
Idtablerawinsert_61719(&(*T_59174).Data, Key_59175, Val_59176);
(*T_59174).Counter += 1;
LA1: ;
}
N_NIMCALL(TNimObject*, Idtableget_59167)(TY54563 T_59169, NI Key_59170) {
TNimObject* Result_61715;
NI Index_61716;
Result_61715 = 0;
Index_61716 = 0;
Index_61716 = Idtablerawget_61667(T_59169, Key_59170);
if (!(0 <= Index_61716)) goto LA2;
Result_61715 = T_59169.Data->data[Index_61716].Val;
goto LA1;
LA2: ;
Result_61715 = NIM_NIL;
LA1: ;
return Result_61715;
}
N_NIMCALL(NI, Iitableget_59229)(TY59220 T_59231, NI Key_59232) {
NI Result_62047;
NI Index_62048;
Result_62047 = 0;
Index_62048 = 0;
Index_62048 = Iitablerawget_62033(T_59231, Key_59232);
if (!(0 <= Index_62048)) goto LA2;
Result_62047 = T_59231.Data->data[Index_62048].Val;
goto LA1;
LA2: ;
Result_62047 = (-2147483647 -1);
LA1: ;
return Result_62047;
}
N_NIMCALL(void, Initsymtab_59108)(TY59104* Tab_59111) {
(*Tab_59111).Tos = 0;
unsureAsgnRef((void**) &(*Tab_59111).Stack, (TY59106*) newSeq(NTI59106, 0));
}
N_NIMCALL(TY54547*, Symtabget_59116)(TY59104 Tab_59118, TY53011* S_59119) {
TY54547* Result_61508;
NI I_61531;
NI HEX3Atmp_61543;
NI Res_61545;
Result_61508 = 0;
I_61531 = 0;
HEX3Atmp_61543 = 0;
HEX3Atmp_61543 = (NI32)(((NI) (Tab_59118.Tos)) - 1);
Res_61545 = 0;
Res_61545 = HEX3Atmp_61543;
while (1) {
if (!(0 <= Res_61545)) goto LA1;
I_61531 = Res_61545;
Result_61508 = Strtableget_59066(&Tab_59118.Stack->data[I_61531], S_59119);
if (!!((Result_61508 == NIM_NIL))) goto LA3;
goto BeforeRet;
LA3: ;
Res_61545 -= 1;
} LA1: ;
Result_61508 = NIM_NIL;
BeforeRet: ;
return Result_61508;
}
N_NIMCALL(TY54547*, Getmodule_59203)(TY54547* S_59205) {
TY54547* Result_59412;
NIM_BOOL LOC2;
Result_59412 = 0;
Result_59412 = S_59205;
while (1) {
LOC2 = !((Result_59412 == NIM_NIL));
if (!(LOC2)) goto LA3;
LOC2 = !(((*Result_59412).Kind == ((NU8) 6)));
LA3: ;
if (!LOC2) goto LA1;
Result_59412 = (*Result_59412).Owner;
} LA1: ;
return Result_59412;
}
N_NIMCALL(TY54547*, Nextidentiter_59098)(TY59089* Ti_59101, TY54529* Tab_59102) {
TY54547* Result_61434;
NI H_61435;
NI Start_61436;
Result_61434 = 0;
H_61435 = 0;
Start_61436 = 0;
H_61435 = (NI32)((*Ti_59101).H & ((*Tab_59102).Data->Sup.len-1));
Start_61436 = H_61435;
Result_61434 = (*Tab_59102).Data->data[H_61435];
while (1) {
if (!!((Result_61434 == NIM_NIL))) goto LA1;
if (!((*(*Result_61434).Name).Sup.Id == (*(*Ti_59101).Name).Sup.Id)) goto LA3;
goto LA1;
LA3: ;
H_61435 = Nexttry_59210(H_61435, ((*Tab_59102).Data->Sup.len-1));
if (!(H_61435 == Start_61436)) goto LA6;
Result_61434 = NIM_NIL;
goto LA1;
LA6: ;
Result_61434 = (*Tab_59102).Data->data[H_61435];
} LA1: ;
(*Ti_59101).H = Nexttry_59210(H_61435, ((*Tab_59102).Data->Sup.len-1));
return Result_61434;
}
N_NIMCALL(TY54547*, Initidentiter_59092)(TY59089* Ti_59095, TY54529* Tab_59096, TY53011* S_59097) {
TY54547* Result_61426;
Result_61426 = 0;
(*Ti_59095).H = (*S_59097).H;
unsureAsgnRef((void**) &(*Ti_59095).Name, S_59097);
if (!((*Tab_59096).Counter == 0)) goto LA2;
Result_61426 = NIM_NIL;
goto LA1;
LA2: ;
Result_61426 = Nextidentiter_59098(Ti_59095, Tab_59096);
LA1: ;
return Result_61426;
}
N_NIMCALL(NI, Idnodetablerawget_61851)(TY54569 T_61853, TY53005* Key_61854) {
NI Result_61855;
NI H_61856;
Result_61855 = 0;
H_61856 = 0;
H_61856 = (NI32)((*Key_61854).Id & (T_61853.Data->Sup.len-1));
while (1) {
if (!!((T_61853.Data->data[H_61856].Key == NIM_NIL))) goto LA1;
if (!((*T_61853.Data->data[H_61856].Key).Id == (*Key_61854).Id)) goto LA3;
Result_61855 = H_61856;
goto BeforeRet;
LA3: ;
H_61856 = Nexttry_59210(H_61856, (T_61853.Data->Sup.len-1));
} LA1: ;
Result_61855 = -1;
BeforeRet: ;
return Result_61855;
}
N_NIMCALL(TY54525*, Idnodetableget_59181)(TY54569 T_59183, TY53005* Key_59184) {
TY54525* Result_61874;
NI Index_61875;
Result_61874 = 0;
Index_61875 = 0;
Index_61875 = Idnodetablerawget_61851(T_59183, Key_59184);
if (!(0 <= Index_61875)) goto LA2;
Result_61874 = T_59183.Data->data[Index_61875].Val;
goto LA1;
LA2: ;
Result_61874 = NIM_NIL;
LA1: ;
return Result_61874;
}
N_NIMCALL(void, Idnodetablerawinsert_61878)(TY54567** Data_61881, TY53005* Key_61882, TY54525* Val_61883) {
NI H_61884;
H_61884 = 0;
H_61884 = (NI32)((*Key_61882).Id & ((*Data_61881)->Sup.len-1));
while (1) {
if (!!(((*Data_61881)->data[H_61884].Key == NIM_NIL))) goto LA1;
H_61884 = Nexttry_59210(H_61884, ((*Data_61881)->Sup.len-1));
} LA1: ;
asgnRefNoCycle((void**) &(*Data_61881)->data[H_61884].Key, Key_61882);
asgnRefNoCycle((void**) &(*Data_61881)->data[H_61884].Val, Val_61883);
}
N_NIMCALL(void, Idnodetableput_59185)(TY54569* T_59188, TY53005* Key_59189, TY54525* Val_59190) {
NI Index_61915;
NIM_BOOL LOC5;
TY54567* N_61939;
NI I_61969;
NI HEX3Atmp_62004;
NI Res_62006;
TY54567* LOC12;
Index_61915 = 0;
Index_61915 = Idnodetablerawget_61851((*T_59188), Key_59189);
if (!(0 <= Index_61915)) goto LA2;
asgnRefNoCycle((void**) &(*T_59188).Data->data[Index_61915].Val, Val_59190);
goto LA1;
LA2: ;
LOC5 = Mustrehash_59206((*T_59188).Data->Sup.len, (*T_59188).Counter);
if (!LOC5) goto LA6;
N_61939 = 0;
N_61939 = (TY54567*) newSeq(NTI54567, (NI32)((*T_59188).Data->Sup.len * 2));
I_61969 = 0;
HEX3Atmp_62004 = 0;
HEX3Atmp_62004 = ((*T_59188).Data->Sup.len-1);
Res_62006 = 0;
Res_62006 = 0;
while (1) {
if (!(Res_62006 <= HEX3Atmp_62004)) goto LA8;
I_61969 = Res_62006;
if (!!(((*T_59188).Data->data[I_61969].Key == NIM_NIL))) goto LA10;
Idnodetablerawinsert_61878(&N_61939, (*T_59188).Data->data[I_61969].Key, (*T_59188).Data->data[I_61969].Val);
LA10: ;
Res_62006 += 1;
} LA8: ;
LOC12 = 0;
LOC12 = (*T_59188).Data;
unsureAsgnRef((void**) &(*T_59188).Data, N_61939);
N_61939 = LOC12;
LA6: ;
Idnodetablerawinsert_61878(&(*T_59188).Data, Key_59189, Val_59190);
(*T_59188).Counter += 1;
LA1: ;
}
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805) {
NI Result_55880;
Result_55880 = 0;
if (!(*N_54805).KindU.S6.Sons == 0) goto LA2;
Result_55880 = 0;
goto LA1;
LA2: ;
Result_55880 = (*N_54805).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_55880;
}
N_NIMCALL(TY54547*, Getsymfromlist_59194)(TY54525* List_59196, TY53011* Ident_59197, NI Start_59198) {
TY54547* Result_59456;
NI I_59464;
NI HEX3Atmp_59512;
NI LOC1;
NI Res_59514;
Result_59456 = 0;
I_59464 = 0;
HEX3Atmp_59512 = 0;
LOC1 = Sonslen_54803(List_59196);
HEX3Atmp_59512 = (NI32)(LOC1 - 1);
Res_59514 = 0;
Res_59514 = Start_59198;
while (1) {
if (!(Res_59514 <= HEX3Atmp_59512)) goto LA2;
I_59464 = Res_59514;
if (!!(((*(*List_59196).KindU.S6.Sons->data[I_59464]).Kind == ((NU8) 3)))) goto LA4;
Internalerror_46571((*List_59196).Info, ((NimStringDesc*) &TMP194053));
LA4: ;
Result_59456 = (*(*List_59196).KindU.S6.Sons->data[I_59464]).KindU.S4.Sym;
if (!((*(*Result_59456).Name).Sup.Id == (*Ident_59197).Sup.Id)) goto LA7;
goto BeforeRet;
LA7: ;
Res_59514 += 1;
} LA2: ;
Result_59456 = NIM_NIL;
BeforeRet: ;
return Result_59456;
}
N_NIMCALL(TNimObject*, Idtableget_59163)(TY54563 T_59165, TY53005* Key_59166) {
TNimObject* Result_61707;
NI Index_61708;
Result_61707 = 0;
Index_61708 = 0;
Index_61708 = Idtablerawget_61667(T_59165, (*Key_59166).Id);
if (!(0 <= Index_61708)) goto LA2;
Result_61707 = T_59165.Data->data[Index_61708].Val;
goto LA1;
LA2: ;
Result_61707 = NIM_NIL;
LA1: ;
return Result_61707;
}
N_NIMCALL(void, Openscope_59146)(TY59104* Tab_59149) {
if (!((*Tab_59149).Stack->Sup.len <= ((NI) ((*Tab_59149).Tos)))) goto LA2;
(*Tab_59149).Stack = (TY59106*) setLengthSeq(&((*Tab_59149).Stack)->Sup, sizeof(TY54529), (NI32)(((NI) ((*Tab_59149).Tos)) + 1));
LA2: ;
Initstrtable_54746(&(*Tab_59149).Stack->data[(*Tab_59149).Tos]);
(*Tab_59149).Tos += 1;
}
N_NIMCALL(NU8, Symtabadduniqueat_59140)(TY59104* Tab_59143, TY54547* E_59144, NI At_59145) {
NU8 Result_61565;
TY54547* LOC2;
Result_61565 = 0;
LOC2 = 0;
LOC2 = Strtableget_59066(&(*Tab_59143).Stack->data[At_59145], (*E_59144).Name);
if (!!((LOC2 == NIM_NIL))) goto LA3;
Result_61565 = ((NU8) 0);
goto LA1;
LA3: ;
Strtableadd_59061(&(*Tab_59143).Stack->data[At_59145], E_59144);
Result_61565 = ((NU8) 1);
LA1: ;
return Result_61565;
}
N_NIMCALL(NU8, Symtabaddunique_59135)(TY59104* Tab_59138, TY54547* E_59139) {
NU8 Result_61583;
Result_61583 = 0;
Result_61583 = Symtabadduniqueat_59140(Tab_59138, E_59139, ((NI) ((NI32)(((NI) ((*Tab_59138).Tos)) - 1))));
return Result_61583;
}
N_NIMCALL(void, Rawclosescope_59150)(TY59104* Tab_59153) {
(*Tab_59153).Tos -= 1;
}
static N_INLINE(NI, Sonslen_54806)(TY54551* N_54808) {
NI Result_55744;
Result_55744 = 0;
if (!(*N_54808).Sons == 0) goto LA2;
Result_55744 = 0;
goto LA1;
LA2: ;
Result_55744 = (*N_54808).Sons->Sup.len;
LA1: ;
return Result_55744;
}
N_NIMCALL(TY51008*, Debugtype_60347)(TY54551* N_60349) {
TY51008* Result_60350;
NIM_BOOL LOC8;
NI LOC10;
NI I_60402;
NI HEX3Atmp_60420;
NI LOC13;
NI Res_60422;
TY51008* LOC21;
Result_60350 = 0;
if (!(N_60349 == NIM_NIL)) goto LA2;
Result_60350 = Torope_51046(((NimStringDesc*) &TMP194136));
goto LA1;
LA2: ;
Result_60350 = Torope_51046(reprEnum((*N_60349).Kind, NTI54162));
if (!!(((*N_60349).Sym == NIM_NIL))) goto LA5;
App_51036(&Result_60350, ((NimStringDesc*) &TMP194137));
App_51036(&Result_60350, (*(*(*N_60349).Sym).Name).S);
LA5: ;
LOC8 = !(((*N_60349).Kind == ((NU8) 28)));
if (!(LOC8)) goto LA9;
LOC10 = Sonslen_54806(N_60349);
LOC8 = (0 < LOC10);
LA9: ;
if (!LOC8) goto LA11;
App_51036(&Result_60350, ((NimStringDesc*) &TMP194138));
I_60402 = 0;
HEX3Atmp_60420 = 0;
LOC13 = Sonslen_54806(N_60349);
HEX3Atmp_60420 = (NI32)(LOC13 - 1);
Res_60422 = 0;
Res_60422 = 0;
while (1) {
if (!(Res_60422 <= HEX3Atmp_60420)) goto LA14;
I_60402 = Res_60422;
if (!(0 < I_60402)) goto LA16;
App_51036(&Result_60350, ((NimStringDesc*) &TMP194139));
LA16: ;
if (!((*N_60349).Sons->data[I_60402] == NIM_NIL)) goto LA19;
App_51036(&Result_60350, ((NimStringDesc*) &TMP194136));
goto LA18;
LA19: ;
LOC21 = 0;
LOC21 = Debugtype_60347((*N_60349).Sons->data[I_60402]);
App_51031(&Result_60350, LOC21);
LA18: ;
Res_60422 += 1;
} LA14: ;
App_51036(&Result_60350, ((NimStringDesc*) &TMP194140));
LA11: ;
LA1: ;
return Result_60350;
}
N_NIMCALL(void, Debug_59157)(TY54551* N_59159) {
TY51008* LOC1;
NimStringDesc* LOC2;
LOC1 = 0;
LOC1 = Debugtype_60347(N_59159);
LOC2 = 0;
LOC2 = Ropetostr_51063(LOC1);
Writeln_60742(stdout, LOC2);
}
N_NIMCALL(void, Symtabaddat_59129)(TY59104* Tab_59132, TY54547* E_59133, NI At_59134) {
Strtableadd_59061(&(*Tab_59132).Stack->data[At_59134], E_59133);
}
N_NIMCALL(TY54547*, Symtablocalget_59120)(TY59104 Tab_59122, TY53011* S_59123) {
TY54547* Result_61503;
Result_61503 = 0;
Result_61503 = Strtableget_59066(&Tab_59122.Stack->data[(NI32)(((NI) (Tab_59122.Tos)) - 1)], S_59123);
return Result_61503;
}
N_NIMCALL(void, Symtabadd_59124)(TY59104* Tab_59127, TY54547* E_59128) {
Strtableadd_59061(&(*Tab_59127).Stack->data[(NI32)(((NI) ((*Tab_59127).Tos)) - 1)], E_59128);
}
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_59177)(TY54563 T_59179, TY53005* Key_59180) {
NIM_BOOL Result_61690;
NI Index_61691;
Result_61690 = 0;
Index_61691 = 0;
Index_61691 = Idtablerawget_61667(T_59179, (*Key_59180).Id);
if (!(0 <= Index_61691)) goto LA2;
Result_61690 = (T_59179.Data->data[Index_61691].Key == Key_59180);
goto LA1;
LA2: ;
Result_61690 = NIM_FALSE;
LA1: ;
return Result_61690;
}
static N_INLINE(TY54525*, Lastson_54809)(TY54525* N_54811) {
TY54525* Result_56817;
NI LOC1;
Result_56817 = 0;
LOC1 = Sonslen_54803(N_54811);
Result_56817 = (*N_54811).KindU.S6.Sons->data[(NI32)(LOC1 - 1)];
return Result_56817;
}
N_NIMCALL(TY54547*, Lookupinrecord_59199)(TY54525* N_59201, TY53011* Field_59202) {
TY54547* Result_59243;
NI I_59266;
NI HEX3Atmp_59403;
NI LOC1;
NI Res_59405;
NI I_59341;
NI HEX3Atmp_59406;
NI LOC12;
NI Res_59408;
TY54525* LOC14;
Result_59243 = 0;
Result_59243 = NIM_NIL;
switch ((*N_59201).Kind) {
case ((NU8) 113):
I_59266 = 0;
HEX3Atmp_59403 = 0;
LOC1 = Sonslen_54803(N_59201);
HEX3Atmp_59403 = (NI32)(LOC1 - 1);
Res_59405 = 0;
Res_59405 = 0;
while (1) {
if (!(Res_59405 <= HEX3Atmp_59403)) goto LA2;
I_59266 = Res_59405;
Result_59243 = Lookupinrecord_59199((*N_59201).KindU.S6.Sons->data[I_59266], Field_59202);
if (!!((Result_59243 == NIM_NIL))) goto LA4;
goto BeforeRet;
LA4: ;
Res_59405 += 1;
} LA2: ;
break;
case ((NU8) 114):
if (!!(((*(*N_59201).KindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA7;
Internalerror_46571((*N_59201).Info, ((NimStringDesc*) &TMP194675));
LA7: ;
Result_59243 = Lookupinrecord_59199((*N_59201).KindU.S6.Sons->data[0], Field_59202);
if (!!((Result_59243 == NIM_NIL))) goto LA10;
goto BeforeRet;
LA10: ;
I_59341 = 0;
HEX3Atmp_59406 = 0;
LOC12 = Sonslen_54803(N_59201);
HEX3Atmp_59406 = (NI32)(LOC12 - 1);
Res_59408 = 0;
Res_59408 = 1;
while (1) {
if (!(Res_59408 <= HEX3Atmp_59406)) goto LA13;
I_59341 = Res_59408;
switch ((*(*N_59201).KindU.S6.Sons->data[I_59341]).Kind) {
case ((NU8) 75):
case ((NU8) 78):
LOC14 = 0;
LOC14 = Lastson_54809((*N_59201).KindU.S6.Sons->data[I_59341]);
Result_59243 = Lookupinrecord_59199(LOC14, Field_59202);
if (!!((Result_59243 == NIM_NIL))) goto LA16;
goto BeforeRet;
LA16: ;
break;
default:
Internalerror_46571((*N_59201).Info, ((NimStringDesc*) &TMP194676));
break;
}
Res_59408 += 1;
} LA13: ;
break;
case ((NU8) 3):
if (!((*(*(*N_59201).KindU.S4.Sym).Name).Sup.Id == (*Field_59202).Sup.Id)) goto LA19;
Result_59243 = (*N_59201).KindU.S4.Sym;
LA19: ;
break;
default:
Internalerror_46571((*N_59201).Info, ((NimStringDesc*) &TMP194677));
break;
}
BeforeRet: ;
return Result_59243;
}
N_NIMCALL(void, Writeln_60742)(FILE* F_60745, NimStringDesc* X_60746) {
Write_3658(F_60745, X_60746);
Write_3658(F_60745, ((NimStringDesc*) &TMP195503));
}
N_NOINLINE(void, astalgoInit)(void) {
}
