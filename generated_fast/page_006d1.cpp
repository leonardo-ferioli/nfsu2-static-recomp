#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d1,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d1,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 page_6d1(Cpu& c){return body_6d1(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d1(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d1000:goto L6d1000;
case 0x6d1002:goto L6d1002;
case 0x6d1005:c.instructions+=3;goto B6d1005;
case 0x6d1008:c.instructions+=2;goto B6d1008;
case 0x6d100c:c.instructions+=1;goto B6d100c;
case 0x6d100e:goto L6d100e;
case 0x6d1011:c.instructions+=3;goto B6d1011;
case 0x6d1012:c.instructions+=2;goto B6d1012;
case 0x6d1015:c.instructions+=1;goto B6d1015;
case 0x6d1017:goto L6d1017;
case 0x6d101a:goto L6d101a;
case 0x6d101d:c.instructions+=2;goto B6d101d;
case 0x6d1020:c.instructions+=1;goto B6d1020;
case 0x6d1022:goto L6d1022;
case 0x6d1025:c.instructions+=4;goto B6d1025;
case 0x6d1028:c.instructions+=3;goto B6d1028;
case 0x6d1029:c.instructions+=2;goto B6d1029;
case 0x6d102c:c.instructions+=1;goto B6d102c;
case 0x6d1031:goto L6d1031;
case 0x6d1033:c.instructions+=3;goto B6d1033;
case 0x6d1034:c.instructions+=2;goto B6d1034;
case 0x6d1037:c.instructions+=1;goto B6d1037;
case 0x6d103d:goto L6d103d;
case 0x6d1040:c.instructions+=4;goto B6d1040;
case 0x6d1043:c.instructions+=3;goto B6d1043;
case 0x6d1044:c.instructions+=2;goto B6d1044;
case 0x6d1047:c.instructions+=1;goto B6d1047;
case 0x6d104c:goto L6d104c;
case 0x6d104e:c.instructions+=3;goto B6d104e;
case 0x6d104f:c.instructions+=2;goto B6d104f;
case 0x6d1052:c.instructions+=1;goto B6d1052;
case 0x6d1058:goto L6d1058;
case 0x6d105b:c.instructions+=4;goto B6d105b;
case 0x6d105e:c.instructions+=3;goto B6d105e;
case 0x6d105f:c.instructions+=2;goto B6d105f;
case 0x6d1062:c.instructions+=1;goto B6d1062;
case 0x6d1067:goto L6d1067;
case 0x6d1069:c.instructions+=3;goto B6d1069;
case 0x6d106a:c.instructions+=2;goto B6d106a;
case 0x6d106d:c.instructions+=1;goto B6d106d;
case 0x6d1073:goto L6d1073;
case 0x6d1076:c.instructions+=1;goto B6d1076;
case 0x6d107b:goto L6d107b;
case 0x6d107d:c.instructions+=3;goto B6d107d;
case 0x6d107e:c.instructions+=2;goto B6d107e;
case 0x6d1081:c.instructions+=1;goto B6d1081;
case 0x6d1087:goto L6d1087;
case 0x6d1088:c.instructions+=1;goto B6d1088;
case 0x6d108d:goto L6d108d;
case 0x6d108f:c.instructions+=3;goto B6d108f;
case 0x6d1090:c.instructions+=2;goto B6d1090;
case 0x6d1093:c.instructions+=1;goto B6d1093;
case 0x6d1099:goto L6d1099;
case 0x6d109c:c.instructions+=4;goto B6d109c;
case 0x6d109f:c.instructions+=3;goto B6d109f;
case 0x6d10a1:c.instructions+=2;goto B6d10a1;
case 0x6d10a4:c.instructions+=1;goto B6d10a4;
case 0x6d10a6:goto L6d10a6;
case 0x6d10a8:goto L6d10a8;
case 0x6d10aa:c.instructions+=1;goto B6d10aa;
case 0x6d10ad:goto L6d10ad;
case 0x6d10af:goto L6d10af;
case 0x6d10b2:c.instructions+=4;goto B6d10b2;
case 0x6d10b5:c.instructions+=3;goto B6d10b5;
case 0x6d10b7:c.instructions+=2;goto B6d10b7;
case 0x6d10ba:c.instructions+=1;goto B6d10ba;
case 0x6d10bc:goto L6d10bc;
case 0x6d10be:goto L6d10be;
case 0x6d10c0:c.instructions+=1;goto B6d10c0;
case 0x6d10c3:goto L6d10c3;
case 0x6d10c5:goto L6d10c5;
case 0x6d10c8:c.instructions+=4;goto B6d10c8;
case 0x6d10cb:c.instructions+=3;goto B6d10cb;
case 0x6d10cd:c.instructions+=2;goto B6d10cd;
case 0x6d10d0:c.instructions+=1;goto B6d10d0;
case 0x6d10d2:goto L6d10d2;
case 0x6d10d4:goto L6d10d4;
case 0x6d10d6:c.instructions+=1;goto B6d10d6;
case 0x6d10d9:goto L6d10d9;
case 0x6d10db:goto L6d10db;
case 0x6d10dd:c.instructions+=2;goto B6d10dd;
case 0x6d10e0:c.instructions+=1;goto B6d10e0;
case 0x6d10e2:goto L6d10e2;
case 0x6d10e5:c.instructions+=4;goto B6d10e5;
case 0x6d10e8:c.instructions+=3;goto B6d10e8;
case 0x6d10eb:c.instructions+=2;goto B6d10eb;
case 0x6d10f1:c.instructions+=1;goto B6d10f1;
case 0x6d10f3:goto L6d10f3;
case 0x6d10f7:c.instructions+=1;goto B6d10f7;
case 0x6d10fd:goto L6d10fd;
case 0x6d1100:c.instructions+=1;goto B6d1100;
case 0x6d1102:goto L6d1102;
case 0x6d1108:c.instructions+=1;goto B6d1108;
case 0x6d110a:goto L6d110a;
case 0x6d110e:c.instructions+=1;goto B6d110e;
case 0x6d1114:goto L6d1114;
case 0x6d1117:c.instructions+=1;goto B6d1117;
case 0x6d1119:goto L6d1119;
case 0x6d111c:c.instructions+=3;goto B6d111c;
case 0x6d111f:c.instructions+=2;goto B6d111f;
case 0x6d1123:c.instructions+=1;goto B6d1123;
case 0x6d1125:goto L6d1125;
case 0x6d1128:goto L6d1128;
case 0x6d112b:c.instructions+=1;goto B6d112b;
case 0x6d112e:goto L6d112e;
case 0x6d112f:c.instructions+=2;goto B6d112f;
case 0x6d1132:c.instructions+=1;goto B6d1132;
case 0x6d1134:goto L6d1134;
case 0x6d1137:c.instructions+=2;goto B6d1137;
case 0x6d113a:c.instructions+=1;goto B6d113a;
case 0x6d113c:goto L6d113c;
case 0x6d113f:c.instructions+=5;goto B6d113f;
case 0x6d1142:c.instructions+=4;goto B6d1142;
case 0x6d1145:c.instructions+=3;goto B6d1145;
case 0x6d114b:c.instructions+=2;goto B6d114b;
case 0x6d114e:c.instructions+=1;goto B6d114e;
case 0x6d1150:goto L6d1150;
case 0x6d1152:c.instructions+=2;goto B6d1152;
case 0x6d1155:c.instructions+=1;goto B6d1155;
case 0x6d1157:goto L6d1157;
case 0x6d115a:c.instructions+=3;goto B6d115a;
case 0x6d115d:c.instructions+=2;goto B6d115d;
case 0x6d115f:c.instructions+=1;goto B6d115f;
case 0x6d1161:goto L6d1161;
case 0x6d1164:c.instructions+=2;goto B6d1164;
case 0x6d1167:c.instructions+=1;goto B6d1167;
case 0x6d1169:goto L6d1169;
case 0x6d116c:goto L6d116c;
case 0x6d116d:c.instructions+=2;goto B6d116d;
case 0x6d1170:c.instructions+=1;goto B6d1170;
case 0x6d1172:goto L6d1172;
case 0x6d1175:c.instructions+=3;goto B6d1175;
case 0x6d1178:c.instructions+=2;goto B6d1178;
case 0x6d117b:c.instructions+=1;goto B6d117b;
case 0x6d117d:goto L6d117d;
case 0x6d1180:c.instructions+=5;goto B6d1180;
case 0x6d1183:c.instructions+=4;goto B6d1183;
case 0x6d1185:c.instructions+=3;goto B6d1185;
case 0x6d1188:c.instructions+=2;goto B6d1188;
case 0x6d118a:c.instructions+=1;goto B6d118a;
case 0x6d118c:goto L6d118c;
case 0x6d118e:goto L6d118e;
case 0x6d1190:c.instructions+=2;goto B6d1190;
case 0x6d1193:c.instructions+=1;goto B6d1193;
case 0x6d1195:goto L6d1195;
case 0x6d1197:goto L6d1197;
case 0x6d119a:c.instructions+=1;goto B6d119a;
case 0x6d119c:goto L6d119c;
case 0x6d119f:c.instructions+=7;goto B6d119f;
case 0x6d11a2:c.instructions+=6;goto B6d11a2;
case 0x6d11a5:c.instructions+=5;goto B6d11a5;
case 0x6d11a8:c.instructions+=4;goto B6d11a8;
case 0x6d11ab:c.instructions+=3;goto B6d11ab;
case 0x6d11ae:c.instructions+=2;goto B6d11ae;
case 0x6d11b1:c.instructions+=1;goto B6d11b1;
case 0x6d11b3:goto L6d11b3;
case 0x6d11b8:c.instructions+=1;goto B6d11b8;
case 0x6d11ba:goto L6d11ba;
case 0x6d11bd:c.instructions+=1;goto B6d11bd;
case 0x6d11c0:goto L6d11c0;
case 0x6d11c1:c.instructions+=2;goto B6d11c1;
case 0x6d11c4:c.instructions+=1;goto B6d11c4;
case 0x6d11c6:goto L6d11c6;
case 0x6d11c8:c.instructions+=4;goto B6d11c8;
case 0x6d11ca:c.instructions+=3;goto B6d11ca;
case 0x6d11cd:c.instructions+=2;goto B6d11cd;
case 0x6d11d0:c.instructions+=1;goto B6d11d0;
case 0x6d11d2:goto L6d11d2;
case 0x6d11d5:c.instructions+=1;goto B6d11d5;
case 0x6d11d7:goto L6d11d7;
case 0x6d11da:goto L6d11da;
case 0x6d11db:c.instructions+=2;goto B6d11db;
case 0x6d11de:c.instructions+=1;goto B6d11de;
case 0x6d11e0:goto L6d11e0;
case 0x6d11e2:c.instructions+=1;goto B6d11e2;
case 0x6d11e7:goto L6d11e7;
case 0x6d11e9:c.instructions+=2;goto B6d11e9;
case 0x6d11eb:c.instructions+=1;goto B6d11eb;
case 0x6d11f1:goto L6d11f1;
case 0x6d11f3:c.instructions+=2;goto B6d11f3;
case 0x6d11f5:c.instructions+=1;goto B6d11f5;
case 0x6d11f8:goto L6d11f8;
case 0x6d11fa:c.instructions+=2;goto B6d11fa;
case 0x6d11fc:c.instructions+=1;goto B6d11fc;
case 0x6d1202:goto L6d1202;
case 0x6d1209:c.instructions+=1;goto B6d1209;
case 0x6d120b:goto L6d120b;
case 0x6d120f:c.instructions+=1;goto B6d120f;
case 0x6d1211:goto L6d1211;
case 0x6d1213:c.instructions+=1;goto B6d1213;
case 0x6d1218:goto L6d1218;
case 0x6d121a:c.instructions+=2;goto B6d121a;
case 0x6d121c:c.instructions+=1;goto B6d121c;
case 0x6d1222:goto L6d1222;
case 0x6d1224:c.instructions+=2;goto B6d1224;
case 0x6d1226:c.instructions+=1;goto B6d1226;
case 0x6d1229:goto L6d1229;
case 0x6d122b:c.instructions+=2;goto B6d122b;
case 0x6d122d:c.instructions+=1;goto B6d122d;
case 0x6d1233:goto L6d1233;
case 0x6d123a:c.instructions+=1;goto B6d123a;
case 0x6d123c:goto L6d123c;
case 0x6d123e:c.instructions+=5;goto B6d123e;
case 0x6d1240:c.instructions+=4;goto B6d1240;
case 0x6d1245:c.instructions+=3;goto B6d1245;
case 0x6d124a:c.instructions+=2;goto B6d124a;
case 0x6d124c:c.instructions+=1;goto B6d124c;
case 0x6d1251:goto L6d1251;
case 0x6d1254:c.instructions+=2;goto B6d1254;
case 0x6d1257:c.instructions+=1;goto B6d1257;
case 0x6d125d:goto L6d125d;
case 0x6d125f:c.instructions+=1;goto B6d125f;
case 0x6d1265:goto L6d1265;
case 0x6d126c:c.instructions+=12;goto B6d126c;
case 0x6d126d:c.instructions+=11;goto B6d126d;
case 0x6d126e:c.instructions+=10;goto B6d126e;
case 0x6d1271:c.instructions+=9;goto B6d1271;
case 0x6d1273:c.instructions+=8;goto B6d1273;
case 0x6d1276:c.instructions+=7;goto B6d1276;
case 0x6d1277:c.instructions+=6;goto B6d1277;
case 0x6d1279:c.instructions+=5;goto B6d1279;
case 0x6d127c:c.instructions+=4;goto B6d127c;
case 0x6d127d:c.instructions+=3;goto B6d127d;
case 0x6d1280:c.instructions+=2;goto B6d1280;
case 0x6d1282:c.instructions+=1;goto B6d1282;
case 0x6d1287:goto L6d1287;
case 0x6d128a:c.instructions+=2;goto B6d128a;
case 0x6d128c:c.instructions+=1;goto B6d128c;
case 0x6d1292:goto L6d1292;
case 0x6d1293:c.instructions+=3;goto B6d1293;
case 0x6d1296:c.instructions+=2;goto B6d1296;
case 0x6d1299:c.instructions+=1;goto B6d1299;
case 0x6d129b:goto L6d129b;
case 0x6d129d:c.instructions+=6;goto B6d129d;
case 0x6d12a2:c.instructions+=5;goto B6d12a2;
case 0x6d12a7:c.instructions+=4;goto B6d12a7;
case 0x6d12aa:c.instructions+=3;goto B6d12aa;
case 0x6d12ac:c.instructions+=2;goto B6d12ac;
case 0x6d12af:c.instructions+=1;goto B6d12af;
case 0x6d12b4:goto L6d12b4;
case 0x6d12b6:c.instructions+=2;goto B6d12b6;
case 0x6d12b8:c.instructions+=1;goto B6d12b8;
case 0x6d12be:goto L6d12be;
case 0x6d12c0:c.instructions+=7;goto B6d12c0;
case 0x6d12c5:c.instructions+=6;goto B6d12c5;
case 0x6d12c6:c.instructions+=5;goto B6d12c6;
case 0x6d12cb:c.instructions+=4;goto B6d12cb;
case 0x6d12ce:c.instructions+=3;goto B6d12ce;
case 0x6d12d0:c.instructions+=2;goto B6d12d0;
case 0x6d12d6:c.instructions+=1;goto B6d12d6;
case 0x6d12db:goto L6d12db;
case 0x6d12dd:c.instructions+=2;goto B6d12dd;
case 0x6d12df:c.instructions+=1;goto B6d12df;
case 0x6d12e5:goto L6d12e5;
case 0x6d12e7:c.instructions+=6;goto B6d12e7;
case 0x6d12e8:c.instructions+=5;goto B6d12e8;
case 0x6d12ed:c.instructions+=4;goto B6d12ed;
case 0x6d12f0:c.instructions+=3;goto B6d12f0;
case 0x6d12f2:c.instructions+=2;goto B6d12f2;
case 0x6d12f8:c.instructions+=1;goto B6d12f8;
case 0x6d12fd:goto L6d12fd;
case 0x6d12ff:c.instructions+=2;goto B6d12ff;
case 0x6d1301:c.instructions+=1;goto B6d1301;
case 0x6d1307:goto L6d1307;
case 0x6d1309:c.instructions+=3;goto B6d1309;
case 0x6d130c:c.instructions+=2;goto B6d130c;
case 0x6d1312:c.instructions+=1;goto B6d1312;
case 0x6d1314:goto L6d1314;
case 0x6d1317:c.instructions+=2;goto B6d1317;
case 0x6d1319:c.instructions+=1;goto B6d1319;
case 0x6d131b:goto L6d131b;
case 0x6d1320:c.instructions+=1;goto B6d1320;
case 0x6d1322:goto L6d1322;
case 0x6d1327:goto L6d1327;
case 0x6d1328:c.instructions+=2;goto B6d1328;
case 0x6d1329:c.instructions+=1;goto B6d1329;
case 0x6d132e:goto L6d132e;
case 0x6d1330:goto L6d1330;
case 0x6d1336:c.instructions+=4;goto B6d1336;
case 0x6d1338:c.instructions+=3;goto B6d1338;
case 0x6d133a:c.instructions+=2;goto B6d133a;
case 0x6d1340:c.instructions+=1;goto B6d1340;
case 0x6d1343:goto L6d1343;
case 0x6d1345:c.instructions+=2;goto B6d1345;
case 0x6d1347:c.instructions+=1;goto B6d1347;
case 0x6d134d:goto L6d134d;
case 0x6d1351:c.instructions+=2;goto B6d1351;
case 0x6d1355:c.instructions+=1;goto B6d1355;
case 0x6d1357:goto L6d1357;
case 0x6d135a:c.instructions+=3;goto B6d135a;
case 0x6d135d:c.instructions+=2;goto B6d135d;
case 0x6d1360:c.instructions+=1;goto B6d1360;
case 0x6d1363:goto L6d1363;
case 0x6d1365:c.instructions+=5;goto B6d1365;
case 0x6d1368:c.instructions+=4;goto B6d1368;
case 0x6d136b:c.instructions+=3;goto B6d136b;
case 0x6d136e:c.instructions+=2;goto B6d136e;
case 0x6d1371:c.instructions+=1;goto B6d1371;
case 0x6d1373:goto L6d1373;
case 0x6d1377:c.instructions+=1;goto B6d1377;
case 0x6d1379:goto L6d1379;
case 0x6d137c:c.instructions+=1;goto B6d137c;
case 0x6d137e:goto L6d137e;
case 0x6d1385:c.instructions+=1;goto B6d1385;
case 0x6d1387:goto L6d1387;
case 0x6d1388:goto L6d1388;
case 0x6d138b:c.instructions+=2;goto B6d138b;
case 0x6d138e:c.instructions+=1;goto B6d138e;
case 0x6d1390:goto L6d1390;
case 0x6d1392:c.instructions+=3;goto B6d1392;
case 0x6d1395:c.instructions+=2;goto B6d1395;
case 0x6d1396:c.instructions+=1;goto B6d1396;
case 0x6d139b:goto L6d139b;
case 0x6d139d:c.instructions+=3;goto B6d139d;
case 0x6d139e:c.instructions+=2;goto B6d139e;
case 0x6d13a1:c.instructions+=1;goto B6d13a1;
case 0x6d13a7:goto L6d13a7;
case 0x6d13aa:c.instructions+=2;goto B6d13aa;
case 0x6d13ab:c.instructions+=1;goto B6d13ab;
case 0x6d13b0:goto L6d13b0;
case 0x6d13b2:c.instructions+=3;goto B6d13b2;
case 0x6d13b3:c.instructions+=2;goto B6d13b3;
case 0x6d13b6:c.instructions+=1;goto B6d13b6;
case 0x6d13bc:goto L6d13bc;
case 0x6d13be:c.instructions+=4;goto B6d13be;
case 0x6d13c1:c.instructions+=3;goto B6d13c1;
case 0x6d13c3:c.instructions+=2;goto B6d13c3;
case 0x6d13c6:c.instructions+=1;goto B6d13c6;
case 0x6d13c8:goto L6d13c8;
case 0x6d13ca:goto L6d13ca;
case 0x6d13cc:c.instructions+=1;goto B6d13cc;
case 0x6d13cf:goto L6d13cf;
case 0x6d13d1:goto L6d13d1;
case 0x6d13d3:c.instructions+=5;goto B6d13d3;
case 0x6d13d6:c.instructions+=4;goto B6d13d6;
case 0x6d13d8:c.instructions+=3;goto B6d13d8;
case 0x6d13db:c.instructions+=2;goto B6d13db;
case 0x6d13dd:c.instructions+=1;goto B6d13dd;
case 0x6d13df:goto L6d13df;
case 0x6d13e1:goto L6d13e1;
case 0x6d13e3:c.instructions+=1;goto B6d13e3;
case 0x6d13e6:goto L6d13e6;
case 0x6d13e8:goto L6d13e8;
case 0x6d13ea:c.instructions+=2;goto B6d13ea;
case 0x6d13ed:c.instructions+=1;goto B6d13ed;
case 0x6d13ef:goto L6d13ef;
case 0x6d13f2:c.instructions+=7;goto B6d13f2;
case 0x6d13f5:c.instructions+=6;goto B6d13f5;
case 0x6d13f8:c.instructions+=5;goto B6d13f8;
case 0x6d13fb:c.instructions+=4;goto B6d13fb;
case 0x6d13fe:c.instructions+=3;goto B6d13fe;
case 0x6d1401:c.instructions+=2;goto B6d1401;
case 0x6d1404:c.instructions+=1;goto B6d1404;
case 0x6d1406:goto L6d1406;
case 0x6d140a:c.instructions+=1;goto B6d140a;
case 0x6d140c:goto L6d140c;
case 0x6d1410:c.instructions+=1;goto B6d1410;
case 0x6d1412:goto L6d1412;
case 0x6d1418:c.instructions+=1;goto B6d1418;
case 0x6d141a:goto L6d141a;
case 0x6d141d:c.instructions+=1;goto B6d141d;
case 0x6d141f:goto L6d141f;
case 0x6d1426:c.instructions+=1;goto B6d1426;
case 0x6d1428:goto L6d1428;
case 0x6d142a:c.instructions+=2;goto B6d142a;
case 0x6d142d:c.instructions+=1;goto B6d142d;
case 0x6d142f:goto L6d142f;
case 0x6d1432:goto L6d1432;
case 0x6d1435:c.instructions+=1;goto B6d1435;
case 0x6d1437:goto L6d1437;
case 0x6d1438:c.instructions+=2;goto B6d1438;
case 0x6d143b:c.instructions+=1;goto B6d143b;
case 0x6d143d:goto L6d143d;
case 0x6d1440:c.instructions+=1;goto B6d1440;
case 0x6d1442:goto L6d1442;
case 0x6d1445:c.instructions+=2;goto B6d1445;
case 0x6d1448:c.instructions+=1;goto B6d1448;
case 0x6d144b:goto L6d144b;
case 0x6d144e:c.instructions+=6;goto B6d144e;
case 0x6d1451:c.instructions+=5;goto B6d1451;
case 0x6d1454:c.instructions+=4;goto B6d1454;
case 0x6d1456:c.instructions+=3;goto B6d1456;
case 0x6d1459:c.instructions+=2;goto B6d1459;
case 0x6d145c:c.instructions+=1;goto B6d145c;
case 0x6d145e:goto L6d145e;
case 0x6d145f:c.instructions+=2;goto B6d145f;
case 0x6d1462:c.instructions+=1;goto B6d1462;
case 0x6d1464:goto L6d1464;
case 0x6d1466:c.instructions+=2;goto B6d1466;
case 0x6d1469:c.instructions+=1;goto B6d1469;
case 0x6d146b:goto L6d146b;
case 0x6d146e:c.instructions+=1;goto B6d146e;
case 0x6d1471:goto L6d1471;
case 0x6d1474:c.instructions+=5;goto B6d1474;
case 0x6d1477:c.instructions+=4;goto B6d1477;
case 0x6d147a:c.instructions+=3;goto B6d147a;
case 0x6d147c:c.instructions+=2;goto B6d147c;
case 0x6d147e:c.instructions+=1;goto B6d147e;
case 0x6d1481:goto L6d1481;
case 0x6d1483:c.instructions+=2;goto B6d1483;
case 0x6d1485:c.instructions+=1;goto B6d1485;
case 0x6d148b:goto L6d148b;
case 0x6d148f:c.instructions+=3;goto B6d148f;
case 0x6d1490:c.instructions+=2;goto B6d1490;
case 0x6d1493:c.instructions+=1;goto B6d1493;
case 0x6d1495:goto L6d1495;
case 0x6d1497:c.instructions+=4;goto B6d1497;
case 0x6d149a:c.instructions+=3;goto B6d149a;
case 0x6d149d:c.instructions+=2;goto B6d149d;
case 0x6d14a0:c.instructions+=1;goto B6d14a0;
case 0x6d14a2:goto L6d14a2;
case 0x6d14a5:c.instructions+=2;goto B6d14a5;
case 0x6d14a8:c.instructions+=1;goto B6d14a8;
case 0x6d14ab:goto L6d14ab;
case 0x6d14ad:c.instructions+=4;goto B6d14ad;
case 0x6d14b0:c.instructions+=3;goto B6d14b0;
case 0x6d14b3:c.instructions+=2;goto B6d14b3;
case 0x6d14b7:c.instructions+=1;goto B6d14b7;
case 0x6d14b9:goto L6d14b9;
case 0x6d14bd:c.instructions+=1;goto B6d14bd;
case 0x6d14bf:goto L6d14bf;
case 0x6d14c2:goto L6d14c2;
case 0x6d14c5:c.instructions+=2;goto B6d14c5;
case 0x6d14c6:c.instructions+=1;goto B6d14c6;
case 0x6d14c8:goto L6d14c8;
case 0x6d14cb:c.instructions+=4;goto B6d14cb;
case 0x6d14cd:c.instructions+=3;goto B6d14cd;
case 0x6d14d0:c.instructions+=2;goto B6d14d0;
case 0x6d14d1:c.instructions+=1;goto B6d14d1;
case 0x6d14d6:goto L6d14d6;
case 0x6d14d8:c.instructions+=3;goto B6d14d8;
case 0x6d14d9:c.instructions+=2;goto B6d14d9;
case 0x6d14dc:c.instructions+=1;goto B6d14dc;
case 0x6d14e2:goto L6d14e2;
case 0x6d14e5:c.instructions+=2;goto B6d14e5;
case 0x6d14e6:c.instructions+=1;goto B6d14e6;
case 0x6d14eb:goto L6d14eb;
case 0x6d14ed:c.instructions+=3;goto B6d14ed;
case 0x6d14ee:c.instructions+=2;goto B6d14ee;
case 0x6d14f1:c.instructions+=1;goto B6d14f1;
case 0x6d14f7:goto L6d14f7;
case 0x6d14f9:c.instructions+=5;goto B6d14f9;
case 0x6d14fc:c.instructions+=4;goto B6d14fc;
case 0x6d14fe:c.instructions+=3;goto B6d14fe;
case 0x6d1501:c.instructions+=2;goto B6d1501;
case 0x6d1505:c.instructions+=1;goto B6d1505;
case 0x6d1507:goto L6d1507;
case 0x6d1509:goto L6d1509;
case 0x6d150b:c.instructions+=1;goto B6d150b;
case 0x6d150e:goto L6d150e;
case 0x6d1510:goto L6d1510;
case 0x6d1513:c.instructions+=4;goto B6d1513;
case 0x6d1515:c.instructions+=3;goto B6d1515;
case 0x6d1517:c.instructions+=2;goto B6d1517;
case 0x6d151a:c.instructions+=1;goto B6d151a;
case 0x6d151c:goto L6d151c;
case 0x6d151e:goto L6d151e;
case 0x6d1520:c.instructions+=1;goto B6d1520;
case 0x6d1523:goto L6d1523;
case 0x6d1525:goto L6d1525;
case 0x6d1529:c.instructions+=1;goto B6d1529;
case 0x6d152b:goto L6d152b;
case 0x6d152e:c.instructions+=8;goto B6d152e;
case 0x6d1531:c.instructions+=7;goto B6d1531;
case 0x6d1534:c.instructions+=6;goto B6d1534;
case 0x6d1537:c.instructions+=5;goto B6d1537;
case 0x6d153a:c.instructions+=4;goto B6d153a;
case 0x6d153d:c.instructions+=3;goto B6d153d;
case 0x6d1540:c.instructions+=2;goto B6d1540;
case 0x6d1543:c.instructions+=1;goto B6d1543;
case 0x6d1545:goto L6d1545;
case 0x6d1549:c.instructions+=1;goto B6d1549;
case 0x6d154b:goto L6d154b;
case 0x6d154f:c.instructions+=1;goto B6d154f;
case 0x6d1551:goto L6d1551;
case 0x6d1556:c.instructions+=1;goto B6d1556;
case 0x6d1558:goto L6d1558;
case 0x6d155a:c.instructions+=2;goto B6d155a;
case 0x6d155d:c.instructions+=1;goto B6d155d;
case 0x6d155f:goto L6d155f;
case 0x6d1562:goto L6d1562;
case 0x6d1565:c.instructions+=2;goto B6d1565;
case 0x6d1568:c.instructions+=1;goto B6d1568;
case 0x6d156a:goto L6d156a;
case 0x6d156b:c.instructions+=2;goto B6d156b;
case 0x6d156e:c.instructions+=1;goto B6d156e;
case 0x6d1570:goto L6d1570;
case 0x6d1573:goto L6d1573;
case 0x6d1575:goto L6d1575;
case 0x6d1578:c.instructions+=3;goto B6d1578;
case 0x6d157b:c.instructions+=2;goto B6d157b;
case 0x6d157e:c.instructions+=1;goto B6d157e;
case 0x6d1581:goto L6d1581;
case 0x6d1584:c.instructions+=1;goto B6d1584;
case 0x6d1589:goto L6d1589;
case 0x6d158c:c.instructions+=3;goto B6d158c;
case 0x6d158f:c.instructions+=2;goto B6d158f;
case 0x6d1592:c.instructions+=1;goto B6d1592;
case 0x6d1595:goto L6d1595;
case 0x6d1598:c.instructions+=3;goto B6d1598;
case 0x6d159b:c.instructions+=2;goto B6d159b;
case 0x6d159e:c.instructions+=1;goto B6d159e;
case 0x6d15a0:goto L6d15a0;
case 0x6d15a2:c.instructions+=2;goto B6d15a2;
case 0x6d15a5:c.instructions+=1;goto B6d15a5;
case 0x6d15a7:goto L6d15a7;
case 0x6d15aa:c.instructions+=1;goto B6d15aa;
case 0x6d15ad:goto L6d15ad;
case 0x6d15b0:c.instructions+=5;goto B6d15b0;
case 0x6d15b3:c.instructions+=4;goto B6d15b3;
case 0x6d15b6:c.instructions+=3;goto B6d15b6;
case 0x6d15b8:c.instructions+=2;goto B6d15b8;
case 0x6d15ba:c.instructions+=1;goto B6d15ba;
case 0x6d15bd:goto L6d15bd;
case 0x6d15bf:c.instructions+=2;goto B6d15bf;
case 0x6d15c1:c.instructions+=1;goto B6d15c1;
case 0x6d15c7:goto L6d15c7;
case 0x6d15cb:c.instructions+=3;goto B6d15cb;
case 0x6d15cc:c.instructions+=2;goto B6d15cc;
case 0x6d15cf:c.instructions+=1;goto B6d15cf;
case 0x6d15d1:goto L6d15d1;
case 0x6d15d4:c.instructions+=2;goto B6d15d4;
case 0x6d15d7:c.instructions+=1;goto B6d15d7;
case 0x6d15d9:goto L6d15d9;
case 0x6d15de:c.instructions+=3;goto B6d15de;
case 0x6d15e3:c.instructions+=2;goto B6d15e3;
case 0x6d15e5:c.instructions+=1;goto B6d15e5;
case 0x6d15ea:goto L6d15ea;
case 0x6d15ed:c.instructions+=3;goto B6d15ed;
case 0x6d15f1:c.instructions+=2;goto B6d15f1;
case 0x6d15f3:c.instructions+=1;goto B6d15f3;
case 0x6d15f5:goto L6d15f5;
case 0x6d15f8:c.instructions+=3;goto B6d15f8;
case 0x6d15fb:c.instructions+=2;goto B6d15fb;
case 0x6d15fd:c.instructions+=1;goto B6d15fd;
case 0x6d1600:goto L6d1600;
case 0x6d1602:c.instructions+=2;goto B6d1602;
case 0x6d1604:c.instructions+=1;goto B6d1604;
case 0x6d1606:goto L6d1606;
case 0x6d1608:c.instructions+=5;goto B6d1608;
case 0x6d160b:c.instructions+=4;goto B6d160b;
case 0x6d160c:c.instructions+=3;goto B6d160c;
case 0x6d160d:c.instructions+=2;goto B6d160d;
case 0x6d160f:c.instructions+=1;goto B6d160f;
case 0x6d1612:goto L6d1612;
case 0x6d1614:c.instructions+=1;goto B6d1614;
case 0x6d1616:goto L6d1616;
case 0x6d161d:goto L6d161d;
case 0x6d1620:c.instructions+=2;goto B6d1620;
case 0x6d1623:c.instructions+=1;goto B6d1623;
case 0x6d1625:goto L6d1625;
case 0x6d1627:c.instructions+=2;goto B6d1627;
case 0x6d1629:c.instructions+=1;goto B6d1629;
case 0x6d162c:goto L6d162c;
case 0x6d162e:c.instructions+=3;goto B6d162e;
case 0x6d1630:c.instructions+=2;goto B6d1630;
case 0x6d1632:c.instructions+=1;goto B6d1632;
case 0x6d1638:goto L6d1638;
case 0x6d163b:c.instructions+=1;goto B6d163b;
case 0x6d163d:goto L6d163d;
case 0x6d1640:c.instructions+=3;goto B6d1640;
case 0x6d1643:c.instructions+=2;goto B6d1643;
case 0x6d1645:c.instructions+=1;goto B6d1645;
case 0x6d1647:goto L6d1647;
case 0x6d1649:c.instructions+=3;goto B6d1649;
case 0x6d164a:c.instructions+=2;goto B6d164a;
case 0x6d164c:c.instructions+=1;goto B6d164c;
case 0x6d164f:goto L6d164f;
case 0x6d1651:c.instructions+=1;goto B6d1651;
case 0x6d1653:goto L6d1653;
case 0x6d165a:goto L6d165a;
case 0x6d165b:c.instructions+=2;goto B6d165b;
case 0x6d165e:c.instructions+=1;goto B6d165e;
case 0x6d1660:goto L6d1660;
case 0x6d1664:c.instructions+=1;goto B6d1664;
case 0x6d1666:goto L6d1666;
case 0x6d166a:c.instructions+=1;goto B6d166a;
case 0x6d166c:goto L6d166c;
case 0x6d166f:c.instructions+=4;goto B6d166f;
case 0x6d1672:c.instructions+=3;goto B6d1672;
case 0x6d1675:c.instructions+=2;goto B6d1675;
case 0x6d1677:c.instructions+=1;goto B6d1677;
case 0x6d167a:goto L6d167a;
case 0x6d167c:c.instructions+=2;goto B6d167c;
case 0x6d167e:c.instructions+=1;goto B6d167e;
case 0x6d1680:goto L6d1680;
case 0x6d1682:c.instructions+=5;goto B6d1682;
case 0x6d1685:c.instructions+=4;goto B6d1685;
case 0x6d1686:c.instructions+=3;goto B6d1686;
case 0x6d1687:c.instructions+=2;goto B6d1687;
case 0x6d1689:c.instructions+=1;goto B6d1689;
case 0x6d168c:goto L6d168c;
case 0x6d168e:c.instructions+=1;goto B6d168e;
case 0x6d1690:goto L6d1690;
case 0x6d1697:goto L6d1697;
case 0x6d169a:c.instructions+=2;goto B6d169a;
case 0x6d169d:c.instructions+=1;goto B6d169d;
case 0x6d169f:goto L6d169f;
case 0x6d16a1:goto L6d16a1;
case 0x6d16a5:c.instructions+=1;goto B6d16a5;
case 0x6d16a7:goto L6d16a7;
case 0x6d16aa:c.instructions+=4;goto B6d16aa;
case 0x6d16ad:c.instructions+=3;goto B6d16ad;
case 0x6d16b0:c.instructions+=2;goto B6d16b0;
case 0x6d16b2:c.instructions+=1;goto B6d16b2;
case 0x6d16b5:goto L6d16b5;
case 0x6d16b7:c.instructions+=2;goto B6d16b7;
case 0x6d16b9:c.instructions+=1;goto B6d16b9;
case 0x6d16bb:goto L6d16bb;
case 0x6d16bd:c.instructions+=7;goto B6d16bd;
case 0x6d16bf:c.instructions+=6;goto B6d16bf;
case 0x6d16c1:c.instructions+=5;goto B6d16c1;
case 0x6d16c4:c.instructions+=4;goto B6d16c4;
case 0x6d16c5:c.instructions+=3;goto B6d16c5;
case 0x6d16c6:c.instructions+=2;goto B6d16c6;
case 0x6d16c8:c.instructions+=1;goto B6d16c8;
case 0x6d16cb:goto L6d16cb;
case 0x6d16cd:c.instructions+=1;goto B6d16cd;
case 0x6d16cf:goto L6d16cf;
case 0x6d16d6:goto L6d16d6;
case 0x6d16d9:c.instructions+=2;goto B6d16d9;
case 0x6d16dc:c.instructions+=1;goto B6d16dc;
case 0x6d16de:goto L6d16de;
case 0x6d16e0:c.instructions+=2;goto B6d16e0;
case 0x6d16e3:c.instructions+=1;goto B6d16e3;
case 0x6d16e5:goto L6d16e5;
case 0x6d16ea:c.instructions+=1;goto B6d16ea;
case 0x6d16ef:goto L6d16ef;
case 0x6d16f1:c.instructions+=2;goto B6d16f1;
case 0x6d16f4:c.instructions+=1;goto B6d16f4;
case 0x6d16f6:goto L6d16f6;
case 0x6d16f9:c.instructions+=2;goto B6d16f9;
case 0x6d16fd:c.instructions+=1;goto B6d16fd;
case 0x6d16ff:goto L6d16ff;
case 0x6d1703:c.instructions+=2;goto B6d1703;
case 0x6d1705:c.instructions+=1;goto B6d1705;
case 0x6d1707:goto L6d1707;
case 0x6d170a:c.instructions+=1;goto B6d170a;
case 0x6d170c:goto L6d170c;
case 0x6d1710:c.instructions+=1;goto B6d1710;
case 0x6d1712:goto L6d1712;
case 0x6d1715:c.instructions+=3;goto B6d1715;
case 0x6d1718:c.instructions+=2;goto B6d1718;
case 0x6d171a:c.instructions+=1;goto B6d171a;
case 0x6d1720:goto L6d1720;
case 0x6d1723:c.instructions+=3;goto B6d1723;
case 0x6d1726:c.instructions+=2;goto B6d1726;
case 0x6d1729:c.instructions+=1;goto B6d1729;
case 0x6d172b:goto L6d172b;
case 0x6d172c:c.instructions+=3;goto B6d172c;
case 0x6d172f:c.instructions+=2;goto B6d172f;
case 0x6d1732:c.instructions+=1;goto B6d1732;
case 0x6d1734:goto L6d1734;
case 0x6d1738:c.instructions+=1;goto B6d1738;
case 0x6d173a:goto L6d173a;
case 0x6d173c:c.instructions+=1;goto B6d173c;
case 0x6d1741:goto L6d1741;
case 0x6d1743:c.instructions+=2;goto B6d1743;
case 0x6d1745:c.instructions+=1;goto B6d1745;
case 0x6d174b:goto L6d174b;
case 0x6d174d:c.instructions+=2;goto B6d174d;
case 0x6d174f:c.instructions+=1;goto B6d174f;
case 0x6d1752:goto L6d1752;
case 0x6d1754:c.instructions+=3;goto B6d1754;
case 0x6d1756:c.instructions+=2;goto B6d1756;
case 0x6d1758:c.instructions+=1;goto B6d1758;
case 0x6d175e:goto L6d175e;
case 0x6d1764:c.instructions+=1;goto B6d1764;
case 0x6d1766:goto L6d1766;
case 0x6d1768:c.instructions+=1;goto B6d1768;
case 0x6d176d:goto L6d176d;
case 0x6d176f:c.instructions+=2;goto B6d176f;
case 0x6d1771:c.instructions+=1;goto B6d1771;
case 0x6d1777:goto L6d1777;
case 0x6d1779:c.instructions+=1;goto B6d1779;
case 0x6d177e:goto L6d177e;
case 0x6d1780:c.instructions+=2;goto B6d1780;
case 0x6d1782:c.instructions+=1;goto B6d1782;
case 0x6d1788:goto L6d1788;
case 0x6d178f:c.instructions+=1;goto B6d178f;
case 0x6d1791:goto L6d1791;
case 0x6d1793:c.instructions+=1;goto B6d1793;
case 0x6d1798:goto L6d1798;
case 0x6d179a:c.instructions+=2;goto B6d179a;
case 0x6d179c:c.instructions+=1;goto B6d179c;
case 0x6d17a2:goto L6d17a2;
case 0x6d17a7:c.instructions+=2;goto B6d17a7;
case 0x6d17a9:c.instructions+=1;goto B6d17a9;
case 0x6d17ae:goto L6d17ae;
case 0x6d17b0:c.instructions+=2;goto B6d17b0;
case 0x6d17b2:c.instructions+=1;goto B6d17b2;
case 0x6d17b8:goto L6d17b8;
case 0x6d17ba:c.instructions+=1;goto B6d17ba;
case 0x6d17bf:goto L6d17bf;
case 0x6d17c1:c.instructions+=2;goto B6d17c1;
case 0x6d17c3:c.instructions+=1;goto B6d17c3;
case 0x6d17c5:goto L6d17c5;
case 0x6d17cb:c.instructions+=2;goto B6d17cb;
case 0x6d17cd:c.instructions+=1;goto B6d17cd;
case 0x6d17cf:goto L6d17cf;
case 0x6d17d5:c.instructions+=1;goto B6d17d5;
case 0x6d17d7:goto L6d17d7;
case 0x6d17d9:c.instructions+=2;goto B6d17d9;
case 0x6d17da:c.instructions+=1;goto B6d17da;
case 0x6d17dd:goto L6d17dd;
case 0x6d17df:c.instructions+=2;goto B6d17df;
case 0x6d17e1:c.instructions+=1;goto B6d17e1;
case 0x6d17e3:goto L6d17e3;
case 0x6d17e6:c.instructions+=1;goto B6d17e6;
case 0x6d17e8:goto L6d17e8;
case 0x6d17eb:c.instructions+=5;goto B6d17eb;
case 0x6d17ec:c.instructions+=4;goto B6d17ec;
case 0x6d17f2:c.instructions+=3;goto B6d17f2;
case 0x6d17f5:c.instructions+=2;goto B6d17f5;
case 0x6d17f6:c.instructions+=1;goto B6d17f6;
case 0x6d17fb:goto L6d17fb;
case 0x6d17fd:c.instructions+=2;goto B6d17fd;
case 0x6d17ff:c.instructions+=1;goto B6d17ff;
case 0x6d1801:goto L6d1801;
case 0x6d1807:c.instructions+=7;goto B6d1807;
case 0x6d180d:c.instructions+=6;goto B6d180d;
case 0x6d1810:c.instructions+=5;goto B6d1810;
case 0x6d1813:c.instructions+=4;goto B6d1813;
case 0x6d1816:c.instructions+=3;goto B6d1816;
case 0x6d1818:c.instructions+=2;goto B6d1818;
case 0x6d1819:c.instructions+=1;goto B6d1819;
case 0x6d181c:goto L6d181c;
case 0x6d181e:c.instructions+=3;goto B6d181e;
case 0x6d1821:c.instructions+=2;goto B6d1821;
case 0x6d1823:c.instructions+=1;goto B6d1823;
case 0x6d1826:goto L6d1826;
case 0x6d1828:goto L6d1828;
case 0x6d182a:c.instructions+=1;goto B6d182a;
case 0x6d182d:goto L6d182d;
case 0x6d182f:goto L6d182f;
case 0x6d1832:c.instructions+=2;goto B6d1832;
case 0x6d1835:c.instructions+=1;goto B6d1835;
case 0x6d1837:goto L6d1837;
case 0x6d1839:goto L6d1839;
case 0x6d183c:c.instructions+=1;goto B6d183c;
case 0x6d1841:goto L6d1841;
case 0x6d1844:c.instructions+=1;goto B6d1844;
case 0x6d1849:goto L6d1849;
case 0x6d184c:c.instructions+=1;goto B6d184c;
case 0x6d1851:goto L6d1851;
case 0x6d1854:c.instructions+=1;goto B6d1854;
case 0x6d1859:goto L6d1859;
case 0x6d185b:c.instructions+=1;goto B6d185b;
case 0x6d1860:goto L6d1860;
case 0x6d1863:c.instructions+=1;goto B6d1863;
case 0x6d1868:goto L6d1868;
case 0x6d186b:c.instructions+=1;goto B6d186b;
case 0x6d1870:goto L6d1870;
case 0x6d1873:c.instructions+=1;goto B6d1873;
case 0x6d1878:goto L6d1878;
case 0x6d187b:c.instructions+=1;goto B6d187b;
case 0x6d1880:goto L6d1880;
case 0x6d1883:c.instructions+=1;goto B6d1883;
case 0x6d1888:goto L6d1888;
case 0x6d188e:c.instructions+=2;goto B6d188e;
case 0x6d1890:c.instructions+=1;goto B6d1890;
case 0x6d1895:goto L6d1895;
case 0x6d1898:c.instructions+=3;goto B6d1898;
case 0x6d189e:c.instructions+=2;goto B6d189e;
case 0x6d18a0:c.instructions+=1;goto B6d18a0;
case 0x6d18a5:goto L6d18a5;
case 0x6d18a8:c.instructions+=5;goto B6d18a8;
case 0x6d18ae:c.instructions+=4;goto B6d18ae;
case 0x6d18b0:c.instructions+=3;goto B6d18b0;
case 0x6d18b3:c.instructions+=2;goto B6d18b3;
case 0x6d18b5:c.instructions+=1;goto B6d18b5;
case 0x6d18b7:goto L6d18b7;
case 0x6d18b9:c.instructions+=2;goto B6d18b9;
case 0x6d18ba:c.instructions+=1;goto B6d18ba;
case 0x6d18bd:goto L6d18bd;
case 0x6d18c0:goto L6d18c0;
case 0x6d18c2:c.instructions+=5;goto B6d18c2;
case 0x6d18c3:c.instructions+=4;goto B6d18c3;
case 0x6d18c4:c.instructions+=3;goto B6d18c4;
case 0x6d18c5:c.instructions+=2;goto B6d18c5;
case 0x6d18c6:c.instructions+=1;goto B6d18c6;
case 0x6d18c9:goto L6d18c9;
case 0x6d18cc:c.instructions+=4;goto B6d18cc;
case 0x6d18cf:c.instructions+=3;goto B6d18cf;
case 0x6d18d4:c.instructions+=2;goto B6d18d4;
case 0x6d18d9:c.instructions+=1;goto B6d18d9;
case 0x6d18dc:goto L6d18dc;
case 0x6d18dd:c.instructions+=1;goto B6d18dd;
case 0x6d18e2:goto L6d18e2;
case 0x6d18e5:c.instructions+=1;goto B6d18e5;
case 0x6d18ea:goto L6d18ea;
case 0x6d18ec:c.instructions+=8;goto B6d18ec;
case 0x6d18ed:c.instructions+=7;goto B6d18ed;
case 0x6d18ef:c.instructions+=6;goto B6d18ef;
case 0x6d18f0:c.instructions+=5;goto B6d18f0;
case 0x6d18f1:c.instructions+=4;goto B6d18f1;
case 0x6d18f3:c.instructions+=3;goto B6d18f3;
case 0x6d18fa:c.instructions+=2;goto B6d18fa;
case 0x6d18fb:c.instructions+=1;goto B6d18fb;
case 0x6d1901:goto L6d1901;
case 0x6d1908:c.instructions+=1;goto B6d1908;
case 0x6d190e:goto L6d190e;
case 0x6d1914:c.instructions+=2;goto B6d1914;
case 0x6d191a:c.instructions+=1;goto B6d191a;
case 0x6d191c:goto L6d191c;
case 0x6d191f:c.instructions+=3;goto B6d191f;
case 0x6d1922:c.instructions+=2;goto B6d1922;
case 0x6d1923:c.instructions+=1;goto B6d1923;
case 0x6d1928:goto L6d1928;
case 0x6d192a:c.instructions+=4;goto B6d192a;
case 0x6d192c:c.instructions+=3;goto B6d192c;
case 0x6d192d:c.instructions+=2;goto B6d192d;
case 0x6d1930:c.instructions+=1;goto B6d1930;
case 0x6d1932:goto L6d1932;
case 0x6d1937:c.instructions+=1;goto B6d1937;
case 0x6d193c:goto L6d193c;
case 0x6d1942:c.instructions+=6;goto B6d1942;
case 0x6d1945:c.instructions+=5;goto B6d1945;
case 0x6d1948:c.instructions+=4;goto B6d1948;
case 0x6d194a:c.instructions+=3;goto B6d194a;
case 0x6d194b:c.instructions+=2;goto B6d194b;
case 0x6d1951:c.instructions+=1;goto B6d1951;
case 0x6d1954:goto L6d1954;
case 0x6d1956:goto L6d1956;
case 0x6d1958:c.instructions+=1;goto B6d1958;
case 0x6d195b:goto L6d195b;
case 0x6d195d:goto L6d195d;
case 0x6d1963:c.instructions+=1;goto B6d1963;
case 0x6d1968:goto L6d1968;
case 0x6d196b:c.instructions+=4;goto B6d196b;
case 0x6d1971:c.instructions+=3;goto B6d1971;
case 0x6d1972:c.instructions+=2;goto B6d1972;
case 0x6d1978:c.instructions+=1;goto B6d1978;
case 0x6d1979:goto L6d1979;
case 0x6d197f:c.instructions+=11;goto B6d197f;
case 0x6d1985:c.instructions+=10;goto B6d1985;
case 0x6d198b:c.instructions+=9;goto B6d198b;
case 0x6d198e:c.instructions+=8;goto B6d198e;
case 0x6d1991:c.instructions+=7;goto B6d1991;
case 0x6d1997:c.instructions+=6;goto B6d1997;
case 0x6d199d:c.instructions+=5;goto B6d199d;
case 0x6d19a3:c.instructions+=4;goto B6d19a3;
case 0x6d19a6:c.instructions+=3;goto B6d19a6;
case 0x6d19a9:c.instructions+=2;goto B6d19a9;
case 0x6d19ad:c.instructions+=1;goto B6d19ad;
case 0x6d19af:goto L6d19af;
case 0x6d19b5:c.instructions+=7;goto B6d19b5;
case 0x6d19bb:c.instructions+=6;goto B6d19bb;
case 0x6d19be:c.instructions+=5;goto B6d19be;
case 0x6d19c1:c.instructions+=4;goto B6d19c1;
case 0x6d19c6:c.instructions+=3;goto B6d19c6;
case 0x6d19c7:c.instructions+=2;goto B6d19c7;
case 0x6d19ca:c.instructions+=1;goto B6d19ca;
case 0x6d19cc:goto L6d19cc;
case 0x6d19d2:goto L6d19d2;
case 0x6d19d8:c.instructions+=4;goto B6d19d8;
case 0x6d19db:c.instructions+=3;goto B6d19db;
case 0x6d19dd:c.instructions+=2;goto B6d19dd;
case 0x6d19e3:c.instructions+=1;goto B6d19e3;
case 0x6d19e8:goto L6d19e8;
case 0x6d19ea:goto L6d19ea;
case 0x6d19eb:c.instructions+=3;goto B6d19eb;
case 0x6d19ec:c.instructions+=2;goto B6d19ec;
case 0x6d19ed:c.instructions+=1;goto B6d19ed;
case 0x6d19f0:goto L6d19f0;
case 0x6d19f2:c.instructions+=4;goto B6d19f2;
case 0x6d19f3:c.instructions+=3;goto B6d19f3;
case 0x6d19f5:c.instructions+=2;goto B6d19f5;
case 0x6d19f8:c.instructions+=1;goto B6d19f8;
case 0x6d19fd:goto L6d19fd;
case 0x6d19ff:c.instructions+=1;goto B6d19ff;
case 0x6d1a01:goto L6d1a01;
case 0x6d1a03:goto L6d1a03;
case 0x6d1a04:c.instructions+=1;goto B6d1a04;
case 0x6d1a07:goto L6d1a07;
case 0x6d1a09:c.instructions+=8;goto B6d1a09;
case 0x6d1a0a:c.instructions+=7;goto B6d1a0a;
case 0x6d1a0c:c.instructions+=6;goto B6d1a0c;
case 0x6d1a0f:c.instructions+=5;goto B6d1a0f;
case 0x6d1a12:c.instructions+=4;goto B6d1a12;
case 0x6d1a13:c.instructions+=3;goto B6d1a13;
case 0x6d1a14:c.instructions+=2;goto B6d1a14;
case 0x6d1a16:c.instructions+=1;goto B6d1a16;
case 0x6d1a1b:goto L6d1a1b;
case 0x6d1a1d:c.instructions+=1;goto B6d1a1d;
case 0x6d1a1f:goto L6d1a1f;
case 0x6d1a23:c.instructions+=1;goto B6d1a23;
case 0x6d1a25:goto L6d1a25;
case 0x6d1a28:c.instructions+=2;goto B6d1a28;
case 0x6d1a2a:c.instructions+=1;goto B6d1a2a;
case 0x6d1a2f:goto L6d1a2f;
case 0x6d1a31:c.instructions+=1;goto B6d1a31;
case 0x6d1a33:goto L6d1a33;
case 0x6d1a39:c.instructions+=3;goto B6d1a39;
case 0x6d1a3f:c.instructions+=2;goto B6d1a3f;
case 0x6d1a42:c.instructions+=1;goto B6d1a42;
case 0x6d1a46:goto L6d1a46;
case 0x6d1a48:goto L6d1a48;
case 0x6d1a49:c.instructions+=2;goto B6d1a49;
case 0x6d1a4a:c.instructions+=1;goto B6d1a4a;
case 0x6d1a4d:goto L6d1a4d;
case 0x6d1a4f:c.instructions+=9;goto B6d1a4f;
case 0x6d1a50:c.instructions+=8;goto B6d1a50;
case 0x6d1a52:c.instructions+=7;goto B6d1a52;
case 0x6d1a53:c.instructions+=6;goto B6d1a53;
case 0x6d1a56:c.instructions+=5;goto B6d1a56;
case 0x6d1a59:c.instructions+=4;goto B6d1a59;
case 0x6d1a5a:c.instructions+=3;goto B6d1a5a;
case 0x6d1a5b:c.instructions+=2;goto B6d1a5b;
case 0x6d1a5d:c.instructions+=1;goto B6d1a5d;
case 0x6d1a62:goto L6d1a62;
case 0x6d1a64:c.instructions+=1;goto B6d1a64;
case 0x6d1a66:goto L6d1a66;
case 0x6d1a6c:c.instructions+=1;goto B6d1a6c;
case 0x6d1a6e:goto L6d1a6e;
case 0x6d1a71:c.instructions+=8;goto B6d1a71;
case 0x6d1a74:c.instructions+=7;goto B6d1a74;
case 0x6d1a77:c.instructions+=6;goto B6d1a77;
case 0x6d1a7a:c.instructions+=5;goto B6d1a7a;
case 0x6d1a7d:c.instructions+=4;goto B6d1a7d;
case 0x6d1a82:c.instructions+=3;goto B6d1a82;
case 0x6d1a87:c.instructions+=2;goto B6d1a87;
case 0x6d1a8a:c.instructions+=1;goto B6d1a8a;
case 0x6d1a8c:goto L6d1a8c;
case 0x6d1a8d:c.instructions+=1;goto B6d1a8d;
case 0x6d1a8f:goto L6d1a8f;
case 0x6d1a90:c.instructions+=1;goto B6d1a90;
case 0x6d1a92:goto L6d1a92;
case 0x6d1a93:c.instructions+=1;goto B6d1a93;
case 0x6d1a95:goto L6d1a95;
case 0x6d1a9a:c.instructions+=1;goto B6d1a9a;
case 0x6d1a9c:goto L6d1a9c;
case 0x6d1aa1:c.instructions+=1;goto B6d1aa1;
case 0x6d1aa3:goto L6d1aa3;
case 0x6d1aa8:goto L6d1aa8;
case 0x6d1aa9:c.instructions+=2;goto B6d1aa9;
case 0x6d1aab:c.instructions+=1;goto B6d1aab;
case 0x6d1ab0:goto L6d1ab0;
case 0x6d1ab2:goto L6d1ab2;
case 0x6d1ab3:c.instructions+=3;goto B6d1ab3;
case 0x6d1ab4:c.instructions+=2;goto B6d1ab4;
case 0x6d1ab5:c.instructions+=1;goto B6d1ab5;
case 0x6d1ab8:goto L6d1ab8;
case 0x6d1aba:c.instructions+=10;goto B6d1aba;
case 0x6d1abb:c.instructions+=9;goto B6d1abb;
case 0x6d1abd:c.instructions+=8;goto B6d1abd;
case 0x6d1ac0:c.instructions+=7;goto B6d1ac0;
case 0x6d1ac1:c.instructions+=6;goto B6d1ac1;
case 0x6d1ac4:c.instructions+=5;goto B6d1ac4;
case 0x6d1ac5:c.instructions+=4;goto B6d1ac5;
case 0x6d1ac7:c.instructions+=3;goto B6d1ac7;
case 0x6d1ac9:c.instructions+=2;goto B6d1ac9;
case 0x6d1aca:c.instructions+=1;goto B6d1aca;
case 0x6d1acd:goto L6d1acd;
case 0x6d1ace:c.instructions+=2;goto B6d1ace;
case 0x6d1ad0:c.instructions+=1;goto B6d1ad0;
case 0x6d1ad5:goto L6d1ad5;
case 0x6d1ad7:c.instructions+=1;goto B6d1ad7;
case 0x6d1add:goto L6d1add;
case 0x6d1ae0:c.instructions+=13;goto B6d1ae0;
case 0x6d1ae2:c.instructions+=12;goto B6d1ae2;
case 0x6d1ae3:c.instructions+=11;goto B6d1ae3;
case 0x6d1ae6:c.instructions+=10;goto B6d1ae6;
case 0x6d1ae9:c.instructions+=9;goto B6d1ae9;
case 0x6d1aea:c.instructions+=8;goto B6d1aea;
case 0x6d1aed:c.instructions+=7;goto B6d1aed;
case 0x6d1aee:c.instructions+=6;goto B6d1aee;
case 0x6d1af1:c.instructions+=5;goto B6d1af1;
case 0x6d1af2:c.instructions+=4;goto B6d1af2;
case 0x6d1af4:c.instructions+=3;goto B6d1af4;
case 0x6d1af7:c.instructions+=2;goto B6d1af7;
case 0x6d1af9:c.instructions+=1;goto B6d1af9;
case 0x6d1afc:goto L6d1afc;
case 0x6d1afe:c.instructions+=1;goto B6d1afe;
case 0x6d1b04:goto L6d1b04;
case 0x6d1b07:c.instructions+=7;goto B6d1b07;
case 0x6d1b09:c.instructions+=6;goto B6d1b09;
case 0x6d1b0c:c.instructions+=5;goto B6d1b0c;
case 0x6d1b0d:c.instructions+=4;goto B6d1b0d;
case 0x6d1b10:c.instructions+=3;goto B6d1b10;
case 0x6d1b12:c.instructions+=2;goto B6d1b12;
case 0x6d1b13:c.instructions+=1;goto B6d1b13;
case 0x6d1b16:goto L6d1b16;
case 0x6d1b18:c.instructions+=1;goto B6d1b18;
case 0x6d1b1e:goto L6d1b1e;
case 0x6d1b21:c.instructions+=10;goto B6d1b21;
case 0x6d1b24:c.instructions+=9;goto B6d1b24;
case 0x6d1b26:c.instructions+=8;goto B6d1b26;
case 0x6d1b29:c.instructions+=7;goto B6d1b29;
case 0x6d1b2b:c.instructions+=6;goto B6d1b2b;
case 0x6d1b2d:c.instructions+=5;goto B6d1b2d;
case 0x6d1b33:c.instructions+=4;goto B6d1b33;
case 0x6d1b36:c.instructions+=3;goto B6d1b36;
case 0x6d1b37:c.instructions+=2;goto B6d1b37;
case 0x6d1b39:c.instructions+=1;goto B6d1b39;
case 0x6d1b3c:goto L6d1b3c;
case 0x6d1b3e:c.instructions+=1;goto B6d1b3e;
case 0x6d1b44:goto L6d1b44;
case 0x6d1b47:c.instructions+=1;goto B6d1b47;
case 0x6d1b49:goto L6d1b49;
case 0x6d1b50:c.instructions+=1;goto B6d1b50;
case 0x6d1b52:goto L6d1b52;
case 0x6d1b55:c.instructions+=1;goto B6d1b55;
case 0x6d1b57:goto L6d1b57;
case 0x6d1b5a:c.instructions+=1;goto B6d1b5a;
case 0x6d1b5c:goto L6d1b5c;
case 0x6d1b63:c.instructions+=1;goto B6d1b63;
case 0x6d1b65:goto L6d1b65;
case 0x6d1b68:c.instructions+=1;goto B6d1b68;
case 0x6d1b6a:goto L6d1b6a;
case 0x6d1b71:c.instructions+=1;goto B6d1b71;
case 0x6d1b73:goto L6d1b73;
case 0x6d1b76:c.instructions+=1;goto B6d1b76;
case 0x6d1b78:goto L6d1b78;
case 0x6d1b7b:c.instructions+=1;goto B6d1b7b;
case 0x6d1b7d:goto L6d1b7d;
case 0x6d1b80:c.instructions+=1;goto B6d1b80;
case 0x6d1b82:goto L6d1b82;
case 0x6d1b85:c.instructions+=1;goto B6d1b85;
case 0x6d1b87:goto L6d1b87;
case 0x6d1b8e:goto L6d1b8e;
case 0x6d1b91:c.instructions+=2;goto B6d1b91;
case 0x6d1b93:c.instructions+=1;goto B6d1b93;
case 0x6d1b95:goto L6d1b95;
case 0x6d1b98:c.instructions+=9;goto B6d1b98;
case 0x6d1b9a:c.instructions+=8;goto B6d1b9a;
case 0x6d1b9d:c.instructions+=7;goto B6d1b9d;
case 0x6d1b9e:c.instructions+=6;goto B6d1b9e;
case 0x6d1ba1:c.instructions+=5;goto B6d1ba1;
case 0x6d1ba2:c.instructions+=4;goto B6d1ba2;
case 0x6d1ba4:c.instructions+=3;goto B6d1ba4;
case 0x6d1ba7:c.instructions+=2;goto B6d1ba7;
case 0x6d1ba9:c.instructions+=1;goto B6d1ba9;
case 0x6d1bac:goto L6d1bac;
case 0x6d1bae:c.instructions+=1;goto B6d1bae;
case 0x6d1bb4:goto L6d1bb4;
case 0x6d1bb6:c.instructions+=7;goto B6d1bb6;
case 0x6d1bb9:c.instructions+=6;goto B6d1bb9;
case 0x6d1bba:c.instructions+=5;goto B6d1bba;
case 0x6d1bbd:c.instructions+=4;goto B6d1bbd;
case 0x6d1bbf:c.instructions+=3;goto B6d1bbf;
case 0x6d1bc2:c.instructions+=2;goto B6d1bc2;
case 0x6d1bc3:c.instructions+=1;goto B6d1bc3;
case 0x6d1bc6:goto L6d1bc6;
case 0x6d1bc8:c.instructions+=1;goto B6d1bc8;
case 0x6d1bce:goto L6d1bce;
case 0x6d1bd1:c.instructions+=7;goto B6d1bd1;
case 0x6d1bd4:c.instructions+=6;goto B6d1bd4;
case 0x6d1bd7:c.instructions+=5;goto B6d1bd7;
case 0x6d1bda:c.instructions+=4;goto B6d1bda;
case 0x6d1bdc:c.instructions+=3;goto B6d1bdc;
case 0x6d1bdd:c.instructions+=2;goto B6d1bdd;
case 0x6d1bdf:c.instructions+=1;goto B6d1bdf;
case 0x6d1be2:goto L6d1be2;
case 0x6d1be4:c.instructions+=1;goto B6d1be4;
case 0x6d1bea:goto L6d1bea;
case 0x6d1bed:c.instructions+=2;goto B6d1bed;
case 0x6d1bef:c.instructions+=1;goto B6d1bef;
case 0x6d1bf1:goto L6d1bf1;
case 0x6d1bf4:c.instructions+=9;goto B6d1bf4;
case 0x6d1bf6:c.instructions+=8;goto B6d1bf6;
case 0x6d1bf9:c.instructions+=7;goto B6d1bf9;
case 0x6d1bfa:c.instructions+=6;goto B6d1bfa;
case 0x6d1bfd:c.instructions+=5;goto B6d1bfd;
case 0x6d1bfe:c.instructions+=4;goto B6d1bfe;
case 0x6d1c00:c.instructions+=3;goto B6d1c00;
case 0x6d1c03:c.instructions+=2;goto B6d1c03;
case 0x6d1c05:c.instructions+=1;goto B6d1c05;
case 0x6d1c08:goto L6d1c08;
case 0x6d1c0a:c.instructions+=1;goto B6d1c0a;
case 0x6d1c10:goto L6d1c10;
case 0x6d1c12:c.instructions+=7;goto B6d1c12;
case 0x6d1c15:c.instructions+=6;goto B6d1c15;
case 0x6d1c16:c.instructions+=5;goto B6d1c16;
case 0x6d1c19:c.instructions+=4;goto B6d1c19;
case 0x6d1c1b:c.instructions+=3;goto B6d1c1b;
case 0x6d1c1e:c.instructions+=2;goto B6d1c1e;
case 0x6d1c1f:c.instructions+=1;goto B6d1c1f;
case 0x6d1c22:goto L6d1c22;
case 0x6d1c24:c.instructions+=1;goto B6d1c24;
case 0x6d1c2a:goto L6d1c2a;
case 0x6d1c2d:c.instructions+=7;goto B6d1c2d;
case 0x6d1c30:c.instructions+=6;goto B6d1c30;
case 0x6d1c33:c.instructions+=5;goto B6d1c33;
case 0x6d1c36:c.instructions+=4;goto B6d1c36;
case 0x6d1c38:c.instructions+=3;goto B6d1c38;
case 0x6d1c39:c.instructions+=2;goto B6d1c39;
case 0x6d1c3b:c.instructions+=1;goto B6d1c3b;
case 0x6d1c3e:goto L6d1c3e;
case 0x6d1c40:c.instructions+=1;goto B6d1c40;
case 0x6d1c42:goto L6d1c42;
case 0x6d1c45:c.instructions+=2;goto B6d1c45;
case 0x6d1c47:c.instructions+=1;goto B6d1c47;
case 0x6d1c49:goto L6d1c49;
case 0x6d1c4c:c.instructions+=9;goto B6d1c4c;
case 0x6d1c4e:c.instructions+=8;goto B6d1c4e;
case 0x6d1c51:c.instructions+=7;goto B6d1c51;
case 0x6d1c52:c.instructions+=6;goto B6d1c52;
case 0x6d1c55:c.instructions+=5;goto B6d1c55;
case 0x6d1c56:c.instructions+=4;goto B6d1c56;
case 0x6d1c58:c.instructions+=3;goto B6d1c58;
case 0x6d1c5b:c.instructions+=2;goto B6d1c5b;
case 0x6d1c5d:c.instructions+=1;goto B6d1c5d;
case 0x6d1c60:goto L6d1c60;
case 0x6d1c62:c.instructions+=1;goto B6d1c62;
case 0x6d1c64:goto L6d1c64;
case 0x6d1c66:c.instructions+=7;goto B6d1c66;
case 0x6d1c69:c.instructions+=6;goto B6d1c69;
case 0x6d1c6a:c.instructions+=5;goto B6d1c6a;
case 0x6d1c6d:c.instructions+=4;goto B6d1c6d;
case 0x6d1c6f:c.instructions+=3;goto B6d1c6f;
case 0x6d1c72:c.instructions+=2;goto B6d1c72;
case 0x6d1c73:c.instructions+=1;goto B6d1c73;
case 0x6d1c76:goto L6d1c76;
case 0x6d1c78:c.instructions+=1;goto B6d1c78;
case 0x6d1c7a:goto L6d1c7a;
case 0x6d1c7d:c.instructions+=7;goto B6d1c7d;
case 0x6d1c80:c.instructions+=6;goto B6d1c80;
case 0x6d1c83:c.instructions+=5;goto B6d1c83;
case 0x6d1c86:c.instructions+=4;goto B6d1c86;
case 0x6d1c88:c.instructions+=3;goto B6d1c88;
case 0x6d1c89:c.instructions+=2;goto B6d1c89;
case 0x6d1c8b:c.instructions+=1;goto B6d1c8b;
case 0x6d1c8e:goto L6d1c8e;
case 0x6d1c90:c.instructions+=1;goto B6d1c90;
case 0x6d1c92:goto L6d1c92;
case 0x6d1c94:c.instructions+=2;goto B6d1c94;
case 0x6d1c96:c.instructions+=1;goto B6d1c96;
case 0x6d1c99:goto L6d1c99;
case 0x6d1c9b:c.instructions+=1;goto B6d1c9b;
case 0x6d1c9d:goto L6d1c9d;
case 0x6d1c9f:c.instructions+=1;goto B6d1c9f;
case 0x6d1ca4:goto L6d1ca4;
case 0x6d1ca6:c.instructions+=1;goto B6d1ca6;
case 0x6d1ca8:goto L6d1ca8;
case 0x6d1caa:goto L6d1caa;
case 0x6d1cab:goto L6d1cab;
case 0x6d1cac:c.instructions+=3;goto B6d1cac;
case 0x6d1cad:c.instructions+=2;goto B6d1cad;
case 0x6d1cae:c.instructions+=1;goto B6d1cae;
case 0x6d1cb1:goto L6d1cb1;
case 0x6d1cb3:c.instructions+=8;goto B6d1cb3;
case 0x6d1cb4:c.instructions+=7;goto B6d1cb4;
case 0x6d1cb6:c.instructions+=6;goto B6d1cb6;
case 0x6d1cb9:c.instructions+=5;goto B6d1cb9;
case 0x6d1cba:c.instructions+=4;goto B6d1cba;
case 0x6d1cbc:c.instructions+=3;goto B6d1cbc;
case 0x6d1cc3:c.instructions+=2;goto B6d1cc3;
case 0x6d1cc4:c.instructions+=1;goto B6d1cc4;
case 0x6d1cca:goto L6d1cca;
case 0x6d1ccd:c.instructions+=2;goto B6d1ccd;
case 0x6d1cd2:c.instructions+=1;goto B6d1cd2;
case 0x6d1cd4:goto L6d1cd4;
case 0x6d1cd9:c.instructions+=2;goto B6d1cd9;
case 0x6d1cde:c.instructions+=1;goto B6d1cde;
case 0x6d1ce0:goto L6d1ce0;
case 0x6d1ce5:c.instructions+=1;goto B6d1ce5;
case 0x6d1ce7:goto L6d1ce7;
case 0x6d1cec:c.instructions+=2;goto B6d1cec;
case 0x6d1cf1:c.instructions+=1;goto B6d1cf1;
case 0x6d1cf3:goto L6d1cf3;
case 0x6d1cf8:c.instructions+=1;goto B6d1cf8;
case 0x6d1cfa:goto L6d1cfa;
case 0x6d1cff:c.instructions+=2;goto B6d1cff;
case 0x6d1d04:c.instructions+=1;goto B6d1d04;
case 0x6d1d06:goto L6d1d06;
case 0x6d1d0b:c.instructions+=1;goto B6d1d0b;
case 0x6d1d10:goto L6d1d10;
case 0x6d1d12:c.instructions+=3;goto B6d1d12;
case 0x6d1d14:c.instructions+=2;goto B6d1d14;
case 0x6d1d16:c.instructions+=1;goto B6d1d16;
case 0x6d1d1b:goto L6d1d1b;
case 0x6d1d1d:c.instructions+=1;goto B6d1d1d;
case 0x6d1d23:goto L6d1d23;
case 0x6d1d25:c.instructions+=5;goto B6d1d25;
case 0x6d1d27:c.instructions+=4;goto B6d1d27;
case 0x6d1d2c:c.instructions+=3;goto B6d1d2c;
case 0x6d1d2d:c.instructions+=2;goto B6d1d2d;
case 0x6d1d2f:c.instructions+=1;goto B6d1d2f;
case 0x6d1d32:goto L6d1d32;
case 0x6d1d34:c.instructions+=1;goto B6d1d34;
case 0x6d1d3a:goto L6d1d3a;
case 0x6d1d3d:c.instructions+=3;goto B6d1d3d;
case 0x6d1d3f:c.instructions+=2;goto B6d1d3f;
case 0x6d1d41:c.instructions+=1;goto B6d1d41;
case 0x6d1d46:goto L6d1d46;
case 0x6d1d48:c.instructions+=1;goto B6d1d48;
case 0x6d1d4e:goto L6d1d4e;
case 0x6d1d51:c.instructions+=2;goto B6d1d51;
case 0x6d1d53:c.instructions+=1;goto B6d1d53;
case 0x6d1d58:goto L6d1d58;
case 0x6d1d5a:c.instructions+=1;goto B6d1d5a;
case 0x6d1d60:goto L6d1d60;
case 0x6d1d63:c.instructions+=2;goto B6d1d63;
case 0x6d1d65:c.instructions+=1;goto B6d1d65;
case 0x6d1d6a:goto L6d1d6a;
case 0x6d1d6c:c.instructions+=1;goto B6d1d6c;
case 0x6d1d6e:goto L6d1d6e;
case 0x6d1d71:c.instructions+=2;goto B6d1d71;
case 0x6d1d73:c.instructions+=1;goto B6d1d73;
case 0x6d1d78:goto L6d1d78;
case 0x6d1d7a:c.instructions+=1;goto B6d1d7a;
case 0x6d1d7c:goto L6d1d7c;
case 0x6d1d7e:c.instructions+=2;goto B6d1d7e;
case 0x6d1d80:c.instructions+=1;goto B6d1d80;
case 0x6d1d83:goto L6d1d83;
case 0x6d1d85:c.instructions+=1;goto B6d1d85;
case 0x6d1d87:goto L6d1d87;
case 0x6d1d89:c.instructions+=1;goto B6d1d89;
case 0x6d1d8e:goto L6d1d8e;
case 0x6d1d90:c.instructions+=1;goto B6d1d90;
case 0x6d1d92:goto L6d1d92;
case 0x6d1d94:c.instructions+=1;goto B6d1d94;
case 0x6d1d96:goto L6d1d96;
case 0x6d1d97:c.instructions+=5;goto B6d1d97;
case 0x6d1d9a:c.instructions+=4;goto B6d1d9a;
case 0x6d1d9d:c.instructions+=3;goto B6d1d9d;
case 0x6d1da2:c.instructions+=2;goto B6d1da2;
case 0x6d1da3:c.instructions+=1;goto B6d1da3;
case 0x6d1da8:goto L6d1da8;
case 0x6d1dab:c.instructions+=9;goto B6d1dab;
case 0x6d1dad:c.instructions+=8;goto B6d1dad;
case 0x6d1dae:c.instructions+=7;goto B6d1dae;
case 0x6d1daf:c.instructions+=6;goto B6d1daf;
case 0x6d1db2:c.instructions+=5;goto B6d1db2;
case 0x6d1db5:c.instructions+=4;goto B6d1db5;
case 0x6d1dbb:c.instructions+=3;goto B6d1dbb;
case 0x6d1dbc:c.instructions+=2;goto B6d1dbc;
case 0x6d1dbe:c.instructions+=1;goto B6d1dbe;
case 0x6d1dc3:goto L6d1dc3;
case 0x6d1dc5:c.instructions+=1;goto B6d1dc5;
case 0x6d1dc7:goto L6d1dc7;
case 0x6d1dca:c.instructions+=3;goto B6d1dca;
case 0x6d1dcb:c.instructions+=2;goto B6d1dcb;
case 0x6d1dcd:c.instructions+=1;goto B6d1dcd;
case 0x6d1dd2:goto L6d1dd2;
case 0x6d1dd5:c.instructions+=8;goto B6d1dd5;
case 0x6d1dd8:c.instructions+=7;goto B6d1dd8;
case 0x6d1ddb:c.instructions+=6;goto B6d1ddb;
case 0x6d1ddc:c.instructions+=5;goto B6d1ddc;
case 0x6d1ddd:c.instructions+=4;goto B6d1ddd;
case 0x6d1dde:c.instructions+=3;goto B6d1dde;
case 0x6d1ddf:c.instructions+=2;goto B6d1ddf;
case 0x6d1de5:c.instructions+=1;goto B6d1de5;
case 0x6d1de7:goto L6d1de7;
case 0x6d1de8:goto L6d1de8;
case 0x6d1de9:c.instructions+=3;goto B6d1de9;
case 0x6d1dea:c.instructions+=2;goto B6d1dea;
case 0x6d1deb:c.instructions+=1;goto B6d1deb;
case 0x6d1dee:goto L6d1dee;
case 0x6d1df0:c.instructions+=8;goto B6d1df0;
case 0x6d1df1:c.instructions+=7;goto B6d1df1;
case 0x6d1df3:c.instructions+=6;goto B6d1df3;
case 0x6d1df6:c.instructions+=5;goto B6d1df6;
case 0x6d1df7:c.instructions+=4;goto B6d1df7;
case 0x6d1df9:c.instructions+=3;goto B6d1df9;
case 0x6d1e00:c.instructions+=2;goto B6d1e00;
case 0x6d1e01:c.instructions+=1;goto B6d1e01;
case 0x6d1e07:goto L6d1e07;
case 0x6d1e09:c.instructions+=1;goto B6d1e09;
case 0x6d1e0e:goto L6d1e0e;
case 0x6d1e10:c.instructions+=1;goto B6d1e10;
case 0x6d1e16:goto L6d1e16;
case 0x6d1e19:c.instructions+=8;goto B6d1e19;
case 0x6d1e1b:c.instructions+=7;goto B6d1e1b;
case 0x6d1e1d:c.instructions+=6;goto B6d1e1d;
case 0x6d1e23:c.instructions+=5;goto B6d1e23;
case 0x6d1e29:c.instructions+=4;goto B6d1e29;
case 0x6d1e2e:c.instructions+=3;goto B6d1e2e;
case 0x6d1e2f:c.instructions+=2;goto B6d1e2f;
case 0x6d1e31:c.instructions+=1;goto B6d1e31;
case 0x6d1e34:goto L6d1e34;
case 0x6d1e36:c.instructions+=1;goto B6d1e36;
case 0x6d1e3c:goto L6d1e3c;
case 0x6d1e3f:c.instructions+=3;goto B6d1e3f;
case 0x6d1e41:c.instructions+=2;goto B6d1e41;
case 0x6d1e43:c.instructions+=1;goto B6d1e43;
case 0x6d1e48:goto L6d1e48;
case 0x6d1e4a:c.instructions+=1;goto B6d1e4a;
case 0x6d1e50:goto L6d1e50;
case 0x6d1e53:c.instructions+=2;goto B6d1e53;
case 0x6d1e55:c.instructions+=1;goto B6d1e55;
case 0x6d1e5a:goto L6d1e5a;
case 0x6d1e5c:c.instructions+=1;goto B6d1e5c;
case 0x6d1e62:goto L6d1e62;
case 0x6d1e65:c.instructions+=2;goto B6d1e65;
case 0x6d1e67:c.instructions+=1;goto B6d1e67;
case 0x6d1e6c:goto L6d1e6c;
case 0x6d1e6e:c.instructions+=1;goto B6d1e6e;
case 0x6d1e70:goto L6d1e70;
case 0x6d1e73:c.instructions+=2;goto B6d1e73;
case 0x6d1e75:c.instructions+=1;goto B6d1e75;
case 0x6d1e7a:goto L6d1e7a;
case 0x6d1e7c:c.instructions+=1;goto B6d1e7c;
case 0x6d1e7e:goto L6d1e7e;
case 0x6d1e80:c.instructions+=2;goto B6d1e80;
case 0x6d1e82:c.instructions+=1;goto B6d1e82;
case 0x6d1e85:goto L6d1e85;
case 0x6d1e87:c.instructions+=1;goto B6d1e87;
case 0x6d1e89:goto L6d1e89;
case 0x6d1e8b:c.instructions+=1;goto B6d1e8b;
case 0x6d1e90:goto L6d1e90;
case 0x6d1e92:c.instructions+=1;goto B6d1e92;
case 0x6d1e94:goto L6d1e94;
case 0x6d1e96:c.instructions+=1;goto B6d1e96;
case 0x6d1e98:goto L6d1e98;
case 0x6d1e99:c.instructions+=5;goto B6d1e99;
case 0x6d1e9c:c.instructions+=4;goto B6d1e9c;
case 0x6d1e9f:c.instructions+=3;goto B6d1e9f;
case 0x6d1ea4:c.instructions+=2;goto B6d1ea4;
case 0x6d1ea5:c.instructions+=1;goto B6d1ea5;
case 0x6d1eaa:goto L6d1eaa;
case 0x6d1ead:c.instructions+=9;goto B6d1ead;
case 0x6d1eaf:c.instructions+=8;goto B6d1eaf;
case 0x6d1eb0:c.instructions+=7;goto B6d1eb0;
case 0x6d1eb1:c.instructions+=6;goto B6d1eb1;
case 0x6d1eb4:c.instructions+=5;goto B6d1eb4;
case 0x6d1eb7:c.instructions+=4;goto B6d1eb7;
case 0x6d1ebd:c.instructions+=3;goto B6d1ebd;
case 0x6d1ebe:c.instructions+=2;goto B6d1ebe;
case 0x6d1ec0:c.instructions+=1;goto B6d1ec0;
case 0x6d1ec5:goto L6d1ec5;
case 0x6d1ec7:c.instructions+=1;goto B6d1ec7;
case 0x6d1ec9:goto L6d1ec9;
case 0x6d1ecc:c.instructions+=3;goto B6d1ecc;
case 0x6d1ecd:c.instructions+=2;goto B6d1ecd;
case 0x6d1ecf:c.instructions+=1;goto B6d1ecf;
case 0x6d1ed4:goto L6d1ed4;
case 0x6d1ed7:c.instructions+=8;goto B6d1ed7;
case 0x6d1eda:c.instructions+=7;goto B6d1eda;
case 0x6d1edd:c.instructions+=6;goto B6d1edd;
case 0x6d1ede:c.instructions+=5;goto B6d1ede;
case 0x6d1edf:c.instructions+=4;goto B6d1edf;
case 0x6d1ee0:c.instructions+=3;goto B6d1ee0;
case 0x6d1ee1:c.instructions+=2;goto B6d1ee1;
case 0x6d1ee7:c.instructions+=1;goto B6d1ee7;
case 0x6d1ee9:goto L6d1ee9;
case 0x6d1eea:goto L6d1eea;
case 0x6d1eeb:c.instructions+=3;goto B6d1eeb;
case 0x6d1eec:c.instructions+=2;goto B6d1eec;
case 0x6d1eed:c.instructions+=1;goto B6d1eed;
case 0x6d1ef0:goto L6d1ef0;
case 0x6d1ef2:c.instructions+=4;goto B6d1ef2;
case 0x6d1ef3:c.instructions+=3;goto B6d1ef3;
case 0x6d1ef5:c.instructions+=2;goto B6d1ef5;
case 0x6d1ef7:c.instructions+=1;goto B6d1ef7;
case 0x6d1efc:goto L6d1efc;
case 0x6d1efe:c.instructions+=1;goto B6d1efe;
case 0x6d1f00:goto L6d1f00;
case 0x6d1f02:c.instructions+=2;goto B6d1f02;
case 0x6d1f04:c.instructions+=1;goto B6d1f04;
case 0x6d1f07:goto L6d1f07;
case 0x6d1f09:c.instructions+=1;goto B6d1f09;
case 0x6d1f0b:goto L6d1f0b;
case 0x6d1f0d:c.instructions+=1;goto B6d1f0d;
case 0x6d1f12:goto L6d1f12;
case 0x6d1f14:c.instructions+=1;goto B6d1f14;
case 0x6d1f16:goto L6d1f16;
case 0x6d1f18:goto L6d1f18;
case 0x6d1f19:c.instructions+=1;goto B6d1f19;
case 0x6d1f1a:goto L6d1f1a;
case 0x6d1f1c:c.instructions+=4;goto B6d1f1c;
case 0x6d1f1d:c.instructions+=3;goto B6d1f1d;
case 0x6d1f1f:c.instructions+=2;goto B6d1f1f;
case 0x6d1f21:c.instructions+=1;goto B6d1f21;
case 0x6d1f26:goto L6d1f26;
case 0x6d1f28:c.instructions+=1;goto B6d1f28;
case 0x6d1f2a:goto L6d1f2a;
case 0x6d1f2c:c.instructions+=2;goto B6d1f2c;
case 0x6d1f2e:c.instructions+=1;goto B6d1f2e;
case 0x6d1f31:goto L6d1f31;
case 0x6d1f33:c.instructions+=1;goto B6d1f33;
case 0x6d1f35:goto L6d1f35;
case 0x6d1f37:c.instructions+=1;goto B6d1f37;
case 0x6d1f3c:goto L6d1f3c;
case 0x6d1f3e:c.instructions+=1;goto B6d1f3e;
case 0x6d1f40:goto L6d1f40;
case 0x6d1f42:goto L6d1f42;
case 0x6d1f43:c.instructions+=1;goto B6d1f43;
case 0x6d1f44:goto L6d1f44;
case 0x6d1f46:c.instructions+=15;goto B6d1f46;
case 0x6d1f47:c.instructions+=14;goto B6d1f47;
case 0x6d1f49:c.instructions+=13;goto B6d1f49;
case 0x6d1f4c:c.instructions+=12;goto B6d1f4c;
case 0x6d1f4d:c.instructions+=11;goto B6d1f4d;
case 0x6d1f4e:c.instructions+=10;goto B6d1f4e;
case 0x6d1f50:c.instructions+=9;goto B6d1f50;
case 0x6d1f56:c.instructions+=8;goto B6d1f56;
case 0x6d1f58:c.instructions+=7;goto B6d1f58;
case 0x6d1f59:c.instructions+=6;goto B6d1f59;
case 0x6d1f5b:c.instructions+=5;goto B6d1f5b;
case 0x6d1f60:c.instructions+=4;goto B6d1f60;
case 0x6d1f62:c.instructions+=3;goto B6d1f62;
case 0x6d1f68:c.instructions+=2;goto B6d1f68;
case 0x6d1f6d:c.instructions+=1;goto B6d1f6d;
case 0x6d1f6f:goto L6d1f6f;
case 0x6d1f74:c.instructions+=1;goto B6d1f74;
case 0x6d1f76:goto L6d1f76;
case 0x6d1f7b:c.instructions+=1;goto B6d1f7b;
case 0x6d1f7d:goto L6d1f7d;
case 0x6d1f82:c.instructions+=1;goto B6d1f82;
case 0x6d1f84:goto L6d1f84;
case 0x6d1f89:c.instructions+=1;goto B6d1f89;
case 0x6d1f8b:goto L6d1f8b;
case 0x6d1f8d:c.instructions+=1;goto B6d1f8d;
case 0x6d1f8f:goto L6d1f8f;
case 0x6d1f91:c.instructions+=1;goto B6d1f91;
case 0x6d1f93:goto L6d1f93;
case 0x6d1f95:c.instructions+=1;goto B6d1f95;
case 0x6d1f97:goto L6d1f97;
case 0x6d1f99:goto L6d1f99;
case 0x6d1f9a:goto L6d1f9a;
case 0x6d1f9d:c.instructions+=4;goto B6d1f9d;
case 0x6d1fa0:c.instructions+=3;goto B6d1fa0;
case 0x6d1fa1:c.instructions+=2;goto B6d1fa1;
case 0x6d1fa3:c.instructions+=1;goto B6d1fa3;
case 0x6d1fa8:goto L6d1fa8;
case 0x6d1faa:c.instructions+=1;goto B6d1faa;
case 0x6d1fb0:goto L6d1fb0;
case 0x6d1fb3:c.instructions+=11;goto B6d1fb3;
case 0x6d1fb5:c.instructions+=10;goto B6d1fb5;
case 0x6d1fb8:c.instructions+=9;goto B6d1fb8;
case 0x6d1fb9:c.instructions+=8;goto B6d1fb9;
case 0x6d1fbc:c.instructions+=7;goto B6d1fbc;
case 0x6d1fbd:c.instructions+=6;goto B6d1fbd;
case 0x6d1fc3:c.instructions+=5;goto B6d1fc3;
case 0x6d1fc6:c.instructions+=4;goto B6d1fc6;
case 0x6d1fc8:c.instructions+=3;goto B6d1fc8;
case 0x6d1fcb:c.instructions+=2;goto B6d1fcb;
case 0x6d1fcd:c.instructions+=1;goto B6d1fcd;
case 0x6d1fd0:goto L6d1fd0;
case 0x6d1fd2:c.instructions+=1;goto B6d1fd2;
case 0x6d1fd8:goto L6d1fd8;
case 0x6d1fda:c.instructions+=8;goto B6d1fda;
case 0x6d1fdd:c.instructions+=7;goto B6d1fdd;
case 0x6d1fde:c.instructions+=6;goto B6d1fde;
case 0x6d1fe4:c.instructions+=5;goto B6d1fe4;
case 0x6d1fe9:c.instructions+=4;goto B6d1fe9;
case 0x6d1fea:c.instructions+=3;goto B6d1fea;
case 0x6d1fed:c.instructions+=2;goto B6d1fed;
case 0x6d1fef:c.instructions+=1;goto B6d1fef;
case 0x6d1ff2:goto L6d1ff2;
case 0x6d1ff4:c.instructions+=1;goto B6d1ff4;
case 0x6d1ffa:goto L6d1ffa;
case 0x6d1ffd:c.instructions+=2;goto B6d1ffd;
case 0x6d1fff:c.instructions+=1;goto B6d1fff;
default:missing_instruction(c.pc);}
B6d1000:L6d1000:{c.instructions+=1;NFSU2_TR(0x6d1000);
{goto L6d101a;}
}
B6d1002:L6d1002:{c.instructions+=4;NFSU2_TR(0x6d1002);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1005:{NFSU2_TR(0x6d1005);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d1008:{NFSU2_TR(0x6d1008);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d100c:{NFSU2_TR(0x6d100c);
if(r1(R+518)){{goto L6d101a;}}
}
B6d100e:L6d100e:{c.instructions+=4;NFSU2_TR(0x6d100e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1011:{NFSU2_TR(0x6d1011);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d1012:{NFSU2_TR(0x6d1012);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1015:{NFSU2_TR(0x6d1015);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d101a;}}
}
B6d1017:L6d1017:{c.instructions+=1;NFSU2_TR(0x6d1017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d101a:L6d101a:{c.instructions+=3;NFSU2_TR(0x6d101a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d101d:{NFSU2_TR(0x6d101d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1020:{NFSU2_TR(0x6d1020);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d0fbbu,6d0);}
}
B6d1022:L6d1022:{c.instructions+=5;NFSU2_TR(0x6d1022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1025:{NFSU2_TR(0x6d1025);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d1028:{NFSU2_TR(0x6d1028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1029:{NFSU2_TR(0x6d1029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d102c:{NFSU2_TR(0x6d102c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1031ull));
TAIL_STATIC(0x575620u,575);
}
B6d1031:L6d1031:{c.instructions+=4;NFSU2_TR(0x6d1031);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1033:{NFSU2_TR(0x6d1033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1034:{NFSU2_TR(0x6d1034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1037:{NFSU2_TR(0x6d1037);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d103d:L6d103d:{c.instructions+=5;NFSU2_TR(0x6d103d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1040:{NFSU2_TR(0x6d1040);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d1043:{NFSU2_TR(0x6d1043);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1044:{NFSU2_TR(0x6d1044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1047:{NFSU2_TR(0x6d1047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d104cull));
TAIL_STATIC(0x575620u,575);
}
B6d104c:L6d104c:{c.instructions+=4;NFSU2_TR(0x6d104c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d104e:{NFSU2_TR(0x6d104e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d104f:{NFSU2_TR(0x6d104f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1052:{NFSU2_TR(0x6d1052);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d1058:L6d1058:{c.instructions+=5;NFSU2_TR(0x6d1058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d105b:{NFSU2_TR(0x6d105b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d105e:{NFSU2_TR(0x6d105e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d105f:{NFSU2_TR(0x6d105f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1062:{NFSU2_TR(0x6d1062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1067ull));
TAIL_STATIC(0x575620u,575);
}
B6d1067:L6d1067:{c.instructions+=4;NFSU2_TR(0x6d1067);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1069:{NFSU2_TR(0x6d1069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d106a:{NFSU2_TR(0x6d106a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d106d:{NFSU2_TR(0x6d106d);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d1073:L6d1073:{c.instructions+=2;NFSU2_TR(0x6d1073);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1076:{NFSU2_TR(0x6d1076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d107bull));
TAIL_STATIC(0x575620u,575);
}
B6d107b:L6d107b:{c.instructions+=4;NFSU2_TR(0x6d107b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d107d:{NFSU2_TR(0x6d107d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d107e:{NFSU2_TR(0x6d107e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1081:{NFSU2_TR(0x6d1081);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d1087:L6d1087:{c.instructions+=2;NFSU2_TR(0x6d1087);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1088:{NFSU2_TR(0x6d1088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d108dull));
TAIL_STATIC(0x575620u,575);
}
B6d108d:L6d108d:{c.instructions+=4;NFSU2_TR(0x6d108d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d108f:{NFSU2_TR(0x6d108f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1090:{NFSU2_TR(0x6d1090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1093:{NFSU2_TR(0x6d1093);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d1099:L6d1099:{c.instructions+=5;NFSU2_TR(0x6d1099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d109c:{NFSU2_TR(0x6d109c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d109f:{NFSU2_TR(0x6d109f);
__builtin_memmove((R+8),(R+4),4);
}
B6d10a1:{NFSU2_TR(0x6d10a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d10a4:{NFSU2_TR(0x6d10a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d10a6:L6d10a6:{c.instructions+=1;NFSU2_TR(0x6d10a6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d10a8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10a6u);}goto L6d10a6;}
}
B6d10a8:L6d10a8:{c.instructions+=2;NFSU2_TR(0x6d10a8);
__builtin_memmove((R+4),(R+8),4);
}
B6d10aa:{NFSU2_TR(0x6d10aa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d10ad:L6d10ad:{c.instructions+=1;NFSU2_TR(0x6d10ad);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d10af;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10adu);}goto L6d10ad;}
}
B6d10af:L6d10af:{c.instructions+=5;NFSU2_TR(0x6d10af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d10b2:{NFSU2_TR(0x6d10b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d10b5:{NFSU2_TR(0x6d10b5);
__builtin_memmove((R+8),(R+4),4);
}
B6d10b7:{NFSU2_TR(0x6d10b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d10ba:{NFSU2_TR(0x6d10ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d10bc:L6d10bc:{c.instructions+=1;NFSU2_TR(0x6d10bc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d10be;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10bcu);}goto L6d10bc;}
}
B6d10be:L6d10be:{c.instructions+=2;NFSU2_TR(0x6d10be);
__builtin_memmove((R+4),(R+8),4);
}
B6d10c0:{NFSU2_TR(0x6d10c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d10c3:L6d10c3:{c.instructions+=1;NFSU2_TR(0x6d10c3);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d10c5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10c3u);}goto L6d10c3;}
}
B6d10c5:L6d10c5:{c.instructions+=5;NFSU2_TR(0x6d10c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d10c8:{NFSU2_TR(0x6d10c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d10cb:{NFSU2_TR(0x6d10cb);
__builtin_memmove((R+8),(R+4),4);
}
B6d10cd:{NFSU2_TR(0x6d10cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d10d0:{NFSU2_TR(0x6d10d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d10d2:L6d10d2:{c.instructions+=1;NFSU2_TR(0x6d10d2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d10d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10d2u);}goto L6d10d2;}
}
B6d10d4:L6d10d4:{c.instructions+=2;NFSU2_TR(0x6d10d4);
__builtin_memmove((R+4),(R+8),4);
}
B6d10d6:{NFSU2_TR(0x6d10d6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d10d9:L6d10d9:{c.instructions+=1;NFSU2_TR(0x6d10d9);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d10db;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10d9u);}goto L6d10d9;}
}
B6d10db:L6d10db:{c.instructions+=3;NFSU2_TR(0x6d10db);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d10dd:{NFSU2_TR(0x6d10dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d10e0:{NFSU2_TR(0x6d10e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1134;}}
}
B6d10e2:L6d10e2:{c.instructions+=5;NFSU2_TR(0x6d10e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d10e5:{NFSU2_TR(0x6d10e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d10e8:{NFSU2_TR(0x6d10e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d10eb:{NFSU2_TR(0x6d10eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d10f1:{NFSU2_TR(0x6d10f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1102;}}
}
B6d10f3:L6d10f3:{c.instructions+=2;NFSU2_TR(0x6d10f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d10f7:{NFSU2_TR(0x6d10f7);
if(r1(R+518)){{goto L6d131b;}}
}
B6d10fd:L6d10fd:{c.instructions+=2;NFSU2_TR(0x6d10fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1100:{NFSU2_TR(0x6d1100);
{goto L6d1128;}
}
B6d1102:L6d1102:{c.instructions+=2;NFSU2_TR(0x6d1102);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1108:{NFSU2_TR(0x6d1108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1119;}}
}
B6d110a:L6d110a:{c.instructions+=2;NFSU2_TR(0x6d110a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d110e:{NFSU2_TR(0x6d110e);
if(r1(R+518)){{goto L6d1322;}}
}
B6d1114:L6d1114:{c.instructions+=2;NFSU2_TR(0x6d1114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1117:{NFSU2_TR(0x6d1117);
{goto L6d1128;}
}
B6d1119:L6d1119:{c.instructions+=4;NFSU2_TR(0x6d1119);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d111c:{NFSU2_TR(0x6d111c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d111f:{NFSU2_TR(0x6d111f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d1123:{NFSU2_TR(0x6d1123);
if(r1(R+518)){{goto L6d112e;}}
}
B6d1125:L6d1125:{c.instructions+=1;NFSU2_TR(0x6d1125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1128:L6d1128:{c.instructions+=2;NFSU2_TR(0x6d1128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d112b:{NFSU2_TR(0x6d112b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d112e:L6d112e:{c.instructions+=3;NFSU2_TR(0x6d112e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d112f:{NFSU2_TR(0x6d112f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6d1132:{NFSU2_TR(0x6d1132);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d10e2u);}goto L6d10e2;}}
}
B6d1134:L6d1134:{c.instructions+=3;NFSU2_TR(0x6d1134);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1137:{NFSU2_TR(0x6d1137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d113a:{NFSU2_TR(0x6d113a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d117d;}}
}
B6d113c:L6d113c:{c.instructions+=6;NFSU2_TR(0x6d113c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d113f:{NFSU2_TR(0x6d113f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1142:{NFSU2_TR(0x6d1142);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d1145:{NFSU2_TR(0x6d1145);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d114b:{NFSU2_TR(0x6d114b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d114e:{NFSU2_TR(0x6d114e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1172;}}
}
B6d1150:L6d1150:{c.instructions+=3;NFSU2_TR(0x6d1150);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d1152:{NFSU2_TR(0x6d1152);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1155:{NFSU2_TR(0x6d1155);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1172;}}
}
B6d1157:L6d1157:{c.instructions+=4;NFSU2_TR(0x6d1157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d115a:{NFSU2_TR(0x6d115a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d115d:{NFSU2_TR(0x6d115d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d115f:{NFSU2_TR(0x6d115f);
if(r1(R+518)){{goto L6d116c;}}
}
B6d1161:L6d1161:{c.instructions+=3;NFSU2_TR(0x6d1161);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1164:{NFSU2_TR(0x6d1164);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1167:{NFSU2_TR(0x6d1167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d116c;}}
}
B6d1169:L6d1169:{c.instructions+=1;NFSU2_TR(0x6d1169);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d116c:L6d116c:{c.instructions+=3;NFSU2_TR(0x6d116c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d116d:{NFSU2_TR(0x6d116d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d1170:{NFSU2_TR(0x6d1170);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1157u);}goto L6d1157;}}
}
B6d1172:L6d1172:{c.instructions+=4;NFSU2_TR(0x6d1172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1175:{NFSU2_TR(0x6d1175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1178:{NFSU2_TR(0x6d1178);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d117b:{NFSU2_TR(0x6d117b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d113cu);}goto L6d113c;}}
}
B6d117d:L6d117d:{c.instructions+=6;NFSU2_TR(0x6d117d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1180:{NFSU2_TR(0x6d1180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1183:{NFSU2_TR(0x6d1183);
__builtin_memmove((R+24),(R+4),4);
}
B6d1185:{NFSU2_TR(0x6d1185);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d1188:{NFSU2_TR(0x6d1188);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d118a:{NFSU2_TR(0x6d118a);
__builtin_memmove((R+28),(R+8),4);
}
B6d118c:L6d118c:{c.instructions+=1;NFSU2_TR(0x6d118c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d118e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d118cu);}goto L6d118c;}
}
B6d118e:L6d118e:{c.instructions+=3;NFSU2_TR(0x6d118e);
__builtin_memmove((R+4),(R+24),4);
}
B6d1190:{NFSU2_TR(0x6d1190);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d1193:{NFSU2_TR(0x6d1193);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d1195:L6d1195:{c.instructions+=1;NFSU2_TR(0x6d1195);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d1197;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1195u);}goto L6d1195;}
}
B6d1197:L6d1197:{c.instructions+=2;NFSU2_TR(0x6d1197);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d119a:{NFSU2_TR(0x6d119a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d11c6;}}
}
B6d119c:L6d119c:{c.instructions+=8;NFSU2_TR(0x6d119c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d119f:{NFSU2_TR(0x6d119f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d11a2:{NFSU2_TR(0x6d11a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d11a5:{NFSU2_TR(0x6d11a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d11a8:{NFSU2_TR(0x6d11a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d11ab:{NFSU2_TR(0x6d11ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d11ae:{NFSU2_TR(0x6d11ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d11b1:{NFSU2_TR(0x6d11b1);
if(r1(R+518)){{goto L6d11c0;}}
}
B6d11b3:L6d11b3:{c.instructions+=2;NFSU2_TR(0x6d11b3);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(u16(0x204ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6d11b8:{NFSU2_TR(0x6d11b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d11c0;}}
}
B6d11ba:L6d11ba:{c.instructions+=2;NFSU2_TR(0x6d11ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d11bd:{NFSU2_TR(0x6d11bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d11c0:L6d11c0:{c.instructions+=3;NFSU2_TR(0x6d11c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d11c1:{NFSU2_TR(0x6d11c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d11c4:{NFSU2_TR(0x6d11c4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d119cu);}goto L6d119c;}}
}
B6d11c6:L6d11c6:{c.instructions+=5;NFSU2_TR(0x6d11c6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d11c8:{NFSU2_TR(0x6d11c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d11ca:{NFSU2_TR(0x6d11ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d11cd:{NFSU2_TR(0x6d11cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d11d0:{NFSU2_TR(0x6d11d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d11e0;}}
}
B6d11d2:L6d11d2:{c.instructions+=2;NFSU2_TR(0x6d11d2);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d11d5:{NFSU2_TR(0x6d11d5);
if(r1(R+518)){{goto L6d11da;}}
}
B6d11d7:L6d11d7:{c.instructions+=1;NFSU2_TR(0x6d11d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d11da:L6d11da:{c.instructions+=3;NFSU2_TR(0x6d11da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d11db:{NFSU2_TR(0x6d11db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d11de:{NFSU2_TR(0x6d11de);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d11d2u);}goto L6d11d2;}}
}
B6d11e0:L6d11e0:{c.instructions+=2;NFSU2_TR(0x6d11e0);
__builtin_memmove((R+4),(R+12),4);
}
B6d11e2:{NFSU2_TR(0x6d11e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d11e7ull));
TAIL_STATIC(0x6cd96bu,6cd);
}
B6d11e7:L6d11e7:{c.instructions+=3;NFSU2_TR(0x6d11e7);
__builtin_memmove((R+28),(R+0),4);
}
B6d11e9:{NFSU2_TR(0x6d11e9);
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
B6d11eb:{NFSU2_TR(0x6d11eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d11f1:L6d11f1:{c.instructions+=3;NFSU2_TR(0x6d11f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d11f3:{NFSU2_TR(0x6d11f3);
__builtin_memmove((R+4),(R+12),4);
}
B6d11f5:{NFSU2_TR(0x6d11f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d11f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d11f8:L6d11f8:{c.instructions+=3;NFSU2_TR(0x6d11f8);
__builtin_memmove((R+28),(R+0),4);
}
B6d11fa:{NFSU2_TR(0x6d11fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d11fc:{NFSU2_TR(0x6d11fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1202:L6d1202:{c.instructions+=2;NFSU2_TR(0x6d1202);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d1209:{NFSU2_TR(0x6d1209);
if(r1(R+518)){{goto L6d1211;}}
}
B6d120b:L6d120b:{c.instructions+=2;NFSU2_TR(0x6d120b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d120f:{NFSU2_TR(0x6d120f);
if(r1(R+518)){{goto L6d1233;}}
}
B6d1211:L6d1211:{c.instructions+=2;NFSU2_TR(0x6d1211);
__builtin_memmove((R+4),(R+12),4);
}
B6d1213:{NFSU2_TR(0x6d1213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1218ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6d1218:L6d1218:{c.instructions+=3;NFSU2_TR(0x6d1218);
__builtin_memmove((R+28),(R+0),4);
}
B6d121a:{NFSU2_TR(0x6d121a);
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
B6d121c:{NFSU2_TR(0x6d121c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1222:L6d1222:{c.instructions+=3;NFSU2_TR(0x6d1222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1224:{NFSU2_TR(0x6d1224);
__builtin_memmove((R+4),(R+12),4);
}
B6d1226:{NFSU2_TR(0x6d1226);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1229ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1229:L6d1229:{c.instructions+=3;NFSU2_TR(0x6d1229);
__builtin_memmove((R+28),(R+0),4);
}
B6d122b:{NFSU2_TR(0x6d122b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d122d:{NFSU2_TR(0x6d122d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1233:L6d1233:{c.instructions+=2;NFSU2_TR(0x6d1233);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d123a:{NFSU2_TR(0x6d123a);
if(r1(R+518)){{goto L6d129b;}}
}
B6d123c:L6d123c:{c.instructions+=6;NFSU2_TR(0x6d123c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d123e:{NFSU2_TR(0x6d123e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1240:{NFSU2_TR(0x6d1240);
u8 U[4];
w4(U+0,u32(0x351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1245:{NFSU2_TR(0x6d1245);
u8 U[4];
w4(U+0,u32(0x7b3b1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d124a:{NFSU2_TR(0x6d124a);
__builtin_memmove((R+4),(R+12),4);
}
B6d124c:{NFSU2_TR(0x6d124c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1251ull));
TAIL_STATIC(0x699be0u,699);
}
B6d1251:L6d1251:{c.instructions+=3;NFSU2_TR(0x6d1251);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1254:{NFSU2_TR(0x6d1254);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1257:{NFSU2_TR(0x6d1257);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d125d:L6d125d:{c.instructions+=2;NFSU2_TR(0x6d125d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d125f:{NFSU2_TR(0x6d125f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1265:L6d1265:{c.instructions+=13;NFSU2_TR(0x6d1265);
{u32 ea_=u32((r4(R+28)*8u)+u32(8124432u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d126c:{NFSU2_TR(0x6d126c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d126d:{NFSU2_TR(0x6d126d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d126e:{NFSU2_TR(0x6d126e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6d1271:{NFSU2_TR(0x6d1271);
__builtin_memmove((R+0),(R+28),4);
}
B6d1273:{NFSU2_TR(0x6d1273);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B6d1276:{NFSU2_TR(0x6d1276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1277:{NFSU2_TR(0x6d1277);
__builtin_memmove((R+0),(R+28),4);
}
B6d1279:{NFSU2_TR(0x6d1279);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6d127c:{NFSU2_TR(0x6d127c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d127d:{NFSU2_TR(0x6d127d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1280:{NFSU2_TR(0x6d1280);
__builtin_memmove((R+4),(R+12),4);
}
B6d1282:{NFSU2_TR(0x6d1282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1287ull));
TAIL_STATIC(0x699c39u,699);
}
B6d1287:L6d1287:{c.instructions+=3;NFSU2_TR(0x6d1287);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d128a:{NFSU2_TR(0x6d128a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d128c:{NFSU2_TR(0x6d128c);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d1292:L6d1292:{c.instructions+=4;NFSU2_TR(0x6d1292);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d1293:{NFSU2_TR(0x6d1293);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6d1296:{NFSU2_TR(0x6d1296);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6d1299:{NFSU2_TR(0x6d1299);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1265u);}goto L6d1265;}}
}
B6d129b:L6d129b:{c.instructions+=7;NFSU2_TR(0x6d129b);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d129d:{NFSU2_TR(0x6d129d);
u8 U[4];
w4(U+0,u32(0x42080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12a2:{NFSU2_TR(0x6d12a2);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12a7:{NFSU2_TR(0x6d12a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d12aa:{NFSU2_TR(0x6d12aa);
__builtin_memmove((R+4),(R+12),4);
}
B6d12ac:{NFSU2_TR(0x6d12ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d12af:{NFSU2_TR(0x6d12af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d12b4ull));
TAIL_STATIC(0x6c2350u,6c2);
}
B6d12b4:L6d12b4:{c.instructions+=3;NFSU2_TR(0x6d12b4);
__builtin_memmove((R+28),(R+0),4);
}
B6d12b6:{NFSU2_TR(0x6d12b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d12b8:{NFSU2_TR(0x6d12b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d12be:L6d12be:{c.instructions+=8;NFSU2_TR(0x6d12be);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12c0:{NFSU2_TR(0x6d12c0);
w4(R+24,u32(0x80ull));
}
B6d12c5:{NFSU2_TR(0x6d12c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12c6:{NFSU2_TR(0x6d12c6);
u8 U[4];
w4(U+0,u32(0x2200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12cb:{NFSU2_TR(0x6d12cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d12ce:{NFSU2_TR(0x6d12ce);
__builtin_memmove((R+4),(R+12),4);
}
B6d12d0:{NFSU2_TR(0x6d12d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d12d6:{NFSU2_TR(0x6d12d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d12dbull));
TAIL_STATIC(0x6c2350u,6c2);
}
B6d12db:L6d12db:{c.instructions+=3;NFSU2_TR(0x6d12db);
__builtin_memmove((R+28),(R+0),4);
}
B6d12dd:{NFSU2_TR(0x6d12dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d12df:{NFSU2_TR(0x6d12df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d12e5:L6d12e5:{c.instructions+=7;NFSU2_TR(0x6d12e5);
u8 U[4];
w4(U+0,u32(0x69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12e7:{NFSU2_TR(0x6d12e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12e8:{NFSU2_TR(0x6d12e8);
u8 U[4];
w4(U+0,u32(0x40200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d12ed:{NFSU2_TR(0x6d12ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d12f0:{NFSU2_TR(0x6d12f0);
__builtin_memmove((R+4),(R+12),4);
}
B6d12f2:{NFSU2_TR(0x6d12f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d12f8:{NFSU2_TR(0x6d12f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d12fdull));
TAIL_STATIC(0x6c2350u,6c2);
}
B6d12fd:L6d12fd:{c.instructions+=3;NFSU2_TR(0x6d12fd);
__builtin_memmove((R+28),(R+0),4);
}
B6d12ff:{NFSU2_TR(0x6d12ff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d1301:{NFSU2_TR(0x6d1301);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1307:L6d1307:{c.instructions+=4;NFSU2_TR(0x6d1307);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d1309:{NFSU2_TR(0x6d1309);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
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
B6d130c:{NFSU2_TR(0x6d130c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1312:{NFSU2_TR(0x6d1312);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d132e;}}
}
B6d1314:L6d1314:{c.instructions+=3;NFSU2_TR(0x6d1314);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1317:{NFSU2_TR(0x6d1317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1319:{NFSU2_TR(0x6d1319);
{goto L6d1330;}
}
B6d131b:L6d131b:{c.instructions+=2;NFSU2_TR(0x6d131b);
u8 U[4];
w4(U+0,u32(0x7bf7d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1320:{NFSU2_TR(0x6d1320);
{goto L6d1327;}
}
B6d1322:L6d1322:{c.instructions+=1;NFSU2_TR(0x6d1322);
u8 U[4];
w4(U+0,u32(0x7bf7a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1327:L6d1327:{c.instructions+=3;NFSU2_TR(0x6d1327);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1328:{NFSU2_TR(0x6d1328);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1329:{NFSU2_TR(0x6d1329);
{goto L6d18dc;}
}
B6d132e:L6d132e:{c.instructions+=1;NFSU2_TR(0x6d132e);
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
B6d1330:L6d1330:{c.instructions+=5;NFSU2_TR(0x6d1330);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1336:{NFSU2_TR(0x6d1336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1338:{NFSU2_TR(0x6d1338);
__builtin_memmove((R+4),(R+12),4);
}
B6d133a:{NFSU2_TR(0x6d133a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1340:{NFSU2_TR(0x6d1340);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1343ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1343:L6d1343:{c.instructions+=3;NFSU2_TR(0x6d1343);
__builtin_memmove((R+28),(R+0),4);
}
B6d1345:{NFSU2_TR(0x6d1345);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d1347:{NFSU2_TR(0x6d1347);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d134d:L6d134d:{c.instructions+=3;NFSU2_TR(0x6d134d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1351:{NFSU2_TR(0x6d1351);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1355:{NFSU2_TR(0x6d1355);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1390;}}
}
B6d1357:L6d1357:{c.instructions+=4;NFSU2_TR(0x6d1357);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d135a:{NFSU2_TR(0x6d135a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d135d:{NFSU2_TR(0x6d135d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1360:{NFSU2_TR(0x6d1360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1363:L6d1363:{c.instructions+=6;NFSU2_TR(0x6d1363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1365:{NFSU2_TR(0x6d1365);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1368:{NFSU2_TR(0x6d1368);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d136b:{NFSU2_TR(0x6d136b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d136e:{NFSU2_TR(0x6d136e);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d1371:{NFSU2_TR(0x6d1371);
if(r1(R+518)){{goto L6d1388;}}
}
B6d1373:L6d1373:{c.instructions+=2;NFSU2_TR(0x6d1373);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1377:{NFSU2_TR(0x6d1377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1388;}}
}
B6d1379:L6d1379:{c.instructions+=2;NFSU2_TR(0x6d1379);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d137c:{NFSU2_TR(0x6d137c);
if(r1(R+518)){{goto L6d1387;}}
}
B6d137e:L6d137e:{c.instructions+=2;NFSU2_TR(0x6d137e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1385:{NFSU2_TR(0x6d1385);
if(r1(R+518)){{goto L6d1388;}}
}
B6d1387:L6d1387:{c.instructions+=1;NFSU2_TR(0x6d1387);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d1388:L6d1388:{c.instructions+=3;NFSU2_TR(0x6d1388);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6d138b:{NFSU2_TR(0x6d138b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d138e:{NFSU2_TR(0x6d138e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1363u);}goto L6d1363;}}
}
B6d1390:L6d1390:{c.instructions+=4;NFSU2_TR(0x6d1390);
__builtin_memmove((R+28),(R+24),4);
}
B6d1392:{NFSU2_TR(0x6d1392);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d1395:{NFSU2_TR(0x6d1395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1396:{NFSU2_TR(0x6d1396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d139bull));
TAIL_STATIC(0x575620u,575);
}
B6d139b:L6d139b:{c.instructions+=4;NFSU2_TR(0x6d139b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d139d:{NFSU2_TR(0x6d139d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d139e:{NFSU2_TR(0x6d139e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d13a1:{NFSU2_TR(0x6d13a1);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d13a7:L6d13a7:{c.instructions+=3;NFSU2_TR(0x6d13a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d13aa:{NFSU2_TR(0x6d13aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d13ab:{NFSU2_TR(0x6d13ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d13b0ull));
TAIL_STATIC(0x575620u,575);
}
B6d13b0:L6d13b0:{c.instructions+=4;NFSU2_TR(0x6d13b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d13b2:{NFSU2_TR(0x6d13b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d13b3:{NFSU2_TR(0x6d13b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d13b6:{NFSU2_TR(0x6d13b6);
if(r1(R+518)){{goto L6d16e5;}}
}
B6d13bc:L6d13bc:{c.instructions+=5;NFSU2_TR(0x6d13bc);
__builtin_memmove((R+4),(R+28),4);
}
B6d13be:{NFSU2_TR(0x6d13be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d13c1:{NFSU2_TR(0x6d13c1);
__builtin_memmove((R+8),(R+4),4);
}
B6d13c3:{NFSU2_TR(0x6d13c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d13c6:{NFSU2_TR(0x6d13c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d13c8:L6d13c8:{c.instructions+=1;NFSU2_TR(0x6d13c8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d13ca;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d13c8u);}goto L6d13c8;}
}
B6d13ca:L6d13ca:{c.instructions+=2;NFSU2_TR(0x6d13ca);
__builtin_memmove((R+4),(R+8),4);
}
B6d13cc:{NFSU2_TR(0x6d13cc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d13cf:L6d13cf:{c.instructions+=1;NFSU2_TR(0x6d13cf);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d13d1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d13cfu);}goto L6d13cf;}
}
B6d13d1:L6d13d1:{c.instructions+=6;NFSU2_TR(0x6d13d1);
__builtin_memmove((R+4),(R+24),4);
}
B6d13d3:{NFSU2_TR(0x6d13d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d13d6:{NFSU2_TR(0x6d13d6);
__builtin_memmove((R+8),(R+4),4);
}
B6d13d8:{NFSU2_TR(0x6d13d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d13db:{NFSU2_TR(0x6d13db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d13dd:{NFSU2_TR(0x6d13dd);
__builtin_memmove((R+28),(R+24),4);
}
B6d13df:L6d13df:{c.instructions+=1;NFSU2_TR(0x6d13df);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d13e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d13dfu);}goto L6d13df;}
}
B6d13e1:L6d13e1:{c.instructions+=2;NFSU2_TR(0x6d13e1);
__builtin_memmove((R+4),(R+8),4);
}
B6d13e3:{NFSU2_TR(0x6d13e3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d13e6:L6d13e6:{c.instructions+=1;NFSU2_TR(0x6d13e6);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d13e8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d13e6u);}goto L6d13e6;}
}
B6d13e8:L6d13e8:{c.instructions+=3;NFSU2_TR(0x6d13e8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d13ea:{NFSU2_TR(0x6d13ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d13ed:{NFSU2_TR(0x6d13ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1464;}}
}
B6d13ef:L6d13ef:{c.instructions+=8;NFSU2_TR(0x6d13ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d13f2:{NFSU2_TR(0x6d13f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d13f5:{NFSU2_TR(0x6d13f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d13f8:{NFSU2_TR(0x6d13f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d13fb:{NFSU2_TR(0x6d13fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d13fe:{NFSU2_TR(0x6d13fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1401:{NFSU2_TR(0x6d1401);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d1404:{NFSU2_TR(0x6d1404);
if(r1(R+518)){{goto L6d145e;}}
}
B6d1406:L6d1406:{c.instructions+=2;NFSU2_TR(0x6d1406);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d140a:{NFSU2_TR(0x6d140a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d145e;}}
}
B6d140c:L6d140c:{c.instructions+=2;NFSU2_TR(0x6d140c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1410:{NFSU2_TR(0x6d1410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d145e;}}
}
B6d1412:L6d1412:{c.instructions+=2;NFSU2_TR(0x6d1412);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1418:{NFSU2_TR(0x6d1418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d145e;}}
}
B6d141a:L6d141a:{c.instructions+=2;NFSU2_TR(0x6d141a);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d141d:{NFSU2_TR(0x6d141d);
if(r1(R+518)){{goto L6d1428;}}
}
B6d141f:L6d141f:{c.instructions+=2;NFSU2_TR(0x6d141f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1426:{NFSU2_TR(0x6d1426);
if(r1(R+518)){{goto L6d145e;}}
}
B6d1428:L6d1428:{c.instructions+=3;NFSU2_TR(0x6d1428);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d142a:{NFSU2_TR(0x6d142a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d142d:{NFSU2_TR(0x6d142d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d143d;}}
}
B6d142f:L6d142f:{c.instructions+=1;NFSU2_TR(0x6d142f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1432:L6d1432:{c.instructions+=2;NFSU2_TR(0x6d1432);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d1435:{NFSU2_TR(0x6d1435);
if(r1(R+518)){{goto L6d143d;}}
}
B6d1437:L6d1437:{c.instructions+=3;NFSU2_TR(0x6d1437);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d1438:{NFSU2_TR(0x6d1438);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d143b:{NFSU2_TR(0x6d143b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1432u);}goto L6d1432;}}
}
B6d143d:L6d143d:{c.instructions+=2;NFSU2_TR(0x6d143d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1440:{NFSU2_TR(0x6d1440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d144b;}}
}
B6d1442:L6d1442:{c.instructions+=3;NFSU2_TR(0x6d1442);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1445:{NFSU2_TR(0x6d1445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1448:{NFSU2_TR(0x6d1448);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d144b:L6d144b:{c.instructions+=7;NFSU2_TR(0x6d144b);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d144e:{NFSU2_TR(0x6d144e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1451:{NFSU2_TR(0x6d1451);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d1454:{NFSU2_TR(0x6d1454);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6d1456:{NFSU2_TR(0x6d1456);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1459:{NFSU2_TR(0x6d1459);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6d145c:{NFSU2_TR(0x6d145c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6d145e:L6d145e:{c.instructions+=3;NFSU2_TR(0x6d145e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d145f:{NFSU2_TR(0x6d145f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6d1462:{NFSU2_TR(0x6d1462);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d13efu);}goto L6d13ef;}}
}
B6d1464:L6d1464:{c.instructions+=3;NFSU2_TR(0x6d1464);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d1466:{NFSU2_TR(0x6d1466);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6d1469:{NFSU2_TR(0x6d1469);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1495;}}
}
B6d146b:L6d146b:{c.instructions+=2;NFSU2_TR(0x6d146b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d146e:{NFSU2_TR(0x6d146e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1471:L6d1471:{c.instructions+=6;NFSU2_TR(0x6d1471);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1474:{NFSU2_TR(0x6d1474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1477:{NFSU2_TR(0x6d1477);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d147a:{NFSU2_TR(0x6d147a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d147c:{NFSU2_TR(0x6d147c);
__builtin_memmove((R+4),(R+12),4);
}
B6d147e:{NFSU2_TR(0x6d147e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1481ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1481:L6d1481:{c.instructions+=3;NFSU2_TR(0x6d1481);
__builtin_memmove((R+28),(R+0),4);
}
B6d1483:{NFSU2_TR(0x6d1483);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d1485:{NFSU2_TR(0x6d1485);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d148b:L6d148b:{c.instructions+=4;NFSU2_TR(0x6d148b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d148f:{NFSU2_TR(0x6d148f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d1490:{NFSU2_TR(0x6d1490);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d1493:{NFSU2_TR(0x6d1493);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1471u);}goto L6d1471;}}
}
B6d1495:L6d1495:{c.instructions+=5;NFSU2_TR(0x6d1495);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d1497:{NFSU2_TR(0x6d1497);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d149a:{NFSU2_TR(0x6d149a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d149d:{NFSU2_TR(0x6d149d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d14a0:{NFSU2_TR(0x6d14a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d14c8;}}
}
B6d14a2:L6d14a2:{c.instructions+=3;NFSU2_TR(0x6d14a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d14a5:{NFSU2_TR(0x6d14a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d14a8:{NFSU2_TR(0x6d14a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d14ab:L6d14ab:{c.instructions+=5;NFSU2_TR(0x6d14ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d14ad:{NFSU2_TR(0x6d14ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d14b0:{NFSU2_TR(0x6d14b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d14b3:{NFSU2_TR(0x6d14b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d14b7:{NFSU2_TR(0x6d14b7);
if(r1(R+518)){{goto L6d14c2;}}
}
B6d14b9:L6d14b9:{c.instructions+=2;NFSU2_TR(0x6d14b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d14bd:{NFSU2_TR(0x6d14bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d14c2;}}
}
B6d14bf:L6d14bf:{c.instructions+=1;NFSU2_TR(0x6d14bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d14c2:L6d14c2:{c.instructions+=3;NFSU2_TR(0x6d14c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6d14c5:{NFSU2_TR(0x6d14c5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6d14c6:{NFSU2_TR(0x6d14c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d14abu);}goto L6d14ab;}}
}
B6d14c8:L6d14c8:{c.instructions+=5;NFSU2_TR(0x6d14c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d14cb:{NFSU2_TR(0x6d14cb);
__builtin_memmove((R+28),(R+24),4);
}
B6d14cd:{NFSU2_TR(0x6d14cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d14d0:{NFSU2_TR(0x6d14d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d14d1:{NFSU2_TR(0x6d14d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d14d6ull));
TAIL_STATIC(0x575620u,575);
}
B6d14d6:L6d14d6:{c.instructions+=4;NFSU2_TR(0x6d14d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d14d8:{NFSU2_TR(0x6d14d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d14d9:{NFSU2_TR(0x6d14d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d14dc:{NFSU2_TR(0x6d14dc);
if(r1(R+518)){TAIL_STATIC(0x6d0d97u,6d0);}
}
B6d14e2:L6d14e2:{c.instructions+=3;NFSU2_TR(0x6d14e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d14e5:{NFSU2_TR(0x6d14e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d14e6:{NFSU2_TR(0x6d14e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d14ebull));
TAIL_STATIC(0x575620u,575);
}
B6d14eb:L6d14eb:{c.instructions+=4;NFSU2_TR(0x6d14eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d14ed:{NFSU2_TR(0x6d14ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d14ee:{NFSU2_TR(0x6d14ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d14f1:{NFSU2_TR(0x6d14f1);
if(r1(R+518)){{goto L6d16e5;}}
}
B6d14f7:L6d14f7:{c.instructions+=6;NFSU2_TR(0x6d14f7);
__builtin_memmove((R+4),(R+28),4);
}
B6d14f9:{NFSU2_TR(0x6d14f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d14fc:{NFSU2_TR(0x6d14fc);
__builtin_memmove((R+8),(R+4),4);
}
B6d14fe:{NFSU2_TR(0x6d14fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d1501:{NFSU2_TR(0x6d1501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1505:{NFSU2_TR(0x6d1505);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d1507:L6d1507:{c.instructions+=1;NFSU2_TR(0x6d1507);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d1509;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1507u);}goto L6d1507;}
}
B6d1509:L6d1509:{c.instructions+=2;NFSU2_TR(0x6d1509);
__builtin_memmove((R+4),(R+8),4);
}
B6d150b:{NFSU2_TR(0x6d150b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d150e:L6d150e:{c.instructions+=1;NFSU2_TR(0x6d150e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d1510;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d150eu);}goto L6d150e;}
}
B6d1510:L6d1510:{c.instructions+=5;NFSU2_TR(0x6d1510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1513:{NFSU2_TR(0x6d1513);
__builtin_memmove((R+4),(R+24),4);
}
B6d1515:{NFSU2_TR(0x6d1515);
__builtin_memmove((R+8),(R+4),4);
}
B6d1517:{NFSU2_TR(0x6d1517);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d151a:{NFSU2_TR(0x6d151a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d151c:L6d151c:{c.instructions+=1;NFSU2_TR(0x6d151c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d151e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d151cu);}goto L6d151c;}
}
B6d151e:L6d151e:{c.instructions+=2;NFSU2_TR(0x6d151e);
__builtin_memmove((R+4),(R+8),4);
}
B6d1520:{NFSU2_TR(0x6d1520);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d1523:L6d1523:{c.instructions+=1;NFSU2_TR(0x6d1523);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6d1525;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1523u);}goto L6d1523;}
}
B6d1525:L6d1525:{c.instructions+=2;NFSU2_TR(0x6d1525);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1529:{NFSU2_TR(0x6d1529);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d15a0;}}
}
B6d152b:L6d152b:{c.instructions+=9;NFSU2_TR(0x6d152b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d152e:{NFSU2_TR(0x6d152e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1531:{NFSU2_TR(0x6d1531);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d1534:{NFSU2_TR(0x6d1534);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1537:{NFSU2_TR(0x6d1537);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d153a:{NFSU2_TR(0x6d153a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d153d:{NFSU2_TR(0x6d153d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1540:{NFSU2_TR(0x6d1540);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d1543:{NFSU2_TR(0x6d1543);
if(r1(R+518)){{goto L6d1595;}}
}
B6d1545:L6d1545:{c.instructions+=2;NFSU2_TR(0x6d1545);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1549:{NFSU2_TR(0x6d1549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1595;}}
}
B6d154b:L6d154b:{c.instructions+=2;NFSU2_TR(0x6d154b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d154f:{NFSU2_TR(0x6d154f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1595;}}
}
B6d1551:L6d1551:{c.instructions+=2;NFSU2_TR(0x6d1551);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1556:{NFSU2_TR(0x6d1556);
if(r1(R+518)){{goto L6d1595;}}
}
B6d1558:L6d1558:{c.instructions+=3;NFSU2_TR(0x6d1558);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d155a:{NFSU2_TR(0x6d155a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d155d:{NFSU2_TR(0x6d155d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d1573;}}
}
B6d155f:L6d155f:{c.instructions+=1;NFSU2_TR(0x6d155f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1562:L6d1562:{c.instructions+=3;NFSU2_TR(0x6d1562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1565:{NFSU2_TR(0x6d1565);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d1568:{NFSU2_TR(0x6d1568);
if(r1(R+518)){{goto L6d1570;}}
}
B6d156a:L6d156a:{c.instructions+=3;NFSU2_TR(0x6d156a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d156b:{NFSU2_TR(0x6d156b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d156e:{NFSU2_TR(0x6d156e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1562u);}goto L6d1562;}}
}
B6d1570:L6d1570:{c.instructions+=1;NFSU2_TR(0x6d1570);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1573:L6d1573:{c.instructions+=1;NFSU2_TR(0x6d1573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1581;}}
}
B6d1575:L6d1575:{c.instructions+=4;NFSU2_TR(0x6d1575);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1578:{NFSU2_TR(0x6d1578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d157b:{NFSU2_TR(0x6d157b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d157e:{NFSU2_TR(0x6d157e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d1581:L6d1581:{c.instructions+=2;NFSU2_TR(0x6d1581);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6d1584:{NFSU2_TR(0x6d1584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1589ull));
TAIL_STATIC(0x75dd28u,75d);
}
B6d1589:L6d1589:{c.instructions+=4;NFSU2_TR(0x6d1589);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d158c:{NFSU2_TR(0x6d158c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d158f:{NFSU2_TR(0x6d158f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d1592:{NFSU2_TR(0x6d1592);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d1595:L6d1595:{c.instructions+=4;NFSU2_TR(0x6d1595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1598:{NFSU2_TR(0x6d1598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d159b:{NFSU2_TR(0x6d159b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d159e:{NFSU2_TR(0x6d159e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d152bu);}goto L6d152b;}}
}
B6d15a0:L6d15a0:{c.instructions+=3;NFSU2_TR(0x6d15a0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d15a2:{NFSU2_TR(0x6d15a2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6d15a5:{NFSU2_TR(0x6d15a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d15d1;}}
}
B6d15a7:L6d15a7:{c.instructions+=2;NFSU2_TR(0x6d15a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d15aa:{NFSU2_TR(0x6d15aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d15ad:L6d15ad:{c.instructions+=6;NFSU2_TR(0x6d15ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d15b0:{NFSU2_TR(0x6d15b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d15b3:{NFSU2_TR(0x6d15b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d15b6:{NFSU2_TR(0x6d15b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d15b8:{NFSU2_TR(0x6d15b8);
__builtin_memmove((R+4),(R+12),4);
}
B6d15ba:{NFSU2_TR(0x6d15ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d15bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d15bd:L6d15bd:{c.instructions+=3;NFSU2_TR(0x6d15bd);
__builtin_memmove((R+28),(R+0),4);
}
B6d15bf:{NFSU2_TR(0x6d15bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d15c1:{NFSU2_TR(0x6d15c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d15c7:L6d15c7:{c.instructions+=4;NFSU2_TR(0x6d15c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d15cb:{NFSU2_TR(0x6d15cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d15cc:{NFSU2_TR(0x6d15cc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d15cf:{NFSU2_TR(0x6d15cf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d15adu);}goto L6d15ad;}}
}
B6d15d1:L6d15d1:{c.instructions+=3;NFSU2_TR(0x6d15d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d15d4:{NFSU2_TR(0x6d15d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d15d7:{NFSU2_TR(0x6d15d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d15ea;}}
}
B6d15d9:L6d15d9:{c.instructions+=4;NFSU2_TR(0x6d15d9);
u8 U[4];
w4(U+0,u32(0x7bf784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d15de:{NFSU2_TR(0x6d15de);
u8 U[4];
w4(U+0,u32(0x119aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d15e3:{NFSU2_TR(0x6d15e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d15e5:{NFSU2_TR(0x6d15e5);
{goto L6d18dc;}
}
B6d15ea:L6d15ea:{c.instructions+=4;NFSU2_TR(0x6d15ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d15ed:{NFSU2_TR(0x6d15ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d15f1:{NFSU2_TR(0x6d15f1);
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
B6d15f3:{NFSU2_TR(0x6d15f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1625;}}
}
B6d15f5:L6d15f5:{c.instructions+=4;NFSU2_TR(0x6d15f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d15f8:{NFSU2_TR(0x6d15f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d15fb:{NFSU2_TR(0x6d15fb);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6d15fd:{NFSU2_TR(0x6d15fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1600:L6d1600:{c.instructions+=3;NFSU2_TR(0x6d1600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1602:{NFSU2_TR(0x6d1602);
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
B6d1604:{NFSU2_TR(0x6d1604);
if(r1(R+518)){{goto L6d161d;}}
}
B6d1606:L6d1606:{c.instructions+=6;NFSU2_TR(0x6d1606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d1608:{NFSU2_TR(0x6d1608);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d160b:{NFSU2_TR(0x6d160b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d160c:{NFSU2_TR(0x6d160c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d160d:{NFSU2_TR(0x6d160d);
__builtin_memmove((R+4),(R+12),4);
}
B6d160f:{NFSU2_TR(0x6d160f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1612ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1612:L6d1612:{c.instructions+=2;NFSU2_TR(0x6d1612);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d1614:{NFSU2_TR(0x6d1614);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d161d;}}
}
B6d1616:L6d1616:{c.instructions+=1;NFSU2_TR(0x6d1616);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d161d:L6d161d:{c.instructions+=3;NFSU2_TR(0x6d161d);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d1620:{NFSU2_TR(0x6d1620);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B6d1623:{NFSU2_TR(0x6d1623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1600u);}goto L6d1600;}}
}
B6d1625:L6d1625:{c.instructions+=3;NFSU2_TR(0x6d1625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1627:{NFSU2_TR(0x6d1627);
__builtin_memmove((R+4),(R+12),4);
}
B6d1629:{NFSU2_TR(0x6d1629);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d162cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d162c:L6d162c:{c.instructions+=4;NFSU2_TR(0x6d162c);
__builtin_memmove((R+28),(R+0),4);
}
B6d162e:{NFSU2_TR(0x6d162e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d1630:{NFSU2_TR(0x6d1630);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d1632:{NFSU2_TR(0x6d1632);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1638:L6d1638:{c.instructions+=2;NFSU2_TR(0x6d1638);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d163b:{NFSU2_TR(0x6d163b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1660;}}
}
B6d163d:L6d163d:{c.instructions+=4;NFSU2_TR(0x6d163d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1640:{NFSU2_TR(0x6d1640);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d1643:{NFSU2_TR(0x6d1643);
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
B6d1645:{NFSU2_TR(0x6d1645);
if(r1(R+518)){{goto L6d165a;}}
}
B6d1647:L6d1647:{c.instructions+=4;NFSU2_TR(0x6d1647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d1649:{NFSU2_TR(0x6d1649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d164a:{NFSU2_TR(0x6d164a);
__builtin_memmove((R+4),(R+12),4);
}
B6d164c:{NFSU2_TR(0x6d164c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d164full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d164f:L6d164f:{c.instructions+=2;NFSU2_TR(0x6d164f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d1651:{NFSU2_TR(0x6d1651);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d165a;}}
}
B6d1653:L6d1653:{c.instructions+=1;NFSU2_TR(0x6d1653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d165a:L6d165a:{c.instructions+=3;NFSU2_TR(0x6d165a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d165b:{NFSU2_TR(0x6d165b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d165e:{NFSU2_TR(0x6d165e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d163du);}goto L6d163d;}}
}
B6d1660:L6d1660:{c.instructions+=2;NFSU2_TR(0x6d1660);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d1664:{NFSU2_TR(0x6d1664);
if(r1(R+518)){{goto L6d16a1;}}
}
B6d1666:L6d1666:{c.instructions+=2;NFSU2_TR(0x6d1666);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d166a:{NFSU2_TR(0x6d166a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d16de;}}
}
B6d166c:L6d166c:{c.instructions+=5;NFSU2_TR(0x6d166c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d166f:{NFSU2_TR(0x6d166f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1672:{NFSU2_TR(0x6d1672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1675:{NFSU2_TR(0x6d1675);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6d1677:{NFSU2_TR(0x6d1677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d167a:L6d167a:{c.instructions+=3;NFSU2_TR(0x6d167a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d167c:{NFSU2_TR(0x6d167c);
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
B6d167e:{NFSU2_TR(0x6d167e);
if(r1(R+518)){{goto L6d1697;}}
}
B6d1680:L6d1680:{c.instructions+=6;NFSU2_TR(0x6d1680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d1682:{NFSU2_TR(0x6d1682);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d1685:{NFSU2_TR(0x6d1685);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1686:{NFSU2_TR(0x6d1686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1687:{NFSU2_TR(0x6d1687);
__builtin_memmove((R+4),(R+12),4);
}
B6d1689:{NFSU2_TR(0x6d1689);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d168cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d168c:L6d168c:{c.instructions+=2;NFSU2_TR(0x6d168c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d168e:{NFSU2_TR(0x6d168e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d1697;}}
}
B6d1690:L6d1690:{c.instructions+=1;NFSU2_TR(0x6d1690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1697:L6d1697:{c.instructions+=3;NFSU2_TR(0x6d1697);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d169a:{NFSU2_TR(0x6d169a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d169d:{NFSU2_TR(0x6d169d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d167au);}goto L6d167a;}}
}
B6d169f:L6d169f:{c.instructions+=1;NFSU2_TR(0x6d169f);
{goto L6d16de;}
}
B6d16a1:L6d16a1:{c.instructions+=2;NFSU2_TR(0x6d16a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d16a5:{NFSU2_TR(0x6d16a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d16de;}}
}
B6d16a7:L6d16a7:{c.instructions+=5;NFSU2_TR(0x6d16a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d16aa:{NFSU2_TR(0x6d16aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d16ad:{NFSU2_TR(0x6d16ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d16b0:{NFSU2_TR(0x6d16b0);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6d16b2:{NFSU2_TR(0x6d16b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d16b5:L6d16b5:{c.instructions+=3;NFSU2_TR(0x6d16b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d16b7:{NFSU2_TR(0x6d16b7);
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
B6d16b9:{NFSU2_TR(0x6d16b9);
if(r1(R+518)){{goto L6d16d6;}}
}
B6d16bb:L6d16bb:{c.instructions+=8;NFSU2_TR(0x6d16bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d16bd:{NFSU2_TR(0x6d16bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d16bf:{NFSU2_TR(0x6d16bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d16c1:{NFSU2_TR(0x6d16c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d16c4:{NFSU2_TR(0x6d16c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d16c5:{NFSU2_TR(0x6d16c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d16c6:{NFSU2_TR(0x6d16c6);
__builtin_memmove((R+4),(R+12),4);
}
B6d16c8:{NFSU2_TR(0x6d16c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d16cbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d16cb:L6d16cb:{c.instructions+=2;NFSU2_TR(0x6d16cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d16cd:{NFSU2_TR(0x6d16cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d16d6;}}
}
B6d16cf:L6d16cf:{c.instructions+=1;NFSU2_TR(0x6d16cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d16d6:L6d16d6:{c.instructions+=3;NFSU2_TR(0x6d16d6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d16d9:{NFSU2_TR(0x6d16d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d16dc:{NFSU2_TR(0x6d16dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d16b5u);}goto L6d16b5;}}
}
B6d16de:L6d16de:{c.instructions+=3;NFSU2_TR(0x6d16de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d16e0:{NFSU2_TR(0x6d16e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d16e3:{NFSU2_TR(0x6d16e3);
if(r1(R+518)){{goto L6d16ef;}}
}
B6d16e5:L6d16e5:{c.instructions+=2;NFSU2_TR(0x6d16e5);
w4(R+28,u32(0x80004005ull));
}
B6d16ea:{NFSU2_TR(0x6d16ea);
{goto L6d1839;}
}
B6d16ef:L6d16ef:{c.instructions+=3;NFSU2_TR(0x6d16ef);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d16f1:{NFSU2_TR(0x6d16f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d16f4:{NFSU2_TR(0x6d16f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d1734;}}
}
B6d16f6:L6d16f6:{c.instructions+=3;NFSU2_TR(0x6d16f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d16f9:{NFSU2_TR(0x6d16f9);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d16fd:{NFSU2_TR(0x6d16fd);
if(r1(R+518)){{goto L6d172b;}}
}
B6d16ff:L6d16ff:{c.instructions+=3;NFSU2_TR(0x6d16ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1703:{NFSU2_TR(0x6d1703);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1705:{NFSU2_TR(0x6d1705);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d172b;}}
}
B6d1707:L6d1707:{c.instructions+=2;NFSU2_TR(0x6d1707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d170a:{NFSU2_TR(0x6d170a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6d170c:L6d170c:{c.instructions+=2;NFSU2_TR(0x6d170c);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d1710:{NFSU2_TR(0x6d1710);
if(r1(R+518)){{goto L6d1720;}}
}
B6d1712:L6d1712:{c.instructions+=4;NFSU2_TR(0x6d1712);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1715:{NFSU2_TR(0x6d1715);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d1718:{NFSU2_TR(0x6d1718);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d171a:{NFSU2_TR(0x6d171a);
if(r1(R+518)){{goto L6d18c9;}}
}
B6d1720:L6d1720:{c.instructions+=4;NFSU2_TR(0x6d1720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1723:{NFSU2_TR(0x6d1723);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d1726:{NFSU2_TR(0x6d1726);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6d1729:{NFSU2_TR(0x6d1729);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d170cu);}goto L6d170c;}}
}
B6d172b:L6d172b:{c.instructions+=4;NFSU2_TR(0x6d172b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d172c:{NFSU2_TR(0x6d172c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6d172f:{NFSU2_TR(0x6d172f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d1732:{NFSU2_TR(0x6d1732);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d16f6u);}goto L6d16f6;}}
}
B6d1734:L6d1734:{c.instructions+=2;NFSU2_TR(0x6d1734);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6eull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6d1738:{NFSU2_TR(0x6d1738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d174b;}}
}
B6d173a:L6d173a:{c.instructions+=2;NFSU2_TR(0x6d173a);
__builtin_memmove((R+4),(R+12),4);
}
B6d173c:{NFSU2_TR(0x6d173c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1741ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6d1741:L6d1741:{c.instructions+=3;NFSU2_TR(0x6d1741);
__builtin_memmove((R+28),(R+0),4);
}
B6d1743:{NFSU2_TR(0x6d1743);
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
B6d1745:{NFSU2_TR(0x6d1745);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d174b:L6d174b:{c.instructions+=3;NFSU2_TR(0x6d174b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d174d:{NFSU2_TR(0x6d174d);
__builtin_memmove((R+4),(R+12),4);
}
B6d174f:{NFSU2_TR(0x6d174f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1752ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1752:L6d1752:{c.instructions+=4;NFSU2_TR(0x6d1752);
__builtin_memmove((R+28),(R+0),4);
}
B6d1754:{NFSU2_TR(0x6d1754);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d1756:{NFSU2_TR(0x6d1756);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d1758:{NFSU2_TR(0x6d1758);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d175e:L6d175e:{c.instructions+=2;NFSU2_TR(0x6d175e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1764:{NFSU2_TR(0x6d1764);
if(r1(R+518)){{goto L6d1777;}}
}
B6d1766:L6d1766:{c.instructions+=2;NFSU2_TR(0x6d1766);
__builtin_memmove((R+4),(R+12),4);
}
B6d1768:{NFSU2_TR(0x6d1768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d176dull));
TAIL_STATIC(0x6cfba3u,6cf);
}
B6d176d:L6d176d:{c.instructions+=3;NFSU2_TR(0x6d176d);
__builtin_memmove((R+28),(R+0),4);
}
B6d176f:{NFSU2_TR(0x6d176f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d1771:{NFSU2_TR(0x6d1771);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1777:L6d1777:{c.instructions+=2;NFSU2_TR(0x6d1777);
__builtin_memmove((R+4),(R+12),4);
}
B6d1779:{NFSU2_TR(0x6d1779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d177eull));
TAIL_STATIC(0x6cfccbu,6cf);
}
B6d177e:L6d177e:{c.instructions+=3;NFSU2_TR(0x6d177e);
__builtin_memmove((R+28),(R+0),4);
}
B6d1780:{NFSU2_TR(0x6d1780);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d1782:{NFSU2_TR(0x6d1782);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1788:L6d1788:{c.instructions+=2;NFSU2_TR(0x6d1788);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d178f:{NFSU2_TR(0x6d178f);
if(r1(R+518)){{goto L6d17a2;}}
}
B6d1791:L6d1791:{c.instructions+=2;NFSU2_TR(0x6d1791);
__builtin_memmove((R+4),(R+12),4);
}
B6d1793:{NFSU2_TR(0x6d1793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1798ull));
TAIL_STATIC(0x6d0635u,6d0);
}
B6d1798:L6d1798:{c.instructions+=3;NFSU2_TR(0x6d1798);
__builtin_memmove((R+28),(R+0),4);
}
B6d179a:{NFSU2_TR(0x6d179a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d179c:{NFSU2_TR(0x6d179c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d17a2:L6d17a2:{c.instructions+=3;NFSU2_TR(0x6d17a2);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d17a7:{NFSU2_TR(0x6d17a7);
__builtin_memmove((R+4),(R+12),4);
}
B6d17a9:{NFSU2_TR(0x6d17a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d17aeull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d17ae:L6d17ae:{c.instructions+=3;NFSU2_TR(0x6d17ae);
__builtin_memmove((R+28),(R+0),4);
}
B6d17b0:{NFSU2_TR(0x6d17b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d17b2:{NFSU2_TR(0x6d17b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d17b8:L6d17b8:{c.instructions+=2;NFSU2_TR(0x6d17b8);
__builtin_memmove((R+4),(R+12),4);
}
B6d17ba:{NFSU2_TR(0x6d17ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d17bfull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d17bf:L6d17bf:{c.instructions+=3;NFSU2_TR(0x6d17bf);
__builtin_memmove((R+28),(R+0),4);
}
B6d17c1:{NFSU2_TR(0x6d17c1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d17c3:{NFSU2_TR(0x6d17c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d17c5:L6d17c5:{c.instructions+=3;NFSU2_TR(0x6d17c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d17cb:{NFSU2_TR(0x6d17cb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d17cd:{NFSU2_TR(0x6d17cd);
if(r1(R+518)){{goto L6d17e3;}}
}
B6d17cf:L6d17cf:{c.instructions+=2;NFSU2_TR(0x6d17cf);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
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
B6d17d5:{NFSU2_TR(0x6d17d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d17e3;}}
}
B6d17d7:L6d17d7:{c.instructions+=3;NFSU2_TR(0x6d17d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d17d9:{NFSU2_TR(0x6d17d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d17da:{NFSU2_TR(0x6d17da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d17ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d17dd:L6d17dd:{c.instructions+=3;NFSU2_TR(0x6d17dd);
__builtin_memmove((R+28),(R+0),4);
}
B6d17df:{NFSU2_TR(0x6d17df);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d17e1:{NFSU2_TR(0x6d17e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d17e3:L6d17e3:{c.instructions+=2;NFSU2_TR(0x6d17e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d17e6:{NFSU2_TR(0x6d17e6);
if(r1(R+518)){{goto L6d1837;}}
}
B6d17e8:L6d17e8:{c.instructions+=6;NFSU2_TR(0x6d17e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d17eb:{NFSU2_TR(0x6d17eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d17ec:{NFSU2_TR(0x6d17ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d17f2:{NFSU2_TR(0x6d17f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d17f5:{NFSU2_TR(0x6d17f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d17f6:{NFSU2_TR(0x6d17f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d17fbull));
TAIL_STATIC(0x670ea6u,670);
}
B6d17fb:L6d17fb:{c.instructions+=3;NFSU2_TR(0x6d17fb);
__builtin_memmove((R+28),(R+0),4);
}
B6d17fd:{NFSU2_TR(0x6d17fd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d17ff:{NFSU2_TR(0x6d17ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1839;}}
}
B6d1801:L6d1801:{c.instructions+=8;NFSU2_TR(0x6d1801);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1807:{NFSU2_TR(0x6d1807);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d180d:{NFSU2_TR(0x6d180d);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6d1810:{NFSU2_TR(0x6d1810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1813:{NFSU2_TR(0x6d1813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1816:{NFSU2_TR(0x6d1816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d1818:{NFSU2_TR(0x6d1818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1819:{NFSU2_TR(0x6d1819);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d181cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d181c:L6d181c:{c.instructions+=4;NFSU2_TR(0x6d181c);
__builtin_memmove((R+28),(R+0),4);
}
B6d181e:{NFSU2_TR(0x6d181e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1821:{NFSU2_TR(0x6d1821);
__builtin_memmove((R+4),(R+0),4);
}
B6d1823:{NFSU2_TR(0x6d1823);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d1826:L6d1826:{c.instructions+=1;NFSU2_TR(0x6d1826);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6d1828;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1826u);}goto L6d1826;}
}
B6d1828:L6d1828:{c.instructions+=2;NFSU2_TR(0x6d1828);
__builtin_memmove((R+4),(R+0),4);
}
B6d182a:{NFSU2_TR(0x6d182a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d182d:L6d182d:{c.instructions+=1;NFSU2_TR(0x6d182d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d182f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d182du);}goto L6d182d;}
}
B6d182f:L6d182f:{c.instructions+=3;NFSU2_TR(0x6d182f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1832:{NFSU2_TR(0x6d1832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1835:{NFSU2_TR(0x6d1835);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d1837:L6d1837:{c.instructions+=1;NFSU2_TR(0x6d1837);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d1839:L6d1839:{c.instructions+=2;NFSU2_TR(0x6d1839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d183c:{NFSU2_TR(0x6d183c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1841ull));
TAIL_STATIC(0x575630u,575);
}
B6d1841:L6d1841:{c.instructions+=2;NFSU2_TR(0x6d1841);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1844:{NFSU2_TR(0x6d1844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1849ull));
TAIL_STATIC(0x575630u,575);
}
B6d1849:L6d1849:{c.instructions+=2;NFSU2_TR(0x6d1849);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d184c:{NFSU2_TR(0x6d184c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1851ull));
TAIL_STATIC(0x575630u,575);
}
B6d1851:L6d1851:{c.instructions+=2;NFSU2_TR(0x6d1851);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1854:{NFSU2_TR(0x6d1854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1859ull));
TAIL_STATIC(0x575630u,575);
}
B6d1859:L6d1859:{c.instructions+=2;NFSU2_TR(0x6d1859);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d185b:{NFSU2_TR(0x6d185b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1860ull));
TAIL_STATIC(0x575630u,575);
}
B6d1860:L6d1860:{c.instructions+=2;NFSU2_TR(0x6d1860);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1863:{NFSU2_TR(0x6d1863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1868ull));
TAIL_STATIC(0x575630u,575);
}
B6d1868:L6d1868:{c.instructions+=2;NFSU2_TR(0x6d1868);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d186b:{NFSU2_TR(0x6d186b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1870ull));
TAIL_STATIC(0x575630u,575);
}
B6d1870:L6d1870:{c.instructions+=2;NFSU2_TR(0x6d1870);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1873:{NFSU2_TR(0x6d1873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1878ull));
TAIL_STATIC(0x575630u,575);
}
B6d1878:L6d1878:{c.instructions+=2;NFSU2_TR(0x6d1878);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d187b:{NFSU2_TR(0x6d187b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1880ull));
TAIL_STATIC(0x575630u,575);
}
B6d1880:L6d1880:{c.instructions+=2;NFSU2_TR(0x6d1880);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1883:{NFSU2_TR(0x6d1883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1888ull));
TAIL_STATIC(0x575630u,575);
}
B6d1888:L6d1888:{c.instructions+=3;NFSU2_TR(0x6d1888);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d188e:{NFSU2_TR(0x6d188e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6d1890:{NFSU2_TR(0x6d1890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1895ull));
TAIL_STATIC(0x575630u,575);
}
B6d1895:L6d1895:{c.instructions+=4;NFSU2_TR(0x6d1895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6d1898:{NFSU2_TR(0x6d1898);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d189e:{NFSU2_TR(0x6d189e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6d18a0:{NFSU2_TR(0x6d18a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d18a5ull));
TAIL_STATIC(0x575630u,575);
}
B6d18a5:L6d18a5:{c.instructions+=6;NFSU2_TR(0x6d18a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6d18a8:{NFSU2_TR(0x6d18a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
}
B6d18ae:{NFSU2_TR(0x6d18ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d18b0:{NFSU2_TR(0x6d18b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B6d18b3:{NFSU2_TR(0x6d18b3);
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
B6d18b5:{NFSU2_TR(0x6d18b5);
if(r1(R+518)){{goto L6d18c0;}}
}
B6d18b7:L6d18b7:{c.instructions+=3;NFSU2_TR(0x6d18b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d18b9:{NFSU2_TR(0x6d18b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18ba:{NFSU2_TR(0x6d18ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d18bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d18bd:L6d18bd:{c.instructions+=1;NFSU2_TR(0x6d18bd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d18c0:L6d18c0:{c.instructions+=6;NFSU2_TR(0x6d18c0);
__builtin_memmove((R+0),(R+28),4);
}
B6d18c2:{NFSU2_TR(0x6d18c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d18c3:{NFSU2_TR(0x6d18c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d18c4:{NFSU2_TR(0x6d18c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d18c5:{NFSU2_TR(0x6d18c5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d18c6:{NFSU2_TR(0x6d18c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d18c9:L6d18c9:{c.instructions+=5;NFSU2_TR(0x6d18c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d18cc:{NFSU2_TR(0x6d18cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d18cf:{NFSU2_TR(0x6d18cf);
u8 U[4];
w4(U+0,u32(0x7bf764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18d4:{NFSU2_TR(0x6d18d4);
u8 U[4];
w4(U+0,u32(0x1198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18d9:{NFSU2_TR(0x6d18d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d18dc:L6d18dc:{c.instructions+=2;NFSU2_TR(0x6d18dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18dd:{NFSU2_TR(0x6d18dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d18e2ull));
TAIL_STATIC(0x69e936u,69e);
}
B6d18e2:L6d18e2:{c.instructions+=2;NFSU2_TR(0x6d18e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d18e5:{NFSU2_TR(0x6d18e5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d16e5u);}goto L6d16e5;}
}
B6d18ea:L6d18ea:{c.instructions+=9;NFSU2_TR(0x6d18ea);
__builtin_memmove((R+28),(R+28),4);
}
B6d18ec:{NFSU2_TR(0x6d18ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18ed:{NFSU2_TR(0x6d18ed);
__builtin_memmove((R+20),(R+16),4);
}
B6d18ef:{NFSU2_TR(0x6d18ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18f0:{NFSU2_TR(0x6d18f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18f1:{NFSU2_TR(0x6d18f1);
__builtin_memmove((R+12),(R+4),4);
}
B6d18f3:{NFSU2_TR(0x6d18f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d18fa:{NFSU2_TR(0x6d18fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d18fb:{NFSU2_TR(0x6d18fb);
if(r1(R+518)){{goto L6d19d2;}}
}
B6d1901:L6d1901:{c.instructions+=2;NFSU2_TR(0x6d1901);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1908:{NFSU2_TR(0x6d1908);
if(r1(R+518)){{goto L6d19d2;}}
}
B6d190e:L6d190e:{c.instructions+=3;NFSU2_TR(0x6d190e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1914:{NFSU2_TR(0x6d1914);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6d191a:{NFSU2_TR(0x6d191a);
if(r1(R+512)){{goto L6d1979;}}
}
B6d191c:L6d191c:{c.instructions+=4;NFSU2_TR(0x6d191c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d191f:{NFSU2_TR(0x6d191f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d1922:{NFSU2_TR(0x6d1922);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1923:{NFSU2_TR(0x6d1923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1928ull));
TAIL_STATIC(0x575620u,575);
}
B6d1928:L6d1928:{c.instructions+=5;NFSU2_TR(0x6d1928);
__builtin_memmove((R+28),(R+0),4);
}
B6d192a:{NFSU2_TR(0x6d192a);
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
B6d192c:{NFSU2_TR(0x6d192c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d192d:{NFSU2_TR(0x6d192d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1930:{NFSU2_TR(0x6d1930);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d193c;}}
}
B6d1932:L6d1932:{c.instructions+=2;NFSU2_TR(0x6d1932);
w4(R+0,u32(0x8007000eull));
}
B6d1937:{NFSU2_TR(0x6d1937);
{goto L6d19ea;}
}
B6d193c:L6d193c:{c.instructions+=7;NFSU2_TR(0x6d193c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1942:{NFSU2_TR(0x6d1942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d1945:{NFSU2_TR(0x6d1945);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d1948:{NFSU2_TR(0x6d1948);
__builtin_memmove((R+0),(R+4),4);
}
B6d194a:{NFSU2_TR(0x6d194a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d194b:{NFSU2_TR(0x6d194b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1951:{NFSU2_TR(0x6d1951);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6d1954:L6d1954:{c.instructions+=1;NFSU2_TR(0x6d1954);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6d1956;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1954u);}goto L6d1954;}
}
B6d1956:L6d1956:{c.instructions+=2;NFSU2_TR(0x6d1956);
__builtin_memmove((R+4),(R+0),4);
}
B6d1958:{NFSU2_TR(0x6d1958);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6d195b:L6d195b:{c.instructions+=1;NFSU2_TR(0x6d195b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d195d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d195bu);}goto L6d195b;}
}
B6d195d:L6d195d:{c.instructions+=2;NFSU2_TR(0x6d195d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1963:{NFSU2_TR(0x6d1963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1968ull));
TAIL_STATIC(0x575630u,575);
}
B6d1968:L6d1968:{c.instructions+=5;NFSU2_TR(0x6d1968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d196b:{NFSU2_TR(0x6d196b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1971:{NFSU2_TR(0x6d1971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1972:{NFSU2_TR(0x6d1972);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1978:{NFSU2_TR(0x6d1978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1979:L6d1979:{c.instructions+=12;NFSU2_TR(0x6d1979);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d197f:{NFSU2_TR(0x6d197f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1985:{NFSU2_TR(0x6d1985);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d198b:{NFSU2_TR(0x6d198b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d198e:{NFSU2_TR(0x6d198e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d1991:{NFSU2_TR(0x6d1991);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1997:{NFSU2_TR(0x6d1997);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d199d:{NFSU2_TR(0x6d199d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d19a3:{NFSU2_TR(0x6d19a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d19a6:{NFSU2_TR(0x6d19a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d19a9:{NFSU2_TR(0x6d19a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d19ad:{NFSU2_TR(0x6d19ad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d19af:L6d19af:{c.instructions+=8;NFSU2_TR(0x6d19af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d19b5:{NFSU2_TR(0x6d19b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d19bb:{NFSU2_TR(0x6d19bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d19be:{NFSU2_TR(0x6d19be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d19c1:{NFSU2_TR(0x6d19c1);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6d19c6:{NFSU2_TR(0x6d19c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d19c7:{NFSU2_TR(0x6d19c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6d19ca:{NFSU2_TR(0x6d19ca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d19afu);}goto L6d19af;}}
}
B6d19cc:L6d19cc:{c.instructions+=1;NFSU2_TR(0x6d19cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d19d2:L6d19d2:{c.instructions+=5;NFSU2_TR(0x6d19d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d19d8:{NFSU2_TR(0x6d19d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d19db:{NFSU2_TR(0x6d19db);
__builtin_memmove((R+4),(R+12),4);
}
B6d19dd:{NFSU2_TR(0x6d19dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d19e3:{NFSU2_TR(0x6d19e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d19e8ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d19e8:L6d19e8:{c.instructions+=1;NFSU2_TR(0x6d19e8);
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
B6d19ea:L6d19ea:{c.instructions+=4;NFSU2_TR(0x6d19ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d19eb:{NFSU2_TR(0x6d19eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d19ec:{NFSU2_TR(0x6d19ec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d19ed:{NFSU2_TR(0x6d19ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d19f0:L6d19f0:{c.instructions+=5;NFSU2_TR(0x6d19f0);
__builtin_memmove((R+28),(R+28),4);
}
B6d19f2:{NFSU2_TR(0x6d19f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d19f3:{NFSU2_TR(0x6d19f3);
__builtin_memmove((R+20),(R+16),4);
}
B6d19f5:{NFSU2_TR(0x6d19f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d19f8:{NFSU2_TR(0x6d19f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d19fdull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d19fd:L6d19fd:{c.instructions+=2;NFSU2_TR(0x6d19fd);
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
B6d19ff:{NFSU2_TR(0x6d19ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1a03;}}
}
B6d1a01:L6d1a01:{c.instructions+=1;NFSU2_TR(0x6d1a01);
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
B6d1a03:L6d1a03:{c.instructions+=2;NFSU2_TR(0x6d1a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d1a04:{NFSU2_TR(0x6d1a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1a07:L6d1a07:{c.instructions+=9;NFSU2_TR(0x6d1a07);
__builtin_memmove((R+28),(R+28),4);
}
B6d1a09:{NFSU2_TR(0x6d1a09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a0a:{NFSU2_TR(0x6d1a0a);
__builtin_memmove((R+20),(R+16),4);
}
B6d1a0c:{NFSU2_TR(0x6d1a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1a0f:{NFSU2_TR(0x6d1a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B6d1a12:{NFSU2_TR(0x6d1a12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a13:{NFSU2_TR(0x6d1a13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a14:{NFSU2_TR(0x6d1a14);
__builtin_memmove((R+24),(R+4),4);
}
B6d1a16:{NFSU2_TR(0x6d1a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1a1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d19f0u);}goto L6d19f0;}
}
B6d1a1b:L6d1a1b:{c.instructions+=2;NFSU2_TR(0x6d1a1b);
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
B6d1a1d:{NFSU2_TR(0x6d1a1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1a48;}}
}
B6d1a1f:L6d1a1f:{c.instructions+=2;NFSU2_TR(0x6d1a1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1a23:{NFSU2_TR(0x6d1a23);
if(r1(R+518)){{goto L6d1a46;}}
}
B6d1a25:L6d1a25:{c.instructions+=3;NFSU2_TR(0x6d1a25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1a28:{NFSU2_TR(0x6d1a28);
__builtin_memmove((R+4),(R+24),4);
}
B6d1a2a:{NFSU2_TR(0x6d1a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1a2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d19f0u);}goto L6d19f0;}
}
B6d1a2f:L6d1a2f:{c.instructions+=2;NFSU2_TR(0x6d1a2f);
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
B6d1a31:{NFSU2_TR(0x6d1a31);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1a48;}}
}
B6d1a33:L6d1a33:{c.instructions+=4;NFSU2_TR(0x6d1a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1a39:{NFSU2_TR(0x6d1a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1a3f:{NFSU2_TR(0x6d1a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d1a42:{NFSU2_TR(0x6d1a42);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6d1a46:L6d1a46:{c.instructions+=1;NFSU2_TR(0x6d1a46);
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
B6d1a48:L6d1a48:{c.instructions+=3;NFSU2_TR(0x6d1a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1a49:{NFSU2_TR(0x6d1a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d1a4a:{NFSU2_TR(0x6d1a4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1a4d:L6d1a4d:{c.instructions+=10;NFSU2_TR(0x6d1a4d);
__builtin_memmove((R+28),(R+28),4);
}
B6d1a4f:{NFSU2_TR(0x6d1a4f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a50:{NFSU2_TR(0x6d1a50);
__builtin_memmove((R+20),(R+16),4);
}
B6d1a52:{NFSU2_TR(0x6d1a52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a53:{NFSU2_TR(0x6d1a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1a56:{NFSU2_TR(0x6d1a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B6d1a59:{NFSU2_TR(0x6d1a59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a5a:{NFSU2_TR(0x6d1a5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1a5b:{NFSU2_TR(0x6d1a5b);
__builtin_memmove((R+28),(R+4),4);
}
B6d1a5d:{NFSU2_TR(0x6d1a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1a62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d19f0u);}goto L6d19f0;}
}
B6d1a62:L6d1a62:{c.instructions+=2;NFSU2_TR(0x6d1a62);
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
B6d1a64:{NFSU2_TR(0x6d1a64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1ab2;}}
}
B6d1a66:L6d1a66:{c.instructions+=2;NFSU2_TR(0x6d1a66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x2000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1a6c:{NFSU2_TR(0x6d1a6c);
if(r1(R+518)){{goto L6d1ab0;}}
}
B6d1a6e:L6d1a6e:{c.instructions+=9;NFSU2_TR(0x6d1a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1a71:{NFSU2_TR(0x6d1a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1a74:{NFSU2_TR(0x6d1a74);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d1a77:{NFSU2_TR(0x6d1a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1a7a:{NFSU2_TR(0x6d1a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1a7d:{NFSU2_TR(0x6d1a7d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6d1a82:{NFSU2_TR(0x6d1a82);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xb0000000ull))));
}
B6d1a87:{NFSU2_TR(0x6d1a87);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d1a8a:{NFSU2_TR(0x6d1a8a);
if(r1(R+518)){{goto L6d1aa8;}}
}
B6d1a8c:L6d1a8c:{c.instructions+=2;NFSU2_TR(0x6d1a8c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d1a8d:{NFSU2_TR(0x6d1a8d);
if(r1(R+518)){{goto L6d1aa3;}}
}
B6d1a8f:L6d1a8f:{c.instructions+=2;NFSU2_TR(0x6d1a8f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d1a90:{NFSU2_TR(0x6d1a90);
if(r1(R+518)){{goto L6d1a9c;}}
}
B6d1a92:L6d1a92:{c.instructions+=2;NFSU2_TR(0x6d1a92);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d1a93:{NFSU2_TR(0x6d1a93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1aa8;}}
}
B6d1a95:L6d1a95:{c.instructions+=2;NFSU2_TR(0x6d1a95);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff0000ull))));
}
B6d1a9a:{NFSU2_TR(0x6d1a9a);
{goto L6d1aa8;}
}
B6d1a9c:L6d1a9c:{c.instructions+=2;NFSU2_TR(0x6d1a9c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xaa0000ull))));
}
B6d1aa1:{NFSU2_TR(0x6d1aa1);
{goto L6d1aa8;}
}
B6d1aa3:L6d1aa3:{c.instructions+=1;NFSU2_TR(0x6d1aa3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x550000ull))));
}
B6d1aa8:L6d1aa8:{c.instructions+=3;NFSU2_TR(0x6d1aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1aa9:{NFSU2_TR(0x6d1aa9);
__builtin_memmove((R+4),(R+28),4);
}
B6d1aab:{NFSU2_TR(0x6d1aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1ab0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d19f0u);}goto L6d19f0;}
}
B6d1ab0:L6d1ab0:{c.instructions+=1;NFSU2_TR(0x6d1ab0);
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
B6d1ab2:L6d1ab2:{c.instructions+=4;NFSU2_TR(0x6d1ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d1ab3:{NFSU2_TR(0x6d1ab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1ab4:{NFSU2_TR(0x6d1ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d1ab5:{NFSU2_TR(0x6d1ab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1ab8:L6d1ab8:{c.instructions+=11;NFSU2_TR(0x6d1ab8);
__builtin_memmove((R+28),(R+28),4);
}
B6d1aba:{NFSU2_TR(0x6d1aba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1abb:{NFSU2_TR(0x6d1abb);
__builtin_memmove((R+20),(R+16),4);
}
B6d1abd:{NFSU2_TR(0x6d1abd);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d1ac0:{NFSU2_TR(0x6d1ac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ac1:{NFSU2_TR(0x6d1ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d1ac4:{NFSU2_TR(0x6d1ac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ac5:{NFSU2_TR(0x6d1ac5);
__builtin_memmove((R+24),(R+4),4);
}
B6d1ac7:{NFSU2_TR(0x6d1ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1ac9:{NFSU2_TR(0x6d1ac9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1aca:{NFSU2_TR(0x6d1aca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1acdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1acd:L6d1acd:{c.instructions+=3;NFSU2_TR(0x6d1acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ace:{NFSU2_TR(0x6d1ace);
__builtin_memmove((R+4),(R+24),4);
}
B6d1ad0:{NFSU2_TR(0x6d1ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1ad5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d18eau);}goto L6d18ea;}
}
B6d1ad5:L6d1ad5:{c.instructions+=2;NFSU2_TR(0x6d1ad5);
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
B6d1ad7:{NFSU2_TR(0x6d1ad7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1cab;}}
}
B6d1add:L6d1add:{c.instructions+=14;NFSU2_TR(0x6d1add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1ae0:{NFSU2_TR(0x6d1ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1ae2:{NFSU2_TR(0x6d1ae2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ae3:{NFSU2_TR(0x6d1ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1ae6:{NFSU2_TR(0x6d1ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1ae9:{NFSU2_TR(0x6d1ae9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1aea:{NFSU2_TR(0x6d1aea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1aed:{NFSU2_TR(0x6d1aed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1aee:{NFSU2_TR(0x6d1aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1af1:{NFSU2_TR(0x6d1af1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1af2:{NFSU2_TR(0x6d1af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d1af4:{NFSU2_TR(0x6d1af4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d1af7:{NFSU2_TR(0x6d1af7);
__builtin_memmove((R+4),(R+24),4);
}
B6d1af9:{NFSU2_TR(0x6d1af9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1afcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1afc:L6d1afc:{c.instructions+=2;NFSU2_TR(0x6d1afc);
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
B6d1afe:{NFSU2_TR(0x6d1afe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1b04:L6d1b04:{c.instructions+=8;NFSU2_TR(0x6d1b04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1b07:{NFSU2_TR(0x6d1b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1b09:{NFSU2_TR(0x6d1b09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1b0c:{NFSU2_TR(0x6d1b0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1b0d:{NFSU2_TR(0x6d1b0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1b10:{NFSU2_TR(0x6d1b10);
__builtin_memmove((R+4),(R+24),4);
}
B6d1b12:{NFSU2_TR(0x6d1b12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1b13:{NFSU2_TR(0x6d1b13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1b16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1b16:L6d1b16:{c.instructions+=2;NFSU2_TR(0x6d1b16);
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
B6d1b18:{NFSU2_TR(0x6d1b18);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1b1e:L6d1b1e:{c.instructions+=11;NFSU2_TR(0x6d1b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1b21:{NFSU2_TR(0x6d1b21);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1b24:{NFSU2_TR(0x6d1b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1b26:{NFSU2_TR(0x6d1b26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1b29:{NFSU2_TR(0x6d1b29);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6d1b2b:{NFSU2_TR(0x6d1b2b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d1b2d:{NFSU2_TR(0x6d1b2d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x400000ull))));
}
B6d1b33:{NFSU2_TR(0x6d1b33);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d1b36:{NFSU2_TR(0x6d1b36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1b37:{NFSU2_TR(0x6d1b37);
__builtin_memmove((R+4),(R+24),4);
}
B6d1b39:{NFSU2_TR(0x6d1b39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1b3cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1b3c:L6d1b3c:{c.instructions+=2;NFSU2_TR(0x6d1b3c);
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
B6d1b3e:{NFSU2_TR(0x6d1b3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1b44:L6d1b44:{c.instructions+=2;NFSU2_TR(0x6d1b44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b47:{NFSU2_TR(0x6d1b47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1b52;}}
}
B6d1b49:L6d1b49:{c.instructions+=2;NFSU2_TR(0x6d1b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x70000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1b50:{NFSU2_TR(0x6d1b50);
{goto L6d1b8e;}
}
B6d1b52:L6d1b52:{c.instructions+=2;NFSU2_TR(0x6d1b52);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b55:{NFSU2_TR(0x6d1b55);
if(r1(R+518)){{goto L6d1b87;}}
}
B6d1b57:L6d1b57:{c.instructions+=2;NFSU2_TR(0x6d1b57);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b5a:{NFSU2_TR(0x6d1b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1b65;}}
}
B6d1b5c:L6d1b5c:{c.instructions+=2;NFSU2_TR(0x6d1b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x30000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1b63:{NFSU2_TR(0x6d1b63);
{goto L6d1b8e;}
}
B6d1b65:L6d1b65:{c.instructions+=2;NFSU2_TR(0x6d1b65);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b68:{NFSU2_TR(0x6d1b68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1b73;}}
}
B6d1b6a:L6d1b6a:{c.instructions+=2;NFSU2_TR(0x6d1b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x10000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1b71:{NFSU2_TR(0x6d1b71);
{goto L6d1b8e;}
}
B6d1b73:L6d1b73:{c.instructions+=2;NFSU2_TR(0x6d1b73);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b76:{NFSU2_TR(0x6d1b76);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1b6au);}goto L6d1b6a;}}
}
B6d1b78:L6d1b78:{c.instructions+=2;NFSU2_TR(0x6d1b78);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b7b:{NFSU2_TR(0x6d1b7b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1b6au);}goto L6d1b6a;}}
}
B6d1b7d:L6d1b7d:{c.instructions+=2;NFSU2_TR(0x6d1b7d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b80:{NFSU2_TR(0x6d1b80);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d1b6au);}goto L6d1b6a;}}
}
B6d1b82:L6d1b82:{c.instructions+=2;NFSU2_TR(0x6d1b82);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x25ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d1b85:{NFSU2_TR(0x6d1b85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1b8e;}}
}
B6d1b87:L6d1b87:{c.instructions+=1;NFSU2_TR(0x6d1b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1b8e:L6d1b8e:{c.instructions+=3;NFSU2_TR(0x6d1b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1b91:{NFSU2_TR(0x6d1b91);
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
B6d1b93:{NFSU2_TR(0x6d1b93);
if(r1(R+518)){{goto L6d1bea;}}
}
B6d1b95:L6d1b95:{c.instructions+=10;NFSU2_TR(0x6d1b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1b98:{NFSU2_TR(0x6d1b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1b9a:{NFSU2_TR(0x6d1b9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1b9d:{NFSU2_TR(0x6d1b9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1b9e:{NFSU2_TR(0x6d1b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1ba1:{NFSU2_TR(0x6d1ba1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ba2:{NFSU2_TR(0x6d1ba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d1ba4:{NFSU2_TR(0x6d1ba4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d1ba7:{NFSU2_TR(0x6d1ba7);
__builtin_memmove((R+4),(R+24),4);
}
B6d1ba9:{NFSU2_TR(0x6d1ba9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1bacull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1bac:L6d1bac:{c.instructions+=2;NFSU2_TR(0x6d1bac);
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
B6d1bae:{NFSU2_TR(0x6d1bae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1bb4:L6d1bb4:{c.instructions+=8;NFSU2_TR(0x6d1bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1bb6:{NFSU2_TR(0x6d1bb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1bb9:{NFSU2_TR(0x6d1bb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1bba:{NFSU2_TR(0x6d1bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1bbd:{NFSU2_TR(0x6d1bbd);
__builtin_memmove((R+4),(R+24),4);
}
B6d1bbf:{NFSU2_TR(0x6d1bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1bc2:{NFSU2_TR(0x6d1bc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1bc3:{NFSU2_TR(0x6d1bc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1bc6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1bc6:L6d1bc6:{c.instructions+=2;NFSU2_TR(0x6d1bc6);
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
B6d1bc8:{NFSU2_TR(0x6d1bc8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1bce:L6d1bce:{c.instructions+=8;NFSU2_TR(0x6d1bce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1bd1:{NFSU2_TR(0x6d1bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1bd4:{NFSU2_TR(0x6d1bd4);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d1bd7:{NFSU2_TR(0x6d1bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1bda:{NFSU2_TR(0x6d1bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1bdc:{NFSU2_TR(0x6d1bdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1bdd:{NFSU2_TR(0x6d1bdd);
__builtin_memmove((R+4),(R+24),4);
}
B6d1bdf:{NFSU2_TR(0x6d1bdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1be2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1be2:L6d1be2:{c.instructions+=2;NFSU2_TR(0x6d1be2);
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
B6d1be4:{NFSU2_TR(0x6d1be4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1bea:L6d1bea:{c.instructions+=3;NFSU2_TR(0x6d1bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1bed:{NFSU2_TR(0x6d1bed);
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
B6d1bef:{NFSU2_TR(0x6d1bef);
if(r1(R+518)){{goto L6d1c42;}}
}
B6d1bf1:L6d1bf1:{c.instructions+=10;NFSU2_TR(0x6d1bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1bf4:{NFSU2_TR(0x6d1bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1bf6:{NFSU2_TR(0x6d1bf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1bf9:{NFSU2_TR(0x6d1bf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1bfa:{NFSU2_TR(0x6d1bfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1bfd:{NFSU2_TR(0x6d1bfd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1bfe:{NFSU2_TR(0x6d1bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d1c00:{NFSU2_TR(0x6d1c00);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d1c03:{NFSU2_TR(0x6d1c03);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c05:{NFSU2_TR(0x6d1c05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c08ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c08:L6d1c08:{c.instructions+=2;NFSU2_TR(0x6d1c08);
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
B6d1c0a:{NFSU2_TR(0x6d1c0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c10:L6d1c10:{c.instructions+=8;NFSU2_TR(0x6d1c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1c12:{NFSU2_TR(0x6d1c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1c15:{NFSU2_TR(0x6d1c15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c16:{NFSU2_TR(0x6d1c16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c19:{NFSU2_TR(0x6d1c19);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c1b:{NFSU2_TR(0x6d1c1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c1e:{NFSU2_TR(0x6d1c1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c1f:{NFSU2_TR(0x6d1c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c22:L6d1c22:{c.instructions+=2;NFSU2_TR(0x6d1c22);
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
B6d1c24:{NFSU2_TR(0x6d1c24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c2a:L6d1c2a:{c.instructions+=8;NFSU2_TR(0x6d1c2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c2d:{NFSU2_TR(0x6d1c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1c30:{NFSU2_TR(0x6d1c30);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d1c33:{NFSU2_TR(0x6d1c33);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c36:{NFSU2_TR(0x6d1c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1c38:{NFSU2_TR(0x6d1c38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c39:{NFSU2_TR(0x6d1c39);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c3b:{NFSU2_TR(0x6d1c3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c3eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c3e:L6d1c3e:{c.instructions+=2;NFSU2_TR(0x6d1c3e);
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
B6d1c40:{NFSU2_TR(0x6d1c40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c42:L6d1c42:{c.instructions+=3;NFSU2_TR(0x6d1c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d1c45:{NFSU2_TR(0x6d1c45);
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
B6d1c47:{NFSU2_TR(0x6d1c47);
if(r1(R+518)){{goto L6d1c92;}}
}
B6d1c49:L6d1c49:{c.instructions+=10;NFSU2_TR(0x6d1c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1c4c:{NFSU2_TR(0x6d1c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1c4e:{NFSU2_TR(0x6d1c4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1c51:{NFSU2_TR(0x6d1c51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c52:{NFSU2_TR(0x6d1c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1c55:{NFSU2_TR(0x6d1c55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c56:{NFSU2_TR(0x6d1c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d1c58:{NFSU2_TR(0x6d1c58);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d1c5b:{NFSU2_TR(0x6d1c5b);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c5d:{NFSU2_TR(0x6d1c5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c60:L6d1c60:{c.instructions+=2;NFSU2_TR(0x6d1c60);
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
B6d1c62:{NFSU2_TR(0x6d1c62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c64:L6d1c64:{c.instructions+=8;NFSU2_TR(0x6d1c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1c66:{NFSU2_TR(0x6d1c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1c69:{NFSU2_TR(0x6d1c69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c6a:{NFSU2_TR(0x6d1c6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c6d:{NFSU2_TR(0x6d1c6d);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c6f:{NFSU2_TR(0x6d1c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c72:{NFSU2_TR(0x6d1c72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c73:{NFSU2_TR(0x6d1c73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c76:L6d1c76:{c.instructions+=2;NFSU2_TR(0x6d1c76);
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
B6d1c78:{NFSU2_TR(0x6d1c78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c7a:L6d1c7a:{c.instructions+=8;NFSU2_TR(0x6d1c7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c7d:{NFSU2_TR(0x6d1c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1c80:{NFSU2_TR(0x6d1c80);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d1c83:{NFSU2_TR(0x6d1c83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1c86:{NFSU2_TR(0x6d1c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1c88:{NFSU2_TR(0x6d1c88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1c89:{NFSU2_TR(0x6d1c89);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c8b:{NFSU2_TR(0x6d1c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c8eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c8e:L6d1c8e:{c.instructions+=2;NFSU2_TR(0x6d1c8e);
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
B6d1c90:{NFSU2_TR(0x6d1c90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c92:L6d1c92:{c.instructions+=3;NFSU2_TR(0x6d1c92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1c94:{NFSU2_TR(0x6d1c94);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c96:{NFSU2_TR(0x6d1c96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1c99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1c99:L6d1c99:{c.instructions+=2;NFSU2_TR(0x6d1c99);
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
B6d1c9b:{NFSU2_TR(0x6d1c9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1c9d:L6d1c9d:{c.instructions+=2;NFSU2_TR(0x6d1c9d);
__builtin_memmove((R+4),(R+24),4);
}
B6d1c9f:{NFSU2_TR(0x6d1c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1ca4ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d1ca4:L6d1ca4:{c.instructions+=2;NFSU2_TR(0x6d1ca4);
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
B6d1ca6:{NFSU2_TR(0x6d1ca6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1caa;}}
}
B6d1ca8:L6d1ca8:{c.instructions+=1;NFSU2_TR(0x6d1ca8);
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
B6d1caa:L6d1caa:{c.instructions+=1;NFSU2_TR(0x6d1caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d1cab:L6d1cab:{c.instructions+=4;NFSU2_TR(0x6d1cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1cac:{NFSU2_TR(0x6d1cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d1cad:{NFSU2_TR(0x6d1cad);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d1cae:{NFSU2_TR(0x6d1cae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1cb1:L6d1cb1:{c.instructions+=9;NFSU2_TR(0x6d1cb1);
__builtin_memmove((R+28),(R+28),4);
}
B6d1cb3:{NFSU2_TR(0x6d1cb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1cb4:{NFSU2_TR(0x6d1cb4);
__builtin_memmove((R+20),(R+16),4);
}
B6d1cb6:{NFSU2_TR(0x6d1cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6d1cb9:{NFSU2_TR(0x6d1cb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1cba:{NFSU2_TR(0x6d1cba);
__builtin_memmove((R+12),(R+4),4);
}
B6d1cbc:{NFSU2_TR(0x6d1cbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1cc3:{NFSU2_TR(0x6d1cc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1cc4:{NFSU2_TR(0x6d1cc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1d96;}}
}
B6d1cca:L6d1cca:{c.instructions+=3;NFSU2_TR(0x6d1cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1ccd:{NFSU2_TR(0x6d1ccd);
w1(R+512,u8((r4(R+0))<(u32(0x800ull))));
}
B6d1cd2:{NFSU2_TR(0x6d1cd2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d1ce0;}}
}
B6d1cd4:L6d1cd4:{c.instructions+=3;NFSU2_TR(0x6d1cd4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6d1cd9:{NFSU2_TR(0x6d1cd9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xa0000000ull))));
}
B6d1cde:{NFSU2_TR(0x6d1cde);
{goto L6d1d10;}
}
B6d1ce0:L6d1ce0:{c.instructions+=2;NFSU2_TR(0x6d1ce0);
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
}
B6d1ce5:{NFSU2_TR(0x6d1ce5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d1cf3;}}
}
B6d1ce7:L6d1ce7:{c.instructions+=3;NFSU2_TR(0x6d1ce7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6d1cec:{NFSU2_TR(0x6d1cec);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xb0000800ull))));
}
B6d1cf1:{NFSU2_TR(0x6d1cf1);
{goto L6d1d10;}
}
B6d1cf3:L6d1cf3:{c.instructions+=2;NFSU2_TR(0x6d1cf3);
w1(R+512,u8((r4(R+0))<(u32(0x1800ull))));
}
B6d1cf8:{NFSU2_TR(0x6d1cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d1d06;}}
}
B6d1cfa:L6d1cfa:{c.instructions+=3;NFSU2_TR(0x6d1cfa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6d1cff:{NFSU2_TR(0x6d1cff);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc0000800ull))));
}
B6d1d04:{NFSU2_TR(0x6d1d04);
{goto L6d1d10;}
}
B6d1d06:L6d1d06:{c.instructions+=2;NFSU2_TR(0x6d1d06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6d1d0b:{NFSU2_TR(0x6d1d0b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xd0000800ull))));
}
B6d1d10:L6d1d10:{c.instructions+=4;NFSU2_TR(0x6d1d10);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1d12:{NFSU2_TR(0x6d1d12);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d14:{NFSU2_TR(0x6d1d14);
__builtin_memmove((R+24),(R+0),4);
}
B6d1d16:{NFSU2_TR(0x6d1d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d18eau);}goto L6d18ea;}
}
B6d1d1b:L6d1d1b:{c.instructions+=2;NFSU2_TR(0x6d1d1b);
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
B6d1d1d:{NFSU2_TR(0x6d1d1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d23:L6d1d23:{c.instructions+=6;NFSU2_TR(0x6d1d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1d25:{NFSU2_TR(0x6d1d25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1d27:{NFSU2_TR(0x6d1d27);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1d2c:{NFSU2_TR(0x6d1d2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1d2d:{NFSU2_TR(0x6d1d2d);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d2f:{NFSU2_TR(0x6d1d2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1d32:L6d1d32:{c.instructions+=2;NFSU2_TR(0x6d1d32);
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
B6d1d34:{NFSU2_TR(0x6d1d34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d3a:L6d1d3a:{c.instructions+=4;NFSU2_TR(0x6d1d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1d3d:{NFSU2_TR(0x6d1d3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6d1d3f:{NFSU2_TR(0x6d1d3f);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d41:{NFSU2_TR(0x6d1d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d46ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1d46:L6d1d46:{c.instructions+=2;NFSU2_TR(0x6d1d46);
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
B6d1d48:{NFSU2_TR(0x6d1d48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d4e:L6d1d4e:{c.instructions+=3;NFSU2_TR(0x6d1d4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1d51:{NFSU2_TR(0x6d1d51);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d53:{NFSU2_TR(0x6d1d53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d58ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1d58:L6d1d58:{c.instructions+=2;NFSU2_TR(0x6d1d58);
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
B6d1d5a:{NFSU2_TR(0x6d1d5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d60:L6d1d60:{c.instructions+=3;NFSU2_TR(0x6d1d60);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1d63:{NFSU2_TR(0x6d1d63);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d65:{NFSU2_TR(0x6d1d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d6aull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1d6a:L6d1d6a:{c.instructions+=2;NFSU2_TR(0x6d1d6a);
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
B6d1d6c:{NFSU2_TR(0x6d1d6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d6e:L6d1d6e:{c.instructions+=3;NFSU2_TR(0x6d1d6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1d71:{NFSU2_TR(0x6d1d71);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d73:{NFSU2_TR(0x6d1d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d78ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1d78:L6d1d78:{c.instructions+=2;NFSU2_TR(0x6d1d78);
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
B6d1d7a:{NFSU2_TR(0x6d1d7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d7c:L6d1d7c:{c.instructions+=3;NFSU2_TR(0x6d1d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1d7e:{NFSU2_TR(0x6d1d7e);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d80:{NFSU2_TR(0x6d1d80);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d83ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1d83:L6d1d83:{c.instructions+=2;NFSU2_TR(0x6d1d83);
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
B6d1d85:{NFSU2_TR(0x6d1d85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d87:L6d1d87:{c.instructions+=2;NFSU2_TR(0x6d1d87);
__builtin_memmove((R+4),(R+12),4);
}
B6d1d89:{NFSU2_TR(0x6d1d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1d8eull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d1d8e:L6d1d8e:{c.instructions+=2;NFSU2_TR(0x6d1d8e);
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
B6d1d90:{NFSU2_TR(0x6d1d90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de8;}}
}
B6d1d92:L6d1d92:{c.instructions+=2;NFSU2_TR(0x6d1d92);
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
B6d1d94:{NFSU2_TR(0x6d1d94);
{goto L6d1de8;}
}
B6d1d96:L6d1d96:{c.instructions+=6;NFSU2_TR(0x6d1d96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1d97:{NFSU2_TR(0x6d1d97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1d9a:{NFSU2_TR(0x6d1d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d1d9d:{NFSU2_TR(0x6d1d9d);
u8 U[4];
w4(U+0,u32(0x7bf8d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1da2:{NFSU2_TR(0x6d1da2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1da3:{NFSU2_TR(0x6d1da3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1da8ull));
TAIL_STATIC(0x75c784u,75c);
}
B6d1da8:L6d1da8:{c.instructions+=10;NFSU2_TR(0x6d1da8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d1dab:{NFSU2_TR(0x6d1dab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d1dad:{NFSU2_TR(0x6d1dad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d1dae:{NFSU2_TR(0x6d1dae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1daf:{NFSU2_TR(0x6d1daf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1db2:{NFSU2_TR(0x6d1db2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d1db5:{NFSU2_TR(0x6d1db5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1dbb:{NFSU2_TR(0x6d1dbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1dbc:{NFSU2_TR(0x6d1dbc);
__builtin_memmove((R+4),(R+24),4);
}
B6d1dbe:{NFSU2_TR(0x6d1dbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1dc3ull));
TAIL_STATIC(0x686b20u,686);
}
B6d1dc3:L6d1dc3:{c.instructions+=2;NFSU2_TR(0x6d1dc3);
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
B6d1dc5:{NFSU2_TR(0x6d1dc5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1de7;}}
}
B6d1dc7:L6d1dc7:{c.instructions+=4;NFSU2_TR(0x6d1dc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d1dca:{NFSU2_TR(0x6d1dca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1dcb:{NFSU2_TR(0x6d1dcb);
__builtin_memmove((R+4),(R+24),4);
}
B6d1dcd:{NFSU2_TR(0x6d1dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1dd2ull));
TAIL_STATIC(0x684f81u,684);
}
B6d1dd2:L6d1dd2:{c.instructions+=9;NFSU2_TR(0x6d1dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1dd5:{NFSU2_TR(0x6d1dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1dd8:{NFSU2_TR(0x6d1dd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d1ddb:{NFSU2_TR(0x6d1ddb);
u8 U[40];
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
}
B6d1ddc:{NFSU2_TR(0x6d1ddc);
u8 U[40];
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
}
B6d1ddd:{NFSU2_TR(0x6d1ddd);
u8 U[40];
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
}
B6d1dde:{NFSU2_TR(0x6d1dde);
u8 U[40];
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
}
B6d1ddf:{NFSU2_TR(0x6d1ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1de5:{NFSU2_TR(0x6d1de5);
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
B6d1de7:L6d1de7:{c.instructions+=1;NFSU2_TR(0x6d1de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d1de8:L6d1de8:{c.instructions+=4;NFSU2_TR(0x6d1de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1de9:{NFSU2_TR(0x6d1de9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d1dea:{NFSU2_TR(0x6d1dea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d1deb:{NFSU2_TR(0x6d1deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1dee:L6d1dee:{c.instructions+=9;NFSU2_TR(0x6d1dee);
__builtin_memmove((R+28),(R+28),4);
}
B6d1df0:{NFSU2_TR(0x6d1df0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1df1:{NFSU2_TR(0x6d1df1);
__builtin_memmove((R+20),(R+16),4);
}
B6d1df3:{NFSU2_TR(0x6d1df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6d1df6:{NFSU2_TR(0x6d1df6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1df7:{NFSU2_TR(0x6d1df7);
__builtin_memmove((R+12),(R+4),4);
}
B6d1df9:{NFSU2_TR(0x6d1df9);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d1e00:{NFSU2_TR(0x6d1e00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1e01:{NFSU2_TR(0x6d1e01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1e98;}}
}
B6d1e07:L6d1e07:{c.instructions+=2;NFSU2_TR(0x6d1e07);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1e09:{NFSU2_TR(0x6d1e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d18eau);}goto L6d18ea;}
}
B6d1e0e:L6d1e0e:{c.instructions+=2;NFSU2_TR(0x6d1e0e);
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
B6d1e10:{NFSU2_TR(0x6d1e10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e16:L6d1e16:{c.instructions+=9;NFSU2_TR(0x6d1e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1e19:{NFSU2_TR(0x6d1e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1e1b:{NFSU2_TR(0x6d1e1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1e1d:{NFSU2_TR(0x6d1e1d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B6d1e23:{NFSU2_TR(0x6d1e23);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xf0000000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d1e29:{NFSU2_TR(0x6d1e29);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1e2e:{NFSU2_TR(0x6d1e2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1e2f:{NFSU2_TR(0x6d1e2f);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e31:{NFSU2_TR(0x6d1e31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1e34:L6d1e34:{c.instructions+=2;NFSU2_TR(0x6d1e34);
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
B6d1e36:{NFSU2_TR(0x6d1e36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e3c:L6d1e3c:{c.instructions+=4;NFSU2_TR(0x6d1e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1e3f:{NFSU2_TR(0x6d1e3f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6d1e41:{NFSU2_TR(0x6d1e41);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e43:{NFSU2_TR(0x6d1e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e48ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1e48:L6d1e48:{c.instructions+=2;NFSU2_TR(0x6d1e48);
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
B6d1e4a:{NFSU2_TR(0x6d1e4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e50:L6d1e50:{c.instructions+=3;NFSU2_TR(0x6d1e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1e53:{NFSU2_TR(0x6d1e53);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e55:{NFSU2_TR(0x6d1e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e5aull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1e5a:L6d1e5a:{c.instructions+=2;NFSU2_TR(0x6d1e5a);
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
B6d1e5c:{NFSU2_TR(0x6d1e5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e62:L6d1e62:{c.instructions+=3;NFSU2_TR(0x6d1e62);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1e65:{NFSU2_TR(0x6d1e65);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e67:{NFSU2_TR(0x6d1e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e6cull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1e6c:L6d1e6c:{c.instructions+=2;NFSU2_TR(0x6d1e6c);
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
B6d1e6e:{NFSU2_TR(0x6d1e6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e70:L6d1e70:{c.instructions+=3;NFSU2_TR(0x6d1e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1e73:{NFSU2_TR(0x6d1e73);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e75:{NFSU2_TR(0x6d1e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e7aull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6d1e7a:L6d1e7a:{c.instructions+=2;NFSU2_TR(0x6d1e7a);
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
B6d1e7c:{NFSU2_TR(0x6d1e7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e7e:L6d1e7e:{c.instructions+=3;NFSU2_TR(0x6d1e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1e80:{NFSU2_TR(0x6d1e80);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e82:{NFSU2_TR(0x6d1e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1e85:L6d1e85:{c.instructions+=2;NFSU2_TR(0x6d1e85);
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
B6d1e87:{NFSU2_TR(0x6d1e87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e89:L6d1e89:{c.instructions+=2;NFSU2_TR(0x6d1e89);
__builtin_memmove((R+4),(R+12),4);
}
B6d1e8b:{NFSU2_TR(0x6d1e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1e90ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d1e90:L6d1e90:{c.instructions+=2;NFSU2_TR(0x6d1e90);
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
B6d1e92:{NFSU2_TR(0x6d1e92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1eea;}}
}
B6d1e94:L6d1e94:{c.instructions+=2;NFSU2_TR(0x6d1e94);
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
B6d1e96:{NFSU2_TR(0x6d1e96);
{goto L6d1eea;}
}
B6d1e98:L6d1e98:{c.instructions+=6;NFSU2_TR(0x6d1e98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1e99:{NFSU2_TR(0x6d1e99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1e9c:{NFSU2_TR(0x6d1e9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d1e9f:{NFSU2_TR(0x6d1e9f);
u8 U[4];
w4(U+0,u32(0x7bf8dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ea4:{NFSU2_TR(0x6d1ea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ea5:{NFSU2_TR(0x6d1ea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1eaaull));
TAIL_STATIC(0x75c784u,75c);
}
B6d1eaa:L6d1eaa:{c.instructions+=10;NFSU2_TR(0x6d1eaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d1ead:{NFSU2_TR(0x6d1ead);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d1eaf:{NFSU2_TR(0x6d1eaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d1eb0:{NFSU2_TR(0x6d1eb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1eb1:{NFSU2_TR(0x6d1eb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1eb4:{NFSU2_TR(0x6d1eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d1eb7:{NFSU2_TR(0x6d1eb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1ebd:{NFSU2_TR(0x6d1ebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ebe:{NFSU2_TR(0x6d1ebe);
__builtin_memmove((R+4),(R+24),4);
}
B6d1ec0:{NFSU2_TR(0x6d1ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1ec5ull));
TAIL_STATIC(0x686b20u,686);
}
B6d1ec5:L6d1ec5:{c.instructions+=2;NFSU2_TR(0x6d1ec5);
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
B6d1ec7:{NFSU2_TR(0x6d1ec7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1ee9;}}
}
B6d1ec9:L6d1ec9:{c.instructions+=4;NFSU2_TR(0x6d1ec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d1ecc:{NFSU2_TR(0x6d1ecc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ecd:{NFSU2_TR(0x6d1ecd);
__builtin_memmove((R+4),(R+24),4);
}
B6d1ecf:{NFSU2_TR(0x6d1ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1ed4ull));
TAIL_STATIC(0x684f81u,684);
}
B6d1ed4:L6d1ed4:{c.instructions+=9;NFSU2_TR(0x6d1ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d1ed7:{NFSU2_TR(0x6d1ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d1eda:{NFSU2_TR(0x6d1eda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d1edd:{NFSU2_TR(0x6d1edd);
u8 U[40];
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
}
B6d1ede:{NFSU2_TR(0x6d1ede);
u8 U[40];
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
}
B6d1edf:{NFSU2_TR(0x6d1edf);
u8 U[40];
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
}
B6d1ee0:{NFSU2_TR(0x6d1ee0);
u8 U[40];
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
}
B6d1ee1:{NFSU2_TR(0x6d1ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d1ee7:{NFSU2_TR(0x6d1ee7);
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
B6d1ee9:L6d1ee9:{c.instructions+=1;NFSU2_TR(0x6d1ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d1eea:L6d1eea:{c.instructions+=4;NFSU2_TR(0x6d1eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1eeb:{NFSU2_TR(0x6d1eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d1eec:{NFSU2_TR(0x6d1eec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d1eed:{NFSU2_TR(0x6d1eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1ef0:L6d1ef0:{c.instructions+=5;NFSU2_TR(0x6d1ef0);
__builtin_memmove((R+28),(R+28),4);
}
B6d1ef2:{NFSU2_TR(0x6d1ef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ef3:{NFSU2_TR(0x6d1ef3);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1ef5:{NFSU2_TR(0x6d1ef5);
__builtin_memmove((R+24),(R+4),4);
}
B6d1ef7:{NFSU2_TR(0x6d1ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1efcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d18eau);}goto L6d18ea;}
}
B6d1efc:L6d1efc:{c.instructions+=2;NFSU2_TR(0x6d1efc);
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
B6d1efe:{NFSU2_TR(0x6d1efe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1f18;}}
}
B6d1f00:L6d1f00:{c.instructions+=3;NFSU2_TR(0x6d1f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1f02:{NFSU2_TR(0x6d1f02);
__builtin_memmove((R+4),(R+24),4);
}
B6d1f04:{NFSU2_TR(0x6d1f04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1f07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1f07:L6d1f07:{c.instructions+=2;NFSU2_TR(0x6d1f07);
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
B6d1f09:{NFSU2_TR(0x6d1f09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1f18;}}
}
B6d1f0b:L6d1f0b:{c.instructions+=2;NFSU2_TR(0x6d1f0b);
__builtin_memmove((R+4),(R+24),4);
}
B6d1f0d:{NFSU2_TR(0x6d1f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1f12ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d1f12:L6d1f12:{c.instructions+=2;NFSU2_TR(0x6d1f12);
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
B6d1f14:{NFSU2_TR(0x6d1f14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1f18;}}
}
B6d1f16:L6d1f16:{c.instructions+=1;NFSU2_TR(0x6d1f16);
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
B6d1f18:L6d1f18:{c.instructions+=2;NFSU2_TR(0x6d1f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1f19:{NFSU2_TR(0x6d1f19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1f1a:L6d1f1a:{c.instructions+=5;NFSU2_TR(0x6d1f1a);
__builtin_memmove((R+28),(R+28),4);
}
B6d1f1c:{NFSU2_TR(0x6d1f1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f1d:{NFSU2_TR(0x6d1f1d);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f1f:{NFSU2_TR(0x6d1f1f);
__builtin_memmove((R+24),(R+4),4);
}
B6d1f21:{NFSU2_TR(0x6d1f21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1f26ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d18eau);}goto L6d18ea;}
}
B6d1f26:L6d1f26:{c.instructions+=2;NFSU2_TR(0x6d1f26);
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
B6d1f28:{NFSU2_TR(0x6d1f28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1f42;}}
}
B6d1f2a:L6d1f2a:{c.instructions+=3;NFSU2_TR(0x6d1f2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1f2c:{NFSU2_TR(0x6d1f2c);
__builtin_memmove((R+4),(R+24),4);
}
B6d1f2e:{NFSU2_TR(0x6d1f2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1f31ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1f31:L6d1f31:{c.instructions+=2;NFSU2_TR(0x6d1f31);
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
B6d1f33:{NFSU2_TR(0x6d1f33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1f42;}}
}
B6d1f35:L6d1f35:{c.instructions+=2;NFSU2_TR(0x6d1f35);
__builtin_memmove((R+4),(R+24),4);
}
B6d1f37:{NFSU2_TR(0x6d1f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1f3cull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d1f3c:L6d1f3c:{c.instructions+=2;NFSU2_TR(0x6d1f3c);
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
B6d1f3e:{NFSU2_TR(0x6d1f3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d1f42;}}
}
B6d1f40:L6d1f40:{c.instructions+=1;NFSU2_TR(0x6d1f40);
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
B6d1f42:L6d1f42:{c.instructions+=2;NFSU2_TR(0x6d1f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d1f43:{NFSU2_TR(0x6d1f43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d1f44:L6d1f44:{c.instructions+=16;NFSU2_TR(0x6d1f44);
__builtin_memmove((R+28),(R+28),4);
}
B6d1f46:{NFSU2_TR(0x6d1f46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f47:{NFSU2_TR(0x6d1f47);
__builtin_memmove((R+20),(R+16),4);
}
B6d1f49:{NFSU2_TR(0x6d1f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6d1f4c:{NFSU2_TR(0x6d1f4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f4d:{NFSU2_TR(0x6d1f4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f4e:{NFSU2_TR(0x6d1f4e);
__builtin_memmove((R+24),(R+4),4);
}
B6d1f50:{NFSU2_TR(0x6d1f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d1f56:{NFSU2_TR(0x6d1f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1f58:{NFSU2_TR(0x6d1f58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f59:{NFSU2_TR(0x6d1f59);
__builtin_memmove((R+28),(R+0),4);
}
B6d1f5b:{NFSU2_TR(0x6d1f5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6d1f60:{NFSU2_TR(0x6d1f60);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d1f62:{NFSU2_TR(0x6d1f62);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6d1f68:{NFSU2_TR(0x6d1f68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1f6d:{NFSU2_TR(0x6d1f6d);
if(r1(R+518)){{goto L6d1f97;}}
}
B6d1f6f:L6d1f6f:{c.instructions+=2;NFSU2_TR(0x6d1f6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1f74:{NFSU2_TR(0x6d1f74);
if(r1(R+518)){{goto L6d1f93;}}
}
B6d1f76:L6d1f76:{c.instructions+=2;NFSU2_TR(0x6d1f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1f7b:{NFSU2_TR(0x6d1f7b);
if(r1(R+518)){{goto L6d1f97;}}
}
B6d1f7d:L6d1f7d:{c.instructions+=2;NFSU2_TR(0x6d1f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1f82:{NFSU2_TR(0x6d1f82);
if(r1(R+518)){{goto L6d1f8f;}}
}
B6d1f84:L6d1f84:{c.instructions+=2;NFSU2_TR(0x6d1f84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d1f89:{NFSU2_TR(0x6d1f89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d1f9a;}}
}
B6d1f8b:L6d1f8b:{c.instructions+=2;NFSU2_TR(0x6d1f8b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f8d:{NFSU2_TR(0x6d1f8d);
{goto L6d1f99;}
}
B6d1f8f:L6d1f8f:{c.instructions+=2;NFSU2_TR(0x6d1f8f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f91:{NFSU2_TR(0x6d1f91);
{goto L6d1f99;}
}
B6d1f93:L6d1f93:{c.instructions+=2;NFSU2_TR(0x6d1f93);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f95:{NFSU2_TR(0x6d1f95);
{goto L6d1f99;}
}
B6d1f97:L6d1f97:{c.instructions+=1;NFSU2_TR(0x6d1f97);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1f99:L6d1f99:{c.instructions+=1;NFSU2_TR(0x6d1f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1f9a:L6d1f9a:{c.instructions+=5;NFSU2_TR(0x6d1f9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d1f9d:{NFSU2_TR(0x6d1f9d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2dull))));
}
B6d1fa0:{NFSU2_TR(0x6d1fa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1fa1:{NFSU2_TR(0x6d1fa1);
__builtin_memmove((R+4),(R+24),4);
}
B6d1fa3:{NFSU2_TR(0x6d1fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1fa8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d18eau);}goto L6d18ea;}
}
B6d1fa8:L6d1fa8:{c.instructions+=2;NFSU2_TR(0x6d1fa8);
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
B6d1faa:{NFSU2_TR(0x6d1faa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d2085u,6d2);}
}
B6d1fb0:L6d1fb0:{c.instructions+=12;NFSU2_TR(0x6d1fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d1fb3:{NFSU2_TR(0x6d1fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1fb5:{NFSU2_TR(0x6d1fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1fb8:{NFSU2_TR(0x6d1fb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1fb9:{NFSU2_TR(0x6d1fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1fbc:{NFSU2_TR(0x6d1fbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1fbd:{NFSU2_TR(0x6d1fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1fc3:{NFSU2_TR(0x6d1fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1fc6:{NFSU2_TR(0x6d1fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d1fc8:{NFSU2_TR(0x6d1fc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d1fcb:{NFSU2_TR(0x6d1fcb);
__builtin_memmove((R+4),(R+24),4);
}
B6d1fcd:{NFSU2_TR(0x6d1fcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1fd0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1fd0:L6d1fd0:{c.instructions+=2;NFSU2_TR(0x6d1fd0);
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
B6d1fd2:{NFSU2_TR(0x6d1fd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d2085u,6d2);}
}
B6d1fd8:L6d1fd8:{c.instructions+=9;NFSU2_TR(0x6d1fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1fda:{NFSU2_TR(0x6d1fda);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d1fdd:{NFSU2_TR(0x6d1fdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1fde:{NFSU2_TR(0x6d1fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d1fe4:{NFSU2_TR(0x6d1fe4);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1fe9:{NFSU2_TR(0x6d1fe9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d1fea:{NFSU2_TR(0x6d1fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1fed:{NFSU2_TR(0x6d1fed);
__builtin_memmove((R+4),(R+24),4);
}
B6d1fef:{NFSU2_TR(0x6d1fef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d1ff2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d1ff2:L6d1ff2:{c.instructions+=2;NFSU2_TR(0x6d1ff2);
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
B6d1ff4:{NFSU2_TR(0x6d1ff4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d2085u,6d2);}
}
B6d1ffa:L6d1ffa:{c.instructions+=3;NFSU2_TR(0x6d1ffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d1ffd:{NFSU2_TR(0x6d1ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d1fff:{NFSU2_TR(0x6d1fff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
TAIL_STATIC(0x6d2002u,6d2);
}
XIT:NFSU2_TR_EXIT(0x6d1,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
