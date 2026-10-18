#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_6f2(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f1(u8* __restrict R,Cpu& c);
u32 page_6f1(Cpu& c){return body_6f1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f1001:goto L6f1001;
case 0x6f1002:c.instructions+=2;goto B6f1002;
case 0x6f1006:c.instructions+=1;goto B6f1006;
case 0x6f1008:goto L6f1008;
case 0x6f1009:c.instructions+=6;goto B6f1009;
case 0x6f100a:c.instructions+=5;goto B6f100a;
case 0x6f100b:c.instructions+=4;goto B6f100b;
case 0x6f100d:c.instructions+=3;goto B6f100d;
case 0x6f100e:c.instructions+=2;goto B6f100e;
case 0x6f1011:c.instructions+=1;goto B6f1011;
case 0x6f1020:goto L6f1020;
case 0x6f1021:c.instructions+=2;goto B6f1021;
case 0x6f1023:c.instructions+=1;goto B6f1023;
case 0x6f1028:goto L6f1028;
case 0x6f102e:c.instructions+=4;goto B6f102e;
case 0x6f1035:c.instructions+=3;goto B6f1035;
case 0x6f1037:c.instructions+=2;goto B6f1037;
case 0x6f1038:c.instructions+=1;goto B6f1038;
case 0x6f1040:goto L6f1040;
case 0x6f1046:c.instructions+=1;goto B6f1046;
case 0x6f1050:goto L6f1050;
case 0x6f1051:c.instructions+=4;goto B6f1051;
case 0x6f1054:c.instructions+=3;goto B6f1054;
case 0x6f1057:c.instructions+=2;goto B6f1057;
case 0x6f1059:c.instructions+=1;goto B6f1059;
case 0x6f105b:goto L6f105b;
case 0x6f105f:c.instructions+=1;goto B6f105f;
case 0x6f1061:goto L6f1061;
case 0x6f1065:c.instructions+=2;goto B6f1065;
case 0x6f106a:c.instructions+=1;goto B6f106a;
case 0x6f106c:goto L6f106c;
case 0x6f1070:c.instructions+=7;goto B6f1070;
case 0x6f1073:c.instructions+=6;goto B6f1073;
case 0x6f1077:c.instructions+=5;goto B6f1077;
case 0x6f1079:c.instructions+=4;goto B6f1079;
case 0x6f107d:c.instructions+=3;goto B6f107d;
case 0x6f107f:c.instructions+=2;goto B6f107f;
case 0x6f1080:c.instructions+=1;goto B6f1080;
case 0x6f1090:goto L6f1090;
case 0x6f1094:c.instructions+=4;goto B6f1094;
case 0x6f1097:c.instructions+=3;goto B6f1097;
case 0x6f109d:c.instructions+=2;goto B6f109d;
case 0x6f109f:c.instructions+=1;goto B6f109f;
case 0x6f10a1:goto L6f10a1;
case 0x6f10a4:goto L6f10a4;
case 0x6f10a5:c.instructions+=20;goto B6f10a5;
case 0x6f10a6:c.instructions+=19;goto B6f10a6;
case 0x6f10a9:c.instructions+=18;goto B6f10a9;
case 0x6f10ad:c.instructions+=17;goto B6f10ad;
case 0x6f10b0:c.instructions+=16;goto B6f10b0;
case 0x6f10b2:c.instructions+=15;goto B6f10b2;
case 0x6f10b5:c.instructions+=14;goto B6f10b5;
case 0x6f10b9:c.instructions+=13;goto B6f10b9;
case 0x6f10bb:c.instructions+=12;goto B6f10bb;
case 0x6f10c3:c.instructions+=11;goto B6f10c3;
case 0x6f10c4:c.instructions+=10;goto B6f10c4;
case 0x6f10c5:c.instructions+=9;goto B6f10c5;
case 0x6f10c8:c.instructions+=8;goto B6f10c8;
case 0x6f10ca:c.instructions+=7;goto B6f10ca;
case 0x6f10cc:c.instructions+=6;goto B6f10cc;
case 0x6f10d0:c.instructions+=5;goto B6f10d0;
case 0x6f10d4:c.instructions+=4;goto B6f10d4;
case 0x6f10d8:c.instructions+=3;goto B6f10d8;
case 0x6f10dc:c.instructions+=2;goto B6f10dc;
case 0x6f10df:c.instructions+=1;goto B6f10df;
case 0x6f10e1:goto L6f10e1;
case 0x6f10e5:c.instructions+=8;goto B6f10e5;
case 0x6f10e9:c.instructions+=7;goto B6f10e9;
case 0x6f10ee:c.instructions+=6;goto B6f10ee;
case 0x6f10f0:c.instructions+=5;goto B6f10f0;
case 0x6f10f3:c.instructions+=4;goto B6f10f3;
case 0x6f10f7:c.instructions+=3;goto B6f10f7;
case 0x6f10f8:c.instructions+=2;goto B6f10f8;
case 0x6f10fa:c.instructions+=1;goto B6f10fa;
case 0x6f10fc:goto L6f10fc;
case 0x6f1103:c.instructions+=3;goto B6f1103;
case 0x6f1105:c.instructions+=2;goto B6f1105;
case 0x6f110c:c.instructions+=1;goto B6f110c;
case 0x6f1112:goto L6f1112;
case 0x6f1119:c.instructions+=8;goto B6f1119;
case 0x6f111a:c.instructions+=7;goto B6f111a;
case 0x6f111d:c.instructions+=6;goto B6f111d;
case 0x6f1120:c.instructions+=5;goto B6f1120;
case 0x6f1123:c.instructions+=4;goto B6f1123;
case 0x6f1125:c.instructions+=3;goto B6f1125;
case 0x6f1128:c.instructions+=2;goto B6f1128;
case 0x6f112c:c.instructions+=1;goto B6f112c;
case 0x6f1132:goto L6f1132;
case 0x6f1136:c.instructions+=7;goto B6f1136;
case 0x6f1139:c.instructions+=6;goto B6f1139;
case 0x6f113d:c.instructions+=5;goto B6f113d;
case 0x6f1140:c.instructions+=4;goto B6f1140;
case 0x6f1145:c.instructions+=3;goto B6f1145;
case 0x6f1149:c.instructions+=2;goto B6f1149;
case 0x6f114b:c.instructions+=1;goto B6f114b;
case 0x6f114f:goto L6f114f;
case 0x6f1154:c.instructions+=8;goto B6f1154;
case 0x6f1156:c.instructions+=7;goto B6f1156;
case 0x6f1159:c.instructions+=6;goto B6f1159;
case 0x6f115e:c.instructions+=5;goto B6f115e;
case 0x6f1160:c.instructions+=4;goto B6f1160;
case 0x6f1167:c.instructions+=3;goto B6f1167;
case 0x6f116a:c.instructions+=2;goto B6f116a;
case 0x6f116d:c.instructions+=1;goto B6f116d;
case 0x6f1173:goto L6f1173;
case 0x6f1176:c.instructions+=46;goto B6f1176;
case 0x6f117a:c.instructions+=45;goto B6f117a;
case 0x6f117e:c.instructions+=44;goto B6f117e;
case 0x6f1182:c.instructions+=43;goto B6f1182;
case 0x6f1186:c.instructions+=42;goto B6f1186;
case 0x6f118a:c.instructions+=41;goto B6f118a;
case 0x6f118d:c.instructions+=40;goto B6f118d;
case 0x6f1191:c.instructions+=39;goto B6f1191;
case 0x6f1195:c.instructions+=38;goto B6f1195;
case 0x6f1198:c.instructions+=37;goto B6f1198;
case 0x6f119b:c.instructions+=36;goto B6f119b;
case 0x6f119f:c.instructions+=35;goto B6f119f;
case 0x6f11a3:c.instructions+=34;goto B6f11a3;
case 0x6f11a7:c.instructions+=33;goto B6f11a7;
case 0x6f11aa:c.instructions+=32;goto B6f11aa;
case 0x6f11ad:c.instructions+=31;goto B6f11ad;
case 0x6f11b1:c.instructions+=30;goto B6f11b1;
case 0x6f11b4:c.instructions+=29;goto B6f11b4;
case 0x6f11b8:c.instructions+=28;goto B6f11b8;
case 0x6f11bc:c.instructions+=27;goto B6f11bc;
case 0x6f11c0:c.instructions+=26;goto B6f11c0;
case 0x6f11c3:c.instructions+=25;goto B6f11c3;
case 0x6f11c7:c.instructions+=24;goto B6f11c7;
case 0x6f11cb:c.instructions+=23;goto B6f11cb;
case 0x6f11cf:c.instructions+=22;goto B6f11cf;
case 0x6f11d3:c.instructions+=21;goto B6f11d3;
case 0x6f11d6:c.instructions+=20;goto B6f11d6;
case 0x6f11da:c.instructions+=19;goto B6f11da;
case 0x6f11de:c.instructions+=18;goto B6f11de;
case 0x6f11e1:c.instructions+=17;goto B6f11e1;
case 0x6f11e5:c.instructions+=16;goto B6f11e5;
case 0x6f11e7:c.instructions+=15;goto B6f11e7;
case 0x6f11ee:c.instructions+=14;goto B6f11ee;
case 0x6f11f0:c.instructions+=13;goto B6f11f0;
case 0x6f11f3:c.instructions+=12;goto B6f11f3;
case 0x6f11f7:c.instructions+=11;goto B6f11f7;
case 0x6f11f9:c.instructions+=10;goto B6f11f9;
case 0x6f1200:c.instructions+=9;goto B6f1200;
case 0x6f1202:c.instructions+=8;goto B6f1202;
case 0x6f1206:c.instructions+=7;goto B6f1206;
case 0x6f1208:c.instructions+=6;goto B6f1208;
case 0x6f120a:c.instructions+=5;goto B6f120a;
case 0x6f120e:c.instructions+=4;goto B6f120e;
case 0x6f1212:c.instructions+=3;goto B6f1212;
case 0x6f1219:c.instructions+=2;goto B6f1219;
case 0x6f121d:c.instructions+=1;goto B6f121d;
case 0x6f1221:goto L6f1221;
case 0x6f1225:c.instructions+=9;goto B6f1225;
case 0x6f122a:c.instructions+=8;goto B6f122a;
case 0x6f122c:c.instructions+=7;goto B6f122c;
case 0x6f122f:c.instructions+=6;goto B6f122f;
case 0x6f1234:c.instructions+=5;goto B6f1234;
case 0x6f1236:c.instructions+=4;goto B6f1236;
case 0x6f123d:c.instructions+=3;goto B6f123d;
case 0x6f1240:c.instructions+=2;goto B6f1240;
case 0x6f1243:c.instructions+=1;goto B6f1243;
case 0x6f1249:goto L6f1249;
case 0x6f124c:c.instructions+=46;goto B6f124c;
case 0x6f1250:c.instructions+=45;goto B6f1250;
case 0x6f1254:c.instructions+=44;goto B6f1254;
case 0x6f1258:c.instructions+=43;goto B6f1258;
case 0x6f125c:c.instructions+=42;goto B6f125c;
case 0x6f1260:c.instructions+=41;goto B6f1260;
case 0x6f1263:c.instructions+=40;goto B6f1263;
case 0x6f1267:c.instructions+=39;goto B6f1267;
case 0x6f126b:c.instructions+=38;goto B6f126b;
case 0x6f126e:c.instructions+=37;goto B6f126e;
case 0x6f1270:c.instructions+=36;goto B6f1270;
case 0x6f1274:c.instructions+=35;goto B6f1274;
case 0x6f1278:c.instructions+=34;goto B6f1278;
case 0x6f127c:c.instructions+=33;goto B6f127c;
case 0x6f127f:c.instructions+=32;goto B6f127f;
case 0x6f1282:c.instructions+=31;goto B6f1282;
case 0x6f1286:c.instructions+=30;goto B6f1286;
case 0x6f1289:c.instructions+=29;goto B6f1289;
case 0x6f128d:c.instructions+=28;goto B6f128d;
case 0x6f1291:c.instructions+=27;goto B6f1291;
case 0x6f1295:c.instructions+=26;goto B6f1295;
case 0x6f1298:c.instructions+=25;goto B6f1298;
case 0x6f129c:c.instructions+=24;goto B6f129c;
case 0x6f12a0:c.instructions+=23;goto B6f12a0;
case 0x6f12a4:c.instructions+=22;goto B6f12a4;
case 0x6f12a8:c.instructions+=21;goto B6f12a8;
case 0x6f12aa:c.instructions+=20;goto B6f12aa;
case 0x6f12ae:c.instructions+=19;goto B6f12ae;
case 0x6f12b2:c.instructions+=18;goto B6f12b2;
case 0x6f12b5:c.instructions+=17;goto B6f12b5;
case 0x6f12b9:c.instructions+=16;goto B6f12b9;
case 0x6f12bb:c.instructions+=15;goto B6f12bb;
case 0x6f12c2:c.instructions+=14;goto B6f12c2;
case 0x6f12c4:c.instructions+=13;goto B6f12c4;
case 0x6f12c7:c.instructions+=12;goto B6f12c7;
case 0x6f12cb:c.instructions+=11;goto B6f12cb;
case 0x6f12cd:c.instructions+=10;goto B6f12cd;
case 0x6f12d4:c.instructions+=9;goto B6f12d4;
case 0x6f12d6:c.instructions+=8;goto B6f12d6;
case 0x6f12da:c.instructions+=7;goto B6f12da;
case 0x6f12dc:c.instructions+=6;goto B6f12dc;
case 0x6f12de:c.instructions+=5;goto B6f12de;
case 0x6f12e2:c.instructions+=4;goto B6f12e2;
case 0x6f12e6:c.instructions+=3;goto B6f12e6;
case 0x6f12ed:c.instructions+=2;goto B6f12ed;
case 0x6f12f1:c.instructions+=1;goto B6f12f1;
case 0x6f12f5:goto L6f12f5;
case 0x6f12f9:c.instructions+=9;goto B6f12f9;
case 0x6f12fe:c.instructions+=8;goto B6f12fe;
case 0x6f1300:c.instructions+=7;goto B6f1300;
case 0x6f1303:c.instructions+=6;goto B6f1303;
case 0x6f1308:c.instructions+=5;goto B6f1308;
case 0x6f130a:c.instructions+=4;goto B6f130a;
case 0x6f1311:c.instructions+=3;goto B6f1311;
case 0x6f1314:c.instructions+=2;goto B6f1314;
case 0x6f1317:c.instructions+=1;goto B6f1317;
case 0x6f131d:goto L6f131d;
case 0x6f1320:c.instructions+=46;goto B6f1320;
case 0x6f1324:c.instructions+=45;goto B6f1324;
case 0x6f1328:c.instructions+=44;goto B6f1328;
case 0x6f132c:c.instructions+=43;goto B6f132c;
case 0x6f1330:c.instructions+=42;goto B6f1330;
case 0x6f1334:c.instructions+=41;goto B6f1334;
case 0x6f1337:c.instructions+=40;goto B6f1337;
case 0x6f133b:c.instructions+=39;goto B6f133b;
case 0x6f133f:c.instructions+=38;goto B6f133f;
case 0x6f1342:c.instructions+=37;goto B6f1342;
case 0x6f1345:c.instructions+=36;goto B6f1345;
case 0x6f1349:c.instructions+=35;goto B6f1349;
case 0x6f134d:c.instructions+=34;goto B6f134d;
case 0x6f1351:c.instructions+=33;goto B6f1351;
case 0x6f1354:c.instructions+=32;goto B6f1354;
case 0x6f1357:c.instructions+=31;goto B6f1357;
case 0x6f135b:c.instructions+=30;goto B6f135b;
case 0x6f135e:c.instructions+=29;goto B6f135e;
case 0x6f1362:c.instructions+=28;goto B6f1362;
case 0x6f1366:c.instructions+=27;goto B6f1366;
case 0x6f136a:c.instructions+=26;goto B6f136a;
case 0x6f136d:c.instructions+=25;goto B6f136d;
case 0x6f1371:c.instructions+=24;goto B6f1371;
case 0x6f1375:c.instructions+=23;goto B6f1375;
case 0x6f1379:c.instructions+=22;goto B6f1379;
case 0x6f137c:c.instructions+=21;goto B6f137c;
case 0x6f137f:c.instructions+=20;goto B6f137f;
case 0x6f1383:c.instructions+=19;goto B6f1383;
case 0x6f1387:c.instructions+=18;goto B6f1387;
case 0x6f138a:c.instructions+=17;goto B6f138a;
case 0x6f138e:c.instructions+=16;goto B6f138e;
case 0x6f1390:c.instructions+=15;goto B6f1390;
case 0x6f1397:c.instructions+=14;goto B6f1397;
case 0x6f1399:c.instructions+=13;goto B6f1399;
case 0x6f139c:c.instructions+=12;goto B6f139c;
case 0x6f13a0:c.instructions+=11;goto B6f13a0;
case 0x6f13a2:c.instructions+=10;goto B6f13a2;
case 0x6f13a9:c.instructions+=9;goto B6f13a9;
case 0x6f13ab:c.instructions+=8;goto B6f13ab;
case 0x6f13af:c.instructions+=7;goto B6f13af;
case 0x6f13b1:c.instructions+=6;goto B6f13b1;
case 0x6f13b3:c.instructions+=5;goto B6f13b3;
case 0x6f13b7:c.instructions+=4;goto B6f13b7;
case 0x6f13bb:c.instructions+=3;goto B6f13bb;
case 0x6f13c2:c.instructions+=2;goto B6f13c2;
case 0x6f13c6:c.instructions+=1;goto B6f13c6;
case 0x6f13ca:goto L6f13ca;
case 0x6f13ce:c.instructions+=9;goto B6f13ce;
case 0x6f13d3:c.instructions+=8;goto B6f13d3;
case 0x6f13d5:c.instructions+=7;goto B6f13d5;
case 0x6f13d8:c.instructions+=6;goto B6f13d8;
case 0x6f13dd:c.instructions+=5;goto B6f13dd;
case 0x6f13df:c.instructions+=4;goto B6f13df;
case 0x6f13e6:c.instructions+=3;goto B6f13e6;
case 0x6f13e9:c.instructions+=2;goto B6f13e9;
case 0x6f13ec:c.instructions+=1;goto B6f13ec;
case 0x6f13f2:goto L6f13f2;
case 0x6f13f5:c.instructions+=46;goto B6f13f5;
case 0x6f13f9:c.instructions+=45;goto B6f13f9;
case 0x6f13fd:c.instructions+=44;goto B6f13fd;
case 0x6f1401:c.instructions+=43;goto B6f1401;
case 0x6f1405:c.instructions+=42;goto B6f1405;
case 0x6f1409:c.instructions+=41;goto B6f1409;
case 0x6f140c:c.instructions+=40;goto B6f140c;
case 0x6f1410:c.instructions+=39;goto B6f1410;
case 0x6f1414:c.instructions+=38;goto B6f1414;
case 0x6f1417:c.instructions+=37;goto B6f1417;
case 0x6f141a:c.instructions+=36;goto B6f141a;
case 0x6f141e:c.instructions+=35;goto B6f141e;
case 0x6f1422:c.instructions+=34;goto B6f1422;
case 0x6f1426:c.instructions+=33;goto B6f1426;
case 0x6f1429:c.instructions+=32;goto B6f1429;
case 0x6f142c:c.instructions+=31;goto B6f142c;
case 0x6f1430:c.instructions+=30;goto B6f1430;
case 0x6f1433:c.instructions+=29;goto B6f1433;
case 0x6f1437:c.instructions+=28;goto B6f1437;
case 0x6f143b:c.instructions+=27;goto B6f143b;
case 0x6f143f:c.instructions+=26;goto B6f143f;
case 0x6f1442:c.instructions+=25;goto B6f1442;
case 0x6f1446:c.instructions+=24;goto B6f1446;
case 0x6f144a:c.instructions+=23;goto B6f144a;
case 0x6f144e:c.instructions+=22;goto B6f144e;
case 0x6f1452:c.instructions+=21;goto B6f1452;
case 0x6f1455:c.instructions+=20;goto B6f1455;
case 0x6f1459:c.instructions+=19;goto B6f1459;
case 0x6f145d:c.instructions+=18;goto B6f145d;
case 0x6f1460:c.instructions+=17;goto B6f1460;
case 0x6f1464:c.instructions+=16;goto B6f1464;
case 0x6f1466:c.instructions+=15;goto B6f1466;
case 0x6f146d:c.instructions+=14;goto B6f146d;
case 0x6f146f:c.instructions+=13;goto B6f146f;
case 0x6f1472:c.instructions+=12;goto B6f1472;
case 0x6f1476:c.instructions+=11;goto B6f1476;
case 0x6f1478:c.instructions+=10;goto B6f1478;
case 0x6f147f:c.instructions+=9;goto B6f147f;
case 0x6f1481:c.instructions+=8;goto B6f1481;
case 0x6f1485:c.instructions+=7;goto B6f1485;
case 0x6f1487:c.instructions+=6;goto B6f1487;
case 0x6f1489:c.instructions+=5;goto B6f1489;
case 0x6f148d:c.instructions+=4;goto B6f148d;
case 0x6f1491:c.instructions+=3;goto B6f1491;
case 0x6f1498:c.instructions+=2;goto B6f1498;
case 0x6f149c:c.instructions+=1;goto B6f149c;
case 0x6f14a0:goto L6f14a0;
case 0x6f14a4:c.instructions+=12;goto B6f14a4;
case 0x6f14a8:c.instructions+=11;goto B6f14a8;
case 0x6f14ab:c.instructions+=10;goto B6f14ab;
case 0x6f14af:c.instructions+=9;goto B6f14af;
case 0x6f14b3:c.instructions+=8;goto B6f14b3;
case 0x6f14b6:c.instructions+=7;goto B6f14b6;
case 0x6f14b8:c.instructions+=6;goto B6f14b8;
case 0x6f14bc:c.instructions+=5;goto B6f14bc;
case 0x6f14c0:c.instructions+=4;goto B6f14c0;
case 0x6f14c5:c.instructions+=3;goto B6f14c5;
case 0x6f14c7:c.instructions+=2;goto B6f14c7;
case 0x6f14cb:c.instructions+=1;goto B6f14cb;
case 0x6f14d1:goto L6f14d1;
case 0x6f14d5:goto L6f14d5;
case 0x6f14d7:c.instructions+=1;goto B6f14d7;
case 0x6f14dd:goto L6f14dd;
case 0x6f14df:c.instructions+=2;goto B6f14df;
case 0x6f14e2:c.instructions+=1;goto B6f14e2;
case 0x6f14e6:goto L6f14e6;
case 0x6f14eb:c.instructions+=8;goto B6f14eb;
case 0x6f14ed:c.instructions+=7;goto B6f14ed;
case 0x6f14f0:c.instructions+=6;goto B6f14f0;
case 0x6f14f5:c.instructions+=5;goto B6f14f5;
case 0x6f14f7:c.instructions+=4;goto B6f14f7;
case 0x6f14fe:c.instructions+=3;goto B6f14fe;
case 0x6f1501:c.instructions+=2;goto B6f1501;
case 0x6f1504:c.instructions+=1;goto B6f1504;
case 0x6f150a:goto L6f150a;
case 0x6f150d:c.instructions+=48;goto B6f150d;
case 0x6f1511:c.instructions+=47;goto B6f1511;
case 0x6f1515:c.instructions+=46;goto B6f1515;
case 0x6f1519:c.instructions+=45;goto B6f1519;
case 0x6f151d:c.instructions+=44;goto B6f151d;
case 0x6f1521:c.instructions+=43;goto B6f1521;
case 0x6f1524:c.instructions+=42;goto B6f1524;
case 0x6f1528:c.instructions+=41;goto B6f1528;
case 0x6f152c:c.instructions+=40;goto B6f152c;
case 0x6f152f:c.instructions+=39;goto B6f152f;
case 0x6f1531:c.instructions+=38;goto B6f1531;
case 0x6f1535:c.instructions+=37;goto B6f1535;
case 0x6f1539:c.instructions+=36;goto B6f1539;
case 0x6f153d:c.instructions+=35;goto B6f153d;
case 0x6f1540:c.instructions+=34;goto B6f1540;
case 0x6f1544:c.instructions+=33;goto B6f1544;
case 0x6f1548:c.instructions+=32;goto B6f1548;
case 0x6f154b:c.instructions+=31;goto B6f154b;
case 0x6f154f:c.instructions+=30;goto B6f154f;
case 0x6f1553:c.instructions+=29;goto B6f1553;
case 0x6f1557:c.instructions+=28;goto B6f1557;
case 0x6f155a:c.instructions+=27;goto B6f155a;
case 0x6f155e:c.instructions+=26;goto B6f155e;
case 0x6f1562:c.instructions+=25;goto B6f1562;
case 0x6f1566:c.instructions+=24;goto B6f1566;
case 0x6f156a:c.instructions+=23;goto B6f156a;
case 0x6f156c:c.instructions+=22;goto B6f156c;
case 0x6f156f:c.instructions+=21;goto B6f156f;
case 0x6f1573:c.instructions+=20;goto B6f1573;
case 0x6f1577:c.instructions+=19;goto B6f1577;
case 0x6f157a:c.instructions+=18;goto B6f157a;
case 0x6f157e:c.instructions+=17;goto B6f157e;
case 0x6f1580:c.instructions+=16;goto B6f1580;
case 0x6f1587:c.instructions+=15;goto B6f1587;
case 0x6f1589:c.instructions+=14;goto B6f1589;
case 0x6f158c:c.instructions+=13;goto B6f158c;
case 0x6f1590:c.instructions+=12;goto B6f1590;
case 0x6f1592:c.instructions+=11;goto B6f1592;
case 0x6f1599:c.instructions+=10;goto B6f1599;
case 0x6f159b:c.instructions+=9;goto B6f159b;
case 0x6f159f:c.instructions+=8;goto B6f159f;
case 0x6f15a1:c.instructions+=7;goto B6f15a1;
case 0x6f15a3:c.instructions+=6;goto B6f15a3;
case 0x6f15a7:c.instructions+=5;goto B6f15a7;
case 0x6f15ab:c.instructions+=4;goto B6f15ab;
case 0x6f15b2:c.instructions+=3;goto B6f15b2;
case 0x6f15b6:c.instructions+=2;goto B6f15b6;
case 0x6f15ba:c.instructions+=1;goto B6f15ba;
case 0x6f15bc:goto L6f15bc;
case 0x6f15c0:goto L6f15c0;
case 0x6f15c4:c.instructions+=5;goto B6f15c4;
case 0x6f15c5:c.instructions+=4;goto B6f15c5;
case 0x6f15c8:c.instructions+=3;goto B6f15c8;
case 0x6f15ca:c.instructions+=2;goto B6f15ca;
case 0x6f15ce:c.instructions+=1;goto B6f15ce;
case 0x6f15d4:goto L6f15d4;
case 0x6f15d9:goto L6f15d9;
case 0x6f15db:c.instructions+=2;goto B6f15db;
case 0x6f15de:c.instructions+=1;goto B6f15de;
case 0x6f15e4:goto L6f15e4;
case 0x6f15e8:c.instructions+=7;goto B6f15e8;
case 0x6f15eb:c.instructions+=6;goto B6f15eb;
case 0x6f15f0:c.instructions+=5;goto B6f15f0;
case 0x6f15f4:c.instructions+=4;goto B6f15f4;
case 0x6f15f6:c.instructions+=3;goto B6f15f6;
case 0x6f15fa:c.instructions+=2;goto B6f15fa;
case 0x6f15fd:c.instructions+=1;goto B6f15fd;
case 0x6f1601:goto L6f1601;
case 0x6f1606:c.instructions+=8;goto B6f1606;
case 0x6f1608:c.instructions+=7;goto B6f1608;
case 0x6f160b:c.instructions+=6;goto B6f160b;
case 0x6f1610:c.instructions+=5;goto B6f1610;
case 0x6f1612:c.instructions+=4;goto B6f1612;
case 0x6f1619:c.instructions+=3;goto B6f1619;
case 0x6f161c:c.instructions+=2;goto B6f161c;
case 0x6f161f:c.instructions+=1;goto B6f161f;
case 0x6f1621:goto L6f1621;
case 0x6f1624:c.instructions+=17;goto B6f1624;
case 0x6f1628:c.instructions+=16;goto B6f1628;
case 0x6f162c:c.instructions+=15;goto B6f162c;
case 0x6f1630:c.instructions+=14;goto B6f1630;
case 0x6f1633:c.instructions+=13;goto B6f1633;
case 0x6f1637:c.instructions+=12;goto B6f1637;
case 0x6f163a:c.instructions+=11;goto B6f163a;
case 0x6f163d:c.instructions+=10;goto B6f163d;
case 0x6f1641:c.instructions+=9;goto B6f1641;
case 0x6f1645:c.instructions+=8;goto B6f1645;
case 0x6f1649:c.instructions+=7;goto B6f1649;
case 0x6f164c:c.instructions+=6;goto B6f164c;
case 0x6f1650:c.instructions+=5;goto B6f1650;
case 0x6f1654:c.instructions+=4;goto B6f1654;
case 0x6f1658:c.instructions+=3;goto B6f1658;
case 0x6f165c:c.instructions+=2;goto B6f165c;
case 0x6f165e:c.instructions+=1;goto B6f165e;
case 0x6f1662:goto L6f1662;
case 0x6f1667:c.instructions+=8;goto B6f1667;
case 0x6f1669:c.instructions+=7;goto B6f1669;
case 0x6f166c:c.instructions+=6;goto B6f166c;
case 0x6f1671:c.instructions+=5;goto B6f1671;
case 0x6f1673:c.instructions+=4;goto B6f1673;
case 0x6f167a:c.instructions+=3;goto B6f167a;
case 0x6f167d:c.instructions+=2;goto B6f167d;
case 0x6f1680:c.instructions+=1;goto B6f1680;
case 0x6f1682:goto L6f1682;
case 0x6f1685:c.instructions+=17;goto B6f1685;
case 0x6f1689:c.instructions+=16;goto B6f1689;
case 0x6f168d:c.instructions+=15;goto B6f168d;
case 0x6f1691:c.instructions+=14;goto B6f1691;
case 0x6f1694:c.instructions+=13;goto B6f1694;
case 0x6f1698:c.instructions+=12;goto B6f1698;
case 0x6f169b:c.instructions+=11;goto B6f169b;
case 0x6f169e:c.instructions+=10;goto B6f169e;
case 0x6f16a2:c.instructions+=9;goto B6f16a2;
case 0x6f16a6:c.instructions+=8;goto B6f16a6;
case 0x6f16aa:c.instructions+=7;goto B6f16aa;
case 0x6f16ad:c.instructions+=6;goto B6f16ad;
case 0x6f16b1:c.instructions+=5;goto B6f16b1;
case 0x6f16b5:c.instructions+=4;goto B6f16b5;
case 0x6f16b9:c.instructions+=3;goto B6f16b9;
case 0x6f16bd:c.instructions+=2;goto B6f16bd;
case 0x6f16c0:c.instructions+=1;goto B6f16c0;
case 0x6f16c4:goto L6f16c4;
case 0x6f16c9:c.instructions+=8;goto B6f16c9;
case 0x6f16cb:c.instructions+=7;goto B6f16cb;
case 0x6f16ce:c.instructions+=6;goto B6f16ce;
case 0x6f16d3:c.instructions+=5;goto B6f16d3;
case 0x6f16d5:c.instructions+=4;goto B6f16d5;
case 0x6f16dc:c.instructions+=3;goto B6f16dc;
case 0x6f16df:c.instructions+=2;goto B6f16df;
case 0x6f16e2:c.instructions+=1;goto B6f16e2;
case 0x6f16e4:goto L6f16e4;
case 0x6f16e7:c.instructions+=17;goto B6f16e7;
case 0x6f16eb:c.instructions+=16;goto B6f16eb;
case 0x6f16ee:c.instructions+=15;goto B6f16ee;
case 0x6f16f2:c.instructions+=14;goto B6f16f2;
case 0x6f16f5:c.instructions+=13;goto B6f16f5;
case 0x6f16f9:c.instructions+=12;goto B6f16f9;
case 0x6f16fc:c.instructions+=11;goto B6f16fc;
case 0x6f16ff:c.instructions+=10;goto B6f16ff;
case 0x6f1703:c.instructions+=9;goto B6f1703;
case 0x6f1707:c.instructions+=8;goto B6f1707;
case 0x6f170b:c.instructions+=7;goto B6f170b;
case 0x6f170e:c.instructions+=6;goto B6f170e;
case 0x6f1712:c.instructions+=5;goto B6f1712;
case 0x6f1716:c.instructions+=4;goto B6f1716;
case 0x6f171a:c.instructions+=3;goto B6f171a;
case 0x6f171e:c.instructions+=2;goto B6f171e;
case 0x6f1721:c.instructions+=1;goto B6f1721;
case 0x6f1725:goto L6f1725;
case 0x6f172a:c.instructions+=8;goto B6f172a;
case 0x6f172c:c.instructions+=7;goto B6f172c;
case 0x6f172f:c.instructions+=6;goto B6f172f;
case 0x6f1734:c.instructions+=5;goto B6f1734;
case 0x6f1736:c.instructions+=4;goto B6f1736;
case 0x6f173d:c.instructions+=3;goto B6f173d;
case 0x6f1740:c.instructions+=2;goto B6f1740;
case 0x6f1743:c.instructions+=1;goto B6f1743;
case 0x6f1745:goto L6f1745;
case 0x6f1748:c.instructions+=17;goto B6f1748;
case 0x6f174c:c.instructions+=16;goto B6f174c;
case 0x6f1750:c.instructions+=15;goto B6f1750;
case 0x6f1754:c.instructions+=14;goto B6f1754;
case 0x6f1757:c.instructions+=13;goto B6f1757;
case 0x6f175b:c.instructions+=12;goto B6f175b;
case 0x6f175e:c.instructions+=11;goto B6f175e;
case 0x6f1761:c.instructions+=10;goto B6f1761;
case 0x6f1765:c.instructions+=9;goto B6f1765;
case 0x6f1769:c.instructions+=8;goto B6f1769;
case 0x6f176d:c.instructions+=7;goto B6f176d;
case 0x6f1770:c.instructions+=6;goto B6f1770;
case 0x6f1774:c.instructions+=5;goto B6f1774;
case 0x6f1778:c.instructions+=4;goto B6f1778;
case 0x6f177c:c.instructions+=3;goto B6f177c;
case 0x6f1780:c.instructions+=2;goto B6f1780;
case 0x6f1783:c.instructions+=1;goto B6f1783;
case 0x6f1787:goto L6f1787;
case 0x6f178b:c.instructions+=10;goto B6f178b;
case 0x6f178f:c.instructions+=9;goto B6f178f;
case 0x6f1792:c.instructions+=8;goto B6f1792;
case 0x6f1795:c.instructions+=7;goto B6f1795;
case 0x6f1797:c.instructions+=6;goto B6f1797;
case 0x6f179b:c.instructions+=5;goto B6f179b;
case 0x6f179f:c.instructions+=4;goto B6f179f;
case 0x6f17a3:c.instructions+=3;goto B6f17a3;
case 0x6f17a8:c.instructions+=2;goto B6f17a8;
case 0x6f17aa:c.instructions+=1;goto B6f17aa;
case 0x6f17b0:goto L6f17b0;
case 0x6f17b4:goto L6f17b4;
case 0x6f17b6:c.instructions+=1;goto B6f17b6;
case 0x6f17bc:goto L6f17bc;
case 0x6f17be:c.instructions+=4;goto B6f17be;
case 0x6f17c1:c.instructions+=3;goto B6f17c1;
case 0x6f17c5:c.instructions+=2;goto B6f17c5;
case 0x6f17c9:c.instructions+=1;goto B6f17c9;
case 0x6f17d0:goto L6f17d0;
case 0x6f17d5:c.instructions+=8;goto B6f17d5;
case 0x6f17d7:c.instructions+=7;goto B6f17d7;
case 0x6f17da:c.instructions+=6;goto B6f17da;
case 0x6f17df:c.instructions+=5;goto B6f17df;
case 0x6f17e1:c.instructions+=4;goto B6f17e1;
case 0x6f17e8:c.instructions+=3;goto B6f17e8;
case 0x6f17eb:c.instructions+=2;goto B6f17eb;
case 0x6f17ee:c.instructions+=1;goto B6f17ee;
case 0x6f17f0:goto L6f17f0;
case 0x6f17f3:c.instructions+=19;goto B6f17f3;
case 0x6f17f7:c.instructions+=18;goto B6f17f7;
case 0x6f17fb:c.instructions+=17;goto B6f17fb;
case 0x6f17ff:c.instructions+=16;goto B6f17ff;
case 0x6f1803:c.instructions+=15;goto B6f1803;
case 0x6f1806:c.instructions+=14;goto B6f1806;
case 0x6f180a:c.instructions+=13;goto B6f180a;
case 0x6f180d:c.instructions+=12;goto B6f180d;
case 0x6f1810:c.instructions+=11;goto B6f1810;
case 0x6f1814:c.instructions+=10;goto B6f1814;
case 0x6f1818:c.instructions+=9;goto B6f1818;
case 0x6f181c:c.instructions+=8;goto B6f181c;
case 0x6f181f:c.instructions+=7;goto B6f181f;
case 0x6f1823:c.instructions+=6;goto B6f1823;
case 0x6f1827:c.instructions+=5;goto B6f1827;
case 0x6f182b:c.instructions+=4;goto B6f182b;
case 0x6f182f:c.instructions+=3;goto B6f182f;
case 0x6f1831:c.instructions+=2;goto B6f1831;
case 0x6f1835:c.instructions+=1;goto B6f1835;
case 0x6f1837:goto L6f1837;
case 0x6f183b:goto L6f183b;
case 0x6f183c:c.instructions+=4;goto B6f183c;
case 0x6f183f:c.instructions+=3;goto B6f183f;
case 0x6f1841:c.instructions+=2;goto B6f1841;
case 0x6f1845:c.instructions+=1;goto B6f1845;
case 0x6f1847:goto L6f1847;
case 0x6f184b:goto L6f184b;
case 0x6f184e:c.instructions+=2;goto B6f184e;
case 0x6f1850:c.instructions+=1;goto B6f1850;
case 0x6f1852:goto L6f1852;
case 0x6f1856:c.instructions+=12;goto B6f1856;
case 0x6f1859:c.instructions+=11;goto B6f1859;
case 0x6f185c:c.instructions+=10;goto B6f185c;
case 0x6f1860:c.instructions+=9;goto B6f1860;
case 0x6f1864:c.instructions+=8;goto B6f1864;
case 0x6f1867:c.instructions+=7;goto B6f1867;
case 0x6f186a:c.instructions+=6;goto B6f186a;
case 0x6f186e:c.instructions+=5;goto B6f186e;
case 0x6f1872:c.instructions+=4;goto B6f1872;
case 0x6f1875:c.instructions+=3;goto B6f1875;
case 0x6f1877:c.instructions+=2;goto B6f1877;
case 0x6f1879:c.instructions+=1;goto B6f1879;
case 0x6f187b:goto L6f187b;
case 0x6f187e:c.instructions+=1;goto B6f187e;
case 0x6f1880:goto L6f1880;
case 0x6f1885:c.instructions+=8;goto B6f1885;
case 0x6f1887:c.instructions+=7;goto B6f1887;
case 0x6f188a:c.instructions+=6;goto B6f188a;
case 0x6f188f:c.instructions+=5;goto B6f188f;
case 0x6f1891:c.instructions+=4;goto B6f1891;
case 0x6f1898:c.instructions+=3;goto B6f1898;
case 0x6f189b:c.instructions+=2;goto B6f189b;
case 0x6f189e:c.instructions+=1;goto B6f189e;
case 0x6f18a0:goto L6f18a0;
case 0x6f18a4:c.instructions+=7;goto B6f18a4;
case 0x6f18a8:c.instructions+=6;goto B6f18a8;
case 0x6f18ab:c.instructions+=5;goto B6f18ab;
case 0x6f18ae:c.instructions+=4;goto B6f18ae;
case 0x6f18b1:c.instructions+=3;goto B6f18b1;
case 0x6f18b5:c.instructions+=2;goto B6f18b5;
case 0x6f18b7:c.instructions+=1;goto B6f18b7;
case 0x6f18bb:goto L6f18bb;
case 0x6f18bf:c.instructions+=4;goto B6f18bf;
case 0x6f18c0:c.instructions+=3;goto B6f18c0;
case 0x6f18c3:c.instructions+=2;goto B6f18c3;
case 0x6f18c5:c.instructions+=1;goto B6f18c5;
case 0x6f18c7:goto L6f18c7;
case 0x6f18c8:c.instructions+=6;goto B6f18c8;
case 0x6f18c9:c.instructions+=5;goto B6f18c9;
case 0x6f18ca:c.instructions+=4;goto B6f18ca;
case 0x6f18cc:c.instructions+=3;goto B6f18cc;
case 0x6f18cd:c.instructions+=2;goto B6f18cd;
case 0x6f18d3:c.instructions+=1;goto B6f18d3;
case 0x6f18e0:goto L6f18e0;
case 0x6f18e4:c.instructions+=6;goto B6f18e4;
case 0x6f18e7:c.instructions+=5;goto B6f18e7;
case 0x6f18e9:c.instructions+=4;goto B6f18e9;
case 0x6f18ea:c.instructions+=3;goto B6f18ea;
case 0x6f18ee:c.instructions+=2;goto B6f18ee;
case 0x6f18f2:c.instructions+=1;goto B6f18f2;
case 0x6f18f8:goto L6f18f8;
case 0x6f18fb:c.instructions+=18;goto B6f18fb;
case 0x6f18fc:c.instructions+=17;goto B6f18fc;
case 0x6f1900:c.instructions+=16;goto B6f1900;
case 0x6f1902:c.instructions+=15;goto B6f1902;
case 0x6f1905:c.instructions+=14;goto B6f1905;
case 0x6f1906:c.instructions+=13;goto B6f1906;
case 0x6f190a:c.instructions+=12;goto B6f190a;
case 0x6f190c:c.instructions+=11;goto B6f190c;
case 0x6f190f:c.instructions+=10;goto B6f190f;
case 0x6f1912:c.instructions+=9;goto B6f1912;
case 0x6f1916:c.instructions+=8;goto B6f1916;
case 0x6f191a:c.instructions+=7;goto B6f191a;
case 0x6f191c:c.instructions+=6;goto B6f191c;
case 0x6f191d:c.instructions+=5;goto B6f191d;
case 0x6f1920:c.instructions+=4;goto B6f1920;
case 0x6f1924:c.instructions+=3;goto B6f1924;
case 0x6f1928:c.instructions+=2;goto B6f1928;
case 0x6f192c:c.instructions+=1;goto B6f192c;
case 0x6f1932:goto L6f1932;
case 0x6f1935:c.instructions+=8;goto B6f1935;
case 0x6f1938:c.instructions+=7;goto B6f1938;
case 0x6f193b:c.instructions+=6;goto B6f193b;
case 0x6f193f:c.instructions+=5;goto B6f193f;
case 0x6f1943:c.instructions+=4;goto B6f1943;
case 0x6f1945:c.instructions+=3;goto B6f1945;
case 0x6f1948:c.instructions+=2;goto B6f1948;
case 0x6f194c:c.instructions+=1;goto B6f194c;
case 0x6f1952:goto L6f1952;
case 0x6f1955:c.instructions+=2;goto B6f1955;
case 0x6f195d:c.instructions+=1;goto B6f195d;
case 0x6f1960:goto L6f1960;
case 0x6f1963:c.instructions+=187;goto B6f1963;
case 0x6f1967:c.instructions+=186;goto B6f1967;
case 0x6f196b:c.instructions+=185;goto B6f196b;
case 0x6f196f:c.instructions+=184;goto B6f196f;
case 0x6f1973:c.instructions+=183;goto B6f1973;
case 0x6f1977:c.instructions+=182;goto B6f1977;
case 0x6f197a:c.instructions+=181;goto B6f197a;
case 0x6f197e:c.instructions+=180;goto B6f197e;
case 0x6f1982:c.instructions+=179;goto B6f1982;
case 0x6f1985:c.instructions+=178;goto B6f1985;
case 0x6f1988:c.instructions+=177;goto B6f1988;
case 0x6f198c:c.instructions+=176;goto B6f198c;
case 0x6f1990:c.instructions+=175;goto B6f1990;
case 0x6f1994:c.instructions+=174;goto B6f1994;
case 0x6f1997:c.instructions+=173;goto B6f1997;
case 0x6f199b:c.instructions+=172;goto B6f199b;
case 0x6f199f:c.instructions+=171;goto B6f199f;
case 0x6f19a3:c.instructions+=170;goto B6f19a3;
case 0x6f19a7:c.instructions+=169;goto B6f19a7;
case 0x6f19aa:c.instructions+=168;goto B6f19aa;
case 0x6f19ae:c.instructions+=167;goto B6f19ae;
case 0x6f19b2:c.instructions+=166;goto B6f19b2;
case 0x6f19b6:c.instructions+=165;goto B6f19b6;
case 0x6f19b9:c.instructions+=164;goto B6f19b9;
case 0x6f19bd:c.instructions+=163;goto B6f19bd;
case 0x6f19c1:c.instructions+=162;goto B6f19c1;
case 0x6f19c4:c.instructions+=161;goto B6f19c4;
case 0x6f19c8:c.instructions+=160;goto B6f19c8;
case 0x6f19ca:c.instructions+=159;goto B6f19ca;
case 0x6f19ce:c.instructions+=158;goto B6f19ce;
case 0x6f19d0:c.instructions+=157;goto B6f19d0;
case 0x6f19d3:c.instructions+=156;goto B6f19d3;
case 0x6f19d7:c.instructions+=155;goto B6f19d7;
case 0x6f19d9:c.instructions+=154;goto B6f19d9;
case 0x6f19dd:c.instructions+=153;goto B6f19dd;
case 0x6f19df:c.instructions+=152;goto B6f19df;
case 0x6f19e3:c.instructions+=151;goto B6f19e3;
case 0x6f19e5:c.instructions+=150;goto B6f19e5;
case 0x6f19e7:c.instructions+=149;goto B6f19e7;
case 0x6f19eb:c.instructions+=148;goto B6f19eb;
case 0x6f19ef:c.instructions+=147;goto B6f19ef;
case 0x6f19f3:c.instructions+=146;goto B6f19f3;
case 0x6f19f7:c.instructions+=145;goto B6f19f7;
case 0x6f19fb:c.instructions+=144;goto B6f19fb;
case 0x6f19ff:c.instructions+=143;goto B6f19ff;
case 0x6f1a03:c.instructions+=142;goto B6f1a03;
case 0x6f1a07:c.instructions+=141;goto B6f1a07;
case 0x6f1a0b:c.instructions+=140;goto B6f1a0b;
case 0x6f1a0f:c.instructions+=139;goto B6f1a0f;
case 0x6f1a13:c.instructions+=138;goto B6f1a13;
case 0x6f1a16:c.instructions+=137;goto B6f1a16;
case 0x6f1a1a:c.instructions+=136;goto B6f1a1a;
case 0x6f1a1e:c.instructions+=135;goto B6f1a1e;
case 0x6f1a22:c.instructions+=134;goto B6f1a22;
case 0x6f1a24:c.instructions+=133;goto B6f1a24;
case 0x6f1a28:c.instructions+=132;goto B6f1a28;
case 0x6f1a2c:c.instructions+=131;goto B6f1a2c;
case 0x6f1a30:c.instructions+=130;goto B6f1a30;
case 0x6f1a33:c.instructions+=129;goto B6f1a33;
case 0x6f1a37:c.instructions+=128;goto B6f1a37;
case 0x6f1a3b:c.instructions+=127;goto B6f1a3b;
case 0x6f1a3f:c.instructions+=126;goto B6f1a3f;
case 0x6f1a43:c.instructions+=125;goto B6f1a43;
case 0x6f1a46:c.instructions+=124;goto B6f1a46;
case 0x6f1a4a:c.instructions+=123;goto B6f1a4a;
case 0x6f1a4e:c.instructions+=122;goto B6f1a4e;
case 0x6f1a52:c.instructions+=121;goto B6f1a52;
case 0x6f1a54:c.instructions+=120;goto B6f1a54;
case 0x6f1a58:c.instructions+=119;goto B6f1a58;
case 0x6f1a5c:c.instructions+=118;goto B6f1a5c;
case 0x6f1a5f:c.instructions+=117;goto B6f1a5f;
case 0x6f1a63:c.instructions+=116;goto B6f1a63;
case 0x6f1a65:c.instructions+=115;goto B6f1a65;
case 0x6f1a69:c.instructions+=114;goto B6f1a69;
case 0x6f1a6b:c.instructions+=113;goto B6f1a6b;
case 0x6f1a6e:c.instructions+=112;goto B6f1a6e;
case 0x6f1a72:c.instructions+=111;goto B6f1a72;
case 0x6f1a74:c.instructions+=110;goto B6f1a74;
case 0x6f1a78:c.instructions+=109;goto B6f1a78;
case 0x6f1a7a:c.instructions+=108;goto B6f1a7a;
case 0x6f1a7e:c.instructions+=107;goto B6f1a7e;
case 0x6f1a80:c.instructions+=106;goto B6f1a80;
case 0x6f1a82:c.instructions+=105;goto B6f1a82;
case 0x6f1a86:c.instructions+=104;goto B6f1a86;
case 0x6f1a8a:c.instructions+=103;goto B6f1a8a;
case 0x6f1a8e:c.instructions+=102;goto B6f1a8e;
case 0x6f1a92:c.instructions+=101;goto B6f1a92;
case 0x6f1a96:c.instructions+=100;goto B6f1a96;
case 0x6f1a9a:c.instructions+=99;goto B6f1a9a;
case 0x6f1a9e:c.instructions+=98;goto B6f1a9e;
case 0x6f1aa2:c.instructions+=97;goto B6f1aa2;
case 0x6f1aa6:c.instructions+=96;goto B6f1aa6;
case 0x6f1aaa:c.instructions+=95;goto B6f1aaa;
case 0x6f1aae:c.instructions+=94;goto B6f1aae;
case 0x6f1ab1:c.instructions+=93;goto B6f1ab1;
case 0x6f1ab5:c.instructions+=92;goto B6f1ab5;
case 0x6f1ab9:c.instructions+=91;goto B6f1ab9;
case 0x6f1abd:c.instructions+=90;goto B6f1abd;
case 0x6f1ac0:c.instructions+=89;goto B6f1ac0;
case 0x6f1ac4:c.instructions+=88;goto B6f1ac4;
case 0x6f1ac8:c.instructions+=87;goto B6f1ac8;
case 0x6f1acc:c.instructions+=86;goto B6f1acc;
case 0x6f1acf:c.instructions+=85;goto B6f1acf;
case 0x6f1ad3:c.instructions+=84;goto B6f1ad3;
case 0x6f1ad7:c.instructions+=83;goto B6f1ad7;
case 0x6f1adb:c.instructions+=82;goto B6f1adb;
case 0x6f1adf:c.instructions+=81;goto B6f1adf;
case 0x6f1ae2:c.instructions+=80;goto B6f1ae2;
case 0x6f1ae6:c.instructions+=79;goto B6f1ae6;
case 0x6f1aea:c.instructions+=78;goto B6f1aea;
case 0x6f1aed:c.instructions+=77;goto B6f1aed;
case 0x6f1af0:c.instructions+=76;goto B6f1af0;
case 0x6f1af4:c.instructions+=75;goto B6f1af4;
case 0x6f1af8:c.instructions+=74;goto B6f1af8;
case 0x6f1afb:c.instructions+=73;goto B6f1afb;
case 0x6f1aff:c.instructions+=72;goto B6f1aff;
case 0x6f1b01:c.instructions+=71;goto B6f1b01;
case 0x6f1b05:c.instructions+=70;goto B6f1b05;
case 0x6f1b07:c.instructions+=69;goto B6f1b07;
case 0x6f1b0a:c.instructions+=68;goto B6f1b0a;
case 0x6f1b0e:c.instructions+=67;goto B6f1b0e;
case 0x6f1b10:c.instructions+=66;goto B6f1b10;
case 0x6f1b14:c.instructions+=65;goto B6f1b14;
case 0x6f1b16:c.instructions+=64;goto B6f1b16;
case 0x6f1b1a:c.instructions+=63;goto B6f1b1a;
case 0x6f1b1c:c.instructions+=62;goto B6f1b1c;
case 0x6f1b1e:c.instructions+=61;goto B6f1b1e;
case 0x6f1b22:c.instructions+=60;goto B6f1b22;
case 0x6f1b26:c.instructions+=59;goto B6f1b26;
case 0x6f1b2a:c.instructions+=58;goto B6f1b2a;
case 0x6f1b2e:c.instructions+=57;goto B6f1b2e;
case 0x6f1b32:c.instructions+=56;goto B6f1b32;
case 0x6f1b36:c.instructions+=55;goto B6f1b36;
case 0x6f1b3a:c.instructions+=54;goto B6f1b3a;
case 0x6f1b3e:c.instructions+=53;goto B6f1b3e;
case 0x6f1b42:c.instructions+=52;goto B6f1b42;
case 0x6f1b46:c.instructions+=51;goto B6f1b46;
case 0x6f1b4a:c.instructions+=50;goto B6f1b4a;
case 0x6f1b4d:c.instructions+=49;goto B6f1b4d;
case 0x6f1b51:c.instructions+=48;goto B6f1b51;
case 0x6f1b55:c.instructions+=47;goto B6f1b55;
case 0x6f1b59:c.instructions+=46;goto B6f1b59;
case 0x6f1b5c:c.instructions+=45;goto B6f1b5c;
case 0x6f1b60:c.instructions+=44;goto B6f1b60;
case 0x6f1b64:c.instructions+=43;goto B6f1b64;
case 0x6f1b68:c.instructions+=42;goto B6f1b68;
case 0x6f1b6b:c.instructions+=41;goto B6f1b6b;
case 0x6f1b6f:c.instructions+=40;goto B6f1b6f;
case 0x6f1b73:c.instructions+=39;goto B6f1b73;
case 0x6f1b77:c.instructions+=38;goto B6f1b77;
case 0x6f1b7a:c.instructions+=37;goto B6f1b7a;
case 0x6f1b7e:c.instructions+=36;goto B6f1b7e;
case 0x6f1b81:c.instructions+=35;goto B6f1b81;
case 0x6f1b85:c.instructions+=34;goto B6f1b85;
case 0x6f1b89:c.instructions+=33;goto B6f1b89;
case 0x6f1b8d:c.instructions+=32;goto B6f1b8d;
case 0x6f1b91:c.instructions+=31;goto B6f1b91;
case 0x6f1b95:c.instructions+=30;goto B6f1b95;
case 0x6f1b9b:c.instructions+=29;goto B6f1b9b;
case 0x6f1b9e:c.instructions+=28;goto B6f1b9e;
case 0x6f1ba1:c.instructions+=27;goto B6f1ba1;
case 0x6f1ba4:c.instructions+=26;goto B6f1ba4;
case 0x6f1ba7:c.instructions+=25;goto B6f1ba7;
case 0x6f1bab:c.instructions+=24;goto B6f1bab;
case 0x6f1bad:c.instructions+=23;goto B6f1bad;
case 0x6f1bb1:c.instructions+=22;goto B6f1bb1;
case 0x6f1bb3:c.instructions+=21;goto B6f1bb3;
case 0x6f1bb6:c.instructions+=20;goto B6f1bb6;
case 0x6f1bba:c.instructions+=19;goto B6f1bba;
case 0x6f1bbc:c.instructions+=18;goto B6f1bbc;
case 0x6f1bc0:c.instructions+=17;goto B6f1bc0;
case 0x6f1bc2:c.instructions+=16;goto B6f1bc2;
case 0x6f1bc6:c.instructions+=15;goto B6f1bc6;
case 0x6f1bc8:c.instructions+=14;goto B6f1bc8;
case 0x6f1bca:c.instructions+=13;goto B6f1bca;
case 0x6f1bce:c.instructions+=12;goto B6f1bce;
case 0x6f1bd2:c.instructions+=11;goto B6f1bd2;
case 0x6f1bd6:c.instructions+=10;goto B6f1bd6;
case 0x6f1bda:c.instructions+=9;goto B6f1bda;
case 0x6f1bde:c.instructions+=8;goto B6f1bde;
case 0x6f1be2:c.instructions+=7;goto B6f1be2;
case 0x6f1be5:c.instructions+=6;goto B6f1be5;
case 0x6f1be9:c.instructions+=5;goto B6f1be9;
case 0x6f1bed:c.instructions+=4;goto B6f1bed;
case 0x6f1bf0:c.instructions+=3;goto B6f1bf0;
case 0x6f1bf2:c.instructions+=2;goto B6f1bf2;
case 0x6f1bf6:c.instructions+=1;goto B6f1bf6;
case 0x6f1bfc:goto L6f1bfc;
case 0x6f1c00:c.instructions+=1;goto B6f1c00;
case 0x6f1c04:goto L6f1c04;
case 0x6f1c06:c.instructions+=1;goto B6f1c06;
case 0x6f1c0c:goto L6f1c0c;
case 0x6f1c0e:c.instructions+=2;goto B6f1c0e;
case 0x6f1c11:c.instructions+=1;goto B6f1c11;
case 0x6f1c15:goto L6f1c15;
case 0x6f1c18:c.instructions+=50;goto B6f1c18;
case 0x6f1c1c:c.instructions+=49;goto B6f1c1c;
case 0x6f1c20:c.instructions+=48;goto B6f1c20;
case 0x6f1c24:c.instructions+=47;goto B6f1c24;
case 0x6f1c28:c.instructions+=46;goto B6f1c28;
case 0x6f1c2c:c.instructions+=45;goto B6f1c2c;
case 0x6f1c2f:c.instructions+=44;goto B6f1c2f;
case 0x6f1c33:c.instructions+=43;goto B6f1c33;
case 0x6f1c37:c.instructions+=42;goto B6f1c37;
case 0x6f1c3a:c.instructions+=41;goto B6f1c3a;
case 0x6f1c3c:c.instructions+=40;goto B6f1c3c;
case 0x6f1c40:c.instructions+=39;goto B6f1c40;
case 0x6f1c44:c.instructions+=38;goto B6f1c44;
case 0x6f1c48:c.instructions+=37;goto B6f1c48;
case 0x6f1c4b:c.instructions+=36;goto B6f1c4b;
case 0x6f1c4e:c.instructions+=35;goto B6f1c4e;
case 0x6f1c52:c.instructions+=34;goto B6f1c52;
case 0x6f1c55:c.instructions+=33;goto B6f1c55;
case 0x6f1c59:c.instructions+=32;goto B6f1c59;
case 0x6f1c5d:c.instructions+=31;goto B6f1c5d;
case 0x6f1c61:c.instructions+=30;goto B6f1c61;
case 0x6f1c64:c.instructions+=29;goto B6f1c64;
case 0x6f1c68:c.instructions+=28;goto B6f1c68;
case 0x6f1c6c:c.instructions+=27;goto B6f1c6c;
case 0x6f1c70:c.instructions+=26;goto B6f1c70;
case 0x6f1c74:c.instructions+=25;goto B6f1c74;
case 0x6f1c76:c.instructions+=24;goto B6f1c76;
case 0x6f1c77:c.instructions+=23;goto B6f1c77;
case 0x6f1c7b:c.instructions+=22;goto B6f1c7b;
case 0x6f1c7e:c.instructions+=21;goto B6f1c7e;
case 0x6f1c80:c.instructions+=20;goto B6f1c80;
case 0x6f1c84:c.instructions+=19;goto B6f1c84;
case 0x6f1c87:c.instructions+=18;goto B6f1c87;
case 0x6f1c8b:c.instructions+=17;goto B6f1c8b;
case 0x6f1c8d:c.instructions+=16;goto B6f1c8d;
case 0x6f1c91:c.instructions+=15;goto B6f1c91;
case 0x6f1c93:c.instructions+=14;goto B6f1c93;
case 0x6f1c96:c.instructions+=13;goto B6f1c96;
case 0x6f1c9a:c.instructions+=12;goto B6f1c9a;
case 0x6f1c9c:c.instructions+=11;goto B6f1c9c;
case 0x6f1ca0:c.instructions+=10;goto B6f1ca0;
case 0x6f1ca2:c.instructions+=9;goto B6f1ca2;
case 0x6f1ca6:c.instructions+=8;goto B6f1ca6;
case 0x6f1ca8:c.instructions+=7;goto B6f1ca8;
case 0x6f1caa:c.instructions+=6;goto B6f1caa;
case 0x6f1cae:c.instructions+=5;goto B6f1cae;
case 0x6f1cb2:c.instructions+=4;goto B6f1cb2;
case 0x6f1cb6:c.instructions+=3;goto B6f1cb6;
case 0x6f1cba:c.instructions+=2;goto B6f1cba;
case 0x6f1cbe:c.instructions+=1;goto B6f1cbe;
case 0x6f1cc4:goto L6f1cc4;
case 0x6f1cc9:goto L6f1cc9;
case 0x6f1ccd:c.instructions+=4;goto B6f1ccd;
case 0x6f1ccf:c.instructions+=3;goto B6f1ccf;
case 0x6f1cd2:c.instructions+=2;goto B6f1cd2;
case 0x6f1cd6:c.instructions+=1;goto B6f1cd6;
case 0x6f1cdc:goto L6f1cdc;
case 0x6f1ce4:c.instructions+=2;goto B6f1ce4;
case 0x6f1ce7:c.instructions+=1;goto B6f1ce7;
case 0x6f1cea:goto L6f1cea;
case 0x6f1ced:c.instructions+=74;goto B6f1ced;
case 0x6f1cf1:c.instructions+=73;goto B6f1cf1;
case 0x6f1cf5:c.instructions+=72;goto B6f1cf5;
case 0x6f1cf8:c.instructions+=71;goto B6f1cf8;
case 0x6f1cfe:c.instructions+=70;goto B6f1cfe;
case 0x6f1d02:c.instructions+=69;goto B6f1d02;
case 0x6f1d05:c.instructions+=68;goto B6f1d05;
case 0x6f1d0b:c.instructions+=67;goto B6f1d0b;
case 0x6f1d0e:c.instructions+=66;goto B6f1d0e;
case 0x6f1d12:c.instructions+=65;goto B6f1d12;
case 0x6f1d16:c.instructions+=64;goto B6f1d16;
case 0x6f1d1a:c.instructions+=63;goto B6f1d1a;
case 0x6f1d20:c.instructions+=62;goto B6f1d20;
case 0x6f1d24:c.instructions+=61;goto B6f1d24;
case 0x6f1d28:c.instructions+=60;goto B6f1d28;
case 0x6f1d2c:c.instructions+=59;goto B6f1d2c;
case 0x6f1d30:c.instructions+=58;goto B6f1d30;
case 0x6f1d33:c.instructions+=57;goto B6f1d33;
case 0x6f1d37:c.instructions+=56;goto B6f1d37;
case 0x6f1d3b:c.instructions+=55;goto B6f1d3b;
case 0x6f1d3f:c.instructions+=54;goto B6f1d3f;
case 0x6f1d43:c.instructions+=53;goto B6f1d43;
case 0x6f1d47:c.instructions+=52;goto B6f1d47;
case 0x6f1d4a:c.instructions+=51;goto B6f1d4a;
case 0x6f1d4d:c.instructions+=50;goto B6f1d4d;
case 0x6f1d51:c.instructions+=49;goto B6f1d51;
case 0x6f1d55:c.instructions+=48;goto B6f1d55;
case 0x6f1d59:c.instructions+=47;goto B6f1d59;
case 0x6f1d5c:c.instructions+=46;goto B6f1d5c;
case 0x6f1d60:c.instructions+=45;goto B6f1d60;
case 0x6f1d64:c.instructions+=44;goto B6f1d64;
case 0x6f1d68:c.instructions+=43;goto B6f1d68;
case 0x6f1d6c:c.instructions+=42;goto B6f1d6c;
case 0x6f1d6f:c.instructions+=41;goto B6f1d6f;
case 0x6f1d73:c.instructions+=40;goto B6f1d73;
case 0x6f1d77:c.instructions+=39;goto B6f1d77;
case 0x6f1d7b:c.instructions+=38;goto B6f1d7b;
case 0x6f1d7f:c.instructions+=37;goto B6f1d7f;
case 0x6f1d83:c.instructions+=36;goto B6f1d83;
case 0x6f1d86:c.instructions+=35;goto B6f1d86;
case 0x6f1d89:c.instructions+=34;goto B6f1d89;
case 0x6f1d8d:c.instructions+=33;goto B6f1d8d;
case 0x6f1d91:c.instructions+=32;goto B6f1d91;
case 0x6f1d95:c.instructions+=31;goto B6f1d95;
case 0x6f1d98:c.instructions+=30;goto B6f1d98;
case 0x6f1d9c:c.instructions+=29;goto B6f1d9c;
case 0x6f1da0:c.instructions+=28;goto B6f1da0;
case 0x6f1da4:c.instructions+=27;goto B6f1da4;
case 0x6f1da8:c.instructions+=26;goto B6f1da8;
case 0x6f1dab:c.instructions+=25;goto B6f1dab;
case 0x6f1daf:c.instructions+=24;goto B6f1daf;
case 0x6f1db3:c.instructions+=23;goto B6f1db3;
case 0x6f1db7:c.instructions+=22;goto B6f1db7;
case 0x6f1dbb:c.instructions+=21;goto B6f1dbb;
case 0x6f1dbf:c.instructions+=20;goto B6f1dbf;
case 0x6f1dc2:c.instructions+=19;goto B6f1dc2;
case 0x6f1dc5:c.instructions+=18;goto B6f1dc5;
case 0x6f1dc9:c.instructions+=17;goto B6f1dc9;
case 0x6f1dcd:c.instructions+=16;goto B6f1dcd;
case 0x6f1dd1:c.instructions+=15;goto B6f1dd1;
case 0x6f1dd4:c.instructions+=14;goto B6f1dd4;
case 0x6f1dd8:c.instructions+=13;goto B6f1dd8;
case 0x6f1ddc:c.instructions+=12;goto B6f1ddc;
case 0x6f1de0:c.instructions+=11;goto B6f1de0;
case 0x6f1de4:c.instructions+=10;goto B6f1de4;
case 0x6f1de7:c.instructions+=9;goto B6f1de7;
case 0x6f1deb:c.instructions+=8;goto B6f1deb;
case 0x6f1def:c.instructions+=7;goto B6f1def;
case 0x6f1df2:c.instructions+=6;goto B6f1df2;
case 0x6f1df6:c.instructions+=5;goto B6f1df6;
case 0x6f1dfa:c.instructions+=4;goto B6f1dfa;
case 0x6f1dfd:c.instructions+=3;goto B6f1dfd;
case 0x6f1dff:c.instructions+=2;goto B6f1dff;
case 0x6f1e03:c.instructions+=1;goto B6f1e03;
case 0x6f1e09:goto L6f1e09;
case 0x6f1e0d:c.instructions+=1;goto B6f1e0d;
case 0x6f1e11:goto L6f1e11;
case 0x6f1e13:c.instructions+=1;goto B6f1e13;
case 0x6f1e15:goto L6f1e15;
case 0x6f1e17:c.instructions+=3;goto B6f1e17;
case 0x6f1e1a:c.instructions+=2;goto B6f1e1a;
case 0x6f1e1e:c.instructions+=1;goto B6f1e1e;
case 0x6f1e20:goto L6f1e20;
case 0x6f1e24:goto L6f1e24;
case 0x6f1e27:c.instructions+=20;goto B6f1e27;
case 0x6f1e2b:c.instructions+=19;goto B6f1e2b;
case 0x6f1e2f:c.instructions+=18;goto B6f1e2f;
case 0x6f1e32:c.instructions+=17;goto B6f1e32;
case 0x6f1e33:c.instructions+=16;goto B6f1e33;
case 0x6f1e37:c.instructions+=15;goto B6f1e37;
case 0x6f1e3a:c.instructions+=14;goto B6f1e3a;
case 0x6f1e3c:c.instructions+=13;goto B6f1e3c;
case 0x6f1e3f:c.instructions+=12;goto B6f1e3f;
case 0x6f1e42:c.instructions+=11;goto B6f1e42;
case 0x6f1e46:c.instructions+=10;goto B6f1e46;
case 0x6f1e4a:c.instructions+=9;goto B6f1e4a;
case 0x6f1e4e:c.instructions+=8;goto B6f1e4e;
case 0x6f1e51:c.instructions+=7;goto B6f1e51;
case 0x6f1e55:c.instructions+=6;goto B6f1e55;
case 0x6f1e59:c.instructions+=5;goto B6f1e59;
case 0x6f1e5d:c.instructions+=4;goto B6f1e5d;
case 0x6f1e61:c.instructions+=3;goto B6f1e61;
case 0x6f1e64:c.instructions+=2;goto B6f1e64;
case 0x6f1e68:c.instructions+=1;goto B6f1e68;
case 0x6f1e6a:goto L6f1e6a;
case 0x6f1e6e:goto L6f1e6e;
case 0x6f1e71:c.instructions+=2;goto B6f1e71;
case 0x6f1e73:c.instructions+=1;goto B6f1e73;
case 0x6f1e75:goto L6f1e75;
case 0x6f1e79:c.instructions+=11;goto B6f1e79;
case 0x6f1e7c:c.instructions+=10;goto B6f1e7c;
case 0x6f1e7f:c.instructions+=9;goto B6f1e7f;
case 0x6f1e83:c.instructions+=8;goto B6f1e83;
case 0x6f1e86:c.instructions+=7;goto B6f1e86;
case 0x6f1e8a:c.instructions+=6;goto B6f1e8a;
case 0x6f1e8d:c.instructions+=5;goto B6f1e8d;
case 0x6f1e91:c.instructions+=4;goto B6f1e91;
case 0x6f1e94:c.instructions+=3;goto B6f1e94;
case 0x6f1e96:c.instructions+=2;goto B6f1e96;
case 0x6f1e98:c.instructions+=1;goto B6f1e98;
case 0x6f1e9a:goto L6f1e9a;
case 0x6f1e9d:c.instructions+=1;goto B6f1e9d;
case 0x6f1ea0:goto L6f1ea0;
case 0x6f1ea5:c.instructions+=11;goto B6f1ea5;
case 0x6f1ea8:c.instructions+=10;goto B6f1ea8;
case 0x6f1eab:c.instructions+=9;goto B6f1eab;
case 0x6f1eae:c.instructions+=8;goto B6f1eae;
case 0x6f1eb2:c.instructions+=7;goto B6f1eb2;
case 0x6f1eb4:c.instructions+=6;goto B6f1eb4;
case 0x6f1eb8:c.instructions+=5;goto B6f1eb8;
case 0x6f1ebc:c.instructions+=4;goto B6f1ebc;
case 0x6f1ebd:c.instructions+=3;goto B6f1ebd;
case 0x6f1ec0:c.instructions+=2;goto B6f1ec0;
case 0x6f1ec2:c.instructions+=1;goto B6f1ec2;
case 0x6f1ec4:goto L6f1ec4;
case 0x6f1ec5:c.instructions+=6;goto B6f1ec5;
case 0x6f1ec6:c.instructions+=5;goto B6f1ec6;
case 0x6f1ec7:c.instructions+=4;goto B6f1ec7;
case 0x6f1ec9:c.instructions+=3;goto B6f1ec9;
case 0x6f1eca:c.instructions+=2;goto B6f1eca;
case 0x6f1ecd:c.instructions+=1;goto B6f1ecd;
case 0x6f1ed0:goto L6f1ed0;
case 0x6f1ed4:c.instructions+=10;goto B6f1ed4;
case 0x6f1ed5:c.instructions+=9;goto B6f1ed5;
case 0x6f1ed9:c.instructions+=8;goto B6f1ed9;
case 0x6f1eda:c.instructions+=7;goto B6f1eda;
case 0x6f1edb:c.instructions+=6;goto B6f1edb;
case 0x6f1edf:c.instructions+=5;goto B6f1edf;
case 0x6f1ee0:c.instructions+=4;goto B6f1ee0;
case 0x6f1ee4:c.instructions+=3;goto B6f1ee4;
case 0x6f1ee5:c.instructions+=2;goto B6f1ee5;
case 0x6f1ee6:c.instructions+=1;goto B6f1ee6;
case 0x6f1eeb:goto L6f1eeb;
case 0x6f1eec:c.instructions+=2;goto B6f1eec;
case 0x6f1eef:c.instructions+=1;goto B6f1eef;
case 0x6f1f00:goto L6f1f00;
case 0x6f1f01:c.instructions+=5;goto B6f1f01;
case 0x6f1f04:c.instructions+=4;goto B6f1f04;
case 0x6f1f05:c.instructions+=3;goto B6f1f05;
case 0x6f1f09:c.instructions+=2;goto B6f1f09;
case 0x6f1f0a:c.instructions+=1;goto B6f1f0a;
case 0x6f1f0c:goto L6f1f0c;
case 0x6f1f0d:c.instructions+=4;goto B6f1f0d;
case 0x6f1f11:c.instructions+=3;goto B6f1f11;
case 0x6f1f12:c.instructions+=2;goto B6f1f12;
case 0x6f1f16:c.instructions+=1;goto B6f1f16;
case 0x6f1f20:goto L6f1f20;
case 0x6f1f23:c.instructions+=15;goto B6f1f23;
case 0x6f1f27:c.instructions+=14;goto B6f1f27;
case 0x6f1f2c:c.instructions+=13;goto B6f1f2c;
case 0x6f1f2e:c.instructions+=12;goto B6f1f2e;
case 0x6f1f30:c.instructions+=11;goto B6f1f30;
case 0x6f1f32:c.instructions+=10;goto B6f1f32;
case 0x6f1f35:c.instructions+=9;goto B6f1f35;
case 0x6f1f37:c.instructions+=8;goto B6f1f37;
case 0x6f1f39:c.instructions+=7;goto B6f1f39;
case 0x6f1f3c:c.instructions+=6;goto B6f1f3c;
case 0x6f1f41:c.instructions+=5;goto B6f1f41;
case 0x6f1f43:c.instructions+=4;goto B6f1f43;
case 0x6f1f45:c.instructions+=3;goto B6f1f45;
case 0x6f1f48:c.instructions+=2;goto B6f1f48;
case 0x6f1f4b:c.instructions+=1;goto B6f1f4b;
case 0x6f1f4d:goto L6f1f4d;
case 0x6f1f51:c.instructions+=2;goto B6f1f51;
case 0x6f1f55:c.instructions+=1;goto B6f1f55;
case 0x6f1f57:goto L6f1f57;
case 0x6f1f59:c.instructions+=1;goto B6f1f59;
case 0x6f1f5b:goto L6f1f5b;
case 0x6f1f5d:c.instructions+=1;goto B6f1f5d;
case 0x6f1f5f:goto L6f1f5f;
case 0x6f1f61:goto L6f1f61;
case 0x6f1f65:c.instructions+=2;goto B6f1f65;
case 0x6f1f67:c.instructions+=1;goto B6f1f67;
case 0x6f1f69:goto L6f1f69;
case 0x6f1f6d:c.instructions+=1;goto B6f1f6d;
case 0x6f1f6f:goto L6f1f6f;
case 0x6f1f72:c.instructions+=6;goto B6f1f72;
case 0x6f1f74:c.instructions+=5;goto B6f1f74;
case 0x6f1f75:c.instructions+=4;goto B6f1f75;
case 0x6f1f76:c.instructions+=3;goto B6f1f76;
case 0x6f1f78:c.instructions+=2;goto B6f1f78;
case 0x6f1f7b:c.instructions+=1;goto B6f1f7b;
case 0x6f1f80:goto L6f1f80;
case 0x6f1f81:c.instructions+=1;goto B6f1f81;
case 0x6f1f83:goto L6f1f83;
case 0x6f1f84:c.instructions+=1;goto B6f1f84;
case 0x6f1f85:goto L6f1f85;
case 0x6f1f86:c.instructions+=3;goto B6f1f86;
case 0x6f1f88:c.instructions+=2;goto B6f1f88;
case 0x6f1f89:c.instructions+=1;goto B6f1f89;
case 0x6f1f90:goto L6f1f90;
case 0x6f1f91:c.instructions+=3;goto B6f1f91;
case 0x6f1f93:c.instructions+=2;goto B6f1f93;
case 0x6f1f99:c.instructions+=1;goto B6f1f99;
case 0x6f1f9e:goto L6f1f9e;
case 0x6f1fa3:c.instructions+=1;goto B6f1fa3;
case 0x6f1fa5:goto L6f1fa5;
case 0x6f1fa7:c.instructions+=2;goto B6f1fa7;
case 0x6f1fa8:c.instructions+=1;goto B6f1fa8;
case 0x6f1fae:goto L6f1fae;
case 0x6f1fb1:goto L6f1fb1;
case 0x6f1fb3:c.instructions+=2;goto B6f1fb3;
case 0x6f1fb4:c.instructions+=1;goto B6f1fb4;
case 0x6f1fc0:goto L6f1fc0;
case 0x6f1fc3:c.instructions+=4;goto B6f1fc3;
case 0x6f1fc7:c.instructions+=3;goto B6f1fc7;
case 0x6f1fca:c.instructions+=2;goto B6f1fca;
case 0x6f1fcc:c.instructions+=1;goto B6f1fcc;
case 0x6f1fce:goto L6f1fce;
case 0x6f1fd2:c.instructions+=4;goto B6f1fd2;
case 0x6f1fd6:c.instructions+=3;goto B6f1fd6;
case 0x6f1fda:c.instructions+=2;goto B6f1fda;
case 0x6f1fde:c.instructions+=1;goto B6f1fde;
case 0x6f1fe2:goto L6f1fe2;
case 0x6f1fe6:c.instructions+=10;goto B6f1fe6;
case 0x6f1fe9:c.instructions+=9;goto B6f1fe9;
case 0x6f1fef:c.instructions+=8;goto B6f1fef;
case 0x6f1ff0:c.instructions+=7;goto B6f1ff0;
case 0x6f1ff4:c.instructions+=6;goto B6f1ff4;
case 0x6f1ff5:c.instructions+=5;goto B6f1ff5;
case 0x6f1ff6:c.instructions+=4;goto B6f1ff6;
case 0x6f1ff7:c.instructions+=3;goto B6f1ff7;
case 0x6f1ff9:c.instructions+=2;goto B6f1ff9;
case 0x6f1ffd:c.instructions+=1;goto B6f1ffd;
default:missing_instruction(c.pc);}
B6f1001:L6f1001:{c.instructions+=3;NFSU2_TR(0x6f1001);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B6f1002:{NFSU2_TR(0x6f1002);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f1006:{NFSU2_TR(0x6f1006);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f0fd4u,6f0);}
}
B6f1008:L6f1008:{c.instructions+=7;NFSU2_TR(0x6f1008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f1009:{NFSU2_TR(0x6f1009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f100a:{NFSU2_TR(0x6f100a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f100b:{NFSU2_TR(0x6f100b);
w1(R+0,u8(0x1ull));
}
B6f100d:{NFSU2_TR(0x6f100d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f100e:{NFSU2_TR(0x6f100e);
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
B6f1011:{NFSU2_TR(0x6f1011);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1020:L6f1020:{c.instructions+=3;NFSU2_TR(0x6f1020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1021:{NFSU2_TR(0x6f1021);
__builtin_memmove((R+24),(R+4),4);
}
B6f1023:{NFSU2_TR(0x6f1023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f1028ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6f1028:L6f1028:{c.instructions+=5;NFSU2_TR(0x6f1028);
u8 U[4];
w4(U+0,u32(0x7c21e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f102e:{NFSU2_TR(0x6f102e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f1035:{NFSU2_TR(0x6f1035);
__builtin_memmove((R+0),(R+24),4);
}
B6f1037:{NFSU2_TR(0x6f1037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f1038:{NFSU2_TR(0x6f1038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1040:L6f1040:{c.instructions+=2;NFSU2_TR(0x6f1040);
u8 U[4];
w4(U+0,u32(0x7c21e0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6f1046:{NFSU2_TR(0x6f1046);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6f1050:L6f1050:{c.instructions+=5;NFSU2_TR(0x6f1050);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1051:{NFSU2_TR(0x6f1051);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1054:{NFSU2_TR(0x6f1054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1057:{NFSU2_TR(0x6f1057);
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
B6f1059:{NFSU2_TR(0x6f1059);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f1061;}}
}
B6f105b:L6f105b:{c.instructions+=2;NFSU2_TR(0x6f105b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6f105f:{NFSU2_TR(0x6f105f);
{goto L6f106c;}
}
B6f1061:L6f1061:{c.instructions+=3;NFSU2_TR(0x6f1061);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f1065:{NFSU2_TR(0x6f1065);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B6f106a:{NFSU2_TR(0x6f106a);
u8 U[4];
w1(R+523,scarry<u16>(r2(R+0),u16(0x1ull)));
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6f106c:L6f106c:{c.instructions+=8;NFSU2_TR(0x6f106c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1070:{NFSU2_TR(0x6f1070);
w4(R+4,u32(r2(R+0)));
}
B6f1073:{NFSU2_TR(0x6f1073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6f1077:{NFSU2_TR(0x6f1077);
w1(R+0,u8(0x1ull));
}
B6f1079:{NFSU2_TR(0x6f1079);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f107d:{NFSU2_TR(0x6f107d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f107f:{NFSU2_TR(0x6f107f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f1080:{NFSU2_TR(0x6f1080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1090:L6f1090:{c.instructions+=5;NFSU2_TR(0x6f1090);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1094:{NFSU2_TR(0x6f1094);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1097:{NFSU2_TR(0x6f1097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb0ull))));
}
B6f109d:{NFSU2_TR(0x6f109d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f109f:{NFSU2_TR(0x6f109f);
if(r1(R+518)){{goto L6f10a4;}}
}
B6f10a1:L6f10a1:{c.instructions+=1;NFSU2_TR(0x6f10a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f10a4:L6f10a4:{c.instructions+=21;NFSU2_TR(0x6f10a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f10a5:{NFSU2_TR(0x6f10a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f10a6:{NFSU2_TR(0x6f10a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f10a9:{NFSU2_TR(0x6f10a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f10ad:{NFSU2_TR(0x6f10ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f10b0:{NFSU2_TR(0x6f10b0);
__builtin_memmove((R+0),(R+12),4);
}
B6f10b2:{NFSU2_TR(0x6f10b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f10b5:{NFSU2_TR(0x6f10b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f10b9:{NFSU2_TR(0x6f10b9);
__builtin_memmove((R+0),(R+12),4);
}
B6f10bb:{NFSU2_TR(0x6f10bb);
u8 U[32];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6f10c3:{NFSU2_TR(0x6f10c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f10c4:{NFSU2_TR(0x6f10c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f10c5:{NFSU2_TR(0x6f10c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f10c8:{NFSU2_TR(0x6f10c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f10ca:{NFSU2_TR(0x6f10ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f10cc:{NFSU2_TR(0x6f10cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f10d0:{NFSU2_TR(0x6f10d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f10d4:{NFSU2_TR(0x6f10d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f10d8:{NFSU2_TR(0x6f10d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f10dc:{NFSU2_TR(0x6f10dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f10df:{NFSU2_TR(0x6f10df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f10fc;}}
}
B6f10e1:L6f10e1:{c.instructions+=9;NFSU2_TR(0x6f10e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f10e5:{NFSU2_TR(0x6f10e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6f10e9:{NFSU2_TR(0x6f10e9);
w4(R+0,u32(0xaaaaaaabull));
}
B6f10ee:{NFSU2_TR(0x6f10ee);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6f10f0:{NFSU2_TR(0x6f10f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6f10f3:{NFSU2_TR(0x6f10f3);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6f10f7:{NFSU2_TR(0x6f10f7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f10f8:{NFSU2_TR(0x6f10f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f10fa:{NFSU2_TR(0x6f10fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f10e1u);}goto L6f10e1;}}
}
B6f10fc:L6f10fc:{c.instructions+=4;NFSU2_TR(0x6f10fc);
u8 U[5];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f1103:{NFSU2_TR(0x6f1103);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f1105:{NFSU2_TR(0x6f1105);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f110c:{NFSU2_TR(0x6f110c);
if(r1(R+518)){{goto L6f15d9;}}
}
B6f1112:L6f1112:{c.instructions+=9;NFSU2_TR(0x6f1112);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1119:{NFSU2_TR(0x6f1119);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f111a:{NFSU2_TR(0x6f111a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f111d:{NFSU2_TR(0x6f111d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f1120:{NFSU2_TR(0x6f1120);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6f1123:{NFSU2_TR(0x6f1123);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f1125:{NFSU2_TR(0x6f1125);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1128:{NFSU2_TR(0x6f1128);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f112c:{NFSU2_TR(0x6f112c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f14d5;}}
}
B6f1132:L6f1132:{c.instructions+=8;NFSU2_TR(0x6f1132);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1136:{NFSU2_TR(0x6f1136);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f1139:{NFSU2_TR(0x6f1139);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f113d:{NFSU2_TR(0x6f113d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f1140:{NFSU2_TR(0x6f1140);
w4(R+12,u32(0x3ull));
}
B6f1145:{NFSU2_TR(0x6f1145);
u8 U[4];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B6f1149:{NFSU2_TR(0x6f1149);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+20))));
}
B6f114b:{NFSU2_TR(0x6f114b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f114f:L6f114f:{c.instructions+=9;NFSU2_TR(0x6f114f);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f1154:{NFSU2_TR(0x6f1154);
__builtin_memmove((R+4),(R+12),4);
}
B6f1156:{NFSU2_TR(0x6f1156);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f1159:{NFSU2_TR(0x6f1159);
w4(R+20,u32(0x1ull));
}
B6f115e:{NFSU2_TR(0x6f115e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f1160:{NFSU2_TR(0x6f1160);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1167:{NFSU2_TR(0x6f1167);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f116a:{NFSU2_TR(0x6f116a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f116d:{NFSU2_TR(0x6f116d);
if(r1(R+518)){{goto L6f1221;}}
}
B6f1173:L6f1173:{c.instructions+=47;NFSU2_TR(0x6f1173);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f1176:{NFSU2_TR(0x6f1176);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f117a:{NFSU2_TR(0x6f117a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f117e:{NFSU2_TR(0x6f117e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1182:{NFSU2_TR(0x6f1182);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1186:{NFSU2_TR(0x6f1186);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f118a:{NFSU2_TR(0x6f118a);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f118d:{NFSU2_TR(0x6f118d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1191:{NFSU2_TR(0x6f1191);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1195:{NFSU2_TR(0x6f1195);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f1198:{NFSU2_TR(0x6f1198);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f119b:{NFSU2_TR(0x6f119b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f119f:{NFSU2_TR(0x6f119f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f11a3:{NFSU2_TR(0x6f11a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f11a7:{NFSU2_TR(0x6f11a7);
{u32 ea_=u32(r4(R+0)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f11aa:{NFSU2_TR(0x6f11aa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f11ad:{NFSU2_TR(0x6f11ad);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f11b1:{NFSU2_TR(0x6f11b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6f11b4:{NFSU2_TR(0x6f11b4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f11b8:{NFSU2_TR(0x6f11b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f11bc:{NFSU2_TR(0x6f11bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f11c0:{NFSU2_TR(0x6f11c0);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f11c3:{NFSU2_TR(0x6f11c3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f11c7:{NFSU2_TR(0x6f11c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f11cb:{NFSU2_TR(0x6f11cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f11cf:{NFSU2_TR(0x6f11cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f11d3:{NFSU2_TR(0x6f11d3);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f11d6:{NFSU2_TR(0x6f11d6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f11da:{NFSU2_TR(0x6f11da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f11de:{NFSU2_TR(0x6f11de);
{u32 ea_=u32(r4(R+0)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f11e1:{NFSU2_TR(0x6f11e1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f11e5:{NFSU2_TR(0x6f11e5);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f11e7:{NFSU2_TR(0x6f11e7);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f11ee:{NFSU2_TR(0x6f11ee);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f11f0:{NFSU2_TR(0x6f11f0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f11f3:{NFSU2_TR(0x6f11f3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f11f7:{NFSU2_TR(0x6f11f7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f11f9:{NFSU2_TR(0x6f11f9);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1200:{NFSU2_TR(0x6f1200);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f1202:{NFSU2_TR(0x6f1202);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1206:{NFSU2_TR(0x6f1206);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1208:{NFSU2_TR(0x6f1208);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f120a:{NFSU2_TR(0x6f120a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f120e:{NFSU2_TR(0x6f120e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f1212:{NFSU2_TR(0x6f1212);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1219:{NFSU2_TR(0x6f1219);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f121d:{NFSU2_TR(0x6f121d);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1221:L6f1221:{c.instructions+=10;NFSU2_TR(0x6f1221);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1225:{NFSU2_TR(0x6f1225);
u8 U[13];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f122a:{NFSU2_TR(0x6f122a);
__builtin_memmove((R+4),(R+12),4);
}
B6f122c:{NFSU2_TR(0x6f122c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f122f:{NFSU2_TR(0x6f122f);
w4(R+20,u32(0x1ull));
}
B6f1234:{NFSU2_TR(0x6f1234);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f1236:{NFSU2_TR(0x6f1236);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f123d:{NFSU2_TR(0x6f123d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f1240:{NFSU2_TR(0x6f1240);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f1243:{NFSU2_TR(0x6f1243);
if(r1(R+518)){{goto L6f12f5;}}
}
B6f1249:L6f1249:{c.instructions+=47;NFSU2_TR(0x6f1249);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f124c:{NFSU2_TR(0x6f124c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1250:{NFSU2_TR(0x6f1250);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1254:{NFSU2_TR(0x6f1254);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1258:{NFSU2_TR(0x6f1258);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f125c:{NFSU2_TR(0x6f125c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1260:{NFSU2_TR(0x6f1260);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1263:{NFSU2_TR(0x6f1263);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1267:{NFSU2_TR(0x6f1267);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f126b:{NFSU2_TR(0x6f126b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f126e:{NFSU2_TR(0x6f126e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1270:{NFSU2_TR(0x6f1270);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1274:{NFSU2_TR(0x6f1274);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1278:{NFSU2_TR(0x6f1278);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f127c:{NFSU2_TR(0x6f127c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f127f:{NFSU2_TR(0x6f127f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1282:{NFSU2_TR(0x6f1282);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1286:{NFSU2_TR(0x6f1286);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6f1289:{NFSU2_TR(0x6f1289);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f128d:{NFSU2_TR(0x6f128d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1291:{NFSU2_TR(0x6f1291);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1295:{NFSU2_TR(0x6f1295);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1298:{NFSU2_TR(0x6f1298);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f129c:{NFSU2_TR(0x6f129c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f12a0:{NFSU2_TR(0x6f12a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f12a4:{NFSU2_TR(0x6f12a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f12a8:{NFSU2_TR(0x6f12a8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f12aa:{NFSU2_TR(0x6f12aa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f12ae:{NFSU2_TR(0x6f12ae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f12b2:{NFSU2_TR(0x6f12b2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f12b5:{NFSU2_TR(0x6f12b5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f12b9:{NFSU2_TR(0x6f12b9);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f12bb:{NFSU2_TR(0x6f12bb);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f12c2:{NFSU2_TR(0x6f12c2);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f12c4:{NFSU2_TR(0x6f12c4);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f12c7:{NFSU2_TR(0x6f12c7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f12cb:{NFSU2_TR(0x6f12cb);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f12cd:{NFSU2_TR(0x6f12cd);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f12d4:{NFSU2_TR(0x6f12d4);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f12d6:{NFSU2_TR(0x6f12d6);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f12da:{NFSU2_TR(0x6f12da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f12dc:{NFSU2_TR(0x6f12dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f12de:{NFSU2_TR(0x6f12de);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f12e2:{NFSU2_TR(0x6f12e2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f12e6:{NFSU2_TR(0x6f12e6);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f12ed:{NFSU2_TR(0x6f12ed);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f12f1:{NFSU2_TR(0x6f12f1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f12f5:L6f12f5:{c.instructions+=10;NFSU2_TR(0x6f12f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f12f9:{NFSU2_TR(0x6f12f9);
u8 U[13];
w4(U+0,u32(u32(u32(0x4aull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f12fe:{NFSU2_TR(0x6f12fe);
__builtin_memmove((R+4),(R+12),4);
}
B6f1300:{NFSU2_TR(0x6f1300);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f1303:{NFSU2_TR(0x6f1303);
w4(R+20,u32(0x1ull));
}
B6f1308:{NFSU2_TR(0x6f1308);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f130a:{NFSU2_TR(0x6f130a);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1311:{NFSU2_TR(0x6f1311);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f1314:{NFSU2_TR(0x6f1314);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f1317:{NFSU2_TR(0x6f1317);
if(r1(R+518)){{goto L6f13ca;}}
}
B6f131d:L6f131d:{c.instructions+=47;NFSU2_TR(0x6f131d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f1320:{NFSU2_TR(0x6f1320);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1324:{NFSU2_TR(0x6f1324);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1328:{NFSU2_TR(0x6f1328);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f132c:{NFSU2_TR(0x6f132c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1330:{NFSU2_TR(0x6f1330);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1334:{NFSU2_TR(0x6f1334);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1337:{NFSU2_TR(0x6f1337);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f133b:{NFSU2_TR(0x6f133b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f133f:{NFSU2_TR(0x6f133f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f1342:{NFSU2_TR(0x6f1342);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1345:{NFSU2_TR(0x6f1345);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1349:{NFSU2_TR(0x6f1349);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f134d:{NFSU2_TR(0x6f134d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1351:{NFSU2_TR(0x6f1351);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1354:{NFSU2_TR(0x6f1354);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1357:{NFSU2_TR(0x6f1357);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f135b:{NFSU2_TR(0x6f135b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6f135e:{NFSU2_TR(0x6f135e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1362:{NFSU2_TR(0x6f1362);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1366:{NFSU2_TR(0x6f1366);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f136a:{NFSU2_TR(0x6f136a);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f136d:{NFSU2_TR(0x6f136d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1371:{NFSU2_TR(0x6f1371);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1375:{NFSU2_TR(0x6f1375);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1379:{NFSU2_TR(0x6f1379);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B6f137c:{NFSU2_TR(0x6f137c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f137f:{NFSU2_TR(0x6f137f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1383:{NFSU2_TR(0x6f1383);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1387:{NFSU2_TR(0x6f1387);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f138a:{NFSU2_TR(0x6f138a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f138e:{NFSU2_TR(0x6f138e);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1390:{NFSU2_TR(0x6f1390);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1397:{NFSU2_TR(0x6f1397);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f1399:{NFSU2_TR(0x6f1399);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f139c:{NFSU2_TR(0x6f139c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f13a0:{NFSU2_TR(0x6f13a0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f13a2:{NFSU2_TR(0x6f13a2);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f13a9:{NFSU2_TR(0x6f13a9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f13ab:{NFSU2_TR(0x6f13ab);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f13af:{NFSU2_TR(0x6f13af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f13b1:{NFSU2_TR(0x6f13b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f13b3:{NFSU2_TR(0x6f13b3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f13b7:{NFSU2_TR(0x6f13b7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f13bb:{NFSU2_TR(0x6f13bb);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f13c2:{NFSU2_TR(0x6f13c2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f13c6:{NFSU2_TR(0x6f13c6);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f13ca:L6f13ca:{c.instructions+=10;NFSU2_TR(0x6f13ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f13ce:{NFSU2_TR(0x6f13ce);
u8 U[13];
w4(U+0,u32(u32(u32(0x4bull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f13d3:{NFSU2_TR(0x6f13d3);
__builtin_memmove((R+4),(R+12),4);
}
B6f13d5:{NFSU2_TR(0x6f13d5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f13d8:{NFSU2_TR(0x6f13d8);
w4(R+20,u32(0x1ull));
}
B6f13dd:{NFSU2_TR(0x6f13dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f13df:{NFSU2_TR(0x6f13df);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f13e6:{NFSU2_TR(0x6f13e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f13e9:{NFSU2_TR(0x6f13e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f13ec:{NFSU2_TR(0x6f13ec);
if(r1(R+518)){{goto L6f14a0;}}
}
B6f13f2:L6f13f2:{c.instructions+=47;NFSU2_TR(0x6f13f2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f13f5:{NFSU2_TR(0x6f13f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f13f9:{NFSU2_TR(0x6f13f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f13fd:{NFSU2_TR(0x6f13fd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1401:{NFSU2_TR(0x6f1401);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1405:{NFSU2_TR(0x6f1405);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1409:{NFSU2_TR(0x6f1409);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f140c:{NFSU2_TR(0x6f140c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1410:{NFSU2_TR(0x6f1410);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1414:{NFSU2_TR(0x6f1414);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f1417:{NFSU2_TR(0x6f1417);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f141a:{NFSU2_TR(0x6f141a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f141e:{NFSU2_TR(0x6f141e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1422:{NFSU2_TR(0x6f1422);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1426:{NFSU2_TR(0x6f1426);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1429:{NFSU2_TR(0x6f1429);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f142c:{NFSU2_TR(0x6f142c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1430:{NFSU2_TR(0x6f1430);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6f1433:{NFSU2_TR(0x6f1433);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1437:{NFSU2_TR(0x6f1437);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f143b:{NFSU2_TR(0x6f143b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f143f:{NFSU2_TR(0x6f143f);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1442:{NFSU2_TR(0x6f1442);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1446:{NFSU2_TR(0x6f1446);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f144a:{NFSU2_TR(0x6f144a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f144e:{NFSU2_TR(0x6f144e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f1452:{NFSU2_TR(0x6f1452);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1455:{NFSU2_TR(0x6f1455);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1459:{NFSU2_TR(0x6f1459);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f145d:{NFSU2_TR(0x6f145d);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1460:{NFSU2_TR(0x6f1460);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1464:{NFSU2_TR(0x6f1464);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1466:{NFSU2_TR(0x6f1466);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f146d:{NFSU2_TR(0x6f146d);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f146f:{NFSU2_TR(0x6f146f);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1472:{NFSU2_TR(0x6f1472);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1476:{NFSU2_TR(0x6f1476);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f1478:{NFSU2_TR(0x6f1478);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f147f:{NFSU2_TR(0x6f147f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f1481:{NFSU2_TR(0x6f1481);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1485:{NFSU2_TR(0x6f1485);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1487:{NFSU2_TR(0x6f1487);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1489:{NFSU2_TR(0x6f1489);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f148d:{NFSU2_TR(0x6f148d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f1491:{NFSU2_TR(0x6f1491);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1498:{NFSU2_TR(0x6f1498);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f149c:{NFSU2_TR(0x6f149c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f14a0:L6f14a0:{c.instructions+=13;NFSU2_TR(0x6f14a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f14a4:{NFSU2_TR(0x6f14a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f14a8:{NFSU2_TR(0x6f14a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B6f14ab:{NFSU2_TR(0x6f14ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f14af:{NFSU2_TR(0x6f14af);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f14b3:{NFSU2_TR(0x6f14b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6f14b6:{NFSU2_TR(0x6f14b6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6f14b8:{NFSU2_TR(0x6f14b8);
u8 U[12];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6f14bc:{NFSU2_TR(0x6f14bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f14c0:{NFSU2_TR(0x6f14c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B6f14c5:{NFSU2_TR(0x6f14c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f14c7:{NFSU2_TR(0x6f14c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f14cb:{NFSU2_TR(0x6f14cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f114fu);}goto L6f114f;}}
}
B6f14d1:L6f14d1:{c.instructions+=1;NFSU2_TR(0x6f14d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f14d5:L6f14d5:{c.instructions+=2;NFSU2_TR(0x6f14d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f14d7:{NFSU2_TR(0x6f14d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f184b;}}
}
B6f14dd:L6f14dd:{c.instructions+=3;NFSU2_TR(0x6f14dd);
__builtin_memmove((R+0),(R+4),4);
}
B6f14df:{NFSU2_TR(0x6f14df);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f14e2:{NFSU2_TR(0x6f14e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f14e6:L6f14e6:{c.instructions+=9;NFSU2_TR(0x6f14e6);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f14eb:{NFSU2_TR(0x6f14eb);
__builtin_memmove((R+4),(R+12),4);
}
B6f14ed:{NFSU2_TR(0x6f14ed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f14f0:{NFSU2_TR(0x6f14f0);
w4(R+20,u32(0x1ull));
}
B6f14f5:{NFSU2_TR(0x6f14f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f14f7:{NFSU2_TR(0x6f14f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f14fe:{NFSU2_TR(0x6f14fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f1501:{NFSU2_TR(0x6f1501);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f1504:{NFSU2_TR(0x6f1504);
if(r1(R+518)){{goto L6f15bc;}}
}
B6f150a:L6f150a:{c.instructions+=49;NFSU2_TR(0x6f150a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f150d:{NFSU2_TR(0x6f150d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1511:{NFSU2_TR(0x6f1511);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1515:{NFSU2_TR(0x6f1515);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1519:{NFSU2_TR(0x6f1519);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f151d:{NFSU2_TR(0x6f151d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1521:{NFSU2_TR(0x6f1521);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1524:{NFSU2_TR(0x6f1524);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1528:{NFSU2_TR(0x6f1528);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f152c:{NFSU2_TR(0x6f152c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f152f:{NFSU2_TR(0x6f152f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1531:{NFSU2_TR(0x6f1531);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1535:{NFSU2_TR(0x6f1535);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1539:{NFSU2_TR(0x6f1539);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f153d:{NFSU2_TR(0x6f153d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1540:{NFSU2_TR(0x6f1540);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f1544:{NFSU2_TR(0x6f1544);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1548:{NFSU2_TR(0x6f1548);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f154b:{NFSU2_TR(0x6f154b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f154f:{NFSU2_TR(0x6f154f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1553:{NFSU2_TR(0x6f1553);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6f1557:{NFSU2_TR(0x6f1557);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f155a:{NFSU2_TR(0x6f155a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f155e:{NFSU2_TR(0x6f155e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1562:{NFSU2_TR(0x6f1562);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1566:{NFSU2_TR(0x6f1566);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f156a:{NFSU2_TR(0x6f156a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f156c:{NFSU2_TR(0x6f156c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6f156f:{NFSU2_TR(0x6f156f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1573:{NFSU2_TR(0x6f1573);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1577:{NFSU2_TR(0x6f1577);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f157a:{NFSU2_TR(0x6f157a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f157e:{NFSU2_TR(0x6f157e);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1580:{NFSU2_TR(0x6f1580);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1587:{NFSU2_TR(0x6f1587);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f1589:{NFSU2_TR(0x6f1589);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f158c:{NFSU2_TR(0x6f158c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1590:{NFSU2_TR(0x6f1590);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f1592:{NFSU2_TR(0x6f1592);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1599:{NFSU2_TR(0x6f1599);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f159b:{NFSU2_TR(0x6f159b);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f159f:{NFSU2_TR(0x6f159f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f15a1:{NFSU2_TR(0x6f15a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f15a3:{NFSU2_TR(0x6f15a3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f15a7:{NFSU2_TR(0x6f15a7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f15ab:{NFSU2_TR(0x6f15ab);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f15b2:{NFSU2_TR(0x6f15b2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f15b6:{NFSU2_TR(0x6f15b6);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f15ba:{NFSU2_TR(0x6f15ba);
{goto L6f15c0;}
}
B6f15bc:L6f15bc:{c.instructions+=1;NFSU2_TR(0x6f15bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f15c0:L6f15c0:{c.instructions+=6;NFSU2_TR(0x6f15c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f15c4:{NFSU2_TR(0x6f15c4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f15c5:{NFSU2_TR(0x6f15c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6f15c8:{NFSU2_TR(0x6f15c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f15ca:{NFSU2_TR(0x6f15ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f15ce:{NFSU2_TR(0x6f15ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f14e6u);}goto L6f14e6;}}
}
B6f15d4:L6f15d4:{c.instructions+=1;NFSU2_TR(0x6f15d4);
{goto L6f1847;}
}
B6f15d9:L6f15d9:{c.instructions+=3;NFSU2_TR(0x6f15d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f15db:{NFSU2_TR(0x6f15db);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f15de:{NFSU2_TR(0x6f15de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f17b4;}}
}
B6f15e4:L6f15e4:{c.instructions+=8;NFSU2_TR(0x6f15e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f15e8:{NFSU2_TR(0x6f15e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f15eb:{NFSU2_TR(0x6f15eb);
w4(R+4,u32(0x3ull));
}
B6f15f0:{NFSU2_TR(0x6f15f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B6f15f4:{NFSU2_TR(0x6f15f4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6f15f6:{NFSU2_TR(0x6f15f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f15fa:{NFSU2_TR(0x6f15fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f15fd:{NFSU2_TR(0x6f15fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1601:L6f1601:{c.instructions+=9;NFSU2_TR(0x6f1601);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f1606:{NFSU2_TR(0x6f1606);
__builtin_memmove((R+4),(R+12),4);
}
B6f1608:{NFSU2_TR(0x6f1608);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f160b:{NFSU2_TR(0x6f160b);
w4(R+20,u32(0x1ull));
}
B6f1610:{NFSU2_TR(0x6f1610);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f1612:{NFSU2_TR(0x6f1612);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1619:{NFSU2_TR(0x6f1619);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f161c:{NFSU2_TR(0x6f161c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f161f:{NFSU2_TR(0x6f161f);
if(r1(R+518)){{goto L6f1662;}}
}
B6f1621:L6f1621:{c.instructions+=18;NFSU2_TR(0x6f1621);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B6f1624:{NFSU2_TR(0x6f1624);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1628:{NFSU2_TR(0x6f1628);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f162c:{NFSU2_TR(0x6f162c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1630:{NFSU2_TR(0x6f1630);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1633:{NFSU2_TR(0x6f1633);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1637:{NFSU2_TR(0x6f1637);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f163a:{NFSU2_TR(0x6f163a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f163d:{NFSU2_TR(0x6f163d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f1641:{NFSU2_TR(0x6f1641);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1645:{NFSU2_TR(0x6f1645);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1649:{NFSU2_TR(0x6f1649);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f164c:{NFSU2_TR(0x6f164c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1650:{NFSU2_TR(0x6f1650);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f1654:{NFSU2_TR(0x6f1654);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1658:{NFSU2_TR(0x6f1658);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f165c:{NFSU2_TR(0x6f165c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f165e:{NFSU2_TR(0x6f165e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1662:L6f1662:{c.instructions+=9;NFSU2_TR(0x6f1662);
u8 U[13];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f1667:{NFSU2_TR(0x6f1667);
__builtin_memmove((R+4),(R+12),4);
}
B6f1669:{NFSU2_TR(0x6f1669);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f166c:{NFSU2_TR(0x6f166c);
w4(R+20,u32(0x1ull));
}
B6f1671:{NFSU2_TR(0x6f1671);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f1673:{NFSU2_TR(0x6f1673);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f167a:{NFSU2_TR(0x6f167a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f167d:{NFSU2_TR(0x6f167d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f1680:{NFSU2_TR(0x6f1680);
if(r1(R+518)){{goto L6f16c4;}}
}
B6f1682:L6f1682:{c.instructions+=18;NFSU2_TR(0x6f1682);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B6f1685:{NFSU2_TR(0x6f1685);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1689:{NFSU2_TR(0x6f1689);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f168d:{NFSU2_TR(0x6f168d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1691:{NFSU2_TR(0x6f1691);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1694:{NFSU2_TR(0x6f1694);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1698:{NFSU2_TR(0x6f1698);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f169b:{NFSU2_TR(0x6f169b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f169e:{NFSU2_TR(0x6f169e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f16a2:{NFSU2_TR(0x6f16a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f16a6:{NFSU2_TR(0x6f16a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f16aa:{NFSU2_TR(0x6f16aa);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f16ad:{NFSU2_TR(0x6f16ad);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f16b1:{NFSU2_TR(0x6f16b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f16b5:{NFSU2_TR(0x6f16b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f16b9:{NFSU2_TR(0x6f16b9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f16bd:{NFSU2_TR(0x6f16bd);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f16c0:{NFSU2_TR(0x6f16c0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f16c4:L6f16c4:{c.instructions+=9;NFSU2_TR(0x6f16c4);
u8 U[13];
w4(U+0,u32(u32(u32(0x4aull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f16c9:{NFSU2_TR(0x6f16c9);
__builtin_memmove((R+4),(R+12),4);
}
B6f16cb:{NFSU2_TR(0x6f16cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f16ce:{NFSU2_TR(0x6f16ce);
w4(R+20,u32(0x1ull));
}
B6f16d3:{NFSU2_TR(0x6f16d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f16d5:{NFSU2_TR(0x6f16d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f16dc:{NFSU2_TR(0x6f16dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f16df:{NFSU2_TR(0x6f16df);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f16e2:{NFSU2_TR(0x6f16e2);
if(r1(R+518)){{goto L6f1725;}}
}
B6f16e4:L6f16e4:{c.instructions+=18;NFSU2_TR(0x6f16e4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B6f16e7:{NFSU2_TR(0x6f16e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f16eb:{NFSU2_TR(0x6f16eb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(r2(U+0)));
}
B6f16ee:{NFSU2_TR(0x6f16ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f16f2:{NFSU2_TR(0x6f16f2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f16f5:{NFSU2_TR(0x6f16f5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f16f9:{NFSU2_TR(0x6f16f9);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f16fc:{NFSU2_TR(0x6f16fc);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f16ff:{NFSU2_TR(0x6f16ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f1703:{NFSU2_TR(0x6f1703);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1707:{NFSU2_TR(0x6f1707);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f170b:{NFSU2_TR(0x6f170b);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f170e:{NFSU2_TR(0x6f170e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1712:{NFSU2_TR(0x6f1712);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f1716:{NFSU2_TR(0x6f1716);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f171a:{NFSU2_TR(0x6f171a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f171e:{NFSU2_TR(0x6f171e);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1721:{NFSU2_TR(0x6f1721);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1725:L6f1725:{c.instructions+=9;NFSU2_TR(0x6f1725);
u8 U[13];
w4(U+0,u32(u32(u32(0x4bull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B6f172a:{NFSU2_TR(0x6f172a);
__builtin_memmove((R+4),(R+12),4);
}
B6f172c:{NFSU2_TR(0x6f172c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f172f:{NFSU2_TR(0x6f172f);
w4(R+20,u32(0x1ull));
}
B6f1734:{NFSU2_TR(0x6f1734);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f1736:{NFSU2_TR(0x6f1736);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f173d:{NFSU2_TR(0x6f173d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B6f1740:{NFSU2_TR(0x6f1740);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f1743:{NFSU2_TR(0x6f1743);
if(r1(R+518)){{goto L6f1787;}}
}
B6f1745:L6f1745:{c.instructions+=18;NFSU2_TR(0x6f1745);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B6f1748:{NFSU2_TR(0x6f1748);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f174c:{NFSU2_TR(0x6f174c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f1750:{NFSU2_TR(0x6f1750);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1754:{NFSU2_TR(0x6f1754);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1757:{NFSU2_TR(0x6f1757);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f175b:{NFSU2_TR(0x6f175b);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f175e:{NFSU2_TR(0x6f175e);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1761:{NFSU2_TR(0x6f1761);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f1765:{NFSU2_TR(0x6f1765);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1769:{NFSU2_TR(0x6f1769);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f176d:{NFSU2_TR(0x6f176d);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1770:{NFSU2_TR(0x6f1770);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1774:{NFSU2_TR(0x6f1774);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B6f1778:{NFSU2_TR(0x6f1778);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f177c:{NFSU2_TR(0x6f177c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1780:{NFSU2_TR(0x6f1780);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1783:{NFSU2_TR(0x6f1783);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1787:L6f1787:{c.instructions+=11;NFSU2_TR(0x6f1787);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f178b:{NFSU2_TR(0x6f178b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f178f:{NFSU2_TR(0x6f178f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f1792:{NFSU2_TR(0x6f1792);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B6f1795:{NFSU2_TR(0x6f1795);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6f1797:{NFSU2_TR(0x6f1797);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f179b:{NFSU2_TR(0x6f179b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f179f:{NFSU2_TR(0x6f179f);
u8 U[12];
w4(U+0,u32(u32(u32(0x49ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f17a3:{NFSU2_TR(0x6f17a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B6f17a8:{NFSU2_TR(0x6f17a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f17aa:{NFSU2_TR(0x6f17aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1601u);}goto L6f1601;}}
}
B6f17b0:L6f17b0:{c.instructions+=1;NFSU2_TR(0x6f17b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f17b4:L6f17b4:{c.instructions+=2;NFSU2_TR(0x6f17b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f17b6:{NFSU2_TR(0x6f17b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f184b;}}
}
B6f17bc:L6f17bc:{c.instructions+=5;NFSU2_TR(0x6f17bc);
__builtin_memmove((R+0),(R+28),4);
}
B6f17be:{NFSU2_TR(0x6f17be);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f17c1:{NFSU2_TR(0x6f17c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f17c5:{NFSU2_TR(0x6f17c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f17c9:{NFSU2_TR(0x6f17c9);
__builtin_memmove((R+16),(R+16),4);
}
B6f17d0:L6f17d0:{c.instructions+=9;NFSU2_TR(0x6f17d0);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6f17d5:{NFSU2_TR(0x6f17d5);
__builtin_memmove((R+4),(R+0),4);
}
B6f17d7:{NFSU2_TR(0x6f17d7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f17da:{NFSU2_TR(0x6f17da);
w4(R+20,u32(0x1ull));
}
B6f17df:{NFSU2_TR(0x6f17df);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6f17e1:{NFSU2_TR(0x6f17e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f17e8:{NFSU2_TR(0x6f17e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6f17eb:{NFSU2_TR(0x6f17eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f17ee:{NFSU2_TR(0x6f17ee);
if(r1(R+518)){{goto L6f1837;}}
}
B6f17f0:L6f17f0:{c.instructions+=20;NFSU2_TR(0x6f17f0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6f17f3:{NFSU2_TR(0x6f17f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f17f7:{NFSU2_TR(0x6f17f7);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6f17fb:{NFSU2_TR(0x6f17fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f17ff:{NFSU2_TR(0x6f17ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1803:{NFSU2_TR(0x6f1803);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1806:{NFSU2_TR(0x6f1806);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f180a:{NFSU2_TR(0x6f180a);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f180d:{NFSU2_TR(0x6f180d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1810:{NFSU2_TR(0x6f1810);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1814:{NFSU2_TR(0x6f1814);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1818:{NFSU2_TR(0x6f1818);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f181c:{NFSU2_TR(0x6f181c);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f181f:{NFSU2_TR(0x6f181f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1823:{NFSU2_TR(0x6f1823);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1827:{NFSU2_TR(0x6f1827);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f182b:{NFSU2_TR(0x6f182b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f182f:{NFSU2_TR(0x6f182f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1831:{NFSU2_TR(0x6f1831);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1835:{NFSU2_TR(0x6f1835);
{goto L6f183b;}
}
B6f1837:L6f1837:{c.instructions+=1;NFSU2_TR(0x6f1837);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f183b:L6f183b:{c.instructions+=5;NFSU2_TR(0x6f183b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f183c:{NFSU2_TR(0x6f183c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B6f183f:{NFSU2_TR(0x6f183f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1841:{NFSU2_TR(0x6f1841);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1845:{NFSU2_TR(0x6f1845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f17d0u);}goto L6f17d0;}}
}
B6f1847:L6f1847:{c.instructions+=1;NFSU2_TR(0x6f1847);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f184b:L6f184b:{c.instructions+=3;NFSU2_TR(0x6f184b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6f184e:{NFSU2_TR(0x6f184e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f1850:{NFSU2_TR(0x6f1850);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f18c7;}}
}
B6f1852:L6f1852:{c.instructions+=13;NFSU2_TR(0x6f1852);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f1856:{NFSU2_TR(0x6f1856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1859:{NFSU2_TR(0x6f1859);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f185c:{NFSU2_TR(0x6f185c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1860:{NFSU2_TR(0x6f1860);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f1864:{NFSU2_TR(0x6f1864);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f1867:{NFSU2_TR(0x6f1867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f186a:{NFSU2_TR(0x6f186a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f186e:{NFSU2_TR(0x6f186e);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f1872:{NFSU2_TR(0x6f1872);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f1875:{NFSU2_TR(0x6f1875);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f1877:{NFSU2_TR(0x6f1877);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f1879:{NFSU2_TR(0x6f1879);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f18c7;}}
}
B6f187b:L6f187b:{c.instructions+=2;NFSU2_TR(0x6f187b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f187e:{NFSU2_TR(0x6f187e);
__builtin_memmove((R+28),(R+28),4);
}
B6f1880:L6f1880:{c.instructions+=9;NFSU2_TR(0x6f1880);
u8 U[13];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6f1885:{NFSU2_TR(0x6f1885);
__builtin_memmove((R+4),(R+0),4);
}
B6f1887:{NFSU2_TR(0x6f1887);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f188a:{NFSU2_TR(0x6f188a);
w4(R+12,u32(0x1ull));
}
B6f188f:{NFSU2_TR(0x6f188f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6f1891:{NFSU2_TR(0x6f1891);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1898:{NFSU2_TR(0x6f1898);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6f189b:{NFSU2_TR(0x6f189b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f189e:{NFSU2_TR(0x6f189e);
if(r1(R+518)){{goto L6f18bb;}}
}
B6f18a0:L6f18a0:{c.instructions+=8;NFSU2_TR(0x6f18a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f18a4:{NFSU2_TR(0x6f18a4);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6f18a8:{NFSU2_TR(0x6f18a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f18ab:{NFSU2_TR(0x6f18ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f18ae:{NFSU2_TR(0x6f18ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f18b1:{NFSU2_TR(0x6f18b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f18b5:{NFSU2_TR(0x6f18b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f18b7:{NFSU2_TR(0x6f18b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f18bb:L6f18bb:{c.instructions+=5;NFSU2_TR(0x6f18bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f18bf:{NFSU2_TR(0x6f18bf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f18c0:{NFSU2_TR(0x6f18c0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B6f18c3:{NFSU2_TR(0x6f18c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f18c5:{NFSU2_TR(0x6f18c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1880u);}goto L6f1880;}}
}
B6f18c7:L6f18c7:{c.instructions+=7;NFSU2_TR(0x6f18c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f18c8:{NFSU2_TR(0x6f18c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f18c9:{NFSU2_TR(0x6f18c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f18ca:{NFSU2_TR(0x6f18ca);
w1(R+0,u8(0x1ull));
}
B6f18cc:{NFSU2_TR(0x6f18cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f18cd:{NFSU2_TR(0x6f18cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xb0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xb0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xb0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f18d3:{NFSU2_TR(0x6f18d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f18e0:L6f18e0:{c.instructions+=7;NFSU2_TR(0x6f18e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f18e4:{NFSU2_TR(0x6f18e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6f18e7:{NFSU2_TR(0x6f18e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f18e9:{NFSU2_TR(0x6f18e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f18ea:{NFSU2_TR(0x6f18ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f18ee:{NFSU2_TR(0x6f18ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6f18f2:{NFSU2_TR(0x6f18f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f1ed0;}}
}
B6f18f8:L6f18f8:{c.instructions+=19;NFSU2_TR(0x6f18f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f18fb:{NFSU2_TR(0x6f18fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f18fc:{NFSU2_TR(0x6f18fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6f1900:{NFSU2_TR(0x6f1900);
__builtin_memmove((R+0),(R+12),4);
}
B6f1902:{NFSU2_TR(0x6f1902);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f1905:{NFSU2_TR(0x6f1905);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1906:{NFSU2_TR(0x6f1906);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6f190a:{NFSU2_TR(0x6f190a);
__builtin_memmove((R+0),(R+12),4);
}
B6f190c:{NFSU2_TR(0x6f190c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f190f:{NFSU2_TR(0x6f190f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f1912:{NFSU2_TR(0x6f1912);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f1916:{NFSU2_TR(0x6f1916);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f191a:{NFSU2_TR(0x6f191a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f191c:{NFSU2_TR(0x6f191c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f191d:{NFSU2_TR(0x6f191d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f1920:{NFSU2_TR(0x6f1920);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1924:{NFSU2_TR(0x6f1924);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1928:{NFSU2_TR(0x6f1928);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f192c:{NFSU2_TR(0x6f192c);
if(r1(R+518)){{goto L6f1cc9;}}
}
B6f1932:L6f1932:{c.instructions+=9;NFSU2_TR(0x6f1932);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f1935:{NFSU2_TR(0x6f1935);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f1938:{NFSU2_TR(0x6f1938);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f193b:{NFSU2_TR(0x6f193b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f193f:{NFSU2_TR(0x6f193f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1943:{NFSU2_TR(0x6f1943);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f1945:{NFSU2_TR(0x6f1945);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1948:{NFSU2_TR(0x6f1948);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f194c:{NFSU2_TR(0x6f194c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f1c04;}}
}
B6f1952:L6f1952:{c.instructions+=3;NFSU2_TR(0x6f1952);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f1955:{NFSU2_TR(0x6f1955);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f195d:{NFSU2_TR(0x6f195d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4cull))));
}
B6f1960:L6f1960:{c.instructions+=188;NFSU2_TR(0x6f1960);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B6f1963:{NFSU2_TR(0x6f1963);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1967:{NFSU2_TR(0x6f1967);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f196b:{NFSU2_TR(0x6f196b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f196f:{NFSU2_TR(0x6f196f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1973:{NFSU2_TR(0x6f1973);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1977:{NFSU2_TR(0x6f1977);
{u32 ea_=u32(r4(R+8)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f197a:{NFSU2_TR(0x6f197a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f197e:{NFSU2_TR(0x6f197e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1982:{NFSU2_TR(0x6f1982);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B6f1985:{NFSU2_TR(0x6f1985);
{u32 ea_=u32(r4(R+8)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1988:{NFSU2_TR(0x6f1988);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f198c:{NFSU2_TR(0x6f198c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1990:{NFSU2_TR(0x6f1990);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1994:{NFSU2_TR(0x6f1994);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1997:{NFSU2_TR(0x6f1997);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f199b:{NFSU2_TR(0x6f199b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f199f:{NFSU2_TR(0x6f199f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f19a3:{NFSU2_TR(0x6f19a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f19a7:{NFSU2_TR(0x6f19a7);
{u32 ea_=u32(r4(R+8)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f19aa:{NFSU2_TR(0x6f19aa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f19ae:{NFSU2_TR(0x6f19ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f19b2:{NFSU2_TR(0x6f19b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6f19b6:{NFSU2_TR(0x6f19b6);
{u32 ea_=u32(r4(R+8)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f19b9:{NFSU2_TR(0x6f19b9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f19bd:{NFSU2_TR(0x6f19bd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f19c1:{NFSU2_TR(0x6f19c1);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f19c4:{NFSU2_TR(0x6f19c4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f19c8:{NFSU2_TR(0x6f19c8);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f19ca:{NFSU2_TR(0x6f19ca);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f19ce:{NFSU2_TR(0x6f19ce);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f19d0:{NFSU2_TR(0x6f19d0);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f19d3:{NFSU2_TR(0x6f19d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f19d7:{NFSU2_TR(0x6f19d7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f19d9:{NFSU2_TR(0x6f19d9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f19dd:{NFSU2_TR(0x6f19dd);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f19df:{NFSU2_TR(0x6f19df);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f19e3:{NFSU2_TR(0x6f19e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f19e5:{NFSU2_TR(0x6f19e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f19e7:{NFSU2_TR(0x6f19e7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f19eb:{NFSU2_TR(0x6f19eb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f19ef:{NFSU2_TR(0x6f19ef);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f19f3:{NFSU2_TR(0x6f19f3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f19f7:{NFSU2_TR(0x6f19f7);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f19fb:{NFSU2_TR(0x6f19fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f19ff:{NFSU2_TR(0x6f19ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a03:{NFSU2_TR(0x6f1a03);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1a07:{NFSU2_TR(0x6f1a07);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1a0b:{NFSU2_TR(0x6f1a0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a0f:{NFSU2_TR(0x6f1a0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1a13:{NFSU2_TR(0x6f1a13);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a16:{NFSU2_TR(0x6f1a16);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1a1a:{NFSU2_TR(0x6f1a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a1e:{NFSU2_TR(0x6f1a1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1a22:{NFSU2_TR(0x6f1a22);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a24:{NFSU2_TR(0x6f1a24);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1a28:{NFSU2_TR(0x6f1a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a2c:{NFSU2_TR(0x6f1a2c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1a30:{NFSU2_TR(0x6f1a30);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a33:{NFSU2_TR(0x6f1a33);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1a37:{NFSU2_TR(0x6f1a37);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1a3b:{NFSU2_TR(0x6f1a3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a3f:{NFSU2_TR(0x6f1a3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1a43:{NFSU2_TR(0x6f1a43);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a46:{NFSU2_TR(0x6f1a46);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1a4a:{NFSU2_TR(0x6f1a4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a4e:{NFSU2_TR(0x6f1a4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6f1a52:{NFSU2_TR(0x6f1a52);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a54:{NFSU2_TR(0x6f1a54);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1a58:{NFSU2_TR(0x6f1a58);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1a5c:{NFSU2_TR(0x6f1a5c);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a5f:{NFSU2_TR(0x6f1a5f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1a63:{NFSU2_TR(0x6f1a63);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1a65:{NFSU2_TR(0x6f1a65);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a69:{NFSU2_TR(0x6f1a69);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f1a6b:{NFSU2_TR(0x6f1a6b);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1a6e:{NFSU2_TR(0x6f1a6e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1a72:{NFSU2_TR(0x6f1a72);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f1a74:{NFSU2_TR(0x6f1a74);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a78:{NFSU2_TR(0x6f1a78);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f1a7a:{NFSU2_TR(0x6f1a7a);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1a7e:{NFSU2_TR(0x6f1a7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1a80:{NFSU2_TR(0x6f1a80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1a82:{NFSU2_TR(0x6f1a82);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1a86:{NFSU2_TR(0x6f1a86);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f1a8a:{NFSU2_TR(0x6f1a8a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1a8e:{NFSU2_TR(0x6f1a8e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f1a92:{NFSU2_TR(0x6f1a92);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1a96:{NFSU2_TR(0x6f1a96);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1a9a:{NFSU2_TR(0x6f1a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1a9e:{NFSU2_TR(0x6f1a9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1aa2:{NFSU2_TR(0x6f1aa2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1aa6:{NFSU2_TR(0x6f1aa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1aaa:{NFSU2_TR(0x6f1aaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1aae:{NFSU2_TR(0x6f1aae);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1ab1:{NFSU2_TR(0x6f1ab1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1ab5:{NFSU2_TR(0x6f1ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1ab9:{NFSU2_TR(0x6f1ab9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1abd:{NFSU2_TR(0x6f1abd);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1ac0:{NFSU2_TR(0x6f1ac0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1ac4:{NFSU2_TR(0x6f1ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1ac8:{NFSU2_TR(0x6f1ac8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1acc:{NFSU2_TR(0x6f1acc);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1acf:{NFSU2_TR(0x6f1acf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1ad3:{NFSU2_TR(0x6f1ad3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1ad7:{NFSU2_TR(0x6f1ad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1adb:{NFSU2_TR(0x6f1adb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1adf:{NFSU2_TR(0x6f1adf);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1ae2:{NFSU2_TR(0x6f1ae2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1ae6:{NFSU2_TR(0x6f1ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1aea:{NFSU2_TR(0x6f1aea);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+20,u32(r2(U+0)));
}
B6f1aed:{NFSU2_TR(0x6f1aed);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1af0:{NFSU2_TR(0x6f1af0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1af4:{NFSU2_TR(0x6f1af4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1af8:{NFSU2_TR(0x6f1af8);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1afb:{NFSU2_TR(0x6f1afb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1aff:{NFSU2_TR(0x6f1aff);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1b01:{NFSU2_TR(0x6f1b01);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b05:{NFSU2_TR(0x6f1b05);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f1b07:{NFSU2_TR(0x6f1b07);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1b0a:{NFSU2_TR(0x6f1b0a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1b0e:{NFSU2_TR(0x6f1b0e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f1b10:{NFSU2_TR(0x6f1b10);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b14:{NFSU2_TR(0x6f1b14);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f1b16:{NFSU2_TR(0x6f1b16);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1b1a:{NFSU2_TR(0x6f1b1a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1b1c:{NFSU2_TR(0x6f1b1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1b1e:{NFSU2_TR(0x6f1b1e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1b22:{NFSU2_TR(0x6f1b22);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f1b26:{NFSU2_TR(0x6f1b26);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b2a:{NFSU2_TR(0x6f1b2a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f1b2e:{NFSU2_TR(0x6f1b2e);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1b32:{NFSU2_TR(0x6f1b32);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1b36:{NFSU2_TR(0x6f1b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1b3a:{NFSU2_TR(0x6f1b3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1b3e:{NFSU2_TR(0x6f1b3e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1b42:{NFSU2_TR(0x6f1b42);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1b46:{NFSU2_TR(0x6f1b46);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1b4a:{NFSU2_TR(0x6f1b4a);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b4d:{NFSU2_TR(0x6f1b4d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1b51:{NFSU2_TR(0x6f1b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1b55:{NFSU2_TR(0x6f1b55);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1b59:{NFSU2_TR(0x6f1b59);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b5c:{NFSU2_TR(0x6f1b5c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1b60:{NFSU2_TR(0x6f1b60);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1b64:{NFSU2_TR(0x6f1b64);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1b68:{NFSU2_TR(0x6f1b68);
{u32 ea_=u32(r4(R+8)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b6b:{NFSU2_TR(0x6f1b6b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1b6f:{NFSU2_TR(0x6f1b6f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1b73:{NFSU2_TR(0x6f1b73);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1b77:{NFSU2_TR(0x6f1b77);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b7a:{NFSU2_TR(0x6f1b7a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1b7e:{NFSU2_TR(0x6f1b7e);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1b81:{NFSU2_TR(0x6f1b81);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1b85:{NFSU2_TR(0x6f1b85);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1b89:{NFSU2_TR(0x6f1b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1b8d:{NFSU2_TR(0x6f1b8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B6f1b91:{NFSU2_TR(0x6f1b91);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1b95:{NFSU2_TR(0x6f1b95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B6f1b9b:{NFSU2_TR(0x6f1b9b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6f1b9e:{NFSU2_TR(0x6f1b9e);
{u32 ea_=u32(r4(R+8)+u32(4294967236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1ba1:{NFSU2_TR(0x6f1ba1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6f1ba4:{NFSU2_TR(0x6f1ba4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B6f1ba7:{NFSU2_TR(0x6f1ba7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1bab:{NFSU2_TR(0x6f1bab);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1bad:{NFSU2_TR(0x6f1bad);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1bb1:{NFSU2_TR(0x6f1bb1);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f1bb3:{NFSU2_TR(0x6f1bb3);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1bb6:{NFSU2_TR(0x6f1bb6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1bba:{NFSU2_TR(0x6f1bba);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f1bbc:{NFSU2_TR(0x6f1bbc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1bc0:{NFSU2_TR(0x6f1bc0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f1bc2:{NFSU2_TR(0x6f1bc2);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1bc6:{NFSU2_TR(0x6f1bc6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1bc8:{NFSU2_TR(0x6f1bc8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1bca:{NFSU2_TR(0x6f1bca);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1bce:{NFSU2_TR(0x6f1bce);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f1bd2:{NFSU2_TR(0x6f1bd2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1bd6:{NFSU2_TR(0x6f1bd6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f1bda:{NFSU2_TR(0x6f1bda);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1bde:{NFSU2_TR(0x6f1bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f1be2:{NFSU2_TR(0x6f1be2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f1be5:{NFSU2_TR(0x6f1be5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1be9:{NFSU2_TR(0x6f1be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f1bed:{NFSU2_TR(0x6f1bed);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f1bf0:{NFSU2_TR(0x6f1bf0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1bf2:{NFSU2_TR(0x6f1bf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1bf6:{NFSU2_TR(0x6f1bf6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1960u);}goto L6f1960;}}
}
B6f1bfc:L6f1bfc:{c.instructions+=2;NFSU2_TR(0x6f1bfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f1c00:{NFSU2_TR(0x6f1c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1c04:L6f1c04:{c.instructions+=2;NFSU2_TR(0x6f1c04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1c06:{NFSU2_TR(0x6f1c06);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f1e6e;}}
}
B6f1c0c:L6f1c0c:{c.instructions+=3;NFSU2_TR(0x6f1c0c);
__builtin_memmove((R+28),(R+20),4);
}
B6f1c0e:{NFSU2_TR(0x6f1c0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f1c11:{NFSU2_TR(0x6f1c11);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f1c15:L6f1c15:{c.instructions+=51;NFSU2_TR(0x6f1c15);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B6f1c18:{NFSU2_TR(0x6f1c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1c1c:{NFSU2_TR(0x6f1c1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B6f1c20:{NFSU2_TR(0x6f1c20);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1c24:{NFSU2_TR(0x6f1c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1c28:{NFSU2_TR(0x6f1c28);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B6f1c2c:{NFSU2_TR(0x6f1c2c);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c2f:{NFSU2_TR(0x6f1c2f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1c33:{NFSU2_TR(0x6f1c33);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1c37:{NFSU2_TR(0x6f1c37);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B6f1c3a:{NFSU2_TR(0x6f1c3a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c3c:{NFSU2_TR(0x6f1c3c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1c40:{NFSU2_TR(0x6f1c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1c44:{NFSU2_TR(0x6f1c44);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B6f1c48:{NFSU2_TR(0x6f1c48);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c4b:{NFSU2_TR(0x6f1c4b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B6f1c4e:{NFSU2_TR(0x6f1c4e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1c52:{NFSU2_TR(0x6f1c52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B6f1c55:{NFSU2_TR(0x6f1c55);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1c59:{NFSU2_TR(0x6f1c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1c5d:{NFSU2_TR(0x6f1c5d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B6f1c61:{NFSU2_TR(0x6f1c61);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c64:{NFSU2_TR(0x6f1c64);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1c68:{NFSU2_TR(0x6f1c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1c6c:{NFSU2_TR(0x6f1c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f1c70:{NFSU2_TR(0x6f1c70);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B6f1c74:{NFSU2_TR(0x6f1c74);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c76:{NFSU2_TR(0x6f1c76);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6f1c77:{NFSU2_TR(0x6f1c77);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1c7b:{NFSU2_TR(0x6f1c7b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6f1c7e:{NFSU2_TR(0x6f1c7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1c80:{NFSU2_TR(0x6f1c80);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1c84:{NFSU2_TR(0x6f1c84);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c87:{NFSU2_TR(0x6f1c87);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1c8b:{NFSU2_TR(0x6f1c8b);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f1c8d:{NFSU2_TR(0x6f1c8d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1c91:{NFSU2_TR(0x6f1c91);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6f1c93:{NFSU2_TR(0x6f1c93);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1c96:{NFSU2_TR(0x6f1c96);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1c9a:{NFSU2_TR(0x6f1c9a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f1c9c:{NFSU2_TR(0x6f1c9c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1ca0:{NFSU2_TR(0x6f1ca0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6f1ca2:{NFSU2_TR(0x6f1ca2);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1ca6:{NFSU2_TR(0x6f1ca6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1ca8:{NFSU2_TR(0x6f1ca8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f1caa:{NFSU2_TR(0x6f1caa);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1cae:{NFSU2_TR(0x6f1cae);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f1cb2:{NFSU2_TR(0x6f1cb2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1cb6:{NFSU2_TR(0x6f1cb6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f1cba:{NFSU2_TR(0x6f1cba);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1cbe:{NFSU2_TR(0x6f1cbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1c15u);}goto L6f1c15;}}
}
B6f1cc4:L6f1cc4:{c.instructions+=1;NFSU2_TR(0x6f1cc4);
{goto L6f1e6a;}
}
B6f1cc9:L6f1cc9:{c.instructions+=5;NFSU2_TR(0x6f1cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1ccd:{NFSU2_TR(0x6f1ccd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6f1ccf:{NFSU2_TR(0x6f1ccf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1cd2:{NFSU2_TR(0x6f1cd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1cd6:{NFSU2_TR(0x6f1cd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f1e11;}}
}
B6f1cdc:L6f1cdc:{c.instructions+=3;NFSU2_TR(0x6f1cdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f1ce4:{NFSU2_TR(0x6f1ce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f1ce7:{NFSU2_TR(0x6f1ce7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B6f1cea:L6f1cea:{c.instructions+=75;NFSU2_TR(0x6f1cea);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(s32(s16(r2(U+0)))));
}
B6f1ced:{NFSU2_TR(0x6f1ced);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6f1cf1:{NFSU2_TR(0x6f1cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1cf5:{NFSU2_TR(0x6f1cf5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6f1cf8:{NFSU2_TR(0x6f1cf8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B6f1cfe:{NFSU2_TR(0x6f1cfe);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d02:{NFSU2_TR(0x6f1d02);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6f1d05:{NFSU2_TR(0x6f1d05);
{u32 ea_=u32(r4(R+8)+u32(4294967160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d0b:{NFSU2_TR(0x6f1d0b);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d0e:{NFSU2_TR(0x6f1d0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d12:{NFSU2_TR(0x6f1d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d16:{NFSU2_TR(0x6f1d16);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d1a:{NFSU2_TR(0x6f1d1a);
{u32 ea_=u32(r4(R+8)+u32(4294967164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d20:{NFSU2_TR(0x6f1d20);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d24:{NFSU2_TR(0x6f1d24);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d28:{NFSU2_TR(0x6f1d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d2c:{NFSU2_TR(0x6f1d2c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d30:{NFSU2_TR(0x6f1d30);
{u32 ea_=u32(r4(R+8)+u32(4294967168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d33:{NFSU2_TR(0x6f1d33);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d37:{NFSU2_TR(0x6f1d37);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d3b:{NFSU2_TR(0x6f1d3b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6f1d3f:{NFSU2_TR(0x6f1d3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d43:{NFSU2_TR(0x6f1d43);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d47:{NFSU2_TR(0x6f1d47);
{u32 ea_=u32(r4(R+8)+u32(4294967192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d4a:{NFSU2_TR(0x6f1d4a);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d4d:{NFSU2_TR(0x6f1d4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d51:{NFSU2_TR(0x6f1d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d55:{NFSU2_TR(0x6f1d55);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d59:{NFSU2_TR(0x6f1d59);
{u32 ea_=u32(r4(R+8)+u32(4294967196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d5c:{NFSU2_TR(0x6f1d5c);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d60:{NFSU2_TR(0x6f1d60);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d64:{NFSU2_TR(0x6f1d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d68:{NFSU2_TR(0x6f1d68);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d6c:{NFSU2_TR(0x6f1d6c);
{u32 ea_=u32(r4(R+8)+u32(4294967200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d6f:{NFSU2_TR(0x6f1d6f);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d73:{NFSU2_TR(0x6f1d73);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d77:{NFSU2_TR(0x6f1d77);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6f1d7b:{NFSU2_TR(0x6f1d7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d7f:{NFSU2_TR(0x6f1d7f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d83:{NFSU2_TR(0x6f1d83);
{u32 ea_=u32(r4(R+8)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d86:{NFSU2_TR(0x6f1d86);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d89:{NFSU2_TR(0x6f1d89);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1d8d:{NFSU2_TR(0x6f1d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1d91:{NFSU2_TR(0x6f1d91);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1d95:{NFSU2_TR(0x6f1d95);
{u32 ea_=u32(r4(R+8)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1d98:{NFSU2_TR(0x6f1d98);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1d9c:{NFSU2_TR(0x6f1d9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1da0:{NFSU2_TR(0x6f1da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1da4:{NFSU2_TR(0x6f1da4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1da8:{NFSU2_TR(0x6f1da8);
{u32 ea_=u32(r4(R+8)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1dab:{NFSU2_TR(0x6f1dab);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1daf:{NFSU2_TR(0x6f1daf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1db3:{NFSU2_TR(0x6f1db3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6f1db7:{NFSU2_TR(0x6f1db7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1dbb:{NFSU2_TR(0x6f1dbb);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1dbf:{NFSU2_TR(0x6f1dbf);
{u32 ea_=u32(r4(R+8)+u32(4294967256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1dc2:{NFSU2_TR(0x6f1dc2);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1dc5:{NFSU2_TR(0x6f1dc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1dc9:{NFSU2_TR(0x6f1dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1dcd:{NFSU2_TR(0x6f1dcd);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1dd1:{NFSU2_TR(0x6f1dd1);
{u32 ea_=u32(r4(R+8)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1dd4:{NFSU2_TR(0x6f1dd4);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1dd8:{NFSU2_TR(0x6f1dd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B6f1ddc:{NFSU2_TR(0x6f1ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1de0:{NFSU2_TR(0x6f1de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f1de4:{NFSU2_TR(0x6f1de4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6f1de7:{NFSU2_TR(0x6f1de7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1deb:{NFSU2_TR(0x6f1deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1def:{NFSU2_TR(0x6f1def);
{u32 ea_=u32(r4(R+8)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1df2:{NFSU2_TR(0x6f1df2);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1df6:{NFSU2_TR(0x6f1df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f1dfa:{NFSU2_TR(0x6f1dfa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f1dfd:{NFSU2_TR(0x6f1dfd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1dff:{NFSU2_TR(0x6f1dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1e03:{NFSU2_TR(0x6f1e03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1ceau);}goto L6f1cea;}}
}
B6f1e09:L6f1e09:{c.instructions+=2;NFSU2_TR(0x6f1e09);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1e0d:{NFSU2_TR(0x6f1e0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f1e11:L6f1e11:{c.instructions+=2;NFSU2_TR(0x6f1e11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1e13:{NFSU2_TR(0x6f1e13);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f1e6e;}}
}
B6f1e15:L6f1e15:{c.instructions+=4;NFSU2_TR(0x6f1e15);
__builtin_memmove((R+24),(R+20),4);
}
B6f1e17:{NFSU2_TR(0x6f1e17);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f1e1a:{NFSU2_TR(0x6f1e1a);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f1e1e:{NFSU2_TR(0x6f1e1e);
{goto L6f1e24;}
}
B6f1e20:L6f1e20:{c.instructions+=1;NFSU2_TR(0x6f1e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f1e24:L6f1e24:{c.instructions+=21;NFSU2_TR(0x6f1e24);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B6f1e27:{NFSU2_TR(0x6f1e27);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B6f1e2b:{NFSU2_TR(0x6f1e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1e2f:{NFSU2_TR(0x6f1e2f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B6f1e32:{NFSU2_TR(0x6f1e32);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6f1e33:{NFSU2_TR(0x6f1e33);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1e37:{NFSU2_TR(0x6f1e37);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6f1e3a:{NFSU2_TR(0x6f1e3a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1e3c:{NFSU2_TR(0x6f1e3c);
{u32 ea_=u32(r4(R+24)+u32(4294967256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1e3f:{NFSU2_TR(0x6f1e3f);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1e42:{NFSU2_TR(0x6f1e42);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B6f1e46:{NFSU2_TR(0x6f1e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1e4a:{NFSU2_TR(0x6f1e4a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1e4e:{NFSU2_TR(0x6f1e4e);
{u32 ea_=u32(r4(R+24)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1e51:{NFSU2_TR(0x6f1e51);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1e55:{NFSU2_TR(0x6f1e55);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B6f1e59:{NFSU2_TR(0x6f1e59);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1e5d:{NFSU2_TR(0x6f1e5d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1e61:{NFSU2_TR(0x6f1e61);
{u32 ea_=u32(r4(R+24)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1e64:{NFSU2_TR(0x6f1e64);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1e68:{NFSU2_TR(0x6f1e68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1e20u);}goto L6f1e20;}}
}
B6f1e6a:L6f1e6a:{c.instructions+=1;NFSU2_TR(0x6f1e6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1e6e:L6f1e6e:{c.instructions+=3;NFSU2_TR(0x6f1e6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6f1e71:{NFSU2_TR(0x6f1e71);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f1e73:{NFSU2_TR(0x6f1e73);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f1ec4;}}
}
B6f1e75:L6f1e75:{c.instructions+=12;NFSU2_TR(0x6f1e75);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f1e79:{NFSU2_TR(0x6f1e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1e7c:{NFSU2_TR(0x6f1e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6f1e7f:{NFSU2_TR(0x6f1e7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f1e83:{NFSU2_TR(0x6f1e83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f1e86:{NFSU2_TR(0x6f1e86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f1e8a:{NFSU2_TR(0x6f1e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f1e8d:{NFSU2_TR(0x6f1e8d);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f1e91:{NFSU2_TR(0x6f1e91);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B6f1e94:{NFSU2_TR(0x6f1e94);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f1e96:{NFSU2_TR(0x6f1e96);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f1e98:{NFSU2_TR(0x6f1e98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f1ec4;}}
}
B6f1e9a:L6f1e9a:{c.instructions+=2;NFSU2_TR(0x6f1e9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f1e9d:{NFSU2_TR(0x6f1e9d);
__builtin_memmove((R+4),(R+4),4);
}
B6f1ea0:L6f1ea0:{c.instructions+=12;NFSU2_TR(0x6f1ea0);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6f1ea5:{NFSU2_TR(0x6f1ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f1ea8:{NFSU2_TR(0x6f1ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f1eab:{NFSU2_TR(0x6f1eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f1eae:{NFSU2_TR(0x6f1eae);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f1eb2:{NFSU2_TR(0x6f1eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6f1eb4:{NFSU2_TR(0x6f1eb4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f1eb8:{NFSU2_TR(0x6f1eb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f1ebc:{NFSU2_TR(0x6f1ebc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f1ebd:{NFSU2_TR(0x6f1ebd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6f1ec0:{NFSU2_TR(0x6f1ec0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f1ec2:{NFSU2_TR(0x6f1ec2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1ea0u);}goto L6f1ea0;}}
}
B6f1ec4:L6f1ec4:{c.instructions+=7;NFSU2_TR(0x6f1ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f1ec5:{NFSU2_TR(0x6f1ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f1ec6:{NFSU2_TR(0x6f1ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f1ec7:{NFSU2_TR(0x6f1ec7);
w1(R+0,u8(0x1ull));
}
B6f1ec9:{NFSU2_TR(0x6f1ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f1eca:{NFSU2_TR(0x6f1eca);
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
B6f1ecd:{NFSU2_TR(0x6f1ecd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1ed0:L6f1ed0:{c.instructions+=11;NFSU2_TR(0x6f1ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1ed4:{NFSU2_TR(0x6f1ed4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ed5:{NFSU2_TR(0x6f1ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1ed9:{NFSU2_TR(0x6f1ed9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1eda:{NFSU2_TR(0x6f1eda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1edb:{NFSU2_TR(0x6f1edb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f1edf:{NFSU2_TR(0x6f1edf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ee0:{NFSU2_TR(0x6f1ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1ee4:{NFSU2_TR(0x6f1ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ee5:{NFSU2_TR(0x6f1ee5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ee6:{NFSU2_TR(0x6f1ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f1eebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1090u);}goto L6f1090;}
}
B6f1eeb:L6f1eeb:{c.instructions+=3;NFSU2_TR(0x6f1eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f1eec:{NFSU2_TR(0x6f1eec);
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
B6f1eef:{NFSU2_TR(0x6f1eef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1f00:L6f1f00:{c.instructions+=6;NFSU2_TR(0x6f1f00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f01:{NFSU2_TR(0x6f1f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f1f04:{NFSU2_TR(0x6f1f04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f05:{NFSU2_TR(0x6f1f05);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6f1f09:{NFSU2_TR(0x6f1f09);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f1f0a:{NFSU2_TR(0x6f1f0a);
if(r1(R+519)){{goto L6f1f85;}}
}
B6f1f0c:L6f1f0c:{c.instructions+=5;NFSU2_TR(0x6f1f0c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f0d:{NFSU2_TR(0x6f1f0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f1f11:{NFSU2_TR(0x6f1f11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f12:{NFSU2_TR(0x6f1f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f1f16:{NFSU2_TR(0x6f1f16);
{goto L6f1f20;}
}
B6f1f20:L6f1f20:{c.instructions+=16;NFSU2_TR(0x6f1f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1f23:{NFSU2_TR(0x6f1f23);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6f1f27:{NFSU2_TR(0x6f1f27);
w4(R+0,u32(0x2aaaaaabull));
}
B6f1f2c:{NFSU2_TR(0x6f1f2c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6f1f2e:{NFSU2_TR(0x6f1f2e);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6f1f30:{NFSU2_TR(0x6f1f30);
__builtin_memmove((R+4),(R+8),4);
}
B6f1f32:{NFSU2_TR(0x6f1f32);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f1f35:{NFSU2_TR(0x6f1f35);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6f1f37:{NFSU2_TR(0x6f1f37);
__builtin_memmove((R+4),(R+8),4);
}
B6f1f39:{NFSU2_TR(0x6f1f39);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f1f3c:{NFSU2_TR(0x6f1f3c);
w4(R+0,u32(0x1ull));
}
B6f1f41:{NFSU2_TR(0x6f1f41);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6f1f43:{NFSU2_TR(0x6f1f43);
__builtin_memmove((R+4),(R+8),4);
}
B6f1f45:{NFSU2_TR(0x6f1f45);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f1f48:{NFSU2_TR(0x6f1f48);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f1f4b:{NFSU2_TR(0x6f1f4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f1f80;}}
}
B6f1f4d:L6f1f4d:{c.instructions+=3;NFSU2_TR(0x6f1f4d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f1f51:{NFSU2_TR(0x6f1f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1f55:{NFSU2_TR(0x6f1f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f1f5b;}}
}
B6f1f57:L6f1f57:{c.instructions+=2;NFSU2_TR(0x6f1f57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f1f59:{NFSU2_TR(0x6f1f59);
{goto L6f1f69;}
}
B6f1f5b:L6f1f5b:{c.instructions+=2;NFSU2_TR(0x6f1f5b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6f1f5d:{NFSU2_TR(0x6f1f5d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f1f61;}}
}
B6f1f5f:L6f1f5f:{c.instructions+=1;NFSU2_TR(0x6f1f5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f1f61:L6f1f61:{c.instructions+=3;NFSU2_TR(0x6f1f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f1f65:{NFSU2_TR(0x6f1f65);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f1f67:{NFSU2_TR(0x6f1f67);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f1f6f;}}
}
B6f1f69:L6f1f69:{c.instructions+=2;NFSU2_TR(0x6f1f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1f6d:{NFSU2_TR(0x6f1f6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f1f6f:L6f1f6f:{c.instructions+=7;NFSU2_TR(0x6f1f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f1f72:{NFSU2_TR(0x6f1f72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f74:{NFSU2_TR(0x6f1f74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f1f75:{NFSU2_TR(0x6f1f75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f76:{NFSU2_TR(0x6f1f76);
__builtin_memmove((R+4),(R+24),4);
}
B6f1f78:{NFSU2_TR(0x6f1f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6f1f7b:{NFSU2_TR(0x6f1f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f1f80ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6f1f80:L6f1f80:{c.instructions+=2;NFSU2_TR(0x6f1f80);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f1f81:{NFSU2_TR(0x6f1f81);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f1f20u);}goto L6f1f20;}}
}
B6f1f83:L6f1f83:{c.instructions+=2;NFSU2_TR(0x6f1f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f1f84:{NFSU2_TR(0x6f1f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f1f85:L6f1f85:{c.instructions+=4;NFSU2_TR(0x6f1f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f1f86:{NFSU2_TR(0x6f1f86);
w1(R+0,u8(0x1ull));
}
B6f1f88:{NFSU2_TR(0x6f1f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f1f89:{NFSU2_TR(0x6f1f89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1f90:L6f1f90:{c.instructions+=4;NFSU2_TR(0x6f1f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1f91:{NFSU2_TR(0x6f1f91);
__builtin_memmove((R+24),(R+4),4);
}
B6f1f93:{NFSU2_TR(0x6f1f93);
u8 U[4];
w4(U+0,u32(0x7c21e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f1f99:{NFSU2_TR(0x6f1f99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f1f9eull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6f1f9e:L6f1f9e:{c.instructions+=2;NFSU2_TR(0x6f1f9e);
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
B6f1fa3:{NFSU2_TR(0x6f1fa3);
if(r1(R+518)){{goto L6f1fb1;}}
}
B6f1fa5:L6f1fa5:{c.instructions+=3;NFSU2_TR(0x6f1fa5);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1fa7:{NFSU2_TR(0x6f1fa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1fa8:{NFSU2_TR(0x6f1fa8);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f1faeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f1fae:L6f1fae:{c.instructions+=1;NFSU2_TR(0x6f1fae);
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
B6f1fb1:L6f1fb1:{c.instructions+=3;NFSU2_TR(0x6f1fb1);
__builtin_memmove((R+0),(R+24),4);
}
B6f1fb3:{NFSU2_TR(0x6f1fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f1fb4:{NFSU2_TR(0x6f1fb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f1fc0:L6f1fc0:{c.instructions+=5;NFSU2_TR(0x6f1fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B6f1fc3:{NFSU2_TR(0x6f1fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1fc7:{NFSU2_TR(0x6f1fc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f1fca:{NFSU2_TR(0x6f1fca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f1fcc:{NFSU2_TR(0x6f1fcc);
if(r1(R+518)){{goto L6f1fe2;}}
}
B6f1fce:L6f1fce:{c.instructions+=5;NFSU2_TR(0x6f1fce);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f1fd2:{NFSU2_TR(0x6f1fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1fd6:{NFSU2_TR(0x6f1fd6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f1fda:{NFSU2_TR(0x6f1fda);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f1fde:{NFSU2_TR(0x6f1fde);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f1fe2:L6f1fe2:{c.instructions+=11;NFSU2_TR(0x6f1fe2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1fe6:{NFSU2_TR(0x6f1fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f1fe9:{NFSU2_TR(0x6f1fe9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f1fef:{NFSU2_TR(0x6f1fef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ff0:{NFSU2_TR(0x6f1ff0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f1ff4:{NFSU2_TR(0x6f1ff4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ff5:{NFSU2_TR(0x6f1ff5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ff6:{NFSU2_TR(0x6f1ff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f1ff7:{NFSU2_TR(0x6f1ff7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f1ff9:{NFSU2_TR(0x6f1ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f1ffd:{NFSU2_TR(0x6f1ffd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
TAIL_STATIC(0x6f2000u,6f2);
}
XIT:NFSU2_TR_EXIT(0x6f1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
