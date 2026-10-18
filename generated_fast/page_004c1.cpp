#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_453(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 page_4c1(Cpu& c){return body_4c1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c1000:goto L4c1000;
case 0x4c1005:c.instructions+=4;goto B4c1005;
case 0x4c1008:c.instructions+=3;goto B4c1008;
case 0x4c100a:c.instructions+=2;goto B4c100a;
case 0x4c100c:c.instructions+=1;goto B4c100c;
case 0x4c100e:goto L4c100e;
case 0x4c1010:goto L4c1010;
case 0x4c1017:c.instructions+=3;goto B4c1017;
case 0x4c1019:c.instructions+=2;goto B4c1019;
case 0x4c101a:c.instructions+=1;goto B4c101a;
case 0x4c101f:goto L4c101f;
case 0x4c1024:c.instructions+=3;goto B4c1024;
case 0x4c1025:c.instructions+=2;goto B4c1025;
case 0x4c1027:c.instructions+=1;goto B4c1027;
case 0x4c1029:goto L4c1029;
case 0x4c102f:c.instructions+=2;goto B4c102f;
case 0x4c1032:c.instructions+=1;goto B4c1032;
case 0x4c1034:goto L4c1034;
case 0x4c1039:goto L4c1039;
case 0x4c103e:c.instructions+=2;goto B4c103e;
case 0x4c1040:c.instructions+=1;goto B4c1040;
case 0x4c1042:goto L4c1042;
case 0x4c1045:c.instructions+=2;goto B4c1045;
case 0x4c1047:c.instructions+=1;goto B4c1047;
case 0x4c1049:goto L4c1049;
case 0x4c104e:c.instructions+=2;goto B4c104e;
case 0x4c1050:c.instructions+=1;goto B4c1050;
case 0x4c1052:goto L4c1052;
case 0x4c1059:c.instructions+=2;goto B4c1059;
case 0x4c105f:c.instructions+=1;goto B4c105f;
case 0x4c1064:goto L4c1064;
case 0x4c1066:goto L4c1066;
case 0x4c106d:goto L4c106d;
case 0x4c1071:c.instructions+=8;goto B4c1071;
case 0x4c1072:c.instructions+=7;goto B4c1072;
case 0x4c1074:c.instructions+=6;goto B4c1074;
case 0x4c1075:c.instructions+=5;goto B4c1075;
case 0x4c1076:c.instructions+=4;goto B4c1076;
case 0x4c1077:c.instructions+=3;goto B4c1077;
case 0x4c107e:c.instructions+=2;goto B4c107e;
case 0x4c1081:c.instructions+=1;goto B4c1081;
case 0x4c1090:goto L4c1090;
case 0x4c1091:c.instructions+=2;goto B4c1091;
case 0x4c1093:c.instructions+=1;goto B4c1093;
case 0x4c1098:goto L4c1098;
case 0x4c109d:c.instructions+=1;goto B4c109d;
case 0x4c109f:goto L4c109f;
case 0x4c10a0:c.instructions+=1;goto B4c10a0;
case 0x4c10a5:goto L4c10a5;
case 0x4c10a8:goto L4c10a8;
case 0x4c10aa:c.instructions+=2;goto B4c10aa;
case 0x4c10ab:c.instructions+=1;goto B4c10ab;
case 0x4c10b0:goto L4c10b0;
case 0x4c10b1:c.instructions+=6;goto B4c10b1;
case 0x4c10b2:c.instructions+=5;goto B4c10b2;
case 0x4c10b4:c.instructions+=4;goto B4c10b4;
case 0x4c10ba:c.instructions+=3;goto B4c10ba;
case 0x4c10bc:c.instructions+=2;goto B4c10bc;
case 0x4c10be:c.instructions+=1;goto B4c10be;
case 0x4c10c0:goto L4c10c0;
case 0x4c10c6:c.instructions+=2;goto B4c10c6;
case 0x4c10cb:c.instructions+=1;goto B4c10cb;
case 0x4c10d0:goto L4c10d0;
case 0x4c10d2:c.instructions+=1;goto B4c10d2;
case 0x4c10d4:goto L4c10d4;
case 0x4c10d6:c.instructions+=3;goto B4c10d6;
case 0x4c10d7:c.instructions+=2;goto B4c10d7;
case 0x4c10d8:c.instructions+=1;goto B4c10d8;
case 0x4c10dd:goto L4c10dd;
case 0x4c10e3:goto L4c10e3;
case 0x4c10e9:c.instructions+=2;goto B4c10e9;
case 0x4c10eb:c.instructions+=1;goto B4c10eb;
case 0x4c10f1:goto L4c10f1;
case 0x4c10f7:c.instructions+=1;goto B4c10f7;
case 0x4c10f9:goto L4c10f9;
case 0x4c10fc:c.instructions+=3;goto B4c10fc;
case 0x4c10fd:c.instructions+=2;goto B4c10fd;
case 0x4c1102:c.instructions+=1;goto B4c1102;
case 0x4c1107:goto L4c1107;
case 0x4c110e:c.instructions+=4;goto B4c110e;
case 0x4c1115:c.instructions+=3;goto B4c1115;
case 0x4c1116:c.instructions+=2;goto B4c1116;
case 0x4c1117:c.instructions+=1;goto B4c1117;
case 0x4c1118:goto L4c1118;
case 0x4c111e:c.instructions+=6;goto B4c111e;
case 0x4c1124:c.instructions+=5;goto B4c1124;
case 0x4c112a:c.instructions+=4;goto B4c112a;
case 0x4c1130:c.instructions+=3;goto B4c1130;
case 0x4c1132:c.instructions+=2;goto B4c1132;
case 0x4c1135:c.instructions+=1;goto B4c1135;
case 0x4c113b:goto L4c113b;
case 0x4c1140:c.instructions+=1;goto B4c1140;
case 0x4c1145:goto L4c1145;
case 0x4c1147:c.instructions+=1;goto B4c1147;
case 0x4c114d:goto L4c114d;
case 0x4c1153:c.instructions+=5;goto B4c1153;
case 0x4c1159:c.instructions+=4;goto B4c1159;
case 0x4c115f:c.instructions+=3;goto B4c115f;
case 0x4c1165:c.instructions+=2;goto B4c1165;
case 0x4c1166:c.instructions+=1;goto B4c1166;
case 0x4c116b:goto L4c116b;
case 0x4c1171:c.instructions+=3;goto B4c1171;
case 0x4c1174:c.instructions+=2;goto B4c1174;
case 0x4c117a:c.instructions+=1;goto B4c117a;
case 0x4c117c:goto L4c117c;
case 0x4c117e:c.instructions+=1;goto B4c117e;
case 0x4c1183:goto L4c1183;
case 0x4c1185:goto L4c1185;
case 0x4c1187:c.instructions+=4;goto B4c1187;
case 0x4c118c:c.instructions+=3;goto B4c118c;
case 0x4c1191:c.instructions+=2;goto B4c1191;
case 0x4c1196:c.instructions+=1;goto B4c1196;
case 0x4c119b:goto L4c119b;
case 0x4c11a1:c.instructions+=3;goto B4c11a1;
case 0x4c11a4:c.instructions+=2;goto B4c11a4;
case 0x4c11a6:c.instructions+=1;goto B4c11a6;
case 0x4c11ab:goto L4c11ab;
case 0x4c11ae:c.instructions+=3;goto B4c11ae;
case 0x4c11b4:c.instructions+=2;goto B4c11b4;
case 0x4c11ba:c.instructions+=1;goto B4c11ba;
case 0x4c11bc:goto L4c11bc;
case 0x4c11bf:c.instructions+=6;goto B4c11bf;
case 0x4c11c0:c.instructions+=5;goto B4c11c0;
case 0x4c11c2:c.instructions+=4;goto B4c11c2;
case 0x4c11c7:c.instructions+=3;goto B4c11c7;
case 0x4c11cc:c.instructions+=2;goto B4c11cc;
case 0x4c11cd:c.instructions+=1;goto B4c11cd;
case 0x4c11d2:goto L4c11d2;
case 0x4c11d5:c.instructions+=4;goto B4c11d5;
case 0x4c11d8:c.instructions+=3;goto B4c11d8;
case 0x4c11da:c.instructions+=2;goto B4c11da;
case 0x4c11df:c.instructions+=1;goto B4c11df;
case 0x4c11e4:goto L4c11e4;
case 0x4c11e7:c.instructions+=3;goto B4c11e7;
case 0x4c11e8:c.instructions+=2;goto B4c11e8;
case 0x4c11ed:c.instructions+=1;goto B4c11ed;
case 0x4c11f2:goto L4c11f2;
case 0x4c11f5:c.instructions+=3;goto B4c11f5;
case 0x4c11f6:c.instructions+=2;goto B4c11f6;
case 0x4c11f7:c.instructions+=1;goto B4c11f7;
case 0x4c11fc:goto L4c11fc;
case 0x4c11ff:c.instructions+=1;goto B4c11ff;
case 0x4c1200:goto L4c1200;
case 0x4c1203:goto L4c1203;
case 0x4c1204:c.instructions+=2;goto B4c1204;
case 0x4c1205:c.instructions+=1;goto B4c1205;
case 0x4c1210:goto L4c1210;
case 0x4c1216:c.instructions+=2;goto B4c1216;
case 0x4c1218:c.instructions+=1;goto B4c1218;
case 0x4c121a:goto L4c121a;
case 0x4c121f:goto L4c121f;
case 0x4c1220:goto L4c1220;
case 0x4c1221:c.instructions+=4;goto B4c1221;
case 0x4c1223:c.instructions+=3;goto B4c1223;
case 0x4c1229:c.instructions+=2;goto B4c1229;
case 0x4c122b:c.instructions+=1;goto B4c122b;
case 0x4c122d:goto L4c122d;
case 0x4c122f:c.instructions+=4;goto B4c122f;
case 0x4c1236:c.instructions+=3;goto B4c1236;
case 0x4c123c:c.instructions+=2;goto B4c123c;
case 0x4c1241:c.instructions+=1;goto B4c1241;
case 0x4c1246:goto L4c1246;
case 0x4c1248:c.instructions+=1;goto B4c1248;
case 0x4c124a:goto L4c124a;
case 0x4c1250:c.instructions+=2;goto B4c1250;
case 0x4c1252:c.instructions+=1;goto B4c1252;
case 0x4c1254:goto L4c1254;
case 0x4c1256:c.instructions+=1;goto B4c1256;
case 0x4c125b:goto L4c125b;
case 0x4c125d:goto L4c125d;
case 0x4c125e:c.instructions+=2;goto B4c125e;
case 0x4c1260:c.instructions+=1;goto B4c1260;
case 0x4c1265:goto L4c1265;
case 0x4c1268:c.instructions+=2;goto B4c1268;
case 0x4c126a:c.instructions+=1;goto B4c126a;
case 0x4c126c:goto L4c126c;
case 0x4c126e:c.instructions+=2;goto B4c126e;
case 0x4c126f:c.instructions+=1;goto B4c126f;
case 0x4c1274:goto L4c1274;
case 0x4c1275:c.instructions+=1;goto B4c1275;
case 0x4c1280:goto L4c1280;
case 0x4c1282:c.instructions+=7;goto B4c1282;
case 0x4c1287:c.instructions+=6;goto B4c1287;
case 0x4c128d:c.instructions+=5;goto B4c128d;
case 0x4c128e:c.instructions+=4;goto B4c128e;
case 0x4c1295:c.instructions+=3;goto B4c1295;
case 0x4c1296:c.instructions+=2;goto B4c1296;
case 0x4c1298:c.instructions+=1;goto B4c1298;
case 0x4c129d:goto L4c129d;
case 0x4c12a0:c.instructions+=4;goto B4c12a0;
case 0x4c12a4:c.instructions+=3;goto B4c12a4;
case 0x4c12a6:c.instructions+=2;goto B4c12a6;
case 0x4c12ae:c.instructions+=1;goto B4c12ae;
case 0x4c12b0:goto L4c12b0;
case 0x4c12b4:c.instructions+=3;goto B4c12b4;
case 0x4c12b5:c.instructions+=2;goto B4c12b5;
case 0x4c12b7:c.instructions+=1;goto B4c12b7;
case 0x4c12bc:goto L4c12bc;
case 0x4c12c0:c.instructions+=3;goto B4c12c0;
case 0x4c12c7:c.instructions+=2;goto B4c12c7;
case 0x4c12ca:c.instructions+=1;goto B4c12ca;
case 0x4c12cb:goto L4c12cb;
case 0x4c12cf:c.instructions+=4;goto B4c12cf;
case 0x4c12d1:c.instructions+=3;goto B4c12d1;
case 0x4c12d8:c.instructions+=2;goto B4c12d8;
case 0x4c12db:c.instructions+=1;goto B4c12db;
case 0x4c12e0:goto L4c12e0;
case 0x4c12e4:c.instructions+=2;goto B4c12e4;
case 0x4c12e9:c.instructions+=1;goto B4c12e9;
case 0x4c12eb:goto L4c12eb;
case 0x4c12f0:c.instructions+=1;goto B4c12f0;
case 0x4c12f2:goto L4c12f2;
case 0x4c12f7:c.instructions+=1;goto B4c12f7;
case 0x4c12f9:goto L4c12f9;
case 0x4c12ff:c.instructions+=7;goto B4c12ff;
case 0x4c1302:c.instructions+=6;goto B4c1302;
case 0x4c1303:c.instructions+=5;goto B4c1303;
case 0x4c1306:c.instructions+=4;goto B4c1306;
case 0x4c1309:c.instructions+=3;goto B4c1309;
case 0x4c130b:c.instructions+=2;goto B4c130b;
case 0x4c130c:c.instructions+=1;goto B4c130c;
case 0x4c130e:goto L4c130e;
case 0x4c1311:c.instructions+=8;goto B4c1311;
case 0x4c1314:c.instructions+=7;goto B4c1314;
case 0x4c1316:c.instructions+=6;goto B4c1316;
case 0x4c1318:c.instructions+=5;goto B4c1318;
case 0x4c131b:c.instructions+=4;goto B4c131b;
case 0x4c131d:c.instructions+=3;goto B4c131d;
case 0x4c131e:c.instructions+=2;goto B4c131e;
case 0x4c131f:c.instructions+=1;goto B4c131f;
case 0x4c1324:goto L4c1324;
case 0x4c1327:c.instructions+=1;goto B4c1327;
case 0x4c132a:goto L4c132a;
case 0x4c1330:c.instructions+=1;goto B4c1330;
case 0x4c1335:goto L4c1335;
case 0x4c1340:goto L4c1340;
case 0x4c1341:c.instructions+=14;goto B4c1341;
case 0x4c1343:c.instructions+=13;goto B4c1343;
case 0x4c1346:c.instructions+=12;goto B4c1346;
case 0x4c1349:c.instructions+=11;goto B4c1349;
case 0x4c134a:c.instructions+=10;goto B4c134a;
case 0x4c134b:c.instructions+=9;goto B4c134b;
case 0x4c134e:c.instructions+=8;goto B4c134e;
case 0x4c1350:c.instructions+=7;goto B4c1350;
case 0x4c1353:c.instructions+=6;goto B4c1353;
case 0x4c1354:c.instructions+=5;goto B4c1354;
case 0x4c1355:c.instructions+=4;goto B4c1355;
case 0x4c1356:c.instructions+=3;goto B4c1356;
case 0x4c1357:c.instructions+=2;goto B4c1357;
case 0x4c1359:c.instructions+=1;goto B4c1359;
case 0x4c135e:goto L4c135e;
case 0x4c135f:c.instructions+=2;goto B4c135f;
case 0x4c1365:c.instructions+=1;goto B4c1365;
case 0x4c136a:goto L4c136a;
case 0x4c1370:c.instructions+=1;goto B4c1370;
case 0x4c1376:goto L4c1376;
case 0x4c137c:goto L4c137c;
case 0x4c1382:c.instructions+=1;goto B4c1382;
case 0x4c1384:goto L4c1384;
case 0x4c138a:c.instructions+=1;goto B4c138a;
case 0x4c138c:goto L4c138c;
case 0x4c1392:c.instructions+=1;goto B4c1392;
case 0x4c1398:goto L4c1398;
case 0x4c139b:c.instructions+=4;goto B4c139b;
case 0x4c13a0:c.instructions+=3;goto B4c13a0;
case 0x4c13a5:c.instructions+=2;goto B4c13a5;
case 0x4c13a6:c.instructions+=1;goto B4c13a6;
case 0x4c13ab:goto L4c13ab;
case 0x4c13ae:c.instructions+=2;goto B4c13ae;
case 0x4c13b0:c.instructions+=1;goto B4c13b0;
case 0x4c13b6:goto L4c13b6;
case 0x4c13b9:c.instructions+=3;goto B4c13b9;
case 0x4c13bb:c.instructions+=2;goto B4c13bb;
case 0x4c13bc:c.instructions+=1;goto B4c13bc;
case 0x4c13c1:goto L4c13c1;
case 0x4c13c4:c.instructions+=5;goto B4c13c4;
case 0x4c13c6:c.instructions+=4;goto B4c13c6;
case 0x4c13cb:c.instructions+=3;goto B4c13cb;
case 0x4c13d0:c.instructions+=2;goto B4c13d0;
case 0x4c13d1:c.instructions+=1;goto B4c13d1;
case 0x4c13d6:goto L4c13d6;
case 0x4c13d9:c.instructions+=4;goto B4c13d9;
case 0x4c13da:c.instructions+=3;goto B4c13da;
case 0x4c13db:c.instructions+=2;goto B4c13db;
case 0x4c13dc:c.instructions+=1;goto B4c13dc;
case 0x4c13df:goto L4c13df;
case 0x4c13e4:c.instructions+=1;goto B4c13e4;
case 0x4c13e9:goto L4c13e9;
case 0x4c13ea:c.instructions+=3;goto B4c13ea;
case 0x4c13eb:c.instructions+=2;goto B4c13eb;
case 0x4c13ec:c.instructions+=1;goto B4c13ec;
case 0x4c13ef:goto L4c13ef;
case 0x4c13f2:c.instructions+=3;goto B4c13f2;
case 0x4c13f3:c.instructions+=2;goto B4c13f3;
case 0x4c13f8:c.instructions+=1;goto B4c13f8;
case 0x4c13fd:goto L4c13fd;
case 0x4c1400:c.instructions+=4;goto B4c1400;
case 0x4c1401:c.instructions+=3;goto B4c1401;
case 0x4c1402:c.instructions+=2;goto B4c1402;
case 0x4c1403:c.instructions+=1;goto B4c1403;
case 0x4c1406:goto L4c1406;
case 0x4c140c:c.instructions+=5;goto B4c140c;
case 0x4c140d:c.instructions+=4;goto B4c140d;
case 0x4c140f:c.instructions+=3;goto B4c140f;
case 0x4c1411:c.instructions+=2;goto B4c1411;
case 0x4c1417:c.instructions+=1;goto B4c1417;
case 0x4c141d:goto L4c141d;
case 0x4c141e:c.instructions+=4;goto B4c141e;
case 0x4c1428:c.instructions+=3;goto B4c1428;
case 0x4c1429:c.instructions+=2;goto B4c1429;
case 0x4c142a:c.instructions+=1;goto B4c142a;
case 0x4c142d:goto L4c142d;
case 0x4c1433:c.instructions+=1;goto B4c1433;
case 0x4c1435:goto L4c1435;
case 0x4c143b:c.instructions+=1;goto B4c143b;
case 0x4c143d:goto L4c143d;
case 0x4c1443:c.instructions+=1;goto B4c1443;
case 0x4c1445:goto L4c1445;
case 0x4c144f:c.instructions+=1;goto B4c144f;
case 0x4c1451:goto L4c1451;
case 0x4c1457:c.instructions+=1;goto B4c1457;
case 0x4c145c:goto L4c145c;
case 0x4c145d:c.instructions+=3;goto B4c145d;
case 0x4c145e:c.instructions+=2;goto B4c145e;
case 0x4c145f:c.instructions+=1;goto B4c145f;
case 0x4c1462:goto L4c1462;
case 0x4c1467:c.instructions+=1;goto B4c1467;
case 0x4c146c:goto L4c146c;
case 0x4c146f:c.instructions+=4;goto B4c146f;
case 0x4c1472:c.instructions+=3;goto B4c1472;
case 0x4c1473:c.instructions+=2;goto B4c1473;
case 0x4c1478:c.instructions+=1;goto B4c1478;
case 0x4c147d:goto L4c147d;
case 0x4c1483:c.instructions+=1;goto B4c1483;
case 0x4c1488:goto L4c1488;
case 0x4c1489:c.instructions+=3;goto B4c1489;
case 0x4c148a:c.instructions+=2;goto B4c148a;
case 0x4c148b:c.instructions+=1;goto B4c148b;
case 0x4c148e:goto L4c148e;
case 0x4c1494:c.instructions+=6;goto B4c1494;
case 0x4c149a:c.instructions+=5;goto B4c149a;
case 0x4c149b:c.instructions+=4;goto B4c149b;
case 0x4c149d:c.instructions+=3;goto B4c149d;
case 0x4c149f:c.instructions+=2;goto B4c149f;
case 0x4c14a5:c.instructions+=1;goto B4c14a5;
case 0x4c14a7:goto L4c14a7;
case 0x4c14a8:c.instructions+=1;goto B4c14a8;
case 0x4c14ae:goto L4c14ae;
case 0x4c14af:c.instructions+=3;goto B4c14af;
case 0x4c14b0:c.instructions+=2;goto B4c14b0;
case 0x4c14b1:c.instructions+=1;goto B4c14b1;
case 0x4c14c0:goto L4c14c0;
case 0x4c14c1:c.instructions+=8;goto B4c14c1;
case 0x4c14c3:c.instructions+=7;goto B4c14c3;
case 0x4c14c8:c.instructions+=6;goto B4c14c8;
case 0x4c14ce:c.instructions+=5;goto B4c14ce;
case 0x4c14d4:c.instructions+=4;goto B4c14d4;
case 0x4c14d6:c.instructions+=3;goto B4c14d6;
case 0x4c14d7:c.instructions+=2;goto B4c14d7;
case 0x4c14da:c.instructions+=1;goto B4c14da;
case 0x4c14dc:goto L4c14dc;
case 0x4c14df:c.instructions+=1;goto B4c14df;
case 0x4c14e4:goto L4c14e4;
case 0x4c14e5:c.instructions+=1;goto B4c14e5;
case 0x4c14ea:goto L4c14ea;
case 0x4c14eb:c.instructions+=10;goto B4c14eb;
case 0x4c14f0:c.instructions+=9;goto B4c14f0;
case 0x4c14f2:c.instructions+=8;goto B4c14f2;
case 0x4c14f7:c.instructions+=7;goto B4c14f7;
case 0x4c14fc:c.instructions+=6;goto B4c14fc;
case 0x4c1501:c.instructions+=5;goto B4c1501;
case 0x4c1506:c.instructions+=4;goto B4c1506;
case 0x4c150b:c.instructions+=3;goto B4c150b;
case 0x4c1510:c.instructions+=2;goto B4c1510;
case 0x4c1511:c.instructions+=1;goto B4c1511;
case 0x4c1516:goto L4c1516;
case 0x4c1519:goto L4c1519;
case 0x4c151a:c.instructions+=2;goto B4c151a;
case 0x4c151f:c.instructions+=1;goto B4c151f;
case 0x4c1524:goto L4c1524;
case 0x4c1527:c.instructions+=3;goto B4c1527;
case 0x4c1528:c.instructions+=2;goto B4c1528;
case 0x4c1529:c.instructions+=1;goto B4c1529;
case 0x4c1530:goto L4c1530;
case 0x4c1532:c.instructions+=12;goto B4c1532;
case 0x4c1537:c.instructions+=11;goto B4c1537;
case 0x4c153d:c.instructions+=10;goto B4c153d;
case 0x4c153e:c.instructions+=9;goto B4c153e;
case 0x4c1545:c.instructions+=8;goto B4c1545;
case 0x4c1548:c.instructions+=7;goto B4c1548;
case 0x4c154d:c.instructions+=6;goto B4c154d;
case 0x4c154e:c.instructions+=5;goto B4c154e;
case 0x4c154f:c.instructions+=4;goto B4c154f;
case 0x4c1551:c.instructions+=3;goto B4c1551;
case 0x4c1554:c.instructions+=2;goto B4c1554;
case 0x4c1555:c.instructions+=1;goto B4c1555;
case 0x4c155a:goto L4c155a;
case 0x4c155b:c.instructions+=2;goto B4c155b;
case 0x4c155c:c.instructions+=1;goto B4c155c;
case 0x4c1561:goto L4c1561;
case 0x4c1567:c.instructions+=4;goto B4c1567;
case 0x4c156d:c.instructions+=3;goto B4c156d;
case 0x4c1570:c.instructions+=2;goto B4c1570;
case 0x4c1576:c.instructions+=1;goto B4c1576;
case 0x4c157b:goto L4c157b;
case 0x4c157f:c.instructions+=6;goto B4c157f;
case 0x4c1583:c.instructions+=5;goto B4c1583;
case 0x4c1584:c.instructions+=4;goto B4c1584;
case 0x4c158a:c.instructions+=3;goto B4c158a;
case 0x4c1590:c.instructions+=2;goto B4c1590;
case 0x4c1596:c.instructions+=1;goto B4c1596;
case 0x4c159b:goto L4c159b;
case 0x4c159d:c.instructions+=3;goto B4c159d;
case 0x4c15a1:c.instructions+=2;goto B4c15a1;
case 0x4c15a9:c.instructions+=1;goto B4c15a9;
case 0x4c15af:goto L4c15af;
case 0x4c15b0:goto L4c15b0;
case 0x4c15b6:c.instructions+=5;goto B4c15b6;
case 0x4c15ba:c.instructions+=4;goto B4c15ba;
case 0x4c15c0:c.instructions+=3;goto B4c15c0;
case 0x4c15c1:c.instructions+=2;goto B4c15c1;
case 0x4c15c7:c.instructions+=1;goto B4c15c7;
case 0x4c15cc:goto L4c15cc;
case 0x4c15cf:c.instructions+=3;goto B4c15cf;
case 0x4c15d4:c.instructions+=2;goto B4c15d4;
case 0x4c15d6:c.instructions+=1;goto B4c15d6;
case 0x4c15db:goto L4c15db;
case 0x4c15dc:c.instructions+=2;goto B4c15dc;
case 0x4c15dd:c.instructions+=1;goto B4c15dd;
case 0x4c15e2:goto L4c15e2;
case 0x4c15e5:c.instructions+=3;goto B4c15e5;
case 0x4c15e7:c.instructions+=2;goto B4c15e7;
case 0x4c15ed:c.instructions+=1;goto B4c15ed;
case 0x4c15f2:goto L4c15f2;
case 0x4c15f3:c.instructions+=5;goto B4c15f3;
case 0x4c15f8:c.instructions+=4;goto B4c15f8;
case 0x4c15fc:c.instructions+=3;goto B4c15fc;
case 0x4c15fe:c.instructions+=2;goto B4c15fe;
case 0x4c15ff:c.instructions+=1;goto B4c15ff;
case 0x4c1604:goto L4c1604;
case 0x4c1606:c.instructions+=1;goto B4c1606;
case 0x4c160b:goto L4c160b;
case 0x4c160d:c.instructions+=5;goto B4c160d;
case 0x4c1610:c.instructions+=4;goto B4c1610;
case 0x4c1614:c.instructions+=3;goto B4c1614;
case 0x4c1616:c.instructions+=2;goto B4c1616;
case 0x4c161e:c.instructions+=1;goto B4c161e;
case 0x4c1620:goto L4c1620;
case 0x4c1624:c.instructions+=2;goto B4c1624;
case 0x4c1625:c.instructions+=1;goto B4c1625;
case 0x4c162a:goto L4c162a;
case 0x4c162d:c.instructions+=5;goto B4c162d;
case 0x4c162f:c.instructions+=4;goto B4c162f;
case 0x4c1631:c.instructions+=3;goto B4c1631;
case 0x4c1632:c.instructions+=2;goto B4c1632;
case 0x4c1634:c.instructions+=1;goto B4c1634;
case 0x4c1639:goto L4c1639;
case 0x4c163f:c.instructions+=3;goto B4c163f;
case 0x4c1642:c.instructions+=2;goto B4c1642;
case 0x4c1646:c.instructions+=1;goto B4c1646;
case 0x4c1648:goto L4c1648;
case 0x4c164a:goto L4c164a;
case 0x4c164c:c.instructions+=4;goto B4c164c;
case 0x4c164d:c.instructions+=3;goto B4c164d;
case 0x4c164f:c.instructions+=2;goto B4c164f;
case 0x4c1657:c.instructions+=1;goto B4c1657;
case 0x4c165a:goto L4c165a;
case 0x4c165e:c.instructions+=5;goto B4c165e;
case 0x4c1662:c.instructions+=4;goto B4c1662;
case 0x4c1663:c.instructions+=3;goto B4c1663;
case 0x4c1665:c.instructions+=2;goto B4c1665;
case 0x4c1669:c.instructions+=1;goto B4c1669;
case 0x4c166f:goto L4c166f;
case 0x4c1670:goto L4c1670;
case 0x4c1673:c.instructions+=3;goto B4c1673;
case 0x4c1676:c.instructions+=2;goto B4c1676;
case 0x4c1678:c.instructions+=1;goto B4c1678;
case 0x4c167b:goto L4c167b;
case 0x4c167d:c.instructions+=2;goto B4c167d;
case 0x4c167f:c.instructions+=1;goto B4c167f;
case 0x4c1682:goto L4c1682;
case 0x4c1686:c.instructions+=5;goto B4c1686;
case 0x4c1687:c.instructions+=4;goto B4c1687;
case 0x4c1688:c.instructions+=3;goto B4c1688;
case 0x4c168f:c.instructions+=2;goto B4c168f;
case 0x4c1692:c.instructions+=1;goto B4c1692;
case 0x4c16a0:goto L4c16a0;
case 0x4c16a4:c.instructions+=7;goto B4c16a4;
case 0x4c16a8:c.instructions+=6;goto B4c16a8;
case 0x4c16ac:c.instructions+=5;goto B4c16ac;
case 0x4c16ad:c.instructions+=4;goto B4c16ad;
case 0x4c16ae:c.instructions+=3;goto B4c16ae;
case 0x4c16b2:c.instructions+=2;goto B4c16b2;
case 0x4c16b3:c.instructions+=1;goto B4c16b3;
case 0x4c16b8:goto L4c16b8;
case 0x4c16c0:goto L4c16c0;
case 0x4c16c2:c.instructions+=16;goto B4c16c2;
case 0x4c16c3:c.instructions+=15;goto B4c16c3;
case 0x4c16c5:c.instructions+=14;goto B4c16c5;
case 0x4c16c9:c.instructions+=13;goto B4c16c9;
case 0x4c16ca:c.instructions+=12;goto B4c16ca;
case 0x4c16cc:c.instructions+=11;goto B4c16cc;
case 0x4c16cf:c.instructions+=10;goto B4c16cf;
case 0x4c16d2:c.instructions+=9;goto B4c16d2;
case 0x4c16d5:c.instructions+=8;goto B4c16d5;
case 0x4c16d8:c.instructions+=7;goto B4c16d8;
case 0x4c16db:c.instructions+=6;goto B4c16db;
case 0x4c16de:c.instructions+=5;goto B4c16de;
case 0x4c16e1:c.instructions+=4;goto B4c16e1;
case 0x4c16e4:c.instructions+=3;goto B4c16e4;
case 0x4c16e7:c.instructions+=2;goto B4c16e7;
case 0x4c16ee:c.instructions+=1;goto B4c16ee;
case 0x4c16f3:goto L4c16f3;
case 0x4c16f7:c.instructions+=1;goto B4c16f7;
case 0x4c16f9:goto L4c16f9;
case 0x4c16fb:c.instructions+=4;goto B4c16fb;
case 0x4c16fc:c.instructions+=3;goto B4c16fc;
case 0x4c1701:c.instructions+=2;goto B4c1701;
case 0x4c1702:c.instructions+=1;goto B4c1702;
case 0x4c1707:goto L4c1707;
case 0x4c170a:goto L4c170a;
case 0x4c170d:c.instructions+=2;goto B4c170d;
case 0x4c1713:c.instructions+=1;goto B4c1713;
case 0x4c1715:goto L4c1715;
case 0x4c1716:c.instructions+=3;goto B4c1716;
case 0x4c1718:c.instructions+=2;goto B4c1718;
case 0x4c1719:c.instructions+=1;goto B4c1719;
case 0x4c1720:goto L4c1720;
case 0x4c1730:goto L4c1730;
case 0x4c1732:c.instructions+=13;goto B4c1732;
case 0x4c1737:c.instructions+=12;goto B4c1737;
case 0x4c173d:c.instructions+=11;goto B4c173d;
case 0x4c173e:c.instructions+=10;goto B4c173e;
case 0x4c1745:c.instructions+=9;goto B4c1745;
case 0x4c1746:c.instructions+=8;goto B4c1746;
case 0x4c174a:c.instructions+=7;goto B4c174a;
case 0x4c174b:c.instructions+=6;goto B4c174b;
case 0x4c174c:c.instructions+=5;goto B4c174c;
case 0x4c174e:c.instructions+=4;goto B4c174e;
case 0x4c1751:c.instructions+=3;goto B4c1751;
case 0x4c1755:c.instructions+=2;goto B4c1755;
case 0x4c1757:c.instructions+=1;goto B4c1757;
case 0x4c175c:goto L4c175c;
case 0x4c175e:c.instructions+=3;goto B4c175e;
case 0x4c1764:c.instructions+=2;goto B4c1764;
case 0x4c1768:c.instructions+=1;goto B4c1768;
case 0x4c176d:goto L4c176d;
case 0x4c1773:c.instructions+=2;goto B4c1773;
case 0x4c1778:c.instructions+=1;goto B4c1778;
case 0x4c177d:goto L4c177d;
case 0x4c1783:c.instructions+=2;goto B4c1783;
case 0x4c1788:c.instructions+=1;goto B4c1788;
case 0x4c178d:goto L4c178d;
case 0x4c1793:c.instructions+=2;goto B4c1793;
case 0x4c1798:c.instructions+=1;goto B4c1798;
case 0x4c179d:goto L4c179d;
case 0x4c17a2:c.instructions+=14;goto B4c17a2;
case 0x4c17a3:c.instructions+=13;goto B4c17a3;
case 0x4c17a4:c.instructions+=12;goto B4c17a4;
case 0x4c17a9:c.instructions+=11;goto B4c17a9;
case 0x4c17ae:c.instructions+=10;goto B4c17ae;
case 0x4c17b4:c.instructions+=9;goto B4c17b4;
case 0x4c17ba:c.instructions+=8;goto B4c17ba;
case 0x4c17c0:c.instructions+=7;goto B4c17c0;
case 0x4c17c6:c.instructions+=6;goto B4c17c6;
case 0x4c17cc:c.instructions+=5;goto B4c17cc;
case 0x4c17d2:c.instructions+=4;goto B4c17d2;
case 0x4c17d8:c.instructions+=3;goto B4c17d8;
case 0x4c17de:c.instructions+=2;goto B4c17de;
case 0x4c17e4:c.instructions+=1;goto B4c17e4;
case 0x4c17e9:goto L4c17e9;
case 0x4c17ed:c.instructions+=8;goto B4c17ed;
case 0x4c17ef:c.instructions+=7;goto B4c17ef;
case 0x4c17f0:c.instructions+=6;goto B4c17f0;
case 0x4c17f6:c.instructions+=5;goto B4c17f6;
case 0x4c17fc:c.instructions+=4;goto B4c17fc;
case 0x4c17fd:c.instructions+=3;goto B4c17fd;
case 0x4c1804:c.instructions+=2;goto B4c1804;
case 0x4c1807:c.instructions+=1;goto B4c1807;
case 0x4c1810:goto L4c1810;
case 0x4c1815:c.instructions+=1;goto B4c1815;
case 0x4c181a:goto L4c181a;
case 0x4c181c:c.instructions+=6;goto B4c181c;
case 0x4c181f:c.instructions+=5;goto B4c181f;
case 0x4c1823:c.instructions+=4;goto B4c1823;
case 0x4c1826:c.instructions+=3;goto B4c1826;
case 0x4c1828:c.instructions+=2;goto B4c1828;
case 0x4c182d:c.instructions+=1;goto B4c182d;
case 0x4c182f:goto L4c182f;
case 0x4c1832:c.instructions+=2;goto B4c1832;
case 0x4c1834:c.instructions+=1;goto B4c1834;
case 0x4c1836:goto L4c1836;
case 0x4c1839:c.instructions+=8;goto B4c1839;
case 0x4c183f:c.instructions+=7;goto B4c183f;
case 0x4c1845:c.instructions+=6;goto B4c1845;
case 0x4c184c:c.instructions+=5;goto B4c184c;
case 0x4c184e:c.instructions+=4;goto B4c184e;
case 0x4c1852:c.instructions+=3;goto B4c1852;
case 0x4c1853:c.instructions+=2;goto B4c1853;
case 0x4c1854:c.instructions+=1;goto B4c1854;
case 0x4c1859:goto L4c1859;
case 0x4c185c:goto L4c185c;
case 0x4c1860:goto L4c1860;
case 0x4c1861:c.instructions+=2;goto B4c1861;
case 0x4c1866:c.instructions+=1;goto B4c1866;
case 0x4c186b:goto L4c186b;
case 0x4c186d:c.instructions+=3;goto B4c186d;
case 0x4c1870:c.instructions+=2;goto B4c1870;
case 0x4c1872:c.instructions+=1;goto B4c1872;
case 0x4c1874:goto L4c1874;
case 0x4c1875:c.instructions+=5;goto B4c1875;
case 0x4c1879:c.instructions+=4;goto B4c1879;
case 0x4c187b:c.instructions+=3;goto B4c187b;
case 0x4c187c:c.instructions+=2;goto B4c187c;
case 0x4c1880:c.instructions+=1;goto B4c1880;
case 0x4c1882:goto L4c1882;
case 0x4c1883:c.instructions+=2;goto B4c1883;
case 0x4c1885:c.instructions+=1;goto B4c1885;
case 0x4c188a:goto L4c188a;
case 0x4c188c:c.instructions+=1;goto B4c188c;
case 0x4c188e:goto L4c188e;
case 0x4c1892:c.instructions+=8;goto B4c1892;
case 0x4c1895:c.instructions+=7;goto B4c1895;
case 0x4c1899:c.instructions+=6;goto B4c1899;
case 0x4c189a:c.instructions+=5;goto B4c189a;
case 0x4c189d:c.instructions+=4;goto B4c189d;
case 0x4c189e:c.instructions+=3;goto B4c189e;
case 0x4c189f:c.instructions+=2;goto B4c189f;
case 0x4c18a0:c.instructions+=1;goto B4c18a0;
case 0x4c18a5:goto L4c18a5;
case 0x4c18a8:goto L4c18a8;
case 0x4c18a9:c.instructions+=1;goto B4c18a9;
case 0x4c18aa:goto L4c18aa;
case 0x4c18ab:c.instructions+=1;goto B4c18ab;
case 0x4c18b0:goto L4c18b0;
case 0x4c18b5:c.instructions+=1;goto B4c18b5;
case 0x4c18ba:goto L4c18ba;
case 0x4c18bd:c.instructions+=2;goto B4c18bd;
case 0x4c18bf:c.instructions+=1;goto B4c18bf;
case 0x4c18c1:goto L4c18c1;
case 0x4c18c6:c.instructions+=1;goto B4c18c6;
case 0x4c18cb:goto L4c18cb;
case 0x4c18cd:c.instructions+=6;goto B4c18cd;
case 0x4c18d0:c.instructions+=5;goto B4c18d0;
case 0x4c18d4:c.instructions+=4;goto B4c18d4;
case 0x4c18d7:c.instructions+=3;goto B4c18d7;
case 0x4c18d9:c.instructions+=2;goto B4c18d9;
case 0x4c18de:c.instructions+=1;goto B4c18de;
case 0x4c18e0:goto L4c18e0;
case 0x4c18e3:c.instructions+=2;goto B4c18e3;
case 0x4c18e5:c.instructions+=1;goto B4c18e5;
case 0x4c18e7:goto L4c18e7;
case 0x4c18ea:c.instructions+=8;goto B4c18ea;
case 0x4c18f0:c.instructions+=7;goto B4c18f0;
case 0x4c18f6:c.instructions+=6;goto B4c18f6;
case 0x4c18fd:c.instructions+=5;goto B4c18fd;
case 0x4c18ff:c.instructions+=4;goto B4c18ff;
case 0x4c1903:c.instructions+=3;goto B4c1903;
case 0x4c1904:c.instructions+=2;goto B4c1904;
case 0x4c1905:c.instructions+=1;goto B4c1905;
case 0x4c190a:goto L4c190a;
case 0x4c190d:c.instructions+=1;goto B4c190d;
case 0x4c190e:goto L4c190e;
case 0x4c1911:goto L4c1911;
case 0x4c1920:goto L4c1920;
case 0x4c1925:c.instructions+=1;goto B4c1925;
case 0x4c192a:goto L4c192a;
case 0x4c192d:c.instructions+=2;goto B4c192d;
case 0x4c192f:c.instructions+=1;goto B4c192f;
case 0x4c1931:goto L4c1931;
case 0x4c1936:c.instructions+=1;goto B4c1936;
case 0x4c193b:goto L4c193b;
case 0x4c193f:c.instructions+=10;goto B4c193f;
case 0x4c1943:c.instructions+=9;goto B4c1943;
case 0x4c1946:c.instructions+=8;goto B4c1946;
case 0x4c1948:c.instructions+=7;goto B4c1948;
case 0x4c1949:c.instructions+=6;goto B4c1949;
case 0x4c194d:c.instructions+=5;goto B4c194d;
case 0x4c194e:c.instructions+=4;goto B4c194e;
case 0x4c1951:c.instructions+=3;goto B4c1951;
case 0x4c1952:c.instructions+=2;goto B4c1952;
case 0x4c1956:c.instructions+=1;goto B4c1956;
case 0x4c195b:goto L4c195b;
case 0x4c1960:goto L4c1960;
case 0x4c1962:c.instructions+=23;goto B4c1962;
case 0x4c1967:c.instructions+=22;goto B4c1967;
case 0x4c196d:c.instructions+=21;goto B4c196d;
case 0x4c196e:c.instructions+=20;goto B4c196e;
case 0x4c1975:c.instructions+=19;goto B4c1975;
case 0x4c1976:c.instructions+=18;goto B4c1976;
case 0x4c1977:c.instructions+=17;goto B4c1977;
case 0x4c1979:c.instructions+=16;goto B4c1979;
case 0x4c197a:c.instructions+=15;goto B4c197a;
case 0x4c197c:c.instructions+=14;goto B4c197c;
case 0x4c1980:c.instructions+=13;goto B4c1980;
case 0x4c1983:c.instructions+=12;goto B4c1983;
case 0x4c1986:c.instructions+=11;goto B4c1986;
case 0x4c198a:c.instructions+=10;goto B4c198a;
case 0x4c198d:c.instructions+=9;goto B4c198d;
case 0x4c1990:c.instructions+=8;goto B4c1990;
case 0x4c1995:c.instructions+=7;goto B4c1995;
case 0x4c199a:c.instructions+=6;goto B4c199a;
case 0x4c199c:c.instructions+=5;goto B4c199c;
case 0x4c199e:c.instructions+=4;goto B4c199e;
case 0x4c19a1:c.instructions+=3;goto B4c19a1;
case 0x4c19a2:c.instructions+=2;goto B4c19a2;
case 0x4c19a7:c.instructions+=1;goto B4c19a7;
case 0x4c19ac:goto L4c19ac;
case 0x4c19b0:c.instructions+=10;goto B4c19b0;
case 0x4c19b6:c.instructions+=9;goto B4c19b6;
case 0x4c19bc:c.instructions+=8;goto B4c19bc;
case 0x4c19c2:c.instructions+=7;goto B4c19c2;
case 0x4c19c8:c.instructions+=6;goto B4c19c8;
case 0x4c19c9:c.instructions+=5;goto B4c19c9;
case 0x4c19cb:c.instructions+=4;goto B4c19cb;
case 0x4c19cc:c.instructions+=3;goto B4c19cc;
case 0x4c19d3:c.instructions+=2;goto B4c19d3;
case 0x4c19d6:c.instructions+=1;goto B4c19d6;
case 0x4c19e0:goto L4c19e0;
case 0x4c19e2:c.instructions+=11;goto B4c19e2;
case 0x4c19e7:c.instructions+=10;goto B4c19e7;
case 0x4c19ed:c.instructions+=9;goto B4c19ed;
case 0x4c19ee:c.instructions+=8;goto B4c19ee;
case 0x4c19f5:c.instructions+=7;goto B4c19f5;
case 0x4c19f6:c.instructions+=6;goto B4c19f6;
case 0x4c19f7:c.instructions+=5;goto B4c19f7;
case 0x4c19f9:c.instructions+=4;goto B4c19f9;
case 0x4c19fd:c.instructions+=3;goto B4c19fd;
case 0x4c1a03:c.instructions+=2;goto B4c1a03;
case 0x4c1a0b:c.instructions+=1;goto B4c1a0b;
case 0x4c1a10:goto L4c1a10;
case 0x4c1a13:c.instructions+=2;goto B4c1a13;
case 0x4c1a18:c.instructions+=1;goto B4c1a18;
case 0x4c1a1d:goto L4c1a1d;
case 0x4c1a22:c.instructions+=6;goto B4c1a22;
case 0x4c1a24:c.instructions+=5;goto B4c1a24;
case 0x4c1a26:c.instructions+=4;goto B4c1a26;
case 0x4c1a29:c.instructions+=3;goto B4c1a29;
case 0x4c1a2a:c.instructions+=2;goto B4c1a2a;
case 0x4c1a2f:c.instructions+=1;goto B4c1a2f;
case 0x4c1a34:goto L4c1a34;
case 0x4c1a37:c.instructions+=2;goto B4c1a37;
case 0x4c1a3c:c.instructions+=1;goto B4c1a3c;
case 0x4c1a41:goto L4c1a41;
case 0x4c1a44:c.instructions+=2;goto B4c1a44;
case 0x4c1a4c:c.instructions+=1;goto B4c1a4c;
case 0x4c1a51:goto L4c1a51;
case 0x4c1a55:c.instructions+=4;goto B4c1a55;
case 0x4c1a56:c.instructions+=3;goto B4c1a56;
case 0x4c1a5d:c.instructions+=2;goto B4c1a5d;
case 0x4c1a60:c.instructions+=1;goto B4c1a60;
case 0x4c1a70:goto L4c1a70;
case 0x4c1a72:c.instructions+=13;goto B4c1a72;
case 0x4c1a77:c.instructions+=12;goto B4c1a77;
case 0x4c1a7d:c.instructions+=11;goto B4c1a7d;
case 0x4c1a7e:c.instructions+=10;goto B4c1a7e;
case 0x4c1a85:c.instructions+=9;goto B4c1a85;
case 0x4c1a86:c.instructions+=8;goto B4c1a86;
case 0x4c1a87:c.instructions+=7;goto B4c1a87;
case 0x4c1a89:c.instructions+=6;goto B4c1a89;
case 0x4c1a8d:c.instructions+=5;goto B4c1a8d;
case 0x4c1a93:c.instructions+=4;goto B4c1a93;
case 0x4c1a99:c.instructions+=3;goto B4c1a99;
case 0x4c1a9b:c.instructions+=2;goto B4c1a9b;
case 0x4c1aa3:c.instructions+=1;goto B4c1aa3;
case 0x4c1aa5:goto L4c1aa5;
case 0x4c1aa7:c.instructions+=2;goto B4c1aa7;
case 0x4c1aa9:c.instructions+=1;goto B4c1aa9;
case 0x4c1aab:goto L4c1aab;
case 0x4c1aac:c.instructions+=3;goto B4c1aac;
case 0x4c1aaf:c.instructions+=2;goto B4c1aaf;
case 0x4c1ab1:c.instructions+=1;goto B4c1ab1;
case 0x4c1ab3:goto L4c1ab3;
case 0x4c1ab5:c.instructions+=1;goto B4c1ab5;
case 0x4c1aba:goto L4c1aba;
case 0x4c1abb:c.instructions+=1;goto B4c1abb;
case 0x4c1ac0:goto L4c1ac0;
case 0x4c1ac3:goto L4c1ac3;
case 0x4c1ac6:c.instructions+=2;goto B4c1ac6;
case 0x4c1ac8:c.instructions+=1;goto B4c1ac8;
case 0x4c1aca:goto L4c1aca;
case 0x4c1acc:c.instructions+=1;goto B4c1acc;
case 0x4c1ad1:goto L4c1ad1;
case 0x4c1ad2:c.instructions+=1;goto B4c1ad2;
case 0x4c1ad7:goto L4c1ad7;
case 0x4c1ada:goto L4c1ada;
case 0x4c1ae0:c.instructions+=2;goto B4c1ae0;
case 0x4c1ae2:c.instructions+=1;goto B4c1ae2;
case 0x4c1ae4:goto L4c1ae4;
case 0x4c1ae6:c.instructions+=1;goto B4c1ae6;
case 0x4c1aeb:goto L4c1aeb;
case 0x4c1aec:c.instructions+=1;goto B4c1aec;
case 0x4c1af1:goto L4c1af1;
case 0x4c1af4:goto L4c1af4;
case 0x4c1af7:c.instructions+=1;goto B4c1af7;
case 0x4c1afc:goto L4c1afc;
case 0x4c1b02:c.instructions+=1;goto B4c1b02;
case 0x4c1b07:goto L4c1b07;
case 0x4c1b0d:c.instructions+=1;goto B4c1b0d;
case 0x4c1b12:goto L4c1b12;
case 0x4c1b18:c.instructions+=1;goto B4c1b18;
case 0x4c1b1d:goto L4c1b1d;
case 0x4c1b23:c.instructions+=1;goto B4c1b23;
case 0x4c1b28:goto L4c1b28;
case 0x4c1b2e:c.instructions+=1;goto B4c1b2e;
case 0x4c1b33:goto L4c1b33;
case 0x4c1b39:c.instructions+=1;goto B4c1b39;
case 0x4c1b3e:goto L4c1b3e;
case 0x4c1b44:c.instructions+=4;goto B4c1b44;
case 0x4c1b47:c.instructions+=3;goto B4c1b47;
case 0x4c1b49:c.instructions+=2;goto B4c1b49;
case 0x4c1b4a:c.instructions+=1;goto B4c1b4a;
case 0x4c1b4c:goto L4c1b4c;
case 0x4c1b51:goto L4c1b51;
case 0x4c1b56:c.instructions+=1;goto B4c1b56;
case 0x4c1b5b:goto L4c1b5b;
case 0x4c1b61:c.instructions+=2;goto B4c1b61;
case 0x4c1b66:c.instructions+=1;goto B4c1b66;
case 0x4c1b6b:goto L4c1b6b;
case 0x4c1b6e:c.instructions+=2;goto B4c1b6e;
case 0x4c1b73:c.instructions+=1;goto B4c1b73;
case 0x4c1b78:goto L4c1b78;
case 0x4c1b7a:c.instructions+=2;goto B4c1b7a;
case 0x4c1b82:c.instructions+=1;goto B4c1b82;
case 0x4c1b87:goto L4c1b87;
case 0x4c1b8b:c.instructions+=4;goto B4c1b8b;
case 0x4c1b8c:c.instructions+=3;goto B4c1b8c;
case 0x4c1b93:c.instructions+=2;goto B4c1b93;
case 0x4c1b96:c.instructions+=1;goto B4c1b96;
case 0x4c1ba0:goto L4c1ba0;
case 0x4c1ba1:c.instructions+=11;goto B4c1ba1;
case 0x4c1ba2:c.instructions+=10;goto B4c1ba2;
case 0x4c1ba3:c.instructions+=9;goto B4c1ba3;
case 0x4c1ba4:c.instructions+=8;goto B4c1ba4;
case 0x4c1ba6:c.instructions+=7;goto B4c1ba6;
case 0x4c1bac:c.instructions+=6;goto B4c1bac;
case 0x4c1bb2:c.instructions+=5;goto B4c1bb2;
case 0x4c1bb8:c.instructions+=4;goto B4c1bb8;
case 0x4c1bb9:c.instructions+=3;goto B4c1bb9;
case 0x4c1bba:c.instructions+=2;goto B4c1bba;
case 0x4c1bbc:c.instructions+=1;goto B4c1bbc;
case 0x4c1bc1:goto L4c1bc1;
case 0x4c1bc7:c.instructions+=5;goto B4c1bc7;
case 0x4c1bca:c.instructions+=4;goto B4c1bca;
case 0x4c1bcb:c.instructions+=3;goto B4c1bcb;
case 0x4c1bd0:c.instructions+=2;goto B4c1bd0;
case 0x4c1bd1:c.instructions+=1;goto B4c1bd1;
case 0x4c1bd6:goto L4c1bd6;
case 0x4c1bdc:c.instructions+=4;goto B4c1bdc;
case 0x4c1be2:c.instructions+=3;goto B4c1be2;
case 0x4c1be5:c.instructions+=2;goto B4c1be5;
case 0x4c1be7:c.instructions+=1;goto B4c1be7;
case 0x4c1be9:goto L4c1be9;
case 0x4c1bef:c.instructions+=1;goto B4c1bef;
case 0x4c1bf1:goto L4c1bf1;
case 0x4c1bf7:c.instructions+=2;goto B4c1bf7;
case 0x4c1bf9:c.instructions+=1;goto B4c1bf9;
case 0x4c1bfb:goto L4c1bfb;
case 0x4c1c01:c.instructions+=1;goto B4c1c01;
case 0x4c1c03:goto L4c1c03;
case 0x4c1c09:c.instructions+=2;goto B4c1c09;
case 0x4c1c0b:c.instructions+=1;goto B4c1c0b;
case 0x4c1c0d:goto L4c1c0d;
case 0x4c1c10:c.instructions+=1;goto B4c1c10;
case 0x4c1c12:goto L4c1c12;
case 0x4c1c14:goto L4c1c14;
case 0x4c1c1a:c.instructions+=2;goto B4c1c1a;
case 0x4c1c1c:c.instructions+=1;goto B4c1c1c;
case 0x4c1c22:goto L4c1c22;
case 0x4c1c24:c.instructions+=1;goto B4c1c24;
case 0x4c1c2a:goto L4c1c2a;
case 0x4c1c2d:c.instructions+=3;goto B4c1c2d;
case 0x4c1c32:c.instructions+=2;goto B4c1c32;
case 0x4c1c33:c.instructions+=1;goto B4c1c33;
case 0x4c1c38:goto L4c1c38;
case 0x4c1c39:c.instructions+=1;goto B4c1c39;
case 0x4c1c3e:goto L4c1c3e;
case 0x4c1c41:c.instructions+=4;goto B4c1c41;
case 0x4c1c44:c.instructions+=3;goto B4c1c44;
case 0x4c1c46:c.instructions+=2;goto B4c1c46;
case 0x4c1c4c:c.instructions+=1;goto B4c1c4c;
case 0x4c1c51:goto L4c1c51;
case 0x4c1c52:c.instructions+=3;goto B4c1c52;
case 0x4c1c54:c.instructions+=2;goto B4c1c54;
case 0x4c1c57:c.instructions+=1;goto B4c1c57;
case 0x4c1c5c:goto L4c1c5c;
case 0x4c1c5e:c.instructions+=2;goto B4c1c5e;
case 0x4c1c64:c.instructions+=1;goto B4c1c64;
case 0x4c1c69:goto L4c1c69;
case 0x4c1c6a:c.instructions+=3;goto B4c1c6a;
case 0x4c1c6c:c.instructions+=2;goto B4c1c6c;
case 0x4c1c6f:c.instructions+=1;goto B4c1c6f;
case 0x4c1c74:goto L4c1c74;
case 0x4c1c7a:c.instructions+=3;goto B4c1c7a;
case 0x4c1c7c:c.instructions+=2;goto B4c1c7c;
case 0x4c1c80:c.instructions+=1;goto B4c1c80;
case 0x4c1c85:goto L4c1c85;
case 0x4c1c86:c.instructions+=3;goto B4c1c86;
case 0x4c1c8a:c.instructions+=2;goto B4c1c8a;
case 0x4c1c8d:c.instructions+=1;goto B4c1c8d;
case 0x4c1c92:goto L4c1c92;
case 0x4c1c98:c.instructions+=2;goto B4c1c98;
case 0x4c1c9a:c.instructions+=1;goto B4c1c9a;
case 0x4c1c9c:goto L4c1c9c;
case 0x4c1c9e:c.instructions+=1;goto B4c1c9e;
case 0x4c1ca3:goto L4c1ca3;
case 0x4c1ca4:c.instructions+=3;goto B4c1ca4;
case 0x4c1ca6:c.instructions+=2;goto B4c1ca6;
case 0x4c1ca9:c.instructions+=1;goto B4c1ca9;
case 0x4c1cae:goto L4c1cae;
case 0x4c1cb0:c.instructions+=1;goto B4c1cb0;
case 0x4c1cb5:goto L4c1cb5;
case 0x4c1cb6:c.instructions+=3;goto B4c1cb6;
case 0x4c1cb8:c.instructions+=2;goto B4c1cb8;
case 0x4c1cbb:c.instructions+=1;goto B4c1cbb;
case 0x4c1cc0:goto L4c1cc0;
case 0x4c1cc2:c.instructions+=1;goto B4c1cc2;
case 0x4c1cc7:goto L4c1cc7;
case 0x4c1cc8:c.instructions+=3;goto B4c1cc8;
case 0x4c1ccc:c.instructions+=2;goto B4c1ccc;
case 0x4c1ccf:c.instructions+=1;goto B4c1ccf;
case 0x4c1cd4:goto L4c1cd4;
case 0x4c1cd5:c.instructions+=5;goto B4c1cd5;
case 0x4c1cd6:c.instructions+=4;goto B4c1cd6;
case 0x4c1cd7:c.instructions+=3;goto B4c1cd7;
case 0x4c1cd8:c.instructions+=2;goto B4c1cd8;
case 0x4c1cd9:c.instructions+=1;goto B4c1cd9;
case 0x4c1cda:goto L4c1cda;
case 0x4c1cdd:c.instructions+=2;goto B4c1cdd;
case 0x4c1cdf:c.instructions+=1;goto B4c1cdf;
case 0x4c1ce1:goto L4c1ce1;
case 0x4c1ce2:c.instructions+=1;goto B4c1ce2;
case 0x4c1ce7:goto L4c1ce7;
case 0x4c1cea:goto L4c1cea;
case 0x4c1ced:c.instructions+=2;goto B4c1ced;
case 0x4c1cef:c.instructions+=1;goto B4c1cef;
case 0x4c1cf1:goto L4c1cf1;
case 0x4c1cf2:c.instructions+=1;goto B4c1cf2;
case 0x4c1cf7:goto L4c1cf7;
case 0x4c1cfa:goto L4c1cfa;
case 0x4c1cfe:c.instructions+=3;goto B4c1cfe;
case 0x4c1d01:c.instructions+=2;goto B4c1d01;
case 0x4c1d03:c.instructions+=1;goto B4c1d03;
case 0x4c1d05:goto L4c1d05;
case 0x4c1d06:c.instructions+=1;goto B4c1d06;
case 0x4c1d0b:goto L4c1d0b;
case 0x4c1d0e:c.instructions+=6;goto B4c1d0e;
case 0x4c1d0f:c.instructions+=5;goto B4c1d0f;
case 0x4c1d10:c.instructions+=4;goto B4c1d10;
case 0x4c1d11:c.instructions+=3;goto B4c1d11;
case 0x4c1d12:c.instructions+=2;goto B4c1d12;
case 0x4c1d13:c.instructions+=1;goto B4c1d13;
case 0x4c1d14:goto L4c1d14;
case 0x4c1d17:c.instructions+=3;goto B4c1d17;
case 0x4c1d1c:c.instructions+=2;goto B4c1d1c;
case 0x4c1d1d:c.instructions+=1;goto B4c1d1d;
case 0x4c1d22:goto L4c1d22;
case 0x4c1d23:c.instructions+=1;goto B4c1d23;
case 0x4c1d28:goto L4c1d28;
case 0x4c1d2b:goto L4c1d2b;
case 0x4c1d2c:c.instructions+=5;goto B4c1d2c;
case 0x4c1d2d:c.instructions+=4;goto B4c1d2d;
case 0x4c1d2e:c.instructions+=3;goto B4c1d2e;
case 0x4c1d2f:c.instructions+=2;goto B4c1d2f;
case 0x4c1d30:c.instructions+=1;goto B4c1d30;
case 0x4c1d40:goto L4c1d40;
case 0x4c1d45:c.instructions+=17;goto B4c1d45;
case 0x4c1d46:c.instructions+=16;goto B4c1d46;
case 0x4c1d47:c.instructions+=15;goto B4c1d47;
case 0x4c1d48:c.instructions+=14;goto B4c1d48;
case 0x4c1d4c:c.instructions+=13;goto B4c1d4c;
case 0x4c1d4e:c.instructions+=12;goto B4c1d4e;
case 0x4c1d52:c.instructions+=11;goto B4c1d52;
case 0x4c1d53:c.instructions+=10;goto B4c1d53;
case 0x4c1d58:c.instructions+=9;goto B4c1d58;
case 0x4c1d5e:c.instructions+=8;goto B4c1d5e;
case 0x4c1d64:c.instructions+=7;goto B4c1d64;
case 0x4c1d6a:c.instructions+=6;goto B4c1d6a;
case 0x4c1d6b:c.instructions+=5;goto B4c1d6b;
case 0x4c1d6c:c.instructions+=4;goto B4c1d6c;
case 0x4c1d6d:c.instructions+=3;goto B4c1d6d;
case 0x4c1d6e:c.instructions+=2;goto B4c1d6e;
case 0x4c1d74:c.instructions+=1;goto B4c1d74;
case 0x4c1d79:goto L4c1d79;
case 0x4c1d7f:c.instructions+=8;goto B4c1d7f;
case 0x4c1d83:c.instructions+=7;goto B4c1d83;
case 0x4c1d85:c.instructions+=6;goto B4c1d85;
case 0x4c1d87:c.instructions+=5;goto B4c1d87;
case 0x4c1d8d:c.instructions+=4;goto B4c1d8d;
case 0x4c1d93:c.instructions+=3;goto B4c1d93;
case 0x4c1d99:c.instructions+=2;goto B4c1d99;
case 0x4c1d9f:c.instructions+=1;goto B4c1d9f;
case 0x4c1da1:goto L4c1da1;
case 0x4c1da7:c.instructions+=4;goto B4c1da7;
case 0x4c1dae:c.instructions+=3;goto B4c1dae;
case 0x4c1daf:c.instructions+=2;goto B4c1daf;
case 0x4c1db1:c.instructions+=1;goto B4c1db1;
case 0x4c1db6:goto L4c1db6;
case 0x4c1dbc:c.instructions+=6;goto B4c1dbc;
case 0x4c1dbf:c.instructions+=5;goto B4c1dbf;
case 0x4c1dc0:c.instructions+=4;goto B4c1dc0;
case 0x4c1dc1:c.instructions+=3;goto B4c1dc1;
case 0x4c1dc6:c.instructions+=2;goto B4c1dc6;
case 0x4c1dc8:c.instructions+=1;goto B4c1dc8;
case 0x4c1dce:goto L4c1dce;
case 0x4c1dd4:c.instructions+=7;goto B4c1dd4;
case 0x4c1dda:c.instructions+=6;goto B4c1dda;
case 0x4c1de0:c.instructions+=5;goto B4c1de0;
case 0x4c1de6:c.instructions+=4;goto B4c1de6;
case 0x4c1dec:c.instructions+=3;goto B4c1dec;
case 0x4c1dee:c.instructions+=2;goto B4c1dee;
case 0x4c1df1:c.instructions+=1;goto B4c1df1;
case 0x4c1df3:goto L4c1df3;
case 0x4c1e00:goto L4c1e00;
case 0x4c1e06:c.instructions+=4;goto B4c1e06;
case 0x4c1e0c:c.instructions+=3;goto B4c1e0c;
case 0x4c1e0e:c.instructions+=2;goto B4c1e0e;
case 0x4c1e11:c.instructions+=1;goto B4c1e11;
case 0x4c1e13:goto L4c1e13;
case 0x4c1e19:c.instructions+=3;goto B4c1e19;
case 0x4c1e1b:c.instructions+=2;goto B4c1e1b;
case 0x4c1e1e:c.instructions+=1;goto B4c1e1e;
case 0x4c1e20:goto L4c1e20;
case 0x4c1e26:c.instructions+=4;goto B4c1e26;
case 0x4c1e2c:c.instructions+=3;goto B4c1e2c;
case 0x4c1e2e:c.instructions+=2;goto B4c1e2e;
case 0x4c1e31:c.instructions+=1;goto B4c1e31;
case 0x4c1e33:goto L4c1e33;
case 0x4c1e39:c.instructions+=6;goto B4c1e39;
case 0x4c1e3b:c.instructions+=5;goto B4c1e3b;
case 0x4c1e3d:c.instructions+=4;goto B4c1e3d;
case 0x4c1e43:c.instructions+=3;goto B4c1e43;
case 0x4c1e45:c.instructions+=2;goto B4c1e45;
case 0x4c1e48:c.instructions+=1;goto B4c1e48;
case 0x4c1e4a:goto L4c1e4a;
case 0x4c1e4c:c.instructions+=6;goto B4c1e4c;
case 0x4c1e4e:c.instructions+=5;goto B4c1e4e;
case 0x4c1e52:c.instructions+=4;goto B4c1e52;
case 0x4c1e58:c.instructions+=3;goto B4c1e58;
case 0x4c1e5a:c.instructions+=2;goto B4c1e5a;
case 0x4c1e5e:c.instructions+=1;goto B4c1e5e;
case 0x4c1e60:goto L4c1e60;
case 0x4c1e62:c.instructions+=6;goto B4c1e62;
case 0x4c1e64:c.instructions+=5;goto B4c1e64;
case 0x4c1e68:c.instructions+=4;goto B4c1e68;
case 0x4c1e6a:c.instructions+=3;goto B4c1e6a;
case 0x4c1e70:c.instructions+=2;goto B4c1e70;
case 0x4c1e72:c.instructions+=1;goto B4c1e72;
case 0x4c1e76:goto L4c1e76;
case 0x4c1e78:c.instructions+=5;goto B4c1e78;
case 0x4c1e7c:c.instructions+=4;goto B4c1e7c;
case 0x4c1e80:c.instructions+=3;goto B4c1e80;
case 0x4c1e82:c.instructions+=2;goto B4c1e82;
case 0x4c1e85:c.instructions+=1;goto B4c1e85;
case 0x4c1e87:goto L4c1e87;
case 0x4c1e8b:c.instructions+=3;goto B4c1e8b;
case 0x4c1e91:c.instructions+=2;goto B4c1e91;
case 0x4c1e97:c.instructions+=1;goto B4c1e97;
case 0x4c1e99:goto L4c1e99;
case 0x4c1e9d:c.instructions+=2;goto B4c1e9d;
case 0x4c1ea4:c.instructions+=1;goto B4c1ea4;
case 0x4c1eaa:goto L4c1eaa;
case 0x4c1eb0:c.instructions+=8;goto B4c1eb0;
case 0x4c1eb6:c.instructions+=7;goto B4c1eb6;
case 0x4c1ebc:c.instructions+=6;goto B4c1ebc;
case 0x4c1ec2:c.instructions+=5;goto B4c1ec2;
case 0x4c1ec4:c.instructions+=4;goto B4c1ec4;
case 0x4c1ec6:c.instructions+=3;goto B4c1ec6;
case 0x4c1ec8:c.instructions+=2;goto B4c1ec8;
case 0x4c1ecb:c.instructions+=1;goto B4c1ecb;
case 0x4c1ecd:goto L4c1ecd;
case 0x4c1ecf:c.instructions+=4;goto B4c1ecf;
case 0x4c1ed1:c.instructions+=3;goto B4c1ed1;
case 0x4c1ed7:c.instructions+=2;goto B4c1ed7;
case 0x4c1ed9:c.instructions+=1;goto B4c1ed9;
case 0x4c1edb:goto L4c1edb;
case 0x4c1edd:c.instructions+=3;goto B4c1edd;
case 0x4c1edf:c.instructions+=2;goto B4c1edf;
case 0x4c1ee1:c.instructions+=1;goto B4c1ee1;
case 0x4c1ee7:goto L4c1ee7;
case 0x4c1eed:c.instructions+=1;goto B4c1eed;
case 0x4c1eef:goto L4c1eef;
case 0x4c1ef0:c.instructions+=3;goto B4c1ef0;
case 0x4c1ef6:c.instructions+=2;goto B4c1ef6;
case 0x4c1efb:c.instructions+=1;goto B4c1efb;
case 0x4c1f00:goto L4c1f00;
case 0x4c1f02:c.instructions+=3;goto B4c1f02;
case 0x4c1f05:c.instructions+=2;goto B4c1f05;
case 0x4c1f07:c.instructions+=1;goto B4c1f07;
case 0x4c1f09:goto L4c1f09;
case 0x4c1f0a:c.instructions+=2;goto B4c1f0a;
case 0x4c1f0c:c.instructions+=1;goto B4c1f0c;
case 0x4c1f11:goto L4c1f11;
case 0x4c1f13:c.instructions+=1;goto B4c1f13;
case 0x4c1f15:goto L4c1f15;
case 0x4c1f18:c.instructions+=7;goto B4c1f18;
case 0x4c1f1c:c.instructions+=6;goto B4c1f1c;
case 0x4c1f1f:c.instructions+=5;goto B4c1f1f;
case 0x4c1f24:c.instructions+=4;goto B4c1f24;
case 0x4c1f25:c.instructions+=3;goto B4c1f25;
case 0x4c1f26:c.instructions+=2;goto B4c1f26;
case 0x4c1f27:c.instructions+=1;goto B4c1f27;
case 0x4c1f2c:goto L4c1f2c;
case 0x4c1f2f:goto L4c1f2f;
case 0x4c1f33:c.instructions+=2;goto B4c1f33;
case 0x4c1f39:c.instructions+=1;goto B4c1f39;
case 0x4c1f3a:goto L4c1f3a;
case 0x4c1f3d:c.instructions+=1;goto B4c1f3d;
case 0x4c1f3f:goto L4c1f3f;
case 0x4c1f44:c.instructions+=3;goto B4c1f44;
case 0x4c1f4b:c.instructions+=2;goto B4c1f4b;
case 0x4c1f51:c.instructions+=1;goto B4c1f51;
case 0x4c1f56:goto L4c1f56;
case 0x4c1f59:c.instructions+=2;goto B4c1f59;
case 0x4c1f5b:c.instructions+=1;goto B4c1f5b;
case 0x4c1f5d:goto L4c1f5d;
case 0x4c1f60:c.instructions+=7;goto B4c1f60;
case 0x4c1f64:c.instructions+=6;goto B4c1f64;
case 0x4c1f67:c.instructions+=5;goto B4c1f67;
case 0x4c1f6c:c.instructions+=4;goto B4c1f6c;
case 0x4c1f6e:c.instructions+=3;goto B4c1f6e;
case 0x4c1f6f:c.instructions+=2;goto B4c1f6f;
case 0x4c1f70:c.instructions+=1;goto B4c1f70;
case 0x4c1f75:goto L4c1f75;
case 0x4c1f78:goto L4c1f78;
case 0x4c1f7c:c.instructions+=7;goto B4c1f7c;
case 0x4c1f82:c.instructions+=6;goto B4c1f82;
case 0x4c1f83:c.instructions+=5;goto B4c1f83;
case 0x4c1f8a:c.instructions+=4;goto B4c1f8a;
case 0x4c1f90:c.instructions+=3;goto B4c1f90;
case 0x4c1f91:c.instructions+=2;goto B4c1f91;
case 0x4c1f92:c.instructions+=1;goto B4c1f92;
case 0x4c1fa0:goto L4c1fa0;
case 0x4c1fa1:c.instructions+=9;goto B4c1fa1;
case 0x4c1fa3:c.instructions+=8;goto B4c1fa3;
case 0x4c1fa7:c.instructions+=7;goto B4c1fa7;
case 0x4c1fae:c.instructions+=6;goto B4c1fae;
case 0x4c1fb8:c.instructions+=5;goto B4c1fb8;
case 0x4c1fbd:c.instructions+=4;goto B4c1fbd;
case 0x4c1fc2:c.instructions+=3;goto B4c1fc2;
case 0x4c1fc3:c.instructions+=2;goto B4c1fc3;
case 0x4c1fc9:c.instructions+=1;goto B4c1fc9;
case 0x4c1fce:goto L4c1fce;
case 0x4c1fd4:c.instructions+=2;goto B4c1fd4;
case 0x4c1fd6:c.instructions+=1;goto B4c1fd6;
case 0x4c1fd8:goto L4c1fd8;
case 0x4c1fd9:c.instructions+=4;goto B4c1fd9;
case 0x4c1fdf:c.instructions+=3;goto B4c1fdf;
case 0x4c1fe0:c.instructions+=2;goto B4c1fe0;
case 0x4c1fe5:c.instructions+=1;goto B4c1fe5;
case 0x4c1fea:goto L4c1fea;
case 0x4c1fec:c.instructions+=3;goto B4c1fec;
case 0x4c1fef:c.instructions+=2;goto B4c1fef;
case 0x4c1ff1:c.instructions+=1;goto B4c1ff1;
case 0x4c1ff3:goto L4c1ff3;
case 0x4c1ff4:c.instructions+=2;goto B4c1ff4;
case 0x4c1ff6:c.instructions+=1;goto B4c1ff6;
case 0x4c1ffb:goto L4c1ffb;
case 0x4c1ffd:c.instructions+=1;goto B4c1ffd;
case 0x4c1fff:goto L4c1fff;
default:missing_instruction(c.pc);}
B4c1000:L4c1000:{c.instructions+=5;NFSU2_TR(0x4c1000);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4c1005:{NFSU2_TR(0x4c1005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c1008:{NFSU2_TR(0x4c1008);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c100a:{NFSU2_TR(0x4c100a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c100c:{NFSU2_TR(0x4c100c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c1029;}}
}
B4c100e:L4c100e:{c.instructions+=1;NFSU2_TR(0x4c100e);
__builtin_memmove((R+28),(R+28),4);
}
B4c1010:L4c1010:{c.instructions+=4;NFSU2_TR(0x4c1010);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4c1017:{NFSU2_TR(0x4c1017);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1019:{NFSU2_TR(0x4c1019);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c101a:{NFSU2_TR(0x4c101a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c101full));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B4c101f:L4c101f:{c.instructions+=4;NFSU2_TR(0x4c101f);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4c1024:{NFSU2_TR(0x4c1024);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4c1025:{NFSU2_TR(0x4c1025);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c1027:{NFSU2_TR(0x4c1027);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c1010u);}goto L4c1010;}}
}
B4c1029:L4c1029:{c.instructions+=3;NFSU2_TR(0x4c1029);
__builtin_memmove((R+8),gp(0x8650b8),4);
}
B4c102f:{NFSU2_TR(0x4c102f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c1032:{NFSU2_TR(0x4c1032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1039;}}
}
B4c1034:L4c1034:{c.instructions+=1;NFSU2_TR(0x4c1034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1039ull));
TAIL_STATIC(0x579520u,579);
}
B4c1039:L4c1039:{c.instructions+=3;NFSU2_TR(0x4c1039);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B4c103e:{NFSU2_TR(0x4c103e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c1040:{NFSU2_TR(0x4c1040);
if(r1(R+518)){{goto L4c1066;}}
}
B4c1042:L4c1042:{c.instructions+=3;NFSU2_TR(0x4c1042);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c1045:{NFSU2_TR(0x4c1045);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1047:{NFSU2_TR(0x4c1047);
if(r1(R+518)){{goto L4c1066;}}
}
B4c1049:L4c1049:{c.instructions+=3;NFSU2_TR(0x4c1049);
__builtin_memmove((R+0),gp(0x8384dc),1);
}
B4c104e:{NFSU2_TR(0x4c104e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1050:{NFSU2_TR(0x4c1050);
if(r1(R+518)){{goto L4c1066;}}
}
B4c1052:L4c1052:{c.instructions+=3;NFSU2_TR(0x4c1052);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1059:{NFSU2_TR(0x4c1059);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4c105f:{NFSU2_TR(0x4c105f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1064ull));
TAIL_STATIC(0x54e6b0u,54e);
}
B4c1064:L4c1064:{c.instructions+=1;NFSU2_TR(0x4c1064);
{goto L4c106d;}
}
B4c1066:L4c1066:{c.instructions+=1;NFSU2_TR(0x4c1066);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c106d:L4c106d:{c.instructions+=9;NFSU2_TR(0x4c106d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1071:{NFSU2_TR(0x4c1071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1072:{NFSU2_TR(0x4c1072);
__builtin_memmove((R+0),(R+24),4);
}
B4c1074:{NFSU2_TR(0x4c1074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1075:{NFSU2_TR(0x4c1075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1076:{NFSU2_TR(0x4c1076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1077:{NFSU2_TR(0x4c1077);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c107e:{NFSU2_TR(0x4c107e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1081:{NFSU2_TR(0x4c1081);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1090:L4c1090:{c.instructions+=3;NFSU2_TR(0x4c1090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1091:{NFSU2_TR(0x4c1091);
__builtin_memmove((R+24),(R+4),4);
}
B4c1093:{NFSU2_TR(0x4c1093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1098ull));
TAIL_STATIC(0x4a4b70u,4a4);
}
B4c1098:L4c1098:{c.instructions+=2;NFSU2_TR(0x4c1098);
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
B4c109d:{NFSU2_TR(0x4c109d);
if(r1(R+518)){{goto L4c10a8;}}
}
B4c109f:L4c109f:{c.instructions+=2;NFSU2_TR(0x4c109f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c10a0:{NFSU2_TR(0x4c10a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c10a5ull));
TAIL_STATIC(0x575630u,575);
}
B4c10a5:L4c10a5:{c.instructions+=1;NFSU2_TR(0x4c10a5);
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
B4c10a8:L4c10a8:{c.instructions+=3;NFSU2_TR(0x4c10a8);
__builtin_memmove((R+0),(R+24),4);
}
B4c10aa:{NFSU2_TR(0x4c10aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c10ab:{NFSU2_TR(0x4c10ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c10b0:L4c10b0:{c.instructions+=7;NFSU2_TR(0x4c10b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c10b1:{NFSU2_TR(0x4c10b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c10b2:{NFSU2_TR(0x4c10b2);
__builtin_memmove((R+24),(R+4),4);
}
B4c10b4:{NFSU2_TR(0x4c10b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c10ba:{NFSU2_TR(0x4c10ba);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c10bc:{NFSU2_TR(0x4c10bc);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c10be:{NFSU2_TR(0x4c10be);
if(r1(R+518)){{goto L4c10e3;}}
}
B4c10c0:L4c10c0:{c.instructions+=3;NFSU2_TR(0x4c10c0);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c10c6:{NFSU2_TR(0x4c10c6);
u8 U[4];
w4(U+0,u32(0x790618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c10cb:{NFSU2_TR(0x4c10cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c10d0ull));
TAIL_STATIC(0x57c080u,57c);
}
B4c10d0:L4c10d0:{c.instructions+=2;NFSU2_TR(0x4c10d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c10d2:{NFSU2_TR(0x4c10d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c10dd;}}
}
B4c10d4:L4c10d4:{c.instructions+=4;NFSU2_TR(0x4c10d4);
__builtin_memmove((R+4),(R+24),4);
}
B4c10d6:{NFSU2_TR(0x4c10d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c10d7:{NFSU2_TR(0x4c10d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c10d8:{NFSU2_TR(0x4c10d8);
TAIL_STATIC(0x4a50e0u,4a5);
}
B4c10dd:L4c10dd:{c.instructions+=1;NFSU2_TR(0x4c10dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c10e3:L4c10e3:{c.instructions+=3;NFSU2_TR(0x4c10e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c10e9:{NFSU2_TR(0x4c10e9);
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
B4c10eb:{NFSU2_TR(0x4c10eb);
if(r1(R+518)){{goto L4c1203;}}
}
B4c10f1:L4c10f1:{c.instructions+=2;NFSU2_TR(0x4c10f1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c10f7:{NFSU2_TR(0x4c10f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1118;}}
}
B4c10f9:L4c10f9:{c.instructions+=4;NFSU2_TR(0x4c10f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B4c10fc:{NFSU2_TR(0x4c10fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c10fd:{NFSU2_TR(0x4c10fd);
w4(R+4,u32(0x88eb00ull));
}
B4c1102:{NFSU2_TR(0x4c1102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1107ull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B4c1107:L4c1107:{c.instructions+=5;NFSU2_TR(0x4c1107);
s1(0x88ed89,u8(0x1ull));
}
B4c110e:{NFSU2_TR(0x4c110e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1115:{NFSU2_TR(0x4c1115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1116:{NFSU2_TR(0x4c1116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1117:{NFSU2_TR(0x4c1117);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1118:L4c1118:{c.instructions+=7;NFSU2_TR(0x4c1118);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c111e:{NFSU2_TR(0x4c111e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c1124:{NFSU2_TR(0x4c1124);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c112a:{NFSU2_TR(0x4c112a);
{u32 ea_=u32(u32(7921664u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c1130:{NFSU2_TR(0x4c1130);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1132:{NFSU2_TR(0x4c1132);
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
B4c1135:{NFSU2_TR(0x4c1135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1203;}}
}
B4c113b:L4c113b:{c.instructions+=2;NFSU2_TR(0x4c113b);
w4(R+4,u32(0x88eb00ull));
}
B4c1140:{NFSU2_TR(0x4c1140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1145ull));
TAIL_STATIC(0x5e7a40u,5e7);
}
B4c1145:L4c1145:{c.instructions+=2;NFSU2_TR(0x4c1145);
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
B4c1147:{NFSU2_TR(0x4c1147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1203;}}
}
B4c114d:L4c114d:{c.instructions+=6;NFSU2_TR(0x4c114d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c1153:{NFSU2_TR(0x4c1153);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c1159:{NFSU2_TR(0x4c1159);
__builtin_memmove(gp(0x88ed89),(R+12),1);
}
B4c115f:{NFSU2_TR(0x4c115f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1165:{NFSU2_TR(0x4c1165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1166:{NFSU2_TR(0x4c1166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c116bull));
TAIL_STATIC(0x57c1d0u,57c);
}
B4c116b:L4c116b:{c.instructions+=4;NFSU2_TR(0x4c116b);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c1171:{NFSU2_TR(0x4c1171);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1174:{NFSU2_TR(0x4c1174);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c117a:{NFSU2_TR(0x4c117a);
if(r1(R+518)){{goto L4c1185;}}
}
B4c117c:L4c117c:{c.instructions+=2;NFSU2_TR(0x4c117c);
__builtin_memmove((R+4),(R+24),4);
}
B4c117e:{NFSU2_TR(0x4c117e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1183ull));
TAIL_STATIC(0x4a50e0u,4a5);
}
B4c1183:L4c1183:{c.instructions+=1;NFSU2_TR(0x4c1183);
{goto L4c11ab;}
}
B4c1185:L4c1185:{c.instructions+=5;NFSU2_TR(0x4c1185);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1187:{NFSU2_TR(0x4c1187);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c118c:{NFSU2_TR(0x4c118c);
u8 U[4];
w4(U+0,u32(0xa9723345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1191:{NFSU2_TR(0x4c1191);
u8 U[4];
w4(U+0,u32(0x79056cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1196:{NFSU2_TR(0x4c1196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c119bull));
TAIL_STATIC(0x537c00u,537);
}
B4c119b:L4c119b:{c.instructions+=4;NFSU2_TR(0x4c119b);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c11a1:{NFSU2_TR(0x4c11a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c11a4:{NFSU2_TR(0x4c11a4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11a6:{NFSU2_TR(0x4c11a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c11abull));
TAIL_STATIC(0x5f43d0u,5f4);
}
B4c11ab:L4c11ab:{c.instructions+=4;NFSU2_TR(0x4c11ab);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4c11ae:{NFSU2_TR(0x4c11ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c11b4:{NFSU2_TR(0x4c11b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c11ba:{NFSU2_TR(0x4c11ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1200;}}
}
B4c11bc:L4c11bc:{c.instructions+=7;NFSU2_TR(0x4c11bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c11bf:{NFSU2_TR(0x4c11bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11c0:{NFSU2_TR(0x4c11c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11c2:{NFSU2_TR(0x4c11c2);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11c7:{NFSU2_TR(0x4c11c7);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11cc:{NFSU2_TR(0x4c11cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11cd:{NFSU2_TR(0x4c11cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c11d2ull));
TAIL_STATIC(0x537c00u,537);
}
B4c11d2:L4c11d2:{c.instructions+=5;NFSU2_TR(0x4c11d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c11d5:{NFSU2_TR(0x4c11d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c11d8:{NFSU2_TR(0x4c11d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11da:{NFSU2_TR(0x4c11da);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11df:{NFSU2_TR(0x4c11df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c11e4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4c11e4:L4c11e4:{c.instructions+=4;NFSU2_TR(0x4c11e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c11e7:{NFSU2_TR(0x4c11e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11e8:{NFSU2_TR(0x4c11e8);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11ed:{NFSU2_TR(0x4c11ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c11f2ull));
TAIL_STATIC(0x43db50u,43d);
}
B4c11f2:L4c11f2:{c.instructions+=4;NFSU2_TR(0x4c11f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c11f5:{NFSU2_TR(0x4c11f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11f6:{NFSU2_TR(0x4c11f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c11f7:{NFSU2_TR(0x4c11f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c11fcull));
TAIL_STATIC(0x537c60u,537);
}
B4c11fc:L4c11fc:{c.instructions+=2;NFSU2_TR(0x4c11fc);
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
B4c11ff:{NFSU2_TR(0x4c11ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1200:L4c1200:{c.instructions+=1;NFSU2_TR(0x4c1200);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c1203:L4c1203:{c.instructions+=3;NFSU2_TR(0x4c1203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1204:{NFSU2_TR(0x4c1204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1205:{NFSU2_TR(0x4c1205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1210:L4c1210:{c.instructions+=3;NFSU2_TR(0x4c1210);
__builtin_memmove((R+4),gp(0x8363ec),4);
}
B4c1216:{NFSU2_TR(0x4c1216);
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
B4c1218:{NFSU2_TR(0x4c1218);
if(r1(R+518)){{goto L4c121f;}}
}
B4c121a:L4c121a:{c.instructions+=1;NFSU2_TR(0x4c121a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c10b0u);}goto L4c10b0;}
}
B4c121f:L4c121f:{c.instructions+=1;NFSU2_TR(0x4c121f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1220:L4c1220:{c.instructions+=5;NFSU2_TR(0x4c1220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1221:{NFSU2_TR(0x4c1221);
__builtin_memmove((R+24),(R+4),4);
}
B4c1223:{NFSU2_TR(0x4c1223);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c1229:{NFSU2_TR(0x4c1229);
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
B4c122b:{NFSU2_TR(0x4c122b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1274;}}
}
B4c122d:L4c122d:{c.instructions+=5;NFSU2_TR(0x4c122d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c122f:{NFSU2_TR(0x4c122f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1236:{NFSU2_TR(0x4c1236);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c123c:{NFSU2_TR(0x4c123c);
u8 U[4];
w4(U+0,u32(0x790618ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1241:{NFSU2_TR(0x4c1241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1246ull));
TAIL_STATIC(0x578fd0u,578);
}
B4c1246:L4c1246:{c.instructions+=2;NFSU2_TR(0x4c1246);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1248:{NFSU2_TR(0x4c1248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c125d;}}
}
B4c124a:L4c124a:{c.instructions+=3;NFSU2_TR(0x4c124a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1250:{NFSU2_TR(0x4c1250);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1252:{NFSU2_TR(0x4c1252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1265;}}
}
B4c1254:L4c1254:{c.instructions+=2;NFSU2_TR(0x4c1254);
__builtin_memmove((R+4),(R+24),4);
}
B4c1256:{NFSU2_TR(0x4c1256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c125bull));
TAIL_STATIC(0x4a50e0u,4a5);
}
B4c125b:L4c125b:{c.instructions+=1;NFSU2_TR(0x4c125b);
{goto L4c1265;}
}
B4c125d:L4c125d:{c.instructions+=3;NFSU2_TR(0x4c125d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c125e:{NFSU2_TR(0x4c125e);
__builtin_memmove((R+4),(R+24),4);
}
B4c1260:{NFSU2_TR(0x4c1260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1265ull));
TAIL_STATIC(0x4a4bf0u,4a4);
}
B4c1265:L4c1265:{c.instructions+=3;NFSU2_TR(0x4c1265);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c1268:{NFSU2_TR(0x4c1268);
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
B4c126a:{NFSU2_TR(0x4c126a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1274;}}
}
B4c126c:L4c126c:{c.instructions+=3;NFSU2_TR(0x4c126c);
__builtin_memmove((R+4),(R+24),4);
}
B4c126e:{NFSU2_TR(0x4c126e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c126f:{NFSU2_TR(0x4c126f);
TAIL_STATIC(0x4a5200u,4a5);
}
B4c1274:L4c1274:{c.instructions+=2;NFSU2_TR(0x4c1274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1275:{NFSU2_TR(0x4c1275);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1280:L4c1280:{c.instructions+=8;NFSU2_TR(0x4c1280);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1282:{NFSU2_TR(0x4c1282);
u8 U[4];
w4(U+0,u32(0x773a64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1287:{NFSU2_TR(0x4c1287);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c128d:{NFSU2_TR(0x4c128d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c128e:{NFSU2_TR(0x4c128e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1295:{NFSU2_TR(0x4c1295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1296:{NFSU2_TR(0x4c1296);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1298:{NFSU2_TR(0x4c1298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c129dull));
TAIL_STATIC(0x575620u,575);
}
B4c129d:L4c129d:{c.instructions+=5;NFSU2_TR(0x4c129d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c12a0:{NFSU2_TR(0x4c12a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4c12a4:{NFSU2_TR(0x4c12a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c12a6:{NFSU2_TR(0x4c12a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c12ae:{NFSU2_TR(0x4c12ae);
if(r1(R+518)){{goto L4c12cb;}}
}
B4c12b0:L4c12b0:{c.instructions+=4;NFSU2_TR(0x4c12b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c12b4:{NFSU2_TR(0x4c12b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c12b5:{NFSU2_TR(0x4c12b5);
__builtin_memmove((R+4),(R+0),4);
}
B4c12b7:{NFSU2_TR(0x4c12b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c12bcull));
TAIL_STATIC(0x4a5250u,4a5);
}
B4c12bc:L4c12bc:{c.instructions+=4;NFSU2_TR(0x4c12bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c12c0:{NFSU2_TR(0x4c12c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c12c7:{NFSU2_TR(0x4c12c7);
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
B4c12ca:{NFSU2_TR(0x4c12ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c12cb:L4c12cb:{c.instructions+=5;NFSU2_TR(0x4c12cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c12cf:{NFSU2_TR(0x4c12cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c12d1:{NFSU2_TR(0x4c12d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c12d8:{NFSU2_TR(0x4c12d8);
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
B4c12db:{NFSU2_TR(0x4c12db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c12e0:L4c12e0:{c.instructions+=3;NFSU2_TR(0x4c12e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c12e4:{NFSU2_TR(0x4c12e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c12e9:{NFSU2_TR(0x4c12e9);
if(r1(R+518)){{goto L4c132a;}}
}
B4c12eb:L4c12eb:{c.instructions+=2;NFSU2_TR(0x4c12eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c12f0:{NFSU2_TR(0x4c12f0);
if(r1(R+518)){{goto L4c132a;}}
}
B4c12f2:L4c12f2:{c.instructions+=2;NFSU2_TR(0x4c12f2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c12f7:{NFSU2_TR(0x4c12f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1335;}}
}
B4c12f9:L4c12f9:{c.instructions+=8;NFSU2_TR(0x4c12f9);
__builtin_memmove((R+8),gp(0x8363dc),4);
}
B4c12ff:{NFSU2_TR(0x4c12ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1302:{NFSU2_TR(0x4c1302);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1303:{NFSU2_TR(0x4c1303);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c1306:{NFSU2_TR(0x4c1306);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c1309:{NFSU2_TR(0x4c1309);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4c130b:{NFSU2_TR(0x4c130b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c130c:{NFSU2_TR(0x4c130c);
if(r1(R+518)){{goto L4c1335;}}
}
B4c130e:L4c130e:{c.instructions+=9;NFSU2_TR(0x4c130e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1311:{NFSU2_TR(0x4c1311);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1314:{NFSU2_TR(0x4c1314);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c1316:{NFSU2_TR(0x4c1316);
__builtin_memmove((R+0),(R+4),4);
}
B4c1318:{NFSU2_TR(0x4c1318);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c131b:{NFSU2_TR(0x4c131b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c131d:{NFSU2_TR(0x4c131d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c131e:{NFSU2_TR(0x4c131e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c131f:{NFSU2_TR(0x4c131f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1324ull));
TAIL_STATIC(0x537980u,537);
}
B4c1324:L4c1324:{c.instructions+=2;NFSU2_TR(0x4c1324);
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
B4c1327:{NFSU2_TR(0x4c1327);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c132a:L4c132a:{c.instructions+=2;NFSU2_TR(0x4c132a);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4c1330:{NFSU2_TR(0x4c1330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1335ull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4c1335:L4c1335:{c.instructions+=1;NFSU2_TR(0x4c1335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1340:L4c1340:{c.instructions+=15;NFSU2_TR(0x4c1340);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1341:{NFSU2_TR(0x4c1341);
__builtin_memmove((R+20),(R+16),4);
}
B4c1343:{NFSU2_TR(0x4c1343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1346:{NFSU2_TR(0x4c1346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1349:{NFSU2_TR(0x4c1349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c134a:{NFSU2_TR(0x4c134a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c134b:{NFSU2_TR(0x4c134b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c134e:{NFSU2_TR(0x4c134e);
__builtin_memmove((R+24),(R+4),4);
}
B4c1350:{NFSU2_TR(0x4c1350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1353:{NFSU2_TR(0x4c1353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1354:{NFSU2_TR(0x4c1354);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1355:{NFSU2_TR(0x4c1355);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1356:{NFSU2_TR(0x4c1356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1357:{NFSU2_TR(0x4c1357);
__builtin_memmove((R+4),(R+24),4);
}
B4c1359:{NFSU2_TR(0x4c1359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c135eull));
TAIL_STATIC(0x543d40u,543);
}
B4c135e:L4c135e:{c.instructions+=3;NFSU2_TR(0x4c135e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c135f:{NFSU2_TR(0x4c135f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1365:{NFSU2_TR(0x4c1365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c136aull));
TAIL_STATIC(0x5448f0u,544);
}
B4c136a:L4c136a:{c.instructions+=2;NFSU2_TR(0x4c136a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c1370:{NFSU2_TR(0x4c1370);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c142d;}}
}
B4c1376:L4c1376:{c.instructions+=1;NFSU2_TR(0x4c1376);
if(r1(R+518)){{goto L4c1406;}}
}
B4c137c:L4c137c:{c.instructions+=2;NFSU2_TR(0x4c137c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1bcfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c1382:{NFSU2_TR(0x4c1382);
if(r1(R+518)){{goto L4c13ef;}}
}
B4c1384:L4c1384:{c.instructions+=2;NFSU2_TR(0x4c1384);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c138a:{NFSU2_TR(0x4c138a);
if(r1(R+518)){{goto L4c13df;}}
}
B4c138c:L4c138c:{c.instructions+=2;NFSU2_TR(0x4c138c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1392:{NFSU2_TR(0x4c1392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c14ae;}}
}
B4c1398:L4c1398:{c.instructions+=5;NFSU2_TR(0x4c1398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c139b:{NFSU2_TR(0x4c139b);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13a0:{NFSU2_TR(0x4c13a0);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13a5:{NFSU2_TR(0x4c13a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13a6:{NFSU2_TR(0x4c13a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c13abull));
TAIL_STATIC(0x537cc0u,537);
}
B4c13ab:L4c13ab:{c.instructions+=3;NFSU2_TR(0x4c13ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c13ae:{NFSU2_TR(0x4c13ae);
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
B4c13b0:{NFSU2_TR(0x4c13b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c14ae;}}
}
B4c13b6:L4c13b6:{c.instructions+=4;NFSU2_TR(0x4c13b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c13b9:{NFSU2_TR(0x4c13b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13bb:{NFSU2_TR(0x4c13bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13bc:{NFSU2_TR(0x4c13bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c13c1ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4c13c1:L4c13c1:{c.instructions+=6;NFSU2_TR(0x4c13c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c13c4:{NFSU2_TR(0x4c13c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13c6:{NFSU2_TR(0x4c13c6);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13cb:{NFSU2_TR(0x4c13cb);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13d0:{NFSU2_TR(0x4c13d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13d1:{NFSU2_TR(0x4c13d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c13d6ull));
TAIL_STATIC(0x537c00u,537);
}
B4c13d6:L4c13d6:{c.instructions+=5;NFSU2_TR(0x4c13d6);
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
B4c13d9:{NFSU2_TR(0x4c13d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c13da:{NFSU2_TR(0x4c13da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c13db:{NFSU2_TR(0x4c13db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c13dc:{NFSU2_TR(0x4c13dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c13df:L4c13df:{c.instructions+=2;NFSU2_TR(0x4c13df);
w4(R+4,u32(0x8635bcull));
}
B4c13e4:{NFSU2_TR(0x4c13e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c13e9ull));
TAIL_STATIC(0x525510u,525);
}
B4c13e9:L4c13e9:{c.instructions+=4;NFSU2_TR(0x4c13e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c13ea:{NFSU2_TR(0x4c13ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c13eb:{NFSU2_TR(0x4c13eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c13ec:{NFSU2_TR(0x4c13ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c13ef:L4c13ef:{c.instructions+=4;NFSU2_TR(0x4c13ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c13f2:{NFSU2_TR(0x4c13f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13f3:{NFSU2_TR(0x4c13f3);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c13f8:{NFSU2_TR(0x4c13f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c13fdull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c13fd:L4c13fd:{c.instructions+=5;NFSU2_TR(0x4c13fd);
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
B4c1400:{NFSU2_TR(0x4c1400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1401:{NFSU2_TR(0x4c1401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1402:{NFSU2_TR(0x4c1402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1403:{NFSU2_TR(0x4c1403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1406:L4c1406:{c.instructions+=6;NFSU2_TR(0x4c1406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c140c:{NFSU2_TR(0x4c140c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4c140d:{NFSU2_TR(0x4c140d);
__builtin_memmove((R+0),(R+8),4);
}
B4c140f:{NFSU2_TR(0x4c140f);
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
B4c1411:{NFSU2_TR(0x4c1411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1417:{NFSU2_TR(0x4c1417);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c14ae;}}
}
B4c141d:L4c141d:{c.instructions+=5;NFSU2_TR(0x4c141d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c141e:{NFSU2_TR(0x4c141e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1428:{NFSU2_TR(0x4c1428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1429:{NFSU2_TR(0x4c1429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c142a:{NFSU2_TR(0x4c142a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c142d:L4c142d:{c.instructions+=2;NFSU2_TR(0x4c142d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c1433:{NFSU2_TR(0x4c1433);
if(r1(R+518)){{goto L4c148e;}}
}
B4c1435:L4c1435:{c.instructions+=2;NFSU2_TR(0x4c1435);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd05fc3a3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd05fc3a3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd05fc3a3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c143b:{NFSU2_TR(0x4c143b);
if(r1(R+518)){{goto L4c1462;}}
}
B4c143d:L4c143d:{c.instructions+=2;NFSU2_TR(0x4c143d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1443:{NFSU2_TR(0x4c1443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c14ae;}}
}
B4c1445:L4c1445:{c.instructions+=2;NFSU2_TR(0x4c1445);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c144f:{NFSU2_TR(0x4c144f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c14ae;}}
}
B4c1451:L4c1451:{c.instructions+=2;NFSU2_TR(0x4c1451);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4c1457:{NFSU2_TR(0x4c1457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c145cull));
TAIL_STATIC(0x4c0020u,4c0);
}
B4c145c:L4c145c:{c.instructions+=4;NFSU2_TR(0x4c145c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c145d:{NFSU2_TR(0x4c145d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c145e:{NFSU2_TR(0x4c145e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c145f:{NFSU2_TR(0x4c145f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1462:L4c1462:{c.instructions+=2;NFSU2_TR(0x4c1462);
w4(R+4,u32(0x8635bcull));
}
B4c1467:{NFSU2_TR(0x4c1467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c146cull));
TAIL_STATIC(0x5112a0u,511);
}
B4c146c:L4c146c:{c.instructions+=5;NFSU2_TR(0x4c146c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c146f:{NFSU2_TR(0x4c146f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1472:{NFSU2_TR(0x4c1472);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1473:{NFSU2_TR(0x4c1473);
w4(R+4,u32(0x85ad40ull));
}
B4c1478:{NFSU2_TR(0x4c1478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c147dull));
TAIL_STATIC(0x532cf0u,532);
}
B4c147d:L4c147d:{c.instructions+=2;NFSU2_TR(0x4c147d);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4c1483:{NFSU2_TR(0x4c1483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1488ull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4c1488:L4c1488:{c.instructions+=4;NFSU2_TR(0x4c1488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1489:{NFSU2_TR(0x4c1489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c148a:{NFSU2_TR(0x4c148a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c148b:{NFSU2_TR(0x4c148b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c148e:L4c148e:{c.instructions+=7;NFSU2_TR(0x4c148e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1494:{NFSU2_TR(0x4c1494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c149a:{NFSU2_TR(0x4c149a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4c149b:{NFSU2_TR(0x4c149b);
__builtin_memmove((R+4),(R+28),4);
}
B4c149d:{NFSU2_TR(0x4c149d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4c149f:{NFSU2_TR(0x4c149f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c14a5:{NFSU2_TR(0x4c14a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c14ae;}}
}
B4c14a7:L4c14a7:{c.instructions+=2;NFSU2_TR(0x4c14a7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c14a8:{NFSU2_TR(0x4c14a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c14ae:L4c14ae:{c.instructions+=4;NFSU2_TR(0x4c14ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c14af:{NFSU2_TR(0x4c14af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c14b0:{NFSU2_TR(0x4c14b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c14b1:{NFSU2_TR(0x4c14b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c14c0:L4c14c0:{c.instructions+=9;NFSU2_TR(0x4c14c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14c1:{NFSU2_TR(0x4c14c1);
__builtin_memmove((R+20),(R+16),4);
}
B4c14c3:{NFSU2_TR(0x4c14c3);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4c14c8:{NFSU2_TR(0x4c14c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c14ce:{NFSU2_TR(0x4c14ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x862100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c14d4:{NFSU2_TR(0x4c14d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c14d6:{NFSU2_TR(0x4c14d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14d7:{NFSU2_TR(0x4c14d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c14da:{NFSU2_TR(0x4c14da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1519;}}
}
B4c14dc:L4c14dc:{c.instructions+=2;NFSU2_TR(0x4c14dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c14df:{NFSU2_TR(0x4c14df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c14e4ull));
TAIL_STATIC(0x5129f0u,512);
}
B4c14e4:L4c14e4:{c.instructions+=2;NFSU2_TR(0x4c14e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14e5:{NFSU2_TR(0x4c14e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c14eaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c14ea:L4c14ea:{c.instructions+=11;NFSU2_TR(0x4c14ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14eb:{NFSU2_TR(0x4c14eb);
u8 U[4];
w4(U+0,u32(0x39df9562ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14f0:{NFSU2_TR(0x4c14f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14f2:{NFSU2_TR(0x4c14f2);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14f7:{NFSU2_TR(0x4c14f7);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c14fc:{NFSU2_TR(0x4c14fc);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1501:{NFSU2_TR(0x4c1501);
u8 U[4];
w4(U+0,u32(0xbe503981ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1506:{NFSU2_TR(0x4c1506);
u8 U[4];
w4(U+0,u32(0x88579775ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c150b:{NFSU2_TR(0x4c150b);
u8 U[4];
w4(U+0,u32(0x795484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1510:{NFSU2_TR(0x4c1510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1511:{NFSU2_TR(0x4c1511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1516ull));
TAIL_STATIC(0x558790u,558);
}
B4c1516:L4c1516:{c.instructions+=1;NFSU2_TR(0x4c1516);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4c1519:L4c1519:{c.instructions+=3;NFSU2_TR(0x4c1519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c151a:{NFSU2_TR(0x4c151a);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c151f:{NFSU2_TR(0x4c151f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1524ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c1524:L4c1524:{c.instructions+=4;NFSU2_TR(0x4c1524);
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
B4c1527:{NFSU2_TR(0x4c1527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1528:{NFSU2_TR(0x4c1528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1529:{NFSU2_TR(0x4c1529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1530:L4c1530:{c.instructions+=13;NFSU2_TR(0x4c1530);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1532:{NFSU2_TR(0x4c1532);
u8 U[4];
w4(U+0,u32(0x773a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1537:{NFSU2_TR(0x4c1537);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c153d:{NFSU2_TR(0x4c153d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c153e:{NFSU2_TR(0x4c153e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1545:{NFSU2_TR(0x4c1545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4c1548:{NFSU2_TR(0x4c1548);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4c154d:{NFSU2_TR(0x4c154d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c154e:{NFSU2_TR(0x4c154e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c154f:{NFSU2_TR(0x4c154f);
__builtin_memmove((R+28),(R+4),4);
}
B4c1551:{NFSU2_TR(0x4c1551);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c1554:{NFSU2_TR(0x4c1554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1555:{NFSU2_TR(0x4c1555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c155aull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4c155a:L4c155a:{c.instructions+=3;NFSU2_TR(0x4c155a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c155b:{NFSU2_TR(0x4c155b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c155c:{NFSU2_TR(0x4c155c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1561ull));
TAIL_STATIC(0x537950u,537);
}
B4c1561:L4c1561:{c.instructions+=5;NFSU2_TR(0x4c1561);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4c1567:{NFSU2_TR(0x4c1567);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4c156d:{NFSU2_TR(0x4c156d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c1570:{NFSU2_TR(0x4c1570);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x861f14ull))));
}
B4c1576:{NFSU2_TR(0x4c1576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c157bull));
TAIL_STATIC(0x5005e0u,500);
}
B4c157b:L4c157b:{c.instructions+=7;NFSU2_TR(0x4c157b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c157f:{NFSU2_TR(0x4c157f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1583:{NFSU2_TR(0x4c1583);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1584:{NFSU2_TR(0x4c1584);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4c158a:{NFSU2_TR(0x4c158a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4c1590:{NFSU2_TR(0x4c1590);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B4c1596:{NFSU2_TR(0x4c1596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c159bull));
TAIL_STATIC(0x500670u,500);
}
B4c159b:L4c159b:{c.instructions+=4;NFSU2_TR(0x4c159b);
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
B4c159d:{NFSU2_TR(0x4c159d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c15a1:{NFSU2_TR(0x4c15a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c15a9:{NFSU2_TR(0x4c15a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c1670;}}
}
B4c15af:L4c15af:{c.instructions+=1;NFSU2_TR(0x4c15af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15b0:L4c15b0:{c.instructions+=6;NFSU2_TR(0x4c15b0);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4c15b6:{NFSU2_TR(0x4c15b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c15ba:{NFSU2_TR(0x4c15ba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4c15c0:{NFSU2_TR(0x4c15c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15c1:{NFSU2_TR(0x4c15c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B4c15c7:{NFSU2_TR(0x4c15c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c15ccull));
TAIL_STATIC(0x5006d0u,500);
}
B4c15cc:L4c15cc:{c.instructions+=4;NFSU2_TR(0x4c15cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c15cf:{NFSU2_TR(0x4c15cf);
u8 U[4];
w4(U+0,u32(0x7954b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15d4:{NFSU2_TR(0x4c15d4);
__builtin_memmove((R+12),(R+0),4);
}
B4c15d6:{NFSU2_TR(0x4c15d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c15dbull));
TAIL_STATIC(0x505450u,505);
}
B4c15db:L4c15db:{c.instructions+=3;NFSU2_TR(0x4c15db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15dc:{NFSU2_TR(0x4c15dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15dd:{NFSU2_TR(0x4c15dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c15e2ull));
TAIL_STATIC(0x537a60u,537);
}
B4c15e2:L4c15e2:{c.instructions+=4;NFSU2_TR(0x4c15e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c15e5:{NFSU2_TR(0x4c15e5);
__builtin_memmove((R+4),(R+12),4);
}
B4c15e7:{NFSU2_TR(0x4c15e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c15ed:{NFSU2_TR(0x4c15ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c15f2ull));
TAIL_STATIC(0x500180u,500);
}
B4c15f2:L4c15f2:{c.instructions+=6;NFSU2_TR(0x4c15f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15f3:{NFSU2_TR(0x4c15f3);
u8 U[4];
w4(U+0,u32(0x78f604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15f8:{NFSU2_TR(0x4c15f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c15fc:{NFSU2_TR(0x4c15fc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15fe:{NFSU2_TR(0x4c15fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c15ff:{NFSU2_TR(0x4c15ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1604ull));
TAIL_STATIC(0x50c960u,50c);
}
B4c1604:L4c1604:{c.instructions+=2;NFSU2_TR(0x4c1604);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1606:{NFSU2_TR(0x4c1606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c160bull));
TAIL_STATIC(0x575620u,575);
}
B4c160b:L4c160b:{c.instructions+=6;NFSU2_TR(0x4c160b);
__builtin_memmove((R+24),(R+0),4);
}
B4c160d:{NFSU2_TR(0x4c160d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c1610:{NFSU2_TR(0x4c1610);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1614:{NFSU2_TR(0x4c1614);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1616:{NFSU2_TR(0x4c1616);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c161e:{NFSU2_TR(0x4c161e);
if(r1(R+518)){{goto L4c1648;}}
}
B4c1620:L4c1620:{c.instructions+=3;NFSU2_TR(0x4c1620);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1624:{NFSU2_TR(0x4c1624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1625:{NFSU2_TR(0x4c1625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c162aull));
TAIL_STATIC(0x505450u,505);
}
B4c162a:L4c162a:{c.instructions+=6;NFSU2_TR(0x4c162a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c162d:{NFSU2_TR(0x4c162d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c162f:{NFSU2_TR(0x4c162f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1631:{NFSU2_TR(0x4c1631);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1632:{NFSU2_TR(0x4c1632);
__builtin_memmove((R+4),(R+24),4);
}
B4c1634:{NFSU2_TR(0x4c1634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1639ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c1639:L4c1639:{c.instructions+=4;NFSU2_TR(0x4c1639);
u8 U[4];
w4(U+0,u32(0x79547cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c163f:{NFSU2_TR(0x4c163f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1642:{NFSU2_TR(0x4c1642);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1646:{NFSU2_TR(0x4c1646);
{goto L4c164a;}
}
B4c1648:L4c1648:{c.instructions+=1;NFSU2_TR(0x4c1648);
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
B4c164a:L4c164a:{c.instructions+=5;NFSU2_TR(0x4c164a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c164c:{NFSU2_TR(0x4c164c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c164d:{NFSU2_TR(0x4c164d);
__builtin_memmove((R+4),(R+28),4);
}
B4c164f:{NFSU2_TR(0x4c164f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1657:{NFSU2_TR(0x4c1657);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c165aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c165a:L4c165a:{c.instructions+=6;NFSU2_TR(0x4c165a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c165e:{NFSU2_TR(0x4c165e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1662:{NFSU2_TR(0x4c1662);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c1663:{NFSU2_TR(0x4c1663);
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
B4c1665:{NFSU2_TR(0x4c1665);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1669:{NFSU2_TR(0x4c1669);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c15b0u);}goto L4c15b0;}}
}
B4c166f:L4c166f:{c.instructions+=1;NFSU2_TR(0x4c166f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1670:L4c1670:{c.instructions+=4;NFSU2_TR(0x4c1670);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1673:{NFSU2_TR(0x4c1673);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1676:{NFSU2_TR(0x4c1676);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1678:{NFSU2_TR(0x4c1678);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c167bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c167b:L4c167b:{c.instructions+=3;NFSU2_TR(0x4c167b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c167d:{NFSU2_TR(0x4c167d);
__builtin_memmove((R+4),(R+28),4);
}
B4c167f:{NFSU2_TR(0x4c167f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1682ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c1682:L4c1682:{c.instructions+=6;NFSU2_TR(0x4c1682);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1686:{NFSU2_TR(0x4c1686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1687:{NFSU2_TR(0x4c1687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1688:{NFSU2_TR(0x4c1688);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c168f:{NFSU2_TR(0x4c168f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1692:{NFSU2_TR(0x4c1692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c16a0:L4c16a0:{c.instructions+=8;NFSU2_TR(0x4c16a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c16a4:{NFSU2_TR(0x4c16a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c16a8:{NFSU2_TR(0x4c16a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c16ac:{NFSU2_TR(0x4c16ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c16ad:{NFSU2_TR(0x4c16ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c16ae:{NFSU2_TR(0x4c16ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c16b2:{NFSU2_TR(0x4c16b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c16b3:{NFSU2_TR(0x4c16b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c16b8ull));
TAIL_STATIC(0x4a5740u,4a5);
}
B4c16b8:L4c16b8:{c.instructions+=1;NFSU2_TR(0x4c16b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c16c0:L4c16c0:{c.instructions+=17;NFSU2_TR(0x4c16c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c16c2:{NFSU2_TR(0x4c16c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c16c3:{NFSU2_TR(0x4c16c3);
__builtin_memmove((R+24),(R+4),4);
}
B4c16c5:{NFSU2_TR(0x4c16c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c16c9:{NFSU2_TR(0x4c16c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c16ca:{NFSU2_TR(0x4c16ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4c16cc:{NFSU2_TR(0x4c16cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16cf:{NFSU2_TR(0x4c16cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16d2:{NFSU2_TR(0x4c16d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16d5:{NFSU2_TR(0x4c16d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16d8:{NFSU2_TR(0x4c16d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16db:{NFSU2_TR(0x4c16db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16de:{NFSU2_TR(0x4c16de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16e1:{NFSU2_TR(0x4c16e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16e4:{NFSU2_TR(0x4c16e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c16e7:{NFSU2_TR(0x4c16e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c16ee:{NFSU2_TR(0x4c16ee);
w4(R+28,u32(0x7f45d8ull));
}
B4c16f3:L4c16f3:{c.instructions+=2;NFSU2_TR(0x4c16f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c16f7:{NFSU2_TR(0x4c16f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c170a;}}
}
B4c16f9:L4c16f9:{c.instructions+=5;NFSU2_TR(0x4c16f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c16fb:{NFSU2_TR(0x4c16fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c16fc:{NFSU2_TR(0x4c16fc);
u8 U[4];
w4(U+0,u32(0x4c16a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1701:{NFSU2_TR(0x4c1701);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1702:{NFSU2_TR(0x4c1702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1707ull));
TAIL_STATIC(0x5794b0u,579);
}
B4c1707:L4c1707:{c.instructions+=1;NFSU2_TR(0x4c1707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c170a:L4c170a:{c.instructions+=3;NFSU2_TR(0x4c170a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4c170d:{NFSU2_TR(0x4c170d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f4604ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f4604ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f4604ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1713:{NFSU2_TR(0x4c1713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c16f3u);}goto L4c16f3;}}
}
B4c1715:L4c1715:{c.instructions+=4;NFSU2_TR(0x4c1715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1716:{NFSU2_TR(0x4c1716);
__builtin_memmove((R+0),(R+24),4);
}
B4c1718:{NFSU2_TR(0x4c1718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1719:{NFSU2_TR(0x4c1719);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1720:L4c1720:{c.instructions+=1;NFSU2_TR(0x4c1720);
TAIL_STATIC(0x4a54d0u,4a5);
}
B4c1730:L4c1730:{c.instructions+=14;NFSU2_TR(0x4c1730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1732:{NFSU2_TR(0x4c1732);
u8 U[4];
w4(U+0,u32(0x772a43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1737:{NFSU2_TR(0x4c1737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c173d:{NFSU2_TR(0x4c173d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c173e:{NFSU2_TR(0x4c173e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1745:{NFSU2_TR(0x4c1745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1746:{NFSU2_TR(0x4c1746);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c174a:{NFSU2_TR(0x4c174a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c174b:{NFSU2_TR(0x4c174b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c174c:{NFSU2_TR(0x4c174c);
__builtin_memmove((R+24),(R+4),4);
}
B4c174e:{NFSU2_TR(0x4c174e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1751:{NFSU2_TR(0x4c1751);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1755:{NFSU2_TR(0x4c1755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4c1757:{NFSU2_TR(0x4c1757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c175cull));
TAIL_STATIC(0x40c910u,40c);
}
B4c175c:L4c175c:{c.instructions+=4;NFSU2_TR(0x4c175c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c175e:{NFSU2_TR(0x4c175e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1764:{NFSU2_TR(0x4c1764);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1768:{NFSU2_TR(0x4c1768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c176dull));
TAIL_STATIC(0x40c910u,40c);
}
B4c176d:L4c176d:{c.instructions+=3;NFSU2_TR(0x4c176d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1773:{NFSU2_TR(0x4c1773);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1778:{NFSU2_TR(0x4c1778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c177dull));
TAIL_STATIC(0x40c910u,40c);
}
B4c177d:L4c177d:{c.instructions+=3;NFSU2_TR(0x4c177d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ae0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1783:{NFSU2_TR(0x4c1783);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1788:{NFSU2_TR(0x4c1788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c178dull));
TAIL_STATIC(0x40c910u,40c);
}
B4c178d:L4c178d:{c.instructions+=3;NFSU2_TR(0x4c178d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1793:{NFSU2_TR(0x4c1793);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1798:{NFSU2_TR(0x4c1798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c179dull));
TAIL_STATIC(0x40c910u,40c);
}
B4c179d:L4c179d:{c.instructions+=15;NFSU2_TR(0x4c179d);
w4(R+0,u32(0x1ull));
}
B4c17a2:{NFSU2_TR(0x4c17a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c17a3:{NFSU2_TR(0x4c17a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c17a4:{NFSU2_TR(0x4c17a4);
w4(R+4,u32(0x8a3288ull));
}
B4c17a9:{NFSU2_TR(0x4c17a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c17ae:{NFSU2_TR(0x4c17ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17b4:{NFSU2_TR(0x4c17b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17ba:{NFSU2_TR(0x4c17ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17c0:{NFSU2_TR(0x4c17c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17c6:{NFSU2_TR(0x4c17c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17cc:{NFSU2_TR(0x4c17cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17d2:{NFSU2_TR(0x4c17d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cd8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c17d8:{NFSU2_TR(0x4c17d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17de:{NFSU2_TR(0x4c17de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ce0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c17e4:{NFSU2_TR(0x4c17e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c17e9ull));
TAIL_STATIC(0x610700u,610);
}
B4c17e9:L4c17e9:{c.instructions+=9;NFSU2_TR(0x4c17e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c17ed:{NFSU2_TR(0x4c17ed);
__builtin_memmove((R+0),(R+24),4);
}
B4c17ef:{NFSU2_TR(0x4c17ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c17f0:{NFSU2_TR(0x4c17f0);
__builtin_memmove(gp(0x836408),(R+12),4);
}
B4c17f6:{NFSU2_TR(0x4c17f6);
__builtin_memmove(gp(0x83640c),(R+12),1);
}
B4c17fc:{NFSU2_TR(0x4c17fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c17fd:{NFSU2_TR(0x4c17fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1804:{NFSU2_TR(0x4c1804);
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
B4c1807:{NFSU2_TR(0x4c1807);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1810:L4c1810:{c.instructions+=2;NFSU2_TR(0x4c1810);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1815:{NFSU2_TR(0x4c1815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c181aull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c181a:L4c181a:{c.instructions+=7;NFSU2_TR(0x4c181a);
__builtin_memmove((R+4),(R+0),4);
}
B4c181c:{NFSU2_TR(0x4c181c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c181f:{NFSU2_TR(0x4c181f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4c1823:{NFSU2_TR(0x4c1823);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1826:{NFSU2_TR(0x4c1826);
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
B4c1828:{NFSU2_TR(0x4c1828);
w4(R+0,u32(0x1ull));
}
B4c182d:{NFSU2_TR(0x4c182d);
if(r1(R+518)){{goto L4c185c;}}
}
B4c182f:L4c182f:{c.instructions+=3;NFSU2_TR(0x4c182f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1832:{NFSU2_TR(0x4c1832);
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
B4c1834:{NFSU2_TR(0x4c1834);
if(r1(R+518)){{goto L4c185c;}}
}
B4c1836:L4c1836:{c.instructions+=9;NFSU2_TR(0x4c1836);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1839:{NFSU2_TR(0x4c1839);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B4c183f:{NFSU2_TR(0x4c183f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c1845:{NFSU2_TR(0x4c1845);
u8 U[16];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4c184c:{NFSU2_TR(0x4c184c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4c184e:{NFSU2_TR(0x4c184e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1852:{NFSU2_TR(0x4c1852);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1853:{NFSU2_TR(0x4c1853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1854:{NFSU2_TR(0x4c1854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1859ull));
TAIL_STATIC(0x433cd0u,433);
}
B4c1859:L4c1859:{c.instructions+=1;NFSU2_TR(0x4c1859);
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
B4c185c:L4c185c:{c.instructions+=1;NFSU2_TR(0x4c185c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1860:L4c1860:{c.instructions+=3;NFSU2_TR(0x4c1860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1861:{NFSU2_TR(0x4c1861);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1866:{NFSU2_TR(0x4c1866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c186bull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c186b:L4c186b:{c.instructions+=4;NFSU2_TR(0x4c186b);
__builtin_memmove((R+24),(R+0),4);
}
B4c186d:{NFSU2_TR(0x4c186d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1870:{NFSU2_TR(0x4c1870);
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
B4c1872:{NFSU2_TR(0x4c1872);
if(r1(R+518)){{goto L4c18aa;}}
}
B4c1874:L4c1874:{c.instructions+=6;NFSU2_TR(0x4c1874);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1875:{NFSU2_TR(0x4c1875);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c1879:{NFSU2_TR(0x4c1879);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c187b:{NFSU2_TR(0x4c187b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c187c:{NFSU2_TR(0x4c187c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1880:{NFSU2_TR(0x4c1880);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c188e;}}
}
B4c1882:L4c1882:{c.instructions+=3;NFSU2_TR(0x4c1882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1883:{NFSU2_TR(0x4c1883);
__builtin_memmove((R+4),(R+24),4);
}
B4c1885:{NFSU2_TR(0x4c1885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c188aull));
TAIL_STATIC(0x4a5b20u,4a5);
}
B4c188a:L4c188a:{c.instructions+=2;NFSU2_TR(0x4c188a);
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
B4c188c:{NFSU2_TR(0x4c188c);
if(r1(R+518)){{goto L4c18a8;}}
}
B4c188e:L4c188e:{c.instructions+=9;NFSU2_TR(0x4c188e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1892:{NFSU2_TR(0x4c1892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1895:{NFSU2_TR(0x4c1895);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4c1899:{NFSU2_TR(0x4c1899);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c189a:{NFSU2_TR(0x4c189a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c189d:{NFSU2_TR(0x4c189d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c189e:{NFSU2_TR(0x4c189e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c189f:{NFSU2_TR(0x4c189f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c18a0:{NFSU2_TR(0x4c18a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c18a5ull));
TAIL_STATIC(0x61f820u,61f);
}
B4c18a5:L4c18a5:{c.instructions+=1;NFSU2_TR(0x4c18a5);
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
B4c18a8:L4c18a8:{c.instructions+=2;NFSU2_TR(0x4c18a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c18a9:{NFSU2_TR(0x4c18a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c18aa:L4c18aa:{c.instructions+=2;NFSU2_TR(0x4c18aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c18ab:{NFSU2_TR(0x4c18ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c18b0:L4c18b0:{c.instructions+=2;NFSU2_TR(0x4c18b0);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c18b5:{NFSU2_TR(0x4c18b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c18baull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c18ba:L4c18ba:{c.instructions+=3;NFSU2_TR(0x4c18ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c18bd:{NFSU2_TR(0x4c18bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c18bf:{NFSU2_TR(0x4c18bf);
if(r1(R+518)){{goto L4c190e;}}
}
B4c18c1:L4c18c1:{c.instructions+=2;NFSU2_TR(0x4c18c1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c18c6:{NFSU2_TR(0x4c18c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c18cbull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c18cb:L4c18cb:{c.instructions+=7;NFSU2_TR(0x4c18cb);
__builtin_memmove((R+4),(R+0),4);
}
B4c18cd:{NFSU2_TR(0x4c18cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c18d0:{NFSU2_TR(0x4c18d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4c18d4:{NFSU2_TR(0x4c18d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c18d7:{NFSU2_TR(0x4c18d7);
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
B4c18d9:{NFSU2_TR(0x4c18d9);
w4(R+0,u32(0x1ull));
}
B4c18de:{NFSU2_TR(0x4c18de);
if(r1(R+518)){{goto L4c1911;}}
}
B4c18e0:L4c18e0:{c.instructions+=3;NFSU2_TR(0x4c18e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c18e3:{NFSU2_TR(0x4c18e3);
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
B4c18e5:{NFSU2_TR(0x4c18e5);
if(r1(R+518)){{goto L4c1911;}}
}
B4c18e7:L4c18e7:{c.instructions+=9;NFSU2_TR(0x4c18e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c18ea:{NFSU2_TR(0x4c18ea);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B4c18f0:{NFSU2_TR(0x4c18f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c18f6:{NFSU2_TR(0x4c18f6);
u8 U[16];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4c18fd:{NFSU2_TR(0x4c18fd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4c18ff:{NFSU2_TR(0x4c18ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1903:{NFSU2_TR(0x4c1903);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1904:{NFSU2_TR(0x4c1904);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1905:{NFSU2_TR(0x4c1905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c190aull));
TAIL_STATIC(0x433cd0u,433);
}
B4c190a:L4c190a:{c.instructions+=2;NFSU2_TR(0x4c190a);
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
B4c190d:{NFSU2_TR(0x4c190d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c190e:L4c190e:{c.instructions+=1;NFSU2_TR(0x4c190e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1911:L4c1911:{c.instructions+=1;NFSU2_TR(0x4c1911);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1920:L4c1920:{c.instructions+=2;NFSU2_TR(0x4c1920);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1925:{NFSU2_TR(0x4c1925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c192aull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c192a:L4c192a:{c.instructions+=3;NFSU2_TR(0x4c192a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c192d:{NFSU2_TR(0x4c192d);
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
B4c192f:{NFSU2_TR(0x4c192f);
if(r1(R+518)){{goto L4c195b;}}
}
B4c1931:L4c1931:{c.instructions+=2;NFSU2_TR(0x4c1931);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1936:{NFSU2_TR(0x4c1936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c193bull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c193b:L4c193b:{c.instructions+=11;NFSU2_TR(0x4c193b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c193f:{NFSU2_TR(0x4c193f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1943:{NFSU2_TR(0x4c1943);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1946:{NFSU2_TR(0x4c1946);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1948:{NFSU2_TR(0x4c1948);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1949:{NFSU2_TR(0x4c1949);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c194d:{NFSU2_TR(0x4c194d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c194e:{NFSU2_TR(0x4c194e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1951:{NFSU2_TR(0x4c1951);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1952:{NFSU2_TR(0x4c1952);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4c1956:{NFSU2_TR(0x4c1956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c195bull));
TAIL_STATIC(0x61fba0u,61f);
}
B4c195b:L4c195b:{c.instructions+=1;NFSU2_TR(0x4c195b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1960:L4c1960:{c.instructions+=24;NFSU2_TR(0x4c1960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1962:{NFSU2_TR(0x4c1962);
u8 U[4];
w4(U+0,u32(0x773aa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1967:{NFSU2_TR(0x4c1967);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c196d:{NFSU2_TR(0x4c196d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c196e:{NFSU2_TR(0x4c196e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1975:{NFSU2_TR(0x4c1975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1976:{NFSU2_TR(0x4c1976);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1977:{NFSU2_TR(0x4c1977);
__builtin_memmove((R+24),(R+4),4);
}
B4c1979:{NFSU2_TR(0x4c1979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c197a:{NFSU2_TR(0x4c197a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c197c:{NFSU2_TR(0x4c197c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1980:{NFSU2_TR(0x4c1980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1983:{NFSU2_TR(0x4c1983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1986:{NFSU2_TR(0x4c1986);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c198a:{NFSU2_TR(0x4c198a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c198d:{NFSU2_TR(0x4c198d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1990:{NFSU2_TR(0x4c1990);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1995:{NFSU2_TR(0x4c1995);
u8 U[4];
w4(U+0,u32(0x4afaf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c199a:{NFSU2_TR(0x4c199a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c199c:{NFSU2_TR(0x4c199c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c199e:{NFSU2_TR(0x4c199e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c19a1:{NFSU2_TR(0x4c19a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c19a2:{NFSU2_TR(0x4c19a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c19a7:{NFSU2_TR(0x4c19a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c19acull));
TAIL_STATIC(0x75c461u,75c);
}
B4c19ac:L4c19ac:{c.instructions+=11;NFSU2_TR(0x4c19ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c19b0:{NFSU2_TR(0x4c19b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19b6:{NFSU2_TR(0x4c19b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19bc:{NFSU2_TR(0x4c19bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19c2:{NFSU2_TR(0x4c19c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19c8:{NFSU2_TR(0x4c19c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c19c9:{NFSU2_TR(0x4c19c9);
__builtin_memmove((R+0),(R+24),4);
}
B4c19cb:{NFSU2_TR(0x4c19cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c19cc:{NFSU2_TR(0x4c19cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19d3:{NFSU2_TR(0x4c19d3);
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
B4c19d6:{NFSU2_TR(0x4c19d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c19e0:L4c19e0:{c.instructions+=12;NFSU2_TR(0x4c19e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c19e2:{NFSU2_TR(0x4c19e2);
u8 U[4];
w4(U+0,u32(0x773ae7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c19e7:{NFSU2_TR(0x4c19e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c19ed:{NFSU2_TR(0x4c19ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c19ee:{NFSU2_TR(0x4c19ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19f5:{NFSU2_TR(0x4c19f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c19f6:{NFSU2_TR(0x4c19f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c19f7:{NFSU2_TR(0x4c19f7);
__builtin_memmove((R+24),(R+4),4);
}
B4c19f9:{NFSU2_TR(0x4c19f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c19fd:{NFSU2_TR(0x4c19fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1a03:{NFSU2_TR(0x4c1a03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1a0b:{NFSU2_TR(0x4c1a0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1a10ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1a10:L4c1a10:{c.instructions+=3;NFSU2_TR(0x4c1a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1a13:{NFSU2_TR(0x4c1a13);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1a18:{NFSU2_TR(0x4c1a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1a1dull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1a1d:L4c1a1d:{c.instructions+=7;NFSU2_TR(0x4c1a1d);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a22:{NFSU2_TR(0x4c1a22);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a24:{NFSU2_TR(0x4c1a24);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a26:{NFSU2_TR(0x4c1a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c1a29:{NFSU2_TR(0x4c1a29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a2a:{NFSU2_TR(0x4c1a2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1a2f:{NFSU2_TR(0x4c1a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1a34ull));
TAIL_STATIC(0x75c401u,75c);
}
B4c1a34:L4c1a34:{c.instructions+=3;NFSU2_TR(0x4c1a34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1a37:{NFSU2_TR(0x4c1a37);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1a3c:{NFSU2_TR(0x4c1a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1a41ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1a41:L4c1a41:{c.instructions+=3;NFSU2_TR(0x4c1a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1a44:{NFSU2_TR(0x4c1a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1a4c:{NFSU2_TR(0x4c1a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1a51ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1a51:L4c1a51:{c.instructions+=5;NFSU2_TR(0x4c1a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1a55:{NFSU2_TR(0x4c1a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1a56:{NFSU2_TR(0x4c1a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1a5d:{NFSU2_TR(0x4c1a5d);
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
B4c1a60:{NFSU2_TR(0x4c1a60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1a70:L4c1a70:{c.instructions+=14;NFSU2_TR(0x4c1a70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a72:{NFSU2_TR(0x4c1a72);
u8 U[4];
w4(U+0,u32(0x773b21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a77:{NFSU2_TR(0x4c1a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1a7d:{NFSU2_TR(0x4c1a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a7e:{NFSU2_TR(0x4c1a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1a85:{NFSU2_TR(0x4c1a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a86:{NFSU2_TR(0x4c1a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1a87:{NFSU2_TR(0x4c1a87);
__builtin_memmove((R+24),(R+4),4);
}
B4c1a89:{NFSU2_TR(0x4c1a89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1a8d:{NFSU2_TR(0x4c1a8d);
u8 U[4];
w4(U+0,u32(0x7954c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c1a93:{NFSU2_TR(0x4c1a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1a99:{NFSU2_TR(0x4c1a99);
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
B4c1a9b:{NFSU2_TR(0x4c1a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1aa3:{NFSU2_TR(0x4c1aa3);
if(r1(R+518)){{goto L4c1aab;}}
}
B4c1aa5:L4c1aa5:{c.instructions+=3;NFSU2_TR(0x4c1aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c1aa7:{NFSU2_TR(0x4c1aa7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1aa9:{NFSU2_TR(0x4c1aa9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1aabull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4c1aab:L4c1aab:{c.instructions+=4;NFSU2_TR(0x4c1aab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1aac:{NFSU2_TR(0x4c1aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1aaf:{NFSU2_TR(0x4c1aaf);
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
B4c1ab1:{NFSU2_TR(0x4c1ab1);
if(r1(R+518)){{goto L4c1ac3;}}
}
B4c1ab3:L4c1ab3:{c.instructions+=2;NFSU2_TR(0x4c1ab3);
__builtin_memmove((R+4),(R+28),4);
}
B4c1ab5:{NFSU2_TR(0x4c1ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1abaull));
TAIL_STATIC(0x6380e0u,638);
}
B4c1aba:L4c1aba:{c.instructions+=2;NFSU2_TR(0x4c1aba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1abb:{NFSU2_TR(0x4c1abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1ac0ull));
TAIL_STATIC(0x575630u,575);
}
B4c1ac0:L4c1ac0:{c.instructions+=1;NFSU2_TR(0x4c1ac0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1ac3:L4c1ac3:{c.instructions+=3;NFSU2_TR(0x4c1ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1ac6:{NFSU2_TR(0x4c1ac6);
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
B4c1ac8:{NFSU2_TR(0x4c1ac8);
if(r1(R+518)){{goto L4c1ada;}}
}
B4c1aca:L4c1aca:{c.instructions+=2;NFSU2_TR(0x4c1aca);
__builtin_memmove((R+4),(R+28),4);
}
B4c1acc:{NFSU2_TR(0x4c1acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1ad1ull));
TAIL_STATIC(0x6380e0u,638);
}
B4c1ad1:L4c1ad1:{c.instructions+=2;NFSU2_TR(0x4c1ad1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ad2:{NFSU2_TR(0x4c1ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1ad7ull));
TAIL_STATIC(0x575630u,575);
}
B4c1ad7:L4c1ad7:{c.instructions+=1;NFSU2_TR(0x4c1ad7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1ada:L4c1ada:{c.instructions+=3;NFSU2_TR(0x4c1ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1ae0:{NFSU2_TR(0x4c1ae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1ae2:{NFSU2_TR(0x4c1ae2);
if(r1(R+518)){{goto L4c1af4;}}
}
B4c1ae4:L4c1ae4:{c.instructions+=2;NFSU2_TR(0x4c1ae4);
__builtin_memmove((R+4),(R+28),4);
}
B4c1ae6:{NFSU2_TR(0x4c1ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1aebull));
TAIL_STATIC(0x4a5a10u,4a5);
}
B4c1aeb:L4c1aeb:{c.instructions+=2;NFSU2_TR(0x4c1aeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1aec:{NFSU2_TR(0x4c1aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1af1ull));
TAIL_STATIC(0x575630u,575);
}
B4c1af1:L4c1af1:{c.instructions+=1;NFSU2_TR(0x4c1af1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1af4:L4c1af4:{c.instructions+=2;NFSU2_TR(0x4c1af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1af7:{NFSU2_TR(0x4c1af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1afcull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1afc:L4c1afc:{c.instructions+=2;NFSU2_TR(0x4c1afc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b02:{NFSU2_TR(0x4c1b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b07ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1b07:L4c1b07:{c.instructions+=2;NFSU2_TR(0x4c1b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b0d:{NFSU2_TR(0x4c1b0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b12ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1b12:L4c1b12:{c.instructions+=2;NFSU2_TR(0x4c1b12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b18:{NFSU2_TR(0x4c1b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b1dull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1b1d:L4c1b1d:{c.instructions+=2;NFSU2_TR(0x4c1b1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b23:{NFSU2_TR(0x4c1b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b28ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1b28:L4c1b28:{c.instructions+=2;NFSU2_TR(0x4c1b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b2e:{NFSU2_TR(0x4c1b2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b33ull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1b33:L4c1b33:{c.instructions+=2;NFSU2_TR(0x4c1b33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b39:{NFSU2_TR(0x4c1b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b3eull));
TAIL_STATIC(0x4903b0u,490);
}
B4c1b3e:L4c1b3e:{c.instructions+=5;NFSU2_TR(0x4c1b3e);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4c1b44:{NFSU2_TR(0x4c1b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1b47:{NFSU2_TR(0x4c1b47);
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
B4c1b49:{NFSU2_TR(0x4c1b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1b4a:{NFSU2_TR(0x4c1b4a);
if(r1(R+518)){{goto L4c1b51;}}
}
B4c1b4c:L4c1b4c:{c.instructions+=1;NFSU2_TR(0x4c1b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b51ull));
TAIL_STATIC(0x4022c0u,402);
}
B4c1b51:L4c1b51:{c.instructions+=2;NFSU2_TR(0x4c1b51);
w4(R+4,u32(0x8357e0ull));
}
B4c1b56:{NFSU2_TR(0x4c1b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b5bull));
TAIL_STATIC(0x491e10u,491);
}
B4c1b5b:L4c1b5b:{c.instructions+=3;NFSU2_TR(0x4c1b5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b61:{NFSU2_TR(0x4c1b61);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1b66:{NFSU2_TR(0x4c1b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b6bull));
TAIL_STATIC(0x4a54d0u,4a5);
}
B4c1b6b:L4c1b6b:{c.instructions+=3;NFSU2_TR(0x4c1b6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1b6e:{NFSU2_TR(0x4c1b6e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1b73:{NFSU2_TR(0x4c1b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c19e0u);}goto L4c19e0;}
}
B4c1b78:L4c1b78:{c.instructions+=3;NFSU2_TR(0x4c1b78);
__builtin_memmove((R+4),(R+24),4);
}
B4c1b7a:{NFSU2_TR(0x4c1b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1b82:{NFSU2_TR(0x4c1b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1b87ull));
TAIL_STATIC(0x510d40u,510);
}
B4c1b87:L4c1b87:{c.instructions+=5;NFSU2_TR(0x4c1b87);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1b8b:{NFSU2_TR(0x4c1b8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1b8c:{NFSU2_TR(0x4c1b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1b93:{NFSU2_TR(0x4c1b93);
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
B4c1b96:{NFSU2_TR(0x4c1b96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1ba0:L4c1ba0:{c.instructions+=12;NFSU2_TR(0x4c1ba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ba1:{NFSU2_TR(0x4c1ba1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ba2:{NFSU2_TR(0x4c1ba2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ba3:{NFSU2_TR(0x4c1ba3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ba4:{NFSU2_TR(0x4c1ba4);
__builtin_memmove((R+24),(R+4),4);
}
B4c1ba6:{NFSU2_TR(0x4c1ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1bac:{NFSU2_TR(0x4c1bac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4c1bb2:{NFSU2_TR(0x4c1bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83ac34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1bb8:{NFSU2_TR(0x4c1bb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1bb9:{NFSU2_TR(0x4c1bb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1bba:{NFSU2_TR(0x4c1bba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1bbc:{NFSU2_TR(0x4c1bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1bc1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c1bc1:L4c1bc1:{c.instructions+=6;NFSU2_TR(0x4c1bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1bc7:{NFSU2_TR(0x4c1bc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1bca:{NFSU2_TR(0x4c1bca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1bcb:{NFSU2_TR(0x4c1bcb);
u8 U[4];
w4(U+0,u32(0x790980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1bd0:{NFSU2_TR(0x4c1bd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1bd1:{NFSU2_TR(0x4c1bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1bd6ull));
TAIL_STATIC(0x537be0u,537);
}
B4c1bd6:L4c1bd6:{c.instructions+=5;NFSU2_TR(0x4c1bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1bdc:{NFSU2_TR(0x4c1bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1be2:{NFSU2_TR(0x4c1be2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c1be5:{NFSU2_TR(0x4c1be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1be7:{NFSU2_TR(0x4c1be7);
if(r1(R+518)){{goto L4c1bf1;}}
}
B4c1be9:L4c1be9:{c.instructions+=2;NFSU2_TR(0x4c1be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1bef:{NFSU2_TR(0x4c1bef);
{goto L4c1c14;}
}
B4c1bf1:L4c1bf1:{c.instructions+=3;NFSU2_TR(0x4c1bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1bf7:{NFSU2_TR(0x4c1bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1bf9:{NFSU2_TR(0x4c1bf9);
if(r1(R+518)){{goto L4c1c03;}}
}
B4c1bfb:L4c1bfb:{c.instructions+=2;NFSU2_TR(0x4c1bfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1c01:{NFSU2_TR(0x4c1c01);
{goto L4c1c14;}
}
B4c1c03:L4c1c03:{c.instructions+=3;NFSU2_TR(0x4c1c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1c09:{NFSU2_TR(0x4c1c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1c0b:{NFSU2_TR(0x4c1c0b);
if(r1(R+518)){{goto L4c1c12;}}
}
B4c1c0d:L4c1c0d:{c.instructions+=2;NFSU2_TR(0x4c1c0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1c10:{NFSU2_TR(0x4c1c10);
{goto L4c1c14;}
}
B4c1c12:L4c1c12:{c.instructions+=1;NFSU2_TR(0x4c1c12);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c1c14:L4c1c14:{c.instructions+=3;NFSU2_TR(0x4c1c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1c1a:{NFSU2_TR(0x4c1c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1c1c:{NFSU2_TR(0x4c1c1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1d14;}}
}
B4c1c22:L4c1c22:{c.instructions+=2;NFSU2_TR(0x4c1c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1c24:{NFSU2_TR(0x4c1c24);
if(r1(R+518)){{goto L4c1d14;}}
}
B4c1c2a:L4c1c2a:{c.instructions+=4;NFSU2_TR(0x4c1c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1c2d:{NFSU2_TR(0x4c1c2d);
u8 U[4];
w4(U+0,u32(0x3b7f8aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1c32:{NFSU2_TR(0x4c1c32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1c33:{NFSU2_TR(0x4c1c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c38ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c1c38:L4c1c38:{c.instructions+=2;NFSU2_TR(0x4c1c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1c39:{NFSU2_TR(0x4c1c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c3eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c1c3e:L4c1c3e:{c.instructions+=5;NFSU2_TR(0x4c1c3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B4c1c41:{NFSU2_TR(0x4c1c41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c1c44:{NFSU2_TR(0x4c1c44);
__builtin_memmove((R+4),(R+28),4);
}
B4c1c46:{NFSU2_TR(0x4c1c46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1c4c:{NFSU2_TR(0x4c1c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c51ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B4c1c51:L4c1c51:{c.instructions+=4;NFSU2_TR(0x4c1c51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1c52:{NFSU2_TR(0x4c1c52);
__builtin_memmove((R+4),(R+12),4);
}
B4c1c54:{NFSU2_TR(0x4c1c54);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1c57:{NFSU2_TR(0x4c1c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c5cull));
TAIL_STATIC(0x4a5920u,4a5);
}
B4c1c5c:L4c1c5c:{c.instructions+=3;NFSU2_TR(0x4c1c5c);
__builtin_memmove((R+4),(R+28),4);
}
B4c1c5e:{NFSU2_TR(0x4c1c5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1c64:{NFSU2_TR(0x4c1c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c69ull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B4c1c69:L4c1c69:{c.instructions+=4;NFSU2_TR(0x4c1c69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1c6a:{NFSU2_TR(0x4c1c6a);
__builtin_memmove((R+4),(R+20),4);
}
B4c1c6c:{NFSU2_TR(0x4c1c6c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1c6f:{NFSU2_TR(0x4c1c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c74ull));
TAIL_STATIC(0x4a5920u,4a5);
}
B4c1c74:L4c1c74:{c.instructions+=4;NFSU2_TR(0x4c1c74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c1c7a:{NFSU2_TR(0x4c1c7a);
__builtin_memmove((R+4),(R+28),4);
}
B4c1c7c:{NFSU2_TR(0x4c1c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1c80:{NFSU2_TR(0x4c1c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c85ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B4c1c85:L4c1c85:{c.instructions+=4;NFSU2_TR(0x4c1c85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1c86:{NFSU2_TR(0x4c1c86);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1c8a:{NFSU2_TR(0x4c1c8a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1c8d:{NFSU2_TR(0x4c1c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1c92ull));
TAIL_STATIC(0x4a5920u,4a5);
}
B4c1c92:L4c1c92:{c.instructions+=3;NFSU2_TR(0x4c1c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1c98:{NFSU2_TR(0x4c1c98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1c9a:{NFSU2_TR(0x4c1c9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1cda;}}
}
B4c1c9c:L4c1c9c:{c.instructions+=2;NFSU2_TR(0x4c1c9c);
__builtin_memmove((R+4),(R+28),4);
}
B4c1c9e:{NFSU2_TR(0x4c1c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1ca3ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B4c1ca3:L4c1ca3:{c.instructions+=4;NFSU2_TR(0x4c1ca3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ca4:{NFSU2_TR(0x4c1ca4);
__builtin_memmove((R+4),(R+12),4);
}
B4c1ca6:{NFSU2_TR(0x4c1ca6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1ca9:{NFSU2_TR(0x4c1ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1caeull));
TAIL_STATIC(0x4a59b0u,4a5);
}
B4c1cae:L4c1cae:{c.instructions+=2;NFSU2_TR(0x4c1cae);
__builtin_memmove((R+4),(R+28),4);
}
B4c1cb0:{NFSU2_TR(0x4c1cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1cb5ull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B4c1cb5:L4c1cb5:{c.instructions+=4;NFSU2_TR(0x4c1cb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1cb6:{NFSU2_TR(0x4c1cb6);
__builtin_memmove((R+4),(R+20),4);
}
B4c1cb8:{NFSU2_TR(0x4c1cb8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1cbb:{NFSU2_TR(0x4c1cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1cc0ull));
TAIL_STATIC(0x4a59b0u,4a5);
}
B4c1cc0:L4c1cc0:{c.instructions+=2;NFSU2_TR(0x4c1cc0);
__builtin_memmove((R+4),(R+28),4);
}
B4c1cc2:{NFSU2_TR(0x4c1cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1cc7ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B4c1cc7:L4c1cc7:{c.instructions+=4;NFSU2_TR(0x4c1cc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1cc8:{NFSU2_TR(0x4c1cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1ccc:{NFSU2_TR(0x4c1ccc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1ccf:{NFSU2_TR(0x4c1ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1cd4ull));
TAIL_STATIC(0x4a59b0u,4a5);
}
B4c1cd4:L4c1cd4:{c.instructions+=6;NFSU2_TR(0x4c1cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1cd5:{NFSU2_TR(0x4c1cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1cd6:{NFSU2_TR(0x4c1cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1cd7:{NFSU2_TR(0x4c1cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1cd8:{NFSU2_TR(0x4c1cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1cd9:{NFSU2_TR(0x4c1cd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1cda:L4c1cda:{c.instructions+=3;NFSU2_TR(0x4c1cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c1cdd:{NFSU2_TR(0x4c1cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1cdf:{NFSU2_TR(0x4c1cdf);
if(r1(R+518)){{goto L4c1cea;}}
}
B4c1ce1:L4c1ce1:{c.instructions+=2;NFSU2_TR(0x4c1ce1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ce2:{NFSU2_TR(0x4c1ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1ce7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c1ce7:L4c1ce7:{c.instructions+=1;NFSU2_TR(0x4c1ce7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1cea:L4c1cea:{c.instructions+=3;NFSU2_TR(0x4c1cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c1ced:{NFSU2_TR(0x4c1ced);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c1cef:{NFSU2_TR(0x4c1cef);
if(r1(R+518)){{goto L4c1cfa;}}
}
B4c1cf1:L4c1cf1:{c.instructions+=2;NFSU2_TR(0x4c1cf1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1cf2:{NFSU2_TR(0x4c1cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1cf7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c1cf7:L4c1cf7:{c.instructions+=1;NFSU2_TR(0x4c1cf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1cfa:L4c1cfa:{c.instructions+=4;NFSU2_TR(0x4c1cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1cfe:{NFSU2_TR(0x4c1cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1d01:{NFSU2_TR(0x4c1d01);
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
B4c1d03:{NFSU2_TR(0x4c1d03);
if(r1(R+518)){{goto L4c1d2b;}}
}
B4c1d05:L4c1d05:{c.instructions+=2;NFSU2_TR(0x4c1d05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d06:{NFSU2_TR(0x4c1d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1d0bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c1d0b:L4c1d0b:{c.instructions+=7;NFSU2_TR(0x4c1d0b);
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
B4c1d0e:{NFSU2_TR(0x4c1d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1d0f:{NFSU2_TR(0x4c1d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1d10:{NFSU2_TR(0x4c1d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1d11:{NFSU2_TR(0x4c1d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1d12:{NFSU2_TR(0x4c1d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1d13:{NFSU2_TR(0x4c1d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1d14:L4c1d14:{c.instructions+=4;NFSU2_TR(0x4c1d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c1d17:{NFSU2_TR(0x4c1d17);
u8 U[4];
w4(U+0,u32(0x3b7f8aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d1c:{NFSU2_TR(0x4c1d1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d1d:{NFSU2_TR(0x4c1d1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1d22ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c1d22:L4c1d22:{c.instructions+=2;NFSU2_TR(0x4c1d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d23:{NFSU2_TR(0x4c1d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1d28ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c1d28:L4c1d28:{c.instructions+=1;NFSU2_TR(0x4c1d28);
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
B4c1d2b:L4c1d2b:{c.instructions+=6;NFSU2_TR(0x4c1d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1d2c:{NFSU2_TR(0x4c1d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1d2d:{NFSU2_TR(0x4c1d2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1d2e:{NFSU2_TR(0x4c1d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1d2f:{NFSU2_TR(0x4c1d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1d30:{NFSU2_TR(0x4c1d30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1d40:L4c1d40:{c.instructions+=18;NFSU2_TR(0x4c1d40);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c1d45:{NFSU2_TR(0x4c1d45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d46:{NFSU2_TR(0x4c1d46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d47:{NFSU2_TR(0x4c1d47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d48:{NFSU2_TR(0x4c1d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1d4c:{NFSU2_TR(0x4c1d4c);
__builtin_memmove((R+24),(R+4),4);
}
B4c1d4e:{NFSU2_TR(0x4c1d4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1d52:{NFSU2_TR(0x4c1d52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d53:{NFSU2_TR(0x4c1d53);
__builtin_memmove(gp(0x837aa0),(R+0),4);
}
B4c1d58:{NFSU2_TR(0x4c1d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1d5e:{NFSU2_TR(0x4c1d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1d64:{NFSU2_TR(0x4c1d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1d6a:{NFSU2_TR(0x4c1d6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d6b:{NFSU2_TR(0x4c1d6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d6c:{NFSU2_TR(0x4c1d6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d6d:{NFSU2_TR(0x4c1d6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1d6e:{NFSU2_TR(0x4c1d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c1d74:{NFSU2_TR(0x4c1d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1d79ull));
TAIL_STATIC(0x4a55e0u,4a5);
}
B4c1d79:L4c1d79:{c.instructions+=9;NFSU2_TR(0x4c1d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1d7f:{NFSU2_TR(0x4c1d7f);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c1d83:{NFSU2_TR(0x4c1d83);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c1d85:{NFSU2_TR(0x4c1d85);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c1d87:{NFSU2_TR(0x4c1d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1d8d:{NFSU2_TR(0x4c1d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1d93:{NFSU2_TR(0x4c1d93);
{u32 ea_=u32(r4(R+8)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c1d99:{NFSU2_TR(0x4c1d99);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1d9f:{NFSU2_TR(0x4c1d9f);
if(r1(R+518)){{goto L4c1dce;}}
}
B4c1da1:L4c1da1:{c.instructions+=5;NFSU2_TR(0x4c1da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1da7:{NFSU2_TR(0x4c1da7);
u8 U[16];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4c1dae:{NFSU2_TR(0x4c1dae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1daf:{NFSU2_TR(0x4c1daf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1db1:{NFSU2_TR(0x4c1db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1db6ull));
TAIL_STATIC(0x51de30u,51d);
}
B4c1db6:L4c1db6:{c.instructions+=7;NFSU2_TR(0x4c1db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1dbc:{NFSU2_TR(0x4c1dbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c1dbf:{NFSU2_TR(0x4c1dbf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c1dc0:{NFSU2_TR(0x4c1dc0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4c1dc1:{NFSU2_TR(0x4c1dc1);
w4(R+4,u32(0x3ull));
}
B4c1dc6:{NFSU2_TR(0x4c1dc6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4c1dc6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4c1dc6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4c1dc8:{NFSU2_TR(0x4c1dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1dce:L4c1dce:{c.instructions+=8;NFSU2_TR(0x4c1dce);
{u32 ea_=u32(r4(R+24)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c1dd4:{NFSU2_TR(0x4c1dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1dda:{NFSU2_TR(0x4c1dda);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c1de0:{NFSU2_TR(0x4c1de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1de6:{NFSU2_TR(0x4c1de6);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c1dec:{NFSU2_TR(0x4c1dec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1dee:{NFSU2_TR(0x4c1dee);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1df1:{NFSU2_TR(0x4c1df1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1e13;}}
}
B4c1df3:L4c1df3:{c.instructions+=1;NFSU2_TR(0x4c1df3);
{goto L4c1e00;}
}
B4c1e00:L4c1e00:{c.instructions+=5;NFSU2_TR(0x4c1e00);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c1e06:{NFSU2_TR(0x4c1e06);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c1e0c:{NFSU2_TR(0x4c1e0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1e0e:{NFSU2_TR(0x4c1e0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1e11:{NFSU2_TR(0x4c1e11);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c1e00u);}goto L4c1e00;}}
}
B4c1e13:L4c1e13:{c.instructions+=4;NFSU2_TR(0x4c1e13);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c1e19:{NFSU2_TR(0x4c1e19);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1e1b:{NFSU2_TR(0x4c1e1b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c1e1e:{NFSU2_TR(0x4c1e1e);
if(r1(R+514)){{goto L4c1e33;}}
}
B4c1e20:L4c1e20:{c.instructions+=5;NFSU2_TR(0x4c1e20);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c1e26:{NFSU2_TR(0x4c1e26);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c1e2c:{NFSU2_TR(0x4c1e2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1e2e:{NFSU2_TR(0x4c1e2e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c1e31:{NFSU2_TR(0x4c1e31);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c1e20u);}goto L4c1e20;}}
}
B4c1e33:L4c1e33:{c.instructions+=7;NFSU2_TR(0x4c1e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1e39:{NFSU2_TR(0x4c1e39);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4c1e3b:{NFSU2_TR(0x4c1e3b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4c1e3d:{NFSU2_TR(0x4c1e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1e43:{NFSU2_TR(0x4c1e43);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1e45:{NFSU2_TR(0x4c1e45);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1e48:{NFSU2_TR(0x4c1e48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1e60;}}
}
B4c1e4a:L4c1e4a:{c.instructions+=7;NFSU2_TR(0x4c1e4a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4c1e4c:{NFSU2_TR(0x4c1e4c);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4c1e4e:{NFSU2_TR(0x4c1e4e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1e52:{NFSU2_TR(0x4c1e52);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c1e58:{NFSU2_TR(0x4c1e58);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4c1e5a:{NFSU2_TR(0x4c1e5a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1e5e:{NFSU2_TR(0x4c1e5e);
{goto L4c1e76;}
}
B4c1e60:L4c1e60:{c.instructions+=7;NFSU2_TR(0x4c1e60);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4c1e62:{NFSU2_TR(0x4c1e62);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B4c1e64:{NFSU2_TR(0x4c1e64);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1e68:{NFSU2_TR(0x4c1e68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4c1e6a:{NFSU2_TR(0x4c1e6a);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c1e70:{NFSU2_TR(0x4c1e70);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4c1e72:{NFSU2_TR(0x4c1e72);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1e76:L4c1e76:{c.instructions+=6;NFSU2_TR(0x4c1e76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c1e78:{NFSU2_TR(0x4c1e78);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c1e7c:{NFSU2_TR(0x4c1e7c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c1e80:{NFSU2_TR(0x4c1e80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1e82:{NFSU2_TR(0x4c1e82);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1e85:{NFSU2_TR(0x4c1e85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1e99;}}
}
B4c1e87:L4c1e87:{c.instructions+=4;NFSU2_TR(0x4c1e87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c1e8b:{NFSU2_TR(0x4c1e8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c1e91:{NFSU2_TR(0x4c1e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1e97:{NFSU2_TR(0x4c1e97);
{goto L4c1eaa;}
}
B4c1e99:L4c1e99:{c.instructions+=3;NFSU2_TR(0x4c1e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1e9d:{NFSU2_TR(0x4c1e9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1ea4:{NFSU2_TR(0x4c1ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1eaa:L4c1eaa:{c.instructions+=9;NFSU2_TR(0x4c1eaa);
{u32 ea_=u32(r4(R+24)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c1eb0:{NFSU2_TR(0x4c1eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1eb6:{NFSU2_TR(0x4c1eb6);
{u32 ea_=u32(u32(8340900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c1ebc:{NFSU2_TR(0x4c1ebc);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4c1ec2:{NFSU2_TR(0x4c1ec2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4c1ec4:{NFSU2_TR(0x4c1ec4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4c1ec6:{NFSU2_TR(0x4c1ec6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c1ec8:{NFSU2_TR(0x4c1ec8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1ecb:{NFSU2_TR(0x4c1ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1edb;}}
}
B4c1ecd:L4c1ecd:{c.instructions+=5;NFSU2_TR(0x4c1ecd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4c1ecf:{NFSU2_TR(0x4c1ecf);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4c1ed1:{NFSU2_TR(0x4c1ed1);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1ed7:{NFSU2_TR(0x4c1ed7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c1ed9:{NFSU2_TR(0x4c1ed9);
{goto L4c1ee7;}
}
B4c1edb:L4c1edb:{c.instructions+=4;NFSU2_TR(0x4c1edb);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B4c1edd:{NFSU2_TR(0x4c1edd);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4c1edf:{NFSU2_TR(0x4c1edf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4c1ee1:{NFSU2_TR(0x4c1ee1);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c1ee7:L4c1ee7:{c.instructions+=2;NFSU2_TR(0x4c1ee7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c1eed:{NFSU2_TR(0x4c1eed);
if(r1(R+518)){{goto L4c1f3a;}}
}
B4c1eef:L4c1eef:{c.instructions+=4;NFSU2_TR(0x4c1eef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ef0:{NFSU2_TR(0x4c1ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c1ef6:{NFSU2_TR(0x4c1ef6);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1efb:{NFSU2_TR(0x4c1efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1f00ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c1f00:L4c1f00:{c.instructions+=4;NFSU2_TR(0x4c1f00);
__builtin_memmove((R+28),(R+0),4);
}
B4c1f02:{NFSU2_TR(0x4c1f02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1f05:{NFSU2_TR(0x4c1f05);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c1f07:{NFSU2_TR(0x4c1f07);
if(r1(R+518)){{goto L4c1f2f;}}
}
B4c1f09:L4c1f09:{c.instructions+=3;NFSU2_TR(0x4c1f09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f0a:{NFSU2_TR(0x4c1f0a);
__builtin_memmove((R+4),(R+28),4);
}
B4c1f0c:{NFSU2_TR(0x4c1f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1f11ull));
TAIL_STATIC(0x4a5b20u,4a5);
}
B4c1f11:L4c1f11:{c.instructions+=2;NFSU2_TR(0x4c1f11);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c1f13:{NFSU2_TR(0x4c1f13);
if(r1(R+518)){{goto L4c1f2f;}}
}
B4c1f15:L4c1f15:{c.instructions+=8;NFSU2_TR(0x4c1f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1f18:{NFSU2_TR(0x4c1f18);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4c1f1c:{NFSU2_TR(0x4c1f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1f1f:{NFSU2_TR(0x4c1f1f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f24:{NFSU2_TR(0x4c1f24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f25:{NFSU2_TR(0x4c1f25);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f26:{NFSU2_TR(0x4c1f26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f27:{NFSU2_TR(0x4c1f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1f2cull));
TAIL_STATIC(0x61f820u,61f);
}
B4c1f2c:L4c1f2c:{c.instructions+=1;NFSU2_TR(0x4c1f2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c1f2f:L4c1f2f:{c.instructions+=3;NFSU2_TR(0x4c1f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c1f33:{NFSU2_TR(0x4c1f33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c1f39:{NFSU2_TR(0x4c1f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c1f3a:L4c1f3a:{c.instructions+=2;NFSU2_TR(0x4c1f3a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c1f3d:{NFSU2_TR(0x4c1f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c1f78;}}
}
B4c1f3f:L4c1f3f:{c.instructions+=4;NFSU2_TR(0x4c1f3f);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f44:{NFSU2_TR(0x4c1f44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1f4b:{NFSU2_TR(0x4c1f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1f51:{NFSU2_TR(0x4c1f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1f56ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c1f56:L4c1f56:{c.instructions+=3;NFSU2_TR(0x4c1f56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1f59:{NFSU2_TR(0x4c1f59);
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
B4c1f5b:{NFSU2_TR(0x4c1f5b);
if(r1(R+518)){{goto L4c1f78;}}
}
B4c1f5d:L4c1f5d:{c.instructions+=8;NFSU2_TR(0x4c1f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c1f60:{NFSU2_TR(0x4c1f60);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4c1f64:{NFSU2_TR(0x4c1f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1f67:{NFSU2_TR(0x4c1f67);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f6c:{NFSU2_TR(0x4c1f6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f6e:{NFSU2_TR(0x4c1f6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f6f:{NFSU2_TR(0x4c1f6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1f70:{NFSU2_TR(0x4c1f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1f75ull));
TAIL_STATIC(0x61f820u,61f);
}
B4c1f75:L4c1f75:{c.instructions+=1;NFSU2_TR(0x4c1f75);
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
B4c1f78:L4c1f78:{c.instructions+=8;NFSU2_TR(0x4c1f78);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4c1f7c:{NFSU2_TR(0x4c1f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c1f82:{NFSU2_TR(0x4c1f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c1f83:{NFSU2_TR(0x4c1f83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1f8a:{NFSU2_TR(0x4c1f8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x167ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c1f90:{NFSU2_TR(0x4c1f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c1f91:{NFSU2_TR(0x4c1f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c1f92:{NFSU2_TR(0x4c1f92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c1fa0:L4c1fa0:{c.instructions+=10;NFSU2_TR(0x4c1fa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1fa1:{NFSU2_TR(0x4c1fa1);
__builtin_memmove((R+28),(R+4),4);
}
B4c1fa3:{NFSU2_TR(0x4c1fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1fa7:{NFSU2_TR(0x4c1fa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x167ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c1fae:{NFSU2_TR(0x4c1fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x168ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c1fb8:{NFSU2_TR(0x4c1fb8);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c1fbd:{NFSU2_TR(0x4c1fbd);
__builtin_memmove(gp(0x837aa0),(R+0),4);
}
B4c1fc2:{NFSU2_TR(0x4c1fc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1fc3:{NFSU2_TR(0x4c1fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c1fc9:{NFSU2_TR(0x4c1fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1fceull));
TAIL_STATIC(0x453320u,453);
}
B4c1fce:L4c1fce:{c.instructions+=3;NFSU2_TR(0x4c1fce);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c1fd4:{NFSU2_TR(0x4c1fd4);
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
B4c1fd6:{NFSU2_TR(0x4c1fd6);
if(r1(R+518)){TAIL_STATIC(0x4c2023u,4c2);}
}
B4c1fd8:L4c1fd8:{c.instructions+=5;NFSU2_TR(0x4c1fd8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1fd9:{NFSU2_TR(0x4c1fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c1fdf:{NFSU2_TR(0x4c1fdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1fe0:{NFSU2_TR(0x4c1fe0);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1fe5:{NFSU2_TR(0x4c1fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1feaull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c1fea:L4c1fea:{c.instructions+=4;NFSU2_TR(0x4c1fea);
__builtin_memmove((R+24),(R+0),4);
}
B4c1fec:{NFSU2_TR(0x4c1fec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c1fef:{NFSU2_TR(0x4c1fef);
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
B4c1ff1:{NFSU2_TR(0x4c1ff1);
if(r1(R+518)){TAIL_STATIC(0x4c201au,4c2);}
}
B4c1ff3:L4c1ff3:{c.instructions+=3;NFSU2_TR(0x4c1ff3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c1ff4:{NFSU2_TR(0x4c1ff4);
__builtin_memmove((R+4),(R+24),4);
}
B4c1ff6:{NFSU2_TR(0x4c1ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1ffbull));
TAIL_STATIC(0x4a5b20u,4a5);
}
B4c1ffb:L4c1ffb:{c.instructions+=2;NFSU2_TR(0x4c1ffb);
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
B4c1ffd:{NFSU2_TR(0x4c1ffd);
if(r1(R+518)){TAIL_STATIC(0x4c201au,4c2);}
}
B4c1fff:L4c1fff:{c.instructions+=1;NFSU2_TR(0x4c1fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x4c2002u,4c2);
}
XIT:NFSU2_TR_EXIT(0x4c1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
