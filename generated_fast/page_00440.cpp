#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x440,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x440,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_440(u8* __restrict R,Cpu& c);
u32 page_440(Cpu& c){return body_440(c.regs.data(),c);}
__attribute__((noinline)) u32 body_440(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x440000:goto L440000;
case 0x440002:goto L440002;
case 0x440004:c.instructions+=1;goto B440004;
case 0x440006:goto L440006;
case 0x440008:c.instructions+=2;goto B440008;
case 0x440009:c.instructions+=1;goto B440009;
case 0x44000b:goto L44000b;
case 0x44000d:c.instructions+=1;goto B44000d;
case 0x44000f:goto L44000f;
case 0x440013:c.instructions+=1;goto B440013;
case 0x440015:goto L440015;
case 0x440019:c.instructions+=4;goto B440019;
case 0x44001b:c.instructions+=3;goto B44001b;
case 0x44001e:c.instructions+=2;goto B44001e;
case 0x440020:c.instructions+=1;goto B440020;
case 0x440022:goto L440022;
case 0x440025:c.instructions+=1;goto B440025;
case 0x44002a:goto L44002a;
case 0x44002b:c.instructions+=5;goto B44002b;
case 0x44002c:c.instructions+=4;goto B44002c;
case 0x44002d:c.instructions+=3;goto B44002d;
case 0x44002e:c.instructions+=2;goto B44002e;
case 0x44002f:c.instructions+=1;goto B44002f;
case 0x440032:goto L440032;
case 0x440039:c.instructions+=1;goto B440039;
case 0x44003c:goto L44003c;
case 0x44003e:c.instructions+=3;goto B44003e;
case 0x440043:c.instructions+=2;goto B440043;
case 0x440046:c.instructions+=1;goto B440046;
case 0x44004b:goto L44004b;
case 0x44004f:c.instructions+=4;goto B44004f;
case 0x440052:c.instructions+=3;goto B440052;
case 0x440055:c.instructions+=2;goto B440055;
case 0x440057:c.instructions+=1;goto B440057;
case 0x440059:goto L440059;
case 0x440060:goto L440060;
case 0x440062:c.instructions+=2;goto B440062;
case 0x440064:c.instructions+=1;goto B440064;
case 0x440066:goto L440066;
case 0x440069:c.instructions+=1;goto B440069;
case 0x44006e:goto L44006e;
case 0x44006f:c.instructions+=5;goto B44006f;
case 0x440070:c.instructions+=4;goto B440070;
case 0x440071:c.instructions+=3;goto B440071;
case 0x440072:c.instructions+=2;goto B440072;
case 0x440073:c.instructions+=1;goto B440073;
case 0x440076:goto L440076;
case 0x44007b:goto L44007b;
case 0x44007e:c.instructions+=1;goto B44007e;
case 0x440083:goto L440083;
case 0x440084:c.instructions+=5;goto B440084;
case 0x440085:c.instructions+=4;goto B440085;
case 0x440086:c.instructions+=3;goto B440086;
case 0x440087:c.instructions+=2;goto B440087;
case 0x440088:c.instructions+=1;goto B440088;
case 0x440090:goto L440090;
case 0x440094:c.instructions+=7;goto B440094;
case 0x44009b:c.instructions+=6;goto B44009b;
case 0x44009f:c.instructions+=5;goto B44009f;
case 0x4400a2:c.instructions+=4;goto B4400a2;
case 0x4400a6:c.instructions+=3;goto B4400a6;
case 0x4400a7:c.instructions+=2;goto B4400a7;
case 0x4400a8:c.instructions+=1;goto B4400a8;
case 0x4400ad:goto L4400ad;
case 0x4400b0:goto L4400b0;
case 0x4400b4:c.instructions+=3;goto B4400b4;
case 0x4400bb:c.instructions+=2;goto B4400bb;
case 0x4400bd:c.instructions+=1;goto B4400bd;
case 0x4400bf:goto L4400bf;
case 0x4400c1:c.instructions+=1;goto B4400c1;
case 0x4400c6:goto L4400c6;
case 0x4400d0:goto L4400d0;
case 0x4400d4:c.instructions+=6;goto B4400d4;
case 0x4400d8:c.instructions+=5;goto B4400d8;
case 0x4400dc:c.instructions+=4;goto B4400dc;
case 0x4400dd:c.instructions+=3;goto B4400dd;
case 0x4400de:c.instructions+=2;goto B4400de;
case 0x4400df:c.instructions+=1;goto B4400df;
case 0x4400e4:goto L4400e4;
case 0x4400e7:c.instructions+=1;goto B4400e7;
case 0x4400f0:goto L4400f0;
case 0x4400f6:c.instructions+=2;goto B4400f6;
case 0x4400f8:c.instructions+=1;goto B4400f8;
case 0x4400fa:goto L4400fa;
case 0x440100:c.instructions+=1;goto B440100;
case 0x440102:goto L440102;
case 0x440108:c.instructions+=4;goto B440108;
case 0x44010b:c.instructions+=3;goto B44010b;
case 0x44010f:c.instructions+=2;goto B44010f;
case 0x440111:c.instructions+=1;goto B440111;
case 0x440113:goto L440113;
case 0x440116:c.instructions+=8;goto B440116;
case 0x440119:c.instructions+=7;goto B440119;
case 0x44011d:c.instructions+=6;goto B44011d;
case 0x440121:c.instructions+=5;goto B440121;
case 0x440122:c.instructions+=4;goto B440122;
case 0x440123:c.instructions+=3;goto B440123;
case 0x440128:c.instructions+=2;goto B440128;
case 0x44012d:c.instructions+=1;goto B44012d;
case 0x440132:goto L440132;
case 0x440135:c.instructions+=2;goto B440135;
case 0x44013a:c.instructions+=1;goto B44013a;
case 0x44013b:goto L44013b;
case 0x44013e:c.instructions+=4;goto B44013e;
case 0x44013f:c.instructions+=3;goto B44013f;
case 0x440144:c.instructions+=2;goto B440144;
case 0x440149:c.instructions+=1;goto B440149;
case 0x44014e:goto L44014e;
case 0x440151:c.instructions+=2;goto B440151;
case 0x440156:c.instructions+=1;goto B440156;
case 0x440160:goto L440160;
case 0x440161:c.instructions+=5;goto B440161;
case 0x440163:c.instructions+=4;goto B440163;
case 0x440169:c.instructions+=3;goto B440169;
case 0x44016f:c.instructions+=2;goto B44016f;
case 0x440170:c.instructions+=1;goto B440170;
case 0x440172:goto L440172;
case 0x440178:c.instructions+=4;goto B440178;
case 0x44017b:c.instructions+=3;goto B44017b;
case 0x44017e:c.instructions+=2;goto B44017e;
case 0x440180:c.instructions+=1;goto B440180;
case 0x440182:goto L440182;
case 0x440185:c.instructions+=2;goto B440185;
case 0x440187:c.instructions+=1;goto B440187;
case 0x440189:goto L440189;
case 0x44018a:c.instructions+=8;goto B44018a;
case 0x440190:c.instructions+=7;goto B440190;
case 0x440193:c.instructions+=6;goto B440193;
case 0x440194:c.instructions+=5;goto B440194;
case 0x440197:c.instructions+=4;goto B440197;
case 0x44019a:c.instructions+=3;goto B44019a;
case 0x44019d:c.instructions+=2;goto B44019d;
case 0x44019f:c.instructions+=1;goto B44019f;
case 0x4401a1:goto L4401a1;
case 0x4401a3:c.instructions+=1;goto B4401a3;
case 0x4401a8:goto L4401a8;
case 0x4401a9:c.instructions+=3;goto B4401a9;
case 0x4401ae:c.instructions+=2;goto B4401ae;
case 0x4401af:c.instructions+=1;goto B4401af;
case 0x4401b4:goto L4401b4;
case 0x4401b7:goto L4401b7;
case 0x4401b9:c.instructions+=3;goto B4401b9;
case 0x4401ba:c.instructions+=2;goto B4401ba;
case 0x4401bb:c.instructions+=1;goto B4401bb;
case 0x4401bc:goto L4401bc;
case 0x4401be:c.instructions+=1;goto B4401be;
case 0x4401c0:goto L4401c0;
case 0x4401c1:c.instructions+=3;goto B4401c1;
case 0x4401c2:c.instructions+=2;goto B4401c2;
case 0x4401c4:c.instructions+=1;goto B4401c4;
case 0x4401c9:goto L4401c9;
case 0x4401cb:c.instructions+=2;goto B4401cb;
case 0x4401cd:c.instructions+=1;goto B4401cd;
case 0x4401cf:goto L4401cf;
case 0x4401d1:c.instructions+=2;goto B4401d1;
case 0x4401d3:c.instructions+=1;goto B4401d3;
case 0x4401d5:goto L4401d5;
case 0x4401d9:c.instructions+=1;goto B4401d9;
case 0x4401db:goto L4401db;
case 0x4401dd:goto L4401dd;
case 0x4401df:goto L4401df;
case 0x4401e1:c.instructions+=1;goto B4401e1;
case 0x4401e3:goto L4401e3;
case 0x4401e5:c.instructions+=1;goto B4401e5;
case 0x4401e7:goto L4401e7;
case 0x4401e9:c.instructions+=1;goto B4401e9;
case 0x4401ee:goto L4401ee;
case 0x4401ef:c.instructions+=4;goto B4401ef;
case 0x4401f0:c.instructions+=3;goto B4401f0;
case 0x4401f5:c.instructions+=2;goto B4401f5;
case 0x4401f6:c.instructions+=1;goto B4401f6;
case 0x4401fb:goto L4401fb;
case 0x4401fe:goto L4401fe;
case 0x4401ff:c.instructions+=3;goto B4401ff;
case 0x440201:c.instructions+=2;goto B440201;
case 0x440202:c.instructions+=1;goto B440202;
case 0x440203:goto L440203;
case 0x440204:c.instructions+=1;goto B440204;
case 0x440209:goto L440209;
case 0x44020c:c.instructions+=3;goto B44020c;
case 0x44020d:c.instructions+=2;goto B44020d;
case 0x44020e:c.instructions+=1;goto B44020e;
case 0x440210:goto L440210;
case 0x440211:c.instructions+=3;goto B440211;
case 0x440212:c.instructions+=2;goto B440212;
case 0x440214:c.instructions+=1;goto B440214;
case 0x440219:goto L440219;
case 0x44021b:c.instructions+=2;goto B44021b;
case 0x440221:c.instructions+=1;goto B440221;
case 0x440223:goto L440223;
case 0x440229:c.instructions+=1;goto B440229;
case 0x44022b:goto L44022b;
case 0x44022d:c.instructions+=1;goto B44022d;
case 0x440232:goto L440232;
case 0x440233:c.instructions+=4;goto B440233;
case 0x440234:c.instructions+=3;goto B440234;
case 0x440239:c.instructions+=2;goto B440239;
case 0x44023a:c.instructions+=1;goto B44023a;
case 0x44023f:goto L44023f;
case 0x440242:goto L440242;
case 0x440243:c.instructions+=3;goto B440243;
case 0x440246:c.instructions+=2;goto B440246;
case 0x440247:c.instructions+=1;goto B440247;
case 0x440250:goto L440250;
case 0x440255:goto L440255;
case 0x440256:c.instructions+=1;goto B440256;
case 0x44025b:goto L44025b;
case 0x44025e:c.instructions+=1;goto B44025e;
case 0x440260:goto L440260;
case 0x440263:c.instructions+=3;goto B440263;
case 0x440264:c.instructions+=2;goto B440264;
case 0x440266:c.instructions+=1;goto B440266;
case 0x44026b:goto L44026b;
case 0x44026c:c.instructions+=1;goto B44026c;
case 0x440271:goto L440271;
case 0x440275:c.instructions+=3;goto B440275;
case 0x440278:c.instructions+=2;goto B440278;
case 0x44027a:c.instructions+=1;goto B44027a;
case 0x44027f:goto L44027f;
case 0x440280:c.instructions+=1;goto B440280;
case 0x440285:goto L440285;
case 0x440289:c.instructions+=3;goto B440289;
case 0x44028c:c.instructions+=2;goto B44028c;
case 0x44028e:c.instructions+=1;goto B44028e;
case 0x440293:goto L440293;
case 0x440294:c.instructions+=1;goto B440294;
case 0x440299:goto L440299;
case 0x44029d:c.instructions+=9;goto B44029d;
case 0x4402a1:c.instructions+=8;goto B4402a1;
case 0x4402a5:c.instructions+=7;goto B4402a5;
case 0x4402a7:c.instructions+=6;goto B4402a7;
case 0x4402aa:c.instructions+=5;goto B4402aa;
case 0x4402ad:c.instructions+=4;goto B4402ad;
case 0x4402b0:c.instructions+=3;goto B4402b0;
case 0x4402b1:c.instructions+=2;goto B4402b1;
case 0x4402b4:c.instructions+=1;goto B4402b4;
case 0x4402c0:goto L4402c0;
case 0x4402c1:c.instructions+=20;goto B4402c1;
case 0x4402c3:c.instructions+=19;goto B4402c3;
case 0x4402c6:c.instructions+=18;goto B4402c6;
case 0x4402c8:c.instructions+=17;goto B4402c8;
case 0x4402cb:c.instructions+=16;goto B4402cb;
case 0x4402ce:c.instructions+=15;goto B4402ce;
case 0x4402d0:c.instructions+=14;goto B4402d0;
case 0x4402d3:c.instructions+=13;goto B4402d3;
case 0x4402d6:c.instructions+=12;goto B4402d6;
case 0x4402d8:c.instructions+=11;goto B4402d8;
case 0x4402db:c.instructions+=10;goto B4402db;
case 0x4402dd:c.instructions+=9;goto B4402dd;
case 0x4402e0:c.instructions+=8;goto B4402e0;
case 0x4402e3:c.instructions+=7;goto B4402e3;
case 0x4402e6:c.instructions+=6;goto B4402e6;
case 0x4402e9:c.instructions+=5;goto B4402e9;
case 0x4402ec:c.instructions+=4;goto B4402ec;
case 0x4402ef:c.instructions+=3;goto B4402ef;
case 0x4402f2:c.instructions+=2;goto B4402f2;
case 0x4402f5:c.instructions+=1;goto B4402f5;
case 0x4402fa:goto L4402fa;
case 0x4402fd:c.instructions+=13;goto B4402fd;
case 0x440301:c.instructions+=12;goto B440301;
case 0x440303:c.instructions+=11;goto B440303;
case 0x440306:c.instructions+=10;goto B440306;
case 0x440309:c.instructions+=9;goto B440309;
case 0x44030d:c.instructions+=8;goto B44030d;
case 0x44030f:c.instructions+=7;goto B44030f;
case 0x440313:c.instructions+=6;goto B440313;
case 0x440314:c.instructions+=5;goto B440314;
case 0x440316:c.instructions+=4;goto B440316;
case 0x440317:c.instructions+=3;goto B440317;
case 0x440319:c.instructions+=2;goto B440319;
case 0x44031c:c.instructions+=1;goto B44031c;
case 0x440321:goto L440321;
case 0x440322:c.instructions+=1;goto B440322;
case 0x440330:goto L440330;
case 0x440334:c.instructions+=11;goto B440334;
case 0x440338:c.instructions+=10;goto B440338;
case 0x44033a:c.instructions+=9;goto B44033a;
case 0x44033d:c.instructions+=8;goto B44033d;
case 0x440343:c.instructions+=7;goto B440343;
case 0x440344:c.instructions+=6;goto B440344;
case 0x440348:c.instructions+=5;goto B440348;
case 0x44034f:c.instructions+=4;goto B44034f;
case 0x440353:c.instructions+=3;goto B440353;
case 0x440354:c.instructions+=2;goto B440354;
case 0x440355:c.instructions+=1;goto B440355;
case 0x44035a:goto L44035a;
case 0x440360:goto L440360;
case 0x440365:c.instructions+=2;goto B440365;
case 0x440367:c.instructions+=1;goto B440367;
case 0x440369:goto L440369;
case 0x44036e:c.instructions+=5;goto B44036e;
case 0x440370:c.instructions+=4;goto B440370;
case 0x440375:c.instructions+=3;goto B440375;
case 0x440377:c.instructions+=2;goto B440377;
case 0x44037d:c.instructions+=1;goto B44037d;
case 0x440382:goto L440382;
case 0x44038c:goto L44038c;
case 0x440390:goto L440390;
case 0x440391:c.instructions+=6;goto B440391;
case 0x440392:c.instructions+=5;goto B440392;
case 0x440393:c.instructions+=4;goto B440393;
case 0x440394:c.instructions+=3;goto B440394;
case 0x440398:c.instructions+=2;goto B440398;
case 0x44039a:c.instructions+=1;goto B44039a;
case 0x44039c:goto L44039c;
case 0x4403a1:c.instructions+=2;goto B4403a1;
case 0x4403a2:c.instructions+=1;goto B4403a2;
case 0x4403a7:goto L4403a7;
case 0x4403aa:c.instructions+=2;goto B4403aa;
case 0x4403ac:c.instructions+=1;goto B4403ac;
case 0x4403ae:goto L4403ae;
case 0x4403b0:c.instructions+=2;goto B4403b0;
case 0x4403b2:c.instructions+=1;goto B4403b2;
case 0x4403b4:goto L4403b4;
case 0x4403b8:goto L4403b8;
case 0x4403bc:c.instructions+=5;goto B4403bc;
case 0x4403be:c.instructions+=4;goto B4403be;
case 0x4403c1:c.instructions+=3;goto B4403c1;
case 0x4403c8:c.instructions+=2;goto B4403c8;
case 0x4403ca:c.instructions+=1;goto B4403ca;
case 0x4403cc:goto L4403cc;
case 0x4403ce:c.instructions+=7;goto B4403ce;
case 0x4403cf:c.instructions+=6;goto B4403cf;
case 0x4403d0:c.instructions+=5;goto B4403d0;
case 0x4403d4:c.instructions+=4;goto B4403d4;
case 0x4403d5:c.instructions+=3;goto B4403d5;
case 0x4403d6:c.instructions+=2;goto B4403d6;
case 0x4403d7:c.instructions+=1;goto B4403d7;
case 0x4403da:goto L4403da;
case 0x4403dd:c.instructions+=5;goto B4403dd;
case 0x4403de:c.instructions+=4;goto B4403de;
case 0x4403df:c.instructions+=3;goto B4403df;
case 0x4403e0:c.instructions+=2;goto B4403e0;
case 0x4403e1:c.instructions+=1;goto B4403e1;
case 0x4403e2:goto L4403e2;
case 0x4403e7:c.instructions+=4;goto B4403e7;
case 0x4403e9:c.instructions+=3;goto B4403e9;
case 0x4403ef:c.instructions+=2;goto B4403ef;
case 0x4403f5:c.instructions+=1;goto B4403f5;
case 0x4403f7:goto L4403f7;
case 0x4403fc:c.instructions+=5;goto B4403fc;
case 0x4403fe:c.instructions+=4;goto B4403fe;
case 0x440403:c.instructions+=3;goto B440403;
case 0x440405:c.instructions+=2;goto B440405;
case 0x44040b:c.instructions+=1;goto B44040b;
case 0x440410:goto L440410;
case 0x44041a:goto L44041a;
case 0x440420:c.instructions+=2;goto B440420;
case 0x440422:c.instructions+=1;goto B440422;
case 0x440424:goto L440424;
case 0x440429:c.instructions+=4;goto B440429;
case 0x44042a:c.instructions+=3;goto B44042a;
case 0x44042c:c.instructions+=2;goto B44042c;
case 0x44042e:c.instructions+=1;goto B44042e;
case 0x440430:goto L440430;
case 0x440437:c.instructions+=2;goto B440437;
case 0x440439:c.instructions+=1;goto B440439;
case 0x44043b:goto L44043b;
case 0x44043d:c.instructions+=1;goto B44043d;
case 0x440442:goto L440442;
case 0x440444:c.instructions+=4;goto B440444;
case 0x440447:c.instructions+=3;goto B440447;
case 0x44044d:c.instructions+=2;goto B44044d;
case 0x440451:c.instructions+=1;goto B440451;
case 0x440453:goto L440453;
case 0x44045b:c.instructions+=1;goto B44045b;
case 0x44045f:goto L44045f;
case 0x440461:c.instructions+=6;goto B440461;
case 0x440464:c.instructions+=5;goto B440464;
case 0x440465:c.instructions+=4;goto B440465;
case 0x44046a:c.instructions+=3;goto B44046a;
case 0x44046c:c.instructions+=2;goto B44046c;
case 0x44046e:c.instructions+=1;goto B44046e;
case 0x440470:goto L440470;
case 0x440473:c.instructions+=1;goto B440473;
case 0x440475:goto L440475;
case 0x440479:c.instructions+=3;goto B440479;
case 0x44047a:c.instructions+=2;goto B44047a;
case 0x44047c:c.instructions+=1;goto B44047c;
case 0x44047e:goto L44047e;
case 0x440485:c.instructions+=19;goto B440485;
case 0x440489:c.instructions+=18;goto B440489;
case 0x44048a:c.instructions+=17;goto B44048a;
case 0x44048c:c.instructions+=16;goto B44048c;
case 0x44048f:c.instructions+=15;goto B44048f;
case 0x440490:c.instructions+=14;goto B440490;
case 0x440493:c.instructions+=13;goto B440493;
case 0x440495:c.instructions+=12;goto B440495;
case 0x440498:c.instructions+=11;goto B440498;
case 0x44049c:c.instructions+=10;goto B44049c;
case 0x44049f:c.instructions+=9;goto B44049f;
case 0x4404a0:c.instructions+=8;goto B4404a0;
case 0x4404a1:c.instructions+=7;goto B4404a1;
case 0x4404a5:c.instructions+=6;goto B4404a5;
case 0x4404a9:c.instructions+=5;goto B4404a9;
case 0x4404aa:c.instructions+=4;goto B4404aa;
case 0x4404ae:c.instructions+=3;goto B4404ae;
case 0x4404af:c.instructions+=2;goto B4404af;
case 0x4404b1:c.instructions+=1;goto B4404b1;
case 0x4404b6:goto L4404b6;
case 0x4404b8:c.instructions+=2;goto B4404b8;
case 0x4404ba:c.instructions+=1;goto B4404ba;
case 0x4404bc:goto L4404bc;
case 0x4404be:c.instructions+=2;goto B4404be;
case 0x4404c0:c.instructions+=1;goto B4404c0;
case 0x4404c2:goto L4404c2;
case 0x4404c6:c.instructions+=8;goto B4404c6;
case 0x4404ca:c.instructions+=7;goto B4404ca;
case 0x4404cc:c.instructions+=6;goto B4404cc;
case 0x4404cf:c.instructions+=5;goto B4404cf;
case 0x4404d1:c.instructions+=4;goto B4404d1;
case 0x4404d3:c.instructions+=3;goto B4404d3;
case 0x4404d5:c.instructions+=2;goto B4404d5;
case 0x4404d6:c.instructions+=1;goto B4404d6;
case 0x4404d8:goto L4404d8;
case 0x4404da:c.instructions+=18;goto B4404da;
case 0x4404dd:c.instructions+=17;goto B4404dd;
case 0x4404e0:c.instructions+=16;goto B4404e0;
case 0x4404e2:c.instructions+=15;goto B4404e2;
case 0x4404e5:c.instructions+=14;goto B4404e5;
case 0x4404e8:c.instructions+=13;goto B4404e8;
case 0x4404eb:c.instructions+=12;goto B4404eb;
case 0x4404ef:c.instructions+=11;goto B4404ef;
case 0x4404f3:c.instructions+=10;goto B4404f3;
case 0x4404f6:c.instructions+=9;goto B4404f6;
case 0x4404f8:c.instructions+=8;goto B4404f8;
case 0x4404fb:c.instructions+=7;goto B4404fb;
case 0x4404ff:c.instructions+=6;goto B4404ff;
case 0x440503:c.instructions+=5;goto B440503;
case 0x440506:c.instructions+=4;goto B440506;
case 0x440509:c.instructions+=3;goto B440509;
case 0x44050f:c.instructions+=2;goto B44050f;
case 0x440515:c.instructions+=1;goto B440515;
case 0x440517:goto L440517;
case 0x440518:goto L440518;
case 0x44051e:c.instructions+=9;goto B44051e;
case 0x44051f:c.instructions+=8;goto B44051f;
case 0x440520:c.instructions+=7;goto B440520;
case 0x440521:c.instructions+=6;goto B440521;
case 0x440522:c.instructions+=5;goto B440522;
case 0x440528:c.instructions+=4;goto B440528;
case 0x44052b:c.instructions+=3;goto B44052b;
case 0x44052c:c.instructions+=2;goto B44052c;
case 0x44052d:c.instructions+=1;goto B44052d;
case 0x44052e:goto L44052e;
case 0x440540:goto L440540;
case 0x440541:c.instructions+=3;goto B440541;
case 0x440545:c.instructions+=2;goto B440545;
case 0x440547:c.instructions+=1;goto B440547;
case 0x44054d:goto L44054d;
case 0x440552:c.instructions+=1;goto B440552;
case 0x440553:goto L440553;
case 0x440555:c.instructions+=2;goto B440555;
case 0x440557:c.instructions+=1;goto B440557;
case 0x440559:goto L440559;
case 0x44055c:c.instructions+=2;goto B44055c;
case 0x44055e:c.instructions+=1;goto B44055e;
case 0x440560:goto L440560;
case 0x440563:c.instructions+=3;goto B440563;
case 0x440565:c.instructions+=2;goto B440565;
case 0x440567:c.instructions+=1;goto B440567;
case 0x440569:goto L440569;
case 0x44056c:c.instructions+=2;goto B44056c;
case 0x440572:c.instructions+=1;goto B440572;
case 0x440574:goto L440574;
case 0x44057a:c.instructions+=4;goto B44057a;
case 0x44057e:c.instructions+=3;goto B44057e;
case 0x440581:c.instructions+=2;goto B440581;
case 0x440583:c.instructions+=1;goto B440583;
case 0x440585:goto L440585;
case 0x44058a:c.instructions+=4;goto B44058a;
case 0x44058b:c.instructions+=3;goto B44058b;
case 0x44058d:c.instructions+=2;goto B44058d;
case 0x44058f:c.instructions+=1;goto B44058f;
case 0x440591:goto L440591;
case 0x440598:c.instructions+=2;goto B440598;
case 0x44059a:c.instructions+=1;goto B44059a;
case 0x44059c:goto L44059c;
case 0x44059e:c.instructions+=1;goto B44059e;
case 0x4405a3:goto L4405a3;
case 0x4405a7:c.instructions+=1;goto B4405a7;
case 0x4405a9:goto L4405a9;
case 0x4405ad:goto L4405ad;
case 0x4405af:c.instructions+=3;goto B4405af;
case 0x4405b0:c.instructions+=2;goto B4405b0;
case 0x4405b1:c.instructions+=1;goto B4405b1;
case 0x4405b4:goto L4405b4;
case 0x4405b7:c.instructions+=3;goto B4405b7;
case 0x4405b8:c.instructions+=2;goto B4405b8;
case 0x4405b9:c.instructions+=1;goto B4405b9;
case 0x4405ba:goto L4405ba;
case 0x4405bd:c.instructions+=14;goto B4405bd;
case 0x4405c1:c.instructions+=13;goto B4405c1;
case 0x4405c3:c.instructions+=12;goto B4405c3;
case 0x4405c7:c.instructions+=11;goto B4405c7;
case 0x4405ce:c.instructions+=10;goto B4405ce;
case 0x4405cf:c.instructions+=9;goto B4405cf;
case 0x4405d1:c.instructions+=8;goto B4405d1;
case 0x4405d2:c.instructions+=7;goto B4405d2;
case 0x4405d5:c.instructions+=6;goto B4405d5;
case 0x4405d7:c.instructions+=5;goto B4405d7;
case 0x4405da:c.instructions+=4;goto B4405da;
case 0x4405dd:c.instructions+=3;goto B4405dd;
case 0x4405df:c.instructions+=2;goto B4405df;
case 0x4405e1:c.instructions+=1;goto B4405e1;
case 0x4405e6:goto L4405e6;
case 0x4405e7:c.instructions+=3;goto B4405e7;
case 0x4405e8:c.instructions+=2;goto B4405e8;
case 0x4405ea:c.instructions+=1;goto B4405ea;
case 0x4405ef:goto L4405ef;
case 0x4405f2:c.instructions+=9;goto B4405f2;
case 0x4405f5:c.instructions+=8;goto B4405f5;
case 0x4405f7:c.instructions+=7;goto B4405f7;
case 0x4405f9:c.instructions+=6;goto B4405f9;
case 0x4405fb:c.instructions+=5;goto B4405fb;
case 0x4405fe:c.instructions+=4;goto B4405fe;
case 0x440601:c.instructions+=3;goto B440601;
case 0x440603:c.instructions+=2;goto B440603;
case 0x440606:c.instructions+=1;goto B440606;
case 0x44060b:goto L44060b;
case 0x440610:c.instructions+=5;goto B440610;
case 0x440612:c.instructions+=4;goto B440612;
case 0x440614:c.instructions+=3;goto B440614;
case 0x440615:c.instructions+=2;goto B440615;
case 0x440616:c.instructions+=1;goto B440616;
case 0x440618:goto L440618;
case 0x44061e:c.instructions+=2;goto B44061e;
case 0x440621:c.instructions+=1;goto B440621;
case 0x440623:goto L440623;
case 0x440628:goto L440628;
case 0x44062e:c.instructions+=1;goto B44062e;
case 0x440634:goto L440634;
case 0x440635:goto L440635;
case 0x440636:c.instructions+=1;goto B440636;
case 0x440640:goto L440640;
case 0x440644:c.instructions+=2;goto B440644;
case 0x440645:c.instructions+=1;goto B440645;
case 0x44064a:goto L44064a;
case 0x44064b:c.instructions+=1;goto B44064b;
case 0x440650:goto L440650;
case 0x440653:c.instructions+=4;goto B440653;
case 0x440656:c.instructions+=3;goto B440656;
case 0x440658:c.instructions+=2;goto B440658;
case 0x44065c:c.instructions+=1;goto B44065c;
case 0x440662:goto L440662;
case 0x440665:c.instructions+=4;goto B440665;
case 0x440668:c.instructions+=3;goto B440668;
case 0x44066b:c.instructions+=2;goto B44066b;
case 0x44066d:c.instructions+=1;goto B44066d;
case 0x44066f:goto L44066f;
case 0x440670:c.instructions+=6;goto B440670;
case 0x440673:c.instructions+=5;goto B440673;
case 0x440675:c.instructions+=4;goto B440675;
case 0x440676:c.instructions+=3;goto B440676;
case 0x440677:c.instructions+=2;goto B440677;
case 0x440678:c.instructions+=1;goto B440678;
case 0x44067a:goto L44067a;
case 0x440680:goto L440680;
case 0x440683:c.instructions+=2;goto B440683;
case 0x440685:c.instructions+=1;goto B440685;
case 0x440687:goto L440687;
case 0x440689:c.instructions+=3;goto B440689;
case 0x44068b:c.instructions+=2;goto B44068b;
case 0x44068d:c.instructions+=1;goto B44068d;
case 0x44068f:goto L44068f;
case 0x440692:goto L440692;
case 0x440694:c.instructions+=6;goto B440694;
case 0x440696:c.instructions+=5;goto B440696;
case 0x440699:c.instructions+=4;goto B440699;
case 0x44069b:c.instructions+=3;goto B44069b;
case 0x44069d:c.instructions+=2;goto B44069d;
case 0x44069f:c.instructions+=1;goto B44069f;
case 0x4406a1:goto L4406a1;
case 0x4406a4:c.instructions+=1;goto B4406a4;
case 0x4406a6:goto L4406a6;
case 0x4406a9:c.instructions+=4;goto B4406a9;
case 0x4406ac:c.instructions+=3;goto B4406ac;
case 0x4406ae:c.instructions+=2;goto B4406ae;
case 0x4406b0:c.instructions+=1;goto B4406b0;
case 0x4406b2:goto L4406b2;
case 0x4406b4:goto L4406b4;
case 0x4406b6:c.instructions+=2;goto B4406b6;
case 0x4406b8:c.instructions+=1;goto B4406b8;
case 0x4406ba:goto L4406ba;
case 0x4406bd:c.instructions+=1;goto B4406bd;
case 0x4406bf:goto L4406bf;
case 0x4406c2:c.instructions+=2;goto B4406c2;
case 0x4406c4:c.instructions+=1;goto B4406c4;
case 0x4406c6:goto L4406c6;
case 0x4406c8:goto L4406c8;
case 0x4406cb:goto L4406cb;
case 0x4406cd:c.instructions+=3;goto B4406cd;
case 0x4406cf:c.instructions+=2;goto B4406cf;
case 0x4406d3:c.instructions+=1;goto B4406d3;
case 0x4406d5:goto L4406d5;
case 0x4406d8:c.instructions+=3;goto B4406d8;
case 0x4406da:c.instructions+=2;goto B4406da;
case 0x4406de:c.instructions+=1;goto B4406de;
case 0x4406e4:goto L4406e4;
case 0x4406e6:goto L4406e6;
case 0x4406ea:c.instructions+=1;goto B4406ea;
case 0x4406f0:goto L4406f0;
case 0x4406f3:c.instructions+=4;goto B4406f3;
case 0x4406f5:c.instructions+=3;goto B4406f5;
case 0x4406f8:c.instructions+=2;goto B4406f8;
case 0x4406fc:c.instructions+=1;goto B4406fc;
case 0x440702:goto L440702;
case 0x440705:c.instructions+=4;goto B440705;
case 0x440707:c.instructions+=3;goto B440707;
case 0x44070a:c.instructions+=2;goto B44070a;
case 0x44070e:c.instructions+=1;goto B44070e;
case 0x440710:goto L440710;
case 0x440712:c.instructions+=5;goto B440712;
case 0x440715:c.instructions+=4;goto B440715;
case 0x440719:c.instructions+=3;goto B440719;
case 0x44071b:c.instructions+=2;goto B44071b;
case 0x44071d:c.instructions+=1;goto B44071d;
case 0x440720:goto L440720;
case 0x440722:c.instructions+=6;goto B440722;
case 0x440724:c.instructions+=5;goto B440724;
case 0x440727:c.instructions+=4;goto B440727;
case 0x440729:c.instructions+=3;goto B440729;
case 0x44072b:c.instructions+=2;goto B44072b;
case 0x44072d:c.instructions+=1;goto B44072d;
case 0x44072f:goto L44072f;
case 0x440732:c.instructions+=1;goto B440732;
case 0x440734:goto L440734;
case 0x440737:c.instructions+=4;goto B440737;
case 0x44073a:c.instructions+=3;goto B44073a;
case 0x44073c:c.instructions+=2;goto B44073c;
case 0x44073e:c.instructions+=1;goto B44073e;
case 0x440740:goto L440740;
case 0x440742:goto L440742;
case 0x440744:c.instructions+=2;goto B440744;
case 0x440746:c.instructions+=1;goto B440746;
case 0x440748:goto L440748;
case 0x44074b:c.instructions+=1;goto B44074b;
case 0x44074d:goto L44074d;
case 0x440751:c.instructions+=2;goto B440751;
case 0x440755:c.instructions+=1;goto B440755;
case 0x440757:goto L440757;
case 0x44075b:c.instructions+=3;goto B44075b;
case 0x44075f:c.instructions+=2;goto B44075f;
case 0x440761:c.instructions+=1;goto B440761;
case 0x440763:goto L440763;
case 0x440767:goto L440767;
case 0x44076b:c.instructions+=9;goto B44076b;
case 0x44076e:c.instructions+=8;goto B44076e;
case 0x440771:c.instructions+=7;goto B440771;
case 0x440773:c.instructions+=6;goto B440773;
case 0x440776:c.instructions+=5;goto B440776;
case 0x440779:c.instructions+=4;goto B440779;
case 0x44077d:c.instructions+=3;goto B44077d;
case 0x44077e:c.instructions+=2;goto B44077e;
case 0x440781:c.instructions+=1;goto B440781;
case 0x440786:goto L440786;
case 0x440789:c.instructions+=1;goto B440789;
case 0x44078b:goto L44078b;
case 0x44078d:c.instructions+=3;goto B44078d;
case 0x440791:c.instructions+=2;goto B440791;
case 0x440793:c.instructions+=1;goto B440793;
case 0x440799:goto L440799;
case 0x44079a:c.instructions+=3;goto B44079a;
case 0x44079b:c.instructions+=2;goto B44079b;
case 0x44079c:c.instructions+=1;goto B44079c;
case 0x44079d:goto L44079d;
case 0x4407a0:c.instructions+=1;goto B4407a0;
case 0x4407b0:goto L4407b0;
case 0x4407b2:c.instructions+=5;goto B4407b2;
case 0x4407b5:c.instructions+=4;goto B4407b5;
case 0x4407b7:c.instructions+=3;goto B4407b7;
case 0x4407ba:c.instructions+=2;goto B4407ba;
case 0x4407c0:c.instructions+=1;goto B4407c0;
case 0x4407d0:goto L4407d0;
case 0x4407d1:c.instructions+=7;goto B4407d1;
case 0x4407d4:c.instructions+=6;goto B4407d4;
case 0x4407d6:c.instructions+=5;goto B4407d6;
case 0x4407d8:c.instructions+=4;goto B4407d8;
case 0x4407de:c.instructions+=3;goto B4407de;
case 0x4407e0:c.instructions+=2;goto B4407e0;
case 0x4407e3:c.instructions+=1;goto B4407e3;
case 0x4407e5:goto L4407e5;
case 0x4407e7:c.instructions+=5;goto B4407e7;
case 0x4407ea:c.instructions+=4;goto B4407ea;
case 0x4407ec:c.instructions+=3;goto B4407ec;
case 0x4407ed:c.instructions+=2;goto B4407ed;
case 0x4407f0:c.instructions+=1;goto B4407f0;
case 0x4407f5:goto L4407f5;
case 0x4407f7:c.instructions+=3;goto B4407f7;
case 0x4407fa:c.instructions+=2;goto B4407fa;
case 0x4407fc:c.instructions+=1;goto B4407fc;
case 0x4407fe:goto L4407fe;
case 0x4407ff:c.instructions+=1;goto B4407ff;
case 0x440800:goto L440800;
case 0x440801:c.instructions+=5;goto B440801;
case 0x440804:c.instructions+=4;goto B440804;
case 0x440805:c.instructions+=3;goto B440805;
case 0x440808:c.instructions+=2;goto B440808;
case 0x44080a:c.instructions+=1;goto B44080a;
case 0x44080c:goto L44080c;
case 0x440810:goto L440810;
case 0x440812:c.instructions+=1;goto B440812;
case 0x440817:goto L440817;
case 0x440819:c.instructions+=2;goto B440819;
case 0x44081b:c.instructions+=1;goto B44081b;
case 0x44081d:goto L44081d;
case 0x44081e:c.instructions+=2;goto B44081e;
case 0x44081f:c.instructions+=1;goto B44081f;
case 0x440820:goto L440820;
case 0x440824:c.instructions+=6;goto B440824;
case 0x440828:c.instructions+=5;goto B440828;
case 0x440829:c.instructions+=4;goto B440829;
case 0x44082b:c.instructions+=3;goto B44082b;
case 0x44082d:c.instructions+=2;goto B44082d;
case 0x44082e:c.instructions+=1;goto B44082e;
case 0x440833:goto L440833;
case 0x440836:c.instructions+=1;goto B440836;
case 0x440840:goto L440840;
case 0x440841:c.instructions+=8;goto B440841;
case 0x440842:c.instructions+=7;goto B440842;
case 0x440844:c.instructions+=6;goto B440844;
case 0x440848:c.instructions+=5;goto B440848;
case 0x44084a:c.instructions+=4;goto B44084a;
case 0x44084c:c.instructions+=3;goto B44084c;
case 0x44084d:c.instructions+=2;goto B44084d;
case 0x440853:c.instructions+=1;goto B440853;
case 0x440855:goto L440855;
case 0x44085f:goto L44085f;
case 0x440863:c.instructions+=6;goto B440863;
case 0x440864:c.instructions+=5;goto B440864;
case 0x440868:c.instructions+=4;goto B440868;
case 0x44086c:c.instructions+=3;goto B44086c;
case 0x44086d:c.instructions+=2;goto B44086d;
case 0x44086e:c.instructions+=1;goto B44086e;
case 0x440873:goto L440873;
case 0x440876:c.instructions+=2;goto B440876;
case 0x440878:c.instructions+=1;goto B440878;
case 0x44087d:goto L44087d;
case 0x440881:c.instructions+=5;goto B440881;
case 0x440882:c.instructions+=4;goto B440882;
case 0x440883:c.instructions+=3;goto B440883;
case 0x440884:c.instructions+=2;goto B440884;
case 0x440886:c.instructions+=1;goto B440886;
case 0x44088b:goto L44088b;
case 0x44088c:c.instructions+=1;goto B44088c;
case 0x440891:goto L440891;
case 0x440894:c.instructions+=5;goto B440894;
case 0x440895:c.instructions+=4;goto B440895;
case 0x440897:c.instructions+=3;goto B440897;
case 0x440898:c.instructions+=2;goto B440898;
case 0x440899:c.instructions+=1;goto B440899;
case 0x4408a0:goto L4408a0;
case 0x4408a2:c.instructions+=19;goto B4408a2;
case 0x4408a7:c.instructions+=18;goto B4408a7;
case 0x4408ad:c.instructions+=17;goto B4408ad;
case 0x4408ae:c.instructions+=16;goto B4408ae;
case 0x4408b5:c.instructions+=15;goto B4408b5;
case 0x4408bb:c.instructions+=14;goto B4408bb;
case 0x4408bc:c.instructions+=13;goto B4408bc;
case 0x4408bd:c.instructions+=12;goto B4408bd;
case 0x4408be:c.instructions+=11;goto B4408be;
case 0x4408bf:c.instructions+=10;goto B4408bf;
case 0x4408c6:c.instructions+=9;goto B4408c6;
case 0x4408c8:c.instructions+=8;goto B4408c8;
case 0x4408c9:c.instructions+=7;goto B4408c9;
case 0x4408cd:c.instructions+=6;goto B4408cd;
case 0x4408ce:c.instructions+=5;goto B4408ce;
case 0x4408cf:c.instructions+=4;goto B4408cf;
case 0x4408d1:c.instructions+=3;goto B4408d1;
case 0x4408dc:c.instructions+=2;goto B4408dc;
case 0x4408e0:c.instructions+=1;goto B4408e0;
case 0x4408e5:goto L4408e5;
case 0x4408e8:c.instructions+=2;goto B4408e8;
case 0x4408ea:c.instructions+=1;goto B4408ea;
case 0x4408ef:goto L4408ef;
case 0x4408f3:c.instructions+=5;goto B4408f3;
case 0x4408f4:c.instructions+=4;goto B4408f4;
case 0x4408f5:c.instructions+=3;goto B4408f5;
case 0x4408f6:c.instructions+=2;goto B4408f6;
case 0x4408fa:c.instructions+=1;goto B4408fa;
case 0x4408ff:goto L4408ff;
case 0x440900:c.instructions+=1;goto B440900;
case 0x440905:goto L440905;
case 0x440908:c.instructions+=6;goto B440908;
case 0x44090a:c.instructions+=5;goto B44090a;
case 0x44090e:c.instructions+=4;goto B44090e;
case 0x440910:c.instructions+=3;goto B440910;
case 0x440913:c.instructions+=2;goto B440913;
case 0x44091a:c.instructions+=1;goto B44091a;
case 0x44091c:goto L44091c;
case 0x44091e:c.instructions+=1;goto B44091e;
case 0x440923:goto L440923;
case 0x440924:c.instructions+=3;goto B440924;
case 0x440929:c.instructions+=2;goto B440929;
case 0x44092a:c.instructions+=1;goto B44092a;
case 0x44092f:goto L44092f;
case 0x440932:c.instructions+=1;goto B440932;
case 0x440937:goto L440937;
case 0x44093e:c.instructions+=3;goto B44093e;
case 0x440940:c.instructions+=2;goto B440940;
case 0x440942:c.instructions+=1;goto B440942;
case 0x440948:goto L440948;
case 0x44094a:c.instructions+=1;goto B44094a;
case 0x440950:goto L440950;
case 0x440956:c.instructions+=2;goto B440956;
case 0x44095c:c.instructions+=1;goto B44095c;
case 0x44095e:goto L44095e;
case 0x440965:c.instructions+=8;goto B440965;
case 0x44096a:c.instructions+=7;goto B44096a;
case 0x44096c:c.instructions+=6;goto B44096c;
case 0x44096e:c.instructions+=5;goto B44096e;
case 0x440971:c.instructions+=4;goto B440971;
case 0x440975:c.instructions+=3;goto B440975;
case 0x440976:c.instructions+=2;goto B440976;
case 0x440978:c.instructions+=1;goto B440978;
case 0x44097d:goto L44097d;
case 0x440983:c.instructions+=28;goto B440983;
case 0x440989:c.instructions+=27;goto B440989;
case 0x44098c:c.instructions+=26;goto B44098c;
case 0x44098f:c.instructions+=25;goto B44098f;
case 0x440990:c.instructions+=24;goto B440990;
case 0x440996:c.instructions+=23;goto B440996;
case 0x440998:c.instructions+=22;goto B440998;
case 0x44099a:c.instructions+=21;goto B44099a;
case 0x44099c:c.instructions+=20;goto B44099c;
case 0x44099f:c.instructions+=19;goto B44099f;
case 0x4409a2:c.instructions+=18;goto B4409a2;
case 0x4409a9:c.instructions+=17;goto B4409a9;
case 0x4409ac:c.instructions+=16;goto B4409ac;
case 0x4409ae:c.instructions+=15;goto B4409ae;
case 0x4409b0:c.instructions+=14;goto B4409b0;
case 0x4409b2:c.instructions+=13;goto B4409b2;
case 0x4409b5:c.instructions+=12;goto B4409b5;
case 0x4409b8:c.instructions+=11;goto B4409b8;
case 0x4409bb:c.instructions+=10;goto B4409bb;
case 0x4409be:c.instructions+=9;goto B4409be;
case 0x4409c0:c.instructions+=8;goto B4409c0;
case 0x4409c2:c.instructions+=7;goto B4409c2;
case 0x4409c4:c.instructions+=6;goto B4409c4;
case 0x4409c6:c.instructions+=5;goto B4409c6;
case 0x4409cd:c.instructions+=4;goto B4409cd;
case 0x4409ce:c.instructions+=3;goto B4409ce;
case 0x4409d1:c.instructions+=2;goto B4409d1;
case 0x4409d3:c.instructions+=1;goto B4409d3;
case 0x4409d9:goto L4409d9;
case 0x4409dd:c.instructions+=1;goto B4409dd;
case 0x4409df:goto L4409df;
case 0x4409e1:c.instructions+=2;goto B4409e1;
case 0x4409e3:c.instructions+=1;goto B4409e3;
case 0x4409e5:goto L4409e5;
case 0x4409e9:c.instructions+=1;goto B4409e9;
case 0x4409f0:goto L4409f0;
case 0x4409f2:c.instructions+=5;goto B4409f2;
case 0x4409f4:c.instructions+=4;goto B4409f4;
case 0x4409f7:c.instructions+=3;goto B4409f7;
case 0x4409fb:c.instructions+=2;goto B4409fb;
case 0x4409fd:c.instructions+=1;goto B4409fd;
case 0x440a02:goto L440a02;
case 0x440a04:goto L440a04;
case 0x440a08:c.instructions+=4;goto B440a08;
case 0x440a09:c.instructions+=3;goto B440a09;
case 0x440a0c:c.instructions+=2;goto B440a0c;
case 0x440a0e:c.instructions+=1;goto B440a0e;
case 0x440a10:goto L440a10;
case 0x440a12:c.instructions+=1;goto B440a12;
case 0x440a16:goto L440a16;
case 0x440a1a:c.instructions+=4;goto B440a1a;
case 0x440a1c:c.instructions+=3;goto B440a1c;
case 0x440a1e:c.instructions+=2;goto B440a1e;
case 0x440a29:c.instructions+=1;goto B440a29;
case 0x440a2b:goto L440a2b;
case 0x440a2f:c.instructions+=1;goto B440a2f;
case 0x440a30:goto L440a30;
case 0x440a32:c.instructions+=2;goto B440a32;
case 0x440a33:c.instructions+=1;goto B440a33;
case 0x440a38:goto L440a38;
case 0x440a3c:c.instructions+=5;goto B440a3c;
case 0x440a3f:c.instructions+=4;goto B440a3f;
case 0x440a40:c.instructions+=3;goto B440a40;
case 0x440a43:c.instructions+=2;goto B440a43;
case 0x440a45:c.instructions+=1;goto B440a45;
case 0x440a47:goto L440a47;
case 0x440a4e:c.instructions+=6;goto B440a4e;
case 0x440a4f:c.instructions+=5;goto B440a4f;
case 0x440a50:c.instructions+=4;goto B440a50;
case 0x440a52:c.instructions+=3;goto B440a52;
case 0x440a53:c.instructions+=2;goto B440a53;
case 0x440a54:c.instructions+=1;goto B440a54;
case 0x440a56:goto L440a56;
case 0x440a57:c.instructions+=1;goto B440a57;
case 0x440a5c:goto L440a5c;
case 0x440a5f:goto L440a5f;
case 0x440a66:c.instructions+=3;goto B440a66;
case 0x440a6d:c.instructions+=2;goto B440a6d;
case 0x440a73:c.instructions+=1;goto B440a73;
case 0x440a80:goto L440a80;
case 0x440a84:c.instructions+=2;goto B440a84;
case 0x440a86:c.instructions+=1;goto B440a86;
case 0x440a88:goto L440a88;
case 0x440a89:c.instructions+=9;goto B440a89;
case 0x440a8d:c.instructions+=8;goto B440a8d;
case 0x440a8f:c.instructions+=7;goto B440a8f;
case 0x440a92:c.instructions+=6;goto B440a92;
case 0x440a95:c.instructions+=5;goto B440a95;
case 0x440a96:c.instructions+=4;goto B440a96;
case 0x440a98:c.instructions+=3;goto B440a98;
case 0x440a9a:c.instructions+=2;goto B440a9a;
case 0x440a9c:c.instructions+=1;goto B440a9c;
case 0x440aa1:goto L440aa1;
case 0x440aa8:c.instructions+=3;goto B440aa8;
case 0x440aa9:c.instructions+=2;goto B440aa9;
case 0x440aad:c.instructions+=1;goto B440aad;
case 0x440ab2:goto L440ab2;
case 0x440ab5:c.instructions+=2;goto B440ab5;
case 0x440ab6:c.instructions+=1;goto B440ab6;
case 0x440ab7:goto L440ab7;
case 0x440abb:c.instructions+=3;goto B440abb;
case 0x440ac2:c.instructions+=2;goto B440ac2;
case 0x440ac5:c.instructions+=1;goto B440ac5;
case 0x440ad0:goto L440ad0;
case 0x440ad4:c.instructions+=3;goto B440ad4;
case 0x440ad6:c.instructions+=2;goto B440ad6;
case 0x440adb:c.instructions+=1;goto B440adb;
case 0x440add:goto L440add;
case 0x440ae0:goto L440ae0;
case 0x440ae2:c.instructions+=3;goto B440ae2;
case 0x440ae3:c.instructions+=2;goto B440ae3;
case 0x440ae6:c.instructions+=1;goto B440ae6;
case 0x440ae8:goto L440ae8;
case 0x440aef:goto L440aef;
case 0x440af2:c.instructions+=4;goto B440af2;
case 0x440af8:c.instructions+=3;goto B440af8;
case 0x440afb:c.instructions+=2;goto B440afb;
case 0x440afd:c.instructions+=1;goto B440afd;
case 0x440aff:goto L440aff;
case 0x440b02:c.instructions+=4;goto B440b02;
case 0x440b08:c.instructions+=3;goto B440b08;
case 0x440b0b:c.instructions+=2;goto B440b0b;
case 0x440b0d:c.instructions+=1;goto B440b0d;
case 0x440b0f:goto L440b0f;
case 0x440b12:goto L440b12;
case 0x440b15:c.instructions+=2;goto B440b15;
case 0x440b17:c.instructions+=1;goto B440b17;
case 0x440b19:goto L440b19;
case 0x440b1a:c.instructions+=5;goto B440b1a;
case 0x440b1e:c.instructions+=4;goto B440b1e;
case 0x440b20:c.instructions+=3;goto B440b20;
case 0x440b22:c.instructions+=2;goto B440b22;
case 0x440b23:c.instructions+=1;goto B440b23;
case 0x440b28:goto L440b28;
case 0x440b2b:c.instructions+=1;goto B440b2b;
case 0x440b40:goto L440b40;
case 0x440b41:c.instructions+=14;goto B440b41;
case 0x440b45:c.instructions+=13;goto B440b45;
case 0x440b46:c.instructions+=12;goto B440b46;
case 0x440b4a:c.instructions+=11;goto B440b4a;
case 0x440b4b:c.instructions+=10;goto B440b4b;
case 0x440b4c:c.instructions+=9;goto B440b4c;
case 0x440b50:c.instructions+=8;goto B440b50;
case 0x440b52:c.instructions+=7;goto B440b52;
case 0x440b55:c.instructions+=6;goto B440b55;
case 0x440b56:c.instructions+=5;goto B440b56;
case 0x440b58:c.instructions+=4;goto B440b58;
case 0x440b5b:c.instructions+=3;goto B440b5b;
case 0x440b5d:c.instructions+=2;goto B440b5d;
case 0x440b5e:c.instructions+=1;goto B440b5e;
case 0x440b63:goto L440b63;
case 0x440b65:c.instructions+=4;goto B440b65;
case 0x440b67:c.instructions+=3;goto B440b67;
case 0x440b6a:c.instructions+=2;goto B440b6a;
case 0x440b6c:c.instructions+=1;goto B440b6c;
case 0x440b6e:goto L440b6e;
case 0x440b72:c.instructions+=12;goto B440b72;
case 0x440b75:c.instructions+=11;goto B440b75;
case 0x440b77:c.instructions+=10;goto B440b77;
case 0x440b7a:c.instructions+=9;goto B440b7a;
case 0x440b7d:c.instructions+=8;goto B440b7d;
case 0x440b84:c.instructions+=7;goto B440b84;
case 0x440b87:c.instructions+=6;goto B440b87;
case 0x440b8a:c.instructions+=5;goto B440b8a;
case 0x440b8d:c.instructions+=4;goto B440b8d;
case 0x440b90:c.instructions+=3;goto B440b90;
case 0x440b93:c.instructions+=2;goto B440b93;
case 0x440b96:c.instructions+=1;goto B440b96;
case 0x440b9b:goto L440b9b;
case 0x440b9c:c.instructions+=5;goto B440b9c;
case 0x440b9e:c.instructions+=4;goto B440b9e;
case 0x440b9f:c.instructions+=3;goto B440b9f;
case 0x440ba0:c.instructions+=2;goto B440ba0;
case 0x440ba1:c.instructions+=1;goto B440ba1;
case 0x440bb0:goto L440bb0;
case 0x440bb1:c.instructions+=12;goto B440bb1;
case 0x440bb2:c.instructions+=11;goto B440bb2;
case 0x440bb4:c.instructions+=10;goto B440bb4;
case 0x440bb7:c.instructions+=9;goto B440bb7;
case 0x440bba:c.instructions+=8;goto B440bba;
case 0x440bbd:c.instructions+=7;goto B440bbd;
case 0x440bbe:c.instructions+=6;goto B440bbe;
case 0x440bc2:c.instructions+=5;goto B440bc2;
case 0x440bc3:c.instructions+=4;goto B440bc3;
case 0x440bc4:c.instructions+=3;goto B440bc4;
case 0x440bc5:c.instructions+=2;goto B440bc5;
case 0x440bc6:c.instructions+=1;goto B440bc6;
case 0x440bcb:goto L440bcb;
case 0x440bcd:c.instructions+=8;goto B440bcd;
case 0x440bd0:c.instructions+=7;goto B440bd0;
case 0x440bd3:c.instructions+=6;goto B440bd3;
case 0x440bd6:c.instructions+=5;goto B440bd6;
case 0x440bd9:c.instructions+=4;goto B440bd9;
case 0x440bdc:c.instructions+=3;goto B440bdc;
case 0x440bde:c.instructions+=2;goto B440bde;
case 0x440be0:c.instructions+=1;goto B440be0;
case 0x440be2:goto L440be2;
case 0x440be4:c.instructions+=4;goto B440be4;
case 0x440be7:c.instructions+=3;goto B440be7;
case 0x440be9:c.instructions+=2;goto B440be9;
case 0x440bec:c.instructions+=1;goto B440bec;
case 0x440bee:goto L440bee;
case 0x440bf1:c.instructions+=18;goto B440bf1;
case 0x440bf4:c.instructions+=17;goto B440bf4;
case 0x440bf8:c.instructions+=16;goto B440bf8;
case 0x440bf9:c.instructions+=15;goto B440bf9;
case 0x440bfc:c.instructions+=14;goto B440bfc;
case 0x440bfe:c.instructions+=13;goto B440bfe;
case 0x440c01:c.instructions+=12;goto B440c01;
case 0x440c04:c.instructions+=11;goto B440c04;
case 0x440c08:c.instructions+=10;goto B440c08;
case 0x440c0b:c.instructions+=9;goto B440c0b;
case 0x440c0e:c.instructions+=8;goto B440c0e;
case 0x440c15:c.instructions+=7;goto B440c15;
case 0x440c18:c.instructions+=6;goto B440c18;
case 0x440c1a:c.instructions+=5;goto B440c1a;
case 0x440c1b:c.instructions+=4;goto B440c1b;
case 0x440c1e:c.instructions+=3;goto B440c1e;
case 0x440c1f:c.instructions+=2;goto B440c1f;
case 0x440c20:c.instructions+=1;goto B440c20;
case 0x440c30:goto L440c30;
case 0x440c31:c.instructions+=11;goto B440c31;
case 0x440c32:c.instructions+=10;goto B440c32;
case 0x440c33:c.instructions+=9;goto B440c33;
case 0x440c34:c.instructions+=8;goto B440c34;
case 0x440c35:c.instructions+=7;goto B440c35;
case 0x440c37:c.instructions+=6;goto B440c37;
case 0x440c39:c.instructions+=5;goto B440c39;
case 0x440c3c:c.instructions+=4;goto B440c3c;
case 0x440c3e:c.instructions+=3;goto B440c3e;
case 0x440c40:c.instructions+=2;goto B440c40;
case 0x440c41:c.instructions+=1;goto B440c41;
case 0x440c46:goto L440c46;
case 0x440c49:c.instructions+=5;goto B440c49;
case 0x440c4b:c.instructions+=4;goto B440c4b;
case 0x440c4d:c.instructions+=3;goto B440c4d;
case 0x440c50:c.instructions+=2;goto B440c50;
case 0x440c55:c.instructions+=1;goto B440c55;
case 0x440c57:goto L440c57;
case 0x440c59:goto L440c59;
case 0x440c5b:c.instructions+=1;goto B440c5b;
case 0x440c5e:goto L440c5e;
case 0x440c60:goto L440c60;
case 0x440c63:c.instructions+=4;goto B440c63;
case 0x440c66:c.instructions+=3;goto B440c66;
case 0x440c68:c.instructions+=2;goto B440c68;
case 0x440c6c:c.instructions+=1;goto B440c6c;
case 0x440c6e:goto L440c6e;
case 0x440c70:goto L440c70;
case 0x440c73:c.instructions+=2;goto B440c73;
case 0x440c75:c.instructions+=1;goto B440c75;
case 0x440c77:goto L440c77;
case 0x440c79:c.instructions+=6;goto B440c79;
case 0x440c7b:c.instructions+=5;goto B440c7b;
case 0x440c7e:c.instructions+=4;goto B440c7e;
case 0x440c80:c.instructions+=3;goto B440c80;
case 0x440c82:c.instructions+=2;goto B440c82;
case 0x440c84:c.instructions+=1;goto B440c84;
case 0x440c86:goto L440c86;
case 0x440c89:c.instructions+=1;goto B440c89;
case 0x440c8b:goto L440c8b;
case 0x440c8e:c.instructions+=4;goto B440c8e;
case 0x440c91:c.instructions+=3;goto B440c91;
case 0x440c93:c.instructions+=2;goto B440c93;
case 0x440c95:c.instructions+=1;goto B440c95;
case 0x440c97:goto L440c97;
case 0x440c9a:goto L440c9a;
case 0x440c9e:c.instructions+=4;goto B440c9e;
case 0x440ca2:c.instructions+=3;goto B440ca2;
case 0x440ca4:c.instructions+=2;goto B440ca4;
case 0x440ca6:c.instructions+=1;goto B440ca6;
case 0x440ca8:goto L440ca8;
case 0x440caa:goto L440caa;
case 0x440cad:c.instructions+=4;goto B440cad;
case 0x440caf:c.instructions+=3;goto B440caf;
case 0x440cb1:c.instructions+=2;goto B440cb1;
case 0x440cb3:c.instructions+=1;goto B440cb3;
case 0x440cb5:goto L440cb5;
case 0x440cb9:c.instructions+=1;goto B440cb9;
case 0x440cc0:goto L440cc0;
case 0x440cc4:c.instructions+=1;goto B440cc4;
case 0x440cc6:goto L440cc6;
case 0x440cc8:c.instructions+=1;goto B440cc8;
case 0x440cca:goto L440cca;
case 0x440ccb:goto L440ccb;
case 0x440ccc:c.instructions+=2;goto B440ccc;
case 0x440cce:c.instructions+=1;goto B440cce;
case 0x440cd0:goto L440cd0;
case 0x440cd1:c.instructions+=1;goto B440cd1;
case 0x440cd6:goto L440cd6;
case 0x440cd9:c.instructions+=7;goto B440cd9;
case 0x440cda:c.instructions+=6;goto B440cda;
case 0x440cdc:c.instructions+=5;goto B440cdc;
case 0x440cdd:c.instructions+=4;goto B440cdd;
case 0x440cde:c.instructions+=3;goto B440cde;
case 0x440cdf:c.instructions+=2;goto B440cdf;
case 0x440ce0:c.instructions+=1;goto B440ce0;
case 0x440ce3:goto L440ce3;
case 0x440ce5:c.instructions+=1;goto B440ce5;
case 0x440ce7:goto L440ce7;
case 0x440ce9:c.instructions+=1;goto B440ce9;
case 0x440cf0:goto L440cf0;
case 0x440cf2:c.instructions+=1;goto B440cf2;
case 0x440cf4:goto L440cf4;
case 0x440cf7:c.instructions+=1;goto B440cf7;
case 0x440cf9:goto L440cf9;
case 0x440cfc:c.instructions+=4;goto B440cfc;
case 0x440cff:c.instructions+=3;goto B440cff;
case 0x440d01:c.instructions+=2;goto B440d01;
case 0x440d03:c.instructions+=1;goto B440d03;
case 0x440d05:goto L440d05;
case 0x440d07:goto L440d07;
case 0x440d08:c.instructions+=1;goto B440d08;
case 0x440d0d:goto L440d0d;
case 0x440d10:c.instructions+=7;goto B440d10;
case 0x440d11:c.instructions+=6;goto B440d11;
case 0x440d13:c.instructions+=5;goto B440d13;
case 0x440d14:c.instructions+=4;goto B440d14;
case 0x440d15:c.instructions+=3;goto B440d15;
case 0x440d16:c.instructions+=2;goto B440d16;
case 0x440d17:c.instructions+=1;goto B440d17;
case 0x440d1a:goto L440d1a;
case 0x440d1d:c.instructions+=4;goto B440d1d;
case 0x440d20:c.instructions+=3;goto B440d20;
case 0x440d21:c.instructions+=2;goto B440d21;
case 0x440d25:c.instructions+=1;goto B440d25;
case 0x440d2a:goto L440d2a;
case 0x440d2d:c.instructions+=7;goto B440d2d;
case 0x440d2e:c.instructions+=6;goto B440d2e;
case 0x440d30:c.instructions+=5;goto B440d30;
case 0x440d31:c.instructions+=4;goto B440d31;
case 0x440d32:c.instructions+=3;goto B440d32;
case 0x440d33:c.instructions+=2;goto B440d33;
case 0x440d34:c.instructions+=1;goto B440d34;
case 0x440d40:goto L440d40;
case 0x440d41:c.instructions+=4;goto B440d41;
case 0x440d43:c.instructions+=3;goto B440d43;
case 0x440d46:c.instructions+=2;goto B440d46;
case 0x440d48:c.instructions+=1;goto B440d48;
case 0x440d4a:goto L440d4a;
case 0x440d4e:c.instructions+=1;goto B440d4e;
case 0x440d50:goto L440d50;
case 0x440d53:c.instructions+=7;goto B440d53;
case 0x440d54:c.instructions+=6;goto B440d54;
case 0x440d57:c.instructions+=5;goto B440d57;
case 0x440d59:c.instructions+=4;goto B440d59;
case 0x440d5c:c.instructions+=3;goto B440d5c;
case 0x440d5d:c.instructions+=2;goto B440d5d;
case 0x440d5e:c.instructions+=1;goto B440d5e;
case 0x440d63:goto L440d63;
case 0x440d66:c.instructions+=4;goto B440d66;
case 0x440d69:c.instructions+=3;goto B440d69;
case 0x440d6a:c.instructions+=2;goto B440d6a;
case 0x440d6c:c.instructions+=1;goto B440d6c;
case 0x440d6e:goto L440d6e;
case 0x440d70:c.instructions+=3;goto B440d70;
case 0x440d71:c.instructions+=2;goto B440d71;
case 0x440d74:c.instructions+=1;goto B440d74;
case 0x440d76:goto L440d76;
case 0x440d79:goto L440d79;
case 0x440d7c:c.instructions+=3;goto B440d7c;
case 0x440d80:c.instructions+=2;goto B440d80;
case 0x440d83:c.instructions+=1;goto B440d83;
case 0x440d85:goto L440d85;
case 0x440d88:c.instructions+=3;goto B440d88;
case 0x440d8b:c.instructions+=2;goto B440d8b;
case 0x440d8d:c.instructions+=1;goto B440d8d;
case 0x440d8f:goto L440d8f;
case 0x440d91:c.instructions+=1;goto B440d91;
case 0x440d93:goto L440d93;
case 0x440d95:goto L440d95;
case 0x440d96:goto L440d96;
case 0x440d98:c.instructions+=2;goto B440d98;
case 0x440d99:c.instructions+=1;goto B440d99;
case 0x440da0:goto L440da0;
case 0x440da1:c.instructions+=3;goto B440da1;
case 0x440da5:c.instructions+=2;goto B440da5;
case 0x440da7:c.instructions+=1;goto B440da7;
case 0x440da9:goto L440da9;
case 0x440dac:c.instructions+=1;goto B440dac;
case 0x440dae:goto L440dae;
case 0x440db0:c.instructions+=3;goto B440db0;
case 0x440db3:c.instructions+=2;goto B440db3;
case 0x440db5:c.instructions+=1;goto B440db5;
case 0x440db8:goto L440db8;
case 0x440dbc:c.instructions+=1;goto B440dbc;
case 0x440dbe:goto L440dbe;
case 0x440dc1:c.instructions+=2;goto B440dc1;
case 0x440dc3:c.instructions+=1;goto B440dc3;
case 0x440dc5:goto L440dc5;
case 0x440dc7:c.instructions+=2;goto B440dc7;
case 0x440dc9:c.instructions+=1;goto B440dc9;
case 0x440dce:goto L440dce;
case 0x440dcf:c.instructions+=1;goto B440dcf;
case 0x440dd0:goto L440dd0;
case 0x440dd3:c.instructions+=2;goto B440dd3;
case 0x440dd4:c.instructions+=1;goto B440dd4;
case 0x440dd9:goto L440dd9;
case 0x440ddc:c.instructions+=3;goto B440ddc;
case 0x440dde:c.instructions+=2;goto B440dde;
case 0x440de0:c.instructions+=1;goto B440de0;
case 0x440de2:goto L440de2;
case 0x440de3:goto L440de3;
case 0x440de4:c.instructions+=1;goto B440de4;
case 0x440df0:goto L440df0;
case 0x440df4:c.instructions+=10;goto B440df4;
case 0x440df8:c.instructions+=9;goto B440df8;
case 0x440dfc:c.instructions+=8;goto B440dfc;
case 0x440dfd:c.instructions+=7;goto B440dfd;
case 0x440e01:c.instructions+=6;goto B440e01;
case 0x440e02:c.instructions+=5;goto B440e02;
case 0x440e05:c.instructions+=4;goto B440e05;
case 0x440e06:c.instructions+=3;goto B440e06;
case 0x440e09:c.instructions+=2;goto B440e09;
case 0x440e0a:c.instructions+=1;goto B440e0a;
case 0x440e0f:goto L440e0f;
case 0x440e12:c.instructions+=2;goto B440e12;
case 0x440e14:c.instructions+=1;goto B440e14;
case 0x440e16:goto L440e16;
case 0x440e17:goto L440e17;
case 0x440e1e:c.instructions+=1;goto B440e1e;
case 0x440e20:goto L440e20;
case 0x440e26:c.instructions+=4;goto B440e26;
case 0x440e28:c.instructions+=3;goto B440e28;
case 0x440e2d:c.instructions+=2;goto B440e2d;
case 0x440e30:c.instructions+=1;goto B440e30;
case 0x440e36:goto L440e36;
case 0x440e40:goto L440e40;
case 0x440e44:c.instructions+=3;goto B440e44;
case 0x440e45:c.instructions+=2;goto B440e45;
case 0x440e4a:c.instructions+=1;goto B440e4a;
case 0x440e4f:goto L440e4f;
case 0x440e50:goto L440e50;
case 0x440e54:c.instructions+=1;goto B440e54;
case 0x440e60:goto L440e60;
case 0x440e65:c.instructions+=2;goto B440e65;
case 0x440e67:c.instructions+=1;goto B440e67;
case 0x440e69:goto L440e69;
case 0x440e6d:c.instructions+=5;goto B440e6d;
case 0x440e6f:c.instructions+=4;goto B440e6f;
case 0x440e74:c.instructions+=3;goto B440e74;
case 0x440e75:c.instructions+=2;goto B440e75;
case 0x440e77:c.instructions+=1;goto B440e77;
case 0x440e7c:goto L440e7c;
case 0x440e7f:c.instructions+=2;goto B440e7f;
case 0x440e81:c.instructions+=1;goto B440e81;
case 0x440e83:goto L440e83;
case 0x440e88:c.instructions+=2;goto B440e88;
case 0x440e8d:c.instructions+=1;goto B440e8d;
case 0x440e8e:goto L440e8e;
case 0x440e95:c.instructions+=1;goto B440e95;
case 0x440e97:goto L440e97;
case 0x440e9d:c.instructions+=4;goto B440e9d;
case 0x440e9f:c.instructions+=3;goto B440e9f;
case 0x440ea4:c.instructions+=2;goto B440ea4;
case 0x440ea7:c.instructions+=1;goto B440ea7;
case 0x440ead:goto L440ead;
case 0x440eb2:c.instructions+=1;goto B440eb2;
case 0x440ebc:goto L440ebc;
case 0x440ec0:goto L440ec0;
case 0x440ec5:c.instructions+=2;goto B440ec5;
case 0x440ec7:c.instructions+=1;goto B440ec7;
case 0x440ec9:goto L440ec9;
case 0x440ece:c.instructions+=1;goto B440ece;
case 0x440ed3:goto L440ed3;
case 0x440ed6:goto L440ed6;
case 0x440edc:c.instructions+=1;goto B440edc;
case 0x440ef0:goto L440ef0;
case 0x440ef6:c.instructions+=16;goto B440ef6;
case 0x440ef9:c.instructions+=15;goto B440ef9;
case 0x440efa:c.instructions+=14;goto B440efa;
case 0x440efe:c.instructions+=13;goto B440efe;
case 0x440f01:c.instructions+=12;goto B440f01;
case 0x440f04:c.instructions+=11;goto B440f04;
case 0x440f05:c.instructions+=10;goto B440f05;
case 0x440f07:c.instructions+=9;goto B440f07;
case 0x440f09:c.instructions+=8;goto B440f09;
case 0x440f0a:c.instructions+=7;goto B440f0a;
case 0x440f0c:c.instructions+=6;goto B440f0c;
case 0x440f0e:c.instructions+=5;goto B440f0e;
case 0x440f13:c.instructions+=4;goto B440f13;
case 0x440f15:c.instructions+=3;goto B440f15;
case 0x440f16:c.instructions+=2;goto B440f16;
case 0x440f17:c.instructions+=1;goto B440f17;
case 0x440f19:goto L440f19;
case 0x440f1e:c.instructions+=2;goto B440f1e;
case 0x440f20:c.instructions+=1;goto B440f20;
case 0x440f22:goto L440f22;
case 0x440f25:c.instructions+=2;goto B440f25;
case 0x440f27:c.instructions+=1;goto B440f27;
case 0x440f29:goto L440f29;
case 0x440f2a:c.instructions+=2;goto B440f2a;
case 0x440f2f:c.instructions+=1;goto B440f2f;
case 0x440f34:goto L440f34;
case 0x440f3e:c.instructions+=1;goto B440f3e;
case 0x440f3f:goto L440f3f;
case 0x440f49:goto L440f49;
case 0x440f50:goto L440f50;
case 0x440f51:c.instructions+=4;goto B440f51;
case 0x440f52:c.instructions+=3;goto B440f52;
case 0x440f56:c.instructions+=2;goto B440f56;
case 0x440f57:c.instructions+=1;goto B440f57;
case 0x440f5c:goto L440f5c;
case 0x440f60:c.instructions+=2;goto B440f60;
case 0x440f61:c.instructions+=1;goto B440f61;
case 0x440f66:goto L440f66;
case 0x440f6a:c.instructions+=4;goto B440f6a;
case 0x440f6d:c.instructions+=3;goto B440f6d;
case 0x440f6e:c.instructions+=2;goto B440f6e;
case 0x440f6f:c.instructions+=1;goto B440f6f;
case 0x440f70:goto L440f70;
case 0x440f74:c.instructions+=16;goto B440f74;
case 0x440f77:c.instructions+=15;goto B440f77;
case 0x440f7a:c.instructions+=14;goto B440f7a;
case 0x440f7c:c.instructions+=13;goto B440f7c;
case 0x440f7e:c.instructions+=12;goto B440f7e;
case 0x440f80:c.instructions+=11;goto B440f80;
case 0x440f82:c.instructions+=10;goto B440f82;
case 0x440f84:c.instructions+=9;goto B440f84;
case 0x440f86:c.instructions+=8;goto B440f86;
case 0x440f88:c.instructions+=7;goto B440f88;
case 0x440f8a:c.instructions+=6;goto B440f8a;
case 0x440f8c:c.instructions+=5;goto B440f8c;
case 0x440f8e:c.instructions+=4;goto B440f8e;
case 0x440f90:c.instructions+=3;goto B440f90;
case 0x440f92:c.instructions+=2;goto B440f92;
case 0x440f94:c.instructions+=1;goto B440f94;
case 0x440fa0:goto L440fa0;
case 0x440fa1:c.instructions+=16;goto B440fa1;
case 0x440fa3:c.instructions+=15;goto B440fa3;
case 0x440fa6:c.instructions+=14;goto B440fa6;
case 0x440fa9:c.instructions+=13;goto B440fa9;
case 0x440fab:c.instructions+=12;goto B440fab;
case 0x440fae:c.instructions+=11;goto B440fae;
case 0x440fb1:c.instructions+=10;goto B440fb1;
case 0x440fb4:c.instructions+=9;goto B440fb4;
case 0x440fb7:c.instructions+=8;goto B440fb7;
case 0x440fba:c.instructions+=7;goto B440fba;
case 0x440fbc:c.instructions+=6;goto B440fbc;
case 0x440fbe:c.instructions+=5;goto B440fbe;
case 0x440fc1:c.instructions+=4;goto B440fc1;
case 0x440fc4:c.instructions+=3;goto B440fc4;
case 0x440fc6:c.instructions+=2;goto B440fc6;
case 0x440fc7:c.instructions+=1;goto B440fc7;
case 0x440fd0:goto L440fd0;
case 0x440fd2:c.instructions+=12;goto B440fd2;
case 0x440fd6:c.instructions+=11;goto B440fd6;
case 0x440fd9:c.instructions+=10;goto B440fd9;
case 0x440fdc:c.instructions+=9;goto B440fdc;
case 0x440fdf:c.instructions+=8;goto B440fdf;
case 0x440fe1:c.instructions+=7;goto B440fe1;
case 0x440fe3:c.instructions+=6;goto B440fe3;
case 0x440fe7:c.instructions+=5;goto B440fe7;
case 0x440fea:c.instructions+=4;goto B440fea;
case 0x440fec:c.instructions+=3;goto B440fec;
case 0x440fef:c.instructions+=2;goto B440fef;
case 0x440ff2:c.instructions+=1;goto B440ff2;
default:missing_instruction(c.pc);}
B440000:L440000:{c.instructions+=1;NFSU2_TR(0x440000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440002ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B440002:L440002:{c.instructions+=2;NFSU2_TR(0x440002);
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
B440004:{NFSU2_TR(0x440004);
if(r1(R+518)){{goto L44000f;}}
}
B440006:L440006:{c.instructions+=3;NFSU2_TR(0x440006);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440008:{NFSU2_TR(0x440008);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440009:{NFSU2_TR(0x440009);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44000bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B44000b:L44000b:{c.instructions+=2;NFSU2_TR(0x44000b);
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
B44000d:{NFSU2_TR(0x44000d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440076;}}
}
B44000f:L44000f:{c.instructions+=2;NFSU2_TR(0x44000f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x22ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x22ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x22ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B440013:{NFSU2_TR(0x440013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440076;}}
}
B440015:L440015:{c.instructions+=5;NFSU2_TR(0x440015);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440019:{NFSU2_TR(0x440019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B44001b:{NFSU2_TR(0x44001b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B44001e:{NFSU2_TR(0x44001e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B440020:{NFSU2_TR(0x440020);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43ffd0u,43f);}
}
B440022:L440022:{c.instructions+=2;NFSU2_TR(0x440022);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B440025:{NFSU2_TR(0x440025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44002aull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B44002a:L44002a:{c.instructions+=6;NFSU2_TR(0x44002a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44002b:{NFSU2_TR(0x44002b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44002c:{NFSU2_TR(0x44002c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44002d:{NFSU2_TR(0x44002d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44002e:{NFSU2_TR(0x44002e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44002f:{NFSU2_TR(0x44002f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440032:L440032:{c.instructions+=2;NFSU2_TR(0x440032);
s1(0x82853c,u8(0x1ull));
}
B440039:{NFSU2_TR(0x440039);
u8 U[4];
{SPILL();c.pc=0x440039u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B44003c:L44003c:{c.instructions+=4;NFSU2_TR(0x44003c);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
}
B44003e:{NFSU2_TR(0x44003e);
u8 U[4];
w4(U+0,u32(0x43cae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440043:{NFSU2_TR(0x440043);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B440046:{NFSU2_TR(0x440046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44004bull));
TAIL_STATIC(0x43e650u,43e);
}
B44004b:L44004b:{c.instructions+=5;NFSU2_TR(0x44004b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44004f:{NFSU2_TR(0x44004f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440052:{NFSU2_TR(0x440052);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B440055:{NFSU2_TR(0x440055);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B440057:{NFSU2_TR(0x440057);
if(r1(R+518)){{goto L44007b;}}
}
B440059:L440059:{c.instructions+=1;NFSU2_TR(0x440059);
__builtin_memmove((R+16),(R+16),4);
}
B440060:L440060:{c.instructions+=3;NFSU2_TR(0x440060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B440062:{NFSU2_TR(0x440062);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B440064:{NFSU2_TR(0x440064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440060u);}goto L440060;}}
}
B440066:L440066:{c.instructions+=2;NFSU2_TR(0x440066);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B440069:{NFSU2_TR(0x440069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44006eull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B44006e:L44006e:{c.instructions+=6;NFSU2_TR(0x44006e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44006f:{NFSU2_TR(0x44006f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440070:{NFSU2_TR(0x440070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440071:{NFSU2_TR(0x440071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440072:{NFSU2_TR(0x440072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440073:{NFSU2_TR(0x440073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440076:L440076:{c.instructions+=1;NFSU2_TR(0x440076);
u8 U[4];
{SPILL();c.pc=0x440076u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B44007b:L44007b:{c.instructions+=2;NFSU2_TR(0x44007b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B44007e:{NFSU2_TR(0x44007e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440083ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B440083:L440083:{c.instructions+=6;NFSU2_TR(0x440083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440084:{NFSU2_TR(0x440084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440085:{NFSU2_TR(0x440085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440086:{NFSU2_TR(0x440086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440087:{NFSU2_TR(0x440087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440088:{NFSU2_TR(0x440088);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440090:L440090:{c.instructions+=8;NFSU2_TR(0x440090);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440094:{NFSU2_TR(0x440094);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B44009b:{NFSU2_TR(0x44009b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44009f:{NFSU2_TR(0x44009f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B4400a2:{NFSU2_TR(0x4400a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4400a6:{NFSU2_TR(0x4400a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4400a7:{NFSU2_TR(0x4400a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4400a8:{NFSU2_TR(0x4400a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4400adull));
TAIL_STATIC(0x43fa50u,43f);
}
B4400ad:L4400ad:{c.instructions+=1;NFSU2_TR(0x4400ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4400b0:L4400b0:{c.instructions+=4;NFSU2_TR(0x4400b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4400b4:{NFSU2_TR(0x4400b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4400bb:{NFSU2_TR(0x4400bb);
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
B4400bd:{NFSU2_TR(0x4400bd);
if(r1(R+518)){{goto L4400c6;}}
}
B4400bf:L4400bf:{c.instructions+=2;NFSU2_TR(0x4400bf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4400c1:{NFSU2_TR(0x4400c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4400c6ull));
TAIL_STATIC(0x43fef0u,43f);
}
B4400c6:L4400c6:{c.instructions+=1;NFSU2_TR(0x4400c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4400d0:L4400d0:{c.instructions+=7;NFSU2_TR(0x4400d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4400d4:{NFSU2_TR(0x4400d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4400d8:{NFSU2_TR(0x4400d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4400dc:{NFSU2_TR(0x4400dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4400dd:{NFSU2_TR(0x4400dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4400de:{NFSU2_TR(0x4400de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4400df:{NFSU2_TR(0x4400df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4400e4ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B4400e4:L4400e4:{c.instructions+=2;NFSU2_TR(0x4400e4);
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
B4400e7:{NFSU2_TR(0x4400e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4400f0:L4400f0:{c.instructions+=3;NFSU2_TR(0x4400f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4400f6:{NFSU2_TR(0x4400f6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4400f8:{NFSU2_TR(0x4400f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44013b;}}
}
B4400fa:L4400fa:{c.instructions+=2;NFSU2_TR(0x4400fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B440100:{NFSU2_TR(0x440100);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L44013b;}}
}
B440102:L440102:{c.instructions+=5;NFSU2_TR(0x440102);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440108:{NFSU2_TR(0x440108);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44010b:{NFSU2_TR(0x44010b);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B44010f:{NFSU2_TR(0x44010f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440111:{NFSU2_TR(0x440111);
if(r1(R+518)){{goto L44013b;}}
}
B440113:L440113:{c.instructions+=9;NFSU2_TR(0x440113);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B440116:{NFSU2_TR(0x440116);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B440119:{NFSU2_TR(0x440119);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B44011d:{NFSU2_TR(0x44011d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B440121:{NFSU2_TR(0x440121);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440122:{NFSU2_TR(0x440122);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440123:{NFSU2_TR(0x440123);
u8 U[4];
w4(U+0,u32(0x786e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440128:{NFSU2_TR(0x440128);
u8 U[4];
w4(U+0,u32(0x828540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44012d:{NFSU2_TR(0x44012d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440132ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4400d0u);}goto L4400d0;}
}
B440132:L440132:{c.instructions+=3;NFSU2_TR(0x440132);
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
B440135:{NFSU2_TR(0x440135);
w4(R+0,u32(0x828540ull));
}
B44013a:{NFSU2_TR(0x44013a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44013b:L44013b:{c.instructions+=5;NFSU2_TR(0x44013b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B44013e:{NFSU2_TR(0x44013e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44013f:{NFSU2_TR(0x44013f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440144:{NFSU2_TR(0x440144);
u8 U[4];
w4(U+0,u32(0x828540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440149:{NFSU2_TR(0x440149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44014eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4400d0u);}goto L4400d0;}
}
B44014e:L44014e:{c.instructions+=3;NFSU2_TR(0x44014e);
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
B440151:{NFSU2_TR(0x440151);
w4(R+0,u32(0x828540ull));
}
B440156:{NFSU2_TR(0x440156);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440160:L440160:{c.instructions+=6;NFSU2_TR(0x440160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440161:{NFSU2_TR(0x440161);
__builtin_memmove((R+24),(R+4),4);
}
B440163:{NFSU2_TR(0x440163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440169:{NFSU2_TR(0x440169);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B44016f:{NFSU2_TR(0x44016f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440170:{NFSU2_TR(0x440170);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4401bc;}}
}
B440172:L440172:{c.instructions+=5;NFSU2_TR(0x440172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440178:{NFSU2_TR(0x440178);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44017b:{NFSU2_TR(0x44017b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44017e:{NFSU2_TR(0x44017e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440180:{NFSU2_TR(0x440180);
if(r1(R+518)){{goto L4401bc;}}
}
B440182:L440182:{c.instructions+=3;NFSU2_TR(0x440182);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B440185:{NFSU2_TR(0x440185);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B440187:{NFSU2_TR(0x440187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4401bc;}}
}
B440189:L440189:{c.instructions+=9;NFSU2_TR(0x440189);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B44018a:{NFSU2_TR(0x44018a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440190:{NFSU2_TR(0x440190);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B440193:{NFSU2_TR(0x440193);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B440194:{NFSU2_TR(0x440194);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B440197:{NFSU2_TR(0x440197);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B44019a:{NFSU2_TR(0x44019a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B44019d:{NFSU2_TR(0x44019d);
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
B44019f:{NFSU2_TR(0x44019f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4401b7;}}
}
B4401a1:L4401a1:{c.instructions+=2;NFSU2_TR(0x4401a1);
__builtin_memmove((R+4),(R+24),4);
}
B4401a3:{NFSU2_TR(0x4401a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4401a8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4400f0u);}goto L4400f0;}
}
B4401a8:L4401a8:{c.instructions+=4;NFSU2_TR(0x4401a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401a9:{NFSU2_TR(0x4401a9);
u8 U[4];
w4(U+0,u32(0x786e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401ae:{NFSU2_TR(0x4401ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401af:{NFSU2_TR(0x4401af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4401b4ull));
TAIL_STATIC(0x43fc40u,43f);
}
B4401b4:L4401b4:{c.instructions+=1;NFSU2_TR(0x4401b4);
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
B4401b7:L4401b7:{c.instructions+=4;NFSU2_TR(0x4401b7);
__builtin_memmove((R+0),(R+28),4);
}
B4401b9:{NFSU2_TR(0x4401b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4401ba:{NFSU2_TR(0x4401ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4401bb:{NFSU2_TR(0x4401bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4401bc:L4401bc:{c.instructions+=2;NFSU2_TR(0x4401bc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4401be:{NFSU2_TR(0x4401be);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4401a1u);}goto L4401a1;}
}
B4401c0:L4401c0:{c.instructions+=4;NFSU2_TR(0x4401c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401c1:{NFSU2_TR(0x4401c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401c2:{NFSU2_TR(0x4401c2);
__builtin_memmove((R+28),(R+4),4);
}
B4401c4:{NFSU2_TR(0x4401c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4401c9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440160u);}goto L440160;}
}
B4401c9:L4401c9:{c.instructions+=3;NFSU2_TR(0x4401c9);
__builtin_memmove((R+24),(R+0),4);
}
B4401cb:{NFSU2_TR(0x4401cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4401cd:{NFSU2_TR(0x4401cd);
if(r1(R+518)){{goto L4401fe;}}
}
B4401cf:L4401cf:{c.instructions+=3;NFSU2_TR(0x4401cf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4401d1:{NFSU2_TR(0x4401d1);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4401d3:{NFSU2_TR(0x4401d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4401dd;}}
}
B4401d5:L4401d5:{c.instructions+=2;NFSU2_TR(0x4401d5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4401d9:{NFSU2_TR(0x4401d9);
if(r1(R+518)){{goto L440203;}}
}
B4401db:L4401db:{c.instructions+=1;NFSU2_TR(0x4401db);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B4401dd:L4401dd:{c.instructions+=1;NFSU2_TR(0x4401dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4401e3;}}
}
B4401df:L4401df:{c.instructions+=2;NFSU2_TR(0x4401df);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4401e1:{NFSU2_TR(0x4401e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440203;}}
}
B4401e3:L4401e3:{c.instructions+=2;NFSU2_TR(0x4401e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4401e5:{NFSU2_TR(0x4401e5);
if(r1(R+518)){{goto L440203;}}
}
B4401e7:L4401e7:{c.instructions+=2;NFSU2_TR(0x4401e7);
__builtin_memmove((R+4),(R+28),4);
}
B4401e9:{NFSU2_TR(0x4401e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4401eeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4400f0u);}goto L4400f0;}
}
B4401ee:L4401ee:{c.instructions+=5;NFSU2_TR(0x4401ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401ef:{NFSU2_TR(0x4401ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401f0:{NFSU2_TR(0x4401f0);
u8 U[4];
w4(U+0,u32(0x786ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401f5:{NFSU2_TR(0x4401f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4401f6:{NFSU2_TR(0x4401f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4401fbull));
TAIL_STATIC(0x43fc40u,43f);
}
B4401fb:L4401fb:{c.instructions+=1;NFSU2_TR(0x4401fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4401fe:L4401fe:{c.instructions+=4;NFSU2_TR(0x4401fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4401ff:{NFSU2_TR(0x4401ff);
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
B440201:{NFSU2_TR(0x440201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440202:{NFSU2_TR(0x440202);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440203:L440203:{c.instructions+=2;NFSU2_TR(0x440203);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440204:{NFSU2_TR(0x440204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440209ull));
TAIL_STATIC(0x43de50u,43d);
}
B440209:L440209:{c.instructions+=4;NFSU2_TR(0x440209);
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
B44020c:{NFSU2_TR(0x44020c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44020d:{NFSU2_TR(0x44020d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44020e:{NFSU2_TR(0x44020e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440210:L440210:{c.instructions+=4;NFSU2_TR(0x440210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440211:{NFSU2_TR(0x440211);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440212:{NFSU2_TR(0x440212);
__builtin_memmove((R+28),(R+4),4);
}
B440214:{NFSU2_TR(0x440214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440219ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4401c0u);}goto L4401c0;}
}
B440219:L440219:{c.instructions+=3;NFSU2_TR(0x440219);
__builtin_memmove((R+24),(R+0),4);
}
B44021b:{NFSU2_TR(0x44021b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffff8000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffff8000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B440221:{NFSU2_TR(0x440221);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L44022b;}}
}
B440223:L440223:{c.instructions+=2;NFSU2_TR(0x440223);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B440229:{NFSU2_TR(0x440229);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440242;}}
}
B44022b:L44022b:{c.instructions+=2;NFSU2_TR(0x44022b);
__builtin_memmove((R+4),(R+28),4);
}
B44022d:{NFSU2_TR(0x44022d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440232ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4400f0u);}goto L4400f0;}
}
B440232:L440232:{c.instructions+=5;NFSU2_TR(0x440232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440233:{NFSU2_TR(0x440233);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440234:{NFSU2_TR(0x440234);
u8 U[4];
w4(U+0,u32(0x786ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440239:{NFSU2_TR(0x440239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44023a:{NFSU2_TR(0x44023a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44023full));
TAIL_STATIC(0x43fc40u,43f);
}
B44023f:L44023f:{c.instructions+=1;NFSU2_TR(0x44023f);
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
B440242:L440242:{c.instructions+=4;NFSU2_TR(0x440242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440243:{NFSU2_TR(0x440243);
__builtin_memmove((R+0),(R+24),2);
}
B440246:{NFSU2_TR(0x440246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440247:{NFSU2_TR(0x440247);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440250:L440250:{c.instructions+=1;NFSU2_TR(0x440250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440255ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440160u);}goto L440160;}
}
B440255:L440255:{c.instructions+=2;NFSU2_TR(0x440255);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440256:{NFSU2_TR(0x440256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44025bull));
TAIL_STATIC(0x43def0u,43d);
}
B44025b:L44025b:{c.instructions+=2;NFSU2_TR(0x44025b);
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
B44025e:{NFSU2_TR(0x44025e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440260:L440260:{c.instructions+=4;NFSU2_TR(0x440260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B440263:{NFSU2_TR(0x440263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440264:{NFSU2_TR(0x440264);
__builtin_memmove((R+24),(R+4),4);
}
B440266:{NFSU2_TR(0x440266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44026bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440160u);}goto L440160;}
}
B44026b:L44026b:{c.instructions+=2;NFSU2_TR(0x44026b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44026c:{NFSU2_TR(0x44026c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440271ull));
TAIL_STATIC(0x43def0u,43d);
}
B440271:L440271:{c.instructions+=4;NFSU2_TR(0x440271);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440275:{NFSU2_TR(0x440275);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440278:{NFSU2_TR(0x440278);
__builtin_memmove((R+4),(R+24),4);
}
B44027a:{NFSU2_TR(0x44027a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44027full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440160u);}goto L440160;}
}
B44027f:L44027f:{c.instructions+=2;NFSU2_TR(0x44027f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440280:{NFSU2_TR(0x440280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440285ull));
TAIL_STATIC(0x43def0u,43d);
}
B440285:L440285:{c.instructions+=4;NFSU2_TR(0x440285);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440289:{NFSU2_TR(0x440289);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44028c:{NFSU2_TR(0x44028c);
__builtin_memmove((R+4),(R+24),4);
}
B44028e:{NFSU2_TR(0x44028e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440293ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440160u);}goto L440160;}
}
B440293:L440293:{c.instructions+=2;NFSU2_TR(0x440293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440294:{NFSU2_TR(0x440294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440299ull));
TAIL_STATIC(0x43def0u,43d);
}
B440299:L440299:{c.instructions+=10;NFSU2_TR(0x440299);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44029d:{NFSU2_TR(0x44029d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4402a1:{NFSU2_TR(0x4402a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4402a5:{NFSU2_TR(0x4402a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4402a7:{NFSU2_TR(0x4402a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4402aa:{NFSU2_TR(0x4402aa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4402ad:{NFSU2_TR(0x4402ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402b0:{NFSU2_TR(0x4402b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4402b1:{NFSU2_TR(0x4402b1);
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
B4402b4:{NFSU2_TR(0x4402b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4402c0:L4402c0:{c.instructions+=21;NFSU2_TR(0x4402c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4402c1:{NFSU2_TR(0x4402c1);
__builtin_memmove((R+24),(R+4),4);
}
B4402c3:{NFSU2_TR(0x4402c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4402c6:{NFSU2_TR(0x4402c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4402c8:{NFSU2_TR(0x4402c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402cb:{NFSU2_TR(0x4402cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4402ce:{NFSU2_TR(0x4402ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4402d0:{NFSU2_TR(0x4402d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402d3:{NFSU2_TR(0x4402d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4402d6:{NFSU2_TR(0x4402d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4402d8:{NFSU2_TR(0x4402d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402db:{NFSU2_TR(0x4402db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4402dd:{NFSU2_TR(0x4402dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4402e0:{NFSU2_TR(0x4402e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402e3:{NFSU2_TR(0x4402e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402e6:{NFSU2_TR(0x4402e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402e9:{NFSU2_TR(0x4402e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402ec:{NFSU2_TR(0x4402ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402ef:{NFSU2_TR(0x4402ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402f2:{NFSU2_TR(0x4402f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4402f5:{NFSU2_TR(0x4402f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4402faull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B4402fa:L4402fa:{c.instructions+=14;NFSU2_TR(0x4402fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4402fd:{NFSU2_TR(0x4402fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440301:{NFSU2_TR(0x440301);
w1(R+0,u8(0x1ull));
}
B440303:{NFSU2_TR(0x440303);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B440306:{NFSU2_TR(0x440306);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x39ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B440309:{NFSU2_TR(0x440309);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44030d:{NFSU2_TR(0x44030d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B44030f:{NFSU2_TR(0x44030f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440313:{NFSU2_TR(0x440313);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440314:{NFSU2_TR(0x440314);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B440316:{NFSU2_TR(0x440316);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440317:{NFSU2_TR(0x440317);
__builtin_memmove((R+4),(R+24),4);
}
B440319:{NFSU2_TR(0x440319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44031c:{NFSU2_TR(0x44031c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440321ull));
TAIL_STATIC(0x43fa50u,43f);
}
B440321:L440321:{c.instructions+=2;NFSU2_TR(0x440321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440322:{NFSU2_TR(0x440322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440330:L440330:{c.instructions+=12;NFSU2_TR(0x440330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440334:{NFSU2_TR(0x440334);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440338:{NFSU2_TR(0x440338);
__builtin_memmove((R+4),(R+0),4);
}
B44033a:{NFSU2_TR(0x44033a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x58ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44033d:{NFSU2_TR(0x44033d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x828218ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440343:{NFSU2_TR(0x440343);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440344:{NFSU2_TR(0x440344);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440348:{NFSU2_TR(0x440348);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B44034f:{NFSU2_TR(0x44034f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440353:{NFSU2_TR(0x440353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440354:{NFSU2_TR(0x440354);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440355:{NFSU2_TR(0x440355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44035aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4402c0u);}goto L4402c0;}
}
B44035a:L44035a:{c.instructions+=1;NFSU2_TR(0x44035a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440360:L440360:{c.instructions+=3;NFSU2_TR(0x440360);
__builtin_memmove((R+0),gp(0x828510),4);
}
B440365:{NFSU2_TR(0x440365);
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
B440367:{NFSU2_TR(0x440367);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44038c;}}
}
B440369:L440369:{c.instructions+=6;NFSU2_TR(0x440369);
u8 U[4];
w4(U+0,u32(0x786ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44036e:{NFSU2_TR(0x44036e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440370:{NFSU2_TR(0x440370);
w4(R+4,u32(0x828218ull));
}
B440375:{NFSU2_TR(0x440375);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440377:{NFSU2_TR(0x440377);
__builtin_memmove(gp(0x828154),(R+4),4);
}
B44037d:{NFSU2_TR(0x44037d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440382ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4402c0u);}goto L4402c0;}
}
B440382:L440382:{c.instructions+=1;NFSU2_TR(0x440382);
s4(0x828510,u32(0x1ull));
}
B44038c:L44038c:{c.instructions+=1;NFSU2_TR(0x44038c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440390:L440390:{c.instructions+=7;NFSU2_TR(0x440390);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440391:{NFSU2_TR(0x440391);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440392:{NFSU2_TR(0x440392);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440393:{NFSU2_TR(0x440393);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440394:{NFSU2_TR(0x440394);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440398:{NFSU2_TR(0x440398);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44039a:{NFSU2_TR(0x44039a);
if(r1(R+518)){{goto L4403b4;}}
}
B44039c:L44039c:{c.instructions+=3;NFSU2_TR(0x44039c);
u8 U[4];
w4(U+0,u32(0x786f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403a1:{NFSU2_TR(0x4403a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403a2:{NFSU2_TR(0x4403a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4403a7ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4403a7:L4403a7:{c.instructions+=3;NFSU2_TR(0x4403a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4403aa:{NFSU2_TR(0x4403aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4403ac:{NFSU2_TR(0x4403ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4403b4;}}
}
B4403ae:L4403ae:{c.instructions+=3;NFSU2_TR(0x4403ae);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4403b0:{NFSU2_TR(0x4403b0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4403b2:{NFSU2_TR(0x4403b2);
{goto L4403b8;}
}
B4403b4:L4403b4:{c.instructions+=1;NFSU2_TR(0x4403b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4403b8:L4403b8:{c.instructions+=6;NFSU2_TR(0x4403b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4403bc:{NFSU2_TR(0x4403bc);
__builtin_memmove((R+20),(R+12),4);
}
B4403be:{NFSU2_TR(0x4403be);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x7ull))));
}
B4403c1:{NFSU2_TR(0x4403c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82802cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4403c8:{NFSU2_TR(0x4403c8);
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
B4403ca:{NFSU2_TR(0x4403ca);
if(r1(R+518)){{goto L4403e2;}}
}
B4403cc:L4403cc:{c.instructions+=8;NFSU2_TR(0x4403cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4403ce:{NFSU2_TR(0x4403ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403cf:{NFSU2_TR(0x4403cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403d0:{NFSU2_TR(0x4403d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4403d4:{NFSU2_TR(0x4403d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403d5:{NFSU2_TR(0x4403d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403d6:{NFSU2_TR(0x4403d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403d7:{NFSU2_TR(0x4403d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4403daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4403da:L4403da:{c.instructions+=6;NFSU2_TR(0x4403da);
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
B4403dd:{NFSU2_TR(0x4403dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4403de:{NFSU2_TR(0x4403de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4403df:{NFSU2_TR(0x4403df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4403e0:{NFSU2_TR(0x4403e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4403e1:{NFSU2_TR(0x4403e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4403e2:L4403e2:{c.instructions+=5;NFSU2_TR(0x4403e2);
__builtin_memmove((R+0),gp(0x828510),4);
}
B4403e7:{NFSU2_TR(0x4403e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4403e9:{NFSU2_TR(0x4403e9);
__builtin_memmove(gp(0x828508),(R+28),4);
}
B4403ef:{NFSU2_TR(0x4403ef);
__builtin_memmove(gp(0x82850c),(R+4),4);
}
B4403f5:{NFSU2_TR(0x4403f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44041a;}}
}
B4403f7:L4403f7:{c.instructions+=6;NFSU2_TR(0x4403f7);
u8 U[4];
w4(U+0,u32(0x786ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403fc:{NFSU2_TR(0x4403fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4403fe:{NFSU2_TR(0x4403fe);
w4(R+4,u32(0x828218ull));
}
B440403:{NFSU2_TR(0x440403);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440405:{NFSU2_TR(0x440405);
__builtin_memmove(gp(0x828154),(R+4),4);
}
B44040b:{NFSU2_TR(0x44040b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440410ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4402c0u);}goto L4402c0;}
}
B440410:L440410:{c.instructions+=1;NFSU2_TR(0x440410);
s4(0x828510,u32(0x1ull));
}
B44041a:L44041a:{c.instructions+=3;NFSU2_TR(0x44041a);
__builtin_memmove((R+4),gp(0x8284fc),4);
}
B440420:{NFSU2_TR(0x440420);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440422:{NFSU2_TR(0x440422);
if(r1(R+518)){{goto L440442;}}
}
B440424:L440424:{c.instructions+=5;NFSU2_TR(0x440424);
__builtin_memmove((R+0),gp(0x828504),4);
}
B440429:{NFSU2_TR(0x440429);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B44042a:{NFSU2_TR(0x44042a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x44042a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x44042a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B44042c:{NFSU2_TR(0x44042c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44042e:{NFSU2_TR(0x44042e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440442;}}
}
B440430:L440430:{c.instructions+=3;NFSU2_TR(0x440430);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B440437:{NFSU2_TR(0x440437);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440439:{NFSU2_TR(0x440439);
if(r1(R+518)){{goto L440442;}}
}
B44043b:L44043b:{c.instructions+=2;NFSU2_TR(0x44043b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44043d:{NFSU2_TR(0x44043d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440442ull));
TAIL_STATIC(0x43fef0u,43f);
}
B440442:L440442:{c.instructions+=5;NFSU2_TR(0x440442);
__builtin_memmove((R+4),(R+12),4);
}
B440444:{NFSU2_TR(0x440444);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B440447:{NFSU2_TR(0x440447);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ffcull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B44044d:{NFSU2_TR(0x44044d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440451:{NFSU2_TR(0x440451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44045f;}}
}
B440453:L440453:{c.instructions+=2;NFSU2_TR(0x440453);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44045b:{NFSU2_TR(0x44045b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44045f:L44045f:{c.instructions+=7;NFSU2_TR(0x44045f);
__builtin_memmove((R+0),(R+12),4);
}
B440461:{NFSU2_TR(0x440461);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B440464:{NFSU2_TR(0x440464);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440465:{NFSU2_TR(0x440465);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ffcull))));
}
B44046a:{NFSU2_TR(0x44046a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44046c:{NFSU2_TR(0x44046c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44046e:{NFSU2_TR(0x44046e);
if(r1(R+518)){{goto L44047e;}}
}
B440470:L440470:{c.instructions+=2;NFSU2_TR(0x440470);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B440473:{NFSU2_TR(0x440473);
if(r1(R+518)){{goto L44047e;}}
}
B440475:L440475:{c.instructions+=4;NFSU2_TR(0x440475);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B440479:{NFSU2_TR(0x440479);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B44047a:{NFSU2_TR(0x44047a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44047c:{NFSU2_TR(0x44047c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440475u);}goto L440475;}}
}
B44047e:L44047e:{c.instructions+=20;NFSU2_TR(0x44047e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B440485:{NFSU2_TR(0x440485);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B440489:{NFSU2_TR(0x440489);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44048a:{NFSU2_TR(0x44048a);
__builtin_memmove((R+8),(R+12),4);
}
B44048c:{NFSU2_TR(0x44048c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x10ull))));
}
B44048f:{NFSU2_TR(0x44048f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440490:{NFSU2_TR(0x440490);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xaull))));
}
B440493:{NFSU2_TR(0x440493);
__builtin_memmove((R+28),(R+12),4);
}
B440495:{NFSU2_TR(0x440495);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B440498:{NFSU2_TR(0x440498);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B44049c:{NFSU2_TR(0x44049c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x8ull))));
}
B44049f:{NFSU2_TR(0x44049f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4404a0:{NFSU2_TR(0x4404a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4404a1:{NFSU2_TR(0x4404a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4404a5:{NFSU2_TR(0x4404a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4404a9:{NFSU2_TR(0x4404a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4404aa:{NFSU2_TR(0x4404aa);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4404ae:{NFSU2_TR(0x4404ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4404af:{NFSU2_TR(0x4404af);
__builtin_memmove((R+4),(R+20),4);
}
B4404b1:{NFSU2_TR(0x4404b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4404b6ull));
TAIL_STATIC(0x43fc80u,43f);
}
B4404b6:L4404b6:{c.instructions+=3;NFSU2_TR(0x4404b6);
__builtin_memmove((R+4),(R+0),4);
}
B4404b8:{NFSU2_TR(0x4404b8);
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
B4404ba:{NFSU2_TR(0x4404ba);
if(r1(R+518)){{goto L44052e;}}
}
B4404bc:L4404bc:{c.instructions+=3;NFSU2_TR(0x4404bc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4404be:{NFSU2_TR(0x4404be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4404c0:{NFSU2_TR(0x4404c0);
if(r1(R+518)){{goto L4404d8;}}
}
B4404c2:L4404c2:{c.instructions+=9;NFSU2_TR(0x4404c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4404c6:{NFSU2_TR(0x4404c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4404ca:{NFSU2_TR(0x4404ca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4404cc:{NFSU2_TR(0x4404cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4404cf:{NFSU2_TR(0x4404cf);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B4404d1:{NFSU2_TR(0x4404d1);
__builtin_memmove((R+0),(R+28),4);
}
B4404d3:{NFSU2_TR(0x4404d3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4404d5:{NFSU2_TR(0x4404d5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4404d6:{NFSU2_TR(0x4404d6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4404d6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4404d6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4404d8:L4404d8:{c.instructions+=19;NFSU2_TR(0x4404d8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B4404da:{NFSU2_TR(0x4404da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4404dd:{NFSU2_TR(0x4404dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4404e0:{NFSU2_TR(0x4404e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4404e2:{NFSU2_TR(0x4404e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4404e5:{NFSU2_TR(0x4404e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4404e8:{NFSU2_TR(0x4404e8);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x7ull))));
}
B4404eb:{NFSU2_TR(0x4404eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4404ef:{NFSU2_TR(0x4404ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4404f3:{NFSU2_TR(0x4404f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4404f6:{NFSU2_TR(0x4404f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4404f8:{NFSU2_TR(0x4404f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4404fb:{NFSU2_TR(0x4404fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
w1(U+4,u8(0x22ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4404ff:{NFSU2_TR(0x4404ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440503:{NFSU2_TR(0x440503);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440506:{NFSU2_TR(0x440506);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440509:{NFSU2_TR(0x440509);
__builtin_memmove((R+4),gp(0x828504),4);
}
B44050f:{NFSU2_TR(0x44050f);
u8 U[14];
__builtin_memmove((U+6),gp(0x7eb3d4),4);
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
B440515:{NFSU2_TR(0x440515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440518;}}
}
B440517:L440517:{c.instructions+=1;NFSU2_TR(0x440517);
u8 U[4];
{SPILL();c.pc=0x440517u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B440518:L440518:{c.instructions+=10;NFSU2_TR(0x440518);
__builtin_memmove((R+4),gp(0x828504),4);
}
B44051e:{NFSU2_TR(0x44051e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44051f:{NFSU2_TR(0x44051f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440520:{NFSU2_TR(0x440520);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B440521:{NFSU2_TR(0x440521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440522:{NFSU2_TR(0x440522);
__builtin_memmove(gp(0x828504),(R+4),4);
}
B440528:{NFSU2_TR(0x440528);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44052b:{NFSU2_TR(0x44052b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44052c:{NFSU2_TR(0x44052c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44052d:{NFSU2_TR(0x44052d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44052e:L44052e:{c.instructions+=1;NFSU2_TR(0x44052e);
u8 U[4];
{SPILL();c.pc=0x44052eu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B440540:L440540:{c.instructions+=4;NFSU2_TR(0x440540);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440541:{NFSU2_TR(0x440541);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440545:{NFSU2_TR(0x440545);
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
B440547:{NFSU2_TR(0x440547);
if(r1(R+518)){{goto L440635;}}
}
B44054d:L44054d:{c.instructions+=2;NFSU2_TR(0x44054d);
w4(R+8,u32(0x82802cull));
}
B440552:{NFSU2_TR(0x440552);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440553:L440553:{c.instructions+=3;NFSU2_TR(0x440553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B440555:{NFSU2_TR(0x440555);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440557:{NFSU2_TR(0x440557);
if(r1(R+518)){{goto L440569;}}
}
B440559:L440559:{c.instructions+=3;NFSU2_TR(0x440559);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44055c:{NFSU2_TR(0x44055c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44055e:{NFSU2_TR(0x44055e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440569;}}
}
B440560:L440560:{c.instructions+=4;NFSU2_TR(0x440560);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440563:{NFSU2_TR(0x440563);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B440565:{NFSU2_TR(0x440565);
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
B440567:{NFSU2_TR(0x440567);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4405ad;}}
}
B440569:L440569:{c.instructions+=3;NFSU2_TR(0x440569);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B44056c:{NFSU2_TR(0x44056c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x82804cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x82804cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B440572:{NFSU2_TR(0x440572);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440553u);}goto L440553;}}
}
B440574:L440574:{c.instructions+=5;NFSU2_TR(0x440574);
__builtin_memmove((R+4),gp(0x8284fc),4);
}
B44057a:{NFSU2_TR(0x44057a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B44057e:{NFSU2_TR(0x44057e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
}
B440581:{NFSU2_TR(0x440581);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440583:{NFSU2_TR(0x440583);
if(r1(R+518)){{goto L4405a3;}}
}
B440585:L440585:{c.instructions+=5;NFSU2_TR(0x440585);
__builtin_memmove((R+0),gp(0x828504),4);
}
B44058a:{NFSU2_TR(0x44058a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B44058b:{NFSU2_TR(0x44058b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x44058b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x44058b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B44058d:{NFSU2_TR(0x44058d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44058f:{NFSU2_TR(0x44058f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4405a3;}}
}
B440591:L440591:{c.instructions+=3;NFSU2_TR(0x440591);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B440598:{NFSU2_TR(0x440598);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44059a:{NFSU2_TR(0x44059a);
if(r1(R+518)){{goto L4405a3;}}
}
B44059c:L44059c:{c.instructions+=2;NFSU2_TR(0x44059c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44059e:{NFSU2_TR(0x44059e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4405a3ull));
TAIL_STATIC(0x43fef0u,43f);
}
B4405a3:L4405a3:{c.instructions+=2;NFSU2_TR(0x4405a3);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x22ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x22ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x22ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4405a7:{NFSU2_TR(0x4405a7);
if(r1(R+518)){{goto L4405ba;}}
}
B4405a9:L4405a9:{c.instructions+=1;NFSU2_TR(0x4405a9);
u8 U[4];
{SPILL();c.pc=0x4405a9u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B4405ad:L4405ad:{c.instructions+=4;NFSU2_TR(0x4405ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4405af:{NFSU2_TR(0x4405af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4405b0:{NFSU2_TR(0x4405b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4405b1:{NFSU2_TR(0x4405b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4405b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4405b4:L4405b4:{c.instructions+=4;NFSU2_TR(0x4405b4);
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
B4405b7:{NFSU2_TR(0x4405b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4405b8:{NFSU2_TR(0x4405b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4405b9:{NFSU2_TR(0x4405b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4405ba:L4405ba:{c.instructions+=15;NFSU2_TR(0x4405ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4405bd:{NFSU2_TR(0x4405bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4405c1:{NFSU2_TR(0x4405c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4405c3:{NFSU2_TR(0x4405c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4405c7:{NFSU2_TR(0x4405c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4405ce:{NFSU2_TR(0x4405ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4405cf:{NFSU2_TR(0x4405cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4405d1:{NFSU2_TR(0x4405d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4405d2:{NFSU2_TR(0x4405d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4405d5:{NFSU2_TR(0x4405d5);
__builtin_memmove((R+20),(R+28),4);
}
B4405d7:{NFSU2_TR(0x4405d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4405da:{NFSU2_TR(0x4405da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4405dd:{NFSU2_TR(0x4405dd);
__builtin_memmove((R+4),(R+12),4);
}
B4405df:{NFSU2_TR(0x4405df);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B4405e1:{NFSU2_TR(0x4405e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4405e6ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B4405e6:L4405e6:{c.instructions+=4;NFSU2_TR(0x4405e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4405e7:{NFSU2_TR(0x4405e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4405e8:{NFSU2_TR(0x4405e8);
__builtin_memmove((R+4),(R+24),4);
}
B4405ea:{NFSU2_TR(0x4405ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4405efull));
TAIL_STATIC(0x43fa50u,43f);
}
B4405ef:L4405ef:{c.instructions+=10;NFSU2_TR(0x4405ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4405f2:{NFSU2_TR(0x4405f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4405f5:{NFSU2_TR(0x4405f5);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+28))));
}
B4405f7:{NFSU2_TR(0x4405f7);
__builtin_memmove((R+0),(R+20),4);
}
B4405f9:{NFSU2_TR(0x4405f9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4405fb:{NFSU2_TR(0x4405fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4405fe:{NFSU2_TR(0x4405fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B440601:{NFSU2_TR(0x440601);
__builtin_memmove((R+4),(R+12),4);
}
B440603:{NFSU2_TR(0x440603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440606:{NFSU2_TR(0x440606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44060bull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B44060b:L44060b:{c.instructions+=6;NFSU2_TR(0x44060b);
__builtin_memmove((R+0),gp(0x828510),4);
}
B440610:{NFSU2_TR(0x440610);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B440612:{NFSU2_TR(0x440612);
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
B440614:{NFSU2_TR(0x440614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440615:{NFSU2_TR(0x440615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440616:{NFSU2_TR(0x440616);
if(r1(R+518)){{goto L440634;}}
}
B440618:L440618:{c.instructions+=3;NFSU2_TR(0x440618);
__builtin_memmove((R+4),gp(0x828154),4);
}
B44061e:{NFSU2_TR(0x44061e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
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
B440621:{NFSU2_TR(0x440621);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440634;}}
}
B440623:L440623:{c.instructions+=1;NFSU2_TR(0x440623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440628ull));
TAIL_STATIC(0x43f9a0u,43f);
}
B440628:L440628:{c.instructions+=2;NFSU2_TR(0x440628);
__builtin_memmove(gp(0x828154),(R+24),4);
}
B44062e:{NFSU2_TR(0x44062e);
__builtin_memmove(gp(0x828510),(R+24),4);
}
B440634:L440634:{c.instructions+=1;NFSU2_TR(0x440634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440635:L440635:{c.instructions+=2;NFSU2_TR(0x440635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440636:{NFSU2_TR(0x440636);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440640:L440640:{c.instructions+=3;NFSU2_TR(0x440640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440644:{NFSU2_TR(0x440644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440645:{NFSU2_TR(0x440645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44064aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B44064a:L44064a:{c.instructions+=2;NFSU2_TR(0x44064a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44064b:{NFSU2_TR(0x44064b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440650:L440650:{c.instructions+=5;NFSU2_TR(0x440650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B440653:{NFSU2_TR(0x440653);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440656:{NFSU2_TR(0x440656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440658:{NFSU2_TR(0x440658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B44065c:{NFSU2_TR(0x44065c);
if(r1(R+518)){{goto L44079d;}}
}
B440662:L440662:{c.instructions+=5;NFSU2_TR(0x440662);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440665:{NFSU2_TR(0x440665);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440668:{NFSU2_TR(0x440668);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44066b:{NFSU2_TR(0x44066b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44066d:{NFSU2_TR(0x44066d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440662u);}goto L440662;}}
}
B44066f:L44066f:{c.instructions+=7;NFSU2_TR(0x44066f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440670:{NFSU2_TR(0x440670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440673:{NFSU2_TR(0x440673);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440675:{NFSU2_TR(0x440675);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440676:{NFSU2_TR(0x440676);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440677:{NFSU2_TR(0x440677);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440678:{NFSU2_TR(0x440678);
if(r1(R+518)){{goto L4406d5;}}
}
B44067a:L44067a:{c.instructions+=1;NFSU2_TR(0x44067a);
__builtin_memmove((R+12),(R+12),4);
}
B440680:L440680:{c.instructions+=3;NFSU2_TR(0x440680);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440683:{NFSU2_TR(0x440683);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440685:{NFSU2_TR(0x440685);
if(r1(R+518)){{goto L4406cb;}}
}
B440687:L440687:{c.instructions+=4;NFSU2_TR(0x440687);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B440689:{NFSU2_TR(0x440689);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44068b:{NFSU2_TR(0x44068b);
__builtin_memmove((R+4),(R+28),4);
}
B44068d:{NFSU2_TR(0x44068d);
if(r1(R+518)){{goto L4406bf;}}
}
B44068f:L44068f:{c.instructions+=1;NFSU2_TR(0x44068f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B440692:L440692:{c.instructions+=7;NFSU2_TR(0x440692);
__builtin_memmove((R+0),(R+12),4);
}
B440694:{NFSU2_TR(0x440694);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B440696:{NFSU2_TR(0x440696);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B440699:{NFSU2_TR(0x440699);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44069b:{NFSU2_TR(0x44069b);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x44069b);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x44069b);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B44069d:{NFSU2_TR(0x44069d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44069f:{NFSU2_TR(0x44069f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4406a6;}}
}
B4406a1:L4406a1:{c.instructions+=2;NFSU2_TR(0x4406a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4406a4:{NFSU2_TR(0x4406a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4406b4;}}
}
B4406a6:L4406a6:{c.instructions+=5;NFSU2_TR(0x4406a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4406a9:{NFSU2_TR(0x4406a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4406ac:{NFSU2_TR(0x4406ac);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B4406ae:{NFSU2_TR(0x4406ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4406b0:{NFSU2_TR(0x4406b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440692u);}goto L440692;}}
}
B4406b2:L4406b2:{c.instructions+=1;NFSU2_TR(0x4406b2);
{goto L4406bf;}
}
B4406b4:L4406b4:{c.instructions+=3;NFSU2_TR(0x4406b4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B4406b6:{NFSU2_TR(0x4406b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4406b8:{NFSU2_TR(0x4406b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4406bf;}}
}
B4406ba:L4406ba:{c.instructions+=2;NFSU2_TR(0x4406ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4406bd:{NFSU2_TR(0x4406bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4406c8;}}
}
B4406bf:L4406bf:{c.instructions+=3;NFSU2_TR(0x4406bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4406c2:{NFSU2_TR(0x4406c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4406c4:{NFSU2_TR(0x4406c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440687u);}goto L440687;}}
}
B4406c6:L4406c6:{c.instructions+=1;NFSU2_TR(0x4406c6);
{goto L4406cb;}
}
B4406c8:L4406c8:{c.instructions+=1;NFSU2_TR(0x4406c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4406cb:L4406cb:{c.instructions+=4;NFSU2_TR(0x4406cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4406cd:{NFSU2_TR(0x4406cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4406cf:{NFSU2_TR(0x4406cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4406d3:{NFSU2_TR(0x4406d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440680u);}goto L440680;}}
}
B4406d5:L4406d5:{c.instructions+=4;NFSU2_TR(0x4406d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4406d8:{NFSU2_TR(0x4406d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4406da:{NFSU2_TR(0x4406da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4406de:{NFSU2_TR(0x4406de);
if(r1(R+518)){{goto L440799;}}
}
B4406e4:L4406e4:{c.instructions+=1;NFSU2_TR(0x4406e4);
{goto L4406f0;}
}
B4406e6:L4406e6:{c.instructions+=2;NFSU2_TR(0x4406e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4406ea:{NFSU2_TR(0x4406ea);
__builtin_memmove((R+12),(R+12),4);
}
B4406f0:L4406f0:{c.instructions+=5;NFSU2_TR(0x4406f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4406f3:{NFSU2_TR(0x4406f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4406f5:{NFSU2_TR(0x4406f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4406f8:{NFSU2_TR(0x4406f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4406fc:{NFSU2_TR(0x4406fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44078b;}}
}
B440702:L440702:{c.instructions+=5;NFSU2_TR(0x440702);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440705:{NFSU2_TR(0x440705);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440707:{NFSU2_TR(0x440707);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44070a:{NFSU2_TR(0x44070a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44070e:{NFSU2_TR(0x44070e);
if(r1(R+518)){{goto L440767;}}
}
B440710:L440710:{c.instructions+=6;NFSU2_TR(0x440710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B440712:{NFSU2_TR(0x440712);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440715:{NFSU2_TR(0x440715);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440719:{NFSU2_TR(0x440719);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44071b:{NFSU2_TR(0x44071b);
__builtin_memmove((R+4),(R+20),4);
}
B44071d:{NFSU2_TR(0x44071d);
__builtin_memmove((R+4),(R+4),4);
}
B440720:L440720:{c.instructions+=7;NFSU2_TR(0x440720);
__builtin_memmove((R+0),(R+24),4);
}
B440722:{NFSU2_TR(0x440722);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B440724:{NFSU2_TR(0x440724);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B440727:{NFSU2_TR(0x440727);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B440729:{NFSU2_TR(0x440729);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x440729);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x440729);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B44072b:{NFSU2_TR(0x44072b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44072d:{NFSU2_TR(0x44072d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440734;}}
}
B44072f:L44072f:{c.instructions+=2;NFSU2_TR(0x44072f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B440732:{NFSU2_TR(0x440732);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440742;}}
}
B440734:L440734:{c.instructions+=5;NFSU2_TR(0x440734);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440737:{NFSU2_TR(0x440737);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44073a:{NFSU2_TR(0x44073a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B44073c:{NFSU2_TR(0x44073c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44073e:{NFSU2_TR(0x44073e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440720u);}goto L440720;}}
}
B440740:L440740:{c.instructions+=1;NFSU2_TR(0x440740);
{goto L440757;}
}
B440742:L440742:{c.instructions+=3;NFSU2_TR(0x440742);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B440744:{NFSU2_TR(0x440744);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B440746:{NFSU2_TR(0x440746);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440757;}}
}
B440748:L440748:{c.instructions+=2;NFSU2_TR(0x440748);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B44074b:{NFSU2_TR(0x44074b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L440757;}}
}
B44074d:L44074d:{c.instructions+=3;NFSU2_TR(0x44074d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440751:{NFSU2_TR(0x440751);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440755:{NFSU2_TR(0x440755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B440757:L440757:{c.instructions+=4;NFSU2_TR(0x440757);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44075b:{NFSU2_TR(0x44075b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44075f:{NFSU2_TR(0x44075f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440761:{NFSU2_TR(0x440761);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440710u);}goto L440710;}}
}
B440763:L440763:{c.instructions+=1;NFSU2_TR(0x440763);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440767:L440767:{c.instructions+=10;NFSU2_TR(0x440767);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44076b:{NFSU2_TR(0x44076b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44076e:{NFSU2_TR(0x44076e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440771:{NFSU2_TR(0x440771);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B440773:{NFSU2_TR(0x440773);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440776:{NFSU2_TR(0x440776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440779:{NFSU2_TR(0x440779);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44077d:{NFSU2_TR(0x44077d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44077e:{NFSU2_TR(0x44077e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440781:{NFSU2_TR(0x440781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440786ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440786:L440786:{c.instructions+=2;NFSU2_TR(0x440786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440789:{NFSU2_TR(0x440789);
__builtin_memmove((R+20),(R+24),4);
}
B44078b:L44078b:{c.instructions+=4;NFSU2_TR(0x44078b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44078d:{NFSU2_TR(0x44078d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440791:{NFSU2_TR(0x440791);
__builtin_memmove((R+20),(R+28),4);
}
B440793:{NFSU2_TR(0x440793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4406e6u);}goto L4406e6;}}
}
B440799:L440799:{c.instructions+=4;NFSU2_TR(0x440799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44079a:{NFSU2_TR(0x44079a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44079b:{NFSU2_TR(0x44079b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44079c:{NFSU2_TR(0x44079c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44079d:L44079d:{c.instructions+=2;NFSU2_TR(0x44079d);
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
B4407a0:{NFSU2_TR(0x4407a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4407b0:L4407b0:{c.instructions+=6;NFSU2_TR(0x4407b0);
__builtin_memmove((R+0),(R+4),4);
}
B4407b2:{NFSU2_TR(0x4407b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4407b5:{NFSU2_TR(0x4407b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4407b7:{NFSU2_TR(0x4407b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4407ba:{NFSU2_TR(0x4407ba);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4407c0:{NFSU2_TR(0x4407c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4407d0:L4407d0:{c.instructions+=8;NFSU2_TR(0x4407d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4407d1:{NFSU2_TR(0x4407d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4407d4:{NFSU2_TR(0x4407d4);
__builtin_memmove((R+0),(R+24),4);
}
B4407d6:{NFSU2_TR(0x4407d6);
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
B4407d8:{NFSU2_TR(0x4407d8);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4407de:{NFSU2_TR(0x4407de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4407e0:{NFSU2_TR(0x4407e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4407e3:{NFSU2_TR(0x4407e3);
if(r1(R+518)){{goto L4407fe;}}
}
B4407e5:L4407e5:{c.instructions+=6;NFSU2_TR(0x4407e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4407e7:{NFSU2_TR(0x4407e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4407ea:{NFSU2_TR(0x4407ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4407ec:{NFSU2_TR(0x4407ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4407ed:{NFSU2_TR(0x4407ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4407f0:{NFSU2_TR(0x4407f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4407f5ull));
TAIL_STATIC(0x575630u,575);
}
B4407f5:L4407f5:{c.instructions+=4;NFSU2_TR(0x4407f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4407f7:{NFSU2_TR(0x4407f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4407fa:{NFSU2_TR(0x4407fa);
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
B4407fc:{NFSU2_TR(0x4407fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4407e5u);}goto L4407e5;}}
}
B4407fe:L4407fe:{c.instructions+=2;NFSU2_TR(0x4407fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4407ff:{NFSU2_TR(0x4407ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440800:L440800:{c.instructions+=6;NFSU2_TR(0x440800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440801:{NFSU2_TR(0x440801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440804:{NFSU2_TR(0x440804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440805:{NFSU2_TR(0x440805);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440808:{NFSU2_TR(0x440808);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B44080a:{NFSU2_TR(0x44080a);
if(r1(R+518)){{goto L44081d;}}
}
B44080c:L44080c:{c.instructions+=1;NFSU2_TR(0x44080c);
__builtin_memmove((R+16),(R+16),4);
}
B440810:L440810:{c.instructions+=2;NFSU2_TR(0x440810);
__builtin_memmove((R+4),(R+24),4);
}
B440812:{NFSU2_TR(0x440812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440817ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440650u);}goto L440650;}
}
B440817:L440817:{c.instructions+=3;NFSU2_TR(0x440817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B440819:{NFSU2_TR(0x440819);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B44081b:{NFSU2_TR(0x44081b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440810u);}goto L440810;}}
}
B44081d:L44081d:{c.instructions+=3;NFSU2_TR(0x44081d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44081e:{NFSU2_TR(0x44081e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44081f:{NFSU2_TR(0x44081f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440820:L440820:{c.instructions+=7;NFSU2_TR(0x440820);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440824:{NFSU2_TR(0x440824);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440828:{NFSU2_TR(0x440828);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440829:{NFSU2_TR(0x440829);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44082b:{NFSU2_TR(0x44082b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44082d:{NFSU2_TR(0x44082d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44082e:{NFSU2_TR(0x44082e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440833ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440390u);}goto L440390;}
}
B440833:L440833:{c.instructions+=2;NFSU2_TR(0x440833);
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
B440836:{NFSU2_TR(0x440836);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440840:L440840:{c.instructions+=9;NFSU2_TR(0x440840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440841:{NFSU2_TR(0x440841);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440842:{NFSU2_TR(0x440842);
__builtin_memmove((R+24),(R+4),4);
}
B440844:{NFSU2_TR(0x440844);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440848:{NFSU2_TR(0x440848);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44084a:{NFSU2_TR(0x44084a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44084c:{NFSU2_TR(0x44084c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44084d:{NFSU2_TR(0x44084d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440853:{NFSU2_TR(0x440853);
if(r1(R+518)){{goto L44085f;}}
}
B440855:L440855:{c.instructions+=1;NFSU2_TR(0x440855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
w4(U+4,u32(0x43bd50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44085f:L44085f:{c.instructions+=7;NFSU2_TR(0x44085f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440863:{NFSU2_TR(0x440863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440864:{NFSU2_TR(0x440864);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440868:{NFSU2_TR(0x440868);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44086c:{NFSU2_TR(0x44086c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44086d:{NFSU2_TR(0x44086d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44086e:{NFSU2_TR(0x44086e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440873ull));
TAIL_STATIC(0x57da10u,57d);
}
B440873:L440873:{c.instructions+=3;NFSU2_TR(0x440873);
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
B440876:{NFSU2_TR(0x440876);
__builtin_memmove((R+28),(R+0),4);
}
B440878:{NFSU2_TR(0x440878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44087dull));
TAIL_STATIC(0x575320u,575);
}
B44087d:L44087d:{c.instructions+=6;NFSU2_TR(0x44087d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440881:{NFSU2_TR(0x440881);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440882:{NFSU2_TR(0x440882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440883:{NFSU2_TR(0x440883);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440884:{NFSU2_TR(0x440884);
__builtin_memmove((R+4),(R+24),4);
}
B440886:{NFSU2_TR(0x440886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44088bull));
TAIL_STATIC(0x43e200u,43e);
}
B44088b:L44088b:{c.instructions+=2;NFSU2_TR(0x44088b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44088c:{NFSU2_TR(0x44088c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440891ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440891:L440891:{c.instructions+=6;NFSU2_TR(0x440891);
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
B440894:{NFSU2_TR(0x440894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440895:{NFSU2_TR(0x440895);
__builtin_memmove((R+0),(R+24),4);
}
B440897:{NFSU2_TR(0x440897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440898:{NFSU2_TR(0x440898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440899:{NFSU2_TR(0x440899);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4408a0:L4408a0:{c.instructions+=20;NFSU2_TR(0x4408a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408a2:{NFSU2_TR(0x4408a2);
u8 U[4];
w4(U+0,u32(0x771fcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408a7:{NFSU2_TR(0x4408a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4408ad:{NFSU2_TR(0x4408ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408ae:{NFSU2_TR(0x4408ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4408b5:{NFSU2_TR(0x4408b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x26cull))));
}
B4408bb:{NFSU2_TR(0x4408bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408bc:{NFSU2_TR(0x4408bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408bd:{NFSU2_TR(0x4408bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408be:{NFSU2_TR(0x4408be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408bf:{NFSU2_TR(0x4408bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4408c6:{NFSU2_TR(0x4408c6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4408c8:{NFSU2_TR(0x4408c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408c9:{NFSU2_TR(0x4408c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4408cd:{NFSU2_TR(0x4408cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408ce:{NFSU2_TR(0x4408ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408cf:{NFSU2_TR(0x4408cf);
__builtin_memmove((R+12),(R+4),4);
}
B4408d1:{NFSU2_TR(0x4408d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
w4(U+4,u32(0x43bd50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4408dc:{NFSU2_TR(0x4408dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4408e0:{NFSU2_TR(0x4408e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4408e5ull));
TAIL_STATIC(0x57da10u,57d);
}
B4408e5:L4408e5:{c.instructions+=3;NFSU2_TR(0x4408e5);
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
B4408e8:{NFSU2_TR(0x4408e8);
__builtin_memmove((R+24),(R+0),4);
}
B4408ea:{NFSU2_TR(0x4408ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4408efull));
TAIL_STATIC(0x575320u,575);
}
B4408ef:L4408ef:{c.instructions+=6;NFSU2_TR(0x4408ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4408f3:{NFSU2_TR(0x4408f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408f4:{NFSU2_TR(0x4408f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408f5:{NFSU2_TR(0x4408f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4408f6:{NFSU2_TR(0x4408f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4408fa:{NFSU2_TR(0x4408fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4408ffull));
TAIL_STATIC(0x43e200u,43e);
}
B4408ff:L4408ff:{c.instructions+=2;NFSU2_TR(0x4408ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440900:{NFSU2_TR(0x440900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440905ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440905:L440905:{c.instructions+=7;NFSU2_TR(0x440905);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440908:{NFSU2_TR(0x440908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44090a:{NFSU2_TR(0x44090a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44090e:{NFSU2_TR(0x44090e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B440910:{NFSU2_TR(0x440910);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B440913:{NFSU2_TR(0x440913);
u8 U[8];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44091a:{NFSU2_TR(0x44091a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440937;}}
}
B44091c:L44091c:{c.instructions+=2;NFSU2_TR(0x44091c);
__builtin_memmove((R+4),(R+12),4);
}
B44091e:{NFSU2_TR(0x44091e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440923ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4400f0u);}goto L4400f0;}
}
B440923:L440923:{c.instructions+=4;NFSU2_TR(0x440923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440924:{NFSU2_TR(0x440924);
u8 U[4];
w4(U+0,u32(0x786f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440929:{NFSU2_TR(0x440929);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44092a:{NFSU2_TR(0x44092a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44092full));
TAIL_STATIC(0x43fc40u,43f);
}
B44092f:L44092f:{c.instructions+=2;NFSU2_TR(0x44092f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B440932:{NFSU2_TR(0x440932);
{goto L440a16;}
}
B440937:L440937:{c.instructions+=4;NFSU2_TR(0x440937);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44093e:{NFSU2_TR(0x44093e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B440940:{NFSU2_TR(0x440940);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B440942:{NFSU2_TR(0x440942);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4409df;}}
}
B440948:L440948:{c.instructions+=2;NFSU2_TR(0x440948);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44094a:{NFSU2_TR(0x44094a);
__builtin_memmove((R+12),(R+12),4);
}
B440950:L440950:{c.instructions+=3;NFSU2_TR(0x440950);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440956:{NFSU2_TR(0x440956);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44095c:{NFSU2_TR(0x44095c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44097d;}}
}
B44095e:L44095e:{c.instructions+=9;NFSU2_TR(0x44095e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B440965:{NFSU2_TR(0x440965);
w4(R+0,u32(0x55555556ull));
}
B44096a:{NFSU2_TR(0x44096a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44096c:{NFSU2_TR(0x44096c);
__builtin_memmove((R+0),(R+8),4);
}
B44096e:{NFSU2_TR(0x44096e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B440971:{NFSU2_TR(0x440971);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B440975:{NFSU2_TR(0x440975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440976:{NFSU2_TR(0x440976);
__builtin_memmove((R+4),(R+12),4);
}
B440978:{NFSU2_TR(0x440978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44097dull));
TAIL_STATIC(0x43e0a0u,43e);
}
B44097d:L44097d:{c.instructions+=29;NFSU2_TR(0x44097d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440983:{NFSU2_TR(0x440983);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440989:{NFSU2_TR(0x440989);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44098c:{NFSU2_TR(0x44098c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44098f:{NFSU2_TR(0x44098f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B440990:{NFSU2_TR(0x440990);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440996:{NFSU2_TR(0x440996);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B440998:{NFSU2_TR(0x440998);
__builtin_memmove((R+8),(R+0),4);
}
B44099a:{NFSU2_TR(0x44099a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B44099c:{NFSU2_TR(0x44099c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44099f:{NFSU2_TR(0x44099f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4409a2:{NFSU2_TR(0x4409a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4409a9:{NFSU2_TR(0x4409a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4409ac:{NFSU2_TR(0x4409ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+20),(U+0),4);
}
B4409ae:{NFSU2_TR(0x4409ae);
__builtin_memmove((R+4),(R+0),4);
}
B4409b0:{NFSU2_TR(0x4409b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4409b2:{NFSU2_TR(0x4409b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4409b5:{NFSU2_TR(0x4409b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4409b8:{NFSU2_TR(0x4409b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4409bb:{NFSU2_TR(0x4409bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4409be:{NFSU2_TR(0x4409be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B4409c0:{NFSU2_TR(0x4409c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4409c2:{NFSU2_TR(0x4409c2);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+4))));
}
B4409c4:{NFSU2_TR(0x4409c4);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B4409c6:{NFSU2_TR(0x4409c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4409cd:{NFSU2_TR(0x4409cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4409ce:{NFSU2_TR(0x4409ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B4409d1:{NFSU2_TR(0x4409d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4409d3:{NFSU2_TR(0x4409d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440950u);}goto L440950;}}
}
B4409d9:L4409d9:{c.instructions+=2;NFSU2_TR(0x4409d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4409dd:{NFSU2_TR(0x4409dd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4409df:L4409df:{c.instructions+=3;NFSU2_TR(0x4409df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4409e1:{NFSU2_TR(0x4409e1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4409e3:{NFSU2_TR(0x4409e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440a10;}}
}
B4409e5:L4409e5:{c.instructions+=2;NFSU2_TR(0x4409e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4409e9:{NFSU2_TR(0x4409e9);
__builtin_memmove((R+16),(R+16),4);
}
B4409f0:L4409f0:{c.instructions+=6;NFSU2_TR(0x4409f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4409f2:{NFSU2_TR(0x4409f2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4409f4:{NFSU2_TR(0x4409f4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x54ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4409f7:{NFSU2_TR(0x4409f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4409fb:{NFSU2_TR(0x4409fb);
__builtin_memmove((R+24),(R+8),4);
}
B4409fd:{NFSU2_TR(0x4409fd);
w4(R+4,u32(0x15ull));
}
B440a02:L440a02:{c.instructions+=1;NFSU2_TR(0x440a02);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L440a04;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440a02u);}goto L440a02;}
}
B440a04:L440a04:{c.instructions+=5;NFSU2_TR(0x440a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440a08:{NFSU2_TR(0x440a08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B440a09:{NFSU2_TR(0x440a09);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x54ull))));
}
B440a0c:{NFSU2_TR(0x440a0c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B440a0e:{NFSU2_TR(0x440a0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4409f0u);}goto L4409f0;}}
}
B440a10:L440a10:{c.instructions+=2;NFSU2_TR(0x440a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+12)),r4(U+0));
}
B440a12:{NFSU2_TR(0x440a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440a16:L440a16:{c.instructions+=5;NFSU2_TR(0x440a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440a1a:{NFSU2_TR(0x440a1a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B440a1c:{NFSU2_TR(0x440a1c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B440a1e:{NFSU2_TR(0x440a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B440a29:{NFSU2_TR(0x440a29);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440a47;}}
}
B440a2b:L440a2b:{c.instructions+=2;NFSU2_TR(0x440a2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B440a2f:{NFSU2_TR(0x440a2f);
}
B440a30:L440a30:{c.instructions+=3;NFSU2_TR(0x440a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B440a32:{NFSU2_TR(0x440a32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a33:{NFSU2_TR(0x440a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440a38ull));
TAIL_STATIC(0x575630u,575);
}
B440a38:L440a38:{c.instructions+=6;NFSU2_TR(0x440a38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440a3c:{NFSU2_TR(0x440a3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440a3f:{NFSU2_TR(0x440a3f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B440a40:{NFSU2_TR(0x440a40);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x54ull))));
}
B440a43:{NFSU2_TR(0x440a43);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B440a45:{NFSU2_TR(0x440a45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440a30u);}goto L440a30;}}
}
B440a47:L440a47:{c.instructions+=7;NFSU2_TR(0x440a47);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440a4e:{NFSU2_TR(0x440a4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440a4f:{NFSU2_TR(0x440a4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440a50:{NFSU2_TR(0x440a50);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B440a52:{NFSU2_TR(0x440a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440a53:{NFSU2_TR(0x440a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440a54:{NFSU2_TR(0x440a54);
if(r1(R+518)){{goto L440a5f;}}
}
B440a56:L440a56:{c.instructions+=2;NFSU2_TR(0x440a56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a57:{NFSU2_TR(0x440a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440a5cull));
TAIL_STATIC(0x575630u,575);
}
B440a5c:L440a5c:{c.instructions+=1;NFSU2_TR(0x440a5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440a5f:L440a5f:{c.instructions+=4;NFSU2_TR(0x440a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x26cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440a66:{NFSU2_TR(0x440a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440a6d:{NFSU2_TR(0x440a6d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x278ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x278ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x278ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B440a73:{NFSU2_TR(0x440a73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440a80:L440a80:{c.instructions+=3;NFSU2_TR(0x440a80);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B440a84:{NFSU2_TR(0x440a84);
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
B440a86:{NFSU2_TR(0x440a86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440ab7;}}
}
B440a88:L440a88:{c.instructions+=10;NFSU2_TR(0x440a88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a89:{NFSU2_TR(0x440a89);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440a8d:{NFSU2_TR(0x440a8d);
__builtin_memmove((R+0),(R+24),4);
}
B440a8f:{NFSU2_TR(0x440a8f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B440a92:{NFSU2_TR(0x440a92);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B440a95:{NFSU2_TR(0x440a95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a96:{NFSU2_TR(0x440a96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a98:{NFSU2_TR(0x440a98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a9a:{NFSU2_TR(0x440a9a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440a9c:{NFSU2_TR(0x440a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440aa1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440390u);}goto L440390;}
}
B440aa1:L440aa1:{c.instructions+=4;NFSU2_TR(0x440aa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B440aa8:{NFSU2_TR(0x440aa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440aa9:{NFSU2_TR(0x440aa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B440aad:{NFSU2_TR(0x440aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440ab2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440ab2:L440ab2:{c.instructions+=3;NFSU2_TR(0x440ab2);
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
B440ab5:{NFSU2_TR(0x440ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440ab6:{NFSU2_TR(0x440ab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440ab7:L440ab7:{c.instructions+=4;NFSU2_TR(0x440ab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440abb:{NFSU2_TR(0x440abb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B440ac2:{NFSU2_TR(0x440ac2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B440ac5:{NFSU2_TR(0x440ac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440ad0:L440ad0:{c.instructions+=4;NFSU2_TR(0x440ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440ad4:{NFSU2_TR(0x440ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440ad6:{NFSU2_TR(0x440ad6);
w4(R+8,u32(0x8ull));
}
B440adb:{NFSU2_TR(0x440adb);
if(r1(R+518)){{goto L440b19;}}
}
B440add:L440add:{c.instructions+=1;NFSU2_TR(0x440add);
__builtin_memmove((R+4),(R+4),4);
}
B440ae0:L440ae0:{c.instructions+=4;NFSU2_TR(0x440ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B440ae2:{NFSU2_TR(0x440ae2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B440ae3:{NFSU2_TR(0x440ae3);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B440ae6:{NFSU2_TR(0x440ae6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L440b12;}}
}
B440ae8:L440ae8:{c.instructions+=1;NFSU2_TR(0x440ae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x440b30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B440aef:L440aef:{c.instructions+=5;NFSU2_TR(0x440aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440af2:{NFSU2_TR(0x440af2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ffcull))));
}
B440af8:{NFSU2_TR(0x440af8);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B440afb:{NFSU2_TR(0x440afb);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B440afd:{NFSU2_TR(0x440afd);
{goto L440b12;}
}
B440aff:L440aff:{c.instructions+=5;NFSU2_TR(0x440aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440b02:{NFSU2_TR(0x440b02);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ffcull))));
}
B440b08:{NFSU2_TR(0x440b08);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B440b0b:{NFSU2_TR(0x440b0b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B440b0d:{NFSU2_TR(0x440b0d);
{goto L440b12;}
}
B440b0f:L440b0f:{c.instructions+=1;NFSU2_TR(0x440b0f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff7ull))));
}
B440b12:L440b12:{c.instructions+=3;NFSU2_TR(0x440b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440b15:{NFSU2_TR(0x440b15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440b17:{NFSU2_TR(0x440b17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440ae0u);}goto L440ae0;}}
}
B440b19:L440b19:{c.instructions+=6;NFSU2_TR(0x440b19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b1a:{NFSU2_TR(0x440b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440b1e:{NFSU2_TR(0x440b1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b20:{NFSU2_TR(0x440b20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b22:{NFSU2_TR(0x440b22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b23:{NFSU2_TR(0x440b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440b28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440390u);}goto L440390;}
}
B440b28:L440b28:{c.instructions+=2;NFSU2_TR(0x440b28);
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
B440b2b:{NFSU2_TR(0x440b2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440b40:L440b40:{c.instructions+=15;NFSU2_TR(0x440b40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b41:{NFSU2_TR(0x440b41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440b45:{NFSU2_TR(0x440b45);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b46:{NFSU2_TR(0x440b46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B440b4a:{NFSU2_TR(0x440b4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b4b:{NFSU2_TR(0x440b4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b4c:{NFSU2_TR(0x440b4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440b50:{NFSU2_TR(0x440b50);
__builtin_memmove((R+0),(R+20),4);
}
B440b52:{NFSU2_TR(0x440b52);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B440b55:{NFSU2_TR(0x440b55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b56:{NFSU2_TR(0x440b56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b58:{NFSU2_TR(0x440b58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B440b5b:{NFSU2_TR(0x440b5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b5d:{NFSU2_TR(0x440b5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440b5e:{NFSU2_TR(0x440b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440b63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440390u);}goto L440390;}
}
B440b63:L440b63:{c.instructions+=5;NFSU2_TR(0x440b63);
__builtin_memmove((R+24),(R+0),4);
}
B440b65:{NFSU2_TR(0x440b65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B440b67:{NFSU2_TR(0x440b67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B440b6a:{NFSU2_TR(0x440b6a);
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
B440b6c:{NFSU2_TR(0x440b6c);
if(r1(R+518)){{goto L440b9b;}}
}
B440b6e:L440b6e:{c.instructions+=13;NFSU2_TR(0x440b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440b72:{NFSU2_TR(0x440b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b75:{NFSU2_TR(0x440b75);
__builtin_memmove((R+4),(R+24),4);
}
B440b77:{NFSU2_TR(0x440b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b7a:{NFSU2_TR(0x440b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b7d:{NFSU2_TR(0x440b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B440b84:{NFSU2_TR(0x440b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b87:{NFSU2_TR(0x440b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b8a:{NFSU2_TR(0x440b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b8d:{NFSU2_TR(0x440b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b90:{NFSU2_TR(0x440b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b93:{NFSU2_TR(0x440b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440b96:{NFSU2_TR(0x440b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440b9bull));
TAIL_STATIC(0x43cd40u,43c);
}
B440b9b:L440b9b:{c.instructions+=6;NFSU2_TR(0x440b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440b9c:{NFSU2_TR(0x440b9c);
__builtin_memmove((R+0),(R+24),4);
}
B440b9e:{NFSU2_TR(0x440b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440b9f:{NFSU2_TR(0x440b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440ba0:{NFSU2_TR(0x440ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440ba1:{NFSU2_TR(0x440ba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440bb0:L440bb0:{c.instructions+=13;NFSU2_TR(0x440bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bb1:{NFSU2_TR(0x440bb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bb2:{NFSU2_TR(0x440bb2);
__builtin_memmove((R+24),(R+4),4);
}
B440bb4:{NFSU2_TR(0x440bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440bb7:{NFSU2_TR(0x440bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440bba:{NFSU2_TR(0x440bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440bbd:{NFSU2_TR(0x440bbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bbe:{NFSU2_TR(0x440bbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440bc2:{NFSU2_TR(0x440bc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bc3:{NFSU2_TR(0x440bc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bc4:{NFSU2_TR(0x440bc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bc5:{NFSU2_TR(0x440bc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440bc6:{NFSU2_TR(0x440bc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440bcbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440b40u);}goto L440b40;}
}
B440bcb:L440bcb:{c.instructions+=9;NFSU2_TR(0x440bcb);
__builtin_memmove((R+4),(R+0),4);
}
B440bcd:{NFSU2_TR(0x440bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440bd0:{NFSU2_TR(0x440bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440bd3:{NFSU2_TR(0x440bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440bd6:{NFSU2_TR(0x440bd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B440bd9:{NFSU2_TR(0x440bd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B440bdc:{NFSU2_TR(0x440bdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440bde:{NFSU2_TR(0x440bde);
__builtin_memmove((R+0),(R+24),4);
}
B440be0:{NFSU2_TR(0x440be0);
if(r1(R+518)){{goto L440bee;}}
}
B440be2:L440be2:{c.instructions+=5;NFSU2_TR(0x440be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B440be4:{NFSU2_TR(0x440be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440be7:{NFSU2_TR(0x440be7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440be9:{NFSU2_TR(0x440be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B440bec:{NFSU2_TR(0x440bec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440be2u);}goto L440be2;}}
}
B440bee:L440bee:{c.instructions+=19;NFSU2_TR(0x440bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440bf1:{NFSU2_TR(0x440bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B440bf4:{NFSU2_TR(0x440bf4);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B440bf8:{NFSU2_TR(0x440bf8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B440bf9:{NFSU2_TR(0x440bf9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B440bfc:{NFSU2_TR(0x440bfc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B440bfe:{NFSU2_TR(0x440bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440c01:{NFSU2_TR(0x440c01);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B440c04:{NFSU2_TR(0x440c04);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B440c08:{NFSU2_TR(0x440c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440c0b:{NFSU2_TR(0x440c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440c0e:{NFSU2_TR(0x440c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B440c15:{NFSU2_TR(0x440c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440c18:{NFSU2_TR(0x440c18);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B440c1a:{NFSU2_TR(0x440c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440c1b:{NFSU2_TR(0x440c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440c1e:{NFSU2_TR(0x440c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440c1f:{NFSU2_TR(0x440c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440c20:{NFSU2_TR(0x440c20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440c30:L440c30:{c.instructions+=12;NFSU2_TR(0x440c30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c31:{NFSU2_TR(0x440c31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c32:{NFSU2_TR(0x440c32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c33:{NFSU2_TR(0x440c33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c34:{NFSU2_TR(0x440c34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c35:{NFSU2_TR(0x440c35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c37:{NFSU2_TR(0x440c37);
__builtin_memmove((R+20),(R+4),4);
}
B440c39:{NFSU2_TR(0x440c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440c3c:{NFSU2_TR(0x440c3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c3e:{NFSU2_TR(0x440c3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c40:{NFSU2_TR(0x440c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440c41:{NFSU2_TR(0x440c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440c46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440390u);}goto L440390;}
}
B440c46:L440c46:{c.instructions+=6;NFSU2_TR(0x440c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440c49:{NFSU2_TR(0x440c49);
__builtin_memmove((R+8),(R+4),4);
}
B440c4b:{NFSU2_TR(0x440c4b);
__builtin_memmove((R+12),(R+0),4);
}
B440c4d:{NFSU2_TR(0x440c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B440c50:{NFSU2_TR(0x440c50);
w4(R+0,u32(0x1010101ull));
}
B440c55:{NFSU2_TR(0x440c55);
__builtin_memmove((R+28),(R+12),4);
}
B440c57:L440c57:{c.instructions+=1;NFSU2_TR(0x440c57);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L440c59;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440c57u);}goto L440c57;}
}
B440c59:L440c59:{c.instructions+=2;NFSU2_TR(0x440c59);
__builtin_memmove((R+4),(R+8),4);
}
B440c5b:{NFSU2_TR(0x440c5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B440c5e:L440c5e:{c.instructions+=1;NFSU2_TR(0x440c5e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L440c60;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440c5eu);}goto L440c5e;}
}
B440c60:L440c60:{c.instructions+=5;NFSU2_TR(0x440c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440c63:{NFSU2_TR(0x440c63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B440c66:{NFSU2_TR(0x440c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440c68:{NFSU2_TR(0x440c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440c6c:{NFSU2_TR(0x440c6c);
if(r1(R+518)){{goto L440caa;}}
}
B440c6e:L440c6e:{c.instructions+=1;NFSU2_TR(0x440c6e);
__builtin_memmove((R+28),(R+28),4);
}
B440c70:L440c70:{c.instructions+=3;NFSU2_TR(0x440c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B440c73:{NFSU2_TR(0x440c73);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B440c75:{NFSU2_TR(0x440c75);
__builtin_memmove((R+4),(R+20),4);
}
B440c77:L440c77:{c.instructions+=7;NFSU2_TR(0x440c77);
__builtin_memmove((R+0),(R+24),4);
}
B440c79:{NFSU2_TR(0x440c79);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B440c7b:{NFSU2_TR(0x440c7b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B440c7e:{NFSU2_TR(0x440c7e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B440c80:{NFSU2_TR(0x440c80);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x440c80);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x440c80);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B440c82:{NFSU2_TR(0x440c82);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B440c84:{NFSU2_TR(0x440c84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440c8b;}}
}
B440c86:L440c86:{c.instructions+=2;NFSU2_TR(0x440c86);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B440c89:{NFSU2_TR(0x440c89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440ce3;}}
}
B440c8b:L440c8b:{c.instructions+=5;NFSU2_TR(0x440c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440c8e:{NFSU2_TR(0x440c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440c91:{NFSU2_TR(0x440c91);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B440c93:{NFSU2_TR(0x440c93);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440c95:{NFSU2_TR(0x440c95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440c77u);}goto L440c77;}}
}
B440c97:L440c97:{c.instructions+=1;NFSU2_TR(0x440c97);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B440c9a:L440c9a:{c.instructions+=5;NFSU2_TR(0x440c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440c9e:{NFSU2_TR(0x440c9e);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B440ca2:{NFSU2_TR(0x440ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B440ca4:{NFSU2_TR(0x440ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440ca6:{NFSU2_TR(0x440ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440c70u);}goto L440c70;}}
}
B440ca8:L440ca8:{c.instructions+=1;NFSU2_TR(0x440ca8);
__builtin_memmove((R+12),(R+4),4);
}
B440caa:L440caa:{c.instructions+=5;NFSU2_TR(0x440caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440cad:{NFSU2_TR(0x440cad);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B440caf:{NFSU2_TR(0x440caf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B440cb1:{NFSU2_TR(0x440cb1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440cb3:{NFSU2_TR(0x440cb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440d07;}}
}
B440cb5:L440cb5:{c.instructions+=2;NFSU2_TR(0x440cb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440cb9:{NFSU2_TR(0x440cb9);
__builtin_memmove((R+16),(R+16),4);
}
B440cc0:L440cc0:{c.instructions+=2;NFSU2_TR(0x440cc0);
u8 U[11];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B440cc4:{NFSU2_TR(0x440cc4);
if(r1(R+518)){{goto L440ccb;}}
}
B440cc6:L440cc6:{c.instructions+=2;NFSU2_TR(0x440cc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440cc8:{NFSU2_TR(0x440cc8);
if(r1(R+518)){{goto L440ce7;}}
}
B440cca:L440cca:{c.instructions+=1;NFSU2_TR(0x440cca);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B440ccb:L440ccb:{c.instructions+=3;NFSU2_TR(0x440ccb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B440ccc:{NFSU2_TR(0x440ccc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B440cce:{NFSU2_TR(0x440cce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440cc0u);}goto L440cc0;}}
}
B440cd0:L440cd0:{c.instructions+=2;NFSU2_TR(0x440cd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440cd1:{NFSU2_TR(0x440cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440cd6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440cd6:L440cd6:{c.instructions+=8;NFSU2_TR(0x440cd6);
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
B440cd9:{NFSU2_TR(0x440cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440cda:{NFSU2_TR(0x440cda);
__builtin_memmove((R+0),(R+24),4);
}
B440cdc:{NFSU2_TR(0x440cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440cdd:{NFSU2_TR(0x440cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440cde:{NFSU2_TR(0x440cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440cdf:{NFSU2_TR(0x440cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440ce0:{NFSU2_TR(0x440ce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440ce3:L440ce3:{c.instructions+=2;NFSU2_TR(0x440ce3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B440ce5:{NFSU2_TR(0x440ce5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440c9au);}goto L440c9a;}
}
B440ce7:L440ce7:{c.instructions+=2;NFSU2_TR(0x440ce7);
__builtin_memmove((R+0),(R+20),4);
}
B440ce9:{NFSU2_TR(0x440ce9);
__builtin_memmove((R+16),(R+16),4);
}
B440cf0:L440cf0:{c.instructions+=2;NFSU2_TR(0x440cf0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B440cf2:{NFSU2_TR(0x440cf2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440cf9;}}
}
B440cf4:L440cf4:{c.instructions+=2;NFSU2_TR(0x440cf4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B440cf7:{NFSU2_TR(0x440cf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L440d1a;}}
}
B440cf9:L440cf9:{c.instructions+=5;NFSU2_TR(0x440cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440cfc:{NFSU2_TR(0x440cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440cff:{NFSU2_TR(0x440cff);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B440d01:{NFSU2_TR(0x440d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440d03:{NFSU2_TR(0x440d03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440cf0u);}goto L440cf0;}}
}
B440d05:L440d05:{c.instructions+=1;NFSU2_TR(0x440d05);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B440d07:L440d07:{c.instructions+=2;NFSU2_TR(0x440d07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440d08:{NFSU2_TR(0x440d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440d0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440d0d:L440d0d:{c.instructions+=8;NFSU2_TR(0x440d0d);
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
B440d10:{NFSU2_TR(0x440d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440d11:{NFSU2_TR(0x440d11);
__builtin_memmove((R+0),(R+24),4);
}
B440d13:{NFSU2_TR(0x440d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440d14:{NFSU2_TR(0x440d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440d15:{NFSU2_TR(0x440d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440d16:{NFSU2_TR(0x440d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440d17:{NFSU2_TR(0x440d17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440d1a:L440d1a:{c.instructions+=5;NFSU2_TR(0x440d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440d1d:{NFSU2_TR(0x440d1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B440d20:{NFSU2_TR(0x440d20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440d21:{NFSU2_TR(0x440d21);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B440d25:{NFSU2_TR(0x440d25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440d2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440d2a:L440d2a:{c.instructions+=8;NFSU2_TR(0x440d2a);
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
B440d2d:{NFSU2_TR(0x440d2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440d2e:{NFSU2_TR(0x440d2e);
__builtin_memmove((R+0),(R+24),4);
}
B440d30:{NFSU2_TR(0x440d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440d31:{NFSU2_TR(0x440d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440d32:{NFSU2_TR(0x440d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B440d33:{NFSU2_TR(0x440d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440d34:{NFSU2_TR(0x440d34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440d40:L440d40:{c.instructions+=5;NFSU2_TR(0x440d40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440d41:{NFSU2_TR(0x440d41);
__builtin_memmove((R+24),(R+4),4);
}
B440d43:{NFSU2_TR(0x440d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440d46:{NFSU2_TR(0x440d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440d48:{NFSU2_TR(0x440d48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440d63;}}
}
B440d4a:L440d4a:{c.instructions+=2;NFSU2_TR(0x440d4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B440d4e:{NFSU2_TR(0x440d4e);
if(r1(R+518)){{goto L440d63;}}
}
B440d50:L440d50:{c.instructions+=8;NFSU2_TR(0x440d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440d53:{NFSU2_TR(0x440d53);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B440d54:{NFSU2_TR(0x440d54);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B440d57:{NFSU2_TR(0x440d57);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B440d59:{NFSU2_TR(0x440d59);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B440d5c:{NFSU2_TR(0x440d5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B440d5d:{NFSU2_TR(0x440d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440d5e:{NFSU2_TR(0x440d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440d63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440bb0u);}goto L440bb0;}
}
B440d63:L440d63:{c.instructions+=5;NFSU2_TR(0x440d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440d66:{NFSU2_TR(0x440d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440d69:{NFSU2_TR(0x440d69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B440d6a:{NFSU2_TR(0x440d6a);
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
B440d6c:{NFSU2_TR(0x440d6c);
if(r1(R+518)){{goto L440d96;}}
}
B440d6e:L440d6e:{c.instructions+=4;NFSU2_TR(0x440d6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B440d70:{NFSU2_TR(0x440d70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440d71:{NFSU2_TR(0x440d71);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B440d74:{NFSU2_TR(0x440d74);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440d79;}}
}
B440d76:L440d76:{c.instructions+=1;NFSU2_TR(0x440d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440d79:L440d79:{c.instructions+=4;NFSU2_TR(0x440d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440d7c:{NFSU2_TR(0x440d7c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B440d80:{NFSU2_TR(0x440d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440d83:{NFSU2_TR(0x440d83);
if(r1(R+518)){{goto L440d95;}}
}
B440d85:L440d85:{c.instructions+=4;NFSU2_TR(0x440d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440d88:{NFSU2_TR(0x440d88);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B440d8b:{NFSU2_TR(0x440d8b);
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
B440d8d:{NFSU2_TR(0x440d8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440d95;}}
}
B440d8f:L440d8f:{c.instructions+=2;NFSU2_TR(0x440d8f);
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
B440d91:{NFSU2_TR(0x440d91);
__builtin_memmove((R+28),(R+8),4);
}
B440d93:L440d93:{c.instructions+=1;NFSU2_TR(0x440d93);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L440d95;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440d93u);}goto L440d93;}
}
B440d95:L440d95:{c.instructions+=1;NFSU2_TR(0x440d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440d96:L440d96:{c.instructions+=3;NFSU2_TR(0x440d96);
__builtin_memmove((R+0),(R+8),4);
}
B440d98:{NFSU2_TR(0x440d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440d99:{NFSU2_TR(0x440d99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440da0:L440da0:{c.instructions+=4;NFSU2_TR(0x440da0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440da1:{NFSU2_TR(0x440da1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440da5:{NFSU2_TR(0x440da5);
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
B440da7:{NFSU2_TR(0x440da7);
if(r1(R+518)){{goto L440de3;}}
}
B440da9:L440da9:{c.instructions+=2;NFSU2_TR(0x440da9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B440dac:{NFSU2_TR(0x440dac);
if(r1(R+518)){{goto L440db8;}}
}
B440dae:L440dae:{c.instructions+=4;NFSU2_TR(0x440dae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B440db0:{NFSU2_TR(0x440db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440db3:{NFSU2_TR(0x440db3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B440db5:{NFSU2_TR(0x440db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440db8:L440db8:{c.instructions+=2;NFSU2_TR(0x440db8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B440dbc:{NFSU2_TR(0x440dbc);
if(r1(R+518)){{goto L440dce;}}
}
B440dbe:L440dbe:{c.instructions+=3;NFSU2_TR(0x440dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440dc1:{NFSU2_TR(0x440dc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440dc3:{NFSU2_TR(0x440dc3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L440dce;}}
}
B440dc5:L440dc5:{c.instructions+=3;NFSU2_TR(0x440dc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440dc7:{NFSU2_TR(0x440dc7);
__builtin_memmove((R+4),(R+24),4);
}
B440dc9:{NFSU2_TR(0x440dc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440dceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440c30u);}goto L440c30;}
}
B440dce:L440dce:{c.instructions+=2;NFSU2_TR(0x440dce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440dcf:{NFSU2_TR(0x440dcf);
}
B440dd0:L440dd0:{c.instructions+=3;NFSU2_TR(0x440dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B440dd3:{NFSU2_TR(0x440dd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440dd4:{NFSU2_TR(0x440dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440dd9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440540u);}goto L440540;}
}
B440dd9:L440dd9:{c.instructions+=4;NFSU2_TR(0x440dd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440ddc:{NFSU2_TR(0x440ddc);
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
B440dde:{NFSU2_TR(0x440dde);
__builtin_memmove((R+24),(R+28),4);
}
B440de0:{NFSU2_TR(0x440de0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440dd0u);}goto L440dd0;}}
}
B440de2:L440de2:{c.instructions+=1;NFSU2_TR(0x440de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440de3:L440de3:{c.instructions+=2;NFSU2_TR(0x440de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440de4:{NFSU2_TR(0x440de4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440df0:L440df0:{c.instructions+=11;NFSU2_TR(0x440df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440df4:{NFSU2_TR(0x440df4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440df8:{NFSU2_TR(0x440df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440dfc:{NFSU2_TR(0x440dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440dfd:{NFSU2_TR(0x440dfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440e01:{NFSU2_TR(0x440e01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e02:{NFSU2_TR(0x440e02);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B440e05:{NFSU2_TR(0x440e05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e06:{NFSU2_TR(0x440e06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B440e09:{NFSU2_TR(0x440e09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e0a:{NFSU2_TR(0x440e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440e0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440b40u);}goto L440b40;}
}
B440e0f:L440e0f:{c.instructions+=3;NFSU2_TR(0x440e0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B440e12:{NFSU2_TR(0x440e12);
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
B440e14:{NFSU2_TR(0x440e14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440e17;}}
}
B440e16:L440e16:{c.instructions+=1;NFSU2_TR(0x440e16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440e17:L440e17:{c.instructions+=2;NFSU2_TR(0x440e17);
u8 U[14];
__builtin_memmove((U+6),gp(0x828530),4);
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
B440e1e:{NFSU2_TR(0x440e1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440e36;}}
}
B440e20:L440e20:{c.instructions+=5;NFSU2_TR(0x440e20);
__builtin_memmove((R+4),gp(0x828538),4);
}
B440e26:{NFSU2_TR(0x440e26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B440e28:{NFSU2_TR(0x440e28);
__builtin_memmove(gp(0x828538),(R+0),4);
}
B440e2d:{NFSU2_TR(0x440e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440e30:{NFSU2_TR(0x440e30);
u8 U[4];
w4(U+0,u32(0x828534ull));
s4(u32(r4(R+0)),r4(U+0));
}
B440e36:L440e36:{c.instructions+=1;NFSU2_TR(0x440e36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440e40:L440e40:{c.instructions+=4;NFSU2_TR(0x440e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440e44:{NFSU2_TR(0x440e44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e45:{NFSU2_TR(0x440e45);
w4(R+4,u32(0x828530ull));
}
B440e4a:{NFSU2_TR(0x440e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440e4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440da0u);}goto L440da0;}
}
B440e4f:L440e4f:{c.instructions+=1;NFSU2_TR(0x440e4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440e50:L440e50:{c.instructions+=2;NFSU2_TR(0x440e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440e54:{NFSU2_TR(0x440e54);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440d40u);}goto L440d40;}
}
B440e60:L440e60:{c.instructions+=3;NFSU2_TR(0x440e60);
__builtin_memmove((R+0),gp(0x8284f0),4);
}
B440e65:{NFSU2_TR(0x440e65);
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
B440e67:{NFSU2_TR(0x440e67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440ebc;}}
}
B440e69:L440e69:{c.instructions+=6;NFSU2_TR(0x440e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440e6d:{NFSU2_TR(0x440e6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e6f:{NFSU2_TR(0x440e6f);
u8 U[4];
w4(U+0,u32(0x786f40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e74:{NFSU2_TR(0x440e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e75:{NFSU2_TR(0x440e75);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440e77:{NFSU2_TR(0x440e77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440e7cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440b40u);}goto L440b40;}
}
B440e7c:L440e7c:{c.instructions+=3;NFSU2_TR(0x440e7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B440e7f:{NFSU2_TR(0x440e7f);
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
B440e81:{NFSU2_TR(0x440e81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440e8e;}}
}
B440e83:L440e83:{c.instructions+=3;NFSU2_TR(0x440e83);
__builtin_memmove(gp(0x8284f0),(R+0),4);
}
B440e88:{NFSU2_TR(0x440e88);
__builtin_memmove(gp(0x8284f4),(R+0),4);
}
B440e8d:{NFSU2_TR(0x440e8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440e8e:L440e8e:{c.instructions+=2;NFSU2_TR(0x440e8e);
u8 U[14];
__builtin_memmove((U+6),gp(0x828530),4);
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
B440e95:{NFSU2_TR(0x440e95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440ead;}}
}
B440e97:L440e97:{c.instructions+=5;NFSU2_TR(0x440e97);
__builtin_memmove((R+4),gp(0x828538),4);
}
B440e9d:{NFSU2_TR(0x440e9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B440e9f:{NFSU2_TR(0x440e9f);
__builtin_memmove(gp(0x828538),(R+0),4);
}
B440ea4:{NFSU2_TR(0x440ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440ea7:{NFSU2_TR(0x440ea7);
u8 U[4];
w4(U+0,u32(0x828534ull));
s4(u32(r4(R+0)),r4(U+0));
}
B440ead:L440ead:{c.instructions+=2;NFSU2_TR(0x440ead);
__builtin_memmove(gp(0x8284f0),(R+0),4);
}
B440eb2:{NFSU2_TR(0x440eb2);
s4(0x8284f4,u32(0x0ull));
}
B440ebc:L440ebc:{c.instructions+=1;NFSU2_TR(0x440ebc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440ec0:L440ec0:{c.instructions+=3;NFSU2_TR(0x440ec0);
__builtin_memmove((R+0),gp(0x8284f0),4);
}
B440ec5:{NFSU2_TR(0x440ec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B440ec7:{NFSU2_TR(0x440ec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440ed6;}}
}
B440ec9:L440ec9:{c.instructions+=2;NFSU2_TR(0x440ec9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440ece:{NFSU2_TR(0x440ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440ed3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440e60u);}goto L440e60;}
}
B440ed3:L440ed3:{c.instructions+=1;NFSU2_TR(0x440ed3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B440ed6:L440ed6:{c.instructions+=2;NFSU2_TR(0x440ed6);
__builtin_memmove((R+4),gp(0x8284f0),4);
}
B440edc:{NFSU2_TR(0x440edc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440d40u);}goto L440d40;}
}
B440ef0:L440ef0:{c.instructions+=17;NFSU2_TR(0x440ef0);
__builtin_memmove((R+4),gp(0x8284f0),4);
}
B440ef6:{NFSU2_TR(0x440ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440ef9:{NFSU2_TR(0x440ef9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440efa:{NFSU2_TR(0x440efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440efe:{NFSU2_TR(0x440efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B440f01:{NFSU2_TR(0x440f01);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B440f04:{NFSU2_TR(0x440f04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440f05:{NFSU2_TR(0x440f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B440f07:{NFSU2_TR(0x440f07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B440f09:{NFSU2_TR(0x440f09);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B440f0a:{NFSU2_TR(0x440f0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B440f0c:{NFSU2_TR(0x440f0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B440f0e:{NFSU2_TR(0x440f0e);
__builtin_memmove((R+0),gp(0x8284f4),4);
}
B440f13:{NFSU2_TR(0x440f13);
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
B440f15:{NFSU2_TR(0x440f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B440f16:{NFSU2_TR(0x440f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440f17:{NFSU2_TR(0x440f17);
if(r1(R+518)){{goto L440f49;}}
}
B440f19:L440f19:{c.instructions+=3;NFSU2_TR(0x440f19);
__builtin_memmove((R+0),gp(0x8284f0),4);
}
B440f1e:{NFSU2_TR(0x440f1e);
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
B440f20:{NFSU2_TR(0x440f20);
if(r1(R+518)){{goto L440f49;}}
}
B440f22:L440f22:{c.instructions+=3;NFSU2_TR(0x440f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440f25:{NFSU2_TR(0x440f25);
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
B440f27:{NFSU2_TR(0x440f27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L440f3f;}}
}
B440f29:L440f29:{c.instructions+=3;NFSU2_TR(0x440f29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440f2a:{NFSU2_TR(0x440f2a);
w4(R+4,u32(0x828530ull));
}
B440f2f:{NFSU2_TR(0x440f2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440f34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x440da0u);}goto L440da0;}
}
B440f34:L440f34:{c.instructions+=2;NFSU2_TR(0x440f34);
s4(0x8284f0,u32(0x0ull));
}
B440f3e:{NFSU2_TR(0x440f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440f3f:L440f3f:{c.instructions+=1;NFSU2_TR(0x440f3f);
s4(0x8284f4,u32(0x1ull));
}
B440f49:L440f49:{c.instructions+=1;NFSU2_TR(0x440f49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440f50:L440f50:{c.instructions+=5;NFSU2_TR(0x440f50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440f51:{NFSU2_TR(0x440f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440f52:{NFSU2_TR(0x440f52);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B440f56:{NFSU2_TR(0x440f56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440f57:{NFSU2_TR(0x440f57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440f5cull));
TAIL_STATIC(0x43c2b0u,43c);
}
B440f5c:L440f5c:{c.instructions+=3;NFSU2_TR(0x440f5c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440f60:{NFSU2_TR(0x440f60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440f61:{NFSU2_TR(0x440f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x440f66ull));
TAIL_STATIC(0x43c370u,43c);
}
B440f66:L440f66:{c.instructions+=5;NFSU2_TR(0x440f66);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B440f6a:{NFSU2_TR(0x440f6a);
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
B440f6d:{NFSU2_TR(0x440f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B440f6e:{NFSU2_TR(0x440f6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B440f6f:{NFSU2_TR(0x440f6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440f70:L440f70:{c.instructions+=17;NFSU2_TR(0x440f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440f74:{NFSU2_TR(0x440f74);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440f77:{NFSU2_TR(0x440f77);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440f7a:{NFSU2_TR(0x440f7a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440f7c:{NFSU2_TR(0x440f7c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B440f7e:{NFSU2_TR(0x440f7e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B440f80:{NFSU2_TR(0x440f80);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B440f82:{NFSU2_TR(0x440f82);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B440f84:{NFSU2_TR(0x440f84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B440f86:{NFSU2_TR(0x440f86);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B440f88:{NFSU2_TR(0x440f88);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B440f8a:{NFSU2_TR(0x440f8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B440f8c:{NFSU2_TR(0x440f8c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B440f8e:{NFSU2_TR(0x440f8e);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B440f90:{NFSU2_TR(0x440f90);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B440f92:{NFSU2_TR(0x440f92);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B440f94:{NFSU2_TR(0x440f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440fa0:L440fa0:{c.instructions+=17;NFSU2_TR(0x440fa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B440fa1:{NFSU2_TR(0x440fa1);
__builtin_memmove((R+20),(R+16),4);
}
B440fa3:{NFSU2_TR(0x440fa3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440fa6:{NFSU2_TR(0x440fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B440fa9:{NFSU2_TR(0x440fa9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B440fab:{NFSU2_TR(0x440fab);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B440fae:{NFSU2_TR(0x440fae);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440fb1:{NFSU2_TR(0x440fb1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B440fb4:{NFSU2_TR(0x440fb4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440fb7:{NFSU2_TR(0x440fb7);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B440fba:{NFSU2_TR(0x440fba);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B440fbc:{NFSU2_TR(0x440fbc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440fbe:{NFSU2_TR(0x440fbe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440fc1:{NFSU2_TR(0x440fc1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440fc4:{NFSU2_TR(0x440fc4);
__builtin_memmove((R+16),(R+20),4);
}
B440fc6:{NFSU2_TR(0x440fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B440fc7:{NFSU2_TR(0x440fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B440fd0:L440fd0:{c.instructions+=13;NFSU2_TR(0x440fd0);
__builtin_memmove((R+0),(R+4),4);
}
B440fd2:{NFSU2_TR(0x440fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B440fd6:{NFSU2_TR(0x440fd6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440fd9:{NFSU2_TR(0x440fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B440fdc:{NFSU2_TR(0x440fdc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B440fdf:{NFSU2_TR(0x440fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B440fe1:{NFSU2_TR(0x440fe1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B440fe3:{NFSU2_TR(0x440fe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440fe7:{NFSU2_TR(0x440fe7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440fea:{NFSU2_TR(0x440fea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B440fec:{NFSU2_TR(0x440fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B440fef:{NFSU2_TR(0x440fef);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B440ff2:{NFSU2_TR(0x440ff2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x440,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
