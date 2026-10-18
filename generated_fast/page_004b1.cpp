#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 page_4b1(Cpu& c){return body_4b1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b1000:goto L4b1000;
case 0x4b1005:c.instructions+=1;goto B4b1005;
case 0x4b100a:goto L4b100a;
case 0x4b100d:c.instructions+=1;goto B4b100d;
case 0x4b100f:goto L4b100f;
case 0x4b1014:c.instructions+=1;goto B4b1014;
case 0x4b1019:goto L4b1019;
case 0x4b101c:c.instructions+=1;goto B4b101c;
case 0x4b101e:goto L4b101e;
case 0x4b1021:c.instructions+=6;goto B4b1021;
case 0x4b1024:c.instructions+=5;goto B4b1024;
case 0x4b102a:c.instructions+=4;goto B4b102a;
case 0x4b102b:c.instructions+=3;goto B4b102b;
case 0x4b102c:c.instructions+=2;goto B4b102c;
case 0x4b1032:c.instructions+=1;goto B4b1032;
case 0x4b1037:goto L4b1037;
case 0x4b1038:c.instructions+=1;goto B4b1038;
case 0x4b1039:goto L4b1039;
case 0x4b103c:c.instructions+=6;goto B4b103c;
case 0x4b103f:c.instructions+=5;goto B4b103f;
case 0x4b1045:c.instructions+=4;goto B4b1045;
case 0x4b1046:c.instructions+=3;goto B4b1046;
case 0x4b104b:c.instructions+=2;goto B4b104b;
case 0x4b104c:c.instructions+=1;goto B4b104c;
case 0x4b1051:goto L4b1051;
case 0x4b1052:c.instructions+=1;goto B4b1052;
case 0x4b1060:goto L4b1060;
case 0x4b1061:c.instructions+=6;goto B4b1061;
case 0x4b1063:c.instructions+=5;goto B4b1063;
case 0x4b1066:c.instructions+=4;goto B4b1066;
case 0x4b1067:c.instructions+=3;goto B4b1067;
case 0x4b1069:c.instructions+=2;goto B4b1069;
case 0x4b106b:c.instructions+=1;goto B4b106b;
case 0x4b106d:goto L4b106d;
case 0x4b1070:c.instructions+=2;goto B4b1070;
case 0x4b1071:c.instructions+=1;goto B4b1071;
case 0x4b1076:goto L4b1076;
case 0x4b1077:c.instructions+=2;goto B4b1077;
case 0x4b1078:c.instructions+=1;goto B4b1078;
case 0x4b107b:goto L4b107b;
case 0x4b107f:c.instructions+=2;goto B4b107f;
case 0x4b1081:c.instructions+=1;goto B4b1081;
case 0x4b1083:goto L4b1083;
case 0x4b1085:c.instructions+=3;goto B4b1085;
case 0x4b1088:c.instructions+=2;goto B4b1088;
case 0x4b108a:c.instructions+=1;goto B4b108a;
case 0x4b108c:goto L4b108c;
case 0x4b108e:goto L4b108e;
case 0x4b1090:c.instructions+=1;goto B4b1090;
case 0x4b1092:goto L4b1092;
case 0x4b1095:c.instructions+=1;goto B4b1095;
case 0x4b1097:goto L4b1097;
case 0x4b109a:c.instructions+=3;goto B4b109a;
case 0x4b109d:c.instructions+=2;goto B4b109d;
case 0x4b109f:c.instructions+=1;goto B4b109f;
case 0x4b10a1:goto L4b10a1;
case 0x4b10a4:goto L4b10a4;
case 0x4b10a6:goto L4b10a6;
case 0x4b10a8:c.instructions+=1;goto B4b10a8;
case 0x4b10ad:goto L4b10ad;
case 0x4b10b0:goto L4b10b0;
case 0x4b10b1:c.instructions+=2;goto B4b10b1;
case 0x4b10b3:c.instructions+=1;goto B4b10b3;
case 0x4b10b8:goto L4b10b8;
case 0x4b10b9:c.instructions+=2;goto B4b10b9;
case 0x4b10ba:c.instructions+=1;goto B4b10ba;
case 0x4b10c0:goto L4b10c0;
case 0x4b10c1:c.instructions+=3;goto B4b10c1;
case 0x4b10c3:c.instructions+=2;goto B4b10c3;
case 0x4b10c8:c.instructions+=1;goto B4b10c8;
case 0x4b10cd:goto L4b10cd;
case 0x4b10cf:c.instructions+=1;goto B4b10cf;
case 0x4b10d1:goto L4b10d1;
case 0x4b10d6:c.instructions+=1;goto B4b10d6;
case 0x4b10db:goto L4b10db;
case 0x4b10de:c.instructions+=1;goto B4b10de;
case 0x4b10e0:goto L4b10e0;
case 0x4b10e5:c.instructions+=1;goto B4b10e5;
case 0x4b10ea:goto L4b10ea;
case 0x4b10ed:c.instructions+=1;goto B4b10ed;
case 0x4b10ef:goto L4b10ef;
case 0x4b10f4:c.instructions+=1;goto B4b10f4;
case 0x4b10f9:goto L4b10f9;
case 0x4b10fc:c.instructions+=1;goto B4b10fc;
case 0x4b10fe:goto L4b10fe;
case 0x4b1101:c.instructions+=6;goto B4b1101;
case 0x4b1106:c.instructions+=5;goto B4b1106;
case 0x4b110b:c.instructions+=4;goto B4b110b;
case 0x4b1110:c.instructions+=3;goto B4b1110;
case 0x4b1115:c.instructions+=2;goto B4b1115;
case 0x4b1116:c.instructions+=1;goto B4b1116;
case 0x4b111b:goto L4b111b;
case 0x4b111e:c.instructions+=3;goto B4b111e;
case 0x4b1122:c.instructions+=2;goto B4b1122;
case 0x4b1123:c.instructions+=1;goto B4b1123;
case 0x4b1124:goto L4b1124;
case 0x4b1127:c.instructions+=3;goto B4b1127;
case 0x4b112a:c.instructions+=2;goto B4b112a;
case 0x4b112c:c.instructions+=1;goto B4b112c;
case 0x4b112e:goto L4b112e;
case 0x4b1131:c.instructions+=10;goto B4b1131;
case 0x4b1136:c.instructions+=9;goto B4b1136;
case 0x4b1138:c.instructions+=8;goto B4b1138;
case 0x4b113d:c.instructions+=7;goto B4b113d;
case 0x4b1142:c.instructions+=6;goto B4b1142;
case 0x4b1147:c.instructions+=5;goto B4b1147;
case 0x4b114c:c.instructions+=4;goto B4b114c;
case 0x4b1151:c.instructions+=3;goto B4b1151;
case 0x4b1156:c.instructions+=2;goto B4b1156;
case 0x4b1157:c.instructions+=1;goto B4b1157;
case 0x4b115c:goto L4b115c;
case 0x4b115f:c.instructions+=1;goto B4b115f;
case 0x4b1163:goto L4b1163;
case 0x4b1164:c.instructions+=1;goto B4b1164;
case 0x4b1170:goto L4b1170;
case 0x4b1171:c.instructions+=7;goto B4b1171;
case 0x4b1173:c.instructions+=6;goto B4b1173;
case 0x4b1174:c.instructions+=5;goto B4b1174;
case 0x4b1175:c.instructions+=4;goto B4b1175;
case 0x4b1178:c.instructions+=3;goto B4b1178;
case 0x4b117a:c.instructions+=2;goto B4b117a;
case 0x4b117c:c.instructions+=1;goto B4b117c;
case 0x4b117e:goto L4b117e;
case 0x4b1181:c.instructions+=2;goto B4b1181;
case 0x4b1183:c.instructions+=1;goto B4b1183;
case 0x4b1185:goto L4b1185;
case 0x4b118a:goto L4b118a;
case 0x4b118b:c.instructions+=4;goto B4b118b;
case 0x4b1192:c.instructions+=3;goto B4b1192;
case 0x4b1193:c.instructions+=2;goto B4b1193;
case 0x4b1194:c.instructions+=1;goto B4b1194;
case 0x4b1197:goto L4b1197;
case 0x4b119a:c.instructions+=2;goto B4b119a;
case 0x4b119d:c.instructions+=1;goto B4b119d;
case 0x4b119f:goto L4b119f;
case 0x4b11a0:c.instructions+=1;goto B4b11a0;
case 0x4b11a2:goto L4b11a2;
case 0x4b11a5:c.instructions+=3;goto B4b11a5;
case 0x4b11a6:c.instructions+=2;goto B4b11a6;
case 0x4b11a8:c.instructions+=1;goto B4b11a8;
case 0x4b11ad:goto L4b11ad;
case 0x4b11ae:c.instructions+=3;goto B4b11ae;
case 0x4b11af:c.instructions+=2;goto B4b11af;
case 0x4b11b0:c.instructions+=1;goto B4b11b0;
case 0x4b11b3:goto L4b11b3;
case 0x4b11b8:c.instructions+=1;goto B4b11b8;
case 0x4b11bd:goto L4b11bd;
case 0x4b11bf:c.instructions+=1;goto B4b11bf;
case 0x4b11c1:goto L4b11c1;
case 0x4b11c4:c.instructions+=4;goto B4b11c4;
case 0x4b11c7:c.instructions+=3;goto B4b11c7;
case 0x4b11ca:c.instructions+=2;goto B4b11ca;
case 0x4b11cb:c.instructions+=1;goto B4b11cb;
case 0x4b11d0:goto L4b11d0;
case 0x4b11d3:c.instructions+=2;goto B4b11d3;
case 0x4b11d5:c.instructions+=1;goto B4b11d5;
case 0x4b11d7:goto L4b11d7;
case 0x4b11da:c.instructions+=2;goto B4b11da;
case 0x4b11db:c.instructions+=1;goto B4b11db;
case 0x4b11e0:goto L4b11e0;
case 0x4b11e2:c.instructions+=1;goto B4b11e2;
case 0x4b11e4:goto L4b11e4;
case 0x4b11e7:c.instructions+=3;goto B4b11e7;
case 0x4b11e8:c.instructions+=2;goto B4b11e8;
case 0x4b11eb:c.instructions+=1;goto B4b11eb;
case 0x4b11f0:goto L4b11f0;
case 0x4b11f1:c.instructions+=3;goto B4b11f1;
case 0x4b11f2:c.instructions+=2;goto B4b11f2;
case 0x4b11f3:c.instructions+=1;goto B4b11f3;
case 0x4b1200:goto L4b1200;
case 0x4b1203:c.instructions+=12;goto B4b1203;
case 0x4b1207:c.instructions+=11;goto B4b1207;
case 0x4b1208:c.instructions+=10;goto B4b1208;
case 0x4b1209:c.instructions+=9;goto B4b1209;
case 0x4b120b:c.instructions+=8;goto B4b120b;
case 0x4b120e:c.instructions+=7;goto B4b120e;
case 0x4b120f:c.instructions+=6;goto B4b120f;
case 0x4b1211:c.instructions+=5;goto B4b1211;
case 0x4b1213:c.instructions+=4;goto B4b1213;
case 0x4b1216:c.instructions+=3;goto B4b1216;
case 0x4b121b:c.instructions+=2;goto B4b121b;
case 0x4b1222:c.instructions+=1;goto B4b1222;
case 0x4b1225:goto L4b1225;
case 0x4b1227:goto L4b1227;
case 0x4b122a:c.instructions+=3;goto B4b122a;
case 0x4b122c:c.instructions+=2;goto B4b122c;
case 0x4b1230:c.instructions+=1;goto B4b1230;
case 0x4b1236:goto L4b1236;
case 0x4b123a:c.instructions+=3;goto B4b123a;
case 0x4b123d:c.instructions+=2;goto B4b123d;
case 0x4b123e:c.instructions+=1;goto B4b123e;
case 0x4b1243:goto L4b1243;
case 0x4b1244:c.instructions+=2;goto B4b1244;
case 0x4b1248:c.instructions+=1;goto B4b1248;
case 0x4b124d:goto L4b124d;
case 0x4b1250:c.instructions+=4;goto B4b1250;
case 0x4b1252:c.instructions+=3;goto B4b1252;
case 0x4b1254:c.instructions+=2;goto B4b1254;
case 0x4b1256:c.instructions+=1;goto B4b1256;
case 0x4b1258:goto L4b1258;
case 0x4b125c:c.instructions+=2;goto B4b125c;
case 0x4b1260:c.instructions+=1;goto B4b1260;
case 0x4b1265:goto L4b1265;
case 0x4b1268:c.instructions+=2;goto B4b1268;
case 0x4b126a:c.instructions+=1;goto B4b126a;
case 0x4b1270:goto L4b1270;
case 0x4b1273:c.instructions+=20;goto B4b1273;
case 0x4b1276:c.instructions+=19;goto B4b1276;
case 0x4b1279:c.instructions+=18;goto B4b1279;
case 0x4b127b:c.instructions+=17;goto B4b127b;
case 0x4b127d:c.instructions+=16;goto B4b127d;
case 0x4b1280:c.instructions+=15;goto B4b1280;
case 0x4b1283:c.instructions+=14;goto B4b1283;
case 0x4b1286:c.instructions+=13;goto B4b1286;
case 0x4b1289:c.instructions+=12;goto B4b1289;
case 0x4b1290:c.instructions+=11;goto B4b1290;
case 0x4b1293:c.instructions+=10;goto B4b1293;
case 0x4b1296:c.instructions+=9;goto B4b1296;
case 0x4b1299:c.instructions+=8;goto B4b1299;
case 0x4b129a:c.instructions+=7;goto B4b129a;
case 0x4b129d:c.instructions+=6;goto B4b129d;
case 0x4b129e:c.instructions+=5;goto B4b129e;
case 0x4b12a0:c.instructions+=4;goto B4b12a0;
case 0x4b12a1:c.instructions+=3;goto B4b12a1;
case 0x4b12a2:c.instructions+=2;goto B4b12a2;
case 0x4b12a5:c.instructions+=1;goto B4b12a5;
case 0x4b12a8:goto L4b12a8;
case 0x4b12ad:goto L4b12ad;
case 0x4b12b0:c.instructions+=2;goto B4b12b0;
case 0x4b12b2:c.instructions+=1;goto B4b12b2;
case 0x4b12b4:goto L4b12b4;
case 0x4b12ba:c.instructions+=29;goto B4b12ba;
case 0x4b12c0:c.instructions+=28;goto B4b12c0;
case 0x4b12c6:c.instructions+=27;goto B4b12c6;
case 0x4b12cc:c.instructions+=26;goto B4b12cc;
case 0x4b12d0:c.instructions+=25;goto B4b12d0;
case 0x4b12d6:c.instructions+=24;goto B4b12d6;
case 0x4b12d9:c.instructions+=23;goto B4b12d9;
case 0x4b12db:c.instructions+=22;goto B4b12db;
case 0x4b12de:c.instructions+=21;goto B4b12de;
case 0x4b12e1:c.instructions+=20;goto B4b12e1;
case 0x4b12e6:c.instructions+=19;goto B4b12e6;
case 0x4b12e9:c.instructions+=18;goto B4b12e9;
case 0x4b12ed:c.instructions+=17;goto B4b12ed;
case 0x4b12f0:c.instructions+=16;goto B4b12f0;
case 0x4b12f4:c.instructions+=15;goto B4b12f4;
case 0x4b12f7:c.instructions+=14;goto B4b12f7;
case 0x4b12fa:c.instructions+=13;goto B4b12fa;
case 0x4b12fd:c.instructions+=12;goto B4b12fd;
case 0x4b1300:c.instructions+=11;goto B4b1300;
case 0x4b1303:c.instructions+=10;goto B4b1303;
case 0x4b1306:c.instructions+=9;goto B4b1306;
case 0x4b1309:c.instructions+=8;goto B4b1309;
case 0x4b130a:c.instructions+=7;goto B4b130a;
case 0x4b130d:c.instructions+=6;goto B4b130d;
case 0x4b130e:c.instructions+=5;goto B4b130e;
case 0x4b1310:c.instructions+=4;goto B4b1310;
case 0x4b1311:c.instructions+=3;goto B4b1311;
case 0x4b1312:c.instructions+=2;goto B4b1312;
case 0x4b1315:c.instructions+=1;goto B4b1315;
case 0x4b1318:goto L4b1318;
case 0x4b131a:c.instructions+=3;goto B4b131a;
case 0x4b131d:c.instructions+=2;goto B4b131d;
case 0x4b1320:c.instructions+=1;goto B4b1320;
case 0x4b1321:goto L4b1321;
case 0x4b1322:c.instructions+=5;goto B4b1322;
case 0x4b1324:c.instructions+=4;goto B4b1324;
case 0x4b1325:c.instructions+=3;goto B4b1325;
case 0x4b1326:c.instructions+=2;goto B4b1326;
case 0x4b1329:c.instructions+=1;goto B4b1329;
case 0x4b1330:goto L4b1330;
case 0x4b1331:c.instructions+=2;goto B4b1331;
case 0x4b1333:c.instructions+=1;goto B4b1333;
case 0x4b1338:goto L4b1338;
case 0x4b133d:c.instructions+=1;goto B4b133d;
case 0x4b133f:goto L4b133f;
case 0x4b1340:c.instructions+=1;goto B4b1340;
case 0x4b1345:goto L4b1345;
case 0x4b1348:goto L4b1348;
case 0x4b134a:c.instructions+=2;goto B4b134a;
case 0x4b134b:c.instructions+=1;goto B4b134b;
case 0x4b1350:goto L4b1350;
case 0x4b1356:c.instructions+=1;goto B4b1356;
case 0x4b1360:goto L4b1360;
case 0x4b1361:c.instructions+=17;goto B4b1361;
case 0x4b1363:c.instructions+=16;goto B4b1363;
case 0x4b1365:c.instructions+=15;goto B4b1365;
case 0x4b136a:c.instructions+=14;goto B4b136a;
case 0x4b1370:c.instructions+=13;goto B4b1370;
case 0x4b1371:c.instructions+=12;goto B4b1371;
case 0x4b1378:c.instructions+=11;goto B4b1378;
case 0x4b137b:c.instructions+=10;goto B4b137b;
case 0x4b137c:c.instructions+=9;goto B4b137c;
case 0x4b137e:c.instructions+=8;goto B4b137e;
case 0x4b1385:c.instructions+=7;goto B4b1385;
case 0x4b1386:c.instructions+=6;goto B4b1386;
case 0x4b1388:c.instructions+=5;goto B4b1388;
case 0x4b1389:c.instructions+=4;goto B4b1389;
case 0x4b138e:c.instructions+=3;goto B4b138e;
case 0x4b1391:c.instructions+=2;goto B4b1391;
case 0x4b1394:c.instructions+=1;goto B4b1394;
case 0x4b1399:goto L4b1399;
case 0x4b139b:c.instructions+=1;goto B4b139b;
case 0x4b13a1:goto L4b13a1;
case 0x4b13a4:c.instructions+=1;goto B4b13a4;
case 0x4b13a9:goto L4b13a9;
case 0x4b13ab:c.instructions+=1;goto B4b13ab;
case 0x4b13b1:goto L4b13b1;
case 0x4b13b2:c.instructions+=1;goto B4b13b2;
case 0x4b13b4:goto L4b13b4;
case 0x4b13b7:goto L4b13b7;
case 0x4b13b8:c.instructions+=1;goto B4b13b8;
case 0x4b13bd:goto L4b13bd;
case 0x4b13bf:c.instructions+=7;goto B4b13bf;
case 0x4b13c5:c.instructions+=6;goto B4b13c5;
case 0x4b13c8:c.instructions+=5;goto B4b13c8;
case 0x4b13cb:c.instructions+=4;goto B4b13cb;
case 0x4b13ce:c.instructions+=3;goto B4b13ce;
case 0x4b13d1:c.instructions+=2;goto B4b13d1;
case 0x4b13d3:c.instructions+=1;goto B4b13d3;
case 0x4b13d5:goto L4b13d5;
case 0x4b13d7:c.instructions+=1;goto B4b13d7;
case 0x4b13dd:goto L4b13dd;
case 0x4b13df:c.instructions+=1;goto B4b13df;
case 0x4b13e5:goto L4b13e5;
case 0x4b13e9:c.instructions+=2;goto B4b13e9;
case 0x4b13ea:c.instructions+=1;goto B4b13ea;
case 0x4b13ef:goto L4b13ef;
case 0x4b13f2:c.instructions+=3;goto B4b13f2;
case 0x4b13f4:c.instructions+=2;goto B4b13f4;
case 0x4b13f7:c.instructions+=1;goto B4b13f7;
case 0x4b13fd:goto L4b13fd;
case 0x4b1400:c.instructions+=2;goto B4b1400;
case 0x4b1405:c.instructions+=1;goto B4b1405;
case 0x4b140b:goto L4b140b;
case 0x4b1410:c.instructions+=1;goto B4b1410;
case 0x4b1416:goto L4b1416;
case 0x4b141a:c.instructions+=1;goto B4b141a;
case 0x4b1420:goto L4b1420;
case 0x4b1422:c.instructions+=1;goto B4b1422;
case 0x4b1427:goto L4b1427;
case 0x4b142a:c.instructions+=5;goto B4b142a;
case 0x4b142d:c.instructions+=4;goto B4b142d;
case 0x4b142f:c.instructions+=3;goto B4b142f;
case 0x4b1431:c.instructions+=2;goto B4b1431;
case 0x4b1434:c.instructions+=1;goto B4b1434;
case 0x4b1436:goto L4b1436;
case 0x4b1437:c.instructions+=2;goto B4b1437;
case 0x4b1439:c.instructions+=1;goto B4b1439;
case 0x4b143e:goto L4b143e;
case 0x4b1440:goto L4b1440;
case 0x4b1442:c.instructions+=2;goto B4b1442;
case 0x4b1449:c.instructions+=1;goto B4b1449;
case 0x4b144e:goto L4b144e;
case 0x4b1451:c.instructions+=2;goto B4b1451;
case 0x4b1453:c.instructions+=1;goto B4b1453;
case 0x4b1455:goto L4b1455;
case 0x4b145b:c.instructions+=3;goto B4b145b;
case 0x4b145e:c.instructions+=2;goto B4b145e;
case 0x4b1461:c.instructions+=1;goto B4b1461;
case 0x4b1463:goto L4b1463;
case 0x4b1465:goto L4b1465;
case 0x4b1468:c.instructions+=12;goto B4b1468;
case 0x4b146b:c.instructions+=11;goto B4b146b;
case 0x4b146d:c.instructions+=10;goto B4b146d;
case 0x4b1470:c.instructions+=9;goto B4b1470;
case 0x4b1473:c.instructions+=8;goto B4b1473;
case 0x4b1475:c.instructions+=7;goto B4b1475;
case 0x4b1479:c.instructions+=6;goto B4b1479;
case 0x4b147c:c.instructions+=5;goto B4b147c;
case 0x4b147f:c.instructions+=4;goto B4b147f;
case 0x4b1482:c.instructions+=3;goto B4b1482;
case 0x4b1483:c.instructions+=2;goto B4b1483;
case 0x4b1488:c.instructions+=1;goto B4b1488;
case 0x4b148d:goto L4b148d;
case 0x4b1490:c.instructions+=4;goto B4b1490;
case 0x4b1493:c.instructions+=3;goto B4b1493;
case 0x4b1497:c.instructions+=2;goto B4b1497;
case 0x4b149a:c.instructions+=1;goto B4b149a;
case 0x4b149c:goto L4b149c;
case 0x4b14a1:goto L4b14a1;
case 0x4b14a2:c.instructions+=3;goto B4b14a2;
case 0x4b14a3:c.instructions+=2;goto B4b14a3;
case 0x4b14a8:c.instructions+=1;goto B4b14a8;
case 0x4b14ad:goto L4b14ad;
case 0x4b14b0:c.instructions+=1;goto B4b14b0;
case 0x4b14b2:goto L4b14b2;
case 0x4b14b7:goto L4b14b7;
case 0x4b14b8:c.instructions+=3;goto B4b14b8;
case 0x4b14b9:c.instructions+=2;goto B4b14b9;
case 0x4b14be:c.instructions+=1;goto B4b14be;
case 0x4b14c3:goto L4b14c3;
case 0x4b14c6:goto L4b14c6;
case 0x4b14c7:c.instructions+=2;goto B4b14c7;
case 0x4b14cc:c.instructions+=1;goto B4b14cc;
case 0x4b14d1:goto L4b14d1;
case 0x4b14d4:c.instructions+=10;goto B4b14d4;
case 0x4b14d7:c.instructions+=9;goto B4b14d7;
case 0x4b14dd:c.instructions+=8;goto B4b14dd;
case 0x4b14e0:c.instructions+=7;goto B4b14e0;
case 0x4b14e4:c.instructions+=6;goto B4b14e4;
case 0x4b14e7:c.instructions+=5;goto B4b14e7;
case 0x4b14ea:c.instructions+=4;goto B4b14ea;
case 0x4b14eb:c.instructions+=3;goto B4b14eb;
case 0x4b14ee:c.instructions+=2;goto B4b14ee;
case 0x4b14f1:c.instructions+=1;goto B4b14f1;
case 0x4b14f4:goto L4b14f4;
case 0x4b14f5:c.instructions+=2;goto B4b14f5;
case 0x4b14f8:c.instructions+=1;goto B4b14f8;
case 0x4b14fd:goto L4b14fd;
case 0x4b14ff:c.instructions+=1;goto B4b14ff;
case 0x4b1505:goto L4b1505;
case 0x4b1506:goto L4b1506;
case 0x4b1509:c.instructions+=6;goto B4b1509;
case 0x4b150a:c.instructions+=5;goto B4b150a;
case 0x4b150b:c.instructions+=4;goto B4b150b;
case 0x4b1512:c.instructions+=3;goto B4b1512;
case 0x4b1514:c.instructions+=2;goto B4b1514;
case 0x4b1515:c.instructions+=1;goto B4b1515;
case 0x4b1520:goto L4b1520;
case 0x4b1521:c.instructions+=5;goto B4b1521;
case 0x4b1523:c.instructions+=4;goto B4b1523;
case 0x4b1529:c.instructions+=3;goto B4b1529;
case 0x4b152f:c.instructions+=2;goto B4b152f;
case 0x4b1531:c.instructions+=1;goto B4b1531;
case 0x4b1533:goto L4b1533;
case 0x4b1534:c.instructions+=3;goto B4b1534;
case 0x4b153a:c.instructions+=2;goto B4b153a;
case 0x4b153c:c.instructions+=1;goto B4b153c;
case 0x4b1541:goto L4b1541;
case 0x4b1547:c.instructions+=3;goto B4b1547;
case 0x4b154a:c.instructions+=2;goto B4b154a;
case 0x4b154c:c.instructions+=1;goto B4b154c;
case 0x4b154e:goto L4b154e;
case 0x4b1550:c.instructions+=2;goto B4b1550;
case 0x4b1552:c.instructions+=1;goto B4b1552;
case 0x4b1554:goto L4b1554;
case 0x4b1557:c.instructions+=2;goto B4b1557;
case 0x4b1559:c.instructions+=1;goto B4b1559;
case 0x4b155b:goto L4b155b;
case 0x4b155e:c.instructions+=1;goto B4b155e;
case 0x4b1560:goto L4b1560;
case 0x4b1562:goto L4b1562;
case 0x4b1565:c.instructions+=2;goto B4b1565;
case 0x4b1567:c.instructions+=1;goto B4b1567;
case 0x4b1569:goto L4b1569;
case 0x4b156b:c.instructions+=1;goto B4b156b;
case 0x4b1570:goto L4b1570;
case 0x4b1572:goto L4b1572;
case 0x4b1577:goto L4b1577;
case 0x4b1581:c.instructions+=1;goto B4b1581;
case 0x4b1582:goto L4b1582;
case 0x4b1583:c.instructions+=1;goto B4b1583;
case 0x4b1590:goto L4b1590;
case 0x4b1591:c.instructions+=5;goto B4b1591;
case 0x4b1593:c.instructions+=4;goto B4b1593;
case 0x4b1594:c.instructions+=3;goto B4b1594;
case 0x4b159a:c.instructions+=2;goto B4b159a;
case 0x4b159c:c.instructions+=1;goto B4b159c;
case 0x4b15a1:goto L4b15a1;
case 0x4b15a2:c.instructions+=5;goto B4b15a2;
case 0x4b15a8:c.instructions+=4;goto B4b15a8;
case 0x4b15a9:c.instructions+=3;goto B4b15a9;
case 0x4b15ab:c.instructions+=2;goto B4b15ab;
case 0x4b15b1:c.instructions+=1;goto B4b15b1;
case 0x4b15b6:goto L4b15b6;
case 0x4b15bc:c.instructions+=2;goto B4b15bc;
case 0x4b15be:c.instructions+=1;goto B4b15be;
case 0x4b15c0:goto L4b15c0;
case 0x4b15c3:c.instructions+=1;goto B4b15c3;
case 0x4b15c5:goto L4b15c5;
case 0x4b15c7:goto L4b15c7;
case 0x4b15cd:c.instructions+=1;goto B4b15cd;
case 0x4b15cf:goto L4b15cf;
case 0x4b15d2:c.instructions+=2;goto B4b15d2;
case 0x4b15d3:c.instructions+=1;goto B4b15d3;
case 0x4b15d8:goto L4b15d8;
case 0x4b15da:goto L4b15da;
case 0x4b15dd:c.instructions+=2;goto B4b15dd;
case 0x4b15de:c.instructions+=1;goto B4b15de;
case 0x4b15e3:goto L4b15e3;
case 0x4b15e9:c.instructions+=3;goto B4b15e9;
case 0x4b15ec:c.instructions+=2;goto B4b15ec;
case 0x4b15ee:c.instructions+=1;goto B4b15ee;
case 0x4b15f0:goto L4b15f0;
case 0x4b15f3:c.instructions+=1;goto B4b15f3;
case 0x4b15f5:goto L4b15f5;
case 0x4b15f7:goto L4b15f7;
case 0x4b15fd:c.instructions+=1;goto B4b15fd;
case 0x4b15ff:goto L4b15ff;
case 0x4b1602:c.instructions+=2;goto B4b1602;
case 0x4b1603:c.instructions+=1;goto B4b1603;
case 0x4b1608:goto L4b1608;
case 0x4b160a:goto L4b160a;
case 0x4b160d:c.instructions+=2;goto B4b160d;
case 0x4b160e:c.instructions+=1;goto B4b160e;
case 0x4b1613:goto L4b1613;
case 0x4b1616:c.instructions+=3;goto B4b1616;
case 0x4b1619:c.instructions+=2;goto B4b1619;
case 0x4b161b:c.instructions+=1;goto B4b161b;
case 0x4b161d:goto L4b161d;
case 0x4b1620:c.instructions+=1;goto B4b1620;
case 0x4b1622:goto L4b1622;
case 0x4b1624:goto L4b1624;
case 0x4b1627:c.instructions+=1;goto B4b1627;
case 0x4b1629:goto L4b1629;
case 0x4b162c:c.instructions+=2;goto B4b162c;
case 0x4b162d:c.instructions+=1;goto B4b162d;
case 0x4b1632:goto L4b1632;
case 0x4b1634:goto L4b1634;
case 0x4b1637:c.instructions+=2;goto B4b1637;
case 0x4b1638:c.instructions+=1;goto B4b1638;
case 0x4b163d:goto L4b163d;
case 0x4b1640:c.instructions+=3;goto B4b1640;
case 0x4b1643:c.instructions+=2;goto B4b1643;
case 0x4b1645:c.instructions+=1;goto B4b1645;
case 0x4b1647:goto L4b1647;
case 0x4b164a:c.instructions+=1;goto B4b164a;
case 0x4b164c:goto L4b164c;
case 0x4b164e:goto L4b164e;
case 0x4b1651:c.instructions+=1;goto B4b1651;
case 0x4b1653:goto L4b1653;
case 0x4b1656:c.instructions+=2;goto B4b1656;
case 0x4b1657:c.instructions+=1;goto B4b1657;
case 0x4b165c:goto L4b165c;
case 0x4b165f:c.instructions+=3;goto B4b165f;
case 0x4b1660:c.instructions+=2;goto B4b1660;
case 0x4b1661:c.instructions+=1;goto B4b1661;
case 0x4b1662:goto L4b1662;
case 0x4b1665:c.instructions+=2;goto B4b1665;
case 0x4b1666:c.instructions+=1;goto B4b1666;
case 0x4b166b:goto L4b166b;
case 0x4b166e:c.instructions+=3;goto B4b166e;
case 0x4b166f:c.instructions+=2;goto B4b166f;
case 0x4b1670:c.instructions+=1;goto B4b1670;
case 0x4b1680:goto L4b1680;
case 0x4b1682:c.instructions+=16;goto B4b1682;
case 0x4b1687:c.instructions+=15;goto B4b1687;
case 0x4b168d:c.instructions+=14;goto B4b168d;
case 0x4b168e:c.instructions+=13;goto B4b168e;
case 0x4b1695:c.instructions+=12;goto B4b1695;
case 0x4b1696:c.instructions+=11;goto B4b1696;
case 0x4b1697:c.instructions+=10;goto B4b1697;
case 0x4b1698:c.instructions+=9;goto B4b1698;
case 0x4b169a:c.instructions+=8;goto B4b169a;
case 0x4b169f:c.instructions+=7;goto B4b169f;
case 0x4b16a2:c.instructions+=6;goto B4b16a2;
case 0x4b16a7:c.instructions+=5;goto B4b16a7;
case 0x4b16a8:c.instructions+=4;goto B4b16a8;
case 0x4b16ac:c.instructions+=3;goto B4b16ac;
case 0x4b16b2:c.instructions+=2;goto B4b16b2;
case 0x4b16bc:c.instructions+=1;goto B4b16bc;
case 0x4b16c1:goto L4b16c1;
case 0x4b16c3:c.instructions+=12;goto B4b16c3;
case 0x4b16c9:c.instructions+=11;goto B4b16c9;
case 0x4b16cd:c.instructions+=10;goto B4b16cd;
case 0x4b16d0:c.instructions+=9;goto B4b16d0;
case 0x4b16d3:c.instructions+=8;goto B4b16d3;
case 0x4b16d8:c.instructions+=7;goto B4b16d8;
case 0x4b16dc:c.instructions+=6;goto B4b16dc;
case 0x4b16e0:c.instructions+=5;goto B4b16e0;
case 0x4b16e5:c.instructions+=4;goto B4b16e5;
case 0x4b16e6:c.instructions+=3;goto B4b16e6;
case 0x4b16ec:c.instructions+=2;goto B4b16ec;
case 0x4b16f2:c.instructions+=1;goto B4b16f2;
case 0x4b16f7:goto L4b16f7;
case 0x4b16fb:c.instructions+=7;goto B4b16fb;
case 0x4b16fe:c.instructions+=6;goto B4b16fe;
case 0x4b16ff:c.instructions+=5;goto B4b16ff;
case 0x4b1701:c.instructions+=4;goto B4b1701;
case 0x4b1702:c.instructions+=3;goto B4b1702;
case 0x4b1709:c.instructions+=2;goto B4b1709;
case 0x4b170c:c.instructions+=1;goto B4b170c;
case 0x4b1710:goto L4b1710;
case 0x4b1712:c.instructions+=9;goto B4b1712;
case 0x4b1717:c.instructions+=8;goto B4b1717;
case 0x4b171d:c.instructions+=7;goto B4b171d;
case 0x4b171e:c.instructions+=6;goto B4b171e;
case 0x4b1725:c.instructions+=5;goto B4b1725;
case 0x4b1726:c.instructions+=4;goto B4b1726;
case 0x4b1727:c.instructions+=3;goto B4b1727;
case 0x4b172c:c.instructions+=2;goto B4b172c;
case 0x4b172e:c.instructions+=1;goto B4b172e;
case 0x4b1733:goto L4b1733;
case 0x4b1736:c.instructions+=4;goto B4b1736;
case 0x4b173a:c.instructions+=3;goto B4b173a;
case 0x4b173c:c.instructions+=2;goto B4b173c;
case 0x4b1744:c.instructions+=1;goto B4b1744;
case 0x4b1746:goto L4b1746;
case 0x4b174a:c.instructions+=3;goto B4b174a;
case 0x4b174b:c.instructions+=2;goto B4b174b;
case 0x4b174d:c.instructions+=1;goto B4b174d;
case 0x4b1752:goto L4b1752;
case 0x4b1754:c.instructions+=1;goto B4b1754;
case 0x4b1756:goto L4b1756;
case 0x4b1759:c.instructions+=1;goto B4b1759;
case 0x4b175b:goto L4b175b;
case 0x4b175d:goto L4b175d;
case 0x4b1760:c.instructions+=10;goto B4b1760;
case 0x4b1763:c.instructions+=9;goto B4b1763;
case 0x4b1765:c.instructions+=8;goto B4b1765;
case 0x4b1768:c.instructions+=7;goto B4b1768;
case 0x4b176a:c.instructions+=6;goto B4b176a;
case 0x4b176e:c.instructions+=5;goto B4b176e;
case 0x4b1771:c.instructions+=4;goto B4b1771;
case 0x4b1772:c.instructions+=3;goto B4b1772;
case 0x4b1779:c.instructions+=2;goto B4b1779;
case 0x4b177c:c.instructions+=1;goto B4b177c;
case 0x4b1780:goto L4b1780;
case 0x4b1783:c.instructions+=11;goto B4b1783;
case 0x4b1787:c.instructions+=10;goto B4b1787;
case 0x4b1788:c.instructions+=9;goto B4b1788;
case 0x4b178b:c.instructions+=8;goto B4b178b;
case 0x4b178c:c.instructions+=7;goto B4b178c;
case 0x4b1790:c.instructions+=6;goto B4b1790;
case 0x4b1792:c.instructions+=5;goto B4b1792;
case 0x4b1794:c.instructions+=4;goto B4b1794;
case 0x4b1795:c.instructions+=3;goto B4b1795;
case 0x4b1796:c.instructions+=2;goto B4b1796;
case 0x4b179a:c.instructions+=1;goto B4b179a;
case 0x4b179c:goto L4b179c;
case 0x4b179f:c.instructions+=1;goto B4b179f;
case 0x4b17a1:goto L4b17a1;
case 0x4b17a3:goto L4b17a3;
case 0x4b17a6:c.instructions+=3;goto B4b17a6;
case 0x4b17a8:c.instructions+=2;goto B4b17a8;
case 0x4b17ab:c.instructions+=1;goto B4b17ab;
case 0x4b17ad:goto L4b17ad;
case 0x4b17b0:c.instructions+=2;goto B4b17b0;
case 0x4b17b4:c.instructions+=1;goto B4b17b4;
case 0x4b17b6:goto L4b17b6;
case 0x4b17be:goto L4b17be;
case 0x4b17c3:goto L4b17c3;
case 0x4b17c7:c.instructions+=2;goto B4b17c7;
case 0x4b17cc:c.instructions+=1;goto B4b17cc;
case 0x4b17d0:goto L4b17d0;
case 0x4b17d2:c.instructions+=1;goto B4b17d2;
case 0x4b17d4:goto L4b17d4;
case 0x4b17d7:c.instructions+=1;goto B4b17d7;
case 0x4b17d9:goto L4b17d9;
case 0x4b17db:goto L4b17db;
case 0x4b17dd:c.instructions+=1;goto B4b17dd;
case 0x4b17e3:goto L4b17e3;
case 0x4b17e9:c.instructions+=6;goto B4b17e9;
case 0x4b17ef:c.instructions+=5;goto B4b17ef;
case 0x4b17f2:c.instructions+=4;goto B4b17f2;
case 0x4b17f5:c.instructions+=3;goto B4b17f5;
case 0x4b17fb:c.instructions+=2;goto B4b17fb;
case 0x4b17fd:c.instructions+=1;goto B4b17fd;
case 0x4b17ff:goto L4b17ff;
case 0x4b1805:c.instructions+=2;goto B4b1805;
case 0x4b1806:c.instructions+=1;goto B4b1806;
case 0x4b180b:goto L4b180b;
case 0x4b1811:c.instructions+=4;goto B4b1811;
case 0x4b1814:c.instructions+=3;goto B4b1814;
case 0x4b1816:c.instructions+=2;goto B4b1816;
case 0x4b181c:c.instructions+=1;goto B4b181c;
case 0x4b1821:goto L4b1821;
case 0x4b1827:c.instructions+=3;goto B4b1827;
case 0x4b182a:c.instructions+=2;goto B4b182a;
case 0x4b1830:c.instructions+=1;goto B4b1830;
case 0x4b1835:goto L4b1835;
case 0x4b183b:c.instructions+=2;goto B4b183b;
case 0x4b1841:c.instructions+=1;goto B4b1841;
case 0x4b1846:goto L4b1846;
case 0x4b1847:c.instructions+=3;goto B4b1847;
case 0x4b184c:c.instructions+=2;goto B4b184c;
case 0x4b184d:c.instructions+=1;goto B4b184d;
case 0x4b1852:goto L4b1852;
case 0x4b1854:goto L4b1854;
case 0x4b1856:c.instructions+=1;goto B4b1856;
case 0x4b185b:goto L4b185b;
case 0x4b1861:c.instructions+=2;goto B4b1861;
case 0x4b1863:c.instructions+=1;goto B4b1863;
case 0x4b1865:goto L4b1865;
case 0x4b1866:c.instructions+=2;goto B4b1866;
case 0x4b1867:c.instructions+=1;goto B4b1867;
case 0x4b186c:goto L4b186c;
case 0x4b186f:c.instructions+=1;goto B4b186f;
case 0x4b1871:goto L4b1871;
case 0x4b1874:c.instructions+=4;goto B4b1874;
case 0x4b1875:c.instructions+=3;goto B4b1875;
case 0x4b187a:c.instructions+=2;goto B4b187a;
case 0x4b187b:c.instructions+=1;goto B4b187b;
case 0x4b1880:goto L4b1880;
case 0x4b1883:goto L4b1883;
case 0x4b188a:c.instructions+=1;goto B4b188a;
case 0x4b188c:goto L4b188c;
case 0x4b1891:goto L4b1891;
case 0x4b1894:c.instructions+=2;goto B4b1894;
case 0x4b1896:c.instructions+=1;goto B4b1896;
case 0x4b1898:goto L4b1898;
case 0x4b189c:goto L4b189c;
case 0x4b189e:c.instructions+=4;goto B4b189e;
case 0x4b18a4:c.instructions+=3;goto B4b18a4;
case 0x4b18a9:c.instructions+=2;goto B4b18a9;
case 0x4b18aa:c.instructions+=1;goto B4b18aa;
case 0x4b18ae:goto L4b18ae;
case 0x4b18b0:c.instructions+=1;goto B4b18b0;
case 0x4b18b2:goto L4b18b2;
case 0x4b18b5:c.instructions+=2;goto B4b18b5;
case 0x4b18b7:c.instructions+=1;goto B4b18b7;
case 0x4b18b9:goto L4b18b9;
case 0x4b18bc:c.instructions+=1;goto B4b18bc;
case 0x4b18be:goto L4b18be;
case 0x4b18c0:goto L4b18c0;
case 0x4b18c2:c.instructions+=1;goto B4b18c2;
case 0x4b18c4:goto L4b18c4;
case 0x4b18c7:c.instructions+=1;goto B4b18c7;
case 0x4b18c9:goto L4b18c9;
case 0x4b18cb:goto L4b18cb;
case 0x4b18cd:c.instructions+=1;goto B4b18cd;
case 0x4b18cf:goto L4b18cf;
case 0x4b18d2:c.instructions+=2;goto B4b18d2;
case 0x4b18d4:c.instructions+=1;goto B4b18d4;
case 0x4b18d6:goto L4b18d6;
case 0x4b18d9:c.instructions+=1;goto B4b18d9;
case 0x4b18de:goto L4b18de;
case 0x4b18e0:c.instructions+=1;goto B4b18e0;
case 0x4b18e5:goto L4b18e5;
case 0x4b18e9:c.instructions+=2;goto B4b18e9;
case 0x4b18eb:c.instructions+=1;goto B4b18eb;
case 0x4b18ed:goto L4b18ed;
case 0x4b18f1:c.instructions+=4;goto B4b18f1;
case 0x4b18f4:c.instructions+=3;goto B4b18f4;
case 0x4b18f9:c.instructions+=2;goto B4b18f9;
case 0x4b18fa:c.instructions+=1;goto B4b18fa;
case 0x4b18ff:goto L4b18ff;
case 0x4b1903:c.instructions+=4;goto B4b1903;
case 0x4b1906:c.instructions+=3;goto B4b1906;
case 0x4b1909:c.instructions+=2;goto B4b1909;
case 0x4b190b:c.instructions+=1;goto B4b190b;
case 0x4b190d:goto L4b190d;
case 0x4b1911:c.instructions+=3;goto B4b1911;
case 0x4b1912:c.instructions+=2;goto B4b1912;
case 0x4b1913:c.instructions+=1;goto B4b1913;
case 0x4b1918:goto L4b1918;
case 0x4b191b:c.instructions+=2;goto B4b191b;
case 0x4b191d:c.instructions+=1;goto B4b191d;
case 0x4b1922:goto L4b1922;
case 0x4b1927:c.instructions+=2;goto B4b1927;
case 0x4b192c:c.instructions+=1;goto B4b192c;
case 0x4b192e:goto L4b192e;
case 0x4b1932:c.instructions+=4;goto B4b1932;
case 0x4b1935:c.instructions+=3;goto B4b1935;
case 0x4b1937:c.instructions+=2;goto B4b1937;
case 0x4b1938:c.instructions+=1;goto B4b1938;
case 0x4b193d:goto L4b193d;
case 0x4b1941:c.instructions+=4;goto B4b1941;
case 0x4b1944:c.instructions+=3;goto B4b1944;
case 0x4b1947:c.instructions+=2;goto B4b1947;
case 0x4b1949:c.instructions+=1;goto B4b1949;
case 0x4b194b:goto L4b194b;
case 0x4b194f:c.instructions+=3;goto B4b194f;
case 0x4b1950:c.instructions+=2;goto B4b1950;
case 0x4b1951:c.instructions+=1;goto B4b1951;
case 0x4b1956:goto L4b1956;
case 0x4b1959:c.instructions+=2;goto B4b1959;
case 0x4b195b:c.instructions+=1;goto B4b195b;
case 0x4b1960:goto L4b1960;
case 0x4b1965:c.instructions+=1;goto B4b1965;
case 0x4b196a:goto L4b196a;
case 0x4b196b:c.instructions+=2;goto B4b196b;
case 0x4b196c:c.instructions+=1;goto B4b196c;
case 0x4b1971:goto L4b1971;
case 0x4b1974:goto L4b1974;
case 0x4b1979:c.instructions+=8;goto B4b1979;
case 0x4b197a:c.instructions+=7;goto B4b197a;
case 0x4b197b:c.instructions+=6;goto B4b197b;
case 0x4b197c:c.instructions+=5;goto B4b197c;
case 0x4b197d:c.instructions+=4;goto B4b197d;
case 0x4b1982:c.instructions+=3;goto B4b1982;
case 0x4b1983:c.instructions+=2;goto B4b1983;
case 0x4b1986:c.instructions+=1;goto B4b1986;
case 0x4b1990:goto L4b1990;
case 0x4b1993:c.instructions+=4;goto B4b1993;
case 0x4b1994:c.instructions+=3;goto B4b1994;
case 0x4b1997:c.instructions+=2;goto B4b1997;
case 0x4b1999:c.instructions+=1;goto B4b1999;
case 0x4b199f:goto L4b199f;
case 0x4b19a2:c.instructions+=5;goto B4b19a2;
case 0x4b19a3:c.instructions+=4;goto B4b19a3;
case 0x4b19a6:c.instructions+=3;goto B4b19a6;
case 0x4b19a8:c.instructions+=2;goto B4b19a8;
case 0x4b19a9:c.instructions+=1;goto B4b19a9;
case 0x4b19af:goto L4b19af;
case 0x4b19b1:c.instructions+=6;goto B4b19b1;
case 0x4b19b2:c.instructions+=5;goto B4b19b2;
case 0x4b19b5:c.instructions+=4;goto B4b19b5;
case 0x4b19bb:c.instructions+=3;goto B4b19bb;
case 0x4b19bd:c.instructions+=2;goto B4b19bd;
case 0x4b19bf:c.instructions+=1;goto B4b19bf;
case 0x4b19c1:goto L4b19c1;
case 0x4b19c4:goto L4b19c4;
case 0x4b19c6:c.instructions+=1;goto B4b19c6;
case 0x4b19c8:goto L4b19c8;
case 0x4b19cb:c.instructions+=1;goto B4b19cb;
case 0x4b19cd:goto L4b19cd;
case 0x4b19cf:goto L4b19cf;
case 0x4b19d1:c.instructions+=1;goto B4b19d1;
case 0x4b19d3:goto L4b19d3;
case 0x4b19d5:c.instructions+=1;goto B4b19d5;
case 0x4b19da:goto L4b19da;
case 0x4b19dc:c.instructions+=3;goto B4b19dc;
case 0x4b19dd:c.instructions+=2;goto B4b19dd;
case 0x4b19df:c.instructions+=1;goto B4b19df;
case 0x4b19e2:goto L4b19e2;
case 0x4b19e5:c.instructions+=2;goto B4b19e5;
case 0x4b19e7:c.instructions+=1;goto B4b19e7;
case 0x4b19e9:goto L4b19e9;
case 0x4b19ec:c.instructions+=1;goto B4b19ec;
case 0x4b19ee:goto L4b19ee;
case 0x4b19f0:goto L4b19f0;
case 0x4b19f2:c.instructions+=1;goto B4b19f2;
case 0x4b19f4:goto L4b19f4;
case 0x4b19f7:c.instructions+=1;goto B4b19f7;
case 0x4b19f9:goto L4b19f9;
case 0x4b19fb:goto L4b19fb;
case 0x4b19fd:c.instructions+=1;goto B4b19fd;
case 0x4b19ff:goto L4b19ff;
case 0x4b1a02:c.instructions+=2;goto B4b1a02;
case 0x4b1a04:c.instructions+=1;goto B4b1a04;
case 0x4b1a06:goto L4b1a06;
case 0x4b1a09:c.instructions+=1;goto B4b1a09;
case 0x4b1a0b:goto L4b1a0b;
case 0x4b1a0d:c.instructions+=1;goto B4b1a0d;
case 0x4b1a0f:goto L4b1a0f;
case 0x4b1a11:c.instructions+=2;goto B4b1a11;
case 0x4b1a12:c.instructions+=1;goto B4b1a12;
case 0x4b1a14:goto L4b1a14;
case 0x4b1a17:c.instructions+=1;goto B4b1a17;
case 0x4b1a19:goto L4b1a19;
case 0x4b1a1b:goto L4b1a1b;
case 0x4b1a1d:c.instructions+=1;goto B4b1a1d;
case 0x4b1a1f:goto L4b1a1f;
case 0x4b1a22:c.instructions+=2;goto B4b1a22;
case 0x4b1a24:c.instructions+=1;goto B4b1a24;
case 0x4b1a26:goto L4b1a26;
case 0x4b1a29:c.instructions+=1;goto B4b1a29;
case 0x4b1a2b:goto L4b1a2b;
case 0x4b1a2d:c.instructions+=1;goto B4b1a2d;
case 0x4b1a30:goto L4b1a30;
case 0x4b1a32:c.instructions+=1;goto B4b1a32;
case 0x4b1a34:goto L4b1a34;
case 0x4b1a37:c.instructions+=1;goto B4b1a37;
case 0x4b1a39:goto L4b1a39;
case 0x4b1a3b:goto L4b1a3b;
case 0x4b1a3d:c.instructions+=1;goto B4b1a3d;
case 0x4b1a3f:goto L4b1a3f;
case 0x4b1a41:c.instructions+=1;goto B4b1a41;
case 0x4b1a46:goto L4b1a46;
case 0x4b1a48:goto L4b1a48;
case 0x4b1a49:c.instructions+=1;goto B4b1a49;
case 0x4b1a4a:goto L4b1a4a;
case 0x4b1a4b:c.instructions+=1;goto B4b1a4b;
case 0x4b1a50:goto L4b1a50;
case 0x4b1a54:c.instructions+=5;goto B4b1a54;
case 0x4b1a56:c.instructions+=4;goto B4b1a56;
case 0x4b1a57:c.instructions+=3;goto B4b1a57;
case 0x4b1a58:c.instructions+=2;goto B4b1a58;
case 0x4b1a5a:c.instructions+=1;goto B4b1a5a;
case 0x4b1a5c:goto L4b1a5c;
case 0x4b1a5f:c.instructions+=5;goto B4b1a5f;
case 0x4b1a62:c.instructions+=4;goto B4b1a62;
case 0x4b1a68:c.instructions+=3;goto B4b1a68;
case 0x4b1a6a:c.instructions+=2;goto B4b1a6a;
case 0x4b1a6c:c.instructions+=1;goto B4b1a6c;
case 0x4b1a6e:goto L4b1a6e;
case 0x4b1a71:c.instructions+=3;goto B4b1a71;
case 0x4b1a73:c.instructions+=2;goto B4b1a73;
case 0x4b1a75:c.instructions+=1;goto B4b1a75;
case 0x4b1a7a:goto L4b1a7a;
case 0x4b1a80:c.instructions+=7;goto B4b1a80;
case 0x4b1a83:c.instructions+=6;goto B4b1a83;
case 0x4b1a85:c.instructions+=5;goto B4b1a85;
case 0x4b1a86:c.instructions+=4;goto B4b1a86;
case 0x4b1a88:c.instructions+=3;goto B4b1a88;
case 0x4b1a8e:c.instructions+=2;goto B4b1a8e;
case 0x4b1a8f:c.instructions+=1;goto B4b1a8f;
case 0x4b1a91:goto L4b1a91;
case 0x4b1a97:c.instructions+=2;goto B4b1a97;
case 0x4b1a99:c.instructions+=1;goto B4b1a99;
case 0x4b1a9b:goto L4b1a9b;
case 0x4b1a9e:c.instructions+=3;goto B4b1a9e;
case 0x4b1aa0:c.instructions+=2;goto B4b1aa0;
case 0x4b1aa2:c.instructions+=1;goto B4b1aa2;
case 0x4b1aa7:goto L4b1aa7;
case 0x4b1aad:c.instructions+=6;goto B4b1aad;
case 0x4b1ab0:c.instructions+=5;goto B4b1ab0;
case 0x4b1ab2:c.instructions+=4;goto B4b1ab2;
case 0x4b1ab3:c.instructions+=3;goto B4b1ab3;
case 0x4b1ab5:c.instructions+=2;goto B4b1ab5;
case 0x4b1abb:c.instructions+=1;goto B4b1abb;
case 0x4b1abc:goto L4b1abc;
case 0x4b1ac1:goto L4b1ac1;
case 0x4b1ac4:c.instructions+=3;goto B4b1ac4;
case 0x4b1ac6:c.instructions+=2;goto B4b1ac6;
case 0x4b1ac8:c.instructions+=1;goto B4b1ac8;
case 0x4b1acd:goto L4b1acd;
case 0x4b1acf:c.instructions+=1;goto B4b1acf;
case 0x4b1ad4:goto L4b1ad4;
case 0x4b1ad5:c.instructions+=2;goto B4b1ad5;
case 0x4b1ad6:c.instructions+=1;goto B4b1ad6;
case 0x4b1ae0:goto L4b1ae0;
case 0x4b1ae6:c.instructions+=4;goto B4b1ae6;
case 0x4b1ae7:c.instructions+=3;goto B4b1ae7;
case 0x4b1aee:c.instructions+=2;goto B4b1aee;
case 0x4b1af0:c.instructions+=1;goto B4b1af0;
case 0x4b1af2:goto L4b1af2;
case 0x4b1af9:c.instructions+=2;goto B4b1af9;
case 0x4b1afa:c.instructions+=1;goto B4b1afa;
case 0x4b1aff:goto L4b1aff;
case 0x4b1b00:c.instructions+=6;goto B4b1b00;
case 0x4b1b01:c.instructions+=5;goto B4b1b01;
case 0x4b1b06:c.instructions+=4;goto B4b1b06;
case 0x4b1b0a:c.instructions+=3;goto B4b1b0a;
case 0x4b1b0f:c.instructions+=2;goto B4b1b0f;
case 0x4b1b10:c.instructions+=1;goto B4b1b10;
case 0x4b1b15:goto L4b1b15;
case 0x4b1b18:c.instructions+=1;goto B4b1b18;
case 0x4b1b1a:goto L4b1b1a;
case 0x4b1b21:c.instructions+=2;goto B4b1b21;
case 0x4b1b22:c.instructions+=1;goto B4b1b22;
case 0x4b1b27:goto L4b1b27;
case 0x4b1b28:c.instructions+=4;goto B4b1b28;
case 0x4b1b2c:c.instructions+=3;goto B4b1b2c;
case 0x4b1b31:c.instructions+=2;goto B4b1b31;
case 0x4b1b32:c.instructions+=1;goto B4b1b32;
case 0x4b1b37:goto L4b1b37;
case 0x4b1b3a:goto L4b1b3a;
case 0x4b1b3c:c.instructions+=5;goto B4b1b3c;
case 0x4b1b3e:c.instructions+=4;goto B4b1b3e;
case 0x4b1b42:c.instructions+=3;goto B4b1b42;
case 0x4b1b43:c.instructions+=2;goto B4b1b43;
case 0x4b1b4a:c.instructions+=1;goto B4b1b4a;
case 0x4b1b4f:goto L4b1b4f;
case 0x4b1b50:c.instructions+=2;goto B4b1b50;
case 0x4b1b56:c.instructions+=1;goto B4b1b56;
case 0x4b1b60:goto L4b1b60;
case 0x4b1b61:c.instructions+=6;goto B4b1b61;
case 0x4b1b65:c.instructions+=5;goto B4b1b65;
case 0x4b1b6a:c.instructions+=4;goto B4b1b6a;
case 0x4b1b6b:c.instructions+=3;goto B4b1b6b;
case 0x4b1b6d:c.instructions+=2;goto B4b1b6d;
case 0x4b1b72:c.instructions+=1;goto B4b1b72;
case 0x4b1b74:goto L4b1b74;
case 0x4b1b76:goto L4b1b76;
case 0x4b1b7b:c.instructions+=1;goto B4b1b7b;
case 0x4b1b7d:goto L4b1b7d;
case 0x4b1b82:c.instructions+=1;goto B4b1b82;
case 0x4b1b84:goto L4b1b84;
case 0x4b1b89:goto L4b1b89;
case 0x4b1b8f:c.instructions+=2;goto B4b1b8f;
case 0x4b1b95:c.instructions+=1;goto B4b1b95;
case 0x4b1b97:goto L4b1b97;
case 0x4b1b9b:c.instructions+=3;goto B4b1b9b;
case 0x4b1b9c:c.instructions+=2;goto B4b1b9c;
case 0x4b1b9e:c.instructions+=1;goto B4b1b9e;
case 0x4b1ba3:goto L4b1ba3;
case 0x4b1ba4:c.instructions+=2;goto B4b1ba4;
case 0x4b1ba5:c.instructions+=1;goto B4b1ba5;
case 0x4b1ba8:goto L4b1ba8;
case 0x4b1bad:c.instructions+=1;goto B4b1bad;
case 0x4b1baf:goto L4b1baf;
case 0x4b1bb5:c.instructions+=2;goto B4b1bb5;
case 0x4b1bb6:c.instructions+=1;goto B4b1bb6;
case 0x4b1bbb:goto L4b1bbb;
case 0x4b1bbe:c.instructions+=2;goto B4b1bbe;
case 0x4b1bc0:c.instructions+=1;goto B4b1bc0;
case 0x4b1bc2:goto L4b1bc2;
case 0x4b1bc4:c.instructions+=2;goto B4b1bc4;
case 0x4b1bc6:c.instructions+=1;goto B4b1bc6;
case 0x4b1bcb:goto L4b1bcb;
case 0x4b1bcc:c.instructions+=2;goto B4b1bcc;
case 0x4b1bcd:c.instructions+=1;goto B4b1bcd;
case 0x4b1bd0:goto L4b1bd0;
case 0x4b1bd6:c.instructions+=2;goto B4b1bd6;
case 0x4b1bd7:c.instructions+=1;goto B4b1bd7;
case 0x4b1bdc:goto L4b1bdc;
case 0x4b1bdf:c.instructions+=2;goto B4b1bdf;
case 0x4b1be1:c.instructions+=1;goto B4b1be1;
case 0x4b1be3:goto L4b1be3;
case 0x4b1be5:c.instructions+=2;goto B4b1be5;
case 0x4b1be7:c.instructions+=1;goto B4b1be7;
case 0x4b1bec:goto L4b1bec;
case 0x4b1bed:c.instructions+=2;goto B4b1bed;
case 0x4b1bee:c.instructions+=1;goto B4b1bee;
case 0x4b1c00:goto L4b1c00;
case 0x4b1c01:c.instructions+=14;goto B4b1c01;
case 0x4b1c03:c.instructions+=13;goto B4b1c03;
case 0x4b1c05:c.instructions+=12;goto B4b1c05;
case 0x4b1c0a:c.instructions+=11;goto B4b1c0a;
case 0x4b1c10:c.instructions+=10;goto B4b1c10;
case 0x4b1c11:c.instructions+=9;goto B4b1c11;
case 0x4b1c18:c.instructions+=8;goto B4b1c18;
case 0x4b1c19:c.instructions+=7;goto B4b1c19;
case 0x4b1c1c:c.instructions+=6;goto B4b1c1c;
case 0x4b1c1d:c.instructions+=5;goto B4b1c1d;
case 0x4b1c1e:c.instructions+=4;goto B4b1c1e;
case 0x4b1c20:c.instructions+=3;goto B4b1c20;
case 0x4b1c21:c.instructions+=2;goto B4b1c21;
case 0x4b1c24:c.instructions+=1;goto B4b1c24;
case 0x4b1c29:goto L4b1c29;
case 0x4b1c2c:c.instructions+=7;goto B4b1c2c;
case 0x4b1c2e:c.instructions+=6;goto B4b1c2e;
case 0x4b1c34:c.instructions+=5;goto B4b1c34;
case 0x4b1c37:c.instructions+=4;goto B4b1c37;
case 0x4b1c3d:c.instructions+=3;goto B4b1c3d;
case 0x4b1c3e:c.instructions+=2;goto B4b1c3e;
case 0x4b1c41:c.instructions+=1;goto B4b1c41;
case 0x4b1c46:goto L4b1c46;
case 0x4b1c47:c.instructions+=2;goto B4b1c47;
case 0x4b1c48:c.instructions+=1;goto B4b1c48;
case 0x4b1c4d:goto L4b1c4d;
case 0x4b1c50:c.instructions+=2;goto B4b1c50;
case 0x4b1c52:c.instructions+=1;goto B4b1c52;
case 0x4b1c57:goto L4b1c57;
case 0x4b1c5a:c.instructions+=7;goto B4b1c5a;
case 0x4b1c5b:c.instructions+=6;goto B4b1c5b;
case 0x4b1c5d:c.instructions+=5;goto B4b1c5d;
case 0x4b1c5e:c.instructions+=4;goto B4b1c5e;
case 0x4b1c65:c.instructions+=3;goto B4b1c65;
case 0x4b1c67:c.instructions+=2;goto B4b1c67;
case 0x4b1c68:c.instructions+=1;goto B4b1c68;
case 0x4b1c70:goto L4b1c70;
case 0x4b1c71:c.instructions+=2;goto B4b1c71;
case 0x4b1c73:c.instructions+=1;goto B4b1c73;
case 0x4b1c78:goto L4b1c78;
case 0x4b1c7d:c.instructions+=1;goto B4b1c7d;
case 0x4b1c7f:goto L4b1c7f;
case 0x4b1c80:c.instructions+=1;goto B4b1c80;
case 0x4b1c85:goto L4b1c85;
case 0x4b1c88:goto L4b1c88;
case 0x4b1c8a:c.instructions+=2;goto B4b1c8a;
case 0x4b1c8b:c.instructions+=1;goto B4b1c8b;
case 0x4b1c90:goto L4b1c90;
case 0x4b1c92:c.instructions+=7;goto B4b1c92;
case 0x4b1c97:c.instructions+=6;goto B4b1c97;
case 0x4b1c9d:c.instructions+=5;goto B4b1c9d;
case 0x4b1c9e:c.instructions+=4;goto B4b1c9e;
case 0x4b1ca5:c.instructions+=3;goto B4b1ca5;
case 0x4b1ca6:c.instructions+=2;goto B4b1ca6;
case 0x4b1ca8:c.instructions+=1;goto B4b1ca8;
case 0x4b1cad:goto L4b1cad;
case 0x4b1cb0:c.instructions+=4;goto B4b1cb0;
case 0x4b1cb4:c.instructions+=3;goto B4b1cb4;
case 0x4b1cb6:c.instructions+=2;goto B4b1cb6;
case 0x4b1cbe:c.instructions+=1;goto B4b1cbe;
case 0x4b1cc0:goto L4b1cc0;
case 0x4b1cc4:c.instructions+=3;goto B4b1cc4;
case 0x4b1cc5:c.instructions+=2;goto B4b1cc5;
case 0x4b1cc7:c.instructions+=1;goto B4b1cc7;
case 0x4b1ccc:goto L4b1ccc;
case 0x4b1cd0:c.instructions+=3;goto B4b1cd0;
case 0x4b1cd7:c.instructions+=2;goto B4b1cd7;
case 0x4b1cda:c.instructions+=1;goto B4b1cda;
case 0x4b1cdb:goto L4b1cdb;
case 0x4b1cdf:c.instructions+=4;goto B4b1cdf;
case 0x4b1ce1:c.instructions+=3;goto B4b1ce1;
case 0x4b1ce8:c.instructions+=2;goto B4b1ce8;
case 0x4b1ceb:c.instructions+=1;goto B4b1ceb;
case 0x4b1cf0:goto L4b1cf0;
case 0x4b1cf1:c.instructions+=14;goto B4b1cf1;
case 0x4b1cf3:c.instructions+=13;goto B4b1cf3;
case 0x4b1cf5:c.instructions+=12;goto B4b1cf5;
case 0x4b1cfa:c.instructions+=11;goto B4b1cfa;
case 0x4b1d00:c.instructions+=10;goto B4b1d00;
case 0x4b1d01:c.instructions+=9;goto B4b1d01;
case 0x4b1d08:c.instructions+=8;goto B4b1d08;
case 0x4b1d09:c.instructions+=7;goto B4b1d09;
case 0x4b1d0c:c.instructions+=6;goto B4b1d0c;
case 0x4b1d0d:c.instructions+=5;goto B4b1d0d;
case 0x4b1d0e:c.instructions+=4;goto B4b1d0e;
case 0x4b1d10:c.instructions+=3;goto B4b1d10;
case 0x4b1d11:c.instructions+=2;goto B4b1d11;
case 0x4b1d14:c.instructions+=1;goto B4b1d14;
case 0x4b1d19:goto L4b1d19;
case 0x4b1d1c:c.instructions+=5;goto B4b1d1c;
case 0x4b1d22:c.instructions+=4;goto B4b1d22;
case 0x4b1d28:c.instructions+=3;goto B4b1d28;
case 0x4b1d29:c.instructions+=2;goto B4b1d29;
case 0x4b1d30:c.instructions+=1;goto B4b1d30;
case 0x4b1d35:goto L4b1d35;
case 0x4b1d36:c.instructions+=2;goto B4b1d36;
case 0x4b1d37:c.instructions+=1;goto B4b1d37;
case 0x4b1d3c:goto L4b1d3c;
case 0x4b1d3f:c.instructions+=2;goto B4b1d3f;
case 0x4b1d41:c.instructions+=1;goto B4b1d41;
case 0x4b1d46:goto L4b1d46;
case 0x4b1d49:c.instructions+=7;goto B4b1d49;
case 0x4b1d4a:c.instructions+=6;goto B4b1d4a;
case 0x4b1d4c:c.instructions+=5;goto B4b1d4c;
case 0x4b1d4d:c.instructions+=4;goto B4b1d4d;
case 0x4b1d54:c.instructions+=3;goto B4b1d54;
case 0x4b1d56:c.instructions+=2;goto B4b1d56;
case 0x4b1d57:c.instructions+=1;goto B4b1d57;
case 0x4b1d60:goto L4b1d60;
case 0x4b1d61:c.instructions+=2;goto B4b1d61;
case 0x4b1d63:c.instructions+=1;goto B4b1d63;
case 0x4b1d68:goto L4b1d68;
case 0x4b1d6d:c.instructions+=1;goto B4b1d6d;
case 0x4b1d6f:goto L4b1d6f;
case 0x4b1d70:c.instructions+=1;goto B4b1d70;
case 0x4b1d75:goto L4b1d75;
case 0x4b1d78:goto L4b1d78;
case 0x4b1d7a:c.instructions+=2;goto B4b1d7a;
case 0x4b1d7b:c.instructions+=1;goto B4b1d7b;
case 0x4b1d80:goto L4b1d80;
case 0x4b1d90:goto L4b1d90;
case 0x4b1d92:c.instructions+=7;goto B4b1d92;
case 0x4b1d97:c.instructions+=6;goto B4b1d97;
case 0x4b1d9d:c.instructions+=5;goto B4b1d9d;
case 0x4b1d9e:c.instructions+=4;goto B4b1d9e;
case 0x4b1da5:c.instructions+=3;goto B4b1da5;
case 0x4b1da6:c.instructions+=2;goto B4b1da6;
case 0x4b1da8:c.instructions+=1;goto B4b1da8;
case 0x4b1dad:goto L4b1dad;
case 0x4b1db0:c.instructions+=4;goto B4b1db0;
case 0x4b1db4:c.instructions+=3;goto B4b1db4;
case 0x4b1db6:c.instructions+=2;goto B4b1db6;
case 0x4b1dbe:c.instructions+=1;goto B4b1dbe;
case 0x4b1dc0:goto L4b1dc0;
case 0x4b1dc4:c.instructions+=3;goto B4b1dc4;
case 0x4b1dc5:c.instructions+=2;goto B4b1dc5;
case 0x4b1dc7:c.instructions+=1;goto B4b1dc7;
case 0x4b1dcc:goto L4b1dcc;
case 0x4b1dd0:c.instructions+=3;goto B4b1dd0;
case 0x4b1dd7:c.instructions+=2;goto B4b1dd7;
case 0x4b1dda:c.instructions+=1;goto B4b1dda;
case 0x4b1ddb:goto L4b1ddb;
case 0x4b1ddf:c.instructions+=4;goto B4b1ddf;
case 0x4b1de1:c.instructions+=3;goto B4b1de1;
case 0x4b1de8:c.instructions+=2;goto B4b1de8;
case 0x4b1deb:c.instructions+=1;goto B4b1deb;
case 0x4b1df0:goto L4b1df0;
case 0x4b1df1:c.instructions+=4;goto B4b1df1;
case 0x4b1df3:c.instructions+=3;goto B4b1df3;
case 0x4b1df6:c.instructions+=2;goto B4b1df6;
case 0x4b1df8:c.instructions+=1;goto B4b1df8;
case 0x4b1dfa:goto L4b1dfa;
case 0x4b1dfd:c.instructions+=1;goto B4b1dfd;
case 0x4b1dff:goto L4b1dff;
case 0x4b1e01:goto L4b1e01;
case 0x4b1e04:c.instructions+=1;goto B4b1e04;
case 0x4b1e06:goto L4b1e06;
case 0x4b1e0c:c.instructions+=2;goto B4b1e0c;
case 0x4b1e0d:c.instructions+=1;goto B4b1e0d;
case 0x4b1e12:goto L4b1e12;
case 0x4b1e14:goto L4b1e14;
case 0x4b1e1a:c.instructions+=2;goto B4b1e1a;
case 0x4b1e1b:c.instructions+=1;goto B4b1e1b;
case 0x4b1e20:goto L4b1e20;
case 0x4b1e23:c.instructions+=3;goto B4b1e23;
case 0x4b1e26:c.instructions+=2;goto B4b1e26;
case 0x4b1e28:c.instructions+=1;goto B4b1e28;
case 0x4b1e2a:goto L4b1e2a;
case 0x4b1e2d:c.instructions+=1;goto B4b1e2d;
case 0x4b1e2f:goto L4b1e2f;
case 0x4b1e31:goto L4b1e31;
case 0x4b1e34:c.instructions+=1;goto B4b1e34;
case 0x4b1e36:goto L4b1e36;
case 0x4b1e3c:c.instructions+=2;goto B4b1e3c;
case 0x4b1e3d:c.instructions+=1;goto B4b1e3d;
case 0x4b1e42:goto L4b1e42;
case 0x4b1e45:c.instructions+=2;goto B4b1e45;
case 0x4b1e46:c.instructions+=1;goto B4b1e46;
case 0x4b1e47:goto L4b1e47;
case 0x4b1e4d:c.instructions+=2;goto B4b1e4d;
case 0x4b1e4e:c.instructions+=1;goto B4b1e4e;
case 0x4b1e53:goto L4b1e53;
case 0x4b1e56:c.instructions+=2;goto B4b1e56;
case 0x4b1e57:c.instructions+=1;goto B4b1e57;
case 0x4b1e60:goto L4b1e60;
case 0x4b1e64:c.instructions+=6;goto B4b1e64;
case 0x4b1e66:c.instructions+=5;goto B4b1e66;
case 0x4b1e67:c.instructions+=4;goto B4b1e67;
case 0x4b1e69:c.instructions+=3;goto B4b1e69;
case 0x4b1e6a:c.instructions+=2;goto B4b1e6a;
case 0x4b1e6d:c.instructions+=1;goto B4b1e6d;
case 0x4b1e6f:goto L4b1e6f;
case 0x4b1e72:c.instructions+=2;goto B4b1e72;
case 0x4b1e74:c.instructions+=1;goto B4b1e74;
case 0x4b1e76:goto L4b1e76;
case 0x4b1e79:c.instructions+=1;goto B4b1e79;
case 0x4b1e7b:goto L4b1e7b;
case 0x4b1e7d:goto L4b1e7d;
case 0x4b1e80:c.instructions+=1;goto B4b1e80;
case 0x4b1e86:goto L4b1e86;
case 0x4b1e88:c.instructions+=1;goto B4b1e88;
case 0x4b1e8d:goto L4b1e8d;
case 0x4b1e90:c.instructions+=4;goto B4b1e90;
case 0x4b1e92:c.instructions+=3;goto B4b1e92;
case 0x4b1e94:c.instructions+=2;goto B4b1e94;
case 0x4b1e95:c.instructions+=1;goto B4b1e95;
case 0x4b1e9a:goto L4b1e9a;
case 0x4b1ea0:c.instructions+=6;goto B4b1ea0;
case 0x4b1ea2:c.instructions+=5;goto B4b1ea2;
case 0x4b1ea8:c.instructions+=4;goto B4b1ea8;
case 0x4b1eab:c.instructions+=3;goto B4b1eab;
case 0x4b1eb2:c.instructions+=2;goto B4b1eb2;
case 0x4b1eb9:c.instructions+=1;goto B4b1eb9;
case 0x4b1ebb:goto L4b1ebb;
case 0x4b1ebe:c.instructions+=2;goto B4b1ebe;
case 0x4b1ec0:c.instructions+=1;goto B4b1ec0;
case 0x4b1ec2:goto L4b1ec2;
case 0x4b1ec5:c.instructions+=1;goto B4b1ec5;
case 0x4b1ec7:goto L4b1ec7;
case 0x4b1ec9:goto L4b1ec9;
case 0x4b1ecc:c.instructions+=1;goto B4b1ecc;
case 0x4b1ece:goto L4b1ece;
case 0x4b1ed0:c.instructions+=1;goto B4b1ed0;
case 0x4b1ed5:goto L4b1ed5;
case 0x4b1ed8:c.instructions+=4;goto B4b1ed8;
case 0x4b1eda:c.instructions+=3;goto B4b1eda;
case 0x4b1edc:c.instructions+=2;goto B4b1edc;
case 0x4b1edd:c.instructions+=1;goto B4b1edd;
case 0x4b1ee2:goto L4b1ee2;
case 0x4b1ee8:c.instructions+=6;goto B4b1ee8;
case 0x4b1eea:c.instructions+=5;goto B4b1eea;
case 0x4b1eed:c.instructions+=4;goto B4b1eed;
case 0x4b1ef0:c.instructions+=3;goto B4b1ef0;
case 0x4b1ef6:c.instructions+=2;goto B4b1ef6;
case 0x4b1efc:c.instructions+=1;goto B4b1efc;
case 0x4b1f02:goto L4b1f02;
case 0x4b1f04:c.instructions+=3;goto B4b1f04;
case 0x4b1f05:c.instructions+=2;goto B4b1f05;
case 0x4b1f06:c.instructions+=1;goto B4b1f06;
case 0x4b1f0b:goto L4b1f0b;
case 0x4b1f0e:c.instructions+=3;goto B4b1f0e;
case 0x4b1f10:c.instructions+=2;goto B4b1f10;
case 0x4b1f12:c.instructions+=1;goto B4b1f12;
case 0x4b1f17:goto L4b1f17;
case 0x4b1f18:c.instructions+=2;goto B4b1f18;
case 0x4b1f19:c.instructions+=1;goto B4b1f19;
case 0x4b1f20:goto L4b1f20;
case 0x4b1f24:c.instructions+=5;goto B4b1f24;
case 0x4b1f29:c.instructions+=4;goto B4b1f29;
case 0x4b1f2a:c.instructions+=3;goto B4b1f2a;
case 0x4b1f2c:c.instructions+=2;goto B4b1f2c;
case 0x4b1f31:c.instructions+=1;goto B4b1f31;
case 0x4b1f33:goto L4b1f33;
case 0x4b1f39:goto L4b1f39;
case 0x4b1f3e:c.instructions+=1;goto B4b1f3e;
case 0x4b1f40:goto L4b1f40;
case 0x4b1f42:goto L4b1f42;
case 0x4b1f47:c.instructions+=1;goto B4b1f47;
case 0x4b1f49:goto L4b1f49;
case 0x4b1f4e:c.instructions+=1;goto B4b1f4e;
case 0x4b1f54:goto L4b1f54;
case 0x4b1f56:c.instructions+=1;goto B4b1f56;
case 0x4b1f5b:goto L4b1f5b;
case 0x4b1f5e:c.instructions+=2;goto B4b1f5e;
case 0x4b1f5f:c.instructions+=1;goto B4b1f5f;
case 0x4b1f62:goto L4b1f62;
case 0x4b1f67:c.instructions+=1;goto B4b1f67;
case 0x4b1f6d:goto L4b1f6d;
case 0x4b1f72:goto L4b1f72;
case 0x4b1f78:c.instructions+=2;goto B4b1f78;
case 0x4b1f7e:c.instructions+=1;goto B4b1f7e;
case 0x4b1f84:goto L4b1f84;
case 0x4b1f87:c.instructions+=5;goto B4b1f87;
case 0x4b1f8a:c.instructions+=4;goto B4b1f8a;
case 0x4b1f8b:c.instructions+=3;goto B4b1f8b;
case 0x4b1f8c:c.instructions+=2;goto B4b1f8c;
case 0x4b1f8d:c.instructions+=1;goto B4b1f8d;
case 0x4b1f92:goto L4b1f92;
case 0x4b1f95:c.instructions+=3;goto B4b1f95;
case 0x4b1f9c:c.instructions+=2;goto B4b1f9c;
case 0x4b1f9d:c.instructions+=1;goto B4b1f9d;
case 0x4b1fa0:goto L4b1fa0;
case 0x4b1fa5:c.instructions+=1;goto B4b1fa5;
case 0x4b1fa7:goto L4b1fa7;
case 0x4b1fac:c.instructions+=1;goto B4b1fac;
case 0x4b1fae:goto L4b1fae;
case 0x4b1fb3:c.instructions+=1;goto B4b1fb3;
case 0x4b1fb5:goto L4b1fb5;
case 0x4b1fb7:c.instructions+=2;goto B4b1fb7;
case 0x4b1fba:c.instructions+=1;goto B4b1fba;
case 0x4b1fbf:goto L4b1fbf;
case 0x4b1fc4:c.instructions+=2;goto B4b1fc4;
case 0x4b1fc6:c.instructions+=1;goto B4b1fc6;
case 0x4b1fc8:goto L4b1fc8;
case 0x4b1fcb:c.instructions+=3;goto B4b1fcb;
case 0x4b1fcc:c.instructions+=2;goto B4b1fcc;
case 0x4b1fd3:c.instructions+=1;goto B4b1fd3;
case 0x4b1fd8:goto L4b1fd8;
case 0x4b1fde:c.instructions+=3;goto B4b1fde;
case 0x4b1fe1:c.instructions+=2;goto B4b1fe1;
case 0x4b1fe3:c.instructions+=1;goto B4b1fe3;
case 0x4b1fe8:goto L4b1fe8;
case 0x4b1fe9:c.instructions+=1;goto B4b1fe9;
case 0x4b1fec:goto L4b1fec;
case 0x4b1fee:c.instructions+=1;goto B4b1fee;
case 0x4b1ff3:goto L4b1ff3;
case 0x4b1ff4:c.instructions+=1;goto B4b1ff4;
case 0x4b1ff7:goto L4b1ff7;
case 0x4b1ffd:c.instructions+=2;goto B4b1ffd;
case 0x4b1ffe:c.instructions+=1;goto B4b1ffe;
default:missing_instruction(c.pc);}
B4b1000:L4b1000:{c.instructions+=2;NFSU2_TR(0x4b1000);
w4(R+4,u32(0x838590ull));
}
B4b1005:{NFSU2_TR(0x4b1005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b100aull));
TAIL_STATIC(0x501100u,501);
}
B4b100a:L4b100a:{c.instructions+=2;NFSU2_TR(0x4b100a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b100d:{NFSU2_TR(0x4b100d);
if(r1(R+518)){{goto L4b101e;}}
}
B4b100f:L4b100f:{c.instructions+=2;NFSU2_TR(0x4b100f);
w4(R+4,u32(0x838590ull));
}
B4b1014:{NFSU2_TR(0x4b1014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1019ull));
TAIL_STATIC(0x501100u,501);
}
B4b1019:L4b1019:{c.instructions+=2;NFSU2_TR(0x4b1019);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b101c:{NFSU2_TR(0x4b101c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1039;}}
}
B4b101e:L4b101e:{c.instructions+=7;NFSU2_TR(0x4b101e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1021:{NFSU2_TR(0x4b1021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1024:{NFSU2_TR(0x4b1024);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20000000ull))));
}
B4b102a:{NFSU2_TR(0x4b102a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b102b:{NFSU2_TR(0x4b102b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b102c:{NFSU2_TR(0x4b102c);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4b1032:{NFSU2_TR(0x4b1032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1037ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4b1037:L4b1037:{c.instructions+=2;NFSU2_TR(0x4b1037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1038:{NFSU2_TR(0x4b1038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1039:L4b1039:{c.instructions+=7;NFSU2_TR(0x4b1039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b103c:{NFSU2_TR(0x4b103c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b103f:{NFSU2_TR(0x4b103f);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4b1045:{NFSU2_TR(0x4b1045);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1046:{NFSU2_TR(0x4b1046);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B4b104b:{NFSU2_TR(0x4b104b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b104c:{NFSU2_TR(0x4b104c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1051ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4b1051:L4b1051:{c.instructions+=2;NFSU2_TR(0x4b1051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1052:{NFSU2_TR(0x4b1052);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1060:L4b1060:{c.instructions+=7;NFSU2_TR(0x4b1060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1061:{NFSU2_TR(0x4b1061);
__builtin_memmove((R+24),(R+4),4);
}
B4b1063:{NFSU2_TR(0x4b1063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1066:{NFSU2_TR(0x4b1066);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1067:{NFSU2_TR(0x4b1067);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b1069:{NFSU2_TR(0x4b1069);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b106b:{NFSU2_TR(0x4b106b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b107b;}}
}
B4b106d:L4b106d:{c.instructions+=3;NFSU2_TR(0x4b106d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b1070:{NFSU2_TR(0x4b1070);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1071:{NFSU2_TR(0x4b1071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1076ull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4b1076:L4b1076:{c.instructions+=3;NFSU2_TR(0x4b1076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1077:{NFSU2_TR(0x4b1077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1078:{NFSU2_TR(0x4b1078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b107b:L4b107b:{c.instructions+=3;NFSU2_TR(0x4b107b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b107f:{NFSU2_TR(0x4b107f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1081:{NFSU2_TR(0x4b1081);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1092;}}
}
B4b1083:L4b1083:{c.instructions+=4;NFSU2_TR(0x4b1083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b1085:{NFSU2_TR(0x4b1085);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1088:{NFSU2_TR(0x4b1088);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b108a:{NFSU2_TR(0x4b108a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b108e;}}
}
B4b108c:L4b108c:{c.instructions+=1;NFSU2_TR(0x4b108c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b108e:L4b108e:{c.instructions+=2;NFSU2_TR(0x4b108e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1090:{NFSU2_TR(0x4b1090);
{goto L4b10a6;}
}
B4b1092:L4b1092:{c.instructions+=2;NFSU2_TR(0x4b1092);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b1095:{NFSU2_TR(0x4b1095);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b10b0;}}
}
B4b1097:L4b1097:{c.instructions+=4;NFSU2_TR(0x4b1097);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b109a:{NFSU2_TR(0x4b109a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b109d:{NFSU2_TR(0x4b109d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b109f:{NFSU2_TR(0x4b109f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b10a4;}}
}
B4b10a1:L4b10a1:{c.instructions+=1;NFSU2_TR(0x4b10a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b10a4:L4b10a4:{c.instructions+=1;NFSU2_TR(0x4b10a4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b10a6:L4b10a6:{c.instructions+=2;NFSU2_TR(0x4b10a6);
__builtin_memmove((R+28),(R+0),4);
}
B4b10a8:{NFSU2_TR(0x4b10a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b10adull));
TAIL_STATIC(0x50d180u,50d);
}
B4b10ad:L4b10ad:{c.instructions+=1;NFSU2_TR(0x4b10ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b10b0:L4b10b0:{c.instructions+=3;NFSU2_TR(0x4b10b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b10b1:{NFSU2_TR(0x4b10b1);
__builtin_memmove((R+4),(R+24),4);
}
B4b10b3:{NFSU2_TR(0x4b10b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b10b8ull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4b10b8:L4b10b8:{c.instructions+=3;NFSU2_TR(0x4b10b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b10b9:{NFSU2_TR(0x4b10b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b10ba:{NFSU2_TR(0x4b10ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b10c0:L4b10c0:{c.instructions+=4;NFSU2_TR(0x4b10c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b10c1:{NFSU2_TR(0x4b10c1);
__builtin_memmove((R+24),(R+4),4);
}
B4b10c3:{NFSU2_TR(0x4b10c3);
w4(R+4,u32(0x838590ull));
}
B4b10c8:{NFSU2_TR(0x4b10c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b10cdull));
TAIL_STATIC(0x501100u,501);
}
B4b10cd:L4b10cd:{c.instructions+=2;NFSU2_TR(0x4b10cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b10cf:{NFSU2_TR(0x4b10cf);
if(r1(R+518)){{goto L4b10fe;}}
}
B4b10d1:L4b10d1:{c.instructions+=2;NFSU2_TR(0x4b10d1);
w4(R+4,u32(0x838590ull));
}
B4b10d6:{NFSU2_TR(0x4b10d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b10dbull));
TAIL_STATIC(0x501100u,501);
}
B4b10db:L4b10db:{c.instructions+=2;NFSU2_TR(0x4b10db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b10de:{NFSU2_TR(0x4b10de);
if(r1(R+518)){{goto L4b10fe;}}
}
B4b10e0:L4b10e0:{c.instructions+=2;NFSU2_TR(0x4b10e0);
w4(R+4,u32(0x838590ull));
}
B4b10e5:{NFSU2_TR(0x4b10e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b10eaull));
TAIL_STATIC(0x501100u,501);
}
B4b10ea:L4b10ea:{c.instructions+=2;NFSU2_TR(0x4b10ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b10ed:{NFSU2_TR(0x4b10ed);
if(r1(R+518)){{goto L4b10fe;}}
}
B4b10ef:L4b10ef:{c.instructions+=2;NFSU2_TR(0x4b10ef);
w4(R+4,u32(0x838590ull));
}
B4b10f4:{NFSU2_TR(0x4b10f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b10f9ull));
TAIL_STATIC(0x501100u,501);
}
B4b10f9:L4b10f9:{c.instructions+=2;NFSU2_TR(0x4b10f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b10fc:{NFSU2_TR(0x4b10fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1124;}}
}
B4b10fe:L4b10fe:{c.instructions+=7;NFSU2_TR(0x4b10fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1101:{NFSU2_TR(0x4b1101);
u8 U[4];
w4(U+0,u32(0x12c23b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1106:{NFSU2_TR(0x4b1106);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b110b:{NFSU2_TR(0x4b110b);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1110:{NFSU2_TR(0x4b1110);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1115:{NFSU2_TR(0x4b1115);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1116:{NFSU2_TR(0x4b1116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b111bull));
TAIL_STATIC(0x558610u,558);
}
B4b111b:L4b111b:{c.instructions+=4;NFSU2_TR(0x4b111b);
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
B4b111e:{NFSU2_TR(0x4b111e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b1122:{NFSU2_TR(0x4b1122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1123:{NFSU2_TR(0x4b1123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1124:L4b1124:{c.instructions+=4;NFSU2_TR(0x4b1124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1127:{NFSU2_TR(0x4b1127);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b112a:{NFSU2_TR(0x4b112a);
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
B4b112c:{NFSU2_TR(0x4b112c);
if(r1(R+518)){{goto L4b1163;}}
}
B4b112e:L4b112e:{c.instructions+=11;NFSU2_TR(0x4b112e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1131:{NFSU2_TR(0x4b1131);
u8 U[4];
w4(U+0,u32(0x63477036ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1136:{NFSU2_TR(0x4b1136);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1138:{NFSU2_TR(0x4b1138);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b113d:{NFSU2_TR(0x4b113d);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1142:{NFSU2_TR(0x4b1142);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1147:{NFSU2_TR(0x4b1147);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b114c:{NFSU2_TR(0x4b114c);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1151:{NFSU2_TR(0x4b1151);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1156:{NFSU2_TR(0x4b1156);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1157:{NFSU2_TR(0x4b1157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b115cull));
TAIL_STATIC(0x558790u,558);
}
B4b115c:L4b115c:{c.instructions+=2;NFSU2_TR(0x4b115c);
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
B4b115f:{NFSU2_TR(0x4b115f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b1163:L4b1163:{c.instructions+=2;NFSU2_TR(0x4b1163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1164:{NFSU2_TR(0x4b1164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1170:L4b1170:{c.instructions+=8;NFSU2_TR(0x4b1170);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1171:{NFSU2_TR(0x4b1171);
__builtin_memmove((R+20),(R+16),4);
}
B4b1173:{NFSU2_TR(0x4b1173);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1174:{NFSU2_TR(0x4b1174);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1175:{NFSU2_TR(0x4b1175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b1178:{NFSU2_TR(0x4b1178);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b117a:{NFSU2_TR(0x4b117a);
__builtin_memmove((R+24),(R+4),4);
}
B4b117c:{NFSU2_TR(0x4b117c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1197;}}
}
B4b117e:L4b117e:{c.instructions+=3;NFSU2_TR(0x4b117e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1181:{NFSU2_TR(0x4b1181);
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
B4b1183:{NFSU2_TR(0x4b1183);
if(r1(R+518)){{goto L4b118a;}}
}
B4b1185:L4b1185:{c.instructions+=1;NFSU2_TR(0x4b1185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b118aull));
TAIL_STATIC(0x496b20u,496);
}
B4b118a:L4b118a:{c.instructions+=5;NFSU2_TR(0x4b118a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b118b:{NFSU2_TR(0x4b118b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1192:{NFSU2_TR(0x4b1192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1193:{NFSU2_TR(0x4b1193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1194:{NFSU2_TR(0x4b1194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1197:L4b1197:{c.instructions+=3;NFSU2_TR(0x4b1197);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b119a:{NFSU2_TR(0x4b119a);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b119d:{NFSU2_TR(0x4b119d);
if(r1(R+518)){{goto L4b11b3;}}
}
B4b119f:L4b119f:{c.instructions+=2;NFSU2_TR(0x4b119f);
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
B4b11a0:{NFSU2_TR(0x4b11a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b11f0;}}
}
B4b11a2:L4b11a2:{c.instructions+=4;NFSU2_TR(0x4b11a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b11a5:{NFSU2_TR(0x4b11a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b11a6:{NFSU2_TR(0x4b11a6);
__builtin_memmove((R+4),(R+24),4);
}
B4b11a8:{NFSU2_TR(0x4b11a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b11adull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4b11ad:L4b11ad:{c.instructions+=4;NFSU2_TR(0x4b11ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b11ae:{NFSU2_TR(0x4b11ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b11af:{NFSU2_TR(0x4b11af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b11b0:{NFSU2_TR(0x4b11b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b11b3:L4b11b3:{c.instructions+=2;NFSU2_TR(0x4b11b3);
w4(R+4,u32(0x838590ull));
}
B4b11b8:{NFSU2_TR(0x4b11b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b11bdull));
TAIL_STATIC(0x4ae930u,4ae);
}
B4b11bd:L4b11bd:{c.instructions+=2;NFSU2_TR(0x4b11bd);
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
B4b11bf:{NFSU2_TR(0x4b11bf);
if(r1(R+518)){{goto L4b11f0;}}
}
B4b11c1:L4b11c1:{c.instructions+=5;NFSU2_TR(0x4b11c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b11c4:{NFSU2_TR(0x4b11c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b11c7:{NFSU2_TR(0x4b11c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b11ca:{NFSU2_TR(0x4b11ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b11cb:{NFSU2_TR(0x4b11cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b11d0ull));
TAIL_STATIC(0x4964d0u,496);
}
B4b11d0:L4b11d0:{c.instructions+=3;NFSU2_TR(0x4b11d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b11d3:{NFSU2_TR(0x4b11d3);
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
B4b11d5:{NFSU2_TR(0x4b11d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b11f0;}}
}
B4b11d7:L4b11d7:{c.instructions+=3;NFSU2_TR(0x4b11d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b11da:{NFSU2_TR(0x4b11da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b11db:{NFSU2_TR(0x4b11db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b11e0ull));
TAIL_STATIC(0x496850u,496);
}
B4b11e0:L4b11e0:{c.instructions+=2;NFSU2_TR(0x4b11e0);
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
B4b11e2:{NFSU2_TR(0x4b11e2);
if(r1(R+518)){{goto L4b11f0;}}
}
B4b11e4:L4b11e4:{c.instructions+=4;NFSU2_TR(0x4b11e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b11e7:{NFSU2_TR(0x4b11e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b11e8:{NFSU2_TR(0x4b11e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b11eb:{NFSU2_TR(0x4b11eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b11f0ull));
TAIL_STATIC(0x4967f0u,496);
}
B4b11f0:L4b11f0:{c.instructions+=4;NFSU2_TR(0x4b11f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b11f1:{NFSU2_TR(0x4b11f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b11f2:{NFSU2_TR(0x4b11f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b11f3:{NFSU2_TR(0x4b11f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1200:L4b1200:{c.instructions+=13;NFSU2_TR(0x4b1200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4b1203:{NFSU2_TR(0x4b1203);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1207:{NFSU2_TR(0x4b1207);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1208:{NFSU2_TR(0x4b1208);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1209:{NFSU2_TR(0x4b1209);
__builtin_memmove((R+20),(R+4),4);
}
B4b120b:{NFSU2_TR(0x4b120b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b120e:{NFSU2_TR(0x4b120e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b120f:{NFSU2_TR(0x4b120f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b1211:{NFSU2_TR(0x4b1211);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1213:{NFSU2_TR(0x4b1213);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1216:{NFSU2_TR(0x4b1216);
w4(R+4,u32(0xbull));
}
B4b121b:{NFSU2_TR(0x4b121b);
u8 U[4];
w4(U+0,u32(0x790efcull));
s4(u32(r4(R+20)),r4(U+0));
}
B4b1222:{NFSU2_TR(0x4b1222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1225:L4b1225:{c.instructions+=1;NFSU2_TR(0x4b1225);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4b1227;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1225u);}goto L4b1225;}
}
B4b1227:L4b1227:{c.instructions+=4;NFSU2_TR(0x4b1227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b122a:{NFSU2_TR(0x4b122a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b122c:{NFSU2_TR(0x4b122c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1230:{NFSU2_TR(0x4b1230);
if(r1(R+518)){{goto L4b1321;}}
}
B4b1236:L4b1236:{c.instructions+=4;NFSU2_TR(0x4b1236);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B4b123a:{NFSU2_TR(0x4b123a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b123d:{NFSU2_TR(0x4b123d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b123e:{NFSU2_TR(0x4b123e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1243ull));
TAIL_STATIC(0x4ffdc0u,4ff);
}
B4b1243:L4b1243:{c.instructions+=3;NFSU2_TR(0x4b1243);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1244:{NFSU2_TR(0x4b1244);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b1248:{NFSU2_TR(0x4b1248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b124dull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b124d:L4b124d:{c.instructions+=5;NFSU2_TR(0x4b124d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1250:{NFSU2_TR(0x4b1250);
__builtin_memmove((R+24),(R+0),4);
}
B4b1252:{NFSU2_TR(0x4b1252);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b1254:{NFSU2_TR(0x4b1254);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1256:{NFSU2_TR(0x4b1256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b12a8;}}
}
B4b1258:L4b1258:{c.instructions+=3;NFSU2_TR(0x4b1258);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b125c:{NFSU2_TR(0x4b125c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1260:{NFSU2_TR(0x4b1260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1265ull));
TAIL_STATIC(0x575620u,575);
}
B4b1265:L4b1265:{c.instructions+=3;NFSU2_TR(0x4b1265);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1268:{NFSU2_TR(0x4b1268);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b126a:{NFSU2_TR(0x4b126a);
if(r1(R+518)){{goto L4b1318;}}
}
B4b1270:L4b1270:{c.instructions+=21;NFSU2_TR(0x4b1270);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b1273:{NFSU2_TR(0x4b1273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1276:{NFSU2_TR(0x4b1276);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b1279:{NFSU2_TR(0x4b1279);
__builtin_memmove((R+4),(R+12),4);
}
B4b127b:{NFSU2_TR(0x4b127b);
__builtin_memmove((R+8),(R+12),4);
}
B4b127d:{NFSU2_TR(0x4b127d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1280:{NFSU2_TR(0x4b1280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1283:{NFSU2_TR(0x4b1283);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1286:{NFSU2_TR(0x4b1286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1289:{NFSU2_TR(0x4b1289);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x44000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1290:{NFSU2_TR(0x4b1290);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1293:{NFSU2_TR(0x4b1293);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1296:{NFSU2_TR(0x4b1296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1299:{NFSU2_TR(0x4b1299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b129a:{NFSU2_TR(0x4b129a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b129d:{NFSU2_TR(0x4b129d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b129e:{NFSU2_TR(0x4b129e);
__builtin_memmove((R+0),(R+20),4);
}
B4b12a0:{NFSU2_TR(0x4b12a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b12a1:{NFSU2_TR(0x4b12a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b12a2:{NFSU2_TR(0x4b12a2);
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
B4b12a5:{NFSU2_TR(0x4b12a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b12a8:L4b12a8:{c.instructions+=1;NFSU2_TR(0x4b12a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b12adull));
TAIL_STATIC(0x575620u,575);
}
B4b12ad:L4b12ad:{c.instructions+=3;NFSU2_TR(0x4b12ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b12b0:{NFSU2_TR(0x4b12b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b12b2:{NFSU2_TR(0x4b12b2);
if(r1(R+518)){{goto L4b1318;}}
}
B4b12b4:L4b12b4:{c.instructions+=30;NFSU2_TR(0x4b12b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b12ba:{NFSU2_TR(0x4b12ba);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b12c0:{NFSU2_TR(0x4b12c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4b12c6:{NFSU2_TR(0x4b12c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b12cc:{NFSU2_TR(0x4b12cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b12d0:{NFSU2_TR(0x4b12d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4b12d6:{NFSU2_TR(0x4b12d6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b12d9:{NFSU2_TR(0x4b12d9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b12db:{NFSU2_TR(0x4b12db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4b12de:{NFSU2_TR(0x4b12de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b12e1:{NFSU2_TR(0x4b12e1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4b12e6:{NFSU2_TR(0x4b12e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b12e9:{NFSU2_TR(0x4b12e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b12ed:{NFSU2_TR(0x4b12ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b12f0:{NFSU2_TR(0x4b12f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4b12f4:{NFSU2_TR(0x4b12f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b12f7:{NFSU2_TR(0x4b12f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b12fa:{NFSU2_TR(0x4b12fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b12fd:{NFSU2_TR(0x4b12fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1300:{NFSU2_TR(0x4b1300);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1303:{NFSU2_TR(0x4b1303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1306:{NFSU2_TR(0x4b1306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1309:{NFSU2_TR(0x4b1309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b130a:{NFSU2_TR(0x4b130a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b130d:{NFSU2_TR(0x4b130d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b130e:{NFSU2_TR(0x4b130e);
__builtin_memmove((R+0),(R+20),4);
}
B4b1310:{NFSU2_TR(0x4b1310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1311:{NFSU2_TR(0x4b1311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b1312:{NFSU2_TR(0x4b1312);
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
B4b1315:{NFSU2_TR(0x4b1315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1318:L4b1318:{c.instructions+=4;NFSU2_TR(0x4b1318);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b131a:{NFSU2_TR(0x4b131a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b131d:{NFSU2_TR(0x4b131d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1320:{NFSU2_TR(0x4b1320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1321:L4b1321:{c.instructions+=6;NFSU2_TR(0x4b1321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1322:{NFSU2_TR(0x4b1322);
__builtin_memmove((R+0),(R+20),4);
}
B4b1324:{NFSU2_TR(0x4b1324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1325:{NFSU2_TR(0x4b1325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b1326:{NFSU2_TR(0x4b1326);
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
B4b1329:{NFSU2_TR(0x4b1329);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1330:L4b1330:{c.instructions+=3;NFSU2_TR(0x4b1330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1331:{NFSU2_TR(0x4b1331);
__builtin_memmove((R+24),(R+4),4);
}
B4b1333:{NFSU2_TR(0x4b1333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1338ull));
{goto L4b1350;}
}
B4b1338:L4b1338:{c.instructions+=2;NFSU2_TR(0x4b1338);
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
B4b133d:{NFSU2_TR(0x4b133d);
if(r1(R+518)){{goto L4b1348;}}
}
B4b133f:L4b133f:{c.instructions+=2;NFSU2_TR(0x4b133f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1340:{NFSU2_TR(0x4b1340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1345ull));
TAIL_STATIC(0x575630u,575);
}
B4b1345:L4b1345:{c.instructions+=1;NFSU2_TR(0x4b1345);
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
B4b1348:L4b1348:{c.instructions+=3;NFSU2_TR(0x4b1348);
__builtin_memmove((R+0),(R+24),4);
}
B4b134a:{NFSU2_TR(0x4b134a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b134b:{NFSU2_TR(0x4b134b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1350:L4b1350:{c.instructions+=2;NFSU2_TR(0x4b1350);
u8 U[4];
w4(U+0,u32(0x790f04ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4b1356:{NFSU2_TR(0x4b1356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1360:L4b1360:{c.instructions+=18;NFSU2_TR(0x4b1360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1361:{NFSU2_TR(0x4b1361);
__builtin_memmove((R+20),(R+16),4);
}
B4b1363:{NFSU2_TR(0x4b1363);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1365:{NFSU2_TR(0x4b1365);
u8 U[4];
w4(U+0,u32(0x772e24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b136a:{NFSU2_TR(0x4b136a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1370:{NFSU2_TR(0x4b1370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1371:{NFSU2_TR(0x4b1371);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1378:{NFSU2_TR(0x4b1378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4b137b:{NFSU2_TR(0x4b137b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b137c:{NFSU2_TR(0x4b137c);
__builtin_memmove((R+12),(R+4),4);
}
B4b137e:{NFSU2_TR(0x4b137e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4b1385:{NFSU2_TR(0x4b1385);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1386:{NFSU2_TR(0x4b1386);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b1388:{NFSU2_TR(0x4b1388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1389:{NFSU2_TR(0x4b1389);
w4(R+4,u32(0x85ad40ull));
}
B4b138e:{NFSU2_TR(0x4b138e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1391:{NFSU2_TR(0x4b1391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1394:{NFSU2_TR(0x4b1394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1399ull));
TAIL_STATIC(0x500c00u,500);
}
B4b1399:L4b1399:{c.instructions+=2;NFSU2_TR(0x4b1399);
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
B4b139b:{NFSU2_TR(0x4b139b);
if(r1(R+518)){{goto L4b1506;}}
}
B4b13a1:L4b13a1:{c.instructions+=2;NFSU2_TR(0x4b13a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b13a4:{NFSU2_TR(0x4b13a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b13a9ull));
TAIL_STATIC(0x4ffd80u,4ff);
}
B4b13a9:L4b13a9:{c.instructions+=2;NFSU2_TR(0x4b13a9);
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
B4b13ab:{NFSU2_TR(0x4b13ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b1506;}}
}
B4b13b1:L4b13b1:{c.instructions+=2;NFSU2_TR(0x4b13b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b13b2:{NFSU2_TR(0x4b13b2);
{goto L4b13b7;}
}
B4b13b4:L4b13b4:{c.instructions+=1;NFSU2_TR(0x4b13b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b13b7:L4b13b7:{c.instructions+=2;NFSU2_TR(0x4b13b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b13b8:{NFSU2_TR(0x4b13b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b13bdull));
TAIL_STATIC(0x4ffd90u,4ff);
}
B4b13bd:L4b13bd:{c.instructions+=8;NFSU2_TR(0x4b13bd);
__builtin_memmove((R+28),(R+0),4);
}
B4b13bf:{NFSU2_TR(0x4b13bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b13c5:{NFSU2_TR(0x4b13c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b13c8:{NFSU2_TR(0x4b13c8);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B4b13cb:{NFSU2_TR(0x4b13cb);
w4(R+12,u32(r1(R+0)));
}
B4b13ce:{NFSU2_TR(0x4b13ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b13d1:{NFSU2_TR(0x4b13d1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b13d3:{NFSU2_TR(0x4b13d3);
if(r1(R+518)){{goto L4b13e5;}}
}
B4b13d5:L4b13d5:{c.instructions+=2;NFSU2_TR(0x4b13d5);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b13d7:{NFSU2_TR(0x4b13d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b14f4;}}
}
B4b13dd:L4b13dd:{c.instructions+=2;NFSU2_TR(0x4b13dd);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b13df:{NFSU2_TR(0x4b13df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b14f4;}}
}
B4b13e5:L4b13e5:{c.instructions+=3;NFSU2_TR(0x4b13e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B4b13e9:{NFSU2_TR(0x4b13e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b13ea:{NFSU2_TR(0x4b13ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b13efull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b13ef:L4b13ef:{c.instructions+=4;NFSU2_TR(0x4b13ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b13f2:{NFSU2_TR(0x4b13f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b13f4:{NFSU2_TR(0x4b13f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b13f7:{NFSU2_TR(0x4b13f7);
if(r1(R+518)){{goto L4b14f4;}}
}
B4b13fd:L4b13fd:{c.instructions+=3;NFSU2_TR(0x4b13fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1400:{NFSU2_TR(0x4b1400);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xdd60e402ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xdd60e402ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1405:{NFSU2_TR(0x4b1405);
if(r1(R+518)){{goto L4b14f4;}}
}
B4b140b:L4b140b:{c.instructions+=2;NFSU2_TR(0x4b140b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xdd60e403ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xdd60e403ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1410:{NFSU2_TR(0x4b1410);
if(r1(R+518)){{goto L4b14f4;}}
}
B4b1416:L4b1416:{c.instructions+=2;NFSU2_TR(0x4b1416);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x46ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x46ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x46ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b141a:{NFSU2_TR(0x4b141a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4b1505;}}
}
B4b1420:L4b1420:{c.instructions+=2;NFSU2_TR(0x4b1420);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1422:{NFSU2_TR(0x4b1422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1427ull));
TAIL_STATIC(0x575620u,575);
}
B4b1427:L4b1427:{c.instructions+=6;NFSU2_TR(0x4b1427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b142a:{NFSU2_TR(0x4b142a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b142d:{NFSU2_TR(0x4b142d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b142f:{NFSU2_TR(0x4b142f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b1431:{NFSU2_TR(0x4b1431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1434:{NFSU2_TR(0x4b1434);
if(r1(R+518)){{goto L4b1440;}}
}
B4b1436:L4b1436:{c.instructions+=3;NFSU2_TR(0x4b1436);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1437:{NFSU2_TR(0x4b1437);
__builtin_memmove((R+4),(R+0),4);
}
B4b1439:{NFSU2_TR(0x4b1439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b143eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1200u);}goto L4b1200;}
}
B4b143e:L4b143e:{c.instructions+=1;NFSU2_TR(0x4b143e);
__builtin_memmove((R+24),(R+0),4);
}
B4b1440:L4b1440:{c.instructions+=3;NFSU2_TR(0x4b1440);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1442:{NFSU2_TR(0x4b1442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1449:{NFSU2_TR(0x4b1449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b144eull));
TAIL_STATIC(0x575620u,575);
}
B4b144e:L4b144e:{c.instructions+=3;NFSU2_TR(0x4b144e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1451:{NFSU2_TR(0x4b1451);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1453:{NFSU2_TR(0x4b1453);
if(r1(R+518)){{goto L4b1463;}}
}
B4b1455:L4b1455:{c.instructions+=4;NFSU2_TR(0x4b1455);
u8 U[4];
w4(U+0,u32(0x790f04ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4b145b:{NFSU2_TR(0x4b145b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b145e:{NFSU2_TR(0x4b145e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4b1461:{NFSU2_TR(0x4b1461);
{goto L4b1465;}
}
B4b1463:L4b1463:{c.instructions+=1;NFSU2_TR(0x4b1463);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1465:L4b1465:{c.instructions+=13;NFSU2_TR(0x4b1465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1468:{NFSU2_TR(0x4b1468);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b146b:{NFSU2_TR(0x4b146b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4b146d:{NFSU2_TR(0x4b146d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1470:{NFSU2_TR(0x4b1470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1473:{NFSU2_TR(0x4b1473);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4b1475:{NFSU2_TR(0x4b1475);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4b1479:{NFSU2_TR(0x4b1479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b147c:{NFSU2_TR(0x4b147c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b147f:{NFSU2_TR(0x4b147f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1482:{NFSU2_TR(0x4b1482);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1483:{NFSU2_TR(0x4b1483);
w4(R+4,u32(0x85ad40ull));
}
B4b1488:{NFSU2_TR(0x4b1488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b148dull));
TAIL_STATIC(0x500b80u,500);
}
B4b148d:L4b148d:{c.instructions+=5;NFSU2_TR(0x4b148d);
w4(R+4,u32(r1(R+0)));
}
B4b1490:{NFSU2_TR(0x4b1490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1493:{NFSU2_TR(0x4b1493);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b1497:{NFSU2_TR(0x4b1497);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b149a:{NFSU2_TR(0x4b149a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b14b2;}}
}
B4b149c:L4b149c:{c.instructions+=1;NFSU2_TR(0x4b149c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b14a1ull));
TAIL_STATIC(0x4ffdc0u,4ff);
}
B4b14a1:L4b14a1:{c.instructions+=4;NFSU2_TR(0x4b14a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b14a2:{NFSU2_TR(0x4b14a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b14a3:{NFSU2_TR(0x4b14a3);
w4(R+4,u32(0x844adcull));
}
B4b14a8:{NFSU2_TR(0x4b14a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b14adull));
TAIL_STATIC(0x502c50u,502);
}
B4b14ad:L4b14ad:{c.instructions+=2;NFSU2_TR(0x4b14ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14b0:{NFSU2_TR(0x4b14b0);
{goto L4b14c6;}
}
B4b14b2:L4b14b2:{c.instructions+=1;NFSU2_TR(0x4b14b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b14b7ull));
TAIL_STATIC(0x4ffdc0u,4ff);
}
B4b14b7:L4b14b7:{c.instructions+=4;NFSU2_TR(0x4b14b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b14b8:{NFSU2_TR(0x4b14b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b14b9:{NFSU2_TR(0x4b14b9);
w4(R+4,u32(0x844adcull));
}
B4b14be:{NFSU2_TR(0x4b14be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b14c3ull));
TAIL_STATIC(0x502aa0u,502);
}
B4b14c3:L4b14c3:{c.instructions+=1;NFSU2_TR(0x4b14c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14c6:L4b14c6:{c.instructions+=3;NFSU2_TR(0x4b14c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b14c7:{NFSU2_TR(0x4b14c7);
u8 U[4];
w4(U+0,u32(0x790f18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b14cc:{NFSU2_TR(0x4b14cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b14d1ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b14d1:L4b14d1:{c.instructions+=11;NFSU2_TR(0x4b14d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b14d4:{NFSU2_TR(0x4b14d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14d7:{NFSU2_TR(0x4b14d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b14dd:{NFSU2_TR(0x4b14dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14e0:{NFSU2_TR(0x4b14e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x37ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4b14e4:{NFSU2_TR(0x4b14e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b14e7:{NFSU2_TR(0x4b14e7);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b14ea:{NFSU2_TR(0x4b14ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b14eb:{NFSU2_TR(0x4b14eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14ee:{NFSU2_TR(0x4b14ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b14f1:{NFSU2_TR(0x4b14f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14f4:L4b14f4:{c.instructions+=3;NFSU2_TR(0x4b14f4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b14f5:{NFSU2_TR(0x4b14f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b14f8:{NFSU2_TR(0x4b14f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b14fdull));
TAIL_STATIC(0x4ffd80u,4ff);
}
B4b14fd:L4b14fd:{c.instructions+=2;NFSU2_TR(0x4b14fd);
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
B4b14ff:{NFSU2_TR(0x4b14ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b13b4u);}goto L4b13b4;}}
}
B4b1505:L4b1505:{c.instructions+=1;NFSU2_TR(0x4b1505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1506:L4b1506:{c.instructions+=7;NFSU2_TR(0x4b1506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1509:{NFSU2_TR(0x4b1509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b150a:{NFSU2_TR(0x4b150a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b150b:{NFSU2_TR(0x4b150b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1512:{NFSU2_TR(0x4b1512);
__builtin_memmove((R+16),(R+20),4);
}
B4b1514:{NFSU2_TR(0x4b1514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1515:{NFSU2_TR(0x4b1515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1520:L4b1520:{c.instructions+=6;NFSU2_TR(0x4b1520);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1521:{NFSU2_TR(0x4b1521);
__builtin_memmove((R+28),(R+4),4);
}
B4b1523:{NFSU2_TR(0x4b1523);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1529:{NFSU2_TR(0x4b1529);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b152f:{NFSU2_TR(0x4b152f);
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
B4b1531:{NFSU2_TR(0x4b1531);
if(r1(R+518)){{goto L4b1582;}}
}
B4b1533:L4b1533:{c.instructions+=4;NFSU2_TR(0x4b1533);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1534:{NFSU2_TR(0x4b1534);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b153a:{NFSU2_TR(0x4b153a);
__builtin_memmove((R+4),(R+24),4);
}
B4b153c:{NFSU2_TR(0x4b153c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1541ull));
TAIL_STATIC(0x538740u,538);
}
B4b1541:L4b1541:{c.instructions+=4;NFSU2_TR(0x4b1541);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1547:{NFSU2_TR(0x4b1547);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b154a:{NFSU2_TR(0x4b154a);
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
B4b154c:{NFSU2_TR(0x4b154c);
if(r1(R+518)){{goto L4b1554;}}
}
B4b154e:L4b154e:{c.instructions+=3;NFSU2_TR(0x4b154e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b1550:{NFSU2_TR(0x4b1550);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1552:{NFSU2_TR(0x4b1552);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1554ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b1554:L4b1554:{c.instructions+=3;NFSU2_TR(0x4b1554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1557:{NFSU2_TR(0x4b1557);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1559:{NFSU2_TR(0x4b1559);
if(r1(R+518)){{goto L4b1560;}}
}
B4b155b:L4b155b:{c.instructions+=2;NFSU2_TR(0x4b155b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b155e:{NFSU2_TR(0x4b155e);
{goto L4b1562;}
}
B4b1560:L4b1560:{c.instructions+=1;NFSU2_TR(0x4b1560);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1562:L4b1562:{c.instructions+=3;NFSU2_TR(0x4b1562);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b1565:{NFSU2_TR(0x4b1565);
__builtin_memmove((R+4),(R+24),4);
}
B4b1567:{NFSU2_TR(0x4b1567);
if(r1(R+518)){{goto L4b1572;}}
}
B4b1569:L4b1569:{c.instructions+=2;NFSU2_TR(0x4b1569);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b156b:{NFSU2_TR(0x4b156b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1570ull));
TAIL_STATIC(0x5437c0u,543);
}
B4b1570:L4b1570:{c.instructions+=1;NFSU2_TR(0x4b1570);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1541u);}goto L4b1541;}
}
B4b1572:L4b1572:{c.instructions+=1;NFSU2_TR(0x4b1572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1577ull));
TAIL_STATIC(0x5385c0u,538);
}
B4b1577:L4b1577:{c.instructions+=2;NFSU2_TR(0x4b1577);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1581:{NFSU2_TR(0x4b1581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1582:L4b1582:{c.instructions+=2;NFSU2_TR(0x4b1582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1583:{NFSU2_TR(0x4b1583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1590:L4b1590:{c.instructions+=6;NFSU2_TR(0x4b1590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1591:{NFSU2_TR(0x4b1591);
__builtin_memmove((R+24),(R+4),4);
}
B4b1593:{NFSU2_TR(0x4b1593);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1594:{NFSU2_TR(0x4b1594);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b159a:{NFSU2_TR(0x4b159a);
__builtin_memmove((R+4),(R+28),4);
}
B4b159c:{NFSU2_TR(0x4b159c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b15a1ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B4b15a1:L4b15a1:{c.instructions+=6;NFSU2_TR(0x4b15a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b15a2:{NFSU2_TR(0x4b15a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b15a8:{NFSU2_TR(0x4b15a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b15a9:{NFSU2_TR(0x4b15a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b15ab:{NFSU2_TR(0x4b15ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b15b1:{NFSU2_TR(0x4b15b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b15b6ull));
TAIL_STATIC(0x538080u,538);
}
B4b15b6:L4b15b6:{c.instructions+=3;NFSU2_TR(0x4b15b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b15bc:{NFSU2_TR(0x4b15bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b15be:{NFSU2_TR(0x4b15be);
if(r1(R+518)){{goto L4b15c5;}}
}
B4b15c0:L4b15c0:{c.instructions+=2;NFSU2_TR(0x4b15c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b15c3:{NFSU2_TR(0x4b15c3);
{goto L4b15c7;}
}
B4b15c5:L4b15c5:{c.instructions+=1;NFSU2_TR(0x4b15c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b15c7:L4b15c7:{c.instructions+=2;NFSU2_TR(0x4b15c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b15cd:{NFSU2_TR(0x4b15cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b15da;}}
}
B4b15cf:L4b15cf:{c.instructions+=3;NFSU2_TR(0x4b15cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b15d2:{NFSU2_TR(0x4b15d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b15d3:{NFSU2_TR(0x4b15d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b15d8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b15d8:L4b15d8:{c.instructions+=1;NFSU2_TR(0x4b15d8);
{goto L4b15e3;}
}
B4b15da:L4b15da:{c.instructions+=3;NFSU2_TR(0x4b15da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b15dd:{NFSU2_TR(0x4b15dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b15de:{NFSU2_TR(0x4b15de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b15e3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b15e3:L4b15e3:{c.instructions+=4;NFSU2_TR(0x4b15e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b15e9:{NFSU2_TR(0x4b15e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b15ec:{NFSU2_TR(0x4b15ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b15ee:{NFSU2_TR(0x4b15ee);
if(r1(R+518)){{goto L4b15f5;}}
}
B4b15f0:L4b15f0:{c.instructions+=2;NFSU2_TR(0x4b15f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b15f3:{NFSU2_TR(0x4b15f3);
{goto L4b15f7;}
}
B4b15f5:L4b15f5:{c.instructions+=1;NFSU2_TR(0x4b15f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b15f7:L4b15f7:{c.instructions+=2;NFSU2_TR(0x4b15f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b15fd:{NFSU2_TR(0x4b15fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b160a;}}
}
B4b15ff:L4b15ff:{c.instructions+=3;NFSU2_TR(0x4b15ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1602:{NFSU2_TR(0x4b1602);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1603:{NFSU2_TR(0x4b1603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1608ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b1608:L4b1608:{c.instructions+=1;NFSU2_TR(0x4b1608);
{goto L4b1613;}
}
B4b160a:L4b160a:{c.instructions+=3;NFSU2_TR(0x4b160a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b160d:{NFSU2_TR(0x4b160d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b160e:{NFSU2_TR(0x4b160e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1613ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b1613:L4b1613:{c.instructions+=4;NFSU2_TR(0x4b1613);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1616:{NFSU2_TR(0x4b1616);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1619:{NFSU2_TR(0x4b1619);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b161b:{NFSU2_TR(0x4b161b);
if(r1(R+518)){{goto L4b1622;}}
}
B4b161d:L4b161d:{c.instructions+=2;NFSU2_TR(0x4b161d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b1620:{NFSU2_TR(0x4b1620);
{goto L4b1624;}
}
B4b1622:L4b1622:{c.instructions+=1;NFSU2_TR(0x4b1622);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1624:L4b1624:{c.instructions+=2;NFSU2_TR(0x4b1624);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b1627:{NFSU2_TR(0x4b1627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1634;}}
}
B4b1629:L4b1629:{c.instructions+=3;NFSU2_TR(0x4b1629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b162c:{NFSU2_TR(0x4b162c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b162d:{NFSU2_TR(0x4b162d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1632ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b1632:L4b1632:{c.instructions+=1;NFSU2_TR(0x4b1632);
{goto L4b163d;}
}
B4b1634:L4b1634:{c.instructions+=3;NFSU2_TR(0x4b1634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1637:{NFSU2_TR(0x4b1637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1638:{NFSU2_TR(0x4b1638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b163dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b163d:L4b163d:{c.instructions+=4;NFSU2_TR(0x4b163d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1640:{NFSU2_TR(0x4b1640);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1643:{NFSU2_TR(0x4b1643);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1645:{NFSU2_TR(0x4b1645);
if(r1(R+518)){{goto L4b164c;}}
}
B4b1647:L4b1647:{c.instructions+=2;NFSU2_TR(0x4b1647);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b164a:{NFSU2_TR(0x4b164a);
{goto L4b164e;}
}
B4b164c:L4b164c:{c.instructions+=1;NFSU2_TR(0x4b164c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b164e:L4b164e:{c.instructions+=2;NFSU2_TR(0x4b164e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b1651:{NFSU2_TR(0x4b1651);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1662;}}
}
B4b1653:L4b1653:{c.instructions+=3;NFSU2_TR(0x4b1653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1656:{NFSU2_TR(0x4b1656);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1657:{NFSU2_TR(0x4b1657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b165cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b165c:L4b165c:{c.instructions+=4;NFSU2_TR(0x4b165c);
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
B4b165f:{NFSU2_TR(0x4b165f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1660:{NFSU2_TR(0x4b1660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1661:{NFSU2_TR(0x4b1661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1662:L4b1662:{c.instructions+=3;NFSU2_TR(0x4b1662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1665:{NFSU2_TR(0x4b1665);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1666:{NFSU2_TR(0x4b1666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b166bull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b166b:L4b166b:{c.instructions+=4;NFSU2_TR(0x4b166b);
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
B4b166e:{NFSU2_TR(0x4b166e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b166f:{NFSU2_TR(0x4b166f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1670:{NFSU2_TR(0x4b1670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1680:L4b1680:{c.instructions+=17;NFSU2_TR(0x4b1680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1682:{NFSU2_TR(0x4b1682);
u8 U[4];
w4(U+0,u32(0x772e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1687:{NFSU2_TR(0x4b1687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b168d:{NFSU2_TR(0x4b168d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b168e:{NFSU2_TR(0x4b168e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1695:{NFSU2_TR(0x4b1695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1696:{NFSU2_TR(0x4b1696);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1697:{NFSU2_TR(0x4b1697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1698:{NFSU2_TR(0x4b1698);
__builtin_memmove((R+24),(R+4),4);
}
B4b169a:{NFSU2_TR(0x4b169a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b169f:{NFSU2_TR(0x4b169f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b16a2:{NFSU2_TR(0x4b16a2);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b16a7:{NFSU2_TR(0x4b16a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b16a8:{NFSU2_TR(0x4b16a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b16ac:{NFSU2_TR(0x4b16ac);
u8 U[4];
w4(U+0,u32(0x790f38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b16b2:{NFSU2_TR(0x4b16b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b16bc:{NFSU2_TR(0x4b16bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b16c1ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b16c1:L4b16c1:{c.instructions+=13;NFSU2_TR(0x4b16c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b16c3:{NFSU2_TR(0x4b16c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b16c9:{NFSU2_TR(0x4b16c9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b16cd:{NFSU2_TR(0x4b16cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b16d0:{NFSU2_TR(0x4b16d0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4b16d3:{NFSU2_TR(0x4b16d3);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b16d8:{NFSU2_TR(0x4b16d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b16dc:{NFSU2_TR(0x4b16dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b16e0:{NFSU2_TR(0x4b16e0);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b16e5:{NFSU2_TR(0x4b16e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b16e6:{NFSU2_TR(0x4b16e6);
u8 U[4];
w4(U+0,u32(0x790f38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b16ec:{NFSU2_TR(0x4b16ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b16f2:{NFSU2_TR(0x4b16f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b16f7ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b16f7:L4b16f7:{c.instructions+=8;NFSU2_TR(0x4b16f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b16fb:{NFSU2_TR(0x4b16fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b16fe:{NFSU2_TR(0x4b16fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b16ff:{NFSU2_TR(0x4b16ff);
__builtin_memmove((R+0),(R+24),4);
}
B4b1701:{NFSU2_TR(0x4b1701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1702:{NFSU2_TR(0x4b1702);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1709:{NFSU2_TR(0x4b1709);
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
B4b170c:{NFSU2_TR(0x4b170c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1710:L4b1710:{c.instructions+=10;NFSU2_TR(0x4b1710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1712:{NFSU2_TR(0x4b1712);
u8 U[4];
w4(U+0,u32(0x772e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1717:{NFSU2_TR(0x4b1717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b171d:{NFSU2_TR(0x4b171d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b171e:{NFSU2_TR(0x4b171e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1725:{NFSU2_TR(0x4b1725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1726:{NFSU2_TR(0x4b1726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1727:{NFSU2_TR(0x4b1727);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b172c:{NFSU2_TR(0x4b172c);
__builtin_memmove((R+24),(R+4),4);
}
B4b172e:{NFSU2_TR(0x4b172e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1733ull));
TAIL_STATIC(0x575620u,575);
}
B4b1733:L4b1733:{c.instructions+=5;NFSU2_TR(0x4b1733);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1736:{NFSU2_TR(0x4b1736);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b173a:{NFSU2_TR(0x4b173a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b173c:{NFSU2_TR(0x4b173c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1744:{NFSU2_TR(0x4b1744);
if(r1(R+518)){{goto L4b175b;}}
}
B4b1746:L4b1746:{c.instructions+=4;NFSU2_TR(0x4b1746);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b174a:{NFSU2_TR(0x4b174a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b174b:{NFSU2_TR(0x4b174b);
__builtin_memmove((R+4),(R+0),4);
}
B4b174d:{NFSU2_TR(0x4b174d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1752ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1680u);}goto L4b1680;}
}
B4b1752:L4b1752:{c.instructions+=2;NFSU2_TR(0x4b1752);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1754:{NFSU2_TR(0x4b1754);
if(r1(R+518)){{goto L4b175b;}}
}
B4b1756:L4b1756:{c.instructions+=2;NFSU2_TR(0x4b1756);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4b1759:{NFSU2_TR(0x4b1759);
{goto L4b175d;}
}
B4b175b:L4b175b:{c.instructions+=1;NFSU2_TR(0x4b175b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b175d:L4b175d:{c.instructions+=11;NFSU2_TR(0x4b175d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1760:{NFSU2_TR(0x4b1760);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1763:{NFSU2_TR(0x4b1763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4b1765:{NFSU2_TR(0x4b1765);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1768:{NFSU2_TR(0x4b1768);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4b176a:{NFSU2_TR(0x4b176a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b176e:{NFSU2_TR(0x4b176e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1771:{NFSU2_TR(0x4b1771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1772:{NFSU2_TR(0x4b1772);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1779:{NFSU2_TR(0x4b1779);
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
B4b177c:{NFSU2_TR(0x4b177c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1780:L4b1780:{c.instructions+=12;NFSU2_TR(0x4b1780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B4b1783:{NFSU2_TR(0x4b1783);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1787:{NFSU2_TR(0x4b1787);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1788:{NFSU2_TR(0x4b1788);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4b178b:{NFSU2_TR(0x4b178b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b178c:{NFSU2_TR(0x4b178c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1790:{NFSU2_TR(0x4b1790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b1792:{NFSU2_TR(0x4b1792);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1794:{NFSU2_TR(0x4b1794);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1795:{NFSU2_TR(0x4b1795);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1796:{NFSU2_TR(0x4b1796);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b179a:{NFSU2_TR(0x4b179a);
if(r1(R+518)){{goto L4b17a1;}}
}
B4b179c:L4b179c:{c.instructions+=2;NFSU2_TR(0x4b179c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b179f:{NFSU2_TR(0x4b179f);
{goto L4b17a3;}
}
B4b17a1:L4b17a1:{c.instructions+=1;NFSU2_TR(0x4b17a1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b17a3:L4b17a3:{c.instructions+=4;NFSU2_TR(0x4b17a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b17a6:{NFSU2_TR(0x4b17a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b17a8:{NFSU2_TR(0x4b17a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b17ab:{NFSU2_TR(0x4b17ab);
if(r1(R+518)){{goto L4b17b6;}}
}
B4b17ad:L4b17ad:{c.instructions+=3;NFSU2_TR(0x4b17ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b17b0:{NFSU2_TR(0x4b17b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b17b4:{NFSU2_TR(0x4b17b4);
{goto L4b17be;}
}
B4b17b6:L4b17b6:{c.instructions+=1;NFSU2_TR(0x4b17b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b17be:L4b17be:{c.instructions+=1;NFSU2_TR(0x4b17be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b17c3ull));
TAIL_STATIC(0x51f1c0u,51f);
}
B4b17c3:L4b17c3:{c.instructions+=3;NFSU2_TR(0x4b17c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4b17c7:{NFSU2_TR(0x4b17c7);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b17cc:{NFSU2_TR(0x4b17cc);
__builtin_memmove((R+16),(R+16),4);
}
B4b17d0:L4b17d0:{c.instructions+=2;NFSU2_TR(0x4b17d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b17d2:{NFSU2_TR(0x4b17d2);
if(r1(R+518)){{goto L4b17d9;}}
}
B4b17d4:L4b17d4:{c.instructions+=2;NFSU2_TR(0x4b17d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b17d7:{NFSU2_TR(0x4b17d7);
{goto L4b17db;}
}
B4b17d9:L4b17d9:{c.instructions+=1;NFSU2_TR(0x4b17d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b17db:L4b17db:{c.instructions+=2;NFSU2_TR(0x4b17db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b17dd:{NFSU2_TR(0x4b17dd);
if(r1(R+518)){{goto L4b18e5;}}
}
B4b17e3:L4b17e3:{c.instructions+=7;NFSU2_TR(0x4b17e3);
__builtin_memmove((R+4),gp(0x836328),4);
}
B4b17e9:{NFSU2_TR(0x4b17e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b17ef:{NFSU2_TR(0x4b17ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4b17f2:{NFSU2_TR(0x4b17f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b17f5:{NFSU2_TR(0x4b17f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x836568ull))));
}
B4b17fb:{NFSU2_TR(0x4b17fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b17fd:{NFSU2_TR(0x4b17fd);
if(r1(R+518)){{goto L4b1854;}}
}
B4b17ff:L4b17ff:{c.instructions+=3;NFSU2_TR(0x4b17ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1805:{NFSU2_TR(0x4b1805);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1806:{NFSU2_TR(0x4b1806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b180bull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4b180b:L4b180b:{c.instructions+=5;NFSU2_TR(0x4b180b);
__builtin_memmove((R+4),gp(0x836328),4);
}
B4b1811:{NFSU2_TR(0x4b1811);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4b1814:{NFSU2_TR(0x4b1814);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1816:{NFSU2_TR(0x4b1816);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x836568ull))));
}
B4b181c:{NFSU2_TR(0x4b181c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1821ull));
TAIL_STATIC(0x512240u,512);
}
B4b1821:L4b1821:{c.instructions+=4;NFSU2_TR(0x4b1821);
__builtin_memmove((R+4),gp(0x836328),4);
}
B4b1827:{NFSU2_TR(0x4b1827);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4b182a:{NFSU2_TR(0x4b182a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x836568ull))));
}
B4b1830:{NFSU2_TR(0x4b1830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1835ull));
TAIL_STATIC(0x4ff530u,4ff);
}
B4b1835:L4b1835:{c.instructions+=3;NFSU2_TR(0x4b1835);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b183b:{NFSU2_TR(0x4b183b);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b1841:{NFSU2_TR(0x4b1841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1846ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4b1846:L4b1846:{c.instructions+=4;NFSU2_TR(0x4b1846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1847:{NFSU2_TR(0x4b1847);
u8 U[4];
w4(U+0,u32(0x790f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b184c:{NFSU2_TR(0x4b184c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b184d:{NFSU2_TR(0x4b184d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1852ull));
TAIL_STATIC(0x537be0u,537);
}
B4b1852:L4b1852:{c.instructions+=1;NFSU2_TR(0x4b1852);
{goto L4b1880;}
}
B4b1854:L4b1854:{c.instructions+=2;NFSU2_TR(0x4b1854);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1856:{NFSU2_TR(0x4b1856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b185bull));
TAIL_STATIC(0x512240u,512);
}
B4b185b:L4b185b:{c.instructions+=3;NFSU2_TR(0x4b185b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1861:{NFSU2_TR(0x4b1861);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1863:{NFSU2_TR(0x4b1863);
if(r1(R+518)){{goto L4b1871;}}
}
B4b1865:L4b1865:{c.instructions+=3;NFSU2_TR(0x4b1865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1866:{NFSU2_TR(0x4b1866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1867:{NFSU2_TR(0x4b1867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b186cull));
TAIL_STATIC(0x50c900u,50c);
}
B4b186c:L4b186c:{c.instructions+=2;NFSU2_TR(0x4b186c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b186f:{NFSU2_TR(0x4b186f);
{goto L4b1883;}
}
B4b1871:L4b1871:{c.instructions+=5;NFSU2_TR(0x4b1871);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1874:{NFSU2_TR(0x4b1874);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1875:{NFSU2_TR(0x4b1875);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b187a:{NFSU2_TR(0x4b187a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b187b:{NFSU2_TR(0x4b187b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1880ull));
TAIL_STATIC(0x537be0u,537);
}
B4b1880:L4b1880:{c.instructions+=1;NFSU2_TR(0x4b1880);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b1883:L4b1883:{c.instructions+=2;NFSU2_TR(0x4b1883);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4b188a:{NFSU2_TR(0x4b188a);
if(r1(R+518)){{goto L4b1891;}}
}
B4b188c:L4b188c:{c.instructions+=1;NFSU2_TR(0x4b188c);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b1891:L4b1891:{c.instructions+=3;NFSU2_TR(0x4b1891);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b1894:{NFSU2_TR(0x4b1894);
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
B4b1896:{NFSU2_TR(0x4b1896);
if(r1(R+518)){EXIT(0x4b189du);}
}
B4b1898:L4b1898:{c.instructions+=1;NFSU2_TR(0x4b1898);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0xfffffffcull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
EXIT(0x4b189bu);
}
B4b189c:L4b189c:{c.instructions+=5;NFSU2_TR(0x4b189c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(R+9,u8(u32(r1(R+9))+u32(r1(U+0))));
}
B4b189e:{NFSU2_TR(0x4b189e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x85182444ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4b18a4:{NFSU2_TR(0x4b18a4);
u8 U[17];
w4(U+0,u32(u32(u32(0xffffff83ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+13,u32(u32(u32(0xc0ull))&u32(u32(0x1full))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,shl<u8>(r1(U+12),u64(r4(U+13))));
s1(u32(r4(U+8)),r1(U+12));
}
B4b18a9:{NFSU2_TR(0x4b18a9);
w1(R+522,u8(0x0ull));
}
B4b18aa:{NFSU2_TR(0x4b18aa);
{goto L4b18ae;}
}
B4b18ae:L4b18ae:{c.instructions+=2;NFSU2_TR(0x4b18ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b18b0:{NFSU2_TR(0x4b18b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b18cf;}}
}
B4b18b2:L4b18b2:{c.instructions+=3;NFSU2_TR(0x4b18b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b18b5:{NFSU2_TR(0x4b18b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b18b7:{NFSU2_TR(0x4b18b7);
if(r1(R+518)){{goto L4b18be;}}
}
B4b18b9:L4b18b9:{c.instructions+=2;NFSU2_TR(0x4b18b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b18bc:{NFSU2_TR(0x4b18bc);
{goto L4b18c0;}
}
B4b18be:L4b18be:{c.instructions+=1;NFSU2_TR(0x4b18be);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4b18c0:L4b18c0:{c.instructions+=2;NFSU2_TR(0x4b18c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b18c2:{NFSU2_TR(0x4b18c2);
if(r1(R+518)){{goto L4b18c9;}}
}
B4b18c4:L4b18c4:{c.instructions+=2;NFSU2_TR(0x4b18c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b18c7:{NFSU2_TR(0x4b18c7);
{goto L4b18cb;}
}
B4b18c9:L4b18c9:{c.instructions+=1;NFSU2_TR(0x4b18c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b18cb:L4b18cb:{c.instructions+=2;NFSU2_TR(0x4b18cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b18cd:{NFSU2_TR(0x4b18cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b18e5;}}
}
B4b18cf:L4b18cf:{c.instructions+=3;NFSU2_TR(0x4b18cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b18d2:{NFSU2_TR(0x4b18d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b18d4:{NFSU2_TR(0x4b18d4);
if(r1(R+518)){{goto L4b18de;}}
}
B4b18d6:L4b18d6:{c.instructions+=2;NFSU2_TR(0x4b18d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b18d9:{NFSU2_TR(0x4b18d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b17d0u);}goto L4b17d0;}
}
B4b18de:L4b18de:{c.instructions+=2;NFSU2_TR(0x4b18de);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4b18e0:{NFSU2_TR(0x4b18e0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b17d0u);}goto L4b17d0;}
}
B4b18e5:L4b18e5:{c.instructions+=3;NFSU2_TR(0x4b18e5);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b18e9:{NFSU2_TR(0x4b18e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b18eb:{NFSU2_TR(0x4b18eb);
if(r1(R+518)){{goto L4b192e;}}
}
B4b18ed:L4b18ed:{c.instructions+=5;NFSU2_TR(0x4b18ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b18f1:{NFSU2_TR(0x4b18f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b18f4:{NFSU2_TR(0x4b18f4);
u8 U[4];
w4(U+0,u32(0xffcaf48aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b18f9:{NFSU2_TR(0x4b18f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b18fa:{NFSU2_TR(0x4b18fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b18ffull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4b18ff:L4b18ff:{c.instructions+=5;NFSU2_TR(0x4b18ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1903:{NFSU2_TR(0x4b1903);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b1906:{NFSU2_TR(0x4b1906);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b1909:{NFSU2_TR(0x4b1909);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b190b:{NFSU2_TR(0x4b190b);
if(r1(R+518)){{goto L4b1974;}}
}
B4b190d:L4b190d:{c.instructions+=4;NFSU2_TR(0x4b190d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b1911:{NFSU2_TR(0x4b1911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1912:{NFSU2_TR(0x4b1912);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1913:{NFSU2_TR(0x4b1913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1918ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4b1918:L4b1918:{c.instructions+=3;NFSU2_TR(0x4b1918);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b191b:{NFSU2_TR(0x4b191b);
__builtin_memmove((R+4),(R+0),4);
}
B4b191d:{NFSU2_TR(0x4b191d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1922ull));
TAIL_STATIC(0x5054d0u,505);
}
B4b1922:L4b1922:{c.instructions+=3;NFSU2_TR(0x4b1922);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B4b1927:{NFSU2_TR(0x4b1927);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xdc000000ull))));
}
B4b192c:{NFSU2_TR(0x4b192c);
{goto L4b196a;}
}
B4b192e:L4b192e:{c.instructions+=5;NFSU2_TR(0x4b192e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1932:{NFSU2_TR(0x4b1932);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1935:{NFSU2_TR(0x4b1935);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1937:{NFSU2_TR(0x4b1937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1938:{NFSU2_TR(0x4b1938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b193dull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4b193d:L4b193d:{c.instructions+=5;NFSU2_TR(0x4b193d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1941:{NFSU2_TR(0x4b1941);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b1944:{NFSU2_TR(0x4b1944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b1947:{NFSU2_TR(0x4b1947);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1949:{NFSU2_TR(0x4b1949);
if(r1(R+518)){{goto L4b1974;}}
}
B4b194b:L4b194b:{c.instructions+=4;NFSU2_TR(0x4b194b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b194f:{NFSU2_TR(0x4b194f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1950:{NFSU2_TR(0x4b1950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1951:{NFSU2_TR(0x4b1951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1956ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4b1956:L4b1956:{c.instructions+=3;NFSU2_TR(0x4b1956);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b1959:{NFSU2_TR(0x4b1959);
__builtin_memmove((R+4),(R+0),4);
}
B4b195b:{NFSU2_TR(0x4b195b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1960ull));
TAIL_STATIC(0x5054d0u,505);
}
B4b1960:L4b1960:{c.instructions+=2;NFSU2_TR(0x4b1960);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B4b1965:{NFSU2_TR(0x4b1965);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7d000000ull))));
}
B4b196a:L4b196a:{c.instructions+=3;NFSU2_TR(0x4b196a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b196b:{NFSU2_TR(0x4b196b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b196c:{NFSU2_TR(0x4b196c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1971ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4b1971:L4b1971:{c.instructions+=1;NFSU2_TR(0x4b1971);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b1974:L4b1974:{c.instructions+=9;NFSU2_TR(0x4b1974);
__builtin_memmove((R+0),gp(0x836328),4);
}
B4b1979:{NFSU2_TR(0x4b1979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b197a:{NFSU2_TR(0x4b197a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b197b:{NFSU2_TR(0x4b197b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b197c:{NFSU2_TR(0x4b197c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b197d:{NFSU2_TR(0x4b197d);
__builtin_memmove(gp(0x836328),(R+0),4);
}
B4b1982:{NFSU2_TR(0x4b1982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b1983:{NFSU2_TR(0x4b1983);
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
B4b1986:{NFSU2_TR(0x4b1986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1990:L4b1990:{c.instructions+=5;NFSU2_TR(0x4b1990);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1993:{NFSU2_TR(0x4b1993);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1994:{NFSU2_TR(0x4b1994);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b1997:{NFSU2_TR(0x4b1997);
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
B4b1999:{NFSU2_TR(0x4b1999);
if(r1(R+518)){{goto L4b1a4a;}}
}
B4b199f:L4b199f:{c.instructions+=6;NFSU2_TR(0x4b199f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b19a2:{NFSU2_TR(0x4b19a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b19a3:{NFSU2_TR(0x4b19a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b19a6:{NFSU2_TR(0x4b19a6);
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
B4b19a8:{NFSU2_TR(0x4b19a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b19a9:{NFSU2_TR(0x4b19a9);
if(r1(R+518)){{goto L4b1a48;}}
}
B4b19af:L4b19af:{c.instructions+=7;NFSU2_TR(0x4b19af);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b19b1:{NFSU2_TR(0x4b19b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b19b2:{NFSU2_TR(0x4b19b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b19b5:{NFSU2_TR(0x4b19b5);
__builtin_memmove(gp(0x836328),(R+24),4);
}
B4b19bb:{NFSU2_TR(0x4b19bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b19bd:{NFSU2_TR(0x4b19bd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b19bf:{NFSU2_TR(0x4b19bf);
if(r1(R+518)){{goto L4b19c4;}}
}
B4b19c1:L4b19c1:{c.instructions+=1;NFSU2_TR(0x4b19c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b19c4:L4b19c4:{c.instructions+=2;NFSU2_TR(0x4b19c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b19c6:{NFSU2_TR(0x4b19c6);
if(r1(R+518)){{goto L4b19cd;}}
}
B4b19c8:L4b19c8:{c.instructions+=2;NFSU2_TR(0x4b19c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b19cb:{NFSU2_TR(0x4b19cb);
{goto L4b19cf;}
}
B4b19cd:L4b19cd:{c.instructions+=1;NFSU2_TR(0x4b19cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b19cf:L4b19cf:{c.instructions+=2;NFSU2_TR(0x4b19cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b19d1:{NFSU2_TR(0x4b19d1);
if(r1(R+518)){{goto L4b1a0f;}}
}
B4b19d3:L4b19d3:{c.instructions+=2;NFSU2_TR(0x4b19d3);
__builtin_memmove((R+4),(R+24),4);
}
B4b19d5:{NFSU2_TR(0x4b19d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b19daull));
TAIL_STATIC(0x51f1c0u,51f);
}
B4b19da:L4b19da:{c.instructions+=4;NFSU2_TR(0x4b19da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b19dc:{NFSU2_TR(0x4b19dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b19dd:{NFSU2_TR(0x4b19dd);
__builtin_memmove((R+4),(R+24),4);
}
B4b19df:{NFSU2_TR(0x4b19df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b19e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b19e2:L4b19e2:{c.instructions+=3;NFSU2_TR(0x4b19e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b19e5:{NFSU2_TR(0x4b19e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b19e7:{NFSU2_TR(0x4b19e7);
if(r1(R+518)){{goto L4b19ee;}}
}
B4b19e9:L4b19e9:{c.instructions+=2;NFSU2_TR(0x4b19e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b19ec:{NFSU2_TR(0x4b19ec);
{goto L4b19f0;}
}
B4b19ee:L4b19ee:{c.instructions+=1;NFSU2_TR(0x4b19ee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b19f0:L4b19f0:{c.instructions+=2;NFSU2_TR(0x4b19f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b19f2:{NFSU2_TR(0x4b19f2);
if(r1(R+518)){{goto L4b19f9;}}
}
B4b19f4:L4b19f4:{c.instructions+=2;NFSU2_TR(0x4b19f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b19f7:{NFSU2_TR(0x4b19f7);
{goto L4b19fb;}
}
B4b19f9:L4b19f9:{c.instructions+=1;NFSU2_TR(0x4b19f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b19fb:L4b19fb:{c.instructions+=2;NFSU2_TR(0x4b19fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b19fd:{NFSU2_TR(0x4b19fd);
if(r1(R+518)){{goto L4b1a0f;}}
}
B4b19ff:L4b19ff:{c.instructions+=3;NFSU2_TR(0x4b19ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b1a02:{NFSU2_TR(0x4b1a02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1a04:{NFSU2_TR(0x4b1a04);
if(r1(R+518)){{goto L4b1a0b;}}
}
B4b1a06:L4b1a06:{c.instructions+=2;NFSU2_TR(0x4b1a06);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4b1a09:{NFSU2_TR(0x4b1a09);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b19c4u);}goto L4b19c4;}
}
B4b1a0b:L4b1a0b:{c.instructions+=2;NFSU2_TR(0x4b1a0b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b1a0d:{NFSU2_TR(0x4b1a0d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b19c4u);}goto L4b19c4;}
}
B4b1a0f:L4b1a0f:{c.instructions+=3;NFSU2_TR(0x4b1a0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1a11:{NFSU2_TR(0x4b1a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1a12:{NFSU2_TR(0x4b1a12);
if(r1(R+518)){{goto L4b1a19;}}
}
B4b1a14:L4b1a14:{c.instructions+=2;NFSU2_TR(0x4b1a14);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b1a17:{NFSU2_TR(0x4b1a17);
{goto L4b1a1b;}
}
B4b1a19:L4b1a19:{c.instructions+=1;NFSU2_TR(0x4b1a19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1a1b:L4b1a1b:{c.instructions+=2;NFSU2_TR(0x4b1a1b);
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
B4b1a1d:{NFSU2_TR(0x4b1a1d);
if(r1(R+518)){{goto L4b1a48;}}
}
B4b1a1f:L4b1a1f:{c.instructions+=3;NFSU2_TR(0x4b1a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b1a22:{NFSU2_TR(0x4b1a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1a24:{NFSU2_TR(0x4b1a24);
if(r1(R+518)){{goto L4b1a2b;}}
}
B4b1a26:L4b1a26:{c.instructions+=2;NFSU2_TR(0x4b1a26);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4b1a29:{NFSU2_TR(0x4b1a29);
{goto L4b1a30;}
}
B4b1a2b:L4b1a2b:{c.instructions+=2;NFSU2_TR(0x4b1a2b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b1a2d:{NFSU2_TR(0x4b1a2d);
__builtin_memmove((R+4),(R+4),4);
}
B4b1a30:L4b1a30:{c.instructions+=2;NFSU2_TR(0x4b1a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1a32:{NFSU2_TR(0x4b1a32);
if(r1(R+518)){{goto L4b1a39;}}
}
B4b1a34:L4b1a34:{c.instructions+=2;NFSU2_TR(0x4b1a34);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b1a37:{NFSU2_TR(0x4b1a37);
{goto L4b1a3b;}
}
B4b1a39:L4b1a39:{c.instructions+=1;NFSU2_TR(0x4b1a39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1a3b:L4b1a3b:{c.instructions+=2;NFSU2_TR(0x4b1a3b);
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
B4b1a3d:{NFSU2_TR(0x4b1a3d);
if(r1(R+518)){{goto L4b1a48;}}
}
B4b1a3f:L4b1a3f:{c.instructions+=2;NFSU2_TR(0x4b1a3f);
__builtin_memmove((R+4),(R+24),4);
}
B4b1a41:{NFSU2_TR(0x4b1a41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1a46ull));
TAIL_STATIC(0x51f220u,51f);
}
B4b1a46:L4b1a46:{c.instructions+=1;NFSU2_TR(0x4b1a46);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1a1fu);}goto L4b1a1f;}
}
B4b1a48:L4b1a48:{c.instructions+=2;NFSU2_TR(0x4b1a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1a49:{NFSU2_TR(0x4b1a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1a4a:L4b1a4a:{c.instructions+=2;NFSU2_TR(0x4b1a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b1a4b:{NFSU2_TR(0x4b1a4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1a50:L4b1a50:{c.instructions+=6;NFSU2_TR(0x4b1a50);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b1a54:{NFSU2_TR(0x4b1a54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b1a56:{NFSU2_TR(0x4b1a56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1a57:{NFSU2_TR(0x4b1a57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1a58:{NFSU2_TR(0x4b1a58);
__builtin_memmove((R+24),(R+4),4);
}
B4b1a5a:{NFSU2_TR(0x4b1a5a);
if(r1(R+518)){{goto L4b1a91;}}
}
B4b1a5c:L4b1a5c:{c.instructions+=6;NFSU2_TR(0x4b1a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1a5f:{NFSU2_TR(0x4b1a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1a62:{NFSU2_TR(0x4b1a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1a68:{NFSU2_TR(0x4b1a68);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4b1a6a:{NFSU2_TR(0x4b1a6a);
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
B4b1a6c:{NFSU2_TR(0x4b1a6c);
if(r1(R+518)){{goto L4b1ad4;}}
}
B4b1a6e:L4b1a6e:{c.instructions+=4;NFSU2_TR(0x4b1a6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1a71:{NFSU2_TR(0x4b1a71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1a73:{NFSU2_TR(0x4b1a73);
__builtin_memmove((R+4),(R+28),4);
}
B4b1a75:{NFSU2_TR(0x4b1a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1a7aull));
TAIL_STATIC(0x5430c0u,543);
}
B4b1a7a:L4b1a7a:{c.instructions+=8;NFSU2_TR(0x4b1a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1a80:{NFSU2_TR(0x4b1a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1a83:{NFSU2_TR(0x4b1a83);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1a85:{NFSU2_TR(0x4b1a85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4b1a86:{NFSU2_TR(0x4b1a86);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1a88:{NFSU2_TR(0x4b1a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1a8e:{NFSU2_TR(0x4b1a8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1a8f:{NFSU2_TR(0x4b1a8f);
{goto L4b1abc;}
}
B4b1a91:L4b1a91:{c.instructions+=3;NFSU2_TR(0x4b1a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1a97:{NFSU2_TR(0x4b1a97);
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
B4b1a99:{NFSU2_TR(0x4b1a99);
if(r1(R+518)){{goto L4b1ad4;}}
}
B4b1a9b:L4b1a9b:{c.instructions+=4;NFSU2_TR(0x4b1a9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1a9e:{NFSU2_TR(0x4b1a9e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1aa0:{NFSU2_TR(0x4b1aa0);
__builtin_memmove((R+4),(R+28),4);
}
B4b1aa2:{NFSU2_TR(0x4b1aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1aa7ull));
TAIL_STATIC(0x5430c0u,543);
}
B4b1aa7:L4b1aa7:{c.instructions+=7;NFSU2_TR(0x4b1aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1aad:{NFSU2_TR(0x4b1aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1ab0:{NFSU2_TR(0x4b1ab0);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ab2:{NFSU2_TR(0x4b1ab2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4b1ab3:{NFSU2_TR(0x4b1ab3);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ab5:{NFSU2_TR(0x4b1ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1abb:{NFSU2_TR(0x4b1abb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1abc:L4b1abc:{c.instructions+=1;NFSU2_TR(0x4b1abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1ac1ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b1ac1:L4b1ac1:{c.instructions+=4;NFSU2_TR(0x4b1ac1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b1ac4:{NFSU2_TR(0x4b1ac4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ac6:{NFSU2_TR(0x4b1ac6);
__builtin_memmove((R+4),(R+28),4);
}
B4b1ac8:{NFSU2_TR(0x4b1ac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1acdull));
TAIL_STATIC(0x538500u,538);
}
B4b1acd:L4b1acd:{c.instructions+=2;NFSU2_TR(0x4b1acd);
__builtin_memmove((R+4),(R+24),4);
}
B4b1acf:{NFSU2_TR(0x4b1acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1ad4ull));
TAIL_STATIC(0x496f50u,496);
}
B4b1ad4:L4b1ad4:{c.instructions+=3;NFSU2_TR(0x4b1ad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1ad5:{NFSU2_TR(0x4b1ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1ad6:{NFSU2_TR(0x4b1ad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1ae0:L4b1ae0:{c.instructions+=5;NFSU2_TR(0x4b1ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B4b1ae6:{NFSU2_TR(0x4b1ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ae7:{NFSU2_TR(0x4b1ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b1aee:{NFSU2_TR(0x4b1aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1af0:{NFSU2_TR(0x4b1af0);
if(r1(R+518)){{goto L4b1b1a;}}
}
B4b1af2:L4b1af2:{c.instructions+=3;NFSU2_TR(0x4b1af2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1af9:{NFSU2_TR(0x4b1af9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1afa:{NFSU2_TR(0x4b1afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1affull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b1aff:L4b1aff:{c.instructions+=7;NFSU2_TR(0x4b1aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b00:{NFSU2_TR(0x4b1b00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b01:{NFSU2_TR(0x4b1b01);
u8 U[4];
w4(U+0,u32(0x790f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b06:{NFSU2_TR(0x4b1b06);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1b0a:{NFSU2_TR(0x4b1b0a);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b0f:{NFSU2_TR(0x4b1b0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b10:{NFSU2_TR(0x4b1b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1b15ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b1b15:L4b1b15:{c.instructions+=2;NFSU2_TR(0x4b1b15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b1b18:{NFSU2_TR(0x4b1b18);
{goto L4b1b3a;}
}
B4b1b1a:L4b1b1a:{c.instructions+=3;NFSU2_TR(0x4b1b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1b21:{NFSU2_TR(0x4b1b21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b22:{NFSU2_TR(0x4b1b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1b27ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b1b27:L4b1b27:{c.instructions+=5;NFSU2_TR(0x4b1b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b28:{NFSU2_TR(0x4b1b28);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b1b2c:{NFSU2_TR(0x4b1b2c);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b31:{NFSU2_TR(0x4b1b31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b32:{NFSU2_TR(0x4b1b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1b37ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b1b37:L4b1b37:{c.instructions+=1;NFSU2_TR(0x4b1b37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b1b3a:L4b1b3a:{c.instructions+=6;NFSU2_TR(0x4b1b3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b3c:{NFSU2_TR(0x4b1b3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b3e:{NFSU2_TR(0x4b1b3e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1b42:{NFSU2_TR(0x4b1b42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b43:{NFSU2_TR(0x4b1b43);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1b4a:{NFSU2_TR(0x4b1b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1b4full));
TAIL_STATIC(0x4aea60u,4ae);
}
B4b1b4f:L4b1b4f:{c.instructions+=3;NFSU2_TR(0x4b1b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1b50:{NFSU2_TR(0x4b1b50);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b1b56:{NFSU2_TR(0x4b1b56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1b60:L4b1b60:{c.instructions+=7;NFSU2_TR(0x4b1b60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b61:{NFSU2_TR(0x4b1b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1b65:{NFSU2_TR(0x4b1b65);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1b6a:{NFSU2_TR(0x4b1b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b6b:{NFSU2_TR(0x4b1b6b);
__builtin_memmove((R+24),(R+4),4);
}
B4b1b6d:{NFSU2_TR(0x4b1b6d);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b1b72:{NFSU2_TR(0x4b1b72);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b1ba8;}}
}
B4b1b74:L4b1b74:{c.instructions+=1;NFSU2_TR(0x4b1b74);
if(r1(R+518)){{goto L4b1b89;}}
}
B4b1b76:L4b1b76:{c.instructions+=2;NFSU2_TR(0x4b1b76);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b1b7b:{NFSU2_TR(0x4b1b7b);
if(r1(R+518)){{goto L4b1bec;}}
}
B4b1b7d:L4b1b7d:{c.instructions+=2;NFSU2_TR(0x4b1b7d);
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
B4b1b82:{NFSU2_TR(0x4b1b82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1bec;}}
}
B4b1b84:L4b1b84:{c.instructions+=1;NFSU2_TR(0x4b1b84);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b1b89:L4b1b89:{c.instructions+=3;NFSU2_TR(0x4b1b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1b8f:{NFSU2_TR(0x4b1b8f);
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
B4b1b95:{NFSU2_TR(0x4b1b95);
if(r1(R+518)){{goto L4b1bec;}}
}
B4b1b97:L4b1b97:{c.instructions+=4;NFSU2_TR(0x4b1b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1b9b:{NFSU2_TR(0x4b1b9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1b9c:{NFSU2_TR(0x4b1b9c);
__builtin_memmove((R+4),(R+24),4);
}
B4b1b9e:{NFSU2_TR(0x4b1b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1ba3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1a50u);}goto L4b1a50;}
}
B4b1ba3:L4b1ba3:{c.instructions+=3;NFSU2_TR(0x4b1ba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1ba4:{NFSU2_TR(0x4b1ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1ba5:{NFSU2_TR(0x4b1ba5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1ba8:L4b1ba8:{c.instructions+=2;NFSU2_TR(0x4b1ba8);
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
B4b1bad:{NFSU2_TR(0x4b1bad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1bec;}}
}
B4b1baf:L4b1baf:{c.instructions+=3;NFSU2_TR(0x4b1baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1bb5:{NFSU2_TR(0x4b1bb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1bb6:{NFSU2_TR(0x4b1bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1bbbull));
TAIL_STATIC(0x52d100u,52d);
}
B4b1bbb:L4b1bbb:{c.instructions+=3;NFSU2_TR(0x4b1bbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1bbe:{NFSU2_TR(0x4b1bbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b1bc0:{NFSU2_TR(0x4b1bc0);
if(r1(R+518)){{goto L4b1bd0;}}
}
B4b1bc2:L4b1bc2:{c.instructions+=3;NFSU2_TR(0x4b1bc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1bc4:{NFSU2_TR(0x4b1bc4);
__builtin_memmove((R+4),(R+24),4);
}
B4b1bc6:{NFSU2_TR(0x4b1bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1bcbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1a50u);}goto L4b1a50;}
}
B4b1bcb:L4b1bcb:{c.instructions+=3;NFSU2_TR(0x4b1bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1bcc:{NFSU2_TR(0x4b1bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1bcd:{NFSU2_TR(0x4b1bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1bd0:L4b1bd0:{c.instructions+=3;NFSU2_TR(0x4b1bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1bd6:{NFSU2_TR(0x4b1bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1bd7:{NFSU2_TR(0x4b1bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1bdcull));
TAIL_STATIC(0x52d100u,52d);
}
B4b1bdc:L4b1bdc:{c.instructions+=3;NFSU2_TR(0x4b1bdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1bdf:{NFSU2_TR(0x4b1bdf);
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
B4b1be1:{NFSU2_TR(0x4b1be1);
if(r1(R+518)){{goto L4b1bec;}}
}
B4b1be3:L4b1be3:{c.instructions+=3;NFSU2_TR(0x4b1be3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1be5:{NFSU2_TR(0x4b1be5);
__builtin_memmove((R+4),(R+24),4);
}
B4b1be7:{NFSU2_TR(0x4b1be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1becull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1a50u);}goto L4b1a50;}
}
B4b1bec:L4b1bec:{c.instructions+=3;NFSU2_TR(0x4b1bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1bed:{NFSU2_TR(0x4b1bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1bee:{NFSU2_TR(0x4b1bee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1c00:L4b1c00:{c.instructions+=15;NFSU2_TR(0x4b1c00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c01:{NFSU2_TR(0x4b1c01);
__builtin_memmove((R+20),(R+16),4);
}
B4b1c03:{NFSU2_TR(0x4b1c03);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c05:{NFSU2_TR(0x4b1c05);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c0a:{NFSU2_TR(0x4b1c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1c10:{NFSU2_TR(0x4b1c10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c11:{NFSU2_TR(0x4b1c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1c18:{NFSU2_TR(0x4b1c18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c19:{NFSU2_TR(0x4b1c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1c1c:{NFSU2_TR(0x4b1c1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c1d:{NFSU2_TR(0x4b1c1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c1e:{NFSU2_TR(0x4b1c1e);
__builtin_memmove((R+24),(R+4),4);
}
B4b1c20:{NFSU2_TR(0x4b1c20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c21:{NFSU2_TR(0x4b1c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1c24:{NFSU2_TR(0x4b1c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1c29ull));
TAIL_STATIC(0x551de0u,551);
}
B4b1c29:L4b1c29:{c.instructions+=8;NFSU2_TR(0x4b1c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b1c2c:{NFSU2_TR(0x4b1c2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1c2e:{NFSU2_TR(0x4b1c2e);
u8 U[4];
w4(U+0,u32(0x78f760ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b1c34:{NFSU2_TR(0x4b1c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1c37:{NFSU2_TR(0x4b1c37);
__builtin_memmove((R+4),gp(0x83a9d8),4);
}
B4b1c3d:{NFSU2_TR(0x4b1c3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c3e:{NFSU2_TR(0x4b1c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1c41:{NFSU2_TR(0x4b1c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1c46ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4b1c46:L4b1c46:{c.instructions+=3;NFSU2_TR(0x4b1c46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c47:{NFSU2_TR(0x4b1c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c48:{NFSU2_TR(0x4b1c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1c4dull));
TAIL_STATIC(0x537950u,537);
}
B4b1c4d:L4b1c4d:{c.instructions+=3;NFSU2_TR(0x4b1c4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b1c50:{NFSU2_TR(0x4b1c50);
__builtin_memmove((R+4),(R+24),4);
}
B4b1c52:{NFSU2_TR(0x4b1c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1c57ull));
TAIL_STATIC(0x497040u,497);
}
B4b1c57:L4b1c57:{c.instructions+=8;NFSU2_TR(0x4b1c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1c5a:{NFSU2_TR(0x4b1c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1c5b:{NFSU2_TR(0x4b1c5b);
__builtin_memmove((R+0),(R+24),4);
}
B4b1c5d:{NFSU2_TR(0x4b1c5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1c5e:{NFSU2_TR(0x4b1c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1c65:{NFSU2_TR(0x4b1c65);
__builtin_memmove((R+16),(R+20),4);
}
B4b1c67:{NFSU2_TR(0x4b1c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1c68:{NFSU2_TR(0x4b1c68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1c70:L4b1c70:{c.instructions+=3;NFSU2_TR(0x4b1c70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c71:{NFSU2_TR(0x4b1c71);
__builtin_memmove((R+24),(R+4),4);
}
B4b1c73:{NFSU2_TR(0x4b1c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1c78ull));
TAIL_STATIC(0x496fe0u,496);
}
B4b1c78:L4b1c78:{c.instructions+=2;NFSU2_TR(0x4b1c78);
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
B4b1c7d:{NFSU2_TR(0x4b1c7d);
if(r1(R+518)){{goto L4b1c88;}}
}
B4b1c7f:L4b1c7f:{c.instructions+=2;NFSU2_TR(0x4b1c7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c80:{NFSU2_TR(0x4b1c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1c85ull));
TAIL_STATIC(0x575630u,575);
}
B4b1c85:L4b1c85:{c.instructions+=1;NFSU2_TR(0x4b1c85);
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
B4b1c88:L4b1c88:{c.instructions+=3;NFSU2_TR(0x4b1c88);
__builtin_memmove((R+0),(R+24),4);
}
B4b1c8a:{NFSU2_TR(0x4b1c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1c8b:{NFSU2_TR(0x4b1c8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1c90:L4b1c90:{c.instructions+=8;NFSU2_TR(0x4b1c90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c92:{NFSU2_TR(0x4b1c92);
u8 U[4];
w4(U+0,u32(0x772e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c97:{NFSU2_TR(0x4b1c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1c9d:{NFSU2_TR(0x4b1c9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1c9e:{NFSU2_TR(0x4b1c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1ca5:{NFSU2_TR(0x4b1ca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ca6:{NFSU2_TR(0x4b1ca6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ca8:{NFSU2_TR(0x4b1ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1cadull));
TAIL_STATIC(0x575620u,575);
}
B4b1cad:L4b1cad:{c.instructions+=5;NFSU2_TR(0x4b1cad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1cb0:{NFSU2_TR(0x4b1cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4b1cb4:{NFSU2_TR(0x4b1cb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1cb6:{NFSU2_TR(0x4b1cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1cbe:{NFSU2_TR(0x4b1cbe);
if(r1(R+518)){{goto L4b1cdb;}}
}
B4b1cc0:L4b1cc0:{c.instructions+=4;NFSU2_TR(0x4b1cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1cc4:{NFSU2_TR(0x4b1cc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1cc5:{NFSU2_TR(0x4b1cc5);
__builtin_memmove((R+4),(R+0),4);
}
B4b1cc7:{NFSU2_TR(0x4b1cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1cccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1c00u);}goto L4b1c00;}
}
B4b1ccc:L4b1ccc:{c.instructions+=4;NFSU2_TR(0x4b1ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1cd0:{NFSU2_TR(0x4b1cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1cd7:{NFSU2_TR(0x4b1cd7);
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
B4b1cda:{NFSU2_TR(0x4b1cda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1cdb:L4b1cdb:{c.instructions+=5;NFSU2_TR(0x4b1cdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1cdf:{NFSU2_TR(0x4b1cdf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1ce1:{NFSU2_TR(0x4b1ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1ce8:{NFSU2_TR(0x4b1ce8);
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
B4b1ceb:{NFSU2_TR(0x4b1ceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1cf0:L4b1cf0:{c.instructions+=15;NFSU2_TR(0x4b1cf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1cf1:{NFSU2_TR(0x4b1cf1);
__builtin_memmove((R+20),(R+16),4);
}
B4b1cf3:{NFSU2_TR(0x4b1cf3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1cf5:{NFSU2_TR(0x4b1cf5);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1cfa:{NFSU2_TR(0x4b1cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1d00:{NFSU2_TR(0x4b1d00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d01:{NFSU2_TR(0x4b1d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1d08:{NFSU2_TR(0x4b1d08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d09:{NFSU2_TR(0x4b1d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1d0c:{NFSU2_TR(0x4b1d0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d0d:{NFSU2_TR(0x4b1d0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d0e:{NFSU2_TR(0x4b1d0e);
__builtin_memmove((R+24),(R+4),4);
}
B4b1d10:{NFSU2_TR(0x4b1d10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d11:{NFSU2_TR(0x4b1d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1d14:{NFSU2_TR(0x4b1d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1d19ull));
TAIL_STATIC(0x551de0u,551);
}
B4b1d19:L4b1d19:{c.instructions+=6;NFSU2_TR(0x4b1d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b1d1c:{NFSU2_TR(0x4b1d1c);
u8 U[4];
w4(U+0,u32(0x790f78ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b1d22:{NFSU2_TR(0x4b1d22);
__builtin_memmove((R+4),gp(0x83a9d8),4);
}
B4b1d28:{NFSU2_TR(0x4b1d28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d29:{NFSU2_TR(0x4b1d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1d30:{NFSU2_TR(0x4b1d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1d35ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4b1d35:L4b1d35:{c.instructions+=3;NFSU2_TR(0x4b1d35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d36:{NFSU2_TR(0x4b1d36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d37:{NFSU2_TR(0x4b1d37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1d3cull));
TAIL_STATIC(0x537950u,537);
}
B4b1d3c:L4b1d3c:{c.instructions+=3;NFSU2_TR(0x4b1d3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b1d3f:{NFSU2_TR(0x4b1d3f);
__builtin_memmove((R+4),(R+24),4);
}
B4b1d41:{NFSU2_TR(0x4b1d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1d46ull));
TAIL_STATIC(0x497330u,497);
}
B4b1d46:L4b1d46:{c.instructions+=8;NFSU2_TR(0x4b1d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1d49:{NFSU2_TR(0x4b1d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1d4a:{NFSU2_TR(0x4b1d4a);
__builtin_memmove((R+0),(R+24),4);
}
B4b1d4c:{NFSU2_TR(0x4b1d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1d4d:{NFSU2_TR(0x4b1d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1d54:{NFSU2_TR(0x4b1d54);
__builtin_memmove((R+16),(R+20),4);
}
B4b1d56:{NFSU2_TR(0x4b1d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b1d57:{NFSU2_TR(0x4b1d57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1d60:L4b1d60:{c.instructions+=3;NFSU2_TR(0x4b1d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d61:{NFSU2_TR(0x4b1d61);
__builtin_memmove((R+24),(R+4),4);
}
B4b1d63:{NFSU2_TR(0x4b1d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1d68ull));
{goto L4b1d80;}
}
B4b1d68:L4b1d68:{c.instructions+=2;NFSU2_TR(0x4b1d68);
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
B4b1d6d:{NFSU2_TR(0x4b1d6d);
if(r1(R+518)){{goto L4b1d78;}}
}
B4b1d6f:L4b1d6f:{c.instructions+=2;NFSU2_TR(0x4b1d6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d70:{NFSU2_TR(0x4b1d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1d75ull));
TAIL_STATIC(0x575630u,575);
}
B4b1d75:L4b1d75:{c.instructions+=1;NFSU2_TR(0x4b1d75);
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
B4b1d78:L4b1d78:{c.instructions+=3;NFSU2_TR(0x4b1d78);
__builtin_memmove((R+0),(R+24),4);
}
B4b1d7a:{NFSU2_TR(0x4b1d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1d7b:{NFSU2_TR(0x4b1d7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1d80:L4b1d80:{c.instructions+=1;NFSU2_TR(0x4b1d80);
TAIL_STATIC(0x510d40u,510);
}
B4b1d90:L4b1d90:{c.instructions+=8;NFSU2_TR(0x4b1d90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d92:{NFSU2_TR(0x4b1d92);
u8 U[4];
w4(U+0,u32(0x772ea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d97:{NFSU2_TR(0x4b1d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1d9d:{NFSU2_TR(0x4b1d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1d9e:{NFSU2_TR(0x4b1d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1da5:{NFSU2_TR(0x4b1da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1da6:{NFSU2_TR(0x4b1da6);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1da8:{NFSU2_TR(0x4b1da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1dadull));
TAIL_STATIC(0x575620u,575);
}
B4b1dad:L4b1dad:{c.instructions+=5;NFSU2_TR(0x4b1dad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1db0:{NFSU2_TR(0x4b1db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4b1db4:{NFSU2_TR(0x4b1db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1db6:{NFSU2_TR(0x4b1db6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b1dbe:{NFSU2_TR(0x4b1dbe);
if(r1(R+518)){{goto L4b1ddb;}}
}
B4b1dc0:L4b1dc0:{c.instructions+=4;NFSU2_TR(0x4b1dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1dc4:{NFSU2_TR(0x4b1dc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1dc5:{NFSU2_TR(0x4b1dc5);
__builtin_memmove((R+4),(R+0),4);
}
B4b1dc7:{NFSU2_TR(0x4b1dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1dccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1cf0u);}goto L4b1cf0;}
}
B4b1dcc:L4b1dcc:{c.instructions+=4;NFSU2_TR(0x4b1dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1dd0:{NFSU2_TR(0x4b1dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1dd7:{NFSU2_TR(0x4b1dd7);
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
B4b1dda:{NFSU2_TR(0x4b1dda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1ddb:L4b1ddb:{c.instructions+=5;NFSU2_TR(0x4b1ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1ddf:{NFSU2_TR(0x4b1ddf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1de1:{NFSU2_TR(0x4b1de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b1de8:{NFSU2_TR(0x4b1de8);
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
B4b1deb:{NFSU2_TR(0x4b1deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1df0:L4b1df0:{c.instructions+=5;NFSU2_TR(0x4b1df0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1df1:{NFSU2_TR(0x4b1df1);
__builtin_memmove((R+24),(R+4),4);
}
B4b1df3:{NFSU2_TR(0x4b1df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1df6:{NFSU2_TR(0x4b1df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1df8:{NFSU2_TR(0x4b1df8);
if(r1(R+518)){{goto L4b1dff;}}
}
B4b1dfa:L4b1dfa:{c.instructions+=2;NFSU2_TR(0x4b1dfa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b1dfd:{NFSU2_TR(0x4b1dfd);
{goto L4b1e01;}
}
B4b1dff:L4b1dff:{c.instructions+=1;NFSU2_TR(0x4b1dff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1e01:L4b1e01:{c.instructions+=2;NFSU2_TR(0x4b1e01);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b1e04:{NFSU2_TR(0x4b1e04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1e14;}}
}
B4b1e06:L4b1e06:{c.instructions+=3;NFSU2_TR(0x4b1e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1e0c:{NFSU2_TR(0x4b1e0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e0d:{NFSU2_TR(0x4b1e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1e12ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b1e12:L4b1e12:{c.instructions+=1;NFSU2_TR(0x4b1e12);
{goto L4b1e20;}
}
B4b1e14:L4b1e14:{c.instructions+=3;NFSU2_TR(0x4b1e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1e1a:{NFSU2_TR(0x4b1e1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e1b:{NFSU2_TR(0x4b1e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1e20ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b1e20:L4b1e20:{c.instructions+=4;NFSU2_TR(0x4b1e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1e23:{NFSU2_TR(0x4b1e23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1e26:{NFSU2_TR(0x4b1e26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1e28:{NFSU2_TR(0x4b1e28);
if(r1(R+518)){{goto L4b1e2f;}}
}
B4b1e2a:L4b1e2a:{c.instructions+=2;NFSU2_TR(0x4b1e2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b1e2d:{NFSU2_TR(0x4b1e2d);
{goto L4b1e31;}
}
B4b1e2f:L4b1e2f:{c.instructions+=1;NFSU2_TR(0x4b1e2f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1e31:L4b1e31:{c.instructions+=2;NFSU2_TR(0x4b1e31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b1e34:{NFSU2_TR(0x4b1e34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b1e47;}}
}
B4b1e36:L4b1e36:{c.instructions+=3;NFSU2_TR(0x4b1e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1e3c:{NFSU2_TR(0x4b1e3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e3d:{NFSU2_TR(0x4b1e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1e42ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b1e42:L4b1e42:{c.instructions+=3;NFSU2_TR(0x4b1e42);
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
B4b1e45:{NFSU2_TR(0x4b1e45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1e46:{NFSU2_TR(0x4b1e46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1e47:L4b1e47:{c.instructions+=3;NFSU2_TR(0x4b1e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1e4d:{NFSU2_TR(0x4b1e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e4e:{NFSU2_TR(0x4b1e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1e53ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b1e53:L4b1e53:{c.instructions+=3;NFSU2_TR(0x4b1e53);
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
B4b1e56:{NFSU2_TR(0x4b1e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1e57:{NFSU2_TR(0x4b1e57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1e60:L4b1e60:{c.instructions+=7;NFSU2_TR(0x4b1e60);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b1e64:{NFSU2_TR(0x4b1e64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b1e66:{NFSU2_TR(0x4b1e66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e67:{NFSU2_TR(0x4b1e67);
__builtin_memmove((R+24),(R+4),4);
}
B4b1e69:{NFSU2_TR(0x4b1e69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e6a:{NFSU2_TR(0x4b1e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1e6d:{NFSU2_TR(0x4b1e6d);
if(r1(R+518)){{goto L4b1ebb;}}
}
B4b1e6f:L4b1e6f:{c.instructions+=3;NFSU2_TR(0x4b1e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1e72:{NFSU2_TR(0x4b1e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1e74:{NFSU2_TR(0x4b1e74);
if(r1(R+518)){{goto L4b1e7b;}}
}
B4b1e76:L4b1e76:{c.instructions+=2;NFSU2_TR(0x4b1e76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b1e79:{NFSU2_TR(0x4b1e79);
{goto L4b1e7d;}
}
B4b1e7b:L4b1e7b:{c.instructions+=1;NFSU2_TR(0x4b1e7b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1e7d:L4b1e7d:{c.instructions+=2;NFSU2_TR(0x4b1e7d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b1e80:{NFSU2_TR(0x4b1e80);
if(r1(R+518)){{goto L4b1f17;}}
}
B4b1e86:L4b1e86:{c.instructions+=2;NFSU2_TR(0x4b1e86);
__builtin_memmove((R+4),(R+28),4);
}
B4b1e88:{NFSU2_TR(0x4b1e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1e8dull));
TAIL_STATIC(0x54eb40u,54e);
}
B4b1e8d:L4b1e8d:{c.instructions+=5;NFSU2_TR(0x4b1e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1e90:{NFSU2_TR(0x4b1e90);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e92:{NFSU2_TR(0x4b1e92);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e94:{NFSU2_TR(0x4b1e94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1e95:{NFSU2_TR(0x4b1e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1e9aull));
TAIL_STATIC(0x50d150u,50d);
}
B4b1e9a:L4b1e9a:{c.instructions+=7;NFSU2_TR(0x4b1e9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b1ea0:{NFSU2_TR(0x4b1ea0);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4b1ea2:{NFSU2_TR(0x4b1ea2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b1ea8:{NFSU2_TR(0x4b1ea8);
w4(R+0,u32(r1(R+0)));
}
B4b1eab:{NFSU2_TR(0x4b1eab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4428ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4b1eb2:{NFSU2_TR(0x4b1eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4424ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4b1eb9:{NFSU2_TR(0x4b1eb9);
{goto L4b1f02;}
}
B4b1ebb:L4b1ebb:{c.instructions+=3;NFSU2_TR(0x4b1ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1ebe:{NFSU2_TR(0x4b1ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1ec0:{NFSU2_TR(0x4b1ec0);
if(r1(R+518)){{goto L4b1ec7;}}
}
B4b1ec2:L4b1ec2:{c.instructions+=2;NFSU2_TR(0x4b1ec2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4b1ec5:{NFSU2_TR(0x4b1ec5);
{goto L4b1ec9;}
}
B4b1ec7:L4b1ec7:{c.instructions+=1;NFSU2_TR(0x4b1ec7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b1ec9:L4b1ec9:{c.instructions+=2;NFSU2_TR(0x4b1ec9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b1ecc:{NFSU2_TR(0x4b1ecc);
if(r1(R+518)){{goto L4b1f17;}}
}
B4b1ece:L4b1ece:{c.instructions+=2;NFSU2_TR(0x4b1ece);
__builtin_memmove((R+4),(R+28),4);
}
B4b1ed0:{NFSU2_TR(0x4b1ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1ed5ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4b1ed5:L4b1ed5:{c.instructions+=5;NFSU2_TR(0x4b1ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1ed8:{NFSU2_TR(0x4b1ed8);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1eda:{NFSU2_TR(0x4b1eda);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1edc:{NFSU2_TR(0x4b1edc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1edd:{NFSU2_TR(0x4b1edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1ee2ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b1ee2:L4b1ee2:{c.instructions+=7;NFSU2_TR(0x4b1ee2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4b1ee8:{NFSU2_TR(0x4b1ee8);
w1(R+8,u8(u32(r1(R+8))-u32(u8(0x1ull))));
}
B4b1eea:{NFSU2_TR(0x4b1eea);
w4(R+0,u32(r1(R+8)));
}
B4b1eed:{NFSU2_TR(0x4b1eed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4b1ef0:{NFSU2_TR(0x4b1ef0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b1ef6:{NFSU2_TR(0x4b1ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f4428ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1efc:{NFSU2_TR(0x4b1efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f442cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1f02:L4b1f02:{c.instructions+=4;NFSU2_TR(0x4b1f02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f04:{NFSU2_TR(0x4b1f04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f05:{NFSU2_TR(0x4b1f05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f06:{NFSU2_TR(0x4b1f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1f0bull));
TAIL_STATIC(0x537980u,537);
}
B4b1f0b:L4b1f0b:{c.instructions+=4;NFSU2_TR(0x4b1f0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b1f0e:{NFSU2_TR(0x4b1f0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f10:{NFSU2_TR(0x4b1f10);
__builtin_memmove((R+4),(R+28),4);
}
B4b1f12:{NFSU2_TR(0x4b1f12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1f17ull));
TAIL_STATIC(0x538500u,538);
}
B4b1f17:L4b1f17:{c.instructions+=3;NFSU2_TR(0x4b1f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b1f18:{NFSU2_TR(0x4b1f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1f19:{NFSU2_TR(0x4b1f19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1f20:L4b1f20:{c.instructions+=6;NFSU2_TR(0x4b1f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1f24:{NFSU2_TR(0x4b1f24);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1f29:{NFSU2_TR(0x4b1f29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f2a:{NFSU2_TR(0x4b1f2a);
__builtin_memmove((R+24),(R+4),4);
}
B4b1f2c:{NFSU2_TR(0x4b1f2c);
w4(R+4,u32(0x8ull));
}
B4b1f31:{NFSU2_TR(0x4b1f31);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b1fa0;}}
}
B4b1f33:L4b1f33:{c.instructions+=1;NFSU2_TR(0x4b1f33);
if(r1(R+518)){TAIL_STATIC(0x4b200au,4b2);}
}
B4b1f39:L4b1f39:{c.instructions+=2;NFSU2_TR(0x4b1f39);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1f3e:{NFSU2_TR(0x4b1f3e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b1f62;}}
}
B4b1f40:L4b1f40:{c.instructions+=1;NFSU2_TR(0x4b1f40);
if(r1(R+518)){{goto L4b1f72;}}
}
B4b1f42:L4b1f42:{c.instructions+=2;NFSU2_TR(0x4b1f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1f47:{NFSU2_TR(0x4b1f47);
if(r1(R+518)){{goto L4b1f72;}}
}
B4b1f49:L4b1f49:{c.instructions+=2;NFSU2_TR(0x4b1f49);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b1f4e:{NFSU2_TR(0x4b1f4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4b2033u,4b2);}
}
B4b1f54:L4b1f54:{c.instructions+=2;NFSU2_TR(0x4b1f54);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f56:{NFSU2_TR(0x4b1f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1f5bull));
TAIL_STATIC(0x50d180u,50d);
}
B4b1f5b:L4b1f5b:{c.instructions+=3;NFSU2_TR(0x4b1f5b);
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
B4b1f5e:{NFSU2_TR(0x4b1f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1f5f:{NFSU2_TR(0x4b1f5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1f62:L4b1f62:{c.instructions+=2;NFSU2_TR(0x4b1f62);
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
B4b1f67:{NFSU2_TR(0x4b1f67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4b2033u,4b2);}
}
B4b1f6d:L4b1f6d:{c.instructions+=1;NFSU2_TR(0x4b1f6d);
w4(R+4,u32(0xaull));
}
B4b1f72:L4b1f72:{c.instructions+=3;NFSU2_TR(0x4b1f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1f78:{NFSU2_TR(0x4b1f78);
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
B4b1f7e:{NFSU2_TR(0x4b1f7e);
if(r1(R+518)){TAIL_STATIC(0x4b2033u,4b2);}
}
B4b1f84:L4b1f84:{c.instructions+=6;NFSU2_TR(0x4b1f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1f87:{NFSU2_TR(0x4b1f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b1f8a:{NFSU2_TR(0x4b1f8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f8b:{NFSU2_TR(0x4b1f8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f8c:{NFSU2_TR(0x4b1f8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1f8d:{NFSU2_TR(0x4b1f8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1f92ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b1f92:L4b1f92:{c.instructions+=4;NFSU2_TR(0x4b1f92);
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
B4b1f95:{NFSU2_TR(0x4b1f95);
s1(0x837aa4,u8(0x1ull));
}
B4b1f9c:{NFSU2_TR(0x4b1f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1f9d:{NFSU2_TR(0x4b1f9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1fa0:L4b1fa0:{c.instructions+=2;NFSU2_TR(0x4b1fa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1fa5:{NFSU2_TR(0x4b1fa5);
if(r1(R+518)){{goto L4b1ff7;}}
}
B4b1fa7:L4b1fa7:{c.instructions+=2;NFSU2_TR(0x4b1fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b1fac:{NFSU2_TR(0x4b1fac);
if(r1(R+518)){TAIL_STATIC(0x4b202au,4b2);}
}
B4b1fae:L4b1fae:{c.instructions+=2;NFSU2_TR(0x4b1fae);
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
B4b1fb3:{NFSU2_TR(0x4b1fb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4b2033u,4b2);}
}
B4b1fb5:L4b1fb5:{c.instructions+=3;NFSU2_TR(0x4b1fb5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1fb7:{NFSU2_TR(0x4b1fb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b1fba:{NFSU2_TR(0x4b1fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1fbfull));
TAIL_STATIC(0x538500u,538);
}
B4b1fbf:L4b1fbf:{c.instructions+=3;NFSU2_TR(0x4b1fbf);
__builtin_memmove((R+0),gp(0x837aa4),1);
}
B4b1fc4:{NFSU2_TR(0x4b1fc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b1fc6:{NFSU2_TR(0x4b1fc6);
if(r1(R+518)){{goto L4b1fec;}}
}
B4b1fc8:L4b1fc8:{c.instructions+=4;NFSU2_TR(0x4b1fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b1fcb:{NFSU2_TR(0x4b1fcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1fcc:{NFSU2_TR(0x4b1fcc);
s1(0x837aa4,u8(0x0ull));
}
B4b1fd3:{NFSU2_TR(0x4b1fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1fd8ull));
TAIL_STATIC(0x5379a0u,537);
}
B4b1fd8:L4b1fd8:{c.instructions+=4;NFSU2_TR(0x4b1fd8);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4b1fde:{NFSU2_TR(0x4b1fde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b1fe1:{NFSU2_TR(0x4b1fe1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1fe3:{NFSU2_TR(0x4b1fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1fe8ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4b1fe8:L4b1fe8:{c.instructions+=2;NFSU2_TR(0x4b1fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1fe9:{NFSU2_TR(0x4b1fe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1fec:L4b1fec:{c.instructions+=2;NFSU2_TR(0x4b1fec);
__builtin_memmove((R+4),(R+24),4);
}
B4b1fee:{NFSU2_TR(0x4b1fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b1ff3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b1df0u);}goto L4b1df0;}
}
B4b1ff3:L4b1ff3:{c.instructions+=2;NFSU2_TR(0x4b1ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b1ff4:{NFSU2_TR(0x4b1ff4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b1ff7:L4b1ff7:{c.instructions+=3;NFSU2_TR(0x4b1ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b1ffd:{NFSU2_TR(0x4b1ffd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b1ffe:{NFSU2_TR(0x4b1ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b2003ull));
TAIL_STATIC(0x52d100u,52d);
}
XIT:NFSU2_TR_EXIT(0x4b1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
