#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 body_4e0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e1(u8* __restrict R,Cpu& c);
u32 page_4e1(Cpu& c){return body_4e1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e1000:goto L4e1000;
case 0x4e1005:c.instructions+=2;goto B4e1005;
case 0x4e1006:c.instructions+=1;goto B4e1006;
case 0x4e100b:goto L4e100b;
case 0x4e100e:c.instructions+=2;goto B4e100e;
case 0x4e100f:c.instructions+=1;goto B4e100f;
case 0x4e1014:goto L4e1014;
case 0x4e1017:c.instructions+=3;goto B4e1017;
case 0x4e1019:c.instructions+=2;goto B4e1019;
case 0x4e101e:c.instructions+=1;goto B4e101e;
case 0x4e1023:goto L4e1023;
case 0x4e1026:c.instructions+=5;goto B4e1026;
case 0x4e1028:c.instructions+=4;goto B4e1028;
case 0x4e102d:c.instructions+=3;goto B4e102d;
case 0x4e1032:c.instructions+=2;goto B4e1032;
case 0x4e1033:c.instructions+=1;goto B4e1033;
case 0x4e1038:goto L4e1038;
case 0x4e103b:c.instructions+=4;goto B4e103b;
case 0x4e103c:c.instructions+=3;goto B4e103c;
case 0x4e103d:c.instructions+=2;goto B4e103d;
case 0x4e103e:c.instructions+=1;goto B4e103e;
case 0x4e1041:goto L4e1041;
case 0x4e1042:c.instructions+=4;goto B4e1042;
case 0x4e1049:c.instructions+=3;goto B4e1049;
case 0x4e104a:c.instructions+=2;goto B4e104a;
case 0x4e104b:c.instructions+=1;goto B4e104b;
case 0x4e104e:goto L4e104e;
case 0x4e1055:goto L4e1055;
case 0x4e105b:c.instructions+=1;goto B4e105b;
case 0x4e1060:goto L4e1060;
case 0x4e1063:c.instructions+=5;goto B4e1063;
case 0x4e1065:c.instructions+=4;goto B4e1065;
case 0x4e106a:c.instructions+=3;goto B4e106a;
case 0x4e106f:c.instructions+=2;goto B4e106f;
case 0x4e1070:c.instructions+=1;goto B4e1070;
case 0x4e1075:goto L4e1075;
case 0x4e1078:c.instructions+=4;goto B4e1078;
case 0x4e1079:c.instructions+=3;goto B4e1079;
case 0x4e107a:c.instructions+=2;goto B4e107a;
case 0x4e107b:c.instructions+=1;goto B4e107b;
case 0x4e107e:goto L4e107e;
case 0x4e1083:c.instructions+=1;goto B4e1083;
case 0x4e1085:goto L4e1085;
case 0x4e108a:c.instructions+=1;goto B4e108a;
case 0x4e1090:goto L4e1090;
case 0x4e1093:c.instructions+=2;goto B4e1093;
case 0x4e1099:c.instructions+=1;goto B4e1099;
case 0x4e109f:goto L4e109f;
case 0x4e10a2:c.instructions+=5;goto B4e10a2;
case 0x4e10a5:c.instructions+=4;goto B4e10a5;
case 0x4e10a6:c.instructions+=3;goto B4e10a6;
case 0x4e10a8:c.instructions+=2;goto B4e10a8;
case 0x4e10a9:c.instructions+=1;goto B4e10a9;
case 0x4e10ae:goto L4e10ae;
case 0x4e10b1:c.instructions+=3;goto B4e10b1;
case 0x4e10b7:c.instructions+=2;goto B4e10b7;
case 0x4e10be:c.instructions+=1;goto B4e10be;
case 0x4e10c3:goto L4e10c3;
case 0x4e10c4:c.instructions+=3;goto B4e10c4;
case 0x4e10c5:c.instructions+=2;goto B4e10c5;
case 0x4e10c6:c.instructions+=1;goto B4e10c6;
case 0x4e10c9:goto L4e10c9;
case 0x4e10cb:c.instructions+=2;goto B4e10cb;
case 0x4e10cd:c.instructions+=1;goto B4e10cd;
case 0x4e10d2:goto L4e10d2;
case 0x4e10d3:c.instructions+=3;goto B4e10d3;
case 0x4e10d4:c.instructions+=2;goto B4e10d4;
case 0x4e10d5:c.instructions+=1;goto B4e10d5;
case 0x4e10d8:goto L4e10d8;
case 0x4e10da:c.instructions+=2;goto B4e10da;
case 0x4e10dc:c.instructions+=1;goto B4e10dc;
case 0x4e10e1:goto L4e10e1;
case 0x4e10e2:c.instructions+=3;goto B4e10e2;
case 0x4e10e3:c.instructions+=2;goto B4e10e3;
case 0x4e10e4:c.instructions+=1;goto B4e10e4;
case 0x4e10e7:goto L4e10e7;
case 0x4e10ec:c.instructions+=1;goto B4e10ec;
case 0x4e10f2:goto L4e10f2;
case 0x4e10f8:goto L4e10f8;
case 0x4e10fd:c.instructions+=1;goto B4e10fd;
case 0x4e1103:goto L4e1103;
case 0x4e1108:c.instructions+=1;goto B4e1108;
case 0x4e110e:goto L4e110e;
case 0x4e1111:c.instructions+=2;goto B4e1111;
case 0x4e1112:c.instructions+=1;goto B4e1112;
case 0x4e1117:goto L4e1117;
case 0x4e111a:c.instructions+=2;goto B4e111a;
case 0x4e111c:c.instructions+=1;goto B4e111c;
case 0x4e111e:goto L4e111e;
case 0x4e1120:c.instructions+=1;goto B4e1120;
case 0x4e1122:goto L4e1122;
case 0x4e1125:c.instructions+=2;goto B4e1125;
case 0x4e1126:c.instructions+=1;goto B4e1126;
case 0x4e112b:goto L4e112b;
case 0x4e112e:c.instructions+=2;goto B4e112e;
case 0x4e1130:c.instructions+=1;goto B4e1130;
case 0x4e1132:goto L4e1132;
case 0x4e1134:goto L4e1134;
case 0x4e1136:c.instructions+=1;goto B4e1136;
case 0x4e113b:goto L4e113b;
case 0x4e1141:c.instructions+=1;goto B4e1141;
case 0x4e1146:goto L4e1146;
case 0x4e114c:c.instructions+=3;goto B4e114c;
case 0x4e114f:c.instructions+=2;goto B4e114f;
case 0x4e1150:c.instructions+=1;goto B4e1150;
case 0x4e1155:goto L4e1155;
case 0x4e1158:c.instructions+=5;goto B4e1158;
case 0x4e115e:c.instructions+=4;goto B4e115e;
case 0x4e1161:c.instructions+=3;goto B4e1161;
case 0x4e1163:c.instructions+=2;goto B4e1163;
case 0x4e1166:c.instructions+=1;goto B4e1166;
case 0x4e1168:goto L4e1168;
case 0x4e116d:c.instructions+=1;goto B4e116d;
case 0x4e116f:goto L4e116f;
case 0x4e1172:c.instructions+=4;goto B4e1172;
case 0x4e1178:c.instructions+=3;goto B4e1178;
case 0x4e117a:c.instructions+=2;goto B4e117a;
case 0x4e117d:c.instructions+=1;goto B4e117d;
case 0x4e117f:goto L4e117f;
case 0x4e1182:goto L4e1182;
case 0x4e1185:c.instructions+=2;goto B4e1185;
case 0x4e1188:c.instructions+=1;goto B4e1188;
case 0x4e118a:goto L4e118a;
case 0x4e1191:c.instructions+=1;goto B4e1191;
case 0x4e1198:goto L4e1198;
case 0x4e119a:c.instructions+=2;goto B4e119a;
case 0x4e119c:c.instructions+=1;goto B4e119c;
case 0x4e11a1:goto L4e11a1;
case 0x4e11a3:goto L4e11a3;
case 0x4e11a5:c.instructions+=2;goto B4e11a5;
case 0x4e11a7:c.instructions+=1;goto B4e11a7;
case 0x4e11ac:goto L4e11ac;
case 0x4e11ae:goto L4e11ae;
case 0x4e11b3:c.instructions+=3;goto B4e11b3;
case 0x4e11b5:c.instructions+=2;goto B4e11b5;
case 0x4e11b7:c.instructions+=1;goto B4e11b7;
case 0x4e11b9:goto L4e11b9;
case 0x4e11c0:goto L4e11c0;
case 0x4e11c2:c.instructions+=2;goto B4e11c2;
case 0x4e11c4:c.instructions+=1;goto B4e11c4;
case 0x4e11c9:goto L4e11c9;
case 0x4e11ce:c.instructions+=3;goto B4e11ce;
case 0x4e11cf:c.instructions+=2;goto B4e11cf;
case 0x4e11d1:c.instructions+=1;goto B4e11d1;
case 0x4e11d3:goto L4e11d3;
case 0x4e11d5:goto L4e11d5;
case 0x4e11da:c.instructions+=3;goto B4e11da;
case 0x4e11dc:c.instructions+=2;goto B4e11dc;
case 0x4e11de:c.instructions+=1;goto B4e11de;
case 0x4e11e0:goto L4e11e0;
case 0x4e11e2:c.instructions+=2;goto B4e11e2;
case 0x4e11e4:c.instructions+=1;goto B4e11e4;
case 0x4e11e9:goto L4e11e9;
case 0x4e11ee:c.instructions+=3;goto B4e11ee;
case 0x4e11ef:c.instructions+=2;goto B4e11ef;
case 0x4e11f1:c.instructions+=1;goto B4e11f1;
case 0x4e11f3:goto L4e11f3;
case 0x4e11f6:c.instructions+=2;goto B4e11f6;
case 0x4e11f7:c.instructions+=1;goto B4e11f7;
case 0x4e11fc:goto L4e11fc;
case 0x4e11ff:c.instructions+=2;goto B4e11ff;
case 0x4e1201:c.instructions+=1;goto B4e1201;
case 0x4e1207:goto L4e1207;
case 0x4e120a:c.instructions+=3;goto B4e120a;
case 0x4e120b:c.instructions+=2;goto B4e120b;
case 0x4e1210:c.instructions+=1;goto B4e1210;
case 0x4e1215:goto L4e1215;
case 0x4e1218:c.instructions+=4;goto B4e1218;
case 0x4e1219:c.instructions+=3;goto B4e1219;
case 0x4e121a:c.instructions+=2;goto B4e121a;
case 0x4e121b:c.instructions+=1;goto B4e121b;
case 0x4e121e:goto L4e121e;
case 0x4e1220:c.instructions+=2;goto B4e1220;
case 0x4e1222:c.instructions+=1;goto B4e1222;
case 0x4e1227:goto L4e1227;
case 0x4e1228:c.instructions+=3;goto B4e1228;
case 0x4e1229:c.instructions+=2;goto B4e1229;
case 0x4e122a:c.instructions+=1;goto B4e122a;
case 0x4e122d:goto L4e122d;
case 0x4e1232:c.instructions+=1;goto B4e1232;
case 0x4e1238:goto L4e1238;
case 0x4e123d:c.instructions+=1;goto B4e123d;
case 0x4e1243:goto L4e1243;
case 0x4e1245:c.instructions+=2;goto B4e1245;
case 0x4e124b:c.instructions+=1;goto B4e124b;
case 0x4e1250:goto L4e1250;
case 0x4e1256:c.instructions+=1;goto B4e1256;
case 0x4e125b:goto L4e125b;
case 0x4e1260:c.instructions+=2;goto B4e1260;
case 0x4e1262:c.instructions+=1;goto B4e1262;
case 0x4e1264:goto L4e1264;
case 0x4e126a:c.instructions+=4;goto B4e126a;
case 0x4e126d:c.instructions+=3;goto B4e126d;
case 0x4e1270:c.instructions+=2;goto B4e1270;
case 0x4e1272:c.instructions+=1;goto B4e1272;
case 0x4e1274:goto L4e1274;
case 0x4e1279:c.instructions+=1;goto B4e1279;
case 0x4e127e:goto L4e127e;
case 0x4e127f:c.instructions+=2;goto B4e127f;
case 0x4e1284:c.instructions+=1;goto B4e1284;
case 0x4e1289:goto L4e1289;
case 0x4e128a:c.instructions+=1;goto B4e128a;
case 0x4e128f:goto L4e128f;
case 0x4e1292:c.instructions+=2;goto B4e1292;
case 0x4e1297:c.instructions+=1;goto B4e1297;
case 0x4e129c:goto L4e129c;
case 0x4e129d:c.instructions+=4;goto B4e129d;
case 0x4e12a4:c.instructions+=3;goto B4e12a4;
case 0x4e12a5:c.instructions+=2;goto B4e12a5;
case 0x4e12a6:c.instructions+=1;goto B4e12a6;
case 0x4e12a9:goto L4e12a9;
case 0x4e12aa:c.instructions+=4;goto B4e12aa;
case 0x4e12b1:c.instructions+=3;goto B4e12b1;
case 0x4e12b2:c.instructions+=2;goto B4e12b2;
case 0x4e12b3:c.instructions+=1;goto B4e12b3;
case 0x4e12b6:goto L4e12b6;
case 0x4e12bb:c.instructions+=2;goto B4e12bb;
case 0x4e12bd:c.instructions+=1;goto B4e12bd;
case 0x4e12bf:goto L4e12bf;
case 0x4e12c2:c.instructions+=5;goto B4e12c2;
case 0x4e12c4:c.instructions+=4;goto B4e12c4;
case 0x4e12c9:c.instructions+=3;goto B4e12c9;
case 0x4e12ca:c.instructions+=2;goto B4e12ca;
case 0x4e12d1:c.instructions+=1;goto B4e12d1;
case 0x4e12d6:goto L4e12d6;
case 0x4e12d9:c.instructions+=4;goto B4e12d9;
case 0x4e12da:c.instructions+=3;goto B4e12da;
case 0x4e12db:c.instructions+=2;goto B4e12db;
case 0x4e12dc:c.instructions+=1;goto B4e12dc;
case 0x4e12df:goto L4e12df;
case 0x4e12e5:c.instructions+=2;goto B4e12e5;
case 0x4e12e7:c.instructions+=1;goto B4e12e7;
case 0x4e12ec:goto L4e12ec;
case 0x4e12ee:c.instructions+=1;goto B4e12ee;
case 0x4e12f0:goto L4e12f0;
case 0x4e12f2:c.instructions+=9;goto B4e12f2;
case 0x4e12f8:c.instructions+=8;goto B4e12f8;
case 0x4e12fa:c.instructions+=7;goto B4e12fa;
case 0x4e12fd:c.instructions+=6;goto B4e12fd;
case 0x4e1300:c.instructions+=5;goto B4e1300;
case 0x4e1306:c.instructions+=4;goto B4e1306;
case 0x4e130c:c.instructions+=3;goto B4e130c;
case 0x4e130e:c.instructions+=2;goto B4e130e;
case 0x4e1311:c.instructions+=1;goto B4e1311;
case 0x4e1313:goto L4e1313;
case 0x4e1319:c.instructions+=5;goto B4e1319;
case 0x4e131c:c.instructions+=4;goto B4e131c;
case 0x4e131f:c.instructions+=3;goto B4e131f;
case 0x4e1320:c.instructions+=2;goto B4e1320;
case 0x4e1326:c.instructions+=1;goto B4e1326;
case 0x4e132b:goto L4e132b;
case 0x4e132d:c.instructions+=2;goto B4e132d;
case 0x4e1333:c.instructions+=1;goto B4e1333;
case 0x4e1338:goto L4e1338;
case 0x4e1339:c.instructions+=3;goto B4e1339;
case 0x4e133a:c.instructions+=2;goto B4e133a;
case 0x4e133b:c.instructions+=1;goto B4e133b;
case 0x4e133e:goto L4e133e;
case 0x4e1344:c.instructions+=1;goto B4e1344;
case 0x4e1349:goto L4e1349;
case 0x4e134b:c.instructions+=1;goto B4e134b;
case 0x4e1350:goto L4e1350;
case 0x4e1351:c.instructions+=3;goto B4e1351;
case 0x4e1352:c.instructions+=2;goto B4e1352;
case 0x4e1353:c.instructions+=1;goto B4e1353;
case 0x4e1356:goto L4e1356;
case 0x4e1358:c.instructions+=2;goto B4e1358;
case 0x4e135a:c.instructions+=1;goto B4e135a;
case 0x4e135f:goto L4e135f;
case 0x4e1360:c.instructions+=3;goto B4e1360;
case 0x4e1361:c.instructions+=2;goto B4e1361;
case 0x4e1362:c.instructions+=1;goto B4e1362;
case 0x4e13a0:goto L4e13a0;
case 0x4e13a1:c.instructions+=2;goto B4e13a1;
case 0x4e13a3:c.instructions+=1;goto B4e13a3;
case 0x4e13a8:goto L4e13a8;
case 0x4e13ad:c.instructions+=1;goto B4e13ad;
case 0x4e13af:goto L4e13af;
case 0x4e13b0:c.instructions+=1;goto B4e13b0;
case 0x4e13b5:goto L4e13b5;
case 0x4e13b8:goto L4e13b8;
case 0x4e13ba:c.instructions+=2;goto B4e13ba;
case 0x4e13bb:c.instructions+=1;goto B4e13bb;
case 0x4e13c0:goto L4e13c0;
case 0x4e13c2:c.instructions+=13;goto B4e13c2;
case 0x4e13c7:c.instructions+=12;goto B4e13c7;
case 0x4e13cd:c.instructions+=11;goto B4e13cd;
case 0x4e13ce:c.instructions+=10;goto B4e13ce;
case 0x4e13d5:c.instructions+=9;goto B4e13d5;
case 0x4e13db:c.instructions+=8;goto B4e13db;
case 0x4e13dc:c.instructions+=7;goto B4e13dc;
case 0x4e13de:c.instructions+=6;goto B4e13de;
case 0x4e13df:c.instructions+=5;goto B4e13df;
case 0x4e13e2:c.instructions+=4;goto B4e13e2;
case 0x4e13e6:c.instructions+=3;goto B4e13e6;
case 0x4e13ee:c.instructions+=2;goto B4e13ee;
case 0x4e13f6:c.instructions+=1;goto B4e13f6;
case 0x4e13f7:goto L4e13f7;
case 0x4e13f9:c.instructions+=1;goto B4e13f9;
case 0x4e13fe:goto L4e13fe;
case 0x4e1400:c.instructions+=3;goto B4e1400;
case 0x4e1403:c.instructions+=2;goto B4e1403;
case 0x4e1405:c.instructions+=1;goto B4e1405;
case 0x4e1407:goto L4e1407;
case 0x4e140a:c.instructions+=12;goto B4e140a;
case 0x4e140c:c.instructions+=11;goto B4e140c;
case 0x4e140f:c.instructions+=10;goto B4e140f;
case 0x4e1412:c.instructions+=9;goto B4e1412;
case 0x4e1415:c.instructions+=8;goto B4e1415;
case 0x4e1418:c.instructions+=7;goto B4e1418;
case 0x4e141b:c.instructions+=6;goto B4e141b;
case 0x4e141e:c.instructions+=5;goto B4e141e;
case 0x4e1422:c.instructions+=4;goto B4e1422;
case 0x4e1429:c.instructions+=3;goto B4e1429;
case 0x4e1430:c.instructions+=2;goto B4e1430;
case 0x4e1436:c.instructions+=1;goto B4e1436;
case 0x4e1438:goto L4e1438;
case 0x4e143c:c.instructions+=5;goto B4e143c;
case 0x4e143f:c.instructions+=4;goto B4e143f;
case 0x4e1445:c.instructions+=3;goto B4e1445;
case 0x4e1446:c.instructions+=2;goto B4e1446;
case 0x4e1447:c.instructions+=1;goto B4e1447;
case 0x4e144c:goto L4e144c;
case 0x4e144e:c.instructions+=2;goto B4e144e;
case 0x4e1450:c.instructions+=1;goto B4e1450;
case 0x4e1455:goto L4e1455;
case 0x4e1458:c.instructions+=2;goto B4e1458;
case 0x4e145a:c.instructions+=1;goto B4e145a;
case 0x4e145c:goto L4e145c;
case 0x4e1462:c.instructions+=3;goto B4e1462;
case 0x4e1465:c.instructions+=2;goto B4e1465;
case 0x4e1468:c.instructions+=1;goto B4e1468;
case 0x4e146a:goto L4e146a;
case 0x4e146c:goto L4e146c;
case 0x4e146f:c.instructions+=10;goto B4e146f;
case 0x4e1473:c.instructions+=9;goto B4e1473;
case 0x4e1476:c.instructions+=8;goto B4e1476;
case 0x4e1478:c.instructions+=7;goto B4e1478;
case 0x4e147b:c.instructions+=6;goto B4e147b;
case 0x4e147e:c.instructions+=5;goto B4e147e;
case 0x4e1480:c.instructions+=4;goto B4e1480;
case 0x4e1483:c.instructions+=3;goto B4e1483;
case 0x4e1484:c.instructions+=2;goto B4e1484;
case 0x4e1485:c.instructions+=1;goto B4e1485;
case 0x4e148a:goto L4e148a;
case 0x4e148c:c.instructions+=2;goto B4e148c;
case 0x4e1490:c.instructions+=1;goto B4e1490;
case 0x4e1495:goto L4e1495;
case 0x4e1498:c.instructions+=2;goto B4e1498;
case 0x4e149a:c.instructions+=1;goto B4e149a;
case 0x4e149c:goto L4e149c;
case 0x4e14a0:c.instructions+=4;goto B4e14a0;
case 0x4e14a6:c.instructions+=3;goto B4e14a6;
case 0x4e14a9:c.instructions+=2;goto B4e14a9;
case 0x4e14ac:c.instructions+=1;goto B4e14ac;
case 0x4e14ae:goto L4e14ae;
case 0x4e14b0:goto L4e14b0;
case 0x4e14b3:c.instructions+=10;goto B4e14b3;
case 0x4e14b5:c.instructions+=9;goto B4e14b5;
case 0x4e14b8:c.instructions+=8;goto B4e14b8;
case 0x4e14ba:c.instructions+=7;goto B4e14ba;
case 0x4e14be:c.instructions+=6;goto B4e14be;
case 0x4e14c4:c.instructions+=5;goto B4e14c4;
case 0x4e14c7:c.instructions+=4;goto B4e14c7;
case 0x4e14ca:c.instructions+=3;goto B4e14ca;
case 0x4e14cb:c.instructions+=2;goto B4e14cb;
case 0x4e14cc:c.instructions+=1;goto B4e14cc;
case 0x4e14d1:goto L4e14d1;
case 0x4e14d5:c.instructions+=4;goto B4e14d5;
case 0x4e14d8:c.instructions+=3;goto B4e14d8;
case 0x4e14d9:c.instructions+=2;goto B4e14d9;
case 0x4e14dc:c.instructions+=1;goto B4e14dc;
case 0x4e14e1:goto L4e14e1;
case 0x4e14e5:c.instructions+=5;goto B4e14e5;
case 0x4e14e6:c.instructions+=4;goto B4e14e6;
case 0x4e14e7:c.instructions+=3;goto B4e14e7;
case 0x4e14eb:c.instructions+=2;goto B4e14eb;
case 0x4e14ef:c.instructions+=1;goto B4e14ef;
case 0x4e14f5:goto L4e14f5;
case 0x4e14f9:c.instructions+=1;goto B4e14f9;
case 0x4e14fe:goto L4e14fe;
case 0x4e1503:c.instructions+=3;goto B4e1503;
case 0x4e1505:c.instructions+=2;goto B4e1505;
case 0x4e1507:c.instructions+=1;goto B4e1507;
case 0x4e1509:goto L4e1509;
case 0x4e150e:c.instructions+=1;goto B4e150e;
case 0x4e1513:goto L4e1513;
case 0x4e1515:c.instructions+=1;goto B4e1515;
case 0x4e1517:goto L4e1517;
case 0x4e151c:c.instructions+=2;goto B4e151c;
case 0x4e151e:c.instructions+=1;goto B4e151e;
case 0x4e1520:goto L4e1520;
case 0x4e1526:goto L4e1526;
case 0x4e152b:c.instructions+=2;goto B4e152b;
case 0x4e152d:c.instructions+=1;goto B4e152d;
case 0x4e152f:goto L4e152f;
case 0x4e1532:c.instructions+=6;goto B4e1532;
case 0x4e1535:c.instructions+=5;goto B4e1535;
case 0x4e1538:c.instructions+=4;goto B4e1538;
case 0x4e1539:c.instructions+=3;goto B4e1539;
case 0x4e153a:c.instructions+=2;goto B4e153a;
case 0x4e153f:c.instructions+=1;goto B4e153f;
case 0x4e1544:goto L4e1544;
case 0x4e1549:c.instructions+=2;goto B4e1549;
case 0x4e154b:c.instructions+=1;goto B4e154b;
case 0x4e1550:goto L4e1550;
case 0x4e1555:c.instructions+=3;goto B4e1555;
case 0x4e1557:c.instructions+=2;goto B4e1557;
case 0x4e155b:c.instructions+=1;goto B4e155b;
case 0x4e1560:goto L4e1560;
case 0x4e1563:c.instructions+=2;goto B4e1563;
case 0x4e1565:c.instructions+=1;goto B4e1565;
case 0x4e1567:goto L4e1567;
case 0x4e156a:c.instructions+=6;goto B4e156a;
case 0x4e156c:c.instructions+=5;goto B4e156c;
case 0x4e156f:c.instructions+=4;goto B4e156f;
case 0x4e1573:c.instructions+=3;goto B4e1573;
case 0x4e1579:c.instructions+=2;goto B4e1579;
case 0x4e157b:c.instructions+=1;goto B4e157b;
case 0x4e157d:goto L4e157d;
case 0x4e157f:goto L4e157f;
case 0x4e1584:c.instructions+=4;goto B4e1584;
case 0x4e1589:c.instructions+=3;goto B4e1589;
case 0x4e158a:c.instructions+=2;goto B4e158a;
case 0x4e158c:c.instructions+=1;goto B4e158c;
case 0x4e1591:goto L4e1591;
case 0x4e1595:c.instructions+=3;goto B4e1595;
case 0x4e1596:c.instructions+=2;goto B4e1596;
case 0x4e1598:c.instructions+=1;goto B4e1598;
case 0x4e159d:goto L4e159d;
case 0x4e15a1:c.instructions+=2;goto B4e15a1;
case 0x4e15a2:c.instructions+=1;goto B4e15a2;
case 0x4e15a7:goto L4e15a7;
case 0x4e15ad:c.instructions+=5;goto B4e15ad;
case 0x4e15b2:c.instructions+=4;goto B4e15b2;
case 0x4e15b3:c.instructions+=3;goto B4e15b3;
case 0x4e15b8:c.instructions+=2;goto B4e15b8;
case 0x4e15ba:c.instructions+=1;goto B4e15ba;
case 0x4e15bf:goto L4e15bf;
case 0x4e15c4:c.instructions+=4;goto B4e15c4;
case 0x4e15c5:c.instructions+=3;goto B4e15c5;
case 0x4e15ca:c.instructions+=2;goto B4e15ca;
case 0x4e15cc:c.instructions+=1;goto B4e15cc;
case 0x4e15d1:goto L4e15d1;
case 0x4e15d6:c.instructions+=5;goto B4e15d6;
case 0x4e15db:c.instructions+=4;goto B4e15db;
case 0x4e15dc:c.instructions+=3;goto B4e15dc;
case 0x4e15e1:c.instructions+=2;goto B4e15e1;
case 0x4e15e3:c.instructions+=1;goto B4e15e3;
case 0x4e15e8:goto L4e15e8;
case 0x4e15ee:c.instructions+=5;goto B4e15ee;
case 0x4e15f3:c.instructions+=4;goto B4e15f3;
case 0x4e15f4:c.instructions+=3;goto B4e15f4;
case 0x4e15f9:c.instructions+=2;goto B4e15f9;
case 0x4e15fb:c.instructions+=1;goto B4e15fb;
case 0x4e1600:goto L4e1600;
case 0x4e1606:c.instructions+=7;goto B4e1606;
case 0x4e160c:c.instructions+=6;goto B4e160c;
case 0x4e1611:c.instructions+=5;goto B4e1611;
case 0x4e1612:c.instructions+=4;goto B4e1612;
case 0x4e1614:c.instructions+=3;goto B4e1614;
case 0x4e1617:c.instructions+=2;goto B4e1617;
case 0x4e161c:c.instructions+=1;goto B4e161c;
case 0x4e1621:goto L4e1621;
case 0x4e1626:c.instructions+=2;goto B4e1626;
case 0x4e1628:c.instructions+=1;goto B4e1628;
case 0x4e162d:goto L4e162d;
case 0x4e1633:c.instructions+=5;goto B4e1633;
case 0x4e1638:c.instructions+=4;goto B4e1638;
case 0x4e1639:c.instructions+=3;goto B4e1639;
case 0x4e163e:c.instructions+=2;goto B4e163e;
case 0x4e1640:c.instructions+=1;goto B4e1640;
case 0x4e1645:goto L4e1645;
case 0x4e164a:c.instructions+=5;goto B4e164a;
case 0x4e164f:c.instructions+=4;goto B4e164f;
case 0x4e1650:c.instructions+=3;goto B4e1650;
case 0x4e1655:c.instructions+=2;goto B4e1655;
case 0x4e1657:c.instructions+=1;goto B4e1657;
case 0x4e165c:goto L4e165c;
case 0x4e1662:c.instructions+=5;goto B4e1662;
case 0x4e1667:c.instructions+=4;goto B4e1667;
case 0x4e1668:c.instructions+=3;goto B4e1668;
case 0x4e166d:c.instructions+=2;goto B4e166d;
case 0x4e166f:c.instructions+=1;goto B4e166f;
case 0x4e1674:goto L4e1674;
case 0x4e167a:c.instructions+=5;goto B4e167a;
case 0x4e167f:c.instructions+=4;goto B4e167f;
case 0x4e1680:c.instructions+=3;goto B4e1680;
case 0x4e1685:c.instructions+=2;goto B4e1685;
case 0x4e1687:c.instructions+=1;goto B4e1687;
case 0x4e168c:goto L4e168c;
case 0x4e1691:c.instructions+=5;goto B4e1691;
case 0x4e1696:c.instructions+=4;goto B4e1696;
case 0x4e1697:c.instructions+=3;goto B4e1697;
case 0x4e169c:c.instructions+=2;goto B4e169c;
case 0x4e169e:c.instructions+=1;goto B4e169e;
case 0x4e16a3:goto L4e16a3;
case 0x4e16a9:c.instructions+=5;goto B4e16a9;
case 0x4e16ae:c.instructions+=4;goto B4e16ae;
case 0x4e16af:c.instructions+=3;goto B4e16af;
case 0x4e16b4:c.instructions+=2;goto B4e16b4;
case 0x4e16b6:c.instructions+=1;goto B4e16b6;
case 0x4e16bb:goto L4e16bb;
case 0x4e16c0:c.instructions+=2;goto B4e16c0;
case 0x4e16c2:c.instructions+=1;goto B4e16c2;
case 0x4e16c7:goto L4e16c7;
case 0x4e16cd:c.instructions+=7;goto B4e16cd;
case 0x4e16d2:c.instructions+=6;goto B4e16d2;
case 0x4e16d7:c.instructions+=5;goto B4e16d7;
case 0x4e16d8:c.instructions+=4;goto B4e16d8;
case 0x4e16d9:c.instructions+=3;goto B4e16d9;
case 0x4e16de:c.instructions+=2;goto B4e16de;
case 0x4e16e0:c.instructions+=1;goto B4e16e0;
case 0x4e16e5:goto L4e16e5;
case 0x4e16eb:c.instructions+=7;goto B4e16eb;
case 0x4e16f1:c.instructions+=6;goto B4e16f1;
case 0x4e16f6:c.instructions+=5;goto B4e16f6;
case 0x4e16f7:c.instructions+=4;goto B4e16f7;
case 0x4e16f8:c.instructions+=3;goto B4e16f8;
case 0x4e16fd:c.instructions+=2;goto B4e16fd;
case 0x4e16ff:c.instructions+=1;goto B4e16ff;
case 0x4e1704:goto L4e1704;
case 0x4e1709:c.instructions+=5;goto B4e1709;
case 0x4e170e:c.instructions+=4;goto B4e170e;
case 0x4e170f:c.instructions+=3;goto B4e170f;
case 0x4e1714:c.instructions+=2;goto B4e1714;
case 0x4e1716:c.instructions+=1;goto B4e1716;
case 0x4e171b:goto L4e171b;
case 0x4e1720:c.instructions+=2;goto B4e1720;
case 0x4e1722:c.instructions+=1;goto B4e1722;
case 0x4e1727:goto L4e1727;
case 0x4e172c:c.instructions+=3;goto B4e172c;
case 0x4e172d:c.instructions+=2;goto B4e172d;
case 0x4e1732:c.instructions+=1;goto B4e1732;
case 0x4e1737:goto L4e1737;
case 0x4e173a:c.instructions+=5;goto B4e173a;
case 0x4e173b:c.instructions+=4;goto B4e173b;
case 0x4e173f:c.instructions+=3;goto B4e173f;
case 0x4e1741:c.instructions+=2;goto B4e1741;
case 0x4e1742:c.instructions+=1;goto B4e1742;
case 0x4e1747:goto L4e1747;
case 0x4e174b:c.instructions+=7;goto B4e174b;
case 0x4e174c:c.instructions+=6;goto B4e174c;
case 0x4e1751:c.instructions+=5;goto B4e1751;
case 0x4e1756:c.instructions+=4;goto B4e1756;
case 0x4e175a:c.instructions+=3;goto B4e175a;
case 0x4e175c:c.instructions+=2;goto B4e175c;
case 0x4e175d:c.instructions+=1;goto B4e175d;
case 0x4e1762:goto L4e1762;
case 0x4e1768:c.instructions+=6;goto B4e1768;
case 0x4e176b:c.instructions+=5;goto B4e176b;
case 0x4e176c:c.instructions+=4;goto B4e176c;
case 0x4e1770:c.instructions+=3;goto B4e1770;
case 0x4e1771:c.instructions+=2;goto B4e1771;
case 0x4e1773:c.instructions+=1;goto B4e1773;
case 0x4e1778:goto L4e1778;
case 0x4e1779:c.instructions+=2;goto B4e1779;
case 0x4e177e:c.instructions+=1;goto B4e177e;
case 0x4e1783:goto L4e1783;
case 0x4e1785:c.instructions+=1;goto B4e1785;
case 0x4e1787:goto L4e1787;
case 0x4e1788:c.instructions+=2;goto B4e1788;
case 0x4e178b:c.instructions+=1;goto B4e178b;
case 0x4e178d:goto L4e178d;
case 0x4e178e:c.instructions+=2;goto B4e178e;
case 0x4e1793:c.instructions+=1;goto B4e1793;
case 0x4e1798:goto L4e1798;
case 0x4e179b:c.instructions+=5;goto B4e179b;
case 0x4e179c:c.instructions+=4;goto B4e179c;
case 0x4e17a0:c.instructions+=3;goto B4e17a0;
case 0x4e17a2:c.instructions+=2;goto B4e17a2;
case 0x4e17a3:c.instructions+=1;goto B4e17a3;
case 0x4e17a8:goto L4e17a8;
case 0x4e17ac:c.instructions+=7;goto B4e17ac;
case 0x4e17ad:c.instructions+=6;goto B4e17ad;
case 0x4e17b2:c.instructions+=5;goto B4e17b2;
case 0x4e17b7:c.instructions+=4;goto B4e17b7;
case 0x4e17bb:c.instructions+=3;goto B4e17bb;
case 0x4e17bd:c.instructions+=2;goto B4e17bd;
case 0x4e17be:c.instructions+=1;goto B4e17be;
case 0x4e17c3:goto L4e17c3;
case 0x4e17ca:c.instructions+=6;goto B4e17ca;
case 0x4e17cd:c.instructions+=5;goto B4e17cd;
case 0x4e17ce:c.instructions+=4;goto B4e17ce;
case 0x4e17d2:c.instructions+=3;goto B4e17d2;
case 0x4e17d3:c.instructions+=2;goto B4e17d3;
case 0x4e17d5:c.instructions+=1;goto B4e17d5;
case 0x4e17da:goto L4e17da;
case 0x4e17db:c.instructions+=2;goto B4e17db;
case 0x4e17e0:c.instructions+=1;goto B4e17e0;
case 0x4e17e5:goto L4e17e5;
case 0x4e17e7:c.instructions+=1;goto B4e17e7;
case 0x4e17e9:goto L4e17e9;
case 0x4e17ee:c.instructions+=2;goto B4e17ee;
case 0x4e17f0:c.instructions+=1;goto B4e17f0;
case 0x4e17f5:goto L4e17f5;
case 0x4e17fa:c.instructions+=3;goto B4e17fa;
case 0x4e17fb:c.instructions+=2;goto B4e17fb;
case 0x4e1800:c.instructions+=1;goto B4e1800;
case 0x4e1805:goto L4e1805;
case 0x4e1808:c.instructions+=5;goto B4e1808;
case 0x4e1809:c.instructions+=4;goto B4e1809;
case 0x4e180d:c.instructions+=3;goto B4e180d;
case 0x4e180f:c.instructions+=2;goto B4e180f;
case 0x4e1810:c.instructions+=1;goto B4e1810;
case 0x4e1815:goto L4e1815;
case 0x4e1819:c.instructions+=7;goto B4e1819;
case 0x4e181a:c.instructions+=6;goto B4e181a;
case 0x4e181f:c.instructions+=5;goto B4e181f;
case 0x4e1824:c.instructions+=4;goto B4e1824;
case 0x4e182b:c.instructions+=3;goto B4e182b;
case 0x4e182d:c.instructions+=2;goto B4e182d;
case 0x4e182e:c.instructions+=1;goto B4e182e;
case 0x4e1833:goto L4e1833;
case 0x4e1839:c.instructions+=6;goto B4e1839;
case 0x4e183c:c.instructions+=5;goto B4e183c;
case 0x4e183d:c.instructions+=4;goto B4e183d;
case 0x4e1844:c.instructions+=3;goto B4e1844;
case 0x4e1845:c.instructions+=2;goto B4e1845;
case 0x4e1847:c.instructions+=1;goto B4e1847;
case 0x4e184c:goto L4e184c;
case 0x4e184d:c.instructions+=2;goto B4e184d;
case 0x4e1852:c.instructions+=1;goto B4e1852;
case 0x4e1857:goto L4e1857;
case 0x4e1859:c.instructions+=1;goto B4e1859;
case 0x4e185b:goto L4e185b;
case 0x4e1860:goto L4e1860;
case 0x4e1861:c.instructions+=2;goto B4e1861;
case 0x4e1864:c.instructions+=1;goto B4e1864;
case 0x4e1866:goto L4e1866;
case 0x4e1867:c.instructions+=2;goto B4e1867;
case 0x4e186c:c.instructions+=1;goto B4e186c;
case 0x4e1871:goto L4e1871;
case 0x4e1874:c.instructions+=5;goto B4e1874;
case 0x4e1875:c.instructions+=4;goto B4e1875;
case 0x4e1879:c.instructions+=3;goto B4e1879;
case 0x4e187b:c.instructions+=2;goto B4e187b;
case 0x4e187c:c.instructions+=1;goto B4e187c;
case 0x4e1881:goto L4e1881;
case 0x4e1885:c.instructions+=7;goto B4e1885;
case 0x4e1886:c.instructions+=6;goto B4e1886;
case 0x4e188b:c.instructions+=5;goto B4e188b;
case 0x4e1890:c.instructions+=4;goto B4e1890;
case 0x4e1897:c.instructions+=3;goto B4e1897;
case 0x4e1899:c.instructions+=2;goto B4e1899;
case 0x4e189a:c.instructions+=1;goto B4e189a;
case 0x4e189f:goto L4e189f;
case 0x4e18a6:c.instructions+=6;goto B4e18a6;
case 0x4e18a9:c.instructions+=5;goto B4e18a9;
case 0x4e18aa:c.instructions+=4;goto B4e18aa;
case 0x4e18b1:c.instructions+=3;goto B4e18b1;
case 0x4e18b2:c.instructions+=2;goto B4e18b2;
case 0x4e18b4:c.instructions+=1;goto B4e18b4;
case 0x4e18b9:goto L4e18b9;
case 0x4e18ba:c.instructions+=2;goto B4e18ba;
case 0x4e18bf:c.instructions+=1;goto B4e18bf;
case 0x4e18c4:goto L4e18c4;
case 0x4e18c6:c.instructions+=1;goto B4e18c6;
case 0x4e18c8:goto L4e18c8;
case 0x4e18ca:c.instructions+=2;goto B4e18ca;
case 0x4e18cf:c.instructions+=1;goto B4e18cf;
case 0x4e18d4:goto L4e18d4;
case 0x4e18d6:c.instructions+=1;goto B4e18d6;
case 0x4e18d8:goto L4e18d8;
case 0x4e18dd:c.instructions+=2;goto B4e18dd;
case 0x4e18df:c.instructions+=1;goto B4e18df;
case 0x4e18e4:goto L4e18e4;
case 0x4e18e9:c.instructions+=1;goto B4e18e9;
case 0x4e18f1:goto L4e18f1;
case 0x4e18f5:c.instructions+=2;goto B4e18f5;
case 0x4e18f8:c.instructions+=1;goto B4e18f8;
case 0x4e18fa:goto L4e18fa;
case 0x4e1902:c.instructions+=5;goto B4e1902;
case 0x4e190a:c.instructions+=4;goto B4e190a;
case 0x4e190b:c.instructions+=3;goto B4e190b;
case 0x4e1910:c.instructions+=2;goto B4e1910;
case 0x4e1914:c.instructions+=1;goto B4e1914;
case 0x4e1919:goto L4e1919;
case 0x4e191d:c.instructions+=7;goto B4e191d;
case 0x4e1920:c.instructions+=6;goto B4e1920;
case 0x4e1925:c.instructions+=5;goto B4e1925;
case 0x4e1926:c.instructions+=4;goto B4e1926;
case 0x4e1927:c.instructions+=3;goto B4e1927;
case 0x4e1928:c.instructions+=2;goto B4e1928;
case 0x4e192a:c.instructions+=1;goto B4e192a;
case 0x4e192f:goto L4e192f;
case 0x4e1930:c.instructions+=2;goto B4e1930;
case 0x4e1935:c.instructions+=1;goto B4e1935;
case 0x4e193a:goto L4e193a;
case 0x4e193c:c.instructions+=1;goto B4e193c;
case 0x4e193e:goto L4e193e;
case 0x4e1942:c.instructions+=5;goto B4e1942;
case 0x4e1947:c.instructions+=4;goto B4e1947;
case 0x4e1948:c.instructions+=3;goto B4e1948;
case 0x4e194d:c.instructions+=2;goto B4e194d;
case 0x4e1951:c.instructions+=1;goto B4e1951;
case 0x4e1953:goto L4e1953;
case 0x4e1958:c.instructions+=2;goto B4e1958;
case 0x4e195a:c.instructions+=1;goto B4e195a;
case 0x4e195f:goto L4e195f;
case 0x4e1964:c.instructions+=3;goto B4e1964;
case 0x4e1966:c.instructions+=2;goto B4e1966;
case 0x4e196a:c.instructions+=1;goto B4e196a;
case 0x4e196f:goto L4e196f;
case 0x4e1972:c.instructions+=3;goto B4e1972;
case 0x4e1974:c.instructions+=2;goto B4e1974;
case 0x4e1975:c.instructions+=1;goto B4e1975;
case 0x4e1977:goto L4e1977;
case 0x4e197a:c.instructions+=6;goto B4e197a;
case 0x4e197c:c.instructions+=5;goto B4e197c;
case 0x4e197f:c.instructions+=4;goto B4e197f;
case 0x4e1983:c.instructions+=3;goto B4e1983;
case 0x4e1989:c.instructions+=2;goto B4e1989;
case 0x4e198b:c.instructions+=1;goto B4e198b;
case 0x4e198d:goto L4e198d;
case 0x4e198f:goto L4e198f;
case 0x4e1994:c.instructions+=4;goto B4e1994;
case 0x4e1999:c.instructions+=3;goto B4e1999;
case 0x4e199a:c.instructions+=2;goto B4e199a;
case 0x4e199c:c.instructions+=1;goto B4e199c;
case 0x4e19a1:goto L4e19a1;
case 0x4e19a6:c.instructions+=1;goto B4e19a6;
case 0x4e19ab:goto L4e19ab;
case 0x4e19ae:c.instructions+=4;goto B4e19ae;
case 0x4e19b2:c.instructions+=3;goto B4e19b2;
case 0x4e19b4:c.instructions+=2;goto B4e19b4;
case 0x4e19bf:c.instructions+=1;goto B4e19bf;
case 0x4e19c1:goto L4e19c1;
case 0x4e19c5:c.instructions+=3;goto B4e19c5;
case 0x4e19c6:c.instructions+=2;goto B4e19c6;
case 0x4e19c8:c.instructions+=1;goto B4e19c8;
case 0x4e19cd:goto L4e19cd;
case 0x4e19cf:goto L4e19cf;
case 0x4e19d1:goto L4e19d1;
case 0x4e19d3:c.instructions+=2;goto B4e19d3;
case 0x4e19de:c.instructions+=1;goto B4e19de;
case 0x4e19e0:goto L4e19e0;
case 0x4e19e3:c.instructions+=1;goto B4e19e3;
case 0x4e19e5:goto L4e19e5;
case 0x4e19e7:goto L4e19e7;
case 0x4e19ea:c.instructions+=9;goto B4e19ea;
case 0x4e19ee:c.instructions+=8;goto B4e19ee;
case 0x4e19f1:c.instructions+=7;goto B4e19f1;
case 0x4e19f3:c.instructions+=6;goto B4e19f3;
case 0x4e19f6:c.instructions+=5;goto B4e19f6;
case 0x4e19f8:c.instructions+=4;goto B4e19f8;
case 0x4e19f9:c.instructions+=3;goto B4e19f9;
case 0x4e19fb:c.instructions+=2;goto B4e19fb;
case 0x4e19fe:c.instructions+=1;goto B4e19fe;
case 0x4e1a03:goto L4e1a03;
case 0x4e1a05:c.instructions+=2;goto B4e1a05;
case 0x4e1a07:c.instructions+=1;goto B4e1a07;
case 0x4e1a0c:goto L4e1a0c;
case 0x4e1a13:c.instructions+=5;goto B4e1a13;
case 0x4e1a14:c.instructions+=4;goto B4e1a14;
case 0x4e1a15:c.instructions+=3;goto B4e1a15;
case 0x4e1a1c:c.instructions+=2;goto B4e1a1c;
case 0x4e1a22:c.instructions+=1;goto B4e1a22;
case 0x4e1a30:goto L4e1a30;
case 0x4e1a31:c.instructions+=15;goto B4e1a31;
case 0x4e1a33:c.instructions+=14;goto B4e1a33;
case 0x4e1a35:c.instructions+=13;goto B4e1a35;
case 0x4e1a3a:c.instructions+=12;goto B4e1a3a;
case 0x4e1a40:c.instructions+=11;goto B4e1a40;
case 0x4e1a41:c.instructions+=10;goto B4e1a41;
case 0x4e1a48:c.instructions+=9;goto B4e1a48;
case 0x4e1a49:c.instructions+=8;goto B4e1a49;
case 0x4e1a4a:c.instructions+=7;goto B4e1a4a;
case 0x4e1a4d:c.instructions+=6;goto B4e1a4d;
case 0x4e1a4e:c.instructions+=5;goto B4e1a4e;
case 0x4e1a4f:c.instructions+=4;goto B4e1a4f;
case 0x4e1a51:c.instructions+=3;goto B4e1a51;
case 0x4e1a52:c.instructions+=2;goto B4e1a52;
case 0x4e1a55:c.instructions+=1;goto B4e1a55;
case 0x4e1a5a:goto L4e1a5a;
case 0x4e1a5d:c.instructions+=12;goto B4e1a5d;
case 0x4e1a5f:c.instructions+=11;goto B4e1a5f;
case 0x4e1a61:c.instructions+=10;goto B4e1a61;
case 0x4e1a62:c.instructions+=9;goto B4e1a62;
case 0x4e1a63:c.instructions+=8;goto B4e1a63;
case 0x4e1a64:c.instructions+=7;goto B4e1a64;
case 0x4e1a69:c.instructions+=6;goto B4e1a69;
case 0x4e1a6e:c.instructions+=5;goto B4e1a6e;
case 0x4e1a6f:c.instructions+=4;goto B4e1a6f;
case 0x4e1a72:c.instructions+=3;goto B4e1a72;
case 0x4e1a75:c.instructions+=2;goto B4e1a75;
case 0x4e1a7b:c.instructions+=1;goto B4e1a7b;
case 0x4e1a80:goto L4e1a80;
case 0x4e1a86:c.instructions+=3;goto B4e1a86;
case 0x4e1a8a:c.instructions+=2;goto B4e1a8a;
case 0x4e1a91:c.instructions+=1;goto B4e1a91;
case 0x4e1a96:goto L4e1a96;
case 0x4e1a97:c.instructions+=1;goto B4e1a97;
case 0x4e1a9c:goto L4e1a9c;
case 0x4e1a9f:c.instructions+=2;goto B4e1a9f;
case 0x4e1aa1:c.instructions+=1;goto B4e1aa1;
case 0x4e1aa3:goto L4e1aa3;
case 0x4e1aa6:c.instructions+=4;goto B4e1aa6;
case 0x4e1aa7:c.instructions+=3;goto B4e1aa7;
case 0x4e1aac:c.instructions+=2;goto B4e1aac;
case 0x4e1aad:c.instructions+=1;goto B4e1aad;
case 0x4e1ab2:goto L4e1ab2;
case 0x4e1ab3:c.instructions+=1;goto B4e1ab3;
case 0x4e1ab8:goto L4e1ab8;
case 0x4e1abb:goto L4e1abb;
case 0x4e1ac1:c.instructions+=1;goto B4e1ac1;
case 0x4e1ac6:goto L4e1ac6;
case 0x4e1ac9:c.instructions+=5;goto B4e1ac9;
case 0x4e1acc:c.instructions+=4;goto B4e1acc;
case 0x4e1acd:c.instructions+=3;goto B4e1acd;
case 0x4e1ace:c.instructions+=2;goto B4e1ace;
case 0x4e1ad4:c.instructions+=1;goto B4e1ad4;
case 0x4e1ad9:goto L4e1ad9;
case 0x4e1adf:c.instructions+=3;goto B4e1adf;
case 0x4e1ae2:c.instructions+=2;goto B4e1ae2;
case 0x4e1ae3:c.instructions+=1;goto B4e1ae3;
case 0x4e1ae8:goto L4e1ae8;
case 0x4e1ae9:c.instructions+=2;goto B4e1ae9;
case 0x4e1aea:c.instructions+=1;goto B4e1aea;
case 0x4e1aef:goto L4e1aef;
case 0x4e1af2:c.instructions+=3;goto B4e1af2;
case 0x4e1af7:c.instructions+=2;goto B4e1af7;
case 0x4e1af8:c.instructions+=1;goto B4e1af8;
case 0x4e1afd:goto L4e1afd;
case 0x4e1b03:c.instructions+=4;goto B4e1b03;
case 0x4e1b06:c.instructions+=3;goto B4e1b06;
case 0x4e1b0b:c.instructions+=2;goto B4e1b0b;
case 0x4e1b0c:c.instructions+=1;goto B4e1b0c;
case 0x4e1b11:goto L4e1b11;
case 0x4e1b17:c.instructions+=12;goto B4e1b17;
case 0x4e1b1c:c.instructions+=11;goto B4e1b1c;
case 0x4e1b22:c.instructions+=10;goto B4e1b22;
case 0x4e1b25:c.instructions+=9;goto B4e1b25;
case 0x4e1b28:c.instructions+=8;goto B4e1b28;
case 0x4e1b2b:c.instructions+=7;goto B4e1b2b;
case 0x4e1b31:c.instructions+=6;goto B4e1b31;
case 0x4e1b33:c.instructions+=5;goto B4e1b33;
case 0x4e1b34:c.instructions+=4;goto B4e1b34;
case 0x4e1b35:c.instructions+=3;goto B4e1b35;
case 0x4e1b36:c.instructions+=2;goto B4e1b36;
case 0x4e1b38:c.instructions+=1;goto B4e1b38;
case 0x4e1b3d:goto L4e1b3d;
case 0x4e1b40:c.instructions+=2;goto B4e1b40;
case 0x4e1b42:c.instructions+=1;goto B4e1b42;
case 0x4e1b47:goto L4e1b47;
case 0x4e1b4a:c.instructions+=8;goto B4e1b4a;
case 0x4e1b4b:c.instructions+=7;goto B4e1b4b;
case 0x4e1b4d:c.instructions+=6;goto B4e1b4d;
case 0x4e1b4e:c.instructions+=5;goto B4e1b4e;
case 0x4e1b4f:c.instructions+=4;goto B4e1b4f;
case 0x4e1b56:c.instructions+=3;goto B4e1b56;
case 0x4e1b58:c.instructions+=2;goto B4e1b58;
case 0x4e1b59:c.instructions+=1;goto B4e1b59;
case 0x4e1b60:goto L4e1b60;
case 0x4e1b61:c.instructions+=2;goto B4e1b61;
case 0x4e1b63:c.instructions+=1;goto B4e1b63;
case 0x4e1b68:goto L4e1b68;
case 0x4e1b6d:c.instructions+=1;goto B4e1b6d;
case 0x4e1b6f:goto L4e1b6f;
case 0x4e1b70:c.instructions+=1;goto B4e1b70;
case 0x4e1b75:goto L4e1b75;
case 0x4e1b78:goto L4e1b78;
case 0x4e1b7a:c.instructions+=2;goto B4e1b7a;
case 0x4e1b7b:c.instructions+=1;goto B4e1b7b;
case 0x4e1b80:goto L4e1b80;
case 0x4e1b81:c.instructions+=10;goto B4e1b81;
case 0x4e1b83:c.instructions+=9;goto B4e1b83;
case 0x4e1b85:c.instructions+=8;goto B4e1b85;
case 0x4e1b8a:c.instructions+=7;goto B4e1b8a;
case 0x4e1b90:c.instructions+=6;goto B4e1b90;
case 0x4e1b91:c.instructions+=5;goto B4e1b91;
case 0x4e1b98:c.instructions+=4;goto B4e1b98;
case 0x4e1b99:c.instructions+=3;goto B4e1b99;
case 0x4e1b9e:c.instructions+=2;goto B4e1b9e;
case 0x4e1ba3:c.instructions+=1;goto B4e1ba3;
case 0x4e1ba8:goto L4e1ba8;
case 0x4e1bad:c.instructions+=1;goto B4e1bad;
case 0x4e1bb2:goto L4e1bb2;
case 0x4e1bb5:c.instructions+=4;goto B4e1bb5;
case 0x4e1bb8:c.instructions+=3;goto B4e1bb8;
case 0x4e1bba:c.instructions+=2;goto B4e1bba;
case 0x4e1bc1:c.instructions+=1;goto B4e1bc1;
case 0x4e1bc3:goto L4e1bc3;
case 0x4e1bc6:c.instructions+=3;goto B4e1bc6;
case 0x4e1bc7:c.instructions+=2;goto B4e1bc7;
case 0x4e1bc9:c.instructions+=1;goto B4e1bc9;
case 0x4e1bce:goto L4e1bce;
case 0x4e1bd1:c.instructions+=4;goto B4e1bd1;
case 0x4e1bd8:c.instructions+=3;goto B4e1bd8;
case 0x4e1bda:c.instructions+=2;goto B4e1bda;
case 0x4e1bdb:c.instructions+=1;goto B4e1bdb;
case 0x4e1bdc:goto L4e1bdc;
case 0x4e1bdf:c.instructions+=5;goto B4e1bdf;
case 0x4e1be1:c.instructions+=4;goto B4e1be1;
case 0x4e1be8:c.instructions+=3;goto B4e1be8;
case 0x4e1bea:c.instructions+=2;goto B4e1bea;
case 0x4e1beb:c.instructions+=1;goto B4e1beb;
case 0x4e1bf0:goto L4e1bf0;
case 0x4e1bf1:c.instructions+=15;goto B4e1bf1;
case 0x4e1bf3:c.instructions+=14;goto B4e1bf3;
case 0x4e1bf5:c.instructions+=13;goto B4e1bf5;
case 0x4e1bfa:c.instructions+=12;goto B4e1bfa;
case 0x4e1c00:c.instructions+=11;goto B4e1c00;
case 0x4e1c01:c.instructions+=10;goto B4e1c01;
case 0x4e1c08:c.instructions+=9;goto B4e1c08;
case 0x4e1c0b:c.instructions+=8;goto B4e1c0b;
case 0x4e1c0e:c.instructions+=7;goto B4e1c0e;
case 0x4e1c0f:c.instructions+=6;goto B4e1c0f;
case 0x4e1c10:c.instructions+=5;goto B4e1c10;
case 0x4e1c11:c.instructions+=4;goto B4e1c11;
case 0x4e1c13:c.instructions+=3;goto B4e1c13;
case 0x4e1c14:c.instructions+=2;goto B4e1c14;
case 0x4e1c17:c.instructions+=1;goto B4e1c17;
case 0x4e1c1c:goto L4e1c1c;
case 0x4e1c1f:c.instructions+=15;goto B4e1c1f;
case 0x4e1c21:c.instructions+=14;goto B4e1c21;
case 0x4e1c23:c.instructions+=13;goto B4e1c23;
case 0x4e1c24:c.instructions+=12;goto B4e1c24;
case 0x4e1c25:c.instructions+=11;goto B4e1c25;
case 0x4e1c27:c.instructions+=10;goto B4e1c27;
case 0x4e1c2c:c.instructions+=9;goto B4e1c2c;
case 0x4e1c32:c.instructions+=8;goto B4e1c32;
case 0x4e1c38:c.instructions+=7;goto B4e1c38;
case 0x4e1c3d:c.instructions+=6;goto B4e1c3d;
case 0x4e1c40:c.instructions+=5;goto B4e1c40;
case 0x4e1c43:c.instructions+=4;goto B4e1c43;
case 0x4e1c44:c.instructions+=3;goto B4e1c44;
case 0x4e1c46:c.instructions+=2;goto B4e1c46;
case 0x4e1c49:c.instructions+=1;goto B4e1c49;
case 0x4e1c4e:goto L4e1c4e;
case 0x4e1c51:c.instructions+=10;goto B4e1c51;
case 0x4e1c53:c.instructions+=9;goto B4e1c53;
case 0x4e1c55:c.instructions+=8;goto B4e1c55;
case 0x4e1c56:c.instructions+=7;goto B4e1c56;
case 0x4e1c57:c.instructions+=6;goto B4e1c57;
case 0x4e1c5c:c.instructions+=5;goto B4e1c5c;
case 0x4e1c61:c.instructions+=4;goto B4e1c61;
case 0x4e1c67:c.instructions+=3;goto B4e1c67;
case 0x4e1c68:c.instructions+=2;goto B4e1c68;
case 0x4e1c6c:c.instructions+=1;goto B4e1c6c;
case 0x4e1c71:goto L4e1c71;
case 0x4e1c75:c.instructions+=5;goto B4e1c75;
case 0x4e1c7b:c.instructions+=4;goto B4e1c7b;
case 0x4e1c82:c.instructions+=3;goto B4e1c82;
case 0x4e1c88:c.instructions+=2;goto B4e1c88;
case 0x4e1c8e:c.instructions+=1;goto B4e1c8e;
case 0x4e1c93:goto L4e1c93;
case 0x4e1c94:c.instructions+=1;goto B4e1c94;
case 0x4e1c99:goto L4e1c99;
case 0x4e1c9c:c.instructions+=2;goto B4e1c9c;
case 0x4e1c9e:c.instructions+=1;goto B4e1c9e;
case 0x4e1ca0:goto L4e1ca0;
case 0x4e1ca3:c.instructions+=4;goto B4e1ca3;
case 0x4e1ca4:c.instructions+=3;goto B4e1ca4;
case 0x4e1ca9:c.instructions+=2;goto B4e1ca9;
case 0x4e1caa:c.instructions+=1;goto B4e1caa;
case 0x4e1caf:goto L4e1caf;
case 0x4e1cb0:c.instructions+=1;goto B4e1cb0;
case 0x4e1cb5:goto L4e1cb5;
case 0x4e1cb8:goto L4e1cb8;
case 0x4e1cbe:c.instructions+=1;goto B4e1cbe;
case 0x4e1cc3:goto L4e1cc3;
case 0x4e1cc6:c.instructions+=5;goto B4e1cc6;
case 0x4e1cc9:c.instructions+=4;goto B4e1cc9;
case 0x4e1cca:c.instructions+=3;goto B4e1cca;
case 0x4e1ccb:c.instructions+=2;goto B4e1ccb;
case 0x4e1cd1:c.instructions+=1;goto B4e1cd1;
case 0x4e1cd6:goto L4e1cd6;
case 0x4e1cdb:c.instructions+=4;goto B4e1cdb;
case 0x4e1cde:c.instructions+=3;goto B4e1cde;
case 0x4e1cdf:c.instructions+=2;goto B4e1cdf;
case 0x4e1ce2:c.instructions+=1;goto B4e1ce2;
case 0x4e1ce7:goto L4e1ce7;
case 0x4e1cea:c.instructions+=3;goto B4e1cea;
case 0x4e1ceb:c.instructions+=2;goto B4e1ceb;
case 0x4e1cec:c.instructions+=1;goto B4e1cec;
case 0x4e1cf1:goto L4e1cf1;
case 0x4e1cf4:c.instructions+=3;goto B4e1cf4;
case 0x4e1cf9:c.instructions+=2;goto B4e1cf9;
case 0x4e1cfc:c.instructions+=1;goto B4e1cfc;
case 0x4e1d01:goto L4e1d01;
case 0x4e1d02:c.instructions+=3;goto B4e1d02;
case 0x4e1d05:c.instructions+=2;goto B4e1d05;
case 0x4e1d06:c.instructions+=1;goto B4e1d06;
case 0x4e1d0b:goto L4e1d0b;
case 0x4e1d0e:c.instructions+=4;goto B4e1d0e;
case 0x4e1d13:c.instructions+=3;goto B4e1d13;
case 0x4e1d19:c.instructions+=2;goto B4e1d19;
case 0x4e1d1c:c.instructions+=1;goto B4e1d1c;
case 0x4e1d21:goto L4e1d21;
case 0x4e1d24:c.instructions+=3;goto B4e1d24;
case 0x4e1d25:c.instructions+=2;goto B4e1d25;
case 0x4e1d26:c.instructions+=1;goto B4e1d26;
case 0x4e1d2b:goto L4e1d2b;
case 0x4e1d2e:c.instructions+=5;goto B4e1d2e;
case 0x4e1d30:c.instructions+=4;goto B4e1d30;
case 0x4e1d36:c.instructions+=3;goto B4e1d36;
case 0x4e1d40:c.instructions+=2;goto B4e1d40;
case 0x4e1d47:c.instructions+=1;goto B4e1d47;
case 0x4e1d4c:goto L4e1d4c;
case 0x4e1d51:c.instructions+=2;goto B4e1d51;
case 0x4e1d58:c.instructions+=1;goto B4e1d58;
case 0x4e1d5a:goto L4e1d5a;
case 0x4e1d5c:c.instructions+=1;goto B4e1d5c;
case 0x4e1d60:goto L4e1d60;
case 0x4e1d62:c.instructions+=1;goto B4e1d62;
case 0x4e1d67:goto L4e1d67;
case 0x4e1d6a:c.instructions+=2;goto B4e1d6a;
case 0x4e1d6c:c.instructions+=1;goto B4e1d6c;
case 0x4e1d6e:goto L4e1d6e;
case 0x4e1d71:c.instructions+=12;goto B4e1d71;
case 0x4e1d77:c.instructions+=11;goto B4e1d77;
case 0x4e1d79:c.instructions+=10;goto B4e1d79;
case 0x4e1d7c:c.instructions+=9;goto B4e1d7c;
case 0x4e1d7f:c.instructions+=8;goto B4e1d7f;
case 0x4e1d82:c.instructions+=7;goto B4e1d82;
case 0x4e1d85:c.instructions+=6;goto B4e1d85;
case 0x4e1d88:c.instructions+=5;goto B4e1d88;
case 0x4e1d8b:c.instructions+=4;goto B4e1d8b;
case 0x4e1d8f:c.instructions+=3;goto B4e1d8f;
case 0x4e1d96:c.instructions+=2;goto B4e1d96;
case 0x4e1d9d:c.instructions+=1;goto B4e1d9d;
case 0x4e1d9f:goto L4e1d9f;
case 0x4e1da2:c.instructions+=4;goto B4e1da2;
case 0x4e1da3:c.instructions+=3;goto B4e1da3;
case 0x4e1da8:c.instructions+=2;goto B4e1da8;
case 0x4e1dab:c.instructions+=1;goto B4e1dab;
case 0x4e1db0:goto L4e1db0;
case 0x4e1db3:c.instructions+=3;goto B4e1db3;
case 0x4e1db4:c.instructions+=2;goto B4e1db4;
case 0x4e1db5:c.instructions+=1;goto B4e1db5;
case 0x4e1dba:goto L4e1dba;
case 0x4e1dbc:c.instructions+=2;goto B4e1dbc;
case 0x4e1dbf:c.instructions+=1;goto B4e1dbf;
case 0x4e1dc4:goto L4e1dc4;
case 0x4e1dc7:c.instructions+=2;goto B4e1dc7;
case 0x4e1dc9:c.instructions+=1;goto B4e1dc9;
case 0x4e1dcb:goto L4e1dcb;
case 0x4e1dce:c.instructions+=4;goto B4e1dce;
case 0x4e1dd4:c.instructions+=3;goto B4e1dd4;
case 0x4e1dd7:c.instructions+=2;goto B4e1dd7;
case 0x4e1dda:c.instructions+=1;goto B4e1dda;
case 0x4e1ddc:goto L4e1ddc;
case 0x4e1dde:goto L4e1dde;
case 0x4e1de1:c.instructions+=10;goto B4e1de1;
case 0x4e1de4:c.instructions+=9;goto B4e1de4;
case 0x4e1de6:c.instructions+=8;goto B4e1de6;
case 0x4e1de9:c.instructions+=7;goto B4e1de9;
case 0x4e1dec:c.instructions+=6;goto B4e1dec;
case 0x4e1dee:c.instructions+=5;goto B4e1dee;
case 0x4e1df1:c.instructions+=4;goto B4e1df1;
case 0x4e1df2:c.instructions+=3;goto B4e1df2;
case 0x4e1df7:c.instructions+=2;goto B4e1df7;
case 0x4e1dfa:c.instructions+=1;goto B4e1dfa;
case 0x4e1dff:goto L4e1dff;
case 0x4e1e02:c.instructions+=3;goto B4e1e02;
case 0x4e1e03:c.instructions+=2;goto B4e1e03;
case 0x4e1e04:c.instructions+=1;goto B4e1e04;
case 0x4e1e09:goto L4e1e09;
case 0x4e1e0c:c.instructions+=4;goto B4e1e0c;
case 0x4e1e0d:c.instructions+=3;goto B4e1e0d;
case 0x4e1e10:c.instructions+=2;goto B4e1e10;
case 0x4e1e13:c.instructions+=1;goto B4e1e13;
case 0x4e1e18:goto L4e1e18;
case 0x4e1e1b:c.instructions+=4;goto B4e1e1b;
case 0x4e1e1c:c.instructions+=3;goto B4e1e1c;
case 0x4e1e1d:c.instructions+=2;goto B4e1e1d;
case 0x4e1e20:c.instructions+=1;goto B4e1e20;
case 0x4e1e26:goto L4e1e26;
case 0x4e1e28:c.instructions+=1;goto B4e1e28;
case 0x4e1e2d:goto L4e1e2d;
case 0x4e1e2f:c.instructions+=3;goto B4e1e2f;
case 0x4e1e32:c.instructions+=2;goto B4e1e32;
case 0x4e1e34:c.instructions+=1;goto B4e1e34;
case 0x4e1e36:goto L4e1e36;
case 0x4e1e39:c.instructions+=12;goto B4e1e39;
case 0x4e1e3f:c.instructions+=11;goto B4e1e3f;
case 0x4e1e41:c.instructions+=10;goto B4e1e41;
case 0x4e1e44:c.instructions+=9;goto B4e1e44;
case 0x4e1e47:c.instructions+=8;goto B4e1e47;
case 0x4e1e4a:c.instructions+=7;goto B4e1e4a;
case 0x4e1e4d:c.instructions+=6;goto B4e1e4d;
case 0x4e1e50:c.instructions+=5;goto B4e1e50;
case 0x4e1e53:c.instructions+=4;goto B4e1e53;
case 0x4e1e57:c.instructions+=3;goto B4e1e57;
case 0x4e1e5e:c.instructions+=2;goto B4e1e5e;
case 0x4e1e65:c.instructions+=1;goto B4e1e65;
case 0x4e1e67:goto L4e1e67;
case 0x4e1e6a:c.instructions+=3;goto B4e1e6a;
case 0x4e1e6f:c.instructions+=2;goto B4e1e6f;
case 0x4e1e70:c.instructions+=1;goto B4e1e70;
case 0x4e1e75:goto L4e1e75;
case 0x4e1e77:c.instructions+=2;goto B4e1e77;
case 0x4e1e79:c.instructions+=1;goto B4e1e79;
case 0x4e1e7e:goto L4e1e7e;
case 0x4e1e81:c.instructions+=2;goto B4e1e81;
case 0x4e1e83:c.instructions+=1;goto B4e1e83;
case 0x4e1e85:goto L4e1e85;
case 0x4e1e8b:c.instructions+=3;goto B4e1e8b;
case 0x4e1e8e:c.instructions+=2;goto B4e1e8e;
case 0x4e1e91:c.instructions+=1;goto B4e1e91;
case 0x4e1e93:goto L4e1e93;
case 0x4e1e95:goto L4e1e95;
case 0x4e1e98:c.instructions+=8;goto B4e1e98;
case 0x4e1e9b:c.instructions+=7;goto B4e1e9b;
case 0x4e1e9d:c.instructions+=6;goto B4e1e9d;
case 0x4e1ea0:c.instructions+=5;goto B4e1ea0;
case 0x4e1ea2:c.instructions+=4;goto B4e1ea2;
case 0x4e1ea3:c.instructions+=3;goto B4e1ea3;
case 0x4e1ea9:c.instructions+=2;goto B4e1ea9;
case 0x4e1eac:c.instructions+=1;goto B4e1eac;
case 0x4e1eb1:goto L4e1eb1;
case 0x4e1eb6:goto L4e1eb6;
case 0x4e1eb8:c.instructions+=1;goto B4e1eb8;
case 0x4e1ebd:goto L4e1ebd;
case 0x4e1ebf:c.instructions+=4;goto B4e1ebf;
case 0x4e1ec2:c.instructions+=3;goto B4e1ec2;
case 0x4e1ec5:c.instructions+=2;goto B4e1ec5;
case 0x4e1ec7:c.instructions+=1;goto B4e1ec7;
case 0x4e1ec9:goto L4e1ec9;
case 0x4e1ecb:c.instructions+=9;goto B4e1ecb;
case 0x4e1ece:c.instructions+=8;goto B4e1ece;
case 0x4e1ed0:c.instructions+=7;goto B4e1ed0;
case 0x4e1ed3:c.instructions+=6;goto B4e1ed3;
case 0x4e1ed7:c.instructions+=5;goto B4e1ed7;
case 0x4e1eda:c.instructions+=4;goto B4e1eda;
case 0x4e1ede:c.instructions+=3;goto B4e1ede;
case 0x4e1ee4:c.instructions+=2;goto B4e1ee4;
case 0x4e1ee7:c.instructions+=1;goto B4e1ee7;
case 0x4e1ee9:goto L4e1ee9;
case 0x4e1ef0:goto L4e1ef0;
case 0x4e1ef5:c.instructions+=1;goto B4e1ef5;
case 0x4e1ef7:goto L4e1ef7;
case 0x4e1efc:c.instructions+=1;goto B4e1efc;
case 0x4e1efe:goto L4e1efe;
case 0x4e1f03:c.instructions+=1;goto B4e1f03;
case 0x4e1f05:goto L4e1f05;
case 0x4e1f0a:c.instructions+=1;goto B4e1f0a;
case 0x4e1f0c:goto L4e1f0c;
case 0x4e1f11:c.instructions+=1;goto B4e1f11;
case 0x4e1f13:goto L4e1f13;
case 0x4e1f18:c.instructions+=1;goto B4e1f18;
case 0x4e1f1a:goto L4e1f1a;
case 0x4e1f1c:goto L4e1f1c;
case 0x4e1f1e:c.instructions+=3;goto B4e1f1e;
case 0x4e1f20:c.instructions+=2;goto B4e1f20;
case 0x4e1f21:c.instructions+=1;goto B4e1f21;
case 0x4e1f26:goto L4e1f26;
case 0x4e1f29:c.instructions+=3;goto B4e1f29;
case 0x4e1f2a:c.instructions+=2;goto B4e1f2a;
case 0x4e1f2c:c.instructions+=1;goto B4e1f2c;
case 0x4e1f31:goto L4e1f31;
case 0x4e1f33:goto L4e1f33;
case 0x4e1f35:goto L4e1f35;
case 0x4e1f36:c.instructions+=3;goto B4e1f36;
case 0x4e1f3c:c.instructions+=2;goto B4e1f3c;
case 0x4e1f40:c.instructions+=1;goto B4e1f40;
case 0x4e1f45:goto L4e1f45;
case 0x4e1f48:c.instructions+=2;goto B4e1f48;
case 0x4e1f4e:c.instructions+=1;goto B4e1f4e;
case 0x4e1f54:goto L4e1f54;
case 0x4e1f5a:c.instructions+=2;goto B4e1f5a;
case 0x4e1f5c:c.instructions+=1;goto B4e1f5c;
case 0x4e1f5e:goto L4e1f5e;
case 0x4e1f61:c.instructions+=1;goto B4e1f61;
case 0x4e1f63:goto L4e1f63;
case 0x4e1f65:goto L4e1f65;
case 0x4e1f6b:c.instructions+=1;goto B4e1f6b;
case 0x4e1f71:goto L4e1f71;
case 0x4e1f73:c.instructions+=1;goto B4e1f73;
case 0x4e1f75:goto L4e1f75;
case 0x4e1f78:c.instructions+=1;goto B4e1f78;
case 0x4e1f7a:goto L4e1f7a;
case 0x4e1f7c:goto L4e1f7c;
case 0x4e1f7f:c.instructions+=2;goto B4e1f7f;
case 0x4e1f81:c.instructions+=1;goto B4e1f81;
case 0x4e1f83:goto L4e1f83;
case 0x4e1f86:c.instructions+=1;goto B4e1f86;
case 0x4e1f88:goto L4e1f88;
case 0x4e1f8a:goto L4e1f8a;
case 0x4e1f8c:c.instructions+=1;goto B4e1f8c;
case 0x4e1f8e:goto L4e1f8e;
case 0x4e1f91:c.instructions+=1;goto B4e1f91;
case 0x4e1f93:goto L4e1f93;
case 0x4e1f96:c.instructions+=2;goto B4e1f96;
case 0x4e1f98:c.instructions+=1;goto B4e1f98;
case 0x4e1f9a:goto L4e1f9a;
case 0x4e1f9d:c.instructions+=1;goto B4e1f9d;
case 0x4e1f9f:goto L4e1f9f;
case 0x4e1fa1:c.instructions+=1;goto B4e1fa1;
case 0x4e1fa3:goto L4e1fa3;
case 0x4e1fa9:c.instructions+=3;goto B4e1fa9;
case 0x4e1fab:c.instructions+=2;goto B4e1fab;
case 0x4e1fad:c.instructions+=1;goto B4e1fad;
case 0x4e1fb2:goto L4e1fb2;
case 0x4e1fb3:c.instructions+=2;goto B4e1fb3;
case 0x4e1fb5:c.instructions+=1;goto B4e1fb5;
case 0x4e1fba:goto L4e1fba;
case 0x4e1fbb:c.instructions+=3;goto B4e1fbb;
case 0x4e1fbc:c.instructions+=2;goto B4e1fbc;
case 0x4e1fbe:c.instructions+=1;goto B4e1fbe;
case 0x4e1fc3:goto L4e1fc3;
case 0x4e1fc5:c.instructions+=2;goto B4e1fc5;
case 0x4e1fc7:c.instructions+=1;goto B4e1fc7;
case 0x4e1fcc:goto L4e1fcc;
case 0x4e1fcf:c.instructions+=2;goto B4e1fcf;
case 0x4e1fd1:c.instructions+=1;goto B4e1fd1;
case 0x4e1fd3:goto L4e1fd3;
case 0x4e1fd6:c.instructions+=4;goto B4e1fd6;
case 0x4e1fdb:c.instructions+=3;goto B4e1fdb;
case 0x4e1fdc:c.instructions+=2;goto B4e1fdc;
case 0x4e1fde:c.instructions+=1;goto B4e1fde;
case 0x4e1fe3:goto L4e1fe3;
case 0x4e1fe5:c.instructions+=1;goto B4e1fe5;
case 0x4e1fea:goto L4e1fea;
case 0x4e1fed:c.instructions+=5;goto B4e1fed;
case 0x4e1ff0:c.instructions+=4;goto B4e1ff0;
case 0x4e1ff7:c.instructions+=3;goto B4e1ff7;
case 0x4e1ffa:c.instructions+=2;goto B4e1ffa;
case 0x4e1ffc:c.instructions+=1;goto B4e1ffc;
default:missing_instruction(c.pc);}
B4e1000:L4e1000:{c.instructions+=3;NFSU2_TR(0x4e1000);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1005:{NFSU2_TR(0x4e1005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1006:{NFSU2_TR(0x4e1006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e100bull));
TAIL_STATIC(0x558790u,558);
}
B4e100b:L4e100b:{c.instructions+=3;NFSU2_TR(0x4e100b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e100e:{NFSU2_TR(0x4e100e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e100f:{NFSU2_TR(0x4e100f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1014ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4e1014:L4e1014:{c.instructions+=4;NFSU2_TR(0x4e1014);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4e1017:{NFSU2_TR(0x4e1017);
__builtin_memmove((R+4),(R+28),4);
}
B4e1019:{NFSU2_TR(0x4e1019);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4e101e:{NFSU2_TR(0x4e101e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1023ull));
TAIL_STATIC(0x5388f0u,538);
}
B4e1023:L4e1023:{c.instructions+=6;NFSU2_TR(0x4e1023);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1026:{NFSU2_TR(0x4e1026);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1028:{NFSU2_TR(0x4e1028);
u8 U[4];
w4(U+0,u32(0x9e99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e102d:{NFSU2_TR(0x4e102d);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1032:{NFSU2_TR(0x4e1032);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1033:{NFSU2_TR(0x4e1033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1038ull));
TAIL_STATIC(0x537c60u,537);
}
B4e1038:L4e1038:{c.instructions+=5;NFSU2_TR(0x4e1038);
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
B4e103b:{NFSU2_TR(0x4e103b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e103c:{NFSU2_TR(0x4e103c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e103d:{NFSU2_TR(0x4e103d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e103e:{NFSU2_TR(0x4e103e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1041:L4e1041:{c.instructions+=5;NFSU2_TR(0x4e1041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1042:{NFSU2_TR(0x4e1042);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x167ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1049:{NFSU2_TR(0x4e1049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e104a:{NFSU2_TR(0x4e104a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e104b:{NFSU2_TR(0x4e104b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e104e:L4e104e:{c.instructions+=1;NFSU2_TR(0x4e104e);
s1(0x837b6d,u8(0x1ull));
}
B4e1055:L4e1055:{c.instructions+=2;NFSU2_TR(0x4e1055);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e105b:{NFSU2_TR(0x4e105b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1060ull));
TAIL_STATIC(0x538900u,538);
}
B4e1060:L4e1060:{c.instructions+=6;NFSU2_TR(0x4e1060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1063:{NFSU2_TR(0x4e1063);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1065:{NFSU2_TR(0x4e1065);
u8 U[4];
w4(U+0,u32(0x3d8eabcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e106a:{NFSU2_TR(0x4e106a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e106f:{NFSU2_TR(0x4e106f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1070:{NFSU2_TR(0x4e1070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1075ull));
TAIL_STATIC(0x537c60u,537);
}
B4e1075:L4e1075:{c.instructions+=5;NFSU2_TR(0x4e1075);
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
B4e1078:{NFSU2_TR(0x4e1078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1079:{NFSU2_TR(0x4e1079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e107a:{NFSU2_TR(0x4e107a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e107b:{NFSU2_TR(0x4e107b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e107e:L4e107e:{c.instructions+=2;NFSU2_TR(0x4e107e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1083:{NFSU2_TR(0x4e1083);
if(r1(R+518)){{goto L4e10c9;}}
}
B4e1085:L4e1085:{c.instructions+=2;NFSU2_TR(0x4e1085);
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
B4e108a:{NFSU2_TR(0x4e108a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e135f;}}
}
B4e1090:L4e1090:{c.instructions+=3;NFSU2_TR(0x4e1090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1093:{NFSU2_TR(0x4e1093);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4e1099:{NFSU2_TR(0x4e1099);
if(r1(R+518)){{goto L4e135f;}}
}
B4e109f:L4e109f:{c.instructions+=6;NFSU2_TR(0x4e109f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e10a2:{NFSU2_TR(0x4e10a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e10a5:{NFSU2_TR(0x4e10a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e10a6:{NFSU2_TR(0x4e10a6);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e10a8:{NFSU2_TR(0x4e10a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e10a9:{NFSU2_TR(0x4e10a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e10aeull));
TAIL_STATIC(0x50d150u,50d);
}
B4e10ae:L4e10ae:{c.instructions+=4;NFSU2_TR(0x4e10ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e10b1:{NFSU2_TR(0x4e10b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e10b7:{NFSU2_TR(0x4e10b7);
s1(0x837b6c,u8(0x1ull));
}
B4e10be:{NFSU2_TR(0x4e10be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e10c3ull));
TAIL_STATIC(0x5388f0u,538);
}
B4e10c3:L4e10c3:{c.instructions+=4;NFSU2_TR(0x4e10c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e10c4:{NFSU2_TR(0x4e10c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e10c5:{NFSU2_TR(0x4e10c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e10c6:{NFSU2_TR(0x4e10c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e10c9:L4e10c9:{c.instructions+=3;NFSU2_TR(0x4e10c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e10cb:{NFSU2_TR(0x4e10cb);
__builtin_memmove((R+4),(R+24),4);
}
B4e10cd:{NFSU2_TR(0x4e10cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e10d2ull));
TAIL_STATIC(0x4cc140u,4cc);
}
B4e10d2:L4e10d2:{c.instructions+=4;NFSU2_TR(0x4e10d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e10d3:{NFSU2_TR(0x4e10d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e10d4:{NFSU2_TR(0x4e10d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e10d5:{NFSU2_TR(0x4e10d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e10d8:L4e10d8:{c.instructions+=3;NFSU2_TR(0x4e10d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e10da:{NFSU2_TR(0x4e10da);
__builtin_memmove((R+4),(R+24),4);
}
B4e10dc:{NFSU2_TR(0x4e10dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e10e1ull));
TAIL_STATIC(0x4cc140u,4cc);
}
B4e10e1:L4e10e1:{c.instructions+=4;NFSU2_TR(0x4e10e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e10e2:{NFSU2_TR(0x4e10e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e10e3:{NFSU2_TR(0x4e10e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e10e4:{NFSU2_TR(0x4e10e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e10e7:L4e10e7:{c.instructions+=2;NFSU2_TR(0x4e10e7);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb4623f67ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e10ec:{NFSU2_TR(0x4e10ec);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e122d;}}
}
B4e10f2:L4e10f2:{c.instructions+=1;NFSU2_TR(0x4e10f2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1055u);}goto L4e1055;}}
}
B4e10f8:L4e10f8:{c.instructions+=2;NFSU2_TR(0x4e10f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e10fd:{NFSU2_TR(0x4e10fd);
if(r1(R+518)){{goto L4e121e;}}
}
B4e1103:L4e1103:{c.instructions+=2;NFSU2_TR(0x4e1103);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e1108:{NFSU2_TR(0x4e1108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e135f;}}
}
B4e110e:L4e110e:{c.instructions+=3;NFSU2_TR(0x4e110e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1111:{NFSU2_TR(0x4e1111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1112:{NFSU2_TR(0x4e1112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1117ull));
TAIL_STATIC(0x52d100u,52d);
}
B4e1117:L4e1117:{c.instructions+=3;NFSU2_TR(0x4e1117);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e111a:{NFSU2_TR(0x4e111a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e111c:{NFSU2_TR(0x4e111c);
if(r1(R+518)){{goto L4e1122;}}
}
B4e111e:L4e111e:{c.instructions+=2;NFSU2_TR(0x4e111e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1120:{NFSU2_TR(0x4e1120);
{goto L4e1134;}
}
B4e1122:L4e1122:{c.instructions+=3;NFSU2_TR(0x4e1122);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1125:{NFSU2_TR(0x4e1125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1126:{NFSU2_TR(0x4e1126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e112bull));
TAIL_STATIC(0x52d100u,52d);
}
B4e112b:L4e112b:{c.instructions+=3;NFSU2_TR(0x4e112b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e112e:{NFSU2_TR(0x4e112e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e1130:{NFSU2_TR(0x4e1130);
if(r1(R+518)){{goto L4e113b;}}
}
B4e1132:L4e1132:{c.instructions+=1;NFSU2_TR(0x4e1132);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1134:L4e1134:{c.instructions+=2;NFSU2_TR(0x4e1134);
__builtin_memmove((R+4),(R+24),4);
}
B4e1136:{NFSU2_TR(0x4e1136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e113bull));
TAIL_STATIC(0x4e0e50u,4e0);
}
B4e113b:L4e113b:{c.instructions+=2;NFSU2_TR(0x4e113b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1141:{NFSU2_TR(0x4e1141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1146ull));
TAIL_STATIC(0x538130u,538);
}
B4e1146:L4e1146:{c.instructions+=4;NFSU2_TR(0x4e1146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e114c:{NFSU2_TR(0x4e114c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e114f:{NFSU2_TR(0x4e114f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1150:{NFSU2_TR(0x4e1150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1155ull));
TAIL_STATIC(0x50cda0u,50c);
}
B4e1155:L4e1155:{c.instructions+=6;NFSU2_TR(0x4e1155);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e1158:{NFSU2_TR(0x4e1158);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e115e:{NFSU2_TR(0x4e115e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1161:{NFSU2_TR(0x4e1161);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e1163:{NFSU2_TR(0x4e1163);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4e1166:{NFSU2_TR(0x4e1166);
if(r1(R+514)){{goto L4e116f;}}
}
B4e1168:L4e1168:{c.instructions+=2;NFSU2_TR(0x4e1168);
w4(R+28,u32(0x1ull));
}
B4e116d:{NFSU2_TR(0x4e116d);
{goto L4e1182;}
}
B4e116f:L4e116f:{c.instructions+=5;NFSU2_TR(0x4e116f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e1172:{NFSU2_TR(0x4e1172);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e1178:{NFSU2_TR(0x4e1178);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e117a:{NFSU2_TR(0x4e117a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e117d:{NFSU2_TR(0x4e117d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e1182;}}
}
B4e117f:L4e117f:{c.instructions+=1;NFSU2_TR(0x4e117f);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B4e1182:L4e1182:{c.instructions+=3;NFSU2_TR(0x4e1182);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e1185:{NFSU2_TR(0x4e1185);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e1188:{NFSU2_TR(0x4e1188);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e11f3;}}
}
B4e118a:L4e118a:{c.instructions+=2;NFSU2_TR(0x4e118a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4e137cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4e1191:{NFSU2_TR(0x4e1191);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e1368ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e1198:L4e1198:{c.instructions+=3;NFSU2_TR(0x4e1198);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e119a:{NFSU2_TR(0x4e119a);
__builtin_memmove((R+4),(R+24),4);
}
B4e119c:{NFSU2_TR(0x4e119c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e11a1ull));
TAIL_STATIC(0x4cc140u,4cc);
}
B4e11a1:L4e11a1:{c.instructions+=1;NFSU2_TR(0x4e11a1);
{goto L4e11f3;}
}
B4e11a3:L4e11a3:{c.instructions+=3;NFSU2_TR(0x4e11a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e11a5:{NFSU2_TR(0x4e11a5);
__builtin_memmove((R+4),(R+24),4);
}
B4e11a7:{NFSU2_TR(0x4e11a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e11acull));
TAIL_STATIC(0x4cc140u,4cc);
}
B4e11ac:L4e11ac:{c.instructions+=1;NFSU2_TR(0x4e11ac);
{goto L4e11f3;}
}
B4e11ae:L4e11ae:{c.instructions+=4;NFSU2_TR(0x4e11ae);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4e11b3:{NFSU2_TR(0x4e11b3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e11b5:{NFSU2_TR(0x4e11b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e11b7:{NFSU2_TR(0x4e11b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e11f3;}}
}
B4e11b9:L4e11b9:{c.instructions+=1;NFSU2_TR(0x4e11b9);
__builtin_memmove((R+16),(R+16),4);
}
B4e11c0:L4e11c0:{c.instructions+=3;NFSU2_TR(0x4e11c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e11c2:{NFSU2_TR(0x4e11c2);
__builtin_memmove((R+4),(R+24),4);
}
B4e11c4:{NFSU2_TR(0x4e11c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e11c9ull));
TAIL_STATIC(0x4cc140u,4cc);
}
B4e11c9:L4e11c9:{c.instructions+=4;NFSU2_TR(0x4e11c9);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4e11ce:{NFSU2_TR(0x4e11ce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e11cf:{NFSU2_TR(0x4e11cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e11d1:{NFSU2_TR(0x4e11d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e11c0u);}goto L4e11c0;}}
}
B4e11d3:L4e11d3:{c.instructions+=1;NFSU2_TR(0x4e11d3);
{goto L4e11f3;}
}
B4e11d5:L4e11d5:{c.instructions+=4;NFSU2_TR(0x4e11d5);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4e11da:{NFSU2_TR(0x4e11da);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e11dc:{NFSU2_TR(0x4e11dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e11de:{NFSU2_TR(0x4e11de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e11f3;}}
}
B4e11e0:L4e11e0:{c.instructions+=3;NFSU2_TR(0x4e11e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e11e2:{NFSU2_TR(0x4e11e2);
__builtin_memmove((R+4),(R+24),4);
}
B4e11e4:{NFSU2_TR(0x4e11e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e11e9ull));
TAIL_STATIC(0x4cc140u,4cc);
}
B4e11e9:L4e11e9:{c.instructions+=4;NFSU2_TR(0x4e11e9);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4e11ee:{NFSU2_TR(0x4e11ee);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e11ef:{NFSU2_TR(0x4e11ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e11f1:{NFSU2_TR(0x4e11f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e11e0u);}goto L4e11e0;}}
}
B4e11f3:L4e11f3:{c.instructions+=3;NFSU2_TR(0x4e11f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e11f6:{NFSU2_TR(0x4e11f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e11f7:{NFSU2_TR(0x4e11f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e11fcull));
TAIL_STATIC(0x52d090u,52d);
}
B4e11fc:L4e11fc:{c.instructions+=3;NFSU2_TR(0x4e11fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e11ff:{NFSU2_TR(0x4e11ff);
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
B4e1201:{NFSU2_TR(0x4e1201);
if(r1(R+518)){{goto L4e135f;}}
}
B4e1207:L4e1207:{c.instructions+=4;NFSU2_TR(0x4e1207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e120a:{NFSU2_TR(0x4e120a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e120b:{NFSU2_TR(0x4e120b);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1210:{NFSU2_TR(0x4e1210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1215ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e1215:L4e1215:{c.instructions+=5;NFSU2_TR(0x4e1215);
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
B4e1218:{NFSU2_TR(0x4e1218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1219:{NFSU2_TR(0x4e1219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e121a:{NFSU2_TR(0x4e121a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e121b:{NFSU2_TR(0x4e121b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e121e:L4e121e:{c.instructions+=3;NFSU2_TR(0x4e121e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1220:{NFSU2_TR(0x4e1220);
__builtin_memmove((R+4),(R+24),4);
}
B4e1222:{NFSU2_TR(0x4e1222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1227ull));
TAIL_STATIC(0x4e0e50u,4e0);
}
B4e1227:L4e1227:{c.instructions+=4;NFSU2_TR(0x4e1227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1228:{NFSU2_TR(0x4e1228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e1229:{NFSU2_TR(0x4e1229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e122a:{NFSU2_TR(0x4e122a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e122d:L4e122d:{c.instructions+=2;NFSU2_TR(0x4e122d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1232:{NFSU2_TR(0x4e1232);
if(r1(R+518)){{goto L4e1356;}}
}
B4e1238:L4e1238:{c.instructions+=2;NFSU2_TR(0x4e1238);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e123d:{NFSU2_TR(0x4e123d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e135f;}}
}
B4e1243:L4e1243:{c.instructions+=3;NFSU2_TR(0x4e1243);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1245:{NFSU2_TR(0x4e1245);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e124b:{NFSU2_TR(0x4e124b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1250ull));
TAIL_STATIC(0x538500u,538);
}
B4e1250:L4e1250:{c.instructions+=2;NFSU2_TR(0x4e1250);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1256:{NFSU2_TR(0x4e1256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e125bull));
TAIL_STATIC(0x538760u,538);
}
B4e125b:L4e125b:{c.instructions+=3;NFSU2_TR(0x4e125b);
__builtin_memmove((R+0),gp(0x837b6d),1);
}
B4e1260:{NFSU2_TR(0x4e1260);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e1262:{NFSU2_TR(0x4e1262);
if(r1(R+518)){{goto L4e12b6;}}
}
B4e1264:L4e1264:{c.instructions+=5;NFSU2_TR(0x4e1264);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e126a:{NFSU2_TR(0x4e126a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e126d:{NFSU2_TR(0x4e126d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e1270:{NFSU2_TR(0x4e1270);
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
B4e1272:{NFSU2_TR(0x4e1272);
if(r1(R+518)){{goto L4e12a9;}}
}
B4e1274:L4e1274:{c.instructions+=2;NFSU2_TR(0x4e1274);
w4(R+4,u32(0x83a9d0ull));
}
B4e1279:{NFSU2_TR(0x4e1279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e127eull));
TAIL_STATIC(0x5032c0u,503);
}
B4e127e:L4e127e:{c.instructions+=3;NFSU2_TR(0x4e127e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e127f:{NFSU2_TR(0x4e127f);
w4(R+4,u32(0x85ad40ull));
}
B4e1284:{NFSU2_TR(0x4e1284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1289ull));
TAIL_STATIC(0x541160u,541);
}
B4e1289:L4e1289:{c.instructions+=2;NFSU2_TR(0x4e1289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e128a:{NFSU2_TR(0x4e128a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e128full));
TAIL_STATIC(0x5325e0u,532);
}
B4e128f:L4e128f:{c.instructions+=3;NFSU2_TR(0x4e128f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1292:{NFSU2_TR(0x4e1292);
w4(R+4,u32(0x865480ull));
}
B4e1297:{NFSU2_TR(0x4e1297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e129cull));
TAIL_STATIC(0x578320u,578);
}
B4e129c:L4e129c:{c.instructions+=5;NFSU2_TR(0x4e129c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e129d:{NFSU2_TR(0x4e129d);
s1(0x837b6d,u8(0x0ull));
}
B4e12a4:{NFSU2_TR(0x4e12a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e12a5:{NFSU2_TR(0x4e12a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e12a6:{NFSU2_TR(0x4e12a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e12a9:L4e12a9:{c.instructions+=5;NFSU2_TR(0x4e12a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e12aa:{NFSU2_TR(0x4e12aa);
s1(0x837b6c,u8(0x1ull));
}
B4e12b1:{NFSU2_TR(0x4e12b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e12b2:{NFSU2_TR(0x4e12b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e12b3:{NFSU2_TR(0x4e12b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e12b6:L4e12b6:{c.instructions+=3;NFSU2_TR(0x4e12b6);
__builtin_memmove((R+0),gp(0x837b6c),1);
}
B4e12bb:{NFSU2_TR(0x4e12bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e12bd:{NFSU2_TR(0x4e12bd);
if(r1(R+518)){{goto L4e12df;}}
}
B4e12bf:L4e12bf:{c.instructions+=6;NFSU2_TR(0x4e12bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e12c2:{NFSU2_TR(0x4e12c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e12c4:{NFSU2_TR(0x4e12c4);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e12c9:{NFSU2_TR(0x4e12c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e12ca:{NFSU2_TR(0x4e12ca);
s1(0x837b6c,u8(0x0ull));
}
B4e12d1:{NFSU2_TR(0x4e12d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e12d6ull));
TAIL_STATIC(0x537980u,537);
}
B4e12d6:L4e12d6:{c.instructions+=5;NFSU2_TR(0x4e12d6);
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
B4e12d9:{NFSU2_TR(0x4e12d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e12da:{NFSU2_TR(0x4e12da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e12db:{NFSU2_TR(0x4e12db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e12dc:{NFSU2_TR(0x4e12dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e12df:L4e12df:{c.instructions+=3;NFSU2_TR(0x4e12df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e12e5:{NFSU2_TR(0x4e12e5);
__builtin_memmove((R+4),(R+28),4);
}
B4e12e7:{NFSU2_TR(0x4e12e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e12ecull));
TAIL_STATIC(0x401820u,401);
}
B4e12ec:L4e12ec:{c.instructions+=2;NFSU2_TR(0x4e12ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e12ee:{NFSU2_TR(0x4e12ee);
if(r1(R+518)){{goto L4e133e;}}
}
B4e12f0:L4e12f0:{c.instructions+=10;NFSU2_TR(0x4e12f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e12f2:{NFSU2_TR(0x4e12f2);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e12f8:{NFSU2_TR(0x4e12f8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4e12fa:{NFSU2_TR(0x4e12fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e12fd:{NFSU2_TR(0x4e12fd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e1300:{NFSU2_TR(0x4e1300);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e1306:{NFSU2_TR(0x4e1306);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e130c:{NFSU2_TR(0x4e130c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e130e:{NFSU2_TR(0x4e130e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e1311:{NFSU2_TR(0x4e1311);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e1349;}}
}
B4e1313:L4e1313:{c.instructions+=6;NFSU2_TR(0x4e1313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1319:{NFSU2_TR(0x4e1319);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e131c:{NFSU2_TR(0x4e131c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e131f:{NFSU2_TR(0x4e131f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1320:{NFSU2_TR(0x4e1320);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1326:{NFSU2_TR(0x4e1326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e132bull));
TAIL_STATIC(0x498600u,498);
}
B4e132b:L4e132b:{c.instructions+=3;NFSU2_TR(0x4e132b);
__builtin_memmove((R+4),(R+24),4);
}
B4e132d:{NFSU2_TR(0x4e132d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e1333:{NFSU2_TR(0x4e1333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1338ull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4e1338:L4e1338:{c.instructions+=4;NFSU2_TR(0x4e1338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1339:{NFSU2_TR(0x4e1339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e133a:{NFSU2_TR(0x4e133a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e133b:{NFSU2_TR(0x4e133b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e133e:L4e133e:{c.instructions+=2;NFSU2_TR(0x4e133e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1344:{NFSU2_TR(0x4e1344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1349ull));
TAIL_STATIC(0x4cdd40u,4cd);
}
B4e1349:L4e1349:{c.instructions+=2;NFSU2_TR(0x4e1349);
__builtin_memmove((R+4),(R+24),4);
}
B4e134b:{NFSU2_TR(0x4e134b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1350ull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4e1350:L4e1350:{c.instructions+=4;NFSU2_TR(0x4e1350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1351:{NFSU2_TR(0x4e1351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e1352:{NFSU2_TR(0x4e1352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e1353:{NFSU2_TR(0x4e1353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1356:L4e1356:{c.instructions+=3;NFSU2_TR(0x4e1356);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1358:{NFSU2_TR(0x4e1358);
__builtin_memmove((R+4),(R+24),4);
}
B4e135a:{NFSU2_TR(0x4e135a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e135full));
TAIL_STATIC(0x4e0e50u,4e0);
}
B4e135f:L4e135f:{c.instructions+=4;NFSU2_TR(0x4e135f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1360:{NFSU2_TR(0x4e1360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e1361:{NFSU2_TR(0x4e1361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e1362:{NFSU2_TR(0x4e1362);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e13a0:L4e13a0:{c.instructions+=3;NFSU2_TR(0x4e13a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13a1:{NFSU2_TR(0x4e13a1);
__builtin_memmove((R+24),(R+4),4);
}
B4e13a3:{NFSU2_TR(0x4e13a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e13a8ull));
TAIL_STATIC(0x4cc240u,4cc);
}
B4e13a8:L4e13a8:{c.instructions+=2;NFSU2_TR(0x4e13a8);
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
B4e13ad:{NFSU2_TR(0x4e13ad);
if(r1(R+518)){{goto L4e13b8;}}
}
B4e13af:L4e13af:{c.instructions+=2;NFSU2_TR(0x4e13af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13b0:{NFSU2_TR(0x4e13b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e13b5ull));
TAIL_STATIC(0x575630u,575);
}
B4e13b5:L4e13b5:{c.instructions+=1;NFSU2_TR(0x4e13b5);
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
B4e13b8:L4e13b8:{c.instructions+=3;NFSU2_TR(0x4e13b8);
__builtin_memmove((R+0),(R+24),4);
}
B4e13ba:{NFSU2_TR(0x4e13ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e13bb:{NFSU2_TR(0x4e13bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e13c0:L4e13c0:{c.instructions+=14;NFSU2_TR(0x4e13c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13c2:{NFSU2_TR(0x4e13c2);
u8 U[4];
w4(U+0,u32(0x775aa7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13c7:{NFSU2_TR(0x4e13c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e13cd:{NFSU2_TR(0x4e13cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13ce:{NFSU2_TR(0x4e13ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e13d5:{NFSU2_TR(0x4e13d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B4e13db:{NFSU2_TR(0x4e13db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13dc:{NFSU2_TR(0x4e13dc);
__builtin_memmove((R+24),(R+4),4);
}
B4e13de:{NFSU2_TR(0x4e13de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13df:{NFSU2_TR(0x4e13df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e13e2:{NFSU2_TR(0x4e13e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e13e6:{NFSU2_TR(0x4e13e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xa148528aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e13ee:{NFSU2_TR(0x4e13ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e13f6:{NFSU2_TR(0x4e13f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13f7:L4e13f7:{c.instructions+=2;NFSU2_TR(0x4e13f7);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e13f9:{NFSU2_TR(0x4e13f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e13feull));
TAIL_STATIC(0x575620u,575);
}
B4e13fe:L4e13fe:{c.instructions+=4;NFSU2_TR(0x4e13fe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e1400:{NFSU2_TR(0x4e1400);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1403:{NFSU2_TR(0x4e1403);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e1405:{NFSU2_TR(0x4e1405);
if(r1(R+518)){{goto L4e1438;}}
}
B4e1407:L4e1407:{c.instructions+=13;NFSU2_TR(0x4e1407);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e140a:{NFSU2_TR(0x4e140a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e140c:{NFSU2_TR(0x4e140c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e140f:{NFSU2_TR(0x4e140f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1412:{NFSU2_TR(0x4e1412);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1415:{NFSU2_TR(0x4e1415);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1418:{NFSU2_TR(0x4e1418);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e141b:{NFSU2_TR(0x4e141b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e141e:{NFSU2_TR(0x4e141e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1422:{NFSU2_TR(0x4e1422);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1429:{NFSU2_TR(0x4e1429);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1430:{NFSU2_TR(0x4e1430);
u8 U[4];
w4(U+0,u32(0x795d30ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1436:{NFSU2_TR(0x4e1436);
__builtin_memmove((R+12),(R+0),4);
}
B4e1438:L4e1438:{c.instructions+=6;NFSU2_TR(0x4e1438);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e143c:{NFSU2_TR(0x4e143c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e143f:{NFSU2_TR(0x4e143f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xb523a4ffull))));
}
B4e1445:{NFSU2_TR(0x4e1445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1446:{NFSU2_TR(0x4e1446);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1447:{NFSU2_TR(0x4e1447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e144cull));
TAIL_STATIC(0x5379c0u,537);
}
B4e144c:L4e144c:{c.instructions+=3;NFSU2_TR(0x4e144c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e144e:{NFSU2_TR(0x4e144e);
__builtin_memmove((R+28),(R+0),4);
}
B4e1450:{NFSU2_TR(0x4e1450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1455ull));
TAIL_STATIC(0x575620u,575);
}
B4e1455:L4e1455:{c.instructions+=3;NFSU2_TR(0x4e1455);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e1458:{NFSU2_TR(0x4e1458);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e145a:{NFSU2_TR(0x4e145a);
if(r1(R+518)){{goto L4e146a;}}
}
B4e145c:L4e145c:{c.instructions+=4;NFSU2_TR(0x4e145c);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1462:{NFSU2_TR(0x4e1462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1465:{NFSU2_TR(0x4e1465);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e1468:{NFSU2_TR(0x4e1468);
{goto L4e146c;}
}
B4e146a:L4e146a:{c.instructions+=1;NFSU2_TR(0x4e146a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e146c:L4e146c:{c.instructions+=11;NFSU2_TR(0x4e146c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e146f:{NFSU2_TR(0x4e146f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1473:{NFSU2_TR(0x4e1473);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1476:{NFSU2_TR(0x4e1476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e1478:{NFSU2_TR(0x4e1478);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e147b:{NFSU2_TR(0x4e147b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e147e:{NFSU2_TR(0x4e147e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e1480:{NFSU2_TR(0x4e1480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1483:{NFSU2_TR(0x4e1483);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1484:{NFSU2_TR(0x4e1484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1485:{NFSU2_TR(0x4e1485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e148aull));
TAIL_STATIC(0x5379c0u,537);
}
B4e148a:L4e148a:{c.instructions+=3;NFSU2_TR(0x4e148a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e148c:{NFSU2_TR(0x4e148c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1490:{NFSU2_TR(0x4e1490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1495ull));
TAIL_STATIC(0x575620u,575);
}
B4e1495:L4e1495:{c.instructions+=3;NFSU2_TR(0x4e1495);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e1498:{NFSU2_TR(0x4e1498);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e149a:{NFSU2_TR(0x4e149a);
if(r1(R+518)){{goto L4e14ae;}}
}
B4e149c:L4e149c:{c.instructions+=5;NFSU2_TR(0x4e149c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e14a0:{NFSU2_TR(0x4e14a0);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e14a6:{NFSU2_TR(0x4e14a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e14a9:{NFSU2_TR(0x4e14a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e14ac:{NFSU2_TR(0x4e14ac);
{goto L4e14b0;}
}
B4e14ae:L4e14ae:{c.instructions+=1;NFSU2_TR(0x4e14ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e14b0:L4e14b0:{c.instructions+=11;NFSU2_TR(0x4e14b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e14b3:{NFSU2_TR(0x4e14b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e14b5:{NFSU2_TR(0x4e14b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e14b8:{NFSU2_TR(0x4e14b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e14ba:{NFSU2_TR(0x4e14ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e14be:{NFSU2_TR(0x4e14be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x87401f8cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e14c4:{NFSU2_TR(0x4e14c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e14c7:{NFSU2_TR(0x4e14c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e14ca:{NFSU2_TR(0x4e14ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e14cb:{NFSU2_TR(0x4e14cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e14cc:{NFSU2_TR(0x4e14cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e14d1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e14d1:L4e14d1:{c.instructions+=5;NFSU2_TR(0x4e14d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e14d5:{NFSU2_TR(0x4e14d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e14d8:{NFSU2_TR(0x4e14d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e14d9:{NFSU2_TR(0x4e14d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e14dc:{NFSU2_TR(0x4e14dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e14e1ull));
TAIL_STATIC(0x52e770u,52e);
}
B4e14e1:L4e14e1:{c.instructions+=6;NFSU2_TR(0x4e14e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e14e5:{NFSU2_TR(0x4e14e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e14e6:{NFSU2_TR(0x4e14e6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e14e7:{NFSU2_TR(0x4e14e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e14eb:{NFSU2_TR(0x4e14eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e14ef:{NFSU2_TR(0x4e14ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e13f7u);}goto L4e13f7;}}
}
B4e14f5:L4e14f5:{c.instructions+=2;NFSU2_TR(0x4e14f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e14f9:{NFSU2_TR(0x4e14f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e14feull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4e14fe:L4e14fe:{c.instructions+=4;NFSU2_TR(0x4e14fe);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B4e1503:{NFSU2_TR(0x4e1503);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e1505:{NFSU2_TR(0x4e1505);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e1507:{NFSU2_TR(0x4e1507);
if(r1(R+518)){{goto L4e1526;}}
}
B4e1509:L4e1509:{c.instructions+=2;NFSU2_TR(0x4e1509);
w4(R+4,u32(0x85ad40ull));
}
B4e150e:{NFSU2_TR(0x4e150e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1513ull));
TAIL_STATIC(0x513c30u,513);
}
B4e1513:L4e1513:{c.instructions+=2;NFSU2_TR(0x4e1513);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1515:{NFSU2_TR(0x4e1515);
if(r1(R+518)){{goto L4e1526;}}
}
B4e1517:L4e1517:{c.instructions+=3;NFSU2_TR(0x4e1517);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
}
B4e151c:{NFSU2_TR(0x4e151c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e151e:{NFSU2_TR(0x4e151e);
if(r1(R+518)){{goto L4e1526;}}
}
B4e1520:L4e1520:{c.instructions+=1;NFSU2_TR(0x4e1520);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e1526:L4e1526:{c.instructions+=3;NFSU2_TR(0x4e1526);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4e152b:{NFSU2_TR(0x4e152b);
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
B4e152d:{NFSU2_TR(0x4e152d);
if(r1(R+518)){{goto L4e1544;}}
}
B4e152f:L4e152f:{c.instructions+=7;NFSU2_TR(0x4e152f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1532:{NFSU2_TR(0x4e1532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1535:{NFSU2_TR(0x4e1535);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1538:{NFSU2_TR(0x4e1538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1539:{NFSU2_TR(0x4e1539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e153a:{NFSU2_TR(0x4e153a);
w4(R+4,u32(0x8637d0ull));
}
B4e153f:{NFSU2_TR(0x4e153f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1544ull));
TAIL_STATIC(0x53d870u,53d);
}
B4e1544:L4e1544:{c.instructions+=3;NFSU2_TR(0x4e1544);
u8 U[4];
w4(U+0,u32(0x92260f04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1549:{NFSU2_TR(0x4e1549);
__builtin_memmove((R+4),(R+24),4);
}
B4e154b:{NFSU2_TR(0x4e154b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1550ull));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e1550:L4e1550:{c.instructions+=4;NFSU2_TR(0x4e1550);
__builtin_memmove((R+0),gp(0x835c68),4);
}
B4e1555:{NFSU2_TR(0x4e1555);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1557:{NFSU2_TR(0x4e1557);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e155b:{NFSU2_TR(0x4e155b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1560ull));
TAIL_STATIC(0x575620u,575);
}
B4e1560:L4e1560:{c.instructions+=3;NFSU2_TR(0x4e1560);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1563:{NFSU2_TR(0x4e1563);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1565:{NFSU2_TR(0x4e1565);
if(r1(R+518)){{goto L4e157d;}}
}
B4e1567:L4e1567:{c.instructions+=7;NFSU2_TR(0x4e1567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e156a:{NFSU2_TR(0x4e156a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e156c:{NFSU2_TR(0x4e156c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e156f:{NFSU2_TR(0x4e156f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1573:{NFSU2_TR(0x4e1573);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1579:{NFSU2_TR(0x4e1579);
__builtin_memmove((R+28),(R+0),4);
}
B4e157b:{NFSU2_TR(0x4e157b);
{goto L4e157f;}
}
B4e157d:L4e157d:{c.instructions+=1;NFSU2_TR(0x4e157d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e157f:L4e157f:{c.instructions+=5;NFSU2_TR(0x4e157f);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1584:{NFSU2_TR(0x4e1584);
u8 U[4];
w4(U+0,u32(0xabba6482ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1589:{NFSU2_TR(0x4e1589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e158a:{NFSU2_TR(0x4e158a);
__builtin_memmove((R+4),(R+24),4);
}
B4e158c:{NFSU2_TR(0x4e158c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1591ull));
TAIL_STATIC(0x4b1ae0u,4b1);
}
B4e1591:L4e1591:{c.instructions+=4;NFSU2_TR(0x4e1591);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1595:{NFSU2_TR(0x4e1595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1596:{NFSU2_TR(0x4e1596);
__builtin_memmove((R+4),(R+28),4);
}
B4e1598:{NFSU2_TR(0x4e1598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e159dull));
TAIL_STATIC(0x4b1710u,4b1);
}
B4e159d:L4e159d:{c.instructions+=3;NFSU2_TR(0x4e159d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e15a1:{NFSU2_TR(0x4e15a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15a2:{NFSU2_TR(0x4e15a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e15a7ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4e15a7:L4e15a7:{c.instructions+=6;NFSU2_TR(0x4e15a7);
__builtin_memmove((R+8),gp(0x835c00),4);
}
B4e15ad:{NFSU2_TR(0x4e15ad);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15b2:{NFSU2_TR(0x4e15b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15b3:{NFSU2_TR(0x4e15b3);
u8 U[4];
w4(U+0,u32(0x13b49408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15b8:{NFSU2_TR(0x4e15b8);
__builtin_memmove((R+4),(R+24),4);
}
B4e15ba:{NFSU2_TR(0x4e15ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e15bfull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e15bf:L4e15bf:{c.instructions+=5;NFSU2_TR(0x4e15bf);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15c4:{NFSU2_TR(0x4e15c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15c5:{NFSU2_TR(0x4e15c5);
u8 U[4];
w4(U+0,u32(0x3b10cb47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15ca:{NFSU2_TR(0x4e15ca);
__builtin_memmove((R+4),(R+24),4);
}
B4e15cc:{NFSU2_TR(0x4e15cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e15d1ull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e15d1:L4e15d1:{c.instructions+=6;NFSU2_TR(0x4e15d1);
__builtin_memmove((R+0),gp(0x835c04),4);
}
B4e15d6:{NFSU2_TR(0x4e15d6);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15db:{NFSU2_TR(0x4e15db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15dc:{NFSU2_TR(0x4e15dc);
u8 U[4];
w4(U+0,u32(0xc967aee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15e1:{NFSU2_TR(0x4e15e1);
__builtin_memmove((R+4),(R+24),4);
}
B4e15e3:{NFSU2_TR(0x4e15e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e15e8ull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e15e8:L4e15e8:{c.instructions+=6;NFSU2_TR(0x4e15e8);
__builtin_memmove((R+4),gp(0x835c08),4);
}
B4e15ee:{NFSU2_TR(0x4e15ee);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15f3:{NFSU2_TR(0x4e15f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15f4:{NFSU2_TR(0x4e15f4);
u8 U[4];
w4(U+0,u32(0x241be921ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e15f9:{NFSU2_TR(0x4e15f9);
__builtin_memmove((R+4),(R+24),4);
}
B4e15fb:{NFSU2_TR(0x4e15fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1600ull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e1600:L4e1600:{c.instructions+=8;NFSU2_TR(0x4e1600);
{u32 ea_=u32(u32(8608780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e1606:{NFSU2_TR(0x4e1606);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e160c:{NFSU2_TR(0x4e160c);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1611:{NFSU2_TR(0x4e1611);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1612:{NFSU2_TR(0x4e1612);
__builtin_memmove((R+4),(R+24),4);
}
B4e1614:{NFSU2_TR(0x4e1614);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e1617:{NFSU2_TR(0x4e1617);
u8 U[4];
w4(U+0,u32(0xd817a4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e161c:{NFSU2_TR(0x4e161c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1621ull));
TAIL_STATIC(0x4cc410u,4cc);
}
B4e1621:L4e1621:{c.instructions+=3;NFSU2_TR(0x4e1621);
u8 U[4];
w4(U+0,u32(0xc3755f6dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1626:{NFSU2_TR(0x4e1626);
__builtin_memmove((R+4),(R+24),4);
}
B4e1628:{NFSU2_TR(0x4e1628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e162dull));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e162d:L4e162d:{c.instructions+=6;NFSU2_TR(0x4e162d);
__builtin_memmove((R+8),gp(0x835c10),4);
}
B4e1633:{NFSU2_TR(0x4e1633);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1638:{NFSU2_TR(0x4e1638);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1639:{NFSU2_TR(0x4e1639);
u8 U[4];
w4(U+0,u32(0x151c443full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e163e:{NFSU2_TR(0x4e163e);
__builtin_memmove((R+4),(R+24),4);
}
B4e1640:{NFSU2_TR(0x4e1640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1645ull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e1645:L4e1645:{c.instructions+=6;NFSU2_TR(0x4e1645);
__builtin_memmove((R+0),gp(0x835c14),4);
}
B4e164a:{NFSU2_TR(0x4e164a);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e164f:{NFSU2_TR(0x4e164f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1650:{NFSU2_TR(0x4e1650);
u8 U[4];
w4(U+0,u32(0x22a144ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1655:{NFSU2_TR(0x4e1655);
__builtin_memmove((R+4),(R+24),4);
}
B4e1657:{NFSU2_TR(0x4e1657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e165cull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e165c:L4e165c:{c.instructions+=6;NFSU2_TR(0x4e165c);
__builtin_memmove((R+4),gp(0x835c1c),4);
}
B4e1662:{NFSU2_TR(0x4e1662);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1667:{NFSU2_TR(0x4e1667);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1668:{NFSU2_TR(0x4e1668);
u8 U[4];
w4(U+0,u32(0x8eab27c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e166d:{NFSU2_TR(0x4e166d);
__builtin_memmove((R+4),(R+24),4);
}
B4e166f:{NFSU2_TR(0x4e166f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1674ull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e1674:L4e1674:{c.instructions+=6;NFSU2_TR(0x4e1674);
__builtin_memmove((R+8),gp(0x835c18),4);
}
B4e167a:{NFSU2_TR(0x4e167a);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e167f:{NFSU2_TR(0x4e167f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1680:{NFSU2_TR(0x4e1680);
u8 U[4];
w4(U+0,u32(0x8090b36aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1685:{NFSU2_TR(0x4e1685);
__builtin_memmove((R+4),(R+24),4);
}
B4e1687:{NFSU2_TR(0x4e1687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e168cull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e168c:L4e168c:{c.instructions+=6;NFSU2_TR(0x4e168c);
__builtin_memmove((R+0),gp(0x835c20),4);
}
B4e1691:{NFSU2_TR(0x4e1691);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1696:{NFSU2_TR(0x4e1696);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1697:{NFSU2_TR(0x4e1697);
u8 U[4];
w4(U+0,u32(0xef317adaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e169c:{NFSU2_TR(0x4e169c);
__builtin_memmove((R+4),(R+24),4);
}
B4e169e:{NFSU2_TR(0x4e169e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e16a3ull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e16a3:L4e16a3:{c.instructions+=6;NFSU2_TR(0x4e16a3);
__builtin_memmove((R+4),gp(0x835c24),4);
}
B4e16a9:{NFSU2_TR(0x4e16a9);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16ae:{NFSU2_TR(0x4e16ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16af:{NFSU2_TR(0x4e16af);
u8 U[4];
w4(U+0,u32(0xe6e0bc3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16b4:{NFSU2_TR(0x4e16b4);
__builtin_memmove((R+4),(R+24),4);
}
B4e16b6:{NFSU2_TR(0x4e16b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e16bbull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e16bb:L4e16bb:{c.instructions+=3;NFSU2_TR(0x4e16bb);
u8 U[4];
w4(U+0,u32(0x11f7ac44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16c0:{NFSU2_TR(0x4e16c0);
__builtin_memmove((R+4),(R+24),4);
}
B4e16c2:{NFSU2_TR(0x4e16c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e16c7ull));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e16c7:L4e16c7:{c.instructions+=8;NFSU2_TR(0x4e16c7);
__builtin_memmove((R+8),gp(0x835c2c),4);
}
B4e16cd:{NFSU2_TR(0x4e16cd);
__builtin_memmove((R+0),gp(0x835c28),4);
}
B4e16d2:{NFSU2_TR(0x4e16d2);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16d7:{NFSU2_TR(0x4e16d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16d8:{NFSU2_TR(0x4e16d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16d9:{NFSU2_TR(0x4e16d9);
u8 U[4];
w4(U+0,u32(0xc35dd09eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16de:{NFSU2_TR(0x4e16de);
__builtin_memmove((R+4),(R+24),4);
}
B4e16e0:{NFSU2_TR(0x4e16e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e16e5ull));
TAIL_STATIC(0x4cc2e0u,4cc);
}
B4e16e5:L4e16e5:{c.instructions+=8;NFSU2_TR(0x4e16e5);
__builtin_memmove((R+4),gp(0x835c8c),4);
}
B4e16eb:{NFSU2_TR(0x4e16eb);
__builtin_memmove((R+8),gp(0x835c88),4);
}
B4e16f1:{NFSU2_TR(0x4e16f1);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16f6:{NFSU2_TR(0x4e16f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16f7:{NFSU2_TR(0x4e16f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16f8:{NFSU2_TR(0x4e16f8);
u8 U[4];
w4(U+0,u32(0x678144aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e16fd:{NFSU2_TR(0x4e16fd);
__builtin_memmove((R+4),(R+24),4);
}
B4e16ff:{NFSU2_TR(0x4e16ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1704ull));
TAIL_STATIC(0x4cc2e0u,4cc);
}
B4e1704:L4e1704:{c.instructions+=6;NFSU2_TR(0x4e1704);
__builtin_memmove((R+0),gp(0x835c30),4);
}
B4e1709:{NFSU2_TR(0x4e1709);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e170e:{NFSU2_TR(0x4e170e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e170f:{NFSU2_TR(0x4e170f);
u8 U[4];
w4(U+0,u32(0x5f77bb60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1714:{NFSU2_TR(0x4e1714);
__builtin_memmove((R+4),(R+24),4);
}
B4e1716:{NFSU2_TR(0x4e1716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e171bull));
TAIL_STATIC(0x4cc250u,4cc);
}
B4e171b:L4e171b:{c.instructions+=3;NFSU2_TR(0x4e171b);
u8 U[4];
w4(U+0,u32(0xa49003baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1720:{NFSU2_TR(0x4e1720);
__builtin_memmove((R+4),(R+24),4);
}
B4e1722:{NFSU2_TR(0x4e1722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1727ull));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e1727:L4e1727:{c.instructions+=4;NFSU2_TR(0x4e1727);
w4(R+28,u32(0x1ull));
}
B4e172c:{NFSU2_TR(0x4e172c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e172d:{NFSU2_TR(0x4e172d);
u8 U[4];
w4(U+0,u32(0x8b84e940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1732:{NFSU2_TR(0x4e1732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1737ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e1737:L4e1737:{c.instructions+=6;NFSU2_TR(0x4e1737);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e173a:{NFSU2_TR(0x4e173a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e173b:{NFSU2_TR(0x4e173b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e173f:{NFSU2_TR(0x4e173f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1741:{NFSU2_TR(0x4e1741);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1742:{NFSU2_TR(0x4e1742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1747ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e1747:L4e1747:{c.instructions+=8;NFSU2_TR(0x4e1747);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e174b:{NFSU2_TR(0x4e174b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e174c:{NFSU2_TR(0x4e174c);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1751:{NFSU2_TR(0x4e1751);
u8 U[4];
w4(U+0,u32(0x797660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1756:{NFSU2_TR(0x4e1756);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e175a:{NFSU2_TR(0x4e175a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e175c:{NFSU2_TR(0x4e175c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e175d:{NFSU2_TR(0x4e175d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1762ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e1762:L4e1762:{c.instructions+=7;NFSU2_TR(0x4e1762);
__builtin_memmove((R+4),gp(0x835de0),4);
}
B4e1768:{NFSU2_TR(0x4e1768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e176b:{NFSU2_TR(0x4e176b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e176c:{NFSU2_TR(0x4e176c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e1770:{NFSU2_TR(0x4e1770);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1771:{NFSU2_TR(0x4e1771);
__builtin_memmove((R+4),(R+24),4);
}
B4e1773:{NFSU2_TR(0x4e1773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1778ull));
TAIL_STATIC(0x4cc380u,4cc);
}
B4e1778:L4e1778:{c.instructions+=3;NFSU2_TR(0x4e1778);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1779:{NFSU2_TR(0x4e1779);
w4(R+4,u32(0x85ad40ull));
}
B4e177e:{NFSU2_TR(0x4e177e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1783ull));
TAIL_STATIC(0x500c00u,500);
}
B4e1783:L4e1783:{c.instructions+=2;NFSU2_TR(0x4e1783);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e1785:{NFSU2_TR(0x4e1785);
if(r1(R+518)){{goto L4e17e9;}}
}
B4e1787:L4e1787:{c.instructions+=3;NFSU2_TR(0x4e1787);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e1788:{NFSU2_TR(0x4e1788);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e178b:{NFSU2_TR(0x4e178b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4e17e9;}}
}
B4e178d:L4e178d:{c.instructions+=3;NFSU2_TR(0x4e178d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e178e:{NFSU2_TR(0x4e178e);
u8 U[4];
w4(U+0,u32(0x8b84e940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1793:{NFSU2_TR(0x4e1793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1798ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e1798:L4e1798:{c.instructions+=6;NFSU2_TR(0x4e1798);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e179b:{NFSU2_TR(0x4e179b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e179c:{NFSU2_TR(0x4e179c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e17a0:{NFSU2_TR(0x4e17a0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17a2:{NFSU2_TR(0x4e17a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17a3:{NFSU2_TR(0x4e17a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e17a8ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e17a8:L4e17a8:{c.instructions+=8;NFSU2_TR(0x4e17a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e17ac:{NFSU2_TR(0x4e17ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17ad:{NFSU2_TR(0x4e17ad);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17b2:{NFSU2_TR(0x4e17b2);
u8 U[4];
w4(U+0,u32(0x797660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17b7:{NFSU2_TR(0x4e17b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e17bb:{NFSU2_TR(0x4e17bb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17bd:{NFSU2_TR(0x4e17bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17be:{NFSU2_TR(0x4e17be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e17c3ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e17c3:L4e17c3:{c.instructions+=7;NFSU2_TR(0x4e17c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835ddcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4e17ca:{NFSU2_TR(0x4e17ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e17cd:{NFSU2_TR(0x4e17cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17ce:{NFSU2_TR(0x4e17ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e17d2:{NFSU2_TR(0x4e17d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17d3:{NFSU2_TR(0x4e17d3);
__builtin_memmove((R+4),(R+24),4);
}
B4e17d5:{NFSU2_TR(0x4e17d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e17daull));
TAIL_STATIC(0x4cc380u,4cc);
}
B4e17da:L4e17da:{c.instructions+=3;NFSU2_TR(0x4e17da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17db:{NFSU2_TR(0x4e17db);
w4(R+4,u32(0x85ad40ull));
}
B4e17e0:{NFSU2_TR(0x4e17e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e17e5ull));
TAIL_STATIC(0x500c00u,500);
}
B4e17e5:L4e17e5:{c.instructions+=2;NFSU2_TR(0x4e17e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e17e7:{NFSU2_TR(0x4e17e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1787u);}goto L4e1787;}}
}
B4e17e9:L4e17e9:{c.instructions+=3;NFSU2_TR(0x4e17e9);
u8 U[4];
w4(U+0,u32(0xa63a4af1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17ee:{NFSU2_TR(0x4e17ee);
__builtin_memmove((R+4),(R+24),4);
}
B4e17f0:{NFSU2_TR(0x4e17f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e17f5ull));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e17f5:L4e17f5:{c.instructions+=4;NFSU2_TR(0x4e17f5);
w4(R+28,u32(0x1ull));
}
B4e17fa:{NFSU2_TR(0x4e17fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e17fb:{NFSU2_TR(0x4e17fb);
u8 U[4];
w4(U+0,u32(0x8b84e940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1800:{NFSU2_TR(0x4e1800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1805ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e1805:L4e1805:{c.instructions+=6;NFSU2_TR(0x4e1805);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1808:{NFSU2_TR(0x4e1808);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1809:{NFSU2_TR(0x4e1809);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e180d:{NFSU2_TR(0x4e180d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e180f:{NFSU2_TR(0x4e180f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1810:{NFSU2_TR(0x4e1810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1815ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e1815:L4e1815:{c.instructions+=8;NFSU2_TR(0x4e1815);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e1819:{NFSU2_TR(0x4e1819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e181a:{NFSU2_TR(0x4e181a);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e181f:{NFSU2_TR(0x4e181f);
u8 U[4];
w4(U+0,u32(0x797660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1824:{NFSU2_TR(0x4e1824);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e182b:{NFSU2_TR(0x4e182b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e182d:{NFSU2_TR(0x4e182d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e182e:{NFSU2_TR(0x4e182e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1833ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e1833:L4e1833:{c.instructions+=7;NFSU2_TR(0x4e1833);
__builtin_memmove((R+8),gp(0x835e00),4);
}
B4e1839:{NFSU2_TR(0x4e1839);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e183c:{NFSU2_TR(0x4e183c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e183d:{NFSU2_TR(0x4e183d);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e1844:{NFSU2_TR(0x4e1844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1845:{NFSU2_TR(0x4e1845);
__builtin_memmove((R+4),(R+24),4);
}
B4e1847:{NFSU2_TR(0x4e1847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e184cull));
TAIL_STATIC(0x4cc380u,4cc);
}
B4e184c:L4e184c:{c.instructions+=3;NFSU2_TR(0x4e184c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e184d:{NFSU2_TR(0x4e184d);
w4(R+4,u32(0x85ad40ull));
}
B4e1852:{NFSU2_TR(0x4e1852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1857ull));
TAIL_STATIC(0x500c00u,500);
}
B4e1857:L4e1857:{c.instructions+=2;NFSU2_TR(0x4e1857);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e1859:{NFSU2_TR(0x4e1859);
if(r1(R+518)){{goto L4e18c8;}}
}
B4e185b:L4e185b:{c.instructions+=1;NFSU2_TR(0x4e185b);
{goto L4e1860;}
}
B4e1860:L4e1860:{c.instructions+=3;NFSU2_TR(0x4e1860);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e1861:{NFSU2_TR(0x4e1861);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e1864:{NFSU2_TR(0x4e1864);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4e18c8;}}
}
B4e1866:L4e1866:{c.instructions+=3;NFSU2_TR(0x4e1866);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1867:{NFSU2_TR(0x4e1867);
u8 U[4];
w4(U+0,u32(0x8b84e940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e186c:{NFSU2_TR(0x4e186c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1871ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e1871:L4e1871:{c.instructions+=6;NFSU2_TR(0x4e1871);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1874:{NFSU2_TR(0x4e1874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1875:{NFSU2_TR(0x4e1875);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1879:{NFSU2_TR(0x4e1879);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e187b:{NFSU2_TR(0x4e187b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e187c:{NFSU2_TR(0x4e187c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1881ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e1881:L4e1881:{c.instructions+=8;NFSU2_TR(0x4e1881);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e1885:{NFSU2_TR(0x4e1885);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1886:{NFSU2_TR(0x4e1886);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e188b:{NFSU2_TR(0x4e188b);
u8 U[4];
w4(U+0,u32(0x797660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1890:{NFSU2_TR(0x4e1890);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e1897:{NFSU2_TR(0x4e1897);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1899:{NFSU2_TR(0x4e1899);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e189a:{NFSU2_TR(0x4e189a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e189full));
TAIL_STATIC(0x50c960u,50c);
}
B4e189f:L4e189f:{c.instructions+=7;NFSU2_TR(0x4e189f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835dfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4e18a6:{NFSU2_TR(0x4e18a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e18a9:{NFSU2_TR(0x4e18a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e18aa:{NFSU2_TR(0x4e18aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e18b1:{NFSU2_TR(0x4e18b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e18b2:{NFSU2_TR(0x4e18b2);
__builtin_memmove((R+4),(R+24),4);
}
B4e18b4:{NFSU2_TR(0x4e18b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e18b9ull));
TAIL_STATIC(0x4cc380u,4cc);
}
B4e18b9:L4e18b9:{c.instructions+=3;NFSU2_TR(0x4e18b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e18ba:{NFSU2_TR(0x4e18ba);
w4(R+4,u32(0x85ad40ull));
}
B4e18bf:{NFSU2_TR(0x4e18bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e18c4ull));
TAIL_STATIC(0x500c00u,500);
}
B4e18c4:L4e18c4:{c.instructions+=2;NFSU2_TR(0x4e18c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e18c6:{NFSU2_TR(0x4e18c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1860u);}goto L4e1860;}}
}
B4e18c8:L4e18c8:{c.instructions+=3;NFSU2_TR(0x4e18c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e18ca:{NFSU2_TR(0x4e18ca);
w4(R+4,u32(0x85ad40ull));
}
B4e18cf:{NFSU2_TR(0x4e18cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e18d4ull));
TAIL_STATIC(0x500c00u,500);
}
B4e18d4:L4e18d4:{c.instructions+=2;NFSU2_TR(0x4e18d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e18d6:{NFSU2_TR(0x4e18d6);
if(r1(R+518)){{goto L4e1953;}}
}
B4e18d8:L4e18d8:{c.instructions+=3;NFSU2_TR(0x4e18d8);
u8 U[4];
w4(U+0,u32(0x2e8d7e4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e18dd:{NFSU2_TR(0x4e18dd);
__builtin_memmove((R+4),(R+24),4);
}
B4e18df:{NFSU2_TR(0x4e18df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e18e4ull));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e18e4:L4e18e4:{c.instructions+=2;NFSU2_TR(0x4e18e4);
w4(R+28,u32(0x1ull));
}
B4e18e9:{NFSU2_TR(0x4e18e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x86221cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e18f1:L4e18f1:{c.instructions+=3;NFSU2_TR(0x4e18f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e18f5:{NFSU2_TR(0x4e18f5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4e18f8:{NFSU2_TR(0x4e18f8);
if(r1(R+518)){{goto L4e1953;}}
}
B4e18fa:L4e18fa:{c.instructions+=6;NFSU2_TR(0x4e18fa);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835c36ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B4e1902:{NFSU2_TR(0x4e1902);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835c34ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B4e190a:{NFSU2_TR(0x4e190a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e190b:{NFSU2_TR(0x4e190b);
u8 U[4];
w4(U+0,u32(0x797644ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1910:{NFSU2_TR(0x4e1910);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1914:{NFSU2_TR(0x4e1914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1919ull));
TAIL_STATIC(0x50b990u,50b);
}
B4e1919:L4e1919:{c.instructions+=8;NFSU2_TR(0x4e1919);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e191d:{NFSU2_TR(0x4e191d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e1920:{NFSU2_TR(0x4e1920);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1925:{NFSU2_TR(0x4e1925);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1926:{NFSU2_TR(0x4e1926);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1927:{NFSU2_TR(0x4e1927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1928:{NFSU2_TR(0x4e1928);
__builtin_memmove((R+4),(R+24),4);
}
B4e192a:{NFSU2_TR(0x4e192a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e192full));
TAIL_STATIC(0x4cc2e0u,4cc);
}
B4e192f:L4e192f:{c.instructions+=3;NFSU2_TR(0x4e192f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1930:{NFSU2_TR(0x4e1930);
w4(R+4,u32(0x85ad40ull));
}
B4e1935:{NFSU2_TR(0x4e1935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e193aull));
TAIL_STATIC(0x500c00u,500);
}
B4e193a:L4e193a:{c.instructions+=2;NFSU2_TR(0x4e193a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e193c:{NFSU2_TR(0x4e193c);
if(r1(R+518)){{goto L4e1953;}}
}
B4e193e:L4e193e:{c.instructions+=6;NFSU2_TR(0x4e193e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1942:{NFSU2_TR(0x4e1942);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
}
B4e1947:{NFSU2_TR(0x4e1947);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e1948:{NFSU2_TR(0x4e1948);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x862730ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x862730ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4e194d:{NFSU2_TR(0x4e194d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1951:{NFSU2_TR(0x4e1951);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e18f1u);}goto L4e18f1;}}
}
B4e1953:L4e1953:{c.instructions+=3;NFSU2_TR(0x4e1953);
u8 U[4];
w4(U+0,u32(0xea33e5b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1958:{NFSU2_TR(0x4e1958);
__builtin_memmove((R+4),(R+24),4);
}
B4e195a:{NFSU2_TR(0x4e195a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e195full));
TAIL_STATIC(0x4cc4a0u,4cc);
}
B4e195f:L4e195f:{c.instructions+=4;NFSU2_TR(0x4e195f);
__builtin_memmove((R+0),gp(0x835c54),4);
}
B4e1964:{NFSU2_TR(0x4e1964);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1966:{NFSU2_TR(0x4e1966);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e196a:{NFSU2_TR(0x4e196a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e196full));
TAIL_STATIC(0x575620u,575);
}
B4e196f:L4e196f:{c.instructions+=4;NFSU2_TR(0x4e196f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1972:{NFSU2_TR(0x4e1972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1974:{NFSU2_TR(0x4e1974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e1975:{NFSU2_TR(0x4e1975);
if(r1(R+518)){{goto L4e198d;}}
}
B4e1977:L4e1977:{c.instructions+=7;NFSU2_TR(0x4e1977);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e197a:{NFSU2_TR(0x4e197a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e197c:{NFSU2_TR(0x4e197c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e197f:{NFSU2_TR(0x4e197f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1983:{NFSU2_TR(0x4e1983);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1989:{NFSU2_TR(0x4e1989);
__builtin_memmove((R+28),(R+0),4);
}
B4e198b:{NFSU2_TR(0x4e198b);
{goto L4e198f;}
}
B4e198d:L4e198d:{c.instructions+=1;NFSU2_TR(0x4e198d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e198f:L4e198f:{c.instructions+=5;NFSU2_TR(0x4e198f);
u8 U[4];
w4(U+0,u32(0x797668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1994:{NFSU2_TR(0x4e1994);
u8 U[4];
w4(U+0,u32(0xe0af0d6aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1999:{NFSU2_TR(0x4e1999);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e199a:{NFSU2_TR(0x4e199a);
__builtin_memmove((R+4),(R+24),4);
}
B4e199c:{NFSU2_TR(0x4e199c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e19a1ull));
TAIL_STATIC(0x4b1ae0u,4b1);
}
B4e19a1:L4e19a1:{c.instructions+=2;NFSU2_TR(0x4e19a1);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e19a6:{NFSU2_TR(0x4e19a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e19abull));
TAIL_STATIC(0x575620u,575);
}
B4e19ab:L4e19ab:{c.instructions+=5;NFSU2_TR(0x4e19ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e19ae:{NFSU2_TR(0x4e19ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e19b2:{NFSU2_TR(0x4e19b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e19b4:{NFSU2_TR(0x4e19b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e19bf:{NFSU2_TR(0x4e19bf);
if(r1(R+518)){{goto L4e19cf;}}
}
B4e19c1:L4e19c1:{c.instructions+=4;NFSU2_TR(0x4e19c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e19c5:{NFSU2_TR(0x4e19c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e19c6:{NFSU2_TR(0x4e19c6);
__builtin_memmove((R+4),(R+0),4);
}
B4e19c8:{NFSU2_TR(0x4e19c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e19cdull));
TAIL_STATIC(0x4b1680u,4b1);
}
B4e19cd:L4e19cd:{c.instructions+=1;NFSU2_TR(0x4e19cd);
{goto L4e19d1;}
}
B4e19cf:L4e19cf:{c.instructions+=1;NFSU2_TR(0x4e19cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e19d1:L4e19d1:{c.instructions+=3;NFSU2_TR(0x4e19d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e19d3:{NFSU2_TR(0x4e19d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e19de:{NFSU2_TR(0x4e19de);
if(r1(R+518)){{goto L4e19e5;}}
}
B4e19e0:L4e19e0:{c.instructions+=2;NFSU2_TR(0x4e19e0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e19e3:{NFSU2_TR(0x4e19e3);
{goto L4e19e7;}
}
B4e19e5:L4e19e5:{c.instructions+=1;NFSU2_TR(0x4e19e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e19e7:L4e19e7:{c.instructions+=10;NFSU2_TR(0x4e19e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e19ea:{NFSU2_TR(0x4e19ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e19ee:{NFSU2_TR(0x4e19ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e19f1:{NFSU2_TR(0x4e19f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e19f3:{NFSU2_TR(0x4e19f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e19f6:{NFSU2_TR(0x4e19f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e19f8:{NFSU2_TR(0x4e19f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e19f9:{NFSU2_TR(0x4e19f9);
__builtin_memmove((R+4),(R+24),4);
}
B4e19fb:{NFSU2_TR(0x4e19fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e19fe:{NFSU2_TR(0x4e19fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1a03ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4e1a03:L4e1a03:{c.instructions+=3;NFSU2_TR(0x4e1a03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a05:{NFSU2_TR(0x4e1a05);
__builtin_memmove((R+4),(R+24),4);
}
B4e1a07:{NFSU2_TR(0x4e1a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1a0cull));
TAIL_STATIC(0x538500u,538);
}
B4e1a0c:L4e1a0c:{c.instructions+=6;NFSU2_TR(0x4e1a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1a13:{NFSU2_TR(0x4e1a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1a14:{NFSU2_TR(0x4e1a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e1a15:{NFSU2_TR(0x4e1a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1a1c:{NFSU2_TR(0x4e1a1c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x9cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x9cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x9cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e1a22:{NFSU2_TR(0x4e1a22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1a30:L4e1a30:{c.instructions+=16;NFSU2_TR(0x4e1a30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a31:{NFSU2_TR(0x4e1a31);
__builtin_memmove((R+20),(R+16),4);
}
B4e1a33:{NFSU2_TR(0x4e1a33);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a35:{NFSU2_TR(0x4e1a35);
u8 U[4];
w4(U+0,u32(0x7748b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a3a:{NFSU2_TR(0x4e1a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1a40:{NFSU2_TR(0x4e1a40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a41:{NFSU2_TR(0x4e1a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1a48:{NFSU2_TR(0x4e1a48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a49:{NFSU2_TR(0x4e1a49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a4a:{NFSU2_TR(0x4e1a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e1a4d:{NFSU2_TR(0x4e1a4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a4e:{NFSU2_TR(0x4e1a4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a4f:{NFSU2_TR(0x4e1a4f);
__builtin_memmove((R+24),(R+4),4);
}
B4e1a51:{NFSU2_TR(0x4e1a51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a52:{NFSU2_TR(0x4e1a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1a55:{NFSU2_TR(0x4e1a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1a5aull));
TAIL_STATIC(0x551de0u,551);
}
B4e1a5a:L4e1a5a:{c.instructions+=13;NFSU2_TR(0x4e1a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1a5d:{NFSU2_TR(0x4e1a5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a5f:{NFSU2_TR(0x4e1a5f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e1a61:{NFSU2_TR(0x4e1a61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a62:{NFSU2_TR(0x4e1a62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a63:{NFSU2_TR(0x4e1a63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a64:{NFSU2_TR(0x4e1a64);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a69:{NFSU2_TR(0x4e1a69);
u8 U[4];
w4(U+0,u32(0x797670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a6e:{NFSU2_TR(0x4e1a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a6f:{NFSU2_TR(0x4e1a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1a72:{NFSU2_TR(0x4e1a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1a75:{NFSU2_TR(0x4e1a75);
u8 U[4];
w4(U+0,u32(0x795d38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e1a7b:{NFSU2_TR(0x4e1a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1a80ull));
TAIL_STATIC(0x542ca0u,542);
}
B4e1a80:L4e1a80:{c.instructions+=4;NFSU2_TR(0x4e1a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1a86:{NFSU2_TR(0x4e1a86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1a8a:{NFSU2_TR(0x4e1a8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1a91:{NFSU2_TR(0x4e1a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1a96ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e1a96:L4e1a96:{c.instructions+=2;NFSU2_TR(0x4e1a96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1a97:{NFSU2_TR(0x4e1a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1a9cull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e1a9c:L4e1a9c:{c.instructions+=3;NFSU2_TR(0x4e1a9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1a9f:{NFSU2_TR(0x4e1a9f);
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
B4e1aa1:{NFSU2_TR(0x4e1aa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e1abb;}}
}
B4e1aa3:L4e1aa3:{c.instructions+=5;NFSU2_TR(0x4e1aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1aa6:{NFSU2_TR(0x4e1aa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1aa7:{NFSU2_TR(0x4e1aa7);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1aac:{NFSU2_TR(0x4e1aac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1aad:{NFSU2_TR(0x4e1aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ab2ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e1ab2:L4e1ab2:{c.instructions+=2;NFSU2_TR(0x4e1ab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ab3:{NFSU2_TR(0x4e1ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ab8ull));
TAIL_STATIC(0x555f10u,555);
}
B4e1ab8:L4e1ab8:{c.instructions+=1;NFSU2_TR(0x4e1ab8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e1abb:L4e1abb:{c.instructions+=2;NFSU2_TR(0x4e1abb);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e1ac1:{NFSU2_TR(0x4e1ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ac6ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4e1ac6:L4e1ac6:{c.instructions+=6;NFSU2_TR(0x4e1ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1ac9:{NFSU2_TR(0x4e1ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1acc:{NFSU2_TR(0x4e1acc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1acd:{NFSU2_TR(0x4e1acd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ace:{NFSU2_TR(0x4e1ace);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e1ad4:{NFSU2_TR(0x4e1ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ad9ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e1ad9:L4e1ad9:{c.instructions+=4;NFSU2_TR(0x4e1ad9);
__builtin_memmove((R+8),gp(0x83a9d8),4);
}
B4e1adf:{NFSU2_TR(0x4e1adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e1ae2:{NFSU2_TR(0x4e1ae2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ae3:{NFSU2_TR(0x4e1ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ae8ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4e1ae8:L4e1ae8:{c.instructions+=3;NFSU2_TR(0x4e1ae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ae9:{NFSU2_TR(0x4e1ae9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1aea:{NFSU2_TR(0x4e1aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1aefull));
TAIL_STATIC(0x537950u,537);
}
B4e1aef:L4e1aef:{c.instructions+=4;NFSU2_TR(0x4e1aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1af2:{NFSU2_TR(0x4e1af2);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1af7:{NFSU2_TR(0x4e1af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1af8:{NFSU2_TR(0x4e1af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1afdull));
TAIL_STATIC(0x537a60u,537);
}
B4e1afd:L4e1afd:{c.instructions+=5;NFSU2_TR(0x4e1afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1b03:{NFSU2_TR(0x4e1b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1b06:{NFSU2_TR(0x4e1b06);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b0b:{NFSU2_TR(0x4e1b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b0c:{NFSU2_TR(0x4e1b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1b11ull));
TAIL_STATIC(0x537a60u,537);
}
B4e1b11:L4e1b11:{c.instructions+=13;NFSU2_TR(0x4e1b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1b17:{NFSU2_TR(0x4e1b17);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e1b1c:{NFSU2_TR(0x4e1b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1b22:{NFSU2_TR(0x4e1b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1b25:{NFSU2_TR(0x4e1b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1b28:{NFSU2_TR(0x4e1b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1b2b:{NFSU2_TR(0x4e1b2b);
__builtin_memmove((R+4),gp(0x7f4428),4);
}
B4e1b31:{NFSU2_TR(0x4e1b31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b33:{NFSU2_TR(0x4e1b33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b34:{NFSU2_TR(0x4e1b34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b35:{NFSU2_TR(0x4e1b35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b36:{NFSU2_TR(0x4e1b36);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b38:{NFSU2_TR(0x4e1b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1b3dull));
TAIL_STATIC(0x555f50u,555);
}
B4e1b3d:L4e1b3d:{c.instructions+=3;NFSU2_TR(0x4e1b3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4e1b40:{NFSU2_TR(0x4e1b40);
__builtin_memmove((R+4),(R+24),4);
}
B4e1b42:{NFSU2_TR(0x4e1b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1b47ull));
TAIL_STATIC(0x4cc5c0u,4cc);
}
B4e1b47:L4e1b47:{c.instructions+=9;NFSU2_TR(0x4e1b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1b4a:{NFSU2_TR(0x4e1b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1b4b:{NFSU2_TR(0x4e1b4b);
__builtin_memmove((R+0),(R+24),4);
}
B4e1b4d:{NFSU2_TR(0x4e1b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e1b4e:{NFSU2_TR(0x4e1b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e1b4f:{NFSU2_TR(0x4e1b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1b56:{NFSU2_TR(0x4e1b56);
__builtin_memmove((R+16),(R+20),4);
}
B4e1b58:{NFSU2_TR(0x4e1b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e1b59:{NFSU2_TR(0x4e1b59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1b60:L4e1b60:{c.instructions+=3;NFSU2_TR(0x4e1b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b61:{NFSU2_TR(0x4e1b61);
__builtin_memmove((R+24),(R+4),4);
}
B4e1b63:{NFSU2_TR(0x4e1b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1b68ull));
TAIL_STATIC(0x4cc530u,4cc);
}
B4e1b68:L4e1b68:{c.instructions+=2;NFSU2_TR(0x4e1b68);
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
B4e1b6d:{NFSU2_TR(0x4e1b6d);
if(r1(R+518)){{goto L4e1b78;}}
}
B4e1b6f:L4e1b6f:{c.instructions+=2;NFSU2_TR(0x4e1b6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b70:{NFSU2_TR(0x4e1b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1b75ull));
TAIL_STATIC(0x575630u,575);
}
B4e1b75:L4e1b75:{c.instructions+=1;NFSU2_TR(0x4e1b75);
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
B4e1b78:L4e1b78:{c.instructions+=3;NFSU2_TR(0x4e1b78);
__builtin_memmove((R+0),(R+24),4);
}
B4e1b7a:{NFSU2_TR(0x4e1b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e1b7b:{NFSU2_TR(0x4e1b7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1b80:L4e1b80:{c.instructions+=11;NFSU2_TR(0x4e1b80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b81:{NFSU2_TR(0x4e1b81);
__builtin_memmove((R+20),(R+16),4);
}
B4e1b83:{NFSU2_TR(0x4e1b83);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b85:{NFSU2_TR(0x4e1b85);
u8 U[4];
w4(U+0,u32(0x775ad4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b8a:{NFSU2_TR(0x4e1b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1b90:{NFSU2_TR(0x4e1b90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b91:{NFSU2_TR(0x4e1b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1b98:{NFSU2_TR(0x4e1b98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b99:{NFSU2_TR(0x4e1b99);
u8 U[4];
w4(U+0,u32(0x835c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1b9e:{NFSU2_TR(0x4e1b9e);
w4(R+4,u32(0x85ad40ull));
}
B4e1ba3:{NFSU2_TR(0x4e1ba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ba8ull));
TAIL_STATIC(0x528a60u,528);
}
B4e1ba8:L4e1ba8:{c.instructions+=2;NFSU2_TR(0x4e1ba8);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1bad:{NFSU2_TR(0x4e1bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1bb2ull));
TAIL_STATIC(0x575620u,575);
}
B4e1bb2:L4e1bb2:{c.instructions+=5;NFSU2_TR(0x4e1bb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1bb5:{NFSU2_TR(0x4e1bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1bb8:{NFSU2_TR(0x4e1bb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1bba:{NFSU2_TR(0x4e1bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1bc1:{NFSU2_TR(0x4e1bc1);
if(r1(R+518)){{goto L4e1bdc;}}
}
B4e1bc3:L4e1bc3:{c.instructions+=4;NFSU2_TR(0x4e1bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1bc6:{NFSU2_TR(0x4e1bc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1bc7:{NFSU2_TR(0x4e1bc7);
__builtin_memmove((R+4),(R+0),4);
}
B4e1bc9:{NFSU2_TR(0x4e1bc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1bceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1a30u);}goto L4e1a30;}
}
B4e1bce:L4e1bce:{c.instructions+=5;NFSU2_TR(0x4e1bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1bd1:{NFSU2_TR(0x4e1bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1bd8:{NFSU2_TR(0x4e1bd8);
__builtin_memmove((R+16),(R+20),4);
}
B4e1bda:{NFSU2_TR(0x4e1bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e1bdb:{NFSU2_TR(0x4e1bdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1bdc:L4e1bdc:{c.instructions+=6;NFSU2_TR(0x4e1bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1bdf:{NFSU2_TR(0x4e1bdf);
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
B4e1be1:{NFSU2_TR(0x4e1be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1be8:{NFSU2_TR(0x4e1be8);
__builtin_memmove((R+16),(R+20),4);
}
B4e1bea:{NFSU2_TR(0x4e1bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e1beb:{NFSU2_TR(0x4e1beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e1bf0:L4e1bf0:{c.instructions+=16;NFSU2_TR(0x4e1bf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1bf1:{NFSU2_TR(0x4e1bf1);
__builtin_memmove((R+20),(R+16),4);
}
B4e1bf3:{NFSU2_TR(0x4e1bf3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1bf5:{NFSU2_TR(0x4e1bf5);
u8 U[4];
w4(U+0,u32(0x775b1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1bfa:{NFSU2_TR(0x4e1bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1c00:{NFSU2_TR(0x4e1c00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c01:{NFSU2_TR(0x4e1c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c08:{NFSU2_TR(0x4e1c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4e1c0b:{NFSU2_TR(0x4e1c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1c0e:{NFSU2_TR(0x4e1c0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c0f:{NFSU2_TR(0x4e1c0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c10:{NFSU2_TR(0x4e1c10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c11:{NFSU2_TR(0x4e1c11);
__builtin_memmove((R+24),(R+4),4);
}
B4e1c13:{NFSU2_TR(0x4e1c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c14:{NFSU2_TR(0x4e1c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c17:{NFSU2_TR(0x4e1c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1c1cull));
TAIL_STATIC(0x551de0u,551);
}
B4e1c1c:L4e1c1c:{c.instructions+=16;NFSU2_TR(0x4e1c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1c1f:{NFSU2_TR(0x4e1c1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c21:{NFSU2_TR(0x4e1c21);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e1c23:{NFSU2_TR(0x4e1c23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c24:{NFSU2_TR(0x4e1c24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c25:{NFSU2_TR(0x4e1c25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c27:{NFSU2_TR(0x4e1c27);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c2c:{NFSU2_TR(0x4e1c2c);
u8 U[4];
w4(U+0,u32(0x795d48ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e1c32:{NFSU2_TR(0x4e1c32);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e1c38:{NFSU2_TR(0x4e1c38);
u8 U[4];
w4(U+0,u32(0x7976d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c3d:{NFSU2_TR(0x4e1c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c40:{NFSU2_TR(0x4e1c40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e1c43:{NFSU2_TR(0x4e1c43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c44:{NFSU2_TR(0x4e1c44);
__builtin_memmove((R+4),(R+12),4);
}
B4e1c46:{NFSU2_TR(0x4e1c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c49:{NFSU2_TR(0x4e1c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1c4eull));
TAIL_STATIC(0x542ca0u,542);
}
B4e1c4e:L4e1c4e:{c.instructions+=11;NFSU2_TR(0x4e1c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1c51:{NFSU2_TR(0x4e1c51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c53:{NFSU2_TR(0x4e1c53);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c55:{NFSU2_TR(0x4e1c55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c56:{NFSU2_TR(0x4e1c56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c57:{NFSU2_TR(0x4e1c57);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c5c:{NFSU2_TR(0x4e1c5c);
u8 U[4];
w4(U+0,u32(0x7976c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c61:{NFSU2_TR(0x4e1c61);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1c67:{NFSU2_TR(0x4e1c67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c68:{NFSU2_TR(0x4e1c68);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1c6c:{NFSU2_TR(0x4e1c6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1c71ull));
TAIL_STATIC(0x542ca0u,542);
}
B4e1c71:L4e1c71:{c.instructions+=6;NFSU2_TR(0x4e1c71);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1c75:{NFSU2_TR(0x4e1c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c7b:{NFSU2_TR(0x4e1c7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1c82:{NFSU2_TR(0x4e1c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c88:{NFSU2_TR(0x4e1c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1c8e:{NFSU2_TR(0x4e1c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1c93ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e1c93:L4e1c93:{c.instructions+=2;NFSU2_TR(0x4e1c93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1c94:{NFSU2_TR(0x4e1c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1c99ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e1c99:L4e1c99:{c.instructions+=3;NFSU2_TR(0x4e1c99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1c9c:{NFSU2_TR(0x4e1c9c);
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
B4e1c9e:{NFSU2_TR(0x4e1c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e1cb8;}}
}
B4e1ca0:L4e1ca0:{c.instructions+=5;NFSU2_TR(0x4e1ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1ca3:{NFSU2_TR(0x4e1ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ca4:{NFSU2_TR(0x4e1ca4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ca9:{NFSU2_TR(0x4e1ca9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1caa:{NFSU2_TR(0x4e1caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1cafull));
TAIL_STATIC(0x50cea0u,50c);
}
B4e1caf:L4e1caf:{c.instructions+=2;NFSU2_TR(0x4e1caf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1cb0:{NFSU2_TR(0x4e1cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1cb5ull));
TAIL_STATIC(0x555f10u,555);
}
B4e1cb5:L4e1cb5:{c.instructions+=1;NFSU2_TR(0x4e1cb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e1cb8:L4e1cb8:{c.instructions+=2;NFSU2_TR(0x4e1cb8);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e1cbe:{NFSU2_TR(0x4e1cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1cc3ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4e1cc3:L4e1cc3:{c.instructions+=6;NFSU2_TR(0x4e1cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1cc6:{NFSU2_TR(0x4e1cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1cc9:{NFSU2_TR(0x4e1cc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1cca:{NFSU2_TR(0x4e1cca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ccb:{NFSU2_TR(0x4e1ccb);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e1cd1:{NFSU2_TR(0x4e1cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1cd6ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e1cd6:L4e1cd6:{c.instructions+=5;NFSU2_TR(0x4e1cd6);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4e1cdb:{NFSU2_TR(0x4e1cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1cde:{NFSU2_TR(0x4e1cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1cdf:{NFSU2_TR(0x4e1cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1ce2:{NFSU2_TR(0x4e1ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ce7ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4e1ce7:L4e1ce7:{c.instructions+=4;NFSU2_TR(0x4e1ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1cea:{NFSU2_TR(0x4e1cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ceb:{NFSU2_TR(0x4e1ceb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1cec:{NFSU2_TR(0x4e1cec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1cf1ull));
TAIL_STATIC(0x537950u,537);
}
B4e1cf1:L4e1cf1:{c.instructions+=4;NFSU2_TR(0x4e1cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1cf4:{NFSU2_TR(0x4e1cf4);
u8 U[4];
w4(U+0,u32(0x7976bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1cf9:{NFSU2_TR(0x4e1cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1cfc:{NFSU2_TR(0x4e1cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1d01ull));
TAIL_STATIC(0x505450u,505);
}
B4e1d01:L4e1d01:{c.instructions+=4;NFSU2_TR(0x4e1d01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1d02:{NFSU2_TR(0x4e1d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1d05:{NFSU2_TR(0x4e1d05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1d06:{NFSU2_TR(0x4e1d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1d0bull));
TAIL_STATIC(0x5379c0u,537);
}
B4e1d0b:L4e1d0b:{c.instructions+=5;NFSU2_TR(0x4e1d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1d0e:{NFSU2_TR(0x4e1d0e);
u8 U[4];
w4(U+0,u32(0x7976b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1d13:{NFSU2_TR(0x4e1d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d19:{NFSU2_TR(0x4e1d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d1c:{NFSU2_TR(0x4e1d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1d21ull));
TAIL_STATIC(0x505450u,505);
}
B4e1d21:L4e1d21:{c.instructions+=4;NFSU2_TR(0x4e1d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1d24:{NFSU2_TR(0x4e1d24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1d25:{NFSU2_TR(0x4e1d25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1d26:{NFSU2_TR(0x4e1d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1d2bull));
TAIL_STATIC(0x5379c0u,537);
}
B4e1d2b:L4e1d2b:{c.instructions+=6;NFSU2_TR(0x4e1d2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e1d2e:{NFSU2_TR(0x4e1d2e);
__builtin_memmove((R+4),(R+12),4);
}
B4e1d30:{NFSU2_TR(0x4e1d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d36:{NFSU2_TR(0x4e1d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d40:{NFSU2_TR(0x4e1d40);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1d47:{NFSU2_TR(0x4e1d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1d4cull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4e1d4c:L4e1d4c:{c.instructions+=3;NFSU2_TR(0x4e1d4c);
w4(R+12,u32(0x1ull));
}
B4e1d51:{NFSU2_TR(0x4e1d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d58:{NFSU2_TR(0x4e1d58);
{goto L4e1d60;}
}
B4e1d5a:L4e1d5a:{c.instructions+=2;NFSU2_TR(0x4e1d5a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e1d5c:{NFSU2_TR(0x4e1d5c);
__builtin_memmove((R+16),(R+16),4);
}
B4e1d60:L4e1d60:{c.instructions+=2;NFSU2_TR(0x4e1d60);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1d62:{NFSU2_TR(0x4e1d62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1d67ull));
TAIL_STATIC(0x575620u,575);
}
B4e1d67:L4e1d67:{c.instructions+=3;NFSU2_TR(0x4e1d67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1d6a:{NFSU2_TR(0x4e1d6a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e1d6c:{NFSU2_TR(0x4e1d6c);
if(r1(R+518)){{goto L4e1d9f;}}
}
B4e1d6e:L4e1d6e:{c.instructions+=13;NFSU2_TR(0x4e1d6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1d71:{NFSU2_TR(0x4e1d71);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1d77:{NFSU2_TR(0x4e1d77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e1d79:{NFSU2_TR(0x4e1d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d7c:{NFSU2_TR(0x4e1d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d7f:{NFSU2_TR(0x4e1d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d82:{NFSU2_TR(0x4e1d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d85:{NFSU2_TR(0x4e1d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d88:{NFSU2_TR(0x4e1d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d8b:{NFSU2_TR(0x4e1d8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1d8f:{NFSU2_TR(0x4e1d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d96:{NFSU2_TR(0x4e1d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1d9d:{NFSU2_TR(0x4e1d9d);
__builtin_memmove((R+28),(R+0),4);
}
B4e1d9f:L4e1d9f:{c.instructions+=5;NFSU2_TR(0x4e1d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1da2:{NFSU2_TR(0x4e1da2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1da3:{NFSU2_TR(0x4e1da3);
u8 U[4];
w4(U+0,u32(0x7976a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1da8:{NFSU2_TR(0x4e1da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1dab:{NFSU2_TR(0x4e1dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1db0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4e1db0:L4e1db0:{c.instructions+=4;NFSU2_TR(0x4e1db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1db3:{NFSU2_TR(0x4e1db3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1db4:{NFSU2_TR(0x4e1db4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1db5:{NFSU2_TR(0x4e1db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1dbaull));
TAIL_STATIC(0x537a10u,537);
}
B4e1dba:L4e1dba:{c.instructions+=3;NFSU2_TR(0x4e1dba);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1dbc:{NFSU2_TR(0x4e1dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1dbf:{NFSU2_TR(0x4e1dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1dc4ull));
TAIL_STATIC(0x575620u,575);
}
B4e1dc4:L4e1dc4:{c.instructions+=3;NFSU2_TR(0x4e1dc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e1dc7:{NFSU2_TR(0x4e1dc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1dc9:{NFSU2_TR(0x4e1dc9);
if(r1(R+518)){{goto L4e1ddc;}}
}
B4e1dcb:L4e1dcb:{c.instructions+=5;NFSU2_TR(0x4e1dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1dce:{NFSU2_TR(0x4e1dce);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1dd4:{NFSU2_TR(0x4e1dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1dd7:{NFSU2_TR(0x4e1dd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e1dda:{NFSU2_TR(0x4e1dda);
{goto L4e1dde;}
}
B4e1ddc:L4e1ddc:{c.instructions+=1;NFSU2_TR(0x4e1ddc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e1dde:L4e1dde:{c.instructions+=11;NFSU2_TR(0x4e1dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1de1:{NFSU2_TR(0x4e1de1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1de4:{NFSU2_TR(0x4e1de4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e1de6:{NFSU2_TR(0x4e1de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1de9:{NFSU2_TR(0x4e1de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1dec:{NFSU2_TR(0x4e1dec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e1dee:{NFSU2_TR(0x4e1dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1df1:{NFSU2_TR(0x4e1df1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1df2:{NFSU2_TR(0x4e1df2);
u8 U[4];
w4(U+0,u32(0x796288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1df7:{NFSU2_TR(0x4e1df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1dfa:{NFSU2_TR(0x4e1dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1dffull));
TAIL_STATIC(0x50b990u,50b);
}
B4e1dff:L4e1dff:{c.instructions+=4;NFSU2_TR(0x4e1dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1e02:{NFSU2_TR(0x4e1e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e03:{NFSU2_TR(0x4e1e03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e04:{NFSU2_TR(0x4e1e04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1e09ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e1e09:L4e1e09:{c.instructions+=5;NFSU2_TR(0x4e1e09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e1e0c:{NFSU2_TR(0x4e1e0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e0d:{NFSU2_TR(0x4e1e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1e10:{NFSU2_TR(0x4e1e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e13:{NFSU2_TR(0x4e1e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1e18ull));
TAIL_STATIC(0x52e770u,52e);
}
B4e1e18:L4e1e18:{c.instructions+=5;NFSU2_TR(0x4e1e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1e1b:{NFSU2_TR(0x4e1e1b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4e1e1c:{NFSU2_TR(0x4e1e1c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e1e1d:{NFSU2_TR(0x4e1e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e20:{NFSU2_TR(0x4e1e20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1d5au);}goto L4e1d5a;}}
}
B4e1e26:L4e1e26:{c.instructions+=2;NFSU2_TR(0x4e1e26);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e28:{NFSU2_TR(0x4e1e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1e2dull));
TAIL_STATIC(0x575620u,575);
}
B4e1e2d:L4e1e2d:{c.instructions+=4;NFSU2_TR(0x4e1e2d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e1e2f:{NFSU2_TR(0x4e1e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1e32:{NFSU2_TR(0x4e1e32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e1e34:{NFSU2_TR(0x4e1e34);
if(r1(R+518)){{goto L4e1e67;}}
}
B4e1e36:L4e1e36:{c.instructions+=13;NFSU2_TR(0x4e1e36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1e39:{NFSU2_TR(0x4e1e39);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1e3f:{NFSU2_TR(0x4e1e3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e1e41:{NFSU2_TR(0x4e1e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e44:{NFSU2_TR(0x4e1e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e47:{NFSU2_TR(0x4e1e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e4a:{NFSU2_TR(0x4e1e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e4d:{NFSU2_TR(0x4e1e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e50:{NFSU2_TR(0x4e1e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e53:{NFSU2_TR(0x4e1e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1e57:{NFSU2_TR(0x4e1e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e5e:{NFSU2_TR(0x4e1e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e65:{NFSU2_TR(0x4e1e65);
__builtin_memmove((R+28),(R+0),4);
}
B4e1e67:L4e1e67:{c.instructions+=4;NFSU2_TR(0x4e1e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1e6a:{NFSU2_TR(0x4e1e6a);
u8 U[4];
w4(U+0,u32(0x980822b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e6f:{NFSU2_TR(0x4e1e6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e70:{NFSU2_TR(0x4e1e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1e75ull));
TAIL_STATIC(0x537a10u,537);
}
B4e1e75:L4e1e75:{c.instructions+=3;NFSU2_TR(0x4e1e75);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1e77:{NFSU2_TR(0x4e1e77);
__builtin_memmove((R+12),(R+0),4);
}
B4e1e79:{NFSU2_TR(0x4e1e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1e7eull));
TAIL_STATIC(0x575620u,575);
}
B4e1e7e:L4e1e7e:{c.instructions+=3;NFSU2_TR(0x4e1e7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e1e81:{NFSU2_TR(0x4e1e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1e83:{NFSU2_TR(0x4e1e83);
if(r1(R+518)){{goto L4e1e93;}}
}
B4e1e85:L4e1e85:{c.instructions+=4;NFSU2_TR(0x4e1e85);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e1e8b:{NFSU2_TR(0x4e1e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1e8e:{NFSU2_TR(0x4e1e8e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e1e91:{NFSU2_TR(0x4e1e91);
{goto L4e1e95;}
}
B4e1e93:L4e1e93:{c.instructions+=1;NFSU2_TR(0x4e1e93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e1e95:L4e1e95:{c.instructions+=9;NFSU2_TR(0x4e1e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1e98:{NFSU2_TR(0x4e1e98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1e9b:{NFSU2_TR(0x4e1e9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e1e9d:{NFSU2_TR(0x4e1e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1ea0:{NFSU2_TR(0x4e1ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e1ea2:{NFSU2_TR(0x4e1ea2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ea3:{NFSU2_TR(0x4e1ea3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1ea9:{NFSU2_TR(0x4e1ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1eac:{NFSU2_TR(0x4e1eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1eb1ull));
TAIL_STATIC(0x52e770u,52e);
}
B4e1eb1:L4e1eb1:{c.instructions+=1;NFSU2_TR(0x4e1eb1);
w4(R+12,u32(0x7f4438ull));
}
B4e1eb6:L4e1eb6:{c.instructions+=2;NFSU2_TR(0x4e1eb6);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1eb8:{NFSU2_TR(0x4e1eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1ebdull));
TAIL_STATIC(0x575620u,575);
}
B4e1ebd:L4e1ebd:{c.instructions+=5;NFSU2_TR(0x4e1ebd);
__builtin_memmove((R+28),(R+0),4);
}
B4e1ebf:{NFSU2_TR(0x4e1ebf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1ec2:{NFSU2_TR(0x4e1ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1ec5:{NFSU2_TR(0x4e1ec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1ec7:{NFSU2_TR(0x4e1ec7);
if(r1(R+518)){{goto L4e1f33;}}
}
B4e1ec9:L4e1ec9:{c.instructions+=10;NFSU2_TR(0x4e1ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e1ecb:{NFSU2_TR(0x4e1ecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e1ece:{NFSU2_TR(0x4e1ece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e1ed0:{NFSU2_TR(0x4e1ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1ed3:{NFSU2_TR(0x4e1ed3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1ed7:{NFSU2_TR(0x4e1ed7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4e1eda:{NFSU2_TR(0x4e1eda);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1ede:{NFSU2_TR(0x4e1ede);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e1ee4:{NFSU2_TR(0x4e1ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e1ee7:{NFSU2_TR(0x4e1ee7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e1f1a;}}
}
B4e1ee9:L4e1ee9:{c.instructions+=1;NFSU2_TR(0x4e1ee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e2018ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e1ef0:L4e1ef0:{c.instructions+=2;NFSU2_TR(0x4e1ef0);
w4(R+0,u32(0xc06e138aull));
}
B4e1ef5:{NFSU2_TR(0x4e1ef5);
{goto L4e1f1c;}
}
B4e1ef7:L4e1ef7:{c.instructions+=2;NFSU2_TR(0x4e1ef7);
w4(R+0,u32(0xb0819356ull));
}
B4e1efc:{NFSU2_TR(0x4e1efc);
{goto L4e1f1c;}
}
B4e1efe:L4e1efe:{c.instructions+=2;NFSU2_TR(0x4e1efe);
w4(R+0,u32(0xf8cb19a3ull));
}
B4e1f03:{NFSU2_TR(0x4e1f03);
{goto L4e1f1c;}
}
B4e1f05:L4e1f05:{c.instructions+=2;NFSU2_TR(0x4e1f05);
w4(R+0,u32(0x6f8e5bfull));
}
B4e1f0a:{NFSU2_TR(0x4e1f0a);
{goto L4e1f1c;}
}
B4e1f0c:L4e1f0c:{c.instructions+=2;NFSU2_TR(0x4e1f0c);
w4(R+0,u32(0xe2442059ull));
}
B4e1f11:{NFSU2_TR(0x4e1f11);
{goto L4e1f1c;}
}
B4e1f13:L4e1f13:{c.instructions+=2;NFSU2_TR(0x4e1f13);
w4(R+0,u32(0xea33e5b6ull));
}
B4e1f18:{NFSU2_TR(0x4e1f18);
{goto L4e1f1c;}
}
B4e1f1a:L4e1f1a:{c.instructions+=1;NFSU2_TR(0x4e1f1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e1f1c:L4e1f1c:{c.instructions+=4;NFSU2_TR(0x4e1f1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1f1e:{NFSU2_TR(0x4e1f1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1f20:{NFSU2_TR(0x4e1f20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1f21:{NFSU2_TR(0x4e1f21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1f26ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e1f26:L4e1f26:{c.instructions+=4;NFSU2_TR(0x4e1f26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e1f29:{NFSU2_TR(0x4e1f29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1f2a:{NFSU2_TR(0x4e1f2a);
__builtin_memmove((R+4),(R+28),4);
}
B4e1f2c:{NFSU2_TR(0x4e1f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1f31ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4e1f31:L4e1f31:{c.instructions+=1;NFSU2_TR(0x4e1f31);
{goto L4e1f35;}
}
B4e1f33:L4e1f33:{c.instructions+=1;NFSU2_TR(0x4e1f33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e1f35:L4e1f35:{c.instructions+=4;NFSU2_TR(0x4e1f35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1f36:{NFSU2_TR(0x4e1f36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e1f3c:{NFSU2_TR(0x4e1f3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1f40:{NFSU2_TR(0x4e1f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1f45ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4e1f45:L4e1f45:{c.instructions+=3;NFSU2_TR(0x4e1f45);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4e1f48:{NFSU2_TR(0x4e1f48);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f444cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f444cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e1f4e:{NFSU2_TR(0x4e1f4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1eb6u);}goto L4e1eb6;}}
}
B4e1f54:L4e1f54:{c.instructions+=3;NFSU2_TR(0x4e1f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1f5a:{NFSU2_TR(0x4e1f5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1f5c:{NFSU2_TR(0x4e1f5c);
if(r1(R+518)){{goto L4e1f63;}}
}
B4e1f5e:L4e1f5e:{c.instructions+=2;NFSU2_TR(0x4e1f5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e1f61:{NFSU2_TR(0x4e1f61);
{goto L4e1f65;}
}
B4e1f63:L4e1f63:{c.instructions+=1;NFSU2_TR(0x4e1f63);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e1f65:L4e1f65:{c.instructions+=2;NFSU2_TR(0x4e1f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1f6b:{NFSU2_TR(0x4e1f6b);
__builtin_memmove((R+8),gp(0x7f4434),4);
}
B4e1f71:L4e1f71:{c.instructions+=2;NFSU2_TR(0x4e1f71);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1f73:{NFSU2_TR(0x4e1f73);
if(r1(R+518)){{goto L4e1f7a;}}
}
B4e1f75:L4e1f75:{c.instructions+=2;NFSU2_TR(0x4e1f75);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e1f78:{NFSU2_TR(0x4e1f78);
{goto L4e1f7c;}
}
B4e1f7a:L4e1f7a:{c.instructions+=1;NFSU2_TR(0x4e1f7a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e1f7c:L4e1f7c:{c.instructions+=3;NFSU2_TR(0x4e1f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1f7f:{NFSU2_TR(0x4e1f7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1f81:{NFSU2_TR(0x4e1f81);
if(r1(R+518)){{goto L4e1f88;}}
}
B4e1f83:L4e1f83:{c.instructions+=2;NFSU2_TR(0x4e1f83);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4e1f86:{NFSU2_TR(0x4e1f86);
{goto L4e1f8a;}
}
B4e1f88:L4e1f88:{c.instructions+=1;NFSU2_TR(0x4e1f88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e1f8a:L4e1f8a:{c.instructions+=2;NFSU2_TR(0x4e1f8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e1f8c:{NFSU2_TR(0x4e1f8c);
if(r1(R+518)){{goto L4e1fa3;}}
}
B4e1f8e:L4e1f8e:{c.instructions+=2;NFSU2_TR(0x4e1f8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e1f91:{NFSU2_TR(0x4e1f91);
if(r1(R+518)){{goto L4e1fa3;}}
}
B4e1f93:L4e1f93:{c.instructions+=3;NFSU2_TR(0x4e1f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e1f96:{NFSU2_TR(0x4e1f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1f98:{NFSU2_TR(0x4e1f98);
if(r1(R+518)){{goto L4e1f9f;}}
}
B4e1f9a:L4e1f9a:{c.instructions+=2;NFSU2_TR(0x4e1f9a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B4e1f9d:{NFSU2_TR(0x4e1f9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1f71u);}goto L4e1f71;}
}
B4e1f9f:L4e1f9f:{c.instructions+=2;NFSU2_TR(0x4e1f9f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e1fa1:{NFSU2_TR(0x4e1fa1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e1f71u);}goto L4e1f71;}
}
B4e1fa3:L4e1fa3:{c.instructions+=4;NFSU2_TR(0x4e1fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e1fa9:{NFSU2_TR(0x4e1fa9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1fab:{NFSU2_TR(0x4e1fab);
__builtin_memmove((R+4),(R+28),4);
}
B4e1fad:{NFSU2_TR(0x4e1fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1fb2ull));
TAIL_STATIC(0x543470u,543);
}
B4e1fb2:L4e1fb2:{c.instructions+=3;NFSU2_TR(0x4e1fb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1fb3:{NFSU2_TR(0x4e1fb3);
__builtin_memmove((R+4),(R+28),4);
}
B4e1fb5:{NFSU2_TR(0x4e1fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1fbaull));
TAIL_STATIC(0x51f440u,51f);
}
B4e1fba:L4e1fba:{c.instructions+=4;NFSU2_TR(0x4e1fba);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4e1fbb:{NFSU2_TR(0x4e1fbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1fbc:{NFSU2_TR(0x4e1fbc);
__builtin_memmove((R+4),(R+28),4);
}
B4e1fbe:{NFSU2_TR(0x4e1fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1fc3ull));
TAIL_STATIC(0x54edd0u,54e);
}
B4e1fc3:L4e1fc3:{c.instructions+=3;NFSU2_TR(0x4e1fc3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1fc5:{NFSU2_TR(0x4e1fc5);
__builtin_memmove((R+4),(R+28),4);
}
B4e1fc7:{NFSU2_TR(0x4e1fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1fccull));
TAIL_STATIC(0x538500u,538);
}
B4e1fcc:L4e1fcc:{c.instructions+=3;NFSU2_TR(0x4e1fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e1fcf:{NFSU2_TR(0x4e1fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e1fd1:{NFSU2_TR(0x4e1fd1);
if(r1(R+518)){{goto L4e1fe3;}}
}
B4e1fd3:L4e1fd3:{c.instructions+=5;NFSU2_TR(0x4e1fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e1fd6:{NFSU2_TR(0x4e1fd6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1fdb:{NFSU2_TR(0x4e1fdb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1fdc:{NFSU2_TR(0x4e1fdc);
__builtin_memmove((R+4),(R+28),4);
}
B4e1fde:{NFSU2_TR(0x4e1fde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1fe3ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4e1fe3:L4e1fe3:{c.instructions+=2;NFSU2_TR(0x4e1fe3);
__builtin_memmove((R+4),(R+24),4);
}
B4e1fe5:{NFSU2_TR(0x4e1fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e1feaull));
TAIL_STATIC(0x4cc900u,4cc);
}
B4e1fea:L4e1fea:{c.instructions+=6;NFSU2_TR(0x4e1fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e1fed:{NFSU2_TR(0x4e1fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1ff0:{NFSU2_TR(0x4e1ff0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e1ff7:{NFSU2_TR(0x4e1ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e1ffa:{NFSU2_TR(0x4e1ffa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e1ffc:{NFSU2_TR(0x4e1ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e2001ull));
TAIL_STATIC(0x504820u,504);
}
XIT:NFSU2_TR_EXIT(0x4e1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
