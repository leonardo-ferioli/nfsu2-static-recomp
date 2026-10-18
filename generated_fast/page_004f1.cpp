#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4d3(u8* __restrict R,Cpu& c);
u32 body_4d4(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4e3(u8* __restrict R,Cpu& c);
u32 body_4e4(u8* __restrict R,Cpu& c);
u32 body_4e5(u8* __restrict R,Cpu& c);
u32 body_4e6(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f2(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 page_4f1(Cpu& c){return body_4f1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f1001:goto L4f1001;
case 0x4f1006:c.instructions+=2;goto B4f1006;
case 0x4f100d:c.instructions+=1;goto B4f100d;
case 0x4f1012:goto L4f1012;
case 0x4f1013:c.instructions+=2;goto B4f1013;
case 0x4f1018:c.instructions+=1;goto B4f1018;
case 0x4f101d:goto L4f101d;
case 0x4f1020:c.instructions+=5;goto B4f1020;
case 0x4f1021:c.instructions+=4;goto B4f1021;
case 0x4f1022:c.instructions+=3;goto B4f1022;
case 0x4f1028:c.instructions+=2;goto B4f1028;
case 0x4f1029:c.instructions+=1;goto B4f1029;
case 0x4f102e:goto L4f102e;
case 0x4f1031:c.instructions+=10;goto B4f1031;
case 0x4f1035:c.instructions+=9;goto B4f1035;
case 0x4f1039:c.instructions+=8;goto B4f1039;
case 0x4f103b:c.instructions+=7;goto B4f103b;
case 0x4f103c:c.instructions+=6;goto B4f103c;
case 0x4f103d:c.instructions+=5;goto B4f103d;
case 0x4f103e:c.instructions+=4;goto B4f103e;
case 0x4f1044:c.instructions+=3;goto B4f1044;
case 0x4f1045:c.instructions+=2;goto B4f1045;
case 0x4f1047:c.instructions+=1;goto B4f1047;
case 0x4f104c:goto L4f104c;
case 0x4f104e:c.instructions+=1;goto B4f104e;
case 0x4f1050:goto L4f1050;
case 0x4f1055:c.instructions+=2;goto B4f1055;
case 0x4f1057:c.instructions+=1;goto B4f1057;
case 0x4f1059:goto L4f1059;
case 0x4f105f:c.instructions+=1;goto B4f105f;
case 0x4f1064:goto L4f1064;
case 0x4f1065:c.instructions+=5;goto B4f1065;
case 0x4f1066:c.instructions+=4;goto B4f1066;
case 0x4f1067:c.instructions+=3;goto B4f1067;
case 0x4f106e:c.instructions+=2;goto B4f106e;
case 0x4f106f:c.instructions+=1;goto B4f106f;
case 0x4f1072:goto L4f1072;
case 0x4f1075:c.instructions+=1;goto B4f1075;
case 0x4f1077:goto L4f1077;
case 0x4f1079:c.instructions+=2;goto B4f1079;
case 0x4f107b:c.instructions+=1;goto B4f107b;
case 0x4f107d:goto L4f107d;
case 0x4f107e:c.instructions+=1;goto B4f107e;
case 0x4f1083:goto L4f1083;
case 0x4f1086:c.instructions+=1;goto B4f1086;
case 0x4f108c:goto L4f108c;
case 0x4f108f:c.instructions+=10;goto B4f108f;
case 0x4f1092:c.instructions+=9;goto B4f1092;
case 0x4f1097:c.instructions+=8;goto B4f1097;
case 0x4f1099:c.instructions+=7;goto B4f1099;
case 0x4f109e:c.instructions+=6;goto B4f109e;
case 0x4f10a3:c.instructions+=5;goto B4f10a3;
case 0x4f10a8:c.instructions+=4;goto B4f10a8;
case 0x4f10ad:c.instructions+=3;goto B4f10ad;
case 0x4f10b2:c.instructions+=2;goto B4f10b2;
case 0x4f10b3:c.instructions+=1;goto B4f10b3;
case 0x4f10b8:goto L4f10b8;
case 0x4f10bb:c.instructions+=6;goto B4f10bb;
case 0x4f10bd:c.instructions+=5;goto B4f10bd;
case 0x4f10be:c.instructions+=4;goto B4f10be;
case 0x4f10bf:c.instructions+=3;goto B4f10bf;
case 0x4f10c0:c.instructions+=2;goto B4f10c0;
case 0x4f10c1:c.instructions+=1;goto B4f10c1;
case 0x4f10c4:goto L4f10c4;
case 0x4f10c7:c.instructions+=1;goto B4f10c7;
case 0x4f10c9:goto L4f10c9;
case 0x4f10cf:c.instructions+=5;goto B4f10cf;
case 0x4f10d5:c.instructions+=4;goto B4f10d5;
case 0x4f10d7:c.instructions+=3;goto B4f10d7;
case 0x4f10da:c.instructions+=2;goto B4f10da;
case 0x4f10dd:c.instructions+=1;goto B4f10dd;
case 0x4f10df:goto L4f10df;
case 0x4f10e9:c.instructions+=2;goto B4f10e9;
case 0x4f10ef:c.instructions+=1;goto B4f10ef;
case 0x4f10f4:goto L4f10f4;
case 0x4f10f5:c.instructions+=4;goto B4f10f5;
case 0x4f10f6:c.instructions+=3;goto B4f10f6;
case 0x4f10f7:c.instructions+=2;goto B4f10f7;
case 0x4f10f8:c.instructions+=1;goto B4f10f8;
case 0x4f10fb:goto L4f10fb;
case 0x4f1100:c.instructions+=1;goto B4f1100;
case 0x4f1102:goto L4f1102;
case 0x4f1108:c.instructions+=1;goto B4f1108;
case 0x4f110a:goto L4f110a;
case 0x4f110f:goto L4f110f;
case 0x4f1115:c.instructions+=2;goto B4f1115;
case 0x4f1117:c.instructions+=1;goto B4f1117;
case 0x4f1119:goto L4f1119;
case 0x4f111c:c.instructions+=3;goto B4f111c;
case 0x4f111d:c.instructions+=2;goto B4f111d;
case 0x4f1122:c.instructions+=1;goto B4f1122;
case 0x4f1127:goto L4f1127;
case 0x4f112a:c.instructions+=5;goto B4f112a;
case 0x4f112b:c.instructions+=4;goto B4f112b;
case 0x4f112c:c.instructions+=3;goto B4f112c;
case 0x4f112d:c.instructions+=2;goto B4f112d;
case 0x4f112e:c.instructions+=1;goto B4f112e;
case 0x4f1131:goto L4f1131;
case 0x4f1133:c.instructions+=1;goto B4f1133;
case 0x4f1135:goto L4f1135;
case 0x4f113a:goto L4f113a;
case 0x4f113b:c.instructions+=4;goto B4f113b;
case 0x4f113c:c.instructions+=3;goto B4f113c;
case 0x4f113d:c.instructions+=2;goto B4f113d;
case 0x4f113e:c.instructions+=1;goto B4f113e;
case 0x4f1150:goto L4f1150;
case 0x4f1151:c.instructions+=16;goto B4f1151;
case 0x4f1153:c.instructions+=15;goto B4f1153;
case 0x4f1156:c.instructions+=14;goto B4f1156;
case 0x4f1158:c.instructions+=13;goto B4f1158;
case 0x4f115d:c.instructions+=12;goto B4f115d;
case 0x4f1163:c.instructions+=11;goto B4f1163;
case 0x4f1164:c.instructions+=10;goto B4f1164;
case 0x4f116b:c.instructions+=9;goto B4f116b;
case 0x4f1171:c.instructions+=8;goto B4f1171;
case 0x4f1174:c.instructions+=7;goto B4f1174;
case 0x4f1175:c.instructions+=6;goto B4f1175;
case 0x4f1176:c.instructions+=5;goto B4f1176;
case 0x4f1177:c.instructions+=4;goto B4f1177;
case 0x4f1179:c.instructions+=3;goto B4f1179;
case 0x4f117a:c.instructions+=2;goto B4f117a;
case 0x4f117e:c.instructions+=1;goto B4f117e;
case 0x4f1183:goto L4f1183;
case 0x4f1186:c.instructions+=12;goto B4f1186;
case 0x4f1188:c.instructions+=11;goto B4f1188;
case 0x4f118a:c.instructions+=10;goto B4f118a;
case 0x4f118b:c.instructions+=9;goto B4f118b;
case 0x4f118c:c.instructions+=8;goto B4f118c;
case 0x4f118e:c.instructions+=7;goto B4f118e;
case 0x4f118f:c.instructions+=6;goto B4f118f;
case 0x4f1190:c.instructions+=5;goto B4f1190;
case 0x4f1191:c.instructions+=4;goto B4f1191;
case 0x4f1194:c.instructions+=3;goto B4f1194;
case 0x4f119b:c.instructions+=2;goto B4f119b;
case 0x4f11a1:c.instructions+=1;goto B4f11a1;
case 0x4f11a6:goto L4f11a6;
case 0x4f11ad:c.instructions+=10;goto B4f11ad;
case 0x4f11b3:c.instructions+=9;goto B4f11b3;
case 0x4f11b9:c.instructions+=8;goto B4f11b9;
case 0x4f11bf:c.instructions+=7;goto B4f11bf;
case 0x4f11c5:c.instructions+=6;goto B4f11c5;
case 0x4f11cb:c.instructions+=5;goto B4f11cb;
case 0x4f11d1:c.instructions+=4;goto B4f11d1;
case 0x4f11d7:c.instructions+=3;goto B4f11d7;
case 0x4f11dd:c.instructions+=2;goto B4f11dd;
case 0x4f11e3:c.instructions+=1;goto B4f11e3;
case 0x4f11e8:goto L4f11e8;
case 0x4f11ee:c.instructions+=41;goto B4f11ee;
case 0x4f11f4:c.instructions+=40;goto B4f11f4;
case 0x4f11fe:c.instructions+=39;goto B4f11fe;
case 0x4f1204:c.instructions+=38;goto B4f1204;
case 0x4f120a:c.instructions+=37;goto B4f120a;
case 0x4f1210:c.instructions+=36;goto B4f1210;
case 0x4f1212:c.instructions+=35;goto B4f1212;
case 0x4f1215:c.instructions+=34;goto B4f1215;
case 0x4f1218:c.instructions+=33;goto B4f1218;
case 0x4f121b:c.instructions+=32;goto B4f121b;
case 0x4f121e:c.instructions+=31;goto B4f121e;
case 0x4f1221:c.instructions+=30;goto B4f1221;
case 0x4f1224:c.instructions+=29;goto B4f1224;
case 0x4f1227:c.instructions+=28;goto B4f1227;
case 0x4f122a:c.instructions+=27;goto B4f122a;
case 0x4f122d:c.instructions+=26;goto B4f122d;
case 0x4f1230:c.instructions+=25;goto B4f1230;
case 0x4f1231:c.instructions+=24;goto B4f1231;
case 0x4f1232:c.instructions+=23;goto B4f1232;
case 0x4f1234:c.instructions+=22;goto B4f1234;
case 0x4f1239:c.instructions+=21;goto B4f1239;
case 0x4f123a:c.instructions+=20;goto B4f123a;
case 0x4f1240:c.instructions+=19;goto B4f1240;
case 0x4f1248:c.instructions+=18;goto B4f1248;
case 0x4f124e:c.instructions+=17;goto B4f124e;
case 0x4f1254:c.instructions+=16;goto B4f1254;
case 0x4f125a:c.instructions+=15;goto B4f125a;
case 0x4f1260:c.instructions+=14;goto B4f1260;
case 0x4f1266:c.instructions+=13;goto B4f1266;
case 0x4f126c:c.instructions+=12;goto B4f126c;
case 0x4f1272:c.instructions+=11;goto B4f1272;
case 0x4f1278:c.instructions+=10;goto B4f1278;
case 0x4f127e:c.instructions+=9;goto B4f127e;
case 0x4f1284:c.instructions+=8;goto B4f1284;
case 0x4f128a:c.instructions+=7;goto B4f128a;
case 0x4f1290:c.instructions+=6;goto B4f1290;
case 0x4f1296:c.instructions+=5;goto B4f1296;
case 0x4f129c:c.instructions+=4;goto B4f129c;
case 0x4f12a2:c.instructions+=3;goto B4f12a2;
case 0x4f12a8:c.instructions+=2;goto B4f12a8;
case 0x4f12ae:c.instructions+=1;goto B4f12ae;
case 0x4f12b3:goto L4f12b3;
case 0x4f12ba:c.instructions+=4;goto B4f12ba;
case 0x4f12c0:c.instructions+=3;goto B4f12c0;
case 0x4f12c6:c.instructions+=2;goto B4f12c6;
case 0x4f12d0:c.instructions+=1;goto B4f12d0;
case 0x4f12d2:goto L4f12d2;
case 0x4f12d5:c.instructions+=3;goto B4f12d5;
case 0x4f12da:c.instructions+=2;goto B4f12da;
case 0x4f12de:c.instructions+=1;goto B4f12de;
case 0x4f12e3:goto L4f12e3;
case 0x4f12e4:c.instructions+=4;goto B4f12e4;
case 0x4f12e8:c.instructions+=3;goto B4f12e8;
case 0x4f12ed:c.instructions+=2;goto B4f12ed;
case 0x4f12ee:c.instructions+=1;goto B4f12ee;
case 0x4f12f3:goto L4f12f3;
case 0x4f12f6:goto L4f12f6;
case 0x4f12f8:c.instructions+=3;goto B4f12f8;
case 0x4f12f9:c.instructions+=2;goto B4f12f9;
case 0x4f12fb:c.instructions+=1;goto B4f12fb;
case 0x4f1300:goto L4f1300;
case 0x4f1307:c.instructions+=1;goto B4f1307;
case 0x4f1309:goto L4f1309;
case 0x4f130e:c.instructions+=1;goto B4f130e;
case 0x4f1313:goto L4f1313;
case 0x4f1318:goto L4f1318;
case 0x4f1319:c.instructions+=2;goto B4f1319;
case 0x4f131f:c.instructions+=1;goto B4f131f;
case 0x4f1324:goto L4f1324;
case 0x4f1327:c.instructions+=5;goto B4f1327;
case 0x4f1328:c.instructions+=4;goto B4f1328;
case 0x4f132d:c.instructions+=3;goto B4f132d;
case 0x4f132f:c.instructions+=2;goto B4f132f;
case 0x4f1335:c.instructions+=1;goto B4f1335;
case 0x4f133a:goto L4f133a;
case 0x4f1344:c.instructions+=6;goto B4f1344;
case 0x4f1347:c.instructions+=5;goto B4f1347;
case 0x4f134d:c.instructions+=4;goto B4f134d;
case 0x4f1350:c.instructions+=3;goto B4f1350;
case 0x4f1355:c.instructions+=2;goto B4f1355;
case 0x4f1356:c.instructions+=1;goto B4f1356;
case 0x4f135b:goto L4f135b;
case 0x4f135e:c.instructions+=4;goto B4f135e;
case 0x4f1361:c.instructions+=3;goto B4f1361;
case 0x4f1364:c.instructions+=2;goto B4f1364;
case 0x4f1365:c.instructions+=1;goto B4f1365;
case 0x4f136a:goto L4f136a;
case 0x4f136d:c.instructions+=6;goto B4f136d;
case 0x4f1372:c.instructions+=5;goto B4f1372;
case 0x4f1377:c.instructions+=4;goto B4f1377;
case 0x4f1378:c.instructions+=3;goto B4f1378;
case 0x4f1382:c.instructions+=2;goto B4f1382;
case 0x4f1389:c.instructions+=1;goto B4f1389;
case 0x4f138e:goto L4f138e;
case 0x4f1391:c.instructions+=4;goto B4f1391;
case 0x4f1396:c.instructions+=3;goto B4f1396;
case 0x4f139b:c.instructions+=2;goto B4f139b;
case 0x4f139c:c.instructions+=1;goto B4f139c;
case 0x4f13a1:goto L4f13a1;
case 0x4f13a6:c.instructions+=5;goto B4f13a6;
case 0x4f13ac:c.instructions+=4;goto B4f13ac;
case 0x4f13af:c.instructions+=3;goto B4f13af;
case 0x4f13b1:c.instructions+=2;goto B4f13b1;
case 0x4f13b7:c.instructions+=1;goto B4f13b7;
case 0x4f13bc:goto L4f13bc;
case 0x4f13c0:c.instructions+=1;goto B4f13c0;
case 0x4f13c5:goto L4f13c5;
case 0x4f13c6:c.instructions+=6;goto B4f13c6;
case 0x4f13c7:c.instructions+=5;goto B4f13c7;
case 0x4f13c8:c.instructions+=4;goto B4f13c8;
case 0x4f13ca:c.instructions+=3;goto B4f13ca;
case 0x4f13ce:c.instructions+=2;goto B4f13ce;
case 0x4f13d6:c.instructions+=1;goto B4f13d6;
case 0x4f13db:goto L4f13db;
case 0x4f13dc:c.instructions+=6;goto B4f13dc;
case 0x4f13e0:c.instructions+=5;goto B4f13e0;
case 0x4f13e1:c.instructions+=4;goto B4f13e1;
case 0x4f13e2:c.instructions+=3;goto B4f13e2;
case 0x4f13e7:c.instructions+=2;goto B4f13e7;
case 0x4f13ef:c.instructions+=1;goto B4f13ef;
case 0x4f13f4:goto L4f13f4;
case 0x4f13f9:c.instructions+=1;goto B4f13f9;
case 0x4f13fe:goto L4f13fe;
case 0x4f1401:c.instructions+=2;goto B4f1401;
case 0x4f1403:c.instructions+=1;goto B4f1403;
case 0x4f1405:goto L4f1405;
case 0x4f140a:c.instructions+=1;goto B4f140a;
case 0x4f140f:goto L4f140f;
case 0x4f1412:c.instructions+=2;goto B4f1412;
case 0x4f1414:c.instructions+=1;goto B4f1414;
case 0x4f1416:goto L4f1416;
case 0x4f141b:c.instructions+=1;goto B4f141b;
case 0x4f1420:goto L4f1420;
case 0x4f1423:c.instructions+=2;goto B4f1423;
case 0x4f1425:c.instructions+=1;goto B4f1425;
case 0x4f1427:goto L4f1427;
case 0x4f142c:c.instructions+=1;goto B4f142c;
case 0x4f1431:goto L4f1431;
case 0x4f1434:c.instructions+=2;goto B4f1434;
case 0x4f1436:c.instructions+=1;goto B4f1436;
case 0x4f1438:goto L4f1438;
case 0x4f143b:c.instructions+=1;goto B4f143b;
case 0x4f143d:goto L4f143d;
case 0x4f143f:goto L4f143f;
case 0x4f1443:c.instructions+=3;goto B4f1443;
case 0x4f1444:c.instructions+=2;goto B4f1444;
case 0x4f1449:c.instructions+=1;goto B4f1449;
case 0x4f144e:goto L4f144e;
case 0x4f1450:c.instructions+=2;goto B4f1450;
case 0x4f145a:c.instructions+=1;goto B4f145a;
case 0x4f145c:goto L4f145c;
case 0x4f145e:c.instructions+=3;goto B4f145e;
case 0x4f1463:c.instructions+=2;goto B4f1463;
case 0x4f1465:c.instructions+=1;goto B4f1465;
case 0x4f146a:goto L4f146a;
case 0x4f146f:c.instructions+=1;goto B4f146f;
case 0x4f1474:goto L4f1474;
case 0x4f1477:c.instructions+=2;goto B4f1477;
case 0x4f1479:c.instructions+=1;goto B4f1479;
case 0x4f147b:goto L4f147b;
case 0x4f147c:c.instructions+=5;goto B4f147c;
case 0x4f147d:c.instructions+=4;goto B4f147d;
case 0x4f147e:c.instructions+=3;goto B4f147e;
case 0x4f1483:c.instructions+=2;goto B4f1483;
case 0x4f1484:c.instructions+=1;goto B4f1484;
case 0x4f1489:goto L4f1489;
case 0x4f148c:goto L4f148c;
case 0x4f148f:c.instructions+=2;goto B4f148f;
case 0x4f1494:c.instructions+=1;goto B4f1494;
case 0x4f1499:goto L4f1499;
case 0x4f149a:c.instructions+=2;goto B4f149a;
case 0x4f149b:c.instructions+=1;goto B4f149b;
case 0x4f14a0:goto L4f14a0;
case 0x4f14a3:c.instructions+=3;goto B4f14a3;
case 0x4f14a8:c.instructions+=2;goto B4f14a8;
case 0x4f14ae:c.instructions+=1;goto B4f14ae;
case 0x4f14b3:goto L4f14b3;
case 0x4f14b4:c.instructions+=2;goto B4f14b4;
case 0x4f14b5:c.instructions+=1;goto B4f14b5;
case 0x4f14ba:goto L4f14ba;
case 0x4f14bd:c.instructions+=3;goto B4f14bd;
case 0x4f14c2:c.instructions+=2;goto B4f14c2;
case 0x4f14c8:c.instructions+=1;goto B4f14c8;
case 0x4f14cd:goto L4f14cd;
case 0x4f14ce:c.instructions+=2;goto B4f14ce;
case 0x4f14cf:c.instructions+=1;goto B4f14cf;
case 0x4f14d4:goto L4f14d4;
case 0x4f14d7:c.instructions+=3;goto B4f14d7;
case 0x4f14dc:c.instructions+=2;goto B4f14dc;
case 0x4f14e2:c.instructions+=1;goto B4f14e2;
case 0x4f14e7:goto L4f14e7;
case 0x4f14e8:c.instructions+=2;goto B4f14e8;
case 0x4f14e9:c.instructions+=1;goto B4f14e9;
case 0x4f14ee:goto L4f14ee;
case 0x4f14f4:c.instructions+=4;goto B4f14f4;
case 0x4f14f7:c.instructions+=3;goto B4f14f7;
case 0x4f14fc:c.instructions+=2;goto B4f14fc;
case 0x4f14fd:c.instructions+=1;goto B4f14fd;
case 0x4f1502:goto L4f1502;
case 0x4f1508:c.instructions+=4;goto B4f1508;
case 0x4f150b:c.instructions+=3;goto B4f150b;
case 0x4f1510:c.instructions+=2;goto B4f1510;
case 0x4f1511:c.instructions+=1;goto B4f1511;
case 0x4f1516:goto L4f1516;
case 0x4f1519:c.instructions+=5;goto B4f1519;
case 0x4f151f:c.instructions+=4;goto B4f151f;
case 0x4f1522:c.instructions+=3;goto B4f1522;
case 0x4f1527:c.instructions+=2;goto B4f1527;
case 0x4f1528:c.instructions+=1;goto B4f1528;
case 0x4f152d:goto L4f152d;
case 0x4f1533:c.instructions+=4;goto B4f1533;
case 0x4f1536:c.instructions+=3;goto B4f1536;
case 0x4f153b:c.instructions+=2;goto B4f153b;
case 0x4f153c:c.instructions+=1;goto B4f153c;
case 0x4f1541:goto L4f1541;
case 0x4f1547:c.instructions+=4;goto B4f1547;
case 0x4f154a:c.instructions+=3;goto B4f154a;
case 0x4f154f:c.instructions+=2;goto B4f154f;
case 0x4f1550:c.instructions+=1;goto B4f1550;
case 0x4f1555:goto L4f1555;
case 0x4f155b:c.instructions+=4;goto B4f155b;
case 0x4f155e:c.instructions+=3;goto B4f155e;
case 0x4f1563:c.instructions+=2;goto B4f1563;
case 0x4f1564:c.instructions+=1;goto B4f1564;
case 0x4f1569:goto L4f1569;
case 0x4f156c:c.instructions+=4;goto B4f156c;
case 0x4f156e:c.instructions+=3;goto B4f156e;
case 0x4f1574:c.instructions+=2;goto B4f1574;
case 0x4f157a:c.instructions+=1;goto B4f157a;
case 0x4f157f:goto L4f157f;
case 0x4f1582:c.instructions+=3;goto B4f1582;
case 0x4f1587:c.instructions+=2;goto B4f1587;
case 0x4f1588:c.instructions+=1;goto B4f1588;
case 0x4f158d:goto L4f158d;
case 0x4f158e:c.instructions+=1;goto B4f158e;
case 0x4f1593:goto L4f1593;
case 0x4f1596:c.instructions+=3;goto B4f1596;
case 0x4f1597:c.instructions+=2;goto B4f1597;
case 0x4f1599:c.instructions+=1;goto B4f1599;
case 0x4f159e:goto L4f159e;
case 0x4f15a3:goto L4f15a3;
case 0x4f15a4:c.instructions+=1;goto B4f15a4;
case 0x4f15a9:goto L4f15a9;
case 0x4f15ac:c.instructions+=2;goto B4f15ac;
case 0x4f15ae:c.instructions+=1;goto B4f15ae;
case 0x4f15b0:goto L4f15b0;
case 0x4f15b3:c.instructions+=4;goto B4f15b3;
case 0x4f15b4:c.instructions+=3;goto B4f15b4;
case 0x4f15b9:c.instructions+=2;goto B4f15b9;
case 0x4f15ba:c.instructions+=1;goto B4f15ba;
case 0x4f15bf:goto L4f15bf;
case 0x4f15c0:c.instructions+=1;goto B4f15c0;
case 0x4f15c5:goto L4f15c5;
case 0x4f15c8:goto L4f15c8;
case 0x4f15ce:c.instructions+=1;goto B4f15ce;
case 0x4f15d3:goto L4f15d3;
case 0x4f15d6:c.instructions+=5;goto B4f15d6;
case 0x4f15d9:c.instructions+=4;goto B4f15d9;
case 0x4f15da:c.instructions+=3;goto B4f15da;
case 0x4f15db:c.instructions+=2;goto B4f15db;
case 0x4f15e1:c.instructions+=1;goto B4f15e1;
case 0x4f15e6:goto L4f15e6;
case 0x4f15ed:c.instructions+=2;goto B4f15ed;
case 0x4f15f5:c.instructions+=1;goto B4f15f5;
case 0x4f15fa:goto L4f15fa;
case 0x4f1601:c.instructions+=8;goto B4f1601;
case 0x4f1602:c.instructions+=7;goto B4f1602;
case 0x4f1604:c.instructions+=6;goto B4f1604;
case 0x4f1605:c.instructions+=5;goto B4f1605;
case 0x4f160c:c.instructions+=4;goto B4f160c;
case 0x4f160d:c.instructions+=3;goto B4f160d;
case 0x4f160f:c.instructions+=2;goto B4f160f;
case 0x4f1610:c.instructions+=1;goto B4f1610;
case 0x4f1620:goto L4f1620;
case 0x4f1621:c.instructions+=5;goto B4f1621;
case 0x4f1623:c.instructions+=4;goto B4f1623;
case 0x4f1624:c.instructions+=3;goto B4f1624;
case 0x4f1627:c.instructions+=2;goto B4f1627;
case 0x4f1629:c.instructions+=1;goto B4f1629;
case 0x4f162e:goto L4f162e;
case 0x4f1630:c.instructions+=1;goto B4f1630;
case 0x4f1636:goto L4f1636;
case 0x4f163b:c.instructions+=2;goto B4f163b;
case 0x4f163d:c.instructions+=1;goto B4f163d;
case 0x4f1642:goto L4f1642;
case 0x4f1643:c.instructions+=1;goto B4f1643;
case 0x4f1648:goto L4f1648;
case 0x4f164b:c.instructions+=2;goto B4f164b;
case 0x4f164d:c.instructions+=1;goto B4f164d;
case 0x4f1653:goto L4f1653;
case 0x4f1654:c.instructions+=4;goto B4f1654;
case 0x4f1659:c.instructions+=3;goto B4f1659;
case 0x4f165b:c.instructions+=2;goto B4f165b;
case 0x4f1661:c.instructions+=1;goto B4f1661;
case 0x4f1666:goto L4f1666;
case 0x4f1667:c.instructions+=2;goto B4f1667;
case 0x4f1669:c.instructions+=1;goto B4f1669;
case 0x4f166e:goto L4f166e;
case 0x4f1671:c.instructions+=3;goto B4f1671;
case 0x4f1677:c.instructions+=2;goto B4f1677;
case 0x4f1678:c.instructions+=1;goto B4f1678;
case 0x4f167d:goto L4f167d;
case 0x4f167f:c.instructions+=2;goto B4f167f;
case 0x4f1685:c.instructions+=1;goto B4f1685;
case 0x4f168b:goto L4f168b;
case 0x4f1691:c.instructions+=1;goto B4f1691;
case 0x4f1693:goto L4f1693;
case 0x4f1695:c.instructions+=3;goto B4f1695;
case 0x4f1696:c.instructions+=2;goto B4f1696;
case 0x4f1698:c.instructions+=1;goto B4f1698;
case 0x4f169d:goto L4f169d;
case 0x4f16a0:c.instructions+=2;goto B4f16a0;
case 0x4f16a2:c.instructions+=1;goto B4f16a2;
case 0x4f16a7:goto L4f16a7;
case 0x4f16a9:c.instructions+=1;goto B4f16a9;
case 0x4f16ab:goto L4f16ab;
case 0x4f16ae:c.instructions+=2;goto B4f16ae;
case 0x4f16b1:c.instructions+=1;goto B4f16b1;
case 0x4f16b3:goto L4f16b3;
case 0x4f16b6:c.instructions+=1;goto B4f16b6;
case 0x4f16b8:goto L4f16b8;
case 0x4f16bd:c.instructions+=1;goto B4f16bd;
case 0x4f16bf:goto L4f16bf;
case 0x4f16c4:goto L4f16c4;
case 0x4f16ca:c.instructions+=2;goto B4f16ca;
case 0x4f16cd:c.instructions+=1;goto B4f16cd;
case 0x4f16d2:goto L4f16d2;
case 0x4f16d3:c.instructions+=9;goto B4f16d3;
case 0x4f16d4:c.instructions+=8;goto B4f16d4;
case 0x4f16d9:c.instructions+=7;goto B4f16d9;
case 0x4f16de:c.instructions+=6;goto B4f16de;
case 0x4f16e3:c.instructions+=5;goto B4f16e3;
case 0x4f16e8:c.instructions+=4;goto B4f16e8;
case 0x4f16ed:c.instructions+=3;goto B4f16ed;
case 0x4f16f2:c.instructions+=2;goto B4f16f2;
case 0x4f16f3:c.instructions+=1;goto B4f16f3;
case 0x4f16f8:goto L4f16f8;
case 0x4f16fb:c.instructions+=4;goto B4f16fb;
case 0x4f16fc:c.instructions+=3;goto B4f16fc;
case 0x4f16fd:c.instructions+=2;goto B4f16fd;
case 0x4f16fe:c.instructions+=1;goto B4f16fe;
case 0x4f16ff:goto L4f16ff;
case 0x4f1704:c.instructions+=1;goto B4f1704;
case 0x4f1706:goto L4f1706;
case 0x4f1708:c.instructions+=1;goto B4f1708;
case 0x4f170d:goto L4f170d;
case 0x4f1713:c.instructions+=3;goto B4f1713;
case 0x4f171d:c.instructions+=2;goto B4f171d;
case 0x4f1722:c.instructions+=1;goto B4f1722;
case 0x4f1724:goto L4f1724;
case 0x4f1726:c.instructions+=1;goto B4f1726;
case 0x4f1728:goto L4f1728;
case 0x4f1729:c.instructions+=6;goto B4f1729;
case 0x4f172c:c.instructions+=5;goto B4f172c;
case 0x4f1731:c.instructions+=4;goto B4f1731;
case 0x4f1732:c.instructions+=3;goto B4f1732;
case 0x4f1737:c.instructions+=2;goto B4f1737;
case 0x4f173d:c.instructions+=1;goto B4f173d;
case 0x4f1742:goto L4f1742;
case 0x4f1745:c.instructions+=4;goto B4f1745;
case 0x4f1746:c.instructions+=3;goto B4f1746;
case 0x4f1747:c.instructions+=2;goto B4f1747;
case 0x4f1748:c.instructions+=1;goto B4f1748;
case 0x4f1749:goto L4f1749;
case 0x4f174b:c.instructions+=1;goto B4f174b;
case 0x4f174d:goto L4f174d;
case 0x4f1752:goto L4f1752;
case 0x4f1753:c.instructions+=2;goto B4f1753;
case 0x4f1758:c.instructions+=1;goto B4f1758;
case 0x4f175d:goto L4f175d;
case 0x4f1762:c.instructions+=3;goto B4f1762;
case 0x4f1765:c.instructions+=2;goto B4f1765;
case 0x4f1767:c.instructions+=1;goto B4f1767;
case 0x4f1769:goto L4f1769;
case 0x4f176e:goto L4f176e;
case 0x4f176f:c.instructions+=2;goto B4f176f;
case 0x4f1774:c.instructions+=1;goto B4f1774;
case 0x4f1779:goto L4f1779;
case 0x4f177e:c.instructions+=12;goto B4f177e;
case 0x4f1781:c.instructions+=11;goto B4f1781;
case 0x4f1783:c.instructions+=10;goto B4f1783;
case 0x4f1786:c.instructions+=9;goto B4f1786;
case 0x4f1787:c.instructions+=8;goto B4f1787;
case 0x4f178d:c.instructions+=7;goto B4f178d;
case 0x4f1793:c.instructions+=6;goto B4f1793;
case 0x4f1799:c.instructions+=5;goto B4f1799;
case 0x4f179e:c.instructions+=4;goto B4f179e;
case 0x4f179f:c.instructions+=3;goto B4f179f;
case 0x4f17a2:c.instructions+=2;goto B4f17a2;
case 0x4f17a3:c.instructions+=1;goto B4f17a3;
case 0x4f17a8:goto L4f17a8;
case 0x4f17aa:c.instructions+=1;goto B4f17aa;
case 0x4f17ac:goto L4f17ac;
case 0x4f17af:c.instructions+=2;goto B4f17af;
case 0x4f17b4:c.instructions+=1;goto B4f17b4;
case 0x4f17b9:goto L4f17b9;
case 0x4f17ba:c.instructions+=6;goto B4f17ba;
case 0x4f17bc:c.instructions+=5;goto B4f17bc;
case 0x4f17be:c.instructions+=4;goto B4f17be;
case 0x4f17c3:c.instructions+=3;goto B4f17c3;
case 0x4f17c8:c.instructions+=2;goto B4f17c8;
case 0x4f17c9:c.instructions+=1;goto B4f17c9;
case 0x4f17ce:goto L4f17ce;
case 0x4f17d1:c.instructions+=4;goto B4f17d1;
case 0x4f17d2:c.instructions+=3;goto B4f17d2;
case 0x4f17d3:c.instructions+=2;goto B4f17d3;
case 0x4f17d4:c.instructions+=1;goto B4f17d4;
case 0x4f17d5:goto L4f17d5;
case 0x4f17d7:c.instructions+=2;goto B4f17d7;
case 0x4f17dc:c.instructions+=1;goto B4f17dc;
case 0x4f17e1:goto L4f17e1;
case 0x4f17e7:c.instructions+=3;goto B4f17e7;
case 0x4f17ea:c.instructions+=2;goto B4f17ea;
case 0x4f17eb:c.instructions+=1;goto B4f17eb;
case 0x4f17f0:goto L4f17f0;
case 0x4f17f3:c.instructions+=3;goto B4f17f3;
case 0x4f17f4:c.instructions+=2;goto B4f17f4;
case 0x4f17f9:c.instructions+=1;goto B4f17f9;
case 0x4f17fe:goto L4f17fe;
case 0x4f1801:c.instructions+=4;goto B4f1801;
case 0x4f1802:c.instructions+=3;goto B4f1802;
case 0x4f1807:c.instructions+=2;goto B4f1807;
case 0x4f1808:c.instructions+=1;goto B4f1808;
case 0x4f180d:goto L4f180d;
case 0x4f1813:c.instructions+=1;goto B4f1813;
case 0x4f1816:goto L4f1816;
case 0x4f1817:goto L4f1817;
case 0x4f1818:c.instructions+=2;goto B4f1818;
case 0x4f1819:c.instructions+=1;goto B4f1819;
case 0x4f1820:goto L4f1820;
case 0x4f1822:c.instructions+=7;goto B4f1822;
case 0x4f1827:c.instructions+=6;goto B4f1827;
case 0x4f182d:c.instructions+=5;goto B4f182d;
case 0x4f182e:c.instructions+=4;goto B4f182e;
case 0x4f1835:c.instructions+=3;goto B4f1835;
case 0x4f1836:c.instructions+=2;goto B4f1836;
case 0x4f183b:c.instructions+=1;goto B4f183b;
case 0x4f1840:goto L4f1840;
case 0x4f1843:c.instructions+=4;goto B4f1843;
case 0x4f1847:c.instructions+=3;goto B4f1847;
case 0x4f1849:c.instructions+=2;goto B4f1849;
case 0x4f1851:c.instructions+=1;goto B4f1851;
case 0x4f1853:goto L4f1853;
case 0x4f1857:c.instructions+=3;goto B4f1857;
case 0x4f1858:c.instructions+=2;goto B4f1858;
case 0x4f185a:c.instructions+=1;goto B4f185a;
case 0x4f185f:goto L4f185f;
case 0x4f1863:c.instructions+=3;goto B4f1863;
case 0x4f186a:c.instructions+=2;goto B4f186a;
case 0x4f186d:c.instructions+=1;goto B4f186d;
case 0x4f186e:goto L4f186e;
case 0x4f1872:c.instructions+=4;goto B4f1872;
case 0x4f1874:c.instructions+=3;goto B4f1874;
case 0x4f187b:c.instructions+=2;goto B4f187b;
case 0x4f187e:c.instructions+=1;goto B4f187e;
case 0x4f1880:goto L4f1880;
case 0x4f1882:c.instructions+=7;goto B4f1882;
case 0x4f1887:c.instructions+=6;goto B4f1887;
case 0x4f188d:c.instructions+=5;goto B4f188d;
case 0x4f188e:c.instructions+=4;goto B4f188e;
case 0x4f1895:c.instructions+=3;goto B4f1895;
case 0x4f1896:c.instructions+=2;goto B4f1896;
case 0x4f189b:c.instructions+=1;goto B4f189b;
case 0x4f18a0:goto L4f18a0;
case 0x4f18a3:c.instructions+=4;goto B4f18a3;
case 0x4f18a7:c.instructions+=3;goto B4f18a7;
case 0x4f18a9:c.instructions+=2;goto B4f18a9;
case 0x4f18b1:c.instructions+=1;goto B4f18b1;
case 0x4f18b3:goto L4f18b3;
case 0x4f18b7:c.instructions+=3;goto B4f18b7;
case 0x4f18b8:c.instructions+=2;goto B4f18b8;
case 0x4f18ba:c.instructions+=1;goto B4f18ba;
case 0x4f18bf:goto L4f18bf;
case 0x4f18c3:c.instructions+=3;goto B4f18c3;
case 0x4f18ca:c.instructions+=2;goto B4f18ca;
case 0x4f18cd:c.instructions+=1;goto B4f18cd;
case 0x4f18ce:goto L4f18ce;
case 0x4f18d2:c.instructions+=4;goto B4f18d2;
case 0x4f18d4:c.instructions+=3;goto B4f18d4;
case 0x4f18db:c.instructions+=2;goto B4f18db;
case 0x4f18de:c.instructions+=1;goto B4f18de;
case 0x4f18e0:goto L4f18e0;
case 0x4f18e2:c.instructions+=7;goto B4f18e2;
case 0x4f18e7:c.instructions+=6;goto B4f18e7;
case 0x4f18ed:c.instructions+=5;goto B4f18ed;
case 0x4f18ee:c.instructions+=4;goto B4f18ee;
case 0x4f18f5:c.instructions+=3;goto B4f18f5;
case 0x4f18f6:c.instructions+=2;goto B4f18f6;
case 0x4f18fb:c.instructions+=1;goto B4f18fb;
case 0x4f1900:goto L4f1900;
case 0x4f1903:c.instructions+=4;goto B4f1903;
case 0x4f1907:c.instructions+=3;goto B4f1907;
case 0x4f1909:c.instructions+=2;goto B4f1909;
case 0x4f1911:c.instructions+=1;goto B4f1911;
case 0x4f1913:goto L4f1913;
case 0x4f1917:c.instructions+=3;goto B4f1917;
case 0x4f1918:c.instructions+=2;goto B4f1918;
case 0x4f191a:c.instructions+=1;goto B4f191a;
case 0x4f191f:goto L4f191f;
case 0x4f1923:c.instructions+=3;goto B4f1923;
case 0x4f192a:c.instructions+=2;goto B4f192a;
case 0x4f192d:c.instructions+=1;goto B4f192d;
case 0x4f192e:goto L4f192e;
case 0x4f1932:c.instructions+=4;goto B4f1932;
case 0x4f1934:c.instructions+=3;goto B4f1934;
case 0x4f193b:c.instructions+=2;goto B4f193b;
case 0x4f193e:c.instructions+=1;goto B4f193e;
case 0x4f1940:goto L4f1940;
case 0x4f1942:c.instructions+=7;goto B4f1942;
case 0x4f1947:c.instructions+=6;goto B4f1947;
case 0x4f194d:c.instructions+=5;goto B4f194d;
case 0x4f194e:c.instructions+=4;goto B4f194e;
case 0x4f1955:c.instructions+=3;goto B4f1955;
case 0x4f1956:c.instructions+=2;goto B4f1956;
case 0x4f195b:c.instructions+=1;goto B4f195b;
case 0x4f1960:goto L4f1960;
case 0x4f1963:c.instructions+=4;goto B4f1963;
case 0x4f1967:c.instructions+=3;goto B4f1967;
case 0x4f1969:c.instructions+=2;goto B4f1969;
case 0x4f1971:c.instructions+=1;goto B4f1971;
case 0x4f1973:goto L4f1973;
case 0x4f1977:c.instructions+=3;goto B4f1977;
case 0x4f1978:c.instructions+=2;goto B4f1978;
case 0x4f197a:c.instructions+=1;goto B4f197a;
case 0x4f197f:goto L4f197f;
case 0x4f1983:c.instructions+=3;goto B4f1983;
case 0x4f198a:c.instructions+=2;goto B4f198a;
case 0x4f198d:c.instructions+=1;goto B4f198d;
case 0x4f198e:goto L4f198e;
case 0x4f1992:c.instructions+=4;goto B4f1992;
case 0x4f1994:c.instructions+=3;goto B4f1994;
case 0x4f199b:c.instructions+=2;goto B4f199b;
case 0x4f199e:c.instructions+=1;goto B4f199e;
case 0x4f19a0:goto L4f19a0;
case 0x4f19a1:c.instructions+=8;goto B4f19a1;
case 0x4f19a5:c.instructions+=7;goto B4f19a5;
case 0x4f19a6:c.instructions+=6;goto B4f19a6;
case 0x4f19a8:c.instructions+=5;goto B4f19a8;
case 0x4f19ab:c.instructions+=4;goto B4f19ab;
case 0x4f19ad:c.instructions+=3;goto B4f19ad;
case 0x4f19ae:c.instructions+=2;goto B4f19ae;
case 0x4f19b2:c.instructions+=1;goto B4f19b2;
case 0x4f19b4:goto L4f19b4;
case 0x4f19b9:c.instructions+=1;goto B4f19b9;
case 0x4f19be:goto L4f19be;
case 0x4f19c1:c.instructions+=2;goto B4f19c1;
case 0x4f19c3:c.instructions+=1;goto B4f19c3;
case 0x4f19c5:goto L4f19c5;
case 0x4f19ca:c.instructions+=1;goto B4f19ca;
case 0x4f19cf:goto L4f19cf;
case 0x4f19d2:c.instructions+=2;goto B4f19d2;
case 0x4f19d4:c.instructions+=1;goto B4f19d4;
case 0x4f19d6:goto L4f19d6;
case 0x4f19da:c.instructions+=7;goto B4f19da;
case 0x4f19de:c.instructions+=6;goto B4f19de;
case 0x4f19df:c.instructions+=5;goto B4f19df;
case 0x4f19e0:c.instructions+=4;goto B4f19e0;
case 0x4f19e1:c.instructions+=3;goto B4f19e1;
case 0x4f19e2:c.instructions+=2;goto B4f19e2;
case 0x4f19e4:c.instructions+=1;goto B4f19e4;
case 0x4f19e9:goto L4f19e9;
case 0x4f19ef:c.instructions+=1;goto B4f19ef;
case 0x4f19f5:goto L4f19f5;
case 0x4f19fb:goto L4f19fb;
case 0x4f1a01:c.instructions+=1;goto B4f1a01;
case 0x4f1a03:goto L4f1a03;
case 0x4f1a05:goto L4f1a05;
case 0x4f1a0b:c.instructions+=1;goto B4f1a0b;
case 0x4f1a0d:goto L4f1a0d;
case 0x4f1a13:c.instructions+=1;goto B4f1a13;
case 0x4f1a19:goto L4f1a19;
case 0x4f1a1d:c.instructions+=1;goto B4f1a1d;
case 0x4f1a22:goto L4f1a22;
case 0x4f1a25:c.instructions+=5;goto B4f1a25;
case 0x4f1a27:c.instructions+=4;goto B4f1a27;
case 0x4f1a2c:c.instructions+=3;goto B4f1a2c;
case 0x4f1a31:c.instructions+=2;goto B4f1a31;
case 0x4f1a32:c.instructions+=1;goto B4f1a32;
case 0x4f1a37:goto L4f1a37;
case 0x4f1a3b:c.instructions+=6;goto B4f1a3b;
case 0x4f1a40:c.instructions+=5;goto B4f1a40;
case 0x4f1a43:c.instructions+=4;goto B4f1a43;
case 0x4f1a48:c.instructions+=3;goto B4f1a48;
case 0x4f1a4b:c.instructions+=2;goto B4f1a4b;
case 0x4f1a50:c.instructions+=1;goto B4f1a50;
case 0x4f1a55:goto L4f1a55;
case 0x4f1a5f:c.instructions+=1;goto B4f1a5f;
case 0x4f1a65:goto L4f1a65;
case 0x4f1a68:c.instructions+=3;goto B4f1a68;
case 0x4f1a69:c.instructions+=2;goto B4f1a69;
case 0x4f1a6e:c.instructions+=1;goto B4f1a6e;
case 0x4f1a73:goto L4f1a73;
case 0x4f1a76:c.instructions+=1;goto B4f1a76;
case 0x4f1a7b:goto L4f1a7b;
case 0x4f1a81:c.instructions+=1;goto B4f1a81;
case 0x4f1a87:goto L4f1a87;
case 0x4f1a91:c.instructions+=1;goto B4f1a91;
case 0x4f1a93:goto L4f1a93;
case 0x4f1a98:c.instructions+=2;goto B4f1a98;
case 0x4f1a9a:c.instructions+=1;goto B4f1a9a;
case 0x4f1a9c:goto L4f1a9c;
case 0x4f1a9f:c.instructions+=10;goto B4f1a9f;
case 0x4f1aa4:c.instructions+=9;goto B4f1aa4;
case 0x4f1aa6:c.instructions+=8;goto B4f1aa6;
case 0x4f1aab:c.instructions+=7;goto B4f1aab;
case 0x4f1ab0:c.instructions+=6;goto B4f1ab0;
case 0x4f1ab5:c.instructions+=5;goto B4f1ab5;
case 0x4f1aba:c.instructions+=4;goto B4f1aba;
case 0x4f1abf:c.instructions+=3;goto B4f1abf;
case 0x4f1ac4:c.instructions+=2;goto B4f1ac4;
case 0x4f1ac5:c.instructions+=1;goto B4f1ac5;
case 0x4f1ac7:goto L4f1ac7;
case 0x4f1aca:c.instructions+=10;goto B4f1aca;
case 0x4f1acf:c.instructions+=9;goto B4f1acf;
case 0x4f1ad1:c.instructions+=8;goto B4f1ad1;
case 0x4f1ad6:c.instructions+=7;goto B4f1ad6;
case 0x4f1adb:c.instructions+=6;goto B4f1adb;
case 0x4f1ae0:c.instructions+=5;goto B4f1ae0;
case 0x4f1ae5:c.instructions+=4;goto B4f1ae5;
case 0x4f1aea:c.instructions+=3;goto B4f1aea;
case 0x4f1aef:c.instructions+=2;goto B4f1aef;
case 0x4f1af0:c.instructions+=1;goto B4f1af0;
case 0x4f1af2:goto L4f1af2;
case 0x4f1af7:c.instructions+=10;goto B4f1af7;
case 0x4f1af9:c.instructions+=9;goto B4f1af9;
case 0x4f1afe:c.instructions+=8;goto B4f1afe;
case 0x4f1b03:c.instructions+=7;goto B4f1b03;
case 0x4f1b08:c.instructions+=6;goto B4f1b08;
case 0x4f1b0d:c.instructions+=5;goto B4f1b0d;
case 0x4f1b12:c.instructions+=4;goto B4f1b12;
case 0x4f1b19:c.instructions+=3;goto B4f1b19;
case 0x4f1b1c:c.instructions+=2;goto B4f1b1c;
case 0x4f1b21:c.instructions+=1;goto B4f1b21;
case 0x4f1b22:goto L4f1b22;
case 0x4f1b27:goto L4f1b27;
case 0x4f1b2a:c.instructions+=2;goto B4f1b2a;
case 0x4f1b2f:c.instructions+=1;goto B4f1b2f;
case 0x4f1b34:goto L4f1b34;
case 0x4f1b36:goto L4f1b36;
case 0x4f1b3c:c.instructions+=2;goto B4f1b3c;
case 0x4f1b3e:c.instructions+=1;goto B4f1b3e;
case 0x4f1b40:goto L4f1b40;
case 0x4f1b42:goto L4f1b42;
case 0x4f1b48:c.instructions+=1;goto B4f1b48;
case 0x4f1b4a:goto L4f1b4a;
case 0x4f1b50:c.instructions+=1;goto B4f1b50;
case 0x4f1b52:goto L4f1b52;
case 0x4f1b58:c.instructions+=1;goto B4f1b58;
case 0x4f1b5a:goto L4f1b5a;
case 0x4f1b5f:c.instructions+=1;goto B4f1b5f;
case 0x4f1b64:goto L4f1b64;
case 0x4f1b68:c.instructions+=2;goto B4f1b68;
case 0x4f1b6f:c.instructions+=1;goto B4f1b6f;
case 0x4f1b71:goto L4f1b71;
case 0x4f1b76:c.instructions+=1;goto B4f1b76;
case 0x4f1b7b:goto L4f1b7b;
case 0x4f1b7f:c.instructions+=2;goto B4f1b7f;
case 0x4f1b86:c.instructions+=1;goto B4f1b86;
case 0x4f1b88:goto L4f1b88;
case 0x4f1b8b:c.instructions+=2;goto B4f1b8b;
case 0x4f1b8c:c.instructions+=1;goto B4f1b8c;
case 0x4f1b91:goto L4f1b91;
case 0x4f1b98:goto L4f1b98;
case 0x4f1b9b:goto L4f1b9b;
case 0x4f1b9f:c.instructions+=8;goto B4f1b9f;
case 0x4f1ba3:c.instructions+=7;goto B4f1ba3;
case 0x4f1ba5:c.instructions+=6;goto B4f1ba5;
case 0x4f1ba6:c.instructions+=5;goto B4f1ba6;
case 0x4f1ba7:c.instructions+=4;goto B4f1ba7;
case 0x4f1ba8:c.instructions+=3;goto B4f1ba8;
case 0x4f1ba9:c.instructions+=2;goto B4f1ba9;
case 0x4f1baf:c.instructions+=1;goto B4f1baf;
case 0x4f1bb4:goto L4f1bb4;
case 0x4f1bb5:c.instructions+=3;goto B4f1bb5;
case 0x4f1bb6:c.instructions+=2;goto B4f1bb6;
case 0x4f1bb7:c.instructions+=1;goto B4f1bb7;
case 0x4f1bc0:goto L4f1bc0;
case 0x4f1bc2:c.instructions+=7;goto B4f1bc2;
case 0x4f1bc7:c.instructions+=6;goto B4f1bc7;
case 0x4f1bcd:c.instructions+=5;goto B4f1bcd;
case 0x4f1bce:c.instructions+=4;goto B4f1bce;
case 0x4f1bd5:c.instructions+=3;goto B4f1bd5;
case 0x4f1bd6:c.instructions+=2;goto B4f1bd6;
case 0x4f1bdb:c.instructions+=1;goto B4f1bdb;
case 0x4f1be0:goto L4f1be0;
case 0x4f1be3:c.instructions+=4;goto B4f1be3;
case 0x4f1be7:c.instructions+=3;goto B4f1be7;
case 0x4f1be9:c.instructions+=2;goto B4f1be9;
case 0x4f1bf1:c.instructions+=1;goto B4f1bf1;
case 0x4f1bf3:goto L4f1bf3;
case 0x4f1bf7:c.instructions+=3;goto B4f1bf7;
case 0x4f1bf8:c.instructions+=2;goto B4f1bf8;
case 0x4f1bfa:c.instructions+=1;goto B4f1bfa;
case 0x4f1bff:goto L4f1bff;
case 0x4f1c03:c.instructions+=3;goto B4f1c03;
case 0x4f1c0a:c.instructions+=2;goto B4f1c0a;
case 0x4f1c0d:c.instructions+=1;goto B4f1c0d;
case 0x4f1c0e:goto L4f1c0e;
case 0x4f1c12:c.instructions+=4;goto B4f1c12;
case 0x4f1c14:c.instructions+=3;goto B4f1c14;
case 0x4f1c1b:c.instructions+=2;goto B4f1c1b;
case 0x4f1c1e:c.instructions+=1;goto B4f1c1e;
case 0x4f1c20:goto L4f1c20;
case 0x4f1c22:c.instructions+=14;goto B4f1c22;
case 0x4f1c27:c.instructions+=13;goto B4f1c27;
case 0x4f1c2d:c.instructions+=12;goto B4f1c2d;
case 0x4f1c2e:c.instructions+=11;goto B4f1c2e;
case 0x4f1c35:c.instructions+=10;goto B4f1c35;
case 0x4f1c38:c.instructions+=9;goto B4f1c38;
case 0x4f1c39:c.instructions+=8;goto B4f1c39;
case 0x4f1c3a:c.instructions+=7;goto B4f1c3a;
case 0x4f1c3b:c.instructions+=6;goto B4f1c3b;
case 0x4f1c3c:c.instructions+=5;goto B4f1c3c;
case 0x4f1c40:c.instructions+=4;goto B4f1c40;
case 0x4f1c42:c.instructions+=3;goto B4f1c42;
case 0x4f1c43:c.instructions+=2;goto B4f1c43;
case 0x4f1c47:c.instructions+=1;goto B4f1c47;
case 0x4f1c4c:goto L4f1c4c;
case 0x4f1c4e:c.instructions+=9;goto B4f1c4e;
case 0x4f1c51:c.instructions+=8;goto B4f1c51;
case 0x4f1c54:c.instructions+=7;goto B4f1c54;
case 0x4f1c58:c.instructions+=6;goto B4f1c58;
case 0x4f1c5e:c.instructions+=5;goto B4f1c5e;
case 0x4f1c61:c.instructions+=4;goto B4f1c61;
case 0x4f1c64:c.instructions+=3;goto B4f1c64;
case 0x4f1c67:c.instructions+=2;goto B4f1c67;
case 0x4f1c6a:c.instructions+=1;goto B4f1c6a;
case 0x4f1c6f:goto L4f1c6f;
case 0x4f1c72:c.instructions+=11;goto B4f1c72;
case 0x4f1c74:c.instructions+=10;goto B4f1c74;
case 0x4f1c75:c.instructions+=9;goto B4f1c75;
case 0x4f1c77:c.instructions+=8;goto B4f1c77;
case 0x4f1c79:c.instructions+=7;goto B4f1c79;
case 0x4f1c7a:c.instructions+=6;goto B4f1c7a;
case 0x4f1c7b:c.instructions+=5;goto B4f1c7b;
case 0x4f1c7c:c.instructions+=4;goto B4f1c7c;
case 0x4f1c82:c.instructions+=3;goto B4f1c82;
case 0x4f1c87:c.instructions+=2;goto B4f1c87;
case 0x4f1c8d:c.instructions+=1;goto B4f1c8d;
case 0x4f1c92:goto L4f1c92;
case 0x4f1c95:c.instructions+=8;goto B4f1c95;
case 0x4f1c96:c.instructions+=7;goto B4f1c96;
case 0x4f1c97:c.instructions+=6;goto B4f1c97;
case 0x4f1c99:c.instructions+=5;goto B4f1c99;
case 0x4f1c9e:c.instructions+=4;goto B4f1c9e;
case 0x4f1c9f:c.instructions+=3;goto B4f1c9f;
case 0x4f1ca5:c.instructions+=2;goto B4f1ca5;
case 0x4f1caa:c.instructions+=1;goto B4f1caa;
case 0x4f1caf:goto L4f1caf;
case 0x4f1cb2:c.instructions+=7;goto B4f1cb2;
case 0x4f1cb3:c.instructions+=6;goto B4f1cb3;
case 0x4f1cb4:c.instructions+=5;goto B4f1cb4;
case 0x4f1cb5:c.instructions+=4;goto B4f1cb5;
case 0x4f1cba:c.instructions+=3;goto B4f1cba;
case 0x4f1cbb:c.instructions+=2;goto B4f1cbb;
case 0x4f1cc1:c.instructions+=1;goto B4f1cc1;
case 0x4f1cc6:goto L4f1cc6;
case 0x4f1cc9:c.instructions+=7;goto B4f1cc9;
case 0x4f1cca:c.instructions+=6;goto B4f1cca;
case 0x4f1ccb:c.instructions+=5;goto B4f1ccb;
case 0x4f1ccd:c.instructions+=4;goto B4f1ccd;
case 0x4f1cd2:c.instructions+=3;goto B4f1cd2;
case 0x4f1cd3:c.instructions+=2;goto B4f1cd3;
case 0x4f1cd9:c.instructions+=1;goto B4f1cd9;
case 0x4f1cde:goto L4f1cde;
case 0x4f1ce4:c.instructions+=6;goto B4f1ce4;
case 0x4f1ce6:c.instructions+=5;goto B4f1ce6;
case 0x4f1cec:c.instructions+=4;goto B4f1cec;
case 0x4f1cf2:c.instructions+=3;goto B4f1cf2;
case 0x4f1cf8:c.instructions+=2;goto B4f1cf8;
case 0x4f1d02:c.instructions+=1;goto B4f1d02;
case 0x4f1d07:goto L4f1d07;
case 0x4f1d0a:c.instructions+=3;goto B4f1d0a;
case 0x4f1d0b:c.instructions+=2;goto B4f1d0b;
case 0x4f1d10:c.instructions+=1;goto B4f1d10;
case 0x4f1d15:goto L4f1d15;
case 0x4f1d17:c.instructions+=1;goto B4f1d17;
case 0x4f1d1c:goto L4f1d1c;
case 0x4f1d1e:c.instructions+=2;goto B4f1d1e;
case 0x4f1d23:c.instructions+=1;goto B4f1d23;
case 0x4f1d27:goto L4f1d27;
case 0x4f1d29:goto L4f1d29;
case 0x4f1d2c:c.instructions+=16;goto B4f1d2c;
case 0x4f1d30:c.instructions+=15;goto B4f1d30;
case 0x4f1d38:c.instructions+=14;goto B4f1d38;
case 0x4f1d40:c.instructions+=13;goto B4f1d40;
case 0x4f1d43:c.instructions+=12;goto B4f1d43;
case 0x4f1d44:c.instructions+=11;goto B4f1d44;
case 0x4f1d48:c.instructions+=10;goto B4f1d48;
case 0x4f1d49:c.instructions+=9;goto B4f1d49;
case 0x4f1d4b:c.instructions+=8;goto B4f1d4b;
case 0x4f1d53:c.instructions+=7;goto B4f1d53;
case 0x4f1d5b:c.instructions+=6;goto B4f1d5b;
case 0x4f1d5f:c.instructions+=5;goto B4f1d5f;
case 0x4f1d63:c.instructions+=4;goto B4f1d63;
case 0x4f1d6b:c.instructions+=3;goto B4f1d6b;
case 0x4f1d6f:c.instructions+=2;goto B4f1d6f;
case 0x4f1d77:c.instructions+=1;goto B4f1d77;
case 0x4f1d7a:goto L4f1d7a;
case 0x4f1d7d:c.instructions+=4;goto B4f1d7d;
case 0x4f1d82:c.instructions+=3;goto B4f1d82;
case 0x4f1d87:c.instructions+=2;goto B4f1d87;
case 0x4f1d88:c.instructions+=1;goto B4f1d88;
case 0x4f1d8d:goto L4f1d8d;
case 0x4f1d90:c.instructions+=2;goto B4f1d90;
case 0x4f1d91:c.instructions+=1;goto B4f1d91;
case 0x4f1d96:goto L4f1d96;
case 0x4f1d99:c.instructions+=2;goto B4f1d99;
case 0x4f1d9e:c.instructions+=1;goto B4f1d9e;
case 0x4f1da3:goto L4f1da3;
case 0x4f1da4:c.instructions+=2;goto B4f1da4;
case 0x4f1da5:c.instructions+=1;goto B4f1da5;
case 0x4f1daa:goto L4f1daa;
case 0x4f1dad:c.instructions+=4;goto B4f1dad;
case 0x4f1db0:c.instructions+=3;goto B4f1db0;
case 0x4f1db5:c.instructions+=2;goto B4f1db5;
case 0x4f1dba:c.instructions+=1;goto B4f1dba;
case 0x4f1dbf:goto L4f1dbf;
case 0x4f1dc2:c.instructions+=3;goto B4f1dc2;
case 0x4f1dc3:c.instructions+=2;goto B4f1dc3;
case 0x4f1dc4:c.instructions+=1;goto B4f1dc4;
case 0x4f1dc9:goto L4f1dc9;
case 0x4f1dcc:c.instructions+=4;goto B4f1dcc;
case 0x4f1dce:c.instructions+=3;goto B4f1dce;
case 0x4f1dd0:c.instructions+=2;goto B4f1dd0;
case 0x4f1dd2:c.instructions+=1;goto B4f1dd2;
case 0x4f1dd7:goto L4f1dd7;
case 0x4f1dd9:c.instructions+=1;goto B4f1dd9;
case 0x4f1dde:goto L4f1dde;
case 0x4f1ddf:c.instructions+=4;goto B4f1ddf;
case 0x4f1de2:c.instructions+=3;goto B4f1de2;
case 0x4f1de7:c.instructions+=2;goto B4f1de7;
case 0x4f1de8:c.instructions+=1;goto B4f1de8;
case 0x4f1ded:goto L4f1ded;
case 0x4f1def:c.instructions+=1;goto B4f1def;
case 0x4f1df4:goto L4f1df4;
case 0x4f1df6:c.instructions+=1;goto B4f1df6;
case 0x4f1df8:goto L4f1df8;
case 0x4f1dfb:c.instructions+=2;goto B4f1dfb;
case 0x4f1e00:c.instructions+=1;goto B4f1e00;
case 0x4f1e05:goto L4f1e05;
case 0x4f1e06:c.instructions+=6;goto B4f1e06;
case 0x4f1e0b:c.instructions+=5;goto B4f1e0b;
case 0x4f1e10:c.instructions+=4;goto B4f1e10;
case 0x4f1e15:c.instructions+=3;goto B4f1e15;
case 0x4f1e1a:c.instructions+=2;goto B4f1e1a;
case 0x4f1e1b:c.instructions+=1;goto B4f1e1b;
case 0x4f1e20:goto L4f1e20;
case 0x4f1e23:c.instructions+=1;goto B4f1e23;
case 0x4f1e25:goto L4f1e25;
case 0x4f1e27:goto L4f1e27;
case 0x4f1e29:c.instructions+=1;goto B4f1e29;
case 0x4f1e2e:goto L4f1e2e;
case 0x4f1e38:c.instructions+=1;goto B4f1e38;
case 0x4f1e3f:goto L4f1e3f;
case 0x4f1e43:c.instructions+=8;goto B4f1e43;
case 0x4f1e44:c.instructions+=7;goto B4f1e44;
case 0x4f1e46:c.instructions+=6;goto B4f1e46;
case 0x4f1e47:c.instructions+=5;goto B4f1e47;
case 0x4f1e48:c.instructions+=4;goto B4f1e48;
case 0x4f1e49:c.instructions+=3;goto B4f1e49;
case 0x4f1e50:c.instructions+=2;goto B4f1e50;
case 0x4f1e53:c.instructions+=1;goto B4f1e53;
case 0x4f1e60:goto L4f1e60;
case 0x4f1e64:c.instructions+=4;goto B4f1e64;
case 0x4f1e69:c.instructions+=3;goto B4f1e69;
case 0x4f1e6a:c.instructions+=2;goto B4f1e6a;
case 0x4f1e6c:c.instructions+=1;goto B4f1e6c;
case 0x4f1e72:goto L4f1e72;
case 0x4f1e78:goto L4f1e78;
case 0x4f1e7d:c.instructions+=1;goto B4f1e7d;
case 0x4f1e83:goto L4f1e83;
case 0x4f1e85:goto L4f1e85;
case 0x4f1e8a:c.instructions+=1;goto B4f1e8a;
case 0x4f1e90:goto L4f1e90;
case 0x4f1e95:c.instructions+=1;goto B4f1e95;
case 0x4f1e97:goto L4f1e97;
case 0x4f1e9c:c.instructions+=1;goto B4f1e9c;
case 0x4f1ea2:goto L4f1ea2;
case 0x4f1ea8:c.instructions+=2;goto B4f1ea8;
case 0x4f1eaa:c.instructions+=1;goto B4f1eaa;
case 0x4f1eb0:goto L4f1eb0;
case 0x4f1eb6:c.instructions+=5;goto B4f1eb6;
case 0x4f1eb9:c.instructions+=4;goto B4f1eb9;
case 0x4f1eba:c.instructions+=3;goto B4f1eba;
case 0x4f1ebc:c.instructions+=2;goto B4f1ebc;
case 0x4f1ec1:c.instructions+=1;goto B4f1ec1;
case 0x4f1ec6:goto L4f1ec6;
case 0x4f1ec9:c.instructions+=5;goto B4f1ec9;
case 0x4f1ecb:c.instructions+=4;goto B4f1ecb;
case 0x4f1ed0:c.instructions+=3;goto B4f1ed0;
case 0x4f1ed1:c.instructions+=2;goto B4f1ed1;
case 0x4f1ed6:c.instructions+=1;goto B4f1ed6;
case 0x4f1edb:goto L4f1edb;
case 0x4f1ede:c.instructions+=2;goto B4f1ede;
case 0x4f1edf:c.instructions+=1;goto B4f1edf;
case 0x4f1ee2:goto L4f1ee2;
case 0x4f1ee5:c.instructions+=6;goto B4f1ee5;
case 0x4f1ee8:c.instructions+=5;goto B4f1ee8;
case 0x4f1ee9:c.instructions+=4;goto B4f1ee9;
case 0x4f1eea:c.instructions+=3;goto B4f1eea;
case 0x4f1eeb:c.instructions+=2;goto B4f1eeb;
case 0x4f1ef1:c.instructions+=1;goto B4f1ef1;
case 0x4f1ef6:goto L4f1ef6;
case 0x4f1efc:c.instructions+=2;goto B4f1efc;
case 0x4f1efe:c.instructions+=1;goto B4f1efe;
case 0x4f1f03:goto L4f1f03;
case 0x4f1f05:c.instructions+=2;goto B4f1f05;
case 0x4f1f07:c.instructions+=1;goto B4f1f07;
case 0x4f1f0c:goto L4f1f0c;
case 0x4f1f0f:c.instructions+=3;goto B4f1f0f;
case 0x4f1f11:c.instructions+=2;goto B4f1f11;
case 0x4f1f12:c.instructions+=1;goto B4f1f12;
case 0x4f1f18:goto L4f1f18;
case 0x4f1f1b:c.instructions+=5;goto B4f1f1b;
case 0x4f1f1d:c.instructions+=4;goto B4f1f1d;
case 0x4f1f22:c.instructions+=3;goto B4f1f22;
case 0x4f1f27:c.instructions+=2;goto B4f1f27;
case 0x4f1f28:c.instructions+=1;goto B4f1f28;
case 0x4f1f2d:goto L4f1f2d;
case 0x4f1f30:c.instructions+=2;goto B4f1f30;
case 0x4f1f31:c.instructions+=1;goto B4f1f31;
case 0x4f1f34:goto L4f1f34;
case 0x4f1f39:c.instructions+=1;goto B4f1f39;
case 0x4f1f3b:goto L4f1f3b;
case 0x4f1f40:c.instructions+=1;goto B4f1f40;
case 0x4f1f46:goto L4f1f46;
case 0x4f1f48:c.instructions+=2;goto B4f1f48;
case 0x4f1f4a:c.instructions+=1;goto B4f1f4a;
case 0x4f1f4f:goto L4f1f4f;
case 0x4f1f50:c.instructions+=1;goto B4f1f50;
case 0x4f1f53:goto L4f1f53;
case 0x4f1f56:c.instructions+=5;goto B4f1f56;
case 0x4f1f57:c.instructions+=4;goto B4f1f57;
case 0x4f1f59:c.instructions+=3;goto B4f1f59;
case 0x4f1f5c:c.instructions+=2;goto B4f1f5c;
case 0x4f1f5f:c.instructions+=1;goto B4f1f5f;
case 0x4f1f61:goto L4f1f61;
case 0x4f1f68:c.instructions+=2;goto B4f1f68;
case 0x4f1f69:c.instructions+=1;goto B4f1f69;
case 0x4f1f6c:goto L4f1f6c;
case 0x4f1f72:c.instructions+=2;goto B4f1f72;
case 0x4f1f7c:c.instructions+=1;goto B4f1f7c;
case 0x4f1f81:goto L4f1f81;
case 0x4f1f83:c.instructions+=3;goto B4f1f83;
case 0x4f1f85:c.instructions+=2;goto B4f1f85;
case 0x4f1f87:c.instructions+=1;goto B4f1f87;
case 0x4f1f8c:goto L4f1f8c;
case 0x4f1f8e:c.instructions+=2;goto B4f1f8e;
case 0x4f1f98:c.instructions+=1;goto B4f1f98;
case 0x4f1f9d:goto L4f1f9d;
case 0x4f1f9e:c.instructions+=1;goto B4f1f9e;
case 0x4f1fa1:goto L4f1fa1;
case 0x4f1fa4:c.instructions+=4;goto B4f1fa4;
case 0x4f1fa6:c.instructions+=3;goto B4f1fa6;
case 0x4f1fab:c.instructions+=2;goto B4f1fab;
case 0x4f1fac:c.instructions+=1;goto B4f1fac;
case 0x4f1fb1:goto L4f1fb1;
case 0x4f1fb4:c.instructions+=2;goto B4f1fb4;
case 0x4f1fb5:c.instructions+=1;goto B4f1fb5;
case 0x4f1fb8:goto L4f1fb8;
case 0x4f1fbd:c.instructions+=1;goto B4f1fbd;
case 0x4f1fc3:goto L4f1fc3;
case 0x4f1fc5:goto L4f1fc5;
case 0x4f1fca:c.instructions+=1;goto B4f1fca;
case 0x4f1fcc:goto L4f1fcc;
case 0x4f1fd1:c.instructions+=1;goto B4f1fd1;
case 0x4f1fd7:goto L4f1fd7;
case 0x4f1fdd:c.instructions+=1;goto B4f1fdd;
case 0x4f1fdf:goto L4f1fdf;
case 0x4f1fe9:goto L4f1fe9;
case 0x4f1fef:c.instructions+=4;goto B4f1fef;
case 0x4f1ff5:c.instructions+=3;goto B4f1ff5;
case 0x4f1ff7:c.instructions+=2;goto B4f1ff7;
case 0x4f1ff9:c.instructions+=1;goto B4f1ff9;
case 0x4f1ffe:goto L4f1ffe;
default:missing_instruction(c.pc);}
B4f1001:L4f1001:{c.instructions+=3;NFSU2_TR(0x4f1001);
w4(R+4,u32(0x850080ull));
}
B4f1006:{NFSU2_TR(0x4f1006);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f100d:{NFSU2_TR(0x4f100d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1012ull));
TAIL_STATIC(0x5031d0u,503);
}
B4f1012:L4f1012:{c.instructions+=3;NFSU2_TR(0x4f1012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1013:{NFSU2_TR(0x4f1013);
u8 U[4];
w4(U+0,u32(0x2756fb2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1018:{NFSU2_TR(0x4f1018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f101dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f101d:L4f101d:{c.instructions+=6;NFSU2_TR(0x4f101d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1020:{NFSU2_TR(0x4f1020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1021:{NFSU2_TR(0x4f1021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1022:{NFSU2_TR(0x4f1022);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1028:{NFSU2_TR(0x4f1028);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1029:{NFSU2_TR(0x4f1029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f102eull));
TAIL_STATIC(0x4cfcb0u,4cf);
}
B4f102e:L4f102e:{c.instructions+=11;NFSU2_TR(0x4f102e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f1031:{NFSU2_TR(0x4f1031);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1035:{NFSU2_TR(0x4f1035);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1039:{NFSU2_TR(0x4f1039);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f103b:{NFSU2_TR(0x4f103b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f103c:{NFSU2_TR(0x4f103c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f103d:{NFSU2_TR(0x4f103d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f103e:{NFSU2_TR(0x4f103e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1044:{NFSU2_TR(0x4f1044);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1045:{NFSU2_TR(0x4f1045);
__builtin_memmove((R+4),(R+28),4);
}
B4f1047:{NFSU2_TR(0x4f1047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f104cull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4f104c:L4f104c:{c.instructions+=2;NFSU2_TR(0x4f104c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f104e:{NFSU2_TR(0x4f104e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f1072;}}
}
B4f1050:L4f1050:{c.instructions+=3;NFSU2_TR(0x4f1050);
__builtin_memmove((R+0),gp(0x837b71),1);
}
B4f1055:{NFSU2_TR(0x4f1055);
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
B4f1057:{NFSU2_TR(0x4f1057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1064;}}
}
B4f1059:L4f1059:{c.instructions+=2;NFSU2_TR(0x4f1059);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f105f:{NFSU2_TR(0x4f105f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1064ull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4f1064:L4f1064:{c.instructions+=6;NFSU2_TR(0x4f1064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1065:{NFSU2_TR(0x4f1065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1066:{NFSU2_TR(0x4f1066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f1067:{NFSU2_TR(0x4f1067);
s1(0x837b71,u8(0x1ull));
}
B4f106e:{NFSU2_TR(0x4f106e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f106f:{NFSU2_TR(0x4f106f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1072:L4f1072:{c.instructions+=2;NFSU2_TR(0x4f1072);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1075:{NFSU2_TR(0x4f1075);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f10c4;}}
}
B4f1077:L4f1077:{c.instructions+=3;NFSU2_TR(0x4f1077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f1079:{NFSU2_TR(0x4f1079);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f107b:{NFSU2_TR(0x4f107b);
if(r1(R+518)){{goto L4f108c;}}
}
B4f107d:L4f107d:{c.instructions+=2;NFSU2_TR(0x4f107d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f107e:{NFSU2_TR(0x4f107e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1083ull));
TAIL_STATIC(0x540a60u,540);
}
B4f1083:L4f1083:{c.instructions+=2;NFSU2_TR(0x4f1083);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1086:{NFSU2_TR(0x4f1086);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f108c:L4f108c:{c.instructions+=11;NFSU2_TR(0x4f108c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f108f:{NFSU2_TR(0x4f108f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1092:{NFSU2_TR(0x4f1092);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1097:{NFSU2_TR(0x4f1097);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1099:{NFSU2_TR(0x4f1099);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f109e:{NFSU2_TR(0x4f109e);
u8 U[4];
w4(U+0,u32(0x73c044ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f10a3:{NFSU2_TR(0x4f10a3);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f10a8:{NFSU2_TR(0x4f10a8);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f10ad:{NFSU2_TR(0x4f10ad);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f10b2:{NFSU2_TR(0x4f10b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f10b3:{NFSU2_TR(0x4f10b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f10b8ull));
TAIL_STATIC(0x558860u,558);
}
B4f10b8:L4f10b8:{c.instructions+=7;NFSU2_TR(0x4f10b8);
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
B4f10bb:{NFSU2_TR(0x4f10bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f10bd:{NFSU2_TR(0x4f10bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f10be:{NFSU2_TR(0x4f10be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f10bf:{NFSU2_TR(0x4f10bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f10c0:{NFSU2_TR(0x4f10c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f10c1:{NFSU2_TR(0x4f10c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f10c4:L4f10c4:{c.instructions+=2;NFSU2_TR(0x4f10c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f10c7:{NFSU2_TR(0x4f10c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1131;}}
}
B4f10c9:L4f10c9:{c.instructions+=6;NFSU2_TR(0x4f10c9);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f10cf:{NFSU2_TR(0x4f10cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4f10d5:{NFSU2_TR(0x4f10d5);
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
B4f10d7:{NFSU2_TR(0x4f10d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f10da:{NFSU2_TR(0x4f10da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f10dd:{NFSU2_TR(0x4f10dd);
if(r1(R+518)){{goto L4f10fb;}}
}
B4f10df:L4f10df:{c.instructions+=3;NFSU2_TR(0x4f10df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f10e9:{NFSU2_TR(0x4f10e9);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f10ef:{NFSU2_TR(0x4f10ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f10f4ull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4f10f4:L4f10f4:{c.instructions+=5;NFSU2_TR(0x4f10f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f10f5:{NFSU2_TR(0x4f10f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f10f6:{NFSU2_TR(0x4f10f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f10f7:{NFSU2_TR(0x4f10f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f10f8:{NFSU2_TR(0x4f10f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f10fb:L4f10fb:{c.instructions+=2;NFSU2_TR(0x4f10fb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x61757468ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61757468ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x61757468ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1100:{NFSU2_TR(0x4f1100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f113a;}}
}
B4f1102:L4f1102:{c.instructions+=2;NFSU2_TR(0x4f1102);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x696b6579ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x696b6579ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x696b6579ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1108:{NFSU2_TR(0x4f1108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f113a;}}
}
B4f110a:L4f110a:{c.instructions+=1;NFSU2_TR(0x4f110a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f110full));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f110f:L4f110f:{c.instructions+=3;NFSU2_TR(0x4f110f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f1115:{NFSU2_TR(0x4f1115);
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
B4f1117:{NFSU2_TR(0x4f1117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f113a;}}
}
B4f1119:L4f1119:{c.instructions+=4;NFSU2_TR(0x4f1119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f111c:{NFSU2_TR(0x4f111c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f111d:{NFSU2_TR(0x4f111d);
u8 U[4];
w4(U+0,u32(0xf6734aa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1122:{NFSU2_TR(0x4f1122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1127ull));
TAIL_STATIC(0x51ce60u,51c);
}
B4f1127:L4f1127:{c.instructions+=6;NFSU2_TR(0x4f1127);
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
B4f112a:{NFSU2_TR(0x4f112a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f112b:{NFSU2_TR(0x4f112b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f112c:{NFSU2_TR(0x4f112c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f112d:{NFSU2_TR(0x4f112d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f112e:{NFSU2_TR(0x4f112e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1131:L4f1131:{c.instructions+=2;NFSU2_TR(0x4f1131);
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
B4f1133:{NFSU2_TR(0x4f1133);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f113a;}}
}
B4f1135:L4f1135:{c.instructions+=1;NFSU2_TR(0x4f1135);
__builtin_memmove(gp(0x837b71),(R+0),1);
}
B4f113a:L4f113a:{c.instructions+=5;NFSU2_TR(0x4f113a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f113b:{NFSU2_TR(0x4f113b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f113c:{NFSU2_TR(0x4f113c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f113d:{NFSU2_TR(0x4f113d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f113e:{NFSU2_TR(0x4f113e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1150:L4f1150:{c.instructions+=17;NFSU2_TR(0x4f1150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1151:{NFSU2_TR(0x4f1151);
__builtin_memmove((R+20),(R+16),4);
}
B4f1153:{NFSU2_TR(0x4f1153);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4f1156:{NFSU2_TR(0x4f1156);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1158:{NFSU2_TR(0x4f1158);
u8 U[4];
w4(U+0,u32(0x776560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f115d:{NFSU2_TR(0x4f115d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1163:{NFSU2_TR(0x4f1163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1164:{NFSU2_TR(0x4f1164);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f116b:{NFSU2_TR(0x4f116b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x908ull))));
}
B4f1171:{NFSU2_TR(0x4f1171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1174:{NFSU2_TR(0x4f1174);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1175:{NFSU2_TR(0x4f1175);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1176:{NFSU2_TR(0x4f1176);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1177:{NFSU2_TR(0x4f1177);
__builtin_memmove((R+24),(R+4),4);
}
B4f1179:{NFSU2_TR(0x4f1179);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f117a:{NFSU2_TR(0x4f117a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f117e:{NFSU2_TR(0x4f117e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1183ull));
TAIL_STATIC(0x551de0u,551);
}
B4f1183:L4f1183:{c.instructions+=13;NFSU2_TR(0x4f1183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1186:{NFSU2_TR(0x4f1186);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1188:{NFSU2_TR(0x4f1188);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f118a:{NFSU2_TR(0x4f118a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f118b:{NFSU2_TR(0x4f118b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f118c:{NFSU2_TR(0x4f118c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f118e:{NFSU2_TR(0x4f118e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f118f:{NFSU2_TR(0x4f118f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1190:{NFSU2_TR(0x4f1190);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1191:{NFSU2_TR(0x4f1191);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1194:{NFSU2_TR(0x4f1194);
u8 U[8];
w4(U+0,u32(u32(u32(0x938ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f119b:{NFSU2_TR(0x4f119b);
u8 U[4];
w4(U+0,u32(0x795fd0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f11a1:{NFSU2_TR(0x4f11a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f11a6ull));
TAIL_STATIC(0x542ca0u,542);
}
B4f11a6:L4f11a6:{c.instructions+=11;NFSU2_TR(0x4f11a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f11ad:{NFSU2_TR(0x4f11ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f11b3:{NFSU2_TR(0x4f11b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f11b9:{NFSU2_TR(0x4f11b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f11bf:{NFSU2_TR(0x4f11bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f11c5:{NFSU2_TR(0x4f11c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f11cb:{NFSU2_TR(0x4f11cb);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4f11d1:{NFSU2_TR(0x4f11d1);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4f11d7:{NFSU2_TR(0x4f11d7);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4f11dd:{NFSU2_TR(0x4f11dd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4f11e3:{NFSU2_TR(0x4f11e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f11e8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4f11e8:L4f11e8:{c.instructions+=42;NFSU2_TR(0x4f11e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f11ee:{NFSU2_TR(0x4f11ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f11f4:{NFSU2_TR(0x4f11f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f11fe:{NFSU2_TR(0x4f11fe);
__builtin_memmove((R+4),gp(0x8500ca),1);
}
B4f1204:{NFSU2_TR(0x4f1204);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f120a:{NFSU2_TR(0x4f120a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1210:{NFSU2_TR(0x4f1210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f1212:{NFSU2_TR(0x4f1212);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1215:{NFSU2_TR(0x4f1215);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1218:{NFSU2_TR(0x4f1218);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f121b:{NFSU2_TR(0x4f121b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f121e:{NFSU2_TR(0x4f121e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1221:{NFSU2_TR(0x4f1221);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1224:{NFSU2_TR(0x4f1224);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1227:{NFSU2_TR(0x4f1227);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f122a:{NFSU2_TR(0x4f122a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f122d:{NFSU2_TR(0x4f122d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1230:{NFSU2_TR(0x4f1230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1231:{NFSU2_TR(0x4f1231);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1232:{NFSU2_TR(0x4f1232);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1234:{NFSU2_TR(0x4f1234);
u8 U[4];
w4(U+0,u32(0x7978e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1239:{NFSU2_TR(0x4f1239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f123a:{NFSU2_TR(0x4f123a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1240:{NFSU2_TR(0x4f1240);
u8 U[5];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1248:{NFSU2_TR(0x4f1248);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f124e:{NFSU2_TR(0x4f124e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1254:{NFSU2_TR(0x4f1254);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f125a:{NFSU2_TR(0x4f125a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1260:{NFSU2_TR(0x4f1260);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f1266:{NFSU2_TR(0x4f1266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f126c:{NFSU2_TR(0x4f126c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1272:{NFSU2_TR(0x4f1272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1278:{NFSU2_TR(0x4f1278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f127e:{NFSU2_TR(0x4f127e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1284:{NFSU2_TR(0x4f1284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f128a:{NFSU2_TR(0x4f128a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1290:{NFSU2_TR(0x4f1290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1296:{NFSU2_TR(0x4f1296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f129c:{NFSU2_TR(0x4f129c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f12a2:{NFSU2_TR(0x4f12a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f12a8:{NFSU2_TR(0x4f12a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f12ae:{NFSU2_TR(0x4f12ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f12b3ull));
TAIL_STATIC(0x542ac0u,542);
}
B4f12b3:L4f12b3:{c.instructions+=5;NFSU2_TR(0x4f12b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f12ba:{NFSU2_TR(0x4f12ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f12c0:{NFSU2_TR(0x4f12c0);
__builtin_memmove(gp(0x836388),(R+12),4);
}
B4f12c6:{NFSU2_TR(0x4f12c6);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f12d0:{NFSU2_TR(0x4f12d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f12f6;}}
}
B4f12d2:L4f12d2:{c.instructions+=4;NFSU2_TR(0x4f12d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f12d5:{NFSU2_TR(0x4f12d5);
u8 U[4];
w4(U+0,u32(0xe50258b1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f12da:{NFSU2_TR(0x4f12da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f12de:{NFSU2_TR(0x4f12de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f12e3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f12e3:L4f12e3:{c.instructions+=5;NFSU2_TR(0x4f12e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f12e4:{NFSU2_TR(0x4f12e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f12e8:{NFSU2_TR(0x4f12e8);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f12ed:{NFSU2_TR(0x4f12ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f12ee:{NFSU2_TR(0x4f12ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f12f3ull));
TAIL_STATIC(0x537b80u,537);
}
B4f12f3:L4f12f3:{c.instructions+=1;NFSU2_TR(0x4f12f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f12f6:L4f12f6:{c.instructions+=4;NFSU2_TR(0x4f12f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f12f8:{NFSU2_TR(0x4f12f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f12f9:{NFSU2_TR(0x4f12f9);
__builtin_memmove((R+4),(R+28),4);
}
B4f12fb:{NFSU2_TR(0x4f12fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1300ull));
TAIL_STATIC(0x4cfd80u,4cf);
}
B4f1300:L4f1300:{c.instructions+=2;NFSU2_TR(0x4f1300);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1307:{NFSU2_TR(0x4f1307);
if(r1(R+518)){{goto L4f1313;}}
}
B4f1309:L4f1309:{c.instructions+=2;NFSU2_TR(0x4f1309);
w4(R+4,u32(0x89cf48ull));
}
B4f130e:{NFSU2_TR(0x4f130e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1313ull));
TAIL_STATIC(0x5f0150u,5f0);
}
B4f1313:L4f1313:{c.instructions+=1;NFSU2_TR(0x4f1313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1318ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f1318:L4f1318:{c.instructions+=3;NFSU2_TR(0x4f1318);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1319:{NFSU2_TR(0x4f1319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f131f:{NFSU2_TR(0x4f131f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1324ull));
TAIL_STATIC(0x58f740u,58f);
}
B4f1324:L4f1324:{c.instructions+=6;NFSU2_TR(0x4f1324);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1327:{NFSU2_TR(0x4f1327);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1328:{NFSU2_TR(0x4f1328);
u8 U[4];
w4(U+0,u32(0x4d17f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f132d:{NFSU2_TR(0x4f132d);
__builtin_memmove((R+4),(R+0),4);
}
B4f132f:{NFSU2_TR(0x4f132f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1335:{NFSU2_TR(0x4f1335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f133aull));
TAIL_STATIC(0x58a790u,58a);
}
B4f133a:L4f133a:{c.instructions+=7;NFSU2_TR(0x4f133a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1344:{NFSU2_TR(0x4f1344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4f1347:{NFSU2_TR(0x4f1347);
__builtin_memmove(gp(0x838528),(R+4),1);
}
B4f134d:{NFSU2_TR(0x4f134d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1350:{NFSU2_TR(0x4f1350);
u8 U[4];
w4(U+0,u32(0x626eb826ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1355:{NFSU2_TR(0x4f1355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1356:{NFSU2_TR(0x4f1356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f135bull));
TAIL_STATIC(0x52cea0u,52c);
}
B4f135b:L4f135b:{c.instructions+=5;NFSU2_TR(0x4f135b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f135e:{NFSU2_TR(0x4f135e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1361:{NFSU2_TR(0x4f1361);
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
B4f1364:{NFSU2_TR(0x4f1364);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1365:{NFSU2_TR(0x4f1365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f136aull));
TAIL_STATIC(0x504820u,504);
}
B4f136a:L4f136a:{c.instructions+=7;NFSU2_TR(0x4f136a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f136d:{NFSU2_TR(0x4f136d);
u8 U[4];
w4(U+0,u32(0x7980ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1372:{NFSU2_TR(0x4f1372);
u8 U[4];
w4(U+0,u32(0x4059a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1377:{NFSU2_TR(0x4f1377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1378:{NFSU2_TR(0x4f1378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1382:{NFSU2_TR(0x4f1382);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1389:{NFSU2_TR(0x4f1389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f138eull));
TAIL_STATIC(0x537b80u,537);
}
B4f138e:L4f138e:{c.instructions+=5;NFSU2_TR(0x4f138e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1391:{NFSU2_TR(0x4f1391);
u8 U[4];
w4(U+0,u32(0x7980ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1396:{NFSU2_TR(0x4f1396);
u8 U[4];
w4(U+0,u32(0x154d771cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f139b:{NFSU2_TR(0x4f139b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f139c:{NFSU2_TR(0x4f139c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f13a1ull));
TAIL_STATIC(0x537b80u,537);
}
B4f13a1:L4f13a1:{c.instructions+=6;NFSU2_TR(0x4f13a1);
__builtin_memmove((R+0),gp(0x8500c4),1);
}
B4f13a6:{NFSU2_TR(0x4f13a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f13ac:{NFSU2_TR(0x4f13ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f13af:{NFSU2_TR(0x4f13af);
__builtin_memmove((R+4),(R+24),4);
}
B4f13b1:{NFSU2_TR(0x4f13b1);
__builtin_memmove(gp(0x8500c4),(R+12),1);
}
B4f13b7:{NFSU2_TR(0x4f13b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f13bcull));
TAIL_STATIC(0x4e3ed0u,4e3);
}
B4f13bc:L4f13bc:{c.instructions+=2;NFSU2_TR(0x4f13bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f13c0:{NFSU2_TR(0x4f13c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f13c5ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4f13c5:L4f13c5:{c.instructions+=7;NFSU2_TR(0x4f13c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13c6:{NFSU2_TR(0x4f13c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13c7:{NFSU2_TR(0x4f13c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13c8:{NFSU2_TR(0x4f13c8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13ca:{NFSU2_TR(0x4f13ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f13ce:{NFSU2_TR(0x4f13ce);
u8 U[5];
w4(U+0,u32(u32(u32(0x92cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f13d6:{NFSU2_TR(0x4f13d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f13dbull));
TAIL_STATIC(0x610270u,610);
}
B4f13db:L4f13db:{c.instructions+=7;NFSU2_TR(0x4f13db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13dc:{NFSU2_TR(0x4f13dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f13e0:{NFSU2_TR(0x4f13e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13e1:{NFSU2_TR(0x4f13e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13e2:{NFSU2_TR(0x4f13e2);
w4(R+4,u32(0x83a9d0ull));
}
B4f13e7:{NFSU2_TR(0x4f13e7);
u8 U[5];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f13ef:{NFSU2_TR(0x4f13ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f13f4ull));
TAIL_STATIC(0x515d00u,515);
}
B4f13f4:L4f13f4:{c.instructions+=2;NFSU2_TR(0x4f13f4);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f13f9:{NFSU2_TR(0x4f13f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f13feull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f13fe:L4f13fe:{c.instructions+=3;NFSU2_TR(0x4f13fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1401:{NFSU2_TR(0x4f1401);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f1403:{NFSU2_TR(0x4f1403);
if(r1(R+518)){{goto L4f1416;}}
}
B4f1405:L4f1405:{c.instructions+=2;NFSU2_TR(0x4f1405);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f140a:{NFSU2_TR(0x4f140a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f140full));
TAIL_STATIC(0x51bd10u,51b);
}
B4f140f:L4f140f:{c.instructions+=3;NFSU2_TR(0x4f140f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1412:{NFSU2_TR(0x4f1412);
__builtin_memmove((R+28),(R+0),4);
}
B4f1414:{NFSU2_TR(0x4f1414);
{goto L4f143f;}
}
B4f1416:L4f1416:{c.instructions+=2;NFSU2_TR(0x4f1416);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f141b:{NFSU2_TR(0x4f141b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1420ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f1420:L4f1420:{c.instructions+=3;NFSU2_TR(0x4f1420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1423:{NFSU2_TR(0x4f1423);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f1425:{NFSU2_TR(0x4f1425);
if(r1(R+518)){{goto L4f143d;}}
}
B4f1427:L4f1427:{c.instructions+=2;NFSU2_TR(0x4f1427);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f142c:{NFSU2_TR(0x4f142c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1431ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4f1431:L4f1431:{c.instructions+=3;NFSU2_TR(0x4f1431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1434:{NFSU2_TR(0x4f1434);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1436:{NFSU2_TR(0x4f1436);
if(r1(R+518)){{goto L4f143d;}}
}
B4f1438:L4f1438:{c.instructions+=2;NFSU2_TR(0x4f1438);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f143b:{NFSU2_TR(0x4f143b);
{goto L4f143f;}
}
B4f143d:L4f143d:{c.instructions+=1;NFSU2_TR(0x4f143d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f143f:L4f143f:{c.instructions+=4;NFSU2_TR(0x4f143f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f1443:{NFSU2_TR(0x4f1443);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1444:{NFSU2_TR(0x4f1444);
w4(R+4,u32(0x8371b0ull));
}
B4f1449:{NFSU2_TR(0x4f1449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f144eull));
TAIL_STATIC(0x413440u,413);
}
B4f144e:L4f144e:{c.instructions+=3;NFSU2_TR(0x4f144e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1450:{NFSU2_TR(0x4f1450);
s4(0x83623c,u32(0x2ull));
}
B4f145a:{NFSU2_TR(0x4f145a);
if(r1(R+518)){{goto L4f146a;}}
}
B4f145c:L4f145c:{c.instructions+=4;NFSU2_TR(0x4f145c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f145e:{NFSU2_TR(0x4f145e);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1463:{NFSU2_TR(0x4f1463);
__builtin_memmove((R+4),(R+28),4);
}
B4f1465:{NFSU2_TR(0x4f1465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f146aull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4f146a:L4f146a:{c.instructions+=2;NFSU2_TR(0x4f146a);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f146f:{NFSU2_TR(0x4f146f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1474ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f1474:L4f1474:{c.instructions+=3;NFSU2_TR(0x4f1474);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1477:{NFSU2_TR(0x4f1477);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f1479:{NFSU2_TR(0x4f1479);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f148c;}}
}
B4f147b:L4f147b:{c.instructions+=6;NFSU2_TR(0x4f147b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f147c:{NFSU2_TR(0x4f147c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f147d:{NFSU2_TR(0x4f147d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f147e:{NFSU2_TR(0x4f147e);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1483:{NFSU2_TR(0x4f1483);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1484:{NFSU2_TR(0x4f1484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1489ull));
TAIL_STATIC(0x555f50u,555);
}
B4f1489:L4f1489:{c.instructions+=1;NFSU2_TR(0x4f1489);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f148c:L4f148c:{c.instructions+=3;NFSU2_TR(0x4f148c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f148f:{NFSU2_TR(0x4f148f);
u8 U[4];
w4(U+0,u32(0x7980d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1494:{NFSU2_TR(0x4f1494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1499ull));
TAIL_STATIC(0x505450u,505);
}
B4f1499:L4f1499:{c.instructions+=3;NFSU2_TR(0x4f1499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f149a:{NFSU2_TR(0x4f149a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f149b:{NFSU2_TR(0x4f149b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14a0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f14a0:L4f14a0:{c.instructions+=4;NFSU2_TR(0x4f14a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f14a3:{NFSU2_TR(0x4f14a3);
u8 U[4];
w4(U+0,u32(0x7980b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14a8:{NFSU2_TR(0x4f14a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f14ae:{NFSU2_TR(0x4f14ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14b3ull));
TAIL_STATIC(0x505450u,505);
}
B4f14b3:L4f14b3:{c.instructions+=3;NFSU2_TR(0x4f14b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14b4:{NFSU2_TR(0x4f14b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14b5:{NFSU2_TR(0x4f14b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14baull));
TAIL_STATIC(0x5379c0u,537);
}
B4f14ba:L4f14ba:{c.instructions+=4;NFSU2_TR(0x4f14ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f14bd:{NFSU2_TR(0x4f14bd);
u8 U[4];
w4(U+0,u32(0x798098ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14c2:{NFSU2_TR(0x4f14c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f14c8:{NFSU2_TR(0x4f14c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14cdull));
TAIL_STATIC(0x505450u,505);
}
B4f14cd:L4f14cd:{c.instructions+=3;NFSU2_TR(0x4f14cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14ce:{NFSU2_TR(0x4f14ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14cf:{NFSU2_TR(0x4f14cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14d4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f14d4:L4f14d4:{c.instructions+=4;NFSU2_TR(0x4f14d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f14d7:{NFSU2_TR(0x4f14d7);
u8 U[4];
w4(U+0,u32(0x79807cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14dc:{NFSU2_TR(0x4f14dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f14e2:{NFSU2_TR(0x4f14e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14e7ull));
TAIL_STATIC(0x505450u,505);
}
B4f14e7:L4f14e7:{c.instructions+=3;NFSU2_TR(0x4f14e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14e8:{NFSU2_TR(0x4f14e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14e9:{NFSU2_TR(0x4f14e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f14eeull));
TAIL_STATIC(0x5379c0u,537);
}
B4f14ee:L4f14ee:{c.instructions+=5;NFSU2_TR(0x4f14ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f14f4:{NFSU2_TR(0x4f14f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f14f7:{NFSU2_TR(0x4f14f7);
u8 U[4];
w4(U+0,u32(0x626eb826ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14fc:{NFSU2_TR(0x4f14fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f14fd:{NFSU2_TR(0x4f14fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1502ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f1502:L4f1502:{c.instructions+=5;NFSU2_TR(0x4f1502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1508:{NFSU2_TR(0x4f1508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f150b:{NFSU2_TR(0x4f150b);
u8 U[4];
w4(U+0,u32(0xd4d9d042ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1510:{NFSU2_TR(0x4f1510);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1511:{NFSU2_TR(0x4f1511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1516ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f1516:L4f1516:{c.instructions+=6;NFSU2_TR(0x4f1516);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4f1519:{NFSU2_TR(0x4f1519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f151f:{NFSU2_TR(0x4f151f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1522:{NFSU2_TR(0x4f1522);
u8 U[4];
w4(U+0,u32(0x14b76941ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1527:{NFSU2_TR(0x4f1527);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1528:{NFSU2_TR(0x4f1528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f152dull));
TAIL_STATIC(0x5379c0u,537);
}
B4f152d:L4f152d:{c.instructions+=5;NFSU2_TR(0x4f152d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1533:{NFSU2_TR(0x4f1533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1536:{NFSU2_TR(0x4f1536);
u8 U[4];
w4(U+0,u32(0x68cf7b18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f153b:{NFSU2_TR(0x4f153b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f153c:{NFSU2_TR(0x4f153c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1541ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f1541:L4f1541:{c.instructions+=5;NFSU2_TR(0x4f1541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1547:{NFSU2_TR(0x4f1547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f154a:{NFSU2_TR(0x4f154a);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f154f:{NFSU2_TR(0x4f154f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1550:{NFSU2_TR(0x4f1550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1555ull));
TAIL_STATIC(0x537a60u,537);
}
B4f1555:L4f1555:{c.instructions+=5;NFSU2_TR(0x4f1555);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f155b:{NFSU2_TR(0x4f155b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f155e:{NFSU2_TR(0x4f155e);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1563:{NFSU2_TR(0x4f1563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1564:{NFSU2_TR(0x4f1564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1569ull));
TAIL_STATIC(0x537a60u,537);
}
B4f1569:L4f1569:{c.instructions+=5;NFSU2_TR(0x4f1569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f156c:{NFSU2_TR(0x4f156c);
__builtin_memmove((R+4),(R+24),4);
}
B4f156e:{NFSU2_TR(0x4f156e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1574:{NFSU2_TR(0x4f1574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f157a:{NFSU2_TR(0x4f157a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f157full));
TAIL_STATIC(0x49ed30u,49e);
}
B4f157f:L4f157f:{c.instructions+=4;NFSU2_TR(0x4f157f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1582:{NFSU2_TR(0x4f1582);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1587:{NFSU2_TR(0x4f1587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1588:{NFSU2_TR(0x4f1588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f158dull));
TAIL_STATIC(0x5379c0u,537);
}
B4f158d:L4f158d:{c.instructions+=2;NFSU2_TR(0x4f158d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f158e:{NFSU2_TR(0x4f158e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1593ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f1593:L4f1593:{c.instructions+=4;NFSU2_TR(0x4f1593);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f1596:{NFSU2_TR(0x4f1596);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1597:{NFSU2_TR(0x4f1597);
__builtin_memmove((R+4),(R+24),4);
}
B4f1599:{NFSU2_TR(0x4f1599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f159eull));
TAIL_STATIC(0x4d1380u,4d1);
}
B4f159e:L4f159e:{c.instructions+=1;NFSU2_TR(0x4f159e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15a3ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f15a3:L4f15a3:{c.instructions+=2;NFSU2_TR(0x4f15a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15a4:{NFSU2_TR(0x4f15a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15a9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f15a9:L4f15a9:{c.instructions+=3;NFSU2_TR(0x4f15a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f15ac:{NFSU2_TR(0x4f15ac);
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
B4f15ae:{NFSU2_TR(0x4f15ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f15c8;}}
}
B4f15b0:L4f15b0:{c.instructions+=5;NFSU2_TR(0x4f15b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f15b3:{NFSU2_TR(0x4f15b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15b4:{NFSU2_TR(0x4f15b4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15b9:{NFSU2_TR(0x4f15b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15ba:{NFSU2_TR(0x4f15ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15bfull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f15bf:L4f15bf:{c.instructions+=2;NFSU2_TR(0x4f15bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15c0:{NFSU2_TR(0x4f15c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15c5ull));
TAIL_STATIC(0x555f10u,555);
}
B4f15c5:L4f15c5:{c.instructions+=1;NFSU2_TR(0x4f15c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f15c8:L4f15c8:{c.instructions+=2;NFSU2_TR(0x4f15c8);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f15ce:{NFSU2_TR(0x4f15ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15d3ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4f15d3:L4f15d3:{c.instructions+=6;NFSU2_TR(0x4f15d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f15d6:{NFSU2_TR(0x4f15d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f15d9:{NFSU2_TR(0x4f15d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15da:{NFSU2_TR(0x4f15da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f15db:{NFSU2_TR(0x4f15db);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f15e1:{NFSU2_TR(0x4f15e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15e6ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4f15e6:L4f15e6:{c.instructions+=3;NFSU2_TR(0x4f15e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f15ed:{NFSU2_TR(0x4f15ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f15f5:{NFSU2_TR(0x4f15f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f15faull));
TAIL_STATIC(0x4022c0u,402);
}
B4f15fa:L4f15fa:{c.instructions+=9;NFSU2_TR(0x4f15fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1601:{NFSU2_TR(0x4f1601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1602:{NFSU2_TR(0x4f1602);
__builtin_memmove((R+0),(R+24),4);
}
B4f1604:{NFSU2_TR(0x4f1604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1605:{NFSU2_TR(0x4f1605);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f160c:{NFSU2_TR(0x4f160c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f160d:{NFSU2_TR(0x4f160d);
__builtin_memmove((R+16),(R+20),4);
}
B4f160f:{NFSU2_TR(0x4f160f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f1610:{NFSU2_TR(0x4f1610);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1620:L4f1620:{c.instructions+=6;NFSU2_TR(0x4f1620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1621:{NFSU2_TR(0x4f1621);
__builtin_memmove((R+24),(R+4),4);
}
B4f1623:{NFSU2_TR(0x4f1623);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1624:{NFSU2_TR(0x4f1624);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1627:{NFSU2_TR(0x4f1627);
__builtin_memmove((R+4),(R+28),4);
}
B4f1629:{NFSU2_TR(0x4f1629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f162eull));
TAIL_STATIC(0x51f530u,51f);
}
B4f162e:L4f162e:{c.instructions+=2;NFSU2_TR(0x4f162e);
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
B4f1630:{NFSU2_TR(0x4f1630);
if(r1(R+518)){{goto L4f1817;}}
}
B4f1636:L4f1636:{c.instructions+=3;NFSU2_TR(0x4f1636);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f163b:{NFSU2_TR(0x4f163b);
__builtin_memmove((R+4),(R+28),4);
}
B4f163d:{NFSU2_TR(0x4f163d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1642ull));
TAIL_STATIC(0x51f530u,51f);
}
B4f1642:L4f1642:{c.instructions+=2;NFSU2_TR(0x4f1642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1643:{NFSU2_TR(0x4f1643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1648ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4f1648:L4f1648:{c.instructions+=3;NFSU2_TR(0x4f1648);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f164b:{NFSU2_TR(0x4f164b);
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
B4f164d:{NFSU2_TR(0x4f164d);
if(r1(R+518)){{goto L4f1817;}}
}
B4f1653:L4f1653:{c.instructions+=5;NFSU2_TR(0x4f1653);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1654:{NFSU2_TR(0x4f1654);
w4(R+12,u32(0x1ull));
}
B4f1659:{NFSU2_TR(0x4f1659);
__builtin_memmove((R+4),(R+28),4);
}
B4f165b:{NFSU2_TR(0x4f165b);
__builtin_memmove(gp(0x850084),(R+12),4);
}
B4f1661:{NFSU2_TR(0x4f1661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1666ull));
TAIL_STATIC(0x51f530u,51f);
}
B4f1666:L4f1666:{c.instructions+=3;NFSU2_TR(0x4f1666);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1667:{NFSU2_TR(0x4f1667);
__builtin_memmove((R+4),(R+28),4);
}
B4f1669:{NFSU2_TR(0x4f1669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f166eull));
TAIL_STATIC(0x51f350u,51f);
}
B4f166e:L4f166e:{c.instructions+=4;NFSU2_TR(0x4f166e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1671:{NFSU2_TR(0x4f1671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1677:{NFSU2_TR(0x4f1677);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1678:{NFSU2_TR(0x4f1678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f167dull));
TAIL_STATIC(0x58ae30u,58a);
}
B4f167d:L4f167d:{c.instructions+=3;NFSU2_TR(0x4f167d);
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
B4f167f:{NFSU2_TR(0x4f167f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1685:{NFSU2_TR(0x4f1685);
if(r1(R+518)){{goto L4f1816;}}
}
B4f168b:L4f168b:{c.instructions+=2;NFSU2_TR(0x4f168b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4f1691:{NFSU2_TR(0x4f1691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1706;}}
}
B4f1693:L4f1693:{c.instructions+=4;NFSU2_TR(0x4f1693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f1695:{NFSU2_TR(0x4f1695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1696:{NFSU2_TR(0x4f1696);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1698:{NFSU2_TR(0x4f1698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f169dull));
TAIL_STATIC(0x58f740u,58f);
}
B4f169d:L4f169d:{c.instructions+=3;NFSU2_TR(0x4f169d);
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
B4f16a0:{NFSU2_TR(0x4f16a0);
__builtin_memmove((R+4),(R+0),4);
}
B4f16a2:{NFSU2_TR(0x4f16a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f16a7ull));
TAIL_STATIC(0x584b50u,584);
}
B4f16a7:L4f16a7:{c.instructions+=2;NFSU2_TR(0x4f16a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f16a9:{NFSU2_TR(0x4f16a9);
if(r1(R+518)){{goto L4f1706;}}
}
B4f16ab:L4f16ab:{c.instructions+=3;NFSU2_TR(0x4f16ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f16ae:{NFSU2_TR(0x4f16ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f16b1:{NFSU2_TR(0x4f16b1);
if(r1(R+518)){{goto L4f16ff;}}
}
B4f16b3:L4f16b3:{c.instructions+=2;NFSU2_TR(0x4f16b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f16b6:{NFSU2_TR(0x4f16b6);
if(r1(R+518)){{goto L4f16ff;}}
}
B4f16b8:L4f16b8:{c.instructions+=2;NFSU2_TR(0x4f16b8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xafull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xafull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f16bd:{NFSU2_TR(0x4f16bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f1706;}}
}
B4f16bf:L4f16bf:{c.instructions+=1;NFSU2_TR(0x4f16bf);
u8 U[4];
w4(U+0,u32(0xa492ae15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16c4:L4f16c4:{c.instructions+=3;NFSU2_TR(0x4f16c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f16ca:{NFSU2_TR(0x4f16ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f16cd:{NFSU2_TR(0x4f16cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f16d2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f16d2:L4f16d2:{c.instructions+=10;NFSU2_TR(0x4f16d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16d3:{NFSU2_TR(0x4f16d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16d4:{NFSU2_TR(0x4f16d4);
u8 U[4];
w4(U+0,u32(0xf7f19667ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16d9:{NFSU2_TR(0x4f16d9);
u8 U[4];
w4(U+0,u32(0xf7f19667ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16de:{NFSU2_TR(0x4f16de);
u8 U[4];
w4(U+0,u32(0xbd6234afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16e3:{NFSU2_TR(0x4f16e3);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16e8:{NFSU2_TR(0x4f16e8);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16ed:{NFSU2_TR(0x4f16ed);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16f2:{NFSU2_TR(0x4f16f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f16f3:{NFSU2_TR(0x4f16f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f16f8ull));
TAIL_STATIC(0x558750u,558);
}
B4f16f8:L4f16f8:{c.instructions+=5;NFSU2_TR(0x4f16f8);
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
B4f16fb:{NFSU2_TR(0x4f16fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f16fc:{NFSU2_TR(0x4f16fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f16fd:{NFSU2_TR(0x4f16fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f16fe:{NFSU2_TR(0x4f16fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f16ff:L4f16ff:{c.instructions+=2;NFSU2_TR(0x4f16ff);
u8 U[4];
w4(U+0,u32(0x243f8e1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1704:{NFSU2_TR(0x4f1704);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f16c4u);}goto L4f16c4;}
}
B4f1706:L4f1706:{c.instructions+=2;NFSU2_TR(0x4f1706);
__builtin_memmove((R+4),(R+24),4);
}
B4f1708:{NFSU2_TR(0x4f1708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f170dull));
TAIL_STATIC(0x4e4130u,4e4);
}
B4f170d:L4f170d:{c.instructions+=4;NFSU2_TR(0x4f170d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1713:{NFSU2_TR(0x4f1713);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4f171d:{NFSU2_TR(0x4f171d);
__builtin_memmove((R+0),gp(0x836388),4);
}
B4f1722:{NFSU2_TR(0x4f1722);
if(r1(R+518)){{goto L4f1749;}}
}
B4f1724:L4f1724:{c.instructions+=2;NFSU2_TR(0x4f1724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1726:{NFSU2_TR(0x4f1726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1752;}}
}
B4f1728:L4f1728:{c.instructions+=7;NFSU2_TR(0x4f1728);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1729:{NFSU2_TR(0x4f1729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f172c:{NFSU2_TR(0x4f172c);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1731:{NFSU2_TR(0x4f1731);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1732:{NFSU2_TR(0x4f1732);
u8 U[4];
w4(U+0,u32(0x794d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1737:{NFSU2_TR(0x4f1737);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f173d:{NFSU2_TR(0x4f173d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1742ull));
TAIL_STATIC(0x555eb0u,555);
}
B4f1742:L4f1742:{c.instructions+=5;NFSU2_TR(0x4f1742);
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
B4f1745:{NFSU2_TR(0x4f1745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f1746:{NFSU2_TR(0x4f1746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1747:{NFSU2_TR(0x4f1747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1748:{NFSU2_TR(0x4f1748);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1749:L4f1749:{c.instructions+=2;NFSU2_TR(0x4f1749);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f174b:{NFSU2_TR(0x4f174b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1752;}}
}
B4f174d:L4f174d:{c.instructions+=1;NFSU2_TR(0x4f174d);
w4(R+0,u32(0x783fe5ull));
}
B4f1752:L4f1752:{c.instructions+=3;NFSU2_TR(0x4f1752);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1753:{NFSU2_TR(0x4f1753);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1758:{NFSU2_TR(0x4f1758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f175dull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4f175d:L4f175d:{c.instructions+=4;NFSU2_TR(0x4f175d);
__builtin_memmove((R+0),gp(0x836388),4);
}
B4f1762:{NFSU2_TR(0x4f1762);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f1765:{NFSU2_TR(0x4f1765);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1767:{NFSU2_TR(0x4f1767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f176e;}}
}
B4f1769:L4f1769:{c.instructions+=1;NFSU2_TR(0x4f1769);
w4(R+0,u32(0x783fe5ull));
}
B4f176e:L4f176e:{c.instructions+=3;NFSU2_TR(0x4f176e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f176f:{NFSU2_TR(0x4f176f);
u8 U[4];
w4(U+0,u32(0x8500a9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1774:{NFSU2_TR(0x4f1774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1779ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4f1779:L4f1779:{c.instructions+=13;NFSU2_TR(0x4f1779);
__builtin_memmove((R+0),gp(0x836388),4);
}
B4f177e:{NFSU2_TR(0x4f177e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f1781:{NFSU2_TR(0x4f1781);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1783:{NFSU2_TR(0x4f1783);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4f1786:{NFSU2_TR(0x4f1786);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1787:{NFSU2_TR(0x4f1787);
__builtin_memmove(gp(0x85009b),(R+4),1);
}
B4f178d:{NFSU2_TR(0x4f178d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1793:{NFSU2_TR(0x4f1793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1799:{NFSU2_TR(0x4f1799);
u8 U[4];
w4(U+0,u32(0x49eb10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f179e:{NFSU2_TR(0x4f179e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f179f:{NFSU2_TR(0x4f179f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4f17a2:{NFSU2_TR(0x4f17a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17a3:{NFSU2_TR(0x4f17a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f17a8ull));
TAIL_STATIC(0x58d6b0u,58d);
}
B4f17a8:L4f17a8:{c.instructions+=2;NFSU2_TR(0x4f17a8);
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
B4f17aa:{NFSU2_TR(0x4f17aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4f17d5;}}
}
B4f17ac:L4f17ac:{c.instructions+=3;NFSU2_TR(0x4f17ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f17af:{NFSU2_TR(0x4f17af);
u8 U[4];
w4(U+0,u32(0xe3a9ab2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17b4:{NFSU2_TR(0x4f17b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f17b9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f17b9:L4f17b9:{c.instructions+=7;NFSU2_TR(0x4f17b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17ba:{NFSU2_TR(0x4f17ba);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17bc:{NFSU2_TR(0x4f17bc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17be:{NFSU2_TR(0x4f17be);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17c3:{NFSU2_TR(0x4f17c3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17c8:{NFSU2_TR(0x4f17c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17c9:{NFSU2_TR(0x4f17c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f17ceull));
TAIL_STATIC(0x558540u,558);
}
B4f17ce:L4f17ce:{c.instructions+=5;NFSU2_TR(0x4f17ce);
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
B4f17d1:{NFSU2_TR(0x4f17d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f17d2:{NFSU2_TR(0x4f17d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f17d3:{NFSU2_TR(0x4f17d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f17d4:{NFSU2_TR(0x4f17d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f17d5:L4f17d5:{c.instructions+=3;NFSU2_TR(0x4f17d5);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17d7:{NFSU2_TR(0x4f17d7);
w4(R+4,u32(0x850080ull));
}
B4f17dc:{NFSU2_TR(0x4f17dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f17e1ull));
TAIL_STATIC(0x5031b0u,503);
}
B4f17e1:L4f17e1:{c.instructions+=4;NFSU2_TR(0x4f17e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f17e7:{NFSU2_TR(0x4f17e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f17ea:{NFSU2_TR(0x4f17ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17eb:{NFSU2_TR(0x4f17eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f17f0ull));
TAIL_STATIC(0x582950u,582);
}
B4f17f0:L4f17f0:{c.instructions+=4;NFSU2_TR(0x4f17f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f17f3:{NFSU2_TR(0x4f17f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17f4:{NFSU2_TR(0x4f17f4);
u8 U[4];
w4(U+0,u32(0xd48fba40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f17f9:{NFSU2_TR(0x4f17f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f17feull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f17fe:L4f17fe:{c.instructions+=5;NFSU2_TR(0x4f17fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1801:{NFSU2_TR(0x4f1801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1802:{NFSU2_TR(0x4f1802);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1807:{NFSU2_TR(0x4f1807);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1808:{NFSU2_TR(0x4f1808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f180dull));
TAIL_STATIC(0x558310u,558);
}
B4f180d:L4f180d:{c.instructions+=2;NFSU2_TR(0x4f180d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1813:{NFSU2_TR(0x4f1813);
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
B4f1816:L4f1816:{c.instructions+=1;NFSU2_TR(0x4f1816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f1817:L4f1817:{c.instructions+=3;NFSU2_TR(0x4f1817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1818:{NFSU2_TR(0x4f1818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1819:{NFSU2_TR(0x4f1819);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1820:L4f1820:{c.instructions+=8;NFSU2_TR(0x4f1820);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1822:{NFSU2_TR(0x4f1822);
u8 U[4];
w4(U+0,u32(0x776584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1827:{NFSU2_TR(0x4f1827);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f182d:{NFSU2_TR(0x4f182d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f182e:{NFSU2_TR(0x4f182e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1835:{NFSU2_TR(0x4f1835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1836:{NFSU2_TR(0x4f1836);
u8 U[4];
w4(U+0,u32(0x11c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f183b:{NFSU2_TR(0x4f183b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1840ull));
TAIL_STATIC(0x575620u,575);
}
B4f1840:L4f1840:{c.instructions+=5;NFSU2_TR(0x4f1840);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1843:{NFSU2_TR(0x4f1843);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f1847:{NFSU2_TR(0x4f1847);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1849:{NFSU2_TR(0x4f1849);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1851:{NFSU2_TR(0x4f1851);
if(r1(R+518)){{goto L4f186e;}}
}
B4f1853:L4f1853:{c.instructions+=4;NFSU2_TR(0x4f1853);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1857:{NFSU2_TR(0x4f1857);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1858:{NFSU2_TR(0x4f1858);
__builtin_memmove((R+4),(R+0),4);
}
B4f185a:{NFSU2_TR(0x4f185a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f185full));
TAIL_STATIC(0x4e4320u,4e4);
}
B4f185f:L4f185f:{c.instructions+=4;NFSU2_TR(0x4f185f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1863:{NFSU2_TR(0x4f1863);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f186a:{NFSU2_TR(0x4f186a);
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
B4f186d:{NFSU2_TR(0x4f186d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f186e:L4f186e:{c.instructions+=5;NFSU2_TR(0x4f186e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1872:{NFSU2_TR(0x4f1872);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f1874:{NFSU2_TR(0x4f1874);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f187b:{NFSU2_TR(0x4f187b);
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
B4f187e:{NFSU2_TR(0x4f187e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1880:L4f1880:{c.instructions+=8;NFSU2_TR(0x4f1880);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1882:{NFSU2_TR(0x4f1882);
u8 U[4];
w4(U+0,u32(0x7765a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1887:{NFSU2_TR(0x4f1887);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f188d:{NFSU2_TR(0x4f188d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f188e:{NFSU2_TR(0x4f188e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1895:{NFSU2_TR(0x4f1895);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1896:{NFSU2_TR(0x4f1896);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f189b:{NFSU2_TR(0x4f189b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f18a0ull));
TAIL_STATIC(0x575620u,575);
}
B4f18a0:L4f18a0:{c.instructions+=5;NFSU2_TR(0x4f18a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f18a3:{NFSU2_TR(0x4f18a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f18a7:{NFSU2_TR(0x4f18a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f18a9:{NFSU2_TR(0x4f18a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f18b1:{NFSU2_TR(0x4f18b1);
if(r1(R+518)){{goto L4f18ce;}}
}
B4f18b3:L4f18b3:{c.instructions+=4;NFSU2_TR(0x4f18b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f18b7:{NFSU2_TR(0x4f18b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f18b8:{NFSU2_TR(0x4f18b8);
__builtin_memmove((R+4),(R+0),4);
}
B4f18ba:{NFSU2_TR(0x4f18ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f18bfull));
TAIL_STATIC(0x4e5d40u,4e5);
}
B4f18bf:L4f18bf:{c.instructions+=4;NFSU2_TR(0x4f18bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f18c3:{NFSU2_TR(0x4f18c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f18ca:{NFSU2_TR(0x4f18ca);
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
B4f18cd:{NFSU2_TR(0x4f18cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f18ce:L4f18ce:{c.instructions+=5;NFSU2_TR(0x4f18ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f18d2:{NFSU2_TR(0x4f18d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f18d4:{NFSU2_TR(0x4f18d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f18db:{NFSU2_TR(0x4f18db);
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
B4f18de:{NFSU2_TR(0x4f18de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f18e0:L4f18e0:{c.instructions+=8;NFSU2_TR(0x4f18e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f18e2:{NFSU2_TR(0x4f18e2);
u8 U[4];
w4(U+0,u32(0x7765c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f18e7:{NFSU2_TR(0x4f18e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f18ed:{NFSU2_TR(0x4f18ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f18ee:{NFSU2_TR(0x4f18ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f18f5:{NFSU2_TR(0x4f18f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f18f6:{NFSU2_TR(0x4f18f6);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f18fb:{NFSU2_TR(0x4f18fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1900ull));
TAIL_STATIC(0x575620u,575);
}
B4f1900:L4f1900:{c.instructions+=5;NFSU2_TR(0x4f1900);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1903:{NFSU2_TR(0x4f1903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f1907:{NFSU2_TR(0x4f1907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1909:{NFSU2_TR(0x4f1909);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1911:{NFSU2_TR(0x4f1911);
if(r1(R+518)){{goto L4f192e;}}
}
B4f1913:L4f1913:{c.instructions+=4;NFSU2_TR(0x4f1913);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1917:{NFSU2_TR(0x4f1917);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1918:{NFSU2_TR(0x4f1918);
__builtin_memmove((R+4),(R+0),4);
}
B4f191a:{NFSU2_TR(0x4f191a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f191full));
TAIL_STATIC(0x4e5e60u,4e5);
}
B4f191f:L4f191f:{c.instructions+=4;NFSU2_TR(0x4f191f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1923:{NFSU2_TR(0x4f1923);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f192a:{NFSU2_TR(0x4f192a);
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
B4f192d:{NFSU2_TR(0x4f192d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f192e:L4f192e:{c.instructions+=5;NFSU2_TR(0x4f192e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1932:{NFSU2_TR(0x4f1932);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f1934:{NFSU2_TR(0x4f1934);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f193b:{NFSU2_TR(0x4f193b);
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
B4f193e:{NFSU2_TR(0x4f193e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1940:L4f1940:{c.instructions+=8;NFSU2_TR(0x4f1940);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1942:{NFSU2_TR(0x4f1942);
u8 U[4];
w4(U+0,u32(0x7765e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1947:{NFSU2_TR(0x4f1947);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f194d:{NFSU2_TR(0x4f194d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f194e:{NFSU2_TR(0x4f194e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1955:{NFSU2_TR(0x4f1955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1956:{NFSU2_TR(0x4f1956);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f195b:{NFSU2_TR(0x4f195b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1960ull));
TAIL_STATIC(0x575620u,575);
}
B4f1960:L4f1960:{c.instructions+=5;NFSU2_TR(0x4f1960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1963:{NFSU2_TR(0x4f1963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f1967:{NFSU2_TR(0x4f1967);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1969:{NFSU2_TR(0x4f1969);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1971:{NFSU2_TR(0x4f1971);
if(r1(R+518)){{goto L4f198e;}}
}
B4f1973:L4f1973:{c.instructions+=4;NFSU2_TR(0x4f1973);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1977:{NFSU2_TR(0x4f1977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1978:{NFSU2_TR(0x4f1978);
__builtin_memmove((R+4),(R+0),4);
}
B4f197a:{NFSU2_TR(0x4f197a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f197full));
TAIL_STATIC(0x4e5f80u,4e5);
}
B4f197f:L4f197f:{c.instructions+=4;NFSU2_TR(0x4f197f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1983:{NFSU2_TR(0x4f1983);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f198a:{NFSU2_TR(0x4f198a);
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
B4f198d:{NFSU2_TR(0x4f198d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f198e:L4f198e:{c.instructions+=5;NFSU2_TR(0x4f198e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1992:{NFSU2_TR(0x4f1992);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f1994:{NFSU2_TR(0x4f1994);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f199b:{NFSU2_TR(0x4f199b);
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
B4f199e:{NFSU2_TR(0x4f199e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f19a0:L4f19a0:{c.instructions+=9;NFSU2_TR(0x4f19a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19a1:{NFSU2_TR(0x4f19a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f19a5:{NFSU2_TR(0x4f19a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19a6:{NFSU2_TR(0x4f19a6);
__builtin_memmove((R+24),(R+4),4);
}
B4f19a8:{NFSU2_TR(0x4f19a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f19ab:{NFSU2_TR(0x4f19ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f19ad:{NFSU2_TR(0x4f19ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19ae:{NFSU2_TR(0x4f19ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f19b2:{NFSU2_TR(0x4f19b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f19e9;}}
}
B4f19b4:L4f19b4:{c.instructions+=2;NFSU2_TR(0x4f19b4);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19b9:{NFSU2_TR(0x4f19b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f19beull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f19be:L4f19be:{c.instructions+=3;NFSU2_TR(0x4f19be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f19c1:{NFSU2_TR(0x4f19c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f19c3:{NFSU2_TR(0x4f19c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f19e9;}}
}
B4f19c5:L4f19c5:{c.instructions+=2;NFSU2_TR(0x4f19c5);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19ca:{NFSU2_TR(0x4f19ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f19cfull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f19cf:L4f19cf:{c.instructions+=3;NFSU2_TR(0x4f19cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f19d2:{NFSU2_TR(0x4f19d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f19d4:{NFSU2_TR(0x4f19d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f19e9;}}
}
B4f19d6:L4f19d6:{c.instructions+=8;NFSU2_TR(0x4f19d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f19da:{NFSU2_TR(0x4f19da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f19de:{NFSU2_TR(0x4f19de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19df:{NFSU2_TR(0x4f19df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19e0:{NFSU2_TR(0x4f19e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19e1:{NFSU2_TR(0x4f19e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f19e2:{NFSU2_TR(0x4f19e2);
__builtin_memmove((R+4),(R+24),4);
}
B4f19e4:{NFSU2_TR(0x4f19e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f19e9ull));
TAIL_STATIC(0x543d40u,543);
}
B4f19e9:L4f19e9:{c.instructions+=2;NFSU2_TR(0x4f19e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f19ef:{NFSU2_TR(0x4f19ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f1b42;}}
}
B4f19f5:L4f19f5:{c.instructions+=1;NFSU2_TR(0x4f19f5);
if(r1(R+518)){{goto L4f1b36;}}
}
B4f19fb:L4f19fb:{c.instructions+=2;NFSU2_TR(0x4f19fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x904aca43ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x904aca43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1a01:{NFSU2_TR(0x4f1a01);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f1a7b;}}
}
B4f1a03:L4f1a03:{c.instructions+=1;NFSU2_TR(0x4f1a03);
if(r1(R+518)){{goto L4f1a55;}}
}
B4f1a05:L4f1a05:{c.instructions+=2;NFSU2_TR(0x4f1a05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1bcfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1a0b:{NFSU2_TR(0x4f1a0b);
if(r1(R+518)){{goto L4f1a22;}}
}
B4f1a0d:L4f1a0d:{c.instructions+=2;NFSU2_TR(0x4f1a0d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6481273eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1a13:{NFSU2_TR(0x4f1a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1b9b;}}
}
B4f1a19:L4f1a19:{c.instructions+=2;NFSU2_TR(0x4f1a19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1a1d:{NFSU2_TR(0x4f1a1d);
{goto L4f1b9b;}
}
B4f1a22:L4f1a22:{c.instructions+=6;NFSU2_TR(0x4f1a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1a25:{NFSU2_TR(0x4f1a25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1a27:{NFSU2_TR(0x4f1a27);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1a2c:{NFSU2_TR(0x4f1a2c);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1a31:{NFSU2_TR(0x4f1a31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1a32:{NFSU2_TR(0x4f1a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1a37ull));
TAIL_STATIC(0x537c00u,537);
}
B4f1a37:L4f1a37:{c.instructions+=7;NFSU2_TR(0x4f1a37);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1a3b:{NFSU2_TR(0x4f1a3b);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4f1a40:{NFSU2_TR(0x4f1a40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f1a43:{NFSU2_TR(0x4f1a43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1a48:{NFSU2_TR(0x4f1a48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4f1a4b:{NFSU2_TR(0x4f1a4b);
__builtin_memmove(gp(0x838528),(R+0),1);
}
B4f1a50:{NFSU2_TR(0x4f1a50);
{goto L4f1b9b;}
}
B4f1a55:L4f1a55:{c.instructions+=2;NFSU2_TR(0x4f1a55);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1a5f:{NFSU2_TR(0x4f1a5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1b9b;}}
}
B4f1a65:L4f1a65:{c.instructions+=4;NFSU2_TR(0x4f1a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1a68:{NFSU2_TR(0x4f1a68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1a69:{NFSU2_TR(0x4f1a69);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1a6e:{NFSU2_TR(0x4f1a6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1a73ull));
TAIL_STATIC(0x51ce60u,51c);
}
B4f1a73:L4f1a73:{c.instructions+=2;NFSU2_TR(0x4f1a73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f1a76:{NFSU2_TR(0x4f1a76);
{goto L4f1b9b;}
}
B4f1a7b:L4f1a7b:{c.instructions+=2;NFSU2_TR(0x4f1a7b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1a81:{NFSU2_TR(0x4f1a81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1b9b;}}
}
B4f1a87:L4f1a87:{c.instructions+=2;NFSU2_TR(0x4f1a87);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1a91:{NFSU2_TR(0x4f1a91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1af2;}}
}
B4f1a93:L4f1a93:{c.instructions+=3;NFSU2_TR(0x4f1a93);
__builtin_memmove((R+0),gp(0x8500c7),1);
}
B4f1a98:{NFSU2_TR(0x4f1a98);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f1a9a:{NFSU2_TR(0x4f1a9a);
if(r1(R+518)){{goto L4f1ac7;}}
}
B4f1a9c:L4f1a9c:{c.instructions+=11;NFSU2_TR(0x4f1a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1a9f:{NFSU2_TR(0x4f1a9f);
u8 U[4];
w4(U+0,u32(0x309b91baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1aa4:{NFSU2_TR(0x4f1aa4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1aa6:{NFSU2_TR(0x4f1aa6);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1aab:{NFSU2_TR(0x4f1aab);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ab0:{NFSU2_TR(0x4f1ab0);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ab5:{NFSU2_TR(0x4f1ab5);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1aba:{NFSU2_TR(0x4f1aba);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1abf:{NFSU2_TR(0x4f1abf);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ac4:{NFSU2_TR(0x4f1ac4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ac5:{NFSU2_TR(0x4f1ac5);
{goto L4f1b22;}
}
B4f1ac7:L4f1ac7:{c.instructions+=11;NFSU2_TR(0x4f1ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1aca:{NFSU2_TR(0x4f1aca);
u8 U[4];
w4(U+0,u32(0xc2e59520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1acf:{NFSU2_TR(0x4f1acf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ad1:{NFSU2_TR(0x4f1ad1);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ad6:{NFSU2_TR(0x4f1ad6);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1adb:{NFSU2_TR(0x4f1adb);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ae0:{NFSU2_TR(0x4f1ae0);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ae5:{NFSU2_TR(0x4f1ae5);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1aea:{NFSU2_TR(0x4f1aea);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1aef:{NFSU2_TR(0x4f1aef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1af0:{NFSU2_TR(0x4f1af0);
{goto L4f1b22;}
}
B4f1af2:L4f1af2:{c.instructions+=11;NFSU2_TR(0x4f1af2);
u8 U[4];
w4(U+0,u32(0xd5d46fdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1af7:{NFSU2_TR(0x4f1af7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1af9:{NFSU2_TR(0x4f1af9);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1afe:{NFSU2_TR(0x4f1afe);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b03:{NFSU2_TR(0x4f1b03);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b08:{NFSU2_TR(0x4f1b08);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b0d:{NFSU2_TR(0x4f1b0d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b12:{NFSU2_TR(0x4f1b12);
s1(0x838528,u8(0x0ull));
}
B4f1b19:{NFSU2_TR(0x4f1b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1b1c:{NFSU2_TR(0x4f1b1c);
u8 U[4];
w4(U+0,u32(0x78f2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b21:{NFSU2_TR(0x4f1b21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b22:L4f1b22:{c.instructions+=1;NFSU2_TR(0x4f1b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1b27ull));
TAIL_STATIC(0x558790u,558);
}
B4f1b27:L4f1b27:{c.instructions+=3;NFSU2_TR(0x4f1b27);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1b2a:{NFSU2_TR(0x4f1b2a);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b2f:{NFSU2_TR(0x4f1b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1b34ull));
TAIL_STATIC(0x4ff2e0u,4ff);
}
B4f1b34:L4f1b34:{c.instructions+=1;NFSU2_TR(0x4f1b34);
{goto L4f1b98;}
}
B4f1b36:L4f1b36:{c.instructions+=3;NFSU2_TR(0x4f1b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f1b3c:{NFSU2_TR(0x4f1b3c);
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
B4f1b3e:{NFSU2_TR(0x4f1b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1bb4;}}
}
B4f1b40:L4f1b40:{c.instructions+=1;NFSU2_TR(0x4f1b40);
{goto L4f1b9b;}
}
B4f1b42:L4f1b42:{c.instructions+=2;NFSU2_TR(0x4f1b42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1b48:{NFSU2_TR(0x4f1b48);
if(r1(R+518)){{goto L4f1b88;}}
}
B4f1b4a:L4f1b4a:{c.instructions+=2;NFSU2_TR(0x4f1b4a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd15504ecull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1b50:{NFSU2_TR(0x4f1b50);
if(r1(R+518)){{goto L4f1b71;}}
}
B4f1b52:L4f1b52:{c.instructions+=2;NFSU2_TR(0x4f1b52);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1b58:{NFSU2_TR(0x4f1b58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1b9b;}}
}
B4f1b5a:L4f1b5a:{c.instructions+=2;NFSU2_TR(0x4f1b5a);
u8 U[4];
w4(U+0,u32(0x7981b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b5f:{NFSU2_TR(0x4f1b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1b64ull));
TAIL_STATIC(0x50d510u,50d);
}
B4f1b64:L4f1b64:{c.instructions+=3;NFSU2_TR(0x4f1b64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1b68:{NFSU2_TR(0x4f1b68);
s1(0x838528,u8(0x0ull));
}
B4f1b6f:{NFSU2_TR(0x4f1b6f);
{goto L4f1b98;}
}
B4f1b71:L4f1b71:{c.instructions+=2;NFSU2_TR(0x4f1b71);
u8 U[4];
w4(U+0,u32(0x798140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b76:{NFSU2_TR(0x4f1b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1b7bull));
TAIL_STATIC(0x50d510u,50d);
}
B4f1b7b:L4f1b7b:{c.instructions+=3;NFSU2_TR(0x4f1b7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1b7f:{NFSU2_TR(0x4f1b7f);
s1(0x838528,u8(0x1ull));
}
B4f1b86:{NFSU2_TR(0x4f1b86);
{goto L4f1b98;}
}
B4f1b88:L4f1b88:{c.instructions+=3;NFSU2_TR(0x4f1b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1b8b:{NFSU2_TR(0x4f1b8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1b8c:{NFSU2_TR(0x4f1b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1b91ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4f1b91:L4f1b91:{c.instructions+=1;NFSU2_TR(0x4f1b91);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1b98:L4f1b98:{c.instructions+=1;NFSU2_TR(0x4f1b98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1b9b:L4f1b9b:{c.instructions+=9;NFSU2_TR(0x4f1b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1b9f:{NFSU2_TR(0x4f1b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1ba3:{NFSU2_TR(0x4f1ba3);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ba5:{NFSU2_TR(0x4f1ba5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ba6:{NFSU2_TR(0x4f1ba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ba7:{NFSU2_TR(0x4f1ba7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ba8:{NFSU2_TR(0x4f1ba8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ba9:{NFSU2_TR(0x4f1ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1baf:{NFSU2_TR(0x4f1baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1bb4ull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4f1bb4:L4f1bb4:{c.instructions+=4;NFSU2_TR(0x4f1bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1bb5:{NFSU2_TR(0x4f1bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1bb6:{NFSU2_TR(0x4f1bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f1bb7:{NFSU2_TR(0x4f1bb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1bc0:L4f1bc0:{c.instructions+=8;NFSU2_TR(0x4f1bc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1bc2:{NFSU2_TR(0x4f1bc2);
u8 U[4];
w4(U+0,u32(0x776604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1bc7:{NFSU2_TR(0x4f1bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1bcd:{NFSU2_TR(0x4f1bcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1bce:{NFSU2_TR(0x4f1bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1bd5:{NFSU2_TR(0x4f1bd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1bd6:{NFSU2_TR(0x4f1bd6);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1bdb:{NFSU2_TR(0x4f1bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1be0ull));
TAIL_STATIC(0x575620u,575);
}
B4f1be0:L4f1be0:{c.instructions+=5;NFSU2_TR(0x4f1be0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1be3:{NFSU2_TR(0x4f1be3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f1be7:{NFSU2_TR(0x4f1be7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1be9:{NFSU2_TR(0x4f1be9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1bf1:{NFSU2_TR(0x4f1bf1);
if(r1(R+518)){{goto L4f1c0e;}}
}
B4f1bf3:L4f1bf3:{c.instructions+=4;NFSU2_TR(0x4f1bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1bf7:{NFSU2_TR(0x4f1bf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1bf8:{NFSU2_TR(0x4f1bf8);
__builtin_memmove((R+4),(R+0),4);
}
B4f1bfa:{NFSU2_TR(0x4f1bfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1bffull));
TAIL_STATIC(0x4e6210u,4e6);
}
B4f1bff:L4f1bff:{c.instructions+=4;NFSU2_TR(0x4f1bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1c03:{NFSU2_TR(0x4f1c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c0a:{NFSU2_TR(0x4f1c0a);
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
B4f1c0d:{NFSU2_TR(0x4f1c0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1c0e:L4f1c0e:{c.instructions+=5;NFSU2_TR(0x4f1c0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1c12:{NFSU2_TR(0x4f1c12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f1c14:{NFSU2_TR(0x4f1c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c1b:{NFSU2_TR(0x4f1c1b);
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
B4f1c1e:{NFSU2_TR(0x4f1c1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1c20:L4f1c20:{c.instructions+=15;NFSU2_TR(0x4f1c20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c22:{NFSU2_TR(0x4f1c22);
u8 U[4];
w4(U+0,u32(0x77663full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c27:{NFSU2_TR(0x4f1c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1c2d:{NFSU2_TR(0x4f1c2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c2e:{NFSU2_TR(0x4f1c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c35:{NFSU2_TR(0x4f1c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B4f1c38:{NFSU2_TR(0x4f1c38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c39:{NFSU2_TR(0x4f1c39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c3a:{NFSU2_TR(0x4f1c3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c3b:{NFSU2_TR(0x4f1c3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c3c:{NFSU2_TR(0x4f1c3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f1c40:{NFSU2_TR(0x4f1c40);
__builtin_memmove((R+24),(R+4),4);
}
B4f1c42:{NFSU2_TR(0x4f1c42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c43:{NFSU2_TR(0x4f1c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c47:{NFSU2_TR(0x4f1c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1c4cull));
TAIL_STATIC(0x551de0u,551);
}
B4f1c4c:L4f1c4c:{c.instructions+=10;NFSU2_TR(0x4f1c4c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f1c4e:{NFSU2_TR(0x4f1c4e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4f1c51:{NFSU2_TR(0x4f1c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1c54:{NFSU2_TR(0x4f1c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c58:{NFSU2_TR(0x4f1c58);
u8 U[4];
w4(U+0,u32(0x796128ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f1c5e:{NFSU2_TR(0x4f1c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c61:{NFSU2_TR(0x4f1c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c64:{NFSU2_TR(0x4f1c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c67:{NFSU2_TR(0x4f1c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c6a:{NFSU2_TR(0x4f1c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1c6full));
TAIL_STATIC(0x4ae7f0u,4ae);
}
B4f1c6f:L4f1c6f:{c.instructions+=12;NFSU2_TR(0x4f1c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1c72:{NFSU2_TR(0x4f1c72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c74:{NFSU2_TR(0x4f1c74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c75:{NFSU2_TR(0x4f1c75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c77:{NFSU2_TR(0x4f1c77);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c79:{NFSU2_TR(0x4f1c79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c7a:{NFSU2_TR(0x4f1c7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c7b:{NFSU2_TR(0x4f1c7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c7c:{NFSU2_TR(0x4f1c7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1c82:{NFSU2_TR(0x4f1c82);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1c87:{NFSU2_TR(0x4f1c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1c8d:{NFSU2_TR(0x4f1c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1c92ull));
TAIL_STATIC(0x542ca0u,542);
}
B4f1c92:L4f1c92:{c.instructions+=9;NFSU2_TR(0x4f1c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1c95:{NFSU2_TR(0x4f1c95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c96:{NFSU2_TR(0x4f1c96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c97:{NFSU2_TR(0x4f1c97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c99:{NFSU2_TR(0x4f1c99);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c9e:{NFSU2_TR(0x4f1c9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1c9f:{NFSU2_TR(0x4f1c9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1ca5:{NFSU2_TR(0x4f1ca5);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1caa:{NFSU2_TR(0x4f1caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1cafull));
TAIL_STATIC(0x542ac0u,542);
}
B4f1caf:L4f1caf:{c.instructions+=8;NFSU2_TR(0x4f1caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1cb2:{NFSU2_TR(0x4f1cb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cb3:{NFSU2_TR(0x4f1cb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cb4:{NFSU2_TR(0x4f1cb4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cb5:{NFSU2_TR(0x4f1cb5);
u8 U[4];
w4(U+0,u32(0x798254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cba:{NFSU2_TR(0x4f1cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cbb:{NFSU2_TR(0x4f1cbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1cc1:{NFSU2_TR(0x4f1cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1cc6ull));
TAIL_STATIC(0x542ac0u,542);
}
B4f1cc6:L4f1cc6:{c.instructions+=8;NFSU2_TR(0x4f1cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1cc9:{NFSU2_TR(0x4f1cc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cca:{NFSU2_TR(0x4f1cca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ccb:{NFSU2_TR(0x4f1ccb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ccd:{NFSU2_TR(0x4f1ccd);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cd2:{NFSU2_TR(0x4f1cd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1cd3:{NFSU2_TR(0x4f1cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1cd9:{NFSU2_TR(0x4f1cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1cdeull));
TAIL_STATIC(0x542ac0u,542);
}
B4f1cde:L4f1cde:{c.instructions+=7;NFSU2_TR(0x4f1cde);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f1ce4:{NFSU2_TR(0x4f1ce4);
__builtin_memmove((R+4),(R+20),4);
}
B4f1ce6:{NFSU2_TR(0x4f1ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1cec:{NFSU2_TR(0x4f1cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1cf2:{NFSU2_TR(0x4f1cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1cf8:{NFSU2_TR(0x4f1cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d02:{NFSU2_TR(0x4f1d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1d07ull));
TAIL_STATIC(0x4ff430u,4ff);
}
B4f1d07:L4f1d07:{c.instructions+=4;NFSU2_TR(0x4f1d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1d0a:{NFSU2_TR(0x4f1d0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d0b:{NFSU2_TR(0x4f1d0b);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1d10:{NFSU2_TR(0x4f1d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1d15ull));
TAIL_STATIC(0x504820u,504);
}
B4f1d15:L4f1d15:{c.instructions+=2;NFSU2_TR(0x4f1d15);
__builtin_memmove((R+4),(R+24),4);
}
B4f1d17:{NFSU2_TR(0x4f1d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1d1cull));
TAIL_STATIC(0x4a06d0u,4a0);
}
B4f1d1c:L4f1d1c:{c.instructions+=3;NFSU2_TR(0x4f1d1c);
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
B4f1d1e:{NFSU2_TR(0x4f1d1e);
w4(R+4,u32(0xcull));
}
B4f1d23:{NFSU2_TR(0x4f1d23);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1d27:L4f1d27:{c.instructions+=1;NFSU2_TR(0x4f1d27);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4f1d29;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f1d27u);}goto L4f1d27;}
}
B4f1d29:L4f1d29:{c.instructions+=17;NFSU2_TR(0x4f1d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1d2c:{NFSU2_TR(0x4f1d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d30:{NFSU2_TR(0x4f1d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7900a8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d38:{NFSU2_TR(0x4f1d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x796158ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d40:{NFSU2_TR(0x4f1d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f1d43:{NFSU2_TR(0x4f1d43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d44:{NFSU2_TR(0x4f1d44);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f1d48:{NFSU2_TR(0x4f1d48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d49:{NFSU2_TR(0x4f1d49);
__builtin_memmove((R+4),(R+20),4);
}
B4f1d4b:{NFSU2_TR(0x4f1d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x790098ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d53:{NFSU2_TR(0x4f1d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x798240ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d5b:{NFSU2_TR(0x4f1d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d5f:{NFSU2_TR(0x4f1d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d63:{NFSU2_TR(0x4f1d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x42c80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d6b:{NFSU2_TR(0x4f1d6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d6f:{NFSU2_TR(0x4f1d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1d77:{NFSU2_TR(0x4f1d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1d7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f1d7a:L4f1d7a:{c.instructions+=5;NFSU2_TR(0x4f1d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1d7d:{NFSU2_TR(0x4f1d7d);
u8 U[4];
w4(U+0,u32(0x553eda6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d82:{NFSU2_TR(0x4f1d82);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d87:{NFSU2_TR(0x4f1d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d88:{NFSU2_TR(0x4f1d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1d8dull));
TAIL_STATIC(0x537a10u,537);
}
B4f1d8d:L4f1d8d:{c.instructions+=3;NFSU2_TR(0x4f1d8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f1d90:{NFSU2_TR(0x4f1d90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d91:{NFSU2_TR(0x4f1d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1d96ull));
TAIL_STATIC(0x50c900u,50c);
}
B4f1d96:L4f1d96:{c.instructions+=3;NFSU2_TR(0x4f1d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f1d99:{NFSU2_TR(0x4f1d99);
u8 U[4];
w4(U+0,u32(0x798234ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1d9e:{NFSU2_TR(0x4f1d9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1da3ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4f1da3:L4f1da3:{c.instructions+=3;NFSU2_TR(0x4f1da3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1da4:{NFSU2_TR(0x4f1da4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1da5:{NFSU2_TR(0x4f1da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1daaull));
TAIL_STATIC(0x52cea0u,52c);
}
B4f1daa:L4f1daa:{c.instructions+=5;NFSU2_TR(0x4f1daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f1dad:{NFSU2_TR(0x4f1dad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f1db0:{NFSU2_TR(0x4f1db0);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1db5:{NFSU2_TR(0x4f1db5);
u8 U[4];
w4(U+0,u32(0x79794cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1dba:{NFSU2_TR(0x4f1dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1dbfull));
TAIL_STATIC(0x50b990u,50b);
}
B4f1dbf:L4f1dbf:{c.instructions+=4;NFSU2_TR(0x4f1dbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f1dc2:{NFSU2_TR(0x4f1dc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1dc3:{NFSU2_TR(0x4f1dc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1dc4:{NFSU2_TR(0x4f1dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1dc9ull));
TAIL_STATIC(0x537b80u,537);
}
B4f1dc9:L4f1dc9:{c.instructions+=5;NFSU2_TR(0x4f1dc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f1dcc:{NFSU2_TR(0x4f1dcc);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1dce:{NFSU2_TR(0x4f1dce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1dd0:{NFSU2_TR(0x4f1dd0);
__builtin_memmove((R+4),(R+24),4);
}
B4f1dd2:{NFSU2_TR(0x4f1dd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1dd7ull));
TAIL_STATIC(0x4d3890u,4d3);
}
B4f1dd7:L4f1dd7:{c.instructions+=2;NFSU2_TR(0x4f1dd7);
__builtin_memmove((R+4),(R+24),4);
}
B4f1dd9:{NFSU2_TR(0x4f1dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1ddeull));
TAIL_STATIC(0x4d3f20u,4d3);
}
B4f1dde:L4f1dde:{c.instructions+=5;NFSU2_TR(0x4f1dde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ddf:{NFSU2_TR(0x4f1ddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f1de2:{NFSU2_TR(0x4f1de2);
u8 U[4];
w4(U+0,u32(0x4e6470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1de7:{NFSU2_TR(0x4f1de7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1de8:{NFSU2_TR(0x4f1de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1dedull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4f1ded:L4f1ded:{c.instructions+=2;NFSU2_TR(0x4f1ded);
__builtin_memmove((R+4),(R+0),4);
}
B4f1def:{NFSU2_TR(0x4f1def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1df4ull));
TAIL_STATIC(0x58e850u,58e);
}
B4f1df4:L4f1df4:{c.instructions+=2;NFSU2_TR(0x4f1df4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f1df6:{NFSU2_TR(0x4f1df6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4f1e25;}}
}
B4f1df8:L4f1df8:{c.instructions+=3;NFSU2_TR(0x4f1df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f1dfb:{NFSU2_TR(0x4f1dfb);
u8 U[4];
w4(U+0,u32(0x6cf6e689ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e00:{NFSU2_TR(0x4f1e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1e05ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f1e05:L4f1e05:{c.instructions+=7;NFSU2_TR(0x4f1e05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e06:{NFSU2_TR(0x4f1e06);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e0b:{NFSU2_TR(0x4f1e0b);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e10:{NFSU2_TR(0x4f1e10);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e15:{NFSU2_TR(0x4f1e15);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e1a:{NFSU2_TR(0x4f1e1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e1b:{NFSU2_TR(0x4f1e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1e20ull));
TAIL_STATIC(0x558540u,558);
}
B4f1e20:L4f1e20:{c.instructions+=2;NFSU2_TR(0x4f1e20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f1e23:{NFSU2_TR(0x4f1e23);
{goto L4f1e3f;}
}
B4f1e25:L4f1e25:{c.instructions+=1;NFSU2_TR(0x4f1e25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1e2e;}}
}
B4f1e27:L4f1e27:{c.instructions+=2;NFSU2_TR(0x4f1e27);
__builtin_memmove((R+4),(R+24),4);
}
B4f1e29:{NFSU2_TR(0x4f1e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1e2eull));
TAIL_STATIC(0x4e6310u,4e6);
}
B4f1e2e:L4f1e2e:{c.instructions+=2;NFSU2_TR(0x4f1e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1e38:{NFSU2_TR(0x4f1e38);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f1e3f:L4f1e3f:{c.instructions+=9;NFSU2_TR(0x4f1e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1e43:{NFSU2_TR(0x4f1e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1e44:{NFSU2_TR(0x4f1e44);
__builtin_memmove((R+0),(R+24),4);
}
B4f1e46:{NFSU2_TR(0x4f1e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1e47:{NFSU2_TR(0x4f1e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f1e48:{NFSU2_TR(0x4f1e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f1e49:{NFSU2_TR(0x4f1e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1e50:{NFSU2_TR(0x4f1e50);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1e53:{NFSU2_TR(0x4f1e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1e60:L4f1e60:{c.instructions+=5;NFSU2_TR(0x4f1e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1e64:{NFSU2_TR(0x4f1e64);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1e69:{NFSU2_TR(0x4f1e69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1e6a:{NFSU2_TR(0x4f1e6a);
__builtin_memmove((R+24),(R+4),4);
}
B4f1e6c:{NFSU2_TR(0x4f1e6c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f1fb8;}}
}
B4f1e72:L4f1e72:{c.instructions+=1;NFSU2_TR(0x4f1e72);
if(r1(R+518)){{goto L4f1fa1;}}
}
B4f1e78:L4f1e78:{c.instructions+=2;NFSU2_TR(0x4f1e78);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1e7d:{NFSU2_TR(0x4f1e7d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f1f34;}}
}
B4f1e83:L4f1e83:{c.instructions+=1;NFSU2_TR(0x4f1e83);
if(r1(R+518)){{goto L4f1ea2;}}
}
B4f1e85:L4f1e85:{c.instructions+=2;NFSU2_TR(0x4f1e85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca4ce1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1e8a:{NFSU2_TR(0x4f1e8a);
if(r1(R+518)){{goto L4f1fa1;}}
}
B4f1e90:L4f1e90:{c.instructions+=2;NFSU2_TR(0x4f1e90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1e95:{NFSU2_TR(0x4f1e95);
if(r1(R+518)){{goto L4f1ee2;}}
}
B4f1e97:L4f1e97:{c.instructions+=2;NFSU2_TR(0x4f1e97);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1e9c:{NFSU2_TR(0x4f1e9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f22deu,4f2);}
}
B4f1ea2:L4f1ea2:{c.instructions+=3;NFSU2_TR(0x4f1ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1ea8:{NFSU2_TR(0x4f1ea8);
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
B4f1eaa:{NFSU2_TR(0x4f1eaa);
if(r1(R+518)){TAIL_STATIC(0x4f22deu,4f2);}
}
B4f1eb0:L4f1eb0:{c.instructions+=6;NFSU2_TR(0x4f1eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1eb6:{NFSU2_TR(0x4f1eb6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B4f1eb9:{NFSU2_TR(0x4f1eb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1eba:{NFSU2_TR(0x4f1eba);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ebc:{NFSU2_TR(0x4f1ebc);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ec1:{NFSU2_TR(0x4f1ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1ec6ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f1ec6:L4f1ec6:{c.instructions+=6;NFSU2_TR(0x4f1ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1ec9:{NFSU2_TR(0x4f1ec9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ecb:{NFSU2_TR(0x4f1ecb);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ed0:{NFSU2_TR(0x4f1ed0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ed1:{NFSU2_TR(0x4f1ed1);
u8 U[4];
w4(U+0,u32(0x7962d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ed6:{NFSU2_TR(0x4f1ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1edbull));
TAIL_STATIC(0x555eb0u,555);
}
B4f1edb:L4f1edb:{c.instructions+=3;NFSU2_TR(0x4f1edb);
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
B4f1ede:{NFSU2_TR(0x4f1ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1edf:{NFSU2_TR(0x4f1edf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1ee2:L4f1ee2:{c.instructions+=7;NFSU2_TR(0x4f1ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1ee5:{NFSU2_TR(0x4f1ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1ee8:{NFSU2_TR(0x4f1ee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ee9:{NFSU2_TR(0x4f1ee9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1eea:{NFSU2_TR(0x4f1eea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1eeb:{NFSU2_TR(0x4f1eeb);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f1ef1:{NFSU2_TR(0x4f1ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1ef6ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4f1ef6:L4f1ef6:{c.instructions+=3;NFSU2_TR(0x4f1ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1efc:{NFSU2_TR(0x4f1efc);
__builtin_memmove((R+4),(R+28),4);
}
B4f1efe:{NFSU2_TR(0x4f1efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f03ull));
TAIL_STATIC(0x4958d0u,495);
}
B4f1f03:L4f1f03:{c.instructions+=3;NFSU2_TR(0x4f1f03);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f05:{NFSU2_TR(0x4f1f05);
__builtin_memmove((R+4),(R+28),4);
}
B4f1f07:{NFSU2_TR(0x4f1f07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f0cull));
TAIL_STATIC(0x4aeb50u,4ae);
}
B4f1f0c:L4f1f0c:{c.instructions+=4;NFSU2_TR(0x4f1f0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f1f0f:{NFSU2_TR(0x4f1f0f);
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
B4f1f11:{NFSU2_TR(0x4f1f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f1f12:{NFSU2_TR(0x4f1f12);
if(r1(R+518)){TAIL_STATIC(0x4f22deu,4f2);}
}
B4f1f18:L4f1f18:{c.instructions+=6;NFSU2_TR(0x4f1f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f1f1b:{NFSU2_TR(0x4f1f1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f1d:{NFSU2_TR(0x4f1f1d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f22:{NFSU2_TR(0x4f1f22);
u8 U[4];
w4(U+0,u32(0x79016cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f27:{NFSU2_TR(0x4f1f27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f28:{NFSU2_TR(0x4f1f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f2dull));
TAIL_STATIC(0x5426c0u,542);
}
B4f1f2d:L4f1f2d:{c.instructions+=3;NFSU2_TR(0x4f1f2d);
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
B4f1f30:{NFSU2_TR(0x4f1f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1f31:{NFSU2_TR(0x4f1f31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1f34:L4f1f34:{c.instructions+=2;NFSU2_TR(0x4f1f34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1f39:{NFSU2_TR(0x4f1f39);
if(r1(R+518)){{goto L4f1f53;}}
}
B4f1f3b:L4f1f3b:{c.instructions+=2;NFSU2_TR(0x4f1f3b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1f40:{NFSU2_TR(0x4f1f40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f22deu,4f2);}
}
B4f1f46:L4f1f46:{c.instructions+=3;NFSU2_TR(0x4f1f46);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f48:{NFSU2_TR(0x4f1f48);
__builtin_memmove((R+4),(R+24),4);
}
B4f1f4a:{NFSU2_TR(0x4f1f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f4full));
TAIL_STATIC(0x4d40e0u,4d4);
}
B4f1f4f:L4f1f4f:{c.instructions+=2;NFSU2_TR(0x4f1f4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1f50:{NFSU2_TR(0x4f1f50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1f53:L4f1f53:{c.instructions+=6;NFSU2_TR(0x4f1f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1f56:{NFSU2_TR(0x4f1f56);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4f1f57:{NFSU2_TR(0x4f1f57);
__builtin_memmove((R+0),(R+4),4);
}
B4f1f59:{NFSU2_TR(0x4f1f59);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4f1f5c:{NFSU2_TR(0x4f1f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1f5f:{NFSU2_TR(0x4f1f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f1f6c;}}
}
B4f1f61:L4f1f61:{c.instructions+=3;NFSU2_TR(0x4f1f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1f68:{NFSU2_TR(0x4f1f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1f69:{NFSU2_TR(0x4f1f69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1f6c:L4f1f6c:{c.instructions+=3;NFSU2_TR(0x4f1f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f1f72:{NFSU2_TR(0x4f1f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1f7c:{NFSU2_TR(0x4f1f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f81ull));
TAIL_STATIC(0x4958b0u,495);
}
B4f1f81:L4f1f81:{c.instructions+=4;NFSU2_TR(0x4f1f81);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f83:{NFSU2_TR(0x4f1f83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1f85:{NFSU2_TR(0x4f1f85);
__builtin_memmove((R+4),(R+24),4);
}
B4f1f87:{NFSU2_TR(0x4f1f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f8cull));
TAIL_STATIC(0x4d3890u,4d3);
}
B4f1f8c:L4f1f8c:{c.instructions+=3;NFSU2_TR(0x4f1f8c);
__builtin_memmove((R+4),(R+24),4);
}
B4f1f8e:{NFSU2_TR(0x4f1f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1f98:{NFSU2_TR(0x4f1f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1f9dull));
TAIL_STATIC(0x4e6310u,4e6);
}
B4f1f9d:L4f1f9d:{c.instructions+=2;NFSU2_TR(0x4f1f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1f9e:{NFSU2_TR(0x4f1f9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1fa1:L4f1fa1:{c.instructions+=5;NFSU2_TR(0x4f1fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f1fa4:{NFSU2_TR(0x4f1fa4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1fa6:{NFSU2_TR(0x4f1fa6);
u8 U[4];
w4(U+0,u32(0x790070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1fab:{NFSU2_TR(0x4f1fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1fac:{NFSU2_TR(0x4f1fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1fb1ull));
TAIL_STATIC(0x537980u,537);
}
B4f1fb1:L4f1fb1:{c.instructions+=3;NFSU2_TR(0x4f1fb1);
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
B4f1fb4:{NFSU2_TR(0x4f1fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f1fb5:{NFSU2_TR(0x4f1fb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f1fb8:L4f1fb8:{c.instructions+=2;NFSU2_TR(0x4f1fb8);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1fbd:{NFSU2_TR(0x4f1fbd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4f2264u,4f2);}
}
B4f1fc3:L4f1fc3:{c.instructions+=1;NFSU2_TR(0x4f1fc3);
if(r1(R+518)){TAIL_STATIC(0x4f202bu,4f2);}
}
B4f1fc5:L4f1fc5:{c.instructions+=2;NFSU2_TR(0x4f1fc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f1fca:{NFSU2_TR(0x4f1fca);
if(r1(R+518)){TAIL_STATIC(0x4f201eu,4f2);}
}
B4f1fcc:L4f1fcc:{c.instructions+=2;NFSU2_TR(0x4f1fcc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f1fd1:{NFSU2_TR(0x4f1fd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f22deu,4f2);}
}
B4f1fd7:L4f1fd7:{c.instructions+=2;NFSU2_TR(0x4f1fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f1fdd:{NFSU2_TR(0x4f1fdd);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4f1fe9;}}
}
B4f1fdf:L4f1fdf:{c.instructions+=1;NFSU2_TR(0x4f1fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f1fe9:L4f1fe9:{c.instructions+=5;NFSU2_TR(0x4f1fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f1fef:{NFSU2_TR(0x4f1fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f1ff5:{NFSU2_TR(0x4f1ff5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f1ff7:{NFSU2_TR(0x4f1ff7);
__builtin_memmove((R+4),(R+24),4);
}
B4f1ff9:{NFSU2_TR(0x4f1ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1ffeull));
TAIL_STATIC(0x4d39b0u,4d3);
}
B4f1ffe:L4f1ffe:{c.instructions+=1;NFSU2_TR(0x4f1ffe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4f2000u,4f2);
}
XIT:NFSU2_TR_EXIT(0x4f1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
