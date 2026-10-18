#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 page_5a1(Cpu& c){return body_5a1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a1001:goto L5a1001;
case 0x5a1007:c.instructions+=5;goto B5a1007;
case 0x5a1009:c.instructions+=4;goto B5a1009;
case 0x5a100d:c.instructions+=3;goto B5a100d;
case 0x5a1010:c.instructions+=2;goto B5a1010;
case 0x5a1012:c.instructions+=1;goto B5a1012;
case 0x5a1017:goto L5a1017;
case 0x5a101d:c.instructions+=5;goto B5a101d;
case 0x5a1020:c.instructions+=4;goto B5a1020;
case 0x5a1026:c.instructions+=3;goto B5a1026;
case 0x5a1028:c.instructions+=2;goto B5a1028;
case 0x5a102b:c.instructions+=1;goto B5a102b;
case 0x5a102d:goto L5a102d;
case 0x5a1033:c.instructions+=1;goto B5a1033;
case 0x5a1035:goto L5a1035;
case 0x5a103b:c.instructions+=3;goto B5a103b;
case 0x5a103d:c.instructions+=2;goto B5a103d;
case 0x5a1040:c.instructions+=1;goto B5a1040;
case 0x5a1042:goto L5a1042;
case 0x5a1048:c.instructions+=3;goto B5a1048;
case 0x5a104a:c.instructions+=2;goto B5a104a;
case 0x5a104d:c.instructions+=1;goto B5a104d;
case 0x5a104f:goto L5a104f;
case 0x5a1055:c.instructions+=3;goto B5a1055;
case 0x5a1057:c.instructions+=2;goto B5a1057;
case 0x5a105a:c.instructions+=1;goto B5a105a;
case 0x5a105c:goto L5a105c;
case 0x5a1062:c.instructions+=3;goto B5a1062;
case 0x5a1064:c.instructions+=2;goto B5a1064;
case 0x5a1067:c.instructions+=1;goto B5a1067;
case 0x5a1069:goto L5a1069;
case 0x5a106f:c.instructions+=6;goto B5a106f;
case 0x5a1075:c.instructions+=5;goto B5a1075;
case 0x5a1077:c.instructions+=4;goto B5a1077;
case 0x5a107d:c.instructions+=3;goto B5a107d;
case 0x5a107f:c.instructions+=2;goto B5a107f;
case 0x5a1082:c.instructions+=1;goto B5a1082;
case 0x5a1084:goto L5a1084;
case 0x5a1086:c.instructions+=1;goto B5a1086;
case 0x5a1088:goto L5a1088;
case 0x5a108e:c.instructions+=1;goto B5a108e;
case 0x5a1094:goto L5a1094;
case 0x5a1098:c.instructions+=7;goto B5a1098;
case 0x5a109a:c.instructions+=6;goto B5a109a;
case 0x5a10a0:c.instructions+=5;goto B5a10a0;
case 0x5a10a1:c.instructions+=4;goto B5a10a1;
case 0x5a10a5:c.instructions+=3;goto B5a10a5;
case 0x5a10ab:c.instructions+=2;goto B5a10ab;
case 0x5a10b1:c.instructions+=1;goto B5a10b1;
case 0x5a10b3:goto L5a10b3;
case 0x5a10b7:c.instructions+=4;goto B5a10b7;
case 0x5a10bd:c.instructions+=3;goto B5a10bd;
case 0x5a10bf:c.instructions+=2;goto B5a10bf;
case 0x5a10c2:c.instructions+=1;goto B5a10c2;
case 0x5a10c8:goto L5a10c8;
case 0x5a10ce:c.instructions+=5;goto B5a10ce;
case 0x5a10d4:c.instructions+=4;goto B5a10d4;
case 0x5a10d5:c.instructions+=3;goto B5a10d5;
case 0x5a10d6:c.instructions+=2;goto B5a10d6;
case 0x5a10d9:c.instructions+=1;goto B5a10d9;
case 0x5a10dc:goto L5a10dc;
case 0x5a10de:c.instructions+=1;goto B5a10de;
case 0x5a10e3:goto L5a10e3;
case 0x5a10e9:c.instructions+=3;goto B5a10e9;
case 0x5a10eb:c.instructions+=2;goto B5a10eb;
case 0x5a10ee:c.instructions+=1;goto B5a10ee;
case 0x5a10f0:goto L5a10f0;
case 0x5a10f3:c.instructions+=1;goto B5a10f3;
case 0x5a10f8:goto L5a10f8;
case 0x5a10f9:c.instructions+=3;goto B5a10f9;
case 0x5a10fc:c.instructions+=2;goto B5a10fc;
case 0x5a1101:c.instructions+=1;goto B5a1101;
case 0x5a1106:goto L5a1106;
case 0x5a110a:c.instructions+=13;goto B5a110a;
case 0x5a110c:c.instructions+=12;goto B5a110c;
case 0x5a1110:c.instructions+=11;goto B5a1110;
case 0x5a1113:c.instructions+=10;goto B5a1113;
case 0x5a1116:c.instructions+=9;goto B5a1116;
case 0x5a1118:c.instructions+=8;goto B5a1118;
case 0x5a111a:c.instructions+=7;goto B5a111a;
case 0x5a111c:c.instructions+=6;goto B5a111c;
case 0x5a1122:c.instructions+=5;goto B5a1122;
case 0x5a1126:c.instructions+=4;goto B5a1126;
case 0x5a112c:c.instructions+=3;goto B5a112c;
case 0x5a112f:c.instructions+=2;goto B5a112f;
case 0x5a1130:c.instructions+=1;goto B5a1130;
case 0x5a1135:goto L5a1135;
case 0x5a113b:c.instructions+=5;goto B5a113b;
case 0x5a113e:c.instructions+=4;goto B5a113e;
case 0x5a113f:c.instructions+=3;goto B5a113f;
case 0x5a1140:c.instructions+=2;goto B5a1140;
case 0x5a1143:c.instructions+=1;goto B5a1143;
case 0x5a1146:goto L5a1146;
case 0x5a114c:c.instructions+=2;goto B5a114c;
case 0x5a114e:c.instructions+=1;goto B5a114e;
case 0x5a1150:goto L5a1150;
case 0x5a1156:c.instructions+=8;goto B5a1156;
case 0x5a115a:c.instructions+=7;goto B5a115a;
case 0x5a115b:c.instructions+=6;goto B5a115b;
case 0x5a1165:c.instructions+=5;goto B5a1165;
case 0x5a116b:c.instructions+=4;goto B5a116b;
case 0x5a1171:c.instructions+=3;goto B5a1171;
case 0x5a1172:c.instructions+=2;goto B5a1172;
case 0x5a1175:c.instructions+=1;goto B5a1175;
case 0x5a1178:goto L5a1178;
case 0x5a117a:c.instructions+=1;goto B5a117a;
case 0x5a117f:goto L5a117f;
case 0x5a1185:c.instructions+=3;goto B5a1185;
case 0x5a1187:c.instructions+=2;goto B5a1187;
case 0x5a118a:c.instructions+=1;goto B5a118a;
case 0x5a118c:goto L5a118c;
case 0x5a118d:c.instructions+=4;goto B5a118d;
case 0x5a1197:c.instructions+=3;goto B5a1197;
case 0x5a1198:c.instructions+=2;goto B5a1198;
case 0x5a119b:c.instructions+=1;goto B5a119b;
case 0x5a119e:goto L5a119e;
case 0x5a11a1:c.instructions+=10;goto B5a11a1;
case 0x5a11a5:c.instructions+=9;goto B5a11a5;
case 0x5a11a7:c.instructions+=8;goto B5a11a7;
case 0x5a11a8:c.instructions+=7;goto B5a11a8;
case 0x5a11ab:c.instructions+=6;goto B5a11ab;
case 0x5a11ad:c.instructions+=5;goto B5a11ad;
case 0x5a11af:c.instructions+=4;goto B5a11af;
case 0x5a11b1:c.instructions+=3;goto B5a11b1;
case 0x5a11b4:c.instructions+=2;goto B5a11b4;
case 0x5a11b9:c.instructions+=1;goto B5a11b9;
case 0x5a11be:goto L5a11be;
case 0x5a11c2:c.instructions+=2;goto B5a11c2;
case 0x5a11c5:c.instructions+=1;goto B5a11c5;
case 0x5a11cb:goto L5a11cb;
case 0x5a11cc:c.instructions+=3;goto B5a11cc;
case 0x5a11cd:c.instructions+=2;goto B5a11cd;
case 0x5a11d0:c.instructions+=1;goto B5a11d0;
case 0x5a11e0:goto L5a11e0;
case 0x5a11e6:c.instructions+=4;goto B5a11e6;
case 0x5a11ec:c.instructions+=3;goto B5a11ec;
case 0x5a11ee:c.instructions+=2;goto B5a11ee;
case 0x5a11f1:c.instructions+=1;goto B5a11f1;
case 0x5a11f7:goto L5a11f7;
case 0x5a11fd:c.instructions+=4;goto B5a11fd;
case 0x5a1203:c.instructions+=3;goto B5a1203;
case 0x5a1205:c.instructions+=2;goto B5a1205;
case 0x5a1208:c.instructions+=1;goto B5a1208;
case 0x5a120a:goto L5a120a;
case 0x5a120d:c.instructions+=2;goto B5a120d;
case 0x5a1211:c.instructions+=1;goto B5a1211;
case 0x5a1213:goto L5a1213;
case 0x5a1216:c.instructions+=4;goto B5a1216;
case 0x5a121c:c.instructions+=3;goto B5a121c;
case 0x5a121e:c.instructions+=2;goto B5a121e;
case 0x5a1221:c.instructions+=1;goto B5a1221;
case 0x5a1223:goto L5a1223;
case 0x5a1226:c.instructions+=7;goto B5a1226;
case 0x5a1229:c.instructions+=6;goto B5a1229;
case 0x5a122f:c.instructions+=5;goto B5a122f;
case 0x5a1232:c.instructions+=4;goto B5a1232;
case 0x5a1234:c.instructions+=3;goto B5a1234;
case 0x5a1236:c.instructions+=2;goto B5a1236;
case 0x5a1239:c.instructions+=1;goto B5a1239;
case 0x5a123b:goto L5a123b;
case 0x5a1241:c.instructions+=1;goto B5a1241;
case 0x5a1243:goto L5a1243;
case 0x5a1249:goto L5a1249;
case 0x5a124d:c.instructions+=6;goto B5a124d;
case 0x5a1253:c.instructions+=5;goto B5a1253;
case 0x5a1259:c.instructions+=4;goto B5a1259;
case 0x5a125b:c.instructions+=3;goto B5a125b;
case 0x5a125d:c.instructions+=2;goto B5a125d;
case 0x5a1260:c.instructions+=1;goto B5a1260;
case 0x5a1262:goto L5a1262;
case 0x5a1264:c.instructions+=1;goto B5a1264;
case 0x5a126a:goto L5a126a;
case 0x5a1270:c.instructions+=4;goto B5a1270;
case 0x5a1276:c.instructions+=3;goto B5a1276;
case 0x5a1278:c.instructions+=2;goto B5a1278;
case 0x5a127b:c.instructions+=1;goto B5a127b;
case 0x5a127d:goto L5a127d;
case 0x5a1283:c.instructions+=1;goto B5a1283;
case 0x5a1289:goto L5a1289;
case 0x5a1290:goto L5a1290;
case 0x5a1291:c.instructions+=2;goto B5a1291;
case 0x5a1293:c.instructions+=1;goto B5a1293;
case 0x5a1298:goto L5a1298;
case 0x5a129b:c.instructions+=7;goto B5a129b;
case 0x5a129e:c.instructions+=6;goto B5a129e;
case 0x5a12a1:c.instructions+=5;goto B5a12a1;
case 0x5a12a4:c.instructions+=4;goto B5a12a4;
case 0x5a12a7:c.instructions+=3;goto B5a12a7;
case 0x5a12aa:c.instructions+=2;goto B5a12aa;
case 0x5a12ab:c.instructions+=1;goto B5a12ab;
case 0x5a12ad:goto L5a12ad;
case 0x5a12af:c.instructions+=1;goto B5a12af;
case 0x5a12b1:goto L5a12b1;
case 0x5a12b7:goto L5a12b7;
case 0x5a12b9:c.instructions+=6;goto B5a12b9;
case 0x5a12bd:c.instructions+=5;goto B5a12bd;
case 0x5a12bf:c.instructions+=4;goto B5a12bf;
case 0x5a12c1:c.instructions+=3;goto B5a12c1;
case 0x5a12c3:c.instructions+=2;goto B5a12c3;
case 0x5a12c5:c.instructions+=1;goto B5a12c5;
case 0x5a12d0:goto L5a12d0;
case 0x5a12d1:c.instructions+=4;goto B5a12d1;
case 0x5a12d2:c.instructions+=3;goto B5a12d2;
case 0x5a12d3:c.instructions+=2;goto B5a12d3;
case 0x5a12d5:c.instructions+=1;goto B5a12d5;
case 0x5a12da:goto L5a12da;
case 0x5a12dd:c.instructions+=7;goto B5a12dd;
case 0x5a12e1:c.instructions+=6;goto B5a12e1;
case 0x5a12e7:c.instructions+=5;goto B5a12e7;
case 0x5a12ed:c.instructions+=4;goto B5a12ed;
case 0x5a12f3:c.instructions+=3;goto B5a12f3;
case 0x5a12f5:c.instructions+=2;goto B5a12f5;
case 0x5a12f8:c.instructions+=1;goto B5a12f8;
case 0x5a12fa:goto L5a12fa;
case 0x5a12ff:c.instructions+=1;goto B5a12ff;
case 0x5a1301:goto L5a1301;
case 0x5a1303:goto L5a1303;
case 0x5a1306:c.instructions+=5;goto B5a1306;
case 0x5a1309:c.instructions+=4;goto B5a1309;
case 0x5a130f:c.instructions+=3;goto B5a130f;
case 0x5a1311:c.instructions+=2;goto B5a1311;
case 0x5a1314:c.instructions+=1;goto B5a1314;
case 0x5a1316:goto L5a1316;
case 0x5a1319:c.instructions+=3;goto B5a1319;
case 0x5a131f:c.instructions+=2;goto B5a131f;
case 0x5a1321:c.instructions+=1;goto B5a1321;
case 0x5a1323:goto L5a1323;
case 0x5a1326:c.instructions+=3;goto B5a1326;
case 0x5a132c:c.instructions+=2;goto B5a132c;
case 0x5a132e:c.instructions+=1;goto B5a132e;
case 0x5a1330:goto L5a1330;
case 0x5a1335:goto L5a1335;
case 0x5a1337:c.instructions+=9;goto B5a1337;
case 0x5a133a:c.instructions+=8;goto B5a133a;
case 0x5a133e:c.instructions+=7;goto B5a133e;
case 0x5a1341:c.instructions+=6;goto B5a1341;
case 0x5a1344:c.instructions+=5;goto B5a1344;
case 0x5a1348:c.instructions+=4;goto B5a1348;
case 0x5a134b:c.instructions+=3;goto B5a134b;
case 0x5a134d:c.instructions+=2;goto B5a134d;
case 0x5a1350:c.instructions+=1;goto B5a1350;
case 0x5a1352:goto L5a1352;
case 0x5a1356:c.instructions+=3;goto B5a1356;
case 0x5a135c:c.instructions+=2;goto B5a135c;
case 0x5a135e:c.instructions+=1;goto B5a135e;
case 0x5a1360:goto L5a1360;
case 0x5a1364:goto L5a1364;
case 0x5a1366:c.instructions+=5;goto B5a1366;
case 0x5a1369:c.instructions+=4;goto B5a1369;
case 0x5a136c:c.instructions+=3;goto B5a136c;
case 0x5a136e:c.instructions+=2;goto B5a136e;
case 0x5a1371:c.instructions+=1;goto B5a1371;
case 0x5a1373:goto L5a1373;
case 0x5a1379:c.instructions+=3;goto B5a1379;
case 0x5a137b:c.instructions+=2;goto B5a137b;
case 0x5a137e:c.instructions+=1;goto B5a137e;
case 0x5a1380:goto L5a1380;
case 0x5a1385:c.instructions+=1;goto B5a1385;
case 0x5a1387:goto L5a1387;
case 0x5a1389:goto L5a1389;
case 0x5a138c:c.instructions+=5;goto B5a138c;
case 0x5a138f:c.instructions+=4;goto B5a138f;
case 0x5a1395:c.instructions+=3;goto B5a1395;
case 0x5a1397:c.instructions+=2;goto B5a1397;
case 0x5a139a:c.instructions+=1;goto B5a139a;
case 0x5a139c:goto L5a139c;
case 0x5a139f:c.instructions+=3;goto B5a139f;
case 0x5a13a5:c.instructions+=2;goto B5a13a5;
case 0x5a13a7:c.instructions+=1;goto B5a13a7;
case 0x5a13a9:goto L5a13a9;
case 0x5a13ac:c.instructions+=3;goto B5a13ac;
case 0x5a13b2:c.instructions+=2;goto B5a13b2;
case 0x5a13b4:c.instructions+=1;goto B5a13b4;
case 0x5a13b6:goto L5a13b6;
case 0x5a13bb:goto L5a13bb;
case 0x5a13bd:c.instructions+=9;goto B5a13bd;
case 0x5a13c0:c.instructions+=8;goto B5a13c0;
case 0x5a13c4:c.instructions+=7;goto B5a13c4;
case 0x5a13c7:c.instructions+=6;goto B5a13c7;
case 0x5a13ca:c.instructions+=5;goto B5a13ca;
case 0x5a13ce:c.instructions+=4;goto B5a13ce;
case 0x5a13d1:c.instructions+=3;goto B5a13d1;
case 0x5a13d3:c.instructions+=2;goto B5a13d3;
case 0x5a13d6:c.instructions+=1;goto B5a13d6;
case 0x5a13d8:goto L5a13d8;
case 0x5a13dc:c.instructions+=3;goto B5a13dc;
case 0x5a13e2:c.instructions+=2;goto B5a13e2;
case 0x5a13e4:c.instructions+=1;goto B5a13e4;
case 0x5a13e6:goto L5a13e6;
case 0x5a13ea:goto L5a13ea;
case 0x5a13ec:c.instructions+=4;goto B5a13ec;
case 0x5a13ef:c.instructions+=3;goto B5a13ef;
case 0x5a13f2:c.instructions+=2;goto B5a13f2;
case 0x5a13f4:c.instructions+=1;goto B5a13f4;
case 0x5a13f7:goto L5a13f7;
case 0x5a13f8:c.instructions+=4;goto B5a13f8;
case 0x5a13fa:c.instructions+=3;goto B5a13fa;
case 0x5a13fb:c.instructions+=2;goto B5a13fb;
case 0x5a13fc:c.instructions+=1;goto B5a13fc;
case 0x5a1400:goto L5a1400;
case 0x5a1401:c.instructions+=4;goto B5a1401;
case 0x5a1402:c.instructions+=3;goto B5a1402;
case 0x5a1403:c.instructions+=2;goto B5a1403;
case 0x5a1405:c.instructions+=1;goto B5a1405;
case 0x5a140a:goto L5a140a;
case 0x5a140d:c.instructions+=5;goto B5a140d;
case 0x5a1410:c.instructions+=4;goto B5a1410;
case 0x5a1415:c.instructions+=3;goto B5a1415;
case 0x5a1417:c.instructions+=2;goto B5a1417;
case 0x5a1419:c.instructions+=1;goto B5a1419;
case 0x5a141b:goto L5a141b;
case 0x5a141e:c.instructions+=4;goto B5a141e;
case 0x5a1428:c.instructions+=3;goto B5a1428;
case 0x5a142b:c.instructions+=2;goto B5a142b;
case 0x5a142d:c.instructions+=1;goto B5a142d;
case 0x5a142f:goto L5a142f;
case 0x5a1432:c.instructions+=8;goto B5a1432;
case 0x5a1435:c.instructions+=7;goto B5a1435;
case 0x5a143b:c.instructions+=6;goto B5a143b;
case 0x5a143e:c.instructions+=5;goto B5a143e;
case 0x5a1441:c.instructions+=4;goto B5a1441;
case 0x5a1447:c.instructions+=3;goto B5a1447;
case 0x5a1449:c.instructions+=2;goto B5a1449;
case 0x5a144c:c.instructions+=1;goto B5a144c;
case 0x5a1452:goto L5a1452;
case 0x5a1455:c.instructions+=4;goto B5a1455;
case 0x5a145b:c.instructions+=3;goto B5a145b;
case 0x5a145d:c.instructions+=2;goto B5a145d;
case 0x5a1460:c.instructions+=1;goto B5a1460;
case 0x5a1466:goto L5a1466;
case 0x5a146c:c.instructions+=3;goto B5a146c;
case 0x5a1472:c.instructions+=2;goto B5a1472;
case 0x5a1475:c.instructions+=1;goto B5a1475;
case 0x5a147a:goto L5a147a;
case 0x5a147d:c.instructions+=1;goto B5a147d;
case 0x5a1483:goto L5a1483;
case 0x5a1486:c.instructions+=1;goto B5a1486;
case 0x5a148c:goto L5a148c;
case 0x5a148f:c.instructions+=3;goto B5a148f;
case 0x5a1492:c.instructions+=2;goto B5a1492;
case 0x5a1495:c.instructions+=1;goto B5a1495;
case 0x5a149a:goto L5a149a;
case 0x5a149d:c.instructions+=2;goto B5a149d;
case 0x5a149f:c.instructions+=1;goto B5a149f;
case 0x5a14a5:goto L5a14a5;
case 0x5a14ac:goto L5a14ac;
case 0x5a14af:c.instructions+=4;goto B5a14af;
case 0x5a14b5:c.instructions+=3;goto B5a14b5;
case 0x5a14b7:c.instructions+=2;goto B5a14b7;
case 0x5a14ba:c.instructions+=1;goto B5a14ba;
case 0x5a14bc:goto L5a14bc;
case 0x5a14bf:c.instructions+=4;goto B5a14bf;
case 0x5a14c5:c.instructions+=3;goto B5a14c5;
case 0x5a14c7:c.instructions+=2;goto B5a14c7;
case 0x5a14ca:c.instructions+=1;goto B5a14ca;
case 0x5a14cc:goto L5a14cc;
case 0x5a14d2:c.instructions+=2;goto B5a14d2;
case 0x5a14d8:c.instructions+=1;goto B5a14d8;
case 0x5a14db:goto L5a14db;
case 0x5a14de:c.instructions+=6;goto B5a14de;
case 0x5a14df:c.instructions+=5;goto B5a14df;
case 0x5a14e9:c.instructions+=4;goto B5a14e9;
case 0x5a14ec:c.instructions+=3;goto B5a14ec;
case 0x5a14f1:c.instructions+=2;goto B5a14f1;
case 0x5a14f3:c.instructions+=1;goto B5a14f3;
case 0x5a14f5:goto L5a14f5;
case 0x5a14f7:c.instructions+=1;goto B5a14f7;
case 0x5a14fc:goto L5a14fc;
case 0x5a14fe:c.instructions+=1;goto B5a14fe;
case 0x5a1500:goto L5a1500;
case 0x5a1503:goto L5a1503;
case 0x5a1506:c.instructions+=2;goto B5a1506;
case 0x5a1507:c.instructions+=1;goto B5a1507;
case 0x5a1509:goto L5a1509;
case 0x5a150c:c.instructions+=6;goto B5a150c;
case 0x5a150f:c.instructions+=5;goto B5a150f;
case 0x5a1512:c.instructions+=4;goto B5a1512;
case 0x5a1518:c.instructions+=3;goto B5a1518;
case 0x5a151b:c.instructions+=2;goto B5a151b;
case 0x5a151e:c.instructions+=1;goto B5a151e;
case 0x5a1520:goto L5a1520;
case 0x5a1523:goto L5a1523;
case 0x5a1526:c.instructions+=1;goto B5a1526;
case 0x5a152c:goto L5a152c;
case 0x5a152f:c.instructions+=1;goto B5a152f;
case 0x5a1534:goto L5a1534;
case 0x5a1537:c.instructions+=1;goto B5a1537;
case 0x5a1539:goto L5a1539;
case 0x5a153f:c.instructions+=1;goto B5a153f;
case 0x5a1541:goto L5a1541;
case 0x5a1547:goto L5a1547;
case 0x5a154a:c.instructions+=7;goto B5a154a;
case 0x5a1550:c.instructions+=6;goto B5a1550;
case 0x5a1555:c.instructions+=5;goto B5a1555;
case 0x5a1558:c.instructions+=4;goto B5a1558;
case 0x5a155e:c.instructions+=3;goto B5a155e;
case 0x5a1560:c.instructions+=2;goto B5a1560;
case 0x5a1563:c.instructions+=1;goto B5a1563;
case 0x5a1565:goto L5a1565;
case 0x5a1567:c.instructions+=2;goto B5a1567;
case 0x5a156e:c.instructions+=1;goto B5a156e;
case 0x5a1573:goto L5a1573;
case 0x5a1575:c.instructions+=1;goto B5a1575;
case 0x5a1577:goto L5a1577;
case 0x5a157a:c.instructions+=1;goto B5a157a;
case 0x5a157c:goto L5a157c;
case 0x5a157f:goto L5a157f;
case 0x5a1581:c.instructions+=1;goto B5a1581;
case 0x5a1586:goto L5a1586;
case 0x5a1588:c.instructions+=1;goto B5a1588;
case 0x5a158a:goto L5a158a;
case 0x5a158d:c.instructions+=1;goto B5a158d;
case 0x5a158f:goto L5a158f;
case 0x5a1592:goto L5a1592;
case 0x5a1595:c.instructions+=1;goto B5a1595;
case 0x5a159b:goto L5a159b;
case 0x5a159e:c.instructions+=1;goto B5a159e;
case 0x5a15a3:goto L5a15a3;
case 0x5a15a6:c.instructions+=1;goto B5a15a6;
case 0x5a15a8:goto L5a15a8;
case 0x5a15ae:c.instructions+=1;goto B5a15ae;
case 0x5a15b0:goto L5a15b0;
case 0x5a15b6:goto L5a15b6;
case 0x5a15b9:c.instructions+=7;goto B5a15b9;
case 0x5a15bf:c.instructions+=6;goto B5a15bf;
case 0x5a15c4:c.instructions+=5;goto B5a15c4;
case 0x5a15c7:c.instructions+=4;goto B5a15c7;
case 0x5a15cd:c.instructions+=3;goto B5a15cd;
case 0x5a15cf:c.instructions+=2;goto B5a15cf;
case 0x5a15d2:c.instructions+=1;goto B5a15d2;
case 0x5a15d4:goto L5a15d4;
case 0x5a15d7:c.instructions+=1;goto B5a15d7;
case 0x5a15da:goto L5a15da;
case 0x5a15dd:c.instructions+=1;goto B5a15dd;
case 0x5a15df:goto L5a15df;
case 0x5a15e2:c.instructions+=1;goto B5a15e2;
case 0x5a15e4:goto L5a15e4;
case 0x5a15e7:c.instructions+=1;goto B5a15e7;
case 0x5a15e9:goto L5a15e9;
case 0x5a15ef:c.instructions+=1;goto B5a15ef;
case 0x5a15f1:goto L5a15f1;
case 0x5a15f7:goto L5a15f7;
case 0x5a15fa:c.instructions+=5;goto B5a15fa;
case 0x5a1600:c.instructions+=4;goto B5a1600;
case 0x5a1603:c.instructions+=3;goto B5a1603;
case 0x5a1606:c.instructions+=2;goto B5a1606;
case 0x5a1609:c.instructions+=1;goto B5a1609;
case 0x5a160b:goto L5a160b;
case 0x5a160d:c.instructions+=1;goto B5a160d;
case 0x5a1612:goto L5a1612;
case 0x5a1614:c.instructions+=1;goto B5a1614;
case 0x5a1616:goto L5a1616;
case 0x5a1619:c.instructions+=1;goto B5a1619;
case 0x5a161b:goto L5a161b;
case 0x5a1622:goto L5a1622;
case 0x5a1624:c.instructions+=1;goto B5a1624;
case 0x5a1629:goto L5a1629;
case 0x5a162c:c.instructions+=4;goto B5a162c;
case 0x5a1632:c.instructions+=3;goto B5a1632;
case 0x5a1634:c.instructions+=2;goto B5a1634;
case 0x5a1637:c.instructions+=1;goto B5a1637;
case 0x5a1639:goto L5a1639;
case 0x5a163c:c.instructions+=8;goto B5a163c;
case 0x5a1642:c.instructions+=7;goto B5a1642;
case 0x5a1648:c.instructions+=6;goto B5a1648;
case 0x5a164e:c.instructions+=5;goto B5a164e;
case 0x5a1651:c.instructions+=4;goto B5a1651;
case 0x5a1657:c.instructions+=3;goto B5a1657;
case 0x5a1659:c.instructions+=2;goto B5a1659;
case 0x5a165c:c.instructions+=1;goto B5a165c;
case 0x5a1662:goto L5a1662;
case 0x5a1665:c.instructions+=4;goto B5a1665;
case 0x5a1666:c.instructions+=3;goto B5a1666;
case 0x5a1667:c.instructions+=2;goto B5a1667;
case 0x5a1668:c.instructions+=1;goto B5a1668;
case 0x5a1669:goto L5a1669;
case 0x5a166d:c.instructions+=1;goto B5a166d;
case 0x5a166f:goto L5a166f;
case 0x5a1672:c.instructions+=4;goto B5a1672;
case 0x5a1678:c.instructions+=3;goto B5a1678;
case 0x5a167a:c.instructions+=2;goto B5a167a;
case 0x5a167d:c.instructions+=1;goto B5a167d;
case 0x5a167f:goto L5a167f;
case 0x5a1685:c.instructions+=10;goto B5a1685;
case 0x5a168b:c.instructions+=9;goto B5a168b;
case 0x5a168e:c.instructions+=8;goto B5a168e;
case 0x5a1694:c.instructions+=7;goto B5a1694;
case 0x5a169a:c.instructions+=6;goto B5a169a;
case 0x5a169d:c.instructions+=5;goto B5a169d;
case 0x5a16a3:c.instructions+=4;goto B5a16a3;
case 0x5a16a9:c.instructions+=3;goto B5a16a9;
case 0x5a16ab:c.instructions+=2;goto B5a16ab;
case 0x5a16ae:c.instructions+=1;goto B5a16ae;
case 0x5a16b0:goto L5a16b0;
case 0x5a16b6:c.instructions+=3;goto B5a16b6;
case 0x5a16b9:c.instructions+=2;goto B5a16b9;
case 0x5a16bf:c.instructions+=1;goto B5a16bf;
case 0x5a16c1:goto L5a16c1;
case 0x5a16c3:goto L5a16c3;
case 0x5a16c9:c.instructions+=6;goto B5a16c9;
case 0x5a16cf:c.instructions+=5;goto B5a16cf;
case 0x5a16d2:c.instructions+=4;goto B5a16d2;
case 0x5a16d8:c.instructions+=3;goto B5a16d8;
case 0x5a16da:c.instructions+=2;goto B5a16da;
case 0x5a16dd:c.instructions+=1;goto B5a16dd;
case 0x5a16df:goto L5a16df;
case 0x5a16e2:c.instructions+=1;goto B5a16e2;
case 0x5a16e5:goto L5a16e5;
case 0x5a16e6:c.instructions+=3;goto B5a16e6;
case 0x5a16e7:c.instructions+=2;goto B5a16e7;
case 0x5a16e8:c.instructions+=1;goto B5a16e8;
case 0x5a1700:goto L5a1700;
case 0x5a1705:c.instructions+=2;goto B5a1705;
case 0x5a1707:c.instructions+=1;goto B5a1707;
case 0x5a1709:goto L5a1709;
case 0x5a170e:c.instructions+=2;goto B5a170e;
case 0x5a1710:c.instructions+=1;goto B5a1710;
case 0x5a1712:goto L5a1712;
case 0x5a1715:c.instructions+=2;goto B5a1715;
case 0x5a1718:c.instructions+=1;goto B5a1718;
case 0x5a171a:goto L5a171a;
case 0x5a171c:c.instructions+=4;goto B5a171c;
case 0x5a171d:c.instructions+=3;goto B5a171d;
case 0x5a1721:c.instructions+=2;goto B5a1721;
case 0x5a1722:c.instructions+=1;goto B5a1722;
case 0x5a1727:goto L5a1727;
case 0x5a172a:goto L5a172a;
case 0x5a1730:goto L5a1730;
case 0x5a1735:c.instructions+=4;goto B5a1735;
case 0x5a1736:c.instructions+=3;goto B5a1736;
case 0x5a1738:c.instructions+=2;goto B5a1738;
case 0x5a173e:c.instructions+=1;goto B5a173e;
case 0x5a1740:goto L5a1740;
case 0x5a1741:c.instructions+=1;goto B5a1741;
case 0x5a1746:goto L5a1746;
case 0x5a1749:goto L5a1749;
case 0x5a174b:c.instructions+=2;goto B5a174b;
case 0x5a174c:c.instructions+=1;goto B5a174c;
case 0x5a1750:goto L5a1750;
case 0x5a1751:c.instructions+=9;goto B5a1751;
case 0x5a1753:c.instructions+=8;goto B5a1753;
case 0x5a1756:c.instructions+=7;goto B5a1756;
case 0x5a1759:c.instructions+=6;goto B5a1759;
case 0x5a175c:c.instructions+=5;goto B5a175c;
case 0x5a1762:c.instructions+=4;goto B5a1762;
case 0x5a1763:c.instructions+=3;goto B5a1763;
case 0x5a1764:c.instructions+=2;goto B5a1764;
case 0x5a1765:c.instructions+=1;goto B5a1765;
case 0x5a176b:goto L5a176b;
case 0x5a176e:c.instructions+=5;goto B5a176e;
case 0x5a1772:c.instructions+=4;goto B5a1772;
case 0x5a1775:c.instructions+=3;goto B5a1775;
case 0x5a1777:c.instructions+=2;goto B5a1777;
case 0x5a177b:c.instructions+=1;goto B5a177b;
case 0x5a1781:goto L5a1781;
case 0x5a1783:c.instructions+=2;goto B5a1783;
case 0x5a1788:c.instructions+=1;goto B5a1788;
case 0x5a178e:goto L5a178e;
case 0x5a1793:c.instructions+=1;goto B5a1793;
case 0x5a1799:goto L5a1799;
case 0x5a179c:c.instructions+=45;goto B5a179c;
case 0x5a17a0:c.instructions+=44;goto B5a17a0;
case 0x5a17a3:c.instructions+=43;goto B5a17a3;
case 0x5a17a7:c.instructions+=42;goto B5a17a7;
case 0x5a17aa:c.instructions+=41;goto B5a17aa;
case 0x5a17ac:c.instructions+=40;goto B5a17ac;
case 0x5a17af:c.instructions+=39;goto B5a17af;
case 0x5a17b1:c.instructions+=38;goto B5a17b1;
case 0x5a17b5:c.instructions+=37;goto B5a17b5;
case 0x5a17b8:c.instructions+=36;goto B5a17b8;
case 0x5a17bc:c.instructions+=35;goto B5a17bc;
case 0x5a17bf:c.instructions+=34;goto B5a17bf;
case 0x5a17c3:c.instructions+=33;goto B5a17c3;
case 0x5a17c8:c.instructions+=32;goto B5a17c8;
case 0x5a17ca:c.instructions+=31;goto B5a17ca;
case 0x5a17ce:c.instructions+=30;goto B5a17ce;
case 0x5a17d1:c.instructions+=29;goto B5a17d1;
case 0x5a17d3:c.instructions+=28;goto B5a17d3;
case 0x5a17d5:c.instructions+=27;goto B5a17d5;
case 0x5a17d8:c.instructions+=26;goto B5a17d8;
case 0x5a17dc:c.instructions+=25;goto B5a17dc;
case 0x5a17e2:c.instructions+=24;goto B5a17e2;
case 0x5a17e5:c.instructions+=23;goto B5a17e5;
case 0x5a17e8:c.instructions+=22;goto B5a17e8;
case 0x5a17ea:c.instructions+=21;goto B5a17ea;
case 0x5a17f0:c.instructions+=20;goto B5a17f0;
case 0x5a17f2:c.instructions+=19;goto B5a17f2;
case 0x5a17f6:c.instructions+=18;goto B5a17f6;
case 0x5a17fa:c.instructions+=17;goto B5a17fa;
case 0x5a17fd:c.instructions+=16;goto B5a17fd;
case 0x5a1800:c.instructions+=15;goto B5a1800;
case 0x5a1803:c.instructions+=14;goto B5a1803;
case 0x5a1806:c.instructions+=13;goto B5a1806;
case 0x5a180a:c.instructions+=12;goto B5a180a;
case 0x5a180d:c.instructions+=11;goto B5a180d;
case 0x5a1813:c.instructions+=10;goto B5a1813;
case 0x5a181a:c.instructions+=9;goto B5a181a;
case 0x5a181d:c.instructions+=8;goto B5a181d;
case 0x5a181f:c.instructions+=7;goto B5a181f;
case 0x5a1822:c.instructions+=6;goto B5a1822;
case 0x5a1825:c.instructions+=5;goto B5a1825;
case 0x5a1828:c.instructions+=4;goto B5a1828;
case 0x5a182b:c.instructions+=3;goto B5a182b;
case 0x5a182e:c.instructions+=2;goto B5a182e;
case 0x5a1831:c.instructions+=1;goto B5a1831;
case 0x5a1835:goto L5a1835;
case 0x5a1837:c.instructions+=1;goto B5a1837;
case 0x5a183d:goto L5a183d;
case 0x5a1842:c.instructions+=6;goto B5a1842;
case 0x5a1843:c.instructions+=5;goto B5a1843;
case 0x5a1844:c.instructions+=4;goto B5a1844;
case 0x5a1845:c.instructions+=3;goto B5a1845;
case 0x5a1847:c.instructions+=2;goto B5a1847;
case 0x5a1848:c.instructions+=1;goto B5a1848;
case 0x5a1849:goto L5a1849;
case 0x5a184a:c.instructions+=6;goto B5a184a;
case 0x5a184b:c.instructions+=5;goto B5a184b;
case 0x5a184d:c.instructions+=4;goto B5a184d;
case 0x5a184e:c.instructions+=3;goto B5a184e;
case 0x5a1850:c.instructions+=2;goto B5a1850;
case 0x5a1851:c.instructions+=1;goto B5a1851;
case 0x5a1860:goto L5a1860;
case 0x5a1864:c.instructions+=2;goto B5a1864;
case 0x5a186a:c.instructions+=1;goto B5a186a;
case 0x5a186c:goto L5a186c;
case 0x5a186f:c.instructions+=5;goto B5a186f;
case 0x5a1870:c.instructions+=4;goto B5a1870;
case 0x5a1874:c.instructions+=3;goto B5a1874;
case 0x5a1877:c.instructions+=2;goto B5a1877;
case 0x5a1879:c.instructions+=1;goto B5a1879;
case 0x5a187b:goto L5a187b;
case 0x5a1880:goto L5a1880;
case 0x5a1882:c.instructions+=2;goto B5a1882;
case 0x5a1887:c.instructions+=1;goto B5a1887;
case 0x5a1889:goto L5a1889;
case 0x5a188e:c.instructions+=1;goto B5a188e;
case 0x5a1890:goto L5a1890;
case 0x5a1893:c.instructions+=5;goto B5a1893;
case 0x5a1896:c.instructions+=4;goto B5a1896;
case 0x5a1898:c.instructions+=3;goto B5a1898;
case 0x5a189b:c.instructions+=2;goto B5a189b;
case 0x5a189d:c.instructions+=1;goto B5a189d;
case 0x5a18a0:goto L5a18a0;
case 0x5a18a3:c.instructions+=3;goto B5a18a3;
case 0x5a18a7:c.instructions+=2;goto B5a18a7;
case 0x5a18a9:c.instructions+=1;goto B5a18a9;
case 0x5a18ab:goto L5a18ab;
case 0x5a18b0:c.instructions+=2;goto B5a18b0;
case 0x5a18b1:c.instructions+=1;goto B5a18b1;
case 0x5a18b2:goto L5a18b2;
case 0x5a18b4:c.instructions+=1;goto B5a18b4;
case 0x5a18c0:goto L5a18c0;
case 0x5a18c1:c.instructions+=3;goto B5a18c1;
case 0x5a18c7:c.instructions+=2;goto B5a18c7;
case 0x5a18cc:c.instructions+=1;goto B5a18cc;
case 0x5a18d1:goto L5a18d1;
case 0x5a18d3:c.instructions+=1;goto B5a18d3;
case 0x5a18d5:goto L5a18d5;
case 0x5a18d9:c.instructions+=1;goto B5a18d9;
case 0x5a18e0:goto L5a18e0;
case 0x5a18e3:c.instructions+=1;goto B5a18e3;
case 0x5a18e5:goto L5a18e5;
case 0x5a18e7:c.instructions+=2;goto B5a18e7;
case 0x5a18e9:c.instructions+=1;goto B5a18e9;
case 0x5a18eb:goto L5a18eb;
case 0x5a18ed:c.instructions+=2;goto B5a18ed;
case 0x5a18ee:c.instructions+=1;goto B5a18ee;
case 0x5a18ef:goto L5a18ef;
case 0x5a18f3:c.instructions+=2;goto B5a18f3;
case 0x5a18f5:c.instructions+=1;goto B5a18f5;
case 0x5a18f7:goto L5a18f7;
case 0x5a18fa:c.instructions+=7;goto B5a18fa;
case 0x5a18fd:c.instructions+=6;goto B5a18fd;
case 0x5a18ff:c.instructions+=5;goto B5a18ff;
case 0x5a1901:c.instructions+=4;goto B5a1901;
case 0x5a1904:c.instructions+=3;goto B5a1904;
case 0x5a1907:c.instructions+=2;goto B5a1907;
case 0x5a190a:c.instructions+=1;goto B5a190a;
case 0x5a190e:goto L5a190e;
case 0x5a1910:c.instructions+=2;goto B5a1910;
case 0x5a1911:c.instructions+=1;goto B5a1911;
case 0x5a1920:goto L5a1920;
case 0x5a1921:c.instructions+=6;goto B5a1921;
case 0x5a1922:c.instructions+=5;goto B5a1922;
case 0x5a1924:c.instructions+=4;goto B5a1924;
case 0x5a1927:c.instructions+=3;goto B5a1927;
case 0x5a1929:c.instructions+=2;goto B5a1929;
case 0x5a192b:c.instructions+=1;goto B5a192b;
case 0x5a192d:goto L5a192d;
case 0x5a1930:c.instructions+=7;goto B5a1930;
case 0x5a1931:c.instructions+=6;goto B5a1931;
case 0x5a1934:c.instructions+=5;goto B5a1934;
case 0x5a1939:c.instructions+=4;goto B5a1939;
case 0x5a193a:c.instructions+=3;goto B5a193a;
case 0x5a193c:c.instructions+=2;goto B5a193c;
case 0x5a193d:c.instructions+=1;goto B5a193d;
case 0x5a1942:goto L5a1942;
case 0x5a1943:c.instructions+=1;goto B5a1943;
case 0x5a1948:goto L5a1948;
case 0x5a194b:c.instructions+=1;goto B5a194b;
case 0x5a194c:goto L5a194c;
case 0x5a194f:c.instructions+=2;goto B5a194f;
case 0x5a1950:c.instructions+=1;goto B5a1950;
case 0x5a1955:goto L5a1955;
case 0x5a1958:c.instructions+=7;goto B5a1958;
case 0x5a195b:c.instructions+=6;goto B5a195b;
case 0x5a195e:c.instructions+=5;goto B5a195e;
case 0x5a1961:c.instructions+=4;goto B5a1961;
case 0x5a1965:c.instructions+=3;goto B5a1965;
case 0x5a1966:c.instructions+=2;goto B5a1966;
case 0x5a1967:c.instructions+=1;goto B5a1967;
case 0x5a1970:goto L5a1970;
case 0x5a1974:c.instructions+=25;goto B5a1974;
case 0x5a1975:c.instructions+=24;goto B5a1975;
case 0x5a1978:c.instructions+=23;goto B5a1978;
case 0x5a197b:c.instructions+=22;goto B5a197b;
case 0x5a197f:c.instructions+=21;goto B5a197f;
case 0x5a1982:c.instructions+=20;goto B5a1982;
case 0x5a1984:c.instructions+=19;goto B5a1984;
case 0x5a1988:c.instructions+=18;goto B5a1988;
case 0x5a198c:c.instructions+=17;goto B5a198c;
case 0x5a1990:c.instructions+=16;goto B5a1990;
case 0x5a1994:c.instructions+=15;goto B5a1994;
case 0x5a1998:c.instructions+=14;goto B5a1998;
case 0x5a199c:c.instructions+=13;goto B5a199c;
case 0x5a19a0:c.instructions+=12;goto B5a19a0;
case 0x5a19a4:c.instructions+=11;goto B5a19a4;
case 0x5a19a7:c.instructions+=10;goto B5a19a7;
case 0x5a19aa:c.instructions+=9;goto B5a19aa;
case 0x5a19ad:c.instructions+=8;goto B5a19ad;
case 0x5a19af:c.instructions+=7;goto B5a19af;
case 0x5a19b2:c.instructions+=6;goto B5a19b2;
case 0x5a19b5:c.instructions+=5;goto B5a19b5;
case 0x5a19b6:c.instructions+=4;goto B5a19b6;
case 0x5a19b9:c.instructions+=3;goto B5a19b9;
case 0x5a19bc:c.instructions+=2;goto B5a19bc;
case 0x5a19be:c.instructions+=1;goto B5a19be;
case 0x5a19c0:goto L5a19c0;
case 0x5a19c3:c.instructions+=13;goto B5a19c3;
case 0x5a19c6:c.instructions+=12;goto B5a19c6;
case 0x5a19c9:c.instructions+=11;goto B5a19c9;
case 0x5a19cd:c.instructions+=10;goto B5a19cd;
case 0x5a19d0:c.instructions+=9;goto B5a19d0;
case 0x5a19d3:c.instructions+=8;goto B5a19d3;
case 0x5a19d6:c.instructions+=7;goto B5a19d6;
case 0x5a19d9:c.instructions+=6;goto B5a19d9;
case 0x5a19db:c.instructions+=5;goto B5a19db;
case 0x5a19dd:c.instructions+=4;goto B5a19dd;
case 0x5a19e0:c.instructions+=3;goto B5a19e0;
case 0x5a19e2:c.instructions+=2;goto B5a19e2;
case 0x5a19e6:c.instructions+=1;goto B5a19e6;
case 0x5a19e9:goto L5a19e9;
case 0x5a19f0:goto L5a19f0;
case 0x5a19f1:c.instructions+=9;goto B5a19f1;
case 0x5a19f3:c.instructions+=8;goto B5a19f3;
case 0x5a19f6:c.instructions+=7;goto B5a19f6;
case 0x5a19f9:c.instructions+=6;goto B5a19f9;
case 0x5a19fa:c.instructions+=5;goto B5a19fa;
case 0x5a19fb:c.instructions+=4;goto B5a19fb;
case 0x5a19fc:c.instructions+=3;goto B5a19fc;
case 0x5a19fe:c.instructions+=2;goto B5a19fe;
case 0x5a1a02:c.instructions+=1;goto B5a1a02;
case 0x5a1a07:goto L5a1a07;
case 0x5a1a0b:c.instructions+=4;goto B5a1a0b;
case 0x5a1a0c:c.instructions+=3;goto B5a1a0c;
case 0x5a1a0e:c.instructions+=2;goto B5a1a0e;
case 0x5a1a10:c.instructions+=1;goto B5a1a10;
case 0x5a1a15:goto L5a1a15;
case 0x5a1a18:c.instructions+=6;goto B5a1a18;
case 0x5a1a1b:c.instructions+=5;goto B5a1a1b;
case 0x5a1a1f:c.instructions+=4;goto B5a1a1f;
case 0x5a1a20:c.instructions+=3;goto B5a1a20;
case 0x5a1a21:c.instructions+=2;goto B5a1a21;
case 0x5a1a22:c.instructions+=1;goto B5a1a22;
case 0x5a1a27:goto L5a1a27;
case 0x5a1a2a:c.instructions+=4;goto B5a1a2a;
case 0x5a1a2f:c.instructions+=3;goto B5a1a2f;
case 0x5a1a32:c.instructions+=2;goto B5a1a32;
case 0x5a1a34:c.instructions+=1;goto B5a1a34;
case 0x5a1a36:goto L5a1a36;
case 0x5a1a3a:c.instructions+=4;goto B5a1a3a;
case 0x5a1a3b:c.instructions+=3;goto B5a1a3b;
case 0x5a1a3c:c.instructions+=2;goto B5a1a3c;
case 0x5a1a3e:c.instructions+=1;goto B5a1a3e;
case 0x5a1a43:goto L5a1a43;
case 0x5a1a46:c.instructions+=5;goto B5a1a46;
case 0x5a1a49:c.instructions+=4;goto B5a1a49;
case 0x5a1a4a:c.instructions+=3;goto B5a1a4a;
case 0x5a1a4b:c.instructions+=2;goto B5a1a4b;
case 0x5a1a4c:c.instructions+=1;goto B5a1a4c;
case 0x5a1a51:goto L5a1a51;
case 0x5a1a54:c.instructions+=4;goto B5a1a54;
case 0x5a1a57:c.instructions+=3;goto B5a1a57;
case 0x5a1a58:c.instructions+=2;goto B5a1a58;
case 0x5a1a5a:c.instructions+=1;goto B5a1a5a;
case 0x5a1a5c:goto L5a1a5c;
case 0x5a1a5d:c.instructions+=5;goto B5a1a5d;
case 0x5a1a5e:c.instructions+=4;goto B5a1a5e;
case 0x5a1a5f:c.instructions+=3;goto B5a1a5f;
case 0x5a1a61:c.instructions+=2;goto B5a1a61;
case 0x5a1a62:c.instructions+=1;goto B5a1a62;
case 0x5a1a70:goto L5a1a70;
case 0x5a1a75:c.instructions+=5;goto B5a1a75;
case 0x5a1a77:c.instructions+=4;goto B5a1a77;
case 0x5a1a79:c.instructions+=3;goto B5a1a79;
case 0x5a1a7c:c.instructions+=2;goto B5a1a7c;
case 0x5a1a7d:c.instructions+=1;goto B5a1a7d;
case 0x5a1a82:goto L5a1a82;
case 0x5a1a90:goto L5a1a90;
case 0x5a1a91:c.instructions+=25;goto B5a1a91;
case 0x5a1a93:c.instructions+=24;goto B5a1a93;
case 0x5a1a96:c.instructions+=23;goto B5a1a96;
case 0x5a1a99:c.instructions+=22;goto B5a1a99;
case 0x5a1a9c:c.instructions+=21;goto B5a1a9c;
case 0x5a1a9d:c.instructions+=20;goto B5a1a9d;
case 0x5a1aa0:c.instructions+=19;goto B5a1aa0;
case 0x5a1aa1:c.instructions+=18;goto B5a1aa1;
case 0x5a1aa3:c.instructions+=17;goto B5a1aa3;
case 0x5a1aa4:c.instructions+=16;goto B5a1aa4;
case 0x5a1aa6:c.instructions+=15;goto B5a1aa6;
case 0x5a1aac:c.instructions+=14;goto B5a1aac;
case 0x5a1ab2:c.instructions+=13;goto B5a1ab2;
case 0x5a1ab8:c.instructions+=12;goto B5a1ab8;
case 0x5a1abe:c.instructions+=11;goto B5a1abe;
case 0x5a1ac4:c.instructions+=10;goto B5a1ac4;
case 0x5a1aca:c.instructions+=9;goto B5a1aca;
case 0x5a1ad0:c.instructions+=8;goto B5a1ad0;
case 0x5a1ad3:c.instructions+=7;goto B5a1ad3;
case 0x5a1ad8:c.instructions+=6;goto B5a1ad8;
case 0x5a1adb:c.instructions+=5;goto B5a1adb;
case 0x5a1adc:c.instructions+=4;goto B5a1adc;
case 0x5a1add:c.instructions+=3;goto B5a1add;
case 0x5a1ae1:c.instructions+=2;goto B5a1ae1;
case 0x5a1ae5:c.instructions+=1;goto B5a1ae5;
case 0x5a1aea:goto L5a1aea;
case 0x5a1aed:c.instructions+=7;goto B5a1aed;
case 0x5a1aef:c.instructions+=6;goto B5a1aef;
case 0x5a1af1:c.instructions+=5;goto B5a1af1;
case 0x5a1af4:c.instructions+=4;goto B5a1af4;
case 0x5a1af6:c.instructions+=3;goto B5a1af6;
case 0x5a1af8:c.instructions+=2;goto B5a1af8;
case 0x5a1afb:c.instructions+=1;goto B5a1afb;
case 0x5a1afd:goto L5a1afd;
case 0x5a1b00:c.instructions+=2;goto B5a1b00;
case 0x5a1b03:c.instructions+=1;goto B5a1b03;
case 0x5a1b06:goto L5a1b06;
case 0x5a1b09:c.instructions+=30;goto B5a1b09;
case 0x5a1b0c:c.instructions+=29;goto B5a1b0c;
case 0x5a1b0e:c.instructions+=28;goto B5a1b0e;
case 0x5a1b11:c.instructions+=27;goto B5a1b11;
case 0x5a1b14:c.instructions+=26;goto B5a1b14;
case 0x5a1b17:c.instructions+=25;goto B5a1b17;
case 0x5a1b1a:c.instructions+=24;goto B5a1b1a;
case 0x5a1b1d:c.instructions+=23;goto B5a1b1d;
case 0x5a1b24:c.instructions+=22;goto B5a1b24;
case 0x5a1b28:c.instructions+=21;goto B5a1b28;
case 0x5a1b2a:c.instructions+=20;goto B5a1b2a;
case 0x5a1b2e:c.instructions+=19;goto B5a1b2e;
case 0x5a1b32:c.instructions+=18;goto B5a1b32;
case 0x5a1b36:c.instructions+=17;goto B5a1b36;
case 0x5a1b39:c.instructions+=16;goto B5a1b39;
case 0x5a1b3b:c.instructions+=15;goto B5a1b3b;
case 0x5a1b3e:c.instructions+=14;goto B5a1b3e;
case 0x5a1b41:c.instructions+=13;goto B5a1b41;
case 0x5a1b45:c.instructions+=12;goto B5a1b45;
case 0x5a1b49:c.instructions+=11;goto B5a1b49;
case 0x5a1b4a:c.instructions+=10;goto B5a1b4a;
case 0x5a1b50:c.instructions+=9;goto B5a1b50;
case 0x5a1b56:c.instructions+=8;goto B5a1b56;
case 0x5a1b58:c.instructions+=7;goto B5a1b58;
case 0x5a1b5e:c.instructions+=6;goto B5a1b5e;
case 0x5a1b64:c.instructions+=5;goto B5a1b64;
case 0x5a1b6a:c.instructions+=4;goto B5a1b6a;
case 0x5a1b70:c.instructions+=3;goto B5a1b70;
case 0x5a1b73:c.instructions+=2;goto B5a1b73;
case 0x5a1b75:c.instructions+=1;goto B5a1b75;
case 0x5a1b77:goto L5a1b77;
case 0x5a1b7a:c.instructions+=1;goto B5a1b7a;
case 0x5a1b7c:goto L5a1b7c;
case 0x5a1b82:c.instructions+=21;goto B5a1b82;
case 0x5a1b88:c.instructions+=20;goto B5a1b88;
case 0x5a1b8e:c.instructions+=19;goto B5a1b8e;
case 0x5a1b94:c.instructions+=18;goto B5a1b94;
case 0x5a1b96:c.instructions+=17;goto B5a1b96;
case 0x5a1b9c:c.instructions+=16;goto B5a1b9c;
case 0x5a1ba2:c.instructions+=15;goto B5a1ba2;
case 0x5a1ba5:c.instructions+=14;goto B5a1ba5;
case 0x5a1bab:c.instructions+=13;goto B5a1bab;
case 0x5a1bad:c.instructions+=12;goto B5a1bad;
case 0x5a1bb3:c.instructions+=11;goto B5a1bb3;
case 0x5a1bb9:c.instructions+=10;goto B5a1bb9;
case 0x5a1bbb:c.instructions+=9;goto B5a1bbb;
case 0x5a1bc1:c.instructions+=8;goto B5a1bc1;
case 0x5a1bc7:c.instructions+=7;goto B5a1bc7;
case 0x5a1bcd:c.instructions+=6;goto B5a1bcd;
case 0x5a1bd3:c.instructions+=5;goto B5a1bd3;
case 0x5a1bd9:c.instructions+=4;goto B5a1bd9;
case 0x5a1bdf:c.instructions+=3;goto B5a1bdf;
case 0x5a1be1:c.instructions+=2;goto B5a1be1;
case 0x5a1be4:c.instructions+=1;goto B5a1be4;
case 0x5a1bea:goto L5a1bea;
case 0x5a1bf0:c.instructions+=16;goto B5a1bf0;
case 0x5a1bf6:c.instructions+=15;goto B5a1bf6;
case 0x5a1bf8:c.instructions+=14;goto B5a1bf8;
case 0x5a1bfb:c.instructions+=13;goto B5a1bfb;
case 0x5a1bfd:c.instructions+=12;goto B5a1bfd;
case 0x5a1bff:c.instructions+=11;goto B5a1bff;
case 0x5a1c01:c.instructions+=10;goto B5a1c01;
case 0x5a1c04:c.instructions+=9;goto B5a1c04;
case 0x5a1c08:c.instructions+=8;goto B5a1c08;
case 0x5a1c0b:c.instructions+=7;goto B5a1c0b;
case 0x5a1c0d:c.instructions+=6;goto B5a1c0d;
case 0x5a1c11:c.instructions+=5;goto B5a1c11;
case 0x5a1c14:c.instructions+=4;goto B5a1c14;
case 0x5a1c16:c.instructions+=3;goto B5a1c16;
case 0x5a1c1a:c.instructions+=2;goto B5a1c1a;
case 0x5a1c1c:c.instructions+=1;goto B5a1c1c;
case 0x5a1c22:goto L5a1c22;
case 0x5a1c25:goto L5a1c25;
case 0x5a1c28:c.instructions+=38;goto B5a1c28;
case 0x5a1c2b:c.instructions+=37;goto B5a1c2b;
case 0x5a1c2f:c.instructions+=36;goto B5a1c2f;
case 0x5a1c33:c.instructions+=35;goto B5a1c33;
case 0x5a1c36:c.instructions+=34;goto B5a1c36;
case 0x5a1c39:c.instructions+=33;goto B5a1c39;
case 0x5a1c3d:c.instructions+=32;goto B5a1c3d;
case 0x5a1c41:c.instructions+=31;goto B5a1c41;
case 0x5a1c44:c.instructions+=30;goto B5a1c44;
case 0x5a1c46:c.instructions+=29;goto B5a1c46;
case 0x5a1c48:c.instructions+=28;goto B5a1c48;
case 0x5a1c4b:c.instructions+=27;goto B5a1c4b;
case 0x5a1c4e:c.instructions+=26;goto B5a1c4e;
case 0x5a1c52:c.instructions+=25;goto B5a1c52;
case 0x5a1c54:c.instructions+=24;goto B5a1c54;
case 0x5a1c56:c.instructions+=23;goto B5a1c56;
case 0x5a1c58:c.instructions+=22;goto B5a1c58;
case 0x5a1c5b:c.instructions+=21;goto B5a1c5b;
case 0x5a1c5e:c.instructions+=20;goto B5a1c5e;
case 0x5a1c61:c.instructions+=19;goto B5a1c61;
case 0x5a1c65:c.instructions+=18;goto B5a1c65;
case 0x5a1c67:c.instructions+=17;goto B5a1c67;
case 0x5a1c69:c.instructions+=16;goto B5a1c69;
case 0x5a1c6c:c.instructions+=15;goto B5a1c6c;
case 0x5a1c6f:c.instructions+=14;goto B5a1c6f;
case 0x5a1c72:c.instructions+=13;goto B5a1c72;
case 0x5a1c77:c.instructions+=12;goto B5a1c77;
case 0x5a1c7d:c.instructions+=11;goto B5a1c7d;
case 0x5a1c7e:c.instructions+=10;goto B5a1c7e;
case 0x5a1c80:c.instructions+=9;goto B5a1c80;
case 0x5a1c86:c.instructions+=8;goto B5a1c86;
case 0x5a1c8c:c.instructions+=7;goto B5a1c8c;
case 0x5a1c92:c.instructions+=6;goto B5a1c92;
case 0x5a1c96:c.instructions+=5;goto B5a1c96;
case 0x5a1c9c:c.instructions+=4;goto B5a1c9c;
case 0x5a1ca2:c.instructions+=3;goto B5a1ca2;
case 0x5a1ca5:c.instructions+=2;goto B5a1ca5;
case 0x5a1ca7:c.instructions+=1;goto B5a1ca7;
case 0x5a1cad:goto L5a1cad;
case 0x5a1cb0:c.instructions+=2;goto B5a1cb0;
case 0x5a1cb2:c.instructions+=1;goto B5a1cb2;
case 0x5a1cb5:goto L5a1cb5;
case 0x5a1cb8:c.instructions+=12;goto B5a1cb8;
case 0x5a1cbe:c.instructions+=11;goto B5a1cbe;
case 0x5a1cc0:c.instructions+=10;goto B5a1cc0;
case 0x5a1cc6:c.instructions+=9;goto B5a1cc6;
case 0x5a1ccc:c.instructions+=8;goto B5a1ccc;
case 0x5a1cce:c.instructions+=7;goto B5a1cce;
case 0x5a1cd4:c.instructions+=6;goto B5a1cd4;
case 0x5a1cda:c.instructions+=5;goto B5a1cda;
case 0x5a1ce0:c.instructions+=4;goto B5a1ce0;
case 0x5a1ce6:c.instructions+=3;goto B5a1ce6;
case 0x5a1ceb:c.instructions+=2;goto B5a1ceb;
case 0x5a1ced:c.instructions+=1;goto B5a1ced;
case 0x5a1cf3:goto L5a1cf3;
case 0x5a1cf6:c.instructions+=3;goto B5a1cf6;
case 0x5a1cf9:c.instructions+=2;goto B5a1cf9;
case 0x5a1cfc:c.instructions+=1;goto B5a1cfc;
case 0x5a1d02:goto L5a1d02;
case 0x5a1d08:c.instructions+=40;goto B5a1d08;
case 0x5a1d0b:c.instructions+=39;goto B5a1d0b;
case 0x5a1d11:c.instructions+=38;goto B5a1d11;
case 0x5a1d14:c.instructions+=37;goto B5a1d14;
case 0x5a1d1a:c.instructions+=36;goto B5a1d1a;
case 0x5a1d1e:c.instructions+=35;goto B5a1d1e;
case 0x5a1d20:c.instructions+=34;goto B5a1d20;
case 0x5a1d24:c.instructions+=33;goto B5a1d24;
case 0x5a1d28:c.instructions+=32;goto B5a1d28;
case 0x5a1d2c:c.instructions+=31;goto B5a1d2c;
case 0x5a1d30:c.instructions+=30;goto B5a1d30;
case 0x5a1d32:c.instructions+=29;goto B5a1d32;
case 0x5a1d36:c.instructions+=28;goto B5a1d36;
case 0x5a1d39:c.instructions+=27;goto B5a1d39;
case 0x5a1d3f:c.instructions+=26;goto B5a1d3f;
case 0x5a1d42:c.instructions+=25;goto B5a1d42;
case 0x5a1d48:c.instructions+=24;goto B5a1d48;
case 0x5a1d4b:c.instructions+=23;goto B5a1d4b;
case 0x5a1d51:c.instructions+=22;goto B5a1d51;
case 0x5a1d55:c.instructions+=21;goto B5a1d55;
case 0x5a1d59:c.instructions+=20;goto B5a1d59;
case 0x5a1d5b:c.instructions+=19;goto B5a1d5b;
case 0x5a1d5f:c.instructions+=18;goto B5a1d5f;
case 0x5a1d63:c.instructions+=17;goto B5a1d63;
case 0x5a1d67:c.instructions+=16;goto B5a1d67;
case 0x5a1d6b:c.instructions+=15;goto B5a1d6b;
case 0x5a1d6f:c.instructions+=14;goto B5a1d6f;
case 0x5a1d73:c.instructions+=13;goto B5a1d73;
case 0x5a1d77:c.instructions+=12;goto B5a1d77;
case 0x5a1d7b:c.instructions+=11;goto B5a1d7b;
case 0x5a1d7f:c.instructions+=10;goto B5a1d7f;
case 0x5a1d81:c.instructions+=9;goto B5a1d81;
case 0x5a1d85:c.instructions+=8;goto B5a1d85;
case 0x5a1d87:c.instructions+=7;goto B5a1d87;
case 0x5a1d89:c.instructions+=6;goto B5a1d89;
case 0x5a1d8f:c.instructions+=5;goto B5a1d8f;
case 0x5a1d92:c.instructions+=4;goto B5a1d92;
case 0x5a1d98:c.instructions+=3;goto B5a1d98;
case 0x5a1d9b:c.instructions+=2;goto B5a1d9b;
case 0x5a1da1:c.instructions+=1;goto B5a1da1;
case 0x5a1da6:goto L5a1da6;
case 0x5a1dac:c.instructions+=57;goto B5a1dac;
case 0x5a1daf:c.instructions+=56;goto B5a1daf;
case 0x5a1db5:c.instructions+=55;goto B5a1db5;
case 0x5a1db8:c.instructions+=54;goto B5a1db8;
case 0x5a1dbe:c.instructions+=53;goto B5a1dbe;
case 0x5a1dc2:c.instructions+=52;goto B5a1dc2;
case 0x5a1dc4:c.instructions+=51;goto B5a1dc4;
case 0x5a1dc8:c.instructions+=50;goto B5a1dc8;
case 0x5a1dcc:c.instructions+=49;goto B5a1dcc;
case 0x5a1dd0:c.instructions+=48;goto B5a1dd0;
case 0x5a1dd4:c.instructions+=47;goto B5a1dd4;
case 0x5a1dd6:c.instructions+=46;goto B5a1dd6;
case 0x5a1dda:c.instructions+=45;goto B5a1dda;
case 0x5a1dde:c.instructions+=44;goto B5a1dde;
case 0x5a1de1:c.instructions+=43;goto B5a1de1;
case 0x5a1de7:c.instructions+=42;goto B5a1de7;
case 0x5a1dea:c.instructions+=41;goto B5a1dea;
case 0x5a1df0:c.instructions+=40;goto B5a1df0;
case 0x5a1df3:c.instructions+=39;goto B5a1df3;
case 0x5a1df9:c.instructions+=38;goto B5a1df9;
case 0x5a1dfd:c.instructions+=37;goto B5a1dfd;
case 0x5a1e01:c.instructions+=36;goto B5a1e01;
case 0x5a1e03:c.instructions+=35;goto B5a1e03;
case 0x5a1e07:c.instructions+=34;goto B5a1e07;
case 0x5a1e0b:c.instructions+=33;goto B5a1e0b;
case 0x5a1e0f:c.instructions+=32;goto B5a1e0f;
case 0x5a1e13:c.instructions+=31;goto B5a1e13;
case 0x5a1e17:c.instructions+=30;goto B5a1e17;
case 0x5a1e1b:c.instructions+=29;goto B5a1e1b;
case 0x5a1e1f:c.instructions+=28;goto B5a1e1f;
case 0x5a1e23:c.instructions+=27;goto B5a1e23;
case 0x5a1e25:c.instructions+=26;goto B5a1e25;
case 0x5a1e2b:c.instructions+=25;goto B5a1e2b;
case 0x5a1e2e:c.instructions+=24;goto B5a1e2e;
case 0x5a1e34:c.instructions+=23;goto B5a1e34;
case 0x5a1e37:c.instructions+=22;goto B5a1e37;
case 0x5a1e3d:c.instructions+=21;goto B5a1e3d;
case 0x5a1e41:c.instructions+=20;goto B5a1e41;
case 0x5a1e45:c.instructions+=19;goto B5a1e45;
case 0x5a1e47:c.instructions+=18;goto B5a1e47;
case 0x5a1e4b:c.instructions+=17;goto B5a1e4b;
case 0x5a1e4f:c.instructions+=16;goto B5a1e4f;
case 0x5a1e53:c.instructions+=15;goto B5a1e53;
case 0x5a1e57:c.instructions+=14;goto B5a1e57;
case 0x5a1e5b:c.instructions+=13;goto B5a1e5b;
case 0x5a1e5f:c.instructions+=12;goto B5a1e5f;
case 0x5a1e63:c.instructions+=11;goto B5a1e63;
case 0x5a1e67:c.instructions+=10;goto B5a1e67;
case 0x5a1e6b:c.instructions+=9;goto B5a1e6b;
case 0x5a1e6d:c.instructions+=8;goto B5a1e6d;
case 0x5a1e71:c.instructions+=7;goto B5a1e71;
case 0x5a1e73:c.instructions+=6;goto B5a1e73;
case 0x5a1e75:c.instructions+=5;goto B5a1e75;
case 0x5a1e7b:c.instructions+=4;goto B5a1e7b;
case 0x5a1e7e:c.instructions+=3;goto B5a1e7e;
case 0x5a1e84:c.instructions+=2;goto B5a1e84;
case 0x5a1e87:c.instructions+=1;goto B5a1e87;
case 0x5a1e8d:goto L5a1e8d;
case 0x5a1e91:c.instructions+=28;goto B5a1e91;
case 0x5a1e95:c.instructions+=27;goto B5a1e95;
case 0x5a1e97:c.instructions+=26;goto B5a1e97;
case 0x5a1e9b:c.instructions+=25;goto B5a1e9b;
case 0x5a1e9f:c.instructions+=24;goto B5a1e9f;
case 0x5a1ea3:c.instructions+=23;goto B5a1ea3;
case 0x5a1ea6:c.instructions+=22;goto B5a1ea6;
case 0x5a1eaa:c.instructions+=21;goto B5a1eaa;
case 0x5a1eac:c.instructions+=20;goto B5a1eac;
case 0x5a1eb0:c.instructions+=19;goto B5a1eb0;
case 0x5a1eb3:c.instructions+=18;goto B5a1eb3;
case 0x5a1eb7:c.instructions+=17;goto B5a1eb7;
case 0x5a1ebb:c.instructions+=16;goto B5a1ebb;
case 0x5a1ebf:c.instructions+=15;goto B5a1ebf;
case 0x5a1ec3:c.instructions+=14;goto B5a1ec3;
case 0x5a1ec7:c.instructions+=13;goto B5a1ec7;
case 0x5a1ecb:c.instructions+=12;goto B5a1ecb;
case 0x5a1ecf:c.instructions+=11;goto B5a1ecf;
case 0x5a1ed1:c.instructions+=10;goto B5a1ed1;
case 0x5a1ed4:c.instructions+=9;goto B5a1ed4;
case 0x5a1ed6:c.instructions+=8;goto B5a1ed6;
case 0x5a1ed8:c.instructions+=7;goto B5a1ed8;
case 0x5a1edb:c.instructions+=6;goto B5a1edb;
case 0x5a1ede:c.instructions+=5;goto B5a1ede;
case 0x5a1ee1:c.instructions+=4;goto B5a1ee1;
case 0x5a1ee4:c.instructions+=3;goto B5a1ee4;
case 0x5a1ee9:c.instructions+=2;goto B5a1ee9;
case 0x5a1eec:c.instructions+=1;goto B5a1eec;
case 0x5a1ef2:goto L5a1ef2;
case 0x5a1ef5:goto L5a1ef5;
case 0x5a1ef8:c.instructions+=69;goto B5a1ef8;
case 0x5a1efc:c.instructions+=68;goto B5a1efc;
case 0x5a1eff:c.instructions+=67;goto B5a1eff;
case 0x5a1f02:c.instructions+=66;goto B5a1f02;
case 0x5a1f04:c.instructions+=65;goto B5a1f04;
case 0x5a1f07:c.instructions+=64;goto B5a1f07;
case 0x5a1f0a:c.instructions+=63;goto B5a1f0a;
case 0x5a1f0e:c.instructions+=62;goto B5a1f0e;
case 0x5a1f11:c.instructions+=61;goto B5a1f11;
case 0x5a1f15:c.instructions+=60;goto B5a1f15;
case 0x5a1f1b:c.instructions+=59;goto B5a1f1b;
case 0x5a1f1f:c.instructions+=58;goto B5a1f1f;
case 0x5a1f25:c.instructions+=57;goto B5a1f25;
case 0x5a1f29:c.instructions+=56;goto B5a1f29;
case 0x5a1f2f:c.instructions+=55;goto B5a1f2f;
case 0x5a1f33:c.instructions+=54;goto B5a1f33;
case 0x5a1f35:c.instructions+=53;goto B5a1f35;
case 0x5a1f39:c.instructions+=52;goto B5a1f39;
case 0x5a1f3d:c.instructions+=51;goto B5a1f3d;
case 0x5a1f41:c.instructions+=50;goto B5a1f41;
case 0x5a1f45:c.instructions+=49;goto B5a1f45;
case 0x5a1f48:c.instructions+=48;goto B5a1f48;
case 0x5a1f4a:c.instructions+=47;goto B5a1f4a;
case 0x5a1f4e:c.instructions+=46;goto B5a1f4e;
case 0x5a1f52:c.instructions+=45;goto B5a1f52;
case 0x5a1f55:c.instructions+=44;goto B5a1f55;
case 0x5a1f58:c.instructions+=43;goto B5a1f58;
case 0x5a1f5c:c.instructions+=42;goto B5a1f5c;
case 0x5a1f62:c.instructions+=41;goto B5a1f62;
case 0x5a1f66:c.instructions+=40;goto B5a1f66;
case 0x5a1f6c:c.instructions+=39;goto B5a1f6c;
case 0x5a1f70:c.instructions+=38;goto B5a1f70;
case 0x5a1f76:c.instructions+=37;goto B5a1f76;
case 0x5a1f7a:c.instructions+=36;goto B5a1f7a;
case 0x5a1f7e:c.instructions+=35;goto B5a1f7e;
case 0x5a1f80:c.instructions+=34;goto B5a1f80;
case 0x5a1f84:c.instructions+=33;goto B5a1f84;
case 0x5a1f88:c.instructions+=32;goto B5a1f88;
case 0x5a1f8c:c.instructions+=31;goto B5a1f8c;
case 0x5a1f8f:c.instructions+=30;goto B5a1f8f;
case 0x5a1f93:c.instructions+=29;goto B5a1f93;
case 0x5a1f96:c.instructions+=28;goto B5a1f96;
case 0x5a1f9a:c.instructions+=27;goto B5a1f9a;
case 0x5a1f9c:c.instructions+=26;goto B5a1f9c;
case 0x5a1fa0:c.instructions+=25;goto B5a1fa0;
case 0x5a1fa7:c.instructions+=24;goto B5a1fa7;
case 0x5a1fab:c.instructions+=23;goto B5a1fab;
case 0x5a1faf:c.instructions+=22;goto B5a1faf;
case 0x5a1fb3:c.instructions+=21;goto B5a1fb3;
case 0x5a1fb5:c.instructions+=20;goto B5a1fb5;
case 0x5a1fb9:c.instructions+=19;goto B5a1fb9;
case 0x5a1fbd:c.instructions+=18;goto B5a1fbd;
case 0x5a1fc0:c.instructions+=17;goto B5a1fc0;
case 0x5a1fc2:c.instructions+=16;goto B5a1fc2;
case 0x5a1fc4:c.instructions+=15;goto B5a1fc4;
case 0x5a1fc6:c.instructions+=14;goto B5a1fc6;
case 0x5a1fc9:c.instructions+=13;goto B5a1fc9;
case 0x5a1fcd:c.instructions+=12;goto B5a1fcd;
case 0x5a1fd0:c.instructions+=11;goto B5a1fd0;
case 0x5a1fd3:c.instructions+=10;goto B5a1fd3;
case 0x5a1fd5:c.instructions+=9;goto B5a1fd5;
case 0x5a1fd7:c.instructions+=8;goto B5a1fd7;
case 0x5a1fda:c.instructions+=7;goto B5a1fda;
case 0x5a1fdd:c.instructions+=6;goto B5a1fdd;
case 0x5a1fde:c.instructions+=5;goto B5a1fde;
case 0x5a1fe3:c.instructions+=4;goto B5a1fe3;
case 0x5a1fe6:c.instructions+=3;goto B5a1fe6;
case 0x5a1fe7:c.instructions+=2;goto B5a1fe7;
case 0x5a1fe9:c.instructions+=1;goto B5a1fe9;
case 0x5a1fef:goto L5a1fef;
case 0x5a1ff2:c.instructions+=5;goto B5a1ff2;
case 0x5a1ff4:c.instructions+=4;goto B5a1ff4;
case 0x5a1ff7:c.instructions+=3;goto B5a1ff7;
case 0x5a1ffa:c.instructions+=2;goto B5a1ffa;
case 0x5a1ffe:c.instructions+=1;goto B5a1ffe;
default:missing_instruction(c.pc);}
B5a1001:L5a1001:{c.instructions+=6;NFSU2_TR(0x5a1001);
{u32 ea_=u32(u32(8001788u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1007:{NFSU2_TR(0x5a1007);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a1009:{NFSU2_TR(0x5a1009);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a100d:{NFSU2_TR(0x5a100d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1010:{NFSU2_TR(0x5a1010);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1012:{NFSU2_TR(0x5a1012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1017ull));
TAIL_STATIC(0x401090u,401);
}
B5a1017:L5a1017:{c.instructions+=6;NFSU2_TR(0x5a1017);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a101d:{NFSU2_TR(0x5a101d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a1020:{NFSU2_TR(0x5a1020);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1026:{NFSU2_TR(0x5a1026);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1028:{NFSU2_TR(0x5a1028);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a102b:{NFSU2_TR(0x5a102b);
if(r1(R+514)){{goto L5a1035;}}
}
B5a102d:L5a102d:{c.instructions+=2;NFSU2_TR(0x5a102d);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a1033:{NFSU2_TR(0x5a1033);
{goto L5a1094;}
}
B5a1035:L5a1035:{c.instructions+=4;NFSU2_TR(0x5a1035);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a103b:{NFSU2_TR(0x5a103b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a103d:{NFSU2_TR(0x5a103d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1040:{NFSU2_TR(0x5a1040);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a104f;}}
}
B5a1042:L5a1042:{c.instructions+=4;NFSU2_TR(0x5a1042);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a1048:{NFSU2_TR(0x5a1048);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a104a:{NFSU2_TR(0x5a104a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a104d:{NFSU2_TR(0x5a104d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a1069;}}
}
B5a104f:L5a104f:{c.instructions+=4;NFSU2_TR(0x5a104f);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a1055:{NFSU2_TR(0x5a1055);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1057:{NFSU2_TR(0x5a1057);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a105a:{NFSU2_TR(0x5a105a);
if(r1(R+514)){{goto L5a1094;}}
}
B5a105c:L5a105c:{c.instructions+=4;NFSU2_TR(0x5a105c);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a1062:{NFSU2_TR(0x5a1062);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1064:{NFSU2_TR(0x5a1064);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1067:{NFSU2_TR(0x5a1067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1094;}}
}
B5a1069:L5a1069:{c.instructions+=7;NFSU2_TR(0x5a1069);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a106f:{NFSU2_TR(0x5a106f);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a1075:{NFSU2_TR(0x5a1075);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a1077:{NFSU2_TR(0x5a1077);
{u32 ea_=u32(u32(8001780u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a107d:{NFSU2_TR(0x5a107d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a107f:{NFSU2_TR(0x5a107f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a1082:{NFSU2_TR(0x5a1082);
if(r1(R+514)){{goto L5a1088;}}
}
B5a1084:L5a1084:{c.instructions+=2;NFSU2_TR(0x5a1084);
w1(R+12,u8(0x1ull));
}
B5a1086:{NFSU2_TR(0x5a1086);
{goto L5a1094;}
}
B5a1088:L5a1088:{c.instructions+=2;NFSU2_TR(0x5a1088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a108e:{NFSU2_TR(0x5a108e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1094:L5a1094:{c.instructions+=8;NFSU2_TR(0x5a1094);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1098:{NFSU2_TR(0x5a1098);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a109a:{NFSU2_TR(0x5a109a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a10a0:{NFSU2_TR(0x5a10a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a10a1:{NFSU2_TR(0x5a10a1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a10a5:{NFSU2_TR(0x5a10a5);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a10ab:{NFSU2_TR(0x5a10ab);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a10b1:{NFSU2_TR(0x5a10b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a10c8;}}
}
B5a10b3:L5a10b3:{c.instructions+=5;NFSU2_TR(0x5a10b3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a10b7:{NFSU2_TR(0x5a10b7);
{u32 ea_=u32(u32(8001784u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a10bd:{NFSU2_TR(0x5a10bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a10bf:{NFSU2_TR(0x5a10bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a10c2:{NFSU2_TR(0x5a10c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a11cb;}}
}
B5a10c8:L5a10c8:{c.instructions+=6;NFSU2_TR(0x5a10c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a10ce:{NFSU2_TR(0x5a10ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a10d4:{NFSU2_TR(0x5a10d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a10d5:{NFSU2_TR(0x5a10d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a10d6:{NFSU2_TR(0x5a10d6);
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
B5a10d9:{NFSU2_TR(0x5a10d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a10dc:L5a10dc:{c.instructions+=2;NFSU2_TR(0x5a10dc);
__builtin_memmove((R+4),(R+24),4);
}
B5a10de:{NFSU2_TR(0x5a10de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a10e3ull));
TAIL_STATIC(0x5942e0u,594);
}
B5a10e3:L5a10e3:{c.instructions+=4;NFSU2_TR(0x5a10e3);
{u32 ea_=u32(u32(8001772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a10e9:{NFSU2_TR(0x5a10e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a10eb:{NFSU2_TR(0x5a10eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a10ee:{NFSU2_TR(0x5a10ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1146;}}
}
B5a10f0:L5a10f0:{c.instructions+=2;NFSU2_TR(0x5a10f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a10f3:{NFSU2_TR(0x5a10f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a10f8ull));
TAIL_STATIC(0x5942e0u,594);
}
B5a10f8:L5a10f8:{c.instructions+=4;NFSU2_TR(0x5a10f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a10f9:{NFSU2_TR(0x5a10f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a10fc:{NFSU2_TR(0x5a10fc);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1101:{NFSU2_TR(0x5a1101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1106ull));
TAIL_STATIC(0x401070u,401);
}
B5a1106:L5a1106:{c.instructions+=14;NFSU2_TR(0x5a1106);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a110a:{NFSU2_TR(0x5a110a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a110c:{NFSU2_TR(0x5a110c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a1110:{NFSU2_TR(0x5a1110);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1113:{NFSU2_TR(0x5a1113);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a1116:{NFSU2_TR(0x5a1116);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a1118:{NFSU2_TR(0x5a1118);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5a111a:{NFSU2_TR(0x5a111a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a111c:{NFSU2_TR(0x5a111c);
{u32 ea_=u32(u32(8001776u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1122:{NFSU2_TR(0x5a1122);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1126:{NFSU2_TR(0x5a1126);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a112c:{NFSU2_TR(0x5a112c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a112f:{NFSU2_TR(0x5a112f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1130:{NFSU2_TR(0x5a1130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1135ull));
TAIL_STATIC(0x401070u,401);
}
B5a1135:L5a1135:{c.instructions+=6;NFSU2_TR(0x5a1135);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a113b:{NFSU2_TR(0x5a113b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a113e:{NFSU2_TR(0x5a113e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a113f:{NFSU2_TR(0x5a113f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1140:{NFSU2_TR(0x5a1140);
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
B5a1143:{NFSU2_TR(0x5a1143);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1146:L5a1146:{c.instructions+=3;NFSU2_TR(0x5a1146);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a114c:{NFSU2_TR(0x5a114c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a114e:{NFSU2_TR(0x5a114e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a11cb;}}
}
B5a1150:L5a1150:{c.instructions+=9;NFSU2_TR(0x5a1150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1156:{NFSU2_TR(0x5a1156);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a115a:{NFSU2_TR(0x5a115a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a115b:{NFSU2_TR(0x5a115b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a1165:{NFSU2_TR(0x5a1165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a116b:{NFSU2_TR(0x5a116b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1171:{NFSU2_TR(0x5a1171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1172:{NFSU2_TR(0x5a1172);
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
B5a1175:{NFSU2_TR(0x5a1175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1178:L5a1178:{c.instructions+=2;NFSU2_TR(0x5a1178);
__builtin_memmove((R+4),(R+24),4);
}
B5a117a:{NFSU2_TR(0x5a117a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a117full));
TAIL_STATIC(0x5942e0u,594);
}
B5a117f:L5a117f:{c.instructions+=4;NFSU2_TR(0x5a117f);
{u32 ea_=u32(u32(8001772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1185:{NFSU2_TR(0x5a1185);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1187:{NFSU2_TR(0x5a1187);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a118a:{NFSU2_TR(0x5a118a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a119e;}}
}
B5a118c:L5a118c:{c.instructions+=5;NFSU2_TR(0x5a118c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a118d:{NFSU2_TR(0x5a118d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a1197:{NFSU2_TR(0x5a1197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1198:{NFSU2_TR(0x5a1198);
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
B5a119b:{NFSU2_TR(0x5a119b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a119e:L5a119e:{c.instructions+=11;NFSU2_TR(0x5a119e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a11a1:{NFSU2_TR(0x5a11a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a11a5:{NFSU2_TR(0x5a11a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a11a7:{NFSU2_TR(0x5a11a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a11a8:{NFSU2_TR(0x5a11a8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a11ab:{NFSU2_TR(0x5a11ab);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a11ad:{NFSU2_TR(0x5a11ad);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5a11af:{NFSU2_TR(0x5a11af);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5a11b1:{NFSU2_TR(0x5a11b1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a11b4:{NFSU2_TR(0x5a11b4);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a11b9:{NFSU2_TR(0x5a11b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a11beull));
TAIL_STATIC(0x401070u,401);
}
B5a11be:L5a11be:{c.instructions+=3;NFSU2_TR(0x5a11be);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a11c2:{NFSU2_TR(0x5a11c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a11c5:{NFSU2_TR(0x5a11c5);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a11cb:L5a11cb:{c.instructions+=4;NFSU2_TR(0x5a11cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a11cc:{NFSU2_TR(0x5a11cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a11cd:{NFSU2_TR(0x5a11cd);
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
B5a11d0:{NFSU2_TR(0x5a11d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a11e0:L5a11e0:{c.instructions+=5;NFSU2_TR(0x5a11e0);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a11e6:{NFSU2_TR(0x5a11e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a11ec:{NFSU2_TR(0x5a11ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a11ee:{NFSU2_TR(0x5a11ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a11f1:{NFSU2_TR(0x5a11f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1289;}}
}
B5a11f7:L5a11f7:{c.instructions+=5;NFSU2_TR(0x5a11f7);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a11fd:{NFSU2_TR(0x5a11fd);
{u32 ea_=u32(u32(8001808u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1203:{NFSU2_TR(0x5a1203);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1205:{NFSU2_TR(0x5a1205);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a1208:{NFSU2_TR(0x5a1208);
if(r1(R+514)){{goto L5a1289;}}
}
B5a120a:L5a120a:{c.instructions+=3;NFSU2_TR(0x5a120a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a120d:{NFSU2_TR(0x5a120d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a1211:{NFSU2_TR(0x5a1211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1223;}}
}
B5a1213:L5a1213:{c.instructions+=5;NFSU2_TR(0x5a1213);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1216:{NFSU2_TR(0x5a1216);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a121c:{NFSU2_TR(0x5a121c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a121e:{NFSU2_TR(0x5a121e);
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
B5a1221:{NFSU2_TR(0x5a1221);
if(r1(R+518)){{goto L5a1289;}}
}
B5a1223:L5a1223:{c.instructions+=8;NFSU2_TR(0x5a1223);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1226:{NFSU2_TR(0x5a1226);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1229:{NFSU2_TR(0x5a1229);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a122f:{NFSU2_TR(0x5a122f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1232:{NFSU2_TR(0x5a1232);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5a1234:{NFSU2_TR(0x5a1234);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1236:{NFSU2_TR(0x5a1236);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a1239:{NFSU2_TR(0x5a1239);
if(r1(R+514)){{goto L5a1243;}}
}
B5a123b:L5a123b:{c.instructions+=2;NFSU2_TR(0x5a123b);
{u32 ea_=u32(u32(8001796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1241:{NFSU2_TR(0x5a1241);
{goto L5a1249;}
}
B5a1243:L5a1243:{c.instructions+=1;NFSU2_TR(0x5a1243);
{u32 ea_=u32(u32(8001800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1249:L5a1249:{c.instructions+=7;NFSU2_TR(0x5a1249);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a124d:{NFSU2_TR(0x5a124d);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1253:{NFSU2_TR(0x5a1253);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1259:{NFSU2_TR(0x5a1259);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a125b:{NFSU2_TR(0x5a125b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a125d:{NFSU2_TR(0x5a125d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1260:{NFSU2_TR(0x5a1260);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a126a;}}
}
B5a1262:L5a1262:{c.instructions+=2;NFSU2_TR(0x5a1262);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1264:{NFSU2_TR(0x5a1264);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a126a:L5a126a:{c.instructions+=5;NFSU2_TR(0x5a126a);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a1270:{NFSU2_TR(0x5a1270);
{u32 ea_=u32(u32(8001804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1276:{NFSU2_TR(0x5a1276);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1278:{NFSU2_TR(0x5a1278);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a127b:{NFSU2_TR(0x5a127b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1289;}}
}
B5a127d:L5a127d:{c.instructions+=2;NFSU2_TR(0x5a127d);
__builtin_memmove((R+8),gp(0x7a1910),4);
}
B5a1283:{NFSU2_TR(0x5a1283);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1289:L5a1289:{c.instructions+=1;NFSU2_TR(0x5a1289);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1290:L5a1290:{c.instructions+=3;NFSU2_TR(0x5a1290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1291:{NFSU2_TR(0x5a1291);
__builtin_memmove((R+24),(R+4),4);
}
B5a1293:{NFSU2_TR(0x5a1293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1298ull));
TAIL_STATIC(0x594300u,594);
}
B5a1298:L5a1298:{c.instructions+=8;NFSU2_TR(0x5a1298);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a129b:{NFSU2_TR(0x5a129b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a129e:{NFSU2_TR(0x5a129e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a12a1:{NFSU2_TR(0x5a12a1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a12a4:{NFSU2_TR(0x5a12a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a12a7:{NFSU2_TR(0x5a12a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a12aa:{NFSU2_TR(0x5a12aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a12ab:{NFSU2_TR(0x5a12ab);
if(r1(R+518)){{goto L5a12b1;}}
}
B5a12ad:L5a12ad:{c.instructions+=2;NFSU2_TR(0x5a12ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a12af:{NFSU2_TR(0x5a12af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a12b7;}}
}
B5a12b1:L5a12b1:{c.instructions+=1;NFSU2_TR(0x5a12b1);
{u32 ea_=u32(u32(8001824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a12b7:L5a12b7:{c.instructions+=7;NFSU2_TR(0x5a12b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a12b9:{NFSU2_TR(0x5a12b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a12bd:{NFSU2_TR(0x5a12bd);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5a12bf:{NFSU2_TR(0x5a12bf);
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
B5a12c1:{NFSU2_TR(0x5a12c1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a12c3:{NFSU2_TR(0x5a12c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a12c5:{NFSU2_TR(0x5a12c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a12d0:L5a12d0:{c.instructions+=5;NFSU2_TR(0x5a12d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a12d1:{NFSU2_TR(0x5a12d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a12d2:{NFSU2_TR(0x5a12d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a12d3:{NFSU2_TR(0x5a12d3);
__builtin_memmove((R+24),(R+4),4);
}
B5a12d5:{NFSU2_TR(0x5a12d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a12daull));
TAIL_STATIC(0x5945f0u,594);
}
B5a12da:L5a12da:{c.instructions+=8;NFSU2_TR(0x5a12da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a12dd:{NFSU2_TR(0x5a12dd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a12e1:{NFSU2_TR(0x5a12e1);
{u32 ea_=u32(r4(R+0)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a12e7:{NFSU2_TR(0x5a12e7);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a12ed:{NFSU2_TR(0x5a12ed);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a12f3:{NFSU2_TR(0x5a12f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a12f5:{NFSU2_TR(0x5a12f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a12f8:{NFSU2_TR(0x5a12f8);
if(r1(R+514)){{goto L5a1301;}}
}
B5a12fa:L5a12fa:{c.instructions+=2;NFSU2_TR(0x5a12fa);
w4(R+8,u32(0x1ull));
}
B5a12ff:{NFSU2_TR(0x5a12ff);
{goto L5a1303;}
}
B5a1301:L5a1301:{c.instructions+=1;NFSU2_TR(0x5a1301);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a1303:L5a1303:{c.instructions+=6;NFSU2_TR(0x5a1303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1306:{NFSU2_TR(0x5a1306);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1309:{NFSU2_TR(0x5a1309);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a130f:{NFSU2_TR(0x5a130f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1311:{NFSU2_TR(0x5a1311);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1314:{NFSU2_TR(0x5a1314);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1373;}}
}
B5a1316:L5a1316:{c.instructions+=4;NFSU2_TR(0x5a1316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1319:{NFSU2_TR(0x5a1319);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a131f:{NFSU2_TR(0x5a131f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1321:{NFSU2_TR(0x5a1321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1335;}}
}
B5a1323:L5a1323:{c.instructions+=4;NFSU2_TR(0x5a1323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a1326:{NFSU2_TR(0x5a1326);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a132c:{NFSU2_TR(0x5a132c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a132e:{NFSU2_TR(0x5a132e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1335;}}
}
B5a1330:L5a1330:{c.instructions+=1;NFSU2_TR(0x5a1330);
w4(R+8,u32(0x1ull));
}
B5a1335:L5a1335:{c.instructions+=10;NFSU2_TR(0x5a1335);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1337:{NFSU2_TR(0x5a1337);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a133a:{NFSU2_TR(0x5a133a);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a133e:{NFSU2_TR(0x5a133e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1341:{NFSU2_TR(0x5a1341);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1344:{NFSU2_TR(0x5a1344);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1348:{NFSU2_TR(0x5a1348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a134b:{NFSU2_TR(0x5a134b);
__asm__ volatile(".byte 0xd8,0xfa":::"memory");
}
B5a134d:{NFSU2_TR(0x5a134d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1350:{NFSU2_TR(0x5a1350);
if(r1(R+518)){{goto L5a1360;}}
}
B5a1352:L5a1352:{c.instructions+=4;NFSU2_TR(0x5a1352);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1356:{NFSU2_TR(0x5a1356);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a135c:{NFSU2_TR(0x5a135c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a135e:{NFSU2_TR(0x5a135e);
{goto L5a1364;}
}
B5a1360:L5a1360:{c.instructions+=1;NFSU2_TR(0x5a1360);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1364:L5a1364:{c.instructions+=6;NFSU2_TR(0x5a1364);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a1366:{NFSU2_TR(0x5a1366);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1369:{NFSU2_TR(0x5a1369);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a136c:{NFSU2_TR(0x5a136c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a136e:{NFSU2_TR(0x5a136e);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1371:{NFSU2_TR(0x5a1371);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1373:L5a1373:{c.instructions+=4;NFSU2_TR(0x5a1373);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1379:{NFSU2_TR(0x5a1379);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a137b:{NFSU2_TR(0x5a137b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a137e:{NFSU2_TR(0x5a137e);
if(r1(R+514)){{goto L5a1387;}}
}
B5a1380:L5a1380:{c.instructions+=2;NFSU2_TR(0x5a1380);
w4(R+8,u32(0x1ull));
}
B5a1385:{NFSU2_TR(0x5a1385);
{goto L5a1389;}
}
B5a1387:L5a1387:{c.instructions+=1;NFSU2_TR(0x5a1387);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a1389:L5a1389:{c.instructions+=6;NFSU2_TR(0x5a1389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a138c:{NFSU2_TR(0x5a138c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a138f:{NFSU2_TR(0x5a138f);
{u32 ea_=u32(u32(7975256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1395:{NFSU2_TR(0x5a1395);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1397:{NFSU2_TR(0x5a1397);
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
B5a139a:{NFSU2_TR(0x5a139a);
if(r1(R+514)){{goto L5a13f7;}}
}
B5a139c:L5a139c:{c.instructions+=4;NFSU2_TR(0x5a139c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a139f:{NFSU2_TR(0x5a139f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a13a5:{NFSU2_TR(0x5a13a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a13a7:{NFSU2_TR(0x5a13a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a13bb;}}
}
B5a13a9:L5a13a9:{c.instructions+=4;NFSU2_TR(0x5a13a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a13ac:{NFSU2_TR(0x5a13ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5a13b2:{NFSU2_TR(0x5a13b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a13b4:{NFSU2_TR(0x5a13b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a13bb;}}
}
B5a13b6:L5a13b6:{c.instructions+=1;NFSU2_TR(0x5a13b6);
w4(R+8,u32(0x1ull));
}
B5a13bb:L5a13bb:{c.instructions+=10;NFSU2_TR(0x5a13bb);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a13bd:{NFSU2_TR(0x5a13bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a13c0:{NFSU2_TR(0x5a13c0);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a13c4:{NFSU2_TR(0x5a13c4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a13c7:{NFSU2_TR(0x5a13c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a13ca:{NFSU2_TR(0x5a13ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a13ce:{NFSU2_TR(0x5a13ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a13d1:{NFSU2_TR(0x5a13d1);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5a13d3:{NFSU2_TR(0x5a13d3);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a13d6:{NFSU2_TR(0x5a13d6);
if(r1(R+518)){{goto L5a13e6;}}
}
B5a13d8:L5a13d8:{c.instructions+=4;NFSU2_TR(0x5a13d8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a13dc:{NFSU2_TR(0x5a13dc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a13e2:{NFSU2_TR(0x5a13e2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a13e4:{NFSU2_TR(0x5a13e4);
{goto L5a13ea;}
}
B5a13e6:L5a13e6:{c.instructions+=1;NFSU2_TR(0x5a13e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a13ea:L5a13ea:{c.instructions+=5;NFSU2_TR(0x5a13ea);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a13ec:{NFSU2_TR(0x5a13ec);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a13ef:{NFSU2_TR(0x5a13ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a13f2:{NFSU2_TR(0x5a13f2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a13f4:{NFSU2_TR(0x5a13f4);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a13f7:L5a13f7:{c.instructions+=5;NFSU2_TR(0x5a13f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a13f8:{NFSU2_TR(0x5a13f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a13fa:{NFSU2_TR(0x5a13fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a13fb:{NFSU2_TR(0x5a13fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a13fc:{NFSU2_TR(0x5a13fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1400:L5a1400:{c.instructions+=5;NFSU2_TR(0x5a1400);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1401:{NFSU2_TR(0x5a1401);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1402:{NFSU2_TR(0x5a1402);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1403:{NFSU2_TR(0x5a1403);
__builtin_memmove((R+24),(R+4),4);
}
B5a1405:{NFSU2_TR(0x5a1405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a140aull));
TAIL_STATIC(0x5945f0u,594);
}
B5a140a:L5a140a:{c.instructions+=6;NFSU2_TR(0x5a140a);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a140d:{NFSU2_TR(0x5a140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1410:{NFSU2_TR(0x5a1410);
w4(R+8,u32(0x3ull));
}
B5a1415:{NFSU2_TR(0x5a1415);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a1417:{NFSU2_TR(0x5a1417);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a1419:{NFSU2_TR(0x5a1419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a149a;}}
}
B5a141b:L5a141b:{c.instructions+=5;NFSU2_TR(0x5a141b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a141e:{NFSU2_TR(0x5a141e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a1428:{NFSU2_TR(0x5a1428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a142b:{NFSU2_TR(0x5a142b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a142d:{NFSU2_TR(0x5a142d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a147a;}}
}
B5a142f:L5a142f:{c.instructions+=9;NFSU2_TR(0x5a142f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1432:{NFSU2_TR(0x5a1432);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1435:{NFSU2_TR(0x5a1435);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a143b:{NFSU2_TR(0x5a143b);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a143e:{NFSU2_TR(0x5a143e);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1441:{NFSU2_TR(0x5a1441);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B5a1447:{NFSU2_TR(0x5a1447);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1449:{NFSU2_TR(0x5a1449);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a144c:{NFSU2_TR(0x5a144c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1629;}}
}
B5a1452:L5a1452:{c.instructions+=5;NFSU2_TR(0x5a1452);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1455:{NFSU2_TR(0x5a1455);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a145b:{NFSU2_TR(0x5a145b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a145d:{NFSU2_TR(0x5a145d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a1460:{NFSU2_TR(0x5a1460);
if(r1(R+514)){{goto L5a1629;}}
}
B5a1466:L5a1466:{c.instructions+=4;NFSU2_TR(0x5a1466);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a146c:{NFSU2_TR(0x5a146c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1472:{NFSU2_TR(0x5a1472);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1475:{NFSU2_TR(0x5a1475);
{goto L5a1629;}
}
B5a147a:L5a147a:{c.instructions+=2;NFSU2_TR(0x5a147a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a147d:{NFSU2_TR(0x5a147d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1629;}}
}
B5a1483:L5a1483:{c.instructions+=2;NFSU2_TR(0x5a1483);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a1486:{NFSU2_TR(0x5a1486);
if(r1(R+518)){{goto L5a1629;}}
}
B5a148c:L5a148c:{c.instructions+=4;NFSU2_TR(0x5a148c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a148f:{NFSU2_TR(0x5a148f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1492:{NFSU2_TR(0x5a1492);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1495:{NFSU2_TR(0x5a1495);
{goto L5a1629;}
}
B5a149a:L5a149a:{c.instructions+=3;NFSU2_TR(0x5a149a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a149d:{NFSU2_TR(0x5a149d);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5a149f:{NFSU2_TR(0x5a149f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5a1629;}}
}
B5a14a5:L5a14a5:{c.instructions+=1;NFSU2_TR(0x5a14a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5a16ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a14ac:L5a14ac:{c.instructions+=5;NFSU2_TR(0x5a14ac);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a14af:{NFSU2_TR(0x5a14af);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a14b5:{NFSU2_TR(0x5a14b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a14b7:{NFSU2_TR(0x5a14b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a14ba:{NFSU2_TR(0x5a14ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a14db;}}
}
B5a14bc:L5a14bc:{c.instructions+=5;NFSU2_TR(0x5a14bc);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a14bf:{NFSU2_TR(0x5a14bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a14c5:{NFSU2_TR(0x5a14c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a14c7:{NFSU2_TR(0x5a14c7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a14ca:{NFSU2_TR(0x5a14ca);
if(r1(R+514)){{goto L5a14db;}}
}
B5a14cc:L5a14cc:{c.instructions+=3;NFSU2_TR(0x5a14cc);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a14d2:{NFSU2_TR(0x5a14d2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a14d8:{NFSU2_TR(0x5a14d8);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a14db:L5a14db:{c.instructions+=7;NFSU2_TR(0x5a14db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a14de:{NFSU2_TR(0x5a14de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a14df:{NFSU2_TR(0x5a14df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a14e9:{NFSU2_TR(0x5a14e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a14ec:{NFSU2_TR(0x5a14ec);
w4(R+20,u32(0x1ull));
}
B5a14f1:{NFSU2_TR(0x5a14f1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a14f3:{NFSU2_TR(0x5a14f3);
if(r1(R+518)){{goto L5a1503;}}
}
B5a14f5:L5a14f5:{c.instructions+=2;NFSU2_TR(0x5a14f5);
__builtin_memmove((R+4),(R+24),4);
}
B5a14f7:{NFSU2_TR(0x5a14f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a14fcull));
TAIL_STATIC(0x594e90u,594);
}
B5a14fc:L5a14fc:{c.instructions+=2;NFSU2_TR(0x5a14fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a14fe:{NFSU2_TR(0x5a14fe);
if(r1(R+518)){{goto L5a1503;}}
}
B5a1500:L5a1500:{c.instructions+=1;NFSU2_TR(0x5a1500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1503:L5a1503:{c.instructions+=3;NFSU2_TR(0x5a1503);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a1506:{NFSU2_TR(0x5a1506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a1507:{NFSU2_TR(0x5a1507);
if(r1(R+518)){{goto L5a1520;}}
}
B5a1509:L5a1509:{c.instructions+=7;NFSU2_TR(0x5a1509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a150c:{NFSU2_TR(0x5a150c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a150f:{NFSU2_TR(0x5a150f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1512:{NFSU2_TR(0x5a1512);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1518:{NFSU2_TR(0x5a1518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a151b:{NFSU2_TR(0x5a151b);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a151e:{NFSU2_TR(0x5a151e);
{goto L5a1523;}
}
B5a1520:L5a1520:{c.instructions+=1;NFSU2_TR(0x5a1520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1523:L5a1523:{c.instructions+=2;NFSU2_TR(0x5a1523);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a1526:{NFSU2_TR(0x5a1526);
if(r1(R+518)){{goto L5a1629;}}
}
B5a152c:L5a152c:{c.instructions+=2;NFSU2_TR(0x5a152c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a152f:{NFSU2_TR(0x5a152f);
{goto L5a1629;}
}
B5a1534:L5a1534:{c.instructions+=2;NFSU2_TR(0x5a1534);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a1537:{NFSU2_TR(0x5a1537);
if(r1(R+518)){{goto L5a1541;}}
}
B5a1539:L5a1539:{c.instructions+=2;NFSU2_TR(0x5a1539);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a153f:{NFSU2_TR(0x5a153f);
{goto L5a1547;}
}
B5a1541:L5a1541:{c.instructions+=1;NFSU2_TR(0x5a1541);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1547:L5a1547:{c.instructions+=8;NFSU2_TR(0x5a1547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a154a:{NFSU2_TR(0x5a154a);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1550:{NFSU2_TR(0x5a1550);
w4(R+20,u32(0x1ull));
}
B5a1555:{NFSU2_TR(0x5a1555);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1558:{NFSU2_TR(0x5a1558);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a155e:{NFSU2_TR(0x5a155e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1560:{NFSU2_TR(0x5a1560);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1563:{NFSU2_TR(0x5a1563);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a157f;}}
}
B5a1565:L5a1565:{c.instructions+=3;NFSU2_TR(0x5a1565);
__builtin_memmove((R+4),(R+24),4);
}
B5a1567:{NFSU2_TR(0x5a1567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a156e:{NFSU2_TR(0x5a156e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1573ull));
TAIL_STATIC(0x594ed0u,594);
}
B5a1573:L5a1573:{c.instructions+=2;NFSU2_TR(0x5a1573);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1575:{NFSU2_TR(0x5a1575);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a157c;}}
}
B5a1577:L5a1577:{c.instructions+=2;NFSU2_TR(0x5a1577);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a157a:{NFSU2_TR(0x5a157a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a157f;}}
}
B5a157c:L5a157c:{c.instructions+=1;NFSU2_TR(0x5a157c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a157f:L5a157f:{c.instructions+=2;NFSU2_TR(0x5a157f);
__builtin_memmove((R+4),(R+24),4);
}
B5a1581:{NFSU2_TR(0x5a1581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1586ull));
TAIL_STATIC(0x594e90u,594);
}
B5a1586:L5a1586:{c.instructions+=2;NFSU2_TR(0x5a1586);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1588:{NFSU2_TR(0x5a1588);
if(r1(R+518)){{goto L5a1592;}}
}
B5a158a:L5a158a:{c.instructions+=2;NFSU2_TR(0x5a158a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a158d:{NFSU2_TR(0x5a158d);
if(r1(R+518)){{goto L5a1592;}}
}
B5a158f:L5a158f:{c.instructions+=1;NFSU2_TR(0x5a158f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1592:L5a1592:{c.instructions+=2;NFSU2_TR(0x5a1592);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a1595:{NFSU2_TR(0x5a1595);
if(r1(R+518)){{goto L5a1629;}}
}
B5a159b:L5a159b:{c.instructions+=2;NFSU2_TR(0x5a159b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a159e:{NFSU2_TR(0x5a159e);
{goto L5a1629;}
}
B5a15a3:L5a15a3:{c.instructions+=2;NFSU2_TR(0x5a15a3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a15a6:{NFSU2_TR(0x5a15a6);
if(r1(R+518)){{goto L5a15b0;}}
}
B5a15a8:L5a15a8:{c.instructions+=2;NFSU2_TR(0x5a15a8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a15ae:{NFSU2_TR(0x5a15ae);
{goto L5a15b6;}
}
B5a15b0:L5a15b0:{c.instructions+=1;NFSU2_TR(0x5a15b0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a15b6:L5a15b6:{c.instructions+=8;NFSU2_TR(0x5a15b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a15b9:{NFSU2_TR(0x5a15b9);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a15bf:{NFSU2_TR(0x5a15bf);
w4(R+20,u32(0x1ull));
}
B5a15c4:{NFSU2_TR(0x5a15c4);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a15c7:{NFSU2_TR(0x5a15c7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a15cd:{NFSU2_TR(0x5a15cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a15cf:{NFSU2_TR(0x5a15cf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a15d2:{NFSU2_TR(0x5a15d2);
if(r1(R+514)){{goto L5a15da;}}
}
B5a15d4:L5a15d4:{c.instructions+=2;NFSU2_TR(0x5a15d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a15d7:{NFSU2_TR(0x5a15d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a15da:L5a15da:{c.instructions+=2;NFSU2_TR(0x5a15da);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a15dd:{NFSU2_TR(0x5a15dd);
if(r1(R+518)){{goto L5a1629;}}
}
B5a15df:L5a15df:{c.instructions+=2;NFSU2_TR(0x5a15df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a15e2:{NFSU2_TR(0x5a15e2);
{goto L5a1629;}
}
B5a15e4:L5a15e4:{c.instructions+=2;NFSU2_TR(0x5a15e4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a15e7:{NFSU2_TR(0x5a15e7);
if(r1(R+518)){{goto L5a15f1;}}
}
B5a15e9:L5a15e9:{c.instructions+=2;NFSU2_TR(0x5a15e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a15ef:{NFSU2_TR(0x5a15ef);
{goto L5a15f7;}
}
B5a15f1:L5a15f1:{c.instructions+=1;NFSU2_TR(0x5a15f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a15f7:L5a15f7:{c.instructions+=6;NFSU2_TR(0x5a15f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a15fa:{NFSU2_TR(0x5a15fa);
{u32 ea_=u32(r4(R+8)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1600:{NFSU2_TR(0x5a1600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1603:{NFSU2_TR(0x5a1603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1606:{NFSU2_TR(0x5a1606);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a1609:{NFSU2_TR(0x5a1609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1616;}}
}
B5a160b:L5a160b:{c.instructions+=2;NFSU2_TR(0x5a160b);
__builtin_memmove((R+4),(R+24),4);
}
B5a160d:{NFSU2_TR(0x5a160d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1612ull));
TAIL_STATIC(0x594e90u,594);
}
B5a1612:L5a1612:{c.instructions+=2;NFSU2_TR(0x5a1612);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1614:{NFSU2_TR(0x5a1614);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1629;}}
}
B5a1616:L5a1616:{c.instructions+=2;NFSU2_TR(0x5a1616);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a1619:{NFSU2_TR(0x5a1619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1622;}}
}
B5a161b:L5a161b:{c.instructions+=1;NFSU2_TR(0x5a161b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a1622:L5a1622:{c.instructions+=2;NFSU2_TR(0x5a1622);
__builtin_memmove((R+4),(R+24),4);
}
B5a1624:{NFSU2_TR(0x5a1624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1629ull));
TAIL_STATIC(0x594710u,594);
}
B5a1629:L5a1629:{c.instructions+=5;NFSU2_TR(0x5a1629);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a162c:{NFSU2_TR(0x5a162c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1632:{NFSU2_TR(0x5a1632);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1634:{NFSU2_TR(0x5a1634);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a1637:{NFSU2_TR(0x5a1637);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a1669;}}
}
B5a1639:L5a1639:{c.instructions+=9;NFSU2_TR(0x5a1639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a163c:{NFSU2_TR(0x5a163c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1642:{NFSU2_TR(0x5a1642);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a1648:{NFSU2_TR(0x5a1648);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a164e:{NFSU2_TR(0x5a164e);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a1651:{NFSU2_TR(0x5a1651);
{u32 ea_=u32(u32(8001736u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1657:{NFSU2_TR(0x5a1657);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1659:{NFSU2_TR(0x5a1659);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a165c:{NFSU2_TR(0x5a165c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a16e5;}}
}
B5a1662:L5a1662:{c.instructions+=5;NFSU2_TR(0x5a1662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1665:{NFSU2_TR(0x5a1665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1666:{NFSU2_TR(0x5a1666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a1667:{NFSU2_TR(0x5a1667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a1668:{NFSU2_TR(0x5a1668);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1669:L5a1669:{c.instructions+=2;NFSU2_TR(0x5a1669);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a166d:{NFSU2_TR(0x5a166d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a16e5;}}
}
B5a166f:L5a166f:{c.instructions+=5;NFSU2_TR(0x5a166f);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1672:{NFSU2_TR(0x5a1672);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1678:{NFSU2_TR(0x5a1678);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a167a:{NFSU2_TR(0x5a167a);
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
B5a167d:{NFSU2_TR(0x5a167d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a16e5;}}
}
B5a167f:L5a167f:{c.instructions+=11;NFSU2_TR(0x5a167f);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a1685:{NFSU2_TR(0x5a1685);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a168b:{NFSU2_TR(0x5a168b);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a168e:{NFSU2_TR(0x5a168e);
{u32 ea_=u32(u32(8001740u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a1694:{NFSU2_TR(0x5a1694);
{u32 ea_=u32(u32(8001740u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a169a:{NFSU2_TR(0x5a169a);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a169d:{NFSU2_TR(0x5a169d);
{u32 ea_=u32(u32(8001744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a16a3:{NFSU2_TR(0x5a16a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a16a9:{NFSU2_TR(0x5a16a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a16ab:{NFSU2_TR(0x5a16ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a16ae:{NFSU2_TR(0x5a16ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a16c1;}}
}
B5a16b0:L5a16b0:{c.instructions+=4;NFSU2_TR(0x5a16b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a16b6:{NFSU2_TR(0x5a16b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a16b9:{NFSU2_TR(0x5a16b9);
{u32 ea_=u32(r4(R+8)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a16bf:{NFSU2_TR(0x5a16bf);
{goto L5a16c3;}
}
B5a16c1:L5a16c1:{c.instructions+=1;NFSU2_TR(0x5a16c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a16c3:L5a16c3:{c.instructions+=7;NFSU2_TR(0x5a16c3);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a16c9:{NFSU2_TR(0x5a16c9);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a16cf:{NFSU2_TR(0x5a16cf);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a16d2:{NFSU2_TR(0x5a16d2);
{u32 ea_=u32(u32(8001740u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a16d8:{NFSU2_TR(0x5a16d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a16da:{NFSU2_TR(0x5a16da);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a16dd:{NFSU2_TR(0x5a16dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a16e5;}}
}
B5a16df:L5a16df:{c.instructions+=2;NFSU2_TR(0x5a16df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a16e2:{NFSU2_TR(0x5a16e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a16e5:L5a16e5:{c.instructions+=4;NFSU2_TR(0x5a16e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a16e6:{NFSU2_TR(0x5a16e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a16e7:{NFSU2_TR(0x5a16e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a16e8:{NFSU2_TR(0x5a16e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1700:L5a1700:{c.instructions+=3;NFSU2_TR(0x5a1700);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5a1705:{NFSU2_TR(0x5a1705);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1707:{NFSU2_TR(0x5a1707);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1712;}}
}
B5a1709:L5a1709:{c.instructions+=3;NFSU2_TR(0x5a1709);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5a170e:{NFSU2_TR(0x5a170e);
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
B5a1710:{NFSU2_TR(0x5a1710);
if(r1(R+518)){{goto L5a172a;}}
}
B5a1712:L5a1712:{c.instructions+=3;NFSU2_TR(0x5a1712);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1715:{NFSU2_TR(0x5a1715);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a1718:{NFSU2_TR(0x5a1718);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a172a;}}
}
B5a171a:L5a171a:{c.instructions+=5;NFSU2_TR(0x5a171a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a171c:{NFSU2_TR(0x5a171c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a171d:{NFSU2_TR(0x5a171d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1721:{NFSU2_TR(0x5a1721);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1722:{NFSU2_TR(0x5a1722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1727ull));
TAIL_STATIC(0x594f20u,594);
}
B5a1727:L5a1727:{c.instructions+=1;NFSU2_TR(0x5a1727);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a172a:L5a172a:{c.instructions+=1;NFSU2_TR(0x5a172a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1730:L5a1730:{c.instructions+=5;NFSU2_TR(0x5a1730);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B5a1735:{NFSU2_TR(0x5a1735);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1736:{NFSU2_TR(0x5a1736);
__builtin_memmove((R+24),(R+4),4);
}
B5a1738:{NFSU2_TR(0x5a1738);
u8 U[4];
w4(U+0,u32(0x7a1d44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a173e:{NFSU2_TR(0x5a173e);
if(r1(R+518)){{goto L5a1749;}}
}
B5a1740:L5a1740:{c.instructions+=2;NFSU2_TR(0x5a1740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1741:{NFSU2_TR(0x5a1741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1746ull));
TAIL_STATIC(0x575630u,575);
}
B5a1746:L5a1746:{c.instructions+=1;NFSU2_TR(0x5a1746);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1749:L5a1749:{c.instructions+=3;NFSU2_TR(0x5a1749);
__builtin_memmove((R+0),(R+24),4);
}
B5a174b:{NFSU2_TR(0x5a174b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a174c:{NFSU2_TR(0x5a174c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1750:L5a1750:{c.instructions+=10;NFSU2_TR(0x5a1750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1751:{NFSU2_TR(0x5a1751);
__builtin_memmove((R+20),(R+16),4);
}
B5a1753:{NFSU2_TR(0x5a1753);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a1756:{NFSU2_TR(0x5a1756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5a1759:{NFSU2_TR(0x5a1759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a175c:{NFSU2_TR(0x5a175c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034020ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5a1762:{NFSU2_TR(0x5a1762);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1763:{NFSU2_TR(0x5a1763);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1764:{NFSU2_TR(0x5a1764);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1765:{NFSU2_TR(0x5a1765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1849;}}
}
B5a176b:L5a176b:{c.instructions+=6;NFSU2_TR(0x5a176b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a176e:{NFSU2_TR(0x5a176e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a1772:{NFSU2_TR(0x5a1772);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a1775:{NFSU2_TR(0x5a1775);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1777:{NFSU2_TR(0x5a1777);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a177b:{NFSU2_TR(0x5a177b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5a183d;}}
}
B5a1781:L5a1781:{c.instructions+=3;NFSU2_TR(0x5a1781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a1783:{NFSU2_TR(0x5a1783);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34021ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1788:{NFSU2_TR(0x5a1788);
if(r1(R+518)){{goto L5a1835;}}
}
B5a178e:L5a178e:{c.instructions+=2;NFSU2_TR(0x5a178e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x39200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1793:{NFSU2_TR(0x5a1793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1835;}}
}
B5a1799:L5a1799:{c.instructions+=46;NFSU2_TR(0x5a1799);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a179c:{NFSU2_TR(0x5a179c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a17a0:{NFSU2_TR(0x5a17a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a17a3:{NFSU2_TR(0x5a17a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5a17a7:{NFSU2_TR(0x5a17a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a17aa:{NFSU2_TR(0x5a17aa);
__builtin_memmove((R+12),(R+28),4);
}
B5a17ac:{NFSU2_TR(0x5a17ac);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B5a17af:{NFSU2_TR(0x5a17af);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5a17b1:{NFSU2_TR(0x5a17b1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a17b5:{NFSU2_TR(0x5a17b5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff0ull))));
}
B5a17b8:{NFSU2_TR(0x5a17b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a17bc:{NFSU2_TR(0x5a17bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a17bf:{NFSU2_TR(0x5a17bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a17c3:{NFSU2_TR(0x5a17c3);
w4(R+0,u32(0xaaaaaaabull));
}
B5a17c8:{NFSU2_TR(0x5a17c8);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5a17ca:{NFSU2_TR(0x5a17ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a17ce:{NFSU2_TR(0x5a17ce);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5a17d1:{NFSU2_TR(0x5a17d1);
__builtin_memmove((R+28),(R+24),4);
}
B5a17d3:{NFSU2_TR(0x5a17d3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B5a17d5:{NFSU2_TR(0x5a17d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a17d8:{NFSU2_TR(0x5a17d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a17dc:{NFSU2_TR(0x5a17dc);
__builtin_memmove((R+28),gp(0x86b59c),4);
}
B5a17e2:{NFSU2_TR(0x5a17e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x17ull))));
}
B5a17e5:{NFSU2_TR(0x5a17e5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B5a17e8:{NFSU2_TR(0x5a17e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5a17ea:{NFSU2_TR(0x5a17ea);
__builtin_memmove(gp(0x86b59c),(R+4),4);
}
B5a17f0:{NFSU2_TR(0x5a17f0);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5a17f2:{NFSU2_TR(0x5a17f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a17f6:{NFSU2_TR(0x5a17f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a17fa:{NFSU2_TR(0x5a17fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5a17fd:{NFSU2_TR(0x5a17fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1800:{NFSU2_TR(0x5a1800);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5a1803:{NFSU2_TR(0x5a1803);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1806:{NFSU2_TR(0x5a1806);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a180a:{NFSU2_TR(0x5a180a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a180d:{NFSU2_TR(0x5a180d);
u8 U[4];
w4(U+0,u32(0x86b598ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5a1813:{NFSU2_TR(0x5a1813);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a181a:{NFSU2_TR(0x5a181a);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff0ull))));
}
B5a181d:{NFSU2_TR(0x5a181d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a181f:{NFSU2_TR(0x5a181f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1822:{NFSU2_TR(0x5a1822);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1825:{NFSU2_TR(0x5a1825);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1828:{NFSU2_TR(0x5a1828);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a182b:{NFSU2_TR(0x5a182b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a182e:{NFSU2_TR(0x5a182e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1831:{NFSU2_TR(0x5a1831);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a1835:L5a1835:{c.instructions+=2;NFSU2_TR(0x5a1835);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1837:{NFSU2_TR(0x5a1837);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1781u);}goto L5a1781;}}
}
B5a183d:L5a183d:{c.instructions+=7;NFSU2_TR(0x5a183d);
w4(R+0,u32(0x1ull));
}
B5a1842:{NFSU2_TR(0x5a1842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a1843:{NFSU2_TR(0x5a1843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1844:{NFSU2_TR(0x5a1844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a1845:{NFSU2_TR(0x5a1845);
__builtin_memmove((R+16),(R+20),4);
}
B5a1847:{NFSU2_TR(0x5a1847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a1848:{NFSU2_TR(0x5a1848);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1849:L5a1849:{c.instructions+=7;NFSU2_TR(0x5a1849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a184a:{NFSU2_TR(0x5a184a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a184b:{NFSU2_TR(0x5a184b);
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
B5a184d:{NFSU2_TR(0x5a184d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a184e:{NFSU2_TR(0x5a184e);
__builtin_memmove((R+16),(R+20),4);
}
B5a1850:{NFSU2_TR(0x5a1850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a1851:{NFSU2_TR(0x5a1851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1860:L5a1860:{c.instructions+=3;NFSU2_TR(0x5a1860);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1864:{NFSU2_TR(0x5a1864);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034020ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5a186a:{NFSU2_TR(0x5a186a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a18b2;}}
}
B5a186c:L5a186c:{c.instructions+=6;NFSU2_TR(0x5a186c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a186f:{NFSU2_TR(0x5a186f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1870:{NFSU2_TR(0x5a1870);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5a1874:{NFSU2_TR(0x5a1874);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a1877:{NFSU2_TR(0x5a1877);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1879:{NFSU2_TR(0x5a1879);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5a18ab;}}
}
B5a187b:L5a187b:{c.instructions+=1;NFSU2_TR(0x5a187b);
{goto L5a1880;}
}
B5a1880:L5a1880:{c.instructions+=3;NFSU2_TR(0x5a1880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a1882:{NFSU2_TR(0x5a1882);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34021ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a1887:{NFSU2_TR(0x5a1887);
if(r1(R+518)){{goto L5a18a0;}}
}
B5a1889:L5a1889:{c.instructions+=2;NFSU2_TR(0x5a1889);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x39200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a188e:{NFSU2_TR(0x5a188e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a18a0;}}
}
B5a1890:L5a1890:{c.instructions+=6;NFSU2_TR(0x5a1890);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a1893:{NFSU2_TR(0x5a1893);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5a1896:{NFSU2_TR(0x5a1896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a1898:{NFSU2_TR(0x5a1898);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a189b:{NFSU2_TR(0x5a189b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a189d:{NFSU2_TR(0x5a189d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a18a0:L5a18a0:{c.instructions+=4;NFSU2_TR(0x5a18a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a18a3:{NFSU2_TR(0x5a18a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a18a7:{NFSU2_TR(0x5a18a7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a18a9:{NFSU2_TR(0x5a18a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1880u);}goto L5a1880;}}
}
B5a18ab:L5a18ab:{c.instructions+=3;NFSU2_TR(0x5a18ab);
w4(R+0,u32(0x1ull));
}
B5a18b0:{NFSU2_TR(0x5a18b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a18b1:{NFSU2_TR(0x5a18b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a18b2:L5a18b2:{c.instructions+=2;NFSU2_TR(0x5a18b2);
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
B5a18b4:{NFSU2_TR(0x5a18b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a18c0:L5a18c0:{c.instructions+=4;NFSU2_TR(0x5a18c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a18c1:{NFSU2_TR(0x5a18c1);
__builtin_memmove((R+24),gp(0x86b598),4);
}
B5a18c7:{NFSU2_TR(0x5a18c7);
w4(R+4,u32(0x86b598ull));
}
B5a18cc:{NFSU2_TR(0x5a18cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a18d1ull));
TAIL_STATIC(0x502fd0u,502);
}
B5a18d1:L5a18d1:{c.instructions+=2;NFSU2_TR(0x5a18d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a18d3:{NFSU2_TR(0x5a18d3);
if(r1(R+518)){{goto L5a18eb;}}
}
B5a18d5:L5a18d5:{c.instructions+=2;NFSU2_TR(0x5a18d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a18d9:{NFSU2_TR(0x5a18d9);
__builtin_memmove((R+16),(R+16),4);
}
B5a18e0:L5a18e0:{c.instructions+=2;NFSU2_TR(0x5a18e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a18e3:{NFSU2_TR(0x5a18e3);
if(r1(R+518)){{goto L5a18ef;}}
}
B5a18e5:L5a18e5:{c.instructions+=3;NFSU2_TR(0x5a18e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5a18e7:{NFSU2_TR(0x5a18e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a18e9:{NFSU2_TR(0x5a18e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a18e0u);}goto L5a18e0;}}
}
B5a18eb:L5a18eb:{c.instructions+=3;NFSU2_TR(0x5a18eb);
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
B5a18ed:{NFSU2_TR(0x5a18ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a18ee:{NFSU2_TR(0x5a18ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a18ef:L5a18ef:{c.instructions+=3;NFSU2_TR(0x5a18ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a18f3:{NFSU2_TR(0x5a18f3);
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
B5a18f5:{NFSU2_TR(0x5a18f5);
if(r1(R+518)){{goto L5a190e;}}
}
B5a18f7:L5a18f7:{c.instructions+=8;NFSU2_TR(0x5a18f7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a18fa:{NFSU2_TR(0x5a18fa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a18fd:{NFSU2_TR(0x5a18fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a18ff:{NFSU2_TR(0x5a18ff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1901:{NFSU2_TR(0x5a1901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1904:{NFSU2_TR(0x5a1904);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1907:{NFSU2_TR(0x5a1907);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a190a:{NFSU2_TR(0x5a190a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a190e:L5a190e:{c.instructions+=3;NFSU2_TR(0x5a190e);
__builtin_memmove((R+0),(R+24),4);
}
B5a1910:{NFSU2_TR(0x5a1910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1911:{NFSU2_TR(0x5a1911);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1920:L5a1920:{c.instructions+=7;NFSU2_TR(0x5a1920);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1921:{NFSU2_TR(0x5a1921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1922:{NFSU2_TR(0x5a1922);
__builtin_memmove((R+24),(R+4),4);
}
B5a1924:{NFSU2_TR(0x5a1924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1927:{NFSU2_TR(0x5a1927);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a1929:{NFSU2_TR(0x5a1929);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a192b:{NFSU2_TR(0x5a192b);
if(r1(R+518)){{goto L5a194c;}}
}
B5a192d:L5a192d:{c.instructions+=8;NFSU2_TR(0x5a192d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1930:{NFSU2_TR(0x5a1930);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1931:{NFSU2_TR(0x5a1931);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a1934:{NFSU2_TR(0x5a1934);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1939:{NFSU2_TR(0x5a1939);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a193a:{NFSU2_TR(0x5a193a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a193c:{NFSU2_TR(0x5a193c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a193d:{NFSU2_TR(0x5a193d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1942ull));
TAIL_STATIC(0x75c401u,75c);
}
B5a1942:L5a1942:{c.instructions+=2;NFSU2_TR(0x5a1942);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1943:{NFSU2_TR(0x5a1943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1948ull));
TAIL_STATIC(0x575630u,575);
}
B5a1948:L5a1948:{c.instructions+=2;NFSU2_TR(0x5a1948);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a194b:{NFSU2_TR(0x5a194b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a194c:L5a194c:{c.instructions+=3;NFSU2_TR(0x5a194c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a194f:{NFSU2_TR(0x5a194f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1950:{NFSU2_TR(0x5a1950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1955ull));
TAIL_STATIC(0x575630u,575);
}
B5a1955:L5a1955:{c.instructions+=8;NFSU2_TR(0x5a1955);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1958:{NFSU2_TR(0x5a1958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a195b:{NFSU2_TR(0x5a195b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a195e:{NFSU2_TR(0x5a195e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1961:{NFSU2_TR(0x5a1961);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a1965:{NFSU2_TR(0x5a1965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1966:{NFSU2_TR(0x5a1966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a1967:{NFSU2_TR(0x5a1967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1970:L5a1970:{c.instructions+=26;NFSU2_TR(0x5a1970);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1974:{NFSU2_TR(0x5a1974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1975:{NFSU2_TR(0x5a1975);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a1978:{NFSU2_TR(0x5a1978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5a197b:{NFSU2_TR(0x5a197b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a197f:{NFSU2_TR(0x5a197f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5a1982:{NFSU2_TR(0x5a1982);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5a1984:{NFSU2_TR(0x5a1984);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5a1988:{NFSU2_TR(0x5a1988);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a198c:{NFSU2_TR(0x5a198c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5a1990:{NFSU2_TR(0x5a1990);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a1994:{NFSU2_TR(0x5a1994);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5a1998:{NFSU2_TR(0x5a1998);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a199c:{NFSU2_TR(0x5a199c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5a19a0:{NFSU2_TR(0x5a19a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a19a4:{NFSU2_TR(0x5a19a4);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a19a7:{NFSU2_TR(0x5a19a7);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a19aa:{NFSU2_TR(0x5a19aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a19ad:{NFSU2_TR(0x5a19ad);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a19af:{NFSU2_TR(0x5a19af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a19b2:{NFSU2_TR(0x5a19b2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a19b5:{NFSU2_TR(0x5a19b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a19b6:{NFSU2_TR(0x5a19b6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a19b9:{NFSU2_TR(0x5a19b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5a19bc:{NFSU2_TR(0x5a19bc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a19be:{NFSU2_TR(0x5a19be);
if(r1(R+518)){{goto L5a19e9;}}
}
B5a19c0:L5a19c0:{c.instructions+=14;NFSU2_TR(0x5a19c0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a19c3:{NFSU2_TR(0x5a19c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a19c6:{NFSU2_TR(0x5a19c6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a19c9:{NFSU2_TR(0x5a19c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a19cd:{NFSU2_TR(0x5a19cd);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a19d0:{NFSU2_TR(0x5a19d0);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a19d3:{NFSU2_TR(0x5a19d3);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a19d6:{NFSU2_TR(0x5a19d6);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a19d9:{NFSU2_TR(0x5a19d9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a19db:{NFSU2_TR(0x5a19db);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5a19dd:{NFSU2_TR(0x5a19dd);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a19e0:{NFSU2_TR(0x5a19e0);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5a19e2:{NFSU2_TR(0x5a19e2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a19e6:{NFSU2_TR(0x5a19e6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a19e9:L5a19e9:{c.instructions+=1;NFSU2_TR(0x5a19e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a19f0:L5a19f0:{c.instructions+=10;NFSU2_TR(0x5a19f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a19f1:{NFSU2_TR(0x5a19f1);
__builtin_memmove((R+20),(R+16),4);
}
B5a19f3:{NFSU2_TR(0x5a19f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a19f6:{NFSU2_TR(0x5a19f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5a19f9:{NFSU2_TR(0x5a19f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a19fa:{NFSU2_TR(0x5a19fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a19fb:{NFSU2_TR(0x5a19fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a19fc:{NFSU2_TR(0x5a19fc);
__builtin_memmove((R+28),(R+4),4);
}
B5a19fe:{NFSU2_TR(0x5a19fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a1a02:{NFSU2_TR(0x5a1a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1a07ull));
TAIL_STATIC(0x59fb50u,59f);
}
B5a1a07:L5a1a07:{c.instructions+=5;NFSU2_TR(0x5a1a07);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a1a0b:{NFSU2_TR(0x5a1a0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a0c:{NFSU2_TR(0x5a1a0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a0e:{NFSU2_TR(0x5a1a0e);
__builtin_memmove((R+4),(R+28),4);
}
B5a1a10:{NFSU2_TR(0x5a1a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1a15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1970u);}goto L5a1970;}
}
B5a1a15:L5a1a15:{c.instructions+=7;NFSU2_TR(0x5a1a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a1a18:{NFSU2_TR(0x5a1a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a1a1b:{NFSU2_TR(0x5a1a1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a1a1f:{NFSU2_TR(0x5a1a1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a20:{NFSU2_TR(0x5a1a20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a21:{NFSU2_TR(0x5a1a21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a22:{NFSU2_TR(0x5a1a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1a27ull));
TAIL_STATIC(0x43d540u,43d);
}
B5a1a27:L5a1a27:{c.instructions+=5;NFSU2_TR(0x5a1a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1a2a:{NFSU2_TR(0x5a1a2a);
w4(R+24,u32(0x1ull));
}
B5a1a2f:{NFSU2_TR(0x5a1a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a1a32:{NFSU2_TR(0x5a1a32);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5a1a34:{NFSU2_TR(0x5a1a34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a1a5c;}}
}
B5a1a36:L5a1a36:{c.instructions+=5;NFSU2_TR(0x5a1a36);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a1a3a:{NFSU2_TR(0x5a1a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a3b:{NFSU2_TR(0x5a1a3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a3c:{NFSU2_TR(0x5a1a3c);
__builtin_memmove((R+4),(R+28),4);
}
B5a1a3e:{NFSU2_TR(0x5a1a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1a43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1970u);}goto L5a1970;}
}
B5a1a43:L5a1a43:{c.instructions+=6;NFSU2_TR(0x5a1a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1a46:{NFSU2_TR(0x5a1a46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5a1a49:{NFSU2_TR(0x5a1a49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a4a:{NFSU2_TR(0x5a1a4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a4b:{NFSU2_TR(0x5a1a4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a4c:{NFSU2_TR(0x5a1a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1a51ull));
TAIL_STATIC(0x43d570u,43d);
}
B5a1a51:L5a1a51:{c.instructions+=5;NFSU2_TR(0x5a1a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1a54:{NFSU2_TR(0x5a1a54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a1a57:{NFSU2_TR(0x5a1a57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a1a58:{NFSU2_TR(0x5a1a58);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1a5a:{NFSU2_TR(0x5a1a5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1a36u);}goto L5a1a36;}}
}
B5a1a5c:L5a1a5c:{c.instructions+=6;NFSU2_TR(0x5a1a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a1a5d:{NFSU2_TR(0x5a1a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a1a5e:{NFSU2_TR(0x5a1a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a1a5f:{NFSU2_TR(0x5a1a5f);
__builtin_memmove((R+16),(R+20),4);
}
B5a1a61:{NFSU2_TR(0x5a1a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a1a62:{NFSU2_TR(0x5a1a62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1a70:L5a1a70:{c.instructions+=6;NFSU2_TR(0x5a1a70);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a75:{NFSU2_TR(0x5a1a75);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a77:{NFSU2_TR(0x5a1a77);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a79:{NFSU2_TR(0x5a1a79);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B5a1a7c:{NFSU2_TR(0x5a1a7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a7d:{NFSU2_TR(0x5a1a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1a82ull));
TAIL_STATIC(0x75c401u,75c);
}
B5a1a82:L5a1a82:{c.instructions+=1;NFSU2_TR(0x5a1a82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a1a90:L5a1a90:{c.instructions+=26;NFSU2_TR(0x5a1a90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a91:{NFSU2_TR(0x5a1a91);
__builtin_memmove((R+20),(R+16),4);
}
B5a1a93:{NFSU2_TR(0x5a1a93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a1a96:{NFSU2_TR(0x5a1a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5a1a99:{NFSU2_TR(0x5a1a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1a9c:{NFSU2_TR(0x5a1a9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1a9d:{NFSU2_TR(0x5a1a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a1aa0:{NFSU2_TR(0x5a1aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1aa1:{NFSU2_TR(0x5a1aa1);
__builtin_memmove((R+24),(R+4),4);
}
B5a1aa3:{NFSU2_TR(0x5a1aa3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1aa4:{NFSU2_TR(0x5a1aa4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a1aa6:{NFSU2_TR(0x5a1aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1aac:{NFSU2_TR(0x5a1aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ab2:{NFSU2_TR(0x5a1ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ab8:{NFSU2_TR(0x5a1ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1abe:{NFSU2_TR(0x5a1abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ac4:{NFSU2_TR(0x5a1ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1aca:{NFSU2_TR(0x5a1aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ad0:{NFSU2_TR(0x5a1ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a1ad3:{NFSU2_TR(0x5a1ad3);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1ad8:{NFSU2_TR(0x5a1ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a1adb:{NFSU2_TR(0x5a1adb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1adc:{NFSU2_TR(0x5a1adc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a1add:{NFSU2_TR(0x5a1add);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ae1:{NFSU2_TR(0x5a1ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ae5:{NFSU2_TR(0x5a1ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a1aeaull));
TAIL_STATIC(0x43d190u,43d);
}
B5a1aea:L5a1aea:{c.instructions+=8;NFSU2_TR(0x5a1aea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a1aed:{NFSU2_TR(0x5a1aed);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5a1aef:{NFSU2_TR(0x5a1aef);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5a1af1:{NFSU2_TR(0x5a1af1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5a1af4:{NFSU2_TR(0x5a1af4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a1af6:{NFSU2_TR(0x5a1af6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a1af8:{NFSU2_TR(0x5a1af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1afb:{NFSU2_TR(0x5a1afb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a1b7c;}}
}
B5a1afd:L5a1afd:{c.instructions+=3;NFSU2_TR(0x5a1afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a1b00:{NFSU2_TR(0x5a1b00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a1b03:{NFSU2_TR(0x5a1b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a1b06:L5a1b06:{c.instructions+=31;NFSU2_TR(0x5a1b06);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b09:{NFSU2_TR(0x5a1b09);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5a1b0c:{NFSU2_TR(0x5a1b0c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a1b0e:{NFSU2_TR(0x5a1b0e);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b11:{NFSU2_TR(0x5a1b11);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a1b14:{NFSU2_TR(0x5a1b14);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a1b17:{NFSU2_TR(0x5a1b17);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b1a:{NFSU2_TR(0x5a1b1a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a1b1d:{NFSU2_TR(0x5a1b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a1b24:{NFSU2_TR(0x5a1b24);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b28:{NFSU2_TR(0x5a1b28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1b2a:{NFSU2_TR(0x5a1b2a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b2e:{NFSU2_TR(0x5a1b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a1b32:{NFSU2_TR(0x5a1b32);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b36:{NFSU2_TR(0x5a1b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1b39:{NFSU2_TR(0x5a1b39);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a1b3b:{NFSU2_TR(0x5a1b3b);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b3e:{NFSU2_TR(0x5a1b3e);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a1b41:{NFSU2_TR(0x5a1b41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a1b45:{NFSU2_TR(0x5a1b45);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b49:{NFSU2_TR(0x5a1b49);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a1b4a:{NFSU2_TR(0x5a1b4a);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1b50:{NFSU2_TR(0x5a1b50);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b56:{NFSU2_TR(0x5a1b56);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1b58:{NFSU2_TR(0x5a1b58);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1b5e:{NFSU2_TR(0x5a1b5e);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b64:{NFSU2_TR(0x5a1b64);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1b6a:{NFSU2_TR(0x5a1b6a);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b70:{NFSU2_TR(0x5a1b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a1b73:{NFSU2_TR(0x5a1b73);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a1b75:{NFSU2_TR(0x5a1b75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1b06u);}goto L5a1b06;}}
}
B5a1b77:L5a1b77:{c.instructions+=2;NFSU2_TR(0x5a1b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a1b7a:{NFSU2_TR(0x5a1b7a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a1b7c:L5a1b7c:{c.instructions+=22;NFSU2_TR(0x5a1b7c);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b82:{NFSU2_TR(0x5a1b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1b88:{NFSU2_TR(0x5a1b88);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1b8e:{NFSU2_TR(0x5a1b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1b94:{NFSU2_TR(0x5a1b94);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1b96:{NFSU2_TR(0x5a1b96);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1b9c:{NFSU2_TR(0x5a1b9c);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1ba2:{NFSU2_TR(0x5a1ba2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a1ba5:{NFSU2_TR(0x5a1ba5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a1bab:{NFSU2_TR(0x5a1bab);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a1bad:{NFSU2_TR(0x5a1bad);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1bb3:{NFSU2_TR(0x5a1bb3);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1bb9:{NFSU2_TR(0x5a1bb9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a1bbb:{NFSU2_TR(0x5a1bbb);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1bc1:{NFSU2_TR(0x5a1bc1);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1bc7:{NFSU2_TR(0x5a1bc7);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1bcd:{NFSU2_TR(0x5a1bcd);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1bd3:{NFSU2_TR(0x5a1bd3);
{u32 ea_=u32(r4(R+24)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1bd9:{NFSU2_TR(0x5a1bd9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a1bdf:{NFSU2_TR(0x5a1bdf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a1be1:{NFSU2_TR(0x5a1be1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a1be4:{NFSU2_TR(0x5a1be4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1cb5;}}
}
B5a1bea:L5a1bea:{c.instructions+=17;NFSU2_TR(0x5a1bea);
__builtin_memmove(gp(0x86b2dc),(R+28),4);
}
B5a1bf0:{NFSU2_TR(0x5a1bf0);
{u32 ea_=u32(r4(R+24)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1bf6:{NFSU2_TR(0x5a1bf6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a1bf8:{NFSU2_TR(0x5a1bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1bfb:{NFSU2_TR(0x5a1bfb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a1bfd:{NFSU2_TR(0x5a1bfd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a1bff:{NFSU2_TR(0x5a1bff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a1c01:{NFSU2_TR(0x5a1c01);
{u32 ea_=u32(r4(R+12)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1c04:{NFSU2_TR(0x5a1c04);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c08:{NFSU2_TR(0x5a1c08);
{u32 ea_=u32(r4(R+12)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1c0b:{NFSU2_TR(0x5a1c0b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a1c0d:{NFSU2_TR(0x5a1c0d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c11:{NFSU2_TR(0x5a1c11);
{u32 ea_=u32(r4(R+12)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1c14:{NFSU2_TR(0x5a1c14);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a1c16:{NFSU2_TR(0x5a1c16);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c1a:{NFSU2_TR(0x5a1c1a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1c1c:{NFSU2_TR(0x5a1c1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a1cad;}}
}
B5a1c22:L5a1c22:{c.instructions+=1;NFSU2_TR(0x5a1c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a1c25:L5a1c25:{c.instructions+=39;NFSU2_TR(0x5a1c25);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1c28:{NFSU2_TR(0x5a1c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1c2b:{NFSU2_TR(0x5a1c2b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a1c2f:{NFSU2_TR(0x5a1c2f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1c33:{NFSU2_TR(0x5a1c33);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1c36:{NFSU2_TR(0x5a1c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a1c39:{NFSU2_TR(0x5a1c39);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1c3d:{NFSU2_TR(0x5a1c3d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1c41:{NFSU2_TR(0x5a1c41);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a1c44:{NFSU2_TR(0x5a1c44);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1c46:{NFSU2_TR(0x5a1c46);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5a1c48:{NFSU2_TR(0x5a1c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1c4b:{NFSU2_TR(0x5a1c4b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B5a1c4e:{NFSU2_TR(0x5a1c4e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a1c52:{NFSU2_TR(0x5a1c52);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a1c54:{NFSU2_TR(0x5a1c54);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c56:{NFSU2_TR(0x5a1c56);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a1c58:{NFSU2_TR(0x5a1c58);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c5b:{NFSU2_TR(0x5a1c5b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c5e:{NFSU2_TR(0x5a1c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1c61:{NFSU2_TR(0x5a1c61);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5a1c65:{NFSU2_TR(0x5a1c65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1c67:{NFSU2_TR(0x5a1c67);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a1c69:{NFSU2_TR(0x5a1c69);
w2(R+28,u16(u32(r2(R+28))+u32(r2(R+4))));
}
B5a1c6c:{NFSU2_TR(0x5a1c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a1c6f:{NFSU2_TR(0x5a1c6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a1c72:{NFSU2_TR(0x5a1c72);
u8 U[14];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5a1c77:{NFSU2_TR(0x5a1c77);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1c7d:{NFSU2_TR(0x5a1c7d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5a1c7e:{NFSU2_TR(0x5a1c7e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a1c80:{NFSU2_TR(0x5a1c80);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c86:{NFSU2_TR(0x5a1c86);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1c8c:{NFSU2_TR(0x5a1c8c);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1c92:{NFSU2_TR(0x5a1c92);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1c96:{NFSU2_TR(0x5a1c96);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1c9c:{NFSU2_TR(0x5a1c9c);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1ca2:{NFSU2_TR(0x5a1ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1ca5:{NFSU2_TR(0x5a1ca5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a1ca7:{NFSU2_TR(0x5a1ca7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1c25u);}goto L5a1c25;}}
}
B5a1cad:L5a1cad:{c.instructions+=3;NFSU2_TR(0x5a1cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1cb0:{NFSU2_TR(0x5a1cb0);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5a1cb2:{NFSU2_TR(0x5a1cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1cb5:L5a1cb5:{c.instructions+=13;NFSU2_TR(0x5a1cb5);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a1cb8:{NFSU2_TR(0x5a1cb8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a1cbe:{NFSU2_TR(0x5a1cbe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a1cc0:{NFSU2_TR(0x5a1cc0);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1cc6:{NFSU2_TR(0x5a1cc6);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1ccc:{NFSU2_TR(0x5a1ccc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a1cce:{NFSU2_TR(0x5a1cce);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1cd4:{NFSU2_TR(0x5a1cd4);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1cda:{NFSU2_TR(0x5a1cda);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1ce0:{NFSU2_TR(0x5a1ce0);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1ce6:{NFSU2_TR(0x5a1ce6);
__builtin_memmove((R+0),gp(0x86b2dc),4);
}
B5a1ceb:{NFSU2_TR(0x5a1ceb);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5a1ced:{NFSU2_TR(0x5a1ced);
if(r1(R+518)){TAIL_STATIC(0x5a2001u,5a2);}
}
B5a1cf3:L5a1cf3:{c.instructions+=4;NFSU2_TR(0x5a1cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1cf6:{NFSU2_TR(0x5a1cf6);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1cf9:{NFSU2_TR(0x5a1cf9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a1cfc:{NFSU2_TR(0x5a1cfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a1da6;}}
}
B5a1d02:L5a1d02:{c.instructions+=41;NFSU2_TR(0x5a1d02);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d08:{NFSU2_TR(0x5a1d08);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d0b:{NFSU2_TR(0x5a1d0b);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d11:{NFSU2_TR(0x5a1d11);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d14:{NFSU2_TR(0x5a1d14);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d1a:{NFSU2_TR(0x5a1d1a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d1e:{NFSU2_TR(0x5a1d1e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1d20:{NFSU2_TR(0x5a1d20);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d24:{NFSU2_TR(0x5a1d24);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a1d28:{NFSU2_TR(0x5a1d28);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d2c:{NFSU2_TR(0x5a1d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1d30:{NFSU2_TR(0x5a1d30);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1d32:{NFSU2_TR(0x5a1d32);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d36:{NFSU2_TR(0x5a1d36);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d39:{NFSU2_TR(0x5a1d39);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d3f:{NFSU2_TR(0x5a1d3f);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d42:{NFSU2_TR(0x5a1d42);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d48:{NFSU2_TR(0x5a1d48);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d4b:{NFSU2_TR(0x5a1d4b);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d51:{NFSU2_TR(0x5a1d51);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d55:{NFSU2_TR(0x5a1d55);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1d59:{NFSU2_TR(0x5a1d59);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1d5b:{NFSU2_TR(0x5a1d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1d5f:{NFSU2_TR(0x5a1d5f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d63:{NFSU2_TR(0x5a1d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1d67:{NFSU2_TR(0x5a1d67);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d6b:{NFSU2_TR(0x5a1d6b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1d6f:{NFSU2_TR(0x5a1d6f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d73:{NFSU2_TR(0x5a1d73);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1d77:{NFSU2_TR(0x5a1d77);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d7b:{NFSU2_TR(0x5a1d7b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d7f:{NFSU2_TR(0x5a1d7f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a1d81:{NFSU2_TR(0x5a1d81);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1d85:{NFSU2_TR(0x5a1d85);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1d87:{NFSU2_TR(0x5a1d87);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d89:{NFSU2_TR(0x5a1d89);
{u32 ea_=u32(u32(8003688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d8f:{NFSU2_TR(0x5a1d8f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d92:{NFSU2_TR(0x5a1d92);
{u32 ea_=u32(u32(8003688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1d98:{NFSU2_TR(0x5a1d98);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1d9b:{NFSU2_TR(0x5a1d9b);
{u32 ea_=u32(u32(8003688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1da1:{NFSU2_TR(0x5a1da1);
{goto L5a1e8d;}
}
B5a1da6:L5a1da6:{c.instructions+=58;NFSU2_TR(0x5a1da6);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1dac:{NFSU2_TR(0x5a1dac);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1daf:{NFSU2_TR(0x5a1daf);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1db5:{NFSU2_TR(0x5a1db5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1db8:{NFSU2_TR(0x5a1db8);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1dbe:{NFSU2_TR(0x5a1dbe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1dc2:{NFSU2_TR(0x5a1dc2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1dc4:{NFSU2_TR(0x5a1dc4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1dc8:{NFSU2_TR(0x5a1dc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1dcc:{NFSU2_TR(0x5a1dcc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1dd0:{NFSU2_TR(0x5a1dd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1dd4:{NFSU2_TR(0x5a1dd4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1dd6:{NFSU2_TR(0x5a1dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1dda:{NFSU2_TR(0x5a1dda);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1dde:{NFSU2_TR(0x5a1dde);
{u32 ea_=u32(r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1de1:{NFSU2_TR(0x5a1de1);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1de7:{NFSU2_TR(0x5a1de7);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1dea:{NFSU2_TR(0x5a1dea);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1df0:{NFSU2_TR(0x5a1df0);
{u32 ea_=u32(r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1df3:{NFSU2_TR(0x5a1df3);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1df9:{NFSU2_TR(0x5a1df9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1dfd:{NFSU2_TR(0x5a1dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a1e01:{NFSU2_TR(0x5a1e01);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1e03:{NFSU2_TR(0x5a1e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1e07:{NFSU2_TR(0x5a1e07);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e0b:{NFSU2_TR(0x5a1e0b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e0f:{NFSU2_TR(0x5a1e0f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1e13:{NFSU2_TR(0x5a1e13);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e17:{NFSU2_TR(0x5a1e17);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1e1b:{NFSU2_TR(0x5a1e1b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e1f:{NFSU2_TR(0x5a1e1f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1e23:{NFSU2_TR(0x5a1e23);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e25:{NFSU2_TR(0x5a1e25);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1e2b:{NFSU2_TR(0x5a1e2b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e2e:{NFSU2_TR(0x5a1e2e);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1e34:{NFSU2_TR(0x5a1e34);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e37:{NFSU2_TR(0x5a1e37);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1e3d:{NFSU2_TR(0x5a1e3d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e41:{NFSU2_TR(0x5a1e41);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1e45:{NFSU2_TR(0x5a1e45);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1e47:{NFSU2_TR(0x5a1e47);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1e4b:{NFSU2_TR(0x5a1e4b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e4f:{NFSU2_TR(0x5a1e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1e53:{NFSU2_TR(0x5a1e53);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e57:{NFSU2_TR(0x5a1e57);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1e5b:{NFSU2_TR(0x5a1e5b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e5f:{NFSU2_TR(0x5a1e5f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1e63:{NFSU2_TR(0x5a1e63);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e67:{NFSU2_TR(0x5a1e67);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e6b:{NFSU2_TR(0x5a1e6b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a1e6d:{NFSU2_TR(0x5a1e6d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e71:{NFSU2_TR(0x5a1e71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1e73:{NFSU2_TR(0x5a1e73);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e75:{NFSU2_TR(0x5a1e75);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1e7b:{NFSU2_TR(0x5a1e7b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e7e:{NFSU2_TR(0x5a1e7e);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1e84:{NFSU2_TR(0x5a1e84);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1e87:{NFSU2_TR(0x5a1e87);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1e8d:L5a1e8d:{c.instructions+=29;NFSU2_TR(0x5a1e8d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e91:{NFSU2_TR(0x5a1e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a1e95:{NFSU2_TR(0x5a1e95);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1e97:{NFSU2_TR(0x5a1e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1e9b:{NFSU2_TR(0x5a1e9b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1e9f:{NFSU2_TR(0x5a1e9f);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a1ea3:{NFSU2_TR(0x5a1ea3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a1ea6:{NFSU2_TR(0x5a1ea6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1eaa:{NFSU2_TR(0x5a1eaa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5a1eac:{NFSU2_TR(0x5a1eac);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1eb0:{NFSU2_TR(0x5a1eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1eb3:{NFSU2_TR(0x5a1eb3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1eb7:{NFSU2_TR(0x5a1eb7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1ebb:{NFSU2_TR(0x5a1ebb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1ebf:{NFSU2_TR(0x5a1ebf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1ec3:{NFSU2_TR(0x5a1ec3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1ec7:{NFSU2_TR(0x5a1ec7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1ecb:{NFSU2_TR(0x5a1ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a1ecf:{NFSU2_TR(0x5a1ecf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1ed1:{NFSU2_TR(0x5a1ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1ed4:{NFSU2_TR(0x5a1ed4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1ed6:{NFSU2_TR(0x5a1ed6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a1ed8:{NFSU2_TR(0x5a1ed8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1edb:{NFSU2_TR(0x5a1edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1ede:{NFSU2_TR(0x5a1ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5a1ee1:{NFSU2_TR(0x5a1ee1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5a1ee4:{NFSU2_TR(0x5a1ee4);
u8 U[14];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5a1ee9:{NFSU2_TR(0x5a1ee9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a1eec:{NFSU2_TR(0x5a1eec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a1fef;}}
}
B5a1ef2:L5a1ef2:{c.instructions+=1;NFSU2_TR(0x5a1ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a1ef5:L5a1ef5:{c.instructions+=70;NFSU2_TR(0x5a1ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a1ef8:{NFSU2_TR(0x5a1ef8);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a1efc:{NFSU2_TR(0x5a1efc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a1eff:{NFSU2_TR(0x5a1eff);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f02:{NFSU2_TR(0x5a1f02);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5a1f04:{NFSU2_TR(0x5a1f04);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f07:{NFSU2_TR(0x5a1f07);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B5a1f0a:{NFSU2_TR(0x5a1f0a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f0e:{NFSU2_TR(0x5a1f0e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f11:{NFSU2_TR(0x5a1f11);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f15:{NFSU2_TR(0x5a1f15);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1f1b:{NFSU2_TR(0x5a1f1b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f1f:{NFSU2_TR(0x5a1f1f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1f25:{NFSU2_TR(0x5a1f25);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f29:{NFSU2_TR(0x5a1f29);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1f2f:{NFSU2_TR(0x5a1f2f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f33:{NFSU2_TR(0x5a1f33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1f35:{NFSU2_TR(0x5a1f35);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f39:{NFSU2_TR(0x5a1f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1f3d:{NFSU2_TR(0x5a1f3d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f41:{NFSU2_TR(0x5a1f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1f45:{NFSU2_TR(0x5a1f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1f48:{NFSU2_TR(0x5a1f48);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1f4a:{NFSU2_TR(0x5a1f4a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f4e:{NFSU2_TR(0x5a1f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1f52:{NFSU2_TR(0x5a1f52);
{u32 ea_=u32(r4(R+8)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f55:{NFSU2_TR(0x5a1f55);
{u32 ea_=u32(r4(R+8)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f58:{NFSU2_TR(0x5a1f58);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f5c:{NFSU2_TR(0x5a1f5c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1f62:{NFSU2_TR(0x5a1f62);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f66:{NFSU2_TR(0x5a1f66);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1f6c:{NFSU2_TR(0x5a1f6c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f70:{NFSU2_TR(0x5a1f70);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a1f76:{NFSU2_TR(0x5a1f76);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f7a:{NFSU2_TR(0x5a1f7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1f7e:{NFSU2_TR(0x5a1f7e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1f80:{NFSU2_TR(0x5a1f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1f84:{NFSU2_TR(0x5a1f84);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f88:{NFSU2_TR(0x5a1f88);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a1f8c:{NFSU2_TR(0x5a1f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a1f8f:{NFSU2_TR(0x5a1f8f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1f93:{NFSU2_TR(0x5a1f93);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a1f96:{NFSU2_TR(0x5a1f96);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1f9a:{NFSU2_TR(0x5a1f9a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5a1f9c:{NFSU2_TR(0x5a1f9c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1fa0:{NFSU2_TR(0x5a1fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a1fa7:{NFSU2_TR(0x5a1fa7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1fab:{NFSU2_TR(0x5a1fab);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a1faf:{NFSU2_TR(0x5a1faf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a1fb3:{NFSU2_TR(0x5a1fb3);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5a1fb5:{NFSU2_TR(0x5a1fb5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1fb9:{NFSU2_TR(0x5a1fb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a1fbd:{NFSU2_TR(0x5a1fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a1fc0:{NFSU2_TR(0x5a1fc0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a1fc2:{NFSU2_TR(0x5a1fc2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1fc4:{NFSU2_TR(0x5a1fc4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a1fc6:{NFSU2_TR(0x5a1fc6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a1fc9:{NFSU2_TR(0x5a1fc9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5a1fcd:{NFSU2_TR(0x5a1fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1fd0:{NFSU2_TR(0x5a1fd0);
w2(R+28,u16(u32(r2(R+28))+u32(r2(R+4))));
}
B5a1fd3:{NFSU2_TR(0x5a1fd3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a1fd5:{NFSU2_TR(0x5a1fd5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5a1fd7:{NFSU2_TR(0x5a1fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a1fda:{NFSU2_TR(0x5a1fda);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a1fdd:{NFSU2_TR(0x5a1fdd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a1fde:{NFSU2_TR(0x5a1fde);
u8 U[14];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5a1fe3:{NFSU2_TR(0x5a1fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1fe6:{NFSU2_TR(0x5a1fe6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5a1fe7:{NFSU2_TR(0x5a1fe7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a1fe9:{NFSU2_TR(0x5a1fe9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a1ef5u);}goto L5a1ef5;}}
}
B5a1fef:L5a1fef:{c.instructions+=6;NFSU2_TR(0x5a1fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a1ff2:{NFSU2_TR(0x5a1ff2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a1ff4:{NFSU2_TR(0x5a1ff4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a1ff7:{NFSU2_TR(0x5a1ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5a1ffa:{NFSU2_TR(0x5a1ffa);
u8 U[12];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a1ffe:{NFSU2_TR(0x5a1ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5a2001u,5a2);
}
XIT:NFSU2_TR_EXIT(0x5a1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
