#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5d0(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_640(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d1(u8* __restrict R,Cpu& c);
u32 page_5d1(Cpu& c){return body_5d1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d1001:goto L5d1001;
case 0x5d1004:c.instructions+=7;goto B5d1004;
case 0x5d1007:c.instructions+=6;goto B5d1007;
case 0x5d100a:c.instructions+=5;goto B5d100a;
case 0x5d100d:c.instructions+=4;goto B5d100d;
case 0x5d1010:c.instructions+=3;goto B5d1010;
case 0x5d1015:c.instructions+=2;goto B5d1015;
case 0x5d1016:c.instructions+=1;goto B5d1016;
case 0x5d101b:goto L5d101b;
case 0x5d1020:c.instructions+=1;goto B5d1020;
case 0x5d1025:goto L5d1025;
case 0x5d1028:c.instructions+=8;goto B5d1028;
case 0x5d102b:c.instructions+=7;goto B5d102b;
case 0x5d102e:c.instructions+=6;goto B5d102e;
case 0x5d1031:c.instructions+=5;goto B5d1031;
case 0x5d1034:c.instructions+=4;goto B5d1034;
case 0x5d1037:c.instructions+=3;goto B5d1037;
case 0x5d103c:c.instructions+=2;goto B5d103c;
case 0x5d103d:c.instructions+=1;goto B5d103d;
case 0x5d1042:goto L5d1042;
case 0x5d1047:c.instructions+=1;goto B5d1047;
case 0x5d104c:goto L5d104c;
case 0x5d104f:c.instructions+=8;goto B5d104f;
case 0x5d1052:c.instructions+=7;goto B5d1052;
case 0x5d1055:c.instructions+=6;goto B5d1055;
case 0x5d1058:c.instructions+=5;goto B5d1058;
case 0x5d105b:c.instructions+=4;goto B5d105b;
case 0x5d105e:c.instructions+=3;goto B5d105e;
case 0x5d1063:c.instructions+=2;goto B5d1063;
case 0x5d1064:c.instructions+=1;goto B5d1064;
case 0x5d1069:goto L5d1069;
case 0x5d106e:c.instructions+=1;goto B5d106e;
case 0x5d1073:goto L5d1073;
case 0x5d1076:c.instructions+=8;goto B5d1076;
case 0x5d107c:c.instructions+=7;goto B5d107c;
case 0x5d107f:c.instructions+=6;goto B5d107f;
case 0x5d1085:c.instructions+=5;goto B5d1085;
case 0x5d1088:c.instructions+=4;goto B5d1088;
case 0x5d108d:c.instructions+=3;goto B5d108d;
case 0x5d1092:c.instructions+=2;goto B5d1092;
case 0x5d1093:c.instructions+=1;goto B5d1093;
case 0x5d1098:goto L5d1098;
case 0x5d109d:c.instructions+=1;goto B5d109d;
case 0x5d10a2:goto L5d10a2;
case 0x5d10a5:c.instructions+=8;goto B5d10a5;
case 0x5d10ab:c.instructions+=7;goto B5d10ab;
case 0x5d10ae:c.instructions+=6;goto B5d10ae;
case 0x5d10b4:c.instructions+=5;goto B5d10b4;
case 0x5d10b7:c.instructions+=4;goto B5d10b7;
case 0x5d10bc:c.instructions+=3;goto B5d10bc;
case 0x5d10c1:c.instructions+=2;goto B5d10c1;
case 0x5d10c2:c.instructions+=1;goto B5d10c2;
case 0x5d10c7:goto L5d10c7;
case 0x5d10ca:c.instructions+=2;goto B5d10ca;
case 0x5d10cf:c.instructions+=1;goto B5d10cf;
case 0x5d10d4:goto L5d10d4;
case 0x5d10d7:c.instructions+=8;goto B5d10d7;
case 0x5d10dd:c.instructions+=7;goto B5d10dd;
case 0x5d10e0:c.instructions+=6;goto B5d10e0;
case 0x5d10e6:c.instructions+=5;goto B5d10e6;
case 0x5d10e9:c.instructions+=4;goto B5d10e9;
case 0x5d10ee:c.instructions+=3;goto B5d10ee;
case 0x5d10f3:c.instructions+=2;goto B5d10f3;
case 0x5d10f4:c.instructions+=1;goto B5d10f4;
case 0x5d10f9:goto L5d10f9;
case 0x5d10fe:c.instructions+=1;goto B5d10fe;
case 0x5d1103:goto L5d1103;
case 0x5d1106:c.instructions+=8;goto B5d1106;
case 0x5d110c:c.instructions+=7;goto B5d110c;
case 0x5d110f:c.instructions+=6;goto B5d110f;
case 0x5d1115:c.instructions+=5;goto B5d1115;
case 0x5d1118:c.instructions+=4;goto B5d1118;
case 0x5d111d:c.instructions+=3;goto B5d111d;
case 0x5d1122:c.instructions+=2;goto B5d1122;
case 0x5d1123:c.instructions+=1;goto B5d1123;
case 0x5d1128:goto L5d1128;
case 0x5d112d:c.instructions+=1;goto B5d112d;
case 0x5d1132:goto L5d1132;
case 0x5d1135:c.instructions+=8;goto B5d1135;
case 0x5d113b:c.instructions+=7;goto B5d113b;
case 0x5d113e:c.instructions+=6;goto B5d113e;
case 0x5d1144:c.instructions+=5;goto B5d1144;
case 0x5d1147:c.instructions+=4;goto B5d1147;
case 0x5d114c:c.instructions+=3;goto B5d114c;
case 0x5d1151:c.instructions+=2;goto B5d1151;
case 0x5d1152:c.instructions+=1;goto B5d1152;
case 0x5d1157:goto L5d1157;
case 0x5d115c:c.instructions+=1;goto B5d115c;
case 0x5d1161:goto L5d1161;
case 0x5d1164:c.instructions+=8;goto B5d1164;
case 0x5d116a:c.instructions+=7;goto B5d116a;
case 0x5d116d:c.instructions+=6;goto B5d116d;
case 0x5d1173:c.instructions+=5;goto B5d1173;
case 0x5d1176:c.instructions+=4;goto B5d1176;
case 0x5d117b:c.instructions+=3;goto B5d117b;
case 0x5d1180:c.instructions+=2;goto B5d1180;
case 0x5d1181:c.instructions+=1;goto B5d1181;
case 0x5d1186:goto L5d1186;
case 0x5d118b:c.instructions+=1;goto B5d118b;
case 0x5d1190:goto L5d1190;
case 0x5d1193:c.instructions+=8;goto B5d1193;
case 0x5d1199:c.instructions+=7;goto B5d1199;
case 0x5d119c:c.instructions+=6;goto B5d119c;
case 0x5d11a2:c.instructions+=5;goto B5d11a2;
case 0x5d11a5:c.instructions+=4;goto B5d11a5;
case 0x5d11aa:c.instructions+=3;goto B5d11aa;
case 0x5d11af:c.instructions+=2;goto B5d11af;
case 0x5d11b0:c.instructions+=1;goto B5d11b0;
case 0x5d11b5:goto L5d11b5;
case 0x5d11ba:c.instructions+=1;goto B5d11ba;
case 0x5d11bf:goto L5d11bf;
case 0x5d11c2:c.instructions+=9;goto B5d11c2;
case 0x5d11c8:c.instructions+=8;goto B5d11c8;
case 0x5d11cb:c.instructions+=7;goto B5d11cb;
case 0x5d11d1:c.instructions+=6;goto B5d11d1;
case 0x5d11d4:c.instructions+=5;goto B5d11d4;
case 0x5d11d7:c.instructions+=4;goto B5d11d7;
case 0x5d11dc:c.instructions+=3;goto B5d11dc;
case 0x5d11e1:c.instructions+=2;goto B5d11e1;
case 0x5d11e2:c.instructions+=1;goto B5d11e2;
case 0x5d11e7:goto L5d11e7;
case 0x5d11ec:c.instructions+=1;goto B5d11ec;
case 0x5d11f1:goto L5d11f1;
case 0x5d11f4:c.instructions+=8;goto B5d11f4;
case 0x5d11fa:c.instructions+=7;goto B5d11fa;
case 0x5d11fd:c.instructions+=6;goto B5d11fd;
case 0x5d1203:c.instructions+=5;goto B5d1203;
case 0x5d1206:c.instructions+=4;goto B5d1206;
case 0x5d120b:c.instructions+=3;goto B5d120b;
case 0x5d1210:c.instructions+=2;goto B5d1210;
case 0x5d1211:c.instructions+=1;goto B5d1211;
case 0x5d1216:goto L5d1216;
case 0x5d121b:c.instructions+=1;goto B5d121b;
case 0x5d1220:goto L5d1220;
case 0x5d1223:c.instructions+=8;goto B5d1223;
case 0x5d1229:c.instructions+=7;goto B5d1229;
case 0x5d122c:c.instructions+=6;goto B5d122c;
case 0x5d1232:c.instructions+=5;goto B5d1232;
case 0x5d1235:c.instructions+=4;goto B5d1235;
case 0x5d123a:c.instructions+=3;goto B5d123a;
case 0x5d123f:c.instructions+=2;goto B5d123f;
case 0x5d1240:c.instructions+=1;goto B5d1240;
case 0x5d1245:goto L5d1245;
case 0x5d124a:c.instructions+=1;goto B5d124a;
case 0x5d124f:goto L5d124f;
case 0x5d1252:c.instructions+=8;goto B5d1252;
case 0x5d1258:c.instructions+=7;goto B5d1258;
case 0x5d125b:c.instructions+=6;goto B5d125b;
case 0x5d1261:c.instructions+=5;goto B5d1261;
case 0x5d1264:c.instructions+=4;goto B5d1264;
case 0x5d1269:c.instructions+=3;goto B5d1269;
case 0x5d126e:c.instructions+=2;goto B5d126e;
case 0x5d126f:c.instructions+=1;goto B5d126f;
case 0x5d1274:goto L5d1274;
case 0x5d1279:c.instructions+=1;goto B5d1279;
case 0x5d127e:goto L5d127e;
case 0x5d1281:c.instructions+=8;goto B5d1281;
case 0x5d1287:c.instructions+=7;goto B5d1287;
case 0x5d128a:c.instructions+=6;goto B5d128a;
case 0x5d1290:c.instructions+=5;goto B5d1290;
case 0x5d1293:c.instructions+=4;goto B5d1293;
case 0x5d1298:c.instructions+=3;goto B5d1298;
case 0x5d129d:c.instructions+=2;goto B5d129d;
case 0x5d129e:c.instructions+=1;goto B5d129e;
case 0x5d12a3:goto L5d12a3;
case 0x5d12a8:c.instructions+=1;goto B5d12a8;
case 0x5d12ad:goto L5d12ad;
case 0x5d12b0:c.instructions+=8;goto B5d12b0;
case 0x5d12b6:c.instructions+=7;goto B5d12b6;
case 0x5d12b9:c.instructions+=6;goto B5d12b9;
case 0x5d12bf:c.instructions+=5;goto B5d12bf;
case 0x5d12c2:c.instructions+=4;goto B5d12c2;
case 0x5d12c7:c.instructions+=3;goto B5d12c7;
case 0x5d12cc:c.instructions+=2;goto B5d12cc;
case 0x5d12cd:c.instructions+=1;goto B5d12cd;
case 0x5d12d2:goto L5d12d2;
case 0x5d12d5:c.instructions+=2;goto B5d12d5;
case 0x5d12da:c.instructions+=1;goto B5d12da;
case 0x5d12df:goto L5d12df;
case 0x5d12e2:c.instructions+=8;goto B5d12e2;
case 0x5d12e8:c.instructions+=7;goto B5d12e8;
case 0x5d12eb:c.instructions+=6;goto B5d12eb;
case 0x5d12f1:c.instructions+=5;goto B5d12f1;
case 0x5d12f4:c.instructions+=4;goto B5d12f4;
case 0x5d12f9:c.instructions+=3;goto B5d12f9;
case 0x5d12fe:c.instructions+=2;goto B5d12fe;
case 0x5d12ff:c.instructions+=1;goto B5d12ff;
case 0x5d1304:goto L5d1304;
case 0x5d1309:c.instructions+=1;goto B5d1309;
case 0x5d130e:goto L5d130e;
case 0x5d1311:c.instructions+=8;goto B5d1311;
case 0x5d1317:c.instructions+=7;goto B5d1317;
case 0x5d131a:c.instructions+=6;goto B5d131a;
case 0x5d1320:c.instructions+=5;goto B5d1320;
case 0x5d1323:c.instructions+=4;goto B5d1323;
case 0x5d1328:c.instructions+=3;goto B5d1328;
case 0x5d132d:c.instructions+=2;goto B5d132d;
case 0x5d132e:c.instructions+=1;goto B5d132e;
case 0x5d1333:goto L5d1333;
case 0x5d1338:c.instructions+=1;goto B5d1338;
case 0x5d133d:goto L5d133d;
case 0x5d1340:c.instructions+=8;goto B5d1340;
case 0x5d1346:c.instructions+=7;goto B5d1346;
case 0x5d1349:c.instructions+=6;goto B5d1349;
case 0x5d134f:c.instructions+=5;goto B5d134f;
case 0x5d1352:c.instructions+=4;goto B5d1352;
case 0x5d1357:c.instructions+=3;goto B5d1357;
case 0x5d135c:c.instructions+=2;goto B5d135c;
case 0x5d135d:c.instructions+=1;goto B5d135d;
case 0x5d1362:goto L5d1362;
case 0x5d1367:c.instructions+=1;goto B5d1367;
case 0x5d136c:goto L5d136c;
case 0x5d136f:c.instructions+=8;goto B5d136f;
case 0x5d1375:c.instructions+=7;goto B5d1375;
case 0x5d1378:c.instructions+=6;goto B5d1378;
case 0x5d137e:c.instructions+=5;goto B5d137e;
case 0x5d1381:c.instructions+=4;goto B5d1381;
case 0x5d1386:c.instructions+=3;goto B5d1386;
case 0x5d138b:c.instructions+=2;goto B5d138b;
case 0x5d138c:c.instructions+=1;goto B5d138c;
case 0x5d1391:goto L5d1391;
case 0x5d1396:c.instructions+=1;goto B5d1396;
case 0x5d139b:goto L5d139b;
case 0x5d139e:c.instructions+=8;goto B5d139e;
case 0x5d13a4:c.instructions+=7;goto B5d13a4;
case 0x5d13a7:c.instructions+=6;goto B5d13a7;
case 0x5d13ad:c.instructions+=5;goto B5d13ad;
case 0x5d13b0:c.instructions+=4;goto B5d13b0;
case 0x5d13b5:c.instructions+=3;goto B5d13b5;
case 0x5d13ba:c.instructions+=2;goto B5d13ba;
case 0x5d13bb:c.instructions+=1;goto B5d13bb;
case 0x5d13c0:goto L5d13c0;
case 0x5d13c5:c.instructions+=1;goto B5d13c5;
case 0x5d13ca:goto L5d13ca;
case 0x5d13cd:c.instructions+=9;goto B5d13cd;
case 0x5d13d0:c.instructions+=8;goto B5d13d0;
case 0x5d13d6:c.instructions+=7;goto B5d13d6;
case 0x5d13d9:c.instructions+=6;goto B5d13d9;
case 0x5d13df:c.instructions+=5;goto B5d13df;
case 0x5d13e2:c.instructions+=4;goto B5d13e2;
case 0x5d13e7:c.instructions+=3;goto B5d13e7;
case 0x5d13ec:c.instructions+=2;goto B5d13ec;
case 0x5d13ed:c.instructions+=1;goto B5d13ed;
case 0x5d13f2:goto L5d13f2;
case 0x5d13f7:c.instructions+=1;goto B5d13f7;
case 0x5d13fc:goto L5d13fc;
case 0x5d13ff:c.instructions+=8;goto B5d13ff;
case 0x5d1405:c.instructions+=7;goto B5d1405;
case 0x5d1408:c.instructions+=6;goto B5d1408;
case 0x5d140e:c.instructions+=5;goto B5d140e;
case 0x5d1411:c.instructions+=4;goto B5d1411;
case 0x5d1416:c.instructions+=3;goto B5d1416;
case 0x5d141b:c.instructions+=2;goto B5d141b;
case 0x5d141c:c.instructions+=1;goto B5d141c;
case 0x5d1421:goto L5d1421;
case 0x5d1426:c.instructions+=1;goto B5d1426;
case 0x5d142b:goto L5d142b;
case 0x5d142e:c.instructions+=8;goto B5d142e;
case 0x5d1434:c.instructions+=7;goto B5d1434;
case 0x5d1437:c.instructions+=6;goto B5d1437;
case 0x5d143d:c.instructions+=5;goto B5d143d;
case 0x5d1440:c.instructions+=4;goto B5d1440;
case 0x5d1445:c.instructions+=3;goto B5d1445;
case 0x5d144a:c.instructions+=2;goto B5d144a;
case 0x5d144b:c.instructions+=1;goto B5d144b;
case 0x5d1450:goto L5d1450;
case 0x5d1455:c.instructions+=1;goto B5d1455;
case 0x5d145a:goto L5d145a;
case 0x5d145d:c.instructions+=8;goto B5d145d;
case 0x5d1463:c.instructions+=7;goto B5d1463;
case 0x5d1466:c.instructions+=6;goto B5d1466;
case 0x5d146c:c.instructions+=5;goto B5d146c;
case 0x5d146f:c.instructions+=4;goto B5d146f;
case 0x5d1474:c.instructions+=3;goto B5d1474;
case 0x5d1479:c.instructions+=2;goto B5d1479;
case 0x5d147a:c.instructions+=1;goto B5d147a;
case 0x5d147f:goto L5d147f;
case 0x5d1484:c.instructions+=1;goto B5d1484;
case 0x5d1489:goto L5d1489;
case 0x5d148c:c.instructions+=8;goto B5d148c;
case 0x5d1492:c.instructions+=7;goto B5d1492;
case 0x5d1495:c.instructions+=6;goto B5d1495;
case 0x5d149b:c.instructions+=5;goto B5d149b;
case 0x5d149e:c.instructions+=4;goto B5d149e;
case 0x5d14a3:c.instructions+=3;goto B5d14a3;
case 0x5d14a8:c.instructions+=2;goto B5d14a8;
case 0x5d14a9:c.instructions+=1;goto B5d14a9;
case 0x5d14ae:goto L5d14ae;
case 0x5d14b3:c.instructions+=1;goto B5d14b3;
case 0x5d14b8:goto L5d14b8;
case 0x5d14bb:c.instructions+=8;goto B5d14bb;
case 0x5d14c1:c.instructions+=7;goto B5d14c1;
case 0x5d14c4:c.instructions+=6;goto B5d14c4;
case 0x5d14ca:c.instructions+=5;goto B5d14ca;
case 0x5d14cd:c.instructions+=4;goto B5d14cd;
case 0x5d14d2:c.instructions+=3;goto B5d14d2;
case 0x5d14d7:c.instructions+=2;goto B5d14d7;
case 0x5d14d8:c.instructions+=1;goto B5d14d8;
case 0x5d14dd:goto L5d14dd;
case 0x5d14e0:c.instructions+=2;goto B5d14e0;
case 0x5d14e5:c.instructions+=1;goto B5d14e5;
case 0x5d14ea:goto L5d14ea;
case 0x5d14ed:c.instructions+=8;goto B5d14ed;
case 0x5d14f3:c.instructions+=7;goto B5d14f3;
case 0x5d14f6:c.instructions+=6;goto B5d14f6;
case 0x5d14fc:c.instructions+=5;goto B5d14fc;
case 0x5d14ff:c.instructions+=4;goto B5d14ff;
case 0x5d1504:c.instructions+=3;goto B5d1504;
case 0x5d1509:c.instructions+=2;goto B5d1509;
case 0x5d150a:c.instructions+=1;goto B5d150a;
case 0x5d150f:goto L5d150f;
case 0x5d1514:c.instructions+=1;goto B5d1514;
case 0x5d1519:goto L5d1519;
case 0x5d151c:c.instructions+=8;goto B5d151c;
case 0x5d1522:c.instructions+=7;goto B5d1522;
case 0x5d1525:c.instructions+=6;goto B5d1525;
case 0x5d152b:c.instructions+=5;goto B5d152b;
case 0x5d152e:c.instructions+=4;goto B5d152e;
case 0x5d1533:c.instructions+=3;goto B5d1533;
case 0x5d1538:c.instructions+=2;goto B5d1538;
case 0x5d1539:c.instructions+=1;goto B5d1539;
case 0x5d153e:goto L5d153e;
case 0x5d1543:c.instructions+=1;goto B5d1543;
case 0x5d1548:goto L5d1548;
case 0x5d154b:c.instructions+=8;goto B5d154b;
case 0x5d1551:c.instructions+=7;goto B5d1551;
case 0x5d1554:c.instructions+=6;goto B5d1554;
case 0x5d155a:c.instructions+=5;goto B5d155a;
case 0x5d155d:c.instructions+=4;goto B5d155d;
case 0x5d1562:c.instructions+=3;goto B5d1562;
case 0x5d1567:c.instructions+=2;goto B5d1567;
case 0x5d1568:c.instructions+=1;goto B5d1568;
case 0x5d156d:goto L5d156d;
case 0x5d1572:c.instructions+=1;goto B5d1572;
case 0x5d1577:goto L5d1577;
case 0x5d157a:c.instructions+=8;goto B5d157a;
case 0x5d1580:c.instructions+=7;goto B5d1580;
case 0x5d1583:c.instructions+=6;goto B5d1583;
case 0x5d1589:c.instructions+=5;goto B5d1589;
case 0x5d158c:c.instructions+=4;goto B5d158c;
case 0x5d1591:c.instructions+=3;goto B5d1591;
case 0x5d1596:c.instructions+=2;goto B5d1596;
case 0x5d1597:c.instructions+=1;goto B5d1597;
case 0x5d159c:goto L5d159c;
case 0x5d15a1:c.instructions+=1;goto B5d15a1;
case 0x5d15a6:goto L5d15a6;
case 0x5d15a9:c.instructions+=8;goto B5d15a9;
case 0x5d15af:c.instructions+=7;goto B5d15af;
case 0x5d15b2:c.instructions+=6;goto B5d15b2;
case 0x5d15b8:c.instructions+=5;goto B5d15b8;
case 0x5d15bb:c.instructions+=4;goto B5d15bb;
case 0x5d15c0:c.instructions+=3;goto B5d15c0;
case 0x5d15c5:c.instructions+=2;goto B5d15c5;
case 0x5d15c6:c.instructions+=1;goto B5d15c6;
case 0x5d15cb:goto L5d15cb;
case 0x5d15d0:c.instructions+=1;goto B5d15d0;
case 0x5d15d5:goto L5d15d5;
case 0x5d15d8:c.instructions+=9;goto B5d15d8;
case 0x5d15de:c.instructions+=8;goto B5d15de;
case 0x5d15e1:c.instructions+=7;goto B5d15e1;
case 0x5d15e7:c.instructions+=6;goto B5d15e7;
case 0x5d15ea:c.instructions+=5;goto B5d15ea;
case 0x5d15ed:c.instructions+=4;goto B5d15ed;
case 0x5d15f2:c.instructions+=3;goto B5d15f2;
case 0x5d15f7:c.instructions+=2;goto B5d15f7;
case 0x5d15f8:c.instructions+=1;goto B5d15f8;
case 0x5d15fd:goto L5d15fd;
case 0x5d1602:c.instructions+=1;goto B5d1602;
case 0x5d1607:goto L5d1607;
case 0x5d160a:c.instructions+=8;goto B5d160a;
case 0x5d1610:c.instructions+=7;goto B5d1610;
case 0x5d1613:c.instructions+=6;goto B5d1613;
case 0x5d1619:c.instructions+=5;goto B5d1619;
case 0x5d161c:c.instructions+=4;goto B5d161c;
case 0x5d1621:c.instructions+=3;goto B5d1621;
case 0x5d1626:c.instructions+=2;goto B5d1626;
case 0x5d1627:c.instructions+=1;goto B5d1627;
case 0x5d162c:goto L5d162c;
case 0x5d1631:c.instructions+=1;goto B5d1631;
case 0x5d1636:goto L5d1636;
case 0x5d1639:c.instructions+=8;goto B5d1639;
case 0x5d163f:c.instructions+=7;goto B5d163f;
case 0x5d1642:c.instructions+=6;goto B5d1642;
case 0x5d1648:c.instructions+=5;goto B5d1648;
case 0x5d164b:c.instructions+=4;goto B5d164b;
case 0x5d1650:c.instructions+=3;goto B5d1650;
case 0x5d1655:c.instructions+=2;goto B5d1655;
case 0x5d1656:c.instructions+=1;goto B5d1656;
case 0x5d165b:goto L5d165b;
case 0x5d1660:c.instructions+=1;goto B5d1660;
case 0x5d1665:goto L5d1665;
case 0x5d1668:c.instructions+=8;goto B5d1668;
case 0x5d166e:c.instructions+=7;goto B5d166e;
case 0x5d1671:c.instructions+=6;goto B5d1671;
case 0x5d1677:c.instructions+=5;goto B5d1677;
case 0x5d167a:c.instructions+=4;goto B5d167a;
case 0x5d167f:c.instructions+=3;goto B5d167f;
case 0x5d1684:c.instructions+=2;goto B5d1684;
case 0x5d1685:c.instructions+=1;goto B5d1685;
case 0x5d168a:goto L5d168a;
case 0x5d168f:c.instructions+=1;goto B5d168f;
case 0x5d1694:goto L5d1694;
case 0x5d1697:c.instructions+=8;goto B5d1697;
case 0x5d169d:c.instructions+=7;goto B5d169d;
case 0x5d16a0:c.instructions+=6;goto B5d16a0;
case 0x5d16a6:c.instructions+=5;goto B5d16a6;
case 0x5d16a9:c.instructions+=4;goto B5d16a9;
case 0x5d16ae:c.instructions+=3;goto B5d16ae;
case 0x5d16b3:c.instructions+=2;goto B5d16b3;
case 0x5d16b4:c.instructions+=1;goto B5d16b4;
case 0x5d16b9:goto L5d16b9;
case 0x5d16be:c.instructions+=1;goto B5d16be;
case 0x5d16c3:goto L5d16c3;
case 0x5d16c6:c.instructions+=8;goto B5d16c6;
case 0x5d16cc:c.instructions+=7;goto B5d16cc;
case 0x5d16cf:c.instructions+=6;goto B5d16cf;
case 0x5d16d5:c.instructions+=5;goto B5d16d5;
case 0x5d16d8:c.instructions+=4;goto B5d16d8;
case 0x5d16dd:c.instructions+=3;goto B5d16dd;
case 0x5d16e2:c.instructions+=2;goto B5d16e2;
case 0x5d16e3:c.instructions+=1;goto B5d16e3;
case 0x5d16e8:goto L5d16e8;
case 0x5d16eb:c.instructions+=2;goto B5d16eb;
case 0x5d16f0:c.instructions+=1;goto B5d16f0;
case 0x5d16f5:goto L5d16f5;
case 0x5d16f8:c.instructions+=8;goto B5d16f8;
case 0x5d16fe:c.instructions+=7;goto B5d16fe;
case 0x5d1701:c.instructions+=6;goto B5d1701;
case 0x5d1707:c.instructions+=5;goto B5d1707;
case 0x5d170a:c.instructions+=4;goto B5d170a;
case 0x5d170f:c.instructions+=3;goto B5d170f;
case 0x5d1714:c.instructions+=2;goto B5d1714;
case 0x5d1715:c.instructions+=1;goto B5d1715;
case 0x5d171a:goto L5d171a;
case 0x5d171f:c.instructions+=1;goto B5d171f;
case 0x5d1724:goto L5d1724;
case 0x5d1727:c.instructions+=8;goto B5d1727;
case 0x5d172d:c.instructions+=7;goto B5d172d;
case 0x5d1730:c.instructions+=6;goto B5d1730;
case 0x5d1736:c.instructions+=5;goto B5d1736;
case 0x5d1739:c.instructions+=4;goto B5d1739;
case 0x5d173e:c.instructions+=3;goto B5d173e;
case 0x5d1743:c.instructions+=2;goto B5d1743;
case 0x5d1744:c.instructions+=1;goto B5d1744;
case 0x5d1749:goto L5d1749;
case 0x5d174e:c.instructions+=1;goto B5d174e;
case 0x5d1753:goto L5d1753;
case 0x5d1756:c.instructions+=8;goto B5d1756;
case 0x5d175c:c.instructions+=7;goto B5d175c;
case 0x5d175f:c.instructions+=6;goto B5d175f;
case 0x5d1765:c.instructions+=5;goto B5d1765;
case 0x5d1768:c.instructions+=4;goto B5d1768;
case 0x5d176d:c.instructions+=3;goto B5d176d;
case 0x5d1772:c.instructions+=2;goto B5d1772;
case 0x5d1773:c.instructions+=1;goto B5d1773;
case 0x5d1778:goto L5d1778;
case 0x5d177d:c.instructions+=1;goto B5d177d;
case 0x5d1782:goto L5d1782;
case 0x5d1785:c.instructions+=8;goto B5d1785;
case 0x5d178b:c.instructions+=7;goto B5d178b;
case 0x5d178e:c.instructions+=6;goto B5d178e;
case 0x5d1794:c.instructions+=5;goto B5d1794;
case 0x5d1797:c.instructions+=4;goto B5d1797;
case 0x5d179c:c.instructions+=3;goto B5d179c;
case 0x5d17a1:c.instructions+=2;goto B5d17a1;
case 0x5d17a2:c.instructions+=1;goto B5d17a2;
case 0x5d17a7:goto L5d17a7;
case 0x5d17ac:c.instructions+=1;goto B5d17ac;
case 0x5d17b1:goto L5d17b1;
case 0x5d17b4:c.instructions+=8;goto B5d17b4;
case 0x5d17ba:c.instructions+=7;goto B5d17ba;
case 0x5d17bd:c.instructions+=6;goto B5d17bd;
case 0x5d17c3:c.instructions+=5;goto B5d17c3;
case 0x5d17c6:c.instructions+=4;goto B5d17c6;
case 0x5d17cb:c.instructions+=3;goto B5d17cb;
case 0x5d17d0:c.instructions+=2;goto B5d17d0;
case 0x5d17d1:c.instructions+=1;goto B5d17d1;
case 0x5d17d6:goto L5d17d6;
case 0x5d17db:c.instructions+=1;goto B5d17db;
case 0x5d17e0:goto L5d17e0;
case 0x5d17e3:c.instructions+=9;goto B5d17e3;
case 0x5d17e9:c.instructions+=8;goto B5d17e9;
case 0x5d17ec:c.instructions+=7;goto B5d17ec;
case 0x5d17f2:c.instructions+=6;goto B5d17f2;
case 0x5d17f5:c.instructions+=5;goto B5d17f5;
case 0x5d17f8:c.instructions+=4;goto B5d17f8;
case 0x5d17fd:c.instructions+=3;goto B5d17fd;
case 0x5d1802:c.instructions+=2;goto B5d1802;
case 0x5d1803:c.instructions+=1;goto B5d1803;
case 0x5d1808:goto L5d1808;
case 0x5d180d:c.instructions+=1;goto B5d180d;
case 0x5d1812:goto L5d1812;
case 0x5d1815:c.instructions+=8;goto B5d1815;
case 0x5d181b:c.instructions+=7;goto B5d181b;
case 0x5d181e:c.instructions+=6;goto B5d181e;
case 0x5d1824:c.instructions+=5;goto B5d1824;
case 0x5d1827:c.instructions+=4;goto B5d1827;
case 0x5d182c:c.instructions+=3;goto B5d182c;
case 0x5d1831:c.instructions+=2;goto B5d1831;
case 0x5d1832:c.instructions+=1;goto B5d1832;
case 0x5d1837:goto L5d1837;
case 0x5d183c:c.instructions+=1;goto B5d183c;
case 0x5d1841:goto L5d1841;
case 0x5d1844:c.instructions+=8;goto B5d1844;
case 0x5d184a:c.instructions+=7;goto B5d184a;
case 0x5d184d:c.instructions+=6;goto B5d184d;
case 0x5d1853:c.instructions+=5;goto B5d1853;
case 0x5d1856:c.instructions+=4;goto B5d1856;
case 0x5d185b:c.instructions+=3;goto B5d185b;
case 0x5d1860:c.instructions+=2;goto B5d1860;
case 0x5d1861:c.instructions+=1;goto B5d1861;
case 0x5d1866:goto L5d1866;
case 0x5d186b:c.instructions+=1;goto B5d186b;
case 0x5d1870:goto L5d1870;
case 0x5d1873:c.instructions+=8;goto B5d1873;
case 0x5d1879:c.instructions+=7;goto B5d1879;
case 0x5d187c:c.instructions+=6;goto B5d187c;
case 0x5d1882:c.instructions+=5;goto B5d1882;
case 0x5d1885:c.instructions+=4;goto B5d1885;
case 0x5d188a:c.instructions+=3;goto B5d188a;
case 0x5d188f:c.instructions+=2;goto B5d188f;
case 0x5d1890:c.instructions+=1;goto B5d1890;
case 0x5d1895:goto L5d1895;
case 0x5d189a:c.instructions+=1;goto B5d189a;
case 0x5d189f:goto L5d189f;
case 0x5d18a2:c.instructions+=8;goto B5d18a2;
case 0x5d18a8:c.instructions+=7;goto B5d18a8;
case 0x5d18ab:c.instructions+=6;goto B5d18ab;
case 0x5d18b1:c.instructions+=5;goto B5d18b1;
case 0x5d18b4:c.instructions+=4;goto B5d18b4;
case 0x5d18b9:c.instructions+=3;goto B5d18b9;
case 0x5d18be:c.instructions+=2;goto B5d18be;
case 0x5d18bf:c.instructions+=1;goto B5d18bf;
case 0x5d18c4:goto L5d18c4;
case 0x5d18c9:c.instructions+=1;goto B5d18c9;
case 0x5d18ce:goto L5d18ce;
case 0x5d18d1:c.instructions+=8;goto B5d18d1;
case 0x5d18d7:c.instructions+=7;goto B5d18d7;
case 0x5d18da:c.instructions+=6;goto B5d18da;
case 0x5d18e0:c.instructions+=5;goto B5d18e0;
case 0x5d18e3:c.instructions+=4;goto B5d18e3;
case 0x5d18e8:c.instructions+=3;goto B5d18e8;
case 0x5d18ed:c.instructions+=2;goto B5d18ed;
case 0x5d18ee:c.instructions+=1;goto B5d18ee;
case 0x5d18f3:goto L5d18f3;
case 0x5d18f6:c.instructions+=2;goto B5d18f6;
case 0x5d18fb:c.instructions+=1;goto B5d18fb;
case 0x5d1900:goto L5d1900;
case 0x5d1903:c.instructions+=8;goto B5d1903;
case 0x5d1909:c.instructions+=7;goto B5d1909;
case 0x5d190c:c.instructions+=6;goto B5d190c;
case 0x5d1912:c.instructions+=5;goto B5d1912;
case 0x5d1915:c.instructions+=4;goto B5d1915;
case 0x5d191a:c.instructions+=3;goto B5d191a;
case 0x5d191f:c.instructions+=2;goto B5d191f;
case 0x5d1920:c.instructions+=1;goto B5d1920;
case 0x5d1925:goto L5d1925;
case 0x5d192a:c.instructions+=1;goto B5d192a;
case 0x5d192f:goto L5d192f;
case 0x5d1932:c.instructions+=8;goto B5d1932;
case 0x5d1938:c.instructions+=7;goto B5d1938;
case 0x5d193b:c.instructions+=6;goto B5d193b;
case 0x5d1941:c.instructions+=5;goto B5d1941;
case 0x5d1944:c.instructions+=4;goto B5d1944;
case 0x5d1949:c.instructions+=3;goto B5d1949;
case 0x5d194e:c.instructions+=2;goto B5d194e;
case 0x5d194f:c.instructions+=1;goto B5d194f;
case 0x5d1954:goto L5d1954;
case 0x5d1959:c.instructions+=1;goto B5d1959;
case 0x5d195e:goto L5d195e;
case 0x5d1961:c.instructions+=8;goto B5d1961;
case 0x5d1967:c.instructions+=7;goto B5d1967;
case 0x5d196a:c.instructions+=6;goto B5d196a;
case 0x5d1970:c.instructions+=5;goto B5d1970;
case 0x5d1973:c.instructions+=4;goto B5d1973;
case 0x5d1978:c.instructions+=3;goto B5d1978;
case 0x5d197d:c.instructions+=2;goto B5d197d;
case 0x5d197e:c.instructions+=1;goto B5d197e;
case 0x5d1983:goto L5d1983;
case 0x5d1988:c.instructions+=1;goto B5d1988;
case 0x5d198d:goto L5d198d;
case 0x5d1990:c.instructions+=8;goto B5d1990;
case 0x5d1996:c.instructions+=7;goto B5d1996;
case 0x5d1999:c.instructions+=6;goto B5d1999;
case 0x5d199f:c.instructions+=5;goto B5d199f;
case 0x5d19a2:c.instructions+=4;goto B5d19a2;
case 0x5d19a7:c.instructions+=3;goto B5d19a7;
case 0x5d19ac:c.instructions+=2;goto B5d19ac;
case 0x5d19ad:c.instructions+=1;goto B5d19ad;
case 0x5d19b2:goto L5d19b2;
case 0x5d19b7:c.instructions+=1;goto B5d19b7;
case 0x5d19bc:goto L5d19bc;
case 0x5d19bf:c.instructions+=8;goto B5d19bf;
case 0x5d19c5:c.instructions+=7;goto B5d19c5;
case 0x5d19c8:c.instructions+=6;goto B5d19c8;
case 0x5d19ce:c.instructions+=5;goto B5d19ce;
case 0x5d19d1:c.instructions+=4;goto B5d19d1;
case 0x5d19d6:c.instructions+=3;goto B5d19d6;
case 0x5d19db:c.instructions+=2;goto B5d19db;
case 0x5d19dc:c.instructions+=1;goto B5d19dc;
case 0x5d19e1:goto L5d19e1;
case 0x5d19e6:c.instructions+=1;goto B5d19e6;
case 0x5d19eb:goto L5d19eb;
case 0x5d19ee:c.instructions+=9;goto B5d19ee;
case 0x5d19f4:c.instructions+=8;goto B5d19f4;
case 0x5d19f7:c.instructions+=7;goto B5d19f7;
case 0x5d19fd:c.instructions+=6;goto B5d19fd;
case 0x5d1a00:c.instructions+=5;goto B5d1a00;
case 0x5d1a03:c.instructions+=4;goto B5d1a03;
case 0x5d1a08:c.instructions+=3;goto B5d1a08;
case 0x5d1a0d:c.instructions+=2;goto B5d1a0d;
case 0x5d1a0e:c.instructions+=1;goto B5d1a0e;
case 0x5d1a13:goto L5d1a13;
case 0x5d1a18:c.instructions+=1;goto B5d1a18;
case 0x5d1a1d:goto L5d1a1d;
case 0x5d1a20:c.instructions+=8;goto B5d1a20;
case 0x5d1a26:c.instructions+=7;goto B5d1a26;
case 0x5d1a29:c.instructions+=6;goto B5d1a29;
case 0x5d1a2f:c.instructions+=5;goto B5d1a2f;
case 0x5d1a32:c.instructions+=4;goto B5d1a32;
case 0x5d1a37:c.instructions+=3;goto B5d1a37;
case 0x5d1a3c:c.instructions+=2;goto B5d1a3c;
case 0x5d1a3d:c.instructions+=1;goto B5d1a3d;
case 0x5d1a42:goto L5d1a42;
case 0x5d1a47:c.instructions+=1;goto B5d1a47;
case 0x5d1a4c:goto L5d1a4c;
case 0x5d1a4f:c.instructions+=8;goto B5d1a4f;
case 0x5d1a55:c.instructions+=7;goto B5d1a55;
case 0x5d1a58:c.instructions+=6;goto B5d1a58;
case 0x5d1a5e:c.instructions+=5;goto B5d1a5e;
case 0x5d1a61:c.instructions+=4;goto B5d1a61;
case 0x5d1a66:c.instructions+=3;goto B5d1a66;
case 0x5d1a6b:c.instructions+=2;goto B5d1a6b;
case 0x5d1a6c:c.instructions+=1;goto B5d1a6c;
case 0x5d1a71:goto L5d1a71;
case 0x5d1a76:c.instructions+=1;goto B5d1a76;
case 0x5d1a7b:goto L5d1a7b;
case 0x5d1a7e:c.instructions+=8;goto B5d1a7e;
case 0x5d1a84:c.instructions+=7;goto B5d1a84;
case 0x5d1a87:c.instructions+=6;goto B5d1a87;
case 0x5d1a8d:c.instructions+=5;goto B5d1a8d;
case 0x5d1a90:c.instructions+=4;goto B5d1a90;
case 0x5d1a95:c.instructions+=3;goto B5d1a95;
case 0x5d1a9a:c.instructions+=2;goto B5d1a9a;
case 0x5d1a9b:c.instructions+=1;goto B5d1a9b;
case 0x5d1aa0:goto L5d1aa0;
case 0x5d1aa5:c.instructions+=1;goto B5d1aa5;
case 0x5d1aaa:goto L5d1aaa;
case 0x5d1aad:c.instructions+=8;goto B5d1aad;
case 0x5d1ab3:c.instructions+=7;goto B5d1ab3;
case 0x5d1ab6:c.instructions+=6;goto B5d1ab6;
case 0x5d1abc:c.instructions+=5;goto B5d1abc;
case 0x5d1abf:c.instructions+=4;goto B5d1abf;
case 0x5d1ac4:c.instructions+=3;goto B5d1ac4;
case 0x5d1ac9:c.instructions+=2;goto B5d1ac9;
case 0x5d1aca:c.instructions+=1;goto B5d1aca;
case 0x5d1acf:goto L5d1acf;
case 0x5d1ad4:c.instructions+=1;goto B5d1ad4;
case 0x5d1ad9:goto L5d1ad9;
case 0x5d1adc:c.instructions+=13;goto B5d1adc;
case 0x5d1ae2:c.instructions+=12;goto B5d1ae2;
case 0x5d1ae5:c.instructions+=11;goto B5d1ae5;
case 0x5d1ae9:c.instructions+=10;goto B5d1ae9;
case 0x5d1aec:c.instructions+=9;goto B5d1aec;
case 0x5d1af2:c.instructions+=8;goto B5d1af2;
case 0x5d1af5:c.instructions+=7;goto B5d1af5;
case 0x5d1af6:c.instructions+=6;goto B5d1af6;
case 0x5d1af8:c.instructions+=5;goto B5d1af8;
case 0x5d1af9:c.instructions+=4;goto B5d1af9;
case 0x5d1afa:c.instructions+=3;goto B5d1afa;
case 0x5d1b01:c.instructions+=2;goto B5d1b01;
case 0x5d1b04:c.instructions+=1;goto B5d1b04;
case 0x5d1b10:goto L5d1b10;
case 0x5d1b11:c.instructions+=2;goto B5d1b11;
case 0x5d1b13:c.instructions+=1;goto B5d1b13;
case 0x5d1b18:goto L5d1b18;
case 0x5d1b1d:c.instructions+=1;goto B5d1b1d;
case 0x5d1b1f:goto L5d1b1f;
case 0x5d1b20:c.instructions+=1;goto B5d1b20;
case 0x5d1b25:goto L5d1b25;
case 0x5d1b28:goto L5d1b28;
case 0x5d1b2a:c.instructions+=2;goto B5d1b2a;
case 0x5d1b2b:c.instructions+=1;goto B5d1b2b;
case 0x5d1b30:goto L5d1b30;
case 0x5d1b31:c.instructions+=6;goto B5d1b31;
case 0x5d1b33:c.instructions+=5;goto B5d1b33;
case 0x5d1b34:c.instructions+=4;goto B5d1b34;
case 0x5d1b37:c.instructions+=3;goto B5d1b37;
case 0x5d1b39:c.instructions+=2;goto B5d1b39;
case 0x5d1b3f:c.instructions+=1;goto B5d1b3f;
case 0x5d1b41:goto L5d1b41;
case 0x5d1b47:c.instructions+=1;goto B5d1b47;
case 0x5d1b4c:goto L5d1b4c;
case 0x5d1b4d:c.instructions+=1;goto B5d1b4d;
case 0x5d1b52:goto L5d1b52;
case 0x5d1b55:goto L5d1b55;
case 0x5d1b58:c.instructions+=2;goto B5d1b58;
case 0x5d1b5a:c.instructions+=1;goto B5d1b5a;
case 0x5d1b5c:goto L5d1b5c;
case 0x5d1b5e:c.instructions+=2;goto B5d1b5e;
case 0x5d1b5f:c.instructions+=1;goto B5d1b5f;
case 0x5d1b62:goto L5d1b62;
case 0x5d1b69:goto L5d1b69;
case 0x5d1b6a:c.instructions+=2;goto B5d1b6a;
case 0x5d1b6b:c.instructions+=1;goto B5d1b6b;
case 0x5d1b70:goto L5d1b70;
case 0x5d1b73:c.instructions+=6;goto B5d1b73;
case 0x5d1b74:c.instructions+=5;goto B5d1b74;
case 0x5d1b75:c.instructions+=4;goto B5d1b75;
case 0x5d1b79:c.instructions+=3;goto B5d1b79;
case 0x5d1b7b:c.instructions+=2;goto B5d1b7b;
case 0x5d1b7e:c.instructions+=1;goto B5d1b7e;
case 0x5d1b80:goto L5d1b80;
case 0x5d1b82:c.instructions+=1;goto B5d1b82;
case 0x5d1b84:goto L5d1b84;
case 0x5d1b85:c.instructions+=3;goto B5d1b85;
case 0x5d1b88:c.instructions+=2;goto B5d1b88;
case 0x5d1b8b:c.instructions+=1;goto B5d1b8b;
case 0x5d1b8d:goto L5d1b8d;
case 0x5d1b8e:c.instructions+=3;goto B5d1b8e;
case 0x5d1b8f:c.instructions+=2;goto B5d1b8f;
case 0x5d1b92:c.instructions+=1;goto B5d1b92;
case 0x5d1b95:goto L5d1b95;
case 0x5d1b99:c.instructions+=10;goto B5d1b99;
case 0x5d1b9c:c.instructions+=9;goto B5d1b9c;
case 0x5d1ba0:c.instructions+=8;goto B5d1ba0;
case 0x5d1ba4:c.instructions+=7;goto B5d1ba4;
case 0x5d1ba5:c.instructions+=6;goto B5d1ba5;
case 0x5d1ba9:c.instructions+=5;goto B5d1ba9;
case 0x5d1baa:c.instructions+=4;goto B5d1baa;
case 0x5d1bb0:c.instructions+=3;goto B5d1bb0;
case 0x5d1bb4:c.instructions+=2;goto B5d1bb4;
case 0x5d1bbc:c.instructions+=1;goto B5d1bbc;
case 0x5d1bc1:goto L5d1bc1;
case 0x5d1bc3:c.instructions+=5;goto B5d1bc3;
case 0x5d1bc4:c.instructions+=4;goto B5d1bc4;
case 0x5d1bc7:c.instructions+=3;goto B5d1bc7;
case 0x5d1bc8:c.instructions+=2;goto B5d1bc8;
case 0x5d1bcb:c.instructions+=1;goto B5d1bcb;
case 0x5d1bd0:goto L5d1bd0;
case 0x5d1bd3:c.instructions+=9;goto B5d1bd3;
case 0x5d1bd4:c.instructions+=8;goto B5d1bd4;
case 0x5d1bd5:c.instructions+=7;goto B5d1bd5;
case 0x5d1bd7:c.instructions+=6;goto B5d1bd7;
case 0x5d1bda:c.instructions+=5;goto B5d1bda;
case 0x5d1bdc:c.instructions+=4;goto B5d1bdc;
case 0x5d1be0:c.instructions+=3;goto B5d1be0;
case 0x5d1be1:c.instructions+=2;goto B5d1be1;
case 0x5d1be2:c.instructions+=1;goto B5d1be2;
case 0x5d1be5:goto L5d1be5;
case 0x5d1be9:c.instructions+=3;goto B5d1be9;
case 0x5d1beb:c.instructions+=2;goto B5d1beb;
case 0x5d1bed:c.instructions+=1;goto B5d1bed;
case 0x5d1bef:goto L5d1bef;
case 0x5d1bf0:goto L5d1bf0;
case 0x5d1bf3:c.instructions+=5;goto B5d1bf3;
case 0x5d1bf5:c.instructions+=4;goto B5d1bf5;
case 0x5d1bf6:c.instructions+=3;goto B5d1bf6;
case 0x5d1bf8:c.instructions+=2;goto B5d1bf8;
case 0x5d1bf9:c.instructions+=1;goto B5d1bf9;
case 0x5d1bfc:goto L5d1bfc;
case 0x5d1c00:c.instructions+=7;goto B5d1c00;
case 0x5d1c02:c.instructions+=6;goto B5d1c02;
case 0x5d1c05:c.instructions+=5;goto B5d1c05;
case 0x5d1c07:c.instructions+=4;goto B5d1c07;
case 0x5d1c08:c.instructions+=3;goto B5d1c08;
case 0x5d1c09:c.instructions+=2;goto B5d1c09;
case 0x5d1c0a:c.instructions+=1;goto B5d1c0a;
case 0x5d1c0d:goto L5d1c0d;
case 0x5d1c11:c.instructions+=2;goto B5d1c11;
case 0x5d1c13:c.instructions+=1;goto B5d1c13;
case 0x5d1c15:goto L5d1c15;
case 0x5d1c16:c.instructions+=2;goto B5d1c16;
case 0x5d1c17:c.instructions+=1;goto B5d1c17;
case 0x5d1c1c:goto L5d1c1c;
case 0x5d1c1f:c.instructions+=3;goto B5d1c1f;
case 0x5d1c22:c.instructions+=2;goto B5d1c22;
case 0x5d1c23:c.instructions+=1;goto B5d1c23;
case 0x5d1c28:goto L5d1c28;
case 0x5d1c2c:c.instructions+=3;goto B5d1c2c;
case 0x5d1c2d:c.instructions+=2;goto B5d1c2d;
case 0x5d1c2f:c.instructions+=1;goto B5d1c2f;
case 0x5d1c31:goto L5d1c31;
case 0x5d1c32:goto L5d1c32;
case 0x5d1c33:c.instructions+=3;goto B5d1c33;
case 0x5d1c34:c.instructions+=2;goto B5d1c34;
case 0x5d1c37:c.instructions+=1;goto B5d1c37;
case 0x5d1c40:goto L5d1c40;
case 0x5d1c43:c.instructions+=3;goto B5d1c43;
case 0x5d1c44:c.instructions+=2;goto B5d1c44;
case 0x5d1c45:c.instructions+=1;goto B5d1c45;
case 0x5d1c4a:goto L5d1c4a;
case 0x5d1c4f:c.instructions+=1;goto B5d1c4f;
case 0x5d1c50:goto L5d1c50;
case 0x5d1c52:c.instructions+=4;goto B5d1c52;
case 0x5d1c55:c.instructions+=3;goto B5d1c55;
case 0x5d1c57:c.instructions+=2;goto B5d1c57;
case 0x5d1c58:c.instructions+=1;goto B5d1c58;
case 0x5d1c5e:goto L5d1c5e;
case 0x5d1c61:c.instructions+=2;goto B5d1c61;
case 0x5d1c67:c.instructions+=1;goto B5d1c67;
case 0x5d1c69:goto L5d1c69;
case 0x5d1c6e:goto L5d1c6e;
case 0x5d1c73:goto L5d1c73;
case 0x5d1c78:c.instructions+=2;goto B5d1c78;
case 0x5d1c7a:c.instructions+=1;goto B5d1c7a;
case 0x5d1c7c:goto L5d1c7c;
case 0x5d1c81:c.instructions+=2;goto B5d1c81;
case 0x5d1c83:c.instructions+=1;goto B5d1c83;
case 0x5d1c85:goto L5d1c85;
case 0x5d1c87:c.instructions+=2;goto B5d1c87;
case 0x5d1c88:c.instructions+=1;goto B5d1c88;
case 0x5d1c8b:goto L5d1c8b;
case 0x5d1c92:goto L5d1c92;
case 0x5d1c97:c.instructions+=1;goto B5d1c97;
case 0x5d1c9c:goto L5d1c9c;
case 0x5d1ca1:c.instructions+=2;goto B5d1ca1;
case 0x5d1ca3:c.instructions+=1;goto B5d1ca3;
case 0x5d1ca5:goto L5d1ca5;
case 0x5d1ca7:c.instructions+=2;goto B5d1ca7;
case 0x5d1ca8:c.instructions+=1;goto B5d1ca8;
case 0x5d1cab:goto L5d1cab;
case 0x5d1cb0:c.instructions+=4;goto B5d1cb0;
case 0x5d1cb2:c.instructions+=3;goto B5d1cb2;
case 0x5d1cb7:c.instructions+=2;goto B5d1cb7;
case 0x5d1cb8:c.instructions+=1;goto B5d1cb8;
case 0x5d1cbb:goto L5d1cbb;
case 0x5d1cc0:c.instructions+=4;goto B5d1cc0;
case 0x5d1cc2:c.instructions+=3;goto B5d1cc2;
case 0x5d1cc7:c.instructions+=2;goto B5d1cc7;
case 0x5d1cc8:c.instructions+=1;goto B5d1cc8;
case 0x5d1ccb:goto L5d1ccb;
case 0x5d1ccd:c.instructions+=2;goto B5d1ccd;
case 0x5d1ccf:c.instructions+=1;goto B5d1ccf;
case 0x5d1cd5:goto L5d1cd5;
case 0x5d1cda:c.instructions+=2;goto B5d1cda;
case 0x5d1cdc:c.instructions+=1;goto B5d1cdc;
case 0x5d1cde:goto L5d1cde;
case 0x5d1ce8:goto L5d1ce8;
case 0x5d1cec:c.instructions+=5;goto B5d1cec;
case 0x5d1ced:c.instructions+=4;goto B5d1ced;
case 0x5d1cf1:c.instructions+=3;goto B5d1cf1;
case 0x5d1cf2:c.instructions+=2;goto B5d1cf2;
case 0x5d1cf7:c.instructions+=1;goto B5d1cf7;
case 0x5d1cfc:goto L5d1cfc;
case 0x5d1d00:c.instructions+=4;goto B5d1d00;
case 0x5d1d04:c.instructions+=3;goto B5d1d04;
case 0x5d1d05:c.instructions+=2;goto B5d1d05;
case 0x5d1d06:c.instructions+=1;goto B5d1d06;
case 0x5d1d0b:goto L5d1d0b;
case 0x5d1d0e:c.instructions+=1;goto B5d1d0e;
case 0x5d1d10:goto L5d1d10;
case 0x5d1d15:c.instructions+=4;goto B5d1d15;
case 0x5d1d17:c.instructions+=3;goto B5d1d17;
case 0x5d1d1c:c.instructions+=2;goto B5d1d1c;
case 0x5d1d1d:c.instructions+=1;goto B5d1d1d;
case 0x5d1d20:goto L5d1d20;
case 0x5d1d22:c.instructions+=2;goto B5d1d22;
case 0x5d1d24:c.instructions+=1;goto B5d1d24;
case 0x5d1d26:goto L5d1d26;
case 0x5d1d27:c.instructions+=2;goto B5d1d27;
case 0x5d1d2a:c.instructions+=1;goto B5d1d2a;
case 0x5d1d2c:goto L5d1d2c;
case 0x5d1d31:c.instructions+=2;goto B5d1d31;
case 0x5d1d33:c.instructions+=1;goto B5d1d33;
case 0x5d1d39:goto L5d1d39;
case 0x5d1d40:goto L5d1d40;
case 0x5d1d45:c.instructions+=8;goto B5d1d45;
case 0x5d1d46:c.instructions+=7;goto B5d1d46;
case 0x5d1d4a:c.instructions+=6;goto B5d1d4a;
case 0x5d1d4f:c.instructions+=5;goto B5d1d4f;
case 0x5d1d50:c.instructions+=4;goto B5d1d50;
case 0x5d1d54:c.instructions+=3;goto B5d1d54;
case 0x5d1d55:c.instructions+=2;goto B5d1d55;
case 0x5d1d5a:c.instructions+=1;goto B5d1d5a;
case 0x5d1d5f:goto L5d1d5f;
case 0x5d1d63:c.instructions+=4;goto B5d1d63;
case 0x5d1d67:c.instructions+=3;goto B5d1d67;
case 0x5d1d68:c.instructions+=2;goto B5d1d68;
case 0x5d1d69:c.instructions+=1;goto B5d1d69;
case 0x5d1d6e:goto L5d1d6e;
case 0x5d1d73:c.instructions+=5;goto B5d1d73;
case 0x5d1d75:c.instructions+=4;goto B5d1d75;
case 0x5d1d78:c.instructions+=3;goto B5d1d78;
case 0x5d1d7d:c.instructions+=2;goto B5d1d7d;
case 0x5d1d7e:c.instructions+=1;goto B5d1d7e;
case 0x5d1d81:goto L5d1d81;
case 0x5d1d83:c.instructions+=2;goto B5d1d83;
case 0x5d1d85:c.instructions+=1;goto B5d1d85;
case 0x5d1d87:goto L5d1d87;
case 0x5d1d8c:c.instructions+=2;goto B5d1d8c;
case 0x5d1d8e:c.instructions+=1;goto B5d1d8e;
case 0x5d1d90:goto L5d1d90;
case 0x5d1d91:c.instructions+=4;goto B5d1d91;
case 0x5d1d93:c.instructions+=3;goto B5d1d93;
case 0x5d1d94:c.instructions+=2;goto B5d1d94;
case 0x5d1d97:c.instructions+=1;goto B5d1d97;
case 0x5d1d98:goto L5d1d98;
case 0x5d1d9d:c.instructions+=2;goto B5d1d9d;
case 0x5d1da2:c.instructions+=1;goto B5d1da2;
case 0x5d1da7:goto L5d1da7;
case 0x5d1daa:c.instructions+=2;goto B5d1daa;
case 0x5d1dac:c.instructions+=1;goto B5d1dac;
case 0x5d1dae:goto L5d1dae;
case 0x5d1db0:c.instructions+=1;goto B5d1db0;
case 0x5d1db5:goto L5d1db5;
case 0x5d1dba:goto L5d1dba;
case 0x5d1dbf:goto L5d1dbf;
case 0x5d1dc3:c.instructions+=7;goto B5d1dc3;
case 0x5d1dc4:c.instructions+=6;goto B5d1dc4;
case 0x5d1dc8:c.instructions+=5;goto B5d1dc8;
case 0x5d1dc9:c.instructions+=4;goto B5d1dc9;
case 0x5d1dce:c.instructions+=3;goto B5d1dce;
case 0x5d1dd6:c.instructions+=2;goto B5d1dd6;
case 0x5d1dde:c.instructions+=1;goto B5d1dde;
case 0x5d1de3:goto L5d1de3;
case 0x5d1de8:goto L5d1de8;
case 0x5d1ded:c.instructions+=1;goto B5d1ded;
case 0x5d1df0:goto L5d1df0;
case 0x5d1df2:c.instructions+=4;goto B5d1df2;
case 0x5d1df5:c.instructions+=3;goto B5d1df5;
case 0x5d1df7:c.instructions+=2;goto B5d1df7;
case 0x5d1df8:c.instructions+=1;goto B5d1df8;
case 0x5d1dfe:goto L5d1dfe;
case 0x5d1e00:c.instructions+=1;goto B5d1e00;
case 0x5d1e05:goto L5d1e05;
case 0x5d1e08:c.instructions+=2;goto B5d1e08;
case 0x5d1e0e:c.instructions+=1;goto B5d1e0e;
case 0x5d1e10:goto L5d1e10;
case 0x5d1e11:c.instructions+=4;goto B5d1e11;
case 0x5d1e13:c.instructions+=3;goto B5d1e13;
case 0x5d1e14:c.instructions+=2;goto B5d1e14;
case 0x5d1e17:c.instructions+=1;goto B5d1e17;
case 0x5d1e20:goto L5d1e20;
case 0x5d1e26:c.instructions+=10;goto B5d1e26;
case 0x5d1e27:c.instructions+=9;goto B5d1e27;
case 0x5d1e28:c.instructions+=8;goto B5d1e28;
case 0x5d1e29:c.instructions+=7;goto B5d1e29;
case 0x5d1e2b:c.instructions+=6;goto B5d1e2b;
case 0x5d1e2e:c.instructions+=5;goto B5d1e2e;
case 0x5d1e30:c.instructions+=4;goto B5d1e30;
case 0x5d1e32:c.instructions+=3;goto B5d1e32;
case 0x5d1e33:c.instructions+=2;goto B5d1e33;
case 0x5d1e37:c.instructions+=1;goto B5d1e37;
case 0x5d1e39:goto L5d1e39;
case 0x5d1e3b:c.instructions+=2;goto B5d1e3b;
case 0x5d1e3c:c.instructions+=1;goto B5d1e3c;
case 0x5d1e3f:goto L5d1e3f;
case 0x5d1e42:goto L5d1e42;
case 0x5d1e48:c.instructions+=7;goto B5d1e48;
case 0x5d1e4d:c.instructions+=6;goto B5d1e4d;
case 0x5d1e54:c.instructions+=5;goto B5d1e54;
case 0x5d1e57:c.instructions+=4;goto B5d1e57;
case 0x5d1e5b:c.instructions+=3;goto B5d1e5b;
case 0x5d1e5f:c.instructions+=2;goto B5d1e5f;
case 0x5d1e62:c.instructions+=1;goto B5d1e62;
case 0x5d1e67:goto L5d1e67;
case 0x5d1e6d:c.instructions+=6;goto B5d1e6d;
case 0x5d1e73:c.instructions+=5;goto B5d1e73;
case 0x5d1e75:c.instructions+=4;goto B5d1e75;
case 0x5d1e77:c.instructions+=3;goto B5d1e77;
case 0x5d1e79:c.instructions+=2;goto B5d1e79;
case 0x5d1e7c:c.instructions+=1;goto B5d1e7c;
case 0x5d1e82:goto L5d1e82;
case 0x5d1e84:c.instructions+=8;goto B5d1e84;
case 0x5d1e86:c.instructions+=7;goto B5d1e86;
case 0x5d1e8a:c.instructions+=6;goto B5d1e8a;
case 0x5d1e8c:c.instructions+=5;goto B5d1e8c;
case 0x5d1e8e:c.instructions+=4;goto B5d1e8e;
case 0x5d1e92:c.instructions+=3;goto B5d1e92;
case 0x5d1e96:c.instructions+=2;goto B5d1e96;
case 0x5d1e98:c.instructions+=1;goto B5d1e98;
case 0x5d1ea0:goto L5d1ea0;
case 0x5d1ea3:c.instructions+=19;goto B5d1ea3;
case 0x5d1eaa:c.instructions+=18;goto B5d1eaa;
case 0x5d1eae:c.instructions+=17;goto B5d1eae;
case 0x5d1eb5:c.instructions+=16;goto B5d1eb5;
case 0x5d1ebb:c.instructions+=15;goto B5d1ebb;
case 0x5d1ebf:c.instructions+=14;goto B5d1ebf;
case 0x5d1ec6:c.instructions+=13;goto B5d1ec6;
case 0x5d1ecb:c.instructions+=12;goto B5d1ecb;
case 0x5d1ecd:c.instructions+=11;goto B5d1ecd;
case 0x5d1ed1:c.instructions+=10;goto B5d1ed1;
case 0x5d1ed2:c.instructions+=9;goto B5d1ed2;
case 0x5d1ed9:c.instructions+=8;goto B5d1ed9;
case 0x5d1ede:c.instructions+=7;goto B5d1ede;
case 0x5d1ee2:c.instructions+=6;goto B5d1ee2;
case 0x5d1ee9:c.instructions+=5;goto B5d1ee9;
case 0x5d1eeb:c.instructions+=4;goto B5d1eeb;
case 0x5d1eef:c.instructions+=3;goto B5d1eef;
case 0x5d1ef2:c.instructions+=2;goto B5d1ef2;
case 0x5d1ef6:c.instructions+=1;goto B5d1ef6;
case 0x5d1ef8:goto L5d1ef8;
case 0x5d1efc:c.instructions+=1;goto B5d1efc;
case 0x5d1efe:goto L5d1efe;
case 0x5d1f03:c.instructions+=13;goto B5d1f03;
case 0x5d1f06:c.instructions+=12;goto B5d1f06;
case 0x5d1f07:c.instructions+=11;goto B5d1f07;
case 0x5d1f0b:c.instructions+=10;goto B5d1f0b;
case 0x5d1f0c:c.instructions+=9;goto B5d1f0c;
case 0x5d1f13:c.instructions+=8;goto B5d1f13;
case 0x5d1f18:c.instructions+=7;goto B5d1f18;
case 0x5d1f1d:c.instructions+=6;goto B5d1f1d;
case 0x5d1f21:c.instructions+=5;goto B5d1f21;
case 0x5d1f25:c.instructions+=4;goto B5d1f25;
case 0x5d1f29:c.instructions+=3;goto B5d1f29;
case 0x5d1f2b:c.instructions+=2;goto B5d1f2b;
case 0x5d1f2c:c.instructions+=1;goto B5d1f2c;
case 0x5d1f32:goto L5d1f32;
case 0x5d1f35:c.instructions+=15;goto B5d1f35;
case 0x5d1f3b:c.instructions+=14;goto B5d1f3b;
case 0x5d1f41:c.instructions+=13;goto B5d1f41;
case 0x5d1f45:c.instructions+=12;goto B5d1f45;
case 0x5d1f46:c.instructions+=11;goto B5d1f46;
case 0x5d1f4b:c.instructions+=10;goto B5d1f4b;
case 0x5d1f4e:c.instructions+=9;goto B5d1f4e;
case 0x5d1f4f:c.instructions+=8;goto B5d1f4f;
case 0x5d1f50:c.instructions+=7;goto B5d1f50;
case 0x5d1f51:c.instructions+=6;goto B5d1f51;
case 0x5d1f52:c.instructions+=5;goto B5d1f52;
case 0x5d1f53:c.instructions+=4;goto B5d1f53;
case 0x5d1f54:c.instructions+=3;goto B5d1f54;
case 0x5d1f55:c.instructions+=2;goto B5d1f55;
case 0x5d1f56:c.instructions+=1;goto B5d1f56;
case 0x5d1f5b:goto L5d1f5b;
case 0x5d1f5d:c.instructions+=1;goto B5d1f5d;
case 0x5d1f62:goto L5d1f62;
case 0x5d1f67:c.instructions+=5;goto B5d1f67;
case 0x5d1f69:c.instructions+=4;goto B5d1f69;
case 0x5d1f6b:c.instructions+=3;goto B5d1f6b;
case 0x5d1f6e:c.instructions+=2;goto B5d1f6e;
case 0x5d1f72:c.instructions+=1;goto B5d1f72;
case 0x5d1f78:goto L5d1f78;
case 0x5d1f7b:c.instructions+=4;goto B5d1f7b;
case 0x5d1f7d:c.instructions+=3;goto B5d1f7d;
case 0x5d1f7e:c.instructions+=2;goto B5d1f7e;
case 0x5d1f7f:c.instructions+=1;goto B5d1f7f;
case 0x5d1f82:goto L5d1f82;
case 0x5d1f84:c.instructions+=3;goto B5d1f84;
case 0x5d1f86:c.instructions+=2;goto B5d1f86;
case 0x5d1f8a:c.instructions+=1;goto B5d1f8a;
case 0x5d1f90:goto L5d1f90;
case 0x5d1f93:c.instructions+=5;goto B5d1f93;
case 0x5d1f95:c.instructions+=4;goto B5d1f95;
case 0x5d1f9a:c.instructions+=3;goto B5d1f9a;
case 0x5d1f9b:c.instructions+=2;goto B5d1f9b;
case 0x5d1f9c:c.instructions+=1;goto B5d1f9c;
case 0x5d1f9f:goto L5d1f9f;
case 0x5d1fa1:c.instructions+=2;goto B5d1fa1;
case 0x5d1fa5:c.instructions+=1;goto B5d1fa5;
case 0x5d1fa7:goto L5d1fa7;
case 0x5d1faa:c.instructions+=6;goto B5d1faa;
case 0x5d1fac:c.instructions+=5;goto B5d1fac;
case 0x5d1fb0:c.instructions+=4;goto B5d1fb0;
case 0x5d1fb1:c.instructions+=3;goto B5d1fb1;
case 0x5d1fb2:c.instructions+=2;goto B5d1fb2;
case 0x5d1fb3:c.instructions+=1;goto B5d1fb3;
case 0x5d1fb6:goto L5d1fb6;
case 0x5d1fba:goto L5d1fba;
case 0x5d1fc0:c.instructions+=1;goto B5d1fc0;
case 0x5d1fc2:goto L5d1fc2;
case 0x5d1fc7:c.instructions+=1;goto B5d1fc7;
case 0x5d1fcd:goto L5d1fcd;
case 0x5d1fd4:c.instructions+=2;goto B5d1fd4;
case 0x5d1fd7:c.instructions+=1;goto B5d1fd7;
case 0x5d1fd9:goto L5d1fd9;
case 0x5d1fdc:c.instructions+=1;goto B5d1fdc;
case 0x5d1fde:goto L5d1fde;
case 0x5d1fe2:c.instructions+=2;goto B5d1fe2;
case 0x5d1fe7:c.instructions+=1;goto B5d1fe7;
case 0x5d1fe9:goto L5d1fe9;
case 0x5d1fec:c.instructions+=1;goto B5d1fec;
case 0x5d1ff2:goto L5d1ff2;
case 0x5d1ff4:goto L5d1ff4;
case 0x5d1ff9:c.instructions+=1;goto B5d1ff9;
case 0x5d1ffb:goto L5d1ffb;
default:missing_instruction(c.pc);}
B5d1001:L5d1001:{c.instructions+=8;NFSU2_TR(0x5d1001);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1004:{NFSU2_TR(0x5d1004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1007:{NFSU2_TR(0x5d1007);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d100a:{NFSU2_TR(0x5d100a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d100d:{NFSU2_TR(0x5d100d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5d1010:{NFSU2_TR(0x5d1010);
u8 U[4];
w4(U+0,u32(0x7a4524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1015:{NFSU2_TR(0x5d1015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1016:{NFSU2_TR(0x5d1016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d101bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d101b:L5d101b:{c.instructions+=2;NFSU2_TR(0x5d101b);
u8 U[4];
w4(U+0,u32(0x7a4524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1020:{NFSU2_TR(0x5d1020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1025ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1025:L5d1025:{c.instructions+=9;NFSU2_TR(0x5d1025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1028:{NFSU2_TR(0x5d1028);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d102b:{NFSU2_TR(0x5d102b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d102e:{NFSU2_TR(0x5d102e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1031:{NFSU2_TR(0x5d1031);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1034:{NFSU2_TR(0x5d1034);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5d1037:{NFSU2_TR(0x5d1037);
u8 U[4];
w4(U+0,u32(0x7a4518ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d103c:{NFSU2_TR(0x5d103c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d103d:{NFSU2_TR(0x5d103d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1042ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1042:L5d1042:{c.instructions+=2;NFSU2_TR(0x5d1042);
u8 U[4];
w4(U+0,u32(0x7a4518ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1047:{NFSU2_TR(0x5d1047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d104cull));
TAIL_STATIC(0x43db50u,43d);
}
B5d104c:L5d104c:{c.instructions+=9;NFSU2_TR(0x5d104c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d104f:{NFSU2_TR(0x5d104f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1052:{NFSU2_TR(0x5d1052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1055:{NFSU2_TR(0x5d1055);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1058:{NFSU2_TR(0x5d1058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d105b:{NFSU2_TR(0x5d105b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
}
B5d105e:{NFSU2_TR(0x5d105e);
u8 U[4];
w4(U+0,u32(0x7a4500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1063:{NFSU2_TR(0x5d1063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1064:{NFSU2_TR(0x5d1064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1069ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1069:L5d1069:{c.instructions+=2;NFSU2_TR(0x5d1069);
u8 U[4];
w4(U+0,u32(0x7a4500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d106e:{NFSU2_TR(0x5d106e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1073ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1073:L5d1073:{c.instructions+=9;NFSU2_TR(0x5d1073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1076:{NFSU2_TR(0x5d1076);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d107c:{NFSU2_TR(0x5d107c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d107f:{NFSU2_TR(0x5d107f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1085:{NFSU2_TR(0x5d1085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1088:{NFSU2_TR(0x5d1088);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5d108d:{NFSU2_TR(0x5d108d);
u8 U[4];
w4(U+0,u32(0x7a44e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1092:{NFSU2_TR(0x5d1092);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1093:{NFSU2_TR(0x5d1093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1098ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1098:L5d1098:{c.instructions+=2;NFSU2_TR(0x5d1098);
u8 U[4];
w4(U+0,u32(0x7a44e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d109d:{NFSU2_TR(0x5d109d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d10a2ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d10a2:L5d10a2:{c.instructions+=9;NFSU2_TR(0x5d10a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d10a5:{NFSU2_TR(0x5d10a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d10ab:{NFSU2_TR(0x5d10ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d10ae:{NFSU2_TR(0x5d10ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d10b4:{NFSU2_TR(0x5d10b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d10b7:{NFSU2_TR(0x5d10b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
}
B5d10bc:{NFSU2_TR(0x5d10bc);
u8 U[4];
w4(U+0,u32(0x7a44d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d10c1:{NFSU2_TR(0x5d10c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d10c2:{NFSU2_TR(0x5d10c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d10c7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d10c7:L5d10c7:{c.instructions+=3;NFSU2_TR(0x5d10c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5d10ca:{NFSU2_TR(0x5d10ca);
u8 U[4];
w4(U+0,u32(0x7a44d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d10cf:{NFSU2_TR(0x5d10cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d10d4ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d10d4:L5d10d4:{c.instructions+=9;NFSU2_TR(0x5d10d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d10d7:{NFSU2_TR(0x5d10d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d10dd:{NFSU2_TR(0x5d10dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d10e0:{NFSU2_TR(0x5d10e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d10e6:{NFSU2_TR(0x5d10e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d10e9:{NFSU2_TR(0x5d10e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
}
B5d10ee:{NFSU2_TR(0x5d10ee);
u8 U[4];
w4(U+0,u32(0x7a44c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d10f3:{NFSU2_TR(0x5d10f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d10f4:{NFSU2_TR(0x5d10f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d10f9ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d10f9:L5d10f9:{c.instructions+=2;NFSU2_TR(0x5d10f9);
u8 U[4];
w4(U+0,u32(0x7a44c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d10fe:{NFSU2_TR(0x5d10fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1103ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1103:L5d1103:{c.instructions+=9;NFSU2_TR(0x5d1103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1106:{NFSU2_TR(0x5d1106);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d110c:{NFSU2_TR(0x5d110c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d110f:{NFSU2_TR(0x5d110f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1115:{NFSU2_TR(0x5d1115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1118:{NFSU2_TR(0x5d1118);
u8 U[4];
w4(U+0,u32(0x7a44b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d111d:{NFSU2_TR(0x5d111d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
}
B5d1122:{NFSU2_TR(0x5d1122);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1123:{NFSU2_TR(0x5d1123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1128ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1128:L5d1128:{c.instructions+=2;NFSU2_TR(0x5d1128);
u8 U[4];
w4(U+0,u32(0x7a44b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d112d:{NFSU2_TR(0x5d112d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1132ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1132:L5d1132:{c.instructions+=9;NFSU2_TR(0x5d1132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1135:{NFSU2_TR(0x5d1135);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d113b:{NFSU2_TR(0x5d113b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d113e:{NFSU2_TR(0x5d113e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1144:{NFSU2_TR(0x5d1144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1147:{NFSU2_TR(0x5d1147);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
}
B5d114c:{NFSU2_TR(0x5d114c);
u8 U[4];
w4(U+0,u32(0x7a44a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1151:{NFSU2_TR(0x5d1151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1152:{NFSU2_TR(0x5d1152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1157ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1157:L5d1157:{c.instructions+=2;NFSU2_TR(0x5d1157);
u8 U[4];
w4(U+0,u32(0x7a44a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d115c:{NFSU2_TR(0x5d115c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1161ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1161:L5d1161:{c.instructions+=9;NFSU2_TR(0x5d1161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1164:{NFSU2_TR(0x5d1164);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d116a:{NFSU2_TR(0x5d116a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d116d:{NFSU2_TR(0x5d116d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1173:{NFSU2_TR(0x5d1173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1176:{NFSU2_TR(0x5d1176);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
}
B5d117b:{NFSU2_TR(0x5d117b);
u8 U[4];
w4(U+0,u32(0x7a4498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1180:{NFSU2_TR(0x5d1180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1181:{NFSU2_TR(0x5d1181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1186ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1186:L5d1186:{c.instructions+=2;NFSU2_TR(0x5d1186);
u8 U[4];
w4(U+0,u32(0x7a4498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d118b:{NFSU2_TR(0x5d118b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1190ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1190:L5d1190:{c.instructions+=9;NFSU2_TR(0x5d1190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1193:{NFSU2_TR(0x5d1193);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1199:{NFSU2_TR(0x5d1199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d119c:{NFSU2_TR(0x5d119c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d11a2:{NFSU2_TR(0x5d11a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d11a5:{NFSU2_TR(0x5d11a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x190ull))));
}
B5d11aa:{NFSU2_TR(0x5d11aa);
u8 U[4];
w4(U+0,u32(0x7a448cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d11af:{NFSU2_TR(0x5d11af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d11b0:{NFSU2_TR(0x5d11b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d11b5ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d11b5:L5d11b5:{c.instructions+=2;NFSU2_TR(0x5d11b5);
u8 U[4];
w4(U+0,u32(0x7a448cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d11ba:{NFSU2_TR(0x5d11ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d11bfull));
TAIL_STATIC(0x43db50u,43d);
}
B5d11bf:L5d11bf:{c.instructions+=10;NFSU2_TR(0x5d11bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d11c2:{NFSU2_TR(0x5d11c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d11c8:{NFSU2_TR(0x5d11c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d11cb:{NFSU2_TR(0x5d11cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d11d1:{NFSU2_TR(0x5d11d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d11d4:{NFSU2_TR(0x5d11d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5d11d7:{NFSU2_TR(0x5d11d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
}
B5d11dc:{NFSU2_TR(0x5d11dc);
u8 U[4];
w4(U+0,u32(0x7a4480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d11e1:{NFSU2_TR(0x5d11e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d11e2:{NFSU2_TR(0x5d11e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d11e7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d11e7:L5d11e7:{c.instructions+=2;NFSU2_TR(0x5d11e7);
u8 U[4];
w4(U+0,u32(0x7a4480ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d11ec:{NFSU2_TR(0x5d11ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d11f1ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d11f1:L5d11f1:{c.instructions+=9;NFSU2_TR(0x5d11f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d11f4:{NFSU2_TR(0x5d11f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d11fa:{NFSU2_TR(0x5d11fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d11fd:{NFSU2_TR(0x5d11fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1203:{NFSU2_TR(0x5d1203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1206:{NFSU2_TR(0x5d1206);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
}
B5d120b:{NFSU2_TR(0x5d120b);
u8 U[4];
w4(U+0,u32(0x7a4474ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1210:{NFSU2_TR(0x5d1210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1211:{NFSU2_TR(0x5d1211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1216ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1216:L5d1216:{c.instructions+=2;NFSU2_TR(0x5d1216);
u8 U[4];
w4(U+0,u32(0x7a4474ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d121b:{NFSU2_TR(0x5d121b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1220ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1220:L5d1220:{c.instructions+=9;NFSU2_TR(0x5d1220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1223:{NFSU2_TR(0x5d1223);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1229:{NFSU2_TR(0x5d1229);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d122c:{NFSU2_TR(0x5d122c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1232:{NFSU2_TR(0x5d1232);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1235:{NFSU2_TR(0x5d1235);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x208ull))));
}
B5d123a:{NFSU2_TR(0x5d123a);
u8 U[4];
w4(U+0,u32(0x7a4468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d123f:{NFSU2_TR(0x5d123f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1240:{NFSU2_TR(0x5d1240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1245ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1245:L5d1245:{c.instructions+=2;NFSU2_TR(0x5d1245);
u8 U[4];
w4(U+0,u32(0x7a4468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d124a:{NFSU2_TR(0x5d124a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d124full));
TAIL_STATIC(0x43db50u,43d);
}
B5d124f:L5d124f:{c.instructions+=9;NFSU2_TR(0x5d124f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1252:{NFSU2_TR(0x5d1252);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1258:{NFSU2_TR(0x5d1258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d125b:{NFSU2_TR(0x5d125b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1261:{NFSU2_TR(0x5d1261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1264:{NFSU2_TR(0x5d1264);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x230ull))));
}
B5d1269:{NFSU2_TR(0x5d1269);
u8 U[4];
w4(U+0,u32(0x7a445cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d126e:{NFSU2_TR(0x5d126e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d126f:{NFSU2_TR(0x5d126f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1274ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1274:L5d1274:{c.instructions+=2;NFSU2_TR(0x5d1274);
u8 U[4];
w4(U+0,u32(0x7a445cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1279:{NFSU2_TR(0x5d1279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d127eull));
TAIL_STATIC(0x43db50u,43d);
}
B5d127e:L5d127e:{c.instructions+=9;NFSU2_TR(0x5d127e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1281:{NFSU2_TR(0x5d1281);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1287:{NFSU2_TR(0x5d1287);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d128a:{NFSU2_TR(0x5d128a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1290:{NFSU2_TR(0x5d1290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1293:{NFSU2_TR(0x5d1293);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x258ull))));
}
B5d1298:{NFSU2_TR(0x5d1298);
u8 U[4];
w4(U+0,u32(0x7a4450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d129d:{NFSU2_TR(0x5d129d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d129e:{NFSU2_TR(0x5d129e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d12a3ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d12a3:L5d12a3:{c.instructions+=2;NFSU2_TR(0x5d12a3);
u8 U[4];
w4(U+0,u32(0x7a4450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d12a8:{NFSU2_TR(0x5d12a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d12adull));
TAIL_STATIC(0x43db50u,43d);
}
B5d12ad:L5d12ad:{c.instructions+=9;NFSU2_TR(0x5d12ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d12b0:{NFSU2_TR(0x5d12b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d12b6:{NFSU2_TR(0x5d12b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d12b9:{NFSU2_TR(0x5d12b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d12bf:{NFSU2_TR(0x5d12bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d12c2:{NFSU2_TR(0x5d12c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
}
B5d12c7:{NFSU2_TR(0x5d12c7);
u8 U[4];
w4(U+0,u32(0x7a4444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d12cc:{NFSU2_TR(0x5d12cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d12cd:{NFSU2_TR(0x5d12cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d12d2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d12d2:L5d12d2:{c.instructions+=3;NFSU2_TR(0x5d12d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5d12d5:{NFSU2_TR(0x5d12d5);
u8 U[4];
w4(U+0,u32(0x7a4444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d12da:{NFSU2_TR(0x5d12da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d12dfull));
TAIL_STATIC(0x43db50u,43d);
}
B5d12df:L5d12df:{c.instructions+=9;NFSU2_TR(0x5d12df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d12e2:{NFSU2_TR(0x5d12e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d12e8:{NFSU2_TR(0x5d12e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d12eb:{NFSU2_TR(0x5d12eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d12f1:{NFSU2_TR(0x5d12f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d12f4:{NFSU2_TR(0x5d12f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2a8ull))));
}
B5d12f9:{NFSU2_TR(0x5d12f9);
u8 U[4];
w4(U+0,u32(0x7a4438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d12fe:{NFSU2_TR(0x5d12fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d12ff:{NFSU2_TR(0x5d12ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1304ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1304:L5d1304:{c.instructions+=2;NFSU2_TR(0x5d1304);
u8 U[4];
w4(U+0,u32(0x7a4438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1309:{NFSU2_TR(0x5d1309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d130eull));
TAIL_STATIC(0x43db50u,43d);
}
B5d130e:L5d130e:{c.instructions+=9;NFSU2_TR(0x5d130e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1311:{NFSU2_TR(0x5d1311);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1317:{NFSU2_TR(0x5d1317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d131a:{NFSU2_TR(0x5d131a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1320:{NFSU2_TR(0x5d1320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1323:{NFSU2_TR(0x5d1323);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2d0ull))));
}
B5d1328:{NFSU2_TR(0x5d1328);
u8 U[4];
w4(U+0,u32(0x7a4428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d132d:{NFSU2_TR(0x5d132d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d132e:{NFSU2_TR(0x5d132e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1333ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1333:L5d1333:{c.instructions+=2;NFSU2_TR(0x5d1333);
u8 U[4];
w4(U+0,u32(0x7a4428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1338:{NFSU2_TR(0x5d1338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d133dull));
TAIL_STATIC(0x43db50u,43d);
}
B5d133d:L5d133d:{c.instructions+=9;NFSU2_TR(0x5d133d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1340:{NFSU2_TR(0x5d1340);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1346:{NFSU2_TR(0x5d1346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1349:{NFSU2_TR(0x5d1349);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d134f:{NFSU2_TR(0x5d134f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1352:{NFSU2_TR(0x5d1352);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
}
B5d1357:{NFSU2_TR(0x5d1357);
u8 U[4];
w4(U+0,u32(0x7a4414ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d135c:{NFSU2_TR(0x5d135c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d135d:{NFSU2_TR(0x5d135d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1362ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1362:L5d1362:{c.instructions+=2;NFSU2_TR(0x5d1362);
u8 U[4];
w4(U+0,u32(0x7a4414ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1367:{NFSU2_TR(0x5d1367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d136cull));
TAIL_STATIC(0x43db50u,43d);
}
B5d136c:L5d136c:{c.instructions+=9;NFSU2_TR(0x5d136c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d136f:{NFSU2_TR(0x5d136f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1375:{NFSU2_TR(0x5d1375);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1378:{NFSU2_TR(0x5d1378);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x31cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d137e:{NFSU2_TR(0x5d137e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1381:{NFSU2_TR(0x5d1381);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x320ull))));
}
B5d1386:{NFSU2_TR(0x5d1386);
u8 U[4];
w4(U+0,u32(0x7a4408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d138b:{NFSU2_TR(0x5d138b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d138c:{NFSU2_TR(0x5d138c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1391ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1391:L5d1391:{c.instructions+=2;NFSU2_TR(0x5d1391);
u8 U[4];
w4(U+0,u32(0x7a4408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1396:{NFSU2_TR(0x5d1396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d139bull));
TAIL_STATIC(0x43db50u,43d);
}
B5d139b:L5d139b:{c.instructions+=9;NFSU2_TR(0x5d139b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d139e:{NFSU2_TR(0x5d139e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x340ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d13a4:{NFSU2_TR(0x5d13a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d13a7:{NFSU2_TR(0x5d13a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x344ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d13ad:{NFSU2_TR(0x5d13ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d13b0:{NFSU2_TR(0x5d13b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x348ull))));
}
B5d13b5:{NFSU2_TR(0x5d13b5);
u8 U[4];
w4(U+0,u32(0x7a43f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d13ba:{NFSU2_TR(0x5d13ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d13bb:{NFSU2_TR(0x5d13bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d13c0ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d13c0:L5d13c0:{c.instructions+=2;NFSU2_TR(0x5d13c0);
u8 U[4];
w4(U+0,u32(0x7a43f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d13c5:{NFSU2_TR(0x5d13c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d13caull));
TAIL_STATIC(0x43db50u,43d);
}
B5d13ca:L5d13ca:{c.instructions+=10;NFSU2_TR(0x5d13ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d13cd:{NFSU2_TR(0x5d13cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5d13d0:{NFSU2_TR(0x5d13d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d13d6:{NFSU2_TR(0x5d13d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d13d9:{NFSU2_TR(0x5d13d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x36cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d13df:{NFSU2_TR(0x5d13df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d13e2:{NFSU2_TR(0x5d13e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x370ull))));
}
B5d13e7:{NFSU2_TR(0x5d13e7);
u8 U[4];
w4(U+0,u32(0x7a43e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d13ec:{NFSU2_TR(0x5d13ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d13ed:{NFSU2_TR(0x5d13ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d13f2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d13f2:L5d13f2:{c.instructions+=2;NFSU2_TR(0x5d13f2);
u8 U[4];
w4(U+0,u32(0x7a43e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d13f7:{NFSU2_TR(0x5d13f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d13fcull));
TAIL_STATIC(0x43db50u,43d);
}
B5d13fc:L5d13fc:{c.instructions+=9;NFSU2_TR(0x5d13fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d13ff:{NFSU2_TR(0x5d13ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x390ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1405:{NFSU2_TR(0x5d1405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1408:{NFSU2_TR(0x5d1408);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x394ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d140e:{NFSU2_TR(0x5d140e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1411:{NFSU2_TR(0x5d1411);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
}
B5d1416:{NFSU2_TR(0x5d1416);
u8 U[4];
w4(U+0,u32(0x7a43d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d141b:{NFSU2_TR(0x5d141b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d141c:{NFSU2_TR(0x5d141c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1421ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1421:L5d1421:{c.instructions+=2;NFSU2_TR(0x5d1421);
u8 U[4];
w4(U+0,u32(0x7a43d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1426:{NFSU2_TR(0x5d1426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d142bull));
TAIL_STATIC(0x43db50u,43d);
}
B5d142b:L5d142b:{c.instructions+=9;NFSU2_TR(0x5d142b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d142e:{NFSU2_TR(0x5d142e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1434:{NFSU2_TR(0x5d1434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1437:{NFSU2_TR(0x5d1437);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d143d:{NFSU2_TR(0x5d143d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1440:{NFSU2_TR(0x5d1440);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3c0ull))));
}
B5d1445:{NFSU2_TR(0x5d1445);
u8 U[4];
w4(U+0,u32(0x7a43c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d144a:{NFSU2_TR(0x5d144a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d144b:{NFSU2_TR(0x5d144b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1450ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1450:L5d1450:{c.instructions+=2;NFSU2_TR(0x5d1450);
u8 U[4];
w4(U+0,u32(0x7a43c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1455:{NFSU2_TR(0x5d1455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d145aull));
TAIL_STATIC(0x43db50u,43d);
}
B5d145a:L5d145a:{c.instructions+=9;NFSU2_TR(0x5d145a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d145d:{NFSU2_TR(0x5d145d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1463:{NFSU2_TR(0x5d1463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1466:{NFSU2_TR(0x5d1466);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d146c:{NFSU2_TR(0x5d146c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d146f:{NFSU2_TR(0x5d146f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3e8ull))));
}
B5d1474:{NFSU2_TR(0x5d1474);
u8 U[4];
w4(U+0,u32(0x7a43b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1479:{NFSU2_TR(0x5d1479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d147a:{NFSU2_TR(0x5d147a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d147full));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d147f:L5d147f:{c.instructions+=2;NFSU2_TR(0x5d147f);
u8 U[4];
w4(U+0,u32(0x7a43b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1484:{NFSU2_TR(0x5d1484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1489ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1489:L5d1489:{c.instructions+=9;NFSU2_TR(0x5d1489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d148c:{NFSU2_TR(0x5d148c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x408ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1492:{NFSU2_TR(0x5d1492);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1495:{NFSU2_TR(0x5d1495);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d149b:{NFSU2_TR(0x5d149b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d149e:{NFSU2_TR(0x5d149e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x410ull))));
}
B5d14a3:{NFSU2_TR(0x5d14a3);
u8 U[4];
w4(U+0,u32(0x7a43acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d14a8:{NFSU2_TR(0x5d14a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d14a9:{NFSU2_TR(0x5d14a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d14aeull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d14ae:L5d14ae:{c.instructions+=2;NFSU2_TR(0x5d14ae);
u8 U[4];
w4(U+0,u32(0x7a43acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d14b3:{NFSU2_TR(0x5d14b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d14b8ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d14b8:L5d14b8:{c.instructions+=9;NFSU2_TR(0x5d14b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d14bb:{NFSU2_TR(0x5d14bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d14c1:{NFSU2_TR(0x5d14c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d14c4:{NFSU2_TR(0x5d14c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d14ca:{NFSU2_TR(0x5d14ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d14cd:{NFSU2_TR(0x5d14cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x438ull))));
}
B5d14d2:{NFSU2_TR(0x5d14d2);
u8 U[4];
w4(U+0,u32(0x7a43a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d14d7:{NFSU2_TR(0x5d14d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d14d8:{NFSU2_TR(0x5d14d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d14ddull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d14dd:L5d14dd:{c.instructions+=3;NFSU2_TR(0x5d14dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5d14e0:{NFSU2_TR(0x5d14e0);
u8 U[4];
w4(U+0,u32(0x7a43a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d14e5:{NFSU2_TR(0x5d14e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d14eaull));
TAIL_STATIC(0x43db50u,43d);
}
B5d14ea:L5d14ea:{c.instructions+=9;NFSU2_TR(0x5d14ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d14ed:{NFSU2_TR(0x5d14ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x458ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d14f3:{NFSU2_TR(0x5d14f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d14f6:{NFSU2_TR(0x5d14f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x45cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d14fc:{NFSU2_TR(0x5d14fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d14ff:{NFSU2_TR(0x5d14ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x460ull))));
}
B5d1504:{NFSU2_TR(0x5d1504);
u8 U[4];
w4(U+0,u32(0x7a4398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1509:{NFSU2_TR(0x5d1509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d150a:{NFSU2_TR(0x5d150a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d150full));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d150f:L5d150f:{c.instructions+=2;NFSU2_TR(0x5d150f);
u8 U[4];
w4(U+0,u32(0x7a4398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1514:{NFSU2_TR(0x5d1514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1519ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1519:L5d1519:{c.instructions+=9;NFSU2_TR(0x5d1519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d151c:{NFSU2_TR(0x5d151c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x480ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1522:{NFSU2_TR(0x5d1522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1525:{NFSU2_TR(0x5d1525);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x484ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d152b:{NFSU2_TR(0x5d152b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d152e:{NFSU2_TR(0x5d152e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x488ull))));
}
B5d1533:{NFSU2_TR(0x5d1533);
u8 U[4];
w4(U+0,u32(0x7a438cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1538:{NFSU2_TR(0x5d1538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1539:{NFSU2_TR(0x5d1539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d153eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d153e:L5d153e:{c.instructions+=2;NFSU2_TR(0x5d153e);
u8 U[4];
w4(U+0,u32(0x7a438cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1543:{NFSU2_TR(0x5d1543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1548ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1548:L5d1548:{c.instructions+=9;NFSU2_TR(0x5d1548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d154b:{NFSU2_TR(0x5d154b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1551:{NFSU2_TR(0x5d1551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1554:{NFSU2_TR(0x5d1554);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d155a:{NFSU2_TR(0x5d155a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d155d:{NFSU2_TR(0x5d155d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4b0ull))));
}
B5d1562:{NFSU2_TR(0x5d1562);
u8 U[4];
w4(U+0,u32(0x7a4384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1567:{NFSU2_TR(0x5d1567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1568:{NFSU2_TR(0x5d1568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d156dull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d156d:L5d156d:{c.instructions+=2;NFSU2_TR(0x5d156d);
u8 U[4];
w4(U+0,u32(0x7a4384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1572:{NFSU2_TR(0x5d1572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1577ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1577:L5d1577:{c.instructions+=9;NFSU2_TR(0x5d1577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d157a:{NFSU2_TR(0x5d157a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1580:{NFSU2_TR(0x5d1580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1583:{NFSU2_TR(0x5d1583);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1589:{NFSU2_TR(0x5d1589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d158c:{NFSU2_TR(0x5d158c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4d8ull))));
}
B5d1591:{NFSU2_TR(0x5d1591);
u8 U[4];
w4(U+0,u32(0x7a4378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1596:{NFSU2_TR(0x5d1596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1597:{NFSU2_TR(0x5d1597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d159cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d159c:L5d159c:{c.instructions+=2;NFSU2_TR(0x5d159c);
u8 U[4];
w4(U+0,u32(0x7a4378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d15a1:{NFSU2_TR(0x5d15a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d15a6ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d15a6:L5d15a6:{c.instructions+=9;NFSU2_TR(0x5d15a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d15a9:{NFSU2_TR(0x5d15a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d15af:{NFSU2_TR(0x5d15af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d15b2:{NFSU2_TR(0x5d15b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4fcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d15b8:{NFSU2_TR(0x5d15b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d15bb:{NFSU2_TR(0x5d15bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x500ull))));
}
B5d15c0:{NFSU2_TR(0x5d15c0);
u8 U[4];
w4(U+0,u32(0x7a4364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d15c5:{NFSU2_TR(0x5d15c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d15c6:{NFSU2_TR(0x5d15c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d15cbull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d15cb:L5d15cb:{c.instructions+=2;NFSU2_TR(0x5d15cb);
u8 U[4];
w4(U+0,u32(0x7a4364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d15d0:{NFSU2_TR(0x5d15d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d15d5ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d15d5:L5d15d5:{c.instructions+=10;NFSU2_TR(0x5d15d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d15d8:{NFSU2_TR(0x5d15d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d15de:{NFSU2_TR(0x5d15de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d15e1:{NFSU2_TR(0x5d15e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x524ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d15e7:{NFSU2_TR(0x5d15e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d15ea:{NFSU2_TR(0x5d15ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5d15ed:{NFSU2_TR(0x5d15ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x528ull))));
}
B5d15f2:{NFSU2_TR(0x5d15f2);
u8 U[4];
w4(U+0,u32(0x7a4350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d15f7:{NFSU2_TR(0x5d15f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d15f8:{NFSU2_TR(0x5d15f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d15fdull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d15fd:L5d15fd:{c.instructions+=2;NFSU2_TR(0x5d15fd);
u8 U[4];
w4(U+0,u32(0x7a4350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1602:{NFSU2_TR(0x5d1602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1607ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1607:L5d1607:{c.instructions+=9;NFSU2_TR(0x5d1607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d160a:{NFSU2_TR(0x5d160a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x548ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1610:{NFSU2_TR(0x5d1610);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1613:{NFSU2_TR(0x5d1613);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1619:{NFSU2_TR(0x5d1619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d161c:{NFSU2_TR(0x5d161c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x550ull))));
}
B5d1621:{NFSU2_TR(0x5d1621);
u8 U[4];
w4(U+0,u32(0x7a4340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1626:{NFSU2_TR(0x5d1626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1627:{NFSU2_TR(0x5d1627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d162cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d162c:L5d162c:{c.instructions+=2;NFSU2_TR(0x5d162c);
u8 U[4];
w4(U+0,u32(0x7a4340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1631:{NFSU2_TR(0x5d1631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1636ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1636:L5d1636:{c.instructions+=9;NFSU2_TR(0x5d1636);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1639:{NFSU2_TR(0x5d1639);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x570ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d163f:{NFSU2_TR(0x5d163f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1642:{NFSU2_TR(0x5d1642);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x574ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1648:{NFSU2_TR(0x5d1648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d164b:{NFSU2_TR(0x5d164b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x578ull))));
}
B5d1650:{NFSU2_TR(0x5d1650);
u8 U[4];
w4(U+0,u32(0x7a4330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1655:{NFSU2_TR(0x5d1655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1656:{NFSU2_TR(0x5d1656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d165bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d165b:L5d165b:{c.instructions+=2;NFSU2_TR(0x5d165b);
u8 U[4];
w4(U+0,u32(0x7a4330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1660:{NFSU2_TR(0x5d1660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1665ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1665:L5d1665:{c.instructions+=9;NFSU2_TR(0x5d1665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1668:{NFSU2_TR(0x5d1668);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x598ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d166e:{NFSU2_TR(0x5d166e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1671:{NFSU2_TR(0x5d1671);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x59cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1677:{NFSU2_TR(0x5d1677);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d167a:{NFSU2_TR(0x5d167a);
u8 U[4];
w4(U+0,u32(0x7a4320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d167f:{NFSU2_TR(0x5d167f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5a0ull))));
}
B5d1684:{NFSU2_TR(0x5d1684);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1685:{NFSU2_TR(0x5d1685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d168aull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d168a:L5d168a:{c.instructions+=2;NFSU2_TR(0x5d168a);
u8 U[4];
w4(U+0,u32(0x7a4320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d168f:{NFSU2_TR(0x5d168f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1694ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1694:L5d1694:{c.instructions+=9;NFSU2_TR(0x5d1694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1697:{NFSU2_TR(0x5d1697);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d169d:{NFSU2_TR(0x5d169d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d16a0:{NFSU2_TR(0x5d16a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d16a6:{NFSU2_TR(0x5d16a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d16a9:{NFSU2_TR(0x5d16a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5c8ull))));
}
B5d16ae:{NFSU2_TR(0x5d16ae);
u8 U[4];
w4(U+0,u32(0x7a4314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d16b3:{NFSU2_TR(0x5d16b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d16b4:{NFSU2_TR(0x5d16b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d16b9ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d16b9:L5d16b9:{c.instructions+=2;NFSU2_TR(0x5d16b9);
u8 U[4];
w4(U+0,u32(0x7a4314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d16be:{NFSU2_TR(0x5d16be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d16c3ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d16c3:L5d16c3:{c.instructions+=9;NFSU2_TR(0x5d16c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d16c6:{NFSU2_TR(0x5d16c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d16cc:{NFSU2_TR(0x5d16cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d16cf:{NFSU2_TR(0x5d16cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d16d5:{NFSU2_TR(0x5d16d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d16d8:{NFSU2_TR(0x5d16d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5f0ull))));
}
B5d16dd:{NFSU2_TR(0x5d16dd);
u8 U[4];
w4(U+0,u32(0x7a4308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d16e2:{NFSU2_TR(0x5d16e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d16e3:{NFSU2_TR(0x5d16e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d16e8ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d16e8:L5d16e8:{c.instructions+=3;NFSU2_TR(0x5d16e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5d16eb:{NFSU2_TR(0x5d16eb);
u8 U[4];
w4(U+0,u32(0x7a4308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d16f0:{NFSU2_TR(0x5d16f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d16f5ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d16f5:L5d16f5:{c.instructions+=9;NFSU2_TR(0x5d16f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d16f8:{NFSU2_TR(0x5d16f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x610ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d16fe:{NFSU2_TR(0x5d16fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1701:{NFSU2_TR(0x5d1701);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x614ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1707:{NFSU2_TR(0x5d1707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d170a:{NFSU2_TR(0x5d170a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x618ull))));
}
B5d170f:{NFSU2_TR(0x5d170f);
u8 U[4];
w4(U+0,u32(0x7a42f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1714:{NFSU2_TR(0x5d1714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1715:{NFSU2_TR(0x5d1715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d171aull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d171a:L5d171a:{c.instructions+=2;NFSU2_TR(0x5d171a);
u8 U[4];
w4(U+0,u32(0x7a42f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d171f:{NFSU2_TR(0x5d171f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1724ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1724:L5d1724:{c.instructions+=9;NFSU2_TR(0x5d1724);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1727:{NFSU2_TR(0x5d1727);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x638ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d172d:{NFSU2_TR(0x5d172d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1730:{NFSU2_TR(0x5d1730);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x63cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1736:{NFSU2_TR(0x5d1736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1739:{NFSU2_TR(0x5d1739);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x640ull))));
}
B5d173e:{NFSU2_TR(0x5d173e);
u8 U[4];
w4(U+0,u32(0x7a42e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1743:{NFSU2_TR(0x5d1743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1744:{NFSU2_TR(0x5d1744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1749ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1749:L5d1749:{c.instructions+=2;NFSU2_TR(0x5d1749);
u8 U[4];
w4(U+0,u32(0x7a42e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d174e:{NFSU2_TR(0x5d174e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1753ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1753:L5d1753:{c.instructions+=9;NFSU2_TR(0x5d1753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1756:{NFSU2_TR(0x5d1756);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x660ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d175c:{NFSU2_TR(0x5d175c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d175f:{NFSU2_TR(0x5d175f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x664ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1765:{NFSU2_TR(0x5d1765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1768:{NFSU2_TR(0x5d1768);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6b8ull))));
}
B5d176d:{NFSU2_TR(0x5d176d);
u8 U[4];
w4(U+0,u32(0x7a42d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1772:{NFSU2_TR(0x5d1772);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1773:{NFSU2_TR(0x5d1773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1778ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1778:L5d1778:{c.instructions+=2;NFSU2_TR(0x5d1778);
u8 U[4];
w4(U+0,u32(0x7a42d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d177d:{NFSU2_TR(0x5d177d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1782ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1782:L5d1782:{c.instructions+=9;NFSU2_TR(0x5d1782);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1785:{NFSU2_TR(0x5d1785);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d178b:{NFSU2_TR(0x5d178b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d178e:{NFSU2_TR(0x5d178e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1794:{NFSU2_TR(0x5d1794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1797:{NFSU2_TR(0x5d1797);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x668ull))));
}
B5d179c:{NFSU2_TR(0x5d179c);
u8 U[4];
w4(U+0,u32(0x7a42c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d17a1:{NFSU2_TR(0x5d17a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d17a2:{NFSU2_TR(0x5d17a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d17a7ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d17a7:L5d17a7:{c.instructions+=2;NFSU2_TR(0x5d17a7);
u8 U[4];
w4(U+0,u32(0x7a42c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d17ac:{NFSU2_TR(0x5d17ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d17b1ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d17b1:L5d17b1:{c.instructions+=9;NFSU2_TR(0x5d17b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d17b4:{NFSU2_TR(0x5d17b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x688ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d17ba:{NFSU2_TR(0x5d17ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d17bd:{NFSU2_TR(0x5d17bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d17c3:{NFSU2_TR(0x5d17c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d17c6:{NFSU2_TR(0x5d17c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x690ull))));
}
B5d17cb:{NFSU2_TR(0x5d17cb);
u8 U[4];
w4(U+0,u32(0x7a42b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d17d0:{NFSU2_TR(0x5d17d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d17d1:{NFSU2_TR(0x5d17d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d17d6ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d17d6:L5d17d6:{c.instructions+=2;NFSU2_TR(0x5d17d6);
u8 U[4];
w4(U+0,u32(0x7a42b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d17db:{NFSU2_TR(0x5d17db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d17e0ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d17e0:L5d17e0:{c.instructions+=10;NFSU2_TR(0x5d17e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d17e3:{NFSU2_TR(0x5d17e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d17e9:{NFSU2_TR(0x5d17e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d17ec:{NFSU2_TR(0x5d17ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d17f2:{NFSU2_TR(0x5d17f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d17f5:{NFSU2_TR(0x5d17f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5d17f8:{NFSU2_TR(0x5d17f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6e0ull))));
}
B5d17fd:{NFSU2_TR(0x5d17fd);
u8 U[4];
w4(U+0,u32(0x7a42a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1802:{NFSU2_TR(0x5d1802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1803:{NFSU2_TR(0x5d1803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1808ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1808:L5d1808:{c.instructions+=2;NFSU2_TR(0x5d1808);
u8 U[4];
w4(U+0,u32(0x7a42a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d180d:{NFSU2_TR(0x5d180d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1812ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1812:L5d1812:{c.instructions+=9;NFSU2_TR(0x5d1812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1815:{NFSU2_TR(0x5d1815);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x700ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d181b:{NFSU2_TR(0x5d181b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d181e:{NFSU2_TR(0x5d181e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x704ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1824:{NFSU2_TR(0x5d1824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1827:{NFSU2_TR(0x5d1827);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x708ull))));
}
B5d182c:{NFSU2_TR(0x5d182c);
u8 U[4];
w4(U+0,u32(0x7a4298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1831:{NFSU2_TR(0x5d1831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1832:{NFSU2_TR(0x5d1832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1837ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1837:L5d1837:{c.instructions+=2;NFSU2_TR(0x5d1837);
u8 U[4];
w4(U+0,u32(0x7a4298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d183c:{NFSU2_TR(0x5d183c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1841ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1841:L5d1841:{c.instructions+=9;NFSU2_TR(0x5d1841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1844:{NFSU2_TR(0x5d1844);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x728ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d184a:{NFSU2_TR(0x5d184a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d184d:{NFSU2_TR(0x5d184d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x72cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1853:{NFSU2_TR(0x5d1853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1856:{NFSU2_TR(0x5d1856);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x730ull))));
}
B5d185b:{NFSU2_TR(0x5d185b);
u8 U[4];
w4(U+0,u32(0x7a4288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1860:{NFSU2_TR(0x5d1860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1861:{NFSU2_TR(0x5d1861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1866ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1866:L5d1866:{c.instructions+=2;NFSU2_TR(0x5d1866);
u8 U[4];
w4(U+0,u32(0x7a4288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d186b:{NFSU2_TR(0x5d186b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1870ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1870:L5d1870:{c.instructions+=9;NFSU2_TR(0x5d1870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1873:{NFSU2_TR(0x5d1873);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x750ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1879:{NFSU2_TR(0x5d1879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d187c:{NFSU2_TR(0x5d187c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x754ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1882:{NFSU2_TR(0x5d1882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1885:{NFSU2_TR(0x5d1885);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x758ull))));
}
B5d188a:{NFSU2_TR(0x5d188a);
u8 U[4];
w4(U+0,u32(0x7a4278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d188f:{NFSU2_TR(0x5d188f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1890:{NFSU2_TR(0x5d1890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1895ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1895:L5d1895:{c.instructions+=2;NFSU2_TR(0x5d1895);
u8 U[4];
w4(U+0,u32(0x7a4278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d189a:{NFSU2_TR(0x5d189a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d189full));
TAIL_STATIC(0x43db50u,43d);
}
B5d189f:L5d189f:{c.instructions+=9;NFSU2_TR(0x5d189f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d18a2:{NFSU2_TR(0x5d18a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x778ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d18a8:{NFSU2_TR(0x5d18a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d18ab:{NFSU2_TR(0x5d18ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d18b1:{NFSU2_TR(0x5d18b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d18b4:{NFSU2_TR(0x5d18b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x780ull))));
}
B5d18b9:{NFSU2_TR(0x5d18b9);
u8 U[4];
w4(U+0,u32(0x7a4268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d18be:{NFSU2_TR(0x5d18be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d18bf:{NFSU2_TR(0x5d18bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d18c4ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d18c4:L5d18c4:{c.instructions+=2;NFSU2_TR(0x5d18c4);
u8 U[4];
w4(U+0,u32(0x7a4268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d18c9:{NFSU2_TR(0x5d18c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d18ceull));
TAIL_STATIC(0x43db50u,43d);
}
B5d18ce:L5d18ce:{c.instructions+=9;NFSU2_TR(0x5d18ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d18d1:{NFSU2_TR(0x5d18d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d18d7:{NFSU2_TR(0x5d18d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d18da:{NFSU2_TR(0x5d18da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d18e0:{NFSU2_TR(0x5d18e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d18e3:{NFSU2_TR(0x5d18e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7a8ull))));
}
B5d18e8:{NFSU2_TR(0x5d18e8);
u8 U[4];
w4(U+0,u32(0x7a425cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d18ed:{NFSU2_TR(0x5d18ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d18ee:{NFSU2_TR(0x5d18ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d18f3ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d18f3:L5d18f3:{c.instructions+=3;NFSU2_TR(0x5d18f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5d18f6:{NFSU2_TR(0x5d18f6);
u8 U[4];
w4(U+0,u32(0x7a425cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d18fb:{NFSU2_TR(0x5d18fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1900ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1900:L5d1900:{c.instructions+=9;NFSU2_TR(0x5d1900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1903:{NFSU2_TR(0x5d1903);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1909:{NFSU2_TR(0x5d1909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d190c:{NFSU2_TR(0x5d190c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1912:{NFSU2_TR(0x5d1912);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1915:{NFSU2_TR(0x5d1915);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7d0ull))));
}
B5d191a:{NFSU2_TR(0x5d191a);
u8 U[4];
w4(U+0,u32(0x7a424cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d191f:{NFSU2_TR(0x5d191f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1920:{NFSU2_TR(0x5d1920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1925ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1925:L5d1925:{c.instructions+=2;NFSU2_TR(0x5d1925);
u8 U[4];
w4(U+0,u32(0x7a424cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d192a:{NFSU2_TR(0x5d192a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d192full));
TAIL_STATIC(0x43db50u,43d);
}
B5d192f:L5d192f:{c.instructions+=9;NFSU2_TR(0x5d192f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1932:{NFSU2_TR(0x5d1932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1938:{NFSU2_TR(0x5d1938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d193b:{NFSU2_TR(0x5d193b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1941:{NFSU2_TR(0x5d1941);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1944:{NFSU2_TR(0x5d1944);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f8ull))));
}
B5d1949:{NFSU2_TR(0x5d1949);
u8 U[4];
w4(U+0,u32(0x7a423cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d194e:{NFSU2_TR(0x5d194e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d194f:{NFSU2_TR(0x5d194f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1954ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1954:L5d1954:{c.instructions+=2;NFSU2_TR(0x5d1954);
u8 U[4];
w4(U+0,u32(0x7a423cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1959:{NFSU2_TR(0x5d1959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d195eull));
TAIL_STATIC(0x43db50u,43d);
}
B5d195e:L5d195e:{c.instructions+=9;NFSU2_TR(0x5d195e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1961:{NFSU2_TR(0x5d1961);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x818ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1967:{NFSU2_TR(0x5d1967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d196a:{NFSU2_TR(0x5d196a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x81cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1970:{NFSU2_TR(0x5d1970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1973:{NFSU2_TR(0x5d1973);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x820ull))));
}
B5d1978:{NFSU2_TR(0x5d1978);
u8 U[4];
w4(U+0,u32(0x7a422cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d197d:{NFSU2_TR(0x5d197d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d197e:{NFSU2_TR(0x5d197e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1983ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1983:L5d1983:{c.instructions+=2;NFSU2_TR(0x5d1983);
u8 U[4];
w4(U+0,u32(0x7a422cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1988:{NFSU2_TR(0x5d1988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d198dull));
TAIL_STATIC(0x43db50u,43d);
}
B5d198d:L5d198d:{c.instructions+=9;NFSU2_TR(0x5d198d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1990:{NFSU2_TR(0x5d1990);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1996:{NFSU2_TR(0x5d1996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1999:{NFSU2_TR(0x5d1999);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x844ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d199f:{NFSU2_TR(0x5d199f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d19a2:{NFSU2_TR(0x5d19a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x848ull))));
}
B5d19a7:{NFSU2_TR(0x5d19a7);
u8 U[4];
w4(U+0,u32(0x7a421cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d19ac:{NFSU2_TR(0x5d19ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d19ad:{NFSU2_TR(0x5d19ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d19b2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d19b2:L5d19b2:{c.instructions+=2;NFSU2_TR(0x5d19b2);
u8 U[4];
w4(U+0,u32(0x7a421cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d19b7:{NFSU2_TR(0x5d19b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d19bcull));
TAIL_STATIC(0x43db50u,43d);
}
B5d19bc:L5d19bc:{c.instructions+=9;NFSU2_TR(0x5d19bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d19bf:{NFSU2_TR(0x5d19bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x868ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d19c5:{NFSU2_TR(0x5d19c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d19c8:{NFSU2_TR(0x5d19c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x86cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d19ce:{NFSU2_TR(0x5d19ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d19d1:{NFSU2_TR(0x5d19d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x870ull))));
}
B5d19d6:{NFSU2_TR(0x5d19d6);
u8 U[4];
w4(U+0,u32(0x7a420cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d19db:{NFSU2_TR(0x5d19db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d19dc:{NFSU2_TR(0x5d19dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d19e1ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d19e1:L5d19e1:{c.instructions+=2;NFSU2_TR(0x5d19e1);
u8 U[4];
w4(U+0,u32(0x7a420cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d19e6:{NFSU2_TR(0x5d19e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d19ebull));
TAIL_STATIC(0x43db50u,43d);
}
B5d19eb:L5d19eb:{c.instructions+=10;NFSU2_TR(0x5d19eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d19ee:{NFSU2_TR(0x5d19ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x890ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d19f4:{NFSU2_TR(0x5d19f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d19f7:{NFSU2_TR(0x5d19f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x894ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d19fd:{NFSU2_TR(0x5d19fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1a00:{NFSU2_TR(0x5d1a00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5d1a03:{NFSU2_TR(0x5d1a03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x898ull))));
}
B5d1a08:{NFSU2_TR(0x5d1a08);
u8 U[4];
w4(U+0,u32(0x7a41fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a0d:{NFSU2_TR(0x5d1a0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a0e:{NFSU2_TR(0x5d1a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1a13ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1a13:L5d1a13:{c.instructions+=2;NFSU2_TR(0x5d1a13);
u8 U[4];
w4(U+0,u32(0x7a41fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a18:{NFSU2_TR(0x5d1a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1a1dull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1a1d:L5d1a1d:{c.instructions+=9;NFSU2_TR(0x5d1a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1a20:{NFSU2_TR(0x5d1a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1a26:{NFSU2_TR(0x5d1a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1a29:{NFSU2_TR(0x5d1a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1a2f:{NFSU2_TR(0x5d1a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1a32:{NFSU2_TR(0x5d1a32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8c0ull))));
}
B5d1a37:{NFSU2_TR(0x5d1a37);
u8 U[4];
w4(U+0,u32(0x7a41e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a3c:{NFSU2_TR(0x5d1a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a3d:{NFSU2_TR(0x5d1a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1a42ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1a42:L5d1a42:{c.instructions+=2;NFSU2_TR(0x5d1a42);
u8 U[4];
w4(U+0,u32(0x7a41e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a47:{NFSU2_TR(0x5d1a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1a4cull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1a4c:L5d1a4c:{c.instructions+=9;NFSU2_TR(0x5d1a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1a4f:{NFSU2_TR(0x5d1a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1a55:{NFSU2_TR(0x5d1a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1a58:{NFSU2_TR(0x5d1a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1a5e:{NFSU2_TR(0x5d1a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1a61:{NFSU2_TR(0x5d1a61);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8e8ull))));
}
B5d1a66:{NFSU2_TR(0x5d1a66);
u8 U[4];
w4(U+0,u32(0x7a41dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a6b:{NFSU2_TR(0x5d1a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a6c:{NFSU2_TR(0x5d1a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1a71ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1a71:L5d1a71:{c.instructions+=2;NFSU2_TR(0x5d1a71);
u8 U[4];
w4(U+0,u32(0x7a41dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a76:{NFSU2_TR(0x5d1a76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1a7bull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1a7b:L5d1a7b:{c.instructions+=9;NFSU2_TR(0x5d1a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1a7e:{NFSU2_TR(0x5d1a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1a84:{NFSU2_TR(0x5d1a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1a87:{NFSU2_TR(0x5d1a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1a8d:{NFSU2_TR(0x5d1a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1a90:{NFSU2_TR(0x5d1a90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x910ull))));
}
B5d1a95:{NFSU2_TR(0x5d1a95);
u8 U[4];
w4(U+0,u32(0x7a41d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a9a:{NFSU2_TR(0x5d1a9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1a9b:{NFSU2_TR(0x5d1a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1aa0ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1aa0:L5d1aa0:{c.instructions+=2;NFSU2_TR(0x5d1aa0);
u8 U[4];
w4(U+0,u32(0x7a41d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1aa5:{NFSU2_TR(0x5d1aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1aaaull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1aaa:L5d1aaa:{c.instructions+=9;NFSU2_TR(0x5d1aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1aad:{NFSU2_TR(0x5d1aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1ab3:{NFSU2_TR(0x5d1ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1ab6:{NFSU2_TR(0x5d1ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x934ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1abc:{NFSU2_TR(0x5d1abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1abf:{NFSU2_TR(0x5d1abf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x938ull))));
}
B5d1ac4:{NFSU2_TR(0x5d1ac4);
u8 U[4];
w4(U+0,u32(0x7a41bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1ac9:{NFSU2_TR(0x5d1ac9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1aca:{NFSU2_TR(0x5d1aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1acfull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5d1acf:L5d1acf:{c.instructions+=2;NFSU2_TR(0x5d1acf);
u8 U[4];
w4(U+0,u32(0x7a41bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1ad4:{NFSU2_TR(0x5d1ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1ad9ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1ad9:L5d1ad9:{c.instructions+=14;NFSU2_TR(0x5d1ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1adc:{NFSU2_TR(0x5d1adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1ae2:{NFSU2_TR(0x5d1ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1ae5:{NFSU2_TR(0x5d1ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1ae9:{NFSU2_TR(0x5d1ae9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B5d1aec:{NFSU2_TR(0x5d1aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1af2:{NFSU2_TR(0x5d1af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1af5:{NFSU2_TR(0x5d1af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1af6:{NFSU2_TR(0x5d1af6);
__builtin_memmove((R+0),(R+24),4);
}
B5d1af8:{NFSU2_TR(0x5d1af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1af9:{NFSU2_TR(0x5d1af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d1afa:{NFSU2_TR(0x5d1afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1b01:{NFSU2_TR(0x5d1b01);
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
B5d1b04:{NFSU2_TR(0x5d1b04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1b10:L5d1b10:{c.instructions+=3;NFSU2_TR(0x5d1b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b11:{NFSU2_TR(0x5d1b11);
__builtin_memmove((R+24),(R+4),4);
}
B5d1b13:{NFSU2_TR(0x5d1b13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1b18ull));
{goto L5d1b30;}
}
B5d1b18:L5d1b18:{c.instructions+=2;NFSU2_TR(0x5d1b18);
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
B5d1b1d:{NFSU2_TR(0x5d1b1d);
if(r1(R+518)){{goto L5d1b28;}}
}
B5d1b1f:L5d1b1f:{c.instructions+=2;NFSU2_TR(0x5d1b1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b20:{NFSU2_TR(0x5d1b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1b25ull));
TAIL_STATIC(0x575630u,575);
}
B5d1b25:L5d1b25:{c.instructions+=1;NFSU2_TR(0x5d1b25);
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
B5d1b28:L5d1b28:{c.instructions+=3;NFSU2_TR(0x5d1b28);
__builtin_memmove((R+0),(R+24),4);
}
B5d1b2a:{NFSU2_TR(0x5d1b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1b2b:{NFSU2_TR(0x5d1b2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1b30:L5d1b30:{c.instructions+=7;NFSU2_TR(0x5d1b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b31:{NFSU2_TR(0x5d1b31);
__builtin_memmove((R+24),(R+4),4);
}
B5d1b33:{NFSU2_TR(0x5d1b33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b34:{NFSU2_TR(0x5d1b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d1b37:{NFSU2_TR(0x5d1b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1b39:{NFSU2_TR(0x5d1b39);
u8 U[4];
w4(U+0,u32(0x7a41b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d1b3f:{NFSU2_TR(0x5d1b3f);
if(r1(R+518)){{goto L5d1b55;}}
}
B5d1b41:L5d1b41:{c.instructions+=2;NFSU2_TR(0x5d1b41);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x960ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d1b47:{NFSU2_TR(0x5d1b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1b4cull));
TAIL_STATIC(0x5d0660u,5d0);
}
B5d1b4c:L5d1b4c:{c.instructions+=2;NFSU2_TR(0x5d1b4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b4d:{NFSU2_TR(0x5d1b4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1b52ull));
TAIL_STATIC(0x575630u,575);
}
B5d1b52:L5d1b52:{c.instructions+=1;NFSU2_TR(0x5d1b52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d1b55:L5d1b55:{c.instructions+=3;NFSU2_TR(0x5d1b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1b58:{NFSU2_TR(0x5d1b58);
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
B5d1b5a:{NFSU2_TR(0x5d1b5a);
if(r1(R+518)){{goto L5d1b69;}}
}
B5d1b5c:L5d1b5c:{c.instructions+=3;NFSU2_TR(0x5d1b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1b5e:{NFSU2_TR(0x5d1b5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b5f:{NFSU2_TR(0x5d1b5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1b62ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1b62:L5d1b62:{c.instructions+=1;NFSU2_TR(0x5d1b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d1b69:L5d1b69:{c.instructions+=3;NFSU2_TR(0x5d1b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1b6a:{NFSU2_TR(0x5d1b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1b6b:{NFSU2_TR(0x5d1b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1b70:L5d1b70:{c.instructions+=7;NFSU2_TR(0x5d1b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d1b73:{NFSU2_TR(0x5d1b73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b74:{NFSU2_TR(0x5d1b74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1b75:{NFSU2_TR(0x5d1b75);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d1b79:{NFSU2_TR(0x5d1b79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d1b7b:{NFSU2_TR(0x5d1b7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1b7e:{NFSU2_TR(0x5d1b7e);
__builtin_memmove((R+28),(R+28),4);
}
B5d1b80:L5d1b80:{c.instructions+=2;NFSU2_TR(0x5d1b80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d1b82:{NFSU2_TR(0x5d1b82);
if(r1(R+518)){{goto L5d1b95;}}
}
B5d1b84:L5d1b84:{c.instructions+=4;NFSU2_TR(0x5d1b84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d1b85:{NFSU2_TR(0x5d1b85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x28ull))));
}
B5d1b88:{NFSU2_TR(0x5d1b88);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d1b8b:{NFSU2_TR(0x5d1b8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1b80u);}goto L5d1b80;}}
}
B5d1b8d:L5d1b8d:{c.instructions+=4;NFSU2_TR(0x5d1b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1b8e:{NFSU2_TR(0x5d1b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1b8f:{NFSU2_TR(0x5d1b8f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1b92:{NFSU2_TR(0x5d1b92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1b95:L5d1b95:{c.instructions+=11;NFSU2_TR(0x5d1b95);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d1b99:{NFSU2_TR(0x5d1b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d1b9c:{NFSU2_TR(0x5d1b9c);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d1ba0:{NFSU2_TR(0x5d1ba0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1ba4:{NFSU2_TR(0x5d1ba4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1ba5:{NFSU2_TR(0x5d1ba5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d1ba9:{NFSU2_TR(0x5d1ba9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1baa:{NFSU2_TR(0x5d1baa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x960ull))));
}
B5d1bb0:{NFSU2_TR(0x5d1bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1bb4:{NFSU2_TR(0x5d1bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d1bbc:{NFSU2_TR(0x5d1bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1bc1ull));
TAIL_STATIC(0x5d0cf0u,5d0);
}
B5d1bc1:L5d1bc1:{c.instructions+=6;NFSU2_TR(0x5d1bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d1bc3:{NFSU2_TR(0x5d1bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1bc4:{NFSU2_TR(0x5d1bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1bc7:{NFSU2_TR(0x5d1bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1bc8:{NFSU2_TR(0x5d1bc8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1bcb:{NFSU2_TR(0x5d1bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1bd0:L5d1bd0:{c.instructions+=10;NFSU2_TR(0x5d1bd0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1bd3:{NFSU2_TR(0x5d1bd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1bd4:{NFSU2_TR(0x5d1bd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1bd5:{NFSU2_TR(0x5d1bd5);
__builtin_memmove((R+24),(R+4),4);
}
B5d1bd7:{NFSU2_TR(0x5d1bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1bda:{NFSU2_TR(0x5d1bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1bdc:{NFSU2_TR(0x5d1bdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1be0:{NFSU2_TR(0x5d1be0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1be1:{NFSU2_TR(0x5d1be1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1be2:{NFSU2_TR(0x5d1be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1be5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1be5:L5d1be5:{c.instructions+=4;NFSU2_TR(0x5d1be5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1be9:{NFSU2_TR(0x5d1be9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d1beb:{NFSU2_TR(0x5d1beb);
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
B5d1bed:{NFSU2_TR(0x5d1bed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d1c32;}}
}
B5d1bef:L5d1bef:{c.instructions+=1;NFSU2_TR(0x5d1bef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1bf0:L5d1bf0:{c.instructions+=6;NFSU2_TR(0x5d1bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1bf3:{NFSU2_TR(0x5d1bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1bf5:{NFSU2_TR(0x5d1bf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1bf6:{NFSU2_TR(0x5d1bf6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1bf8:{NFSU2_TR(0x5d1bf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1bf9:{NFSU2_TR(0x5d1bf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1bfcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1bfc:L5d1bfc:{c.instructions+=8;NFSU2_TR(0x5d1bfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d1c00:{NFSU2_TR(0x5d1c00);
__builtin_memmove((R+28),(R+0),4);
}
B5d1c02:{NFSU2_TR(0x5d1c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1c05:{NFSU2_TR(0x5d1c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1c07:{NFSU2_TR(0x5d1c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c08:{NFSU2_TR(0x5d1c08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c09:{NFSU2_TR(0x5d1c09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c0a:{NFSU2_TR(0x5d1c0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1c0d:L5d1c0d:{c.instructions+=3;NFSU2_TR(0x5d1c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1c11:{NFSU2_TR(0x5d1c11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1c13:{NFSU2_TR(0x5d1c13);
if(r1(R+518)){{goto L5d1c28;}}
}
B5d1c15:L5d1c15:{c.instructions+=3;NFSU2_TR(0x5d1c15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c16:{NFSU2_TR(0x5d1c16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c17:{NFSU2_TR(0x5d1c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c1cull));
TAIL_STATIC(0x43db50u,43d);
}
B5d1c1c:L5d1c1c:{c.instructions+=4;NFSU2_TR(0x5d1c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1c1f:{NFSU2_TR(0x5d1c1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d1c22:{NFSU2_TR(0x5d1c22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c23:{NFSU2_TR(0x5d1c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1b70u);}goto L5d1b70;}
}
B5d1c28:L5d1c28:{c.instructions+=4;NFSU2_TR(0x5d1c28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1c2c:{NFSU2_TR(0x5d1c2c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5d1c2d:{NFSU2_TR(0x5d1c2d);
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
B5d1c2f:{NFSU2_TR(0x5d1c2f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1bf0u);}goto L5d1bf0;}}
}
B5d1c31:L5d1c31:{c.instructions+=1;NFSU2_TR(0x5d1c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1c32:L5d1c32:{c.instructions+=4;NFSU2_TR(0x5d1c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1c33:{NFSU2_TR(0x5d1c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d1c34:{NFSU2_TR(0x5d1c34);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1c37:{NFSU2_TR(0x5d1c37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1c40:L5d1c40:{c.instructions+=4;NFSU2_TR(0x5d1c40);
if(mod_hook_table[9]&&!mod_bypass_take(9)){SPILL();c.pc=0x5d1c40u;mod_hook_table[9](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+4u);TAIL_DYNAMIC(ra_);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d1c43:{NFSU2_TR(0x5d1c43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c44:{NFSU2_TR(0x5d1c44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c45:{NFSU2_TR(0x5d1c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c4aull));
TAIL_STATIC(0x5be200u,5be);
}
B5d1c4a:L5d1c4a:{c.instructions+=2;NFSU2_TR(0x5d1c4a);
w4(R+24,u32(0x86eb28ull));
}
B5d1c4f:{NFSU2_TR(0x5d1c4f);
}
B5d1c50:L5d1c50:{c.instructions+=5;NFSU2_TR(0x5d1c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d1c52:{NFSU2_TR(0x5d1c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1c55:{NFSU2_TR(0x5d1c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1c57:{NFSU2_TR(0x5d1c57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c58:{NFSU2_TR(0x5d1c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1c5e:L5d1c5e:{c.instructions+=3;NFSU2_TR(0x5d1c5e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d1c61:{NFSU2_TR(0x5d1c61);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x86eb84ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86eb84ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86eb84ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1c67:{NFSU2_TR(0x5d1c67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1c50u);}goto L5d1c50;}}
}
B5d1c69:L5d1c69:{c.instructions+=1;NFSU2_TR(0x5d1c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c6eull));
TAIL_STATIC(0x5ba610u,5ba);
}
B5d1c6e:L5d1c6e:{c.instructions+=1;NFSU2_TR(0x5d1c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c73ull));
TAIL_STATIC(0x5bbcd0u,5bb);
}
B5d1c73:L5d1c73:{c.instructions+=3;NFSU2_TR(0x5d1c73);
__builtin_memmove((R+0),gp(0x86b7c4),1);
}
B5d1c78:{NFSU2_TR(0x5d1c78);
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
B5d1c7a:{NFSU2_TR(0x5d1c7a);
if(r1(R+518)){{goto L5d1c92;}}
}
B5d1c7c:L5d1c7c:{c.instructions+=3;NFSU2_TR(0x5d1c7c);
__builtin_memmove((R+0),gp(0x86b7a4),4);
}
B5d1c81:{NFSU2_TR(0x5d1c81);
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
B5d1c83:{NFSU2_TR(0x5d1c83);
if(r1(R+518)){{goto L5d1c92;}}
}
B5d1c85:L5d1c85:{c.instructions+=3;NFSU2_TR(0x5d1c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1c87:{NFSU2_TR(0x5d1c87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1c88:{NFSU2_TR(0x5d1c88);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1c8b:L5d1c8b:{c.instructions+=1;NFSU2_TR(0x5d1c8b);
s1(0x86b7c4,u8(0x0ull));
}
B5d1c92:L5d1c92:{c.instructions+=2;NFSU2_TR(0x5d1c92);
w4(R+4,u32(0x86b7a4ull));
}
B5d1c97:{NFSU2_TR(0x5d1c97);
if(mod_hook_table[2]){SPILL();c.pc=0x5d1c97u;mod_hook_table[2](c);SPILL();if(c.pc!=0x5d1c97u){TAIL_DYNAMIC(c.pc);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1c9cull));
TAIL_STATIC(0x5c57e0u,5c5);
}
B5d1c9c:L5d1c9c:{c.instructions+=3;NFSU2_TR(0x5d1c9c);
__builtin_memmove((R+0),gp(0x86b7a4),4);
}
B5d1ca1:{NFSU2_TR(0x5d1ca1);
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
B5d1ca3:{NFSU2_TR(0x5d1ca3);
if(r1(R+518)){{goto L5d1cab;}}
}
B5d1ca5:L5d1ca5:{c.instructions+=3;NFSU2_TR(0x5d1ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1ca7:{NFSU2_TR(0x5d1ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1ca8:{NFSU2_TR(0x5d1ca8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1cabull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1cab:L5d1cab:{c.instructions+=5;NFSU2_TR(0x5d1cab);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d1cb0:{NFSU2_TR(0x5d1cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1cb2:{NFSU2_TR(0x5d1cb2);
u8 U[4];
w4(U+0,u32(0x86f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1cb7:{NFSU2_TR(0x5d1cb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1cb8:{NFSU2_TR(0x5d1cb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1cbbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1cbb:L5d1cbb:{c.instructions+=5;NFSU2_TR(0x5d1cbb);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d1cc0:{NFSU2_TR(0x5d1cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1cc2:{NFSU2_TR(0x5d1cc2);
u8 U[4];
w4(U+0,u32(0x86f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1cc7:{NFSU2_TR(0x5d1cc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1cc8:{NFSU2_TR(0x5d1cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1ccbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1ccb:L5d1ccb:{c.instructions+=3;NFSU2_TR(0x5d1ccb);
__builtin_memmove((R+24),(R+0),4);
}
B5d1ccd:{NFSU2_TR(0x5d1ccd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1ccf:{NFSU2_TR(0x5d1ccf);
if(r1(R+518)){{goto L5d1db5;}}
}
B5d1cd5:L5d1cd5:{c.instructions+=3;NFSU2_TR(0x5d1cd5);
__builtin_memmove((R+0),gp(0x870d08),4);
}
B5d1cda:{NFSU2_TR(0x5d1cda);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1cdc:{NFSU2_TR(0x5d1cdc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d1ce8;}}
}
B5d1cde:L5d1cde:{c.instructions+=1;NFSU2_TR(0x5d1cde);
s4(0x870d08,u32(0x0ull));
}
B5d1ce8:L5d1ce8:{c.instructions+=6;NFSU2_TR(0x5d1ce8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1cec:{NFSU2_TR(0x5d1cec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1ced:{NFSU2_TR(0x5d1ced);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d1cf1:{NFSU2_TR(0x5d1cf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1cf2:{NFSU2_TR(0x5d1cf2);
w4(R+4,u32(0x8718b0ull));
}
B5d1cf7:{NFSU2_TR(0x5d1cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1cfcull));
TAIL_STATIC(0x5bf610u,5bf);
}
B5d1cfc:L5d1cfc:{c.instructions+=5;NFSU2_TR(0x5d1cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1d00:{NFSU2_TR(0x5d1d00);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1d04:{NFSU2_TR(0x5d1d04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d05:{NFSU2_TR(0x5d1d05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d06:{NFSU2_TR(0x5d1d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1d0bull));
TAIL_STATIC(0x5b9a60u,5b9);
}
B5d1d0b:L5d1d0b:{c.instructions+=2;NFSU2_TR(0x5d1d0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d1d0e:{NFSU2_TR(0x5d1d0e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1d10:L5d1d10:{c.instructions+=5;NFSU2_TR(0x5d1d10);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d1d15:{NFSU2_TR(0x5d1d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1d17:{NFSU2_TR(0x5d1d17);
u8 U[4];
w4(U+0,u32(0x86f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d1c:{NFSU2_TR(0x5d1d1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d1d:{NFSU2_TR(0x5d1d1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1d20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1d20:L5d1d20:{c.instructions+=3;NFSU2_TR(0x5d1d20);
__builtin_memmove((R+24),(R+0),4);
}
B5d1d22:{NFSU2_TR(0x5d1d22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1d24:{NFSU2_TR(0x5d1d24);
if(r1(R+518)){{goto L5d1d98;}}
}
B5d1d26:L5d1d26:{c.instructions+=3;NFSU2_TR(0x5d1d26);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d1d27:{NFSU2_TR(0x5d1d27);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5d1d2a:{NFSU2_TR(0x5d1d2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1d10u);}goto L5d1d10;}}
}
B5d1d2c:L5d1d2c:{c.instructions+=3;NFSU2_TR(0x5d1d2c);
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B5d1d31:{NFSU2_TR(0x5d1d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1d33:{NFSU2_TR(0x5d1d33);
if(r1(R+518)){{goto L5d1e10;}}
}
B5d1d39:L5d1d39:{c.instructions+=1;NFSU2_TR(0x5d1d39);
__builtin_memmove((R+16),(R+16),4);
}
B5d1d40:L5d1d40:{c.instructions+=9;NFSU2_TR(0x5d1d40);
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B5d1d45:{NFSU2_TR(0x5d1d45);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d1d46:{NFSU2_TR(0x5d1d46);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1d4a:{NFSU2_TR(0x5d1d4a);
__builtin_memmove(gp(0x870d1c),(R+0),4);
}
B5d1d4f:{NFSU2_TR(0x5d1d4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d50:{NFSU2_TR(0x5d1d50);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d1d54:{NFSU2_TR(0x5d1d54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d55:{NFSU2_TR(0x5d1d55);
w4(R+4,u32(0x8718b0ull));
}
B5d1d5a:{NFSU2_TR(0x5d1d5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1d5full));
TAIL_STATIC(0x5bf610u,5bf);
}
B5d1d5f:L5d1d5f:{c.instructions+=5;NFSU2_TR(0x5d1d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1d63:{NFSU2_TR(0x5d1d63);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1d67:{NFSU2_TR(0x5d1d67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d68:{NFSU2_TR(0x5d1d68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d69:{NFSU2_TR(0x5d1d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1d6eull));
TAIL_STATIC(0x5b9a60u,5b9);
}
B5d1d6e:L5d1d6e:{c.instructions+=6;NFSU2_TR(0x5d1d6e);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d1d73:{NFSU2_TR(0x5d1d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1d75:{NFSU2_TR(0x5d1d75);
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
B5d1d78:{NFSU2_TR(0x5d1d78);
u8 U[4];
w4(U+0,u32(0x86f870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d7d:{NFSU2_TR(0x5d1d7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d7e:{NFSU2_TR(0x5d1d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1d81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1d81:L5d1d81:{c.instructions+=3;NFSU2_TR(0x5d1d81);
__builtin_memmove((R+24),(R+0),4);
}
B5d1d83:{NFSU2_TR(0x5d1d83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1d85:{NFSU2_TR(0x5d1d85);
if(r1(R+518)){{goto L5d1d98;}}
}
B5d1d87:L5d1d87:{c.instructions+=3;NFSU2_TR(0x5d1d87);
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B5d1d8c:{NFSU2_TR(0x5d1d8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1d8e:{NFSU2_TR(0x5d1d8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1d40u);}goto L5d1d40;}}
}
B5d1d90:L5d1d90:{c.instructions+=5;NFSU2_TR(0x5d1d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1d91:{NFSU2_TR(0x5d1d91);
__builtin_memmove((R+0),(R+24),4);
}
B5d1d93:{NFSU2_TR(0x5d1d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1d94:{NFSU2_TR(0x5d1d94);
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
B5d1d97:{NFSU2_TR(0x5d1d97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1d98:L5d1d98:{c.instructions+=3;NFSU2_TR(0x5d1d98);
u8 U[4];
w4(U+0,u32(0x78fa50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1d9d:{NFSU2_TR(0x5d1d9d);
u8 U[4];
w4(U+0,u32(0xaf0bbd92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1da2:{NFSU2_TR(0x5d1da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1da7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5d1da7:L5d1da7:{c.instructions+=3;NFSU2_TR(0x5d1da7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d1daa:{NFSU2_TR(0x5d1daa);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1dac:{NFSU2_TR(0x5d1dac);
if(r1(R+518)){{goto L5d1db5;}}
}
B5d1dae:L5d1dae:{c.instructions+=2;NFSU2_TR(0x5d1dae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1db0:{NFSU2_TR(0x5d1db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1db5ull));
TAIL_STATIC(0x75d593u,75d);
}
B5d1db5:L5d1db5:{c.instructions+=1;NFSU2_TR(0x5d1db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1dbaull));
TAIL_STATIC(0x5ba780u,5ba);
}
B5d1dba:L5d1dba:{c.instructions+=1;NFSU2_TR(0x5d1dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1dbfull));
TAIL_STATIC(0x5b9910u,5b9);
}
B5d1dbf:L5d1dbf:{c.instructions+=8;NFSU2_TR(0x5d1dbf);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1dc3:{NFSU2_TR(0x5d1dc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1dc4:{NFSU2_TR(0x5d1dc4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d1dc8:{NFSU2_TR(0x5d1dc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1dc9:{NFSU2_TR(0x5d1dc9);
w4(R+4,u32(0x86b7a4ull));
}
B5d1dce:{NFSU2_TR(0x5d1dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d1dd6:{NFSU2_TR(0x5d1dd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d1dde:{NFSU2_TR(0x5d1dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1de3ull));
TAIL_STATIC(0x5bb220u,5bb);
}
B5d1de3:L5d1de3:{c.instructions+=1;NFSU2_TR(0x5d1de3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1de8ull));
TAIL_STATIC(0x5c2430u,5c2);
}
B5d1de8:L5d1de8:{c.instructions+=2;NFSU2_TR(0x5d1de8);
w4(R+28,u32(0x86eb28ull));
}
B5d1ded:{NFSU2_TR(0x5d1ded);
__builtin_memmove((R+4),(R+4),4);
}
B5d1df0:L5d1df0:{c.instructions+=5;NFSU2_TR(0x5d1df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1df2:{NFSU2_TR(0x5d1df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1df5:{NFSU2_TR(0x5d1df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1df7:{NFSU2_TR(0x5d1df7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1df8:{NFSU2_TR(0x5d1df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1dfeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1dfe:L5d1dfe:{c.instructions+=2;NFSU2_TR(0x5d1dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1e00:{NFSU2_TR(0x5d1e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1e05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1bd0u);}goto L5d1bd0;}
}
B5d1e05:L5d1e05:{c.instructions+=3;NFSU2_TR(0x5d1e05);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d1e08:{NFSU2_TR(0x5d1e08);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x86eb84ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86eb84ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86eb84ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1e0e:{NFSU2_TR(0x5d1e0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1df0u);}goto L5d1df0;}}
}
B5d1e10:L5d1e10:{c.instructions+=5;NFSU2_TR(0x5d1e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1e11:{NFSU2_TR(0x5d1e11);
__builtin_memmove((R+0),(R+24),4);
}
B5d1e13:{NFSU2_TR(0x5d1e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d1e14:{NFSU2_TR(0x5d1e14);
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
B5d1e17:{NFSU2_TR(0x5d1e17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d1e20:L5d1e20:{c.instructions+=11;NFSU2_TR(0x5d1e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B5d1e26:{NFSU2_TR(0x5d1e26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1e27:{NFSU2_TR(0x5d1e27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1e28:{NFSU2_TR(0x5d1e28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1e29:{NFSU2_TR(0x5d1e29);
__builtin_memmove((R+24),(R+4),4);
}
B5d1e2b:{NFSU2_TR(0x5d1e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1e2e:{NFSU2_TR(0x5d1e2e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d1e30:{NFSU2_TR(0x5d1e30);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d1e32:{NFSU2_TR(0x5d1e32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1e33:{NFSU2_TR(0x5d1e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e37:{NFSU2_TR(0x5d1e37);
if(r1(R+518)){{goto L5d1e42;}}
}
B5d1e39:L5d1e39:{c.instructions+=3;NFSU2_TR(0x5d1e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1e3b:{NFSU2_TR(0x5d1e3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1e3c:{NFSU2_TR(0x5d1e3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1e3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1e3f:L5d1e3f:{c.instructions+=1;NFSU2_TR(0x5d1e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e42:L5d1e42:{c.instructions+=8;NFSU2_TR(0x5d1e42);
__builtin_memmove((R+8),gp(0x86c54c),4);
}
B5d1e48:{NFSU2_TR(0x5d1e48);
__builtin_memmove((R+0),gp(0x86c548),4);
}
B5d1e4d:{NFSU2_TR(0x5d1e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d1e54:{NFSU2_TR(0x5d1e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1e57:{NFSU2_TR(0x5d1e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e5b:{NFSU2_TR(0x5d1e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e5f:{NFSU2_TR(0x5d1e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e62:{NFSU2_TR(0x5d1e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1e67ull));
TAIL_STATIC(0x5d0f20u,5d0);
}
B5d1e67:L5d1e67:{c.instructions+=7;NFSU2_TR(0x5d1e67);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x8cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5d1e6d:{NFSU2_TR(0x5d1e6d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7ff7d0ull))));
}
B5d1e73:{NFSU2_TR(0x5d1e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1e75:{NFSU2_TR(0x5d1e75);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d1e77:{NFSU2_TR(0x5d1e77);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d1e79:{NFSU2_TR(0x5d1e79);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1e7c:{NFSU2_TR(0x5d1e7c);
if(r1(R+518)){{goto L5d1efe;}}
}
B5d1e82:L5d1e82:{c.instructions+=9;NFSU2_TR(0x5d1e82);
__builtin_memmove((R+24),(R+8),4);
}
B5d1e84:{NFSU2_TR(0x5d1e84);
__builtin_memmove((R+8),(R+28),4);
}
B5d1e86:{NFSU2_TR(0x5d1e86);
u8 U[4];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5d1e8a:{NFSU2_TR(0x5d1e8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d1e8c:{NFSU2_TR(0x5d1e8c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B5d1e8e:{NFSU2_TR(0x5d1e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e92:{NFSU2_TR(0x5d1e92);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1e96:{NFSU2_TR(0x5d1e96);
__builtin_memmove((R+8),(R+28),4);
}
B5d1e98:{NFSU2_TR(0x5d1e98);
{goto L5d1ea0;}
}
B5d1ea0:L5d1ea0:{c.instructions+=20;NFSU2_TR(0x5d1ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1ea3:{NFSU2_TR(0x5d1ea3);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x800494ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5d1eaa:{NFSU2_TR(0x5d1eaa);
u8 U[13];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d1eae:{NFSU2_TR(0x5d1eae);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8004b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5d1eb5:{NFSU2_TR(0x5d1eb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8004d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d1ebb:{NFSU2_TR(0x5d1ebb);
u8 U[13];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d1ebf:{NFSU2_TR(0x5d1ebf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8004e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5d1ec6:{NFSU2_TR(0x5d1ec6);
u8 U[14];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5d1ecb:{NFSU2_TR(0x5d1ecb);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B5d1ecd:{NFSU2_TR(0x5d1ecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1ed1:{NFSU2_TR(0x5d1ed1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d1ed2:{NFSU2_TR(0x5d1ed2);
u8 U[14];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0x0ull));
s2(u32(r4(U+8)),r2(U+12));
}
B5d1ed9:{NFSU2_TR(0x5d1ed9);
u8 U[13];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5d1ede:{NFSU2_TR(0x5d1ede);
u8 U[13];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d1ee2:{NFSU2_TR(0x5d1ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d1ee9:{NFSU2_TR(0x5d1ee9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d1eeb:{NFSU2_TR(0x5d1eeb);
u8 U[16];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5d1eef:{NFSU2_TR(0x5d1eef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d1ef2:{NFSU2_TR(0x5d1ef2);
u8 U[12];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d1ef6:{NFSU2_TR(0x5d1ef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1ea0u);}goto L5d1ea0;}}
}
B5d1ef8:L5d1ef8:{c.instructions+=2;NFSU2_TR(0x5d1ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d1efc:{NFSU2_TR(0x5d1efc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d1efe:L5d1efe:{c.instructions+=14;NFSU2_TR(0x5d1efe);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d1f03:{NFSU2_TR(0x5d1f03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1f06:{NFSU2_TR(0x5d1f06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f07:{NFSU2_TR(0x5d1f07);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d1f0b:{NFSU2_TR(0x5d1f0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f0c:{NFSU2_TR(0x5d1f0c);
u8 U[14];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0xffull));
s2(u32(r4(U+8)),r2(U+12));
}
B5d1f13:{NFSU2_TR(0x5d1f13);
u8 U[14];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5d1f18:{NFSU2_TR(0x5d1f18);
u8 U[13];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x11ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5d1f1d:{NFSU2_TR(0x5d1f1d);
u8 U[13];
w4(U+0,u32(u32(u32(0x3dull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d1f21:{NFSU2_TR(0x5d1f21);
u8 U[13];
w4(U+0,u32(u32(u32(0x3eull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d1f25:{NFSU2_TR(0x5d1f25);
u8 U[13];
w4(U+0,u32(u32(u32(0x3full))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d1f29:{NFSU2_TR(0x5d1f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1f2b:{NFSU2_TR(0x5d1f2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f2c:{NFSU2_TR(0x5d1f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1f32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1f32:L5d1f32:{c.instructions+=16;NFSU2_TR(0x5d1f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1f35:{NFSU2_TR(0x5d1f35);
__builtin_memmove((R+4),gp(0x870914),4);
}
B5d1f3b:{NFSU2_TR(0x5d1f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d1f41:{NFSU2_TR(0x5d1f41);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d1f45:{NFSU2_TR(0x5d1f45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f46:{NFSU2_TR(0x5d1f46);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5d1f4b:{NFSU2_TR(0x5d1f4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d1f4e:{NFSU2_TR(0x5d1f4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f4f:{NFSU2_TR(0x5d1f4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f50:{NFSU2_TR(0x5d1f50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f51:{NFSU2_TR(0x5d1f51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f52:{NFSU2_TR(0x5d1f52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f53:{NFSU2_TR(0x5d1f53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f54:{NFSU2_TR(0x5d1f54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f55:{NFSU2_TR(0x5d1f55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f56:{NFSU2_TR(0x5d1f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1f5bull));
TAIL_STATIC(0x640c02u,640);
}
B5d1f5b:L5d1f5b:{c.instructions+=2;NFSU2_TR(0x5d1f5b);
__builtin_memmove((R+4),(R+24),4);
}
B5d1f5d:{NFSU2_TR(0x5d1f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1f62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d1bd0u);}goto L5d1bd0;}
}
B5d1f62:L5d1f62:{c.instructions+=6;NFSU2_TR(0x5d1f62);
__builtin_memmove((R+0),gp(0x800bf4),4);
}
B5d1f67:{NFSU2_TR(0x5d1f67);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d1f69:{NFSU2_TR(0x5d1f69);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d1f6b:{NFSU2_TR(0x5d1f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1f6e:{NFSU2_TR(0x5d1f6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1f72:{NFSU2_TR(0x5d1f72);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5d219bu,5d2);}
}
B5d1f78:L5d1f78:{c.instructions+=5;NFSU2_TR(0x5d1f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d1f7b:{NFSU2_TR(0x5d1f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1f7d:{NFSU2_TR(0x5d1f7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f7e:{NFSU2_TR(0x5d1f7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f7f:{NFSU2_TR(0x5d1f7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1f82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1f82:L5d1f82:{c.instructions+=4;NFSU2_TR(0x5d1f82);
__builtin_memmove((R+4),(R+0),4);
}
B5d1f84:{NFSU2_TR(0x5d1f84);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d1f86:{NFSU2_TR(0x5d1f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1f8a:{NFSU2_TR(0x5d1f8a);
if(r1(R+518)){TAIL_STATIC(0x5d2166u,5d2);}
}
B5d1f90:L5d1f90:{c.instructions+=6;NFSU2_TR(0x5d1f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d1f93:{NFSU2_TR(0x5d1f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1f95:{NFSU2_TR(0x5d1f95);
u8 U[4];
w4(U+0,u32(0x7a4584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f9a:{NFSU2_TR(0x5d1f9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f9b:{NFSU2_TR(0x5d1f9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1f9c:{NFSU2_TR(0x5d1f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1f9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1f9f:L5d1f9f:{c.instructions+=3;NFSU2_TR(0x5d1f9f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d1fa1:{NFSU2_TR(0x5d1fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d1fa5:{NFSU2_TR(0x5d1fa5);
if(r1(R+518)){{goto L5d1fba;}}
}
B5d1fa7:L5d1fa7:{c.instructions+=7;NFSU2_TR(0x5d1fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d1faa:{NFSU2_TR(0x5d1faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d1fac:{NFSU2_TR(0x5d1fac);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5d1fb0:{NFSU2_TR(0x5d1fb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1fb1:{NFSU2_TR(0x5d1fb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1fb2:{NFSU2_TR(0x5d1fb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d1fb3:{NFSU2_TR(0x5d1fb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d1fb6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d1fb6:L5d1fb6:{c.instructions+=1;NFSU2_TR(0x5d1fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d1fba:L5d1fba:{c.instructions+=2;NFSU2_TR(0x5d1fba);
u8 U[8];
__builtin_memmove((U+0),gp(0x870908),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d1fc0:{NFSU2_TR(0x5d1fc0);
if(r1(R+518)){{goto L5d1fcd;}}
}
B5d1fc2:L5d1fc2:{c.instructions+=2;NFSU2_TR(0x5d1fc2);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d1fc7:{NFSU2_TR(0x5d1fc7);
if(r1(R+518)){TAIL_STATIC(0x5d2166u,5d2);}
}
B5d1fcd:L5d1fcd:{c.instructions+=3;NFSU2_TR(0x5d1fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d1fd4:{NFSU2_TR(0x5d1fd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d1fd7:{NFSU2_TR(0x5d1fd7);
if(r1(R+518)){{goto L5d1fde;}}
}
B5d1fd9:L5d1fd9:{c.instructions+=2;NFSU2_TR(0x5d1fd9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d1fdc:{NFSU2_TR(0x5d1fdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5d2010u,5d2);}
}
B5d1fde:L5d1fde:{c.instructions+=3;NFSU2_TR(0x5d1fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d1fe2:{NFSU2_TR(0x5d1fe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1039ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1fe7:{NFSU2_TR(0x5d1fe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d1ff4;}}
}
B5d1fe9:L5d1fe9:{c.instructions+=2;NFSU2_TR(0x5d1fe9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d1fec:{NFSU2_TR(0x5d1fec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5d2166u,5d2);}
}
B5d1ff2:L5d1ff2:{c.instructions+=1;NFSU2_TR(0x5d1ff2);
TAIL_STATIC(0x5d2014u,5d2);
}
B5d1ff4:L5d1ff4:{c.instructions+=2;NFSU2_TR(0x5d1ff4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8086ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d1ff9:{NFSU2_TR(0x5d1ff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5d2014u,5d2);}
}
B5d1ffb:L5d1ffb:{c.instructions+=1;NFSU2_TR(0x5d1ffb);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2572ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x5d2003u,5d2);
}
XIT:NFSU2_TR_EXIT(0x5d1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
