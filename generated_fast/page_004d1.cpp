#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d2(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 page_4d1(Cpu& c){return body_4d1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d1005:goto L4d1005;
case 0x4d1006:c.instructions+=8;goto B4d1006;
case 0x4d1007:c.instructions+=7;goto B4d1007;
case 0x4d1009:c.instructions+=6;goto B4d1009;
case 0x4d100d:c.instructions+=5;goto B4d100d;
case 0x4d1013:c.instructions+=4;goto B4d1013;
case 0x4d1019:c.instructions+=3;goto B4d1019;
case 0x4d101b:c.instructions+=2;goto B4d101b;
case 0x4d1023:c.instructions+=1;goto B4d1023;
case 0x4d1025:goto L4d1025;
case 0x4d1026:c.instructions+=1;goto B4d1026;
case 0x4d102b:goto L4d102b;
case 0x4d102e:c.instructions+=1;goto B4d102e;
case 0x4d1038:goto L4d1038;
case 0x4d103e:c.instructions+=3;goto B4d103e;
case 0x4d1040:c.instructions+=2;goto B4d1040;
case 0x4d1045:c.instructions+=1;goto B4d1045;
case 0x4d1047:goto L4d1047;
case 0x4d1048:c.instructions+=1;goto B4d1048;
case 0x4d104d:goto L4d104d;
case 0x4d1050:c.instructions+=1;goto B4d1050;
case 0x4d105a:goto L4d105a;
case 0x4d105c:c.instructions+=2;goto B4d105c;
case 0x4d1064:c.instructions+=1;goto B4d1064;
case 0x4d1069:goto L4d1069;
case 0x4d106d:c.instructions+=4;goto B4d106d;
case 0x4d106e:c.instructions+=3;goto B4d106e;
case 0x4d1075:c.instructions+=2;goto B4d1075;
case 0x4d1078:c.instructions+=1;goto B4d1078;
case 0x4d1080:goto L4d1080;
case 0x4d1082:c.instructions+=11;goto B4d1082;
case 0x4d1087:c.instructions+=10;goto B4d1087;
case 0x4d108d:c.instructions+=9;goto B4d108d;
case 0x4d108e:c.instructions+=8;goto B4d108e;
case 0x4d1095:c.instructions+=7;goto B4d1095;
case 0x4d1096:c.instructions+=6;goto B4d1096;
case 0x4d109a:c.instructions+=5;goto B4d109a;
case 0x4d109b:c.instructions+=4;goto B4d109b;
case 0x4d109d:c.instructions+=3;goto B4d109d;
case 0x4d109e:c.instructions+=2;goto B4d109e;
case 0x4d10a2:c.instructions+=1;goto B4d10a2;
case 0x4d10a7:goto L4d10a7;
case 0x4d10a9:c.instructions+=3;goto B4d10a9;
case 0x4d10b1:c.instructions+=2;goto B4d10b1;
case 0x4d10b7:c.instructions+=1;goto B4d10b7;
case 0x4d10bc:goto L4d10bc;
case 0x4d10c0:c.instructions+=5;goto B4d10c0;
case 0x4d10c2:c.instructions+=4;goto B4d10c2;
case 0x4d10c3:c.instructions+=3;goto B4d10c3;
case 0x4d10ca:c.instructions+=2;goto B4d10ca;
case 0x4d10cd:c.instructions+=1;goto B4d10cd;
case 0x4d10d0:goto L4d10d0;
case 0x4d10d1:c.instructions+=2;goto B4d10d1;
case 0x4d10d3:c.instructions+=1;goto B4d10d3;
case 0x4d10d8:goto L4d10d8;
case 0x4d10dd:c.instructions+=1;goto B4d10dd;
case 0x4d10df:goto L4d10df;
case 0x4d10e0:c.instructions+=1;goto B4d10e0;
case 0x4d10e5:goto L4d10e5;
case 0x4d10e8:goto L4d10e8;
case 0x4d10ea:c.instructions+=2;goto B4d10ea;
case 0x4d10eb:c.instructions+=1;goto B4d10eb;
case 0x4d10f0:goto L4d10f0;
case 0x4d10f6:c.instructions+=1;goto B4d10f6;
case 0x4d1100:goto L4d1100;
case 0x4d1102:c.instructions+=14;goto B4d1102;
case 0x4d1107:c.instructions+=13;goto B4d1107;
case 0x4d110d:c.instructions+=12;goto B4d110d;
case 0x4d110e:c.instructions+=11;goto B4d110e;
case 0x4d1115:c.instructions+=10;goto B4d1115;
case 0x4d1116:c.instructions+=9;goto B4d1116;
case 0x4d111a:c.instructions+=8;goto B4d111a;
case 0x4d111b:c.instructions+=7;goto B4d111b;
case 0x4d111c:c.instructions+=6;goto B4d111c;
case 0x4d111d:c.instructions+=5;goto B4d111d;
case 0x4d111e:c.instructions+=4;goto B4d111e;
case 0x4d1120:c.instructions+=3;goto B4d1120;
case 0x4d1121:c.instructions+=2;goto B4d1121;
case 0x4d1125:c.instructions+=1;goto B4d1125;
case 0x4d112a:goto L4d112a;
case 0x4d112c:c.instructions+=35;goto B4d112c;
case 0x4d1132:c.instructions+=34;goto B4d1132;
case 0x4d1138:c.instructions+=33;goto B4d1138;
case 0x4d113e:c.instructions+=32;goto B4d113e;
case 0x4d1144:c.instructions+=31;goto B4d1144;
case 0x4d114a:c.instructions+=30;goto B4d114a;
case 0x4d1150:c.instructions+=29;goto B4d1150;
case 0x4d1154:c.instructions+=28;goto B4d1154;
case 0x4d1156:c.instructions+=27;goto B4d1156;
case 0x4d1159:c.instructions+=26;goto B4d1159;
case 0x4d115c:c.instructions+=25;goto B4d115c;
case 0x4d115f:c.instructions+=24;goto B4d115f;
case 0x4d1162:c.instructions+=23;goto B4d1162;
case 0x4d1165:c.instructions+=22;goto B4d1165;
case 0x4d1168:c.instructions+=21;goto B4d1168;
case 0x4d116b:c.instructions+=20;goto B4d116b;
case 0x4d116e:c.instructions+=19;goto B4d116e;
case 0x4d1171:c.instructions+=18;goto B4d1171;
case 0x4d1173:c.instructions+=17;goto B4d1173;
case 0x4d1179:c.instructions+=16;goto B4d1179;
case 0x4d117b:c.instructions+=15;goto B4d117b;
case 0x4d117d:c.instructions+=14;goto B4d117d;
case 0x4d1180:c.instructions+=13;goto B4d1180;
case 0x4d1183:c.instructions+=12;goto B4d1183;
case 0x4d1186:c.instructions+=11;goto B4d1186;
case 0x4d1189:c.instructions+=10;goto B4d1189;
case 0x4d118f:c.instructions+=9;goto B4d118f;
case 0x4d1191:c.instructions+=8;goto B4d1191;
case 0x4d1194:c.instructions+=7;goto B4d1194;
case 0x4d1197:c.instructions+=6;goto B4d1197;
case 0x4d119a:c.instructions+=5;goto B4d119a;
case 0x4d119d:c.instructions+=4;goto B4d119d;
case 0x4d119f:c.instructions+=3;goto B4d119f;
case 0x4d11a4:c.instructions+=2;goto B4d11a4;
case 0x4d11a9:c.instructions+=1;goto B4d11a9;
case 0x4d11ae:goto L4d11ae;
case 0x4d11af:c.instructions+=2;goto B4d11af;
case 0x4d11b0:c.instructions+=1;goto B4d11b0;
case 0x4d11b5:goto L4d11b5;
case 0x4d11b8:c.instructions+=3;goto B4d11b8;
case 0x4d11ba:c.instructions+=2;goto B4d11ba;
case 0x4d11bf:c.instructions+=1;goto B4d11bf;
case 0x4d11c4:goto L4d11c4;
case 0x4d11c5:c.instructions+=3;goto B4d11c5;
case 0x4d11cb:c.instructions+=2;goto B4d11cb;
case 0x4d11cc:c.instructions+=1;goto B4d11cc;
case 0x4d11d1:goto L4d11d1;
case 0x4d11d4:c.instructions+=2;goto B4d11d4;
case 0x4d11d6:c.instructions+=1;goto B4d11d6;
case 0x4d11db:goto L4d11db;
case 0x4d11e0:c.instructions+=2;goto B4d11e0;
case 0x4d11e6:c.instructions+=1;goto B4d11e6;
case 0x4d11e8:goto L4d11e8;
case 0x4d11ee:c.instructions+=1;goto B4d11ee;
case 0x4d11f0:goto L4d11f0;
case 0x4d11f5:c.instructions+=1;goto B4d11f5;
case 0x4d11fa:goto L4d11fa;
case 0x4d11fb:c.instructions+=2;goto B4d11fb;
case 0x4d1200:c.instructions+=1;goto B4d1200;
case 0x4d1205:goto L4d1205;
case 0x4d1208:c.instructions+=4;goto B4d1208;
case 0x4d1209:c.instructions+=3;goto B4d1209;
case 0x4d120a:c.instructions+=2;goto B4d120a;
case 0x4d120b:c.instructions+=1;goto B4d120b;
case 0x4d1210:goto L4d1210;
case 0x4d1217:c.instructions+=2;goto B4d1217;
case 0x4d121c:c.instructions+=1;goto B4d121c;
case 0x4d121f:goto L4d121f;
case 0x4d1223:c.instructions+=11;goto B4d1223;
case 0x4d1229:c.instructions+=10;goto B4d1229;
case 0x4d122f:c.instructions+=9;goto B4d122f;
case 0x4d1230:c.instructions+=8;goto B4d1230;
case 0x4d1232:c.instructions+=7;goto B4d1232;
case 0x4d1233:c.instructions+=6;goto B4d1233;
case 0x4d1239:c.instructions+=5;goto B4d1239;
case 0x4d123a:c.instructions+=4;goto B4d123a;
case 0x4d123b:c.instructions+=3;goto B4d123b;
case 0x4d1242:c.instructions+=2;goto B4d1242;
case 0x4d1245:c.instructions+=1;goto B4d1245;
case 0x4d1250:goto L4d1250;
case 0x4d1252:c.instructions+=13;goto B4d1252;
case 0x4d1257:c.instructions+=12;goto B4d1257;
case 0x4d125d:c.instructions+=11;goto B4d125d;
case 0x4d125e:c.instructions+=10;goto B4d125e;
case 0x4d1265:c.instructions+=9;goto B4d1265;
case 0x4d1266:c.instructions+=8;goto B4d1266;
case 0x4d1267:c.instructions+=7;goto B4d1267;
case 0x4d1269:c.instructions+=6;goto B4d1269;
case 0x4d126d:c.instructions+=5;goto B4d126d;
case 0x4d1273:c.instructions+=4;goto B4d1273;
case 0x4d1279:c.instructions+=3;goto B4d1279;
case 0x4d127b:c.instructions+=2;goto B4d127b;
case 0x4d1283:c.instructions+=1;goto B4d1283;
case 0x4d1285:goto L4d1285;
case 0x4d1286:c.instructions+=1;goto B4d1286;
case 0x4d128b:goto L4d128b;
case 0x4d128e:c.instructions+=1;goto B4d128e;
case 0x4d1298:goto L4d1298;
case 0x4d129a:c.instructions+=2;goto B4d129a;
case 0x4d12a2:c.instructions+=1;goto B4d12a2;
case 0x4d12a7:goto L4d12a7;
case 0x4d12ab:c.instructions+=4;goto B4d12ab;
case 0x4d12ac:c.instructions+=3;goto B4d12ac;
case 0x4d12b3:c.instructions+=2;goto B4d12b3;
case 0x4d12b6:c.instructions+=1;goto B4d12b6;
case 0x4d12c0:goto L4d12c0;
case 0x4d12c2:c.instructions+=11;goto B4d12c2;
case 0x4d12c7:c.instructions+=10;goto B4d12c7;
case 0x4d12cd:c.instructions+=9;goto B4d12cd;
case 0x4d12ce:c.instructions+=8;goto B4d12ce;
case 0x4d12d5:c.instructions+=7;goto B4d12d5;
case 0x4d12d6:c.instructions+=6;goto B4d12d6;
case 0x4d12d7:c.instructions+=5;goto B4d12d7;
case 0x4d12d9:c.instructions+=4;goto B4d12d9;
case 0x4d12dd:c.instructions+=3;goto B4d12dd;
case 0x4d12e3:c.instructions+=2;goto B4d12e3;
case 0x4d12eb:c.instructions+=1;goto B4d12eb;
case 0x4d12f0:goto L4d12f0;
case 0x4d12f2:c.instructions+=3;goto B4d12f2;
case 0x4d12f7:c.instructions+=2;goto B4d12f7;
case 0x4d12f9:c.instructions+=1;goto B4d12f9;
case 0x4d12fe:goto L4d12fe;
case 0x4d1304:c.instructions+=3;goto B4d1304;
case 0x4d1306:c.instructions+=2;goto B4d1306;
case 0x4d1308:c.instructions+=1;goto B4d1308;
case 0x4d130d:goto L4d130d;
case 0x4d1313:c.instructions+=2;goto B4d1313;
case 0x4d1315:c.instructions+=1;goto B4d1315;
case 0x4d1317:goto L4d1317;
case 0x4d1318:c.instructions+=1;goto B4d1318;
case 0x4d131d:goto L4d131d;
case 0x4d1320:c.instructions+=1;goto B4d1320;
case 0x4d132a:goto L4d132a;
case 0x4d1330:c.instructions+=3;goto B4d1330;
case 0x4d1332:c.instructions+=2;goto B4d1332;
case 0x4d1337:c.instructions+=1;goto B4d1337;
case 0x4d1339:goto L4d1339;
case 0x4d133a:c.instructions+=1;goto B4d133a;
case 0x4d133f:goto L4d133f;
case 0x4d1342:c.instructions+=1;goto B4d1342;
case 0x4d134c:goto L4d134c;
case 0x4d134f:c.instructions+=2;goto B4d134f;
case 0x4d1354:c.instructions+=1;goto B4d1354;
case 0x4d1359:goto L4d1359;
case 0x4d135b:c.instructions+=2;goto B4d135b;
case 0x4d1363:c.instructions+=1;goto B4d1363;
case 0x4d1368:goto L4d1368;
case 0x4d136c:c.instructions+=4;goto B4d136c;
case 0x4d136d:c.instructions+=3;goto B4d136d;
case 0x4d1374:c.instructions+=2;goto B4d1374;
case 0x4d1377:c.instructions+=1;goto B4d1377;
case 0x4d1380:goto L4d1380;
case 0x4d1386:c.instructions+=8;goto B4d1386;
case 0x4d1387:c.instructions+=7;goto B4d1387;
case 0x4d1388:c.instructions+=6;goto B4d1388;
case 0x4d1389:c.instructions+=5;goto B4d1389;
case 0x4d138b:c.instructions+=4;goto B4d138b;
case 0x4d1390:c.instructions+=3;goto B4d1390;
case 0x4d1392:c.instructions+=2;goto B4d1392;
case 0x4d1397:c.instructions+=1;goto B4d1397;
case 0x4d139b:goto L4d139b;
case 0x4d139d:goto L4d139d;
case 0x4d139f:c.instructions+=4;goto B4d139f;
case 0x4d13a2:c.instructions+=3;goto B4d13a2;
case 0x4d13a4:c.instructions+=2;goto B4d13a4;
case 0x4d13a5:c.instructions+=1;goto B4d13a5;
case 0x4d13aa:goto L4d13aa;
case 0x4d13ac:c.instructions+=1;goto B4d13ac;
case 0x4d13ae:goto L4d13ae;
case 0x4d13af:c.instructions+=3;goto B4d13af;
case 0x4d13b3:c.instructions+=2;goto B4d13b3;
case 0x4d13b4:c.instructions+=1;goto B4d13b4;
case 0x4d13b9:goto L4d13b9;
case 0x4d13bc:c.instructions+=3;goto B4d13bc;
case 0x4d13bf:c.instructions+=2;goto B4d13bf;
case 0x4d13c1:c.instructions+=1;goto B4d13c1;
case 0x4d13c3:goto L4d13c3;
case 0x4d13c6:c.instructions+=3;goto B4d13c6;
case 0x4d13cb:c.instructions+=2;goto B4d13cb;
case 0x4d13cc:c.instructions+=1;goto B4d13cc;
case 0x4d13d1:goto L4d13d1;
case 0x4d13d3:c.instructions+=1;goto B4d13d3;
case 0x4d13d8:goto L4d13d8;
case 0x4d13de:c.instructions+=3;goto B4d13de;
case 0x4d13e1:c.instructions+=2;goto B4d13e1;
case 0x4d13e3:c.instructions+=1;goto B4d13e3;
case 0x4d13e5:goto L4d13e5;
case 0x4d13e7:c.instructions+=2;goto B4d13e7;
case 0x4d13eb:c.instructions+=1;goto B4d13eb;
case 0x4d13ed:goto L4d13ed;
case 0x4d13ee:c.instructions+=1;goto B4d13ee;
case 0x4d13f3:goto L4d13f3;
case 0x4d13f6:c.instructions+=2;goto B4d13f6;
case 0x4d13fa:c.instructions+=1;goto B4d13fa;
case 0x4d13fc:goto L4d13fc;
case 0x4d1403:c.instructions+=3;goto B4d1403;
case 0x4d1405:c.instructions+=2;goto B4d1405;
case 0x4d1406:c.instructions+=1;goto B4d1406;
case 0x4d140c:goto L4d140c;
case 0x4d140e:c.instructions+=2;goto B4d140e;
case 0x4d1416:c.instructions+=1;goto B4d1416;
case 0x4d141c:goto L4d141c;
case 0x4d1420:goto L4d1420;
case 0x4d1422:c.instructions+=1;goto B4d1422;
case 0x4d1427:goto L4d1427;
case 0x4d142a:c.instructions+=2;goto B4d142a;
case 0x4d142c:c.instructions+=1;goto B4d142c;
case 0x4d142e:goto L4d142e;
case 0x4d1431:c.instructions+=7;goto B4d1431;
case 0x4d1433:c.instructions+=6;goto B4d1433;
case 0x4d1436:c.instructions+=5;goto B4d1436;
case 0x4d143a:c.instructions+=4;goto B4d143a;
case 0x4d1440:c.instructions+=3;goto B4d1440;
case 0x4d1447:c.instructions+=2;goto B4d1447;
case 0x4d1449:c.instructions+=1;goto B4d1449;
case 0x4d144b:goto L4d144b;
case 0x4d144d:goto L4d144d;
case 0x4d1453:c.instructions+=5;goto B4d1453;
case 0x4d1457:c.instructions+=4;goto B4d1457;
case 0x4d145a:c.instructions+=3;goto B4d145a;
case 0x4d145b:c.instructions+=2;goto B4d145b;
case 0x4d145c:c.instructions+=1;goto B4d145c;
case 0x4d1461:goto L4d1461;
case 0x4d1467:c.instructions+=5;goto B4d1467;
case 0x4d1469:c.instructions+=4;goto B4d1469;
case 0x4d146b:c.instructions+=3;goto B4d146b;
case 0x4d146e:c.instructions+=2;goto B4d146e;
case 0x4d146f:c.instructions+=1;goto B4d146f;
case 0x4d1474:goto L4d1474;
case 0x4d1476:c.instructions+=4;goto B4d1476;
case 0x4d1478:c.instructions+=3;goto B4d1478;
case 0x4d1479:c.instructions+=2;goto B4d1479;
case 0x4d147b:c.instructions+=1;goto B4d147b;
case 0x4d1480:goto L4d1480;
case 0x4d1483:c.instructions+=3;goto B4d1483;
case 0x4d1484:c.instructions+=2;goto B4d1484;
case 0x4d1486:c.instructions+=1;goto B4d1486;
case 0x4d148b:goto L4d148b;
case 0x4d1491:c.instructions+=2;goto B4d1491;
case 0x4d1496:c.instructions+=1;goto B4d1496;
case 0x4d1498:goto L4d1498;
case 0x4d149a:c.instructions+=3;goto B4d149a;
case 0x4d149c:c.instructions+=2;goto B4d149c;
case 0x4d14a1:c.instructions+=1;goto B4d14a1;
case 0x4d14a3:goto L4d14a3;
case 0x4d14a8:c.instructions+=1;goto B4d14a8;
case 0x4d14aa:goto L4d14aa;
case 0x4d14ac:c.instructions+=3;goto B4d14ac;
case 0x4d14ae:c.instructions+=2;goto B4d14ae;
case 0x4d14b3:c.instructions+=1;goto B4d14b3;
case 0x4d14b5:goto L4d14b5;
case 0x4d14ba:c.instructions+=1;goto B4d14ba;
case 0x4d14bc:goto L4d14bc;
case 0x4d14be:c.instructions+=3;goto B4d14be;
case 0x4d14c0:c.instructions+=2;goto B4d14c0;
case 0x4d14c5:c.instructions+=1;goto B4d14c5;
case 0x4d14c7:goto L4d14c7;
case 0x4d14cc:c.instructions+=1;goto B4d14cc;
case 0x4d14ce:goto L4d14ce;
case 0x4d14d0:c.instructions+=3;goto B4d14d0;
case 0x4d14d2:c.instructions+=2;goto B4d14d2;
case 0x4d14d7:c.instructions+=1;goto B4d14d7;
case 0x4d14d9:goto L4d14d9;
case 0x4d14de:c.instructions+=1;goto B4d14de;
case 0x4d14e0:goto L4d14e0;
case 0x4d14e2:c.instructions+=3;goto B4d14e2;
case 0x4d14e4:c.instructions+=2;goto B4d14e4;
case 0x4d14e9:c.instructions+=1;goto B4d14e9;
case 0x4d14eb:goto L4d14eb;
case 0x4d14ed:c.instructions+=1;goto B4d14ed;
case 0x4d14ef:goto L4d14ef;
case 0x4d14f1:c.instructions+=3;goto B4d14f1;
case 0x4d14f3:c.instructions+=2;goto B4d14f3;
case 0x4d14f8:c.instructions+=1;goto B4d14f8;
case 0x4d14fa:goto L4d14fa;
case 0x4d14ff:c.instructions+=1;goto B4d14ff;
case 0x4d1501:goto L4d1501;
case 0x4d1503:c.instructions+=2;goto B4d1503;
case 0x4d1505:c.instructions+=1;goto B4d1505;
case 0x4d150a:goto L4d150a;
case 0x4d150f:goto L4d150f;
case 0x4d1512:c.instructions+=3;goto B4d1512;
case 0x4d1514:c.instructions+=2;goto B4d1514;
case 0x4d1515:c.instructions+=1;goto B4d1515;
case 0x4d151a:goto L4d151a;
case 0x4d151c:c.instructions+=13;goto B4d151c;
case 0x4d1520:c.instructions+=12;goto B4d1520;
case 0x4d1525:c.instructions+=11;goto B4d1525;
case 0x4d1529:c.instructions+=10;goto B4d1529;
case 0x4d152e:c.instructions+=9;goto B4d152e;
case 0x4d1534:c.instructions+=8;goto B4d1534;
case 0x4d153a:c.instructions+=7;goto B4d153a;
case 0x4d153b:c.instructions+=6;goto B4d153b;
case 0x4d153c:c.instructions+=5;goto B4d153c;
case 0x4d1541:c.instructions+=4;goto B4d1541;
case 0x4d1545:c.instructions+=3;goto B4d1545;
case 0x4d1547:c.instructions+=2;goto B4d1547;
case 0x4d1548:c.instructions+=1;goto B4d1548;
case 0x4d154d:goto L4d154d;
case 0x4d1550:c.instructions+=6;goto B4d1550;
case 0x4d1552:c.instructions+=5;goto B4d1552;
case 0x4d1554:c.instructions+=4;goto B4d1554;
case 0x4d1558:c.instructions+=3;goto B4d1558;
case 0x4d1559:c.instructions+=2;goto B4d1559;
case 0x4d155b:c.instructions+=1;goto B4d155b;
case 0x4d1560:goto L4d1560;
case 0x4d1563:c.instructions+=2;goto B4d1563;
case 0x4d1565:c.instructions+=1;goto B4d1565;
case 0x4d1567:goto L4d1567;
case 0x4d156c:c.instructions+=4;goto B4d156c;
case 0x4d1570:c.instructions+=3;goto B4d1570;
case 0x4d1572:c.instructions+=2;goto B4d1572;
case 0x4d1573:c.instructions+=1;goto B4d1573;
case 0x4d1578:goto L4d1578;
case 0x4d157b:c.instructions+=1;goto B4d157b;
case 0x4d157d:goto L4d157d;
case 0x4d157e:c.instructions+=5;goto B4d157e;
case 0x4d1583:c.instructions+=4;goto B4d1583;
case 0x4d1587:c.instructions+=3;goto B4d1587;
case 0x4d1589:c.instructions+=2;goto B4d1589;
case 0x4d158a:c.instructions+=1;goto B4d158a;
case 0x4d158f:goto L4d158f;
case 0x4d1592:goto L4d1592;
case 0x4d1594:c.instructions+=5;goto B4d1594;
case 0x4d1596:c.instructions+=4;goto B4d1596;
case 0x4d159a:c.instructions+=3;goto B4d159a;
case 0x4d159b:c.instructions+=2;goto B4d159b;
case 0x4d159d:c.instructions+=1;goto B4d159d;
case 0x4d15a2:goto L4d15a2;
case 0x4d15a4:c.instructions+=4;goto B4d15a4;
case 0x4d15aa:c.instructions+=3;goto B4d15aa;
case 0x4d15af:c.instructions+=2;goto B4d15af;
case 0x4d15b0:c.instructions+=1;goto B4d15b0;
case 0x4d15b5:goto L4d15b5;
case 0x4d15b8:c.instructions+=2;goto B4d15b8;
case 0x4d15b9:c.instructions+=1;goto B4d15b9;
case 0x4d15be:goto L4d15be;
case 0x4d15c0:c.instructions+=2;goto B4d15c0;
case 0x4d15c1:c.instructions+=1;goto B4d15c1;
case 0x4d15c6:goto L4d15c6;
case 0x4d15c9:c.instructions+=4;goto B4d15c9;
case 0x4d15cb:c.instructions+=3;goto B4d15cb;
case 0x4d15cd:c.instructions+=2;goto B4d15cd;
case 0x4d15ce:c.instructions+=1;goto B4d15ce;
case 0x4d15d3:goto L4d15d3;
case 0x4d15d6:c.instructions+=3;goto B4d15d6;
case 0x4d15d7:c.instructions+=2;goto B4d15d7;
case 0x4d15d9:c.instructions+=1;goto B4d15d9;
case 0x4d15de:goto L4d15de;
case 0x4d15e0:c.instructions+=5;goto B4d15e0;
case 0x4d15e3:c.instructions+=4;goto B4d15e3;
case 0x4d15e6:c.instructions+=3;goto B4d15e6;
case 0x4d15e7:c.instructions+=2;goto B4d15e7;
case 0x4d15e9:c.instructions+=1;goto B4d15e9;
case 0x4d15ee:goto L4d15ee;
case 0x4d15ef:c.instructions+=2;goto B4d15ef;
case 0x4d15f1:c.instructions+=1;goto B4d15f1;
case 0x4d15f6:goto L4d15f6;
case 0x4d15fa:c.instructions+=5;goto B4d15fa;
case 0x4d15fe:c.instructions+=4;goto B4d15fe;
case 0x4d15ff:c.instructions+=3;goto B4d15ff;
case 0x4d1601:c.instructions+=2;goto B4d1601;
case 0x4d1605:c.instructions+=1;goto B4d1605;
case 0x4d160b:goto L4d160b;
case 0x4d160d:goto L4d160d;
case 0x4d1610:c.instructions+=1;goto B4d1610;
case 0x4d1616:goto L4d1616;
case 0x4d161b:c.instructions+=3;goto B4d161b;
case 0x4d161d:c.instructions+=2;goto B4d161d;
case 0x4d1620:c.instructions+=1;goto B4d1620;
case 0x4d1624:goto L4d1624;
case 0x4d1626:c.instructions+=1;goto B4d1626;
case 0x4d162b:goto L4d162b;
case 0x4d162e:c.instructions+=2;goto B4d162e;
case 0x4d1630:c.instructions+=1;goto B4d1630;
case 0x4d1632:goto L4d1632;
case 0x4d1635:c.instructions+=7;goto B4d1635;
case 0x4d1637:c.instructions+=6;goto B4d1637;
case 0x4d163a:c.instructions+=5;goto B4d163a;
case 0x4d163e:c.instructions+=4;goto B4d163e;
case 0x4d1644:c.instructions+=3;goto B4d1644;
case 0x4d164b:c.instructions+=2;goto B4d164b;
case 0x4d164d:c.instructions+=1;goto B4d164d;
case 0x4d164f:goto L4d164f;
case 0x4d1651:goto L4d1651;
case 0x4d1653:c.instructions+=4;goto B4d1653;
case 0x4d1655:c.instructions+=3;goto B4d1655;
case 0x4d165a:c.instructions+=2;goto B4d165a;
case 0x4d165c:c.instructions+=1;goto B4d165c;
case 0x4d1661:goto L4d1661;
case 0x4d1663:c.instructions+=4;goto B4d1663;
case 0x4d1665:c.instructions+=3;goto B4d1665;
case 0x4d166a:c.instructions+=2;goto B4d166a;
case 0x4d166c:c.instructions+=1;goto B4d166c;
case 0x4d1671:goto L4d1671;
case 0x4d1673:c.instructions+=4;goto B4d1673;
case 0x4d1675:c.instructions+=3;goto B4d1675;
case 0x4d167a:c.instructions+=2;goto B4d167a;
case 0x4d167c:c.instructions+=1;goto B4d167c;
case 0x4d1681:goto L4d1681;
case 0x4d1683:c.instructions+=4;goto B4d1683;
case 0x4d1685:c.instructions+=3;goto B4d1685;
case 0x4d168a:c.instructions+=2;goto B4d168a;
case 0x4d168c:c.instructions+=1;goto B4d168c;
case 0x4d1691:goto L4d1691;
case 0x4d1693:c.instructions+=4;goto B4d1693;
case 0x4d1695:c.instructions+=3;goto B4d1695;
case 0x4d169a:c.instructions+=2;goto B4d169a;
case 0x4d169c:c.instructions+=1;goto B4d169c;
case 0x4d16a1:goto L4d16a1;
case 0x4d16a2:c.instructions+=5;goto B4d16a2;
case 0x4d16a7:c.instructions+=4;goto B4d16a7;
case 0x4d16ae:c.instructions+=3;goto B4d16ae;
case 0x4d16b0:c.instructions+=2;goto B4d16b0;
case 0x4d16b1:c.instructions+=1;goto B4d16b1;
case 0x4d16b6:goto L4d16b6;
case 0x4d16b9:c.instructions+=3;goto B4d16b9;
case 0x4d16c0:c.instructions+=2;goto B4d16c0;
case 0x4d16c1:c.instructions+=1;goto B4d16c1;
case 0x4d16c6:goto L4d16c6;
case 0x4d16c7:c.instructions+=2;goto B4d16c7;
case 0x4d16c8:c.instructions+=1;goto B4d16c8;
case 0x4d16cd:goto L4d16cd;
case 0x4d16cf:c.instructions+=6;goto B4d16cf;
case 0x4d16d2:c.instructions+=5;goto B4d16d2;
case 0x4d16d5:c.instructions+=4;goto B4d16d5;
case 0x4d16da:c.instructions+=3;goto B4d16da;
case 0x4d16db:c.instructions+=2;goto B4d16db;
case 0x4d16dc:c.instructions+=1;goto B4d16dc;
case 0x4d16e1:goto L4d16e1;
case 0x4d16e4:c.instructions+=2;goto B4d16e4;
case 0x4d16e6:c.instructions+=1;goto B4d16e6;
case 0x4d16e8:goto L4d16e8;
case 0x4d16eb:c.instructions+=6;goto B4d16eb;
case 0x4d16ee:c.instructions+=5;goto B4d16ee;
case 0x4d16f0:c.instructions+=4;goto B4d16f0;
case 0x4d16f5:c.instructions+=3;goto B4d16f5;
case 0x4d16f6:c.instructions+=2;goto B4d16f6;
case 0x4d16f7:c.instructions+=1;goto B4d16f7;
case 0x4d16fc:goto L4d16fc;
case 0x4d16ff:goto L4d16ff;
case 0x4d1704:c.instructions+=3;goto B4d1704;
case 0x4d1706:c.instructions+=2;goto B4d1706;
case 0x4d170b:c.instructions+=1;goto B4d170b;
case 0x4d170f:goto L4d170f;
case 0x4d1711:goto L4d1711;
case 0x4d1712:c.instructions+=7;goto B4d1712;
case 0x4d1717:c.instructions+=6;goto B4d1717;
case 0x4d1719:c.instructions+=5;goto B4d1719;
case 0x4d171d:c.instructions+=4;goto B4d171d;
case 0x4d171f:c.instructions+=3;goto B4d171f;
case 0x4d1720:c.instructions+=2;goto B4d1720;
case 0x4d1721:c.instructions+=1;goto B4d1721;
case 0x4d1726:goto L4d1726;
case 0x4d1729:c.instructions+=3;goto B4d1729;
case 0x4d172d:c.instructions+=2;goto B4d172d;
case 0x4d172e:c.instructions+=1;goto B4d172e;
case 0x4d1733:goto L4d1733;
case 0x4d1734:c.instructions+=2;goto B4d1734;
case 0x4d1735:c.instructions+=1;goto B4d1735;
case 0x4d173a:goto L4d173a;
case 0x4d173b:c.instructions+=1;goto B4d173b;
case 0x4d1740:goto L4d1740;
case 0x4d1743:c.instructions+=4;goto B4d1743;
case 0x4d1746:c.instructions+=3;goto B4d1746;
case 0x4d1747:c.instructions+=2;goto B4d1747;
case 0x4d1749:c.instructions+=1;goto B4d1749;
case 0x4d174e:goto L4d174e;
case 0x4d174f:c.instructions+=2;goto B4d174f;
case 0x4d1751:c.instructions+=1;goto B4d1751;
case 0x4d1756:goto L4d1756;
case 0x4d175a:c.instructions+=4;goto B4d175a;
case 0x4d175b:c.instructions+=3;goto B4d175b;
case 0x4d175c:c.instructions+=2;goto B4d175c;
case 0x4d1760:c.instructions+=1;goto B4d1760;
case 0x4d1766:goto L4d1766;
case 0x4d176a:goto L4d176a;
case 0x4d176e:c.instructions+=3;goto B4d176e;
case 0x4d1770:c.instructions+=2;goto B4d1770;
case 0x4d1771:c.instructions+=1;goto B4d1771;
case 0x4d1773:goto L4d1773;
case 0x4d1777:c.instructions+=4;goto B4d1777;
case 0x4d177a:c.instructions+=3;goto B4d177a;
case 0x4d177b:c.instructions+=2;goto B4d177b;
case 0x4d177d:c.instructions+=1;goto B4d177d;
case 0x4d1782:goto L4d1782;
case 0x4d1784:c.instructions+=1;goto B4d1784;
case 0x4d1786:goto L4d1786;
case 0x4d178a:c.instructions+=3;goto B4d178a;
case 0x4d178b:c.instructions+=2;goto B4d178b;
case 0x4d178d:c.instructions+=1;goto B4d178d;
case 0x4d1792:goto L4d1792;
case 0x4d1793:c.instructions+=2;goto B4d1793;
case 0x4d1795:c.instructions+=1;goto B4d1795;
case 0x4d179a:goto L4d179a;
case 0x4d179b:c.instructions+=3;goto B4d179b;
case 0x4d179c:c.instructions+=2;goto B4d179c;
case 0x4d179e:c.instructions+=1;goto B4d179e;
case 0x4d17a3:goto L4d17a3;
case 0x4d17a6:c.instructions+=2;goto B4d17a6;
case 0x4d17a8:c.instructions+=1;goto B4d17a8;
case 0x4d17aa:goto L4d17aa;
case 0x4d17ad:c.instructions+=4;goto B4d17ad;
case 0x4d17b2:c.instructions+=3;goto B4d17b2;
case 0x4d17b3:c.instructions+=2;goto B4d17b3;
case 0x4d17b5:c.instructions+=1;goto B4d17b5;
case 0x4d17b7:goto L4d17b7;
case 0x4d17b9:c.instructions+=1;goto B4d17b9;
case 0x4d17bb:goto L4d17bb;
case 0x4d17be:c.instructions+=3;goto B4d17be;
case 0x4d17c0:c.instructions+=2;goto B4d17c0;
case 0x4d17c2:c.instructions+=1;goto B4d17c2;
case 0x4d17c7:goto L4d17c7;
case 0x4d17ca:c.instructions+=2;goto B4d17ca;
case 0x4d17cc:c.instructions+=1;goto B4d17cc;
case 0x4d17ce:goto L4d17ce;
case 0x4d17d1:c.instructions+=2;goto B4d17d1;
case 0x4d17d6:c.instructions+=1;goto B4d17d6;
case 0x4d17d7:goto L4d17d7;
case 0x4d17dc:goto L4d17dc;
case 0x4d17de:c.instructions+=1;goto B4d17de;
case 0x4d17e3:goto L4d17e3;
case 0x4d17e4:c.instructions+=4;goto B4d17e4;
case 0x4d17e5:c.instructions+=3;goto B4d17e5;
case 0x4d17e6:c.instructions+=2;goto B4d17e6;
case 0x4d17ec:c.instructions+=1;goto B4d17ec;
case 0x4d17f0:goto L4d17f0;
case 0x4d17f5:c.instructions+=1;goto B4d17f5;
case 0x4d17f7:goto L4d17f7;
case 0x4d17fb:c.instructions+=2;goto B4d17fb;
case 0x4d17fd:c.instructions+=1;goto B4d17fd;
case 0x4d1802:goto L4d1802;
case 0x4d1810:goto L4d1810;
case 0x4d1812:c.instructions+=12;goto B4d1812;
case 0x4d1817:c.instructions+=11;goto B4d1817;
case 0x4d181d:c.instructions+=10;goto B4d181d;
case 0x4d181e:c.instructions+=9;goto B4d181e;
case 0x4d1825:c.instructions+=8;goto B4d1825;
case 0x4d1826:c.instructions+=7;goto B4d1826;
case 0x4d182a:c.instructions+=6;goto B4d182a;
case 0x4d182b:c.instructions+=5;goto B4d182b;
case 0x4d182c:c.instructions+=4;goto B4d182c;
case 0x4d182e:c.instructions+=3;goto B4d182e;
case 0x4d182f:c.instructions+=2;goto B4d182f;
case 0x4d1833:c.instructions+=1;goto B4d1833;
case 0x4d1838:goto L4d1838;
case 0x4d183b:c.instructions+=5;goto B4d183b;
case 0x4d1840:c.instructions+=4;goto B4d1840;
case 0x4d1848:c.instructions+=3;goto B4d1848;
case 0x4d184e:c.instructions+=2;goto B4d184e;
case 0x4d1855:c.instructions+=1;goto B4d1855;
case 0x4d185a:goto L4d185a;
case 0x4d185b:c.instructions+=2;goto B4d185b;
case 0x4d1860:c.instructions+=1;goto B4d1860;
case 0x4d1865:goto L4d1865;
case 0x4d1868:c.instructions+=4;goto B4d1868;
case 0x4d1869:c.instructions+=3;goto B4d1869;
case 0x4d186e:c.instructions+=2;goto B4d186e;
case 0x4d186f:c.instructions+=1;goto B4d186f;
case 0x4d1874:goto L4d1874;
case 0x4d1879:c.instructions+=1;goto B4d1879;
case 0x4d187e:goto L4d187e;
case 0x4d1880:c.instructions+=5;goto B4d1880;
case 0x4d1883:c.instructions+=4;goto B4d1883;
case 0x4d1887:c.instructions+=3;goto B4d1887;
case 0x4d1889:c.instructions+=2;goto B4d1889;
case 0x4d188e:c.instructions+=1;goto B4d188e;
case 0x4d1890:goto L4d1890;
case 0x4d1892:c.instructions+=13;goto B4d1892;
case 0x4d1894:c.instructions+=12;goto B4d1894;
case 0x4d1899:c.instructions+=11;goto B4d1899;
case 0x4d189f:c.instructions+=10;goto B4d189f;
case 0x4d18a0:c.instructions+=9;goto B4d18a0;
case 0x4d18a6:c.instructions+=8;goto B4d18a6;
case 0x4d18a7:c.instructions+=7;goto B4d18a7;
case 0x4d18ad:c.instructions+=6;goto B4d18ad;
case 0x4d18ae:c.instructions+=5;goto B4d18ae;
case 0x4d18b4:c.instructions+=4;goto B4d18b4;
case 0x4d18b5:c.instructions+=3;goto B4d18b5;
case 0x4d18b7:c.instructions+=2;goto B4d18b7;
case 0x4d18b9:c.instructions+=1;goto B4d18b9;
case 0x4d18be:goto L4d18be;
case 0x4d18c4:c.instructions+=1;goto B4d18c4;
case 0x4d18c6:goto L4d18c6;
case 0x4d18c8:goto L4d18c8;
case 0x4d18c9:c.instructions+=3;goto B4d18c9;
case 0x4d18cb:c.instructions+=2;goto B4d18cb;
case 0x4d18d0:c.instructions+=1;goto B4d18d0;
case 0x4d18d5:goto L4d18d5;
case 0x4d18d6:c.instructions+=3;goto B4d18d6;
case 0x4d18d8:c.instructions+=2;goto B4d18d8;
case 0x4d18de:c.instructions+=1;goto B4d18de;
case 0x4d18e3:goto L4d18e3;
case 0x4d18e8:c.instructions+=2;goto B4d18e8;
case 0x4d18ee:c.instructions+=1;goto B4d18ee;
case 0x4d18f3:goto L4d18f3;
case 0x4d18f9:c.instructions+=3;goto B4d18f9;
case 0x4d18fc:c.instructions+=2;goto B4d18fc;
case 0x4d18fd:c.instructions+=1;goto B4d18fd;
case 0x4d1902:goto L4d1902;
case 0x4d1908:c.instructions+=3;goto B4d1908;
case 0x4d1909:c.instructions+=2;goto B4d1909;
case 0x4d190b:c.instructions+=1;goto B4d190b;
case 0x4d1910:goto L4d1910;
case 0x4d1914:c.instructions+=6;goto B4d1914;
case 0x4d1915:c.instructions+=5;goto B4d1915;
case 0x4d1917:c.instructions+=4;goto B4d1917;
case 0x4d1918:c.instructions+=3;goto B4d1918;
case 0x4d191f:c.instructions+=2;goto B4d191f;
case 0x4d1922:c.instructions+=1;goto B4d1922;
case 0x4d1930:goto L4d1930;
case 0x4d1931:c.instructions+=2;goto B4d1931;
case 0x4d1933:c.instructions+=1;goto B4d1933;
case 0x4d1938:goto L4d1938;
case 0x4d193d:c.instructions+=1;goto B4d193d;
case 0x4d193f:goto L4d193f;
case 0x4d1940:c.instructions+=1;goto B4d1940;
case 0x4d1945:goto L4d1945;
case 0x4d1948:goto L4d1948;
case 0x4d194a:c.instructions+=2;goto B4d194a;
case 0x4d194b:c.instructions+=1;goto B4d194b;
case 0x4d1950:goto L4d1950;
case 0x4d1956:c.instructions+=1;goto B4d1956;
case 0x4d1960:goto L4d1960;
case 0x4d1962:c.instructions+=18;goto B4d1962;
case 0x4d1967:c.instructions+=17;goto B4d1967;
case 0x4d196d:c.instructions+=16;goto B4d196d;
case 0x4d196e:c.instructions+=15;goto B4d196e;
case 0x4d1975:c.instructions+=14;goto B4d1975;
case 0x4d1976:c.instructions+=13;goto B4d1976;
case 0x4d1977:c.instructions+=12;goto B4d1977;
case 0x4d1978:c.instructions+=11;goto B4d1978;
case 0x4d197a:c.instructions+=10;goto B4d197a;
case 0x4d197d:c.instructions+=9;goto B4d197d;
case 0x4d197f:c.instructions+=8;goto B4d197f;
case 0x4d1982:c.instructions+=7;goto B4d1982;
case 0x4d1986:c.instructions+=6;goto B4d1986;
case 0x4d198a:c.instructions+=5;goto B4d198a;
case 0x4d198c:c.instructions+=4;goto B4d198c;
case 0x4d198f:c.instructions+=3;goto B4d198f;
case 0x4d1993:c.instructions+=2;goto B4d1993;
case 0x4d1999:c.instructions+=1;goto B4d1999;
case 0x4d199e:goto L4d199e;
case 0x4d19a4:c.instructions+=15;goto B4d19a4;
case 0x4d19aa:c.instructions+=14;goto B4d19aa;
case 0x4d19b0:c.instructions+=13;goto B4d19b0;
case 0x4d19ba:c.instructions+=12;goto B4d19ba;
case 0x4d19bc:c.instructions+=11;goto B4d19bc;
case 0x4d19c2:c.instructions+=10;goto B4d19c2;
case 0x4d19c4:c.instructions+=9;goto B4d19c4;
case 0x4d19c8:c.instructions+=8;goto B4d19c8;
case 0x4d19cb:c.instructions+=7;goto B4d19cb;
case 0x4d19cf:c.instructions+=6;goto B4d19cf;
case 0x4d19d1:c.instructions+=5;goto B4d19d1;
case 0x4d19d2:c.instructions+=4;goto B4d19d2;
case 0x4d19d3:c.instructions+=3;goto B4d19d3;
case 0x4d19da:c.instructions+=2;goto B4d19da;
case 0x4d19dd:c.instructions+=1;goto B4d19dd;
case 0x4d19e0:goto L4d19e0;
case 0x4d19e1:c.instructions+=2;goto B4d19e1;
case 0x4d19e3:c.instructions+=1;goto B4d19e3;
case 0x4d19e8:goto L4d19e8;
case 0x4d19ed:c.instructions+=1;goto B4d19ed;
case 0x4d19ef:goto L4d19ef;
case 0x4d19f0:c.instructions+=1;goto B4d19f0;
case 0x4d19f5:goto L4d19f5;
case 0x4d19f8:goto L4d19f8;
case 0x4d19fa:c.instructions+=2;goto B4d19fa;
case 0x4d19fb:c.instructions+=1;goto B4d19fb;
case 0x4d1a00:goto L4d1a00;
case 0x4d1a02:c.instructions+=12;goto B4d1a02;
case 0x4d1a07:c.instructions+=11;goto B4d1a07;
case 0x4d1a0d:c.instructions+=10;goto B4d1a0d;
case 0x4d1a0e:c.instructions+=9;goto B4d1a0e;
case 0x4d1a15:c.instructions+=8;goto B4d1a15;
case 0x4d1a16:c.instructions+=7;goto B4d1a16;
case 0x4d1a17:c.instructions+=6;goto B4d1a17;
case 0x4d1a19:c.instructions+=5;goto B4d1a19;
case 0x4d1a1d:c.instructions+=4;goto B4d1a1d;
case 0x4d1a23:c.instructions+=3;goto B4d1a23;
case 0x4d1a29:c.instructions+=2;goto B4d1a29;
case 0x4d1a31:c.instructions+=1;goto B4d1a31;
case 0x4d1a36:goto L4d1a36;
case 0x4d1a39:c.instructions+=3;goto B4d1a39;
case 0x4d1a41:c.instructions+=2;goto B4d1a41;
case 0x4d1a47:c.instructions+=1;goto B4d1a47;
case 0x4d1a4c:goto L4d1a4c;
case 0x4d1a50:c.instructions+=4;goto B4d1a50;
case 0x4d1a51:c.instructions+=3;goto B4d1a51;
case 0x4d1a58:c.instructions+=2;goto B4d1a58;
case 0x4d1a5b:c.instructions+=1;goto B4d1a5b;
case 0x4d1a60:goto L4d1a60;
case 0x4d1a62:c.instructions+=13;goto B4d1a62;
case 0x4d1a67:c.instructions+=12;goto B4d1a67;
case 0x4d1a6d:c.instructions+=11;goto B4d1a6d;
case 0x4d1a6e:c.instructions+=10;goto B4d1a6e;
case 0x4d1a75:c.instructions+=9;goto B4d1a75;
case 0x4d1a78:c.instructions+=8;goto B4d1a78;
case 0x4d1a79:c.instructions+=7;goto B4d1a79;
case 0x4d1a7a:c.instructions+=6;goto B4d1a7a;
case 0x4d1a7c:c.instructions+=5;goto B4d1a7c;
case 0x4d1a7d:c.instructions+=4;goto B4d1a7d;
case 0x4d1a81:c.instructions+=3;goto B4d1a81;
case 0x4d1a88:c.instructions+=2;goto B4d1a88;
case 0x4d1a90:c.instructions+=1;goto B4d1a90;
case 0x4d1a95:goto L4d1a95;
case 0x4d1a97:c.instructions+=2;goto B4d1a97;
case 0x4d1a98:c.instructions+=1;goto B4d1a98;
case 0x4d1a9d:goto L4d1a9d;
case 0x4d1aa0:c.instructions+=3;goto B4d1aa0;
case 0x4d1aa3:c.instructions+=2;goto B4d1aa3;
case 0x4d1aa9:c.instructions+=1;goto B4d1aa9;
case 0x4d1aab:goto L4d1aab;
case 0x4d1ab1:c.instructions+=3;goto B4d1ab1;
case 0x4d1ab3:c.instructions+=2;goto B4d1ab3;
case 0x4d1ab5:c.instructions+=1;goto B4d1ab5;
case 0x4d1ab7:goto L4d1ab7;
case 0x4d1ab8:c.instructions+=1;goto B4d1ab8;
case 0x4d1abd:goto L4d1abd;
case 0x4d1ac0:c.instructions+=1;goto B4d1ac0;
case 0x4d1ac6:goto L4d1ac6;
case 0x4d1acb:goto L4d1acb;
case 0x4d1ace:c.instructions+=1;goto B4d1ace;
case 0x4d1ad0:goto L4d1ad0;
case 0x4d1ad6:c.instructions+=3;goto B4d1ad6;
case 0x4d1ad7:c.instructions+=2;goto B4d1ad7;
case 0x4d1ad8:c.instructions+=1;goto B4d1ad8;
case 0x4d1add:goto L4d1add;
case 0x4d1ae3:c.instructions+=3;goto B4d1ae3;
case 0x4d1ae4:c.instructions+=2;goto B4d1ae4;
case 0x4d1ae5:c.instructions+=1;goto B4d1ae5;
case 0x4d1aea:goto L4d1aea;
case 0x4d1aef:goto L4d1aef;
case 0x4d1af1:c.instructions+=1;goto B4d1af1;
case 0x4d1af6:goto L4d1af6;
case 0x4d1af7:c.instructions+=1;goto B4d1af7;
case 0x4d1afc:goto L4d1afc;
case 0x4d1aff:c.instructions+=2;goto B4d1aff;
case 0x4d1b01:c.instructions+=1;goto B4d1b01;
case 0x4d1b06:goto L4d1b06;
case 0x4d1b08:c.instructions+=1;goto B4d1b08;
case 0x4d1b0a:goto L4d1b0a;
case 0x4d1b14:c.instructions+=1;goto B4d1b14;
case 0x4d1b16:goto L4d1b16;
case 0x4d1b1c:c.instructions+=1;goto B4d1b1c;
case 0x4d1b21:goto L4d1b21;
case 0x4d1b22:c.instructions+=3;goto B4d1b22;
case 0x4d1b23:c.instructions+=2;goto B4d1b23;
case 0x4d1b24:c.instructions+=1;goto B4d1b24;
case 0x4d1b29:goto L4d1b29;
case 0x4d1b2c:c.instructions+=2;goto B4d1b2c;
case 0x4d1b2e:c.instructions+=1;goto B4d1b2e;
case 0x4d1b33:goto L4d1b33;
case 0x4d1b34:c.instructions+=10;goto B4d1b34;
case 0x4d1b37:c.instructions+=9;goto B4d1b37;
case 0x4d1b3d:c.instructions+=8;goto B4d1b3d;
case 0x4d1b43:c.instructions+=7;goto B4d1b43;
case 0x4d1b47:c.instructions+=6;goto B4d1b47;
case 0x4d1b4d:c.instructions+=5;goto B4d1b4d;
case 0x4d1b50:c.instructions+=4;goto B4d1b50;
case 0x4d1b53:c.instructions+=3;goto B4d1b53;
case 0x4d1b55:c.instructions+=2;goto B4d1b55;
case 0x4d1b5a:c.instructions+=1;goto B4d1b5a;
case 0x4d1b5c:goto L4d1b5c;
case 0x4d1b60:goto L4d1b60;
case 0x4d1b62:c.instructions+=6;goto B4d1b62;
case 0x4d1b65:c.instructions+=5;goto B4d1b65;
case 0x4d1b67:c.instructions+=4;goto B4d1b67;
case 0x4d1b6a:c.instructions+=3;goto B4d1b6a;
case 0x4d1b6d:c.instructions+=2;goto B4d1b6d;
case 0x4d1b6f:c.instructions+=1;goto B4d1b6f;
case 0x4d1b71:goto L4d1b71;
case 0x4d1b73:c.instructions+=2;goto B4d1b73;
case 0x4d1b75:c.instructions+=1;goto B4d1b75;
case 0x4d1b77:goto L4d1b77;
case 0x4d1b79:c.instructions+=2;goto B4d1b79;
case 0x4d1b7b:c.instructions+=1;goto B4d1b7b;
case 0x4d1b7d:goto L4d1b7d;
case 0x4d1b80:c.instructions+=5;goto B4d1b80;
case 0x4d1b83:c.instructions+=4;goto B4d1b83;
case 0x4d1b85:c.instructions+=3;goto B4d1b85;
case 0x4d1b89:c.instructions+=2;goto B4d1b89;
case 0x4d1b8a:c.instructions+=1;goto B4d1b8a;
case 0x4d1b8c:goto L4d1b8c;
case 0x4d1b90:goto L4d1b90;
case 0x4d1b92:c.instructions+=6;goto B4d1b92;
case 0x4d1b95:c.instructions+=5;goto B4d1b95;
case 0x4d1b97:c.instructions+=4;goto B4d1b97;
case 0x4d1b9a:c.instructions+=3;goto B4d1b9a;
case 0x4d1b9d:c.instructions+=2;goto B4d1b9d;
case 0x4d1b9f:c.instructions+=1;goto B4d1b9f;
case 0x4d1ba1:goto L4d1ba1;
case 0x4d1ba3:c.instructions+=2;goto B4d1ba3;
case 0x4d1ba5:c.instructions+=1;goto B4d1ba5;
case 0x4d1ba7:goto L4d1ba7;
case 0x4d1ba9:c.instructions+=2;goto B4d1ba9;
case 0x4d1bab:c.instructions+=1;goto B4d1bab;
case 0x4d1bad:goto L4d1bad;
case 0x4d1baf:c.instructions+=2;goto B4d1baf;
case 0x4d1bb7:c.instructions+=1;goto B4d1bb7;
case 0x4d1bbc:goto L4d1bbc;
case 0x4d1bc0:c.instructions+=6;goto B4d1bc0;
case 0x4d1bc1:c.instructions+=5;goto B4d1bc1;
case 0x4d1bc2:c.instructions+=4;goto B4d1bc2;
case 0x4d1bc3:c.instructions+=3;goto B4d1bc3;
case 0x4d1bca:c.instructions+=2;goto B4d1bca;
case 0x4d1bcd:c.instructions+=1;goto B4d1bcd;
case 0x4d1bd0:goto L4d1bd0;
case 0x4d1bd1:c.instructions+=5;goto B4d1bd1;
case 0x4d1bd3:c.instructions+=4;goto B4d1bd3;
case 0x4d1bd6:c.instructions+=3;goto B4d1bd6;
case 0x4d1bd7:c.instructions+=2;goto B4d1bd7;
case 0x4d1bd8:c.instructions+=1;goto B4d1bd8;
case 0x4d1bdd:goto L4d1bdd;
case 0x4d1be0:c.instructions+=5;goto B4d1be0;
case 0x4d1be2:c.instructions+=4;goto B4d1be2;
case 0x4d1be5:c.instructions+=3;goto B4d1be5;
case 0x4d1be8:c.instructions+=2;goto B4d1be8;
case 0x4d1be9:c.instructions+=1;goto B4d1be9;
case 0x4d1bee:goto L4d1bee;
case 0x4d1bf1:c.instructions+=1;goto B4d1bf1;
case 0x4d1bf7:goto L4d1bf7;
case 0x4d1bfe:c.instructions+=1;goto B4d1bfe;
case 0x4d1c04:goto L4d1c04;
case 0x4d1c09:c.instructions+=2;goto B4d1c09;
case 0x4d1c0b:c.instructions+=1;goto B4d1c0b;
case 0x4d1c0d:goto L4d1c0d;
case 0x4d1c13:c.instructions+=2;goto B4d1c13;
case 0x4d1c15:c.instructions+=1;goto B4d1c15;
case 0x4d1c1b:goto L4d1c1b;
case 0x4d1c21:c.instructions+=2;goto B4d1c21;
case 0x4d1c23:c.instructions+=1;goto B4d1c23;
case 0x4d1c29:goto L4d1c29;
case 0x4d1c2d:c.instructions+=2;goto B4d1c2d;
case 0x4d1c2e:c.instructions+=1;goto B4d1c2e;
case 0x4d1c33:goto L4d1c33;
case 0x4d1c36:c.instructions+=4;goto B4d1c36;
case 0x4d1c3b:c.instructions+=3;goto B4d1c3b;
case 0x4d1c41:c.instructions+=2;goto B4d1c41;
case 0x4d1c43:c.instructions+=1;goto B4d1c43;
case 0x4d1c48:goto L4d1c48;
case 0x4d1c4a:c.instructions+=2;goto B4d1c4a;
case 0x4d1c51:c.instructions+=1;goto B4d1c51;
case 0x4d1c56:goto L4d1c56;
case 0x4d1c57:c.instructions+=2;goto B4d1c57;
case 0x4d1c58:c.instructions+=1;goto B4d1c58;
case 0x4d1c5b:goto L4d1c5b;
case 0x4d1c61:c.instructions+=1;goto B4d1c61;
case 0x4d1c66:goto L4d1c66;
case 0x4d1c68:c.instructions+=1;goto B4d1c68;
case 0x4d1c6a:goto L4d1c6a;
case 0x4d1c6f:c.instructions+=3;goto B4d1c6f;
case 0x4d1c75:c.instructions+=2;goto B4d1c75;
case 0x4d1c77:c.instructions+=1;goto B4d1c77;
case 0x4d1c7c:goto L4d1c7c;
case 0x4d1c80:c.instructions+=2;goto B4d1c80;
case 0x4d1c81:c.instructions+=1;goto B4d1c81;
case 0x4d1c86:goto L4d1c86;
case 0x4d1c89:c.instructions+=5;goto B4d1c89;
case 0x4d1c8e:c.instructions+=4;goto B4d1c8e;
case 0x4d1c8f:c.instructions+=3;goto B4d1c8f;
case 0x4d1c96:c.instructions+=2;goto B4d1c96;
case 0x4d1c97:c.instructions+=1;goto B4d1c97;
case 0x4d1c9a:goto L4d1c9a;
case 0x4d1c9c:c.instructions+=2;goto B4d1c9c;
case 0x4d1c9e:c.instructions+=1;goto B4d1c9e;
case 0x4d1ca3:goto L4d1ca3;
case 0x4d1ca6:c.instructions+=2;goto B4d1ca6;
case 0x4d1ca8:c.instructions+=1;goto B4d1ca8;
case 0x4d1cad:goto L4d1cad;
case 0x4d1caf:c.instructions+=1;goto B4d1caf;
case 0x4d1cb1:goto L4d1cb1;
case 0x4d1cbb:c.instructions+=5;goto B4d1cbb;
case 0x4d1cbe:c.instructions+=4;goto B4d1cbe;
case 0x4d1cc4:c.instructions+=3;goto B4d1cc4;
case 0x4d1cca:c.instructions+=2;goto B4d1cca;
case 0x4d1ccc:c.instructions+=1;goto B4d1ccc;
case 0x4d1cd1:goto L4d1cd1;
case 0x4d1cd8:goto L4d1cd8;
case 0x4d1cd9:c.instructions+=2;goto B4d1cd9;
case 0x4d1cda:c.instructions+=1;goto B4d1cda;
case 0x4d1ce0:goto L4d1ce0;
case 0x4d1ce3:c.instructions+=7;goto B4d1ce3;
case 0x4d1ce4:c.instructions+=6;goto B4d1ce4;
case 0x4d1ce5:c.instructions+=5;goto B4d1ce5;
case 0x4d1ce6:c.instructions+=4;goto B4d1ce6;
case 0x4d1ce7:c.instructions+=3;goto B4d1ce7;
case 0x4d1ce9:c.instructions+=2;goto B4d1ce9;
case 0x4d1ceb:c.instructions+=1;goto B4d1ceb;
case 0x4d1cf0:goto L4d1cf0;
case 0x4d1cf2:c.instructions+=3;goto B4d1cf2;
case 0x4d1cf5:c.instructions+=2;goto B4d1cf5;
case 0x4d1cf7:c.instructions+=1;goto B4d1cf7;
case 0x4d1cf9:goto L4d1cf9;
case 0x4d1cfc:c.instructions+=13;goto B4d1cfc;
case 0x4d1d02:c.instructions+=12;goto B4d1d02;
case 0x4d1d04:c.instructions+=11;goto B4d1d04;
case 0x4d1d07:c.instructions+=10;goto B4d1d07;
case 0x4d1d0a:c.instructions+=9;goto B4d1d0a;
case 0x4d1d0d:c.instructions+=8;goto B4d1d0d;
case 0x4d1d10:c.instructions+=7;goto B4d1d10;
case 0x4d1d13:c.instructions+=6;goto B4d1d13;
case 0x4d1d16:c.instructions+=5;goto B4d1d16;
case 0x4d1d1a:c.instructions+=4;goto B4d1d1a;
case 0x4d1d21:c.instructions+=3;goto B4d1d21;
case 0x4d1d28:c.instructions+=2;goto B4d1d28;
case 0x4d1d2a:c.instructions+=1;goto B4d1d2a;
case 0x4d1d2c:goto L4d1d2c;
case 0x4d1d2e:goto L4d1d2e;
case 0x4d1d31:c.instructions+=3;goto B4d1d31;
case 0x4d1d36:c.instructions+=2;goto B4d1d36;
case 0x4d1d37:c.instructions+=1;goto B4d1d37;
case 0x4d1d3c:goto L4d1d3c;
case 0x4d1d3e:c.instructions+=2;goto B4d1d3e;
case 0x4d1d40:c.instructions+=1;goto B4d1d40;
case 0x4d1d45:goto L4d1d45;
case 0x4d1d48:c.instructions+=2;goto B4d1d48;
case 0x4d1d4a:c.instructions+=1;goto B4d1d4a;
case 0x4d1d4c:goto L4d1d4c;
case 0x4d1d52:c.instructions+=3;goto B4d1d52;
case 0x4d1d55:c.instructions+=2;goto B4d1d55;
case 0x4d1d58:c.instructions+=1;goto B4d1d58;
case 0x4d1d5a:goto L4d1d5a;
case 0x4d1d5c:goto L4d1d5c;
case 0x4d1d5f:c.instructions+=9;goto B4d1d5f;
case 0x4d1d62:c.instructions+=8;goto B4d1d62;
case 0x4d1d64:c.instructions+=7;goto B4d1d64;
case 0x4d1d67:c.instructions+=6;goto B4d1d67;
case 0x4d1d6a:c.instructions+=5;goto B4d1d6a;
case 0x4d1d6c:c.instructions+=4;goto B4d1d6c;
case 0x4d1d6f:c.instructions+=3;goto B4d1d6f;
case 0x4d1d74:c.instructions+=2;goto B4d1d74;
case 0x4d1d75:c.instructions+=1;goto B4d1d75;
case 0x4d1d7a:goto L4d1d7a;
case 0x4d1d7d:c.instructions+=4;goto B4d1d7d;
case 0x4d1d80:c.instructions+=3;goto B4d1d80;
case 0x4d1d81:c.instructions+=2;goto B4d1d81;
case 0x4d1d84:c.instructions+=1;goto B4d1d84;
case 0x4d1d89:goto L4d1d89;
case 0x4d1d8f:c.instructions+=3;goto B4d1d8f;
case 0x4d1d94:c.instructions+=2;goto B4d1d94;
case 0x4d1d9c:c.instructions+=1;goto B4d1d9c;
case 0x4d1d9e:goto L4d1d9e;
case 0x4d1da0:goto L4d1da0;
case 0x4d1da2:c.instructions+=1;goto B4d1da2;
case 0x4d1da7:goto L4d1da7;
case 0x4d1daa:c.instructions+=2;goto B4d1daa;
case 0x4d1dac:c.instructions+=1;goto B4d1dac;
case 0x4d1dae:goto L4d1dae;
case 0x4d1db1:c.instructions+=13;goto B4d1db1;
case 0x4d1db7:c.instructions+=12;goto B4d1db7;
case 0x4d1db9:c.instructions+=11;goto B4d1db9;
case 0x4d1dbc:c.instructions+=10;goto B4d1dbc;
case 0x4d1dbf:c.instructions+=9;goto B4d1dbf;
case 0x4d1dc2:c.instructions+=8;goto B4d1dc2;
case 0x4d1dc5:c.instructions+=7;goto B4d1dc5;
case 0x4d1dc8:c.instructions+=6;goto B4d1dc8;
case 0x4d1dcb:c.instructions+=5;goto B4d1dcb;
case 0x4d1dcf:c.instructions+=4;goto B4d1dcf;
case 0x4d1dd6:c.instructions+=3;goto B4d1dd6;
case 0x4d1ddd:c.instructions+=2;goto B4d1ddd;
case 0x4d1ddf:c.instructions+=1;goto B4d1ddf;
case 0x4d1de1:goto L4d1de1;
case 0x4d1de3:goto L4d1de3;
case 0x4d1de4:c.instructions+=5;goto B4d1de4;
case 0x4d1de9:c.instructions+=4;goto B4d1de9;
case 0x4d1ded:c.instructions+=3;goto B4d1ded;
case 0x4d1def:c.instructions+=2;goto B4d1def;
case 0x4d1df0:c.instructions+=1;goto B4d1df0;
case 0x4d1df5:goto L4d1df5;
case 0x4d1df8:c.instructions+=4;goto B4d1df8;
case 0x4d1dfc:c.instructions+=3;goto B4d1dfc;
case 0x4d1dfd:c.instructions+=2;goto B4d1dfd;
case 0x4d1e01:c.instructions+=1;goto B4d1e01;
case 0x4d1e06:goto L4d1e06;
case 0x4d1e07:c.instructions+=3;goto B4d1e07;
case 0x4d1e0b:c.instructions+=2;goto B4d1e0b;
case 0x4d1e0c:c.instructions+=1;goto B4d1e0c;
case 0x4d1e11:goto L4d1e11;
case 0x4d1e13:c.instructions+=2;goto B4d1e13;
case 0x4d1e17:c.instructions+=1;goto B4d1e17;
case 0x4d1e1c:goto L4d1e1c;
case 0x4d1e1f:c.instructions+=2;goto B4d1e1f;
case 0x4d1e21:c.instructions+=1;goto B4d1e21;
case 0x4d1e23:goto L4d1e23;
case 0x4d1e27:c.instructions+=4;goto B4d1e27;
case 0x4d1e2d:c.instructions+=3;goto B4d1e2d;
case 0x4d1e30:c.instructions+=2;goto B4d1e30;
case 0x4d1e33:c.instructions+=1;goto B4d1e33;
case 0x4d1e35:goto L4d1e35;
case 0x4d1e37:goto L4d1e37;
case 0x4d1e3a:c.instructions+=11;goto B4d1e3a;
case 0x4d1e3d:c.instructions+=10;goto B4d1e3d;
case 0x4d1e3f:c.instructions+=9;goto B4d1e3f;
case 0x4d1e40:c.instructions+=8;goto B4d1e40;
case 0x4d1e43:c.instructions+=7;goto B4d1e43;
case 0x4d1e48:c.instructions+=6;goto B4d1e48;
case 0x4d1e4b:c.instructions+=5;goto B4d1e4b;
case 0x4d1e4f:c.instructions+=4;goto B4d1e4f;
case 0x4d1e51:c.instructions+=3;goto B4d1e51;
case 0x4d1e52:c.instructions+=2;goto B4d1e52;
case 0x4d1e54:c.instructions+=1;goto B4d1e54;
case 0x4d1e59:goto L4d1e59;
case 0x4d1e5c:c.instructions+=3;goto B4d1e5c;
case 0x4d1e60:c.instructions+=2;goto B4d1e60;
case 0x4d1e61:c.instructions+=1;goto B4d1e61;
case 0x4d1e66:goto L4d1e66;
case 0x4d1e67:c.instructions+=2;goto B4d1e67;
case 0x4d1e68:c.instructions+=1;goto B4d1e68;
case 0x4d1e6d:goto L4d1e6d;
case 0x4d1e70:c.instructions+=4;goto B4d1e70;
case 0x4d1e71:c.instructions+=3;goto B4d1e71;
case 0x4d1e74:c.instructions+=2;goto B4d1e74;
case 0x4d1e77:c.instructions+=1;goto B4d1e77;
case 0x4d1e7c:goto L4d1e7c;
case 0x4d1e80:c.instructions+=4;goto B4d1e80;
case 0x4d1e81:c.instructions+=3;goto B4d1e81;
case 0x4d1e82:c.instructions+=2;goto B4d1e82;
case 0x4d1e86:c.instructions+=1;goto B4d1e86;
case 0x4d1e8c:goto L4d1e8c;
case 0x4d1e8d:c.instructions+=5;goto B4d1e8d;
case 0x4d1e8e:c.instructions+=4;goto B4d1e8e;
case 0x4d1e8f:c.instructions+=3;goto B4d1e8f;
case 0x4d1e90:c.instructions+=2;goto B4d1e90;
case 0x4d1e93:c.instructions+=1;goto B4d1e93;
case 0x4d1ea0:goto L4d1ea0;
case 0x4d1ea2:c.instructions+=13;goto B4d1ea2;
case 0x4d1ea8:c.instructions+=12;goto B4d1ea8;
case 0x4d1ead:c.instructions+=11;goto B4d1ead;
case 0x4d1eae:c.instructions+=10;goto B4d1eae;
case 0x4d1eb5:c.instructions+=9;goto B4d1eb5;
case 0x4d1eb8:c.instructions+=8;goto B4d1eb8;
case 0x4d1eb9:c.instructions+=7;goto B4d1eb9;
case 0x4d1eba:c.instructions+=6;goto B4d1eba;
case 0x4d1ebe:c.instructions+=5;goto B4d1ebe;
case 0x4d1ec0:c.instructions+=4;goto B4d1ec0;
case 0x4d1ec1:c.instructions+=3;goto B4d1ec1;
case 0x4d1ec2:c.instructions+=2;goto B4d1ec2;
case 0x4d1ec4:c.instructions+=1;goto B4d1ec4;
case 0x4d1ec6:goto L4d1ec6;
case 0x4d1ecc:c.instructions+=1;goto B4d1ecc;
case 0x4d1ed1:goto L4d1ed1;
case 0x4d1ed3:goto L4d1ed3;
case 0x4d1ed5:c.instructions+=2;goto B4d1ed5;
case 0x4d1ed9:c.instructions+=1;goto B4d1ed9;
case 0x4d1edb:goto L4d1edb;
case 0x4d1ee1:c.instructions+=1;goto B4d1ee1;
case 0x4d1ee3:goto L4d1ee3;
case 0x4d1ee5:goto L4d1ee5;
case 0x4d1ee8:c.instructions+=6;goto B4d1ee8;
case 0x4d1eee:c.instructions+=5;goto B4d1eee;
case 0x4d1ef4:c.instructions+=4;goto B4d1ef4;
case 0x4d1ef7:c.instructions+=3;goto B4d1ef7;
case 0x4d1ef8:c.instructions+=2;goto B4d1ef8;
case 0x4d1efa:c.instructions+=1;goto B4d1efa;
case 0x4d1eff:goto L4d1eff;
case 0x4d1f02:c.instructions+=3;goto B4d1f02;
case 0x4d1f07:c.instructions+=2;goto B4d1f07;
case 0x4d1f0b:c.instructions+=1;goto B4d1f0b;
case 0x4d1f10:goto L4d1f10;
case 0x4d1f11:c.instructions+=1;goto B4d1f11;
case 0x4d1f16:goto L4d1f16;
case 0x4d1f1c:c.instructions+=9;goto B4d1f1c;
case 0x4d1f20:c.instructions+=8;goto B4d1f20;
case 0x4d1f22:c.instructions+=7;goto B4d1f22;
case 0x4d1f26:c.instructions+=6;goto B4d1f26;
case 0x4d1f2a:c.instructions+=5;goto B4d1f2a;
case 0x4d1f2e:c.instructions+=4;goto B4d1f2e;
case 0x4d1f31:c.instructions+=3;goto B4d1f31;
case 0x4d1f34:c.instructions+=2;goto B4d1f34;
case 0x4d1f36:c.instructions+=1;goto B4d1f36;
case 0x4d1f38:goto L4d1f38;
case 0x4d1f3a:c.instructions+=1;goto B4d1f3a;
case 0x4d1f3c:goto L4d1f3c;
case 0x4d1f42:c.instructions+=2;goto B4d1f42;
case 0x4d1f43:c.instructions+=1;goto B4d1f43;
case 0x4d1f48:goto L4d1f48;
case 0x4d1f4b:c.instructions+=1;goto B4d1f4b;
case 0x4d1f4f:goto L4d1f4f;
case 0x4d1f51:c.instructions+=1;goto B4d1f51;
case 0x4d1f56:goto L4d1f56;
case 0x4d1f59:c.instructions+=3;goto B4d1f59;
case 0x4d1f5b:c.instructions+=2;goto B4d1f5b;
case 0x4d1f5d:c.instructions+=1;goto B4d1f5d;
case 0x4d1f5f:goto L4d1f5f;
case 0x4d1f62:c.instructions+=2;goto B4d1f62;
case 0x4d1f66:c.instructions+=1;goto B4d1f66;
case 0x4d1f68:goto L4d1f68;
case 0x4d1f6c:goto L4d1f6c;
case 0x4d1f6e:c.instructions+=1;goto B4d1f6e;
case 0x4d1f74:goto L4d1f74;
case 0x4d1f7a:c.instructions+=1;goto B4d1f7a;
case 0x4d1f80:goto L4d1f80;
case 0x4d1f86:c.instructions+=4;goto B4d1f86;
case 0x4d1f8b:c.instructions+=3;goto B4d1f8b;
case 0x4d1f8d:c.instructions+=2;goto B4d1f8d;
case 0x4d1f91:c.instructions+=1;goto B4d1f91;
case 0x4d1f93:goto L4d1f93;
case 0x4d1f99:c.instructions+=2;goto B4d1f99;
case 0x4d1f9a:c.instructions+=1;goto B4d1f9a;
case 0x4d1fa0:goto L4d1fa0;
case 0x4d1fa6:c.instructions+=1;goto B4d1fa6;
case 0x4d1fa8:goto L4d1fa8;
case 0x4d1fa9:goto L4d1fa9;
case 0x4d1fac:c.instructions+=2;goto B4d1fac;
case 0x4d1fad:c.instructions+=1;goto B4d1fad;
case 0x4d1faf:goto L4d1faf;
case 0x4d1fb3:goto L4d1fb3;
case 0x4d1fb8:c.instructions+=1;goto B4d1fb8;
case 0x4d1fbd:goto L4d1fbd;
case 0x4d1fc0:c.instructions+=4;goto B4d1fc0;
case 0x4d1fc4:c.instructions+=3;goto B4d1fc4;
case 0x4d1fc6:c.instructions+=2;goto B4d1fc6;
case 0x4d1fca:c.instructions+=1;goto B4d1fca;
case 0x4d1fcc:goto L4d1fcc;
case 0x4d1fce:c.instructions+=1;goto B4d1fce;
case 0x4d1fd3:goto L4d1fd3;
case 0x4d1fd5:c.instructions+=1;goto B4d1fd5;
case 0x4d1fd7:goto L4d1fd7;
case 0x4d1fd9:goto L4d1fd9;
case 0x4d1fdb:c.instructions+=4;goto B4d1fdb;
case 0x4d1fdd:c.instructions+=3;goto B4d1fdd;
case 0x4d1fe2:c.instructions+=2;goto B4d1fe2;
case 0x4d1fea:c.instructions+=1;goto B4d1fea;
case 0x4d1fef:goto L4d1fef;
case 0x4d1ff2:c.instructions+=3;goto B4d1ff2;
case 0x4d1ff3:c.instructions+=2;goto B4d1ff3;
case 0x4d1ff5:c.instructions+=1;goto B4d1ff5;
case 0x4d1ffa:goto L4d1ffa;
case 0x4d1fff:c.instructions+=1;goto B4d1fff;
default:missing_instruction(c.pc);}
B4d1005:L4d1005:{c.instructions+=9;NFSU2_TR(0x4d1005);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1006:{NFSU2_TR(0x4d1006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1007:{NFSU2_TR(0x4d1007);
__builtin_memmove((R+24),(R+4),4);
}
B4d1009:{NFSU2_TR(0x4d1009);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d100d:{NFSU2_TR(0x4d100d);
u8 U[4];
w4(U+0,u32(0x795f94ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d1013:{NFSU2_TR(0x4d1013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1019:{NFSU2_TR(0x4d1019);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d101b:{NFSU2_TR(0x4d101b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1023:{NFSU2_TR(0x4d1023);
if(r1(R+518)){{goto L4d1038;}}
}
B4d1025:L4d1025:{c.instructions+=2;NFSU2_TR(0x4d1025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1026:{NFSU2_TR(0x4d1026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d102bull));
TAIL_STATIC(0x540a60u,540);
}
B4d102b:L4d102b:{c.instructions+=2;NFSU2_TR(0x4d102b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d102e:{NFSU2_TR(0x4d102e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1038:L4d1038:{c.instructions+=4;NFSU2_TR(0x4d1038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d103e:{NFSU2_TR(0x4d103e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1040:{NFSU2_TR(0x4d1040);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1045:{NFSU2_TR(0x4d1045);
if(r1(R+518)){{goto L4d105a;}}
}
B4d1047:L4d1047:{c.instructions+=2;NFSU2_TR(0x4d1047);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1048:{NFSU2_TR(0x4d1048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d104dull));
TAIL_STATIC(0x540a60u,540);
}
B4d104d:L4d104d:{c.instructions+=2;NFSU2_TR(0x4d104d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1050:{NFSU2_TR(0x4d1050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d105a:L4d105a:{c.instructions+=3;NFSU2_TR(0x4d105a);
__builtin_memmove((R+4),(R+24),4);
}
B4d105c:{NFSU2_TR(0x4d105c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1064:{NFSU2_TR(0x4d1064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1069ull));
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d1069:L4d1069:{c.instructions+=5;NFSU2_TR(0x4d1069);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d106d:{NFSU2_TR(0x4d106d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d106e:{NFSU2_TR(0x4d106e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1075:{NFSU2_TR(0x4d1075);
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
B4d1078:{NFSU2_TR(0x4d1078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1080:L4d1080:{c.instructions+=12;NFSU2_TR(0x4d1080);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1082:{NFSU2_TR(0x4d1082);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1087:{NFSU2_TR(0x4d1087);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d108d:{NFSU2_TR(0x4d108d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d108e:{NFSU2_TR(0x4d108e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1095:{NFSU2_TR(0x4d1095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1096:{NFSU2_TR(0x4d1096);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d109a:{NFSU2_TR(0x4d109a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d109b:{NFSU2_TR(0x4d109b);
__builtin_memmove((R+24),(R+4),4);
}
B4d109d:{NFSU2_TR(0x4d109d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d109e:{NFSU2_TR(0x4d109e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d10a2:{NFSU2_TR(0x4d10a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d10a7ull));
TAIL_STATIC(0x552780u,552);
}
B4d10a7:L4d10a7:{c.instructions+=4;NFSU2_TR(0x4d10a7);
__builtin_memmove((R+4),(R+24),4);
}
B4d10a9:{NFSU2_TR(0x4d10a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d10b1:{NFSU2_TR(0x4d10b1);
u8 U[4];
w4(U+0,u32(0x795fa8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d10b7:{NFSU2_TR(0x4d10b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d10bcull));
TAIL_STATIC(0x4ba980u,4ba);
}
B4d10bc:L4d10bc:{c.instructions+=6;NFSU2_TR(0x4d10bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d10c0:{NFSU2_TR(0x4d10c0);
__builtin_memmove((R+0),(R+24),4);
}
B4d10c2:{NFSU2_TR(0x4d10c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d10c3:{NFSU2_TR(0x4d10c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d10ca:{NFSU2_TR(0x4d10ca);
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
B4d10cd:{NFSU2_TR(0x4d10cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d10d0:L4d10d0:{c.instructions+=3;NFSU2_TR(0x4d10d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d10d1:{NFSU2_TR(0x4d10d1);
__builtin_memmove((R+24),(R+4),4);
}
B4d10d3:{NFSU2_TR(0x4d10d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d10d8ull));
{goto L4d10f0;}
}
B4d10d8:L4d10d8:{c.instructions+=2;NFSU2_TR(0x4d10d8);
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
B4d10dd:{NFSU2_TR(0x4d10dd);
if(r1(R+518)){{goto L4d10e8;}}
}
B4d10df:L4d10df:{c.instructions+=2;NFSU2_TR(0x4d10df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d10e0:{NFSU2_TR(0x4d10e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d10e5ull));
TAIL_STATIC(0x575630u,575);
}
B4d10e5:L4d10e5:{c.instructions+=1;NFSU2_TR(0x4d10e5);
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
B4d10e8:L4d10e8:{c.instructions+=3;NFSU2_TR(0x4d10e8);
__builtin_memmove((R+0),(R+24),4);
}
B4d10ea:{NFSU2_TR(0x4d10ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d10eb:{NFSU2_TR(0x4d10eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d10f0:L4d10f0:{c.instructions+=2;NFSU2_TR(0x4d10f0);
u8 U[4];
w4(U+0,u32(0x795fa8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4d10f6:{NFSU2_TR(0x4d10f6);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d1100:L4d1100:{c.instructions+=15;NFSU2_TR(0x4d1100);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1102:{NFSU2_TR(0x4d1102);
u8 U[4];
w4(U+0,u32(0x774776ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1107:{NFSU2_TR(0x4d1107);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d110d:{NFSU2_TR(0x4d110d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d110e:{NFSU2_TR(0x4d110e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1115:{NFSU2_TR(0x4d1115);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1116:{NFSU2_TR(0x4d1116);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d111a:{NFSU2_TR(0x4d111a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d111b:{NFSU2_TR(0x4d111b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d111c:{NFSU2_TR(0x4d111c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d111d:{NFSU2_TR(0x4d111d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d111e:{NFSU2_TR(0x4d111e);
__builtin_memmove((R+24),(R+4),4);
}
B4d1120:{NFSU2_TR(0x4d1120);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1121:{NFSU2_TR(0x4d1121);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1125:{NFSU2_TR(0x4d1125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d112aull));
TAIL_STATIC(0x552780u,552);
}
B4d112a:L4d112a:{c.instructions+=36;NFSU2_TR(0x4d112a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d112c:{NFSU2_TR(0x4d112c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1132:{NFSU2_TR(0x4d1132);
u8 U[4];
w4(U+0,u32(0x795fbcull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d1138:{NFSU2_TR(0x4d1138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d113e:{NFSU2_TR(0x4d113e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1144:{NFSU2_TR(0x4d1144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d114a:{NFSU2_TR(0x4d114a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1150:{NFSU2_TR(0x4d1150);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1154:{NFSU2_TR(0x4d1154);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4d1156:{NFSU2_TR(0x4d1156);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1159:{NFSU2_TR(0x4d1159);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d115c:{NFSU2_TR(0x4d115c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d115f:{NFSU2_TR(0x4d115f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1162:{NFSU2_TR(0x4d1162);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1165:{NFSU2_TR(0x4d1165);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1168:{NFSU2_TR(0x4d1168);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d116b:{NFSU2_TR(0x4d116b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d116e:{NFSU2_TR(0x4d116e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1171:{NFSU2_TR(0x4d1171);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d1173:{NFSU2_TR(0x4d1173);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d1179:{NFSU2_TR(0x4d1179);
__builtin_memmove((R+8),(R+20),4);
}
B4d117b:{NFSU2_TR(0x4d117b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d117d:{NFSU2_TR(0x4d117d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1180:{NFSU2_TR(0x4d1180);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1183:{NFSU2_TR(0x4d1183);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1186:{NFSU2_TR(0x4d1186);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1189:{NFSU2_TR(0x4d1189);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d118f:{NFSU2_TR(0x4d118f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d1191:{NFSU2_TR(0x4d1191);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1194:{NFSU2_TR(0x4d1194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1197:{NFSU2_TR(0x4d1197);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d119a:{NFSU2_TR(0x4d119a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d119d:{NFSU2_TR(0x4d119d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d119f:{NFSU2_TR(0x4d119f);
w4(R+4,u32(0x850080ull));
}
B4d11a4:{NFSU2_TR(0x4d11a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d11a9:{NFSU2_TR(0x4d11a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d11aeull));
TAIL_STATIC(0x5031d0u,503);
}
B4d11ae:L4d11ae:{c.instructions+=3;NFSU2_TR(0x4d11ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d11af:{NFSU2_TR(0x4d11af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d11b0:{NFSU2_TR(0x4d11b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d11b5ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4d11b5:L4d11b5:{c.instructions+=4;NFSU2_TR(0x4d11b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d11b8:{NFSU2_TR(0x4d11b8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d11ba:{NFSU2_TR(0x4d11ba);
w4(R+4,u32(0x850080ull));
}
B4d11bf:{NFSU2_TR(0x4d11bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d11c4ull));
TAIL_STATIC(0x503210u,503);
}
B4d11c4:L4d11c4:{c.instructions+=4;NFSU2_TR(0x4d11c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d11c5:{NFSU2_TR(0x4d11c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d11cb:{NFSU2_TR(0x4d11cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d11cc:{NFSU2_TR(0x4d11cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d11d1ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4d11d1:L4d11d1:{c.instructions+=3;NFSU2_TR(0x4d11d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d11d4:{NFSU2_TR(0x4d11d4);
__builtin_memmove((R+4),(R+24),4);
}
B4d11d6:{NFSU2_TR(0x4d11d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d11dbull));
TAIL_STATIC(0x4badd0u,4ba);
}
B4d11db:L4d11db:{c.instructions+=3;NFSU2_TR(0x4d11db);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4d11e0:{NFSU2_TR(0x4d11e0);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d11e6:{NFSU2_TR(0x4d11e6);
if(r1(R+518)){{goto L4d121f;}}
}
B4d11e8:L4d11e8:{c.instructions+=2;NFSU2_TR(0x4d11e8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4d11ee:{NFSU2_TR(0x4d11ee);
if(r1(R+518)){{goto L4d121f;}}
}
B4d11f0:L4d11f0:{c.instructions+=2;NFSU2_TR(0x4d11f0);
w4(R+4,u32(0x850080ull));
}
B4d11f5:{NFSU2_TR(0x4d11f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d11faull));
TAIL_STATIC(0x5031d0u,503);
}
B4d11fa:L4d11fa:{c.instructions+=3;NFSU2_TR(0x4d11fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d11fb:{NFSU2_TR(0x4d11fb);
u8 U[4];
w4(U+0,u32(0x2756fb2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1200:{NFSU2_TR(0x4d1200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1205ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d1205:L4d1205:{c.instructions+=5;NFSU2_TR(0x4d1205);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1208:{NFSU2_TR(0x4d1208);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1209:{NFSU2_TR(0x4d1209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d120a:{NFSU2_TR(0x4d120a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d120b:{NFSU2_TR(0x4d120b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1210ull));
TAIL_STATIC(0x4cfcb0u,4cf);
}
B4d1210:L4d1210:{c.instructions+=3;NFSU2_TR(0x4d1210);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1217:{NFSU2_TR(0x4d1217);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4d121c:{NFSU2_TR(0x4d121c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d121f:L4d121f:{c.instructions+=12;NFSU2_TR(0x4d121f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1223:{NFSU2_TR(0x4d1223);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1229:{NFSU2_TR(0x4d1229);
__builtin_memmove((R+8),gp(0x836370),4);
}
B4d122f:{NFSU2_TR(0x4d122f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1230:{NFSU2_TR(0x4d1230);
__builtin_memmove((R+0),(R+24),4);
}
B4d1232:{NFSU2_TR(0x4d1232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1233:{NFSU2_TR(0x4d1233);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x151ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1239:{NFSU2_TR(0x4d1239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d123a:{NFSU2_TR(0x4d123a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d123b:{NFSU2_TR(0x4d123b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1242:{NFSU2_TR(0x4d1242);
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
B4d1245:{NFSU2_TR(0x4d1245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1250:L4d1250:{c.instructions+=14;NFSU2_TR(0x4d1250);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1252:{NFSU2_TR(0x4d1252);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1257:{NFSU2_TR(0x4d1257);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d125d:{NFSU2_TR(0x4d125d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d125e:{NFSU2_TR(0x4d125e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1265:{NFSU2_TR(0x4d1265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1266:{NFSU2_TR(0x4d1266);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1267:{NFSU2_TR(0x4d1267);
__builtin_memmove((R+24),(R+4),4);
}
B4d1269:{NFSU2_TR(0x4d1269);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d126d:{NFSU2_TR(0x4d126d);
u8 U[4];
w4(U+0,u32(0x795fbcull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d1273:{NFSU2_TR(0x4d1273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1279:{NFSU2_TR(0x4d1279);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d127b:{NFSU2_TR(0x4d127b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1283:{NFSU2_TR(0x4d1283);
if(r1(R+518)){{goto L4d1298;}}
}
B4d1285:L4d1285:{c.instructions+=2;NFSU2_TR(0x4d1285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1286:{NFSU2_TR(0x4d1286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d128bull));
TAIL_STATIC(0x540a60u,540);
}
B4d128b:L4d128b:{c.instructions+=2;NFSU2_TR(0x4d128b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d128e:{NFSU2_TR(0x4d128e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1298:L4d1298:{c.instructions+=3;NFSU2_TR(0x4d1298);
__builtin_memmove((R+4),(R+24),4);
}
B4d129a:{NFSU2_TR(0x4d129a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d12a2:{NFSU2_TR(0x4d12a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d12a7ull));
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d12a7:L4d12a7:{c.instructions+=5;NFSU2_TR(0x4d12a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d12ab:{NFSU2_TR(0x4d12ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d12ac:{NFSU2_TR(0x4d12ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d12b3:{NFSU2_TR(0x4d12b3);
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
B4d12b6:{NFSU2_TR(0x4d12b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d12c0:L4d12c0:{c.instructions+=12;NFSU2_TR(0x4d12c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12c2:{NFSU2_TR(0x4d12c2);
u8 U[4];
w4(U+0,u32(0x7747a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12c7:{NFSU2_TR(0x4d12c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d12cd:{NFSU2_TR(0x4d12cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12ce:{NFSU2_TR(0x4d12ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d12d5:{NFSU2_TR(0x4d12d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12d6:{NFSU2_TR(0x4d12d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12d7:{NFSU2_TR(0x4d12d7);
__builtin_memmove((R+24),(R+4),4);
}
B4d12d9:{NFSU2_TR(0x4d12d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d12dd:{NFSU2_TR(0x4d12dd);
u8 U[4];
w4(U+0,u32(0x795fd0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d12e3:{NFSU2_TR(0x4d12e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d12eb:{NFSU2_TR(0x4d12eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d12f0ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4d12f0:L4d12f0:{c.instructions+=4;NFSU2_TR(0x4d12f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12f2:{NFSU2_TR(0x4d12f2);
u8 U[4];
w4(U+0,u32(0x49ec60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d12f7:{NFSU2_TR(0x4d12f7);
__builtin_memmove((R+4),(R+0),4);
}
B4d12f9:{NFSU2_TR(0x4d12f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d12feull));
TAIL_STATIC(0x584270u,584);
}
B4d12fe:L4d12fe:{c.instructions+=4;NFSU2_TR(0x4d12fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1304:{NFSU2_TR(0x4d1304);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1306:{NFSU2_TR(0x4d1306);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1308:{NFSU2_TR(0x4d1308);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d130dull));
TAIL_STATIC(0x58a790u,58a);
}
B4d130d:L4d130d:{c.instructions+=3;NFSU2_TR(0x4d130d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1313:{NFSU2_TR(0x4d1313);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1315:{NFSU2_TR(0x4d1315);
if(r1(R+518)){{goto L4d132a;}}
}
B4d1317:L4d1317:{c.instructions+=2;NFSU2_TR(0x4d1317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1318:{NFSU2_TR(0x4d1318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d131dull));
TAIL_STATIC(0x540a60u,540);
}
B4d131d:L4d131d:{c.instructions+=2;NFSU2_TR(0x4d131d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1320:{NFSU2_TR(0x4d1320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d132a:L4d132a:{c.instructions+=4;NFSU2_TR(0x4d132a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1330:{NFSU2_TR(0x4d1330);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1332:{NFSU2_TR(0x4d1332);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1337:{NFSU2_TR(0x4d1337);
if(r1(R+518)){{goto L4d134c;}}
}
B4d1339:L4d1339:{c.instructions+=2;NFSU2_TR(0x4d1339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d133a:{NFSU2_TR(0x4d133a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d133full));
TAIL_STATIC(0x540a60u,540);
}
B4d133f:L4d133f:{c.instructions+=2;NFSU2_TR(0x4d133f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1342:{NFSU2_TR(0x4d1342);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d134c:L4d134c:{c.instructions+=3;NFSU2_TR(0x4d134c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d134f:{NFSU2_TR(0x4d134f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1354:{NFSU2_TR(0x4d1354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1359ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d1359:L4d1359:{c.instructions+=3;NFSU2_TR(0x4d1359);
__builtin_memmove((R+4),(R+24),4);
}
B4d135b:{NFSU2_TR(0x4d135b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1363:{NFSU2_TR(0x4d1363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1368ull));
TAIL_STATIC(0x510d40u,510);
}
B4d1368:L4d1368:{c.instructions+=5;NFSU2_TR(0x4d1368);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d136c:{NFSU2_TR(0x4d136c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d136d:{NFSU2_TR(0x4d136d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1374:{NFSU2_TR(0x4d1374);
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
B4d1377:{NFSU2_TR(0x4d1377);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1380:L4d1380:{c.instructions+=9;NFSU2_TR(0x4d1380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B4d1386:{NFSU2_TR(0x4d1386);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1387:{NFSU2_TR(0x4d1387);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1388:{NFSU2_TR(0x4d1388);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1389:{NFSU2_TR(0x4d1389);
__builtin_memmove((R+12),(R+4),4);
}
B4d138b:{NFSU2_TR(0x4d138b);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1390:{NFSU2_TR(0x4d1390);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d1392:{NFSU2_TR(0x4d1392);
w4(R+4,u32(0xfull));
}
B4d1397:{NFSU2_TR(0x4d1397);
u8 U[4];
w4(U+0,u32(u32(u32(0x3dull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d139b:L4d139b:{c.instructions+=1;NFSU2_TR(0x4d139b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d139d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d139bu);}goto L4d139b;}
}
B4d139d:L4d139d:{c.instructions+=5;NFSU2_TR(0x4d139d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d139f:{NFSU2_TR(0x4d139f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d13a2:{NFSU2_TR(0x4d13a2);
__builtin_memmove((R+4),(R+24),4);
}
B4d13a4:{NFSU2_TR(0x4d13a4);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4d13a5:{NFSU2_TR(0x4d13a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d13aaull));
TAIL_STATIC(0x51f530u,51f);
}
B4d13aa:L4d13aa:{c.instructions+=2;NFSU2_TR(0x4d13aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d13ac:{NFSU2_TR(0x4d13ac);
if(r1(R+518)){{goto L4d13d1;}}
}
B4d13ae:L4d13ae:{c.instructions+=4;NFSU2_TR(0x4d13ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d13af:{NFSU2_TR(0x4d13af);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d13b3:{NFSU2_TR(0x4d13b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d13b4:{NFSU2_TR(0x4d13b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d13b9ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4d13b9:L4d13b9:{c.instructions+=4;NFSU2_TR(0x4d13b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d13bc:{NFSU2_TR(0x4d13bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d13bf:{NFSU2_TR(0x4d13bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d13c1:{NFSU2_TR(0x4d13c1);
if(r1(R+518)){{goto L4d13d1;}}
}
B4d13c3:L4d13c3:{c.instructions+=4;NFSU2_TR(0x4d13c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d13c6:{NFSU2_TR(0x4d13c6);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d13cb:{NFSU2_TR(0x4d13cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d13cc:{NFSU2_TR(0x4d13cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d13d1ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4d13d1:L4d13d1:{c.instructions+=2;NFSU2_TR(0x4d13d1);
__builtin_memmove((R+4),(R+24),4);
}
B4d13d3:{NFSU2_TR(0x4d13d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d13d8ull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4d13d8:L4d13d8:{c.instructions+=4;NFSU2_TR(0x4d13d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d13de:{NFSU2_TR(0x4d13de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d13e1:{NFSU2_TR(0x4d13e1);
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
B4d13e3:{NFSU2_TR(0x4d13e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d13ed;}}
}
B4d13e5:L4d13e5:{c.instructions+=3;NFSU2_TR(0x4d13e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d13e7:{NFSU2_TR(0x4d13e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d13eb:{NFSU2_TR(0x4d13eb);
{goto L4d13fc;}
}
B4d13ed:L4d13ed:{c.instructions+=2;NFSU2_TR(0x4d13ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d13ee:{NFSU2_TR(0x4d13ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d13f3ull));
TAIL_STATIC(0x73d8d0u,73d);
}
B4d13f3:L4d13f3:{c.instructions+=3;NFSU2_TR(0x4d13f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d13f6:{NFSU2_TR(0x4d13f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d13fa:{NFSU2_TR(0x4d13fa);
__builtin_memmove((R+28),(R+0),4);
}
B4d13fc:L4d13fc:{c.instructions+=4;NFSU2_TR(0x4d13fc);
u8 U[5];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d1403:{NFSU2_TR(0x4d1403);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d1405:{NFSU2_TR(0x4d1405);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1406:{NFSU2_TR(0x4d1406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d160d;}}
}
B4d140c:L4d140c:{c.instructions+=3;NFSU2_TR(0x4d140c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d140e:{NFSU2_TR(0x4d140e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1416:{NFSU2_TR(0x4d1416);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d160d;}}
}
B4d141c:L4d141c:{c.instructions+=1;NFSU2_TR(0x4d141c);
__builtin_memmove((R+16),(R+16),4);
}
B4d1420:L4d1420:{c.instructions+=2;NFSU2_TR(0x4d1420);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1422:{NFSU2_TR(0x4d1422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1427ull));
TAIL_STATIC(0x575620u,575);
}
B4d1427:L4d1427:{c.instructions+=3;NFSU2_TR(0x4d1427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d142a:{NFSU2_TR(0x4d142a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d142c:{NFSU2_TR(0x4d142c);
if(r1(R+518)){{goto L4d144b;}}
}
B4d142e:L4d142e:{c.instructions+=8;NFSU2_TR(0x4d142e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1431:{NFSU2_TR(0x4d1431);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d1433:{NFSU2_TR(0x4d1433);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1436:{NFSU2_TR(0x4d1436);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d143a:{NFSU2_TR(0x4d143a);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d1440:{NFSU2_TR(0x4d1440);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1447:{NFSU2_TR(0x4d1447);
__builtin_memmove((R+24),(R+0),4);
}
B4d1449:{NFSU2_TR(0x4d1449);
{goto L4d144d;}
}
B4d144b:L4d144b:{c.instructions+=1;NFSU2_TR(0x4d144b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d144d:L4d144d:{c.instructions+=6;NFSU2_TR(0x4d144d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1453:{NFSU2_TR(0x4d1453);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1457:{NFSU2_TR(0x4d1457);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d145a:{NFSU2_TR(0x4d145a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d145b:{NFSU2_TR(0x4d145b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d145c:{NFSU2_TR(0x4d145c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1461ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B4d1461:L4d1461:{c.instructions+=6;NFSU2_TR(0x4d1461);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1467:{NFSU2_TR(0x4d1467);
__builtin_memmove((R+28),(R+0),4);
}
B4d1469:{NFSU2_TR(0x4d1469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d146b:{NFSU2_TR(0x4d146b);
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
B4d146e:{NFSU2_TR(0x4d146e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d146f:{NFSU2_TR(0x4d146f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1474ull));
TAIL_STATIC(0x584b50u,584);
}
B4d1474:L4d1474:{c.instructions+=5;NFSU2_TR(0x4d1474);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1476:{NFSU2_TR(0x4d1476);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1478:{NFSU2_TR(0x4d1478);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1479:{NFSU2_TR(0x4d1479);
__builtin_memmove((R+20),(R+0),4);
}
B4d147b:{NFSU2_TR(0x4d147b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1480ull));
TAIL_STATIC(0x582950u,582);
}
B4d1480:L4d1480:{c.instructions+=4;NFSU2_TR(0x4d1480);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1483:{NFSU2_TR(0x4d1483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1484:{NFSU2_TR(0x4d1484);
__builtin_memmove((R+4),(R+24),4);
}
B4d1486:{NFSU2_TR(0x4d1486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d148bull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d148b:L4d148b:{c.instructions+=3;NFSU2_TR(0x4d148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1491:{NFSU2_TR(0x4d1491);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1496:{NFSU2_TR(0x4d1496);
if(r1(R+518)){{goto L4d14a3;}}
}
B4d1498:L4d1498:{c.instructions+=4;NFSU2_TR(0x4d1498);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d149a:{NFSU2_TR(0x4d149a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d149c:{NFSU2_TR(0x4d149c);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14a1:{NFSU2_TR(0x4d14a1);
{goto L4d150a;}
}
B4d14a3:L4d14a3:{c.instructions+=2;NFSU2_TR(0x4d14a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d14a8:{NFSU2_TR(0x4d14a8);
if(r1(R+518)){{goto L4d14b5;}}
}
B4d14aa:L4d14aa:{c.instructions+=4;NFSU2_TR(0x4d14aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14ac:{NFSU2_TR(0x4d14ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14ae:{NFSU2_TR(0x4d14ae);
u8 U[4];
w4(U+0,u32(0xdcb9f861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14b3:{NFSU2_TR(0x4d14b3);
{goto L4d150a;}
}
B4d14b5:L4d14b5:{c.instructions+=2;NFSU2_TR(0x4d14b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d14ba:{NFSU2_TR(0x4d14ba);
if(r1(R+518)){{goto L4d14c7;}}
}
B4d14bc:L4d14bc:{c.instructions+=4;NFSU2_TR(0x4d14bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14be:{NFSU2_TR(0x4d14be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14c0:{NFSU2_TR(0x4d14c0);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14c5:{NFSU2_TR(0x4d14c5);
{goto L4d150a;}
}
B4d14c7:L4d14c7:{c.instructions+=2;NFSU2_TR(0x4d14c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d14cc:{NFSU2_TR(0x4d14cc);
if(r1(R+518)){{goto L4d14d9;}}
}
B4d14ce:L4d14ce:{c.instructions+=4;NFSU2_TR(0x4d14ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14d0:{NFSU2_TR(0x4d14d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14d2:{NFSU2_TR(0x4d14d2);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14d7:{NFSU2_TR(0x4d14d7);
{goto L4d150a;}
}
B4d14d9:L4d14d9:{c.instructions+=2;NFSU2_TR(0x4d14d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d14de:{NFSU2_TR(0x4d14de);
if(r1(R+518)){{goto L4d14eb;}}
}
B4d14e0:L4d14e0:{c.instructions+=4;NFSU2_TR(0x4d14e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14e2:{NFSU2_TR(0x4d14e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14e4:{NFSU2_TR(0x4d14e4);
u8 U[4];
w4(U+0,u32(0x30da61e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14e9:{NFSU2_TR(0x4d14e9);
{goto L4d150a;}
}
B4d14eb:L4d14eb:{c.instructions+=2;NFSU2_TR(0x4d14eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4d14ed:{NFSU2_TR(0x4d14ed);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4d14fa;}}
}
B4d14ef:L4d14ef:{c.instructions+=4;NFSU2_TR(0x4d14ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14f1:{NFSU2_TR(0x4d14f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14f3:{NFSU2_TR(0x4d14f3);
u8 U[4];
w4(U+0,u32(0x75f903f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d14f8:{NFSU2_TR(0x4d14f8);
{goto L4d150a;}
}
B4d14fa:L4d14fa:{c.instructions+=2;NFSU2_TR(0x4d14fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d14ff:{NFSU2_TR(0x4d14ff);
if(r1(R+518)){{goto L4d151a;}}
}
B4d1501:L4d1501:{c.instructions+=3;NFSU2_TR(0x4d1501);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1503:{NFSU2_TR(0x4d1503);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1505:{NFSU2_TR(0x4d1505);
u8 U[4];
w4(U+0,u32(0x613d3106ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d150a:L4d150a:{c.instructions+=1;NFSU2_TR(0x4d150a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d150full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d150f:L4d150f:{c.instructions+=4;NFSU2_TR(0x4d150f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1512:{NFSU2_TR(0x4d1512);
__builtin_memmove((R+4),(R+24),4);
}
B4d1514:{NFSU2_TR(0x4d1514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1515:{NFSU2_TR(0x4d1515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d151aull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d151a:L4d151a:{c.instructions+=14;NFSU2_TR(0x4d151a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4d151c:{NFSU2_TR(0x4d151c);
u8 U[8];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1520:{NFSU2_TR(0x4d1520);
u8 U[6];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4d1525:{NFSU2_TR(0x4d1525);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1529:{NFSU2_TR(0x4d1529);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d152e:{NFSU2_TR(0x4d152e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d1534:{NFSU2_TR(0x4d1534);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d153a:{NFSU2_TR(0x4d153a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d153b:{NFSU2_TR(0x4d153b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d153c:{NFSU2_TR(0x4d153c);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1541:{NFSU2_TR(0x4d1541);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1545:{NFSU2_TR(0x4d1545);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1547:{NFSU2_TR(0x4d1547);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1548:{NFSU2_TR(0x4d1548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d154dull));
TAIL_STATIC(0x50c960u,50c);
}
B4d154d:L4d154d:{c.instructions+=7;NFSU2_TR(0x4d154d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d1550:{NFSU2_TR(0x4d1550);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1552:{NFSU2_TR(0x4d1552);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1554:{NFSU2_TR(0x4d1554);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d1558:{NFSU2_TR(0x4d1558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1559:{NFSU2_TR(0x4d1559);
__builtin_memmove((R+4),(R+24),4);
}
B4d155b:{NFSU2_TR(0x4d155b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1560ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d1560:L4d1560:{c.instructions+=3;NFSU2_TR(0x4d1560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1563:{NFSU2_TR(0x4d1563);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4d1565:{NFSU2_TR(0x4d1565);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4d157d;}}
}
B4d1567:L4d1567:{c.instructions+=5;NFSU2_TR(0x4d1567);
u8 U[4];
w4(U+0,u32(0x795ff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d156c:{NFSU2_TR(0x4d156c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d1570:{NFSU2_TR(0x4d1570);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1572:{NFSU2_TR(0x4d1572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1573:{NFSU2_TR(0x4d1573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1578ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d1578:L4d1578:{c.instructions+=2;NFSU2_TR(0x4d1578);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d157b:{NFSU2_TR(0x4d157b);
{goto L4d1592;}
}
B4d157d:L4d157d:{c.instructions+=6;NFSU2_TR(0x4d157d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d157e:{NFSU2_TR(0x4d157e);
u8 U[4];
w4(U+0,u32(0x795fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1583:{NFSU2_TR(0x4d1583);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1587:{NFSU2_TR(0x4d1587);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1589:{NFSU2_TR(0x4d1589);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d158a:{NFSU2_TR(0x4d158a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d158full));
TAIL_STATIC(0x50c960u,50c);
}
B4d158f:L4d158f:{c.instructions+=1;NFSU2_TR(0x4d158f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d1592:L4d1592:{c.instructions+=6;NFSU2_TR(0x4d1592);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1594:{NFSU2_TR(0x4d1594);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1596:{NFSU2_TR(0x4d1596);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d159a:{NFSU2_TR(0x4d159a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d159b:{NFSU2_TR(0x4d159b);
__builtin_memmove((R+4),(R+24),4);
}
B4d159d:{NFSU2_TR(0x4d159d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15a2ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d15a2:L4d15a2:{c.instructions+=5;NFSU2_TR(0x4d15a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15a4:{NFSU2_TR(0x4d15a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d15aa:{NFSU2_TR(0x4d15aa);
u8 U[4];
w4(U+0,u32(0x795fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15af:{NFSU2_TR(0x4d15af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15b0:{NFSU2_TR(0x4d15b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15b5ull));
TAIL_STATIC(0x7414a0u,741);
}
B4d15b5:L4d15b5:{c.instructions+=3;NFSU2_TR(0x4d15b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d15b8:{NFSU2_TR(0x4d15b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15b9:{NFSU2_TR(0x4d15b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15beull));
TAIL_STATIC(0x7420b0u,742);
}
B4d15be:L4d15be:{c.instructions+=3;NFSU2_TR(0x4d15be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15c0:{NFSU2_TR(0x4d15c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15c1:{NFSU2_TR(0x4d15c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15c6ull));
TAIL_STATIC(0x516280u,516);
}
B4d15c6:L4d15c6:{c.instructions+=5;NFSU2_TR(0x4d15c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d15c9:{NFSU2_TR(0x4d15c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15cb:{NFSU2_TR(0x4d15cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15cd:{NFSU2_TR(0x4d15cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15ce:{NFSU2_TR(0x4d15ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15d3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d15d3:L4d15d3:{c.instructions+=4;NFSU2_TR(0x4d15d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d15d6:{NFSU2_TR(0x4d15d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15d7:{NFSU2_TR(0x4d15d7);
__builtin_memmove((R+4),(R+24),4);
}
B4d15d9:{NFSU2_TR(0x4d15d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15deull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d15de:L4d15de:{c.instructions+=6;NFSU2_TR(0x4d15de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d15e0:{NFSU2_TR(0x4d15e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d15e3:{NFSU2_TR(0x4d15e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d15e6:{NFSU2_TR(0x4d15e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15e7:{NFSU2_TR(0x4d15e7);
__builtin_memmove((R+4),(R+28),4);
}
B4d15e9:{NFSU2_TR(0x4d15e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15eeull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d15ee:L4d15ee:{c.instructions+=3;NFSU2_TR(0x4d15ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d15ef:{NFSU2_TR(0x4d15ef);
__builtin_memmove((R+4),(R+28),4);
}
B4d15f1:{NFSU2_TR(0x4d15f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d15f6ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d15f6:L4d15f6:{c.instructions+=6;NFSU2_TR(0x4d15f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d15fa:{NFSU2_TR(0x4d15fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d15fe:{NFSU2_TR(0x4d15fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d15ff:{NFSU2_TR(0x4d15ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d1601:{NFSU2_TR(0x4d1601);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1605:{NFSU2_TR(0x4d1605);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1420u);}goto L4d1420;}}
}
B4d160b:L4d160b:{c.instructions+=1;NFSU2_TR(0x4d160b);
__builtin_memmove((R+28),(R+4),4);
}
B4d160d:L4d160d:{c.instructions+=2;NFSU2_TR(0x4d160d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d1610:{NFSU2_TR(0x4d1610);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4d176a;}}
}
B4d1616:L4d1616:{c.instructions+=4;NFSU2_TR(0x4d1616);
w4(R+0,u32(0xfull));
}
B4d161b:{NFSU2_TR(0x4d161b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B4d161d:{NFSU2_TR(0x4d161d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d1620:{NFSU2_TR(0x4d1620);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1624:L4d1624:{c.instructions+=2;NFSU2_TR(0x4d1624);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1626:{NFSU2_TR(0x4d1626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d162bull));
TAIL_STATIC(0x575620u,575);
}
B4d162b:L4d162b:{c.instructions+=3;NFSU2_TR(0x4d162b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d162e:{NFSU2_TR(0x4d162e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1630:{NFSU2_TR(0x4d1630);
if(r1(R+518)){{goto L4d164f;}}
}
B4d1632:L4d1632:{c.instructions+=8;NFSU2_TR(0x4d1632);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1635:{NFSU2_TR(0x4d1635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d1637:{NFSU2_TR(0x4d1637);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d163a:{NFSU2_TR(0x4d163a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d163e:{NFSU2_TR(0x4d163e);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d1644:{NFSU2_TR(0x4d1644);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d164b:{NFSU2_TR(0x4d164b);
__builtin_memmove((R+24),(R+0),4);
}
B4d164d:{NFSU2_TR(0x4d164d);
{goto L4d1651;}
}
B4d164f:L4d164f:{c.instructions+=1;NFSU2_TR(0x4d164f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d1651:L4d1651:{c.instructions+=5;NFSU2_TR(0x4d1651);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1653:{NFSU2_TR(0x4d1653);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1655:{NFSU2_TR(0x4d1655);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d165a:{NFSU2_TR(0x4d165a);
__builtin_memmove((R+4),(R+24),4);
}
B4d165c:{NFSU2_TR(0x4d165c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1661ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d1661:L4d1661:{c.instructions+=5;NFSU2_TR(0x4d1661);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1663:{NFSU2_TR(0x4d1663);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1665:{NFSU2_TR(0x4d1665);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d166a:{NFSU2_TR(0x4d166a);
__builtin_memmove((R+4),(R+24),4);
}
B4d166c:{NFSU2_TR(0x4d166c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1671ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d1671:L4d1671:{c.instructions+=5;NFSU2_TR(0x4d1671);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1673:{NFSU2_TR(0x4d1673);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1675:{NFSU2_TR(0x4d1675);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d167a:{NFSU2_TR(0x4d167a);
__builtin_memmove((R+4),(R+24),4);
}
B4d167c:{NFSU2_TR(0x4d167c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1681ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d1681:L4d1681:{c.instructions+=5;NFSU2_TR(0x4d1681);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1683:{NFSU2_TR(0x4d1683);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1685:{NFSU2_TR(0x4d1685);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d168a:{NFSU2_TR(0x4d168a);
__builtin_memmove((R+4),(R+24),4);
}
B4d168c:{NFSU2_TR(0x4d168c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1691ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d1691:L4d1691:{c.instructions+=5;NFSU2_TR(0x4d1691);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1693:{NFSU2_TR(0x4d1693);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1695:{NFSU2_TR(0x4d1695);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d169a:{NFSU2_TR(0x4d169a);
__builtin_memmove((R+4),(R+24),4);
}
B4d169c:{NFSU2_TR(0x4d169c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d16a1ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d16a1:L4d16a1:{c.instructions+=6;NFSU2_TR(0x4d16a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16a2:{NFSU2_TR(0x4d16a2);
u8 U[4];
w4(U+0,u32(0x794cb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16a7:{NFSU2_TR(0x4d16a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d16ae:{NFSU2_TR(0x4d16ae);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16b0:{NFSU2_TR(0x4d16b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16b1:{NFSU2_TR(0x4d16b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d16b6ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d16b6:L4d16b6:{c.instructions+=4;NFSU2_TR(0x4d16b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d16b9:{NFSU2_TR(0x4d16b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d16c0:{NFSU2_TR(0x4d16c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16c1:{NFSU2_TR(0x4d16c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d16c6ull));
TAIL_STATIC(0x505450u,505);
}
B4d16c6:L4d16c6:{c.instructions+=3;NFSU2_TR(0x4d16c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16c7:{NFSU2_TR(0x4d16c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16c8:{NFSU2_TR(0x4d16c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d16cdull));
TAIL_STATIC(0x5379c0u,537);
}
B4d16cd:L4d16cd:{c.instructions+=7;NFSU2_TR(0x4d16cd);
__builtin_memmove((R+28),(R+0),4);
}
B4d16cf:{NFSU2_TR(0x4d16cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d16d2:{NFSU2_TR(0x4d16d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d16d5:{NFSU2_TR(0x4d16d5);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16da:{NFSU2_TR(0x4d16da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16db:{NFSU2_TR(0x4d16db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16dc:{NFSU2_TR(0x4d16dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d16e1ull));
TAIL_STATIC(0x537cc0u,537);
}
B4d16e1:L4d16e1:{c.instructions+=3;NFSU2_TR(0x4d16e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4d16e4:{NFSU2_TR(0x4d16e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d16e6:{NFSU2_TR(0x4d16e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d16ff;}}
}
B4d16e8:L4d16e8:{c.instructions+=7;NFSU2_TR(0x4d16e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d16eb:{NFSU2_TR(0x4d16eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d16ee:{NFSU2_TR(0x4d16ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16f0:{NFSU2_TR(0x4d16f0);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16f5:{NFSU2_TR(0x4d16f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16f6:{NFSU2_TR(0x4d16f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d16f7:{NFSU2_TR(0x4d16f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d16fcull));
TAIL_STATIC(0x537c00u,537);
}
B4d16fc:L4d16fc:{c.instructions+=1;NFSU2_TR(0x4d16fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d16ff:L4d16ff:{c.instructions+=4;NFSU2_TR(0x4d16ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1704:{NFSU2_TR(0x4d1704);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d1706:{NFSU2_TR(0x4d1706);
w4(R+4,u32(0x7ull));
}
B4d170b:{NFSU2_TR(0x4d170b);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d170f:L4d170f:{c.instructions+=1;NFSU2_TR(0x4d170f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d1711;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d170fu);}goto L4d170f;}
}
B4d1711:L4d1711:{c.instructions+=8;NFSU2_TR(0x4d1711);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1712:{NFSU2_TR(0x4d1712);
u8 U[4];
w4(U+0,u32(0x78fe80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1717:{NFSU2_TR(0x4d1717);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d1719:{NFSU2_TR(0x4d1719);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d171d:{NFSU2_TR(0x4d171d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d171f:{NFSU2_TR(0x4d171f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1720:{NFSU2_TR(0x4d1720);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4d1721:{NFSU2_TR(0x4d1721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1726ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d1726:L4d1726:{c.instructions+=4;NFSU2_TR(0x4d1726);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d1729:{NFSU2_TR(0x4d1729);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d172d:{NFSU2_TR(0x4d172d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d172e:{NFSU2_TR(0x4d172e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1733ull));
TAIL_STATIC(0x505450u,505);
}
B4d1733:L4d1733:{c.instructions+=3;NFSU2_TR(0x4d1733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1734:{NFSU2_TR(0x4d1734);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1735:{NFSU2_TR(0x4d1735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d173aull));
TAIL_STATIC(0x5379c0u,537);
}
B4d173a:L4d173a:{c.instructions+=2;NFSU2_TR(0x4d173a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d173b:{NFSU2_TR(0x4d173b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1740ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d1740:L4d1740:{c.instructions+=5;NFSU2_TR(0x4d1740);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d1743:{NFSU2_TR(0x4d1743);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1746:{NFSU2_TR(0x4d1746);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1747:{NFSU2_TR(0x4d1747);
__builtin_memmove((R+4),(R+28),4);
}
B4d1749:{NFSU2_TR(0x4d1749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d174eull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d174e:L4d174e:{c.instructions+=3;NFSU2_TR(0x4d174e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d174f:{NFSU2_TR(0x4d174f);
__builtin_memmove((R+4),(R+28),4);
}
B4d1751:{NFSU2_TR(0x4d1751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1756ull));
TAIL_STATIC(0x5434d0u,543);
}
B4d1756:L4d1756:{c.instructions+=5;NFSU2_TR(0x4d1756);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d175a:{NFSU2_TR(0x4d175a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4d175b:{NFSU2_TR(0x4d175b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d175c:{NFSU2_TR(0x4d175c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1760:{NFSU2_TR(0x4d1760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1624u);}goto L4d1624;}}
}
B4d1766:L4d1766:{c.instructions+=1;NFSU2_TR(0x4d1766);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d176a:L4d176a:{c.instructions+=4;NFSU2_TR(0x4d176a);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d176e:{NFSU2_TR(0x4d176e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d1770:{NFSU2_TR(0x4d1770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d1771:{NFSU2_TR(0x4d1771);
if(r1(R+518)){{goto L4d17b7;}}
}
B4d1773:L4d1773:{c.instructions+=5;NFSU2_TR(0x4d1773);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d1777:{NFSU2_TR(0x4d1777);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d177a:{NFSU2_TR(0x4d177a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d177b:{NFSU2_TR(0x4d177b);
__builtin_memmove((R+4),(R+24),4);
}
B4d177d:{NFSU2_TR(0x4d177d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1782ull));
TAIL_STATIC(0x51f350u,51f);
}
B4d1782:L4d1782:{c.instructions+=2;NFSU2_TR(0x4d1782);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1784:{NFSU2_TR(0x4d1784);
if(r1(R+518)){{goto L4d17b7;}}
}
B4d1786:L4d1786:{c.instructions+=4;NFSU2_TR(0x4d1786);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d178a:{NFSU2_TR(0x4d178a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d178b:{NFSU2_TR(0x4d178b);
__builtin_memmove((R+4),(R+24),4);
}
B4d178d:{NFSU2_TR(0x4d178d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1792ull));
TAIL_STATIC(0x51f350u,51f);
}
B4d1792:L4d1792:{c.instructions+=3;NFSU2_TR(0x4d1792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1793:{NFSU2_TR(0x4d1793);
__builtin_memmove((R+4),(R+24),4);
}
B4d1795:{NFSU2_TR(0x4d1795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d179aull));
TAIL_STATIC(0x51f440u,51f);
}
B4d179a:L4d179a:{c.instructions+=4;NFSU2_TR(0x4d179a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4d179b:{NFSU2_TR(0x4d179b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d179c:{NFSU2_TR(0x4d179c);
__builtin_memmove((R+4),(R+24),4);
}
B4d179e:{NFSU2_TR(0x4d179e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d17a3ull));
TAIL_STATIC(0x54edd0u,54e);
}
B4d17a3:L4d17a3:{c.instructions+=3;NFSU2_TR(0x4d17a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d17a6:{NFSU2_TR(0x4d17a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d17a8:{NFSU2_TR(0x4d17a8);
if(r1(R+518)){{goto L4d17dc;}}
}
B4d17aa:L4d17aa:{c.instructions+=5;NFSU2_TR(0x4d17aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d17ad:{NFSU2_TR(0x4d17ad);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d17b2:{NFSU2_TR(0x4d17b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d17b3:{NFSU2_TR(0x4d17b3);
__builtin_memmove((R+4),(R+24),4);
}
B4d17b5:{NFSU2_TR(0x4d17b5);
{goto L4d17d7;}
}
B4d17b7:L4d17b7:{c.instructions+=2;NFSU2_TR(0x4d17b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d17b9:{NFSU2_TR(0x4d17b9);
if(r1(R+518)){{goto L4d17dc;}}
}
B4d17bb:L4d17bb:{c.instructions+=4;NFSU2_TR(0x4d17bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d17be:{NFSU2_TR(0x4d17be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d17c0:{NFSU2_TR(0x4d17c0);
__builtin_memmove((R+4),(R+24),4);
}
B4d17c2:{NFSU2_TR(0x4d17c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d17c7ull));
TAIL_STATIC(0x54edd0u,54e);
}
B4d17c7:L4d17c7:{c.instructions+=3;NFSU2_TR(0x4d17c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d17ca:{NFSU2_TR(0x4d17ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d17cc:{NFSU2_TR(0x4d17cc);
if(r1(R+518)){{goto L4d17dc;}}
}
B4d17ce:L4d17ce:{c.instructions+=3;NFSU2_TR(0x4d17ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d17d1:{NFSU2_TR(0x4d17d1);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d17d6:{NFSU2_TR(0x4d17d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d17d7:L4d17d7:{c.instructions+=1;NFSU2_TR(0x4d17d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d17dcull));
TAIL_STATIC(0x51ee80u,51e);
}
B4d17dc:L4d17dc:{c.instructions+=2;NFSU2_TR(0x4d17dc);
__builtin_memmove((R+4),(R+12),4);
}
B4d17de:{NFSU2_TR(0x4d17de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d17e3ull));
TAIL_STATIC(0x4bafd0u,4ba);
}
B4d17e3:L4d17e3:{c.instructions+=5;NFSU2_TR(0x4d17e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d17e4:{NFSU2_TR(0x4d17e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d17e5:{NFSU2_TR(0x4d17e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d17e6:{NFSU2_TR(0x4d17e6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x90ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d17ec:{NFSU2_TR(0x4d17ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d17f0:L4d17f0:{c.instructions+=2;NFSU2_TR(0x4d17f0);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B4d17f5:{NFSU2_TR(0x4d17f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1802;}}
}
B4d17f7:L4d17f7:{c.instructions+=3;NFSU2_TR(0x4d17f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d17fb:{NFSU2_TR(0x4d17fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d17fd:{NFSU2_TR(0x4d17fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1802ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1380u);}goto L4d1380;}
}
B4d1802:L4d1802:{c.instructions+=1;NFSU2_TR(0x4d1802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1810:L4d1810:{c.instructions+=13;NFSU2_TR(0x4d1810);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1812:{NFSU2_TR(0x4d1812);
u8 U[4];
w4(U+0,u32(0x7747ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1817:{NFSU2_TR(0x4d1817);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d181d:{NFSU2_TR(0x4d181d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d181e:{NFSU2_TR(0x4d181e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1825:{NFSU2_TR(0x4d1825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1826:{NFSU2_TR(0x4d1826);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d182a:{NFSU2_TR(0x4d182a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d182b:{NFSU2_TR(0x4d182b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d182c:{NFSU2_TR(0x4d182c);
__builtin_memmove((R+24),(R+4),4);
}
B4d182e:{NFSU2_TR(0x4d182e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d182f:{NFSU2_TR(0x4d182f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1833:{NFSU2_TR(0x4d1833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1838ull));
TAIL_STATIC(0x552780u,552);
}
B4d1838:L4d1838:{c.instructions+=6;NFSU2_TR(0x4d1838);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d183b:{NFSU2_TR(0x4d183b);
w4(R+4,u32(0x850080ull));
}
B4d1840:{NFSU2_TR(0x4d1840);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1848:{NFSU2_TR(0x4d1848);
u8 U[4];
w4(U+0,u32(0x796014ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d184e:{NFSU2_TR(0x4d184e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1855:{NFSU2_TR(0x4d1855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d185aull));
TAIL_STATIC(0x5031d0u,503);
}
B4d185a:L4d185a:{c.instructions+=3;NFSU2_TR(0x4d185a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d185b:{NFSU2_TR(0x4d185b);
u8 U[4];
w4(U+0,u32(0xb34ab032ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1860:{NFSU2_TR(0x4d1860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1865ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d1865:L4d1865:{c.instructions+=5;NFSU2_TR(0x4d1865);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1868:{NFSU2_TR(0x4d1868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1869:{NFSU2_TR(0x4d1869);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d186e:{NFSU2_TR(0x4d186e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d186f:{NFSU2_TR(0x4d186f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1874ull));
TAIL_STATIC(0x542600u,542);
}
B4d1874:L4d1874:{c.instructions+=2;NFSU2_TR(0x4d1874);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1879:{NFSU2_TR(0x4d1879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d187eull));
TAIL_STATIC(0x575620u,575);
}
B4d187e:L4d187e:{c.instructions+=6;NFSU2_TR(0x4d187e);
__builtin_memmove((R+28),(R+0),4);
}
B4d1880:{NFSU2_TR(0x4d1880);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d1883:{NFSU2_TR(0x4d1883);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1887:{NFSU2_TR(0x4d1887);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1889:{NFSU2_TR(0x4d1889);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d188e:{NFSU2_TR(0x4d188e);
if(r1(R+518)){{goto L4d18c6;}}
}
B4d1890:L4d1890:{c.instructions+=14;NFSU2_TR(0x4d1890);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1892:{NFSU2_TR(0x4d1892);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1894:{NFSU2_TR(0x4d1894);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1899:{NFSU2_TR(0x4d1899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d189f:{NFSU2_TR(0x4d189f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18a0:{NFSU2_TR(0x4d18a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d18a6:{NFSU2_TR(0x4d18a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18a7:{NFSU2_TR(0x4d18a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d18ad:{NFSU2_TR(0x4d18ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18ae:{NFSU2_TR(0x4d18ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d18b4:{NFSU2_TR(0x4d18b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18b5:{NFSU2_TR(0x4d18b5);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18b7:{NFSU2_TR(0x4d18b7);
__builtin_memmove((R+4),(R+28),4);
}
B4d18b9:{NFSU2_TR(0x4d18b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d18beull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4d18be:L4d18be:{c.instructions+=2;NFSU2_TR(0x4d18be);
u8 U[4];
w4(U+0,u32(0x794cd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d18c4:{NFSU2_TR(0x4d18c4);
{goto L4d18c8;}
}
B4d18c6:L4d18c6:{c.instructions+=1;NFSU2_TR(0x4d18c6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d18c8:L4d18c8:{c.instructions+=4;NFSU2_TR(0x4d18c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18c9:{NFSU2_TR(0x4d18c9);
__builtin_memmove((R+4),(R+24),4);
}
B4d18cb:{NFSU2_TR(0x4d18cb);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d18d0:{NFSU2_TR(0x4d18d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d18d5ull));
TAIL_STATIC(0x54f820u,54f);
}
B4d18d5:L4d18d5:{c.instructions+=4;NFSU2_TR(0x4d18d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18d6:{NFSU2_TR(0x4d18d6);
__builtin_memmove((R+4),(R+24),4);
}
B4d18d8:{NFSU2_TR(0x4d18d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d18de:{NFSU2_TR(0x4d18de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d18e3ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4d18e3:L4d18e3:{c.instructions+=3;NFSU2_TR(0x4d18e3);
u8 U[4];
w4(U+0,u32(0x332c0b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18e8:{NFSU2_TR(0x4d18e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d18ee:{NFSU2_TR(0x4d18ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d18f3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d18f3:L4d18f3:{c.instructions+=4;NFSU2_TR(0x4d18f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d18f9:{NFSU2_TR(0x4d18f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d18fc:{NFSU2_TR(0x4d18fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d18fd:{NFSU2_TR(0x4d18fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1902ull));
TAIL_STATIC(0x50d7e0u,50d);
}
B4d1902:L4d1902:{c.instructions+=4;NFSU2_TR(0x4d1902);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d1908:{NFSU2_TR(0x4d1908);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1909:{NFSU2_TR(0x4d1909);
__builtin_memmove((R+4),(R+24),4);
}
B4d190b:{NFSU2_TR(0x4d190b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1910ull));
TAIL_STATIC(0x539650u,539);
}
B4d1910:L4d1910:{c.instructions+=7;NFSU2_TR(0x4d1910);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1914:{NFSU2_TR(0x4d1914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1915:{NFSU2_TR(0x4d1915);
__builtin_memmove((R+0),(R+24),4);
}
B4d1917:{NFSU2_TR(0x4d1917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1918:{NFSU2_TR(0x4d1918);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d191f:{NFSU2_TR(0x4d191f);
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
B4d1922:{NFSU2_TR(0x4d1922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1930:L4d1930:{c.instructions+=3;NFSU2_TR(0x4d1930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1931:{NFSU2_TR(0x4d1931);
__builtin_memmove((R+24),(R+4),4);
}
B4d1933:{NFSU2_TR(0x4d1933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1938ull));
{goto L4d1950;}
}
B4d1938:L4d1938:{c.instructions+=2;NFSU2_TR(0x4d1938);
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
B4d193d:{NFSU2_TR(0x4d193d);
if(r1(R+518)){{goto L4d1948;}}
}
B4d193f:L4d193f:{c.instructions+=2;NFSU2_TR(0x4d193f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1940:{NFSU2_TR(0x4d1940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1945ull));
TAIL_STATIC(0x575630u,575);
}
B4d1945:L4d1945:{c.instructions+=1;NFSU2_TR(0x4d1945);
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
B4d1948:L4d1948:{c.instructions+=3;NFSU2_TR(0x4d1948);
__builtin_memmove((R+0),(R+24),4);
}
B4d194a:{NFSU2_TR(0x4d194a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d194b:{NFSU2_TR(0x4d194b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1950:L4d1950:{c.instructions+=2;NFSU2_TR(0x4d1950);
u8 U[4];
w4(U+0,u32(0x796014ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4d1956:{NFSU2_TR(0x4d1956);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4d1960:L4d1960:{c.instructions+=19;NFSU2_TR(0x4d1960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1962:{NFSU2_TR(0x4d1962);
u8 U[4];
w4(U+0,u32(0x7747e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1967:{NFSU2_TR(0x4d1967);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d196d:{NFSU2_TR(0x4d196d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d196e:{NFSU2_TR(0x4d196e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1975:{NFSU2_TR(0x4d1975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1976:{NFSU2_TR(0x4d1976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1977:{NFSU2_TR(0x4d1977);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1978:{NFSU2_TR(0x4d1978);
__builtin_memmove((R+24),(R+4),4);
}
B4d197a:{NFSU2_TR(0x4d197a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d197d:{NFSU2_TR(0x4d197d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d197f:{NFSU2_TR(0x4d197f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1982:{NFSU2_TR(0x4d1982);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1986:{NFSU2_TR(0x4d1986);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d198a:{NFSU2_TR(0x4d198a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d198c:{NFSU2_TR(0x4d198c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d198f:{NFSU2_TR(0x4d198f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1993:{NFSU2_TR(0x4d1993);
u8 U[4];
w4(U+0,u32(0x796028ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d1999:{NFSU2_TR(0x4d1999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d199eull));
TAIL_STATIC(0x40c910u,40c);
}
B4d199e:L4d199e:{c.instructions+=16;NFSU2_TR(0x4d199e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x917ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d19a4:{NFSU2_TR(0x4d19a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d19aa:{NFSU2_TR(0x4d19aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d19b0:{NFSU2_TR(0x4d19b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d19ba:{NFSU2_TR(0x4d19ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d19bc:{NFSU2_TR(0x4d19bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d19c2:{NFSU2_TR(0x4d19c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d19c4:{NFSU2_TR(0x4d19c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4d19c8:{NFSU2_TR(0x4d19c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d19cb:{NFSU2_TR(0x4d19cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d19cf:{NFSU2_TR(0x4d19cf);
__builtin_memmove((R+0),(R+24),4);
}
B4d19d1:{NFSU2_TR(0x4d19d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d19d2:{NFSU2_TR(0x4d19d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d19d3:{NFSU2_TR(0x4d19d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d19da:{NFSU2_TR(0x4d19da);
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
B4d19dd:{NFSU2_TR(0x4d19dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d19e0:L4d19e0:{c.instructions+=3;NFSU2_TR(0x4d19e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d19e1:{NFSU2_TR(0x4d19e1);
__builtin_memmove((R+24),(R+4),4);
}
B4d19e3:{NFSU2_TR(0x4d19e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d19e8ull));
{goto L4d1a00;}
}
B4d19e8:L4d19e8:{c.instructions+=2;NFSU2_TR(0x4d19e8);
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
B4d19ed:{NFSU2_TR(0x4d19ed);
if(r1(R+518)){{goto L4d19f8;}}
}
B4d19ef:L4d19ef:{c.instructions+=2;NFSU2_TR(0x4d19ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d19f0:{NFSU2_TR(0x4d19f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d19f5ull));
TAIL_STATIC(0x575630u,575);
}
B4d19f5:L4d19f5:{c.instructions+=1;NFSU2_TR(0x4d19f5);
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
B4d19f8:L4d19f8:{c.instructions+=3;NFSU2_TR(0x4d19f8);
__builtin_memmove((R+0),(R+24),4);
}
B4d19fa:{NFSU2_TR(0x4d19fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d19fb:{NFSU2_TR(0x4d19fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1a00:L4d1a00:{c.instructions+=13;NFSU2_TR(0x4d1a00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a02:{NFSU2_TR(0x4d1a02);
u8 U[4];
w4(U+0,u32(0x7747e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a07:{NFSU2_TR(0x4d1a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1a0d:{NFSU2_TR(0x4d1a0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a0e:{NFSU2_TR(0x4d1a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a15:{NFSU2_TR(0x4d1a15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a16:{NFSU2_TR(0x4d1a16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a17:{NFSU2_TR(0x4d1a17);
__builtin_memmove((R+24),(R+4),4);
}
B4d1a19:{NFSU2_TR(0x4d1a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a1d:{NFSU2_TR(0x4d1a1d);
u8 U[4];
w4(U+0,u32(0x796028ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d1a23:{NFSU2_TR(0x4d1a23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1a29:{NFSU2_TR(0x4d1a29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a31:{NFSU2_TR(0x4d1a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1a36ull));
TAIL_STATIC(0x4022c0u,402);
}
B4d1a36:L4d1a36:{c.instructions+=4;NFSU2_TR(0x4d1a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1a39:{NFSU2_TR(0x4d1a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a41:{NFSU2_TR(0x4d1a41);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d1a47:{NFSU2_TR(0x4d1a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1a4cull));
TAIL_STATIC(0x4358e0u,435);
}
B4d1a4c:L4d1a4c:{c.instructions+=5;NFSU2_TR(0x4d1a4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1a50:{NFSU2_TR(0x4d1a50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1a51:{NFSU2_TR(0x4d1a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a58:{NFSU2_TR(0x4d1a58);
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
B4d1a5b:{NFSU2_TR(0x4d1a5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1a60:L4d1a60:{c.instructions+=14;NFSU2_TR(0x4d1a60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a62:{NFSU2_TR(0x4d1a62);
u8 U[4];
w4(U+0,u32(0x77481eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a67:{NFSU2_TR(0x4d1a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1a6d:{NFSU2_TR(0x4d1a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a6e:{NFSU2_TR(0x4d1a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a75:{NFSU2_TR(0x4d1a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4d1a78:{NFSU2_TR(0x4d1a78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a79:{NFSU2_TR(0x4d1a79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a7a:{NFSU2_TR(0x4d1a7a);
__builtin_memmove((R+20),(R+4),4);
}
B4d1a7c:{NFSU2_TR(0x4d1a7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a7d:{NFSU2_TR(0x4d1a7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a81:{NFSU2_TR(0x4d1a81);
u8 U[4];
w4(U+0,u32(0x79602cull));
s4(u32(r4(R+20)),r4(U+0));
}
B4d1a88:{NFSU2_TR(0x4d1a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1a90:{NFSU2_TR(0x4d1a90);
w4(R+24,u32(0x8358f4ull));
}
B4d1a95:L4d1a95:{c.instructions+=3;NFSU2_TR(0x4d1a95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d1a97:{NFSU2_TR(0x4d1a97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1a98:{NFSU2_TR(0x4d1a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1a9dull));
TAIL_STATIC(0x575630u,575);
}
B4d1a9d:L4d1a9d:{c.instructions+=4;NFSU2_TR(0x4d1a9d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4d1aa0:{NFSU2_TR(0x4d1aa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1aa3:{NFSU2_TR(0x4d1aa3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x83590cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x83590cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d1aa9:{NFSU2_TR(0x4d1aa9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1a95u);}goto L4d1a95;}}
}
B4d1aab:L4d1aab:{c.instructions+=4;NFSU2_TR(0x4d1aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1ab1:{NFSU2_TR(0x4d1ab1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d1ab3:{NFSU2_TR(0x4d1ab3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1ab5:{NFSU2_TR(0x4d1ab5);
if(r1(R+518)){{goto L4d1ac6;}}
}
B4d1ab7:L4d1ab7:{c.instructions+=2;NFSU2_TR(0x4d1ab7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ab8:{NFSU2_TR(0x4d1ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1abdull));
TAIL_STATIC(0x540a60u,540);
}
B4d1abd:L4d1abd:{c.instructions+=2;NFSU2_TR(0x4d1abd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1ac0:{NFSU2_TR(0x4d1ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1ac6:L4d1ac6:{c.instructions+=1;NFSU2_TR(0x4d1ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1acbull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4d1acb:L4d1acb:{c.instructions+=2;NFSU2_TR(0x4d1acb);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
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
B4d1ace:{NFSU2_TR(0x4d1ace);
if(r1(R+518)){{goto L4d1b33;}}
}
B4d1ad0:L4d1ad0:{c.instructions+=4;NFSU2_TR(0x4d1ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1ad6:{NFSU2_TR(0x4d1ad6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ad7:{NFSU2_TR(0x4d1ad7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ad8:{NFSU2_TR(0x4d1ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1addull));
TAIL_STATIC(0x582860u,582);
}
B4d1add:L4d1add:{c.instructions+=4;NFSU2_TR(0x4d1add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1ae3:{NFSU2_TR(0x4d1ae3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ae4:{NFSU2_TR(0x4d1ae4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ae5:{NFSU2_TR(0x4d1ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1aeaull));
TAIL_STATIC(0x58a790u,58a);
}
B4d1aea:L4d1aea:{c.instructions+=1;NFSU2_TR(0x4d1aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1aefull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4d1aef:L4d1aef:{c.instructions+=2;NFSU2_TR(0x4d1aef);
__builtin_memmove((R+4),(R+0),4);
}
B4d1af1:{NFSU2_TR(0x4d1af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1af6ull));
TAIL_STATIC(0x586950u,586);
}
B4d1af6:L4d1af6:{c.instructions+=2;NFSU2_TR(0x4d1af6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1af7:{NFSU2_TR(0x4d1af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1afcull));
TAIL_STATIC(0x58f740u,58f);
}
B4d1afc:L4d1afc:{c.instructions+=3;NFSU2_TR(0x4d1afc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1aff:{NFSU2_TR(0x4d1aff);
__builtin_memmove((R+4),(R+0),4);
}
B4d1b01:{NFSU2_TR(0x4d1b01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1b06ull));
TAIL_STATIC(0x582930u,582);
}
B4d1b06:L4d1b06:{c.instructions+=2;NFSU2_TR(0x4d1b06);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1b08:{NFSU2_TR(0x4d1b08);
if(r1(R+518)){{goto L4d1b33;}}
}
B4d1b0a:L4d1b0a:{c.instructions+=2;NFSU2_TR(0x4d1b0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4d1b14:{NFSU2_TR(0x4d1b14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1b33;}}
}
B4d1b16:L4d1b16:{c.instructions+=2;NFSU2_TR(0x4d1b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1b1c:{NFSU2_TR(0x4d1b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1b21ull));
TAIL_STATIC(0x58d0d0u,58d);
}
B4d1b21:L4d1b21:{c.instructions+=4;NFSU2_TR(0x4d1b21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1b22:{NFSU2_TR(0x4d1b22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1b23:{NFSU2_TR(0x4d1b23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1b24:{NFSU2_TR(0x4d1b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1b29ull));
TAIL_STATIC(0x58f740u,58f);
}
B4d1b29:L4d1b29:{c.instructions+=3;NFSU2_TR(0x4d1b29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1b2c:{NFSU2_TR(0x4d1b2c);
__builtin_memmove((R+4),(R+0),4);
}
B4d1b2e:{NFSU2_TR(0x4d1b2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1b33ull));
TAIL_STATIC(0x58d800u,58d);
}
B4d1b33:L4d1b33:{c.instructions+=11;NFSU2_TR(0x4d1b33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1b34:{NFSU2_TR(0x4d1b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1b37:{NFSU2_TR(0x4d1b37);
__builtin_memmove(gp(0x836384),(R+12),4);
}
B4d1b3d:{NFSU2_TR(0x4d1b3d);
__builtin_memmove(gp(0x8500c4),(R+12),1);
}
B4d1b43:{NFSU2_TR(0x4d1b43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1b47:{NFSU2_TR(0x4d1b47);
u8 U[4];
w4(U+0,u32(0x795cb4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4d1b4d:{NFSU2_TR(0x4d1b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1b50:{NFSU2_TR(0x4d1b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1b53:{NFSU2_TR(0x4d1b53);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1b55:{NFSU2_TR(0x4d1b55);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1b5a:{NFSU2_TR(0x4d1b5a);
if(r1(R+518)){{goto L4d1b7d;}}
}
B4d1b5c:L4d1b5c:{c.instructions+=1;NFSU2_TR(0x4d1b5c);
__builtin_memmove((R+16),(R+16),4);
}
B4d1b60:L4d1b60:{c.instructions+=7;NFSU2_TR(0x4d1b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d1b62:{NFSU2_TR(0x4d1b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d1b65:{NFSU2_TR(0x4d1b65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d1b67:{NFSU2_TR(0x4d1b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1b6a:{NFSU2_TR(0x4d1b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1b6d:{NFSU2_TR(0x4d1b6d);
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
B4d1b6f:{NFSU2_TR(0x4d1b6f);
if(r1(R+518)){{goto L4d1b77;}}
}
B4d1b71:L4d1b71:{c.instructions+=3;NFSU2_TR(0x4d1b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d1b73:{NFSU2_TR(0x4d1b73);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1b75:{NFSU2_TR(0x4d1b75);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1b77ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4d1b77:L4d1b77:{c.instructions+=3;NFSU2_TR(0x4d1b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d1b79:{NFSU2_TR(0x4d1b79);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1b7b:{NFSU2_TR(0x4d1b7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1b60u);}goto L4d1b60;}}
}
B4d1b7d:L4d1b7d:{c.instructions+=6;NFSU2_TR(0x4d1b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1b80:{NFSU2_TR(0x4d1b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1b83:{NFSU2_TR(0x4d1b83);
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
B4d1b85:{NFSU2_TR(0x4d1b85);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4d1b89:{NFSU2_TR(0x4d1b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1b8a:{NFSU2_TR(0x4d1b8a);
if(r1(R+518)){{goto L4d1bad;}}
}
B4d1b8c:L4d1b8c:{c.instructions+=1;NFSU2_TR(0x4d1b8c);
__builtin_memmove((R+16),(R+16),4);
}
B4d1b90:L4d1b90:{c.instructions+=7;NFSU2_TR(0x4d1b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4d1b92:{NFSU2_TR(0x4d1b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d1b95:{NFSU2_TR(0x4d1b95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d1b97:{NFSU2_TR(0x4d1b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1b9a:{NFSU2_TR(0x4d1b9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1b9d:{NFSU2_TR(0x4d1b9d);
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
B4d1b9f:{NFSU2_TR(0x4d1b9f);
if(r1(R+518)){{goto L4d1ba7;}}
}
B4d1ba1:L4d1ba1:{c.instructions+=3;NFSU2_TR(0x4d1ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4d1ba3:{NFSU2_TR(0x4d1ba3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ba5:{NFSU2_TR(0x4d1ba5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1ba7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4d1ba7:L4d1ba7:{c.instructions+=3;NFSU2_TR(0x4d1ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4d1ba9:{NFSU2_TR(0x4d1ba9);
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
B4d1bab:{NFSU2_TR(0x4d1bab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1b90u);}goto L4d1b90;}}
}
B4d1bad:L4d1bad:{c.instructions+=3;NFSU2_TR(0x4d1bad);
__builtin_memmove((R+4),(R+20),4);
}
B4d1baf:{NFSU2_TR(0x4d1baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1bb7:{NFSU2_TR(0x4d1bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1bbcull));
TAIL_STATIC(0x510d40u,510);
}
B4d1bbc:L4d1bbc:{c.instructions+=7;NFSU2_TR(0x4d1bbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1bc0:{NFSU2_TR(0x4d1bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1bc1:{NFSU2_TR(0x4d1bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d1bc2:{NFSU2_TR(0x4d1bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d1bc3:{NFSU2_TR(0x4d1bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1bca:{NFSU2_TR(0x4d1bca);
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
B4d1bcd:{NFSU2_TR(0x4d1bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1bd0:L4d1bd0:{c.instructions+=6;NFSU2_TR(0x4d1bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1bd1:{NFSU2_TR(0x4d1bd1);
__builtin_memmove((R+24),(R+4),4);
}
B4d1bd3:{NFSU2_TR(0x4d1bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1bd6:{NFSU2_TR(0x4d1bd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1bd7:{NFSU2_TR(0x4d1bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1bd8:{NFSU2_TR(0x4d1bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1bddull));
TAIL_STATIC(0x51cd60u,51c);
}
B4d1bdd:L4d1bdd:{c.instructions+=6;NFSU2_TR(0x4d1bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1be0:{NFSU2_TR(0x4d1be0);
__builtin_memmove((R+28),(R+0),4);
}
B4d1be2:{NFSU2_TR(0x4d1be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1be5:{NFSU2_TR(0x4d1be5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1be8:{NFSU2_TR(0x4d1be8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1be9:{NFSU2_TR(0x4d1be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1beeull));
TAIL_STATIC(0x51f440u,51f);
}
B4d1bee:L4d1bee:{c.instructions+=2;NFSU2_TR(0x4d1bee);
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
B4d1bf1:{NFSU2_TR(0x4d1bf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1cd8;}}
}
B4d1bf7:L4d1bf7:{c.instructions+=2;NFSU2_TR(0x4d1bf7);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xba9ba7e3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xba9ba7e3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xba9ba7e3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4d1bfe:{NFSU2_TR(0x4d1bfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1cd8;}}
}
B4d1c04:L4d1c04:{c.instructions+=3;NFSU2_TR(0x4d1c04);
__builtin_memmove((R+0),gp(0x850084),4);
}
B4d1c09:{NFSU2_TR(0x4d1c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1c0b:{NFSU2_TR(0x4d1c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1c5b;}}
}
B4d1c0d:L4d1c0d:{c.instructions+=3;NFSU2_TR(0x4d1c0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d1c13:{NFSU2_TR(0x4d1c13);
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
B4d1c15:{NFSU2_TR(0x4d1c15);
if(r1(R+518)){{goto L4d1cd8;}}
}
B4d1c1b:L4d1c1b:{c.instructions+=3;NFSU2_TR(0x4d1c1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d1c21:{NFSU2_TR(0x4d1c21);
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
B4d1c23:{NFSU2_TR(0x4d1c23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1cd8;}}
}
B4d1c29:L4d1c29:{c.instructions+=3;NFSU2_TR(0x4d1c29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1c2d:{NFSU2_TR(0x4d1c2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1c2e:{NFSU2_TR(0x4d1c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1c33ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4d1c33:L4d1c33:{c.instructions+=5;NFSU2_TR(0x4d1c33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1c36:{NFSU2_TR(0x4d1c36);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4d1c3b:{NFSU2_TR(0x4d1c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1c41:{NFSU2_TR(0x4d1c41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1c43:{NFSU2_TR(0x4d1c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1c48ull));
TAIL_STATIC(0x58ad20u,58a);
}
B4d1c48:L4d1c48:{c.instructions+=3;NFSU2_TR(0x4d1c48);
__builtin_memmove((R+4),(R+24),4);
}
B4d1c4a:{NFSU2_TR(0x4d1c4a);
s1(0x838528,u8(0x0ull));
}
B4d1c51:{NFSU2_TR(0x4d1c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1c56ull));
TAIL_STATIC(0x4bb6e0u,4bb);
}
B4d1c56:L4d1c56:{c.instructions+=3;NFSU2_TR(0x4d1c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1c57:{NFSU2_TR(0x4d1c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1c58:{NFSU2_TR(0x4d1c58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1c5b:L4d1c5b:{c.instructions+=2;NFSU2_TR(0x4d1c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1c61:{NFSU2_TR(0x4d1c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1c66ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4d1c66:L4d1c66:{c.instructions+=2;NFSU2_TR(0x4d1c66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d1c68:{NFSU2_TR(0x4d1c68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1c9a;}}
}
B4d1c6a:L4d1c6a:{c.instructions+=4;NFSU2_TR(0x4d1c6a);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B4d1c6f:{NFSU2_TR(0x4d1c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1c75:{NFSU2_TR(0x4d1c75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1c77:{NFSU2_TR(0x4d1c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1c7cull));
TAIL_STATIC(0x58ad20u,58a);
}
B4d1c7c:L4d1c7c:{c.instructions+=3;NFSU2_TR(0x4d1c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1c80:{NFSU2_TR(0x4d1c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1c81:{NFSU2_TR(0x4d1c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1c86ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4d1c86:L4d1c86:{c.instructions+=6;NFSU2_TR(0x4d1c86);
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
B4d1c89:{NFSU2_TR(0x4d1c89);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4d1c8e:{NFSU2_TR(0x4d1c8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1c8f:{NFSU2_TR(0x4d1c8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1c96:{NFSU2_TR(0x4d1c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1c97:{NFSU2_TR(0x4d1c97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1c9a:L4d1c9a:{c.instructions+=3;NFSU2_TR(0x4d1c9a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1c9c:{NFSU2_TR(0x4d1c9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1c9e:{NFSU2_TR(0x4d1c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1ca3ull));
TAIL_STATIC(0x58f740u,58f);
}
B4d1ca3:L4d1ca3:{c.instructions+=3;NFSU2_TR(0x4d1ca3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1ca6:{NFSU2_TR(0x4d1ca6);
__builtin_memmove((R+4),(R+0),4);
}
B4d1ca8:{NFSU2_TR(0x4d1ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1cadull));
TAIL_STATIC(0x58d940u,58d);
}
B4d1cad:L4d1cad:{c.instructions+=2;NFSU2_TR(0x4d1cad);
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
B4d1caf:{NFSU2_TR(0x4d1caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1cd8;}}
}
B4d1cb1:L4d1cb1:{c.instructions+=6;NFSU2_TR(0x4d1cb1);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1cbb:{NFSU2_TR(0x4d1cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4d1cbe:{NFSU2_TR(0x4d1cbe);
__builtin_memmove(gp(0x838528),(R+8),1);
}
B4d1cc4:{NFSU2_TR(0x4d1cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1cca:{NFSU2_TR(0x4d1cca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ccc:{NFSU2_TR(0x4d1ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1cd1ull));
TAIL_STATIC(0x58ad20u,58a);
}
B4d1cd1:L4d1cd1:{c.instructions+=1;NFSU2_TR(0x4d1cd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1cd8:L4d1cd8:{c.instructions+=3;NFSU2_TR(0x4d1cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1cd9:{NFSU2_TR(0x4d1cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1cda:{NFSU2_TR(0x4d1cda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1ce0:L4d1ce0:{c.instructions+=8;NFSU2_TR(0x4d1ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4d1ce3:{NFSU2_TR(0x4d1ce3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ce4:{NFSU2_TR(0x4d1ce4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ce5:{NFSU2_TR(0x4d1ce5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ce6:{NFSU2_TR(0x4d1ce6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ce7:{NFSU2_TR(0x4d1ce7);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ce9:{NFSU2_TR(0x4d1ce9);
__builtin_memmove((R+28),(R+4),4);
}
B4d1ceb:{NFSU2_TR(0x4d1ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1cf0ull));
TAIL_STATIC(0x575620u,575);
}
B4d1cf0:L4d1cf0:{c.instructions+=4;NFSU2_TR(0x4d1cf0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d1cf2:{NFSU2_TR(0x4d1cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1cf5:{NFSU2_TR(0x4d1cf5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1cf7:{NFSU2_TR(0x4d1cf7);
if(r1(R+518)){{goto L4d1d2c;}}
}
B4d1cf9:L4d1cf9:{c.instructions+=14;NFSU2_TR(0x4d1cf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1cfc:{NFSU2_TR(0x4d1cfc);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d1d02:{NFSU2_TR(0x4d1d02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d1d04:{NFSU2_TR(0x4d1d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d07:{NFSU2_TR(0x4d1d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d0a:{NFSU2_TR(0x4d1d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d0d:{NFSU2_TR(0x4d1d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d10:{NFSU2_TR(0x4d1d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d13:{NFSU2_TR(0x4d1d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d16:{NFSU2_TR(0x4d1d16);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1d1a:{NFSU2_TR(0x4d1d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d21:{NFSU2_TR(0x4d1d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d28:{NFSU2_TR(0x4d1d28);
__builtin_memmove((R+24),(R+0),4);
}
B4d1d2a:{NFSU2_TR(0x4d1d2a);
{goto L4d1d2e;}
}
B4d1d2c:L4d1d2c:{c.instructions+=1;NFSU2_TR(0x4d1d2c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d1d2e:L4d1d2e:{c.instructions+=4;NFSU2_TR(0x4d1d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1d31:{NFSU2_TR(0x4d1d31);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1d36:{NFSU2_TR(0x4d1d36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1d37:{NFSU2_TR(0x4d1d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1d3cull));
TAIL_STATIC(0x537a10u,537);
}
B4d1d3c:L4d1d3c:{c.instructions+=3;NFSU2_TR(0x4d1d3c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1d3e:{NFSU2_TR(0x4d1d3e);
__builtin_memmove((R+20),(R+0),4);
}
B4d1d40:{NFSU2_TR(0x4d1d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1d45ull));
TAIL_STATIC(0x575620u,575);
}
B4d1d45:L4d1d45:{c.instructions+=3;NFSU2_TR(0x4d1d45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d1d48:{NFSU2_TR(0x4d1d48);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1d4a:{NFSU2_TR(0x4d1d4a);
if(r1(R+518)){{goto L4d1d5a;}}
}
B4d1d4c:L4d1d4c:{c.instructions+=4;NFSU2_TR(0x4d1d4c);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d1d52:{NFSU2_TR(0x4d1d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d55:{NFSU2_TR(0x4d1d55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d1d58:{NFSU2_TR(0x4d1d58);
{goto L4d1d5c;}
}
B4d1d5a:L4d1d5a:{c.instructions+=1;NFSU2_TR(0x4d1d5a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d1d5c:L4d1d5c:{c.instructions+=10;NFSU2_TR(0x4d1d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d1d5f:{NFSU2_TR(0x4d1d5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1d62:{NFSU2_TR(0x4d1d62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d1d64:{NFSU2_TR(0x4d1d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d67:{NFSU2_TR(0x4d1d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d6a:{NFSU2_TR(0x4d1d6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d1d6c:{NFSU2_TR(0x4d1d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1d6f:{NFSU2_TR(0x4d1d6f);
u8 U[4];
w4(U+0,u32(0xb1000cc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1d74:{NFSU2_TR(0x4d1d74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1d75:{NFSU2_TR(0x4d1d75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1d7aull));
TAIL_STATIC(0x5379c0u,537);
}
B4d1d7a:L4d1d7a:{c.instructions+=5;NFSU2_TR(0x4d1d7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d1d7d:{NFSU2_TR(0x4d1d7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1d80:{NFSU2_TR(0x4d1d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1d81:{NFSU2_TR(0x4d1d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d84:{NFSU2_TR(0x4d1d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1d89ull));
TAIL_STATIC(0x52e770u,52e);
}
B4d1d89:L4d1d89:{c.instructions+=4;NFSU2_TR(0x4d1d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d8f:{NFSU2_TR(0x4d1d8f);
w4(R+20,u32(0x1ull));
}
B4d1d94:{NFSU2_TR(0x4d1d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1d9c:{NFSU2_TR(0x4d1d9c);
{goto L4d1da0;}
}
B4d1d9e:L4d1d9e:{c.instructions+=1;NFSU2_TR(0x4d1d9e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d1da0:L4d1da0:{c.instructions+=2;NFSU2_TR(0x4d1da0);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1da2:{NFSU2_TR(0x4d1da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1da7ull));
TAIL_STATIC(0x575620u,575);
}
B4d1da7:L4d1da7:{c.instructions+=3;NFSU2_TR(0x4d1da7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1daa:{NFSU2_TR(0x4d1daa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1dac:{NFSU2_TR(0x4d1dac);
if(r1(R+518)){{goto L4d1de1;}}
}
B4d1dae:L4d1dae:{c.instructions+=14;NFSU2_TR(0x4d1dae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1db1:{NFSU2_TR(0x4d1db1);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d1db7:{NFSU2_TR(0x4d1db7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d1db9:{NFSU2_TR(0x4d1db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dbc:{NFSU2_TR(0x4d1dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dbf:{NFSU2_TR(0x4d1dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dc2:{NFSU2_TR(0x4d1dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dc5:{NFSU2_TR(0x4d1dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dc8:{NFSU2_TR(0x4d1dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dcb:{NFSU2_TR(0x4d1dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d1dcf:{NFSU2_TR(0x4d1dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1dd6:{NFSU2_TR(0x4d1dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1ddd:{NFSU2_TR(0x4d1ddd);
__builtin_memmove((R+24),(R+0),4);
}
B4d1ddf:{NFSU2_TR(0x4d1ddf);
{goto L4d1de3;}
}
B4d1de1:L4d1de1:{c.instructions+=1;NFSU2_TR(0x4d1de1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d1de3:L4d1de3:{c.instructions+=6;NFSU2_TR(0x4d1de3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1de4:{NFSU2_TR(0x4d1de4);
u8 U[4];
w4(U+0,u32(0x78fedcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1de9:{NFSU2_TR(0x4d1de9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d1ded:{NFSU2_TR(0x4d1ded);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1def:{NFSU2_TR(0x4d1def);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1df0:{NFSU2_TR(0x4d1df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1df5ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d1df5:L4d1df5:{c.instructions+=5;NFSU2_TR(0x4d1df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1df8:{NFSU2_TR(0x4d1df8);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d1dfc:{NFSU2_TR(0x4d1dfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1dfd:{NFSU2_TR(0x4d1dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e01:{NFSU2_TR(0x4d1e01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e06ull));
TAIL_STATIC(0x505450u,505);
}
B4d1e06:L4d1e06:{c.instructions+=4;NFSU2_TR(0x4d1e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e07:{NFSU2_TR(0x4d1e07);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1e0b:{NFSU2_TR(0x4d1e0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e0c:{NFSU2_TR(0x4d1e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e11ull));
TAIL_STATIC(0x537a10u,537);
}
B4d1e11:L4d1e11:{c.instructions+=3;NFSU2_TR(0x4d1e11);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e13:{NFSU2_TR(0x4d1e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e17:{NFSU2_TR(0x4d1e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e1cull));
TAIL_STATIC(0x575620u,575);
}
B4d1e1c:L4d1e1c:{c.instructions+=3;NFSU2_TR(0x4d1e1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d1e1f:{NFSU2_TR(0x4d1e1f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1e21:{NFSU2_TR(0x4d1e21);
if(r1(R+518)){{goto L4d1e35;}}
}
B4d1e23:L4d1e23:{c.instructions+=5;NFSU2_TR(0x4d1e23);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1e27:{NFSU2_TR(0x4d1e27);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d1e2d:{NFSU2_TR(0x4d1e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e30:{NFSU2_TR(0x4d1e30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d1e33:{NFSU2_TR(0x4d1e33);
{goto L4d1e37;}
}
B4d1e35:L4d1e35:{c.instructions+=1;NFSU2_TR(0x4d1e35);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d1e37:L4d1e37:{c.instructions+=12;NFSU2_TR(0x4d1e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d1e3a:{NFSU2_TR(0x4d1e3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1e3d:{NFSU2_TR(0x4d1e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d1e3f:{NFSU2_TR(0x4d1e3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e40:{NFSU2_TR(0x4d1e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e43:{NFSU2_TR(0x4d1e43);
u8 U[4];
w4(U+0,u32(0x79603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e48:{NFSU2_TR(0x4d1e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e4b:{NFSU2_TR(0x4d1e4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d1e4f:{NFSU2_TR(0x4d1e4f);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e51:{NFSU2_TR(0x4d1e51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e52:{NFSU2_TR(0x4d1e52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d1e54:{NFSU2_TR(0x4d1e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e59ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d1e59:L4d1e59:{c.instructions+=4;NFSU2_TR(0x4d1e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d1e5c:{NFSU2_TR(0x4d1e5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d1e60:{NFSU2_TR(0x4d1e60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e61:{NFSU2_TR(0x4d1e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e66ull));
TAIL_STATIC(0x505450u,505);
}
B4d1e66:L4d1e66:{c.instructions+=3;NFSU2_TR(0x4d1e66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e67:{NFSU2_TR(0x4d1e67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e68:{NFSU2_TR(0x4d1e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e6dull));
TAIL_STATIC(0x5379c0u,537);
}
B4d1e6d:L4d1e6d:{c.instructions+=5;NFSU2_TR(0x4d1e6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d1e70:{NFSU2_TR(0x4d1e70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1e71:{NFSU2_TR(0x4d1e71);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d1e74:{NFSU2_TR(0x4d1e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e77:{NFSU2_TR(0x4d1e77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1e7cull));
TAIL_STATIC(0x52e770u,52e);
}
B4d1e7c:L4d1e7c:{c.instructions+=5;NFSU2_TR(0x4d1e7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1e80:{NFSU2_TR(0x4d1e80);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4d1e81:{NFSU2_TR(0x4d1e81);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d1e82:{NFSU2_TR(0x4d1e82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1e86:{NFSU2_TR(0x4d1e86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1d9eu);}goto L4d1d9e;}}
}
B4d1e8c:L4d1e8c:{c.instructions+=6;NFSU2_TR(0x4d1e8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1e8d:{NFSU2_TR(0x4d1e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d1e8e:{NFSU2_TR(0x4d1e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d1e8f:{NFSU2_TR(0x4d1e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d1e90:{NFSU2_TR(0x4d1e90);
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
B4d1e93:{NFSU2_TR(0x4d1e93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d1ea0:L4d1ea0:{c.instructions+=14;NFSU2_TR(0x4d1ea0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ea2:{NFSU2_TR(0x4d1ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1ea8:{NFSU2_TR(0x4d1ea8);
u8 U[4];
w4(U+0,u32(0x774894ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ead:{NFSU2_TR(0x4d1ead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1eae:{NFSU2_TR(0x4d1eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1eb5:{NFSU2_TR(0x4d1eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B4d1eb8:{NFSU2_TR(0x4d1eb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1eb9:{NFSU2_TR(0x4d1eb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1eba:{NFSU2_TR(0x4d1eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4d1ebe:{NFSU2_TR(0x4d1ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1ec0:{NFSU2_TR(0x4d1ec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ec1:{NFSU2_TR(0x4d1ec1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ec2:{NFSU2_TR(0x4d1ec2);
__builtin_memmove((R+24),(R+4),4);
}
B4d1ec4:{NFSU2_TR(0x4d1ec4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d1ed3;}}
}
B4d1ec6:L4d1ec6:{c.instructions+=2;NFSU2_TR(0x4d1ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1ecc:{NFSU2_TR(0x4d1ecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1ed1ull));
TAIL_STATIC(0x582930u,582);
}
B4d1ed1:L4d1ed1:{c.instructions+=1;NFSU2_TR(0x4d1ed1);
__builtin_memmove((R+20),(R+0),4);
}
B4d1ed3:L4d1ed3:{c.instructions+=3;NFSU2_TR(0x4d1ed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1ed5:{NFSU2_TR(0x4d1ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1ed9:{NFSU2_TR(0x4d1ed9);
if(r1(R+518)){{goto L4d1ee3;}}
}
B4d1edb:L4d1edb:{c.instructions+=2;NFSU2_TR(0x4d1edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1ee1:{NFSU2_TR(0x4d1ee1);
{goto L4d1ee5;}
}
B4d1ee3:L4d1ee3:{c.instructions+=1;NFSU2_TR(0x4d1ee3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d1ee5:L4d1ee5:{c.instructions+=7;NFSU2_TR(0x4d1ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d1ee8:{NFSU2_TR(0x4d1ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1eee:{NFSU2_TR(0x4d1eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11acull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1ef4:{NFSU2_TR(0x4d1ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1ef7:{NFSU2_TR(0x4d1ef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ef8:{NFSU2_TR(0x4d1ef8);
__builtin_memmove((R+4),(R+28),4);
}
B4d1efa:{NFSU2_TR(0x4d1efa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1effull));
TAIL_STATIC(0x51f490u,51f);
}
B4d1eff:L4d1eff:{c.instructions+=4;NFSU2_TR(0x4d1eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d1f02:{NFSU2_TR(0x4d1f02);
w4(R+4,u32(0x850080ull));
}
B4d1f07:{NFSU2_TR(0x4d1f07);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f0b:{NFSU2_TR(0x4d1f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1f10ull));
TAIL_STATIC(0x5031f0u,503);
}
B4d1f10:L4d1f10:{c.instructions+=2;NFSU2_TR(0x4d1f10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1f11:{NFSU2_TR(0x4d1f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1f16ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d1f16:L4d1f16:{c.instructions+=10;NFSU2_TR(0x4d1f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1f1c:{NFSU2_TR(0x4d1f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f20:{NFSU2_TR(0x4d1f20);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d1f22:{NFSU2_TR(0x4d1f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f26:{NFSU2_TR(0x4d1f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f2a:{NFSU2_TR(0x4d1f2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f2e:{NFSU2_TR(0x4d1f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1f31:{NFSU2_TR(0x4d1f31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1f34:{NFSU2_TR(0x4d1f34);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1f36:{NFSU2_TR(0x4d1f36);
if(r1(R+518)){{goto L4d1f4f;}}
}
B4d1f38:L4d1f38:{c.instructions+=2;NFSU2_TR(0x4d1f38);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d1f3a:{NFSU2_TR(0x4d1f3a);
if(r1(R+518)){{goto L4d1f4f;}}
}
B4d1f3c:L4d1f3c:{c.instructions+=3;NFSU2_TR(0x4d1f3c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x918ull))));
}
B4d1f42:{NFSU2_TR(0x4d1f42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1f43:{NFSU2_TR(0x4d1f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1f48ull));
TAIL_STATIC(0x50b990u,50b);
}
B4d1f48:L4d1f48:{c.instructions+=2;NFSU2_TR(0x4d1f48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1f4b:{NFSU2_TR(0x4d1f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f4f:L4d1f4f:{c.instructions+=2;NFSU2_TR(0x4d1f4f);
__builtin_memmove((R+4),(R+28),4);
}
B4d1f51:{NFSU2_TR(0x4d1f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1f56ull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4d1f56:L4d1f56:{c.instructions+=4;NFSU2_TR(0x4d1f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d1f59:{NFSU2_TR(0x4d1f59);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d1f5b:{NFSU2_TR(0x4d1f5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1f5d:{NFSU2_TR(0x4d1f5d);
if(r1(R+518)){{goto L4d1f68;}}
}
B4d1f5f:L4d1f5f:{c.instructions+=3;NFSU2_TR(0x4d1f5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4d1f62:{NFSU2_TR(0x4d1f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f66:{NFSU2_TR(0x4d1f66);
{goto L4d1f6c;}
}
B4d1f68:L4d1f68:{c.instructions+=1;NFSU2_TR(0x4d1f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f6c:L4d1f6c:{c.instructions+=2;NFSU2_TR(0x4d1f6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1f6e:{NFSU2_TR(0x4d1f6e);
if(r1(R+518)){TAIL_STATIC(0x4d207fu,4d2);}
}
B4d1f74:L4d1f74:{c.instructions+=2;NFSU2_TR(0x4d1f74);
u8 U[8];
__builtin_memmove((U+0),gp(0x850084),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1f7a:{NFSU2_TR(0x4d1f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4d207fu,4d2);}
}
B4d1f80:L4d1f80:{c.instructions+=5;NFSU2_TR(0x4d1f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d1f86:{NFSU2_TR(0x4d1f86);
w4(R+8,u32(0x1ull));
}
B4d1f8b:{NFSU2_TR(0x4d1f8b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1f8d:{NFSU2_TR(0x4d1f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1f91:{NFSU2_TR(0x4d1f91);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4d1fb3;}}
}
B4d1f93:L4d1f93:{c.instructions+=3;NFSU2_TR(0x4d1f93);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x260ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d1f99:{NFSU2_TR(0x4d1f99);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4d1f9a:{NFSU2_TR(0x4d1f9a);
__builtin_memmove((R+12),(R+12),4);
}
B4d1fa0:L4d1fa0:{c.instructions+=2;NFSU2_TR(0x4d1fa0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1fa6:{NFSU2_TR(0x4d1fa6);
if(r1(R+518)){{goto L4d1fa9;}}
}
B4d1fa8:L4d1fa8:{c.instructions+=1;NFSU2_TR(0x4d1fa8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4d1fa9:L4d1fa9:{c.instructions+=3;NFSU2_TR(0x4d1fa9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B4d1fac:{NFSU2_TR(0x4d1fac);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4d1fad:{NFSU2_TR(0x4d1fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1fa0u);}goto L4d1fa0;}}
}
B4d1faf:L4d1faf:{c.instructions+=1;NFSU2_TR(0x4d1faf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1fb3:L4d1fb3:{c.instructions+=2;NFSU2_TR(0x4d1fb3);
u8 U[4];
w4(U+0,u32(0x930ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1fb8:{NFSU2_TR(0x4d1fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1fbdull));
TAIL_STATIC(0x575620u,575);
}
B4d1fbd:L4d1fbd:{c.instructions+=5;NFSU2_TR(0x4d1fbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1fc0:{NFSU2_TR(0x4d1fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1fc4:{NFSU2_TR(0x4d1fc4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d1fc6:{NFSU2_TR(0x4d1fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d1fca:{NFSU2_TR(0x4d1fca);
if(r1(R+518)){{goto L4d1fd7;}}
}
B4d1fcc:L4d1fcc:{c.instructions+=2;NFSU2_TR(0x4d1fcc);
__builtin_memmove((R+4),(R+0),4);
}
B4d1fce:{NFSU2_TR(0x4d1fce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1fd3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d1960u);}goto L4d1960;}
}
B4d1fd3:L4d1fd3:{c.instructions+=2;NFSU2_TR(0x4d1fd3);
__builtin_memmove((R+28),(R+0),4);
}
B4d1fd5:{NFSU2_TR(0x4d1fd5);
{goto L4d1fd9;}
}
B4d1fd7:L4d1fd7:{c.instructions+=1;NFSU2_TR(0x4d1fd7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d1fd9:L4d1fd9:{c.instructions+=5;NFSU2_TR(0x4d1fd9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1fdb:{NFSU2_TR(0x4d1fdb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1fdd:{NFSU2_TR(0x4d1fdd);
u8 U[4];
w4(U+0,u32(0x9a9f1336ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1fe2:{NFSU2_TR(0x4d1fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d1fea:{NFSU2_TR(0x4d1fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1fefull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d1fef:L4d1fef:{c.instructions+=4;NFSU2_TR(0x4d1fef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d1ff2:{NFSU2_TR(0x4d1ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d1ff3:{NFSU2_TR(0x4d1ff3);
__builtin_memmove((R+4),(R+28),4);
}
B4d1ff5:{NFSU2_TR(0x4d1ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d1ffaull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d1ffa:L4d1ffa:{c.instructions+=2;NFSU2_TR(0x4d1ffa);
w4(R+4,u32(0x850080ull));
}
B4d1fff:{NFSU2_TR(0x4d1fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d2004ull));
TAIL_STATIC(0x5031f0u,503);
}
XIT:NFSU2_TR_EXIT(0x4d1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
