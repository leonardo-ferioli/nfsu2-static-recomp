#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b0(u8* __restrict R,Cpu& c);
u32 body_6b2(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b1(u8* __restrict R,Cpu& c);
u32 page_6b1(Cpu& c){return body_6b1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b1001:goto L6b1001;
case 0x6b1004:c.instructions+=14;goto B6b1004;
case 0x6b1005:c.instructions+=13;goto B6b1005;
case 0x6b1006:c.instructions+=12;goto B6b1006;
case 0x6b1007:c.instructions+=11;goto B6b1007;
case 0x6b1008:c.instructions+=10;goto B6b1008;
case 0x6b100e:c.instructions+=9;goto B6b100e;
case 0x6b1011:c.instructions+=8;goto B6b1011;
case 0x6b1014:c.instructions+=7;goto B6b1014;
case 0x6b1017:c.instructions+=6;goto B6b1017;
case 0x6b101a:c.instructions+=5;goto B6b101a;
case 0x6b101f:c.instructions+=4;goto B6b101f;
case 0x6b1022:c.instructions+=3;goto B6b1022;
case 0x6b1023:c.instructions+=2;goto B6b1023;
case 0x6b1025:c.instructions+=1;goto B6b1025;
case 0x6b102a:goto L6b102a;
case 0x6b102c:c.instructions+=1;goto B6b102c;
case 0x6b102e:goto L6b102e;
case 0x6b102f:c.instructions+=2;goto B6b102f;
case 0x6b1032:c.instructions+=1;goto B6b1032;
case 0x6b1034:goto L6b1034;
case 0x6b1036:goto L6b1036;
case 0x6b103c:c.instructions+=2;goto B6b103c;
case 0x6b103e:c.instructions+=1;goto B6b103e;
case 0x6b1043:goto L6b1043;
case 0x6b1045:c.instructions+=1;goto B6b1045;
case 0x6b1047:goto L6b1047;
case 0x6b104d:c.instructions+=3;goto B6b104d;
case 0x6b104f:c.instructions+=2;goto B6b104f;
case 0x6b1051:c.instructions+=1;goto B6b1051;
case 0x6b1053:goto L6b1053;
case 0x6b1054:c.instructions+=2;goto B6b1054;
case 0x6b1056:c.instructions+=1;goto B6b1056;
case 0x6b105b:goto L6b105b;
case 0x6b105d:c.instructions+=1;goto B6b105d;
case 0x6b105f:goto L6b105f;
case 0x6b1065:c.instructions+=2;goto B6b1065;
case 0x6b1068:c.instructions+=1;goto B6b1068;
case 0x6b106a:goto L6b106a;
case 0x6b106b:c.instructions+=4;goto B6b106b;
case 0x6b106c:c.instructions+=3;goto B6b106c;
case 0x6b106d:c.instructions+=2;goto B6b106d;
case 0x6b106e:c.instructions+=1;goto B6b106e;
case 0x6b106f:goto L6b106f;
case 0x6b1071:c.instructions+=10;goto B6b1071;
case 0x6b1072:c.instructions+=9;goto B6b1072;
case 0x6b1074:c.instructions+=8;goto B6b1074;
case 0x6b107a:c.instructions+=7;goto B6b107a;
case 0x6b107b:c.instructions+=6;goto B6b107b;
case 0x6b107d:c.instructions+=5;goto B6b107d;
case 0x6b1083:c.instructions+=4;goto B6b1083;
case 0x6b1088:c.instructions+=3;goto B6b1088;
case 0x6b108d:c.instructions+=2;goto B6b108d;
case 0x6b1090:c.instructions+=1;goto B6b1090;
case 0x6b1092:goto L6b1092;
case 0x6b1094:c.instructions+=2;goto B6b1094;
case 0x6b1095:c.instructions+=1;goto B6b1095;
case 0x6b109a:goto L6b109a;
case 0x6b10a0:c.instructions+=16;goto B6b10a0;
case 0x6b10a1:c.instructions+=15;goto B6b10a1;
case 0x6b10a2:c.instructions+=14;goto B6b10a2;
case 0x6b10a4:c.instructions+=13;goto B6b10a4;
case 0x6b10a6:c.instructions+=12;goto B6b10a6;
case 0x6b10a8:c.instructions+=11;goto B6b10a8;
case 0x6b10a9:c.instructions+=10;goto B6b10a9;
case 0x6b10aa:c.instructions+=9;goto B6b10aa;
case 0x6b10ad:c.instructions+=8;goto B6b10ad;
case 0x6b10b0:c.instructions+=7;goto B6b10b0;
case 0x6b10b3:c.instructions+=6;goto B6b10b3;
case 0x6b10ba:c.instructions+=5;goto B6b10ba;
case 0x6b10bd:c.instructions+=4;goto B6b10bd;
case 0x6b10bf:c.instructions+=3;goto B6b10bf;
case 0x6b10c4:c.instructions+=2;goto B6b10c4;
case 0x6b10c6:c.instructions+=1;goto B6b10c6;
case 0x6b10cc:goto L6b10cc;
case 0x6b10ce:c.instructions+=13;goto B6b10ce;
case 0x6b10cf:c.instructions+=12;goto B6b10cf;
case 0x6b10d2:c.instructions+=11;goto B6b10d2;
case 0x6b10d3:c.instructions+=10;goto B6b10d3;
case 0x6b10d9:c.instructions+=9;goto B6b10d9;
case 0x6b10da:c.instructions+=8;goto B6b10da;
case 0x6b10dd:c.instructions+=7;goto B6b10dd;
case 0x6b10de:c.instructions+=6;goto B6b10de;
case 0x6b10e4:c.instructions+=5;goto B6b10e4;
case 0x6b10e5:c.instructions+=4;goto B6b10e5;
case 0x6b10ec:c.instructions+=3;goto B6b10ec;
case 0x6b10ee:c.instructions+=2;goto B6b10ee;
case 0x6b10f4:c.instructions+=1;goto B6b10f4;
case 0x6b10f9:goto L6b10f9;
case 0x6b10fb:c.instructions+=1;goto B6b10fb;
case 0x6b10fd:goto L6b10fd;
case 0x6b10fe:c.instructions+=2;goto B6b10fe;
case 0x6b1101:c.instructions+=1;goto B6b1101;
case 0x6b1103:goto L6b1103;
case 0x6b1107:c.instructions+=3;goto B6b1107;
case 0x6b110b:c.instructions+=2;goto B6b110b;
case 0x6b110e:c.instructions+=1;goto B6b110e;
case 0x6b1110:goto L6b1110;
case 0x6b1117:goto L6b1117;
case 0x6b1119:c.instructions+=1;goto B6b1119;
case 0x6b111b:goto L6b111b;
case 0x6b111d:goto L6b111d;
case 0x6b111f:c.instructions+=13;goto B6b111f;
case 0x6b1120:c.instructions+=12;goto B6b1120;
case 0x6b1123:c.instructions+=11;goto B6b1123;
case 0x6b1124:c.instructions+=10;goto B6b1124;
case 0x6b112a:c.instructions+=9;goto B6b112a;
case 0x6b112b:c.instructions+=8;goto B6b112b;
case 0x6b112e:c.instructions+=7;goto B6b112e;
case 0x6b112f:c.instructions+=6;goto B6b112f;
case 0x6b1135:c.instructions+=5;goto B6b1135;
case 0x6b1136:c.instructions+=4;goto B6b1136;
case 0x6b113d:c.instructions+=3;goto B6b113d;
case 0x6b113f:c.instructions+=2;goto B6b113f;
case 0x6b1145:c.instructions+=1;goto B6b1145;
case 0x6b114a:goto L6b114a;
case 0x6b114c:c.instructions+=1;goto B6b114c;
case 0x6b114e:goto L6b114e;
case 0x6b114f:c.instructions+=2;goto B6b114f;
case 0x6b1151:c.instructions+=1;goto B6b1151;
case 0x6b1153:goto L6b1153;
case 0x6b1157:c.instructions+=4;goto B6b1157;
case 0x6b1159:c.instructions+=3;goto B6b1159;
case 0x6b115a:c.instructions+=2;goto B6b115a;
case 0x6b115c:c.instructions+=1;goto B6b115c;
case 0x6b115e:goto L6b115e;
case 0x6b1161:goto L6b1161;
case 0x6b1163:c.instructions+=2;goto B6b1163;
case 0x6b1166:c.instructions+=1;goto B6b1166;
case 0x6b1168:goto L6b1168;
case 0x6b116a:c.instructions+=1;goto B6b116a;
case 0x6b116f:goto L6b116f;
case 0x6b1173:c.instructions+=4;goto B6b1173;
case 0x6b1176:c.instructions+=3;goto B6b1176;
case 0x6b117d:c.instructions+=2;goto B6b117d;
case 0x6b1180:c.instructions+=1;goto B6b1180;
case 0x6b1183:goto L6b1183;
case 0x6b1186:c.instructions+=6;goto B6b1186;
case 0x6b1188:c.instructions+=5;goto B6b1188;
case 0x6b118b:c.instructions+=4;goto B6b118b;
case 0x6b1192:c.instructions+=3;goto B6b1192;
case 0x6b1195:c.instructions+=2;goto B6b1195;
case 0x6b1198:c.instructions+=1;goto B6b1198;
case 0x6b119e:goto L6b119e;
case 0x6b11a2:c.instructions+=1;goto B6b11a2;
case 0x6b11a8:goto L6b11a8;
case 0x6b11ac:c.instructions+=1;goto B6b11ac;
case 0x6b11b2:goto L6b11b2;
case 0x6b11b5:c.instructions+=3;goto B6b11b5;
case 0x6b11b8:c.instructions+=2;goto B6b11b8;
case 0x6b11be:c.instructions+=1;goto B6b11be;
case 0x6b11c4:goto L6b11c4;
case 0x6b11c8:c.instructions+=3;goto B6b11c8;
case 0x6b11c9:c.instructions+=2;goto B6b11c9;
case 0x6b11cb:c.instructions+=1;goto B6b11cb;
case 0x6b11d1:goto L6b11d1;
case 0x6b11d5:c.instructions+=1;goto B6b11d5;
case 0x6b11db:goto L6b11db;
case 0x6b11df:c.instructions+=2;goto B6b11df;
case 0x6b11e3:c.instructions+=1;goto B6b11e3;
case 0x6b11e5:goto L6b11e5;
case 0x6b11ec:c.instructions+=1;goto B6b11ec;
case 0x6b11f2:goto L6b11f2;
case 0x6b11f5:c.instructions+=5;goto B6b11f5;
case 0x6b11fc:c.instructions+=4;goto B6b11fc;
case 0x6b11fe:c.instructions+=3;goto B6b11fe;
case 0x6b1200:c.instructions+=2;goto B6b1200;
case 0x6b1203:c.instructions+=1;goto B6b1203;
case 0x6b1209:goto L6b1209;
case 0x6b1210:c.instructions+=3;goto B6b1210;
case 0x6b1213:c.instructions+=2;goto B6b1213;
case 0x6b1215:c.instructions+=1;goto B6b1215;
case 0x6b121b:goto L6b121b;
case 0x6b1222:c.instructions+=3;goto B6b1222;
case 0x6b1224:c.instructions+=2;goto B6b1224;
case 0x6b1227:c.instructions+=1;goto B6b1227;
case 0x6b122d:goto L6b122d;
case 0x6b1234:c.instructions+=1;goto B6b1234;
case 0x6b123a:goto L6b123a;
case 0x6b123f:goto L6b123f;
case 0x6b1243:c.instructions+=1;goto B6b1243;
case 0x6b1249:goto L6b1249;
case 0x6b1250:c.instructions+=2;goto B6b1250;
case 0x6b1252:c.instructions+=1;goto B6b1252;
case 0x6b1254:goto L6b1254;
case 0x6b125b:c.instructions+=3;goto B6b125b;
case 0x6b125e:c.instructions+=2;goto B6b125e;
case 0x6b1260:c.instructions+=1;goto B6b1260;
case 0x6b1262:goto L6b1262;
case 0x6b1269:c.instructions+=3;goto B6b1269;
case 0x6b126b:c.instructions+=2;goto B6b126b;
case 0x6b126e:c.instructions+=1;goto B6b126e;
case 0x6b1270:goto L6b1270;
case 0x6b1272:c.instructions+=1;goto B6b1272;
case 0x6b1278:goto L6b1278;
case 0x6b127f:c.instructions+=2;goto B6b127f;
case 0x6b1286:c.instructions+=1;goto B6b1286;
case 0x6b128b:goto L6b128b;
case 0x6b128f:c.instructions+=1;goto B6b128f;
case 0x6b1291:goto L6b1291;
case 0x6b1294:c.instructions+=5;goto B6b1294;
case 0x6b1297:c.instructions+=4;goto B6b1297;
case 0x6b129a:c.instructions+=3;goto B6b129a;
case 0x6b129d:c.instructions+=2;goto B6b129d;
case 0x6b12a1:c.instructions+=1;goto B6b12a1;
case 0x6b12a7:goto L6b12a7;
case 0x6b12ab:c.instructions+=2;goto B6b12ab;
case 0x6b12ad:c.instructions+=1;goto B6b12ad;
case 0x6b12b2:goto L6b12b2;
case 0x6b12b5:c.instructions+=2;goto B6b12b5;
case 0x6b12b8:c.instructions+=1;goto B6b12b8;
case 0x6b12be:goto L6b12be;
case 0x6b12c1:c.instructions+=4;goto B6b12c1;
case 0x6b12c4:c.instructions+=3;goto B6b12c4;
case 0x6b12c7:c.instructions+=2;goto B6b12c7;
case 0x6b12cd:c.instructions+=1;goto B6b12cd;
case 0x6b12d3:goto L6b12d3;
case 0x6b12d6:c.instructions+=8;goto B6b12d6;
case 0x6b12d9:c.instructions+=7;goto B6b12d9;
case 0x6b12dc:c.instructions+=6;goto B6b12dc;
case 0x6b12df:c.instructions+=5;goto B6b12df;
case 0x6b12e2:c.instructions+=4;goto B6b12e2;
case 0x6b12e5:c.instructions+=3;goto B6b12e5;
case 0x6b12e8:c.instructions+=2;goto B6b12e8;
case 0x6b12ec:c.instructions+=1;goto B6b12ec;
case 0x6b12f2:goto L6b12f2;
case 0x6b12f5:c.instructions+=2;goto B6b12f5;
case 0x6b12f8:c.instructions+=1;goto B6b12f8;
case 0x6b12fe:goto L6b12fe;
case 0x6b1301:c.instructions+=8;goto B6b1301;
case 0x6b1303:c.instructions+=7;goto B6b1303;
case 0x6b1307:c.instructions+=6;goto B6b1307;
case 0x6b130a:c.instructions+=5;goto B6b130a;
case 0x6b130d:c.instructions+=4;goto B6b130d;
case 0x6b1310:c.instructions+=3;goto B6b1310;
case 0x6b1313:c.instructions+=2;goto B6b1313;
case 0x6b1317:c.instructions+=1;goto B6b1317;
case 0x6b131d:goto L6b131d;
case 0x6b1323:c.instructions+=5;goto B6b1323;
case 0x6b1326:c.instructions+=4;goto B6b1326;
case 0x6b1328:c.instructions+=3;goto B6b1328;
case 0x6b132a:c.instructions+=2;goto B6b132a;
case 0x6b132d:c.instructions+=1;goto B6b132d;
case 0x6b1333:goto L6b1333;
case 0x6b1336:c.instructions+=1;goto B6b1336;
case 0x6b1338:goto L6b1338;
case 0x6b133a:c.instructions+=5;goto B6b133a;
case 0x6b1341:c.instructions+=4;goto B6b1341;
case 0x6b1343:c.instructions+=3;goto B6b1343;
case 0x6b1345:c.instructions+=2;goto B6b1345;
case 0x6b1348:c.instructions+=1;goto B6b1348;
case 0x6b134a:goto L6b134a;
case 0x6b1351:c.instructions+=3;goto B6b1351;
case 0x6b1354:c.instructions+=2;goto B6b1354;
case 0x6b1356:c.instructions+=1;goto B6b1356;
case 0x6b1358:goto L6b1358;
case 0x6b135f:c.instructions+=3;goto B6b135f;
case 0x6b1361:c.instructions+=2;goto B6b1361;
case 0x6b1364:c.instructions+=1;goto B6b1364;
case 0x6b1366:goto L6b1366;
case 0x6b136d:c.instructions+=1;goto B6b136d;
case 0x6b136f:goto L6b136f;
case 0x6b1376:goto L6b1376;
case 0x6b1378:goto L6b1378;
case 0x6b137a:c.instructions+=3;goto B6b137a;
case 0x6b137d:c.instructions+=2;goto B6b137d;
case 0x6b137f:c.instructions+=1;goto B6b137f;
case 0x6b1381:goto L6b1381;
case 0x6b1388:c.instructions+=3;goto B6b1388;
case 0x6b138a:c.instructions+=2;goto B6b138a;
case 0x6b138d:c.instructions+=1;goto B6b138d;
case 0x6b138f:goto L6b138f;
case 0x6b1391:c.instructions+=1;goto B6b1391;
case 0x6b1393:goto L6b1393;
case 0x6b1397:c.instructions+=2;goto B6b1397;
case 0x6b139b:c.instructions+=1;goto B6b139b;
case 0x6b139d:goto L6b139d;
case 0x6b13a0:c.instructions+=1;goto B6b13a0;
case 0x6b13a2:goto L6b13a2;
case 0x6b13a5:c.instructions+=5;goto B6b13a5;
case 0x6b13a8:c.instructions+=4;goto B6b13a8;
case 0x6b13ab:c.instructions+=3;goto B6b13ab;
case 0x6b13ae:c.instructions+=2;goto B6b13ae;
case 0x6b13b1:c.instructions+=1;goto B6b13b1;
case 0x6b13b3:goto L6b13b3;
case 0x6b13b6:c.instructions+=2;goto B6b13b6;
case 0x6b13ba:c.instructions+=1;goto B6b13ba;
case 0x6b13c0:goto L6b13c0;
case 0x6b13c2:c.instructions+=3;goto B6b13c2;
case 0x6b13c4:c.instructions+=2;goto B6b13c4;
case 0x6b13c7:c.instructions+=1;goto B6b13c7;
case 0x6b13c9:goto L6b13c9;
case 0x6b13d0:c.instructions+=4;goto B6b13d0;
case 0x6b13d1:c.instructions+=3;goto B6b13d1;
case 0x6b13d3:c.instructions+=2;goto B6b13d3;
case 0x6b13d6:c.instructions+=1;goto B6b13d6;
case 0x6b13d8:goto L6b13d8;
case 0x6b13da:c.instructions+=1;goto B6b13da;
case 0x6b13df:goto L6b13df;
case 0x6b13e1:c.instructions+=1;goto B6b13e1;
case 0x6b13e3:goto L6b13e3;
case 0x6b13e5:c.instructions+=1;goto B6b13e5;
case 0x6b13ea:goto L6b13ea;
case 0x6b13ec:c.instructions+=1;goto B6b13ec;
case 0x6b13ee:goto L6b13ee;
case 0x6b13f0:c.instructions+=2;goto B6b13f0;
case 0x6b13f1:c.instructions+=1;goto B6b13f1;
case 0x6b13f6:goto L6b13f6;
case 0x6b13f8:goto L6b13f8;
case 0x6b13fa:c.instructions+=1;goto B6b13fa;
case 0x6b13fc:goto L6b13fc;
case 0x6b1401:c.instructions+=1;goto B6b1401;
case 0x6b1406:goto L6b1406;
case 0x6b1409:c.instructions+=6;goto B6b1409;
case 0x6b140a:c.instructions+=5;goto B6b140a;
case 0x6b140d:c.instructions+=4;goto B6b140d;
case 0x6b1413:c.instructions+=3;goto B6b1413;
case 0x6b1416:c.instructions+=2;goto B6b1416;
case 0x6b1418:c.instructions+=1;goto B6b1418;
case 0x6b141a:goto L6b141a;
case 0x6b141c:c.instructions+=2;goto B6b141c;
case 0x6b1421:c.instructions+=1;goto B6b1421;
case 0x6b1423:goto L6b1423;
case 0x6b1425:c.instructions+=1;goto B6b1425;
case 0x6b142a:goto L6b142a;
case 0x6b142f:goto L6b142f;
case 0x6b1431:c.instructions+=3;goto B6b1431;
case 0x6b1433:c.instructions+=2;goto B6b1433;
case 0x6b1435:c.instructions+=1;goto B6b1435;
case 0x6b1437:goto L6b1437;
case 0x6b1439:c.instructions+=1;goto B6b1439;
case 0x6b143e:goto L6b143e;
case 0x6b1440:c.instructions+=1;goto B6b1440;
case 0x6b1445:goto L6b1445;
case 0x6b144b:c.instructions+=1;goto B6b144b;
case 0x6b1450:goto L6b1450;
case 0x6b1452:c.instructions+=2;goto B6b1452;
case 0x6b1455:c.instructions+=1;goto B6b1455;
case 0x6b1457:goto L6b1457;
case 0x6b1459:c.instructions+=2;goto B6b1459;
case 0x6b145b:c.instructions+=1;goto B6b145b;
case 0x6b1460:goto L6b1460;
case 0x6b1465:goto L6b1465;
case 0x6b1468:c.instructions+=7;goto B6b1468;
case 0x6b146e:c.instructions+=6;goto B6b146e;
case 0x6b1471:c.instructions+=5;goto B6b1471;
case 0x6b1474:c.instructions+=4;goto B6b1474;
case 0x6b1477:c.instructions+=3;goto B6b1477;
case 0x6b147a:c.instructions+=2;goto B6b147a;
case 0x6b147c:c.instructions+=1;goto B6b147c;
case 0x6b147f:goto L6b147f;
case 0x6b1481:goto L6b1481;
case 0x6b1483:c.instructions+=1;goto B6b1483;
case 0x6b1486:goto L6b1486;
case 0x6b1488:goto L6b1488;
case 0x6b148a:c.instructions+=6;goto B6b148a;
case 0x6b148b:c.instructions+=5;goto B6b148b;
case 0x6b148e:c.instructions+=4;goto B6b148e;
case 0x6b1491:c.instructions+=3;goto B6b1491;
case 0x6b1493:c.instructions+=2;goto B6b1493;
case 0x6b1495:c.instructions+=1;goto B6b1495;
case 0x6b1498:goto L6b1498;
case 0x6b149c:c.instructions+=9;goto B6b149c;
case 0x6b14a2:c.instructions+=8;goto B6b14a2;
case 0x6b14a5:c.instructions+=7;goto B6b14a5;
case 0x6b14a8:c.instructions+=6;goto B6b14a8;
case 0x6b14aa:c.instructions+=5;goto B6b14aa;
case 0x6b14ae:c.instructions+=4;goto B6b14ae;
case 0x6b14b1:c.instructions+=3;goto B6b14b1;
case 0x6b14b4:c.instructions+=2;goto B6b14b4;
case 0x6b14b7:c.instructions+=1;goto B6b14b7;
case 0x6b14b9:goto L6b14b9;
case 0x6b14bc:c.instructions+=3;goto B6b14bc;
case 0x6b14bf:c.instructions+=2;goto B6b14bf;
case 0x6b14c2:c.instructions+=1;goto B6b14c2;
case 0x6b14c6:goto L6b14c6;
case 0x6b14c9:c.instructions+=2;goto B6b14c9;
case 0x6b14cc:c.instructions+=1;goto B6b14cc;
case 0x6b14ce:goto L6b14ce;
case 0x6b14d1:c.instructions+=5;goto B6b14d1;
case 0x6b14d7:c.instructions+=4;goto B6b14d7;
case 0x6b14d9:c.instructions+=3;goto B6b14d9;
case 0x6b14dc:c.instructions+=2;goto B6b14dc;
case 0x6b14de:c.instructions+=1;goto B6b14de;
case 0x6b14e0:goto L6b14e0;
case 0x6b14e2:c.instructions+=1;goto B6b14e2;
case 0x6b14e7:goto L6b14e7;
case 0x6b14ea:goto L6b14ea;
case 0x6b14ec:c.instructions+=2;goto B6b14ec;
case 0x6b14ef:c.instructions+=1;goto B6b14ef;
case 0x6b14f2:goto L6b14f2;
case 0x6b14f5:goto L6b14f5;
case 0x6b14f6:c.instructions+=1;goto B6b14f6;
case 0x6b14f7:goto L6b14f7;
case 0x6b14f8:c.instructions+=2;goto B6b14f8;
case 0x6b14f9:c.instructions+=1;goto B6b14f9;
case 0x6b14fc:goto L6b14fc;
case 0x6b14fe:c.instructions+=9;goto B6b14fe;
case 0x6b14ff:c.instructions+=8;goto B6b14ff;
case 0x6b1501:c.instructions+=7;goto B6b1501;
case 0x6b1504:c.instructions+=6;goto B6b1504;
case 0x6b1508:c.instructions+=5;goto B6b1508;
case 0x6b150c:c.instructions+=4;goto B6b150c;
case 0x6b150d:c.instructions+=3;goto B6b150d;
case 0x6b150e:c.instructions+=2;goto B6b150e;
case 0x6b150f:c.instructions+=1;goto B6b150f;
case 0x6b1515:goto L6b1515;
case 0x6b1518:c.instructions+=2;goto B6b1518;
case 0x6b151b:c.instructions+=1;goto B6b151b;
case 0x6b1520:goto L6b1520;
case 0x6b1523:c.instructions+=6;goto B6b1523;
case 0x6b1529:c.instructions+=5;goto B6b1529;
case 0x6b152c:c.instructions+=4;goto B6b152c;
case 0x6b152e:c.instructions+=3;goto B6b152e;
case 0x6b1530:c.instructions+=2;goto B6b1530;
case 0x6b1536:c.instructions+=1;goto B6b1536;
case 0x6b153c:goto L6b153c;
case 0x6b153f:c.instructions+=1;goto B6b153f;
case 0x6b1545:goto L6b1545;
case 0x6b1547:c.instructions+=7;goto B6b1547;
case 0x6b1549:c.instructions+=6;goto B6b1549;
case 0x6b154e:c.instructions+=5;goto B6b154e;
case 0x6b1550:c.instructions+=4;goto B6b1550;
case 0x6b1556:c.instructions+=3;goto B6b1556;
case 0x6b155b:c.instructions+=2;goto B6b155b;
case 0x6b155d:c.instructions+=1;goto B6b155d;
case 0x6b155f:goto L6b155f;
case 0x6b1565:goto L6b1565;
case 0x6b156b:c.instructions+=1;goto B6b156b;
case 0x6b1571:goto L6b1571;
case 0x6b1577:c.instructions+=1;goto B6b1577;
case 0x6b157d:goto L6b157d;
case 0x6b1583:c.instructions+=1;goto B6b1583;
case 0x6b1585:goto L6b1585;
case 0x6b158b:c.instructions+=1;goto B6b158b;
case 0x6b158d:goto L6b158d;
case 0x6b158f:c.instructions+=2;goto B6b158f;
case 0x6b1590:c.instructions+=1;goto B6b1590;
case 0x6b1595:goto L6b1595;
case 0x6b159b:c.instructions+=3;goto B6b159b;
case 0x6b15a0:c.instructions+=2;goto B6b15a0;
case 0x6b15a5:c.instructions+=1;goto B6b15a5;
case 0x6b15a7:goto L6b15a7;
case 0x6b15a9:c.instructions+=3;goto B6b15a9;
case 0x6b15aa:c.instructions+=2;goto B6b15aa;
case 0x6b15ac:c.instructions+=1;goto B6b15ac;
case 0x6b15b1:goto L6b15b1;
case 0x6b15b7:c.instructions+=1;goto B6b15b7;
case 0x6b15bd:goto L6b15bd;
case 0x6b15c3:c.instructions+=1;goto B6b15c3;
case 0x6b15c9:goto L6b15c9;
case 0x6b15cf:c.instructions+=1;goto B6b15cf;
case 0x6b15d5:goto L6b15d5;
case 0x6b15d6:c.instructions+=1;goto B6b15d6;
case 0x6b15db:goto L6b15db;
case 0x6b15dd:c.instructions+=1;goto B6b15dd;
case 0x6b15df:goto L6b15df;
case 0x6b15e1:c.instructions+=1;goto B6b15e1;
case 0x6b15e3:goto L6b15e3;
case 0x6b15e6:c.instructions+=9;goto B6b15e6;
case 0x6b15e8:c.instructions+=8;goto B6b15e8;
case 0x6b15ea:c.instructions+=7;goto B6b15ea;
case 0x6b15ec:c.instructions+=6;goto B6b15ec;
case 0x6b15ee:c.instructions+=5;goto B6b15ee;
case 0x6b15f1:c.instructions+=4;goto B6b15f1;
case 0x6b15f4:c.instructions+=3;goto B6b15f4;
case 0x6b15f7:c.instructions+=2;goto B6b15f7;
case 0x6b15fb:c.instructions+=1;goto B6b15fb;
case 0x6b15fd:goto L6b15fd;
case 0x6b1603:c.instructions+=3;goto B6b1603;
case 0x6b1609:c.instructions+=2;goto B6b1609;
case 0x6b160f:c.instructions+=1;goto B6b160f;
case 0x6b1611:goto L6b1611;
case 0x6b1614:c.instructions+=4;goto B6b1614;
case 0x6b1617:c.instructions+=3;goto B6b1617;
case 0x6b161a:c.instructions+=2;goto B6b161a;
case 0x6b161e:c.instructions+=1;goto B6b161e;
case 0x6b1624:goto L6b1624;
case 0x6b1627:c.instructions+=4;goto B6b1627;
case 0x6b162a:c.instructions+=3;goto B6b162a;
case 0x6b162e:c.instructions+=2;goto B6b162e;
case 0x6b1631:c.instructions+=1;goto B6b1631;
case 0x6b1637:goto L6b1637;
case 0x6b163b:c.instructions+=2;goto B6b163b;
case 0x6b163f:c.instructions+=1;goto B6b163f;
case 0x6b1641:goto L6b1641;
case 0x6b1644:c.instructions+=1;goto B6b1644;
case 0x6b1647:goto L6b1647;
case 0x6b164a:c.instructions+=7;goto B6b164a;
case 0x6b1650:c.instructions+=6;goto B6b1650;
case 0x6b1653:c.instructions+=5;goto B6b1653;
case 0x6b1655:c.instructions+=4;goto B6b1655;
case 0x6b1657:c.instructions+=3;goto B6b1657;
case 0x6b1659:c.instructions+=2;goto B6b1659;
case 0x6b165f:c.instructions+=1;goto B6b165f;
case 0x6b1661:goto L6b1661;
case 0x6b1663:c.instructions+=1;goto B6b1663;
case 0x6b1665:goto L6b1665;
case 0x6b1668:c.instructions+=2;goto B6b1668;
case 0x6b166b:c.instructions+=1;goto B6b166b;
case 0x6b166d:goto L6b166d;
case 0x6b1670:c.instructions+=1;goto B6b1670;
case 0x6b1673:goto L6b1673;
case 0x6b1675:c.instructions+=4;goto B6b1675;
case 0x6b1678:c.instructions+=3;goto B6b1678;
case 0x6b167e:c.instructions+=2;goto B6b167e;
case 0x6b1681:c.instructions+=1;goto B6b1681;
case 0x6b1683:goto L6b1683;
case 0x6b1687:c.instructions+=1;goto B6b1687;
case 0x6b168d:goto L6b168d;
case 0x6b1690:c.instructions+=5;goto B6b1690;
case 0x6b1696:c.instructions+=4;goto B6b1696;
case 0x6b1699:c.instructions+=3;goto B6b1699;
case 0x6b169c:c.instructions+=2;goto B6b169c;
case 0x6b169f:c.instructions+=1;goto B6b169f;
case 0x6b16a1:goto L6b16a1;
case 0x6b16a4:c.instructions+=4;goto B6b16a4;
case 0x6b16a7:c.instructions+=3;goto B6b16a7;
case 0x6b16ab:c.instructions+=2;goto B6b16ab;
case 0x6b16ae:c.instructions+=1;goto B6b16ae;
case 0x6b16b0:goto L6b16b0;
case 0x6b16b2:goto L6b16b2;
case 0x6b16b3:c.instructions+=4;goto B6b16b3;
case 0x6b16b4:c.instructions+=3;goto B6b16b4;
case 0x6b16b5:c.instructions+=2;goto B6b16b5;
case 0x6b16b6:c.instructions+=1;goto B6b16b6;
case 0x6b16b7:goto L6b16b7;
case 0x6b16b9:c.instructions+=1;goto B6b16b9;
case 0x6b16bb:goto L6b16bb;
case 0x6b16bd:c.instructions+=1;goto B6b16bd;
case 0x6b16bf:goto L6b16bf;
case 0x6b16c1:c.instructions+=1;goto B6b16c1;
case 0x6b16c3:goto L6b16c3;
case 0x6b16c5:c.instructions+=1;goto B6b16c5;
case 0x6b16c7:goto L6b16c7;
case 0x6b16c9:goto L6b16c9;
case 0x6b16ca:goto L6b16ca;
case 0x6b16cc:c.instructions+=2;goto B6b16cc;
case 0x6b16cd:c.instructions+=1;goto B6b16cd;
case 0x6b16cf:goto L6b16cf;
case 0x6b16d1:goto L6b16d1;
case 0x6b16d2:goto L6b16d2;
case 0x6b16d4:goto L6b16d4;
case 0x6b16da:c.instructions+=9;goto B6b16da;
case 0x6b16e0:c.instructions+=8;goto B6b16e0;
case 0x6b16e1:c.instructions+=7;goto B6b16e1;
case 0x6b16e8:c.instructions+=6;goto B6b16e8;
case 0x6b16ef:c.instructions+=5;goto B6b16ef;
case 0x6b16f4:c.instructions+=4;goto B6b16f4;
case 0x6b16f9:c.instructions+=3;goto B6b16f9;
case 0x6b16fc:c.instructions+=2;goto B6b16fc;
case 0x6b16fd:c.instructions+=1;goto B6b16fd;
case 0x6b1702:goto L6b1702;
case 0x6b1705:c.instructions+=1;goto B6b1705;
case 0x6b1707:goto L6b1707;
case 0x6b170d:c.instructions+=7;goto B6b170d;
case 0x6b1712:c.instructions+=6;goto B6b1712;
case 0x6b1713:c.instructions+=5;goto B6b1713;
case 0x6b1718:c.instructions+=4;goto B6b1718;
case 0x6b171d:c.instructions+=3;goto B6b171d;
case 0x6b1720:c.instructions+=2;goto B6b1720;
case 0x6b1721:c.instructions+=1;goto B6b1721;
case 0x6b1726:goto L6b1726;
case 0x6b1729:c.instructions+=1;goto B6b1729;
case 0x6b172b:goto L6b172b;
case 0x6b1730:c.instructions+=4;goto B6b1730;
case 0x6b1735:c.instructions+=3;goto B6b1735;
case 0x6b1738:c.instructions+=2;goto B6b1738;
case 0x6b1739:c.instructions+=1;goto B6b1739;
case 0x6b173e:goto L6b173e;
case 0x6b1741:goto L6b1741;
case 0x6b1746:c.instructions+=1;goto B6b1746;
case 0x6b174b:goto L6b174b;
case 0x6b174d:c.instructions+=31;goto B6b174d;
case 0x6b174e:c.instructions+=30;goto B6b174e;
case 0x6b1750:c.instructions+=29;goto B6b1750;
case 0x6b1756:c.instructions+=28;goto B6b1756;
case 0x6b1757:c.instructions+=27;goto B6b1757;
case 0x6b1758:c.instructions+=26;goto B6b1758;
case 0x6b1759:c.instructions+=25;goto B6b1759;
case 0x6b175b:c.instructions+=24;goto B6b175b;
case 0x6b1761:c.instructions+=23;goto B6b1761;
case 0x6b1763:c.instructions+=22;goto B6b1763;
case 0x6b1764:c.instructions+=21;goto B6b1764;
case 0x6b1767:c.instructions+=20;goto B6b1767;
case 0x6b176a:c.instructions+=19;goto B6b176a;
case 0x6b1771:c.instructions+=18;goto B6b1771;
case 0x6b1778:c.instructions+=17;goto B6b1778;
case 0x6b177f:c.instructions+=16;goto B6b177f;
case 0x6b1781:c.instructions+=15;goto B6b1781;
case 0x6b1787:c.instructions+=14;goto B6b1787;
case 0x6b1788:c.instructions+=13;goto B6b1788;
case 0x6b178b:c.instructions+=12;goto B6b178b;
case 0x6b178c:c.instructions+=11;goto B6b178c;
case 0x6b1792:c.instructions+=10;goto B6b1792;
case 0x6b1793:c.instructions+=9;goto B6b1793;
case 0x6b1796:c.instructions+=8;goto B6b1796;
case 0x6b1797:c.instructions+=7;goto B6b1797;
case 0x6b179a:c.instructions+=6;goto B6b179a;
case 0x6b179b:c.instructions+=5;goto B6b179b;
case 0x6b17a0:c.instructions+=4;goto B6b17a0;
case 0x6b17a1:c.instructions+=3;goto B6b17a1;
case 0x6b17a3:c.instructions+=2;goto B6b17a3;
case 0x6b17a6:c.instructions+=1;goto B6b17a6;
case 0x6b17ab:goto L6b17ab;
case 0x6b17ad:c.instructions+=1;goto B6b17ad;
case 0x6b17af:goto L6b17af;
case 0x6b17b0:c.instructions+=13;goto B6b17b0;
case 0x6b17b1:c.instructions+=12;goto B6b17b1;
case 0x6b17b4:c.instructions+=11;goto B6b17b4;
case 0x6b17b5:c.instructions+=10;goto B6b17b5;
case 0x6b17bb:c.instructions+=9;goto B6b17bb;
case 0x6b17bc:c.instructions+=8;goto B6b17bc;
case 0x6b17bf:c.instructions+=7;goto B6b17bf;
case 0x6b17c0:c.instructions+=6;goto B6b17c0;
case 0x6b17c3:c.instructions+=5;goto B6b17c3;
case 0x6b17c4:c.instructions+=4;goto B6b17c4;
case 0x6b17c9:c.instructions+=3;goto B6b17c9;
case 0x6b17cf:c.instructions+=2;goto B6b17cf;
case 0x6b17d1:c.instructions+=1;goto B6b17d1;
case 0x6b17d6:goto L6b17d6;
case 0x6b17d8:c.instructions+=2;goto B6b17d8;
case 0x6b17df:c.instructions+=1;goto B6b17df;
case 0x6b17e5:goto L6b17e5;
case 0x6b17e9:c.instructions+=2;goto B6b17e9;
case 0x6b17ed:c.instructions+=1;goto B6b17ed;
case 0x6b17ef:goto L6b17ef;
case 0x6b17f2:c.instructions+=12;goto B6b17f2;
case 0x6b17f8:c.instructions+=11;goto B6b17f8;
case 0x6b17fb:c.instructions+=10;goto B6b17fb;
case 0x6b1801:c.instructions+=9;goto B6b1801;
case 0x6b1804:c.instructions+=8;goto B6b1804;
case 0x6b1807:c.instructions+=7;goto B6b1807;
case 0x6b180a:c.instructions+=6;goto B6b180a;
case 0x6b180d:c.instructions+=5;goto B6b180d;
case 0x6b1810:c.instructions+=4;goto B6b1810;
case 0x6b1813:c.instructions+=3;goto B6b1813;
case 0x6b1816:c.instructions+=2;goto B6b1816;
case 0x6b1819:c.instructions+=1;goto B6b1819;
case 0x6b181b:goto L6b181b;
case 0x6b1822:goto L6b1822;
case 0x6b1827:c.instructions+=2;goto B6b1827;
case 0x6b182a:c.instructions+=1;goto B6b182a;
case 0x6b182c:goto L6b182c;
case 0x6b182e:c.instructions+=1;goto B6b182e;
case 0x6b1830:goto L6b1830;
case 0x6b1837:c.instructions+=1;goto B6b1837;
case 0x6b183c:goto L6b183c;
case 0x6b183e:c.instructions+=1;goto B6b183e;
case 0x6b1843:goto L6b1843;
case 0x6b1845:c.instructions+=1;goto B6b1845;
case 0x6b1847:goto L6b1847;
case 0x6b1849:c.instructions+=1;goto B6b1849;
case 0x6b184e:goto L6b184e;
case 0x6b1850:c.instructions+=1;goto B6b1850;
case 0x6b1852:goto L6b1852;
case 0x6b1854:goto L6b1854;
case 0x6b1856:c.instructions+=1;goto B6b1856;
case 0x6b1858:goto L6b1858;
case 0x6b185f:c.instructions+=1;goto B6b185f;
case 0x6b1864:goto L6b1864;
case 0x6b1866:c.instructions+=3;goto B6b1866;
case 0x6b186b:c.instructions+=2;goto B6b186b;
case 0x6b186f:c.instructions+=1;goto B6b186f;
case 0x6b1871:goto L6b1871;
case 0x6b1876:c.instructions+=1;goto B6b1876;
case 0x6b1878:goto L6b1878;
case 0x6b187d:goto L6b187d;
case 0x6b187f:c.instructions+=6;goto B6b187f;
case 0x6b1880:c.instructions+=5;goto B6b1880;
case 0x6b1883:c.instructions+=4;goto B6b1883;
case 0x6b1884:c.instructions+=3;goto B6b1884;
case 0x6b1885:c.instructions+=2;goto B6b1885;
case 0x6b1887:c.instructions+=1;goto B6b1887;
case 0x6b188c:goto L6b188c;
case 0x6b188e:c.instructions+=2;goto B6b188e;
case 0x6b1891:c.instructions+=1;goto B6b1891;
case 0x6b1897:goto L6b1897;
case 0x6b189d:c.instructions+=2;goto B6b189d;
case 0x6b189f:c.instructions+=1;goto B6b189f;
case 0x6b18a4:goto L6b18a4;
case 0x6b18a6:c.instructions+=2;goto B6b18a6;
case 0x6b18a9:c.instructions+=1;goto B6b18a9;
case 0x6b18af:goto L6b18af;
case 0x6b18b3:c.instructions+=2;goto B6b18b3;
case 0x6b18b5:c.instructions+=1;goto B6b18b5;
case 0x6b18b7:goto L6b18b7;
case 0x6b18b9:c.instructions+=5;goto B6b18b9;
case 0x6b18bc:c.instructions+=4;goto B6b18bc;
case 0x6b18bf:c.instructions+=3;goto B6b18bf;
case 0x6b18c1:c.instructions+=2;goto B6b18c1;
case 0x6b18c4:c.instructions+=1;goto B6b18c4;
case 0x6b18c7:goto L6b18c7;
case 0x6b18cd:c.instructions+=11;goto B6b18cd;
case 0x6b18d0:c.instructions+=10;goto B6b18d0;
case 0x6b18d3:c.instructions+=9;goto B6b18d3;
case 0x6b18d6:c.instructions+=8;goto B6b18d6;
case 0x6b18d9:c.instructions+=7;goto B6b18d9;
case 0x6b18dd:c.instructions+=6;goto B6b18dd;
case 0x6b18e0:c.instructions+=5;goto B6b18e0;
case 0x6b18e3:c.instructions+=4;goto B6b18e3;
case 0x6b18e6:c.instructions+=3;goto B6b18e6;
case 0x6b18ed:c.instructions+=2;goto B6b18ed;
case 0x6b18f0:c.instructions+=1;goto B6b18f0;
case 0x6b18f2:goto L6b18f2;
case 0x6b18f4:c.instructions+=4;goto B6b18f4;
case 0x6b18f7:c.instructions+=3;goto B6b18f7;
case 0x6b18fa:c.instructions+=2;goto B6b18fa;
case 0x6b18fd:c.instructions+=1;goto B6b18fd;
case 0x6b18ff:goto L6b18ff;
case 0x6b1902:c.instructions+=3;goto B6b1902;
case 0x6b1905:c.instructions+=2;goto B6b1905;
case 0x6b1908:c.instructions+=1;goto B6b1908;
case 0x6b190a:goto L6b190a;
case 0x6b190d:c.instructions+=12;goto B6b190d;
case 0x6b1910:c.instructions+=11;goto B6b1910;
case 0x6b1913:c.instructions+=10;goto B6b1913;
case 0x6b1917:c.instructions+=9;goto B6b1917;
case 0x6b191a:c.instructions+=8;goto B6b191a;
case 0x6b191d:c.instructions+=7;goto B6b191d;
case 0x6b1920:c.instructions+=6;goto B6b1920;
case 0x6b1923:c.instructions+=5;goto B6b1923;
case 0x6b1926:c.instructions+=4;goto B6b1926;
case 0x6b192a:c.instructions+=3;goto B6b192a;
case 0x6b192d:c.instructions+=2;goto B6b192d;
case 0x6b1930:c.instructions+=1;goto B6b1930;
case 0x6b1932:goto L6b1932;
case 0x6b1934:c.instructions+=4;goto B6b1934;
case 0x6b1936:c.instructions+=3;goto B6b1936;
case 0x6b1937:c.instructions+=2;goto B6b1937;
case 0x6b1939:c.instructions+=1;goto B6b1939;
case 0x6b193c:goto L6b193c;
case 0x6b193e:c.instructions+=1;goto B6b193e;
case 0x6b1940:goto L6b1940;
case 0x6b1947:c.instructions+=1;goto B6b1947;
case 0x6b1949:goto L6b1949;
case 0x6b194b:c.instructions+=2;goto B6b194b;
case 0x6b194e:c.instructions+=1;goto B6b194e;
case 0x6b1950:goto L6b1950;
case 0x6b1954:c.instructions+=4;goto B6b1954;
case 0x6b1957:c.instructions+=3;goto B6b1957;
case 0x6b1958:c.instructions+=2;goto B6b1958;
case 0x6b195b:c.instructions+=1;goto B6b195b;
case 0x6b195d:goto L6b195d;
case 0x6b1963:c.instructions+=2;goto B6b1963;
case 0x6b1965:c.instructions+=1;goto B6b1965;
case 0x6b1967:goto L6b1967;
case 0x6b1969:c.instructions+=1;goto B6b1969;
case 0x6b196e:goto L6b196e;
case 0x6b1974:c.instructions+=3;goto B6b1974;
case 0x6b1977:c.instructions+=2;goto B6b1977;
case 0x6b197a:c.instructions+=1;goto B6b197a;
case 0x6b197c:goto L6b197c;
case 0x6b1980:goto L6b1980;
case 0x6b1982:c.instructions+=1;goto B6b1982;
case 0x6b1984:goto L6b1984;
case 0x6b1986:c.instructions+=2;goto B6b1986;
case 0x6b1988:c.instructions+=1;goto B6b1988;
case 0x6b198d:goto L6b198d;
case 0x6b1990:c.instructions+=5;goto B6b1990;
case 0x6b1991:c.instructions+=4;goto B6b1991;
case 0x6b1992:c.instructions+=3;goto B6b1992;
case 0x6b1993:c.instructions+=2;goto B6b1993;
case 0x6b1994:c.instructions+=1;goto B6b1994;
case 0x6b1995:goto L6b1995;
case 0x6b1997:c.instructions+=7;goto B6b1997;
case 0x6b1998:c.instructions+=6;goto B6b1998;
case 0x6b199a:c.instructions+=5;goto B6b199a;
case 0x6b199b:c.instructions+=4;goto B6b199b;
case 0x6b199e:c.instructions+=3;goto B6b199e;
case 0x6b19a1:c.instructions+=2;goto B6b19a1;
case 0x6b19a3:c.instructions+=1;goto B6b19a3;
case 0x6b19a5:goto L6b19a5;
case 0x6b19a8:c.instructions+=2;goto B6b19a8;
case 0x6b19a9:c.instructions+=1;goto B6b19a9;
case 0x6b19ae:goto L6b19ae;
case 0x6b19b0:c.instructions+=1;goto B6b19b0;
case 0x6b19b2:goto L6b19b2;
case 0x6b19b7:c.instructions+=1;goto B6b19b7;
case 0x6b19b9:goto L6b19b9;
case 0x6b19bc:c.instructions+=7;goto B6b19bc;
case 0x6b19bf:c.instructions+=6;goto B6b19bf;
case 0x6b19c0:c.instructions+=5;goto B6b19c0;
case 0x6b19c3:c.instructions+=4;goto B6b19c3;
case 0x6b19c5:c.instructions+=3;goto B6b19c5;
case 0x6b19c6:c.instructions+=2;goto B6b19c6;
case 0x6b19c9:c.instructions+=1;goto B6b19c9;
case 0x6b19cb:goto L6b19cb;
case 0x6b19cd:goto L6b19cd;
case 0x6b19cf:c.instructions+=1;goto B6b19cf;
case 0x6b19d2:goto L6b19d2;
case 0x6b19d4:goto L6b19d4;
case 0x6b19d5:c.instructions+=2;goto B6b19d5;
case 0x6b19d8:c.instructions+=1;goto B6b19d8;
case 0x6b19d9:goto L6b19d9;
case 0x6b19dc:c.instructions+=5;goto B6b19dc;
case 0x6b19df:c.instructions+=4;goto B6b19df;
case 0x6b19e2:c.instructions+=3;goto B6b19e2;
case 0x6b19e5:c.instructions+=2;goto B6b19e5;
case 0x6b19e8:c.instructions+=1;goto B6b19e8;
case 0x6b19ea:goto L6b19ea;
case 0x6b19eb:c.instructions+=2;goto B6b19eb;
case 0x6b19ec:c.instructions+=1;goto B6b19ec;
case 0x6b19ef:goto L6b19ef;
case 0x6b19f1:c.instructions+=12;goto B6b19f1;
case 0x6b19f2:c.instructions+=11;goto B6b19f2;
case 0x6b19f4:c.instructions+=10;goto B6b19f4;
case 0x6b19fa:c.instructions+=9;goto B6b19fa;
case 0x6b19fb:c.instructions+=8;goto B6b19fb;
case 0x6b19fc:c.instructions+=7;goto B6b19fc;
case 0x6b19fd:c.instructions+=6;goto B6b19fd;
case 0x6b19ff:c.instructions+=5;goto B6b19ff;
case 0x6b1a01:c.instructions+=4;goto B6b1a01;
case 0x6b1a03:c.instructions+=3;goto B6b1a03;
case 0x6b1a06:c.instructions+=2;goto B6b1a06;
case 0x6b1a09:c.instructions+=1;goto B6b1a09;
case 0x6b1a0b:goto L6b1a0b;
case 0x6b1a0e:c.instructions+=3;goto B6b1a0e;
case 0x6b1a11:c.instructions+=2;goto B6b1a11;
case 0x6b1a13:c.instructions+=1;goto B6b1a13;
case 0x6b1a15:goto L6b1a15;
case 0x6b1a17:c.instructions+=2;goto B6b1a17;
case 0x6b1a1a:c.instructions+=1;goto B6b1a1a;
case 0x6b1a1c:goto L6b1a1c;
case 0x6b1a1f:c.instructions+=7;goto B6b1a1f;
case 0x6b1a22:c.instructions+=6;goto B6b1a22;
case 0x6b1a25:c.instructions+=5;goto B6b1a25;
case 0x6b1a28:c.instructions+=4;goto B6b1a28;
case 0x6b1a29:c.instructions+=3;goto B6b1a29;
case 0x6b1a2c:c.instructions+=2;goto B6b1a2c;
case 0x6b1a2f:c.instructions+=1;goto B6b1a2f;
case 0x6b1a31:goto L6b1a31;
case 0x6b1a33:goto L6b1a33;
case 0x6b1a36:c.instructions+=1;goto B6b1a36;
case 0x6b1a39:goto L6b1a39;
case 0x6b1a3a:c.instructions+=2;goto B6b1a3a;
case 0x6b1a3d:c.instructions+=1;goto B6b1a3d;
case 0x6b1a3f:goto L6b1a3f;
case 0x6b1a41:c.instructions+=2;goto B6b1a41;
case 0x6b1a44:c.instructions+=1;goto B6b1a44;
case 0x6b1a46:goto L6b1a46;
case 0x6b1a49:c.instructions+=4;goto B6b1a49;
case 0x6b1a4c:c.instructions+=3;goto B6b1a4c;
case 0x6b1a4f:c.instructions+=2;goto B6b1a4f;
case 0x6b1a52:c.instructions+=1;goto B6b1a52;
case 0x6b1a54:goto L6b1a54;
case 0x6b1a57:c.instructions+=2;goto B6b1a57;
case 0x6b1a5a:c.instructions+=1;goto B6b1a5a;
case 0x6b1a5d:goto L6b1a5d;
case 0x6b1a5e:c.instructions+=2;goto B6b1a5e;
case 0x6b1a61:c.instructions+=1;goto B6b1a61;
case 0x6b1a63:goto L6b1a63;
case 0x6b1a66:c.instructions+=2;goto B6b1a66;
case 0x6b1a69:c.instructions+=1;goto B6b1a69;
case 0x6b1a6f:goto L6b1a6f;
case 0x6b1a72:c.instructions+=5;goto B6b1a72;
case 0x6b1a75:c.instructions+=4;goto B6b1a75;
case 0x6b1a78:c.instructions+=3;goto B6b1a78;
case 0x6b1a7a:c.instructions+=2;goto B6b1a7a;
case 0x6b1a7c:c.instructions+=1;goto B6b1a7c;
case 0x6b1a82:goto L6b1a82;
case 0x6b1a85:c.instructions+=3;goto B6b1a85;
case 0x6b1a88:c.instructions+=2;goto B6b1a88;
case 0x6b1a8b:c.instructions+=1;goto B6b1a8b;
case 0x6b1a8d:goto L6b1a8d;
case 0x6b1a90:c.instructions+=7;goto B6b1a90;
case 0x6b1a93:c.instructions+=6;goto B6b1a93;
case 0x6b1a96:c.instructions+=5;goto B6b1a96;
case 0x6b1a99:c.instructions+=4;goto B6b1a99;
case 0x6b1a9c:c.instructions+=3;goto B6b1a9c;
case 0x6b1a9f:c.instructions+=2;goto B6b1a9f;
case 0x6b1aa2:c.instructions+=1;goto B6b1aa2;
case 0x6b1aa4:goto L6b1aa4;
case 0x6b1aa6:c.instructions+=2;goto B6b1aa6;
case 0x6b1aa8:c.instructions+=1;goto B6b1aa8;
case 0x6b1aaa:goto L6b1aaa;
case 0x6b1ab1:c.instructions+=1;goto B6b1ab1;
case 0x6b1ab3:goto L6b1ab3;
case 0x6b1ab4:c.instructions+=2;goto B6b1ab4;
case 0x6b1ab6:c.instructions+=1;goto B6b1ab6;
case 0x6b1ab8:goto L6b1ab8;
case 0x6b1aba:c.instructions+=1;goto B6b1aba;
case 0x6b1abc:goto L6b1abc;
case 0x6b1ac3:c.instructions+=2;goto B6b1ac3;
case 0x6b1ac4:c.instructions+=1;goto B6b1ac4;
case 0x6b1ac7:goto L6b1ac7;
case 0x6b1aca:c.instructions+=3;goto B6b1aca;
case 0x6b1acd:c.instructions+=2;goto B6b1acd;
case 0x6b1ad0:c.instructions+=1;goto B6b1ad0;
case 0x6b1ad5:goto L6b1ad5;
case 0x6b1ad7:c.instructions+=1;goto B6b1ad7;
case 0x6b1ad9:goto L6b1ad9;
case 0x6b1adc:c.instructions+=3;goto B6b1adc;
case 0x6b1adf:c.instructions+=2;goto B6b1adf;
case 0x6b1ae2:c.instructions+=1;goto B6b1ae2;
case 0x6b1ae4:goto L6b1ae4;
case 0x6b1ae5:c.instructions+=1;goto B6b1ae5;
case 0x6b1aea:goto L6b1aea;
case 0x6b1aec:c.instructions+=2;goto B6b1aec;
case 0x6b1aef:c.instructions+=1;goto B6b1aef;
case 0x6b1af1:goto L6b1af1;
case 0x6b1af3:c.instructions+=3;goto B6b1af3;
case 0x6b1af5:c.instructions+=2;goto B6b1af5;
case 0x6b1af8:c.instructions+=1;goto B6b1af8;
case 0x6b1afe:goto L6b1afe;
case 0x6b1b00:goto L6b1b00;
case 0x6b1b03:c.instructions+=1;goto B6b1b03;
case 0x6b1b06:goto L6b1b06;
case 0x6b1b09:c.instructions+=3;goto B6b1b09;
case 0x6b1b0c:c.instructions+=2;goto B6b1b0c;
case 0x6b1b0f:c.instructions+=1;goto B6b1b0f;
case 0x6b1b15:goto L6b1b15;
case 0x6b1b17:goto L6b1b17;
case 0x6b1b19:goto L6b1b19;
case 0x6b1b1a:c.instructions+=4;goto B6b1b1a;
case 0x6b1b1b:c.instructions+=3;goto B6b1b1b;
case 0x6b1b1c:c.instructions+=2;goto B6b1b1c;
case 0x6b1b1d:c.instructions+=1;goto B6b1b1d;
case 0x6b1b20:goto L6b1b20;
case 0x6b1b25:c.instructions+=1;goto B6b1b25;
case 0x6b1b27:goto L6b1b27;
case 0x6b1b29:c.instructions+=29;goto B6b1b29;
case 0x6b1b2a:c.instructions+=28;goto B6b1b2a;
case 0x6b1b2c:c.instructions+=27;goto B6b1b2c;
case 0x6b1b32:c.instructions+=26;goto B6b1b32;
case 0x6b1b36:c.instructions+=25;goto B6b1b36;
case 0x6b1b3a:c.instructions+=24;goto B6b1b3a;
case 0x6b1b3b:c.instructions+=23;goto B6b1b3b;
case 0x6b1b3d:c.instructions+=22;goto B6b1b3d;
case 0x6b1b43:c.instructions+=21;goto B6b1b43;
case 0x6b1b46:c.instructions+=20;goto B6b1b46;
case 0x6b1b47:c.instructions+=19;goto B6b1b47;
case 0x6b1b49:c.instructions+=18;goto B6b1b49;
case 0x6b1b4c:c.instructions+=17;goto B6b1b4c;
case 0x6b1b52:c.instructions+=16;goto B6b1b52;
case 0x6b1b53:c.instructions+=15;goto B6b1b53;
case 0x6b1b55:c.instructions+=14;goto B6b1b55;
case 0x6b1b58:c.instructions+=13;goto B6b1b58;
case 0x6b1b5b:c.instructions+=12;goto B6b1b5b;
case 0x6b1b5e:c.instructions+=11;goto B6b1b5e;
case 0x6b1b60:c.instructions+=10;goto B6b1b60;
case 0x6b1b63:c.instructions+=9;goto B6b1b63;
case 0x6b1b66:c.instructions+=8;goto B6b1b66;
case 0x6b1b69:c.instructions+=7;goto B6b1b69;
case 0x6b1b6c:c.instructions+=6;goto B6b1b6c;
case 0x6b1b6f:c.instructions+=5;goto B6b1b6f;
case 0x6b1b72:c.instructions+=4;goto B6b1b72;
case 0x6b1b75:c.instructions+=3;goto B6b1b75;
case 0x6b1b7b:c.instructions+=2;goto B6b1b7b;
case 0x6b1b7d:c.instructions+=1;goto B6b1b7d;
case 0x6b1b7f:goto L6b1b7f;
case 0x6b1b82:c.instructions+=4;goto B6b1b82;
case 0x6b1b85:c.instructions+=3;goto B6b1b85;
case 0x6b1b88:c.instructions+=2;goto B6b1b88;
case 0x6b1b8c:c.instructions+=1;goto B6b1b8c;
case 0x6b1b8e:goto L6b1b8e;
case 0x6b1b94:c.instructions+=4;goto B6b1b94;
case 0x6b1b96:c.instructions+=3;goto B6b1b96;
case 0x6b1b9c:c.instructions+=2;goto B6b1b9c;
case 0x6b1ba2:c.instructions+=1;goto B6b1ba2;
case 0x6b1ba4:goto L6b1ba4;
case 0x6b1ba7:c.instructions+=1;goto B6b1ba7;
case 0x6b1baa:goto L6b1baa;
case 0x6b1bac:c.instructions+=3;goto B6b1bac;
case 0x6b1baf:c.instructions+=2;goto B6b1baf;
case 0x6b1bb2:c.instructions+=1;goto B6b1bb2;
case 0x6b1bb5:goto L6b1bb5;
case 0x6b1bb9:c.instructions+=3;goto B6b1bb9;
case 0x6b1bbc:c.instructions+=2;goto B6b1bbc;
case 0x6b1bbe:c.instructions+=1;goto B6b1bbe;
case 0x6b1bc4:goto L6b1bc4;
case 0x6b1bc7:c.instructions+=4;goto B6b1bc7;
case 0x6b1bca:c.instructions+=3;goto B6b1bca;
case 0x6b1bcc:c.instructions+=2;goto B6b1bcc;
case 0x6b1bcf:c.instructions+=1;goto B6b1bcf;
case 0x6b1bd2:goto L6b1bd2;
case 0x6b1bd5:c.instructions+=6;goto B6b1bd5;
case 0x6b1bd8:c.instructions+=5;goto B6b1bd8;
case 0x6b1bdb:c.instructions+=4;goto B6b1bdb;
case 0x6b1bde:c.instructions+=3;goto B6b1bde;
case 0x6b1be0:c.instructions+=2;goto B6b1be0;
case 0x6b1be3:c.instructions+=1;goto B6b1be3;
case 0x6b1be9:goto L6b1be9;
case 0x6b1bec:c.instructions+=1;goto B6b1bec;
case 0x6b1bf1:goto L6b1bf1;
case 0x6b1bf4:c.instructions+=3;goto B6b1bf4;
case 0x6b1bf7:c.instructions+=2;goto B6b1bf7;
case 0x6b1bf9:c.instructions+=1;goto B6b1bf9;
case 0x6b1bfb:goto L6b1bfb;
case 0x6b1bfe:c.instructions+=2;goto B6b1bfe;
case 0x6b1c02:c.instructions+=1;goto B6b1c02;
case 0x6b1c04:goto L6b1c04;
case 0x6b1c0a:c.instructions+=4;goto B6b1c0a;
case 0x6b1c0c:c.instructions+=3;goto B6b1c0c;
case 0x6b1c12:c.instructions+=2;goto B6b1c12;
case 0x6b1c18:c.instructions+=1;goto B6b1c18;
case 0x6b1c1a:goto L6b1c1a;
case 0x6b1c1d:c.instructions+=2;goto B6b1c1d;
case 0x6b1c20:c.instructions+=1;goto B6b1c20;
case 0x6b1c22:goto L6b1c22;
case 0x6b1c25:c.instructions+=2;goto B6b1c25;
case 0x6b1c28:c.instructions+=1;goto B6b1c28;
case 0x6b1c2a:goto L6b1c2a;
case 0x6b1c2c:c.instructions+=1;goto B6b1c2c;
case 0x6b1c2e:goto L6b1c2e;
case 0x6b1c34:c.instructions+=4;goto B6b1c34;
case 0x6b1c36:c.instructions+=3;goto B6b1c36;
case 0x6b1c3c:c.instructions+=2;goto B6b1c3c;
case 0x6b1c42:c.instructions+=1;goto B6b1c42;
case 0x6b1c44:goto L6b1c44;
case 0x6b1c46:c.instructions+=2;goto B6b1c46;
case 0x6b1c4d:c.instructions+=1;goto B6b1c4d;
case 0x6b1c4f:goto L6b1c4f;
case 0x6b1c52:c.instructions+=3;goto B6b1c52;
case 0x6b1c54:c.instructions+=2;goto B6b1c54;
case 0x6b1c56:c.instructions+=1;goto B6b1c56;
case 0x6b1c59:goto L6b1c59;
case 0x6b1c5b:c.instructions+=2;goto B6b1c5b;
case 0x6b1c5e:c.instructions+=1;goto B6b1c5e;
case 0x6b1c60:goto L6b1c60;
case 0x6b1c64:goto L6b1c64;
case 0x6b1c67:c.instructions+=2;goto B6b1c67;
case 0x6b1c6a:c.instructions+=1;goto B6b1c6a;
case 0x6b1c6c:goto L6b1c6c;
case 0x6b1c6f:c.instructions+=4;goto B6b1c6f;
case 0x6b1c72:c.instructions+=3;goto B6b1c72;
case 0x6b1c75:c.instructions+=2;goto B6b1c75;
case 0x6b1c78:c.instructions+=1;goto B6b1c78;
case 0x6b1c7a:goto L6b1c7a;
case 0x6b1c7f:c.instructions+=2;goto B6b1c7f;
case 0x6b1c81:c.instructions+=1;goto B6b1c81;
case 0x6b1c83:goto L6b1c83;
case 0x6b1c89:c.instructions+=1;goto B6b1c89;
case 0x6b1c8b:goto L6b1c8b;
case 0x6b1c8d:c.instructions+=1;goto B6b1c8d;
case 0x6b1c8f:goto L6b1c8f;
case 0x6b1c91:goto L6b1c91;
case 0x6b1c95:c.instructions+=2;goto B6b1c95;
case 0x6b1c98:c.instructions+=1;goto B6b1c98;
case 0x6b1c9a:goto L6b1c9a;
case 0x6b1c9c:goto L6b1c9c;
case 0x6b1c9e:c.instructions+=6;goto B6b1c9e;
case 0x6b1c9f:c.instructions+=5;goto B6b1c9f;
case 0x6b1ca0:c.instructions+=4;goto B6b1ca0;
case 0x6b1ca1:c.instructions+=3;goto B6b1ca1;
case 0x6b1ca2:c.instructions+=2;goto B6b1ca2;
case 0x6b1ca3:c.instructions+=1;goto B6b1ca3;
case 0x6b1ca4:goto L6b1ca4;
case 0x6b1ca7:c.instructions+=2;goto B6b1ca7;
case 0x6b1ca9:c.instructions+=1;goto B6b1ca9;
case 0x6b1cae:goto L6b1cae;
case 0x6b1cb1:c.instructions+=3;goto B6b1cb1;
case 0x6b1cb3:c.instructions+=2;goto B6b1cb3;
case 0x6b1cb6:c.instructions+=1;goto B6b1cb6;
case 0x6b1cb9:goto L6b1cb9;
case 0x6b1cbf:c.instructions+=2;goto B6b1cbf;
case 0x6b1cc2:c.instructions+=1;goto B6b1cc2;
case 0x6b1cc4:goto L6b1cc4;
case 0x6b1cc7:c.instructions+=1;goto B6b1cc7;
case 0x6b1cc9:goto L6b1cc9;
case 0x6b1cd0:c.instructions+=1;goto B6b1cd0;
case 0x6b1cd2:goto L6b1cd2;
case 0x6b1cd6:c.instructions+=1;goto B6b1cd6;
case 0x6b1cd8:goto L6b1cd8;
case 0x6b1cdb:c.instructions+=2;goto B6b1cdb;
case 0x6b1cdf:c.instructions+=1;goto B6b1cdf;
case 0x6b1ce1:goto L6b1ce1;
case 0x6b1ce2:c.instructions+=2;goto B6b1ce2;
case 0x6b1ce5:c.instructions+=1;goto B6b1ce5;
case 0x6b1ce7:goto L6b1ce7;
case 0x6b1cea:c.instructions+=1;goto B6b1cea;
case 0x6b1cec:goto L6b1cec;
case 0x6b1cef:c.instructions+=3;goto B6b1cef;
case 0x6b1cf2:c.instructions+=2;goto B6b1cf2;
case 0x6b1cf5:c.instructions+=1;goto B6b1cf5;
case 0x6b1cf9:goto L6b1cf9;
case 0x6b1cfd:c.instructions+=1;goto B6b1cfd;
case 0x6b1cff:goto L6b1cff;
case 0x6b1d02:c.instructions+=8;goto B6b1d02;
case 0x6b1d05:c.instructions+=7;goto B6b1d05;
case 0x6b1d07:c.instructions+=6;goto B6b1d07;
case 0x6b1d0a:c.instructions+=5;goto B6b1d0a;
case 0x6b1d0c:c.instructions+=4;goto B6b1d0c;
case 0x6b1d0e:c.instructions+=3;goto B6b1d0e;
case 0x6b1d10:c.instructions+=2;goto B6b1d10;
case 0x6b1d13:c.instructions+=1;goto B6b1d13;
case 0x6b1d15:goto L6b1d15;
case 0x6b1d18:c.instructions+=3;goto B6b1d18;
case 0x6b1d1c:c.instructions+=2;goto B6b1d1c;
case 0x6b1d1f:c.instructions+=1;goto B6b1d1f;
case 0x6b1d25:goto L6b1d25;
case 0x6b1d28:c.instructions+=8;goto B6b1d28;
case 0x6b1d2a:c.instructions+=7;goto B6b1d2a;
case 0x6b1d2c:c.instructions+=6;goto B6b1d2c;
case 0x6b1d2e:c.instructions+=5;goto B6b1d2e;
case 0x6b1d34:c.instructions+=4;goto B6b1d34;
case 0x6b1d36:c.instructions+=3;goto B6b1d36;
case 0x6b1d38:c.instructions+=2;goto B6b1d38;
case 0x6b1d3b:c.instructions+=1;goto B6b1d3b;
case 0x6b1d3d:goto L6b1d3d;
case 0x6b1d42:c.instructions+=2;goto B6b1d42;
case 0x6b1d45:c.instructions+=1;goto B6b1d45;
case 0x6b1d47:goto L6b1d47;
case 0x6b1d4d:c.instructions+=5;goto B6b1d4d;
case 0x6b1d4f:c.instructions+=4;goto B6b1d4f;
case 0x6b1d51:c.instructions+=3;goto B6b1d51;
case 0x6b1d53:c.instructions+=2;goto B6b1d53;
case 0x6b1d56:c.instructions+=1;goto B6b1d56;
case 0x6b1d58:goto L6b1d58;
case 0x6b1d5d:c.instructions+=2;goto B6b1d5d;
case 0x6b1d60:c.instructions+=1;goto B6b1d60;
case 0x6b1d62:goto L6b1d62;
case 0x6b1d68:c.instructions+=5;goto B6b1d68;
case 0x6b1d6a:c.instructions+=4;goto B6b1d6a;
case 0x6b1d6c:c.instructions+=3;goto B6b1d6c;
case 0x6b1d6e:c.instructions+=2;goto B6b1d6e;
case 0x6b1d71:c.instructions+=1;goto B6b1d71;
case 0x6b1d73:goto L6b1d73;
case 0x6b1d78:c.instructions+=2;goto B6b1d78;
case 0x6b1d7b:c.instructions+=1;goto B6b1d7b;
case 0x6b1d7d:goto L6b1d7d;
case 0x6b1d83:c.instructions+=5;goto B6b1d83;
case 0x6b1d85:c.instructions+=4;goto B6b1d85;
case 0x6b1d87:c.instructions+=3;goto B6b1d87;
case 0x6b1d89:c.instructions+=2;goto B6b1d89;
case 0x6b1d8c:c.instructions+=1;goto B6b1d8c;
case 0x6b1d8e:goto L6b1d8e;
case 0x6b1d93:c.instructions+=2;goto B6b1d93;
case 0x6b1d96:c.instructions+=1;goto B6b1d96;
case 0x6b1d98:goto L6b1d98;
case 0x6b1d9e:c.instructions+=5;goto B6b1d9e;
case 0x6b1da0:c.instructions+=4;goto B6b1da0;
case 0x6b1da2:c.instructions+=3;goto B6b1da2;
case 0x6b1da4:c.instructions+=2;goto B6b1da4;
case 0x6b1da7:c.instructions+=1;goto B6b1da7;
case 0x6b1da9:goto L6b1da9;
case 0x6b1dae:c.instructions+=2;goto B6b1dae;
case 0x6b1db1:c.instructions+=1;goto B6b1db1;
case 0x6b1db3:goto L6b1db3;
case 0x6b1db5:c.instructions+=1;goto B6b1db5;
case 0x6b1db7:goto L6b1db7;
case 0x6b1dbd:c.instructions+=6;goto B6b1dbd;
case 0x6b1dbf:c.instructions+=5;goto B6b1dbf;
case 0x6b1dc1:c.instructions+=4;goto B6b1dc1;
case 0x6b1dc3:c.instructions+=3;goto B6b1dc3;
case 0x6b1dc5:c.instructions+=2;goto B6b1dc5;
case 0x6b1dc8:c.instructions+=1;goto B6b1dc8;
case 0x6b1dce:goto L6b1dce;
case 0x6b1dd3:c.instructions+=2;goto B6b1dd3;
case 0x6b1dd6:c.instructions+=1;goto B6b1dd6;
case 0x6b1ddc:goto L6b1ddc;
case 0x6b1ddf:c.instructions+=5;goto B6b1ddf;
case 0x6b1de2:c.instructions+=4;goto B6b1de2;
case 0x6b1de8:c.instructions+=3;goto B6b1de8;
case 0x6b1dea:c.instructions+=2;goto B6b1dea;
case 0x6b1ded:c.instructions+=1;goto B6b1ded;
case 0x6b1def:goto L6b1def;
case 0x6b1df3:goto L6b1df3;
case 0x6b1df5:c.instructions+=9;goto B6b1df5;
case 0x6b1df8:c.instructions+=8;goto B6b1df8;
case 0x6b1df9:c.instructions+=7;goto B6b1df9;
case 0x6b1dfa:c.instructions+=6;goto B6b1dfa;
case 0x6b1dfb:c.instructions+=5;goto B6b1dfb;
case 0x6b1dfc:c.instructions+=4;goto B6b1dfc;
case 0x6b1dfe:c.instructions+=3;goto B6b1dfe;
case 0x6b1e01:c.instructions+=2;goto B6b1e01;
case 0x6b1e04:c.instructions+=1;goto B6b1e04;
case 0x6b1e0a:goto L6b1e0a;
case 0x6b1e10:c.instructions+=2;goto B6b1e10;
case 0x6b1e13:c.instructions+=1;goto B6b1e13;
case 0x6b1e16:goto L6b1e16;
case 0x6b1e19:c.instructions+=8;goto B6b1e19;
case 0x6b1e1d:c.instructions+=7;goto B6b1e1d;
case 0x6b1e20:c.instructions+=6;goto B6b1e20;
case 0x6b1e23:c.instructions+=5;goto B6b1e23;
case 0x6b1e25:c.instructions+=4;goto B6b1e25;
case 0x6b1e27:c.instructions+=3;goto B6b1e27;
case 0x6b1e2d:c.instructions+=2;goto B6b1e2d;
case 0x6b1e33:c.instructions+=1;goto B6b1e33;
case 0x6b1e39:goto L6b1e39;
case 0x6b1e3e:c.instructions+=2;goto B6b1e3e;
case 0x6b1e43:c.instructions+=1;goto B6b1e43;
case 0x6b1e49:goto L6b1e49;
case 0x6b1e4c:c.instructions+=10;goto B6b1e4c;
case 0x6b1e50:c.instructions+=9;goto B6b1e50;
case 0x6b1e54:c.instructions+=8;goto B6b1e54;
case 0x6b1e57:c.instructions+=7;goto B6b1e57;
case 0x6b1e5a:c.instructions+=6;goto B6b1e5a;
case 0x6b1e5c:c.instructions+=5;goto B6b1e5c;
case 0x6b1e5d:c.instructions+=4;goto B6b1e5d;
case 0x6b1e5e:c.instructions+=3;goto B6b1e5e;
case 0x6b1e5f:c.instructions+=2;goto B6b1e5f;
case 0x6b1e60:c.instructions+=1;goto B6b1e60;
case 0x6b1e66:goto L6b1e66;
case 0x6b1e6a:c.instructions+=2;goto B6b1e6a;
case 0x6b1e6c:c.instructions+=1;goto B6b1e6c;
case 0x6b1e6e:goto L6b1e6e;
case 0x6b1e71:c.instructions+=7;goto B6b1e71;
case 0x6b1e74:c.instructions+=6;goto B6b1e74;
case 0x6b1e77:c.instructions+=5;goto B6b1e77;
case 0x6b1e7a:c.instructions+=4;goto B6b1e7a;
case 0x6b1e7d:c.instructions+=3;goto B6b1e7d;
case 0x6b1e80:c.instructions+=2;goto B6b1e80;
case 0x6b1e83:c.instructions+=1;goto B6b1e83;
case 0x6b1e8a:goto L6b1e8a;
case 0x6b1e8d:c.instructions+=3;goto B6b1e8d;
case 0x6b1e90:c.instructions+=2;goto B6b1e90;
case 0x6b1e92:c.instructions+=1;goto B6b1e92;
case 0x6b1e94:goto L6b1e94;
case 0x6b1e97:c.instructions+=11;goto B6b1e97;
case 0x6b1e9a:c.instructions+=10;goto B6b1e9a;
case 0x6b1e9e:c.instructions+=9;goto B6b1e9e;
case 0x6b1ea0:c.instructions+=8;goto B6b1ea0;
case 0x6b1ea6:c.instructions+=7;goto B6b1ea6;
case 0x6b1ea9:c.instructions+=6;goto B6b1ea9;
case 0x6b1eab:c.instructions+=5;goto B6b1eab;
case 0x6b1eae:c.instructions+=4;goto B6b1eae;
case 0x6b1eb1:c.instructions+=3;goto B6b1eb1;
case 0x6b1eb4:c.instructions+=2;goto B6b1eb4;
case 0x6b1eb8:c.instructions+=1;goto B6b1eb8;
case 0x6b1eba:goto L6b1eba;
case 0x6b1ebd:c.instructions+=4;goto B6b1ebd;
case 0x6b1ec3:c.instructions+=3;goto B6b1ec3;
case 0x6b1ec5:c.instructions+=2;goto B6b1ec5;
case 0x6b1ec8:c.instructions+=1;goto B6b1ec8;
case 0x6b1ece:goto L6b1ece;
case 0x6b1ed1:goto L6b1ed1;
case 0x6b1ed4:c.instructions+=5;goto B6b1ed4;
case 0x6b1ed7:c.instructions+=4;goto B6b1ed7;
case 0x6b1edb:c.instructions+=3;goto B6b1edb;
case 0x6b1ede:c.instructions+=2;goto B6b1ede;
case 0x6b1ee1:c.instructions+=1;goto B6b1ee1;
case 0x6b1ee3:goto L6b1ee3;
case 0x6b1ee6:c.instructions+=2;goto B6b1ee6;
case 0x6b1ee9:c.instructions+=1;goto B6b1ee9;
case 0x6b1eef:goto L6b1eef;
case 0x6b1ef2:c.instructions+=1;goto B6b1ef2;
case 0x6b1ef8:goto L6b1ef8;
case 0x6b1efb:c.instructions+=5;goto B6b1efb;
case 0x6b1efe:c.instructions+=4;goto B6b1efe;
case 0x6b1f02:c.instructions+=3;goto B6b1f02;
case 0x6b1f06:c.instructions+=2;goto B6b1f06;
case 0x6b1f09:c.instructions+=1;goto B6b1f09;
case 0x6b1f0f:goto L6b1f0f;
case 0x6b1f13:c.instructions+=2;goto B6b1f13;
case 0x6b1f17:c.instructions+=1;goto B6b1f17;
case 0x6b1f1d:goto L6b1f1d;
case 0x6b1f23:c.instructions+=13;goto B6b1f23;
case 0x6b1f26:c.instructions+=12;goto B6b1f26;
case 0x6b1f29:c.instructions+=11;goto B6b1f29;
case 0x6b1f2c:c.instructions+=10;goto B6b1f2c;
case 0x6b1f2f:c.instructions+=9;goto B6b1f2f;
case 0x6b1f33:c.instructions+=8;goto B6b1f33;
case 0x6b1f37:c.instructions+=7;goto B6b1f37;
case 0x6b1f3a:c.instructions+=6;goto B6b1f3a;
case 0x6b1f3d:c.instructions+=5;goto B6b1f3d;
case 0x6b1f40:c.instructions+=4;goto B6b1f40;
case 0x6b1f43:c.instructions+=3;goto B6b1f43;
case 0x6b1f46:c.instructions+=2;goto B6b1f46;
case 0x6b1f49:c.instructions+=1;goto B6b1f49;
case 0x6b1f4f:goto L6b1f4f;
case 0x6b1f51:c.instructions+=1;goto B6b1f51;
case 0x6b1f56:goto L6b1f56;
case 0x6b1f58:c.instructions+=1;goto B6b1f58;
case 0x6b1f5a:goto L6b1f5a;
case 0x6b1f5c:c.instructions+=1;goto B6b1f5c;
case 0x6b1f61:goto L6b1f61;
case 0x6b1f64:c.instructions+=1;goto B6b1f64;
case 0x6b1f66:goto L6b1f66;
case 0x6b1f6a:goto L6b1f6a;
case 0x6b1f6d:c.instructions+=2;goto B6b1f6d;
case 0x6b1f6f:c.instructions+=1;goto B6b1f6f;
case 0x6b1f75:goto L6b1f75;
case 0x6b1f77:c.instructions+=4;goto B6b1f77;
case 0x6b1f78:c.instructions+=3;goto B6b1f78;
case 0x6b1f7b:c.instructions+=2;goto B6b1f7b;
case 0x6b1f7d:c.instructions+=1;goto B6b1f7d;
case 0x6b1f82:goto L6b1f82;
case 0x6b1f85:c.instructions+=3;goto B6b1f85;
case 0x6b1f87:c.instructions+=2;goto B6b1f87;
case 0x6b1f89:c.instructions+=1;goto B6b1f89;
case 0x6b1f8f:goto L6b1f8f;
case 0x6b1f90:c.instructions+=1;goto B6b1f90;
case 0x6b1f95:goto L6b1f95;
case 0x6b1f97:c.instructions+=3;goto B6b1f97;
case 0x6b1f99:c.instructions+=2;goto B6b1f99;
case 0x6b1f9b:c.instructions+=1;goto B6b1f9b;
case 0x6b1fa1:goto L6b1fa1;
case 0x6b1fa4:c.instructions+=7;goto B6b1fa4;
case 0x6b1fa7:c.instructions+=6;goto B6b1fa7;
case 0x6b1faa:c.instructions+=5;goto B6b1faa;
case 0x6b1fad:c.instructions+=4;goto B6b1fad;
case 0x6b1fb0:c.instructions+=3;goto B6b1fb0;
case 0x6b1fb3:c.instructions+=2;goto B6b1fb3;
case 0x6b1fb5:c.instructions+=1;goto B6b1fb5;
case 0x6b1fb8:goto L6b1fb8;
case 0x6b1fba:goto L6b1fba;
case 0x6b1fbc:c.instructions+=1;goto B6b1fbc;
case 0x6b1fbf:goto L6b1fbf;
case 0x6b1fc1:goto L6b1fc1;
case 0x6b1fc3:c.instructions+=1;goto B6b1fc3;
case 0x6b1fc8:goto L6b1fc8;
case 0x6b1fcb:c.instructions+=6;goto B6b1fcb;
case 0x6b1fce:c.instructions+=5;goto B6b1fce;
case 0x6b1fd1:c.instructions+=4;goto B6b1fd1;
case 0x6b1fd4:c.instructions+=3;goto B6b1fd4;
case 0x6b1fd7:c.instructions+=2;goto B6b1fd7;
case 0x6b1fda:c.instructions+=1;goto B6b1fda;
case 0x6b1fdc:goto L6b1fdc;
case 0x6b1fe0:c.instructions+=2;goto B6b1fe0;
case 0x6b1fe2:c.instructions+=1;goto B6b1fe2;
case 0x6b1fe8:goto L6b1fe8;
case 0x6b1feb:c.instructions+=5;goto B6b1feb;
case 0x6b1fee:c.instructions+=4;goto B6b1fee;
case 0x6b1ff1:c.instructions+=3;goto B6b1ff1;
case 0x6b1ff4:c.instructions+=2;goto B6b1ff4;
case 0x6b1ff6:c.instructions+=1;goto B6b1ff6;
case 0x6b1ff8:goto L6b1ff8;
case 0x6b1ffb:c.instructions+=2;goto B6b1ffb;
case 0x6b1ffe:c.instructions+=1;goto B6b1ffe;
default:missing_instruction(c.pc);}
B6b1001:L6b1001:{c.instructions+=15;NFSU2_TR(0x6b1001);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b1004:{NFSU2_TR(0x6b1004);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1005:{NFSU2_TR(0x6b1005);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1006:{NFSU2_TR(0x6b1006);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1007:{NFSU2_TR(0x6b1007);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1008:{NFSU2_TR(0x6b1008);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b100e:{NFSU2_TR(0x6b100e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1011:{NFSU2_TR(0x6b1011);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1014:{NFSU2_TR(0x6b1014);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1017:{NFSU2_TR(0x6b1017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b101a:{NFSU2_TR(0x6b101a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b101f:{NFSU2_TR(0x6b101f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b1022:{NFSU2_TR(0x6b1022);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1023:{NFSU2_TR(0x6b1023);
__builtin_memmove((R+4),(R+12),4);
}
B6b1025:{NFSU2_TR(0x6b1025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b102aull));
TAIL_STATIC(0x6cbc7au,6cb);
}
B6b102a:L6b102a:{c.instructions+=2;NFSU2_TR(0x6b102a);
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
B6b102c:{NFSU2_TR(0x6b102c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b106a;}}
}
B6b102e:L6b102e:{c.instructions+=3;NFSU2_TR(0x6b102e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b102f:{NFSU2_TR(0x6b102f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6b1032:{NFSU2_TR(0x6b1032);
if(r1(R+512)){TAIL_STATIC(0x6b0ff5u,6b0);}
}
B6b1034:L6b1034:{c.instructions+=1;NFSU2_TR(0x6b1034);
{goto L6b1047;}
}
B6b1036:L6b1036:{c.instructions+=3;NFSU2_TR(0x6b1036);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b103c:{NFSU2_TR(0x6b103c);
__builtin_memmove((R+4),(R+12),4);
}
B6b103e:{NFSU2_TR(0x6b103e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1043ull));
TAIL_STATIC(0x699d92u,699);
}
B6b1043:L6b1043:{c.instructions+=2;NFSU2_TR(0x6b1043);
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
B6b1045:{NFSU2_TR(0x6b1045);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b106a;}}
}
B6b1047:L6b1047:{c.instructions+=4;NFSU2_TR(0x6b1047);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b104d:{NFSU2_TR(0x6b104d);
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
B6b104f:{NFSU2_TR(0x6b104f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b1051:{NFSU2_TR(0x6b1051);
{goto L6b106a;}
}
B6b1053:L6b1053:{c.instructions+=3;NFSU2_TR(0x6b1053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1054:{NFSU2_TR(0x6b1054);
__builtin_memmove((R+4),(R+12),4);
}
B6b1056:{NFSU2_TR(0x6b1056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b105bull));
TAIL_STATIC(0x699d92u,699);
}
B6b105b:L6b105b:{c.instructions+=2;NFSU2_TR(0x6b105b);
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
B6b105d:{NFSU2_TR(0x6b105d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b106a;}}
}
B6b105f:L6b105f:{c.instructions+=3;NFSU2_TR(0x6b105f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1065:{NFSU2_TR(0x6b1065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b1068:{NFSU2_TR(0x6b1068);
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
B6b106a:L6b106a:{c.instructions+=5;NFSU2_TR(0x6b106a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b106b:{NFSU2_TR(0x6b106b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b106c:{NFSU2_TR(0x6b106c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b106d:{NFSU2_TR(0x6b106d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b106e:{NFSU2_TR(0x6b106e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b106f:L6b106f:{c.instructions+=11;NFSU2_TR(0x6b106f);
__builtin_memmove((R+28),(R+28),4);
}
B6b1071:{NFSU2_TR(0x6b1071);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1072:{NFSU2_TR(0x6b1072);
__builtin_memmove((R+20),(R+16),4);
}
B6b1074:{NFSU2_TR(0x6b1074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x124ull))));
}
B6b107a:{NFSU2_TR(0x6b107a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b107b:{NFSU2_TR(0x6b107b);
__builtin_memmove((R+28),(R+4),4);
}
B6b107d:{NFSU2_TR(0x6b107d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1083:{NFSU2_TR(0x6b1083);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b1088:{NFSU2_TR(0x6b1088);
w1(R+512,u8((r4(R+0))<(u32(0x104ull))));
}
B6b108d:{NFSU2_TR(0x6b108d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1090:{NFSU2_TR(0x6b1090);
if(r1(R+512)){{goto L6b109a;}}
}
B6b1092:L6b1092:{c.instructions+=3;NFSU2_TR(0x6b1092);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b1094:{NFSU2_TR(0x6b1094);
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
B6b1095:{NFSU2_TR(0x6b1095);
{goto L6b14f7;}
}
B6b109a:L6b109a:{c.instructions+=17;NFSU2_TR(0x6b109a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b10a0:{NFSU2_TR(0x6b10a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10a1:{NFSU2_TR(0x6b10a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10a2:{NFSU2_TR(0x6b10a2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b10a4:{NFSU2_TR(0x6b10a4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b10a6:{NFSU2_TR(0x6b10a6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10a8:{NFSU2_TR(0x6b10a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b10a9:{NFSU2_TR(0x6b10a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b10aa:{NFSU2_TR(0x6b10aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b10ad:{NFSU2_TR(0x6b10ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b10b0:{NFSU2_TR(0x6b10b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b10b3:{NFSU2_TR(0x6b10b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b10ba:{NFSU2_TR(0x6b10ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b10bd:{NFSU2_TR(0x6b10bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b10bf:{NFSU2_TR(0x6b10bf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b10c4:{NFSU2_TR(0x6b10c4);
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
B6b10c6:{NFSU2_TR(0x6b10c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1168;}}
}
B6b10cc:L6b10cc:{c.instructions+=14;NFSU2_TR(0x6b10cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10ce:{NFSU2_TR(0x6b10ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10cf:{NFSU2_TR(0x6b10cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b10d2:{NFSU2_TR(0x6b10d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10d3:{NFSU2_TR(0x6b10d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b10d9:{NFSU2_TR(0x6b10d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10da:{NFSU2_TR(0x6b10da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b10dd:{NFSU2_TR(0x6b10dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10de:{NFSU2_TR(0x6b10de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b10e4:{NFSU2_TR(0x6b10e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b10e5:{NFSU2_TR(0x6b10e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80b568ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b10ec:{NFSU2_TR(0x6b10ec);
__builtin_memmove((R+4),(R+28),4);
}
B6b10ee:{NFSU2_TR(0x6b10ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b10f4:{NFSU2_TR(0x6b10f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b10f9ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6b10f9:L6b10f9:{c.instructions+=2;NFSU2_TR(0x6b10f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b10fb:{NFSU2_TR(0x6b10fb);
if(r1(R+518)){{goto L6b1103;}}
}
B6b10fd:L6b10fd:{c.instructions+=3;NFSU2_TR(0x6b10fd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b10fe:{NFSU2_TR(0x6b10fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
}
B6b1101:{NFSU2_TR(0x6b1101);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b10ccu);}goto L6b10cc;}}
}
B6b1103:L6b1103:{c.instructions+=4;NFSU2_TR(0x6b1103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1107:{NFSU2_TR(0x6b1107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b110b:{NFSU2_TR(0x6b110b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b110e:{NFSU2_TR(0x6b110e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1117;}}
}
B6b1110:L6b1110:{c.instructions+=1;NFSU2_TR(0x6b1110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1117:L6b1117:{c.instructions+=2;NFSU2_TR(0x6b1117);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1119:{NFSU2_TR(0x6b1119);
if(r1(R+518)){{goto L6b116f;}}
}
B6b111b:L6b111b:{c.instructions+=1;NFSU2_TR(0x6b111b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b111d:L6b111d:{c.instructions+=14;NFSU2_TR(0x6b111d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b111f:{NFSU2_TR(0x6b111f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1120:{NFSU2_TR(0x6b1120);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b1123:{NFSU2_TR(0x6b1123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1124:{NFSU2_TR(0x6b1124);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b112a:{NFSU2_TR(0x6b112a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b112b:{NFSU2_TR(0x6b112b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b112e:{NFSU2_TR(0x6b112e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b112f:{NFSU2_TR(0x6b112f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b1135:{NFSU2_TR(0x6b1135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1136:{NFSU2_TR(0x6b1136);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80b58cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b113d:{NFSU2_TR(0x6b113d);
__builtin_memmove((R+4),(R+28),4);
}
B6b113f:{NFSU2_TR(0x6b113f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b1145:{NFSU2_TR(0x6b1145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b114aull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6b114a:L6b114a:{c.instructions+=2;NFSU2_TR(0x6b114a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b114c:{NFSU2_TR(0x6b114c);
if(r1(R+518)){{goto L6b1153;}}
}
B6b114e:L6b114e:{c.instructions+=3;NFSU2_TR(0x6b114e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b114f:{NFSU2_TR(0x6b114f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6b1151:{NFSU2_TR(0x6b1151);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b111du);}goto L6b111d;}}
}
B6b1153:L6b1153:{c.instructions+=5;NFSU2_TR(0x6b1153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1157:{NFSU2_TR(0x6b1157);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b1159:{NFSU2_TR(0x6b1159);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b115a:{NFSU2_TR(0x6b115a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b115c:{NFSU2_TR(0x6b115c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1161;}}
}
B6b115e:L6b115e:{c.instructions+=1;NFSU2_TR(0x6b115e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1161:L6b1161:{c.instructions+=3;NFSU2_TR(0x6b1161);
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
B6b1163:{NFSU2_TR(0x6b1163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1166:{NFSU2_TR(0x6b1166);
if(r1(R+518)){{goto L6b116f;}}
}
B6b1168:L6b1168:{c.instructions+=2;NFSU2_TR(0x6b1168);
__builtin_memmove((R+0),(R+4),4);
}
B6b116a:{NFSU2_TR(0x6b116a);
{goto L6b14f5;}
}
B6b116f:L6b116f:{c.instructions+=5;NFSU2_TR(0x6b116f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1173:{NFSU2_TR(0x6b1173);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b1176:{NFSU2_TR(0x6b1176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b117d:{NFSU2_TR(0x6b117d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b1180:{NFSU2_TR(0x6b1180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1183:L6b1183:{c.instructions+=7;NFSU2_TR(0x6b1183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1186:{NFSU2_TR(0x6b1186);
__builtin_memmove((R+4),(R+8),4);
}
B6b1188:{NFSU2_TR(0x6b1188);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b118b:{NFSU2_TR(0x6b118b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff2cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6b1192:{NFSU2_TR(0x6b1192);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1195:{NFSU2_TR(0x6b1195);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1198:{NFSU2_TR(0x6b1198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b119e:L6b119e:{c.instructions+=2;NFSU2_TR(0x6b119e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b11a2:{NFSU2_TR(0x6b11a2);
if(r1(R+518)){{goto L6b128b;}}
}
B6b11a8:L6b11a8:{c.instructions+=2;NFSU2_TR(0x6b11a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b11ac:{NFSU2_TR(0x6b11ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b11b2:L6b11b2:{c.instructions+=4;NFSU2_TR(0x6b11b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b11b5:{NFSU2_TR(0x6b11b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b11b8:{NFSU2_TR(0x6b11b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b11be:{NFSU2_TR(0x6b11be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b11c4:L6b11c4:{c.instructions+=4;NFSU2_TR(0x6b11c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6b11c8:{NFSU2_TR(0x6b11c8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b11c9:{NFSU2_TR(0x6b11c9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b11cb:{NFSU2_TR(0x6b11cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b11d1:L6b11d1:{c.instructions+=2;NFSU2_TR(0x6b11d1);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b11d5:{NFSU2_TR(0x6b11d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b11db:L6b11db:{c.instructions+=3;NFSU2_TR(0x6b11db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b11df:{NFSU2_TR(0x6b11df);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b11e3:{NFSU2_TR(0x6b11e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b123f;}}
}
B6b11e5:L6b11e5:{c.instructions+=2;NFSU2_TR(0x6b11e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b11ec:{NFSU2_TR(0x6b11ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b11f2:L6b11f2:{c.instructions+=6;NFSU2_TR(0x6b11f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b11f5:{NFSU2_TR(0x6b11f5);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff4cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6b11fc:{NFSU2_TR(0x6b11fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b11fe:{NFSU2_TR(0x6b11fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1200:{NFSU2_TR(0x6b1200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1203:{NFSU2_TR(0x6b1203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b136f;}}
}
B6b1209:L6b1209:{c.instructions+=4;NFSU2_TR(0x6b1209);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b1210:{NFSU2_TR(0x6b1210);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1213:{NFSU2_TR(0x6b1213);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1215:{NFSU2_TR(0x6b1215);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b136f;}}
}
B6b121b:L6b121b:{c.instructions+=4;NFSU2_TR(0x6b121b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b1222:{NFSU2_TR(0x6b1222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1224:{NFSU2_TR(0x6b1224);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1227:{NFSU2_TR(0x6b1227);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b136f;}}
}
B6b122d:L6b122d:{c.instructions+=2;NFSU2_TR(0x6b122d);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b1234:{NFSU2_TR(0x6b1234);
if(r1(R+518)){{goto L6b1393;}}
}
B6b123a:L6b123a:{c.instructions+=1;NFSU2_TR(0x6b123a);
{goto L6b136f;}
}
B6b123f:L6b123f:{c.instructions+=2;NFSU2_TR(0x6b123f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1243:{NFSU2_TR(0x6b1243);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b1249:L6b1249:{c.instructions+=3;NFSU2_TR(0x6b1249);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff4cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6b1250:{NFSU2_TR(0x6b1250);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1252:{NFSU2_TR(0x6b1252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1278;}}
}
B6b1254:L6b1254:{c.instructions+=4;NFSU2_TR(0x6b1254);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6b125b:{NFSU2_TR(0x6b125b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b125e:{NFSU2_TR(0x6b125e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1260:{NFSU2_TR(0x6b1260);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1278;}}
}
B6b1262:L6b1262:{c.instructions+=4;NFSU2_TR(0x6b1262);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b1269:{NFSU2_TR(0x6b1269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b126b:{NFSU2_TR(0x6b126b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b126e:{NFSU2_TR(0x6b126e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1278;}}
}
B6b1270:L6b1270:{c.instructions+=2;NFSU2_TR(0x6b1270);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1272:{NFSU2_TR(0x6b1272);
if(r1(R+518)){{goto L6b1393;}}
}
B6b1278:L6b1278:{c.instructions+=3;NFSU2_TR(0x6b1278);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff2cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b127f:{NFSU2_TR(0x6b127f);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b1286:{NFSU2_TR(0x6b1286);
{goto L6b1376;}
}
B6b128b:L6b128b:{c.instructions+=2;NFSU2_TR(0x6b128b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b128f:{NFSU2_TR(0x6b128f);
if(r1(R+518)){{goto L6b12b2;}}
}
B6b1291:L6b1291:{c.instructions+=6;NFSU2_TR(0x6b1291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1294:{NFSU2_TR(0x6b1294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1297:{NFSU2_TR(0x6b1297);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b129a:{NFSU2_TR(0x6b129a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b129d:{NFSU2_TR(0x6b129d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b12a1:{NFSU2_TR(0x6b12a1);
if(r1(R+518)){{goto L6b13ee;}}
}
B6b12a7:L6b12a7:{c.instructions+=3;NFSU2_TR(0x6b12a7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b12ab:{NFSU2_TR(0x6b12ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b12ad:{NFSU2_TR(0x6b12ad);
{goto L6b1338;}
}
B6b12b2:L6b12b2:{c.instructions+=3;NFSU2_TR(0x6b12b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b12b5:{NFSU2_TR(0x6b12b5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b12b8:{NFSU2_TR(0x6b12b8);
if(r1(R+518)){{goto L6b13ee;}}
}
B6b12be:L6b12be:{c.instructions+=5;NFSU2_TR(0x6b12be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b12c1:{NFSU2_TR(0x6b12c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b12c4:{NFSU2_TR(0x6b12c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b12c7:{NFSU2_TR(0x6b12c7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x20500003ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b12cd:{NFSU2_TR(0x6b12cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b12d3:L6b12d3:{c.instructions+=9;NFSU2_TR(0x6b12d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b12d6:{NFSU2_TR(0x6b12d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b12d9:{NFSU2_TR(0x6b12d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b12dc:{NFSU2_TR(0x6b12dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b12df:{NFSU2_TR(0x6b12df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b12e2:{NFSU2_TR(0x6b12e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b12e5:{NFSU2_TR(0x6b12e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b12e8:{NFSU2_TR(0x6b12e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b12ec:{NFSU2_TR(0x6b12ec);
if(r1(R+518)){{goto L6b13ee;}}
}
B6b12f2:L6b12f2:{c.instructions+=3;NFSU2_TR(0x6b12f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b12f5:{NFSU2_TR(0x6b12f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b12f8:{NFSU2_TR(0x6b12f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b12fe:L6b12fe:{c.instructions+=9;NFSU2_TR(0x6b12fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1301:{NFSU2_TR(0x6b1301);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6b1303:{NFSU2_TR(0x6b1303);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b1307:{NFSU2_TR(0x6b1307);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b130a:{NFSU2_TR(0x6b130a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b130d:{NFSU2_TR(0x6b130d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1310:{NFSU2_TR(0x6b1310);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1313:{NFSU2_TR(0x6b1313);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b1317:{NFSU2_TR(0x6b1317);
if(r1(R+518)){{goto L6b13ee;}}
}
B6b131d:L6b131d:{c.instructions+=6;NFSU2_TR(0x6b131d);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1323:{NFSU2_TR(0x6b1323);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1326:{NFSU2_TR(0x6b1326);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1328:{NFSU2_TR(0x6b1328);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b132a:{NFSU2_TR(0x6b132a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b132d:{NFSU2_TR(0x6b132d);
if(r1(R+514)){{goto L6b13ee;}}
}
B6b1333:L6b1333:{c.instructions+=2;NFSU2_TR(0x6b1333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1336:{NFSU2_TR(0x6b1336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b1338:L6b1338:{c.instructions+=6;NFSU2_TR(0x6b1338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b133a:{NFSU2_TR(0x6b133a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff4cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6b1341:{NFSU2_TR(0x6b1341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1343:{NFSU2_TR(0x6b1343);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1345:{NFSU2_TR(0x6b1345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1348:{NFSU2_TR(0x6b1348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b136f;}}
}
B6b134a:L6b134a:{c.instructions+=4;NFSU2_TR(0x6b134a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b1351:{NFSU2_TR(0x6b1351);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1354:{NFSU2_TR(0x6b1354);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1356:{NFSU2_TR(0x6b1356);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b136f;}}
}
B6b1358:L6b1358:{c.instructions+=4;NFSU2_TR(0x6b1358);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b135f:{NFSU2_TR(0x6b135f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1361:{NFSU2_TR(0x6b1361);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1364:{NFSU2_TR(0x6b1364);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b136f;}}
}
B6b1366:L6b1366:{c.instructions+=2;NFSU2_TR(0x6b1366);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b136d:{NFSU2_TR(0x6b136d);
if(r1(R+518)){{goto L6b1393;}}
}
B6b136f:L6b136f:{c.instructions+=1;NFSU2_TR(0x6b136f);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+28))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b1376:L6b1376:{c.instructions+=1;NFSU2_TR(0x6b1376);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b1378:L6b1378:{c.instructions+=4;NFSU2_TR(0x6b1378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b137a:{NFSU2_TR(0x6b137a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b137d:{NFSU2_TR(0x6b137d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b137f:{NFSU2_TR(0x6b137f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b1381:L6b1381:{c.instructions+=4;NFSU2_TR(0x6b1381);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b1388:{NFSU2_TR(0x6b1388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b138a:{NFSU2_TR(0x6b138a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b138d:{NFSU2_TR(0x6b138d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b138f:L6b138f:{c.instructions+=2;NFSU2_TR(0x6b138f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1391:{NFSU2_TR(0x6b1391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b1393:L6b1393:{c.instructions+=3;NFSU2_TR(0x6b1393);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1397:{NFSU2_TR(0x6b1397);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b139b:{NFSU2_TR(0x6b139b);
if(r1(R+518)){{goto L6b13a2;}}
}
B6b139d:L6b139d:{c.instructions+=2;NFSU2_TR(0x6b139d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b13a0:{NFSU2_TR(0x6b13a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b13a2:L6b13a2:{c.instructions+=6;NFSU2_TR(0x6b13a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b13a5:{NFSU2_TR(0x6b13a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b13a8:{NFSU2_TR(0x6b13a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b13ab:{NFSU2_TR(0x6b13ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b13ae:{NFSU2_TR(0x6b13ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b13b1:{NFSU2_TR(0x6b13b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b13ee;}}
}
B6b13b3:L6b13b3:{c.instructions+=3;NFSU2_TR(0x6b13b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b13b6:{NFSU2_TR(0x6b13b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6b13ba:{NFSU2_TR(0x6b13ba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1183u);}goto L6b1183;}}
}
B6b13c0:L6b13c0:{c.instructions+=4;NFSU2_TR(0x6b13c0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b13c2:{NFSU2_TR(0x6b13c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b13c4:{NFSU2_TR(0x6b13c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b13c7:{NFSU2_TR(0x6b13c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b13d8;}}
}
B6b13c9:L6b13c9:{c.instructions+=5;NFSU2_TR(0x6b13c9);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffedcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b13d0:{NFSU2_TR(0x6b13d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b13d1:{NFSU2_TR(0x6b13d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b13d3:{NFSU2_TR(0x6b13d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b13d6:{NFSU2_TR(0x6b13d6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b13c9u);}goto L6b13c9;}}
}
B6b13d8:L6b13d8:{c.instructions+=2;NFSU2_TR(0x6b13d8);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b13da:{NFSU2_TR(0x6b13da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b13dfull));
TAIL_STATIC(0x699317u,699);
}
B6b13df:L6b13df:{c.instructions+=2;NFSU2_TR(0x6b13df);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b13e1:{NFSU2_TR(0x6b13e1);
if(r1(R+518)){{goto L6b13f6;}}
}
B6b13e3:L6b13e3:{c.instructions+=2;NFSU2_TR(0x6b13e3);
__builtin_memmove((R+4),(R+0),4);
}
B6b13e5:{NFSU2_TR(0x6b13e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b13eaull));
TAIL_STATIC(0x698e7du,698);
}
B6b13ea:L6b13ea:{c.instructions+=2;NFSU2_TR(0x6b13ea);
__builtin_memmove((R+12),(R+0),4);
}
B6b13ec:{NFSU2_TR(0x6b13ec);
{goto L6b13f8;}
}
B6b13ee:L6b13ee:{c.instructions+=3;NFSU2_TR(0x6b13ee);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b13f0:{NFSU2_TR(0x6b13f0);
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
B6b13f1:{NFSU2_TR(0x6b13f1);
{goto L6b14f5;}
}
B6b13f6:L6b13f6:{c.instructions+=1;NFSU2_TR(0x6b13f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b13f8:L6b13f8:{c.instructions+=2;NFSU2_TR(0x6b13f8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6b13fa:{NFSU2_TR(0x6b13fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1406;}}
}
B6b13fc:L6b13fc:{c.instructions+=2;NFSU2_TR(0x6b13fc);
w4(R+0,u32(0x8007000eull));
}
B6b1401:{NFSU2_TR(0x6b1401);
{goto L6b14f5;}
}
B6b1406:L6b1406:{c.instructions+=7;NFSU2_TR(0x6b1406);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1409:{NFSU2_TR(0x6b1409);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b140a:{NFSU2_TR(0x6b140a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b140d:{NFSU2_TR(0x6b140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1413:{NFSU2_TR(0x6b1413);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b1416:{NFSU2_TR(0x6b1416);
__builtin_memmove((R+4),(R+12),4);
}
B6b1418:{NFSU2_TR(0x6b1418);
if(r1(R+518)){{goto L6b1423;}}
}
B6b141a:L6b141a:{c.instructions+=3;NFSU2_TR(0x6b141a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b141c:{NFSU2_TR(0x6b141c);
u8 U[4];
w4(U+0,u32(0x72c00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1421:{NFSU2_TR(0x6b1421);
{goto L6b142a;}
}
B6b1423:L6b1423:{c.instructions+=2;NFSU2_TR(0x6b1423);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1425:{NFSU2_TR(0x6b1425);
u8 U[4];
w4(U+0,u32(0x72d00003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b142a:L6b142a:{c.instructions+=1;NFSU2_TR(0x6b142a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b142full));
TAIL_STATIC(0x699362u,699);
}
B6b142f:L6b142f:{c.instructions+=4;NFSU2_TR(0x6b142f);
__builtin_memmove((R+28),(R+0),4);
}
B6b1431:{NFSU2_TR(0x6b1431);
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
B6b1433:{NFSU2_TR(0x6b1433);
__builtin_memmove((R+4),(R+12),4);
}
B6b1435:{NFSU2_TR(0x6b1435);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6b1445;}}
}
B6b1437:L6b1437:{c.instructions+=2;NFSU2_TR(0x6b1437);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1439:{NFSU2_TR(0x6b1439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b143eull));
TAIL_STATIC(0x6739efu,673);
}
B6b143e:L6b143e:{c.instructions+=2;NFSU2_TR(0x6b143e);
__builtin_memmove((R+0),(R+28),4);
}
B6b1440:{NFSU2_TR(0x6b1440);
{goto L6b14f5;}
}
B6b1445:L6b1445:{c.instructions+=2;NFSU2_TR(0x6b1445);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b144b:{NFSU2_TR(0x6b144b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1450ull));
TAIL_STATIC(0x698eb3u,698);
}
B6b1450:L6b1450:{c.instructions+=3;NFSU2_TR(0x6b1450);
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
B6b1452:{NFSU2_TR(0x6b1452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1455:{NFSU2_TR(0x6b1455);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6b1465;}}
}
B6b1457:L6b1457:{c.instructions+=3;NFSU2_TR(0x6b1457);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1459:{NFSU2_TR(0x6b1459);
__builtin_memmove((R+4),(R+12),4);
}
B6b145b:{NFSU2_TR(0x6b145b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1460ull));
TAIL_STATIC(0x6739efu,673);
}
B6b1460:L6b1460:{c.instructions+=1;NFSU2_TR(0x6b1460);
{goto L6b14f2;}
}
B6b1465:L6b1465:{c.instructions+=8;NFSU2_TR(0x6b1465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1468:{NFSU2_TR(0x6b1468);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b146e:{NFSU2_TR(0x6b146e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1471:{NFSU2_TR(0x6b1471);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1474:{NFSU2_TR(0x6b1474);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1477:{NFSU2_TR(0x6b1477);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b147a:{NFSU2_TR(0x6b147a);
__builtin_memmove((R+0),(R+4),4);
}
B6b147c:{NFSU2_TR(0x6b147c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6b147f:L6b147f:{c.instructions+=1;NFSU2_TR(0x6b147f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b1481;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b147fu);}goto L6b147f;}
}
B6b1481:L6b1481:{c.instructions+=2;NFSU2_TR(0x6b1481);
__builtin_memmove((R+4),(R+0),4);
}
B6b1483:{NFSU2_TR(0x6b1483);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6b1486:L6b1486:{c.instructions+=1;NFSU2_TR(0x6b1486);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6b1488;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1486u);}goto L6b1486;}
}
B6b1488:L6b1488:{c.instructions+=7;NFSU2_TR(0x6b1488);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b148a:{NFSU2_TR(0x6b148a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b148b:{NFSU2_TR(0x6b148b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b148e:{NFSU2_TR(0x6b148e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b1491:{NFSU2_TR(0x6b1491);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6b1493:{NFSU2_TR(0x6b1493);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6b1495:{NFSU2_TR(0x6b1495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1498:L6b1498:{c.instructions+=10;NFSU2_TR(0x6b1498);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b149c:{NFSU2_TR(0x6b149c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b14a2:{NFSU2_TR(0x6b14a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b14a5:{NFSU2_TR(0x6b14a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b14a8:{NFSU2_TR(0x6b14a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b14aa:{NFSU2_TR(0x6b14aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b14ae:{NFSU2_TR(0x6b14ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b14b1:{NFSU2_TR(0x6b14b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b14b4:{NFSU2_TR(0x6b14b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b14b7:{NFSU2_TR(0x6b14b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b14c6;}}
}
B6b14b9:L6b14b9:{c.instructions+=4;NFSU2_TR(0x6b14b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b14bc:{NFSU2_TR(0x6b14bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b14bf:{NFSU2_TR(0x6b14bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b14c2:{NFSU2_TR(0x6b14c2);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b14c6:L6b14c6:{c.instructions+=3;NFSU2_TR(0x6b14c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b14c9:{NFSU2_TR(0x6b14c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6b14cc:{NFSU2_TR(0x6b14cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1498u);}goto L6b1498;}}
}
B6b14ce:L6b14ce:{c.instructions+=6;NFSU2_TR(0x6b14ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b14d1:{NFSU2_TR(0x6b14d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b14d7:{NFSU2_TR(0x6b14d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b14d9:{NFSU2_TR(0x6b14d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b14dc:{NFSU2_TR(0x6b14dc);
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
B6b14de:{NFSU2_TR(0x6b14de);
if(r1(R+518)){{goto L6b14ea;}}
}
B6b14e0:L6b14e0:{c.instructions+=2;NFSU2_TR(0x6b14e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b14e2:{NFSU2_TR(0x6b14e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b14e7ull));
TAIL_STATIC(0x6739efu,673);
}
B6b14e7:L6b14e7:{c.instructions+=1;NFSU2_TR(0x6b14e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b14ea:L6b14ea:{c.instructions+=3;NFSU2_TR(0x6b14ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b14ec:{NFSU2_TR(0x6b14ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b14ef:{NFSU2_TR(0x6b14ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b14f2:L6b14f2:{c.instructions+=1;NFSU2_TR(0x6b14f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b14f5:L6b14f5:{c.instructions+=2;NFSU2_TR(0x6b14f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b14f6:{NFSU2_TR(0x6b14f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b14f7:L6b14f7:{c.instructions+=3;NFSU2_TR(0x6b14f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b14f8:{NFSU2_TR(0x6b14f8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b14f9:{NFSU2_TR(0x6b14f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b14fc:L6b14fc:{c.instructions+=10;NFSU2_TR(0x6b14fc);
__builtin_memmove((R+28),(R+28),4);
}
B6b14fe:{NFSU2_TR(0x6b14fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b14ff:{NFSU2_TR(0x6b14ff);
__builtin_memmove((R+20),(R+16),4);
}
B6b1501:{NFSU2_TR(0x6b1501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6b1504:{NFSU2_TR(0x6b1504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1508:{NFSU2_TR(0x6b1508);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b150c:{NFSU2_TR(0x6b150c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b150d:{NFSU2_TR(0x6b150d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b150e:{NFSU2_TR(0x6b150e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b150f:{NFSU2_TR(0x6b150f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1637;}}
}
B6b1515:L6b1515:{c.instructions+=3;NFSU2_TR(0x6b1515);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1518:{NFSU2_TR(0x6b1518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b151b:{NFSU2_TR(0x6b151b);
w4(R+28,u32(0x11000000ull));
}
B6b1520:L6b1520:{c.instructions+=7;NFSU2_TR(0x6b1520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1523:{NFSU2_TR(0x6b1523);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1529:{NFSU2_TR(0x6b1529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b152c:{NFSU2_TR(0x6b152c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b152e:{NFSU2_TR(0x6b152e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1530:{NFSU2_TR(0x6b1530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1536:{NFSU2_TR(0x6b1536);
if(r1(R+518)){{goto L6b1624;}}
}
B6b153c:L6b153c:{c.instructions+=2;NFSU2_TR(0x6b153c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b153f:{NFSU2_TR(0x6b153f);
if(r1(R+518)){{goto L6b1624;}}
}
B6b1545:L6b1545:{c.instructions+=8;NFSU2_TR(0x6b1545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1547:{NFSU2_TR(0x6b1547);
__builtin_memmove((R+8),(R+0),4);
}
B6b1549:{NFSU2_TR(0x6b1549);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b154e:{NFSU2_TR(0x6b154e);
__builtin_memmove((R+12),(R+0),4);
}
B6b1550:{NFSU2_TR(0x6b1550);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b1556:{NFSU2_TR(0x6b1556);
w4(R+0,u32(0x60c00000ull));
}
B6b155b:{NFSU2_TR(0x6b155b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b155d:{NFSU2_TR(0x6b155d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b15b1;}}
}
B6b155f:L6b155f:{c.instructions+=1;NFSU2_TR(0x6b155f);
if(r1(R+518)){{goto L6b16bf;}}
}
B6b1565:L6b1565:{c.instructions+=2;NFSU2_TR(0x6b1565);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b156b:{NFSU2_TR(0x6b156b);
if(r1(R+518)){{goto L6b16bb;}}
}
B6b1571:L6b1571:{c.instructions+=2;NFSU2_TR(0x6b1571);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1577:{NFSU2_TR(0x6b1577);
if(r1(R+518)){{goto L6b16b7;}}
}
B6b157d:L6b157d:{c.instructions+=2;NFSU2_TR(0x6b157d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1583:{NFSU2_TR(0x6b1583);
if(r1(R+518)){{goto L6b1595;}}
}
B6b1585:L6b1585:{c.instructions+=2;NFSU2_TR(0x6b1585);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b158b:{NFSU2_TR(0x6b158b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b15d5;}}
}
B6b158d:L6b158d:{c.instructions+=3;NFSU2_TR(0x6b158d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b158f:{NFSU2_TR(0x6b158f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b1590:{NFSU2_TR(0x6b1590);
{goto L6b16d2;}
}
B6b1595:L6b1595:{c.instructions+=4;NFSU2_TR(0x6b1595);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b159b:{NFSU2_TR(0x6b159b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b15a0:{NFSU2_TR(0x6b15a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b15a5:{NFSU2_TR(0x6b15a5);
if(r1(R+518)){{goto L6b15d5;}}
}
B6b15a7:L6b15a7:{c.instructions+=4;NFSU2_TR(0x6b15a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b15a9:{NFSU2_TR(0x6b15a9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b15aa:{NFSU2_TR(0x6b15aa);
__builtin_memmove((R+0),(R+8),4);
}
B6b15ac:{NFSU2_TR(0x6b15ac);
{goto L6b16d4;}
}
B6b15b1:L6b15b1:{c.instructions+=2;NFSU2_TR(0x6b15b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b15b7:{NFSU2_TR(0x6b15b7);
if(r1(R+518)){{goto L6b16cf;}}
}
B6b15bd:L6b15bd:{c.instructions+=2;NFSU2_TR(0x6b15bd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b15c3:{NFSU2_TR(0x6b15c3);
if(r1(R+518)){{goto L6b16c7;}}
}
B6b15c9:L6b15c9:{c.instructions+=2;NFSU2_TR(0x6b15c9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b15cf:{NFSU2_TR(0x6b15cf);
if(r1(R+518)){{goto L6b16c3;}}
}
B6b15d5:L6b15d5:{c.instructions+=2;NFSU2_TR(0x6b15d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b15d6:{NFSU2_TR(0x6b15d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b15dbull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b15db:L6b15db:{c.instructions+=2;NFSU2_TR(0x6b15db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b15dd:{NFSU2_TR(0x6b15dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b15e3;}}
}
B6b15df:L6b15df:{c.instructions+=2;NFSU2_TR(0x6b15df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b15e1:{NFSU2_TR(0x6b15e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1624;}}
}
B6b15e3:L6b15e3:{c.instructions+=10;NFSU2_TR(0x6b15e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b15e6:{NFSU2_TR(0x6b15e6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6b15e8:{NFSU2_TR(0x6b15e8);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B6b15ea:{NFSU2_TR(0x6b15ea);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b15ec:{NFSU2_TR(0x6b15ec);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B6b15ee:{NFSU2_TR(0x6b15ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b15f1:{NFSU2_TR(0x6b15f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b15f4:{NFSU2_TR(0x6b15f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b15f7:{NFSU2_TR(0x6b15f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b15fb:{NFSU2_TR(0x6b15fb);
if(r1(R+518)){{goto L6b1624;}}
}
B6b15fd:L6b15fd:{c.instructions+=4;NFSU2_TR(0x6b15fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1603:{NFSU2_TR(0x6b1603);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6b1609:{NFSU2_TR(0x6b1609);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b160f:{NFSU2_TR(0x6b160f);
if(r1(R+518)){{goto L6b1624;}}
}
B6b1611:L6b1611:{c.instructions+=5;NFSU2_TR(0x6b1611);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1614:{NFSU2_TR(0x6b1614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1617:{NFSU2_TR(0x6b1617);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b161a:{NFSU2_TR(0x6b161a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b161e:{NFSU2_TR(0x6b161e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1707;}}
}
B6b1624:L6b1624:{c.instructions+=5;NFSU2_TR(0x6b1624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1627:{NFSU2_TR(0x6b1627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b162a:{NFSU2_TR(0x6b162a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b162e:{NFSU2_TR(0x6b162e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b1631:{NFSU2_TR(0x6b1631);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1520u);}goto L6b1520;}}
}
B6b1637:L6b1637:{c.instructions+=3;NFSU2_TR(0x6b1637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b163b:{NFSU2_TR(0x6b163b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b163f:{NFSU2_TR(0x6b163f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b16b0;}}
}
B6b1641:L6b1641:{c.instructions+=2;NFSU2_TR(0x6b1641);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1644:{NFSU2_TR(0x6b1644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1647:L6b1647:{c.instructions+=8;NFSU2_TR(0x6b1647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b164a:{NFSU2_TR(0x6b164a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1650:{NFSU2_TR(0x6b1650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1653:{NFSU2_TR(0x6b1653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1655:{NFSU2_TR(0x6b1655);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b1657:{NFSU2_TR(0x6b1657);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1659:{NFSU2_TR(0x6b1659);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b165f:{NFSU2_TR(0x6b165f);
if(r1(R+518)){{goto L6b16a1;}}
}
B6b1661:L6b1661:{c.instructions+=2;NFSU2_TR(0x6b1661);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1663:{NFSU2_TR(0x6b1663);
if(r1(R+518)){{goto L6b16a1;}}
}
B6b1665:L6b1665:{c.instructions+=3;NFSU2_TR(0x6b1665);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1668:{NFSU2_TR(0x6b1668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b166b:{NFSU2_TR(0x6b166b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b16a1;}}
}
B6b166d:L6b166d:{c.instructions+=2;NFSU2_TR(0x6b166d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1670:{NFSU2_TR(0x6b1670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1673:L6b1673:{c.instructions+=5;NFSU2_TR(0x6b1673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b1675:{NFSU2_TR(0x6b1675);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b1678:{NFSU2_TR(0x6b1678);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b167e:{NFSU2_TR(0x6b167e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1681:{NFSU2_TR(0x6b1681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b168d;}}
}
B6b1683:L6b1683:{c.instructions+=2;NFSU2_TR(0x6b1683);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b1687:{NFSU2_TR(0x6b1687);
if(r1(R+518)){{goto L6b172b;}}
}
B6b168d:L6b168d:{c.instructions+=6;NFSU2_TR(0x6b168d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1690:{NFSU2_TR(0x6b1690);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1696:{NFSU2_TR(0x6b1696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b1699:{NFSU2_TR(0x6b1699);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6b169c:{NFSU2_TR(0x6b169c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b169f:{NFSU2_TR(0x6b169f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1673u);}goto L6b1673;}}
}
B6b16a1:L6b16a1:{c.instructions+=5;NFSU2_TR(0x6b16a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b16a4:{NFSU2_TR(0x6b16a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b16a7:{NFSU2_TR(0x6b16a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b16ab:{NFSU2_TR(0x6b16ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b16ae:{NFSU2_TR(0x6b16ae);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1647u);}goto L6b1647;}}
}
B6b16b0:L6b16b0:{c.instructions+=1;NFSU2_TR(0x6b16b0);
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
B6b16b2:L6b16b2:{c.instructions+=5;NFSU2_TR(0x6b16b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b16b3:{NFSU2_TR(0x6b16b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b16b4:{NFSU2_TR(0x6b16b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b16b5:{NFSU2_TR(0x6b16b5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b16b6:{NFSU2_TR(0x6b16b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b16b7:L6b16b7:{c.instructions+=2;NFSU2_TR(0x6b16b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b16b9:{NFSU2_TR(0x6b16b9);
{goto L6b16d2;}
}
B6b16bb:L6b16bb:{c.instructions+=2;NFSU2_TR(0x6b16bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b16bd:{NFSU2_TR(0x6b16bd);
{goto L6b16ca;}
}
B6b16bf:L6b16bf:{c.instructions+=2;NFSU2_TR(0x6b16bf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16c1:{NFSU2_TR(0x6b16c1);
{goto L6b16c9;}
}
B6b16c3:L6b16c3:{c.instructions+=2;NFSU2_TR(0x6b16c3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16c5:{NFSU2_TR(0x6b16c5);
{goto L6b16d1;}
}
B6b16c7:L6b16c7:{c.instructions+=1;NFSU2_TR(0x6b16c7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16c9:L6b16c9:{c.instructions+=1;NFSU2_TR(0x6b16c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b16ca:L6b16ca:{c.instructions+=3;NFSU2_TR(0x6b16ca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b16cc:{NFSU2_TR(0x6b16cc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b16cd:{NFSU2_TR(0x6b16cd);
{goto L6b16d4;}
}
B6b16cf:L6b16cf:{c.instructions+=1;NFSU2_TR(0x6b16cf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16d1:L6b16d1:{c.instructions+=1;NFSU2_TR(0x6b16d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b16d2:L6b16d2:{c.instructions+=1;NFSU2_TR(0x6b16d2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b16d4:L6b16d4:{c.instructions+=10;NFSU2_TR(0x6b16d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b16da:{NFSU2_TR(0x6b16da);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B6b16e0:{NFSU2_TR(0x6b16e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16e1:{NFSU2_TR(0x6b16e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80b648ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b16e8:{NFSU2_TR(0x6b16e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80b638ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b16ef:{NFSU2_TR(0x6b16ef);
u8 U[4];
w4(U+0,u32(0x7bc20cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16f4:{NFSU2_TR(0x6b16f4);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16f9:{NFSU2_TR(0x6b16f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b16fc:{NFSU2_TR(0x6b16fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b16fd:{NFSU2_TR(0x6b16fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1702ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b1702:L6b1702:{c.instructions+=2;NFSU2_TR(0x6b1702);
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
B6b1705:{NFSU2_TR(0x6b1705);
{goto L6b1741;}
}
B6b1707:L6b1707:{c.instructions+=8;NFSU2_TR(0x6b1707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b170d:{NFSU2_TR(0x6b170d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b1712:{NFSU2_TR(0x6b1712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1713:{NFSU2_TR(0x6b1713);
u8 U[4];
w4(U+0,u32(0x7bc1dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1718:{NFSU2_TR(0x6b1718);
u8 U[4];
w4(U+0,u32(0x11b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b171d:{NFSU2_TR(0x6b171d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b1720:{NFSU2_TR(0x6b1720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1721:{NFSU2_TR(0x6b1721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1726ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b1726:L6b1726:{c.instructions+=2;NFSU2_TR(0x6b1726);
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
B6b1729:{NFSU2_TR(0x6b1729);
{goto L6b1741;}
}
B6b172b:L6b172b:{c.instructions+=5;NFSU2_TR(0x6b172b);
u8 U[4];
w4(U+0,u32(0x7bc19cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1730:{NFSU2_TR(0x6b1730);
u8 U[4];
w4(U+0,u32(0x11a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1735:{NFSU2_TR(0x6b1735);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b1738:{NFSU2_TR(0x6b1738);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1739:{NFSU2_TR(0x6b1739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b173eull));
TAIL_STATIC(0x69e936u,69e);
}
B6b173e:L6b173e:{c.instructions+=1;NFSU2_TR(0x6b173e);
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
B6b1741:L6b1741:{c.instructions+=2;NFSU2_TR(0x6b1741);
w4(R+0,u32(0x80004005ull));
}
B6b1746:{NFSU2_TR(0x6b1746);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b16b2u);}goto L6b16b2;}
}
B6b174b:L6b174b:{c.instructions+=32;NFSU2_TR(0x6b174b);
__builtin_memmove((R+28),(R+28),4);
}
B6b174d:{NFSU2_TR(0x6b174d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b174e:{NFSU2_TR(0x6b174e);
__builtin_memmove((R+20),(R+16),4);
}
B6b1750:{NFSU2_TR(0x6b1750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B6b1756:{NFSU2_TR(0x6b1756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1757:{NFSU2_TR(0x6b1757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1758:{NFSU2_TR(0x6b1758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1759:{NFSU2_TR(0x6b1759);
__builtin_memmove((R+28),(R+4),4);
}
B6b175b:{NFSU2_TR(0x6b175b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1761:{NFSU2_TR(0x6b1761);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b1763:{NFSU2_TR(0x6b1763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1764:{NFSU2_TR(0x6b1764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1767:{NFSU2_TR(0x6b1767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b176a:{NFSU2_TR(0x6b176a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1771:{NFSU2_TR(0x6b1771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1778:{NFSU2_TR(0x6b1778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b177f:{NFSU2_TR(0x6b177f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b1781:{NFSU2_TR(0x6b1781);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6b1787:{NFSU2_TR(0x6b1787);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1788:{NFSU2_TR(0x6b1788);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b178b:{NFSU2_TR(0x6b178b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b178c:{NFSU2_TR(0x6b178c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b1792:{NFSU2_TR(0x6b1792);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1793:{NFSU2_TR(0x6b1793);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b1796:{NFSU2_TR(0x6b1796);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1797:{NFSU2_TR(0x6b1797);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b179a:{NFSU2_TR(0x6b179a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b179b:{NFSU2_TR(0x6b179b);
u8 U[4];
w4(U+0,u32(0x7bb2d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17a0:{NFSU2_TR(0x6b17a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17a1:{NFSU2_TR(0x6b17a1);
__builtin_memmove((R+4),(R+28),4);
}
B6b17a3:{NFSU2_TR(0x6b17a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b17a6:{NFSU2_TR(0x6b17a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b17abull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6b17ab:L6b17ab:{c.instructions+=2;NFSU2_TR(0x6b17ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b17ad:{NFSU2_TR(0x6b17ad);
if(r1(R+518)){{goto L6b17e5;}}
}
B6b17af:L6b17af:{c.instructions+=14;NFSU2_TR(0x6b17af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17b0:{NFSU2_TR(0x6b17b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17b1:{NFSU2_TR(0x6b17b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b17b4:{NFSU2_TR(0x6b17b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17b5:{NFSU2_TR(0x6b17b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b17bb:{NFSU2_TR(0x6b17bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17bc:{NFSU2_TR(0x6b17bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b17bf:{NFSU2_TR(0x6b17bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17c0:{NFSU2_TR(0x6b17c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b17c3:{NFSU2_TR(0x6b17c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17c4:{NFSU2_TR(0x6b17c4);
u8 U[4];
w4(U+0,u32(0x7bb330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b17c9:{NFSU2_TR(0x6b17c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b17cf:{NFSU2_TR(0x6b17cf);
__builtin_memmove((R+4),(R+28),4);
}
B6b17d1:{NFSU2_TR(0x6b17d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b17d6ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6b17d6:L6b17d6:{c.instructions+=3;NFSU2_TR(0x6b17d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b17d8:{NFSU2_TR(0x6b17d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b17df:{NFSU2_TR(0x6b17df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b197c;}}
}
B6b17e5:L6b17e5:{c.instructions+=3;NFSU2_TR(0x6b17e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b17e9:{NFSU2_TR(0x6b17e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b17ed:{NFSU2_TR(0x6b17ed);
if(r1(R+518)){{goto L6b183c;}}
}
B6b17ef:L6b17ef:{c.instructions+=13;NFSU2_TR(0x6b17ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b17f2:{NFSU2_TR(0x6b17f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b17f8:{NFSU2_TR(0x6b17f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b17fb:{NFSU2_TR(0x6b17fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b1801:{NFSU2_TR(0x6b1801);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1804:{NFSU2_TR(0x6b1804);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1807:{NFSU2_TR(0x6b1807);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b180a:{NFSU2_TR(0x6b180a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b180d:{NFSU2_TR(0x6b180d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1810:{NFSU2_TR(0x6b1810);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b1813:{NFSU2_TR(0x6b1813);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1816:{NFSU2_TR(0x6b1816);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b1819:{NFSU2_TR(0x6b1819);
if(r1(R+518)){{goto L6b1822;}}
}
B6b181b:L6b181b:{c.instructions+=1;NFSU2_TR(0x6b181b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1822:L6b1822:{c.instructions+=3;NFSU2_TR(0x6b1822);
w4(R+0,u32(0x300ull));
}
B6b1827:{NFSU2_TR(0x6b1827);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b182a:{NFSU2_TR(0x6b182a);
if(r1(R+518)){{goto L6b183c;}}
}
B6b182c:L6b182c:{c.instructions+=2;NFSU2_TR(0x6b182c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b182e:{NFSU2_TR(0x6b182e);
if(r1(R+518)){{goto L6b183c;}}
}
B6b1830:L6b1830:{c.instructions+=2;NFSU2_TR(0x6b1830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1837:{NFSU2_TR(0x6b1837);
{goto L6b198d;}
}
B6b183c:L6b183c:{c.instructions+=2;NFSU2_TR(0x6b183c);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b183e:{NFSU2_TR(0x6b183e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1843ull));
TAIL_STATIC(0x699317u,699);
}
B6b1843:L6b1843:{c.instructions+=2;NFSU2_TR(0x6b1843);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1845:{NFSU2_TR(0x6b1845);
if(r1(R+518)){{goto L6b1852;}}
}
B6b1847:L6b1847:{c.instructions+=2;NFSU2_TR(0x6b1847);
__builtin_memmove((R+4),(R+0),4);
}
B6b1849:{NFSU2_TR(0x6b1849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b184eull));
TAIL_STATIC(0x698e7du,698);
}
B6b184e:L6b184e:{c.instructions+=2;NFSU2_TR(0x6b184e);
__builtin_memmove((R+12),(R+0),4);
}
B6b1850:{NFSU2_TR(0x6b1850);
{goto L6b1854;}
}
B6b1852:L6b1852:{c.instructions+=1;NFSU2_TR(0x6b1852);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b1854:L6b1854:{c.instructions+=2;NFSU2_TR(0x6b1854);
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
B6b1856:{NFSU2_TR(0x6b1856);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1864;}}
}
B6b1858:L6b1858:{c.instructions+=2;NFSU2_TR(0x6b1858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b185f:{NFSU2_TR(0x6b185f);
{goto L6b198d;}
}
B6b1864:L6b1864:{c.instructions+=4;NFSU2_TR(0x6b1864);
__builtin_memmove((R+0),(R+24),4);
}
B6b1866:{NFSU2_TR(0x6b1866);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b186b:{NFSU2_TR(0x6b186b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b186f:{NFSU2_TR(0x6b186f);
if(r1(R+518)){{goto L6b1878;}}
}
B6b1871:L6b1871:{c.instructions+=2;NFSU2_TR(0x6b1871);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70400000ull))));
}
B6b1876:{NFSU2_TR(0x6b1876);
{goto L6b187d;}
}
B6b1878:L6b1878:{c.instructions+=1;NFSU2_TR(0x6b1878);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70300000ull))));
}
B6b187d:L6b187d:{c.instructions+=7;NFSU2_TR(0x6b187d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b187f:{NFSU2_TR(0x6b187f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1880:{NFSU2_TR(0x6b1880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b1883:{NFSU2_TR(0x6b1883);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1884:{NFSU2_TR(0x6b1884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1885:{NFSU2_TR(0x6b1885);
__builtin_memmove((R+4),(R+12),4);
}
B6b1887:{NFSU2_TR(0x6b1887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b188cull));
TAIL_STATIC(0x699362u,699);
}
B6b188c:L6b188c:{c.instructions+=3;NFSU2_TR(0x6b188c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b188e:{NFSU2_TR(0x6b188e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1891:{NFSU2_TR(0x6b1891);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b1980;}}
}
B6b1897:L6b1897:{c.instructions+=3;NFSU2_TR(0x6b1897);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b189d:{NFSU2_TR(0x6b189d);
__builtin_memmove((R+4),(R+12),4);
}
B6b189f:{NFSU2_TR(0x6b189f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b18a4ull));
TAIL_STATIC(0x698eb3u,698);
}
B6b18a4:L6b18a4:{c.instructions+=3;NFSU2_TR(0x6b18a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b18a6:{NFSU2_TR(0x6b18a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b18a9:{NFSU2_TR(0x6b18a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b1980;}}
}
B6b18af:L6b18af:{c.instructions+=3;NFSU2_TR(0x6b18af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b18b3:{NFSU2_TR(0x6b18b3);
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
B6b18b5:{NFSU2_TR(0x6b18b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1932;}}
}
B6b18b7:L6b18b7:{c.instructions+=6;NFSU2_TR(0x6b18b7);
__builtin_memmove((R+0),(R+24),4);
}
B6b18b9:{NFSU2_TR(0x6b18b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b18bc:{NFSU2_TR(0x6b18bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b18bf:{NFSU2_TR(0x6b18bf);
__builtin_memmove((R+0),(R+24),4);
}
B6b18c1:{NFSU2_TR(0x6b18c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b18c4:{NFSU2_TR(0x6b18c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b18c7:L6b18c7:{c.instructions+=12;NFSU2_TR(0x6b18c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b18cd:{NFSU2_TR(0x6b18cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b18d0:{NFSU2_TR(0x6b18d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b18d3:{NFSU2_TR(0x6b18d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b18d6:{NFSU2_TR(0x6b18d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b18d9:{NFSU2_TR(0x6b18d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b18dd:{NFSU2_TR(0x6b18dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b18e0:{NFSU2_TR(0x6b18e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b18e3:{NFSU2_TR(0x6b18e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b18e6:{NFSU2_TR(0x6b18e6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff08ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6b18ed:{NFSU2_TR(0x6b18ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b18f0:{NFSU2_TR(0x6b18f0);
if(r1(R+518)){{goto L6b18ff;}}
}
B6b18f2:L6b18f2:{c.instructions+=5;NFSU2_TR(0x6b18f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b18f4:{NFSU2_TR(0x6b18f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b18f7:{NFSU2_TR(0x6b18f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b18fa:{NFSU2_TR(0x6b18fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b18fd:{NFSU2_TR(0x6b18fd);
{goto L6b190a;}
}
B6b18ff:L6b18ff:{c.instructions+=4;NFSU2_TR(0x6b18ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1902:{NFSU2_TR(0x6b1902);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b1905:{NFSU2_TR(0x6b1905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1908:{NFSU2_TR(0x6b1908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b190a:L6b190a:{c.instructions+=13;NFSU2_TR(0x6b190a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b190d:{NFSU2_TR(0x6b190d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1910:{NFSU2_TR(0x6b1910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1913:{NFSU2_TR(0x6b1913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1917:{NFSU2_TR(0x6b1917);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b191a:{NFSU2_TR(0x6b191a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b191d:{NFSU2_TR(0x6b191d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1920:{NFSU2_TR(0x6b1920);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1923:{NFSU2_TR(0x6b1923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1926:{NFSU2_TR(0x6b1926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b192a:{NFSU2_TR(0x6b192a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b192d:{NFSU2_TR(0x6b192d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b1930:{NFSU2_TR(0x6b1930);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b18c7u);}goto L6b18c7;}}
}
B6b1932:L6b1932:{c.instructions+=5;NFSU2_TR(0x6b1932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1934:{NFSU2_TR(0x6b1934);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1936:{NFSU2_TR(0x6b1936);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1937:{NFSU2_TR(0x6b1937);
__builtin_memmove((R+4),(R+28),4);
}
B6b1939:{NFSU2_TR(0x6b1939);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b193cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b193c:L6b193c:{c.instructions+=2;NFSU2_TR(0x6b193c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b193e:{NFSU2_TR(0x6b193e);
if(r1(R+518)){{goto L6b1949;}}
}
B6b1940:L6b1940:{c.instructions+=2;NFSU2_TR(0x6b1940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1947:{NFSU2_TR(0x6b1947);
{goto L6b1980;}
}
B6b1949:L6b1949:{c.instructions+=3;NFSU2_TR(0x6b1949);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b194b:{NFSU2_TR(0x6b194b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b194e:{NFSU2_TR(0x6b194e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b195d;}}
}
B6b1950:L6b1950:{c.instructions+=5;NFSU2_TR(0x6b1950);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b1954:{NFSU2_TR(0x6b1954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6b1957:{NFSU2_TR(0x6b1957);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b1958:{NFSU2_TR(0x6b1958);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b195b:{NFSU2_TR(0x6b195b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1950u);}goto L6b1950;}}
}
B6b195d:L6b195d:{c.instructions+=3;NFSU2_TR(0x6b195d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1963:{NFSU2_TR(0x6b1963);
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
B6b1965:{NFSU2_TR(0x6b1965);
if(r1(R+518)){{goto L6b196e;}}
}
B6b1967:L6b1967:{c.instructions+=2;NFSU2_TR(0x6b1967);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1969:{NFSU2_TR(0x6b1969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b196eull));
TAIL_STATIC(0x6739efu,673);
}
B6b196e:L6b196e:{c.instructions+=4;NFSU2_TR(0x6b196e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1974:{NFSU2_TR(0x6b1974);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1977:{NFSU2_TR(0x6b1977);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b197a:{NFSU2_TR(0x6b197a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b197c:L6b197c:{c.instructions+=1;NFSU2_TR(0x6b197c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1980:L6b1980:{c.instructions+=2;NFSU2_TR(0x6b1980);
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
B6b1982:{NFSU2_TR(0x6b1982);
if(r1(R+518)){{goto L6b198d;}}
}
B6b1984:L6b1984:{c.instructions+=3;NFSU2_TR(0x6b1984);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1986:{NFSU2_TR(0x6b1986);
__builtin_memmove((R+4),(R+12),4);
}
B6b1988:{NFSU2_TR(0x6b1988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b198dull));
TAIL_STATIC(0x6739efu,673);
}
B6b198d:L6b198d:{c.instructions+=6;NFSU2_TR(0x6b198d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1990:{NFSU2_TR(0x6b1990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b1991:{NFSU2_TR(0x6b1991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b1992:{NFSU2_TR(0x6b1992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b1993:{NFSU2_TR(0x6b1993);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b1994:{NFSU2_TR(0x6b1994);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b1995:L6b1995:{c.instructions+=8;NFSU2_TR(0x6b1995);
__builtin_memmove((R+28),(R+28),4);
}
B6b1997:{NFSU2_TR(0x6b1997);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1998:{NFSU2_TR(0x6b1998);
__builtin_memmove((R+20),(R+16),4);
}
B6b199a:{NFSU2_TR(0x6b199a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b199b:{NFSU2_TR(0x6b199b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b199e:{NFSU2_TR(0x6b199e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b19a1:{NFSU2_TR(0x6b19a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b19a3:{NFSU2_TR(0x6b19a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b19d9;}}
}
B6b19a5:L6b19a5:{c.instructions+=3;NFSU2_TR(0x6b19a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6b19a8:{NFSU2_TR(0x6b19a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19a9:{NFSU2_TR(0x6b19a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b19aeull));
TAIL_STATIC(0x6992fau,699);
}
B6b19ae:L6b19ae:{c.instructions+=2;NFSU2_TR(0x6b19ae);
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
B6b19b0:{NFSU2_TR(0x6b19b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b19b9;}}
}
B6b19b2:L6b19b2:{c.instructions+=2;NFSU2_TR(0x6b19b2);
w4(R+0,u32(0x8007000eull));
}
B6b19b7:{NFSU2_TR(0x6b19b7);
{goto L6b19ea;}
}
B6b19b9:L6b19b9:{c.instructions+=8;NFSU2_TR(0x6b19b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b19bc:{NFSU2_TR(0x6b19bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b19bf:{NFSU2_TR(0x6b19bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19c0:{NFSU2_TR(0x6b19c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b19c3:{NFSU2_TR(0x6b19c3);
__builtin_memmove((R+8),(R+4),4);
}
B6b19c5:{NFSU2_TR(0x6b19c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19c6:{NFSU2_TR(0x6b19c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6b19c9:{NFSU2_TR(0x6b19c9);
__builtin_memmove((R+28),(R+0),4);
}
B6b19cb:L6b19cb:{c.instructions+=1;NFSU2_TR(0x6b19cb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b19cd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b19cbu);}goto L6b19cb;}
}
B6b19cd:L6b19cd:{c.instructions+=2;NFSU2_TR(0x6b19cd);
__builtin_memmove((R+4),(R+8),4);
}
B6b19cf:{NFSU2_TR(0x6b19cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6b19d2:L6b19d2:{c.instructions+=1;NFSU2_TR(0x6b19d2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6b19d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b19d2u);}goto L6b19d2;}
}
B6b19d4:L6b19d4:{c.instructions+=3;NFSU2_TR(0x6b19d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b19d5:{NFSU2_TR(0x6b19d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b19d8:{NFSU2_TR(0x6b19d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b19d9:L6b19d9:{c.instructions+=6;NFSU2_TR(0x6b19d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b19dc:{NFSU2_TR(0x6b19dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b19df:{NFSU2_TR(0x6b19df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b19e2:{NFSU2_TR(0x6b19e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b19e5:{NFSU2_TR(0x6b19e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b19e8:{NFSU2_TR(0x6b19e8);
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
B6b19ea:L6b19ea:{c.instructions+=3;NFSU2_TR(0x6b19ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b19eb:{NFSU2_TR(0x6b19eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b19ec:{NFSU2_TR(0x6b19ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b19ef:L6b19ef:{c.instructions+=13;NFSU2_TR(0x6b19ef);
__builtin_memmove((R+28),(R+28),4);
}
B6b19f1:{NFSU2_TR(0x6b19f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19f2:{NFSU2_TR(0x6b19f2);
__builtin_memmove((R+20),(R+16),4);
}
B6b19f4:{NFSU2_TR(0x6b19f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x410ull))));
}
B6b19fa:{NFSU2_TR(0x6b19fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19fb:{NFSU2_TR(0x6b19fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19fc:{NFSU2_TR(0x6b19fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b19fd:{NFSU2_TR(0x6b19fd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b19ff:{NFSU2_TR(0x6b19ff);
__builtin_memmove((R+28),(R+4),4);
}
B6b1a01:{NFSU2_TR(0x6b1a01);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b1a03:{NFSU2_TR(0x6b1a03);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1a06:{NFSU2_TR(0x6b1a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a09:{NFSU2_TR(0x6b1a09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1a3f;}}
}
B6b1a0b:L6b1a0b:{c.instructions+=4;NFSU2_TR(0x6b1a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1a0e:{NFSU2_TR(0x6b1a0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1a11:{NFSU2_TR(0x6b1a11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1a13:{NFSU2_TR(0x6b1a13);
if(r1(R+518)){{goto L6b1a39;}}
}
B6b1a15:L6b1a15:{c.instructions+=3;NFSU2_TR(0x6b1a15);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b1a17:{NFSU2_TR(0x6b1a17);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1a1a:{NFSU2_TR(0x6b1a1a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1a33;}}
}
B6b1a1c:L6b1a1c:{c.instructions+=8;NFSU2_TR(0x6b1a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1a1f:{NFSU2_TR(0x6b1a1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b1a22:{NFSU2_TR(0x6b1a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b1a25:{NFSU2_TR(0x6b1a25);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b1a28:{NFSU2_TR(0x6b1a28);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b1a29:{NFSU2_TR(0x6b1a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a2c:{NFSU2_TR(0x6b1a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b1a2f:{NFSU2_TR(0x6b1a2f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1a1cu);}goto L6b1a1c;}}
}
B6b1a31:L6b1a31:{c.instructions+=1;NFSU2_TR(0x6b1a31);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b1a33:L6b1a33:{c.instructions+=2;NFSU2_TR(0x6b1a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a36:{NFSU2_TR(0x6b1a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a39:L6b1a39:{c.instructions+=3;NFSU2_TR(0x6b1a39);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b1a3a:{NFSU2_TR(0x6b1a3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b1a3d:{NFSU2_TR(0x6b1a3d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1a0bu);}goto L6b1a0b;}}
}
B6b1a3f:L6b1a3f:{c.instructions+=3;NFSU2_TR(0x6b1a3f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b1a41:{NFSU2_TR(0x6b1a41);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1a44:{NFSU2_TR(0x6b1a44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1a63;}}
}
B6b1a46:L6b1a46:{c.instructions+=5;NFSU2_TR(0x6b1a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1a49:{NFSU2_TR(0x6b1a49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b1a4c:{NFSU2_TR(0x6b1a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1a4f:{NFSU2_TR(0x6b1a4f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1a52:{NFSU2_TR(0x6b1a52);
if(r1(R+518)){{goto L6b1a5d;}}
}
B6b1a54:L6b1a54:{c.instructions+=3;NFSU2_TR(0x6b1a54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1a57:{NFSU2_TR(0x6b1a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1a5a:{NFSU2_TR(0x6b1a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a5d:L6b1a5d:{c.instructions+=3;NFSU2_TR(0x6b1a5d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b1a5e:{NFSU2_TR(0x6b1a5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6b1a61:{NFSU2_TR(0x6b1a61);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1a46u);}goto L6b1a46;}}
}
B6b1a63:L6b1a63:{c.instructions+=3;NFSU2_TR(0x6b1a63);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1a66:{NFSU2_TR(0x6b1a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a69:{NFSU2_TR(0x6b1a69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1b17;}}
}
B6b1a6f:L6b1a6f:{c.instructions+=6;NFSU2_TR(0x6b1a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1a72:{NFSU2_TR(0x6b1a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1a75:{NFSU2_TR(0x6b1a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b1a78:{NFSU2_TR(0x6b1a78);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b1a7a:{NFSU2_TR(0x6b1a7a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1a7c:{NFSU2_TR(0x6b1a7c);
if(r1(R+518)){{goto L6b1b06;}}
}
B6b1a82:L6b1a82:{c.instructions+=4;NFSU2_TR(0x6b1a82);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1a85:{NFSU2_TR(0x6b1a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a88:{NFSU2_TR(0x6b1a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1a8b:{NFSU2_TR(0x6b1a8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1ae4;}}
}
B6b1a8d:L6b1a8d:{c.instructions+=8;NFSU2_TR(0x6b1a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1a90:{NFSU2_TR(0x6b1a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1a93:{NFSU2_TR(0x6b1a93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1a96:{NFSU2_TR(0x6b1a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1a99:{NFSU2_TR(0x6b1a99);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1a9c:{NFSU2_TR(0x6b1a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1a9f:{NFSU2_TR(0x6b1a9f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1aa2:{NFSU2_TR(0x6b1aa2);
if(r1(R+518)){{goto L6b1ad9;}}
}
B6b1aa4:L6b1aa4:{c.instructions+=3;NFSU2_TR(0x6b1aa4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b1aa6:{NFSU2_TR(0x6b1aa6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1aa8:{NFSU2_TR(0x6b1aa8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1ab8;}}
}
B6b1aaa:L6b1aaa:{c.instructions+=2;NFSU2_TR(0x6b1aaa);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffbf0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b1ab1:{NFSU2_TR(0x6b1ab1);
if(r1(R+518)){{goto L6b1ab8;}}
}
B6b1ab3:L6b1ab3:{c.instructions+=3;NFSU2_TR(0x6b1ab3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b1ab4:{NFSU2_TR(0x6b1ab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b1ab6:{NFSU2_TR(0x6b1ab6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1aaau);}goto L6b1aaa;}}
}
B6b1ab8:L6b1ab8:{c.instructions+=2;NFSU2_TR(0x6b1ab8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1aba:{NFSU2_TR(0x6b1aba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1ac7;}}
}
B6b1abc:L6b1abc:{c.instructions+=3;NFSU2_TR(0x6b1abc);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffbf0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b1ac3:{NFSU2_TR(0x6b1ac3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b1ac4:{NFSU2_TR(0x6b1ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1ac7:L6b1ac7:{c.instructions+=4;NFSU2_TR(0x6b1ac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b1aca:{NFSU2_TR(0x6b1aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1acd:{NFSU2_TR(0x6b1acd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b1ad0:{NFSU2_TR(0x6b1ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1ad5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1995u);}goto L6b1995;}
}
B6b1ad5:L6b1ad5:{c.instructions+=2;NFSU2_TR(0x6b1ad5);
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
B6b1ad7:{NFSU2_TR(0x6b1ad7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b1b19;}}
}
B6b1ad9:L6b1ad9:{c.instructions+=4;NFSU2_TR(0x6b1ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1adc:{NFSU2_TR(0x6b1adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1adf:{NFSU2_TR(0x6b1adf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b1ae2:{NFSU2_TR(0x6b1ae2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1a8du);}goto L6b1a8d;}}
}
B6b1ae4:L6b1ae4:{c.instructions+=2;NFSU2_TR(0x6b1ae4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1ae5:{NFSU2_TR(0x6b1ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1aeaull));
TAIL_STATIC(0x6992fau,699);
}
B6b1aea:L6b1aea:{c.instructions+=3;NFSU2_TR(0x6b1aea);
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
B6b1aec:{NFSU2_TR(0x6b1aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1aef:{NFSU2_TR(0x6b1aef);
if(r1(R+518)){{goto L6b1b20;}}
}
B6b1af1:L6b1af1:{c.instructions+=4;NFSU2_TR(0x6b1af1);
__builtin_memmove((R+4),(R+24),4);
}
B6b1af3:{NFSU2_TR(0x6b1af3);
__builtin_memmove((R+28),(R+0),4);
}
B6b1af5:{NFSU2_TR(0x6b1af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1af8:{NFSU2_TR(0x6b1af8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b1afe:L6b1afe:{c.instructions+=1;NFSU2_TR(0x6b1afe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b1b00;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1afeu);}goto L6b1afe;}
}
B6b1b00:L6b1b00:{c.instructions+=2;NFSU2_TR(0x6b1b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1b03:{NFSU2_TR(0x6b1b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b06:L6b1b06:{c.instructions+=4;NFSU2_TR(0x6b1b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b09:{NFSU2_TR(0x6b1b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1b0c:{NFSU2_TR(0x6b1b0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b1b0f:{NFSU2_TR(0x6b1b0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1a6fu);}goto L6b1a6f;}}
}
B6b1b15:L6b1b15:{c.instructions+=1;NFSU2_TR(0x6b1b15);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b1b17:L6b1b17:{c.instructions+=1;NFSU2_TR(0x6b1b17);
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
B6b1b19:L6b1b19:{c.instructions+=5;NFSU2_TR(0x6b1b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b1b1a:{NFSU2_TR(0x6b1b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b1b1b:{NFSU2_TR(0x6b1b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b1b1c:{NFSU2_TR(0x6b1b1c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b1b1d:{NFSU2_TR(0x6b1b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b1b20:L6b1b20:{c.instructions+=2;NFSU2_TR(0x6b1b20);
w4(R+0,u32(0x8007000eull));
}
B6b1b25:{NFSU2_TR(0x6b1b25);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1b19u);}goto L6b1b19;}
}
B6b1b27:L6b1b27:{c.instructions+=30;NFSU2_TR(0x6b1b27);
__builtin_memmove((R+28),(R+28),4);
}
B6b1b29:{NFSU2_TR(0x6b1b29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1b2a:{NFSU2_TR(0x6b1b2a);
__builtin_memmove((R+20),(R+16),4);
}
B6b1b2c:{NFSU2_TR(0x6b1b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B6b1b32:{NFSU2_TR(0x6b1b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b36:{NFSU2_TR(0x6b1b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b3a:{NFSU2_TR(0x6b1b3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1b3b:{NFSU2_TR(0x6b1b3b);
__builtin_memmove((R+12),(R+4),4);
}
B6b1b3d:{NFSU2_TR(0x6b1b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1b43:{NFSU2_TR(0x6b1b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1b46:{NFSU2_TR(0x6b1b46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1b47:{NFSU2_TR(0x6b1b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b1b49:{NFSU2_TR(0x6b1b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1b4c:{NFSU2_TR(0x6b1b4c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6b1b52:{NFSU2_TR(0x6b1b52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1b53:{NFSU2_TR(0x6b1b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b1b55:{NFSU2_TR(0x6b1b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b1b58:{NFSU2_TR(0x6b1b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b1b5b:{NFSU2_TR(0x6b1b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b5e:{NFSU2_TR(0x6b1b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b1b60:{NFSU2_TR(0x6b1b60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b1b63:{NFSU2_TR(0x6b1b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1b66:{NFSU2_TR(0x6b1b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b69:{NFSU2_TR(0x6b1b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1b6c:{NFSU2_TR(0x6b1b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b6f:{NFSU2_TR(0x6b1b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b1b72:{NFSU2_TR(0x6b1b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1b75:{NFSU2_TR(0x6b1b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1b7b:{NFSU2_TR(0x6b1b7b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1b7d:{NFSU2_TR(0x6b1b7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1bf1;}}
}
B6b1b7f:L6b1b7f:{c.instructions+=5;NFSU2_TR(0x6b1b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1b82:{NFSU2_TR(0x6b1b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1b85:{NFSU2_TR(0x6b1b85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b1b88:{NFSU2_TR(0x6b1b88);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b1b8c:{NFSU2_TR(0x6b1b8c);
if(r1(R+518)){{goto L6b1bf1;}}
}
B6b1b8e:L6b1b8e:{c.instructions+=5;NFSU2_TR(0x6b1b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1b94:{NFSU2_TR(0x6b1b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b1b96:{NFSU2_TR(0x6b1b96);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b1b9c:{NFSU2_TR(0x6b1b9c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1ba2:{NFSU2_TR(0x6b1ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1bf1;}}
}
B6b1ba4:L6b1ba4:{c.instructions+=2;NFSU2_TR(0x6b1ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1ba7:{NFSU2_TR(0x6b1ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1baa:L6b1baa:{c.instructions+=4;NFSU2_TR(0x6b1baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b1bac:{NFSU2_TR(0x6b1bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1baf:{NFSU2_TR(0x6b1baf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b1bb2:{NFSU2_TR(0x6b1bb2);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1bb5:L6b1bb5:{c.instructions+=4;NFSU2_TR(0x6b1bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1bb9:{NFSU2_TR(0x6b1bb9);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6b1bbc:{NFSU2_TR(0x6b1bbc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1bbe:{NFSU2_TR(0x6b1bbe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1d25;}}
}
B6b1bc4:L6b1bc4:{c.instructions+=5;NFSU2_TR(0x6b1bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1bc7:{NFSU2_TR(0x6b1bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1bca:{NFSU2_TR(0x6b1bca);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6b1bcc:{NFSU2_TR(0x6b1bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1bcf:{NFSU2_TR(0x6b1bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1bd2:L6b1bd2:{c.instructions+=7;NFSU2_TR(0x6b1bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1bd5:{NFSU2_TR(0x6b1bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1bd8:{NFSU2_TR(0x6b1bd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1bdb:{NFSU2_TR(0x6b1bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1bde:{NFSU2_TR(0x6b1bde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b1be0:{NFSU2_TR(0x6b1be0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1be3:{NFSU2_TR(0x6b1be3);
if(r1(R+518)){{goto L6b1cae;}}
}
B6b1be9:L6b1be9:{c.instructions+=2;NFSU2_TR(0x6b1be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1bec:{NFSU2_TR(0x6b1bec);
{goto L6b1cb9;}
}
B6b1bf1:L6b1bf1:{c.instructions+=4;NFSU2_TR(0x6b1bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1bf4:{NFSU2_TR(0x6b1bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1bf7:{NFSU2_TR(0x6b1bf7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1bf9:{NFSU2_TR(0x6b1bf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c22;}}
}
B6b1bfb:L6b1bfb:{c.instructions+=3;NFSU2_TR(0x6b1bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1bfe:{NFSU2_TR(0x6b1bfe);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b1c02:{NFSU2_TR(0x6b1c02);
if(r1(R+518)){{goto L6b1c22;}}
}
B6b1c04:L6b1c04:{c.instructions+=5;NFSU2_TR(0x6b1c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1c0a:{NFSU2_TR(0x6b1c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b1c0c:{NFSU2_TR(0x6b1c0c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6b1c12:{NFSU2_TR(0x6b1c12);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1c18:{NFSU2_TR(0x6b1c18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c22;}}
}
B6b1c1a:L6b1c1a:{c.instructions+=3;NFSU2_TR(0x6b1c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1c1d:{NFSU2_TR(0x6b1c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1c20:{NFSU2_TR(0x6b1c20);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1baau);}goto L6b1baa;}
}
B6b1c22:L6b1c22:{c.instructions+=3;NFSU2_TR(0x6b1c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1c25:{NFSU2_TR(0x6b1c25);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1c28:{NFSU2_TR(0x6b1c28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c9c;}}
}
B6b1c2a:L6b1c2a:{c.instructions+=2;NFSU2_TR(0x6b1c2a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1c2c:{NFSU2_TR(0x6b1c2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c9c;}}
}
B6b1c2e:L6b1c2e:{c.instructions+=5;NFSU2_TR(0x6b1c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1c34:{NFSU2_TR(0x6b1c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b1c36:{NFSU2_TR(0x6b1c36);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b1c3c:{NFSU2_TR(0x6b1c3c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1c42:{NFSU2_TR(0x6b1c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c9c;}}
}
B6b1c44:L6b1c44:{c.instructions+=3;NFSU2_TR(0x6b1c44);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1c46:{NFSU2_TR(0x6b1c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1c4d:{NFSU2_TR(0x6b1c4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1c6c;}}
}
B6b1c4f:L6b1c4f:{c.instructions+=4;NFSU2_TR(0x6b1c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1c52:{NFSU2_TR(0x6b1c52);
__builtin_memmove((R+4),(R+0),4);
}
B6b1c54:{NFSU2_TR(0x6b1c54);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6b1c56:{NFSU2_TR(0x6b1c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1c59:L6b1c59:{c.instructions+=3;NFSU2_TR(0x6b1c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b1c5b:{NFSU2_TR(0x6b1c5b);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b1c5e:{NFSU2_TR(0x6b1c5e);
if(r1(R+518)){{goto L6b1c64;}}
}
B6b1c60:L6b1c60:{c.instructions+=1;NFSU2_TR(0x6b1c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1c64:L6b1c64:{c.instructions+=3;NFSU2_TR(0x6b1c64);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b1c67:{NFSU2_TR(0x6b1c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1c6a:{NFSU2_TR(0x6b1c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c59u);}goto L6b1c59;}}
}
B6b1c6c:L6b1c6c:{c.instructions+=5;NFSU2_TR(0x6b1c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1c6f:{NFSU2_TR(0x6b1c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1c72:{NFSU2_TR(0x6b1c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1c75:{NFSU2_TR(0x6b1c75);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1c78:{NFSU2_TR(0x6b1c78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c9c;}}
}
B6b1c7a:L6b1c7a:{c.instructions+=3;NFSU2_TR(0x6b1c7a);
w4(R+8,u32(0x80000ull));
}
B6b1c7f:{NFSU2_TR(0x6b1c7f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1c81:{NFSU2_TR(0x6b1c81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c8b;}}
}
B6b1c83:L6b1c83:{c.instructions+=2;NFSU2_TR(0x6b1c83);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6b1c89:{NFSU2_TR(0x6b1c89);
{goto L6b1c91;}
}
B6b1c8b:L6b1c8b:{c.instructions+=2;NFSU2_TR(0x6b1c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1c8d:{NFSU2_TR(0x6b1c8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1c9c;}}
}
B6b1c8f:L6b1c8f:{c.instructions+=1;NFSU2_TR(0x6b1c8f);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6b1c91:L6b1c91:{c.instructions+=3;NFSU2_TR(0x6b1c91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1c95:{NFSU2_TR(0x6b1c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1c98:{NFSU2_TR(0x6b1c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1ca4;}}
}
B6b1c9a:L6b1c9a:{c.instructions+=1;NFSU2_TR(0x6b1c9a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6b1c9c:L6b1c9c:{c.instructions+=7;NFSU2_TR(0x6b1c9c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b1c9e:{NFSU2_TR(0x6b1c9e);
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
B6b1c9f:{NFSU2_TR(0x6b1c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b1ca0:{NFSU2_TR(0x6b1ca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b1ca1:{NFSU2_TR(0x6b1ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b1ca2:{NFSU2_TR(0x6b1ca2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b1ca3:{NFSU2_TR(0x6b1ca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b1ca4:L6b1ca4:{c.instructions+=3;NFSU2_TR(0x6b1ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1ca7:{NFSU2_TR(0x6b1ca7);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6b1ca9:{NFSU2_TR(0x6b1ca9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1bb5u);}goto L6b1bb5;}
}
B6b1cae:L6b1cae:{c.instructions+=4;NFSU2_TR(0x6b1cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1cb1:{NFSU2_TR(0x6b1cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b1cb3:{NFSU2_TR(0x6b1cb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b1cb6:{NFSU2_TR(0x6b1cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1cb9:L6b1cb9:{c.instructions+=3;NFSU2_TR(0x6b1cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1cbf:{NFSU2_TR(0x6b1cbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1cc2:{NFSU2_TR(0x6b1cc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1cc4:L6b1cc4:{c.instructions+=2;NFSU2_TR(0x6b1cc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1cc7:{NFSU2_TR(0x6b1cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1cc9:L6b1cc9:{c.instructions+=2;NFSU2_TR(0x6b1cc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x1ffe00ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1cd0:{NFSU2_TR(0x6b1cd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1cd2:L6b1cd2:{c.instructions+=2;NFSU2_TR(0x6b1cd2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1cd6:{NFSU2_TR(0x6b1cd6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1ce7;}}
}
B6b1cd8:L6b1cd8:{c.instructions+=3;NFSU2_TR(0x6b1cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1cdb:{NFSU2_TR(0x6b1cdb);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b1cdf:{NFSU2_TR(0x6b1cdf);
if(r1(R+518)){{goto L6b1ce7;}}
}
B6b1ce1:L6b1ce1:{c.instructions+=3;NFSU2_TR(0x6b1ce1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b1ce2:{NFSU2_TR(0x6b1ce2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b1ce5:{NFSU2_TR(0x6b1ce5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1cd8u);}goto L6b1cd8;}}
}
B6b1ce7:L6b1ce7:{c.instructions+=2;NFSU2_TR(0x6b1ce7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1cea:{NFSU2_TR(0x6b1cea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1cf9;}}
}
B6b1cec:L6b1cec:{c.instructions+=4;NFSU2_TR(0x6b1cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1cef:{NFSU2_TR(0x6b1cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1cf2:{NFSU2_TR(0x6b1cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1cf5:{NFSU2_TR(0x6b1cf5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b1cf9:L6b1cf9:{c.instructions+=2;NFSU2_TR(0x6b1cf9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1cfd:{NFSU2_TR(0x6b1cfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1d15;}}
}
B6b1cff:L6b1cff:{c.instructions+=9;NFSU2_TR(0x6b1cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1d02:{NFSU2_TR(0x6b1d02);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1d05:{NFSU2_TR(0x6b1d05);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6b1d07:{NFSU2_TR(0x6b1d07);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6b1d0a:{NFSU2_TR(0x6b1d0a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1d0c:{NFSU2_TR(0x6b1d0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1d0e:{NFSU2_TR(0x6b1d0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6b1d10:{NFSU2_TR(0x6b1d10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1d13:{NFSU2_TR(0x6b1d13);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1d15:L6b1d15:{c.instructions+=4;NFSU2_TR(0x6b1d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1d18:{NFSU2_TR(0x6b1d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1d1c:{NFSU2_TR(0x6b1d1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6b1d1f:{NFSU2_TR(0x6b1d1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1bd2u);}goto L6b1bd2;}}
}
B6b1d25:L6b1d25:{c.instructions+=9;NFSU2_TR(0x6b1d25);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6b1d28:{NFSU2_TR(0x6b1d28);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6b1d2a:{NFSU2_TR(0x6b1d2a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6b1d2c:{NFSU2_TR(0x6b1d2c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6b1d2e:{NFSU2_TR(0x6b1d2e);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1d34:{NFSU2_TR(0x6b1d34);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1d36:{NFSU2_TR(0x6b1d36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1d38:{NFSU2_TR(0x6b1d38);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1d3b:{NFSU2_TR(0x6b1d3b);
if(r1(R+514)){{goto L6b1d47;}}
}
B6b1d3d:L6b1d3d:{c.instructions+=3;NFSU2_TR(0x6b1d3d);
w4(R+0,u32(0x400ull));
}
B6b1d42:{NFSU2_TR(0x6b1d42);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1d45:{NFSU2_TR(0x6b1d45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1db3;}}
}
B6b1d47:L6b1d47:{c.instructions+=6;NFSU2_TR(0x6b1d47);
{u32 ea_=u32(u32(8011872u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1d4d:{NFSU2_TR(0x6b1d4d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6b1d4f:{NFSU2_TR(0x6b1d4f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1d51:{NFSU2_TR(0x6b1d51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1d53:{NFSU2_TR(0x6b1d53);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1d56:{NFSU2_TR(0x6b1d56);
if(r1(R+514)){{goto L6b1d62;}}
}
B6b1d58:L6b1d58:{c.instructions+=3;NFSU2_TR(0x6b1d58);
w4(R+0,u32(0x800ull));
}
B6b1d5d:{NFSU2_TR(0x6b1d5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1d60:{NFSU2_TR(0x6b1d60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1db3;}}
}
B6b1d62:L6b1d62:{c.instructions+=6;NFSU2_TR(0x6b1d62);
{u32 ea_=u32(u32(8110648u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1d68:{NFSU2_TR(0x6b1d68);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6b1d6a:{NFSU2_TR(0x6b1d6a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1d6c:{NFSU2_TR(0x6b1d6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1d6e:{NFSU2_TR(0x6b1d6e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1d71:{NFSU2_TR(0x6b1d71);
if(r1(R+514)){{goto L6b1d7d;}}
}
B6b1d73:L6b1d73:{c.instructions+=3;NFSU2_TR(0x6b1d73);
w4(R+0,u32(0x1000ull));
}
B6b1d78:{NFSU2_TR(0x6b1d78);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1d7b:{NFSU2_TR(0x6b1d7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1db3;}}
}
B6b1d7d:L6b1d7d:{c.instructions+=6;NFSU2_TR(0x6b1d7d);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1d83:{NFSU2_TR(0x6b1d83);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6b1d85:{NFSU2_TR(0x6b1d85);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1d87:{NFSU2_TR(0x6b1d87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1d89:{NFSU2_TR(0x6b1d89);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1d8c:{NFSU2_TR(0x6b1d8c);
if(r1(R+514)){{goto L6b1d98;}}
}
B6b1d8e:L6b1d8e:{c.instructions+=3;NFSU2_TR(0x6b1d8e);
w4(R+0,u32(0x2000ull));
}
B6b1d93:{NFSU2_TR(0x6b1d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1d96:{NFSU2_TR(0x6b1d96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1db3;}}
}
B6b1d98:L6b1d98:{c.instructions+=6;NFSU2_TR(0x6b1d98);
{u32 ea_=u32(u32(7909408u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1d9e:{NFSU2_TR(0x6b1d9e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6b1da0:{NFSU2_TR(0x6b1da0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1da2:{NFSU2_TR(0x6b1da2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1da4:{NFSU2_TR(0x6b1da4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1da7:{NFSU2_TR(0x6b1da7);
if(r1(R+514)){{goto L6b1db7;}}
}
B6b1da9:L6b1da9:{c.instructions+=3;NFSU2_TR(0x6b1da9);
w4(R+0,u32(0x4000ull));
}
B6b1dae:{NFSU2_TR(0x6b1dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1db1:{NFSU2_TR(0x6b1db1);
if(r1(R+518)){{goto L6b1db7;}}
}
B6b1db3:L6b1db3:{c.instructions+=2;NFSU2_TR(0x6b1db3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6b1db5:{NFSU2_TR(0x6b1db5);
{goto L6b1ddc;}
}
B6b1db7:L6b1db7:{c.instructions+=7;NFSU2_TR(0x6b1db7);
{u32 ea_=u32(u32(8110640u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b1dbd:{NFSU2_TR(0x6b1dbd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6b1dbf:{NFSU2_TR(0x6b1dbf);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b1dc1:{NFSU2_TR(0x6b1dc1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1dc3:{NFSU2_TR(0x6b1dc3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6b1dc5:{NFSU2_TR(0x6b1dc5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1dc8:{NFSU2_TR(0x6b1dc8);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1dce:L6b1dce:{c.instructions+=3;NFSU2_TR(0x6b1dce);
w4(R+0,u32(0x8000ull));
}
B6b1dd3:{NFSU2_TR(0x6b1dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1dd6:{NFSU2_TR(0x6b1dd6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1ddc:L6b1ddc:{c.instructions+=6;NFSU2_TR(0x6b1ddc);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6b1ddf:{NFSU2_TR(0x6b1ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1de2:{NFSU2_TR(0x6b1de2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6b1de8:{NFSU2_TR(0x6b1de8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1dea:{NFSU2_TR(0x6b1dea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1ded:{NFSU2_TR(0x6b1ded);
if(r1(R+514)){{goto L6b1df3;}}
}
B6b1def:L6b1def:{c.instructions+=1;NFSU2_TR(0x6b1def);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6b1df3:L6b1df3:{c.instructions+=10;NFSU2_TR(0x6b1df3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b1df5:{NFSU2_TR(0x6b1df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b1df8:{NFSU2_TR(0x6b1df8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1df9:{NFSU2_TR(0x6b1df9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1dfa:{NFSU2_TR(0x6b1dfa);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1dfb:{NFSU2_TR(0x6b1dfb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1dfc:{NFSU2_TR(0x6b1dfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b1dfe:{NFSU2_TR(0x6b1dfe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1e01:{NFSU2_TR(0x6b1e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e04:{NFSU2_TR(0x6b1e04);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1f0f;}}
}
B6b1e0a:L6b1e0a:{c.instructions+=3;NFSU2_TR(0x6b1e0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b1e10:{NFSU2_TR(0x6b1e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e13:{NFSU2_TR(0x6b1e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e16:L6b1e16:{c.instructions+=9;NFSU2_TR(0x6b1e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1e19:{NFSU2_TR(0x6b1e19);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b1e1d:{NFSU2_TR(0x6b1e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1e20:{NFSU2_TR(0x6b1e20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b1e23:{NFSU2_TR(0x6b1e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b1e25:{NFSU2_TR(0x6b1e25);
__builtin_memmove((R+8),(R+0),4);
}
B6b1e27:{NFSU2_TR(0x6b1e27);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf0000000ull))));
}
B6b1e2d:{NFSU2_TR(0x6b1e2d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b1e33:{NFSU2_TR(0x6b1e33);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1e39:L6b1e39:{c.instructions+=3;NFSU2_TR(0x6b1e39);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B6b1e3e:{NFSU2_TR(0x6b1e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1e43:{NFSU2_TR(0x6b1e43);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1e49:L6b1e49:{c.instructions+=11;NFSU2_TR(0x6b1e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1e4c:{NFSU2_TR(0x6b1e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e50:{NFSU2_TR(0x6b1e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e54:{NFSU2_TR(0x6b1e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1e57:{NFSU2_TR(0x6b1e57);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b1e5a:{NFSU2_TR(0x6b1e5a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1e5c:{NFSU2_TR(0x6b1e5c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1e5d:{NFSU2_TR(0x6b1e5d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1e5e:{NFSU2_TR(0x6b1e5e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1e5f:{NFSU2_TR(0x6b1e5f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b1e60:{NFSU2_TR(0x6b1e60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1eef;}}
}
B6b1e66:L6b1e66:{c.instructions+=3;NFSU2_TR(0x6b1e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e6a:{NFSU2_TR(0x6b1e6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1e6c:{NFSU2_TR(0x6b1e6c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b1ee3;}}
}
B6b1e6e:L6b1e6e:{c.instructions+=8;NFSU2_TR(0x6b1e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1e71:{NFSU2_TR(0x6b1e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1e74:{NFSU2_TR(0x6b1e74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1e77:{NFSU2_TR(0x6b1e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1e7a:{NFSU2_TR(0x6b1e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e7d:{NFSU2_TR(0x6b1e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1e80:{NFSU2_TR(0x6b1e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1e83:{NFSU2_TR(0x6b1e83);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff70ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6b1e8a:L6b1e8a:{c.instructions+=4;NFSU2_TR(0x6b1e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1e8d:{NFSU2_TR(0x6b1e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1e90:{NFSU2_TR(0x6b1e90);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1e92:{NFSU2_TR(0x6b1e92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b1ed1;}}
}
B6b1e94:L6b1e94:{c.instructions+=12;NFSU2_TR(0x6b1e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1e97:{NFSU2_TR(0x6b1e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1e9a:{NFSU2_TR(0x6b1e9a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b1e9e:{NFSU2_TR(0x6b1e9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6b1ea0:{NFSU2_TR(0x6b1ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1ea6:{NFSU2_TR(0x6b1ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1ea9:{NFSU2_TR(0x6b1ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6b1eab:{NFSU2_TR(0x6b1eab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1eae:{NFSU2_TR(0x6b1eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1eb1:{NFSU2_TR(0x6b1eb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b1eb4:{NFSU2_TR(0x6b1eb4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b1eb8:{NFSU2_TR(0x6b1eb8);
if(r1(R+518)){{goto L6b1ece;}}
}
B6b1eba:L6b1eba:{c.instructions+=5;NFSU2_TR(0x6b1eba);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6b1ebd:{NFSU2_TR(0x6b1ebd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6b1ec3:{NFSU2_TR(0x6b1ec3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b1ec5:{NFSU2_TR(0x6b1ec5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b1ec8:{NFSU2_TR(0x6b1ec8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1ece:L6b1ece:{c.instructions+=1;NFSU2_TR(0x6b1ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1ed1:L6b1ed1:{c.instructions+=6;NFSU2_TR(0x6b1ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1ed4:{NFSU2_TR(0x6b1ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1ed7:{NFSU2_TR(0x6b1ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1edb:{NFSU2_TR(0x6b1edb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b1ede:{NFSU2_TR(0x6b1ede);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6b1ee1:{NFSU2_TR(0x6b1ee1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1e8au);}goto L6b1e8a;}}
}
B6b1ee3:L6b1ee3:{c.instructions+=3;NFSU2_TR(0x6b1ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1ee6:{NFSU2_TR(0x6b1ee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6b1ee9:{NFSU2_TR(0x6b1ee9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1e66u);}goto L6b1e66;}}
}
B6b1eef:L6b1eef:{c.instructions+=2;NFSU2_TR(0x6b1eef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1ef2:{NFSU2_TR(0x6b1ef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1c9cu);}goto L6b1c9c;}}
}
B6b1ef8:L6b1ef8:{c.instructions+=6;NFSU2_TR(0x6b1ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1efb:{NFSU2_TR(0x6b1efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1efe:{NFSU2_TR(0x6b1efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f02:{NFSU2_TR(0x6b1f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f06:{NFSU2_TR(0x6b1f06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b1f09:{NFSU2_TR(0x6b1f09);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1e16u);}goto L6b1e16;}}
}
B6b1f0f:L6b1f0f:{c.instructions+=3;NFSU2_TR(0x6b1f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f13:{NFSU2_TR(0x6b1f13);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1f17:{NFSU2_TR(0x6b1f17);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b20c1u,6b2);}
}
B6b1f1d:L6b1f1d:{c.instructions+=14;NFSU2_TR(0x6b1f1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b1f23:{NFSU2_TR(0x6b1f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f26:{NFSU2_TR(0x6b1f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1f29:{NFSU2_TR(0x6b1f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1f2c:{NFSU2_TR(0x6b1f2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b1f2f:{NFSU2_TR(0x6b1f2f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b1f33:{NFSU2_TR(0x6b1f33);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6b1f37:{NFSU2_TR(0x6b1f37);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b1f3a:{NFSU2_TR(0x6b1f3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b1f3d:{NFSU2_TR(0x6b1f3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b1f40:{NFSU2_TR(0x6b1f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f43:{NFSU2_TR(0x6b1f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f46:{NFSU2_TR(0x6b1f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f49:{NFSU2_TR(0x6b1f49);
if(r1(R+518)){{goto L6b1fdc;}}
}
B6b1f4f:L6b1f4f:{c.instructions+=2;NFSU2_TR(0x6b1f4f);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1f51:{NFSU2_TR(0x6b1f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1f56ull));
TAIL_STATIC(0x699317u,699);
}
B6b1f56:L6b1f56:{c.instructions+=2;NFSU2_TR(0x6b1f56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1f58:{NFSU2_TR(0x6b1f58);
if(r1(R+518)){{goto L6b1f66;}}
}
B6b1f5a:L6b1f5a:{c.instructions+=2;NFSU2_TR(0x6b1f5a);
__builtin_memmove((R+4),(R+0),4);
}
B6b1f5c:{NFSU2_TR(0x6b1f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1f61ull));
TAIL_STATIC(0x698e7du,698);
}
B6b1f61:L6b1f61:{c.instructions+=2;NFSU2_TR(0x6b1f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f64:{NFSU2_TR(0x6b1f64);
{goto L6b1f6a;}
}
B6b1f66:L6b1f66:{c.instructions+=1;NFSU2_TR(0x6b1f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1f6a:L6b1f6a:{c.instructions+=3;NFSU2_TR(0x6b1f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1f6d:{NFSU2_TR(0x6b1f6d);
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
B6b1f6f:{NFSU2_TR(0x6b1f6f);
if(r1(R+518)){TAIL_STATIC(0x6b20d1u,6b2);}
}
B6b1f75:L6b1f75:{c.instructions+=5;NFSU2_TR(0x6b1f75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1f77:{NFSU2_TR(0x6b1f77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1f78:{NFSU2_TR(0x6b1f78);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b1f7b:{NFSU2_TR(0x6b1f7b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6b1f7d:{NFSU2_TR(0x6b1f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1f82ull));
TAIL_STATIC(0x699362u,699);
}
B6b1f82:L6b1f82:{c.instructions+=4;NFSU2_TR(0x6b1f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1f85:{NFSU2_TR(0x6b1f85);
__builtin_memmove((R+24),(R+0),4);
}
B6b1f87:{NFSU2_TR(0x6b1f87);
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
B6b1f89:{NFSU2_TR(0x6b1f89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b20dbu,6b2);}
}
B6b1f8f:L6b1f8f:{c.instructions+=2;NFSU2_TR(0x6b1f8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1f90:{NFSU2_TR(0x6b1f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1f95ull));
TAIL_STATIC(0x698eb3u,698);
}
B6b1f95:L6b1f95:{c.instructions+=4;NFSU2_TR(0x6b1f95);
__builtin_memmove((R+24),(R+0),4);
}
B6b1f97:{NFSU2_TR(0x6b1f97);
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
B6b1f99:{NFSU2_TR(0x6b1f99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b1f9b:{NFSU2_TR(0x6b1f9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b20dfu,6b2);}
}
B6b1fa1:L6b1fa1:{c.instructions+=8;NFSU2_TR(0x6b1fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1fa4:{NFSU2_TR(0x6b1fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1fa7:{NFSU2_TR(0x6b1fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1faa:{NFSU2_TR(0x6b1faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b1fad:{NFSU2_TR(0x6b1fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1fb0:{NFSU2_TR(0x6b1fb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b1fb3:{NFSU2_TR(0x6b1fb3);
__builtin_memmove((R+8),(R+4),4);
}
B6b1fb5:{NFSU2_TR(0x6b1fb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6b1fb8:L6b1fb8:{c.instructions+=1;NFSU2_TR(0x6b1fb8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b1fba;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1fb8u);}goto L6b1fb8;}
}
B6b1fba:L6b1fba:{c.instructions+=2;NFSU2_TR(0x6b1fba);
__builtin_memmove((R+4),(R+8),4);
}
B6b1fbc:{NFSU2_TR(0x6b1fbc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b1fbf:L6b1fbf:{c.instructions+=1;NFSU2_TR(0x6b1fbf);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6b1fc1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b1fbfu);}goto L6b1fbf;}
}
B6b1fc1:L6b1fc1:{c.instructions+=2;NFSU2_TR(0x6b1fc1);
__builtin_memmove((R+4),(R+0),4);
}
B6b1fc3:{NFSU2_TR(0x6b1fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b1fc8ull));
TAIL_STATIC(0x6739efu,673);
}
B6b1fc8:L6b1fc8:{c.instructions+=7;NFSU2_TR(0x6b1fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1fcb:{NFSU2_TR(0x6b1fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1fce:{NFSU2_TR(0x6b1fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1fd1:{NFSU2_TR(0x6b1fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b1fd4:{NFSU2_TR(0x6b1fd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b1fd7:{NFSU2_TR(0x6b1fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1fda:{NFSU2_TR(0x6b1fda);
__builtin_memmove((R+28),(R+0),4);
}
B6b1fdc:L6b1fdc:{c.instructions+=3;NFSU2_TR(0x6b1fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b1fe0:{NFSU2_TR(0x6b1fe0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b1fe2:{NFSU2_TR(0x6b1fe2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b20aeu,6b2);}
}
B6b1fe8:L6b1fe8:{c.instructions+=6;NFSU2_TR(0x6b1fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b1feb:{NFSU2_TR(0x6b1feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b1fee:{NFSU2_TR(0x6b1fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b1ff1:{NFSU2_TR(0x6b1ff1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b1ff4:{NFSU2_TR(0x6b1ff4);
__builtin_memmove((R+0),(R+8),4);
}
B6b1ff6:{NFSU2_TR(0x6b1ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6b2009u,6b2);}
}
B6b1ff8:L6b1ff8:{c.instructions+=3;NFSU2_TR(0x6b1ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b1ffb:{NFSU2_TR(0x6b1ffb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b1ffe:{NFSU2_TR(0x6b1ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b2009u,6b2);}
TAIL_STATIC(0x6b2000u,6b2);
}
XIT:NFSU2_TR_EXIT(0x6b1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
