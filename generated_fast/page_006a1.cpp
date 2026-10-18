#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a2(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a1(u8* __restrict R,Cpu& c);
u32 page_6a1(Cpu& c){return body_6a1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a1001:goto L6a1001;
case 0x6a1004:c.instructions+=10;goto B6a1004;
case 0x6a1007:c.instructions+=9;goto B6a1007;
case 0x6a100a:c.instructions+=8;goto B6a100a;
case 0x6a100d:c.instructions+=7;goto B6a100d;
case 0x6a1010:c.instructions+=6;goto B6a1010;
case 0x6a1013:c.instructions+=5;goto B6a1013;
case 0x6a1016:c.instructions+=4;goto B6a1016;
case 0x6a1019:c.instructions+=3;goto B6a1019;
case 0x6a101c:c.instructions+=2;goto B6a101c;
case 0x6a101f:c.instructions+=1;goto B6a101f;
case 0x6a1021:goto L6a1021;
case 0x6a1026:goto L6a1026;
case 0x6a102a:c.instructions+=2;goto B6a102a;
case 0x6a102e:c.instructions+=1;goto B6a102e;
case 0x6a1030:goto L6a1030;
case 0x6a1033:goto L6a1033;
case 0x6a1035:c.instructions+=2;goto B6a1035;
case 0x6a1037:c.instructions+=1;goto B6a1037;
case 0x6a103c:goto L6a103c;
case 0x6a103e:c.instructions+=1;goto B6a103e;
case 0x6a1040:goto L6a1040;
case 0x6a1043:c.instructions+=4;goto B6a1043;
case 0x6a1046:c.instructions+=3;goto B6a1046;
case 0x6a1049:c.instructions+=2;goto B6a1049;
case 0x6a104c:c.instructions+=1;goto B6a104c;
case 0x6a104e:goto L6a104e;
case 0x6a1050:goto L6a1050;
case 0x6a1052:c.instructions+=2;goto B6a1052;
case 0x6a1055:c.instructions+=1;goto B6a1055;
case 0x6a1057:goto L6a1057;
case 0x6a105a:c.instructions+=7;goto B6a105a;
case 0x6a105d:c.instructions+=6;goto B6a105d;
case 0x6a1060:c.instructions+=5;goto B6a1060;
case 0x6a1063:c.instructions+=4;goto B6a1063;
case 0x6a1066:c.instructions+=3;goto B6a1066;
case 0x6a1067:c.instructions+=2;goto B6a1067;
case 0x6a106a:c.instructions+=1;goto B6a106a;
case 0x6a106c:goto L6a106c;
case 0x6a106e:goto L6a106e;
case 0x6a1070:c.instructions+=2;goto B6a1070;
case 0x6a1073:c.instructions+=1;goto B6a1073;
case 0x6a1075:goto L6a1075;
case 0x6a1078:c.instructions+=7;goto B6a1078;
case 0x6a107b:c.instructions+=6;goto B6a107b;
case 0x6a107e:c.instructions+=5;goto B6a107e;
case 0x6a1081:c.instructions+=4;goto B6a1081;
case 0x6a1084:c.instructions+=3;goto B6a1084;
case 0x6a1085:c.instructions+=2;goto B6a1085;
case 0x6a1088:c.instructions+=1;goto B6a1088;
case 0x6a108a:goto L6a108a;
case 0x6a108c:goto L6a108c;
case 0x6a108e:c.instructions+=2;goto B6a108e;
case 0x6a1091:c.instructions+=1;goto B6a1091;
case 0x6a1093:goto L6a1093;
case 0x6a1096:c.instructions+=7;goto B6a1096;
case 0x6a1099:c.instructions+=6;goto B6a1099;
case 0x6a109c:c.instructions+=5;goto B6a109c;
case 0x6a109f:c.instructions+=4;goto B6a109f;
case 0x6a10a2:c.instructions+=3;goto B6a10a2;
case 0x6a10a3:c.instructions+=2;goto B6a10a3;
case 0x6a10a6:c.instructions+=1;goto B6a10a6;
case 0x6a10a8:goto L6a10a8;
case 0x6a10ab:c.instructions+=3;goto B6a10ab;
case 0x6a10ae:c.instructions+=2;goto B6a10ae;
case 0x6a10b1:c.instructions+=1;goto B6a10b1;
case 0x6a10b7:goto L6a10b7;
case 0x6a10b9:c.instructions+=2;goto B6a10b9;
case 0x6a10bc:c.instructions+=1;goto B6a10bc;
case 0x6a10be:goto L6a10be;
case 0x6a10c1:c.instructions+=6;goto B6a10c1;
case 0x6a10c4:c.instructions+=5;goto B6a10c4;
case 0x6a10c7:c.instructions+=4;goto B6a10c7;
case 0x6a10ca:c.instructions+=3;goto B6a10ca;
case 0x6a10cd:c.instructions+=2;goto B6a10cd;
case 0x6a10d1:c.instructions+=1;goto B6a10d1;
case 0x6a10d3:goto L6a10d3;
case 0x6a10d6:goto L6a10d6;
case 0x6a10d7:c.instructions+=2;goto B6a10d7;
case 0x6a10da:c.instructions+=1;goto B6a10da;
case 0x6a10dc:goto L6a10dc;
case 0x6a10dd:c.instructions+=5;goto B6a10dd;
case 0x6a10de:c.instructions+=4;goto B6a10de;
case 0x6a10e0:c.instructions+=3;goto B6a10e0;
case 0x6a10e1:c.instructions+=2;goto B6a10e1;
case 0x6a10e2:c.instructions+=1;goto B6a10e2;
case 0x6a10e3:goto L6a10e3;
case 0x6a10e5:c.instructions+=10;goto B6a10e5;
case 0x6a10e6:c.instructions+=9;goto B6a10e6;
case 0x6a10e8:c.instructions+=8;goto B6a10e8;
case 0x6a10e9:c.instructions+=7;goto B6a10e9;
case 0x6a10ec:c.instructions+=6;goto B6a10ec;
case 0x6a10ed:c.instructions+=5;goto B6a10ed;
case 0x6a10ee:c.instructions+=4;goto B6a10ee;
case 0x6a10f1:c.instructions+=3;goto B6a10f1;
case 0x6a10f5:c.instructions+=2;goto B6a10f5;
case 0x6a10f7:c.instructions+=1;goto B6a10f7;
case 0x6a10f9:goto L6a10f9;
case 0x6a10fc:c.instructions+=2;goto B6a10fc;
case 0x6a10ff:c.instructions+=1;goto B6a10ff;
case 0x6a1101:goto L6a1101;
case 0x6a1104:c.instructions+=5;goto B6a1104;
case 0x6a1107:c.instructions+=4;goto B6a1107;
case 0x6a110a:c.instructions+=3;goto B6a110a;
case 0x6a110e:c.instructions+=2;goto B6a110e;
case 0x6a1111:c.instructions+=1;goto B6a1111;
case 0x6a1113:goto L6a1113;
case 0x6a1116:c.instructions+=2;goto B6a1116;
case 0x6a1119:c.instructions+=1;goto B6a1119;
case 0x6a111e:goto L6a111e;
case 0x6a1121:goto L6a1121;
case 0x6a1124:c.instructions+=3;goto B6a1124;
case 0x6a1127:c.instructions+=2;goto B6a1127;
case 0x6a112a:c.instructions+=1;goto B6a112a;
case 0x6a112f:goto L6a112f;
case 0x6a1131:c.instructions+=1;goto B6a1131;
case 0x6a1133:goto L6a1133;
case 0x6a1137:c.instructions+=1;goto B6a1137;
case 0x6a1139:goto L6a1139;
case 0x6a113d:c.instructions+=3;goto B6a113d;
case 0x6a1144:c.instructions+=2;goto B6a1144;
case 0x6a1146:c.instructions+=1;goto B6a1146;
case 0x6a1148:goto L6a1148;
case 0x6a114b:c.instructions+=7;goto B6a114b;
case 0x6a114e:c.instructions+=6;goto B6a114e;
case 0x6a1151:c.instructions+=5;goto B6a1151;
case 0x6a1154:c.instructions+=4;goto B6a1154;
case 0x6a1155:c.instructions+=3;goto B6a1155;
case 0x6a1156:c.instructions+=2;goto B6a1156;
case 0x6a1158:c.instructions+=1;goto B6a1158;
case 0x6a115d:goto L6a115d;
case 0x6a115e:c.instructions+=4;goto B6a115e;
case 0x6a115f:c.instructions+=3;goto B6a115f;
case 0x6a1160:c.instructions+=2;goto B6a1160;
case 0x6a1161:c.instructions+=1;goto B6a1161;
case 0x6a1164:goto L6a1164;
case 0x6a1166:c.instructions+=13;goto B6a1166;
case 0x6a1167:c.instructions+=12;goto B6a1167;
case 0x6a1169:c.instructions+=11;goto B6a1169;
case 0x6a116c:c.instructions+=10;goto B6a116c;
case 0x6a116f:c.instructions+=9;goto B6a116f;
case 0x6a1170:c.instructions+=8;goto B6a1170;
case 0x6a1173:c.instructions+=7;goto B6a1173;
case 0x6a1174:c.instructions+=6;goto B6a1174;
case 0x6a1177:c.instructions+=5;goto B6a1177;
case 0x6a117a:c.instructions+=4;goto B6a117a;
case 0x6a117b:c.instructions+=3;goto B6a117b;
case 0x6a117c:c.instructions+=2;goto B6a117c;
case 0x6a117f:c.instructions+=1;goto B6a117f;
case 0x6a1184:goto L6a1184;
case 0x6a1186:c.instructions+=1;goto B6a1186;
case 0x6a1188:goto L6a1188;
case 0x6a118a:c.instructions+=11;goto B6a118a;
case 0x6a118c:c.instructions+=10;goto B6a118c;
case 0x6a118d:c.instructions+=9;goto B6a118d;
case 0x6a1192:c.instructions+=8;goto B6a1192;
case 0x6a1194:c.instructions+=7;goto B6a1194;
case 0x6a1196:c.instructions+=6;goto B6a1196;
case 0x6a1198:c.instructions+=5;goto B6a1198;
case 0x6a119e:c.instructions+=4;goto B6a119e;
case 0x6a11a0:c.instructions+=3;goto B6a11a0;
case 0x6a11a2:c.instructions+=2;goto B6a11a2;
case 0x6a11a3:c.instructions+=1;goto B6a11a3;
case 0x6a11a5:goto L6a11a5;
case 0x6a11a7:goto L6a11a7;
case 0x6a11a9:c.instructions+=3;goto B6a11a9;
case 0x6a11ad:c.instructions+=2;goto B6a11ad;
case 0x6a11af:c.instructions+=1;goto B6a11af;
case 0x6a11b1:goto L6a11b1;
case 0x6a11b4:c.instructions+=3;goto B6a11b4;
case 0x6a11b7:c.instructions+=2;goto B6a11b7;
case 0x6a11ba:c.instructions+=1;goto B6a11ba;
case 0x6a11bd:goto L6a11bd;
case 0x6a11bf:goto L6a11bf;
case 0x6a11c0:c.instructions+=3;goto B6a11c0;
case 0x6a11c1:c.instructions+=2;goto B6a11c1;
case 0x6a11c2:c.instructions+=1;goto B6a11c2;
case 0x6a11c5:goto L6a11c5;
case 0x6a11c7:c.instructions+=23;goto B6a11c7;
case 0x6a11c8:c.instructions+=22;goto B6a11c8;
case 0x6a11ca:c.instructions+=21;goto B6a11ca;
case 0x6a11cd:c.instructions+=20;goto B6a11cd;
case 0x6a11d0:c.instructions+=19;goto B6a11d0;
case 0x6a11d1:c.instructions+=18;goto B6a11d1;
case 0x6a11d2:c.instructions+=17;goto B6a11d2;
case 0x6a11d4:c.instructions+=16;goto B6a11d4;
case 0x6a11d7:c.instructions+=15;goto B6a11d7;
case 0x6a11da:c.instructions+=14;goto B6a11da;
case 0x6a11dd:c.instructions+=13;goto B6a11dd;
case 0x6a11e0:c.instructions+=12;goto B6a11e0;
case 0x6a11e3:c.instructions+=11;goto B6a11e3;
case 0x6a11e4:c.instructions+=10;goto B6a11e4;
case 0x6a11e7:c.instructions+=9;goto B6a11e7;
case 0x6a11ea:c.instructions+=8;goto B6a11ea;
case 0x6a11ed:c.instructions+=7;goto B6a11ed;
case 0x6a11f0:c.instructions+=6;goto B6a11f0;
case 0x6a11f3:c.instructions+=5;goto B6a11f3;
case 0x6a11f6:c.instructions+=4;goto B6a11f6;
case 0x6a11f8:c.instructions+=3;goto B6a11f8;
case 0x6a11fb:c.instructions+=2;goto B6a11fb;
case 0x6a11fe:c.instructions+=1;goto B6a11fe;
case 0x6a1204:goto L6a1204;
case 0x6a1207:c.instructions+=1;goto B6a1207;
case 0x6a120d:goto L6a120d;
case 0x6a120f:c.instructions+=13;goto B6a120f;
case 0x6a1211:c.instructions+=12;goto B6a1211;
case 0x6a1214:c.instructions+=11;goto B6a1214;
case 0x6a1217:c.instructions+=10;goto B6a1217;
case 0x6a1219:c.instructions+=9;goto B6a1219;
case 0x6a121b:c.instructions+=8;goto B6a121b;
case 0x6a121e:c.instructions+=7;goto B6a121e;
case 0x6a1221:c.instructions+=6;goto B6a1221;
case 0x6a1224:c.instructions+=5;goto B6a1224;
case 0x6a1226:c.instructions+=4;goto B6a1226;
case 0x6a122c:c.instructions+=3;goto B6a122c;
case 0x6a1232:c.instructions+=2;goto B6a1232;
case 0x6a1235:c.instructions+=1;goto B6a1235;
case 0x6a1237:goto L6a1237;
case 0x6a123a:c.instructions+=3;goto B6a123a;
case 0x6a123d:c.instructions+=2;goto B6a123d;
case 0x6a123f:c.instructions+=1;goto B6a123f;
case 0x6a1244:goto L6a1244;
case 0x6a1247:c.instructions+=4;goto B6a1247;
case 0x6a1249:c.instructions+=3;goto B6a1249;
case 0x6a124e:c.instructions+=2;goto B6a124e;
case 0x6a1250:c.instructions+=1;goto B6a1250;
case 0x6a1252:goto L6a1252;
case 0x6a1258:c.instructions+=1;goto B6a1258;
case 0x6a125a:goto L6a125a;
case 0x6a1260:c.instructions+=1;goto B6a1260;
case 0x6a1262:goto L6a1262;
case 0x6a1268:c.instructions+=1;goto B6a1268;
case 0x6a126a:goto L6a126a;
case 0x6a1270:c.instructions+=1;goto B6a1270;
case 0x6a1272:goto L6a1272;
case 0x6a1278:c.instructions+=1;goto B6a1278;
case 0x6a127a:goto L6a127a;
case 0x6a127c:c.instructions+=3;goto B6a127c;
case 0x6a1282:c.instructions+=2;goto B6a1282;
case 0x6a1284:c.instructions+=1;goto B6a1284;
case 0x6a1286:goto L6a1286;
case 0x6a128c:c.instructions+=3;goto B6a128c;
case 0x6a128e:c.instructions+=2;goto B6a128e;
case 0x6a128f:c.instructions+=1;goto B6a128f;
case 0x6a1291:goto L6a1291;
case 0x6a1297:c.instructions+=1;goto B6a1297;
case 0x6a1299:goto L6a1299;
case 0x6a129f:c.instructions+=1;goto B6a129f;
case 0x6a12a1:goto L6a12a1;
case 0x6a12a7:c.instructions+=1;goto B6a12a7;
case 0x6a12a9:goto L6a12a9;
case 0x6a12af:c.instructions+=1;goto B6a12af;
case 0x6a12b1:goto L6a12b1;
case 0x6a12b3:goto L6a12b3;
case 0x6a12b7:c.instructions+=1;goto B6a12b7;
case 0x6a12b9:goto L6a12b9;
case 0x6a12bd:c.instructions+=1;goto B6a12bd;
case 0x6a12bf:goto L6a12bf;
case 0x6a12c1:c.instructions+=1;goto B6a12c1;
case 0x6a12c3:goto L6a12c3;
case 0x6a12c6:c.instructions+=2;goto B6a12c6;
case 0x6a12c9:c.instructions+=1;goto B6a12c9;
case 0x6a12cb:goto L6a12cb;
case 0x6a12ce:c.instructions+=10;goto B6a12ce;
case 0x6a12d0:c.instructions+=9;goto B6a12d0;
case 0x6a12d2:c.instructions+=8;goto B6a12d2;
case 0x6a12d5:c.instructions+=7;goto B6a12d5;
case 0x6a12d8:c.instructions+=6;goto B6a12d8;
case 0x6a12da:c.instructions+=5;goto B6a12da;
case 0x6a12dc:c.instructions+=4;goto B6a12dc;
case 0x6a12df:c.instructions+=3;goto B6a12df;
case 0x6a12e2:c.instructions+=2;goto B6a12e2;
case 0x6a12e4:c.instructions+=1;goto B6a12e4;
case 0x6a12e6:goto L6a12e6;
case 0x6a12e9:c.instructions+=5;goto B6a12e9;
case 0x6a12ec:c.instructions+=4;goto B6a12ec;
case 0x6a12ef:c.instructions+=3;goto B6a12ef;
case 0x6a12f2:c.instructions+=2;goto B6a12f2;
case 0x6a12f5:c.instructions+=1;goto B6a12f5;
case 0x6a12fb:goto L6a12fb;
case 0x6a12ff:c.instructions+=1;goto B6a12ff;
case 0x6a1305:goto L6a1305;
case 0x6a130a:c.instructions+=3;goto B6a130a;
case 0x6a130c:c.instructions+=2;goto B6a130c;
case 0x6a130e:c.instructions+=1;goto B6a130e;
case 0x6a1314:goto L6a1314;
case 0x6a131a:goto L6a131a;
case 0x6a1320:c.instructions+=1;goto B6a1320;
case 0x6a1326:goto L6a1326;
case 0x6a132c:c.instructions+=1;goto B6a132c;
case 0x6a1332:goto L6a1332;
case 0x6a1338:c.instructions+=1;goto B6a1338;
case 0x6a133e:goto L6a133e;
case 0x6a1344:c.instructions+=1;goto B6a1344;
case 0x6a134a:goto L6a134a;
case 0x6a1350:c.instructions+=1;goto B6a1350;
case 0x6a1352:goto L6a1352;
case 0x6a1358:c.instructions+=1;goto B6a1358;
case 0x6a135e:goto L6a135e;
case 0x6a1361:c.instructions+=1;goto B6a1361;
case 0x6a1363:goto L6a1363;
case 0x6a1365:c.instructions+=4;goto B6a1365;
case 0x6a1368:c.instructions+=3;goto B6a1368;
case 0x6a136a:c.instructions+=2;goto B6a136a;
case 0x6a136d:c.instructions+=1;goto B6a136d;
case 0x6a136f:goto L6a136f;
case 0x6a1374:c.instructions+=2;goto B6a1374;
case 0x6a1379:c.instructions+=1;goto B6a1379;
case 0x6a137e:goto L6a137e;
case 0x6a1381:c.instructions+=3;goto B6a1381;
case 0x6a1383:c.instructions+=2;goto B6a1383;
case 0x6a1389:c.instructions+=1;goto B6a1389;
case 0x6a138e:goto L6a138e;
case 0x6a1391:c.instructions+=1;goto B6a1391;
case 0x6a1393:goto L6a1393;
case 0x6a1399:c.instructions+=5;goto B6a1399;
case 0x6a139c:c.instructions+=4;goto B6a139c;
case 0x6a139e:c.instructions+=3;goto B6a139e;
case 0x6a13a0:c.instructions+=2;goto B6a13a0;
case 0x6a13a3:c.instructions+=1;goto B6a13a3;
case 0x6a13a9:goto L6a13a9;
case 0x6a13ab:c.instructions+=4;goto B6a13ab;
case 0x6a13ae:c.instructions+=3;goto B6a13ae;
case 0x6a13b0:c.instructions+=2;goto B6a13b0;
case 0x6a13b3:c.instructions+=1;goto B6a13b3;
case 0x6a13b5:goto L6a13b5;
case 0x6a13ba:c.instructions+=2;goto B6a13ba;
case 0x6a13bf:c.instructions+=1;goto B6a13bf;
case 0x6a13c4:goto L6a13c4;
case 0x6a13c7:c.instructions+=9;goto B6a13c7;
case 0x6a13c9:c.instructions+=8;goto B6a13c9;
case 0x6a13cb:c.instructions+=7;goto B6a13cb;
case 0x6a13cd:c.instructions+=6;goto B6a13cd;
case 0x6a13d3:c.instructions+=5;goto B6a13d3;
case 0x6a13d5:c.instructions+=4;goto B6a13d5;
case 0x6a13d7:c.instructions+=3;goto B6a13d7;
case 0x6a13d9:c.instructions+=2;goto B6a13d9;
case 0x6a13db:c.instructions+=1;goto B6a13db;
case 0x6a13e0:goto L6a13e0;
case 0x6a13e6:c.instructions+=2;goto B6a13e6;
case 0x6a13e9:c.instructions+=1;goto B6a13e9;
case 0x6a13ee:goto L6a13ee;
case 0x6a13f3:goto L6a13f3;
case 0x6a13f6:c.instructions+=4;goto B6a13f6;
case 0x6a13f7:c.instructions+=3;goto B6a13f7;
case 0x6a13f8:c.instructions+=2;goto B6a13f8;
case 0x6a13fb:c.instructions+=1;goto B6a13fb;
case 0x6a1400:goto L6a1400;
case 0x6a1402:c.instructions+=3;goto B6a1402;
case 0x6a1403:c.instructions+=2;goto B6a1403;
case 0x6a1404:c.instructions+=1;goto B6a1404;
case 0x6a140a:goto L6a140a;
case 0x6a140d:c.instructions+=4;goto B6a140d;
case 0x6a140e:c.instructions+=3;goto B6a140e;
case 0x6a140f:c.instructions+=2;goto B6a140f;
case 0x6a1412:c.instructions+=1;goto B6a1412;
case 0x6a1417:goto L6a1417;
case 0x6a141a:c.instructions+=3;goto B6a141a;
case 0x6a141b:c.instructions+=2;goto B6a141b;
case 0x6a141c:c.instructions+=1;goto B6a141c;
case 0x6a1421:goto L6a1421;
case 0x6a1424:c.instructions+=1;goto B6a1424;
case 0x6a1426:goto L6a1426;
case 0x6a1429:c.instructions+=5;goto B6a1429;
case 0x6a142f:c.instructions+=4;goto B6a142f;
case 0x6a1431:c.instructions+=3;goto B6a1431;
case 0x6a1433:c.instructions+=2;goto B6a1433;
case 0x6a1436:c.instructions+=1;goto B6a1436;
case 0x6a143c:goto L6a143c;
case 0x6a143e:c.instructions+=2;goto B6a143e;
case 0x6a1441:c.instructions+=1;goto B6a1441;
case 0x6a1446:goto L6a1446;
case 0x6a1449:c.instructions+=2;goto B6a1449;
case 0x6a144b:c.instructions+=1;goto B6a144b;
case 0x6a1450:goto L6a1450;
case 0x6a1453:c.instructions+=2;goto B6a1453;
case 0x6a1455:c.instructions+=1;goto B6a1455;
case 0x6a145a:goto L6a145a;
case 0x6a1460:c.instructions+=1;goto B6a1460;
case 0x6a1466:goto L6a1466;
case 0x6a146c:c.instructions+=1;goto B6a146c;
case 0x6a146e:goto L6a146e;
case 0x6a1474:c.instructions+=1;goto B6a1474;
case 0x6a1476:goto L6a1476;
case 0x6a147c:c.instructions+=1;goto B6a147c;
case 0x6a147e:goto L6a147e;
case 0x6a1484:c.instructions+=1;goto B6a1484;
case 0x6a148a:goto L6a148a;
case 0x6a1490:c.instructions+=1;goto B6a1490;
case 0x6a1496:goto L6a1496;
case 0x6a149b:goto L6a149b;
case 0x6a149e:c.instructions+=3;goto B6a149e;
case 0x6a14a0:c.instructions+=2;goto B6a14a0;
case 0x6a14a2:c.instructions+=1;goto B6a14a2;
case 0x6a14a7:goto L6a14a7;
case 0x6a14aa:c.instructions+=1;goto B6a14aa;
case 0x6a14ac:goto L6a14ac;
case 0x6a14af:c.instructions+=4;goto B6a14af;
case 0x6a14b5:c.instructions+=3;goto B6a14b5;
case 0x6a14b7:c.instructions+=2;goto B6a14b7;
case 0x6a14ba:c.instructions+=1;goto B6a14ba;
case 0x6a14bc:goto L6a14bc;
case 0x6a14bf:c.instructions+=4;goto B6a14bf;
case 0x6a14c5:c.instructions+=3;goto B6a14c5;
case 0x6a14c7:c.instructions+=2;goto B6a14c7;
case 0x6a14ca:c.instructions+=1;goto B6a14ca;
case 0x6a14cc:goto L6a14cc;
case 0x6a14d1:c.instructions+=2;goto B6a14d1;
case 0x6a14d6:c.instructions+=1;goto B6a14d6;
case 0x6a14d8:goto L6a14d8;
case 0x6a14db:c.instructions+=1;goto B6a14db;
case 0x6a14e0:goto L6a14e0;
case 0x6a14e2:goto L6a14e2;
case 0x6a14e5:c.instructions+=1;goto B6a14e5;
case 0x6a14e7:goto L6a14e7;
case 0x6a14ea:c.instructions+=4;goto B6a14ea;
case 0x6a14f0:c.instructions+=3;goto B6a14f0;
case 0x6a14f2:c.instructions+=2;goto B6a14f2;
case 0x6a14f5:c.instructions+=1;goto B6a14f5;
case 0x6a14f7:goto L6a14f7;
case 0x6a14fa:c.instructions+=4;goto B6a14fa;
case 0x6a1500:c.instructions+=3;goto B6a1500;
case 0x6a1502:c.instructions+=2;goto B6a1502;
case 0x6a1505:c.instructions+=1;goto B6a1505;
case 0x6a1507:goto L6a1507;
case 0x6a150c:c.instructions+=1;goto B6a150c;
case 0x6a1511:goto L6a1511;
case 0x6a1514:c.instructions+=3;goto B6a1514;
case 0x6a1517:c.instructions+=2;goto B6a1517;
case 0x6a1518:c.instructions+=1;goto B6a1518;
case 0x6a151d:goto L6a151d;
case 0x6a1520:goto L6a1520;
case 0x6a1522:c.instructions+=1;goto B6a1522;
case 0x6a1524:goto L6a1524;
case 0x6a1527:c.instructions+=1;goto B6a1527;
case 0x6a152c:goto L6a152c;
case 0x6a152e:goto L6a152e;
case 0x6a1531:c.instructions+=1;goto B6a1531;
case 0x6a1533:goto L6a1533;
case 0x6a1534:c.instructions+=3;goto B6a1534;
case 0x6a1535:c.instructions+=2;goto B6a1535;
case 0x6a1538:c.instructions+=1;goto B6a1538;
case 0x6a153d:goto L6a153d;
case 0x6a1540:c.instructions+=2;goto B6a1540;
case 0x6a1542:c.instructions+=1;goto B6a1542;
case 0x6a1544:goto L6a1544;
case 0x6a154a:c.instructions+=1;goto B6a154a;
case 0x6a1550:goto L6a1550;
case 0x6a1552:c.instructions+=1;goto B6a1552;
case 0x6a1554:goto L6a1554;
case 0x6a155a:c.instructions+=1;goto B6a155a;
case 0x6a1560:goto L6a1560;
case 0x6a1562:c.instructions+=1;goto B6a1562;
case 0x6a1564:goto L6a1564;
case 0x6a156a:c.instructions+=1;goto B6a156a;
case 0x6a156c:goto L6a156c;
case 0x6a1572:c.instructions+=1;goto B6a1572;
case 0x6a1574:goto L6a1574;
case 0x6a1576:c.instructions+=2;goto B6a1576;
case 0x6a1579:c.instructions+=1;goto B6a1579;
case 0x6a157f:goto L6a157f;
case 0x6a1582:c.instructions+=5;goto B6a1582;
case 0x6a1587:c.instructions+=4;goto B6a1587;
case 0x6a158c:c.instructions+=3;goto B6a158c;
case 0x6a158f:c.instructions+=2;goto B6a158f;
case 0x6a1590:c.instructions+=1;goto B6a1590;
case 0x6a1595:goto L6a1595;
case 0x6a1597:c.instructions+=5;goto B6a1597;
case 0x6a159a:c.instructions+=4;goto B6a159a;
case 0x6a159d:c.instructions+=3;goto B6a159d;
case 0x6a159e:c.instructions+=2;goto B6a159e;
case 0x6a159f:c.instructions+=1;goto B6a159f;
case 0x6a15a4:goto L6a15a4;
case 0x6a15a8:c.instructions+=1;goto B6a15a8;
case 0x6a15ae:goto L6a15ae;
case 0x6a15b0:c.instructions+=1;goto B6a15b0;
case 0x6a15b6:goto L6a15b6;
case 0x6a15b9:c.instructions+=5;goto B6a15b9;
case 0x6a15be:c.instructions+=4;goto B6a15be;
case 0x6a15c3:c.instructions+=3;goto B6a15c3;
case 0x6a15c6:c.instructions+=2;goto B6a15c6;
case 0x6a15c7:c.instructions+=1;goto B6a15c7;
case 0x6a15cc:goto L6a15cc;
case 0x6a15cf:c.instructions+=1;goto B6a15cf;
case 0x6a15d4:goto L6a15d4;
case 0x6a15d7:c.instructions+=1;goto B6a15d7;
case 0x6a15d9:goto L6a15d9;
case 0x6a15df:c.instructions+=1;goto B6a15df;
case 0x6a15e5:goto L6a15e5;
case 0x6a15eb:c.instructions+=1;goto B6a15eb;
case 0x6a15f1:goto L6a15f1;
case 0x6a15f5:c.instructions+=1;goto B6a15f5;
case 0x6a15fb:goto L6a15fb;
case 0x6a15fe:c.instructions+=1;goto B6a15fe;
case 0x6a1604:goto L6a1604;
case 0x6a160a:c.instructions+=2;goto B6a160a;
case 0x6a160f:c.instructions+=1;goto B6a160f;
case 0x6a1611:goto L6a1611;
case 0x6a1614:c.instructions+=6;goto B6a1614;
case 0x6a1617:c.instructions+=5;goto B6a1617;
case 0x6a161a:c.instructions+=4;goto B6a161a;
case 0x6a161c:c.instructions+=3;goto B6a161c;
case 0x6a161e:c.instructions+=2;goto B6a161e;
case 0x6a1624:c.instructions+=1;goto B6a1624;
case 0x6a1626:goto L6a1626;
case 0x6a162d:c.instructions+=1;goto B6a162d;
case 0x6a162f:goto L6a162f;
case 0x6a1632:c.instructions+=6;goto B6a1632;
case 0x6a1635:c.instructions+=5;goto B6a1635;
case 0x6a1638:c.instructions+=4;goto B6a1638;
case 0x6a163a:c.instructions+=3;goto B6a163a;
case 0x6a163c:c.instructions+=2;goto B6a163c;
case 0x6a1642:c.instructions+=1;goto B6a1642;
case 0x6a1644:goto L6a1644;
case 0x6a164b:c.instructions+=1;goto B6a164b;
case 0x6a164d:goto L6a164d;
case 0x6a1650:c.instructions+=6;goto B6a1650;
case 0x6a1653:c.instructions+=5;goto B6a1653;
case 0x6a1656:c.instructions+=4;goto B6a1656;
case 0x6a1658:c.instructions+=3;goto B6a1658;
case 0x6a165a:c.instructions+=2;goto B6a165a;
case 0x6a1660:c.instructions+=1;goto B6a1660;
case 0x6a1662:goto L6a1662;
case 0x6a1669:c.instructions+=1;goto B6a1669;
case 0x6a166b:goto L6a166b;
case 0x6a166e:c.instructions+=6;goto B6a166e;
case 0x6a1671:c.instructions+=5;goto B6a1671;
case 0x6a1674:c.instructions+=4;goto B6a1674;
case 0x6a1676:c.instructions+=3;goto B6a1676;
case 0x6a1678:c.instructions+=2;goto B6a1678;
case 0x6a167e:c.instructions+=1;goto B6a167e;
case 0x6a1680:goto L6a1680;
case 0x6a1684:c.instructions+=2;goto B6a1684;
case 0x6a1688:c.instructions+=1;goto B6a1688;
case 0x6a168a:goto L6a168a;
case 0x6a168d:c.instructions+=1;goto B6a168d;
case 0x6a168f:goto L6a168f;
case 0x6a1692:goto L6a1692;
case 0x6a1695:c.instructions+=2;goto B6a1695;
case 0x6a1697:c.instructions+=1;goto B6a1697;
case 0x6a1699:goto L6a1699;
case 0x6a169c:c.instructions+=5;goto B6a169c;
case 0x6a169f:c.instructions+=4;goto B6a169f;
case 0x6a16a2:c.instructions+=3;goto B6a16a2;
case 0x6a16a5:c.instructions+=2;goto B6a16a5;
case 0x6a16a8:c.instructions+=1;goto B6a16a8;
case 0x6a16aa:goto L6a16aa;
case 0x6a16ad:c.instructions+=2;goto B6a16ad;
case 0x6a16b0:c.instructions+=1;goto B6a16b0;
case 0x6a16b2:goto L6a16b2;
case 0x6a16b5:c.instructions+=5;goto B6a16b5;
case 0x6a16b8:c.instructions+=4;goto B6a16b8;
case 0x6a16bb:c.instructions+=3;goto B6a16bb;
case 0x6a16be:c.instructions+=2;goto B6a16be;
case 0x6a16c1:c.instructions+=1;goto B6a16c1;
case 0x6a16c6:goto L6a16c6;
case 0x6a16cb:goto L6a16cb;
case 0x6a16d2:c.instructions+=1;goto B6a16d2;
case 0x6a16d8:goto L6a16d8;
case 0x6a16db:c.instructions+=6;goto B6a16db;
case 0x6a16de:c.instructions+=5;goto B6a16de;
case 0x6a16e1:c.instructions+=4;goto B6a16e1;
case 0x6a16e3:c.instructions+=3;goto B6a16e3;
case 0x6a16e5:c.instructions+=2;goto B6a16e5;
case 0x6a16ea:c.instructions+=1;goto B6a16ea;
case 0x6a16f0:goto L6a16f0;
case 0x6a16f3:c.instructions+=3;goto B6a16f3;
case 0x6a16f5:c.instructions+=2;goto B6a16f5;
case 0x6a16f7:c.instructions+=1;goto B6a16f7;
case 0x6a16f9:goto L6a16f9;
case 0x6a16fc:goto L6a16fc;
case 0x6a16fe:c.instructions+=2;goto B6a16fe;
case 0x6a1701:c.instructions+=1;goto B6a1701;
case 0x6a1703:goto L6a1703;
case 0x6a1704:c.instructions+=3;goto B6a1704;
case 0x6a1707:c.instructions+=2;goto B6a1707;
case 0x6a1709:c.instructions+=1;goto B6a1709;
case 0x6a170b:goto L6a170b;
case 0x6a170e:c.instructions+=16;goto B6a170e;
case 0x6a1711:c.instructions+=15;goto B6a1711;
case 0x6a1714:c.instructions+=14;goto B6a1714;
case 0x6a1718:c.instructions+=13;goto B6a1718;
case 0x6a171b:c.instructions+=12;goto B6a171b;
case 0x6a171d:c.instructions+=11;goto B6a171d;
case 0x6a1720:c.instructions+=10;goto B6a1720;
case 0x6a1723:c.instructions+=9;goto B6a1723;
case 0x6a1725:c.instructions+=8;goto B6a1725;
case 0x6a1727:c.instructions+=7;goto B6a1727;
case 0x6a172a:c.instructions+=6;goto B6a172a;
case 0x6a172d:c.instructions+=5;goto B6a172d;
case 0x6a172f:c.instructions+=4;goto B6a172f;
case 0x6a1732:c.instructions+=3;goto B6a1732;
case 0x6a1735:c.instructions+=2;goto B6a1735;
case 0x6a1738:c.instructions+=1;goto B6a1738;
case 0x6a173d:goto L6a173d;
case 0x6a173f:c.instructions+=11;goto B6a173f;
case 0x6a1741:c.instructions+=10;goto B6a1741;
case 0x6a1744:c.instructions+=9;goto B6a1744;
case 0x6a1747:c.instructions+=8;goto B6a1747;
case 0x6a174a:c.instructions+=7;goto B6a174a;
case 0x6a174d:c.instructions+=6;goto B6a174d;
case 0x6a1750:c.instructions+=5;goto B6a1750;
case 0x6a1753:c.instructions+=4;goto B6a1753;
case 0x6a1756:c.instructions+=3;goto B6a1756;
case 0x6a1759:c.instructions+=2;goto B6a1759;
case 0x6a175d:c.instructions+=1;goto B6a175d;
case 0x6a175f:goto L6a175f;
case 0x6a1762:c.instructions+=7;goto B6a1762;
case 0x6a1765:c.instructions+=6;goto B6a1765;
case 0x6a1768:c.instructions+=5;goto B6a1768;
case 0x6a176b:c.instructions+=4;goto B6a176b;
case 0x6a176d:c.instructions+=3;goto B6a176d;
case 0x6a176f:c.instructions+=2;goto B6a176f;
case 0x6a1775:c.instructions+=1;goto B6a1775;
case 0x6a1777:goto L6a1777;
case 0x6a177b:c.instructions+=2;goto B6a177b;
case 0x6a177f:c.instructions+=1;goto B6a177f;
case 0x6a1781:goto L6a1781;
case 0x6a1784:goto L6a1784;
case 0x6a1786:c.instructions+=2;goto B6a1786;
case 0x6a1789:c.instructions+=1;goto B6a1789;
case 0x6a178b:goto L6a178b;
case 0x6a178e:c.instructions+=4;goto B6a178e;
case 0x6a1791:c.instructions+=3;goto B6a1791;
case 0x6a1794:c.instructions+=2;goto B6a1794;
case 0x6a1797:c.instructions+=1;goto B6a1797;
case 0x6a1799:goto L6a1799;
case 0x6a179c:c.instructions+=4;goto B6a179c;
case 0x6a179f:c.instructions+=3;goto B6a179f;
case 0x6a17a2:c.instructions+=2;goto B6a17a2;
case 0x6a17a5:c.instructions+=1;goto B6a17a5;
case 0x6a17ab:goto L6a17ab;
case 0x6a17ae:goto L6a17ae;
case 0x6a17b1:c.instructions+=7;goto B6a17b1;
case 0x6a17b4:c.instructions+=6;goto B6a17b4;
case 0x6a17b7:c.instructions+=5;goto B6a17b7;
case 0x6a17b9:c.instructions+=4;goto B6a17b9;
case 0x6a17bd:c.instructions+=3;goto B6a17bd;
case 0x6a17c0:c.instructions+=2;goto B6a17c0;
case 0x6a17c3:c.instructions+=1;goto B6a17c3;
case 0x6a17c9:goto L6a17c9;
case 0x6a17cc:c.instructions+=1;goto B6a17cc;
case 0x6a17cf:goto L6a17cf;
case 0x6a17d6:c.instructions+=1;goto B6a17d6;
case 0x6a17dc:goto L6a17dc;
case 0x6a17df:c.instructions+=6;goto B6a17df;
case 0x6a17e2:c.instructions+=5;goto B6a17e2;
case 0x6a17e5:c.instructions+=4;goto B6a17e5;
case 0x6a17e7:c.instructions+=3;goto B6a17e7;
case 0x6a17e9:c.instructions+=2;goto B6a17e9;
case 0x6a17ef:c.instructions+=1;goto B6a17ef;
case 0x6a17f5:goto L6a17f5;
case 0x6a17f8:c.instructions+=3;goto B6a17f8;
case 0x6a17fc:c.instructions+=2;goto B6a17fc;
case 0x6a17fe:c.instructions+=1;goto B6a17fe;
case 0x6a1800:goto L6a1800;
case 0x6a1803:c.instructions+=1;goto B6a1803;
case 0x6a1806:goto L6a1806;
case 0x6a1809:c.instructions+=3;goto B6a1809;
case 0x6a180b:c.instructions+=2;goto B6a180b;
case 0x6a180e:c.instructions+=1;goto B6a180e;
case 0x6a1810:goto L6a1810;
case 0x6a1813:c.instructions+=3;goto B6a1813;
case 0x6a1817:c.instructions+=2;goto B6a1817;
case 0x6a181a:c.instructions+=1;goto B6a181a;
case 0x6a181c:goto L6a181c;
case 0x6a1820:c.instructions+=7;goto B6a1820;
case 0x6a1823:c.instructions+=6;goto B6a1823;
case 0x6a1826:c.instructions+=5;goto B6a1826;
case 0x6a1829:c.instructions+=4;goto B6a1829;
case 0x6a182c:c.instructions+=3;goto B6a182c;
case 0x6a182f:c.instructions+=2;goto B6a182f;
case 0x6a1832:c.instructions+=1;goto B6a1832;
case 0x6a1835:goto L6a1835;
case 0x6a1837:c.instructions+=7;goto B6a1837;
case 0x6a183a:c.instructions+=6;goto B6a183a;
case 0x6a183d:c.instructions+=5;goto B6a183d;
case 0x6a1840:c.instructions+=4;goto B6a1840;
case 0x6a1843:c.instructions+=3;goto B6a1843;
case 0x6a1846:c.instructions+=2;goto B6a1846;
case 0x6a184a:c.instructions+=1;goto B6a184a;
case 0x6a184c:goto L6a184c;
case 0x6a184f:c.instructions+=7;goto B6a184f;
case 0x6a1852:c.instructions+=6;goto B6a1852;
case 0x6a1855:c.instructions+=5;goto B6a1855;
case 0x6a1858:c.instructions+=4;goto B6a1858;
case 0x6a185a:c.instructions+=3;goto B6a185a;
case 0x6a185c:c.instructions+=2;goto B6a185c;
case 0x6a1862:c.instructions+=1;goto B6a1862;
case 0x6a1864:goto L6a1864;
case 0x6a1868:c.instructions+=2;goto B6a1868;
case 0x6a186c:c.instructions+=1;goto B6a186c;
case 0x6a186e:goto L6a186e;
case 0x6a1871:c.instructions+=1;goto B6a1871;
case 0x6a1873:goto L6a1873;
case 0x6a1876:c.instructions+=6;goto B6a1876;
case 0x6a1879:c.instructions+=5;goto B6a1879;
case 0x6a187c:c.instructions+=4;goto B6a187c;
case 0x6a187f:c.instructions+=3;goto B6a187f;
case 0x6a1882:c.instructions+=2;goto B6a1882;
case 0x6a1885:c.instructions+=1;goto B6a1885;
case 0x6a1887:goto L6a1887;
case 0x6a188a:goto L6a188a;
case 0x6a188d:c.instructions+=3;goto B6a188d;
case 0x6a188f:c.instructions+=2;goto B6a188f;
case 0x6a1891:c.instructions+=1;goto B6a1891;
case 0x6a1893:goto L6a1893;
case 0x6a1896:c.instructions+=5;goto B6a1896;
case 0x6a1899:c.instructions+=4;goto B6a1899;
case 0x6a189c:c.instructions+=3;goto B6a189c;
case 0x6a189f:c.instructions+=2;goto B6a189f;
case 0x6a18a2:c.instructions+=1;goto B6a18a2;
case 0x6a18a4:goto L6a18a4;
case 0x6a18a7:c.instructions+=7;goto B6a18a7;
case 0x6a18aa:c.instructions+=6;goto B6a18aa;
case 0x6a18ad:c.instructions+=5;goto B6a18ad;
case 0x6a18b0:c.instructions+=4;goto B6a18b0;
case 0x6a18b3:c.instructions+=3;goto B6a18b3;
case 0x6a18b5:c.instructions+=2;goto B6a18b5;
case 0x6a18b7:c.instructions+=1;goto B6a18b7;
case 0x6a18b9:goto L6a18b9;
case 0x6a18bb:c.instructions+=1;goto B6a18bb;
case 0x6a18bd:goto L6a18bd;
case 0x6a18c0:c.instructions+=5;goto B6a18c0;
case 0x6a18c3:c.instructions+=4;goto B6a18c3;
case 0x6a18c6:c.instructions+=3;goto B6a18c6;
case 0x6a18ca:c.instructions+=2;goto B6a18ca;
case 0x6a18cd:c.instructions+=1;goto B6a18cd;
case 0x6a18d3:goto L6a18d3;
case 0x6a18d5:goto L6a18d5;
case 0x6a18d6:c.instructions+=3;goto B6a18d6;
case 0x6a18d8:c.instructions+=2;goto B6a18d8;
case 0x6a18d9:c.instructions+=1;goto B6a18d9;
case 0x6a18dc:goto L6a18dc;
case 0x6a18de:c.instructions+=1;goto B6a18de;
case 0x6a18e0:goto L6a18e0;
case 0x6a18e3:c.instructions+=2;goto B6a18e3;
case 0x6a18e5:c.instructions+=1;goto B6a18e5;
case 0x6a18ea:goto L6a18ea;
case 0x6a18ed:goto L6a18ed;
case 0x6a18ee:c.instructions+=5;goto B6a18ee;
case 0x6a18ef:c.instructions+=4;goto B6a18ef;
case 0x6a18f1:c.instructions+=3;goto B6a18f1;
case 0x6a18f2:c.instructions+=2;goto B6a18f2;
case 0x6a18f3:c.instructions+=1;goto B6a18f3;
case 0x6a18f6:goto L6a18f6;
case 0x6a18f8:c.instructions+=33;goto B6a18f8;
case 0x6a18f9:c.instructions+=32;goto B6a18f9;
case 0x6a18fb:c.instructions+=31;goto B6a18fb;
case 0x6a18fe:c.instructions+=30;goto B6a18fe;
case 0x6a18ff:c.instructions+=29;goto B6a18ff;
case 0x6a1900:c.instructions+=28;goto B6a1900;
case 0x6a1901:c.instructions+=27;goto B6a1901;
case 0x6a1903:c.instructions+=26;goto B6a1903;
case 0x6a1906:c.instructions+=25;goto B6a1906;
case 0x6a1909:c.instructions+=24;goto B6a1909;
case 0x6a190b:c.instructions+=23;goto B6a190b;
case 0x6a190e:c.instructions+=22;goto B6a190e;
case 0x6a1911:c.instructions+=21;goto B6a1911;
case 0x6a1914:c.instructions+=20;goto B6a1914;
case 0x6a1917:c.instructions+=19;goto B6a1917;
case 0x6a191a:c.instructions+=18;goto B6a191a;
case 0x6a191d:c.instructions+=17;goto B6a191d;
case 0x6a1920:c.instructions+=16;goto B6a1920;
case 0x6a1923:c.instructions+=15;goto B6a1923;
case 0x6a1926:c.instructions+=14;goto B6a1926;
case 0x6a1929:c.instructions+=13;goto B6a1929;
case 0x6a192c:c.instructions+=12;goto B6a192c;
case 0x6a192f:c.instructions+=11;goto B6a192f;
case 0x6a1932:c.instructions+=10;goto B6a1932;
case 0x6a1935:c.instructions+=9;goto B6a1935;
case 0x6a1938:c.instructions+=8;goto B6a1938;
case 0x6a193b:c.instructions+=7;goto B6a193b;
case 0x6a193e:c.instructions+=6;goto B6a193e;
case 0x6a1941:c.instructions+=5;goto B6a1941;
case 0x6a1944:c.instructions+=4;goto B6a1944;
case 0x6a1946:c.instructions+=3;goto B6a1946;
case 0x6a1949:c.instructions+=2;goto B6a1949;
case 0x6a194c:c.instructions+=1;goto B6a194c;
case 0x6a1952:goto L6a1952;
case 0x6a1955:c.instructions+=1;goto B6a1955;
case 0x6a195b:goto L6a195b;
case 0x6a195d:c.instructions+=14;goto B6a195d;
case 0x6a195f:c.instructions+=13;goto B6a195f;
case 0x6a1962:c.instructions+=12;goto B6a1962;
case 0x6a1964:c.instructions+=11;goto B6a1964;
case 0x6a1967:c.instructions+=10;goto B6a1967;
case 0x6a1969:c.instructions+=9;goto B6a1969;
case 0x6a196c:c.instructions+=8;goto B6a196c;
case 0x6a196f:c.instructions+=7;goto B6a196f;
case 0x6a1971:c.instructions+=6;goto B6a1971;
case 0x6a1974:c.instructions+=5;goto B6a1974;
case 0x6a1976:c.instructions+=4;goto B6a1976;
case 0x6a1979:c.instructions+=3;goto B6a1979;
case 0x6a197e:c.instructions+=2;goto B6a197e;
case 0x6a1981:c.instructions+=1;goto B6a1981;
case 0x6a1983:goto L6a1983;
case 0x6a1986:c.instructions+=3;goto B6a1986;
case 0x6a198c:c.instructions+=2;goto B6a198c;
case 0x6a1992:c.instructions+=1;goto B6a1992;
case 0x6a1994:goto L6a1994;
case 0x6a199a:c.instructions+=1;goto B6a199a;
case 0x6a199c:goto L6a199c;
case 0x6a19a2:c.instructions+=1;goto B6a19a2;
case 0x6a19a4:goto L6a19a4;
case 0x6a19aa:c.instructions+=1;goto B6a19aa;
case 0x6a19ac:goto L6a19ac;
case 0x6a19b2:c.instructions+=1;goto B6a19b2;
case 0x6a19b4:goto L6a19b4;
case 0x6a19ba:c.instructions+=1;goto B6a19ba;
case 0x6a19bc:goto L6a19bc;
case 0x6a19be:c.instructions+=3;goto B6a19be;
case 0x6a19c3:c.instructions+=2;goto B6a19c3;
case 0x6a19c5:c.instructions+=1;goto B6a19c5;
case 0x6a19c7:goto L6a19c7;
case 0x6a19cc:c.instructions+=2;goto B6a19cc;
case 0x6a19ce:c.instructions+=1;goto B6a19ce;
case 0x6a19d0:goto L6a19d0;
case 0x6a19d5:c.instructions+=2;goto B6a19d5;
case 0x6a19d7:c.instructions+=1;goto B6a19d7;
case 0x6a19d9:goto L6a19d9;
case 0x6a19db:c.instructions+=1;goto B6a19db;
case 0x6a19dd:goto L6a19dd;
case 0x6a19e0:c.instructions+=8;goto B6a19e0;
case 0x6a19e3:c.instructions+=7;goto B6a19e3;
case 0x6a19e5:c.instructions+=6;goto B6a19e5;
case 0x6a19e7:c.instructions+=5;goto B6a19e7;
case 0x6a19ec:c.instructions+=4;goto B6a19ec;
case 0x6a19ee:c.instructions+=3;goto B6a19ee;
case 0x6a19f3:c.instructions+=2;goto B6a19f3;
case 0x6a19f8:c.instructions+=1;goto B6a19f8;
case 0x6a19fa:goto L6a19fa;
case 0x6a19fd:c.instructions+=3;goto B6a19fd;
case 0x6a19ff:c.instructions+=2;goto B6a19ff;
case 0x6a1a01:c.instructions+=1;goto B6a1a01;
case 0x6a1a03:goto L6a1a03;
case 0x6a1a05:goto L6a1a05;
case 0x6a1a0a:c.instructions+=1;goto B6a1a0a;
case 0x6a1a0c:goto L6a1a0c;
case 0x6a1a11:c.instructions+=1;goto B6a1a11;
case 0x6a1a13:goto L6a1a13;
case 0x6a1a18:c.instructions+=1;goto B6a1a18;
case 0x6a1a1a:goto L6a1a1a;
case 0x6a1a1c:c.instructions+=1;goto B6a1a1c;
case 0x6a1a1e:goto L6a1a1e;
case 0x6a1a20:goto L6a1a20;
case 0x6a1a25:c.instructions+=1;goto B6a1a25;
case 0x6a1a27:goto L6a1a27;
case 0x6a1a2c:c.instructions+=1;goto B6a1a2c;
case 0x6a1a2e:goto L6a1a2e;
case 0x6a1a33:c.instructions+=1;goto B6a1a33;
case 0x6a1a35:goto L6a1a35;
case 0x6a1a38:goto L6a1a38;
case 0x6a1a3b:c.instructions+=6;goto B6a1a3b;
case 0x6a1a3d:c.instructions+=5;goto B6a1a3d;
case 0x6a1a42:c.instructions+=4;goto B6a1a42;
case 0x6a1a44:c.instructions+=3;goto B6a1a44;
case 0x6a1a47:c.instructions+=2;goto B6a1a47;
case 0x6a1a48:c.instructions+=1;goto B6a1a48;
case 0x6a1a4a:goto L6a1a4a;
case 0x6a1a4c:goto L6a1a4c;
case 0x6a1a51:c.instructions+=1;goto B6a1a51;
case 0x6a1a53:goto L6a1a53;
case 0x6a1a58:c.instructions+=1;goto B6a1a58;
case 0x6a1a5a:goto L6a1a5a;
case 0x6a1a5f:c.instructions+=1;goto B6a1a5f;
case 0x6a1a61:goto L6a1a61;
case 0x6a1a66:c.instructions+=1;goto B6a1a66;
case 0x6a1a6c:goto L6a1a6c;
case 0x6a1a6f:c.instructions+=1;goto B6a1a6f;
case 0x6a1a74:goto L6a1a74;
case 0x6a1a77:c.instructions+=6;goto B6a1a77;
case 0x6a1a7a:c.instructions+=5;goto B6a1a7a;
case 0x6a1a7c:c.instructions+=4;goto B6a1a7c;
case 0x6a1a7f:c.instructions+=3;goto B6a1a7f;
case 0x6a1a81:c.instructions+=2;goto B6a1a81;
case 0x6a1a83:c.instructions+=1;goto B6a1a83;
case 0x6a1a85:goto L6a1a85;
case 0x6a1a88:c.instructions+=6;goto B6a1a88;
case 0x6a1a8b:c.instructions+=5;goto B6a1a8b;
case 0x6a1a8e:c.instructions+=4;goto B6a1a8e;
case 0x6a1a91:c.instructions+=3;goto B6a1a91;
case 0x6a1a94:c.instructions+=2;goto B6a1a94;
case 0x6a1a96:c.instructions+=1;goto B6a1a96;
case 0x6a1a98:goto L6a1a98;
case 0x6a1a9b:c.instructions+=3;goto B6a1a9b;
case 0x6a1a9e:c.instructions+=2;goto B6a1a9e;
case 0x6a1aa1:c.instructions+=1;goto B6a1aa1;
case 0x6a1aa3:goto L6a1aa3;
case 0x6a1aa5:c.instructions+=1;goto B6a1aa5;
case 0x6a1aa7:goto L6a1aa7;
case 0x6a1aac:c.instructions+=1;goto B6a1aac;
case 0x6a1aae:goto L6a1aae;
case 0x6a1ab3:c.instructions+=1;goto B6a1ab3;
case 0x6a1ab5:goto L6a1ab5;
case 0x6a1aba:c.instructions+=1;goto B6a1aba;
case 0x6a1ac0:goto L6a1ac0;
case 0x6a1ac3:c.instructions+=1;goto B6a1ac3;
case 0x6a1ac6:goto L6a1ac6;
case 0x6a1ac8:c.instructions+=1;goto B6a1ac8;
case 0x6a1acd:goto L6a1acd;
case 0x6a1ad0:c.instructions+=8;goto B6a1ad0;
case 0x6a1ad3:c.instructions+=7;goto B6a1ad3;
case 0x6a1ad6:c.instructions+=6;goto B6a1ad6;
case 0x6a1ad9:c.instructions+=5;goto B6a1ad9;
case 0x6a1adb:c.instructions+=4;goto B6a1adb;
case 0x6a1add:c.instructions+=3;goto B6a1add;
case 0x6a1adf:c.instructions+=2;goto B6a1adf;
case 0x6a1ae2:c.instructions+=1;goto B6a1ae2;
case 0x6a1ae4:goto L6a1ae4;
case 0x6a1ae8:c.instructions+=1;goto B6a1ae8;
case 0x6a1aea:goto L6a1aea;
case 0x6a1aee:c.instructions+=1;goto B6a1aee;
case 0x6a1af0:goto L6a1af0;
case 0x6a1af4:c.instructions+=1;goto B6a1af4;
case 0x6a1af6:goto L6a1af6;
case 0x6a1af8:c.instructions+=1;goto B6a1af8;
case 0x6a1afa:goto L6a1afa;
case 0x6a1afe:c.instructions+=1;goto B6a1afe;
case 0x6a1b00:goto L6a1b00;
case 0x6a1b04:c.instructions+=1;goto B6a1b04;
case 0x6a1b06:goto L6a1b06;
case 0x6a1b0a:c.instructions+=1;goto B6a1b0a;
case 0x6a1b0c:goto L6a1b0c;
case 0x6a1b10:c.instructions+=1;goto B6a1b10;
case 0x6a1b12:goto L6a1b12;
case 0x6a1b15:goto L6a1b15;
case 0x6a1b18:c.instructions+=3;goto B6a1b18;
case 0x6a1b1b:c.instructions+=2;goto B6a1b1b;
case 0x6a1b1d:c.instructions+=1;goto B6a1b1d;
case 0x6a1b1f:goto L6a1b1f;
case 0x6a1b21:c.instructions+=1;goto B6a1b21;
case 0x6a1b26:goto L6a1b26;
case 0x6a1b29:c.instructions+=4;goto B6a1b29;
case 0x6a1b2c:c.instructions+=3;goto B6a1b2c;
case 0x6a1b2f:c.instructions+=2;goto B6a1b2f;
case 0x6a1b33:c.instructions+=1;goto B6a1b33;
case 0x6a1b35:goto L6a1b35;
case 0x6a1b38:c.instructions+=7;goto B6a1b38;
case 0x6a1b3b:c.instructions+=6;goto B6a1b3b;
case 0x6a1b3e:c.instructions+=5;goto B6a1b3e;
case 0x6a1b41:c.instructions+=4;goto B6a1b41;
case 0x6a1b43:c.instructions+=3;goto B6a1b43;
case 0x6a1b45:c.instructions+=2;goto B6a1b45;
case 0x6a1b4b:c.instructions+=1;goto B6a1b4b;
case 0x6a1b4d:goto L6a1b4d;
case 0x6a1b4f:c.instructions+=2;goto B6a1b4f;
case 0x6a1b52:c.instructions+=1;goto B6a1b52;
case 0x6a1b54:goto L6a1b54;
case 0x6a1b57:goto L6a1b57;
case 0x6a1b5a:c.instructions+=2;goto B6a1b5a;
case 0x6a1b5c:c.instructions+=1;goto B6a1b5c;
case 0x6a1b5e:goto L6a1b5e;
case 0x6a1b5f:c.instructions+=3;goto B6a1b5f;
case 0x6a1b62:c.instructions+=2;goto B6a1b62;
case 0x6a1b65:c.instructions+=1;goto B6a1b65;
case 0x6a1b67:goto L6a1b67;
case 0x6a1b6a:c.instructions+=1;goto B6a1b6a;
case 0x6a1b6c:goto L6a1b6c;
case 0x6a1b6f:c.instructions+=3;goto B6a1b6f;
case 0x6a1b72:c.instructions+=2;goto B6a1b72;
case 0x6a1b75:c.instructions+=1;goto B6a1b75;
case 0x6a1b77:goto L6a1b77;
case 0x6a1b7a:goto L6a1b7a;
case 0x6a1b7d:c.instructions+=3;goto B6a1b7d;
case 0x6a1b80:c.instructions+=2;goto B6a1b80;
case 0x6a1b84:c.instructions+=1;goto B6a1b84;
case 0x6a1b86:goto L6a1b86;
case 0x6a1b89:c.instructions+=6;goto B6a1b89;
case 0x6a1b8c:c.instructions+=5;goto B6a1b8c;
case 0x6a1b8f:c.instructions+=4;goto B6a1b8f;
case 0x6a1b91:c.instructions+=3;goto B6a1b91;
case 0x6a1b93:c.instructions+=2;goto B6a1b93;
case 0x6a1b99:c.instructions+=1;goto B6a1b99;
case 0x6a1b9b:goto L6a1b9b;
case 0x6a1b9d:c.instructions+=2;goto B6a1b9d;
case 0x6a1ba0:c.instructions+=1;goto B6a1ba0;
case 0x6a1ba2:goto L6a1ba2;
case 0x6a1ba5:goto L6a1ba5;
case 0x6a1ba8:c.instructions+=2;goto B6a1ba8;
case 0x6a1baa:c.instructions+=1;goto B6a1baa;
case 0x6a1bac:goto L6a1bac;
case 0x6a1bad:c.instructions+=3;goto B6a1bad;
case 0x6a1bb0:c.instructions+=2;goto B6a1bb0;
case 0x6a1bb3:c.instructions+=1;goto B6a1bb3;
case 0x6a1bb5:goto L6a1bb5;
case 0x6a1bb8:c.instructions+=1;goto B6a1bb8;
case 0x6a1bba:goto L6a1bba;
case 0x6a1bbd:c.instructions+=2;goto B6a1bbd;
case 0x6a1bc0:c.instructions+=1;goto B6a1bc0;
case 0x6a1bc3:goto L6a1bc3;
case 0x6a1bc5:goto L6a1bc5;
case 0x6a1bc8:goto L6a1bc8;
case 0x6a1bca:c.instructions+=2;goto B6a1bca;
case 0x6a1bcd:c.instructions+=1;goto B6a1bcd;
case 0x6a1bcf:goto L6a1bcf;
case 0x6a1bd3:c.instructions+=1;goto B6a1bd3;
case 0x6a1bd5:goto L6a1bd5;
case 0x6a1bd9:c.instructions+=1;goto B6a1bd9;
case 0x6a1bdb:goto L6a1bdb;
case 0x6a1bde:c.instructions+=2;goto B6a1bde;
case 0x6a1be3:c.instructions+=1;goto B6a1be3;
case 0x6a1be5:goto L6a1be5;
case 0x6a1bea:c.instructions+=1;goto B6a1bea;
case 0x6a1bec:goto L6a1bec;
case 0x6a1bf1:c.instructions+=1;goto B6a1bf1;
case 0x6a1bf3:goto L6a1bf3;
case 0x6a1bf8:c.instructions+=1;goto B6a1bf8;
case 0x6a1bfa:goto L6a1bfa;
case 0x6a1bfc:goto L6a1bfc;
case 0x6a1bfd:c.instructions+=7;goto B6a1bfd;
case 0x6a1bfe:c.instructions+=6;goto B6a1bfe;
case 0x6a1c01:c.instructions+=5;goto B6a1c01;
case 0x6a1c02:c.instructions+=4;goto B6a1c02;
case 0x6a1c03:c.instructions+=3;goto B6a1c03;
case 0x6a1c06:c.instructions+=2;goto B6a1c06;
case 0x6a1c08:c.instructions+=1;goto B6a1c08;
case 0x6a1c0d:goto L6a1c0d;
case 0x6a1c12:goto L6a1c12;
case 0x6a1c14:c.instructions+=1;goto B6a1c14;
case 0x6a1c16:goto L6a1c16;
case 0x6a1c19:c.instructions+=1;goto B6a1c19;
case 0x6a1c1e:goto L6a1c1e;
case 0x6a1c21:c.instructions+=1;goto B6a1c21;
case 0x6a1c26:goto L6a1c26;
case 0x6a1c2a:c.instructions+=1;goto B6a1c2a;
case 0x6a1c2c:goto L6a1c2c;
case 0x6a1c30:c.instructions+=1;goto B6a1c30;
case 0x6a1c32:goto L6a1c32;
case 0x6a1c39:c.instructions+=1;goto B6a1c39;
case 0x6a1c3b:goto L6a1c3b;
case 0x6a1c42:c.instructions+=1;goto B6a1c42;
case 0x6a1c44:goto L6a1c44;
case 0x6a1c47:c.instructions+=9;goto B6a1c47;
case 0x6a1c4a:c.instructions+=8;goto B6a1c4a;
case 0x6a1c4d:c.instructions+=7;goto B6a1c4d;
case 0x6a1c50:c.instructions+=6;goto B6a1c50;
case 0x6a1c53:c.instructions+=5;goto B6a1c53;
case 0x6a1c58:c.instructions+=4;goto B6a1c58;
case 0x6a1c5b:c.instructions+=3;goto B6a1c5b;
case 0x6a1c5d:c.instructions+=2;goto B6a1c5d;
case 0x6a1c60:c.instructions+=1;goto B6a1c60;
case 0x6a1c66:goto L6a1c66;
case 0x6a1c6a:c.instructions+=1;goto B6a1c6a;
case 0x6a1c70:goto L6a1c70;
case 0x6a1c73:c.instructions+=4;goto B6a1c73;
case 0x6a1c76:c.instructions+=3;goto B6a1c76;
case 0x6a1c79:c.instructions+=2;goto B6a1c79;
case 0x6a1c7c:c.instructions+=1;goto B6a1c7c;
case 0x6a1c82:goto L6a1c82;
case 0x6a1c85:c.instructions+=2;goto B6a1c85;
case 0x6a1c89:c.instructions+=1;goto B6a1c89;
case 0x6a1c8f:goto L6a1c8f;
case 0x6a1c92:c.instructions+=6;goto B6a1c92;
case 0x6a1c95:c.instructions+=5;goto B6a1c95;
case 0x6a1c98:c.instructions+=4;goto B6a1c98;
case 0x6a1c9d:c.instructions+=3;goto B6a1c9d;
case 0x6a1ca0:c.instructions+=2;goto B6a1ca0;
case 0x6a1ca3:c.instructions+=1;goto B6a1ca3;
case 0x6a1ca5:goto L6a1ca5;
case 0x6a1caa:c.instructions+=1;goto B6a1caa;
case 0x6a1cac:goto L6a1cac;
case 0x6a1cb1:c.instructions+=1;goto B6a1cb1;
case 0x6a1cb3:goto L6a1cb3;
case 0x6a1cb8:c.instructions+=1;goto B6a1cb8;
case 0x6a1cba:goto L6a1cba;
case 0x6a1cbf:c.instructions+=1;goto B6a1cbf;
case 0x6a1cc1:goto L6a1cc1;
case 0x6a1cc6:c.instructions+=1;goto B6a1cc6;
case 0x6a1cc8:goto L6a1cc8;
case 0x6a1ccd:c.instructions+=1;goto B6a1ccd;
case 0x6a1cd3:goto L6a1cd3;
case 0x6a1cd5:c.instructions+=4;goto B6a1cd5;
case 0x6a1cd8:c.instructions+=3;goto B6a1cd8;
case 0x6a1cda:c.instructions+=2;goto B6a1cda;
case 0x6a1cdc:c.instructions+=1;goto B6a1cdc;
case 0x6a1cde:goto L6a1cde;
case 0x6a1ce1:c.instructions+=1;goto B6a1ce1;
case 0x6a1ce3:goto L6a1ce3;
case 0x6a1ce6:c.instructions+=1;goto B6a1ce6;
case 0x6a1ce8:goto L6a1ce8;
case 0x6a1ceb:c.instructions+=3;goto B6a1ceb;
case 0x6a1ced:c.instructions+=2;goto B6a1ced;
case 0x6a1cf0:c.instructions+=1;goto B6a1cf0;
case 0x6a1cf6:goto L6a1cf6;
case 0x6a1cfb:goto L6a1cfb;
case 0x6a1cfe:c.instructions+=3;goto B6a1cfe;
case 0x6a1d00:c.instructions+=2;goto B6a1d00;
case 0x6a1d03:c.instructions+=1;goto B6a1d03;
case 0x6a1d09:goto L6a1d09;
case 0x6a1d0e:goto L6a1d0e;
case 0x6a1d11:c.instructions+=3;goto B6a1d11;
case 0x6a1d13:c.instructions+=2;goto B6a1d13;
case 0x6a1d16:c.instructions+=1;goto B6a1d16;
case 0x6a1d18:goto L6a1d18;
case 0x6a1d1a:goto L6a1d1a;
case 0x6a1d1d:c.instructions+=3;goto B6a1d1d;
case 0x6a1d1f:c.instructions+=2;goto B6a1d1f;
case 0x6a1d22:c.instructions+=1;goto B6a1d22;
case 0x6a1d24:goto L6a1d24;
case 0x6a1d26:c.instructions+=1;goto B6a1d26;
case 0x6a1d29:goto L6a1d29;
case 0x6a1d2a:c.instructions+=3;goto B6a1d2a;
case 0x6a1d2b:c.instructions+=2;goto B6a1d2b;
case 0x6a1d2e:c.instructions+=1;goto B6a1d2e;
case 0x6a1d33:goto L6a1d33;
case 0x6a1d37:c.instructions+=1;goto B6a1d37;
case 0x6a1d3d:goto L6a1d3d;
case 0x6a1d3f:c.instructions+=1;goto B6a1d3f;
case 0x6a1d41:goto L6a1d41;
case 0x6a1d44:c.instructions+=2;goto B6a1d44;
case 0x6a1d48:c.instructions+=1;goto B6a1d48;
case 0x6a1d4a:goto L6a1d4a;
case 0x6a1d4d:c.instructions+=5;goto B6a1d4d;
case 0x6a1d50:c.instructions+=4;goto B6a1d50;
case 0x6a1d53:c.instructions+=3;goto B6a1d53;
case 0x6a1d56:c.instructions+=2;goto B6a1d56;
case 0x6a1d59:c.instructions+=1;goto B6a1d59;
case 0x6a1d5f:goto L6a1d5f;
case 0x6a1d63:c.instructions+=1;goto B6a1d63;
case 0x6a1d69:goto L6a1d69;
case 0x6a1d6c:goto L6a1d6c;
case 0x6a1d6e:c.instructions+=1;goto B6a1d6e;
case 0x6a1d70:goto L6a1d70;
case 0x6a1d74:c.instructions+=1;goto B6a1d74;
case 0x6a1d76:goto L6a1d76;
case 0x6a1d79:c.instructions+=3;goto B6a1d79;
case 0x6a1d7c:c.instructions+=2;goto B6a1d7c;
case 0x6a1d7f:c.instructions+=1;goto B6a1d7f;
case 0x6a1d81:goto L6a1d81;
case 0x6a1d84:c.instructions+=1;goto B6a1d84;
case 0x6a1d86:goto L6a1d86;
case 0x6a1d89:c.instructions+=2;goto B6a1d89;
case 0x6a1d8c:c.instructions+=1;goto B6a1d8c;
case 0x6a1d8f:goto L6a1d8f;
case 0x6a1d92:c.instructions+=2;goto B6a1d92;
case 0x6a1d97:c.instructions+=1;goto B6a1d97;
case 0x6a1d9d:goto L6a1d9d;
case 0x6a1da2:c.instructions+=1;goto B6a1da2;
case 0x6a1da8:goto L6a1da8;
case 0x6a1dad:c.instructions+=1;goto B6a1dad;
case 0x6a1db3:goto L6a1db3;
case 0x6a1db8:c.instructions+=1;goto B6a1db8;
case 0x6a1dbe:goto L6a1dbe;
case 0x6a1dc3:c.instructions+=1;goto B6a1dc3;
case 0x6a1dc9:goto L6a1dc9;
case 0x6a1dce:c.instructions+=1;goto B6a1dce;
case 0x6a1dd0:goto L6a1dd0;
case 0x6a1dd5:c.instructions+=1;goto B6a1dd5;
case 0x6a1ddb:goto L6a1ddb;
case 0x6a1de1:c.instructions+=6;goto B6a1de1;
case 0x6a1de3:c.instructions+=5;goto B6a1de3;
case 0x6a1de5:c.instructions+=4;goto B6a1de5;
case 0x6a1de7:c.instructions+=3;goto B6a1de7;
case 0x6a1de9:c.instructions+=2;goto B6a1de9;
case 0x6a1dec:c.instructions+=1;goto B6a1dec;
case 0x6a1df2:goto L6a1df2;
case 0x6a1df5:c.instructions+=1;goto B6a1df5;
case 0x6a1dfb:goto L6a1dfb;
case 0x6a1dfd:c.instructions+=1;goto B6a1dfd;
case 0x6a1e02:goto L6a1e02;
case 0x6a1e08:c.instructions+=5;goto B6a1e08;
case 0x6a1e0a:c.instructions+=4;goto B6a1e0a;
case 0x6a1e0c:c.instructions+=3;goto B6a1e0c;
case 0x6a1e0e:c.instructions+=2;goto B6a1e0e;
case 0x6a1e11:c.instructions+=1;goto B6a1e11;
case 0x6a1e17:goto L6a1e17;
case 0x6a1e1d:c.instructions+=5;goto B6a1e1d;
case 0x6a1e1f:c.instructions+=4;goto B6a1e1f;
case 0x6a1e21:c.instructions+=3;goto B6a1e21;
case 0x6a1e23:c.instructions+=2;goto B6a1e23;
case 0x6a1e26:c.instructions+=1;goto B6a1e26;
case 0x6a1e2c:goto L6a1e2c;
case 0x6a1e32:c.instructions+=6;goto B6a1e32;
case 0x6a1e34:c.instructions+=5;goto B6a1e34;
case 0x6a1e36:c.instructions+=4;goto B6a1e36;
case 0x6a1e38:c.instructions+=3;goto B6a1e38;
case 0x6a1e3a:c.instructions+=2;goto B6a1e3a;
case 0x6a1e3d:c.instructions+=1;goto B6a1e3d;
case 0x6a1e43:goto L6a1e43;
case 0x6a1e46:c.instructions+=6;goto B6a1e46;
case 0x6a1e49:c.instructions+=5;goto B6a1e49;
case 0x6a1e4c:c.instructions+=4;goto B6a1e4c;
case 0x6a1e4f:c.instructions+=3;goto B6a1e4f;
case 0x6a1e52:c.instructions+=2;goto B6a1e52;
case 0x6a1e56:c.instructions+=1;goto B6a1e56;
case 0x6a1e5c:goto L6a1e5c;
case 0x6a1e5f:c.instructions+=6;goto B6a1e5f;
case 0x6a1e62:c.instructions+=5;goto B6a1e62;
case 0x6a1e65:c.instructions+=4;goto B6a1e65;
case 0x6a1e67:c.instructions+=3;goto B6a1e67;
case 0x6a1e6d:c.instructions+=2;goto B6a1e6d;
case 0x6a1e73:c.instructions+=1;goto B6a1e73;
case 0x6a1e79:goto L6a1e79;
case 0x6a1e7c:c.instructions+=3;goto B6a1e7c;
case 0x6a1e7e:c.instructions+=2;goto B6a1e7e;
case 0x6a1e80:c.instructions+=1;goto B6a1e80;
case 0x6a1e82:goto L6a1e82;
case 0x6a1e85:goto L6a1e85;
case 0x6a1e87:c.instructions+=1;goto B6a1e87;
case 0x6a1e89:goto L6a1e89;
case 0x6a1e8a:c.instructions+=3;goto B6a1e8a;
case 0x6a1e8d:c.instructions+=2;goto B6a1e8d;
case 0x6a1e8f:c.instructions+=1;goto B6a1e8f;
case 0x6a1e91:goto L6a1e91;
case 0x6a1e93:c.instructions+=1;goto B6a1e93;
case 0x6a1e99:goto L6a1e99;
case 0x6a1e9c:c.instructions+=6;goto B6a1e9c;
case 0x6a1e9e:c.instructions+=5;goto B6a1e9e;
case 0x6a1ea1:c.instructions+=4;goto B6a1ea1;
case 0x6a1ea3:c.instructions+=3;goto B6a1ea3;
case 0x6a1ea6:c.instructions+=2;goto B6a1ea6;
case 0x6a1ea9:c.instructions+=1;goto B6a1ea9;
case 0x6a1eaf:goto L6a1eaf;
case 0x6a1eb1:c.instructions+=5;goto B6a1eb1;
case 0x6a1eb4:c.instructions+=4;goto B6a1eb4;
case 0x6a1eb7:c.instructions+=3;goto B6a1eb7;
case 0x6a1eba:c.instructions+=2;goto B6a1eba;
case 0x6a1ebd:c.instructions+=1;goto B6a1ebd;
case 0x6a1ec2:goto L6a1ec2;
case 0x6a1ec8:c.instructions+=6;goto B6a1ec8;
case 0x6a1eca:c.instructions+=5;goto B6a1eca;
case 0x6a1ecc:c.instructions+=4;goto B6a1ecc;
case 0x6a1ece:c.instructions+=3;goto B6a1ece;
case 0x6a1ed0:c.instructions+=2;goto B6a1ed0;
case 0x6a1ed3:c.instructions+=1;goto B6a1ed3;
case 0x6a1ed9:goto L6a1ed9;
case 0x6a1ede:goto L6a1ede;
case 0x6a1ee1:c.instructions+=3;goto B6a1ee1;
case 0x6a1ee7:c.instructions+=2;goto B6a1ee7;
case 0x6a1ee9:c.instructions+=1;goto B6a1ee9;
case 0x6a1eeb:goto L6a1eeb;
case 0x6a1eee:c.instructions+=1;goto B6a1eee;
case 0x6a1ef0:goto L6a1ef0;
case 0x6a1ef3:c.instructions+=1;goto B6a1ef3;
case 0x6a1ef9:goto L6a1ef9;
case 0x6a1eff:c.instructions+=3;goto B6a1eff;
case 0x6a1f01:c.instructions+=2;goto B6a1f01;
case 0x6a1f04:c.instructions+=1;goto B6a1f04;
case 0x6a1f06:goto L6a1f06;
case 0x6a1f09:c.instructions+=1;goto B6a1f09;
case 0x6a1f0b:goto L6a1f0b;
case 0x6a1f11:c.instructions+=3;goto B6a1f11;
case 0x6a1f13:c.instructions+=2;goto B6a1f13;
case 0x6a1f16:c.instructions+=1;goto B6a1f16;
case 0x6a1f1b:goto L6a1f1b;
case 0x6a1f1e:c.instructions+=1;goto B6a1f1e;
case 0x6a1f20:goto L6a1f20;
case 0x6a1f23:c.instructions+=1;goto B6a1f23;
case 0x6a1f25:goto L6a1f25;
case 0x6a1f27:goto L6a1f27;
case 0x6a1f29:c.instructions+=1;goto B6a1f29;
case 0x6a1f2e:goto L6a1f2e;
case 0x6a1f34:c.instructions+=3;goto B6a1f34;
case 0x6a1f36:c.instructions+=2;goto B6a1f36;
case 0x6a1f39:c.instructions+=1;goto B6a1f39;
case 0x6a1f3b:goto L6a1f3b;
case 0x6a1f3e:c.instructions+=1;goto B6a1f3e;
case 0x6a1f40:goto L6a1f40;
case 0x6a1f46:c.instructions+=3;goto B6a1f46;
case 0x6a1f48:c.instructions+=2;goto B6a1f48;
case 0x6a1f4b:c.instructions+=1;goto B6a1f4b;
case 0x6a1f4d:goto L6a1f4d;
case 0x6a1f50:c.instructions+=1;goto B6a1f50;
case 0x6a1f52:goto L6a1f52;
case 0x6a1f58:goto L6a1f58;
case 0x6a1f5a:c.instructions+=5;goto B6a1f5a;
case 0x6a1f5c:c.instructions+=4;goto B6a1f5c;
case 0x6a1f5e:c.instructions+=3;goto B6a1f5e;
case 0x6a1f60:c.instructions+=2;goto B6a1f60;
case 0x6a1f63:c.instructions+=1;goto B6a1f63;
case 0x6a1f69:goto L6a1f69;
case 0x6a1f6c:c.instructions+=1;goto B6a1f6c;
case 0x6a1f72:goto L6a1f72;
case 0x6a1f77:goto L6a1f77;
case 0x6a1f7a:c.instructions+=3;goto B6a1f7a;
case 0x6a1f80:c.instructions+=2;goto B6a1f80;
case 0x6a1f82:c.instructions+=1;goto B6a1f82;
case 0x6a1f84:goto L6a1f84;
case 0x6a1f87:c.instructions+=1;goto B6a1f87;
case 0x6a1f89:goto L6a1f89;
case 0x6a1f8c:c.instructions+=1;goto B6a1f8c;
case 0x6a1f8e:goto L6a1f8e;
case 0x6a1f94:c.instructions+=3;goto B6a1f94;
case 0x6a1f96:c.instructions+=2;goto B6a1f96;
case 0x6a1f99:c.instructions+=1;goto B6a1f99;
case 0x6a1f9b:goto L6a1f9b;
case 0x6a1f9e:c.instructions+=1;goto B6a1f9e;
case 0x6a1fa0:goto L6a1fa0;
case 0x6a1fa2:c.instructions+=1;goto B6a1fa2;
case 0x6a1fa7:goto L6a1fa7;
case 0x6a1fad:c.instructions+=3;goto B6a1fad;
case 0x6a1faf:c.instructions+=2;goto B6a1faf;
case 0x6a1fb2:c.instructions+=1;goto B6a1fb2;
case 0x6a1fb4:goto L6a1fb4;
case 0x6a1fb7:c.instructions+=1;goto B6a1fb7;
case 0x6a1fb9:goto L6a1fb9;
case 0x6a1fbf:c.instructions+=1;goto B6a1fbf;
case 0x6a1fc1:goto L6a1fc1;
case 0x6a1fc4:c.instructions+=1;goto B6a1fc4;
case 0x6a1fc6:goto L6a1fc6;
case 0x6a1fc9:c.instructions+=1;goto B6a1fc9;
case 0x6a1fcb:goto L6a1fcb;
case 0x6a1fd1:c.instructions+=3;goto B6a1fd1;
case 0x6a1fd3:c.instructions+=2;goto B6a1fd3;
case 0x6a1fd6:c.instructions+=1;goto B6a1fd6;
case 0x6a1fd8:goto L6a1fd8;
case 0x6a1fdb:c.instructions+=1;goto B6a1fdb;
case 0x6a1fe1:goto L6a1fe1;
case 0x6a1fe7:c.instructions+=2;goto B6a1fe7;
case 0x6a1fe9:c.instructions+=1;goto B6a1fe9;
case 0x6a1fec:goto L6a1fec;
case 0x6a1ff2:goto L6a1ff2;
case 0x6a1ff5:c.instructions+=1;goto B6a1ff5;
case 0x6a1ffb:goto L6a1ffb;
default:missing_instruction(c.pc);}
B6a1001:L6a1001:{c.instructions+=11;NFSU2_TR(0x6a1001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1004:{NFSU2_TR(0x6a1004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1007:{NFSU2_TR(0x6a1007);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a100a:{NFSU2_TR(0x6a100a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a100d:{NFSU2_TR(0x6a100d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1010:{NFSU2_TR(0x6a1010);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1013:{NFSU2_TR(0x6a1013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a1016:{NFSU2_TR(0x6a1016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1019:{NFSU2_TR(0x6a1019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a101c:{NFSU2_TR(0x6a101c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a101f:{NFSU2_TR(0x6a101f);
if(r1(R+512)){TAIL_STATIC(0x6a0fc9u,6a0);}
}
B6a1021:L6a1021:{c.instructions+=1;NFSU2_TR(0x6a1021);
{goto L6a10a8;}
}
B6a1026:L6a1026:{c.instructions+=3;NFSU2_TR(0x6a1026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a102a:{NFSU2_TR(0x6a102a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a102e:{NFSU2_TR(0x6a102e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a10a8;}}
}
B6a1030:L6a1030:{c.instructions+=1;NFSU2_TR(0x6a1030);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a1033:L6a1033:{c.instructions+=3;NFSU2_TR(0x6a1033);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6a1035:{NFSU2_TR(0x6a1035);
__builtin_memmove((R+4),(R+28),4);
}
B6a1037:{NFSU2_TR(0x6a1037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a103cull));
TAIL_STATIC(0x69a7adu,69a);
}
B6a103c:L6a103c:{c.instructions+=2;NFSU2_TR(0x6a103c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a103e:{NFSU2_TR(0x6a103e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1050;}}
}
B6a1040:L6a1040:{c.instructions+=5;NFSU2_TR(0x6a1040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1043:{NFSU2_TR(0x6a1043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1046:{NFSU2_TR(0x6a1046);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6a1049:{NFSU2_TR(0x6a1049);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a104c:{NFSU2_TR(0x6a104c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1033u);}goto L6a1033;}}
}
B6a104e:L6a104e:{c.instructions+=1;NFSU2_TR(0x6a104e);
{goto L6a10a8;}
}
B6a1050:L6a1050:{c.instructions+=3;NFSU2_TR(0x6a1050);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a1052:{NFSU2_TR(0x6a1052);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1055:{NFSU2_TR(0x6a1055);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a10a8;}}
}
B6a1057:L6a1057:{c.instructions+=8;NFSU2_TR(0x6a1057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a105a:{NFSU2_TR(0x6a105a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a105d:{NFSU2_TR(0x6a105d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1060:{NFSU2_TR(0x6a1060);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1063:{NFSU2_TR(0x6a1063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a1066:{NFSU2_TR(0x6a1066);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a1067:{NFSU2_TR(0x6a1067);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a106a:{NFSU2_TR(0x6a106a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1057u);}goto L6a1057;}}
}
B6a106c:L6a106c:{c.instructions+=1;NFSU2_TR(0x6a106c);
{goto L6a10a8;}
}
B6a106e:L6a106e:{c.instructions+=3;NFSU2_TR(0x6a106e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a1070:{NFSU2_TR(0x6a1070);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1073:{NFSU2_TR(0x6a1073);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a10a8;}}
}
B6a1075:L6a1075:{c.instructions+=8;NFSU2_TR(0x6a1075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1078:{NFSU2_TR(0x6a1078);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a107b:{NFSU2_TR(0x6a107b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a107e:{NFSU2_TR(0x6a107e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1081:{NFSU2_TR(0x6a1081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a1084:{NFSU2_TR(0x6a1084);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a1085:{NFSU2_TR(0x6a1085);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1088:{NFSU2_TR(0x6a1088);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1075u);}goto L6a1075;}}
}
B6a108a:L6a108a:{c.instructions+=1;NFSU2_TR(0x6a108a);
{goto L6a10a8;}
}
B6a108c:L6a108c:{c.instructions+=3;NFSU2_TR(0x6a108c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a108e:{NFSU2_TR(0x6a108e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1091:{NFSU2_TR(0x6a1091);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a10a8;}}
}
B6a1093:L6a1093:{c.instructions+=8;NFSU2_TR(0x6a1093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1096:{NFSU2_TR(0x6a1096);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1099:{NFSU2_TR(0x6a1099);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a109c:{NFSU2_TR(0x6a109c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a109f:{NFSU2_TR(0x6a109f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a10a2:{NFSU2_TR(0x6a10a2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a10a3:{NFSU2_TR(0x6a10a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a10a6:{NFSU2_TR(0x6a10a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1093u);}goto L6a1093;}}
}
B6a10a8:L6a10a8:{c.instructions+=4;NFSU2_TR(0x6a10a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a10ab:{NFSU2_TR(0x6a10ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a10ae:{NFSU2_TR(0x6a10ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a10b1:{NFSU2_TR(0x6a10b1);
if(r1(R+512)){TAIL_STATIC(0x6a0ed9u,6a0);}
}
B6a10b7:L6a10b7:{c.instructions+=3;NFSU2_TR(0x6a10b7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a10b9:{NFSU2_TR(0x6a10b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a10bc:{NFSU2_TR(0x6a10bc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a10dc;}}
}
B6a10be:L6a10be:{c.instructions+=7;NFSU2_TR(0x6a10be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a10c1:{NFSU2_TR(0x6a10c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a10c4:{NFSU2_TR(0x6a10c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a10c7:{NFSU2_TR(0x6a10c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a10ca:{NFSU2_TR(0x6a10ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a10cd:{NFSU2_TR(0x6a10cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a10d1:{NFSU2_TR(0x6a10d1);
if(r1(R+518)){{goto L6a10d6;}}
}
B6a10d3:L6a10d3:{c.instructions+=1;NFSU2_TR(0x6a10d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a10d6:L6a10d6:{c.instructions+=3;NFSU2_TR(0x6a10d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a10d7:{NFSU2_TR(0x6a10d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a10da:{NFSU2_TR(0x6a10da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a10beu);}goto L6a10be;}}
}
B6a10dc:L6a10dc:{c.instructions+=6;NFSU2_TR(0x6a10dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a10dd:{NFSU2_TR(0x6a10dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a10de:{NFSU2_TR(0x6a10de);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a10e0:{NFSU2_TR(0x6a10e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a10e1:{NFSU2_TR(0x6a10e1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a10e2:{NFSU2_TR(0x6a10e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a10e3:L6a10e3:{c.instructions+=11;NFSU2_TR(0x6a10e3);
__builtin_memmove((R+28),(R+28),4);
}
B6a10e5:{NFSU2_TR(0x6a10e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a10e6:{NFSU2_TR(0x6a10e6);
__builtin_memmove((R+20),(R+16),4);
}
B6a10e8:{NFSU2_TR(0x6a10e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a10e9:{NFSU2_TR(0x6a10e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a10ec:{NFSU2_TR(0x6a10ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a10ed:{NFSU2_TR(0x6a10ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a10ee:{NFSU2_TR(0x6a10ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a10f1:{NFSU2_TR(0x6a10f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a10f5:{NFSU2_TR(0x6a10f5);
__builtin_memmove((R+24),(R+4),4);
}
B6a10f7:{NFSU2_TR(0x6a10f7);
if(r1(R+518)){{goto L6a1148;}}
}
B6a10f9:L6a10f9:{c.instructions+=3;NFSU2_TR(0x6a10f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a10fc:{NFSU2_TR(0x6a10fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a10ff:{NFSU2_TR(0x6a10ff);
if(r1(R+518)){{goto L6a1148;}}
}
B6a1101:L6a1101:{c.instructions+=6;NFSU2_TR(0x6a1101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1104:{NFSU2_TR(0x6a1104);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1107:{NFSU2_TR(0x6a1107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a110a:{NFSU2_TR(0x6a110a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a110e:{NFSU2_TR(0x6a110e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1111:{NFSU2_TR(0x6a1111);
if(r1(R+518)){{goto L6a1121;}}
}
B6a1113:L6a1113:{c.instructions+=3;NFSU2_TR(0x6a1113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1116:{NFSU2_TR(0x6a1116);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a1119:{NFSU2_TR(0x6a1119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a111eull));
TAIL_STATIC(0x69902du,699);
}
B6a111e:L6a111e:{c.instructions+=1;NFSU2_TR(0x6a111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1121:L6a1121:{c.instructions+=4;NFSU2_TR(0x6a1121);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1124:{NFSU2_TR(0x6a1124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1127:{NFSU2_TR(0x6a1127);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a112a:{NFSU2_TR(0x6a112a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a112full));
TAIL_STATIC(0x69926eu,699);
}
B6a112f:L6a112f:{c.instructions+=2;NFSU2_TR(0x6a112f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1131:{NFSU2_TR(0x6a1131);
if(r1(R+518)){{goto L6a1148;}}
}
B6a1133:L6a1133:{c.instructions+=2;NFSU2_TR(0x6a1133);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1137:{NFSU2_TR(0x6a1137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1148;}}
}
B6a1139:L6a1139:{c.instructions+=4;NFSU2_TR(0x6a1139);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a113d:{NFSU2_TR(0x6a113d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1144:{NFSU2_TR(0x6a1144);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1146:{NFSU2_TR(0x6a1146);
{goto L6a115d;}
}
B6a1148:L6a1148:{c.instructions+=8;NFSU2_TR(0x6a1148);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a114b:{NFSU2_TR(0x6a114b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a114e:{NFSU2_TR(0x6a114e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a1151:{NFSU2_TR(0x6a1151);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B6a1154:{NFSU2_TR(0x6a1154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1155:{NFSU2_TR(0x6a1155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1156:{NFSU2_TR(0x6a1156);
__builtin_memmove((R+4),(R+24),4);
}
B6a1158:{NFSU2_TR(0x6a1158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a115dull));
TAIL_STATIC(0x69ab91u,69a);
}
B6a115d:L6a115d:{c.instructions+=5;NFSU2_TR(0x6a115d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a115e:{NFSU2_TR(0x6a115e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a115f:{NFSU2_TR(0x6a115f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a1160:{NFSU2_TR(0x6a1160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6a1161:{NFSU2_TR(0x6a1161);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a1164:L6a1164:{c.instructions+=14;NFSU2_TR(0x6a1164);
__builtin_memmove((R+28),(R+28),4);
}
B6a1166:{NFSU2_TR(0x6a1166);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1167:{NFSU2_TR(0x6a1167);
__builtin_memmove((R+20),(R+16),4);
}
B6a1169:{NFSU2_TR(0x6a1169);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a116c:{NFSU2_TR(0x6a116c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a116f:{NFSU2_TR(0x6a116f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1170:{NFSU2_TR(0x6a1170);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a1173:{NFSU2_TR(0x6a1173);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1174:{NFSU2_TR(0x6a1174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1177:{NFSU2_TR(0x6a1177);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a117a:{NFSU2_TR(0x6a117a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a117b:{NFSU2_TR(0x6a117b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a117c:{NFSU2_TR(0x6a117c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a117f:{NFSU2_TR(0x6a117f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a1184ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a10e3u);}goto L6a10e3;}
}
B6a1184:L6a1184:{c.instructions+=2;NFSU2_TR(0x6a1184);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1186:{NFSU2_TR(0x6a1186);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a11bf;}}
}
B6a1188:L6a1188:{c.instructions+=12;NFSU2_TR(0x6a1188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a118a:{NFSU2_TR(0x6a118a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a118c:{NFSU2_TR(0x6a118c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a118d:{NFSU2_TR(0x6a118d);
w4(R+12,u32(0xe000000ull));
}
B6a1192:{NFSU2_TR(0x6a1192);
__builtin_memmove((R+8),(R+4),4);
}
B6a1194:{NFSU2_TR(0x6a1194);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B6a1196:{NFSU2_TR(0x6a1196);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6a1198:{NFSU2_TR(0x6a1198);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf1ffffffull))));
}
B6a119e:{NFSU2_TR(0x6a119e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a11a0:{NFSU2_TR(0x6a11a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a11a2:{NFSU2_TR(0x6a11a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a11a3:{NFSU2_TR(0x6a11a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a11a7;}}
}
B6a11a5:L6a11a5:{c.instructions+=1;NFSU2_TR(0x6a11a5);
__builtin_memmove((R+0),(R+8),4);
}
B6a11a7:L6a11a7:{c.instructions+=4;NFSU2_TR(0x6a11a7);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6a11a9:{NFSU2_TR(0x6a11a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a11ad:{NFSU2_TR(0x6a11ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a11af:{NFSU2_TR(0x6a11af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a11bd;}}
}
B6a11b1:L6a11b1:{c.instructions+=4;NFSU2_TR(0x6a11b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a11b4:{NFSU2_TR(0x6a11b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a11b7:{NFSU2_TR(0x6a11b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a11ba:{NFSU2_TR(0x6a11ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a11bd:L6a11bd:{c.instructions+=1;NFSU2_TR(0x6a11bd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a11bf:L6a11bf:{c.instructions+=4;NFSU2_TR(0x6a11bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a11c0:{NFSU2_TR(0x6a11c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a11c1:{NFSU2_TR(0x6a11c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6a11c2:{NFSU2_TR(0x6a11c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a11c5:L6a11c5:{c.instructions+=24;NFSU2_TR(0x6a11c5);
__builtin_memmove((R+28),(R+28),4);
}
B6a11c7:{NFSU2_TR(0x6a11c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a11c8:{NFSU2_TR(0x6a11c8);
__builtin_memmove((R+20),(R+16),4);
}
B6a11ca:{NFSU2_TR(0x6a11ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6a11cd:{NFSU2_TR(0x6a11cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a11d0:{NFSU2_TR(0x6a11d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a11d1:{NFSU2_TR(0x6a11d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a11d2:{NFSU2_TR(0x6a11d2);
__builtin_memmove((R+24),(R+4),4);
}
B6a11d4:{NFSU2_TR(0x6a11d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a11d7:{NFSU2_TR(0x6a11d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a11da:{NFSU2_TR(0x6a11da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a11dd:{NFSU2_TR(0x6a11dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a11e0:{NFSU2_TR(0x6a11e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a11e3:{NFSU2_TR(0x6a11e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a11e4:{NFSU2_TR(0x6a11e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a11e7:{NFSU2_TR(0x6a11e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a11ea:{NFSU2_TR(0x6a11ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a11ed:{NFSU2_TR(0x6a11ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a11f0:{NFSU2_TR(0x6a11f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a11f3:{NFSU2_TR(0x6a11f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a11f6:{NFSU2_TR(0x6a11f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a11f8:{NFSU2_TR(0x6a11f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a11fb:{NFSU2_TR(0x6a11fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a11fe:{NFSU2_TR(0x6a11fe);
if(r1(R+518)){{goto L6a18ed;}}
}
B6a1204:L6a1204:{c.instructions+=2;NFSU2_TR(0x6a1204);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1207:{NFSU2_TR(0x6a1207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a120d:L6a120d:{c.instructions+=14;NFSU2_TR(0x6a120d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a120f:{NFSU2_TR(0x6a120f);
__builtin_memmove((R+4),(R+0),4);
}
B6a1211:{NFSU2_TR(0x6a1211);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6a1214:{NFSU2_TR(0x6a1214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1217:{NFSU2_TR(0x6a1217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a1219:{NFSU2_TR(0x6a1219);
__builtin_memmove((R+8),(R+4),4);
}
B6a121b:{NFSU2_TR(0x6a121b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x40ull))));
}
B6a121e:{NFSU2_TR(0x6a121e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1221:{NFSU2_TR(0x6a1221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1224:{NFSU2_TR(0x6a1224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a1226:{NFSU2_TR(0x6a1226);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6a122c:{NFSU2_TR(0x6a122c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1232:{NFSU2_TR(0x6a1232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1235:{NFSU2_TR(0x6a1235);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1244;}}
}
B6a1237:L6a1237:{c.instructions+=4;NFSU2_TR(0x6a1237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+4))));
}
B6a123a:{NFSU2_TR(0x6a123a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a123d:{NFSU2_TR(0x6a123d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a123f:{NFSU2_TR(0x6a123f);
{goto L6a18ea;}
}
B6a1244:L6a1244:{c.instructions+=5;NFSU2_TR(0x6a1244);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
}
B6a1247:{NFSU2_TR(0x6a1247);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6a1249:{NFSU2_TR(0x6a1249);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xe000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a124e:{NFSU2_TR(0x6a124e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a1250:{NFSU2_TR(0x6a1250);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1286;}}
}
B6a1252:L6a1252:{c.instructions+=2;NFSU2_TR(0x6a1252);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1258:{NFSU2_TR(0x6a1258);
if(r1(R+518)){{goto L6a127a;}}
}
B6a125a:L6a125a:{c.instructions+=2;NFSU2_TR(0x6a125a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1260:{NFSU2_TR(0x6a1260);
if(r1(R+518)){{goto L6a127a;}}
}
B6a1262:L6a1262:{c.instructions+=2;NFSU2_TR(0x6a1262);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1268:{NFSU2_TR(0x6a1268);
if(r1(R+518)){{goto L6a127a;}}
}
B6a126a:L6a126a:{c.instructions+=2;NFSU2_TR(0x6a126a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1270:{NFSU2_TR(0x6a1270);
if(r1(R+518)){{goto L6a127a;}}
}
B6a1272:L6a1272:{c.instructions+=2;NFSU2_TR(0x6a1272);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1278:{NFSU2_TR(0x6a1278);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1286;}}
}
B6a127a:L6a127a:{c.instructions+=4;NFSU2_TR(0x6a127a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a127c:{NFSU2_TR(0x6a127c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe000000ull))));
}
B6a1282:{NFSU2_TR(0x6a1282);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6a1284:{NFSU2_TR(0x6a1284);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a1286:L6a1286:{c.instructions+=4;NFSU2_TR(0x6a1286);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a128c:{NFSU2_TR(0x6a128c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a128e:{NFSU2_TR(0x6a128e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a128f:{NFSU2_TR(0x6a128f);
if(r1(R+518)){{goto L6a12cb;}}
}
B6a1291:L6a1291:{c.instructions+=2;NFSU2_TR(0x6a1291);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1297:{NFSU2_TR(0x6a1297);
if(r1(R+518)){{goto L6a12b3;}}
}
B6a1299:L6a1299:{c.instructions+=2;NFSU2_TR(0x6a1299);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a129f:{NFSU2_TR(0x6a129f);
if(r1(R+518)){{goto L6a12bf;}}
}
B6a12a1:L6a12a1:{c.instructions+=2;NFSU2_TR(0x6a12a1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a12a7:{NFSU2_TR(0x6a12a7);
if(r1(R+518)){{goto L6a12bf;}}
}
B6a12a9:L6a12a9:{c.instructions+=2;NFSU2_TR(0x6a12a9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a12af:{NFSU2_TR(0x6a12af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a12e6;}}
}
B6a12b1:L6a12b1:{c.instructions+=1;NFSU2_TR(0x6a12b1);
{goto L6a12bf;}
}
B6a12b3:L6a12b3:{c.instructions+=2;NFSU2_TR(0x6a12b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a12b7:{NFSU2_TR(0x6a12b7);
if(r1(R+518)){{goto L6a12c3;}}
}
B6a12b9:L6a12b9:{c.instructions+=2;NFSU2_TR(0x6a12b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a12bd:{NFSU2_TR(0x6a12bd);
if(r1(R+518)){{goto L6a12c3;}}
}
B6a12bf:L6a12bf:{c.instructions+=2;NFSU2_TR(0x6a12bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B6a12c1:{NFSU2_TR(0x6a12c1);
{goto L6a12e6;}
}
B6a12c3:L6a12c3:{c.instructions+=3;NFSU2_TR(0x6a12c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a12c6:{NFSU2_TR(0x6a12c6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xcull))));
}
B6a12c9:{NFSU2_TR(0x6a12c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a12bfu);}goto L6a12bf;}
}
B6a12cb:L6a12cb:{c.instructions+=11;NFSU2_TR(0x6a12cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a12ce:{NFSU2_TR(0x6a12ce);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B6a12d0:{NFSU2_TR(0x6a12d0);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6a12d2:{NFSU2_TR(0x6a12d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a12d5:{NFSU2_TR(0x6a12d5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B6a12d8:{NFSU2_TR(0x6a12d8);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6a12da:{NFSU2_TR(0x6a12da);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6a12dc:{NFSU2_TR(0x6a12dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a12df:{NFSU2_TR(0x6a12df);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff3ull))));
}
B6a12e2:{NFSU2_TR(0x6a12e2);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6a12e4:{NFSU2_TR(0x6a12e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+12)),r4(U+0));
}
B6a12e6:L6a12e6:{c.instructions+=6;NFSU2_TR(0x6a12e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a12e9:{NFSU2_TR(0x6a12e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a12ec:{NFSU2_TR(0x6a12ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a12ef:{NFSU2_TR(0x6a12ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a12f2:{NFSU2_TR(0x6a12f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a12f5:{NFSU2_TR(0x6a12f5);
if(r1(R+518)){{goto L6a153d;}}
}
B6a12fb:L6a12fb:{c.instructions+=2;NFSU2_TR(0x6a12fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a12ff:{NFSU2_TR(0x6a12ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a153d;}}
}
B6a1305:L6a1305:{c.instructions+=4;NFSU2_TR(0x6a1305);
w4(R+0,u32(0x10800000ull));
}
B6a130a:{NFSU2_TR(0x6a130a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a130c:{NFSU2_TR(0x6a130c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a130e:{NFSU2_TR(0x6a130e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a145a;}}
}
B6a1314:L6a1314:{c.instructions+=1;NFSU2_TR(0x6a1314);
if(r1(R+518)){{goto L6a1450;}}
}
B6a131a:L6a131a:{c.instructions+=2;NFSU2_TR(0x6a131a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1320:{NFSU2_TR(0x6a1320);
if(r1(R+518)){{goto L6a1446;}}
}
B6a1326:L6a1326:{c.instructions+=2;NFSU2_TR(0x6a1326);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a132c:{NFSU2_TR(0x6a132c);
if(r1(R+518)){{goto L6a1421;}}
}
B6a1332:L6a1332:{c.instructions+=2;NFSU2_TR(0x6a1332);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1338:{NFSU2_TR(0x6a1338);
if(r1(R+518)){{goto L6a13f3;}}
}
B6a133e:L6a133e:{c.instructions+=2;NFSU2_TR(0x6a133e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1344:{NFSU2_TR(0x6a1344);
if(r1(R+518)){{goto L6a13e0;}}
}
B6a134a:L6a134a:{c.instructions+=2;NFSU2_TR(0x6a134a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1350:{NFSU2_TR(0x6a1350);
if(r1(R+518)){{goto L6a138e;}}
}
B6a1352:L6a1352:{c.instructions+=2;NFSU2_TR(0x6a1352);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1358:{NFSU2_TR(0x6a1358);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a135e:L6a135e:{c.instructions+=2;NFSU2_TR(0x6a135e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1361:{NFSU2_TR(0x6a1361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a137e;}}
}
B6a1363:L6a1363:{c.instructions+=5;NFSU2_TR(0x6a1363);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a1365:{NFSU2_TR(0x6a1365);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a1368:{NFSU2_TR(0x6a1368);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a136a:{NFSU2_TR(0x6a136a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a136d:{NFSU2_TR(0x6a136d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a137e;}}
}
B6a136f:L6a136f:{c.instructions+=3;NFSU2_TR(0x6a136f);
u8 U[4];
w4(U+0,u32(0x7b40ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1374:{NFSU2_TR(0x6a1374);
u8 U[4];
w4(U+0,u32(0xfa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1379:{NFSU2_TR(0x6a1379);
{goto L6a1511;}
}
B6a137e:L6a137e:{c.instructions+=4;NFSU2_TR(0x6a137e);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1381:{NFSU2_TR(0x6a1381);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6a1383:{NFSU2_TR(0x6a1383);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B6a1389:{NFSU2_TR(0x6a1389);
{goto L6a1533;}
}
B6a138e:L6a138e:{c.instructions+=2;NFSU2_TR(0x6a138e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1391:{NFSU2_TR(0x6a1391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a13a9;}}
}
B6a1393:L6a1393:{c.instructions+=6;NFSU2_TR(0x6a1393);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1399:{NFSU2_TR(0x6a1399);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a139c:{NFSU2_TR(0x6a139c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a139e:{NFSU2_TR(0x6a139e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a13a0:{NFSU2_TR(0x6a13a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a13a3:{NFSU2_TR(0x6a13a3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a13a9:L6a13a9:{c.instructions+=5;NFSU2_TR(0x6a13a9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a13ab:{NFSU2_TR(0x6a13ab);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a13ae:{NFSU2_TR(0x6a13ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a13b0:{NFSU2_TR(0x6a13b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a13b3:{NFSU2_TR(0x6a13b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a13c4;}}
}
B6a13b5:L6a13b5:{c.instructions+=3;NFSU2_TR(0x6a13b5);
u8 U[4];
w4(U+0,u32(0x7bae28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a13ba:{NFSU2_TR(0x6a13ba);
u8 U[4];
w4(U+0,u32(0xfa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a13bf:{NFSU2_TR(0x6a13bf);
{goto L6a1511;}
}
B6a13c4:L6a13c4:{c.instructions+=10;NFSU2_TR(0x6a13c4);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a13c7:{NFSU2_TR(0x6a13c7);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B6a13c9:{NFSU2_TR(0x6a13c9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6a13cb:{NFSU2_TR(0x6a13cb);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B6a13cd:{NFSU2_TR(0x6a13cd);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a13d3:{NFSU2_TR(0x6a13d3);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B6a13d5:{NFSU2_TR(0x6a13d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6a13d7:{NFSU2_TR(0x6a13d7);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B6a13d9:{NFSU2_TR(0x6a13d9);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6a13db:{NFSU2_TR(0x6a13db);
{goto L6a1533;}
}
B6a13e0:L6a13e0:{c.instructions+=3;NFSU2_TR(0x6a13e0);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a13e6:{NFSU2_TR(0x6a13e6);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a13e9:{NFSU2_TR(0x6a13e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a13eeull));
TAIL_STATIC(0x75c9b0u,75c);
}
B6a13ee:L6a13ee:{c.instructions+=1;NFSU2_TR(0x6a13ee);
{goto L6a1533;}
}
B6a13f3:L6a13f3:{c.instructions+=5;NFSU2_TR(0x6a13f3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a13f6:{NFSU2_TR(0x6a13f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a13f7:{NFSU2_TR(0x6a13f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a13f8:{NFSU2_TR(0x6a13f8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a13fb:{NFSU2_TR(0x6a13fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a1400ull));
TAIL_STATIC(0x75dc4bu,75d);
}
B6a1400:L6a1400:{c.instructions+=4;NFSU2_TR(0x6a1400);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1402:{NFSU2_TR(0x6a1402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a1403:{NFSU2_TR(0x6a1403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a1404:{NFSU2_TR(0x6a1404);
if(r1(R+518)){{goto L6a1520;}}
}
B6a140a:L6a140a:{c.instructions+=5;NFSU2_TR(0x6a140a);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a140d:{NFSU2_TR(0x6a140d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a140e:{NFSU2_TR(0x6a140e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a140f:{NFSU2_TR(0x6a140f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a1412:{NFSU2_TR(0x6a1412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a1417ull));
TAIL_STATIC(0x75eb50u,75e);
}
B6a1417:L6a1417:{c.instructions+=4;NFSU2_TR(0x6a1417);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B6a141a:{NFSU2_TR(0x6a141a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a141b:{NFSU2_TR(0x6a141b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a141c:{NFSU2_TR(0x6a141c);
{goto L6a1533;}
}
B6a1421:L6a1421:{c.instructions+=2;NFSU2_TR(0x6a1421);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1424:{NFSU2_TR(0x6a1424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a143c;}}
}
B6a1426:L6a1426:{c.instructions+=6;NFSU2_TR(0x6a1426);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1429:{NFSU2_TR(0x6a1429);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a142f:{NFSU2_TR(0x6a142f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1431:{NFSU2_TR(0x6a1431);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1433:{NFSU2_TR(0x6a1433);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1436:{NFSU2_TR(0x6a1436);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a1520;}}
}
B6a143c:L6a143c:{c.instructions+=3;NFSU2_TR(0x6a143c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a143e:{NFSU2_TR(0x6a143e);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B6a1441:{NFSU2_TR(0x6a1441);
{goto L6a1533;}
}
B6a1446:L6a1446:{c.instructions+=3;NFSU2_TR(0x6a1446);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1449:{NFSU2_TR(0x6a1449);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6a144b:{NFSU2_TR(0x6a144b);
{goto L6a1533;}
}
B6a1450:L6a1450:{c.instructions+=3;NFSU2_TR(0x6a1450);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1453:{NFSU2_TR(0x6a1453);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B6a1455:{NFSU2_TR(0x6a1455);
{goto L6a1533;}
}
B6a145a:L6a145a:{c.instructions+=2;NFSU2_TR(0x6a145a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1460:{NFSU2_TR(0x6a1460);
if(r1(R+518)){{goto L6a152e;}}
}
B6a1466:L6a1466:{c.instructions+=2;NFSU2_TR(0x6a1466);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a146c:{NFSU2_TR(0x6a146c);
if(r1(R+518)){{goto L6a14e2;}}
}
B6a146e:L6a146e:{c.instructions+=2;NFSU2_TR(0x6a146e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1474:{NFSU2_TR(0x6a1474);
if(r1(R+518)){{goto L6a14a7;}}
}
B6a1476:L6a1476:{c.instructions+=2;NFSU2_TR(0x6a1476);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a147c:{NFSU2_TR(0x6a147c);
if(r1(R+518)){{goto L6a149b;}}
}
B6a147e:L6a147e:{c.instructions+=2;NFSU2_TR(0x6a147e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1484:{NFSU2_TR(0x6a1484);
if(r1(R+518)){{goto L6a1520;}}
}
B6a148a:L6a148a:{c.instructions+=2;NFSU2_TR(0x6a148a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1490:{NFSU2_TR(0x6a1490);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a1496:L6a1496:{c.instructions+=1;NFSU2_TR(0x6a1496);
{goto L6a1520;}
}
B6a149b:L6a149b:{c.instructions+=4;NFSU2_TR(0x6a149b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a149e:{NFSU2_TR(0x6a149e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a14a0:{NFSU2_TR(0x6a14a0);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B6a14a2:{NFSU2_TR(0x6a14a2);
{goto L6a1533;}
}
B6a14a7:L6a14a7:{c.instructions+=2;NFSU2_TR(0x6a14a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a14aa:{NFSU2_TR(0x6a14aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a14d8;}}
}
B6a14ac:L6a14ac:{c.instructions+=5;NFSU2_TR(0x6a14ac);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a14af:{NFSU2_TR(0x6a14af);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a14b5:{NFSU2_TR(0x6a14b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a14b7:{NFSU2_TR(0x6a14b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a14ba:{NFSU2_TR(0x6a14ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a14cc;}}
}
B6a14bc:L6a14bc:{c.instructions+=5;NFSU2_TR(0x6a14bc);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a14bf:{NFSU2_TR(0x6a14bf);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a14c5:{NFSU2_TR(0x6a14c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a14c7:{NFSU2_TR(0x6a14c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a14ca:{NFSU2_TR(0x6a14ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a14d8;}}
}
B6a14cc:L6a14cc:{c.instructions+=3;NFSU2_TR(0x6a14cc);
u8 U[4];
w4(U+0,u32(0x7bae10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a14d1:{NFSU2_TR(0x6a14d1);
u8 U[4];
w4(U+0,u32(0xfa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a14d6:{NFSU2_TR(0x6a14d6);
{goto L6a1511;}
}
B6a14d8:L6a14d8:{c.instructions+=2;NFSU2_TR(0x6a14d8);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a14db:{NFSU2_TR(0x6a14db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a14e0ull));
TAIL_STATIC(0x75db80u,75d);
}
B6a14e0:L6a14e0:{c.instructions+=1;NFSU2_TR(0x6a14e0);
{goto L6a1533;}
}
B6a14e2:L6a14e2:{c.instructions+=2;NFSU2_TR(0x6a14e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a14e5:{NFSU2_TR(0x6a14e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1524;}}
}
B6a14e7:L6a14e7:{c.instructions+=5;NFSU2_TR(0x6a14e7);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a14ea:{NFSU2_TR(0x6a14ea);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a14f0:{NFSU2_TR(0x6a14f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a14f2:{NFSU2_TR(0x6a14f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a14f5:{NFSU2_TR(0x6a14f5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a1507;}}
}
B6a14f7:L6a14f7:{c.instructions+=5;NFSU2_TR(0x6a14f7);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a14fa:{NFSU2_TR(0x6a14fa);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a1500:{NFSU2_TR(0x6a1500);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1502:{NFSU2_TR(0x6a1502);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1505:{NFSU2_TR(0x6a1505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1524;}}
}
B6a1507:L6a1507:{c.instructions+=2;NFSU2_TR(0x6a1507);
u8 U[4];
w4(U+0,u32(0x7badfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a150c:{NFSU2_TR(0x6a150c);
u8 U[4];
w4(U+0,u32(0xfa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1511:L6a1511:{c.instructions+=4;NFSU2_TR(0x6a1511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1514:{NFSU2_TR(0x6a1514);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a1517:{NFSU2_TR(0x6a1517);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1518:{NFSU2_TR(0x6a1518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a151dull));
TAIL_STATIC(0x69e936u,69e);
}
B6a151d:L6a151d:{c.instructions+=1;NFSU2_TR(0x6a151d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6a1520:L6a1520:{c.instructions+=2;NFSU2_TR(0x6a1520);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a1522:{NFSU2_TR(0x6a1522);
{goto L6a1533;}
}
B6a1524:L6a1524:{c.instructions+=2;NFSU2_TR(0x6a1524);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1527:{NFSU2_TR(0x6a1527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a152cull));
TAIL_STATIC(0x75eea0u,75e);
}
B6a152c:L6a152c:{c.instructions+=1;NFSU2_TR(0x6a152c);
{goto L6a1533;}
}
B6a152e:L6a152e:{c.instructions+=2;NFSU2_TR(0x6a152e);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1531:{NFSU2_TR(0x6a1531);
__asm__ volatile(".byte 0xd9,0xff":::"memory");
}
B6a1533:L6a1533:{c.instructions+=4;NFSU2_TR(0x6a1533);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1534:{NFSU2_TR(0x6a1534);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1535:{NFSU2_TR(0x6a1535);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a1538:{NFSU2_TR(0x6a1538);
{goto L6a18dc;}
}
B6a153d:L6a153d:{c.instructions+=3;NFSU2_TR(0x6a153d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6a1540:{NFSU2_TR(0x6a1540);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1542:{NFSU2_TR(0x6a1542);
if(r1(R+518)){{goto L6a1550;}}
}
B6a1544:L6a1544:{c.instructions+=2;NFSU2_TR(0x6a1544);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a154a:{NFSU2_TR(0x6a154a);
if(r1(R+518)){{goto L6a18d5;}}
}
B6a1550:L6a1550:{c.instructions+=2;NFSU2_TR(0x6a1550);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1552:{NFSU2_TR(0x6a1552);
if(r1(R+518)){{goto L6a1560;}}
}
B6a1554:L6a1554:{c.instructions+=2;NFSU2_TR(0x6a1554);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a155a:{NFSU2_TR(0x6a155a);
if(r1(R+518)){{goto L6a18d5;}}
}
B6a1560:L6a1560:{c.instructions+=2;NFSU2_TR(0x6a1560);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1562:{NFSU2_TR(0x6a1562);
if(r1(R+518)){{goto L6a15d4;}}
}
B6a1564:L6a1564:{c.instructions+=2;NFSU2_TR(0x6a1564);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a156a:{NFSU2_TR(0x6a156a);
if(r1(R+518)){{goto L6a15a4;}}
}
B6a156c:L6a156c:{c.instructions+=2;NFSU2_TR(0x6a156c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1572:{NFSU2_TR(0x6a1572);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a15d4;}}
}
B6a1574:L6a1574:{c.instructions+=3;NFSU2_TR(0x6a1574);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a1576:{NFSU2_TR(0x6a1576);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1579:{NFSU2_TR(0x6a1579);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a157f:L6a157f:{c.instructions+=6;NFSU2_TR(0x6a157f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1582:{NFSU2_TR(0x6a1582);
u8 U[4];
w4(U+0,u32(0x7b40ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1587:{NFSU2_TR(0x6a1587);
u8 U[4];
w4(U+0,u32(0xfa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a158c:{NFSU2_TR(0x6a158c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a158f:{NFSU2_TR(0x6a158f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1590:{NFSU2_TR(0x6a1590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a1595ull));
TAIL_STATIC(0x69e936u,69e);
}
B6a1595:L6a1595:{c.instructions+=6;NFSU2_TR(0x6a1595);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a1597:{NFSU2_TR(0x6a1597);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6a159a:{NFSU2_TR(0x6a159a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a159d:{NFSU2_TR(0x6a159d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a159e:{NFSU2_TR(0x6a159e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a159f:{NFSU2_TR(0x6a159f);
{goto L6a18e0;}
}
B6a15a4:L6a15a4:{c.instructions+=2;NFSU2_TR(0x6a15a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a15a8:{NFSU2_TR(0x6a15a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a15ae:L6a15ae:{c.instructions+=2;NFSU2_TR(0x6a15ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a15b0:{NFSU2_TR(0x6a15b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a15b6:L6a15b6:{c.instructions+=6;NFSU2_TR(0x6a15b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a15b9:{NFSU2_TR(0x6a15b9);
u8 U[4];
w4(U+0,u32(0x7bae28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a15be:{NFSU2_TR(0x6a15be);
u8 U[4];
w4(U+0,u32(0xfa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a15c3:{NFSU2_TR(0x6a15c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a15c6:{NFSU2_TR(0x6a15c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a15c7:{NFSU2_TR(0x6a15c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a15ccull));
TAIL_STATIC(0x69e936u,69e);
}
B6a15cc:L6a15cc:{c.instructions+=2;NFSU2_TR(0x6a15cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6a15cf:{NFSU2_TR(0x6a15cf);
{goto L6a18ed;}
}
B6a15d4:L6a15d4:{c.instructions+=2;NFSU2_TR(0x6a15d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a15d7:{NFSU2_TR(0x6a15d7);
if(r1(R+518)){{goto L6a15f1;}}
}
B6a15d9:L6a15d9:{c.instructions+=2;NFSU2_TR(0x6a15d9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a15df:{NFSU2_TR(0x6a15df);
if(r1(R+518)){{goto L6a18d5;}}
}
B6a15e5:L6a15e5:{c.instructions+=2;NFSU2_TR(0x6a15e5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a15eb:{NFSU2_TR(0x6a15eb);
if(r1(R+518)){{goto L6a18d5;}}
}
B6a15f1:L6a15f1:{c.instructions+=2;NFSU2_TR(0x6a15f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a15f5:{NFSU2_TR(0x6a15f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a15fb:L6a15fb:{c.instructions+=2;NFSU2_TR(0x6a15fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a15fe:{NFSU2_TR(0x6a15fe);
if(r1(R+518)){{goto L6a18ed;}}
}
B6a1604:L6a1604:{c.instructions+=3;NFSU2_TR(0x6a1604);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a160a:{NFSU2_TR(0x6a160a);
w4(R+8,u32(0xfff00000ull));
}
B6a160f:{NFSU2_TR(0x6a160f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1626;}}
}
B6a1611:L6a1611:{c.instructions+=7;NFSU2_TR(0x6a1611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1614:{NFSU2_TR(0x6a1614);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1617:{NFSU2_TR(0x6a1617);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a161a:{NFSU2_TR(0x6a161a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a161c:{NFSU2_TR(0x6a161c);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a161e:{NFSU2_TR(0x6a161e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1624:{NFSU2_TR(0x6a1624);
if(r1(R+518)){{goto L6a1680;}}
}
B6a1626:L6a1626:{c.instructions+=2;NFSU2_TR(0x6a1626);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a162d:{NFSU2_TR(0x6a162d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1644;}}
}
B6a162f:L6a162f:{c.instructions+=7;NFSU2_TR(0x6a162f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1632:{NFSU2_TR(0x6a1632);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1635:{NFSU2_TR(0x6a1635);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1638:{NFSU2_TR(0x6a1638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a163a:{NFSU2_TR(0x6a163a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a163c:{NFSU2_TR(0x6a163c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1642:{NFSU2_TR(0x6a1642);
if(r1(R+518)){{goto L6a1680;}}
}
B6a1644:L6a1644:{c.instructions+=2;NFSU2_TR(0x6a1644);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a164b:{NFSU2_TR(0x6a164b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1662;}}
}
B6a164d:L6a164d:{c.instructions+=7;NFSU2_TR(0x6a164d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1650:{NFSU2_TR(0x6a1650);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1653:{NFSU2_TR(0x6a1653);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1656:{NFSU2_TR(0x6a1656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a1658:{NFSU2_TR(0x6a1658);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a165a:{NFSU2_TR(0x6a165a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1660:{NFSU2_TR(0x6a1660);
if(r1(R+518)){{goto L6a1680;}}
}
B6a1662:L6a1662:{c.instructions+=2;NFSU2_TR(0x6a1662);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1669:{NFSU2_TR(0x6a1669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a16cb;}}
}
B6a166b:L6a166b:{c.instructions+=7;NFSU2_TR(0x6a166b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a166e:{NFSU2_TR(0x6a166e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1671:{NFSU2_TR(0x6a1671);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1674:{NFSU2_TR(0x6a1674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a1676:{NFSU2_TR(0x6a1676);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a1678:{NFSU2_TR(0x6a1678);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a167e:{NFSU2_TR(0x6a167e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a16cb;}}
}
B6a1680:L6a1680:{c.instructions+=3;NFSU2_TR(0x6a1680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1684:{NFSU2_TR(0x6a1684);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1688:{NFSU2_TR(0x6a1688);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a16aa;}}
}
B6a168a:L6a168a:{c.instructions+=2;NFSU2_TR(0x6a168a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a168d:{NFSU2_TR(0x6a168d);
{goto L6a1692;}
}
B6a168f:L6a168f:{c.instructions+=1;NFSU2_TR(0x6a168f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1692:L6a1692:{c.instructions+=3;NFSU2_TR(0x6a1692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1695:{NFSU2_TR(0x6a1695);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1697:{NFSU2_TR(0x6a1697);
if(r1(R+518)){{goto L6a16aa;}}
}
B6a1699:L6a1699:{c.instructions+=6;NFSU2_TR(0x6a1699);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a169c:{NFSU2_TR(0x6a169c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a169f:{NFSU2_TR(0x6a169f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a16a2:{NFSU2_TR(0x6a16a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a16a5:{NFSU2_TR(0x6a16a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a16a8:{NFSU2_TR(0x6a16a8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a168fu);}goto L6a168f;}}
}
B6a16aa:L6a16aa:{c.instructions+=3;NFSU2_TR(0x6a16aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a16ad:{NFSU2_TR(0x6a16ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a16b0:{NFSU2_TR(0x6a16b0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a16c6;}}
}
B6a16b2:L6a16b2:{c.instructions+=6;NFSU2_TR(0x6a16b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a16b5:{NFSU2_TR(0x6a16b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a16b8:{NFSU2_TR(0x6a16b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a16bb:{NFSU2_TR(0x6a16bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a16be:{NFSU2_TR(0x6a16be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a16c1:{NFSU2_TR(0x6a16c1);
{goto L6a18ea;}
}
B6a16c6:L6a16c6:{c.instructions+=1;NFSU2_TR(0x6a16c6);
w4(R+8,u32(0xfff00000ull));
}
B6a16cb:L6a16cb:{c.instructions+=2;NFSU2_TR(0x6a16cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a16d2:{NFSU2_TR(0x6a16d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a17cf;}}
}
B6a16d8:L6a16d8:{c.instructions+=7;NFSU2_TR(0x6a16d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a16db:{NFSU2_TR(0x6a16db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a16de:{NFSU2_TR(0x6a16de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a16e1:{NFSU2_TR(0x6a16e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a16e3:{NFSU2_TR(0x6a16e3);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6a16e5:{NFSU2_TR(0x6a16e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a16ea:{NFSU2_TR(0x6a16ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a17cf;}}
}
B6a16f0:L6a16f0:{c.instructions+=4;NFSU2_TR(0x6a16f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a16f3:{NFSU2_TR(0x6a16f3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a16f5:{NFSU2_TR(0x6a16f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a16f7:{NFSU2_TR(0x6a16f7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a170b;}}
}
B6a16f9:L6a16f9:{c.instructions+=1;NFSU2_TR(0x6a16f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a16fc:L6a16fc:{c.instructions+=3;NFSU2_TR(0x6a16fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a16fe:{NFSU2_TR(0x6a16fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1701:{NFSU2_TR(0x6a1701);
if(r1(R+518)){{goto L6a170b;}}
}
B6a1703:L6a1703:{c.instructions+=4;NFSU2_TR(0x6a1703);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a1704:{NFSU2_TR(0x6a1704);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a1707:{NFSU2_TR(0x6a1707);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6a1709:{NFSU2_TR(0x6a1709);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a16fcu);}goto L6a16fc;}}
}
B6a170b:L6a170b:{c.instructions+=17;NFSU2_TR(0x6a170b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a170e:{NFSU2_TR(0x6a170e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1711:{NFSU2_TR(0x6a1711);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1714:{NFSU2_TR(0x6a1714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1718:{NFSU2_TR(0x6a1718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a171b:{NFSU2_TR(0x6a171b);
__builtin_memmove((R+28),(R+0),4);
}
B6a171d:{NFSU2_TR(0x6a171d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a1720:{NFSU2_TR(0x6a1720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1723:{NFSU2_TR(0x6a1723);
__builtin_memmove((R+28),(R+0),4);
}
B6a1725:{NFSU2_TR(0x6a1725);
w4(R+28,u32(0-u32(r4(R+28))));
}
B6a1727:{NFSU2_TR(0x6a1727);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a172a:{NFSU2_TR(0x6a172a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a172d:{NFSU2_TR(0x6a172d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6a172f:{NFSU2_TR(0x6a172f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a1732:{NFSU2_TR(0x6a1732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1735:{NFSU2_TR(0x6a1735);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1738:{NFSU2_TR(0x6a1738);
w4(R+8,u32(0xfff00000ull));
}
B6a173d:L6a173d:{c.instructions+=12;NFSU2_TR(0x6a173d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a173f:{NFSU2_TR(0x6a173f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a1741:{NFSU2_TR(0x6a1741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1744:{NFSU2_TR(0x6a1744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1747:{NFSU2_TR(0x6a1747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a174a:{NFSU2_TR(0x6a174a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a174d:{NFSU2_TR(0x6a174d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1750:{NFSU2_TR(0x6a1750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1753:{NFSU2_TR(0x6a1753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1756:{NFSU2_TR(0x6a1756);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1759:{NFSU2_TR(0x6a1759);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a175d:{NFSU2_TR(0x6a175d);
if(r1(R+518)){{goto L6a17ae;}}
}
B6a175f:L6a175f:{c.instructions+=8;NFSU2_TR(0x6a175f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1762:{NFSU2_TR(0x6a1762);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1765:{NFSU2_TR(0x6a1765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1768:{NFSU2_TR(0x6a1768);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a176b:{NFSU2_TR(0x6a176b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a176d:{NFSU2_TR(0x6a176d);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a176f:{NFSU2_TR(0x6a176f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1775:{NFSU2_TR(0x6a1775);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a17ae;}}
}
B6a1777:L6a1777:{c.instructions+=3;NFSU2_TR(0x6a1777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a177b:{NFSU2_TR(0x6a177b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a177f:{NFSU2_TR(0x6a177f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a1799;}}
}
B6a1781:L6a1781:{c.instructions+=1;NFSU2_TR(0x6a1781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1784:L6a1784:{c.instructions+=3;NFSU2_TR(0x6a1784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a1786:{NFSU2_TR(0x6a1786);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1789:{NFSU2_TR(0x6a1789);
if(r1(R+518)){{goto L6a1799;}}
}
B6a178b:L6a178b:{c.instructions+=5;NFSU2_TR(0x6a178b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a178e:{NFSU2_TR(0x6a178e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a1791:{NFSU2_TR(0x6a1791);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a1794:{NFSU2_TR(0x6a1794);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6a1797:{NFSU2_TR(0x6a1797);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1784u);}goto L6a1784;}}
}
B6a1799:L6a1799:{c.instructions+=5;NFSU2_TR(0x6a1799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a179c:{NFSU2_TR(0x6a179c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a179f:{NFSU2_TR(0x6a179f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a17a2:{NFSU2_TR(0x6a17a2);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a17a5:{NFSU2_TR(0x6a17a5);
if(r1(R+518)){{goto L6a1873;}}
}
B6a17ab:L6a17ab:{c.instructions+=1;NFSU2_TR(0x6a17ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a17ae:L6a17ae:{c.instructions+=8;NFSU2_TR(0x6a17ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a17b1:{NFSU2_TR(0x6a17b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6a17b4:{NFSU2_TR(0x6a17b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a17b7:{NFSU2_TR(0x6a17b7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6a17b9:{NFSU2_TR(0x6a17b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a17bd:{NFSU2_TR(0x6a17bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a17c0:{NFSU2_TR(0x6a17c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a17c3:{NFSU2_TR(0x6a17c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a173du);}goto L6a173d;}}
}
B6a17c9:L6a17c9:{c.instructions+=2;NFSU2_TR(0x6a17c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a17cc:{NFSU2_TR(0x6a17cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a17cf:L6a17cf:{c.instructions+=2;NFSU2_TR(0x6a17cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a17d6:{NFSU2_TR(0x6a17d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a17dc:L6a17dc:{c.instructions+=7;NFSU2_TR(0x6a17dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a17df:{NFSU2_TR(0x6a17df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a17e2:{NFSU2_TR(0x6a17e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a17e5:{NFSU2_TR(0x6a17e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a17e7:{NFSU2_TR(0x6a17e7);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a17e9:{NFSU2_TR(0x6a17e9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a17ef:{NFSU2_TR(0x6a17ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18ed;}}
}
B6a17f5:L6a17f5:{c.instructions+=4;NFSU2_TR(0x6a17f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a17f8:{NFSU2_TR(0x6a17f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a17fc:{NFSU2_TR(0x6a17fc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a17fe:{NFSU2_TR(0x6a17fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a181c;}}
}
B6a1800:L6a1800:{c.instructions+=2;NFSU2_TR(0x6a1800);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1803:{NFSU2_TR(0x6a1803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1806:L6a1806:{c.instructions+=4;NFSU2_TR(0x6a1806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1809:{NFSU2_TR(0x6a1809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a180b:{NFSU2_TR(0x6a180b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a180e:{NFSU2_TR(0x6a180e);
if(r1(R+518)){{goto L6a181c;}}
}
B6a1810:L6a1810:{c.instructions+=4;NFSU2_TR(0x6a1810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1813:{NFSU2_TR(0x6a1813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1817:{NFSU2_TR(0x6a1817);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6a181a:{NFSU2_TR(0x6a181a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1806u);}goto L6a1806;}}
}
B6a181c:L6a181c:{c.instructions+=8;NFSU2_TR(0x6a181c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1820:{NFSU2_TR(0x6a1820);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1823:{NFSU2_TR(0x6a1823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1826:{NFSU2_TR(0x6a1826);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a1829:{NFSU2_TR(0x6a1829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a182c:{NFSU2_TR(0x6a182c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a182f:{NFSU2_TR(0x6a182f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a1832:{NFSU2_TR(0x6a1832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1835:L6a1835:{c.instructions+=8;NFSU2_TR(0x6a1835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a1837:{NFSU2_TR(0x6a1837);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a183a:{NFSU2_TR(0x6a183a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a183d:{NFSU2_TR(0x6a183d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1840:{NFSU2_TR(0x6a1840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1843:{NFSU2_TR(0x6a1843);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1846:{NFSU2_TR(0x6a1846);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a184a:{NFSU2_TR(0x6a184a);
if(r1(R+518)){{goto L6a18bd;}}
}
B6a184c:L6a184c:{c.instructions+=8;NFSU2_TR(0x6a184c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a184f:{NFSU2_TR(0x6a184f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1852:{NFSU2_TR(0x6a1852);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1855:{NFSU2_TR(0x6a1855);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1858:{NFSU2_TR(0x6a1858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a185a:{NFSU2_TR(0x6a185a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6a185c:{NFSU2_TR(0x6a185c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1862:{NFSU2_TR(0x6a1862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18bd;}}
}
B6a1864:L6a1864:{c.instructions+=3;NFSU2_TR(0x6a1864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1868:{NFSU2_TR(0x6a1868);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a186c:{NFSU2_TR(0x6a186c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a18a4;}}
}
B6a186e:L6a186e:{c.instructions+=2;NFSU2_TR(0x6a186e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1871:{NFSU2_TR(0x6a1871);
{goto L6a188a;}
}
B6a1873:L6a1873:{c.instructions+=7;NFSU2_TR(0x6a1873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1876:{NFSU2_TR(0x6a1876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1879:{NFSU2_TR(0x6a1879);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a187c:{NFSU2_TR(0x6a187c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a187f:{NFSU2_TR(0x6a187f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1882:{NFSU2_TR(0x6a1882);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1885:{NFSU2_TR(0x6a1885);
{goto L6a18ed;}
}
B6a1887:L6a1887:{c.instructions+=1;NFSU2_TR(0x6a1887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a188a:L6a188a:{c.instructions+=4;NFSU2_TR(0x6a188a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a188d:{NFSU2_TR(0x6a188d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a188f:{NFSU2_TR(0x6a188f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1891:{NFSU2_TR(0x6a1891);
if(r1(R+518)){{goto L6a18a4;}}
}
B6a1893:L6a1893:{c.instructions+=6;NFSU2_TR(0x6a1893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a1896:{NFSU2_TR(0x6a1896);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a1899:{NFSU2_TR(0x6a1899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a189c:{NFSU2_TR(0x6a189c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a189f:{NFSU2_TR(0x6a189f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a18a2:{NFSU2_TR(0x6a18a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1887u);}goto L6a1887;}}
}
B6a18a4:L6a18a4:{c.instructions+=8;NFSU2_TR(0x6a18a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a18a7:{NFSU2_TR(0x6a18a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a18aa:{NFSU2_TR(0x6a18aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a18ad:{NFSU2_TR(0x6a18ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a18b0:{NFSU2_TR(0x6a18b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a18b3:{NFSU2_TR(0x6a18b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a18b5:{NFSU2_TR(0x6a18b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a18b7:{NFSU2_TR(0x6a18b7);
if(r1(R+518)){{goto L6a18bd;}}
}
B6a18b9:L6a18b9:{c.instructions+=2;NFSU2_TR(0x6a18b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a18bb:{NFSU2_TR(0x6a18bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a18d5;}}
}
B6a18bd:L6a18bd:{c.instructions+=6;NFSU2_TR(0x6a18bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a18c0:{NFSU2_TR(0x6a18c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a18c3:{NFSU2_TR(0x6a18c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a18c6:{NFSU2_TR(0x6a18c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a18ca:{NFSU2_TR(0x6a18ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a18cd:{NFSU2_TR(0x6a18cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1835u);}goto L6a1835;}}
}
B6a18d3:L6a18d3:{c.instructions+=1;NFSU2_TR(0x6a18d3);
{goto L6a18ed;}
}
B6a18d5:L6a18d5:{c.instructions+=4;NFSU2_TR(0x6a18d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a18d6:{NFSU2_TR(0x6a18d6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a18d8:{NFSU2_TR(0x6a18d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a18d9:{NFSU2_TR(0x6a18d9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a18dc:L6a18dc:{c.instructions+=2;NFSU2_TR(0x6a18dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a18de:{NFSU2_TR(0x6a18de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a18e0:L6a18e0:{c.instructions+=3;NFSU2_TR(0x6a18e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a18e3:{NFSU2_TR(0x6a18e3);
__builtin_memmove((R+4),(R+24),4);
}
B6a18e5:{NFSU2_TR(0x6a18e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a18eaull));
TAIL_STATIC(0x699c39u,699);
}
B6a18ea:L6a18ea:{c.instructions+=1;NFSU2_TR(0x6a18ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a18ed:L6a18ed:{c.instructions+=6;NFSU2_TR(0x6a18ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a18ee:{NFSU2_TR(0x6a18ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a18ef:{NFSU2_TR(0x6a18ef);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a18f1:{NFSU2_TR(0x6a18f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a18f2:{NFSU2_TR(0x6a18f2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a18f3:{NFSU2_TR(0x6a18f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a18f6:L6a18f6:{c.instructions+=34;NFSU2_TR(0x6a18f6);
__builtin_memmove((R+28),(R+28),4);
}
B6a18f8:{NFSU2_TR(0x6a18f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a18f9:{NFSU2_TR(0x6a18f9);
__builtin_memmove((R+20),(R+16),4);
}
B6a18fb:{NFSU2_TR(0x6a18fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B6a18fe:{NFSU2_TR(0x6a18fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a18ff:{NFSU2_TR(0x6a18ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1900:{NFSU2_TR(0x6a1900);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1901:{NFSU2_TR(0x6a1901);
__builtin_memmove((R+12),(R+4),4);
}
B6a1903:{NFSU2_TR(0x6a1903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1906:{NFSU2_TR(0x6a1906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1909:{NFSU2_TR(0x6a1909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a190b:{NFSU2_TR(0x6a190b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a190e:{NFSU2_TR(0x6a190e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1911:{NFSU2_TR(0x6a1911);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1914:{NFSU2_TR(0x6a1914);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1917:{NFSU2_TR(0x6a1917);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a191a:{NFSU2_TR(0x6a191a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a191d:{NFSU2_TR(0x6a191d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1920:{NFSU2_TR(0x6a1920);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1923:{NFSU2_TR(0x6a1923);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a1926:{NFSU2_TR(0x6a1926);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a1929:{NFSU2_TR(0x6a1929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a192c:{NFSU2_TR(0x6a192c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a192f:{NFSU2_TR(0x6a192f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1932:{NFSU2_TR(0x6a1932);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a1935:{NFSU2_TR(0x6a1935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1938:{NFSU2_TR(0x6a1938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a193b:{NFSU2_TR(0x6a193b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a193e:{NFSU2_TR(0x6a193e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1941:{NFSU2_TR(0x6a1941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1944:{NFSU2_TR(0x6a1944);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1946:{NFSU2_TR(0x6a1946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1949:{NFSU2_TR(0x6a1949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a194c:{NFSU2_TR(0x6a194c);
if(r1(R+518)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1952:L6a1952:{c.instructions+=2;NFSU2_TR(0x6a1952);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1955:{NFSU2_TR(0x6a1955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a195b:L6a195b:{c.instructions+=15;NFSU2_TR(0x6a195b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a195d:{NFSU2_TR(0x6a195d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a195f:{NFSU2_TR(0x6a195f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1962:{NFSU2_TR(0x6a1962);
__builtin_memmove((R+0),(R+4),4);
}
B6a1964:{NFSU2_TR(0x6a1964);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B6a1967:{NFSU2_TR(0x6a1967);
__builtin_memmove((R+24),(R+8),4);
}
B6a1969:{NFSU2_TR(0x6a1969);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1full))));
}
B6a196c:{NFSU2_TR(0x6a196c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a196f:{NFSU2_TR(0x6a196f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a1971:{NFSU2_TR(0x6a1971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1974:{NFSU2_TR(0x6a1974);
__builtin_memmove((R+24),(R+0),4);
}
B6a1976:{NFSU2_TR(0x6a1976);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x40ull))));
}
B6a1979:{NFSU2_TR(0x6a1979);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xe000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a197e:{NFSU2_TR(0x6a197e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1981:{NFSU2_TR(0x6a1981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a19dd;}}
}
B6a1983:L6a1983:{c.instructions+=4;NFSU2_TR(0x6a1983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a1986:{NFSU2_TR(0x6a1986);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B6a198c:{NFSU2_TR(0x6a198c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1992:{NFSU2_TR(0x6a1992);
if(r1(R+518)){{goto L6a19bc;}}
}
B6a1994:L6a1994:{c.instructions+=2;NFSU2_TR(0x6a1994);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a199a:{NFSU2_TR(0x6a199a);
if(r1(R+518)){{goto L6a19bc;}}
}
B6a199c:L6a199c:{c.instructions+=2;NFSU2_TR(0x6a199c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a19a2:{NFSU2_TR(0x6a19a2);
if(r1(R+518)){{goto L6a19bc;}}
}
B6a19a4:L6a19a4:{c.instructions+=2;NFSU2_TR(0x6a19a4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a19aa:{NFSU2_TR(0x6a19aa);
if(r1(R+518)){{goto L6a19bc;}}
}
B6a19ac:L6a19ac:{c.instructions+=2;NFSU2_TR(0x6a19ac);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a19b2:{NFSU2_TR(0x6a19b2);
if(r1(R+518)){{goto L6a19bc;}}
}
B6a19b4:L6a19b4:{c.instructions+=2;NFSU2_TR(0x6a19b4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a19ba:{NFSU2_TR(0x6a19ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a19dd;}}
}
B6a19bc:L6a19bc:{c.instructions+=4;NFSU2_TR(0x6a19bc);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6a19be:{NFSU2_TR(0x6a19be);
w4(R+4,u32(0x8000000ull));
}
B6a19c3:{NFSU2_TR(0x6a19c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a19c5:{NFSU2_TR(0x6a19c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a19d9;}}
}
B6a19c7:L6a19c7:{c.instructions+=3;NFSU2_TR(0x6a19c7);
w4(R+4,u32(0x4000000ull));
}
B6a19cc:{NFSU2_TR(0x6a19cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a19ce:{NFSU2_TR(0x6a19ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a19d9;}}
}
B6a19d0:L6a19d0:{c.instructions+=3;NFSU2_TR(0x6a19d0);
w4(R+4,u32(0x2000000ull));
}
B6a19d5:{NFSU2_TR(0x6a19d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a19d7:{NFSU2_TR(0x6a19d7);
if(r1(R+518)){{goto L6a19dd;}}
}
B6a19d9:L6a19d9:{c.instructions+=2;NFSU2_TR(0x6a19d9);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6a19db:{NFSU2_TR(0x6a19db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6a19dd:L6a19dd:{c.instructions+=9;NFSU2_TR(0x6a19dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a19e0:{NFSU2_TR(0x6a19e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a19e3:{NFSU2_TR(0x6a19e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a19e5:{NFSU2_TR(0x6a19e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+0))));
}
B6a19e7:{NFSU2_TR(0x6a19e7);
w4(R+4,u32(0x20600000ull));
}
B6a19ec:{NFSU2_TR(0x6a19ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a19ee:{NFSU2_TR(0x6a19ee);
w4(R+8,u32(0x20500000ull));
}
B6a19f3:{NFSU2_TR(0x6a19f3);
w4(R+24,u32(0xfff00000ull));
}
B6a19f8:{NFSU2_TR(0x6a19f8);
if(r1(R+518)){{goto L6a1a38;}}
}
B6a19fa:L6a19fa:{c.instructions+=4;NFSU2_TR(0x6a19fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a19fd:{NFSU2_TR(0x6a19fd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B6a19ff:{NFSU2_TR(0x6a19ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1a01:{NFSU2_TR(0x6a1a01);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a1a20;}}
}
B6a1a03:L6a1a03:{c.instructions+=1;NFSU2_TR(0x6a1a03);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a05:L6a1a05:{c.instructions+=2;NFSU2_TR(0x6a1a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a0a:{NFSU2_TR(0x6a1a0a);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a0c:L6a1a0c:{c.instructions+=2;NFSU2_TR(0x6a1a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a11:{NFSU2_TR(0x6a1a11);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a13:L6a1a13:{c.instructions+=2;NFSU2_TR(0x6a1a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a18:{NFSU2_TR(0x6a1a18);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a1a:L6a1a1a:{c.instructions+=2;NFSU2_TR(0x6a1a1a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1a1c:{NFSU2_TR(0x6a1a1c);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a1e:L6a1a1e:{c.instructions+=1;NFSU2_TR(0x6a1a1e);
{goto L6a1a38;}
}
B6a1a20:L6a1a20:{c.instructions+=2;NFSU2_TR(0x6a1a20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a25:{NFSU2_TR(0x6a1a25);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a27:L6a1a27:{c.instructions+=2;NFSU2_TR(0x6a1a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a2c:{NFSU2_TR(0x6a1a2c);
if(r1(R+518)){{goto L6a1a35;}}
}
B6a1a2e:L6a1a2e:{c.instructions+=2;NFSU2_TR(0x6a1a2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a33:{NFSU2_TR(0x6a1a33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1a38;}}
}
B6a1a35:L6a1a35:{c.instructions+=1;NFSU2_TR(0x6a1a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x40ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1a38:L6a1a38:{c.instructions+=7;NFSU2_TR(0x6a1a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1a3b:{NFSU2_TR(0x6a1a3b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B6a1a3d:{NFSU2_TR(0x6a1a3d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x20400000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a42:{NFSU2_TR(0x6a1a42);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1a44:{NFSU2_TR(0x6a1a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1a47:{NFSU2_TR(0x6a1a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a1a48:{NFSU2_TR(0x6a1a48);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a1aa3;}}
}
B6a1a4a:L6a1a4a:{c.instructions+=1;NFSU2_TR(0x6a1a4a);
if(r1(R+518)){{goto L6a1a98;}}
}
B6a1a4c:L6a1a4c:{c.instructions+=2;NFSU2_TR(0x6a1a4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a51:{NFSU2_TR(0x6a1a51);
if(r1(R+518)){{goto L6a1a85;}}
}
B6a1a53:L6a1a53:{c.instructions+=2;NFSU2_TR(0x6a1a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a58:{NFSU2_TR(0x6a1a58);
if(r1(R+518)){{goto L6a1a74;}}
}
B6a1a5a:L6a1a5a:{c.instructions+=2;NFSU2_TR(0x6a1a5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a5f:{NFSU2_TR(0x6a1a5f);
if(r1(R+518)){{goto L6a1a6c;}}
}
B6a1a61:L6a1a61:{c.instructions+=2;NFSU2_TR(0x6a1a61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1a66:{NFSU2_TR(0x6a1a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1a6c:L6a1a6c:{c.instructions+=2;NFSU2_TR(0x6a1a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x17ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1a6f:{NFSU2_TR(0x6a1a6f);
{goto L6a1bc8;}
}
B6a1a74:L6a1a74:{c.instructions+=7;NFSU2_TR(0x6a1a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1a77:{NFSU2_TR(0x6a1a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1a7a:{NFSU2_TR(0x6a1a7a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6a1a7c:{NFSU2_TR(0x6a1a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B6a1a7f:{NFSU2_TR(0x6a1a7f);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B6a1a81:{NFSU2_TR(0x6a1a81);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6a1a83:{NFSU2_TR(0x6a1a83);
{goto L6a1ac6;}
}
B6a1a85:L6a1a85:{c.instructions+=7;NFSU2_TR(0x6a1a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1a88:{NFSU2_TR(0x6a1a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1a8b:{NFSU2_TR(0x6a1a8b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B6a1a8e:{NFSU2_TR(0x6a1a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B6a1a91:{NFSU2_TR(0x6a1a91);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B6a1a94:{NFSU2_TR(0x6a1a94);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6a1a96:{NFSU2_TR(0x6a1a96);
{goto L6a1ac6;}
}
B6a1a98:L6a1a98:{c.instructions+=4;NFSU2_TR(0x6a1a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1a9b:{NFSU2_TR(0x6a1a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B6a1a9e:{NFSU2_TR(0x6a1a9e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xeull))));
}
B6a1aa1:{NFSU2_TR(0x6a1aa1);
{goto L6a1ac6;}
}
B6a1aa3:L6a1aa3:{c.instructions+=2;NFSU2_TR(0x6a1aa3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1aa5:{NFSU2_TR(0x6a1aa5);
if(r1(R+518)){{goto L6a1acd;}}
}
B6a1aa7:L6a1aa7:{c.instructions+=2;NFSU2_TR(0x6a1aa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1aac:{NFSU2_TR(0x6a1aac);
if(r1(R+518)){{goto L6a1ac0;}}
}
B6a1aae:L6a1aae:{c.instructions+=2;NFSU2_TR(0x6a1aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1ab3:{NFSU2_TR(0x6a1ab3);
if(r1(R+518)){{goto L6a1ac0;}}
}
B6a1ab5:L6a1ab5:{c.instructions+=2;NFSU2_TR(0x6a1ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1aba:{NFSU2_TR(0x6a1aba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1ac0:L6a1ac0:{c.instructions+=2;NFSU2_TR(0x6a1ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1ac3:{NFSU2_TR(0x6a1ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B6a1ac6:L6a1ac6:{c.instructions+=2;NFSU2_TR(0x6a1ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1ac8:{NFSU2_TR(0x6a1ac8);
{goto L6a1bc8;}
}
B6a1acd:L6a1acd:{c.instructions+=9;NFSU2_TR(0x6a1acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1ad0:{NFSU2_TR(0x6a1ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B6a1ad3:{NFSU2_TR(0x6a1ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1ad6:{NFSU2_TR(0x6a1ad6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6a1ad9:{NFSU2_TR(0x6a1ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1adb:{NFSU2_TR(0x6a1adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a1add:{NFSU2_TR(0x6a1add);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6a1adf:{NFSU2_TR(0x6a1adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1ae2:{NFSU2_TR(0x6a1ae2);
if(r1(R+518)){{goto L6a1aea;}}
}
B6a1ae4:L6a1ae4:{c.instructions+=2;NFSU2_TR(0x6a1ae4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1ae8:{NFSU2_TR(0x6a1ae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1af6;}}
}
B6a1aea:L6a1aea:{c.instructions+=2;NFSU2_TR(0x6a1aea);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1aee:{NFSU2_TR(0x6a1aee);
if(r1(R+518)){{goto L6a1afa;}}
}
B6a1af0:L6a1af0:{c.instructions+=2;NFSU2_TR(0x6a1af0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1af4:{NFSU2_TR(0x6a1af4);
if(r1(R+518)){{goto L6a1afa;}}
}
B6a1af6:L6a1af6:{c.instructions+=2;NFSU2_TR(0x6a1af6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6a1af8:{NFSU2_TR(0x6a1af8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6a1afa:L6a1afa:{c.instructions+=2;NFSU2_TR(0x6a1afa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1afe:{NFSU2_TR(0x6a1afe);
if(r1(R+518)){{goto L6a1b06;}}
}
B6a1b00:L6a1b00:{c.instructions+=2;NFSU2_TR(0x6a1b00);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1b04:{NFSU2_TR(0x6a1b04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1b12;}}
}
B6a1b06:L6a1b06:{c.instructions+=2;NFSU2_TR(0x6a1b06);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1b0a:{NFSU2_TR(0x6a1b0a);
if(r1(R+518)){{goto L6a1b15;}}
}
B6a1b0c:L6a1b0c:{c.instructions+=2;NFSU2_TR(0x6a1b0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1b10:{NFSU2_TR(0x6a1b10);
if(r1(R+518)){{goto L6a1b15;}}
}
B6a1b12:L6a1b12:{c.instructions+=1;NFSU2_TR(0x6a1b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x8ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1b15:L6a1b15:{c.instructions+=4;NFSU2_TR(0x6a1b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1b18:{NFSU2_TR(0x6a1b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1b1b:{NFSU2_TR(0x6a1b1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1b1d:{NFSU2_TR(0x6a1b1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1b26;}}
}
B6a1b1f:L6a1b1f:{c.instructions+=2;NFSU2_TR(0x6a1b1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1b21:{NFSU2_TR(0x6a1b21);
{goto L6a1bc8;}
}
B6a1b26:L6a1b26:{c.instructions+=5;NFSU2_TR(0x6a1b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1b29:{NFSU2_TR(0x6a1b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1b2c:{NFSU2_TR(0x6a1b2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a1b2f:{NFSU2_TR(0x6a1b2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1b33:{NFSU2_TR(0x6a1b33);
if(r1(R+518)){{goto L6a1b7a;}}
}
B6a1b35:L6a1b35:{c.instructions+=8;NFSU2_TR(0x6a1b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1b38:{NFSU2_TR(0x6a1b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1b3b:{NFSU2_TR(0x6a1b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1b3e:{NFSU2_TR(0x6a1b3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1b41:{NFSU2_TR(0x6a1b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a1b43:{NFSU2_TR(0x6a1b43);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B6a1b45:{NFSU2_TR(0x6a1b45);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1b4b:{NFSU2_TR(0x6a1b4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1b77;}}
}
B6a1b4d:L6a1b4d:{c.instructions+=3;NFSU2_TR(0x6a1b4d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a1b4f:{NFSU2_TR(0x6a1b4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1b52:{NFSU2_TR(0x6a1b52);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1b54:L6a1b54:{c.instructions+=1;NFSU2_TR(0x6a1b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1b57:L6a1b57:{c.instructions+=3;NFSU2_TR(0x6a1b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a1b5a:{NFSU2_TR(0x6a1b5a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1b5c:{NFSU2_TR(0x6a1b5c);
if(r1(R+518)){{goto L6a1b67;}}
}
B6a1b5e:L6a1b5e:{c.instructions+=4;NFSU2_TR(0x6a1b5e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a1b5f:{NFSU2_TR(0x6a1b5f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a1b62:{NFSU2_TR(0x6a1b62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1b65:{NFSU2_TR(0x6a1b65);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1b57u);}goto L6a1b57;}}
}
B6a1b67:L6a1b67:{c.instructions+=2;NFSU2_TR(0x6a1b67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1b6a:{NFSU2_TR(0x6a1b6a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1b6c:L6a1b6c:{c.instructions+=4;NFSU2_TR(0x6a1b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1b6f:{NFSU2_TR(0x6a1b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1b72:{NFSU2_TR(0x6a1b72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1b75:{NFSU2_TR(0x6a1b75);
{goto L6a1bc3;}
}
B6a1b77:L6a1b77:{c.instructions+=1;NFSU2_TR(0x6a1b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1b7a:L6a1b7a:{c.instructions+=4;NFSU2_TR(0x6a1b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1b7d:{NFSU2_TR(0x6a1b7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a1b80:{NFSU2_TR(0x6a1b80);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1b84:{NFSU2_TR(0x6a1b84);
if(r1(R+518)){{goto L6a1bc8;}}
}
B6a1b86:L6a1b86:{c.instructions+=7;NFSU2_TR(0x6a1b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1b89:{NFSU2_TR(0x6a1b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1b8c:{NFSU2_TR(0x6a1b8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1b8f:{NFSU2_TR(0x6a1b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a1b91:{NFSU2_TR(0x6a1b91);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B6a1b93:{NFSU2_TR(0x6a1b93);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1b99:{NFSU2_TR(0x6a1b99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1b9b:L6a1b9b:{c.instructions+=3;NFSU2_TR(0x6a1b9b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a1b9d:{NFSU2_TR(0x6a1b9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1ba0:{NFSU2_TR(0x6a1ba0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1ba2:L6a1ba2:{c.instructions+=1;NFSU2_TR(0x6a1ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1ba5:L6a1ba5:{c.instructions+=3;NFSU2_TR(0x6a1ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a1ba8:{NFSU2_TR(0x6a1ba8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1baa:{NFSU2_TR(0x6a1baa);
if(r1(R+518)){{goto L6a1bb5;}}
}
B6a1bac:L6a1bac:{c.instructions+=4;NFSU2_TR(0x6a1bac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a1bad:{NFSU2_TR(0x6a1bad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a1bb0:{NFSU2_TR(0x6a1bb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1bb3:{NFSU2_TR(0x6a1bb3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1ba5u);}goto L6a1ba5;}}
}
B6a1bb5:L6a1bb5:{c.instructions+=2;NFSU2_TR(0x6a1bb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a1bb8:{NFSU2_TR(0x6a1bb8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1bba:L6a1bba:{c.instructions+=3;NFSU2_TR(0x6a1bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1bbd:{NFSU2_TR(0x6a1bbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1bc0:{NFSU2_TR(0x6a1bc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1bc3:L6a1bc3:{c.instructions+=1;NFSU2_TR(0x6a1bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1bc8;}}
}
B6a1bc5:L6a1bc5:{c.instructions+=1;NFSU2_TR(0x6a1bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x8ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6a1bc8:L6a1bc8:{c.instructions+=3;NFSU2_TR(0x6a1bc8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a1bca:{NFSU2_TR(0x6a1bca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1bcd:{NFSU2_TR(0x6a1bcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1c44;}}
}
B6a1bcf:L6a1bcf:{c.instructions+=2;NFSU2_TR(0x6a1bcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1bd3:{NFSU2_TR(0x6a1bd3);
if(r1(R+518)){{goto L6a1c26;}}
}
B6a1bd5:L6a1bd5:{c.instructions+=2;NFSU2_TR(0x6a1bd5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1bd9:{NFSU2_TR(0x6a1bd9);
if(r1(R+518)){{goto L6a1c26;}}
}
B6a1bdb:L6a1bdb:{c.instructions+=3;NFSU2_TR(0x6a1bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1bde:{NFSU2_TR(0x6a1bde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1be3:{NFSU2_TR(0x6a1be3);
if(r1(R+518)){{goto L6a1c1e;}}
}
B6a1be5:L6a1be5:{c.instructions+=2;NFSU2_TR(0x6a1be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1bea:{NFSU2_TR(0x6a1bea);
if(r1(R+518)){{goto L6a1c16;}}
}
B6a1bec:L6a1bec:{c.instructions+=2;NFSU2_TR(0x6a1bec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1bf1:{NFSU2_TR(0x6a1bf1);
if(r1(R+518)){{goto L6a1c12;}}
}
B6a1bf3:L6a1bf3:{c.instructions+=2;NFSU2_TR(0x6a1bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1bf8:{NFSU2_TR(0x6a1bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1c26;}}
}
B6a1bfa:L6a1bfa:{c.instructions+=1;NFSU2_TR(0x6a1bfa);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a1bfc:L6a1bfc:{c.instructions+=8;NFSU2_TR(0x6a1bfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1bfd:{NFSU2_TR(0x6a1bfd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1bfe:{NFSU2_TR(0x6a1bfe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a1c01:{NFSU2_TR(0x6a1c01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1c02:{NFSU2_TR(0x6a1c02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1c03:{NFSU2_TR(0x6a1c03);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a1c06:{NFSU2_TR(0x6a1c06);
__builtin_memmove((R+4),(R+12),4);
}
B6a1c08:{NFSU2_TR(0x6a1c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a1c0dull));
TAIL_STATIC(0x699c39u,699);
}
B6a1c0d:L6a1c0d:{c.instructions+=1;NFSU2_TR(0x6a1c0d);
TAIL_STATIC(0x6a235bu,6a2);
}
B6a1c12:L6a1c12:{c.instructions+=2;NFSU2_TR(0x6a1c12);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a1c14:{NFSU2_TR(0x6a1c14);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1bfcu);}goto L6a1bfc;}
}
B6a1c16:L6a1c16:{c.instructions+=2;NFSU2_TR(0x6a1c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1c19:{NFSU2_TR(0x6a1c19);
TAIL_STATIC(0x6a235bu,6a2);
}
B6a1c1e:L6a1c1e:{c.instructions+=2;NFSU2_TR(0x6a1c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1c21:{NFSU2_TR(0x6a1c21);
TAIL_STATIC(0x6a235bu,6a2);
}
B6a1c26:L6a1c26:{c.instructions+=2;NFSU2_TR(0x6a1c26);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1c2a:{NFSU2_TR(0x6a1c2a);
if(r1(R+518)){{goto L6a1c44;}}
}
B6a1c2c:L6a1c2c:{c.instructions+=2;NFSU2_TR(0x6a1c2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1c30:{NFSU2_TR(0x6a1c30);
if(r1(R+518)){{goto L6a1c44;}}
}
B6a1c32:L6a1c32:{c.instructions+=2;NFSU2_TR(0x6a1c32);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1c39:{NFSU2_TR(0x6a1c39);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1c16u);}goto L6a1c16;}}
}
B6a1c3b:L6a1c3b:{c.instructions+=2;NFSU2_TR(0x6a1c3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1c42:{NFSU2_TR(0x6a1c42);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1c1eu);}goto L6a1c1e;}}
}
B6a1c44:L6a1c44:{c.instructions+=10;NFSU2_TR(0x6a1c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1c47:{NFSU2_TR(0x6a1c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a1c4a:{NFSU2_TR(0x6a1c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1c4d:{NFSU2_TR(0x6a1c4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1c50:{NFSU2_TR(0x6a1c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1c53:{NFSU2_TR(0x6a1c53);
w4(R+0,u32(0x100ull));
}
B6a1c58:{NFSU2_TR(0x6a1c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1c5b:{NFSU2_TR(0x6a1c5b);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a1c5d:{NFSU2_TR(0x6a1c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1c60:{NFSU2_TR(0x6a1c60);
if(r1(R+518)){{goto L6a1d33;}}
}
B6a1c66:L6a1c66:{c.instructions+=2;NFSU2_TR(0x6a1c66);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1c6a:{NFSU2_TR(0x6a1c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1d33;}}
}
B6a1c70:L6a1c70:{c.instructions+=5;NFSU2_TR(0x6a1c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1c73:{NFSU2_TR(0x6a1c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1c76:{NFSU2_TR(0x6a1c76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a1c79:{NFSU2_TR(0x6a1c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1c7c:{NFSU2_TR(0x6a1c7c);
if(r1(R+518)){{goto L6a1d33;}}
}
B6a1c82:L6a1c82:{c.instructions+=3;NFSU2_TR(0x6a1c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1c85:{NFSU2_TR(0x6a1c85);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1c89:{NFSU2_TR(0x6a1c89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1d33;}}
}
B6a1c8f:L6a1c8f:{c.instructions+=7;NFSU2_TR(0x6a1c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1c92:{NFSU2_TR(0x6a1c92);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1c95:{NFSU2_TR(0x6a1c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1c98:{NFSU2_TR(0x6a1c98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1c9d:{NFSU2_TR(0x6a1c9d);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1ca0:{NFSU2_TR(0x6a1ca0);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a1ca3:{NFSU2_TR(0x6a1ca3);
if(r1(R+518)){{goto L6a1d1a;}}
}
B6a1ca5:L6a1ca5:{c.instructions+=2;NFSU2_TR(0x6a1ca5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1caa:{NFSU2_TR(0x6a1caa);
if(r1(R+518)){{goto L6a1d0e;}}
}
B6a1cac:L6a1cac:{c.instructions+=2;NFSU2_TR(0x6a1cac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1cb1:{NFSU2_TR(0x6a1cb1);
if(r1(R+518)){{goto L6a1cfb;}}
}
B6a1cb3:L6a1cb3:{c.instructions+=2;NFSU2_TR(0x6a1cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1cb8:{NFSU2_TR(0x6a1cb8);
if(r1(R+518)){{goto L6a1ce8;}}
}
B6a1cba:L6a1cba:{c.instructions+=2;NFSU2_TR(0x6a1cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1cbf:{NFSU2_TR(0x6a1cbf);
if(r1(R+518)){{goto L6a1ce3;}}
}
B6a1cc1:L6a1cc1:{c.instructions+=2;NFSU2_TR(0x6a1cc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1cc6:{NFSU2_TR(0x6a1cc6);
if(r1(R+518)){{goto L6a1cde;}}
}
B6a1cc8:L6a1cc8:{c.instructions+=2;NFSU2_TR(0x6a1cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1ccd:{NFSU2_TR(0x6a1ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a2061u,6a2);}
}
B6a1cd3:L6a1cd3:{c.instructions+=5;NFSU2_TR(0x6a1cd3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6a1cd5:{NFSU2_TR(0x6a1cd5);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1cd8:{NFSU2_TR(0x6a1cd8);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B6a1cda:{NFSU2_TR(0x6a1cda);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B6a1cdc:{NFSU2_TR(0x6a1cdc);
{goto L6a1d29;}
}
B6a1cde:L6a1cde:{c.instructions+=2;NFSU2_TR(0x6a1cde);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6a1ce1:{NFSU2_TR(0x6a1ce1);
{goto L6a1d29;}
}
B6a1ce3:L6a1ce3:{c.instructions+=2;NFSU2_TR(0x6a1ce3);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a1ce6:{NFSU2_TR(0x6a1ce6);
{goto L6a1d29;}
}
B6a1ce8:L6a1ce8:{c.instructions+=4;NFSU2_TR(0x6a1ce8);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a1ceb:{NFSU2_TR(0x6a1ceb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1ced:{NFSU2_TR(0x6a1ced);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1cf0:{NFSU2_TR(0x6a1cf0);
if(r1(R+518)){{goto L6a1f27;}}
}
B6a1cf6:L6a1cf6:{c.instructions+=1;NFSU2_TR(0x6a1cf6);
{goto L6a1dfb;}
}
B6a1cfb:L6a1cfb:{c.instructions+=4;NFSU2_TR(0x6a1cfb);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a1cfe:{NFSU2_TR(0x6a1cfe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1d00:{NFSU2_TR(0x6a1d00);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1d03:{NFSU2_TR(0x6a1d03);
if(r1(R+514)){{goto L6a1dfb;}}
}
B6a1d09:L6a1d09:{c.instructions+=1;NFSU2_TR(0x6a1d09);
{goto L6a1f27;}
}
B6a1d0e:L6a1d0e:{c.instructions+=4;NFSU2_TR(0x6a1d0e);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1d11:{NFSU2_TR(0x6a1d11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1d13:{NFSU2_TR(0x6a1d13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1d16:{NFSU2_TR(0x6a1d16);
if(r1(R+514)){{goto L6a1d29;}}
}
B6a1d18:L6a1d18:{c.instructions+=1;NFSU2_TR(0x6a1d18);
{goto L6a1d24;}
}
B6a1d1a:L6a1d1a:{c.instructions+=4;NFSU2_TR(0x6a1d1a);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1d1d:{NFSU2_TR(0x6a1d1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1d1f:{NFSU2_TR(0x6a1d1f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1d22:{NFSU2_TR(0x6a1d22);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a1d29;}}
}
B6a1d24:L6a1d24:{c.instructions+=2;NFSU2_TR(0x6a1d24);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1d26:{NFSU2_TR(0x6a1d26);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1d29:L6a1d29:{c.instructions+=4;NFSU2_TR(0x6a1d29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1d2a:{NFSU2_TR(0x6a1d2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a1d2b:{NFSU2_TR(0x6a1d2b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a1d2e:{NFSU2_TR(0x6a1d2e);
TAIL_STATIC(0x6a216du,6a2);
}
B6a1d33:L6a1d33:{c.instructions+=2;NFSU2_TR(0x6a1d33);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1d37:{NFSU2_TR(0x6a1d37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a2068u,6a2);}
}
B6a1d3d:L6a1d3d:{c.instructions+=2;NFSU2_TR(0x6a1d3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1d3f:{NFSU2_TR(0x6a1d3f);
if(r1(R+518)){{goto L6a1d4a;}}
}
B6a1d41:L6a1d41:{c.instructions+=3;NFSU2_TR(0x6a1d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1d44:{NFSU2_TR(0x6a1d44);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1d48:{NFSU2_TR(0x6a1d48);
if(r1(R+518)){{goto L6a1d81;}}
}
B6a1d4a:L6a1d4a:{c.instructions+=6;NFSU2_TR(0x6a1d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1d4d:{NFSU2_TR(0x6a1d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1d50:{NFSU2_TR(0x6a1d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a1d53:{NFSU2_TR(0x6a1d53);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1d56:{NFSU2_TR(0x6a1d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1d59:{NFSU2_TR(0x6a1d59);
if(r1(R+518)){TAIL_STATIC(0x6a206bu,6a2);}
}
B6a1d5f:L6a1d5f:{c.instructions+=2;NFSU2_TR(0x6a1d5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1d63:{NFSU2_TR(0x6a1d63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a206bu,6a2);}
}
B6a1d69:L6a1d69:{c.instructions+=1;NFSU2_TR(0x6a1d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1d6c:L6a1d6c:{c.instructions+=2;NFSU2_TR(0x6a1d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1d6e:{NFSU2_TR(0x6a1d6e);
if(r1(R+518)){{goto L6a1d86;}}
}
B6a1d70:L6a1d70:{c.instructions+=2;NFSU2_TR(0x6a1d70);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1d74:{NFSU2_TR(0x6a1d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1d86;}}
}
B6a1d76:L6a1d76:{c.instructions+=4;NFSU2_TR(0x6a1d76);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1d79:{NFSU2_TR(0x6a1d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1d7c:{NFSU2_TR(0x6a1d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1d7f:{NFSU2_TR(0x6a1d7f);
{goto L6a1d8f;}
}
B6a1d81:L6a1d81:{c.instructions+=2;NFSU2_TR(0x6a1d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1d84:{NFSU2_TR(0x6a1d84);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1d6cu);}goto L6a1d6c;}
}
B6a1d86:L6a1d86:{c.instructions+=3;NFSU2_TR(0x6a1d86);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1d89:{NFSU2_TR(0x6a1d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a1d8c:{NFSU2_TR(0x6a1d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1d8f:L6a1d8f:{c.instructions+=3;NFSU2_TR(0x6a1d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1d92:{NFSU2_TR(0x6a1d92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1d97:{NFSU2_TR(0x6a1d97);
if(r1(R+518)){TAIL_STATIC(0x6a202fu,6a2);}
}
B6a1d9d:L6a1d9d:{c.instructions+=2;NFSU2_TR(0x6a1d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1da2:{NFSU2_TR(0x6a1da2);
if(r1(R+518)){TAIL_STATIC(0x6a2000u,6a2);}
}
B6a1da8:L6a1da8:{c.instructions+=2;NFSU2_TR(0x6a1da8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1dad:{NFSU2_TR(0x6a1dad);
if(r1(R+518)){{goto L6a1f77;}}
}
B6a1db3:L6a1db3:{c.instructions+=2;NFSU2_TR(0x6a1db3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1db8:{NFSU2_TR(0x6a1db8);
if(r1(R+518)){{goto L6a1ede;}}
}
B6a1dbe:L6a1dbe:{c.instructions+=2;NFSU2_TR(0x6a1dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1dc3:{NFSU2_TR(0x6a1dc3);
if(r1(R+518)){{goto L6a1ec2;}}
}
B6a1dc9:L6a1dc9:{c.instructions+=2;NFSU2_TR(0x6a1dc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1dce:{NFSU2_TR(0x6a1dce);
if(r1(R+518)){{goto L6a1e02;}}
}
B6a1dd0:L6a1dd0:{c.instructions+=2;NFSU2_TR(0x6a1dd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1dd5:{NFSU2_TR(0x6a1dd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a2061u,6a2);}
}
B6a1ddb:L6a1ddb:{c.instructions+=7;NFSU2_TR(0x6a1ddb);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1de1:{NFSU2_TR(0x6a1de1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a1de3:{NFSU2_TR(0x6a1de3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1de5:{NFSU2_TR(0x6a1de5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1de7:{NFSU2_TR(0x6a1de7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1de9:{NFSU2_TR(0x6a1de9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1dec:{NFSU2_TR(0x6a1dec);
if(r1(R+514)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1df2:L6a1df2:{c.instructions+=2;NFSU2_TR(0x6a1df2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1df5:{NFSU2_TR(0x6a1df5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1dfb:L6a1dfb:{c.instructions+=2;NFSU2_TR(0x6a1dfb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a1dfd:{NFSU2_TR(0x6a1dfd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1d29u);}goto L6a1d29;}
}
B6a1e02:L6a1e02:{c.instructions+=6;NFSU2_TR(0x6a1e02);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1e08:{NFSU2_TR(0x6a1e08);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a1e0a:{NFSU2_TR(0x6a1e0a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1e0c:{NFSU2_TR(0x6a1e0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1e0e:{NFSU2_TR(0x6a1e0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1e11:{NFSU2_TR(0x6a1e11);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a1fa0;}}
}
B6a1e17:L6a1e17:{c.instructions+=6;NFSU2_TR(0x6a1e17);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1e1d:{NFSU2_TR(0x6a1e1d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a1e1f:{NFSU2_TR(0x6a1e1f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1e21:{NFSU2_TR(0x6a1e21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1e23:{NFSU2_TR(0x6a1e23);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1e26:{NFSU2_TR(0x6a1e26);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x6a2041u,6a2);}
}
B6a1e2c:L6a1e2c:{c.instructions+=7;NFSU2_TR(0x6a1e2c);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1e32:{NFSU2_TR(0x6a1e32);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a1e34:{NFSU2_TR(0x6a1e34);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1e36:{NFSU2_TR(0x6a1e36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1e38:{NFSU2_TR(0x6a1e38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1e3a:{NFSU2_TR(0x6a1e3a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1e3d:{NFSU2_TR(0x6a1e3d);
if(r1(R+514)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1e43:L6a1e43:{c.instructions+=7;NFSU2_TR(0x6a1e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1e46:{NFSU2_TR(0x6a1e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a1e49:{NFSU2_TR(0x6a1e49);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1e4c:{NFSU2_TR(0x6a1e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1e4f:{NFSU2_TR(0x6a1e4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a1e52:{NFSU2_TR(0x6a1e52);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a1e56:{NFSU2_TR(0x6a1e56);
if(r1(R+518)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1e5c:L6a1e5c:{c.instructions+=7;NFSU2_TR(0x6a1e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1e5f:{NFSU2_TR(0x6a1e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1e62:{NFSU2_TR(0x6a1e62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1e65:{NFSU2_TR(0x6a1e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a1e67:{NFSU2_TR(0x6a1e67);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a1e6d:{NFSU2_TR(0x6a1e6d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a1e73:{NFSU2_TR(0x6a1e73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1e79:L6a1e79:{c.instructions+=4;NFSU2_TR(0x6a1e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a1e7c:{NFSU2_TR(0x6a1e7c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a1e7e:{NFSU2_TR(0x6a1e7e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a1e80:{NFSU2_TR(0x6a1e80);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a1e91;}}
}
B6a1e82:L6a1e82:{c.instructions+=1;NFSU2_TR(0x6a1e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1e85:L6a1e85:{c.instructions+=2;NFSU2_TR(0x6a1e85);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a1e87:{NFSU2_TR(0x6a1e87);
if(r1(R+518)){{goto L6a1e91;}}
}
B6a1e89:L6a1e89:{c.instructions+=4;NFSU2_TR(0x6a1e89);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a1e8a:{NFSU2_TR(0x6a1e8a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a1e8d:{NFSU2_TR(0x6a1e8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6a1e8f:{NFSU2_TR(0x6a1e8f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1e85u);}goto L6a1e85;}}
}
B6a1e91:L6a1e91:{c.instructions+=2;NFSU2_TR(0x6a1e91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6a1e93:{NFSU2_TR(0x6a1e93);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1e99:L6a1e99:{c.instructions+=7;NFSU2_TR(0x6a1e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1e9c:{NFSU2_TR(0x6a1e9c);
__builtin_memmove((R+8),(R+24),4);
}
B6a1e9e:{NFSU2_TR(0x6a1e9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a1ea1:{NFSU2_TR(0x6a1ea1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B6a1ea3:{NFSU2_TR(0x6a1ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a1ea6:{NFSU2_TR(0x6a1ea6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+24))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a1ea9:{NFSU2_TR(0x6a1ea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1eaf:L6a1eaf:{c.instructions+=6;NFSU2_TR(0x6a1eaf);
__builtin_memmove((R+0),(R+4),4);
}
B6a1eb1:{NFSU2_TR(0x6a1eb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1eb4:{NFSU2_TR(0x6a1eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a1eb7:{NFSU2_TR(0x6a1eb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a1eba:{NFSU2_TR(0x6a1eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a1ebd:{NFSU2_TR(0x6a1ebd);
TAIL_STATIC(0x6a2864u,6a2);
}
B6a1ec2:L6a1ec2:{c.instructions+=7;NFSU2_TR(0x6a1ec2);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1ec8:{NFSU2_TR(0x6a1ec8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a1eca:{NFSU2_TR(0x6a1eca);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1ecc:{NFSU2_TR(0x6a1ecc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1ece:{NFSU2_TR(0x6a1ece);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1ed0:{NFSU2_TR(0x6a1ed0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1ed3:{NFSU2_TR(0x6a1ed3);
if(r1(R+514)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1ed9:L6a1ed9:{c.instructions+=1;NFSU2_TR(0x6a1ed9);
TAIL_STATIC(0x6a2043u,6a2);
}
B6a1ede:L6a1ede:{c.instructions+=4;NFSU2_TR(0x6a1ede);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1ee1:{NFSU2_TR(0x6a1ee1);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1ee7:{NFSU2_TR(0x6a1ee7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1ee9:{NFSU2_TR(0x6a1ee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1f1b;}}
}
B6a1eeb:L6a1eeb:{c.instructions+=2;NFSU2_TR(0x6a1eeb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1eee:{NFSU2_TR(0x6a1eee);
if(r1(R+514)){{goto L6a1ef9;}}
}
B6a1ef0:L6a1ef0:{c.instructions+=2;NFSU2_TR(0x6a1ef0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1ef3:{NFSU2_TR(0x6a1ef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fa0;}}
}
B6a1ef9:L6a1ef9:{c.instructions+=4;NFSU2_TR(0x6a1ef9);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1eff:{NFSU2_TR(0x6a1eff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f01:{NFSU2_TR(0x6a1f01);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f04:{NFSU2_TR(0x6a1f04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1f0b;}}
}
B6a1f06:L6a1f06:{c.instructions+=2;NFSU2_TR(0x6a1f06);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f09:{NFSU2_TR(0x6a1f09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1f25;}}
}
B6a1f0b:L6a1f0b:{c.instructions+=4;NFSU2_TR(0x6a1f0b);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a1f11:{NFSU2_TR(0x6a1f11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f13:{NFSU2_TR(0x6a1f13);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f16:{NFSU2_TR(0x6a1f16);
{goto L6a1fec;}
}
B6a1f1b:L6a1f1b:{c.instructions+=2;NFSU2_TR(0x6a1f1b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1f1e:{NFSU2_TR(0x6a1f1e);
if(r1(R+514)){{goto L6a1f2e;}}
}
B6a1f20:L6a1f20:{c.instructions+=2;NFSU2_TR(0x6a1f20);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f23:{NFSU2_TR(0x6a1f23);
if(r1(R+518)){{goto L6a1f2e;}}
}
B6a1f25:L6a1f25:{c.instructions+=1;NFSU2_TR(0x6a1f25);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1f27:L6a1f27:{c.instructions+=2;NFSU2_TR(0x6a1f27);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a1f29:{NFSU2_TR(0x6a1f29);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1d29u);}goto L6a1d29;}
}
B6a1f2e:L6a1f2e:{c.instructions+=4;NFSU2_TR(0x6a1f2e);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1f34:{NFSU2_TR(0x6a1f34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f36:{NFSU2_TR(0x6a1f36);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f39:{NFSU2_TR(0x6a1f39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1f40;}}
}
B6a1f3b:L6a1f3b:{c.instructions+=2;NFSU2_TR(0x6a1f3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f3e:{NFSU2_TR(0x6a1f3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fa0;}}
}
B6a1f40:L6a1f40:{c.instructions+=4;NFSU2_TR(0x6a1f40);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1f46:{NFSU2_TR(0x6a1f46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f48:{NFSU2_TR(0x6a1f48);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f4b:{NFSU2_TR(0x6a1f4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1f52;}}
}
B6a1f4d:L6a1f4d:{c.instructions+=2;NFSU2_TR(0x6a1f4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f50:{NFSU2_TR(0x6a1f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fa0;}}
}
B6a1f52:L6a1f52:{c.instructions+=1;NFSU2_TR(0x6a1f52);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1f58:L6a1f58:{c.instructions+=6;NFSU2_TR(0x6a1f58);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a1f5a:{NFSU2_TR(0x6a1f5a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a1f5c:{NFSU2_TR(0x6a1f5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f5e:{NFSU2_TR(0x6a1f5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1f60:{NFSU2_TR(0x6a1f60);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1f63:{NFSU2_TR(0x6a1f63);
if(r1(R+514)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1f69:L6a1f69:{c.instructions+=2;NFSU2_TR(0x6a1f69);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f6c:{NFSU2_TR(0x6a1f6c);
if(r1(R+518)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1f72:L6a1f72:{c.instructions+=1;NFSU2_TR(0x6a1f72);
TAIL_STATIC(0x6a2043u,6a2);
}
B6a1f77:L6a1f77:{c.instructions+=4;NFSU2_TR(0x6a1f77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a1f7a:{NFSU2_TR(0x6a1f7a);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1f80:{NFSU2_TR(0x6a1f80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f82:{NFSU2_TR(0x6a1f82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fc1;}}
}
B6a1f84:L6a1f84:{c.instructions+=2;NFSU2_TR(0x6a1f84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1f87:{NFSU2_TR(0x6a1f87);
if(r1(R+514)){{goto L6a1f8e;}}
}
B6a1f89:L6a1f89:{c.instructions+=2;NFSU2_TR(0x6a1f89);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f8c:{NFSU2_TR(0x6a1f8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1f25u);}goto L6a1f25;}}
}
B6a1f8e:L6a1f8e:{c.instructions+=4;NFSU2_TR(0x6a1f8e);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1f94:{NFSU2_TR(0x6a1f94);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1f96:{NFSU2_TR(0x6a1f96);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f99:{NFSU2_TR(0x6a1f99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fa7;}}
}
B6a1f9b:L6a1f9b:{c.instructions+=2;NFSU2_TR(0x6a1f9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1f9e:{NFSU2_TR(0x6a1f9e);
if(r1(R+518)){{goto L6a1fa7;}}
}
B6a1fa0:L6a1fa0:{c.instructions+=2;NFSU2_TR(0x6a1fa0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a1fa2:{NFSU2_TR(0x6a1fa2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1dfbu);}goto L6a1dfb;}
}
B6a1fa7:L6a1fa7:{c.instructions+=4;NFSU2_TR(0x6a1fa7);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1fad:{NFSU2_TR(0x6a1fad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1faf:{NFSU2_TR(0x6a1faf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1fb2:{NFSU2_TR(0x6a1fb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fb9;}}
}
B6a1fb4:L6a1fb4:{c.instructions+=2;NFSU2_TR(0x6a1fb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1fb7:{NFSU2_TR(0x6a1fb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1fa0u);}goto L6a1fa0;}}
}
B6a1fb9:L6a1fb9:{c.instructions+=2;NFSU2_TR(0x6a1fb9);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a1fbf:{NFSU2_TR(0x6a1fbf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1f58u);}goto L6a1f58;}
}
B6a1fc1:L6a1fc1:{c.instructions+=2;NFSU2_TR(0x6a1fc1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a1fc4:{NFSU2_TR(0x6a1fc4);
if(r1(R+514)){{goto L6a1fcb;}}
}
B6a1fc6:L6a1fc6:{c.instructions+=2;NFSU2_TR(0x6a1fc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1fc9:{NFSU2_TR(0x6a1fc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1fa0u);}goto L6a1fa0;}}
}
B6a1fcb:L6a1fcb:{c.instructions+=4;NFSU2_TR(0x6a1fcb);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B6a1fd1:{NFSU2_TR(0x6a1fd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1fd3:{NFSU2_TR(0x6a1fd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1fd6:{NFSU2_TR(0x6a1fd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a1fe1;}}
}
B6a1fd8:L6a1fd8:{c.instructions+=2;NFSU2_TR(0x6a1fd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1fdb:{NFSU2_TR(0x6a1fdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1f25u);}goto L6a1f25;}}
}
B6a1fe1:L6a1fe1:{c.instructions+=3;NFSU2_TR(0x6a1fe1);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a1fe7:{NFSU2_TR(0x6a1fe7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a1fe9:{NFSU2_TR(0x6a1fe9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1fec:L6a1fec:{c.instructions+=1;NFSU2_TR(0x6a1fec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1ff2:L6a1ff2:{c.instructions+=2;NFSU2_TR(0x6a1ff2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a1ff5:{NFSU2_TR(0x6a1ff5);
if(r1(R+518)){TAIL_STATIC(0x6a286au,6a2);}
}
B6a1ffb:L6a1ffb:{c.instructions+=1;NFSU2_TR(0x6a1ffb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a1f27u);}goto L6a1f27;}
}
XIT:NFSU2_TR_EXIT(0x6a1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
