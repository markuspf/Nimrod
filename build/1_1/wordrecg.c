/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY48011 TY48011;
typedef struct TY48005 TY48005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY66241[220];
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
struct TY48005 {
  TNimObject Sup;
NI Id;
};
struct TY48011 {
  TY48005 Sup;
NimStringDesc* S;
TY48011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, Findstr_66471)(NimStringDesc** A_66474, NI A_66474Len0, NimStringDesc* S_66475);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_22638, NimStringDesc* B_22639);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NU8, Whichkeyword_66468)(NimStringDesc* Id_66470);
N_NIMCALL(TY48011*, Getident_48016)(NimStringDesc* Identifier_48018);
N_NIMCALL(NU8, Whichkeyword_66465)(TY48011* Id_66467);
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612);
N_NOINLINE(void, raiseRangeError)(NI64 Val_5218);
N_NIMCALL(void, Initspecials_66523)(void);
N_NIMCALL(TY48011*, Getident_48019)(NimStringDesc* Identifier_48021, NI H_48022);
N_NIMCALL(NI, Getnormalizedhash_38037)(NimStringDesc* S_38039);
STRING_LITERAL(TMP66245, "", 0);
STRING_LITERAL(TMP66246, "addr", 4);
STRING_LITERAL(TMP66247, "and", 3);
STRING_LITERAL(TMP66248, "as", 2);
STRING_LITERAL(TMP66249, "asm", 3);
STRING_LITERAL(TMP66250, "atomic", 6);
STRING_LITERAL(TMP66251, "bind", 4);
STRING_LITERAL(TMP66252, "block", 5);
STRING_LITERAL(TMP66253, "break", 5);
STRING_LITERAL(TMP66254, "case", 4);
STRING_LITERAL(TMP66255, "cast", 4);
STRING_LITERAL(TMP66256, "const", 5);
STRING_LITERAL(TMP66257, "continue", 8);
STRING_LITERAL(TMP66258, "converter", 9);
STRING_LITERAL(TMP66259, "discard", 7);
STRING_LITERAL(TMP66260, "distinct", 8);
STRING_LITERAL(TMP66261, "div", 3);
STRING_LITERAL(TMP66262, "elif", 4);
STRING_LITERAL(TMP66263, "else", 4);
STRING_LITERAL(TMP66264, "end", 3);
STRING_LITERAL(TMP66265, "enum", 4);
STRING_LITERAL(TMP66266, "except", 6);
STRING_LITERAL(TMP66267, "finally", 7);
STRING_LITERAL(TMP66268, "for", 3);
STRING_LITERAL(TMP66269, "from", 4);
STRING_LITERAL(TMP66270, "generic", 7);
STRING_LITERAL(TMP66271, "if", 2);
STRING_LITERAL(TMP66272, "implies", 7);
STRING_LITERAL(TMP66273, "import", 6);
STRING_LITERAL(TMP66274, "in", 2);
STRING_LITERAL(TMP66275, "include", 7);
STRING_LITERAL(TMP66276, "is", 2);
STRING_LITERAL(TMP66277, "isnot", 5);
STRING_LITERAL(TMP66278, "iterator", 8);
STRING_LITERAL(TMP66279, "lambda", 6);
STRING_LITERAL(TMP66280, "let", 3);
STRING_LITERAL(TMP66281, "macro", 5);
STRING_LITERAL(TMP66282, "method", 6);
STRING_LITERAL(TMP66283, "mod", 3);
STRING_LITERAL(TMP66284, "nil", 3);
STRING_LITERAL(TMP66285, "not", 3);
STRING_LITERAL(TMP66286, "notin", 5);
STRING_LITERAL(TMP66287, "object", 6);
STRING_LITERAL(TMP66288, "of", 2);
STRING_LITERAL(TMP66289, "or", 2);
STRING_LITERAL(TMP66290, "out", 3);
STRING_LITERAL(TMP66291, "proc", 4);
STRING_LITERAL(TMP66292, "ptr", 3);
STRING_LITERAL(TMP66293, "raise", 5);
STRING_LITERAL(TMP66294, "ref", 3);
STRING_LITERAL(TMP66295, "return", 6);
STRING_LITERAL(TMP66296, "shl", 3);
STRING_LITERAL(TMP66297, "shr", 3);
STRING_LITERAL(TMP66298, "template", 8);
STRING_LITERAL(TMP66299, "try", 3);
STRING_LITERAL(TMP66300, "tuple", 5);
STRING_LITERAL(TMP66301, "type", 4);
STRING_LITERAL(TMP66302, "var", 3);
STRING_LITERAL(TMP66303, "when", 4);
STRING_LITERAL(TMP66304, "while", 5);
STRING_LITERAL(TMP66305, "with", 4);
STRING_LITERAL(TMP66306, "without", 7);
STRING_LITERAL(TMP66307, "xor", 3);
STRING_LITERAL(TMP66308, "yield", 5);
STRING_LITERAL(TMP66309, ":", 1);
STRING_LITERAL(TMP66310, "=", 1);
STRING_LITERAL(TMP66311, ".", 1);
STRING_LITERAL(TMP66312, "..", 2);
STRING_LITERAL(TMP66313, "^", 1);
STRING_LITERAL(TMP66314, "*", 1);
STRING_LITERAL(TMP66315, "-", 1);
STRING_LITERAL(TMP66316, "magic", 5);
STRING_LITERAL(TMP66317, "typecheck", 9);
STRING_LITERAL(TMP66318, "final", 5);
STRING_LITERAL(TMP66319, "profiler", 8);
STRING_LITERAL(TMP66320, "objchecks", 9);
STRING_LITERAL(TMP66321, "importc", 7);
STRING_LITERAL(TMP66322, "exportc", 7);
STRING_LITERAL(TMP66323, "extern", 6);
STRING_LITERAL(TMP66324, "align", 5);
STRING_LITERAL(TMP66325, "nodecl", 6);
STRING_LITERAL(TMP66326, "pure", 4);
STRING_LITERAL(TMP66327, "volatile", 8);
STRING_LITERAL(TMP66328, "register", 8);
STRING_LITERAL(TMP66329, "sideeffect", 10);
STRING_LITERAL(TMP66330, "header", 6);
STRING_LITERAL(TMP66331, "nosideeffect", 12);
STRING_LITERAL(TMP66332, "noreturn", 8);
STRING_LITERAL(TMP66333, "merge", 5);
STRING_LITERAL(TMP66334, "lib", 3);
STRING_LITERAL(TMP66335, "dynlib", 6);
STRING_LITERAL(TMP66336, "compilerproc", 12);
STRING_LITERAL(TMP66337, "procvar", 7);
STRING_LITERAL(TMP66338, "fatal", 5);
STRING_LITERAL(TMP66339, "error", 5);
STRING_LITERAL(TMP66340, "warning", 7);
STRING_LITERAL(TMP66341, "hint", 4);
STRING_LITERAL(TMP66342, "line", 4);
STRING_LITERAL(TMP66343, "push", 4);
STRING_LITERAL(TMP66344, "pop", 3);
STRING_LITERAL(TMP66345, "define", 6);
STRING_LITERAL(TMP66346, "undef", 5);
STRING_LITERAL(TMP66347, "linedir", 7);
STRING_LITERAL(TMP66348, "stacktrace", 10);
STRING_LITERAL(TMP66349, "linetrace", 9);
STRING_LITERAL(TMP66350, "parallelbuild", 13);
STRING_LITERAL(TMP66351, "link", 4);
STRING_LITERAL(TMP66352, "compile", 7);
STRING_LITERAL(TMP66353, "linksys", 7);
STRING_LITERAL(TMP66354, "deprecated", 10);
STRING_LITERAL(TMP66355, "varargs", 7);
STRING_LITERAL(TMP66356, "byref", 5);
STRING_LITERAL(TMP66357, "callconv", 8);
STRING_LITERAL(TMP66358, "breakpoint", 10);
STRING_LITERAL(TMP66359, "debugger", 8);
STRING_LITERAL(TMP66360, "nimcall", 7);
STRING_LITERAL(TMP66361, "stdcall", 7);
STRING_LITERAL(TMP66362, "cdecl", 5);
STRING_LITERAL(TMP66363, "safecall", 8);
STRING_LITERAL(TMP66364, "syscall", 7);
STRING_LITERAL(TMP66365, "inline", 6);
STRING_LITERAL(TMP66366, "noinline", 8);
STRING_LITERAL(TMP66367, "fastcall", 8);
STRING_LITERAL(TMP66368, "closure", 7);
STRING_LITERAL(TMP66369, "noconv", 6);
STRING_LITERAL(TMP66370, "on", 2);
STRING_LITERAL(TMP66371, "off", 3);
STRING_LITERAL(TMP66372, "checks", 6);
STRING_LITERAL(TMP66373, "rangechecks", 11);
STRING_LITERAL(TMP66374, "boundchecks", 11);
STRING_LITERAL(TMP66375, "overflowchecks", 14);
STRING_LITERAL(TMP66376, "nilchecks", 9);
STRING_LITERAL(TMP66377, "floatchecks", 11);
STRING_LITERAL(TMP66378, "nanchecks", 9);
STRING_LITERAL(TMP66379, "infchecks", 9);
STRING_LITERAL(TMP66380, "assertions", 10);
STRING_LITERAL(TMP66381, "warnings", 8);
STRING_LITERAL(TMP66382, "w", 1);
STRING_LITERAL(TMP66383, "hints", 5);
STRING_LITERAL(TMP66384, "optimization", 12);
STRING_LITERAL(TMP66385, "speed", 5);
STRING_LITERAL(TMP66386, "size", 4);
STRING_LITERAL(TMP66387, "none", 4);
STRING_LITERAL(TMP66388, "path", 4);
STRING_LITERAL(TMP66389, "p", 1);
STRING_LITERAL(TMP66390, "d", 1);
STRING_LITERAL(TMP66391, "u", 1);
STRING_LITERAL(TMP66392, "debuginfo", 9);
STRING_LITERAL(TMP66393, "compileonly", 11);
STRING_LITERAL(TMP66394, "nolinking", 9);
STRING_LITERAL(TMP66395, "forcebuild", 10);
STRING_LITERAL(TMP66396, "f", 1);
STRING_LITERAL(TMP66397, "deadcodeelim", 12);
STRING_LITERAL(TMP66398, "safecode", 8);
STRING_LITERAL(TMP66399, "pragma", 6);
STRING_LITERAL(TMP66400, "compiletime", 11);
STRING_LITERAL(TMP66401, "gc", 2);
STRING_LITERAL(TMP66402, "refc", 4);
STRING_LITERAL(TMP66403, "boehm", 5);
STRING_LITERAL(TMP66404, "a", 1);
STRING_LITERAL(TMP66405, "opt", 3);
STRING_LITERAL(TMP66406, "o", 1);
STRING_LITERAL(TMP66407, "app", 3);
STRING_LITERAL(TMP66408, "console", 7);
STRING_LITERAL(TMP66409, "gui", 3);
STRING_LITERAL(TMP66410, "passc", 5);
STRING_LITERAL(TMP66411, "t", 1);
STRING_LITERAL(TMP66412, "passl", 5);
STRING_LITERAL(TMP66413, "l", 1);
STRING_LITERAL(TMP66414, "listcmd", 7);
STRING_LITERAL(TMP66415, "gendoc", 6);
STRING_LITERAL(TMP66416, "genmapping", 10);
STRING_LITERAL(TMP66417, "os", 2);
STRING_LITERAL(TMP66418, "cpu", 3);
STRING_LITERAL(TMP66419, "generate", 8);
STRING_LITERAL(TMP66420, "g", 1);
STRING_LITERAL(TMP66421, "c", 1);
STRING_LITERAL(TMP66422, "cpp", 3);
STRING_LITERAL(TMP66423, "borrow", 6);
STRING_LITERAL(TMP66424, "run", 3);
STRING_LITERAL(TMP66425, "r", 1);
STRING_LITERAL(TMP66426, "verbosity", 9);
STRING_LITERAL(TMP66427, "v", 1);
STRING_LITERAL(TMP66428, "help", 4);
STRING_LITERAL(TMP66429, "h", 1);
STRING_LITERAL(TMP66430, "symbolfiles", 11);
STRING_LITERAL(TMP66431, "fieldchecks", 11);
STRING_LITERAL(TMP66432, "x", 1);
STRING_LITERAL(TMP66433, "version", 7);
STRING_LITERAL(TMP66434, "advanced", 8);
STRING_LITERAL(TMP66435, "skipcfg", 7);
STRING_LITERAL(TMP66436, "skipprojcfg", 11);
STRING_LITERAL(TMP66437, "cc", 2);
STRING_LITERAL(TMP66438, "genscript", 9);
STRING_LITERAL(TMP66439, "checkpoint", 10);
STRING_LITERAL(TMP66440, "checkpoints", 11);
STRING_LITERAL(TMP66441, "nomain", 6);
STRING_LITERAL(TMP66442, "subschar", 8);
STRING_LITERAL(TMP66443, "acyclic", 7);
STRING_LITERAL(TMP66444, "index", 5);
STRING_LITERAL(TMP66445, "compiletoc", 10);
STRING_LITERAL(TMP66446, "compiletocpp", 12);
STRING_LITERAL(TMP66447, "compiletoecmascript", 19);
STRING_LITERAL(TMP66448, "compiletollvm", 13);
STRING_LITERAL(TMP66449, "pretty", 6);
STRING_LITERAL(TMP66450, "doc", 3);
STRING_LITERAL(TMP66451, "gendepend", 9);
STRING_LITERAL(TMP66452, "listdef", 7);
STRING_LITERAL(TMP66453, "check", 5);
STRING_LITERAL(TMP66454, "parse", 5);
STRING_LITERAL(TMP66455, "scan", 4);
STRING_LITERAL(TMP66456, "lazy", 4);
STRING_LITERAL(TMP66457, "rst2html", 8);
STRING_LITERAL(TMP66458, "rst2tex", 7);
STRING_LITERAL(TMP66459, "i", 1);
STRING_LITERAL(TMP66460, "write", 5);
STRING_LITERAL(TMP66461, "putenv", 6);
STRING_LITERAL(TMP66462, "prependenv", 10);
STRING_LITERAL(TMP66463, "appendenv", 9);
STRING_LITERAL(TMP66464, "threadvar", 9);
NIM_CONST TY66241 Specialwords_66240 = {((NimStringDesc*) &TMP66245),
((NimStringDesc*) &TMP66246),
((NimStringDesc*) &TMP66247),
((NimStringDesc*) &TMP66248),
((NimStringDesc*) &TMP66249),
((NimStringDesc*) &TMP66250),
((NimStringDesc*) &TMP66251),
((NimStringDesc*) &TMP66252),
((NimStringDesc*) &TMP66253),
((NimStringDesc*) &TMP66254),
((NimStringDesc*) &TMP66255),
((NimStringDesc*) &TMP66256),
((NimStringDesc*) &TMP66257),
((NimStringDesc*) &TMP66258),
((NimStringDesc*) &TMP66259),
((NimStringDesc*) &TMP66260),
((NimStringDesc*) &TMP66261),
((NimStringDesc*) &TMP66262),
((NimStringDesc*) &TMP66263),
((NimStringDesc*) &TMP66264),
((NimStringDesc*) &TMP66265),
((NimStringDesc*) &TMP66266),
((NimStringDesc*) &TMP66267),
((NimStringDesc*) &TMP66268),
((NimStringDesc*) &TMP66269),
((NimStringDesc*) &TMP66270),
((NimStringDesc*) &TMP66271),
((NimStringDesc*) &TMP66272),
((NimStringDesc*) &TMP66273),
((NimStringDesc*) &TMP66274),
((NimStringDesc*) &TMP66275),
((NimStringDesc*) &TMP66276),
((NimStringDesc*) &TMP66277),
((NimStringDesc*) &TMP66278),
((NimStringDesc*) &TMP66279),
((NimStringDesc*) &TMP66280),
((NimStringDesc*) &TMP66281),
((NimStringDesc*) &TMP66282),
((NimStringDesc*) &TMP66283),
((NimStringDesc*) &TMP66284),
((NimStringDesc*) &TMP66285),
((NimStringDesc*) &TMP66286),
((NimStringDesc*) &TMP66287),
((NimStringDesc*) &TMP66288),
((NimStringDesc*) &TMP66289),
((NimStringDesc*) &TMP66290),
((NimStringDesc*) &TMP66291),
((NimStringDesc*) &TMP66292),
((NimStringDesc*) &TMP66293),
((NimStringDesc*) &TMP66294),
((NimStringDesc*) &TMP66295),
((NimStringDesc*) &TMP66296),
((NimStringDesc*) &TMP66297),
((NimStringDesc*) &TMP66298),
((NimStringDesc*) &TMP66299),
((NimStringDesc*) &TMP66300),
((NimStringDesc*) &TMP66301),
((NimStringDesc*) &TMP66302),
((NimStringDesc*) &TMP66303),
((NimStringDesc*) &TMP66304),
((NimStringDesc*) &TMP66305),
((NimStringDesc*) &TMP66306),
((NimStringDesc*) &TMP66307),
((NimStringDesc*) &TMP66308),
((NimStringDesc*) &TMP66309),
((NimStringDesc*) &TMP66310),
((NimStringDesc*) &TMP66311),
((NimStringDesc*) &TMP66312),
((NimStringDesc*) &TMP66313),
((NimStringDesc*) &TMP66314),
((NimStringDesc*) &TMP66315),
((NimStringDesc*) &TMP66316),
((NimStringDesc*) &TMP66317),
((NimStringDesc*) &TMP66318),
((NimStringDesc*) &TMP66319),
((NimStringDesc*) &TMP66320),
((NimStringDesc*) &TMP66321),
((NimStringDesc*) &TMP66322),
((NimStringDesc*) &TMP66323),
((NimStringDesc*) &TMP66324),
((NimStringDesc*) &TMP66325),
((NimStringDesc*) &TMP66326),
((NimStringDesc*) &TMP66327),
((NimStringDesc*) &TMP66328),
((NimStringDesc*) &TMP66329),
((NimStringDesc*) &TMP66330),
((NimStringDesc*) &TMP66331),
((NimStringDesc*) &TMP66332),
((NimStringDesc*) &TMP66333),
((NimStringDesc*) &TMP66334),
((NimStringDesc*) &TMP66335),
((NimStringDesc*) &TMP66336),
((NimStringDesc*) &TMP66337),
((NimStringDesc*) &TMP66338),
((NimStringDesc*) &TMP66339),
((NimStringDesc*) &TMP66340),
((NimStringDesc*) &TMP66341),
((NimStringDesc*) &TMP66342),
((NimStringDesc*) &TMP66343),
((NimStringDesc*) &TMP66344),
((NimStringDesc*) &TMP66345),
((NimStringDesc*) &TMP66346),
((NimStringDesc*) &TMP66347),
((NimStringDesc*) &TMP66348),
((NimStringDesc*) &TMP66349),
((NimStringDesc*) &TMP66350),
((NimStringDesc*) &TMP66351),
((NimStringDesc*) &TMP66352),
((NimStringDesc*) &TMP66353),
((NimStringDesc*) &TMP66354),
((NimStringDesc*) &TMP66355),
((NimStringDesc*) &TMP66356),
((NimStringDesc*) &TMP66357),
((NimStringDesc*) &TMP66358),
((NimStringDesc*) &TMP66359),
((NimStringDesc*) &TMP66360),
((NimStringDesc*) &TMP66361),
((NimStringDesc*) &TMP66362),
((NimStringDesc*) &TMP66363),
((NimStringDesc*) &TMP66364),
((NimStringDesc*) &TMP66365),
((NimStringDesc*) &TMP66366),
((NimStringDesc*) &TMP66367),
((NimStringDesc*) &TMP66368),
((NimStringDesc*) &TMP66369),
((NimStringDesc*) &TMP66370),
((NimStringDesc*) &TMP66371),
((NimStringDesc*) &TMP66372),
((NimStringDesc*) &TMP66373),
((NimStringDesc*) &TMP66374),
((NimStringDesc*) &TMP66375),
((NimStringDesc*) &TMP66376),
((NimStringDesc*) &TMP66377),
((NimStringDesc*) &TMP66378),
((NimStringDesc*) &TMP66379),
((NimStringDesc*) &TMP66380),
((NimStringDesc*) &TMP66381),
((NimStringDesc*) &TMP66382),
((NimStringDesc*) &TMP66383),
((NimStringDesc*) &TMP66384),
((NimStringDesc*) &TMP66385),
((NimStringDesc*) &TMP66386),
((NimStringDesc*) &TMP66387),
((NimStringDesc*) &TMP66388),
((NimStringDesc*) &TMP66389),
((NimStringDesc*) &TMP66390),
((NimStringDesc*) &TMP66391),
((NimStringDesc*) &TMP66392),
((NimStringDesc*) &TMP66393),
((NimStringDesc*) &TMP66394),
((NimStringDesc*) &TMP66395),
((NimStringDesc*) &TMP66396),
((NimStringDesc*) &TMP66397),
((NimStringDesc*) &TMP66398),
((NimStringDesc*) &TMP66399),
((NimStringDesc*) &TMP66400),
((NimStringDesc*) &TMP66401),
((NimStringDesc*) &TMP66402),
((NimStringDesc*) &TMP66403),
((NimStringDesc*) &TMP66404),
((NimStringDesc*) &TMP66405),
((NimStringDesc*) &TMP66406),
((NimStringDesc*) &TMP66407),
((NimStringDesc*) &TMP66408),
((NimStringDesc*) &TMP66409),
((NimStringDesc*) &TMP66410),
((NimStringDesc*) &TMP66411),
((NimStringDesc*) &TMP66412),
((NimStringDesc*) &TMP66413),
((NimStringDesc*) &TMP66414),
((NimStringDesc*) &TMP66415),
((NimStringDesc*) &TMP66416),
((NimStringDesc*) &TMP66417),
((NimStringDesc*) &TMP66418),
((NimStringDesc*) &TMP66419),
((NimStringDesc*) &TMP66420),
((NimStringDesc*) &TMP66421),
((NimStringDesc*) &TMP66422),
((NimStringDesc*) &TMP66423),
((NimStringDesc*) &TMP66424),
((NimStringDesc*) &TMP66425),
((NimStringDesc*) &TMP66426),
((NimStringDesc*) &TMP66427),
((NimStringDesc*) &TMP66428),
((NimStringDesc*) &TMP66429),
((NimStringDesc*) &TMP66430),
((NimStringDesc*) &TMP66431),
((NimStringDesc*) &TMP66432),
((NimStringDesc*) &TMP66433),
((NimStringDesc*) &TMP66434),
((NimStringDesc*) &TMP66435),
((NimStringDesc*) &TMP66436),
((NimStringDesc*) &TMP66437),
((NimStringDesc*) &TMP66438),
((NimStringDesc*) &TMP66439),
((NimStringDesc*) &TMP66440),
((NimStringDesc*) &TMP66441),
((NimStringDesc*) &TMP66442),
((NimStringDesc*) &TMP66443),
((NimStringDesc*) &TMP66444),
((NimStringDesc*) &TMP66445),
((NimStringDesc*) &TMP66446),
((NimStringDesc*) &TMP66447),
((NimStringDesc*) &TMP66448),
((NimStringDesc*) &TMP66449),
((NimStringDesc*) &TMP66450),
((NimStringDesc*) &TMP66451),
((NimStringDesc*) &TMP66452),
((NimStringDesc*) &TMP66453),
((NimStringDesc*) &TMP66454),
((NimStringDesc*) &TMP66455),
((NimStringDesc*) &TMP66456),
((NimStringDesc*) &TMP66457),
((NimStringDesc*) &TMP66458),
((NimStringDesc*) &TMP66459),
((NimStringDesc*) &TMP66460),
((NimStringDesc*) &TMP66461),
((NimStringDesc*) &TMP66462),
((NimStringDesc*) &TMP66463),
((NimStringDesc*) &TMP66464)}
;
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604) {
NI Result_5605;
NIM_BOOL LOC2;
Result_5605 = 0;
Result_5605 = (NI32)((NU32)(A_5603) + (NU32)(B_5604));
LOC2 = (0 <= (NI32)(Result_5605 ^ A_5603));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI32)(Result_5605 ^ B_5604));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5605;
}
N_NIMCALL(NI, Findstr_66471)(NimStringDesc** A_66474, NI A_66474Len0, NimStringDesc* S_66475) {
NI Result_66481;
NI I_66504;
NI HEX3Atmp_66508;
NI Res_66510;
NI LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "findStr";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_66481 = 0;
I_66504 = 0;
HEX3Atmp_66508 = 0;
F.line = 115;F.filename = "wordrecg.nim";
HEX3Atmp_66508 = (A_66474Len0-1);
Res_66510 = 0;
F.line = 1011;F.filename = "system.nim";
Res_66510 = 0;
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_66510 <= HEX3Atmp_66508)) goto LA1;
F.line = 1011;F.filename = "system.nim";
I_66504 = Res_66510;
F.line = 116;F.filename = "wordrecg.nim";
if ((NU)(I_66504) >= (NU)(A_66474Len0)) raiseIndexError();
LOC3 = nsuCmpIgnoreStyle(A_66474[I_66504], S_66475);
if (!(LOC3 == 0)) goto LA4;
F.line = 117;F.filename = "wordrecg.nim";
F.line = 117;F.filename = "wordrecg.nim";
Result_66481 = I_66504;
goto BeforeRet;
LA4: ;
F.line = 1014;F.filename = "system.nim";
Res_66510 = addInt(Res_66510, 1);
} LA1: ;
F.line = 118;F.filename = "wordrecg.nim";
Result_66481 = -1;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_66481;
}
N_NIMCALL(NU8, Whichkeyword_66468)(NimStringDesc* Id_66470) {
NU8 Result_66516;
TY48011* LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "whichKeyword";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_66516 = 0;
F.line = 121;F.filename = "wordrecg.nim";
LOC1 = 0;
LOC1 = Getident_48016(Id_66470);
Result_66516 = Whichkeyword_66465(LOC1);
framePtr = framePtr->prev;
return Result_66516;
}
static N_INLINE(NI, chckRange)(NI I_4610, NI A_4611, NI B_4612) {
NI Result_5316;
NIM_BOOL LOC2;
Result_5316 = 0;
LOC2 = (A_4611 <= I_4610);
if (!(LOC2)) goto LA3;
LOC2 = (I_4610 <= B_4612);
LA3: ;
if (!LOC2) goto LA4;
Result_5316 = I_4610;
goto BeforeRet;
goto LA1;
LA4: ;
raiseRangeError(((NI64) (I_4610)));
LA1: ;
BeforeRet: ;
return Result_5316;
}
N_NIMCALL(NU8, Whichkeyword_66465)(TY48011* Id_66467) {
NU8 Result_66520;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "whichKeyword";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_66520 = 0;
F.line = 124;F.filename = "wordrecg.nim";
if (!((*Id_66467).Sup.Id < 0)) goto LA2;
F.line = 124;F.filename = "wordrecg.nim";
Result_66520 = ((NU8) 0);
goto LA1;
LA2: ;
F.line = 125;F.filename = "wordrecg.nim";
Result_66520 = ((NU8)chckRange((*Id_66467).Sup.Id, ((NU8) 0), ((NU8) 219)));
LA1: ;
framePtr = framePtr->prev;
return Result_66520;
}
N_NIMCALL(void, Initspecials_66523)(void) {
NU8 S_66563;
NU8 Res_66571;
NI LOC2;
TY48011* LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "initSpecials";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
S_66563 = 0;
Res_66571 = 0;
F.line = 1011;F.filename = "system.nim";
Res_66571 = ((NU8) 1);
F.line = 1012;F.filename = "system.nim";
while (1) {
if (!(Res_66571 <= ((NU8) 219))) goto LA1;
F.line = 1011;F.filename = "system.nim";
S_66563 = Res_66571;
F.line = 130;F.filename = "wordrecg.nim";
LOC2 = Getnormalizedhash_38037(Specialwords_66240[(S_66563)-0]);
LOC3 = 0;
LOC3 = Getident_48019(Specialwords_66240[(S_66563)-0], LOC2);
(*LOC3).Sup.Id = S_66563;
F.line = 1014;F.filename = "system.nim";
Res_66571 = addInt(Res_66571, 1);
} LA1: ;
framePtr = framePtr->prev;
}
N_NOINLINE(void, wordrecgInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "wordrecg";
F.prev = framePtr;
F.filename = "rod/wordrecg.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 132;F.filename = "wordrecg.nim";
Initspecials_66523();
framePtr = framePtr->prev;
}
