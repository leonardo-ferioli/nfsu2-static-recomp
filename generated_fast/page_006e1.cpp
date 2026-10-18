#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_63e(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_6e0(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 page_6e1(Cpu& c){return body_6e1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e1000:goto L6e1000;
case 0x6e1005:c.instructions+=4;goto B6e1005;
case 0x6e1008:c.instructions+=3;goto B6e1008;
case 0x6e100b:c.instructions+=2;goto B6e100b;
case 0x6e100e:c.instructions+=1;goto B6e100e;
case 0x6e1010:goto L6e1010;
case 0x6e1016:c.instructions+=5;goto B6e1016;
case 0x6e1017:c.instructions+=4;goto B6e1017;
case 0x6e101d:c.instructions+=3;goto B6e101d;
case 0x6e101f:c.instructions+=2;goto B6e101f;
case 0x6e1020:c.instructions+=1;goto B6e1020;
case 0x6e1022:goto L6e1022;
case 0x6e1028:c.instructions+=2;goto B6e1028;
case 0x6e102a:c.instructions+=1;goto B6e102a;
case 0x6e102c:goto L6e102c;
case 0x6e102d:c.instructions+=1;goto B6e102d;
case 0x6e1032:goto L6e1032;
case 0x6e1035:c.instructions+=1;goto B6e1035;
case 0x6e1036:goto L6e1036;
case 0x6e1038:c.instructions+=2;goto B6e1038;
case 0x6e103d:c.instructions+=1;goto B6e103d;
case 0x6e103f:goto L6e103f;
case 0x6e1044:goto L6e1044;
case 0x6e1045:c.instructions+=2;goto B6e1045;
case 0x6e1046:c.instructions+=1;goto B6e1046;
case 0x6e104b:goto L6e104b;
case 0x6e104e:c.instructions+=1;goto B6e104e;
case 0x6e1050:goto L6e1050;
case 0x6e1053:c.instructions+=10;goto B6e1053;
case 0x6e1054:c.instructions+=9;goto B6e1054;
case 0x6e1055:c.instructions+=8;goto B6e1055;
case 0x6e1059:c.instructions+=7;goto B6e1059;
case 0x6e105b:c.instructions+=6;goto B6e105b;
case 0x6e105e:c.instructions+=5;goto B6e105e;
case 0x6e1060:c.instructions+=4;goto B6e1060;
case 0x6e1061:c.instructions+=3;goto B6e1061;
case 0x6e1065:c.instructions+=2;goto B6e1065;
case 0x6e1066:c.instructions+=1;goto B6e1066;
case 0x6e1069:goto L6e1069;
case 0x6e106d:c.instructions+=15;goto B6e106d;
case 0x6e1071:c.instructions+=14;goto B6e1071;
case 0x6e1075:c.instructions+=13;goto B6e1075;
case 0x6e1079:c.instructions+=12;goto B6e1079;
case 0x6e107d:c.instructions+=11;goto B6e107d;
case 0x6e1083:c.instructions+=10;goto B6e1083;
case 0x6e1087:c.instructions+=9;goto B6e1087;
case 0x6e108b:c.instructions+=8;goto B6e108b;
case 0x6e108f:c.instructions+=7;goto B6e108f;
case 0x6e1093:c.instructions+=6;goto B6e1093;
case 0x6e1099:c.instructions+=5;goto B6e1099;
case 0x6e109d:c.instructions+=4;goto B6e109d;
case 0x6e10a3:c.instructions+=3;goto B6e10a3;
case 0x6e10a5:c.instructions+=2;goto B6e10a5;
case 0x6e10a8:c.instructions+=1;goto B6e10a8;
case 0x6e10aa:goto L6e10aa;
case 0x6e10b2:goto L6e10b2;
case 0x6e10b6:c.instructions+=4;goto B6e10b6;
case 0x6e10bc:c.instructions+=3;goto B6e10bc;
case 0x6e10be:c.instructions+=2;goto B6e10be;
case 0x6e10c1:c.instructions+=1;goto B6e10c1;
case 0x6e10c3:goto L6e10c3;
case 0x6e10cb:goto L6e10cb;
case 0x6e10cf:c.instructions+=4;goto B6e10cf;
case 0x6e10d5:c.instructions+=3;goto B6e10d5;
case 0x6e10d7:c.instructions+=2;goto B6e10d7;
case 0x6e10da:c.instructions+=1;goto B6e10da;
case 0x6e10dc:goto L6e10dc;
case 0x6e10e4:goto L6e10e4;
case 0x6e10ea:c.instructions+=3;goto B6e10ea;
case 0x6e10ec:c.instructions+=2;goto B6e10ec;
case 0x6e10ef:c.instructions+=1;goto B6e10ef;
case 0x6e10f1:goto L6e10f1;
case 0x6e10f3:c.instructions+=1;goto B6e10f3;
case 0x6e10f9:goto L6e10f9;
case 0x6e10fd:c.instructions+=4;goto B6e10fd;
case 0x6e1101:c.instructions+=3;goto B6e1101;
case 0x6e1103:c.instructions+=2;goto B6e1103;
case 0x6e1106:c.instructions+=1;goto B6e1106;
case 0x6e1108:goto L6e1108;
case 0x6e110c:c.instructions+=2;goto B6e110c;
case 0x6e1112:c.instructions+=1;goto B6e1112;
case 0x6e1116:goto L6e1116;
case 0x6e111a:c.instructions+=4;goto B6e111a;
case 0x6e111e:c.instructions+=3;goto B6e111e;
case 0x6e1120:c.instructions+=2;goto B6e1120;
case 0x6e1123:c.instructions+=1;goto B6e1123;
case 0x6e1125:goto L6e1125;
case 0x6e1129:c.instructions+=2;goto B6e1129;
case 0x6e112f:c.instructions+=1;goto B6e112f;
case 0x6e1133:goto L6e1133;
case 0x6e1137:c.instructions+=4;goto B6e1137;
case 0x6e113b:c.instructions+=3;goto B6e113b;
case 0x6e113d:c.instructions+=2;goto B6e113d;
case 0x6e1140:c.instructions+=1;goto B6e1140;
case 0x6e1142:goto L6e1142;
case 0x6e1146:c.instructions+=2;goto B6e1146;
case 0x6e114c:c.instructions+=1;goto B6e114c;
case 0x6e1150:goto L6e1150;
case 0x6e1154:c.instructions+=3;goto B6e1154;
case 0x6e1156:c.instructions+=2;goto B6e1156;
case 0x6e1159:c.instructions+=1;goto B6e1159;
case 0x6e115b:goto L6e115b;
case 0x6e115d:c.instructions+=2;goto B6e115d;
case 0x6e1161:c.instructions+=1;goto B6e1161;
case 0x6e1167:goto L6e1167;
case 0x6e116b:c.instructions+=2;goto B6e116b;
case 0x6e116c:c.instructions+=1;goto B6e116c;
case 0x6e1171:goto L6e1171;
case 0x6e1175:c.instructions+=3;goto B6e1175;
case 0x6e1177:c.instructions+=2;goto B6e1177;
case 0x6e117a:c.instructions+=1;goto B6e117a;
case 0x6e117f:goto L6e117f;
case 0x6e1183:c.instructions+=3;goto B6e1183;
case 0x6e1185:c.instructions+=2;goto B6e1185;
case 0x6e1188:c.instructions+=1;goto B6e1188;
case 0x6e118d:goto L6e118d;
case 0x6e118f:c.instructions+=4;goto B6e118f;
case 0x6e1191:c.instructions+=3;goto B6e1191;
case 0x6e1194:c.instructions+=2;goto B6e1194;
case 0x6e1197:c.instructions+=1;goto B6e1197;
case 0x6e119c:goto L6e119c;
case 0x6e11a0:c.instructions+=14;goto B6e11a0;
case 0x6e11a4:c.instructions+=13;goto B6e11a4;
case 0x6e11a8:c.instructions+=12;goto B6e11a8;
case 0x6e11aa:c.instructions+=11;goto B6e11aa;
case 0x6e11ad:c.instructions+=10;goto B6e11ad;
case 0x6e11b1:c.instructions+=9;goto B6e11b1;
case 0x6e11b5:c.instructions+=8;goto B6e11b5;
case 0x6e11b9:c.instructions+=7;goto B6e11b9;
case 0x6e11bc:c.instructions+=6;goto B6e11bc;
case 0x6e11bf:c.instructions+=5;goto B6e11bf;
case 0x6e11c2:c.instructions+=4;goto B6e11c2;
case 0x6e11c3:c.instructions+=3;goto B6e11c3;
case 0x6e11c5:c.instructions+=2;goto B6e11c5;
case 0x6e11c8:c.instructions+=1;goto B6e11c8;
case 0x6e11ca:goto L6e11ca;
case 0x6e11ce:c.instructions+=5;goto B6e11ce;
case 0x6e11d0:c.instructions+=4;goto B6e11d0;
case 0x6e11d4:c.instructions+=3;goto B6e11d4;
case 0x6e11d6:c.instructions+=2;goto B6e11d6;
case 0x6e11d9:c.instructions+=1;goto B6e11d9;
case 0x6e11db:goto L6e11db;
case 0x6e11dd:c.instructions+=1;goto B6e11dd;
case 0x6e11e2:goto L6e11e2;
case 0x6e11e5:c.instructions+=2;goto B6e11e5;
case 0x6e11e7:c.instructions+=1;goto B6e11e7;
case 0x6e11ed:goto L6e11ed;
case 0x6e11f3:c.instructions+=60;goto B6e11f3;
case 0x6e11f4:c.instructions+=59;goto B6e11f4;
case 0x6e11f8:c.instructions+=58;goto B6e11f8;
case 0x6e11fa:c.instructions+=57;goto B6e11fa;
case 0x6e11fe:c.instructions+=56;goto B6e11fe;
case 0x6e1204:c.instructions+=55;goto B6e1204;
case 0x6e1206:c.instructions+=54;goto B6e1206;
case 0x6e120a:c.instructions+=53;goto B6e120a;
case 0x6e120c:c.instructions+=52;goto B6e120c;
case 0x6e1210:c.instructions+=51;goto B6e1210;
case 0x6e1216:c.instructions+=50;goto B6e1216;
case 0x6e121a:c.instructions+=49;goto B6e121a;
case 0x6e121e:c.instructions+=48;goto B6e121e;
case 0x6e1224:c.instructions+=47;goto B6e1224;
case 0x6e1228:c.instructions+=46;goto B6e1228;
case 0x6e122e:c.instructions+=45;goto B6e122e;
case 0x6e1232:c.instructions+=44;goto B6e1232;
case 0x6e1236:c.instructions+=43;goto B6e1236;
case 0x6e123a:c.instructions+=42;goto B6e123a;
case 0x6e123e:c.instructions+=41;goto B6e123e;
case 0x6e1244:c.instructions+=40;goto B6e1244;
case 0x6e1248:c.instructions+=39;goto B6e1248;
case 0x6e124c:c.instructions+=38;goto B6e124c;
case 0x6e1250:c.instructions+=37;goto B6e1250;
case 0x6e1254:c.instructions+=36;goto B6e1254;
case 0x6e125a:c.instructions+=35;goto B6e125a;
case 0x6e125e:c.instructions+=34;goto B6e125e;
case 0x6e1262:c.instructions+=33;goto B6e1262;
case 0x6e1266:c.instructions+=32;goto B6e1266;
case 0x6e126c:c.instructions+=31;goto B6e126c;
case 0x6e1270:c.instructions+=30;goto B6e1270;
case 0x6e1274:c.instructions+=29;goto B6e1274;
case 0x6e1276:c.instructions+=28;goto B6e1276;
case 0x6e127a:c.instructions+=27;goto B6e127a;
case 0x6e127e:c.instructions+=26;goto B6e127e;
case 0x6e1280:c.instructions+=25;goto B6e1280;
case 0x6e1286:c.instructions+=24;goto B6e1286;
case 0x6e128c:c.instructions+=23;goto B6e128c;
case 0x6e1290:c.instructions+=22;goto B6e1290;
case 0x6e1294:c.instructions+=21;goto B6e1294;
case 0x6e1296:c.instructions+=20;goto B6e1296;
case 0x6e129c:c.instructions+=19;goto B6e129c;
case 0x6e12a2:c.instructions+=18;goto B6e12a2;
case 0x6e12a6:c.instructions+=17;goto B6e12a6;
case 0x6e12aa:c.instructions+=16;goto B6e12aa;
case 0x6e12ae:c.instructions+=15;goto B6e12ae;
case 0x6e12b4:c.instructions+=14;goto B6e12b4;
case 0x6e12b8:c.instructions+=13;goto B6e12b8;
case 0x6e12bc:c.instructions+=12;goto B6e12bc;
case 0x6e12c0:c.instructions+=11;goto B6e12c0;
case 0x6e12c6:c.instructions+=10;goto B6e12c6;
case 0x6e12ca:c.instructions+=9;goto B6e12ca;
case 0x6e12ce:c.instructions+=8;goto B6e12ce;
case 0x6e12d2:c.instructions+=7;goto B6e12d2;
case 0x6e12d8:c.instructions+=6;goto B6e12d8;
case 0x6e12dc:c.instructions+=5;goto B6e12dc;
case 0x6e12e0:c.instructions+=4;goto B6e12e0;
case 0x6e12e6:c.instructions+=3;goto B6e12e6;
case 0x6e12e7:c.instructions+=2;goto B6e12e7;
case 0x6e12ea:c.instructions+=1;goto B6e12ea;
case 0x6e12ed:goto L6e12ed;
case 0x6e12ef:c.instructions+=4;goto B6e12ef;
case 0x6e12f2:c.instructions+=3;goto B6e12f2;
case 0x6e12f5:c.instructions+=2;goto B6e12f5;
case 0x6e12f8:c.instructions+=1;goto B6e12f8;
case 0x6e12fb:goto L6e12fb;
case 0x6e1300:c.instructions+=15;goto B6e1300;
case 0x6e1302:c.instructions+=14;goto B6e1302;
case 0x6e1303:c.instructions+=13;goto B6e1303;
case 0x6e1309:c.instructions+=12;goto B6e1309;
case 0x6e130f:c.instructions+=11;goto B6e130f;
case 0x6e1315:c.instructions+=10;goto B6e1315;
case 0x6e131b:c.instructions+=9;goto B6e131b;
case 0x6e1321:c.instructions+=8;goto B6e1321;
case 0x6e1327:c.instructions+=7;goto B6e1327;
case 0x6e132d:c.instructions+=6;goto B6e132d;
case 0x6e1333:c.instructions+=5;goto B6e1333;
case 0x6e1339:c.instructions+=4;goto B6e1339;
case 0x6e133f:c.instructions+=3;goto B6e133f;
case 0x6e1340:c.instructions+=2;goto B6e1340;
case 0x6e1343:c.instructions+=1;goto B6e1343;
case 0x6e1350:goto L6e1350;
case 0x6e1351:c.instructions+=4;goto B6e1351;
case 0x6e1354:c.instructions+=3;goto B6e1354;
case 0x6e1357:c.instructions+=2;goto B6e1357;
case 0x6e1359:c.instructions+=1;goto B6e1359;
case 0x6e135b:goto L6e135b;
case 0x6e1361:goto L6e1361;
case 0x6e1365:c.instructions+=5;goto B6e1365;
case 0x6e1367:c.instructions+=4;goto B6e1367;
case 0x6e136a:c.instructions+=3;goto B6e136a;
case 0x6e136c:c.instructions+=2;goto B6e136c;
case 0x6e136f:c.instructions+=1;goto B6e136f;
case 0x6e1371:goto L6e1371;
case 0x6e1377:goto L6e1377;
case 0x6e137b:c.instructions+=5;goto B6e137b;
case 0x6e137d:c.instructions+=4;goto B6e137d;
case 0x6e1380:c.instructions+=3;goto B6e1380;
case 0x6e1382:c.instructions+=2;goto B6e1382;
case 0x6e1385:c.instructions+=1;goto B6e1385;
case 0x6e1387:goto L6e1387;
case 0x6e138d:goto L6e138d;
case 0x6e1391:c.instructions+=5;goto B6e1391;
case 0x6e1393:c.instructions+=4;goto B6e1393;
case 0x6e1396:c.instructions+=3;goto B6e1396;
case 0x6e1398:c.instructions+=2;goto B6e1398;
case 0x6e139b:c.instructions+=1;goto B6e139b;
case 0x6e139d:goto L6e139d;
case 0x6e13a3:goto L6e13a3;
case 0x6e13a7:c.instructions+=9;goto B6e13a7;
case 0x6e13a9:c.instructions+=8;goto B6e13a9;
case 0x6e13ac:c.instructions+=7;goto B6e13ac;
case 0x6e13b0:c.instructions+=6;goto B6e13b0;
case 0x6e13b2:c.instructions+=5;goto B6e13b2;
case 0x6e13b5:c.instructions+=4;goto B6e13b5;
case 0x6e13b9:c.instructions+=3;goto B6e13b9;
case 0x6e13bb:c.instructions+=2;goto B6e13bb;
case 0x6e13bc:c.instructions+=1;goto B6e13bc;
case 0x6e13c0:goto L6e13c0;
case 0x6e13c1:c.instructions+=11;goto B6e13c1;
case 0x6e13c5:c.instructions+=10;goto B6e13c5;
case 0x6e13c6:c.instructions+=9;goto B6e13c6;
case 0x6e13c8:c.instructions+=8;goto B6e13c8;
case 0x6e13cc:c.instructions+=7;goto B6e13cc;
case 0x6e13cf:c.instructions+=6;goto B6e13cf;
case 0x6e13d2:c.instructions+=5;goto B6e13d2;
case 0x6e13d4:c.instructions+=4;goto B6e13d4;
case 0x6e13d5:c.instructions+=3;goto B6e13d5;
case 0x6e13d6:c.instructions+=2;goto B6e13d6;
case 0x6e13d8:c.instructions+=1;goto B6e13d8;
case 0x6e13da:goto L6e13da;
case 0x6e13e0:goto L6e13e0;
case 0x6e13e3:c.instructions+=5;goto B6e13e3;
case 0x6e13e6:c.instructions+=4;goto B6e13e6;
case 0x6e13e8:c.instructions+=3;goto B6e13e8;
case 0x6e13ec:c.instructions+=2;goto B6e13ec;
case 0x6e13ef:c.instructions+=1;goto B6e13ef;
case 0x6e13f1:goto L6e13f1;
case 0x6e13f7:goto L6e13f7;
case 0x6e13fa:c.instructions+=4;goto B6e13fa;
case 0x6e13fc:c.instructions+=3;goto B6e13fc;
case 0x6e13ff:c.instructions+=2;goto B6e13ff;
case 0x6e1400:c.instructions+=1;goto B6e1400;
case 0x6e1405:goto L6e1405;
case 0x6e1409:c.instructions+=9;goto B6e1409;
case 0x6e140d:c.instructions+=8;goto B6e140d;
case 0x6e1417:c.instructions+=7;goto B6e1417;
case 0x6e1421:c.instructions+=6;goto B6e1421;
case 0x6e1427:c.instructions+=5;goto B6e1427;
case 0x6e142d:c.instructions+=4;goto B6e142d;
case 0x6e1434:c.instructions+=3;goto B6e1434;
case 0x6e1435:c.instructions+=2;goto B6e1435;
case 0x6e1436:c.instructions+=1;goto B6e1436;
case 0x6e1440:goto L6e1440;
case 0x6e1441:c.instructions+=10;goto B6e1441;
case 0x6e1443:c.instructions+=9;goto B6e1443;
case 0x6e1446:c.instructions+=8;goto B6e1446;
case 0x6e1449:c.instructions+=7;goto B6e1449;
case 0x6e144a:c.instructions+=6;goto B6e144a;
case 0x6e144b:c.instructions+=5;goto B6e144b;
case 0x6e144d:c.instructions+=4;goto B6e144d;
case 0x6e1454:c.instructions+=3;goto B6e1454;
case 0x6e1457:c.instructions+=2;goto B6e1457;
case 0x6e1458:c.instructions+=1;goto B6e1458;
case 0x6e145d:goto L6e145d;
case 0x6e145f:c.instructions+=1;goto B6e145f;
case 0x6e1461:goto L6e1461;
case 0x6e1464:c.instructions+=1;goto B6e1464;
case 0x6e1469:goto L6e1469;
case 0x6e146f:c.instructions+=2;goto B6e146f;
case 0x6e1471:c.instructions+=1;goto B6e1471;
case 0x6e1473:goto L6e1473;
case 0x6e1476:c.instructions+=1;goto B6e1476;
case 0x6e147b:goto L6e147b;
case 0x6e147e:c.instructions+=3;goto B6e147e;
case 0x6e1481:c.instructions+=2;goto B6e1481;
case 0x6e1483:c.instructions+=1;goto B6e1483;
case 0x6e1488:goto L6e1488;
case 0x6e148b:c.instructions+=1;goto B6e148b;
case 0x6e148e:goto L6e148e;
case 0x6e1491:c.instructions+=2;goto B6e1491;
case 0x6e1493:c.instructions+=1;goto B6e1493;
case 0x6e1495:goto L6e1495;
case 0x6e149c:goto L6e149c;
case 0x6e149f:c.instructions+=3;goto B6e149f;
case 0x6e14a2:c.instructions+=2;goto B6e14a2;
case 0x6e14a3:c.instructions+=1;goto B6e14a3;
case 0x6e14a8:goto L6e14a8;
case 0x6e14ab:c.instructions+=4;goto B6e14ab;
case 0x6e14ae:c.instructions+=3;goto B6e14ae;
case 0x6e14b0:c.instructions+=2;goto B6e14b0;
case 0x6e14b2:c.instructions+=1;goto B6e14b2;
case 0x6e14b8:goto L6e14b8;
case 0x6e14ba:goto L6e14ba;
case 0x6e14bd:c.instructions+=6;goto B6e14bd;
case 0x6e14c0:c.instructions+=5;goto B6e14c0;
case 0x6e14c5:c.instructions+=4;goto B6e14c5;
case 0x6e14c7:c.instructions+=3;goto B6e14c7;
case 0x6e14c8:c.instructions+=2;goto B6e14c8;
case 0x6e14c9:c.instructions+=1;goto B6e14c9;
case 0x6e14ca:goto L6e14ca;
case 0x6e14cd:goto L6e14cd;
case 0x6e14d2:c.instructions+=3;goto B6e14d2;
case 0x6e14d4:c.instructions+=2;goto B6e14d4;
case 0x6e14d5:c.instructions+=1;goto B6e14d5;
case 0x6e14db:goto L6e14db;
case 0x6e14e0:c.instructions+=5;goto B6e14e0;
case 0x6e14e2:c.instructions+=4;goto B6e14e2;
case 0x6e14e5:c.instructions+=3;goto B6e14e5;
case 0x6e14e6:c.instructions+=2;goto B6e14e6;
case 0x6e14e7:c.instructions+=1;goto B6e14e7;
case 0x6e14ed:goto L6e14ed;
case 0x6e14f0:c.instructions+=4;goto B6e14f0;
case 0x6e14f1:c.instructions+=3;goto B6e14f1;
case 0x6e14f5:c.instructions+=2;goto B6e14f5;
case 0x6e14fc:c.instructions+=1;goto B6e14fc;
case 0x6e1501:goto L6e1501;
case 0x6e1504:c.instructions+=3;goto B6e1504;
case 0x6e1505:c.instructions+=2;goto B6e1505;
case 0x6e1509:c.instructions+=1;goto B6e1509;
case 0x6e150e:goto L6e150e;
case 0x6e1514:c.instructions+=2;goto B6e1514;
case 0x6e1519:c.instructions+=1;goto B6e1519;
case 0x6e151d:goto L6e151d;
case 0x6e151f:goto L6e151f;
case 0x6e1524:c.instructions+=2;goto B6e1524;
case 0x6e1527:c.instructions+=1;goto B6e1527;
case 0x6e152c:goto L6e152c;
case 0x6e152e:goto L6e152e;
case 0x6e1533:c.instructions+=2;goto B6e1533;
case 0x6e1536:c.instructions+=1;goto B6e1536;
case 0x6e153b:goto L6e153b;
case 0x6e153d:goto L6e153d;
case 0x6e1542:c.instructions+=2;goto B6e1542;
case 0x6e1546:c.instructions+=1;goto B6e1546;
case 0x6e154b:goto L6e154b;
case 0x6e154d:goto L6e154d;
case 0x6e1550:c.instructions+=3;goto B6e1550;
case 0x6e1553:c.instructions+=2;goto B6e1553;
case 0x6e1555:c.instructions+=1;goto B6e1555;
case 0x6e1557:goto L6e1557;
case 0x6e155d:goto L6e155d;
case 0x6e1563:c.instructions+=5;goto B6e1563;
case 0x6e1566:c.instructions+=4;goto B6e1566;
case 0x6e1568:c.instructions+=3;goto B6e1568;
case 0x6e156a:c.instructions+=2;goto B6e156a;
case 0x6e156d:c.instructions+=1;goto B6e156d;
case 0x6e156f:goto L6e156f;
case 0x6e1575:goto L6e1575;
case 0x6e157b:c.instructions+=7;goto B6e157b;
case 0x6e157d:c.instructions+=6;goto B6e157d;
case 0x6e1581:c.instructions+=5;goto B6e1581;
case 0x6e1587:c.instructions+=4;goto B6e1587;
case 0x6e1589:c.instructions+=3;goto B6e1589;
case 0x6e158b:c.instructions+=2;goto B6e158b;
case 0x6e158e:c.instructions+=1;goto B6e158e;
case 0x6e1590:goto L6e1590;
case 0x6e1596:c.instructions+=4;goto B6e1596;
case 0x6e159a:c.instructions+=3;goto B6e159a;
case 0x6e159c:c.instructions+=2;goto B6e159c;
case 0x6e159f:c.instructions+=1;goto B6e159f;
case 0x6e15a1:goto L6e15a1;
case 0x6e15a7:c.instructions+=16;goto B6e15a7;
case 0x6e15ab:c.instructions+=15;goto B6e15ab;
case 0x6e15b1:c.instructions+=14;goto B6e15b1;
case 0x6e15b7:c.instructions+=13;goto B6e15b7;
case 0x6e15b9:c.instructions+=12;goto B6e15b9;
case 0x6e15c0:c.instructions+=11;goto B6e15c0;
case 0x6e15c6:c.instructions+=10;goto B6e15c6;
case 0x6e15c8:c.instructions+=9;goto B6e15c8;
case 0x6e15ce:c.instructions+=8;goto B6e15ce;
case 0x6e15d2:c.instructions+=7;goto B6e15d2;
case 0x6e15d8:c.instructions+=6;goto B6e15d8;
case 0x6e15d9:c.instructions+=5;goto B6e15d9;
case 0x6e15da:c.instructions+=4;goto B6e15da;
case 0x6e15db:c.instructions+=3;goto B6e15db;
case 0x6e15dd:c.instructions+=2;goto B6e15dd;
case 0x6e15de:c.instructions+=1;goto B6e15de;
case 0x6e15df:goto L6e15df;
case 0x6e15e1:c.instructions+=1;goto B6e15e1;
case 0x6e15e7:goto L6e15e7;
case 0x6e15ed:c.instructions+=7;goto B6e15ed;
case 0x6e15f3:c.instructions+=6;goto B6e15f3;
case 0x6e15f9:c.instructions+=5;goto B6e15f9;
case 0x6e15fb:c.instructions+=4;goto B6e15fb;
case 0x6e15fc:c.instructions+=3;goto B6e15fc;
case 0x6e15fd:c.instructions+=2;goto B6e15fd;
case 0x6e15fe:c.instructions+=1;goto B6e15fe;
case 0x6e1603:goto L6e1603;
case 0x6e1604:c.instructions+=7;goto B6e1604;
case 0x6e1606:c.instructions+=6;goto B6e1606;
case 0x6e1607:c.instructions+=5;goto B6e1607;
case 0x6e160e:c.instructions+=4;goto B6e160e;
case 0x6e160f:c.instructions+=3;goto B6e160f;
case 0x6e1611:c.instructions+=2;goto B6e1611;
case 0x6e1612:c.instructions+=1;goto B6e1612;
case 0x6e1620:goto L6e1620;
case 0x6e1621:c.instructions+=7;goto B6e1621;
case 0x6e1622:c.instructions+=6;goto B6e1622;
case 0x6e1624:c.instructions+=5;goto B6e1624;
case 0x6e1627:c.instructions+=4;goto B6e1627;
case 0x6e162a:c.instructions+=3;goto B6e162a;
case 0x6e162c:c.instructions+=2;goto B6e162c;
case 0x6e162d:c.instructions+=1;goto B6e162d;
case 0x6e1632:goto L6e1632;
case 0x6e1637:c.instructions+=3;goto B6e1637;
case 0x6e1639:c.instructions+=2;goto B6e1639;
case 0x6e163a:c.instructions+=1;goto B6e163a;
case 0x6e1640:goto L6e1640;
case 0x6e1646:c.instructions+=2;goto B6e1646;
case 0x6e164c:c.instructions+=1;goto B6e164c;
case 0x6e164e:goto L6e164e;
case 0x6e1651:c.instructions+=2;goto B6e1651;
case 0x6e1653:c.instructions+=1;goto B6e1653;
case 0x6e1655:goto L6e1655;
case 0x6e1658:c.instructions+=1;goto B6e1658;
case 0x6e165a:goto L6e165a;
case 0x6e165f:goto L6e165f;
case 0x6e1662:c.instructions+=3;goto B6e1662;
case 0x6e1663:c.instructions+=2;goto B6e1663;
case 0x6e1664:c.instructions+=1;goto B6e1664;
case 0x6e1670:goto L6e1670;
case 0x6e1672:c.instructions+=4;goto B6e1672;
case 0x6e1678:c.instructions+=3;goto B6e1678;
case 0x6e167c:c.instructions+=2;goto B6e167c;
case 0x6e167e:c.instructions+=1;goto B6e167e;
case 0x6e1690:goto L6e1690;
case 0x6e1692:c.instructions+=4;goto B6e1692;
case 0x6e1698:c.instructions+=3;goto B6e1698;
case 0x6e169c:c.instructions+=2;goto B6e169c;
case 0x6e169e:c.instructions+=1;goto B6e169e;
case 0x6e16b0:goto L6e16b0;
case 0x6e16b2:c.instructions+=4;goto B6e16b2;
case 0x6e16b8:c.instructions+=3;goto B6e16b8;
case 0x6e16bc:c.instructions+=2;goto B6e16bc;
case 0x6e16be:c.instructions+=1;goto B6e16be;
case 0x6e16d0:goto L6e16d0;
case 0x6e16d2:c.instructions+=4;goto B6e16d2;
case 0x6e16d8:c.instructions+=3;goto B6e16d8;
case 0x6e16dc:c.instructions+=2;goto B6e16dc;
case 0x6e16de:c.instructions+=1;goto B6e16de;
case 0x6e16f0:goto L6e16f0;
case 0x6e16f2:c.instructions+=3;goto B6e16f2;
case 0x6e16f6:c.instructions+=2;goto B6e16f6;
case 0x6e16f8:c.instructions+=1;goto B6e16f8;
case 0x6e1700:goto L6e1700;
case 0x6e1702:c.instructions+=9;goto B6e1702;
case 0x6e1704:c.instructions+=8;goto B6e1704;
case 0x6e1707:c.instructions+=7;goto B6e1707;
case 0x6e170a:c.instructions+=6;goto B6e170a;
case 0x6e1710:c.instructions+=5;goto B6e1710;
case 0x6e1716:c.instructions+=4;goto B6e1716;
case 0x6e171a:c.instructions+=3;goto B6e171a;
case 0x6e1724:c.instructions+=2;goto B6e1724;
case 0x6e172a:c.instructions+=1;goto B6e172a;
case 0x6e1730:goto L6e1730;
case 0x6e1731:c.instructions+=6;goto B6e1731;
case 0x6e1733:c.instructions+=5;goto B6e1733;
case 0x6e1735:c.instructions+=4;goto B6e1735;
case 0x6e1736:c.instructions+=3;goto B6e1736;
case 0x6e1738:c.instructions+=2;goto B6e1738;
case 0x6e173a:c.instructions+=1;goto B6e173a;
case 0x6e1740:goto L6e1740;
case 0x6e1741:c.instructions+=2;goto B6e1741;
case 0x6e1745:c.instructions+=1;goto B6e1745;
case 0x6e1746:goto L6e1746;
case 0x6e1749:c.instructions+=5;goto B6e1749;
case 0x6e174c:c.instructions+=4;goto B6e174c;
case 0x6e174f:c.instructions+=3;goto B6e174f;
case 0x6e1752:c.instructions+=2;goto B6e1752;
case 0x6e1755:c.instructions+=1;goto B6e1755;
case 0x6e1757:goto L6e1757;
case 0x6e175e:goto L6e175e;
case 0x6e1761:c.instructions+=3;goto B6e1761;
case 0x6e1768:c.instructions+=2;goto B6e1768;
case 0x6e176a:c.instructions+=1;goto B6e176a;
case 0x6e176c:goto L6e176c;
case 0x6e176f:c.instructions+=3;goto B6e176f;
case 0x6e1770:c.instructions+=2;goto B6e1770;
case 0x6e1773:c.instructions+=1;goto B6e1773;
case 0x6e1778:goto L6e1778;
case 0x6e177b:c.instructions+=2;goto B6e177b;
case 0x6e1782:c.instructions+=1;goto B6e1782;
case 0x6e1787:goto L6e1787;
case 0x6e1789:goto L6e1789;
case 0x6e178b:c.instructions+=1;goto B6e178b;
case 0x6e1790:goto L6e1790;
case 0x6e1792:goto L6e1792;
case 0x6e1794:c.instructions+=3;goto B6e1794;
case 0x6e1797:c.instructions+=2;goto B6e1797;
case 0x6e179a:c.instructions+=1;goto B6e179a;
case 0x6e179c:goto L6e179c;
case 0x6e179f:c.instructions+=2;goto B6e179f;
case 0x6e17a0:c.instructions+=1;goto B6e17a0;
case 0x6e17a2:goto L6e17a2;
case 0x6e17a5:c.instructions+=2;goto B6e17a5;
case 0x6e17a6:c.instructions+=1;goto B6e17a6;
case 0x6e17ab:goto L6e17ab;
case 0x6e17ad:goto L6e17ad;
case 0x6e17b0:c.instructions+=1;goto B6e17b0;
case 0x6e17b1:goto L6e17b1;
case 0x6e17b6:goto L6e17b6;
case 0x6e17b9:goto L6e17b9;
case 0x6e17bb:c.instructions+=3;goto B6e17bb;
case 0x6e17bc:c.instructions+=2;goto B6e17bc;
case 0x6e17be:c.instructions+=1;goto B6e17be;
case 0x6e17c0:goto L6e17c0;
case 0x6e17c1:c.instructions+=1;goto B6e17c1;
case 0x6e17c2:goto L6e17c2;
case 0x6e17c3:c.instructions+=2;goto B6e17c3;
case 0x6e17c4:c.instructions+=1;goto B6e17c4;
case 0x6e17e0:goto L6e17e0;
case 0x6e17e1:c.instructions+=6;goto B6e17e1;
case 0x6e17e3:c.instructions+=5;goto B6e17e3;
case 0x6e17e5:c.instructions+=4;goto B6e17e5;
case 0x6e17e6:c.instructions+=3;goto B6e17e6;
case 0x6e17e8:c.instructions+=2;goto B6e17e8;
case 0x6e17ea:c.instructions+=1;goto B6e17ea;
case 0x6e17ec:goto L6e17ec;
case 0x6e17ed:c.instructions+=2;goto B6e17ed;
case 0x6e17f1:c.instructions+=1;goto B6e17f1;
case 0x6e17f2:goto L6e17f2;
case 0x6e17f5:c.instructions+=5;goto B6e17f5;
case 0x6e17f8:c.instructions+=4;goto B6e17f8;
case 0x6e17fb:c.instructions+=3;goto B6e17fb;
case 0x6e17fe:c.instructions+=2;goto B6e17fe;
case 0x6e1801:c.instructions+=1;goto B6e1801;
case 0x6e1803:goto L6e1803;
case 0x6e180a:goto L6e180a;
case 0x6e180d:c.instructions+=3;goto B6e180d;
case 0x6e1814:c.instructions+=2;goto B6e1814;
case 0x6e1816:c.instructions+=1;goto B6e1816;
case 0x6e1818:goto L6e1818;
case 0x6e181b:c.instructions+=3;goto B6e181b;
case 0x6e181c:c.instructions+=2;goto B6e181c;
case 0x6e181f:c.instructions+=1;goto B6e181f;
case 0x6e1824:goto L6e1824;
case 0x6e1827:c.instructions+=2;goto B6e1827;
case 0x6e182e:c.instructions+=1;goto B6e182e;
case 0x6e1833:goto L6e1833;
case 0x6e1835:goto L6e1835;
case 0x6e1837:c.instructions+=3;goto B6e1837;
case 0x6e183a:c.instructions+=2;goto B6e183a;
case 0x6e183d:c.instructions+=1;goto B6e183d;
case 0x6e183f:goto L6e183f;
case 0x6e1842:c.instructions+=2;goto B6e1842;
case 0x6e1843:c.instructions+=1;goto B6e1843;
case 0x6e1845:goto L6e1845;
case 0x6e1848:c.instructions+=2;goto B6e1848;
case 0x6e1849:c.instructions+=1;goto B6e1849;
case 0x6e184e:goto L6e184e;
case 0x6e1850:goto L6e1850;
case 0x6e1853:c.instructions+=1;goto B6e1853;
case 0x6e1854:goto L6e1854;
case 0x6e1859:goto L6e1859;
case 0x6e185c:goto L6e185c;
case 0x6e185e:c.instructions+=3;goto B6e185e;
case 0x6e185f:c.instructions+=2;goto B6e185f;
case 0x6e1861:c.instructions+=1;goto B6e1861;
case 0x6e1863:goto L6e1863;
case 0x6e1864:c.instructions+=1;goto B6e1864;
case 0x6e1865:goto L6e1865;
case 0x6e1866:c.instructions+=2;goto B6e1866;
case 0x6e1867:c.instructions+=1;goto B6e1867;
case 0x6e1890:goto L6e1890;
case 0x6e1893:c.instructions+=3;goto B6e1893;
case 0x6e1897:c.instructions+=2;goto B6e1897;
case 0x6e189a:c.instructions+=1;goto B6e189a;
case 0x6e18a0:goto L6e18a0;
case 0x6e18a3:c.instructions+=1;goto B6e18a3;
case 0x6e18b0:goto L6e18b0;
case 0x6e18b3:c.instructions+=11;goto B6e18b3;
case 0x6e18b6:c.instructions+=10;goto B6e18b6;
case 0x6e18b9:c.instructions+=9;goto B6e18b9;
case 0x6e18bc:c.instructions+=8;goto B6e18bc;
case 0x6e18c0:c.instructions+=7;goto B6e18c0;
case 0x6e18c2:c.instructions+=6;goto B6e18c2;
case 0x6e18c5:c.instructions+=5;goto B6e18c5;
case 0x6e18c9:c.instructions+=4;goto B6e18c9;
case 0x6e18cc:c.instructions+=3;goto B6e18cc;
case 0x6e18cf:c.instructions+=2;goto B6e18cf;
case 0x6e18d0:c.instructions+=1;goto B6e18d0;
case 0x6e18d5:goto L6e18d5;
case 0x6e18e0:goto L6e18e0;
case 0x6e18e4:c.instructions+=8;goto B6e18e4;
case 0x6e18e7:c.instructions+=7;goto B6e18e7;
case 0x6e18e8:c.instructions+=6;goto B6e18e8;
case 0x6e18eb:c.instructions+=5;goto B6e18eb;
case 0x6e18ee:c.instructions+=4;goto B6e18ee;
case 0x6e18f1:c.instructions+=3;goto B6e18f1;
case 0x6e18f5:c.instructions+=2;goto B6e18f5;
case 0x6e18f8:c.instructions+=1;goto B6e18f8;
case 0x6e18fd:goto L6e18fd;
case 0x6e1900:goto L6e1900;
case 0x6e1901:c.instructions+=6;goto B6e1901;
case 0x6e1903:c.instructions+=5;goto B6e1903;
case 0x6e1905:c.instructions+=4;goto B6e1905;
case 0x6e1906:c.instructions+=3;goto B6e1906;
case 0x6e1908:c.instructions+=2;goto B6e1908;
case 0x6e190a:c.instructions+=1;goto B6e190a;
case 0x6e190c:goto L6e190c;
case 0x6e190d:c.instructions+=2;goto B6e190d;
case 0x6e190e:c.instructions+=1;goto B6e190e;
case 0x6e1910:goto L6e1910;
case 0x6e1913:c.instructions+=3;goto B6e1913;
case 0x6e1916:c.instructions+=2;goto B6e1916;
case 0x6e1918:c.instructions+=1;goto B6e1918;
case 0x6e191a:goto L6e191a;
case 0x6e191d:c.instructions+=2;goto B6e191d;
case 0x6e1920:c.instructions+=1;goto B6e1920;
case 0x6e1922:goto L6e1922;
case 0x6e1923:c.instructions+=1;goto B6e1923;
case 0x6e1925:goto L6e1925;
case 0x6e1926:c.instructions+=1;goto B6e1926;
case 0x6e1928:goto L6e1928;
case 0x6e192b:c.instructions+=2;goto B6e192b;
case 0x6e192d:c.instructions+=1;goto B6e192d;
case 0x6e192f:goto L6e192f;
case 0x6e1931:c.instructions+=1;goto B6e1931;
case 0x6e1936:goto L6e1936;
case 0x6e1938:goto L6e1938;
case 0x6e1939:c.instructions+=1;goto B6e1939;
case 0x6e193f:goto L6e193f;
case 0x6e1942:goto L6e1942;
case 0x6e1949:goto L6e1949;
case 0x6e194b:c.instructions+=2;goto B6e194b;
case 0x6e194c:c.instructions+=1;goto B6e194c;
case 0x6e1952:goto L6e1952;
case 0x6e1955:goto L6e1955;
case 0x6e1957:c.instructions+=3;goto B6e1957;
case 0x6e1958:c.instructions+=2;goto B6e1958;
case 0x6e195a:c.instructions+=1;goto B6e195a;
case 0x6e195c:goto L6e195c;
case 0x6e195d:c.instructions+=1;goto B6e195d;
case 0x6e195e:goto L6e195e;
case 0x6e1961:c.instructions+=2;goto B6e1961;
case 0x6e1963:c.instructions+=1;goto B6e1963;
case 0x6e1965:goto L6e1965;
case 0x6e1967:c.instructions+=4;goto B6e1967;
case 0x6e196a:c.instructions+=3;goto B6e196a;
case 0x6e196b:c.instructions+=2;goto B6e196b;
case 0x6e196c:c.instructions+=1;goto B6e196c;
case 0x6e1972:goto L6e1972;
case 0x6e1975:goto L6e1975;
case 0x6e1976:c.instructions+=2;goto B6e1976;
case 0x6e1977:c.instructions+=1;goto B6e1977;
case 0x6e1978:goto L6e1978;
case 0x6e197b:c.instructions+=2;goto B6e197b;
case 0x6e197d:c.instructions+=1;goto B6e197d;
case 0x6e197f:goto L6e197f;
case 0x6e1982:c.instructions+=1;goto B6e1982;
case 0x6e1984:goto L6e1984;
case 0x6e1986:c.instructions+=1;goto B6e1986;
case 0x6e198b:goto L6e198b;
case 0x6e198d:c.instructions+=1;goto B6e198d;
case 0x6e1990:goto L6e1990;
case 0x6e1991:c.instructions+=7;goto B6e1991;
case 0x6e1992:c.instructions+=6;goto B6e1992;
case 0x6e1994:c.instructions+=5;goto B6e1994;
case 0x6e1997:c.instructions+=4;goto B6e1997;
case 0x6e1998:c.instructions+=3;goto B6e1998;
case 0x6e199a:c.instructions+=2;goto B6e199a;
case 0x6e199c:c.instructions+=1;goto B6e199c;
case 0x6e199e:goto L6e199e;
case 0x6e19a0:goto L6e19a0;
case 0x6e19a3:c.instructions+=3;goto B6e19a3;
case 0x6e19a6:c.instructions+=2;goto B6e19a6;
case 0x6e19a8:c.instructions+=1;goto B6e19a8;
case 0x6e19aa:goto L6e19aa;
case 0x6e19ac:c.instructions+=1;goto B6e19ac;
case 0x6e19b1:goto L6e19b1;
case 0x6e19b3:c.instructions+=2;goto B6e19b3;
case 0x6e19b4:c.instructions+=1;goto B6e19b4;
case 0x6e19ba:goto L6e19ba;
case 0x6e19bd:goto L6e19bd;
case 0x6e19c0:c.instructions+=3;goto B6e19c0;
case 0x6e19c1:c.instructions+=2;goto B6e19c1;
case 0x6e19c3:c.instructions+=1;goto B6e19c3;
case 0x6e19c5:goto L6e19c5;
case 0x6e19c8:c.instructions+=2;goto B6e19c8;
case 0x6e19ca:c.instructions+=1;goto B6e19ca;
case 0x6e19cc:goto L6e19cc;
case 0x6e19cf:c.instructions+=4;goto B6e19cf;
case 0x6e19d2:c.instructions+=3;goto B6e19d2;
case 0x6e19d3:c.instructions+=2;goto B6e19d3;
case 0x6e19d4:c.instructions+=1;goto B6e19d4;
case 0x6e19da:goto L6e19da;
case 0x6e19dd:goto L6e19dd;
case 0x6e19df:c.instructions+=4;goto B6e19df;
case 0x6e19e0:c.instructions+=3;goto B6e19e0;
case 0x6e19e2:c.instructions+=2;goto B6e19e2;
case 0x6e19e4:c.instructions+=1;goto B6e19e4;
case 0x6e19e6:goto L6e19e6;
case 0x6e19e9:c.instructions+=3;goto B6e19e9;
case 0x6e19ec:c.instructions+=2;goto B6e19ec;
case 0x6e19ee:c.instructions+=1;goto B6e19ee;
case 0x6e19f0:goto L6e19f0;
case 0x6e19f3:c.instructions+=2;goto B6e19f3;
case 0x6e19f6:c.instructions+=1;goto B6e19f6;
case 0x6e19f8:goto L6e19f8;
case 0x6e19f9:c.instructions+=1;goto B6e19f9;
case 0x6e19fb:goto L6e19fb;
case 0x6e19fc:c.instructions+=1;goto B6e19fc;
case 0x6e19fe:goto L6e19fe;
case 0x6e1a01:c.instructions+=2;goto B6e1a01;
case 0x6e1a03:c.instructions+=1;goto B6e1a03;
case 0x6e1a05:goto L6e1a05;
case 0x6e1a07:c.instructions+=1;goto B6e1a07;
case 0x6e1a0c:goto L6e1a0c;
case 0x6e1a0e:goto L6e1a0e;
case 0x6e1a0f:c.instructions+=1;goto B6e1a0f;
case 0x6e1a15:goto L6e1a15;
case 0x6e1a18:goto L6e1a18;
case 0x6e1a1f:goto L6e1a1f;
case 0x6e1a21:c.instructions+=2;goto B6e1a21;
case 0x6e1a22:c.instructions+=1;goto B6e1a22;
case 0x6e1a28:goto L6e1a28;
case 0x6e1a2b:goto L6e1a2b;
case 0x6e1a2d:c.instructions+=3;goto B6e1a2d;
case 0x6e1a2e:c.instructions+=2;goto B6e1a2e;
case 0x6e1a30:c.instructions+=1;goto B6e1a30;
case 0x6e1a32:goto L6e1a32;
case 0x6e1a35:c.instructions+=3;goto B6e1a35;
case 0x6e1a37:c.instructions+=2;goto B6e1a37;
case 0x6e1a38:c.instructions+=1;goto B6e1a38;
case 0x6e1a3a:goto L6e1a3a;
case 0x6e1a3c:c.instructions+=4;goto B6e1a3c;
case 0x6e1a3f:c.instructions+=3;goto B6e1a3f;
case 0x6e1a40:c.instructions+=2;goto B6e1a40;
case 0x6e1a41:c.instructions+=1;goto B6e1a41;
case 0x6e1a47:goto L6e1a47;
case 0x6e1a4a:goto L6e1a4a;
case 0x6e1a4b:c.instructions+=3;goto B6e1a4b;
case 0x6e1a4c:c.instructions+=2;goto B6e1a4c;
case 0x6e1a4d:c.instructions+=1;goto B6e1a4d;
case 0x6e1a4e:goto L6e1a4e;
case 0x6e1a51:c.instructions+=2;goto B6e1a51;
case 0x6e1a53:c.instructions+=1;goto B6e1a53;
case 0x6e1a55:goto L6e1a55;
case 0x6e1a58:c.instructions+=1;goto B6e1a58;
case 0x6e1a5a:goto L6e1a5a;
case 0x6e1a5c:c.instructions+=1;goto B6e1a5c;
case 0x6e1a61:goto L6e1a61;
case 0x6e1a63:c.instructions+=1;goto B6e1a63;
case 0x6e1a70:goto L6e1a70;
case 0x6e1a71:c.instructions+=8;goto B6e1a71;
case 0x6e1a72:c.instructions+=7;goto B6e1a72;
case 0x6e1a73:c.instructions+=6;goto B6e1a73;
case 0x6e1a75:c.instructions+=5;goto B6e1a75;
case 0x6e1a78:c.instructions+=4;goto B6e1a78;
case 0x6e1a7a:c.instructions+=3;goto B6e1a7a;
case 0x6e1a7c:c.instructions+=2;goto B6e1a7c;
case 0x6e1a7e:c.instructions+=1;goto B6e1a7e;
case 0x6e1a80:goto L6e1a80;
case 0x6e1a81:goto L6e1a81;
case 0x6e1a84:c.instructions+=3;goto B6e1a84;
case 0x6e1a87:c.instructions+=2;goto B6e1a87;
case 0x6e1a89:c.instructions+=1;goto B6e1a89;
case 0x6e1a8b:goto L6e1a8b;
case 0x6e1a8d:c.instructions+=1;goto B6e1a8d;
case 0x6e1a92:goto L6e1a92;
case 0x6e1a94:c.instructions+=2;goto B6e1a94;
case 0x6e1a95:c.instructions+=1;goto B6e1a95;
case 0x6e1a9b:goto L6e1a9b;
case 0x6e1a9e:goto L6e1a9e;
case 0x6e1aa1:c.instructions+=3;goto B6e1aa1;
case 0x6e1aa2:c.instructions+=2;goto B6e1aa2;
case 0x6e1aa4:c.instructions+=1;goto B6e1aa4;
case 0x6e1aa6:goto L6e1aa6;
case 0x6e1aa7:goto L6e1aa7;
case 0x6e1aaa:c.instructions+=2;goto B6e1aaa;
case 0x6e1aac:c.instructions+=1;goto B6e1aac;
case 0x6e1aae:goto L6e1aae;
case 0x6e1ab1:c.instructions+=4;goto B6e1ab1;
case 0x6e1ab4:c.instructions+=3;goto B6e1ab4;
case 0x6e1ab5:c.instructions+=2;goto B6e1ab5;
case 0x6e1ab6:c.instructions+=1;goto B6e1ab6;
case 0x6e1abc:goto L6e1abc;
case 0x6e1abf:c.instructions+=1;goto B6e1abf;
case 0x6e1ac2:goto L6e1ac2;
case 0x6e1ac5:c.instructions+=2;goto B6e1ac5;
case 0x6e1ac7:c.instructions+=1;goto B6e1ac7;
case 0x6e1ac9:goto L6e1ac9;
case 0x6e1acc:c.instructions+=3;goto B6e1acc;
case 0x6e1acd:c.instructions+=2;goto B6e1acd;
case 0x6e1ace:c.instructions+=1;goto B6e1ace;
case 0x6e1ad4:goto L6e1ad4;
case 0x6e1ad7:c.instructions+=1;goto B6e1ad7;
case 0x6e1ada:goto L6e1ada;
case 0x6e1adc:c.instructions+=2;goto B6e1adc;
case 0x6e1ade:c.instructions+=1;goto B6e1ade;
case 0x6e1ae0:goto L6e1ae0;
case 0x6e1ae3:c.instructions+=4;goto B6e1ae3;
case 0x6e1ae6:c.instructions+=3;goto B6e1ae6;
case 0x6e1ae7:c.instructions+=2;goto B6e1ae7;
case 0x6e1ae8:c.instructions+=1;goto B6e1ae8;
case 0x6e1aee:goto L6e1aee;
case 0x6e1af1:c.instructions+=1;goto B6e1af1;
case 0x6e1af3:goto L6e1af3;
case 0x6e1af6:c.instructions+=2;goto B6e1af6;
case 0x6e1af8:c.instructions+=1;goto B6e1af8;
case 0x6e1afa:goto L6e1afa;
case 0x6e1afd:c.instructions+=4;goto B6e1afd;
case 0x6e1b00:c.instructions+=3;goto B6e1b00;
case 0x6e1b01:c.instructions+=2;goto B6e1b01;
case 0x6e1b02:c.instructions+=1;goto B6e1b02;
case 0x6e1b08:goto L6e1b08;
case 0x6e1b0b:c.instructions+=1;goto B6e1b0b;
case 0x6e1b0e:goto L6e1b0e;
case 0x6e1b11:c.instructions+=2;goto B6e1b11;
case 0x6e1b13:c.instructions+=1;goto B6e1b13;
case 0x6e1b15:goto L6e1b15;
case 0x6e1b18:c.instructions+=4;goto B6e1b18;
case 0x6e1b1b:c.instructions+=3;goto B6e1b1b;
case 0x6e1b1c:c.instructions+=2;goto B6e1b1c;
case 0x6e1b1d:c.instructions+=1;goto B6e1b1d;
case 0x6e1b23:goto L6e1b23;
case 0x6e1b26:c.instructions+=1;goto B6e1b26;
case 0x6e1b29:goto L6e1b29;
case 0x6e1b2a:c.instructions+=3;goto B6e1b2a;
case 0x6e1b2b:c.instructions+=2;goto B6e1b2b;
case 0x6e1b2c:c.instructions+=1;goto B6e1b2c;
case 0x6e1b30:goto L6e1b30;
case 0x6e1b32:c.instructions+=2;goto B6e1b32;
case 0x6e1b34:c.instructions+=1;goto B6e1b34;
case 0x6e1b3a:goto L6e1b3a;
case 0x6e1b3d:c.instructions+=2;goto B6e1b3d;
case 0x6e1b3f:c.instructions+=1;goto B6e1b3f;
case 0x6e1b41:goto L6e1b41;
case 0x6e1b47:c.instructions+=1;goto B6e1b47;
case 0x6e1b49:goto L6e1b49;
case 0x6e1b4b:goto L6e1b4b;
case 0x6e1b51:c.instructions+=3;goto B6e1b51;
case 0x6e1b53:c.instructions+=2;goto B6e1b53;
case 0x6e1b58:c.instructions+=1;goto B6e1b58;
case 0x6e1b5a:goto L6e1b5a;
case 0x6e1b5c:c.instructions+=1;goto B6e1b5c;
case 0x6e1b62:goto L6e1b62;
case 0x6e1b66:c.instructions+=3;goto B6e1b66;
case 0x6e1b68:c.instructions+=2;goto B6e1b68;
case 0x6e1b69:c.instructions+=1;goto B6e1b69;
case 0x6e1b6c:goto L6e1b6c;
case 0x6e1b6e:c.instructions+=2;goto B6e1b6e;
case 0x6e1b70:c.instructions+=1;goto B6e1b70;
case 0x6e1b76:goto L6e1b76;
case 0x6e1b79:c.instructions+=6;goto B6e1b79;
case 0x6e1b7e:c.instructions+=5;goto B6e1b7e;
case 0x6e1b83:c.instructions+=4;goto B6e1b83;
case 0x6e1b88:c.instructions+=3;goto B6e1b88;
case 0x6e1b8d:c.instructions+=2;goto B6e1b8d;
case 0x6e1b92:c.instructions+=1;goto B6e1b92;
case 0x6e1b97:goto L6e1b97;
case 0x6e1ba0:goto L6e1ba0;
case 0x6e1ba5:c.instructions+=4;goto B6e1ba5;
case 0x6e1ba6:c.instructions+=3;goto B6e1ba6;
case 0x6e1ba8:c.instructions+=2;goto B6e1ba8;
case 0x6e1bae:c.instructions+=1;goto B6e1bae;
case 0x6e1bb0:goto L6e1bb0;
case 0x6e1bb2:c.instructions+=2;goto B6e1bb2;
case 0x6e1bb3:c.instructions+=1;goto B6e1bb3;
case 0x6e1bb9:goto L6e1bb9;
case 0x6e1bbc:goto L6e1bbc;
case 0x6e1bbe:c.instructions+=2;goto B6e1bbe;
case 0x6e1bbf:c.instructions+=1;goto B6e1bbf;
case 0x6e1bd0:goto L6e1bd0;
case 0x6e1bd2:c.instructions+=1;goto B6e1bd2;
case 0x6e1be0:goto L6e1be0;
case 0x6e1be1:c.instructions+=2;goto B6e1be1;
case 0x6e1be3:c.instructions+=1;goto B6e1be3;
case 0x6e1be8:goto L6e1be8;
case 0x6e1bee:c.instructions+=5;goto B6e1bee;
case 0x6e1bf2:c.instructions+=4;goto B6e1bf2;
case 0x6e1bf9:c.instructions+=3;goto B6e1bf9;
case 0x6e1bfb:c.instructions+=2;goto B6e1bfb;
case 0x6e1bfc:c.instructions+=1;goto B6e1bfc;
case 0x6e1c00:goto L6e1c00;
case 0x6e1c03:c.instructions+=5;goto B6e1c03;
case 0x6e1c06:c.instructions+=4;goto B6e1c06;
case 0x6e1c0a:c.instructions+=3;goto B6e1c0a;
case 0x6e1c0c:c.instructions+=2;goto B6e1c0c;
case 0x6e1c0e:c.instructions+=1;goto B6e1c0e;
case 0x6e1c20:goto L6e1c20;
case 0x6e1c21:c.instructions+=3;goto B6e1c21;
case 0x6e1c23:c.instructions+=2;goto B6e1c23;
case 0x6e1c29:c.instructions+=1;goto B6e1c29;
case 0x6e1c2e:goto L6e1c2e;
case 0x6e1c33:c.instructions+=1;goto B6e1c33;
case 0x6e1c35:goto L6e1c35;
case 0x6e1c37:c.instructions+=2;goto B6e1c37;
case 0x6e1c38:c.instructions+=1;goto B6e1c38;
case 0x6e1c3e:goto L6e1c3e;
case 0x6e1c41:goto L6e1c41;
case 0x6e1c43:c.instructions+=2;goto B6e1c43;
case 0x6e1c44:c.instructions+=1;goto B6e1c44;
case 0x6e1c50:goto L6e1c50;
case 0x6e1c51:c.instructions+=2;goto B6e1c51;
case 0x6e1c53:c.instructions+=1;goto B6e1c53;
case 0x6e1c58:goto L6e1c58;
case 0x6e1c5a:c.instructions+=7;goto B6e1c5a;
case 0x6e1c5d:c.instructions+=6;goto B6e1c5d;
case 0x6e1c60:c.instructions+=5;goto B6e1c60;
case 0x6e1c66:c.instructions+=4;goto B6e1c66;
case 0x6e1c6d:c.instructions+=3;goto B6e1c6d;
case 0x6e1c6f:c.instructions+=2;goto B6e1c6f;
case 0x6e1c70:c.instructions+=1;goto B6e1c70;
case 0x6e1c80:goto L6e1c80;
case 0x6e1c84:c.instructions+=5;goto B6e1c84;
case 0x6e1c87:c.instructions+=4;goto B6e1c87;
case 0x6e1c89:c.instructions+=3;goto B6e1c89;
case 0x6e1c8c:c.instructions+=2;goto B6e1c8c;
case 0x6e1c8f:c.instructions+=1;goto B6e1c8f;
case 0x6e1ca0:goto L6e1ca0;
case 0x6e1ca4:c.instructions+=13;goto B6e1ca4;
case 0x6e1ca8:c.instructions+=12;goto B6e1ca8;
case 0x6e1ca9:c.instructions+=11;goto B6e1ca9;
case 0x6e1caa:c.instructions+=10;goto B6e1caa;
case 0x6e1cad:c.instructions+=9;goto B6e1cad;
case 0x6e1cae:c.instructions+=8;goto B6e1cae;
case 0x6e1cb2:c.instructions+=7;goto B6e1cb2;
case 0x6e1cb5:c.instructions+=6;goto B6e1cb5;
case 0x6e1cb8:c.instructions+=5;goto B6e1cb8;
case 0x6e1cb9:c.instructions+=4;goto B6e1cb9;
case 0x6e1cbd:c.instructions+=3;goto B6e1cbd;
case 0x6e1cbe:c.instructions+=2;goto B6e1cbe;
case 0x6e1cbf:c.instructions+=1;goto B6e1cbf;
case 0x6e1cc4:goto L6e1cc4;
case 0x6e1cc6:c.instructions+=1;goto B6e1cc6;
case 0x6e1cd0:goto L6e1cd0;
case 0x6e1cd4:c.instructions+=8;goto B6e1cd4;
case 0x6e1cd6:c.instructions+=7;goto B6e1cd6;
case 0x6e1cd8:c.instructions+=6;goto B6e1cd8;
case 0x6e1cd9:c.instructions+=5;goto B6e1cd9;
case 0x6e1cdd:c.instructions+=4;goto B6e1cdd;
case 0x6e1cde:c.instructions+=3;goto B6e1cde;
case 0x6e1ce2:c.instructions+=2;goto B6e1ce2;
case 0x6e1ce3:c.instructions+=1;goto B6e1ce3;
case 0x6e1ce6:goto L6e1ce6;
case 0x6e1cf0:goto L6e1cf0;
case 0x6e1cf1:c.instructions+=3;goto B6e1cf1;
case 0x6e1cf3:c.instructions+=2;goto B6e1cf3;
case 0x6e1cf9:c.instructions+=1;goto B6e1cf9;
case 0x6e1cfe:goto L6e1cfe;
case 0x6e1d03:c.instructions+=1;goto B6e1d03;
case 0x6e1d05:goto L6e1d05;
case 0x6e1d07:c.instructions+=2;goto B6e1d07;
case 0x6e1d08:c.instructions+=1;goto B6e1d08;
case 0x6e1d0e:goto L6e1d0e;
case 0x6e1d11:goto L6e1d11;
case 0x6e1d13:c.instructions+=2;goto B6e1d13;
case 0x6e1d14:c.instructions+=1;goto B6e1d14;
case 0x6e1d20:goto L6e1d20;
case 0x6e1d21:c.instructions+=2;goto B6e1d21;
case 0x6e1d23:c.instructions+=1;goto B6e1d23;
case 0x6e1d28:goto L6e1d28;
case 0x6e1d2a:c.instructions+=7;goto B6e1d2a;
case 0x6e1d2d:c.instructions+=6;goto B6e1d2d;
case 0x6e1d30:c.instructions+=5;goto B6e1d30;
case 0x6e1d36:c.instructions+=4;goto B6e1d36;
case 0x6e1d3d:c.instructions+=3;goto B6e1d3d;
case 0x6e1d3f:c.instructions+=2;goto B6e1d3f;
case 0x6e1d40:c.instructions+=1;goto B6e1d40;
case 0x6e1d50:goto L6e1d50;
case 0x6e1d54:c.instructions+=13;goto B6e1d54;
case 0x6e1d58:c.instructions+=12;goto B6e1d58;
case 0x6e1d59:c.instructions+=11;goto B6e1d59;
case 0x6e1d5a:c.instructions+=10;goto B6e1d5a;
case 0x6e1d5d:c.instructions+=9;goto B6e1d5d;
case 0x6e1d5e:c.instructions+=8;goto B6e1d5e;
case 0x6e1d62:c.instructions+=7;goto B6e1d62;
case 0x6e1d65:c.instructions+=6;goto B6e1d65;
case 0x6e1d68:c.instructions+=5;goto B6e1d68;
case 0x6e1d69:c.instructions+=4;goto B6e1d69;
case 0x6e1d6d:c.instructions+=3;goto B6e1d6d;
case 0x6e1d6e:c.instructions+=2;goto B6e1d6e;
case 0x6e1d6f:c.instructions+=1;goto B6e1d6f;
case 0x6e1d74:goto L6e1d74;
case 0x6e1d76:c.instructions+=1;goto B6e1d76;
case 0x6e1d80:goto L6e1d80;
case 0x6e1d81:c.instructions+=3;goto B6e1d81;
case 0x6e1d83:c.instructions+=2;goto B6e1d83;
case 0x6e1d89:c.instructions+=1;goto B6e1d89;
case 0x6e1d8e:goto L6e1d8e;
case 0x6e1d93:c.instructions+=1;goto B6e1d93;
case 0x6e1d95:goto L6e1d95;
case 0x6e1d97:c.instructions+=2;goto B6e1d97;
case 0x6e1d98:c.instructions+=1;goto B6e1d98;
case 0x6e1d9e:goto L6e1d9e;
case 0x6e1da1:goto L6e1da1;
case 0x6e1da3:c.instructions+=2;goto B6e1da3;
case 0x6e1da4:c.instructions+=1;goto B6e1da4;
case 0x6e1db0:goto L6e1db0;
case 0x6e1db1:c.instructions+=2;goto B6e1db1;
case 0x6e1db3:c.instructions+=1;goto B6e1db3;
case 0x6e1db8:goto L6e1db8;
case 0x6e1dbe:c.instructions+=5;goto B6e1dbe;
case 0x6e1dc2:c.instructions+=4;goto B6e1dc2;
case 0x6e1dc9:c.instructions+=3;goto B6e1dc9;
case 0x6e1dcb:c.instructions+=2;goto B6e1dcb;
case 0x6e1dcc:c.instructions+=1;goto B6e1dcc;
case 0x6e1dd0:goto L6e1dd0;
case 0x6e1dd1:c.instructions+=9;goto B6e1dd1;
case 0x6e1dd4:c.instructions+=8;goto B6e1dd4;
case 0x6e1dd8:c.instructions+=7;goto B6e1dd8;
case 0x6e1ddc:c.instructions+=6;goto B6e1ddc;
case 0x6e1de0:c.instructions+=5;goto B6e1de0;
case 0x6e1de2:c.instructions+=4;goto B6e1de2;
case 0x6e1de6:c.instructions+=3;goto B6e1de6;
case 0x6e1de8:c.instructions+=2;goto B6e1de8;
case 0x6e1de9:c.instructions+=1;goto B6e1de9;
case 0x6e1df0:goto L6e1df0;
case 0x6e1df1:c.instructions+=3;goto B6e1df1;
case 0x6e1df3:c.instructions+=2;goto B6e1df3;
case 0x6e1df9:c.instructions+=1;goto B6e1df9;
case 0x6e1dfe:goto L6e1dfe;
case 0x6e1e03:c.instructions+=1;goto B6e1e03;
case 0x6e1e05:goto L6e1e05;
case 0x6e1e07:c.instructions+=2;goto B6e1e07;
case 0x6e1e08:c.instructions+=1;goto B6e1e08;
case 0x6e1e0e:goto L6e1e0e;
case 0x6e1e11:goto L6e1e11;
case 0x6e1e13:c.instructions+=2;goto B6e1e13;
case 0x6e1e14:c.instructions+=1;goto B6e1e14;
case 0x6e1e20:goto L6e1e20;
case 0x6e1e21:c.instructions+=2;goto B6e1e21;
case 0x6e1e23:c.instructions+=1;goto B6e1e23;
case 0x6e1e28:goto L6e1e28;
case 0x6e1e2a:c.instructions+=10;goto B6e1e2a;
case 0x6e1e2d:c.instructions+=9;goto B6e1e2d;
case 0x6e1e30:c.instructions+=8;goto B6e1e30;
case 0x6e1e33:c.instructions+=7;goto B6e1e33;
case 0x6e1e36:c.instructions+=6;goto B6e1e36;
case 0x6e1e3d:c.instructions+=5;goto B6e1e3d;
case 0x6e1e43:c.instructions+=4;goto B6e1e43;
case 0x6e1e4a:c.instructions+=3;goto B6e1e4a;
case 0x6e1e4c:c.instructions+=2;goto B6e1e4c;
case 0x6e1e4d:c.instructions+=1;goto B6e1e4d;
case 0x6e1e50:goto L6e1e50;
case 0x6e1e51:c.instructions+=2;goto B6e1e51;
case 0x6e1e53:c.instructions+=1;goto B6e1e53;
case 0x6e1e58:goto L6e1e58;
case 0x6e1e5a:c.instructions+=10;goto B6e1e5a;
case 0x6e1e5d:c.instructions+=9;goto B6e1e5d;
case 0x6e1e60:c.instructions+=8;goto B6e1e60;
case 0x6e1e63:c.instructions+=7;goto B6e1e63;
case 0x6e1e66:c.instructions+=6;goto B6e1e66;
case 0x6e1e6d:c.instructions+=5;goto B6e1e6d;
case 0x6e1e73:c.instructions+=4;goto B6e1e73;
case 0x6e1e7a:c.instructions+=3;goto B6e1e7a;
case 0x6e1e7c:c.instructions+=2;goto B6e1e7c;
case 0x6e1e7d:c.instructions+=1;goto B6e1e7d;
case 0x6e1e80:goto L6e1e80;
case 0x6e1e81:c.instructions+=9;goto B6e1e81;
case 0x6e1e84:c.instructions+=8;goto B6e1e84;
case 0x6e1e88:c.instructions+=7;goto B6e1e88;
case 0x6e1e8c:c.instructions+=6;goto B6e1e8c;
case 0x6e1e90:c.instructions+=5;goto B6e1e90;
case 0x6e1e92:c.instructions+=4;goto B6e1e92;
case 0x6e1e96:c.instructions+=3;goto B6e1e96;
case 0x6e1e98:c.instructions+=2;goto B6e1e98;
case 0x6e1e99:c.instructions+=1;goto B6e1e99;
case 0x6e1ea0:goto L6e1ea0;
case 0x6e1ea5:c.instructions+=4;goto B6e1ea5;
case 0x6e1ea6:c.instructions+=3;goto B6e1ea6;
case 0x6e1ea8:c.instructions+=2;goto B6e1ea8;
case 0x6e1eae:c.instructions+=1;goto B6e1eae;
case 0x6e1eb0:goto L6e1eb0;
case 0x6e1eb2:c.instructions+=2;goto B6e1eb2;
case 0x6e1eb3:c.instructions+=1;goto B6e1eb3;
case 0x6e1eb9:goto L6e1eb9;
case 0x6e1ebc:goto L6e1ebc;
case 0x6e1ebe:c.instructions+=2;goto B6e1ebe;
case 0x6e1ebf:c.instructions+=1;goto B6e1ebf;
case 0x6e1ed0:goto L6e1ed0;
case 0x6e1ed1:c.instructions+=6;goto B6e1ed1;
case 0x6e1ed2:c.instructions+=5;goto B6e1ed2;
case 0x6e1ed4:c.instructions+=4;goto B6e1ed4;
case 0x6e1ed7:c.instructions+=3;goto B6e1ed7;
case 0x6e1ed9:c.instructions+=2;goto B6e1ed9;
case 0x6e1edb:c.instructions+=1;goto B6e1edb;
case 0x6e1edd:goto L6e1edd;
case 0x6e1ede:c.instructions+=4;goto B6e1ede;
case 0x6e1ee2:c.instructions+=3;goto B6e1ee2;
case 0x6e1ee3:c.instructions+=2;goto B6e1ee3;
case 0x6e1ee7:c.instructions+=1;goto B6e1ee7;
case 0x6e1ef0:goto L6e1ef0;
case 0x6e1ef3:c.instructions+=7;goto B6e1ef3;
case 0x6e1ef6:c.instructions+=6;goto B6e1ef6;
case 0x6e1efa:c.instructions+=5;goto B6e1efa;
case 0x6e1efc:c.instructions+=4;goto B6e1efc;
case 0x6e1efd:c.instructions+=3;goto B6e1efd;
case 0x6e1efe:c.instructions+=2;goto B6e1efe;
case 0x6e1eff:c.instructions+=1;goto B6e1eff;
case 0x6e1f02:goto L6e1f02;
case 0x6e1f05:c.instructions+=3;goto B6e1f05;
case 0x6e1f06:c.instructions+=2;goto B6e1f06;
case 0x6e1f08:c.instructions+=1;goto B6e1f08;
case 0x6e1f0a:goto L6e1f0a;
case 0x6e1f0b:c.instructions+=1;goto B6e1f0b;
case 0x6e1f0c:goto L6e1f0c;
case 0x6e1f0d:c.instructions+=2;goto B6e1f0d;
case 0x6e1f0e:c.instructions+=1;goto B6e1f0e;
case 0x6e1f20:goto L6e1f20;
case 0x6e1f22:c.instructions+=11;goto B6e1f22;
case 0x6e1f24:c.instructions+=10;goto B6e1f24;
case 0x6e1f27:c.instructions+=9;goto B6e1f27;
case 0x6e1f2d:c.instructions+=8;goto B6e1f2d;
case 0x6e1f30:c.instructions+=7;goto B6e1f30;
case 0x6e1f37:c.instructions+=6;goto B6e1f37;
case 0x6e1f3a:c.instructions+=5;goto B6e1f3a;
case 0x6e1f3d:c.instructions+=4;goto B6e1f3d;
case 0x6e1f40:c.instructions+=3;goto B6e1f40;
case 0x6e1f43:c.instructions+=2;goto B6e1f43;
case 0x6e1f4a:c.instructions+=1;goto B6e1f4a;
case 0x6e1f50:goto L6e1f50;
case 0x6e1f55:c.instructions+=4;goto B6e1f55;
case 0x6e1f56:c.instructions+=3;goto B6e1f56;
case 0x6e1f58:c.instructions+=2;goto B6e1f58;
case 0x6e1f5e:c.instructions+=1;goto B6e1f5e;
case 0x6e1f60:goto L6e1f60;
case 0x6e1f65:c.instructions+=2;goto B6e1f65;
case 0x6e1f66:c.instructions+=1;goto B6e1f66;
case 0x6e1f6c:goto L6e1f6c;
case 0x6e1f6f:goto L6e1f6f;
case 0x6e1f71:c.instructions+=2;goto B6e1f71;
case 0x6e1f72:c.instructions+=1;goto B6e1f72;
case 0x6e1f80:goto L6e1f80;
case 0x6e1f82:c.instructions+=9;goto B6e1f82;
case 0x6e1f84:c.instructions+=8;goto B6e1f84;
case 0x6e1f87:c.instructions+=7;goto B6e1f87;
case 0x6e1f8d:c.instructions+=6;goto B6e1f8d;
case 0x6e1f90:c.instructions+=5;goto B6e1f90;
case 0x6e1f93:c.instructions+=4;goto B6e1f93;
case 0x6e1f96:c.instructions+=3;goto B6e1f96;
case 0x6e1f9a:c.instructions+=2;goto B6e1f9a;
case 0x6e1fa1:c.instructions+=1;goto B6e1fa1;
case 0x6e1fb0:goto L6e1fb0;
case 0x6e1fb1:c.instructions+=6;goto B6e1fb1;
case 0x6e1fb3:c.instructions+=5;goto B6e1fb3;
case 0x6e1fb6:c.instructions+=4;goto B6e1fb6;
case 0x6e1fb9:c.instructions+=3;goto B6e1fb9;
case 0x6e1fbb:c.instructions+=2;goto B6e1fbb;
case 0x6e1fbd:c.instructions+=1;goto B6e1fbd;
case 0x6e1fbf:goto L6e1fbf;
case 0x6e1fc2:c.instructions+=6;goto B6e1fc2;
case 0x6e1fc3:c.instructions+=5;goto B6e1fc3;
case 0x6e1fc7:c.instructions+=4;goto B6e1fc7;
case 0x6e1fc8:c.instructions+=3;goto B6e1fc8;
case 0x6e1fcc:c.instructions+=2;goto B6e1fcc;
case 0x6e1fcd:c.instructions+=1;goto B6e1fcd;
case 0x6e1fd0:goto L6e1fd0;
case 0x6e1fd4:c.instructions+=9;goto B6e1fd4;
case 0x6e1fd7:c.instructions+=8;goto B6e1fd7;
case 0x6e1fd9:c.instructions+=7;goto B6e1fd9;
case 0x6e1fdc:c.instructions+=6;goto B6e1fdc;
case 0x6e1fde:c.instructions+=5;goto B6e1fde;
case 0x6e1fdf:c.instructions+=4;goto B6e1fdf;
case 0x6e1fe0:c.instructions+=3;goto B6e1fe0;
case 0x6e1fe3:c.instructions+=2;goto B6e1fe3;
case 0x6e1fe4:c.instructions+=1;goto B6e1fe4;
case 0x6e1fe9:goto L6e1fe9;
case 0x6e1fea:c.instructions+=1;goto B6e1fea;
case 0x6e1fed:goto L6e1fed;
case 0x6e1fee:c.instructions+=1;goto B6e1fee;
default:missing_instruction(c.pc);}
B6e1000:L6e1000:{c.instructions+=5;NFSU2_TR(0x6e1000);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6e1005:{NFSU2_TR(0x6e1005);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1008:{NFSU2_TR(0x6e1008);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e100b:{NFSU2_TR(0x6e100b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x10ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e100e:{NFSU2_TR(0x6e100e);
if(r1(R+518)){{goto L6e1036;}}
}
B6e1010:L6e1010:{c.instructions+=6;NFSU2_TR(0x6e1010);
__builtin_memmove((R+4),gp(0x8a7bdc),4);
}
B6e1016:{NFSU2_TR(0x6e1016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1017:{NFSU2_TR(0x6e1017);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e101d:{NFSU2_TR(0x6e101d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e101f:{NFSU2_TR(0x6e101f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1020:{NFSU2_TR(0x6e1020);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e102c;}}
}
B6e1022:L6e1022:{c.instructions+=3;NFSU2_TR(0x6e1022);
__builtin_memmove((R+4),gp(0x8a8a28),4);
}
B6e1028:{NFSU2_TR(0x6e1028);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e102a:{NFSU2_TR(0x6e102a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1036;}}
}
B6e102c:L6e102c:{c.instructions+=2;NFSU2_TR(0x6e102c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e102d:{NFSU2_TR(0x6e102d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1032ull));
TAIL_STATIC(0x6e0990u,6e0);
}
B6e1032:L6e1032:{c.instructions+=2;NFSU2_TR(0x6e1032);
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
B6e1035:{NFSU2_TR(0x6e1035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1036:L6e1036:{c.instructions+=3;NFSU2_TR(0x6e1036);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e1038:{NFSU2_TR(0x6e1038);
w4(R+4,u32(0x10ull));
}
B6e103d:{NFSU2_TR(0x6e103d);
if(r1(R+518)){{goto L6e1044;}}
}
B6e103f:L6e103f:{c.instructions+=1;NFSU2_TR(0x6e103f);
w4(R+4,u32(0x20ull));
}
B6e1044:L6e1044:{c.instructions+=3;NFSU2_TR(0x6e1044);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1045:{NFSU2_TR(0x6e1045);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1046:{NFSU2_TR(0x6e1046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e104bull));
TAIL_STATIC(0x6e0da0u,6e0);
}
B6e104b:L6e104b:{c.instructions+=2;NFSU2_TR(0x6e104b);
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
B6e104e:{NFSU2_TR(0x6e104e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1050:L6e1050:{c.instructions+=11;NFSU2_TR(0x6e1050);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1053:{NFSU2_TR(0x6e1053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1054:{NFSU2_TR(0x6e1054);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1055:{NFSU2_TR(0x6e1055);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e1059:{NFSU2_TR(0x6e1059);
__builtin_memmove((R+24),(R+4),4);
}
B6e105b:{NFSU2_TR(0x6e105b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e105e:{NFSU2_TR(0x6e105e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1060:{NFSU2_TR(0x6e1060);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1061:{NFSU2_TR(0x6e1061);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e1065:{NFSU2_TR(0x6e1065);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1066:{NFSU2_TR(0x6e1066);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1069ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e1069:L6e1069:{c.instructions+=16;NFSU2_TR(0x6e1069);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e106d:{NFSU2_TR(0x6e106d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1071:{NFSU2_TR(0x6e1071);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1075:{NFSU2_TR(0x6e1075);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1079:{NFSU2_TR(0x6e1079);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e107d:{NFSU2_TR(0x6e107d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e1083:{NFSU2_TR(0x6e1083);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1087:{NFSU2_TR(0x6e1087);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e108b:{NFSU2_TR(0x6e108b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e108f:{NFSU2_TR(0x6e108f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1093:{NFSU2_TR(0x6e1093);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e1099:{NFSU2_TR(0x6e1099);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e109d:{NFSU2_TR(0x6e109d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e10a3:{NFSU2_TR(0x6e10a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e10a5:{NFSU2_TR(0x6e10a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e10a8:{NFSU2_TR(0x6e10a8);
if(r1(R+514)){{goto L6e10b2;}}
}
B6e10aa:L6e10aa:{c.instructions+=1;NFSU2_TR(0x6e10aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e10b2:L6e10b2:{c.instructions+=5;NFSU2_TR(0x6e10b2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e10b6:{NFSU2_TR(0x6e10b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e10bc:{NFSU2_TR(0x6e10bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e10be:{NFSU2_TR(0x6e10be);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e10c1:{NFSU2_TR(0x6e10c1);
if(r1(R+514)){{goto L6e10cb;}}
}
B6e10c3:L6e10c3:{c.instructions+=1;NFSU2_TR(0x6e10c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e10cb:L6e10cb:{c.instructions+=5;NFSU2_TR(0x6e10cb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e10cf:{NFSU2_TR(0x6e10cf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e10d5:{NFSU2_TR(0x6e10d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e10d7:{NFSU2_TR(0x6e10d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e10da:{NFSU2_TR(0x6e10da);
if(r1(R+514)){{goto L6e10e4;}}
}
B6e10dc:L6e10dc:{c.instructions+=1;NFSU2_TR(0x6e10dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e10e4:L6e10e4:{c.instructions+=4;NFSU2_TR(0x6e10e4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e10ea:{NFSU2_TR(0x6e10ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e10ec:{NFSU2_TR(0x6e10ec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e10ef:{NFSU2_TR(0x6e10ef);
if(r1(R+514)){{goto L6e10f9;}}
}
B6e10f1:L6e10f1:{c.instructions+=2;NFSU2_TR(0x6e10f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e10f3:{NFSU2_TR(0x6e10f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e10f9:L6e10f9:{c.instructions+=5;NFSU2_TR(0x6e10f9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e10fd:{NFSU2_TR(0x6e10fd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e1101:{NFSU2_TR(0x6e1101);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e1103:{NFSU2_TR(0x6e1103);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e1106:{NFSU2_TR(0x6e1106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1116;}}
}
B6e1108:L6e1108:{c.instructions+=3;NFSU2_TR(0x6e1108);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e110c:{NFSU2_TR(0x6e110c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e1112:{NFSU2_TR(0x6e1112);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1116:L6e1116:{c.instructions+=5;NFSU2_TR(0x6e1116);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e111a:{NFSU2_TR(0x6e111a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e111e:{NFSU2_TR(0x6e111e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e1120:{NFSU2_TR(0x6e1120);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e1123:{NFSU2_TR(0x6e1123);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1133;}}
}
B6e1125:L6e1125:{c.instructions+=3;NFSU2_TR(0x6e1125);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1129:{NFSU2_TR(0x6e1129);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e112f:{NFSU2_TR(0x6e112f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1133:L6e1133:{c.instructions+=5;NFSU2_TR(0x6e1133);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1137:{NFSU2_TR(0x6e1137);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e113b:{NFSU2_TR(0x6e113b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e113d:{NFSU2_TR(0x6e113d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e1140:{NFSU2_TR(0x6e1140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1150;}}
}
B6e1142:L6e1142:{c.instructions+=3;NFSU2_TR(0x6e1142);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1146:{NFSU2_TR(0x6e1146);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e114c:{NFSU2_TR(0x6e114c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1150:L6e1150:{c.instructions+=4;NFSU2_TR(0x6e1150);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e1154:{NFSU2_TR(0x6e1154);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e1156:{NFSU2_TR(0x6e1156);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e1159:{NFSU2_TR(0x6e1159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1167;}}
}
B6e115b:L6e115b:{c.instructions+=3;NFSU2_TR(0x6e115b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e115d:{NFSU2_TR(0x6e115d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1161:{NFSU2_TR(0x6e1161);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e1167:L6e1167:{c.instructions+=3;NFSU2_TR(0x6e1167);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e116b:{NFSU2_TR(0x6e116b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e116c:{NFSU2_TR(0x6e116c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1171ull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e1171:L6e1171:{c.instructions+=4;NFSU2_TR(0x6e1171);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1175:{NFSU2_TR(0x6e1175);
__builtin_memmove((R+28),(R+0),4);
}
B6e1177:{NFSU2_TR(0x6e1177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e117a:{NFSU2_TR(0x6e117a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e117full));
TAIL_STATIC(0x75bed4u,75b);
}
B6e117f:L6e117f:{c.instructions+=4;NFSU2_TR(0x6e117f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1183:{NFSU2_TR(0x6e1183);
__builtin_memmove((R+12),(R+0),4);
}
B6e1185:{NFSU2_TR(0x6e1185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1188:{NFSU2_TR(0x6e1188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e118dull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e118d:L6e118d:{c.instructions+=5;NFSU2_TR(0x6e118d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e118f:{NFSU2_TR(0x6e118f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6e1191:{NFSU2_TR(0x6e1191);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1194:{NFSU2_TR(0x6e1194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1197:{NFSU2_TR(0x6e1197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e119cull));
TAIL_STATIC(0x75bed4u,75b);
}
B6e119c:L6e119c:{c.instructions+=15;NFSU2_TR(0x6e119c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e11a0:{NFSU2_TR(0x6e11a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e11a4:{NFSU2_TR(0x6e11a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e11a8:{NFSU2_TR(0x6e11a8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6e11aa:{NFSU2_TR(0x6e11aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e11ad:{NFSU2_TR(0x6e11ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e11b1:{NFSU2_TR(0x6e11b1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e11b5:{NFSU2_TR(0x6e11b5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e11b9:{NFSU2_TR(0x6e11b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e11bc:{NFSU2_TR(0x6e11bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e11bf:{NFSU2_TR(0x6e11bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e11c2:{NFSU2_TR(0x6e11c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e11c3:{NFSU2_TR(0x6e11c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e11c5:{NFSU2_TR(0x6e11c5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e11c8:{NFSU2_TR(0x6e11c8);
if(r1(R+514)){{goto L6e11e2;}}
}
B6e11ca:L6e11ca:{c.instructions+=6;NFSU2_TR(0x6e11ca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e11ce:{NFSU2_TR(0x6e11ce);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B6e11d0:{NFSU2_TR(0x6e11d0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e11d4:{NFSU2_TR(0x6e11d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e11d6:{NFSU2_TR(0x6e11d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e11d9:{NFSU2_TR(0x6e11d9);
if(r1(R+514)){{goto L6e11e2;}}
}
B6e11db:L6e11db:{c.instructions+=2;NFSU2_TR(0x6e11db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e11dd:{NFSU2_TR(0x6e11dd);
{goto L6e12fb;}
}
B6e11e2:L6e11e2:{c.instructions+=3;NFSU2_TR(0x6e11e2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e11e5:{NFSU2_TR(0x6e11e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e11e7:{NFSU2_TR(0x6e11e7);
if(r1(R+518)){{goto L6e12ed;}}
}
B6e11ed:L6e11ed:{c.instructions+=61;NFSU2_TR(0x6e11ed);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e11f3:{NFSU2_TR(0x6e11f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e11f4:{NFSU2_TR(0x6e11f4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e11f8:{NFSU2_TR(0x6e11f8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e11fa:{NFSU2_TR(0x6e11fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e11fe:{NFSU2_TR(0x6e11fe);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1204:{NFSU2_TR(0x6e1204);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B6e1206:{NFSU2_TR(0x6e1206);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e120a:{NFSU2_TR(0x6e120a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e120c:{NFSU2_TR(0x6e120c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e1210:{NFSU2_TR(0x6e1210);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1216:{NFSU2_TR(0x6e1216);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e121a:{NFSU2_TR(0x6e121a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e121e:{NFSU2_TR(0x6e121e);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1224:{NFSU2_TR(0x6e1224);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1228:{NFSU2_TR(0x6e1228);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e122e:{NFSU2_TR(0x6e122e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e1232:{NFSU2_TR(0x6e1232);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1236:{NFSU2_TR(0x6e1236);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e123a:{NFSU2_TR(0x6e123a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e123e:{NFSU2_TR(0x6e123e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e1244:{NFSU2_TR(0x6e1244);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1248:{NFSU2_TR(0x6e1248);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e124c:{NFSU2_TR(0x6e124c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1250:{NFSU2_TR(0x6e1250);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1254:{NFSU2_TR(0x6e1254);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e125a:{NFSU2_TR(0x6e125a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e125e:{NFSU2_TR(0x6e125e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1262:{NFSU2_TR(0x6e1262);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1266:{NFSU2_TR(0x6e1266);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e126c:{NFSU2_TR(0x6e126c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1270:{NFSU2_TR(0x6e1270);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e1274:{NFSU2_TR(0x6e1274);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e1276:{NFSU2_TR(0x6e1276);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e127a:{NFSU2_TR(0x6e127a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e127e:{NFSU2_TR(0x6e127e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e1280:{NFSU2_TR(0x6e1280);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e1286:{NFSU2_TR(0x6e1286);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e128c:{NFSU2_TR(0x6e128c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1290:{NFSU2_TR(0x6e1290);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e1294:{NFSU2_TR(0x6e1294);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e1296:{NFSU2_TR(0x6e1296);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e129c:{NFSU2_TR(0x6e129c);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e12a2:{NFSU2_TR(0x6e12a2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e12a6:{NFSU2_TR(0x6e12a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e12aa:{NFSU2_TR(0x6e12aa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e12ae:{NFSU2_TR(0x6e12ae);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e12b4:{NFSU2_TR(0x6e12b4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e12b8:{NFSU2_TR(0x6e12b8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e12bc:{NFSU2_TR(0x6e12bc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e12c0:{NFSU2_TR(0x6e12c0);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e12c6:{NFSU2_TR(0x6e12c6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e12ca:{NFSU2_TR(0x6e12ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e12ce:{NFSU2_TR(0x6e12ce);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e12d2:{NFSU2_TR(0x6e12d2);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e12d8:{NFSU2_TR(0x6e12d8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e12dc:{NFSU2_TR(0x6e12dc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e12e0:{NFSU2_TR(0x6e12e0);
{u32 ea_=u32(r4(R+24)+u32(348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e12e6:{NFSU2_TR(0x6e12e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e12e7:{NFSU2_TR(0x6e12e7);
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
B6e12ea:{NFSU2_TR(0x6e12ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e12ed:L6e12ed:{c.instructions+=5;NFSU2_TR(0x6e12ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e12ef:{NFSU2_TR(0x6e12ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e12f2:{NFSU2_TR(0x6e12f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e12f5:{NFSU2_TR(0x6e12f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e12f8:{NFSU2_TR(0x6e12f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e12fb:L6e12fb:{c.instructions+=16;NFSU2_TR(0x6e12fb);
w4(R+4,u32(0x3f800000ull));
}
B6e1300:{NFSU2_TR(0x6e1300);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e1302:{NFSU2_TR(0x6e1302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1303:{NFSU2_TR(0x6e1303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1309:{NFSU2_TR(0x6e1309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e130f:{NFSU2_TR(0x6e130f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1315:{NFSU2_TR(0x6e1315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e131b:{NFSU2_TR(0x6e131b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1321:{NFSU2_TR(0x6e1321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1327:{NFSU2_TR(0x6e1327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e132d:{NFSU2_TR(0x6e132d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1333:{NFSU2_TR(0x6e1333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1339:{NFSU2_TR(0x6e1339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e133f:{NFSU2_TR(0x6e133f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1340:{NFSU2_TR(0x6e1340);
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
B6e1343:{NFSU2_TR(0x6e1343);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1350:L6e1350:{c.instructions+=5;NFSU2_TR(0x6e1350);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1351:{NFSU2_TR(0x6e1351);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1354:{NFSU2_TR(0x6e1354);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e1357:{NFSU2_TR(0x6e1357);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e1359:{NFSU2_TR(0x6e1359);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e1361;}}
}
B6e135b:L6e135b:{c.instructions+=1;NFSU2_TR(0x6e135b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1361:L6e1361:{c.instructions+=6;NFSU2_TR(0x6e1361);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1365:{NFSU2_TR(0x6e1365);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1367:{NFSU2_TR(0x6e1367);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e136a:{NFSU2_TR(0x6e136a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e136c:{NFSU2_TR(0x6e136c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e136f:{NFSU2_TR(0x6e136f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e1377;}}
}
B6e1371:L6e1371:{c.instructions+=1;NFSU2_TR(0x6e1371);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1377:L6e1377:{c.instructions+=6;NFSU2_TR(0x6e1377);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e137b:{NFSU2_TR(0x6e137b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e137d:{NFSU2_TR(0x6e137d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1380:{NFSU2_TR(0x6e1380);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e1382:{NFSU2_TR(0x6e1382);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e1385:{NFSU2_TR(0x6e1385);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e138d;}}
}
B6e1387:L6e1387:{c.instructions+=1;NFSU2_TR(0x6e1387);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e138d:L6e138d:{c.instructions+=6;NFSU2_TR(0x6e138d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1391:{NFSU2_TR(0x6e1391);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1393:{NFSU2_TR(0x6e1393);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1396:{NFSU2_TR(0x6e1396);
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
B6e1398:{NFSU2_TR(0x6e1398);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e139b:{NFSU2_TR(0x6e139b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e13a3;}}
}
B6e139d:L6e139d:{c.instructions+=1;NFSU2_TR(0x6e139d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e13a3:L6e13a3:{c.instructions+=10;NFSU2_TR(0x6e13a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e13a7:{NFSU2_TR(0x6e13a7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e13a9:{NFSU2_TR(0x6e13a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e13ac:{NFSU2_TR(0x6e13ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e13b0:{NFSU2_TR(0x6e13b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e13b2:{NFSU2_TR(0x6e13b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e13b5:{NFSU2_TR(0x6e13b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e13b9:{NFSU2_TR(0x6e13b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e13bb:{NFSU2_TR(0x6e13bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e13bc:{NFSU2_TR(0x6e13bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e13c0:L6e13c0:{c.instructions+=12;NFSU2_TR(0x6e13c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e13c1:{NFSU2_TR(0x6e13c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e13c5:{NFSU2_TR(0x6e13c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e13c6:{NFSU2_TR(0x6e13c6);
__builtin_memmove((R+24),(R+4),4);
}
B6e13c8:{NFSU2_TR(0x6e13c8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e13cc:{NFSU2_TR(0x6e13cc);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e13cf:{NFSU2_TR(0x6e13cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e13d2:{NFSU2_TR(0x6e13d2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e13d4:{NFSU2_TR(0x6e13d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e13d5:{NFSU2_TR(0x6e13d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e13d6:{NFSU2_TR(0x6e13d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e13d8:{NFSU2_TR(0x6e13d8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e13e0;}}
}
B6e13da:L6e13da:{c.instructions+=1;NFSU2_TR(0x6e13da);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e13e0:L6e13e0:{c.instructions+=6;NFSU2_TR(0x6e13e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e13e3:{NFSU2_TR(0x6e13e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6e13e6:{NFSU2_TR(0x6e13e6);
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
B6e13e8:{NFSU2_TR(0x6e13e8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e13ec:{NFSU2_TR(0x6e13ec);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e13ef:{NFSU2_TR(0x6e13ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e13f7;}}
}
B6e13f1:L6e13f1:{c.instructions+=1;NFSU2_TR(0x6e13f1);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e13f7:L6e13f7:{c.instructions+=5;NFSU2_TR(0x6e13f7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e13fa:{NFSU2_TR(0x6e13fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e13fc:{NFSU2_TR(0x6e13fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e13ff:{NFSU2_TR(0x6e13ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1400:{NFSU2_TR(0x6e1400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1405ull));
TAIL_STATIC(0x63e570u,63e);
}
B6e1405:L6e1405:{c.instructions+=10;NFSU2_TR(0x6e1405);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1409:{NFSU2_TR(0x6e1409);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e140d:{NFSU2_TR(0x6e140d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1417:{NFSU2_TR(0x6e1417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1421:{NFSU2_TR(0x6e1421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1427:{NFSU2_TR(0x6e1427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e142d:{NFSU2_TR(0x6e142d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1434:{NFSU2_TR(0x6e1434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1435:{NFSU2_TR(0x6e1435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e1436:{NFSU2_TR(0x6e1436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1440:L6e1440:{c.instructions+=11;NFSU2_TR(0x6e1440);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1441:{NFSU2_TR(0x6e1441);
__builtin_memmove((R+20),(R+16),4);
}
B6e1443:{NFSU2_TR(0x6e1443);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6e1446:{NFSU2_TR(0x6e1446);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1449:{NFSU2_TR(0x6e1449);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e144a:{NFSU2_TR(0x6e144a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e144b:{NFSU2_TR(0x6e144b);
__builtin_memmove((R+12),(R+4),4);
}
B6e144d:{NFSU2_TR(0x6e144d);
s1(0x8aaca0,u8(0x1ull));
}
B6e1454:{NFSU2_TR(0x6e1454);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1457:{NFSU2_TR(0x6e1457);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1458:{NFSU2_TR(0x6e1458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e145dull));
TAIL_STATIC(0x6d82d0u,6d8);
}
B6e145d:L6e145d:{c.instructions+=2;NFSU2_TR(0x6e145d);
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
B6e145f:{NFSU2_TR(0x6e145f);
if(r1(R+518)){{goto L6e148e;}}
}
B6e1461:L6e1461:{c.instructions+=2;NFSU2_TR(0x6e1461);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1464:{NFSU2_TR(0x6e1464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1469ull));
TAIL_STATIC(0x6d82d0u,6d8);
}
B6e1469:L6e1469:{c.instructions+=3;NFSU2_TR(0x6e1469);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e146f:{NFSU2_TR(0x6e146f);
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
B6e1471:{NFSU2_TR(0x6e1471);
if(r1(R+518)){{goto L6e148e;}}
}
B6e1473:L6e1473:{c.instructions+=2;NFSU2_TR(0x6e1473);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1476:{NFSU2_TR(0x6e1476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e147bull));
TAIL_STATIC(0x6d82d0u,6d8);
}
B6e147b:L6e147b:{c.instructions+=4;NFSU2_TR(0x6e147b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e147e:{NFSU2_TR(0x6e147e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e1481:{NFSU2_TR(0x6e1481);
__builtin_memmove((R+4),(R+0),4);
}
B6e1483:{NFSU2_TR(0x6e1483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1488ull));
{goto L6e1620;}
}
B6e1488:L6e1488:{c.instructions+=2;NFSU2_TR(0x6e1488);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e148b:{NFSU2_TR(0x6e148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e148e:L6e148e:{c.instructions+=3;NFSU2_TR(0x6e148e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1491:{NFSU2_TR(0x6e1491);
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
B6e1493:{NFSU2_TR(0x6e1493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e149c;}}
}
B6e1495:L6e1495:{c.instructions+=1;NFSU2_TR(0x6e1495);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e149c:L6e149c:{c.instructions+=4;NFSU2_TR(0x6e149c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e149f:{NFSU2_TR(0x6e149f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e14a2:{NFSU2_TR(0x6e14a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14a3:{NFSU2_TR(0x6e14a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e14a8ull));
TAIL_STATIC(0x4047f0u,404);
}
B6e14a8:L6e14a8:{c.instructions+=5;NFSU2_TR(0x6e14a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e14ab:{NFSU2_TR(0x6e14ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e14ae:{NFSU2_TR(0x6e14ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e14b0:{NFSU2_TR(0x6e14b0);
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
B6e14b2:{NFSU2_TR(0x6e14b2);
if(r1(R+518)){{goto L6e15df;}}
}
B6e14b8:L6e14b8:{c.instructions+=1;NFSU2_TR(0x6e14b8);
__builtin_memmove((R+4),(R+0),4);
}
B6e14ba:L6e14ba:{c.instructions+=7;NFSU2_TR(0x6e14ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e14bd:{NFSU2_TR(0x6e14bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e14c0:{NFSU2_TR(0x6e14c0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e14c5:{NFSU2_TR(0x6e14c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e14c7:{NFSU2_TR(0x6e14c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14c8:{NFSU2_TR(0x6e14c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14c9:{NFSU2_TR(0x6e14c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14ca:L6e14ca:{c.instructions+=1;NFSU2_TR(0x6e14ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e14cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e14cd:L6e14cd:{c.instructions+=4;NFSU2_TR(0x6e14cd);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e14d2:{NFSU2_TR(0x6e14d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e14d4:{NFSU2_TR(0x6e14d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14d5:{NFSU2_TR(0x6e14d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e14dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e14db:L6e14db:{c.instructions+=6;NFSU2_TR(0x6e14db);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e14e0:{NFSU2_TR(0x6e14e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e14e2:{NFSU2_TR(0x6e14e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e14e5:{NFSU2_TR(0x6e14e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14e6:{NFSU2_TR(0x6e14e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14e7:{NFSU2_TR(0x6e14e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e14edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e14ed:L6e14ed:{c.instructions+=5;NFSU2_TR(0x6e14ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e14f0:{NFSU2_TR(0x6e14f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e14f1:{NFSU2_TR(0x6e14f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e14f5:{NFSU2_TR(0x6e14f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x164ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e14fc:{NFSU2_TR(0x6e14fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1501ull));
TAIL_STATIC(0x6db820u,6db);
}
B6e1501:L6e1501:{c.instructions+=4;NFSU2_TR(0x6e1501);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e1504:{NFSU2_TR(0x6e1504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1505:{NFSU2_TR(0x6e1505);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e1509:{NFSU2_TR(0x6e1509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e150eull));
TAIL_STATIC(0x6db7f0u,6db);
}
B6e150e:L6e150e:{c.instructions+=3;NFSU2_TR(0x6e150e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1514:{NFSU2_TR(0x6e1514);
w4(R+4,u32(0x10ull));
}
B6e1519:{NFSU2_TR(0x6e1519);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B6e151d:L6e151d:{c.instructions+=1;NFSU2_TR(0x6e151d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6e151f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e151du);}goto L6e151d;}
}
B6e151f:L6e151f:{c.instructions+=3;NFSU2_TR(0x6e151f);
w4(R+4,u32(0x10ull));
}
B6e1524:{NFSU2_TR(0x6e1524);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1527:{NFSU2_TR(0x6e1527);
w4(R+28,u32(0x8aab20ull));
}
B6e152c:L6e152c:{c.instructions+=1;NFSU2_TR(0x6e152c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6e152e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e152cu);}goto L6e152c;}
}
B6e152e:L6e152e:{c.instructions+=3;NFSU2_TR(0x6e152e);
w4(R+4,u32(0x10ull));
}
B6e1533:{NFSU2_TR(0x6e1533);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1536:{NFSU2_TR(0x6e1536);
w4(R+28,u32(0x8aabe0ull));
}
B6e153b:L6e153b:{c.instructions+=1;NFSU2_TR(0x6e153b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6e153d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e153bu);}goto L6e153b;}
}
B6e153d:L6e153d:{c.instructions+=3;NFSU2_TR(0x6e153d);
w4(R+4,u32(0x10ull));
}
B6e1542:{NFSU2_TR(0x6e1542);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1546:{NFSU2_TR(0x6e1546);
w4(R+28,u32(0x8aac60ull));
}
B6e154b:L6e154b:{c.instructions+=1;NFSU2_TR(0x6e154b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6e154d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e154bu);}goto L6e154b;}
}
B6e154d:L6e154d:{c.instructions+=4;NFSU2_TR(0x6e154d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e1550:{NFSU2_TR(0x6e1550);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1553:{NFSU2_TR(0x6e1553);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e1555:{NFSU2_TR(0x6e1555);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e155d;}}
}
B6e1557:L6e1557:{c.instructions+=1;NFSU2_TR(0x6e1557);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e155d:L6e155d:{c.instructions+=6;NFSU2_TR(0x6e155d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e1563:{NFSU2_TR(0x6e1563);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1566:{NFSU2_TR(0x6e1566);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e1568:{NFSU2_TR(0x6e1568);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e156a:{NFSU2_TR(0x6e156a);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e156d:{NFSU2_TR(0x6e156d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e1575;}}
}
B6e156f:L6e156f:{c.instructions+=1;NFSU2_TR(0x6e156f);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e1575:L6e1575:{c.instructions+=8;NFSU2_TR(0x6e1575);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e157b:{NFSU2_TR(0x6e157b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e157d:{NFSU2_TR(0x6e157d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1581:{NFSU2_TR(0x6e1581);
{u32 ea_=u32(u32(9075312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1587:{NFSU2_TR(0x6e1587);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e1589:{NFSU2_TR(0x6e1589);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e158b:{NFSU2_TR(0x6e158b);
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
B6e158e:{NFSU2_TR(0x6e158e);
if(r1(R+514)){{goto L6e15a1;}}
}
B6e1590:L6e1590:{c.instructions+=5;NFSU2_TR(0x6e1590);
{u32 ea_=u32(u32(9075316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e1596:{NFSU2_TR(0x6e1596);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e159a:{NFSU2_TR(0x6e159a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e159c:{NFSU2_TR(0x6e159c);
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
B6e159f:{NFSU2_TR(0x6e159f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e1603;}}
}
B6e15a1:L6e15a1:{c.instructions+=17;NFSU2_TR(0x6e15a1);
{u32 ea_=u32(u32(9075312u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6e15a7:{NFSU2_TR(0x6e15a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e15ab:{NFSU2_TR(0x6e15ab);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e15b1:{NFSU2_TR(0x6e15b1);
__builtin_memmove(gp(0x8a7a74),(R+8),4);
}
B6e15b7:{NFSU2_TR(0x6e15b7);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B6e15b9:{NFSU2_TR(0x6e15b9);
s1(0x8aaca0,u8(0x0ull));
}
B6e15c0:{NFSU2_TR(0x6e15c0);
{u32 ea_=u32(u32(9075320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e15c6:{NFSU2_TR(0x6e15c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e15c8:{NFSU2_TR(0x6e15c8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e15ce:{NFSU2_TR(0x6e15ce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6e15d2:{NFSU2_TR(0x6e15d2);
{u32 ea_=u32(u32(9075324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e15d8:{NFSU2_TR(0x6e15d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e15d9:{NFSU2_TR(0x6e15d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e15da:{NFSU2_TR(0x6e15da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e15db:{NFSU2_TR(0x6e15db);
__builtin_memmove((R+16),(R+20),4);
}
B6e15dd:{NFSU2_TR(0x6e15dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e15de:{NFSU2_TR(0x6e15de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e15df:L6e15df:{c.instructions+=2;NFSU2_TR(0x6e15df);
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
B6e15e1:{NFSU2_TR(0x6e15e1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e14bau);}goto L6e14ba;}}
}
B6e15e7:L6e15e7:{c.instructions+=8;NFSU2_TR(0x6e15e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e15ed:{NFSU2_TR(0x6e15ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e15f3:{NFSU2_TR(0x6e15f3);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6e15f9:{NFSU2_TR(0x6e15f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e15fb:{NFSU2_TR(0x6e15fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e15fc:{NFSU2_TR(0x6e15fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e15fd:{NFSU2_TR(0x6e15fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e15fe:{NFSU2_TR(0x6e15fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e14cau);}goto L6e14ca;}
}
B6e1603:L6e1603:{c.instructions+=8;NFSU2_TR(0x6e1603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1604:{NFSU2_TR(0x6e1604);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e1606:{NFSU2_TR(0x6e1606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1607:{NFSU2_TR(0x6e1607);
s1(0x8aaca0,u8(0x0ull));
}
B6e160e:{NFSU2_TR(0x6e160e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e160f:{NFSU2_TR(0x6e160f);
__builtin_memmove((R+16),(R+20),4);
}
B6e1611:{NFSU2_TR(0x6e1611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e1612:{NFSU2_TR(0x6e1612);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1620:L6e1620:{c.instructions+=8;NFSU2_TR(0x6e1620);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1621:{NFSU2_TR(0x6e1621);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1622:{NFSU2_TR(0x6e1622);
__builtin_memmove((R+24),(R+4),4);
}
B6e1624:{NFSU2_TR(0x6e1624);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1627:{NFSU2_TR(0x6e1627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e162a:{NFSU2_TR(0x6e162a);
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
B6e162c:{NFSU2_TR(0x6e162c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e162d:{NFSU2_TR(0x6e162d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1632ull));
TAIL_STATIC(0x4047f0u,404);
}
B6e1632:L6e1632:{c.instructions+=4;NFSU2_TR(0x6e1632);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6e1637:{NFSU2_TR(0x6e1637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e1639:{NFSU2_TR(0x6e1639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e163a:{NFSU2_TR(0x6e163a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1640ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e1640:L6e1640:{c.instructions+=3;NFSU2_TR(0x6e1640);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e1646:{NFSU2_TR(0x6e1646);
u8 U[5];
__builtin_memmove((U+3),gp(0x8aaca0),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e164c:{NFSU2_TR(0x6e164c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e165f;}}
}
B6e164e:L6e164e:{c.instructions+=3;NFSU2_TR(0x6e164e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1651:{NFSU2_TR(0x6e1651);
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
B6e1653:{NFSU2_TR(0x6e1653);
if(r1(R+518)){{goto L6e165f;}}
}
B6e1655:L6e1655:{c.instructions+=2;NFSU2_TR(0x6e1655);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6e1658:{NFSU2_TR(0x6e1658);
if(r1(R+518)){{goto L6e165f;}}
}
B6e165a:L6e165a:{c.instructions+=1;NFSU2_TR(0x6e165a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e165full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1440u);}goto L6e1440;}
}
B6e165f:L6e165f:{c.instructions+=4;NFSU2_TR(0x6e165f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1662:{NFSU2_TR(0x6e1662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1663:{NFSU2_TR(0x6e1663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e1664:{NFSU2_TR(0x6e1664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1670:L6e1670:{c.instructions+=5;NFSU2_TR(0x6e1670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1672:{NFSU2_TR(0x6e1672);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1678:{NFSU2_TR(0x6e1678);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e167c:{NFSU2_TR(0x6e167c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e167e:{NFSU2_TR(0x6e167e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1690:L6e1690:{c.instructions+=5;NFSU2_TR(0x6e1690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1692:{NFSU2_TR(0x6e1692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1698:{NFSU2_TR(0x6e1698);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e169c:{NFSU2_TR(0x6e169c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e169e:{NFSU2_TR(0x6e169e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e16b0:L6e16b0:{c.instructions+=5;NFSU2_TR(0x6e16b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e16b2:{NFSU2_TR(0x6e16b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e16b8:{NFSU2_TR(0x6e16b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e16bc:{NFSU2_TR(0x6e16bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e16be:{NFSU2_TR(0x6e16be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e16d0:L6e16d0:{c.instructions+=5;NFSU2_TR(0x6e16d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e16d2:{NFSU2_TR(0x6e16d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e16d8:{NFSU2_TR(0x6e16d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e16dc:{NFSU2_TR(0x6e16dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e16de:{NFSU2_TR(0x6e16de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e16f0:L6e16f0:{c.instructions+=4;NFSU2_TR(0x6e16f0);
__builtin_memmove((R+0),(R+4),4);
}
B6e16f2:{NFSU2_TR(0x6e16f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e16f6:{NFSU2_TR(0x6e16f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e16f8:{NFSU2_TR(0x6e16f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1700:L6e1700:{c.instructions+=10;NFSU2_TR(0x6e1700);
__builtin_memmove((R+0),(R+4),4);
}
B6e1702:{NFSU2_TR(0x6e1702);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1704:{NFSU2_TR(0x6e1704);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1707:{NFSU2_TR(0x6e1707);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e170a:{NFSU2_TR(0x6e170a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e1710:{NFSU2_TR(0x6e1710);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1716:{NFSU2_TR(0x6e1716);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e171a:{NFSU2_TR(0x6e171a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x154ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1724:{NFSU2_TR(0x6e1724);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e172a:{NFSU2_TR(0x6e172a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1730:L6e1730:{c.instructions+=7;NFSU2_TR(0x6e1730);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1731:{NFSU2_TR(0x6e1731);
__builtin_memmove((R+12),(R+4),4);
}
B6e1733:{NFSU2_TR(0x6e1733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1735:{NFSU2_TR(0x6e1735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1736:{NFSU2_TR(0x6e1736);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e1738:{NFSU2_TR(0x6e1738);
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
B6e173a:{NFSU2_TR(0x6e173a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e17c2;}}
}
B6e1740:L6e1740:{c.instructions+=3;NFSU2_TR(0x6e1740);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1741:{NFSU2_TR(0x6e1741);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e1745:{NFSU2_TR(0x6e1745);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1746:L6e1746:{c.instructions+=6;NFSU2_TR(0x6e1746);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1749:{NFSU2_TR(0x6e1749);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6e174c:{NFSU2_TR(0x6e174c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e174f:{NFSU2_TR(0x6e174f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B6e1752:{NFSU2_TR(0x6e1752);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1755:{NFSU2_TR(0x6e1755);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e17b9;}}
}
B6e1757:L6e1757:{c.instructions+=1;NFSU2_TR(0x6e1757);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6e17c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e175e:L6e175e:{c.instructions+=4;NFSU2_TR(0x6e175e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1761:{NFSU2_TR(0x6e1761);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a89e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e1768:{NFSU2_TR(0x6e1768);
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
B6e176a:{NFSU2_TR(0x6e176a);
if(r1(R+518)){{goto L6e17b9;}}
}
B6e176c:L6e176c:{c.instructions+=4;NFSU2_TR(0x6e176c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e176f:{NFSU2_TR(0x6e176f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1770:{NFSU2_TR(0x6e1770);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e1773:{NFSU2_TR(0x6e1773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1778ull));
TAIL_STATIC(0x6db0d0u,6db);
}
B6e1778:L6e1778:{c.instructions+=3;NFSU2_TR(0x6e1778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e177b:{NFSU2_TR(0x6e177b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a89e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e1782:{NFSU2_TR(0x6e1782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1787ull));
TAIL_STATIC(0x6dae90u,6da);
}
B6e1787:L6e1787:{c.instructions+=1;NFSU2_TR(0x6e1787);
{goto L6e17b9;}
}
B6e1789:L6e1789:{c.instructions+=2;NFSU2_TR(0x6e1789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e178b:{NFSU2_TR(0x6e178b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1790ull));
TAIL_STATIC(0x6dd2f0u,6dd);
}
B6e1790:L6e1790:{c.instructions+=1;NFSU2_TR(0x6e1790);
{goto L6e17b9;}
}
B6e1792:L6e1792:{c.instructions+=4;NFSU2_TR(0x6e1792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e1794:{NFSU2_TR(0x6e1794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1797:{NFSU2_TR(0x6e1797);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e179a:{NFSU2_TR(0x6e179a);
{goto L6e17b9;}
}
B6e179c:L6e179c:{c.instructions+=3;NFSU2_TR(0x6e179c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e179f:{NFSU2_TR(0x6e179f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17a0:{NFSU2_TR(0x6e17a0);
{goto L6e17b1;}
}
B6e17a2:L6e17a2:{c.instructions+=3;NFSU2_TR(0x6e17a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e17a5:{NFSU2_TR(0x6e17a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17a6:{NFSU2_TR(0x6e17a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e17abull));
TAIL_STATIC(0x6dc060u,6dc);
}
B6e17ab:L6e17ab:{c.instructions+=1;NFSU2_TR(0x6e17ab);
{goto L6e17b6;}
}
B6e17ad:L6e17ad:{c.instructions+=2;NFSU2_TR(0x6e17ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e17b0:{NFSU2_TR(0x6e17b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17b1:L6e17b1:{c.instructions+=1;NFSU2_TR(0x6e17b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e17b6ull));
TAIL_STATIC(0x6dbf30u,6db);
}
B6e17b6:L6e17b6:{c.instructions+=1;NFSU2_TR(0x6e17b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e17b9:L6e17b9:{c.instructions+=4;NFSU2_TR(0x6e17b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e17bb:{NFSU2_TR(0x6e17bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e17bc:{NFSU2_TR(0x6e17bc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e17be:{NFSU2_TR(0x6e17be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1746u);}goto L6e1746;}}
}
B6e17c0:L6e17c0:{c.instructions+=2;NFSU2_TR(0x6e17c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e17c1:{NFSU2_TR(0x6e17c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e17c2:L6e17c2:{c.instructions+=3;NFSU2_TR(0x6e17c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e17c3:{NFSU2_TR(0x6e17c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e17c4:{NFSU2_TR(0x6e17c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e17e0:L6e17e0:{c.instructions+=7;NFSU2_TR(0x6e17e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17e1:{NFSU2_TR(0x6e17e1);
__builtin_memmove((R+12),(R+4),4);
}
B6e17e3:{NFSU2_TR(0x6e17e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e17e5:{NFSU2_TR(0x6e17e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17e6:{NFSU2_TR(0x6e17e6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e17e8:{NFSU2_TR(0x6e17e8);
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
B6e17ea:{NFSU2_TR(0x6e17ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e1865;}}
}
B6e17ec:L6e17ec:{c.instructions+=3;NFSU2_TR(0x6e17ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17ed:{NFSU2_TR(0x6e17ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e17f1:{NFSU2_TR(0x6e17f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e17f2:L6e17f2:{c.instructions+=6;NFSU2_TR(0x6e17f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e17f5:{NFSU2_TR(0x6e17f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6e17f8:{NFSU2_TR(0x6e17f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e17fb:{NFSU2_TR(0x6e17fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B6e17fe:{NFSU2_TR(0x6e17fe);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1801:{NFSU2_TR(0x6e1801);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6e185c;}}
}
B6e1803:L6e1803:{c.instructions+=1;NFSU2_TR(0x6e1803);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6e186cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e180a:L6e180a:{c.instructions+=4;NFSU2_TR(0x6e180a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e180d:{NFSU2_TR(0x6e180d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a89e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e1814:{NFSU2_TR(0x6e1814);
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
B6e1816:{NFSU2_TR(0x6e1816);
if(r1(R+518)){{goto L6e185c;}}
}
B6e1818:L6e1818:{c.instructions+=4;NFSU2_TR(0x6e1818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e181b:{NFSU2_TR(0x6e181b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e181c:{NFSU2_TR(0x6e181c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e181f:{NFSU2_TR(0x6e181f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1824ull));
TAIL_STATIC(0x6db0d0u,6db);
}
B6e1824:L6e1824:{c.instructions+=3;NFSU2_TR(0x6e1824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1827:{NFSU2_TR(0x6e1827);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a89e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e182e:{NFSU2_TR(0x6e182e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1833ull));
TAIL_STATIC(0x6dae90u,6da);
}
B6e1833:L6e1833:{c.instructions+=1;NFSU2_TR(0x6e1833);
{goto L6e185c;}
}
B6e1835:L6e1835:{c.instructions+=4;NFSU2_TR(0x6e1835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e1837:{NFSU2_TR(0x6e1837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e183a:{NFSU2_TR(0x6e183a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e183d:{NFSU2_TR(0x6e183d);
{goto L6e185c;}
}
B6e183f:L6e183f:{c.instructions+=3;NFSU2_TR(0x6e183f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1842:{NFSU2_TR(0x6e1842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1843:{NFSU2_TR(0x6e1843);
{goto L6e1854;}
}
B6e1845:L6e1845:{c.instructions+=3;NFSU2_TR(0x6e1845);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1848:{NFSU2_TR(0x6e1848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1849:{NFSU2_TR(0x6e1849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e184eull));
TAIL_STATIC(0x6dc060u,6dc);
}
B6e184e:L6e184e:{c.instructions+=1;NFSU2_TR(0x6e184e);
{goto L6e1859;}
}
B6e1850:L6e1850:{c.instructions+=2;NFSU2_TR(0x6e1850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1853:{NFSU2_TR(0x6e1853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1854:L6e1854:{c.instructions+=1;NFSU2_TR(0x6e1854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1859ull));
TAIL_STATIC(0x6dbf30u,6db);
}
B6e1859:L6e1859:{c.instructions+=1;NFSU2_TR(0x6e1859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e185c:L6e185c:{c.instructions+=4;NFSU2_TR(0x6e185c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e185e:{NFSU2_TR(0x6e185e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e185f:{NFSU2_TR(0x6e185f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1861:{NFSU2_TR(0x6e1861);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e17f2u);}goto L6e17f2;}}
}
B6e1863:L6e1863:{c.instructions+=2;NFSU2_TR(0x6e1863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1864:{NFSU2_TR(0x6e1864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e1865:L6e1865:{c.instructions+=3;NFSU2_TR(0x6e1865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1866:{NFSU2_TR(0x6e1866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e1867:{NFSU2_TR(0x6e1867);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1890:L6e1890:{c.instructions+=4;NFSU2_TR(0x6e1890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1893:{NFSU2_TR(0x6e1893);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1897:{NFSU2_TR(0x6e1897);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e189a:{NFSU2_TR(0x6e189a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e18a0:L6e18a0:{c.instructions+=2;NFSU2_TR(0x6e18a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18a3:{NFSU2_TR(0x6e18a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e18b0:L6e18b0:{c.instructions+=12;NFSU2_TR(0x6e18b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e18b3:{NFSU2_TR(0x6e18b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18b6:{NFSU2_TR(0x6e18b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6e18b9:{NFSU2_TR(0x6e18b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e18bc:{NFSU2_TR(0x6e18bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18c0:{NFSU2_TR(0x6e18c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e18c2:{NFSU2_TR(0x6e18c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18c5:{NFSU2_TR(0x6e18c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e18c9:{NFSU2_TR(0x6e18c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e18cc:{NFSU2_TR(0x6e18cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e18cf:{NFSU2_TR(0x6e18cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e18d0:{NFSU2_TR(0x6e18d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e18d5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e17e0u);}goto L6e17e0;}
}
B6e18d5:L6e18d5:{c.instructions+=1;NFSU2_TR(0x6e18d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e18e0:L6e18e0:{c.instructions+=9;NFSU2_TR(0x6e18e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18e4:{NFSU2_TR(0x6e18e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e18e7:{NFSU2_TR(0x6e18e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e18e8:{NFSU2_TR(0x6e18e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18eb:{NFSU2_TR(0x6e18eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e18ee:{NFSU2_TR(0x6e18ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e18f1:{NFSU2_TR(0x6e18f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e18f5:{NFSU2_TR(0x6e18f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e18f8:{NFSU2_TR(0x6e18f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e18fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1730u);}goto L6e1730;}
}
B6e18fd:L6e18fd:{c.instructions+=1;NFSU2_TR(0x6e18fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1900:L6e1900:{c.instructions+=7;NFSU2_TR(0x6e1900);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1901:{NFSU2_TR(0x6e1901);
__builtin_memmove((R+12),(R+4),4);
}
B6e1903:{NFSU2_TR(0x6e1903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1905:{NFSU2_TR(0x6e1905);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1906:{NFSU2_TR(0x6e1906);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e1908:{NFSU2_TR(0x6e1908);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e190a:{NFSU2_TR(0x6e190a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e195e;}}
}
B6e190c:L6e190c:{c.instructions+=3;NFSU2_TR(0x6e190c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e190d:{NFSU2_TR(0x6e190d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e190e:{NFSU2_TR(0x6e190e);
__builtin_memmove((R+28),(R+28),4);
}
B6e1910:L6e1910:{c.instructions+=4;NFSU2_TR(0x6e1910);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1913:{NFSU2_TR(0x6e1913);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6e1916:{NFSU2_TR(0x6e1916);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e1918:{NFSU2_TR(0x6e1918);
if(r1(R+518)){{goto L6e1955;}}
}
B6e191a:L6e191a:{c.instructions+=3;NFSU2_TR(0x6e191a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e191d:{NFSU2_TR(0x6e191d);
w1(R+512,u8((r4(R+0))<(u32(0x6ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e1920:{NFSU2_TR(0x6e1920);
if(r1(R+518)){{goto L6e1928;}}
}
B6e1922:L6e1922:{c.instructions+=2;NFSU2_TR(0x6e1922);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e1923:{NFSU2_TR(0x6e1923);
if(r1(R+518)){{goto L6e1978;}}
}
B6e1925:L6e1925:{c.instructions+=2;NFSU2_TR(0x6e1925);
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
B6e1926:{NFSU2_TR(0x6e1926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1949;}}
}
B6e1928:L6e1928:{c.instructions+=3;NFSU2_TR(0x6e1928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e192b:{NFSU2_TR(0x6e192b);
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
B6e192d:{NFSU2_TR(0x6e192d);
if(r1(R+518)){{goto L6e1942;}}
}
B6e192f:L6e192f:{c.instructions+=2;NFSU2_TR(0x6e192f);
__builtin_memmove((R+4),(R+28),4);
}
B6e1931:{NFSU2_TR(0x6e1931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1936ull));
TAIL_STATIC(0x6dc8e0u,6dc);
}
B6e1936:L6e1936:{c.instructions+=1;NFSU2_TR(0x6e1936);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1938:L6e1938:{c.instructions+=2;NFSU2_TR(0x6e1938);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1939:{NFSU2_TR(0x6e1939);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e193full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e193f:L6e193f:{c.instructions+=1;NFSU2_TR(0x6e193f);
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
B6e1942:L6e1942:{c.instructions+=1;NFSU2_TR(0x6e1942);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1949:L6e1949:{c.instructions+=3;NFSU2_TR(0x6e1949);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e194b:{NFSU2_TR(0x6e194b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e194c:{NFSU2_TR(0x6e194c);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1952ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1952:L6e1952:{c.instructions+=1;NFSU2_TR(0x6e1952);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1955:L6e1955:{c.instructions+=4;NFSU2_TR(0x6e1955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1957:{NFSU2_TR(0x6e1957);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e1958:{NFSU2_TR(0x6e1958);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e195a:{NFSU2_TR(0x6e195a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1910u);}goto L6e1910;}}
}
B6e195c:L6e195c:{c.instructions+=2;NFSU2_TR(0x6e195c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e195d:{NFSU2_TR(0x6e195d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e195e:L6e195e:{c.instructions+=3;NFSU2_TR(0x6e195e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1961:{NFSU2_TR(0x6e1961);
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
B6e1963:{NFSU2_TR(0x6e1963);
if(r1(R+518)){{goto L6e1975;}}
}
B6e1965:L6e1965:{c.instructions+=5;NFSU2_TR(0x6e1965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e1967:{NFSU2_TR(0x6e1967);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e196a:{NFSU2_TR(0x6e196a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e196b:{NFSU2_TR(0x6e196b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e196c:{NFSU2_TR(0x6e196c);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1972ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1972:L6e1972:{c.instructions+=1;NFSU2_TR(0x6e1972);
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
B6e1975:L6e1975:{c.instructions+=3;NFSU2_TR(0x6e1975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e1976:{NFSU2_TR(0x6e1976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e1977:{NFSU2_TR(0x6e1977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1978:L6e1978:{c.instructions+=3;NFSU2_TR(0x6e1978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e197b:{NFSU2_TR(0x6e197b);
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
B6e197d:{NFSU2_TR(0x6e197d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1942u);}goto L6e1942;}}
}
B6e197f:L6e197f:{c.instructions+=2;NFSU2_TR(0x6e197f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1982:{NFSU2_TR(0x6e1982);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1942u);}goto L6e1942;}}
}
B6e1984:L6e1984:{c.instructions+=2;NFSU2_TR(0x6e1984);
__builtin_memmove((R+4),(R+28),4);
}
B6e1986:{NFSU2_TR(0x6e1986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e198bull));
TAIL_STATIC(0x6dc960u,6dc);
}
B6e198b:L6e198b:{c.instructions+=2;NFSU2_TR(0x6e198b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e198d:{NFSU2_TR(0x6e198d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1938u);}goto L6e1938;}
}
B6e1990:L6e1990:{c.instructions+=8;NFSU2_TR(0x6e1990);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1991:{NFSU2_TR(0x6e1991);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1992:{NFSU2_TR(0x6e1992);
__builtin_memmove((R+12),(R+4),4);
}
B6e1994:{NFSU2_TR(0x6e1994);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1997:{NFSU2_TR(0x6e1997);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1998:{NFSU2_TR(0x6e1998);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e199a:{NFSU2_TR(0x6e199a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e199c:{NFSU2_TR(0x6e199c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e19c5;}}
}
B6e199e:L6e199e:{c.instructions+=1;NFSU2_TR(0x6e199e);
__builtin_memmove((R+28),(R+28),4);
}
B6e19a0:L6e19a0:{c.instructions+=4;NFSU2_TR(0x6e19a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e19a3:{NFSU2_TR(0x6e19a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6e19a6:{NFSU2_TR(0x6e19a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e19a8:{NFSU2_TR(0x6e19a8);
if(r1(R+518)){{goto L6e19bd;}}
}
B6e19aa:L6e19aa:{c.instructions+=2;NFSU2_TR(0x6e19aa);
__builtin_memmove((R+4),(R+24),4);
}
B6e19ac:{NFSU2_TR(0x6e19ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e19b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1900u);}goto L6e1900;}
}
B6e19b1:L6e19b1:{c.instructions+=3;NFSU2_TR(0x6e19b1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e19b3:{NFSU2_TR(0x6e19b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e19b4:{NFSU2_TR(0x6e19b4);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e19baull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e19ba:L6e19ba:{c.instructions+=1;NFSU2_TR(0x6e19ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e19bd:L6e19bd:{c.instructions+=4;NFSU2_TR(0x6e19bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e19c0:{NFSU2_TR(0x6e19c0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e19c1:{NFSU2_TR(0x6e19c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e19c3:{NFSU2_TR(0x6e19c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e19a0u);}goto L6e19a0;}}
}
B6e19c5:L6e19c5:{c.instructions+=3;NFSU2_TR(0x6e19c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e19c8:{NFSU2_TR(0x6e19c8);
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
B6e19ca:{NFSU2_TR(0x6e19ca);
if(r1(R+518)){{goto L6e19dd;}}
}
B6e19cc:L6e19cc:{c.instructions+=5;NFSU2_TR(0x6e19cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e19cf:{NFSU2_TR(0x6e19cf);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e19d2:{NFSU2_TR(0x6e19d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e19d3:{NFSU2_TR(0x6e19d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e19d4:{NFSU2_TR(0x6e19d4);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e19daull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e19da:L6e19da:{c.instructions+=1;NFSU2_TR(0x6e19da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e19dd:L6e19dd:{c.instructions+=5;NFSU2_TR(0x6e19dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e19df:{NFSU2_TR(0x6e19df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e19e0:{NFSU2_TR(0x6e19e0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e19e2:{NFSU2_TR(0x6e19e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e19e4:{NFSU2_TR(0x6e19e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e1a32;}}
}
B6e19e6:L6e19e6:{c.instructions+=4;NFSU2_TR(0x6e19e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e19e9:{NFSU2_TR(0x6e19e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6e19ec:{NFSU2_TR(0x6e19ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e19ee:{NFSU2_TR(0x6e19ee);
if(r1(R+518)){{goto L6e1a2b;}}
}
B6e19f0:L6e19f0:{c.instructions+=3;NFSU2_TR(0x6e19f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e19f3:{NFSU2_TR(0x6e19f3);
w1(R+512,u8((r4(R+0))<(u32(0x6ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e19f6:{NFSU2_TR(0x6e19f6);
if(r1(R+518)){{goto L6e19fe;}}
}
B6e19f8:L6e19f8:{c.instructions+=2;NFSU2_TR(0x6e19f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e19f9:{NFSU2_TR(0x6e19f9);
if(r1(R+518)){{goto L6e1a4e;}}
}
B6e19fb:L6e19fb:{c.instructions+=2;NFSU2_TR(0x6e19fb);
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
B6e19fc:{NFSU2_TR(0x6e19fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1a1f;}}
}
B6e19fe:L6e19fe:{c.instructions+=3;NFSU2_TR(0x6e19fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e1a01:{NFSU2_TR(0x6e1a01);
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
B6e1a03:{NFSU2_TR(0x6e1a03);
if(r1(R+518)){{goto L6e1a18;}}
}
B6e1a05:L6e1a05:{c.instructions+=2;NFSU2_TR(0x6e1a05);
__builtin_memmove((R+4),(R+28),4);
}
B6e1a07:{NFSU2_TR(0x6e1a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a0cull));
TAIL_STATIC(0x6dc8e0u,6dc);
}
B6e1a0c:L6e1a0c:{c.instructions+=1;NFSU2_TR(0x6e1a0c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a0e:L6e1a0e:{c.instructions+=2;NFSU2_TR(0x6e1a0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a0f:{NFSU2_TR(0x6e1a0f);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a15ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1a15:L6e1a15:{c.instructions+=1;NFSU2_TR(0x6e1a15);
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
B6e1a18:L6e1a18:{c.instructions+=1;NFSU2_TR(0x6e1a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1a1f:L6e1a1f:{c.instructions+=3;NFSU2_TR(0x6e1a1f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a21:{NFSU2_TR(0x6e1a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a22:{NFSU2_TR(0x6e1a22);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a28ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1a28:L6e1a28:{c.instructions+=1;NFSU2_TR(0x6e1a28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1a2b:L6e1a2b:{c.instructions+=4;NFSU2_TR(0x6e1a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1a2d:{NFSU2_TR(0x6e1a2d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e1a2e:{NFSU2_TR(0x6e1a2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e1a30:{NFSU2_TR(0x6e1a30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e19e6u);}goto L6e19e6;}}
}
B6e1a32:L6e1a32:{c.instructions+=4;NFSU2_TR(0x6e1a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1a35:{NFSU2_TR(0x6e1a35);
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
B6e1a37:{NFSU2_TR(0x6e1a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e1a38:{NFSU2_TR(0x6e1a38);
if(r1(R+518)){{goto L6e1a4a;}}
}
B6e1a3a:L6e1a3a:{c.instructions+=5;NFSU2_TR(0x6e1a3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e1a3c:{NFSU2_TR(0x6e1a3c);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e1a3f:{NFSU2_TR(0x6e1a3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a40:{NFSU2_TR(0x6e1a40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a41:{NFSU2_TR(0x6e1a41);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a47ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1a47:L6e1a47:{c.instructions+=1;NFSU2_TR(0x6e1a47);
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
B6e1a4a:L6e1a4a:{c.instructions+=4;NFSU2_TR(0x6e1a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1a4b:{NFSU2_TR(0x6e1a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1a4c:{NFSU2_TR(0x6e1a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e1a4d:{NFSU2_TR(0x6e1a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1a4e:L6e1a4e:{c.instructions+=3;NFSU2_TR(0x6e1a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e1a51:{NFSU2_TR(0x6e1a51);
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
B6e1a53:{NFSU2_TR(0x6e1a53);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1a18u);}goto L6e1a18;}}
}
B6e1a55:L6e1a55:{c.instructions+=2;NFSU2_TR(0x6e1a55);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1a58:{NFSU2_TR(0x6e1a58);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1a18u);}goto L6e1a18;}}
}
B6e1a5a:L6e1a5a:{c.instructions+=2;NFSU2_TR(0x6e1a5a);
__builtin_memmove((R+4),(R+28),4);
}
B6e1a5c:{NFSU2_TR(0x6e1a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a61ull));
TAIL_STATIC(0x6dc960u,6dc);
}
B6e1a61:L6e1a61:{c.instructions+=2;NFSU2_TR(0x6e1a61);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a63:{NFSU2_TR(0x6e1a63);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1a0eu);}goto L6e1a0e;}
}
B6e1a70:L6e1a70:{c.instructions+=9;NFSU2_TR(0x6e1a70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a71:{NFSU2_TR(0x6e1a71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a72:{NFSU2_TR(0x6e1a72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a73:{NFSU2_TR(0x6e1a73);
__builtin_memmove((R+24),(R+4),4);
}
B6e1a75:{NFSU2_TR(0x6e1a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1a78:{NFSU2_TR(0x6e1a78);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e1a7a:{NFSU2_TR(0x6e1a7a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e1a7c:{NFSU2_TR(0x6e1a7c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e1a7e:{NFSU2_TR(0x6e1a7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e1aa7;}}
}
B6e1a80:L6e1a80:{c.instructions+=1;NFSU2_TR(0x6e1a80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a81:L6e1a81:{c.instructions+=4;NFSU2_TR(0x6e1a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1a84:{NFSU2_TR(0x6e1a84);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6e1a87:{NFSU2_TR(0x6e1a87);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e1a89:{NFSU2_TR(0x6e1a89);
if(r1(R+518)){{goto L6e1a9e;}}
}
B6e1a8b:L6e1a8b:{c.instructions+=2;NFSU2_TR(0x6e1a8b);
__builtin_memmove((R+4),(R+28),4);
}
B6e1a8d:{NFSU2_TR(0x6e1a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a92ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1990u);}goto L6e1990;}
}
B6e1a92:L6e1a92:{c.instructions+=3;NFSU2_TR(0x6e1a92);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a94:{NFSU2_TR(0x6e1a94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1a95:{NFSU2_TR(0x6e1a95);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1a9bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1a9b:L6e1a9b:{c.instructions+=1;NFSU2_TR(0x6e1a9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1a9e:L6e1a9e:{c.instructions+=4;NFSU2_TR(0x6e1a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1aa1:{NFSU2_TR(0x6e1aa1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e1aa2:{NFSU2_TR(0x6e1aa2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e1aa4:{NFSU2_TR(0x6e1aa4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1a81u);}goto L6e1a81;}}
}
B6e1aa6:L6e1aa6:{c.instructions+=1;NFSU2_TR(0x6e1aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1aa7:L6e1aa7:{c.instructions+=3;NFSU2_TR(0x6e1aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1aaa:{NFSU2_TR(0x6e1aaa);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6e1aac:{NFSU2_TR(0x6e1aac);
if(r1(R+518)){{goto L6e1ac2;}}
}
B6e1aae:L6e1aae:{c.instructions+=5;NFSU2_TR(0x6e1aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1ab1:{NFSU2_TR(0x6e1ab1);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e1ab4:{NFSU2_TR(0x6e1ab4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ab5:{NFSU2_TR(0x6e1ab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ab6:{NFSU2_TR(0x6e1ab6);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1abcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1abc:L6e1abc:{c.instructions+=2;NFSU2_TR(0x6e1abc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1abf:{NFSU2_TR(0x6e1abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1ac2:L6e1ac2:{c.instructions+=3;NFSU2_TR(0x6e1ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1ac5:{NFSU2_TR(0x6e1ac5);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6e1ac7:{NFSU2_TR(0x6e1ac7);
if(r1(R+518)){{goto L6e1ada;}}
}
B6e1ac9:L6e1ac9:{c.instructions+=4;NFSU2_TR(0x6e1ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1acc:{NFSU2_TR(0x6e1acc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1acd:{NFSU2_TR(0x6e1acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ace:{NFSU2_TR(0x6e1ace);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1ad4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1ad4:L6e1ad4:{c.instructions+=2;NFSU2_TR(0x6e1ad4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1ad7:{NFSU2_TR(0x6e1ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1ada:L6e1ada:{c.instructions+=3;NFSU2_TR(0x6e1ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1adc:{NFSU2_TR(0x6e1adc);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6e1ade:{NFSU2_TR(0x6e1ade);
if(r1(R+518)){{goto L6e1af3;}}
}
B6e1ae0:L6e1ae0:{c.instructions+=5;NFSU2_TR(0x6e1ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1ae3:{NFSU2_TR(0x6e1ae3);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e1ae6:{NFSU2_TR(0x6e1ae6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ae7:{NFSU2_TR(0x6e1ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ae8:{NFSU2_TR(0x6e1ae8);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1aeeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1aee:L6e1aee:{c.instructions+=2;NFSU2_TR(0x6e1aee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1af1:{NFSU2_TR(0x6e1af1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6e1af3:L6e1af3:{c.instructions+=3;NFSU2_TR(0x6e1af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1af6:{NFSU2_TR(0x6e1af6);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6e1af8:{NFSU2_TR(0x6e1af8);
if(r1(R+518)){{goto L6e1b0e;}}
}
B6e1afa:L6e1afa:{c.instructions+=5;NFSU2_TR(0x6e1afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1afd:{NFSU2_TR(0x6e1afd);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e1b00:{NFSU2_TR(0x6e1b00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b01:{NFSU2_TR(0x6e1b01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b02:{NFSU2_TR(0x6e1b02);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1b08ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1b08:L6e1b08:{c.instructions+=2;NFSU2_TR(0x6e1b08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1b0b:{NFSU2_TR(0x6e1b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1b0e:L6e1b0e:{c.instructions+=3;NFSU2_TR(0x6e1b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1b11:{NFSU2_TR(0x6e1b11);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6e1b13:{NFSU2_TR(0x6e1b13);
if(r1(R+518)){{goto L6e1b29;}}
}
B6e1b15:L6e1b15:{c.instructions+=5;NFSU2_TR(0x6e1b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1b18:{NFSU2_TR(0x6e1b18);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6e1b1b:{NFSU2_TR(0x6e1b1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b1c:{NFSU2_TR(0x6e1b1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b1d:{NFSU2_TR(0x6e1b1d);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1b23ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1b23:L6e1b23:{c.instructions+=2;NFSU2_TR(0x6e1b23);
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
B6e1b26:{NFSU2_TR(0x6e1b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1b29:L6e1b29:{c.instructions+=4;NFSU2_TR(0x6e1b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1b2a:{NFSU2_TR(0x6e1b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e1b2b:{NFSU2_TR(0x6e1b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e1b2c:{NFSU2_TR(0x6e1b2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1b30:L6e1b30:{c.instructions+=3;NFSU2_TR(0x6e1b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b32:{NFSU2_TR(0x6e1b32);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b34:{NFSU2_TR(0x6e1b34);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1b3aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1b3a:L6e1b3a:{c.instructions+=3;NFSU2_TR(0x6e1b3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1b3d:{NFSU2_TR(0x6e1b3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e1b3f:{NFSU2_TR(0x6e1b3f);
if(r1(R+518)){{goto L6e1b49;}}
}
B6e1b41:L6e1b41:{c.instructions+=2;NFSU2_TR(0x6e1b41);
u8 U[4];
w4(U+0,u32(0x7c147cull));
s4(u32(r4(R+0)),r4(U+0));
}
B6e1b47:{NFSU2_TR(0x6e1b47);
{goto L6e1b4b;}
}
B6e1b49:L6e1b49:{c.instructions+=1;NFSU2_TR(0x6e1b49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e1b4b:L6e1b4b:{c.instructions+=4;NFSU2_TR(0x6e1b4b);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e1b51:{NFSU2_TR(0x6e1b51);
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
B6e1b53:{NFSU2_TR(0x6e1b53);
__builtin_memmove(gp(0x8ab290),(R+0),4);
}
B6e1b58:{NFSU2_TR(0x6e1b58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e1b62;}}
}
B6e1b5a:L6e1b5a:{c.instructions+=2;NFSU2_TR(0x6e1b5a);
__builtin_memmove((R+4),(R+0),4);
}
B6e1b5c:{NFSU2_TR(0x6e1b5c);
__builtin_memmove(gp(0x8ab294),(R+4),4);
}
B6e1b62:L6e1b62:{c.instructions+=4;NFSU2_TR(0x6e1b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1b66:{NFSU2_TR(0x6e1b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1b68:{NFSU2_TR(0x6e1b68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b69:{NFSU2_TR(0x6e1b69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1b6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e1b6c:L6e1b6c:{c.instructions+=3;NFSU2_TR(0x6e1b6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b6e:{NFSU2_TR(0x6e1b6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b70:{NFSU2_TR(0x6e1b70);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1b76ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1b76:L6e1b76:{c.instructions+=7;NFSU2_TR(0x6e1b76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6e1b79:{NFSU2_TR(0x6e1b79);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b7e:{NFSU2_TR(0x6e1b7e);
u8 U[4];
w4(U+0,u32(0x6e2be0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b83:{NFSU2_TR(0x6e1b83);
u8 U[4];
w4(U+0,u32(0x7bff3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1b88:{NFSU2_TR(0x6e1b88);
w4(R+4,u32(0x8a7168ull));
}
B6e1b8d:{NFSU2_TR(0x6e1b8d);
__builtin_memmove(gp(0x8ab2f8),(R+0),4);
}
B6e1b92:{NFSU2_TR(0x6e1b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1b97ull));
TAIL_STATIC(0x6d8750u,6d8);
}
B6e1b97:L6e1b97:{c.instructions+=1;NFSU2_TR(0x6e1b97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1ba0:L6e1ba0:{c.instructions+=5;NFSU2_TR(0x6e1ba0);
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
B6e1ba5:{NFSU2_TR(0x6e1ba5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ba6:{NFSU2_TR(0x6e1ba6);
__builtin_memmove((R+24),(R+4),4);
}
B6e1ba8:{NFSU2_TR(0x6e1ba8);
u8 U[4];
w4(U+0,u32(0x7c147cull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1bae:{NFSU2_TR(0x6e1bae);
if(r1(R+518)){{goto L6e1bbc;}}
}
B6e1bb0:L6e1bb0:{c.instructions+=3;NFSU2_TR(0x6e1bb0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1bb2:{NFSU2_TR(0x6e1bb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1bb3:{NFSU2_TR(0x6e1bb3);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1bb9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1bb9:L6e1bb9:{c.instructions+=1;NFSU2_TR(0x6e1bb9);
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
B6e1bbc:L6e1bbc:{c.instructions+=3;NFSU2_TR(0x6e1bbc);
__builtin_memmove((R+0),(R+24),4);
}
B6e1bbe:{NFSU2_TR(0x6e1bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1bbf:{NFSU2_TR(0x6e1bbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1bd0:L6e1bd0:{c.instructions+=2;NFSU2_TR(0x6e1bd0);
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
B6e1bd2:{NFSU2_TR(0x6e1bd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1be0:L6e1be0:{c.instructions+=3;NFSU2_TR(0x6e1be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1be1:{NFSU2_TR(0x6e1be1);
__builtin_memmove((R+24),(R+4),4);
}
B6e1be3:{NFSU2_TR(0x6e1be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1be8ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e1be8:L6e1be8:{c.instructions+=6;NFSU2_TR(0x6e1be8);
u8 U[4];
w4(U+0,u32(0x7c14f8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1bee:{NFSU2_TR(0x6e1bee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e1bf2:{NFSU2_TR(0x6e1bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1bf9:{NFSU2_TR(0x6e1bf9);
__builtin_memmove((R+0),(R+24),4);
}
B6e1bfb:{NFSU2_TR(0x6e1bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1bfc:{NFSU2_TR(0x6e1bfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1c00:L6e1c00:{c.instructions+=6;NFSU2_TR(0x6e1c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1c03:{NFSU2_TR(0x6e1c03);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e1c06:{NFSU2_TR(0x6e1c06);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1c0a:{NFSU2_TR(0x6e1c0a);
w1(R+0,u8(0x1ull));
}
B6e1c0c:{NFSU2_TR(0x6e1c0c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1c0e:{NFSU2_TR(0x6e1c0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1c20:L6e1c20:{c.instructions+=4;NFSU2_TR(0x6e1c20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1c21:{NFSU2_TR(0x6e1c21);
__builtin_memmove((R+24),(R+4),4);
}
B6e1c23:{NFSU2_TR(0x6e1c23);
u8 U[4];
w4(U+0,u32(0x7c14f8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1c29:{NFSU2_TR(0x6e1c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1c2eull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e1c2e:L6e1c2e:{c.instructions+=2;NFSU2_TR(0x6e1c2e);
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
B6e1c33:{NFSU2_TR(0x6e1c33);
if(r1(R+518)){{goto L6e1c41;}}
}
B6e1c35:L6e1c35:{c.instructions+=3;NFSU2_TR(0x6e1c35);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1c37:{NFSU2_TR(0x6e1c37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1c38:{NFSU2_TR(0x6e1c38);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1c3eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1c3e:L6e1c3e:{c.instructions+=1;NFSU2_TR(0x6e1c3e);
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
B6e1c41:L6e1c41:{c.instructions+=3;NFSU2_TR(0x6e1c41);
__builtin_memmove((R+0),(R+24),4);
}
B6e1c43:{NFSU2_TR(0x6e1c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1c44:{NFSU2_TR(0x6e1c44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1c50:L6e1c50:{c.instructions+=3;NFSU2_TR(0x6e1c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1c51:{NFSU2_TR(0x6e1c51);
__builtin_memmove((R+24),(R+4),4);
}
B6e1c53:{NFSU2_TR(0x6e1c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1c58ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e1c58:L6e1c58:{c.instructions+=8;NFSU2_TR(0x6e1c58);
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
B6e1c5a:{NFSU2_TR(0x6e1c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1c5d:{NFSU2_TR(0x6e1c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1c60:{NFSU2_TR(0x6e1c60);
u8 U[4];
w4(U+0,u32(0x7c1550ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1c66:{NFSU2_TR(0x6e1c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1c6d:{NFSU2_TR(0x6e1c6d);
__builtin_memmove((R+0),(R+24),4);
}
B6e1c6f:{NFSU2_TR(0x6e1c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1c70:{NFSU2_TR(0x6e1c70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1c80:L6e1c80:{c.instructions+=6;NFSU2_TR(0x6e1c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1c84:{NFSU2_TR(0x6e1c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1c87:{NFSU2_TR(0x6e1c87);
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
B6e1c89:{NFSU2_TR(0x6e1c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1c8c:{NFSU2_TR(0x6e1c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1c8f:{NFSU2_TR(0x6e1c8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1ca0:L6e1ca0:{c.instructions+=14;NFSU2_TR(0x6e1ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1ca4:{NFSU2_TR(0x6e1ca4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1ca8:{NFSU2_TR(0x6e1ca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ca9:{NFSU2_TR(0x6e1ca9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1caa:{NFSU2_TR(0x6e1caa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e1cad:{NFSU2_TR(0x6e1cad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cae:{NFSU2_TR(0x6e1cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1cb2:{NFSU2_TR(0x6e1cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e1cb5:{NFSU2_TR(0x6e1cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1cb8:{NFSU2_TR(0x6e1cb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cb9:{NFSU2_TR(0x6e1cb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1cbd:{NFSU2_TR(0x6e1cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cbe:{NFSU2_TR(0x6e1cbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cbf:{NFSU2_TR(0x6e1cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1cc4ull));
TAIL_STATIC(0x6e3f70u,6e3);
}
B6e1cc4:L6e1cc4:{c.instructions+=2;NFSU2_TR(0x6e1cc4);
w1(R+0,u8(0x1ull));
}
B6e1cc6:{NFSU2_TR(0x6e1cc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1cd0:L6e1cd0:{c.instructions+=9;NFSU2_TR(0x6e1cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1cd4:{NFSU2_TR(0x6e1cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1cd6:{NFSU2_TR(0x6e1cd6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cd8:{NFSU2_TR(0x6e1cd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cd9:{NFSU2_TR(0x6e1cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1cdd:{NFSU2_TR(0x6e1cdd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cde:{NFSU2_TR(0x6e1cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1ce2:{NFSU2_TR(0x6e1ce2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ce3:{NFSU2_TR(0x6e1ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1ce6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e1ce6:L6e1ce6:{c.instructions+=1;NFSU2_TR(0x6e1ce6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1cf0:L6e1cf0:{c.instructions+=4;NFSU2_TR(0x6e1cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1cf1:{NFSU2_TR(0x6e1cf1);
__builtin_memmove((R+24),(R+4),4);
}
B6e1cf3:{NFSU2_TR(0x6e1cf3);
u8 U[4];
w4(U+0,u32(0x7c1550ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1cf9:{NFSU2_TR(0x6e1cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1cfeull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e1cfe:L6e1cfe:{c.instructions+=2;NFSU2_TR(0x6e1cfe);
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
B6e1d03:{NFSU2_TR(0x6e1d03);
if(r1(R+518)){{goto L6e1d11;}}
}
B6e1d05:L6e1d05:{c.instructions+=3;NFSU2_TR(0x6e1d05);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d07:{NFSU2_TR(0x6e1d07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d08:{NFSU2_TR(0x6e1d08);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1d0eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1d0e:L6e1d0e:{c.instructions+=1;NFSU2_TR(0x6e1d0e);
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
B6e1d11:L6e1d11:{c.instructions+=3;NFSU2_TR(0x6e1d11);
__builtin_memmove((R+0),(R+24),4);
}
B6e1d13:{NFSU2_TR(0x6e1d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1d14:{NFSU2_TR(0x6e1d14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1d20:L6e1d20:{c.instructions+=3;NFSU2_TR(0x6e1d20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d21:{NFSU2_TR(0x6e1d21);
__builtin_memmove((R+24),(R+4),4);
}
B6e1d23:{NFSU2_TR(0x6e1d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1d28ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e1d28:L6e1d28:{c.instructions+=8;NFSU2_TR(0x6e1d28);
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
B6e1d2a:{NFSU2_TR(0x6e1d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1d2d:{NFSU2_TR(0x6e1d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1d30:{NFSU2_TR(0x6e1d30);
u8 U[4];
w4(U+0,u32(0x7c15a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1d36:{NFSU2_TR(0x6e1d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1d3d:{NFSU2_TR(0x6e1d3d);
__builtin_memmove((R+0),(R+24),4);
}
B6e1d3f:{NFSU2_TR(0x6e1d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1d40:{NFSU2_TR(0x6e1d40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1d50:L6e1d50:{c.instructions+=14;NFSU2_TR(0x6e1d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1d54:{NFSU2_TR(0x6e1d54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1d58:{NFSU2_TR(0x6e1d58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d59:{NFSU2_TR(0x6e1d59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d5a:{NFSU2_TR(0x6e1d5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e1d5d:{NFSU2_TR(0x6e1d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d5e:{NFSU2_TR(0x6e1d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1d62:{NFSU2_TR(0x6e1d62);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e1d65:{NFSU2_TR(0x6e1d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1d68:{NFSU2_TR(0x6e1d68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d69:{NFSU2_TR(0x6e1d69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1d6d:{NFSU2_TR(0x6e1d6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d6e:{NFSU2_TR(0x6e1d6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d6f:{NFSU2_TR(0x6e1d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1d74ull));
TAIL_STATIC(0x6e42b0u,6e4);
}
B6e1d74:L6e1d74:{c.instructions+=2;NFSU2_TR(0x6e1d74);
w1(R+0,u8(0x1ull));
}
B6e1d76:{NFSU2_TR(0x6e1d76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1d80:L6e1d80:{c.instructions+=4;NFSU2_TR(0x6e1d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d81:{NFSU2_TR(0x6e1d81);
__builtin_memmove((R+24),(R+4),4);
}
B6e1d83:{NFSU2_TR(0x6e1d83);
u8 U[4];
w4(U+0,u32(0x7c15a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1d89:{NFSU2_TR(0x6e1d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1d8eull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e1d8e:L6e1d8e:{c.instructions+=2;NFSU2_TR(0x6e1d8e);
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
B6e1d93:{NFSU2_TR(0x6e1d93);
if(r1(R+518)){{goto L6e1da1;}}
}
B6e1d95:L6e1d95:{c.instructions+=3;NFSU2_TR(0x6e1d95);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d97:{NFSU2_TR(0x6e1d97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1d98:{NFSU2_TR(0x6e1d98);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1d9eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1d9e:L6e1d9e:{c.instructions+=1;NFSU2_TR(0x6e1d9e);
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
B6e1da1:L6e1da1:{c.instructions+=3;NFSU2_TR(0x6e1da1);
__builtin_memmove((R+0),(R+24),4);
}
B6e1da3:{NFSU2_TR(0x6e1da3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1da4:{NFSU2_TR(0x6e1da4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1db0:L6e1db0:{c.instructions+=3;NFSU2_TR(0x6e1db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1db1:{NFSU2_TR(0x6e1db1);
__builtin_memmove((R+24),(R+4),4);
}
B6e1db3:{NFSU2_TR(0x6e1db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1db8ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e1db8:L6e1db8:{c.instructions+=6;NFSU2_TR(0x6e1db8);
u8 U[4];
w4(U+0,u32(0x7c1600ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1dbe:{NFSU2_TR(0x6e1dbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e1dc2:{NFSU2_TR(0x6e1dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1dc9:{NFSU2_TR(0x6e1dc9);
__builtin_memmove((R+0),(R+24),4);
}
B6e1dcb:{NFSU2_TR(0x6e1dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1dcc:{NFSU2_TR(0x6e1dcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1dd0:L6e1dd0:{c.instructions+=10;NFSU2_TR(0x6e1dd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1dd1:{NFSU2_TR(0x6e1dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1dd4:{NFSU2_TR(0x6e1dd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e1dd8:{NFSU2_TR(0x6e1dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1ddc:{NFSU2_TR(0x6e1ddc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e1de0:{NFSU2_TR(0x6e1de0);
w1(R+0,u8(0x1ull));
}
B6e1de2:{NFSU2_TR(0x6e1de2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e1de6:{NFSU2_TR(0x6e1de6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1de8:{NFSU2_TR(0x6e1de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e1de9:{NFSU2_TR(0x6e1de9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1df0:L6e1df0:{c.instructions+=4;NFSU2_TR(0x6e1df0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1df1:{NFSU2_TR(0x6e1df1);
__builtin_memmove((R+24),(R+4),4);
}
B6e1df3:{NFSU2_TR(0x6e1df3);
u8 U[4];
w4(U+0,u32(0x7c1600ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1df9:{NFSU2_TR(0x6e1df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1dfeull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e1dfe:L6e1dfe:{c.instructions+=2;NFSU2_TR(0x6e1dfe);
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
B6e1e03:{NFSU2_TR(0x6e1e03);
if(r1(R+518)){{goto L6e1e11;}}
}
B6e1e05:L6e1e05:{c.instructions+=3;NFSU2_TR(0x6e1e05);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1e07:{NFSU2_TR(0x6e1e07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1e08:{NFSU2_TR(0x6e1e08);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1e0eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1e0e:L6e1e0e:{c.instructions+=1;NFSU2_TR(0x6e1e0e);
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
B6e1e11:L6e1e11:{c.instructions+=3;NFSU2_TR(0x6e1e11);
__builtin_memmove((R+0),(R+24),4);
}
B6e1e13:{NFSU2_TR(0x6e1e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1e14:{NFSU2_TR(0x6e1e14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1e20:L6e1e20:{c.instructions+=3;NFSU2_TR(0x6e1e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1e21:{NFSU2_TR(0x6e1e21);
__builtin_memmove((R+24),(R+4),4);
}
B6e1e23:{NFSU2_TR(0x6e1e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1e28ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e1e28:L6e1e28:{c.instructions+=11;NFSU2_TR(0x6e1e28);
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
B6e1e2a:{NFSU2_TR(0x6e1e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e2d:{NFSU2_TR(0x6e1e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e30:{NFSU2_TR(0x6e1e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e33:{NFSU2_TR(0x6e1e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e36:{NFSU2_TR(0x6e1e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e3d:{NFSU2_TR(0x6e1e3d);
u8 U[4];
w4(U+0,u32(0x7c16b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1e43:{NFSU2_TR(0x6e1e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e4a:{NFSU2_TR(0x6e1e4a);
__builtin_memmove((R+0),(R+24),4);
}
B6e1e4c:{NFSU2_TR(0x6e1e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1e4d:{NFSU2_TR(0x6e1e4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1e50:L6e1e50:{c.instructions+=3;NFSU2_TR(0x6e1e50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1e51:{NFSU2_TR(0x6e1e51);
__builtin_memmove((R+24),(R+4),4);
}
B6e1e53:{NFSU2_TR(0x6e1e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1e58ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e1e58:L6e1e58:{c.instructions+=11;NFSU2_TR(0x6e1e58);
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
B6e1e5a:{NFSU2_TR(0x6e1e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e5d:{NFSU2_TR(0x6e1e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e60:{NFSU2_TR(0x6e1e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e63:{NFSU2_TR(0x6e1e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e66:{NFSU2_TR(0x6e1e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e6d:{NFSU2_TR(0x6e1e6d);
u8 U[4];
w4(U+0,u32(0x7c1708ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1e73:{NFSU2_TR(0x6e1e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1e7a:{NFSU2_TR(0x6e1e7a);
__builtin_memmove((R+0),(R+24),4);
}
B6e1e7c:{NFSU2_TR(0x6e1e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1e7d:{NFSU2_TR(0x6e1e7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1e80:L6e1e80:{c.instructions+=10;NFSU2_TR(0x6e1e80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1e81:{NFSU2_TR(0x6e1e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1e84:{NFSU2_TR(0x6e1e84);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e1e88:{NFSU2_TR(0x6e1e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1e8c:{NFSU2_TR(0x6e1e8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e1e90:{NFSU2_TR(0x6e1e90);
w1(R+0,u8(0x1ull));
}
B6e1e92:{NFSU2_TR(0x6e1e92);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e1e96:{NFSU2_TR(0x6e1e96);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e1e98:{NFSU2_TR(0x6e1e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e1e99:{NFSU2_TR(0x6e1e99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1ea0:L6e1ea0:{c.instructions+=5;NFSU2_TR(0x6e1ea0);
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
B6e1ea5:{NFSU2_TR(0x6e1ea5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ea6:{NFSU2_TR(0x6e1ea6);
__builtin_memmove((R+24),(R+4),4);
}
B6e1ea8:{NFSU2_TR(0x6e1ea8);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1eae:{NFSU2_TR(0x6e1eae);
if(r1(R+518)){{goto L6e1ebc;}}
}
B6e1eb0:L6e1eb0:{c.instructions+=3;NFSU2_TR(0x6e1eb0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1eb2:{NFSU2_TR(0x6e1eb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1eb3:{NFSU2_TR(0x6e1eb3);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1eb9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1eb9:L6e1eb9:{c.instructions+=1;NFSU2_TR(0x6e1eb9);
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
B6e1ebc:L6e1ebc:{c.instructions+=3;NFSU2_TR(0x6e1ebc);
__builtin_memmove((R+0),(R+24),4);
}
B6e1ebe:{NFSU2_TR(0x6e1ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1ebf:{NFSU2_TR(0x6e1ebf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1ed0:L6e1ed0:{c.instructions+=7;NFSU2_TR(0x6e1ed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ed1:{NFSU2_TR(0x6e1ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ed2:{NFSU2_TR(0x6e1ed2);
__builtin_memmove((R+28),(R+4),4);
}
B6e1ed4:{NFSU2_TR(0x6e1ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1ed7:{NFSU2_TR(0x6e1ed7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e1ed9:{NFSU2_TR(0x6e1ed9);
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
B6e1edb:{NFSU2_TR(0x6e1edb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e1f0c;}}
}
B6e1edd:L6e1edd:{c.instructions+=5;NFSU2_TR(0x6e1edd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ede:{NFSU2_TR(0x6e1ede);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e1ee2:{NFSU2_TR(0x6e1ee2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1ee3:{NFSU2_TR(0x6e1ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e1ee7:{NFSU2_TR(0x6e1ee7);
{goto L6e1ef0;}
}
B6e1ef0:L6e1ef0:{c.instructions+=8;NFSU2_TR(0x6e1ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1ef3:{NFSU2_TR(0x6e1ef3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e1ef6:{NFSU2_TR(0x6e1ef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1efa:{NFSU2_TR(0x6e1efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e1efc:{NFSU2_TR(0x6e1efc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1efd:{NFSU2_TR(0x6e1efd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1efe:{NFSU2_TR(0x6e1efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1eff:{NFSU2_TR(0x6e1eff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1f02ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e1f02:L6e1f02:{c.instructions+=4;NFSU2_TR(0x6e1f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e1f05:{NFSU2_TR(0x6e1f05);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e1f06:{NFSU2_TR(0x6e1f06);
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
B6e1f08:{NFSU2_TR(0x6e1f08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e1ef0u);}goto L6e1ef0;}}
}
B6e1f0a:L6e1f0a:{c.instructions+=2;NFSU2_TR(0x6e1f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e1f0b:{NFSU2_TR(0x6e1f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e1f0c:L6e1f0c:{c.instructions+=3;NFSU2_TR(0x6e1f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e1f0d:{NFSU2_TR(0x6e1f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1f0e:{NFSU2_TR(0x6e1f0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1f20:L6e1f20:{c.instructions+=12;NFSU2_TR(0x6e1f20);
__builtin_memmove((R+0),(R+4),4);
}
B6e1f22:{NFSU2_TR(0x6e1f22);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1f24:{NFSU2_TR(0x6e1f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f27:{NFSU2_TR(0x6e1f27);
u8 U[4];
w4(U+0,u32(0x7c1800ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6e1f2d:{NFSU2_TR(0x6e1f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f30:{NFSU2_TR(0x6e1f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f37:{NFSU2_TR(0x6e1f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f3a:{NFSU2_TR(0x6e1f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f3d:{NFSU2_TR(0x6e1f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e1f40:{NFSU2_TR(0x6e1f40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e1f43:{NFSU2_TR(0x6e1f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f4a:{NFSU2_TR(0x6e1f4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1f50:L6e1f50:{c.instructions+=5;NFSU2_TR(0x6e1f50);
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
B6e1f55:{NFSU2_TR(0x6e1f55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1f56:{NFSU2_TR(0x6e1f56);
__builtin_memmove((R+24),(R+4),4);
}
B6e1f58:{NFSU2_TR(0x6e1f58);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e1f5e:{NFSU2_TR(0x6e1f5e);
if(r1(R+518)){{goto L6e1f6f;}}
}
B6e1f60:L6e1f60:{c.instructions+=3;NFSU2_TR(0x6e1f60);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1f65:{NFSU2_TR(0x6e1f65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1f66:{NFSU2_TR(0x6e1f66);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1f6cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e1f6c:L6e1f6c:{c.instructions+=1;NFSU2_TR(0x6e1f6c);
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
B6e1f6f:L6e1f6f:{c.instructions+=3;NFSU2_TR(0x6e1f6f);
__builtin_memmove((R+0),(R+24),4);
}
B6e1f71:{NFSU2_TR(0x6e1f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1f72:{NFSU2_TR(0x6e1f72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1f80:L6e1f80:{c.instructions+=10;NFSU2_TR(0x6e1f80);
__builtin_memmove((R+0),(R+4),4);
}
B6e1f82:{NFSU2_TR(0x6e1f82);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e1f84:{NFSU2_TR(0x6e1f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f87:{NFSU2_TR(0x6e1f87);
u8 U[4];
w4(U+0,u32(0x7c1848ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6e1f8d:{NFSU2_TR(0x6e1f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f90:{NFSU2_TR(0x6e1f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e1f93:{NFSU2_TR(0x6e1f93);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6e1f96:{NFSU2_TR(0x6e1f96);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e1f9a:{NFSU2_TR(0x6e1f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e1fa1:{NFSU2_TR(0x6e1fa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1fb0:L6e1fb0:{c.instructions+=7;NFSU2_TR(0x6e1fb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fb1:{NFSU2_TR(0x6e1fb1);
__builtin_memmove((R+24),(R+4),4);
}
B6e1fb3:{NFSU2_TR(0x6e1fb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e1fb6:{NFSU2_TR(0x6e1fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1fb9:{NFSU2_TR(0x6e1fb9);
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
B6e1fbb:{NFSU2_TR(0x6e1fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e1fbd:{NFSU2_TR(0x6e1fbd);
if(r1(R+518)){{goto L6e1fed;}}
}
B6e1fbf:L6e1fbf:{c.instructions+=7;NFSU2_TR(0x6e1fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1fc2:{NFSU2_TR(0x6e1fc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fc3:{NFSU2_TR(0x6e1fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1fc7:{NFSU2_TR(0x6e1fc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fc8:{NFSU2_TR(0x6e1fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1fcc:{NFSU2_TR(0x6e1fcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fcd:{NFSU2_TR(0x6e1fcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1fd0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e1fd0:L6e1fd0:{c.instructions+=10;NFSU2_TR(0x6e1fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1fd4:{NFSU2_TR(0x6e1fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e1fd7:{NFSU2_TR(0x6e1fd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e1fd9:{NFSU2_TR(0x6e1fd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e1fdc:{NFSU2_TR(0x6e1fdc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fde:{NFSU2_TR(0x6e1fde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fdf:{NFSU2_TR(0x6e1fdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fe0:{NFSU2_TR(0x6e1fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e1fe3:{NFSU2_TR(0x6e1fe3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e1fe4:{NFSU2_TR(0x6e1fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e1fe9ull));
TAIL_STATIC(0x6e2ea0u,6e2);
}
B6e1fe9:L6e1fe9:{c.instructions+=2;NFSU2_TR(0x6e1fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1fea:{NFSU2_TR(0x6e1fea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e1fed:L6e1fed:{c.instructions+=2;NFSU2_TR(0x6e1fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e1fee:{NFSU2_TR(0x6e1fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6e1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
