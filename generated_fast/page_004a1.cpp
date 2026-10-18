#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 page_4a1(Cpu& c){return body_4a1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a1003:goto L4a1003;
case 0x4a1004:c.instructions+=1;goto B4a1004;
case 0x4a1009:goto L4a1009;
case 0x4a100c:c.instructions+=2;goto B4a100c;
case 0x4a100e:c.instructions+=1;goto B4a100e;
case 0x4a1010:goto L4a1010;
case 0x4a1015:goto L4a1015;
case 0x4a101b:c.instructions+=5;goto B4a101b;
case 0x4a1021:c.instructions+=4;goto B4a1021;
case 0x4a1023:c.instructions+=3;goto B4a1023;
case 0x4a1024:c.instructions+=2;goto B4a1024;
case 0x4a1025:c.instructions+=1;goto B4a1025;
case 0x4a102a:goto L4a102a;
case 0x4a102d:c.instructions+=2;goto B4a102d;
case 0x4a102f:c.instructions+=1;goto B4a102f;
case 0x4a1031:goto L4a1031;
case 0x4a1037:c.instructions+=5;goto B4a1037;
case 0x4a1038:c.instructions+=4;goto B4a1038;
case 0x4a103c:c.instructions+=3;goto B4a103c;
case 0x4a103d:c.instructions+=2;goto B4a103d;
case 0x4a103f:c.instructions+=1;goto B4a103f;
case 0x4a1044:goto L4a1044;
case 0x4a1046:c.instructions+=2;goto B4a1046;
case 0x4a104b:c.instructions+=1;goto B4a104b;
case 0x4a1050:goto L4a1050;
case 0x4a1052:goto L4a1052;
case 0x4a1058:c.instructions+=3;goto B4a1058;
case 0x4a1059:c.instructions+=2;goto B4a1059;
case 0x4a105e:c.instructions+=1;goto B4a105e;
case 0x4a1063:goto L4a1063;
case 0x4a1066:c.instructions+=6;goto B4a1066;
case 0x4a1069:c.instructions+=5;goto B4a1069;
case 0x4a106b:c.instructions+=4;goto B4a106b;
case 0x4a1070:c.instructions+=3;goto B4a1070;
case 0x4a1071:c.instructions+=2;goto B4a1071;
case 0x4a1076:c.instructions+=1;goto B4a1076;
case 0x4a107b:goto L4a107b;
case 0x4a107e:c.instructions+=5;goto B4a107e;
case 0x4a107f:c.instructions+=4;goto B4a107f;
case 0x4a1080:c.instructions+=3;goto B4a1080;
case 0x4a1081:c.instructions+=2;goto B4a1081;
case 0x4a1087:c.instructions+=1;goto B4a1087;
case 0x4a108a:goto L4a108a;
case 0x4a108b:c.instructions+=3;goto B4a108b;
case 0x4a108e:c.instructions+=2;goto B4a108e;
case 0x4a108f:c.instructions+=1;goto B4a108f;
case 0x4a1094:goto L4a1094;
case 0x4a1097:c.instructions+=5;goto B4a1097;
case 0x4a1098:c.instructions+=4;goto B4a1098;
case 0x4a1099:c.instructions+=3;goto B4a1099;
case 0x4a109a:c.instructions+=2;goto B4a109a;
case 0x4a10a0:c.instructions+=1;goto B4a10a0;
case 0x4a10b0:goto L4a10b0;
case 0x4a10b1:c.instructions+=10;goto B4a10b1;
case 0x4a10b3:c.instructions+=9;goto B4a10b3;
case 0x4a10b6:c.instructions+=8;goto B4a10b6;
case 0x4a10bc:c.instructions+=7;goto B4a10bc;
case 0x4a10bd:c.instructions+=6;goto B4a10bd;
case 0x4a10bf:c.instructions+=5;goto B4a10bf;
case 0x4a10c5:c.instructions+=4;goto B4a10c5;
case 0x4a10c8:c.instructions+=3;goto B4a10c8;
case 0x4a10c9:c.instructions+=2;goto B4a10c9;
case 0x4a10ca:c.instructions+=1;goto B4a10ca;
case 0x4a10d0:goto L4a10d0;
case 0x4a10d7:goto L4a10d7;
case 0x4a10dd:c.instructions+=2;goto B4a10dd;
case 0x4a10e0:c.instructions+=1;goto B4a10e0;
case 0x4a10e6:goto L4a10e6;
case 0x4a10f0:goto L4a10f0;
case 0x4a10f6:c.instructions+=2;goto B4a10f6;
case 0x4a10f7:c.instructions+=1;goto B4a10f7;
case 0x4a10fc:goto L4a10fc;
case 0x4a10fe:c.instructions+=1;goto B4a10fe;
case 0x4a1103:goto L4a1103;
case 0x4a1104:c.instructions+=3;goto B4a1104;
case 0x4a110b:c.instructions+=2;goto B4a110b;
case 0x4a110c:c.instructions+=1;goto B4a110c;
case 0x4a1111:goto L4a1111;
case 0x4a1113:c.instructions+=2;goto B4a1113;
case 0x4a1118:c.instructions+=1;goto B4a1118;
case 0x4a111c:goto L4a111c;
case 0x4a111e:goto L4a111e;
case 0x4a1124:c.instructions+=6;goto B4a1124;
case 0x4a1128:c.instructions+=5;goto B4a1128;
case 0x4a112b:c.instructions+=4;goto B4a112b;
case 0x4a112c:c.instructions+=3;goto B4a112c;
case 0x4a112e:c.instructions+=2;goto B4a112e;
case 0x4a1134:c.instructions+=1;goto B4a1134;
case 0x4a1136:goto L4a1136;
case 0x4a113a:c.instructions+=2;goto B4a113a;
case 0x4a113c:c.instructions+=1;goto B4a113c;
case 0x4a1142:goto L4a1142;
case 0x4a1148:c.instructions+=2;goto B4a1148;
case 0x4a114b:c.instructions+=1;goto B4a114b;
case 0x4a114d:goto L4a114d;
case 0x4a1152:goto L4a1152;
case 0x4a1158:c.instructions+=2;goto B4a1158;
case 0x4a115b:c.instructions+=1;goto B4a115b;
case 0x4a1161:goto L4a1161;
case 0x4a1162:c.instructions+=4;goto B4a1162;
case 0x4a1169:c.instructions+=3;goto B4a1169;
case 0x4a116a:c.instructions+=2;goto B4a116a;
case 0x4a116c:c.instructions+=1;goto B4a116c;
case 0x4a1171:goto L4a1171;
case 0x4a1173:c.instructions+=4;goto B4a1173;
case 0x4a1179:c.instructions+=3;goto B4a1179;
case 0x4a117e:c.instructions+=2;goto B4a117e;
case 0x4a1182:c.instructions+=1;goto B4a1182;
case 0x4a1183:goto L4a1183;
case 0x4a1185:goto L4a1185;
case 0x4a118b:c.instructions+=1;goto B4a118b;
case 0x4a1190:goto L4a1190;
case 0x4a1196:c.instructions+=2;goto B4a1196;
case 0x4a1199:c.instructions+=1;goto B4a1199;
case 0x4a119f:goto L4a119f;
case 0x4a11a0:goto L4a11a0;
case 0x4a11a6:c.instructions+=2;goto B4a11a6;
case 0x4a11a7:c.instructions+=1;goto B4a11a7;
case 0x4a11ac:goto L4a11ac;
case 0x4a11ae:c.instructions+=1;goto B4a11ae;
case 0x4a11b3:goto L4a11b3;
case 0x4a11b4:c.instructions+=3;goto B4a11b4;
case 0x4a11bb:c.instructions+=2;goto B4a11bb;
case 0x4a11bc:c.instructions+=1;goto B4a11bc;
case 0x4a11c1:goto L4a11c1;
case 0x4a11c3:c.instructions+=2;goto B4a11c3;
case 0x4a11c8:c.instructions+=1;goto B4a11c8;
case 0x4a11cc:goto L4a11cc;
case 0x4a11ce:goto L4a11ce;
case 0x4a11d4:c.instructions+=6;goto B4a11d4;
case 0x4a11d8:c.instructions+=5;goto B4a11d8;
case 0x4a11db:c.instructions+=4;goto B4a11db;
case 0x4a11dc:c.instructions+=3;goto B4a11dc;
case 0x4a11de:c.instructions+=2;goto B4a11de;
case 0x4a11e4:c.instructions+=1;goto B4a11e4;
case 0x4a11ea:goto L4a11ea;
case 0x4a11ec:c.instructions+=2;goto B4a11ec;
case 0x4a11ef:c.instructions+=1;goto B4a11ef;
case 0x4a11f1:goto L4a11f1;
case 0x4a11f6:goto L4a11f6;
case 0x4a11fc:c.instructions+=2;goto B4a11fc;
case 0x4a11ff:c.instructions+=1;goto B4a11ff;
case 0x4a1205:goto L4a1205;
case 0x4a1210:goto L4a1210;
case 0x4a1216:c.instructions+=2;goto B4a1216;
case 0x4a1217:c.instructions+=1;goto B4a1217;
case 0x4a121c:goto L4a121c;
case 0x4a121e:c.instructions+=1;goto B4a121e;
case 0x4a1223:goto L4a1223;
case 0x4a1224:c.instructions+=3;goto B4a1224;
case 0x4a122b:c.instructions+=2;goto B4a122b;
case 0x4a122c:c.instructions+=1;goto B4a122c;
case 0x4a1231:goto L4a1231;
case 0x4a1233:c.instructions+=2;goto B4a1233;
case 0x4a1238:c.instructions+=1;goto B4a1238;
case 0x4a123c:goto L4a123c;
case 0x4a123e:goto L4a123e;
case 0x4a1244:c.instructions+=6;goto B4a1244;
case 0x4a1248:c.instructions+=5;goto B4a1248;
case 0x4a124b:c.instructions+=4;goto B4a124b;
case 0x4a124c:c.instructions+=3;goto B4a124c;
case 0x4a124e:c.instructions+=2;goto B4a124e;
case 0x4a1254:c.instructions+=1;goto B4a1254;
case 0x4a1256:goto L4a1256;
case 0x4a125a:c.instructions+=2;goto B4a125a;
case 0x4a125c:c.instructions+=1;goto B4a125c;
case 0x4a125e:goto L4a125e;
case 0x4a1260:c.instructions+=2;goto B4a1260;
case 0x4a1263:c.instructions+=1;goto B4a1263;
case 0x4a1265:goto L4a1265;
case 0x4a1267:goto L4a1267;
case 0x4a126d:c.instructions+=2;goto B4a126d;
case 0x4a1270:c.instructions+=1;goto B4a1270;
case 0x4a1272:goto L4a1272;
case 0x4a1278:c.instructions+=2;goto B4a1278;
case 0x4a1279:c.instructions+=1;goto B4a1279;
case 0x4a127e:goto L4a127e;
case 0x4a1280:c.instructions+=1;goto B4a1280;
case 0x4a1285:goto L4a1285;
case 0x4a1286:c.instructions+=3;goto B4a1286;
case 0x4a128d:c.instructions+=2;goto B4a128d;
case 0x4a128e:c.instructions+=1;goto B4a128e;
case 0x4a1293:goto L4a1293;
case 0x4a1295:c.instructions+=2;goto B4a1295;
case 0x4a129a:c.instructions+=1;goto B4a129a;
case 0x4a129e:goto L4a129e;
case 0x4a12a0:goto L4a12a0;
case 0x4a12a6:c.instructions+=6;goto B4a12a6;
case 0x4a12aa:c.instructions+=5;goto B4a12aa;
case 0x4a12ad:c.instructions+=4;goto B4a12ad;
case 0x4a12ae:c.instructions+=3;goto B4a12ae;
case 0x4a12b0:c.instructions+=2;goto B4a12b0;
case 0x4a12b6:c.instructions+=1;goto B4a12b6;
case 0x4a12b8:goto L4a12b8;
case 0x4a12ba:c.instructions+=2;goto B4a12ba;
case 0x4a12bd:c.instructions+=1;goto B4a12bd;
case 0x4a12bf:goto L4a12bf;
case 0x4a12c7:goto L4a12c7;
case 0x4a12ca:c.instructions+=3;goto B4a12ca;
case 0x4a12ce:c.instructions+=2;goto B4a12ce;
case 0x4a12d0:c.instructions+=1;goto B4a12d0;
case 0x4a12d5:goto L4a12d5;
case 0x4a12d7:goto L4a12d7;
case 0x4a12d8:c.instructions+=5;goto B4a12d8;
case 0x4a12d9:c.instructions+=4;goto B4a12d9;
case 0x4a12da:c.instructions+=3;goto B4a12da;
case 0x4a12dc:c.instructions+=2;goto B4a12dc;
case 0x4a12dd:c.instructions+=1;goto B4a12dd;
case 0x4a1300:goto L4a1300;
case 0x4a1306:c.instructions+=2;goto B4a1306;
case 0x4a1309:c.instructions+=1;goto B4a1309;
case 0x4a130b:goto L4a130b;
case 0x4a130c:c.instructions+=1;goto B4a130c;
case 0x4a1313:goto L4a1313;
case 0x4a1318:c.instructions+=1;goto B4a1318;
case 0x4a131a:goto L4a131a;
case 0x4a131f:c.instructions+=1;goto B4a131f;
case 0x4a1321:goto L4a1321;
case 0x4a1326:c.instructions+=1;goto B4a1326;
case 0x4a1328:goto L4a1328;
case 0x4a132d:c.instructions+=1;goto B4a132d;
case 0x4a132f:goto L4a132f;
case 0x4a1334:goto L4a1334;
case 0x4a1337:c.instructions+=1;goto B4a1337;
case 0x4a133c:goto L4a133c;
case 0x4a133f:c.instructions+=4;goto B4a133f;
case 0x4a1340:c.instructions+=3;goto B4a1340;
case 0x4a1345:c.instructions+=2;goto B4a1345;
case 0x4a134a:c.instructions+=1;goto B4a134a;
case 0x4a134f:goto L4a134f;
case 0x4a1352:c.instructions+=3;goto B4a1352;
case 0x4a1353:c.instructions+=2;goto B4a1353;
case 0x4a1354:c.instructions+=1;goto B4a1354;
case 0x4a1359:goto L4a1359;
case 0x4a135c:c.instructions+=1;goto B4a135c;
case 0x4a135d:goto L4a135d;
case 0x4a1380:goto L4a1380;
case 0x4a1381:c.instructions+=9;goto B4a1381;
case 0x4a1385:c.instructions+=8;goto B4a1385;
case 0x4a1386:c.instructions+=7;goto B4a1386;
case 0x4a1387:c.instructions+=6;goto B4a1387;
case 0x4a1388:c.instructions+=5;goto B4a1388;
case 0x4a1389:c.instructions+=4;goto B4a1389;
case 0x4a138a:c.instructions+=3;goto B4a138a;
case 0x4a138f:c.instructions+=2;goto B4a138f;
case 0x4a1391:c.instructions+=1;goto B4a1391;
case 0x4a1396:goto L4a1396;
case 0x4a1399:c.instructions+=4;goto B4a1399;
case 0x4a139a:c.instructions+=3;goto B4a139a;
case 0x4a139f:c.instructions+=2;goto B4a139f;
case 0x4a13a1:c.instructions+=1;goto B4a13a1;
case 0x4a13a6:goto L4a13a6;
case 0x4a13a7:c.instructions+=2;goto B4a13a7;
case 0x4a13a8:c.instructions+=1;goto B4a13a8;
case 0x4a13ad:goto L4a13ad;
case 0x4a13b0:c.instructions+=3;goto B4a13b0;
case 0x4a13b1:c.instructions+=2;goto B4a13b1;
case 0x4a13b2:c.instructions+=1;goto B4a13b2;
case 0x4a13b7:goto L4a13b7;
case 0x4a13b8:c.instructions+=1;goto B4a13b8;
case 0x4a13bd:goto L4a13bd;
case 0x4a13c1:c.instructions+=3;goto B4a13c1;
case 0x4a13c4:c.instructions+=2;goto B4a13c4;
case 0x4a13c6:c.instructions+=1;goto B4a13c6;
case 0x4a13c8:goto L4a13c8;
case 0x4a13cb:c.instructions+=2;goto B4a13cb;
case 0x4a13d0:c.instructions+=1;goto B4a13d0;
case 0x4a13d5:goto L4a13d5;
case 0x4a13d8:c.instructions+=4;goto B4a13d8;
case 0x4a13d9:c.instructions+=3;goto B4a13d9;
case 0x4a13da:c.instructions+=2;goto B4a13da;
case 0x4a13db:c.instructions+=1;goto B4a13db;
case 0x4a13e0:goto L4a13e0;
case 0x4a13e3:c.instructions+=2;goto B4a13e3;
case 0x4a13e4:c.instructions+=1;goto B4a13e4;
case 0x4a13e9:goto L4a13e9;
case 0x4a13ec:c.instructions+=3;goto B4a13ec;
case 0x4a13ed:c.instructions+=2;goto B4a13ed;
case 0x4a13ee:c.instructions+=1;goto B4a13ee;
case 0x4a13f3:goto L4a13f3;
case 0x4a13f4:c.instructions+=1;goto B4a13f4;
case 0x4a13f9:goto L4a13f9;
case 0x4a13fc:goto L4a13fc;
case 0x4a1400:c.instructions+=2;goto B4a1400;
case 0x4a1402:c.instructions+=1;goto B4a1402;
case 0x4a1404:goto L4a1404;
case 0x4a1407:c.instructions+=2;goto B4a1407;
case 0x4a140c:c.instructions+=1;goto B4a140c;
case 0x4a1411:goto L4a1411;
case 0x4a1414:c.instructions+=4;goto B4a1414;
case 0x4a1415:c.instructions+=3;goto B4a1415;
case 0x4a1416:c.instructions+=2;goto B4a1416;
case 0x4a1417:c.instructions+=1;goto B4a1417;
case 0x4a141c:goto L4a141c;
case 0x4a141f:c.instructions+=2;goto B4a141f;
case 0x4a1420:c.instructions+=1;goto B4a1420;
case 0x4a1425:goto L4a1425;
case 0x4a1428:c.instructions+=3;goto B4a1428;
case 0x4a1429:c.instructions+=2;goto B4a1429;
case 0x4a142a:c.instructions+=1;goto B4a142a;
case 0x4a142f:goto L4a142f;
case 0x4a1430:c.instructions+=1;goto B4a1430;
case 0x4a1435:goto L4a1435;
case 0x4a1438:goto L4a1438;
case 0x4a1439:c.instructions+=2;goto B4a1439;
case 0x4a143e:c.instructions+=1;goto B4a143e;
case 0x4a1443:goto L4a1443;
case 0x4a1447:c.instructions+=5;goto B4a1447;
case 0x4a144a:c.instructions+=4;goto B4a144a;
case 0x4a144c:c.instructions+=3;goto B4a144c;
case 0x4a1451:c.instructions+=2;goto B4a1451;
case 0x4a1452:c.instructions+=1;goto B4a1452;
case 0x4a1454:goto L4a1454;
case 0x4a1459:c.instructions+=4;goto B4a1459;
case 0x4a145a:c.instructions+=3;goto B4a145a;
case 0x4a145d:c.instructions+=2;goto B4a145d;
case 0x4a145e:c.instructions+=1;goto B4a145e;
case 0x4a1460:goto L4a1460;
case 0x4a1463:c.instructions+=3;goto B4a1463;
case 0x4a1468:c.instructions+=2;goto B4a1468;
case 0x4a1469:c.instructions+=1;goto B4a1469;
case 0x4a146a:goto L4a146a;
case 0x4a146f:goto L4a146f;
case 0x4a1473:c.instructions+=3;goto B4a1473;
case 0x4a1476:c.instructions+=2;goto B4a1476;
case 0x4a1478:c.instructions+=1;goto B4a1478;
case 0x4a147a:goto L4a147a;
case 0x4a147d:c.instructions+=2;goto B4a147d;
case 0x4a1482:c.instructions+=1;goto B4a1482;
case 0x4a1487:goto L4a1487;
case 0x4a148a:c.instructions+=4;goto B4a148a;
case 0x4a148b:c.instructions+=3;goto B4a148b;
case 0x4a148c:c.instructions+=2;goto B4a148c;
case 0x4a148d:c.instructions+=1;goto B4a148d;
case 0x4a1492:goto L4a1492;
case 0x4a1495:c.instructions+=2;goto B4a1495;
case 0x4a1496:c.instructions+=1;goto B4a1496;
case 0x4a149b:goto L4a149b;
case 0x4a149e:c.instructions+=3;goto B4a149e;
case 0x4a149f:c.instructions+=2;goto B4a149f;
case 0x4a14a0:c.instructions+=1;goto B4a14a0;
case 0x4a14a5:goto L4a14a5;
case 0x4a14a6:c.instructions+=1;goto B4a14a6;
case 0x4a14ab:goto L4a14ab;
case 0x4a14ae:c.instructions+=1;goto B4a14ae;
case 0x4a14b4:goto L4a14b4;
case 0x4a14b8:c.instructions+=2;goto B4a14b8;
case 0x4a14ba:c.instructions+=1;goto B4a14ba;
case 0x4a14bc:goto L4a14bc;
case 0x4a14bf:c.instructions+=2;goto B4a14bf;
case 0x4a14c4:c.instructions+=1;goto B4a14c4;
case 0x4a14c9:goto L4a14c9;
case 0x4a14cc:c.instructions+=4;goto B4a14cc;
case 0x4a14cd:c.instructions+=3;goto B4a14cd;
case 0x4a14ce:c.instructions+=2;goto B4a14ce;
case 0x4a14cf:c.instructions+=1;goto B4a14cf;
case 0x4a14d4:goto L4a14d4;
case 0x4a14d7:c.instructions+=2;goto B4a14d7;
case 0x4a14d8:c.instructions+=1;goto B4a14d8;
case 0x4a14dd:goto L4a14dd;
case 0x4a14e0:c.instructions+=3;goto B4a14e0;
case 0x4a14e1:c.instructions+=2;goto B4a14e1;
case 0x4a14e2:c.instructions+=1;goto B4a14e2;
case 0x4a14e7:goto L4a14e7;
case 0x4a14e8:c.instructions+=1;goto B4a14e8;
case 0x4a14ed:goto L4a14ed;
case 0x4a14f0:goto L4a14f0;
case 0x4a14f5:c.instructions+=2;goto B4a14f5;
case 0x4a14f7:c.instructions+=1;goto B4a14f7;
case 0x4a14fd:goto L4a14fd;
case 0x4a1501:c.instructions+=2;goto B4a1501;
case 0x4a1503:c.instructions+=1;goto B4a1503;
case 0x4a1505:goto L4a1505;
case 0x4a1508:c.instructions+=4;goto B4a1508;
case 0x4a150d:c.instructions+=3;goto B4a150d;
case 0x4a150e:c.instructions+=2;goto B4a150e;
case 0x4a150f:c.instructions+=1;goto B4a150f;
case 0x4a1514:goto L4a1514;
case 0x4a1517:c.instructions+=2;goto B4a1517;
case 0x4a1518:c.instructions+=1;goto B4a1518;
case 0x4a151d:goto L4a151d;
case 0x4a1520:c.instructions+=3;goto B4a1520;
case 0x4a1521:c.instructions+=2;goto B4a1521;
case 0x4a1522:c.instructions+=1;goto B4a1522;
case 0x4a1527:goto L4a1527;
case 0x4a1528:c.instructions+=1;goto B4a1528;
case 0x4a152d:goto L4a152d;
case 0x4a1530:c.instructions+=1;goto B4a1530;
case 0x4a1536:goto L4a1536;
case 0x4a153e:c.instructions+=1;goto B4a153e;
case 0x4a1540:goto L4a1540;
case 0x4a1544:c.instructions+=2;goto B4a1544;
case 0x4a1546:c.instructions+=1;goto B4a1546;
case 0x4a1548:goto L4a1548;
case 0x4a154b:c.instructions+=4;goto B4a154b;
case 0x4a1550:c.instructions+=3;goto B4a1550;
case 0x4a1551:c.instructions+=2;goto B4a1551;
case 0x4a1552:c.instructions+=1;goto B4a1552;
case 0x4a1557:goto L4a1557;
case 0x4a155a:c.instructions+=2;goto B4a155a;
case 0x4a155b:c.instructions+=1;goto B4a155b;
case 0x4a1560:goto L4a1560;
case 0x4a1563:c.instructions+=3;goto B4a1563;
case 0x4a1564:c.instructions+=2;goto B4a1564;
case 0x4a1565:c.instructions+=1;goto B4a1565;
case 0x4a156a:goto L4a156a;
case 0x4a156b:c.instructions+=1;goto B4a156b;
case 0x4a1570:goto L4a1570;
case 0x4a1573:c.instructions+=1;goto B4a1573;
case 0x4a1579:goto L4a1579;
case 0x4a1580:c.instructions+=1;goto B4a1580;
case 0x4a1582:goto L4a1582;
case 0x4a1586:c.instructions+=2;goto B4a1586;
case 0x4a1587:c.instructions+=1;goto B4a1587;
case 0x4a158c:goto L4a158c;
case 0x4a158e:c.instructions+=1;goto B4a158e;
case 0x4a1593:goto L4a1593;
case 0x4a1595:c.instructions+=1;goto B4a1595;
case 0x4a1597:goto L4a1597;
case 0x4a159a:c.instructions+=4;goto B4a159a;
case 0x4a159f:c.instructions+=3;goto B4a159f;
case 0x4a15a0:c.instructions+=2;goto B4a15a0;
case 0x4a15a1:c.instructions+=1;goto B4a15a1;
case 0x4a15a6:goto L4a15a6;
case 0x4a15a9:c.instructions+=2;goto B4a15a9;
case 0x4a15aa:c.instructions+=1;goto B4a15aa;
case 0x4a15af:goto L4a15af;
case 0x4a15b2:c.instructions+=3;goto B4a15b2;
case 0x4a15b3:c.instructions+=2;goto B4a15b3;
case 0x4a15b4:c.instructions+=1;goto B4a15b4;
case 0x4a15b9:goto L4a15b9;
case 0x4a15ba:c.instructions+=1;goto B4a15ba;
case 0x4a15bf:goto L4a15bf;
case 0x4a15c2:c.instructions+=1;goto B4a15c2;
case 0x4a15c8:goto L4a15c8;
case 0x4a15c9:c.instructions+=4;goto B4a15c9;
case 0x4a15ca:c.instructions+=3;goto B4a15ca;
case 0x4a15cb:c.instructions+=2;goto B4a15cb;
case 0x4a15cc:c.instructions+=1;goto B4a15cc;
case 0x4a15d0:goto L4a15d0;
case 0x4a15d5:goto L4a15d5;
case 0x4a15d6:c.instructions+=1;goto B4a15d6;
case 0x4a15db:goto L4a15db;
case 0x4a15de:c.instructions+=3;goto B4a15de;
case 0x4a15e1:c.instructions+=2;goto B4a15e1;
case 0x4a15e4:c.instructions+=1;goto B4a15e4;
case 0x4a15f0:goto L4a15f0;
case 0x4a15f4:c.instructions+=4;goto B4a15f4;
case 0x4a15f5:c.instructions+=3;goto B4a15f5;
case 0x4a15f6:c.instructions+=2;goto B4a15f6;
case 0x4a15f8:c.instructions+=1;goto B4a15f8;
case 0x4a15fd:goto L4a15fd;
case 0x4a1601:c.instructions+=3;goto B4a1601;
case 0x4a1604:c.instructions+=2;goto B4a1604;
case 0x4a1606:c.instructions+=1;goto B4a1606;
case 0x4a1608:goto L4a1608;
case 0x4a160d:c.instructions+=1;goto B4a160d;
case 0x4a160f:goto L4a160f;
case 0x4a1613:c.instructions+=2;goto B4a1613;
case 0x4a1615:c.instructions+=1;goto B4a1615;
case 0x4a1617:goto L4a1617;
case 0x4a161a:c.instructions+=3;goto B4a161a;
case 0x4a161b:c.instructions+=2;goto B4a161b;
case 0x4a1620:c.instructions+=1;goto B4a1620;
case 0x4a1625:goto L4a1625;
case 0x4a1628:c.instructions+=4;goto B4a1628;
case 0x4a1629:c.instructions+=3;goto B4a1629;
case 0x4a162e:c.instructions+=2;goto B4a162e;
case 0x4a162f:c.instructions+=1;goto B4a162f;
case 0x4a1634:goto L4a1634;
case 0x4a1637:c.instructions+=2;goto B4a1637;
case 0x4a1638:c.instructions+=1;goto B4a1638;
case 0x4a163b:goto L4a163b;
case 0x4a163d:c.instructions+=1;goto B4a163d;
case 0x4a163f:goto L4a163f;
case 0x4a1642:c.instructions+=3;goto B4a1642;
case 0x4a1643:c.instructions+=2;goto B4a1643;
case 0x4a1648:c.instructions+=1;goto B4a1648;
case 0x4a164d:goto L4a164d;
case 0x4a1650:c.instructions+=4;goto B4a1650;
case 0x4a1651:c.instructions+=3;goto B4a1651;
case 0x4a1656:c.instructions+=2;goto B4a1656;
case 0x4a1657:c.instructions+=1;goto B4a1657;
case 0x4a165c:goto L4a165c;
case 0x4a165f:c.instructions+=2;goto B4a165f;
case 0x4a1660:c.instructions+=1;goto B4a1660;
case 0x4a1663:goto L4a1663;
case 0x4a1668:goto L4a1668;
case 0x4a166b:c.instructions+=1;goto B4a166b;
case 0x4a1670:goto L4a1670;
case 0x4a1671:c.instructions+=3;goto B4a1671;
case 0x4a1676:c.instructions+=2;goto B4a1676;
case 0x4a1677:c.instructions+=1;goto B4a1677;
case 0x4a167c:goto L4a167c;
case 0x4a167f:c.instructions+=2;goto B4a167f;
case 0x4a1680:c.instructions+=1;goto B4a1680;
case 0x4a1690:goto L4a1690;
case 0x4a1694:c.instructions+=4;goto B4a1694;
case 0x4a1699:c.instructions+=3;goto B4a1699;
case 0x4a169a:c.instructions+=2;goto B4a169a;
case 0x4a169c:c.instructions+=1;goto B4a169c;
case 0x4a169e:goto L4a169e;
case 0x4a16a3:c.instructions+=1;goto B4a16a3;
case 0x4a16a5:goto L4a16a5;
case 0x4a16aa:c.instructions+=1;goto B4a16aa;
case 0x4a16ac:goto L4a16ac;
case 0x4a16b1:goto L4a16b1;
case 0x4a16b2:c.instructions+=2;goto B4a16b2;
case 0x4a16b7:c.instructions+=1;goto B4a16b7;
case 0x4a16bc:goto L4a16bc;
case 0x4a16bf:c.instructions+=2;goto B4a16bf;
case 0x4a16c0:c.instructions+=1;goto B4a16c0;
case 0x4a16c5:goto L4a16c5;
case 0x4a16ca:c.instructions+=3;goto B4a16ca;
case 0x4a16cf:c.instructions+=2;goto B4a16cf;
case 0x4a16d3:c.instructions+=1;goto B4a16d3;
case 0x4a16d8:goto L4a16d8;
case 0x4a16db:c.instructions+=2;goto B4a16db;
case 0x4a16dc:c.instructions+=1;goto B4a16dc;
case 0x4a16df:goto L4a16df;
case 0x4a16e2:c.instructions+=2;goto B4a16e2;
case 0x4a16e3:c.instructions+=1;goto B4a16e3;
case 0x4a16e8:goto L4a16e8;
case 0x4a16ed:c.instructions+=2;goto B4a16ed;
case 0x4a16f2:c.instructions+=1;goto B4a16f2;
case 0x4a16f7:goto L4a16f7;
case 0x4a16fa:goto L4a16fa;
case 0x4a16fb:c.instructions+=1;goto B4a16fb;
case 0x4a1700:goto L4a1700;
case 0x4a1704:c.instructions+=7;goto B4a1704;
case 0x4a170a:c.instructions+=6;goto B4a170a;
case 0x4a170b:c.instructions+=5;goto B4a170b;
case 0x4a170d:c.instructions+=4;goto B4a170d;
case 0x4a1714:c.instructions+=3;goto B4a1714;
case 0x4a1715:c.instructions+=2;goto B4a1715;
case 0x4a1716:c.instructions+=1;goto B4a1716;
case 0x4a171b:goto L4a171b;
case 0x4a171e:c.instructions+=4;goto B4a171e;
case 0x4a171f:c.instructions+=3;goto B4a171f;
case 0x4a1723:c.instructions+=2;goto B4a1723;
case 0x4a1724:c.instructions+=1;goto B4a1724;
case 0x4a1729:goto L4a1729;
case 0x4a172c:c.instructions+=5;goto B4a172c;
case 0x4a1730:c.instructions+=4;goto B4a1730;
case 0x4a1731:c.instructions+=3;goto B4a1731;
case 0x4a1736:c.instructions+=2;goto B4a1736;
case 0x4a1737:c.instructions+=1;goto B4a1737;
case 0x4a173c:goto L4a173c;
case 0x4a173f:c.instructions+=4;goto B4a173f;
case 0x4a1742:c.instructions+=3;goto B4a1742;
case 0x4a1743:c.instructions+=2;goto B4a1743;
case 0x4a1749:c.instructions+=1;goto B4a1749;
case 0x4a1750:goto L4a1750;
case 0x4a1751:c.instructions+=4;goto B4a1751;
case 0x4a1753:c.instructions+=3;goto B4a1753;
case 0x4a1756:c.instructions+=2;goto B4a1756;
case 0x4a1758:c.instructions+=1;goto B4a1758;
case 0x4a175a:goto L4a175a;
case 0x4a175b:c.instructions+=1;goto B4a175b;
case 0x4a1760:goto L4a1760;
case 0x4a1763:c.instructions+=1;goto B4a1763;
case 0x4a176a:goto L4a176a;
case 0x4a176e:c.instructions+=3;goto B4a176e;
case 0x4a1770:c.instructions+=2;goto B4a1770;
case 0x4a1771:c.instructions+=1;goto B4a1771;
case 0x4a1773:goto L4a1773;
case 0x4a1778:goto L4a1778;
case 0x4a177f:c.instructions+=1;goto B4a177f;
case 0x4a1781:goto L4a1781;
case 0x4a1786:goto L4a1786;
case 0x4a178c:c.instructions+=2;goto B4a178c;
case 0x4a178e:c.instructions+=1;goto B4a178e;
case 0x4a1790:goto L4a1790;
case 0x4a1795:goto L4a1795;
case 0x4a179b:c.instructions+=2;goto B4a179b;
case 0x4a179c:c.instructions+=1;goto B4a179c;
case 0x4a17a1:goto L4a17a1;
case 0x4a17a2:goto L4a17a2;
case 0x4a17b0:goto L4a17b0;
case 0x4a17b4:c.instructions+=4;goto B4a17b4;
case 0x4a17b6:c.instructions+=3;goto B4a17b6;
case 0x4a17b7:c.instructions+=2;goto B4a17b7;
case 0x4a17b9:c.instructions+=1;goto B4a17b9;
case 0x4a17bb:goto L4a17bb;
case 0x4a17be:c.instructions+=1;goto B4a17be;
case 0x4a17c3:goto L4a17c3;
case 0x4a17c5:goto L4a17c5;
case 0x4a17c7:goto L4a17c7;
case 0x4a17ca:c.instructions+=1;goto B4a17ca;
case 0x4a17cf:goto L4a17cf;
case 0x4a17d5:c.instructions+=3;goto B4a17d5;
case 0x4a17d8:c.instructions+=2;goto B4a17d8;
case 0x4a17da:c.instructions+=1;goto B4a17da;
case 0x4a17dc:goto L4a17dc;
case 0x4a17df:c.instructions+=3;goto B4a17df;
case 0x4a17e4:c.instructions+=2;goto B4a17e4;
case 0x4a17e5:c.instructions+=1;goto B4a17e5;
case 0x4a17ea:goto L4a17ea;
case 0x4a17ec:c.instructions+=2;goto B4a17ec;
case 0x4a17ee:c.instructions+=1;goto B4a17ee;
case 0x4a17f3:goto L4a17f3;
case 0x4a17f4:c.instructions+=1;goto B4a17f4;
case 0x4a1800:goto L4a1800;
case 0x4a1801:c.instructions+=11;goto B4a1801;
case 0x4a1803:c.instructions+=10;goto B4a1803;
case 0x4a1806:c.instructions+=9;goto B4a1806;
case 0x4a180c:c.instructions+=8;goto B4a180c;
case 0x4a180d:c.instructions+=7;goto B4a180d;
case 0x4a180f:c.instructions+=6;goto B4a180f;
case 0x4a1812:c.instructions+=5;goto B4a1812;
case 0x4a1814:c.instructions+=4;goto B4a1814;
case 0x4a1815:c.instructions+=3;goto B4a1815;
case 0x4a1816:c.instructions+=2;goto B4a1816;
case 0x4a181a:c.instructions+=1;goto B4a181a;
case 0x4a181c:goto L4a181c;
case 0x4a181d:c.instructions+=1;goto B4a181d;
case 0x4a1822:goto L4a1822;
case 0x4a1825:c.instructions+=1;goto B4a1825;
case 0x4a182c:goto L4a182c;
case 0x4a182e:c.instructions+=3;goto B4a182e;
case 0x4a1833:c.instructions+=2;goto B4a1833;
case 0x4a1838:c.instructions+=1;goto B4a1838;
case 0x4a183c:goto L4a183c;
case 0x4a183e:goto L4a183e;
case 0x4a1840:c.instructions+=4;goto B4a1840;
case 0x4a1841:c.instructions+=3;goto B4a1841;
case 0x4a1844:c.instructions+=2;goto B4a1844;
case 0x4a1846:c.instructions+=1;goto B4a1846;
case 0x4a184c:goto L4a184c;
case 0x4a1851:goto L4a1851;
case 0x4a1853:c.instructions+=2;goto B4a1853;
case 0x4a1856:c.instructions+=1;goto B4a1856;
case 0x4a185b:goto L4a185b;
case 0x4a185d:c.instructions+=2;goto B4a185d;
case 0x4a185e:c.instructions+=1;goto B4a185e;
case 0x4a1860:goto L4a1860;
case 0x4a1861:c.instructions+=1;goto B4a1861;
case 0x4a1866:goto L4a1866;
case 0x4a1868:c.instructions+=1;goto B4a1868;
case 0x4a186d:goto L4a186d;
case 0x4a186f:c.instructions+=4;goto B4a186f;
case 0x4a1872:c.instructions+=3;goto B4a1872;
case 0x4a1877:c.instructions+=2;goto B4a1877;
case 0x4a1878:c.instructions+=1;goto B4a1878;
case 0x4a187d:goto L4a187d;
case 0x4a1880:c.instructions+=2;goto B4a1880;
case 0x4a1882:c.instructions+=1;goto B4a1882;
case 0x4a1884:goto L4a1884;
case 0x4a1887:c.instructions+=4;goto B4a1887;
case 0x4a1889:c.instructions+=3;goto B4a1889;
case 0x4a188a:c.instructions+=2;goto B4a188a;
case 0x4a188b:c.instructions+=1;goto B4a188b;
case 0x4a1890:goto L4a1890;
case 0x4a1892:c.instructions+=1;goto B4a1892;
case 0x4a1897:goto L4a1897;
case 0x4a1898:c.instructions+=1;goto B4a1898;
case 0x4a189a:goto L4a189a;
case 0x4a189e:goto L4a189e;
case 0x4a18a3:goto L4a18a3;
case 0x4a18a5:c.instructions+=2;goto B4a18a5;
case 0x4a18a8:c.instructions+=1;goto B4a18a8;
case 0x4a18ad:goto L4a18ad;
case 0x4a18af:c.instructions+=1;goto B4a18af;
case 0x4a18b1:goto L4a18b1;
case 0x4a18b2:c.instructions+=2;goto B4a18b2;
case 0x4a18b4:c.instructions+=1;goto B4a18b4;
case 0x4a18b9:goto L4a18b9;
case 0x4a18bb:c.instructions+=2;goto B4a18bb;
case 0x4a18c0:c.instructions+=1;goto B4a18c0;
case 0x4a18c5:goto L4a18c5;
case 0x4a18c8:goto L4a18c8;
case 0x4a18cd:c.instructions+=1;goto B4a18cd;
case 0x4a18d2:goto L4a18d2;
case 0x4a18d4:c.instructions+=1;goto B4a18d4;
case 0x4a18d9:goto L4a18d9;
case 0x4a18db:c.instructions+=1;goto B4a18db;
case 0x4a18dd:goto L4a18dd;
case 0x4a18df:c.instructions+=2;goto B4a18df;
case 0x4a18e9:c.instructions+=1;goto B4a18e9;
case 0x4a18ee:goto L4a18ee;
case 0x4a18f0:c.instructions+=1;goto B4a18f0;
case 0x4a18f5:goto L4a18f5;
case 0x4a18f6:c.instructions+=1;goto B4a18f6;
case 0x4a18fb:goto L4a18fb;
case 0x4a18fd:c.instructions+=2;goto B4a18fd;
case 0x4a18ff:c.instructions+=1;goto B4a18ff;
case 0x4a1904:goto L4a1904;
case 0x4a1906:c.instructions+=2;goto B4a1906;
case 0x4a190b:c.instructions+=1;goto B4a190b;
case 0x4a1910:goto L4a1910;
case 0x4a1913:goto L4a1913;
case 0x4a1919:c.instructions+=3;goto B4a1919;
case 0x4a191b:c.instructions+=2;goto B4a191b;
case 0x4a191c:c.instructions+=1;goto B4a191c;
case 0x4a1921:goto L4a1921;
case 0x4a1924:c.instructions+=4;goto B4a1924;
case 0x4a1929:c.instructions+=3;goto B4a1929;
case 0x4a192e:c.instructions+=2;goto B4a192e;
case 0x4a1933:c.instructions+=1;goto B4a1933;
case 0x4a1938:goto L4a1938;
case 0x4a193b:c.instructions+=5;goto B4a193b;
case 0x4a193c:c.instructions+=4;goto B4a193c;
case 0x4a1940:c.instructions+=3;goto B4a1940;
case 0x4a1945:c.instructions+=2;goto B4a1945;
case 0x4a1946:c.instructions+=1;goto B4a1946;
case 0x4a194b:goto L4a194b;
case 0x4a194e:c.instructions+=8;goto B4a194e;
case 0x4a1952:c.instructions+=7;goto B4a1952;
case 0x4a1953:c.instructions+=6;goto B4a1953;
case 0x4a1958:c.instructions+=5;goto B4a1958;
case 0x4a195d:c.instructions+=4;goto B4a195d;
case 0x4a1962:c.instructions+=3;goto B4a1962;
case 0x4a1967:c.instructions+=2;goto B4a1967;
case 0x4a1968:c.instructions+=1;goto B4a1968;
case 0x4a196d:goto L4a196d;
case 0x4a196f:c.instructions+=2;goto B4a196f;
case 0x4a1971:c.instructions+=1;goto B4a1971;
case 0x4a1976:goto L4a1976;
case 0x4a1978:c.instructions+=2;goto B4a1978;
case 0x4a197d:c.instructions+=1;goto B4a197d;
case 0x4a1982:goto L4a1982;
case 0x4a1985:c.instructions+=7;goto B4a1985;
case 0x4a198f:c.instructions+=6;goto B4a198f;
case 0x4a1990:c.instructions+=5;goto B4a1990;
case 0x4a1991:c.instructions+=4;goto B4a1991;
case 0x4a1992:c.instructions+=3;goto B4a1992;
case 0x4a1994:c.instructions+=2;goto B4a1994;
case 0x4a1995:c.instructions+=1;goto B4a1995;
case 0x4a1998:goto L4a1998;
case 0x4a199b:c.instructions+=1;goto B4a199b;
case 0x4a199d:goto L4a199d;
case 0x4a19a0:c.instructions+=2;goto B4a19a0;
case 0x4a19a5:c.instructions+=1;goto B4a19a5;
case 0x4a19aa:goto L4a19aa;
case 0x4a19ab:c.instructions+=6;goto B4a19ab;
case 0x4a19b0:c.instructions+=5;goto B4a19b0;
case 0x4a19b5:c.instructions+=4;goto B4a19b5;
case 0x4a19ba:c.instructions+=3;goto B4a19ba;
case 0x4a19bf:c.instructions+=2;goto B4a19bf;
case 0x4a19c0:c.instructions+=1;goto B4a19c0;
case 0x4a19c5:goto L4a19c5;
case 0x4a19c8:c.instructions+=6;goto B4a19c8;
case 0x4a19c9:c.instructions+=5;goto B4a19c9;
case 0x4a19ca:c.instructions+=4;goto B4a19ca;
case 0x4a19cb:c.instructions+=3;goto B4a19cb;
case 0x4a19cd:c.instructions+=2;goto B4a19cd;
case 0x4a19ce:c.instructions+=1;goto B4a19ce;
case 0x4a19d1:goto L4a19d1;
case 0x4a19d7:c.instructions+=2;goto B4a19d7;
case 0x4a19d9:c.instructions+=1;goto B4a19d9;
case 0x4a19db:goto L4a19db;
case 0x4a19de:c.instructions+=1;goto B4a19de;
case 0x4a19e0:goto L4a19e0;
case 0x4a19e3:c.instructions+=3;goto B4a19e3;
case 0x4a19e4:c.instructions+=2;goto B4a19e4;
case 0x4a19e5:c.instructions+=1;goto B4a19e5;
case 0x4a19ea:goto L4a19ea;
case 0x4a19ed:goto L4a19ed;
case 0x4a19ee:c.instructions+=5;goto B4a19ee;
case 0x4a19ef:c.instructions+=4;goto B4a19ef;
case 0x4a19f0:c.instructions+=3;goto B4a19f0;
case 0x4a19f2:c.instructions+=2;goto B4a19f2;
case 0x4a19f3:c.instructions+=1;goto B4a19f3;
case 0x4a1a00:goto L4a1a00;
case 0x4a1a01:c.instructions+=9;goto B4a1a01;
case 0x4a1a03:c.instructions+=8;goto B4a1a03;
case 0x4a1a06:c.instructions+=7;goto B4a1a06;
case 0x4a1a0c:c.instructions+=6;goto B4a1a0c;
case 0x4a1a0d:c.instructions+=5;goto B4a1a0d;
case 0x4a1a0f:c.instructions+=4;goto B4a1a0f;
case 0x4a1a12:c.instructions+=3;goto B4a1a12;
case 0x4a1a14:c.instructions+=2;goto B4a1a14;
case 0x4a1a15:c.instructions+=1;goto B4a1a15;
case 0x4a1a17:goto L4a1a17;
case 0x4a1a18:c.instructions+=1;goto B4a1a18;
case 0x4a1a1d:goto L4a1a1d;
case 0x4a1a20:c.instructions+=1;goto B4a1a20;
case 0x4a1a27:goto L4a1a27;
case 0x4a1a29:c.instructions+=3;goto B4a1a29;
case 0x4a1a2e:c.instructions+=2;goto B4a1a2e;
case 0x4a1a33:c.instructions+=1;goto B4a1a33;
case 0x4a1a37:goto L4a1a37;
case 0x4a1a39:goto L4a1a39;
case 0x4a1a3b:c.instructions+=4;goto B4a1a3b;
case 0x4a1a3c:c.instructions+=3;goto B4a1a3c;
case 0x4a1a3f:c.instructions+=2;goto B4a1a3f;
case 0x4a1a41:c.instructions+=1;goto B4a1a41;
case 0x4a1a43:goto L4a1a43;
case 0x4a1a48:c.instructions+=2;goto B4a1a48;
case 0x4a1a4d:c.instructions+=1;goto B4a1a4d;
case 0x4a1a52:goto L4a1a52;
case 0x4a1a55:c.instructions+=5;goto B4a1a55;
case 0x4a1a56:c.instructions+=4;goto B4a1a56;
case 0x4a1a5a:c.instructions+=3;goto B4a1a5a;
case 0x4a1a5f:c.instructions+=2;goto B4a1a5f;
case 0x4a1a60:c.instructions+=1;goto B4a1a60;
case 0x4a1a65:goto L4a1a65;
case 0x4a1a68:c.instructions+=8;goto B4a1a68;
case 0x4a1a6c:c.instructions+=7;goto B4a1a6c;
case 0x4a1a6d:c.instructions+=6;goto B4a1a6d;
case 0x4a1a72:c.instructions+=5;goto B4a1a72;
case 0x4a1a77:c.instructions+=4;goto B4a1a77;
case 0x4a1a7c:c.instructions+=3;goto B4a1a7c;
case 0x4a1a81:c.instructions+=2;goto B4a1a81;
case 0x4a1a82:c.instructions+=1;goto B4a1a82;
case 0x4a1a87:goto L4a1a87;
case 0x4a1a8a:c.instructions+=6;goto B4a1a8a;
case 0x4a1a94:c.instructions+=5;goto B4a1a94;
case 0x4a1a95:c.instructions+=4;goto B4a1a95;
case 0x4a1a96:c.instructions+=3;goto B4a1a96;
case 0x4a1a98:c.instructions+=2;goto B4a1a98;
case 0x4a1a99:c.instructions+=1;goto B4a1a99;
case 0x4a1a9c:goto L4a1a9c;
case 0x4a1aa2:c.instructions+=2;goto B4a1aa2;
case 0x4a1aa4:c.instructions+=1;goto B4a1aa4;
case 0x4a1aa6:goto L4a1aa6;
case 0x4a1aa9:c.instructions+=1;goto B4a1aa9;
case 0x4a1aab:goto L4a1aab;
case 0x4a1aac:c.instructions+=3;goto B4a1aac;
case 0x4a1aaf:c.instructions+=2;goto B4a1aaf;
case 0x4a1ab0:c.instructions+=1;goto B4a1ab0;
case 0x4a1ab5:goto L4a1ab5;
case 0x4a1ab8:goto L4a1ab8;
case 0x4a1ab9:c.instructions+=4;goto B4a1ab9;
case 0x4a1aba:c.instructions+=3;goto B4a1aba;
case 0x4a1abc:c.instructions+=2;goto B4a1abc;
case 0x4a1abd:c.instructions+=1;goto B4a1abd;
case 0x4a1ac0:goto L4a1ac0;
case 0x4a1ac1:c.instructions+=4;goto B4a1ac1;
case 0x4a1ac3:c.instructions+=3;goto B4a1ac3;
case 0x4a1ac6:c.instructions+=2;goto B4a1ac6;
case 0x4a1ac8:c.instructions+=1;goto B4a1ac8;
case 0x4a1aca:goto L4a1aca;
case 0x4a1acb:c.instructions+=1;goto B4a1acb;
case 0x4a1ad0:goto L4a1ad0;
case 0x4a1ad3:c.instructions+=1;goto B4a1ad3;
case 0x4a1ada:goto L4a1ada;
case 0x4a1ade:c.instructions+=2;goto B4a1ade;
case 0x4a1ae0:c.instructions+=1;goto B4a1ae0;
case 0x4a1ae2:goto L4a1ae2;
case 0x4a1ae4:c.instructions+=6;goto B4a1ae4;
case 0x4a1ae9:c.instructions+=5;goto B4a1ae9;
case 0x4a1af3:c.instructions+=4;goto B4a1af3;
case 0x4a1af6:c.instructions+=3;goto B4a1af6;
case 0x4a1afb:c.instructions+=2;goto B4a1afb;
case 0x4a1afc:c.instructions+=1;goto B4a1afc;
case 0x4a1b01:goto L4a1b01;
case 0x4a1b04:c.instructions+=1;goto B4a1b04;
case 0x4a1b06:goto L4a1b06;
case 0x4a1b0c:c.instructions+=2;goto B4a1b0c;
case 0x4a1b0e:c.instructions+=1;goto B4a1b0e;
case 0x4a1b10:goto L4a1b10;
case 0x4a1b13:c.instructions+=1;goto B4a1b13;
case 0x4a1b15:goto L4a1b15;
case 0x4a1b18:c.instructions+=3;goto B4a1b18;
case 0x4a1b19:c.instructions+=2;goto B4a1b19;
case 0x4a1b1a:c.instructions+=1;goto B4a1b1a;
case 0x4a1b1f:goto L4a1b1f;
case 0x4a1b22:goto L4a1b22;
case 0x4a1b27:goto L4a1b27;
case 0x4a1b2d:c.instructions+=4;goto B4a1b2d;
case 0x4a1b2f:c.instructions+=3;goto B4a1b2f;
case 0x4a1b34:c.instructions+=2;goto B4a1b34;
case 0x4a1b35:c.instructions+=1;goto B4a1b35;
case 0x4a1b3a:goto L4a1b3a;
case 0x4a1b3d:c.instructions+=2;goto B4a1b3d;
case 0x4a1b3e:c.instructions+=1;goto B4a1b3e;
case 0x4a1b50:goto L4a1b50;
case 0x4a1b53:c.instructions+=12;goto B4a1b53;
case 0x4a1b58:c.instructions+=11;goto B4a1b58;
case 0x4a1b5a:c.instructions+=10;goto B4a1b5a;
case 0x4a1b5c:c.instructions+=9;goto B4a1b5c;
case 0x4a1b5e:c.instructions+=8;goto B4a1b5e;
case 0x4a1b60:c.instructions+=7;goto B4a1b60;
case 0x4a1b62:c.instructions+=6;goto B4a1b62;
case 0x4a1b67:c.instructions+=5;goto B4a1b67;
case 0x4a1b6c:c.instructions+=4;goto B4a1b6c;
case 0x4a1b71:c.instructions+=3;goto B4a1b71;
case 0x4a1b76:c.instructions+=2;goto B4a1b76;
case 0x4a1b77:c.instructions+=1;goto B4a1b77;
case 0x4a1b7c:goto L4a1b7c;
case 0x4a1b7f:c.instructions+=1;goto B4a1b7f;
case 0x4a1b80:goto L4a1b80;
case 0x4a1b81:c.instructions+=4;goto B4a1b81;
case 0x4a1b83:c.instructions+=3;goto B4a1b83;
case 0x4a1b86:c.instructions+=2;goto B4a1b86;
case 0x4a1b88:c.instructions+=1;goto B4a1b88;
case 0x4a1b8a:goto L4a1b8a;
case 0x4a1b8b:c.instructions+=1;goto B4a1b8b;
case 0x4a1b90:goto L4a1b90;
case 0x4a1b93:c.instructions+=1;goto B4a1b93;
case 0x4a1b9a:goto L4a1b9a;
case 0x4a1b9e:c.instructions+=2;goto B4a1b9e;
case 0x4a1ba0:c.instructions+=1;goto B4a1ba0;
case 0x4a1ba2:goto L4a1ba2;
case 0x4a1ba8:c.instructions+=2;goto B4a1ba8;
case 0x4a1baa:c.instructions+=1;goto B4a1baa;
case 0x4a1bac:goto L4a1bac;
case 0x4a1baf:c.instructions+=1;goto B4a1baf;
case 0x4a1bb1:goto L4a1bb1;
case 0x4a1bb2:c.instructions+=3;goto B4a1bb2;
case 0x4a1bb5:c.instructions+=2;goto B4a1bb5;
case 0x4a1bb6:c.instructions+=1;goto B4a1bb6;
case 0x4a1bbb:goto L4a1bbb;
case 0x4a1bbe:c.instructions+=2;goto B4a1bbe;
case 0x4a1bbf:c.instructions+=1;goto B4a1bbf;
case 0x4a1bc2:goto L4a1bc2;
case 0x4a1bc4:c.instructions+=6;goto B4a1bc4;
case 0x4a1bc9:c.instructions+=5;goto B4a1bc9;
case 0x4a1bd3:c.instructions+=4;goto B4a1bd3;
case 0x4a1bd6:c.instructions+=3;goto B4a1bd6;
case 0x4a1bdb:c.instructions+=2;goto B4a1bdb;
case 0x4a1bdc:c.instructions+=1;goto B4a1bdc;
case 0x4a1be1:goto L4a1be1;
case 0x4a1be4:goto L4a1be4;
case 0x4a1be5:c.instructions+=1;goto B4a1be5;
case 0x4a1bf0:goto L4a1bf0;
case 0x4a1bf1:c.instructions+=4;goto B4a1bf1;
case 0x4a1bf3:c.instructions+=3;goto B4a1bf3;
case 0x4a1bf6:c.instructions+=2;goto B4a1bf6;
case 0x4a1bf8:c.instructions+=1;goto B4a1bf8;
case 0x4a1bfa:goto L4a1bfa;
case 0x4a1bfb:c.instructions+=1;goto B4a1bfb;
case 0x4a1c00:goto L4a1c00;
case 0x4a1c03:c.instructions+=1;goto B4a1c03;
case 0x4a1c0a:goto L4a1c0a;
case 0x4a1c0e:c.instructions+=2;goto B4a1c0e;
case 0x4a1c10:c.instructions+=1;goto B4a1c10;
case 0x4a1c12:goto L4a1c12;
case 0x4a1c15:c.instructions+=5;goto B4a1c15;
case 0x4a1c17:c.instructions+=4;goto B4a1c17;
case 0x4a1c1c:c.instructions+=3;goto B4a1c1c;
case 0x4a1c21:c.instructions+=2;goto B4a1c21;
case 0x4a1c22:c.instructions+=1;goto B4a1c22;
case 0x4a1c27:goto L4a1c27;
case 0x4a1c2a:c.instructions+=3;goto B4a1c2a;
case 0x4a1c34:c.instructions+=2;goto B4a1c34;
case 0x4a1c35:c.instructions+=1;goto B4a1c35;
case 0x4a1c38:goto L4a1c38;
case 0x4a1c3e:c.instructions+=2;goto B4a1c3e;
case 0x4a1c40:c.instructions+=1;goto B4a1c40;
case 0x4a1c42:goto L4a1c42;
case 0x4a1c45:c.instructions+=1;goto B4a1c45;
case 0x4a1c47:goto L4a1c47;
case 0x4a1c4a:c.instructions+=3;goto B4a1c4a;
case 0x4a1c4b:c.instructions+=2;goto B4a1c4b;
case 0x4a1c4c:c.instructions+=1;goto B4a1c4c;
case 0x4a1c51:goto L4a1c51;
case 0x4a1c54:goto L4a1c54;
case 0x4a1c5e:c.instructions+=2;goto B4a1c5e;
case 0x4a1c5f:c.instructions+=1;goto B4a1c5f;
case 0x4a1c70:goto L4a1c70;
case 0x4a1c71:c.instructions+=12;goto B4a1c71;
case 0x4a1c73:c.instructions+=11;goto B4a1c73;
case 0x4a1c76:c.instructions+=10;goto B4a1c76;
case 0x4a1c7c:c.instructions+=9;goto B4a1c7c;
case 0x4a1c81:c.instructions+=8;goto B4a1c81;
case 0x4a1c82:c.instructions+=7;goto B4a1c82;
case 0x4a1c83:c.instructions+=6;goto B4a1c83;
case 0x4a1c84:c.instructions+=5;goto B4a1c84;
case 0x4a1c86:c.instructions+=4;goto B4a1c86;
case 0x4a1c87:c.instructions+=3;goto B4a1c87;
case 0x4a1c8e:c.instructions+=2;goto B4a1c8e;
case 0x4a1c8f:c.instructions+=1;goto B4a1c8f;
case 0x4a1c94:goto L4a1c94;
case 0x4a1c99:c.instructions+=3;goto B4a1c99;
case 0x4a1c9b:c.instructions+=2;goto B4a1c9b;
case 0x4a1c9f:c.instructions+=1;goto B4a1c9f;
case 0x4a1ca2:goto L4a1ca2;
case 0x4a1ca4:goto L4a1ca4;
case 0x4a1ca6:goto L4a1ca6;
case 0x4a1ca7:c.instructions+=1;goto B4a1ca7;
case 0x4a1cac:goto L4a1cac;
case 0x4a1cae:c.instructions+=1;goto B4a1cae;
case 0x4a1cb3:goto L4a1cb3;
case 0x4a1cb5:c.instructions+=1;goto B4a1cb5;
case 0x4a1cb7:goto L4a1cb7;
case 0x4a1cbb:c.instructions+=4;goto B4a1cbb;
case 0x4a1cbc:c.instructions+=3;goto B4a1cbc;
case 0x4a1cbf:c.instructions+=2;goto B4a1cbf;
case 0x4a1cc0:c.instructions+=1;goto B4a1cc0;
case 0x4a1cc5:goto L4a1cc5;
case 0x4a1cc8:c.instructions+=3;goto B4a1cc8;
case 0x4a1cc9:c.instructions+=2;goto B4a1cc9;
case 0x4a1ccc:c.instructions+=1;goto B4a1ccc;
case 0x4a1cce:goto L4a1cce;
case 0x4a1cd1:c.instructions+=5;goto B4a1cd1;
case 0x4a1cd3:c.instructions+=4;goto B4a1cd3;
case 0x4a1cd8:c.instructions+=3;goto B4a1cd8;
case 0x4a1cd9:c.instructions+=2;goto B4a1cd9;
case 0x4a1cde:c.instructions+=1;goto B4a1cde;
case 0x4a1ce3:goto L4a1ce3;
case 0x4a1ce6:c.instructions+=7;goto B4a1ce6;
case 0x4a1ce7:c.instructions+=6;goto B4a1ce7;
case 0x4a1ce8:c.instructions+=5;goto B4a1ce8;
case 0x4a1cf2:c.instructions+=4;goto B4a1cf2;
case 0x4a1cf3:c.instructions+=3;goto B4a1cf3;
case 0x4a1cf5:c.instructions+=2;goto B4a1cf5;
case 0x4a1cf6:c.instructions+=1;goto B4a1cf6;
case 0x4a1d00:goto L4a1d00;
case 0x4a1d01:c.instructions+=4;goto B4a1d01;
case 0x4a1d08:c.instructions+=3;goto B4a1d08;
case 0x4a1d09:c.instructions+=2;goto B4a1d09;
case 0x4a1d0b:c.instructions+=1;goto B4a1d0b;
case 0x4a1d0d:goto L4a1d0d;
case 0x4a1d0f:c.instructions+=3;goto B4a1d0f;
case 0x4a1d10:c.instructions+=2;goto B4a1d10;
case 0x4a1d11:c.instructions+=1;goto B4a1d11;
case 0x4a1d14:goto L4a1d14;
case 0x4a1d19:c.instructions+=2;goto B4a1d19;
case 0x4a1d1b:c.instructions+=1;goto B4a1d1b;
case 0x4a1d1d:goto L4a1d1d;
case 0x4a1d22:c.instructions+=3;goto B4a1d22;
case 0x4a1d24:c.instructions+=2;goto B4a1d24;
case 0x4a1d29:c.instructions+=1;goto B4a1d29;
case 0x4a1d2b:goto L4a1d2b;
case 0x4a1d30:c.instructions+=2;goto B4a1d30;
case 0x4a1d31:c.instructions+=1;goto B4a1d31;
case 0x4a1d36:goto L4a1d36;
case 0x4a1d39:c.instructions+=2;goto B4a1d39;
case 0x4a1d3b:c.instructions+=1;goto B4a1d3b;
case 0x4a1d3d:goto L4a1d3d;
case 0x4a1d42:goto L4a1d42;
case 0x4a1d43:c.instructions+=3;goto B4a1d43;
case 0x4a1d45:c.instructions+=2;goto B4a1d45;
case 0x4a1d47:c.instructions+=1;goto B4a1d47;
case 0x4a1d4c:goto L4a1d4c;
case 0x4a1d4f:c.instructions+=2;goto B4a1d4f;
case 0x4a1d51:c.instructions+=1;goto B4a1d51;
case 0x4a1d56:goto L4a1d56;
case 0x4a1d58:c.instructions+=1;goto B4a1d58;
case 0x4a1d5a:goto L4a1d5a;
case 0x4a1d5c:c.instructions+=1;goto B4a1d5c;
case 0x4a1d61:goto L4a1d61;
case 0x4a1d64:c.instructions+=2;goto B4a1d64;
case 0x4a1d66:c.instructions+=1;goto B4a1d66;
case 0x4a1d6b:goto L4a1d6b;
case 0x4a1d71:c.instructions+=2;goto B4a1d71;
case 0x4a1d77:c.instructions+=1;goto B4a1d77;
case 0x4a1d79:goto L4a1d79;
case 0x4a1d7b:goto L4a1d7b;
case 0x4a1d7f:c.instructions+=2;goto B4a1d7f;
case 0x4a1d81:c.instructions+=1;goto B4a1d81;
case 0x4a1d87:goto L4a1d87;
case 0x4a1d91:c.instructions+=1;goto B4a1d91;
case 0x4a1d93:goto L4a1d93;
case 0x4a1d98:c.instructions+=2;goto B4a1d98;
case 0x4a1d9a:c.instructions+=1;goto B4a1d9a;
case 0x4a1d9c:goto L4a1d9c;
case 0x4a1da1:c.instructions+=2;goto B4a1da1;
case 0x4a1da3:c.instructions+=1;goto B4a1da3;
case 0x4a1da5:goto L4a1da5;
case 0x4a1daa:c.instructions+=2;goto B4a1daa;
case 0x4a1dac:c.instructions+=1;goto B4a1dac;
case 0x4a1dae:goto L4a1dae;
case 0x4a1db0:c.instructions+=1;goto B4a1db0;
case 0x4a1db2:goto L4a1db2;
case 0x4a1db5:c.instructions+=2;goto B4a1db5;
case 0x4a1dba:c.instructions+=1;goto B4a1dba;
case 0x4a1dbf:goto L4a1dbf;
case 0x4a1dc0:c.instructions+=3;goto B4a1dc0;
case 0x4a1dc5:c.instructions+=2;goto B4a1dc5;
case 0x4a1dc6:c.instructions+=1;goto B4a1dc6;
case 0x4a1dcb:goto L4a1dcb;
case 0x4a1dd0:c.instructions+=1;goto B4a1dd0;
case 0x4a1dd5:goto L4a1dd5;
case 0x4a1dd9:c.instructions+=4;goto B4a1dd9;
case 0x4a1dda:c.instructions+=3;goto B4a1dda;
case 0x4a1ddc:c.instructions+=2;goto B4a1ddc;
case 0x4a1ddd:c.instructions+=1;goto B4a1ddd;
case 0x4a1de2:goto L4a1de2;
case 0x4a1de5:c.instructions+=5;goto B4a1de5;
case 0x4a1de6:c.instructions+=4;goto B4a1de6;
case 0x4a1de8:c.instructions+=3;goto B4a1de8;
case 0x4a1de9:c.instructions+=2;goto B4a1de9;
case 0x4a1dea:c.instructions+=1;goto B4a1dea;
case 0x4a1ded:goto L4a1ded;
case 0x4a1dee:c.instructions+=4;goto B4a1dee;
case 0x4a1df0:c.instructions+=3;goto B4a1df0;
case 0x4a1df1:c.instructions+=2;goto B4a1df1;
case 0x4a1df2:c.instructions+=1;goto B4a1df2;
case 0x4a1df5:goto L4a1df5;
case 0x4a1df8:c.instructions+=2;goto B4a1df8;
case 0x4a1dfd:c.instructions+=1;goto B4a1dfd;
case 0x4a1e02:goto L4a1e02;
case 0x4a1e03:c.instructions+=3;goto B4a1e03;
case 0x4a1e08:c.instructions+=2;goto B4a1e08;
case 0x4a1e09:c.instructions+=1;goto B4a1e09;
case 0x4a1e0e:goto L4a1e0e;
case 0x4a1e13:c.instructions+=1;goto B4a1e13;
case 0x4a1e18:goto L4a1e18;
case 0x4a1e19:c.instructions+=4;goto B4a1e19;
case 0x4a1e1d:c.instructions+=3;goto B4a1e1d;
case 0x4a1e1f:c.instructions+=2;goto B4a1e1f;
case 0x4a1e20:c.instructions+=1;goto B4a1e20;
case 0x4a1e25:goto L4a1e25;
case 0x4a1e28:c.instructions+=5;goto B4a1e28;
case 0x4a1e29:c.instructions+=4;goto B4a1e29;
case 0x4a1e2b:c.instructions+=3;goto B4a1e2b;
case 0x4a1e2c:c.instructions+=2;goto B4a1e2c;
case 0x4a1e2d:c.instructions+=1;goto B4a1e2d;
case 0x4a1e30:goto L4a1e30;
case 0x4a1e35:c.instructions+=2;goto B4a1e35;
case 0x4a1e3a:c.instructions+=1;goto B4a1e3a;
case 0x4a1e3c:goto L4a1e3c;
case 0x4a1e42:c.instructions+=2;goto B4a1e42;
case 0x4a1e44:c.instructions+=1;goto B4a1e44;
case 0x4a1e46:goto L4a1e46;
case 0x4a1e49:c.instructions+=4;goto B4a1e49;
case 0x4a1e4e:c.instructions+=3;goto B4a1e4e;
case 0x4a1e53:c.instructions+=2;goto B4a1e53;
case 0x4a1e54:c.instructions+=1;goto B4a1e54;
case 0x4a1e59:goto L4a1e59;
case 0x4a1e5e:c.instructions+=1;goto B4a1e5e;
case 0x4a1e63:goto L4a1e63;
case 0x4a1e67:c.instructions+=4;goto B4a1e67;
case 0x4a1e68:c.instructions+=3;goto B4a1e68;
case 0x4a1e6a:c.instructions+=2;goto B4a1e6a;
case 0x4a1e6b:c.instructions+=1;goto B4a1e6b;
case 0x4a1e70:goto L4a1e70;
case 0x4a1e73:c.instructions+=5;goto B4a1e73;
case 0x4a1e74:c.instructions+=4;goto B4a1e74;
case 0x4a1e76:c.instructions+=3;goto B4a1e76;
case 0x4a1e77:c.instructions+=2;goto B4a1e77;
case 0x4a1e78:c.instructions+=1;goto B4a1e78;
case 0x4a1e7b:goto L4a1e7b;
case 0x4a1e7d:c.instructions+=1;goto B4a1e7d;
case 0x4a1e7f:goto L4a1e7f;
case 0x4a1e84:c.instructions+=2;goto B4a1e84;
case 0x4a1e86:c.instructions+=1;goto B4a1e86;
case 0x4a1e8c:goto L4a1e8c;
case 0x4a1e8f:c.instructions+=4;goto B4a1e8f;
case 0x4a1e94:c.instructions+=3;goto B4a1e94;
case 0x4a1e99:c.instructions+=2;goto B4a1e99;
case 0x4a1e9a:c.instructions+=1;goto B4a1e9a;
case 0x4a1e9f:goto L4a1e9f;
case 0x4a1ea4:c.instructions+=1;goto B4a1ea4;
case 0x4a1ea9:goto L4a1ea9;
case 0x4a1ead:c.instructions+=4;goto B4a1ead;
case 0x4a1eae:c.instructions+=3;goto B4a1eae;
case 0x4a1eb0:c.instructions+=2;goto B4a1eb0;
case 0x4a1eb1:c.instructions+=1;goto B4a1eb1;
case 0x4a1eb6:goto L4a1eb6;
case 0x4a1eb9:c.instructions+=5;goto B4a1eb9;
case 0x4a1eba:c.instructions+=4;goto B4a1eba;
case 0x4a1ebc:c.instructions+=3;goto B4a1ebc;
case 0x4a1ebd:c.instructions+=2;goto B4a1ebd;
case 0x4a1ebe:c.instructions+=1;goto B4a1ebe;
case 0x4a1ed0:goto L4a1ed0;
case 0x4a1ed1:c.instructions+=4;goto B4a1ed1;
case 0x4a1ed3:c.instructions+=3;goto B4a1ed3;
case 0x4a1ed6:c.instructions+=2;goto B4a1ed6;
case 0x4a1ed8:c.instructions+=1;goto B4a1ed8;
case 0x4a1eda:goto L4a1eda;
case 0x4a1edb:c.instructions+=1;goto B4a1edb;
case 0x4a1ee0:goto L4a1ee0;
case 0x4a1ee3:c.instructions+=1;goto B4a1ee3;
case 0x4a1eea:goto L4a1eea;
case 0x4a1eef:c.instructions+=3;goto B4a1eef;
case 0x4a1ef0:c.instructions+=2;goto B4a1ef0;
case 0x4a1ef5:c.instructions+=1;goto B4a1ef5;
case 0x4a1efa:goto L4a1efa;
case 0x4a1eff:c.instructions+=8;goto B4a1eff;
case 0x4a1f00:c.instructions+=7;goto B4a1f00;
case 0x4a1f06:c.instructions+=6;goto B4a1f06;
case 0x4a1f0b:c.instructions+=5;goto B4a1f0b;
case 0x4a1f10:c.instructions+=4;goto B4a1f10;
case 0x4a1f13:c.instructions+=3;goto B4a1f13;
case 0x4a1f18:c.instructions+=2;goto B4a1f18;
case 0x4a1f19:c.instructions+=1;goto B4a1f19;
case 0x4a1f1e:goto L4a1f1e;
case 0x4a1f21:c.instructions+=2;goto B4a1f21;
case 0x4a1f22:c.instructions+=1;goto B4a1f22;
case 0x4a1f30:goto L4a1f30;
case 0x4a1f34:c.instructions+=4;goto B4a1f34;
case 0x4a1f37:c.instructions+=3;goto B4a1f37;
case 0x4a1f38:c.instructions+=2;goto B4a1f38;
case 0x4a1f3f:c.instructions+=1;goto B4a1f3f;
case 0x4a1f45:goto L4a1f45;
case 0x4a1f48:c.instructions+=1;goto B4a1f48;
case 0x4a1f4a:goto L4a1f4a;
case 0x4a1f4d:c.instructions+=2;goto B4a1f4d;
case 0x4a1f52:c.instructions+=1;goto B4a1f52;
case 0x4a1f57:goto L4a1f57;
case 0x4a1f58:c.instructions+=3;goto B4a1f58;
case 0x4a1f5d:c.instructions+=2;goto B4a1f5d;
case 0x4a1f62:c.instructions+=1;goto B4a1f62;
case 0x4a1f64:goto L4a1f64;
case 0x4a1f69:c.instructions+=1;goto B4a1f69;
case 0x4a1f6b:goto L4a1f6b;
case 0x4a1f6e:c.instructions+=2;goto B4a1f6e;
case 0x4a1f73:c.instructions+=1;goto B4a1f73;
case 0x4a1f78:goto L4a1f78;
case 0x4a1f79:c.instructions+=2;goto B4a1f79;
case 0x4a1f7b:c.instructions+=1;goto B4a1f7b;
case 0x4a1f7d:goto L4a1f7d;
case 0x4a1f82:c.instructions+=3;goto B4a1f82;
case 0x4a1f87:c.instructions+=2;goto B4a1f87;
case 0x4a1f88:c.instructions+=1;goto B4a1f88;
case 0x4a1f8d:goto L4a1f8d;
case 0x4a1f90:c.instructions+=2;goto B4a1f90;
case 0x4a1f91:c.instructions+=1;goto B4a1f91;
case 0x4a1f94:goto L4a1f94;
case 0x4a1f96:c.instructions+=1;goto B4a1f96;
case 0x4a1f98:goto L4a1f98;
case 0x4a1f99:c.instructions+=3;goto B4a1f99;
case 0x4a1f9c:c.instructions+=2;goto B4a1f9c;
case 0x4a1f9d:c.instructions+=1;goto B4a1f9d;
case 0x4a1fa2:goto L4a1fa2;
case 0x4a1fa5:c.instructions+=2;goto B4a1fa5;
case 0x4a1fa6:c.instructions+=1;goto B4a1fa6;
case 0x4a1fa9:goto L4a1fa9;
case 0x4a1fae:c.instructions+=2;goto B4a1fae;
case 0x4a1fb0:c.instructions+=1;goto B4a1fb0;
case 0x4a1fb2:goto L4a1fb2;
case 0x4a1fb5:c.instructions+=5;goto B4a1fb5;
case 0x4a1fb7:c.instructions+=4;goto B4a1fb7;
case 0x4a1fbc:c.instructions+=3;goto B4a1fbc;
case 0x4a1fc1:c.instructions+=2;goto B4a1fc1;
case 0x4a1fc2:c.instructions+=1;goto B4a1fc2;
case 0x4a1fc7:goto L4a1fc7;
case 0x4a1fca:goto L4a1fca;
case 0x4a1fcb:c.instructions+=1;goto B4a1fcb;
case 0x4a1fd0:goto L4a1fd0;
case 0x4a1fd1:c.instructions+=6;goto B4a1fd1;
case 0x4a1fd3:c.instructions+=5;goto B4a1fd3;
case 0x4a1fd9:c.instructions+=4;goto B4a1fd9;
case 0x4a1fda:c.instructions+=3;goto B4a1fda;
case 0x4a1fdc:c.instructions+=2;goto B4a1fdc;
case 0x4a1fdf:c.instructions+=1;goto B4a1fdf;
case 0x4a1fe0:goto L4a1fe0;
case 0x4a1fe2:c.instructions+=3;goto B4a1fe2;
case 0x4a1fe3:c.instructions+=2;goto B4a1fe3;
case 0x4a1fe5:c.instructions+=1;goto B4a1fe5;
case 0x4a1fe7:goto L4a1fe7;
case 0x4a1fe8:c.instructions+=6;goto B4a1fe8;
case 0x4a1fec:c.instructions+=5;goto B4a1fec;
case 0x4a1fee:c.instructions+=4;goto B4a1fee;
case 0x4a1ff2:c.instructions+=3;goto B4a1ff2;
case 0x4a1ff8:c.instructions+=2;goto B4a1ff8;
case 0x4a1ffa:c.instructions+=1;goto B4a1ffa;
case 0x4a1ffc:goto L4a1ffc;
default:missing_instruction(c.pc);}
B4a1003:L4a1003:{c.instructions+=2;NFSU2_TR(0x4a1003);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1004:{NFSU2_TR(0x4a1004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1009ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4a1009:L4a1009:{c.instructions+=3;NFSU2_TR(0x4a1009);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a100c:{NFSU2_TR(0x4a100c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a100e:{NFSU2_TR(0x4a100e);
if(r1(R+518)){{goto L4a1031;}}
}
B4a1010:L4a1010:{c.instructions+=1;NFSU2_TR(0x4a1010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1015ull));
TAIL_STATIC(0x582b60u,582);
}
B4a1015:L4a1015:{c.instructions+=6;NFSU2_TR(0x4a1015);
__builtin_memmove((R+4),gp(0x835bf8),4);
}
B4a101b:{NFSU2_TR(0x4a101b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1021:{NFSU2_TR(0x4a1021);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1023:{NFSU2_TR(0x4a1023);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1024:{NFSU2_TR(0x4a1024);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1025:{NFSU2_TR(0x4a1025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a102aull));
TAIL_STATIC(0x740790u,740);
}
B4a102a:L4a102a:{c.instructions+=3;NFSU2_TR(0x4a102a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a102d:{NFSU2_TR(0x4a102d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a102f:{NFSU2_TR(0x4a102f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a108a;}}
}
B4a1031:L4a1031:{c.instructions+=6;NFSU2_TR(0x4a1031);
__builtin_memmove((R+8),gp(0x835bf8),4);
}
B4a1037:{NFSU2_TR(0x4a1037);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1038:{NFSU2_TR(0x4a1038);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a103c:{NFSU2_TR(0x4a103c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a103d:{NFSU2_TR(0x4a103d);
__builtin_memmove((R+4),(R+12),4);
}
B4a103f:{NFSU2_TR(0x4a103f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1044ull));
TAIL_STATIC(0x4a0f40u,4a0);
}
B4a1044:L4a1044:{c.instructions+=3;NFSU2_TR(0x4a1044);
__builtin_memmove((R+24),(R+0),4);
}
B4a1046:{NFSU2_TR(0x4a1046);
w4(R+4,u32(0x9full));
}
B4a104b:{NFSU2_TR(0x4a104b);
w4(R+28,u32(0x835fb8ull));
}
B4a1050:L4a1050:{c.instructions+=1;NFSU2_TR(0x4a1050);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a1052;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1050u);}goto L4a1050;}
}
B4a1052:L4a1052:{c.instructions+=4;NFSU2_TR(0x4a1052);
__builtin_memmove((R+4),gp(0x835bf8),4);
}
B4a1058:{NFSU2_TR(0x4a1058);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1059:{NFSU2_TR(0x4a1059);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a105e:{NFSU2_TR(0x4a105e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1063ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4a1063:L4a1063:{c.instructions+=7;NFSU2_TR(0x4a1063);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1066:{NFSU2_TR(0x4a1066);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a1069:{NFSU2_TR(0x4a1069);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a106b:{NFSU2_TR(0x4a106b);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1070:{NFSU2_TR(0x4a1070);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1071:{NFSU2_TR(0x4a1071);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1076:{NFSU2_TR(0x4a1076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a107bull));
TAIL_STATIC(0x555eb0u,555);
}
B4a107b:L4a107b:{c.instructions+=6;NFSU2_TR(0x4a107b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a107e:{NFSU2_TR(0x4a107e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a107f:{NFSU2_TR(0x4a107f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1080:{NFSU2_TR(0x4a1080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1081:{NFSU2_TR(0x4a1081);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1087:{NFSU2_TR(0x4a1087);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a108a:L4a108a:{c.instructions+=4;NFSU2_TR(0x4a108a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a108b:{NFSU2_TR(0x4a108b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a108e:{NFSU2_TR(0x4a108e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a108f:{NFSU2_TR(0x4a108f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1094ull));
TAIL_STATIC(0x49e810u,49e);
}
B4a1094:L4a1094:{c.instructions+=6;NFSU2_TR(0x4a1094);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1097:{NFSU2_TR(0x4a1097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1098:{NFSU2_TR(0x4a1098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1099:{NFSU2_TR(0x4a1099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a109a:{NFSU2_TR(0x4a109a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x27cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a10a0:{NFSU2_TR(0x4a10a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a10b0:L4a10b0:{c.instructions+=11;NFSU2_TR(0x4a10b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a10b1:{NFSU2_TR(0x4a10b1);
__builtin_memmove((R+20),(R+16),4);
}
B4a10b3:{NFSU2_TR(0x4a10b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4a10b6:{NFSU2_TR(0x4a10b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x77cull))));
}
B4a10bc:{NFSU2_TR(0x4a10bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a10bd:{NFSU2_TR(0x4a10bd);
__builtin_memmove((R+12),(R+4),4);
}
B4a10bf:{NFSU2_TR(0x4a10bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a10c5:{NFSU2_TR(0x4a10c5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a10c8:{NFSU2_TR(0x4a10c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a10c9:{NFSU2_TR(0x4a10c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a10ca:{NFSU2_TR(0x4a10ca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a12bf;}}
}
B4a10d0:L4a10d0:{c.instructions+=1;NFSU2_TR(0x4a10d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a12e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a10d7:L4a10d7:{c.instructions+=3;NFSU2_TR(0x4a10d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a10dd:{NFSU2_TR(0x4a10dd);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a10e0:{NFSU2_TR(0x4a10e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a12bf;}}
}
B4a10e6:L4a10e6:{c.instructions+=1;NFSU2_TR(0x4a10e6);
{goto L4a10f0;}
}
B4a10f0:L4a10f0:{c.instructions+=3;NFSU2_TR(0x4a10f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a10f6:{NFSU2_TR(0x4a10f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a10f7:{NFSU2_TR(0x4a10f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a10fcull));
TAIL_STATIC(0x582b60u,582);
}
B4a10fc:L4a10fc:{c.instructions+=2;NFSU2_TR(0x4a10fc);
__builtin_memmove((R+4),(R+0),4);
}
B4a10fe:{NFSU2_TR(0x4a10fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1103ull));
TAIL_STATIC(0x582b90u,582);
}
B4a1103:L4a1103:{c.instructions+=4;NFSU2_TR(0x4a1103);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1104:{NFSU2_TR(0x4a1104);
u8 U[4];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a110b:{NFSU2_TR(0x4a110b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a110c:{NFSU2_TR(0x4a110c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1111ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a1111:L4a1111:{c.instructions+=3;NFSU2_TR(0x4a1111);
__builtin_memmove((R+24),(R+0),4);
}
B4a1113:{NFSU2_TR(0x4a1113);
w4(R+4,u32(0x9full));
}
B4a1118:{NFSU2_TR(0x4a1118);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a111c:L4a111c:{c.instructions+=1;NFSU2_TR(0x4a111c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a111e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a111cu);}goto L4a111c;}
}
B4a111e:L4a111e:{c.instructions+=7;NFSU2_TR(0x4a111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1124:{NFSU2_TR(0x4a1124);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1128:{NFSU2_TR(0x4a1128);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a112b:{NFSU2_TR(0x4a112b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a112c:{NFSU2_TR(0x4a112c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a112e:{NFSU2_TR(0x4a112e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a1134:{NFSU2_TR(0x4a1134);
if(r1(R+518)){{goto L4a1142;}}
}
B4a1136:L4a1136:{c.instructions+=3;NFSU2_TR(0x4a1136);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a113a:{NFSU2_TR(0x4a113a);
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
B4a113c:{NFSU2_TR(0x4a113c);
if(r1(R+518)){{goto L4a12c7;}}
}
B4a1142:L4a1142:{c.instructions+=3;NFSU2_TR(0x4a1142);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a1148:{NFSU2_TR(0x4a1148);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a114b:{NFSU2_TR(0x4a114b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a10f0u);}goto L4a10f0;}}
}
B4a114d:L4a114d:{c.instructions+=1;NFSU2_TR(0x4a114d);
{goto L4a12bf;}
}
B4a1152:L4a1152:{c.instructions+=3;NFSU2_TR(0x4a1152);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1158:{NFSU2_TR(0x4a1158);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a115b:{NFSU2_TR(0x4a115b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a12bf;}}
}
B4a1161:L4a1161:{c.instructions+=5;NFSU2_TR(0x4a1161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1162:{NFSU2_TR(0x4a1162);
u8 U[4];
w4(U+0,u32(u32(u32(0x510ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a1169:{NFSU2_TR(0x4a1169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a116a:{NFSU2_TR(0x4a116a);
__builtin_memmove((R+4),(R+12),4);
}
B4a116c:{NFSU2_TR(0x4a116c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1171ull));
TAIL_STATIC(0x4a0ef0u,4a0);
}
B4a1171:L4a1171:{c.instructions+=5;NFSU2_TR(0x4a1171);
__builtin_memmove((R+24),(R+0),4);
}
B4a1173:{NFSU2_TR(0x4a1173);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1179:{NFSU2_TR(0x4a1179);
w4(R+4,u32(0x9full));
}
B4a117e:{NFSU2_TR(0x4a117e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1182:{NFSU2_TR(0x4a1182);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1183:L4a1183:{c.instructions+=1;NFSU2_TR(0x4a1183);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a1185;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1183u);}goto L4a1183;}
}
B4a1185:L4a1185:{c.instructions+=2;NFSU2_TR(0x4a1185);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a118b:{NFSU2_TR(0x4a118b);
{goto L4a12c7;}
}
B4a1190:L4a1190:{c.instructions+=3;NFSU2_TR(0x4a1190);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1196:{NFSU2_TR(0x4a1196);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a1199:{NFSU2_TR(0x4a1199);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a12bf;}}
}
B4a119f:L4a119f:{c.instructions+=1;NFSU2_TR(0x4a119f);
}
B4a11a0:L4a11a0:{c.instructions+=3;NFSU2_TR(0x4a11a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a11a6:{NFSU2_TR(0x4a11a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a11a7:{NFSU2_TR(0x4a11a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a11acull));
TAIL_STATIC(0x582b60u,582);
}
B4a11ac:L4a11ac:{c.instructions+=2;NFSU2_TR(0x4a11ac);
__builtin_memmove((R+4),(R+0),4);
}
B4a11ae:{NFSU2_TR(0x4a11ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a11b3ull));
TAIL_STATIC(0x582b90u,582);
}
B4a11b3:L4a11b3:{c.instructions+=4;NFSU2_TR(0x4a11b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a11b4:{NFSU2_TR(0x4a11b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a11bb:{NFSU2_TR(0x4a11bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a11bc:{NFSU2_TR(0x4a11bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a11c1ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a11c1:L4a11c1:{c.instructions+=3;NFSU2_TR(0x4a11c1);
__builtin_memmove((R+24),(R+0),4);
}
B4a11c3:{NFSU2_TR(0x4a11c3);
w4(R+4,u32(0x9full));
}
B4a11c8:{NFSU2_TR(0x4a11c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a11cc:L4a11cc:{c.instructions+=1;NFSU2_TR(0x4a11cc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a11ce;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a11ccu);}goto L4a11cc;}
}
B4a11ce:L4a11ce:{c.instructions+=7;NFSU2_TR(0x4a11ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a11d4:{NFSU2_TR(0x4a11d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a11d8:{NFSU2_TR(0x4a11d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a11db:{NFSU2_TR(0x4a11db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a11dc:{NFSU2_TR(0x4a11dc);
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
B4a11de:{NFSU2_TR(0x4a11de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a11e4:{NFSU2_TR(0x4a11e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a12c7;}}
}
B4a11ea:L4a11ea:{c.instructions+=3;NFSU2_TR(0x4a11ea);
__builtin_memmove((R+0),(R+4),4);
}
B4a11ec:{NFSU2_TR(0x4a11ec);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a11ef:{NFSU2_TR(0x4a11ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a11a0u);}goto L4a11a0;}}
}
B4a11f1:L4a11f1:{c.instructions+=1;NFSU2_TR(0x4a11f1);
{goto L4a12bf;}
}
B4a11f6:L4a11f6:{c.instructions+=3;NFSU2_TR(0x4a11f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a11fc:{NFSU2_TR(0x4a11fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a11ff:{NFSU2_TR(0x4a11ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a12bf;}}
}
B4a1205:L4a1205:{c.instructions+=1;NFSU2_TR(0x4a1205);
{goto L4a1210;}
}
B4a1210:L4a1210:{c.instructions+=3;NFSU2_TR(0x4a1210);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1216:{NFSU2_TR(0x4a1216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1217:{NFSU2_TR(0x4a1217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a121cull));
TAIL_STATIC(0x582b60u,582);
}
B4a121c:L4a121c:{c.instructions+=2;NFSU2_TR(0x4a121c);
__builtin_memmove((R+4),(R+0),4);
}
B4a121e:{NFSU2_TR(0x4a121e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1223ull));
TAIL_STATIC(0x582b90u,582);
}
B4a1223:L4a1223:{c.instructions+=4;NFSU2_TR(0x4a1223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1224:{NFSU2_TR(0x4a1224);
u8 U[4];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a122b:{NFSU2_TR(0x4a122b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a122c:{NFSU2_TR(0x4a122c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1231ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a1231:L4a1231:{c.instructions+=3;NFSU2_TR(0x4a1231);
__builtin_memmove((R+24),(R+0),4);
}
B4a1233:{NFSU2_TR(0x4a1233);
w4(R+4,u32(0x9full));
}
B4a1238:{NFSU2_TR(0x4a1238);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a123c:L4a123c:{c.instructions+=1;NFSU2_TR(0x4a123c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a123e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a123cu);}goto L4a123c;}
}
B4a123e:L4a123e:{c.instructions+=7;NFSU2_TR(0x4a123e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1244:{NFSU2_TR(0x4a1244);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1248:{NFSU2_TR(0x4a1248);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a124b:{NFSU2_TR(0x4a124b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a124c:{NFSU2_TR(0x4a124c);
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
B4a124e:{NFSU2_TR(0x4a124e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a1254:{NFSU2_TR(0x4a1254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a12c7;}}
}
B4a1256:L4a1256:{c.instructions+=3;NFSU2_TR(0x4a1256);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a125a:{NFSU2_TR(0x4a125a);
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
B4a125c:{NFSU2_TR(0x4a125c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a12c7;}}
}
B4a125e:L4a125e:{c.instructions+=3;NFSU2_TR(0x4a125e);
__builtin_memmove((R+0),(R+4),4);
}
B4a1260:{NFSU2_TR(0x4a1260);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a1263:{NFSU2_TR(0x4a1263);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1210u);}goto L4a1210;}}
}
B4a1265:L4a1265:{c.instructions+=1;NFSU2_TR(0x4a1265);
{goto L4a12bf;}
}
B4a1267:L4a1267:{c.instructions+=3;NFSU2_TR(0x4a1267);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a126d:{NFSU2_TR(0x4a126d);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a1270:{NFSU2_TR(0x4a1270);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a12bf;}}
}
B4a1272:L4a1272:{c.instructions+=3;NFSU2_TR(0x4a1272);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1278:{NFSU2_TR(0x4a1278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1279:{NFSU2_TR(0x4a1279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a127eull));
TAIL_STATIC(0x582b60u,582);
}
B4a127e:L4a127e:{c.instructions+=2;NFSU2_TR(0x4a127e);
__builtin_memmove((R+4),(R+0),4);
}
B4a1280:{NFSU2_TR(0x4a1280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1285ull));
TAIL_STATIC(0x582b90u,582);
}
B4a1285:L4a1285:{c.instructions+=4;NFSU2_TR(0x4a1285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1286:{NFSU2_TR(0x4a1286);
u8 U[4];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a128d:{NFSU2_TR(0x4a128d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a128e:{NFSU2_TR(0x4a128e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1293ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a1293:L4a1293:{c.instructions+=3;NFSU2_TR(0x4a1293);
__builtin_memmove((R+24),(R+0),4);
}
B4a1295:{NFSU2_TR(0x4a1295);
w4(R+4,u32(0x9full));
}
B4a129a:{NFSU2_TR(0x4a129a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a129e:L4a129e:{c.instructions+=1;NFSU2_TR(0x4a129e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a12a0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a129eu);}goto L4a129e;}
}
B4a12a0:L4a12a0:{c.instructions+=7;NFSU2_TR(0x4a12a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a12a6:{NFSU2_TR(0x4a12a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a12aa:{NFSU2_TR(0x4a12aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a12ad:{NFSU2_TR(0x4a12ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a12ae:{NFSU2_TR(0x4a12ae);
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
B4a12b0:{NFSU2_TR(0x4a12b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a12b6:{NFSU2_TR(0x4a12b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a12c7;}}
}
B4a12b8:L4a12b8:{c.instructions+=3;NFSU2_TR(0x4a12b8);
__builtin_memmove((R+0),(R+4),4);
}
B4a12ba:{NFSU2_TR(0x4a12ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a12bd:{NFSU2_TR(0x4a12bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1272u);}goto L4a1272;}}
}
B4a12bf:L4a12bf:{c.instructions+=1;NFSU2_TR(0x4a12bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a12c7:L4a12c7:{c.instructions+=4;NFSU2_TR(0x4a12c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a12ca:{NFSU2_TR(0x4a12ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4a12ce:{NFSU2_TR(0x4a12ce);
__builtin_memmove((R+28),(R+0),4);
}
B4a12d0:{NFSU2_TR(0x4a12d0);
w4(R+4,u32(0x9full));
}
B4a12d5:L4a12d5:{c.instructions+=1;NFSU2_TR(0x4a12d5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a12d7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a12d5u);}goto L4a12d5;}
}
B4a12d7:L4a12d7:{c.instructions+=6;NFSU2_TR(0x4a12d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a12d8:{NFSU2_TR(0x4a12d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a12d9:{NFSU2_TR(0x4a12d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a12da:{NFSU2_TR(0x4a12da);
__builtin_memmove((R+16),(R+20),4);
}
B4a12dc:{NFSU2_TR(0x4a12dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a12dd:{NFSU2_TR(0x4a12dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1300:L4a1300:{c.instructions+=3;NFSU2_TR(0x4a1300);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1306:{NFSU2_TR(0x4a1306);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1309:{NFSU2_TR(0x4a1309);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a135d;}}
}
B4a130b:L4a130b:{c.instructions+=2;NFSU2_TR(0x4a130b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a130c:{NFSU2_TR(0x4a130c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a1360ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a1313:L4a1313:{c.instructions+=2;NFSU2_TR(0x4a1313);
u8 U[4];
w4(U+0,u32(0xb204477cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1318:{NFSU2_TR(0x4a1318);
{goto L4a1334;}
}
B4a131a:L4a131a:{c.instructions+=2;NFSU2_TR(0x4a131a);
u8 U[4];
w4(U+0,u32(0x8cac9d6aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a131f:{NFSU2_TR(0x4a131f);
{goto L4a1334;}
}
B4a1321:L4a1321:{c.instructions+=2;NFSU2_TR(0x4a1321);
u8 U[4];
w4(U+0,u32(0x7087ce45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1326:{NFSU2_TR(0x4a1326);
{goto L4a1334;}
}
B4a1328:L4a1328:{c.instructions+=2;NFSU2_TR(0x4a1328);
u8 U[4];
w4(U+0,u32(0xb1b1fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a132d:{NFSU2_TR(0x4a132d);
{goto L4a1334;}
}
B4a132f:L4a132f:{c.instructions+=1;NFSU2_TR(0x4a132f);
u8 U[4];
w4(U+0,u32(0xf155ab34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1334:L4a1334:{c.instructions+=2;NFSU2_TR(0x4a1334);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a1337:{NFSU2_TR(0x4a1337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a133cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a133c:L4a133c:{c.instructions+=5;NFSU2_TR(0x4a133c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a133f:{NFSU2_TR(0x4a133f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1340:{NFSU2_TR(0x4a1340);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1345:{NFSU2_TR(0x4a1345);
u8 U[4];
w4(U+0,u32(0x79022cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a134a:{NFSU2_TR(0x4a134a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a134full));
TAIL_STATIC(0x50b990u,50b);
}
B4a134f:L4a134f:{c.instructions+=4;NFSU2_TR(0x4a134f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1352:{NFSU2_TR(0x4a1352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1353:{NFSU2_TR(0x4a1353);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1354:{NFSU2_TR(0x4a1354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1359ull));
TAIL_STATIC(0x537b80u,537);
}
B4a1359:L4a1359:{c.instructions+=2;NFSU2_TR(0x4a1359);
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
B4a135c:{NFSU2_TR(0x4a135c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a135d:L4a135d:{c.instructions+=1;NFSU2_TR(0x4a135d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1380:L4a1380:{c.instructions+=10;NFSU2_TR(0x4a1380);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1381:{NFSU2_TR(0x4a1381);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a1385:{NFSU2_TR(0x4a1385);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1386:{NFSU2_TR(0x4a1386);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1387:{NFSU2_TR(0x4a1387);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1388:{NFSU2_TR(0x4a1388);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4a1389:{NFSU2_TR(0x4a1389);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a138a:{NFSU2_TR(0x4a138a);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a138f:{NFSU2_TR(0x4a138f);
__builtin_memmove((R+24),(R+4),4);
}
B4a1391:{NFSU2_TR(0x4a1391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1396ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a1396:L4a1396:{c.instructions+=5;NFSU2_TR(0x4a1396);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a1399:{NFSU2_TR(0x4a1399);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a139a:{NFSU2_TR(0x4a139a);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a139f:{NFSU2_TR(0x4a139f);
__builtin_memmove((R+28),(R+0),4);
}
B4a13a1:{NFSU2_TR(0x4a13a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13a6ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a13a6:L4a13a6:{c.instructions+=3;NFSU2_TR(0x4a13a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13a7:{NFSU2_TR(0x4a13a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13a8:{NFSU2_TR(0x4a13a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13adull));
TAIL_STATIC(0x537a60u,537);
}
B4a13ad:L4a13ad:{c.instructions+=4;NFSU2_TR(0x4a13ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a13b0:{NFSU2_TR(0x4a13b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13b1:{NFSU2_TR(0x4a13b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13b2:{NFSU2_TR(0x4a13b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13b7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a13b7:L4a13b7:{c.instructions+=2;NFSU2_TR(0x4a13b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13b8:{NFSU2_TR(0x4a13b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13bdull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a13bd:L4a13bd:{c.instructions+=4;NFSU2_TR(0x4a13bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a13c1:{NFSU2_TR(0x4a13c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a13c4:{NFSU2_TR(0x4a13c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a13c6:{NFSU2_TR(0x4a13c6);
if(r1(R+518)){{goto L4a13fc;}}
}
B4a13c8:L4a13c8:{c.instructions+=3;NFSU2_TR(0x4a13c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a13cb:{NFSU2_TR(0x4a13cb);
u8 U[4];
w4(U+0,u32(0x79027cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13d0:{NFSU2_TR(0x4a13d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13d5ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a13d5:L4a13d5:{c.instructions+=5;NFSU2_TR(0x4a13d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a13d8:{NFSU2_TR(0x4a13d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13d9:{NFSU2_TR(0x4a13d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13da:{NFSU2_TR(0x4a13da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13db:{NFSU2_TR(0x4a13db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13e0ull));
TAIL_STATIC(0x537a60u,537);
}
B4a13e0:L4a13e0:{c.instructions+=3;NFSU2_TR(0x4a13e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a13e3:{NFSU2_TR(0x4a13e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13e4:{NFSU2_TR(0x4a13e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13e9ull));
TAIL_STATIC(0x50c990u,50c);
}
B4a13e9:L4a13e9:{c.instructions+=4;NFSU2_TR(0x4a13e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a13ec:{NFSU2_TR(0x4a13ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13ed:{NFSU2_TR(0x4a13ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13ee:{NFSU2_TR(0x4a13ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13f3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a13f3:L4a13f3:{c.instructions+=2;NFSU2_TR(0x4a13f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a13f4:{NFSU2_TR(0x4a13f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a13f9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a13f9:L4a13f9:{c.instructions+=1;NFSU2_TR(0x4a13f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a13fc:L4a13fc:{c.instructions+=3;NFSU2_TR(0x4a13fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1400:{NFSU2_TR(0x4a1400);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1402:{NFSU2_TR(0x4a1402);
if(r1(R+518)){{goto L4a1438;}}
}
B4a1404:L4a1404:{c.instructions+=3;NFSU2_TR(0x4a1404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a1407:{NFSU2_TR(0x4a1407);
u8 U[4];
w4(U+0,u32(0x790268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a140c:{NFSU2_TR(0x4a140c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1411ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a1411:L4a1411:{c.instructions+=5;NFSU2_TR(0x4a1411);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1414:{NFSU2_TR(0x4a1414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1415:{NFSU2_TR(0x4a1415);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1416:{NFSU2_TR(0x4a1416);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1417:{NFSU2_TR(0x4a1417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a141cull));
TAIL_STATIC(0x537a60u,537);
}
B4a141c:L4a141c:{c.instructions+=3;NFSU2_TR(0x4a141c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a141f:{NFSU2_TR(0x4a141f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1420:{NFSU2_TR(0x4a1420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1425ull));
TAIL_STATIC(0x50c990u,50c);
}
B4a1425:L4a1425:{c.instructions+=4;NFSU2_TR(0x4a1425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1428:{NFSU2_TR(0x4a1428);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1429:{NFSU2_TR(0x4a1429);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a142a:{NFSU2_TR(0x4a142a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a142full));
TAIL_STATIC(0x5379c0u,537);
}
B4a142f:L4a142f:{c.instructions+=2;NFSU2_TR(0x4a142f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1430:{NFSU2_TR(0x4a1430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1435ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a1435:L4a1435:{c.instructions+=1;NFSU2_TR(0x4a1435);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a1438:L4a1438:{c.instructions+=3;NFSU2_TR(0x4a1438);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1439:{NFSU2_TR(0x4a1439);
u8 U[4];
w4(U+0,u32(0x790258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a143e:{NFSU2_TR(0x4a143e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1443ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a1443:L4a1443:{c.instructions+=6;NFSU2_TR(0x4a1443);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1447:{NFSU2_TR(0x4a1447);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a144a:{NFSU2_TR(0x4a144a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a144c:{NFSU2_TR(0x4a144c);
w4(R+12,u32(0x1ull));
}
B4a1451:{NFSU2_TR(0x4a1451);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1452:{NFSU2_TR(0x4a1452);
if(r1(R+518)){{goto L4a1460;}}
}
B4a1454:L4a1454:{c.instructions+=5;NFSU2_TR(0x4a1454);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1459:{NFSU2_TR(0x4a1459);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a145a:{NFSU2_TR(0x4a145a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a145d:{NFSU2_TR(0x4a145d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a145e:{NFSU2_TR(0x4a145e);
{goto L4a146a;}
}
B4a1460:L4a1460:{c.instructions+=4;NFSU2_TR(0x4a1460);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1463:{NFSU2_TR(0x4a1463);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1468:{NFSU2_TR(0x4a1468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1469:{NFSU2_TR(0x4a1469);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a146a:L4a146a:{c.instructions+=1;NFSU2_TR(0x4a146a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a146full));
TAIL_STATIC(0x537c00u,537);
}
B4a146f:L4a146f:{c.instructions+=4;NFSU2_TR(0x4a146f);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1473:{NFSU2_TR(0x4a1473);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a1476:{NFSU2_TR(0x4a1476);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1478:{NFSU2_TR(0x4a1478);
if(r1(R+518)){{goto L4a14b4;}}
}
B4a147a:L4a147a:{c.instructions+=3;NFSU2_TR(0x4a147a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a147d:{NFSU2_TR(0x4a147d);
u8 U[4];
w4(U+0,u32(0x79024cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1482:{NFSU2_TR(0x4a1482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1487ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a1487:L4a1487:{c.instructions+=5;NFSU2_TR(0x4a1487);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a148a:{NFSU2_TR(0x4a148a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a148b:{NFSU2_TR(0x4a148b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a148c:{NFSU2_TR(0x4a148c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a148d:{NFSU2_TR(0x4a148d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1492ull));
TAIL_STATIC(0x537a60u,537);
}
B4a1492:L4a1492:{c.instructions+=3;NFSU2_TR(0x4a1492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1495:{NFSU2_TR(0x4a1495);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1496:{NFSU2_TR(0x4a1496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a149bull));
TAIL_STATIC(0x50c990u,50c);
}
B4a149b:L4a149b:{c.instructions+=4;NFSU2_TR(0x4a149b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a149e:{NFSU2_TR(0x4a149e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a149f:{NFSU2_TR(0x4a149f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14a0:{NFSU2_TR(0x4a14a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14a5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a14a5:L4a14a5:{c.instructions+=2;NFSU2_TR(0x4a14a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14a6:{NFSU2_TR(0x4a14a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14abull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a14ab:L4a14ab:{c.instructions+=2;NFSU2_TR(0x4a14ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a14ae:{NFSU2_TR(0x4a14ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a14b4:L4a14b4:{c.instructions+=3;NFSU2_TR(0x4a14b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a14b8:{NFSU2_TR(0x4a14b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a14ba:{NFSU2_TR(0x4a14ba);
if(r1(R+518)){{goto L4a14f0;}}
}
B4a14bc:L4a14bc:{c.instructions+=3;NFSU2_TR(0x4a14bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a14bf:{NFSU2_TR(0x4a14bf);
u8 U[4];
w4(U+0,u32(0x79023cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14c4:{NFSU2_TR(0x4a14c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14c9ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a14c9:L4a14c9:{c.instructions+=5;NFSU2_TR(0x4a14c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a14cc:{NFSU2_TR(0x4a14cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14cd:{NFSU2_TR(0x4a14cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14ce:{NFSU2_TR(0x4a14ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14cf:{NFSU2_TR(0x4a14cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14d4ull));
TAIL_STATIC(0x537a60u,537);
}
B4a14d4:L4a14d4:{c.instructions+=3;NFSU2_TR(0x4a14d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a14d7:{NFSU2_TR(0x4a14d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14d8:{NFSU2_TR(0x4a14d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14ddull));
TAIL_STATIC(0x50c990u,50c);
}
B4a14dd:L4a14dd:{c.instructions+=4;NFSU2_TR(0x4a14dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a14e0:{NFSU2_TR(0x4a14e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14e1:{NFSU2_TR(0x4a14e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14e2:{NFSU2_TR(0x4a14e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14e7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a14e7:L4a14e7:{c.instructions+=2;NFSU2_TR(0x4a14e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a14e8:{NFSU2_TR(0x4a14e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a14edull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a14ed:L4a14ed:{c.instructions+=1;NFSU2_TR(0x4a14ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a14f0:L4a14f0:{c.instructions+=3;NFSU2_TR(0x4a14f0);
__builtin_memmove((R+0),gp(0x8500cb),1);
}
B4a14f5:{NFSU2_TR(0x4a14f5);
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
B4a14f7:{NFSU2_TR(0x4a14f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a15c8;}}
}
B4a14fd:L4a14fd:{c.instructions+=3;NFSU2_TR(0x4a14fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1501:{NFSU2_TR(0x4a1501);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1503:{NFSU2_TR(0x4a1503);
if(r1(R+518)){{goto L4a1536;}}
}
B4a1505:L4a1505:{c.instructions+=5;NFSU2_TR(0x4a1505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1508:{NFSU2_TR(0x4a1508);
u8 U[4];
w4(U+0,u32(0x41e866a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a150d:{NFSU2_TR(0x4a150d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a150e:{NFSU2_TR(0x4a150e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a150f:{NFSU2_TR(0x4a150f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1514ull));
TAIL_STATIC(0x537a60u,537);
}
B4a1514:L4a1514:{c.instructions+=3;NFSU2_TR(0x4a1514);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1517:{NFSU2_TR(0x4a1517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1518:{NFSU2_TR(0x4a1518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a151dull));
TAIL_STATIC(0x50c990u,50c);
}
B4a151d:L4a151d:{c.instructions+=4;NFSU2_TR(0x4a151d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1520:{NFSU2_TR(0x4a1520);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1521:{NFSU2_TR(0x4a1521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1522:{NFSU2_TR(0x4a1522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1527ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a1527:L4a1527:{c.instructions+=2;NFSU2_TR(0x4a1527);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1528:{NFSU2_TR(0x4a1528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a152dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a152d:L4a152d:{c.instructions+=2;NFSU2_TR(0x4a152d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a1530:{NFSU2_TR(0x4a1530);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x125ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a1536:L4a1536:{c.instructions+=2;NFSU2_TR(0x4a1536);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4a153e:{NFSU2_TR(0x4a153e);
if(r1(R+518)){{goto L4a1579;}}
}
B4a1540:L4a1540:{c.instructions+=3;NFSU2_TR(0x4a1540);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1544:{NFSU2_TR(0x4a1544);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1546:{NFSU2_TR(0x4a1546);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1579;}}
}
B4a1548:L4a1548:{c.instructions+=5;NFSU2_TR(0x4a1548);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a154b:{NFSU2_TR(0x4a154b);
u8 U[4];
w4(U+0,u32(0x41e866a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1550:{NFSU2_TR(0x4a1550);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1551:{NFSU2_TR(0x4a1551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1552:{NFSU2_TR(0x4a1552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1557ull));
TAIL_STATIC(0x537a60u,537);
}
B4a1557:L4a1557:{c.instructions+=3;NFSU2_TR(0x4a1557);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a155a:{NFSU2_TR(0x4a155a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a155b:{NFSU2_TR(0x4a155b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1560ull));
TAIL_STATIC(0x50c990u,50c);
}
B4a1560:L4a1560:{c.instructions+=4;NFSU2_TR(0x4a1560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1563:{NFSU2_TR(0x4a1563);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1564:{NFSU2_TR(0x4a1564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1565:{NFSU2_TR(0x4a1565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a156aull));
TAIL_STATIC(0x5379c0u,537);
}
B4a156a:L4a156a:{c.instructions+=2;NFSU2_TR(0x4a156a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a156b:{NFSU2_TR(0x4a156b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1570ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a1570:L4a1570:{c.instructions+=2;NFSU2_TR(0x4a1570);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a1573:{NFSU2_TR(0x4a1573);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x125ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a1579:L4a1579:{c.instructions+=2;NFSU2_TR(0x4a1579);
u8 U[14];
__builtin_memmove((U+6),gp(0x836378),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1580:{NFSU2_TR(0x4a1580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a15c8;}}
}
B4a1582:L4a1582:{c.instructions+=3;NFSU2_TR(0x4a1582);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a1586:{NFSU2_TR(0x4a1586);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1587:{NFSU2_TR(0x4a1587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a158cull));
TAIL_STATIC(0x582b60u,582);
}
B4a158c:L4a158c:{c.instructions+=2;NFSU2_TR(0x4a158c);
__builtin_memmove((R+4),(R+0),4);
}
B4a158e:{NFSU2_TR(0x4a158e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1593ull));
TAIL_STATIC(0x582d00u,582);
}
B4a1593:L4a1593:{c.instructions+=2;NFSU2_TR(0x4a1593);
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
B4a1595:{NFSU2_TR(0x4a1595);
if(r1(R+518)){{goto L4a15c8;}}
}
B4a1597:L4a1597:{c.instructions+=5;NFSU2_TR(0x4a1597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a159a:{NFSU2_TR(0x4a159a);
u8 U[4];
w4(U+0,u32(0xa77341d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a159f:{NFSU2_TR(0x4a159f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15a0:{NFSU2_TR(0x4a15a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15a1:{NFSU2_TR(0x4a15a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15a6ull));
TAIL_STATIC(0x537a60u,537);
}
B4a15a6:L4a15a6:{c.instructions+=3;NFSU2_TR(0x4a15a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a15a9:{NFSU2_TR(0x4a15a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15aa:{NFSU2_TR(0x4a15aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15afull));
TAIL_STATIC(0x50c990u,50c);
}
B4a15af:L4a15af:{c.instructions+=4;NFSU2_TR(0x4a15af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a15b2:{NFSU2_TR(0x4a15b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15b3:{NFSU2_TR(0x4a15b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15b4:{NFSU2_TR(0x4a15b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15b9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a15b9:L4a15b9:{c.instructions+=2;NFSU2_TR(0x4a15b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15ba:{NFSU2_TR(0x4a15ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15bfull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a15bf:L4a15bf:{c.instructions+=2;NFSU2_TR(0x4a15bf);
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
B4a15c2:{NFSU2_TR(0x4a15c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x125ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4a15c8:L4a15c8:{c.instructions+=5;NFSU2_TR(0x4a15c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a15c9:{NFSU2_TR(0x4a15c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a15ca:{NFSU2_TR(0x4a15ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a15cb:{NFSU2_TR(0x4a15cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a15cc:{NFSU2_TR(0x4a15cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x280ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a15d0:L4a15d0:{c.instructions+=1;NFSU2_TR(0x4a15d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15d5ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4a15d5:L4a15d5:{c.instructions+=2;NFSU2_TR(0x4a15d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15d6:{NFSU2_TR(0x4a15d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15dbull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4a15db:L4a15db:{c.instructions+=4;NFSU2_TR(0x4a15db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a15de:{NFSU2_TR(0x4a15de);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a15e1:{NFSU2_TR(0x4a15e1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B4a15e4:{NFSU2_TR(0x4a15e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a15f0:L4a15f0:{c.instructions+=5;NFSU2_TR(0x4a15f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a15f4:{NFSU2_TR(0x4a15f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15f5:{NFSU2_TR(0x4a15f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a15f6:{NFSU2_TR(0x4a15f6);
__builtin_memmove((R+24),(R+4),4);
}
B4a15f8:{NFSU2_TR(0x4a15f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a15fdull));
TAIL_STATIC(0x73eb40u,73e);
}
B4a15fd:L4a15fd:{c.instructions+=4;NFSU2_TR(0x4a15fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1601:{NFSU2_TR(0x4a1601);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1604:{NFSU2_TR(0x4a1604);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1606:{NFSU2_TR(0x4a1606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a160f;}}
}
B4a1608:L4a1608:{c.instructions+=2;NFSU2_TR(0x4a1608);
u8 U[4];
w4(U+0,u32(0x221e85b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a160d:{NFSU2_TR(0x4a160d);
{goto L4a1668;}
}
B4a160f:L4a160f:{c.instructions+=3;NFSU2_TR(0x4a160f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1613:{NFSU2_TR(0x4a1613);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1615:{NFSU2_TR(0x4a1615);
if(r1(R+518)){{goto L4a163b;}}
}
B4a1617:L4a1617:{c.instructions+=4;NFSU2_TR(0x4a1617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a161a:{NFSU2_TR(0x4a161a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a161b:{NFSU2_TR(0x4a161b);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1620:{NFSU2_TR(0x4a1620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1625ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1625:L4a1625:{c.instructions+=5;NFSU2_TR(0x4a1625);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1628:{NFSU2_TR(0x4a1628);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1629:{NFSU2_TR(0x4a1629);
u8 U[4];
w4(U+0,u32(0x79028cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a162e:{NFSU2_TR(0x4a162e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a162f:{NFSU2_TR(0x4a162f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1634ull));
TAIL_STATIC(0x542600u,542);
}
B4a1634:L4a1634:{c.instructions+=3;NFSU2_TR(0x4a1634);
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
B4a1637:{NFSU2_TR(0x4a1637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1638:{NFSU2_TR(0x4a1638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a163b:L4a163b:{c.instructions+=2;NFSU2_TR(0x4a163b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a163d:{NFSU2_TR(0x4a163d);
if(r1(R+518)){{goto L4a1663;}}
}
B4a163f:L4a163f:{c.instructions+=4;NFSU2_TR(0x4a163f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a1642:{NFSU2_TR(0x4a1642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1643:{NFSU2_TR(0x4a1643);
u8 U[4];
w4(U+0,u32(0x8d3ee1afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1648:{NFSU2_TR(0x4a1648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a164dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a164d:L4a164d:{c.instructions+=5;NFSU2_TR(0x4a164d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1650:{NFSU2_TR(0x4a1650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1651:{NFSU2_TR(0x4a1651);
u8 U[4];
w4(U+0,u32(0x79028cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1656:{NFSU2_TR(0x4a1656);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1657:{NFSU2_TR(0x4a1657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a165cull));
TAIL_STATIC(0x542600u,542);
}
B4a165c:L4a165c:{c.instructions+=3;NFSU2_TR(0x4a165c);
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
B4a165f:{NFSU2_TR(0x4a165f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1660:{NFSU2_TR(0x4a1660);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1663:L4a1663:{c.instructions+=1;NFSU2_TR(0x4a1663);
u8 U[4];
w4(U+0,u32(0x2d32a79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1668:L4a1668:{c.instructions+=2;NFSU2_TR(0x4a1668);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a166b:{NFSU2_TR(0x4a166b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1670ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1670:L4a1670:{c.instructions+=4;NFSU2_TR(0x4a1670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1671:{NFSU2_TR(0x4a1671);
u8 U[4];
w4(U+0,u32(0x79028cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1676:{NFSU2_TR(0x4a1676);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1677:{NFSU2_TR(0x4a1677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a167cull));
TAIL_STATIC(0x542600u,542);
}
B4a167c:L4a167c:{c.instructions+=3;NFSU2_TR(0x4a167c);
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
B4a167f:{NFSU2_TR(0x4a167f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1680:{NFSU2_TR(0x4a1680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x27cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1690:L4a1690:{c.instructions+=5;NFSU2_TR(0x4a1690);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1694:{NFSU2_TR(0x4a1694);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1699:{NFSU2_TR(0x4a1699);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a169a:{NFSU2_TR(0x4a169a);
__builtin_memmove((R+24),(R+4),4);
}
B4a169c:{NFSU2_TR(0x4a169c);
if(r1(R+518)){{goto L4a16df;}}
}
B4a169e:L4a169e:{c.instructions+=2;NFSU2_TR(0x4a169e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a16a3:{NFSU2_TR(0x4a16a3);
if(r1(R+518)){{goto L4a16df;}}
}
B4a16a5:L4a16a5:{c.instructions+=2;NFSU2_TR(0x4a16a5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xda5b8712ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a16aa:{NFSU2_TR(0x4a16aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a16fa;}}
}
B4a16ac:L4a16ac:{c.instructions+=1;NFSU2_TR(0x4a16ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a16b1ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4a16b1:L4a16b1:{c.instructions+=3;NFSU2_TR(0x4a16b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16b2:{NFSU2_TR(0x4a16b2);
u8 U[4];
w4(U+0,u32(0x836390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16b7:{NFSU2_TR(0x4a16b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a16bcull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4a16bc:L4a16bc:{c.instructions+=3;NFSU2_TR(0x4a16bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a16bf:{NFSU2_TR(0x4a16bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16c0:{NFSU2_TR(0x4a16c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a16c5ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a16c5:L4a16c5:{c.instructions+=4;NFSU2_TR(0x4a16c5);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16ca:{NFSU2_TR(0x4a16ca);
u8 U[4];
w4(U+0,u32(0x1c6d9c35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16cf:{NFSU2_TR(0x4a16cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a16d3:{NFSU2_TR(0x4a16d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a16d8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a16d8:L4a16d8:{c.instructions+=3;NFSU2_TR(0x4a16d8);
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
B4a16db:{NFSU2_TR(0x4a16db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a16dc:{NFSU2_TR(0x4a16dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a16df:L4a16df:{c.instructions+=3;NFSU2_TR(0x4a16df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a16e2:{NFSU2_TR(0x4a16e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16e3:{NFSU2_TR(0x4a16e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a16e8ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a16e8:L4a16e8:{c.instructions+=3;NFSU2_TR(0x4a16e8);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16ed:{NFSU2_TR(0x4a16ed);
u8 U[4];
w4(U+0,u32(0xc9d30688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a16f2:{NFSU2_TR(0x4a16f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a16f7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a16f7:L4a16f7:{c.instructions+=1;NFSU2_TR(0x4a16f7);
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
B4a16fa:L4a16fa:{c.instructions+=2;NFSU2_TR(0x4a16fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a16fb:{NFSU2_TR(0x4a16fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1700:L4a1700:{c.instructions+=8;NFSU2_TR(0x4a1700);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1704:{NFSU2_TR(0x4a1704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B4a170a:{NFSU2_TR(0x4a170a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a170b:{NFSU2_TR(0x4a170b);
__builtin_memmove((R+24),(R+4),4);
}
B4a170d:{NFSU2_TR(0x4a170d);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1714:{NFSU2_TR(0x4a1714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1715:{NFSU2_TR(0x4a1715);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1716:{NFSU2_TR(0x4a1716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a171bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a171b:L4a171b:{c.instructions+=5;NFSU2_TR(0x4a171b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a171e:{NFSU2_TR(0x4a171e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a171f:{NFSU2_TR(0x4a171f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a1723:{NFSU2_TR(0x4a1723);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1724:{NFSU2_TR(0x4a1724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1729ull));
TAIL_STATIC(0x4400d0u,440);
}
B4a1729:L4a1729:{c.instructions+=6;NFSU2_TR(0x4a1729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a172c:{NFSU2_TR(0x4a172c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1730:{NFSU2_TR(0x4a1730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1731:{NFSU2_TR(0x4a1731);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1736:{NFSU2_TR(0x4a1736);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1737:{NFSU2_TR(0x4a1737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a173cull));
TAIL_STATIC(0x558310u,558);
}
B4a173c:L4a173c:{c.instructions+=5;NFSU2_TR(0x4a173c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a173f:{NFSU2_TR(0x4a173f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a1742:{NFSU2_TR(0x4a1742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1743:{NFSU2_TR(0x4a1743);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1749:{NFSU2_TR(0x4a1749);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1750:L4a1750:{c.instructions+=5;NFSU2_TR(0x4a1750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1751:{NFSU2_TR(0x4a1751);
__builtin_memmove((R+24),(R+4),4);
}
B4a1753:{NFSU2_TR(0x4a1753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1756:{NFSU2_TR(0x4a1756);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1758:{NFSU2_TR(0x4a1758);
if(r1(R+518)){{goto L4a176a;}}
}
B4a175a:L4a175a:{c.instructions+=2;NFSU2_TR(0x4a175a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a175b:{NFSU2_TR(0x4a175b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1760ull));
TAIL_STATIC(0x540a60u,540);
}
B4a1760:L4a1760:{c.instructions+=2;NFSU2_TR(0x4a1760);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1763:{NFSU2_TR(0x4a1763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a176a:L4a176a:{c.instructions+=4;NFSU2_TR(0x4a176a);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a176e:{NFSU2_TR(0x4a176e);
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
B4a1770:{NFSU2_TR(0x4a1770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1771:{NFSU2_TR(0x4a1771);
if(r1(R+518)){{goto L4a17a2;}}
}
B4a1773:L4a1773:{c.instructions+=1;NFSU2_TR(0x4a1773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1778ull));
TAIL_STATIC(0x582b60u,582);
}
B4a1778:L4a1778:{c.instructions+=2;NFSU2_TR(0x4a1778);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4a177f:{NFSU2_TR(0x4a177f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a17a2;}}
}
B4a1781:L4a1781:{c.instructions+=1;NFSU2_TR(0x4a1781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1786ull));
TAIL_STATIC(0x582b60u,582);
}
B4a1786:L4a1786:{c.instructions+=3;NFSU2_TR(0x4a1786);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a178c:{NFSU2_TR(0x4a178c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a178e:{NFSU2_TR(0x4a178e);
if(r1(R+518)){{goto L4a17a2;}}
}
B4a1790:L4a1790:{c.instructions+=1;NFSU2_TR(0x4a1790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1795ull));
TAIL_STATIC(0x582b60u,582);
}
B4a1795:L4a1795:{c.instructions+=3;NFSU2_TR(0x4a1795);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a179b:{NFSU2_TR(0x4a179b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a179c:{NFSU2_TR(0x4a179c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a17a1ull));
TAIL_STATIC(0x73ea00u,73e);
}
B4a17a1:L4a17a1:{c.instructions+=1;NFSU2_TR(0x4a17a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a17a2:L4a17a2:{c.instructions+=1;NFSU2_TR(0x4a17a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a17b0:L4a17b0:{c.instructions+=5;NFSU2_TR(0x4a17b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a17b4:{NFSU2_TR(0x4a17b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a17b6:{NFSU2_TR(0x4a17b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a17b7:{NFSU2_TR(0x4a17b7);
__builtin_memmove((R+24),(R+4),4);
}
B4a17b9:{NFSU2_TR(0x4a17b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a17c5;}}
}
B4a17bb:L4a17bb:{c.instructions+=2;NFSU2_TR(0x4a17bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a17be:{NFSU2_TR(0x4a17be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a17c3ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4a17c3:L4a17c3:{c.instructions+=1;NFSU2_TR(0x4a17c3);
{goto L4a17cf;}
}
B4a17c5:L4a17c5:{c.instructions+=1;NFSU2_TR(0x4a17c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a17cf;}}
}
B4a17c7:L4a17c7:{c.instructions+=2;NFSU2_TR(0x4a17c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a17ca:{NFSU2_TR(0x4a17ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a17cfull));
TAIL_STATIC(0x54eb40u,54e);
}
B4a17cf:L4a17cf:{c.instructions+=4;NFSU2_TR(0x4a17cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a17d5:{NFSU2_TR(0x4a17d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x54ull))));
}
B4a17d8:{NFSU2_TR(0x4a17d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a17da:{NFSU2_TR(0x4a17da);
if(r1(R+518)){{goto L4a17ea;}}
}
B4a17dc:L4a17dc:{c.instructions+=4;NFSU2_TR(0x4a17dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a17df:{NFSU2_TR(0x4a17df);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a17e4:{NFSU2_TR(0x4a17e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a17e5:{NFSU2_TR(0x4a17e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a17eaull));
TAIL_STATIC(0x51ee80u,51e);
}
B4a17ea:L4a17ea:{c.instructions+=3;NFSU2_TR(0x4a17ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a17ec:{NFSU2_TR(0x4a17ec);
__builtin_memmove((R+4),(R+24),4);
}
B4a17ee:{NFSU2_TR(0x4a17ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a17f3ull));
TAIL_STATIC(0x538500u,538);
}
B4a17f3:L4a17f3:{c.instructions+=2;NFSU2_TR(0x4a17f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a17f4:{NFSU2_TR(0x4a17f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1800:L4a1800:{c.instructions+=12;NFSU2_TR(0x4a1800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1801:{NFSU2_TR(0x4a1801);
__builtin_memmove((R+20),(R+16),4);
}
B4a1803:{NFSU2_TR(0x4a1803);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4a1806:{NFSU2_TR(0x4a1806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B4a180c:{NFSU2_TR(0x4a180c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a180d:{NFSU2_TR(0x4a180d);
__builtin_memmove((R+12),(R+4),4);
}
B4a180f:{NFSU2_TR(0x4a180f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1812:{NFSU2_TR(0x4a1812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1814:{NFSU2_TR(0x4a1814);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1815:{NFSU2_TR(0x4a1815);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1816:{NFSU2_TR(0x4a1816);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a181a:{NFSU2_TR(0x4a181a);
if(r1(R+518)){{goto L4a182c;}}
}
B4a181c:L4a181c:{c.instructions+=2;NFSU2_TR(0x4a181c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a181d:{NFSU2_TR(0x4a181d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1822ull));
TAIL_STATIC(0x540a60u,540);
}
B4a1822:L4a1822:{c.instructions+=2;NFSU2_TR(0x4a1822);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1825:{NFSU2_TR(0x4a1825);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a182c:L4a182c:{c.instructions+=4;NFSU2_TR(0x4a182c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a182e:{NFSU2_TR(0x4a182e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a1833:{NFSU2_TR(0x4a1833);
w4(R+4,u32(0x3full));
}
B4a1838:{NFSU2_TR(0x4a1838);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a183c:L4a183c:{c.instructions+=1;NFSU2_TR(0x4a183c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a183e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a183cu);}goto L4a183c;}
}
B4a183e:L4a183e:{c.instructions+=5;NFSU2_TR(0x4a183e);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4a1840:{NFSU2_TR(0x4a1840);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4a1841:{NFSU2_TR(0x4a1841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1844:{NFSU2_TR(0x4a1844);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1846:{NFSU2_TR(0x4a1846);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1998;}}
}
B4a184c:L4a184c:{c.instructions+=1;NFSU2_TR(0x4a184c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1851ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4a1851:L4a1851:{c.instructions+=3;NFSU2_TR(0x4a1851);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1853:{NFSU2_TR(0x4a1853);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1856:{NFSU2_TR(0x4a1856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a185bull));
TAIL_STATIC(0x43be80u,43b);
}
B4a185b:L4a185b:{c.instructions+=3;NFSU2_TR(0x4a185b);
__builtin_memmove((R+24),(R+0),4);
}
B4a185d:{NFSU2_TR(0x4a185d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B4a185e:{NFSU2_TR(0x4a185e);
if(r1(R+519)){{goto L4a189e;}}
}
B4a1860:L4a1860:{c.instructions+=2;NFSU2_TR(0x4a1860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1861:{NFSU2_TR(0x4a1861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1866ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4a1866:L4a1866:{c.instructions+=2;NFSU2_TR(0x4a1866);
__builtin_memmove((R+4),(R+0),4);
}
B4a1868:{NFSU2_TR(0x4a1868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a186dull));
TAIL_STATIC(0x5847f0u,584);
}
B4a186d:L4a186d:{c.instructions+=5;NFSU2_TR(0x4a186d);
__builtin_memmove((R+28),(R+0),4);
}
B4a186f:{NFSU2_TR(0x4a186f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1872:{NFSU2_TR(0x4a1872);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1877:{NFSU2_TR(0x4a1877);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1878:{NFSU2_TR(0x4a1878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a187dull));
TAIL_STATIC(0x43dc30u,43d);
}
B4a187d:L4a187d:{c.instructions+=3;NFSU2_TR(0x4a187d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1880:{NFSU2_TR(0x4a1880);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1882:{NFSU2_TR(0x4a1882);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1897;}}
}
B4a1884:L4a1884:{c.instructions+=5;NFSU2_TR(0x4a1884);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1887:{NFSU2_TR(0x4a1887);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1889:{NFSU2_TR(0x4a1889);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a188a:{NFSU2_TR(0x4a188a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a188b:{NFSU2_TR(0x4a188b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1890ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4a1890:L4a1890:{c.instructions+=2;NFSU2_TR(0x4a1890);
__builtin_memmove((R+4),(R+0),4);
}
B4a1892:{NFSU2_TR(0x4a1892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1897ull));
TAIL_STATIC(0x58d150u,58d);
}
B4a1897:L4a1897:{c.instructions+=2;NFSU2_TR(0x4a1897);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B4a1898:{NFSU2_TR(0x4a1898);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1860u);}goto L4a1860;}}
}
B4a189a:L4a189a:{c.instructions+=1;NFSU2_TR(0x4a189a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a189e:L4a189e:{c.instructions+=1;NFSU2_TR(0x4a189e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18a3ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4a18a3:L4a18a3:{c.instructions+=3;NFSU2_TR(0x4a18a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18a5:{NFSU2_TR(0x4a18a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a18a8:{NFSU2_TR(0x4a18a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18adull));
TAIL_STATIC(0x43be80u,43b);
}
B4a18ad:L4a18ad:{c.instructions+=2;NFSU2_TR(0x4a18ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a18af:{NFSU2_TR(0x4a18af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a18c8;}}
}
B4a18b1:L4a18b1:{c.instructions+=3;NFSU2_TR(0x4a18b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18b2:{NFSU2_TR(0x4a18b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18b4:{NFSU2_TR(0x4a18b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18b9ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4a18b9:L4a18b9:{c.instructions+=3;NFSU2_TR(0x4a18b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18bb:{NFSU2_TR(0x4a18bb);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18c0:{NFSU2_TR(0x4a18c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18c5ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4a18c5:L4a18c5:{c.instructions+=1;NFSU2_TR(0x4a18c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a18c8:L4a18c8:{c.instructions+=2;NFSU2_TR(0x4a18c8);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18cd:{NFSU2_TR(0x4a18cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18d2ull));
TAIL_STATIC(0x582b60u,582);
}
B4a18d2:L4a18d2:{c.instructions+=2;NFSU2_TR(0x4a18d2);
__builtin_memmove((R+4),(R+0),4);
}
B4a18d4:{NFSU2_TR(0x4a18d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18d9ull));
TAIL_STATIC(0x582d00u,582);
}
B4a18d9:L4a18d9:{c.instructions+=2;NFSU2_TR(0x4a18d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a18db:{NFSU2_TR(0x4a18db);
if(r1(R+518)){{goto L4a1913;}}
}
B4a18dd:L4a18dd:{c.instructions+=3;NFSU2_TR(0x4a18dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18df:{NFSU2_TR(0x4a18df);
s4(0x836378,u32(0x0ull));
}
B4a18e9:{NFSU2_TR(0x4a18e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18eeull));
TAIL_STATIC(0x582b60u,582);
}
B4a18ee:L4a18ee:{c.instructions+=2;NFSU2_TR(0x4a18ee);
__builtin_memmove((R+4),(R+0),4);
}
B4a18f0:{NFSU2_TR(0x4a18f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18f5ull));
TAIL_STATIC(0x502770u,502);
}
B4a18f5:L4a18f5:{c.instructions+=2;NFSU2_TR(0x4a18f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18f6:{NFSU2_TR(0x4a18f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a18fbull));
TAIL_STATIC(0x73e380u,73e);
}
B4a18fb:L4a18fb:{c.instructions+=3;NFSU2_TR(0x4a18fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18fd:{NFSU2_TR(0x4a18fd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a18ff:{NFSU2_TR(0x4a18ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1904ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4a1904:L4a1904:{c.instructions+=3;NFSU2_TR(0x4a1904);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1906:{NFSU2_TR(0x4a1906);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a190b:{NFSU2_TR(0x4a190b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1910ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4a1910:L4a1910:{c.instructions+=1;NFSU2_TR(0x4a1910);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a1913:L4a1913:{c.instructions+=4;NFSU2_TR(0x4a1913);
__builtin_memmove((R+4),gp(0x836010),4);
}
B4a1919:{NFSU2_TR(0x4a1919);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a191b:{NFSU2_TR(0x4a191b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a191c:{NFSU2_TR(0x4a191c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1921ull));
TAIL_STATIC(0x73ee20u,73e);
}
B4a1921:L4a1921:{c.instructions+=5;NFSU2_TR(0x4a1921);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1924:{NFSU2_TR(0x4a1924);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1929:{NFSU2_TR(0x4a1929);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a192e:{NFSU2_TR(0x4a192e);
u8 U[4];
w4(U+0,u32(0x10600aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1933:{NFSU2_TR(0x4a1933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1938ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1938:L4a1938:{c.instructions+=6;NFSU2_TR(0x4a1938);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a193b:{NFSU2_TR(0x4a193b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a193c:{NFSU2_TR(0x4a193c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a1940:{NFSU2_TR(0x4a1940);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1945:{NFSU2_TR(0x4a1945);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1946:{NFSU2_TR(0x4a1946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a194bull));
TAIL_STATIC(0x50c960u,50c);
}
B4a194b:L4a194b:{c.instructions+=9;NFSU2_TR(0x4a194b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a194e:{NFSU2_TR(0x4a194e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a1952:{NFSU2_TR(0x4a1952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1953:{NFSU2_TR(0x4a1953);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1958:{NFSU2_TR(0x4a1958);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a195d:{NFSU2_TR(0x4a195d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1962:{NFSU2_TR(0x4a1962);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1967:{NFSU2_TR(0x4a1967);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1968:{NFSU2_TR(0x4a1968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a196dull));
TAIL_STATIC(0x558540u,558);
}
B4a196d:L4a196d:{c.instructions+=3;NFSU2_TR(0x4a196d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a196f:{NFSU2_TR(0x4a196f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1971:{NFSU2_TR(0x4a1971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1976ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4a1976:L4a1976:{c.instructions+=3;NFSU2_TR(0x4a1976);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1978:{NFSU2_TR(0x4a1978);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a197d:{NFSU2_TR(0x4a197d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1982ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4a1982:L4a1982:{c.instructions+=8;NFSU2_TR(0x4a1982);
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
B4a1985:{NFSU2_TR(0x4a1985);
s4(0x83637c,u32(0x1ull));
}
B4a198f:{NFSU2_TR(0x4a198f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1990:{NFSU2_TR(0x4a1990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1991:{NFSU2_TR(0x4a1991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1992:{NFSU2_TR(0x4a1992);
__builtin_memmove((R+16),(R+20),4);
}
B4a1994:{NFSU2_TR(0x4a1994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a1995:{NFSU2_TR(0x4a1995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1998:L4a1998:{c.instructions+=2;NFSU2_TR(0x4a1998);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a199b:{NFSU2_TR(0x4a199b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a19d1;}}
}
B4a199d:L4a199d:{c.instructions+=3;NFSU2_TR(0x4a199d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a19a0:{NFSU2_TR(0x4a19a0);
u8 U[4];
w4(U+0,u32(0xd7a26411ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19a5:{NFSU2_TR(0x4a19a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a19aaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a19aa:L4a19aa:{c.instructions+=7;NFSU2_TR(0x4a19aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19ab:{NFSU2_TR(0x4a19ab);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19b0:{NFSU2_TR(0x4a19b0);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19b5:{NFSU2_TR(0x4a19b5);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19ba:{NFSU2_TR(0x4a19ba);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19bf:{NFSU2_TR(0x4a19bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19c0:{NFSU2_TR(0x4a19c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a19c5ull));
TAIL_STATIC(0x558540u,558);
}
B4a19c5:L4a19c5:{c.instructions+=7;NFSU2_TR(0x4a19c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a19c8:{NFSU2_TR(0x4a19c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a19c9:{NFSU2_TR(0x4a19c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a19ca:{NFSU2_TR(0x4a19ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a19cb:{NFSU2_TR(0x4a19cb);
__builtin_memmove((R+16),(R+20),4);
}
B4a19cd:{NFSU2_TR(0x4a19cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a19ce:{NFSU2_TR(0x4a19ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a19d1:L4a19d1:{c.instructions+=3;NFSU2_TR(0x4a19d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a19d7:{NFSU2_TR(0x4a19d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a19d9:{NFSU2_TR(0x4a19d9);
if(r1(R+518)){{goto L4a19e0;}}
}
B4a19db:L4a19db:{c.instructions+=2;NFSU2_TR(0x4a19db);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a19de:{NFSU2_TR(0x4a19de);
if(r1(R+518)){{goto L4a19ed;}}
}
B4a19e0:L4a19e0:{c.instructions+=4;NFSU2_TR(0x4a19e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a19e3:{NFSU2_TR(0x4a19e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19e4:{NFSU2_TR(0x4a19e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a19e5:{NFSU2_TR(0x4a19e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a19eaull));
TAIL_STATIC(0x49e810u,49e);
}
B4a19ea:L4a19ea:{c.instructions+=1;NFSU2_TR(0x4a19ea);
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
B4a19ed:L4a19ed:{c.instructions+=6;NFSU2_TR(0x4a19ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a19ee:{NFSU2_TR(0x4a19ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a19ef:{NFSU2_TR(0x4a19ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a19f0:{NFSU2_TR(0x4a19f0);
__builtin_memmove((R+16),(R+20),4);
}
B4a19f2:{NFSU2_TR(0x4a19f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a19f3:{NFSU2_TR(0x4a19f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1a00:L4a1a00:{c.instructions+=10;NFSU2_TR(0x4a1a00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a01:{NFSU2_TR(0x4a1a01);
__builtin_memmove((R+20),(R+16),4);
}
B4a1a03:{NFSU2_TR(0x4a1a03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4a1a06:{NFSU2_TR(0x4a1a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4a1a0c:{NFSU2_TR(0x4a1a0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a0d:{NFSU2_TR(0x4a1a0d);
__builtin_memmove((R+24),(R+4),4);
}
B4a1a0f:{NFSU2_TR(0x4a1a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1a12:{NFSU2_TR(0x4a1a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1a14:{NFSU2_TR(0x4a1a14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a15:{NFSU2_TR(0x4a1a15);
if(r1(R+518)){{goto L4a1a27;}}
}
B4a1a17:L4a1a17:{c.instructions+=2;NFSU2_TR(0x4a1a17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a18:{NFSU2_TR(0x4a1a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1a1dull));
TAIL_STATIC(0x540a60u,540);
}
B4a1a1d:L4a1a1d:{c.instructions+=2;NFSU2_TR(0x4a1a1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1a20:{NFSU2_TR(0x4a1a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a1a27:L4a1a27:{c.instructions+=4;NFSU2_TR(0x4a1a27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a1a29:{NFSU2_TR(0x4a1a29);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a1a2e:{NFSU2_TR(0x4a1a2e);
w4(R+4,u32(0x1full));
}
B4a1a33:{NFSU2_TR(0x4a1a33);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1a37:L4a1a37:{c.instructions+=1;NFSU2_TR(0x4a1a37);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a1a39;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1a37u);}goto L4a1a37;}
}
B4a1a39:L4a1a39:{c.instructions+=5;NFSU2_TR(0x4a1a39);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4a1a3b:{NFSU2_TR(0x4a1a3b);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4a1a3c:{NFSU2_TR(0x4a1a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1a3f:{NFSU2_TR(0x4a1a3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1a41:{NFSU2_TR(0x4a1a41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1a9c;}}
}
B4a1a43:L4a1a43:{c.instructions+=3;NFSU2_TR(0x4a1a43);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a48:{NFSU2_TR(0x4a1a48);
u8 U[4];
w4(U+0,u32(0xa4b092eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a4d:{NFSU2_TR(0x4a1a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1a52ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1a52:L4a1a52:{c.instructions+=6;NFSU2_TR(0x4a1a52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1a55:{NFSU2_TR(0x4a1a55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a56:{NFSU2_TR(0x4a1a56);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a1a5a:{NFSU2_TR(0x4a1a5a);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a5f:{NFSU2_TR(0x4a1a5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a60:{NFSU2_TR(0x4a1a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1a65ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a1a65:L4a1a65:{c.instructions+=9;NFSU2_TR(0x4a1a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a1a68:{NFSU2_TR(0x4a1a68);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1a6c:{NFSU2_TR(0x4a1a6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a6d:{NFSU2_TR(0x4a1a6d);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a72:{NFSU2_TR(0x4a1a72);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a77:{NFSU2_TR(0x4a1a77);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a7c:{NFSU2_TR(0x4a1a7c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a81:{NFSU2_TR(0x4a1a81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1a82:{NFSU2_TR(0x4a1a82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1a87ull));
TAIL_STATIC(0x558540u,558);
}
B4a1a87:L4a1a87:{c.instructions+=7;NFSU2_TR(0x4a1a87);
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
B4a1a8a:{NFSU2_TR(0x4a1a8a);
s4(0x83637c,u32(0x1ull));
}
B4a1a94:{NFSU2_TR(0x4a1a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1a95:{NFSU2_TR(0x4a1a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1a96:{NFSU2_TR(0x4a1a96);
__builtin_memmove((R+16),(R+20),4);
}
B4a1a98:{NFSU2_TR(0x4a1a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a1a99:{NFSU2_TR(0x4a1a99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1a9c:L4a1a9c:{c.instructions+=3;NFSU2_TR(0x4a1a9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a1aa2:{NFSU2_TR(0x4a1aa2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1aa4:{NFSU2_TR(0x4a1aa4);
if(r1(R+518)){{goto L4a1aab;}}
}
B4a1aa6:L4a1aa6:{c.instructions+=2;NFSU2_TR(0x4a1aa6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1aa9:{NFSU2_TR(0x4a1aa9);
if(r1(R+518)){{goto L4a1ab8;}}
}
B4a1aab:L4a1aab:{c.instructions+=4;NFSU2_TR(0x4a1aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1aac:{NFSU2_TR(0x4a1aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1aaf:{NFSU2_TR(0x4a1aaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ab0:{NFSU2_TR(0x4a1ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1ab5ull));
TAIL_STATIC(0x49e810u,49e);
}
B4a1ab5:L4a1ab5:{c.instructions+=1;NFSU2_TR(0x4a1ab5);
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
B4a1ab8:L4a1ab8:{c.instructions+=5;NFSU2_TR(0x4a1ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1ab9:{NFSU2_TR(0x4a1ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1aba:{NFSU2_TR(0x4a1aba);
__builtin_memmove((R+16),(R+20),4);
}
B4a1abc:{NFSU2_TR(0x4a1abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a1abd:{NFSU2_TR(0x4a1abd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1ac0:L4a1ac0:{c.instructions+=5;NFSU2_TR(0x4a1ac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ac1:{NFSU2_TR(0x4a1ac1);
__builtin_memmove((R+24),(R+4),4);
}
B4a1ac3:{NFSU2_TR(0x4a1ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1ac6:{NFSU2_TR(0x4a1ac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1ac8:{NFSU2_TR(0x4a1ac8);
if(r1(R+518)){{goto L4a1ada;}}
}
B4a1aca:L4a1aca:{c.instructions+=2;NFSU2_TR(0x4a1aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1acb:{NFSU2_TR(0x4a1acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1ad0ull));
TAIL_STATIC(0x540a60u,540);
}
B4a1ad0:L4a1ad0:{c.instructions+=2;NFSU2_TR(0x4a1ad0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1ad3:{NFSU2_TR(0x4a1ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a1ada:L4a1ada:{c.instructions+=3;NFSU2_TR(0x4a1ada);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1ade:{NFSU2_TR(0x4a1ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1ae0:{NFSU2_TR(0x4a1ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1b06;}}
}
B4a1ae2:L4a1ae2:{c.instructions+=7;NFSU2_TR(0x4a1ae2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ae4:{NFSU2_TR(0x4a1ae4);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ae9:{NFSU2_TR(0x4a1ae9);
s4(0x83637c,u32(0x1ull));
}
B4a1af3:{NFSU2_TR(0x4a1af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1af6:{NFSU2_TR(0x4a1af6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1afb:{NFSU2_TR(0x4a1afb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1afc:{NFSU2_TR(0x4a1afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1b01ull));
TAIL_STATIC(0x537c00u,537);
}
B4a1b01:L4a1b01:{c.instructions+=2;NFSU2_TR(0x4a1b01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a1b04:{NFSU2_TR(0x4a1b04);
{goto L4a1b22;}
}
B4a1b06:L4a1b06:{c.instructions+=3;NFSU2_TR(0x4a1b06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a1b0c:{NFSU2_TR(0x4a1b0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1b0e:{NFSU2_TR(0x4a1b0e);
if(r1(R+518)){{goto L4a1b15;}}
}
B4a1b10:L4a1b10:{c.instructions+=2;NFSU2_TR(0x4a1b10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffff94ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a1b13:{NFSU2_TR(0x4a1b13);
if(r1(R+518)){{goto L4a1b22;}}
}
B4a1b15:L4a1b15:{c.instructions+=4;NFSU2_TR(0x4a1b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1b18:{NFSU2_TR(0x4a1b18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b19:{NFSU2_TR(0x4a1b19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b1a:{NFSU2_TR(0x4a1b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1b1full));
TAIL_STATIC(0x49e810u,49e);
}
B4a1b1f:L4a1b1f:{c.instructions+=1;NFSU2_TR(0x4a1b1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1b22:L4a1b22:{c.instructions+=1;NFSU2_TR(0x4a1b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1b27ull));
TAIL_STATIC(0x582b60u,582);
}
B4a1b27:L4a1b27:{c.instructions+=5;NFSU2_TR(0x4a1b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a1b2d:{NFSU2_TR(0x4a1b2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b2f:{NFSU2_TR(0x4a1b2f);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b34:{NFSU2_TR(0x4a1b34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b35:{NFSU2_TR(0x4a1b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1b3aull));
TAIL_STATIC(0x73ef70u,73e);
}
B4a1b3a:L4a1b3a:{c.instructions+=3;NFSU2_TR(0x4a1b3a);
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
B4a1b3d:{NFSU2_TR(0x4a1b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1b3e:{NFSU2_TR(0x4a1b3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1b50:L4a1b50:{c.instructions+=13;NFSU2_TR(0x4a1b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1b53:{NFSU2_TR(0x4a1b53);
u8 U[4];
w4(U+0,u32(0xf8bcee28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b58:{NFSU2_TR(0x4a1b58);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b5a:{NFSU2_TR(0x4a1b5a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b5c:{NFSU2_TR(0x4a1b5c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b5e:{NFSU2_TR(0x4a1b5e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b60:{NFSU2_TR(0x4a1b60);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b62:{NFSU2_TR(0x4a1b62);
u8 U[4];
w4(U+0,u32(0x4f876b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b67:{NFSU2_TR(0x4a1b67);
u8 U[4];
w4(U+0,u32(0x2c119933ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b6c:{NFSU2_TR(0x4a1b6c);
u8 U[4];
w4(U+0,u32(0x308db484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b71:{NFSU2_TR(0x4a1b71);
u8 U[4];
w4(U+0,u32(0x7902d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b76:{NFSU2_TR(0x4a1b76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b77:{NFSU2_TR(0x4a1b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1b7cull));
TAIL_STATIC(0x558a20u,558);
}
B4a1b7c:L4a1b7c:{c.instructions+=2;NFSU2_TR(0x4a1b7c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1b7f:{NFSU2_TR(0x4a1b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1b80:L4a1b80:{c.instructions+=5;NFSU2_TR(0x4a1b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b81:{NFSU2_TR(0x4a1b81);
__builtin_memmove((R+24),(R+4),4);
}
B4a1b83:{NFSU2_TR(0x4a1b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1b86:{NFSU2_TR(0x4a1b86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1b88:{NFSU2_TR(0x4a1b88);
if(r1(R+518)){{goto L4a1b9a;}}
}
B4a1b8a:L4a1b8a:{c.instructions+=2;NFSU2_TR(0x4a1b8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1b8b:{NFSU2_TR(0x4a1b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1b90ull));
TAIL_STATIC(0x540a60u,540);
}
B4a1b90:L4a1b90:{c.instructions+=2;NFSU2_TR(0x4a1b90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1b93:{NFSU2_TR(0x4a1b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a1b9a:L4a1b9a:{c.instructions+=3;NFSU2_TR(0x4a1b9a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1b9e:{NFSU2_TR(0x4a1b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1ba0:{NFSU2_TR(0x4a1ba0);
if(r1(R+518)){{goto L4a1bc2;}}
}
B4a1ba2:L4a1ba2:{c.instructions+=3;NFSU2_TR(0x4a1ba2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a1ba8:{NFSU2_TR(0x4a1ba8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1baa:{NFSU2_TR(0x4a1baa);
if(r1(R+518)){{goto L4a1bb1;}}
}
B4a1bac:L4a1bac:{c.instructions+=2;NFSU2_TR(0x4a1bac);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1baf:{NFSU2_TR(0x4a1baf);
if(r1(R+518)){{goto L4a1be4;}}
}
B4a1bb1:L4a1bb1:{c.instructions+=4;NFSU2_TR(0x4a1bb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bb2:{NFSU2_TR(0x4a1bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1bb5:{NFSU2_TR(0x4a1bb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bb6:{NFSU2_TR(0x4a1bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1bbbull));
TAIL_STATIC(0x49e810u,49e);
}
B4a1bbb:L4a1bbb:{c.instructions+=3;NFSU2_TR(0x4a1bbb);
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
B4a1bbe:{NFSU2_TR(0x4a1bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1bbf:{NFSU2_TR(0x4a1bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1bc2:L4a1bc2:{c.instructions+=7;NFSU2_TR(0x4a1bc2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bc4:{NFSU2_TR(0x4a1bc4);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bc9:{NFSU2_TR(0x4a1bc9);
s4(0x83637c,u32(0x1ull));
}
B4a1bd3:{NFSU2_TR(0x4a1bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1bd6:{NFSU2_TR(0x4a1bd6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bdb:{NFSU2_TR(0x4a1bdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bdc:{NFSU2_TR(0x4a1bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1be1ull));
TAIL_STATIC(0x537c00u,537);
}
B4a1be1:L4a1be1:{c.instructions+=1;NFSU2_TR(0x4a1be1);
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
B4a1be4:L4a1be4:{c.instructions+=2;NFSU2_TR(0x4a1be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1be5:{NFSU2_TR(0x4a1be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1bf0:L4a1bf0:{c.instructions+=5;NFSU2_TR(0x4a1bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bf1:{NFSU2_TR(0x4a1bf1);
__builtin_memmove((R+24),(R+4),4);
}
B4a1bf3:{NFSU2_TR(0x4a1bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1bf6:{NFSU2_TR(0x4a1bf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1bf8:{NFSU2_TR(0x4a1bf8);
if(r1(R+518)){{goto L4a1c0a;}}
}
B4a1bfa:L4a1bfa:{c.instructions+=2;NFSU2_TR(0x4a1bfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1bfb:{NFSU2_TR(0x4a1bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1c00ull));
TAIL_STATIC(0x540a60u,540);
}
B4a1c00:L4a1c00:{c.instructions+=2;NFSU2_TR(0x4a1c00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1c03:{NFSU2_TR(0x4a1c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a1c0a:L4a1c0a:{c.instructions+=3;NFSU2_TR(0x4a1c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1c0e:{NFSU2_TR(0x4a1c0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1c10:{NFSU2_TR(0x4a1c10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1c38;}}
}
B4a1c12:L4a1c12:{c.instructions+=6;NFSU2_TR(0x4a1c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1c15:{NFSU2_TR(0x4a1c15);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c17:{NFSU2_TR(0x4a1c17);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c1c:{NFSU2_TR(0x4a1c1c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c21:{NFSU2_TR(0x4a1c21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c22:{NFSU2_TR(0x4a1c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1c27ull));
TAIL_STATIC(0x537c00u,537);
}
B4a1c27:L4a1c27:{c.instructions+=4;NFSU2_TR(0x4a1c27);
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
B4a1c2a:{NFSU2_TR(0x4a1c2a);
s4(0x83637c,u32(0x1ull));
}
B4a1c34:{NFSU2_TR(0x4a1c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1c35:{NFSU2_TR(0x4a1c35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1c38:L4a1c38:{c.instructions+=3;NFSU2_TR(0x4a1c38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a1c3e:{NFSU2_TR(0x4a1c3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1c40:{NFSU2_TR(0x4a1c40);
if(r1(R+518)){{goto L4a1c47;}}
}
B4a1c42:L4a1c42:{c.instructions+=2;NFSU2_TR(0x4a1c42);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1c45:{NFSU2_TR(0x4a1c45);
if(r1(R+518)){{goto L4a1c54;}}
}
B4a1c47:L4a1c47:{c.instructions+=4;NFSU2_TR(0x4a1c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1c4a:{NFSU2_TR(0x4a1c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c4b:{NFSU2_TR(0x4a1c4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c4c:{NFSU2_TR(0x4a1c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1c51ull));
TAIL_STATIC(0x49e810u,49e);
}
B4a1c51:L4a1c51:{c.instructions+=1;NFSU2_TR(0x4a1c51);
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
B4a1c54:L4a1c54:{c.instructions+=3;NFSU2_TR(0x4a1c54);
s4(0x83637c,u32(0x1ull));
}
B4a1c5e:{NFSU2_TR(0x4a1c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1c5f:{NFSU2_TR(0x4a1c5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1c70:L4a1c70:{c.instructions+=13;NFSU2_TR(0x4a1c70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c71:{NFSU2_TR(0x4a1c71);
__builtin_memmove((R+20),(R+16),4);
}
B4a1c73:{NFSU2_TR(0x4a1c73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4a1c76:{NFSU2_TR(0x4a1c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x504ull))));
}
B4a1c7c:{NFSU2_TR(0x4a1c7c);
__builtin_memmove((R+0),gp(0x836010),4);
}
B4a1c81:{NFSU2_TR(0x4a1c81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c82:{NFSU2_TR(0x4a1c82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c83:{NFSU2_TR(0x4a1c83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c84:{NFSU2_TR(0x4a1c84);
__builtin_memmove((R+12),(R+4),4);
}
B4a1c86:{NFSU2_TR(0x4a1c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c87:{NFSU2_TR(0x4a1c87);
u8 U[4];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1c8e:{NFSU2_TR(0x4a1c8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1c8f:{NFSU2_TR(0x4a1c8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1c94ull));
TAIL_STATIC(0x49e870u,49e);
}
B4a1c94:L4a1c94:{c.instructions+=4;NFSU2_TR(0x4a1c94);
w4(R+4,u32(0x9full));
}
B4a1c99:{NFSU2_TR(0x4a1c99);
__builtin_memmove((R+24),(R+0),4);
}
B4a1c9b:{NFSU2_TR(0x4a1c9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1c9f:{NFSU2_TR(0x4a1c9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1ca2:L4a1ca2:{c.instructions+=1;NFSU2_TR(0x4a1ca2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4a1ca4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1ca2u);}goto L4a1ca2;}
}
B4a1ca4:L4a1ca4:{c.instructions+=1;NFSU2_TR(0x4a1ca4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a1ca6:L4a1ca6:{c.instructions+=2;NFSU2_TR(0x4a1ca6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ca7:{NFSU2_TR(0x4a1ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1cacull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4a1cac:L4a1cac:{c.instructions+=2;NFSU2_TR(0x4a1cac);
__builtin_memmove((R+4),(R+0),4);
}
B4a1cae:{NFSU2_TR(0x4a1cae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1cb3ull));
TAIL_STATIC(0x5847f0u,584);
}
B4a1cb3:L4a1cb3:{c.instructions+=2;NFSU2_TR(0x4a1cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1cb5:{NFSU2_TR(0x4a1cb5);
if(r1(R+518)){{goto L4a1cce;}}
}
B4a1cb7:L4a1cb7:{c.instructions+=5;NFSU2_TR(0x4a1cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a1cbb:{NFSU2_TR(0x4a1cbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1cbc:{NFSU2_TR(0x4a1cbc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4a1cbf:{NFSU2_TR(0x4a1cbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1cc0:{NFSU2_TR(0x4a1cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1cc5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4a1cc5:L4a1cc5:{c.instructions+=4;NFSU2_TR(0x4a1cc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a1cc8:{NFSU2_TR(0x4a1cc8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4a1cc9:{NFSU2_TR(0x4a1cc9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a1ccc:{NFSU2_TR(0x4a1ccc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1ca6u);}goto L4a1ca6;}}
}
B4a1cce:L4a1cce:{c.instructions+=6;NFSU2_TR(0x4a1cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1cd1:{NFSU2_TR(0x4a1cd1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1cd3:{NFSU2_TR(0x4a1cd3);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1cd8:{NFSU2_TR(0x4a1cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1cd9:{NFSU2_TR(0x4a1cd9);
u8 U[4];
w4(U+0,u32(0x7902dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1cde:{NFSU2_TR(0x4a1cde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1ce3ull));
TAIL_STATIC(0x555eb0u,555);
}
B4a1ce3:L4a1ce3:{c.instructions+=8;NFSU2_TR(0x4a1ce3);
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
B4a1ce6:{NFSU2_TR(0x4a1ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a1ce7:{NFSU2_TR(0x4a1ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1ce8:{NFSU2_TR(0x4a1ce8);
s4(0x8667dc,u32(0x0ull));
}
B4a1cf2:{NFSU2_TR(0x4a1cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1cf3:{NFSU2_TR(0x4a1cf3);
__builtin_memmove((R+16),(R+20),4);
}
B4a1cf5:{NFSU2_TR(0x4a1cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a1cf6:{NFSU2_TR(0x4a1cf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1d00:L4a1d00:{c.instructions+=5;NFSU2_TR(0x4a1d00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1d01:{NFSU2_TR(0x4a1d01);
u8 U[2];
__builtin_memmove((U+0),gp(0x8500cb),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4a1d08:{NFSU2_TR(0x4a1d08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1d09:{NFSU2_TR(0x4a1d09);
__builtin_memmove((R+24),(R+4),4);
}
B4a1d0b:{NFSU2_TR(0x4a1d0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1d14;}}
}
B4a1d0d:L4a1d0d:{c.instructions+=4;NFSU2_TR(0x4a1d0d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a1d0f:{NFSU2_TR(0x4a1d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1d10:{NFSU2_TR(0x4a1d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1d11:{NFSU2_TR(0x4a1d11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1d14:L4a1d14:{c.instructions+=3;NFSU2_TR(0x4a1d14);
__builtin_memmove((R+0),gp(0x835fe8),4);
}
B4a1d19:{NFSU2_TR(0x4a1d19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1d1b:{NFSU2_TR(0x4a1d1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1d0du);}goto L4a1d0d;}}
}
B4a1d1d:L4a1d1d:{c.instructions+=4;NFSU2_TR(0x4a1d1d);
__builtin_memmove((R+0),gp(0x835fe0),4);
}
B4a1d22:{NFSU2_TR(0x4a1d22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1d24:{NFSU2_TR(0x4a1d24);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a1d29:{NFSU2_TR(0x4a1d29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1d0du);}goto L4a1d0d;}}
}
B4a1d2b:L4a1d2b:{c.instructions+=3;NFSU2_TR(0x4a1d2b);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4a1d30:{NFSU2_TR(0x4a1d30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1d31:{NFSU2_TR(0x4a1d31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1d36ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4a1d36:L4a1d36:{c.instructions+=3;NFSU2_TR(0x4a1d36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1d39:{NFSU2_TR(0x4a1d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1d3b:{NFSU2_TR(0x4a1d3b);
if(r1(R+518)){{goto L4a1d42;}}
}
B4a1d3d:L4a1d3d:{c.instructions+=1;NFSU2_TR(0x4a1d3d);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a1d42:L4a1d42:{c.instructions+=4;NFSU2_TR(0x4a1d42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1d43:{NFSU2_TR(0x4a1d43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1d45:{NFSU2_TR(0x4a1d45);
w1(R+12,u8(0x1ull));
}
B4a1d47:{NFSU2_TR(0x4a1d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1d4cull));
TAIL_STATIC(0x58f740u,58f);
}
B4a1d4c:L4a1d4c:{c.instructions+=3;NFSU2_TR(0x4a1d4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1d4f:{NFSU2_TR(0x4a1d4f);
__builtin_memmove((R+4),(R+0),4);
}
B4a1d51:{NFSU2_TR(0x4a1d51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1d56ull));
TAIL_STATIC(0x582930u,582);
}
B4a1d56:L4a1d56:{c.instructions+=2;NFSU2_TR(0x4a1d56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1d58:{NFSU2_TR(0x4a1d58);
if(r1(R+518)){{goto L4a1d7b;}}
}
B4a1d5a:L4a1d5a:{c.instructions+=2;NFSU2_TR(0x4a1d5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1d5c:{NFSU2_TR(0x4a1d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1d61ull));
TAIL_STATIC(0x58f740u,58f);
}
B4a1d61:L4a1d61:{c.instructions+=3;NFSU2_TR(0x4a1d61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1d64:{NFSU2_TR(0x4a1d64);
__builtin_memmove((R+4),(R+0),4);
}
B4a1d66:{NFSU2_TR(0x4a1d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1d6bull));
TAIL_STATIC(0x582930u,582);
}
B4a1d6b:L4a1d6b:{c.instructions+=3;NFSU2_TR(0x4a1d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1d71:{NFSU2_TR(0x4a1d71);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a1d77:{NFSU2_TR(0x4a1d77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1d7b;}}
}
B4a1d79:L4a1d79:{c.instructions+=1;NFSU2_TR(0x4a1d79);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4a1d7b:L4a1d7b:{c.instructions+=3;NFSU2_TR(0x4a1d7b);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a1d7f:{NFSU2_TR(0x4a1d7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1d81:{NFSU2_TR(0x4a1d81);
if(r1(R+518)){{goto L4a1e30;}}
}
B4a1d87:L4a1d87:{c.instructions+=2;NFSU2_TR(0x4a1d87);
u8 U[4];
w4(U+0,u32(u32(m4(0x836008))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1d91:{NFSU2_TR(0x4a1d91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1df5;}}
}
B4a1d93:L4a1d93:{c.instructions+=3;NFSU2_TR(0x4a1d93);
__builtin_memmove((R+0),gp(0x835fc0),4);
}
B4a1d98:{NFSU2_TR(0x4a1d98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1d9a:{NFSU2_TR(0x4a1d9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1df5;}}
}
B4a1d9c:L4a1d9c:{c.instructions+=3;NFSU2_TR(0x4a1d9c);
__builtin_memmove((R+0),gp(0x835ff4),4);
}
B4a1da1:{NFSU2_TR(0x4a1da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1da3:{NFSU2_TR(0x4a1da3);
if(r1(R+518)){{goto L4a1ded;}}
}
B4a1da5:L4a1da5:{c.instructions+=3;NFSU2_TR(0x4a1da5);
__builtin_memmove((R+0),gp(0x835fbc),4);
}
B4a1daa:{NFSU2_TR(0x4a1daa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1dac:{NFSU2_TR(0x4a1dac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1ded;}}
}
B4a1dae:L4a1dae:{c.instructions+=2;NFSU2_TR(0x4a1dae);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1db0:{NFSU2_TR(0x4a1db0);
if(r1(R+518)){{goto L4a1ded;}}
}
B4a1db2:L4a1db2:{c.instructions+=3;NFSU2_TR(0x4a1db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a1db5:{NFSU2_TR(0x4a1db5);
u8 U[4];
w4(U+0,u32(0x790300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dba:{NFSU2_TR(0x4a1dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1dbfull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a1dbf:L4a1dbf:{c.instructions+=4;NFSU2_TR(0x4a1dbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dc0:{NFSU2_TR(0x4a1dc0);
u8 U[4];
w4(U+0,u32(0x4b4e3889ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dc5:{NFSU2_TR(0x4a1dc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dc6:{NFSU2_TR(0x4a1dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1dcbull));
TAIL_STATIC(0x495460u,495);
}
B4a1dcb:L4a1dcb:{c.instructions+=2;NFSU2_TR(0x4a1dcb);
u8 U[4];
w4(U+0,u32(0x3438b351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dd0:{NFSU2_TR(0x4a1dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1dd5ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1dd5:L4a1dd5:{c.instructions+=5;NFSU2_TR(0x4a1dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a1dd9:{NFSU2_TR(0x4a1dd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dda:{NFSU2_TR(0x4a1dda);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ddc:{NFSU2_TR(0x4a1ddc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ddd:{NFSU2_TR(0x4a1ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1de2ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a1de2:L4a1de2:{c.instructions+=6;NFSU2_TR(0x4a1de2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1de5:{NFSU2_TR(0x4a1de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1de6:{NFSU2_TR(0x4a1de6);
w1(R+0,u8(0x1ull));
}
B4a1de8:{NFSU2_TR(0x4a1de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1de9:{NFSU2_TR(0x4a1de9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1dea:{NFSU2_TR(0x4a1dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1ded:L4a1ded:{c.instructions+=5;NFSU2_TR(0x4a1ded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1dee:{NFSU2_TR(0x4a1dee);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a1df0:{NFSU2_TR(0x4a1df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1df1:{NFSU2_TR(0x4a1df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1df2:{NFSU2_TR(0x4a1df2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1df5:L4a1df5:{c.instructions+=3;NFSU2_TR(0x4a1df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a1df8:{NFSU2_TR(0x4a1df8);
u8 U[4];
w4(U+0,u32(0x7902f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1dfd:{NFSU2_TR(0x4a1dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e02ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4a1e02:L4a1e02:{c.instructions+=4;NFSU2_TR(0x4a1e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e03:{NFSU2_TR(0x4a1e03);
u8 U[4];
w4(U+0,u32(0x4b4e3889ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e08:{NFSU2_TR(0x4a1e08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e09:{NFSU2_TR(0x4a1e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e0eull));
TAIL_STATIC(0x495460u,495);
}
B4a1e0e:L4a1e0e:{c.instructions+=2;NFSU2_TR(0x4a1e0e);
u8 U[4];
w4(U+0,u32(0x5632d96dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e13:{NFSU2_TR(0x4a1e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e18ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1e18:L4a1e18:{c.instructions+=5;NFSU2_TR(0x4a1e18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e19:{NFSU2_TR(0x4a1e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1e1d:{NFSU2_TR(0x4a1e1d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e1f:{NFSU2_TR(0x4a1e1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e20:{NFSU2_TR(0x4a1e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e25ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a1e25:L4a1e25:{c.instructions+=6;NFSU2_TR(0x4a1e25);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1e28:{NFSU2_TR(0x4a1e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1e29:{NFSU2_TR(0x4a1e29);
w1(R+0,u8(0x1ull));
}
B4a1e2b:{NFSU2_TR(0x4a1e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1e2c:{NFSU2_TR(0x4a1e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1e2d:{NFSU2_TR(0x4a1e2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1e30:L4a1e30:{c.instructions+=3;NFSU2_TR(0x4a1e30);
__builtin_memmove((R+0),gp(0x836008),4);
}
B4a1e35:{NFSU2_TR(0x4a1e35);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a1e3a:{NFSU2_TR(0x4a1e3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1e7b;}}
}
B4a1e3c:L4a1e3c:{c.instructions+=3;NFSU2_TR(0x4a1e3c);
__builtin_memmove((R+4),gp(0x835fbc),4);
}
B4a1e42:{NFSU2_TR(0x4a1e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1e44:{NFSU2_TR(0x4a1e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1e7b;}}
}
B4a1e46:L4a1e46:{c.instructions+=5;NFSU2_TR(0x4a1e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1e49:{NFSU2_TR(0x4a1e49);
u8 U[4];
w4(U+0,u32(0x6729a51eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e4e:{NFSU2_TR(0x4a1e4e);
u8 U[4];
w4(U+0,u32(0x4b4e3889ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e53:{NFSU2_TR(0x4a1e53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e54:{NFSU2_TR(0x4a1e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e59ull));
TAIL_STATIC(0x495460u,495);
}
B4a1e59:L4a1e59:{c.instructions+=2;NFSU2_TR(0x4a1e59);
u8 U[4];
w4(U+0,u32(0x6729a51eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e5e:{NFSU2_TR(0x4a1e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e63ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1e63:L4a1e63:{c.instructions+=5;NFSU2_TR(0x4a1e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a1e67:{NFSU2_TR(0x4a1e67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e68:{NFSU2_TR(0x4a1e68);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e6a:{NFSU2_TR(0x4a1e6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e6b:{NFSU2_TR(0x4a1e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e70ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a1e70:L4a1e70:{c.instructions+=6;NFSU2_TR(0x4a1e70);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1e73:{NFSU2_TR(0x4a1e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1e74:{NFSU2_TR(0x4a1e74);
w1(R+0,u8(0x1ull));
}
B4a1e76:{NFSU2_TR(0x4a1e76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1e77:{NFSU2_TR(0x4a1e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1e78:{NFSU2_TR(0x4a1e78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1e7b:L4a1e7b:{c.instructions+=2;NFSU2_TR(0x4a1e7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1e7d:{NFSU2_TR(0x4a1e7d);
if(r1(R+518)){{goto L4a1e8c;}}
}
B4a1e7f:L4a1e7f:{c.instructions+=3;NFSU2_TR(0x4a1e7f);
__builtin_memmove((R+0),gp(0x835ff4),4);
}
B4a1e84:{NFSU2_TR(0x4a1e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1e86:{NFSU2_TR(0x4a1e86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1dedu);}goto L4a1ded;}}
}
B4a1e8c:L4a1e8c:{c.instructions+=5;NFSU2_TR(0x4a1e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1e8f:{NFSU2_TR(0x4a1e8f);
u8 U[4];
w4(U+0,u32(0xc48a4103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e94:{NFSU2_TR(0x4a1e94);
u8 U[4];
w4(U+0,u32(0x4b4e3889ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e99:{NFSU2_TR(0x4a1e99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1e9a:{NFSU2_TR(0x4a1e9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1e9full));
TAIL_STATIC(0x495460u,495);
}
B4a1e9f:L4a1e9f:{c.instructions+=2;NFSU2_TR(0x4a1e9f);
u8 U[4];
w4(U+0,u32(0xc48a4103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ea4:{NFSU2_TR(0x4a1ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1ea9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1ea9:L4a1ea9:{c.instructions+=5;NFSU2_TR(0x4a1ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1ead:{NFSU2_TR(0x4a1ead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1eae:{NFSU2_TR(0x4a1eae);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1eb0:{NFSU2_TR(0x4a1eb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1eb1:{NFSU2_TR(0x4a1eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1eb6ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a1eb6:L4a1eb6:{c.instructions+=6;NFSU2_TR(0x4a1eb6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1eb9:{NFSU2_TR(0x4a1eb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a1eba:{NFSU2_TR(0x4a1eba);
w1(R+0,u8(0x1ull));
}
B4a1ebc:{NFSU2_TR(0x4a1ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1ebd:{NFSU2_TR(0x4a1ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1ebe:{NFSU2_TR(0x4a1ebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1ed0:L4a1ed0:{c.instructions+=5;NFSU2_TR(0x4a1ed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ed1:{NFSU2_TR(0x4a1ed1);
__builtin_memmove((R+24),(R+4),4);
}
B4a1ed3:{NFSU2_TR(0x4a1ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1ed6:{NFSU2_TR(0x4a1ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1ed8:{NFSU2_TR(0x4a1ed8);
if(r1(R+518)){{goto L4a1eea;}}
}
B4a1eda:L4a1eda:{c.instructions+=2;NFSU2_TR(0x4a1eda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1edb:{NFSU2_TR(0x4a1edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1ee0ull));
TAIL_STATIC(0x540a60u,540);
}
B4a1ee0:L4a1ee0:{c.instructions+=2;NFSU2_TR(0x4a1ee0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a1ee3:{NFSU2_TR(0x4a1ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a1eea:L4a1eea:{c.instructions+=4;NFSU2_TR(0x4a1eea);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4a1eef:{NFSU2_TR(0x4a1eef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ef0:{NFSU2_TR(0x4a1ef0);
u8 U[4];
w4(U+0,u32(0xf9e94d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1ef5:{NFSU2_TR(0x4a1ef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1efaull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a1efa:L4a1efa:{c.instructions+=9;NFSU2_TR(0x4a1efa);
w4(R+0,u32(0x1ull));
}
B4a1eff:{NFSU2_TR(0x4a1eff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f00:{NFSU2_TR(0x4a1f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a1f06:{NFSU2_TR(0x4a1f06);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f0b:{NFSU2_TR(0x4a1f0b);
__builtin_memmove(gp(0x83637c),(R+0),4);
}
B4a1f10:{NFSU2_TR(0x4a1f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1f13:{NFSU2_TR(0x4a1f13);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f18:{NFSU2_TR(0x4a1f18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f19:{NFSU2_TR(0x4a1f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1f1eull));
TAIL_STATIC(0x537c00u,537);
}
B4a1f1e:L4a1f1e:{c.instructions+=3;NFSU2_TR(0x4a1f1e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1f21:{NFSU2_TR(0x4a1f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1f22:{NFSU2_TR(0x4a1f22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1f30:L4a1f30:{c.instructions+=5;NFSU2_TR(0x4a1f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1f34:{NFSU2_TR(0x4a1f34);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1f37:{NFSU2_TR(0x4a1f37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f38:{NFSU2_TR(0x4a1f38);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1380ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a1f3f:{NFSU2_TR(0x4a1f3f);
if(r1(R+518)){{goto L4a1fca;}}
}
B4a1f45:L4a1f45:{c.instructions+=2;NFSU2_TR(0x4a1f45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a1f48:{NFSU2_TR(0x4a1f48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1f64;}}
}
B4a1f4a:L4a1f4a:{c.instructions+=3;NFSU2_TR(0x4a1f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a1f4d:{NFSU2_TR(0x4a1f4d);
u8 U[4];
w4(U+0,u32(0x205b2bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f52:{NFSU2_TR(0x4a1f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1f57ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1f57:L4a1f57:{c.instructions+=4;NFSU2_TR(0x4a1f57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f58:{NFSU2_TR(0x4a1f58);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f5d:{NFSU2_TR(0x4a1f5d);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f62:{NFSU2_TR(0x4a1f62);
{goto L4a1f7d;}
}
B4a1f64:L4a1f64:{c.instructions+=2;NFSU2_TR(0x4a1f64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72617465ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1f69:{NFSU2_TR(0x4a1f69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a1f94;}}
}
B4a1f6b:L4a1f6b:{c.instructions+=3;NFSU2_TR(0x4a1f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a1f6e:{NFSU2_TR(0x4a1f6e);
u8 U[4];
w4(U+0,u32(0xdf834843ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f73:{NFSU2_TR(0x4a1f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1f78ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a1f78:L4a1f78:{c.instructions+=3;NFSU2_TR(0x4a1f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f79:{NFSU2_TR(0x4a1f79);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f7b:{NFSU2_TR(0x4a1f7b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f7d:L4a1f7d:{c.instructions+=4;NFSU2_TR(0x4a1f7d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f82:{NFSU2_TR(0x4a1f82);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f87:{NFSU2_TR(0x4a1f87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f88:{NFSU2_TR(0x4a1f88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1f8dull));
TAIL_STATIC(0x558540u,558);
}
B4a1f8d:L4a1f8d:{c.instructions+=3;NFSU2_TR(0x4a1f8d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a1f90:{NFSU2_TR(0x4a1f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1f91:{NFSU2_TR(0x4a1f91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1f94:L4a1f94:{c.instructions+=2;NFSU2_TR(0x4a1f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a1f96:{NFSU2_TR(0x4a1f96);
if(r1(R+518)){{goto L4a1fa9;}}
}
B4a1f98:L4a1f98:{c.instructions+=4;NFSU2_TR(0x4a1f98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f99:{NFSU2_TR(0x4a1f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a1f9c:{NFSU2_TR(0x4a1f9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1f9d:{NFSU2_TR(0x4a1f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1fa2ull));
TAIL_STATIC(0x49e810u,49e);
}
B4a1fa2:L4a1fa2:{c.instructions+=3;NFSU2_TR(0x4a1fa2);
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
B4a1fa5:{NFSU2_TR(0x4a1fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1fa6:{NFSU2_TR(0x4a1fa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1fa9:L4a1fa9:{c.instructions+=3;NFSU2_TR(0x4a1fa9);
__builtin_memmove((R+0),gp(0x835fe0),4);
}
B4a1fae:{NFSU2_TR(0x4a1fae);
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
B4a1fb0:{NFSU2_TR(0x4a1fb0);
if(r1(R+518)){{goto L4a1fca;}}
}
B4a1fb2:L4a1fb2:{c.instructions+=6;NFSU2_TR(0x4a1fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a1fb5:{NFSU2_TR(0x4a1fb5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fb7:{NFSU2_TR(0x4a1fb7);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fbc:{NFSU2_TR(0x4a1fbc);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fc1:{NFSU2_TR(0x4a1fc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fc2:{NFSU2_TR(0x4a1fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a1fc7ull));
TAIL_STATIC(0x537c00u,537);
}
B4a1fc7:L4a1fc7:{c.instructions+=1;NFSU2_TR(0x4a1fc7);
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
B4a1fca:L4a1fca:{c.instructions+=2;NFSU2_TR(0x4a1fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a1fcb:{NFSU2_TR(0x4a1fcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a1fd0:L4a1fd0:{c.instructions+=7;NFSU2_TR(0x4a1fd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fd1:{NFSU2_TR(0x4a1fd1);
__builtin_memmove((R+24),(R+4),4);
}
B4a1fd3:{NFSU2_TR(0x4a1fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a1fd9:{NFSU2_TR(0x4a1fd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fda:{NFSU2_TR(0x4a1fda);
__builtin_memmove((R+28),(R+8),4);
}
B4a1fdc:{NFSU2_TR(0x4a1fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a1fdf:{NFSU2_TR(0x4a1fdf);
}
B4a1fe0:L4a1fe0:{c.instructions+=4;NFSU2_TR(0x4a1fe0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4a1fe2:{NFSU2_TR(0x4a1fe2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a1fe3:{NFSU2_TR(0x4a1fe3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a1fe5:{NFSU2_TR(0x4a1fe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a1fe0u);}goto L4a1fe0;}}
}
B4a1fe7:L4a1fe7:{c.instructions+=7;NFSU2_TR(0x4a1fe7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a1fe8:{NFSU2_TR(0x4a1fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a1fec:{NFSU2_TR(0x4a1fec);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B4a1fee:{NFSU2_TR(0x4a1fee);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4a1ff2:{NFSU2_TR(0x4a1ff2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a1ff8:{NFSU2_TR(0x4a1ff8);
__builtin_memmove((R+0),(R+8),4);
}
B4a1ffa:{NFSU2_TR(0x4a1ffa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4a202au,4a2);}
}
B4a1ffc:L4a1ffc:{c.instructions+=1;NFSU2_TR(0x4a1ffc);
__builtin_memmove((R+16),(R+16),4);
TAIL_STATIC(0x4a2000u,4a2);
}
XIT:NFSU2_TR_EXIT(0x4a1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
