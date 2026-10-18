#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e1(u8* __restrict R,Cpu& c);
u32 page_5e1(Cpu& c){return body_5e1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e1001:goto L5e1001;
case 0x5e1003:goto L5e1003;
case 0x5e1006:c.instructions+=9;goto B5e1006;
case 0x5e100b:c.instructions+=8;goto B5e100b;
case 0x5e100e:c.instructions+=7;goto B5e100e;
case 0x5e1012:c.instructions+=6;goto B5e1012;
case 0x5e1016:c.instructions+=5;goto B5e1016;
case 0x5e101c:c.instructions+=4;goto B5e101c;
case 0x5e1020:c.instructions+=3;goto B5e1020;
case 0x5e1022:c.instructions+=2;goto B5e1022;
case 0x5e1025:c.instructions+=1;goto B5e1025;
case 0x5e1027:goto L5e1027;
case 0x5e102a:c.instructions+=2;goto B5e102a;
case 0x5e102c:c.instructions+=1;goto B5e102c;
case 0x5e102e:goto L5e102e;
case 0x5e1034:c.instructions+=4;goto B5e1034;
case 0x5e1037:c.instructions+=3;goto B5e1037;
case 0x5e103c:c.instructions+=2;goto B5e103c;
case 0x5e103e:c.instructions+=1;goto B5e103e;
case 0x5e1040:goto L5e1040;
case 0x5e1044:c.instructions+=2;goto B5e1044;
case 0x5e1049:c.instructions+=1;goto B5e1049;
case 0x5e104b:goto L5e104b;
case 0x5e104f:c.instructions+=4;goto B5e104f;
case 0x5e1050:c.instructions+=3;goto B5e1050;
case 0x5e1053:c.instructions+=2;goto B5e1053;
case 0x5e1057:c.instructions+=1;goto B5e1057;
case 0x5e1059:goto L5e1059;
case 0x5e105d:c.instructions+=1;goto B5e105d;
case 0x5e105f:goto L5e105f;
case 0x5e1062:c.instructions+=1;goto B5e1062;
case 0x5e1064:goto L5e1064;
case 0x5e1068:goto L5e1068;
case 0x5e106b:c.instructions+=1;goto B5e106b;
case 0x5e106e:goto L5e106e;
case 0x5e1075:c.instructions+=3;goto B5e1075;
case 0x5e1076:c.instructions+=2;goto B5e1076;
case 0x5e1078:c.instructions+=1;goto B5e1078;
case 0x5e107e:goto L5e107e;
case 0x5e1082:c.instructions+=6;goto B5e1082;
case 0x5e1086:c.instructions+=5;goto B5e1086;
case 0x5e108d:c.instructions+=4;goto B5e108d;
case 0x5e108e:c.instructions+=3;goto B5e108e;
case 0x5e1090:c.instructions+=2;goto B5e1090;
case 0x5e1094:c.instructions+=1;goto B5e1094;
case 0x5e109a:goto L5e109a;
case 0x5e109e:c.instructions+=6;goto B5e109e;
case 0x5e10a0:c.instructions+=5;goto B5e10a0;
case 0x5e10a4:c.instructions+=4;goto B5e10a4;
case 0x5e10a5:c.instructions+=3;goto B5e10a5;
case 0x5e10a7:c.instructions+=2;goto B5e10a7;
case 0x5e10ab:c.instructions+=1;goto B5e10ab;
case 0x5e10b1:goto L5e10b1;
case 0x5e10b5:c.instructions+=11;goto B5e10b5;
case 0x5e10b9:c.instructions+=10;goto B5e10b9;
case 0x5e10bd:c.instructions+=9;goto B5e10bd;
case 0x5e10bf:c.instructions+=8;goto B5e10bf;
case 0x5e10c1:c.instructions+=7;goto B5e10c1;
case 0x5e10c3:c.instructions+=6;goto B5e10c3;
case 0x5e10c5:c.instructions+=5;goto B5e10c5;
case 0x5e10cc:c.instructions+=4;goto B5e10cc;
case 0x5e10ce:c.instructions+=3;goto B5e10ce;
case 0x5e10d0:c.instructions+=2;goto B5e10d0;
case 0x5e10d4:c.instructions+=1;goto B5e10d4;
case 0x5e10d6:goto L5e10d6;
case 0x5e10d9:c.instructions+=6;goto B5e10d9;
case 0x5e10dc:c.instructions+=5;goto B5e10dc;
case 0x5e10df:c.instructions+=4;goto B5e10df;
case 0x5e10e3:c.instructions+=3;goto B5e10e3;
case 0x5e10e7:c.instructions+=2;goto B5e10e7;
case 0x5e10eb:c.instructions+=1;goto B5e10eb;
case 0x5e10f0:goto L5e10f0;
case 0x5e10f4:c.instructions+=4;goto B5e10f4;
case 0x5e10f8:c.instructions+=3;goto B5e10f8;
case 0x5e10f9:c.instructions+=2;goto B5e10f9;
case 0x5e10fb:c.instructions+=1;goto B5e10fb;
case 0x5e1100:goto L5e1100;
case 0x5e1103:c.instructions+=2;goto B5e1103;
case 0x5e1106:c.instructions+=1;goto B5e1106;
case 0x5e1108:goto L5e1108;
case 0x5e110c:c.instructions+=4;goto B5e110c;
case 0x5e110e:c.instructions+=3;goto B5e110e;
case 0x5e1111:c.instructions+=2;goto B5e1111;
case 0x5e1115:c.instructions+=1;goto B5e1115;
case 0x5e1117:goto L5e1117;
case 0x5e111a:c.instructions+=1;goto B5e111a;
case 0x5e111c:goto L5e111c;
case 0x5e1120:c.instructions+=4;goto B5e1120;
case 0x5e1122:c.instructions+=3;goto B5e1122;
case 0x5e1125:c.instructions+=2;goto B5e1125;
case 0x5e1129:c.instructions+=1;goto B5e1129;
case 0x5e112b:goto L5e112b;
case 0x5e112f:c.instructions+=3;goto B5e112f;
case 0x5e1131:c.instructions+=2;goto B5e1131;
case 0x5e1134:c.instructions+=1;goto B5e1134;
case 0x5e1138:goto L5e1138;
case 0x5e113c:c.instructions+=3;goto B5e113c;
case 0x5e113d:c.instructions+=2;goto B5e113d;
case 0x5e113f:c.instructions+=1;goto B5e113f;
case 0x5e1141:goto L5e1141;
case 0x5e1145:goto L5e1145;
case 0x5e1149:c.instructions+=11;goto B5e1149;
case 0x5e114a:c.instructions+=10;goto B5e114a;
case 0x5e1150:c.instructions+=9;goto B5e1150;
case 0x5e1154:c.instructions+=8;goto B5e1154;
case 0x5e1155:c.instructions+=7;goto B5e1155;
case 0x5e115b:c.instructions+=6;goto B5e115b;
case 0x5e1161:c.instructions+=5;goto B5e1161;
case 0x5e1167:c.instructions+=4;goto B5e1167;
case 0x5e1168:c.instructions+=3;goto B5e1168;
case 0x5e1169:c.instructions+=2;goto B5e1169;
case 0x5e116f:c.instructions+=1;goto B5e116f;
case 0x5e1180:goto L5e1180;
case 0x5e1181:c.instructions+=3;goto B5e1181;
case 0x5e1187:c.instructions+=2;goto B5e1187;
case 0x5e1189:c.instructions+=1;goto B5e1189;
case 0x5e118b:goto L5e118b;
case 0x5e118c:c.instructions+=3;goto B5e118c;
case 0x5e118e:c.instructions+=2;goto B5e118e;
case 0x5e118f:c.instructions+=1;goto B5e118f;
case 0x5e1194:goto L5e1194;
case 0x5e1196:c.instructions+=2;goto B5e1196;
case 0x5e1198:c.instructions+=1;goto B5e1198;
case 0x5e119a:goto L5e119a;
case 0x5e11a0:goto L5e11a0;
case 0x5e11a2:c.instructions+=1;goto B5e11a2;
case 0x5e11a7:goto L5e11a7;
case 0x5e11a9:c.instructions+=2;goto B5e11a9;
case 0x5e11ab:c.instructions+=1;goto B5e11ab;
case 0x5e11ad:goto L5e11ad;
case 0x5e11b3:goto L5e11b3;
case 0x5e11b5:c.instructions+=4;goto B5e11b5;
case 0x5e11ba:c.instructions+=3;goto B5e11ba;
case 0x5e11bf:c.instructions+=2;goto B5e11bf;
case 0x5e11c4:c.instructions+=1;goto B5e11c4;
case 0x5e11c6:goto L5e11c6;
case 0x5e11c9:c.instructions+=6;goto B5e11c9;
case 0x5e11ce:c.instructions+=5;goto B5e11ce;
case 0x5e11d1:c.instructions+=4;goto B5e11d1;
case 0x5e11d2:c.instructions+=3;goto B5e11d2;
case 0x5e11d7:c.instructions+=2;goto B5e11d7;
case 0x5e11d8:c.instructions+=1;goto B5e11d8;
case 0x5e11dd:goto L5e11dd;
case 0x5e11de:c.instructions+=1;goto B5e11de;
case 0x5e11e3:goto L5e11e3;
case 0x5e11e6:goto L5e11e6;
case 0x5e11e7:c.instructions+=2;goto B5e11e7;
case 0x5e11f1:c.instructions+=1;goto B5e11f1;
case 0x5e11f2:goto L5e11f2;
case 0x5e11f8:c.instructions+=2;goto B5e11f8;
case 0x5e11f9:c.instructions+=1;goto B5e11f9;
case 0x5e11fe:goto L5e11fe;
case 0x5e1201:c.instructions+=3;goto B5e1201;
case 0x5e120b:c.instructions+=2;goto B5e120b;
case 0x5e120c:c.instructions+=1;goto B5e120c;
case 0x5e1210:goto L5e1210;
case 0x5e1213:c.instructions+=9;goto B5e1213;
case 0x5e1219:c.instructions+=8;goto B5e1219;
case 0x5e121d:c.instructions+=7;goto B5e121d;
case 0x5e1221:c.instructions+=6;goto B5e1221;
case 0x5e1225:c.instructions+=5;goto B5e1225;
case 0x5e122d:c.instructions+=4;goto B5e122d;
case 0x5e1231:c.instructions+=3;goto B5e1231;
case 0x5e1233:c.instructions+=2;goto B5e1233;
case 0x5e1236:c.instructions+=1;goto B5e1236;
case 0x5e123c:goto L5e123c;
case 0x5e123d:c.instructions+=5;goto B5e123d;
case 0x5e1243:c.instructions+=4;goto B5e1243;
case 0x5e1244:c.instructions+=3;goto B5e1244;
case 0x5e1245:c.instructions+=2;goto B5e1245;
case 0x5e1246:c.instructions+=1;goto B5e1246;
case 0x5e1250:goto L5e1250;
case 0x5e1254:c.instructions+=5;goto B5e1254;
case 0x5e1257:c.instructions+=4;goto B5e1257;
case 0x5e125b:c.instructions+=3;goto B5e125b;
case 0x5e125f:c.instructions+=2;goto B5e125f;
case 0x5e1261:c.instructions+=1;goto B5e1261;
case 0x5e1263:goto L5e1263;
case 0x5e1264:c.instructions+=1;goto B5e1264;
case 0x5e1266:goto L5e1266;
case 0x5e1267:c.instructions+=1;goto B5e1267;
case 0x5e126d:goto L5e126d;
case 0x5e1270:c.instructions+=2;goto B5e1270;
case 0x5e1273:c.instructions+=1;goto B5e1273;
case 0x5e1275:goto L5e1275;
case 0x5e1278:c.instructions+=2;goto B5e1278;
case 0x5e127b:c.instructions+=1;goto B5e127b;
case 0x5e127d:goto L5e127d;
case 0x5e1280:c.instructions+=1;goto B5e1280;
case 0x5e1283:goto L5e1283;
case 0x5e1286:c.instructions+=2;goto B5e1286;
case 0x5e1288:c.instructions+=1;goto B5e1288;
case 0x5e128e:goto L5e128e;
case 0x5e1296:c.instructions+=2;goto B5e1296;
case 0x5e1299:c.instructions+=1;goto B5e1299;
case 0x5e12a0:goto L5e12a0;
case 0x5e12a2:c.instructions+=3;goto B5e12a2;
case 0x5e12a4:c.instructions+=2;goto B5e12a4;
case 0x5e12a9:c.instructions+=1;goto B5e12a9;
case 0x5e12b0:goto L5e12b0;
case 0x5e12b3:c.instructions+=2;goto B5e12b3;
case 0x5e12b8:c.instructions+=1;goto B5e12b8;
case 0x5e12ba:goto L5e12ba;
case 0x5e12bc:c.instructions+=1;goto B5e12bc;
case 0x5e12be:goto L5e12be;
case 0x5e12bf:goto L5e12bf;
case 0x5e12c2:c.instructions+=2;goto B5e12c2;
case 0x5e12c3:c.instructions+=1;goto B5e12c3;
case 0x5e12c5:goto L5e12c5;
case 0x5e12c9:c.instructions+=1;goto B5e12c9;
case 0x5e12cf:goto L5e12cf;
case 0x5e12d1:c.instructions+=2;goto B5e12d1;
case 0x5e12d3:c.instructions+=1;goto B5e12d3;
case 0x5e12d5:goto L5e12d5;
case 0x5e12d8:c.instructions+=2;goto B5e12d8;
case 0x5e12dd:c.instructions+=1;goto B5e12dd;
case 0x5e12df:goto L5e12df;
case 0x5e12e1:c.instructions+=1;goto B5e12e1;
case 0x5e12e3:goto L5e12e3;
case 0x5e12e7:c.instructions+=2;goto B5e12e7;
case 0x5e12ed:c.instructions+=1;goto B5e12ed;
case 0x5e12ef:goto L5e12ef;
case 0x5e12f0:goto L5e12f0;
case 0x5e12f1:c.instructions+=3;goto B5e12f1;
case 0x5e12f4:c.instructions+=2;goto B5e12f4;
case 0x5e12f7:c.instructions+=1;goto B5e12f7;
case 0x5e12f9:goto L5e12f9;
case 0x5e12fb:goto L5e12fb;
case 0x5e12fe:c.instructions+=6;goto B5e12fe;
case 0x5e1302:c.instructions+=5;goto B5e1302;
case 0x5e1304:c.instructions+=4;goto B5e1304;
case 0x5e1307:c.instructions+=3;goto B5e1307;
case 0x5e130a:c.instructions+=2;goto B5e130a;
case 0x5e130c:c.instructions+=1;goto B5e130c;
case 0x5e130e:goto L5e130e;
case 0x5e1312:c.instructions+=2;goto B5e1312;
case 0x5e1315:c.instructions+=1;goto B5e1315;
case 0x5e1317:goto L5e1317;
case 0x5e1318:c.instructions+=1;goto B5e1318;
case 0x5e131a:goto L5e131a;
case 0x5e131b:c.instructions+=1;goto B5e131b;
case 0x5e131d:goto L5e131d;
case 0x5e131f:c.instructions+=2;goto B5e131f;
case 0x5e1321:c.instructions+=1;goto B5e1321;
case 0x5e1323:goto L5e1323;
case 0x5e1325:c.instructions+=1;goto B5e1325;
case 0x5e1327:goto L5e1327;
case 0x5e132a:c.instructions+=4;goto B5e132a;
case 0x5e132c:c.instructions+=3;goto B5e132c;
case 0x5e132f:c.instructions+=2;goto B5e132f;
case 0x5e1332:c.instructions+=1;goto B5e1332;
case 0x5e1334:goto L5e1334;
case 0x5e1338:c.instructions+=1;goto B5e1338;
case 0x5e133a:goto L5e133a;
case 0x5e1340:c.instructions+=4;goto B5e1340;
case 0x5e1343:c.instructions+=3;goto B5e1343;
case 0x5e1345:c.instructions+=2;goto B5e1345;
case 0x5e1347:c.instructions+=1;goto B5e1347;
case 0x5e1349:goto L5e1349;
case 0x5e134c:goto L5e134c;
case 0x5e134e:c.instructions+=4;goto B5e134e;
case 0x5e1350:c.instructions+=3;goto B5e1350;
case 0x5e1353:c.instructions+=2;goto B5e1353;
case 0x5e1355:c.instructions+=1;goto B5e1355;
case 0x5e1357:goto L5e1357;
case 0x5e135b:c.instructions+=1;goto B5e135b;
case 0x5e1360:goto L5e1360;
case 0x5e1364:goto L5e1364;
case 0x5e1367:c.instructions+=1;goto B5e1367;
case 0x5e1369:goto L5e1369;
case 0x5e136d:c.instructions+=1;goto B5e136d;
case 0x5e136f:goto L5e136f;
case 0x5e1373:goto L5e1373;
case 0x5e1376:c.instructions+=2;goto B5e1376;
case 0x5e1378:c.instructions+=1;goto B5e1378;
case 0x5e137a:goto L5e137a;
case 0x5e1381:c.instructions+=1;goto B5e1381;
case 0x5e1383:goto L5e1383;
case 0x5e1385:goto L5e1385;
case 0x5e1388:c.instructions+=5;goto B5e1388;
case 0x5e138b:c.instructions+=4;goto B5e138b;
case 0x5e138e:c.instructions+=3;goto B5e138e;
case 0x5e1390:c.instructions+=2;goto B5e1390;
case 0x5e1397:c.instructions+=1;goto B5e1397;
case 0x5e1399:goto L5e1399;
case 0x5e139d:c.instructions+=4;goto B5e139d;
case 0x5e139f:c.instructions+=3;goto B5e139f;
case 0x5e13a2:c.instructions+=2;goto B5e13a2;
case 0x5e13a6:c.instructions+=1;goto B5e13a6;
case 0x5e13a8:goto L5e13a8;
case 0x5e13ac:goto L5e13ac;
case 0x5e13b0:c.instructions+=1;goto B5e13b0;
case 0x5e13b6:goto L5e13b6;
case 0x5e13b8:goto L5e13b8;
case 0x5e13bc:goto L5e13bc;
case 0x5e13be:c.instructions+=1;goto B5e13be;
case 0x5e13c0:goto L5e13c0;
case 0x5e13c3:c.instructions+=3;goto B5e13c3;
case 0x5e13c9:c.instructions+=2;goto B5e13c9;
case 0x5e13d0:c.instructions+=1;goto B5e13d0;
case 0x5e13d2:goto L5e13d2;
case 0x5e13d4:goto L5e13d4;
case 0x5e13d6:c.instructions+=4;goto B5e13d6;
case 0x5e13dc:c.instructions+=3;goto B5e13dc;
case 0x5e13de:c.instructions+=2;goto B5e13de;
case 0x5e13e3:c.instructions+=1;goto B5e13e3;
case 0x5e13e5:goto L5e13e5;
case 0x5e13e7:c.instructions+=9;goto B5e13e7;
case 0x5e13e9:c.instructions+=8;goto B5e13e9;
case 0x5e13ec:c.instructions+=7;goto B5e13ec;
case 0x5e13ee:c.instructions+=6;goto B5e13ee;
case 0x5e13f1:c.instructions+=5;goto B5e13f1;
case 0x5e13f3:c.instructions+=4;goto B5e13f3;
case 0x5e13f7:c.instructions+=3;goto B5e13f7;
case 0x5e13fa:c.instructions+=2;goto B5e13fa;
case 0x5e13fc:c.instructions+=1;goto B5e13fc;
case 0x5e1402:goto L5e1402;
case 0x5e1405:c.instructions+=2;goto B5e1405;
case 0x5e140c:c.instructions+=1;goto B5e140c;
case 0x5e140e:goto L5e140e;
case 0x5e1410:c.instructions+=6;goto B5e1410;
case 0x5e1412:c.instructions+=5;goto B5e1412;
case 0x5e1415:c.instructions+=4;goto B5e1415;
case 0x5e1417:c.instructions+=3;goto B5e1417;
case 0x5e141a:c.instructions+=2;goto B5e141a;
case 0x5e141c:c.instructions+=1;goto B5e141c;
case 0x5e141e:goto L5e141e;
case 0x5e1421:c.instructions+=1;goto B5e1421;
case 0x5e1425:goto L5e1425;
case 0x5e1427:c.instructions+=1;goto B5e1427;
case 0x5e1429:goto L5e1429;
case 0x5e142d:c.instructions+=2;goto B5e142d;
case 0x5e1430:c.instructions+=1;goto B5e1430;
case 0x5e1432:goto L5e1432;
case 0x5e1433:c.instructions+=1;goto B5e1433;
case 0x5e1435:goto L5e1435;
case 0x5e1436:c.instructions+=1;goto B5e1436;
case 0x5e1438:goto L5e1438;
case 0x5e143b:c.instructions+=2;goto B5e143b;
case 0x5e143e:c.instructions+=1;goto B5e143e;
case 0x5e1440:goto L5e1440;
case 0x5e1443:c.instructions+=2;goto B5e1443;
case 0x5e1446:c.instructions+=1;goto B5e1446;
case 0x5e1448:goto L5e1448;
case 0x5e144b:c.instructions+=1;goto B5e144b;
case 0x5e144e:goto L5e144e;
case 0x5e1451:c.instructions+=2;goto B5e1451;
case 0x5e1453:c.instructions+=1;goto B5e1453;
case 0x5e1455:goto L5e1455;
case 0x5e1457:c.instructions+=1;goto B5e1457;
case 0x5e1459:goto L5e1459;
case 0x5e145d:c.instructions+=20;goto B5e145d;
case 0x5e145f:c.instructions+=19;goto B5e145f;
case 0x5e1463:c.instructions+=18;goto B5e1463;
case 0x5e1465:c.instructions+=17;goto B5e1465;
case 0x5e1468:c.instructions+=16;goto B5e1468;
case 0x5e146b:c.instructions+=15;goto B5e146b;
case 0x5e146d:c.instructions+=14;goto B5e146d;
case 0x5e146f:c.instructions+=13;goto B5e146f;
case 0x5e1471:c.instructions+=12;goto B5e1471;
case 0x5e1473:c.instructions+=11;goto B5e1473;
case 0x5e1475:c.instructions+=10;goto B5e1475;
case 0x5e1477:c.instructions+=9;goto B5e1477;
case 0x5e1479:c.instructions+=8;goto B5e1479;
case 0x5e147b:c.instructions+=7;goto B5e147b;
case 0x5e147f:c.instructions+=6;goto B5e147f;
case 0x5e1483:c.instructions+=5;goto B5e1483;
case 0x5e1487:c.instructions+=4;goto B5e1487;
case 0x5e148b:c.instructions+=3;goto B5e148b;
case 0x5e148d:c.instructions+=2;goto B5e148d;
case 0x5e1490:c.instructions+=1;goto B5e1490;
case 0x5e1492:goto L5e1492;
case 0x5e1494:c.instructions+=1;goto B5e1494;
case 0x5e1499:goto L5e1499;
case 0x5e149d:goto L5e149d;
case 0x5e149e:c.instructions+=3;goto B5e149e;
case 0x5e149f:c.instructions+=2;goto B5e149f;
case 0x5e14a0:c.instructions+=1;goto B5e14a0;
case 0x5e14a1:goto L5e14a1;
case 0x5e14a3:c.instructions+=2;goto B5e14a3;
case 0x5e14a6:c.instructions+=1;goto B5e14a6;
case 0x5e14b0:goto L5e14b0;
case 0x5e14b1:c.instructions+=6;goto B5e14b1;
case 0x5e14b2:c.instructions+=5;goto B5e14b2;
case 0x5e14b3:c.instructions+=4;goto B5e14b3;
case 0x5e14b4:c.instructions+=3;goto B5e14b4;
case 0x5e14b6:c.instructions+=2;goto B5e14b6;
case 0x5e14b8:c.instructions+=1;goto B5e14b8;
case 0x5e14bd:goto L5e14bd;
case 0x5e14c1:c.instructions+=4;goto B5e14c1;
case 0x5e14c5:c.instructions+=3;goto B5e14c5;
case 0x5e14c7:c.instructions+=2;goto B5e14c7;
case 0x5e14c9:c.instructions+=1;goto B5e14c9;
case 0x5e14cb:goto L5e14cb;
case 0x5e14cc:c.instructions+=2;goto B5e14cc;
case 0x5e14ce:c.instructions+=1;goto B5e14ce;
case 0x5e14d3:goto L5e14d3;
case 0x5e14d5:c.instructions+=1;goto B5e14d5;
case 0x5e14d7:goto L5e14d7;
case 0x5e14da:c.instructions+=4;goto B5e14da;
case 0x5e14dc:c.instructions+=3;goto B5e14dc;
case 0x5e14df:c.instructions+=2;goto B5e14df;
case 0x5e14e2:c.instructions+=1;goto B5e14e2;
case 0x5e14e4:goto L5e14e4;
case 0x5e14e8:c.instructions+=1;goto B5e14e8;
case 0x5e14ea:goto L5e14ea;
case 0x5e14ee:goto L5e14ee;
case 0x5e14f2:c.instructions+=1;goto B5e14f2;
case 0x5e14f4:goto L5e14f4;
case 0x5e14f7:c.instructions+=3;goto B5e14f7;
case 0x5e14f9:c.instructions+=2;goto B5e14f9;
case 0x5e14fb:c.instructions+=1;goto B5e14fb;
case 0x5e14fd:goto L5e14fd;
case 0x5e14ff:goto L5e14ff;
case 0x5e1501:c.instructions+=2;goto B5e1501;
case 0x5e1503:c.instructions+=1;goto B5e1503;
case 0x5e1508:goto L5e1508;
case 0x5e150a:c.instructions+=2;goto B5e150a;
case 0x5e150c:c.instructions+=1;goto B5e150c;
case 0x5e150e:goto L5e150e;
case 0x5e150f:c.instructions+=2;goto B5e150f;
case 0x5e1511:c.instructions+=1;goto B5e1511;
case 0x5e1516:goto L5e1516;
case 0x5e1518:c.instructions+=1;goto B5e1518;
case 0x5e151a:goto L5e151a;
case 0x5e151d:c.instructions+=4;goto B5e151d;
case 0x5e151f:c.instructions+=3;goto B5e151f;
case 0x5e1522:c.instructions+=2;goto B5e1522;
case 0x5e1525:c.instructions+=1;goto B5e1525;
case 0x5e1527:goto L5e1527;
case 0x5e152b:c.instructions+=1;goto B5e152b;
case 0x5e152d:goto L5e152d;
case 0x5e1531:goto L5e1531;
case 0x5e1535:c.instructions+=1;goto B5e1535;
case 0x5e1537:goto L5e1537;
case 0x5e153a:c.instructions+=3;goto B5e153a;
case 0x5e153c:c.instructions+=2;goto B5e153c;
case 0x5e153e:c.instructions+=1;goto B5e153e;
case 0x5e1540:goto L5e1540;
case 0x5e1542:goto L5e1542;
case 0x5e1544:c.instructions+=2;goto B5e1544;
case 0x5e1546:c.instructions+=1;goto B5e1546;
case 0x5e1548:goto L5e1548;
case 0x5e154d:goto L5e154d;
case 0x5e154f:c.instructions+=1;goto B5e154f;
case 0x5e1551:goto L5e1551;
case 0x5e1552:goto L5e1552;
case 0x5e1554:c.instructions+=1;goto B5e1554;
case 0x5e1556:goto L5e1556;
case 0x5e1557:c.instructions+=4;goto B5e1557;
case 0x5e1558:c.instructions+=3;goto B5e1558;
case 0x5e1559:c.instructions+=2;goto B5e1559;
case 0x5e155a:c.instructions+=1;goto B5e155a;
case 0x5e155d:goto L5e155d;
case 0x5e1560:c.instructions+=1;goto B5e1560;
case 0x5e1562:goto L5e1562;
case 0x5e1564:c.instructions+=2;goto B5e1564;
case 0x5e1566:c.instructions+=1;goto B5e1566;
case 0x5e1568:goto L5e1568;
case 0x5e156a:c.instructions+=5;goto B5e156a;
case 0x5e156b:c.instructions+=4;goto B5e156b;
case 0x5e156c:c.instructions+=3;goto B5e156c;
case 0x5e156d:c.instructions+=2;goto B5e156d;
case 0x5e156e:c.instructions+=1;goto B5e156e;
case 0x5e1571:goto L5e1571;
case 0x5e1574:c.instructions+=12;goto B5e1574;
case 0x5e1577:c.instructions+=11;goto B5e1577;
case 0x5e1579:c.instructions+=10;goto B5e1579;
case 0x5e157c:c.instructions+=9;goto B5e157c;
case 0x5e157e:c.instructions+=8;goto B5e157e;
case 0x5e1581:c.instructions+=7;goto B5e1581;
case 0x5e1583:c.instructions+=6;goto B5e1583;
case 0x5e1588:c.instructions+=5;goto B5e1588;
case 0x5e1589:c.instructions+=4;goto B5e1589;
case 0x5e158f:c.instructions+=3;goto B5e158f;
case 0x5e1590:c.instructions+=2;goto B5e1590;
case 0x5e1592:c.instructions+=1;goto B5e1592;
case 0x5e1597:goto L5e1597;
case 0x5e1599:c.instructions+=1;goto B5e1599;
case 0x5e159e:goto L5e159e;
case 0x5e15a1:c.instructions+=12;goto B5e15a1;
case 0x5e15a3:c.instructions+=11;goto B5e15a3;
case 0x5e15a6:c.instructions+=10;goto B5e15a6;
case 0x5e15a8:c.instructions+=9;goto B5e15a8;
case 0x5e15ab:c.instructions+=8;goto B5e15ab;
case 0x5e15ad:c.instructions+=7;goto B5e15ad;
case 0x5e15b2:c.instructions+=6;goto B5e15b2;
case 0x5e15b3:c.instructions+=5;goto B5e15b3;
case 0x5e15b7:c.instructions+=4;goto B5e15b7;
case 0x5e15b9:c.instructions+=3;goto B5e15b9;
case 0x5e15bf:c.instructions+=2;goto B5e15bf;
case 0x5e15c0:c.instructions+=1;goto B5e15c0;
case 0x5e15c5:goto L5e15c5;
case 0x5e15c7:c.instructions+=1;goto B5e15c7;
case 0x5e15cc:goto L5e15cc;
case 0x5e15cf:c.instructions+=5;goto B5e15cf;
case 0x5e15d3:c.instructions+=4;goto B5e15d3;
case 0x5e15d5:c.instructions+=3;goto B5e15d5;
case 0x5e15d8:c.instructions+=2;goto B5e15d8;
case 0x5e15da:c.instructions+=1;goto B5e15da;
case 0x5e15dc:goto L5e15dc;
case 0x5e15de:goto L5e15de;
case 0x5e15df:c.instructions+=4;goto B5e15df;
case 0x5e15e0:c.instructions+=3;goto B5e15e0;
case 0x5e15e1:c.instructions+=2;goto B5e15e1;
case 0x5e15e2:c.instructions+=1;goto B5e15e2;
case 0x5e15f0:goto L5e15f0;
case 0x5e15f3:c.instructions+=3;goto B5e15f3;
case 0x5e15f8:c.instructions+=2;goto B5e15f8;
case 0x5e15fc:c.instructions+=1;goto B5e15fc;
case 0x5e1602:goto L5e1602;
case 0x5e1606:c.instructions+=6;goto B5e1606;
case 0x5e1608:c.instructions+=5;goto B5e1608;
case 0x5e1609:c.instructions+=4;goto B5e1609;
case 0x5e160a:c.instructions+=3;goto B5e160a;
case 0x5e160b:c.instructions+=2;goto B5e160b;
case 0x5e160c:c.instructions+=1;goto B5e160c;
case 0x5e160e:goto L5e160e;
case 0x5e1615:c.instructions+=1;goto B5e1615;
case 0x5e1617:goto L5e1617;
case 0x5e1619:goto L5e1619;
case 0x5e161c:c.instructions+=4;goto B5e161c;
case 0x5e161f:c.instructions+=3;goto B5e161f;
case 0x5e1622:c.instructions+=2;goto B5e1622;
case 0x5e1626:c.instructions+=1;goto B5e1626;
case 0x5e162c:goto L5e162c;
case 0x5e162f:c.instructions+=7;goto B5e162f;
case 0x5e1632:c.instructions+=6;goto B5e1632;
case 0x5e1634:c.instructions+=5;goto B5e1634;
case 0x5e1637:c.instructions+=4;goto B5e1637;
case 0x5e163c:c.instructions+=3;goto B5e163c;
case 0x5e163e:c.instructions+=2;goto B5e163e;
case 0x5e1642:c.instructions+=1;goto B5e1642;
case 0x5e1644:goto L5e1644;
case 0x5e164b:c.instructions+=1;goto B5e164b;
case 0x5e164d:goto L5e164d;
case 0x5e164f:goto L5e164f;
case 0x5e1653:c.instructions+=4;goto B5e1653;
case 0x5e1656:c.instructions+=3;goto B5e1656;
case 0x5e165d:c.instructions+=2;goto B5e165d;
case 0x5e165f:c.instructions+=1;goto B5e165f;
case 0x5e1665:goto L5e1665;
case 0x5e1669:goto L5e1669;
case 0x5e166c:c.instructions+=5;goto B5e166c;
case 0x5e1672:c.instructions+=4;goto B5e1672;
case 0x5e1674:c.instructions+=3;goto B5e1674;
case 0x5e1677:c.instructions+=2;goto B5e1677;
case 0x5e167a:c.instructions+=1;goto B5e167a;
case 0x5e167c:goto L5e167c;
case 0x5e1681:c.instructions+=5;goto B5e1681;
case 0x5e1688:c.instructions+=4;goto B5e1688;
case 0x5e168b:c.instructions+=3;goto B5e168b;
case 0x5e168e:c.instructions+=2;goto B5e168e;
case 0x5e1690:c.instructions+=1;goto B5e1690;
case 0x5e1692:goto L5e1692;
case 0x5e1697:c.instructions+=2;goto B5e1697;
case 0x5e1699:c.instructions+=1;goto B5e1699;
case 0x5e169f:goto L5e169f;
case 0x5e16a1:goto L5e16a1;
case 0x5e16a5:c.instructions+=3;goto B5e16a5;
case 0x5e16a7:c.instructions+=2;goto B5e16a7;
case 0x5e16ac:c.instructions+=1;goto B5e16ac;
case 0x5e16ae:goto L5e16ae;
case 0x5e16b0:c.instructions+=1;goto B5e16b0;
case 0x5e16b2:goto L5e16b2;
case 0x5e16b7:goto L5e16b7;
case 0x5e16bb:c.instructions+=2;goto B5e16bb;
case 0x5e16c0:c.instructions+=1;goto B5e16c0;
case 0x5e16c2:goto L5e16c2;
case 0x5e16c4:c.instructions+=1;goto B5e16c4;
case 0x5e16c6:goto L5e16c6;
case 0x5e16c7:goto L5e16c7;
case 0x5e16c9:c.instructions+=1;goto B5e16c9;
case 0x5e16cf:goto L5e16cf;
case 0x5e16d0:c.instructions+=2;goto B5e16d0;
case 0x5e16d2:c.instructions+=1;goto B5e16d2;
case 0x5e16d7:goto L5e16d7;
case 0x5e16d9:c.instructions+=2;goto B5e16d9;
case 0x5e16dd:c.instructions+=1;goto B5e16dd;
case 0x5e16e3:goto L5e16e3;
case 0x5e16e6:c.instructions+=6;goto B5e16e6;
case 0x5e16ea:c.instructions+=5;goto B5e16ea;
case 0x5e16ec:c.instructions+=4;goto B5e16ec;
case 0x5e16ef:c.instructions+=3;goto B5e16ef;
case 0x5e16f2:c.instructions+=2;goto B5e16f2;
case 0x5e16f4:c.instructions+=1;goto B5e16f4;
case 0x5e16fa:goto L5e16fa;
case 0x5e16fc:c.instructions+=2;goto B5e16fc;
case 0x5e16ff:c.instructions+=1;goto B5e16ff;
case 0x5e1701:goto L5e1701;
case 0x5e1702:c.instructions+=1;goto B5e1702;
case 0x5e1704:goto L5e1704;
case 0x5e1705:c.instructions+=1;goto B5e1705;
case 0x5e1707:goto L5e1707;
case 0x5e1709:c.instructions+=2;goto B5e1709;
case 0x5e170c:c.instructions+=1;goto B5e170c;
case 0x5e170f:goto L5e170f;
case 0x5e1712:c.instructions+=2;goto B5e1712;
case 0x5e1714:c.instructions+=1;goto B5e1714;
case 0x5e171a:goto L5e171a;
case 0x5e171c:c.instructions+=2;goto B5e171c;
case 0x5e171f:c.instructions+=1;goto B5e171f;
case 0x5e1721:goto L5e1721;
case 0x5e1722:c.instructions+=1;goto B5e1722;
case 0x5e1724:goto L5e1724;
case 0x5e1725:c.instructions+=1;goto B5e1725;
case 0x5e1727:goto L5e1727;
case 0x5e1729:c.instructions+=2;goto B5e1729;
case 0x5e172c:c.instructions+=1;goto B5e172c;
case 0x5e172f:goto L5e172f;
case 0x5e1732:c.instructions+=2;goto B5e1732;
case 0x5e1734:c.instructions+=1;goto B5e1734;
case 0x5e1736:goto L5e1736;
case 0x5e1738:c.instructions+=2;goto B5e1738;
case 0x5e173a:c.instructions+=1;goto B5e173a;
case 0x5e173c:goto L5e173c;
case 0x5e1740:c.instructions+=1;goto B5e1740;
case 0x5e1742:goto L5e1742;
case 0x5e1744:c.instructions+=4;goto B5e1744;
case 0x5e1747:c.instructions+=3;goto B5e1747;
case 0x5e174a:c.instructions+=2;goto B5e174a;
case 0x5e174d:c.instructions+=1;goto B5e174d;
case 0x5e174f:goto L5e174f;
case 0x5e1751:c.instructions+=3;goto B5e1751;
case 0x5e1754:c.instructions+=2;goto B5e1754;
case 0x5e1757:c.instructions+=1;goto B5e1757;
case 0x5e1759:goto L5e1759;
case 0x5e175c:c.instructions+=1;goto B5e175c;
case 0x5e175e:goto L5e175e;
case 0x5e1764:c.instructions+=2;goto B5e1764;
case 0x5e1765:c.instructions+=1;goto B5e1765;
case 0x5e176a:goto L5e176a;
case 0x5e176c:c.instructions+=4;goto B5e176c;
case 0x5e176f:c.instructions+=3;goto B5e176f;
case 0x5e1772:c.instructions+=2;goto B5e1772;
case 0x5e1775:c.instructions+=1;goto B5e1775;
case 0x5e1777:goto L5e1777;
case 0x5e177b:goto L5e177b;
case 0x5e177e:c.instructions+=2;goto B5e177e;
case 0x5e1780:c.instructions+=1;goto B5e1780;
case 0x5e1782:goto L5e1782;
case 0x5e1789:c.instructions+=1;goto B5e1789;
case 0x5e178b:goto L5e178b;
case 0x5e178d:goto L5e178d;
case 0x5e1791:c.instructions+=1;goto B5e1791;
case 0x5e1793:goto L5e1793;
case 0x5e1796:c.instructions+=4;goto B5e1796;
case 0x5e1799:c.instructions+=3;goto B5e1799;
case 0x5e179b:c.instructions+=2;goto B5e179b;
case 0x5e179d:c.instructions+=1;goto B5e179d;
case 0x5e17a3:goto L5e17a3;
case 0x5e17a5:c.instructions+=2;goto B5e17a5;
case 0x5e17a6:c.instructions+=1;goto B5e17a6;
case 0x5e17ab:goto L5e17ab;
case 0x5e17b1:c.instructions+=2;goto B5e17b1;
case 0x5e17b2:c.instructions+=1;goto B5e17b2;
case 0x5e17b7:goto L5e17b7;
case 0x5e17bf:c.instructions+=1;goto B5e17bf;
case 0x5e17c0:goto L5e17c0;
case 0x5e17c4:c.instructions+=4;goto B5e17c4;
case 0x5e17c7:c.instructions+=3;goto B5e17c7;
case 0x5e17c9:c.instructions+=2;goto B5e17c9;
case 0x5e17ce:c.instructions+=1;goto B5e17ce;
case 0x5e17d0:goto L5e17d0;
case 0x5e17d2:c.instructions+=1;goto B5e17d2;
case 0x5e17d4:goto L5e17d4;
case 0x5e17d9:goto L5e17d9;
case 0x5e17dd:c.instructions+=2;goto B5e17dd;
case 0x5e17e2:c.instructions+=1;goto B5e17e2;
case 0x5e17e4:goto L5e17e4;
case 0x5e17e6:c.instructions+=1;goto B5e17e6;
case 0x5e17e8:goto L5e17e8;
case 0x5e17e9:goto L5e17e9;
case 0x5e17ed:c.instructions+=1;goto B5e17ed;
case 0x5e17f3:goto L5e17f3;
case 0x5e17f9:c.instructions+=3;goto B5e17f9;
case 0x5e17fb:c.instructions+=2;goto B5e17fb;
case 0x5e17fd:c.instructions+=1;goto B5e17fd;
case 0x5e1800:goto L5e1800;
case 0x5e1803:c.instructions+=2;goto B5e1803;
case 0x5e1808:c.instructions+=1;goto B5e1808;
case 0x5e180a:goto L5e180a;
case 0x5e180c:c.instructions+=1;goto B5e180c;
case 0x5e180e:goto L5e180e;
case 0x5e1812:c.instructions+=1;goto B5e1812;
case 0x5e1814:goto L5e1814;
case 0x5e1815:goto L5e1815;
case 0x5e1816:c.instructions+=3;goto B5e1816;
case 0x5e1819:c.instructions+=2;goto B5e1819;
case 0x5e181c:c.instructions+=1;goto B5e181c;
case 0x5e181e:goto L5e181e;
case 0x5e1820:goto L5e1820;
case 0x5e1824:c.instructions+=1;goto B5e1824;
case 0x5e182a:goto L5e182a;
case 0x5e182d:c.instructions+=6;goto B5e182d;
case 0x5e1831:c.instructions+=5;goto B5e1831;
case 0x5e1833:c.instructions+=4;goto B5e1833;
case 0x5e1836:c.instructions+=3;goto B5e1836;
case 0x5e1839:c.instructions+=2;goto B5e1839;
case 0x5e183b:c.instructions+=1;goto B5e183b;
case 0x5e1841:goto L5e1841;
case 0x5e1843:c.instructions+=1;goto B5e1843;
case 0x5e1848:goto L5e1848;
case 0x5e184a:c.instructions+=2;goto B5e184a;
case 0x5e184c:c.instructions+=1;goto B5e184c;
case 0x5e1852:goto L5e1852;
case 0x5e1856:c.instructions+=3;goto B5e1856;
case 0x5e1858:c.instructions+=2;goto B5e1858;
case 0x5e185b:c.instructions+=1;goto B5e185b;
case 0x5e185d:goto L5e185d;
case 0x5e185e:c.instructions+=1;goto B5e185e;
case 0x5e1860:goto L5e1860;
case 0x5e1861:c.instructions+=1;goto B5e1861;
case 0x5e1863:goto L5e1863;
case 0x5e1866:c.instructions+=2;goto B5e1866;
case 0x5e1869:c.instructions+=1;goto B5e1869;
case 0x5e186c:goto L5e186c;
case 0x5e186f:c.instructions+=2;goto B5e186f;
case 0x5e1871:c.instructions+=1;goto B5e1871;
case 0x5e1877:goto L5e1877;
case 0x5e1879:c.instructions+=2;goto B5e1879;
case 0x5e187c:c.instructions+=1;goto B5e187c;
case 0x5e187e:goto L5e187e;
case 0x5e187f:c.instructions+=1;goto B5e187f;
case 0x5e1881:goto L5e1881;
case 0x5e1882:c.instructions+=1;goto B5e1882;
case 0x5e1884:goto L5e1884;
case 0x5e1887:c.instructions+=3;goto B5e1887;
case 0x5e188a:c.instructions+=2;goto B5e188a;
case 0x5e188d:c.instructions+=1;goto B5e188d;
case 0x5e188f:goto L5e188f;
case 0x5e1895:c.instructions+=3;goto B5e1895;
case 0x5e1898:c.instructions+=2;goto B5e1898;
case 0x5e189a:c.instructions+=1;goto B5e189a;
case 0x5e189c:goto L5e189c;
case 0x5e189f:c.instructions+=4;goto B5e189f;
case 0x5e18a2:c.instructions+=3;goto B5e18a2;
case 0x5e18a4:c.instructions+=2;goto B5e18a4;
case 0x5e18a6:c.instructions+=1;goto B5e18a6;
case 0x5e18a8:goto L5e18a8;
case 0x5e18ab:c.instructions+=3;goto B5e18ab;
case 0x5e18ad:c.instructions+=2;goto B5e18ad;
case 0x5e18af:c.instructions+=1;goto B5e18af;
case 0x5e18b1:goto L5e18b1;
case 0x5e18b3:c.instructions+=1;goto B5e18b3;
case 0x5e18b5:goto L5e18b5;
case 0x5e18b7:goto L5e18b7;
case 0x5e18ba:c.instructions+=4;goto B5e18ba;
case 0x5e18bd:c.instructions+=3;goto B5e18bd;
case 0x5e18c0:c.instructions+=2;goto B5e18c0;
case 0x5e18c3:c.instructions+=1;goto B5e18c3;
case 0x5e18c5:goto L5e18c5;
case 0x5e18c8:c.instructions+=2;goto B5e18c8;
case 0x5e18ca:c.instructions+=1;goto B5e18ca;
case 0x5e18cc:goto L5e18cc;
case 0x5e18cf:c.instructions+=2;goto B5e18cf;
case 0x5e18d1:c.instructions+=1;goto B5e18d1;
case 0x5e18d3:goto L5e18d3;
case 0x5e18d6:c.instructions+=2;goto B5e18d6;
case 0x5e18d9:c.instructions+=1;goto B5e18d9;
case 0x5e18db:goto L5e18db;
case 0x5e18df:c.instructions+=2;goto B5e18df;
case 0x5e18e1:c.instructions+=1;goto B5e18e1;
case 0x5e18e3:goto L5e18e3;
case 0x5e18ea:c.instructions+=1;goto B5e18ea;
case 0x5e18ec:goto L5e18ec;
case 0x5e18ee:goto L5e18ee;
case 0x5e18f1:c.instructions+=3;goto B5e18f1;
case 0x5e18f4:c.instructions+=2;goto B5e18f4;
case 0x5e18f7:c.instructions+=1;goto B5e18f7;
case 0x5e18f9:goto L5e18f9;
case 0x5e18fa:c.instructions+=2;goto B5e18fa;
case 0x5e18fc:c.instructions+=1;goto B5e18fc;
case 0x5e1901:goto L5e1901;
case 0x5e1903:c.instructions+=4;goto B5e1903;
case 0x5e1905:c.instructions+=3;goto B5e1905;
case 0x5e1907:c.instructions+=2;goto B5e1907;
case 0x5e1908:c.instructions+=1;goto B5e1908;
case 0x5e190a:goto L5e190a;
case 0x5e190f:goto L5e190f;
case 0x5e1911:goto L5e1911;
case 0x5e1916:goto L5e1916;
case 0x5e191a:c.instructions+=5;goto B5e191a;
case 0x5e191b:c.instructions+=4;goto B5e191b;
case 0x5e191c:c.instructions+=3;goto B5e191c;
case 0x5e191d:c.instructions+=2;goto B5e191d;
case 0x5e191f:c.instructions+=1;goto B5e191f;
case 0x5e1924:goto L5e1924;
case 0x5e1928:c.instructions+=5;goto B5e1928;
case 0x5e192c:c.instructions+=4;goto B5e192c;
case 0x5e1932:c.instructions+=3;goto B5e1932;
case 0x5e1933:c.instructions+=2;goto B5e1933;
case 0x5e1937:c.instructions+=1;goto B5e1937;
case 0x5e193c:goto L5e193c;
case 0x5e193f:c.instructions+=9;goto B5e193f;
case 0x5e1944:c.instructions+=8;goto B5e1944;
case 0x5e194b:c.instructions+=7;goto B5e194b;
case 0x5e194f:c.instructions+=6;goto B5e194f;
case 0x5e1951:c.instructions+=5;goto B5e1951;
case 0x5e1957:c.instructions+=4;goto B5e1957;
case 0x5e1959:c.instructions+=3;goto B5e1959;
case 0x5e195b:c.instructions+=2;goto B5e195b;
case 0x5e1960:c.instructions+=1;goto B5e1960;
case 0x5e1962:goto L5e1962;
case 0x5e1964:c.instructions+=9;goto B5e1964;
case 0x5e1966:c.instructions+=8;goto B5e1966;
case 0x5e1969:c.instructions+=7;goto B5e1969;
case 0x5e196b:c.instructions+=6;goto B5e196b;
case 0x5e196e:c.instructions+=5;goto B5e196e;
case 0x5e1970:c.instructions+=4;goto B5e1970;
case 0x5e1974:c.instructions+=3;goto B5e1974;
case 0x5e1977:c.instructions+=2;goto B5e1977;
case 0x5e1979:c.instructions+=1;goto B5e1979;
case 0x5e197b:goto L5e197b;
case 0x5e197e:c.instructions+=2;goto B5e197e;
case 0x5e1985:c.instructions+=1;goto B5e1985;
case 0x5e1987:goto L5e1987;
case 0x5e1989:c.instructions+=6;goto B5e1989;
case 0x5e198b:c.instructions+=5;goto B5e198b;
case 0x5e198e:c.instructions+=4;goto B5e198e;
case 0x5e1990:c.instructions+=3;goto B5e1990;
case 0x5e1993:c.instructions+=2;goto B5e1993;
case 0x5e1995:c.instructions+=1;goto B5e1995;
case 0x5e1997:goto L5e1997;
case 0x5e199a:c.instructions+=1;goto B5e199a;
case 0x5e199e:goto L5e199e;
case 0x5e19a0:c.instructions+=1;goto B5e19a0;
case 0x5e19a2:goto L5e19a2;
case 0x5e19a7:goto L5e19a7;
case 0x5e19a8:c.instructions+=1;goto B5e19a8;
case 0x5e19ad:goto L5e19ad;
case 0x5e19af:c.instructions+=1;goto B5e19af;
case 0x5e19b1:goto L5e19b1;
case 0x5e19b4:c.instructions+=3;goto B5e19b4;
case 0x5e19b7:c.instructions+=2;goto B5e19b7;
case 0x5e19ba:c.instructions+=1;goto B5e19ba;
case 0x5e19bc:goto L5e19bc;
case 0x5e19c0:c.instructions+=4;goto B5e19c0;
case 0x5e19c1:c.instructions+=3;goto B5e19c1;
case 0x5e19c2:c.instructions+=2;goto B5e19c2;
case 0x5e19c4:c.instructions+=1;goto B5e19c4;
case 0x5e19c9:goto L5e19c9;
case 0x5e19cb:goto L5e19cb;
case 0x5e19cd:c.instructions+=3;goto B5e19cd;
case 0x5e19ce:c.instructions+=2;goto B5e19ce;
case 0x5e19d0:c.instructions+=1;goto B5e19d0;
case 0x5e19d5:goto L5e19d5;
case 0x5e19d6:c.instructions+=3;goto B5e19d6;
case 0x5e19d7:c.instructions+=2;goto B5e19d7;
case 0x5e19d8:c.instructions+=1;goto B5e19d8;
case 0x5e19d9:goto L5e19d9;
case 0x5e19dc:c.instructions+=1;goto B5e19dc;
case 0x5e19e0:goto L5e19e0;
case 0x5e19e3:c.instructions+=7;goto B5e19e3;
case 0x5e19e4:c.instructions+=6;goto B5e19e4;
case 0x5e19e5:c.instructions+=5;goto B5e19e5;
case 0x5e19e7:c.instructions+=4;goto B5e19e7;
case 0x5e19e9:c.instructions+=3;goto B5e19e9;
case 0x5e19ea:c.instructions+=2;goto B5e19ea;
case 0x5e19eb:c.instructions+=1;goto B5e19eb;
case 0x5e19ed:goto L5e19ed;
case 0x5e19f0:c.instructions+=3;goto B5e19f0;
case 0x5e19f5:c.instructions+=2;goto B5e19f5;
case 0x5e19fc:c.instructions+=1;goto B5e19fc;
case 0x5e19fe:goto L5e19fe;
case 0x5e1a00:goto L5e1a00;
case 0x5e1a04:c.instructions+=2;goto B5e1a04;
case 0x5e1a06:c.instructions+=1;goto B5e1a06;
case 0x5e1a08:goto L5e1a08;
case 0x5e1a0c:c.instructions+=1;goto B5e1a0c;
case 0x5e1a0e:goto L5e1a0e;
case 0x5e1a12:c.instructions+=1;goto B5e1a12;
case 0x5e1a14:goto L5e1a14;
case 0x5e1a1a:c.instructions+=14;goto B5e1a1a;
case 0x5e1a1e:c.instructions+=13;goto B5e1a1e;
case 0x5e1a20:c.instructions+=12;goto B5e1a20;
case 0x5e1a22:c.instructions+=11;goto B5e1a22;
case 0x5e1a24:c.instructions+=10;goto B5e1a24;
case 0x5e1a29:c.instructions+=9;goto B5e1a29;
case 0x5e1a2a:c.instructions+=8;goto B5e1a2a;
case 0x5e1a2d:c.instructions+=7;goto B5e1a2d;
case 0x5e1a2e:c.instructions+=6;goto B5e1a2e;
case 0x5e1a32:c.instructions+=5;goto B5e1a32;
case 0x5e1a33:c.instructions+=4;goto B5e1a33;
case 0x5e1a37:c.instructions+=3;goto B5e1a37;
case 0x5e1a38:c.instructions+=2;goto B5e1a38;
case 0x5e1a3a:c.instructions+=1;goto B5e1a3a;
case 0x5e1a3f:goto L5e1a3f;
case 0x5e1a42:c.instructions+=1;goto B5e1a42;
case 0x5e1a48:goto L5e1a48;
case 0x5e1a4b:c.instructions+=4;goto B5e1a4b;
case 0x5e1a4e:c.instructions+=3;goto B5e1a4e;
case 0x5e1a51:c.instructions+=2;goto B5e1a51;
case 0x5e1a53:c.instructions+=1;goto B5e1a53;
case 0x5e1a59:goto L5e1a59;
case 0x5e1a5b:c.instructions+=2;goto B5e1a5b;
case 0x5e1a63:c.instructions+=1;goto B5e1a63;
case 0x5e1a65:goto L5e1a65;
case 0x5e1a67:c.instructions+=1;goto B5e1a67;
case 0x5e1a69:goto L5e1a69;
case 0x5e1a6c:c.instructions+=6;goto B5e1a6c;
case 0x5e1a6f:c.instructions+=5;goto B5e1a6f;
case 0x5e1a73:c.instructions+=4;goto B5e1a73;
case 0x5e1a76:c.instructions+=3;goto B5e1a76;
case 0x5e1a7b:c.instructions+=2;goto B5e1a7b;
case 0x5e1a7e:c.instructions+=1;goto B5e1a7e;
case 0x5e1a83:goto L5e1a83;
case 0x5e1a87:goto L5e1a87;
case 0x5e1a8d:c.instructions+=10;goto B5e1a8d;
case 0x5e1a91:c.instructions+=9;goto B5e1a91;
case 0x5e1a97:c.instructions+=8;goto B5e1a97;
case 0x5e1a9b:c.instructions+=7;goto B5e1a9b;
case 0x5e1aa1:c.instructions+=6;goto B5e1aa1;
case 0x5e1aa9:c.instructions+=5;goto B5e1aa9;
case 0x5e1aae:c.instructions+=4;goto B5e1aae;
case 0x5e1ab0:c.instructions+=3;goto B5e1ab0;
case 0x5e1ab2:c.instructions+=2;goto B5e1ab2;
case 0x5e1ab5:c.instructions+=1;goto B5e1ab5;
case 0x5e1abb:goto L5e1abb;
case 0x5e1ac0:goto L5e1ac0;
case 0x5e1ac2:c.instructions+=1;goto B5e1ac2;
case 0x5e1ac8:goto L5e1ac8;
case 0x5e1ace:c.instructions+=2;goto B5e1ace;
case 0x5e1ad3:c.instructions+=1;goto B5e1ad3;
case 0x5e1ad5:goto L5e1ad5;
case 0x5e1ad9:c.instructions+=3;goto B5e1ad9;
case 0x5e1adb:c.instructions+=2;goto B5e1adb;
case 0x5e1ae0:c.instructions+=1;goto B5e1ae0;
case 0x5e1ae2:goto L5e1ae2;
case 0x5e1ae4:c.instructions+=1;goto B5e1ae4;
case 0x5e1ae6:goto L5e1ae6;
case 0x5e1aeb:goto L5e1aeb;
case 0x5e1aef:c.instructions+=2;goto B5e1aef;
case 0x5e1af4:c.instructions+=1;goto B5e1af4;
case 0x5e1af6:goto L5e1af6;
case 0x5e1af8:c.instructions+=1;goto B5e1af8;
case 0x5e1afa:goto L5e1afa;
case 0x5e1afb:goto L5e1afb;
case 0x5e1afd:c.instructions+=1;goto B5e1afd;
case 0x5e1b03:goto L5e1b03;
case 0x5e1b04:c.instructions+=2;goto B5e1b04;
case 0x5e1b06:c.instructions+=1;goto B5e1b06;
case 0x5e1b0b:goto L5e1b0b;
case 0x5e1b0f:c.instructions+=1;goto B5e1b0f;
case 0x5e1b15:goto L5e1b15;
case 0x5e1b19:c.instructions+=2;goto B5e1b19;
case 0x5e1b1c:c.instructions+=1;goto B5e1b1c;
case 0x5e1b1e:goto L5e1b1e;
case 0x5e1b1f:c.instructions+=1;goto B5e1b1f;
case 0x5e1b21:goto L5e1b21;
case 0x5e1b22:c.instructions+=1;goto B5e1b22;
case 0x5e1b24:goto L5e1b24;
case 0x5e1b27:c.instructions+=2;goto B5e1b27;
case 0x5e1b2a:c.instructions+=1;goto B5e1b2a;
case 0x5e1b2d:goto L5e1b2d;
case 0x5e1b30:c.instructions+=2;goto B5e1b30;
case 0x5e1b32:c.instructions+=1;goto B5e1b32;
case 0x5e1b34:goto L5e1b34;
case 0x5e1b38:c.instructions+=2;goto B5e1b38;
case 0x5e1b3a:c.instructions+=1;goto B5e1b3a;
case 0x5e1b3c:goto L5e1b3c;
case 0x5e1b3f:c.instructions+=6;goto B5e1b3f;
case 0x5e1b43:c.instructions+=5;goto B5e1b43;
case 0x5e1b45:c.instructions+=4;goto B5e1b45;
case 0x5e1b48:c.instructions+=3;goto B5e1b48;
case 0x5e1b4b:c.instructions+=2;goto B5e1b4b;
case 0x5e1b4d:c.instructions+=1;goto B5e1b4d;
case 0x5e1b4f:goto L5e1b4f;
case 0x5e1b52:c.instructions+=2;goto B5e1b52;
case 0x5e1b55:c.instructions+=1;goto B5e1b55;
case 0x5e1b57:goto L5e1b57;
case 0x5e1b5b:c.instructions+=1;goto B5e1b5b;
case 0x5e1b5d:goto L5e1b5d;
case 0x5e1b60:c.instructions+=3;goto B5e1b60;
case 0x5e1b63:c.instructions+=2;goto B5e1b63;
case 0x5e1b66:c.instructions+=1;goto B5e1b66;
case 0x5e1b6c:goto L5e1b6c;
case 0x5e1b6f:c.instructions+=3;goto B5e1b6f;
case 0x5e1b72:c.instructions+=2;goto B5e1b72;
case 0x5e1b75:c.instructions+=1;goto B5e1b75;
case 0x5e1b7b:goto L5e1b7b;
case 0x5e1b80:goto L5e1b80;
case 0x5e1b83:c.instructions+=4;goto B5e1b83;
case 0x5e1b86:c.instructions+=3;goto B5e1b86;
case 0x5e1b89:c.instructions+=2;goto B5e1b89;
case 0x5e1b8c:c.instructions+=1;goto B5e1b8c;
case 0x5e1b8e:goto L5e1b8e;
case 0x5e1b91:c.instructions+=3;goto B5e1b91;
case 0x5e1b94:c.instructions+=2;goto B5e1b94;
case 0x5e1b97:c.instructions+=1;goto B5e1b97;
case 0x5e1b99:goto L5e1b99;
case 0x5e1b9c:c.instructions+=1;goto B5e1b9c;
case 0x5e1b9e:goto L5e1b9e;
case 0x5e1b9f:c.instructions+=1;goto B5e1b9f;
case 0x5e1ba4:goto L5e1ba4;
case 0x5e1ba8:goto L5e1ba8;
case 0x5e1bac:c.instructions+=1;goto B5e1bac;
case 0x5e1bae:goto L5e1bae;
case 0x5e1bb3:goto L5e1bb3;
case 0x5e1bb4:c.instructions+=1;goto B5e1bb4;
case 0x5e1bb9:goto L5e1bb9;
case 0x5e1bbd:c.instructions+=2;goto B5e1bbd;
case 0x5e1bbf:c.instructions+=1;goto B5e1bbf;
case 0x5e1bc5:goto L5e1bc5;
case 0x5e1bca:c.instructions+=10;goto B5e1bca;
case 0x5e1bce:c.instructions+=9;goto B5e1bce;
case 0x5e1bd0:c.instructions+=8;goto B5e1bd0;
case 0x5e1bd2:c.instructions+=7;goto B5e1bd2;
case 0x5e1bd3:c.instructions+=6;goto B5e1bd3;
case 0x5e1bd4:c.instructions+=5;goto B5e1bd4;
case 0x5e1bd5:c.instructions+=4;goto B5e1bd5;
case 0x5e1bd9:c.instructions+=3;goto B5e1bd9;
case 0x5e1bda:c.instructions+=2;goto B5e1bda;
case 0x5e1bdc:c.instructions+=1;goto B5e1bdc;
case 0x5e1be1:goto L5e1be1;
case 0x5e1be3:c.instructions+=2;goto B5e1be3;
case 0x5e1be5:c.instructions+=1;goto B5e1be5;
case 0x5e1beb:goto L5e1beb;
case 0x5e1bed:c.instructions+=17;goto B5e1bed;
case 0x5e1bf2:c.instructions+=16;goto B5e1bf2;
case 0x5e1bf4:c.instructions+=15;goto B5e1bf4;
case 0x5e1bf6:c.instructions+=14;goto B5e1bf6;
case 0x5e1bf9:c.instructions+=13;goto B5e1bf9;
case 0x5e1bfc:c.instructions+=12;goto B5e1bfc;
case 0x5e1bfe:c.instructions+=11;goto B5e1bfe;
case 0x5e1c00:c.instructions+=10;goto B5e1c00;
case 0x5e1c02:c.instructions+=9;goto B5e1c02;
case 0x5e1c04:c.instructions+=8;goto B5e1c04;
case 0x5e1c06:c.instructions+=7;goto B5e1c06;
case 0x5e1c08:c.instructions+=6;goto B5e1c08;
case 0x5e1c0a:c.instructions+=5;goto B5e1c0a;
case 0x5e1c0c:c.instructions+=4;goto B5e1c0c;
case 0x5e1c0e:c.instructions+=3;goto B5e1c0e;
case 0x5e1c11:c.instructions+=2;goto B5e1c11;
case 0x5e1c14:c.instructions+=1;goto B5e1c14;
case 0x5e1c16:goto L5e1c16;
case 0x5e1c1c:c.instructions+=6;goto B5e1c1c;
case 0x5e1c1e:c.instructions+=5;goto B5e1c1e;
case 0x5e1c20:c.instructions+=4;goto B5e1c20;
case 0x5e1c22:c.instructions+=3;goto B5e1c22;
case 0x5e1c24:c.instructions+=2;goto B5e1c24;
case 0x5e1c27:c.instructions+=1;goto B5e1c27;
case 0x5e1c29:goto L5e1c29;
case 0x5e1c2f:c.instructions+=1;goto B5e1c2f;
case 0x5e1c31:goto L5e1c31;
case 0x5e1c37:c.instructions+=3;goto B5e1c37;
case 0x5e1c39:c.instructions+=2;goto B5e1c39;
case 0x5e1c3c:c.instructions+=1;goto B5e1c3c;
case 0x5e1c3e:goto L5e1c3e;
case 0x5e1c44:goto L5e1c44;
case 0x5e1c48:c.instructions+=6;goto B5e1c48;
case 0x5e1c4a:c.instructions+=5;goto B5e1c4a;
case 0x5e1c50:c.instructions+=4;goto B5e1c50;
case 0x5e1c52:c.instructions+=3;goto B5e1c52;
case 0x5e1c54:c.instructions+=2;goto B5e1c54;
case 0x5e1c57:c.instructions+=1;goto B5e1c57;
case 0x5e1c59:goto L5e1c59;
case 0x5e1c5d:c.instructions+=5;goto B5e1c5d;
case 0x5e1c5e:c.instructions+=4;goto B5e1c5e;
case 0x5e1c61:c.instructions+=3;goto B5e1c61;
case 0x5e1c65:c.instructions+=2;goto B5e1c65;
case 0x5e1c6a:c.instructions+=1;goto B5e1c6a;
case 0x5e1c6c:goto L5e1c6c;
case 0x5e1c6d:c.instructions+=7;goto B5e1c6d;
case 0x5e1c6f:c.instructions+=6;goto B5e1c6f;
case 0x5e1c70:c.instructions+=5;goto B5e1c70;
case 0x5e1c71:c.instructions+=4;goto B5e1c71;
case 0x5e1c73:c.instructions+=3;goto B5e1c73;
case 0x5e1c74:c.instructions+=2;goto B5e1c74;
case 0x5e1c77:c.instructions+=1;goto B5e1c77;
case 0x5e1c7a:goto L5e1c7a;
case 0x5e1c7f:goto L5e1c7f;
case 0x5e1c85:c.instructions+=4;goto B5e1c85;
case 0x5e1c87:c.instructions+=3;goto B5e1c87;
case 0x5e1c89:c.instructions+=2;goto B5e1c89;
case 0x5e1c8c:c.instructions+=1;goto B5e1c8c;
case 0x5e1c92:goto L5e1c92;
case 0x5e1c94:goto L5e1c94;
case 0x5e1c95:c.instructions+=6;goto B5e1c95;
case 0x5e1c96:c.instructions+=5;goto B5e1c96;
case 0x5e1c97:c.instructions+=4;goto B5e1c97;
case 0x5e1c99:c.instructions+=3;goto B5e1c99;
case 0x5e1c9a:c.instructions+=2;goto B5e1c9a;
case 0x5e1c9d:c.instructions+=1;goto B5e1c9d;
case 0x5e1ca0:goto L5e1ca0;
case 0x5e1ca4:c.instructions+=4;goto B5e1ca4;
case 0x5e1ca6:c.instructions+=3;goto B5e1ca6;
case 0x5e1ca7:c.instructions+=2;goto B5e1ca7;
case 0x5e1ca9:c.instructions+=1;goto B5e1ca9;
case 0x5e1cab:goto L5e1cab;
case 0x5e1cac:c.instructions+=3;goto B5e1cac;
case 0x5e1cad:c.instructions+=2;goto B5e1cad;
case 0x5e1cb2:c.instructions+=1;goto B5e1cb2;
case 0x5e1cb7:goto L5e1cb7;
case 0x5e1cb9:c.instructions+=1;goto B5e1cb9;
case 0x5e1cbb:goto L5e1cbb;
case 0x5e1cc0:c.instructions+=1;goto B5e1cc0;
case 0x5e1cc2:goto L5e1cc2;
case 0x5e1cc5:c.instructions+=2;goto B5e1cc5;
case 0x5e1cc7:c.instructions+=1;goto B5e1cc7;
case 0x5e1cc9:goto L5e1cc9;
case 0x5e1ccb:c.instructions+=2;goto B5e1ccb;
case 0x5e1ccc:c.instructions+=1;goto B5e1ccc;
case 0x5e1ccf:goto L5e1ccf;
case 0x5e1cd1:c.instructions+=1;goto B5e1cd1;
case 0x5e1cd3:goto L5e1cd3;
case 0x5e1cd6:c.instructions+=3;goto B5e1cd6;
case 0x5e1cdb:c.instructions+=2;goto B5e1cdb;
case 0x5e1ce2:c.instructions+=1;goto B5e1ce2;
case 0x5e1ce4:goto L5e1ce4;
case 0x5e1ce6:goto L5e1ce6;
case 0x5e1ce9:c.instructions+=3;goto B5e1ce9;
case 0x5e1cec:c.instructions+=2;goto B5e1cec;
case 0x5e1cef:c.instructions+=1;goto B5e1cef;
case 0x5e1cf1:goto L5e1cf1;
case 0x5e1cf3:c.instructions+=2;goto B5e1cf3;
case 0x5e1cf4:c.instructions+=1;goto B5e1cf4;
case 0x5e1cf7:goto L5e1cf7;
case 0x5e1cfd:c.instructions+=11;goto B5e1cfd;
case 0x5e1cfe:c.instructions+=10;goto B5e1cfe;
case 0x5e1d04:c.instructions+=9;goto B5e1d04;
case 0x5e1d08:c.instructions+=8;goto B5e1d08;
case 0x5e1d09:c.instructions+=7;goto B5e1d09;
case 0x5e1d0a:c.instructions+=6;goto B5e1d0a;
case 0x5e1d12:c.instructions+=5;goto B5e1d12;
case 0x5e1d14:c.instructions+=4;goto B5e1d14;
case 0x5e1d18:c.instructions+=3;goto B5e1d18;
case 0x5e1d1a:c.instructions+=2;goto B5e1d1a;
case 0x5e1d1d:c.instructions+=1;goto B5e1d1d;
case 0x5e1d23:goto L5e1d23;
case 0x5e1d25:c.instructions+=1;goto B5e1d25;
case 0x5e1d2b:goto L5e1d2b;
case 0x5e1d31:c.instructions+=1;goto B5e1d31;
case 0x5e1d33:goto L5e1d33;
case 0x5e1d37:c.instructions+=3;goto B5e1d37;
case 0x5e1d39:c.instructions+=2;goto B5e1d39;
case 0x5e1d3e:c.instructions+=1;goto B5e1d3e;
case 0x5e1d40:goto L5e1d40;
case 0x5e1d42:c.instructions+=1;goto B5e1d42;
case 0x5e1d44:goto L5e1d44;
case 0x5e1d49:goto L5e1d49;
case 0x5e1d4d:c.instructions+=2;goto B5e1d4d;
case 0x5e1d52:c.instructions+=1;goto B5e1d52;
case 0x5e1d54:goto L5e1d54;
case 0x5e1d56:c.instructions+=1;goto B5e1d56;
case 0x5e1d58:goto L5e1d58;
case 0x5e1d59:goto L5e1d59;
case 0x5e1d5b:c.instructions+=1;goto B5e1d5b;
case 0x5e1d61:goto L5e1d61;
case 0x5e1d62:c.instructions+=2;goto B5e1d62;
case 0x5e1d64:c.instructions+=1;goto B5e1d64;
case 0x5e1d69:goto L5e1d69;
case 0x5e1d6d:c.instructions+=1;goto B5e1d6d;
case 0x5e1d6f:goto L5e1d6f;
case 0x5e1d73:c.instructions+=2;goto B5e1d73;
case 0x5e1d76:c.instructions+=1;goto B5e1d76;
case 0x5e1d78:goto L5e1d78;
case 0x5e1d79:c.instructions+=1;goto B5e1d79;
case 0x5e1d7b:goto L5e1d7b;
case 0x5e1d7c:c.instructions+=1;goto B5e1d7c;
case 0x5e1d7e:goto L5e1d7e;
case 0x5e1d81:c.instructions+=2;goto B5e1d81;
case 0x5e1d84:c.instructions+=1;goto B5e1d84;
case 0x5e1d87:goto L5e1d87;
case 0x5e1d8a:c.instructions+=2;goto B5e1d8a;
case 0x5e1d8c:c.instructions+=1;goto B5e1d8c;
case 0x5e1d8e:goto L5e1d8e;
case 0x5e1d91:c.instructions+=5;goto B5e1d91;
case 0x5e1d93:c.instructions+=4;goto B5e1d93;
case 0x5e1d96:c.instructions+=3;goto B5e1d96;
case 0x5e1d99:c.instructions+=2;goto B5e1d99;
case 0x5e1d9b:c.instructions+=1;goto B5e1d9b;
case 0x5e1d9d:goto L5e1d9d;
case 0x5e1da0:c.instructions+=2;goto B5e1da0;
case 0x5e1da3:c.instructions+=1;goto B5e1da3;
case 0x5e1da5:goto L5e1da5;
case 0x5e1da9:c.instructions+=1;goto B5e1da9;
case 0x5e1dab:goto L5e1dab;
case 0x5e1dae:c.instructions+=4;goto B5e1dae;
case 0x5e1db1:c.instructions+=3;goto B5e1db1;
case 0x5e1db4:c.instructions+=2;goto B5e1db4;
case 0x5e1db7:c.instructions+=1;goto B5e1db7;
case 0x5e1db9:goto L5e1db9;
case 0x5e1dbc:c.instructions+=3;goto B5e1dbc;
case 0x5e1dbf:c.instructions+=2;goto B5e1dbf;
case 0x5e1dc2:c.instructions+=1;goto B5e1dc2;
case 0x5e1dc4:goto L5e1dc4;
case 0x5e1dc7:c.instructions+=1;goto B5e1dc7;
case 0x5e1dc9:goto L5e1dc9;
case 0x5e1dca:c.instructions+=1;goto B5e1dca;
case 0x5e1dcf:goto L5e1dcf;
case 0x5e1dd3:goto L5e1dd3;
case 0x5e1dd7:c.instructions+=1;goto B5e1dd7;
case 0x5e1ddd:goto L5e1ddd;
case 0x5e1dde:c.instructions+=1;goto B5e1dde;
case 0x5e1de3:goto L5e1de3;
case 0x5e1de8:c.instructions+=10;goto B5e1de8;
case 0x5e1dec:c.instructions+=9;goto B5e1dec;
case 0x5e1dee:c.instructions+=8;goto B5e1dee;
case 0x5e1df0:c.instructions+=7;goto B5e1df0;
case 0x5e1df1:c.instructions+=6;goto B5e1df1;
case 0x5e1df2:c.instructions+=5;goto B5e1df2;
case 0x5e1df3:c.instructions+=4;goto B5e1df3;
case 0x5e1df7:c.instructions+=3;goto B5e1df7;
case 0x5e1df8:c.instructions+=2;goto B5e1df8;
case 0x5e1dfa:c.instructions+=1;goto B5e1dfa;
case 0x5e1dff:goto L5e1dff;
case 0x5e1e01:c.instructions+=2;goto B5e1e01;
case 0x5e1e03:c.instructions+=1;goto B5e1e03;
case 0x5e1e05:goto L5e1e05;
case 0x5e1e06:c.instructions+=3;goto B5e1e06;
case 0x5e1e07:c.instructions+=2;goto B5e1e07;
case 0x5e1e0c:c.instructions+=1;goto B5e1e0c;
case 0x5e1e11:goto L5e1e11;
case 0x5e1e13:c.instructions+=1;goto B5e1e13;
case 0x5e1e15:goto L5e1e15;
case 0x5e1e1a:c.instructions+=1;goto B5e1e1a;
case 0x5e1e1c:goto L5e1e1c;
case 0x5e1e1f:c.instructions+=2;goto B5e1e1f;
case 0x5e1e21:c.instructions+=1;goto B5e1e21;
case 0x5e1e23:goto L5e1e23;
case 0x5e1e25:c.instructions+=13;goto B5e1e25;
case 0x5e1e27:c.instructions+=12;goto B5e1e27;
case 0x5e1e2a:c.instructions+=11;goto B5e1e2a;
case 0x5e1e2d:c.instructions+=10;goto B5e1e2d;
case 0x5e1e2f:c.instructions+=9;goto B5e1e2f;
case 0x5e1e31:c.instructions+=8;goto B5e1e31;
case 0x5e1e33:c.instructions+=7;goto B5e1e33;
case 0x5e1e35:c.instructions+=6;goto B5e1e35;
case 0x5e1e37:c.instructions+=5;goto B5e1e37;
case 0x5e1e39:c.instructions+=4;goto B5e1e39;
case 0x5e1e3b:c.instructions+=3;goto B5e1e3b;
case 0x5e1e3d:c.instructions+=2;goto B5e1e3d;
case 0x5e1e41:c.instructions+=1;goto B5e1e41;
case 0x5e1e45:goto L5e1e45;
case 0x5e1e49:c.instructions+=5;goto B5e1e49;
case 0x5e1e4b:c.instructions+=4;goto B5e1e4b;
case 0x5e1e51:c.instructions+=3;goto B5e1e51;
case 0x5e1e53:c.instructions+=2;goto B5e1e53;
case 0x5e1e56:c.instructions+=1;goto B5e1e56;
case 0x5e1e58:goto L5e1e58;
case 0x5e1e5c:c.instructions+=1;goto B5e1e5c;
case 0x5e1e61:goto L5e1e61;
case 0x5e1e62:c.instructions+=5;goto B5e1e62;
case 0x5e1e63:c.instructions+=4;goto B5e1e63;
case 0x5e1e64:c.instructions+=3;goto B5e1e64;
case 0x5e1e66:c.instructions+=2;goto B5e1e66;
case 0x5e1e67:c.instructions+=1;goto B5e1e67;
case 0x5e1e6a:goto L5e1e6a;
case 0x5e1e6b:c.instructions+=5;goto B5e1e6b;
case 0x5e1e6c:c.instructions+=4;goto B5e1e6c;
case 0x5e1e6d:c.instructions+=3;goto B5e1e6d;
case 0x5e1e6f:c.instructions+=2;goto B5e1e6f;
case 0x5e1e70:c.instructions+=1;goto B5e1e70;
case 0x5e1e80:goto L5e1e80;
case 0x5e1e83:c.instructions+=8;goto B5e1e83;
case 0x5e1e89:c.instructions+=7;goto B5e1e89;
case 0x5e1e8a:c.instructions+=6;goto B5e1e8a;
case 0x5e1e8c:c.instructions+=5;goto B5e1e8c;
case 0x5e1e8e:c.instructions+=4;goto B5e1e8e;
case 0x5e1e90:c.instructions+=3;goto B5e1e90;
case 0x5e1e94:c.instructions+=2;goto B5e1e94;
case 0x5e1e98:c.instructions+=1;goto B5e1e98;
case 0x5e1e9e:goto L5e1e9e;
case 0x5e1e9f:c.instructions+=9;goto B5e1e9f;
case 0x5e1ea0:c.instructions+=8;goto B5e1ea0;
case 0x5e1ea4:c.instructions+=7;goto B5e1ea4;
case 0x5e1ea5:c.instructions+=6;goto B5e1ea5;
case 0x5e1eaa:c.instructions+=5;goto B5e1eaa;
case 0x5e1eac:c.instructions+=4;goto B5e1eac;
case 0x5e1eae:c.instructions+=3;goto B5e1eae;
case 0x5e1eb2:c.instructions+=2;goto B5e1eb2;
case 0x5e1eb5:c.instructions+=1;goto B5e1eb5;
case 0x5e1ebb:goto L5e1ebb;
case 0x5e1ebd:c.instructions+=2;goto B5e1ebd;
case 0x5e1ec0:c.instructions+=1;goto B5e1ec0;
case 0x5e1ec2:goto L5e1ec2;
case 0x5e1ec3:c.instructions+=1;goto B5e1ec3;
case 0x5e1ec5:goto L5e1ec5;
case 0x5e1ec6:c.instructions+=1;goto B5e1ec6;
case 0x5e1ec8:goto L5e1ec8;
case 0x5e1ecb:c.instructions+=2;goto B5e1ecb;
case 0x5e1ece:c.instructions+=1;goto B5e1ece;
case 0x5e1ed1:goto L5e1ed1;
case 0x5e1ed4:c.instructions+=2;goto B5e1ed4;
case 0x5e1ed6:c.instructions+=1;goto B5e1ed6;
case 0x5e1edc:goto L5e1edc;
case 0x5e1ee0:c.instructions+=3;goto B5e1ee0;
case 0x5e1ee3:c.instructions+=2;goto B5e1ee3;
case 0x5e1ee5:c.instructions+=1;goto B5e1ee5;
case 0x5e1ee7:goto L5e1ee7;
case 0x5e1eee:c.instructions+=1;goto B5e1eee;
case 0x5e1ef0:goto L5e1ef0;
case 0x5e1ef3:c.instructions+=4;goto B5e1ef3;
case 0x5e1ef6:c.instructions+=3;goto B5e1ef6;
case 0x5e1ef8:c.instructions+=2;goto B5e1ef8;
case 0x5e1efa:c.instructions+=1;goto B5e1efa;
case 0x5e1efc:goto L5e1efc;
case 0x5e1eff:c.instructions+=3;goto B5e1eff;
case 0x5e1f01:c.instructions+=2;goto B5e1f01;
case 0x5e1f03:c.instructions+=1;goto B5e1f03;
case 0x5e1f09:goto L5e1f09;
case 0x5e1f0b:c.instructions+=1;goto B5e1f0b;
case 0x5e1f0d:goto L5e1f0d;
case 0x5e1f12:goto L5e1f12;
case 0x5e1f14:goto L5e1f14;
case 0x5e1f18:c.instructions+=9;goto B5e1f18;
case 0x5e1f1b:c.instructions+=8;goto B5e1f1b;
case 0x5e1f1e:c.instructions+=7;goto B5e1f1e;
case 0x5e1f25:c.instructions+=6;goto B5e1f25;
case 0x5e1f29:c.instructions+=5;goto B5e1f29;
case 0x5e1f2c:c.instructions+=4;goto B5e1f2c;
case 0x5e1f2e:c.instructions+=3;goto B5e1f2e;
case 0x5e1f31:c.instructions+=2;goto B5e1f31;
case 0x5e1f34:c.instructions+=1;goto B5e1f34;
case 0x5e1f36:goto L5e1f36;
case 0x5e1f38:c.instructions+=1;goto B5e1f38;
case 0x5e1f3a:goto L5e1f3a;
case 0x5e1f3e:goto L5e1f3e;
case 0x5e1f41:c.instructions+=1;goto B5e1f41;
case 0x5e1f43:goto L5e1f43;
case 0x5e1f45:c.instructions+=1;goto B5e1f45;
case 0x5e1f47:goto L5e1f47;
case 0x5e1f4b:goto L5e1f4b;
case 0x5e1f4e:c.instructions+=2;goto B5e1f4e;
case 0x5e1f50:c.instructions+=1;goto B5e1f50;
case 0x5e1f52:goto L5e1f52;
case 0x5e1f59:c.instructions+=1;goto B5e1f59;
case 0x5e1f5b:goto L5e1f5b;
case 0x5e1f5d:goto L5e1f5d;
case 0x5e1f61:c.instructions+=20;goto B5e1f61;
case 0x5e1f64:c.instructions+=19;goto B5e1f64;
case 0x5e1f67:c.instructions+=18;goto B5e1f67;
case 0x5e1f6e:c.instructions+=17;goto B5e1f6e;
case 0x5e1f70:c.instructions+=16;goto B5e1f70;
case 0x5e1f73:c.instructions+=15;goto B5e1f73;
case 0x5e1f75:c.instructions+=14;goto B5e1f75;
case 0x5e1f77:c.instructions+=13;goto B5e1f77;
case 0x5e1f7a:c.instructions+=12;goto B5e1f7a;
case 0x5e1f7c:c.instructions+=11;goto B5e1f7c;
case 0x5e1f7f:c.instructions+=10;goto B5e1f7f;
case 0x5e1f81:c.instructions+=9;goto B5e1f81;
case 0x5e1f85:c.instructions+=8;goto B5e1f85;
case 0x5e1f87:c.instructions+=7;goto B5e1f87;
case 0x5e1f8a:c.instructions+=6;goto B5e1f8a;
case 0x5e1f8e:c.instructions+=5;goto B5e1f8e;
case 0x5e1f93:c.instructions+=4;goto B5e1f93;
case 0x5e1f98:c.instructions+=3;goto B5e1f98;
case 0x5e1f9d:c.instructions+=2;goto B5e1f9d;
case 0x5e1f9f:c.instructions+=1;goto B5e1f9f;
case 0x5e1fa1:goto L5e1fa1;
case 0x5e1fa2:c.instructions+=1;goto B5e1fa2;
case 0x5e1fa4:goto L5e1fa4;
case 0x5e1fa5:c.instructions+=1;goto B5e1fa5;
case 0x5e1fa7:goto L5e1fa7;
case 0x5e1fa9:goto L5e1fa9;
case 0x5e1fac:c.instructions+=2;goto B5e1fac;
case 0x5e1faf:c.instructions+=1;goto B5e1faf;
case 0x5e1fb5:goto L5e1fb5;
case 0x5e1fbc:c.instructions+=1;goto B5e1fbc;
case 0x5e1fc3:goto L5e1fc3;
case 0x5e1fc6:c.instructions+=3;goto B5e1fc6;
case 0x5e1fc9:c.instructions+=2;goto B5e1fc9;
case 0x5e1fcb:c.instructions+=1;goto B5e1fcb;
case 0x5e1fcd:goto L5e1fcd;
case 0x5e1fd1:c.instructions+=9;goto B5e1fd1;
case 0x5e1fd5:c.instructions+=8;goto B5e1fd5;
case 0x5e1fd9:c.instructions+=7;goto B5e1fd9;
case 0x5e1fda:c.instructions+=6;goto B5e1fda;
case 0x5e1fdb:c.instructions+=5;goto B5e1fdb;
case 0x5e1fdc:c.instructions+=4;goto B5e1fdc;
case 0x5e1fdd:c.instructions+=3;goto B5e1fdd;
case 0x5e1fde:c.instructions+=2;goto B5e1fde;
case 0x5e1fe0:c.instructions+=1;goto B5e1fe0;
case 0x5e1fe5:goto L5e1fe5;
case 0x5e1fe7:c.instructions+=1;goto B5e1fe7;
case 0x5e1fed:goto L5e1fed;
case 0x5e1ff2:c.instructions+=1;goto B5e1ff2;
case 0x5e1ff4:goto L5e1ff4;
case 0x5e1ff8:c.instructions+=3;goto B5e1ff8;
case 0x5e1ffc:c.instructions+=2;goto B5e1ffc;
case 0x5e1ffe:c.instructions+=1;goto B5e1ffe;
default:missing_instruction(c.pc);}
B5e1001:L5e1001:{c.instructions+=1;NFSU2_TR(0x5e1001);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e106e;}}
}
B5e1003:L5e1003:{c.instructions+=10;NFSU2_TR(0x5e1003);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1006:{NFSU2_TR(0x5e1006);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e100b:{NFSU2_TR(0x5e100b);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5e100e:{NFSU2_TR(0x5e100e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1012:{NFSU2_TR(0x5e1012);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e1016:{NFSU2_TR(0x5e1016);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e101c:{NFSU2_TR(0x5e101c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e1020:{NFSU2_TR(0x5e1020);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1022:{NFSU2_TR(0x5e1022);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1025:{NFSU2_TR(0x5e1025);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e106e;}}
}
B5e1027:L5e1027:{c.instructions+=3;NFSU2_TR(0x5e1027);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B5e102a:{NFSU2_TR(0x5e102a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e102c:{NFSU2_TR(0x5e102c);
if(r1(R+518)){{goto L5e1040;}}
}
B5e102e:L5e102e:{c.instructions+=5;NFSU2_TR(0x5e102e);
__builtin_memmove((R+8),gp(0x88ff94),4);
}
B5e1034:{NFSU2_TR(0x5e1034);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1037:{NFSU2_TR(0x5e1037);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B5e103c:{NFSU2_TR(0x5e103c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e103e:{NFSU2_TR(0x5e103e);
if(r1(R+518)){{goto L5e106e;}}
}
B5e1040:L5e1040:{c.instructions+=3;NFSU2_TR(0x5e1040);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1044:{NFSU2_TR(0x5e1044);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e1049:{NFSU2_TR(0x5e1049);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e106e;}}
}
B5e104b:L5e104b:{c.instructions+=5;NFSU2_TR(0x5e104b);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e104f:{NFSU2_TR(0x5e104f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e1050:{NFSU2_TR(0x5e1050);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1053:{NFSU2_TR(0x5e1053);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1057:{NFSU2_TR(0x5e1057);
if(r1(R+518)){{goto L5e105f;}}
}
B5e1059:L5e1059:{c.instructions+=2;NFSU2_TR(0x5e1059);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e105d:{NFSU2_TR(0x5e105d);
{goto L5e1068;}
}
B5e105f:L5e105f:{c.instructions+=2;NFSU2_TR(0x5e105f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1062:{NFSU2_TR(0x5e1062);
if(r1(R+518)){{goto L5e1068;}}
}
B5e1064:L5e1064:{c.instructions+=1;NFSU2_TR(0x5e1064);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e1068:L5e1068:{c.instructions+=2;NFSU2_TR(0x5e1068);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0x20ull))));
}
B5e106b:{NFSU2_TR(0x5e106b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e106e:L5e106e:{c.instructions+=4;NFSU2_TR(0x5e106e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e1075:{NFSU2_TR(0x5e1075);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e1076:{NFSU2_TR(0x5e1076);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1078:{NFSU2_TR(0x5e1078);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e0f50u,5e0);}
}
B5e107e:L5e107e:{c.instructions+=7;NFSU2_TR(0x5e107e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1082:{NFSU2_TR(0x5e1082);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1086:{NFSU2_TR(0x5e1086);
u8 U[8];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e108d:{NFSU2_TR(0x5e108d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e108e:{NFSU2_TR(0x5e108e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e1090:{NFSU2_TR(0x5e1090);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1094:{NFSU2_TR(0x5e1094);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e0e10u,5e0);}
}
B5e109a:L5e109a:{c.instructions+=7;NFSU2_TR(0x5e109a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e109e:{NFSU2_TR(0x5e109e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e10a0:{NFSU2_TR(0x5e10a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e10a4:{NFSU2_TR(0x5e10a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e10a5:{NFSU2_TR(0x5e10a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e10a7:{NFSU2_TR(0x5e10a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e10ab:{NFSU2_TR(0x5e10ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e0df0u,5e0);}
}
B5e10b1:L5e10b1:{c.instructions+=12;NFSU2_TR(0x5e10b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e10b5:{NFSU2_TR(0x5e10b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e10b9:{NFSU2_TR(0x5e10b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e10bd:{NFSU2_TR(0x5e10bd);
__builtin_memmove((R+4),(R+0),4);
}
B5e10bf:{NFSU2_TR(0x5e10bf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5e10c1:{NFSU2_TR(0x5e10c1);
__builtin_memmove((R+8),(R+4),4);
}
B5e10c3:{NFSU2_TR(0x5e10c3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B5e10c5:{NFSU2_TR(0x5e10c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e10cc:{NFSU2_TR(0x5e10cc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e10ce:{NFSU2_TR(0x5e10ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e10d0:{NFSU2_TR(0x5e10d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e10d4:{NFSU2_TR(0x5e10d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e1145;}}
}
B5e10d6:L5e10d6:{c.instructions+=7;NFSU2_TR(0x5e10d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e10d9:{NFSU2_TR(0x5e10d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e10dc:{NFSU2_TR(0x5e10dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e10df:{NFSU2_TR(0x5e10df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e10e3:{NFSU2_TR(0x5e10e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e10e7:{NFSU2_TR(0x5e10e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e10eb:{NFSU2_TR(0x5e10eb);
{goto L5e10f0;}
}
B5e10f0:L5e10f0:{c.instructions+=5;NFSU2_TR(0x5e10f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5e10f4:{NFSU2_TR(0x5e10f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xdfull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5e10f8:{NFSU2_TR(0x5e10f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e10f9:{NFSU2_TR(0x5e10f9);
__builtin_memmove((R+4),(R+20),4);
}
B5e10fb:{NFSU2_TR(0x5e10fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1100ull));
TAIL_STATIC(0x5e0c90u,5e0);
}
B5e1100:L5e1100:{c.instructions+=3;NFSU2_TR(0x5e1100);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1103:{NFSU2_TR(0x5e1103);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1106:{NFSU2_TR(0x5e1106);
if(r1(R+518)){{goto L5e1117;}}
}
B5e1108:L5e1108:{c.instructions+=5;NFSU2_TR(0x5e1108);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e110c:{NFSU2_TR(0x5e110c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e110e:{NFSU2_TR(0x5e110e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5e1111:{NFSU2_TR(0x5e1111);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1115:{NFSU2_TR(0x5e1115);
{goto L5e1138;}
}
B5e1117:L5e1117:{c.instructions+=2;NFSU2_TR(0x5e1117);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e111a:{NFSU2_TR(0x5e111a);
if(r1(R+518)){{goto L5e112b;}}
}
B5e111c:L5e111c:{c.instructions+=5;NFSU2_TR(0x5e111c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1120:{NFSU2_TR(0x5e1120);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e1122:{NFSU2_TR(0x5e1122);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5e1125:{NFSU2_TR(0x5e1125);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1129:{NFSU2_TR(0x5e1129);
{goto L5e1138;}
}
B5e112b:L5e112b:{c.instructions+=4;NFSU2_TR(0x5e112b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e112f:{NFSU2_TR(0x5e112f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e1131:{NFSU2_TR(0x5e1131);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5e1134:{NFSU2_TR(0x5e1134);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1138:L5e1138:{c.instructions+=4;NFSU2_TR(0x5e1138);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e113c:{NFSU2_TR(0x5e113c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e113d:{NFSU2_TR(0x5e113d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e113f:{NFSU2_TR(0x5e113f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e10f0u);}goto L5e10f0;}}
}
B5e1141:L5e1141:{c.instructions+=1;NFSU2_TR(0x5e1141);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e1145:L5e1145:{c.instructions+=12;NFSU2_TR(0x5e1145);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1149:{NFSU2_TR(0x5e1149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e114a:{NFSU2_TR(0x5e114a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1150:{NFSU2_TR(0x5e1150);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e1154:{NFSU2_TR(0x5e1154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1155:{NFSU2_TR(0x5e1155);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e115b:{NFSU2_TR(0x5e115b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1161:{NFSU2_TR(0x5e1161);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1167:{NFSU2_TR(0x5e1167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e1168:{NFSU2_TR(0x5e1168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1169:{NFSU2_TR(0x5e1169);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2c0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2c0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2c0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e116f:{NFSU2_TR(0x5e116f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1180:L5e1180:{c.instructions+=4;NFSU2_TR(0x5e1180);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1181:{NFSU2_TR(0x5e1181);
__builtin_memmove((R+12),gp(0x883d90),4);
}
B5e1187:{NFSU2_TR(0x5e1187);
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
B5e1189:{NFSU2_TR(0x5e1189);
if(r1(R+518)){{goto L5e11f2;}}
}
B5e118b:L5e118b:{c.instructions+=4;NFSU2_TR(0x5e118b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e118c:{NFSU2_TR(0x5e118c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e118e:{NFSU2_TR(0x5e118e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e118f:{NFSU2_TR(0x5e118f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1194ull));
TAIL_STATIC(0x502fd0u,502);
}
B5e1194:L5e1194:{c.instructions+=3;NFSU2_TR(0x5e1194);
__builtin_memmove((R+28),(R+0),4);
}
B5e1196:{NFSU2_TR(0x5e1196);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e1198:{NFSU2_TR(0x5e1198);
if(r1(R+518)){{goto L5e11b3;}}
}
B5e119a:L5e119a:{c.instructions+=1;NFSU2_TR(0x5e119a);
__builtin_memmove((R+12),(R+12),4);
}
B5e11a0:L5e11a0:{c.instructions+=2;NFSU2_TR(0x5e11a0);
__builtin_memmove((R+4),(R+24),4);
}
B5e11a2:{NFSU2_TR(0x5e11a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e11a7ull));
TAIL_STATIC(0x5e0c40u,5e0);
}
B5e11a7:L5e11a7:{c.instructions+=3;NFSU2_TR(0x5e11a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e11a9:{NFSU2_TR(0x5e11a9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e11ab:{NFSU2_TR(0x5e11ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e11a0u);}goto L5e11a0;}}
}
B5e11ad:L5e11ad:{c.instructions+=1;NFSU2_TR(0x5e11ad);
__builtin_memmove((R+12),gp(0x883d90),4);
}
B5e11b3:L5e11b3:{c.instructions+=5;NFSU2_TR(0x5e11b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e11b5:{NFSU2_TR(0x5e11b5);
w4(R+0,u32(0x88ea8cull));
}
B5e11ba:{NFSU2_TR(0x5e11ba);
__builtin_memmove(gp(0x88ea8c),(R+0),4);
}
B5e11bf:{NFSU2_TR(0x5e11bf);
__builtin_memmove(gp(0x88ea90),(R+0),4);
}
B5e11c4:{NFSU2_TR(0x5e11c4);
if(r1(R+518)){{goto L5e11e6;}}
}
B5e11c6:L5e11c6:{c.instructions+=7;NFSU2_TR(0x5e11c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e11c9:{NFSU2_TR(0x5e11c9);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e11ce:{NFSU2_TR(0x5e11ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e11d1:{NFSU2_TR(0x5e11d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e11d2:{NFSU2_TR(0x5e11d2);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e11d7:{NFSU2_TR(0x5e11d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e11d8:{NFSU2_TR(0x5e11d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e11ddull));
TAIL_STATIC(0x75c401u,75c);
}
B5e11dd:L5e11dd:{c.instructions+=2;NFSU2_TR(0x5e11dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e11de:{NFSU2_TR(0x5e11de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e11e3ull));
TAIL_STATIC(0x575630u,575);
}
B5e11e3:L5e11e3:{c.instructions+=1;NFSU2_TR(0x5e11e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e11e6:L5e11e6:{c.instructions+=3;NFSU2_TR(0x5e11e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e11e7:{NFSU2_TR(0x5e11e7);
s4(0x883d90,u32(0x0ull));
}
B5e11f1:{NFSU2_TR(0x5e11f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e11f2:L5e11f2:{c.instructions+=3;NFSU2_TR(0x5e11f2);
__builtin_memmove((R+4),gp(0x883d98),4);
}
B5e11f8:{NFSU2_TR(0x5e11f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e11f9:{NFSU2_TR(0x5e11f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e11feull));
TAIL_STATIC(0x440e40u,440);
}
B5e11fe:L5e11fe:{c.instructions+=4;NFSU2_TR(0x5e11fe);
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
B5e1201:{NFSU2_TR(0x5e1201);
s4(0x883d98,u32(0x0ull));
}
B5e120b:{NFSU2_TR(0x5e120b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e120c:{NFSU2_TR(0x5e120c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1210:L5e1210:{c.instructions+=10;NFSU2_TR(0x5e1210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5e1213:{NFSU2_TR(0x5e1213);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1219:{NFSU2_TR(0x5e1219);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e121d:{NFSU2_TR(0x5e121d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e1221:{NFSU2_TR(0x5e1221);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1225:{NFSU2_TR(0x5e1225);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e122d:{NFSU2_TR(0x5e122d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1231:{NFSU2_TR(0x5e1231);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1233:{NFSU2_TR(0x5e1233);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1236:{NFSU2_TR(0x5e1236);
if(r1(R+514)){{goto L5e14a1;}}
}
B5e123c:L5e123c:{c.instructions+=6;NFSU2_TR(0x5e123c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e123d:{NFSU2_TR(0x5e123d);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5e1243:{NFSU2_TR(0x5e1243);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1244:{NFSU2_TR(0x5e1244);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1245:{NFSU2_TR(0x5e1245);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1246:{NFSU2_TR(0x5e1246);
{goto L5e1250;}
}
B5e1250:L5e1250:{c.instructions+=6;NFSU2_TR(0x5e1250);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1254:{NFSU2_TR(0x5e1254);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1257:{NFSU2_TR(0x5e1257);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e125b:{NFSU2_TR(0x5e125b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e125f:{NFSU2_TR(0x5e125f);
__builtin_memmove((R+24),(R+4),4);
}
B5e1261:{NFSU2_TR(0x5e1261);
if(r1(R+518)){{goto L5e127d;}}
}
B5e1263:L5e1263:{c.instructions+=2;NFSU2_TR(0x5e1263);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1264:{NFSU2_TR(0x5e1264);
if(r1(R+518)){{goto L5e1275;}}
}
B5e1266:L5e1266:{c.instructions+=2;NFSU2_TR(0x5e1266);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1267:{NFSU2_TR(0x5e1267);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e149d;}}
}
B5e126d:L5e126d:{c.instructions+=3;NFSU2_TR(0x5e126d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1270:{NFSU2_TR(0x5e1270);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1273:{NFSU2_TR(0x5e1273);
{goto L5e1283;}
}
B5e1275:L5e1275:{c.instructions+=3;NFSU2_TR(0x5e1275);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1278:{NFSU2_TR(0x5e1278);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e127b:{NFSU2_TR(0x5e127b);
{goto L5e1283;}
}
B5e127d:L5e127d:{c.instructions+=2;NFSU2_TR(0x5e127d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1280:{NFSU2_TR(0x5e1280);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1283:L5e1283:{c.instructions+=3;NFSU2_TR(0x5e1283);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e1286:{NFSU2_TR(0x5e1286);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1288:{NFSU2_TR(0x5e1288);
if(r1(R+518)){{goto L5e149d;}}
}
B5e128e:L5e128e:{c.instructions+=3;NFSU2_TR(0x5e128e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e1296:{NFSU2_TR(0x5e1296);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1299:{NFSU2_TR(0x5e1299);
__builtin_memmove((R+16),(R+16),4);
}
B5e12a0:L5e12a0:{c.instructions+=4;NFSU2_TR(0x5e12a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e12a2:{NFSU2_TR(0x5e12a2);
__builtin_memmove((R+4),(R+20),4);
}
B5e12a4:{NFSU2_TR(0x5e12a4);
w4(R+8,u32(0x2ull));
}
B5e12a9:{NFSU2_TR(0x5e12a9);
__builtin_memmove((R+16),(R+16),4);
}
B5e12b0:L5e12b0:{c.instructions+=3;NFSU2_TR(0x5e12b0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5e12b3:{NFSU2_TR(0x5e12b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e12b8:{NFSU2_TR(0x5e12b8);
if(r1(R+518)){{goto L5e12bf;}}
}
B5e12ba:L5e12ba:{c.instructions+=2;NFSU2_TR(0x5e12ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e12bc:{NFSU2_TR(0x5e12bc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e12bf;}}
}
B5e12be:L5e12be:{c.instructions+=1;NFSU2_TR(0x5e12be);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e12bf:L5e12bf:{c.instructions+=3;NFSU2_TR(0x5e12bf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5e12c2:{NFSU2_TR(0x5e12c2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e12c3:{NFSU2_TR(0x5e12c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e12b0u);}goto L5e12b0;}}
}
B5e12c5:L5e12c5:{c.instructions+=2;NFSU2_TR(0x5e12c5);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e12c9:{NFSU2_TR(0x5e12c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e13b8;}}
}
B5e12cf:L5e12cf:{c.instructions+=3;NFSU2_TR(0x5e12cf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e12d1:{NFSU2_TR(0x5e12d1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e12d3:{NFSU2_TR(0x5e12d3);
__builtin_memmove((R+4),(R+20),4);
}
B5e12d5:L5e12d5:{c.instructions+=3;NFSU2_TR(0x5e12d5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5e12d8:{NFSU2_TR(0x5e12d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e12dd:{NFSU2_TR(0x5e12dd);
if(r1(R+518)){{goto L5e12f0;}}
}
B5e12df:L5e12df:{c.instructions+=2;NFSU2_TR(0x5e12df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e12e1:{NFSU2_TR(0x5e12e1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e12f0;}}
}
B5e12e3:L5e12e3:{c.instructions+=3;NFSU2_TR(0x5e12e3);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e12e7:{NFSU2_TR(0x5e12e7);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5e12ed:{NFSU2_TR(0x5e12ed);
if(r1(R+518)){{goto L5e133a;}}
}
B5e12ef:L5e12ef:{c.instructions+=1;NFSU2_TR(0x5e12ef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e12f0:L5e12f0:{c.instructions+=4;NFSU2_TR(0x5e12f0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e12f1:{NFSU2_TR(0x5e12f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5e12f4:{NFSU2_TR(0x5e12f4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e12f7:{NFSU2_TR(0x5e12f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e12d5u);}goto L5e12d5;}}
}
B5e12f9:L5e12f9:{c.instructions+=1;NFSU2_TR(0x5e12f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e12fb:L5e12fb:{c.instructions+=7;NFSU2_TR(0x5e12fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e12fe:{NFSU2_TR(0x5e12fe);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e1302:{NFSU2_TR(0x5e1302);
__builtin_memmove((R+4),(R+0),4);
}
B5e1304:{NFSU2_TR(0x5e1304);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1307:{NFSU2_TR(0x5e1307);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5e130a:{NFSU2_TR(0x5e130a);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5e130c:{NFSU2_TR(0x5e130c);
if(r1(R+518)){{goto L5e1357;}}
}
B5e130e:L5e130e:{c.instructions+=3;NFSU2_TR(0x5e130e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1312:{NFSU2_TR(0x5e1312);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1315:{NFSU2_TR(0x5e1315);
if(r1(R+518)){{goto L5e134c;}}
}
B5e1317:L5e1317:{c.instructions+=2;NFSU2_TR(0x5e1317);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1318:{NFSU2_TR(0x5e1318);
if(r1(R+518)){{goto L5e1349;}}
}
B5e131a:L5e131a:{c.instructions+=2;NFSU2_TR(0x5e131a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e131b:{NFSU2_TR(0x5e131b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1357;}}
}
B5e131d:L5e131d:{c.instructions+=3;NFSU2_TR(0x5e131d);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e131f:{NFSU2_TR(0x5e131f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1321:{NFSU2_TR(0x5e1321);
if(r1(R+518)){{goto L5e1327;}}
}
B5e1323:L5e1323:{c.instructions+=2;NFSU2_TR(0x5e1323);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1325:{NFSU2_TR(0x5e1325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1357;}}
}
B5e1327:L5e1327:{c.instructions+=5;NFSU2_TR(0x5e1327);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e132a:{NFSU2_TR(0x5e132a);
__builtin_memmove((R+4),(R+0),1);
}
B5e132c:{NFSU2_TR(0x5e132c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e132f:{NFSU2_TR(0x5e132f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1332:{NFSU2_TR(0x5e1332);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1360;}}
}
B5e1334:L5e1334:{c.instructions+=2;NFSU2_TR(0x5e1334);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e1338:{NFSU2_TR(0x5e1338);
{goto L5e1364;}
}
B5e133a:L5e133a:{c.instructions+=5;NFSU2_TR(0x5e133a);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e1340:{NFSU2_TR(0x5e1340);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1343:{NFSU2_TR(0x5e1343);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5e1345:{NFSU2_TR(0x5e1345);
__builtin_memmove((R+28),(R+0),4);
}
B5e1347:{NFSU2_TR(0x5e1347);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e12fbu);}goto L5e12fb;}
}
B5e1349:L5e1349:{c.instructions+=1;NFSU2_TR(0x5e1349);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e134c:L5e134c:{c.instructions+=5;NFSU2_TR(0x5e134c);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e134e:{NFSU2_TR(0x5e134e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1350:{NFSU2_TR(0x5e1350);
__builtin_memmove((R+0),(R+518),1);
}
B5e1353:{NFSU2_TR(0x5e1353);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1355:{NFSU2_TR(0x5e1355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1327u);}goto L5e1327;}}
}
B5e1357:L5e1357:{c.instructions+=2;NFSU2_TR(0x5e1357);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e135b:{NFSU2_TR(0x5e135b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e12a0u);}goto L5e12a0;}
}
B5e1360:L5e1360:{c.instructions+=1;NFSU2_TR(0x5e1360);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e1364:L5e1364:{c.instructions+=2;NFSU2_TR(0x5e1364);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1367:{NFSU2_TR(0x5e1367);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e136f;}}
}
B5e1369:L5e1369:{c.instructions+=2;NFSU2_TR(0x5e1369);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5e136d:{NFSU2_TR(0x5e136d);
{goto L5e1373;}
}
B5e136f:L5e136f:{c.instructions+=1;NFSU2_TR(0x5e136f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5e1373:L5e1373:{c.instructions+=3;NFSU2_TR(0x5e1373);
w4(R+4,u32(s32(s16(r2(R+28)))));
}
B5e1376:{NFSU2_TR(0x5e1376);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e1378:{NFSU2_TR(0x5e1378);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e1383;}}
}
B5e137a:L5e137a:{c.instructions+=2;NFSU2_TR(0x5e137a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e1381:{NFSU2_TR(0x5e1381);
{goto L5e1385;}
}
B5e1383:L5e1383:{c.instructions+=1;NFSU2_TR(0x5e1383);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e1385:L5e1385:{c.instructions+=6;NFSU2_TR(0x5e1385);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e1388:{NFSU2_TR(0x5e1388);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e138b:{NFSU2_TR(0x5e138b);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e138e:{NFSU2_TR(0x5e138e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1390:{NFSU2_TR(0x5e1390);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e1397:{NFSU2_TR(0x5e1397);
if(r1(R+518)){{goto L5e13a8;}}
}
B5e1399:L5e1399:{c.instructions+=5;NFSU2_TR(0x5e1399);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e139d:{NFSU2_TR(0x5e139d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e139f:{NFSU2_TR(0x5e139f);
__builtin_memmove((R+0),(R+518),1);
}
B5e13a2:{NFSU2_TR(0x5e13a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e13a6:{NFSU2_TR(0x5e13a6);
{goto L5e13ac;}
}
B5e13a8:L5e13a8:{c.instructions+=1;NFSU2_TR(0x5e13a8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e13ac:L5e13ac:{c.instructions+=2;NFSU2_TR(0x5e13ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e13b0:{NFSU2_TR(0x5e13b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1455;}}
}
B5e13b6:L5e13b6:{c.instructions+=1;NFSU2_TR(0x5e13b6);
{goto L5e13bc;}
}
B5e13b8:L5e13b8:{c.instructions+=1;NFSU2_TR(0x5e13b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e13bc:L5e13bc:{c.instructions+=2;NFSU2_TR(0x5e13bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e13be:{NFSU2_TR(0x5e13be);
if(r1(R+518)){{goto L5e13d2;}}
}
B5e13c0:L5e13c0:{c.instructions+=4;NFSU2_TR(0x5e13c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e13c3:{NFSU2_TR(0x5e13c3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B5e13c9:{NFSU2_TR(0x5e13c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e13d0:{NFSU2_TR(0x5e13d0);
{goto L5e13d4;}
}
B5e13d2:L5e13d2:{c.instructions+=1;NFSU2_TR(0x5e13d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e13d4:L5e13d4:{c.instructions+=5;NFSU2_TR(0x5e13d4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5e13d6:{NFSU2_TR(0x5e13d6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B5e13dc:{NFSU2_TR(0x5e13dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e13de:{NFSU2_TR(0x5e13de);
w4(R+0,u32(0x92492493ull));
}
B5e13e3:{NFSU2_TR(0x5e13e3);
if(r1(R+518)){{goto L5e140e;}}
}
B5e13e5:L5e13e5:{c.instructions+=10;NFSU2_TR(0x5e13e5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e13e7:{NFSU2_TR(0x5e13e7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e13e9:{NFSU2_TR(0x5e13e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e13ec:{NFSU2_TR(0x5e13ec);
__builtin_memmove((R+0),(R+8),4);
}
B5e13ee:{NFSU2_TR(0x5e13ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e13f1:{NFSU2_TR(0x5e13f1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e13f3:{NFSU2_TR(0x5e13f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e13f7:{NFSU2_TR(0x5e13f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e13fa:{NFSU2_TR(0x5e13fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e13fc:{NFSU2_TR(0x5e13fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1499;}}
}
B5e1402:L5e1402:{c.instructions+=3;NFSU2_TR(0x5e1402);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e1405:{NFSU2_TR(0x5e1405);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e140c:{NFSU2_TR(0x5e140c);
{goto L5e1425;}
}
B5e140e:L5e140e:{c.instructions+=7;NFSU2_TR(0x5e140e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e1410:{NFSU2_TR(0x5e1410);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e1412:{NFSU2_TR(0x5e1412);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1415:{NFSU2_TR(0x5e1415);
__builtin_memmove((R+0),(R+8),4);
}
B5e1417:{NFSU2_TR(0x5e1417);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e141a:{NFSU2_TR(0x5e141a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e141c:{NFSU2_TR(0x5e141c);
if(r1(R+518)){{goto L5e1499;}}
}
B5e141e:L5e141e:{c.instructions+=2;NFSU2_TR(0x5e141e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e1421:{NFSU2_TR(0x5e1421);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e1425:L5e1425:{c.instructions+=2;NFSU2_TR(0x5e1425);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1427:{NFSU2_TR(0x5e1427);
if(r1(R+518)){{goto L5e1499;}}
}
B5e1429:L5e1429:{c.instructions+=3;NFSU2_TR(0x5e1429);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e142d:{NFSU2_TR(0x5e142d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1430:{NFSU2_TR(0x5e1430);
if(r1(R+518)){{goto L5e1448;}}
}
B5e1432:L5e1432:{c.instructions+=2;NFSU2_TR(0x5e1432);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1433:{NFSU2_TR(0x5e1433);
if(r1(R+518)){{goto L5e1440;}}
}
B5e1435:L5e1435:{c.instructions+=2;NFSU2_TR(0x5e1435);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1436:{NFSU2_TR(0x5e1436);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1499;}}
}
B5e1438:L5e1438:{c.instructions+=3;NFSU2_TR(0x5e1438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e143b:{NFSU2_TR(0x5e143b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e143e:{NFSU2_TR(0x5e143e);
{goto L5e144e;}
}
B5e1440:L5e1440:{c.instructions+=3;NFSU2_TR(0x5e1440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1443:{NFSU2_TR(0x5e1443);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1446:{NFSU2_TR(0x5e1446);
{goto L5e144e;}
}
B5e1448:L5e1448:{c.instructions+=2;NFSU2_TR(0x5e1448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e144b:{NFSU2_TR(0x5e144b);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e144e:L5e144e:{c.instructions+=3;NFSU2_TR(0x5e144e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e1451:{NFSU2_TR(0x5e1451);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1453:{NFSU2_TR(0x5e1453);
if(r1(R+518)){{goto L5e1499;}}
}
B5e1455:L5e1455:{c.instructions+=2;NFSU2_TR(0x5e1455);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1457:{NFSU2_TR(0x5e1457);
if(r1(R+518)){{goto L5e1499;}}
}
B5e1459:L5e1459:{c.instructions+=21;NFSU2_TR(0x5e1459);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e145d:{NFSU2_TR(0x5e145d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e145f:{NFSU2_TR(0x5e145f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1463:{NFSU2_TR(0x5e1463);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1465:{NFSU2_TR(0x5e1465);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1468:{NFSU2_TR(0x5e1468);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e146b:{NFSU2_TR(0x5e146b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e146d:{NFSU2_TR(0x5e146d);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5e146f:{NFSU2_TR(0x5e146f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e1471:{NFSU2_TR(0x5e1471);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e1473:{NFSU2_TR(0x5e1473);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5e1475:{NFSU2_TR(0x5e1475);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e1477:{NFSU2_TR(0x5e1477);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e1479:{NFSU2_TR(0x5e1479);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5e147b:{NFSU2_TR(0x5e147b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e147f:{NFSU2_TR(0x5e147f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e1483:{NFSU2_TR(0x5e1483);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1487:{NFSU2_TR(0x5e1487);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e148b:{NFSU2_TR(0x5e148b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e148d:{NFSU2_TR(0x5e148d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1490:{NFSU2_TR(0x5e1490);
if(r1(R+514)){{goto L5e1499;}}
}
B5e1492:L5e1492:{c.instructions+=2;NFSU2_TR(0x5e1492);
__builtin_memmove((R+4),(R+24),4);
}
B5e1494:{NFSU2_TR(0x5e1494);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1250u);}goto L5e1250;}
}
B5e1499:L5e1499:{c.instructions+=1;NFSU2_TR(0x5e1499);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e149d:L5e149d:{c.instructions+=4;NFSU2_TR(0x5e149d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e149e:{NFSU2_TR(0x5e149e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e149f:{NFSU2_TR(0x5e149f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e14a0:{NFSU2_TR(0x5e14a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e14a1:L5e14a1:{c.instructions+=3;NFSU2_TR(0x5e14a1);
__builtin_memmove((R+0),(R+4),4);
}
B5e14a3:{NFSU2_TR(0x5e14a3);
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
B5e14a6:{NFSU2_TR(0x5e14a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e14b0:L5e14b0:{c.instructions+=7;NFSU2_TR(0x5e14b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e14b1:{NFSU2_TR(0x5e14b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e14b2:{NFSU2_TR(0x5e14b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e14b3:{NFSU2_TR(0x5e14b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e14b4:{NFSU2_TR(0x5e14b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e14b6:{NFSU2_TR(0x5e14b6);
__builtin_memmove((R+28),(R+4),4);
}
B5e14b8:{NFSU2_TR(0x5e14b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e14bdull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5e14bd:L5e14bd:{c.instructions+=5;NFSU2_TR(0x5e14bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e14c1:{NFSU2_TR(0x5e14c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e14c5:{NFSU2_TR(0x5e14c5);
__builtin_memmove((R+24),(R+0),4);
}
B5e14c7:{NFSU2_TR(0x5e14c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e14c9:{NFSU2_TR(0x5e14c9);
if(r1(R+518)){{goto L5e14ff;}}
}
B5e14cb:L5e14cb:{c.instructions+=3;NFSU2_TR(0x5e14cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e14cc:{NFSU2_TR(0x5e14cc);
__builtin_memmove((R+4),(R+24),4);
}
B5e14ce:{NFSU2_TR(0x5e14ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e14d3ull));
TAIL_STATIC(0x5dcb90u,5dc);
}
B5e14d3:L5e14d3:{c.instructions+=2;NFSU2_TR(0x5e14d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e14d5:{NFSU2_TR(0x5e14d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e14fd;}}
}
B5e14d7:L5e14d7:{c.instructions+=5;NFSU2_TR(0x5e14d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e14da:{NFSU2_TR(0x5e14da);
__builtin_memmove((R+4),(R+0),1);
}
B5e14dc:{NFSU2_TR(0x5e14dc);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e14df:{NFSU2_TR(0x5e14df);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e14e2:{NFSU2_TR(0x5e14e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e14ea;}}
}
B5e14e4:L5e14e4:{c.instructions+=2;NFSU2_TR(0x5e14e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e14e8:{NFSU2_TR(0x5e14e8);
{goto L5e14ee;}
}
B5e14ea:L5e14ea:{c.instructions+=1;NFSU2_TR(0x5e14ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e14ee:L5e14ee:{c.instructions+=2;NFSU2_TR(0x5e14ee);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e14f2:{NFSU2_TR(0x5e14f2);
if(r1(R+518)){{goto L5e14fd;}}
}
B5e14f4:L5e14f4:{c.instructions+=4;NFSU2_TR(0x5e14f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e14f7:{NFSU2_TR(0x5e14f7);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5e14f9:{NFSU2_TR(0x5e14f9);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+12))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5e14fb:{NFSU2_TR(0x5e14fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e14ff;}}
}
B5e14fd:L5e14fd:{c.instructions+=1;NFSU2_TR(0x5e14fd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e14ff:L5e14ff:{c.instructions+=3;NFSU2_TR(0x5e14ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1501:{NFSU2_TR(0x5e1501);
__builtin_memmove((R+4),(R+28),4);
}
B5e1503:{NFSU2_TR(0x5e1503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1508ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5e1508:L5e1508:{c.instructions+=3;NFSU2_TR(0x5e1508);
__builtin_memmove((R+28),(R+0),4);
}
B5e150a:{NFSU2_TR(0x5e150a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e150c:{NFSU2_TR(0x5e150c);
if(r1(R+518)){{goto L5e1542;}}
}
B5e150e:L5e150e:{c.instructions+=3;NFSU2_TR(0x5e150e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e150f:{NFSU2_TR(0x5e150f);
__builtin_memmove((R+4),(R+28),4);
}
B5e1511:{NFSU2_TR(0x5e1511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1516ull));
TAIL_STATIC(0x5dcb90u,5dc);
}
B5e1516:L5e1516:{c.instructions+=2;NFSU2_TR(0x5e1516);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1518:{NFSU2_TR(0x5e1518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1540;}}
}
B5e151a:L5e151a:{c.instructions+=5;NFSU2_TR(0x5e151a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e151d:{NFSU2_TR(0x5e151d);
__builtin_memmove((R+8),(R+0),1);
}
B5e151f:{NFSU2_TR(0x5e151f);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e1522:{NFSU2_TR(0x5e1522);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1525:{NFSU2_TR(0x5e1525);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e152d;}}
}
B5e1527:L5e1527:{c.instructions+=2;NFSU2_TR(0x5e1527);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e152b:{NFSU2_TR(0x5e152b);
{goto L5e1531;}
}
B5e152d:L5e152d:{c.instructions+=1;NFSU2_TR(0x5e152d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e1531:L5e1531:{c.instructions+=2;NFSU2_TR(0x5e1531);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e1535:{NFSU2_TR(0x5e1535);
if(r1(R+518)){{goto L5e1540;}}
}
B5e1537:L5e1537:{c.instructions+=4;NFSU2_TR(0x5e1537);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e153a:{NFSU2_TR(0x5e153a);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5e153c:{NFSU2_TR(0x5e153c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+12))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5e153e:{NFSU2_TR(0x5e153e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1542;}}
}
B5e1540:L5e1540:{c.instructions+=1;NFSU2_TR(0x5e1540);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e1542:L5e1542:{c.instructions+=3;NFSU2_TR(0x5e1542);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e1544:{NFSU2_TR(0x5e1544);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1546:{NFSU2_TR(0x5e1546);
if(r1(R+518)){{goto L5e154d;}}
}
B5e1548:L5e1548:{c.instructions+=1;NFSU2_TR(0x5e1548);
w4(R+0,u32(0x1ull));
}
B5e154d:L5e154d:{c.instructions+=2;NFSU2_TR(0x5e154d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e154f:{NFSU2_TR(0x5e154f);
if(r1(R+518)){{goto L5e1552;}}
}
B5e1551:L5e1551:{c.instructions+=1;NFSU2_TR(0x5e1551);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e1552:L5e1552:{c.instructions+=2;NFSU2_TR(0x5e1552);
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
B5e1554:{NFSU2_TR(0x5e1554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e155d;}}
}
B5e1556:L5e1556:{c.instructions+=5;NFSU2_TR(0x5e1556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e1557:{NFSU2_TR(0x5e1557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1558:{NFSU2_TR(0x5e1558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1559:{NFSU2_TR(0x5e1559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e155a:{NFSU2_TR(0x5e155a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e155d:L5e155d:{c.instructions+=2;NFSU2_TR(0x5e155d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e1560:{NFSU2_TR(0x5e1560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1571;}}
}
B5e1562:L5e1562:{c.instructions+=3;NFSU2_TR(0x5e1562);
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
B5e1564:{NFSU2_TR(0x5e1564);
__builtin_memmove((R+0),(R+24),4);
}
B5e1566:{NFSU2_TR(0x5e1566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e15de;}}
}
B5e1568:L5e1568:{c.instructions+=6;NFSU2_TR(0x5e1568);
__builtin_memmove((R+0),(R+28),4);
}
B5e156a:{NFSU2_TR(0x5e156a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e156b:{NFSU2_TR(0x5e156b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e156c:{NFSU2_TR(0x5e156c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e156d:{NFSU2_TR(0x5e156d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e156e:{NFSU2_TR(0x5e156e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1571:L5e1571:{c.instructions+=13;NFSU2_TR(0x5e1571);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1574:{NFSU2_TR(0x5e1574);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e1577:{NFSU2_TR(0x5e1577);
__builtin_memmove((R+4),(R+0),4);
}
B5e1579:{NFSU2_TR(0x5e1579);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e157c:{NFSU2_TR(0x5e157c);
w1(R+4,u8(~u32(r1(R+4))));
}
B5e157e:{NFSU2_TR(0x5e157e);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1581:{NFSU2_TR(0x5e1581);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+0))));
}
B5e1583:{NFSU2_TR(0x5e1583);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1588:{NFSU2_TR(0x5e1588);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1589:{NFSU2_TR(0x5e1589);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff01ull))));
}
B5e158f:{NFSU2_TR(0x5e158f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1590:{NFSU2_TR(0x5e1590);
__builtin_memmove((R+4),(R+24),4);
}
B5e1592:{NFSU2_TR(0x5e1592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1597ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5e1597:L5e1597:{c.instructions+=2;NFSU2_TR(0x5e1597);
__builtin_memmove((R+4),(R+0),4);
}
B5e1599:{NFSU2_TR(0x5e1599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e159eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1210u);}goto L5e1210;}
}
B5e159e:L5e159e:{c.instructions+=13;NFSU2_TR(0x5e159e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e15a1:{NFSU2_TR(0x5e15a1);
__builtin_memmove((R+8),(R+12),4);
}
B5e15a3:{NFSU2_TR(0x5e15a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e15a6:{NFSU2_TR(0x5e15a6);
w1(R+8,u8(~u32(r1(R+8))));
}
B5e15a8:{NFSU2_TR(0x5e15a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e15ab:{NFSU2_TR(0x5e15ab);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+12))));
}
B5e15ad:{NFSU2_TR(0x5e15ad);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e15b2:{NFSU2_TR(0x5e15b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e15b3:{NFSU2_TR(0x5e15b3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e15b7:{NFSU2_TR(0x5e15b7);
__builtin_memmove((R+4),(R+28),4);
}
B5e15b9:{NFSU2_TR(0x5e15b9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff01ull))));
}
B5e15bf:{NFSU2_TR(0x5e15bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e15c0:{NFSU2_TR(0x5e15c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e15c5ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5e15c5:L5e15c5:{c.instructions+=2;NFSU2_TR(0x5e15c5);
__builtin_memmove((R+4),(R+0),4);
}
B5e15c7:{NFSU2_TR(0x5e15c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e15ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1210u);}goto L5e1210;}
}
B5e15cc:L5e15cc:{c.instructions+=6;NFSU2_TR(0x5e15cc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e15cf:{NFSU2_TR(0x5e15cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e15d3:{NFSU2_TR(0x5e15d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e15d5:{NFSU2_TR(0x5e15d5);
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
B5e15d8:{NFSU2_TR(0x5e15d8);
__builtin_memmove((R+0),(R+24),4);
}
B5e15da:{NFSU2_TR(0x5e15da);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e15de;}}
}
B5e15dc:L5e15dc:{c.instructions+=1;NFSU2_TR(0x5e15dc);
__builtin_memmove((R+0),(R+28),4);
}
B5e15de:L5e15de:{c.instructions+=5;NFSU2_TR(0x5e15de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e15df:{NFSU2_TR(0x5e15df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e15e0:{NFSU2_TR(0x5e15e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e15e1:{NFSU2_TR(0x5e15e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e15e2:{NFSU2_TR(0x5e15e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e15f0:L5e15f0:{c.instructions+=4;NFSU2_TR(0x5e15f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5e15f3:{NFSU2_TR(0x5e15f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x64ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e15f8:{NFSU2_TR(0x5e15f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e15fc:{NFSU2_TR(0x5e15fc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e19d9;}}
}
B5e1602:L5e1602:{c.instructions+=7;NFSU2_TR(0x5e1602);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e1606:{NFSU2_TR(0x5e1606);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e1608:{NFSU2_TR(0x5e1608);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1609:{NFSU2_TR(0x5e1609);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e160a:{NFSU2_TR(0x5e160a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e160b:{NFSU2_TR(0x5e160b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e160c:{NFSU2_TR(0x5e160c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e1617;}}
}
B5e160e:L5e160e:{c.instructions+=2;NFSU2_TR(0x5e160e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e1615:{NFSU2_TR(0x5e1615);
{goto L5e1619;}
}
B5e1617:L5e1617:{c.instructions+=1;NFSU2_TR(0x5e1617);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e1619:L5e1619:{c.instructions+=5;NFSU2_TR(0x5e1619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e161c:{NFSU2_TR(0x5e161c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e161f:{NFSU2_TR(0x5e161f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1622:{NFSU2_TR(0x5e1622);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1626:{NFSU2_TR(0x5e1626);
if(r1(R+518)){{goto L5e19d5;}}
}
B5e162c:L5e162c:{c.instructions+=8;NFSU2_TR(0x5e162c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e162f:{NFSU2_TR(0x5e162f);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1632:{NFSU2_TR(0x5e1632);
w1(R+8,u8(~u32(r1(R+8))));
}
B5e1634:{NFSU2_TR(0x5e1634);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B5e1637:{NFSU2_TR(0x5e1637);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e163c:{NFSU2_TR(0x5e163c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e163e:{NFSU2_TR(0x5e163e);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1642:{NFSU2_TR(0x5e1642);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e164d;}}
}
B5e1644:L5e1644:{c.instructions+=2;NFSU2_TR(0x5e1644);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e164b:{NFSU2_TR(0x5e164b);
{goto L5e164f;}
}
B5e164d:L5e164d:{c.instructions+=1;NFSU2_TR(0x5e164d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e164f:L5e164f:{c.instructions+=5;NFSU2_TR(0x5e164f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e1653:{NFSU2_TR(0x5e1653);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5e1656:{NFSU2_TR(0x5e1656);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5e165d:{NFSU2_TR(0x5e165d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e165f:{NFSU2_TR(0x5e165f);
if(r1(R+518)){{goto L5e19d5;}}
}
B5e1665:L5e1665:{c.instructions+=1;NFSU2_TR(0x5e1665);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e1669:L5e1669:{c.instructions+=6;NFSU2_TR(0x5e1669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e166c:{NFSU2_TR(0x5e166c);
__builtin_memmove((R+24),gp(0x883db4),4);
}
B5e1672:{NFSU2_TR(0x5e1672);
__builtin_memmove((R+8),(R+0),4);
}
B5e1674:{NFSU2_TR(0x5e1674);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1677:{NFSU2_TR(0x5e1677);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e167a:{NFSU2_TR(0x5e167a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e169f;}}
}
B5e167c:L5e167c:{c.instructions+=6;NFSU2_TR(0x5e167c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e1681:{NFSU2_TR(0x5e1681);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e1688:{NFSU2_TR(0x5e1688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e168b:{NFSU2_TR(0x5e168b);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e168e:{NFSU2_TR(0x5e168e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1690:{NFSU2_TR(0x5e1690);
if(r1(R+518)){{goto L5e169f;}}
}
B5e1692:L5e1692:{c.instructions+=3;NFSU2_TR(0x5e1692);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5e1697:{NFSU2_TR(0x5e1697);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1699:{NFSU2_TR(0x5e1699);
if(r1(R+518)){{goto L5e19d5;}}
}
B5e169f:L5e169f:{c.instructions+=1;NFSU2_TR(0x5e169f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e16a1:L5e16a1:{c.instructions+=4;NFSU2_TR(0x5e16a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e16a5:{NFSU2_TR(0x5e16a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e16a7:{NFSU2_TR(0x5e16a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e16ac:{NFSU2_TR(0x5e16ac);
if(r1(R+518)){{goto L5e16b7;}}
}
B5e16ae:L5e16ae:{c.instructions+=2;NFSU2_TR(0x5e16ae);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e16b0:{NFSU2_TR(0x5e16b0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e16b7;}}
}
B5e16b2:L5e16b2:{c.instructions+=1;NFSU2_TR(0x5e16b2);
w4(R+4,u32(0x1ull));
}
B5e16b7:L5e16b7:{c.instructions+=3;NFSU2_TR(0x5e16b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e16bb:{NFSU2_TR(0x5e16bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e16c0:{NFSU2_TR(0x5e16c0);
if(r1(R+518)){{goto L5e16c7;}}
}
B5e16c2:L5e16c2:{c.instructions+=2;NFSU2_TR(0x5e16c2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e16c4:{NFSU2_TR(0x5e16c4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e16c7;}}
}
B5e16c6:L5e16c6:{c.instructions+=1;NFSU2_TR(0x5e16c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e16c7:L5e16c7:{c.instructions+=2;NFSU2_TR(0x5e16c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e16c9:{NFSU2_TR(0x5e16c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e17b7;}}
}
B5e16cf:L5e16cf:{c.instructions+=3;NFSU2_TR(0x5e16cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e16d0:{NFSU2_TR(0x5e16d0);
__builtin_memmove((R+4),(R+20),4);
}
B5e16d2:{NFSU2_TR(0x5e16d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e16d7ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5e16d7:L5e16d7:{c.instructions+=3;NFSU2_TR(0x5e16d7);
__builtin_memmove((R+24),(R+0),4);
}
B5e16d9:{NFSU2_TR(0x5e16d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e16dd:{NFSU2_TR(0x5e16dd);
if(r1(R+518)){{goto L5e17ab;}}
}
B5e16e3:L5e16e3:{c.instructions+=7;NFSU2_TR(0x5e16e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e16e6:{NFSU2_TR(0x5e16e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e16ea:{NFSU2_TR(0x5e16ea);
__builtin_memmove((R+4),(R+0),4);
}
B5e16ec:{NFSU2_TR(0x5e16ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e16ef:{NFSU2_TR(0x5e16ef);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5e16f2:{NFSU2_TR(0x5e16f2);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5e16f4:{NFSU2_TR(0x5e16f4);
if(r1(R+518)){{goto L5e17ab;}}
}
B5e16fa:L5e16fa:{c.instructions+=3;NFSU2_TR(0x5e16fa);
__builtin_memmove((R+4),(R+12),4);
}
B5e16fc:{NFSU2_TR(0x5e16fc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e16ff:{NFSU2_TR(0x5e16ff);
if(r1(R+518)){{goto L5e174f;}}
}
B5e1701:L5e1701:{c.instructions+=2;NFSU2_TR(0x5e1701);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1702:{NFSU2_TR(0x5e1702);
if(r1(R+518)){{goto L5e1742;}}
}
B5e1704:L5e1704:{c.instructions+=2;NFSU2_TR(0x5e1704);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1705:{NFSU2_TR(0x5e1705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e171a;}}
}
B5e1707:L5e1707:{c.instructions+=3;NFSU2_TR(0x5e1707);
__builtin_memmove((R+8),(R+0),1);
}
B5e1709:{NFSU2_TR(0x5e1709);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e170c:{NFSU2_TR(0x5e170c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e170f:L5e170f:{c.instructions+=3;NFSU2_TR(0x5e170f);
__builtin_memmove((R+4),(R+518),1);
}
B5e1712:{NFSU2_TR(0x5e1712);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1714:{NFSU2_TR(0x5e1714);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e17ab;}}
}
B5e171a:L5e171a:{c.instructions+=3;NFSU2_TR(0x5e171a);
__builtin_memmove((R+4),(R+12),4);
}
B5e171c:{NFSU2_TR(0x5e171c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e171f:{NFSU2_TR(0x5e171f);
if(r1(R+518)){{goto L5e1727;}}
}
B5e1721:L5e1721:{c.instructions+=2;NFSU2_TR(0x5e1721);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1722:{NFSU2_TR(0x5e1722);
if(r1(R+518)){{goto L5e176a;}}
}
B5e1724:L5e1724:{c.instructions+=2;NFSU2_TR(0x5e1724);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1725:{NFSU2_TR(0x5e1725);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1736;}}
}
B5e1727:L5e1727:{c.instructions+=3;NFSU2_TR(0x5e1727);
__builtin_memmove((R+8),(R+0),1);
}
B5e1729:{NFSU2_TR(0x5e1729);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e172c:{NFSU2_TR(0x5e172c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e172f:L5e172f:{c.instructions+=3;NFSU2_TR(0x5e172f);
__builtin_memmove((R+4),(R+518),1);
}
B5e1732:{NFSU2_TR(0x5e1732);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1734:{NFSU2_TR(0x5e1734);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e17ab;}}
}
B5e1736:L5e1736:{c.instructions+=3;NFSU2_TR(0x5e1736);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e1738:{NFSU2_TR(0x5e1738);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e173a:{NFSU2_TR(0x5e173a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1777;}}
}
B5e173c:L5e173c:{c.instructions+=2;NFSU2_TR(0x5e173c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e1740:{NFSU2_TR(0x5e1740);
{goto L5e177b;}
}
B5e1742:L5e1742:{c.instructions+=5;NFSU2_TR(0x5e1742);
__builtin_memmove((R+4),(R+0),4);
}
B5e1744:{NFSU2_TR(0x5e1744);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1747:{NFSU2_TR(0x5e1747);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e174a:{NFSU2_TR(0x5e174a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e174d:{NFSU2_TR(0x5e174d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e170fu);}goto L5e170f;}
}
B5e174f:L5e174f:{c.instructions+=4;NFSU2_TR(0x5e174f);
__builtin_memmove((R+4),(R+0),1);
}
B5e1751:{NFSU2_TR(0x5e1751);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1754:{NFSU2_TR(0x5e1754);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1757:{NFSU2_TR(0x5e1757);
if(r1(R+518)){{goto L5e17ab;}}
}
B5e1759:L5e1759:{c.instructions+=2;NFSU2_TR(0x5e1759);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e175c:{NFSU2_TR(0x5e175c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e171au);}goto L5e171a;}}
}
B5e175e:L5e175e:{c.instructions+=3;NFSU2_TR(0x5e175e);
__builtin_memmove((R+24),gp(0x883db4),4);
}
B5e1764:{NFSU2_TR(0x5e1764);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e1765:{NFSU2_TR(0x5e1765);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e16a1u);}goto L5e16a1;}
}
B5e176a:L5e176a:{c.instructions+=5;NFSU2_TR(0x5e176a);
__builtin_memmove((R+4),(R+0),4);
}
B5e176c:{NFSU2_TR(0x5e176c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e176f:{NFSU2_TR(0x5e176f);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1772:{NFSU2_TR(0x5e1772);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1775:{NFSU2_TR(0x5e1775);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e172fu);}goto L5e172f;}
}
B5e1777:L5e1777:{c.instructions+=1;NFSU2_TR(0x5e1777);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e177b:L5e177b:{c.instructions+=3;NFSU2_TR(0x5e177b);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e177e:{NFSU2_TR(0x5e177e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e1780:{NFSU2_TR(0x5e1780);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e178b;}}
}
B5e1782:L5e1782:{c.instructions+=2;NFSU2_TR(0x5e1782);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e1789:{NFSU2_TR(0x5e1789);
{goto L5e178d;}
}
B5e178b:L5e178b:{c.instructions+=1;NFSU2_TR(0x5e178b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e178d:L5e178d:{c.instructions+=2;NFSU2_TR(0x5e178d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e1791:{NFSU2_TR(0x5e1791);
if(r1(R+518)){{goto L5e17ab;}}
}
B5e1793:L5e1793:{c.instructions+=5;NFSU2_TR(0x5e1793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1796:{NFSU2_TR(0x5e1796);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1799:{NFSU2_TR(0x5e1799);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e179b:{NFSU2_TR(0x5e179b);
__builtin_memmove((R+4),(R+24),4);
}
B5e179d:{NFSU2_TR(0x5e179d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e19a7;}}
}
B5e17a3:L5e17a3:{c.instructions+=3;NFSU2_TR(0x5e17a3);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e17a5:{NFSU2_TR(0x5e17a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e17a6:{NFSU2_TR(0x5e17a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e17abull));
TAIL_STATIC(0x5d8720u,5d8);
}
B5e17ab:L5e17ab:{c.instructions+=3;NFSU2_TR(0x5e17ab);
__builtin_memmove((R+24),gp(0x883db4),4);
}
B5e17b1:{NFSU2_TR(0x5e17b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e17b2:{NFSU2_TR(0x5e17b2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e16a1u);}goto L5e16a1;}
}
B5e17b7:L5e17b7:{c.instructions+=2;NFSU2_TR(0x5e17b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e17bf:{NFSU2_TR(0x5e17bf);
}
B5e17c0:L5e17c0:{c.instructions+=5;NFSU2_TR(0x5e17c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e17c4:{NFSU2_TR(0x5e17c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e17c7:{NFSU2_TR(0x5e17c7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e17c9:{NFSU2_TR(0x5e17c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e17ce:{NFSU2_TR(0x5e17ce);
if(r1(R+518)){{goto L5e17d9;}}
}
B5e17d0:L5e17d0:{c.instructions+=2;NFSU2_TR(0x5e17d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e17d2:{NFSU2_TR(0x5e17d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e17d9;}}
}
B5e17d4:L5e17d4:{c.instructions+=1;NFSU2_TR(0x5e17d4);
w4(R+8,u32(0x1ull));
}
B5e17d9:L5e17d9:{c.instructions+=3;NFSU2_TR(0x5e17d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e17dd:{NFSU2_TR(0x5e17dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e17e2:{NFSU2_TR(0x5e17e2);
if(r1(R+518)){{goto L5e17e9;}}
}
B5e17e4:L5e17e4:{c.instructions+=2;NFSU2_TR(0x5e17e4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e17e6:{NFSU2_TR(0x5e17e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e17e9;}}
}
B5e17e8:L5e17e8:{c.instructions+=1;NFSU2_TR(0x5e17e8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e17e9:L5e17e9:{c.instructions+=2;NFSU2_TR(0x5e17e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e17ed:{NFSU2_TR(0x5e17ed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e193c;}}
}
B5e17f3:L5e17f3:{c.instructions+=4;NFSU2_TR(0x5e17f3);
__builtin_memmove((R+28),gp(0x883db4),4);
}
B5e17f9:{NFSU2_TR(0x5e17f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e17fb:{NFSU2_TR(0x5e17fb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e17fd:{NFSU2_TR(0x5e17fd);
__builtin_memmove((R+4),(R+4),4);
}
B5e1800:L5e1800:{c.instructions+=3;NFSU2_TR(0x5e1800);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5e1803:{NFSU2_TR(0x5e1803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1808:{NFSU2_TR(0x5e1808);
if(r1(R+518)){{goto L5e1815;}}
}
B5e180a:L5e180a:{c.instructions+=2;NFSU2_TR(0x5e180a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e180c:{NFSU2_TR(0x5e180c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1815;}}
}
B5e180e:L5e180e:{c.instructions+=2;NFSU2_TR(0x5e180e);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e1812:{NFSU2_TR(0x5e1812);
if(r1(R+518)){{goto L5e188f;}}
}
B5e1814:L5e1814:{c.instructions+=1;NFSU2_TR(0x5e1814);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e1815:L5e1815:{c.instructions+=4;NFSU2_TR(0x5e1815);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e1816:{NFSU2_TR(0x5e1816);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5e1819:{NFSU2_TR(0x5e1819);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e181c:{NFSU2_TR(0x5e181c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1800u);}goto L5e1800;}}
}
B5e181e:L5e181e:{c.instructions+=1;NFSU2_TR(0x5e181e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e1820:L5e1820:{c.instructions+=2;NFSU2_TR(0x5e1820);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e1824:{NFSU2_TR(0x5e1824);
if(r1(R+518)){{goto L5e1924;}}
}
B5e182a:L5e182a:{c.instructions+=7;NFSU2_TR(0x5e182a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e182d:{NFSU2_TR(0x5e182d);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e1831:{NFSU2_TR(0x5e1831);
__builtin_memmove((R+4),(R+12),4);
}
B5e1833:{NFSU2_TR(0x5e1833);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1836:{NFSU2_TR(0x5e1836);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5e1839:{NFSU2_TR(0x5e1839);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5e183b:{NFSU2_TR(0x5e183b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1924;}}
}
B5e1841:L5e1841:{c.instructions+=2;NFSU2_TR(0x5e1841);
__builtin_memmove((R+4),(R+0),4);
}
B5e1843:{NFSU2_TR(0x5e1843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1848ull));
TAIL_STATIC(0x5d8760u,5d8);
}
B5e1848:L5e1848:{c.instructions+=3;NFSU2_TR(0x5e1848);
__builtin_memmove((R+24),(R+0),4);
}
B5e184a:{NFSU2_TR(0x5e184a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e184c:{NFSU2_TR(0x5e184c);
if(r1(R+518)){{goto L5e1924;}}
}
B5e1852:L5e1852:{c.instructions+=4;NFSU2_TR(0x5e1852);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e1856:{NFSU2_TR(0x5e1856);
__builtin_memmove((R+0),(R+28),4);
}
B5e1858:{NFSU2_TR(0x5e1858);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e185b:{NFSU2_TR(0x5e185b);
if(r1(R+518)){{goto L5e18a8;}}
}
B5e185d:L5e185d:{c.instructions+=2;NFSU2_TR(0x5e185d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e185e:{NFSU2_TR(0x5e185e);
if(r1(R+518)){{goto L5e189c;}}
}
B5e1860:L5e1860:{c.instructions+=2;NFSU2_TR(0x5e1860);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1861:{NFSU2_TR(0x5e1861);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1877;}}
}
B5e1863:L5e1863:{c.instructions+=3;NFSU2_TR(0x5e1863);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e1866:{NFSU2_TR(0x5e1866);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e1869:{NFSU2_TR(0x5e1869);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e186c:L5e186c:{c.instructions+=3;NFSU2_TR(0x5e186c);
__builtin_memmove((R+0),(R+518),1);
}
B5e186f:{NFSU2_TR(0x5e186f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1871:{NFSU2_TR(0x5e1871);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1924;}}
}
B5e1877:L5e1877:{c.instructions+=3;NFSU2_TR(0x5e1877);
__builtin_memmove((R+0),(R+28),4);
}
B5e1879:{NFSU2_TR(0x5e1879);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e187c:{NFSU2_TR(0x5e187c);
if(r1(R+518)){{goto L5e18c5;}}
}
B5e187e:L5e187e:{c.instructions+=2;NFSU2_TR(0x5e187e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e187f:{NFSU2_TR(0x5e187f);
if(r1(R+518)){{goto L5e18b7;}}
}
B5e1881:L5e1881:{c.instructions+=2;NFSU2_TR(0x5e1881);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1882:{NFSU2_TR(0x5e1882);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e18d3;}}
}
B5e1884:L5e1884:{c.instructions+=4;NFSU2_TR(0x5e1884);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1887:{NFSU2_TR(0x5e1887);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e188a:{NFSU2_TR(0x5e188a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e188d:{NFSU2_TR(0x5e188d);
{goto L5e18cc;}
}
B5e188f:L5e188f:{c.instructions+=4;NFSU2_TR(0x5e188f);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e1895:{NFSU2_TR(0x5e1895);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1898:{NFSU2_TR(0x5e1898);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5e189a:{NFSU2_TR(0x5e189a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1820u);}goto L5e1820;}
}
B5e189c:L5e189c:{c.instructions+=5;NFSU2_TR(0x5e189c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e189f:{NFSU2_TR(0x5e189f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e18a2:{NFSU2_TR(0x5e18a2);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e18a4:{NFSU2_TR(0x5e18a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e18a6:{NFSU2_TR(0x5e18a6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e186cu);}goto L5e186c;}
}
B5e18a8:L5e18a8:{c.instructions+=4;NFSU2_TR(0x5e18a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e18ab:{NFSU2_TR(0x5e18ab);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e18ad:{NFSU2_TR(0x5e18ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e18af:{NFSU2_TR(0x5e18af);
if(r1(R+518)){{goto L5e1924;}}
}
B5e18b1:L5e18b1:{c.instructions+=2;NFSU2_TR(0x5e18b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e18b3:{NFSU2_TR(0x5e18b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1877u);}goto L5e1877;}}
}
B5e18b5:L5e18b5:{c.instructions+=1;NFSU2_TR(0x5e18b5);
{goto L5e1924;}
}
B5e18b7:L5e18b7:{c.instructions+=5;NFSU2_TR(0x5e18b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e18ba:{NFSU2_TR(0x5e18ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e18bd:{NFSU2_TR(0x5e18bd);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e18c0:{NFSU2_TR(0x5e18c0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e18c3:{NFSU2_TR(0x5e18c3);
{goto L5e18cc;}
}
B5e18c5:L5e18c5:{c.instructions+=3;NFSU2_TR(0x5e18c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e18c8:{NFSU2_TR(0x5e18c8);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e18ca:{NFSU2_TR(0x5e18ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e18cc:L5e18cc:{c.instructions+=3;NFSU2_TR(0x5e18cc);
__builtin_memmove((R+0),(R+518),1);
}
B5e18cf:{NFSU2_TR(0x5e18cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e18d1:{NFSU2_TR(0x5e18d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1924;}}
}
B5e18d3:L5e18d3:{c.instructions+=3;NFSU2_TR(0x5e18d3);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5e18d6:{NFSU2_TR(0x5e18d6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e18d9:{NFSU2_TR(0x5e18d9);
if(r1(R+518)){{goto L5e1924;}}
}
B5e18db:L5e18db:{c.instructions+=3;NFSU2_TR(0x5e18db);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e18df:{NFSU2_TR(0x5e18df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e18e1:{NFSU2_TR(0x5e18e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e18ec;}}
}
B5e18e3:L5e18e3:{c.instructions+=2;NFSU2_TR(0x5e18e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e18ea:{NFSU2_TR(0x5e18ea);
{goto L5e18ee;}
}
B5e18ec:L5e18ec:{c.instructions+=1;NFSU2_TR(0x5e18ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e18ee:L5e18ee:{c.instructions+=4;NFSU2_TR(0x5e18ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e18f1:{NFSU2_TR(0x5e18f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e18f4:{NFSU2_TR(0x5e18f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e18f7:{NFSU2_TR(0x5e18f7);
if(r1(R+518)){{goto L5e1924;}}
}
B5e18f9:L5e18f9:{c.instructions+=3;NFSU2_TR(0x5e18f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e18fa:{NFSU2_TR(0x5e18fa);
__builtin_memmove((R+4),(R+24),4);
}
B5e18fc:{NFSU2_TR(0x5e18fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1901ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B5e1901:L5e1901:{c.instructions+=5;NFSU2_TR(0x5e1901);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1903:{NFSU2_TR(0x5e1903);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1905:{NFSU2_TR(0x5e1905);
__builtin_memmove((R+4),(R+24),4);
}
B5e1907:{NFSU2_TR(0x5e1907);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1908:{NFSU2_TR(0x5e1908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1911;}}
}
B5e190a:L5e190a:{c.instructions+=1;NFSU2_TR(0x5e190a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e190full));
TAIL_STATIC(0x5d8720u,5d8);
}
B5e190f:L5e190f:{c.instructions+=1;NFSU2_TR(0x5e190f);
{goto L5e1924;}
}
B5e1911:L5e1911:{c.instructions+=1;NFSU2_TR(0x5e1911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1916ull));
TAIL_STATIC(0x5d8720u,5d8);
}
B5e1916:L5e1916:{c.instructions+=6;NFSU2_TR(0x5e1916);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e191a:{NFSU2_TR(0x5e191a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e191b:{NFSU2_TR(0x5e191b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e191c:{NFSU2_TR(0x5e191c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e191d:{NFSU2_TR(0x5e191d);
__builtin_memmove((R+4),(R+24),4);
}
B5e191f:{NFSU2_TR(0x5e191f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1924ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e15f0u);}goto L5e15f0;}
}
B5e1924:L5e1924:{c.instructions+=6;NFSU2_TR(0x5e1924);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1928:{NFSU2_TR(0x5e1928);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e192c:{NFSU2_TR(0x5e192c);
__builtin_memmove((R+24),gp(0x883db4),4);
}
B5e1932:{NFSU2_TR(0x5e1932);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e1933:{NFSU2_TR(0x5e1933);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1937:{NFSU2_TR(0x5e1937);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e17c0u);}goto L5e17c0;}
}
B5e193c:L5e193c:{c.instructions+=10;NFSU2_TR(0x5e193c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e193f:{NFSU2_TR(0x5e193f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e1944:{NFSU2_TR(0x5e1944);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e194b:{NFSU2_TR(0x5e194b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e194f:{NFSU2_TR(0x5e194f);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B5e1951:{NFSU2_TR(0x5e1951);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x8cull))));
}
B5e1957:{NFSU2_TR(0x5e1957);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1959:{NFSU2_TR(0x5e1959);
__builtin_memmove((R+24),(R+20),4);
}
B5e195b:{NFSU2_TR(0x5e195b);
w4(R+0,u32(0x92492493ull));
}
B5e1960:{NFSU2_TR(0x5e1960);
if(r1(R+518)){{goto L5e1987;}}
}
B5e1962:L5e1962:{c.instructions+=10;NFSU2_TR(0x5e1962);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e1964:{NFSU2_TR(0x5e1964);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e1966:{NFSU2_TR(0x5e1966);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1969:{NFSU2_TR(0x5e1969);
__builtin_memmove((R+0),(R+8),4);
}
B5e196b:{NFSU2_TR(0x5e196b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e196e:{NFSU2_TR(0x5e196e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e1970:{NFSU2_TR(0x5e1970);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e1974:{NFSU2_TR(0x5e1974);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1977:{NFSU2_TR(0x5e1977);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1979:{NFSU2_TR(0x5e1979);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e19d5;}}
}
B5e197b:L5e197b:{c.instructions+=3;NFSU2_TR(0x5e197b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e197e:{NFSU2_TR(0x5e197e);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5e1985:{NFSU2_TR(0x5e1985);
{goto L5e199e;}
}
B5e1987:L5e1987:{c.instructions+=7;NFSU2_TR(0x5e1987);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e1989:{NFSU2_TR(0x5e1989);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e198b:{NFSU2_TR(0x5e198b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e198e:{NFSU2_TR(0x5e198e);
__builtin_memmove((R+0),(R+8),4);
}
B5e1990:{NFSU2_TR(0x5e1990);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1993:{NFSU2_TR(0x5e1993);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5e1995:{NFSU2_TR(0x5e1995);
if(r1(R+518)){{goto L5e19d5;}}
}
B5e1997:L5e1997:{c.instructions+=2;NFSU2_TR(0x5e1997);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e199a:{NFSU2_TR(0x5e199a);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5e199e:L5e199e:{c.instructions+=2;NFSU2_TR(0x5e199e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e19a0:{NFSU2_TR(0x5e19a0);
if(r1(R+518)){{goto L5e19d5;}}
}
B5e19a2:L5e19a2:{c.instructions+=1;NFSU2_TR(0x5e19a2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1669u);}goto L5e1669;}
}
B5e19a7:L5e19a7:{c.instructions+=2;NFSU2_TR(0x5e19a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19a8:{NFSU2_TR(0x5e19a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e19adull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B5e19ad:L5e19ad:{c.instructions+=2;NFSU2_TR(0x5e19ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e19af:{NFSU2_TR(0x5e19af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e19d5;}}
}
B5e19b1:L5e19b1:{c.instructions+=4;NFSU2_TR(0x5e19b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e19b4:{NFSU2_TR(0x5e19b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e19b7:{NFSU2_TR(0x5e19b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e19ba:{NFSU2_TR(0x5e19ba);
if(r1(R+518)){{goto L5e19cb;}}
}
B5e19bc:L5e19bc:{c.instructions+=5;NFSU2_TR(0x5e19bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e19c0:{NFSU2_TR(0x5e19c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19c1:{NFSU2_TR(0x5e19c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19c2:{NFSU2_TR(0x5e19c2);
__builtin_memmove((R+4),(R+20),4);
}
B5e19c4:{NFSU2_TR(0x5e19c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e19c9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e14b0u);}goto L5e14b0;}
}
B5e19c9:L5e19c9:{c.instructions+=1;NFSU2_TR(0x5e19c9);
__builtin_memmove((R+24),(R+0),4);
}
B5e19cb:L5e19cb:{c.instructions+=4;NFSU2_TR(0x5e19cb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19cd:{NFSU2_TR(0x5e19cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19ce:{NFSU2_TR(0x5e19ce);
__builtin_memmove((R+4),(R+24),4);
}
B5e19d0:{NFSU2_TR(0x5e19d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e19d5ull));
TAIL_STATIC(0x5d8720u,5d8);
}
B5e19d5:L5e19d5:{c.instructions+=4;NFSU2_TR(0x5e19d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e19d6:{NFSU2_TR(0x5e19d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e19d7:{NFSU2_TR(0x5e19d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e19d8:{NFSU2_TR(0x5e19d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e19d9:L5e19d9:{c.instructions+=2;NFSU2_TR(0x5e19d9);
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
B5e19dc:{NFSU2_TR(0x5e19dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e19e0:L5e19e0:{c.instructions+=8;NFSU2_TR(0x5e19e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5e19e3:{NFSU2_TR(0x5e19e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19e4:{NFSU2_TR(0x5e19e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19e5:{NFSU2_TR(0x5e19e5);
__builtin_memmove((R+12),(R+4),4);
}
B5e19e7:{NFSU2_TR(0x5e19e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e19e9:{NFSU2_TR(0x5e19e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19ea:{NFSU2_TR(0x5e19ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e19eb:{NFSU2_TR(0x5e19eb);
if(r1(R+518)){{goto L5e19fe;}}
}
B5e19ed:L5e19ed:{c.instructions+=4;NFSU2_TR(0x5e19ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e19f0:{NFSU2_TR(0x5e19f0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e19f5:{NFSU2_TR(0x5e19f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5e19fc:{NFSU2_TR(0x5e19fc);
{goto L5e1a00;}
}
B5e19fe:L5e19fe:{c.instructions+=1;NFSU2_TR(0x5e19fe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e1a00:L5e1a00:{c.instructions+=3;NFSU2_TR(0x5e1a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e1a04:{NFSU2_TR(0x5e1a04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1a06:{NFSU2_TR(0x5e1a06);
if(r1(R+518)){{goto L5e1a0e;}}
}
B5e1a08:L5e1a08:{c.instructions+=2;NFSU2_TR(0x5e1a08);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e1a0c:{NFSU2_TR(0x5e1a0c);
{goto L5e1a14;}
}
B5e1a0e:L5e1a0e:{c.instructions+=2;NFSU2_TR(0x5e1a0e);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e1a12:{NFSU2_TR(0x5e1a12);
__builtin_memmove((R+24),(R+12),4);
}
B5e1a14:L5e1a14:{c.instructions+=15;NFSU2_TR(0x5e1a14);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5e1a1a:{NFSU2_TR(0x5e1a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e1a1e:{NFSU2_TR(0x5e1a1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1a20:{NFSU2_TR(0x5e1a20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1a22:{NFSU2_TR(0x5e1a22);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1a24:{NFSU2_TR(0x5e1a24);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e1a29:{NFSU2_TR(0x5e1a29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1a2a:{NFSU2_TR(0x5e1a2a);
__builtin_memmove((R+4),(R+518),1);
}
B5e1a2d:{NFSU2_TR(0x5e1a2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1a2e:{NFSU2_TR(0x5e1a2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1a32:{NFSU2_TR(0x5e1a32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1a33:{NFSU2_TR(0x5e1a33);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e1a37:{NFSU2_TR(0x5e1a37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1a38:{NFSU2_TR(0x5e1a38);
__builtin_memmove((R+4),(R+24),4);
}
B5e1a3a:{NFSU2_TR(0x5e1a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1a3full));
TAIL_STATIC(0x5dd550u,5dd);
}
B5e1a3f:L5e1a3f:{c.instructions+=2;NFSU2_TR(0x5e1a3f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e1a42:{NFSU2_TR(0x5e1a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1b5d;}}
}
B5e1a48:L5e1a48:{c.instructions+=5;NFSU2_TR(0x5e1a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1a4b:{NFSU2_TR(0x5e1a4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1a4e:{NFSU2_TR(0x5e1a4e);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5e1a51:{NFSU2_TR(0x5e1a51);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1a53:{NFSU2_TR(0x5e1a53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1c94;}}
}
B5e1a59:L5e1a59:{c.instructions+=3;NFSU2_TR(0x5e1a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1a5b:{NFSU2_TR(0x5e1a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e1a63:{NFSU2_TR(0x5e1a63);
if(r1(R+518)){{goto L5e1a87;}}
}
B5e1a65:L5e1a65:{c.instructions+=2;NFSU2_TR(0x5e1a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1a67:{NFSU2_TR(0x5e1a67);
if(r1(R+518)){{goto L5e1a87;}}
}
B5e1a69:L5e1a69:{c.instructions+=7;NFSU2_TR(0x5e1a69);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1a6c:{NFSU2_TR(0x5e1a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5e1a6f:{NFSU2_TR(0x5e1a6f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e1a73:{NFSU2_TR(0x5e1a73);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1a76:{NFSU2_TR(0x5e1a76);
w4(R+4,u32(0x88f298ull));
}
B5e1a7b:{NFSU2_TR(0x5e1a7b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e1a7e:{NFSU2_TR(0x5e1a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1a83ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5e1a83:L5e1a83:{c.instructions+=1;NFSU2_TR(0x5e1a83);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e1a87:L5e1a87:{c.instructions+=11;NFSU2_TR(0x5e1a87);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1a8d:{NFSU2_TR(0x5e1a8d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e1a91:{NFSU2_TR(0x5e1a91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1a97:{NFSU2_TR(0x5e1a97);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1a9b:{NFSU2_TR(0x5e1a9b);
{u32 ea_=u32(u32(8013384u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e1aa1:{NFSU2_TR(0x5e1aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e1aa9:{NFSU2_TR(0x5e1aa9);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1aae:{NFSU2_TR(0x5e1aae);
__builtin_memmove((R+24),(R+12),4);
}
B5e1ab0:{NFSU2_TR(0x5e1ab0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1ab2:{NFSU2_TR(0x5e1ab2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1ab5:{NFSU2_TR(0x5e1ab5);
if(r1(R+514)){{goto L5e1c92;}}
}
B5e1abb:L5e1abb:{c.instructions+=1;NFSU2_TR(0x5e1abb);
{goto L5e1ac0;}
}
B5e1ac0:L5e1ac0:{c.instructions+=2;NFSU2_TR(0x5e1ac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1ac2:{NFSU2_TR(0x5e1ac2);
if(r1(R+518)){{goto L5e1c92;}}
}
B5e1ac8:L5e1ac8:{c.instructions+=3;NFSU2_TR(0x5e1ac8);
__builtin_memmove((R+20),gp(0x883db4),4);
}
B5e1ace:{NFSU2_TR(0x5e1ace);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1ad3:{NFSU2_TR(0x5e1ad3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e1ad5:L5e1ad5:{c.instructions+=4;NFSU2_TR(0x5e1ad5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e1ad9:{NFSU2_TR(0x5e1ad9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e1adb:{NFSU2_TR(0x5e1adb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1ae0:{NFSU2_TR(0x5e1ae0);
if(r1(R+518)){{goto L5e1aeb;}}
}
B5e1ae2:L5e1ae2:{c.instructions+=2;NFSU2_TR(0x5e1ae2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1ae4:{NFSU2_TR(0x5e1ae4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1aeb;}}
}
B5e1ae6:L5e1ae6:{c.instructions+=1;NFSU2_TR(0x5e1ae6);
w4(R+4,u32(0x1ull));
}
B5e1aeb:L5e1aeb:{c.instructions+=3;NFSU2_TR(0x5e1aeb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e1aef:{NFSU2_TR(0x5e1aef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1af4:{NFSU2_TR(0x5e1af4);
if(r1(R+518)){{goto L5e1afb;}}
}
B5e1af6:L5e1af6:{c.instructions+=2;NFSU2_TR(0x5e1af6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1af8:{NFSU2_TR(0x5e1af8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1afb;}}
}
B5e1afa:L5e1afa:{c.instructions+=1;NFSU2_TR(0x5e1afa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e1afb:L5e1afb:{c.instructions+=2;NFSU2_TR(0x5e1afb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1afd:{NFSU2_TR(0x5e1afd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1bb9;}}
}
B5e1b03:L5e1b03:{c.instructions+=3;NFSU2_TR(0x5e1b03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1b04:{NFSU2_TR(0x5e1b04);
__builtin_memmove((R+4),(R+24),4);
}
B5e1b06:{NFSU2_TR(0x5e1b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1b0bull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5e1b0b:L5e1b0b:{c.instructions+=2;NFSU2_TR(0x5e1b0b);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e1b0f:{NFSU2_TR(0x5e1b0f);
if(r1(R+518)){{goto L5e1bb3;}}
}
B5e1b15:L5e1b15:{c.instructions+=3;NFSU2_TR(0x5e1b15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1b19:{NFSU2_TR(0x5e1b19);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1b1c:{NFSU2_TR(0x5e1b1c);
if(r1(R+518)){{goto L5e1b8e;}}
}
B5e1b1e:L5e1b1e:{c.instructions+=2;NFSU2_TR(0x5e1b1e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1b1f:{NFSU2_TR(0x5e1b1f);
if(r1(R+518)){{goto L5e1b80;}}
}
B5e1b21:L5e1b21:{c.instructions+=2;NFSU2_TR(0x5e1b21);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1b22:{NFSU2_TR(0x5e1b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1b34;}}
}
B5e1b24:L5e1b24:{c.instructions+=3;NFSU2_TR(0x5e1b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1b27:{NFSU2_TR(0x5e1b27);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1b2a:{NFSU2_TR(0x5e1b2a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1b2d:L5e1b2d:{c.instructions+=3;NFSU2_TR(0x5e1b2d);
__builtin_memmove((R+4),(R+518),1);
}
B5e1b30:{NFSU2_TR(0x5e1b30);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1b32:{NFSU2_TR(0x5e1b32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1bb3;}}
}
B5e1b34:L5e1b34:{c.instructions+=3;NFSU2_TR(0x5e1b34);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1b38:{NFSU2_TR(0x5e1b38);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1b3a:{NFSU2_TR(0x5e1b3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1bb3;}}
}
B5e1b3c:L5e1b3c:{c.instructions+=7;NFSU2_TR(0x5e1b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1b3f:{NFSU2_TR(0x5e1b3f);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e1b43:{NFSU2_TR(0x5e1b43);
__builtin_memmove((R+8),(R+4),4);
}
B5e1b45:{NFSU2_TR(0x5e1b45);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1b48:{NFSU2_TR(0x5e1b48);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5e1b4b:{NFSU2_TR(0x5e1b4b);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+12))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B5e1b4d:{NFSU2_TR(0x5e1b4d);
if(r1(R+518)){{goto L5e1bb3;}}
}
B5e1b4f:L5e1b4f:{c.instructions+=3;NFSU2_TR(0x5e1b4f);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1b52:{NFSU2_TR(0x5e1b52);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1b55:{NFSU2_TR(0x5e1b55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1ba4;}}
}
B5e1b57:L5e1b57:{c.instructions+=2;NFSU2_TR(0x5e1b57);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e1b5b:{NFSU2_TR(0x5e1b5b);
{goto L5e1ba8;}
}
B5e1b5d:L5e1b5d:{c.instructions+=4;NFSU2_TR(0x5e1b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e1b60:{NFSU2_TR(0x5e1b60);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1b63:{NFSU2_TR(0x5e1b63);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1b66:{NFSU2_TR(0x5e1b66);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1a59u);}goto L5e1a59;}}
}
B5e1b6c:L5e1b6c:{c.instructions+=4;NFSU2_TR(0x5e1b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1b6f:{NFSU2_TR(0x5e1b6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1b72:{NFSU2_TR(0x5e1b72);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1b75:{NFSU2_TR(0x5e1b75);
if(r1(R+518)){{goto L5e1c94;}}
}
B5e1b7b:L5e1b7b:{c.instructions+=1;NFSU2_TR(0x5e1b7b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1a59u);}goto L5e1a59;}
}
B5e1b80:L5e1b80:{c.instructions+=5;NFSU2_TR(0x5e1b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e1b83:{NFSU2_TR(0x5e1b83);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1b86:{NFSU2_TR(0x5e1b86);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e1b89:{NFSU2_TR(0x5e1b89);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1b8c:{NFSU2_TR(0x5e1b8c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1b2du);}goto L5e1b2d;}
}
B5e1b8e:L5e1b8e:{c.instructions+=4;NFSU2_TR(0x5e1b8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1b91:{NFSU2_TR(0x5e1b91);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1b94:{NFSU2_TR(0x5e1b94);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1b97:{NFSU2_TR(0x5e1b97);
if(r1(R+518)){{goto L5e1bb3;}}
}
B5e1b99:L5e1b99:{c.instructions+=2;NFSU2_TR(0x5e1b99);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1b9c:{NFSU2_TR(0x5e1b9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1b34u);}goto L5e1b34;}}
}
B5e1b9e:L5e1b9e:{c.instructions+=2;NFSU2_TR(0x5e1b9e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e1b9f:{NFSU2_TR(0x5e1b9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1ad5u);}goto L5e1ad5;}
}
B5e1ba4:L5e1ba4:{c.instructions+=1;NFSU2_TR(0x5e1ba4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e1ba8:L5e1ba8:{c.instructions+=2;NFSU2_TR(0x5e1ba8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e1bac:{NFSU2_TR(0x5e1bac);
if(r1(R+518)){{goto L5e1bb3;}}
}
B5e1bae:L5e1bae:{c.instructions+=1;NFSU2_TR(0x5e1bae);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1bb3:L5e1bb3:{c.instructions+=2;NFSU2_TR(0x5e1bb3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e1bb4:{NFSU2_TR(0x5e1bb4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1ad5u);}goto L5e1ad5;}
}
B5e1bb9:L5e1bb9:{c.instructions+=3;NFSU2_TR(0x5e1bb9);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e1bbd:{NFSU2_TR(0x5e1bbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1bbf:{NFSU2_TR(0x5e1bbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1c92;}}
}
B5e1bc5:L5e1bc5:{c.instructions+=11;NFSU2_TR(0x5e1bc5);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e1bca:{NFSU2_TR(0x5e1bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1bce:{NFSU2_TR(0x5e1bce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1bd0:{NFSU2_TR(0x5e1bd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1bd2:{NFSU2_TR(0x5e1bd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1bd3:{NFSU2_TR(0x5e1bd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1bd4:{NFSU2_TR(0x5e1bd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1bd5:{NFSU2_TR(0x5e1bd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e1bd9:{NFSU2_TR(0x5e1bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1bda:{NFSU2_TR(0x5e1bda);
__builtin_memmove((R+4),(R+24),4);
}
B5e1bdc:{NFSU2_TR(0x5e1bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1be1ull));
TAIL_STATIC(0x5dd550u,5dd);
}
B5e1be1:L5e1be1:{c.instructions+=3;NFSU2_TR(0x5e1be1);
__builtin_memmove((R+4),(R+0),4);
}
B5e1be3:{NFSU2_TR(0x5e1be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1be5:{NFSU2_TR(0x5e1be5);
if(r1(R+518)){{goto L5e1c7f;}}
}
B5e1beb:L5e1beb:{c.instructions+=18;NFSU2_TR(0x5e1beb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1bed:{NFSU2_TR(0x5e1bed);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5e1bf2:{NFSU2_TR(0x5e1bf2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1bf4:{NFSU2_TR(0x5e1bf4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1bf6:{NFSU2_TR(0x5e1bf6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1bf9:{NFSU2_TR(0x5e1bf9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1bfc:{NFSU2_TR(0x5e1bfc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e1bfe:{NFSU2_TR(0x5e1bfe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e1c00:{NFSU2_TR(0x5e1c00);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e1c02:{NFSU2_TR(0x5e1c02);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e1c04:{NFSU2_TR(0x5e1c04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e1c06:{NFSU2_TR(0x5e1c06);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e1c08:{NFSU2_TR(0x5e1c08);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5e1c0a:{NFSU2_TR(0x5e1c0a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e1c0c:{NFSU2_TR(0x5e1c0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e1c0e:{NFSU2_TR(0x5e1c0e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1c11:{NFSU2_TR(0x5e1c11);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1c14:{NFSU2_TR(0x5e1c14);
if(r1(R+518)){{goto L5e1c44;}}
}
B5e1c16:L5e1c16:{c.instructions+=7;NFSU2_TR(0x5e1c16);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1c1c:{NFSU2_TR(0x5e1c1c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e1c1e:{NFSU2_TR(0x5e1c1e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e1c20:{NFSU2_TR(0x5e1c20);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e1c22:{NFSU2_TR(0x5e1c22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1c24:{NFSU2_TR(0x5e1c24);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1c27:{NFSU2_TR(0x5e1c27);
if(r1(R+514)){{goto L5e1c31;}}
}
B5e1c29:L5e1c29:{c.instructions+=2;NFSU2_TR(0x5e1c29);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e1c2f:{NFSU2_TR(0x5e1c2f);
{goto L5e1c44;}
}
B5e1c31:L5e1c31:{c.instructions+=4;NFSU2_TR(0x5e1c31);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e1c37:{NFSU2_TR(0x5e1c37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1c39:{NFSU2_TR(0x5e1c39);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1c3c:{NFSU2_TR(0x5e1c3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1c44;}}
}
B5e1c3e:L5e1c3e:{c.instructions+=1;NFSU2_TR(0x5e1c3e);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1c44:L5e1c44:{c.instructions+=7;NFSU2_TR(0x5e1c44);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1c48:{NFSU2_TR(0x5e1c48);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e1c4a:{NFSU2_TR(0x5e1c4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e1c50:{NFSU2_TR(0x5e1c50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1c52:{NFSU2_TR(0x5e1c52);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e1c54:{NFSU2_TR(0x5e1c54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1c57:{NFSU2_TR(0x5e1c57);
if(r1(R+514)){{goto L5e1c7a;}}
}
B5e1c59:L5e1c59:{c.instructions+=6;NFSU2_TR(0x5e1c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1c5d:{NFSU2_TR(0x5e1c5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e1c5e:{NFSU2_TR(0x5e1c5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1c61:{NFSU2_TR(0x5e1c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1c65:{NFSU2_TR(0x5e1c65);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1c6a:{NFSU2_TR(0x5e1c6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e1c7f;}}
}
B5e1c6c:L5e1c6c:{c.instructions+=8;NFSU2_TR(0x5e1c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e1c6d:{NFSU2_TR(0x5e1c6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e1c6f:{NFSU2_TR(0x5e1c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1c70:{NFSU2_TR(0x5e1c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1c71:{NFSU2_TR(0x5e1c71);
w1(R+0,u8(0x1ull));
}
B5e1c73:{NFSU2_TR(0x5e1c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e1c74:{NFSU2_TR(0x5e1c74);
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
B5e1c77:{NFSU2_TR(0x5e1c77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1c7a:L5e1c7a:{c.instructions+=1;NFSU2_TR(0x5e1c7a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1c7f:L5e1c7f:{c.instructions+=5;NFSU2_TR(0x5e1c7f);
{u32 ea_=u32(u32(8013384u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e1c85:{NFSU2_TR(0x5e1c85);
__builtin_memmove((R+24),(R+4),4);
}
B5e1c87:{NFSU2_TR(0x5e1c87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1c89:{NFSU2_TR(0x5e1c89);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1c8c:{NFSU2_TR(0x5e1c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1ac0u);}goto L5e1ac0;}}
}
B5e1c92:L5e1c92:{c.instructions+=1;NFSU2_TR(0x5e1c92);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e1c94:L5e1c94:{c.instructions+=7;NFSU2_TR(0x5e1c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e1c95:{NFSU2_TR(0x5e1c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1c96:{NFSU2_TR(0x5e1c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1c97:{NFSU2_TR(0x5e1c97);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e1c99:{NFSU2_TR(0x5e1c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e1c9a:{NFSU2_TR(0x5e1c9a);
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
B5e1c9d:{NFSU2_TR(0x5e1c9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1ca0:L5e1ca0:{c.instructions+=5;NFSU2_TR(0x5e1ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1ca4:{NFSU2_TR(0x5e1ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1ca6:{NFSU2_TR(0x5e1ca6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1ca7:{NFSU2_TR(0x5e1ca7);
__builtin_memmove((R+24),(R+4),4);
}
B5e1ca9:{NFSU2_TR(0x5e1ca9);
if(r1(R+518)){{goto L5e1ccf;}}
}
B5e1cab:L5e1cab:{c.instructions+=4;NFSU2_TR(0x5e1cab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1cac:{NFSU2_TR(0x5e1cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1cad:{NFSU2_TR(0x5e1cad);
w4(R+4,u32(0x88f298ull));
}
B5e1cb2:{NFSU2_TR(0x5e1cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1cb7ull));
TAIL_STATIC(0x5d2e60u,5d2);
}
B5e1cb7:L5e1cb7:{c.instructions+=2;NFSU2_TR(0x5e1cb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1cb9:{NFSU2_TR(0x5e1cb9);
if(r1(R+518)){{goto L5e1ccf;}}
}
B5e1cbb:L5e1cbb:{c.instructions+=2;NFSU2_TR(0x5e1cbb);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5e1cc0:{NFSU2_TR(0x5e1cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1cc9;}}
}
B5e1cc2:L5e1cc2:{c.instructions+=3;NFSU2_TR(0x5e1cc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1cc5:{NFSU2_TR(0x5e1cc5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1cc7:{NFSU2_TR(0x5e1cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1ccf;}}
}
B5e1cc9:L5e1cc9:{c.instructions+=3;NFSU2_TR(0x5e1cc9);
w1(R+0,u8(0x1ull));
}
B5e1ccb:{NFSU2_TR(0x5e1ccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1ccc:{NFSU2_TR(0x5e1ccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1ccf:L5e1ccf:{c.instructions+=2;NFSU2_TR(0x5e1ccf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1cd1:{NFSU2_TR(0x5e1cd1);
if(r1(R+518)){{goto L5e1ce4;}}
}
B5e1cd3:L5e1cd3:{c.instructions+=4;NFSU2_TR(0x5e1cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1cd6:{NFSU2_TR(0x5e1cd6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e1cdb:{NFSU2_TR(0x5e1cdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e1ce2:{NFSU2_TR(0x5e1ce2);
{goto L5e1ce6;}
}
B5e1ce4:L5e1ce4:{c.instructions+=1;NFSU2_TR(0x5e1ce4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e1ce6:L5e1ce6:{c.instructions+=4;NFSU2_TR(0x5e1ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1ce9:{NFSU2_TR(0x5e1ce9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1cec:{NFSU2_TR(0x5e1cec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1cef:{NFSU2_TR(0x5e1cef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1cf7;}}
}
B5e1cf1:L5e1cf1:{c.instructions+=3;NFSU2_TR(0x5e1cf1);
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
B5e1cf3:{NFSU2_TR(0x5e1cf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1cf4:{NFSU2_TR(0x5e1cf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1cf7:L5e1cf7:{c.instructions+=12;NFSU2_TR(0x5e1cf7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1cfd:{NFSU2_TR(0x5e1cfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1cfe:{NFSU2_TR(0x5e1cfe);
{u32 ea_=u32(u32(8013388u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e1d04:{NFSU2_TR(0x5e1d04);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e1d08:{NFSU2_TR(0x5e1d08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1d09:{NFSU2_TR(0x5e1d09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1d0a:{NFSU2_TR(0x5e1d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e1d12:{NFSU2_TR(0x5e1d12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1d14:{NFSU2_TR(0x5e1d14);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1d18:{NFSU2_TR(0x5e1d18);
__builtin_memmove((R+28),(R+24),4);
}
B5e1d1a:{NFSU2_TR(0x5e1d1a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1d1d:{NFSU2_TR(0x5e1d1d);
if(r1(R+514)){{goto L5e1e6a;}}
}
B5e1d23:L5e1d23:{c.instructions+=2;NFSU2_TR(0x5e1d23);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1d25:{NFSU2_TR(0x5e1d25);
if(r1(R+518)){{goto L5e1e6a;}}
}
B5e1d2b:L5e1d2b:{c.instructions+=2;NFSU2_TR(0x5e1d2b);
__builtin_memmove((R+20),gp(0x883db4),4);
}
B5e1d31:{NFSU2_TR(0x5e1d31);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e1d33:L5e1d33:{c.instructions+=4;NFSU2_TR(0x5e1d33);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e1d37:{NFSU2_TR(0x5e1d37);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e1d39:{NFSU2_TR(0x5e1d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1d3e:{NFSU2_TR(0x5e1d3e);
if(r1(R+518)){{goto L5e1d49;}}
}
B5e1d40:L5e1d40:{c.instructions+=2;NFSU2_TR(0x5e1d40);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1d42:{NFSU2_TR(0x5e1d42);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1d49;}}
}
B5e1d44:L5e1d44:{c.instructions+=1;NFSU2_TR(0x5e1d44);
w4(R+4,u32(0x1ull));
}
B5e1d49:L5e1d49:{c.instructions+=3;NFSU2_TR(0x5e1d49);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e1d4d:{NFSU2_TR(0x5e1d4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1d52:{NFSU2_TR(0x5e1d52);
if(r1(R+518)){{goto L5e1d59;}}
}
B5e1d54:L5e1d54:{c.instructions+=2;NFSU2_TR(0x5e1d54);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1d56:{NFSU2_TR(0x5e1d56);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1d59;}}
}
B5e1d58:L5e1d58:{c.instructions+=1;NFSU2_TR(0x5e1d58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e1d59:L5e1d59:{c.instructions+=2;NFSU2_TR(0x5e1d59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e1d5b:{NFSU2_TR(0x5e1d5b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e1de3;}}
}
B5e1d61:L5e1d61:{c.instructions+=3;NFSU2_TR(0x5e1d61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1d62:{NFSU2_TR(0x5e1d62);
__builtin_memmove((R+4),(R+28),4);
}
B5e1d64:{NFSU2_TR(0x5e1d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1d69ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5e1d69:L5e1d69:{c.instructions+=2;NFSU2_TR(0x5e1d69);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e1d6d:{NFSU2_TR(0x5e1d6d);
if(r1(R+518)){{goto L5e1ddd;}}
}
B5e1d6f:L5e1d6f:{c.instructions+=3;NFSU2_TR(0x5e1d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1d73:{NFSU2_TR(0x5e1d73);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1d76:{NFSU2_TR(0x5e1d76);
if(r1(R+518)){{goto L5e1db9;}}
}
B5e1d78:L5e1d78:{c.instructions+=2;NFSU2_TR(0x5e1d78);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1d79:{NFSU2_TR(0x5e1d79);
if(r1(R+518)){{goto L5e1dab;}}
}
B5e1d7b:L5e1d7b:{c.instructions+=2;NFSU2_TR(0x5e1d7b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e1d7c:{NFSU2_TR(0x5e1d7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1d8e;}}
}
B5e1d7e:L5e1d7e:{c.instructions+=3;NFSU2_TR(0x5e1d7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e1d81:{NFSU2_TR(0x5e1d81);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e1d84:{NFSU2_TR(0x5e1d84);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1d87:L5e1d87:{c.instructions+=3;NFSU2_TR(0x5e1d87);
__builtin_memmove((R+4),(R+518),1);
}
B5e1d8a:{NFSU2_TR(0x5e1d8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1d8c:{NFSU2_TR(0x5e1d8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1ddd;}}
}
B5e1d8e:L5e1d8e:{c.instructions+=6;NFSU2_TR(0x5e1d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1d91:{NFSU2_TR(0x5e1d91);
__builtin_memmove((R+8),(R+4),4);
}
B5e1d93:{NFSU2_TR(0x5e1d93);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1d96:{NFSU2_TR(0x5e1d96);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5e1d99:{NFSU2_TR(0x5e1d99);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+12))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B5e1d9b:{NFSU2_TR(0x5e1d9b);
if(r1(R+518)){{goto L5e1ddd;}}
}
B5e1d9d:L5e1d9d:{c.instructions+=3;NFSU2_TR(0x5e1d9d);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1da0:{NFSU2_TR(0x5e1da0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1da3:{NFSU2_TR(0x5e1da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1dcf;}}
}
B5e1da5:L5e1da5:{c.instructions+=2;NFSU2_TR(0x5e1da5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e1da9:{NFSU2_TR(0x5e1da9);
{goto L5e1dd3;}
}
B5e1dab:L5e1dab:{c.instructions+=5;NFSU2_TR(0x5e1dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1dae:{NFSU2_TR(0x5e1dae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1db1:{NFSU2_TR(0x5e1db1);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1db4:{NFSU2_TR(0x5e1db4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1db7:{NFSU2_TR(0x5e1db7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1d87u);}goto L5e1d87;}
}
B5e1db9:L5e1db9:{c.instructions+=4;NFSU2_TR(0x5e1db9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1dbc:{NFSU2_TR(0x5e1dbc);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1dbf:{NFSU2_TR(0x5e1dbf);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1dc2:{NFSU2_TR(0x5e1dc2);
if(r1(R+518)){{goto L5e1ddd;}}
}
B5e1dc4:L5e1dc4:{c.instructions+=2;NFSU2_TR(0x5e1dc4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1dc7:{NFSU2_TR(0x5e1dc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1d8eu);}goto L5e1d8e;}}
}
B5e1dc9:L5e1dc9:{c.instructions+=2;NFSU2_TR(0x5e1dc9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e1dca:{NFSU2_TR(0x5e1dca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1d33u);}goto L5e1d33;}
}
B5e1dcf:L5e1dcf:{c.instructions+=1;NFSU2_TR(0x5e1dcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e1dd3:L5e1dd3:{c.instructions+=2;NFSU2_TR(0x5e1dd3);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e1dd7:{NFSU2_TR(0x5e1dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1e6a;}}
}
B5e1ddd:L5e1ddd:{c.instructions+=2;NFSU2_TR(0x5e1ddd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e1dde:{NFSU2_TR(0x5e1dde);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1d33u);}goto L5e1d33;}
}
B5e1de3:L5e1de3:{c.instructions+=11;NFSU2_TR(0x5e1de3);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e1de8:{NFSU2_TR(0x5e1de8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1dec:{NFSU2_TR(0x5e1dec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1dee:{NFSU2_TR(0x5e1dee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1df0:{NFSU2_TR(0x5e1df0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1df1:{NFSU2_TR(0x5e1df1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1df2:{NFSU2_TR(0x5e1df2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1df3:{NFSU2_TR(0x5e1df3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e1df7:{NFSU2_TR(0x5e1df7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1df8:{NFSU2_TR(0x5e1df8);
__builtin_memmove((R+4),(R+28),4);
}
B5e1dfa:{NFSU2_TR(0x5e1dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1dffull));
TAIL_STATIC(0x5dd550u,5dd);
}
B5e1dff:L5e1dff:{c.instructions+=3;NFSU2_TR(0x5e1dff);
__builtin_memmove((R+24),(R+0),4);
}
B5e1e01:{NFSU2_TR(0x5e1e01);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1e03:{NFSU2_TR(0x5e1e03);
if(r1(R+518)){{goto L5e1e45;}}
}
B5e1e05:L5e1e05:{c.instructions+=4;NFSU2_TR(0x5e1e05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1e06:{NFSU2_TR(0x5e1e06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1e07:{NFSU2_TR(0x5e1e07);
w4(R+4,u32(0x88f298ull));
}
B5e1e0c:{NFSU2_TR(0x5e1e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1e11ull));
TAIL_STATIC(0x5d2e60u,5d2);
}
B5e1e11:L5e1e11:{c.instructions+=2;NFSU2_TR(0x5e1e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e1e13:{NFSU2_TR(0x5e1e13);
if(r1(R+518)){{goto L5e1e23;}}
}
B5e1e15:L5e1e15:{c.instructions+=2;NFSU2_TR(0x5e1e15);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
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
B5e1e1a:{NFSU2_TR(0x5e1e1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1e61;}}
}
B5e1e1c:L5e1e1c:{c.instructions+=3;NFSU2_TR(0x5e1e1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e1e1f:{NFSU2_TR(0x5e1e1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1e21:{NFSU2_TR(0x5e1e21);
if(r1(R+518)){{goto L5e1e61;}}
}
B5e1e23:L5e1e23:{c.instructions+=14;NFSU2_TR(0x5e1e23);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1e25:{NFSU2_TR(0x5e1e25);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1e27:{NFSU2_TR(0x5e1e27);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1e2a:{NFSU2_TR(0x5e1e2a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e1e2d:{NFSU2_TR(0x5e1e2d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e1e2f:{NFSU2_TR(0x5e1e2f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e1e31:{NFSU2_TR(0x5e1e31);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e1e33:{NFSU2_TR(0x5e1e33);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e1e35:{NFSU2_TR(0x5e1e35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e1e37:{NFSU2_TR(0x5e1e37);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e1e39:{NFSU2_TR(0x5e1e39);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5e1e3b:{NFSU2_TR(0x5e1e3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e1e3d:{NFSU2_TR(0x5e1e3d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e1e41:{NFSU2_TR(0x5e1e41);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e1e45:L5e1e45:{c.instructions+=6;NFSU2_TR(0x5e1e45);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e1e49:{NFSU2_TR(0x5e1e49);
__builtin_memmove((R+28),(R+24),4);
}
B5e1e4b:{NFSU2_TR(0x5e1e4b);
{u32 ea_=u32(u32(8013388u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e1e51:{NFSU2_TR(0x5e1e51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e1e53:{NFSU2_TR(0x5e1e53);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e1e56:{NFSU2_TR(0x5e1e56);
if(r1(R+514)){{goto L5e1e6a;}}
}
B5e1e58:L5e1e58:{c.instructions+=2;NFSU2_TR(0x5e1e58);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e1e5c:{NFSU2_TR(0x5e1e5c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1d23u);}goto L5e1d23;}
}
B5e1e61:L5e1e61:{c.instructions+=6;NFSU2_TR(0x5e1e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e1e62:{NFSU2_TR(0x5e1e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1e63:{NFSU2_TR(0x5e1e63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e1e64:{NFSU2_TR(0x5e1e64);
w1(R+0,u8(0x1ull));
}
B5e1e66:{NFSU2_TR(0x5e1e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1e67:{NFSU2_TR(0x5e1e67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1e6a:L5e1e6a:{c.instructions+=6;NFSU2_TR(0x5e1e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e1e6b:{NFSU2_TR(0x5e1e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e1e6c:{NFSU2_TR(0x5e1e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e1e6d:{NFSU2_TR(0x5e1e6d);
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
B5e1e6f:{NFSU2_TR(0x5e1e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e1e70:{NFSU2_TR(0x5e1e70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e1e80:L5e1e80:{c.instructions+=9;NFSU2_TR(0x5e1e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5e1e83:{NFSU2_TR(0x5e1e83);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B5e1e89:{NFSU2_TR(0x5e1e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1e8a:{NFSU2_TR(0x5e1e8a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e1e8c:{NFSU2_TR(0x5e1e8c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e1e8e:{NFSU2_TR(0x5e1e8e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e1e90:{NFSU2_TR(0x5e1e90);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1e94:{NFSU2_TR(0x5e1e94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1e98:{NFSU2_TR(0x5e1e98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e20dcu,5e2);}
}
B5e1e9e:L5e1e9e:{c.instructions+=10;NFSU2_TR(0x5e1e9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1e9f:{NFSU2_TR(0x5e1e9f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1ea0:{NFSU2_TR(0x5e1ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1ea4:{NFSU2_TR(0x5e1ea4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1ea5:{NFSU2_TR(0x5e1ea5);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B5e1eaa:{NFSU2_TR(0x5e1eaa);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e1eac:{NFSU2_TR(0x5e1eac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e1eae:{NFSU2_TR(0x5e1eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1eb2:{NFSU2_TR(0x5e1eb2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e1eb5:{NFSU2_TR(0x5e1eb5);
if(r1(R+518)){TAIL_STATIC(0x5e20a5u,5e2);}
}
B5e1ebb:L5e1ebb:{c.instructions+=3;NFSU2_TR(0x5e1ebb);
__builtin_memmove((R+0),(R+4),4);
}
B5e1ebd:{NFSU2_TR(0x5e1ebd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1ec0:{NFSU2_TR(0x5e1ec0);
if(r1(R+518)){{goto L5e1efc;}}
}
B5e1ec2:L5e1ec2:{c.instructions+=2;NFSU2_TR(0x5e1ec2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1ec3:{NFSU2_TR(0x5e1ec3);
if(r1(R+518)){{goto L5e1ef0;}}
}
B5e1ec5:L5e1ec5:{c.instructions+=2;NFSU2_TR(0x5e1ec5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1ec6:{NFSU2_TR(0x5e1ec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1edc;}}
}
B5e1ec8:L5e1ec8:{c.instructions+=3;NFSU2_TR(0x5e1ec8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e1ecb:{NFSU2_TR(0x5e1ecb);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e1ece:{NFSU2_TR(0x5e1ece);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1ed1:L5e1ed1:{c.instructions+=3;NFSU2_TR(0x5e1ed1);
__builtin_memmove((R+0),(R+518),1);
}
B5e1ed4:{NFSU2_TR(0x5e1ed4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1ed6:{NFSU2_TR(0x5e1ed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e20a5u,5e2);}
}
B5e1edc:L5e1edc:{c.instructions+=4;NFSU2_TR(0x5e1edc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5e1ee0:{NFSU2_TR(0x5e1ee0);
w4(R+0,u32(s32(s16(r2(R+28)))));
}
B5e1ee3:{NFSU2_TR(0x5e1ee3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e1ee5:{NFSU2_TR(0x5e1ee5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e1f12;}}
}
B5e1ee7:L5e1ee7:{c.instructions+=2;NFSU2_TR(0x5e1ee7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e1eee:{NFSU2_TR(0x5e1eee);
{goto L5e1f14;}
}
B5e1ef0:L5e1ef0:{c.instructions+=5;NFSU2_TR(0x5e1ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1ef3:{NFSU2_TR(0x5e1ef3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1ef6:{NFSU2_TR(0x5e1ef6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e1ef8:{NFSU2_TR(0x5e1ef8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1efa:{NFSU2_TR(0x5e1efa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1ed1u);}goto L5e1ed1;}
}
B5e1efc:L5e1efc:{c.instructions+=4;NFSU2_TR(0x5e1efc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e1eff:{NFSU2_TR(0x5e1eff);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e1f01:{NFSU2_TR(0x5e1f01);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1f03:{NFSU2_TR(0x5e1f03);
if(r1(R+518)){TAIL_STATIC(0x5e20a5u,5e2);}
}
B5e1f09:L5e1f09:{c.instructions+=2;NFSU2_TR(0x5e1f09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1f0b:{NFSU2_TR(0x5e1f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1edcu);}goto L5e1edc;}}
}
B5e1f0d:L5e1f0d:{c.instructions+=1;NFSU2_TR(0x5e1f0d);
TAIL_STATIC(0x5e20a5u,5e2);
}
B5e1f12:L5e1f12:{c.instructions+=1;NFSU2_TR(0x5e1f12);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e1f14:L5e1f14:{c.instructions+=10;NFSU2_TR(0x5e1f14);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e1f18:{NFSU2_TR(0x5e1f18);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B5e1f1b:{NFSU2_TR(0x5e1f1b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e1f1e:{NFSU2_TR(0x5e1f1e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e1f25:{NFSU2_TR(0x5e1f25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e1f29:{NFSU2_TR(0x5e1f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1f2c:{NFSU2_TR(0x5e1f2c);
__builtin_memmove((R+12),(R+4),1);
}
B5e1f2e:{NFSU2_TR(0x5e1f2e);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5e1f31:{NFSU2_TR(0x5e1f31);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1f34:{NFSU2_TR(0x5e1f34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1f3a;}}
}
B5e1f36:L5e1f36:{c.instructions+=2;NFSU2_TR(0x5e1f36);
__builtin_memmove((R+8),(R+0),4);
}
B5e1f38:{NFSU2_TR(0x5e1f38);
{goto L5e1f3e;}
}
B5e1f3a:L5e1f3a:{c.instructions+=1;NFSU2_TR(0x5e1f3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e1f3e:L5e1f3e:{c.instructions+=2;NFSU2_TR(0x5e1f3e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e1f41:{NFSU2_TR(0x5e1f41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1f47;}}
}
B5e1f43:L5e1f43:{c.instructions+=2;NFSU2_TR(0x5e1f43);
__builtin_memmove((R+0),(R+28),4);
}
B5e1f45:{NFSU2_TR(0x5e1f45);
{goto L5e1f4b;}
}
B5e1f47:L5e1f47:{c.instructions+=1;NFSU2_TR(0x5e1f47);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e1f4b:L5e1f4b:{c.instructions+=3;NFSU2_TR(0x5e1f4b);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e1f4e:{NFSU2_TR(0x5e1f4e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e1f50:{NFSU2_TR(0x5e1f50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e1f5b;}}
}
B5e1f52:L5e1f52:{c.instructions+=2;NFSU2_TR(0x5e1f52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e1f59:{NFSU2_TR(0x5e1f59);
{goto L5e1f5d;}
}
B5e1f5b:L5e1f5b:{c.instructions+=1;NFSU2_TR(0x5e1f5b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e1f5d:L5e1f5d:{c.instructions+=21;NFSU2_TR(0x5e1f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e1f61:{NFSU2_TR(0x5e1f61);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e1f64:{NFSU2_TR(0x5e1f64);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e1f67:{NFSU2_TR(0x5e1f67);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5e1f6e:{NFSU2_TR(0x5e1f6e);
__builtin_memmove((R+0),(R+4),4);
}
B5e1f70:{NFSU2_TR(0x5e1f70);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e1f73:{NFSU2_TR(0x5e1f73);
w1(R+0,u8(~u32(r1(R+0))));
}
B5e1f75:{NFSU2_TR(0x5e1f75);
__builtin_memmove((R+8),(R+4),4);
}
B5e1f77:{NFSU2_TR(0x5e1f77);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e1f7a:{NFSU2_TR(0x5e1f7a);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5e1f7c:{NFSU2_TR(0x5e1f7c);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5e1f7f:{NFSU2_TR(0x5e1f7f);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+0))));
}
B5e1f81:{NFSU2_TR(0x5e1f81);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1f85:{NFSU2_TR(0x5e1f85);
__builtin_memmove((R+0),(R+20),4);
}
B5e1f87:{NFSU2_TR(0x5e1f87);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1f8a:{NFSU2_TR(0x5e1f8a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e1f8e:{NFSU2_TR(0x5e1f8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1f93:{NFSU2_TR(0x5e1f93);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1f98:{NFSU2_TR(0x5e1f98);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1f9d:{NFSU2_TR(0x5e1f9d);
w1(R+8,u8(0x7ull));
}
B5e1f9f:{NFSU2_TR(0x5e1f9f);
if(r1(R+518)){{goto L5e1fa7;}}
}
B5e1fa1:L5e1fa1:{c.instructions+=2;NFSU2_TR(0x5e1fa1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1fa2:{NFSU2_TR(0x5e1fa2);
if(r1(R+518)){{goto L5e1fc3;}}
}
B5e1fa4:L5e1fa4:{c.instructions+=2;NFSU2_TR(0x5e1fa4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e1fa5:{NFSU2_TR(0x5e1fa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e1fa9;}}
}
B5e1fa7:L5e1fa7:{c.instructions+=1;NFSU2_TR(0x5e1fa7);
__builtin_memmove((R+8),(R+12),1);
}
B5e1fa9:L5e1fa9:{c.instructions+=3;NFSU2_TR(0x5e1fa9);
w4(R+0,u32(r1(R+8)));
}
B5e1fac:{NFSU2_TR(0x5e1fac);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e1faf:{NFSU2_TR(0x5e1faf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e2087u,5e2);}
}
B5e1fb5:L5e1fb5:{c.instructions+=2;NFSU2_TR(0x5e1fb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5e2124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5e1fbc:{NFSU2_TR(0x5e1fbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5e2118ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5e1fc3:L5e1fc3:{c.instructions+=4;NFSU2_TR(0x5e1fc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e1fc6:{NFSU2_TR(0x5e1fc6);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e1fc9:{NFSU2_TR(0x5e1fc9);
__builtin_memmove((R+8),(R+4),1);
}
B5e1fcb:{NFSU2_TR(0x5e1fcb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e1fa9u);}goto L5e1fa9;}
}
B5e1fcd:L5e1fcd:{c.instructions+=10;NFSU2_TR(0x5e1fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1fd1:{NFSU2_TR(0x5e1fd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e1fd5:{NFSU2_TR(0x5e1fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e1fd9:{NFSU2_TR(0x5e1fd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1fda:{NFSU2_TR(0x5e1fda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1fdb:{NFSU2_TR(0x5e1fdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1fdc:{NFSU2_TR(0x5e1fdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1fdd:{NFSU2_TR(0x5e1fdd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1fde:{NFSU2_TR(0x5e1fde);
__builtin_memmove((R+4),(R+28),4);
}
B5e1fe0:{NFSU2_TR(0x5e1fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e1fe5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e19e0u);}goto L5e19e0;}
}
B5e1fe5:L5e1fe5:{c.instructions+=2;NFSU2_TR(0x5e1fe5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e1fe7:{NFSU2_TR(0x5e1fe7);
if(r1(R+518)){TAIL_STATIC(0x5e2087u,5e2);}
}
B5e1fed:L5e1fed:{c.instructions+=2;NFSU2_TR(0x5e1fed);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e1ff2:{NFSU2_TR(0x5e1ff2);
TAIL_STATIC(0x5e205fu,5e2);
}
B5e1ff4:L5e1ff4:{c.instructions+=4;NFSU2_TR(0x5e1ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e1ff8:{NFSU2_TR(0x5e1ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e1ffc:{NFSU2_TR(0x5e1ffc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e1ffe:{NFSU2_TR(0x5e1ffe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x5e2000u,5e2);
}
XIT:NFSU2_TR_EXIT(0x5e1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
