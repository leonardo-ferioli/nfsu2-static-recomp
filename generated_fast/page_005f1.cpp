#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_44b(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4f8(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 page_5f1(Cpu& c){return body_5f1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f1001:goto L5f1001;
case 0x5f1003:c.instructions+=3;goto B5f1003;
case 0x5f1005:c.instructions+=2;goto B5f1005;
case 0x5f1009:c.instructions+=1;goto B5f1009;
case 0x5f100b:goto L5f100b;
case 0x5f1011:c.instructions+=2;goto B5f1011;
case 0x5f1013:c.instructions+=1;goto B5f1013;
case 0x5f1015:goto L5f1015;
case 0x5f101b:c.instructions+=2;goto B5f101b;
case 0x5f101d:c.instructions+=1;goto B5f101d;
case 0x5f1023:goto L5f1023;
case 0x5f1026:c.instructions+=2;goto B5f1026;
case 0x5f1029:c.instructions+=1;goto B5f1029;
case 0x5f102f:goto L5f102f;
case 0x5f1032:c.instructions+=27;goto B5f1032;
case 0x5f1034:c.instructions+=26;goto B5f1034;
case 0x5f103a:c.instructions+=25;goto B5f103a;
case 0x5f103d:c.instructions+=24;goto B5f103d;
case 0x5f1043:c.instructions+=23;goto B5f1043;
case 0x5f1045:c.instructions+=22;goto B5f1045;
case 0x5f1047:c.instructions+=21;goto B5f1047;
case 0x5f1049:c.instructions+=20;goto B5f1049;
case 0x5f104b:c.instructions+=19;goto B5f104b;
case 0x5f104d:c.instructions+=18;goto B5f104d;
case 0x5f104f:c.instructions+=17;goto B5f104f;
case 0x5f1051:c.instructions+=16;goto B5f1051;
case 0x5f1053:c.instructions+=15;goto B5f1053;
case 0x5f1057:c.instructions+=14;goto B5f1057;
case 0x5f1059:c.instructions+=13;goto B5f1059;
case 0x5f105f:c.instructions+=12;goto B5f105f;
case 0x5f1062:c.instructions+=11;goto B5f1062;
case 0x5f1068:c.instructions+=10;goto B5f1068;
case 0x5f106a:c.instructions+=9;goto B5f106a;
case 0x5f106c:c.instructions+=8;goto B5f106c;
case 0x5f106e:c.instructions+=7;goto B5f106e;
case 0x5f1070:c.instructions+=6;goto B5f1070;
case 0x5f1072:c.instructions+=5;goto B5f1072;
case 0x5f1074:c.instructions+=4;goto B5f1074;
case 0x5f1076:c.instructions+=3;goto B5f1076;
case 0x5f1078:c.instructions+=2;goto B5f1078;
case 0x5f107c:c.instructions+=1;goto B5f107c;
case 0x5f107e:goto L5f107e;
case 0x5f1082:c.instructions+=4;goto B5f1082;
case 0x5f1086:c.instructions+=3;goto B5f1086;
case 0x5f1088:c.instructions+=2;goto B5f1088;
case 0x5f108b:c.instructions+=1;goto B5f108b;
case 0x5f108d:goto L5f108d;
case 0x5f1091:c.instructions+=1;goto B5f1091;
case 0x5f1093:goto L5f1093;
case 0x5f1095:c.instructions+=28;goto B5f1095;
case 0x5f109b:c.instructions+=27;goto B5f109b;
case 0x5f109e:c.instructions+=26;goto B5f109e;
case 0x5f10a4:c.instructions+=25;goto B5f10a4;
case 0x5f10a6:c.instructions+=24;goto B5f10a6;
case 0x5f10a8:c.instructions+=23;goto B5f10a8;
case 0x5f10aa:c.instructions+=22;goto B5f10aa;
case 0x5f10ac:c.instructions+=21;goto B5f10ac;
case 0x5f10ae:c.instructions+=20;goto B5f10ae;
case 0x5f10b0:c.instructions+=19;goto B5f10b0;
case 0x5f10b2:c.instructions+=18;goto B5f10b2;
case 0x5f10b4:c.instructions+=17;goto B5f10b4;
case 0x5f10b6:c.instructions+=16;goto B5f10b6;
case 0x5f10bc:c.instructions+=15;goto B5f10bc;
case 0x5f10bf:c.instructions+=14;goto B5f10bf;
case 0x5f10c5:c.instructions+=13;goto B5f10c5;
case 0x5f10c7:c.instructions+=12;goto B5f10c7;
case 0x5f10c9:c.instructions+=11;goto B5f10c9;
case 0x5f10cb:c.instructions+=10;goto B5f10cb;
case 0x5f10cd:c.instructions+=9;goto B5f10cd;
case 0x5f10cf:c.instructions+=8;goto B5f10cf;
case 0x5f10d1:c.instructions+=7;goto B5f10d1;
case 0x5f10d3:c.instructions+=6;goto B5f10d3;
case 0x5f10d5:c.instructions+=5;goto B5f10d5;
case 0x5f10d9:c.instructions+=4;goto B5f10d9;
case 0x5f10dd:c.instructions+=3;goto B5f10dd;
case 0x5f10df:c.instructions+=2;goto B5f10df;
case 0x5f10e2:c.instructions+=1;goto B5f10e2;
case 0x5f10e4:goto L5f10e4;
case 0x5f10e6:c.instructions+=1;goto B5f10e6;
case 0x5f10ea:goto L5f10ea;
case 0x5f10ee:c.instructions+=4;goto B5f10ee;
case 0x5f10f0:c.instructions+=3;goto B5f10f0;
case 0x5f10f2:c.instructions+=2;goto B5f10f2;
case 0x5f10f5:c.instructions+=1;goto B5f10f5;
case 0x5f10f7:goto L5f10f7;
case 0x5f10f9:c.instructions+=1;goto B5f10f9;
case 0x5f10fd:goto L5f10fd;
case 0x5f1101:c.instructions+=4;goto B5f1101;
case 0x5f1103:c.instructions+=3;goto B5f1103;
case 0x5f1105:c.instructions+=2;goto B5f1105;
case 0x5f1108:c.instructions+=1;goto B5f1108;
case 0x5f110a:goto L5f110a;
case 0x5f110c:goto L5f110c;
case 0x5f1110:goto L5f1110;
case 0x5f1114:c.instructions+=4;goto B5f1114;
case 0x5f1116:c.instructions+=3;goto B5f1116;
case 0x5f1118:c.instructions+=2;goto B5f1118;
case 0x5f111b:c.instructions+=1;goto B5f111b;
case 0x5f111d:goto L5f111d;
case 0x5f111f:c.instructions+=1;goto B5f111f;
case 0x5f1123:goto L5f1123;
case 0x5f1127:c.instructions+=4;goto B5f1127;
case 0x5f1129:c.instructions+=3;goto B5f1129;
case 0x5f112b:c.instructions+=2;goto B5f112b;
case 0x5f112e:c.instructions+=1;goto B5f112e;
case 0x5f1130:goto L5f1130;
case 0x5f1132:goto L5f1132;
case 0x5f1136:c.instructions+=2;goto B5f1136;
case 0x5f1139:c.instructions+=1;goto B5f1139;
case 0x5f113c:goto L5f113c;
case 0x5f1140:c.instructions+=4;goto B5f1140;
case 0x5f1144:c.instructions+=3;goto B5f1144;
case 0x5f1146:c.instructions+=2;goto B5f1146;
case 0x5f1149:c.instructions+=1;goto B5f1149;
case 0x5f114b:goto L5f114b;
case 0x5f114f:goto L5f114f;
case 0x5f1152:c.instructions+=1;goto B5f1152;
case 0x5f1160:goto L5f1160;
case 0x5f1163:c.instructions+=8;goto B5f1163;
case 0x5f1164:c.instructions+=7;goto B5f1164;
case 0x5f1166:c.instructions+=6;goto B5f1166;
case 0x5f1167:c.instructions+=5;goto B5f1167;
case 0x5f116b:c.instructions+=4;goto B5f116b;
case 0x5f1171:c.instructions+=3;goto B5f1171;
case 0x5f1172:c.instructions+=2;goto B5f1172;
case 0x5f1173:c.instructions+=1;goto B5f1173;
case 0x5f1178:goto L5f1178;
case 0x5f117c:c.instructions+=4;goto B5f117c;
case 0x5f1182:c.instructions+=3;goto B5f1182;
case 0x5f1183:c.instructions+=2;goto B5f1183;
case 0x5f1184:c.instructions+=1;goto B5f1184;
case 0x5f1189:goto L5f1189;
case 0x5f118d:c.instructions+=4;goto B5f118d;
case 0x5f1192:c.instructions+=3;goto B5f1192;
case 0x5f1195:c.instructions+=2;goto B5f1195;
case 0x5f1197:c.instructions+=1;goto B5f1197;
case 0x5f1199:goto L5f1199;
case 0x5f119e:c.instructions+=2;goto B5f119e;
case 0x5f11a0:c.instructions+=1;goto B5f11a0;
case 0x5f11a2:goto L5f11a2;
case 0x5f11a7:c.instructions+=2;goto B5f11a7;
case 0x5f11a9:c.instructions+=1;goto B5f11a9;
case 0x5f11af:goto L5f11af;
case 0x5f11b3:c.instructions+=1;goto B5f11b3;
case 0x5f11b9:goto L5f11b9;
case 0x5f11bf:c.instructions+=3;goto B5f11bf;
case 0x5f11c0:c.instructions+=2;goto B5f11c0;
case 0x5f11c1:c.instructions+=1;goto B5f11c1;
case 0x5f11c6:goto L5f11c6;
case 0x5f11ca:c.instructions+=4;goto B5f11ca;
case 0x5f11d0:c.instructions+=3;goto B5f11d0;
case 0x5f11d1:c.instructions+=2;goto B5f11d1;
case 0x5f11d2:c.instructions+=1;goto B5f11d2;
case 0x5f11d7:goto L5f11d7;
case 0x5f11db:c.instructions+=4;goto B5f11db;
case 0x5f11de:c.instructions+=3;goto B5f11de;
case 0x5f11e1:c.instructions+=2;goto B5f11e1;
case 0x5f11e4:c.instructions+=1;goto B5f11e4;
case 0x5f11e6:goto L5f11e6;
case 0x5f11ea:c.instructions+=4;goto B5f11ea;
case 0x5f11ee:c.instructions+=3;goto B5f11ee;
case 0x5f11f0:c.instructions+=2;goto B5f11f0;
case 0x5f11f3:c.instructions+=1;goto B5f11f3;
case 0x5f11f5:goto L5f11f5;
case 0x5f11f9:c.instructions+=1;goto B5f11f9;
case 0x5f11fb:goto L5f11fb;
case 0x5f1201:c.instructions+=3;goto B5f1201;
case 0x5f1202:c.instructions+=2;goto B5f1202;
case 0x5f1203:c.instructions+=1;goto B5f1203;
case 0x5f1208:goto L5f1208;
case 0x5f120c:c.instructions+=4;goto B5f120c;
case 0x5f1212:c.instructions+=3;goto B5f1212;
case 0x5f1213:c.instructions+=2;goto B5f1213;
case 0x5f1214:c.instructions+=1;goto B5f1214;
case 0x5f1219:goto L5f1219;
case 0x5f121d:c.instructions+=5;goto B5f121d;
case 0x5f121f:c.instructions+=4;goto B5f121f;
case 0x5f1222:c.instructions+=3;goto B5f1222;
case 0x5f1224:c.instructions+=2;goto B5f1224;
case 0x5f1227:c.instructions+=1;goto B5f1227;
case 0x5f1229:goto L5f1229;
case 0x5f122b:c.instructions+=1;goto B5f122b;
case 0x5f122f:goto L5f122f;
case 0x5f1233:c.instructions+=4;goto B5f1233;
case 0x5f1235:c.instructions+=3;goto B5f1235;
case 0x5f1237:c.instructions+=2;goto B5f1237;
case 0x5f123a:c.instructions+=1;goto B5f123a;
case 0x5f123c:goto L5f123c;
case 0x5f123e:c.instructions+=1;goto B5f123e;
case 0x5f1242:goto L5f1242;
case 0x5f1246:c.instructions+=4;goto B5f1246;
case 0x5f1248:c.instructions+=3;goto B5f1248;
case 0x5f124a:c.instructions+=2;goto B5f124a;
case 0x5f124d:c.instructions+=1;goto B5f124d;
case 0x5f124f:goto L5f124f;
case 0x5f1251:goto L5f1251;
case 0x5f1255:goto L5f1255;
case 0x5f1259:c.instructions+=4;goto B5f1259;
case 0x5f125b:c.instructions+=3;goto B5f125b;
case 0x5f125d:c.instructions+=2;goto B5f125d;
case 0x5f1260:c.instructions+=1;goto B5f1260;
case 0x5f1262:goto L5f1262;
case 0x5f1264:c.instructions+=1;goto B5f1264;
case 0x5f1268:goto L5f1268;
case 0x5f126c:c.instructions+=4;goto B5f126c;
case 0x5f126e:c.instructions+=3;goto B5f126e;
case 0x5f1270:c.instructions+=2;goto B5f1270;
case 0x5f1273:c.instructions+=1;goto B5f1273;
case 0x5f1275:goto L5f1275;
case 0x5f1277:goto L5f1277;
case 0x5f127b:c.instructions+=4;goto B5f127b;
case 0x5f127c:c.instructions+=3;goto B5f127c;
case 0x5f127d:c.instructions+=2;goto B5f127d;
case 0x5f1280:c.instructions+=1;goto B5f1280;
case 0x5f1283:goto L5f1283;
case 0x5f1287:c.instructions+=4;goto B5f1287;
case 0x5f128b:c.instructions+=3;goto B5f128b;
case 0x5f128d:c.instructions+=2;goto B5f128d;
case 0x5f1290:c.instructions+=1;goto B5f1290;
case 0x5f1292:goto L5f1292;
case 0x5f1296:goto L5f1296;
case 0x5f1297:c.instructions+=3;goto B5f1297;
case 0x5f1298:c.instructions+=2;goto B5f1298;
case 0x5f129b:c.instructions+=1;goto B5f129b;
case 0x5f12a0:goto L5f12a0;
case 0x5f12a3:c.instructions+=9;goto B5f12a3;
case 0x5f12a4:c.instructions+=8;goto B5f12a4;
case 0x5f12a5:c.instructions+=7;goto B5f12a5;
case 0x5f12a9:c.instructions+=6;goto B5f12a9;
case 0x5f12ab:c.instructions+=5;goto B5f12ab;
case 0x5f12b1:c.instructions+=4;goto B5f12b1;
case 0x5f12b2:c.instructions+=3;goto B5f12b2;
case 0x5f12b3:c.instructions+=2;goto B5f12b3;
case 0x5f12b8:c.instructions+=1;goto B5f12b8;
case 0x5f12bd:goto L5f12bd;
case 0x5f12c3:c.instructions+=6;goto B5f12c3;
case 0x5f12c5:c.instructions+=5;goto B5f12c5;
case 0x5f12c6:c.instructions+=4;goto B5f12c6;
case 0x5f12c7:c.instructions+=3;goto B5f12c7;
case 0x5f12cb:c.instructions+=2;goto B5f12cb;
case 0x5f12d0:c.instructions+=1;goto B5f12d0;
case 0x5f12d5:goto L5f12d5;
case 0x5f12da:c.instructions+=4;goto B5f12da;
case 0x5f12dc:c.instructions+=3;goto B5f12dc;
case 0x5f12de:c.instructions+=2;goto B5f12de;
case 0x5f12e2:c.instructions+=1;goto B5f12e2;
case 0x5f12e4:goto L5f12e4;
case 0x5f12e9:c.instructions+=2;goto B5f12e9;
case 0x5f12eb:c.instructions+=1;goto B5f12eb;
case 0x5f12ed:goto L5f12ed;
case 0x5f12f2:c.instructions+=2;goto B5f12f2;
case 0x5f12f4:c.instructions+=1;goto B5f12f4;
case 0x5f12f6:goto L5f12f6;
case 0x5f12fa:c.instructions+=1;goto B5f12fa;
case 0x5f12fc:goto L5f12fc;
case 0x5f1302:c.instructions+=4;goto B5f1302;
case 0x5f1303:c.instructions+=3;goto B5f1303;
case 0x5f1304:c.instructions+=2;goto B5f1304;
case 0x5f1309:c.instructions+=1;goto B5f1309;
case 0x5f130e:goto L5f130e;
case 0x5f1314:c.instructions+=6;goto B5f1314;
case 0x5f1316:c.instructions+=5;goto B5f1316;
case 0x5f1317:c.instructions+=4;goto B5f1317;
case 0x5f131b:c.instructions+=3;goto B5f131b;
case 0x5f131c:c.instructions+=2;goto B5f131c;
case 0x5f1321:c.instructions+=1;goto B5f1321;
case 0x5f1326:goto L5f1326;
case 0x5f1328:c.instructions+=5;goto B5f1328;
case 0x5f132c:c.instructions+=4;goto B5f132c;
case 0x5f132e:c.instructions+=3;goto B5f132e;
case 0x5f1330:c.instructions+=2;goto B5f1330;
case 0x5f1333:c.instructions+=1;goto B5f1333;
case 0x5f1335:goto L5f1335;
case 0x5f1337:c.instructions+=1;goto B5f1337;
case 0x5f133b:goto L5f133b;
case 0x5f133f:c.instructions+=4;goto B5f133f;
case 0x5f1341:c.instructions+=3;goto B5f1341;
case 0x5f1343:c.instructions+=2;goto B5f1343;
case 0x5f1346:c.instructions+=1;goto B5f1346;
case 0x5f1348:goto L5f1348;
case 0x5f134a:c.instructions+=1;goto B5f134a;
case 0x5f134e:goto L5f134e;
case 0x5f1352:c.instructions+=4;goto B5f1352;
case 0x5f1354:c.instructions+=3;goto B5f1354;
case 0x5f1356:c.instructions+=2;goto B5f1356;
case 0x5f1359:c.instructions+=1;goto B5f1359;
case 0x5f135b:goto L5f135b;
case 0x5f135d:goto L5f135d;
case 0x5f1361:c.instructions+=4;goto B5f1361;
case 0x5f1362:c.instructions+=3;goto B5f1362;
case 0x5f1363:c.instructions+=2;goto B5f1363;
case 0x5f1366:c.instructions+=1;goto B5f1366;
case 0x5f1369:goto L5f1369;
case 0x5f136d:c.instructions+=4;goto B5f136d;
case 0x5f1371:c.instructions+=3;goto B5f1371;
case 0x5f1373:c.instructions+=2;goto B5f1373;
case 0x5f1376:c.instructions+=1;goto B5f1376;
case 0x5f1378:goto L5f1378;
case 0x5f137c:goto L5f137c;
case 0x5f137d:c.instructions+=3;goto B5f137d;
case 0x5f137e:c.instructions+=2;goto B5f137e;
case 0x5f1381:c.instructions+=1;goto B5f1381;
case 0x5f1390:goto L5f1390;
case 0x5f1391:c.instructions+=10;goto B5f1391;
case 0x5f1393:c.instructions+=9;goto B5f1393;
case 0x5f1396:c.instructions+=8;goto B5f1396;
case 0x5f1399:c.instructions+=7;goto B5f1399;
case 0x5f139e:c.instructions+=6;goto B5f139e;
case 0x5f13a0:c.instructions+=5;goto B5f13a0;
case 0x5f13a1:c.instructions+=4;goto B5f13a1;
case 0x5f13a2:c.instructions+=3;goto B5f13a2;
case 0x5f13a3:c.instructions+=2;goto B5f13a3;
case 0x5f13a5:c.instructions+=1;goto B5f13a5;
case 0x5f13ab:goto L5f13ab;
case 0x5f13b0:c.instructions+=2;goto B5f13b0;
case 0x5f13b2:c.instructions+=1;goto B5f13b2;
case 0x5f13b8:goto L5f13b8;
case 0x5f13be:c.instructions+=1;goto B5f13be;
case 0x5f13c3:goto L5f13c3;
case 0x5f13c9:c.instructions+=1;goto B5f13c9;
case 0x5f13ce:goto L5f13ce;
case 0x5f13d0:c.instructions+=1;goto B5f13d0;
case 0x5f13d5:goto L5f13d5;
case 0x5f13d8:c.instructions+=2;goto B5f13d8;
case 0x5f13d9:c.instructions+=1;goto B5f13d9;
case 0x5f13db:goto L5f13db;
case 0x5f13e0:c.instructions+=2;goto B5f13e0;
case 0x5f13e6:c.instructions+=1;goto B5f13e6;
case 0x5f13e8:goto L5f13e8;
case 0x5f13f0:c.instructions+=6;goto B5f13f0;
case 0x5f13f8:c.instructions+=5;goto B5f13f8;
case 0x5f13ff:c.instructions+=4;goto B5f13ff;
case 0x5f1400:c.instructions+=3;goto B5f1400;
case 0x5f1404:c.instructions+=2;goto B5f1404;
case 0x5f1405:c.instructions+=1;goto B5f1405;
case 0x5f140a:goto L5f140a;
case 0x5f1410:c.instructions+=5;goto B5f1410;
case 0x5f1417:c.instructions+=4;goto B5f1417;
case 0x5f1418:c.instructions+=3;goto B5f1418;
case 0x5f141c:c.instructions+=2;goto B5f141c;
case 0x5f141d:c.instructions+=1;goto B5f141d;
case 0x5f1422:goto L5f1422;
case 0x5f1425:c.instructions+=6;goto B5f1425;
case 0x5f1428:c.instructions+=5;goto B5f1428;
case 0x5f142c:c.instructions+=4;goto B5f142c;
case 0x5f142f:c.instructions+=3;goto B5f142f;
case 0x5f1430:c.instructions+=2;goto B5f1430;
case 0x5f1437:c.instructions+=1;goto B5f1437;
case 0x5f143c:goto L5f143c;
case 0x5f1440:c.instructions+=5;goto B5f1440;
case 0x5f1443:c.instructions+=4;goto B5f1443;
case 0x5f1446:c.instructions+=3;goto B5f1446;
case 0x5f1447:c.instructions+=2;goto B5f1447;
case 0x5f144e:c.instructions+=1;goto B5f144e;
case 0x5f1453:goto L5f1453;
case 0x5f1458:c.instructions+=2;goto B5f1458;
case 0x5f145a:c.instructions+=1;goto B5f145a;
case 0x5f145c:goto L5f145c;
case 0x5f1462:c.instructions+=3;goto B5f1462;
case 0x5f1463:c.instructions+=2;goto B5f1463;
case 0x5f1468:c.instructions+=1;goto B5f1468;
case 0x5f146d:goto L5f146d;
case 0x5f146e:c.instructions+=5;goto B5f146e;
case 0x5f146f:c.instructions+=4;goto B5f146f;
case 0x5f1470:c.instructions+=3;goto B5f1470;
case 0x5f1472:c.instructions+=2;goto B5f1472;
case 0x5f1473:c.instructions+=1;goto B5f1473;
case 0x5f1474:goto L5f1474;
case 0x5f1479:c.instructions+=2;goto B5f1479;
case 0x5f147b:c.instructions+=1;goto B5f147b;
case 0x5f147d:goto L5f147d;
case 0x5f1483:c.instructions+=3;goto B5f1483;
case 0x5f1484:c.instructions+=2;goto B5f1484;
case 0x5f1489:c.instructions+=1;goto B5f1489;
case 0x5f148e:goto L5f148e;
case 0x5f148f:c.instructions+=5;goto B5f148f;
case 0x5f1490:c.instructions+=4;goto B5f1490;
case 0x5f1491:c.instructions+=3;goto B5f1491;
case 0x5f1493:c.instructions+=2;goto B5f1493;
case 0x5f1494:c.instructions+=1;goto B5f1494;
case 0x5f1495:goto L5f1495;
case 0x5f149a:c.instructions+=2;goto B5f149a;
case 0x5f149c:c.instructions+=1;goto B5f149c;
case 0x5f149e:goto L5f149e;
case 0x5f14a4:c.instructions+=3;goto B5f14a4;
case 0x5f14a5:c.instructions+=2;goto B5f14a5;
case 0x5f14aa:c.instructions+=1;goto B5f14aa;
case 0x5f14af:goto L5f14af;
case 0x5f14b0:c.instructions+=5;goto B5f14b0;
case 0x5f14b1:c.instructions+=4;goto B5f14b1;
case 0x5f14b2:c.instructions+=3;goto B5f14b2;
case 0x5f14b4:c.instructions+=2;goto B5f14b4;
case 0x5f14b5:c.instructions+=1;goto B5f14b5;
case 0x5f14b6:goto L5f14b6;
case 0x5f14bb:c.instructions+=2;goto B5f14bb;
case 0x5f14be:c.instructions+=1;goto B5f14be;
case 0x5f14c0:goto L5f14c0;
case 0x5f14c1:c.instructions+=1;goto B5f14c1;
case 0x5f14c6:goto L5f14c6;
case 0x5f14c9:c.instructions+=5;goto B5f14c9;
case 0x5f14cc:c.instructions+=4;goto B5f14cc;
case 0x5f14cf:c.instructions+=3;goto B5f14cf;
case 0x5f14d0:c.instructions+=2;goto B5f14d0;
case 0x5f14d5:c.instructions+=1;goto B5f14d5;
case 0x5f14da:goto L5f14da;
case 0x5f14db:c.instructions+=5;goto B5f14db;
case 0x5f14dc:c.instructions+=4;goto B5f14dc;
case 0x5f14dd:c.instructions+=3;goto B5f14dd;
case 0x5f14df:c.instructions+=2;goto B5f14df;
case 0x5f14e0:c.instructions+=1;goto B5f14e0;
case 0x5f14f0:goto L5f14f0;
case 0x5f14f1:c.instructions+=11;goto B5f14f1;
case 0x5f14f3:c.instructions+=10;goto B5f14f3;
case 0x5f14f6:c.instructions+=9;goto B5f14f6;
case 0x5f14f9:c.instructions+=8;goto B5f14f9;
case 0x5f14fa:c.instructions+=7;goto B5f14fa;
case 0x5f14fb:c.instructions+=6;goto B5f14fb;
case 0x5f14fc:c.instructions+=5;goto B5f14fc;
case 0x5f1502:c.instructions+=4;goto B5f1502;
case 0x5f1505:c.instructions+=3;goto B5f1505;
case 0x5f1507:c.instructions+=2;goto B5f1507;
case 0x5f150f:c.instructions+=1;goto B5f150f;
case 0x5f1515:goto L5f1515;
case 0x5f1518:c.instructions+=2;goto B5f1518;
case 0x5f151d:c.instructions+=1;goto B5f151d;
case 0x5f1520:goto L5f1520;
case 0x5f1523:c.instructions+=2;goto B5f1523;
case 0x5f1526:c.instructions+=1;goto B5f1526;
case 0x5f152c:goto L5f152c;
case 0x5f1532:c.instructions+=2;goto B5f1532;
case 0x5f1534:c.instructions+=1;goto B5f1534;
case 0x5f153a:goto L5f153a;
case 0x5f153c:c.instructions+=23;goto B5f153c;
case 0x5f153f:c.instructions+=22;goto B5f153f;
case 0x5f1541:c.instructions+=21;goto B5f1541;
case 0x5f1544:c.instructions+=20;goto B5f1544;
case 0x5f1547:c.instructions+=19;goto B5f1547;
case 0x5f154a:c.instructions+=18;goto B5f154a;
case 0x5f154d:c.instructions+=17;goto B5f154d;
case 0x5f154f:c.instructions+=16;goto B5f154f;
case 0x5f1551:c.instructions+=15;goto B5f1551;
case 0x5f1553:c.instructions+=14;goto B5f1553;
case 0x5f1555:c.instructions+=13;goto B5f1555;
case 0x5f1557:c.instructions+=12;goto B5f1557;
case 0x5f1559:c.instructions+=11;goto B5f1559;
case 0x5f155b:c.instructions+=10;goto B5f155b;
case 0x5f155d:c.instructions+=9;goto B5f155d;
case 0x5f1560:c.instructions+=8;goto B5f1560;
case 0x5f1566:c.instructions+=7;goto B5f1566;
case 0x5f1568:c.instructions+=6;goto B5f1568;
case 0x5f156a:c.instructions+=5;goto B5f156a;
case 0x5f156c:c.instructions+=4;goto B5f156c;
case 0x5f156e:c.instructions+=3;goto B5f156e;
case 0x5f1571:c.instructions+=2;goto B5f1571;
case 0x5f1573:c.instructions+=1;goto B5f1573;
case 0x5f1579:goto L5f1579;
case 0x5f157c:c.instructions+=20;goto B5f157c;
case 0x5f1582:c.instructions+=19;goto B5f1582;
case 0x5f1588:c.instructions+=18;goto B5f1588;
case 0x5f158e:c.instructions+=17;goto B5f158e;
case 0x5f1592:c.instructions+=16;goto B5f1592;
case 0x5f1594:c.instructions+=15;goto B5f1594;
case 0x5f1595:c.instructions+=14;goto B5f1595;
case 0x5f1599:c.instructions+=13;goto B5f1599;
case 0x5f159f:c.instructions+=12;goto B5f159f;
case 0x5f15a0:c.instructions+=11;goto B5f15a0;
case 0x5f15a4:c.instructions+=10;goto B5f15a4;
case 0x5f15a8:c.instructions+=9;goto B5f15a8;
case 0x5f15ae:c.instructions+=8;goto B5f15ae;
case 0x5f15af:c.instructions+=7;goto B5f15af;
case 0x5f15b5:c.instructions+=6;goto B5f15b5;
case 0x5f15bb:c.instructions+=5;goto B5f15bb;
case 0x5f15bd:c.instructions+=4;goto B5f15bd;
case 0x5f15c1:c.instructions+=3;goto B5f15c1;
case 0x5f15c5:c.instructions+=2;goto B5f15c5;
case 0x5f15c9:c.instructions+=1;goto B5f15c9;
case 0x5f15ce:goto L5f15ce;
case 0x5f15d2:c.instructions+=4;goto B5f15d2;
case 0x5f15d3:c.instructions+=3;goto B5f15d3;
case 0x5f15d7:c.instructions+=2;goto B5f15d7;
case 0x5f15d8:c.instructions+=1;goto B5f15d8;
case 0x5f15dd:goto L5f15dd;
case 0x5f15de:c.instructions+=5;goto B5f15de;
case 0x5f15e2:c.instructions+=4;goto B5f15e2;
case 0x5f15e3:c.instructions+=3;goto B5f15e3;
case 0x5f15e7:c.instructions+=2;goto B5f15e7;
case 0x5f15e8:c.instructions+=1;goto B5f15e8;
case 0x5f15ed:goto L5f15ed;
case 0x5f15f0:c.instructions+=8;goto B5f15f0;
case 0x5f15f1:c.instructions+=7;goto B5f15f1;
case 0x5f15f5:c.instructions+=6;goto B5f15f5;
case 0x5f15f6:c.instructions+=5;goto B5f15f6;
case 0x5f15fa:c.instructions+=4;goto B5f15fa;
case 0x5f15fb:c.instructions+=3;goto B5f15fb;
case 0x5f15ff:c.instructions+=2;goto B5f15ff;
case 0x5f1600:c.instructions+=1;goto B5f1600;
case 0x5f1605:goto L5f1605;
case 0x5f1608:c.instructions+=2;goto B5f1608;
case 0x5f160a:c.instructions+=1;goto B5f160a;
case 0x5f160c:goto L5f160c;
case 0x5f1612:goto L5f1612;
case 0x5f1616:c.instructions+=6;goto B5f1616;
case 0x5f1619:c.instructions+=5;goto B5f1619;
case 0x5f161a:c.instructions+=4;goto B5f161a;
case 0x5f161d:c.instructions+=3;goto B5f161d;
case 0x5f161f:c.instructions+=2;goto B5f161f;
case 0x5f1623:c.instructions+=1;goto B5f1623;
case 0x5f1629:goto L5f1629;
case 0x5f162b:c.instructions+=6;goto B5f162b;
case 0x5f162c:c.instructions+=5;goto B5f162c;
case 0x5f162d:c.instructions+=4;goto B5f162d;
case 0x5f162e:c.instructions+=3;goto B5f162e;
case 0x5f1630:c.instructions+=2;goto B5f1630;
case 0x5f1631:c.instructions+=1;goto B5f1631;
case 0x5f1634:goto L5f1634;
case 0x5f1635:c.instructions+=6;goto B5f1635;
case 0x5f1636:c.instructions+=5;goto B5f1636;
case 0x5f1638:c.instructions+=4;goto B5f1638;
case 0x5f1639:c.instructions+=3;goto B5f1639;
case 0x5f163b:c.instructions+=2;goto B5f163b;
case 0x5f163c:c.instructions+=1;goto B5f163c;
case 0x5f1640:goto L5f1640;
case 0x5f1646:c.instructions+=2;goto B5f1646;
case 0x5f1649:c.instructions+=1;goto B5f1649;
case 0x5f164b:goto L5f164b;
case 0x5f164e:c.instructions+=1;goto B5f164e;
case 0x5f1650:goto L5f1650;
case 0x5f1656:c.instructions+=2;goto B5f1656;
case 0x5f1658:c.instructions+=1;goto B5f1658;
case 0x5f165a:goto L5f165a;
case 0x5f1660:c.instructions+=1;goto B5f1660;
case 0x5f1661:goto L5f1661;
case 0x5f1663:c.instructions+=1;goto B5f1663;
case 0x5f1670:goto L5f1670;
case 0x5f1671:c.instructions+=19;goto B5f1671;
case 0x5f1673:c.instructions+=18;goto B5f1673;
case 0x5f1676:c.instructions+=17;goto B5f1676;
case 0x5f1678:c.instructions+=16;goto B5f1678;
case 0x5f167d:c.instructions+=15;goto B5f167d;
case 0x5f1683:c.instructions+=14;goto B5f1683;
case 0x5f1684:c.instructions+=13;goto B5f1684;
case 0x5f168b:c.instructions+=12;goto B5f168b;
case 0x5f168e:c.instructions+=11;goto B5f168e;
case 0x5f168f:c.instructions+=10;goto B5f168f;
case 0x5f1691:c.instructions+=9;goto B5f1691;
case 0x5f1692:c.instructions+=8;goto B5f1692;
case 0x5f1694:c.instructions+=7;goto B5f1694;
case 0x5f1696:c.instructions+=6;goto B5f1696;
case 0x5f1699:c.instructions+=5;goto B5f1699;
case 0x5f169c:c.instructions+=4;goto B5f169c;
case 0x5f169d:c.instructions+=3;goto B5f169d;
case 0x5f169f:c.instructions+=2;goto B5f169f;
case 0x5f16a2:c.instructions+=1;goto B5f16a2;
case 0x5f16a7:goto L5f16a7;
case 0x5f16a9:goto L5f16a9;
case 0x5f16af:c.instructions+=14;goto B5f16af;
case 0x5f16b5:c.instructions+=13;goto B5f16b5;
case 0x5f16bb:c.instructions+=12;goto B5f16bb;
case 0x5f16c1:c.instructions+=11;goto B5f16c1;
case 0x5f16c7:c.instructions+=10;goto B5f16c7;
case 0x5f16cd:c.instructions+=9;goto B5f16cd;
case 0x5f16d3:c.instructions+=8;goto B5f16d3;
case 0x5f16d9:c.instructions+=7;goto B5f16d9;
case 0x5f16da:c.instructions+=6;goto B5f16da;
case 0x5f16e0:c.instructions+=5;goto B5f16e0;
case 0x5f16e4:c.instructions+=4;goto B5f16e4;
case 0x5f16ea:c.instructions+=3;goto B5f16ea;
case 0x5f16f0:c.instructions+=2;goto B5f16f0;
case 0x5f16f6:c.instructions+=1;goto B5f16f6;
case 0x5f16fb:goto L5f16fb;
case 0x5f1701:c.instructions+=2;goto B5f1701;
case 0x5f1705:c.instructions+=1;goto B5f1705;
case 0x5f170a:goto L5f170a;
case 0x5f170d:c.instructions+=10;goto B5f170d;
case 0x5f1713:c.instructions+=9;goto B5f1713;
case 0x5f1718:c.instructions+=8;goto B5f1718;
case 0x5f171f:c.instructions+=7;goto B5f171f;
case 0x5f1720:c.instructions+=6;goto B5f1720;
case 0x5f1725:c.instructions+=5;goto B5f1725;
case 0x5f172c:c.instructions+=4;goto B5f172c;
case 0x5f172f:c.instructions+=3;goto B5f172f;
case 0x5f1736:c.instructions+=2;goto B5f1736;
case 0x5f173b:c.instructions+=1;goto B5f173b;
case 0x5f173d:goto L5f173d;
case 0x5f1742:c.instructions+=5;goto B5f1742;
case 0x5f1748:c.instructions+=4;goto B5f1748;
case 0x5f174b:c.instructions+=3;goto B5f174b;
case 0x5f1751:c.instructions+=2;goto B5f1751;
case 0x5f1756:c.instructions+=1;goto B5f1756;
case 0x5f1759:goto L5f1759;
case 0x5f175c:c.instructions+=3;goto B5f175c;
case 0x5f175d:c.instructions+=2;goto B5f175d;
case 0x5f1760:c.instructions+=1;goto B5f1760;
case 0x5f1765:goto L5f1765;
case 0x5f1768:c.instructions+=8;goto B5f1768;
case 0x5f176b:c.instructions+=7;goto B5f176b;
case 0x5f176e:c.instructions+=6;goto B5f176e;
case 0x5f1771:c.instructions+=5;goto B5f1771;
case 0x5f1777:c.instructions+=4;goto B5f1777;
case 0x5f1781:c.instructions+=3;goto B5f1781;
case 0x5f1783:c.instructions+=2;goto B5f1783;
case 0x5f1785:c.instructions+=1;goto B5f1785;
case 0x5f178a:goto L5f178a;
case 0x5f178c:goto L5f178c;
case 0x5f178f:c.instructions+=8;goto B5f178f;
case 0x5f1792:c.instructions+=7;goto B5f1792;
case 0x5f1795:c.instructions+=6;goto B5f1795;
case 0x5f1799:c.instructions+=5;goto B5f1799;
case 0x5f17a0:c.instructions+=4;goto B5f17a0;
case 0x5f17a3:c.instructions+=3;goto B5f17a3;
case 0x5f17a8:c.instructions+=2;goto B5f17a8;
case 0x5f17a9:c.instructions+=1;goto B5f17a9;
case 0x5f17ae:goto L5f17ae;
case 0x5f17b1:c.instructions+=9;goto B5f17b1;
case 0x5f17b3:c.instructions+=8;goto B5f17b3;
case 0x5f17b9:c.instructions+=7;goto B5f17b9;
case 0x5f17bc:c.instructions+=6;goto B5f17bc;
case 0x5f17c2:c.instructions+=5;goto B5f17c2;
case 0x5f17c5:c.instructions+=4;goto B5f17c5;
case 0x5f17c8:c.instructions+=3;goto B5f17c8;
case 0x5f17cf:c.instructions+=2;goto B5f17cf;
case 0x5f17d2:c.instructions+=1;goto B5f17d2;
case 0x5f17d7:goto L5f17d7;
case 0x5f17d9:c.instructions+=4;goto B5f17d9;
case 0x5f17da:c.instructions+=3;goto B5f17da;
case 0x5f17dd:c.instructions+=2;goto B5f17dd;
case 0x5f17de:c.instructions+=1;goto B5f17de;
case 0x5f17e3:goto L5f17e3;
case 0x5f17e6:c.instructions+=22;goto B5f17e6;
case 0x5f17e9:c.instructions+=21;goto B5f17e9;
case 0x5f17ef:c.instructions+=20;goto B5f17ef;
case 0x5f17f2:c.instructions+=19;goto B5f17f2;
case 0x5f17f8:c.instructions+=18;goto B5f17f8;
case 0x5f17fb:c.instructions+=17;goto B5f17fb;
case 0x5f1800:c.instructions+=16;goto B5f1800;
case 0x5f1803:c.instructions+=15;goto B5f1803;
case 0x5f1806:c.instructions+=14;goto B5f1806;
case 0x5f1808:c.instructions+=13;goto B5f1808;
case 0x5f180b:c.instructions+=12;goto B5f180b;
case 0x5f180e:c.instructions+=11;goto B5f180e;
case 0x5f1814:c.instructions+=10;goto B5f1814;
case 0x5f181a:c.instructions+=9;goto B5f181a;
case 0x5f181d:c.instructions+=8;goto B5f181d;
case 0x5f1820:c.instructions+=7;goto B5f1820;
case 0x5f1826:c.instructions+=6;goto B5f1826;
case 0x5f182c:c.instructions+=5;goto B5f182c;
case 0x5f1832:c.instructions+=4;goto B5f1832;
case 0x5f1838:c.instructions+=3;goto B5f1838;
case 0x5f183a:c.instructions+=2;goto B5f183a;
case 0x5f183d:c.instructions+=1;goto B5f183d;
case 0x5f1840:goto L5f1840;
case 0x5f1842:c.instructions+=5;goto B5f1842;
case 0x5f1846:c.instructions+=4;goto B5f1846;
case 0x5f1847:c.instructions+=3;goto B5f1847;
case 0x5f184a:c.instructions+=2;goto B5f184a;
case 0x5f184d:c.instructions+=1;goto B5f184d;
case 0x5f184f:goto L5f184f;
case 0x5f1856:c.instructions+=1;goto B5f1856;
case 0x5f1858:goto L5f1858;
case 0x5f185a:c.instructions+=6;goto B5f185a;
case 0x5f185c:c.instructions+=5;goto B5f185c;
case 0x5f185f:c.instructions+=4;goto B5f185f;
case 0x5f1862:c.instructions+=3;goto B5f1862;
case 0x5f1863:c.instructions+=2;goto B5f1863;
case 0x5f1866:c.instructions+=1;goto B5f1866;
case 0x5f1868:goto L5f1868;
case 0x5f186f:c.instructions+=1;goto B5f186f;
case 0x5f1876:goto L5f1876;
case 0x5f187c:c.instructions+=10;goto B5f187c;
case 0x5f1882:c.instructions+=9;goto B5f1882;
case 0x5f1888:c.instructions+=8;goto B5f1888;
case 0x5f188e:c.instructions+=7;goto B5f188e;
case 0x5f1894:c.instructions+=6;goto B5f1894;
case 0x5f189a:c.instructions+=5;goto B5f189a;
case 0x5f189f:c.instructions+=4;goto B5f189f;
case 0x5f18a2:c.instructions+=3;goto B5f18a2;
case 0x5f18a7:c.instructions+=2;goto B5f18a7;
case 0x5f18ab:c.instructions+=1;goto B5f18ab;
case 0x5f18b1:goto L5f18b1;
case 0x5f18b7:c.instructions+=1;goto B5f18b7;
case 0x5f18b9:goto L5f18b9;
case 0x5f18bf:c.instructions+=1;goto B5f18bf;
case 0x5f18c1:goto L5f18c1;
case 0x5f18c3:c.instructions+=1;goto B5f18c3;
case 0x5f18c5:goto L5f18c5;
case 0x5f18cd:c.instructions+=1;goto B5f18cd;
case 0x5f18d2:goto L5f18d2;
case 0x5f18d5:c.instructions+=1;goto B5f18d5;
case 0x5f18db:goto L5f18db;
case 0x5f18e3:c.instructions+=1;goto B5f18e3;
case 0x5f18e8:goto L5f18e8;
case 0x5f18ee:c.instructions+=1;goto B5f18ee;
case 0x5f18f0:goto L5f18f0;
case 0x5f18f6:c.instructions+=1;goto B5f18f6;
case 0x5f18f8:goto L5f18f8;
case 0x5f18fa:c.instructions+=1;goto B5f18fa;
case 0x5f18fc:goto L5f18fc;
case 0x5f1904:c.instructions+=1;goto B5f1904;
case 0x5f1909:goto L5f1909;
case 0x5f190c:c.instructions+=1;goto B5f190c;
case 0x5f1912:goto L5f1912;
case 0x5f191a:c.instructions+=1;goto B5f191a;
case 0x5f191f:goto L5f191f;
case 0x5f1926:c.instructions+=1;goto B5f1926;
case 0x5f1928:goto L5f1928;
case 0x5f192a:c.instructions+=1;goto B5f192a;
case 0x5f192c:goto L5f192c;
case 0x5f1934:c.instructions+=1;goto B5f1934;
case 0x5f1939:goto L5f1939;
case 0x5f193c:c.instructions+=1;goto B5f193c;
case 0x5f1942:goto L5f1942;
case 0x5f194a:c.instructions+=1;goto B5f194a;
case 0x5f194f:goto L5f194f;
case 0x5f1951:c.instructions+=1;goto B5f1951;
case 0x5f1953:goto L5f1953;
case 0x5f195b:c.instructions+=1;goto B5f195b;
case 0x5f1960:goto L5f1960;
case 0x5f1963:c.instructions+=1;goto B5f1963;
case 0x5f1969:goto L5f1969;
case 0x5f1971:c.instructions+=1;goto B5f1971;
case 0x5f1973:goto L5f1973;
case 0x5f1976:c.instructions+=1;goto B5f1976;
case 0x5f1978:goto L5f1978;
case 0x5f197e:c.instructions+=1;goto B5f197e;
case 0x5f1980:goto L5f1980;
case 0x5f1986:c.instructions+=1;goto B5f1986;
case 0x5f1988:goto L5f1988;
case 0x5f1990:c.instructions+=1;goto B5f1990;
case 0x5f1992:goto L5f1992;
case 0x5f1998:c.instructions+=1;goto B5f1998;
case 0x5f199a:goto L5f199a;
case 0x5f19a0:c.instructions+=1;goto B5f19a0;
case 0x5f19a2:goto L5f19a2;
case 0x5f19a8:c.instructions+=1;goto B5f19a8;
case 0x5f19aa:goto L5f19aa;
case 0x5f19b0:c.instructions+=1;goto B5f19b0;
case 0x5f19b2:goto L5f19b2;
case 0x5f19b8:c.instructions+=1;goto B5f19b8;
case 0x5f19ba:goto L5f19ba;
case 0x5f19c0:c.instructions+=1;goto B5f19c0;
case 0x5f19c2:goto L5f19c2;
case 0x5f19c8:c.instructions+=1;goto B5f19c8;
case 0x5f19ca:goto L5f19ca;
case 0x5f19d0:c.instructions+=1;goto B5f19d0;
case 0x5f19d2:goto L5f19d2;
case 0x5f19da:c.instructions+=1;goto B5f19da;
case 0x5f19dc:goto L5f19dc;
case 0x5f19e0:c.instructions+=1;goto B5f19e0;
case 0x5f19e2:goto L5f19e2;
case 0x5f19ea:goto L5f19ea;
case 0x5f19ef:c.instructions+=1;goto B5f19ef;
case 0x5f19f4:goto L5f19f4;
case 0x5f19f7:c.instructions+=4;goto B5f19f7;
case 0x5f19fb:c.instructions+=3;goto B5f19fb;
case 0x5f19fd:c.instructions+=2;goto B5f19fd;
case 0x5f1a02:c.instructions+=1;goto B5f1a02;
case 0x5f1a04:goto L5f1a04;
case 0x5f1a08:c.instructions+=4;goto B5f1a08;
case 0x5f1a09:c.instructions+=3;goto B5f1a09;
case 0x5f1a0a:c.instructions+=2;goto B5f1a0a;
case 0x5f1a0c:c.instructions+=1;goto B5f1a0c;
case 0x5f1a11:goto L5f1a11;
case 0x5f1a13:goto L5f1a13;
case 0x5f1a15:goto L5f1a15;
case 0x5f1a17:c.instructions+=7;goto B5f1a17;
case 0x5f1a1c:c.instructions+=6;goto B5f1a1c;
case 0x5f1a22:c.instructions+=5;goto B5f1a22;
case 0x5f1a28:c.instructions+=4;goto B5f1a28;
case 0x5f1a2e:c.instructions+=3;goto B5f1a2e;
case 0x5f1a31:c.instructions+=2;goto B5f1a31;
case 0x5f1a37:c.instructions+=1;goto B5f1a37;
case 0x5f1a3c:goto L5f1a3c;
case 0x5f1a3f:c.instructions+=4;goto B5f1a3f;
case 0x5f1a43:c.instructions+=3;goto B5f1a43;
case 0x5f1a45:c.instructions+=2;goto B5f1a45;
case 0x5f1a4a:c.instructions+=1;goto B5f1a4a;
case 0x5f1a4c:goto L5f1a4c;
case 0x5f1a4e:c.instructions+=2;goto B5f1a4e;
case 0x5f1a50:c.instructions+=1;goto B5f1a50;
case 0x5f1a55:goto L5f1a55;
case 0x5f1a57:goto L5f1a57;
case 0x5f1a59:goto L5f1a59;
case 0x5f1a5f:c.instructions+=7;goto B5f1a5f;
case 0x5f1a65:c.instructions+=6;goto B5f1a65;
case 0x5f1a6b:c.instructions+=5;goto B5f1a6b;
case 0x5f1a71:c.instructions+=4;goto B5f1a71;
case 0x5f1a77:c.instructions+=3;goto B5f1a77;
case 0x5f1a79:c.instructions+=2;goto B5f1a79;
case 0x5f1a7e:c.instructions+=1;goto B5f1a7e;
case 0x5f1a84:goto L5f1a84;
case 0x5f1a86:goto L5f1a86;
case 0x5f1a8c:c.instructions+=5;goto B5f1a8c;
case 0x5f1a8e:c.instructions+=4;goto B5f1a8e;
case 0x5f1a93:c.instructions+=3;goto B5f1a93;
case 0x5f1a98:c.instructions+=2;goto B5f1a98;
case 0x5f1a9b:c.instructions+=1;goto B5f1a9b;
case 0x5f1aa0:goto L5f1aa0;
case 0x5f1aa5:c.instructions+=2;goto B5f1aa5;
case 0x5f1aab:c.instructions+=1;goto B5f1aab;
case 0x5f1ab0:goto L5f1ab0;
case 0x5f1ab6:c.instructions+=28;goto B5f1ab6;
case 0x5f1abc:c.instructions+=27;goto B5f1abc;
case 0x5f1abf:c.instructions+=26;goto B5f1abf;
case 0x5f1ac5:c.instructions+=25;goto B5f1ac5;
case 0x5f1acb:c.instructions+=24;goto B5f1acb;
case 0x5f1ad1:c.instructions+=23;goto B5f1ad1;
case 0x5f1ad7:c.instructions+=22;goto B5f1ad7;
case 0x5f1add:c.instructions+=21;goto B5f1add;
case 0x5f1ae3:c.instructions+=20;goto B5f1ae3;
case 0x5f1ae9:c.instructions+=19;goto B5f1ae9;
case 0x5f1aec:c.instructions+=18;goto B5f1aec;
case 0x5f1af2:c.instructions+=17;goto B5f1af2;
case 0x5f1af8:c.instructions+=16;goto B5f1af8;
case 0x5f1afe:c.instructions+=15;goto B5f1afe;
case 0x5f1b04:c.instructions+=14;goto B5f1b04;
case 0x5f1b0a:c.instructions+=13;goto B5f1b0a;
case 0x5f1b14:c.instructions+=12;goto B5f1b14;
case 0x5f1b1a:c.instructions+=11;goto B5f1b1a;
case 0x5f1b20:c.instructions+=10;goto B5f1b20;
case 0x5f1b27:c.instructions+=9;goto B5f1b27;
case 0x5f1b2e:c.instructions+=8;goto B5f1b2e;
case 0x5f1b37:c.instructions+=7;goto B5f1b37;
case 0x5f1b3d:c.instructions+=6;goto B5f1b3d;
case 0x5f1b43:c.instructions+=5;goto B5f1b43;
case 0x5f1b49:c.instructions+=4;goto B5f1b49;
case 0x5f1b4f:c.instructions+=3;goto B5f1b4f;
case 0x5f1b54:c.instructions+=2;goto B5f1b54;
case 0x5f1b5a:c.instructions+=1;goto B5f1b5a;
case 0x5f1b5f:goto L5f1b5f;
case 0x5f1b62:c.instructions+=3;goto B5f1b62;
case 0x5f1b64:c.instructions+=2;goto B5f1b64;
case 0x5f1b69:c.instructions+=1;goto B5f1b69;
case 0x5f1b6b:goto L5f1b6b;
case 0x5f1b70:c.instructions+=4;goto B5f1b70;
case 0x5f1b75:c.instructions+=3;goto B5f1b75;
case 0x5f1b76:c.instructions+=2;goto B5f1b76;
case 0x5f1b78:c.instructions+=1;goto B5f1b78;
case 0x5f1b7d:goto L5f1b7d;
case 0x5f1b7f:goto L5f1b7f;
case 0x5f1b81:goto L5f1b81;
case 0x5f1b87:c.instructions+=17;goto B5f1b87;
case 0x5f1b8d:c.instructions+=16;goto B5f1b8d;
case 0x5f1b91:c.instructions+=15;goto B5f1b91;
case 0x5f1b95:c.instructions+=14;goto B5f1b95;
case 0x5f1b9c:c.instructions+=13;goto B5f1b9c;
case 0x5f1ba2:c.instructions+=12;goto B5f1ba2;
case 0x5f1ba4:c.instructions+=11;goto B5f1ba4;
case 0x5f1ba7:c.instructions+=10;goto B5f1ba7;
case 0x5f1bad:c.instructions+=9;goto B5f1bad;
case 0x5f1bb0:c.instructions+=8;goto B5f1bb0;
case 0x5f1bb6:c.instructions+=7;goto B5f1bb6;
case 0x5f1bbc:c.instructions+=6;goto B5f1bbc;
case 0x5f1bbe:c.instructions+=5;goto B5f1bbe;
case 0x5f1bc3:c.instructions+=4;goto B5f1bc3;
case 0x5f1bc6:c.instructions+=3;goto B5f1bc6;
case 0x5f1bc9:c.instructions+=2;goto B5f1bc9;
case 0x5f1bcf:c.instructions+=1;goto B5f1bcf;
case 0x5f1bd4:goto L5f1bd4;
case 0x5f1bd7:c.instructions+=2;goto B5f1bd7;
case 0x5f1bd9:c.instructions+=1;goto B5f1bd9;
case 0x5f1bdb:goto L5f1bdb;
case 0x5f1be0:c.instructions+=4;goto B5f1be0;
case 0x5f1be5:c.instructions+=3;goto B5f1be5;
case 0x5f1be6:c.instructions+=2;goto B5f1be6;
case 0x5f1be8:c.instructions+=1;goto B5f1be8;
case 0x5f1bed:goto L5f1bed;
case 0x5f1bef:goto L5f1bef;
case 0x5f1bf1:goto L5f1bf1;
case 0x5f1bf7:c.instructions+=42;goto B5f1bf7;
case 0x5f1bfd:c.instructions+=41;goto B5f1bfd;
case 0x5f1c01:c.instructions+=40;goto B5f1c01;
case 0x5f1c05:c.instructions+=39;goto B5f1c05;
case 0x5f1c0c:c.instructions+=38;goto B5f1c0c;
case 0x5f1c12:c.instructions+=37;goto B5f1c12;
case 0x5f1c15:c.instructions+=36;goto B5f1c15;
case 0x5f1c1b:c.instructions+=35;goto B5f1c1b;
case 0x5f1c1d:c.instructions+=34;goto B5f1c1d;
case 0x5f1c20:c.instructions+=33;goto B5f1c20;
case 0x5f1c26:c.instructions+=32;goto B5f1c26;
case 0x5f1c2c:c.instructions+=31;goto B5f1c2c;
case 0x5f1c2f:c.instructions+=30;goto B5f1c2f;
case 0x5f1c35:c.instructions+=29;goto B5f1c35;
case 0x5f1c37:c.instructions+=28;goto B5f1c37;
case 0x5f1c3b:c.instructions+=27;goto B5f1c3b;
case 0x5f1c3e:c.instructions+=26;goto B5f1c3e;
case 0x5f1c44:c.instructions+=25;goto B5f1c44;
case 0x5f1c4a:c.instructions+=24;goto B5f1c4a;
case 0x5f1c50:c.instructions+=23;goto B5f1c50;
case 0x5f1c56:c.instructions+=22;goto B5f1c56;
case 0x5f1c5c:c.instructions+=21;goto B5f1c5c;
case 0x5f1c62:c.instructions+=20;goto B5f1c62;
case 0x5f1c68:c.instructions+=19;goto B5f1c68;
case 0x5f1c6e:c.instructions+=18;goto B5f1c6e;
case 0x5f1c74:c.instructions+=17;goto B5f1c74;
case 0x5f1c7a:c.instructions+=16;goto B5f1c7a;
case 0x5f1c80:c.instructions+=15;goto B5f1c80;
case 0x5f1c86:c.instructions+=14;goto B5f1c86;
case 0x5f1c8c:c.instructions+=13;goto B5f1c8c;
case 0x5f1c92:c.instructions+=12;goto B5f1c92;
case 0x5f1c98:c.instructions+=11;goto B5f1c98;
case 0x5f1c9e:c.instructions+=10;goto B5f1c9e;
case 0x5f1ca4:c.instructions+=9;goto B5f1ca4;
case 0x5f1caa:c.instructions+=8;goto B5f1caa;
case 0x5f1cab:c.instructions+=7;goto B5f1cab;
case 0x5f1cad:c.instructions+=6;goto B5f1cad;
case 0x5f1cae:c.instructions+=5;goto B5f1cae;
case 0x5f1cb5:c.instructions+=4;goto B5f1cb5;
case 0x5f1cb6:c.instructions+=3;goto B5f1cb6;
case 0x5f1cb8:c.instructions+=2;goto B5f1cb8;
case 0x5f1cb9:c.instructions+=1;goto B5f1cb9;
case 0x5f1cc0:goto L5f1cc0;
case 0x5f1cc2:c.instructions+=15;goto B5f1cc2;
case 0x5f1cc7:c.instructions+=14;goto B5f1cc7;
case 0x5f1ccd:c.instructions+=13;goto B5f1ccd;
case 0x5f1cce:c.instructions+=12;goto B5f1cce;
case 0x5f1cd5:c.instructions+=11;goto B5f1cd5;
case 0x5f1cd6:c.instructions+=10;goto B5f1cd6;
case 0x5f1cd7:c.instructions+=9;goto B5f1cd7;
case 0x5f1cd8:c.instructions+=8;goto B5f1cd8;
case 0x5f1cda:c.instructions+=7;goto B5f1cda;
case 0x5f1cdb:c.instructions+=6;goto B5f1cdb;
case 0x5f1cdf:c.instructions+=5;goto B5f1cdf;
case 0x5f1ce2:c.instructions+=4;goto B5f1ce2;
case 0x5f1ce4:c.instructions+=3;goto B5f1ce4;
case 0x5f1ce6:c.instructions+=2;goto B5f1ce6;
case 0x5f1cee:c.instructions+=1;goto B5f1cee;
case 0x5f1cf0:goto L5f1cf0;
case 0x5f1cf2:c.instructions+=2;goto B5f1cf2;
case 0x5f1cf4:c.instructions+=1;goto B5f1cf4;
case 0x5f1cf9:goto L5f1cf9;
case 0x5f1cfc:c.instructions+=2;goto B5f1cfc;
case 0x5f1cfe:c.instructions+=1;goto B5f1cfe;
case 0x5f1d00:goto L5f1d00;
case 0x5f1d02:c.instructions+=2;goto B5f1d02;
case 0x5f1d04:c.instructions+=1;goto B5f1d04;
case 0x5f1d09:goto L5f1d09;
case 0x5f1d0c:goto L5f1d0c;
case 0x5f1d12:c.instructions+=2;goto B5f1d12;
case 0x5f1d14:c.instructions+=1;goto B5f1d14;
case 0x5f1d16:goto L5f1d16;
case 0x5f1d17:c.instructions+=3;goto B5f1d17;
case 0x5f1d18:c.instructions+=2;goto B5f1d18;
case 0x5f1d19:c.instructions+=1;goto B5f1d19;
case 0x5f1d1e:goto L5f1d1e;
case 0x5f1d24:c.instructions+=4;goto B5f1d24;
case 0x5f1d26:c.instructions+=3;goto B5f1d26;
case 0x5f1d2c:c.instructions+=2;goto B5f1d2c;
case 0x5f1d32:c.instructions+=1;goto B5f1d32;
case 0x5f1d34:goto L5f1d34;
case 0x5f1d36:c.instructions+=2;goto B5f1d36;
case 0x5f1d38:c.instructions+=1;goto B5f1d38;
case 0x5f1d3a:goto L5f1d3a;
case 0x5f1d40:c.instructions+=2;goto B5f1d40;
case 0x5f1d42:c.instructions+=1;goto B5f1d42;
case 0x5f1d44:goto L5f1d44;
case 0x5f1d46:c.instructions+=1;goto B5f1d46;
case 0x5f1d4b:goto L5f1d4b;
case 0x5f1d4c:c.instructions+=1;goto B5f1d4c;
case 0x5f1d51:goto L5f1d51;
case 0x5f1d54:goto L5f1d54;
case 0x5f1d5a:c.instructions+=2;goto B5f1d5a;
case 0x5f1d5c:c.instructions+=1;goto B5f1d5c;
case 0x5f1d5e:goto L5f1d5e;
case 0x5f1d5f:c.instructions+=1;goto B5f1d5f;
case 0x5f1d64:goto L5f1d64;
case 0x5f1d67:goto L5f1d67;
case 0x5f1d6d:c.instructions+=2;goto B5f1d6d;
case 0x5f1d6f:c.instructions+=1;goto B5f1d6f;
case 0x5f1d71:goto L5f1d71;
case 0x5f1d72:c.instructions+=1;goto B5f1d72;
case 0x5f1d77:goto L5f1d77;
case 0x5f1d7a:goto L5f1d7a;
case 0x5f1d80:c.instructions+=5;goto B5f1d80;
case 0x5f1d83:c.instructions+=4;goto B5f1d83;
case 0x5f1d85:c.instructions+=3;goto B5f1d85;
case 0x5f1d8b:c.instructions+=2;goto B5f1d8b;
case 0x5f1d91:c.instructions+=1;goto B5f1d91;
case 0x5f1d93:goto L5f1d93;
case 0x5f1d95:c.instructions+=2;goto B5f1d95;
case 0x5f1d97:c.instructions+=1;goto B5f1d97;
case 0x5f1d99:goto L5f1d99;
case 0x5f1d9e:c.instructions+=9;goto B5f1d9e;
case 0x5f1d9f:c.instructions+=8;goto B5f1d9f;
case 0x5f1da4:c.instructions+=7;goto B5f1da4;
case 0x5f1dab:c.instructions+=6;goto B5f1dab;
case 0x5f1dae:c.instructions+=5;goto B5f1dae;
case 0x5f1db5:c.instructions+=4;goto B5f1db5;
case 0x5f1dbc:c.instructions+=3;goto B5f1dbc;
case 0x5f1dc2:c.instructions+=2;goto B5f1dc2;
case 0x5f1dc3:c.instructions+=1;goto B5f1dc3;
case 0x5f1dc8:goto L5f1dc8;
case 0x5f1dce:c.instructions+=2;goto B5f1dce;
case 0x5f1dcf:c.instructions+=1;goto B5f1dcf;
case 0x5f1dd4:goto L5f1dd4;
case 0x5f1dd7:c.instructions+=3;goto B5f1dd7;
case 0x5f1ddd:c.instructions+=2;goto B5f1ddd;
case 0x5f1de1:c.instructions+=1;goto B5f1de1;
case 0x5f1de6:goto L5f1de6;
case 0x5f1dec:c.instructions+=2;goto B5f1dec;
case 0x5f1df0:c.instructions+=1;goto B5f1df0;
case 0x5f1df5:goto L5f1df5;
case 0x5f1df9:c.instructions+=6;goto B5f1df9;
case 0x5f1dfa:c.instructions+=5;goto B5f1dfa;
case 0x5f1dfb:c.instructions+=4;goto B5f1dfb;
case 0x5f1dfc:c.instructions+=3;goto B5f1dfc;
case 0x5f1e03:c.instructions+=2;goto B5f1e03;
case 0x5f1e06:c.instructions+=1;goto B5f1e06;
case 0x5f1e10:goto L5f1e10;
case 0x5f1e16:c.instructions+=9;goto B5f1e16;
case 0x5f1e18:c.instructions+=8;goto B5f1e18;
case 0x5f1e1d:c.instructions+=7;goto B5f1e1d;
case 0x5f1e1e:c.instructions+=6;goto B5f1e1e;
case 0x5f1e25:c.instructions+=5;goto B5f1e25;
case 0x5f1e26:c.instructions+=4;goto B5f1e26;
case 0x5f1e28:c.instructions+=3;goto B5f1e28;
case 0x5f1e2b:c.instructions+=2;goto B5f1e2b;
case 0x5f1e2d:c.instructions+=1;goto B5f1e2d;
case 0x5f1e33:goto L5f1e33;
case 0x5f1e39:c.instructions+=2;goto B5f1e39;
case 0x5f1e3b:c.instructions+=1;goto B5f1e3b;
case 0x5f1e3d:goto L5f1e3d;
case 0x5f1e3f:c.instructions+=2;goto B5f1e3f;
case 0x5f1e41:c.instructions+=1;goto B5f1e41;
case 0x5f1e43:goto L5f1e43;
case 0x5f1e4d:goto L5f1e4d;
case 0x5f1e50:c.instructions+=2;goto B5f1e50;
case 0x5f1e51:c.instructions+=1;goto B5f1e51;
case 0x5f1e56:goto L5f1e56;
case 0x5f1e59:c.instructions+=4;goto B5f1e59;
case 0x5f1e5c:c.instructions+=3;goto B5f1e5c;
case 0x5f1e5f:c.instructions+=2;goto B5f1e5f;
case 0x5f1e61:c.instructions+=1;goto B5f1e61;
case 0x5f1e63:goto L5f1e63;
case 0x5f1e65:c.instructions+=1;goto B5f1e65;
case 0x5f1e67:goto L5f1e67;
case 0x5f1e6a:c.instructions+=2;goto B5f1e6a;
case 0x5f1e6c:c.instructions+=1;goto B5f1e6c;
case 0x5f1e6e:goto L5f1e6e;
case 0x5f1e70:c.instructions+=2;goto B5f1e70;
case 0x5f1e72:c.instructions+=1;goto B5f1e72;
case 0x5f1e74:goto L5f1e74;
case 0x5f1e76:c.instructions+=1;goto B5f1e76;
case 0x5f1e78:goto L5f1e78;
case 0x5f1e7b:c.instructions+=2;goto B5f1e7b;
case 0x5f1e7d:c.instructions+=1;goto B5f1e7d;
case 0x5f1e7f:goto L5f1e7f;
case 0x5f1e81:c.instructions+=2;goto B5f1e81;
case 0x5f1e83:c.instructions+=1;goto B5f1e83;
case 0x5f1e85:goto L5f1e85;
case 0x5f1e89:c.instructions+=2;goto B5f1e89;
case 0x5f1e8b:c.instructions+=1;goto B5f1e8b;
case 0x5f1e8d:goto L5f1e8d;
case 0x5f1e8f:c.instructions+=1;goto B5f1e8f;
case 0x5f1e94:goto L5f1e94;
case 0x5f1e97:c.instructions+=4;goto B5f1e97;
case 0x5f1e9b:c.instructions+=3;goto B5f1e9b;
case 0x5f1e9d:c.instructions+=2;goto B5f1e9d;
case 0x5f1ea5:c.instructions+=1;goto B5f1ea5;
case 0x5f1ea7:goto L5f1ea7;
case 0x5f1eaa:c.instructions+=5;goto B5f1eaa;
case 0x5f1ead:c.instructions+=4;goto B5f1ead;
case 0x5f1eae:c.instructions+=3;goto B5f1eae;
case 0x5f1eaf:c.instructions+=2;goto B5f1eaf;
case 0x5f1eb1:c.instructions+=1;goto B5f1eb1;
case 0x5f1eb6:goto L5f1eb6;
case 0x5f1eb8:goto L5f1eb8;
case 0x5f1eba:goto L5f1eba;
case 0x5f1ec0:goto L5f1ec0;
case 0x5f1ec4:c.instructions+=4;goto B5f1ec4;
case 0x5f1ecb:c.instructions+=3;goto B5f1ecb;
case 0x5f1ecc:c.instructions+=2;goto B5f1ecc;
case 0x5f1ecf:c.instructions+=1;goto B5f1ecf;
case 0x5f1ee0:goto L5f1ee0;
case 0x5f1ee1:c.instructions+=9;goto B5f1ee1;
case 0x5f1ee2:c.instructions+=8;goto B5f1ee2;
case 0x5f1ee5:c.instructions+=7;goto B5f1ee5;
case 0x5f1ee6:c.instructions+=6;goto B5f1ee6;
case 0x5f1ee8:c.instructions+=5;goto B5f1ee8;
case 0x5f1eee:c.instructions+=4;goto B5f1eee;
case 0x5f1ef4:c.instructions+=3;goto B5f1ef4;
case 0x5f1ef9:c.instructions+=2;goto B5f1ef9;
case 0x5f1efb:c.instructions+=1;goto B5f1efb;
case 0x5f1efd:goto L5f1efd;
case 0x5f1f02:c.instructions+=2;goto B5f1f02;
case 0x5f1f04:c.instructions+=1;goto B5f1f04;
case 0x5f1f06:goto L5f1f06;
case 0x5f1f0b:c.instructions+=2;goto B5f1f0b;
case 0x5f1f0d:c.instructions+=1;goto B5f1f0d;
case 0x5f1f0f:goto L5f1f0f;
case 0x5f1f10:c.instructions+=4;goto B5f1f10;
case 0x5f1f12:c.instructions+=3;goto B5f1f12;
case 0x5f1f13:c.instructions+=2;goto B5f1f13;
case 0x5f1f14:c.instructions+=1;goto B5f1f14;
case 0x5f1f15:goto L5f1f15;
case 0x5f1f18:c.instructions+=5;goto B5f1f18;
case 0x5f1f1b:c.instructions+=4;goto B5f1f1b;
case 0x5f1f1d:c.instructions+=3;goto B5f1f1d;
case 0x5f1f1e:c.instructions+=2;goto B5f1f1e;
case 0x5f1f1f:c.instructions+=1;goto B5f1f1f;
case 0x5f1f22:goto L5f1f22;
case 0x5f1f24:c.instructions+=2;goto B5f1f24;
case 0x5f1f26:c.instructions+=1;goto B5f1f26;
case 0x5f1f28:goto L5f1f28;
case 0x5f1f2b:c.instructions+=3;goto B5f1f2b;
case 0x5f1f2e:c.instructions+=2;goto B5f1f2e;
case 0x5f1f30:c.instructions+=1;goto B5f1f30;
case 0x5f1f33:goto L5f1f33;
case 0x5f1f35:c.instructions+=8;goto B5f1f35;
case 0x5f1f37:c.instructions+=7;goto B5f1f37;
case 0x5f1f38:c.instructions+=6;goto B5f1f38;
case 0x5f1f3b:c.instructions+=5;goto B5f1f3b;
case 0x5f1f3d:c.instructions+=4;goto B5f1f3d;
case 0x5f1f40:c.instructions+=3;goto B5f1f40;
case 0x5f1f41:c.instructions+=2;goto B5f1f41;
case 0x5f1f43:c.instructions+=1;goto B5f1f43;
case 0x5f1f48:goto L5f1f48;
case 0x5f1f4a:c.instructions+=2;goto B5f1f4a;
case 0x5f1f4c:c.instructions+=1;goto B5f1f4c;
case 0x5f1f4e:goto L5f1f4e;
case 0x5f1f52:c.instructions+=6;goto B5f1f52;
case 0x5f1f55:c.instructions+=5;goto B5f1f55;
case 0x5f1f57:c.instructions+=4;goto B5f1f57;
case 0x5f1f5b:c.instructions+=3;goto B5f1f5b;
case 0x5f1f5f:c.instructions+=2;goto B5f1f5f;
case 0x5f1f61:c.instructions+=1;goto B5f1f61;
case 0x5f1f63:goto L5f1f63;
case 0x5f1f65:goto L5f1f65;
case 0x5f1f68:c.instructions+=7;goto B5f1f68;
case 0x5f1f6b:c.instructions+=6;goto B5f1f6b;
case 0x5f1f6f:c.instructions+=5;goto B5f1f6f;
case 0x5f1f72:c.instructions+=4;goto B5f1f72;
case 0x5f1f78:c.instructions+=3;goto B5f1f78;
case 0x5f1f7a:c.instructions+=2;goto B5f1f7a;
case 0x5f1f7d:c.instructions+=1;goto B5f1f7d;
case 0x5f1f7f:goto L5f1f7f;
case 0x5f1f80:c.instructions+=3;goto B5f1f80;
case 0x5f1f83:c.instructions+=2;goto B5f1f83;
case 0x5f1f85:c.instructions+=1;goto B5f1f85;
case 0x5f1f87:goto L5f1f87;
case 0x5f1f8a:goto L5f1f8a;
case 0x5f1f8b:c.instructions+=8;goto B5f1f8b;
case 0x5f1f8c:c.instructions+=7;goto B5f1f8c;
case 0x5f1f92:c.instructions+=6;goto B5f1f92;
case 0x5f1f98:c.instructions+=5;goto B5f1f98;
case 0x5f1f99:c.instructions+=4;goto B5f1f99;
case 0x5f1f9b:c.instructions+=3;goto B5f1f9b;
case 0x5f1f9c:c.instructions+=2;goto B5f1f9c;
case 0x5f1f9d:c.instructions+=1;goto B5f1f9d;
case 0x5f1f9e:goto L5f1f9e;
case 0x5f1fa1:c.instructions+=1;goto B5f1fa1;
case 0x5f1fa3:goto L5f1fa3;
case 0x5f1fa5:c.instructions+=4;goto B5f1fa5;
case 0x5f1fa7:c.instructions+=3;goto B5f1fa7;
case 0x5f1fa8:c.instructions+=2;goto B5f1fa8;
case 0x5f1fab:c.instructions+=1;goto B5f1fab;
case 0x5f1fad:goto L5f1fad;
case 0x5f1fb3:c.instructions+=5;goto B5f1fb3;
case 0x5f1fb9:c.instructions+=4;goto B5f1fb9;
case 0x5f1fbf:c.instructions+=3;goto B5f1fbf;
case 0x5f1fc0:c.instructions+=2;goto B5f1fc0;
case 0x5f1fc2:c.instructions+=1;goto B5f1fc2;
case 0x5f1fc7:goto L5f1fc7;
case 0x5f1fc8:c.instructions+=6;goto B5f1fc8;
case 0x5f1fc9:c.instructions+=5;goto B5f1fc9;
case 0x5f1fca:c.instructions+=4;goto B5f1fca;
case 0x5f1fcc:c.instructions+=3;goto B5f1fcc;
case 0x5f1fcd:c.instructions+=2;goto B5f1fcd;
case 0x5f1fce:c.instructions+=1;goto B5f1fce;
case 0x5f1fd0:goto L5f1fd0;
case 0x5f1fd1:c.instructions+=14;goto B5f1fd1;
case 0x5f1fd3:c.instructions+=13;goto B5f1fd3;
case 0x5f1fd6:c.instructions+=12;goto B5f1fd6;
case 0x5f1fd8:c.instructions+=11;goto B5f1fd8;
case 0x5f1fdd:c.instructions+=10;goto B5f1fdd;
case 0x5f1fe3:c.instructions+=9;goto B5f1fe3;
case 0x5f1fe4:c.instructions+=8;goto B5f1fe4;
case 0x5f1feb:c.instructions+=7;goto B5f1feb;
case 0x5f1ff1:c.instructions+=6;goto B5f1ff1;
case 0x5f1ff2:c.instructions+=5;goto B5f1ff2;
case 0x5f1ff3:c.instructions+=4;goto B5f1ff3;
case 0x5f1ff5:c.instructions+=3;goto B5f1ff5;
case 0x5f1ff6:c.instructions+=2;goto B5f1ff6;
case 0x5f1ffb:c.instructions+=1;goto B5f1ffb;
default:missing_instruction(c.pc);}
B5f1001:L5f1001:{c.instructions+=4;NFSU2_TR(0x5f1001);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f1003:{NFSU2_TR(0x5f1003);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1005:{NFSU2_TR(0x5f1005);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f1009:{NFSU2_TR(0x5f1009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1023;}}
}
B5f100b:L5f100b:{c.instructions+=3;NFSU2_TR(0x5f100b);
__builtin_memmove((R+8),gp(0x8669f4),4);
}
B5f1011:{NFSU2_TR(0x5f1011);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1013:{NFSU2_TR(0x5f1013);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f1023;}}
}
B5f1015:L5f1015:{c.instructions+=3;NFSU2_TR(0x5f1015);
__builtin_memmove((R+8),gp(0x866a14),4);
}
B5f101b:{NFSU2_TR(0x5f101b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f101d:{NFSU2_TR(0x5f101d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f113c;}}
}
B5f1023:L5f1023:{c.instructions+=3;NFSU2_TR(0x5f1023);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f1026:{NFSU2_TR(0x5f1026);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1029:{NFSU2_TR(0x5f1029);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f113c;}}
}
B5f102f:L5f102f:{c.instructions+=28;NFSU2_TR(0x5f102f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f1032:{NFSU2_TR(0x5f1032);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1034:{NFSU2_TR(0x5f1034);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f103a:{NFSU2_TR(0x5f103a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f103d:{NFSU2_TR(0x5f103d);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f1043:{NFSU2_TR(0x5f1043);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f1045:{NFSU2_TR(0x5f1045);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f1047:{NFSU2_TR(0x5f1047);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f1049:{NFSU2_TR(0x5f1049);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f104b:{NFSU2_TR(0x5f104b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f104d:{NFSU2_TR(0x5f104d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f104f:{NFSU2_TR(0x5f104f);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f1051:{NFSU2_TR(0x5f1051);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1053:{NFSU2_TR(0x5f1053);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f1057:{NFSU2_TR(0x5f1057);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1059:{NFSU2_TR(0x5f1059);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f105f:{NFSU2_TR(0x5f105f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1062:{NFSU2_TR(0x5f1062);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f1068:{NFSU2_TR(0x5f1068);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f106a:{NFSU2_TR(0x5f106a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f106c:{NFSU2_TR(0x5f106c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f106e:{NFSU2_TR(0x5f106e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f1070:{NFSU2_TR(0x5f1070);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f1072:{NFSU2_TR(0x5f1072);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f1074:{NFSU2_TR(0x5f1074);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f1076:{NFSU2_TR(0x5f1076);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1078:{NFSU2_TR(0x5f1078);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f107c:{NFSU2_TR(0x5f107c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f1093;}}
}
B5f107e:L5f107e:{c.instructions+=5;NFSU2_TR(0x5f107e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1082:{NFSU2_TR(0x5f1082);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f1086:{NFSU2_TR(0x5f1086);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1088:{NFSU2_TR(0x5f1088);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f108b:{NFSU2_TR(0x5f108b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f110c;}}
}
B5f108d:L5f108d:{c.instructions+=2;NFSU2_TR(0x5f108d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1091:{NFSU2_TR(0x5f1091);
{goto L5f1110;}
}
B5f1093:L5f1093:{c.instructions+=29;NFSU2_TR(0x5f1093);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1095:{NFSU2_TR(0x5f1095);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f109b:{NFSU2_TR(0x5f109b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f109e:{NFSU2_TR(0x5f109e);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f10a4:{NFSU2_TR(0x5f10a4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f10a6:{NFSU2_TR(0x5f10a6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f10a8:{NFSU2_TR(0x5f10a8);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f10aa:{NFSU2_TR(0x5f10aa);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f10ac:{NFSU2_TR(0x5f10ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f10ae:{NFSU2_TR(0x5f10ae);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f10b0:{NFSU2_TR(0x5f10b0);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f10b2:{NFSU2_TR(0x5f10b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f10b4:{NFSU2_TR(0x5f10b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f10b6:{NFSU2_TR(0x5f10b6);
{u32 ea_=u32(r4(R+4)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f10bc:{NFSU2_TR(0x5f10bc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f10bf:{NFSU2_TR(0x5f10bf);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f10c5:{NFSU2_TR(0x5f10c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f10c7:{NFSU2_TR(0x5f10c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f10c9:{NFSU2_TR(0x5f10c9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f10cb:{NFSU2_TR(0x5f10cb);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f10cd:{NFSU2_TR(0x5f10cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f10cf:{NFSU2_TR(0x5f10cf);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f10d1:{NFSU2_TR(0x5f10d1);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f10d3:{NFSU2_TR(0x5f10d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f10d5:{NFSU2_TR(0x5f10d5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f10d9:{NFSU2_TR(0x5f10d9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f10dd:{NFSU2_TR(0x5f10dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f10df:{NFSU2_TR(0x5f10df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f10e2:{NFSU2_TR(0x5f10e2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f10ea;}}
}
B5f10e4:L5f10e4:{c.instructions+=2;NFSU2_TR(0x5f10e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f10e6:{NFSU2_TR(0x5f10e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f10ea:L5f10ea:{c.instructions+=5;NFSU2_TR(0x5f10ea);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f10ee:{NFSU2_TR(0x5f10ee);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f10f0:{NFSU2_TR(0x5f10f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f10f2:{NFSU2_TR(0x5f10f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f10f5:{NFSU2_TR(0x5f10f5);
if(r1(R+514)){{goto L5f10fd;}}
}
B5f10f7:L5f10f7:{c.instructions+=2;NFSU2_TR(0x5f10f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f10f9:{NFSU2_TR(0x5f10f9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f10fd:L5f10fd:{c.instructions+=5;NFSU2_TR(0x5f10fd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1101:{NFSU2_TR(0x5f1101);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1103:{NFSU2_TR(0x5f1103);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1105:{NFSU2_TR(0x5f1105);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1108:{NFSU2_TR(0x5f1108);
if(r1(R+514)){{goto L5f1110;}}
}
B5f110a:L5f110a:{c.instructions+=1;NFSU2_TR(0x5f110a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f110c:L5f110c:{c.instructions+=1;NFSU2_TR(0x5f110c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1110:L5f1110:{c.instructions+=5;NFSU2_TR(0x5f1110);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1114:{NFSU2_TR(0x5f1114);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1116:{NFSU2_TR(0x5f1116);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1118:{NFSU2_TR(0x5f1118);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f111b:{NFSU2_TR(0x5f111b);
if(r1(R+514)){{goto L5f1123;}}
}
B5f111d:L5f111d:{c.instructions+=2;NFSU2_TR(0x5f111d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f111f:{NFSU2_TR(0x5f111f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1123:L5f1123:{c.instructions+=5;NFSU2_TR(0x5f1123);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1127:{NFSU2_TR(0x5f1127);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1129:{NFSU2_TR(0x5f1129);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f112b:{NFSU2_TR(0x5f112b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f112e:{NFSU2_TR(0x5f112e);
if(r1(R+514)){{goto L5f114f;}}
}
B5f1130:L5f1130:{c.instructions+=1;NFSU2_TR(0x5f1130);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1132:L5f1132:{c.instructions+=3;NFSU2_TR(0x5f1132);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1136:{NFSU2_TR(0x5f1136);
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
B5f1139:{NFSU2_TR(0x5f1139);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f113c:L5f113c:{c.instructions+=5;NFSU2_TR(0x5f113c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1140:{NFSU2_TR(0x5f1140);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f1144:{NFSU2_TR(0x5f1144);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1146:{NFSU2_TR(0x5f1146);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1149:{NFSU2_TR(0x5f1149);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1132u);}goto L5f1132;}}
}
B5f114b:L5f114b:{c.instructions+=1;NFSU2_TR(0x5f114b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f114f:L5f114f:{c.instructions+=2;NFSU2_TR(0x5f114f);
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
B5f1152:{NFSU2_TR(0x5f1152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1160:L5f1160:{c.instructions+=9;NFSU2_TR(0x5f1160);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f1163:{NFSU2_TR(0x5f1163);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1164:{NFSU2_TR(0x5f1164);
__builtin_memmove((R+24),(R+4),4);
}
B5f1166:{NFSU2_TR(0x5f1166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1167:{NFSU2_TR(0x5f1167);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f116b:{NFSU2_TR(0x5f116b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f1171:{NFSU2_TR(0x5f1171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1172:{NFSU2_TR(0x5f1172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1173:{NFSU2_TR(0x5f1173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1178ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f1178:L5f1178:{c.instructions+=5;NFSU2_TR(0x5f1178);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f117c:{NFSU2_TR(0x5f117c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1182:{NFSU2_TR(0x5f1182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1183:{NFSU2_TR(0x5f1183);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1184:{NFSU2_TR(0x5f1184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1189ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f1189:L5f1189:{c.instructions+=5;NFSU2_TR(0x5f1189);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f118d:{NFSU2_TR(0x5f118d);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5f1192:{NFSU2_TR(0x5f1192);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f1195:{NFSU2_TR(0x5f1195);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f1197:{NFSU2_TR(0x5f1197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f11af;}}
}
B5f1199:L5f1199:{c.instructions+=3;NFSU2_TR(0x5f1199);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5f119e:{NFSU2_TR(0x5f119e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f11a0:{NFSU2_TR(0x5f11a0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f11af;}}
}
B5f11a2:L5f11a2:{c.instructions+=3;NFSU2_TR(0x5f11a2);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5f11a7:{NFSU2_TR(0x5f11a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f11a9:{NFSU2_TR(0x5f11a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f1283;}}
}
B5f11af:L5f11af:{c.instructions+=2;NFSU2_TR(0x5f11af);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f11b3:{NFSU2_TR(0x5f11b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f1283;}}
}
B5f11b9:L5f11b9:{c.instructions+=4;NFSU2_TR(0x5f11b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f11bf:{NFSU2_TR(0x5f11bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f11c0:{NFSU2_TR(0x5f11c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f11c1:{NFSU2_TR(0x5f11c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f11c6ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f11c6:L5f11c6:{c.instructions+=5;NFSU2_TR(0x5f11c6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f11ca:{NFSU2_TR(0x5f11ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f11d0:{NFSU2_TR(0x5f11d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f11d1:{NFSU2_TR(0x5f11d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f11d2:{NFSU2_TR(0x5f11d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f11d7ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f11d7:L5f11d7:{c.instructions+=5;NFSU2_TR(0x5f11d7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f11db:{NFSU2_TR(0x5f11db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f11de:{NFSU2_TR(0x5f11de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f11e1:{NFSU2_TR(0x5f11e1);
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
B5f11e4:{NFSU2_TR(0x5f11e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f11fb;}}
}
B5f11e6:L5f11e6:{c.instructions+=5;NFSU2_TR(0x5f11e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f11ea:{NFSU2_TR(0x5f11ea);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f11ee:{NFSU2_TR(0x5f11ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f11f0:{NFSU2_TR(0x5f11f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f11f3:{NFSU2_TR(0x5f11f3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f1251;}}
}
B5f11f5:L5f11f5:{c.instructions+=2;NFSU2_TR(0x5f11f5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f11f9:{NFSU2_TR(0x5f11f9);
{goto L5f1255;}
}
B5f11fb:L5f11fb:{c.instructions+=4;NFSU2_TR(0x5f11fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1201:{NFSU2_TR(0x5f1201);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1202:{NFSU2_TR(0x5f1202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1203:{NFSU2_TR(0x5f1203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1208ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f1208:L5f1208:{c.instructions+=5;NFSU2_TR(0x5f1208);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f120c:{NFSU2_TR(0x5f120c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xd0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f1212:{NFSU2_TR(0x5f1212);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1213:{NFSU2_TR(0x5f1213);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1214:{NFSU2_TR(0x5f1214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1219ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f1219:L5f1219:{c.instructions+=6;NFSU2_TR(0x5f1219);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f121d:{NFSU2_TR(0x5f121d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f121f:{NFSU2_TR(0x5f121f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f1222:{NFSU2_TR(0x5f1222);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1224:{NFSU2_TR(0x5f1224);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1227:{NFSU2_TR(0x5f1227);
if(r1(R+514)){{goto L5f122f;}}
}
B5f1229:L5f1229:{c.instructions+=2;NFSU2_TR(0x5f1229);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f122b:{NFSU2_TR(0x5f122b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f122f:L5f122f:{c.instructions+=5;NFSU2_TR(0x5f122f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1233:{NFSU2_TR(0x5f1233);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1235:{NFSU2_TR(0x5f1235);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1237:{NFSU2_TR(0x5f1237);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f123a:{NFSU2_TR(0x5f123a);
if(r1(R+514)){{goto L5f1242;}}
}
B5f123c:L5f123c:{c.instructions+=2;NFSU2_TR(0x5f123c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f123e:{NFSU2_TR(0x5f123e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1242:L5f1242:{c.instructions+=5;NFSU2_TR(0x5f1242);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1246:{NFSU2_TR(0x5f1246);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1248:{NFSU2_TR(0x5f1248);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f124a:{NFSU2_TR(0x5f124a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f124d:{NFSU2_TR(0x5f124d);
if(r1(R+514)){{goto L5f1255;}}
}
B5f124f:L5f124f:{c.instructions+=1;NFSU2_TR(0x5f124f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1251:L5f1251:{c.instructions+=1;NFSU2_TR(0x5f1251);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1255:L5f1255:{c.instructions+=5;NFSU2_TR(0x5f1255);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1259:{NFSU2_TR(0x5f1259);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f125b:{NFSU2_TR(0x5f125b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f125d:{NFSU2_TR(0x5f125d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1260:{NFSU2_TR(0x5f1260);
if(r1(R+514)){{goto L5f1268;}}
}
B5f1262:L5f1262:{c.instructions+=2;NFSU2_TR(0x5f1262);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1264:{NFSU2_TR(0x5f1264);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1268:L5f1268:{c.instructions+=5;NFSU2_TR(0x5f1268);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f126c:{NFSU2_TR(0x5f126c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f126e:{NFSU2_TR(0x5f126e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1270:{NFSU2_TR(0x5f1270);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1273:{NFSU2_TR(0x5f1273);
if(r1(R+514)){{goto L5f1296;}}
}
B5f1275:L5f1275:{c.instructions+=1;NFSU2_TR(0x5f1275);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1277:L5f1277:{c.instructions+=5;NFSU2_TR(0x5f1277);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f127b:{NFSU2_TR(0x5f127b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f127c:{NFSU2_TR(0x5f127c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f127d:{NFSU2_TR(0x5f127d);
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
B5f1280:{NFSU2_TR(0x5f1280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1283:L5f1283:{c.instructions+=5;NFSU2_TR(0x5f1283);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1287:{NFSU2_TR(0x5f1287);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f128b:{NFSU2_TR(0x5f128b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f128d:{NFSU2_TR(0x5f128d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1290:{NFSU2_TR(0x5f1290);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1277u);}goto L5f1277;}}
}
B5f1292:L5f1292:{c.instructions+=1;NFSU2_TR(0x5f1292);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1296:L5f1296:{c.instructions+=4;NFSU2_TR(0x5f1296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1297:{NFSU2_TR(0x5f1297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1298:{NFSU2_TR(0x5f1298);
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
B5f129b:{NFSU2_TR(0x5f129b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f12a0:L5f12a0:{c.instructions+=10;NFSU2_TR(0x5f12a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5f12a3:{NFSU2_TR(0x5f12a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f12a4:{NFSU2_TR(0x5f12a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f12a5:{NFSU2_TR(0x5f12a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f12a9:{NFSU2_TR(0x5f12a9);
__builtin_memmove((R+24),(R+4),4);
}
B5f12ab:{NFSU2_TR(0x5f12ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f12b1:{NFSU2_TR(0x5f12b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f12b2:{NFSU2_TR(0x5f12b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f12b3:{NFSU2_TR(0x5f12b3);
w4(R+4,u32(0x88f298ull));
}
B5f12b8:{NFSU2_TR(0x5f12b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f12bdull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f12bd:L5f12bd:{c.instructions+=7;NFSU2_TR(0x5f12bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f12c3:{NFSU2_TR(0x5f12c3);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f12c5:{NFSU2_TR(0x5f12c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f12c6:{NFSU2_TR(0x5f12c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f12c7:{NFSU2_TR(0x5f12c7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f12cb:{NFSU2_TR(0x5f12cb);
w4(R+4,u32(0x88f298ull));
}
B5f12d0:{NFSU2_TR(0x5f12d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f12d5ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f12d5:L5f12d5:{c.instructions+=5;NFSU2_TR(0x5f12d5);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5f12da:{NFSU2_TR(0x5f12da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f12dc:{NFSU2_TR(0x5f12dc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f12de:{NFSU2_TR(0x5f12de);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f12e2:{NFSU2_TR(0x5f12e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f12f6;}}
}
B5f12e4:L5f12e4:{c.instructions+=3;NFSU2_TR(0x5f12e4);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5f12e9:{NFSU2_TR(0x5f12e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f12eb:{NFSU2_TR(0x5f12eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f12f6;}}
}
B5f12ed:L5f12ed:{c.instructions+=3;NFSU2_TR(0x5f12ed);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5f12f2:{NFSU2_TR(0x5f12f2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f12f4:{NFSU2_TR(0x5f12f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f1369;}}
}
B5f12f6:L5f12f6:{c.instructions+=2;NFSU2_TR(0x5f12f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f12fa:{NFSU2_TR(0x5f12fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f1369;}}
}
B5f12fc:L5f12fc:{c.instructions+=5;NFSU2_TR(0x5f12fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f1302:{NFSU2_TR(0x5f1302);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1303:{NFSU2_TR(0x5f1303);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1304:{NFSU2_TR(0x5f1304);
w4(R+4,u32(0x88f298ull));
}
B5f1309:{NFSU2_TR(0x5f1309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f130eull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f130e:L5f130e:{c.instructions+=7;NFSU2_TR(0x5f130e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1314:{NFSU2_TR(0x5f1314);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f1316:{NFSU2_TR(0x5f1316);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1317:{NFSU2_TR(0x5f1317);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f131b:{NFSU2_TR(0x5f131b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f131c:{NFSU2_TR(0x5f131c);
w4(R+4,u32(0x88f298ull));
}
B5f1321:{NFSU2_TR(0x5f1321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1326ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f1326:L5f1326:{c.instructions+=6;NFSU2_TR(0x5f1326);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f1328:{NFSU2_TR(0x5f1328);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f132c:{NFSU2_TR(0x5f132c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f132e:{NFSU2_TR(0x5f132e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1330:{NFSU2_TR(0x5f1330);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1333:{NFSU2_TR(0x5f1333);
if(r1(R+514)){{goto L5f133b;}}
}
B5f1335:L5f1335:{c.instructions+=2;NFSU2_TR(0x5f1335);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1337:{NFSU2_TR(0x5f1337);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f133b:L5f133b:{c.instructions+=5;NFSU2_TR(0x5f133b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f133f:{NFSU2_TR(0x5f133f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1341:{NFSU2_TR(0x5f1341);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1343:{NFSU2_TR(0x5f1343);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1346:{NFSU2_TR(0x5f1346);
if(r1(R+514)){{goto L5f134e;}}
}
B5f1348:L5f1348:{c.instructions+=2;NFSU2_TR(0x5f1348);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f134a:{NFSU2_TR(0x5f134a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f134e:L5f134e:{c.instructions+=5;NFSU2_TR(0x5f134e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1352:{NFSU2_TR(0x5f1352);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f1354:{NFSU2_TR(0x5f1354);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1356:{NFSU2_TR(0x5f1356);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1359:{NFSU2_TR(0x5f1359);
if(r1(R+514)){{goto L5f137c;}}
}
B5f135b:L5f135b:{c.instructions+=1;NFSU2_TR(0x5f135b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f135d:L5f135d:{c.instructions+=5;NFSU2_TR(0x5f135d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1361:{NFSU2_TR(0x5f1361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1362:{NFSU2_TR(0x5f1362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1363:{NFSU2_TR(0x5f1363);
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
B5f1366:{NFSU2_TR(0x5f1366);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1369:L5f1369:{c.instructions+=5;NFSU2_TR(0x5f1369);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f136d:{NFSU2_TR(0x5f136d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f1371:{NFSU2_TR(0x5f1371);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1373:{NFSU2_TR(0x5f1373);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f1376:{NFSU2_TR(0x5f1376);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f135du);}goto L5f135d;}}
}
B5f1378:L5f1378:{c.instructions+=1;NFSU2_TR(0x5f1378);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f137c:L5f137c:{c.instructions+=4;NFSU2_TR(0x5f137c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f137d:{NFSU2_TR(0x5f137d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f137e:{NFSU2_TR(0x5f137e);
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
B5f1381:{NFSU2_TR(0x5f1381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1390:L5f1390:{c.instructions+=11;NFSU2_TR(0x5f1390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1391:{NFSU2_TR(0x5f1391);
__builtin_memmove((R+20),(R+16),4);
}
B5f1393:{NFSU2_TR(0x5f1393);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f1396:{NFSU2_TR(0x5f1396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5f1399:{NFSU2_TR(0x5f1399);
__builtin_memmove((R+0),gp(0x890084),4);
}
B5f139e:{NFSU2_TR(0x5f139e);
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
B5f13a0:{NFSU2_TR(0x5f13a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f13a1:{NFSU2_TR(0x5f13a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f13a2:{NFSU2_TR(0x5f13a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f13a3:{NFSU2_TR(0x5f13a3);
__builtin_memmove((R+24),(R+4),4);
}
B5f13a5:{NFSU2_TR(0x5f13a5);
if(r1(R+518)){{goto L5f14da;}}
}
B5f13ab:L5f13ab:{c.instructions+=3;NFSU2_TR(0x5f13ab);
__builtin_memmove((R+0),gp(0x802088),4);
}
B5f13b0:{NFSU2_TR(0x5f13b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5f13b2:{NFSU2_TR(0x5f13b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f1453;}}
}
B5f13b8:L5f13b8:{c.instructions+=2;NFSU2_TR(0x5f13b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f13be:{NFSU2_TR(0x5f13be);
w4(R+12,u32(0x14ull));
}
B5f13c3:L5f13c3:{c.instructions+=2;NFSU2_TR(0x5f13c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffff9c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f13c9:{NFSU2_TR(0x5f13c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f13ceull));
TAIL_STATIC(0x40fbd0u,40f);
}
B5f13ce:L5f13ce:{c.instructions+=2;NFSU2_TR(0x5f13ce);
__builtin_memmove((R+4),(R+28),4);
}
B5f13d0:{NFSU2_TR(0x5f13d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f13d5ull));
TAIL_STATIC(0x40fbd0u,40f);
}
B5f13d5:L5f13d5:{c.instructions+=3;NFSU2_TR(0x5f13d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x50ull))));
}
B5f13d8:{NFSU2_TR(0x5f13d8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5f13d9:{NFSU2_TR(0x5f13d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f13c3u);}goto L5f13c3;}}
}
B5f13db:L5f13db:{c.instructions+=3;NFSU2_TR(0x5f13db);
__builtin_memmove((R+0),gp(0x802088),4);
}
B5f13e0:{NFSU2_TR(0x5f13e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f13e6:{NFSU2_TR(0x5f13e6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f1453;}}
}
B5f13e8:L5f13e8:{c.instructions+=7;NFSU2_TR(0x5f13e8);
u8 U[13];
w4(U+0,u32(u32(u32(0x1030ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(s32(s8(r1(U+12)))));
}
B5f13f0:{NFSU2_TR(0x5f13f0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1058ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B5f13f8:{NFSU2_TR(0x5f13f8);
u8 U[12];
w4(U+0,u32(u32(u32(0xdb0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5f13ff:{NFSU2_TR(0x5f13ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1400:{NFSU2_TR(0x5f1400);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1404:{NFSU2_TR(0x5f1404);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1405:{NFSU2_TR(0x5f1405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f140aull));
TAIL_STATIC(0x403780u,403);
}
B5f140a:L5f140a:{c.instructions+=6;NFSU2_TR(0x5f140a);
__builtin_memmove((R+8),gp(0x802088),4);
}
B5f1410:{NFSU2_TR(0x5f1410);
u8 U[12];
w4(U+0,u32(u32(u32(0xef0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5f1417:{NFSU2_TR(0x5f1417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1418:{NFSU2_TR(0x5f1418);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f141c:{NFSU2_TR(0x5f141c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f141d:{NFSU2_TR(0x5f141d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1422ull));
TAIL_STATIC(0x403780u,403);
}
B5f1422:L5f1422:{c.instructions+=7;NFSU2_TR(0x5f1422);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f1425:{NFSU2_TR(0x5f1425);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f1428:{NFSU2_TR(0x5f1428);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f142c:{NFSU2_TR(0x5f142c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5f142f:{NFSU2_TR(0x5f142f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1430:{NFSU2_TR(0x5f1430);
u8 U[12];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f1437:{NFSU2_TR(0x5f1437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f143cull));
TAIL_STATIC(0x40f890u,40f);
}
B5f143c:L5f143c:{c.instructions+=6;NFSU2_TR(0x5f143c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1440:{NFSU2_TR(0x5f1440);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5f1443:{NFSU2_TR(0x5f1443);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5f1446:{NFSU2_TR(0x5f1446);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1447:{NFSU2_TR(0x5f1447);
u8 U[12];
w4(U+0,u32(u32(u32(0x770ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f144e:{NFSU2_TR(0x5f144e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1453ull));
TAIL_STATIC(0x40f890u,40f);
}
B5f1453:L5f1453:{c.instructions+=3;NFSU2_TR(0x5f1453);
__builtin_memmove((R+0),gp(0x890094),4);
}
B5f1458:{NFSU2_TR(0x5f1458);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f145a:{NFSU2_TR(0x5f145a);
if(r1(R+518)){{goto L5f1474;}}
}
B5f145c:L5f145c:{c.instructions+=4;NFSU2_TR(0x5f145c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1420ull))));
}
B5f1462:{NFSU2_TR(0x5f1462);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1463:{NFSU2_TR(0x5f1463);
w4(R+4,u32(0x81e5b8ull));
}
B5f1468:{NFSU2_TR(0x5f1468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f146dull));
TAIL_STATIC(0x414bf0u,414);
}
B5f146d:L5f146d:{c.instructions+=6;NFSU2_TR(0x5f146d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f146e:{NFSU2_TR(0x5f146e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f146f:{NFSU2_TR(0x5f146f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1470:{NFSU2_TR(0x5f1470);
__builtin_memmove((R+16),(R+20),4);
}
B5f1472:{NFSU2_TR(0x5f1472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1473:{NFSU2_TR(0x5f1473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1474:L5f1474:{c.instructions+=3;NFSU2_TR(0x5f1474);
__builtin_memmove((R+0),gp(0x890098),4);
}
B5f1479:{NFSU2_TR(0x5f1479);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f147b:{NFSU2_TR(0x5f147b);
if(r1(R+518)){{goto L5f1495;}}
}
B5f147d:L5f147d:{c.instructions+=4;NFSU2_TR(0x5f147d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1080ull))));
}
B5f1483:{NFSU2_TR(0x5f1483);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1484:{NFSU2_TR(0x5f1484);
w4(R+4,u32(0x81e5b8ull));
}
B5f1489:{NFSU2_TR(0x5f1489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f148eull));
TAIL_STATIC(0x414bf0u,414);
}
B5f148e:L5f148e:{c.instructions+=6;NFSU2_TR(0x5f148e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f148f:{NFSU2_TR(0x5f148f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1490:{NFSU2_TR(0x5f1490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1491:{NFSU2_TR(0x5f1491);
__builtin_memmove((R+16),(R+20),4);
}
B5f1493:{NFSU2_TR(0x5f1493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1494:{NFSU2_TR(0x5f1494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1495:L5f1495:{c.instructions+=3;NFSU2_TR(0x5f1495);
__builtin_memmove((R+0),gp(0x89009c),4);
}
B5f149a:{NFSU2_TR(0x5f149a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f149c:{NFSU2_TR(0x5f149c);
if(r1(R+518)){{goto L5f14b6;}}
}
B5f149e:L5f149e:{c.instructions+=4;NFSU2_TR(0x5f149e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1250ull))));
}
B5f14a4:{NFSU2_TR(0x5f14a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14a5:{NFSU2_TR(0x5f14a5);
w4(R+4,u32(0x81e5b8ull));
}
B5f14aa:{NFSU2_TR(0x5f14aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f14afull));
TAIL_STATIC(0x414bf0u,414);
}
B5f14af:L5f14af:{c.instructions+=6;NFSU2_TR(0x5f14af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f14b0:{NFSU2_TR(0x5f14b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f14b1:{NFSU2_TR(0x5f14b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f14b2:{NFSU2_TR(0x5f14b2);
__builtin_memmove((R+16),(R+20),4);
}
B5f14b4:{NFSU2_TR(0x5f14b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f14b5:{NFSU2_TR(0x5f14b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f14b6:L5f14b6:{c.instructions+=3;NFSU2_TR(0x5f14b6);
__builtin_memmove((R+0),gp(0x80208c),4);
}
B5f14bb:{NFSU2_TR(0x5f14bb);
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
B5f14be:{NFSU2_TR(0x5f14be);
if(r1(R+518)){{goto L5f14da;}}
}
B5f14c0:L5f14c0:{c.instructions+=2;NFSU2_TR(0x5f14c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14c1:{NFSU2_TR(0x5f14c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f14c6ull));
TAIL_STATIC(0x5f0ed0u,5f0);
}
B5f14c6:L5f14c6:{c.instructions+=6;NFSU2_TR(0x5f14c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f14c9:{NFSU2_TR(0x5f14c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f14cc:{NFSU2_TR(0x5f14cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5f14cf:{NFSU2_TR(0x5f14cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14d0:{NFSU2_TR(0x5f14d0);
w4(R+4,u32(0x81e5b8ull));
}
B5f14d5:{NFSU2_TR(0x5f14d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f14daull));
TAIL_STATIC(0x414bf0u,414);
}
B5f14da:L5f14da:{c.instructions+=6;NFSU2_TR(0x5f14da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f14db:{NFSU2_TR(0x5f14db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f14dc:{NFSU2_TR(0x5f14dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f14dd:{NFSU2_TR(0x5f14dd);
__builtin_memmove((R+16),(R+20),4);
}
B5f14df:{NFSU2_TR(0x5f14df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f14e0:{NFSU2_TR(0x5f14e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f14f0:L5f14f0:{c.instructions+=12;NFSU2_TR(0x5f14f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14f1:{NFSU2_TR(0x5f14f1);
__builtin_memmove((R+20),(R+16),4);
}
B5f14f3:{NFSU2_TR(0x5f14f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f14f6:{NFSU2_TR(0x5f14f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5f14f9:{NFSU2_TR(0x5f14f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14fa:{NFSU2_TR(0x5f14fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14fb:{NFSU2_TR(0x5f14fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f14fc:{NFSU2_TR(0x5f14fc);
__builtin_memmove((R+28),gp(0x890080),4);
}
B5f1502:{NFSU2_TR(0x5f1502);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1505:{NFSU2_TR(0x5f1505);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1507:{NFSU2_TR(0x5f1507);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f150f:{NFSU2_TR(0x5f150f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f1629;}}
}
B5f1515:L5f1515:{c.instructions+=3;NFSU2_TR(0x5f1515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f1518:{NFSU2_TR(0x5f1518);
w4(R+12,u32(0x1cull));
}
B5f151d:{NFSU2_TR(0x5f151d);
__builtin_memmove((R+4),(R+4),4);
}
B5f1520:L5f1520:{c.instructions+=3;NFSU2_TR(0x5f1520);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5f1523:{NFSU2_TR(0x5f1523);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f1526:{NFSU2_TR(0x5f1526);
if(r1(R+518)){{goto L5f1612;}}
}
B5f152c:L5f152c:{c.instructions+=3;NFSU2_TR(0x5f152c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f1532:{NFSU2_TR(0x5f1532);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f1534:{NFSU2_TR(0x5f1534);
if(r1(R+518)){{goto L5f1612;}}
}
B5f153a:L5f153a:{c.instructions+=24;NFSU2_TR(0x5f153a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f153c:{NFSU2_TR(0x5f153c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f153f:{NFSU2_TR(0x5f153f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f1541:{NFSU2_TR(0x5f1541);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1544:{NFSU2_TR(0x5f1544);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f1547:{NFSU2_TR(0x5f1547);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f154a:{NFSU2_TR(0x5f154a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f154d:{NFSU2_TR(0x5f154d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f154f:{NFSU2_TR(0x5f154f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f1551:{NFSU2_TR(0x5f1551);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5f1553:{NFSU2_TR(0x5f1553);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5f1555:{NFSU2_TR(0x5f1555);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f1557:{NFSU2_TR(0x5f1557);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f1559:{NFSU2_TR(0x5f1559);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f155b:{NFSU2_TR(0x5f155b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f155d:{NFSU2_TR(0x5f155d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1560:{NFSU2_TR(0x5f1560);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f1566:{NFSU2_TR(0x5f1566);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f1568:{NFSU2_TR(0x5f1568);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f156a:{NFSU2_TR(0x5f156a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f156c:{NFSU2_TR(0x5f156c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f156e:{NFSU2_TR(0x5f156e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f1571:{NFSU2_TR(0x5f1571);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f1573:{NFSU2_TR(0x5f1573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1612;}}
}
B5f1579:L5f1579:{c.instructions+=21;NFSU2_TR(0x5f1579);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f157c:{NFSU2_TR(0x5f157c);
{u32 ea_=u32(r4(R+0)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1582:{NFSU2_TR(0x5f1582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f1588:{NFSU2_TR(0x5f1588);
{u32 ea_=u32(r4(R+0)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f158e:{NFSU2_TR(0x5f158e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1592:{NFSU2_TR(0x5f1592);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f1594:{NFSU2_TR(0x5f1594);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1595:{NFSU2_TR(0x5f1595);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f1599:{NFSU2_TR(0x5f1599);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x90ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f159f:{NFSU2_TR(0x5f159f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15a0:{NFSU2_TR(0x5f15a0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f15a4:{NFSU2_TR(0x5f15a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f15a8:{NFSU2_TR(0x5f15a8);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f15ae:{NFSU2_TR(0x5f15ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15af:{NFSU2_TR(0x5f15af);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f15b5:{NFSU2_TR(0x5f15b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f15bb:{NFSU2_TR(0x5f15bb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f15bd:{NFSU2_TR(0x5f15bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f15c1:{NFSU2_TR(0x5f15c1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f15c5:{NFSU2_TR(0x5f15c5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f15c9:{NFSU2_TR(0x5f15c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f15ceull));
TAIL_STATIC(0x401340u,401);
}
B5f15ce:L5f15ce:{c.instructions+=5;NFSU2_TR(0x5f15ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f15d2:{NFSU2_TR(0x5f15d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15d3:{NFSU2_TR(0x5f15d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f15d7:{NFSU2_TR(0x5f15d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15d8:{NFSU2_TR(0x5f15d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f15ddull));
TAIL_STATIC(0x5baf90u,5ba);
}
B5f15dd:L5f15dd:{c.instructions+=6;NFSU2_TR(0x5f15dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15de:{NFSU2_TR(0x5f15de);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f15e2:{NFSU2_TR(0x5f15e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15e3:{NFSU2_TR(0x5f15e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f15e7:{NFSU2_TR(0x5f15e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15e8:{NFSU2_TR(0x5f15e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f15edull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f15ed:L5f15ed:{c.instructions+=9;NFSU2_TR(0x5f15ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f15f0:{NFSU2_TR(0x5f15f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15f1:{NFSU2_TR(0x5f15f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f15f5:{NFSU2_TR(0x5f15f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15f6:{NFSU2_TR(0x5f15f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f15fa:{NFSU2_TR(0x5f15fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f15fb:{NFSU2_TR(0x5f15fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f15ff:{NFSU2_TR(0x5f15ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1600:{NFSU2_TR(0x5f1600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1605ull));
TAIL_STATIC(0x43d7a0u,43d);
}
B5f1605:L5f1605:{c.instructions+=3;NFSU2_TR(0x5f1605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B5f1608:{NFSU2_TR(0x5f1608);
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
B5f160a:{NFSU2_TR(0x5f160a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1634;}}
}
B5f160c:L5f160c:{c.instructions+=1;NFSU2_TR(0x5f160c);
__builtin_memmove((R+28),gp(0x890080),4);
}
B5f1612:L5f1612:{c.instructions+=7;NFSU2_TR(0x5f1612);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1616:{NFSU2_TR(0x5f1616);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1619:{NFSU2_TR(0x5f1619);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f161a:{NFSU2_TR(0x5f161a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5f161d:{NFSU2_TR(0x5f161d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f161f:{NFSU2_TR(0x5f161f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1623:{NFSU2_TR(0x5f1623);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1520u);}goto L5f1520;}}
}
B5f1629:L5f1629:{c.instructions+=7;NFSU2_TR(0x5f1629);
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
B5f162b:{NFSU2_TR(0x5f162b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f162c:{NFSU2_TR(0x5f162c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f162d:{NFSU2_TR(0x5f162d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f162e:{NFSU2_TR(0x5f162e);
__builtin_memmove((R+16),(R+20),4);
}
B5f1630:{NFSU2_TR(0x5f1630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1631:{NFSU2_TR(0x5f1631);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1634:L5f1634:{c.instructions+=7;NFSU2_TR(0x5f1634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1635:{NFSU2_TR(0x5f1635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1636:{NFSU2_TR(0x5f1636);
w1(R+0,u8(0x1ull));
}
B5f1638:{NFSU2_TR(0x5f1638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1639:{NFSU2_TR(0x5f1639);
__builtin_memmove((R+16),(R+20),4);
}
B5f163b:{NFSU2_TR(0x5f163b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f163c:{NFSU2_TR(0x5f163c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1640:L5f1640:{c.instructions+=3;NFSU2_TR(0x5f1640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1646:{NFSU2_TR(0x5f1646);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1649:{NFSU2_TR(0x5f1649);
if(r1(R+518)){{goto L5f1650;}}
}
B5f164b:L5f164b:{c.instructions+=2;NFSU2_TR(0x5f164b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f164e:{NFSU2_TR(0x5f164e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1661;}}
}
B5f1650:L5f1650:{c.instructions+=3;NFSU2_TR(0x5f1650);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1656:{NFSU2_TR(0x5f1656);
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
B5f1658:{NFSU2_TR(0x5f1658);
if(r1(R+518)){{goto L5f1661;}}
}
B5f165a:L5f165a:{c.instructions+=2;NFSU2_TR(0x5f165a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4b0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f1660:{NFSU2_TR(0x5f1660);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1661:L5f1661:{c.instructions+=2;NFSU2_TR(0x5f1661);
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
B5f1663:{NFSU2_TR(0x5f1663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1670:L5f1670:{c.instructions+=20;NFSU2_TR(0x5f1670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1671:{NFSU2_TR(0x5f1671);
__builtin_memmove((R+20),(R+16),4);
}
B5f1673:{NFSU2_TR(0x5f1673);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f1676:{NFSU2_TR(0x5f1676);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1678:{NFSU2_TR(0x5f1678);
u8 U[4];
w4(U+0,u32(0x77991bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f167d:{NFSU2_TR(0x5f167d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1683:{NFSU2_TR(0x5f1683);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1684:{NFSU2_TR(0x5f1684);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f168b:{NFSU2_TR(0x5f168b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5f168e:{NFSU2_TR(0x5f168e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f168f:{NFSU2_TR(0x5f168f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f1691:{NFSU2_TR(0x5f1691);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1692:{NFSU2_TR(0x5f1692);
__builtin_memmove((R+24),(R+4),4);
}
B5f1694:{NFSU2_TR(0x5f1694);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5f1696:{NFSU2_TR(0x5f1696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1699:{NFSU2_TR(0x5f1699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f169c:{NFSU2_TR(0x5f169c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f169d:{NFSU2_TR(0x5f169d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f169f:{NFSU2_TR(0x5f169f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f16a2:{NFSU2_TR(0x5f16a2);
w4(R+4,u32(0x8ull));
}
B5f16a7:L5f16a7:{c.instructions+=1;NFSU2_TR(0x5f16a7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f16a9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f16a7u);}goto L5f16a7;}
}
B5f16a9:L5f16a9:{c.instructions+=15;NFSU2_TR(0x5f16a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16af:{NFSU2_TR(0x5f16af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16b5:{NFSU2_TR(0x5f16b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16bb:{NFSU2_TR(0x5f16bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16c1:{NFSU2_TR(0x5f16c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16c7:{NFSU2_TR(0x5f16c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16cd:{NFSU2_TR(0x5f16cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16d3:{NFSU2_TR(0x5f16d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16d9:{NFSU2_TR(0x5f16d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f16da:{NFSU2_TR(0x5f16da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f16e0:{NFSU2_TR(0x5f16e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16e4:{NFSU2_TR(0x5f16e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16ea:{NFSU2_TR(0x5f16ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f16f0:{NFSU2_TR(0x5f16f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f16f6:{NFSU2_TR(0x5f16f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f16fbull));
TAIL_STATIC(0x4189f0u,418);
}
B5f16fb:L5f16fb:{c.instructions+=3;NFSU2_TR(0x5f16fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1701:{NFSU2_TR(0x5f1701);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1705:{NFSU2_TR(0x5f1705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f170aull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B5f170a:L5f170a:{c.instructions+=11;NFSU2_TR(0x5f170a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f170d:{NFSU2_TR(0x5f170d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1713:{NFSU2_TR(0x5f1713);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5f1718:{NFSU2_TR(0x5f1718);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f171f:{NFSU2_TR(0x5f171f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f1720:{NFSU2_TR(0x5f1720);
__builtin_memmove(gp(0x8900bc),(R+0),4);
}
B5f1725:{NFSU2_TR(0x5f1725);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f172c:{NFSU2_TR(0x5f172c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f172f:{NFSU2_TR(0x5f172f);
u8 U[14];
__builtin_memmove((U+6),gp(0x8900bc),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f1736:{NFSU2_TR(0x5f1736);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f173b:{NFSU2_TR(0x5f173b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1759;}}
}
B5f173d:L5f173d:{c.instructions+=6;NFSU2_TR(0x5f173d);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B5f1742:{NFSU2_TR(0x5f1742);
__builtin_memmove((R+4),gp(0x8900b8),4);
}
B5f1748:{NFSU2_TR(0x5f1748);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f174b:{NFSU2_TR(0x5f174b);
__builtin_memmove((R+8),gp(0x8900b8),4);
}
B5f1751:{NFSU2_TR(0x5f1751);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B5f1756:{NFSU2_TR(0x5f1756);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1759:L5f1759:{c.instructions+=4;NFSU2_TR(0x5f1759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f175c:{NFSU2_TR(0x5f175c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f175d:{NFSU2_TR(0x5f175d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1760:{NFSU2_TR(0x5f1760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1765ull));
TAIL_STATIC(0x571ac0u,571);
}
B5f1765:L5f1765:{c.instructions+=9;NFSU2_TR(0x5f1765);
w4(R+4,u32(r1(R+0)));
}
B5f1768:{NFSU2_TR(0x5f1768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f176b:{NFSU2_TR(0x5f176b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f176e:{NFSU2_TR(0x5f176e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f1771:{NFSU2_TR(0x5f1771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1777:{NFSU2_TR(0x5f1777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1781:{NFSU2_TR(0x5f1781);
__builtin_memmove((R+28),(R+8),4);
}
B5f1783:{NFSU2_TR(0x5f1783);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f1785:{NFSU2_TR(0x5f1785);
w4(R+4,u32(0xcull));
}
B5f178a:L5f178a:{c.instructions+=1;NFSU2_TR(0x5f178a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f178c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f178au);}goto L5f178a;}
}
B5f178c:L5f178c:{c.instructions+=9;NFSU2_TR(0x5f178c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f178f:{NFSU2_TR(0x5f178f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1792:{NFSU2_TR(0x5f1792);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1795:{NFSU2_TR(0x5f1795);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f1799:{NFSU2_TR(0x5f1799);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x755ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f17a0:{NFSU2_TR(0x5f17a0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5f17a3:{NFSU2_TR(0x5f17a3);
u8 U[4];
w4(U+0,u32(0x793fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f17a8:{NFSU2_TR(0x5f17a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f17a9:{NFSU2_TR(0x5f17a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f17aeull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5f17ae:L5f17ae:{c.instructions+=10;NFSU2_TR(0x5f17ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f17b1:{NFSU2_TR(0x5f17b1);
__builtin_memmove((R+4),(R+28),4);
}
B5f17b3:{NFSU2_TR(0x5f17b3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5f17b9:{NFSU2_TR(0x5f17b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f17bc:{NFSU2_TR(0x5f17bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x83a9e0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x83a9e0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83a9e0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f17c2:{NFSU2_TR(0x5f17c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f17c5:{NFSU2_TR(0x5f17c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f17c8:{NFSU2_TR(0x5f17c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f17cf:{NFSU2_TR(0x5f17cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f17d2:{NFSU2_TR(0x5f17d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f17d7ull));
TAIL_STATIC(0x502fd0u,502);
}
B5f17d7:L5f17d7:{c.instructions+=5;NFSU2_TR(0x5f17d7);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f17d9:{NFSU2_TR(0x5f17d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f17da:{NFSU2_TR(0x5f17da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f17dd:{NFSU2_TR(0x5f17dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f17de:{NFSU2_TR(0x5f17de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f17e3ull));
TAIL_STATIC(0x43dc00u,43d);
}
B5f17e3:L5f17e3:{c.instructions+=23;NFSU2_TR(0x5f17e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f17e6:{NFSU2_TR(0x5f17e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5f17e9:{NFSU2_TR(0x5f17e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aa79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f17ef:{NFSU2_TR(0x5f17ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f17f2:{NFSU2_TR(0x5f17f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aa7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f17f8:{NFSU2_TR(0x5f17f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f17fb:{NFSU2_TR(0x5f17fb);
__builtin_memmove((R+0),gp(0x83aa20),4);
}
B5f1800:{NFSU2_TR(0x5f1800);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f1803:{NFSU2_TR(0x5f1803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1806:{NFSU2_TR(0x5f1806);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5f1808:{NFSU2_TR(0x5f1808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f180b:{NFSU2_TR(0x5f180b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f180e:{NFSU2_TR(0x5f180e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x998ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1814:{NFSU2_TR(0x5f1814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f181a:{NFSU2_TR(0x5f181a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f181d:{NFSU2_TR(0x5f181d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1820:{NFSU2_TR(0x5f1820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1826:{NFSU2_TR(0x5f1826);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f182c:{NFSU2_TR(0x5f182c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1832:{NFSU2_TR(0x5f1832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1838:{NFSU2_TR(0x5f1838);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f183a:{NFSU2_TR(0x5f183a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f183d:{NFSU2_TR(0x5f183d);
__builtin_memmove((R+4),(R+4),4);
}
B5f1840:L5f1840:{c.instructions+=6;NFSU2_TR(0x5f1840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f1842:{NFSU2_TR(0x5f1842);
u8 U[13];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5f1846:{NFSU2_TR(0x5f1846);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f1847:{NFSU2_TR(0x5f1847);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5f184a:{NFSU2_TR(0x5f184a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f184d:{NFSU2_TR(0x5f184d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1840u);}goto L5f1840;}}
}
B5f184f:L5f184f:{c.instructions+=2;NFSU2_TR(0x5f184f);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1856:{NFSU2_TR(0x5f1856);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1868;}}
}
B5f1858:L5f1858:{c.instructions+=7;NFSU2_TR(0x5f1858);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f185a:{NFSU2_TR(0x5f185a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f185c:{NFSU2_TR(0x5f185c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5f185f:{NFSU2_TR(0x5f185f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1862:{NFSU2_TR(0x5f1862);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5f1863:{NFSU2_TR(0x5f1863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1866:{NFSU2_TR(0x5f1866);
{goto L5f1876;}
}
B5f1868:L5f1868:{c.instructions+=2;NFSU2_TR(0x5f1868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f186f:{NFSU2_TR(0x5f186f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1876:L5f1876:{c.instructions+=11;NFSU2_TR(0x5f1876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f187c:{NFSU2_TR(0x5f187c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1882:{NFSU2_TR(0x5f1882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1888:{NFSU2_TR(0x5f1888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f188e:{NFSU2_TR(0x5f188e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1894:{NFSU2_TR(0x5f1894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f189a:{NFSU2_TR(0x5f189a);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B5f189f:{NFSU2_TR(0x5f189f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f18a2:{NFSU2_TR(0x5f18a2);
w4(R+4,u32(0x799edcull));
}
B5f18a7:{NFSU2_TR(0x5f18a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f18ab:{NFSU2_TR(0x5f18ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1973;}}
}
B5f18b1:L5f18b1:{c.instructions+=2;NFSU2_TR(0x5f18b1);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f18b7:{NFSU2_TR(0x5f18b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f18c1;}}
}
B5f18b9:L5f18b9:{c.instructions+=2;NFSU2_TR(0x5f18b9);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f18bf:{NFSU2_TR(0x5f18bf);
if(r1(R+518)){{goto L5f18e8;}}
}
B5f18c1:L5f18c1:{c.instructions+=2;NFSU2_TR(0x5f18c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f18c3:{NFSU2_TR(0x5f18c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f18d2;}}
}
B5f18c5:L5f18c5:{c.instructions+=2;NFSU2_TR(0x5f18c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a61acull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f18cd:{NFSU2_TR(0x5f18cd);
{goto L5f19ea;}
}
B5f18d2:L5f18d2:{c.instructions+=2;NFSU2_TR(0x5f18d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f18d5:{NFSU2_TR(0x5f18d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f18db:L5f18db:{c.instructions+=2;NFSU2_TR(0x5f18db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6198ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f18e3:{NFSU2_TR(0x5f18e3);
{goto L5f19ea;}
}
B5f18e8:L5f18e8:{c.instructions+=2;NFSU2_TR(0x5f18e8);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f18ee:{NFSU2_TR(0x5f18ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f18f8;}}
}
B5f18f0:L5f18f0:{c.instructions+=2;NFSU2_TR(0x5f18f0);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f18f6:{NFSU2_TR(0x5f18f6);
if(r1(R+518)){{goto L5f191f;}}
}
B5f18f8:L5f18f8:{c.instructions+=2;NFSU2_TR(0x5f18f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f18fa:{NFSU2_TR(0x5f18fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1909;}}
}
B5f18fc:L5f18fc:{c.instructions+=2;NFSU2_TR(0x5f18fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6184ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1904:{NFSU2_TR(0x5f1904);
{goto L5f19ea;}
}
B5f1909:L5f1909:{c.instructions+=2;NFSU2_TR(0x5f1909);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f190c:{NFSU2_TR(0x5f190c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f1912:L5f1912:{c.instructions+=2;NFSU2_TR(0x5f1912);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6170ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f191a:{NFSU2_TR(0x5f191a);
{goto L5f19ea;}
}
B5f191f:L5f191f:{c.instructions+=2;NFSU2_TR(0x5f191f);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1926:{NFSU2_TR(0x5f1926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f194f;}}
}
B5f1928:L5f1928:{c.instructions+=2;NFSU2_TR(0x5f1928);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f192a:{NFSU2_TR(0x5f192a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1939;}}
}
B5f192c:L5f192c:{c.instructions+=2;NFSU2_TR(0x5f192c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a615cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1934:{NFSU2_TR(0x5f1934);
{goto L5f19ea;}
}
B5f1939:L5f1939:{c.instructions+=2;NFSU2_TR(0x5f1939);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f193c:{NFSU2_TR(0x5f193c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f1942:L5f1942:{c.instructions+=2;NFSU2_TR(0x5f1942);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6148ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f194a:{NFSU2_TR(0x5f194a);
{goto L5f19ea;}
}
B5f194f:L5f194f:{c.instructions+=2;NFSU2_TR(0x5f194f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1951:{NFSU2_TR(0x5f1951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1960;}}
}
B5f1953:L5f1953:{c.instructions+=2;NFSU2_TR(0x5f1953);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6138ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f195b:{NFSU2_TR(0x5f195b);
{goto L5f19ea;}
}
B5f1960:L5f1960:{c.instructions+=2;NFSU2_TR(0x5f1960);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1963:{NFSU2_TR(0x5f1963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f1969:L5f1969:{c.instructions+=2;NFSU2_TR(0x5f1969);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6128ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1971:{NFSU2_TR(0x5f1971);
{goto L5f19ea;}
}
B5f1973:L5f1973:{c.instructions+=2;NFSU2_TR(0x5f1973);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1976:{NFSU2_TR(0x5f1976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f1978:L5f1978:{c.instructions+=2;NFSU2_TR(0x5f1978);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f197e:{NFSU2_TR(0x5f197e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1988;}}
}
B5f1980:L5f1980:{c.instructions+=2;NFSU2_TR(0x5f1980);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1986:{NFSU2_TR(0x5f1986);
if(r1(R+518)){{goto L5f1992;}}
}
B5f1988:L5f1988:{c.instructions+=2;NFSU2_TR(0x5f1988);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x799ebcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1990:{NFSU2_TR(0x5f1990);
{goto L5f19ea;}
}
B5f1992:L5f1992:{c.instructions+=2;NFSU2_TR(0x5f1992);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f1998:{NFSU2_TR(0x5f1998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19e2;}}
}
B5f199a:L5f199a:{c.instructions+=2;NFSU2_TR(0x5f199a);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f19a0:{NFSU2_TR(0x5f19a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19e2;}}
}
B5f19a2:L5f19a2:{c.instructions+=2;NFSU2_TR(0x5f19a2);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e2),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f19a8:{NFSU2_TR(0x5f19a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19e2;}}
}
B5f19aa:L5f19aa:{c.instructions+=2;NFSU2_TR(0x5f19aa);
u8 U[8];
__builtin_memmove((U+0),gp(0x890100),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f19b0:{NFSU2_TR(0x5f19b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19e2;}}
}
B5f19b2:L5f19b2:{c.instructions+=2;NFSU2_TR(0x5f19b2);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e5),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f19b8:{NFSU2_TR(0x5f19b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f19ba:L5f19ba:{c.instructions+=2;NFSU2_TR(0x5f19ba);
u8 U[8];
__builtin_memmove((U+0),gp(0x836474),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f19c0:{NFSU2_TR(0x5f19c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19ea;}}
}
B5f19c2:L5f19c2:{c.instructions+=2;NFSU2_TR(0x5f19c2);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e3),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f19c8:{NFSU2_TR(0x5f19c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f19d2;}}
}
B5f19ca:L5f19ca:{c.instructions+=2;NFSU2_TR(0x5f19ca);
u8 U[8];
__builtin_memmove((U+0),gp(0x89010c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f19d0:{NFSU2_TR(0x5f19d0);
if(r1(R+518)){{goto L5f19dc;}}
}
B5f19d2:L5f19d2:{c.instructions+=2;NFSU2_TR(0x5f19d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7a6114ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f19da:{NFSU2_TR(0x5f19da);
{goto L5f19ea;}
}
B5f19dc:L5f19dc:{c.instructions+=2;NFSU2_TR(0x5f19dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f19e0:{NFSU2_TR(0x5f19e0);
{goto L5f19ea;}
}
B5f19e2:L5f19e2:{c.instructions+=1;NFSU2_TR(0x5f19e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x799eccull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f19ea:L5f19ea:{c.instructions+=2;NFSU2_TR(0x5f19ea);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f19ef:{NFSU2_TR(0x5f19ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f19f4ull));
TAIL_STATIC(0x575620u,575);
}
B5f19f4:L5f19f4:{c.instructions+=5;NFSU2_TR(0x5f19f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f19f7:{NFSU2_TR(0x5f19f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f19fb:{NFSU2_TR(0x5f19fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f19fd:{NFSU2_TR(0x5f19fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f1a02:{NFSU2_TR(0x5f1a02);
if(r1(R+518)){{goto L5f1a13;}}
}
B5f1a04:L5f1a04:{c.instructions+=5;NFSU2_TR(0x5f1a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f1a08:{NFSU2_TR(0x5f1a08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1a09:{NFSU2_TR(0x5f1a09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1a0a:{NFSU2_TR(0x5f1a0a);
__builtin_memmove((R+4),(R+0),4);
}
B5f1a0c:{NFSU2_TR(0x5f1a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1a11ull));
TAIL_STATIC(0x4f8bf0u,4f8);
}
B5f1a11:L5f1a11:{c.instructions+=1;NFSU2_TR(0x5f1a11);
{goto L5f1a15;}
}
B5f1a13:L5f1a13:{c.instructions+=1;NFSU2_TR(0x5f1a13);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f1a15:L5f1a15:{c.instructions+=8;NFSU2_TR(0x5f1a15);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1a17:{NFSU2_TR(0x5f1a17);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f1a1c:{NFSU2_TR(0x5f1a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a22:{NFSU2_TR(0x5f1a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a28:{NFSU2_TR(0x5f1a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a2e:{NFSU2_TR(0x5f1a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a31:{NFSU2_TR(0x5f1a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a37:{NFSU2_TR(0x5f1a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1a3cull));
TAIL_STATIC(0x575620u,575);
}
B5f1a3c:L5f1a3c:{c.instructions+=5;NFSU2_TR(0x5f1a3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1a3f:{NFSU2_TR(0x5f1a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a43:{NFSU2_TR(0x5f1a43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1a45:{NFSU2_TR(0x5f1a45);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f1a4a:{NFSU2_TR(0x5f1a4a);
if(r1(R+518)){{goto L5f1a57;}}
}
B5f1a4c:L5f1a4c:{c.instructions+=3;NFSU2_TR(0x5f1a4c);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1a4e:{NFSU2_TR(0x5f1a4e);
__builtin_memmove((R+4),(R+0),4);
}
B5f1a50:{NFSU2_TR(0x5f1a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1a55ull));
TAIL_STATIC(0x579f20u,579);
}
B5f1a55:L5f1a55:{c.instructions+=1;NFSU2_TR(0x5f1a55);
{goto L5f1a59;}
}
B5f1a57:L5f1a57:{c.instructions+=1;NFSU2_TR(0x5f1a57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f1a59:L5f1a59:{c.instructions+=8;NFSU2_TR(0x5f1a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a5f:{NFSU2_TR(0x5f1a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a65:{NFSU2_TR(0x5f1a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a6b:{NFSU2_TR(0x5f1a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a71:{NFSU2_TR(0x5f1a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a77:{NFSU2_TR(0x5f1a77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f1a79:{NFSU2_TR(0x5f1a79);
w4(R+4,u32(0x10ull));
}
B5f1a7e:{NFSU2_TR(0x5f1a7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1a84:L5f1a84:{c.instructions+=1;NFSU2_TR(0x5f1a84);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f1a86;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1a84u);}goto L5f1a84;}
}
B5f1a86:L5f1a86:{c.instructions+=6;NFSU2_TR(0x5f1a86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1a8c:{NFSU2_TR(0x5f1a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5f1a8e:{NFSU2_TR(0x5f1a8e);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1a93:{NFSU2_TR(0x5f1a93);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f1a98:{NFSU2_TR(0x5f1a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1a9b:{NFSU2_TR(0x5f1a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1aa0ull));
TAIL_STATIC(0x575620u,575);
}
B5f1aa0:L5f1aa0:{c.instructions+=3;NFSU2_TR(0x5f1aa0);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1aa5:{NFSU2_TR(0x5f1aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1aab:{NFSU2_TR(0x5f1aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1ab0ull));
TAIL_STATIC(0x575620u,575);
}
B5f1ab0:L5f1ab0:{c.instructions+=29;NFSU2_TR(0x5f1ab0);
{u32 ea_=u32(u32(8017068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1ab6:{NFSU2_TR(0x5f1ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1abc:{NFSU2_TR(0x5f1abc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5f1abf:{NFSU2_TR(0x5f1abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ac5:{NFSU2_TR(0x5f1ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1acb:{NFSU2_TR(0x5f1acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1ad1:{NFSU2_TR(0x5f1ad1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1ad7:{NFSU2_TR(0x5f1ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x249ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1add:{NFSU2_TR(0x5f1add);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1ae3:{NFSU2_TR(0x5f1ae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1ae9:{NFSU2_TR(0x5f1ae9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B5f1aec:{NFSU2_TR(0x5f1aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1af2:{NFSU2_TR(0x5f1af2);
{u32 ea_=u32(r4(R+24)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f1af8:{NFSU2_TR(0x5f1af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1afe:{NFSU2_TR(0x5f1afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b04:{NFSU2_TR(0x5f1b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b0a:{NFSU2_TR(0x5f1b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b14:{NFSU2_TR(0x5f1b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b1a:{NFSU2_TR(0x5f1b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b20:{NFSU2_TR(0x5f1b20);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1b27:{NFSU2_TR(0x5f1b27);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1b2e:{NFSU2_TR(0x5f1b2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w2(U+4,u16(0x32dcull));
s2(u32(r4(U+0)),r2(U+4));
}
B5f1b37:{NFSU2_TR(0x5f1b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b3d:{NFSU2_TR(0x5f1b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b43:{NFSU2_TR(0x5f1b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b49:{NFSU2_TR(0x5f1b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b4f:{NFSU2_TR(0x5f1b4f);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1b54:{NFSU2_TR(0x5f1b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b5a:{NFSU2_TR(0x5f1b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1b5full));
TAIL_STATIC(0x575620u,575);
}
B5f1b5f:L5f1b5f:{c.instructions+=4;NFSU2_TR(0x5f1b5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f1b62:{NFSU2_TR(0x5f1b62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1b64:{NFSU2_TR(0x5f1b64);
w4(R+28,u32(0x1ull));
}
B5f1b69:{NFSU2_TR(0x5f1b69);
if(r1(R+518)){{goto L5f1b7f;}}
}
B5f1b6b:L5f1b6b:{c.instructions+=5;NFSU2_TR(0x5f1b6b);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1b70:{NFSU2_TR(0x5f1b70);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1b75:{NFSU2_TR(0x5f1b75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1b76:{NFSU2_TR(0x5f1b76);
__builtin_memmove((R+4),(R+0),4);
}
B5f1b78:{NFSU2_TR(0x5f1b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1b7dull));
TAIL_STATIC(0x4419a0u,441);
}
B5f1b7d:L5f1b7d:{c.instructions+=1;NFSU2_TR(0x5f1b7d);
{goto L5f1b81;}
}
B5f1b7f:L5f1b7f:{c.instructions+=1;NFSU2_TR(0x5f1b7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f1b81:L5f1b81:{c.instructions+=18;NFSU2_TR(0x5f1b81);
__builtin_memmove((R+8),gp(0x7a54dc),4);
}
B5f1b87:{NFSU2_TR(0x5f1b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1b8d:{NFSU2_TR(0x5f1b8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1b91:{NFSU2_TR(0x5f1b91);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1b95:{NFSU2_TR(0x5f1b95);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1b9c:{NFSU2_TR(0x5f1b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1ba2:{NFSU2_TR(0x5f1ba2);
__builtin_memmove((R+4),(R+8),4);
}
B5f1ba4:{NFSU2_TR(0x5f1ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ba7:{NFSU2_TR(0x5f1ba7);
__builtin_memmove((R+4),gp(0x7a54e0),4);
}
B5f1bad:{NFSU2_TR(0x5f1bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1bb0:{NFSU2_TR(0x5f1bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1bb6:{NFSU2_TR(0x5f1bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1bbc:{NFSU2_TR(0x5f1bbc);
__builtin_memmove((R+8),(R+4),4);
}
B5f1bbe:{NFSU2_TR(0x5f1bbe);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1bc3:{NFSU2_TR(0x5f1bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1bc6:{NFSU2_TR(0x5f1bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1bc9:{NFSU2_TR(0x5f1bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1bcf:{NFSU2_TR(0x5f1bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1bd4ull));
TAIL_STATIC(0x575620u,575);
}
B5f1bd4:L5f1bd4:{c.instructions+=3;NFSU2_TR(0x5f1bd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1bd7:{NFSU2_TR(0x5f1bd7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1bd9:{NFSU2_TR(0x5f1bd9);
if(r1(R+518)){{goto L5f1bef;}}
}
B5f1bdb:L5f1bdb:{c.instructions+=5;NFSU2_TR(0x5f1bdb);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1be0:{NFSU2_TR(0x5f1be0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1be5:{NFSU2_TR(0x5f1be5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1be6:{NFSU2_TR(0x5f1be6);
__builtin_memmove((R+4),(R+0),4);
}
B5f1be8:{NFSU2_TR(0x5f1be8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1bedull));
TAIL_STATIC(0x4419a0u,441);
}
B5f1bed:L5f1bed:{c.instructions+=1;NFSU2_TR(0x5f1bed);
{goto L5f1bf1;}
}
B5f1bef:L5f1bef:{c.instructions+=1;NFSU2_TR(0x5f1bef);
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
B5f1bf1:L5f1bf1:{c.instructions+=43;NFSU2_TR(0x5f1bf1);
__builtin_memmove((R+8),gp(0x7a54e4),4);
}
B5f1bf7:{NFSU2_TR(0x5f1bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1bfd:{NFSU2_TR(0x5f1bfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1c01:{NFSU2_TR(0x5f1c01);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1c05:{NFSU2_TR(0x5f1c05);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f1c0c:{NFSU2_TR(0x5f1c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1c12:{NFSU2_TR(0x5f1c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c15:{NFSU2_TR(0x5f1c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c1b:{NFSU2_TR(0x5f1c1b);
__builtin_memmove((R+4),(R+8),4);
}
B5f1c1d:{NFSU2_TR(0x5f1c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c20:{NFSU2_TR(0x5f1c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1c26:{NFSU2_TR(0x5f1c26);
__builtin_memmove((R+4),gp(0x7a54e8),4);
}
B5f1c2c:{NFSU2_TR(0x5f1c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c2f:{NFSU2_TR(0x5f1c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c35:{NFSU2_TR(0x5f1c35);
__builtin_memmove((R+8),(R+4),4);
}
B5f1c37:{NFSU2_TR(0x5f1c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1c3b:{NFSU2_TR(0x5f1c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c3e:{NFSU2_TR(0x5f1c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c44:{NFSU2_TR(0x5f1c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c4a:{NFSU2_TR(0x5f1c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c50:{NFSU2_TR(0x5f1c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c56:{NFSU2_TR(0x5f1c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c5c:{NFSU2_TR(0x5f1c5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1c62:{NFSU2_TR(0x5f1c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c68:{NFSU2_TR(0x5f1c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c6e:{NFSU2_TR(0x5f1c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c74:{NFSU2_TR(0x5f1c74);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1c7a:{NFSU2_TR(0x5f1c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c80:{NFSU2_TR(0x5f1c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c86:{NFSU2_TR(0x5f1c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c8c:{NFSU2_TR(0x5f1c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c92:{NFSU2_TR(0x5f1c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1c98:{NFSU2_TR(0x5f1c98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1c9e:{NFSU2_TR(0x5f1c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ca4:{NFSU2_TR(0x5f1ca4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1caa:{NFSU2_TR(0x5f1caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1cab:{NFSU2_TR(0x5f1cab);
__builtin_memmove((R+0),(R+24),4);
}
B5f1cad:{NFSU2_TR(0x5f1cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1cae:{NFSU2_TR(0x5f1cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1cb5:{NFSU2_TR(0x5f1cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1cb6:{NFSU2_TR(0x5f1cb6);
__builtin_memmove((R+16),(R+20),4);
}
B5f1cb8:{NFSU2_TR(0x5f1cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1cb9:{NFSU2_TR(0x5f1cb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1cc0:L5f1cc0:{c.instructions+=16;NFSU2_TR(0x5f1cc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cc2:{NFSU2_TR(0x5f1cc2);
u8 U[4];
w4(U+0,u32(0x77994cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cc7:{NFSU2_TR(0x5f1cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1ccd:{NFSU2_TR(0x5f1ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cce:{NFSU2_TR(0x5f1cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1cd5:{NFSU2_TR(0x5f1cd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cd6:{NFSU2_TR(0x5f1cd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cd7:{NFSU2_TR(0x5f1cd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cd8:{NFSU2_TR(0x5f1cd8);
__builtin_memmove((R+24),(R+4),4);
}
B5f1cda:{NFSU2_TR(0x5f1cda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cdb:{NFSU2_TR(0x5f1cdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1cdf:{NFSU2_TR(0x5f1cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1ce2:{NFSU2_TR(0x5f1ce2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f1ce4:{NFSU2_TR(0x5f1ce4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1ce6:{NFSU2_TR(0x5f1ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1cee:{NFSU2_TR(0x5f1cee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1d0c;}}
}
B5f1cf0:L5f1cf0:{c.instructions+=3;NFSU2_TR(0x5f1cf0);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cf2:{NFSU2_TR(0x5f1cf2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1cf4:{NFSU2_TR(0x5f1cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1cf9ull));
TAIL_STATIC(0x5794e0u,579);
}
B5f1cf9:L5f1cf9:{c.instructions+=3;NFSU2_TR(0x5f1cf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f1cfc:{NFSU2_TR(0x5f1cfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1cfe:{NFSU2_TR(0x5f1cfe);
if(r1(R+518)){{goto L5f1d0c;}}
}
B5f1d00:L5f1d00:{c.instructions+=3;NFSU2_TR(0x5f1d00);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d02:{NFSU2_TR(0x5f1d02);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d04:{NFSU2_TR(0x5f1d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d09ull));
TAIL_STATIC(0x57c330u,57c);
}
B5f1d09:L5f1d09:{c.instructions+=1;NFSU2_TR(0x5f1d09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f1d0c:L5f1d0c:{c.instructions+=3;NFSU2_TR(0x5f1d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1d12:{NFSU2_TR(0x5f1d12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1d14:{NFSU2_TR(0x5f1d14);
if(r1(R+518)){{goto L5f1d1e;}}
}
B5f1d16:L5f1d16:{c.instructions+=4;NFSU2_TR(0x5f1d16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d17:{NFSU2_TR(0x5f1d17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d18:{NFSU2_TR(0x5f1d18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d19:{NFSU2_TR(0x5f1d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d1eull));
TAIL_STATIC(0x4ca090u,4ca);
}
B5f1d1e:L5f1d1e:{c.instructions+=5;NFSU2_TR(0x5f1d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1d24:{NFSU2_TR(0x5f1d24);
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
B5f1d26:{NFSU2_TR(0x5f1d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1d2c:{NFSU2_TR(0x5f1d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1d32:{NFSU2_TR(0x5f1d32);
if(r1(R+518)){{goto L5f1d3a;}}
}
B5f1d34:L5f1d34:{c.instructions+=3;NFSU2_TR(0x5f1d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f1d36:{NFSU2_TR(0x5f1d36);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d38:{NFSU2_TR(0x5f1d38);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d3aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f1d3a:L5f1d3a:{c.instructions+=3;NFSU2_TR(0x5f1d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f1d40:{NFSU2_TR(0x5f1d40);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1d42:{NFSU2_TR(0x5f1d42);
if(r1(R+518)){{goto L5f1d54;}}
}
B5f1d44:L5f1d44:{c.instructions+=2;NFSU2_TR(0x5f1d44);
__builtin_memmove((R+4),(R+28),4);
}
B5f1d46:{NFSU2_TR(0x5f1d46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d4bull));
TAIL_STATIC(0x446bb0u,446);
}
B5f1d4b:L5f1d4b:{c.instructions+=2;NFSU2_TR(0x5f1d4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d4c:{NFSU2_TR(0x5f1d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d51ull));
TAIL_STATIC(0x575630u,575);
}
B5f1d51:L5f1d51:{c.instructions+=1;NFSU2_TR(0x5f1d51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1d54:L5f1d54:{c.instructions+=3;NFSU2_TR(0x5f1d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1d5a:{NFSU2_TR(0x5f1d5a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1d5c:{NFSU2_TR(0x5f1d5c);
if(r1(R+518)){{goto L5f1d67;}}
}
B5f1d5e:L5f1d5e:{c.instructions+=2;NFSU2_TR(0x5f1d5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d5f:{NFSU2_TR(0x5f1d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d64ull));
TAIL_STATIC(0x575630u,575);
}
B5f1d64:L5f1d64:{c.instructions+=1;NFSU2_TR(0x5f1d64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1d67:L5f1d67:{c.instructions+=3;NFSU2_TR(0x5f1d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1d6d:{NFSU2_TR(0x5f1d6d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1d6f:{NFSU2_TR(0x5f1d6f);
if(r1(R+518)){{goto L5f1d7a;}}
}
B5f1d71:L5f1d71:{c.instructions+=2;NFSU2_TR(0x5f1d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d72:{NFSU2_TR(0x5f1d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d77ull));
TAIL_STATIC(0x575630u,575);
}
B5f1d77:L5f1d77:{c.instructions+=1;NFSU2_TR(0x5f1d77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1d7a:L5f1d7a:{c.instructions+=6;NFSU2_TR(0x5f1d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1d80:{NFSU2_TR(0x5f1d80);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5f1d83:{NFSU2_TR(0x5f1d83);
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
B5f1d85:{NFSU2_TR(0x5f1d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1d8b:{NFSU2_TR(0x5f1d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1d91:{NFSU2_TR(0x5f1d91);
if(r1(R+518)){{goto L5f1d99;}}
}
B5f1d93:L5f1d93:{c.instructions+=3;NFSU2_TR(0x5f1d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f1d95:{NFSU2_TR(0x5f1d95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1d97:{NFSU2_TR(0x5f1d97);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1d99ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f1d99:L5f1d99:{c.instructions+=10;NFSU2_TR(0x5f1d99);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5f1d9e:{NFSU2_TR(0x5f1d9e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5f1d9f:{NFSU2_TR(0x5f1d9f);
__builtin_memmove(gp(0x8900bc),(R+0),4);
}
B5f1da4:{NFSU2_TR(0x5f1da4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f1dab:{NFSU2_TR(0x5f1dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1dae:{NFSU2_TR(0x5f1dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f1db5:{NFSU2_TR(0x5f1db5);
s1(0x86e5b8,u8(0x1ull));
}
B5f1dbc:{NFSU2_TR(0x5f1dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1dc2:{NFSU2_TR(0x5f1dc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1dc3:{NFSU2_TR(0x5f1dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1dc8ull));
TAIL_STATIC(0x575630u,575);
}
B5f1dc8:L5f1dc8:{c.instructions+=3;NFSU2_TR(0x5f1dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1dce:{NFSU2_TR(0x5f1dce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1dcf:{NFSU2_TR(0x5f1dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1dd4ull));
TAIL_STATIC(0x575630u,575);
}
B5f1dd4:L5f1dd4:{c.instructions+=4;NFSU2_TR(0x5f1dd4);
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
B5f1dd7:{NFSU2_TR(0x5f1dd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1ddd:{NFSU2_TR(0x5f1ddd);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f1de1:{NFSU2_TR(0x5f1de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1de6ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5f1de6:L5f1de6:{c.instructions+=3;NFSU2_TR(0x5f1de6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1dec:{NFSU2_TR(0x5f1dec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1df0:{NFSU2_TR(0x5f1df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1df5ull));
TAIL_STATIC(0x411740u,411);
}
B5f1df5:L5f1df5:{c.instructions+=7;NFSU2_TR(0x5f1df5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1df9:{NFSU2_TR(0x5f1df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1dfa:{NFSU2_TR(0x5f1dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1dfb:{NFSU2_TR(0x5f1dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1dfc:{NFSU2_TR(0x5f1dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1e03:{NFSU2_TR(0x5f1e03);
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
B5f1e06:{NFSU2_TR(0x5f1e06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1e10:L5f1e10:{c.instructions+=10;NFSU2_TR(0x5f1e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1e16:{NFSU2_TR(0x5f1e16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e18:{NFSU2_TR(0x5f1e18);
u8 U[4];
w4(U+0,u32(0x779974ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e1d:{NFSU2_TR(0x5f1e1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e1e:{NFSU2_TR(0x5f1e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1e25:{NFSU2_TR(0x5f1e25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e26:{NFSU2_TR(0x5f1e26);
__builtin_memmove((R+24),(R+4),4);
}
B5f1e28:{NFSU2_TR(0x5f1e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1e2b:{NFSU2_TR(0x5f1e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1e2d:{NFSU2_TR(0x5f1e2d);
if(r1(R+518)){{goto L5f1ec0;}}
}
B5f1e33:L5f1e33:{c.instructions+=3;NFSU2_TR(0x5f1e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1e39:{NFSU2_TR(0x5f1e39);
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
B5f1e3b:{NFSU2_TR(0x5f1e3b);
if(r1(R+518)){{goto L5f1e4d;}}
}
B5f1e3d:L5f1e3d:{c.instructions+=3;NFSU2_TR(0x5f1e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f1e3f:{NFSU2_TR(0x5f1e3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e41:{NFSU2_TR(0x5f1e41);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1e43ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f1e43:L5f1e43:{c.instructions+=1;NFSU2_TR(0x5f1e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1e4d:L5f1e4d:{c.instructions+=3;NFSU2_TR(0x5f1e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1e50:{NFSU2_TR(0x5f1e50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e51:{NFSU2_TR(0x5f1e51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1e56ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5f1e56:L5f1e56:{c.instructions+=5;NFSU2_TR(0x5f1e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1e59:{NFSU2_TR(0x5f1e59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B5f1e5c:{NFSU2_TR(0x5f1e5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1e5f:{NFSU2_TR(0x5f1e5f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1e61:{NFSU2_TR(0x5f1e61);
if(r1(R+518)){{goto L5f1e85;}}
}
B5f1e63:L5f1e63:{c.instructions+=2;NFSU2_TR(0x5f1e63);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1e65:{NFSU2_TR(0x5f1e65);
if(r1(R+518)){{goto L5f1e85;}}
}
B5f1e67:L5f1e67:{c.instructions+=3;NFSU2_TR(0x5f1e67);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f1e6a:{NFSU2_TR(0x5f1e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1e6c:{NFSU2_TR(0x5f1e6c);
if(r1(R+518)){{goto L5f1e85;}}
}
B5f1e6e:L5f1e6e:{c.instructions+=3;NFSU2_TR(0x5f1e6e);
__builtin_memmove((R+8),(R+4),4);
}
B5f1e70:{NFSU2_TR(0x5f1e70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1e72:{NFSU2_TR(0x5f1e72);
if(r1(R+518)){{goto L5f1e85;}}
}
B5f1e74:L5f1e74:{c.instructions+=2;NFSU2_TR(0x5f1e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1e76:{NFSU2_TR(0x5f1e76);
if(r1(R+518)){{goto L5f1e85;}}
}
B5f1e78:L5f1e78:{c.instructions+=3;NFSU2_TR(0x5f1e78);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5f1e7b:{NFSU2_TR(0x5f1e7b);
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
B5f1e7d:{NFSU2_TR(0x5f1e7d);
if(r1(R+518)){{goto L5f1e85;}}
}
B5f1e7f:L5f1e7f:{c.instructions+=3;NFSU2_TR(0x5f1e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f1e81:{NFSU2_TR(0x5f1e81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e83:{NFSU2_TR(0x5f1e83);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1e85ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f1e85:L5f1e85:{c.instructions+=3;NFSU2_TR(0x5f1e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1e89:{NFSU2_TR(0x5f1e89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1e8b:{NFSU2_TR(0x5f1e8b);
if(r1(R+518)){{goto L5f1ec0;}}
}
B5f1e8d:L5f1e8d:{c.instructions+=2;NFSU2_TR(0x5f1e8d);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1e8f:{NFSU2_TR(0x5f1e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1e94ull));
TAIL_STATIC(0x575620u,575);
}
B5f1e94:L5f1e94:{c.instructions+=5;NFSU2_TR(0x5f1e94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f1e97:{NFSU2_TR(0x5f1e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1e9b:{NFSU2_TR(0x5f1e9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1e9d:{NFSU2_TR(0x5f1e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ea5:{NFSU2_TR(0x5f1ea5);
if(r1(R+518)){{goto L5f1eb8;}}
}
B5f1ea7:L5f1ea7:{c.instructions+=6;NFSU2_TR(0x5f1ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1eaa:{NFSU2_TR(0x5f1eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f1ead:{NFSU2_TR(0x5f1ead);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1eae:{NFSU2_TR(0x5f1eae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1eaf:{NFSU2_TR(0x5f1eaf);
__builtin_memmove((R+4),(R+0),4);
}
B5f1eb1:{NFSU2_TR(0x5f1eb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1eb6ull));
TAIL_STATIC(0x44ba10u,44b);
}
B5f1eb6:L5f1eb6:{c.instructions+=1;NFSU2_TR(0x5f1eb6);
{goto L5f1eba;}
}
B5f1eb8:L5f1eb8:{c.instructions+=1;NFSU2_TR(0x5f1eb8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f1eba:L5f1eba:{c.instructions+=1;NFSU2_TR(0x5f1eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ec0:L5f1ec0:{c.instructions+=5;NFSU2_TR(0x5f1ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1ec4:{NFSU2_TR(0x5f1ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ecb:{NFSU2_TR(0x5f1ecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1ecc:{NFSU2_TR(0x5f1ecc);
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
B5f1ecf:{NFSU2_TR(0x5f1ecf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1ee0:L5f1ee0:{c.instructions+=10;NFSU2_TR(0x5f1ee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1ee1:{NFSU2_TR(0x5f1ee1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1ee2:{NFSU2_TR(0x5f1ee2);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B5f1ee5:{NFSU2_TR(0x5f1ee5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1ee6:{NFSU2_TR(0x5f1ee6);
__builtin_memmove((R+24),(R+4),4);
}
B5f1ee8:{NFSU2_TR(0x5f1ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1eee:{NFSU2_TR(0x5f1eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1ef4:{NFSU2_TR(0x5f1ef4);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5f1ef9:{NFSU2_TR(0x5f1ef9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f1efb:{NFSU2_TR(0x5f1efb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f1f0f;}}
}
B5f1efd:L5f1efd:{c.instructions+=3;NFSU2_TR(0x5f1efd);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5f1f02:{NFSU2_TR(0x5f1f02);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f1f04:{NFSU2_TR(0x5f1f04);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f1f0f;}}
}
B5f1f06:L5f1f06:{c.instructions+=3;NFSU2_TR(0x5f1f06);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5f1f0b:{NFSU2_TR(0x5f1f0b);
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
B5f1f0d:{NFSU2_TR(0x5f1f0d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f1f15;}}
}
B5f1f0f:L5f1f0f:{c.instructions+=5;NFSU2_TR(0x5f1f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1f10:{NFSU2_TR(0x5f1f10);
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
B5f1f12:{NFSU2_TR(0x5f1f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1f13:{NFSU2_TR(0x5f1f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1f14:{NFSU2_TR(0x5f1f14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1f15:L5f1f15:{c.instructions+=6;NFSU2_TR(0x5f1f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1f18:{NFSU2_TR(0x5f1f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1f1b:{NFSU2_TR(0x5f1f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f1f1d:{NFSU2_TR(0x5f1f1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f1e:{NFSU2_TR(0x5f1f1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f1f:{NFSU2_TR(0x5f1f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1f22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f1f22:L5f1f22:{c.instructions+=3;NFSU2_TR(0x5f1f22);
__builtin_memmove((R+28),(R+0),4);
}
B5f1f24:{NFSU2_TR(0x5f1f24);
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
B5f1f26:{NFSU2_TR(0x5f1f26);
if(r1(R+518)){{goto L5f1f8a;}}
}
B5f1f28:L5f1f28:{c.instructions+=4;NFSU2_TR(0x5f1f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1f2b:{NFSU2_TR(0x5f1f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f1f2e:{NFSU2_TR(0x5f1f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f1f30:{NFSU2_TR(0x5f1f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1f33ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f1f33:L5f1f33:{c.instructions+=9;NFSU2_TR(0x5f1f33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f35:{NFSU2_TR(0x5f1f35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f37:{NFSU2_TR(0x5f1f37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f38:{NFSU2_TR(0x5f1f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1f3b:{NFSU2_TR(0x5f1f3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f3d:{NFSU2_TR(0x5f1f3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5f1f40:{NFSU2_TR(0x5f1f40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1f41:{NFSU2_TR(0x5f1f41);
__builtin_memmove((R+4),(R+28),4);
}
B5f1f43:{NFSU2_TR(0x5f1f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1f48ull));
TAIL_STATIC(0x4198c0u,419);
}
B5f1f48:L5f1f48:{c.instructions+=3;NFSU2_TR(0x5f1f48);
__builtin_memmove((R+4),(R+0),4);
}
B5f1f4a:{NFSU2_TR(0x5f1f4a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1f4c:{NFSU2_TR(0x5f1f4c);
if(r1(R+518)){{goto L5f1f8a;}}
}
B5f1f4e:L5f1f4e:{c.instructions+=7;NFSU2_TR(0x5f1f4e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5f1f52:{NFSU2_TR(0x5f1f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f1f55:{NFSU2_TR(0x5f1f55);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f1f57:{NFSU2_TR(0x5f1f57);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5f1f5b:{NFSU2_TR(0x5f1f5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1f5f:{NFSU2_TR(0x5f1f5f);
__builtin_memmove((R+8),(R+4),4);
}
B5f1f61:{NFSU2_TR(0x5f1f61);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f1f8a;}}
}
B5f1f63:L5f1f63:{c.instructions+=1;NFSU2_TR(0x5f1f63);
__builtin_memmove((R+20),(R+0),4);
}
B5f1f65:L5f1f65:{c.instructions+=8;NFSU2_TR(0x5f1f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f1f68:{NFSU2_TR(0x5f1f68);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f1f6b:{NFSU2_TR(0x5f1f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1f6f:{NFSU2_TR(0x5f1f6f);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f1f72:{NFSU2_TR(0x5f1f72);
{u32 ea_=u32(u32(8020444u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f1f78:{NFSU2_TR(0x5f1f78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f1f7a:{NFSU2_TR(0x5f1f7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f1f7d:{NFSU2_TR(0x5f1f7d);
if(r1(R+518)){{goto L5f1f9e;}}
}
B5f1f7f:L5f1f7f:{c.instructions+=4;NFSU2_TR(0x5f1f7f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5f1f80:{NFSU2_TR(0x5f1f80);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5f1f83:{NFSU2_TR(0x5f1f83);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f1f85:{NFSU2_TR(0x5f1f85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1f65u);}goto L5f1f65;}}
}
B5f1f87:L5f1f87:{c.instructions+=1;NFSU2_TR(0x5f1f87);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B5f1f8a:L5f1f8a:{c.instructions+=9;NFSU2_TR(0x5f1f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1f8b:{NFSU2_TR(0x5f1f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1f8c:{NFSU2_TR(0x5f1f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1f92:{NFSU2_TR(0x5f1f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1f98:{NFSU2_TR(0x5f1f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1f99:{NFSU2_TR(0x5f1f99);
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
B5f1f9b:{NFSU2_TR(0x5f1f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1f9c:{NFSU2_TR(0x5f1f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1f9d:{NFSU2_TR(0x5f1f9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1f9e:L5f1f9e:{c.instructions+=2;NFSU2_TR(0x5f1f9e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1fa1:{NFSU2_TR(0x5f1fa1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1f87u);}goto L5f1f87;}}
}
B5f1fa3:L5f1fa3:{c.instructions+=5;NFSU2_TR(0x5f1fa3);
__builtin_memmove((R+0),(R+8),4);
}
B5f1fa5:{NFSU2_TR(0x5f1fa5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5f1fa7:{NFSU2_TR(0x5f1fa7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f1fa8:{NFSU2_TR(0x5f1fa8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f1fab:{NFSU2_TR(0x5f1fab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f1f87u);}goto L5f1f87;}}
}
B5f1fad:L5f1fad:{c.instructions+=6;NFSU2_TR(0x5f1fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1fb3:{NFSU2_TR(0x5f1fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1fb9:{NFSU2_TR(0x5f1fb9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
}
B5f1fbf:{NFSU2_TR(0x5f1fbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1fc0:{NFSU2_TR(0x5f1fc0);
__builtin_memmove((R+4),(R+28),4);
}
B5f1fc2:{NFSU2_TR(0x5f1fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f1fc7ull));
TAIL_STATIC(0x41ea60u,41e);
}
B5f1fc7:L5f1fc7:{c.instructions+=7;NFSU2_TR(0x5f1fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f1fc8:{NFSU2_TR(0x5f1fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f1fc9:{NFSU2_TR(0x5f1fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f1fca:{NFSU2_TR(0x5f1fca);
w1(R+0,u8(0x1ull));
}
B5f1fcc:{NFSU2_TR(0x5f1fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f1fcd:{NFSU2_TR(0x5f1fcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f1fce:{NFSU2_TR(0x5f1fce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f1fd0:L5f1fd0:{c.instructions+=15;NFSU2_TR(0x5f1fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1fd1:{NFSU2_TR(0x5f1fd1);
__builtin_memmove((R+20),(R+16),4);
}
B5f1fd3:{NFSU2_TR(0x5f1fd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f1fd6:{NFSU2_TR(0x5f1fd6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1fd8:{NFSU2_TR(0x5f1fd8);
u8 U[4];
w4(U+0,u32(0x779accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1fdd:{NFSU2_TR(0x5f1fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f1fe3:{NFSU2_TR(0x5f1fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1fe4:{NFSU2_TR(0x5f1fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f1feb:{NFSU2_TR(0x5f1feb);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xb78ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xb78ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb78ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f1ff1:{NFSU2_TR(0x5f1ff1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1ff2:{NFSU2_TR(0x5f1ff2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1ff3:{NFSU2_TR(0x5f1ff3);
__builtin_memmove((R+24),(R+4),4);
}
B5f1ff5:{NFSU2_TR(0x5f1ff5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f1ff6:{NFSU2_TR(0x5f1ff6);
w4(R+4,u32(0x85ef50ull));
}
B5f1ffb:{NFSU2_TR(0x5f1ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f2000ull));
TAIL_STATIC(0x5012c0u,501);
}
XIT:NFSU2_TR_EXIT(0x5f1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
