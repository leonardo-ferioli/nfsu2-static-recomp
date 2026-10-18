#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_53f(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_56f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_600(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x601,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x601,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_601(u8* __restrict R,Cpu& c);
u32 page_601(Cpu& c){return body_601(c.regs.data(),c);}
__attribute__((noinline)) u32 body_601(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x601003:goto L601003;
case 0x601004:c.instructions+=2;goto B601004;
case 0x601005:c.instructions+=1;goto B601005;
case 0x60100a:goto L60100a;
case 0x60100c:c.instructions+=3;goto B60100c;
case 0x60100f:c.instructions+=2;goto B60100f;
case 0x601011:c.instructions+=1;goto B601011;
case 0x601013:goto L601013;
case 0x601014:c.instructions+=4;goto B601014;
case 0x601015:c.instructions+=3;goto B601015;
case 0x601016:c.instructions+=2;goto B601016;
case 0x601017:c.instructions+=1;goto B601017;
case 0x601020:goto L601020;
case 0x601025:c.instructions+=4;goto B601025;
case 0x601026:c.instructions+=3;goto B601026;
case 0x601027:c.instructions+=2;goto B601027;
case 0x601029:c.instructions+=1;goto B601029;
case 0x60102e:goto L60102e;
case 0x601031:c.instructions+=2;goto B601031;
case 0x601033:c.instructions+=1;goto B601033;
case 0x601035:goto L601035;
case 0x601039:c.instructions+=4;goto B601039;
case 0x60103d:c.instructions+=3;goto B60103d;
case 0x601040:c.instructions+=2;goto B601040;
case 0x601043:c.instructions+=1;goto B601043;
case 0x601045:goto L601045;
case 0x601047:goto L601047;
case 0x60104a:c.instructions+=8;goto B60104a;
case 0x60104d:c.instructions+=7;goto B60104d;
case 0x60104f:c.instructions+=6;goto B60104f;
case 0x601052:c.instructions+=5;goto B601052;
case 0x601055:c.instructions+=4;goto B601055;
case 0x601057:c.instructions+=3;goto B601057;
case 0x60105a:c.instructions+=2;goto B60105a;
case 0x60105c:c.instructions+=1;goto B60105c;
case 0x60105e:goto L60105e;
case 0x601060:c.instructions+=1;goto B601060;
case 0x601065:goto L601065;
case 0x601066:c.instructions+=1;goto B601066;
case 0x601070:goto L601070;
case 0x601072:c.instructions+=28;goto B601072;
case 0x601077:c.instructions+=27;goto B601077;
case 0x60107d:c.instructions+=26;goto B60107d;
case 0x60107e:c.instructions+=25;goto B60107e;
case 0x601085:c.instructions+=24;goto B601085;
case 0x601086:c.instructions+=23;goto B601086;
case 0x601087:c.instructions+=22;goto B601087;
case 0x601088:c.instructions+=21;goto B601088;
case 0x60108a:c.instructions+=20;goto B60108a;
case 0x60108c:c.instructions+=19;goto B60108c;
case 0x60108f:c.instructions+=18;goto B60108f;
case 0x601092:c.instructions+=17;goto B601092;
case 0x601096:c.instructions+=16;goto B601096;
case 0x601098:c.instructions+=15;goto B601098;
case 0x60109b:c.instructions+=14;goto B60109b;
case 0x60109c:c.instructions+=13;goto B60109c;
case 0x6010a1:c.instructions+=12;goto B6010a1;
case 0x6010a3:c.instructions+=11;goto B6010a3;
case 0x6010a5:c.instructions+=10;goto B6010a5;
case 0x6010a9:c.instructions+=9;goto B6010a9;
case 0x6010ac:c.instructions+=8;goto B6010ac;
case 0x6010ae:c.instructions+=7;goto B6010ae;
case 0x6010b1:c.instructions+=6;goto B6010b1;
case 0x6010b4:c.instructions+=5;goto B6010b4;
case 0x6010b7:c.instructions+=4;goto B6010b7;
case 0x6010ba:c.instructions+=3;goto B6010ba;
case 0x6010bd:c.instructions+=2;goto B6010bd;
case 0x6010c0:c.instructions+=1;goto B6010c0;
case 0x6010c5:goto L6010c5;
case 0x6010ca:c.instructions+=22;goto B6010ca;
case 0x6010cd:c.instructions+=21;goto B6010cd;
case 0x6010d0:c.instructions+=20;goto B6010d0;
case 0x6010d5:c.instructions+=19;goto B6010d5;
case 0x6010d8:c.instructions+=18;goto B6010d8;
case 0x6010db:c.instructions+=17;goto B6010db;
case 0x6010de:c.instructions+=16;goto B6010de;
case 0x6010e1:c.instructions+=15;goto B6010e1;
case 0x6010e4:c.instructions+=14;goto B6010e4;
case 0x6010e7:c.instructions+=13;goto B6010e7;
case 0x6010eb:c.instructions+=12;goto B6010eb;
case 0x6010ee:c.instructions+=11;goto B6010ee;
case 0x6010f1:c.instructions+=10;goto B6010f1;
case 0x6010f4:c.instructions+=9;goto B6010f4;
case 0x6010f7:c.instructions+=8;goto B6010f7;
case 0x6010fa:c.instructions+=7;goto B6010fa;
case 0x6010fd:c.instructions+=6;goto B6010fd;
case 0x6010ff:c.instructions+=5;goto B6010ff;
case 0x601100:c.instructions+=4;goto B601100;
case 0x601101:c.instructions+=3;goto B601101;
case 0x601108:c.instructions+=2;goto B601108;
case 0x60110b:c.instructions+=1;goto B60110b;
case 0x601110:goto L601110;
case 0x601116:c.instructions+=14;goto B601116;
case 0x601118:c.instructions+=13;goto B601118;
case 0x60111d:c.instructions+=12;goto B60111d;
case 0x60111e:c.instructions+=11;goto B60111e;
case 0x601122:c.instructions+=10;goto B601122;
case 0x601129:c.instructions+=9;goto B601129;
case 0x60112a:c.instructions+=8;goto B60112a;
case 0x60112b:c.instructions+=7;goto B60112b;
case 0x60112d:c.instructions+=6;goto B60112d;
case 0x60112e:c.instructions+=5;goto B60112e;
case 0x601131:c.instructions+=4;goto B601131;
case 0x601134:c.instructions+=3;goto B601134;
case 0x601135:c.instructions+=2;goto B601135;
case 0x601137:c.instructions+=1;goto B601137;
case 0x60113c:goto L60113c;
case 0x60113e:c.instructions+=7;goto B60113e;
case 0x601144:c.instructions+=6;goto B601144;
case 0x601147:c.instructions+=5;goto B601147;
case 0x60114a:c.instructions+=4;goto B60114a;
case 0x60114c:c.instructions+=3;goto B60114c;
case 0x60114f:c.instructions+=2;goto B60114f;
case 0x601152:c.instructions+=1;goto B601152;
case 0x601157:goto L601157;
case 0x60115a:c.instructions+=16;goto B60115a;
case 0x60115d:c.instructions+=15;goto B60115d;
case 0x60115f:c.instructions+=14;goto B60115f;
case 0x601164:c.instructions+=13;goto B601164;
case 0x60116a:c.instructions+=12;goto B60116a;
case 0x60116c:c.instructions+=11;goto B60116c;
case 0x60116f:c.instructions+=10;goto B60116f;
case 0x601172:c.instructions+=9;goto B601172;
case 0x601175:c.instructions+=8;goto B601175;
case 0x601177:c.instructions+=7;goto B601177;
case 0x60117a:c.instructions+=6;goto B60117a;
case 0x60117d:c.instructions+=5;goto B60117d;
case 0x60117f:c.instructions+=4;goto B60117f;
case 0x601182:c.instructions+=3;goto B601182;
case 0x601184:c.instructions+=2;goto B601184;
case 0x601185:c.instructions+=1;goto B601185;
case 0x60118a:goto L60118a;
case 0x60118d:c.instructions+=4;goto B60118d;
case 0x601190:c.instructions+=3;goto B601190;
case 0x601192:c.instructions+=2;goto B601192;
case 0x601195:c.instructions+=1;goto B601195;
case 0x601197:goto L601197;
case 0x60119d:c.instructions+=1;goto B60119d;
case 0x60119f:goto L60119f;
case 0x6011a2:c.instructions+=5;goto B6011a2;
case 0x6011a4:c.instructions+=4;goto B6011a4;
case 0x6011aa:c.instructions+=3;goto B6011aa;
case 0x6011ad:c.instructions+=2;goto B6011ad;
case 0x6011b3:c.instructions+=1;goto B6011b3;
case 0x6011b9:goto L6011b9;
case 0x6011bc:c.instructions+=2;goto B6011bc;
case 0x6011be:c.instructions+=1;goto B6011be;
case 0x6011c0:goto L6011c0;
case 0x6011c2:c.instructions+=2;goto B6011c2;
case 0x6011c4:c.instructions+=1;goto B6011c4;
case 0x6011c6:goto L6011c6;
case 0x6011c9:goto L6011c9;
case 0x6011cf:c.instructions+=2;goto B6011cf;
case 0x6011d0:c.instructions+=1;goto B6011d0;
case 0x6011d5:goto L6011d5;
case 0x6011d7:c.instructions+=5;goto B6011d7;
case 0x6011da:c.instructions+=4;goto B6011da;
case 0x6011de:c.instructions+=3;goto B6011de;
case 0x6011e0:c.instructions+=2;goto B6011e0;
case 0x6011e4:c.instructions+=1;goto B6011e4;
case 0x6011e6:goto L6011e6;
case 0x6011eb:goto L6011eb;
case 0x6011ee:c.instructions+=4;goto B6011ee;
case 0x6011ef:c.instructions+=3;goto B6011ef;
case 0x6011f0:c.instructions+=2;goto B6011f0;
case 0x6011f2:c.instructions+=1;goto B6011f2;
case 0x6011f7:goto L6011f7;
case 0x6011f9:goto L6011f9;
case 0x6011fb:goto L6011fb;
case 0x601201:c.instructions+=4;goto B601201;
case 0x601203:c.instructions+=3;goto B601203;
case 0x60120b:c.instructions+=2;goto B60120b;
case 0x60120e:c.instructions+=1;goto B60120e;
case 0x601210:goto L601210;
case 0x601212:c.instructions+=1;goto B601212;
case 0x601217:goto L601217;
case 0x601218:c.instructions+=1;goto B601218;
case 0x60121d:goto L60121d;
case 0x601220:c.instructions+=1;goto B601220;
case 0x601226:goto L601226;
case 0x601229:c.instructions+=2;goto B601229;
case 0x60122f:c.instructions+=1;goto B60122f;
case 0x601231:goto L601231;
case 0x601236:c.instructions+=1;goto B601236;
case 0x60123b:goto L60123b;
case 0x60123e:c.instructions+=4;goto B60123e;
case 0x601242:c.instructions+=3;goto B601242;
case 0x601244:c.instructions+=2;goto B601244;
case 0x60124c:c.instructions+=1;goto B60124c;
case 0x60124e:goto L60124e;
case 0x60124f:c.instructions+=2;goto B60124f;
case 0x601251:c.instructions+=1;goto B601251;
case 0x601256:goto L601256;
case 0x601258:goto L601258;
case 0x60125a:goto L60125a;
case 0x601262:c.instructions+=1;goto B601262;
case 0x601268:goto L601268;
case 0x60126e:c.instructions+=1;goto B60126e;
case 0x601270:goto L601270;
case 0x601272:c.instructions+=1;goto B601272;
case 0x601277:goto L601277;
case 0x60127a:c.instructions+=3;goto B60127a;
case 0x60127b:c.instructions+=2;goto B60127b;
case 0x60127d:c.instructions+=1;goto B60127d;
case 0x601282:goto L601282;
case 0x601284:c.instructions+=1;goto B601284;
case 0x601289:goto L601289;
case 0x60128c:c.instructions+=3;goto B60128c;
case 0x60128d:c.instructions+=2;goto B60128d;
case 0x60128f:c.instructions+=1;goto B60128f;
case 0x601294:goto L601294;
case 0x601295:c.instructions+=2;goto B601295;
case 0x601297:c.instructions+=1;goto B601297;
case 0x60129c:goto L60129c;
case 0x6012a0:c.instructions+=6;goto B6012a0;
case 0x6012a1:c.instructions+=5;goto B6012a1;
case 0x6012a2:c.instructions+=4;goto B6012a2;
case 0x6012a9:c.instructions+=3;goto B6012a9;
case 0x6012aa:c.instructions+=2;goto B6012aa;
case 0x6012ad:c.instructions+=1;goto B6012ad;
case 0x6012b0:goto L6012b0;
case 0x6012b3:c.instructions+=4;goto B6012b3;
case 0x6012b4:c.instructions+=3;goto B6012b4;
case 0x6012b5:c.instructions+=2;goto B6012b5;
case 0x6012b7:c.instructions+=1;goto B6012b7;
case 0x6012bc:goto L6012bc;
case 0x6012c1:goto L6012c1;
case 0x6012c4:c.instructions+=4;goto B6012c4;
case 0x6012c8:c.instructions+=3;goto B6012c8;
case 0x6012ca:c.instructions+=2;goto B6012ca;
case 0x6012cb:c.instructions+=1;goto B6012cb;
case 0x6012ce:goto L6012ce;
case 0x6012d2:c.instructions+=4;goto B6012d2;
case 0x6012d8:c.instructions+=3;goto B6012d8;
case 0x6012d9:c.instructions+=2;goto B6012d9;
case 0x6012db:c.instructions+=1;goto B6012db;
case 0x6012e0:goto L6012e0;
case 0x6012e4:c.instructions+=3;goto B6012e4;
case 0x6012e5:c.instructions+=2;goto B6012e5;
case 0x6012e7:c.instructions+=1;goto B6012e7;
case 0x6012ec:goto L6012ec;
case 0x6012ef:c.instructions+=3;goto B6012ef;
case 0x6012f5:c.instructions+=2;goto B6012f5;
case 0x6012f7:c.instructions+=1;goto B6012f7;
case 0x6012f9:goto L6012f9;
case 0x6012fe:goto L6012fe;
case 0x601304:c.instructions+=2;goto B601304;
case 0x601306:c.instructions+=1;goto B601306;
case 0x60130c:goto L60130c;
case 0x60130f:c.instructions+=3;goto B60130f;
case 0x601312:c.instructions+=2;goto B601312;
case 0x601315:c.instructions+=1;goto B601315;
case 0x601317:goto L601317;
case 0x60131d:c.instructions+=2;goto B60131d;
case 0x60131f:c.instructions+=1;goto B60131f;
case 0x601321:goto L601321;
case 0x601324:c.instructions+=1;goto B601324;
case 0x601329:goto L601329;
case 0x60132d:c.instructions+=5;goto B60132d;
case 0x60132e:c.instructions+=4;goto B60132e;
case 0x601338:c.instructions+=3;goto B601338;
case 0x601339:c.instructions+=2;goto B601339;
case 0x60133c:c.instructions+=1;goto B60133c;
case 0x60133f:goto L60133f;
case 0x601342:c.instructions+=2;goto B601342;
case 0x601343:c.instructions+=1;goto B601343;
case 0x601345:goto L601345;
case 0x601348:c.instructions+=3;goto B601348;
case 0x601349:c.instructions+=2;goto B601349;
case 0x60134f:c.instructions+=1;goto B60134f;
case 0x601354:goto L601354;
case 0x60135a:c.instructions+=7;goto B60135a;
case 0x601360:c.instructions+=6;goto B601360;
case 0x601362:c.instructions+=5;goto B601362;
case 0x601364:c.instructions+=4;goto B601364;
case 0x601366:c.instructions+=3;goto B601366;
case 0x601367:c.instructions+=2;goto B601367;
case 0x601369:c.instructions+=1;goto B601369;
case 0x60136e:goto L60136e;
case 0x601370:c.instructions+=1;goto B601370;
case 0x601376:goto L601376;
case 0x60137c:c.instructions+=3;goto B60137c;
case 0x601382:c.instructions+=2;goto B601382;
case 0x601383:c.instructions+=1;goto B601383;
case 0x601388:goto L601388;
case 0x60138c:c.instructions+=6;goto B60138c;
case 0x60138d:c.instructions+=5;goto B60138d;
case 0x60138e:c.instructions+=4;goto B60138e;
case 0x601398:c.instructions+=3;goto B601398;
case 0x601399:c.instructions+=2;goto B601399;
case 0x60139c:c.instructions+=1;goto B60139c;
case 0x60139f:goto L60139f;
case 0x6013a2:c.instructions+=1;goto B6013a2;
case 0x6013a7:goto L6013a7;
case 0x6013ad:c.instructions+=8;goto B6013ad;
case 0x6013b3:c.instructions+=7;goto B6013b3;
case 0x6013b6:c.instructions+=6;goto B6013b6;
case 0x6013b9:c.instructions+=5;goto B6013b9;
case 0x6013bb:c.instructions+=4;goto B6013bb;
case 0x6013c3:c.instructions+=3;goto B6013c3;
case 0x6013c5:c.instructions+=2;goto B6013c5;
case 0x6013c8:c.instructions+=1;goto B6013c8;
case 0x6013ca:goto L6013ca;
case 0x6013ce:c.instructions+=1;goto B6013ce;
case 0x6013d0:goto L6013d0;
case 0x6013d2:c.instructions+=1;goto B6013d2;
case 0x6013da:goto L6013da;
case 0x6013df:c.instructions+=2;goto B6013df;
case 0x6013e1:c.instructions+=1;goto B6013e1;
case 0x6013e3:goto L6013e3;
case 0x6013e9:c.instructions+=2;goto B6013e9;
case 0x6013ef:c.instructions+=1;goto B6013ef;
case 0x6013f1:goto L6013f1;
case 0x6013f3:c.instructions+=1;goto B6013f3;
case 0x6013f5:goto L6013f5;
case 0x6013f7:c.instructions+=1;goto B6013f7;
case 0x6013f9:goto L6013f9;
case 0x6013fc:c.instructions+=8;goto B6013fc;
case 0x6013fe:c.instructions+=7;goto B6013fe;
case 0x601400:c.instructions+=6;goto B601400;
case 0x601403:c.instructions+=5;goto B601403;
case 0x601407:c.instructions+=4;goto B601407;
case 0x601408:c.instructions+=3;goto B601408;
case 0x601409:c.instructions+=2;goto B601409;
case 0x60140b:c.instructions+=1;goto B60140b;
case 0x601410:goto L601410;
case 0x601412:c.instructions+=2;goto B601412;
case 0x601415:c.instructions+=1;goto B601415;
case 0x601417:goto L601417;
case 0x60141d:c.instructions+=1;goto B60141d;
case 0x601423:goto L601423;
case 0x601429:c.instructions+=7;goto B601429;
case 0x60142b:c.instructions+=6;goto B60142b;
case 0x601431:c.instructions+=5;goto B601431;
case 0x601433:c.instructions+=4;goto B601433;
case 0x601439:c.instructions+=3;goto B601439;
case 0x60143b:c.instructions+=2;goto B60143b;
case 0x60143e:c.instructions+=1;goto B60143e;
case 0x601440:goto L601440;
case 0x601442:c.instructions+=1;goto B601442;
case 0x601448:goto L601448;
case 0x60144c:c.instructions+=5;goto B60144c;
case 0x601450:c.instructions+=4;goto B601450;
case 0x601456:c.instructions+=3;goto B601456;
case 0x601458:c.instructions+=2;goto B601458;
case 0x60145b:c.instructions+=1;goto B60145b;
case 0x60145d:goto L60145d;
case 0x601463:c.instructions+=1;goto B601463;
case 0x601467:goto L601467;
case 0x60146a:c.instructions+=4;goto B60146a;
case 0x60146d:c.instructions+=3;goto B60146d;
case 0x601470:c.instructions+=2;goto B601470;
case 0x601478:c.instructions+=1;goto B601478;
case 0x60147a:goto L60147a;
case 0x60147d:c.instructions+=1;goto B60147d;
case 0x60147f:goto L60147f;
case 0x601484:c.instructions+=2;goto B601484;
case 0x601486:c.instructions+=1;goto B601486;
case 0x601488:goto L601488;
case 0x60148a:c.instructions+=1;goto B60148a;
case 0x60148c:goto L60148c;
case 0x60148f:c.instructions+=3;goto B60148f;
case 0x601492:c.instructions+=2;goto B601492;
case 0x601494:c.instructions+=1;goto B601494;
case 0x601496:goto L601496;
case 0x601498:goto L601498;
case 0x60149b:c.instructions+=2;goto B60149b;
case 0x60149d:c.instructions+=1;goto B60149d;
case 0x60149f:goto L60149f;
case 0x6014a2:c.instructions+=2;goto B6014a2;
case 0x6014a4:c.instructions+=1;goto B6014a4;
case 0x6014a6:goto L6014a6;
case 0x6014ae:goto L6014ae;
case 0x6014b3:c.instructions+=2;goto B6014b3;
case 0x6014b5:c.instructions+=1;goto B6014b5;
case 0x6014b7:goto L6014b7;
case 0x6014bc:c.instructions+=2;goto B6014bc;
case 0x6014be:c.instructions+=1;goto B6014be;
case 0x6014c0:goto L6014c0;
case 0x6014c3:c.instructions+=2;goto B6014c3;
case 0x6014c5:c.instructions+=1;goto B6014c5;
case 0x6014c8:goto L6014c8;
case 0x6014cb:c.instructions+=3;goto B6014cb;
case 0x6014ce:c.instructions+=2;goto B6014ce;
case 0x6014d0:c.instructions+=1;goto B6014d0;
case 0x6014d2:goto L6014d2;
case 0x6014d3:c.instructions+=1;goto B6014d3;
case 0x6014d8:goto L6014d8;
case 0x6014db:goto L6014db;
case 0x6014dd:c.instructions+=1;goto B6014dd;
case 0x6014df:goto L6014df;
case 0x6014e2:c.instructions+=1;goto B6014e2;
case 0x6014e4:goto L6014e4;
case 0x6014e5:c.instructions+=2;goto B6014e5;
case 0x6014e7:c.instructions+=1;goto B6014e7;
case 0x6014ec:goto L6014ec;
case 0x6014f0:goto L6014f0;
case 0x6014f4:c.instructions+=12;goto B6014f4;
case 0x6014f8:c.instructions+=11;goto B6014f8;
case 0x6014fc:c.instructions+=10;goto B6014fc;
case 0x6014fd:c.instructions+=9;goto B6014fd;
case 0x6014ff:c.instructions+=8;goto B6014ff;
case 0x601501:c.instructions+=7;goto B601501;
case 0x601502:c.instructions+=6;goto B601502;
case 0x601504:c.instructions+=5;goto B601504;
case 0x601505:c.instructions+=4;goto B601505;
case 0x601506:c.instructions+=3;goto B601506;
case 0x601507:c.instructions+=2;goto B601507;
case 0x601509:c.instructions+=1;goto B601509;
case 0x60150e:goto L60150e;
case 0x601512:c.instructions+=6;goto B601512;
case 0x601513:c.instructions+=5;goto B601513;
case 0x601514:c.instructions+=4;goto B601514;
case 0x60151e:c.instructions+=3;goto B60151e;
case 0x60151f:c.instructions+=2;goto B60151f;
case 0x601522:c.instructions+=1;goto B601522;
case 0x601525:goto L601525;
case 0x60152b:c.instructions+=4;goto B60152b;
case 0x60152d:c.instructions+=3;goto B60152d;
case 0x601530:c.instructions+=2;goto B601530;
case 0x601536:c.instructions+=1;goto B601536;
case 0x60153c:goto L60153c;
case 0x601541:c.instructions+=1;goto B601541;
case 0x601547:goto L601547;
case 0x60154d:c.instructions+=11;goto B60154d;
case 0x601553:c.instructions+=10;goto B601553;
case 0x601555:c.instructions+=9;goto B601555;
case 0x601557:c.instructions+=8;goto B601557;
case 0x60155b:c.instructions+=7;goto B60155b;
case 0x60155f:c.instructions+=6;goto B60155f;
case 0x601565:c.instructions+=5;goto B601565;
case 0x601569:c.instructions+=4;goto B601569;
case 0x60156f:c.instructions+=3;goto B60156f;
case 0x601571:c.instructions+=2;goto B601571;
case 0x601574:c.instructions+=1;goto B601574;
case 0x601576:goto L601576;
case 0x601578:c.instructions+=1;goto B601578;
case 0x60157a:goto L60157a;
case 0x601580:c.instructions+=1;goto B601580;
case 0x601582:goto L601582;
case 0x601588:c.instructions+=5;goto B601588;
case 0x60158e:c.instructions+=4;goto B60158e;
case 0x601592:c.instructions+=3;goto B601592;
case 0x601594:c.instructions+=2;goto B601594;
case 0x601597:c.instructions+=1;goto B601597;
case 0x601599:goto L601599;
case 0x60159b:c.instructions+=7;goto B60159b;
case 0x60159f:c.instructions+=6;goto B60159f;
case 0x6015a3:c.instructions+=5;goto B6015a3;
case 0x6015a9:c.instructions+=4;goto B6015a9;
case 0x6015af:c.instructions+=3;goto B6015af;
case 0x6015b1:c.instructions+=2;goto B6015b1;
case 0x6015b4:c.instructions+=1;goto B6015b4;
case 0x6015b6:goto L6015b6;
case 0x6015bc:c.instructions+=3;goto B6015bc;
case 0x6015be:c.instructions+=2;goto B6015be;
case 0x6015c1:c.instructions+=1;goto B6015c1;
case 0x6015c3:goto L6015c3;
case 0x6015c9:c.instructions+=3;goto B6015c9;
case 0x6015ca:c.instructions+=2;goto B6015ca;
case 0x6015ce:c.instructions+=1;goto B6015ce;
case 0x6015d3:goto L6015d3;
case 0x6015d7:c.instructions+=8;goto B6015d7;
case 0x6015d9:c.instructions+=7;goto B6015d9;
case 0x6015db:c.instructions+=6;goto B6015db;
case 0x6015dd:c.instructions+=5;goto B6015dd;
case 0x6015de:c.instructions+=4;goto B6015de;
case 0x6015e4:c.instructions+=3;goto B6015e4;
case 0x6015e5:c.instructions+=2;goto B6015e5;
case 0x6015e8:c.instructions+=1;goto B6015e8;
case 0x6015eb:goto L6015eb;
case 0x6015ed:goto L6015ed;
case 0x6015f1:c.instructions+=4;goto B6015f1;
case 0x6015f2:c.instructions+=3;goto B6015f2;
case 0x6015f3:c.instructions+=2;goto B6015f3;
case 0x6015f6:c.instructions+=1;goto B6015f6;
case 0x601600:goto L601600;
case 0x601601:c.instructions+=5;goto B601601;
case 0x601602:c.instructions+=4;goto B601602;
case 0x601606:c.instructions+=3;goto B601606;
case 0x60160a:c.instructions+=2;goto B60160a;
case 0x60160c:c.instructions+=1;goto B60160c;
case 0x60160e:goto L60160e;
case 0x601614:c.instructions+=2;goto B601614;
case 0x601616:c.instructions+=1;goto B601616;
case 0x601618:goto L601618;
case 0x60161a:c.instructions+=2;goto B60161a;
case 0x60161d:c.instructions+=1;goto B60161d;
case 0x601620:goto L601620;
case 0x601623:c.instructions+=1;goto B601623;
case 0x601625:goto L601625;
case 0x601628:c.instructions+=1;goto B601628;
case 0x60162a:goto L60162a;
case 0x60162b:c.instructions+=3;goto B60162b;
case 0x60162e:c.instructions+=2;goto B60162e;
case 0x601631:c.instructions+=1;goto B601631;
case 0x601633:goto L601633;
case 0x601635:goto L601635;
case 0x601639:c.instructions+=1;goto B601639;
case 0x60163d:goto L60163d;
case 0x601641:c.instructions+=1;goto B601641;
case 0x601643:goto L601643;
case 0x601647:c.instructions+=5;goto B601647;
case 0x60164a:c.instructions+=4;goto B60164a;
case 0x60164c:c.instructions+=3;goto B60164c;
case 0x60164d:c.instructions+=2;goto B60164d;
case 0x60164e:c.instructions+=1;goto B60164e;
case 0x601653:goto L601653;
case 0x601656:c.instructions+=6;goto B601656;
case 0x601659:c.instructions+=5;goto B601659;
case 0x60165f:c.instructions+=4;goto B60165f;
case 0x601662:c.instructions+=3;goto B601662;
case 0x601663:c.instructions+=2;goto B601663;
case 0x601665:c.instructions+=1;goto B601665;
case 0x60166a:goto L60166a;
case 0x60166d:c.instructions+=3;goto B60166d;
case 0x601673:c.instructions+=2;goto B601673;
case 0x601675:c.instructions+=1;goto B601675;
case 0x601677:goto L601677;
case 0x60167a:c.instructions+=2;goto B60167a;
case 0x60167d:c.instructions+=1;goto B60167d;
case 0x60167f:goto L60167f;
case 0x601682:c.instructions+=5;goto B601682;
case 0x601683:c.instructions+=4;goto B601683;
case 0x601684:c.instructions+=3;goto B601684;
case 0x601687:c.instructions+=2;goto B601687;
case 0x601688:c.instructions+=1;goto B601688;
case 0x60168b:goto L60168b;
case 0x60168e:c.instructions+=1;goto B60168e;
case 0x601690:goto L601690;
case 0x601693:goto L601693;
case 0x601694:c.instructions+=2;goto B601694;
case 0x601695:c.instructions+=1;goto B601695;
case 0x6016a0:goto L6016a0;
case 0x6016a5:c.instructions+=5;goto B6016a5;
case 0x6016a8:c.instructions+=4;goto B6016a8;
case 0x6016ab:c.instructions+=3;goto B6016ab;
case 0x6016ac:c.instructions+=2;goto B6016ac;
case 0x6016ae:c.instructions+=1;goto B6016ae;
case 0x6016b0:goto L6016b0;
case 0x6016b5:goto L6016b5;
case 0x6016b7:goto L6016b7;
case 0x6016ba:c.instructions+=1;goto B6016ba;
case 0x6016bc:goto L6016bc;
case 0x6016c1:c.instructions+=3;goto B6016c1;
case 0x6016c7:c.instructions+=2;goto B6016c7;
case 0x6016c8:c.instructions+=1;goto B6016c8;
case 0x6016cd:goto L6016cd;
case 0x6016cf:goto L6016cf;
case 0x6016d1:c.instructions+=1;goto B6016d1;
case 0x6016d6:goto L6016d6;
case 0x6016d7:c.instructions+=2;goto B6016d7;
case 0x6016dd:c.instructions+=1;goto B6016dd;
case 0x6016e2:goto L6016e2;
case 0x6016e8:c.instructions+=2;goto B6016e8;
case 0x6016ea:c.instructions+=1;goto B6016ea;
case 0x6016ec:goto L6016ec;
case 0x6016f2:c.instructions+=2;goto B6016f2;
case 0x6016f3:c.instructions+=1;goto B6016f3;
case 0x6016f8:goto L6016f8;
case 0x6016fe:c.instructions+=2;goto B6016fe;
case 0x601700:c.instructions+=1;goto B601700;
case 0x601702:goto L601702;
case 0x601707:c.instructions+=3;goto B601707;
case 0x601708:c.instructions+=2;goto B601708;
case 0x601709:c.instructions+=1;goto B601709;
case 0x60170e:goto L60170e;
case 0x601713:c.instructions+=2;goto B601713;
case 0x601715:c.instructions+=1;goto B601715;
case 0x601717:goto L601717;
case 0x60171c:c.instructions+=2;goto B60171c;
case 0x60171e:c.instructions+=1;goto B60171e;
case 0x601720:goto L601720;
case 0x601722:c.instructions+=1;goto B601722;
case 0x601727:goto L601727;
case 0x60172c:c.instructions+=2;goto B60172c;
case 0x60172e:c.instructions+=1;goto B60172e;
case 0x601734:goto L601734;
case 0x60173a:c.instructions+=2;goto B60173a;
case 0x60173c:c.instructions+=1;goto B60173c;
case 0x60173e:goto L60173e;
case 0x601740:c.instructions+=1;goto B601740;
case 0x601745:goto L601745;
case 0x60174b:c.instructions+=4;goto B60174b;
case 0x601751:c.instructions+=3;goto B601751;
case 0x601753:c.instructions+=2;goto B601753;
case 0x601757:c.instructions+=1;goto B601757;
case 0x60175c:goto L60175c;
case 0x601762:c.instructions+=8;goto B601762;
case 0x601763:c.instructions+=7;goto B601763;
case 0x601767:c.instructions+=6;goto B601767;
case 0x601769:c.instructions+=5;goto B601769;
case 0x60176f:c.instructions+=4;goto B60176f;
case 0x601772:c.instructions+=3;goto B601772;
case 0x601778:c.instructions+=2;goto B601778;
case 0x60177b:c.instructions+=1;goto B60177b;
case 0x601780:goto L601780;
case 0x601781:c.instructions+=2;goto B601781;
case 0x601784:c.instructions+=1;goto B601784;
case 0x601785:goto L601785;
case 0x601787:c.instructions+=3;goto B601787;
case 0x60178a:c.instructions+=2;goto B60178a;
case 0x60178e:c.instructions+=1;goto B60178e;
case 0x601794:goto L601794;
case 0x601797:c.instructions+=2;goto B601797;
case 0x601799:c.instructions+=1;goto B601799;
case 0x60179f:goto L60179f;
case 0x6017a4:c.instructions+=1;goto B6017a4;
case 0x6017aa:goto L6017aa;
case 0x6017af:c.instructions+=8;goto B6017af;
case 0x6017b2:c.instructions+=7;goto B6017b2;
case 0x6017b6:c.instructions+=6;goto B6017b6;
case 0x6017ba:c.instructions+=5;goto B6017ba;
case 0x6017c0:c.instructions+=4;goto B6017c0;
case 0x6017c6:c.instructions+=3;goto B6017c6;
case 0x6017c8:c.instructions+=2;goto B6017c8;
case 0x6017cb:c.instructions+=1;goto B6017cb;
case 0x6017d1:goto L6017d1;
case 0x6017d7:c.instructions+=8;goto B6017d7;
case 0x6017da:c.instructions+=7;goto B6017da;
case 0x6017e0:c.instructions+=6;goto B6017e0;
case 0x6017e2:c.instructions+=5;goto B6017e2;
case 0x6017e3:c.instructions+=4;goto B6017e3;
case 0x6017e4:c.instructions+=3;goto B6017e4;
case 0x6017e9:c.instructions+=2;goto B6017e9;
case 0x6017ec:c.instructions+=1;goto B6017ec;
case 0x6017f1:goto L6017f1;
case 0x6017f2:c.instructions+=2;goto B6017f2;
case 0x6017f5:c.instructions+=1;goto B6017f5;
case 0x6017fa:goto L6017fa;
case 0x601800:c.instructions+=6;goto B601800;
case 0x601805:c.instructions+=5;goto B601805;
case 0x601808:c.instructions+=4;goto B601808;
case 0x60180d:c.instructions+=3;goto B60180d;
case 0x601811:c.instructions+=2;goto B601811;
case 0x601815:c.instructions+=1;goto B601815;
case 0x60181a:goto L60181a;
case 0x60181c:c.instructions+=1;goto B60181c;
case 0x60181e:goto L60181e;
case 0x601824:c.instructions+=1;goto B601824;
case 0x601826:goto L601826;
case 0x60182a:goto L60182a;
case 0x60182e:c.instructions+=5;goto B60182e;
case 0x60182f:c.instructions+=4;goto B60182f;
case 0x601831:c.instructions+=3;goto B601831;
case 0x601834:c.instructions+=2;goto B601834;
case 0x601837:c.instructions+=1;goto B601837;
case 0x60183c:goto L60183c;
case 0x60183e:c.instructions+=5;goto B60183e;
case 0x601844:c.instructions+=4;goto B601844;
case 0x60184a:c.instructions+=3;goto B60184a;
case 0x60184d:c.instructions+=2;goto B60184d;
case 0x601853:c.instructions+=1;goto B601853;
case 0x601856:goto L601856;
case 0x601857:c.instructions+=2;goto B601857;
case 0x60185a:c.instructions+=1;goto B60185a;
case 0x601860:goto L601860;
case 0x601865:c.instructions+=7;goto B601865;
case 0x601866:c.instructions+=6;goto B601866;
case 0x601868:c.instructions+=5;goto B601868;
case 0x60186b:c.instructions+=4;goto B60186b;
case 0x60186c:c.instructions+=3;goto B60186c;
case 0x60186e:c.instructions+=2;goto B60186e;
case 0x601870:c.instructions+=1;goto B601870;
case 0x601872:goto L601872;
case 0x601873:c.instructions+=2;goto B601873;
case 0x601878:c.instructions+=1;goto B601878;
case 0x601880:goto L601880;
case 0x601883:c.instructions+=5;goto B601883;
case 0x601886:c.instructions+=4;goto B601886;
case 0x60188c:c.instructions+=3;goto B60188c;
case 0x60188d:c.instructions+=2;goto B60188d;
case 0x601891:c.instructions+=1;goto B601891;
case 0x601896:goto L601896;
case 0x601899:c.instructions+=11;goto B601899;
case 0x60189b:c.instructions+=10;goto B60189b;
case 0x6018a1:c.instructions+=9;goto B6018a1;
case 0x6018a5:c.instructions+=8;goto B6018a5;
case 0x6018ac:c.instructions+=7;goto B6018ac;
case 0x6018af:c.instructions+=6;goto B6018af;
case 0x6018b4:c.instructions+=5;goto B6018b4;
case 0x6018b7:c.instructions+=4;goto B6018b7;
case 0x6018b8:c.instructions+=3;goto B6018b8;
case 0x6018bb:c.instructions+=2;goto B6018bb;
case 0x6018bd:c.instructions+=1;goto B6018bd;
case 0x6018bf:goto L6018bf;
case 0x6018c0:goto L6018c0;
case 0x6018c6:c.instructions+=2;goto B6018c6;
case 0x6018c8:c.instructions+=1;goto B6018c8;
case 0x6018ca:goto L6018ca;
case 0x6018cd:c.instructions+=5;goto B6018cd;
case 0x6018d0:c.instructions+=4;goto B6018d0;
case 0x6018d2:c.instructions+=3;goto B6018d2;
case 0x6018d4:c.instructions+=2;goto B6018d4;
case 0x6018d6:c.instructions+=1;goto B6018d6;
case 0x6018d8:goto L6018d8;
case 0x6018e0:goto L6018e0;
case 0x6018e2:c.instructions+=6;goto B6018e2;
case 0x6018e6:c.instructions+=5;goto B6018e6;
case 0x6018e9:c.instructions+=4;goto B6018e9;
case 0x6018ef:c.instructions+=3;goto B6018ef;
case 0x6018f0:c.instructions+=2;goto B6018f0;
case 0x6018f4:c.instructions+=1;goto B6018f4;
case 0x6018f9:goto L6018f9;
case 0x6018fc:c.instructions+=12;goto B6018fc;
case 0x6018fe:c.instructions+=11;goto B6018fe;
case 0x601904:c.instructions+=10;goto B601904;
case 0x601908:c.instructions+=9;goto B601908;
case 0x60190f:c.instructions+=8;goto B60190f;
case 0x601912:c.instructions+=7;goto B601912;
case 0x601917:c.instructions+=6;goto B601917;
case 0x60191a:c.instructions+=5;goto B60191a;
case 0x60191d:c.instructions+=4;goto B60191d;
case 0x60191e:c.instructions+=3;goto B60191e;
case 0x601920:c.instructions+=2;goto B601920;
case 0x601922:c.instructions+=1;goto B601922;
case 0x601924:goto L601924;
case 0x601926:c.instructions+=1;goto B601926;
case 0x60192b:goto L60192b;
case 0x60192c:c.instructions+=3;goto B60192c;
case 0x60192e:c.instructions+=2;goto B60192e;
case 0x60192f:c.instructions+=1;goto B60192f;
case 0x601940:goto L601940;
case 0x601941:c.instructions+=2;goto B601941;
case 0x601943:c.instructions+=1;goto B601943;
case 0x601948:goto L601948;
case 0x60194d:c.instructions+=1;goto B60194d;
case 0x60194f:goto L60194f;
case 0x601950:c.instructions+=1;goto B601950;
case 0x601955:goto L601955;
case 0x601958:goto L601958;
case 0x60195a:c.instructions+=2;goto B60195a;
case 0x60195b:c.instructions+=1;goto B60195b;
case 0x601960:goto L601960;
case 0x601966:c.instructions+=6;goto B601966;
case 0x601967:c.instructions+=5;goto B601967;
case 0x601968:c.instructions+=4;goto B601968;
case 0x60196a:c.instructions+=3;goto B60196a;
case 0x60196b:c.instructions+=2;goto B60196b;
case 0x60196f:c.instructions+=1;goto B60196f;
case 0x601974:goto L601974;
case 0x601978:c.instructions+=4;goto B601978;
case 0x60197a:c.instructions+=3;goto B60197a;
case 0x60197b:c.instructions+=2;goto B60197b;
case 0x60197f:c.instructions+=1;goto B60197f;
case 0x601984:goto L601984;
case 0x60198c:c.instructions+=4;goto B60198c;
case 0x60198e:c.instructions+=3;goto B60198e;
case 0x60198f:c.instructions+=2;goto B60198f;
case 0x601993:c.instructions+=1;goto B601993;
case 0x601998:goto L601998;
case 0x60199f:c.instructions+=3;goto B60199f;
case 0x6019a1:c.instructions+=2;goto B6019a1;
case 0x6019a8:c.instructions+=1;goto B6019a8;
case 0x6019aa:goto L6019aa;
case 0x6019ad:c.instructions+=1;goto B6019ad;
case 0x6019af:goto L6019af;
case 0x6019b1:c.instructions+=1;goto B6019b1;
case 0x6019b3:goto L6019b3;
case 0x6019b5:goto L6019b5;
case 0x6019b8:c.instructions+=4;goto B6019b8;
case 0x6019ba:c.instructions+=3;goto B6019ba;
case 0x6019bb:c.instructions+=2;goto B6019bb;
case 0x6019bf:c.instructions+=1;goto B6019bf;
case 0x6019c4:goto L6019c4;
case 0x6019c7:c.instructions+=4;goto B6019c7;
case 0x6019c9:c.instructions+=3;goto B6019c9;
case 0x6019ca:c.instructions+=2;goto B6019ca;
case 0x6019ce:c.instructions+=1;goto B6019ce;
case 0x6019d3:goto L6019d3;
case 0x6019d5:c.instructions+=4;goto B6019d5;
case 0x6019db:c.instructions+=3;goto B6019db;
case 0x6019dc:c.instructions+=2;goto B6019dc;
case 0x6019e0:c.instructions+=1;goto B6019e0;
case 0x6019e5:goto L6019e5;
case 0x6019ea:c.instructions+=3;goto B6019ea;
case 0x6019ec:c.instructions+=2;goto B6019ec;
case 0x6019ee:c.instructions+=1;goto B6019ee;
case 0x6019f0:goto L6019f0;
case 0x6019f6:c.instructions+=2;goto B6019f6;
case 0x6019f8:c.instructions+=1;goto B6019f8;
case 0x6019fa:goto L6019fa;
case 0x6019fe:c.instructions+=2;goto B6019fe;
case 0x6019ff:c.instructions+=1;goto B6019ff;
case 0x601a04:goto L601a04;
case 0x601a06:c.instructions+=1;goto B601a06;
case 0x601a08:goto L601a08;
case 0x601a0b:goto L601a0b;
case 0x601a0d:c.instructions+=4;goto B601a0d;
case 0x601a10:c.instructions+=3;goto B601a10;
case 0x601a11:c.instructions+=2;goto B601a11;
case 0x601a13:c.instructions+=1;goto B601a13;
case 0x601a18:goto L601a18;
case 0x601a1d:c.instructions+=3;goto B601a1d;
case 0x601a1e:c.instructions+=2;goto B601a1e;
case 0x601a22:c.instructions+=1;goto B601a22;
case 0x601a27:goto L601a27;
case 0x601a2c:goto L601a2c;
case 0x601a2e:c.instructions+=1;goto B601a2e;
case 0x601a30:goto L601a30;
case 0x601a34:c.instructions+=2;goto B601a34;
case 0x601a35:c.instructions+=1;goto B601a35;
case 0x601a3a:goto L601a3a;
case 0x601a3d:goto L601a3d;
case 0x601a40:c.instructions+=1;goto B601a40;
case 0x601a42:goto L601a42;
case 0x601a48:goto L601a48;
case 0x601a49:c.instructions+=4;goto B601a49;
case 0x601a4a:c.instructions+=3;goto B601a4a;
case 0x601a4b:c.instructions+=2;goto B601a4b;
case 0x601a51:c.instructions+=1;goto B601a51;
case 0x601a60:goto L601a60;
case 0x601a63:c.instructions+=10;goto B601a63;
case 0x601a69:c.instructions+=9;goto B601a69;
case 0x601a6a:c.instructions+=8;goto B601a6a;
case 0x601a6e:c.instructions+=7;goto B601a6e;
case 0x601a6f:c.instructions+=6;goto B601a6f;
case 0x601a71:c.instructions+=5;goto B601a71;
case 0x601a74:c.instructions+=4;goto B601a74;
case 0x601a76:c.instructions+=3;goto B601a76;
case 0x601a7a:c.instructions+=2;goto B601a7a;
case 0x601a7c:c.instructions+=1;goto B601a7c;
case 0x601a7e:goto L601a7e;
case 0x601a84:c.instructions+=1;goto B601a84;
case 0x601a86:goto L601a86;
case 0x601a8c:c.instructions+=1;goto B601a8c;
case 0x601a92:goto L601a92;
case 0x601a98:c.instructions+=1;goto B601a98;
case 0x601a9a:goto L601a9a;
case 0x601a9e:c.instructions+=4;goto B601a9e;
case 0x601aa4:c.instructions+=3;goto B601aa4;
case 0x601aa6:c.instructions+=2;goto B601aa6;
case 0x601aa9:c.instructions+=1;goto B601aa9;
case 0x601aab:goto L601aab;
case 0x601ab0:c.instructions+=5;goto B601ab0;
case 0x601ab1:c.instructions+=4;goto B601ab1;
case 0x601ab4:c.instructions+=3;goto B601ab4;
case 0x601abb:c.instructions+=2;goto B601abb;
case 0x601ac0:c.instructions+=1;goto B601ac0;
case 0x601ac2:goto L601ac2;
case 0x601ac5:c.instructions+=2;goto B601ac5;
case 0x601ac6:c.instructions+=1;goto B601ac6;
case 0x601acb:goto L601acb;
case 0x601ace:c.instructions+=1;goto B601ace;
case 0x601ad0:goto L601ad0;
case 0x601ad6:c.instructions+=1;goto B601ad6;
case 0x601adc:goto L601adc;
case 0x601ae2:c.instructions+=1;goto B601ae2;
case 0x601ae8:goto L601ae8;
case 0x601aeb:c.instructions+=4;goto B601aeb;
case 0x601aed:c.instructions+=3;goto B601aed;
case 0x601aee:c.instructions+=2;goto B601aee;
case 0x601af4:c.instructions+=1;goto B601af4;
case 0x601af6:goto L601af6;
case 0x601afb:c.instructions+=1;goto B601afb;
case 0x601afd:goto L601afd;
case 0x601aff:c.instructions+=7;goto B601aff;
case 0x601b01:c.instructions+=6;goto B601b01;
case 0x601b03:c.instructions+=5;goto B601b03;
case 0x601b07:c.instructions+=4;goto B601b07;
case 0x601b0b:c.instructions+=3;goto B601b0b;
case 0x601b11:c.instructions+=2;goto B601b11;
case 0x601b17:c.instructions+=1;goto B601b17;
case 0x601b1c:goto L601b1c;
case 0x601b22:goto L601b22;
case 0x601b24:c.instructions+=2;goto B601b24;
case 0x601b27:c.instructions+=1;goto B601b27;
case 0x601b2c:goto L601b2c;
case 0x601b2e:c.instructions+=2;goto B601b2e;
case 0x601b2f:c.instructions+=1;goto B601b2f;
case 0x601b31:goto L601b31;
case 0x601b36:goto L601b36;
case 0x601b38:c.instructions+=1;goto B601b38;
case 0x601b3a:goto L601b3a;
case 0x601b3d:c.instructions+=1;goto B601b3d;
case 0x601b3f:goto L601b3f;
case 0x601b43:c.instructions+=4;goto B601b43;
case 0x601b44:c.instructions+=3;goto B601b44;
case 0x601b45:c.instructions+=2;goto B601b45;
case 0x601b48:c.instructions+=1;goto B601b48;
case 0x601b4b:goto L601b4b;
case 0x601b4f:c.instructions+=4;goto B601b4f;
case 0x601b55:c.instructions+=3;goto B601b55;
case 0x601b57:c.instructions+=2;goto B601b57;
case 0x601b5a:c.instructions+=1;goto B601b5a;
case 0x601b60:goto L601b60;
case 0x601b63:c.instructions+=1;goto B601b63;
case 0x601b69:goto L601b69;
case 0x601b6f:c.instructions+=1;goto B601b6f;
case 0x601b75:goto L601b75;
case 0x601b7b:c.instructions+=11;goto B601b7b;
case 0x601b81:c.instructions+=10;goto B601b81;
case 0x601b87:c.instructions+=9;goto B601b87;
case 0x601b8d:c.instructions+=8;goto B601b8d;
case 0x601b8f:c.instructions+=7;goto B601b8f;
case 0x601b93:c.instructions+=6;goto B601b93;
case 0x601b95:c.instructions+=5;goto B601b95;
case 0x601b99:c.instructions+=4;goto B601b99;
case 0x601b9f:c.instructions+=3;goto B601b9f;
case 0x601ba1:c.instructions+=2;goto B601ba1;
case 0x601ba4:c.instructions+=1;goto B601ba4;
case 0x601ba6:goto L601ba6;
case 0x601bac:c.instructions+=2;goto B601bac;
case 0x601bb2:c.instructions+=1;goto B601bb2;
case 0x601bb8:goto L601bb8;
case 0x601bbe:c.instructions+=1;goto B601bbe;
case 0x601bc0:goto L601bc0;
case 0x601bc2:c.instructions+=5;goto B601bc2;
case 0x601bc6:c.instructions+=4;goto B601bc6;
case 0x601bcc:c.instructions+=3;goto B601bcc;
case 0x601bce:c.instructions+=2;goto B601bce;
case 0x601bd1:c.instructions+=1;goto B601bd1;
case 0x601bd3:goto L601bd3;
case 0x601bd9:c.instructions+=10;goto B601bd9;
case 0x601bdc:c.instructions+=9;goto B601bdc;
case 0x601be0:c.instructions+=8;goto B601be0;
case 0x601be4:c.instructions+=7;goto B601be4;
case 0x601bea:c.instructions+=6;goto B601bea;
case 0x601bee:c.instructions+=5;goto B601bee;
case 0x601bf2:c.instructions+=4;goto B601bf2;
case 0x601bf6:c.instructions+=3;goto B601bf6;
case 0x601bfa:c.instructions+=2;goto B601bfa;
case 0x601bfd:c.instructions+=1;goto B601bfd;
case 0x601c02:goto L601c02;
case 0x601c06:c.instructions+=2;goto B601c06;
case 0x601c09:c.instructions+=1;goto B601c09;
case 0x601c0b:goto L601c0b;
case 0x601c11:c.instructions+=6;goto B601c11;
case 0x601c16:c.instructions+=5;goto B601c16;
case 0x601c1b:c.instructions+=4;goto B601c1b;
case 0x601c21:c.instructions+=3;goto B601c21;
case 0x601c27:c.instructions+=2;goto B601c27;
case 0x601c2d:c.instructions+=1;goto B601c2d;
case 0x601c2f:goto L601c2f;
case 0x601c35:c.instructions+=1;goto B601c35;
case 0x601c3b:goto L601c3b;
case 0x601c41:c.instructions+=6;goto B601c41;
case 0x601c47:c.instructions+=5;goto B601c47;
case 0x601c4d:c.instructions+=4;goto B601c4d;
case 0x601c51:c.instructions+=3;goto B601c51;
case 0x601c53:c.instructions+=2;goto B601c53;
case 0x601c56:c.instructions+=1;goto B601c56;
case 0x601c58:goto L601c58;
case 0x601c5b:c.instructions+=2;goto B601c5b;
case 0x601c5d:c.instructions+=1;goto B601c5d;
case 0x601c5f:goto L601c5f;
case 0x601c61:c.instructions+=1;goto B601c61;
case 0x601c66:goto L601c66;
case 0x601c6a:c.instructions+=4;goto B601c6a;
case 0x601c6b:c.instructions+=3;goto B601c6b;
case 0x601c6c:c.instructions+=2;goto B601c6c;
case 0x601c6f:c.instructions+=1;goto B601c6f;
case 0x601c80:goto L601c80;
case 0x601c81:c.instructions+=5;goto B601c81;
case 0x601c86:c.instructions+=4;goto B601c86;
case 0x601c88:c.instructions+=3;goto B601c88;
case 0x601c89:c.instructions+=2;goto B601c89;
case 0x601c8b:c.instructions+=1;goto B601c8b;
case 0x601c8d:goto L601c8d;
case 0x601c90:c.instructions+=1;goto B601c90;
case 0x601c92:goto L601c92;
case 0x601c95:c.instructions+=1;goto B601c95;
case 0x601c97:goto L601c97;
case 0x601c9d:goto L601c9d;
case 0x601ca3:c.instructions+=5;goto B601ca3;
case 0x601ca5:c.instructions+=4;goto B601ca5;
case 0x601ca8:c.instructions+=3;goto B601ca8;
case 0x601cad:c.instructions+=2;goto B601cad;
case 0x601cb1:c.instructions+=1;goto B601cb1;
case 0x601cb6:goto L601cb6;
case 0x601cba:c.instructions+=6;goto B601cba;
case 0x601cbb:c.instructions+=5;goto B601cbb;
case 0x601cbc:c.instructions+=4;goto B601cbc;
case 0x601cbe:c.instructions+=3;goto B601cbe;
case 0x601cc0:c.instructions+=2;goto B601cc0;
case 0x601cc2:c.instructions+=1;goto B601cc2;
case 0x601cc7:goto L601cc7;
case 0x601ccc:c.instructions+=2;goto B601ccc;
case 0x601cce:c.instructions+=1;goto B601cce;
case 0x601cd0:goto L601cd0;
case 0x601cd5:c.instructions+=2;goto B601cd5;
case 0x601cd7:c.instructions+=1;goto B601cd7;
case 0x601cd9:goto L601cd9;
case 0x601cde:goto L601cde;
case 0x601ce8:goto L601ce8;
case 0x601ced:goto L601ced;
case 0x601cf0:c.instructions+=2;goto B601cf0;
case 0x601cf4:c.instructions+=1;goto B601cf4;
case 0x601cf6:goto L601cf6;
case 0x601cfc:goto L601cfc;
case 0x601cfd:c.instructions+=2;goto B601cfd;
case 0x601cfe:c.instructions+=1;goto B601cfe;
case 0x601d00:goto L601d00;
case 0x601d05:goto L601d05;
case 0x601d07:c.instructions+=4;goto B601d07;
case 0x601d09:c.instructions+=3;goto B601d09;
case 0x601d0c:c.instructions+=2;goto B601d0c;
case 0x601d12:c.instructions+=1;goto B601d12;
case 0x601d20:goto L601d20;
case 0x601d21:c.instructions+=12;goto B601d21;
case 0x601d22:c.instructions+=11;goto B601d22;
case 0x601d23:c.instructions+=10;goto B601d23;
case 0x601d27:c.instructions+=9;goto B601d27;
case 0x601d28:c.instructions+=8;goto B601d28;
case 0x601d2a:c.instructions+=7;goto B601d2a;
case 0x601d2e:c.instructions+=6;goto B601d2e;
case 0x601d30:c.instructions+=5;goto B601d30;
case 0x601d32:c.instructions+=4;goto B601d32;
case 0x601d33:c.instructions+=3;goto B601d33;
case 0x601d35:c.instructions+=2;goto B601d35;
case 0x601d39:c.instructions+=1;goto B601d39;
case 0x601d3e:goto L601d3e;
case 0x601d43:c.instructions+=7;goto B601d43;
case 0x601d45:c.instructions+=6;goto B601d45;
case 0x601d49:c.instructions+=5;goto B601d49;
case 0x601d4f:c.instructions+=4;goto B601d4f;
case 0x601d50:c.instructions+=3;goto B601d50;
case 0x601d52:c.instructions+=2;goto B601d52;
case 0x601d56:c.instructions+=1;goto B601d56;
case 0x601d5b:goto L601d5b;
case 0x601d60:c.instructions+=7;goto B601d60;
case 0x601d62:c.instructions+=6;goto B601d62;
case 0x601d66:c.instructions+=5;goto B601d66;
case 0x601d67:c.instructions+=4;goto B601d67;
case 0x601d69:c.instructions+=3;goto B601d69;
case 0x601d6f:c.instructions+=2;goto B601d6f;
case 0x601d73:c.instructions+=1;goto B601d73;
case 0x601d78:goto L601d78;
case 0x601d7d:c.instructions+=7;goto B601d7d;
case 0x601d7f:c.instructions+=6;goto B601d7f;
case 0x601d83:c.instructions+=5;goto B601d83;
case 0x601d84:c.instructions+=4;goto B601d84;
case 0x601d86:c.instructions+=3;goto B601d86;
case 0x601d8c:c.instructions+=2;goto B601d8c;
case 0x601d90:c.instructions+=1;goto B601d90;
case 0x601d95:goto L601d95;
case 0x601d99:c.instructions+=4;goto B601d99;
case 0x601d9c:c.instructions+=3;goto B601d9c;
case 0x601d9d:c.instructions+=2;goto B601d9d;
case 0x601da2:c.instructions+=1;goto B601da2;
case 0x601da7:goto L601da7;
case 0x601da9:c.instructions+=4;goto B601da9;
case 0x601dad:c.instructions+=3;goto B601dad;
case 0x601dae:c.instructions+=2;goto B601dae;
case 0x601db0:c.instructions+=1;goto B601db0;
case 0x601db5:goto L601db5;
case 0x601db9:c.instructions+=3;goto B601db9;
case 0x601dba:c.instructions+=2;goto B601dba;
case 0x601dbf:c.instructions+=1;goto B601dbf;
case 0x601dc4:goto L601dc4;
case 0x601dc6:c.instructions+=4;goto B601dc6;
case 0x601dca:c.instructions+=3;goto B601dca;
case 0x601dcb:c.instructions+=2;goto B601dcb;
case 0x601dcd:c.instructions+=1;goto B601dcd;
case 0x601dd2:goto L601dd2;
case 0x601dd8:c.instructions+=3;goto B601dd8;
case 0x601ddd:c.instructions+=2;goto B601ddd;
case 0x601de4:c.instructions+=1;goto B601de4;
case 0x601de6:goto L601de6;
case 0x601deb:c.instructions+=2;goto B601deb;
case 0x601dec:c.instructions+=1;goto B601dec;
case 0x601df1:goto L601df1;
case 0x601df8:c.instructions+=7;goto B601df8;
case 0x601dfe:c.instructions+=6;goto B601dfe;
case 0x601e04:c.instructions+=5;goto B601e04;
case 0x601e07:c.instructions+=4;goto B601e07;
case 0x601e0c:c.instructions+=3;goto B601e0c;
case 0x601e11:c.instructions+=2;goto B601e11;
case 0x601e17:c.instructions+=1;goto B601e17;
case 0x601e1c:goto L601e1c;
case 0x601e1f:c.instructions+=3;goto B601e1f;
case 0x601e24:c.instructions+=2;goto B601e24;
case 0x601e29:c.instructions+=1;goto B601e29;
case 0x601e2e:goto L601e2e;
case 0x601e35:c.instructions+=8;goto B601e35;
case 0x601e3b:c.instructions+=7;goto B601e3b;
case 0x601e40:c.instructions+=6;goto B601e40;
case 0x601e47:c.instructions+=5;goto B601e47;
case 0x601e4c:c.instructions+=4;goto B601e4c;
case 0x601e53:c.instructions+=3;goto B601e53;
case 0x601e59:c.instructions+=2;goto B601e59;
case 0x601e5f:c.instructions+=1;goto B601e5f;
case 0x601e61:goto L601e61;
case 0x601e66:goto L601e66;
case 0x601e6c:goto L601e6c;
case 0x601e70:c.instructions+=3;goto B601e70;
case 0x601e71:c.instructions+=2;goto B601e71;
case 0x601e73:c.instructions+=1;goto B601e73;
case 0x601e78:goto L601e78;
case 0x601e7c:c.instructions+=6;goto B601e7c;
case 0x601e7d:c.instructions+=5;goto B601e7d;
case 0x601e7f:c.instructions+=4;goto B601e7f;
case 0x601e80:c.instructions+=3;goto B601e80;
case 0x601e81:c.instructions+=2;goto B601e81;
case 0x601e83:c.instructions+=1;goto B601e83;
case 0x601e88:goto L601e88;
case 0x601e8a:c.instructions+=5;goto B601e8a;
case 0x601e8e:c.instructions+=4;goto B601e8e;
case 0x601e8f:c.instructions+=3;goto B601e8f;
case 0x601e91:c.instructions+=2;goto B601e91;
case 0x601e95:c.instructions+=1;goto B601e95;
case 0x601e9a:goto L601e9a;
case 0x601e9b:c.instructions+=4;goto B601e9b;
case 0x601e9c:c.instructions+=3;goto B601e9c;
case 0x601e9d:c.instructions+=2;goto B601e9d;
case 0x601e9e:c.instructions+=1;goto B601e9e;
case 0x601eb0:goto L601eb0;
case 0x601eb1:c.instructions+=15;goto B601eb1;
case 0x601eb3:c.instructions+=14;goto B601eb3;
case 0x601eb6:c.instructions+=13;goto B601eb6;
case 0x601eb8:c.instructions+=12;goto B601eb8;
case 0x601ebd:c.instructions+=11;goto B601ebd;
case 0x601ec3:c.instructions+=10;goto B601ec3;
case 0x601ec4:c.instructions+=9;goto B601ec4;
case 0x601ecb:c.instructions+=8;goto B601ecb;
case 0x601ed1:c.instructions+=7;goto B601ed1;
case 0x601ed2:c.instructions+=6;goto B601ed2;
case 0x601ed3:c.instructions+=5;goto B601ed3;
case 0x601ed4:c.instructions+=4;goto B601ed4;
case 0x601ed6:c.instructions+=3;goto B601ed6;
case 0x601eda:c.instructions+=2;goto B601eda;
case 0x601edf:c.instructions+=1;goto B601edf;
case 0x601ee4:goto L601ee4;
case 0x601eec:c.instructions+=4;goto B601eec;
case 0x601eef:c.instructions+=3;goto B601eef;
case 0x601ef5:c.instructions+=2;goto B601ef5;
case 0x601f00:c.instructions+=1;goto B601f00;
case 0x601f06:goto L601f06;
case 0x601f09:c.instructions+=5;goto B601f09;
case 0x601f0a:c.instructions+=4;goto B601f0a;
case 0x601f0e:c.instructions+=3;goto B601f0e;
case 0x601f0f:c.instructions+=2;goto B601f0f;
case 0x601f11:c.instructions+=1;goto B601f11;
case 0x601f16:goto L601f16;
case 0x601f18:c.instructions+=5;goto B601f18;
case 0x601f1c:c.instructions+=4;goto B601f1c;
case 0x601f1d:c.instructions+=3;goto B601f1d;
case 0x601f1f:c.instructions+=2;goto B601f1f;
case 0x601f21:c.instructions+=1;goto B601f21;
case 0x601f26:goto L601f26;
case 0x601f2a:c.instructions+=7;goto B601f2a;
case 0x601f2e:c.instructions+=6;goto B601f2e;
case 0x601f30:c.instructions+=5;goto B601f30;
case 0x601f31:c.instructions+=4;goto B601f31;
case 0x601f36:c.instructions+=3;goto B601f36;
case 0x601f3e:c.instructions+=2;goto B601f3e;
case 0x601f42:c.instructions+=1;goto B601f42;
case 0x601f47:goto L601f47;
case 0x601f4b:c.instructions+=2;goto B601f4b;
case 0x601f4e:c.instructions+=1;goto B601f4e;
case 0x601f50:goto L601f50;
case 0x601f53:c.instructions+=1;goto B601f53;
case 0x601f55:goto L601f55;
case 0x601f5a:c.instructions+=7;goto B601f5a;
case 0x601f5e:c.instructions+=6;goto B601f5e;
case 0x601f5f:c.instructions+=5;goto B601f5f;
case 0x601f61:c.instructions+=4;goto B601f61;
case 0x601f62:c.instructions+=3;goto B601f62;
case 0x601f63:c.instructions+=2;goto B601f63;
case 0x601f65:c.instructions+=1;goto B601f65;
case 0x601f6a:goto L601f6a;
case 0x601f6f:c.instructions+=4;goto B601f6f;
case 0x601f73:c.instructions+=3;goto B601f73;
case 0x601f79:c.instructions+=2;goto B601f79;
case 0x601f7b:c.instructions+=1;goto B601f7b;
case 0x601f7d:goto L601f7d;
case 0x601f81:c.instructions+=3;goto B601f81;
case 0x601f82:c.instructions+=2;goto B601f82;
case 0x601f87:c.instructions+=1;goto B601f87;
case 0x601f8c:goto L601f8c;
case 0x601f8f:c.instructions+=3;goto B601f8f;
case 0x601f91:c.instructions+=2;goto B601f91;
case 0x601f94:c.instructions+=1;goto B601f94;
case 0x601f99:goto L601f99;
case 0x601f9b:c.instructions+=1;goto B601f9b;
case 0x601fa0:goto L601fa0;
case 0x601fa6:goto L601fa6;
case 0x601fac:c.instructions+=1;goto B601fac;
case 0x601fae:goto L601fae;
case 0x601fb0:c.instructions+=2;goto B601fb0;
case 0x601fb2:c.instructions+=1;goto B601fb2;
case 0x601fb7:goto L601fb7;
case 0x601fb9:c.instructions+=2;goto B601fb9;
case 0x601fc0:c.instructions+=1;goto B601fc0;
case 0x601fc5:goto L601fc5;
case 0x601fc7:c.instructions+=1;goto B601fc7;
case 0x601fc9:goto L601fc9;
case 0x601fcb:c.instructions+=2;goto B601fcb;
case 0x601fcd:c.instructions+=1;goto B601fcd;
case 0x601fd2:goto L601fd2;
case 0x601fd9:c.instructions+=2;goto B601fd9;
case 0x601fe4:c.instructions+=1;goto B601fe4;
case 0x601fe9:goto L601fe9;
case 0x601ff0:c.instructions+=7;goto B601ff0;
case 0x601ff1:c.instructions+=6;goto B601ff1;
case 0x601ff2:c.instructions+=5;goto B601ff2;
case 0x601ff9:c.instructions+=4;goto B601ff9;
case 0x601ffa:c.instructions+=3;goto B601ffa;
case 0x601ffc:c.instructions+=2;goto B601ffc;
case 0x601ffd:c.instructions+=1;goto B601ffd;
default:missing_instruction(c.pc);}
B601003:L601003:{c.instructions+=3;NFSU2_TR(0x601003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601004:{NFSU2_TR(0x601004);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601005:{NFSU2_TR(0x601005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60100aull));
TAIL_STATIC(0x43f920u,43f);
}
B60100a:L60100a:{c.instructions+=4;NFSU2_TR(0x60100a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60100c:{NFSU2_TR(0x60100c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60100f:{NFSU2_TR(0x60100f);
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
B601011:{NFSU2_TR(0x601011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x600fb5u,600);}
}
B601013:L601013:{c.instructions+=5;NFSU2_TR(0x601013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601014:{NFSU2_TR(0x601014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B601015:{NFSU2_TR(0x601015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601016:{NFSU2_TR(0x601016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601017:{NFSU2_TR(0x601017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601020:L601020:{c.instructions+=5;NFSU2_TR(0x601020);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B601025:{NFSU2_TR(0x601025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601026:{NFSU2_TR(0x601026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601027:{NFSU2_TR(0x601027);
__builtin_memmove((R+24),(R+4),4);
}
B601029:{NFSU2_TR(0x601029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60102eull));
TAIL_STATIC(0x440e50u,440);
}
B60102e:L60102e:{c.instructions+=3;NFSU2_TR(0x60102e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B601031:{NFSU2_TR(0x601031);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601033:{NFSU2_TR(0x601033);
if(r1(R+518)){{goto L601045;}}
}
B601035:L601035:{c.instructions+=5;NFSU2_TR(0x601035);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601039:{NFSU2_TR(0x601039);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60103d:{NFSU2_TR(0x60103d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601040:{NFSU2_TR(0x601040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601043:{NFSU2_TR(0x601043);
{goto L601047;}
}
B601045:L601045:{c.instructions+=1;NFSU2_TR(0x601045);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B601047:L601047:{c.instructions+=9;NFSU2_TR(0x601047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60104a:{NFSU2_TR(0x60104a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B60104d:{NFSU2_TR(0x60104d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B60104f:{NFSU2_TR(0x60104f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601052:{NFSU2_TR(0x601052);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601055:{NFSU2_TR(0x601055);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B601057:{NFSU2_TR(0x601057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60105a:{NFSU2_TR(0x60105a);
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
B60105c:{NFSU2_TR(0x60105c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601065;}}
}
B60105e:L60105e:{c.instructions+=2;NFSU2_TR(0x60105e);
__builtin_memmove((R+4),(R+24),4);
}
B601060:{NFSU2_TR(0x601060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601065ull));
TAIL_STATIC(0x600fa0u,600);
}
B601065:L601065:{c.instructions+=2;NFSU2_TR(0x601065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601066:{NFSU2_TR(0x601066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601070:L601070:{c.instructions+=29;NFSU2_TR(0x601070);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601072:{NFSU2_TR(0x601072);
u8 U[4];
w4(U+0,u32(0x779efbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601077:{NFSU2_TR(0x601077);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60107d:{NFSU2_TR(0x60107d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60107e:{NFSU2_TR(0x60107e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601085:{NFSU2_TR(0x601085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601086:{NFSU2_TR(0x601086);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601087:{NFSU2_TR(0x601087);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601088:{NFSU2_TR(0x601088);
__builtin_memmove((R+24),(R+4),4);
}
B60108a:{NFSU2_TR(0x60108a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60108c:{NFSU2_TR(0x60108c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B60108f:{NFSU2_TR(0x60108f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601092:{NFSU2_TR(0x601092);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601096:{NFSU2_TR(0x601096);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B601098:{NFSU2_TR(0x601098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60109b:{NFSU2_TR(0x60109b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60109c:{NFSU2_TR(0x60109c);
u8 U[4];
w4(U+0,u32(0x7a6410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6010a1:{NFSU2_TR(0x6010a1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6010a3:{NFSU2_TR(0x6010a3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6010a5:{NFSU2_TR(0x6010a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010a9:{NFSU2_TR(0x6010a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010ac:{NFSU2_TR(0x6010ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6010ae:{NFSU2_TR(0x6010ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010b1:{NFSU2_TR(0x6010b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010b4:{NFSU2_TR(0x6010b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010b7:{NFSU2_TR(0x6010b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010ba:{NFSU2_TR(0x6010ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010bd:{NFSU2_TR(0x6010bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010c0:{NFSU2_TR(0x6010c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6010c5ull));
TAIL_STATIC(0x440df0u,440);
}
B6010c5:L6010c5:{c.instructions+=23;NFSU2_TR(0x6010c5);
__builtin_memmove(gp(0x8900dc),(R+0),4);
}
B6010ca:{NFSU2_TR(0x6010ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6010cd:{NFSU2_TR(0x6010cd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6010d0:{NFSU2_TR(0x6010d0);
w4(R+4,u32(0x1ull));
}
B6010d5:{NFSU2_TR(0x6010d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010d8:{NFSU2_TR(0x6010d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010db:{NFSU2_TR(0x6010db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010de:{NFSU2_TR(0x6010de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010e1:{NFSU2_TR(0x6010e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010e4:{NFSU2_TR(0x6010e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010e7:{NFSU2_TR(0x6010e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6010eb:{NFSU2_TR(0x6010eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010ee:{NFSU2_TR(0x6010ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010f1:{NFSU2_TR(0x6010f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010f4:{NFSU2_TR(0x6010f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010f7:{NFSU2_TR(0x6010f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6010fa:{NFSU2_TR(0x6010fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6010fd:{NFSU2_TR(0x6010fd);
__builtin_memmove((R+0),(R+24),4);
}
B6010ff:{NFSU2_TR(0x6010ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601100:{NFSU2_TR(0x601100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601101:{NFSU2_TR(0x601101);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601108:{NFSU2_TR(0x601108);
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
B60110b:{NFSU2_TR(0x60110b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601110:L601110:{c.instructions+=15;NFSU2_TR(0x601110);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601116:{NFSU2_TR(0x601116);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601118:{NFSU2_TR(0x601118);
u8 U[4];
w4(U+0,u32(0x779ebfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60111d:{NFSU2_TR(0x60111d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60111e:{NFSU2_TR(0x60111e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601122:{NFSU2_TR(0x601122);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601129:{NFSU2_TR(0x601129);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60112a:{NFSU2_TR(0x60112a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60112b:{NFSU2_TR(0x60112b);
__builtin_memmove((R+24),(R+4),4);
}
B60112d:{NFSU2_TR(0x60112d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60112e:{NFSU2_TR(0x60112e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B601131:{NFSU2_TR(0x601131);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601134:{NFSU2_TR(0x601134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601135:{NFSU2_TR(0x601135);
__builtin_memmove((R+4),(R+12),4);
}
B601137:{NFSU2_TR(0x601137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60113cull));
TAIL_STATIC(0x413440u,413);
}
B60113c:L60113c:{c.instructions+=8;NFSU2_TR(0x60113c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60113e:{NFSU2_TR(0x60113e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601144:{NFSU2_TR(0x601144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601147:{NFSU2_TR(0x601147);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B60114a:{NFSU2_TR(0x60114a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60114c:{NFSU2_TR(0x60114c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60114f:{NFSU2_TR(0x60114f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601152:{NFSU2_TR(0x601152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601157ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B601157:L601157:{c.instructions+=17;NFSU2_TR(0x601157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60115a:{NFSU2_TR(0x60115a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60115d:{NFSU2_TR(0x60115d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60115f:{NFSU2_TR(0x60115f);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B601164:{NFSU2_TR(0x601164);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B60116a:{NFSU2_TR(0x60116a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B60116c:{NFSU2_TR(0x60116c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60116f:{NFSU2_TR(0x60116f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601172:{NFSU2_TR(0x601172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B601175:{NFSU2_TR(0x601175);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601177:{NFSU2_TR(0x601177);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60117a:{NFSU2_TR(0x60117a);
__builtin_memmove((R+0),(R+518),1);
}
B60117d:{NFSU2_TR(0x60117d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60117f:{NFSU2_TR(0x60117f);
w4(R+8,u32(r1(R+0)));
}
B601182:{NFSU2_TR(0x601182);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601184:{NFSU2_TR(0x601184);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601185:{NFSU2_TR(0x601185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60118aull));
TAIL_STATIC(0x639ce0u,639);
}
B60118a:L60118a:{c.instructions+=5;NFSU2_TR(0x60118a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60118d:{NFSU2_TR(0x60118d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601190:{NFSU2_TR(0x601190);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B601192:{NFSU2_TR(0x601192);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601195:{NFSU2_TR(0x601195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6011b9;}}
}
B601197:L601197:{c.instructions+=2;NFSU2_TR(0x601197);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B60119d:{NFSU2_TR(0x60119d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6011b9;}}
}
B60119f:L60119f:{c.instructions+=6;NFSU2_TR(0x60119f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6011a2:{NFSU2_TR(0x6011a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6011a4:{NFSU2_TR(0x6011a4);
__builtin_memmove(gp(0x8021b0),(R+4),4);
}
B6011aa:{NFSU2_TR(0x6011aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6011ad:{NFSU2_TR(0x6011ad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2f0ull))));
}
B6011b3:{NFSU2_TR(0x6011b3);
__builtin_memmove(gp(0x8900e8),(R+8),4);
}
B6011b9:L6011b9:{c.instructions+=3;NFSU2_TR(0x6011b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6011bc:{NFSU2_TR(0x6011bc);
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
B6011be:{NFSU2_TR(0x6011be);
if(r1(R+518)){{goto L6011c9;}}
}
B6011c0:L6011c0:{c.instructions+=3;NFSU2_TR(0x6011c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6011c2:{NFSU2_TR(0x6011c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6011c4:{NFSU2_TR(0x6011c4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6011c6ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6011c6:L6011c6:{c.instructions+=1;NFSU2_TR(0x6011c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6011c9:L6011c9:{c.instructions+=3;NFSU2_TR(0x6011c9);
__builtin_memmove((R+4),gp(0x86ad60),4);
}
B6011cf:{NFSU2_TR(0x6011cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6011d0:{NFSU2_TR(0x6011d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6011d5ull));
TAIL_STATIC(0x440e50u,440);
}
B6011d5:L6011d5:{c.instructions+=6;NFSU2_TR(0x6011d5);
__builtin_memmove((R+28),(R+0),4);
}
B6011d7:{NFSU2_TR(0x6011d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6011da:{NFSU2_TR(0x6011da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6011de:{NFSU2_TR(0x6011de);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6011e0:{NFSU2_TR(0x6011e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6011e4:{NFSU2_TR(0x6011e4);
if(r1(R+518)){{goto L6011f9;}}
}
B6011e6:L6011e6:{c.instructions+=1;NFSU2_TR(0x6011e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6011ebull));
TAIL_STATIC(0x5930a0u,593);
}
B6011eb:L6011eb:{c.instructions+=5;NFSU2_TR(0x6011eb);
w4(R+8,u32(r2(R+0)));
}
B6011ee:{NFSU2_TR(0x6011ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6011ef:{NFSU2_TR(0x6011ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6011f0:{NFSU2_TR(0x6011f0);
__builtin_memmove((R+4),(R+28),4);
}
B6011f2:{NFSU2_TR(0x6011f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6011f7ull));
TAIL_STATIC(0x5aec20u,5ae);
}
B6011f7:L6011f7:{c.instructions+=1;NFSU2_TR(0x6011f7);
{goto L6011fb;}
}
B6011f9:L6011f9:{c.instructions+=1;NFSU2_TR(0x6011f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6011fb:L6011fb:{c.instructions+=5;NFSU2_TR(0x6011fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B601201:{NFSU2_TR(0x601201);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601203:{NFSU2_TR(0x601203);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60120b:{NFSU2_TR(0x60120b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60120e:{NFSU2_TR(0x60120e);
if(r1(R+518)){{goto L601226;}}
}
B601210:L601210:{c.instructions+=2;NFSU2_TR(0x601210);
__builtin_memmove((R+4),(R+28),4);
}
B601212:{NFSU2_TR(0x601212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601217ull));
TAIL_STATIC(0x63a440u,63a);
}
B601217:L601217:{c.instructions+=2;NFSU2_TR(0x601217);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601218:{NFSU2_TR(0x601218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60121dull));
TAIL_STATIC(0x575630u,575);
}
B60121d:L60121d:{c.instructions+=2;NFSU2_TR(0x60121d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B601220:{NFSU2_TR(0x601220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601226:L601226:{c.instructions+=3;NFSU2_TR(0x601226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601229:{NFSU2_TR(0x601229);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60122f:{NFSU2_TR(0x60122f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601268;}}
}
B601231:L601231:{c.instructions+=2;NFSU2_TR(0x601231);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601236:{NFSU2_TR(0x601236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60123bull));
TAIL_STATIC(0x575620u,575);
}
B60123b:L60123b:{c.instructions+=5;NFSU2_TR(0x60123b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60123e:{NFSU2_TR(0x60123e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601242:{NFSU2_TR(0x601242);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601244:{NFSU2_TR(0x601244);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60124c:{NFSU2_TR(0x60124c);
if(r1(R+518)){{goto L601258;}}
}
B60124e:L60124e:{c.instructions+=3;NFSU2_TR(0x60124e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60124f:{NFSU2_TR(0x60124f);
__builtin_memmove((R+4),(R+0),4);
}
B601251:{NFSU2_TR(0x601251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601256ull));
TAIL_STATIC(0x63a360u,63a);
}
B601256:L601256:{c.instructions+=1;NFSU2_TR(0x601256);
{goto L60125a;}
}
B601258:L601258:{c.instructions+=1;NFSU2_TR(0x601258);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60125a:L60125a:{c.instructions+=2;NFSU2_TR(0x60125a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B601262:{NFSU2_TR(0x601262);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601268:L601268:{c.instructions+=2;NFSU2_TR(0x601268);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60126e:{NFSU2_TR(0x60126e);
if(r1(R+518)){{goto L601277;}}
}
B601270:L601270:{c.instructions+=2;NFSU2_TR(0x601270);
__builtin_memmove((R+4),(R+24),4);
}
B601272:{NFSU2_TR(0x601272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601277ull));
TAIL_STATIC(0x63a610u,63a);
}
B601277:L601277:{c.instructions+=4;NFSU2_TR(0x601277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60127a:{NFSU2_TR(0x60127a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60127b:{NFSU2_TR(0x60127b);
__builtin_memmove((R+4),(R+24),4);
}
B60127d:{NFSU2_TR(0x60127d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601282ull));
TAIL_STATIC(0x63a5a0u,63a);
}
B601282:L601282:{c.instructions+=2;NFSU2_TR(0x601282);
__builtin_memmove((R+4),(R+24),4);
}
B601284:{NFSU2_TR(0x601284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601289ull));
TAIL_STATIC(0x5f5010u,5f5);
}
B601289:L601289:{c.instructions+=4;NFSU2_TR(0x601289);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60128c:{NFSU2_TR(0x60128c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60128d:{NFSU2_TR(0x60128d);
__builtin_memmove((R+4),(R+24),4);
}
B60128f:{NFSU2_TR(0x60128f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601294ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B601294:L601294:{c.instructions+=3;NFSU2_TR(0x601294);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601295:{NFSU2_TR(0x601295);
__builtin_memmove((R+4),(R+24),4);
}
B601297:{NFSU2_TR(0x601297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60129cull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B60129c:L60129c:{c.instructions+=7;NFSU2_TR(0x60129c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6012a0:{NFSU2_TR(0x6012a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6012a1:{NFSU2_TR(0x6012a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6012a2:{NFSU2_TR(0x6012a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6012a9:{NFSU2_TR(0x6012a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6012aa:{NFSU2_TR(0x6012aa);
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
B6012ad:{NFSU2_TR(0x6012ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6012b0:L6012b0:{c.instructions+=5;NFSU2_TR(0x6012b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6012b3:{NFSU2_TR(0x6012b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6012b4:{NFSU2_TR(0x6012b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6012b5:{NFSU2_TR(0x6012b5);
__builtin_memmove((R+24),(R+4),4);
}
B6012b7:{NFSU2_TR(0x6012b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6012bcull));
TAIL_STATIC(0x5fc050u,5fc);
}
B6012bc:L6012bc:{c.instructions+=1;NFSU2_TR(0x6012bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6012c1ull));
TAIL_STATIC(0x5f6740u,5f6);
}
B6012c1:L6012c1:{c.instructions+=5;NFSU2_TR(0x6012c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6012c4:{NFSU2_TR(0x6012c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6012c8:{NFSU2_TR(0x6012c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6012ca:{NFSU2_TR(0x6012ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6012cb:{NFSU2_TR(0x6012cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6012ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6012ce:L6012ce:{c.instructions+=5;NFSU2_TR(0x6012ce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6012d2:{NFSU2_TR(0x6012d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6012d8:{NFSU2_TR(0x6012d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6012d9:{NFSU2_TR(0x6012d9);
__builtin_memmove((R+4),(R+24),4);
}
B6012db:{NFSU2_TR(0x6012db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6012e0ull));
TAIL_STATIC(0x5ebe00u,5eb);
}
B6012e0:L6012e0:{c.instructions+=4;NFSU2_TR(0x6012e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6012e4:{NFSU2_TR(0x6012e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6012e5:{NFSU2_TR(0x6012e5);
__builtin_memmove((R+4),(R+24),4);
}
B6012e7:{NFSU2_TR(0x6012e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6012ecull));
TAIL_STATIC(0x5ecac0u,5ec);
}
B6012ec:L6012ec:{c.instructions+=4;NFSU2_TR(0x6012ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6012ef:{NFSU2_TR(0x6012ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6012f5:{NFSU2_TR(0x6012f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6012f7:{NFSU2_TR(0x6012f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6012fe;}}
}
B6012f9:L6012f9:{c.instructions+=1;NFSU2_TR(0x6012f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6012feull));
TAIL_STATIC(0x5ecba0u,5ec);
}
B6012fe:L6012fe:{c.instructions+=3;NFSU2_TR(0x6012fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601304:{NFSU2_TR(0x601304);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601306:{NFSU2_TR(0x601306);
if(r1(R+518)){{goto L601525;}}
}
B60130c:L60130c:{c.instructions+=4;NFSU2_TR(0x60130c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60130f:{NFSU2_TR(0x60130f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601312:{NFSU2_TR(0x601312);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601315:{NFSU2_TR(0x601315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60133f;}}
}
B601317:L601317:{c.instructions+=3;NFSU2_TR(0x601317);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B60131d:{NFSU2_TR(0x60131d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60131f:{NFSU2_TR(0x60131f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60133f;}}
}
B601321:L601321:{c.instructions+=2;NFSU2_TR(0x601321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601324:{NFSU2_TR(0x601324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601329ull));
TAIL_STATIC(0x6009a0u,600);
}
B601329:L601329:{c.instructions+=6;NFSU2_TR(0x601329);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60132d:{NFSU2_TR(0x60132d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60132e:{NFSU2_TR(0x60132e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B601338:{NFSU2_TR(0x601338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601339:{NFSU2_TR(0x601339);
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
B60133c:{NFSU2_TR(0x60133c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60133f:L60133f:{c.instructions+=3;NFSU2_TR(0x60133f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601342:{NFSU2_TR(0x601342);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601343:{NFSU2_TR(0x601343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60139f;}}
}
B601345:L601345:{c.instructions+=4;NFSU2_TR(0x601345);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B601348:{NFSU2_TR(0x601348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601349:{NFSU2_TR(0x601349);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60134f:{NFSU2_TR(0x60134f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601354ull));
TAIL_STATIC(0x5e7e80u,5e7);
}
B601354:L601354:{c.instructions+=8;NFSU2_TR(0x601354);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60135a:{NFSU2_TR(0x60135a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601360:{NFSU2_TR(0x601360);
__builtin_memmove((R+12),(R+0),4);
}
B601362:{NFSU2_TR(0x601362);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B601364:{NFSU2_TR(0x601364);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B601366:{NFSU2_TR(0x601366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601367:{NFSU2_TR(0x601367);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B601369:{NFSU2_TR(0x601369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60136eull));
TAIL_STATIC(0x409770u,409);
}
B60136e:L60136e:{c.instructions+=2;NFSU2_TR(0x60136e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601370:{NFSU2_TR(0x601370);
if(r1(R+518)){{goto L60150e;}}
}
B601376:L601376:{c.instructions+=4;NFSU2_TR(0x601376);
__builtin_memmove((R+8),gp(0x890080),4);
}
B60137c:{NFSU2_TR(0x60137c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601382:{NFSU2_TR(0x601382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601383:{NFSU2_TR(0x601383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601388ull));
TAIL_STATIC(0x409960u,409);
}
B601388:L601388:{c.instructions+=7;NFSU2_TR(0x601388);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60138c:{NFSU2_TR(0x60138c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60138d:{NFSU2_TR(0x60138d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60138e:{NFSU2_TR(0x60138e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B601398:{NFSU2_TR(0x601398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601399:{NFSU2_TR(0x601399);
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
B60139c:{NFSU2_TR(0x60139c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60139f:L60139f:{c.instructions+=2;NFSU2_TR(0x60139f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6013a2:{NFSU2_TR(0x6013a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6013a7ull));
TAIL_STATIC(0x40f690u,40f);
}
B6013a7:L6013a7:{c.instructions+=9;NFSU2_TR(0x6013a7);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6013ad:{NFSU2_TR(0x6013ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6013b3:{NFSU2_TR(0x6013b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6013b6:{NFSU2_TR(0x6013b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6013b9:{NFSU2_TR(0x6013b9);
__builtin_memmove((R+12),(R+0),4);
}
B6013bb:{NFSU2_TR(0x6013bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6013c3:{NFSU2_TR(0x6013c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6013c5:{NFSU2_TR(0x6013c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6013c8:{NFSU2_TR(0x6013c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6013d0;}}
}
B6013ca:L6013ca:{c.instructions+=2;NFSU2_TR(0x6013ca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6013ce:{NFSU2_TR(0x6013ce);
{goto L6013da;}
}
B6013d0:L6013d0:{c.instructions+=2;NFSU2_TR(0x6013d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6013d2:{NFSU2_TR(0x6013d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6013da:L6013da:{c.instructions+=3;NFSU2_TR(0x6013da);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B6013df:{NFSU2_TR(0x6013df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6013e1:{NFSU2_TR(0x6013e1);
if(r1(R+518)){{goto L6013f1;}}
}
B6013e3:L6013e3:{c.instructions+=3;NFSU2_TR(0x6013e3);
{u32 ea_=u32(r4(R+24)+u32(2304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6013e9:{NFSU2_TR(0x6013e9);
{u32 ea_=u32(r4(R+24)+u32(2308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6013ef:{NFSU2_TR(0x6013ef);
{goto L601423;}
}
B6013f1:L6013f1:{c.instructions+=2;NFSU2_TR(0x6013f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6013f3:{NFSU2_TR(0x6013f3);
if(r1(R+518)){{goto L601417;}}
}
B6013f5:L6013f5:{c.instructions+=2;NFSU2_TR(0x6013f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6013f7:{NFSU2_TR(0x6013f7);
if(r1(R+518)){{goto L601417;}}
}
B6013f9:L6013f9:{c.instructions+=9;NFSU2_TR(0x6013f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6013fc:{NFSU2_TR(0x6013fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6013fe:{NFSU2_TR(0x6013fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601400:{NFSU2_TR(0x601400);
__builtin_memmove((R+0),(R+518),1);
}
B601403:{NFSU2_TR(0x601403);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601407:{NFSU2_TR(0x601407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601408:{NFSU2_TR(0x601408);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601409:{NFSU2_TR(0x601409);
__builtin_memmove((R+4),(R+28),4);
}
B60140b:{NFSU2_TR(0x60140b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601410ull));
TAIL_STATIC(0x401b20u,401);
}
B601410:L601410:{c.instructions+=3;NFSU2_TR(0x601410);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601412:{NFSU2_TR(0x601412);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601415:{NFSU2_TR(0x601415);
{goto L601423;}
}
B601417:L601417:{c.instructions+=2;NFSU2_TR(0x601417);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60141d:{NFSU2_TR(0x60141d);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601423:L601423:{c.instructions+=8;NFSU2_TR(0x601423);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601429:{NFSU2_TR(0x601429);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60142b:{NFSU2_TR(0x60142b);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601431:{NFSU2_TR(0x601431);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B601433:{NFSU2_TR(0x601433);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B601439:{NFSU2_TR(0x601439);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60143b:{NFSU2_TR(0x60143b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60143e:{NFSU2_TR(0x60143e);
if(r1(R+518)){{goto L601448;}}
}
B601440:L601440:{c.instructions+=2;NFSU2_TR(0x601440);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B601442:{NFSU2_TR(0x601442);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601448:L601448:{c.instructions+=6;NFSU2_TR(0x601448);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60144c:{NFSU2_TR(0x60144c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B601450:{NFSU2_TR(0x601450);
{u32 ea_=u32(u32(8397260u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601456:{NFSU2_TR(0x601456);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601458:{NFSU2_TR(0x601458);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60145b:{NFSU2_TR(0x60145b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L601467;}}
}
B60145d:L60145d:{c.instructions+=2;NFSU2_TR(0x60145d);
__builtin_memmove((R+8),gp(0x8021cc),4);
}
B601463:{NFSU2_TR(0x601463);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601467:L601467:{c.instructions+=5;NFSU2_TR(0x601467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60146a:{NFSU2_TR(0x60146a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60146d:{NFSU2_TR(0x60146d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601470:{NFSU2_TR(0x601470);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B601478:{NFSU2_TR(0x601478);
if(r1(R+518)){{goto L60147f;}}
}
B60147a:L60147a:{c.instructions+=2;NFSU2_TR(0x60147a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60147d:{NFSU2_TR(0x60147d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6014ae;}}
}
B60147f:L60147f:{c.instructions+=3;NFSU2_TR(0x60147f);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B601484:{NFSU2_TR(0x601484);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601486:{NFSU2_TR(0x601486);
if(r1(R+518)){{goto L601498;}}
}
B601488:L601488:{c.instructions+=2;NFSU2_TR(0x601488);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60148a:{NFSU2_TR(0x60148a);
if(r1(R+518)){{goto L6014ae;}}
}
B60148c:L60148c:{c.instructions+=4;NFSU2_TR(0x60148c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60148f:{NFSU2_TR(0x60148f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x2ull))));
}
B601492:{NFSU2_TR(0x601492);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601494:{NFSU2_TR(0x601494);
if(r1(R+518)){{goto L6014ae;}}
}
B601496:L601496:{c.instructions+=1;NFSU2_TR(0x601496);
{goto L6014a6;}
}
B601498:L601498:{c.instructions+=3;NFSU2_TR(0x601498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60149b:{NFSU2_TR(0x60149b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60149d:{NFSU2_TR(0x60149d);
if(r1(R+518)){{goto L6014ae;}}
}
B60149f:L60149f:{c.instructions+=3;NFSU2_TR(0x60149f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6014a2:{NFSU2_TR(0x6014a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6014a4:{NFSU2_TR(0x6014a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6014ae;}}
}
B6014a6:L6014a6:{c.instructions+=1;NFSU2_TR(0x6014a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6014ae:L6014ae:{c.instructions+=3;NFSU2_TR(0x6014ae);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B6014b3:{NFSU2_TR(0x6014b3);
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
B6014b5:{NFSU2_TR(0x6014b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6014c0;}}
}
B6014b7:L6014b7:{c.instructions+=3;NFSU2_TR(0x6014b7);
__builtin_memmove((R+0),gp(0x890108),4);
}
B6014bc:{NFSU2_TR(0x6014bc);
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
B6014be:{NFSU2_TR(0x6014be);
if(r1(R+518)){{goto L6014f0;}}
}
B6014c0:L6014c0:{c.instructions+=3;NFSU2_TR(0x6014c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6014c3:{NFSU2_TR(0x6014c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6014c5:{NFSU2_TR(0x6014c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6014c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6014c8:L6014c8:{c.instructions+=4;NFSU2_TR(0x6014c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6014cb:{NFSU2_TR(0x6014cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6014ce:{NFSU2_TR(0x6014ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6014d0:{NFSU2_TR(0x6014d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6014db;}}
}
B6014d2:L6014d2:{c.instructions+=2;NFSU2_TR(0x6014d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6014d3:{NFSU2_TR(0x6014d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6014d8ull));
TAIL_STATIC(0x403db0u,403);
}
B6014d8:L6014d8:{c.instructions+=1;NFSU2_TR(0x6014d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6014db:L6014db:{c.instructions+=2;NFSU2_TR(0x6014db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6014dd:{NFSU2_TR(0x6014dd);
if(r1(R+518)){{goto L6014f0;}}
}
B6014df:L6014df:{c.instructions+=2;NFSU2_TR(0x6014df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6014e2:{NFSU2_TR(0x6014e2);
if(r1(R+518)){{goto L6014f0;}}
}
B6014e4:L6014e4:{c.instructions+=3;NFSU2_TR(0x6014e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6014e5:{NFSU2_TR(0x6014e5);
__builtin_memmove((R+4),(R+28),4);
}
B6014e7:{NFSU2_TR(0x6014e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6014ecull));
TAIL_STATIC(0x5e2da0u,5e2);
}
B6014ec:L6014ec:{c.instructions+=1;NFSU2_TR(0x6014ec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6014f0:L6014f0:{c.instructions+=13;NFSU2_TR(0x6014f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6014f4:{NFSU2_TR(0x6014f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6014f8:{NFSU2_TR(0x6014f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6014fc:{NFSU2_TR(0x6014fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6014fd:{NFSU2_TR(0x6014fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6014ff:{NFSU2_TR(0x6014ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601501:{NFSU2_TR(0x601501);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601502:{NFSU2_TR(0x601502);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601504:{NFSU2_TR(0x601504);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601505:{NFSU2_TR(0x601505);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601506:{NFSU2_TR(0x601506);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601507:{NFSU2_TR(0x601507);
__builtin_memmove((R+4),(R+24),4);
}
B601509:{NFSU2_TR(0x601509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60150eull));
TAIL_STATIC(0x5fbed0u,5fb);
}
B60150e:L60150e:{c.instructions+=7;NFSU2_TR(0x60150e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601512:{NFSU2_TR(0x601512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601513:{NFSU2_TR(0x601513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601514:{NFSU2_TR(0x601514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60151e:{NFSU2_TR(0x60151e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60151f:{NFSU2_TR(0x60151f);
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
B601522:{NFSU2_TR(0x601522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601525:L601525:{c.instructions+=5;NFSU2_TR(0x601525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60152b:{NFSU2_TR(0x60152b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60152d:{NFSU2_TR(0x60152d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B601530:{NFSU2_TR(0x601530);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601536:{NFSU2_TR(0x601536);
if(r1(R+518)){{goto L6015ed;}}
}
B60153c:L60153c:{c.instructions+=2;NFSU2_TR(0x60153c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601541:{NFSU2_TR(0x601541);
if(r1(R+518)){{goto L6015ed;}}
}
B601547:L601547:{c.instructions+=12;NFSU2_TR(0x601547);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B60154d:{NFSU2_TR(0x60154d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B601553:{NFSU2_TR(0x601553);
__builtin_memmove((R+0),(R+8),4);
}
B601555:{NFSU2_TR(0x601555);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B601557:{NFSU2_TR(0x601557);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60155b:{NFSU2_TR(0x60155b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60155f:{NFSU2_TR(0x60155f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601565:{NFSU2_TR(0x601565);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B601569:{NFSU2_TR(0x601569);
{u32 ea_=u32(r4(R+24)+u32(2424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60156f:{NFSU2_TR(0x60156f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601571:{NFSU2_TR(0x601571);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B601574:{NFSU2_TR(0x601574);
if(r1(R+514)){{goto L6015ed;}}
}
B601576:L601576:{c.instructions+=2;NFSU2_TR(0x601576);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601578:{NFSU2_TR(0x601578);
if(r1(R+518)){{goto L6015ed;}}
}
B60157a:L60157a:{c.instructions+=2;NFSU2_TR(0x60157a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601580:{NFSU2_TR(0x601580);
if(r1(R+518)){{goto L6015ed;}}
}
B601582:L601582:{c.instructions+=6;NFSU2_TR(0x601582);
{u32 ea_=u32(r4(R+24)+u32(2424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601588:{NFSU2_TR(0x601588);
{u32 ea_=u32(u32(8397264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60158e:{NFSU2_TR(0x60158e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601592:{NFSU2_TR(0x601592);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601594:{NFSU2_TR(0x601594);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B601597:{NFSU2_TR(0x601597);
if(r1(R+514)){{goto L6015ed;}}
}
B601599:L601599:{c.instructions+=8;NFSU2_TR(0x601599);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B60159b:{NFSU2_TR(0x60159b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60159f:{NFSU2_TR(0x60159f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6015a3:{NFSU2_TR(0x6015a3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6015a9:{NFSU2_TR(0x6015a9);
{u32 ea_=u32(u32(8397264u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6015af:{NFSU2_TR(0x6015af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6015b1:{NFSU2_TR(0x6015b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6015b4:{NFSU2_TR(0x6015b4);
if(r1(R+514)){{goto L6015eb;}}
}
B6015b6:L6015b6:{c.instructions+=4;NFSU2_TR(0x6015b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6015bc:{NFSU2_TR(0x6015bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6015be:{NFSU2_TR(0x6015be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6015c1:{NFSU2_TR(0x6015c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6015ed;}}
}
B6015c3:L6015c3:{c.instructions+=4;NFSU2_TR(0x6015c3);
__builtin_memmove((R+4),gp(0x8021d0),4);
}
B6015c9:{NFSU2_TR(0x6015c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6015ca:{NFSU2_TR(0x6015ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6015ce:{NFSU2_TR(0x6015ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6015d3ull));
TAIL_STATIC(0x4ae7b0u,4ae);
}
B6015d3:L6015d3:{c.instructions+=9;NFSU2_TR(0x6015d3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6015d7:{NFSU2_TR(0x6015d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6015d9:{NFSU2_TR(0x6015d9);
__builtin_memmove((R+0),(R+28),4);
}
B6015db:{NFSU2_TR(0x6015db);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6015dd:{NFSU2_TR(0x6015dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6015de:{NFSU2_TR(0x6015de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6015e4:{NFSU2_TR(0x6015e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6015e5:{NFSU2_TR(0x6015e5);
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
B6015e8:{NFSU2_TR(0x6015e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6015eb:L6015eb:{c.instructions+=1;NFSU2_TR(0x6015eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6015ed:L6015ed:{c.instructions+=5;NFSU2_TR(0x6015ed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6015f1:{NFSU2_TR(0x6015f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6015f2:{NFSU2_TR(0x6015f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6015f3:{NFSU2_TR(0x6015f3);
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
B6015f6:{NFSU2_TR(0x6015f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601600:L601600:{c.instructions+=6;NFSU2_TR(0x601600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601601:{NFSU2_TR(0x601601);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601602:{NFSU2_TR(0x601602);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B601606:{NFSU2_TR(0x601606);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60160a:{NFSU2_TR(0x60160a);
__builtin_memmove((R+24),(R+4),4);
}
B60160c:{NFSU2_TR(0x60160c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60163d;}}
}
B60160e:L60160e:{c.instructions+=3;NFSU2_TR(0x60160e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B601614:{NFSU2_TR(0x601614);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601616:{NFSU2_TR(0x601616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60163d;}}
}
B601618:L601618:{c.instructions+=3;NFSU2_TR(0x601618);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60161a:{NFSU2_TR(0x60161a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60161d:{NFSU2_TR(0x60161d);
__builtin_memmove((R+4),(R+4),4);
}
B601620:L601620:{c.instructions+=2;NFSU2_TR(0x601620);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601623:{NFSU2_TR(0x601623);
if(r1(R+518)){{goto L60163d;}}
}
B601625:L601625:{c.instructions+=2;NFSU2_TR(0x601625);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B601628:{NFSU2_TR(0x601628);
if(r1(R+518)){{goto L601635;}}
}
B60162a:L60162a:{c.instructions+=4;NFSU2_TR(0x60162a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60162b:{NFSU2_TR(0x60162b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B60162e:{NFSU2_TR(0x60162e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B601631:{NFSU2_TR(0x601631);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x601620u);}goto L601620;}}
}
B601633:L601633:{c.instructions+=1;NFSU2_TR(0x601633);
{goto L60163d;}
}
B601635:L601635:{c.instructions+=2;NFSU2_TR(0x601635);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B601639:{NFSU2_TR(0x601639);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B60163d:L60163d:{c.instructions+=2;NFSU2_TR(0x60163d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x16ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B601641:{NFSU2_TR(0x601641);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L601693;}}
}
B601643:L601643:{c.instructions+=6;NFSU2_TR(0x601643);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B601647:{NFSU2_TR(0x601647);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60164a:{NFSU2_TR(0x60164a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60164c:{NFSU2_TR(0x60164c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60164d:{NFSU2_TR(0x60164d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60164e:{NFSU2_TR(0x60164e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601653ull));
TAIL_STATIC(0x6101a0u,610);
}
B601653:L601653:{c.instructions+=7;NFSU2_TR(0x601653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601656:{NFSU2_TR(0x601656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B601659:{NFSU2_TR(0x601659);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x940ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B60165f:{NFSU2_TR(0x60165f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B601662:{NFSU2_TR(0x601662);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601663:{NFSU2_TR(0x601663);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B601665:{NFSU2_TR(0x601665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60166aull));
TAIL_STATIC(0x5fc130u,5fc);
}
B60166a:L60166a:{c.instructions+=4;NFSU2_TR(0x60166a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B60166d:{NFSU2_TR(0x60166d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B601673:{NFSU2_TR(0x601673);
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
B601675:{NFSU2_TR(0x601675);
if(r1(R+518)){{goto L601693;}}
}
B601677:L601677:{c.instructions+=3;NFSU2_TR(0x601677);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60167a:{NFSU2_TR(0x60167a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60167d:{NFSU2_TR(0x60167d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60168b;}}
}
B60167f:L60167f:{c.instructions+=6;NFSU2_TR(0x60167f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601682:{NFSU2_TR(0x601682);
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
B601683:{NFSU2_TR(0x601683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601684:{NFSU2_TR(0x601684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601687:{NFSU2_TR(0x601687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601688:{NFSU2_TR(0x601688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60168b:L60168b:{c.instructions+=2;NFSU2_TR(0x60168b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B60168e:{NFSU2_TR(0x60168e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601693;}}
}
B601690:L601690:{c.instructions+=1;NFSU2_TR(0x601690);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B601693:L601693:{c.instructions+=3;NFSU2_TR(0x601693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601694:{NFSU2_TR(0x601694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601695:{NFSU2_TR(0x601695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6016a0:L6016a0:{c.instructions+=6;NFSU2_TR(0x6016a0);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6016a5:{NFSU2_TR(0x6016a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6016a8:{NFSU2_TR(0x6016a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6016ab:{NFSU2_TR(0x6016ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6016ac:{NFSU2_TR(0x6016ac);
__builtin_memmove((R+24),(R+4),4);
}
B6016ae:{NFSU2_TR(0x6016ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6016b7;}}
}
B6016b0:L6016b0:{c.instructions+=1;NFSU2_TR(0x6016b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6016b5ull));
TAIL_STATIC(0x5fc510u,5fc);
}
B6016b5:L6016b5:{c.instructions+=1;NFSU2_TR(0x6016b5);
{goto L6016d6;}
}
B6016b7:L6016b7:{c.instructions+=2;NFSU2_TR(0x6016b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6016ba:{NFSU2_TR(0x6016ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6016cf;}}
}
B6016bc:L6016bc:{c.instructions+=4;NFSU2_TR(0x6016bc);
__builtin_memmove((R+0),gp(0x865154),4);
}
B6016c1:{NFSU2_TR(0x6016c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6016c7:{NFSU2_TR(0x6016c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6016c8:{NFSU2_TR(0x6016c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6016cdull));
TAIL_STATIC(0x56e6e0u,56e);
}
B6016cd:L6016cd:{c.instructions+=1;NFSU2_TR(0x6016cd);
{goto L6016d6;}
}
B6016cf:L6016cf:{c.instructions+=2;NFSU2_TR(0x6016cf);
__builtin_memmove((R+4),(R+24),4);
}
B6016d1:{NFSU2_TR(0x6016d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6016d6ull));
TAIL_STATIC(0x5f7c30u,5f7);
}
B6016d6:L6016d6:{c.instructions+=3;NFSU2_TR(0x6016d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6016d7:{NFSU2_TR(0x6016d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6016dd:{NFSU2_TR(0x6016dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6016e2ull));
TAIL_STATIC(0x5f7410u,5f7);
}
B6016e2:L6016e2:{c.instructions+=3;NFSU2_TR(0x6016e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6016e8:{NFSU2_TR(0x6016e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6016ea:{NFSU2_TR(0x6016ea);
if(r1(R+518)){{goto L6016f8;}}
}
B6016ec:L6016ec:{c.instructions+=3;NFSU2_TR(0x6016ec);
__builtin_memmove((R+8),gp(0x865154),4);
}
B6016f2:{NFSU2_TR(0x6016f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6016f3:{NFSU2_TR(0x6016f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6016f8ull));
TAIL_STATIC(0x56ff30u,56f);
}
B6016f8:L6016f8:{c.instructions+=3;NFSU2_TR(0x6016f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6016fe:{NFSU2_TR(0x6016fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601700:{NFSU2_TR(0x601700);
if(r1(R+518)){{goto L60170e;}}
}
B601702:L601702:{c.instructions+=4;NFSU2_TR(0x601702);
__builtin_memmove((R+0),gp(0x865154),4);
}
B601707:{NFSU2_TR(0x601707);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601708:{NFSU2_TR(0x601708);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601709:{NFSU2_TR(0x601709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60170eull));
TAIL_STATIC(0x56fd10u,56f);
}
B60170e:L60170e:{c.instructions+=3;NFSU2_TR(0x60170e);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B601713:{NFSU2_TR(0x601713);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601715:{NFSU2_TR(0x601715);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601720;}}
}
B601717:L601717:{c.instructions+=3;NFSU2_TR(0x601717);
__builtin_memmove((R+0),gp(0x890104),4);
}
B60171c:{NFSU2_TR(0x60171c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60171e:{NFSU2_TR(0x60171e);
if(r1(R+518)){{goto L601727;}}
}
B601720:L601720:{c.instructions+=2;NFSU2_TR(0x601720);
__builtin_memmove((R+4),(R+24),4);
}
B601722:{NFSU2_TR(0x601722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601727ull));
TAIL_STATIC(0x5f7a00u,5f7);
}
B601727:L601727:{c.instructions+=3;NFSU2_TR(0x601727);
__builtin_memmove((R+0),gp(0x89e7e7),1);
}
B60172c:{NFSU2_TR(0x60172c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60172e:{NFSU2_TR(0x60172e);
if(r1(R+518)){{goto L601856;}}
}
B601734:L601734:{c.instructions+=3;NFSU2_TR(0x601734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60173a:{NFSU2_TR(0x60173a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60173c:{NFSU2_TR(0x60173c);
if(r1(R+518)){{goto L601785;}}
}
B60173e:L60173e:{c.instructions+=2;NFSU2_TR(0x60173e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601740:{NFSU2_TR(0x601740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601745ull));
TAIL_STATIC(0x56c7d0u,56c);
}
B601745:L601745:{c.instructions+=5;NFSU2_TR(0x601745);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60174b:{NFSU2_TR(0x60174b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601751:{NFSU2_TR(0x601751);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601753:{NFSU2_TR(0x601753);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601757:{NFSU2_TR(0x601757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60175cull));
TAIL_STATIC(0x56c7d0u,56c);
}
B60175c:L60175c:{c.instructions+=9;NFSU2_TR(0x60175c);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601762:{NFSU2_TR(0x601762);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601763:{NFSU2_TR(0x601763);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601767:{NFSU2_TR(0x601767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B601769:{NFSU2_TR(0x601769);
{u32 ea_=u32(u32(8016984u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B60176f:{NFSU2_TR(0x60176f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B601772:{NFSU2_TR(0x601772);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601778:{NFSU2_TR(0x601778);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60177b:{NFSU2_TR(0x60177b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601780ull));
TAIL_STATIC(0x592640u,592);
}
B601780:L601780:{c.instructions+=3;NFSU2_TR(0x601780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601781:{NFSU2_TR(0x601781);
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
B601784:{NFSU2_TR(0x601784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601785:L601785:{c.instructions+=4;NFSU2_TR(0x601785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B601787:{NFSU2_TR(0x601787);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60178a:{NFSU2_TR(0x60178a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60178e:{NFSU2_TR(0x60178e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601856;}}
}
B601794:L601794:{c.instructions+=3;NFSU2_TR(0x601794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601797:{NFSU2_TR(0x601797);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601799:{NFSU2_TR(0x601799);
if(r1(R+518)){{goto L601856;}}
}
B60179f:L60179f:{c.instructions+=2;NFSU2_TR(0x60179f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6017a4:{NFSU2_TR(0x6017a4);
if(r1(R+518)){{goto L601856;}}
}
B6017aa:L6017aa:{c.instructions+=9;NFSU2_TR(0x6017aa);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B6017af:{NFSU2_TR(0x6017af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6017b2:{NFSU2_TR(0x6017b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6017b6:{NFSU2_TR(0x6017b6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6017ba:{NFSU2_TR(0x6017ba);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6017c0:{NFSU2_TR(0x6017c0);
{u32 ea_=u32(u32(8017564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6017c6:{NFSU2_TR(0x6017c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6017c8:{NFSU2_TR(0x6017c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6017cb:{NFSU2_TR(0x6017cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601856;}}
}
B6017d1:L6017d1:{c.instructions+=9;NFSU2_TR(0x6017d1);
{u32 ea_=u32(r4(R+4)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6017d7:{NFSU2_TR(0x6017d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6017da:{NFSU2_TR(0x6017da);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6017e0:{NFSU2_TR(0x6017e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6017e2:{NFSU2_TR(0x6017e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6017e3:{NFSU2_TR(0x6017e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6017e4:{NFSU2_TR(0x6017e4);
w4(R+4,u32(0x88f298ull));
}
B6017e9:{NFSU2_TR(0x6017e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6017ec:{NFSU2_TR(0x6017ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6017f1ull));
TAIL_STATIC(0x5d5d10u,5d5);
}
B6017f1:L6017f1:{c.instructions+=3;NFSU2_TR(0x6017f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6017f2:{NFSU2_TR(0x6017f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6017f5:{NFSU2_TR(0x6017f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6017faull));
TAIL_STATIC(0x401050u,401);
}
B6017fa:L6017fa:{c.instructions+=7;NFSU2_TR(0x6017fa);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601800:{NFSU2_TR(0x601800);
__builtin_memmove((R+0),gp(0x7a56a0),4);
}
B601805:{NFSU2_TR(0x601805);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B601808:{NFSU2_TR(0x601808);
w4(R+4,u32(0x89e7a0ull));
}
B60180d:{NFSU2_TR(0x60180d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601811:{NFSU2_TR(0x601811);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601815:{NFSU2_TR(0x601815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60181aull));
TAIL_STATIC(0x4018f0u,401);
}
B60181a:L60181a:{c.instructions+=2;NFSU2_TR(0x60181a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60181c:{NFSU2_TR(0x60181c);
if(r1(R+518)){{goto L601826;}}
}
B60181e:L60181e:{c.instructions+=2;NFSU2_TR(0x60181e);
{u32 ea_=u32(u32(8017572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601824:{NFSU2_TR(0x601824);
{goto L60182a;}
}
B601826:L601826:{c.instructions+=1;NFSU2_TR(0x601826);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60182a:L60182a:{c.instructions+=6;NFSU2_TR(0x60182a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60182e:{NFSU2_TR(0x60182e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60182f:{NFSU2_TR(0x60182f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B601831:{NFSU2_TR(0x601831);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B601834:{NFSU2_TR(0x601834);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601837:{NFSU2_TR(0x601837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60183cull));
TAIL_STATIC(0x592640u,592);
}
B60183c:L60183c:{c.instructions+=6;NFSU2_TR(0x60183c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60183e:{NFSU2_TR(0x60183e);
{u32 ea_=u32(r4(R+4)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601844:{NFSU2_TR(0x601844);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60184a:{NFSU2_TR(0x60184a);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60184d:{NFSU2_TR(0x60184d);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B601853:{NFSU2_TR(0x601853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601856:L601856:{c.instructions+=3;NFSU2_TR(0x601856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601857:{NFSU2_TR(0x601857);
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
B60185a:{NFSU2_TR(0x60185a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601860:L601860:{c.instructions+=8;NFSU2_TR(0x601860);
__builtin_memmove((R+0),gp(0x890080),4);
}
B601865:{NFSU2_TR(0x601865);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601866:{NFSU2_TR(0x601866);
__builtin_memmove((R+24),(R+4),4);
}
B601868:{NFSU2_TR(0x601868);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60186b:{NFSU2_TR(0x60186b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60186c:{NFSU2_TR(0x60186c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60186e:{NFSU2_TR(0x60186e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601870:{NFSU2_TR(0x601870);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6018c0;}}
}
B601872:L601872:{c.instructions+=3;NFSU2_TR(0x601872);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601873:{NFSU2_TR(0x601873);
w4(R+12,u32(0x1cull));
}
B601878:{NFSU2_TR(0x601878);
{goto L601880;}
}
B601880:L601880:{c.instructions+=6;NFSU2_TR(0x601880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601883:{NFSU2_TR(0x601883);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B601886:{NFSU2_TR(0x601886);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B60188c:{NFSU2_TR(0x60188c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60188d:{NFSU2_TR(0x60188d);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B601891:{NFSU2_TR(0x601891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601896ull));
TAIL_STATIC(0x5fc2a0u,5fc);
}
B601896:L601896:{c.instructions+=12;NFSU2_TR(0x601896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601899:{NFSU2_TR(0x601899);
__builtin_memmove((R+8),(R+0),4);
}
B60189b:{NFSU2_TR(0x60189b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6018a1:{NFSU2_TR(0x6018a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6018a5:{NFSU2_TR(0x6018a5);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6018ac:{NFSU2_TR(0x6018ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6018af:{NFSU2_TR(0x6018af);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6018b4:{NFSU2_TR(0x6018b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6018b7:{NFSU2_TR(0x6018b7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6018b8:{NFSU2_TR(0x6018b8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6018bb:{NFSU2_TR(0x6018bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6018bd:{NFSU2_TR(0x6018bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x601880u);}goto L601880;}}
}
B6018bf:L6018bf:{c.instructions+=1;NFSU2_TR(0x6018bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6018c0:L6018c0:{c.instructions+=3;NFSU2_TR(0x6018c0);
__builtin_memmove((R+4),gp(0x89e7b0),4);
}
B6018c6:{NFSU2_TR(0x6018c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6018c8:{NFSU2_TR(0x6018c8);
if(r1(R+518)){{goto L601924;}}
}
B6018ca:L6018ca:{c.instructions+=6;NFSU2_TR(0x6018ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6018cd:{NFSU2_TR(0x6018cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6018d0:{NFSU2_TR(0x6018d0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6018d2:{NFSU2_TR(0x6018d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6018d4:{NFSU2_TR(0x6018d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6018d6:{NFSU2_TR(0x6018d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L601924;}}
}
B6018d8:L6018d8:{c.instructions+=1;NFSU2_TR(0x6018d8);
{goto L6018e0;}
}
B6018e0:L6018e0:{c.instructions+=7;NFSU2_TR(0x6018e0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6018e2:{NFSU2_TR(0x6018e2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6018e6:{NFSU2_TR(0x6018e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6018e9:{NFSU2_TR(0x6018e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6018ef:{NFSU2_TR(0x6018ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6018f0:{NFSU2_TR(0x6018f0);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6018f4:{NFSU2_TR(0x6018f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6018f9ull));
TAIL_STATIC(0x5fc2a0u,5fc);
}
B6018f9:L6018f9:{c.instructions+=13;NFSU2_TR(0x6018f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6018fc:{NFSU2_TR(0x6018fc);
__builtin_memmove((R+8),(R+0),4);
}
B6018fe:{NFSU2_TR(0x6018fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1f0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B601904:{NFSU2_TR(0x601904);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B601908:{NFSU2_TR(0x601908);
u8 U[16];
w4(U+0,u32(u32(u32(0xbd0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B60190f:{NFSU2_TR(0x60190f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B601912:{NFSU2_TR(0x601912);
__builtin_memmove((R+0),gp(0x890080),4);
}
B601917:{NFSU2_TR(0x601917);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60191a:{NFSU2_TR(0x60191a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60191d:{NFSU2_TR(0x60191d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60191e:{NFSU2_TR(0x60191e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B601920:{NFSU2_TR(0x601920);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B601922:{NFSU2_TR(0x601922);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6018e0u);}goto L6018e0;}}
}
B601924:L601924:{c.instructions+=2;NFSU2_TR(0x601924);
__builtin_memmove((R+4),(R+24),4);
}
B601926:{NFSU2_TR(0x601926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60192bull));
TAIL_STATIC(0x5eec80u,5ee);
}
B60192b:L60192b:{c.instructions+=4;NFSU2_TR(0x60192b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60192c:{NFSU2_TR(0x60192c);
__builtin_memmove((R+4),(R+24),4);
}
B60192e:{NFSU2_TR(0x60192e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60192f:{NFSU2_TR(0x60192f);
TAIL_STATIC(0x5eec80u,5ee);
}
B601940:L601940:{c.instructions+=3;NFSU2_TR(0x601940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601941:{NFSU2_TR(0x601941);
__builtin_memmove((R+24),(R+4),4);
}
B601943:{NFSU2_TR(0x601943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601948ull));
TAIL_STATIC(0x5fccb0u,5fc);
}
B601948:L601948:{c.instructions+=2;NFSU2_TR(0x601948);
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
B60194d:{NFSU2_TR(0x60194d);
if(r1(R+518)){{goto L601958;}}
}
B60194f:L60194f:{c.instructions+=2;NFSU2_TR(0x60194f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601950:{NFSU2_TR(0x601950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601955ull));
TAIL_STATIC(0x575630u,575);
}
B601955:L601955:{c.instructions+=1;NFSU2_TR(0x601955);
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
B601958:L601958:{c.instructions+=3;NFSU2_TR(0x601958);
__builtin_memmove((R+0),(R+24),4);
}
B60195a:{NFSU2_TR(0x60195a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60195b:{NFSU2_TR(0x60195b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601960:L601960:{c.instructions+=7;NFSU2_TR(0x601960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B601966:{NFSU2_TR(0x601966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601967:{NFSU2_TR(0x601967);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601968:{NFSU2_TR(0x601968);
__builtin_memmove((R+24),(R+4),4);
}
B60196a:{NFSU2_TR(0x60196a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60196b:{NFSU2_TR(0x60196b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60196f:{NFSU2_TR(0x60196f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601974ull));
TAIL_STATIC(0x583fc0u,583);
}
B601974:L601974:{c.instructions+=5;NFSU2_TR(0x601974);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B601978:{NFSU2_TR(0x601978);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60197a:{NFSU2_TR(0x60197a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60197b:{NFSU2_TR(0x60197b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60197f:{NFSU2_TR(0x60197f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601984ull));
TAIL_STATIC(0x581d00u,581);
}
B601984:L601984:{c.instructions+=5;NFSU2_TR(0x601984);
u8 U[5];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B60198c:{NFSU2_TR(0x60198c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60198e:{NFSU2_TR(0x60198e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60198f:{NFSU2_TR(0x60198f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601993:{NFSU2_TR(0x601993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601998ull));
TAIL_STATIC(0x581d00u,581);
}
B601998:L601998:{c.instructions+=4;NFSU2_TR(0x601998);
u8 U[5];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60199f:{NFSU2_TR(0x60199f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6019a1:{NFSU2_TR(0x6019a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6019a8:{NFSU2_TR(0x6019a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6019b3;}}
}
B6019aa:L6019aa:{c.instructions+=2;NFSU2_TR(0x6019aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6019ad:{NFSU2_TR(0x6019ad);
if(r1(R+518)){{goto L6019b3;}}
}
B6019af:L6019af:{c.instructions+=2;NFSU2_TR(0x6019af);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6019b1:{NFSU2_TR(0x6019b1);
{goto L6019b5;}
}
B6019b3:L6019b3:{c.instructions+=1;NFSU2_TR(0x6019b3);
w1(R+0,u8(0x1ull));
}
B6019b5:L6019b5:{c.instructions+=5;NFSU2_TR(0x6019b5);
w4(R+8,u32(r1(R+0)));
}
B6019b8:{NFSU2_TR(0x6019b8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019ba:{NFSU2_TR(0x6019ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019bb:{NFSU2_TR(0x6019bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6019bf:{NFSU2_TR(0x6019bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6019c4ull));
TAIL_STATIC(0x581d00u,581);
}
B6019c4:L6019c4:{c.instructions+=5;NFSU2_TR(0x6019c4);
w4(R+0,u32(r1(R+12)));
}
B6019c7:{NFSU2_TR(0x6019c7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019c9:{NFSU2_TR(0x6019c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019ca:{NFSU2_TR(0x6019ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6019ce:{NFSU2_TR(0x6019ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6019d3ull));
TAIL_STATIC(0x581d00u,581);
}
B6019d3:L6019d3:{c.instructions+=5;NFSU2_TR(0x6019d3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019d5:{NFSU2_TR(0x6019d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6019db:{NFSU2_TR(0x6019db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019dc:{NFSU2_TR(0x6019dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6019e0:{NFSU2_TR(0x6019e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6019e5ull));
TAIL_STATIC(0x583fe0u,583);
}
B6019e5:L6019e5:{c.instructions+=4;NFSU2_TR(0x6019e5);
__builtin_memmove((R+0),gp(0x890118),4);
}
B6019ea:{NFSU2_TR(0x6019ea);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6019ec:{NFSU2_TR(0x6019ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6019ee:{NFSU2_TR(0x6019ee);
if(r1(R+518)){{goto L601a0b;}}
}
B6019f0:L6019f0:{c.instructions+=3;NFSU2_TR(0x6019f0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B6019f6:{NFSU2_TR(0x6019f6);
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
B6019f8:{NFSU2_TR(0x6019f8);
if(r1(R+518)){{goto L601a0b;}}
}
B6019fa:L6019fa:{c.instructions+=3;NFSU2_TR(0x6019fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B6019fe:{NFSU2_TR(0x6019fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6019ff:{NFSU2_TR(0x6019ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601a04ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B601a04:L601a04:{c.instructions+=2;NFSU2_TR(0x601a04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601a06:{NFSU2_TR(0x601a06);
if(r1(R+518)){{goto L601a0b;}}
}
B601a08:L601a08:{c.instructions+=1;NFSU2_TR(0x601a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B601a0b:L601a0b:{c.instructions+=5;NFSU2_TR(0x601a0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a0d:{NFSU2_TR(0x601a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601a10:{NFSU2_TR(0x601a10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a11:{NFSU2_TR(0x601a11);
__builtin_memmove((R+4),(R+28),4);
}
B601a13:{NFSU2_TR(0x601a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601a18ull));
TAIL_STATIC(0x515db0u,515);
}
B601a18:L601a18:{c.instructions+=4;NFSU2_TR(0x601a18);
u8 U[4];
w4(U+0,u32(0x224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a1d:{NFSU2_TR(0x601a1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a1e:{NFSU2_TR(0x601a1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601a22:{NFSU2_TR(0x601a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601a27ull));
TAIL_STATIC(0x583fe0u,583);
}
B601a27:L601a27:{c.instructions+=1;NFSU2_TR(0x601a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601a2cull));
TAIL_STATIC(0x5838a0u,583);
}
B601a2c:L601a2c:{c.instructions+=2;NFSU2_TR(0x601a2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601a2e:{NFSU2_TR(0x601a2e);
if(r1(R+518)){{goto L601a3d;}}
}
B601a30:L601a30:{c.instructions+=3;NFSU2_TR(0x601a30);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B601a34:{NFSU2_TR(0x601a34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a35:{NFSU2_TR(0x601a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601a3aull));
TAIL_STATIC(0x58c2b0u,58c);
}
B601a3a:L601a3a:{c.instructions+=1;NFSU2_TR(0x601a3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B601a3d:L601a3d:{c.instructions+=2;NFSU2_TR(0x601a3d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B601a40:{NFSU2_TR(0x601a40);
if(r1(R+518)){{goto L601a48;}}
}
B601a42:L601a42:{c.instructions+=1;NFSU2_TR(0x601a42);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B601a48:L601a48:{c.instructions+=5;NFSU2_TR(0x601a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601a49:{NFSU2_TR(0x601a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601a4a:{NFSU2_TR(0x601a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601a4b:{NFSU2_TR(0x601a4b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B601a51:{NFSU2_TR(0x601a51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601a60:L601a60:{c.instructions+=11;NFSU2_TR(0x601a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B601a63:{NFSU2_TR(0x601a63);
{u32 ea_=u32(u32(8017712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601a69:{NFSU2_TR(0x601a69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a6a:{NFSU2_TR(0x601a6a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601a6e:{NFSU2_TR(0x601a6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601a6f:{NFSU2_TR(0x601a6f);
__builtin_memmove((R+24),(R+4),4);
}
B601a71:{NFSU2_TR(0x601a71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B601a74:{NFSU2_TR(0x601a74);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B601a76:{NFSU2_TR(0x601a76);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601a7a:{NFSU2_TR(0x601a7a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B601a7c:{NFSU2_TR(0x601a7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601a92;}}
}
B601a7e:L601a7e:{c.instructions+=2;NFSU2_TR(0x601a7e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8669f4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601a84:{NFSU2_TR(0x601a84);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L601a92;}}
}
B601a86:L601a86:{c.instructions+=2;NFSU2_TR(0x601a86);
u8 U[8];
__builtin_memmove((U+0),gp(0x866a14),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601a8c:{NFSU2_TR(0x601a8c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L601c66;}}
}
B601a92:L601a92:{c.instructions+=2;NFSU2_TR(0x601a92);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B601a98:{NFSU2_TR(0x601a98);
if(r1(R+518)){{goto L601adc;}}
}
B601a9a:L601a9a:{c.instructions+=5;NFSU2_TR(0x601a9a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601a9e:{NFSU2_TR(0x601a9e);
{u32 ea_=u32(u32(7881988u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601aa4:{NFSU2_TR(0x601aa4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601aa6:{NFSU2_TR(0x601aa6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601aa9:{NFSU2_TR(0x601aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601ad0;}}
}
B601aab:L601aab:{c.instructions+=6;NFSU2_TR(0x601aab);
__builtin_memmove((R+0),gp(0x89e834),4);
}
B601ab0:{NFSU2_TR(0x601ab0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B601ab1:{NFSU2_TR(0x601ab1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B601ab4:{NFSU2_TR(0x601ab4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B601abb:{NFSU2_TR(0x601abb);
__builtin_memmove(gp(0x89e834),(R+0),4);
}
B601ac0:{NFSU2_TR(0x601ac0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L601adc;}}
}
B601ac2:L601ac2:{c.instructions+=3;NFSU2_TR(0x601ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601ac5:{NFSU2_TR(0x601ac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601ac6:{NFSU2_TR(0x601ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601acbull));
TAIL_STATIC(0x4ec570u,4ec);
}
B601acb:L601acb:{c.instructions+=2;NFSU2_TR(0x601acb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B601ace:{NFSU2_TR(0x601ace);
{goto L601adc;}
}
B601ad0:L601ad0:{c.instructions+=2;NFSU2_TR(0x601ad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B601ad6:{NFSU2_TR(0x601ad6);
__builtin_memmove(gp(0x89e834),(R+12),4);
}
B601adc:L601adc:{c.instructions+=2;NFSU2_TR(0x601adc);
u8 U[8];
__builtin_memmove((U+0),gp(0x86676c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601ae2:{NFSU2_TR(0x601ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601c2f;}}
}
B601ae8:L601ae8:{c.instructions+=5;NFSU2_TR(0x601ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601aeb:{NFSU2_TR(0x601aeb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601aed:{NFSU2_TR(0x601aed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601aee:{NFSU2_TR(0x601aee);
__builtin_memmove((R+28),gp(0x8651ac),4);
}
B601af4:{NFSU2_TR(0x601af4);
if(r1(R+518)){{goto L601b22;}}
}
B601af6:L601af6:{c.instructions+=2;NFSU2_TR(0x601af6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601afb:{NFSU2_TR(0x601afb);
if(r1(R+518)){{goto L601b22;}}
}
B601afd:L601afd:{c.instructions+=8;NFSU2_TR(0x601afd);
__builtin_memmove((R+8),(R+0),4);
}
B601aff:{NFSU2_TR(0x601aff);
__builtin_memmove((R+4),(R+28),4);
}
B601b01:{NFSU2_TR(0x601b01);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B601b03:{NFSU2_TR(0x601b03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601b07:{NFSU2_TR(0x601b07);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B601b0b:{NFSU2_TR(0x601b0b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601b11:{NFSU2_TR(0x601b11);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B601b17:{NFSU2_TR(0x601b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601b1cull));
TAIL_STATIC(0x75bed4u,75b);
}
B601b1c:L601b1c:{c.instructions+=1;NFSU2_TR(0x601b1c);
s4(0x869234,u32(u32(m4(0x869234))+u32(r4(R+0))));
}
B601b22:L601b22:{c.instructions+=3;NFSU2_TR(0x601b22);
__builtin_memmove((R+4),(R+24),4);
}
B601b24:{NFSU2_TR(0x601b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601b27:{NFSU2_TR(0x601b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601b2cull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B601b2c:L601b2c:{c.instructions+=3;NFSU2_TR(0x601b2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601b2e:{NFSU2_TR(0x601b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601b2f:{NFSU2_TR(0x601b2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601b3a;}}
}
B601b31:L601b31:{c.instructions+=1;NFSU2_TR(0x601b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601b36ull));
TAIL_STATIC(0x5fe530u,5fe);
}
B601b36:L601b36:{c.instructions+=2;NFSU2_TR(0x601b36);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601b38:{NFSU2_TR(0x601b38);
if(r1(R+518)){{goto L601b4b;}}
}
B601b3a:L601b3a:{c.instructions+=2;NFSU2_TR(0x601b3a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x5ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B601b3d:{NFSU2_TR(0x601b3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L601b4b;}}
}
B601b3f:L601b3f:{c.instructions+=5;NFSU2_TR(0x601b3f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601b43:{NFSU2_TR(0x601b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601b44:{NFSU2_TR(0x601b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601b45:{NFSU2_TR(0x601b45);
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
B601b48:{NFSU2_TR(0x601b48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601b4b:L601b4b:{c.instructions+=5;NFSU2_TR(0x601b4b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601b4f:{NFSU2_TR(0x601b4f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601b55:{NFSU2_TR(0x601b55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601b57:{NFSU2_TR(0x601b57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601b5a:{NFSU2_TR(0x601b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601c0b;}}
}
B601b60:L601b60:{c.instructions+=2;NFSU2_TR(0x601b60);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B601b63:{NFSU2_TR(0x601b63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601c0b;}}
}
B601b69:L601b69:{c.instructions+=2;NFSU2_TR(0x601b69);
u8 U[2];
__builtin_memmove((U+0),gp(0x866758),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B601b6f:{NFSU2_TR(0x601b6f);
if(r1(R+518)){{goto L601c3b;}}
}
B601b75:L601b75:{c.instructions+=12;NFSU2_TR(0x601b75);
{u32 ea_=u32(u32(8819252u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B601b7b:{NFSU2_TR(0x601b7b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601b81:{NFSU2_TR(0x601b81);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B601b87:{NFSU2_TR(0x601b87);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601b8d:{NFSU2_TR(0x601b8d);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B601b8f:{NFSU2_TR(0x601b8f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B601b93:{NFSU2_TR(0x601b93);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B601b95:{NFSU2_TR(0x601b95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B601b99:{NFSU2_TR(0x601b99);
{u32 ea_=u32(u32(8017668u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601b9f:{NFSU2_TR(0x601b9f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601ba1:{NFSU2_TR(0x601ba1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601ba4:{NFSU2_TR(0x601ba4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601bc0;}}
}
B601ba6:L601ba6:{c.instructions+=3;NFSU2_TR(0x601ba6);
__builtin_memmove((R+8),gp(0x869234),4);
}
B601bac:{NFSU2_TR(0x601bac);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601bb2:{NFSU2_TR(0x601bb2);
__builtin_memmove(gp(0x86518c),(R+8),4);
}
B601bb8:L601bb8:{c.instructions+=2;NFSU2_TR(0x601bb8);
__builtin_memmove(gp(0x866758),(R+12),1);
}
B601bbe:{NFSU2_TR(0x601bbe);
{goto L601c3b;}
}
B601bc0:L601bc0:{c.instructions+=6;NFSU2_TR(0x601bc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B601bc2:{NFSU2_TR(0x601bc2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601bc6:{NFSU2_TR(0x601bc6);
{u32 ea_=u32(u32(8017680u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601bcc:{NFSU2_TR(0x601bcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601bce:{NFSU2_TR(0x601bce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B601bd1:{NFSU2_TR(0x601bd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x601bb8u);}goto L601bb8;}}
}
B601bd3:L601bd3:{c.instructions+=11;NFSU2_TR(0x601bd3);
{u32 ea_=u32(u32(8017676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601bd9:{NFSU2_TR(0x601bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B601bdc:{NFSU2_TR(0x601bdc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601be0:{NFSU2_TR(0x601be0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601be4:{NFSU2_TR(0x601be4);
{u32 ea_=u32(u32(8017672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601bea:{NFSU2_TR(0x601bea);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601bee:{NFSU2_TR(0x601bee);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601bf2:{NFSU2_TR(0x601bf2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601bf6:{NFSU2_TR(0x601bf6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B601bfa:{NFSU2_TR(0x601bfa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601bfd:{NFSU2_TR(0x601bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601c02ull));
TAIL_STATIC(0x401090u,401);
}
B601c02:L601c02:{c.instructions+=3;NFSU2_TR(0x601c02);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601c06:{NFSU2_TR(0x601c06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B601c09:{NFSU2_TR(0x601c09);
{goto L601c3b;}
}
B601c0b:L601c0b:{c.instructions+=7;NFSU2_TR(0x601c0b);
{u32 ea_=u32(u32(8819252u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B601c11:{NFSU2_TR(0x601c11);
__builtin_memmove((R+0),gp(0x869234),4);
}
B601c16:{NFSU2_TR(0x601c16);
__builtin_memmove(gp(0x86518c),(R+0),4);
}
B601c1b:{NFSU2_TR(0x601c1b);
__builtin_memmove(gp(0x866758),(R+12),1);
}
B601c21:{NFSU2_TR(0x601c21);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601c27:{NFSU2_TR(0x601c27);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B601c2d:{NFSU2_TR(0x601c2d);
{goto L601c3b;}
}
B601c2f:L601c2f:{c.instructions+=2;NFSU2_TR(0x601c2f);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B601c35:{NFSU2_TR(0x601c35);
__builtin_memmove(gp(0x869234),(R+4),4);
}
B601c3b:L601c3b:{c.instructions+=7;NFSU2_TR(0x601c3b);
{u32 ea_=u32(u32(8017676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601c41:{NFSU2_TR(0x601c41);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B601c47:{NFSU2_TR(0x601c47);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B601c4d:{NFSU2_TR(0x601c4d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B601c51:{NFSU2_TR(0x601c51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B601c53:{NFSU2_TR(0x601c53);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B601c56:{NFSU2_TR(0x601c56);
if(r1(R+514)){{goto L601c66;}}
}
B601c58:L601c58:{c.instructions+=3;NFSU2_TR(0x601c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601c5b:{NFSU2_TR(0x601c5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601c5d:{NFSU2_TR(0x601c5d);
if(r1(R+518)){{goto L601c66;}}
}
B601c5f:L601c5f:{c.instructions+=2;NFSU2_TR(0x601c5f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601c61:{NFSU2_TR(0x601c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601c66ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B601c66:L601c66:{c.instructions+=5;NFSU2_TR(0x601c66);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B601c6a:{NFSU2_TR(0x601c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601c6b:{NFSU2_TR(0x601c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601c6c:{NFSU2_TR(0x601c6c);
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
B601c6f:{NFSU2_TR(0x601c6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601c80:L601c80:{c.instructions+=6;NFSU2_TR(0x601c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601c81:{NFSU2_TR(0x601c81);
__builtin_memmove((R+0),gp(0x7fbe08),4);
}
B601c86:{NFSU2_TR(0x601c86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601c88:{NFSU2_TR(0x601c88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601c89:{NFSU2_TR(0x601c89);
__builtin_memmove((R+24),(R+4),4);
}
B601c8b:{NFSU2_TR(0x601c8b);
if(r1(R+518)){{goto L601c92;}}
}
B601c8d:L601c8d:{c.instructions+=2;NFSU2_TR(0x601c8d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B601c90:{NFSU2_TR(0x601c90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601cfc;}}
}
B601c92:L601c92:{c.instructions+=2;NFSU2_TR(0x601c92);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B601c95:{NFSU2_TR(0x601c95);
if(r1(R+518)){{goto L601c9d;}}
}
B601c97:L601c97:{c.instructions+=1;NFSU2_TR(0x601c97);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B601c9d:L601c9d:{c.instructions+=6;NFSU2_TR(0x601c9d);
__builtin_memmove((R+8),gp(0x86676c),4);
}
B601ca3:{NFSU2_TR(0x601ca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601ca5:{NFSU2_TR(0x601ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B601ca8:{NFSU2_TR(0x601ca8);
w4(R+4,u32(0x850080ull));
}
B601cad:{NFSU2_TR(0x601cad);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B601cb1:{NFSU2_TR(0x601cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601cb6ull));
TAIL_STATIC(0x5031f0u,503);
}
B601cb6:L601cb6:{c.instructions+=7;NFSU2_TR(0x601cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601cba:{NFSU2_TR(0x601cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601cbb:{NFSU2_TR(0x601cbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601cbc:{NFSU2_TR(0x601cbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601cbe:{NFSU2_TR(0x601cbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601cc0:{NFSU2_TR(0x601cc0);
__builtin_memmove((R+4),(R+24),4);
}
B601cc2:{NFSU2_TR(0x601cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601cc7ull));
TAIL_STATIC(0x5fe5e0u,5fe);
}
B601cc7:L601cc7:{c.instructions+=3;NFSU2_TR(0x601cc7);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B601ccc:{NFSU2_TR(0x601ccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601cce:{NFSU2_TR(0x601cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601ce8;}}
}
B601cd0:L601cd0:{c.instructions+=3;NFSU2_TR(0x601cd0);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B601cd5:{NFSU2_TR(0x601cd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601cd7:{NFSU2_TR(0x601cd7);
if(r1(R+518)){{goto L601ce8;}}
}
B601cd9:L601cd9:{c.instructions+=1;NFSU2_TR(0x601cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601cdeull));
TAIL_STATIC(0x53fd30u,53f);
}
B601cde:L601cde:{c.instructions+=1;NFSU2_TR(0x601cde);
s4(0x890114,u32(0x0ull));
}
B601ce8:L601ce8:{c.instructions+=1;NFSU2_TR(0x601ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601cedull));
TAIL_STATIC(0x58f630u,58f);
}
B601ced:L601ced:{c.instructions+=3;NFSU2_TR(0x601ced);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B601cf0:{NFSU2_TR(0x601cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B601cf4:{NFSU2_TR(0x601cf4);
if(r1(R+518)){{goto L601cfc;}}
}
B601cf6:L601cf6:{c.instructions+=1;NFSU2_TR(0x601cf6);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B601cfc:L601cfc:{c.instructions+=3;NFSU2_TR(0x601cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601cfd:{NFSU2_TR(0x601cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B601cfe:{NFSU2_TR(0x601cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601d00:L601d00:{c.instructions+=1;NFSU2_TR(0x601d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601d05ull));
TAIL_STATIC(0x5f9790u,5f9);
}
B601d05:L601d05:{c.instructions+=5;NFSU2_TR(0x601d05);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B601d07:{NFSU2_TR(0x601d07);
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
B601d09:{NFSU2_TR(0x601d09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B601d0c:{NFSU2_TR(0x601d0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B601d12:{NFSU2_TR(0x601d12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601d20:L601d20:{c.instructions+=13;NFSU2_TR(0x601d20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d21:{NFSU2_TR(0x601d21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d22:{NFSU2_TR(0x601d22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d23:{NFSU2_TR(0x601d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B601d27:{NFSU2_TR(0x601d27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d28:{NFSU2_TR(0x601d28);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d2a:{NFSU2_TR(0x601d2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B601d2e:{NFSU2_TR(0x601d2e);
__builtin_memmove((R+28),(R+4),4);
}
B601d30:{NFSU2_TR(0x601d30);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B601d32:{NFSU2_TR(0x601d32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d33:{NFSU2_TR(0x601d33);
__builtin_memmove((R+4),(R+24),4);
}
B601d35:{NFSU2_TR(0x601d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601d39:{NFSU2_TR(0x601d39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601d3eull));
TAIL_STATIC(0x581d90u,581);
}
B601d3e:L601d3e:{c.instructions+=8;NFSU2_TR(0x601d3e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B601d43:{NFSU2_TR(0x601d43);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d45:{NFSU2_TR(0x601d45);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B601d49:{NFSU2_TR(0x601d49);
__builtin_memmove(gp(0x83aab4),(R+4),4);
}
B601d4f:{NFSU2_TR(0x601d4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d50:{NFSU2_TR(0x601d50);
__builtin_memmove((R+4),(R+24),4);
}
B601d52:{NFSU2_TR(0x601d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601d56:{NFSU2_TR(0x601d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601d5bull));
TAIL_STATIC(0x581d90u,581);
}
B601d5b:L601d5b:{c.instructions+=8;NFSU2_TR(0x601d5b);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B601d60:{NFSU2_TR(0x601d60);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d62:{NFSU2_TR(0x601d62);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601d66:{NFSU2_TR(0x601d66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d67:{NFSU2_TR(0x601d67);
__builtin_memmove((R+4),(R+24),4);
}
B601d69:{NFSU2_TR(0x601d69);
__builtin_memmove(gp(0x8500b8),(R+0),2);
}
B601d6f:{NFSU2_TR(0x601d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601d73:{NFSU2_TR(0x601d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601d78ull));
TAIL_STATIC(0x581d90u,581);
}
B601d78:L601d78:{c.instructions+=8;NFSU2_TR(0x601d78);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B601d7d:{NFSU2_TR(0x601d7d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d7f:{NFSU2_TR(0x601d7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B601d83:{NFSU2_TR(0x601d83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d84:{NFSU2_TR(0x601d84);
__builtin_memmove((R+4),(R+24),4);
}
B601d86:{NFSU2_TR(0x601d86);
__builtin_memmove(gp(0x8500bc),(R+8),4);
}
B601d8c:{NFSU2_TR(0x601d8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601d90:{NFSU2_TR(0x601d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601d95ull));
TAIL_STATIC(0x581d90u,581);
}
B601d95:L601d95:{c.instructions+=5;NFSU2_TR(0x601d95);
u8 U[7];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B601d99:{NFSU2_TR(0x601d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B601d9c:{NFSU2_TR(0x601d9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601d9d:{NFSU2_TR(0x601d9d);
w4(R+4,u32(0x83aab4ull));
}
B601da2:{NFSU2_TR(0x601da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601da7ull));
TAIL_STATIC(0x5029f0u,502);
}
B601da7:L601da7:{c.instructions+=5;NFSU2_TR(0x601da7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601da9:{NFSU2_TR(0x601da9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B601dad:{NFSU2_TR(0x601dad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601dae:{NFSU2_TR(0x601dae);
__builtin_memmove((R+4),(R+24),4);
}
B601db0:{NFSU2_TR(0x601db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601db5ull));
TAIL_STATIC(0x581d90u,581);
}
B601db5:L601db5:{c.instructions+=4;NFSU2_TR(0x601db5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601db9:{NFSU2_TR(0x601db9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601dba:{NFSU2_TR(0x601dba);
w4(R+4,u32(0x83aab4ull));
}
B601dbf:{NFSU2_TR(0x601dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601dc4ull));
TAIL_STATIC(0x502990u,502);
}
B601dc4:L601dc4:{c.instructions+=5;NFSU2_TR(0x601dc4);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601dc6:{NFSU2_TR(0x601dc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601dca:{NFSU2_TR(0x601dca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601dcb:{NFSU2_TR(0x601dcb);
__builtin_memmove((R+4),(R+24),4);
}
B601dcd:{NFSU2_TR(0x601dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601dd2ull));
TAIL_STATIC(0x581d90u,581);
}
B601dd2:L601dd2:{c.instructions+=4;NFSU2_TR(0x601dd2);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fac),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601dd8:{NFSU2_TR(0x601dd8);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B601ddd:{NFSU2_TR(0x601ddd);
__builtin_memmove(gp(0x8500ba),(R+8),2);
}
B601de4:{NFSU2_TR(0x601de4);
if(r1(R+518)){{goto L601e61;}}
}
B601de6:L601de6:{c.instructions+=3;NFSU2_TR(0x601de6);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B601deb:{NFSU2_TR(0x601deb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601dec:{NFSU2_TR(0x601dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601df1ull));
TAIL_STATIC(0x5f0180u,5f0);
}
B601df1:L601df1:{c.instructions+=8;NFSU2_TR(0x601df1);
w4(R+4,u32(m2(0x8500b8)));
}
B601df8:{NFSU2_TR(0x601df8);
__builtin_memmove((R+8),gp(0x8500bc),4);
}
B601dfe:{NFSU2_TR(0x601dfe);
__builtin_memmove(gp(0x89e7a0),(R+4),4);
}
B601e04:{NFSU2_TR(0x601e04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B601e07:{NFSU2_TR(0x601e07);
w4(R+4,u32(0x83aab4ull));
}
B601e0c:{NFSU2_TR(0x601e0c);
__builtin_memmove(gp(0x89e7b0),(R+0),4);
}
B601e11:{NFSU2_TR(0x601e11);
__builtin_memmove(gp(0x89e7a4),(R+8),4);
}
B601e17:{NFSU2_TR(0x601e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601e1cull));
TAIL_STATIC(0x5028f0u,502);
}
B601e1c:L601e1c:{c.instructions+=4;NFSU2_TR(0x601e1c);
w4(R+0,u32(r1(R+0)));
}
B601e1f:{NFSU2_TR(0x601e1f);
w4(R+4,u32(0x83aab4ull));
}
B601e24:{NFSU2_TR(0x601e24);
__builtin_memmove(gp(0x89e7f8),(R+0),4);
}
B601e29:{NFSU2_TR(0x601e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601e2eull));
TAIL_STATIC(0x502730u,502);
}
B601e2e:L601e2e:{c.instructions+=9;NFSU2_TR(0x601e2e);
__builtin_memmove((R+4),gp(0x89e7a0),2);
}
B601e35:{NFSU2_TR(0x601e35);
__builtin_memmove((R+8),gp(0x89e7a4),4);
}
B601e3b:{NFSU2_TR(0x601e3b);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B601e40:{NFSU2_TR(0x601e40);
w4(R+0,u32(m2(0x8500ba)));
}
B601e47:{NFSU2_TR(0x601e47);
__builtin_memmove(gp(0x89e7bc),(R+0),4);
}
B601e4c:{NFSU2_TR(0x601e4c);
__builtin_memmove(gp(0x8500b8),(R+4),2);
}
B601e53:{NFSU2_TR(0x601e53);
__builtin_memmove(gp(0x8500ba),(R+0),2);
}
B601e59:{NFSU2_TR(0x601e59);
__builtin_memmove(gp(0x8500bc),(R+8),4);
}
B601e5f:{NFSU2_TR(0x601e5f);
{goto L601e6c;}
}
B601e61:L601e61:{c.instructions+=1;NFSU2_TR(0x601e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601e66ull));
TAIL_STATIC(0x53fd30u,53f);
}
B601e66:L601e66:{c.instructions+=1;NFSU2_TR(0x601e66);
__builtin_memmove(gp(0x890114),(R+12),4);
}
B601e6c:L601e6c:{c.instructions+=4;NFSU2_TR(0x601e6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601e70:{NFSU2_TR(0x601e70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e71:{NFSU2_TR(0x601e71);
__builtin_memmove((R+4),(R+28),4);
}
B601e73:{NFSU2_TR(0x601e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601e78ull));
TAIL_STATIC(0x5f02b0u,5f0);
}
B601e78:L601e78:{c.instructions+=7;NFSU2_TR(0x601e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601e7c:{NFSU2_TR(0x601e7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e7d:{NFSU2_TR(0x601e7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e7f:{NFSU2_TR(0x601e7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e80:{NFSU2_TR(0x601e80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e81:{NFSU2_TR(0x601e81);
__builtin_memmove((R+4),(R+28),4);
}
B601e83:{NFSU2_TR(0x601e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601e88ull));
TAIL_STATIC(0x5fe5e0u,5fe);
}
B601e88:L601e88:{c.instructions+=6;NFSU2_TR(0x601e88);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e8a:{NFSU2_TR(0x601e8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B601e8e:{NFSU2_TR(0x601e8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601e8f:{NFSU2_TR(0x601e8f);
__builtin_memmove((R+4),(R+24),4);
}
B601e91:{NFSU2_TR(0x601e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601e95:{NFSU2_TR(0x601e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601e9aull));
TAIL_STATIC(0x581d90u,581);
}
B601e9a:L601e9a:{c.instructions+=5;NFSU2_TR(0x601e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601e9b:{NFSU2_TR(0x601e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601e9c:{NFSU2_TR(0x601e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601e9d:{NFSU2_TR(0x601e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B601e9e:{NFSU2_TR(0x601e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B601eb0:L601eb0:{c.instructions+=16;NFSU2_TR(0x601eb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601eb1:{NFSU2_TR(0x601eb1);
__builtin_memmove((R+20),(R+16),4);
}
B601eb3:{NFSU2_TR(0x601eb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B601eb6:{NFSU2_TR(0x601eb6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601eb8:{NFSU2_TR(0x601eb8);
u8 U[4];
w4(U+0,u32(0x779edbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601ebd:{NFSU2_TR(0x601ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601ec3:{NFSU2_TR(0x601ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601ec4:{NFSU2_TR(0x601ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601ecb:{NFSU2_TR(0x601ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x958ull))));
}
B601ed1:{NFSU2_TR(0x601ed1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601ed2:{NFSU2_TR(0x601ed2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601ed3:{NFSU2_TR(0x601ed3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601ed4:{NFSU2_TR(0x601ed4);
__builtin_memmove((R+28),(R+4),4);
}
B601ed6:{NFSU2_TR(0x601ed6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601eda:{NFSU2_TR(0x601eda);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B601edf:{NFSU2_TR(0x601edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601ee4ull));
TAIL_STATIC(0x40c910u,40c);
}
B601ee4:L601ee4:{c.instructions+=5;NFSU2_TR(0x601ee4);
u8 U[5];
w4(U+0,u32(u32(u32(0x920ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B601eec:{NFSU2_TR(0x601eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601eef:{NFSU2_TR(0x601eef);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e808),4);
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
B601ef5:{NFSU2_TR(0x601ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x96cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B601f00:{NFSU2_TR(0x601f00);
if(r1(R+518)){{goto L601fd2;}}
}
B601f06:L601f06:{c.instructions+=6;NFSU2_TR(0x601f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B601f09:{NFSU2_TR(0x601f09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f0a:{NFSU2_TR(0x601f0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601f0e:{NFSU2_TR(0x601f0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f0f:{NFSU2_TR(0x601f0f);
__builtin_memmove((R+4),(R+28),4);
}
B601f11:{NFSU2_TR(0x601f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601f16ull));
TAIL_STATIC(0x5f97d0u,5f9);
}
B601f16:L601f16:{c.instructions+=6;NFSU2_TR(0x601f16);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f18:{NFSU2_TR(0x601f18);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B601f1c:{NFSU2_TR(0x601f1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f1d:{NFSU2_TR(0x601f1d);
__builtin_memmove((R+4),(R+24),4);
}
B601f1f:{NFSU2_TR(0x601f1f);
__builtin_memmove((R+12),(R+0),4);
}
B601f21:{NFSU2_TR(0x601f21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601f26ull));
TAIL_STATIC(0x5840a0u,584);
}
B601f26:L601f26:{c.instructions+=8;NFSU2_TR(0x601f26);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B601f2a:{NFSU2_TR(0x601f2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601f2e:{NFSU2_TR(0x601f2e);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B601f30:{NFSU2_TR(0x601f30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f31:{NFSU2_TR(0x601f31);
w4(R+4,u32(0x89e7a0ull));
}
B601f36:{NFSU2_TR(0x601f36);
u8 U[5];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B601f3e:{NFSU2_TR(0x601f3e);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B601f42:{NFSU2_TR(0x601f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601f47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x601600u);}goto L601600;}
}
B601f47:L601f47:{c.instructions+=3;NFSU2_TR(0x601f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601f4b:{NFSU2_TR(0x601f4b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B601f4e:{NFSU2_TR(0x601f4e);
if(r1(R+518)){{goto L601f55;}}
}
B601f50:L601f50:{c.instructions+=2;NFSU2_TR(0x601f50);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B601f53:{NFSU2_TR(0x601f53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601fd2;}}
}
B601f55:L601f55:{c.instructions+=8;NFSU2_TR(0x601f55);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B601f5a:{NFSU2_TR(0x601f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B601f5e:{NFSU2_TR(0x601f5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f5f:{NFSU2_TR(0x601f5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f61:{NFSU2_TR(0x601f61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f62:{NFSU2_TR(0x601f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f63:{NFSU2_TR(0x601f63);
__builtin_memmove((R+4),(R+28),4);
}
B601f65:{NFSU2_TR(0x601f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601f6aull));
TAIL_STATIC(0x5fe5e0u,5fe);
}
B601f6a:L601f6a:{c.instructions+=5;NFSU2_TR(0x601f6a);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B601f6f:{NFSU2_TR(0x601f6f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B601f73:{NFSU2_TR(0x601f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B601f79:{NFSU2_TR(0x601f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B601f7b:{NFSU2_TR(0x601f7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601fa6;}}
}
B601f7d:L601f7d:{c.instructions+=4;NFSU2_TR(0x601f7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B601f81:{NFSU2_TR(0x601f81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f82:{NFSU2_TR(0x601f82);
w4(R+4,u32(0x89e7a0ull));
}
B601f87:{NFSU2_TR(0x601f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601f8cull));
TAIL_STATIC(0x5ed920u,5ed);
}
B601f8c:L601f8c:{c.instructions+=4;NFSU2_TR(0x601f8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B601f8f:{NFSU2_TR(0x601f8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601f91:{NFSU2_TR(0x601f91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B601f94:{NFSU2_TR(0x601f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601f99ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B601f99:L601f99:{c.instructions+=2;NFSU2_TR(0x601f99);
__builtin_memmove((R+4),(R+0),4);
}
B601f9b:{NFSU2_TR(0x601f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601fa0ull));
TAIL_STATIC(0x59a520u,59a);
}
B601fa0:L601fa0:{c.instructions+=1;NFSU2_TR(0x601fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601fa6:L601fa6:{c.instructions+=2;NFSU2_TR(0x601fa6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B601fac:{NFSU2_TR(0x601fac);
if(r1(R+518)){{goto L601fb7;}}
}
B601fae:L601fae:{c.instructions+=3;NFSU2_TR(0x601fae);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601fb0:{NFSU2_TR(0x601fb0);
__builtin_memmove((R+4),(R+24),4);
}
B601fb2:{NFSU2_TR(0x601fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601fb7ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B601fb7:L601fb7:{c.instructions+=3;NFSU2_TR(0x601fb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601fb9:{NFSU2_TR(0x601fb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601fc0:{NFSU2_TR(0x601fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601fc5ull));
TAIL_STATIC(0x5996b0u,599);
}
B601fc5:L601fc5:{c.instructions+=2;NFSU2_TR(0x601fc5);
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
B601fc7:{NFSU2_TR(0x601fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L601fd2;}}
}
B601fc9:L601fc9:{c.instructions+=3;NFSU2_TR(0x601fc9);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B601fcb:{NFSU2_TR(0x601fcb);
__builtin_memmove((R+4),(R+24),4);
}
B601fcd:{NFSU2_TR(0x601fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601fd2ull));
TAIL_STATIC(0x5f9010u,5f9);
}
B601fd2:L601fd2:{c.instructions+=3;NFSU2_TR(0x601fd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B601fd9:{NFSU2_TR(0x601fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x96cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B601fe4:{NFSU2_TR(0x601fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x601fe9ull));
TAIL_STATIC(0x4022c0u,402);
}
B601fe9:L601fe9:{c.instructions+=8;NFSU2_TR(0x601fe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x964ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B601ff0:{NFSU2_TR(0x601ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B601ff1:{NFSU2_TR(0x601ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B601ff2:{NFSU2_TR(0x601ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B601ff9:{NFSU2_TR(0x601ff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B601ffa:{NFSU2_TR(0x601ffa);
__builtin_memmove((R+16),(R+20),4);
}
B601ffc:{NFSU2_TR(0x601ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B601ffd:{NFSU2_TR(0x601ffd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x601,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
