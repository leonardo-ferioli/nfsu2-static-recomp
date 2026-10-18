#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b1(u8* __restrict R,Cpu& c);
u32 page_5b1(Cpu& c){return body_5b1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b1000:goto L5b1000;
case 0x5b1003:c.instructions+=3;goto B5b1003;
case 0x5b1005:c.instructions+=2;goto B5b1005;
case 0x5b1009:c.instructions+=1;goto B5b1009;
case 0x5b100b:goto L5b100b;
case 0x5b100f:c.instructions+=7;goto B5b100f;
case 0x5b1014:c.instructions+=6;goto B5b1014;
case 0x5b1015:c.instructions+=5;goto B5b1015;
case 0x5b1017:c.instructions+=4;goto B5b1017;
case 0x5b101c:c.instructions+=3;goto B5b101c;
case 0x5b1021:c.instructions+=2;goto B5b1021;
case 0x5b1026:c.instructions+=1;goto B5b1026;
case 0x5b102b:goto L5b102b;
case 0x5b102f:c.instructions+=3;goto B5b102f;
case 0x5b1030:c.instructions+=2;goto B5b1030;
case 0x5b1035:c.instructions+=1;goto B5b1035;
case 0x5b103a:goto L5b103a;
case 0x5b103d:c.instructions+=3;goto B5b103d;
case 0x5b1042:c.instructions+=2;goto B5b1042;
case 0x5b1044:c.instructions+=1;goto B5b1044;
case 0x5b1046:goto L5b1046;
case 0x5b1047:c.instructions+=2;goto B5b1047;
case 0x5b1049:c.instructions+=1;goto B5b1049;
case 0x5b104e:goto L5b104e;
case 0x5b1053:c.instructions+=6;goto B5b1053;
case 0x5b1054:c.instructions+=5;goto B5b1054;
case 0x5b1055:c.instructions+=4;goto B5b1055;
case 0x5b1056:c.instructions+=3;goto B5b1056;
case 0x5b1058:c.instructions+=2;goto B5b1058;
case 0x5b1059:c.instructions+=1;goto B5b1059;
case 0x5b105a:goto L5b105a;
case 0x5b105f:c.instructions+=2;goto B5b105f;
case 0x5b1061:c.instructions+=1;goto B5b1061;
case 0x5b1063:goto L5b1063;
case 0x5b1065:c.instructions+=1;goto B5b1065;
case 0x5b106a:goto L5b106a;
case 0x5b106f:c.instructions+=6;goto B5b106f;
case 0x5b1070:c.instructions+=5;goto B5b1070;
case 0x5b1071:c.instructions+=4;goto B5b1071;
case 0x5b1072:c.instructions+=3;goto B5b1072;
case 0x5b1074:c.instructions+=2;goto B5b1074;
case 0x5b1075:c.instructions+=1;goto B5b1075;
case 0x5b1076:goto L5b1076;
case 0x5b1077:c.instructions+=6;goto B5b1077;
case 0x5b1078:c.instructions+=5;goto B5b1078;
case 0x5b107a:c.instructions+=4;goto B5b107a;
case 0x5b107b:c.instructions+=3;goto B5b107b;
case 0x5b107d:c.instructions+=2;goto B5b107d;
case 0x5b107e:c.instructions+=1;goto B5b107e;
case 0x5b1080:goto L5b1080;
case 0x5b1086:c.instructions+=14;goto B5b1086;
case 0x5b1088:c.instructions+=13;goto B5b1088;
case 0x5b108d:c.instructions+=12;goto B5b108d;
case 0x5b108e:c.instructions+=11;goto B5b108e;
case 0x5b1095:c.instructions+=10;goto B5b1095;
case 0x5b1098:c.instructions+=9;goto B5b1098;
case 0x5b1099:c.instructions+=8;goto B5b1099;
case 0x5b109a:c.instructions+=7;goto B5b109a;
case 0x5b109b:c.instructions+=6;goto B5b109b;
case 0x5b109c:c.instructions+=5;goto B5b109c;
case 0x5b10a0:c.instructions+=4;goto B5b10a0;
case 0x5b10a5:c.instructions+=3;goto B5b10a5;
case 0x5b10a7:c.instructions+=2;goto B5b10a7;
case 0x5b10a9:c.instructions+=1;goto B5b10a9;
case 0x5b10ae:goto L5b10ae;
case 0x5b10b1:c.instructions+=2;goto B5b10b1;
case 0x5b10b3:c.instructions+=1;goto B5b10b3;
case 0x5b10b5:goto L5b10b5;
case 0x5b10ba:goto L5b10ba;
case 0x5b10bf:c.instructions+=3;goto B5b10bf;
case 0x5b10c4:c.instructions+=2;goto B5b10c4;
case 0x5b10c6:c.instructions+=1;goto B5b10c6;
case 0x5b10cb:goto L5b10cb;
case 0x5b10cd:c.instructions+=4;goto B5b10cd;
case 0x5b10d2:c.instructions+=3;goto B5b10d2;
case 0x5b10d7:c.instructions+=2;goto B5b10d7;
case 0x5b10d9:c.instructions+=1;goto B5b10d9;
case 0x5b10de:goto L5b10de;
case 0x5b10e4:c.instructions+=2;goto B5b10e4;
case 0x5b10e9:c.instructions+=1;goto B5b10e9;
case 0x5b10ee:goto L5b10ee;
case 0x5b10f0:c.instructions+=3;goto B5b10f0;
case 0x5b10f2:c.instructions+=2;goto B5b10f2;
case 0x5b10f6:c.instructions+=1;goto B5b10f6;
case 0x5b10fc:goto L5b10fc;
case 0x5b1100:goto L5b1100;
case 0x5b1102:c.instructions+=3;goto B5b1102;
case 0x5b1106:c.instructions+=2;goto B5b1106;
case 0x5b110a:c.instructions+=1;goto B5b110a;
case 0x5b1110:goto L5b1110;
case 0x5b1113:goto L5b1113;
case 0x5b1117:c.instructions+=10;goto B5b1117;
case 0x5b1119:c.instructions+=9;goto B5b1119;
case 0x5b111b:c.instructions+=8;goto B5b111b;
case 0x5b111e:c.instructions+=7;goto B5b111e;
case 0x5b1123:c.instructions+=6;goto B5b1123;
case 0x5b1125:c.instructions+=5;goto B5b1125;
case 0x5b1127:c.instructions+=4;goto B5b1127;
case 0x5b112a:c.instructions+=3;goto B5b112a;
case 0x5b1130:c.instructions+=2;goto B5b1130;
case 0x5b1132:c.instructions+=1;goto B5b1132;
case 0x5b1134:goto L5b1134;
case 0x5b1137:c.instructions+=2;goto B5b1137;
case 0x5b1139:c.instructions+=1;goto B5b1139;
case 0x5b113b:goto L5b113b;
case 0x5b1141:c.instructions+=2;goto B5b1141;
case 0x5b1142:c.instructions+=1;goto B5b1142;
case 0x5b1147:goto L5b1147;
case 0x5b114a:c.instructions+=4;goto B5b114a;
case 0x5b114e:c.instructions+=3;goto B5b114e;
case 0x5b1150:c.instructions+=2;goto B5b1150;
case 0x5b1158:c.instructions+=1;goto B5b1158;
case 0x5b115a:goto L5b115a;
case 0x5b115b:c.instructions+=4;goto B5b115b;
case 0x5b115e:c.instructions+=3;goto B5b115e;
case 0x5b115f:c.instructions+=2;goto B5b115f;
case 0x5b1161:c.instructions+=1;goto B5b1161;
case 0x5b1166:goto L5b1166;
case 0x5b1168:goto L5b1168;
case 0x5b116a:goto L5b116a;
case 0x5b1172:c.instructions+=1;goto B5b1172;
case 0x5b1174:goto L5b1174;
case 0x5b1176:c.instructions+=3;goto B5b1176;
case 0x5b1178:c.instructions+=2;goto B5b1178;
case 0x5b1179:c.instructions+=1;goto B5b1179;
case 0x5b117c:goto L5b117c;
case 0x5b1180:goto L5b1180;
case 0x5b1184:c.instructions+=5;goto B5b1184;
case 0x5b1185:c.instructions+=4;goto B5b1185;
case 0x5b1188:c.instructions+=3;goto B5b1188;
case 0x5b118a:c.instructions+=2;goto B5b118a;
case 0x5b118e:c.instructions+=1;goto B5b118e;
case 0x5b1190:goto L5b1190;
case 0x5b1194:goto L5b1194;
case 0x5b1197:c.instructions+=2;goto B5b1197;
case 0x5b1199:c.instructions+=1;goto B5b1199;
case 0x5b119f:goto L5b119f;
case 0x5b11a4:c.instructions+=3;goto B5b11a4;
case 0x5b11a9:c.instructions+=2;goto B5b11a9;
case 0x5b11ab:c.instructions+=1;goto B5b11ab;
case 0x5b11b0:goto L5b11b0;
case 0x5b11b3:c.instructions+=2;goto B5b11b3;
case 0x5b11b5:c.instructions+=1;goto B5b11b5;
case 0x5b11bb:goto L5b11bb;
case 0x5b11c0:goto L5b11c0;
case 0x5b11c4:c.instructions+=3;goto B5b11c4;
case 0x5b11c5:c.instructions+=2;goto B5b11c5;
case 0x5b11c7:c.instructions+=1;goto B5b11c7;
case 0x5b11cc:goto L5b11cc;
case 0x5b11d1:c.instructions+=1;goto B5b11d1;
case 0x5b11d7:goto L5b11d7;
case 0x5b11db:c.instructions+=3;goto B5b11db;
case 0x5b11dc:c.instructions+=2;goto B5b11dc;
case 0x5b11de:c.instructions+=1;goto B5b11de;
case 0x5b11e3:goto L5b11e3;
case 0x5b11e7:c.instructions+=3;goto B5b11e7;
case 0x5b11e8:c.instructions+=2;goto B5b11e8;
case 0x5b11ea:c.instructions+=1;goto B5b11ea;
case 0x5b11ef:goto L5b11ef;
case 0x5b11f1:c.instructions+=6;goto B5b11f1;
case 0x5b11f3:c.instructions+=5;goto B5b11f3;
case 0x5b11f5:c.instructions+=4;goto B5b11f5;
case 0x5b11f9:c.instructions+=3;goto B5b11f9;
case 0x5b11fa:c.instructions+=2;goto B5b11fa;
case 0x5b11fc:c.instructions+=1;goto B5b11fc;
case 0x5b1201:goto L5b1201;
case 0x5b1207:c.instructions+=2;goto B5b1207;
case 0x5b120c:c.instructions+=1;goto B5b120c;
case 0x5b1211:goto L5b1211;
case 0x5b1213:c.instructions+=1;goto B5b1213;
case 0x5b1215:goto L5b1215;
case 0x5b1219:c.instructions+=1;goto B5b1219;
case 0x5b1220:goto L5b1220;
case 0x5b1226:c.instructions+=1;goto B5b1226;
case 0x5b1228:goto L5b1228;
case 0x5b122a:c.instructions+=2;goto B5b122a;
case 0x5b122c:c.instructions+=1;goto B5b122c;
case 0x5b122e:goto L5b122e;
case 0x5b1230:goto L5b1230;
case 0x5b1234:c.instructions+=6;goto B5b1234;
case 0x5b1239:c.instructions+=5;goto B5b1239;
case 0x5b123d:c.instructions+=4;goto B5b123d;
case 0x5b123e:c.instructions+=3;goto B5b123e;
case 0x5b123f:c.instructions+=2;goto B5b123f;
case 0x5b1240:c.instructions+=1;goto B5b1240;
case 0x5b1247:goto L5b1247;
case 0x5b1249:c.instructions+=4;goto B5b1249;
case 0x5b124c:c.instructions+=3;goto B5b124c;
case 0x5b124d:c.instructions+=2;goto B5b124d;
case 0x5b124f:c.instructions+=1;goto B5b124f;
case 0x5b1252:goto L5b1252;
case 0x5b1257:goto L5b1257;
case 0x5b125d:c.instructions+=2;goto B5b125d;
case 0x5b125f:c.instructions+=1;goto B5b125f;
case 0x5b1261:goto L5b1261;
case 0x5b1264:c.instructions+=1;goto B5b1264;
case 0x5b1266:goto L5b1266;
case 0x5b1268:goto L5b1268;
case 0x5b126d:c.instructions+=1;goto B5b126d;
case 0x5b1272:goto L5b1272;
case 0x5b1274:c.instructions+=2;goto B5b1274;
case 0x5b1276:c.instructions+=1;goto B5b1276;
case 0x5b127c:goto L5b127c;
case 0x5b1280:goto L5b1280;
case 0x5b1284:c.instructions+=1;goto B5b1284;
case 0x5b1286:goto L5b1286;
case 0x5b128c:c.instructions+=5;goto B5b128c;
case 0x5b128e:c.instructions+=4;goto B5b128e;
case 0x5b1292:c.instructions+=3;goto B5b1292;
case 0x5b1298:c.instructions+=2;goto B5b1298;
case 0x5b129c:c.instructions+=1;goto B5b129c;
case 0x5b12a1:goto L5b12a1;
case 0x5b12a3:c.instructions+=3;goto B5b12a3;
case 0x5b12a5:c.instructions+=2;goto B5b12a5;
case 0x5b12a9:c.instructions+=1;goto B5b12a9;
case 0x5b12af:goto L5b12af;
case 0x5b12b3:c.instructions+=4;goto B5b12b3;
case 0x5b12b7:c.instructions+=3;goto B5b12b7;
case 0x5b12b8:c.instructions+=2;goto B5b12b8;
case 0x5b12ba:c.instructions+=1;goto B5b12ba;
case 0x5b12bf:goto L5b12bf;
case 0x5b12c5:c.instructions+=3;goto B5b12c5;
case 0x5b12c6:c.instructions+=2;goto B5b12c6;
case 0x5b12c8:c.instructions+=1;goto B5b12c8;
case 0x5b12cd:goto L5b12cd;
case 0x5b12d1:c.instructions+=3;goto B5b12d1;
case 0x5b12d2:c.instructions+=2;goto B5b12d2;
case 0x5b12d4:c.instructions+=1;goto B5b12d4;
case 0x5b12d9:goto L5b12d9;
case 0x5b12db:c.instructions+=6;goto B5b12db;
case 0x5b12dd:c.instructions+=5;goto B5b12dd;
case 0x5b12df:c.instructions+=4;goto B5b12df;
case 0x5b12e3:c.instructions+=3;goto B5b12e3;
case 0x5b12e4:c.instructions+=2;goto B5b12e4;
case 0x5b12e6:c.instructions+=1;goto B5b12e6;
case 0x5b12eb:goto L5b12eb;
case 0x5b12ed:c.instructions+=3;goto B5b12ed;
case 0x5b12ee:c.instructions+=2;goto B5b12ee;
case 0x5b12f0:c.instructions+=1;goto B5b12f0;
case 0x5b12f3:goto L5b12f3;
case 0x5b12f6:c.instructions+=2;goto B5b12f6;
case 0x5b12f8:c.instructions+=1;goto B5b12f8;
case 0x5b12fa:goto L5b12fa;
case 0x5b12fd:c.instructions+=1;goto B5b12fd;
case 0x5b12ff:goto L5b12ff;
case 0x5b1301:goto L5b1301;
case 0x5b1303:c.instructions+=1;goto B5b1303;
case 0x5b1309:goto L5b1309;
case 0x5b130d:c.instructions+=4;goto B5b130d;
case 0x5b130e:c.instructions+=3;goto B5b130e;
case 0x5b1310:c.instructions+=2;goto B5b1310;
case 0x5b1318:c.instructions+=1;goto B5b1318;
case 0x5b131d:goto L5b131d;
case 0x5b1322:c.instructions+=3;goto B5b1322;
case 0x5b1327:c.instructions+=2;goto B5b1327;
case 0x5b1329:c.instructions+=1;goto B5b1329;
case 0x5b132e:goto L5b132e;
case 0x5b1333:c.instructions+=2;goto B5b1333;
case 0x5b1335:c.instructions+=1;goto B5b1335;
case 0x5b133a:goto L5b133a;
case 0x5b133c:c.instructions+=1;goto B5b133c;
case 0x5b1341:goto L5b1341;
case 0x5b1345:c.instructions+=7;goto B5b1345;
case 0x5b1346:c.instructions+=6;goto B5b1346;
case 0x5b1347:c.instructions+=5;goto B5b1347;
case 0x5b1348:c.instructions+=4;goto B5b1348;
case 0x5b1349:c.instructions+=3;goto B5b1349;
case 0x5b1350:c.instructions+=2;goto B5b1350;
case 0x5b1353:c.instructions+=1;goto B5b1353;
case 0x5b1360:goto L5b1360;
case 0x5b1361:c.instructions+=2;goto B5b1361;
case 0x5b1363:c.instructions+=1;goto B5b1363;
case 0x5b1368:goto L5b1368;
case 0x5b136d:c.instructions+=1;goto B5b136d;
case 0x5b136f:goto L5b136f;
case 0x5b1374:c.instructions+=3;goto B5b1374;
case 0x5b1375:c.instructions+=2;goto B5b1375;
case 0x5b1376:c.instructions+=1;goto B5b1376;
case 0x5b137b:goto L5b137b;
case 0x5b137e:goto L5b137e;
case 0x5b1380:c.instructions+=2;goto B5b1380;
case 0x5b1381:c.instructions+=1;goto B5b1381;
case 0x5b1390:goto L5b1390;
case 0x5b1391:c.instructions+=14;goto B5b1391;
case 0x5b1393:c.instructions+=13;goto B5b1393;
case 0x5b1396:c.instructions+=12;goto B5b1396;
case 0x5b1398:c.instructions+=11;goto B5b1398;
case 0x5b139d:c.instructions+=10;goto B5b139d;
case 0x5b13a3:c.instructions+=9;goto B5b13a3;
case 0x5b13a4:c.instructions+=8;goto B5b13a4;
case 0x5b13ab:c.instructions+=7;goto B5b13ab;
case 0x5b13b1:c.instructions+=6;goto B5b13b1;
case 0x5b13b6:c.instructions+=5;goto B5b13b6;
case 0x5b13b7:c.instructions+=4;goto B5b13b7;
case 0x5b13b8:c.instructions+=3;goto B5b13b8;
case 0x5b13b9:c.instructions+=2;goto B5b13b9;
case 0x5b13bb:c.instructions+=1;goto B5b13bb;
case 0x5b13c0:goto L5b13c0;
case 0x5b13c3:c.instructions+=2;goto B5b13c3;
case 0x5b13c5:c.instructions+=1;goto B5b13c5;
case 0x5b13c7:goto L5b13c7;
case 0x5b13c9:c.instructions+=7;goto B5b13c9;
case 0x5b13d0:c.instructions+=6;goto B5b13d0;
case 0x5b13d7:c.instructions+=5;goto B5b13d7;
case 0x5b13d8:c.instructions+=4;goto B5b13d8;
case 0x5b13d9:c.instructions+=3;goto B5b13d9;
case 0x5b13db:c.instructions+=2;goto B5b13db;
case 0x5b13dc:c.instructions+=1;goto B5b13dc;
case 0x5b13dd:goto L5b13dd;
case 0x5b13e0:c.instructions+=5;goto B5b13e0;
case 0x5b13e3:c.instructions+=4;goto B5b13e3;
case 0x5b13e4:c.instructions+=3;goto B5b13e4;
case 0x5b13e8:c.instructions+=2;goto B5b13e8;
case 0x5b13e9:c.instructions+=1;goto B5b13e9;
case 0x5b13ee:goto L5b13ee;
case 0x5b13f4:c.instructions+=8;goto B5b13f4;
case 0x5b13f7:c.instructions+=7;goto B5b13f7;
case 0x5b13fb:c.instructions+=6;goto B5b13fb;
case 0x5b13fe:c.instructions+=5;goto B5b13fe;
case 0x5b1401:c.instructions+=4;goto B5b1401;
case 0x5b1402:c.instructions+=3;goto B5b1402;
case 0x5b1403:c.instructions+=2;goto B5b1403;
case 0x5b1404:c.instructions+=1;goto B5b1404;
case 0x5b140a:goto L5b140a;
case 0x5b140c:c.instructions+=4;goto B5b140c;
case 0x5b140e:c.instructions+=3;goto B5b140e;
case 0x5b1411:c.instructions+=2;goto B5b1411;
case 0x5b1413:c.instructions+=1;goto B5b1413;
case 0x5b1419:goto L5b1419;
case 0x5b141b:c.instructions+=1;goto B5b141b;
case 0x5b1421:goto L5b1421;
case 0x5b1428:c.instructions+=1;goto B5b1428;
case 0x5b142d:goto L5b142d;
case 0x5b142f:c.instructions+=5;goto B5b142f;
case 0x5b1433:c.instructions+=4;goto B5b1433;
case 0x5b1434:c.instructions+=3;goto B5b1434;
case 0x5b143b:c.instructions+=2;goto B5b143b;
case 0x5b1446:c.instructions+=1;goto B5b1446;
case 0x5b144b:goto L5b144b;
case 0x5b1452:c.instructions+=2;goto B5b1452;
case 0x5b1454:c.instructions+=1;goto B5b1454;
case 0x5b1456:goto L5b1456;
case 0x5b145a:c.instructions+=8;goto B5b145a;
case 0x5b145b:c.instructions+=7;goto B5b145b;
case 0x5b145f:c.instructions+=6;goto B5b145f;
case 0x5b1460:c.instructions+=5;goto B5b1460;
case 0x5b1462:c.instructions+=4;goto B5b1462;
case 0x5b1466:c.instructions+=3;goto B5b1466;
case 0x5b1467:c.instructions+=2;goto B5b1467;
case 0x5b146e:c.instructions+=1;goto B5b146e;
case 0x5b1473:goto L5b1473;
case 0x5b1477:c.instructions+=3;goto B5b1477;
case 0x5b147b:c.instructions+=2;goto B5b147b;
case 0x5b147d:c.instructions+=1;goto B5b147d;
case 0x5b147f:goto L5b147f;
case 0x5b1483:c.instructions+=5;goto B5b1483;
case 0x5b1484:c.instructions+=4;goto B5b1484;
case 0x5b1488:c.instructions+=3;goto B5b1488;
case 0x5b1489:c.instructions+=2;goto B5b1489;
case 0x5b148b:c.instructions+=1;goto B5b148b;
case 0x5b1490:goto L5b1490;
case 0x5b1494:c.instructions+=10;goto B5b1494;
case 0x5b149a:c.instructions+=9;goto B5b149a;
case 0x5b14a0:c.instructions+=8;goto B5b14a0;
case 0x5b14a4:c.instructions+=7;goto B5b14a4;
case 0x5b14a8:c.instructions+=6;goto B5b14a8;
case 0x5b14ac:c.instructions+=5;goto B5b14ac;
case 0x5b14b2:c.instructions+=4;goto B5b14b2;
case 0x5b14b8:c.instructions+=3;goto B5b14b8;
case 0x5b14ba:c.instructions+=2;goto B5b14ba;
case 0x5b14bd:c.instructions+=1;goto B5b14bd;
case 0x5b14bf:goto L5b14bf;
case 0x5b14c5:c.instructions+=3;goto B5b14c5;
case 0x5b14c9:c.instructions+=2;goto B5b14c9;
case 0x5b14cd:c.instructions+=1;goto B5b14cd;
case 0x5b14cf:goto L5b14cf;
case 0x5b14d1:goto L5b14d1;
case 0x5b14d8:c.instructions+=2;goto B5b14d8;
case 0x5b14e3:c.instructions+=1;goto B5b14e3;
case 0x5b14e8:goto L5b14e8;
case 0x5b14eb:c.instructions+=2;goto B5b14eb;
case 0x5b14ec:c.instructions+=1;goto B5b14ec;
case 0x5b14f1:goto L5b14f1;
case 0x5b14f4:c.instructions+=8;goto B5b14f4;
case 0x5b14f6:c.instructions+=7;goto B5b14f6;
case 0x5b14f8:c.instructions+=6;goto B5b14f8;
case 0x5b14fc:c.instructions+=5;goto B5b14fc;
case 0x5b14fe:c.instructions+=4;goto B5b14fe;
case 0x5b14ff:c.instructions+=3;goto B5b14ff;
case 0x5b1501:c.instructions+=2;goto B5b1501;
case 0x5b1507:c.instructions+=1;goto B5b1507;
case 0x5b150c:goto L5b150c;
case 0x5b150e:c.instructions+=17;goto B5b150e;
case 0x5b1511:c.instructions+=16;goto B5b1511;
case 0x5b1517:c.instructions+=15;goto B5b1517;
case 0x5b1519:c.instructions+=14;goto B5b1519;
case 0x5b151c:c.instructions+=13;goto B5b151c;
case 0x5b151e:c.instructions+=12;goto B5b151e;
case 0x5b1520:c.instructions+=11;goto B5b1520;
case 0x5b1522:c.instructions+=10;goto B5b1522;
case 0x5b1523:c.instructions+=9;goto B5b1523;
case 0x5b1525:c.instructions+=8;goto B5b1525;
case 0x5b1527:c.instructions+=7;goto B5b1527;
case 0x5b152e:c.instructions+=6;goto B5b152e;
case 0x5b1530:c.instructions+=5;goto B5b1530;
case 0x5b1537:c.instructions+=4;goto B5b1537;
case 0x5b1538:c.instructions+=3;goto B5b1538;
case 0x5b153a:c.instructions+=2;goto B5b153a;
case 0x5b153b:c.instructions+=1;goto B5b153b;
case 0x5b1540:goto L5b1540;
case 0x5b1541:c.instructions+=18;goto B5b1541;
case 0x5b1543:c.instructions+=17;goto B5b1543;
case 0x5b1546:c.instructions+=16;goto B5b1546;
case 0x5b1548:c.instructions+=15;goto B5b1548;
case 0x5b154d:c.instructions+=14;goto B5b154d;
case 0x5b1553:c.instructions+=13;goto B5b1553;
case 0x5b1554:c.instructions+=12;goto B5b1554;
case 0x5b155b:c.instructions+=11;goto B5b155b;
case 0x5b1561:c.instructions+=10;goto B5b1561;
case 0x5b1566:c.instructions+=9;goto B5b1566;
case 0x5b1567:c.instructions+=8;goto B5b1567;
case 0x5b1568:c.instructions+=7;goto B5b1568;
case 0x5b156a:c.instructions+=6;goto B5b156a;
case 0x5b1570:c.instructions+=5;goto B5b1570;
case 0x5b1571:c.instructions+=4;goto B5b1571;
case 0x5b1573:c.instructions+=3;goto B5b1573;
case 0x5b1574:c.instructions+=2;goto B5b1574;
case 0x5b1579:c.instructions+=1;goto B5b1579;
case 0x5b157b:goto L5b157b;
case 0x5b1580:goto L5b1580;
case 0x5b1586:c.instructions+=3;goto B5b1586;
case 0x5b158b:c.instructions+=2;goto B5b158b;
case 0x5b158c:c.instructions+=1;goto B5b158c;
case 0x5b1591:goto L5b1591;
case 0x5b1597:c.instructions+=2;goto B5b1597;
case 0x5b1598:c.instructions+=1;goto B5b1598;
case 0x5b159d:goto L5b159d;
case 0x5b15a0:c.instructions+=5;goto B5b15a0;
case 0x5b15a4:c.instructions+=4;goto B5b15a4;
case 0x5b15a6:c.instructions+=3;goto B5b15a6;
case 0x5b15a9:c.instructions+=2;goto B5b15a9;
case 0x5b15b4:c.instructions+=1;goto B5b15b4;
case 0x5b15b6:goto L5b15b6;
case 0x5b15b9:c.instructions+=3;goto B5b15b9;
case 0x5b15ba:c.instructions+=2;goto B5b15ba;
case 0x5b15bc:c.instructions+=1;goto B5b15bc;
case 0x5b15c1:goto L5b15c1;
case 0x5b15c3:goto L5b15c3;
case 0x5b15c5:goto L5b15c5;
case 0x5b15c8:c.instructions+=26;goto B5b15c8;
case 0x5b15ce:c.instructions+=25;goto B5b15ce;
case 0x5b15d4:c.instructions+=24;goto B5b15d4;
case 0x5b15da:c.instructions+=23;goto B5b15da;
case 0x5b15e0:c.instructions+=22;goto B5b15e0;
case 0x5b15e2:c.instructions+=21;goto B5b15e2;
case 0x5b15e8:c.instructions+=20;goto B5b15e8;
case 0x5b15ee:c.instructions+=19;goto B5b15ee;
case 0x5b15f2:c.instructions+=18;goto B5b15f2;
case 0x5b15f8:c.instructions+=17;goto B5b15f8;
case 0x5b15fa:c.instructions+=16;goto B5b15fa;
case 0x5b1600:c.instructions+=15;goto B5b1600;
case 0x5b1606:c.instructions+=14;goto B5b1606;
case 0x5b1609:c.instructions+=13;goto B5b1609;
case 0x5b1610:c.instructions+=12;goto B5b1610;
case 0x5b1614:c.instructions+=11;goto B5b1614;
case 0x5b1618:c.instructions+=10;goto B5b1618;
case 0x5b161e:c.instructions+=9;goto B5b161e;
case 0x5b1624:c.instructions+=8;goto B5b1624;
case 0x5b162a:c.instructions+=7;goto B5b162a;
case 0x5b1630:c.instructions+=6;goto B5b1630;
case 0x5b1633:c.instructions+=5;goto B5b1633;
case 0x5b1634:c.instructions+=4;goto B5b1634;
case 0x5b1639:c.instructions+=3;goto B5b1639;
case 0x5b163a:c.instructions+=2;goto B5b163a;
case 0x5b1645:c.instructions+=1;goto B5b1645;
case 0x5b164a:goto L5b164a;
case 0x5b164c:c.instructions+=5;goto B5b164c;
case 0x5b1653:c.instructions+=4;goto B5b1653;
case 0x5b1654:c.instructions+=3;goto B5b1654;
case 0x5b1657:c.instructions+=2;goto B5b1657;
case 0x5b1658:c.instructions+=1;goto B5b1658;
case 0x5b165d:goto L5b165d;
case 0x5b1660:c.instructions+=8;goto B5b1660;
case 0x5b1666:c.instructions+=7;goto B5b1666;
case 0x5b166a:c.instructions+=6;goto B5b166a;
case 0x5b166e:c.instructions+=5;goto B5b166e;
case 0x5b1678:c.instructions+=4;goto B5b1678;
case 0x5b167e:c.instructions+=3;goto B5b167e;
case 0x5b167f:c.instructions+=2;goto B5b167f;
case 0x5b1680:c.instructions+=1;goto B5b1680;
case 0x5b1685:goto L5b1685;
case 0x5b1688:c.instructions+=2;goto B5b1688;
case 0x5b168a:c.instructions+=1;goto B5b168a;
case 0x5b1690:goto L5b1690;
case 0x5b1694:c.instructions+=6;goto B5b1694;
case 0x5b1695:c.instructions+=5;goto B5b1695;
case 0x5b1699:c.instructions+=4;goto B5b1699;
case 0x5b169a:c.instructions+=3;goto B5b169a;
case 0x5b169c:c.instructions+=2;goto B5b169c;
case 0x5b169f:c.instructions+=1;goto B5b169f;
case 0x5b16a4:goto L5b16a4;
case 0x5b16a6:c.instructions+=1;goto B5b16a6;
case 0x5b16ab:goto L5b16ab;
case 0x5b16ae:c.instructions+=2;goto B5b16ae;
case 0x5b16b0:c.instructions+=1;goto B5b16b0;
case 0x5b16b2:goto L5b16b2;
case 0x5b16b6:c.instructions+=27;goto B5b16b6;
case 0x5b16ba:c.instructions+=26;goto B5b16ba;
case 0x5b16be:c.instructions+=25;goto B5b16be;
case 0x5b16c2:c.instructions+=24;goto B5b16c2;
case 0x5b16c6:c.instructions+=23;goto B5b16c6;
case 0x5b16ca:c.instructions+=22;goto B5b16ca;
case 0x5b16ce:c.instructions+=21;goto B5b16ce;
case 0x5b16d2:c.instructions+=20;goto B5b16d2;
case 0x5b16d6:c.instructions+=19;goto B5b16d6;
case 0x5b16da:c.instructions+=18;goto B5b16da;
case 0x5b16de:c.instructions+=17;goto B5b16de;
case 0x5b16e2:c.instructions+=16;goto B5b16e2;
case 0x5b16e3:c.instructions+=15;goto B5b16e3;
case 0x5b16e7:c.instructions+=14;goto B5b16e7;
case 0x5b16eb:c.instructions+=13;goto B5b16eb;
case 0x5b16ef:c.instructions+=12;goto B5b16ef;
case 0x5b16f0:c.instructions+=11;goto B5b16f0;
case 0x5b16f4:c.instructions+=10;goto B5b16f4;
case 0x5b16f5:c.instructions+=9;goto B5b16f5;
case 0x5b16f9:c.instructions+=8;goto B5b16f9;
case 0x5b16fa:c.instructions+=7;goto B5b16fa;
case 0x5b16fe:c.instructions+=6;goto B5b16fe;
case 0x5b16ff:c.instructions+=5;goto B5b16ff;
case 0x5b1700:c.instructions+=4;goto B5b1700;
case 0x5b1702:c.instructions+=3;goto B5b1702;
case 0x5b1709:c.instructions+=2;goto B5b1709;
case 0x5b1710:c.instructions+=1;goto B5b1710;
case 0x5b1715:goto L5b1715;
case 0x5b171b:c.instructions+=1;goto B5b171b;
case 0x5b1720:goto L5b1720;
case 0x5b1722:c.instructions+=2;goto B5b1722;
case 0x5b1728:c.instructions+=1;goto B5b1728;
case 0x5b172d:goto L5b172d;
case 0x5b1731:c.instructions+=5;goto B5b1731;
case 0x5b1732:c.instructions+=4;goto B5b1732;
case 0x5b1736:c.instructions+=3;goto B5b1736;
case 0x5b1737:c.instructions+=2;goto B5b1737;
case 0x5b173d:c.instructions+=1;goto B5b173d;
case 0x5b1742:goto L5b1742;
case 0x5b1746:c.instructions+=13;goto B5b1746;
case 0x5b174a:c.instructions+=12;goto B5b174a;
case 0x5b174c:c.instructions+=11;goto B5b174c;
case 0x5b1752:c.instructions+=10;goto B5b1752;
case 0x5b1756:c.instructions+=9;goto B5b1756;
case 0x5b175a:c.instructions+=8;goto B5b175a;
case 0x5b175e:c.instructions+=7;goto B5b175e;
case 0x5b1764:c.instructions+=6;goto B5b1764;
case 0x5b1768:c.instructions+=5;goto B5b1768;
case 0x5b176c:c.instructions+=4;goto B5b176c;
case 0x5b1770:c.instructions+=3;goto B5b1770;
case 0x5b1776:c.instructions+=2;goto B5b1776;
case 0x5b177a:c.instructions+=1;goto B5b177a;
case 0x5b177f:goto L5b177f;
case 0x5b1782:c.instructions+=2;goto B5b1782;
case 0x5b1784:c.instructions+=1;goto B5b1784;
case 0x5b1786:goto L5b1786;
case 0x5b178a:c.instructions+=19;goto B5b178a;
case 0x5b178e:c.instructions+=18;goto B5b178e;
case 0x5b1792:c.instructions+=17;goto B5b1792;
case 0x5b1794:c.instructions+=16;goto B5b1794;
case 0x5b1795:c.instructions+=15;goto B5b1795;
case 0x5b1799:c.instructions+=14;goto B5b1799;
case 0x5b179a:c.instructions+=13;goto B5b179a;
case 0x5b179b:c.instructions+=12;goto B5b179b;
case 0x5b179e:c.instructions+=11;goto B5b179e;
case 0x5b17a2:c.instructions+=10;goto B5b17a2;
case 0x5b17a6:c.instructions+=9;goto B5b17a6;
case 0x5b17a8:c.instructions+=8;goto B5b17a8;
case 0x5b17aa:c.instructions+=7;goto B5b17aa;
case 0x5b17b1:c.instructions+=6;goto B5b17b1;
case 0x5b17b5:c.instructions+=5;goto B5b17b5;
case 0x5b17b9:c.instructions+=4;goto B5b17b9;
case 0x5b17c0:c.instructions+=3;goto B5b17c0;
case 0x5b17c2:c.instructions+=2;goto B5b17c2;
case 0x5b17c5:c.instructions+=1;goto B5b17c5;
case 0x5b17ca:goto L5b17ca;
case 0x5b17cc:goto L5b17cc;
case 0x5b17ce:goto L5b17ce;
case 0x5b17d1:c.instructions+=1;goto B5b17d1;
case 0x5b17d5:goto L5b17d5;
case 0x5b17d7:c.instructions+=1;goto B5b17d7;
case 0x5b17dc:goto L5b17dc;
case 0x5b17df:c.instructions+=3;goto B5b17df;
case 0x5b17e1:c.instructions+=2;goto B5b17e1;
case 0x5b17e5:c.instructions+=1;goto B5b17e5;
case 0x5b17e7:goto L5b17e7;
case 0x5b17ea:c.instructions+=1;goto B5b17ea;
case 0x5b17ec:goto L5b17ec;
case 0x5b17ee:goto L5b17ee;
case 0x5b17f1:c.instructions+=8;goto B5b17f1;
case 0x5b17f4:c.instructions+=7;goto B5b17f4;
case 0x5b17f6:c.instructions+=6;goto B5b17f6;
case 0x5b17f9:c.instructions+=5;goto B5b17f9;
case 0x5b17fc:c.instructions+=4;goto B5b17fc;
case 0x5b1800:c.instructions+=3;goto B5b1800;
case 0x5b1802:c.instructions+=2;goto B5b1802;
case 0x5b1804:c.instructions+=1;goto B5b1804;
case 0x5b1807:goto L5b1807;
case 0x5b180a:c.instructions+=14;goto B5b180a;
case 0x5b1810:c.instructions+=13;goto B5b1810;
case 0x5b181a:c.instructions+=12;goto B5b181a;
case 0x5b1821:c.instructions+=11;goto B5b1821;
case 0x5b1828:c.instructions+=10;goto B5b1828;
case 0x5b182e:c.instructions+=9;goto B5b182e;
case 0x5b1830:c.instructions+=8;goto B5b1830;
case 0x5b1836:c.instructions+=7;goto B5b1836;
case 0x5b183c:c.instructions+=6;goto B5b183c;
case 0x5b1842:c.instructions+=5;goto B5b1842;
case 0x5b1848:c.instructions+=4;goto B5b1848;
case 0x5b184e:c.instructions+=3;goto B5b184e;
case 0x5b1850:c.instructions+=2;goto B5b1850;
case 0x5b1853:c.instructions+=1;goto B5b1853;
case 0x5b1855:goto L5b1855;
case 0x5b1857:c.instructions+=1;goto B5b1857;
case 0x5b185d:goto L5b185d;
case 0x5b1863:c.instructions+=6;goto B5b1863;
case 0x5b1869:c.instructions+=5;goto B5b1869;
case 0x5b186f:c.instructions+=4;goto B5b186f;
case 0x5b1875:c.instructions+=3;goto B5b1875;
case 0x5b1877:c.instructions+=2;goto B5b1877;
case 0x5b187a:c.instructions+=1;goto B5b187a;
case 0x5b187c:goto L5b187c;
case 0x5b187e:c.instructions+=1;goto B5b187e;
case 0x5b1884:goto L5b1884;
case 0x5b188a:c.instructions+=2;goto B5b188a;
case 0x5b188d:c.instructions+=1;goto B5b188d;
case 0x5b1892:goto L5b1892;
case 0x5b1899:c.instructions+=3;goto B5b1899;
case 0x5b18a0:c.instructions+=2;goto B5b18a0;
case 0x5b18a6:c.instructions+=1;goto B5b18a6;
case 0x5b18a8:goto L5b18a8;
case 0x5b18ae:c.instructions+=5;goto B5b18ae;
case 0x5b18b4:c.instructions+=4;goto B5b18b4;
case 0x5b18b6:c.instructions+=3;goto B5b18b6;
case 0x5b18b8:c.instructions+=2;goto B5b18b8;
case 0x5b18bc:c.instructions+=1;goto B5b18bc;
case 0x5b18be:goto L5b18be;
case 0x5b18c0:goto L5b18c0;
case 0x5b18c4:goto L5b18c4;
case 0x5b18c5:c.instructions+=1;goto B5b18c5;
case 0x5b18ca:goto L5b18ca;
case 0x5b18cc:c.instructions+=3;goto B5b18cc;
case 0x5b18cf:c.instructions+=2;goto B5b18cf;
case 0x5b18d1:c.instructions+=1;goto B5b18d1;
case 0x5b18d3:goto L5b18d3;
case 0x5b18da:c.instructions+=1;goto B5b18da;
case 0x5b18df:goto L5b18df;
case 0x5b18e1:c.instructions+=1;goto B5b18e1;
case 0x5b18e3:goto L5b18e3;
case 0x5b18e6:c.instructions+=1;goto B5b18e6;
case 0x5b18e8:goto L5b18e8;
case 0x5b18ea:goto L5b18ea;
case 0x5b18f0:c.instructions+=5;goto B5b18f0;
case 0x5b18f6:c.instructions+=4;goto B5b18f6;
case 0x5b18f8:c.instructions+=3;goto B5b18f8;
case 0x5b18fb:c.instructions+=2;goto B5b18fb;
case 0x5b18fe:c.instructions+=1;goto B5b18fe;
case 0x5b1900:goto L5b1900;
case 0x5b1904:c.instructions+=6;goto B5b1904;
case 0x5b190a:c.instructions+=5;goto B5b190a;
case 0x5b190c:c.instructions+=4;goto B5b190c;
case 0x5b1912:c.instructions+=3;goto B5b1912;
case 0x5b1914:c.instructions+=2;goto B5b1914;
case 0x5b1918:c.instructions+=1;goto B5b1918;
case 0x5b191a:goto L5b191a;
case 0x5b1920:c.instructions+=2;goto B5b1920;
case 0x5b1922:c.instructions+=1;goto B5b1922;
case 0x5b1924:goto L5b1924;
case 0x5b192a:c.instructions+=5;goto B5b192a;
case 0x5b1930:c.instructions+=4;goto B5b1930;
case 0x5b1935:c.instructions+=3;goto B5b1935;
case 0x5b1937:c.instructions+=2;goto B5b1937;
case 0x5b193b:c.instructions+=1;goto B5b193b;
case 0x5b193d:goto L5b193d;
case 0x5b193f:goto L5b193f;
case 0x5b1943:goto L5b1943;
case 0x5b1944:c.instructions+=1;goto B5b1944;
case 0x5b1949:goto L5b1949;
case 0x5b194b:c.instructions+=3;goto B5b194b;
case 0x5b194e:c.instructions+=2;goto B5b194e;
case 0x5b1950:c.instructions+=1;goto B5b1950;
case 0x5b1952:goto L5b1952;
case 0x5b1959:c.instructions+=2;goto B5b1959;
case 0x5b195f:c.instructions+=1;goto B5b195f;
case 0x5b1964:goto L5b1964;
case 0x5b1966:c.instructions+=1;goto B5b1966;
case 0x5b1968:goto L5b1968;
case 0x5b196b:c.instructions+=1;goto B5b196b;
case 0x5b196d:goto L5b196d;
case 0x5b196f:goto L5b196f;
case 0x5b1971:c.instructions+=5;goto B5b1971;
case 0x5b1973:c.instructions+=4;goto B5b1973;
case 0x5b1976:c.instructions+=3;goto B5b1976;
case 0x5b1979:c.instructions+=2;goto B5b1979;
case 0x5b197d:c.instructions+=1;goto B5b197d;
case 0x5b197f:goto L5b197f;
case 0x5b1985:c.instructions+=5;goto B5b1985;
case 0x5b1987:c.instructions+=4;goto B5b1987;
case 0x5b198c:c.instructions+=3;goto B5b198c;
case 0x5b198e:c.instructions+=2;goto B5b198e;
case 0x5b1992:c.instructions+=1;goto B5b1992;
case 0x5b1994:goto L5b1994;
case 0x5b199b:c.instructions+=7;goto B5b199b;
case 0x5b199c:c.instructions+=6;goto B5b199c;
case 0x5b199d:c.instructions+=5;goto B5b199d;
case 0x5b19a4:c.instructions+=4;goto B5b19a4;
case 0x5b19a5:c.instructions+=3;goto B5b19a5;
case 0x5b19a7:c.instructions+=2;goto B5b19a7;
case 0x5b19a8:c.instructions+=1;goto B5b19a8;
case 0x5b19b0:goto L5b19b0;
case 0x5b19b2:c.instructions+=16;goto B5b19b2;
case 0x5b19b7:c.instructions+=15;goto B5b19b7;
case 0x5b19bd:c.instructions+=14;goto B5b19bd;
case 0x5b19be:c.instructions+=13;goto B5b19be;
case 0x5b19c5:c.instructions+=12;goto B5b19c5;
case 0x5b19c8:c.instructions+=11;goto B5b19c8;
case 0x5b19c9:c.instructions+=10;goto B5b19c9;
case 0x5b19cb:c.instructions+=9;goto B5b19cb;
case 0x5b19cc:c.instructions+=8;goto B5b19cc;
case 0x5b19d0:c.instructions+=7;goto B5b19d0;
case 0x5b19d6:c.instructions+=6;goto B5b19d6;
case 0x5b19e0:c.instructions+=5;goto B5b19e0;
case 0x5b19e6:c.instructions+=4;goto B5b19e6;
case 0x5b19e9:c.instructions+=3;goto B5b19e9;
case 0x5b19eb:c.instructions+=2;goto B5b19eb;
case 0x5b19f3:c.instructions+=1;goto B5b19f3;
case 0x5b19f5:goto L5b19f5;
case 0x5b19f8:c.instructions+=2;goto B5b19f8;
case 0x5b19fa:c.instructions+=1;goto B5b19fa;
case 0x5b19fc:goto L5b19fc;
case 0x5b19fd:c.instructions+=1;goto B5b19fd;
case 0x5b1a02:goto L5b1a02;
case 0x5b1a05:goto L5b1a05;
case 0x5b1a0b:c.instructions+=2;goto B5b1a0b;
case 0x5b1a0d:c.instructions+=1;goto B5b1a0d;
case 0x5b1a0f:goto L5b1a0f;
case 0x5b1a10:c.instructions+=1;goto B5b1a10;
case 0x5b1a15:goto L5b1a15;
case 0x5b1a18:goto L5b1a18;
case 0x5b1a1e:c.instructions+=4;goto B5b1a1e;
case 0x5b1a1f:c.instructions+=3;goto B5b1a1f;
case 0x5b1a25:c.instructions+=2;goto B5b1a25;
case 0x5b1a27:c.instructions+=1;goto B5b1a27;
case 0x5b1a29:goto L5b1a29;
case 0x5b1a30:goto L5b1a30;
case 0x5b1a32:c.instructions+=7;goto B5b1a32;
case 0x5b1a34:c.instructions+=6;goto B5b1a34;
case 0x5b1a37:c.instructions+=5;goto B5b1a37;
case 0x5b1a3a:c.instructions+=4;goto B5b1a3a;
case 0x5b1a3c:c.instructions+=3;goto B5b1a3c;
case 0x5b1a3d:c.instructions+=2;goto B5b1a3d;
case 0x5b1a40:c.instructions+=1;goto B5b1a40;
case 0x5b1a45:goto L5b1a45;
case 0x5b1a4b:c.instructions+=3;goto B5b1a4b;
case 0x5b1a4e:c.instructions+=2;goto B5b1a4e;
case 0x5b1a50:c.instructions+=1;goto B5b1a50;
case 0x5b1a52:goto L5b1a52;
case 0x5b1a53:c.instructions+=2;goto B5b1a53;
case 0x5b1a58:c.instructions+=1;goto B5b1a58;
case 0x5b1a5d:goto L5b1a5d;
case 0x5b1a5f:c.instructions+=1;goto B5b1a5f;
case 0x5b1a61:goto L5b1a61;
case 0x5b1a62:c.instructions+=1;goto B5b1a62;
case 0x5b1a67:goto L5b1a67;
case 0x5b1a6d:c.instructions+=4;goto B5b1a6d;
case 0x5b1a6e:c.instructions+=3;goto B5b1a6e;
case 0x5b1a6f:c.instructions+=2;goto B5b1a6f;
case 0x5b1a75:c.instructions+=1;goto B5b1a75;
case 0x5b1a7a:goto L5b1a7a;
case 0x5b1a7d:goto L5b1a7d;
case 0x5b1a7f:c.instructions+=1;goto B5b1a7f;
case 0x5b1a81:goto L5b1a81;
case 0x5b1a87:c.instructions+=3;goto B5b1a87;
case 0x5b1a8d:c.instructions+=2;goto B5b1a8d;
case 0x5b1a8f:c.instructions+=1;goto B5b1a8f;
case 0x5b1a91:goto L5b1a91;
case 0x5b1a93:c.instructions+=7;goto B5b1a93;
case 0x5b1a95:c.instructions+=6;goto B5b1a95;
case 0x5b1a98:c.instructions+=5;goto B5b1a98;
case 0x5b1a9b:c.instructions+=4;goto B5b1a9b;
case 0x5b1a9d:c.instructions+=3;goto B5b1a9d;
case 0x5b1a9e:c.instructions+=2;goto B5b1a9e;
case 0x5b1aa1:c.instructions+=1;goto B5b1aa1;
case 0x5b1aa6:goto L5b1aa6;
case 0x5b1aac:c.instructions+=3;goto B5b1aac;
case 0x5b1aaf:c.instructions+=2;goto B5b1aaf;
case 0x5b1ab1:c.instructions+=1;goto B5b1ab1;
case 0x5b1ab3:goto L5b1ab3;
case 0x5b1ab4:c.instructions+=2;goto B5b1ab4;
case 0x5b1ab9:c.instructions+=1;goto B5b1ab9;
case 0x5b1abe:goto L5b1abe;
case 0x5b1ac0:c.instructions+=1;goto B5b1ac0;
case 0x5b1ac2:goto L5b1ac2;
case 0x5b1ac3:c.instructions+=1;goto B5b1ac3;
case 0x5b1ac8:goto L5b1ac8;
case 0x5b1ace:c.instructions+=4;goto B5b1ace;
case 0x5b1acf:c.instructions+=3;goto B5b1acf;
case 0x5b1ad0:c.instructions+=2;goto B5b1ad0;
case 0x5b1ad6:c.instructions+=1;goto B5b1ad6;
case 0x5b1adb:goto L5b1adb;
case 0x5b1ade:goto L5b1ade;
case 0x5b1ae0:c.instructions+=1;goto B5b1ae0;
case 0x5b1ae2:goto L5b1ae2;
case 0x5b1ae4:c.instructions+=4;goto B5b1ae4;
case 0x5b1ae6:c.instructions+=3;goto B5b1ae6;
case 0x5b1aeb:c.instructions+=2;goto B5b1aeb;
case 0x5b1aec:c.instructions+=1;goto B5b1aec;
case 0x5b1aee:goto L5b1aee;
case 0x5b1af0:goto L5b1af0;
case 0x5b1af2:c.instructions+=5;goto B5b1af2;
case 0x5b1af5:c.instructions+=4;goto B5b1af5;
case 0x5b1af7:c.instructions+=3;goto B5b1af7;
case 0x5b1af8:c.instructions+=2;goto B5b1af8;
case 0x5b1afb:c.instructions+=1;goto B5b1afb;
case 0x5b1b00:goto L5b1b00;
case 0x5b1b02:c.instructions+=3;goto B5b1b02;
case 0x5b1b05:c.instructions+=2;goto B5b1b05;
case 0x5b1b07:c.instructions+=1;goto B5b1b07;
case 0x5b1b09:goto L5b1b09;
case 0x5b1b0f:c.instructions+=4;goto B5b1b0f;
case 0x5b1b15:c.instructions+=3;goto B5b1b15;
case 0x5b1b17:c.instructions+=2;goto B5b1b17;
case 0x5b1b1c:c.instructions+=1;goto B5b1b1c;
case 0x5b1b1e:goto L5b1b1e;
case 0x5b1b20:goto L5b1b20;
case 0x5b1b22:c.instructions+=5;goto B5b1b22;
case 0x5b1b25:c.instructions+=4;goto B5b1b25;
case 0x5b1b27:c.instructions+=3;goto B5b1b27;
case 0x5b1b28:c.instructions+=2;goto B5b1b28;
case 0x5b1b2b:c.instructions+=1;goto B5b1b2b;
case 0x5b1b30:goto L5b1b30;
case 0x5b1b32:c.instructions+=3;goto B5b1b32;
case 0x5b1b35:c.instructions+=2;goto B5b1b35;
case 0x5b1b37:c.instructions+=1;goto B5b1b37;
case 0x5b1b39:goto L5b1b39;
case 0x5b1b3f:c.instructions+=2;goto B5b1b3f;
case 0x5b1b44:c.instructions+=1;goto B5b1b44;
case 0x5b1b49:goto L5b1b49;
case 0x5b1b4f:c.instructions+=2;goto B5b1b4f;
case 0x5b1b54:c.instructions+=1;goto B5b1b54;
case 0x5b1b59:goto L5b1b59;
case 0x5b1b5f:c.instructions+=2;goto B5b1b5f;
case 0x5b1b64:c.instructions+=1;goto B5b1b64;
case 0x5b1b69:goto L5b1b69;
case 0x5b1b6f:c.instructions+=6;goto B5b1b6f;
case 0x5b1b74:c.instructions+=5;goto B5b1b74;
case 0x5b1b75:c.instructions+=4;goto B5b1b75;
case 0x5b1b77:c.instructions+=3;goto B5b1b77;
case 0x5b1b7f:c.instructions+=2;goto B5b1b7f;
case 0x5b1b84:c.instructions+=1;goto B5b1b84;
case 0x5b1b89:goto L5b1b89;
case 0x5b1b8d:c.instructions+=5;goto B5b1b8d;
case 0x5b1b8e:c.instructions+=4;goto B5b1b8e;
case 0x5b1b8f:c.instructions+=3;goto B5b1b8f;
case 0x5b1b96:c.instructions+=2;goto B5b1b96;
case 0x5b1b99:c.instructions+=1;goto B5b1b99;
case 0x5b1ba0:goto L5b1ba0;
case 0x5b1ba3:c.instructions+=2;goto B5b1ba3;
case 0x5b1ba6:c.instructions+=1;goto B5b1ba6;
case 0x5b1bb0:goto L5b1bb0;
case 0x5b1bb3:c.instructions+=2;goto B5b1bb3;
case 0x5b1bb8:c.instructions+=1;goto B5b1bb8;
case 0x5b1bc0:goto L5b1bc0;
case 0x5b1bc3:c.instructions+=2;goto B5b1bc3;
case 0x5b1bc8:c.instructions+=1;goto B5b1bc8;
case 0x5b1bd0:goto L5b1bd0;
case 0x5b1bd3:c.instructions+=2;goto B5b1bd3;
case 0x5b1bd6:c.instructions+=1;goto B5b1bd6;
case 0x5b1be0:goto L5b1be0;
case 0x5b1be3:c.instructions+=2;goto B5b1be3;
case 0x5b1be8:c.instructions+=1;goto B5b1be8;
case 0x5b1bf0:goto L5b1bf0;
case 0x5b1bf3:c.instructions+=2;goto B5b1bf3;
case 0x5b1bf8:c.instructions+=1;goto B5b1bf8;
case 0x5b1c00:goto L5b1c00;
case 0x5b1c07:c.instructions+=1;goto B5b1c07;
case 0x5b1c10:goto L5b1c10;
case 0x5b1c16:c.instructions+=4;goto B5b1c16;
case 0x5b1c1c:c.instructions+=3;goto B5b1c1c;
case 0x5b1c1e:c.instructions+=2;goto B5b1c1e;
case 0x5b1c21:c.instructions+=1;goto B5b1c21;
case 0x5b1c23:goto L5b1c23;
case 0x5b1c26:c.instructions+=2;goto B5b1c26;
case 0x5b1c2c:c.instructions+=1;goto B5b1c2c;
case 0x5b1c2d:goto L5b1c2d;
case 0x5b1c33:c.instructions+=1;goto B5b1c33;
case 0x5b1c40:goto L5b1c40;
case 0x5b1c46:c.instructions+=4;goto B5b1c46;
case 0x5b1c4c:c.instructions+=3;goto B5b1c4c;
case 0x5b1c4e:c.instructions+=2;goto B5b1c4e;
case 0x5b1c51:c.instructions+=1;goto B5b1c51;
case 0x5b1c53:goto L5b1c53;
case 0x5b1c56:c.instructions+=3;goto B5b1c56;
case 0x5b1c5c:c.instructions+=2;goto B5b1c5c;
case 0x5b1c5e:c.instructions+=1;goto B5b1c5e;
case 0x5b1c60:goto L5b1c60;
case 0x5b1c65:c.instructions+=1;goto B5b1c65;
case 0x5b1c66:goto L5b1c66;
case 0x5b1c6b:c.instructions+=1;goto B5b1c6b;
case 0x5b1c6c:goto L5b1c6c;
case 0x5b1c71:c.instructions+=1;goto B5b1c71;
case 0x5b1c80:goto L5b1c80;
case 0x5b1c86:c.instructions+=4;goto B5b1c86;
case 0x5b1c8c:c.instructions+=3;goto B5b1c8c;
case 0x5b1c8e:c.instructions+=2;goto B5b1c8e;
case 0x5b1c91:c.instructions+=1;goto B5b1c91;
case 0x5b1c93:goto L5b1c93;
case 0x5b1c98:c.instructions+=1;goto B5b1c98;
case 0x5b1c99:goto L5b1c99;
case 0x5b1c9b:c.instructions+=1;goto B5b1c9b;
case 0x5b1ca0:goto L5b1ca0;
case 0x5b1ca6:c.instructions+=2;goto B5b1ca6;
case 0x5b1cac:c.instructions+=1;goto B5b1cac;
case 0x5b1cb0:goto L5b1cb0;
case 0x5b1cb6:c.instructions+=2;goto B5b1cb6;
case 0x5b1cbc:c.instructions+=1;goto B5b1cbc;
case 0x5b1cc0:goto L5b1cc0;
case 0x5b1cc6:c.instructions+=2;goto B5b1cc6;
case 0x5b1ccc:c.instructions+=1;goto B5b1ccc;
case 0x5b1cd0:goto L5b1cd0;
case 0x5b1cd6:c.instructions+=1;goto B5b1cd6;
case 0x5b1ce0:goto L5b1ce0;
case 0x5b1ce6:c.instructions+=2;goto B5b1ce6;
case 0x5b1ce8:c.instructions+=1;goto B5b1ce8;
case 0x5b1cea:goto L5b1cea;
case 0x5b1ced:c.instructions+=1;goto B5b1ced;
case 0x5b1cf2:goto L5b1cf2;
case 0x5b1d00:goto L5b1d00;
case 0x5b1d01:c.instructions+=7;goto B5b1d01;
case 0x5b1d05:c.instructions+=6;goto B5b1d05;
case 0x5b1d06:c.instructions+=5;goto B5b1d06;
case 0x5b1d08:c.instructions+=4;goto B5b1d08;
case 0x5b1d0d:c.instructions+=3;goto B5b1d0d;
case 0x5b1d0e:c.instructions+=2;goto B5b1d0e;
case 0x5b1d10:c.instructions+=1;goto B5b1d10;
case 0x5b1d15:goto L5b1d15;
case 0x5b1d16:c.instructions+=2;goto B5b1d16;
case 0x5b1d18:c.instructions+=1;goto B5b1d18;
case 0x5b1d1d:goto L5b1d1d;
case 0x5b1d23:c.instructions+=3;goto B5b1d23;
case 0x5b1d24:c.instructions+=2;goto B5b1d24;
case 0x5b1d26:c.instructions+=1;goto B5b1d26;
case 0x5b1d2b:goto L5b1d2b;
case 0x5b1d31:c.instructions+=3;goto B5b1d31;
case 0x5b1d32:c.instructions+=2;goto B5b1d32;
case 0x5b1d34:c.instructions+=1;goto B5b1d34;
case 0x5b1d39:goto L5b1d39;
case 0x5b1d3b:c.instructions+=6;goto B5b1d3b;
case 0x5b1d3d:c.instructions+=5;goto B5b1d3d;
case 0x5b1d3f:c.instructions+=4;goto B5b1d3f;
case 0x5b1d45:c.instructions+=3;goto B5b1d45;
case 0x5b1d46:c.instructions+=2;goto B5b1d46;
case 0x5b1d48:c.instructions+=1;goto B5b1d48;
case 0x5b1d4d:goto L5b1d4d;
case 0x5b1d53:c.instructions+=3;goto B5b1d53;
case 0x5b1d54:c.instructions+=2;goto B5b1d54;
case 0x5b1d56:c.instructions+=1;goto B5b1d56;
case 0x5b1d5b:goto L5b1d5b;
case 0x5b1d61:c.instructions+=3;goto B5b1d61;
case 0x5b1d62:c.instructions+=2;goto B5b1d62;
case 0x5b1d64:c.instructions+=1;goto B5b1d64;
case 0x5b1d69:goto L5b1d69;
case 0x5b1d6f:c.instructions+=3;goto B5b1d6f;
case 0x5b1d70:c.instructions+=2;goto B5b1d70;
case 0x5b1d72:c.instructions+=1;goto B5b1d72;
case 0x5b1d77:goto L5b1d77;
case 0x5b1d7d:c.instructions+=3;goto B5b1d7d;
case 0x5b1d7e:c.instructions+=2;goto B5b1d7e;
case 0x5b1d80:c.instructions+=1;goto B5b1d80;
case 0x5b1d85:goto L5b1d85;
case 0x5b1d8b:c.instructions+=3;goto B5b1d8b;
case 0x5b1d8c:c.instructions+=2;goto B5b1d8c;
case 0x5b1d8e:c.instructions+=1;goto B5b1d8e;
case 0x5b1d93:goto L5b1d93;
case 0x5b1d95:c.instructions+=6;goto B5b1d95;
case 0x5b1d97:c.instructions+=5;goto B5b1d97;
case 0x5b1d99:c.instructions+=4;goto B5b1d99;
case 0x5b1d9f:c.instructions+=3;goto B5b1d9f;
case 0x5b1da0:c.instructions+=2;goto B5b1da0;
case 0x5b1da2:c.instructions+=1;goto B5b1da2;
case 0x5b1da7:goto L5b1da7;
case 0x5b1daa:c.instructions+=2;goto B5b1daa;
case 0x5b1dab:c.instructions+=1;goto B5b1dab;
case 0x5b1db0:goto L5b1db0;
case 0x5b1db3:c.instructions+=2;goto B5b1db3;
case 0x5b1db6:c.instructions+=1;goto B5b1db6;
case 0x5b1db8:goto L5b1db8;
case 0x5b1dba:c.instructions+=1;goto B5b1dba;
case 0x5b1dbf:goto L5b1dbf;
case 0x5b1dc1:c.instructions+=1;goto B5b1dc1;
case 0x5b1dc6:goto L5b1dc6;
case 0x5b1dc7:c.instructions+=2;goto B5b1dc7;
case 0x5b1dc8:c.instructions+=1;goto B5b1dc8;
case 0x5b1dd0:goto L5b1dd0;
case 0x5b1dd1:c.instructions+=10;goto B5b1dd1;
case 0x5b1dd3:c.instructions+=9;goto B5b1dd3;
case 0x5b1dd6:c.instructions+=8;goto B5b1dd6;
case 0x5b1dd9:c.instructions+=7;goto B5b1dd9;
case 0x5b1ddc:c.instructions+=6;goto B5b1ddc;
case 0x5b1ddd:c.instructions+=5;goto B5b1ddd;
case 0x5b1dde:c.instructions+=4;goto B5b1dde;
case 0x5b1ddf:c.instructions+=3;goto B5b1ddf;
case 0x5b1de0:c.instructions+=2;goto B5b1de0;
case 0x5b1de2:c.instructions+=1;goto B5b1de2;
case 0x5b1de7:goto L5b1de7;
case 0x5b1ded:c.instructions+=2;goto B5b1ded;
case 0x5b1def:c.instructions+=1;goto B5b1def;
case 0x5b1df5:goto L5b1df5;
case 0x5b1df8:c.instructions+=1;goto B5b1df8;
case 0x5b1dfd:goto L5b1dfd;
case 0x5b1e00:c.instructions+=4;goto B5b1e00;
case 0x5b1e03:c.instructions+=3;goto B5b1e03;
case 0x5b1e0d:c.instructions+=2;goto B5b1e0d;
case 0x5b1e13:c.instructions+=1;goto B5b1e13;
case 0x5b1e18:goto L5b1e18;
case 0x5b1e19:c.instructions+=6;goto B5b1e19;
case 0x5b1e1b:c.instructions+=5;goto B5b1e1b;
case 0x5b1e1f:c.instructions+=4;goto B5b1e1f;
case 0x5b1e23:c.instructions+=3;goto B5b1e23;
case 0x5b1e26:c.instructions+=2;goto B5b1e26;
case 0x5b1e2a:c.instructions+=1;goto B5b1e2a;
case 0x5b1e30:goto L5b1e30;
case 0x5b1e36:c.instructions+=2;goto B5b1e36;
case 0x5b1e38:c.instructions+=1;goto B5b1e38;
case 0x5b1e40:goto L5b1e40;
case 0x5b1e46:c.instructions+=4;goto B5b1e46;
case 0x5b1e4c:c.instructions+=3;goto B5b1e4c;
case 0x5b1e4e:c.instructions+=2;goto B5b1e4e;
case 0x5b1e51:c.instructions+=1;goto B5b1e51;
case 0x5b1e57:goto L5b1e57;
case 0x5b1e5a:c.instructions+=37;goto B5b1e5a;
case 0x5b1e60:c.instructions+=36;goto B5b1e60;
case 0x5b1e66:c.instructions+=35;goto B5b1e66;
case 0x5b1e6c:c.instructions+=34;goto B5b1e6c;
case 0x5b1e70:c.instructions+=33;goto B5b1e70;
case 0x5b1e76:c.instructions+=32;goto B5b1e76;
case 0x5b1e7a:c.instructions+=31;goto B5b1e7a;
case 0x5b1e7c:c.instructions+=30;goto B5b1e7c;
case 0x5b1e7d:c.instructions+=29;goto B5b1e7d;
case 0x5b1e7f:c.instructions+=28;goto B5b1e7f;
case 0x5b1e83:c.instructions+=27;goto B5b1e83;
case 0x5b1e85:c.instructions+=26;goto B5b1e85;
case 0x5b1e86:c.instructions+=25;goto B5b1e86;
case 0x5b1e88:c.instructions+=24;goto B5b1e88;
case 0x5b1e8a:c.instructions+=23;goto B5b1e8a;
case 0x5b1e8c:c.instructions+=22;goto B5b1e8c;
case 0x5b1e8e:c.instructions+=21;goto B5b1e8e;
case 0x5b1e90:c.instructions+=20;goto B5b1e90;
case 0x5b1e92:c.instructions+=19;goto B5b1e92;
case 0x5b1e94:c.instructions+=18;goto B5b1e94;
case 0x5b1e96:c.instructions+=17;goto B5b1e96;
case 0x5b1e98:c.instructions+=16;goto B5b1e98;
case 0x5b1e9e:c.instructions+=15;goto B5b1e9e;
case 0x5b1ea0:c.instructions+=14;goto B5b1ea0;
case 0x5b1ea6:c.instructions+=13;goto B5b1ea6;
case 0x5b1ea8:c.instructions+=12;goto B5b1ea8;
case 0x5b1eae:c.instructions+=11;goto B5b1eae;
case 0x5b1eb6:c.instructions+=10;goto B5b1eb6;
case 0x5b1ebe:c.instructions+=9;goto B5b1ebe;
case 0x5b1ec6:c.instructions+=8;goto B5b1ec6;
case 0x5b1eca:c.instructions+=7;goto B5b1eca;
case 0x5b1ecc:c.instructions+=6;goto B5b1ecc;
case 0x5b1ed0:c.instructions+=5;goto B5b1ed0;
case 0x5b1ed4:c.instructions+=4;goto B5b1ed4;
case 0x5b1ed6:c.instructions+=3;goto B5b1ed6;
case 0x5b1eda:c.instructions+=2;goto B5b1eda;
case 0x5b1edc:c.instructions+=1;goto B5b1edc;
case 0x5b1ee1:goto L5b1ee1;
case 0x5b1ee5:c.instructions+=3;goto B5b1ee5;
case 0x5b1ee6:c.instructions+=2;goto B5b1ee6;
case 0x5b1ee8:c.instructions+=1;goto B5b1ee8;
case 0x5b1eed:goto L5b1eed;
case 0x5b1ef0:c.instructions+=4;goto B5b1ef0;
case 0x5b1ef3:c.instructions+=3;goto B5b1ef3;
case 0x5b1ef4:c.instructions+=2;goto B5b1ef4;
case 0x5b1ef5:c.instructions+=1;goto B5b1ef5;
case 0x5b1efa:goto L5b1efa;
case 0x5b1efd:c.instructions+=2;goto B5b1efd;
case 0x5b1efe:c.instructions+=1;goto B5b1efe;
case 0x5b1f04:goto L5b1f04;
case 0x5b1f06:c.instructions+=1;goto B5b1f06;
case 0x5b1f0b:goto L5b1f0b;
case 0x5b1f0d:c.instructions+=1;goto B5b1f0d;
case 0x5b1f12:goto L5b1f12;
case 0x5b1f15:c.instructions+=7;goto B5b1f15;
case 0x5b1f1b:c.instructions+=6;goto B5b1f1b;
case 0x5b1f1c:c.instructions+=5;goto B5b1f1c;
case 0x5b1f1f:c.instructions+=4;goto B5b1f1f;
case 0x5b1f23:c.instructions+=3;goto B5b1f23;
case 0x5b1f24:c.instructions+=2;goto B5b1f24;
case 0x5b1f25:c.instructions+=1;goto B5b1f25;
case 0x5b1f2a:goto L5b1f2a;
case 0x5b1f2e:c.instructions+=3;goto B5b1f2e;
case 0x5b1f2f:c.instructions+=2;goto B5b1f2f;
case 0x5b1f30:c.instructions+=1;goto B5b1f30;
case 0x5b1f35:goto L5b1f35;
case 0x5b1f38:c.instructions+=17;goto B5b1f38;
case 0x5b1f3c:c.instructions+=16;goto B5b1f3c;
case 0x5b1f3e:c.instructions+=15;goto B5b1f3e;
case 0x5b1f41:c.instructions+=14;goto B5b1f41;
case 0x5b1f44:c.instructions+=13;goto B5b1f44;
case 0x5b1f48:c.instructions+=12;goto B5b1f48;
case 0x5b1f4b:c.instructions+=11;goto B5b1f4b;
case 0x5b1f4d:c.instructions+=10;goto B5b1f4d;
case 0x5b1f51:c.instructions+=9;goto B5b1f51;
case 0x5b1f55:c.instructions+=8;goto B5b1f55;
case 0x5b1f57:c.instructions+=7;goto B5b1f57;
case 0x5b1f5f:c.instructions+=6;goto B5b1f5f;
case 0x5b1f63:c.instructions+=5;goto B5b1f63;
case 0x5b1f67:c.instructions+=4;goto B5b1f67;
case 0x5b1f6b:c.instructions+=3;goto B5b1f6b;
case 0x5b1f71:c.instructions+=2;goto B5b1f71;
case 0x5b1f75:c.instructions+=1;goto B5b1f75;
case 0x5b1f78:goto L5b1f78;
case 0x5b1f7a:c.instructions+=1;goto B5b1f7a;
case 0x5b1f7c:goto L5b1f7c;
case 0x5b1f83:c.instructions+=1;goto B5b1f83;
case 0x5b1f85:goto L5b1f85;
case 0x5b1f8f:c.instructions+=1;goto B5b1f8f;
case 0x5b1f91:goto L5b1f91;
case 0x5b1f97:c.instructions+=3;goto B5b1f97;
case 0x5b1f99:c.instructions+=2;goto B5b1f99;
case 0x5b1fa3:c.instructions+=1;goto B5b1fa3;
case 0x5b1fa5:goto L5b1fa5;
case 0x5b1fa9:c.instructions+=4;goto B5b1fa9;
case 0x5b1faa:c.instructions+=3;goto B5b1faa;
case 0x5b1fad:c.instructions+=2;goto B5b1fad;
case 0x5b1fae:c.instructions+=1;goto B5b1fae;
case 0x5b1fb3:goto L5b1fb3;
case 0x5b1fb9:c.instructions+=3;goto B5b1fb9;
case 0x5b1fbc:c.instructions+=2;goto B5b1fbc;
case 0x5b1fbe:c.instructions+=1;goto B5b1fbe;
case 0x5b1fc0:goto L5b1fc0;
case 0x5b1fc2:c.instructions+=1;goto B5b1fc2;
case 0x5b1fc7:goto L5b1fc7;
case 0x5b1fc9:goto L5b1fc9;
case 0x5b1fcd:c.instructions+=4;goto B5b1fcd;
case 0x5b1fce:c.instructions+=3;goto B5b1fce;
case 0x5b1fd4:c.instructions+=2;goto B5b1fd4;
case 0x5b1fd5:c.instructions+=1;goto B5b1fd5;
case 0x5b1fda:goto L5b1fda;
case 0x5b1fdd:goto L5b1fdd;
case 0x5b1fe0:c.instructions+=11;goto B5b1fe0;
case 0x5b1fe3:c.instructions+=10;goto B5b1fe3;
case 0x5b1fe6:c.instructions+=9;goto B5b1fe6;
case 0x5b1fe9:c.instructions+=8;goto B5b1fe9;
case 0x5b1fed:c.instructions+=7;goto B5b1fed;
case 0x5b1ff0:c.instructions+=6;goto B5b1ff0;
case 0x5b1ff4:c.instructions+=5;goto B5b1ff4;
case 0x5b1ff8:c.instructions+=4;goto B5b1ff8;
case 0x5b1ffc:c.instructions+=3;goto B5b1ffc;
case 0x5b1ffd:c.instructions+=2;goto B5b1ffd;
case 0x5b1fff:c.instructions+=1;goto B5b1fff;
default:missing_instruction(c.pc);}
B5b1000:L5b1000:{c.instructions+=4;NFSU2_TR(0x5b1000);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B5b1003:{NFSU2_TR(0x5b1003);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1005:{NFSU2_TR(0x5b1005);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1009:{NFSU2_TR(0x5b1009);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5b0f91u,5b0);}
}
B5b100b:L5b100b:{c.instructions+=8;NFSU2_TR(0x5b100b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5b100f:{NFSU2_TR(0x5b100f);
__builtin_memmove((R+0),gp(0x86b37c),4);
}
B5b1014:{NFSU2_TR(0x5b1014);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1015:{NFSU2_TR(0x5b1015);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5b1017:{NFSU2_TR(0x5b1017);
u8 U[4];
w4(U+0,u32(0x59e330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b101c:{NFSU2_TR(0x5b101c);
w4(R+4,u32(0x86b4c0ull));
}
B5b1021:{NFSU2_TR(0x5b1021);
__builtin_memmove(gp(0x86b37c),(R+0),4);
}
B5b1026:{NFSU2_TR(0x5b1026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b102bull));
TAIL_STATIC(0x43bee0u,43b);
}
B5b102b:L5b102b:{c.instructions+=4;NFSU2_TR(0x5b102b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b102f:{NFSU2_TR(0x5b102f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1030:{NFSU2_TR(0x5b1030);
w4(R+4,u32(0x883e70ull));
}
B5b1035:{NFSU2_TR(0x5b1035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b103aull));
TAIL_STATIC(0x5db680u,5db);
}
B5b103a:L5b103a:{c.instructions+=4;NFSU2_TR(0x5b103a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b103d:{NFSU2_TR(0x5b103d);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B5b1042:{NFSU2_TR(0x5b1042);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1044:{NFSU2_TR(0x5b1044);
if(r1(R+518)){{goto L5b105a;}}
}
B5b1046:L5b1046:{c.instructions+=3;NFSU2_TR(0x5b1046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1047:{NFSU2_TR(0x5b1047);
__builtin_memmove((R+4),(R+28),4);
}
B5b1049:{NFSU2_TR(0x5b1049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b104eull));
TAIL_STATIC(0x59e300u,59e);
}
B5b104e:L5b104e:{c.instructions+=7;NFSU2_TR(0x5b104e);
w4(R+0,u32(0x1ull));
}
B5b1053:{NFSU2_TR(0x5b1053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1054:{NFSU2_TR(0x5b1054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1055:{NFSU2_TR(0x5b1055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1056:{NFSU2_TR(0x5b1056);
__builtin_memmove((R+16),(R+20),4);
}
B5b1058:{NFSU2_TR(0x5b1058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b1059:{NFSU2_TR(0x5b1059);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b105a:L5b105a:{c.instructions+=3;NFSU2_TR(0x5b105a);
__builtin_memmove((R+0),gp(0x86b380),1);
}
B5b105f:{NFSU2_TR(0x5b105f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1061:{NFSU2_TR(0x5b1061);
if(r1(R+518)){{goto L5b106a;}}
}
B5b1063:L5b1063:{c.instructions+=2;NFSU2_TR(0x5b1063);
__builtin_memmove((R+4),(R+28),4);
}
B5b1065:{NFSU2_TR(0x5b1065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b106aull));
TAIL_STATIC(0x5b0c30u,5b0);
}
B5b106a:L5b106a:{c.instructions+=7;NFSU2_TR(0x5b106a);
w4(R+0,u32(0x1ull));
}
B5b106f:{NFSU2_TR(0x5b106f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1070:{NFSU2_TR(0x5b1070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1071:{NFSU2_TR(0x5b1071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1072:{NFSU2_TR(0x5b1072);
__builtin_memmove((R+16),(R+20),4);
}
B5b1074:{NFSU2_TR(0x5b1074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b1075:{NFSU2_TR(0x5b1075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1076:L5b1076:{c.instructions+=7;NFSU2_TR(0x5b1076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1077:{NFSU2_TR(0x5b1077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1078:{NFSU2_TR(0x5b1078);
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
B5b107a:{NFSU2_TR(0x5b107a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b107b:{NFSU2_TR(0x5b107b);
__builtin_memmove((R+16),(R+20),4);
}
B5b107d:{NFSU2_TR(0x5b107d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b107e:{NFSU2_TR(0x5b107e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1080:L5b1080:{c.instructions+=15;NFSU2_TR(0x5b1080);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1086:{NFSU2_TR(0x5b1086);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1088:{NFSU2_TR(0x5b1088);
u8 U[4];
w4(U+0,u32(0x778d0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b108d:{NFSU2_TR(0x5b108d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b108e:{NFSU2_TR(0x5b108e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1095:{NFSU2_TR(0x5b1095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5b1098:{NFSU2_TR(0x5b1098);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1099:{NFSU2_TR(0x5b1099);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b109a:{NFSU2_TR(0x5b109a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b109b:{NFSU2_TR(0x5b109b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b109c:{NFSU2_TR(0x5b109c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b10a0:{NFSU2_TR(0x5b10a0);
u8 U[4];
w4(U+0,u32(0x7a2668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10a5:{NFSU2_TR(0x5b10a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10a7:{NFSU2_TR(0x5b10a7);
__builtin_memmove((R+4),(R+28),4);
}
B5b10a9:{NFSU2_TR(0x5b10a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b10aeull));
TAIL_STATIC(0x578ce0u,578);
}
B5b10ae:L5b10ae:{c.instructions+=3;NFSU2_TR(0x5b10ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b10b1:{NFSU2_TR(0x5b10b1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b10b3:{NFSU2_TR(0x5b10b3);
if(r1(R+518)){{goto L5b10ba;}}
}
B5b10b5:L5b10b5:{c.instructions+=1;NFSU2_TR(0x5b10b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b10baull));
TAIL_STATIC(0x5ad310u,5ad);
}
B5b10ba:L5b10ba:{c.instructions+=4;NFSU2_TR(0x5b10ba);
u8 U[4];
w4(U+0,u32(0x7a2650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10bf:{NFSU2_TR(0x5b10bf);
u8 U[4];
w4(U+0,u32(0x7a2638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10c4:{NFSU2_TR(0x5b10c4);
__builtin_memmove((R+4),(R+28),4);
}
B5b10c6:{NFSU2_TR(0x5b10c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b10cbull));
TAIL_STATIC(0x402350u,402);
}
B5b10cb:L5b10cb:{c.instructions+=5;NFSU2_TR(0x5b10cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10cd:{NFSU2_TR(0x5b10cd);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10d2:{NFSU2_TR(0x5b10d2);
u8 U[4];
w4(U+0,u32(0x86ad78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b10d7:{NFSU2_TR(0x5b10d7);
__builtin_memmove((R+4),(R+28),4);
}
B5b10d9:{NFSU2_TR(0x5b10d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b10deull));
TAIL_STATIC(0x5785a0u,578);
}
B5b10de:L5b10de:{c.instructions+=3;NFSU2_TR(0x5b10de);
__builtin_memmove((R+20),gp(0x86b4c0),4);
}
B5b10e4:{NFSU2_TR(0x5b10e4);
w4(R+4,u32(0x86b4c0ull));
}
B5b10e9:{NFSU2_TR(0x5b10e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b10eeull));
TAIL_STATIC(0x502fd0u,502);
}
B5b10ee:L5b10ee:{c.instructions+=4;NFSU2_TR(0x5b10ee);
__builtin_memmove((R+4),(R+0),4);
}
B5b10f0:{NFSU2_TR(0x5b10f0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b10f2:{NFSU2_TR(0x5b10f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b10f6:{NFSU2_TR(0x5b10f6);
if(r1(R+518)){{goto L5b119f;}}
}
B5b10fc:L5b10fc:{c.instructions+=1;NFSU2_TR(0x5b10fc);
__builtin_memmove((R+16),(R+16),4);
}
B5b1100:L5b1100:{c.instructions+=4;NFSU2_TR(0x5b1100);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b1102:{NFSU2_TR(0x5b1102);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+0)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5b1106:{NFSU2_TR(0x5b1106);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b110a:{NFSU2_TR(0x5b110a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b1194;}}
}
B5b1110:L5b1110:{c.instructions+=1;NFSU2_TR(0x5b1110);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1113:L5b1113:{c.instructions+=11;NFSU2_TR(0x5b1113);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5b1117:{NFSU2_TR(0x5b1117);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5b1119:{NFSU2_TR(0x5b1119);
__builtin_memmove((R+4),(R+24),4);
}
B5b111b:{NFSU2_TR(0x5b111b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5b111e:{NFSU2_TR(0x5b111e);
w4(R+8,u32(0x1ull));
}
B5b1123:{NFSU2_TR(0x5b1123);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B5b1125:{NFSU2_TR(0x5b1125);
__builtin_memmove((R+4),(R+24),4);
}
B5b1127:{NFSU2_TR(0x5b1127);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B5b112a:{NFSU2_TR(0x5b112a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x86ad78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b1130:{NFSU2_TR(0x5b1130);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1132:{NFSU2_TR(0x5b1132);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b1180;}}
}
B5b1134:L5b1134:{c.instructions+=3;NFSU2_TR(0x5b1134);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b1137:{NFSU2_TR(0x5b1137);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1139:{NFSU2_TR(0x5b1139);
if(r1(R+518)){{goto L5b1174;}}
}
B5b113b:L5b113b:{c.instructions+=3;NFSU2_TR(0x5b113b);
__builtin_memmove((R+8),gp(0x86b370),4);
}
B5b1141:{NFSU2_TR(0x5b1141);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1142:{NFSU2_TR(0x5b1142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1147ull));
TAIL_STATIC(0x440e50u,440);
}
B5b1147:L5b1147:{c.instructions+=5;NFSU2_TR(0x5b1147);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b114a:{NFSU2_TR(0x5b114a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b114e:{NFSU2_TR(0x5b114e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1150:{NFSU2_TR(0x5b1150);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1158:{NFSU2_TR(0x5b1158);
if(r1(R+518)){{goto L5b1168;}}
}
B5b115a:L5b115a:{c.instructions+=5;NFSU2_TR(0x5b115a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b115b:{NFSU2_TR(0x5b115b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b115e:{NFSU2_TR(0x5b115e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b115f:{NFSU2_TR(0x5b115f);
__builtin_memmove((R+4),(R+0),4);
}
B5b1161:{NFSU2_TR(0x5b1161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1166ull));
TAIL_STATIC(0x5ad8f0u,5ad);
}
B5b1166:L5b1166:{c.instructions+=1;NFSU2_TR(0x5b1166);
{goto L5b116a;}
}
B5b1168:L5b1168:{c.instructions+=1;NFSU2_TR(0x5b1168);
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
B5b116a:L5b116a:{c.instructions+=2;NFSU2_TR(0x5b116a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1172:{NFSU2_TR(0x5b1172);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b1174:L5b1174:{c.instructions+=4;NFSU2_TR(0x5b1174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b1176:{NFSU2_TR(0x5b1176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b1178:{NFSU2_TR(0x5b1178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1179:{NFSU2_TR(0x5b1179);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b117cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b117c:L5b117c:{c.instructions+=1;NFSU2_TR(0x5b117c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1180:L5b1180:{c.instructions+=6;NFSU2_TR(0x5b1180);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5b1184:{NFSU2_TR(0x5b1184);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b1185:{NFSU2_TR(0x5b1185);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x70ull))));
}
B5b1188:{NFSU2_TR(0x5b1188);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b118a:{NFSU2_TR(0x5b118a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b118e:{NFSU2_TR(0x5b118e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1113u);}goto L5b1113;}}
}
B5b1190:L5b1190:{c.instructions+=1;NFSU2_TR(0x5b1190);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1194:L5b1194:{c.instructions+=3;NFSU2_TR(0x5b1194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5b1197:{NFSU2_TR(0x5b1197);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1199:{NFSU2_TR(0x5b1199);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1100u);}goto L5b1100;}}
}
B5b119f:L5b119f:{c.instructions+=4;NFSU2_TR(0x5b119f);
u8 U[4];
w4(U+0,u32(0x7a2620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11a4:{NFSU2_TR(0x5b11a4);
u8 U[4];
w4(U+0,u32(0x7a2638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11a9:{NFSU2_TR(0x5b11a9);
__builtin_memmove((R+4),(R+28),4);
}
B5b11ab:{NFSU2_TR(0x5b11ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b11b0ull));
TAIL_STATIC(0x402350u,402);
}
B5b11b0:L5b11b0:{c.instructions+=3;NFSU2_TR(0x5b11b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b11b3:{NFSU2_TR(0x5b11b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b11b5:{NFSU2_TR(0x5b11b5);
if(r1(R+518)){{goto L5b1257;}}
}
B5b11bb:L5b11bb:{c.instructions+=1;NFSU2_TR(0x5b11bb);
w4(R+12,u32(0xffffull));
}
B5b11c0:L5b11c0:{c.instructions+=4;NFSU2_TR(0x5b11c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b11c4:{NFSU2_TR(0x5b11c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11c5:{NFSU2_TR(0x5b11c5);
__builtin_memmove((R+4),(R+28),4);
}
B5b11c7:{NFSU2_TR(0x5b11c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b11ccull));
TAIL_STATIC(0x571710u,571);
}
B5b11cc:L5b11cc:{c.instructions+=2;NFSU2_TR(0x5b11cc);
u8 U[14];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5b11d1:{NFSU2_TR(0x5b11d1);
if(r1(R+518)){{goto L5b131d;}}
}
B5b11d7:L5b11d7:{c.instructions+=4;NFSU2_TR(0x5b11d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b11db:{NFSU2_TR(0x5b11db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11dc:{NFSU2_TR(0x5b11dc);
__builtin_memmove((R+4),(R+28),4);
}
B5b11de:{NFSU2_TR(0x5b11de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b11e3ull));
TAIL_STATIC(0x571770u,571);
}
B5b11e3:L5b11e3:{c.instructions+=4;NFSU2_TR(0x5b11e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b11e7:{NFSU2_TR(0x5b11e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11e8:{NFSU2_TR(0x5b11e8);
__builtin_memmove((R+4),(R+28),4);
}
B5b11ea:{NFSU2_TR(0x5b11ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b11efull));
TAIL_STATIC(0x571770u,571);
}
B5b11ef:L5b11ef:{c.instructions+=7;NFSU2_TR(0x5b11ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11f1:{NFSU2_TR(0x5b11f1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11f3:{NFSU2_TR(0x5b11f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11f5:{NFSU2_TR(0x5b11f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b11f9:{NFSU2_TR(0x5b11f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b11fa:{NFSU2_TR(0x5b11fa);
__builtin_memmove((R+4),(R+28),4);
}
B5b11fc:{NFSU2_TR(0x5b11fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1201ull));
TAIL_STATIC(0x571640u,571);
}
B5b1201:L5b1201:{c.instructions+=3;NFSU2_TR(0x5b1201);
__builtin_memmove((R+24),gp(0x86b5a8),4);
}
B5b1207:{NFSU2_TR(0x5b1207);
w4(R+4,u32(0x86b5a8ull));
}
B5b120c:{NFSU2_TR(0x5b120c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1211ull));
TAIL_STATIC(0x502fd0u,502);
}
B5b1211:L5b1211:{c.instructions+=2;NFSU2_TR(0x5b1211);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1213:{NFSU2_TR(0x5b1213);
if(r1(R+518)){{goto L5b122e;}}
}
B5b1215:L5b1215:{c.instructions+=2;NFSU2_TR(0x5b1215);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1219:{NFSU2_TR(0x5b1219);
__builtin_memmove((R+16),(R+16),4);
}
B5b1220:L5b1220:{c.instructions+=2;NFSU2_TR(0x5b1220);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5b1226:{NFSU2_TR(0x5b1226);
if(r1(R+518)){{goto L5b1230;}}
}
B5b1228:L5b1228:{c.instructions+=3;NFSU2_TR(0x5b1228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b122a:{NFSU2_TR(0x5b122a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b122c:{NFSU2_TR(0x5b122c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1220u);}goto L5b1220;}}
}
B5b122e:L5b122e:{c.instructions+=1;NFSU2_TR(0x5b122e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1230:L5b1230:{c.instructions+=7;NFSU2_TR(0x5b1230);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1234:{NFSU2_TR(0x5b1234);
u8 U[6];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5b1239:{NFSU2_TR(0x5b1239);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b123d:{NFSU2_TR(0x5b123d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b123e:{NFSU2_TR(0x5b123e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b123f:{NFSU2_TR(0x5b123f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1240:{NFSU2_TR(0x5b1240);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86af90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1247ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B5b1247:L5b1247:{c.instructions+=5;NFSU2_TR(0x5b1247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b1249:{NFSU2_TR(0x5b1249);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b124c:{NFSU2_TR(0x5b124c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b124d:{NFSU2_TR(0x5b124d);
__builtin_memmove((R+4),(R+0),4);
}
B5b124f:{NFSU2_TR(0x5b124f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1252ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b1252:L5b1252:{c.instructions+=1;NFSU2_TR(0x5b1252);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b11c0u);}goto L5b11c0;}
}
B5b1257:L5b1257:{c.instructions+=3;NFSU2_TR(0x5b1257);
__builtin_memmove((R+24),gp(0x86b4c8),4);
}
B5b125d:{NFSU2_TR(0x5b125d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b125f:{NFSU2_TR(0x5b125f);
if(r1(R+518)){{goto L5b1266;}}
}
B5b1261:L5b1261:{c.instructions+=2;NFSU2_TR(0x5b1261);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5b1264:{NFSU2_TR(0x5b1264);
{goto L5b1268;}
}
B5b1266:L5b1266:{c.instructions+=1;NFSU2_TR(0x5b1266);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b1268:L5b1268:{c.instructions+=2;NFSU2_TR(0x5b1268);
w4(R+4,u32(0x86b4c8ull));
}
B5b126d:{NFSU2_TR(0x5b126d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1272ull));
TAIL_STATIC(0x431780u,431);
}
B5b1272:L5b1272:{c.instructions+=3;NFSU2_TR(0x5b1272);
__builtin_memmove((R+20),(R+0),4);
}
B5b1274:{NFSU2_TR(0x5b1274);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1276:{NFSU2_TR(0x5b1276);
if(r1(R+518)){{goto L5b1309;}}
}
B5b127c:L5b127c:{c.instructions+=1;NFSU2_TR(0x5b127c);
__builtin_memmove((R+16),(R+16),4);
}
B5b1280:L5b1280:{c.instructions+=2;NFSU2_TR(0x5b1280);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b1284:{NFSU2_TR(0x5b1284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b12f3;}}
}
B5b1286:L5b1286:{c.instructions+=6;NFSU2_TR(0x5b1286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b128c:{NFSU2_TR(0x5b128c);
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
B5b128e:{NFSU2_TR(0x5b128e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5b1292:{NFSU2_TR(0x5b1292);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1298:{NFSU2_TR(0x5b1298);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b129c:{NFSU2_TR(0x5b129c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12a1ull));
TAIL_STATIC(0x611000u,611);
}
B5b12a1:L5b12a1:{c.instructions+=4;NFSU2_TR(0x5b12a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b12a3:{NFSU2_TR(0x5b12a3);
__builtin_memmove((R+4),(R+24),4);
}
B5b12a5:{NFSU2_TR(0x5b12a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b12a9:{NFSU2_TR(0x5b12a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b12af:L5b12af:{c.instructions+=5;NFSU2_TR(0x5b12af);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b12b3:{NFSU2_TR(0x5b12b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b12b7:{NFSU2_TR(0x5b12b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12b8:{NFSU2_TR(0x5b12b8);
__builtin_memmove((R+4),(R+28),4);
}
B5b12ba:{NFSU2_TR(0x5b12ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12bfull));
TAIL_STATIC(0x571710u,571);
}
B5b12bf:L5b12bf:{c.instructions+=4;NFSU2_TR(0x5b12bf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x80ull))));
}
B5b12c5:{NFSU2_TR(0x5b12c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12c6:{NFSU2_TR(0x5b12c6);
__builtin_memmove((R+4),(R+28),4);
}
B5b12c8:{NFSU2_TR(0x5b12c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12cdull));
TAIL_STATIC(0x571770u,571);
}
B5b12cd:L5b12cd:{c.instructions+=4;NFSU2_TR(0x5b12cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b12d1:{NFSU2_TR(0x5b12d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12d2:{NFSU2_TR(0x5b12d2);
__builtin_memmove((R+4),(R+28),4);
}
B5b12d4:{NFSU2_TR(0x5b12d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12d9ull));
TAIL_STATIC(0x571770u,571);
}
B5b12d9:L5b12d9:{c.instructions+=7;NFSU2_TR(0x5b12d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12db:{NFSU2_TR(0x5b12db);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12dd:{NFSU2_TR(0x5b12dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12df:{NFSU2_TR(0x5b12df);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b12e3:{NFSU2_TR(0x5b12e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12e4:{NFSU2_TR(0x5b12e4);
__builtin_memmove((R+4),(R+28),4);
}
B5b12e6:{NFSU2_TR(0x5b12e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12ebull));
TAIL_STATIC(0x571640u,571);
}
B5b12eb:L5b12eb:{c.instructions+=4;NFSU2_TR(0x5b12eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b12ed:{NFSU2_TR(0x5b12ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b12ee:{NFSU2_TR(0x5b12ee);
__builtin_memmove((R+4),(R+24),4);
}
B5b12f0:{NFSU2_TR(0x5b12f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b12f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b12f3:L5b12f3:{c.instructions+=3;NFSU2_TR(0x5b12f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b12f6:{NFSU2_TR(0x5b12f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b12f8:{NFSU2_TR(0x5b12f8);
if(r1(R+518)){{goto L5b12ff;}}
}
B5b12fa:L5b12fa:{c.instructions+=2;NFSU2_TR(0x5b12fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5b12fd:{NFSU2_TR(0x5b12fd);
{goto L5b1301;}
}
B5b12ff:L5b12ff:{c.instructions+=1;NFSU2_TR(0x5b12ff);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b1301:L5b1301:{c.instructions+=2;NFSU2_TR(0x5b1301);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1303:{NFSU2_TR(0x5b1303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1280u);}goto L5b1280;}}
}
B5b1309:L5b1309:{c.instructions+=5;NFSU2_TR(0x5b1309);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b130d:{NFSU2_TR(0x5b130d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b130e:{NFSU2_TR(0x5b130e);
__builtin_memmove((R+4),(R+28),4);
}
B5b1310:{NFSU2_TR(0x5b1310);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1318:{NFSU2_TR(0x5b1318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b131dull));
TAIL_STATIC(0x571710u,571);
}
B5b131d:L5b131d:{c.instructions+=4;NFSU2_TR(0x5b131d);
u8 U[4];
w4(U+0,u32(0x7a260cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1322:{NFSU2_TR(0x5b1322);
u8 U[4];
w4(U+0,u32(0x7a2638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1327:{NFSU2_TR(0x5b1327);
__builtin_memmove((R+4),(R+28),4);
}
B5b1329:{NFSU2_TR(0x5b1329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b132eull));
TAIL_STATIC(0x402350u,402);
}
B5b132e:L5b132e:{c.instructions+=3;NFSU2_TR(0x5b132e);
u8 U[4];
w4(U+0,u32(0x86b378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1333:{NFSU2_TR(0x5b1333);
__builtin_memmove((R+4),(R+28),4);
}
B5b1335:{NFSU2_TR(0x5b1335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b133aull));
TAIL_STATIC(0x571770u,571);
}
B5b133a:L5b133a:{c.instructions+=2;NFSU2_TR(0x5b133a);
__builtin_memmove((R+4),(R+28),4);
}
B5b133c:{NFSU2_TR(0x5b133c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1341ull));
TAIL_STATIC(0x578d90u,578);
}
B5b1341:L5b1341:{c.instructions+=8;NFSU2_TR(0x5b1341);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1345:{NFSU2_TR(0x5b1345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1346:{NFSU2_TR(0x5b1346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1347:{NFSU2_TR(0x5b1347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b1348:{NFSU2_TR(0x5b1348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1349:{NFSU2_TR(0x5b1349);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1350:{NFSU2_TR(0x5b1350);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1353:{NFSU2_TR(0x5b1353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1360:L5b1360:{c.instructions+=3;NFSU2_TR(0x5b1360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1361:{NFSU2_TR(0x5b1361);
__builtin_memmove((R+24),(R+4),4);
}
B5b1363:{NFSU2_TR(0x5b1363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1368ull));
TAIL_STATIC(0x5ada90u,5ad);
}
B5b1368:L5b1368:{c.instructions+=2;NFSU2_TR(0x5b1368);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b136d:{NFSU2_TR(0x5b136d);
if(r1(R+518)){{goto L5b137e;}}
}
B5b136f:L5b136f:{c.instructions+=4;NFSU2_TR(0x5b136f);
__builtin_memmove((R+0),gp(0x86b370),4);
}
B5b1374:{NFSU2_TR(0x5b1374);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1375:{NFSU2_TR(0x5b1375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1376:{NFSU2_TR(0x5b1376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b137bull));
TAIL_STATIC(0x43f920u,43f);
}
B5b137b:L5b137b:{c.instructions+=1;NFSU2_TR(0x5b137b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b137e:L5b137e:{c.instructions+=3;NFSU2_TR(0x5b137e);
__builtin_memmove((R+0),(R+24),4);
}
B5b1380:{NFSU2_TR(0x5b1380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1381:{NFSU2_TR(0x5b1381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1390:L5b1390:{c.instructions+=15;NFSU2_TR(0x5b1390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1391:{NFSU2_TR(0x5b1391);
__builtin_memmove((R+20),(R+16),4);
}
B5b1393:{NFSU2_TR(0x5b1393);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b1396:{NFSU2_TR(0x5b1396);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1398:{NFSU2_TR(0x5b1398);
u8 U[4];
w4(U+0,u32(0x778efbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b139d:{NFSU2_TR(0x5b139d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b13a3:{NFSU2_TR(0x5b13a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b13a4:{NFSU2_TR(0x5b13a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b13ab:{NFSU2_TR(0x5b13ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x39cull))));
}
B5b13b1:{NFSU2_TR(0x5b13b1);
__builtin_memmove((R+0),gp(0x86b374),4);
}
B5b13b6:{NFSU2_TR(0x5b13b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b13b7:{NFSU2_TR(0x5b13b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b13b8:{NFSU2_TR(0x5b13b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b13b9:{NFSU2_TR(0x5b13b9);
__builtin_memmove((R+28),(R+4),4);
}
B5b13bb:{NFSU2_TR(0x5b13bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b13c0ull));
TAIL_STATIC(0x43cd10u,43c);
}
B5b13c0:L5b13c0:{c.instructions+=3;NFSU2_TR(0x5b13c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b13c3:{NFSU2_TR(0x5b13c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b13c5:{NFSU2_TR(0x5b13c5);
if(r1(R+518)){{goto L5b13dd;}}
}
B5b13c7:L5b13c7:{c.instructions+=8;NFSU2_TR(0x5b13c7);
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
B5b13c9:{NFSU2_TR(0x5b13c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b13d0:{NFSU2_TR(0x5b13d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b13d7:{NFSU2_TR(0x5b13d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b13d8:{NFSU2_TR(0x5b13d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b13d9:{NFSU2_TR(0x5b13d9);
__builtin_memmove((R+16),(R+20),4);
}
B5b13db:{NFSU2_TR(0x5b13db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b13dc:{NFSU2_TR(0x5b13dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b13dd:L5b13dd:{c.instructions+=6;NFSU2_TR(0x5b13dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b13e0:{NFSU2_TR(0x5b13e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b13e3:{NFSU2_TR(0x5b13e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b13e4:{NFSU2_TR(0x5b13e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b13e8:{NFSU2_TR(0x5b13e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b13e9:{NFSU2_TR(0x5b13e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b13eeull));
TAIL_STATIC(0x4012b0u,401);
}
B5b13ee:L5b13ee:{c.instructions+=9;NFSU2_TR(0x5b13ee);
__builtin_memmove((R+8),gp(0x86b2bc),4);
}
B5b13f4:{NFSU2_TR(0x5b13f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b13f7:{NFSU2_TR(0x5b13f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5b13fb:{NFSU2_TR(0x5b13fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b13fe:{NFSU2_TR(0x5b13fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1401:{NFSU2_TR(0x5b1401);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1402:{NFSU2_TR(0x5b1402);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1403:{NFSU2_TR(0x5b1403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1404:{NFSU2_TR(0x5b1404);
u8 U[4];
__builtin_memmove((U+0),gp(0x86af90),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b140aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5b140a:L5b140a:{c.instructions+=5;NFSU2_TR(0x5b140a);
__builtin_memmove((R+24),(R+0),4);
}
B5b140c:{NFSU2_TR(0x5b140c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b140e:{NFSU2_TR(0x5b140e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1411:{NFSU2_TR(0x5b1411);
__builtin_memmove((R+4),(R+24),4);
}
B5b1413:{NFSU2_TR(0x5b1413);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1419ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b1419:L5b1419:{c.instructions+=2;NFSU2_TR(0x5b1419);
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
B5b141b:{NFSU2_TR(0x5b141b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b14e8;}}
}
B5b1421:L5b1421:{c.instructions+=2;NFSU2_TR(0x5b1421);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1428:{NFSU2_TR(0x5b1428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b142dull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B5b142d:L5b142d:{c.instructions+=6;NFSU2_TR(0x5b142d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b142f:{NFSU2_TR(0x5b142f);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1433:{NFSU2_TR(0x5b1433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1434:{NFSU2_TR(0x5b1434);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b143b:{NFSU2_TR(0x5b143b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1446:{NFSU2_TR(0x5b1446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b144bull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B5b144b:L5b144b:{c.instructions+=3;NFSU2_TR(0x5b144b);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1452:{NFSU2_TR(0x5b1452);
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
B5b1454:{NFSU2_TR(0x5b1454);
if(r1(R+518)){{goto L5b14d1;}}
}
B5b1456:L5b1456:{c.instructions+=9;NFSU2_TR(0x5b1456);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b145a:{NFSU2_TR(0x5b145a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b145b:{NFSU2_TR(0x5b145b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b145f:{NFSU2_TR(0x5b145f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1460:{NFSU2_TR(0x5b1460);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1462:{NFSU2_TR(0x5b1462);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1466:{NFSU2_TR(0x5b1466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1467:{NFSU2_TR(0x5b1467);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b146e:{NFSU2_TR(0x5b146e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1473ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5b1473:L5b1473:{c.instructions+=4;NFSU2_TR(0x5b1473);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1477:{NFSU2_TR(0x5b1477);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b147b:{NFSU2_TR(0x5b147b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b147d:{NFSU2_TR(0x5b147d);
if(r1(R+518)){{goto L5b14d1;}}
}
B5b147f:L5b147f:{c.instructions+=6;NFSU2_TR(0x5b147f);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1483:{NFSU2_TR(0x5b1483);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1484:{NFSU2_TR(0x5b1484);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1488:{NFSU2_TR(0x5b1488);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1489:{NFSU2_TR(0x5b1489);
__builtin_memmove((R+4),(R+24),4);
}
B5b148b:{NFSU2_TR(0x5b148b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1490ull));
TAIL_STATIC(0x592a10u,592);
}
B5b1490:L5b1490:{c.instructions+=11;NFSU2_TR(0x5b1490);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1494:{NFSU2_TR(0x5b1494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b149a:{NFSU2_TR(0x5b149a);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b14a0:{NFSU2_TR(0x5b14a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b14a4:{NFSU2_TR(0x5b14a4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b14a8:{NFSU2_TR(0x5b14a8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b14ac:{NFSU2_TR(0x5b14ac);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b14b2:{NFSU2_TR(0x5b14b2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b14b8:{NFSU2_TR(0x5b14b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b14ba:{NFSU2_TR(0x5b14ba);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b14bd:{NFSU2_TR(0x5b14bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b14cf;}}
}
B5b14bf:L5b14bf:{c.instructions+=4;NFSU2_TR(0x5b14bf);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b14c5:{NFSU2_TR(0x5b14c5);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b14c9:{NFSU2_TR(0x5b14c9);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b14cd:{NFSU2_TR(0x5b14cd);
{goto L5b14d1;}
}
B5b14cf:L5b14cf:{c.instructions+=1;NFSU2_TR(0x5b14cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b14d1:L5b14d1:{c.instructions+=3;NFSU2_TR(0x5b14d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b14d8:{NFSU2_TR(0x5b14d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3acull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b14e3:{NFSU2_TR(0x5b14e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b14e8ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5b14e8:L5b14e8:{c.instructions+=3;NFSU2_TR(0x5b14e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b14eb:{NFSU2_TR(0x5b14eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b14ec:{NFSU2_TR(0x5b14ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b14f1ull));
TAIL_STATIC(0x5a8b70u,5a8);
}
B5b14f1:L5b14f1:{c.instructions+=9;NFSU2_TR(0x5b14f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b14f4:{NFSU2_TR(0x5b14f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b14f6:{NFSU2_TR(0x5b14f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b14f8:{NFSU2_TR(0x5b14f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b14fc:{NFSU2_TR(0x5b14fc);
__builtin_memmove((R+28),(R+0),4);
}
B5b14fe:{NFSU2_TR(0x5b14fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b14ff:{NFSU2_TR(0x5b14ff);
__builtin_memmove((R+4),(R+24),4);
}
B5b1501:{NFSU2_TR(0x5b1501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1507:{NFSU2_TR(0x5b1507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b150cull));
TAIL_STATIC(0x5adb20u,5ad);
}
B5b150c:L5b150c:{c.instructions+=18;NFSU2_TR(0x5b150c);
__builtin_memmove((R+8),(R+28),4);
}
B5b150e:{NFSU2_TR(0x5b150e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5b1511:{NFSU2_TR(0x5b1511);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x86ad78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1517:{NFSU2_TR(0x5b1517);
__builtin_memmove((R+4),(R+28),4);
}
B5b1519:{NFSU2_TR(0x5b1519);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5b151c:{NFSU2_TR(0x5b151c);
w1(R+8,u8(0x1ull));
}
B5b151e:{NFSU2_TR(0x5b151e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5b1520:{NFSU2_TR(0x5b1520);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5b1522:{NFSU2_TR(0x5b1522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1523:{NFSU2_TR(0x5b1523);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+8))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1525:{NFSU2_TR(0x5b1525);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5b1527:{NFSU2_TR(0x5b1527);
u8 U[8];
w4(U+0,u32(u32(u32(0x3a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b152e:{NFSU2_TR(0x5b152e);
__builtin_memmove((R+0),(R+24),4);
}
B5b1530:{NFSU2_TR(0x5b1530);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1537:{NFSU2_TR(0x5b1537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1538:{NFSU2_TR(0x5b1538);
__builtin_memmove((R+16),(R+20),4);
}
B5b153a:{NFSU2_TR(0x5b153a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b153b:{NFSU2_TR(0x5b153b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1540:L5b1540:{c.instructions+=19;NFSU2_TR(0x5b1540);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1541:{NFSU2_TR(0x5b1541);
__builtin_memmove((R+20),(R+16),4);
}
B5b1543:{NFSU2_TR(0x5b1543);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b1546:{NFSU2_TR(0x5b1546);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1548:{NFSU2_TR(0x5b1548);
u8 U[4];
w4(U+0,u32(0x778f1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b154d:{NFSU2_TR(0x5b154d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1553:{NFSU2_TR(0x5b1553);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1554:{NFSU2_TR(0x5b1554);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b155b:{NFSU2_TR(0x5b155b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x98ull))));
}
B5b1561:{NFSU2_TR(0x5b1561);
__builtin_memmove((R+0),gp(0x86b26c),4);
}
B5b1566:{NFSU2_TR(0x5b1566);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1567:{NFSU2_TR(0x5b1567);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1568:{NFSU2_TR(0x5b1568);
__builtin_memmove((R+24),(R+4),4);
}
B5b156a:{NFSU2_TR(0x5b156a);
__builtin_memmove((R+4),gp(0x86b294),4);
}
B5b1570:{NFSU2_TR(0x5b1570);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b1571:{NFSU2_TR(0x5b1571);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1573:{NFSU2_TR(0x5b1573);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1574:{NFSU2_TR(0x5b1574);
__builtin_memmove(gp(0x86b26c),(R+0),4);
}
B5b1579:{NFSU2_TR(0x5b1579);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b1580;}}
}
B5b157b:L5b157b:{c.instructions+=1;NFSU2_TR(0x5b157b);
__builtin_memmove(gp(0x86b294),(R+0),4);
}
B5b1580:L5b1580:{c.instructions+=4;NFSU2_TR(0x5b1580);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1586:{NFSU2_TR(0x5b1586);
u8 U[4];
w4(U+0,u32(0x7a2684ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b158b:{NFSU2_TR(0x5b158b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b158c:{NFSU2_TR(0x5b158c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1591ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b1591:L5b1591:{c.instructions+=3;NFSU2_TR(0x5b1591);
__builtin_memmove((R+4),gp(0x86b2e0),4);
}
B5b1597:{NFSU2_TR(0x5b1597);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1598:{NFSU2_TR(0x5b1598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b159dull));
TAIL_STATIC(0x440e50u,440);
}
B5b159d:L5b159d:{c.instructions+=6;NFSU2_TR(0x5b159d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b15a0:{NFSU2_TR(0x5b15a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b15a4:{NFSU2_TR(0x5b15a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b15a6:{NFSU2_TR(0x5b15a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b15a9:{NFSU2_TR(0x5b15a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b15b4:{NFSU2_TR(0x5b15b4);
if(r1(R+518)){{goto L5b15c3;}}
}
B5b15b6:L5b15b6:{c.instructions+=4;NFSU2_TR(0x5b15b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b15b9:{NFSU2_TR(0x5b15b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b15ba:{NFSU2_TR(0x5b15ba);
__builtin_memmove((R+4),(R+0),4);
}
B5b15bc:{NFSU2_TR(0x5b15bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b15c1ull));
TAIL_STATIC(0x5a7f30u,5a7);
}
B5b15c1:L5b15c1:{c.instructions+=1;NFSU2_TR(0x5b15c1);
{goto L5b15c5;}
}
B5b15c3:L5b15c3:{c.instructions+=1;NFSU2_TR(0x5b15c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b15c5:L5b15c5:{c.instructions+=27;NFSU2_TR(0x5b15c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b15c8:{NFSU2_TR(0x5b15c8);
{u32 ea_=u32(r4(R+28)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b15ce:{NFSU2_TR(0x5b15ce);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b15d4:{NFSU2_TR(0x5b15d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b15da:{NFSU2_TR(0x5b15da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b15e0:{NFSU2_TR(0x5b15e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b15e2:{NFSU2_TR(0x5b15e2);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b15e8:{NFSU2_TR(0x5b15e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b15ee:{NFSU2_TR(0x5b15ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b15f2:{NFSU2_TR(0x5b15f2);
{u32 ea_=u32(r4(R+0)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b15f8:{NFSU2_TR(0x5b15f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b15fa:{NFSU2_TR(0x5b15fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x508ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1600:{NFSU2_TR(0x5b1600);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b1606:{NFSU2_TR(0x5b1606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1609:{NFSU2_TR(0x5b1609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1610:{NFSU2_TR(0x5b1610);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1614:{NFSU2_TR(0x5b1614);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1618:{NFSU2_TR(0x5b1618);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5b161e:{NFSU2_TR(0x5b161e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1624:{NFSU2_TR(0x5b1624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b162a:{NFSU2_TR(0x5b162a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1630:{NFSU2_TR(0x5b1630);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1633:{NFSU2_TR(0x5b1633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1634:{NFSU2_TR(0x5b1634);
u8 U[4];
w4(U+0,u32(0x7a2678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1639:{NFSU2_TR(0x5b1639);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b163a:{NFSU2_TR(0x5b163a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1645:{NFSU2_TR(0x5b1645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b164aull));
TAIL_STATIC(0x4400d0u,440);
}
B5b164a:L5b164a:{c.instructions+=6;NFSU2_TR(0x5b164a);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b164c:{NFSU2_TR(0x5b164c);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1653:{NFSU2_TR(0x5b1653);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1654:{NFSU2_TR(0x5b1654);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1657:{NFSU2_TR(0x5b1657);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1658:{NFSU2_TR(0x5b1658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b165dull));
TAIL_STATIC(0x43dc00u,43d);
}
B5b165d:L5b165d:{c.instructions+=9;NFSU2_TR(0x5b165d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1660:{NFSU2_TR(0x5b1660);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1f0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1666:{NFSU2_TR(0x5b1666);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x57ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b166a:{NFSU2_TR(0x5b166a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b166e:{NFSU2_TR(0x5b166e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1678:{NFSU2_TR(0x5b1678);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b167e:{NFSU2_TR(0x5b167e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b167f:{NFSU2_TR(0x5b167f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1680:{NFSU2_TR(0x5b1680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1685ull));
TAIL_STATIC(0x5a18c0u,5a1);
}
B5b1685:L5b1685:{c.instructions+=3;NFSU2_TR(0x5b1685);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5b1688:{NFSU2_TR(0x5b1688);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b168a:{NFSU2_TR(0x5b168a);
if(r1(R+518)){{goto L5b172d;}}
}
B5b1690:L5b1690:{c.instructions+=7;NFSU2_TR(0x5b1690);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1694:{NFSU2_TR(0x5b1694);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1695:{NFSU2_TR(0x5b1695);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1699:{NFSU2_TR(0x5b1699);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b169a:{NFSU2_TR(0x5b169a);
__builtin_memmove((R+4),(R+0),4);
}
B5b169c:{NFSU2_TR(0x5b169c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b169f:{NFSU2_TR(0x5b169f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b16a4ull));
TAIL_STATIC(0x5a19f0u,5a1);
}
B5b16a4:L5b16a4:{c.instructions+=2;NFSU2_TR(0x5b16a4);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b16a6:{NFSU2_TR(0x5b16a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b16abull));
TAIL_STATIC(0x575620u,575);
}
B5b16ab:L5b16ab:{c.instructions+=3;NFSU2_TR(0x5b16ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b16ae:{NFSU2_TR(0x5b16ae);
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
B5b16b0:{NFSU2_TR(0x5b16b0);
if(r1(R+518)){{goto L5b1720;}}
}
B5b16b2:L5b16b2:{c.instructions+=28;NFSU2_TR(0x5b16b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b16b6:{NFSU2_TR(0x5b16b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b16ba:{NFSU2_TR(0x5b16ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b16be:{NFSU2_TR(0x5b16be);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b16c2:{NFSU2_TR(0x5b16c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b16c6:{NFSU2_TR(0x5b16c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b16ca:{NFSU2_TR(0x5b16ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b16ce:{NFSU2_TR(0x5b16ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b16d2:{NFSU2_TR(0x5b16d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b16d6:{NFSU2_TR(0x5b16d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b16da:{NFSU2_TR(0x5b16da);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b16de:{NFSU2_TR(0x5b16de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b16e2:{NFSU2_TR(0x5b16e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b16e3:{NFSU2_TR(0x5b16e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b16e7:{NFSU2_TR(0x5b16e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b16eb:{NFSU2_TR(0x5b16eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b16ef:{NFSU2_TR(0x5b16ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b16f0:{NFSU2_TR(0x5b16f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b16f4:{NFSU2_TR(0x5b16f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b16f5:{NFSU2_TR(0x5b16f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b16f9:{NFSU2_TR(0x5b16f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b16fa:{NFSU2_TR(0x5b16fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b16fe:{NFSU2_TR(0x5b16fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b16ff:{NFSU2_TR(0x5b16ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1700:{NFSU2_TR(0x5b1700);
__builtin_memmove((R+4),(R+0),4);
}
B5b1702:{NFSU2_TR(0x5b1702);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1709:{NFSU2_TR(0x5b1709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1710:{NFSU2_TR(0x5b1710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1715ull));
TAIL_STATIC(0x598760u,598);
}
B5b1715:L5b1715:{c.instructions+=2;NFSU2_TR(0x5b1715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b171b:{NFSU2_TR(0x5b171b);
{goto L5b17d5;}
}
B5b1720:L5b1720:{c.instructions+=3;NFSU2_TR(0x5b1720);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b1722:{NFSU2_TR(0x5b1722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1728:{NFSU2_TR(0x5b1728);
{goto L5b17d5;}
}
B5b172d:L5b172d:{c.instructions+=6;NFSU2_TR(0x5b172d);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1731:{NFSU2_TR(0x5b1731);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1732:{NFSU2_TR(0x5b1732);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1736:{NFSU2_TR(0x5b1736);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1737:{NFSU2_TR(0x5b1737);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b173d:{NFSU2_TR(0x5b173d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1742ull));
TAIL_STATIC(0x611030u,611);
}
B5b1742:L5b1742:{c.instructions+=14;NFSU2_TR(0x5b1742);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1746:{NFSU2_TR(0x5b1746);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b174a:{NFSU2_TR(0x5b174a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b174c:{NFSU2_TR(0x5b174c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b1752:{NFSU2_TR(0x5b1752);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1756:{NFSU2_TR(0x5b1756);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b175a:{NFSU2_TR(0x5b175a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b175e:{NFSU2_TR(0x5b175e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b1764:{NFSU2_TR(0x5b1764);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1768:{NFSU2_TR(0x5b1768);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b176c:{NFSU2_TR(0x5b176c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b1770:{NFSU2_TR(0x5b1770);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b1776:{NFSU2_TR(0x5b1776);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b177a:{NFSU2_TR(0x5b177a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b177full));
TAIL_STATIC(0x575620u,575);
}
B5b177f:L5b177f:{c.instructions+=3;NFSU2_TR(0x5b177f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1782:{NFSU2_TR(0x5b1782);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1784:{NFSU2_TR(0x5b1784);
if(r1(R+518)){{goto L5b17cc;}}
}
B5b1786:L5b1786:{c.instructions+=20;NFSU2_TR(0x5b1786);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b178a:{NFSU2_TR(0x5b178a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b178e:{NFSU2_TR(0x5b178e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1792:{NFSU2_TR(0x5b1792);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b1794:{NFSU2_TR(0x5b1794);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1795:{NFSU2_TR(0x5b1795);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1799:{NFSU2_TR(0x5b1799);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b179a:{NFSU2_TR(0x5b179a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b179b:{NFSU2_TR(0x5b179b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b179e:{NFSU2_TR(0x5b179e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b17a2:{NFSU2_TR(0x5b17a2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b17a6:{NFSU2_TR(0x5b17a6);
__builtin_memmove((R+4),(R+0),4);
}
B5b17a8:{NFSU2_TR(0x5b17a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b17aa:{NFSU2_TR(0x5b17aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b17b1:{NFSU2_TR(0x5b17b1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b17b5:{NFSU2_TR(0x5b17b5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b17b9:{NFSU2_TR(0x5b17b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b17c0:{NFSU2_TR(0x5b17c0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b17c2:{NFSU2_TR(0x5b17c2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b17c5:{NFSU2_TR(0x5b17c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b17caull));
TAIL_STATIC(0x598760u,598);
}
B5b17ca:L5b17ca:{c.instructions+=1;NFSU2_TR(0x5b17ca);
{goto L5b17ce;}
}
B5b17cc:L5b17cc:{c.instructions+=1;NFSU2_TR(0x5b17cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b17ce:L5b17ce:{c.instructions+=2;NFSU2_TR(0x5b17ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b17d1:{NFSU2_TR(0x5b17d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b17d5:L5b17d5:{c.instructions+=2;NFSU2_TR(0x5b17d5);
__builtin_memmove((R+4),(R+24),4);
}
B5b17d7:{NFSU2_TR(0x5b17d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b17dcull));
TAIL_STATIC(0x5ae520u,5ae);
}
B5b17dc:L5b17dc:{c.instructions+=4;NFSU2_TR(0x5b17dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b17df:{NFSU2_TR(0x5b17df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b17e1:{NFSU2_TR(0x5b17e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b17e5:{NFSU2_TR(0x5b17e5);
if(r1(R+518)){{goto L5b17ec;}}
}
B5b17e7:L5b17e7:{c.instructions+=2;NFSU2_TR(0x5b17e7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b17ea:{NFSU2_TR(0x5b17ea);
{goto L5b17ee;}
}
B5b17ec:L5b17ec:{c.instructions+=1;NFSU2_TR(0x5b17ec);
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
B5b17ee:L5b17ee:{c.instructions+=9;NFSU2_TR(0x5b17ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b17f1:{NFSU2_TR(0x5b17f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b17f4:{NFSU2_TR(0x5b17f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b17f6:{NFSU2_TR(0x5b17f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b17f9:{NFSU2_TR(0x5b17f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b17fc:{NFSU2_TR(0x5b17fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1800:{NFSU2_TR(0x5b1800);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b1802:{NFSU2_TR(0x5b1802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b1804:{NFSU2_TR(0x5b1804);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1807ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b1807:L5b1807:{c.instructions+=15;NFSU2_TR(0x5b1807);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b180a:{NFSU2_TR(0x5b180a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1810:{NFSU2_TR(0x5b1810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b181a:{NFSU2_TR(0x5b181a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x506ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1821:{NFSU2_TR(0x5b1821);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x507ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1828:{NFSU2_TR(0x5b1828);
{u32 ea_=u32(r4(R+28)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b182e:{NFSU2_TR(0x5b182e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b1830:{NFSU2_TR(0x5b1830);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1836:{NFSU2_TR(0x5b1836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b183c:{NFSU2_TR(0x5b183c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1842:{NFSU2_TR(0x5b1842);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1848:{NFSU2_TR(0x5b1848);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b184e:{NFSU2_TR(0x5b184e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b1850:{NFSU2_TR(0x5b1850);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1853:{NFSU2_TR(0x5b1853);
if(r1(R+518)){{goto L5b185d;}}
}
B5b1855:L5b1855:{c.instructions+=2;NFSU2_TR(0x5b1855);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b1857:{NFSU2_TR(0x5b1857);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b185d:L5b185d:{c.instructions+=7;NFSU2_TR(0x5b185d);
{u32 ea_=u32(r4(R+28)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1863:{NFSU2_TR(0x5b1863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1869:{NFSU2_TR(0x5b1869);
{u32 ea_=u32(r4(R+4)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b186f:{NFSU2_TR(0x5b186f);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b1875:{NFSU2_TR(0x5b1875);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b1877:{NFSU2_TR(0x5b1877);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b187a:{NFSU2_TR(0x5b187a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b1884;}}
}
B5b187c:L5b187c:{c.instructions+=2;NFSU2_TR(0x5b187c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b187e:{NFSU2_TR(0x5b187e);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1884:L5b1884:{c.instructions+=3;NFSU2_TR(0x5b1884);
{u32 ea_=u32(r4(R+4)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b188a:{NFSU2_TR(0x5b188a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b188d:{NFSU2_TR(0x5b188d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1892ull));
TAIL_STATIC(0x59b940u,59b);
}
B5b1892:L5b1892:{c.instructions+=4;NFSU2_TR(0x5b1892);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x504ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1899:{NFSU2_TR(0x5b1899);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x505ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b18a0:{NFSU2_TR(0x5b18a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b18a6:{NFSU2_TR(0x5b18a6);
if(r1(R+518)){{goto L5b191a;}}
}
B5b18a8:L5b18a8:{c.instructions+=6;NFSU2_TR(0x5b18a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b18ae:{NFSU2_TR(0x5b18ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b18b4:{NFSU2_TR(0x5b18b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b18b6:{NFSU2_TR(0x5b18b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b18b8:{NFSU2_TR(0x5b18b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b18bc:{NFSU2_TR(0x5b18bc);
if(r1(R+518)){{goto L5b191a;}}
}
B5b18be:L5b18be:{c.instructions+=1;NFSU2_TR(0x5b18be);
{goto L5b18c4;}
}
B5b18c0:L5b18c0:{c.instructions+=1;NFSU2_TR(0x5b18c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b18c4:L5b18c4:{c.instructions+=2;NFSU2_TR(0x5b18c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b18c5:{NFSU2_TR(0x5b18c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b18caull));
TAIL_STATIC(0x48b830u,48b);
}
B5b18ca:L5b18ca:{c.instructions+=4;NFSU2_TR(0x5b18ca);
__builtin_memmove((R+12),(R+0),4);
}
B5b18cc:{NFSU2_TR(0x5b18cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b18cf:{NFSU2_TR(0x5b18cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b18d1:{NFSU2_TR(0x5b18d1);
if(r1(R+518)){{goto L5b1900;}}
}
B5b18d3:L5b18d3:{c.instructions+=2;NFSU2_TR(0x5b18d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b18da:{NFSU2_TR(0x5b18da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b18dfull));
TAIL_STATIC(0x440ec0u,440);
}
B5b18df:L5b18df:{c.instructions+=2;NFSU2_TR(0x5b18df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b18e1:{NFSU2_TR(0x5b18e1);
if(r1(R+518)){{goto L5b18e8;}}
}
B5b18e3:L5b18e3:{c.instructions+=2;NFSU2_TR(0x5b18e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b18e6:{NFSU2_TR(0x5b18e6);
{goto L5b18ea;}
}
B5b18e8:L5b18e8:{c.instructions+=1;NFSU2_TR(0x5b18e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b18ea:L5b18ea:{c.instructions+=6;NFSU2_TR(0x5b18ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b18f0:{NFSU2_TR(0x5b18f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b18f6:{NFSU2_TR(0x5b18f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b18f8:{NFSU2_TR(0x5b18f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b18fb:{NFSU2_TR(0x5b18fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b18fe:{NFSU2_TR(0x5b18fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b1900:L5b1900:{c.instructions+=7;NFSU2_TR(0x5b1900);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1904:{NFSU2_TR(0x5b1904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b190a:{NFSU2_TR(0x5b190a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b190c:{NFSU2_TR(0x5b190c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xf8ull))));
}
B5b1912:{NFSU2_TR(0x5b1912);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1914:{NFSU2_TR(0x5b1914);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1918:{NFSU2_TR(0x5b1918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b18c0u);}goto L5b18c0;}}
}
B5b191a:L5b191a:{c.instructions+=3;NFSU2_TR(0x5b191a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1920:{NFSU2_TR(0x5b1920);
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
B5b1922:{NFSU2_TR(0x5b1922);
if(r1(R+518)){{goto L5b1994;}}
}
B5b1924:L5b1924:{c.instructions+=6;NFSU2_TR(0x5b1924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b192a:{NFSU2_TR(0x5b192a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b1930:{NFSU2_TR(0x5b1930);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
}
B5b1935:{NFSU2_TR(0x5b1935);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1937:{NFSU2_TR(0x5b1937);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b193b:{NFSU2_TR(0x5b193b);
if(r1(R+518)){{goto L5b1994;}}
}
B5b193d:L5b193d:{c.instructions+=1;NFSU2_TR(0x5b193d);
{goto L5b1943;}
}
B5b193f:L5b193f:{c.instructions+=1;NFSU2_TR(0x5b193f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b1943:L5b1943:{c.instructions+=2;NFSU2_TR(0x5b1943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1944:{NFSU2_TR(0x5b1944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1949ull));
TAIL_STATIC(0x48b830u,48b);
}
B5b1949:L5b1949:{c.instructions+=4;NFSU2_TR(0x5b1949);
__builtin_memmove((R+28),(R+0),4);
}
B5b194b:{NFSU2_TR(0x5b194b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b194e:{NFSU2_TR(0x5b194e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1950:{NFSU2_TR(0x5b1950);
if(r1(R+518)){{goto L5b197f;}}
}
B5b1952:L5b1952:{c.instructions+=3;NFSU2_TR(0x5b1952);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1959:{NFSU2_TR(0x5b1959);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b195f:{NFSU2_TR(0x5b195f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1964ull));
TAIL_STATIC(0x440ec0u,440);
}
B5b1964:L5b1964:{c.instructions+=2;NFSU2_TR(0x5b1964);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1966:{NFSU2_TR(0x5b1966);
if(r1(R+518)){{goto L5b196d;}}
}
B5b1968:L5b1968:{c.instructions+=2;NFSU2_TR(0x5b1968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b196b:{NFSU2_TR(0x5b196b);
{goto L5b196f;}
}
B5b196d:L5b196d:{c.instructions+=1;NFSU2_TR(0x5b196d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b196f:L5b196f:{c.instructions+=6;NFSU2_TR(0x5b196f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b1971:{NFSU2_TR(0x5b1971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b1973:{NFSU2_TR(0x5b1973);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1976:{NFSU2_TR(0x5b1976);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1979:{NFSU2_TR(0x5b1979);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b197d:{NFSU2_TR(0x5b197d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b197f:L5b197f:{c.instructions+=6;NFSU2_TR(0x5b197f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1985:{NFSU2_TR(0x5b1985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5b1987:{NFSU2_TR(0x5b1987);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
}
B5b198c:{NFSU2_TR(0x5b198c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b198e:{NFSU2_TR(0x5b198e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1992:{NFSU2_TR(0x5b1992);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b193fu);}goto L5b193f;}}
}
B5b1994:L5b1994:{c.instructions+=8;NFSU2_TR(0x5b1994);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b199b:{NFSU2_TR(0x5b199b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b199c:{NFSU2_TR(0x5b199c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b199d:{NFSU2_TR(0x5b199d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b19a4:{NFSU2_TR(0x5b19a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b19a5:{NFSU2_TR(0x5b19a5);
__builtin_memmove((R+16),(R+20),4);
}
B5b19a7:{NFSU2_TR(0x5b19a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b19a8:{NFSU2_TR(0x5b19a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b19b0:L5b19b0:{c.instructions+=17;NFSU2_TR(0x5b19b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b19b2:{NFSU2_TR(0x5b19b2);
u8 U[4];
w4(U+0,u32(0x778f99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b19b7:{NFSU2_TR(0x5b19b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b19bd:{NFSU2_TR(0x5b19bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b19be:{NFSU2_TR(0x5b19be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b19c5:{NFSU2_TR(0x5b19c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5b19c8:{NFSU2_TR(0x5b19c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b19c9:{NFSU2_TR(0x5b19c9);
__builtin_memmove((R+24),(R+4),4);
}
B5b19cb:{NFSU2_TR(0x5b19cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b19cc:{NFSU2_TR(0x5b19cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b19d0:{NFSU2_TR(0x5b19d0);
u8 U[4];
w4(U+0,u32(0x7a2698ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b19d6:{NFSU2_TR(0x5b19d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w4(U+4,u32(0x7a268cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b19e0:{NFSU2_TR(0x5b19e0);
s4(0x86b26c,u32(u32(m4(0x86b26c))-u32(u32(0x1ull))));
}
B5b19e6:{NFSU2_TR(0x5b19e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b19e9:{NFSU2_TR(0x5b19e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b19eb:{NFSU2_TR(0x5b19eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b19f3:{NFSU2_TR(0x5b19f3);
if(r1(R+518)){{goto L5b1a05;}}
}
B5b19f5:L5b19f5:{c.instructions+=3;NFSU2_TR(0x5b19f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b19f8:{NFSU2_TR(0x5b19f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b19fa:{NFSU2_TR(0x5b19fa);
if(r1(R+518)){{goto L5b1a05;}}
}
B5b19fc:L5b19fc:{c.instructions+=2;NFSU2_TR(0x5b19fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b19fd:{NFSU2_TR(0x5b19fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1a02ull));
TAIL_STATIC(0x575630u,575);
}
B5b1a02:L5b1a02:{c.instructions+=1;NFSU2_TR(0x5b1a02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1a05:L5b1a05:{c.instructions+=3;NFSU2_TR(0x5b1a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1a0b:{NFSU2_TR(0x5b1a0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1a0d:{NFSU2_TR(0x5b1a0d);
if(r1(R+518)){{goto L5b1a18;}}
}
B5b1a0f:L5b1a0f:{c.instructions+=2;NFSU2_TR(0x5b1a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a10:{NFSU2_TR(0x5b1a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1a15ull));
TAIL_STATIC(0x575630u,575);
}
B5b1a15:L5b1a15:{c.instructions+=1;NFSU2_TR(0x5b1a15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1a18:L5b1a18:{c.instructions+=5;NFSU2_TR(0x5b1a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1a1e:{NFSU2_TR(0x5b1a1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a1f:{NFSU2_TR(0x5b1a1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1a25:{NFSU2_TR(0x5b1a25);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1a27:{NFSU2_TR(0x5b1a27);
if(r1(R+518)){{goto L5b1a81;}}
}
B5b1a29:L5b1a29:{c.instructions+=1;NFSU2_TR(0x5b1a29);
__builtin_memmove((R+16),(R+16),4);
}
B5b1a30:L5b1a30:{c.instructions+=8;NFSU2_TR(0x5b1a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b1a32:{NFSU2_TR(0x5b1a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b1a34:{NFSU2_TR(0x5b1a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1a37:{NFSU2_TR(0x5b1a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b1a3a:{NFSU2_TR(0x5b1a3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b1a3c:{NFSU2_TR(0x5b1a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a3d:{NFSU2_TR(0x5b1a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1a40:{NFSU2_TR(0x5b1a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1a45ull));
TAIL_STATIC(0x440ef0u,440);
}
B5b1a45:L5b1a45:{c.instructions+=4;NFSU2_TR(0x5b1a45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x504ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b1a4b:{NFSU2_TR(0x5b1a4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1a4e:{NFSU2_TR(0x5b1a4e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1a50:{NFSU2_TR(0x5b1a50);
if(r1(R+518)){{goto L5b1a5d;}}
}
B5b1a52:L5b1a52:{c.instructions+=3;NFSU2_TR(0x5b1a52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a53:{NFSU2_TR(0x5b1a53);
w4(R+4,u32(0x8357e0ull));
}
B5b1a58:{NFSU2_TR(0x5b1a58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1a5dull));
TAIL_STATIC(0x48bd70u,48b);
}
B5b1a5d:L5b1a5d:{c.instructions+=2;NFSU2_TR(0x5b1a5d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1a5f:{NFSU2_TR(0x5b1a5f);
if(r1(R+518)){{goto L5b1a7d;}}
}
B5b1a61:L5b1a61:{c.instructions+=2;NFSU2_TR(0x5b1a61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a62:{NFSU2_TR(0x5b1a62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1a67ull));
TAIL_STATIC(0x4903e0u,490);
}
B5b1a67:L5b1a67:{c.instructions+=5;NFSU2_TR(0x5b1a67);
__builtin_memmove((R+8),gp(0x82da44),4);
}
B5b1a6d:{NFSU2_TR(0x5b1a6d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b1a6e:{NFSU2_TR(0x5b1a6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a6f:{NFSU2_TR(0x5b1a6f);
__builtin_memmove(gp(0x82da44),(R+8),4);
}
B5b1a75:{NFSU2_TR(0x5b1a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1a7aull));
TAIL_STATIC(0x575630u,575);
}
B5b1a7a:L5b1a7a:{c.instructions+=1;NFSU2_TR(0x5b1a7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b1a7d:L5b1a7d:{c.instructions+=2;NFSU2_TR(0x5b1a7d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b1a7f:{NFSU2_TR(0x5b1a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1a30u);}goto L5b1a30;}}
}
B5b1a81:L5b1a81:{c.instructions+=4;NFSU2_TR(0x5b1a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1a87:{NFSU2_TR(0x5b1a87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1a8d:{NFSU2_TR(0x5b1a8d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1a8f:{NFSU2_TR(0x5b1a8f);
if(r1(R+518)){{goto L5b1ae2;}}
}
B5b1a91:L5b1a91:{c.instructions+=8;NFSU2_TR(0x5b1a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b1a93:{NFSU2_TR(0x5b1a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b1a95:{NFSU2_TR(0x5b1a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1a98:{NFSU2_TR(0x5b1a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b1a9b:{NFSU2_TR(0x5b1a9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b1a9d:{NFSU2_TR(0x5b1a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1a9e:{NFSU2_TR(0x5b1a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1aa1:{NFSU2_TR(0x5b1aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1aa6ull));
TAIL_STATIC(0x440ef0u,440);
}
B5b1aa6:L5b1aa6:{c.instructions+=4;NFSU2_TR(0x5b1aa6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x505ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b1aac:{NFSU2_TR(0x5b1aac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1aaf:{NFSU2_TR(0x5b1aaf);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1ab1:{NFSU2_TR(0x5b1ab1);
if(r1(R+518)){{goto L5b1abe;}}
}
B5b1ab3:L5b1ab3:{c.instructions+=3;NFSU2_TR(0x5b1ab3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ab4:{NFSU2_TR(0x5b1ab4);
w4(R+4,u32(0x8357e0ull));
}
B5b1ab9:{NFSU2_TR(0x5b1ab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1abeull));
TAIL_STATIC(0x48bd70u,48b);
}
B5b1abe:L5b1abe:{c.instructions+=2;NFSU2_TR(0x5b1abe);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1ac0:{NFSU2_TR(0x5b1ac0);
if(r1(R+518)){{goto L5b1ade;}}
}
B5b1ac2:L5b1ac2:{c.instructions+=2;NFSU2_TR(0x5b1ac2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ac3:{NFSU2_TR(0x5b1ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1ac8ull));
TAIL_STATIC(0x4903e0u,490);
}
B5b1ac8:L5b1ac8:{c.instructions+=5;NFSU2_TR(0x5b1ac8);
__builtin_memmove((R+8),gp(0x82da44),4);
}
B5b1ace:{NFSU2_TR(0x5b1ace);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b1acf:{NFSU2_TR(0x5b1acf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ad0:{NFSU2_TR(0x5b1ad0);
__builtin_memmove(gp(0x82da44),(R+8),4);
}
B5b1ad6:{NFSU2_TR(0x5b1ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1adbull));
TAIL_STATIC(0x575630u,575);
}
B5b1adb:L5b1adb:{c.instructions+=1;NFSU2_TR(0x5b1adb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b1ade:L5b1ade:{c.instructions+=2;NFSU2_TR(0x5b1ade);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b1ae0:{NFSU2_TR(0x5b1ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1a91u);}goto L5b1a91;}}
}
B5b1ae2:L5b1ae2:{c.instructions+=5;NFSU2_TR(0x5b1ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b1ae4:{NFSU2_TR(0x5b1ae4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1ae6:{NFSU2_TR(0x5b1ae6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1aeb:{NFSU2_TR(0x5b1aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1aec:{NFSU2_TR(0x5b1aec);
if(r1(R+518)){{goto L5b1b09;}}
}
B5b1aee:L5b1aee:{c.instructions+=1;NFSU2_TR(0x5b1aee);
__builtin_memmove((R+28),(R+28),4);
}
B5b1af0:L5b1af0:{c.instructions+=6;NFSU2_TR(0x5b1af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b1af2:{NFSU2_TR(0x5b1af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1af5:{NFSU2_TR(0x5b1af5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b1af7:{NFSU2_TR(0x5b1af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1af8:{NFSU2_TR(0x5b1af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1afb:{NFSU2_TR(0x5b1afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1b00ull));
TAIL_STATIC(0x440ef0u,440);
}
B5b1b00:L5b1b00:{c.instructions+=4;NFSU2_TR(0x5b1b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b1b02:{NFSU2_TR(0x5b1b02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1b05:{NFSU2_TR(0x5b1b05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1b07:{NFSU2_TR(0x5b1b07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1af0u);}goto L5b1af0;}}
}
B5b1b09:L5b1b09:{c.instructions+=5;NFSU2_TR(0x5b1b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1b0f:{NFSU2_TR(0x5b1b0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1b15:{NFSU2_TR(0x5b1b15);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1b17:{NFSU2_TR(0x5b1b17);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1b1c:{NFSU2_TR(0x5b1b1c);
if(r1(R+518)){{goto L5b1b39;}}
}
B5b1b1e:L5b1b1e:{c.instructions+=1;NFSU2_TR(0x5b1b1e);
__builtin_memmove((R+28),(R+28),4);
}
B5b1b20:L5b1b20:{c.instructions+=6;NFSU2_TR(0x5b1b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b1b22:{NFSU2_TR(0x5b1b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1b25:{NFSU2_TR(0x5b1b25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b1b27:{NFSU2_TR(0x5b1b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1b28:{NFSU2_TR(0x5b1b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1b2b:{NFSU2_TR(0x5b1b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1b30ull));
TAIL_STATIC(0x440ef0u,440);
}
B5b1b30:L5b1b30:{c.instructions+=4;NFSU2_TR(0x5b1b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b1b32:{NFSU2_TR(0x5b1b32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b1b35:{NFSU2_TR(0x5b1b35);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b1b37:{NFSU2_TR(0x5b1b37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1b20u);}goto L5b1b20;}}
}
B5b1b39:L5b1b39:{c.instructions+=3;NFSU2_TR(0x5b1b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1b3f:{NFSU2_TR(0x5b1b3f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1b44:{NFSU2_TR(0x5b1b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1b49ull));
TAIL_STATIC(0x633fd0u,633);
}
B5b1b49:L5b1b49:{c.instructions+=3;NFSU2_TR(0x5b1b49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1b4f:{NFSU2_TR(0x5b1b4f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1b54:{NFSU2_TR(0x5b1b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1b59ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5b1b59:L5b1b59:{c.instructions+=3;NFSU2_TR(0x5b1b59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1b5f:{NFSU2_TR(0x5b1b5f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b1b64:{NFSU2_TR(0x5b1b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1b69ull));
TAIL_STATIC(0x5aa410u,5aa);
}
B5b1b69:L5b1b69:{c.instructions+=7;NFSU2_TR(0x5b1b69);
u8 U[4];
w4(U+0,u32(0x7a2168ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b1b6f:{NFSU2_TR(0x5b1b6f);
__builtin_memmove((R+0),gp(0x86b258),4);
}
B5b1b74:{NFSU2_TR(0x5b1b74);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b1b75:{NFSU2_TR(0x5b1b75);
__builtin_memmove((R+4),(R+24),4);
}
B5b1b77:{NFSU2_TR(0x5b1b77);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1b7f:{NFSU2_TR(0x5b1b7f);
__builtin_memmove(gp(0x86b258),(R+0),4);
}
B5b1b84:{NFSU2_TR(0x5b1b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1b89ull));
TAIL_STATIC(0x5a9c00u,5a9);
}
B5b1b89:L5b1b89:{c.instructions+=6;NFSU2_TR(0x5b1b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1b8d:{NFSU2_TR(0x5b1b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1b8e:{NFSU2_TR(0x5b1b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1b8f:{NFSU2_TR(0x5b1b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1b96:{NFSU2_TR(0x5b1b96);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1b99:{NFSU2_TR(0x5b1b99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1ba0:L5b1ba0:{c.instructions+=3;NFSU2_TR(0x5b1ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1ba3:{NFSU2_TR(0x5b1ba3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1ba6:{NFSU2_TR(0x5b1ba6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1bb0:L5b1bb0:{c.instructions+=3;NFSU2_TR(0x5b1bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1bb3:{NFSU2_TR(0x5b1bb3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xa0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1bb8:{NFSU2_TR(0x5b1bb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1bc0:L5b1bc0:{c.instructions+=3;NFSU2_TR(0x5b1bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1bc3:{NFSU2_TR(0x5b1bc3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xb0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xb0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1bc8:{NFSU2_TR(0x5b1bc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1bd0:L5b1bd0:{c.instructions+=3;NFSU2_TR(0x5b1bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1bd3:{NFSU2_TR(0x5b1bd3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1bd6:{NFSU2_TR(0x5b1bd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1be0:L5b1be0:{c.instructions+=3;NFSU2_TR(0x5b1be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1be3:{NFSU2_TR(0x5b1be3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xc0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1be8:{NFSU2_TR(0x5b1be8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1bf0:L5b1bf0:{c.instructions+=3;NFSU2_TR(0x5b1bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1bf3:{NFSU2_TR(0x5b1bf3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1f0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1bf8:{NFSU2_TR(0x5b1bf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c00:L5b1c00:{c.instructions+=2;NFSU2_TR(0x5b1c00);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x507ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5b1c07:{NFSU2_TR(0x5b1c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c10:L5b1c10:{c.instructions+=5;NFSU2_TR(0x5b1c10);
{u32 ea_=u32(r4(R+4)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1c16:{NFSU2_TR(0x5b1c16);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b1c1c:{NFSU2_TR(0x5b1c1c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b1c1e:{NFSU2_TR(0x5b1c1e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1c21:{NFSU2_TR(0x5b1c21);
if(r1(R+514)){{goto L5b1c2d;}}
}
B5b1c23:L5b1c23:{c.instructions+=3;NFSU2_TR(0x5b1c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1c26:{NFSU2_TR(0x5b1c26);
{u32 ea_=u32(r4(R+0)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1c2c:{NFSU2_TR(0x5b1c2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c2d:L5b1c2d:{c.instructions+=2;NFSU2_TR(0x5b1c2d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1c33:{NFSU2_TR(0x5b1c33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c40:L5b1c40:{c.instructions+=5;NFSU2_TR(0x5b1c40);
{u32 ea_=u32(r4(R+4)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1c46:{NFSU2_TR(0x5b1c46);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b1c4c:{NFSU2_TR(0x5b1c4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b1c4e:{NFSU2_TR(0x5b1c4e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1c51:{NFSU2_TR(0x5b1c51);
if(r1(R+514)){{goto L5b1c6c;}}
}
B5b1c53:L5b1c53:{c.instructions+=4;NFSU2_TR(0x5b1c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1c56:{NFSU2_TR(0x5b1c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1c5c:{NFSU2_TR(0x5b1c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1c5e:{NFSU2_TR(0x5b1c5e);
if(r1(R+518)){{goto L5b1c66;}}
}
B5b1c60:L5b1c60:{c.instructions+=2;NFSU2_TR(0x5b1c60);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1b0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1b0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1c65:{NFSU2_TR(0x5b1c65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c66:L5b1c66:{c.instructions+=2;NFSU2_TR(0x5b1c66);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x170ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x170ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1c6b:{NFSU2_TR(0x5b1c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c6c:L5b1c6c:{c.instructions+=2;NFSU2_TR(0x5b1c6c);
w4(R+0,u32(0x86b450ull));
}
B5b1c71:{NFSU2_TR(0x5b1c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c80:L5b1c80:{c.instructions+=5;NFSU2_TR(0x5b1c80);
{u32 ea_=u32(r4(R+4)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1c86:{NFSU2_TR(0x5b1c86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b1c8c:{NFSU2_TR(0x5b1c8c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b1c8e:{NFSU2_TR(0x5b1c8e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1c91:{NFSU2_TR(0x5b1c91);
if(r1(R+514)){{goto L5b1c99;}}
}
B5b1c93:L5b1c93:{c.instructions+=2;NFSU2_TR(0x5b1c93);
w4(R+0,u32(0x1ull));
}
B5b1c98:{NFSU2_TR(0x5b1c98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1c99:L5b1c99:{c.instructions+=2;NFSU2_TR(0x5b1c99);
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
B5b1c9b:{NFSU2_TR(0x5b1c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1ca0:L5b1ca0:{c.instructions+=3;NFSU2_TR(0x5b1ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1ca6:{NFSU2_TR(0x5b1ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1cac:{NFSU2_TR(0x5b1cac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1cb0:L5b1cb0:{c.instructions+=3;NFSU2_TR(0x5b1cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1cb6:{NFSU2_TR(0x5b1cb6);
{u32 ea_=u32(r4(R+0)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1cbc:{NFSU2_TR(0x5b1cbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1cc0:L5b1cc0:{c.instructions+=3;NFSU2_TR(0x5b1cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1cc6:{NFSU2_TR(0x5b1cc6);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1ccc:{NFSU2_TR(0x5b1ccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1cd0:L5b1cd0:{c.instructions+=2;NFSU2_TR(0x5b1cd0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x130ull))));
}
B5b1cd6:{NFSU2_TR(0x5b1cd6);
TAIL_STATIC(0x5b3210u,5b3);
}
B5b1ce0:L5b1ce0:{c.instructions+=3;NFSU2_TR(0x5b1ce0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b1ce6:{NFSU2_TR(0x5b1ce6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b1ce8:{NFSU2_TR(0x5b1ce8);
if(r1(R+518)){{goto L5b1cf2;}}
}
B5b1cea:L5b1cea:{c.instructions+=2;NFSU2_TR(0x5b1cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1ced:{NFSU2_TR(0x5b1ced);
TAIL_STATIC(0x59bc60u,59b);
}
B5b1cf2:L5b1cf2:{c.instructions+=1;NFSU2_TR(0x5b1cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1d00:L5b1d00:{c.instructions+=8;NFSU2_TR(0x5b1d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d01:{NFSU2_TR(0x5b1d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b1d05:{NFSU2_TR(0x5b1d05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d06:{NFSU2_TR(0x5b1d06);
__builtin_memmove((R+28),(R+4),4);
}
B5b1d08:{NFSU2_TR(0x5b1d08);
u8 U[4];
w4(U+0,u32(0x7a272cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d0d:{NFSU2_TR(0x5b1d0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d0e:{NFSU2_TR(0x5b1d0e);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d10:{NFSU2_TR(0x5b1d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d15ull));
TAIL_STATIC(0x578ce0u,578);
}
B5b1d15:L5b1d15:{c.instructions+=3;NFSU2_TR(0x5b1d15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d16:{NFSU2_TR(0x5b1d16);
__builtin_memmove((R+4),(R+28),4);
}
B5b1d18:{NFSU2_TR(0x5b1d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d1dull));
TAIL_STATIC(0x593120u,593);
}
B5b1d1d:L5b1d1d:{c.instructions+=4;NFSU2_TR(0x5b1d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x506ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1d23:{NFSU2_TR(0x5b1d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d24:{NFSU2_TR(0x5b1d24);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d26:{NFSU2_TR(0x5b1d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d2bull));
TAIL_STATIC(0x5716c0u,571);
}
B5b1d2b:L5b1d2b:{c.instructions+=4;NFSU2_TR(0x5b1d2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x507ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1d31:{NFSU2_TR(0x5b1d31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d32:{NFSU2_TR(0x5b1d32);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d34:{NFSU2_TR(0x5b1d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d39ull));
TAIL_STATIC(0x5716c0u,571);
}
B5b1d39:L5b1d39:{c.instructions+=7;NFSU2_TR(0x5b1d39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d3b:{NFSU2_TR(0x5b1d3b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d3d:{NFSU2_TR(0x5b1d3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d3f:{NFSU2_TR(0x5b1d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x508ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1d45:{NFSU2_TR(0x5b1d45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d46:{NFSU2_TR(0x5b1d46);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d48:{NFSU2_TR(0x5b1d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d4dull));
TAIL_STATIC(0x571640u,571);
}
B5b1d4d:L5b1d4d:{c.instructions+=4;NFSU2_TR(0x5b1d4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1d53:{NFSU2_TR(0x5b1d53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d54:{NFSU2_TR(0x5b1d54);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d56:{NFSU2_TR(0x5b1d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d5bull));
TAIL_STATIC(0x571770u,571);
}
B5b1d5b:L5b1d5b:{c.instructions+=4;NFSU2_TR(0x5b1d5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1d61:{NFSU2_TR(0x5b1d61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d62:{NFSU2_TR(0x5b1d62);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d64:{NFSU2_TR(0x5b1d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d69ull));
TAIL_STATIC(0x571770u,571);
}
B5b1d69:L5b1d69:{c.instructions+=4;NFSU2_TR(0x5b1d69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x158ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1d6f:{NFSU2_TR(0x5b1d6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d70:{NFSU2_TR(0x5b1d70);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d72:{NFSU2_TR(0x5b1d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d77ull));
TAIL_STATIC(0x571770u,571);
}
B5b1d77:L5b1d77:{c.instructions+=4;NFSU2_TR(0x5b1d77);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1d7d:{NFSU2_TR(0x5b1d7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d7e:{NFSU2_TR(0x5b1d7e);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d80:{NFSU2_TR(0x5b1d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d85ull));
TAIL_STATIC(0x571770u,571);
}
B5b1d85:L5b1d85:{c.instructions+=4;NFSU2_TR(0x5b1d85);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1d8b:{NFSU2_TR(0x5b1d8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d8c:{NFSU2_TR(0x5b1d8c);
__builtin_memmove((R+4),(R+24),4);
}
B5b1d8e:{NFSU2_TR(0x5b1d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1d93ull));
TAIL_STATIC(0x571770u,571);
}
B5b1d93:L5b1d93:{c.instructions+=7;NFSU2_TR(0x5b1d93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d95:{NFSU2_TR(0x5b1d95);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d97:{NFSU2_TR(0x5b1d97);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1d99:{NFSU2_TR(0x5b1d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x164ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1d9f:{NFSU2_TR(0x5b1d9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1da0:{NFSU2_TR(0x5b1da0);
__builtin_memmove((R+4),(R+24),4);
}
B5b1da2:{NFSU2_TR(0x5b1da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1da7ull));
TAIL_STATIC(0x571640u,571);
}
B5b1da7:L5b1da7:{c.instructions+=3;NFSU2_TR(0x5b1da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1daa:{NFSU2_TR(0x5b1daa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1dab:{NFSU2_TR(0x5b1dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1db0ull));
TAIL_STATIC(0x59b6f0u,59b);
}
B5b1db0:L5b1db0:{c.instructions+=3;NFSU2_TR(0x5b1db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b1db3:{NFSU2_TR(0x5b1db3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5b1db6:{NFSU2_TR(0x5b1db6);
if(r1(R+518)){{goto L5b1dbf;}}
}
B5b1db8:L5b1db8:{c.instructions+=2;NFSU2_TR(0x5b1db8);
__builtin_memmove((R+4),(R+28),4);
}
B5b1dba:{NFSU2_TR(0x5b1dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1dbfull));
TAIL_STATIC(0x5add50u,5ad);
}
B5b1dbf:L5b1dbf:{c.instructions+=2;NFSU2_TR(0x5b1dbf);
__builtin_memmove((R+4),(R+24),4);
}
B5b1dc1:{NFSU2_TR(0x5b1dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1dc6ull));
TAIL_STATIC(0x578d90u,578);
}
B5b1dc6:L5b1dc6:{c.instructions+=3;NFSU2_TR(0x5b1dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b1dc7:{NFSU2_TR(0x5b1dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b1dc8:{NFSU2_TR(0x5b1dc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b1dd0:L5b1dd0:{c.instructions+=11;NFSU2_TR(0x5b1dd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1dd1:{NFSU2_TR(0x5b1dd1);
__builtin_memmove((R+20),(R+16),4);
}
B5b1dd3:{NFSU2_TR(0x5b1dd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b1dd6:{NFSU2_TR(0x5b1dd6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x74ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x74ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1dd9:{NFSU2_TR(0x5b1dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1ddc:{NFSU2_TR(0x5b1ddc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ddd:{NFSU2_TR(0x5b1ddd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1dde:{NFSU2_TR(0x5b1dde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ddf:{NFSU2_TR(0x5b1ddf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1de0:{NFSU2_TR(0x5b1de0);
__builtin_memmove((R+24),(R+4),4);
}
B5b1de2:{NFSU2_TR(0x5b1de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1de7ull));
TAIL_STATIC(0x593210u,593);
}
B5b1de7:L5b1de7:{c.instructions+=3;NFSU2_TR(0x5b1de7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b1ded:{NFSU2_TR(0x5b1ded);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1def:{NFSU2_TR(0x5b1def);
if(r1(R+518)){{goto L5b1f12;}}
}
B5b1df5:L5b1df5:{c.instructions+=2;NFSU2_TR(0x5b1df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1df8:{NFSU2_TR(0x5b1df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1dfdull));
TAIL_STATIC(0x59b940u,59b);
}
B5b1dfd:L5b1dfd:{c.instructions+=5;NFSU2_TR(0x5b1dfd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1e00:{NFSU2_TR(0x5b1e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1e03:{NFSU2_TR(0x5b1e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1e0d:{NFSU2_TR(0x5b1e0d);
{u32 ea_=u32(u32(8374360u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b1e13:{NFSU2_TR(0x5b1e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1e18ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5b1e18:L5b1e18:{c.instructions+=7;NFSU2_TR(0x5b1e18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b1e19:{NFSU2_TR(0x5b1e19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1e1b:{NFSU2_TR(0x5b1e1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1e1f:{NFSU2_TR(0x5b1e1f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b1e23:{NFSU2_TR(0x5b1e23);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5b1e26:{NFSU2_TR(0x5b1e26);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1e2a:{NFSU2_TR(0x5b1e2a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b1f04;}}
}
B5b1e30:L5b1e30:{c.instructions+=3;NFSU2_TR(0x5b1e30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1e36:{NFSU2_TR(0x5b1e36);
__builtin_memmove((R+28),(R+0),4);
}
B5b1e38:{NFSU2_TR(0x5b1e38);
{goto L5b1e40;}
}
B5b1e40:L5b1e40:{c.instructions+=5;NFSU2_TR(0x5b1e40);
{u32 ea_=u32(r4(R+24)+u32(1264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1e46:{NFSU2_TR(0x5b1e46);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b1e4c:{NFSU2_TR(0x5b1e4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b1e4e:{NFSU2_TR(0x5b1e4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1e51:{NFSU2_TR(0x5b1e51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b1ee1;}}
}
B5b1e57:L5b1e57:{c.instructions+=38;NFSU2_TR(0x5b1e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1e5a:{NFSU2_TR(0x5b1e5a);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1e60:{NFSU2_TR(0x5b1e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b1e66:{NFSU2_TR(0x5b1e66);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1e6c:{NFSU2_TR(0x5b1e6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1e70:{NFSU2_TR(0x5b1e70);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1e76:{NFSU2_TR(0x5b1e76);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1e7a:{NFSU2_TR(0x5b1e7a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b1e7c:{NFSU2_TR(0x5b1e7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1e7d:{NFSU2_TR(0x5b1e7d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b1e7f:{NFSU2_TR(0x5b1e7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1e83:{NFSU2_TR(0x5b1e83);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5b1e85:{NFSU2_TR(0x5b1e85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1e86:{NFSU2_TR(0x5b1e86);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5b1e88:{NFSU2_TR(0x5b1e88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b1e8a:{NFSU2_TR(0x5b1e8a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5b1e8c:{NFSU2_TR(0x5b1e8c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5b1e8e:{NFSU2_TR(0x5b1e8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b1e90:{NFSU2_TR(0x5b1e90);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5b1e92:{NFSU2_TR(0x5b1e92);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5b1e94:{NFSU2_TR(0x5b1e94);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b1e96:{NFSU2_TR(0x5b1e96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b1e98:{NFSU2_TR(0x5b1e98);
{u32 ea_=u32(r4(R+24)+u32(1264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b1e9e:{NFSU2_TR(0x5b1e9e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b1ea0:{NFSU2_TR(0x5b1ea0);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1ea6:{NFSU2_TR(0x5b1ea6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b1ea8:{NFSU2_TR(0x5b1ea8);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b1eae:{NFSU2_TR(0x5b1eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1eb6:{NFSU2_TR(0x5b1eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1ebe:{NFSU2_TR(0x5b1ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1ec6:{NFSU2_TR(0x5b1ec6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1eca:{NFSU2_TR(0x5b1eca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b1ecc:{NFSU2_TR(0x5b1ecc);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1ed0:{NFSU2_TR(0x5b1ed0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1ed4:{NFSU2_TR(0x5b1ed4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b1ed6:{NFSU2_TR(0x5b1ed6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1eda:{NFSU2_TR(0x5b1eda);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b1edc:{NFSU2_TR(0x5b1edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1ee1ull));
TAIL_STATIC(0x59bb00u,59b);
}
B5b1ee1:L5b1ee1:{c.instructions+=4;NFSU2_TR(0x5b1ee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1ee5:{NFSU2_TR(0x5b1ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ee6:{NFSU2_TR(0x5b1ee6);
__builtin_memmove((R+4),(R+12),4);
}
B5b1ee8:{NFSU2_TR(0x5b1ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1eedull));
TAIL_STATIC(0x5aa480u,5aa);
}
B5b1eed:L5b1eed:{c.instructions+=5;NFSU2_TR(0x5b1eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1ef0:{NFSU2_TR(0x5b1ef0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5b1ef3:{NFSU2_TR(0x5b1ef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ef4:{NFSU2_TR(0x5b1ef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ef5:{NFSU2_TR(0x5b1ef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1efaull));
TAIL_STATIC(0x5bb0d0u,5bb);
}
B5b1efa:L5b1efa:{c.instructions+=3;NFSU2_TR(0x5b1efa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b1efd:{NFSU2_TR(0x5b1efd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5b1efe:{NFSU2_TR(0x5b1efe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b1e40u);}goto L5b1e40;}}
}
B5b1f04:L5b1f04:{c.instructions+=2;NFSU2_TR(0x5b1f04);
__builtin_memmove((R+4),(R+24),4);
}
B5b1f06:{NFSU2_TR(0x5b1f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1f0bull));
TAIL_STATIC(0x5a8d90u,5a8);
}
B5b1f0b:L5b1f0b:{c.instructions+=2;NFSU2_TR(0x5b1f0b);
__builtin_memmove((R+4),(R+24),4);
}
B5b1f0d:{NFSU2_TR(0x5b1f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1f12ull));
TAIL_STATIC(0x5add50u,5ad);
}
B5b1f12:L5b1f12:{c.instructions+=8;NFSU2_TR(0x5b1f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b1f15:{NFSU2_TR(0x5b1f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1f1b:{NFSU2_TR(0x5b1f1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1f1c:{NFSU2_TR(0x5b1f1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b1f1f:{NFSU2_TR(0x5b1f1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1f23:{NFSU2_TR(0x5b1f23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1f24:{NFSU2_TR(0x5b1f24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1f25:{NFSU2_TR(0x5b1f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1f2aull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b1f2a:L5b1f2a:{c.instructions+=4;NFSU2_TR(0x5b1f2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1f2e:{NFSU2_TR(0x5b1f2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1f2f:{NFSU2_TR(0x5b1f2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1f30:{NFSU2_TR(0x5b1f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1f35ull));
TAIL_STATIC(0x4012b0u,401);
}
B5b1f35:L5b1f35:{c.instructions+=18;NFSU2_TR(0x5b1f35);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1f38:{NFSU2_TR(0x5b1f38);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b1f3c:{NFSU2_TR(0x5b1f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b1f3e:{NFSU2_TR(0x5b1f3e);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1f41:{NFSU2_TR(0x5b1f41);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1f44:{NFSU2_TR(0x5b1f44);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b1f48:{NFSU2_TR(0x5b1f48);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1f4b:{NFSU2_TR(0x5b1f4b);
__builtin_memmove((R+4),(R+24),4);
}
B5b1f4d:{NFSU2_TR(0x5b1f4d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b1f51:{NFSU2_TR(0x5b1f51);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1f55:{NFSU2_TR(0x5b1f55);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b1f57:{NFSU2_TR(0x5b1f57);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1f5f:{NFSU2_TR(0x5b1f5f);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1f63:{NFSU2_TR(0x5b1f63);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1f67:{NFSU2_TR(0x5b1f67);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1f6b:{NFSU2_TR(0x5b1f6b);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b1f71:{NFSU2_TR(0x5b1f71);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1f75:{NFSU2_TR(0x5b1f75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1f78ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b1f78:L5b1f78:{c.instructions+=2;NFSU2_TR(0x5b1f78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1f7a:{NFSU2_TR(0x5b1f7a);
if(r1(R+518)){{goto L5b1f91;}}
}
B5b1f7c:L5b1f7c:{c.instructions+=2;NFSU2_TR(0x5b1f7c);
u8 U[1];
w1(U+0,u8(u32(m1(0x7fb724))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b1f83:{NFSU2_TR(0x5b1f83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b1f91;}}
}
B5b1f85:L5b1f85:{c.instructions+=2;NFSU2_TR(0x5b1f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x490ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1f8f:{NFSU2_TR(0x5b1f8f);
{goto L5b1fdd;}
}
B5b1f91:L5b1f91:{c.instructions+=4;NFSU2_TR(0x5b1f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b1f97:{NFSU2_TR(0x5b1f97);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b1f99:{NFSU2_TR(0x5b1f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x490ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b1fa3:{NFSU2_TR(0x5b1fa3);
if(r1(R+518)){{goto L5b1fc9;}}
}
B5b1fa5:L5b1fa5:{c.instructions+=5;NFSU2_TR(0x5b1fa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1fa9:{NFSU2_TR(0x5b1fa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1faa:{NFSU2_TR(0x5b1faa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b1fad:{NFSU2_TR(0x5b1fad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1fae:{NFSU2_TR(0x5b1fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1fb3ull));
TAIL_STATIC(0x4012b0u,401);
}
B5b1fb3:L5b1fb3:{c.instructions+=4;NFSU2_TR(0x5b1fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1fb9:{NFSU2_TR(0x5b1fb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b1fbc:{NFSU2_TR(0x5b1fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b1fbe:{NFSU2_TR(0x5b1fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b1fdd;}}
}
B5b1fc0:L5b1fc0:{c.instructions+=2;NFSU2_TR(0x5b1fc0);
__builtin_memmove((R+4),(R+28),4);
}
B5b1fc2:{NFSU2_TR(0x5b1fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1fc7ull));
TAIL_STATIC(0x6147e0u,614);
}
B5b1fc7:L5b1fc7:{c.instructions+=1;NFSU2_TR(0x5b1fc7);
{goto L5b1fdd;}
}
B5b1fc9:L5b1fc9:{c.instructions+=5;NFSU2_TR(0x5b1fc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1fcd:{NFSU2_TR(0x5b1fcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1fce:{NFSU2_TR(0x5b1fce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b1fd4:{NFSU2_TR(0x5b1fd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1fd5:{NFSU2_TR(0x5b1fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b1fdaull));
TAIL_STATIC(0x4012b0u,401);
}
B5b1fda:L5b1fda:{c.instructions+=1;NFSU2_TR(0x5b1fda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b1fdd:L5b1fdd:{c.instructions+=12;NFSU2_TR(0x5b1fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b1fe0:{NFSU2_TR(0x5b1fe0);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1fe3:{NFSU2_TR(0x5b1fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b1fe6:{NFSU2_TR(0x5b1fe6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5b1fe9:{NFSU2_TR(0x5b1fe9);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1fed:{NFSU2_TR(0x5b1fed);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b1ff0:{NFSU2_TR(0x5b1ff0);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b1ff4:{NFSU2_TR(0x5b1ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b1ff8:{NFSU2_TR(0x5b1ff8);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b1ffc:{NFSU2_TR(0x5b1ffc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b1ffd:{NFSU2_TR(0x5b1ffd);
__builtin_memmove((R+4),(R+24),4);
}
B5b1fff:{NFSU2_TR(0x5b1fff);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5b200au,5b2);
}
XIT:NFSU2_TR_EXIT(0x5b1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
