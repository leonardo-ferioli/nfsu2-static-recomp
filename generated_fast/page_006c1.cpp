#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_6c0(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 page_6c1(Cpu& c){return body_6c1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c1001:goto L6c1001;
case 0x6c1002:c.instructions+=2;goto B6c1002;
case 0x6c1005:c.instructions+=1;goto B6c1005;
case 0x6c1007:goto L6c1007;
case 0x6c1009:c.instructions+=1;goto B6c1009;
case 0x6c100e:goto L6c100e;
case 0x6c1010:c.instructions+=2;goto B6c1010;
case 0x6c1013:c.instructions+=1;goto B6c1013;
case 0x6c1019:goto L6c1019;
case 0x6c101c:c.instructions+=7;goto B6c101c;
case 0x6c101f:c.instructions+=6;goto B6c101f;
case 0x6c1024:c.instructions+=5;goto B6c1024;
case 0x6c1029:c.instructions+=4;goto B6c1029;
case 0x6c102e:c.instructions+=3;goto B6c102e;
case 0x6c102f:c.instructions+=2;goto B6c102f;
case 0x6c1031:c.instructions+=1;goto B6c1031;
case 0x6c1036:goto L6c1036;
case 0x6c1038:c.instructions+=2;goto B6c1038;
case 0x6c103b:c.instructions+=1;goto B6c103b;
case 0x6c1041:goto L6c1041;
case 0x6c1046:c.instructions+=2;goto B6c1046;
case 0x6c1048:c.instructions+=1;goto B6c1048;
case 0x6c104d:goto L6c104d;
case 0x6c104f:c.instructions+=2;goto B6c104f;
case 0x6c1052:c.instructions+=1;goto B6c1052;
case 0x6c1058:goto L6c1058;
case 0x6c105b:c.instructions+=4;goto B6c105b;
case 0x6c105e:c.instructions+=3;goto B6c105e;
case 0x6c105f:c.instructions+=2;goto B6c105f;
case 0x6c1061:c.instructions+=1;goto B6c1061;
case 0x6c1066:goto L6c1066;
case 0x6c1068:c.instructions+=2;goto B6c1068;
case 0x6c106b:c.instructions+=1;goto B6c106b;
case 0x6c1071:goto L6c1071;
case 0x6c1073:c.instructions+=2;goto B6c1073;
case 0x6c1075:c.instructions+=1;goto B6c1075;
case 0x6c1077:goto L6c1077;
case 0x6c107a:c.instructions+=6;goto B6c107a;
case 0x6c107d:c.instructions+=5;goto B6c107d;
case 0x6c107e:c.instructions+=4;goto B6c107e;
case 0x6c107f:c.instructions+=3;goto B6c107f;
case 0x6c1081:c.instructions+=2;goto B6c1081;
case 0x6c1084:c.instructions+=1;goto B6c1084;
case 0x6c1089:goto L6c1089;
case 0x6c108b:c.instructions+=2;goto B6c108b;
case 0x6c108e:c.instructions+=1;goto B6c108e;
case 0x6c1094:goto L6c1094;
case 0x6c1095:c.instructions+=2;goto B6c1095;
case 0x6c1097:c.instructions+=1;goto B6c1097;
case 0x6c1099:goto L6c1099;
case 0x6c109f:c.instructions+=4;goto B6c109f;
case 0x6c10a1:c.instructions+=3;goto B6c10a1;
case 0x6c10a3:c.instructions+=2;goto B6c10a3;
case 0x6c10a6:c.instructions+=1;goto B6c10a6;
case 0x6c10ab:goto L6c10ab;
case 0x6c10ad:c.instructions+=2;goto B6c10ad;
case 0x6c10b0:c.instructions+=1;goto B6c10b0;
case 0x6c10b6:goto L6c10b6;
case 0x6c10bb:c.instructions+=2;goto B6c10bb;
case 0x6c10bd:c.instructions+=1;goto B6c10bd;
case 0x6c10c2:goto L6c10c2;
case 0x6c10c4:c.instructions+=2;goto B6c10c4;
case 0x6c10c7:c.instructions+=1;goto B6c10c7;
case 0x6c10cd:goto L6c10cd;
case 0x6c10d0:c.instructions+=2;goto B6c10d0;
case 0x6c10d2:c.instructions+=1;goto B6c10d2;
case 0x6c10d7:goto L6c10d7;
case 0x6c10d9:c.instructions+=2;goto B6c10d9;
case 0x6c10dc:c.instructions+=1;goto B6c10dc;
case 0x6c10e2:goto L6c10e2;
case 0x6c10e4:c.instructions+=3;goto B6c10e4;
case 0x6c10e7:c.instructions+=2;goto B6c10e7;
case 0x6c10ea:c.instructions+=1;goto B6c10ea;
case 0x6c10f0:goto L6c10f0;
case 0x6c10f3:goto L6c10f3;
case 0x6c10f6:c.instructions+=10;goto B6c10f6;
case 0x6c10f9:c.instructions+=9;goto B6c10f9;
case 0x6c10fc:c.instructions+=8;goto B6c10fc;
case 0x6c10ff:c.instructions+=7;goto B6c10ff;
case 0x6c1101:c.instructions+=6;goto B6c1101;
case 0x6c1103:c.instructions+=5;goto B6c1103;
case 0x6c1109:c.instructions+=4;goto B6c1109;
case 0x6c110b:c.instructions+=3;goto B6c110b;
case 0x6c110c:c.instructions+=2;goto B6c110c;
case 0x6c110e:c.instructions+=1;goto B6c110e;
case 0x6c1113:goto L6c1113;
case 0x6c1115:c.instructions+=2;goto B6c1115;
case 0x6c1118:c.instructions+=1;goto B6c1118;
case 0x6c111e:goto L6c111e;
case 0x6c1121:c.instructions+=11;goto B6c1121;
case 0x6c1124:c.instructions+=10;goto B6c1124;
case 0x6c1127:c.instructions+=9;goto B6c1127;
case 0x6c1129:c.instructions+=8;goto B6c1129;
case 0x6c112c:c.instructions+=7;goto B6c112c;
case 0x6c112e:c.instructions+=6;goto B6c112e;
case 0x6c1134:c.instructions+=5;goto B6c1134;
case 0x6c1136:c.instructions+=4;goto B6c1136;
case 0x6c1138:c.instructions+=3;goto B6c1138;
case 0x6c1139:c.instructions+=2;goto B6c1139;
case 0x6c113c:c.instructions+=1;goto B6c113c;
case 0x6c1141:goto L6c1141;
case 0x6c1143:c.instructions+=2;goto B6c1143;
case 0x6c1146:c.instructions+=1;goto B6c1146;
case 0x6c114c:goto L6c114c;
case 0x6c1152:c.instructions+=6;goto B6c1152;
case 0x6c1155:c.instructions+=5;goto B6c1155;
case 0x6c1159:c.instructions+=4;goto B6c1159;
case 0x6c115c:c.instructions+=3;goto B6c115c;
case 0x6c115f:c.instructions+=2;goto B6c115f;
case 0x6c1163:c.instructions+=1;goto B6c1163;
case 0x6c1169:goto L6c1169;
case 0x6c116d:c.instructions+=3;goto B6c116d;
case 0x6c116f:c.instructions+=2;goto B6c116f;
case 0x6c1172:c.instructions+=1;goto B6c1172;
case 0x6c1175:goto L6c1175;
case 0x6c1178:c.instructions+=11;goto B6c1178;
case 0x6c117b:c.instructions+=10;goto B6c117b;
case 0x6c117e:c.instructions+=9;goto B6c117e;
case 0x6c1181:c.instructions+=8;goto B6c1181;
case 0x6c1184:c.instructions+=7;goto B6c1184;
case 0x6c1187:c.instructions+=6;goto B6c1187;
case 0x6c118a:c.instructions+=5;goto B6c118a;
case 0x6c118d:c.instructions+=4;goto B6c118d;
case 0x6c1193:c.instructions+=3;goto B6c1193;
case 0x6c1195:c.instructions+=2;goto B6c1195;
case 0x6c1197:c.instructions+=1;goto B6c1197;
case 0x6c119c:goto L6c119c;
case 0x6c119e:c.instructions+=2;goto B6c119e;
case 0x6c11a1:c.instructions+=1;goto B6c11a1;
case 0x6c11a7:goto L6c11a7;
case 0x6c11aa:c.instructions+=2;goto B6c11aa;
case 0x6c11ad:c.instructions+=1;goto B6c11ad;
case 0x6c11af:goto L6c11af;
case 0x6c11b0:c.instructions+=3;goto B6c11b0;
case 0x6c11b1:c.instructions+=2;goto B6c11b1;
case 0x6c11b3:c.instructions+=1;goto B6c11b3;
case 0x6c11b8:goto L6c11b8;
case 0x6c11ba:c.instructions+=2;goto B6c11ba;
case 0x6c11bd:c.instructions+=1;goto B6c11bd;
case 0x6c11c3:goto L6c11c3;
case 0x6c11c4:c.instructions+=2;goto B6c11c4;
case 0x6c11c6:c.instructions+=1;goto B6c11c6;
case 0x6c11cb:goto L6c11cb;
case 0x6c11cd:c.instructions+=2;goto B6c11cd;
case 0x6c11d0:c.instructions+=1;goto B6c11d0;
case 0x6c11d6:goto L6c11d6;
case 0x6c11d9:c.instructions+=5;goto B6c11d9;
case 0x6c11dc:c.instructions+=4;goto B6c11dc;
case 0x6c11df:c.instructions+=3;goto B6c11df;
case 0x6c11e0:c.instructions+=2;goto B6c11e0;
case 0x6c11e2:c.instructions+=1;goto B6c11e2;
case 0x6c11e7:goto L6c11e7;
case 0x6c11e9:c.instructions+=2;goto B6c11e9;
case 0x6c11ec:c.instructions+=1;goto B6c11ec;
case 0x6c11f2:goto L6c11f2;
case 0x6c11f8:c.instructions+=11;goto B6c11f8;
case 0x6c11fb:c.instructions+=10;goto B6c11fb;
case 0x6c11fe:c.instructions+=9;goto B6c11fe;
case 0x6c1201:c.instructions+=8;goto B6c1201;
case 0x6c1205:c.instructions+=7;goto B6c1205;
case 0x6c1207:c.instructions+=6;goto B6c1207;
case 0x6c120a:c.instructions+=5;goto B6c120a;
case 0x6c120d:c.instructions+=4;goto B6c120d;
case 0x6c1210:c.instructions+=3;goto B6c1210;
case 0x6c1213:c.instructions+=2;goto B6c1213;
case 0x6c1216:c.instructions+=1;goto B6c1216;
case 0x6c121c:goto L6c121c;
case 0x6c1220:goto L6c1220;
case 0x6c1223:c.instructions+=11;goto B6c1223;
case 0x6c1226:c.instructions+=10;goto B6c1226;
case 0x6c1229:c.instructions+=9;goto B6c1229;
case 0x6c122c:c.instructions+=8;goto B6c122c;
case 0x6c122f:c.instructions+=7;goto B6c122f;
case 0x6c1232:c.instructions+=6;goto B6c1232;
case 0x6c1235:c.instructions+=5;goto B6c1235;
case 0x6c1238:c.instructions+=4;goto B6c1238;
case 0x6c123e:c.instructions+=3;goto B6c123e;
case 0x6c1240:c.instructions+=2;goto B6c1240;
case 0x6c1242:c.instructions+=1;goto B6c1242;
case 0x6c1247:goto L6c1247;
case 0x6c1249:c.instructions+=2;goto B6c1249;
case 0x6c124c:c.instructions+=1;goto B6c124c;
case 0x6c1252:goto L6c1252;
case 0x6c1255:c.instructions+=2;goto B6c1255;
case 0x6c1258:c.instructions+=1;goto B6c1258;
case 0x6c125a:goto L6c125a;
case 0x6c125b:c.instructions+=3;goto B6c125b;
case 0x6c125c:c.instructions+=2;goto B6c125c;
case 0x6c125e:c.instructions+=1;goto B6c125e;
case 0x6c1263:goto L6c1263;
case 0x6c1265:c.instructions+=2;goto B6c1265;
case 0x6c1268:c.instructions+=1;goto B6c1268;
case 0x6c126e:goto L6c126e;
case 0x6c126f:c.instructions+=2;goto B6c126f;
case 0x6c1271:c.instructions+=1;goto B6c1271;
case 0x6c1276:goto L6c1276;
case 0x6c1278:c.instructions+=2;goto B6c1278;
case 0x6c127b:c.instructions+=1;goto B6c127b;
case 0x6c1281:goto L6c1281;
case 0x6c1284:c.instructions+=5;goto B6c1284;
case 0x6c1287:c.instructions+=4;goto B6c1287;
case 0x6c128a:c.instructions+=3;goto B6c128a;
case 0x6c128b:c.instructions+=2;goto B6c128b;
case 0x6c128d:c.instructions+=1;goto B6c128d;
case 0x6c1292:goto L6c1292;
case 0x6c1294:c.instructions+=2;goto B6c1294;
case 0x6c1297:c.instructions+=1;goto B6c1297;
case 0x6c129d:goto L6c129d;
case 0x6c12a3:c.instructions+=8;goto B6c12a3;
case 0x6c12a6:c.instructions+=7;goto B6c12a6;
case 0x6c12aa:c.instructions+=6;goto B6c12aa;
case 0x6c12ad:c.instructions+=5;goto B6c12ad;
case 0x6c12b0:c.instructions+=4;goto B6c12b0;
case 0x6c12b4:c.instructions+=3;goto B6c12b4;
case 0x6c12b6:c.instructions+=2;goto B6c12b6;
case 0x6c12ba:c.instructions+=1;goto B6c12ba;
case 0x6c12c0:goto L6c12c0;
case 0x6c12c3:c.instructions+=4;goto B6c12c3;
case 0x6c12c6:c.instructions+=3;goto B6c12c6;
case 0x6c12ca:c.instructions+=2;goto B6c12ca;
case 0x6c12cd:c.instructions+=1;goto B6c12cd;
case 0x6c12d3:goto L6c12d3;
case 0x6c12d8:c.instructions+=2;goto B6c12d8;
case 0x6c12da:c.instructions+=1;goto B6c12da;
case 0x6c12df:goto L6c12df;
case 0x6c12e1:c.instructions+=2;goto B6c12e1;
case 0x6c12e4:c.instructions+=1;goto B6c12e4;
case 0x6c12ea:goto L6c12ea;
case 0x6c12ef:c.instructions+=2;goto B6c12ef;
case 0x6c12f1:c.instructions+=1;goto B6c12f1;
case 0x6c12f6:goto L6c12f6;
case 0x6c12f8:c.instructions+=2;goto B6c12f8;
case 0x6c12fb:c.instructions+=1;goto B6c12fb;
case 0x6c1301:goto L6c1301;
case 0x6c1307:c.instructions+=11;goto B6c1307;
case 0x6c130a:c.instructions+=10;goto B6c130a;
case 0x6c130d:c.instructions+=9;goto B6c130d;
case 0x6c130f:c.instructions+=8;goto B6c130f;
case 0x6c1312:c.instructions+=7;goto B6c1312;
case 0x6c1315:c.instructions+=6;goto B6c1315;
case 0x6c131b:c.instructions+=5;goto B6c131b;
case 0x6c1321:c.instructions+=4;goto B6c1321;
case 0x6c1323:c.instructions+=3;goto B6c1323;
case 0x6c1328:c.instructions+=2;goto B6c1328;
case 0x6c132a:c.instructions+=1;goto B6c132a;
case 0x6c132f:goto L6c132f;
case 0x6c1331:c.instructions+=2;goto B6c1331;
case 0x6c1334:c.instructions+=1;goto B6c1334;
case 0x6c1336:goto L6c1336;
case 0x6c133a:c.instructions+=1;goto B6c133a;
case 0x6c133c:goto L6c133c;
case 0x6c133f:c.instructions+=5;goto B6c133f;
case 0x6c1340:c.instructions+=4;goto B6c1340;
case 0x6c1346:c.instructions+=3;goto B6c1346;
case 0x6c1349:c.instructions+=2;goto B6c1349;
case 0x6c134a:c.instructions+=1;goto B6c134a;
case 0x6c134f:goto L6c134f;
case 0x6c1351:c.instructions+=2;goto B6c1351;
case 0x6c1354:c.instructions+=1;goto B6c1354;
case 0x6c1356:goto L6c1356;
case 0x6c1359:c.instructions+=6;goto B6c1359;
case 0x6c135f:c.instructions+=5;goto B6c135f;
case 0x6c1361:c.instructions+=4;goto B6c1361;
case 0x6c1367:c.instructions+=3;goto B6c1367;
case 0x6c1368:c.instructions+=2;goto B6c1368;
case 0x6c136b:c.instructions+=1;goto B6c136b;
case 0x6c136e:goto L6c136e;
case 0x6c1370:c.instructions+=3;goto B6c1370;
case 0x6c1372:c.instructions+=2;goto B6c1372;
case 0x6c1374:c.instructions+=1;goto B6c1374;
case 0x6c1377:goto L6c1377;
case 0x6c1379:goto L6c1379;
case 0x6c137b:c.instructions+=1;goto B6c137b;
case 0x6c137e:goto L6c137e;
case 0x6c1380:goto L6c1380;
case 0x6c1383:c.instructions+=2;goto B6c1383;
case 0x6c1386:c.instructions+=1;goto B6c1386;
case 0x6c1388:goto L6c1388;
case 0x6c138c:goto L6c138c;
case 0x6c138d:c.instructions+=2;goto B6c138d;
case 0x6c1390:c.instructions+=1;goto B6c1390;
case 0x6c1395:goto L6c1395;
case 0x6c1398:c.instructions+=1;goto B6c1398;
case 0x6c139d:goto L6c139d;
case 0x6c13a0:c.instructions+=1;goto B6c13a0;
case 0x6c13a5:goto L6c13a5;
case 0x6c13a8:c.instructions+=1;goto B6c13a8;
case 0x6c13ad:goto L6c13ad;
case 0x6c13b0:c.instructions+=5;goto B6c13b0;
case 0x6c13b3:c.instructions+=4;goto B6c13b3;
case 0x6c13b4:c.instructions+=3;goto B6c13b4;
case 0x6c13b5:c.instructions+=2;goto B6c13b5;
case 0x6c13b6:c.instructions+=1;goto B6c13b6;
case 0x6c13b9:goto L6c13b9;
case 0x6c13bb:c.instructions+=11;goto B6c13bb;
case 0x6c13bc:c.instructions+=10;goto B6c13bc;
case 0x6c13be:c.instructions+=9;goto B6c13be;
case 0x6c13c0:c.instructions+=8;goto B6c13c0;
case 0x6c13c3:c.instructions+=7;goto B6c13c3;
case 0x6c13c7:c.instructions+=6;goto B6c13c7;
case 0x6c13c9:c.instructions+=5;goto B6c13c9;
case 0x6c13cc:c.instructions+=4;goto B6c13cc;
case 0x6c13cf:c.instructions+=3;goto B6c13cf;
case 0x6c13d2:c.instructions+=2;goto B6c13d2;
case 0x6c13d3:c.instructions+=1;goto B6c13d3;
case 0x6c13d6:goto L6c13d6;
case 0x6c13d8:c.instructions+=4;goto B6c13d8;
case 0x6c13d9:c.instructions+=3;goto B6c13d9;
case 0x6c13db:c.instructions+=2;goto B6c13db;
case 0x6c13df:c.instructions+=1;goto B6c13df;
case 0x6c13e1:goto L6c13e1;
case 0x6c13e2:goto L6c13e2;
case 0x6c13e5:c.instructions+=5;goto B6c13e5;
case 0x6c13e8:c.instructions+=4;goto B6c13e8;
case 0x6c13eb:c.instructions+=3;goto B6c13eb;
case 0x6c13ee:c.instructions+=2;goto B6c13ee;
case 0x6c13f0:c.instructions+=1;goto B6c13f0;
case 0x6c13f2:goto L6c13f2;
case 0x6c13f4:c.instructions+=1;goto B6c13f4;
case 0x6c13f6:goto L6c13f6;
case 0x6c13f8:c.instructions+=1;goto B6c13f8;
case 0x6c13fd:goto L6c13fd;
case 0x6c13fe:goto L6c13fe;
case 0x6c13ff:c.instructions+=1;goto B6c13ff;
case 0x6c1404:goto L6c1404;
case 0x6c1408:c.instructions+=2;goto B6c1408;
case 0x6c1409:c.instructions+=1;goto B6c1409;
case 0x6c140b:goto L6c140b;
case 0x6c140c:goto L6c140c;
case 0x6c140d:c.instructions+=1;goto B6c140d;
case 0x6c140e:goto L6c140e;
case 0x6c1410:c.instructions+=10;goto B6c1410;
case 0x6c1411:c.instructions+=9;goto B6c1411;
case 0x6c1413:c.instructions+=8;goto B6c1413;
case 0x6c1414:c.instructions+=7;goto B6c1414;
case 0x6c1415:c.instructions+=6;goto B6c1415;
case 0x6c1416:c.instructions+=5;goto B6c1416;
case 0x6c1419:c.instructions+=4;goto B6c1419;
case 0x6c141b:c.instructions+=3;goto B6c141b;
case 0x6c141d:c.instructions+=2;goto B6c141d;
case 0x6c1420:c.instructions+=1;goto B6c1420;
case 0x6c1422:goto L6c1422;
case 0x6c1426:c.instructions+=1;goto B6c1426;
case 0x6c1428:goto L6c1428;
case 0x6c142d:c.instructions+=1;goto B6c142d;
case 0x6c1432:goto L6c1432;
case 0x6c1435:c.instructions+=1;goto B6c1435;
case 0x6c1437:goto L6c1437;
case 0x6c143a:c.instructions+=1;goto B6c143a;
case 0x6c143d:goto L6c143d;
case 0x6c143f:c.instructions+=3;goto B6c143f;
case 0x6c1440:c.instructions+=2;goto B6c1440;
case 0x6c1442:c.instructions+=1;goto B6c1442;
case 0x6c1444:goto L6c1444;
case 0x6c1446:c.instructions+=3;goto B6c1446;
case 0x6c1447:c.instructions+=2;goto B6c1447;
case 0x6c144a:c.instructions+=1;goto B6c144a;
case 0x6c144c:goto L6c144c;
case 0x6c1450:c.instructions+=1;goto B6c1450;
case 0x6c1452:goto L6c1452;
case 0x6c1456:goto L6c1456;
case 0x6c145a:c.instructions+=1;goto B6c145a;
case 0x6c145c:goto L6c145c;
case 0x6c145f:c.instructions+=1;goto B6c145f;
case 0x6c1461:goto L6c1461;
case 0x6c1465:c.instructions+=1;goto B6c1465;
case 0x6c1467:goto L6c1467;
case 0x6c146a:c.instructions+=1;goto B6c146a;
case 0x6c146c:goto L6c146c;
case 0x6c146f:c.instructions+=3;goto B6c146f;
case 0x6c1471:c.instructions+=2;goto B6c1471;
case 0x6c1473:c.instructions+=1;goto B6c1473;
case 0x6c1475:goto L6c1475;
case 0x6c1477:goto L6c1477;
case 0x6c1479:goto L6c1479;
case 0x6c147c:c.instructions+=1;goto B6c147c;
case 0x6c147f:goto L6c147f;
case 0x6c1482:goto L6c1482;
case 0x6c1484:c.instructions+=1;goto B6c1484;
case 0x6c1486:goto L6c1486;
case 0x6c1487:c.instructions+=2;goto B6c1487;
case 0x6c1489:c.instructions+=1;goto B6c1489;
case 0x6c148e:goto L6c148e;
case 0x6c1490:c.instructions+=3;goto B6c1490;
case 0x6c1492:c.instructions+=2;goto B6c1492;
case 0x6c1493:c.instructions+=1;goto B6c1493;
case 0x6c1495:goto L6c1495;
case 0x6c149a:c.instructions+=1;goto B6c149a;
case 0x6c149f:goto L6c149f;
case 0x6c14a2:c.instructions+=2;goto B6c14a2;
case 0x6c14a4:c.instructions+=1;goto B6c14a4;
case 0x6c14a6:goto L6c14a6;
case 0x6c14a9:c.instructions+=1;goto B6c14a9;
case 0x6c14ab:goto L6c14ab;
case 0x6c14af:c.instructions+=1;goto B6c14af;
case 0x6c14b1:goto L6c14b1;
case 0x6c14b5:c.instructions+=1;goto B6c14b5;
case 0x6c14b7:goto L6c14b7;
case 0x6c14ba:c.instructions+=1;goto B6c14ba;
case 0x6c14bf:goto L6c14bf;
case 0x6c14c0:goto L6c14c0;
case 0x6c14c2:c.instructions+=1;goto B6c14c2;
case 0x6c14c4:goto L6c14c4;
case 0x6c14c8:c.instructions+=1;goto B6c14c8;
case 0x6c14ca:goto L6c14ca;
case 0x6c14cb:c.instructions+=1;goto B6c14cb;
case 0x6c14d0:goto L6c14d0;
case 0x6c14d2:c.instructions+=3;goto B6c14d2;
case 0x6c14d3:c.instructions+=2;goto B6c14d3;
case 0x6c14d5:c.instructions+=1;goto B6c14d5;
case 0x6c14d7:goto L6c14d7;
case 0x6c14d8:c.instructions+=1;goto B6c14d8;
case 0x6c14dd:goto L6c14dd;
case 0x6c14de:c.instructions+=1;goto B6c14de;
case 0x6c14e0:goto L6c14e0;
case 0x6c14e3:c.instructions+=4;goto B6c14e3;
case 0x6c14e5:c.instructions+=3;goto B6c14e5;
case 0x6c14e7:c.instructions+=2;goto B6c14e7;
case 0x6c14e9:c.instructions+=1;goto B6c14e9;
case 0x6c14ec:goto L6c14ec;
case 0x6c14ee:goto L6c14ee;
case 0x6c14f0:c.instructions+=1;goto B6c14f0;
case 0x6c14f3:goto L6c14f3;
case 0x6c14f5:goto L6c14f5;
case 0x6c14f8:c.instructions+=2;goto B6c14f8;
case 0x6c14fb:c.instructions+=1;goto B6c14fb;
case 0x6c14fd:goto L6c14fd;
case 0x6c1500:c.instructions+=1;goto B6c1500;
case 0x6c1502:goto L6c1502;
case 0x6c1505:c.instructions+=2;goto B6c1505;
case 0x6c1507:c.instructions+=1;goto B6c1507;
case 0x6c1509:goto L6c1509;
case 0x6c150c:c.instructions+=3;goto B6c150c;
case 0x6c150f:c.instructions+=2;goto B6c150f;
case 0x6c1512:c.instructions+=1;goto B6c1512;
case 0x6c1515:goto L6c1515;
case 0x6c1518:c.instructions+=12;goto B6c1518;
case 0x6c151b:c.instructions+=11;goto B6c151b;
case 0x6c151e:c.instructions+=10;goto B6c151e;
case 0x6c1521:c.instructions+=9;goto B6c1521;
case 0x6c1524:c.instructions+=8;goto B6c1524;
case 0x6c1527:c.instructions+=7;goto B6c1527;
case 0x6c152a:c.instructions+=6;goto B6c152a;
case 0x6c152d:c.instructions+=5;goto B6c152d;
case 0x6c152f:c.instructions+=4;goto B6c152f;
case 0x6c1532:c.instructions+=3;goto B6c1532;
case 0x6c1535:c.instructions+=2;goto B6c1535;
case 0x6c1537:c.instructions+=1;goto B6c1537;
case 0x6c1539:goto L6c1539;
case 0x6c153c:c.instructions+=1;goto B6c153c;
case 0x6c153e:goto L6c153e;
case 0x6c1540:goto L6c1540;
case 0x6c1541:goto L6c1541;
case 0x6c1542:c.instructions+=3;goto B6c1542;
case 0x6c1543:c.instructions+=2;goto B6c1543;
case 0x6c1544:c.instructions+=1;goto B6c1544;
case 0x6c1547:goto L6c1547;
case 0x6c154a:c.instructions+=5;goto B6c154a;
case 0x6c154d:c.instructions+=4;goto B6c154d;
case 0x6c1550:c.instructions+=3;goto B6c1550;
case 0x6c1551:c.instructions+=2;goto B6c1551;
case 0x6c1552:c.instructions+=1;goto B6c1552;
case 0x6c1553:goto L6c1553;
case 0x6c1555:c.instructions+=7;goto B6c1555;
case 0x6c1556:c.instructions+=6;goto B6c1556;
case 0x6c1558:c.instructions+=5;goto B6c1558;
case 0x6c1559:c.instructions+=4;goto B6c1559;
case 0x6c155a:c.instructions+=3;goto B6c155a;
case 0x6c155d:c.instructions+=2;goto B6c155d;
case 0x6c1560:c.instructions+=1;goto B6c1560;
case 0x6c1562:goto L6c1562;
case 0x6c1565:c.instructions+=5;goto B6c1565;
case 0x6c1568:c.instructions+=4;goto B6c1568;
case 0x6c156b:c.instructions+=3;goto B6c156b;
case 0x6c156c:c.instructions+=2;goto B6c156c;
case 0x6c156d:c.instructions+=1;goto B6c156d;
case 0x6c156f:goto L6c156f;
case 0x6c1572:c.instructions+=6;goto B6c1572;
case 0x6c1575:c.instructions+=5;goto B6c1575;
case 0x6c1578:c.instructions+=4;goto B6c1578;
case 0x6c1579:c.instructions+=3;goto B6c1579;
case 0x6c157a:c.instructions+=2;goto B6c157a;
case 0x6c157c:c.instructions+=1;goto B6c157c;
case 0x6c157e:goto L6c157e;
case 0x6c1584:c.instructions+=1;goto B6c1584;
case 0x6c1586:goto L6c1586;
case 0x6c158b:c.instructions+=1;goto B6c158b;
case 0x6c1590:goto L6c1590;
case 0x6c1593:c.instructions+=14;goto B6c1593;
case 0x6c1597:c.instructions+=13;goto B6c1597;
case 0x6c159a:c.instructions+=12;goto B6c159a;
case 0x6c15a0:c.instructions+=11;goto B6c15a0;
case 0x6c15a3:c.instructions+=10;goto B6c15a3;
case 0x6c15a9:c.instructions+=9;goto B6c15a9;
case 0x6c15ab:c.instructions+=8;goto B6c15ab;
case 0x6c15ad:c.instructions+=7;goto B6c15ad;
case 0x6c15b0:c.instructions+=6;goto B6c15b0;
case 0x6c15b3:c.instructions+=5;goto B6c15b3;
case 0x6c15b6:c.instructions+=4;goto B6c15b6;
case 0x6c15b8:c.instructions+=3;goto B6c15b8;
case 0x6c15b9:c.instructions+=2;goto B6c15b9;
case 0x6c15bc:c.instructions+=1;goto B6c15bc;
case 0x6c15be:goto L6c15be;
case 0x6c15bf:goto L6c15bf;
case 0x6c15c3:c.instructions+=1;goto B6c15c3;
case 0x6c15c5:goto L6c15c5;
case 0x6c15c8:c.instructions+=8;goto B6c15c8;
case 0x6c15cb:c.instructions+=7;goto B6c15cb;
case 0x6c15ce:c.instructions+=6;goto B6c15ce;
case 0x6c15d1:c.instructions+=5;goto B6c15d1;
case 0x6c15d3:c.instructions+=4;goto B6c15d3;
case 0x6c15d6:c.instructions+=3;goto B6c15d6;
case 0x6c15d8:c.instructions+=2;goto B6c15d8;
case 0x6c15db:c.instructions+=1;goto B6c15db;
case 0x6c15e0:goto L6c15e0;
case 0x6c15e2:goto L6c15e2;
case 0x6c15e4:c.instructions+=1;goto B6c15e4;
case 0x6c15e7:goto L6c15e7;
case 0x6c15e9:goto L6c15e9;
case 0x6c15eb:c.instructions+=2;goto B6c15eb;
case 0x6c15ee:c.instructions+=1;goto B6c15ee;
case 0x6c15f1:goto L6c15f1;
case 0x6c15f4:c.instructions+=4;goto B6c15f4;
case 0x6c15f6:c.instructions+=3;goto B6c15f6;
case 0x6c15f9:c.instructions+=2;goto B6c15f9;
case 0x6c15fb:c.instructions+=1;goto B6c15fb;
case 0x6c15fe:goto L6c15fe;
case 0x6c1600:goto L6c1600;
case 0x6c1602:c.instructions+=1;goto B6c1602;
case 0x6c1605:goto L6c1605;
case 0x6c1607:goto L6c1607;
case 0x6c160a:c.instructions+=5;goto B6c160a;
case 0x6c160d:c.instructions+=4;goto B6c160d;
case 0x6c1610:c.instructions+=3;goto B6c1610;
case 0x6c1613:c.instructions+=2;goto B6c1613;
case 0x6c1615:c.instructions+=1;goto B6c1615;
case 0x6c1617:goto L6c1617;
case 0x6c1618:goto L6c1618;
case 0x6c161b:c.instructions+=5;goto B6c161b;
case 0x6c1622:c.instructions+=4;goto B6c1622;
case 0x6c1625:c.instructions+=3;goto B6c1625;
case 0x6c162a:c.instructions+=2;goto B6c162a;
case 0x6c162c:c.instructions+=1;goto B6c162c;
case 0x6c162f:goto L6c162f;
case 0x6c1631:goto L6c1631;
case 0x6c1633:c.instructions+=1;goto B6c1633;
case 0x6c1636:goto L6c1636;
case 0x6c1638:goto L6c1638;
case 0x6c163a:c.instructions+=1;goto B6c163a;
case 0x6c163b:goto L6c163b;
case 0x6c163c:c.instructions+=2;goto B6c163c;
case 0x6c163d:c.instructions+=1;goto B6c163d;
case 0x6c1640:goto L6c1640;
case 0x6c1642:c.instructions+=5;goto B6c1642;
case 0x6c1643:c.instructions+=4;goto B6c1643;
case 0x6c1644:c.instructions+=3;goto B6c1644;
case 0x6c1646:c.instructions+=2;goto B6c1646;
case 0x6c1648:c.instructions+=1;goto B6c1648;
case 0x6c164d:goto L6c164d;
case 0x6c164f:c.instructions+=11;goto B6c164f;
case 0x6c1652:c.instructions+=10;goto B6c1652;
case 0x6c1655:c.instructions+=9;goto B6c1655;
case 0x6c1658:c.instructions+=8;goto B6c1658;
case 0x6c165b:c.instructions+=7;goto B6c165b;
case 0x6c165e:c.instructions+=6;goto B6c165e;
case 0x6c1661:c.instructions+=5;goto B6c1661;
case 0x6c1664:c.instructions+=4;goto B6c1664;
case 0x6c166a:c.instructions+=3;goto B6c166a;
case 0x6c166c:c.instructions+=2;goto B6c166c;
case 0x6c166d:c.instructions+=1;goto B6c166d;
case 0x6c1670:goto L6c1670;
case 0x6c1672:goto L6c1672;
case 0x6c1675:c.instructions+=8;goto B6c1675;
case 0x6c1676:c.instructions+=7;goto B6c1676;
case 0x6c1677:c.instructions+=6;goto B6c1677;
case 0x6c1678:c.instructions+=5;goto B6c1678;
case 0x6c1679:c.instructions+=4;goto B6c1679;
case 0x6c167a:c.instructions+=3;goto B6c167a;
case 0x6c167c:c.instructions+=2;goto B6c167c;
case 0x6c167d:c.instructions+=1;goto B6c167d;
case 0x6c167e:goto L6c167e;
case 0x6c1680:c.instructions+=8;goto B6c1680;
case 0x6c1681:c.instructions+=7;goto B6c1681;
case 0x6c1683:c.instructions+=6;goto B6c1683;
case 0x6c1684:c.instructions+=5;goto B6c1684;
case 0x6c1685:c.instructions+=4;goto B6c1685;
case 0x6c1686:c.instructions+=3;goto B6c1686;
case 0x6c1688:c.instructions+=2;goto B6c1688;
case 0x6c168a:c.instructions+=1;goto B6c168a;
case 0x6c168f:goto L6c168f;
case 0x6c1692:c.instructions+=5;goto B6c1692;
case 0x6c1695:c.instructions+=4;goto B6c1695;
case 0x6c1697:c.instructions+=3;goto B6c1697;
case 0x6c169d:c.instructions+=2;goto B6c169d;
case 0x6c169e:c.instructions+=1;goto B6c169e;
case 0x6c16a1:goto L6c16a1;
case 0x6c16a3:goto L6c16a3;
case 0x6c16a6:c.instructions+=20;goto B6c16a6;
case 0x6c16a9:c.instructions+=19;goto B6c16a9;
case 0x6c16ac:c.instructions+=18;goto B6c16ac;
case 0x6c16af:c.instructions+=17;goto B6c16af;
case 0x6c16b2:c.instructions+=16;goto B6c16b2;
case 0x6c16b4:c.instructions+=15;goto B6c16b4;
case 0x6c16b7:c.instructions+=14;goto B6c16b7;
case 0x6c16ba:c.instructions+=13;goto B6c16ba;
case 0x6c16bd:c.instructions+=12;goto B6c16bd;
case 0x6c16c0:c.instructions+=11;goto B6c16c0;
case 0x6c16c3:c.instructions+=10;goto B6c16c3;
case 0x6c16c4:c.instructions+=9;goto B6c16c4;
case 0x6c16c5:c.instructions+=8;goto B6c16c5;
case 0x6c16c6:c.instructions+=7;goto B6c16c6;
case 0x6c16c7:c.instructions+=6;goto B6c16c7;
case 0x6c16c8:c.instructions+=5;goto B6c16c8;
case 0x6c16c9:c.instructions+=4;goto B6c16c9;
case 0x6c16cb:c.instructions+=3;goto B6c16cb;
case 0x6c16cc:c.instructions+=2;goto B6c16cc;
case 0x6c16cd:c.instructions+=1;goto B6c16cd;
case 0x6c16d0:goto L6c16d0;
case 0x6c16d2:c.instructions+=4;goto B6c16d2;
case 0x6c16d3:c.instructions+=3;goto B6c16d3;
case 0x6c16d5:c.instructions+=2;goto B6c16d5;
case 0x6c16d7:c.instructions+=1;goto B6c16d7;
case 0x6c16dc:goto L6c16dc;
case 0x6c16de:c.instructions+=11;goto B6c16de;
case 0x6c16e1:c.instructions+=10;goto B6c16e1;
case 0x6c16e4:c.instructions+=9;goto B6c16e4;
case 0x6c16e7:c.instructions+=8;goto B6c16e7;
case 0x6c16ea:c.instructions+=7;goto B6c16ea;
case 0x6c16ed:c.instructions+=6;goto B6c16ed;
case 0x6c16f3:c.instructions+=5;goto B6c16f3;
case 0x6c16fa:c.instructions+=4;goto B6c16fa;
case 0x6c1701:c.instructions+=3;goto B6c1701;
case 0x6c1703:c.instructions+=2;goto B6c1703;
case 0x6c1704:c.instructions+=1;goto B6c1704;
case 0x6c1705:goto L6c1705;
case 0x6c1707:c.instructions+=6;goto B6c1707;
case 0x6c1708:c.instructions+=5;goto B6c1708;
case 0x6c170a:c.instructions+=4;goto B6c170a;
case 0x6c170b:c.instructions+=3;goto B6c170b;
case 0x6c170d:c.instructions+=2;goto B6c170d;
case 0x6c170f:c.instructions+=1;goto B6c170f;
case 0x6c1714:goto L6c1714;
case 0x6c1717:c.instructions+=16;goto B6c1717;
case 0x6c171a:c.instructions+=15;goto B6c171a;
case 0x6c171d:c.instructions+=14;goto B6c171d;
case 0x6c1720:c.instructions+=13;goto B6c1720;
case 0x6c1723:c.instructions+=12;goto B6c1723;
case 0x6c1726:c.instructions+=11;goto B6c1726;
case 0x6c1729:c.instructions+=10;goto B6c1729;
case 0x6c172c:c.instructions+=9;goto B6c172c;
case 0x6c172f:c.instructions+=8;goto B6c172f;
case 0x6c1732:c.instructions+=7;goto B6c1732;
case 0x6c1738:c.instructions+=6;goto B6c1738;
case 0x6c173f:c.instructions+=5;goto B6c173f;
case 0x6c1746:c.instructions+=4;goto B6c1746;
case 0x6c1748:c.instructions+=3;goto B6c1748;
case 0x6c1749:c.instructions+=2;goto B6c1749;
case 0x6c174a:c.instructions+=1;goto B6c174a;
case 0x6c174d:goto L6c174d;
case 0x6c174f:c.instructions+=8;goto B6c174f;
case 0x6c1750:c.instructions+=7;goto B6c1750;
case 0x6c1752:c.instructions+=6;goto B6c1752;
case 0x6c1753:c.instructions+=5;goto B6c1753;
case 0x6c1754:c.instructions+=4;goto B6c1754;
case 0x6c1755:c.instructions+=3;goto B6c1755;
case 0x6c1757:c.instructions+=2;goto B6c1757;
case 0x6c1759:c.instructions+=1;goto B6c1759;
case 0x6c175e:goto L6c175e;
case 0x6c1760:c.instructions+=1;goto B6c1760;
case 0x6c1762:goto L6c1762;
case 0x6c1764:c.instructions+=1;goto B6c1764;
case 0x6c1769:goto L6c1769;
case 0x6c176c:c.instructions+=1;goto B6c176c;
case 0x6c176e:goto L6c176e;
case 0x6c1772:c.instructions+=1;goto B6c1772;
case 0x6c1775:goto L6c1775;
case 0x6c1777:c.instructions+=1;goto B6c1777;
case 0x6c177d:goto L6c177d;
case 0x6c177e:c.instructions+=5;goto B6c177e;
case 0x6c177f:c.instructions+=4;goto B6c177f;
case 0x6c1781:c.instructions+=3;goto B6c1781;
case 0x6c1784:c.instructions+=2;goto B6c1784;
case 0x6c1787:c.instructions+=1;goto B6c1787;
case 0x6c1788:goto L6c1788;
case 0x6c178a:goto L6c178a;
case 0x6c178d:c.instructions+=12;goto B6c178d;
case 0x6c1790:c.instructions+=11;goto B6c1790;
case 0x6c1793:c.instructions+=10;goto B6c1793;
case 0x6c1796:c.instructions+=9;goto B6c1796;
case 0x6c1799:c.instructions+=8;goto B6c1799;
case 0x6c179c:c.instructions+=7;goto B6c179c;
case 0x6c179f:c.instructions+=6;goto B6c179f;
case 0x6c17a2:c.instructions+=5;goto B6c17a2;
case 0x6c17a5:c.instructions+=4;goto B6c17a5;
case 0x6c17a7:c.instructions+=3;goto B6c17a7;
case 0x6c17aa:c.instructions+=2;goto B6c17aa;
case 0x6c17ad:c.instructions+=1;goto B6c17ad;
case 0x6c17af:goto L6c17af;
case 0x6c17b2:c.instructions+=2;goto B6c17b2;
case 0x6c17b4:c.instructions+=1;goto B6c17b4;
case 0x6c17b7:goto L6c17b7;
case 0x6c17b9:c.instructions+=3;goto B6c17b9;
case 0x6c17bc:c.instructions+=2;goto B6c17bc;
case 0x6c17bf:c.instructions+=1;goto B6c17bf;
case 0x6c17c1:goto L6c17c1;
case 0x6c17c3:goto L6c17c3;
case 0x6c17c6:c.instructions+=1;goto B6c17c6;
case 0x6c17c8:goto L6c17c8;
case 0x6c17cb:c.instructions+=2;goto B6c17cb;
case 0x6c17cd:c.instructions+=1;goto B6c17cd;
case 0x6c17d0:goto L6c17d0;
case 0x6c17d2:c.instructions+=3;goto B6c17d2;
case 0x6c17d5:c.instructions+=2;goto B6c17d5;
case 0x6c17d8:c.instructions+=1;goto B6c17d8;
case 0x6c17da:goto L6c17da;
case 0x6c17dc:goto L6c17dc;
case 0x6c17de:c.instructions+=3;goto B6c17de;
case 0x6c17e1:c.instructions+=2;goto B6c17e1;
case 0x6c17e4:c.instructions+=1;goto B6c17e4;
case 0x6c17e6:goto L6c17e6;
case 0x6c17e9:c.instructions+=1;goto B6c17e9;
case 0x6c17eb:goto L6c17eb;
case 0x6c17ed:c.instructions+=2;goto B6c17ed;
case 0x6c17ef:c.instructions+=1;goto B6c17ef;
case 0x6c17f2:goto L6c17f2;
case 0x6c17f4:c.instructions+=2;goto B6c17f4;
case 0x6c17f7:c.instructions+=1;goto B6c17f7;
case 0x6c17f9:goto L6c17f9;
case 0x6c17fc:goto L6c17fc;
case 0x6c17ff:c.instructions+=3;goto B6c17ff;
case 0x6c1802:c.instructions+=2;goto B6c1802;
case 0x6c1806:c.instructions+=1;goto B6c1806;
case 0x6c1808:goto L6c1808;
case 0x6c180a:goto L6c180a;
case 0x6c180c:goto L6c180c;
case 0x6c180d:c.instructions+=1;goto B6c180d;
case 0x6c180e:goto L6c180e;
case 0x6c180f:c.instructions+=2;goto B6c180f;
case 0x6c1810:c.instructions+=1;goto B6c1810;
case 0x6c1811:goto L6c1811;
case 0x6c1813:c.instructions+=5;goto B6c1813;
case 0x6c1814:c.instructions+=4;goto B6c1814;
case 0x6c1815:c.instructions+=3;goto B6c1815;
case 0x6c1817:c.instructions+=2;goto B6c1817;
case 0x6c1819:c.instructions+=1;goto B6c1819;
case 0x6c181e:goto L6c181e;
case 0x6c1820:c.instructions+=1;goto B6c1820;
case 0x6c1822:goto L6c1822;
case 0x6c1824:c.instructions+=1;goto B6c1824;
case 0x6c1829:goto L6c1829;
case 0x6c182b:c.instructions+=1;goto B6c182b;
case 0x6c182d:goto L6c182d;
case 0x6c182f:goto L6c182f;
case 0x6c1831:c.instructions+=1;goto B6c1831;
case 0x6c1833:goto L6c1833;
case 0x6c1836:c.instructions+=13;goto B6c1836;
case 0x6c1839:c.instructions+=12;goto B6c1839;
case 0x6c183c:c.instructions+=11;goto B6c183c;
case 0x6c183f:c.instructions+=10;goto B6c183f;
case 0x6c1842:c.instructions+=9;goto B6c1842;
case 0x6c1845:c.instructions+=8;goto B6c1845;
case 0x6c1848:c.instructions+=7;goto B6c1848;
case 0x6c184b:c.instructions+=6;goto B6c184b;
case 0x6c184e:c.instructions+=5;goto B6c184e;
case 0x6c1851:c.instructions+=4;goto B6c1851;
case 0x6c1854:c.instructions+=3;goto B6c1854;
case 0x6c1857:c.instructions+=2;goto B6c1857;
case 0x6c185b:c.instructions+=1;goto B6c185b;
case 0x6c185d:goto L6c185d;
case 0x6c1860:c.instructions+=2;goto B6c1860;
case 0x6c1862:c.instructions+=1;goto B6c1862;
case 0x6c1865:goto L6c1865;
case 0x6c1867:c.instructions+=2;goto B6c1867;
case 0x6c186a:c.instructions+=1;goto B6c186a;
case 0x6c186c:goto L6c186c;
case 0x6c186e:c.instructions+=1;goto B6c186e;
case 0x6c1870:goto L6c1870;
case 0x6c1872:goto L6c1872;
case 0x6c1873:c.instructions+=2;goto B6c1873;
case 0x6c1874:c.instructions+=1;goto B6c1874;
case 0x6c1875:goto L6c1875;
case 0x6c1877:c.instructions+=13;goto B6c1877;
case 0x6c1878:c.instructions+=12;goto B6c1878;
case 0x6c187a:c.instructions+=11;goto B6c187a;
case 0x6c187d:c.instructions+=10;goto B6c187d;
case 0x6c1880:c.instructions+=9;goto B6c1880;
case 0x6c1883:c.instructions+=8;goto B6c1883;
case 0x6c1886:c.instructions+=7;goto B6c1886;
case 0x6c1889:c.instructions+=6;goto B6c1889;
case 0x6c188a:c.instructions+=5;goto B6c188a;
case 0x6c188d:c.instructions+=4;goto B6c188d;
case 0x6c1890:c.instructions+=3;goto B6c1890;
case 0x6c1893:c.instructions+=2;goto B6c1893;
case 0x6c1895:c.instructions+=1;goto B6c1895;
case 0x6c1897:goto L6c1897;
case 0x6c1899:c.instructions+=2;goto B6c1899;
case 0x6c189a:c.instructions+=1;goto B6c189a;
case 0x6c189c:goto L6c189c;
case 0x6c189e:goto L6c189e;
case 0x6c18a1:c.instructions+=1;goto B6c18a1;
case 0x6c18a3:goto L6c18a3;
case 0x6c18a5:c.instructions+=1;goto B6c18a5;
case 0x6c18a7:goto L6c18a7;
case 0x6c18a9:goto L6c18a9;
case 0x6c18aa:c.instructions+=2;goto B6c18aa;
case 0x6c18ab:c.instructions+=1;goto B6c18ab;
case 0x6c18ae:goto L6c18ae;
case 0x6c18b0:c.instructions+=18;goto B6c18b0;
case 0x6c18b1:c.instructions+=17;goto B6c18b1;
case 0x6c18b3:c.instructions+=16;goto B6c18b3;
case 0x6c18b6:c.instructions+=15;goto B6c18b6;
case 0x6c18b9:c.instructions+=14;goto B6c18b9;
case 0x6c18bc:c.instructions+=13;goto B6c18bc;
case 0x6c18bd:c.instructions+=12;goto B6c18bd;
case 0x6c18c0:c.instructions+=11;goto B6c18c0;
case 0x6c18c3:c.instructions+=10;goto B6c18c3;
case 0x6c18c6:c.instructions+=9;goto B6c18c6;
case 0x6c18c7:c.instructions+=8;goto B6c18c7;
case 0x6c18c8:c.instructions+=7;goto B6c18c8;
case 0x6c18cb:c.instructions+=6;goto B6c18cb;
case 0x6c18ce:c.instructions+=5;goto B6c18ce;
case 0x6c18d0:c.instructions+=4;goto B6c18d0;
case 0x6c18d3:c.instructions+=3;goto B6c18d3;
case 0x6c18d6:c.instructions+=2;goto B6c18d6;
case 0x6c18db:c.instructions+=1;goto B6c18db;
case 0x6c18dd:goto L6c18dd;
case 0x6c18df:goto L6c18df;
case 0x6c18e2:c.instructions+=2;goto B6c18e2;
case 0x6c18e4:c.instructions+=1;goto B6c18e4;
case 0x6c18e6:goto L6c18e6;
case 0x6c18e8:goto L6c18e8;
case 0x6c18ea:c.instructions+=3;goto B6c18ea;
case 0x6c18ec:c.instructions+=2;goto B6c18ec;
case 0x6c18ee:c.instructions+=1;goto B6c18ee;
case 0x6c18f0:goto L6c18f0;
case 0x6c18f2:c.instructions+=1;goto B6c18f2;
case 0x6c18f4:goto L6c18f4;
case 0x6c18f7:c.instructions+=3;goto B6c18f7;
case 0x6c18f9:c.instructions+=2;goto B6c18f9;
case 0x6c18fc:c.instructions+=1;goto B6c18fc;
case 0x6c18fe:goto L6c18fe;
case 0x6c18ff:c.instructions+=5;goto B6c18ff;
case 0x6c1900:c.instructions+=4;goto B6c1900;
case 0x6c1901:c.instructions+=3;goto B6c1901;
case 0x6c1902:c.instructions+=2;goto B6c1902;
case 0x6c1904:c.instructions+=1;goto B6c1904;
case 0x6c1906:goto L6c1906;
case 0x6c1908:c.instructions+=1;goto B6c1908;
case 0x6c190a:goto L6c190a;
case 0x6c190c:c.instructions+=1;goto B6c190c;
case 0x6c190f:goto L6c190f;
case 0x6c1911:c.instructions+=1;goto B6c1911;
case 0x6c1913:goto L6c1913;
case 0x6c1915:c.instructions+=2;goto B6c1915;
case 0x6c1916:c.instructions+=1;goto B6c1916;
case 0x6c1918:goto L6c1918;
case 0x6c191a:goto L6c191a;
case 0x6c191d:c.instructions+=1;goto B6c191d;
case 0x6c191f:goto L6c191f;
case 0x6c1922:c.instructions+=5;goto B6c1922;
case 0x6c1925:c.instructions+=4;goto B6c1925;
case 0x6c1928:c.instructions+=3;goto B6c1928;
case 0x6c192b:c.instructions+=2;goto B6c192b;
case 0x6c192e:c.instructions+=1;goto B6c192e;
case 0x6c1931:goto L6c1931;
case 0x6c1933:c.instructions+=3;goto B6c1933;
case 0x6c1935:c.instructions+=2;goto B6c1935;
case 0x6c1937:c.instructions+=1;goto B6c1937;
case 0x6c1939:goto L6c1939;
case 0x6c193b:c.instructions+=1;goto B6c193b;
case 0x6c193d:goto L6c193d;
case 0x6c1940:c.instructions+=3;goto B6c1940;
case 0x6c1942:c.instructions+=2;goto B6c1942;
case 0x6c1945:c.instructions+=1;goto B6c1945;
case 0x6c1947:goto L6c1947;
case 0x6c1948:c.instructions+=5;goto B6c1948;
case 0x6c1949:c.instructions+=4;goto B6c1949;
case 0x6c194a:c.instructions+=3;goto B6c194a;
case 0x6c194b:c.instructions+=2;goto B6c194b;
case 0x6c194d:c.instructions+=1;goto B6c194d;
case 0x6c194f:goto L6c194f;
case 0x6c1951:c.instructions+=1;goto B6c1951;
case 0x6c1953:goto L6c1953;
case 0x6c1955:c.instructions+=1;goto B6c1955;
case 0x6c1958:goto L6c1958;
case 0x6c195a:c.instructions+=1;goto B6c195a;
case 0x6c195c:goto L6c195c;
case 0x6c195e:goto L6c195e;
case 0x6c1961:c.instructions+=3;goto B6c1961;
case 0x6c1964:c.instructions+=2;goto B6c1964;
case 0x6c1966:c.instructions+=1;goto B6c1966;
case 0x6c1968:goto L6c1968;
case 0x6c196a:goto L6c196a;
case 0x6c196d:c.instructions+=3;goto B6c196d;
case 0x6c1970:c.instructions+=2;goto B6c1970;
case 0x6c1972:c.instructions+=1;goto B6c1972;
case 0x6c1974:goto L6c1974;
case 0x6c1976:goto L6c1976;
case 0x6c1979:c.instructions+=3;goto B6c1979;
case 0x6c197c:c.instructions+=2;goto B6c197c;
case 0x6c197e:c.instructions+=1;goto B6c197e;
case 0x6c1980:goto L6c1980;
case 0x6c1982:c.instructions+=1;goto B6c1982;
case 0x6c1984:goto L6c1984;
case 0x6c1985:c.instructions+=4;goto B6c1985;
case 0x6c1986:c.instructions+=3;goto B6c1986;
case 0x6c1987:c.instructions+=2;goto B6c1987;
case 0x6c1988:c.instructions+=1;goto B6c1988;
case 0x6c198b:goto L6c198b;
case 0x6c198d:c.instructions+=11;goto B6c198d;
case 0x6c198e:c.instructions+=10;goto B6c198e;
case 0x6c1990:c.instructions+=9;goto B6c1990;
case 0x6c1993:c.instructions+=8;goto B6c1993;
case 0x6c1995:c.instructions+=7;goto B6c1995;
case 0x6c199b:c.instructions+=6;goto B6c199b;
case 0x6c199d:c.instructions+=5;goto B6c199d;
case 0x6c19a3:c.instructions+=4;goto B6c19a3;
case 0x6c19a6:c.instructions+=3;goto B6c19a6;
case 0x6c19a8:c.instructions+=2;goto B6c19a8;
case 0x6c19a9:c.instructions+=1;goto B6c19a9;
case 0x6c19ac:goto L6c19ac;
case 0x6c19ae:c.instructions+=6;goto B6c19ae;
case 0x6c19af:c.instructions+=5;goto B6c19af;
case 0x6c19b1:c.instructions+=4;goto B6c19b1;
case 0x6c19b7:c.instructions+=3;goto B6c19b7;
case 0x6c19ba:c.instructions+=2;goto B6c19ba;
case 0x6c19bb:c.instructions+=1;goto B6c19bb;
case 0x6c19be:goto L6c19be;
case 0x6c19c0:c.instructions+=8;goto B6c19c0;
case 0x6c19c1:c.instructions+=7;goto B6c19c1;
case 0x6c19c3:c.instructions+=6;goto B6c19c3;
case 0x6c19c9:c.instructions+=5;goto B6c19c9;
case 0x6c19cc:c.instructions+=4;goto B6c19cc;
case 0x6c19d2:c.instructions+=3;goto B6c19d2;
case 0x6c19d4:c.instructions+=2;goto B6c19d4;
case 0x6c19d5:c.instructions+=1;goto B6c19d5;
case 0x6c19d8:goto L6c19d8;
case 0x6c19da:c.instructions+=19;goto B6c19da;
case 0x6c19db:c.instructions+=18;goto B6c19db;
case 0x6c19dd:c.instructions+=17;goto B6c19dd;
case 0x6c19e0:c.instructions+=16;goto B6c19e0;
case 0x6c19e1:c.instructions+=15;goto B6c19e1;
case 0x6c19e4:c.instructions+=14;goto B6c19e4;
case 0x6c19e6:c.instructions+=13;goto B6c19e6;
case 0x6c19e7:c.instructions+=12;goto B6c19e7;
case 0x6c19e9:c.instructions+=11;goto B6c19e9;
case 0x6c19ea:c.instructions+=10;goto B6c19ea;
case 0x6c19ed:c.instructions+=9;goto B6c19ed;
case 0x6c19ee:c.instructions+=8;goto B6c19ee;
case 0x6c19ef:c.instructions+=7;goto B6c19ef;
case 0x6c19f0:c.instructions+=6;goto B6c19f0;
case 0x6c19f1:c.instructions+=5;goto B6c19f1;
case 0x6c19f3:c.instructions+=4;goto B6c19f3;
case 0x6c19f8:c.instructions+=3;goto B6c19f8;
case 0x6c19fd:c.instructions+=2;goto B6c19fd;
case 0x6c1a00:c.instructions+=1;goto B6c1a00;
case 0x6c1a06:goto L6c1a06;
case 0x6c1a0b:c.instructions+=1;goto B6c1a0b;
case 0x6c1a11:goto L6c1a11;
case 0x6c1a14:c.instructions+=5;goto B6c1a14;
case 0x6c1a16:c.instructions+=4;goto B6c1a16;
case 0x6c1a18:c.instructions+=3;goto B6c1a18;
case 0x6c1a1b:c.instructions+=2;goto B6c1a1b;
case 0x6c1a1e:c.instructions+=1;goto B6c1a1e;
case 0x6c1a24:goto L6c1a24;
case 0x6c1a27:c.instructions+=5;goto B6c1a27;
case 0x6c1a2a:c.instructions+=4;goto B6c1a2a;
case 0x6c1a2d:c.instructions+=3;goto B6c1a2d;
case 0x6c1a2f:c.instructions+=2;goto B6c1a2f;
case 0x6c1a32:c.instructions+=1;goto B6c1a32;
case 0x6c1a35:goto L6c1a35;
case 0x6c1a38:c.instructions+=8;goto B6c1a38;
case 0x6c1a3b:c.instructions+=7;goto B6c1a3b;
case 0x6c1a3e:c.instructions+=6;goto B6c1a3e;
case 0x6c1a41:c.instructions+=5;goto B6c1a41;
case 0x6c1a44:c.instructions+=4;goto B6c1a44;
case 0x6c1a46:c.instructions+=3;goto B6c1a46;
case 0x6c1a49:c.instructions+=2;goto B6c1a49;
case 0x6c1a4c:c.instructions+=1;goto B6c1a4c;
case 0x6c1a4e:goto L6c1a4e;
case 0x6c1a51:c.instructions+=3;goto B6c1a51;
case 0x6c1a53:c.instructions+=2;goto B6c1a53;
case 0x6c1a56:c.instructions+=1;goto B6c1a56;
case 0x6c1a58:goto L6c1a58;
case 0x6c1a5a:c.instructions+=2;goto B6c1a5a;
case 0x6c1a5d:c.instructions+=1;goto B6c1a5d;
case 0x6c1a63:goto L6c1a63;
case 0x6c1a66:c.instructions+=6;goto B6c1a66;
case 0x6c1a68:c.instructions+=5;goto B6c1a68;
case 0x6c1a6b:c.instructions+=4;goto B6c1a6b;
case 0x6c1a6e:c.instructions+=3;goto B6c1a6e;
case 0x6c1a70:c.instructions+=2;goto B6c1a70;
case 0x6c1a73:c.instructions+=1;goto B6c1a73;
case 0x6c1a75:goto L6c1a75;
case 0x6c1a78:goto L6c1a78;
case 0x6c1a7b:c.instructions+=4;goto B6c1a7b;
case 0x6c1a7e:c.instructions+=3;goto B6c1a7e;
case 0x6c1a82:c.instructions+=2;goto B6c1a82;
case 0x6c1a85:c.instructions+=1;goto B6c1a85;
case 0x6c1a87:goto L6c1a87;
case 0x6c1a8a:c.instructions+=3;goto B6c1a8a;
case 0x6c1a8d:c.instructions+=2;goto B6c1a8d;
case 0x6c1a90:c.instructions+=1;goto B6c1a90;
case 0x6c1a92:goto L6c1a92;
case 0x6c1a95:c.instructions+=5;goto B6c1a95;
case 0x6c1a98:c.instructions+=4;goto B6c1a98;
case 0x6c1a9b:c.instructions+=3;goto B6c1a9b;
case 0x6c1a9e:c.instructions+=2;goto B6c1a9e;
case 0x6c1aa1:c.instructions+=1;goto B6c1aa1;
case 0x6c1aa3:goto L6c1aa3;
case 0x6c1aa6:c.instructions+=3;goto B6c1aa6;
case 0x6c1aa9:c.instructions+=2;goto B6c1aa9;
case 0x6c1aac:c.instructions+=1;goto B6c1aac;
case 0x6c1aae:goto L6c1aae;
case 0x6c1ab0:c.instructions+=4;goto B6c1ab0;
case 0x6c1ab1:c.instructions+=3;goto B6c1ab1;
case 0x6c1ab4:c.instructions+=2;goto B6c1ab4;
case 0x6c1ab8:c.instructions+=1;goto B6c1ab8;
case 0x6c1aba:goto L6c1aba;
case 0x6c1abb:c.instructions+=2;goto B6c1abb;
case 0x6c1abe:c.instructions+=1;goto B6c1abe;
case 0x6c1ac0:goto L6c1ac0;
case 0x6c1ac2:c.instructions+=2;goto B6c1ac2;
case 0x6c1ac5:c.instructions+=1;goto B6c1ac5;
case 0x6c1ac7:goto L6c1ac7;
case 0x6c1aca:c.instructions+=1;goto B6c1aca;
case 0x6c1acd:goto L6c1acd;
case 0x6c1ad0:c.instructions+=5;goto B6c1ad0;
case 0x6c1ad4:c.instructions+=4;goto B6c1ad4;
case 0x6c1ad5:c.instructions+=3;goto B6c1ad5;
case 0x6c1ad8:c.instructions+=2;goto B6c1ad8;
case 0x6c1adb:c.instructions+=1;goto B6c1adb;
case 0x6c1ae1:goto L6c1ae1;
case 0x6c1ae4:c.instructions+=1;goto B6c1ae4;
case 0x6c1ae6:goto L6c1ae6;
case 0x6c1ae8:c.instructions+=3;goto B6c1ae8;
case 0x6c1aea:c.instructions+=2;goto B6c1aea;
case 0x6c1af0:c.instructions+=1;goto B6c1af0;
case 0x6c1af2:goto L6c1af2;
case 0x6c1af6:c.instructions+=1;goto B6c1af6;
case 0x6c1af8:goto L6c1af8;
case 0x6c1af9:c.instructions+=2;goto B6c1af9;
case 0x6c1afb:c.instructions+=1;goto B6c1afb;
case 0x6c1afd:goto L6c1afd;
case 0x6c1b00:c.instructions+=4;goto B6c1b00;
case 0x6c1b03:c.instructions+=3;goto B6c1b03;
case 0x6c1b05:c.instructions+=2;goto B6c1b05;
case 0x6c1b07:c.instructions+=1;goto B6c1b07;
case 0x6c1b08:goto L6c1b08;
case 0x6c1b0b:c.instructions+=2;goto B6c1b0b;
case 0x6c1b0e:c.instructions+=1;goto B6c1b0e;
case 0x6c1b10:goto L6c1b10;
case 0x6c1b14:c.instructions+=2;goto B6c1b14;
case 0x6c1b16:c.instructions+=1;goto B6c1b16;
case 0x6c1b18:goto L6c1b18;
case 0x6c1b1a:c.instructions+=2;goto B6c1b1a;
case 0x6c1b1b:c.instructions+=1;goto B6c1b1b;
case 0x6c1b1d:goto L6c1b1d;
case 0x6c1b23:goto L6c1b23;
case 0x6c1b26:c.instructions+=2;goto B6c1b26;
case 0x6c1b27:c.instructions+=1;goto B6c1b27;
case 0x6c1b29:goto L6c1b29;
case 0x6c1b2b:goto L6c1b2b;
case 0x6c1b2e:c.instructions+=3;goto B6c1b2e;
case 0x6c1b34:c.instructions+=2;goto B6c1b34;
case 0x6c1b36:c.instructions+=1;goto B6c1b36;
case 0x6c1b38:goto L6c1b38;
case 0x6c1b3a:c.instructions+=1;goto B6c1b3a;
case 0x6c1b3c:goto L6c1b3c;
case 0x6c1b3f:c.instructions+=1;goto B6c1b3f;
case 0x6c1b41:goto L6c1b41;
case 0x6c1b48:goto L6c1b48;
case 0x6c1b49:c.instructions+=2;goto B6c1b49;
case 0x6c1b4c:c.instructions+=1;goto B6c1b4c;
case 0x6c1b4e:goto L6c1b4e;
case 0x6c1b51:c.instructions+=1;goto B6c1b51;
case 0x6c1b53:goto L6c1b53;
case 0x6c1b56:c.instructions+=3;goto B6c1b56;
case 0x6c1b59:c.instructions+=2;goto B6c1b59;
case 0x6c1b5b:c.instructions+=1;goto B6c1b5b;
case 0x6c1b5e:goto L6c1b5e;
case 0x6c1b61:c.instructions+=4;goto B6c1b61;
case 0x6c1b64:c.instructions+=3;goto B6c1b64;
case 0x6c1b66:c.instructions+=2;goto B6c1b66;
case 0x6c1b69:c.instructions+=1;goto B6c1b69;
case 0x6c1b6b:goto L6c1b6b;
case 0x6c1b6e:c.instructions+=1;goto B6c1b6e;
case 0x6c1b70:goto L6c1b70;
case 0x6c1b73:c.instructions+=1;goto B6c1b73;
case 0x6c1b75:goto L6c1b75;
case 0x6c1b78:c.instructions+=1;goto B6c1b78;
case 0x6c1b7a:goto L6c1b7a;
case 0x6c1b7b:c.instructions+=2;goto B6c1b7b;
case 0x6c1b7e:c.instructions+=1;goto B6c1b7e;
case 0x6c1b80:goto L6c1b80;
case 0x6c1b82:goto L6c1b82;
case 0x6c1b83:c.instructions+=4;goto B6c1b83;
case 0x6c1b84:c.instructions+=3;goto B6c1b84;
case 0x6c1b85:c.instructions+=2;goto B6c1b85;
case 0x6c1b86:c.instructions+=1;goto B6c1b86;
case 0x6c1b89:goto L6c1b89;
case 0x6c1b8b:c.instructions+=14;goto B6c1b8b;
case 0x6c1b8c:c.instructions+=13;goto B6c1b8c;
case 0x6c1b8e:c.instructions+=12;goto B6c1b8e;
case 0x6c1b94:c.instructions+=11;goto B6c1b94;
case 0x6c1b97:c.instructions+=10;goto B6c1b97;
case 0x6c1b9a:c.instructions+=9;goto B6c1b9a;
case 0x6c1b9c:c.instructions+=8;goto B6c1b9c;
case 0x6c1b9e:c.instructions+=7;goto B6c1b9e;
case 0x6c1ba0:c.instructions+=6;goto B6c1ba0;
case 0x6c1ba6:c.instructions+=5;goto B6c1ba6;
case 0x6c1ba9:c.instructions+=4;goto B6c1ba9;
case 0x6c1bac:c.instructions+=3;goto B6c1bac;
case 0x6c1baf:c.instructions+=2;goto B6c1baf;
case 0x6c1bb2:c.instructions+=1;goto B6c1bb2;
case 0x6c1bb4:goto L6c1bb4;
case 0x6c1bb7:c.instructions+=1;goto B6c1bb7;
case 0x6c1bb9:goto L6c1bb9;
case 0x6c1bba:c.instructions+=1;goto B6c1bba;
case 0x6c1bbf:goto L6c1bbf;
case 0x6c1bc0:c.instructions+=4;goto B6c1bc0;
case 0x6c1bc3:c.instructions+=3;goto B6c1bc3;
case 0x6c1bc9:c.instructions+=2;goto B6c1bc9;
case 0x6c1bcc:c.instructions+=1;goto B6c1bcc;
case 0x6c1bce:goto L6c1bce;
case 0x6c1bd0:c.instructions+=2;goto B6c1bd0;
case 0x6c1bd1:c.instructions+=1;goto B6c1bd1;
case 0x6c1bd6:goto L6c1bd6;
case 0x6c1bd8:c.instructions+=2;goto B6c1bd8;
case 0x6c1bdf:c.instructions+=1;goto B6c1bdf;
case 0x6c1be1:goto L6c1be1;
case 0x6c1be4:c.instructions+=1;goto B6c1be4;
case 0x6c1be6:goto L6c1be6;
case 0x6c1bed:goto L6c1bed;
case 0x6c1bf0:c.instructions+=4;goto B6c1bf0;
case 0x6c1bf1:c.instructions+=3;goto B6c1bf1;
case 0x6c1bf2:c.instructions+=2;goto B6c1bf2;
case 0x6c1bf5:c.instructions+=1;goto B6c1bf5;
case 0x6c1bfb:goto L6c1bfb;
case 0x6c1bfe:c.instructions+=3;goto B6c1bfe;
case 0x6c1bff:c.instructions+=2;goto B6c1bff;
case 0x6c1c02:c.instructions+=1;goto B6c1c02;
case 0x6c1c08:goto L6c1c08;
case 0x6c1c0b:c.instructions+=5;goto B6c1c0b;
case 0x6c1c0d:c.instructions+=4;goto B6c1c0d;
case 0x6c1c10:c.instructions+=3;goto B6c1c10;
case 0x6c1c12:c.instructions+=2;goto B6c1c12;
case 0x6c1c14:c.instructions+=1;goto B6c1c14;
case 0x6c1c17:goto L6c1c17;
case 0x6c1c19:goto L6c1c19;
case 0x6c1c1a:c.instructions+=2;goto B6c1c1a;
case 0x6c1c1d:c.instructions+=1;goto B6c1c1d;
case 0x6c1c23:goto L6c1c23;
case 0x6c1c25:goto L6c1c25;
case 0x6c1c27:c.instructions+=2;goto B6c1c27;
case 0x6c1c28:c.instructions+=1;goto B6c1c28;
case 0x6c1c2e:goto L6c1c2e;
case 0x6c1c30:goto L6c1c30;
case 0x6c1c32:c.instructions+=5;goto B6c1c32;
case 0x6c1c35:c.instructions+=4;goto B6c1c35;
case 0x6c1c38:c.instructions+=3;goto B6c1c38;
case 0x6c1c3b:c.instructions+=2;goto B6c1c3b;
case 0x6c1c3e:c.instructions+=1;goto B6c1c3e;
case 0x6c1c44:goto L6c1c44;
case 0x6c1c47:goto L6c1c47;
case 0x6c1c4b:c.instructions+=1;goto B6c1c4b;
case 0x6c1c4d:goto L6c1c4d;
case 0x6c1c4f:c.instructions+=3;goto B6c1c4f;
case 0x6c1c50:c.instructions+=2;goto B6c1c50;
case 0x6c1c53:c.instructions+=1;goto B6c1c53;
case 0x6c1c55:goto L6c1c55;
case 0x6c1c58:goto L6c1c58;
case 0x6c1c5b:c.instructions+=3;goto B6c1c5b;
case 0x6c1c5d:c.instructions+=2;goto B6c1c5d;
case 0x6c1c60:c.instructions+=1;goto B6c1c60;
case 0x6c1c66:goto L6c1c66;
case 0x6c1c69:c.instructions+=11;goto B6c1c69;
case 0x6c1c6c:c.instructions+=10;goto B6c1c6c;
case 0x6c1c6f:c.instructions+=9;goto B6c1c6f;
case 0x6c1c72:c.instructions+=8;goto B6c1c72;
case 0x6c1c75:c.instructions+=7;goto B6c1c75;
case 0x6c1c77:c.instructions+=6;goto B6c1c77;
case 0x6c1c7a:c.instructions+=5;goto B6c1c7a;
case 0x6c1c7d:c.instructions+=4;goto B6c1c7d;
case 0x6c1c80:c.instructions+=3;goto B6c1c80;
case 0x6c1c84:c.instructions+=2;goto B6c1c84;
case 0x6c1c87:c.instructions+=1;goto B6c1c87;
case 0x6c1c89:goto L6c1c89;
case 0x6c1c8c:c.instructions+=2;goto B6c1c8c;
case 0x6c1c8f:c.instructions+=1;goto B6c1c8f;
case 0x6c1c95:goto L6c1c95;
case 0x6c1c97:c.instructions+=16;goto B6c1c97;
case 0x6c1c9a:c.instructions+=15;goto B6c1c9a;
case 0x6c1c9d:c.instructions+=14;goto B6c1c9d;
case 0x6c1ca0:c.instructions+=13;goto B6c1ca0;
case 0x6c1ca3:c.instructions+=12;goto B6c1ca3;
case 0x6c1ca6:c.instructions+=11;goto B6c1ca6;
case 0x6c1ca9:c.instructions+=10;goto B6c1ca9;
case 0x6c1caf:c.instructions+=9;goto B6c1caf;
case 0x6c1cb0:c.instructions+=8;goto B6c1cb0;
case 0x6c1cb3:c.instructions+=7;goto B6c1cb3;
case 0x6c1cb6:c.instructions+=6;goto B6c1cb6;
case 0x6c1cb9:c.instructions+=5;goto B6c1cb9;
case 0x6c1cbc:c.instructions+=4;goto B6c1cbc;
case 0x6c1cbd:c.instructions+=3;goto B6c1cbd;
case 0x6c1cc0:c.instructions+=2;goto B6c1cc0;
case 0x6c1cc3:c.instructions+=1;goto B6c1cc3;
case 0x6c1cc8:goto L6c1cc8;
case 0x6c1cca:c.instructions+=1;goto B6c1cca;
case 0x6c1ccc:goto L6c1ccc;
case 0x6c1ccf:c.instructions+=14;goto B6c1ccf;
case 0x6c1cd2:c.instructions+=13;goto B6c1cd2;
case 0x6c1cd5:c.instructions+=12;goto B6c1cd5;
case 0x6c1cdb:c.instructions+=11;goto B6c1cdb;
case 0x6c1cdc:c.instructions+=10;goto B6c1cdc;
case 0x6c1ce2:c.instructions+=9;goto B6c1ce2;
case 0x6c1ce3:c.instructions+=8;goto B6c1ce3;
case 0x6c1ce6:c.instructions+=7;goto B6c1ce6;
case 0x6c1ce7:c.instructions+=6;goto B6c1ce7;
case 0x6c1cea:c.instructions+=5;goto B6c1cea;
case 0x6c1ceb:c.instructions+=4;goto B6c1ceb;
case 0x6c1cee:c.instructions+=3;goto B6c1cee;
case 0x6c1cef:c.instructions+=2;goto B6c1cef;
case 0x6c1cf2:c.instructions+=1;goto B6c1cf2;
case 0x6c1cf7:goto L6c1cf7;
case 0x6c1cfa:c.instructions+=1;goto B6c1cfa;
case 0x6c1cfc:goto L6c1cfc;
case 0x6c1cff:c.instructions+=3;goto B6c1cff;
case 0x6c1d01:c.instructions+=2;goto B6c1d01;
case 0x6c1d04:c.instructions+=1;goto B6c1d04;
case 0x6c1d0b:goto L6c1d0b;
case 0x6c1d0e:c.instructions+=3;goto B6c1d0e;
case 0x6c1d11:c.instructions+=2;goto B6c1d11;
case 0x6c1d14:c.instructions+=1;goto B6c1d14;
case 0x6c1d16:goto L6c1d16;
case 0x6c1d18:c.instructions+=3;goto B6c1d18;
case 0x6c1d1b:c.instructions+=2;goto B6c1d1b;
case 0x6c1d1d:c.instructions+=1;goto B6c1d1d;
case 0x6c1d1f:goto L6c1d1f;
case 0x6c1d22:goto L6c1d22;
case 0x6c1d23:c.instructions+=3;goto B6c1d23;
case 0x6c1d26:c.instructions+=2;goto B6c1d26;
case 0x6c1d29:c.instructions+=1;goto B6c1d29;
case 0x6c1d2b:goto L6c1d2b;
case 0x6c1d2f:c.instructions+=1;goto B6c1d2f;
case 0x6c1d31:goto L6c1d31;
case 0x6c1d34:c.instructions+=6;goto B6c1d34;
case 0x6c1d37:c.instructions+=5;goto B6c1d37;
case 0x6c1d3a:c.instructions+=4;goto B6c1d3a;
case 0x6c1d3d:c.instructions+=3;goto B6c1d3d;
case 0x6c1d40:c.instructions+=2;goto B6c1d40;
case 0x6c1d43:c.instructions+=1;goto B6c1d43;
case 0x6c1d49:goto L6c1d49;
case 0x6c1d4b:goto L6c1d4b;
case 0x6c1d52:goto L6c1d52;
case 0x6c1d55:c.instructions+=4;goto B6c1d55;
case 0x6c1d57:c.instructions+=3;goto B6c1d57;
case 0x6c1d5a:c.instructions+=2;goto B6c1d5a;
case 0x6c1d5d:c.instructions+=1;goto B6c1d5d;
case 0x6c1d63:goto L6c1d63;
case 0x6c1d66:goto L6c1d66;
case 0x6c1d69:c.instructions+=1;goto B6c1d69;
case 0x6c1d6b:goto L6c1d6b;
case 0x6c1d6d:c.instructions+=3;goto B6c1d6d;
case 0x6c1d6e:c.instructions+=2;goto B6c1d6e;
case 0x6c1d71:c.instructions+=1;goto B6c1d71;
case 0x6c1d73:goto L6c1d73;
case 0x6c1d76:goto L6c1d76;
case 0x6c1d7b:c.instructions+=1;goto B6c1d7b;
case 0x6c1d7d:goto L6c1d7d;
case 0x6c1d7f:c.instructions+=3;goto B6c1d7f;
case 0x6c1d82:c.instructions+=2;goto B6c1d82;
case 0x6c1d85:c.instructions+=1;goto B6c1d85;
case 0x6c1d87:goto L6c1d87;
case 0x6c1d89:c.instructions+=2;goto B6c1d89;
case 0x6c1d8c:c.instructions+=1;goto B6c1d8c;
case 0x6c1d8e:goto L6c1d8e;
case 0x6c1d92:c.instructions+=1;goto B6c1d92;
case 0x6c1d95:goto L6c1d95;
case 0x6c1d97:c.instructions+=2;goto B6c1d97;
case 0x6c1d9a:c.instructions+=1;goto B6c1d9a;
case 0x6c1d9c:goto L6c1d9c;
case 0x6c1d9f:c.instructions+=5;goto B6c1d9f;
case 0x6c1da2:c.instructions+=4;goto B6c1da2;
case 0x6c1da5:c.instructions+=3;goto B6c1da5;
case 0x6c1da7:c.instructions+=2;goto B6c1da7;
case 0x6c1daa:c.instructions+=1;goto B6c1daa;
case 0x6c1dad:goto L6c1dad;
case 0x6c1daf:c.instructions+=1;goto B6c1daf;
case 0x6c1db1:goto L6c1db1;
case 0x6c1db4:c.instructions+=3;goto B6c1db4;
case 0x6c1db7:c.instructions+=2;goto B6c1db7;
case 0x6c1dba:c.instructions+=1;goto B6c1dba;
case 0x6c1dbc:goto L6c1dbc;
case 0x6c1dbe:goto L6c1dbe;
case 0x6c1dbf:c.instructions+=2;goto B6c1dbf;
case 0x6c1dc2:c.instructions+=1;goto B6c1dc2;
case 0x6c1dc4:goto L6c1dc4;
case 0x6c1dc6:goto L6c1dc6;
case 0x6c1dcd:c.instructions+=1;goto B6c1dcd;
case 0x6c1dcf:goto L6c1dcf;
case 0x6c1dd2:c.instructions+=4;goto B6c1dd2;
case 0x6c1dd3:c.instructions+=3;goto B6c1dd3;
case 0x6c1dd6:c.instructions+=2;goto B6c1dd6;
case 0x6c1dd9:c.instructions+=1;goto B6c1dd9;
case 0x6c1ddb:goto L6c1ddb;
case 0x6c1dde:goto L6c1dde;
case 0x6c1de1:c.instructions+=5;goto B6c1de1;
case 0x6c1de4:c.instructions+=4;goto B6c1de4;
case 0x6c1de7:c.instructions+=3;goto B6c1de7;
case 0x6c1dea:c.instructions+=2;goto B6c1dea;
case 0x6c1ded:c.instructions+=1;goto B6c1ded;
case 0x6c1df3:goto L6c1df3;
case 0x6c1df6:c.instructions+=1;goto B6c1df6;
case 0x6c1dfc:goto L6c1dfc;
case 0x6c1dff:c.instructions+=1;goto B6c1dff;
case 0x6c1e05:goto L6c1e05;
case 0x6c1e08:c.instructions+=2;goto B6c1e08;
case 0x6c1e0b:c.instructions+=1;goto B6c1e0b;
case 0x6c1e11:goto L6c1e11;
case 0x6c1e15:c.instructions+=2;goto B6c1e15;
case 0x6c1e19:c.instructions+=1;goto B6c1e19;
case 0x6c1e1f:goto L6c1e1f;
case 0x6c1e22:c.instructions+=6;goto B6c1e22;
case 0x6c1e26:c.instructions+=5;goto B6c1e26;
case 0x6c1e29:c.instructions+=4;goto B6c1e29;
case 0x6c1e2d:c.instructions+=3;goto B6c1e2d;
case 0x6c1e2f:c.instructions+=2;goto B6c1e2f;
case 0x6c1e32:c.instructions+=1;goto B6c1e32;
case 0x6c1e38:goto L6c1e38;
case 0x6c1e3b:c.instructions+=3;goto B6c1e3b;
case 0x6c1e3e:c.instructions+=2;goto B6c1e3e;
case 0x6c1e40:c.instructions+=1;goto B6c1e40;
case 0x6c1e46:goto L6c1e46;
case 0x6c1e49:c.instructions+=3;goto B6c1e49;
case 0x6c1e4c:c.instructions+=2;goto B6c1e4c;
case 0x6c1e4f:c.instructions+=1;goto B6c1e4f;
case 0x6c1e52:goto L6c1e52;
case 0x6c1e55:c.instructions+=3;goto B6c1e55;
case 0x6c1e57:c.instructions+=2;goto B6c1e57;
case 0x6c1e59:c.instructions+=1;goto B6c1e59;
case 0x6c1e5b:goto L6c1e5b;
case 0x6c1e5e:c.instructions+=1;goto B6c1e5e;
case 0x6c1e60:goto L6c1e60;
case 0x6c1e63:c.instructions+=3;goto B6c1e63;
case 0x6c1e67:c.instructions+=2;goto B6c1e67;
case 0x6c1e69:c.instructions+=1;goto B6c1e69;
case 0x6c1e6b:goto L6c1e6b;
case 0x6c1e6e:c.instructions+=5;goto B6c1e6e;
case 0x6c1e72:c.instructions+=4;goto B6c1e72;
case 0x6c1e75:c.instructions+=3;goto B6c1e75;
case 0x6c1e78:c.instructions+=2;goto B6c1e78;
case 0x6c1e7b:c.instructions+=1;goto B6c1e7b;
case 0x6c1e7e:goto L6c1e7e;
case 0x6c1e80:c.instructions+=2;goto B6c1e80;
case 0x6c1e82:c.instructions+=1;goto B6c1e82;
case 0x6c1e84:goto L6c1e84;
case 0x6c1e87:c.instructions+=4;goto B6c1e87;
case 0x6c1e8a:c.instructions+=3;goto B6c1e8a;
case 0x6c1e8d:c.instructions+=2;goto B6c1e8d;
case 0x6c1e90:c.instructions+=1;goto B6c1e90;
case 0x6c1e92:goto L6c1e92;
case 0x6c1e99:goto L6c1e99;
case 0x6c1e9c:c.instructions+=2;goto B6c1e9c;
case 0x6c1e9d:c.instructions+=1;goto B6c1e9d;
case 0x6c1e9f:goto L6c1e9f;
case 0x6c1ea2:c.instructions+=1;goto B6c1ea2;
case 0x6c1ea4:goto L6c1ea4;
case 0x6c1ea6:c.instructions+=1;goto B6c1ea6;
case 0x6c1ea8:goto L6c1ea8;
case 0x6c1eab:goto L6c1eab;
case 0x6c1ead:c.instructions+=1;goto B6c1ead;
case 0x6c1eaf:goto L6c1eaf;
case 0x6c1eb1:goto L6c1eb1;
case 0x6c1eb5:c.instructions+=1;goto B6c1eb5;
case 0x6c1eb7:goto L6c1eb7;
case 0x6c1eb9:goto L6c1eb9;
case 0x6c1eba:c.instructions+=2;goto B6c1eba;
case 0x6c1ebd:c.instructions+=1;goto B6c1ebd;
case 0x6c1ebf:goto L6c1ebf;
case 0x6c1ec1:c.instructions+=1;goto B6c1ec1;
case 0x6c1ec3:goto L6c1ec3;
case 0x6c1eca:goto L6c1eca;
case 0x6c1ece:c.instructions+=2;goto B6c1ece;
case 0x6c1ed1:c.instructions+=1;goto B6c1ed1;
case 0x6c1ed7:goto L6c1ed7;
case 0x6c1eda:c.instructions+=3;goto B6c1eda;
case 0x6c1edd:c.instructions+=2;goto B6c1edd;
case 0x6c1ee0:c.instructions+=1;goto B6c1ee0;
case 0x6c1ee6:goto L6c1ee6;
case 0x6c1ee9:c.instructions+=3;goto B6c1ee9;
case 0x6c1eec:c.instructions+=2;goto B6c1eec;
case 0x6c1eef:c.instructions+=1;goto B6c1eef;
case 0x6c1ef5:goto L6c1ef5;
case 0x6c1ef9:goto L6c1ef9;
case 0x6c1efc:c.instructions+=3;goto B6c1efc;
case 0x6c1f03:c.instructions+=2;goto B6c1f03;
case 0x6c1f06:c.instructions+=1;goto B6c1f06;
case 0x6c1f08:goto L6c1f08;
case 0x6c1f0a:c.instructions+=2;goto B6c1f0a;
case 0x6c1f0d:c.instructions+=1;goto B6c1f0d;
case 0x6c1f0f:goto L6c1f0f;
case 0x6c1f12:c.instructions+=2;goto B6c1f12;
case 0x6c1f15:c.instructions+=1;goto B6c1f15;
case 0x6c1f18:goto L6c1f18;
case 0x6c1f1c:c.instructions+=3;goto B6c1f1c;
case 0x6c1f1f:c.instructions+=2;goto B6c1f1f;
case 0x6c1f21:c.instructions+=1;goto B6c1f21;
case 0x6c1f23:goto L6c1f23;
case 0x6c1f26:goto L6c1f26;
case 0x6c1f28:c.instructions+=2;goto B6c1f28;
case 0x6c1f2a:c.instructions+=1;goto B6c1f2a;
case 0x6c1f2c:goto L6c1f2c;
case 0x6c1f2f:c.instructions+=1;goto B6c1f2f;
case 0x6c1f31:goto L6c1f31;
case 0x6c1f38:goto L6c1f38;
case 0x6c1f3b:c.instructions+=2;goto B6c1f3b;
case 0x6c1f3c:c.instructions+=1;goto B6c1f3c;
case 0x6c1f3e:goto L6c1f3e;
case 0x6c1f3f:c.instructions+=2;goto B6c1f3f;
case 0x6c1f42:c.instructions+=1;goto B6c1f42;
case 0x6c1f44:goto L6c1f44;
case 0x6c1f47:c.instructions+=2;goto B6c1f47;
case 0x6c1f4b:c.instructions+=1;goto B6c1f4b;
case 0x6c1f4d:goto L6c1f4d;
case 0x6c1f51:c.instructions+=1;goto B6c1f51;
case 0x6c1f53:goto L6c1f53;
case 0x6c1f56:c.instructions+=6;goto B6c1f56;
case 0x6c1f59:c.instructions+=5;goto B6c1f59;
case 0x6c1f5c:c.instructions+=4;goto B6c1f5c;
case 0x6c1f5f:c.instructions+=3;goto B6c1f5f;
case 0x6c1f60:c.instructions+=2;goto B6c1f60;
case 0x6c1f63:c.instructions+=1;goto B6c1f63;
case 0x6c1f69:goto L6c1f69;
case 0x6c1f6b:goto L6c1f6b;
case 0x6c1f6e:c.instructions+=1;goto B6c1f6e;
case 0x6c1f70:goto L6c1f70;
case 0x6c1f73:c.instructions+=3;goto B6c1f73;
case 0x6c1f76:c.instructions+=2;goto B6c1f76;
case 0x6c1f79:c.instructions+=1;goto B6c1f79;
case 0x6c1f7f:goto L6c1f7f;
case 0x6c1f81:goto L6c1f81;
case 0x6c1f83:c.instructions+=2;goto B6c1f83;
case 0x6c1f84:c.instructions+=1;goto B6c1f84;
case 0x6c1f86:goto L6c1f86;
case 0x6c1f89:c.instructions+=7;goto B6c1f89;
case 0x6c1f8c:c.instructions+=6;goto B6c1f8c;
case 0x6c1f8f:c.instructions+=5;goto B6c1f8f;
case 0x6c1f91:c.instructions+=4;goto B6c1f91;
case 0x6c1f93:c.instructions+=3;goto B6c1f93;
case 0x6c1f96:c.instructions+=2;goto B6c1f96;
case 0x6c1f98:c.instructions+=1;goto B6c1f98;
case 0x6c1f9b:goto L6c1f9b;
case 0x6c1f9d:goto L6c1f9d;
case 0x6c1f9f:c.instructions+=1;goto B6c1f9f;
case 0x6c1fa2:goto L6c1fa2;
case 0x6c1fa4:goto L6c1fa4;
case 0x6c1fa7:c.instructions+=7;goto B6c1fa7;
case 0x6c1faa:c.instructions+=6;goto B6c1faa;
case 0x6c1fad:c.instructions+=5;goto B6c1fad;
case 0x6c1fb0:c.instructions+=4;goto B6c1fb0;
case 0x6c1fb3:c.instructions+=3;goto B6c1fb3;
case 0x6c1fb4:c.instructions+=2;goto B6c1fb4;
case 0x6c1fb6:c.instructions+=1;goto B6c1fb6;
case 0x6c1fb8:goto L6c1fb8;
case 0x6c1fbf:c.instructions+=2;goto B6c1fbf;
case 0x6c1fc2:c.instructions+=1;goto B6c1fc2;
case 0x6c1fc4:goto L6c1fc4;
case 0x6c1fcb:c.instructions+=2;goto B6c1fcb;
case 0x6c1fce:c.instructions+=1;goto B6c1fce;
case 0x6c1fd0:goto L6c1fd0;
case 0x6c1fd3:goto L6c1fd3;
case 0x6c1fd6:c.instructions+=2;goto B6c1fd6;
case 0x6c1fdb:c.instructions+=1;goto B6c1fdb;
case 0x6c1fdd:goto L6c1fdd;
case 0x6c1fe1:goto L6c1fe1;
case 0x6c1fe4:goto L6c1fe4;
case 0x6c1fe5:c.instructions+=1;goto B6c1fe5;
case 0x6c1fe6:goto L6c1fe6;
case 0x6c1fe7:goto L6c1fe7;
case 0x6c1fe8:c.instructions+=1;goto B6c1fe8;
case 0x6c1feb:goto L6c1feb;
case 0x6c1fed:c.instructions+=11;goto B6c1fed;
case 0x6c1fee:c.instructions+=10;goto B6c1fee;
case 0x6c1ff0:c.instructions+=9;goto B6c1ff0;
case 0x6c1ff1:c.instructions+=8;goto B6c1ff1;
case 0x6c1ff2:c.instructions+=7;goto B6c1ff2;
case 0x6c1ff5:c.instructions+=6;goto B6c1ff5;
case 0x6c1ff7:c.instructions+=5;goto B6c1ff7;
case 0x6c1ffa:c.instructions+=4;goto B6c1ffa;
case 0x6c1ffb:c.instructions+=3;goto B6c1ffb;
case 0x6c1ffc:c.instructions+=2;goto B6c1ffc;
case 0x6c1fff:c.instructions+=1;goto B6c1fff;
default:missing_instruction(c.pc);}
B6c1001:L6c1001:{c.instructions+=3;NFSU2_TR(0x6c1001);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c1002:{NFSU2_TR(0x6c1002);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c1005:{NFSU2_TR(0x6c1005);
if(r1(R+512)){TAIL_STATIC(0x6c0fecu,6c0);}
}
B6c1007:L6c1007:{c.instructions+=2;NFSU2_TR(0x6c1007);
__builtin_memmove((R+4),(R+24),4);
}
B6c1009:{NFSU2_TR(0x6c1009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c100eull));
TAIL_STATIC(0x6cfccbu,6cf);
}
B6c100e:L6c100e:{c.instructions+=3;NFSU2_TR(0x6c100e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1010:{NFSU2_TR(0x6c1010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1013:{NFSU2_TR(0x6c1013);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1019:L6c1019:{c.instructions+=8;NFSU2_TR(0x6c1019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c101c:{NFSU2_TR(0x6c101c);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c101f:{NFSU2_TR(0x6c101f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20000ull))));
}
B6c1024:{NFSU2_TR(0x6c1024);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fff0000ull))));
}
B6c1029:{NFSU2_TR(0x6c1029);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffeull))));
}
B6c102e:{NFSU2_TR(0x6c102e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c102f:{NFSU2_TR(0x6c102f);
__builtin_memmove((R+4),(R+24),4);
}
B6c1031:{NFSU2_TR(0x6c1031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1036ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c1036:L6c1036:{c.instructions+=3;NFSU2_TR(0x6c1036);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1038:{NFSU2_TR(0x6c1038);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c103b:{NFSU2_TR(0x6c103b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1041:L6c1041:{c.instructions+=3;NFSU2_TR(0x6c1041);
u8 U[4];
w4(U+0,u32(0x54494c43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1046:{NFSU2_TR(0x6c1046);
__builtin_memmove((R+4),(R+24),4);
}
B6c1048:{NFSU2_TR(0x6c1048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c104dull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c104d:L6c104d:{c.instructions+=3;NFSU2_TR(0x6c104d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c104f:{NFSU2_TR(0x6c104f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1052:{NFSU2_TR(0x6c1052);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1058:L6c1058:{c.instructions+=5;NFSU2_TR(0x6c1058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c105b:{NFSU2_TR(0x6c105b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6c105e:{NFSU2_TR(0x6c105e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c105f:{NFSU2_TR(0x6c105f);
__builtin_memmove((R+4),(R+24),4);
}
B6c1061:{NFSU2_TR(0x6c1061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1066ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c1066:L6c1066:{c.instructions+=3;NFSU2_TR(0x6c1066);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1068:{NFSU2_TR(0x6c1068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c106b:{NFSU2_TR(0x6c106b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1071:L6c1071:{c.instructions+=3;NFSU2_TR(0x6c1071);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1073:{NFSU2_TR(0x6c1073);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1075:{NFSU2_TR(0x6c1075);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1099;}}
}
B6c1077:L6c1077:{c.instructions+=7;NFSU2_TR(0x6c1077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c107a:{NFSU2_TR(0x6c107a);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c107d:{NFSU2_TR(0x6c107d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c107e:{NFSU2_TR(0x6c107e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c107f:{NFSU2_TR(0x6c107f);
__builtin_memmove((R+4),(R+24),4);
}
B6c1081:{NFSU2_TR(0x6c1081);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c1084:{NFSU2_TR(0x6c1084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1089ull));
TAIL_STATIC(0x6c0486u,6c0);
}
B6c1089:L6c1089:{c.instructions+=3;NFSU2_TR(0x6c1089);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c108b:{NFSU2_TR(0x6c108b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c108e:{NFSU2_TR(0x6c108e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1094:L6c1094:{c.instructions+=3;NFSU2_TR(0x6c1094);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c1095:{NFSU2_TR(0x6c1095);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6c1097:{NFSU2_TR(0x6c1097);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1077u);}goto L6c1077;}}
}
B6c1099:L6c1099:{c.instructions+=5;NFSU2_TR(0x6c1099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c109f:{NFSU2_TR(0x6c109f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c10a1:{NFSU2_TR(0x6c10a1);
__builtin_memmove((R+4),(R+24),4);
}
B6c10a3:{NFSU2_TR(0x6c10a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c10a6:{NFSU2_TR(0x6c10a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c10abull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c10ab:L6c10ab:{c.instructions+=3;NFSU2_TR(0x6c10ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c10ad:{NFSU2_TR(0x6c10ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c10b0:{NFSU2_TR(0x6c10b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c10b6:L6c10b6:{c.instructions+=3;NFSU2_TR(0x6c10b6);
u8 U[4];
w4(U+0,u32(0x434c5846ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c10bb:{NFSU2_TR(0x6c10bb);
__builtin_memmove((R+4),(R+24),4);
}
B6c10bd:{NFSU2_TR(0x6c10bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c10c2ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c10c2:L6c10c2:{c.instructions+=3;NFSU2_TR(0x6c10c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c10c4:{NFSU2_TR(0x6c10c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c10c7:{NFSU2_TR(0x6c10c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c10cd:L6c10cd:{c.instructions+=3;NFSU2_TR(0x6c10cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c10d0:{NFSU2_TR(0x6c10d0);
__builtin_memmove((R+4),(R+24),4);
}
B6c10d2:{NFSU2_TR(0x6c10d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c10d7ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c10d7:L6c10d7:{c.instructions+=3;NFSU2_TR(0x6c10d7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c10d9:{NFSU2_TR(0x6c10d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c10dc:{NFSU2_TR(0x6c10dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c10e2:L6c10e2:{c.instructions+=4;NFSU2_TR(0x6c10e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c10e4:{NFSU2_TR(0x6c10e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c10e7:{NFSU2_TR(0x6c10e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c10ea:{NFSU2_TR(0x6c10ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c12d3;}}
}
B6c10f0:L6c10f0:{c.instructions+=1;NFSU2_TR(0x6c10f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c10f3:L6c10f3:{c.instructions+=11;NFSU2_TR(0x6c10f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c10f6:{NFSU2_TR(0x6c10f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c10f9:{NFSU2_TR(0x6c10f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c10fc:{NFSU2_TR(0x6c10fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c10ff:{NFSU2_TR(0x6c10ff);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6c1101:{NFSU2_TR(0x6c1101);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c1103:{NFSU2_TR(0x6c1103);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
}
B6c1109:{NFSU2_TR(0x6c1109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+0))));
}
B6c110b:{NFSU2_TR(0x6c110b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c110c:{NFSU2_TR(0x6c110c);
__builtin_memmove((R+4),(R+24),4);
}
B6c110e:{NFSU2_TR(0x6c110e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1113ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c1113:L6c1113:{c.instructions+=3;NFSU2_TR(0x6c1113);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1115:{NFSU2_TR(0x6c1115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1118:{NFSU2_TR(0x6c1118);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c111e:L6c111e:{c.instructions+=12;NFSU2_TR(0x6c111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1121:{NFSU2_TR(0x6c1121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1124:{NFSU2_TR(0x6c1124);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1127:{NFSU2_TR(0x6c1127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c1129:{NFSU2_TR(0x6c1129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c112c:{NFSU2_TR(0x6c112c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c112e:{NFSU2_TR(0x6c112e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6c1134:{NFSU2_TR(0x6c1134);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c1134);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c1134);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6c1136:{NFSU2_TR(0x6c1136);
__builtin_memmove((R+4),(R+24),4);
}
B6c1138:{NFSU2_TR(0x6c1138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1139:{NFSU2_TR(0x6c1139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c113c:{NFSU2_TR(0x6c113c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1141ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c1141:L6c1141:{c.instructions+=3;NFSU2_TR(0x6c1141);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1143:{NFSU2_TR(0x6c1143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1146:{NFSU2_TR(0x6c1146);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c114c:L6c114c:{c.instructions+=7;NFSU2_TR(0x6c114c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1152:{NFSU2_TR(0x6c1152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1155:{NFSU2_TR(0x6c1155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1159:{NFSU2_TR(0x6c1159);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c115c:{NFSU2_TR(0x6c115c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x2ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c115f:{NFSU2_TR(0x6c115f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1163:{NFSU2_TR(0x6c1163);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c121c;}}
}
B6c1169:L6c1169:{c.instructions+=4;NFSU2_TR(0x6c1169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c116d:{NFSU2_TR(0x6c116d);
__builtin_memmove((R+0),(R+28),4);
}
B6c116f:{NFSU2_TR(0x6c116f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c1172:{NFSU2_TR(0x6c1172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1175:L6c1175:{c.instructions+=12;NFSU2_TR(0x6c1175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1178:{NFSU2_TR(0x6c1178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c117b:{NFSU2_TR(0x6c117b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c117e:{NFSU2_TR(0x6c117e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1181:{NFSU2_TR(0x6c1181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1184:{NFSU2_TR(0x6c1184);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1187:{NFSU2_TR(0x6c1187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c118a:{NFSU2_TR(0x6c118a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c118d:{NFSU2_TR(0x6c118d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1193:{NFSU2_TR(0x6c1193);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1195:{NFSU2_TR(0x6c1195);
__builtin_memmove((R+4),(R+24),4);
}
B6c1197:{NFSU2_TR(0x6c1197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c119cull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c119c:L6c119c:{c.instructions+=3;NFSU2_TR(0x6c119c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c119e:{NFSU2_TR(0x6c119e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c11a1:{NFSU2_TR(0x6c11a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c11a7:L6c11a7:{c.instructions+=3;NFSU2_TR(0x6c11a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c11aa:{NFSU2_TR(0x6c11aa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c11ad:{NFSU2_TR(0x6c11ad);
if(r1(R+518)){{goto L6c11c3;}}
}
B6c11af:L6c11af:{c.instructions+=4;NFSU2_TR(0x6c11af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c11b0:{NFSU2_TR(0x6c11b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c11b1:{NFSU2_TR(0x6c11b1);
__builtin_memmove((R+4),(R+24),4);
}
B6c11b3:{NFSU2_TR(0x6c11b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c11b8ull));
TAIL_STATIC(0x6c06b6u,6c0);
}
B6c11b8:L6c11b8:{c.instructions+=3;NFSU2_TR(0x6c11b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c11ba:{NFSU2_TR(0x6c11ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c11bd:{NFSU2_TR(0x6c11bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c11c3:L6c11c3:{c.instructions+=3;NFSU2_TR(0x6c11c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c11c4:{NFSU2_TR(0x6c11c4);
__builtin_memmove((R+4),(R+24),4);
}
B6c11c6:{NFSU2_TR(0x6c11c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c11cbull));
TAIL_STATIC(0x6c03c5u,6c0);
}
B6c11cb:L6c11cb:{c.instructions+=3;NFSU2_TR(0x6c11cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c11cd:{NFSU2_TR(0x6c11cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c11d0:{NFSU2_TR(0x6c11d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c11d6:L6c11d6:{c.instructions+=6;NFSU2_TR(0x6c11d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c11d9:{NFSU2_TR(0x6c11d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c11dc:{NFSU2_TR(0x6c11dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c11df:{NFSU2_TR(0x6c11df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c11e0:{NFSU2_TR(0x6c11e0);
__builtin_memmove((R+4),(R+24),4);
}
B6c11e2:{NFSU2_TR(0x6c11e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c11e7ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c11e7:L6c11e7:{c.instructions+=3;NFSU2_TR(0x6c11e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c11e9:{NFSU2_TR(0x6c11e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c11ec:{NFSU2_TR(0x6c11ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c11f2:L6c11f2:{c.instructions+=12;NFSU2_TR(0x6c11f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c11f8:{NFSU2_TR(0x6c11f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c11fb:{NFSU2_TR(0x6c11fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c11fe:{NFSU2_TR(0x6c11fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1201:{NFSU2_TR(0x6c1201);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c1205:{NFSU2_TR(0x6c1205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c1207:{NFSU2_TR(0x6c1207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c120a:{NFSU2_TR(0x6c120a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c120d:{NFSU2_TR(0x6c120d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1210:{NFSU2_TR(0x6c1210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1213:{NFSU2_TR(0x6c1213);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c1216:{NFSU2_TR(0x6c1216);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1175u);}goto L6c1175;}}
}
B6c121c:L6c121c:{c.instructions+=1;NFSU2_TR(0x6c121c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1220:L6c1220:{c.instructions+=12;NFSU2_TR(0x6c1220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1223:{NFSU2_TR(0x6c1223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1226:{NFSU2_TR(0x6c1226);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1229:{NFSU2_TR(0x6c1229);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c122c:{NFSU2_TR(0x6c122c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c122f:{NFSU2_TR(0x6c122f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1232:{NFSU2_TR(0x6c1232);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1235:{NFSU2_TR(0x6c1235);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c1238:{NFSU2_TR(0x6c1238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c123e:{NFSU2_TR(0x6c123e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1240:{NFSU2_TR(0x6c1240);
__builtin_memmove((R+4),(R+24),4);
}
B6c1242:{NFSU2_TR(0x6c1242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1247ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c1247:L6c1247:{c.instructions+=3;NFSU2_TR(0x6c1247);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1249:{NFSU2_TR(0x6c1249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c124c:{NFSU2_TR(0x6c124c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1252:L6c1252:{c.instructions+=3;NFSU2_TR(0x6c1252);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1255:{NFSU2_TR(0x6c1255);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1258:{NFSU2_TR(0x6c1258);
if(r1(R+518)){{goto L6c126e;}}
}
B6c125a:L6c125a:{c.instructions+=4;NFSU2_TR(0x6c125a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c125b:{NFSU2_TR(0x6c125b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c125c:{NFSU2_TR(0x6c125c);
__builtin_memmove((R+4),(R+24),4);
}
B6c125e:{NFSU2_TR(0x6c125e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1263ull));
TAIL_STATIC(0x6c06b6u,6c0);
}
B6c1263:L6c1263:{c.instructions+=3;NFSU2_TR(0x6c1263);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1265:{NFSU2_TR(0x6c1265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1268:{NFSU2_TR(0x6c1268);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c126e:L6c126e:{c.instructions+=3;NFSU2_TR(0x6c126e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c126f:{NFSU2_TR(0x6c126f);
__builtin_memmove((R+4),(R+24),4);
}
B6c1271:{NFSU2_TR(0x6c1271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1276ull));
TAIL_STATIC(0x6c03c5u,6c0);
}
B6c1276:L6c1276:{c.instructions+=3;NFSU2_TR(0x6c1276);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1278:{NFSU2_TR(0x6c1278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c127b:{NFSU2_TR(0x6c127b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1281:L6c1281:{c.instructions+=6;NFSU2_TR(0x6c1281);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1284:{NFSU2_TR(0x6c1284);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1287:{NFSU2_TR(0x6c1287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c128a:{NFSU2_TR(0x6c128a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c128b:{NFSU2_TR(0x6c128b);
__builtin_memmove((R+4),(R+24),4);
}
B6c128d:{NFSU2_TR(0x6c128d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1292ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c1292:L6c1292:{c.instructions+=3;NFSU2_TR(0x6c1292);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1294:{NFSU2_TR(0x6c1294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1297:{NFSU2_TR(0x6c1297);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c129d:L6c129d:{c.instructions+=9;NFSU2_TR(0x6c129d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c12a3:{NFSU2_TR(0x6c12a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c12a6:{NFSU2_TR(0x6c12a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c12aa:{NFSU2_TR(0x6c12aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c12ad:{NFSU2_TR(0x6c12ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c12b0:{NFSU2_TR(0x6c12b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c12b4:{NFSU2_TR(0x6c12b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c12b6:{NFSU2_TR(0x6c12b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6c12ba:{NFSU2_TR(0x6c12ba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1220u);}goto L6c1220;}}
}
B6c12c0:L6c12c0:{c.instructions+=5;NFSU2_TR(0x6c12c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c12c3:{NFSU2_TR(0x6c12c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c12c6:{NFSU2_TR(0x6c12c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c12ca:{NFSU2_TR(0x6c12ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c12cd:{NFSU2_TR(0x6c12cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c10f3u);}goto L6c10f3;}}
}
B6c12d3:L6c12d3:{c.instructions+=3;NFSU2_TR(0x6c12d3);
u8 U[4];
w4(U+0,u32(0xf0f0f0f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c12d8:{NFSU2_TR(0x6c12d8);
__builtin_memmove((R+4),(R+24),4);
}
B6c12da:{NFSU2_TR(0x6c12da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c12dfull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c12df:L6c12df:{c.instructions+=3;NFSU2_TR(0x6c12df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c12e1:{NFSU2_TR(0x6c12e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c12e4:{NFSU2_TR(0x6c12e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c12ea:L6c12ea:{c.instructions+=3;NFSU2_TR(0x6c12ea);
u8 U[4];
w4(U+0,u32(0xf0f0f0full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c12ef:{NFSU2_TR(0x6c12ef);
__builtin_memmove((R+4),(R+24),4);
}
B6c12f1:{NFSU2_TR(0x6c12f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c12f6ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c12f6:L6c12f6:{c.instructions+=3;NFSU2_TR(0x6c12f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c12f8:{NFSU2_TR(0x6c12f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c12fb:{NFSU2_TR(0x6c12fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1301:L6c1301:{c.instructions+=12;NFSU2_TR(0x6c1301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1307:{NFSU2_TR(0x6c1307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c130a:{NFSU2_TR(0x6c130a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c130d:{NFSU2_TR(0x6c130d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c130f:{NFSU2_TR(0x6c130f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c1312:{NFSU2_TR(0x6c1312);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c1315:{NFSU2_TR(0x6c1315);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fff0000ull))));
}
B6c131b:{NFSU2_TR(0x6c131b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffeull))));
}
B6c1321:{NFSU2_TR(0x6c1321);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c1323:{NFSU2_TR(0x6c1323);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1328:{NFSU2_TR(0x6c1328);
__builtin_memmove((R+4),(R+24),4);
}
B6c132a:{NFSU2_TR(0x6c132a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c132full));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6c132f:L6c132f:{c.instructions+=3;NFSU2_TR(0x6c132f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c1331:{NFSU2_TR(0x6c1331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1334:{NFSU2_TR(0x6c1334);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1336:L6c1336:{c.instructions+=2;NFSU2_TR(0x6c1336);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c133a:{NFSU2_TR(0x6c133a);
if(r1(R+518)){{goto L6c1388;}}
}
B6c133c:L6c133c:{c.instructions+=6;NFSU2_TR(0x6c133c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c133f:{NFSU2_TR(0x6c133f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1340:{NFSU2_TR(0x6c1340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1346:{NFSU2_TR(0x6c1346);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c1349:{NFSU2_TR(0x6c1349);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c134a:{NFSU2_TR(0x6c134a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c134full));
TAIL_STATIC(0x670ea6u,670);
}
B6c134f:L6c134f:{c.instructions+=3;NFSU2_TR(0x6c134f);
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
B6c1351:{NFSU2_TR(0x6c1351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1354:{NFSU2_TR(0x6c1354);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c138c;}}
}
B6c1356:L6c1356:{c.instructions+=7;NFSU2_TR(0x6c1356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1359:{NFSU2_TR(0x6c1359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c135f:{NFSU2_TR(0x6c135f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c1361:{NFSU2_TR(0x6c1361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1367:{NFSU2_TR(0x6c1367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1368:{NFSU2_TR(0x6c1368);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6c136b:{NFSU2_TR(0x6c136b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c136eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c136e:L6c136e:{c.instructions+=4;NFSU2_TR(0x6c136e);
__builtin_memmove((R+28),(R+0),4);
}
B6c1370:{NFSU2_TR(0x6c1370);
__builtin_memmove((R+4),(R+12),4);
}
B6c1372:{NFSU2_TR(0x6c1372);
__builtin_memmove((R+0),(R+4),4);
}
B6c1374:{NFSU2_TR(0x6c1374);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c1377:L6c1377:{c.instructions+=1;NFSU2_TR(0x6c1377);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c1379;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1377u);}goto L6c1377;}
}
B6c1379:L6c1379:{c.instructions+=2;NFSU2_TR(0x6c1379);
__builtin_memmove((R+4),(R+0),4);
}
B6c137b:{NFSU2_TR(0x6c137b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c137e:L6c137e:{c.instructions+=1;NFSU2_TR(0x6c137e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c1380;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c137eu);}goto L6c137e;}
}
B6c1380:L6c1380:{c.instructions+=3;NFSU2_TR(0x6c1380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1383:{NFSU2_TR(0x6c1383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1386:{NFSU2_TR(0x6c1386);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c1388:L6c1388:{c.instructions+=1;NFSU2_TR(0x6c1388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c138c:L6c138c:{c.instructions+=3;NFSU2_TR(0x6c138c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c138d:{NFSU2_TR(0x6c138d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1390:{NFSU2_TR(0x6c1390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1395ull));
TAIL_STATIC(0x575630u,575);
}
B6c1395:L6c1395:{c.instructions+=2;NFSU2_TR(0x6c1395);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1398:{NFSU2_TR(0x6c1398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c139dull));
TAIL_STATIC(0x575630u,575);
}
B6c139d:L6c139d:{c.instructions+=2;NFSU2_TR(0x6c139d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c13a0:{NFSU2_TR(0x6c13a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c13a5ull));
TAIL_STATIC(0x575630u,575);
}
B6c13a5:L6c13a5:{c.instructions+=2;NFSU2_TR(0x6c13a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c13a8:{NFSU2_TR(0x6c13a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c13adull));
TAIL_STATIC(0x575630u,575);
}
B6c13ad:L6c13ad:{c.instructions+=6;NFSU2_TR(0x6c13ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c13b0:{NFSU2_TR(0x6c13b0);
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
B6c13b3:{NFSU2_TR(0x6c13b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c13b4:{NFSU2_TR(0x6c13b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c13b5:{NFSU2_TR(0x6c13b5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c13b6:{NFSU2_TR(0x6c13b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c13b9:L6c13b9:{c.instructions+=12;NFSU2_TR(0x6c13b9);
__builtin_memmove((R+28),(R+28),4);
}
B6c13bb:{NFSU2_TR(0x6c13bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c13bc:{NFSU2_TR(0x6c13bc);
__builtin_memmove((R+20),(R+16),4);
}
B6c13be:{NFSU2_TR(0x6c13be);
__builtin_memmove((R+0),(R+4),4);
}
B6c13c0:{NFSU2_TR(0x6c13c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c13c3:{NFSU2_TR(0x6c13c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c13c7:{NFSU2_TR(0x6c13c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c13c9:{NFSU2_TR(0x6c13c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c13cc:{NFSU2_TR(0x6c13cc);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6c13cf:{NFSU2_TR(0x6c13cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c13d2:{NFSU2_TR(0x6c13d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c13d3:{NFSU2_TR(0x6c13d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c13d6:L6c13d6:{c.instructions+=5;NFSU2_TR(0x6c13d6);
__builtin_memmove((R+28),(R+28),4);
}
B6c13d8:{NFSU2_TR(0x6c13d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c13d9:{NFSU2_TR(0x6c13d9);
__builtin_memmove((R+24),(R+4),4);
}
B6c13db:{NFSU2_TR(0x6c13db);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c13df:{NFSU2_TR(0x6c13df);
if(r1(R+518)){{goto L6c140c;}}
}
B6c13e1:L6c13e1:{c.instructions+=1;NFSU2_TR(0x6c13e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c13e2:L6c13e2:{c.instructions+=6;NFSU2_TR(0x6c13e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c13e5:{NFSU2_TR(0x6c13e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c13e8:{NFSU2_TR(0x6c13e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c13eb:{NFSU2_TR(0x6c13eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c13ee:{NFSU2_TR(0x6c13ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c13f0:{NFSU2_TR(0x6c13f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c13f6;}}
}
B6c13f2:L6c13f2:{c.instructions+=2;NFSU2_TR(0x6c13f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c13f4:{NFSU2_TR(0x6c13f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c13fe;}}
}
B6c13f6:L6c13f6:{c.instructions+=2;NFSU2_TR(0x6c13f6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6c13f8:{NFSU2_TR(0x6c13f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c13fdull));
TAIL_STATIC(0x575630u,575);
}
B6c13fd:L6c13fd:{c.instructions+=1;NFSU2_TR(0x6c13fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c13fe:L6c13fe:{c.instructions+=2;NFSU2_TR(0x6c13fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c13ff:{NFSU2_TR(0x6c13ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1404ull));
TAIL_STATIC(0x575630u,575);
}
B6c1404:L6c1404:{c.instructions+=3;NFSU2_TR(0x6c1404);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c1408:{NFSU2_TR(0x6c1408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c1409:{NFSU2_TR(0x6c1409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c13e2u);}goto L6c13e2;}}
}
B6c140b:L6c140b:{c.instructions+=1;NFSU2_TR(0x6c140b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c140c:L6c140c:{c.instructions+=2;NFSU2_TR(0x6c140c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c140d:{NFSU2_TR(0x6c140d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c140e:L6c140e:{c.instructions+=11;NFSU2_TR(0x6c140e);
__builtin_memmove((R+28),(R+28),4);
}
B6c1410:{NFSU2_TR(0x6c1410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1411:{NFSU2_TR(0x6c1411);
__builtin_memmove((R+20),(R+16),4);
}
B6c1413:{NFSU2_TR(0x6c1413);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1414:{NFSU2_TR(0x6c1414);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1415:{NFSU2_TR(0x6c1415);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1416:{NFSU2_TR(0x6c1416);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1419:{NFSU2_TR(0x6c1419);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c141b:{NFSU2_TR(0x6c141b);
__builtin_memmove((R+24),(R+4),4);
}
B6c141d:{NFSU2_TR(0x6c141d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1420:{NFSU2_TR(0x6c1420);
if(r1(R+518)){{goto L6c1432;}}
}
B6c1422:L6c1422:{c.instructions+=2;NFSU2_TR(0x6c1422);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c1426:{NFSU2_TR(0x6c1426);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1432;}}
}
B6c1428:L6c1428:{c.instructions+=2;NFSU2_TR(0x6c1428);
w4(R+0,u32(0x80004005ull));
}
B6c142d:{NFSU2_TR(0x6c142d);
{goto L6c1541;}
}
B6c1432:L6c1432:{c.instructions+=2;NFSU2_TR(0x6c1432);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1435:{NFSU2_TR(0x6c1435);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c144c;}}
}
B6c1437:L6c1437:{c.instructions+=2;NFSU2_TR(0x6c1437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c143a:{NFSU2_TR(0x6c143a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6c143d:L6c143d:{c.instructions+=4;NFSU2_TR(0x6c143d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6c143f:{NFSU2_TR(0x6c143f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1440:{NFSU2_TR(0x6c1440);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c1442:{NFSU2_TR(0x6c1442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c143du);}goto L6c143d;}}
}
B6c1444:L6c1444:{c.instructions+=4;NFSU2_TR(0x6c1444);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6c1446:{NFSU2_TR(0x6c1446);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1447:{NFSU2_TR(0x6c1447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c144a:{NFSU2_TR(0x6c144a);
__builtin_memmove((R+28),(R+0),4);
}
B6c144c:L6c144c:{c.instructions+=2;NFSU2_TR(0x6c144c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c1450:{NFSU2_TR(0x6c1450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1456;}}
}
B6c1452:L6c1452:{c.instructions+=1;NFSU2_TR(0x6c1452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1456:L6c1456:{c.instructions+=2;NFSU2_TR(0x6c1456);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c145a:{NFSU2_TR(0x6c145a);
if(r1(R+518)){{goto L6c1486;}}
}
B6c145c:L6c145c:{c.instructions+=2;NFSU2_TR(0x6c145c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c145f:{NFSU2_TR(0x6c145f);
{goto L6c1482;}
}
B6c1461:L6c1461:{c.instructions+=2;NFSU2_TR(0x6c1461);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c1465:{NFSU2_TR(0x6c1465);
if(r1(R+518)){{goto L6c147f;}}
}
B6c1467:L6c1467:{c.instructions+=2;NFSU2_TR(0x6c1467);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c146a:{NFSU2_TR(0x6c146a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c147f;}}
}
B6c146c:L6c146c:{c.instructions+=4;NFSU2_TR(0x6c146c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c146f:{NFSU2_TR(0x6c146f);
__builtin_memmove((R+4),(R+28),4);
}
B6c1471:{NFSU2_TR(0x6c1471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c1473:{NFSU2_TR(0x6c1473);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c1475:L6c1475:{c.instructions+=1;NFSU2_TR(0x6c1475);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c1477;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1475u);}goto L6c1475;}}
}
B6c1477:L6c1477:{c.instructions+=1;NFSU2_TR(0x6c1477);
if(r1(R+518)){{goto L6c149f;}}
}
B6c1479:L6c1479:{c.instructions+=2;NFSU2_TR(0x6c1479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c147c:{NFSU2_TR(0x6c147c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c147f:L6c147f:{c.instructions+=1;NFSU2_TR(0x6c147f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1482:L6c1482:{c.instructions+=2;NFSU2_TR(0x6c1482);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1484:{NFSU2_TR(0x6c1484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1461u);}goto L6c1461;}}
}
B6c1486:L6c1486:{c.instructions+=3;NFSU2_TR(0x6c1486);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1487:{NFSU2_TR(0x6c1487);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1489:{NFSU2_TR(0x6c1489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c148eull));
TAIL_STATIC(0x575620u,575);
}
B6c148e:L6c148e:{c.instructions+=4;NFSU2_TR(0x6c148e);
__builtin_memmove((R+12),(R+0),4);
}
B6c1490:{NFSU2_TR(0x6c1490);
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
B6c1492:{NFSU2_TR(0x6c1492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c1493:{NFSU2_TR(0x6c1493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c14c4;}}
}
B6c1495:L6c1495:{c.instructions+=2;NFSU2_TR(0x6c1495);
w4(R+0,u32(0x8007000eull));
}
B6c149a:{NFSU2_TR(0x6c149a);
{goto L6c1540;}
}
B6c149f:L6c149f:{c.instructions+=3;NFSU2_TR(0x6c149f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c14a2:{NFSU2_TR(0x6c14a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c14a4:{NFSU2_TR(0x6c14a4);
if(r1(R+518)){{goto L6c14ab;}}
}
B6c14a6:L6c14a6:{c.instructions+=2;NFSU2_TR(0x6c14a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c14a9:{NFSU2_TR(0x6c14a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c14ab:L6c14ab:{c.instructions+=2;NFSU2_TR(0x6c14ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c14af:{NFSU2_TR(0x6c14af);
if(r1(R+518)){{goto L6c14c0;}}
}
B6c14b1:L6c14b1:{c.instructions+=2;NFSU2_TR(0x6c14b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c14b5:{NFSU2_TR(0x6c14b5);
if(r1(R+518)){{goto L6c14c0;}}
}
B6c14b7:L6c14b7:{c.instructions+=2;NFSU2_TR(0x6c14b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c14ba:{NFSU2_TR(0x6c14ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c14bfull));
TAIL_STATIC(0x575630u,575);
}
B6c14bf:L6c14bf:{c.instructions+=1;NFSU2_TR(0x6c14bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c14c0:L6c14c0:{c.instructions+=2;NFSU2_TR(0x6c14c0);
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
B6c14c2:{NFSU2_TR(0x6c14c2);
{goto L6c1541;}
}
B6c14c4:L6c14c4:{c.instructions+=2;NFSU2_TR(0x6c14c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c14c8:{NFSU2_TR(0x6c14c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c14fd;}}
}
B6c14ca:L6c14ca:{c.instructions+=2;NFSU2_TR(0x6c14ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c14cb:{NFSU2_TR(0x6c14cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c14d0ull));
TAIL_STATIC(0x575620u,575);
}
B6c14d0:L6c14d0:{c.instructions+=4;NFSU2_TR(0x6c14d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c14d2:{NFSU2_TR(0x6c14d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c14d3:{NFSU2_TR(0x6c14d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6c14d5:{NFSU2_TR(0x6c14d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c14e0;}}
}
B6c14d7:L6c14d7:{c.instructions+=2;NFSU2_TR(0x6c14d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c14d8:{NFSU2_TR(0x6c14d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c14ddull));
TAIL_STATIC(0x575630u,575);
}
B6c14dd:L6c14dd:{c.instructions+=2;NFSU2_TR(0x6c14dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c14de:{NFSU2_TR(0x6c14de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1495u);}goto L6c1495;}
}
B6c14e0:L6c14e0:{c.instructions+=5;NFSU2_TR(0x6c14e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c14e3:{NFSU2_TR(0x6c14e3);
__builtin_memmove((R+4),(R+28),4);
}
B6c14e5:{NFSU2_TR(0x6c14e5);
__builtin_memmove((R+28),(R+0),4);
}
B6c14e7:{NFSU2_TR(0x6c14e7);
__builtin_memmove((R+0),(R+4),4);
}
B6c14e9:{NFSU2_TR(0x6c14e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c14ec:L6c14ec:{c.instructions+=1;NFSU2_TR(0x6c14ec);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c14ee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c14ecu);}goto L6c14ec;}
}
B6c14ee:L6c14ee:{c.instructions+=2;NFSU2_TR(0x6c14ee);
__builtin_memmove((R+4),(R+0),4);
}
B6c14f0:{NFSU2_TR(0x6c14f0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c14f3:L6c14f3:{c.instructions+=1;NFSU2_TR(0x6c14f3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c14f5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c14f3u);}goto L6c14f3;}
}
B6c14f5:L6c14f5:{c.instructions+=3;NFSU2_TR(0x6c14f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c14f8:{NFSU2_TR(0x6c14f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c14fb:{NFSU2_TR(0x6c14fb);
{goto L6c1502;}
}
B6c14fd:L6c14fd:{c.instructions+=2;NFSU2_TR(0x6c14fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1500:{NFSU2_TR(0x6c1500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6c1502:L6c1502:{c.instructions+=3;NFSU2_TR(0x6c1502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1505:{NFSU2_TR(0x6c1505);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c1507:{NFSU2_TR(0x6c1507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1515;}}
}
B6c1509:L6c1509:{c.instructions+=4;NFSU2_TR(0x6c1509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c150c:{NFSU2_TR(0x6c150c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6c150f:{NFSU2_TR(0x6c150f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B6c1512:{NFSU2_TR(0x6c1512);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1515:L6c1515:{c.instructions+=13;NFSU2_TR(0x6c1515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1518:{NFSU2_TR(0x6c1518);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c151b:{NFSU2_TR(0x6c151b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c151e:{NFSU2_TR(0x6c151e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c1521:{NFSU2_TR(0x6c1521);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1524:{NFSU2_TR(0x6c1524);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1527:{NFSU2_TR(0x6c1527);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c152a:{NFSU2_TR(0x6c152a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c152d:{NFSU2_TR(0x6c152d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c152f:{NFSU2_TR(0x6c152f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1532:{NFSU2_TR(0x6c1532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1535:{NFSU2_TR(0x6c1535);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1537:{NFSU2_TR(0x6c1537);
if(r1(R+518)){{goto L6c153e;}}
}
B6c1539:L6c1539:{c.instructions+=2;NFSU2_TR(0x6c1539);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c153c:{NFSU2_TR(0x6c153c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c153e:L6c153e:{c.instructions+=1;NFSU2_TR(0x6c153e);
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
B6c1540:L6c1540:{c.instructions+=1;NFSU2_TR(0x6c1540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c1541:L6c1541:{c.instructions+=4;NFSU2_TR(0x6c1541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1542:{NFSU2_TR(0x6c1542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1543:{NFSU2_TR(0x6c1543);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c1544:{NFSU2_TR(0x6c1544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1547:L6c1547:{c.instructions+=6;NFSU2_TR(0x6c1547);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c154a:{NFSU2_TR(0x6c154a);
w1(R+512,carry<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6c154d:{NFSU2_TR(0x6c154d);
u8 U[27];
w4(U+19,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B6c1550:{NFSU2_TR(0x6c1550);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1551:{NFSU2_TR(0x6c1551);
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
B6c1552:{NFSU2_TR(0x6c1552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1553:L6c1553:{c.instructions+=8;NFSU2_TR(0x6c1553);
__builtin_memmove((R+28),(R+28),4);
}
B6c1555:{NFSU2_TR(0x6c1555);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1556:{NFSU2_TR(0x6c1556);
__builtin_memmove((R+20),(R+16),4);
}
B6c1558:{NFSU2_TR(0x6c1558);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1559:{NFSU2_TR(0x6c1559);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c155a:{NFSU2_TR(0x6c155a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c155d:{NFSU2_TR(0x6c155d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1560:{NFSU2_TR(0x6c1560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c156f;}}
}
B6c1562:L6c1562:{c.instructions+=6;NFSU2_TR(0x6c1562);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1565:{NFSU2_TR(0x6c1565);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B6c1568:{NFSU2_TR(0x6c1568);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6c156b:{NFSU2_TR(0x6c156b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c156c:{NFSU2_TR(0x6c156c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c156d:{NFSU2_TR(0x6c156d);
{goto L6c157e;}
}
B6c156f:L6c156f:{c.instructions+=7;NFSU2_TR(0x6c156f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1572:{NFSU2_TR(0x6c1572);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6c1575:{NFSU2_TR(0x6c1575);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6c1578:{NFSU2_TR(0x6c1578);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1579:{NFSU2_TR(0x6c1579);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c157a:{NFSU2_TR(0x6c157a);
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
B6c157c:{NFSU2_TR(0x6c157c);
if(r1(R+512)){{goto L6c1586;}}
}
B6c157e:L6c157e:{c.instructions+=2;NFSU2_TR(0x6c157e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x8000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c1584:{NFSU2_TR(0x6c1584);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1590;}}
}
B6c1586:L6c1586:{c.instructions+=2;NFSU2_TR(0x6c1586);
w4(R+0,u32(0x80004005ull));
}
B6c158b:{NFSU2_TR(0x6c158b);
{goto L6c163b;}
}
B6c1590:L6c1590:{c.instructions+=15;NFSU2_TR(0x6c1590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1593:{NFSU2_TR(0x6c1593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1597:{NFSU2_TR(0x6c1597);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6c159a:{NFSU2_TR(0x6c159a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B6c15a0:{NFSU2_TR(0x6c15a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c15a3:{NFSU2_TR(0x6c15a3);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffeull))));
}
B6c15a9:{NFSU2_TR(0x6c15a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c15ab:{NFSU2_TR(0x6c15ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c15ad:{NFSU2_TR(0x6c15ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c15b0:{NFSU2_TR(0x6c15b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c15b3:{NFSU2_TR(0x6c15b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6c15b6:{NFSU2_TR(0x6c15b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c15b8:{NFSU2_TR(0x6c15b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c15b9:{NFSU2_TR(0x6c15b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c15bc:{NFSU2_TR(0x6c15bc);
if(r1(R+518)){{goto L6c1618;}}
}
B6c15be:L6c15be:{c.instructions+=1;NFSU2_TR(0x6c15be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c15bf:L6c15bf:{c.instructions+=2;NFSU2_TR(0x6c15bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c15c3:{NFSU2_TR(0x6c15c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c15f1;}}
}
B6c15c5:L6c15c5:{c.instructions+=9;NFSU2_TR(0x6c15c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c15c8:{NFSU2_TR(0x6c15c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c15cb:{NFSU2_TR(0x6c15cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c15ce:{NFSU2_TR(0x6c15ce);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B6c15d1:{NFSU2_TR(0x6c15d1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6c15d3:{NFSU2_TR(0x6c15d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c15d6:{NFSU2_TR(0x6c15d6);
__builtin_memmove((R+24),(R+4),4);
}
B6c15d8:{NFSU2_TR(0x6c15d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c15db:{NFSU2_TR(0x6c15db);
w4(R+0,u32(0xababababull));
}
B6c15e0:L6c15e0:{c.instructions+=1;NFSU2_TR(0x6c15e0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c15e2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c15e0u);}goto L6c15e0;}
}
B6c15e2:L6c15e2:{c.instructions+=2;NFSU2_TR(0x6c15e2);
__builtin_memmove((R+4),(R+24),4);
}
B6c15e4:{NFSU2_TR(0x6c15e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c15e7:L6c15e7:{c.instructions+=1;NFSU2_TR(0x6c15e7);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6c15e9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c15e7u);}goto L6c15e7;}
}
B6c15e9:L6c15e9:{c.instructions+=3;NFSU2_TR(0x6c15e9);
__builtin_memmove((R+0),(R+24),4);
}
B6c15eb:{NFSU2_TR(0x6c15eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c15ee:{NFSU2_TR(0x6c15ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c15f1:L6c15f1:{c.instructions+=5;NFSU2_TR(0x6c15f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c15f4:{NFSU2_TR(0x6c15f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c15f6:{NFSU2_TR(0x6c15f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c15f9:{NFSU2_TR(0x6c15f9);
__builtin_memmove((R+0),(R+4),4);
}
B6c15fb:{NFSU2_TR(0x6c15fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c15fe:L6c15fe:{c.instructions+=1;NFSU2_TR(0x6c15fe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c1600;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c15feu);}goto L6c15fe;}
}
B6c1600:L6c1600:{c.instructions+=2;NFSU2_TR(0x6c1600);
__builtin_memmove((R+4),(R+0),4);
}
B6c1602:{NFSU2_TR(0x6c1602);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c1605:L6c1605:{c.instructions+=1;NFSU2_TR(0x6c1605);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c1607;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1605u);}goto L6c1605;}
}
B6c1607:L6c1607:{c.instructions+=6;NFSU2_TR(0x6c1607);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c160a:{NFSU2_TR(0x6c160a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c160d:{NFSU2_TR(0x6c160d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1610:{NFSU2_TR(0x6c1610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1613:{NFSU2_TR(0x6c1613);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1615:{NFSU2_TR(0x6c1615);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c15bfu);}goto L6c15bf;}}
}
B6c1617:L6c1617:{c.instructions+=1;NFSU2_TR(0x6c1617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1618:L6c1618:{c.instructions+=6;NFSU2_TR(0x6c1618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c161b:{NFSU2_TR(0x6c161b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffff8ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c1622:{NFSU2_TR(0x6c1622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c1625:{NFSU2_TR(0x6c1625);
w4(R+0,u32(0xababababull));
}
B6c162a:{NFSU2_TR(0x6c162a);
__builtin_memmove((R+8),(R+4),4);
}
B6c162c:{NFSU2_TR(0x6c162c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c162f:L6c162f:{c.instructions+=1;NFSU2_TR(0x6c162f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c1631;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c162fu);}goto L6c162f;}
}
B6c1631:L6c1631:{c.instructions+=2;NFSU2_TR(0x6c1631);
__builtin_memmove((R+4),(R+8),4);
}
B6c1633:{NFSU2_TR(0x6c1633);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c1636:L6c1636:{c.instructions+=1;NFSU2_TR(0x6c1636);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6c1638;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1636u);}goto L6c1636;}
}
B6c1638:L6c1638:{c.instructions+=2;NFSU2_TR(0x6c1638);
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
B6c163a:{NFSU2_TR(0x6c163a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c163b:L6c163b:{c.instructions+=3;NFSU2_TR(0x6c163b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c163c:{NFSU2_TR(0x6c163c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c163d:{NFSU2_TR(0x6c163d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1640:L6c1640:{c.instructions+=6;NFSU2_TR(0x6c1640);
__builtin_memmove((R+28),(R+28),4);
}
B6c1642:{NFSU2_TR(0x6c1642);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1643:{NFSU2_TR(0x6c1643);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1644:{NFSU2_TR(0x6c1644);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1646:{NFSU2_TR(0x6c1646);
__builtin_memmove((R+24),(R+4),4);
}
B6c1648:{NFSU2_TR(0x6c1648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c164dull));
TAIL_STATIC(0x6723e5u,672);
}
B6c164d:L6c164d:{c.instructions+=12;NFSU2_TR(0x6c164d);
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
B6c164f:{NFSU2_TR(0x6c164f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1652:{NFSU2_TR(0x6c1652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1655:{NFSU2_TR(0x6c1655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1658:{NFSU2_TR(0x6c1658);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c165b:{NFSU2_TR(0x6c165b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c165e:{NFSU2_TR(0x6c165e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1661:{NFSU2_TR(0x6c1661);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1664:{NFSU2_TR(0x6c1664);
u8 U[4];
w4(U+0,u32(0x7bd428ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6c166a:{NFSU2_TR(0x6c166a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c166c:{NFSU2_TR(0x6c166c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c166d:{NFSU2_TR(0x6c166d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1670:L6c1670:{c.instructions+=1;NFSU2_TR(0x6c1670);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c1672;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1670u);}goto L6c1670;}
}
B6c1672:L6c1672:{c.instructions+=9;NFSU2_TR(0x6c1672);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1675:{NFSU2_TR(0x6c1675);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c1676:{NFSU2_TR(0x6c1676);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c1677:{NFSU2_TR(0x6c1677);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c1678:{NFSU2_TR(0x6c1678);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c1679:{NFSU2_TR(0x6c1679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c167a:{NFSU2_TR(0x6c167a);
__builtin_memmove((R+0),(R+24),4);
}
B6c167c:{NFSU2_TR(0x6c167c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c167d:{NFSU2_TR(0x6c167d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c167e:L6c167e:{c.instructions+=9;NFSU2_TR(0x6c167e);
__builtin_memmove((R+28),(R+28),4);
}
B6c1680:{NFSU2_TR(0x6c1680);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1681:{NFSU2_TR(0x6c1681);
__builtin_memmove((R+20),(R+16),4);
}
B6c1683:{NFSU2_TR(0x6c1683);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1684:{NFSU2_TR(0x6c1684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1685:{NFSU2_TR(0x6c1685);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1686:{NFSU2_TR(0x6c1686);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1688:{NFSU2_TR(0x6c1688);
__builtin_memmove((R+12),(R+4),4);
}
B6c168a:{NFSU2_TR(0x6c168a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c168full));
TAIL_STATIC(0x6723e5u,672);
}
B6c168f:L6c168f:{c.instructions+=6;NFSU2_TR(0x6c168f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1692:{NFSU2_TR(0x6c1692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1695:{NFSU2_TR(0x6c1695);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1697:{NFSU2_TR(0x6c1697);
u8 U[4];
w4(U+0,u32(0x7bd428ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6c169d:{NFSU2_TR(0x6c169d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c169e:{NFSU2_TR(0x6c169e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c16a1:L6c16a1:{c.instructions+=1;NFSU2_TR(0x6c16a1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c16a3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c16a1u);}goto L6c16a1;}
}
B6c16a3:L6c16a3:{c.instructions+=21;NFSU2_TR(0x6c16a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16a6:{NFSU2_TR(0x6c16a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c16a9:{NFSU2_TR(0x6c16a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16ac:{NFSU2_TR(0x6c16ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c16af:{NFSU2_TR(0x6c16af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16b2:{NFSU2_TR(0x6c16b2);
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
B6c16b4:{NFSU2_TR(0x6c16b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16b7:{NFSU2_TR(0x6c16b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16ba:{NFSU2_TR(0x6c16ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16bd:{NFSU2_TR(0x6c16bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16c0:{NFSU2_TR(0x6c16c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c16c3:{NFSU2_TR(0x6c16c3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c16c4:{NFSU2_TR(0x6c16c4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c16c5:{NFSU2_TR(0x6c16c5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c16c6:{NFSU2_TR(0x6c16c6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c16c7:{NFSU2_TR(0x6c16c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c16c8:{NFSU2_TR(0x6c16c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c16c9:{NFSU2_TR(0x6c16c9);
__builtin_memmove((R+0),(R+12),4);
}
B6c16cb:{NFSU2_TR(0x6c16cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c16cc:{NFSU2_TR(0x6c16cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c16cd:{NFSU2_TR(0x6c16cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c16d0:L6c16d0:{c.instructions+=5;NFSU2_TR(0x6c16d0);
__builtin_memmove((R+28),(R+28),4);
}
B6c16d2:{NFSU2_TR(0x6c16d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c16d3:{NFSU2_TR(0x6c16d3);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c16d5:{NFSU2_TR(0x6c16d5);
__builtin_memmove((R+24),(R+4),4);
}
B6c16d7:{NFSU2_TR(0x6c16d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c16dcull));
TAIL_STATIC(0x6723e5u,672);
}
B6c16dc:L6c16dc:{c.instructions+=12;NFSU2_TR(0x6c16dc);
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
B6c16de:{NFSU2_TR(0x6c16de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16e1:{NFSU2_TR(0x6c16e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16e4:{NFSU2_TR(0x6c16e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16e7:{NFSU2_TR(0x6c16e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16ea:{NFSU2_TR(0x6c16ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c16ed:{NFSU2_TR(0x6c16ed);
u8 U[4];
w4(U+0,u32(0x7bd434ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6c16f3:{NFSU2_TR(0x6c16f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c16fa:{NFSU2_TR(0x6c16fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0xe40000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1701:{NFSU2_TR(0x6c1701);
__builtin_memmove((R+0),(R+24),4);
}
B6c1703:{NFSU2_TR(0x6c1703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1704:{NFSU2_TR(0x6c1704);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1705:L6c1705:{c.instructions+=7;NFSU2_TR(0x6c1705);
__builtin_memmove((R+28),(R+28),4);
}
B6c1707:{NFSU2_TR(0x6c1707);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1708:{NFSU2_TR(0x6c1708);
__builtin_memmove((R+20),(R+16),4);
}
B6c170a:{NFSU2_TR(0x6c170a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c170b:{NFSU2_TR(0x6c170b);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c170d:{NFSU2_TR(0x6c170d);
__builtin_memmove((R+24),(R+4),4);
}
B6c170f:{NFSU2_TR(0x6c170f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1714ull));
TAIL_STATIC(0x6723e5u,672);
}
B6c1714:L6c1714:{c.instructions+=17;NFSU2_TR(0x6c1714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1717:{NFSU2_TR(0x6c1717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c171a:{NFSU2_TR(0x6c171a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c171d:{NFSU2_TR(0x6c171d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1720:{NFSU2_TR(0x6c1720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1723:{NFSU2_TR(0x6c1723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1726:{NFSU2_TR(0x6c1726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1729:{NFSU2_TR(0x6c1729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c172c:{NFSU2_TR(0x6c172c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c172f:{NFSU2_TR(0x6c172f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1732:{NFSU2_TR(0x6c1732);
u8 U[4];
w4(U+0,u32(0x7bd434ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6c1738:{NFSU2_TR(0x6c1738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c173f:{NFSU2_TR(0x6c173f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0xe40000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1746:{NFSU2_TR(0x6c1746);
__builtin_memmove((R+0),(R+24),4);
}
B6c1748:{NFSU2_TR(0x6c1748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1749:{NFSU2_TR(0x6c1749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c174a:{NFSU2_TR(0x6c174a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c174d:L6c174d:{c.instructions+=9;NFSU2_TR(0x6c174d);
__builtin_memmove((R+28),(R+28),4);
}
B6c174f:{NFSU2_TR(0x6c174f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1750:{NFSU2_TR(0x6c1750);
__builtin_memmove((R+20),(R+16),4);
}
B6c1752:{NFSU2_TR(0x6c1752);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1753:{NFSU2_TR(0x6c1753);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1754:{NFSU2_TR(0x6c1754);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1755:{NFSU2_TR(0x6c1755);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1757:{NFSU2_TR(0x6c1757);
__builtin_memmove((R+12),(R+4),4);
}
B6c1759:{NFSU2_TR(0x6c1759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c175eull));
TAIL_STATIC(0x645362u,645);
}
B6c175e:L6c175e:{c.instructions+=2;NFSU2_TR(0x6c175e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1760:{NFSU2_TR(0x6c1760);
if(r1(R+518)){{goto L6c176e;}}
}
B6c1762:L6c1762:{c.instructions+=2;NFSU2_TR(0x6c1762);
__builtin_memmove((R+4),(R+0),4);
}
B6c1764:{NFSU2_TR(0x6c1764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1769ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1640u);}goto L6c1640;}
}
B6c1769:L6c1769:{c.instructions+=2;NFSU2_TR(0x6c1769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c176c:{NFSU2_TR(0x6c176c);
{goto L6c1775;}
}
B6c176e:L6c176e:{c.instructions+=2;NFSU2_TR(0x6c176e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1772:{NFSU2_TR(0x6c1772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1775:L6c1775:{c.instructions+=2;NFSU2_TR(0x6c1775);
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
B6c1777:{NFSU2_TR(0x6c1777);
if(r1(R+518)){{goto L6c180e;}}
}
B6c177d:L6c177d:{c.instructions+=6;NFSU2_TR(0x6c177d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c177e:{NFSU2_TR(0x6c177e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c177f:{NFSU2_TR(0x6c177f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1781:{NFSU2_TR(0x6c1781);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1784:{NFSU2_TR(0x6c1784);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1787:{NFSU2_TR(0x6c1787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c1788:L6c1788:{c.instructions+=1;NFSU2_TR(0x6c1788);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c178a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1788u);}goto L6c1788;}
}
B6c178a:L6c178a:{c.instructions+=13;NFSU2_TR(0x6c178a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c178d:{NFSU2_TR(0x6c178d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1790:{NFSU2_TR(0x6c1790);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1793:{NFSU2_TR(0x6c1793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1796:{NFSU2_TR(0x6c1796);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1799:{NFSU2_TR(0x6c1799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c179c:{NFSU2_TR(0x6c179c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c179f:{NFSU2_TR(0x6c179f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c17a2:{NFSU2_TR(0x6c17a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c17a5:{NFSU2_TR(0x6c17a5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c17a7:{NFSU2_TR(0x6c17a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c17aa:{NFSU2_TR(0x6c17aa);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
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
B6c17ad:{NFSU2_TR(0x6c17ad);
if(r1(R+518)){{goto L6c17c3;}}
}
B6c17af:L6c17af:{c.instructions+=3;NFSU2_TR(0x6c17af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c17b2:{NFSU2_TR(0x6c17b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c17b4:{NFSU2_TR(0x6c17b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c17b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c17b7:L6c17b7:{c.instructions+=4;NFSU2_TR(0x6c17b7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c17b9:{NFSU2_TR(0x6c17b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c17bc:{NFSU2_TR(0x6c17bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c17bf:{NFSU2_TR(0x6c17bf);
if(r1(R+518)){{goto L6c180a;}}
}
B6c17c1:L6c17c1:{c.instructions+=1;NFSU2_TR(0x6c17c1);
__builtin_memmove((R+0),(R+4),4);
}
B6c17c3:L6c17c3:{c.instructions+=2;NFSU2_TR(0x6c17c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
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
B6c17c6:{NFSU2_TR(0x6c17c6);
if(r1(R+518)){{goto L6c17dc;}}
}
B6c17c8:L6c17c8:{c.instructions+=3;NFSU2_TR(0x6c17c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c17cb:{NFSU2_TR(0x6c17cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c17cd:{NFSU2_TR(0x6c17cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c17d0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c17d0:L6c17d0:{c.instructions+=4;NFSU2_TR(0x6c17d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c17d2:{NFSU2_TR(0x6c17d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c17d5:{NFSU2_TR(0x6c17d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c17d8:{NFSU2_TR(0x6c17d8);
if(r1(R+518)){{goto L6c180a;}}
}
B6c17da:L6c17da:{c.instructions+=1;NFSU2_TR(0x6c17da);
__builtin_memmove((R+0),(R+4),4);
}
B6c17dc:L6c17dc:{c.instructions+=4;NFSU2_TR(0x6c17dc);
__builtin_memmove((R+28),(R+0),4);
}
B6c17de:{NFSU2_TR(0x6c17de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c17e1:{NFSU2_TR(0x6c17e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c17e4:{NFSU2_TR(0x6c17e4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B6c17e6:L6c17e6:{c.instructions+=2;NFSU2_TR(0x6c17e6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6c17e9:{NFSU2_TR(0x6c17e9);
if(r1(R+518)){{goto L6c17fc;}}
}
B6c17eb:L6c17eb:{c.instructions+=3;NFSU2_TR(0x6c17eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c17ed:{NFSU2_TR(0x6c17ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c17ef:{NFSU2_TR(0x6c17ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c17f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c17f2:L6c17f2:{c.instructions+=3;NFSU2_TR(0x6c17f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c17f4:{NFSU2_TR(0x6c17f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c17f7:{NFSU2_TR(0x6c17f7);
if(r1(R+518)){{goto L6c180a;}}
}
B6c17f9:L6c17f9:{c.instructions+=1;NFSU2_TR(0x6c17f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c17fc:L6c17fc:{c.instructions+=4;NFSU2_TR(0x6c17fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c17ff:{NFSU2_TR(0x6c17ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6c1802:{NFSU2_TR(0x6c1802);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c1806:{NFSU2_TR(0x6c1806);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c17e6u);}goto L6c17e6;}}
}
B6c1808:L6c1808:{c.instructions+=1;NFSU2_TR(0x6c1808);
{goto L6c180c;}
}
B6c180a:L6c180a:{c.instructions+=1;NFSU2_TR(0x6c180a);
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
B6c180c:L6c180c:{c.instructions+=2;NFSU2_TR(0x6c180c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c180d:{NFSU2_TR(0x6c180d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c180e:L6c180e:{c.instructions+=3;NFSU2_TR(0x6c180e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c180f:{NFSU2_TR(0x6c180f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c1810:{NFSU2_TR(0x6c1810);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1811:L6c1811:{c.instructions+=6;NFSU2_TR(0x6c1811);
__builtin_memmove((R+28),(R+28),4);
}
B6c1813:{NFSU2_TR(0x6c1813);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1814:{NFSU2_TR(0x6c1814);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1815:{NFSU2_TR(0x6c1815);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1817:{NFSU2_TR(0x6c1817);
__builtin_memmove((R+28),(R+4),4);
}
B6c1819:{NFSU2_TR(0x6c1819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c181eull));
TAIL_STATIC(0x645362u,645);
}
B6c181e:L6c181e:{c.instructions+=2;NFSU2_TR(0x6c181e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1820:{NFSU2_TR(0x6c1820);
if(r1(R+518)){{goto L6c182d;}}
}
B6c1822:L6c1822:{c.instructions+=2;NFSU2_TR(0x6c1822);
__builtin_memmove((R+4),(R+0),4);
}
B6c1824:{NFSU2_TR(0x6c1824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1829ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c16d0u);}goto L6c16d0;}
}
B6c1829:L6c1829:{c.instructions+=2;NFSU2_TR(0x6c1829);
__builtin_memmove((R+24),(R+0),4);
}
B6c182b:{NFSU2_TR(0x6c182b);
{goto L6c182f;}
}
B6c182d:L6c182d:{c.instructions+=1;NFSU2_TR(0x6c182d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c182f:L6c182f:{c.instructions+=2;NFSU2_TR(0x6c182f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1831:{NFSU2_TR(0x6c1831);
if(r1(R+518)){{goto L6c186c;}}
}
B6c1833:L6c1833:{c.instructions+=14;NFSU2_TR(0x6c1833);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1836:{NFSU2_TR(0x6c1836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1839:{NFSU2_TR(0x6c1839);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c183c:{NFSU2_TR(0x6c183c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c183f:{NFSU2_TR(0x6c183f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1842:{NFSU2_TR(0x6c1842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1845:{NFSU2_TR(0x6c1845);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1848:{NFSU2_TR(0x6c1848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c184b:{NFSU2_TR(0x6c184b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c184e:{NFSU2_TR(0x6c184e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1851:{NFSU2_TR(0x6c1851);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1854:{NFSU2_TR(0x6c1854);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1857:{NFSU2_TR(0x6c1857);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c185b:{NFSU2_TR(0x6c185b);
if(r1(R+518)){{goto L6c1870;}}
}
B6c185d:L6c185d:{c.instructions+=3;NFSU2_TR(0x6c185d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1860:{NFSU2_TR(0x6c1860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c1862:{NFSU2_TR(0x6c1862);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1865ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6c1865:L6c1865:{c.instructions+=3;NFSU2_TR(0x6c1865);
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
B6c1867:{NFSU2_TR(0x6c1867);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c186a:{NFSU2_TR(0x6c186a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1870;}}
}
B6c186c:L6c186c:{c.instructions+=2;NFSU2_TR(0x6c186c);
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
B6c186e:{NFSU2_TR(0x6c186e);
{goto L6c1872;}
}
B6c1870:L6c1870:{c.instructions+=1;NFSU2_TR(0x6c1870);
__builtin_memmove((R+0),(R+24),4);
}
B6c1872:L6c1872:{c.instructions+=3;NFSU2_TR(0x6c1872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1873:{NFSU2_TR(0x6c1873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1874:{NFSU2_TR(0x6c1874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1875:L6c1875:{c.instructions+=14;NFSU2_TR(0x6c1875);
__builtin_memmove((R+28),(R+28),4);
}
B6c1877:{NFSU2_TR(0x6c1877);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1878:{NFSU2_TR(0x6c1878);
__builtin_memmove((R+20),(R+16),4);
}
B6c187a:{NFSU2_TR(0x6c187a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c187d:{NFSU2_TR(0x6c187d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1880:{NFSU2_TR(0x6c1880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1883:{NFSU2_TR(0x6c1883);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c1886:{NFSU2_TR(0x6c1886);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1889:{NFSU2_TR(0x6c1889);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c188a:{NFSU2_TR(0x6c188a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c188d:{NFSU2_TR(0x6c188d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1890:{NFSU2_TR(0x6c1890);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1893:{NFSU2_TR(0x6c1893);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1895:{NFSU2_TR(0x6c1895);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c189c;}}
}
B6c1897:L6c1897:{c.instructions+=3;NFSU2_TR(0x6c1897);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1899:{NFSU2_TR(0x6c1899);
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
B6c189a:{NFSU2_TR(0x6c189a);
{goto L6c18a9;}
}
B6c189c:L6c189c:{c.instructions+=1;NFSU2_TR(0x6c189c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c18a3;}}
}
B6c189e:L6c189e:{c.instructions+=2;NFSU2_TR(0x6c189e);
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
B6c18a1:{NFSU2_TR(0x6c18a1);
{goto L6c18a9;}
}
B6c18a3:L6c18a3:{c.instructions+=2;NFSU2_TR(0x6c18a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c18a5:{NFSU2_TR(0x6c18a5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1897u);}goto L6c1897;}}
}
B6c18a7:L6c18a7:{c.instructions+=1;NFSU2_TR(0x6c18a7);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B6c18a9:L6c18a9:{c.instructions+=3;NFSU2_TR(0x6c18a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c18aa:{NFSU2_TR(0x6c18aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c18ab:{NFSU2_TR(0x6c18ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c18ae:L6c18ae:{c.instructions+=19;NFSU2_TR(0x6c18ae);
__builtin_memmove((R+28),(R+28),4);
}
B6c18b0:{NFSU2_TR(0x6c18b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c18b1:{NFSU2_TR(0x6c18b1);
__builtin_memmove((R+20),(R+16),4);
}
B6c18b3:{NFSU2_TR(0x6c18b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c18b6:{NFSU2_TR(0x6c18b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c18b9:{NFSU2_TR(0x6c18b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c18bc:{NFSU2_TR(0x6c18bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c18bd:{NFSU2_TR(0x6c18bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c18c0:{NFSU2_TR(0x6c18c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c18c3:{NFSU2_TR(0x6c18c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c18c6:{NFSU2_TR(0x6c18c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c18c7:{NFSU2_TR(0x6c18c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c18c8:{NFSU2_TR(0x6c18c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c18cb:{NFSU2_TR(0x6c18cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c18ce:{NFSU2_TR(0x6c18ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c18d0:{NFSU2_TR(0x6c18d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c18d3:{NFSU2_TR(0x6c18d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c18d6:{NFSU2_TR(0x6c18d6);
w4(R+24,u32(0x783fe5ull));
}
B6c18db:{NFSU2_TR(0x6c18db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c18df;}}
}
B6c18dd:L6c18dd:{c.instructions+=1;NFSU2_TR(0x6c18dd);
__builtin_memmove((R+4),(R+24),4);
}
B6c18df:L6c18df:{c.instructions+=3;NFSU2_TR(0x6c18df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c18e2:{NFSU2_TR(0x6c18e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c18e4:{NFSU2_TR(0x6c18e4);
if(r1(R+518)){{goto L6c18e8;}}
}
B6c18e6:L6c18e6:{c.instructions+=1;NFSU2_TR(0x6c18e6);
__builtin_memmove((R+24),(R+8),4);
}
B6c18e8:L6c18e8:{c.instructions+=4;NFSU2_TR(0x6c18e8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c18ea:{NFSU2_TR(0x6c18ea);
__builtin_memmove((R+8),(R+0),1);
}
B6c18ec:{NFSU2_TR(0x6c18ec);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c18ee:{NFSU2_TR(0x6c18ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c190a;}}
}
B6c18f0:L6c18f0:{c.instructions+=2;NFSU2_TR(0x6c18f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c18f2:{NFSU2_TR(0x6c18f2);
if(r1(R+518)){{goto L6c1906;}}
}
B6c18f4:L6c18f4:{c.instructions+=4;NFSU2_TR(0x6c18f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6c18f7:{NFSU2_TR(0x6c18f7);
__builtin_memmove((R+8),(R+0),1);
}
B6c18f9:{NFSU2_TR(0x6c18f9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6c18fc:{NFSU2_TR(0x6c18fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c190a;}}
}
B6c18fe:L6c18fe:{c.instructions+=6;NFSU2_TR(0x6c18fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c18ff:{NFSU2_TR(0x6c18ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c1900:{NFSU2_TR(0x6c1900);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c1901:{NFSU2_TR(0x6c1901);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c1902:{NFSU2_TR(0x6c1902);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c1904:{NFSU2_TR(0x6c1904);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c18e8u);}goto L6c18e8;}}
}
B6c1906:L6c1906:{c.instructions+=2;NFSU2_TR(0x6c1906);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c1908:{NFSU2_TR(0x6c1908);
{goto L6c190f;}
}
B6c190a:L6c190a:{c.instructions+=2;NFSU2_TR(0x6c190a);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c190c:{NFSU2_TR(0x6c190c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c190f:L6c190f:{c.instructions+=2;NFSU2_TR(0x6c190f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1911:{NFSU2_TR(0x6c1911);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6c1918;}}
}
B6c1913:L6c1913:{c.instructions+=3;NFSU2_TR(0x6c1913);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1915:{NFSU2_TR(0x6c1915);
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
B6c1916:{NFSU2_TR(0x6c1916);
{goto L6c1984;}
}
B6c1918:L6c1918:{c.instructions+=1;NFSU2_TR(0x6c1918);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c191f;}}
}
B6c191a:L6c191a:{c.instructions+=2;NFSU2_TR(0x6c191a);
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
B6c191d:{NFSU2_TR(0x6c191d);
{goto L6c1984;}
}
B6c191f:L6c191f:{c.instructions+=6;NFSU2_TR(0x6c191f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1922:{NFSU2_TR(0x6c1922);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1925:{NFSU2_TR(0x6c1925);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1928:{NFSU2_TR(0x6c1928);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c192b:{NFSU2_TR(0x6c192b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c192e:{NFSU2_TR(0x6c192e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1931:L6c1931:{c.instructions+=4;NFSU2_TR(0x6c1931);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6c1933:{NFSU2_TR(0x6c1933);
__builtin_memmove((R+8),(R+0),1);
}
B6c1935:{NFSU2_TR(0x6c1935);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6c1937:{NFSU2_TR(0x6c1937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1953;}}
}
B6c1939:L6c1939:{c.instructions+=2;NFSU2_TR(0x6c1939);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c193b:{NFSU2_TR(0x6c193b);
if(r1(R+518)){{goto L6c194f;}}
}
B6c193d:L6c193d:{c.instructions+=4;NFSU2_TR(0x6c193d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6c1940:{NFSU2_TR(0x6c1940);
__builtin_memmove((R+8),(R+0),1);
}
B6c1942:{NFSU2_TR(0x6c1942);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6c1945:{NFSU2_TR(0x6c1945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1953;}}
}
B6c1947:L6c1947:{c.instructions+=6;NFSU2_TR(0x6c1947);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c1948:{NFSU2_TR(0x6c1948);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c1949:{NFSU2_TR(0x6c1949);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c194a:{NFSU2_TR(0x6c194a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c194b:{NFSU2_TR(0x6c194b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c194d:{NFSU2_TR(0x6c194d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1931u);}goto L6c1931;}}
}
B6c194f:L6c194f:{c.instructions+=2;NFSU2_TR(0x6c194f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c1951:{NFSU2_TR(0x6c1951);
{goto L6c1958;}
}
B6c1953:L6c1953:{c.instructions+=2;NFSU2_TR(0x6c1953);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c1955:{NFSU2_TR(0x6c1955);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c1958:L6c1958:{c.instructions+=2;NFSU2_TR(0x6c1958);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c195a:{NFSU2_TR(0x6c195a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1913u);}goto L6c1913;}}
}
B6c195c:L6c195c:{c.instructions+=1;NFSU2_TR(0x6c195c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c191au);}goto L6c191a;}}
}
B6c195e:L6c195e:{c.instructions+=4;NFSU2_TR(0x6c195e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1961:{NFSU2_TR(0x6c1961);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1964:{NFSU2_TR(0x6c1964);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1966:{NFSU2_TR(0x6c1966);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1913u);}goto L6c1913;}}
}
B6c1968:L6c1968:{c.instructions+=1;NFSU2_TR(0x6c1968);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c191au);}goto L6c191a;}}
}
B6c196a:L6c196a:{c.instructions+=4;NFSU2_TR(0x6c196a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c196d:{NFSU2_TR(0x6c196d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1970:{NFSU2_TR(0x6c1970);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1972:{NFSU2_TR(0x6c1972);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c191au);}goto L6c191a;}}
}
B6c1974:L6c1974:{c.instructions+=1;NFSU2_TR(0x6c1974);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1913u);}goto L6c1913;}}
}
B6c1976:L6c1976:{c.instructions+=4;NFSU2_TR(0x6c1976);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1979:{NFSU2_TR(0x6c1979);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c197c:{NFSU2_TR(0x6c197c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c197e:{NFSU2_TR(0x6c197e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c191au);}goto L6c191a;}}
}
B6c1980:L6c1980:{c.instructions+=2;NFSU2_TR(0x6c1980);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6c1982:{NFSU2_TR(0x6c1982);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c1984:L6c1984:{c.instructions+=5;NFSU2_TR(0x6c1984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1985:{NFSU2_TR(0x6c1985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1986:{NFSU2_TR(0x6c1986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c1987:{NFSU2_TR(0x6c1987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c1988:{NFSU2_TR(0x6c1988);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c198b:L6c198b:{c.instructions+=12;NFSU2_TR(0x6c198b);
__builtin_memmove((R+28),(R+28),4);
}
B6c198d:{NFSU2_TR(0x6c198d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c198e:{NFSU2_TR(0x6c198e);
__builtin_memmove((R+20),(R+16),4);
}
B6c1990:{NFSU2_TR(0x6c1990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1993:{NFSU2_TR(0x6c1993);
__builtin_memmove((R+8),(R+4),4);
}
B6c1995:{NFSU2_TR(0x6c1995);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c199b:{NFSU2_TR(0x6c199b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6c199d:{NFSU2_TR(0x6c199d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c19a3:{NFSU2_TR(0x6c19a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B6c19a6:{NFSU2_TR(0x6c19a6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c19a8:{NFSU2_TR(0x6c19a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c19a9:{NFSU2_TR(0x6c19a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c19ac:L6c19ac:{c.instructions+=7;NFSU2_TR(0x6c19ac);
__builtin_memmove((R+28),(R+28),4);
}
B6c19ae:{NFSU2_TR(0x6c19ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c19af:{NFSU2_TR(0x6c19af);
__builtin_memmove((R+20),(R+16),4);
}
B6c19b1:{NFSU2_TR(0x6c19b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c19b7:{NFSU2_TR(0x6c19b7);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c19ba:{NFSU2_TR(0x6c19ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c19bb:{NFSU2_TR(0x6c19bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c19be:L6c19be:{c.instructions+=9;NFSU2_TR(0x6c19be);
__builtin_memmove((R+28),(R+28),4);
}
B6c19c0:{NFSU2_TR(0x6c19c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c19c1:{NFSU2_TR(0x6c19c1);
__builtin_memmove((R+20),(R+16),4);
}
B6c19c3:{NFSU2_TR(0x6c19c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c19c9:{NFSU2_TR(0x6c19c9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c19cc:{NFSU2_TR(0x6c19cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c19d2:{NFSU2_TR(0x6c19d2);
u8 U[42];
w1(U+37,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+38),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+37))));
w1(U+24,u8((r1(U+37))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+37))-u32(u8(0x1ull))));
w4(U+26,shr<u32>(r4(U+38),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+37))==(u8(0x1ull))));
w1(U+36,u8(s32(r4(U+38))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+36))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+37))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6c19d4:{NFSU2_TR(0x6c19d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c19d5:{NFSU2_TR(0x6c19d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c19d8:L6c19d8:{c.instructions+=20;NFSU2_TR(0x6c19d8);
__builtin_memmove((R+28),(R+28),4);
}
B6c19da:{NFSU2_TR(0x6c19da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c19db:{NFSU2_TR(0x6c19db);
__builtin_memmove((R+20),(R+16),4);
}
B6c19dd:{NFSU2_TR(0x6c19dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6c19e0:{NFSU2_TR(0x6c19e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c19e1:{NFSU2_TR(0x6c19e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c19e4:{NFSU2_TR(0x6c19e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c19e6:{NFSU2_TR(0x6c19e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c19e7:{NFSU2_TR(0x6c19e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c19e9:{NFSU2_TR(0x6c19e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c19ea:{NFSU2_TR(0x6c19ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c19ed:{NFSU2_TR(0x6c19ed);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c19ee:{NFSU2_TR(0x6c19ee);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c19ef:{NFSU2_TR(0x6c19ef);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c19f0:{NFSU2_TR(0x6c19f0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6c19f1:{NFSU2_TR(0x6c19f1);
__builtin_memmove((R+0),(R+24),4);
}
B6c19f3:{NFSU2_TR(0x6c19f3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c19f8:{NFSU2_TR(0x6c19f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c19fd:{NFSU2_TR(0x6c19fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a00:{NFSU2_TR(0x6c1a00);
if(r1(R+518)){{goto L6c1b2b;}}
}
B6c1a06:L6c1a06:{c.instructions+=2;NFSU2_TR(0x6c1a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1a0b:{NFSU2_TR(0x6c1a0b);
if(r1(R+518)){{goto L6c1b2b;}}
}
B6c1a11:L6c1a11:{c.instructions+=6;NFSU2_TR(0x6c1a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1a14:{NFSU2_TR(0x6c1a14);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1a16:{NFSU2_TR(0x6c1a16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1a18:{NFSU2_TR(0x6c1a18);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1a1b:{NFSU2_TR(0x6c1a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a1e:{NFSU2_TR(0x6c1a1e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1ae1;}}
}
B6c1a24:L6c1a24:{c.instructions+=6;NFSU2_TR(0x6c1a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1a27:{NFSU2_TR(0x6c1a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a2a:{NFSU2_TR(0x6c1a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1a2d:{NFSU2_TR(0x6c1a2d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6c1a2f:{NFSU2_TR(0x6c1a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a32:{NFSU2_TR(0x6c1a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a35:L6c1a35:{c.instructions+=9;NFSU2_TR(0x6c1a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1a38:{NFSU2_TR(0x6c1a38);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c1a3b:{NFSU2_TR(0x6c1a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a3e:{NFSU2_TR(0x6c1a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1a41:{NFSU2_TR(0x6c1a41);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c1a44:{NFSU2_TR(0x6c1a44);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1a46:{NFSU2_TR(0x6c1a46);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1a49:{NFSU2_TR(0x6c1a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a4c:{NFSU2_TR(0x6c1a4c);
if(r1(R+518)){{goto L6c1a58;}}
}
B6c1a4e:L6c1a4e:{c.instructions+=4;NFSU2_TR(0x6c1a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1a51:{NFSU2_TR(0x6c1a51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c1a53:{NFSU2_TR(0x6c1a53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c1a56:{NFSU2_TR(0x6c1a56);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c1acd;}}
}
B6c1a58:L6c1a58:{c.instructions+=3;NFSU2_TR(0x6c1a58);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c1a5a:{NFSU2_TR(0x6c1a5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1a5d:{NFSU2_TR(0x6c1a5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1b18;}}
}
B6c1a63:L6c1a63:{c.instructions+=7;NFSU2_TR(0x6c1a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1a66:{NFSU2_TR(0x6c1a66);
__builtin_memmove((R+8),(R+0),4);
}
B6c1a68:{NFSU2_TR(0x6c1a68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c1a6b:{NFSU2_TR(0x6c1a6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c1a6e:{NFSU2_TR(0x6c1a6e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6c1a70:{NFSU2_TR(0x6c1a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1a73:{NFSU2_TR(0x6c1a73);
{goto L6c1a78;}
}
B6c1a75:L6c1a75:{c.instructions+=1;NFSU2_TR(0x6c1a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1a78:L6c1a78:{c.instructions+=5;NFSU2_TR(0x6c1a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1a7b:{NFSU2_TR(0x6c1a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1a7e:{NFSU2_TR(0x6c1a7e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c1a82:{NFSU2_TR(0x6c1a82);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c1a85:{NFSU2_TR(0x6c1a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1a92;}}
}
B6c1a87:L6c1a87:{c.instructions+=4;NFSU2_TR(0x6c1a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1a8a:{NFSU2_TR(0x6c1a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1a8d:{NFSU2_TR(0x6c1a8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1a90:{NFSU2_TR(0x6c1a90);
if(r1(R+518)){{goto L6c1aae;}}
}
B6c1a92:L6c1a92:{c.instructions+=6;NFSU2_TR(0x6c1a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1a95:{NFSU2_TR(0x6c1a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1a98:{NFSU2_TR(0x6c1a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1a9b:{NFSU2_TR(0x6c1a9b);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c1a9e:{NFSU2_TR(0x6c1a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1aa1:{NFSU2_TR(0x6c1aa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1aba;}}
}
B6c1aa3:L6c1aa3:{c.instructions+=4;NFSU2_TR(0x6c1aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1aa6:{NFSU2_TR(0x6c1aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1aa9:{NFSU2_TR(0x6c1aa9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1aac:{NFSU2_TR(0x6c1aac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1aba;}}
}
B6c1aae:L6c1aae:{c.instructions+=5;NFSU2_TR(0x6c1aae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1ab0:{NFSU2_TR(0x6c1ab0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1ab1:{NFSU2_TR(0x6c1ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1ab4:{NFSU2_TR(0x6c1ab4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c1ab8:{NFSU2_TR(0x6c1ab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c1aba:L6c1aba:{c.instructions+=3;NFSU2_TR(0x6c1aba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c1abb:{NFSU2_TR(0x6c1abb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c1abe:{NFSU2_TR(0x6c1abe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1a75u);}goto L6c1a75;}}
}
B6c1ac0:L6c1ac0:{c.instructions+=3;NFSU2_TR(0x6c1ac0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1ac2:{NFSU2_TR(0x6c1ac2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1ac5:{NFSU2_TR(0x6c1ac5);
if(r1(R+518)){{goto L6c1b18;}}
}
B6c1ac7:L6c1ac7:{c.instructions+=2;NFSU2_TR(0x6c1ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1aca:{NFSU2_TR(0x6c1aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1acd:L6c1acd:{c.instructions+=6;NFSU2_TR(0x6c1acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1ad0:{NFSU2_TR(0x6c1ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1ad4:{NFSU2_TR(0x6c1ad4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1ad5:{NFSU2_TR(0x6c1ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c1ad8:{NFSU2_TR(0x6c1ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1adb:{NFSU2_TR(0x6c1adb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1a35u);}goto L6c1a35;}}
}
B6c1ae1:L6c1ae1:{c.instructions+=2;NFSU2_TR(0x6c1ae1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1ae4:{NFSU2_TR(0x6c1ae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1afd;}}
}
B6c1ae6:L6c1ae6:{c.instructions+=4;NFSU2_TR(0x6c1ae6);
__builtin_memmove((R+4),(R+24),4);
}
B6c1ae8:{NFSU2_TR(0x6c1ae8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1aea:{NFSU2_TR(0x6c1aea);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6c1af0:{NFSU2_TR(0x6c1af0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1afd;}}
}
B6c1af2:L6c1af2:{c.instructions+=2;NFSU2_TR(0x6c1af2);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+28))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c1af6:{NFSU2_TR(0x6c1af6);
if(r1(R+518)){{goto L6c1b18;}}
}
B6c1af8:L6c1af8:{c.instructions+=3;NFSU2_TR(0x6c1af8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1af9:{NFSU2_TR(0x6c1af9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c1afb:{NFSU2_TR(0x6c1afb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1af2u);}goto L6c1af2;}}
}
B6c1afd:L6c1afd:{c.instructions+=5;NFSU2_TR(0x6c1afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1b00:{NFSU2_TR(0x6c1b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1b03:{NFSU2_TR(0x6c1b03);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1b05:{NFSU2_TR(0x6c1b05);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6c1b07:{NFSU2_TR(0x6c1b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1b08:L6c1b08:{c.instructions+=3;NFSU2_TR(0x6c1b08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c1b0b:{NFSU2_TR(0x6c1b0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c1b0e:{NFSU2_TR(0x6c1b0e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c1b1d;}}
}
B6c1b10:L6c1b10:{c.instructions+=3;NFSU2_TR(0x6c1b10);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c1b14:{NFSU2_TR(0x6c1b14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c1b16:{NFSU2_TR(0x6c1b16);
{goto L6c1b23;}
}
B6c1b18:L6c1b18:{c.instructions+=3;NFSU2_TR(0x6c1b18);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1b1a:{NFSU2_TR(0x6c1b1a);
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
B6c1b1b:{NFSU2_TR(0x6c1b1b);
{goto L6c1b82;}
}
B6c1b1d:L6c1b1d:{c.instructions+=1;NFSU2_TR(0x6c1b1d);
u8 U[4];
w4(U+0,u32(0xffull));
s4(u32(r4(R+0)),r4(U+0));
}
B6c1b23:L6c1b23:{c.instructions+=3;NFSU2_TR(0x6c1b23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c1b26:{NFSU2_TR(0x6c1b26);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6c1b27:{NFSU2_TR(0x6c1b27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1b08u);}goto L6c1b08;}}
}
B6c1b29:L6c1b29:{c.instructions+=1;NFSU2_TR(0x6c1b29);
{goto L6c1b80;}
}
B6c1b2b:L6c1b2b:{c.instructions+=4;NFSU2_TR(0x6c1b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1b2e:{NFSU2_TR(0x6c1b2e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c1b34:{NFSU2_TR(0x6c1b34);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1b36:{NFSU2_TR(0x6c1b36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1b38:L6c1b38:{c.instructions+=2;NFSU2_TR(0x6c1b38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c1b3a:{NFSU2_TR(0x6c1b3a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c1b41;}}
}
B6c1b3c:L6c1b3c:{c.instructions+=2;NFSU2_TR(0x6c1b3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c1b3f:{NFSU2_TR(0x6c1b3f);
{goto L6c1b48;}
}
B6c1b41:L6c1b41:{c.instructions+=1;NFSU2_TR(0x6c1b41);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0xffull));
s4(u32(r4(U+4)),r4(U+8));
}
B6c1b48:L6c1b48:{c.instructions+=3;NFSU2_TR(0x6c1b48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1b49:{NFSU2_TR(0x6c1b49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c1b4c:{NFSU2_TR(0x6c1b4c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1b38u);}goto L6c1b38;}}
}
B6c1b4e:L6c1b4e:{c.instructions+=2;NFSU2_TR(0x6c1b4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1b51:{NFSU2_TR(0x6c1b51);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1b80;}}
}
B6c1b53:L6c1b53:{c.instructions+=4;NFSU2_TR(0x6c1b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1b56:{NFSU2_TR(0x6c1b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1b59:{NFSU2_TR(0x6c1b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c1b5b:{NFSU2_TR(0x6c1b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1b5e:L6c1b5e:{c.instructions+=5;NFSU2_TR(0x6c1b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1b61:{NFSU2_TR(0x6c1b61);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1b64:{NFSU2_TR(0x6c1b64);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1b66:{NFSU2_TR(0x6c1b66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c1b69:{NFSU2_TR(0x6c1b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1b70;}}
}
B6c1b6b:L6c1b6b:{c.instructions+=2;NFSU2_TR(0x6c1b6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1b6e:{NFSU2_TR(0x6c1b6e);
if(r1(R+518)){{goto L6c1b7a;}}
}
B6c1b70:L6c1b70:{c.instructions+=2;NFSU2_TR(0x6c1b70);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1b73:{NFSU2_TR(0x6c1b73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1b18u);}goto L6c1b18;}}
}
B6c1b75:L6c1b75:{c.instructions+=2;NFSU2_TR(0x6c1b75);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1b78:{NFSU2_TR(0x6c1b78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1b18u);}goto L6c1b18;}}
}
B6c1b7a:L6c1b7a:{c.instructions+=3;NFSU2_TR(0x6c1b7a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c1b7b:{NFSU2_TR(0x6c1b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c1b7e:{NFSU2_TR(0x6c1b7e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1b5eu);}goto L6c1b5e;}}
}
B6c1b80:L6c1b80:{c.instructions+=1;NFSU2_TR(0x6c1b80);
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
B6c1b82:L6c1b82:{c.instructions+=5;NFSU2_TR(0x6c1b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1b83:{NFSU2_TR(0x6c1b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1b84:{NFSU2_TR(0x6c1b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c1b85:{NFSU2_TR(0x6c1b85);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c1b86:{NFSU2_TR(0x6c1b86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1b89:L6c1b89:{c.instructions+=15;NFSU2_TR(0x6c1b89);
__builtin_memmove((R+28),(R+28),4);
}
B6c1b8b:{NFSU2_TR(0x6c1b8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1b8c:{NFSU2_TR(0x6c1b8c);
__builtin_memmove((R+20),(R+16),4);
}
B6c1b8e:{NFSU2_TR(0x6c1b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1c4ull))));
}
B6c1b94:{NFSU2_TR(0x6c1b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1b97:{NFSU2_TR(0x6c1b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1b9a:{NFSU2_TR(0x6c1b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c1b9c:{NFSU2_TR(0x6c1b9c);
__builtin_memmove((R+8),(R+4),4);
}
B6c1b9e:{NFSU2_TR(0x6c1b9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1ba0:{NFSU2_TR(0x6c1ba0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6c1ba6:{NFSU2_TR(0x6c1ba6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1ba9:{NFSU2_TR(0x6c1ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1bac:{NFSU2_TR(0x6c1bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1baf:{NFSU2_TR(0x6c1baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1bb2:{NFSU2_TR(0x6c1bb2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1bbf;}}
}
B6c1bb4:L6c1bb4:{c.instructions+=2;NFSU2_TR(0x6c1bb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1bb7:{NFSU2_TR(0x6c1bb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1bbf;}}
}
B6c1bb9:L6c1bb9:{c.instructions+=2;NFSU2_TR(0x6c1bb9);
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
B6c1bba:{NFSU2_TR(0x6c1bba);
{goto L6c1fe7;}
}
B6c1bbf:L6c1bbf:{c.instructions+=5;NFSU2_TR(0x6c1bbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1bc0:{NFSU2_TR(0x6c1bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1bc3:{NFSU2_TR(0x6c1bc3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6c1bc9:{NFSU2_TR(0x6c1bc9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1bcc:{NFSU2_TR(0x6c1bcc);
if(r1(R+518)){{goto L6c1bd6;}}
}
B6c1bce:L6c1bce:{c.instructions+=3;NFSU2_TR(0x6c1bce);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1bd0:{NFSU2_TR(0x6c1bd0);
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
B6c1bd1:{NFSU2_TR(0x6c1bd1);
{goto L6c1fe6;}
}
B6c1bd6:L6c1bd6:{c.instructions+=3;NFSU2_TR(0x6c1bd6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c1bd8:{NFSU2_TR(0x6c1bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1bdf:{NFSU2_TR(0x6c1bdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1bed;}}
}
B6c1be1:L6c1be1:{c.instructions+=2;NFSU2_TR(0x6c1be1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1be4:{NFSU2_TR(0x6c1be4);
if(r1(R+518)){{goto L6c1bed;}}
}
B6c1be6:L6c1be6:{c.instructions+=1;NFSU2_TR(0x6c1be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1bed:L6c1bed:{c.instructions+=5;NFSU2_TR(0x6c1bed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1bf0:{NFSU2_TR(0x6c1bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1bf1:{NFSU2_TR(0x6c1bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1bf2:{NFSU2_TR(0x6c1bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1bf5:{NFSU2_TR(0x6c1bf5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1f86;}}
}
B6c1bfb:L6c1bfb:{c.instructions+=4;NFSU2_TR(0x6c1bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1bfe:{NFSU2_TR(0x6c1bfe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6c1bff:{NFSU2_TR(0x6c1bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1c02:{NFSU2_TR(0x6c1c02);
if(r1(R+518)){{goto L6c1f6b;}}
}
B6c1c08:L6c1c08:{c.instructions+=6;NFSU2_TR(0x6c1c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1c0b:{NFSU2_TR(0x6c1c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c1c0d:{NFSU2_TR(0x6c1c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1c10:{NFSU2_TR(0x6c1c10);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1c12:{NFSU2_TR(0x6c1c12);
__builtin_memmove((R+4),(R+8),4);
}
B6c1c14:{NFSU2_TR(0x6c1c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1c17:L6c1c17:{c.instructions+=1;NFSU2_TR(0x6c1c17);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c1c19;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1c17u);}goto L6c1c17;}
}
B6c1c19:L6c1c19:{c.instructions+=3;NFSU2_TR(0x6c1c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c1c1a:{NFSU2_TR(0x6c1c1a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c1c1d:{NFSU2_TR(0x6c1c1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1c23:L6c1c23:{c.instructions+=1;NFSU2_TR(0x6c1c23);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c1c25;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1c23u);}goto L6c1c23;}
}
B6c1c25:L6c1c25:{c.instructions+=3;NFSU2_TR(0x6c1c25);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1c27:{NFSU2_TR(0x6c1c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c1c28:{NFSU2_TR(0x6c1c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1c2e:L6c1c2e:{c.instructions+=1;NFSU2_TR(0x6c1c2e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c1c30;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1c2eu);}goto L6c1c2e;}
}
B6c1c30:L6c1c30:{c.instructions+=6;NFSU2_TR(0x6c1c30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1c32:{NFSU2_TR(0x6c1c32);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1c35:{NFSU2_TR(0x6c1c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1c38:{NFSU2_TR(0x6c1c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1c3b:{NFSU2_TR(0x6c1c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1c3e:{NFSU2_TR(0x6c1c3e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1d52;}}
}
B6c1c44:L6c1c44:{c.instructions+=1;NFSU2_TR(0x6c1c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1c47:L6c1c47:{c.instructions+=2;NFSU2_TR(0x6c1c47);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1c4b:{NFSU2_TR(0x6c1c4b);
if(r1(R+518)){{goto L6c1c55;}}
}
B6c1c4d:L6c1c4d:{c.instructions+=4;NFSU2_TR(0x6c1c4d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c1c4f:{NFSU2_TR(0x6c1c4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c1c50:{NFSU2_TR(0x6c1c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c1c53:{NFSU2_TR(0x6c1c53);
{goto L6c1c58;}
}
B6c1c55:L6c1c55:{c.instructions+=1;NFSU2_TR(0x6c1c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1c58:L6c1c58:{c.instructions+=4;NFSU2_TR(0x6c1c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1c5b:{NFSU2_TR(0x6c1c5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c1c5d:{NFSU2_TR(0x6c1c5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c1c60:{NFSU2_TR(0x6c1c60);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c1f81;}}
}
B6c1c66:L6c1c66:{c.instructions+=12;NFSU2_TR(0x6c1c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1c69:{NFSU2_TR(0x6c1c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1c6c:{NFSU2_TR(0x6c1c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1c6f:{NFSU2_TR(0x6c1c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1c72:{NFSU2_TR(0x6c1c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1c75:{NFSU2_TR(0x6c1c75);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6c1c77:{NFSU2_TR(0x6c1c77);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c1c7a:{NFSU2_TR(0x6c1c7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c1c7d:{NFSU2_TR(0x6c1c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1c80:{NFSU2_TR(0x6c1c80);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c1c84:{NFSU2_TR(0x6c1c84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c1c87:{NFSU2_TR(0x6c1c87);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c1cfc;}}
}
B6c1c89:L6c1c89:{c.instructions+=3;NFSU2_TR(0x6c1c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1c8c:{NFSU2_TR(0x6c1c8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1c8f:{NFSU2_TR(0x6c1c8f);
if(r1(R+518)){{goto L6c1d4b;}}
}
B6c1c95:L6c1c95:{c.instructions+=17;NFSU2_TR(0x6c1c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+0))));
}
B6c1c97:{NFSU2_TR(0x6c1c97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1c9a:{NFSU2_TR(0x6c1c9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c1c9d:{NFSU2_TR(0x6c1c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6c1ca0:{NFSU2_TR(0x6c1ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1ca3:{NFSU2_TR(0x6c1ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1ca6:{NFSU2_TR(0x6c1ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1ca9:{NFSU2_TR(0x6c1ca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c1caf:{NFSU2_TR(0x6c1caf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1cb0:{NFSU2_TR(0x6c1cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1cb3:{NFSU2_TR(0x6c1cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1cb6:{NFSU2_TR(0x6c1cb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1cb9:{NFSU2_TR(0x6c1cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c1cbc:{NFSU2_TR(0x6c1cbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1cbd:{NFSU2_TR(0x6c1cbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c1cc0:{NFSU2_TR(0x6c1cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1cc3:{NFSU2_TR(0x6c1cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1cc8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c19d8u);}goto L6c19d8;}
}
B6c1cc8:L6c1cc8:{c.instructions+=2;NFSU2_TR(0x6c1cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1cca:{NFSU2_TR(0x6c1cca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1d4b;}}
}
B6c1ccc:L6c1ccc:{c.instructions+=15;NFSU2_TR(0x6c1ccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1ccf:{NFSU2_TR(0x6c1ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1cd2:{NFSU2_TR(0x6c1cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c1cd5:{NFSU2_TR(0x6c1cd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c1cdb:{NFSU2_TR(0x6c1cdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1cdc:{NFSU2_TR(0x6c1cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c1ce2:{NFSU2_TR(0x6c1ce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1ce3:{NFSU2_TR(0x6c1ce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c1ce6:{NFSU2_TR(0x6c1ce6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1ce7:{NFSU2_TR(0x6c1ce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c1cea:{NFSU2_TR(0x6c1cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1ceb:{NFSU2_TR(0x6c1ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1cee:{NFSU2_TR(0x6c1cee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1cef:{NFSU2_TR(0x6c1cef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c1cf2:{NFSU2_TR(0x6c1cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c1cf7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1b89u);}goto L6c1b89;}
}
B6c1cf7:L6c1cf7:{c.instructions+=2;NFSU2_TR(0x6c1cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1cfa:{NFSU2_TR(0x6c1cfa);
{goto L6c1d2b;}
}
B6c1cfc:L6c1cfc:{c.instructions+=4;NFSU2_TR(0x6c1cfc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c1cff:{NFSU2_TR(0x6c1cff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1d01:{NFSU2_TR(0x6c1d01);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c1d04:{NFSU2_TR(0x6c1d04);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffedcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c1d0b:L6c1d0b:{c.instructions+=4;NFSU2_TR(0x6c1d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c1d0e:{NFSU2_TR(0x6c1d0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c1d11:{NFSU2_TR(0x6c1d11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c1d14:{NFSU2_TR(0x6c1d14);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c1d1f;}}
}
B6c1d16:L6c1d16:{c.instructions+=4;NFSU2_TR(0x6c1d16);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6c1d18:{NFSU2_TR(0x6c1d18);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c1d1b:{NFSU2_TR(0x6c1d1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c1d1d:{NFSU2_TR(0x6c1d1d);
{goto L6c1d22;}
}
B6c1d1f:L6c1d1f:{c.instructions+=1;NFSU2_TR(0x6c1d1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c1d22:L6c1d22:{c.instructions+=4;NFSU2_TR(0x6c1d22);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c1d23:{NFSU2_TR(0x6c1d23);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c1d26:{NFSU2_TR(0x6c1d26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c1d29:{NFSU2_TR(0x6c1d29);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1d0bu);}goto L6c1d0b;}}
}
B6c1d2b:L6c1d2b:{c.instructions+=2;NFSU2_TR(0x6c1d2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1d2f:{NFSU2_TR(0x6c1d2f);
if(r1(R+518)){{goto L6c1d52;}}
}
B6c1d31:L6c1d31:{c.instructions+=7;NFSU2_TR(0x6c1d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1d34:{NFSU2_TR(0x6c1d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d37:{NFSU2_TR(0x6c1d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d3a:{NFSU2_TR(0x6c1d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1d3d:{NFSU2_TR(0x6c1d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1d40:{NFSU2_TR(0x6c1d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c1d43:{NFSU2_TR(0x6c1d43);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1c47u);}goto L6c1c47;}}
}
B6c1d49:L6c1d49:{c.instructions+=1;NFSU2_TR(0x6c1d49);
{goto L6c1d52;}
}
B6c1d4b:L6c1d4b:{c.instructions+=1;NFSU2_TR(0x6c1d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d52:L6c1d52:{c.instructions+=5;NFSU2_TR(0x6c1d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1d55:{NFSU2_TR(0x6c1d55);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c1d57:{NFSU2_TR(0x6c1d57);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1d5a:{NFSU2_TR(0x6c1d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d5d:{NFSU2_TR(0x6c1d5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1df3;}}
}
B6c1d63:L6c1d63:{c.instructions+=1;NFSU2_TR(0x6c1d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d66:L6c1d66:{c.instructions+=2;NFSU2_TR(0x6c1d66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1d69:{NFSU2_TR(0x6c1d69);
if(r1(R+518)){{goto L6c1d73;}}
}
B6c1d6b:L6c1d6b:{c.instructions+=4;NFSU2_TR(0x6c1d6b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c1d6d:{NFSU2_TR(0x6c1d6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c1d6e:{NFSU2_TR(0x6c1d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c1d71:{NFSU2_TR(0x6c1d71);
{goto L6c1d76;}
}
B6c1d73:L6c1d73:{c.instructions+=1;NFSU2_TR(0x6c1d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1d76:L6c1d76:{c.instructions+=2;NFSU2_TR(0x6c1d76);
u8 U[20];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(u32(0x10ull))));
}
B6c1d7b:{NFSU2_TR(0x6c1d7b);
if(r1(R+512)){{goto L6c1dde;}}
}
B6c1d7d:L6c1d7d:{c.instructions+=4;NFSU2_TR(0x6c1d7d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1d7f:{NFSU2_TR(0x6c1d7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1d82:{NFSU2_TR(0x6c1d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d85:{NFSU2_TR(0x6c1d85);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1dde;}}
}
B6c1d87:L6c1d87:{c.instructions+=3;NFSU2_TR(0x6c1d87);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c1d89:{NFSU2_TR(0x6c1d89);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1d8c:{NFSU2_TR(0x6c1d8c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1dcf;}}
}
B6c1d8e:L6c1d8e:{c.instructions+=2;NFSU2_TR(0x6c1d8e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c1d92:{NFSU2_TR(0x6c1d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1d95:L6c1d95:{c.instructions+=3;NFSU2_TR(0x6c1d95);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1d97:{NFSU2_TR(0x6c1d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1d9a:{NFSU2_TR(0x6c1d9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1dbe;}}
}
B6c1d9c:L6c1d9c:{c.instructions+=6;NFSU2_TR(0x6c1d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1d9f:{NFSU2_TR(0x6c1d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1da2:{NFSU2_TR(0x6c1da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1da5:{NFSU2_TR(0x6c1da5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6c1da7:{NFSU2_TR(0x6c1da7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c1daa:{NFSU2_TR(0x6c1daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1dad:L6c1dad:{c.instructions+=2;NFSU2_TR(0x6c1dad);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c1daf:{NFSU2_TR(0x6c1daf);
if(r1(R+518)){{goto L6c1dc6;}}
}
B6c1db1:L6c1db1:{c.instructions+=4;NFSU2_TR(0x6c1db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1db4:{NFSU2_TR(0x6c1db4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c1db7:{NFSU2_TR(0x6c1db7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c1dba:{NFSU2_TR(0x6c1dba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1dadu);}goto L6c1dad;}}
}
B6c1dbc:L6c1dbc:{c.instructions+=1;NFSU2_TR(0x6c1dbc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c1dbe:L6c1dbe:{c.instructions+=3;NFSU2_TR(0x6c1dbe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c1dbf:{NFSU2_TR(0x6c1dbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c1dc2:{NFSU2_TR(0x6c1dc2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1d95u);}goto L6c1d95;}}
}
B6c1dc4:L6c1dc4:{c.instructions+=1;NFSU2_TR(0x6c1dc4);
{goto L6c1dcf;}
}
B6c1dc6:L6c1dc6:{c.instructions+=2;NFSU2_TR(0x6c1dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1dcd:{NFSU2_TR(0x6c1dcd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c1dcf:L6c1dcf:{c.instructions+=5;NFSU2_TR(0x6c1dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1dd2:{NFSU2_TR(0x6c1dd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1dd3:{NFSU2_TR(0x6c1dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c1dd6:{NFSU2_TR(0x6c1dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1dd9:{NFSU2_TR(0x6c1dd9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1d87u);}goto L6c1d87;}}
}
B6c1ddb:L6c1ddb:{c.instructions+=1;NFSU2_TR(0x6c1ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1dde:L6c1dde:{c.instructions+=6;NFSU2_TR(0x6c1dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1de1:{NFSU2_TR(0x6c1de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1de4:{NFSU2_TR(0x6c1de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1de7:{NFSU2_TR(0x6c1de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1dea:{NFSU2_TR(0x6c1dea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c1ded:{NFSU2_TR(0x6c1ded);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1d66u);}goto L6c1d66;}}
}
B6c1df3:L6c1df3:{c.instructions+=2;NFSU2_TR(0x6c1df3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1df6:{NFSU2_TR(0x6c1df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1f53;}}
}
B6c1dfc:L6c1dfc:{c.instructions+=2;NFSU2_TR(0x6c1dfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1dff:{NFSU2_TR(0x6c1dff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1f86;}}
}
B6c1e05:L6c1e05:{c.instructions+=3;NFSU2_TR(0x6c1e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e08:{NFSU2_TR(0x6c1e08);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c1e0b:{NFSU2_TR(0x6c1e0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1f86;}}
}
B6c1e11:L6c1e11:{c.instructions+=3;NFSU2_TR(0x6c1e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e15:{NFSU2_TR(0x6c1e15);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1e19:{NFSU2_TR(0x6c1e19);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1ef5;}}
}
B6c1e1f:L6c1e1f:{c.instructions+=7;NFSU2_TR(0x6c1e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e22:{NFSU2_TR(0x6c1e22);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c1e26:{NFSU2_TR(0x6c1e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e29:{NFSU2_TR(0x6c1e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e2d:{NFSU2_TR(0x6c1e2d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1e2f:{NFSU2_TR(0x6c1e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e32:{NFSU2_TR(0x6c1e32);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1ee6;}}
}
B6c1e38:L6c1e38:{c.instructions+=4;NFSU2_TR(0x6c1e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e3b:{NFSU2_TR(0x6c1e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e3e:{NFSU2_TR(0x6c1e3e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1e40:{NFSU2_TR(0x6c1e40);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1ed7;}}
}
B6c1e46:L6c1e46:{c.instructions+=4;NFSU2_TR(0x6c1e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1e49:{NFSU2_TR(0x6c1e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1e4c:{NFSU2_TR(0x6c1e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e4f:{NFSU2_TR(0x6c1e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e52:L6c1e52:{c.instructions+=4;NFSU2_TR(0x6c1e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e55:{NFSU2_TR(0x6c1e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c1e57:{NFSU2_TR(0x6c1e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1e59:{NFSU2_TR(0x6c1e59);
if(r1(R+518)){{goto L6c1eca;}}
}
B6c1e5b:L6c1e5b:{c.instructions+=2;NFSU2_TR(0x6c1e5b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c1e5e:{NFSU2_TR(0x6c1e5e);
if(r1(R+518)){{goto L6c1eca;}}
}
B6c1e60:L6c1e60:{c.instructions+=4;NFSU2_TR(0x6c1e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c1e63:{NFSU2_TR(0x6c1e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e67:{NFSU2_TR(0x6c1e67);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1e69:{NFSU2_TR(0x6c1e69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1e9f;}}
}
B6c1e6b:L6c1e6b:{c.instructions+=6;NFSU2_TR(0x6c1e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e6e:{NFSU2_TR(0x6c1e6e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c1e72:{NFSU2_TR(0x6c1e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1e75:{NFSU2_TR(0x6c1e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e78:{NFSU2_TR(0x6c1e78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c1e7b:{NFSU2_TR(0x6c1e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1e7e:L6c1e7e:{c.instructions+=3;NFSU2_TR(0x6c1e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c1e80:{NFSU2_TR(0x6c1e80);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1e82:{NFSU2_TR(0x6c1e82);
if(r1(R+518)){{goto L6c1e92;}}
}
B6c1e84:L6c1e84:{c.instructions+=5;NFSU2_TR(0x6c1e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e87:{NFSU2_TR(0x6c1e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1e8a:{NFSU2_TR(0x6c1e8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1e8d:{NFSU2_TR(0x6c1e8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1e90:{NFSU2_TR(0x6c1e90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1e99;}}
}
B6c1e92:L6c1e92:{c.instructions+=1;NFSU2_TR(0x6c1e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1e99:L6c1e99:{c.instructions+=3;NFSU2_TR(0x6c1e99);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c1e9c:{NFSU2_TR(0x6c1e9c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6c1e9d:{NFSU2_TR(0x6c1e9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1e7eu);}goto L6c1e7e;}}
}
B6c1e9f:L6c1e9f:{c.instructions+=2;NFSU2_TR(0x6c1e9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1ea2:{NFSU2_TR(0x6c1ea2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1ea8;}}
}
B6c1ea4:L6c1ea4:{c.instructions+=2;NFSU2_TR(0x6c1ea4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1ea6:{NFSU2_TR(0x6c1ea6);
{goto L6c1eab;}
}
B6c1ea8:L6c1ea8:{c.instructions+=1;NFSU2_TR(0x6c1ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1eab:L6c1eab:{c.instructions+=2;NFSU2_TR(0x6c1eab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1ead:{NFSU2_TR(0x6c1ead);
if(r1(R+518)){{goto L6c1eca;}}
}
B6c1eaf:L6c1eaf:{c.instructions+=1;NFSU2_TR(0x6c1eaf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c1eb1:L6c1eb1:{c.instructions+=2;NFSU2_TR(0x6c1eb1);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c1eb5:{NFSU2_TR(0x6c1eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1eb9;}}
}
B6c1eb7:L6c1eb7:{c.instructions+=1;NFSU2_TR(0x6c1eb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1eb9:L6c1eb9:{c.instructions+=3;NFSU2_TR(0x6c1eb9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c1eba:{NFSU2_TR(0x6c1eba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c1ebd:{NFSU2_TR(0x6c1ebd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1eb1u);}goto L6c1eb1;}}
}
B6c1ebf:L6c1ebf:{c.instructions+=2;NFSU2_TR(0x6c1ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1ec1:{NFSU2_TR(0x6c1ec1);
if(r1(R+518)){{goto L6c1eca;}}
}
B6c1ec3:L6c1ec3:{c.instructions+=1;NFSU2_TR(0x6c1ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1eca:L6c1eca:{c.instructions+=3;NFSU2_TR(0x6c1eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1ece:{NFSU2_TR(0x6c1ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1ed1:{NFSU2_TR(0x6c1ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1e52u);}goto L6c1e52;}}
}
B6c1ed7:L6c1ed7:{c.instructions+=4;NFSU2_TR(0x6c1ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1eda:{NFSU2_TR(0x6c1eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1edd:{NFSU2_TR(0x6c1edd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c1ee0:{NFSU2_TR(0x6c1ee0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1e38u);}goto L6c1e38;}}
}
B6c1ee6:L6c1ee6:{c.instructions+=4;NFSU2_TR(0x6c1ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1ee9:{NFSU2_TR(0x6c1ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1eec:{NFSU2_TR(0x6c1eec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c1eef:{NFSU2_TR(0x6c1eef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1e1fu);}goto L6c1e1f;}}
}
B6c1ef5:L6c1ef5:{c.instructions+=1;NFSU2_TR(0x6c1ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1ef9:L6c1ef9:{c.instructions+=4;NFSU2_TR(0x6c1ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1efc:{NFSU2_TR(0x6c1efc);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffedcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6c1f03:{NFSU2_TR(0x6c1f03);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1f06:{NFSU2_TR(0x6c1f06);
if(r1(R+518)){{goto L6c1f44;}}
}
B6c1f08:L6c1f08:{c.instructions+=3;NFSU2_TR(0x6c1f08);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c1f0a:{NFSU2_TR(0x6c1f0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1f0d:{NFSU2_TR(0x6c1f0d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1f44;}}
}
B6c1f0f:L6c1f0f:{c.instructions+=3;NFSU2_TR(0x6c1f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1f12:{NFSU2_TR(0x6c1f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1f15:{NFSU2_TR(0x6c1f15);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c1f18:L6c1f18:{c.instructions+=4;NFSU2_TR(0x6c1f18);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c1f1c:{NFSU2_TR(0x6c1f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1f1f:{NFSU2_TR(0x6c1f1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c1f21:{NFSU2_TR(0x6c1f21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c1f3e;}}
}
B6c1f23:L6c1f23:{c.instructions+=1;NFSU2_TR(0x6c1f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1f26:L6c1f26:{c.instructions+=3;NFSU2_TR(0x6c1f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c1f28:{NFSU2_TR(0x6c1f28);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1f2a:{NFSU2_TR(0x6c1f2a);
if(r1(R+518)){{goto L6c1f31;}}
}
B6c1f2c:L6c1f2c:{c.instructions+=2;NFSU2_TR(0x6c1f2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1f2f:{NFSU2_TR(0x6c1f2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1f38;}}
}
B6c1f31:L6c1f31:{c.instructions+=1;NFSU2_TR(0x6c1f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1f38:L6c1f38:{c.instructions+=3;NFSU2_TR(0x6c1f38);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c1f3b:{NFSU2_TR(0x6c1f3b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c1f3c:{NFSU2_TR(0x6c1f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1f26u);}goto L6c1f26;}}
}
B6c1f3e:L6c1f3e:{c.instructions+=3;NFSU2_TR(0x6c1f3e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c1f3f:{NFSU2_TR(0x6c1f3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6c1f42:{NFSU2_TR(0x6c1f42);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1f18u);}goto L6c1f18;}}
}
B6c1f44:L6c1f44:{c.instructions+=3;NFSU2_TR(0x6c1f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1f47:{NFSU2_TR(0x6c1f47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c1f4b:{NFSU2_TR(0x6c1f4b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1ef9u);}goto L6c1ef9;}}
}
B6c1f4d:L6c1f4d:{c.instructions+=2;NFSU2_TR(0x6c1f4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1f51:{NFSU2_TR(0x6c1f51);
if(r1(R+518)){{goto L6c1f86;}}
}
B6c1f53:L6c1f53:{c.instructions+=7;NFSU2_TR(0x6c1f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1f56:{NFSU2_TR(0x6c1f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1f59:{NFSU2_TR(0x6c1f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1f5c:{NFSU2_TR(0x6c1f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c1f5f:{NFSU2_TR(0x6c1f5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1f60:{NFSU2_TR(0x6c1f60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c1f63:{NFSU2_TR(0x6c1f63);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1c08u);}goto L6c1c08;}}
}
B6c1f69:L6c1f69:{c.instructions+=1;NFSU2_TR(0x6c1f69);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1f6b:L6c1f6b:{c.instructions+=2;NFSU2_TR(0x6c1f6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c1f6e:{NFSU2_TR(0x6c1f6e);
if(r1(R+518)){{goto L6c1f86;}}
}
B6c1f70:L6c1f70:{c.instructions+=4;NFSU2_TR(0x6c1f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c1f73:{NFSU2_TR(0x6c1f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1f76:{NFSU2_TR(0x6c1f76);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B6c1f79:{NFSU2_TR(0x6c1f79);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1bfbu);}goto L6c1bfb;}}
}
B6c1f7f:L6c1f7f:{c.instructions+=1;NFSU2_TR(0x6c1f7f);
{goto L6c1fe1;}
}
B6c1f81:L6c1f81:{c.instructions+=3;NFSU2_TR(0x6c1f81);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1f83:{NFSU2_TR(0x6c1f83);
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
B6c1f84:{NFSU2_TR(0x6c1f84);
{goto L6c1fe4;}
}
B6c1f86:L6c1f86:{c.instructions+=8;NFSU2_TR(0x6c1f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1f89:{NFSU2_TR(0x6c1f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1f8c:{NFSU2_TR(0x6c1f8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c1f8f:{NFSU2_TR(0x6c1f8f);
__builtin_memmove((R+4),(R+0),4);
}
B6c1f91:{NFSU2_TR(0x6c1f91);
__builtin_memmove((R+12),(R+4),4);
}
B6c1f93:{NFSU2_TR(0x6c1f93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c1f96:{NFSU2_TR(0x6c1f96);
__builtin_memmove((R+28),(R+8),4);
}
B6c1f98:{NFSU2_TR(0x6c1f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1f9b:L6c1f9b:{c.instructions+=1;NFSU2_TR(0x6c1f9b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c1f9d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1f9bu);}goto L6c1f9b;}
}
B6c1f9d:L6c1f9d:{c.instructions+=2;NFSU2_TR(0x6c1f9d);
__builtin_memmove((R+4),(R+12),4);
}
B6c1f9f:{NFSU2_TR(0x6c1f9f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c1fa2:L6c1fa2:{c.instructions+=1;NFSU2_TR(0x6c1fa2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c1fa4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1fa2u);}goto L6c1fa2;}
}
B6c1fa4:L6c1fa4:{c.instructions+=8;NFSU2_TR(0x6c1fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1fa7:{NFSU2_TR(0x6c1fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c1faa:{NFSU2_TR(0x6c1faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1fad:{NFSU2_TR(0x6c1fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c1fb0:{NFSU2_TR(0x6c1fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1fb3:{NFSU2_TR(0x6c1fb3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1fb4:{NFSU2_TR(0x6c1fb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c1fb6:{NFSU2_TR(0x6c1fb6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c1fb8:L6c1fb8:{c.instructions+=3;NFSU2_TR(0x6c1fb8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffedcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c1fbf:{NFSU2_TR(0x6c1fbf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1fc2:{NFSU2_TR(0x6c1fc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c1fd0;}}
}
B6c1fc4:L6c1fc4:{c.instructions+=3;NFSU2_TR(0x6c1fc4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe3cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c1fcb:{NFSU2_TR(0x6c1fcb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c1fce:{NFSU2_TR(0x6c1fce);
if(r1(R+518)){{goto L6c1fd3;}}
}
B6c1fd0:L6c1fd0:{c.instructions+=1;NFSU2_TR(0x6c1fd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c1fd3:L6c1fd3:{c.instructions+=3;NFSU2_TR(0x6c1fd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c1fd6:{NFSU2_TR(0x6c1fd6);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c1fdb:{NFSU2_TR(0x6c1fdb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c1fb8u);}goto L6c1fb8;}}
}
B6c1fdd:L6c1fdd:{c.instructions+=1;NFSU2_TR(0x6c1fdd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c1fe1:L6c1fe1:{c.instructions+=1;NFSU2_TR(0x6c1fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1fe4:L6c1fe4:{c.instructions+=2;NFSU2_TR(0x6c1fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c1fe5:{NFSU2_TR(0x6c1fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c1fe6:L6c1fe6:{c.instructions+=1;NFSU2_TR(0x6c1fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c1fe7:L6c1fe7:{c.instructions+=2;NFSU2_TR(0x6c1fe7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c1fe8:{NFSU2_TR(0x6c1fe8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c1feb:L6c1feb:{c.instructions+=12;NFSU2_TR(0x6c1feb);
__builtin_memmove((R+28),(R+28),4);
}
B6c1fed:{NFSU2_TR(0x6c1fed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1fee:{NFSU2_TR(0x6c1fee);
__builtin_memmove((R+20),(R+16),4);
}
B6c1ff0:{NFSU2_TR(0x6c1ff0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1ff1:{NFSU2_TR(0x6c1ff1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1ff2:{NFSU2_TR(0x6c1ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c1ff5:{NFSU2_TR(0x6c1ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c1ff7:{NFSU2_TR(0x6c1ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c1ffa:{NFSU2_TR(0x6c1ffa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c1ffb:{NFSU2_TR(0x6c1ffb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c1ffc:{NFSU2_TR(0x6c1ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c1fff:{NFSU2_TR(0x6c1fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
TAIL_STATIC(0x6c2001u,6c2);
}
XIT:NFSU2_TR_EXIT(0x6c1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
