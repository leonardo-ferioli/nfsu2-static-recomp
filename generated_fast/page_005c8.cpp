#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c9(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 page_5c8(Cpu& c){return body_5c8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c8000:goto L5c8000;
case 0x5c8005:goto L5c8005;
case 0x5c8007:c.instructions+=2;goto B5c8007;
case 0x5c8008:c.instructions+=1;goto B5c8008;
case 0x5c800d:goto L5c800d;
case 0x5c8011:c.instructions+=2;goto B5c8011;
case 0x5c8012:c.instructions+=1;goto B5c8012;
case 0x5c8017:goto L5c8017;
case 0x5c801b:c.instructions+=9;goto B5c801b;
case 0x5c801e:c.instructions+=8;goto B5c801e;
case 0x5c801f:c.instructions+=7;goto B5c801f;
case 0x5c8025:c.instructions+=6;goto B5c8025;
case 0x5c8029:c.instructions+=5;goto B5c8029;
case 0x5c802d:c.instructions+=4;goto B5c802d;
case 0x5c8031:c.instructions+=3;goto B5c8031;
case 0x5c8035:c.instructions+=2;goto B5c8035;
case 0x5c8039:c.instructions+=1;goto B5c8039;
case 0x5c803e:goto L5c803e;
case 0x5c8042:c.instructions+=16;goto B5c8042;
case 0x5c8046:c.instructions+=15;goto B5c8046;
case 0x5c8048:c.instructions+=14;goto B5c8048;
case 0x5c804c:c.instructions+=13;goto B5c804c;
case 0x5c804f:c.instructions+=12;goto B5c804f;
case 0x5c8053:c.instructions+=11;goto B5c8053;
case 0x5c8055:c.instructions+=10;goto B5c8055;
case 0x5c8059:c.instructions+=9;goto B5c8059;
case 0x5c805c:c.instructions+=8;goto B5c805c;
case 0x5c8063:c.instructions+=7;goto B5c8063;
case 0x5c806a:c.instructions+=6;goto B5c806a;
case 0x5c806c:c.instructions+=5;goto B5c806c;
case 0x5c806f:c.instructions+=4;goto B5c806f;
case 0x5c8076:c.instructions+=3;goto B5c8076;
case 0x5c8079:c.instructions+=2;goto B5c8079;
case 0x5c807a:c.instructions+=1;goto B5c807a;
case 0x5c807f:goto L5c807f;
case 0x5c8083:c.instructions+=2;goto B5c8083;
case 0x5c8084:c.instructions+=1;goto B5c8084;
case 0x5c8089:goto L5c8089;
case 0x5c808d:c.instructions+=5;goto B5c808d;
case 0x5c8090:c.instructions+=4;goto B5c8090;
case 0x5c8096:c.instructions+=3;goto B5c8096;
case 0x5c8098:c.instructions+=2;goto B5c8098;
case 0x5c809b:c.instructions+=1;goto B5c809b;
case 0x5c809d:goto L5c809d;
case 0x5c80a3:c.instructions+=1;goto B5c80a3;
case 0x5c80a5:goto L5c80a5;
case 0x5c80a7:c.instructions+=1;goto B5c80a7;
case 0x5c80ad:goto L5c80ad;
case 0x5c80b0:c.instructions+=9;goto B5c80b0;
case 0x5c80b1:c.instructions+=8;goto B5c80b1;
case 0x5c80b3:c.instructions+=7;goto B5c80b3;
case 0x5c80b4:c.instructions+=6;goto B5c80b4;
case 0x5c80ba:c.instructions+=5;goto B5c80ba;
case 0x5c80bb:c.instructions+=4;goto B5c80bb;
case 0x5c80be:c.instructions+=3;goto B5c80be;
case 0x5c80c1:c.instructions+=2;goto B5c80c1;
case 0x5c80c4:c.instructions+=1;goto B5c80c4;
case 0x5c80c9:goto L5c80c9;
case 0x5c80cb:c.instructions+=1;goto B5c80cb;
case 0x5c80ce:goto L5c80ce;
case 0x5c80d4:goto L5c80d4;
case 0x5c80db:goto L5c80db;
case 0x5c80e1:c.instructions+=12;goto B5c80e1;
case 0x5c80e4:c.instructions+=11;goto B5c80e4;
case 0x5c80ea:c.instructions+=10;goto B5c80ea;
case 0x5c80f0:c.instructions+=9;goto B5c80f0;
case 0x5c80f6:c.instructions+=8;goto B5c80f6;
case 0x5c80fc:c.instructions+=7;goto B5c80fc;
case 0x5c8102:c.instructions+=6;goto B5c8102;
case 0x5c8108:c.instructions+=5;goto B5c8108;
case 0x5c810e:c.instructions+=4;goto B5c810e;
case 0x5c8114:c.instructions+=3;goto B5c8114;
case 0x5c811a:c.instructions+=2;goto B5c811a;
case 0x5c8120:c.instructions+=1;goto B5c8120;
case 0x5c8125:goto L5c8125;
case 0x5c812b:c.instructions+=12;goto B5c812b;
case 0x5c812e:c.instructions+=11;goto B5c812e;
case 0x5c8134:c.instructions+=10;goto B5c8134;
case 0x5c813a:c.instructions+=9;goto B5c813a;
case 0x5c8140:c.instructions+=8;goto B5c8140;
case 0x5c8146:c.instructions+=7;goto B5c8146;
case 0x5c814c:c.instructions+=6;goto B5c814c;
case 0x5c8152:c.instructions+=5;goto B5c8152;
case 0x5c8158:c.instructions+=4;goto B5c8158;
case 0x5c815e:c.instructions+=3;goto B5c815e;
case 0x5c8164:c.instructions+=2;goto B5c8164;
case 0x5c816a:c.instructions+=1;goto B5c816a;
case 0x5c816f:goto L5c816f;
case 0x5c8175:c.instructions+=12;goto B5c8175;
case 0x5c817b:c.instructions+=11;goto B5c817b;
case 0x5c8181:c.instructions+=10;goto B5c8181;
case 0x5c8187:c.instructions+=9;goto B5c8187;
case 0x5c818d:c.instructions+=8;goto B5c818d;
case 0x5c8193:c.instructions+=7;goto B5c8193;
case 0x5c8199:c.instructions+=6;goto B5c8199;
case 0x5c819f:c.instructions+=5;goto B5c819f;
case 0x5c81a5:c.instructions+=4;goto B5c81a5;
case 0x5c81ab:c.instructions+=3;goto B5c81ab;
case 0x5c81b1:c.instructions+=2;goto B5c81b1;
case 0x5c81b7:c.instructions+=1;goto B5c81b7;
case 0x5c81bc:goto L5c81bc;
case 0x5c81c2:c.instructions+=12;goto B5c81c2;
case 0x5c81c8:c.instructions+=11;goto B5c81c8;
case 0x5c81ce:c.instructions+=10;goto B5c81ce;
case 0x5c81d4:c.instructions+=9;goto B5c81d4;
case 0x5c81da:c.instructions+=8;goto B5c81da;
case 0x5c81e0:c.instructions+=7;goto B5c81e0;
case 0x5c81e6:c.instructions+=6;goto B5c81e6;
case 0x5c81ec:c.instructions+=5;goto B5c81ec;
case 0x5c81f2:c.instructions+=4;goto B5c81f2;
case 0x5c81f8:c.instructions+=3;goto B5c81f8;
case 0x5c81fe:c.instructions+=2;goto B5c81fe;
case 0x5c8204:c.instructions+=1;goto B5c8204;
case 0x5c8206:goto L5c8206;
case 0x5c820c:c.instructions+=8;goto B5c820c;
case 0x5c8212:c.instructions+=7;goto B5c8212;
case 0x5c8218:c.instructions+=6;goto B5c8218;
case 0x5c821e:c.instructions+=5;goto B5c821e;
case 0x5c8224:c.instructions+=4;goto B5c8224;
case 0x5c822a:c.instructions+=3;goto B5c822a;
case 0x5c8230:c.instructions+=2;goto B5c8230;
case 0x5c8236:c.instructions+=1;goto B5c8236;
case 0x5c8238:goto L5c8238;
case 0x5c823e:c.instructions+=11;goto B5c823e;
case 0x5c8244:c.instructions+=10;goto B5c8244;
case 0x5c824a:c.instructions+=9;goto B5c824a;
case 0x5c8250:c.instructions+=8;goto B5c8250;
case 0x5c8256:c.instructions+=7;goto B5c8256;
case 0x5c825c:c.instructions+=6;goto B5c825c;
case 0x5c8262:c.instructions+=5;goto B5c8262;
case 0x5c8268:c.instructions+=4;goto B5c8268;
case 0x5c826e:c.instructions+=3;goto B5c826e;
case 0x5c8274:c.instructions+=2;goto B5c8274;
case 0x5c827a:c.instructions+=1;goto B5c827a;
case 0x5c8280:goto L5c8280;
case 0x5c8283:c.instructions+=35;goto B5c8283;
case 0x5c8286:c.instructions+=34;goto B5c8286;
case 0x5c828a:c.instructions+=33;goto B5c828a;
case 0x5c828d:c.instructions+=32;goto B5c828d;
case 0x5c8290:c.instructions+=31;goto B5c8290;
case 0x5c8292:c.instructions+=30;goto B5c8292;
case 0x5c8294:c.instructions+=29;goto B5c8294;
case 0x5c8296:c.instructions+=28;goto B5c8296;
case 0x5c8298:c.instructions+=27;goto B5c8298;
case 0x5c829a:c.instructions+=26;goto B5c829a;
case 0x5c829c:c.instructions+=25;goto B5c829c;
case 0x5c829e:c.instructions+=24;goto B5c829e;
case 0x5c82a0:c.instructions+=23;goto B5c82a0;
case 0x5c82a2:c.instructions+=22;goto B5c82a2;
case 0x5c82a4:c.instructions+=21;goto B5c82a4;
case 0x5c82a6:c.instructions+=20;goto B5c82a6;
case 0x5c82a8:c.instructions+=19;goto B5c82a8;
case 0x5c82aa:c.instructions+=18;goto B5c82aa;
case 0x5c82b0:c.instructions+=17;goto B5c82b0;
case 0x5c82b2:c.instructions+=16;goto B5c82b2;
case 0x5c82b4:c.instructions+=15;goto B5c82b4;
case 0x5c82b6:c.instructions+=14;goto B5c82b6;
case 0x5c82b8:c.instructions+=13;goto B5c82b8;
case 0x5c82bb:c.instructions+=12;goto B5c82bb;
case 0x5c82bd:c.instructions+=11;goto B5c82bd;
case 0x5c82bf:c.instructions+=10;goto B5c82bf;
case 0x5c82c5:c.instructions+=9;goto B5c82c5;
case 0x5c82c6:c.instructions+=8;goto B5c82c6;
case 0x5c82c9:c.instructions+=7;goto B5c82c9;
case 0x5c82cf:c.instructions+=6;goto B5c82cf;
case 0x5c82d1:c.instructions+=5;goto B5c82d1;
case 0x5c82d7:c.instructions+=4;goto B5c82d7;
case 0x5c82dd:c.instructions+=3;goto B5c82dd;
case 0x5c82e3:c.instructions+=2;goto B5c82e3;
case 0x5c82e9:c.instructions+=1;goto B5c82e9;
case 0x5c82ef:goto L5c82ef;
case 0x5c82f0:c.instructions+=5;goto B5c82f0;
case 0x5c82f1:c.instructions+=4;goto B5c82f1;
case 0x5c82f2:c.instructions+=3;goto B5c82f2;
case 0x5c82f3:c.instructions+=2;goto B5c82f3;
case 0x5c82f6:c.instructions+=1;goto B5c82f6;
case 0x5c8320:goto L5c8320;
case 0x5c8325:c.instructions+=2;goto B5c8325;
case 0x5c8327:c.instructions+=1;goto B5c8327;
case 0x5c832d:goto L5c832d;
case 0x5c8332:c.instructions+=5;goto B5c8332;
case 0x5c8334:c.instructions+=4;goto B5c8334;
case 0x5c8335:c.instructions+=3;goto B5c8335;
case 0x5c8339:c.instructions+=2;goto B5c8339;
case 0x5c833a:c.instructions+=1;goto B5c833a;
case 0x5c833c:goto L5c833c;
case 0x5c833f:c.instructions+=2;goto B5c833f;
case 0x5c8346:c.instructions+=1;goto B5c8346;
case 0x5c834c:goto L5c834c;
case 0x5c834f:c.instructions+=3;goto B5c834f;
case 0x5c8352:c.instructions+=2;goto B5c8352;
case 0x5c8355:c.instructions+=1;goto B5c8355;
case 0x5c835b:goto L5c835b;
case 0x5c8362:c.instructions+=1;goto B5c8362;
case 0x5c8369:goto L5c8369;
case 0x5c836e:c.instructions+=2;goto B5c836e;
case 0x5c8370:c.instructions+=1;goto B5c8370;
case 0x5c8376:goto L5c8376;
case 0x5c837c:c.instructions+=2;goto B5c837c;
case 0x5c837d:c.instructions+=1;goto B5c837d;
case 0x5c8382:goto L5c8382;
case 0x5c8388:c.instructions+=4;goto B5c8388;
case 0x5c838e:c.instructions+=3;goto B5c838e;
case 0x5c8391:c.instructions+=2;goto B5c8391;
case 0x5c8393:c.instructions+=1;goto B5c8393;
case 0x5c8395:goto L5c8395;
case 0x5c8397:c.instructions+=5;goto B5c8397;
case 0x5c8398:c.instructions+=4;goto B5c8398;
case 0x5c839a:c.instructions+=3;goto B5c839a;
case 0x5c839b:c.instructions+=2;goto B5c839b;
case 0x5c839d:c.instructions+=1;goto B5c839d;
case 0x5c839f:goto L5c839f;
case 0x5c83a5:c.instructions+=8;goto B5c83a5;
case 0x5c83ab:c.instructions+=7;goto B5c83ab;
case 0x5c83ac:c.instructions+=6;goto B5c83ac;
case 0x5c83b2:c.instructions+=5;goto B5c83b2;
case 0x5c83b8:c.instructions+=4;goto B5c83b8;
case 0x5c83b9:c.instructions+=3;goto B5c83b9;
case 0x5c83bf:c.instructions+=2;goto B5c83bf;
case 0x5c83c1:c.instructions+=1;goto B5c83c1;
case 0x5c83c3:goto L5c83c3;
case 0x5c83c5:c.instructions+=5;goto B5c83c5;
case 0x5c83c6:c.instructions+=4;goto B5c83c6;
case 0x5c83c8:c.instructions+=3;goto B5c83c8;
case 0x5c83c9:c.instructions+=2;goto B5c83c9;
case 0x5c83cb:c.instructions+=1;goto B5c83cb;
case 0x5c83cd:goto L5c83cd;
case 0x5c83ce:c.instructions+=3;goto B5c83ce;
case 0x5c83cf:c.instructions+=2;goto B5c83cf;
case 0x5c83d3:c.instructions+=1;goto B5c83d3;
case 0x5c83d8:goto L5c83d8;
case 0x5c83dd:c.instructions+=3;goto B5c83dd;
case 0x5c83e3:c.instructions+=2;goto B5c83e3;
case 0x5c83ea:c.instructions+=1;goto B5c83ea;
case 0x5c83f0:goto L5c83f0;
case 0x5c83f1:c.instructions+=1;goto B5c83f1;
case 0x5c83f6:goto L5c83f6;
case 0x5c83fc:c.instructions+=5;goto B5c83fc;
case 0x5c8402:c.instructions+=4;goto B5c8402;
case 0x5c8405:c.instructions+=3;goto B5c8405;
case 0x5c8407:c.instructions+=2;goto B5c8407;
case 0x5c8409:c.instructions+=1;goto B5c8409;
case 0x5c8410:goto L5c8410;
case 0x5c8412:c.instructions+=5;goto B5c8412;
case 0x5c8413:c.instructions+=4;goto B5c8413;
case 0x5c8415:c.instructions+=3;goto B5c8415;
case 0x5c8416:c.instructions+=2;goto B5c8416;
case 0x5c8418:c.instructions+=1;goto B5c8418;
case 0x5c841a:goto L5c841a;
case 0x5c8420:c.instructions+=12;goto B5c8420;
case 0x5c8426:c.instructions+=11;goto B5c8426;
case 0x5c842a:c.instructions+=10;goto B5c842a;
case 0x5c8430:c.instructions+=9;goto B5c8430;
case 0x5c8436:c.instructions+=8;goto B5c8436;
case 0x5c8437:c.instructions+=7;goto B5c8437;
case 0x5c843d:c.instructions+=6;goto B5c843d;
case 0x5c8443:c.instructions+=5;goto B5c8443;
case 0x5c8444:c.instructions+=4;goto B5c8444;
case 0x5c844a:c.instructions+=3;goto B5c844a;
case 0x5c844c:c.instructions+=2;goto B5c844c;
case 0x5c844e:c.instructions+=1;goto B5c844e;
case 0x5c8450:goto L5c8450;
case 0x5c8452:c.instructions+=5;goto B5c8452;
case 0x5c8453:c.instructions+=4;goto B5c8453;
case 0x5c8455:c.instructions+=3;goto B5c8455;
case 0x5c8456:c.instructions+=2;goto B5c8456;
case 0x5c8458:c.instructions+=1;goto B5c8458;
case 0x5c845a:goto L5c845a;
case 0x5c845b:c.instructions+=3;goto B5c845b;
case 0x5c845c:c.instructions+=2;goto B5c845c;
case 0x5c8460:c.instructions+=1;goto B5c8460;
case 0x5c8465:goto L5c8465;
case 0x5c846a:c.instructions+=3;goto B5c846a;
case 0x5c8470:c.instructions+=2;goto B5c8470;
case 0x5c8477:c.instructions+=1;goto B5c8477;
case 0x5c847d:goto L5c847d;
case 0x5c847e:c.instructions+=1;goto B5c847e;
case 0x5c8483:goto L5c8483;
case 0x5c8489:c.instructions+=4;goto B5c8489;
case 0x5c848f:c.instructions+=3;goto B5c848f;
case 0x5c8492:c.instructions+=2;goto B5c8492;
case 0x5c8494:c.instructions+=1;goto B5c8494;
case 0x5c8496:goto L5c8496;
case 0x5c8498:c.instructions+=5;goto B5c8498;
case 0x5c8499:c.instructions+=4;goto B5c8499;
case 0x5c849b:c.instructions+=3;goto B5c849b;
case 0x5c849c:c.instructions+=2;goto B5c849c;
case 0x5c849e:c.instructions+=1;goto B5c849e;
case 0x5c84a0:goto L5c84a0;
case 0x5c84a6:c.instructions+=14;goto B5c84a6;
case 0x5c84ac:c.instructions+=13;goto B5c84ac;
case 0x5c84b0:c.instructions+=12;goto B5c84b0;
case 0x5c84b6:c.instructions+=11;goto B5c84b6;
case 0x5c84bc:c.instructions+=10;goto B5c84bc;
case 0x5c84bf:c.instructions+=9;goto B5c84bf;
case 0x5c84c5:c.instructions+=8;goto B5c84c5;
case 0x5c84c6:c.instructions+=7;goto B5c84c6;
case 0x5c84c7:c.instructions+=6;goto B5c84c7;
case 0x5c84cd:c.instructions+=5;goto B5c84cd;
case 0x5c84d3:c.instructions+=4;goto B5c84d3;
case 0x5c84d9:c.instructions+=3;goto B5c84d9;
case 0x5c84db:c.instructions+=2;goto B5c84db;
case 0x5c84dd:c.instructions+=1;goto B5c84dd;
case 0x5c84e0:goto L5c84e0;
case 0x5c84e2:c.instructions+=5;goto B5c84e2;
case 0x5c84e3:c.instructions+=4;goto B5c84e3;
case 0x5c84e5:c.instructions+=3;goto B5c84e5;
case 0x5c84e6:c.instructions+=2;goto B5c84e6;
case 0x5c84e8:c.instructions+=1;goto B5c84e8;
case 0x5c84ea:goto L5c84ea;
case 0x5c84eb:c.instructions+=3;goto B5c84eb;
case 0x5c84ec:c.instructions+=2;goto B5c84ec;
case 0x5c84f0:c.instructions+=1;goto B5c84f0;
case 0x5c84f5:goto L5c84f5;
case 0x5c84f8:c.instructions+=2;goto B5c84f8;
case 0x5c84fe:c.instructions+=1;goto B5c84fe;
case 0x5c8500:goto L5c8500;
case 0x5c8503:c.instructions+=1;goto B5c8503;
case 0x5c8505:goto L5c8505;
case 0x5c8508:c.instructions+=1;goto B5c8508;
case 0x5c850a:goto L5c850a;
case 0x5c850d:c.instructions+=1;goto B5c850d;
case 0x5c850f:goto L5c850f;
case 0x5c8512:c.instructions+=1;goto B5c8512;
case 0x5c8514:goto L5c8514;
case 0x5c8517:c.instructions+=1;goto B5c8517;
case 0x5c8519:goto L5c8519;
case 0x5c851e:c.instructions+=2;goto B5c851e;
case 0x5c8520:c.instructions+=1;goto B5c8520;
case 0x5c8522:goto L5c8522;
case 0x5c8525:c.instructions+=1;goto B5c8525;
case 0x5c8527:goto L5c8527;
case 0x5c852a:c.instructions+=1;goto B5c852a;
case 0x5c852c:goto L5c852c;
case 0x5c852f:c.instructions+=1;goto B5c852f;
case 0x5c8531:goto L5c8531;
case 0x5c8534:c.instructions+=1;goto B5c8534;
case 0x5c8536:goto L5c8536;
case 0x5c853d:c.instructions+=1;goto B5c853d;
case 0x5c8543:goto L5c8543;
case 0x5c8544:c.instructions+=1;goto B5c8544;
case 0x5c8549:goto L5c8549;
case 0x5c854c:c.instructions+=2;goto B5c854c;
case 0x5c854e:c.instructions+=1;goto B5c854e;
case 0x5c8554:goto L5c8554;
case 0x5c8559:c.instructions+=3;goto B5c8559;
case 0x5c855f:c.instructions+=2;goto B5c855f;
case 0x5c8566:c.instructions+=1;goto B5c8566;
case 0x5c8568:goto L5c8568;
case 0x5c8569:c.instructions+=1;goto B5c8569;
case 0x5c856e:goto L5c856e;
case 0x5c8574:c.instructions+=4;goto B5c8574;
case 0x5c857a:c.instructions+=3;goto B5c857a;
case 0x5c857d:c.instructions+=2;goto B5c857d;
case 0x5c857f:c.instructions+=1;goto B5c857f;
case 0x5c8581:goto L5c8581;
case 0x5c8583:c.instructions+=5;goto B5c8583;
case 0x5c8584:c.instructions+=4;goto B5c8584;
case 0x5c8586:c.instructions+=3;goto B5c8586;
case 0x5c8587:c.instructions+=2;goto B5c8587;
case 0x5c8589:c.instructions+=1;goto B5c8589;
case 0x5c858b:goto L5c858b;
case 0x5c8591:c.instructions+=12;goto B5c8591;
case 0x5c8597:c.instructions+=11;goto B5c8597;
case 0x5c859a:c.instructions+=10;goto B5c859a;
case 0x5c85a0:c.instructions+=9;goto B5c85a0;
case 0x5c85a6:c.instructions+=8;goto B5c85a6;
case 0x5c85a7:c.instructions+=7;goto B5c85a7;
case 0x5c85ad:c.instructions+=6;goto B5c85ad;
case 0x5c85b3:c.instructions+=5;goto B5c85b3;
case 0x5c85b4:c.instructions+=4;goto B5c85b4;
case 0x5c85ba:c.instructions+=3;goto B5c85ba;
case 0x5c85bc:c.instructions+=2;goto B5c85bc;
case 0x5c85be:c.instructions+=1;goto B5c85be;
case 0x5c85c0:goto L5c85c0;
case 0x5c85c2:c.instructions+=5;goto B5c85c2;
case 0x5c85c3:c.instructions+=4;goto B5c85c3;
case 0x5c85c5:c.instructions+=3;goto B5c85c5;
case 0x5c85c6:c.instructions+=2;goto B5c85c6;
case 0x5c85c8:c.instructions+=1;goto B5c85c8;
case 0x5c85ca:goto L5c85ca;
case 0x5c85cb:c.instructions+=3;goto B5c85cb;
case 0x5c85cc:c.instructions+=2;goto B5c85cc;
case 0x5c85d0:c.instructions+=1;goto B5c85d0;
case 0x5c85d5:goto L5c85d5;
case 0x5c85d6:c.instructions+=1;goto B5c85d6;
case 0x5c85d7:goto L5c85d7;
case 0x5c8600:goto L5c8600;
case 0x5c8601:c.instructions+=16;goto B5c8601;
case 0x5c8603:c.instructions+=15;goto B5c8603;
case 0x5c8609:c.instructions+=14;goto B5c8609;
case 0x5c860b:c.instructions+=13;goto B5c860b;
case 0x5c860e:c.instructions+=12;goto B5c860e;
case 0x5c8611:c.instructions+=11;goto B5c8611;
case 0x5c8614:c.instructions+=10;goto B5c8614;
case 0x5c8616:c.instructions+=9;goto B5c8616;
case 0x5c8619:c.instructions+=8;goto B5c8619;
case 0x5c861c:c.instructions+=7;goto B5c861c;
case 0x5c861f:c.instructions+=6;goto B5c861f;
case 0x5c8621:c.instructions+=5;goto B5c8621;
case 0x5c8624:c.instructions+=4;goto B5c8624;
case 0x5c8627:c.instructions+=3;goto B5c8627;
case 0x5c862a:c.instructions+=2;goto B5c862a;
case 0x5c862c:c.instructions+=1;goto B5c862c;
case 0x5c8631:goto L5c8631;
case 0x5c8633:c.instructions+=1;goto B5c8633;
case 0x5c8638:goto L5c8638;
case 0x5c863a:c.instructions+=2;goto B5c863a;
case 0x5c863e:c.instructions+=1;goto B5c863e;
case 0x5c8644:goto L5c8644;
case 0x5c8646:c.instructions+=2;goto B5c8646;
case 0x5c8648:c.instructions+=1;goto B5c8648;
case 0x5c864a:goto L5c864a;
case 0x5c864e:goto L5c864e;
case 0x5c864f:c.instructions+=1;goto B5c864f;
case 0x5c8650:goto L5c8650;
case 0x5c8660:goto L5c8660;
case 0x5c8663:c.instructions+=6;goto B5c8663;
case 0x5c8664:c.instructions+=5;goto B5c8664;
case 0x5c8668:c.instructions+=4;goto B5c8668;
case 0x5c866f:c.instructions+=3;goto B5c866f;
case 0x5c8671:c.instructions+=2;goto B5c8671;
case 0x5c8672:c.instructions+=1;goto B5c8672;
case 0x5c8674:goto L5c8674;
case 0x5c8678:c.instructions+=3;goto B5c8678;
case 0x5c867b:c.instructions+=2;goto B5c867b;
case 0x5c867e:c.instructions+=1;goto B5c867e;
case 0x5c8680:goto L5c8680;
case 0x5c8684:c.instructions+=11;goto B5c8684;
case 0x5c8685:c.instructions+=10;goto B5c8685;
case 0x5c8687:c.instructions+=9;goto B5c8687;
case 0x5c868b:c.instructions+=8;goto B5c868b;
case 0x5c868d:c.instructions+=7;goto B5c868d;
case 0x5c868e:c.instructions+=6;goto B5c868e;
case 0x5c8696:c.instructions+=5;goto B5c8696;
case 0x5c869e:c.instructions+=4;goto B5c869e;
case 0x5c86a6:c.instructions+=3;goto B5c86a6;
case 0x5c86ae:c.instructions+=2;goto B5c86ae;
case 0x5c86b6:c.instructions+=1;goto B5c86b6;
case 0x5c86b9:goto L5c86b9;
case 0x5c86bb:c.instructions+=1;goto B5c86bb;
case 0x5c86bd:goto L5c86bd;
case 0x5c86c2:c.instructions+=1;goto B5c86c2;
case 0x5c86c7:goto L5c86c7;
case 0x5c86ca:c.instructions+=5;goto B5c86ca;
case 0x5c86cb:c.instructions+=4;goto B5c86cb;
case 0x5c86cd:c.instructions+=3;goto B5c86cd;
case 0x5c86ce:c.instructions+=2;goto B5c86ce;
case 0x5c86d1:c.instructions+=1;goto B5c86d1;
case 0x5c86d4:goto L5c86d4;
case 0x5c86d8:c.instructions+=1;goto B5c86d8;
case 0x5c86da:goto L5c86da;
case 0x5c86e1:c.instructions+=3;goto B5c86e1;
case 0x5c86e2:c.instructions+=2;goto B5c86e2;
case 0x5c86e5:c.instructions+=1;goto B5c86e5;
case 0x5c86e7:goto L5c86e7;
case 0x5c86ee:goto L5c86ee;
case 0x5c86ef:c.instructions+=4;goto B5c86ef;
case 0x5c86f4:c.instructions+=3;goto B5c86f4;
case 0x5c86f5:c.instructions+=2;goto B5c86f5;
case 0x5c86f8:c.instructions+=1;goto B5c86f8;
case 0x5c8700:goto L5c8700;
case 0x5c8701:c.instructions+=8;goto B5c8701;
case 0x5c8702:c.instructions+=7;goto B5c8702;
case 0x5c8706:c.instructions+=6;goto B5c8706;
case 0x5c870d:c.instructions+=5;goto B5c870d;
case 0x5c870f:c.instructions+=4;goto B5c870f;
case 0x5c8710:c.instructions+=3;goto B5c8710;
case 0x5c8712:c.instructions+=2;goto B5c8712;
case 0x5c8716:c.instructions+=1;goto B5c8716;
case 0x5c8718:goto L5c8718;
case 0x5c8719:c.instructions+=2;goto B5c8719;
case 0x5c871e:c.instructions+=1;goto B5c871e;
case 0x5c8723:goto L5c8723;
case 0x5c8726:c.instructions+=5;goto B5c8726;
case 0x5c8727:c.instructions+=4;goto B5c8727;
case 0x5c8729:c.instructions+=3;goto B5c8729;
case 0x5c872a:c.instructions+=2;goto B5c872a;
case 0x5c872b:c.instructions+=1;goto B5c872b;
case 0x5c872e:goto L5c872e;
case 0x5c8730:c.instructions+=4;goto B5c8730;
case 0x5c8731:c.instructions+=3;goto B5c8731;
case 0x5c8732:c.instructions+=2;goto B5c8732;
case 0x5c8733:c.instructions+=1;goto B5c8733;
case 0x5c8736:goto L5c8736;
case 0x5c8738:c.instructions+=1;goto B5c8738;
case 0x5c873a:goto L5c873a;
case 0x5c8741:c.instructions+=3;goto B5c8741;
case 0x5c8743:c.instructions+=2;goto B5c8743;
case 0x5c8744:c.instructions+=1;goto B5c8744;
case 0x5c8747:goto L5c8747;
case 0x5c8749:c.instructions+=1;goto B5c8749;
case 0x5c874f:goto L5c874f;
case 0x5c8755:c.instructions+=2;goto B5c8755;
case 0x5c8757:c.instructions+=1;goto B5c8757;
case 0x5c875d:goto L5c875d;
case 0x5c8764:c.instructions+=4;goto B5c8764;
case 0x5c8766:c.instructions+=3;goto B5c8766;
case 0x5c8768:c.instructions+=2;goto B5c8768;
case 0x5c8769:c.instructions+=1;goto B5c8769;
case 0x5c876c:goto L5c876c;
case 0x5c876e:c.instructions+=2;goto B5c876e;
case 0x5c8770:c.instructions+=1;goto B5c8770;
case 0x5c8772:goto L5c8772;
case 0x5c8773:c.instructions+=2;goto B5c8773;
case 0x5c8778:c.instructions+=1;goto B5c8778;
case 0x5c877d:goto L5c877d;
case 0x5c8780:c.instructions+=8;goto B5c8780;
case 0x5c8782:c.instructions+=7;goto B5c8782;
case 0x5c8783:c.instructions+=6;goto B5c8783;
case 0x5c8784:c.instructions+=5;goto B5c8784;
case 0x5c878c:c.instructions+=4;goto B5c878c;
case 0x5c878d:c.instructions+=3;goto B5c878d;
case 0x5c878e:c.instructions+=2;goto B5c878e;
case 0x5c878f:c.instructions+=1;goto B5c878f;
case 0x5c8792:goto L5c8792;
case 0x5c8793:c.instructions+=7;goto B5c8793;
case 0x5c8794:c.instructions+=6;goto B5c8794;
case 0x5c879c:c.instructions+=5;goto B5c879c;
case 0x5c879d:c.instructions+=4;goto B5c879d;
case 0x5c879f:c.instructions+=3;goto B5c879f;
case 0x5c87a0:c.instructions+=2;goto B5c87a0;
case 0x5c87a1:c.instructions+=1;goto B5c87a1;
case 0x5c87a4:goto L5c87a4;
case 0x5c87ab:c.instructions+=2;goto B5c87ab;
case 0x5c87ad:c.instructions+=1;goto B5c87ad;
case 0x5c87af:goto L5c87af;
case 0x5c87b6:c.instructions+=2;goto B5c87b6;
case 0x5c87b8:c.instructions+=1;goto B5c87b8;
case 0x5c87ba:goto L5c87ba;
case 0x5c87c1:c.instructions+=4;goto B5c87c1;
case 0x5c87c3:c.instructions+=3;goto B5c87c3;
case 0x5c87c5:c.instructions+=2;goto B5c87c5;
case 0x5c87c6:c.instructions+=1;goto B5c87c6;
case 0x5c87c9:goto L5c87c9;
case 0x5c87cb:c.instructions+=2;goto B5c87cb;
case 0x5c87cd:c.instructions+=1;goto B5c87cd;
case 0x5c87cf:goto L5c87cf;
case 0x5c87d4:c.instructions+=1;goto B5c87d4;
case 0x5c87d9:goto L5c87d9;
case 0x5c87dc:c.instructions+=8;goto B5c87dc;
case 0x5c87de:c.instructions+=7;goto B5c87de;
case 0x5c87df:c.instructions+=6;goto B5c87df;
case 0x5c87e0:c.instructions+=5;goto B5c87e0;
case 0x5c87e8:c.instructions+=4;goto B5c87e8;
case 0x5c87e9:c.instructions+=3;goto B5c87e9;
case 0x5c87ea:c.instructions+=2;goto B5c87ea;
case 0x5c87eb:c.instructions+=1;goto B5c87eb;
case 0x5c87ee:goto L5c87ee;
case 0x5c87f6:goto L5c87f6;
case 0x5c87fa:c.instructions+=8;goto B5c87fa;
case 0x5c87fc:c.instructions+=7;goto B5c87fc;
case 0x5c8802:c.instructions+=6;goto B5c8802;
case 0x5c8808:c.instructions+=5;goto B5c8808;
case 0x5c880b:c.instructions+=4;goto B5c880b;
case 0x5c880d:c.instructions+=3;goto B5c880d;
case 0x5c880e:c.instructions+=2;goto B5c880e;
case 0x5c8813:c.instructions+=1;goto B5c8813;
case 0x5c8817:goto L5c8817;
case 0x5c8819:goto L5c8819;
case 0x5c8820:c.instructions+=4;goto B5c8820;
case 0x5c8822:c.instructions+=3;goto B5c8822;
case 0x5c8827:c.instructions+=2;goto B5c8827;
case 0x5c8828:c.instructions+=1;goto B5c8828;
case 0x5c882b:goto L5c882b;
case 0x5c882d:c.instructions+=2;goto B5c882d;
case 0x5c882f:c.instructions+=1;goto B5c882f;
case 0x5c8831:goto L5c8831;
case 0x5c8832:c.instructions+=2;goto B5c8832;
case 0x5c8837:c.instructions+=1;goto B5c8837;
case 0x5c883c:goto L5c883c;
case 0x5c883f:c.instructions+=2;goto B5c883f;
case 0x5c8845:c.instructions+=1;goto B5c8845;
case 0x5c8847:goto L5c8847;
case 0x5c8848:c.instructions+=2;goto B5c8848;
case 0x5c884d:c.instructions+=1;goto B5c884d;
case 0x5c8852:goto L5c8852;
case 0x5c8856:c.instructions+=3;goto B5c8856;
case 0x5c8859:c.instructions+=2;goto B5c8859;
case 0x5c885a:c.instructions+=1;goto B5c885a;
case 0x5c885f:goto L5c885f;
case 0x5c8861:c.instructions+=6;goto B5c8861;
case 0x5c8862:c.instructions+=5;goto B5c8862;
case 0x5c8863:c.instructions+=4;goto B5c8863;
case 0x5c8864:c.instructions+=3;goto B5c8864;
case 0x5c8865:c.instructions+=2;goto B5c8865;
case 0x5c8866:c.instructions+=1;goto B5c8866;
case 0x5c8869:goto L5c8869;
case 0x5c886c:c.instructions+=1;goto B5c886c;
case 0x5c886e:goto L5c886e;
case 0x5c8873:c.instructions+=3;goto B5c8873;
case 0x5c8878:c.instructions+=2;goto B5c8878;
case 0x5c887d:c.instructions+=1;goto B5c887d;
case 0x5c887f:goto L5c887f;
case 0x5c8881:goto L5c8881;
case 0x5c8883:goto L5c8883;
case 0x5c8889:c.instructions+=3;goto B5c8889;
case 0x5c888e:c.instructions+=2;goto B5c888e;
case 0x5c8890:c.instructions+=1;goto B5c8890;
case 0x5c8892:goto L5c8892;
case 0x5c8898:c.instructions+=1;goto B5c8898;
case 0x5c889a:goto L5c889a;
case 0x5c88a0:c.instructions+=1;goto B5c88a0;
case 0x5c88a2:goto L5c88a2;
case 0x5c88a8:c.instructions+=1;goto B5c88a8;
case 0x5c88aa:goto L5c88aa;
case 0x5c88ac:c.instructions+=5;goto B5c88ac;
case 0x5c88b2:c.instructions+=4;goto B5c88b2;
case 0x5c88b8:c.instructions+=3;goto B5c88b8;
case 0x5c88be:c.instructions+=2;goto B5c88be;
case 0x5c88c4:c.instructions+=1;goto B5c88c4;
case 0x5c88c6:goto L5c88c6;
case 0x5c88c8:goto L5c88c8;
case 0x5c88cd:c.instructions+=2;goto B5c88cd;
case 0x5c88cf:c.instructions+=1;goto B5c88cf;
case 0x5c88d5:goto L5c88d5;
case 0x5c88d9:c.instructions+=2;goto B5c88d9;
case 0x5c88df:c.instructions+=1;goto B5c88df;
case 0x5c88e1:goto L5c88e1;
case 0x5c88e3:c.instructions+=2;goto B5c88e3;
case 0x5c88e6:c.instructions+=1;goto B5c88e6;
case 0x5c88e8:goto L5c88e8;
case 0x5c88e9:c.instructions+=3;goto B5c88e9;
case 0x5c88ea:c.instructions+=2;goto B5c88ea;
case 0x5c88f0:c.instructions+=1;goto B5c88f0;
case 0x5c88f2:goto L5c88f2;
case 0x5c88f3:c.instructions+=6;goto B5c88f3;
case 0x5c88f4:c.instructions+=5;goto B5c88f4;
case 0x5c88f5:c.instructions+=4;goto B5c88f5;
case 0x5c88f7:c.instructions+=3;goto B5c88f7;
case 0x5c88f8:c.instructions+=2;goto B5c88f8;
case 0x5c88f9:c.instructions+=1;goto B5c88f9;
case 0x5c88fc:goto L5c88fc;
case 0x5c88fd:c.instructions+=2;goto B5c88fd;
case 0x5c8902:c.instructions+=1;goto B5c8902;
case 0x5c8907:goto L5c8907;
case 0x5c890b:c.instructions+=5;goto B5c890b;
case 0x5c8911:c.instructions+=4;goto B5c8911;
case 0x5c8913:c.instructions+=3;goto B5c8913;
case 0x5c8916:c.instructions+=2;goto B5c8916;
case 0x5c8918:c.instructions+=1;goto B5c8918;
case 0x5c891a:goto L5c891a;
case 0x5c891b:c.instructions+=2;goto B5c891b;
case 0x5c8920:c.instructions+=1;goto B5c8920;
case 0x5c8925:goto L5c8925;
case 0x5c8928:goto L5c8928;
case 0x5c892e:c.instructions+=2;goto B5c892e;
case 0x5c8931:c.instructions+=1;goto B5c8931;
case 0x5c8933:goto L5c8933;
case 0x5c8934:c.instructions+=2;goto B5c8934;
case 0x5c8939:c.instructions+=1;goto B5c8939;
case 0x5c893e:goto L5c893e;
case 0x5c8941:goto L5c8941;
case 0x5c8947:c.instructions+=2;goto B5c8947;
case 0x5c894a:c.instructions+=1;goto B5c894a;
case 0x5c894c:goto L5c894c;
case 0x5c894d:c.instructions+=2;goto B5c894d;
case 0x5c8952:c.instructions+=1;goto B5c8952;
case 0x5c8957:goto L5c8957;
case 0x5c895a:goto L5c895a;
case 0x5c8960:c.instructions+=2;goto B5c8960;
case 0x5c8963:c.instructions+=1;goto B5c8963;
case 0x5c8965:goto L5c8965;
case 0x5c8966:c.instructions+=2;goto B5c8966;
case 0x5c896b:c.instructions+=1;goto B5c896b;
case 0x5c8970:goto L5c8970;
case 0x5c8973:goto L5c8973;
case 0x5c8979:c.instructions+=2;goto B5c8979;
case 0x5c897c:c.instructions+=1;goto B5c897c;
case 0x5c897e:goto L5c897e;
case 0x5c897f:c.instructions+=2;goto B5c897f;
case 0x5c8984:c.instructions+=1;goto B5c8984;
case 0x5c8989:goto L5c8989;
case 0x5c898c:goto L5c898c;
case 0x5c8992:c.instructions+=2;goto B5c8992;
case 0x5c8995:c.instructions+=1;goto B5c8995;
case 0x5c8997:goto L5c8997;
case 0x5c8998:c.instructions+=2;goto B5c8998;
case 0x5c899d:c.instructions+=1;goto B5c899d;
case 0x5c89a2:goto L5c89a2;
case 0x5c89a5:goto L5c89a5;
case 0x5c89ab:c.instructions+=2;goto B5c89ab;
case 0x5c89b1:c.instructions+=1;goto B5c89b1;
case 0x5c89b3:goto L5c89b3;
case 0x5c89b4:c.instructions+=2;goto B5c89b4;
case 0x5c89b9:c.instructions+=1;goto B5c89b9;
case 0x5c89be:goto L5c89be;
case 0x5c89c1:goto L5c89c1;
case 0x5c89c7:c.instructions+=2;goto B5c89c7;
case 0x5c89cd:c.instructions+=1;goto B5c89cd;
case 0x5c89cf:goto L5c89cf;
case 0x5c89d0:c.instructions+=2;goto B5c89d0;
case 0x5c89d5:c.instructions+=1;goto B5c89d5;
case 0x5c89da:goto L5c89da;
case 0x5c89dd:goto L5c89dd;
case 0x5c89e3:c.instructions+=2;goto B5c89e3;
case 0x5c89e9:c.instructions+=1;goto B5c89e9;
case 0x5c89eb:goto L5c89eb;
case 0x5c89ec:c.instructions+=2;goto B5c89ec;
case 0x5c89f1:c.instructions+=1;goto B5c89f1;
case 0x5c89f6:goto L5c89f6;
case 0x5c89f9:goto L5c89f9;
case 0x5c89ff:c.instructions+=2;goto B5c89ff;
case 0x5c8a05:c.instructions+=1;goto B5c8a05;
case 0x5c8a07:goto L5c8a07;
case 0x5c8a08:c.instructions+=2;goto B5c8a08;
case 0x5c8a0d:c.instructions+=1;goto B5c8a0d;
case 0x5c8a12:goto L5c8a12;
case 0x5c8a15:goto L5c8a15;
case 0x5c8a1b:c.instructions+=2;goto B5c8a1b;
case 0x5c8a21:c.instructions+=1;goto B5c8a21;
case 0x5c8a23:goto L5c8a23;
case 0x5c8a24:c.instructions+=2;goto B5c8a24;
case 0x5c8a29:c.instructions+=1;goto B5c8a29;
case 0x5c8a2e:goto L5c8a2e;
case 0x5c8a31:goto L5c8a31;
case 0x5c8a37:c.instructions+=2;goto B5c8a37;
case 0x5c8a3d:c.instructions+=1;goto B5c8a3d;
case 0x5c8a3f:goto L5c8a3f;
case 0x5c8a40:c.instructions+=2;goto B5c8a40;
case 0x5c8a45:c.instructions+=1;goto B5c8a45;
case 0x5c8a4a:goto L5c8a4a;
case 0x5c8a4d:goto L5c8a4d;
case 0x5c8a53:c.instructions+=2;goto B5c8a53;
case 0x5c8a59:c.instructions+=1;goto B5c8a59;
case 0x5c8a5b:goto L5c8a5b;
case 0x5c8a5c:c.instructions+=2;goto B5c8a5c;
case 0x5c8a61:c.instructions+=1;goto B5c8a61;
case 0x5c8a66:goto L5c8a66;
case 0x5c8a69:goto L5c8a69;
case 0x5c8a6f:c.instructions+=2;goto B5c8a6f;
case 0x5c8a75:c.instructions+=1;goto B5c8a75;
case 0x5c8a77:goto L5c8a77;
case 0x5c8a78:c.instructions+=2;goto B5c8a78;
case 0x5c8a7d:c.instructions+=1;goto B5c8a7d;
case 0x5c8a82:goto L5c8a82;
case 0x5c8a85:goto L5c8a85;
case 0x5c8a8b:c.instructions+=2;goto B5c8a8b;
case 0x5c8a91:c.instructions+=1;goto B5c8a91;
case 0x5c8a93:goto L5c8a93;
case 0x5c8a94:c.instructions+=2;goto B5c8a94;
case 0x5c8a99:c.instructions+=1;goto B5c8a99;
case 0x5c8a9e:goto L5c8a9e;
case 0x5c8aa1:goto L5c8aa1;
case 0x5c8aa7:c.instructions+=2;goto B5c8aa7;
case 0x5c8aad:c.instructions+=1;goto B5c8aad;
case 0x5c8aaf:goto L5c8aaf;
case 0x5c8ab0:c.instructions+=2;goto B5c8ab0;
case 0x5c8ab5:c.instructions+=1;goto B5c8ab5;
case 0x5c8aba:goto L5c8aba;
case 0x5c8abd:goto L5c8abd;
case 0x5c8ac3:c.instructions+=2;goto B5c8ac3;
case 0x5c8ac9:c.instructions+=1;goto B5c8ac9;
case 0x5c8acb:goto L5c8acb;
case 0x5c8acc:c.instructions+=2;goto B5c8acc;
case 0x5c8ad1:c.instructions+=1;goto B5c8ad1;
case 0x5c8ad6:goto L5c8ad6;
case 0x5c8ad9:goto L5c8ad9;
case 0x5c8adf:c.instructions+=2;goto B5c8adf;
case 0x5c8ae5:c.instructions+=1;goto B5c8ae5;
case 0x5c8ae7:goto L5c8ae7;
case 0x5c8ae8:c.instructions+=2;goto B5c8ae8;
case 0x5c8aed:c.instructions+=1;goto B5c8aed;
case 0x5c8af2:goto L5c8af2;
case 0x5c8af5:goto L5c8af5;
case 0x5c8afb:c.instructions+=2;goto B5c8afb;
case 0x5c8b01:c.instructions+=1;goto B5c8b01;
case 0x5c8b03:goto L5c8b03;
case 0x5c8b04:c.instructions+=2;goto B5c8b04;
case 0x5c8b09:c.instructions+=1;goto B5c8b09;
case 0x5c8b0e:goto L5c8b0e;
case 0x5c8b11:goto L5c8b11;
case 0x5c8b17:c.instructions+=2;goto B5c8b17;
case 0x5c8b1d:c.instructions+=1;goto B5c8b1d;
case 0x5c8b1f:goto L5c8b1f;
case 0x5c8b20:c.instructions+=2;goto B5c8b20;
case 0x5c8b25:c.instructions+=1;goto B5c8b25;
case 0x5c8b2a:goto L5c8b2a;
case 0x5c8b2d:goto L5c8b2d;
case 0x5c8b33:c.instructions+=2;goto B5c8b33;
case 0x5c8b39:c.instructions+=1;goto B5c8b39;
case 0x5c8b3b:goto L5c8b3b;
case 0x5c8b3c:c.instructions+=2;goto B5c8b3c;
case 0x5c8b41:c.instructions+=1;goto B5c8b41;
case 0x5c8b46:goto L5c8b46;
case 0x5c8b49:goto L5c8b49;
case 0x5c8b4f:c.instructions+=2;goto B5c8b4f;
case 0x5c8b55:c.instructions+=1;goto B5c8b55;
case 0x5c8b57:goto L5c8b57;
case 0x5c8b58:c.instructions+=2;goto B5c8b58;
case 0x5c8b5d:c.instructions+=1;goto B5c8b5d;
case 0x5c8b62:goto L5c8b62;
case 0x5c8b65:goto L5c8b65;
case 0x5c8b6b:c.instructions+=2;goto B5c8b6b;
case 0x5c8b71:c.instructions+=1;goto B5c8b71;
case 0x5c8b73:goto L5c8b73;
case 0x5c8b74:c.instructions+=2;goto B5c8b74;
case 0x5c8b79:c.instructions+=1;goto B5c8b79;
case 0x5c8b7e:goto L5c8b7e;
case 0x5c8b81:goto L5c8b81;
case 0x5c8b87:c.instructions+=2;goto B5c8b87;
case 0x5c8b8d:c.instructions+=1;goto B5c8b8d;
case 0x5c8b8f:goto L5c8b8f;
case 0x5c8b90:c.instructions+=2;goto B5c8b90;
case 0x5c8b95:c.instructions+=1;goto B5c8b95;
case 0x5c8b9a:goto L5c8b9a;
case 0x5c8b9d:goto L5c8b9d;
case 0x5c8ba3:c.instructions+=4;goto B5c8ba3;
case 0x5c8ba5:c.instructions+=3;goto B5c8ba5;
case 0x5c8ba9:c.instructions+=2;goto B5c8ba9;
case 0x5c8baf:c.instructions+=1;goto B5c8baf;
case 0x5c8bb0:goto L5c8bb0;
case 0x5c8bb4:c.instructions+=3;goto B5c8bb4;
case 0x5c8bb6:c.instructions+=2;goto B5c8bb6;
case 0x5c8bb8:c.instructions+=1;goto B5c8bb8;
case 0x5c8bba:goto L5c8bba;
case 0x5c8bbb:c.instructions+=3;goto B5c8bbb;
case 0x5c8bbc:c.instructions+=2;goto B5c8bbc;
case 0x5c8bc1:c.instructions+=1;goto B5c8bc1;
case 0x5c8bc6:goto L5c8bc6;
case 0x5c8bc9:goto L5c8bc9;
case 0x5c8bcd:c.instructions+=6;goto B5c8bcd;
case 0x5c8bce:c.instructions+=5;goto B5c8bce;
case 0x5c8bd1:c.instructions+=4;goto B5c8bd1;
case 0x5c8bd4:c.instructions+=3;goto B5c8bd4;
case 0x5c8bd7:c.instructions+=2;goto B5c8bd7;
case 0x5c8bdb:c.instructions+=1;goto B5c8bdb;
case 0x5c8bdd:goto L5c8bdd;
case 0x5c8be3:c.instructions+=4;goto B5c8be3;
case 0x5c8be5:c.instructions+=3;goto B5c8be5;
case 0x5c8be9:c.instructions+=2;goto B5c8be9;
case 0x5c8bef:c.instructions+=1;goto B5c8bef;
case 0x5c8bf0:goto L5c8bf0;
case 0x5c8bf4:c.instructions+=3;goto B5c8bf4;
case 0x5c8bf6:c.instructions+=2;goto B5c8bf6;
case 0x5c8bf8:c.instructions+=1;goto B5c8bf8;
case 0x5c8bfa:goto L5c8bfa;
case 0x5c8bfb:c.instructions+=3;goto B5c8bfb;
case 0x5c8bfc:c.instructions+=2;goto B5c8bfc;
case 0x5c8c01:c.instructions+=1;goto B5c8c01;
case 0x5c8c06:goto L5c8c06;
case 0x5c8c09:goto L5c8c09;
case 0x5c8c0d:c.instructions+=6;goto B5c8c0d;
case 0x5c8c0e:c.instructions+=5;goto B5c8c0e;
case 0x5c8c11:c.instructions+=4;goto B5c8c11;
case 0x5c8c14:c.instructions+=3;goto B5c8c14;
case 0x5c8c17:c.instructions+=2;goto B5c8c17;
case 0x5c8c1b:c.instructions+=1;goto B5c8c1b;
case 0x5c8c1d:goto L5c8c1d;
case 0x5c8c23:c.instructions+=4;goto B5c8c23;
case 0x5c8c25:c.instructions+=3;goto B5c8c25;
case 0x5c8c29:c.instructions+=2;goto B5c8c29;
case 0x5c8c2f:c.instructions+=1;goto B5c8c2f;
case 0x5c8c30:goto L5c8c30;
case 0x5c8c34:c.instructions+=3;goto B5c8c34;
case 0x5c8c36:c.instructions+=2;goto B5c8c36;
case 0x5c8c38:c.instructions+=1;goto B5c8c38;
case 0x5c8c3a:goto L5c8c3a;
case 0x5c8c3b:c.instructions+=3;goto B5c8c3b;
case 0x5c8c3c:c.instructions+=2;goto B5c8c3c;
case 0x5c8c41:c.instructions+=1;goto B5c8c41;
case 0x5c8c46:goto L5c8c46;
case 0x5c8c49:goto L5c8c49;
case 0x5c8c4d:c.instructions+=6;goto B5c8c4d;
case 0x5c8c4e:c.instructions+=5;goto B5c8c4e;
case 0x5c8c51:c.instructions+=4;goto B5c8c51;
case 0x5c8c54:c.instructions+=3;goto B5c8c54;
case 0x5c8c57:c.instructions+=2;goto B5c8c57;
case 0x5c8c5b:c.instructions+=1;goto B5c8c5b;
case 0x5c8c5d:goto L5c8c5d;
case 0x5c8c63:c.instructions+=4;goto B5c8c63;
case 0x5c8c65:c.instructions+=3;goto B5c8c65;
case 0x5c8c69:c.instructions+=2;goto B5c8c69;
case 0x5c8c6c:c.instructions+=1;goto B5c8c6c;
case 0x5c8c70:goto L5c8c70;
case 0x5c8c74:c.instructions+=3;goto B5c8c74;
case 0x5c8c76:c.instructions+=2;goto B5c8c76;
case 0x5c8c78:c.instructions+=1;goto B5c8c78;
case 0x5c8c7a:goto L5c8c7a;
case 0x5c8c7b:c.instructions+=3;goto B5c8c7b;
case 0x5c8c7c:c.instructions+=2;goto B5c8c7c;
case 0x5c8c81:c.instructions+=1;goto B5c8c81;
case 0x5c8c86:goto L5c8c86;
case 0x5c8c89:goto L5c8c89;
case 0x5c8c8d:c.instructions+=6;goto B5c8c8d;
case 0x5c8c8e:c.instructions+=5;goto B5c8c8e;
case 0x5c8c91:c.instructions+=4;goto B5c8c91;
case 0x5c8c94:c.instructions+=3;goto B5c8c94;
case 0x5c8c97:c.instructions+=2;goto B5c8c97;
case 0x5c8c9b:c.instructions+=1;goto B5c8c9b;
case 0x5c8c9d:goto L5c8c9d;
case 0x5c8ca3:c.instructions+=4;goto B5c8ca3;
case 0x5c8ca5:c.instructions+=3;goto B5c8ca5;
case 0x5c8ca9:c.instructions+=2;goto B5c8ca9;
case 0x5c8cac:c.instructions+=1;goto B5c8cac;
case 0x5c8cb0:goto L5c8cb0;
case 0x5c8cb4:c.instructions+=3;goto B5c8cb4;
case 0x5c8cb6:c.instructions+=2;goto B5c8cb6;
case 0x5c8cb8:c.instructions+=1;goto B5c8cb8;
case 0x5c8cba:goto L5c8cba;
case 0x5c8cbb:c.instructions+=3;goto B5c8cbb;
case 0x5c8cbc:c.instructions+=2;goto B5c8cbc;
case 0x5c8cc1:c.instructions+=1;goto B5c8cc1;
case 0x5c8cc6:goto L5c8cc6;
case 0x5c8cc9:goto L5c8cc9;
case 0x5c8ccd:c.instructions+=6;goto B5c8ccd;
case 0x5c8cce:c.instructions+=5;goto B5c8cce;
case 0x5c8cd1:c.instructions+=4;goto B5c8cd1;
case 0x5c8cd4:c.instructions+=3;goto B5c8cd4;
case 0x5c8cd7:c.instructions+=2;goto B5c8cd7;
case 0x5c8cdb:c.instructions+=1;goto B5c8cdb;
case 0x5c8cdd:goto L5c8cdd;
case 0x5c8cdf:c.instructions+=1;goto B5c8cdf;
case 0x5c8ce0:goto L5c8ce0;
case 0x5c8ce7:c.instructions+=2;goto B5c8ce7;
case 0x5c8ceb:c.instructions+=1;goto B5c8ceb;
case 0x5c8ced:goto L5c8ced;
case 0x5c8cf0:c.instructions+=4;goto B5c8cf0;
case 0x5c8cf1:c.instructions+=3;goto B5c8cf1;
case 0x5c8cf2:c.instructions+=2;goto B5c8cf2;
case 0x5c8cf7:c.instructions+=1;goto B5c8cf7;
case 0x5c8cfc:goto L5c8cfc;
case 0x5c8cff:goto L5c8cff;
case 0x5c8d00:c.instructions+=2;goto B5c8d00;
case 0x5c8d06:c.instructions+=1;goto B5c8d06;
case 0x5c8d08:goto L5c8d08;
case 0x5c8d09:c.instructions+=6;goto B5c8d09;
case 0x5c8d0a:c.instructions+=5;goto B5c8d0a;
case 0x5c8d0b:c.instructions+=4;goto B5c8d0b;
case 0x5c8d0d:c.instructions+=3;goto B5c8d0d;
case 0x5c8d0e:c.instructions+=2;goto B5c8d0e;
case 0x5c8d0f:c.instructions+=1;goto B5c8d0f;
case 0x5c8d20:goto L5c8d20;
case 0x5c8d24:c.instructions+=13;goto B5c8d24;
case 0x5c8d27:c.instructions+=12;goto B5c8d27;
case 0x5c8d28:c.instructions+=11;goto B5c8d28;
case 0x5c8d2c:c.instructions+=10;goto B5c8d2c;
case 0x5c8d2d:c.instructions+=9;goto B5c8d2d;
case 0x5c8d34:c.instructions+=8;goto B5c8d34;
case 0x5c8d37:c.instructions+=7;goto B5c8d37;
case 0x5c8d38:c.instructions+=6;goto B5c8d38;
case 0x5c8d3c:c.instructions+=5;goto B5c8d3c;
case 0x5c8d3e:c.instructions+=4;goto B5c8d3e;
case 0x5c8d3f:c.instructions+=3;goto B5c8d3f;
case 0x5c8d41:c.instructions+=2;goto B5c8d41;
case 0x5c8d43:c.instructions+=1;goto B5c8d43;
case 0x5c8d45:goto L5c8d45;
case 0x5c8d46:c.instructions+=3;goto B5c8d46;
case 0x5c8d47:c.instructions+=2;goto B5c8d47;
case 0x5c8d48:c.instructions+=1;goto B5c8d48;
case 0x5c8d4d:goto L5c8d4d;
case 0x5c8d50:c.instructions+=2;goto B5c8d50;
case 0x5c8d52:c.instructions+=1;goto B5c8d52;
case 0x5c8d58:goto L5c8d58;
case 0x5c8d5f:c.instructions+=26;goto B5c8d5f;
case 0x5c8d66:c.instructions+=25;goto B5c8d66;
case 0x5c8d6a:c.instructions+=24;goto B5c8d6a;
case 0x5c8d71:c.instructions+=23;goto B5c8d71;
case 0x5c8d75:c.instructions+=22;goto B5c8d75;
case 0x5c8d7c:c.instructions+=21;goto B5c8d7c;
case 0x5c8d80:c.instructions+=20;goto B5c8d80;
case 0x5c8d87:c.instructions+=19;goto B5c8d87;
case 0x5c8d8b:c.instructions+=18;goto B5c8d8b;
case 0x5c8d92:c.instructions+=17;goto B5c8d92;
case 0x5c8d96:c.instructions+=16;goto B5c8d96;
case 0x5c8d9d:c.instructions+=15;goto B5c8d9d;
case 0x5c8da1:c.instructions+=14;goto B5c8da1;
case 0x5c8da8:c.instructions+=13;goto B5c8da8;
case 0x5c8dac:c.instructions+=12;goto B5c8dac;
case 0x5c8db3:c.instructions+=11;goto B5c8db3;
case 0x5c8db7:c.instructions+=10;goto B5c8db7;
case 0x5c8dbe:c.instructions+=9;goto B5c8dbe;
case 0x5c8dc2:c.instructions+=8;goto B5c8dc2;
case 0x5c8dc9:c.instructions+=7;goto B5c8dc9;
case 0x5c8dcd:c.instructions+=6;goto B5c8dcd;
case 0x5c8dd4:c.instructions+=5;goto B5c8dd4;
case 0x5c8dd8:c.instructions+=4;goto B5c8dd8;
case 0x5c8ddc:c.instructions+=3;goto B5c8ddc;
case 0x5c8dde:c.instructions+=2;goto B5c8dde;
case 0x5c8de3:c.instructions+=1;goto B5c8de3;
case 0x5c8de7:goto L5c8de7;
case 0x5c8de9:goto L5c8de9;
case 0x5c8df0:c.instructions+=35;goto B5c8df0;
case 0x5c8df7:c.instructions+=34;goto B5c8df7;
case 0x5c8dfb:c.instructions+=33;goto B5c8dfb;
case 0x5c8e02:c.instructions+=32;goto B5c8e02;
case 0x5c8e06:c.instructions+=31;goto B5c8e06;
case 0x5c8e0d:c.instructions+=30;goto B5c8e0d;
case 0x5c8e11:c.instructions+=29;goto B5c8e11;
case 0x5c8e15:c.instructions+=28;goto B5c8e15;
case 0x5c8e1c:c.instructions+=27;goto B5c8e1c;
case 0x5c8e20:c.instructions+=26;goto B5c8e20;
case 0x5c8e27:c.instructions+=25;goto B5c8e27;
case 0x5c8e2b:c.instructions+=24;goto B5c8e2b;
case 0x5c8e2f:c.instructions+=23;goto B5c8e2f;
case 0x5c8e33:c.instructions+=22;goto B5c8e33;
case 0x5c8e3a:c.instructions+=21;goto B5c8e3a;
case 0x5c8e3e:c.instructions+=20;goto B5c8e3e;
case 0x5c8e42:c.instructions+=19;goto B5c8e42;
case 0x5c8e49:c.instructions+=18;goto B5c8e49;
case 0x5c8e4b:c.instructions+=17;goto B5c8e4b;
case 0x5c8e4f:c.instructions+=16;goto B5c8e4f;
case 0x5c8e53:c.instructions+=15;goto B5c8e53;
case 0x5c8e54:c.instructions+=14;goto B5c8e54;
case 0x5c8e58:c.instructions+=13;goto B5c8e58;
case 0x5c8e59:c.instructions+=12;goto B5c8e59;
case 0x5c8e60:c.instructions+=11;goto B5c8e60;
case 0x5c8e64:c.instructions+=10;goto B5c8e64;
case 0x5c8e68:c.instructions+=9;goto B5c8e68;
case 0x5c8e6c:c.instructions+=8;goto B5c8e6c;
case 0x5c8e6d:c.instructions+=7;goto B5c8e6d;
case 0x5c8e75:c.instructions+=6;goto B5c8e75;
case 0x5c8e7d:c.instructions+=5;goto B5c8e7d;
case 0x5c8e88:c.instructions+=4;goto B5c8e88;
case 0x5c8e8f:c.instructions+=3;goto B5c8e8f;
case 0x5c8e91:c.instructions+=2;goto B5c8e91;
case 0x5c8e92:c.instructions+=1;goto B5c8e92;
case 0x5c8e95:goto L5c8e95;
case 0x5c8e97:c.instructions+=2;goto B5c8e97;
case 0x5c8e99:c.instructions+=1;goto B5c8e99;
case 0x5c8e9b:goto L5c8e9b;
case 0x5c8e9c:c.instructions+=2;goto B5c8e9c;
case 0x5c8ea1:c.instructions+=1;goto B5c8ea1;
case 0x5c8ea6:goto L5c8ea6;
case 0x5c8ea9:c.instructions+=7;goto B5c8ea9;
case 0x5c8eab:c.instructions+=6;goto B5c8eab;
case 0x5c8eac:c.instructions+=5;goto B5c8eac;
case 0x5c8ead:c.instructions+=4;goto B5c8ead;
case 0x5c8eae:c.instructions+=3;goto B5c8eae;
case 0x5c8eaf:c.instructions+=2;goto B5c8eaf;
case 0x5c8eb2:c.instructions+=1;goto B5c8eb2;
case 0x5c8eb5:goto L5c8eb5;
case 0x5c8eb8:c.instructions+=2;goto B5c8eb8;
case 0x5c8ebd:c.instructions+=1;goto B5c8ebd;
case 0x5c8ebf:goto L5c8ebf;
case 0x5c8ec1:goto L5c8ec1;
case 0x5c8ec2:c.instructions+=5;goto B5c8ec2;
case 0x5c8ec3:c.instructions+=4;goto B5c8ec3;
case 0x5c8ec4:c.instructions+=3;goto B5c8ec4;
case 0x5c8ec5:c.instructions+=2;goto B5c8ec5;
case 0x5c8ec8:c.instructions+=1;goto B5c8ec8;
case 0x5c8ed0:goto L5c8ed0;
case 0x5c8ed4:c.instructions+=9;goto B5c8ed4;
case 0x5c8ed7:c.instructions+=8;goto B5c8ed7;
case 0x5c8ed8:c.instructions+=7;goto B5c8ed8;
case 0x5c8edc:c.instructions+=6;goto B5c8edc;
case 0x5c8edf:c.instructions+=5;goto B5c8edf;
case 0x5c8ee3:c.instructions+=4;goto B5c8ee3;
case 0x5c8ee4:c.instructions+=3;goto B5c8ee4;
case 0x5c8ee6:c.instructions+=2;goto B5c8ee6;
case 0x5c8ee8:c.instructions+=1;goto B5c8ee8;
case 0x5c8eee:goto L5c8eee;
case 0x5c8ef5:c.instructions+=27;goto B5c8ef5;
case 0x5c8efc:c.instructions+=26;goto B5c8efc;
case 0x5c8f00:c.instructions+=25;goto B5c8f00;
case 0x5c8f07:c.instructions+=24;goto B5c8f07;
case 0x5c8f0b:c.instructions+=23;goto B5c8f0b;
case 0x5c8f12:c.instructions+=22;goto B5c8f12;
case 0x5c8f16:c.instructions+=21;goto B5c8f16;
case 0x5c8f1d:c.instructions+=20;goto B5c8f1d;
case 0x5c8f21:c.instructions+=19;goto B5c8f21;
case 0x5c8f28:c.instructions+=18;goto B5c8f28;
case 0x5c8f2c:c.instructions+=17;goto B5c8f2c;
case 0x5c8f33:c.instructions+=16;goto B5c8f33;
case 0x5c8f37:c.instructions+=15;goto B5c8f37;
case 0x5c8f3e:c.instructions+=14;goto B5c8f3e;
case 0x5c8f42:c.instructions+=13;goto B5c8f42;
case 0x5c8f49:c.instructions+=12;goto B5c8f49;
case 0x5c8f4d:c.instructions+=11;goto B5c8f4d;
case 0x5c8f54:c.instructions+=10;goto B5c8f54;
case 0x5c8f58:c.instructions+=9;goto B5c8f58;
case 0x5c8f5f:c.instructions+=8;goto B5c8f5f;
case 0x5c8f63:c.instructions+=7;goto B5c8f63;
case 0x5c8f6a:c.instructions+=6;goto B5c8f6a;
case 0x5c8f6e:c.instructions+=5;goto B5c8f6e;
case 0x5c8f72:c.instructions+=4;goto B5c8f72;
case 0x5c8f74:c.instructions+=3;goto B5c8f74;
case 0x5c8f75:c.instructions+=2;goto B5c8f75;
case 0x5c8f7a:c.instructions+=1;goto B5c8f7a;
case 0x5c8f7e:goto L5c8f7e;
case 0x5c8f80:goto L5c8f80;
case 0x5c8f87:c.instructions+=26;goto B5c8f87;
case 0x5c8f8e:c.instructions+=25;goto B5c8f8e;
case 0x5c8f92:c.instructions+=24;goto B5c8f92;
case 0x5c8f99:c.instructions+=23;goto B5c8f99;
case 0x5c8f9d:c.instructions+=22;goto B5c8f9d;
case 0x5c8fa4:c.instructions+=21;goto B5c8fa4;
case 0x5c8fa8:c.instructions+=20;goto B5c8fa8;
case 0x5c8faf:c.instructions+=19;goto B5c8faf;
case 0x5c8fb3:c.instructions+=18;goto B5c8fb3;
case 0x5c8fb7:c.instructions+=17;goto B5c8fb7;
case 0x5c8fbe:c.instructions+=16;goto B5c8fbe;
case 0x5c8fc2:c.instructions+=15;goto B5c8fc2;
case 0x5c8fc9:c.instructions+=14;goto B5c8fc9;
case 0x5c8fcd:c.instructions+=13;goto B5c8fcd;
case 0x5c8fd1:c.instructions+=12;goto B5c8fd1;
case 0x5c8fd5:c.instructions+=11;goto B5c8fd5;
case 0x5c8fd9:c.instructions+=10;goto B5c8fd9;
case 0x5c8fe0:c.instructions+=9;goto B5c8fe0;
case 0x5c8fe4:c.instructions+=8;goto B5c8fe4;
case 0x5c8fe8:c.instructions+=7;goto B5c8fe8;
case 0x5c8fec:c.instructions+=6;goto B5c8fec;
case 0x5c8ff0:c.instructions+=5;goto B5c8ff0;
case 0x5c8ff5:c.instructions+=4;goto B5c8ff5;
case 0x5c8ff9:c.instructions+=3;goto B5c8ff9;
case 0x5c8ffd:c.instructions+=2;goto B5c8ffd;
case 0x5c8ffe:c.instructions+=1;goto B5c8ffe;
default:missing_instruction(c.pc);}
B5c8000:L5c8000:{c.instructions+=1;NFSU2_TR(0x5c8000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8005ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c8005:L5c8005:{c.instructions+=3;NFSU2_TR(0x5c8005);
__builtin_memmove((R+12),(R+0),4);
}
B5c8007:{NFSU2_TR(0x5c8007);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8008:{NFSU2_TR(0x5c8008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c800dull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5c800d:L5c800d:{c.instructions+=3;NFSU2_TR(0x5c800d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8011:{NFSU2_TR(0x5c8011);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8012:{NFSU2_TR(0x5c8012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8017ull));
TAIL_STATIC(0x43c370u,43c);
}
B5c8017:L5c8017:{c.instructions+=10;NFSU2_TR(0x5c8017);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c801b:{NFSU2_TR(0x5c801b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c801e:{NFSU2_TR(0x5c801e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c801f:{NFSU2_TR(0x5c801f);
{u32 ea_=u32(r4(MODV+216));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c8025:{NFSU2_TR(0x5c8025);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8029:{NFSU2_TR(0x5c8029);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c802d:{NFSU2_TR(0x5c802d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8031:{NFSU2_TR(0x5c8031);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c8035:{NFSU2_TR(0x5c8035);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8039:{NFSU2_TR(0x5c8039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c803eull));
TAIL_STATIC(0x43c780u,43c);
}
B5c803e:L5c803e:{c.instructions+=17;NFSU2_TR(0x5c803e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8042:{NFSU2_TR(0x5c8042);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8046:{NFSU2_TR(0x5c8046);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c8048:{NFSU2_TR(0x5c8048);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c804c:{NFSU2_TR(0x5c804c);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c804f:{NFSU2_TR(0x5c804f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8053:{NFSU2_TR(0x5c8053);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5c8055:{NFSU2_TR(0x5c8055);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c8059:{NFSU2_TR(0x5c8059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c805c:{NFSU2_TR(0x5c805c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c8063:{NFSU2_TR(0x5c8063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c806a:{NFSU2_TR(0x5c806a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c806c:{NFSU2_TR(0x5c806c);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c806f:{NFSU2_TR(0x5c806f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B5c8076:{NFSU2_TR(0x5c8076);
w2(R+28,shr<u16>(r2(R+28),u64(u32(0x1ull))));
}
B5c8079:{NFSU2_TR(0x5c8079);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c807a:{NFSU2_TR(0x5c807a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c807full));
TAIL_STATIC(0x43c2b0u,43c);
}
B5c807f:L5c807f:{c.instructions+=3;NFSU2_TR(0x5c807f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8083:{NFSU2_TR(0x5c8083);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8084:{NFSU2_TR(0x5c8084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8089ull));
TAIL_STATIC(0x43c370u,43c);
}
B5c8089:L5c8089:{c.instructions+=6;NFSU2_TR(0x5c8089);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c808d:{NFSU2_TR(0x5c808d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5c8090:{NFSU2_TR(0x5c8090);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5c8096:{NFSU2_TR(0x5c8096);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c8098:{NFSU2_TR(0x5c8098);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c809b:{NFSU2_TR(0x5c809b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5c80a5;}}
}
B5c809d:L5c809d:{c.instructions+=2;NFSU2_TR(0x5c809d);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c80a3:{NFSU2_TR(0x5c80a3);
{goto L5c80ad;}
}
B5c80a5:L5c80a5:{c.instructions+=2;NFSU2_TR(0x5c80a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c80a7:{NFSU2_TR(0x5c80a7);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c80ad:L5c80ad:{c.instructions+=10;NFSU2_TR(0x5c80ad);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c80b0:{NFSU2_TR(0x5c80b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c80b1:{NFSU2_TR(0x5c80b1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c80b3:{NFSU2_TR(0x5c80b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c80b4:{NFSU2_TR(0x5c80b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c80ba:{NFSU2_TR(0x5c80ba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c80bb:{NFSU2_TR(0x5c80bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c80be:{NFSU2_TR(0x5c80be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c80c1:{NFSU2_TR(0x5c80c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c80c4:{NFSU2_TR(0x5c80c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c80c9ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c80c9:L5c80c9:{c.instructions+=2;NFSU2_TR(0x5c80c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5c80cb:{NFSU2_TR(0x5c80cb);
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
B5c80ce:L5c80ce:{c.instructions+=1;NFSU2_TR(0x5c80ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5c8280;}}
}
B5c80d4:L5c80d4:{c.instructions+=1;NFSU2_TR(0x5c80d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5c82fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c80db:L5c80db:{c.instructions+=13;NFSU2_TR(0x5c80db);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c80e1:{NFSU2_TR(0x5c80e1);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c80e4:{NFSU2_TR(0x5c80e4);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c80ea:{NFSU2_TR(0x5c80ea);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c80f0:{NFSU2_TR(0x5c80f0);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c80f6:{NFSU2_TR(0x5c80f6);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c80fc:{NFSU2_TR(0x5c80fc);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8102:{NFSU2_TR(0x5c8102);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c8108:{NFSU2_TR(0x5c8108);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c810e:{NFSU2_TR(0x5c810e);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8114:{NFSU2_TR(0x5c8114);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c811a:{NFSU2_TR(0x5c811a);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8120:{NFSU2_TR(0x5c8120);
{goto L5c8280;}
}
B5c8125:L5c8125:{c.instructions+=13;NFSU2_TR(0x5c8125);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c812b:{NFSU2_TR(0x5c812b);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c812e:{NFSU2_TR(0x5c812e);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8134:{NFSU2_TR(0x5c8134);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c813a:{NFSU2_TR(0x5c813a);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8140:{NFSU2_TR(0x5c8140);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8146:{NFSU2_TR(0x5c8146);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c814c:{NFSU2_TR(0x5c814c);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8152:{NFSU2_TR(0x5c8152);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8158:{NFSU2_TR(0x5c8158);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c815e:{NFSU2_TR(0x5c815e);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8164:{NFSU2_TR(0x5c8164);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c816a:{NFSU2_TR(0x5c816a);
{goto L5c8280;}
}
B5c816f:L5c816f:{c.instructions+=13;NFSU2_TR(0x5c816f);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8175:{NFSU2_TR(0x5c8175);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c817b:{NFSU2_TR(0x5c817b);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8181:{NFSU2_TR(0x5c8181);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8187:{NFSU2_TR(0x5c8187);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c818d:{NFSU2_TR(0x5c818d);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8193:{NFSU2_TR(0x5c8193);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8199:{NFSU2_TR(0x5c8199);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c819f:{NFSU2_TR(0x5c819f);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c81a5:{NFSU2_TR(0x5c81a5);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c81ab:{NFSU2_TR(0x5c81ab);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c81b1:{NFSU2_TR(0x5c81b1);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c81b7:{NFSU2_TR(0x5c81b7);
{goto L5c8280;}
}
B5c81bc:L5c81bc:{c.instructions+=13;NFSU2_TR(0x5c81bc);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c81c2:{NFSU2_TR(0x5c81c2);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c81c8:{NFSU2_TR(0x5c81c8);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c81ce:{NFSU2_TR(0x5c81ce);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c81d4:{NFSU2_TR(0x5c81d4);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c81da:{NFSU2_TR(0x5c81da);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c81e0:{NFSU2_TR(0x5c81e0);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c81e6:{NFSU2_TR(0x5c81e6);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c81ec:{NFSU2_TR(0x5c81ec);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c81f2:{NFSU2_TR(0x5c81f2);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c81f8:{NFSU2_TR(0x5c81f8);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c81fe:{NFSU2_TR(0x5c81fe);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8204:{NFSU2_TR(0x5c8204);
{goto L5c8280;}
}
B5c8206:L5c8206:{c.instructions+=9;NFSU2_TR(0x5c8206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c820c:{NFSU2_TR(0x5c820c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8212:{NFSU2_TR(0x5c8212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8218:{NFSU2_TR(0x5c8218);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c821e:{NFSU2_TR(0x5c821e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c8224:{NFSU2_TR(0x5c8224);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c822a:{NFSU2_TR(0x5c822a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8230:{NFSU2_TR(0x5c8230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8236:{NFSU2_TR(0x5c8236);
{goto L5c8280;}
}
B5c8238:L5c8238:{c.instructions+=12;NFSU2_TR(0x5c8238);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c823e:{NFSU2_TR(0x5c823e);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8244:{NFSU2_TR(0x5c8244);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c824a:{NFSU2_TR(0x5c824a);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8250:{NFSU2_TR(0x5c8250);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8256:{NFSU2_TR(0x5c8256);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c825c:{NFSU2_TR(0x5c825c);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8262:{NFSU2_TR(0x5c8262);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c8268:{NFSU2_TR(0x5c8268);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c826e:{NFSU2_TR(0x5c826e);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8274:{NFSU2_TR(0x5c8274);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c827a:{NFSU2_TR(0x5c827a);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c8280:L5c8280:{c.instructions+=36;NFSU2_TR(0x5c8280);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c8283:{NFSU2_TR(0x5c8283);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5c8286:{NFSU2_TR(0x5c8286);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c828a:{NFSU2_TR(0x5c828a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c828d:{NFSU2_TR(0x5c828d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8290:{NFSU2_TR(0x5c8290);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c8292:{NFSU2_TR(0x5c8292);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c8294:{NFSU2_TR(0x5c8294);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5c8296:{NFSU2_TR(0x5c8296);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c8298:{NFSU2_TR(0x5c8298);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5c829a:{NFSU2_TR(0x5c829a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c829c:{NFSU2_TR(0x5c829c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c829e:{NFSU2_TR(0x5c829e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5c82a0:{NFSU2_TR(0x5c82a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c82a2:{NFSU2_TR(0x5c82a2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5c82a4:{NFSU2_TR(0x5c82a4);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5c82a6:{NFSU2_TR(0x5c82a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c82a8:{NFSU2_TR(0x5c82a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5c82aa:{NFSU2_TR(0x5c82aa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c82b0:{NFSU2_TR(0x5c82b0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c82b2:{NFSU2_TR(0x5c82b2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c82b4:{NFSU2_TR(0x5c82b4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c82b6:{NFSU2_TR(0x5c82b6);
__builtin_memmove((R+0),(R+4),4);
}
B5c82b8:{NFSU2_TR(0x5c82b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5c82bb:{NFSU2_TR(0x5c82bb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5c82bd:{NFSU2_TR(0x5c82bd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c82bf:{NFSU2_TR(0x5c82bf);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c82c5:{NFSU2_TR(0x5c82c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5c82c6:{NFSU2_TR(0x5c82c6);
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
B5c82c9:{NFSU2_TR(0x5c82c9);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c82cf:{NFSU2_TR(0x5c82cf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c82d1:{NFSU2_TR(0x5c82d1);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c82d7:{NFSU2_TR(0x5c82d7);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c82dd:{NFSU2_TR(0x5c82dd);
{u32 ea_=u32(r4(R+0)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c82e3:{NFSU2_TR(0x5c82e3);
{u32 ea_=u32(r4(R+0)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c82e9:{NFSU2_TR(0x5c82e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c80ceu);}goto L5c80ce;}}
}
B5c82ef:L5c82ef:{c.instructions+=6;NFSU2_TR(0x5c82ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c82f0:{NFSU2_TR(0x5c82f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c82f1:{NFSU2_TR(0x5c82f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c82f2:{NFSU2_TR(0x5c82f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c82f3:{NFSU2_TR(0x5c82f3);
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
B5c82f6:{NFSU2_TR(0x5c82f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8320:L5c8320:{c.instructions+=3;NFSU2_TR(0x5c8320);
__builtin_memmove((R+0),gp(0x8709bc),4);
}
B5c8325:{NFSU2_TR(0x5c8325);
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
B5c8327:{NFSU2_TR(0x5c8327);
if(r1(R+518)){{goto L5c85d7;}}
}
B5c832d:L5c832d:{c.instructions+=6;NFSU2_TR(0x5c832d);
__builtin_memmove((R+0),gp(0x8709c4),1);
}
B5c8332:{NFSU2_TR(0x5c8332);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c8334:{NFSU2_TR(0x5c8334);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8335:{NFSU2_TR(0x5c8335);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c8339:{NFSU2_TR(0x5c8339);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c833a:{NFSU2_TR(0x5c833a);
if(r1(R+518)){{goto L5c834c;}}
}
B5c833c:L5c833c:{c.instructions+=3;NFSU2_TR(0x5c833c);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0xdull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xdull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xdull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c833f:{NFSU2_TR(0x5c833f);
s1(0x8709c4,u8(0x0ull));
}
B5c8346:{NFSU2_TR(0x5c8346);
if(r1(R+518)){{goto L5c85d5;}}
}
B5c834c:L5c834c:{c.instructions+=4;NFSU2_TR(0x5c834c);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B5c834f:{NFSU2_TR(0x5c834f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B5c8352:{NFSU2_TR(0x5c8352);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c8355:{NFSU2_TR(0x5c8355);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5c84f5;}}
}
B5c835b:L5c835b:{c.instructions+=2;NFSU2_TR(0x5c835b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5c85ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5c8362:{NFSU2_TR(0x5c8362);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5c85d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c8369:L5c8369:{c.instructions+=3;NFSU2_TR(0x5c8369);
__builtin_memmove((R+0),gp(0x8709b8),4);
}
B5c836e:{NFSU2_TR(0x5c836e);
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
B5c8370:{NFSU2_TR(0x5c8370);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5c85d5;}}
}
B5c8376:L5c8376:{c.instructions+=3;NFSU2_TR(0x5c8376);
__builtin_memmove((R+4),gp(0x8709c0),4);
}
B5c837c:{NFSU2_TR(0x5c837c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c837d:{NFSU2_TR(0x5c837d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8382ull));
TAIL_STATIC(0x575620u,575);
}
B5c8382:L5c8382:{c.instructions+=5;NFSU2_TR(0x5c8382);
__builtin_memmove((R+8),gp(0x8709b8),4);
}
B5c8388:{NFSU2_TR(0x5c8388);
__builtin_memmove((R+4),gp(0x8709b0),4);
}
B5c838e:{NFSU2_TR(0x5c838e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c8391:{NFSU2_TR(0x5c8391);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5c8393:{NFSU2_TR(0x5c8393);
__builtin_memmove((R+24),(R+0),4);
}
B5c8395:L5c8395:{c.instructions+=6;NFSU2_TR(0x5c8395);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c8397:{NFSU2_TR(0x5c8397);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c8398:{NFSU2_TR(0x5c8398);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c839a:{NFSU2_TR(0x5c839a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c839b:{NFSU2_TR(0x5c839b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c839d:{NFSU2_TR(0x5c839d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8395u);}goto L5c8395;}}
}
B5c839f:L5c839f:{c.instructions+=9;NFSU2_TR(0x5c839f);
__builtin_memmove((R+24),gp(0x8709b4),4);
}
B5c83a5:{NFSU2_TR(0x5c83a5);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c83ab:{NFSU2_TR(0x5c83ab);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5c83ac:{NFSU2_TR(0x5c83ac);
__builtin_memmove(gp(0x8709b4),(R+24),4);
}
B5c83b2:{NFSU2_TR(0x5c83b2);
__builtin_memmove((R+24),gp(0x8709b0),4);
}
B5c83b8:{NFSU2_TR(0x5c83b8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5c83b9:{NFSU2_TR(0x5c83b9);
__builtin_memmove(gp(0x8709b8),(R+4),4);
}
B5c83bf:{NFSU2_TR(0x5c83bf);
__builtin_memmove((R+8),(R+0),4);
}
B5c83c1:{NFSU2_TR(0x5c83c1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5c83c3:L5c83c3:{c.instructions+=6;NFSU2_TR(0x5c83c3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c83c5:{NFSU2_TR(0x5c83c5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c83c6:{NFSU2_TR(0x5c83c6);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c83c8:{NFSU2_TR(0x5c83c8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c83c9:{NFSU2_TR(0x5c83c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c83cb:{NFSU2_TR(0x5c83cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c83c3u);}goto L5c83c3;}}
}
B5c83cd:L5c83cd:{c.instructions+=4;NFSU2_TR(0x5c83cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c83ce:{NFSU2_TR(0x5c83ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c83cf:{NFSU2_TR(0x5c83cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c83d3:{NFSU2_TR(0x5c83d3);
TAIL_STATIC(0x575630u,575);
}
B5c83d8:L5c83d8:{c.instructions+=4;NFSU2_TR(0x5c83d8);
__builtin_memmove((R+0),gp(0x8709c0),4);
}
B5c83dd:{NFSU2_TR(0x5c83dd);
u8 U[14];
__builtin_memmove((U+6),gp(0x8709b4),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c83e3:{NFSU2_TR(0x5c83e3);
s1(0x80057d,u8(0x0ull));
}
B5c83ea:{NFSU2_TR(0x5c83ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5c85d5;}}
}
B5c83f0:L5c83f0:{c.instructions+=2;NFSU2_TR(0x5c83f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c83f1:{NFSU2_TR(0x5c83f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c83f6ull));
TAIL_STATIC(0x575620u,575);
}
B5c83f6:L5c83f6:{c.instructions+=6;NFSU2_TR(0x5c83f6);
__builtin_memmove((R+8),gp(0x8709b8),4);
}
B5c83fc:{NFSU2_TR(0x5c83fc);
__builtin_memmove((R+4),gp(0x8709b0),4);
}
B5c8402:{NFSU2_TR(0x5c8402);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c8405:{NFSU2_TR(0x5c8405);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5c8407:{NFSU2_TR(0x5c8407);
__builtin_memmove((R+24),(R+0),4);
}
B5c8409:{NFSU2_TR(0x5c8409);
__builtin_memmove((R+16),(R+16),4);
}
B5c8410:L5c8410:{c.instructions+=6;NFSU2_TR(0x5c8410);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c8412:{NFSU2_TR(0x5c8412);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c8413:{NFSU2_TR(0x5c8413);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c8415:{NFSU2_TR(0x5c8415);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c8416:{NFSU2_TR(0x5c8416);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c8418:{NFSU2_TR(0x5c8418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8410u);}goto L5c8410;}}
}
B5c841a:L5c841a:{c.instructions+=13;NFSU2_TR(0x5c841a);
__builtin_memmove((R+8),gp(0x8709b8),4);
}
B5c8420:{NFSU2_TR(0x5c8420);
__builtin_memmove((R+4),gp(0x8709b0),4);
}
B5c8426:{NFSU2_TR(0x5c8426);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5c842a:{NFSU2_TR(0x5c842a);
__builtin_memmove((R+24),gp(0x8709b4),4);
}
B5c8430:{NFSU2_TR(0x5c8430);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c8436:{NFSU2_TR(0x5c8436);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c8437:{NFSU2_TR(0x5c8437);
__builtin_memmove(gp(0x8709b4),(R+24),4);
}
B5c843d:{NFSU2_TR(0x5c843d);
__builtin_memmove((R+24),gp(0x8709b0),4);
}
B5c8443:{NFSU2_TR(0x5c8443);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5c8444:{NFSU2_TR(0x5c8444);
__builtin_memmove(gp(0x8709b8),(R+4),4);
}
B5c844a:{NFSU2_TR(0x5c844a);
__builtin_memmove((R+8),(R+0),4);
}
B5c844c:{NFSU2_TR(0x5c844c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5c844e:{NFSU2_TR(0x5c844e);
__builtin_memmove((R+28),(R+28),4);
}
B5c8450:L5c8450:{c.instructions+=6;NFSU2_TR(0x5c8450);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c8452:{NFSU2_TR(0x5c8452);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c8453:{NFSU2_TR(0x5c8453);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c8455:{NFSU2_TR(0x5c8455);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c8456:{NFSU2_TR(0x5c8456);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c8458:{NFSU2_TR(0x5c8458);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8450u);}goto L5c8450;}}
}
B5c845a:L5c845a:{c.instructions+=4;NFSU2_TR(0x5c845a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c845b:{NFSU2_TR(0x5c845b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c845c:{NFSU2_TR(0x5c845c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8460:{NFSU2_TR(0x5c8460);
TAIL_STATIC(0x575630u,575);
}
B5c8465:L5c8465:{c.instructions+=4;NFSU2_TR(0x5c8465);
__builtin_memmove((R+0),gp(0x8709c0),4);
}
B5c846a:{NFSU2_TR(0x5c846a);
u8 U[14];
__builtin_memmove((U+6),gp(0x8709b4),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c8470:{NFSU2_TR(0x5c8470);
s1(0x80057d,u8(0xaull));
}
B5c8477:{NFSU2_TR(0x5c8477);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5c85d5;}}
}
B5c847d:L5c847d:{c.instructions+=2;NFSU2_TR(0x5c847d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c847e:{NFSU2_TR(0x5c847e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8483ull));
TAIL_STATIC(0x575620u,575);
}
B5c8483:L5c8483:{c.instructions+=5;NFSU2_TR(0x5c8483);
__builtin_memmove((R+8),gp(0x8709b8),4);
}
B5c8489:{NFSU2_TR(0x5c8489);
__builtin_memmove((R+4),gp(0x8709b0),4);
}
B5c848f:{NFSU2_TR(0x5c848f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c8492:{NFSU2_TR(0x5c8492);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5c8494:{NFSU2_TR(0x5c8494);
__builtin_memmove((R+24),(R+0),4);
}
B5c8496:L5c8496:{c.instructions+=6;NFSU2_TR(0x5c8496);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c8498:{NFSU2_TR(0x5c8498);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c8499:{NFSU2_TR(0x5c8499);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c849b:{NFSU2_TR(0x5c849b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c849c:{NFSU2_TR(0x5c849c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c849e:{NFSU2_TR(0x5c849e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8496u);}goto L5c8496;}}
}
B5c84a0:L5c84a0:{c.instructions+=15;NFSU2_TR(0x5c84a0);
__builtin_memmove((R+8),gp(0x8709b0),4);
}
B5c84a6:{NFSU2_TR(0x5c84a6);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c84ac:{NFSU2_TR(0x5c84ac);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w1(U+8,u8(0xaull));
s1(u32(r4(U+4)),r1(U+8));
}
B5c84b0:{NFSU2_TR(0x5c84b0);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c84b6:{NFSU2_TR(0x5c84b6);
__builtin_memmove((R+24),gp(0x8709b0),4);
}
B5c84bc:{NFSU2_TR(0x5c84bc);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5c84bf:{NFSU2_TR(0x5c84bf);
__builtin_memmove((R+12),gp(0x8709b4),4);
}
B5c84c5:{NFSU2_TR(0x5c84c5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5c84c6:{NFSU2_TR(0x5c84c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5c84c7:{NFSU2_TR(0x5c84c7);
__builtin_memmove(gp(0x80057d),(R+8),1);
}
B5c84cd:{NFSU2_TR(0x5c84cd);
__builtin_memmove(gp(0x8709b4),(R+12),4);
}
B5c84d3:{NFSU2_TR(0x5c84d3);
__builtin_memmove(gp(0x8709b8),(R+4),4);
}
B5c84d9:{NFSU2_TR(0x5c84d9);
__builtin_memmove((R+8),(R+0),4);
}
B5c84db:{NFSU2_TR(0x5c84db);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5c84dd:{NFSU2_TR(0x5c84dd);
__builtin_memmove((R+4),(R+4),4);
}
B5c84e0:L5c84e0:{c.instructions+=6;NFSU2_TR(0x5c84e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c84e2:{NFSU2_TR(0x5c84e2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c84e3:{NFSU2_TR(0x5c84e3);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c84e5:{NFSU2_TR(0x5c84e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c84e6:{NFSU2_TR(0x5c84e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c84e8:{NFSU2_TR(0x5c84e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c84e0u);}goto L5c84e0;}}
}
B5c84ea:L5c84ea:{c.instructions+=4;NFSU2_TR(0x5c84ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c84eb:{NFSU2_TR(0x5c84eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c84ec:{NFSU2_TR(0x5c84ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c84f0:{NFSU2_TR(0x5c84f0);
TAIL_STATIC(0x575630u,575);
}
B5c84f5:L5c84f5:{c.instructions+=3;NFSU2_TR(0x5c84f5);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B5c84f8:{NFSU2_TR(0x5c84f8);
__builtin_memmove(gp(0x80057d),(R+12),1);
}
B5c84fe:{NFSU2_TR(0x5c84fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c8505;}}
}
B5c8500:L5c8500:{c.instructions+=2;NFSU2_TR(0x5c8500);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c8503:{NFSU2_TR(0x5c8503);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c8554;}}
}
B5c8505:L5c8505:{c.instructions+=2;NFSU2_TR(0x5c8505);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x41ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B5c8508:{NFSU2_TR(0x5c8508);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c850f;}}
}
B5c850a:L5c850a:{c.instructions+=2;NFSU2_TR(0x5c850a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x5aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c850d:{NFSU2_TR(0x5c850d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c8554;}}
}
B5c850f:L5c850f:{c.instructions+=2;NFSU2_TR(0x5c850f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B5c8512:{NFSU2_TR(0x5c8512);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c8519;}}
}
B5c8514:L5c8514:{c.instructions+=2;NFSU2_TR(0x5c8514);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c8517:{NFSU2_TR(0x5c8517);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c8554;}}
}
B5c8519:L5c8519:{c.instructions+=3;NFSU2_TR(0x5c8519);
__builtin_memmove((R+0),gp(0x80057e),1);
}
B5c851e:{NFSU2_TR(0x5c851e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c8520:{NFSU2_TR(0x5c8520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c8536;}}
}
B5c8522:L5c8522:{c.instructions+=2;NFSU2_TR(0x5c8522);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c8525:{NFSU2_TR(0x5c8525);
if(r1(R+518)){{goto L5c8554;}}
}
B5c8527:L5c8527:{c.instructions+=2;NFSU2_TR(0x5c8527);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c852a:{NFSU2_TR(0x5c852a);
if(r1(R+518)){{goto L5c8554;}}
}
B5c852c:L5c852c:{c.instructions+=2;NFSU2_TR(0x5c852c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c852f:{NFSU2_TR(0x5c852f);
if(r1(R+518)){{goto L5c8554;}}
}
B5c8531:L5c8531:{c.instructions+=2;NFSU2_TR(0x5c8531);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5c8534:{NFSU2_TR(0x5c8534);
if(r1(R+518)){{goto L5c8554;}}
}
B5c8536:L5c8536:{c.instructions+=2;NFSU2_TR(0x5c8536);
u8 U[5];
__builtin_memmove((U+3),gp(0x8709c7),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c853d:{NFSU2_TR(0x5c853d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c85d5;}}
}
B5c8543:L5c8543:{c.instructions+=2;NFSU2_TR(0x5c8543);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8544:{NFSU2_TR(0x5c8544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8549ull));
TAIL_STATIC(0x5bf260u,5bf);
}
B5c8549:L5c8549:{c.instructions+=3;NFSU2_TR(0x5c8549);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c854c:{NFSU2_TR(0x5c854c);
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
B5c854e:{NFSU2_TR(0x5c854e);
if(r1(R+518)){{goto L5c85d5;}}
}
B5c8554:L5c8554:{c.instructions+=4;NFSU2_TR(0x5c8554);
__builtin_memmove((R+0),gp(0x8709c0),4);
}
B5c8559:{NFSU2_TR(0x5c8559);
u8 U[14];
__builtin_memmove((U+6),gp(0x8709b4),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c855f:{NFSU2_TR(0x5c855f);
s1(0x8709c5,u8(0x0ull));
}
B5c8566:{NFSU2_TR(0x5c8566);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5c85d5;}}
}
B5c8568:L5c8568:{c.instructions+=2;NFSU2_TR(0x5c8568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8569:{NFSU2_TR(0x5c8569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c856eull));
TAIL_STATIC(0x575620u,575);
}
B5c856e:L5c856e:{c.instructions+=5;NFSU2_TR(0x5c856e);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c8574:{NFSU2_TR(0x5c8574);
__builtin_memmove((R+8),gp(0x8709b0),4);
}
B5c857a:{NFSU2_TR(0x5c857a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c857d:{NFSU2_TR(0x5c857d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5c857f:{NFSU2_TR(0x5c857f);
__builtin_memmove((R+24),(R+0),4);
}
B5c8581:L5c8581:{c.instructions+=6;NFSU2_TR(0x5c8581);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c8583:{NFSU2_TR(0x5c8583);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c8584:{NFSU2_TR(0x5c8584);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c8586:{NFSU2_TR(0x5c8586);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c8587:{NFSU2_TR(0x5c8587);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c8589:{NFSU2_TR(0x5c8589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8581u);}goto L5c8581;}}
}
B5c858b:L5c858b:{c.instructions+=13;NFSU2_TR(0x5c858b);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c8591:{NFSU2_TR(0x5c8591);
__builtin_memmove((R+8),gp(0x8709b0),4);
}
B5c8597:{NFSU2_TR(0x5c8597);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B5c859a:{NFSU2_TR(0x5c859a);
__builtin_memmove((R+24),gp(0x8709b4),4);
}
B5c85a0:{NFSU2_TR(0x5c85a0);
__builtin_memmove((R+4),gp(0x8709b8),4);
}
B5c85a6:{NFSU2_TR(0x5c85a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c85a7:{NFSU2_TR(0x5c85a7);
__builtin_memmove(gp(0x8709b4),(R+24),4);
}
B5c85ad:{NFSU2_TR(0x5c85ad);
__builtin_memmove((R+24),gp(0x8709b0),4);
}
B5c85b3:{NFSU2_TR(0x5c85b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5c85b4:{NFSU2_TR(0x5c85b4);
__builtin_memmove(gp(0x8709b8),(R+4),4);
}
B5c85ba:{NFSU2_TR(0x5c85ba);
__builtin_memmove((R+8),(R+0),4);
}
B5c85bc:{NFSU2_TR(0x5c85bc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5c85be:{NFSU2_TR(0x5c85be);
__builtin_memmove((R+28),(R+28),4);
}
B5c85c0:L5c85c0:{c.instructions+=6;NFSU2_TR(0x5c85c0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c85c2:{NFSU2_TR(0x5c85c2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c85c3:{NFSU2_TR(0x5c85c3);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5c85c5:{NFSU2_TR(0x5c85c5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c85c6:{NFSU2_TR(0x5c85c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c85c8:{NFSU2_TR(0x5c85c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c85c0u);}goto L5c85c0;}}
}
B5c85ca:L5c85ca:{c.instructions+=4;NFSU2_TR(0x5c85ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c85cb:{NFSU2_TR(0x5c85cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c85cc:{NFSU2_TR(0x5c85cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c85d0:{NFSU2_TR(0x5c85d0);
TAIL_STATIC(0x575630u,575);
}
B5c85d5:L5c85d5:{c.instructions+=2;NFSU2_TR(0x5c85d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c85d6:{NFSU2_TR(0x5c85d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c85d7:L5c85d7:{c.instructions+=1;NFSU2_TR(0x5c85d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8600:L5c8600:{c.instructions+=17;NFSU2_TR(0x5c8600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8601:{NFSU2_TR(0x5c8601);
__builtin_memmove((R+24),(R+4),4);
}
B5c8603:{NFSU2_TR(0x5c8603);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5c8609:{NFSU2_TR(0x5c8609);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c860b:{NFSU2_TR(0x5c860b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c860e:{NFSU2_TR(0x5c860e);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B5c8611:{NFSU2_TR(0x5c8611);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c8614:{NFSU2_TR(0x5c8614);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c8616:{NFSU2_TR(0x5c8616);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c8619:{NFSU2_TR(0x5c8619);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B5c861c:{NFSU2_TR(0x5c861c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c861f:{NFSU2_TR(0x5c861f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5c8621:{NFSU2_TR(0x5c8621);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c8624:{NFSU2_TR(0x5c8624);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+8)),r2(U+0));
}
B5c8627:{NFSU2_TR(0x5c8627);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c862a:{NFSU2_TR(0x5c862a);
__builtin_memmove((R+4),(R+24),4);
}
B5c862c:{NFSU2_TR(0x5c862c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8631ull));
TAIL_STATIC(0x5bf750u,5bf);
}
B5c8631:L5c8631:{c.instructions+=2;NFSU2_TR(0x5c8631);
__builtin_memmove((R+4),(R+24),4);
}
B5c8633:{NFSU2_TR(0x5c8633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8638ull));
TAIL_STATIC(0x5bf750u,5bf);
}
B5c8638:L5c8638:{c.instructions+=3;NFSU2_TR(0x5c8638);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c863a:{NFSU2_TR(0x5c863a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c863e:{NFSU2_TR(0x5c863e);
u8 U[4];
__builtin_memmove((U+0),gp(0x78331c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8644ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c8644:L5c8644:{c.instructions+=3;NFSU2_TR(0x5c8644);
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
B5c8646:{NFSU2_TR(0x5c8646);
__builtin_memmove((R+0),(R+24),4);
}
B5c8648:{NFSU2_TR(0x5c8648);
if(r1(R+518)){{goto L5c864e;}}
}
B5c864a:L5c864a:{c.instructions+=1;NFSU2_TR(0x5c864a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c864e:L5c864e:{c.instructions+=2;NFSU2_TR(0x5c864e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c864f:{NFSU2_TR(0x5c864f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8650:L5c8650:{c.instructions+=1;NFSU2_TR(0x5c8650);
TAIL_STATIC(0x5bfbb0u,5bf);
}
B5c8660:L5c8660:{c.instructions+=7;NFSU2_TR(0x5c8660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5c8663:{NFSU2_TR(0x5c8663);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8664:{NFSU2_TR(0x5c8664);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c8668:{NFSU2_TR(0x5c8668);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c866f:{NFSU2_TR(0x5c866f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c8671:{NFSU2_TR(0x5c8671);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8672:{NFSU2_TR(0x5c8672);
if(r1(R+518)){{goto L5c86ee;}}
}
B5c8674:L5c8674:{c.instructions+=4;NFSU2_TR(0x5c8674);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c8678:{NFSU2_TR(0x5c8678);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c867b:{NFSU2_TR(0x5c867b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c867e:{NFSU2_TR(0x5c867e);
if(r1(R+518)){{goto L5c86d4;}}
}
B5c8680:L5c8680:{c.instructions+=12;NFSU2_TR(0x5c8680);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c8684:{NFSU2_TR(0x5c8684);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8685:{NFSU2_TR(0x5c8685);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8687:{NFSU2_TR(0x5c8687);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c868b:{NFSU2_TR(0x5c868b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c868d:{NFSU2_TR(0x5c868d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c868e:{NFSU2_TR(0x5c868e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c8696:{NFSU2_TR(0x5c8696);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c869e:{NFSU2_TR(0x5c869e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c86a6:{NFSU2_TR(0x5c86a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffd8f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c86ae:{NFSU2_TR(0x5c86ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x2710ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c86b6:{NFSU2_TR(0x5c86b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c86b9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c86b9:L5c86b9:{c.instructions+=2;NFSU2_TR(0x5c86b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c86bb:{NFSU2_TR(0x5c86bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c86d4;}}
}
B5c86bd:L5c86bd:{c.instructions+=2;NFSU2_TR(0x5c86bd);
u8 U[4];
w4(U+0,u32(0x7a3c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c86c2:{NFSU2_TR(0x5c86c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c86c7ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c86c7:L5c86c7:{c.instructions+=6;NFSU2_TR(0x5c86c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c86ca:{NFSU2_TR(0x5c86ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c86cb:{NFSU2_TR(0x5c86cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c86cd:{NFSU2_TR(0x5c86cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c86ce:{NFSU2_TR(0x5c86ce);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c86d1:{NFSU2_TR(0x5c86d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c86d4:L5c86d4:{c.instructions+=2;NFSU2_TR(0x5c86d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5c86d8:{NFSU2_TR(0x5c86d8);
if(r1(R+518)){{goto L5c86ee;}}
}
B5c86da:L5c86da:{c.instructions+=4;NFSU2_TR(0x5c86da);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c86e1:{NFSU2_TR(0x5c86e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c86e2:{NFSU2_TR(0x5c86e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c86e5:{NFSU2_TR(0x5c86e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5c86ee;}}
}
B5c86e7:L5c86e7:{c.instructions+=1;NFSU2_TR(0x5c86e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5c86ee:L5c86ee:{c.instructions+=5;NFSU2_TR(0x5c86ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c86ef:{NFSU2_TR(0x5c86ef);
w4(R+0,u32(0x1ull));
}
B5c86f4:{NFSU2_TR(0x5c86f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c86f5:{NFSU2_TR(0x5c86f5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c86f8:{NFSU2_TR(0x5c86f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8700:L5c8700:{c.instructions+=9;NFSU2_TR(0x5c8700);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8701:{NFSU2_TR(0x5c8701);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8702:{NFSU2_TR(0x5c8702);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c8706:{NFSU2_TR(0x5c8706);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c870d:{NFSU2_TR(0x5c870d);
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
B5c870f:{NFSU2_TR(0x5c870f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8710:{NFSU2_TR(0x5c8710);
__builtin_memmove((R+28),(R+4),4);
}
B5c8712:{NFSU2_TR(0x5c8712);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8716:{NFSU2_TR(0x5c8716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c872e;}}
}
B5c8718:L5c8718:{c.instructions+=3;NFSU2_TR(0x5c8718);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8719:{NFSU2_TR(0x5c8719);
u8 U[4];
w4(U+0,u32(0x7a3f58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c871e:{NFSU2_TR(0x5c871e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8723ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8723:L5c8723:{c.instructions+=6;NFSU2_TR(0x5c8723);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8726:{NFSU2_TR(0x5c8726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8727:{NFSU2_TR(0x5c8727);
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
B5c8729:{NFSU2_TR(0x5c8729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c872a:{NFSU2_TR(0x5c872a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c872b:{NFSU2_TR(0x5c872b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c872e:L5c872e:{c.instructions+=5;NFSU2_TR(0x5c872e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c8730:{NFSU2_TR(0x5c8730);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8731:{NFSU2_TR(0x5c8731);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8732:{NFSU2_TR(0x5c8732);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8733:{NFSU2_TR(0x5c8733);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8736ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c8736:L5c8736:{c.instructions+=2;NFSU2_TR(0x5c8736);
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
B5c8738:{NFSU2_TR(0x5c8738);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c87a4;}}
}
B5c873a:L5c873a:{c.instructions+=4;NFSU2_TR(0x5c873a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c8741:{NFSU2_TR(0x5c8741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c8743:{NFSU2_TR(0x5c8743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8744:{NFSU2_TR(0x5c8744);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8747ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c8747:L5c8747:{c.instructions+=2;NFSU2_TR(0x5c8747);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c8749:{NFSU2_TR(0x5c8749);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c8d08;}}
}
B5c874f:L5c874f:{c.instructions+=3;NFSU2_TR(0x5c874f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x86e5bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c8755:{NFSU2_TR(0x5c8755);
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
B5c8757:{NFSU2_TR(0x5c8757);
if(r1(R+518)){{goto L5c8d08;}}
}
B5c875d:L5c875d:{c.instructions+=5;NFSU2_TR(0x5c875d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c8764:{NFSU2_TR(0x5c8764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c8766:{NFSU2_TR(0x5c8766);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8768:{NFSU2_TR(0x5c8768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8769:{NFSU2_TR(0x5c8769);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c876cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c876c:L5c876c:{c.instructions+=3;NFSU2_TR(0x5c876c);
__builtin_memmove((R+24),(R+0),4);
}
B5c876e:{NFSU2_TR(0x5c876e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c8770:{NFSU2_TR(0x5c8770);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c8792;}}
}
B5c8772:L5c8772:{c.instructions+=3;NFSU2_TR(0x5c8772);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8773:{NFSU2_TR(0x5c8773);
u8 U[4];
w4(U+0,u32(0x7a3f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8778:{NFSU2_TR(0x5c8778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c877dull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c877d:L5c877d:{c.instructions+=9;NFSU2_TR(0x5c877d);
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
B5c8780:{NFSU2_TR(0x5c8780);
__builtin_memmove((R+0),(R+24),4);
}
B5c8782:{NFSU2_TR(0x5c8782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c8783:{NFSU2_TR(0x5c8783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c8784:{NFSU2_TR(0x5c8784);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c878c:{NFSU2_TR(0x5c878c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c878d:{NFSU2_TR(0x5c878d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c878e:{NFSU2_TR(0x5c878e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c878f:{NFSU2_TR(0x5c878f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8792:L5c8792:{c.instructions+=8;NFSU2_TR(0x5c8792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c8793:{NFSU2_TR(0x5c8793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c8794:{NFSU2_TR(0x5c8794);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c879c:{NFSU2_TR(0x5c879c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c879d:{NFSU2_TR(0x5c879d);
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
B5c879f:{NFSU2_TR(0x5c879f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c87a0:{NFSU2_TR(0x5c87a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c87a1:{NFSU2_TR(0x5c87a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c87a4:L5c87a4:{c.instructions+=3;NFSU2_TR(0x5c87a4);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c87ab:{NFSU2_TR(0x5c87ab);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c87ad:{NFSU2_TR(0x5c87ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c87f6;}}
}
B5c87af:L5c87af:{c.instructions+=3;NFSU2_TR(0x5c87af);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c87b6:{NFSU2_TR(0x5c87b6);
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
B5c87b8:{NFSU2_TR(0x5c87b8);
if(r1(R+518)){{goto L5c87f6;}}
}
B5c87ba:L5c87ba:{c.instructions+=5;NFSU2_TR(0x5c87ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c87c1:{NFSU2_TR(0x5c87c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c87c3:{NFSU2_TR(0x5c87c3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c87c5:{NFSU2_TR(0x5c87c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c87c6:{NFSU2_TR(0x5c87c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c87c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c87c9:L5c87c9:{c.instructions+=3;NFSU2_TR(0x5c87c9);
__builtin_memmove((R+24),(R+0),4);
}
B5c87cb:{NFSU2_TR(0x5c87cb);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c87cd:{NFSU2_TR(0x5c87cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c87ee;}}
}
B5c87cf:L5c87cf:{c.instructions+=2;NFSU2_TR(0x5c87cf);
u8 U[4];
w4(U+0,u32(0x7a3f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c87d4:{NFSU2_TR(0x5c87d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c87d9ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c87d9:L5c87d9:{c.instructions+=9;NFSU2_TR(0x5c87d9);
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
B5c87dc:{NFSU2_TR(0x5c87dc);
__builtin_memmove((R+0),(R+24),4);
}
B5c87de:{NFSU2_TR(0x5c87de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c87df:{NFSU2_TR(0x5c87df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c87e0:{NFSU2_TR(0x5c87e0);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c87e8:{NFSU2_TR(0x5c87e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c87e9:{NFSU2_TR(0x5c87e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c87ea:{NFSU2_TR(0x5c87ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c87eb:{NFSU2_TR(0x5c87eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c87ee:L5c87ee:{c.instructions+=1;NFSU2_TR(0x5c87ee);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5c87f6:L5c87f6:{c.instructions+=9;NFSU2_TR(0x5c87f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c87fa:{NFSU2_TR(0x5c87fa);
__builtin_memmove((R+20),(R+12),4);
}
B5c87fc:{NFSU2_TR(0x5c87fc);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(s64(s32(u32(0x110ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+20,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+20)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5c8802:{NFSU2_TR(0x5c8802);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c8808:{NFSU2_TR(0x5c8808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5c880b:{NFSU2_TR(0x5c880b);
__builtin_memmove((R+24),(R+8),4);
}
B5c880d:{NFSU2_TR(0x5c880d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c880e:{NFSU2_TR(0x5c880e);
w4(R+4,u32(0x44ull));
}
B5c8813:{NFSU2_TR(0x5c8813);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8817:L5c8817:{c.instructions+=1;NFSU2_TR(0x5c8817);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c8819;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8817u);}goto L5c8817;}
}
B5c8819:L5c8819:{c.instructions+=5;NFSU2_TR(0x5c8819);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c8820:{NFSU2_TR(0x5c8820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c8822:{NFSU2_TR(0x5c8822);
u8 U[4];
w4(U+0,u32(0x110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8827:{NFSU2_TR(0x5c8827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8828:{NFSU2_TR(0x5c8828);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c882bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c882b:L5c882b:{c.instructions+=3;NFSU2_TR(0x5c882b);
if(mod_hook_table[20]){SPILL();c.pc=0x5c882bu;mod_hook_table[20](c);SPILL();if(c.pc!=0x5c882bu){TAIL_DYNAMIC(c.pc);}}
__builtin_memmove((R+24),(R+0),4);
}
B5c882d:{NFSU2_TR(0x5c882d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c882f:{NFSU2_TR(0x5c882f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c8869;}}
}
B5c8831:L5c8831:{c.instructions+=3;NFSU2_TR(0x5c8831);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8832:{NFSU2_TR(0x5c8832);
u8 U[4];
w4(U+0,u32(0x7a3ed0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8837:{NFSU2_TR(0x5c8837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c883cull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c883c:L5c883c:{c.instructions+=3;NFSU2_TR(0x5c883c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c883f:{NFSU2_TR(0x5c883f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8007001eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8007001eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8007001eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c8845:{NFSU2_TR(0x5c8845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c885f;}}
}
B5c8847:L5c8847:{c.instructions+=3;NFSU2_TR(0x5c8847);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8848:{NFSU2_TR(0x5c8848);
u8 U[4];
w4(U+0,u32(0x7a3ea8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c884d:{NFSU2_TR(0x5c884d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8852ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8852:L5c8852:{c.instructions+=4;NFSU2_TR(0x5c8852);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8856:{NFSU2_TR(0x5c8856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8859:{NFSU2_TR(0x5c8859);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c885a:{NFSU2_TR(0x5c885a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c885full));
TAIL_STATIC(0x5bfa50u,5bf);
}
B5c885f:L5c885f:{c.instructions+=7;NFSU2_TR(0x5c885f);
__builtin_memmove((R+0),(R+24),4);
}
B5c8861:{NFSU2_TR(0x5c8861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c8862:{NFSU2_TR(0x5c8862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c8863:{NFSU2_TR(0x5c8863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8864:{NFSU2_TR(0x5c8864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8865:{NFSU2_TR(0x5c8865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8866:{NFSU2_TR(0x5c8866);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8869:L5c8869:{c.instructions+=2;NFSU2_TR(0x5c8869);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c886c:{NFSU2_TR(0x5c886c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88c6;}}
}
B5c886e:L5c886e:{c.instructions+=4;NFSU2_TR(0x5c886e);
w4(R+4,u32(0x4ull));
}
B5c8873:{NFSU2_TR(0x5c8873);
w4(R+28,u32(0x870738ull));
}
B5c8878:{NFSU2_TR(0x5c8878);
w4(R+24,u32(0x8005b0ull));
}
B5c887d:{NFSU2_TR(0x5c887d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5c887f:L5c887f:{c.instructions+=1;NFSU2_TR(0x5c887f);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c8881;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c887fu);}goto L5c887f;}}
}
B5c8881:L5c8881:{c.instructions+=1;NFSU2_TR(0x5c8881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88c6;}}
}
B5c8883:L5c8883:{c.instructions+=4;NFSU2_TR(0x5c8883);
__builtin_memmove((R+4),gp(0x8700d0),4);
}
B5c8889:{NFSU2_TR(0x5c8889);
w4(R+0,u32(0x2710ull));
}
B5c888e:{NFSU2_TR(0x5c888e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c8890:{NFSU2_TR(0x5c8890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88c6;}}
}
B5c8892:L5c8892:{c.instructions+=2;NFSU2_TR(0x5c8892);
u8 U[8];
__builtin_memmove((U+0),gp(0x8700d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c8898:{NFSU2_TR(0x5c8898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88c6;}}
}
B5c889a:L5c889a:{c.instructions+=2;NFSU2_TR(0x5c889a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8700d8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c88a0:{NFSU2_TR(0x5c88a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88c6;}}
}
B5c88a2:L5c88a2:{c.instructions+=2;NFSU2_TR(0x5c88a2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8700e4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c88a8:{NFSU2_TR(0x5c88a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88c6;}}
}
B5c88aa:L5c88aa:{c.instructions+=6;NFSU2_TR(0x5c88aa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c88ac:{NFSU2_TR(0x5c88ac);
__builtin_memmove(gp(0x8700d0),(R+24),4);
}
B5c88b2:{NFSU2_TR(0x5c88b2);
__builtin_memmove(gp(0x8700d4),(R+24),4);
}
B5c88b8:{NFSU2_TR(0x5c88b8);
__builtin_memmove(gp(0x8700d8),(R+24),4);
}
B5c88be:{NFSU2_TR(0x5c88be);
__builtin_memmove(gp(0x8700e4),(R+24),4);
}
B5c88c4:{NFSU2_TR(0x5c88c4);
{goto L5c88c8;}
}
B5c88c6:L5c88c6:{c.instructions+=1;NFSU2_TR(0x5c88c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c88c8:L5c88c8:{c.instructions+=3;NFSU2_TR(0x5c88c8);
__builtin_memmove((R+0),gp(0x8709f0),1);
}
B5c88cd:{NFSU2_TR(0x5c88cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c88cf:{NFSU2_TR(0x5c88cf);
if(r1(R+518)){{goto L5c8d08;}}
}
B5c88d5:L5c88d5:{c.instructions+=3;NFSU2_TR(0x5c88d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c88d9:{NFSU2_TR(0x5c88d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c88df:{NFSU2_TR(0x5c88df);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B5c88e1:L5c88e1:{c.instructions+=3;NFSU2_TR(0x5c88e1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5c88e3:{NFSU2_TR(0x5c88e3);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(R+4))-u32(r1(U+9))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B5c88e6:{NFSU2_TR(0x5c88e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c88fc;}}
}
B5c88e8:L5c88e8:{c.instructions+=4;NFSU2_TR(0x5c88e8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c88e9:{NFSU2_TR(0x5c88e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c88ea:{NFSU2_TR(0x5c88ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x110ull))));
}
B5c88f0:{NFSU2_TR(0x5c88f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c88e1u);}goto L5c88e1;}}
}
B5c88f2:L5c88f2:{c.instructions+=7;NFSU2_TR(0x5c88f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c88f3:{NFSU2_TR(0x5c88f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c88f4:{NFSU2_TR(0x5c88f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c88f5:{NFSU2_TR(0x5c88f5);
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
B5c88f7:{NFSU2_TR(0x5c88f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c88f8:{NFSU2_TR(0x5c88f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c88f9:{NFSU2_TR(0x5c88f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c88fc:L5c88fc:{c.instructions+=3;NFSU2_TR(0x5c88fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c88fd:{NFSU2_TR(0x5c88fd);
u8 U[4];
w4(U+0,u32(0x7a3e88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8902:{NFSU2_TR(0x5c8902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8907ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8907:L5c8907:{c.instructions+=6;NFSU2_TR(0x5c8907);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c890b:{NFSU2_TR(0x5c890b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8911:{NFSU2_TR(0x5c8911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c8913:{NFSU2_TR(0x5c8913);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8916:{NFSU2_TR(0x5c8916);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c8918:{NFSU2_TR(0x5c8918);
if(r1(R+518)){{goto L5c8928;}}
}
B5c891a:L5c891a:{c.instructions+=3;NFSU2_TR(0x5c891a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c891b:{NFSU2_TR(0x5c891b);
u8 U[4];
w4(U+0,u32(0x7a3e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8920:{NFSU2_TR(0x5c8920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8925ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8925:L5c8925:{c.instructions+=1;NFSU2_TR(0x5c8925);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8928:L5c8928:{c.instructions+=3;NFSU2_TR(0x5c8928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c892e:{NFSU2_TR(0x5c892e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8931:{NFSU2_TR(0x5c8931);
if(r1(R+518)){{goto L5c8941;}}
}
B5c8933:L5c8933:{c.instructions+=3;NFSU2_TR(0x5c8933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8934:{NFSU2_TR(0x5c8934);
u8 U[4];
w4(U+0,u32(0x7a3e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8939:{NFSU2_TR(0x5c8939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c893eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c893e:L5c893e:{c.instructions+=1;NFSU2_TR(0x5c893e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8941:L5c8941:{c.instructions+=3;NFSU2_TR(0x5c8941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8947:{NFSU2_TR(0x5c8947);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c894a:{NFSU2_TR(0x5c894a);
if(r1(R+518)){{goto L5c895a;}}
}
B5c894c:L5c894c:{c.instructions+=3;NFSU2_TR(0x5c894c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c894d:{NFSU2_TR(0x5c894d);
u8 U[4];
w4(U+0,u32(0x7a3e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8952:{NFSU2_TR(0x5c8952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8957ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8957:L5c8957:{c.instructions+=1;NFSU2_TR(0x5c8957);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c895a:L5c895a:{c.instructions+=3;NFSU2_TR(0x5c895a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8960:{NFSU2_TR(0x5c8960);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8963:{NFSU2_TR(0x5c8963);
if(r1(R+518)){{goto L5c8973;}}
}
B5c8965:L5c8965:{c.instructions+=3;NFSU2_TR(0x5c8965);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8966:{NFSU2_TR(0x5c8966);
u8 U[4];
w4(U+0,u32(0x7a3e58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c896b:{NFSU2_TR(0x5c896b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8970ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8970:L5c8970:{c.instructions+=1;NFSU2_TR(0x5c8970);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8973:L5c8973:{c.instructions+=3;NFSU2_TR(0x5c8973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8979:{NFSU2_TR(0x5c8979);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c897c:{NFSU2_TR(0x5c897c);
if(r1(R+518)){{goto L5c898c;}}
}
B5c897e:L5c897e:{c.instructions+=3;NFSU2_TR(0x5c897e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c897f:{NFSU2_TR(0x5c897f);
u8 U[4];
w4(U+0,u32(0x7a3e4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8984:{NFSU2_TR(0x5c8984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8989ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8989:L5c8989:{c.instructions+=1;NFSU2_TR(0x5c8989);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c898c:L5c898c:{c.instructions+=3;NFSU2_TR(0x5c898c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8992:{NFSU2_TR(0x5c8992);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8995:{NFSU2_TR(0x5c8995);
if(r1(R+518)){{goto L5c89a5;}}
}
B5c8997:L5c8997:{c.instructions+=3;NFSU2_TR(0x5c8997);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8998:{NFSU2_TR(0x5c8998);
u8 U[4];
w4(U+0,u32(0x7a3e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c899d:{NFSU2_TR(0x5c899d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c89a2ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c89a2:L5c89a2:{c.instructions+=1;NFSU2_TR(0x5c89a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c89a5:L5c89a5:{c.instructions+=3;NFSU2_TR(0x5c89a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870070ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c89ab:{NFSU2_TR(0x5c89ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c89b1:{NFSU2_TR(0x5c89b1);
if(r1(R+518)){{goto L5c89c1;}}
}
B5c89b3:L5c89b3:{c.instructions+=3;NFSU2_TR(0x5c89b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c89b4:{NFSU2_TR(0x5c89b4);
u8 U[4];
w4(U+0,u32(0x7a3e34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c89b9:{NFSU2_TR(0x5c89b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c89beull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c89be:L5c89be:{c.instructions+=1;NFSU2_TR(0x5c89be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c89c1:L5c89c1:{c.instructions+=3;NFSU2_TR(0x5c89c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870074ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c89c7:{NFSU2_TR(0x5c89c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c89cd:{NFSU2_TR(0x5c89cd);
if(r1(R+518)){{goto L5c89dd;}}
}
B5c89cf:L5c89cf:{c.instructions+=3;NFSU2_TR(0x5c89cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c89d0:{NFSU2_TR(0x5c89d0);
u8 U[4];
w4(U+0,u32(0x7a3e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c89d5:{NFSU2_TR(0x5c89d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c89daull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c89da:L5c89da:{c.instructions+=1;NFSU2_TR(0x5c89da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c89dd:L5c89dd:{c.instructions+=3;NFSU2_TR(0x5c89dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870078ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c89e3:{NFSU2_TR(0x5c89e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c89e9:{NFSU2_TR(0x5c89e9);
if(r1(R+518)){{goto L5c89f9;}}
}
B5c89eb:L5c89eb:{c.instructions+=3;NFSU2_TR(0x5c89eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c89ec:{NFSU2_TR(0x5c89ec);
u8 U[4];
w4(U+0,u32(0x7a3e1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c89f1:{NFSU2_TR(0x5c89f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c89f6ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c89f6:L5c89f6:{c.instructions+=1;NFSU2_TR(0x5c89f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c89f9:L5c89f9:{c.instructions+=3;NFSU2_TR(0x5c89f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x87007cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c89ff:{NFSU2_TR(0x5c89ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8a05:{NFSU2_TR(0x5c8a05);
if(r1(R+518)){{goto L5c8a15;}}
}
B5c8a07:L5c8a07:{c.instructions+=3;NFSU2_TR(0x5c8a07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a08:{NFSU2_TR(0x5c8a08);
u8 U[4];
w4(U+0,u32(0x7a3e0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a0d:{NFSU2_TR(0x5c8a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8a12ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8a12:L5c8a12:{c.instructions+=1;NFSU2_TR(0x5c8a12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8a15:L5c8a15:{c.instructions+=3;NFSU2_TR(0x5c8a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870080ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8a1b:{NFSU2_TR(0x5c8a1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8a21:{NFSU2_TR(0x5c8a21);
if(r1(R+518)){{goto L5c8a31;}}
}
B5c8a23:L5c8a23:{c.instructions+=3;NFSU2_TR(0x5c8a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a24:{NFSU2_TR(0x5c8a24);
u8 U[4];
w4(U+0,u32(0x7a3dfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a29:{NFSU2_TR(0x5c8a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8a2eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8a2e:L5c8a2e:{c.instructions+=1;NFSU2_TR(0x5c8a2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8a31:L5c8a31:{c.instructions+=3;NFSU2_TR(0x5c8a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870084ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8a37:{NFSU2_TR(0x5c8a37);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8a3d:{NFSU2_TR(0x5c8a3d);
if(r1(R+518)){{goto L5c8a4d;}}
}
B5c8a3f:L5c8a3f:{c.instructions+=3;NFSU2_TR(0x5c8a3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a40:{NFSU2_TR(0x5c8a40);
u8 U[4];
w4(U+0,u32(0x7a3decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a45:{NFSU2_TR(0x5c8a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8a4aull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8a4a:L5c8a4a:{c.instructions+=1;NFSU2_TR(0x5c8a4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8a4d:L5c8a4d:{c.instructions+=3;NFSU2_TR(0x5c8a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870090ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8a53:{NFSU2_TR(0x5c8a53);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8a59:{NFSU2_TR(0x5c8a59);
if(r1(R+518)){{goto L5c8a69;}}
}
B5c8a5b:L5c8a5b:{c.instructions+=3;NFSU2_TR(0x5c8a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a5c:{NFSU2_TR(0x5c8a5c);
u8 U[4];
w4(U+0,u32(0x7a3de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a61:{NFSU2_TR(0x5c8a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8a66ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8a66:L5c8a66:{c.instructions+=1;NFSU2_TR(0x5c8a66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8a69:L5c8a69:{c.instructions+=3;NFSU2_TR(0x5c8a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870094ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8a6f:{NFSU2_TR(0x5c8a6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8a75:{NFSU2_TR(0x5c8a75);
if(r1(R+518)){{goto L5c8a85;}}
}
B5c8a77:L5c8a77:{c.instructions+=3;NFSU2_TR(0x5c8a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a78:{NFSU2_TR(0x5c8a78);
u8 U[4];
w4(U+0,u32(0x7a3dd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a7d:{NFSU2_TR(0x5c8a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8a82ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8a82:L5c8a82:{c.instructions+=1;NFSU2_TR(0x5c8a82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8a85:L5c8a85:{c.instructions+=3;NFSU2_TR(0x5c8a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870098ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8a8b:{NFSU2_TR(0x5c8a8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8a91:{NFSU2_TR(0x5c8a91);
if(r1(R+518)){{goto L5c8aa1;}}
}
B5c8a93:L5c8a93:{c.instructions+=3;NFSU2_TR(0x5c8a93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a94:{NFSU2_TR(0x5c8a94);
u8 U[4];
w4(U+0,u32(0x7a3dc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8a99:{NFSU2_TR(0x5c8a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8a9eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8a9e:L5c8a9e:{c.instructions+=1;NFSU2_TR(0x5c8a9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8aa1:L5c8aa1:{c.instructions+=3;NFSU2_TR(0x5c8aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x87009cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8aa7:{NFSU2_TR(0x5c8aa7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8aad:{NFSU2_TR(0x5c8aad);
if(r1(R+518)){{goto L5c8abd;}}
}
B5c8aaf:L5c8aaf:{c.instructions+=3;NFSU2_TR(0x5c8aaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ab0:{NFSU2_TR(0x5c8ab0);
u8 U[4];
w4(U+0,u32(0x7a3db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ab5:{NFSU2_TR(0x5c8ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8abaull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8aba:L5c8aba:{c.instructions+=1;NFSU2_TR(0x5c8aba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8abd:L5c8abd:{c.instructions+=3;NFSU2_TR(0x5c8abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8ac3:{NFSU2_TR(0x5c8ac3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8ac9:{NFSU2_TR(0x5c8ac9);
if(r1(R+518)){{goto L5c8ad9;}}
}
B5c8acb:L5c8acb:{c.instructions+=3;NFSU2_TR(0x5c8acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8acc:{NFSU2_TR(0x5c8acc);
u8 U[4];
w4(U+0,u32(0x7a3da8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ad1:{NFSU2_TR(0x5c8ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8ad6ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8ad6:L5c8ad6:{c.instructions+=1;NFSU2_TR(0x5c8ad6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8ad9:L5c8ad9:{c.instructions+=3;NFSU2_TR(0x5c8ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8adf:{NFSU2_TR(0x5c8adf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8ae5:{NFSU2_TR(0x5c8ae5);
if(r1(R+518)){{goto L5c8af5;}}
}
B5c8ae7:L5c8ae7:{c.instructions+=3;NFSU2_TR(0x5c8ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ae8:{NFSU2_TR(0x5c8ae8);
u8 U[4];
w4(U+0,u32(0x7a3d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8aed:{NFSU2_TR(0x5c8aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8af2ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8af2:L5c8af2:{c.instructions+=1;NFSU2_TR(0x5c8af2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8af5:L5c8af5:{c.instructions+=3;NFSU2_TR(0x5c8af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8afb:{NFSU2_TR(0x5c8afb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8b01:{NFSU2_TR(0x5c8b01);
if(r1(R+518)){{goto L5c8b11;}}
}
B5c8b03:L5c8b03:{c.instructions+=3;NFSU2_TR(0x5c8b03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b04:{NFSU2_TR(0x5c8b04);
u8 U[4];
w4(U+0,u32(0x7a3d8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b09:{NFSU2_TR(0x5c8b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8b0eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8b0e:L5c8b0e:{c.instructions+=1;NFSU2_TR(0x5c8b0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8b11:L5c8b11:{c.instructions+=3;NFSU2_TR(0x5c8b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8b17:{NFSU2_TR(0x5c8b17);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8b1d:{NFSU2_TR(0x5c8b1d);
if(r1(R+518)){{goto L5c8b2d;}}
}
B5c8b1f:L5c8b1f:{c.instructions+=3;NFSU2_TR(0x5c8b1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b20:{NFSU2_TR(0x5c8b20);
u8 U[4];
w4(U+0,u32(0x7a3d80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b25:{NFSU2_TR(0x5c8b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8b2aull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8b2a:L5c8b2a:{c.instructions+=1;NFSU2_TR(0x5c8b2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8b2d:L5c8b2d:{c.instructions+=3;NFSU2_TR(0x5c8b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8b33:{NFSU2_TR(0x5c8b33);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8b39:{NFSU2_TR(0x5c8b39);
if(r1(R+518)){{goto L5c8b49;}}
}
B5c8b3b:L5c8b3b:{c.instructions+=3;NFSU2_TR(0x5c8b3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b3c:{NFSU2_TR(0x5c8b3c);
u8 U[4];
w4(U+0,u32(0x7a3d74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b41:{NFSU2_TR(0x5c8b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8b46ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8b46:L5c8b46:{c.instructions+=1;NFSU2_TR(0x5c8b46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8b49:L5c8b49:{c.instructions+=3;NFSU2_TR(0x5c8b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8b4f:{NFSU2_TR(0x5c8b4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8b55:{NFSU2_TR(0x5c8b55);
if(r1(R+518)){{goto L5c8b65;}}
}
B5c8b57:L5c8b57:{c.instructions+=3;NFSU2_TR(0x5c8b57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b58:{NFSU2_TR(0x5c8b58);
u8 U[4];
w4(U+0,u32(0x7a3d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b5d:{NFSU2_TR(0x5c8b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8b62ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8b62:L5c8b62:{c.instructions+=1;NFSU2_TR(0x5c8b62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8b65:L5c8b65:{c.instructions+=3;NFSU2_TR(0x5c8b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8b6b:{NFSU2_TR(0x5c8b6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8b71:{NFSU2_TR(0x5c8b71);
if(r1(R+518)){{goto L5c8b81;}}
}
B5c8b73:L5c8b73:{c.instructions+=3;NFSU2_TR(0x5c8b73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b74:{NFSU2_TR(0x5c8b74);
u8 U[4];
w4(U+0,u32(0x7a3d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b79:{NFSU2_TR(0x5c8b79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8b7eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8b7e:L5c8b7e:{c.instructions+=1;NFSU2_TR(0x5c8b7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8b81:L5c8b81:{c.instructions+=3;NFSU2_TR(0x5c8b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8b87:{NFSU2_TR(0x5c8b87);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c8b8d:{NFSU2_TR(0x5c8b8d);
if(r1(R+518)){{goto L5c8b9d;}}
}
B5c8b8f:L5c8b8f:{c.instructions+=3;NFSU2_TR(0x5c8b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b90:{NFSU2_TR(0x5c8b90);
u8 U[4];
w4(U+0,u32(0x7a3d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8b95:{NFSU2_TR(0x5c8b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8b9aull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8b9a:L5c8b9a:{c.instructions+=1;NFSU2_TR(0x5c8b9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8b9d:L5c8b9d:{c.instructions+=5;NFSU2_TR(0x5c8b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x870088ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c8ba3:{NFSU2_TR(0x5c8ba3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8ba5:{NFSU2_TR(0x5c8ba5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8ba9:{NFSU2_TR(0x5c8ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8baf:{NFSU2_TR(0x5c8baf);
}
B5c8bb0:L5c8bb0:{c.instructions+=4;NFSU2_TR(0x5c8bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8bb4:{NFSU2_TR(0x5c8bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c8bb6:{NFSU2_TR(0x5c8bb6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c8bb8:{NFSU2_TR(0x5c8bb8);
if(r1(R+518)){{goto L5c8bc9;}}
}
B5c8bba:L5c8bba:{c.instructions+=4;NFSU2_TR(0x5c8bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8bbb:{NFSU2_TR(0x5c8bbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8bbc:{NFSU2_TR(0x5c8bbc);
u8 U[4];
w4(U+0,u32(0x7a3d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8bc1:{NFSU2_TR(0x5c8bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8bc6ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8bc6:L5c8bc6:{c.instructions+=1;NFSU2_TR(0x5c8bc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c8bc9:L5c8bc9:{c.instructions+=7;NFSU2_TR(0x5c8bc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8bcd:{NFSU2_TR(0x5c8bcd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c8bce:{NFSU2_TR(0x5c8bce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5c8bd1:{NFSU2_TR(0x5c8bd1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5c8bd4:{NFSU2_TR(0x5c8bd4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c8bd7:{NFSU2_TR(0x5c8bd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8bdb:{NFSU2_TR(0x5c8bdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8bb0u);}goto L5c8bb0;}}
}
B5c8bdd:L5c8bdd:{c.instructions+=5;NFSU2_TR(0x5c8bdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8be3:{NFSU2_TR(0x5c8be3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8be5:{NFSU2_TR(0x5c8be5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8be9:{NFSU2_TR(0x5c8be9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8bef:{NFSU2_TR(0x5c8bef);
}
B5c8bf0:L5c8bf0:{c.instructions+=4;NFSU2_TR(0x5c8bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c8bf4:{NFSU2_TR(0x5c8bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c8bf6:{NFSU2_TR(0x5c8bf6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c8bf8:{NFSU2_TR(0x5c8bf8);
if(r1(R+518)){{goto L5c8c09;}}
}
B5c8bfa:L5c8bfa:{c.instructions+=4;NFSU2_TR(0x5c8bfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8bfb:{NFSU2_TR(0x5c8bfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8bfc:{NFSU2_TR(0x5c8bfc);
u8 U[4];
w4(U+0,u32(0x7a3d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c01:{NFSU2_TR(0x5c8c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8c06ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8c06:L5c8c06:{c.instructions+=1;NFSU2_TR(0x5c8c06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c8c09:L5c8c09:{c.instructions+=7;NFSU2_TR(0x5c8c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8c0d:{NFSU2_TR(0x5c8c0d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c8c0e:{NFSU2_TR(0x5c8c0e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5c8c11:{NFSU2_TR(0x5c8c11);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5c8c14:{NFSU2_TR(0x5c8c14);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c8c17:{NFSU2_TR(0x5c8c17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8c1b:{NFSU2_TR(0x5c8c1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8bf0u);}goto L5c8bf0;}}
}
B5c8c1d:L5c8c1d:{c.instructions+=5;NFSU2_TR(0x5c8c1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8700c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c8c23:{NFSU2_TR(0x5c8c23);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8c25:{NFSU2_TR(0x5c8c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8c29:{NFSU2_TR(0x5c8c29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8c2f:{NFSU2_TR(0x5c8c2f);
}
B5c8c30:L5c8c30:{c.instructions+=4;NFSU2_TR(0x5c8c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8c34:{NFSU2_TR(0x5c8c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c8c36:{NFSU2_TR(0x5c8c36);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c8c38:{NFSU2_TR(0x5c8c38);
if(r1(R+518)){{goto L5c8c49;}}
}
B5c8c3a:L5c8c3a:{c.instructions+=4;NFSU2_TR(0x5c8c3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c3b:{NFSU2_TR(0x5c8c3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c3c:{NFSU2_TR(0x5c8c3c);
u8 U[4];
w4(U+0,u32(0x7a3cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c41:{NFSU2_TR(0x5c8c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8c46ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8c46:L5c8c46:{c.instructions+=1;NFSU2_TR(0x5c8c46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c8c49:L5c8c49:{c.instructions+=7;NFSU2_TR(0x5c8c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8c4d:{NFSU2_TR(0x5c8c4d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c8c4e:{NFSU2_TR(0x5c8c4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5c8c51:{NFSU2_TR(0x5c8c51);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5c8c54:{NFSU2_TR(0x5c8c54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c8c57:{NFSU2_TR(0x5c8c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8c5b:{NFSU2_TR(0x5c8c5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8c30u);}goto L5c8c30;}}
}
B5c8c5d:L5c8c5d:{c.instructions+=5;NFSU2_TR(0x5c8c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c8c63:{NFSU2_TR(0x5c8c63);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8c65:{NFSU2_TR(0x5c8c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8c69:{NFSU2_TR(0x5c8c69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8c6c:{NFSU2_TR(0x5c8c6c);
__builtin_memmove((R+16),(R+16),4);
}
B5c8c70:L5c8c70:{c.instructions+=4;NFSU2_TR(0x5c8c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8c74:{NFSU2_TR(0x5c8c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c8c76:{NFSU2_TR(0x5c8c76);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c8c78:{NFSU2_TR(0x5c8c78);
if(r1(R+518)){{goto L5c8c89;}}
}
B5c8c7a:L5c8c7a:{c.instructions+=4;NFSU2_TR(0x5c8c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c7b:{NFSU2_TR(0x5c8c7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c7c:{NFSU2_TR(0x5c8c7c);
u8 U[4];
w4(U+0,u32(0x7a3ce4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8c81:{NFSU2_TR(0x5c8c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8c86ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8c86:L5c8c86:{c.instructions+=1;NFSU2_TR(0x5c8c86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c8c89:L5c8c89:{c.instructions+=7;NFSU2_TR(0x5c8c89);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8c8d:{NFSU2_TR(0x5c8c8d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c8c8e:{NFSU2_TR(0x5c8c8e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5c8c91:{NFSU2_TR(0x5c8c91);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5c8c94:{NFSU2_TR(0x5c8c94);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c8c97:{NFSU2_TR(0x5c8c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8c9b:{NFSU2_TR(0x5c8c9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8c70u);}goto L5c8c70;}}
}
B5c8c9d:L5c8c9d:{c.instructions+=5;NFSU2_TR(0x5c8c9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x86ffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8ca3:{NFSU2_TR(0x5c8ca3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8ca5:{NFSU2_TR(0x5c8ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8ca9:{NFSU2_TR(0x5c8ca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8cac:{NFSU2_TR(0x5c8cac);
__builtin_memmove((R+16),(R+16),4);
}
B5c8cb0:L5c8cb0:{c.instructions+=4;NFSU2_TR(0x5c8cb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c8cb4:{NFSU2_TR(0x5c8cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c8cb6:{NFSU2_TR(0x5c8cb6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c8cb8:{NFSU2_TR(0x5c8cb8);
if(r1(R+518)){{goto L5c8cc9;}}
}
B5c8cba:L5c8cba:{c.instructions+=4;NFSU2_TR(0x5c8cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8cbb:{NFSU2_TR(0x5c8cbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8cbc:{NFSU2_TR(0x5c8cbc);
u8 U[4];
w4(U+0,u32(0x7a3cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8cc1:{NFSU2_TR(0x5c8cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8cc6ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8cc6:L5c8cc6:{c.instructions+=1;NFSU2_TR(0x5c8cc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c8cc9:L5c8cc9:{c.instructions+=7;NFSU2_TR(0x5c8cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8ccd:{NFSU2_TR(0x5c8ccd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c8cce:{NFSU2_TR(0x5c8cce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5c8cd1:{NFSU2_TR(0x5c8cd1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5c8cd4:{NFSU2_TR(0x5c8cd4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c8cd7:{NFSU2_TR(0x5c8cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8cdb:{NFSU2_TR(0x5c8cdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8cb0u);}goto L5c8cb0;}}
}
B5c8cdd:L5c8cdd:{c.instructions+=2;NFSU2_TR(0x5c8cdd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8cdf:{NFSU2_TR(0x5c8cdf);
}
B5c8ce0:L5c8ce0:{c.instructions+=3;NFSU2_TR(0x5c8ce0);
u8 U[13];
w4(U+0,u32(u32(u32(0x86fff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5c8ce7:{NFSU2_TR(0x5c8ce7);
u8 U[15];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(R+0))-u32(r1(U+13))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5c8ceb:{NFSU2_TR(0x5c8ceb);
if(r1(R+518)){{goto L5c8cff;}}
}
B5c8ced:L5c8ced:{c.instructions+=5;NFSU2_TR(0x5c8ced);
w4(R+0,u32(r1(R+0)));
}
B5c8cf0:{NFSU2_TR(0x5c8cf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8cf1:{NFSU2_TR(0x5c8cf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8cf2:{NFSU2_TR(0x5c8cf2);
u8 U[4];
w4(U+0,u32(0x7a3cb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8cf7:{NFSU2_TR(0x5c8cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8cfcull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8cfc:L5c8cfc:{c.instructions+=1;NFSU2_TR(0x5c8cfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c8cff:L5c8cff:{c.instructions+=3;NFSU2_TR(0x5c8cff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5c8d00:{NFSU2_TR(0x5c8d00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c8d06:{NFSU2_TR(0x5c8d06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8ce0u);}goto L5c8ce0;}}
}
B5c8d08:L5c8d08:{c.instructions+=7;NFSU2_TR(0x5c8d08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c8d09:{NFSU2_TR(0x5c8d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c8d0a:{NFSU2_TR(0x5c8d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8d0b:{NFSU2_TR(0x5c8d0b);
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
B5c8d0d:{NFSU2_TR(0x5c8d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8d0e:{NFSU2_TR(0x5c8d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8d0f:{NFSU2_TR(0x5c8d0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8d20:L5c8d20:{c.instructions+=14;NFSU2_TR(0x5c8d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8d24:{NFSU2_TR(0x5c8d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B5c8d27:{NFSU2_TR(0x5c8d27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d28:{NFSU2_TR(0x5c8d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c8d2c:{NFSU2_TR(0x5c8d2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d2d:{NFSU2_TR(0x5c8d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c8d34:{NFSU2_TR(0x5c8d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c8d37:{NFSU2_TR(0x5c8d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d38:{NFSU2_TR(0x5c8d38);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5c8d3c:{NFSU2_TR(0x5c8d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c8d3e:{NFSU2_TR(0x5c8d3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d3f:{NFSU2_TR(0x5c8d3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c8d41:{NFSU2_TR(0x5c8d41);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c8d43:{NFSU2_TR(0x5c8d43);
if(r1(R+518)){{goto L5c8d4d;}}
}
B5c8d45:L5c8d45:{c.instructions+=4;NFSU2_TR(0x5c8d45);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d46:{NFSU2_TR(0x5c8d46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d47:{NFSU2_TR(0x5c8d47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8d48:{NFSU2_TR(0x5c8d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8d4dull));
TAIL_STATIC(0x5bfff0u,5bf);
}
B5c8d4d:L5c8d4d:{c.instructions+=3;NFSU2_TR(0x5c8d4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c8d50:{NFSU2_TR(0x5c8d50);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c8d52:{NFSU2_TR(0x5c8d52);
if(r1(R+518)){{goto L5c8eb5;}}
}
B5c8d58:L5c8d58:{c.instructions+=27;NFSU2_TR(0x5c8d58);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8d5f:{NFSU2_TR(0x5c8d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8d66:{NFSU2_TR(0x5c8d66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8d6a:{NFSU2_TR(0x5c8d6a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8d71:{NFSU2_TR(0x5c8d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8d75:{NFSU2_TR(0x5c8d75);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8d7c:{NFSU2_TR(0x5c8d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8d80:{NFSU2_TR(0x5c8d80);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8d87:{NFSU2_TR(0x5c8d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8d8b:{NFSU2_TR(0x5c8d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8d92:{NFSU2_TR(0x5c8d92);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8d96:{NFSU2_TR(0x5c8d96);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8d9d:{NFSU2_TR(0x5c8d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8da1:{NFSU2_TR(0x5c8da1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8da8:{NFSU2_TR(0x5c8da8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8dac:{NFSU2_TR(0x5c8dac);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8db3:{NFSU2_TR(0x5c8db3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8db7:{NFSU2_TR(0x5c8db7);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8dbe:{NFSU2_TR(0x5c8dbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8dc2:{NFSU2_TR(0x5c8dc2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8dc9:{NFSU2_TR(0x5c8dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8dcd:{NFSU2_TR(0x5c8dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8dd4:{NFSU2_TR(0x5c8dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8dd8:{NFSU2_TR(0x5c8dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8ddc:{NFSU2_TR(0x5c8ddc);
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
B5c8dde:{NFSU2_TR(0x5c8dde);
w4(R+4,u32(0xeull));
}
B5c8de3:{NFSU2_TR(0x5c8de3);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8de7:L5c8de7:{c.instructions+=1;NFSU2_TR(0x5c8de7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c8de9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8de7u);}goto L5c8de7;}
}
B5c8de9:L5c8de9:{c.instructions+=36;NFSU2_TR(0x5c8de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8df0:{NFSU2_TR(0x5c8df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8df7:{NFSU2_TR(0x5c8df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8dfb:{NFSU2_TR(0x5c8dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8e02:{NFSU2_TR(0x5c8e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e06:{NFSU2_TR(0x5c8e06);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8e0d:{NFSU2_TR(0x5c8e0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e11:{NFSU2_TR(0x5c8e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e15:{NFSU2_TR(0x5c8e15);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8e1c:{NFSU2_TR(0x5c8e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e20:{NFSU2_TR(0x5c8e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8e27:{NFSU2_TR(0x5c8e27);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8e2b:{NFSU2_TR(0x5c8e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e2f:{NFSU2_TR(0x5c8e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e33:{NFSU2_TR(0x5c8e33);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8e3a:{NFSU2_TR(0x5c8e3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8e3e:{NFSU2_TR(0x5c8e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e42:{NFSU2_TR(0x5c8e42);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8e49:{NFSU2_TR(0x5c8e49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8e4b:{NFSU2_TR(0x5c8e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e4f:{NFSU2_TR(0x5c8e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e53:{NFSU2_TR(0x5c8e53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8e54:{NFSU2_TR(0x5c8e54);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8e58:{NFSU2_TR(0x5c8e58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8e59:{NFSU2_TR(0x5c8e59);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8e60:{NFSU2_TR(0x5c8e60);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c8e64:{NFSU2_TR(0x5c8e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e68:{NFSU2_TR(0x5c8e68);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c8e6c:{NFSU2_TR(0x5c8e6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8e6d:{NFSU2_TR(0x5c8e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e75:{NFSU2_TR(0x5c8e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e7d:{NFSU2_TR(0x5c8e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e88:{NFSU2_TR(0x5c8e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8e8f:{NFSU2_TR(0x5c8e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c8e91:{NFSU2_TR(0x5c8e91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8e92:{NFSU2_TR(0x5c8e92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8e95ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c8e95:L5c8e95:{c.instructions+=3;NFSU2_TR(0x5c8e95);
__builtin_memmove((R+28),(R+0),4);
}
B5c8e97:{NFSU2_TR(0x5c8e97);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c8e99:{NFSU2_TR(0x5c8e99);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c8eb5;}}
}
B5c8e9b:L5c8e9b:{c.instructions+=3;NFSU2_TR(0x5c8e9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8e9c:{NFSU2_TR(0x5c8e9c);
u8 U[4];
w4(U+0,u32(0x7a3fa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ea1:{NFSU2_TR(0x5c8ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c8ea6ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c8ea6:L5c8ea6:{c.instructions+=8;NFSU2_TR(0x5c8ea6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c8ea9:{NFSU2_TR(0x5c8ea9);
__builtin_memmove((R+0),(R+28),4);
}
B5c8eab:{NFSU2_TR(0x5c8eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8eac:{NFSU2_TR(0x5c8eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c8ead:{NFSU2_TR(0x5c8ead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c8eae:{NFSU2_TR(0x5c8eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8eaf:{NFSU2_TR(0x5c8eaf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c8eb2:{NFSU2_TR(0x5c8eb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x60ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8eb5:L5c8eb5:{c.instructions+=3;NFSU2_TR(0x5c8eb5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c8eb8:{NFSU2_TR(0x5c8eb8);
w4(R+0,u32(0x80004005ull));
}
B5c8ebd:{NFSU2_TR(0x5c8ebd);
if(r1(R+518)){{goto L5c8ec1;}}
}
B5c8ebf:L5c8ebf:{c.instructions+=1;NFSU2_TR(0x5c8ebf);
__builtin_memmove((R+0),(R+28),4);
}
B5c8ec1:L5c8ec1:{c.instructions+=6;NFSU2_TR(0x5c8ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8ec2:{NFSU2_TR(0x5c8ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c8ec3:{NFSU2_TR(0x5c8ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c8ec4:{NFSU2_TR(0x5c8ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c8ec5:{NFSU2_TR(0x5c8ec5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x6cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c8ec8:{NFSU2_TR(0x5c8ec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x60ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c8ed0:L5c8ed0:{c.instructions+=10;NFSU2_TR(0x5c8ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8ed4:{NFSU2_TR(0x5c8ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B5c8ed7:{NFSU2_TR(0x5c8ed7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ed8:{NFSU2_TR(0x5c8ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c8edc:{NFSU2_TR(0x5c8edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c8edf:{NFSU2_TR(0x5c8edf);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5c8ee3:{NFSU2_TR(0x5c8ee3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ee4:{NFSU2_TR(0x5c8ee4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c8ee6:{NFSU2_TR(0x5c8ee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c8ee8:{NFSU2_TR(0x5c8ee8);
if(r1(R+518)){TAIL_STATIC(0x5c9035u,5c9);}
}
B5c8eee:L5c8eee:{c.instructions+=28;NFSU2_TR(0x5c8eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8ef5:{NFSU2_TR(0x5c8ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8efc:{NFSU2_TR(0x5c8efc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f00:{NFSU2_TR(0x5c8f00);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f07:{NFSU2_TR(0x5c8f07);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f0b:{NFSU2_TR(0x5c8f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8f12:{NFSU2_TR(0x5c8f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f16:{NFSU2_TR(0x5c8f16);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f1d:{NFSU2_TR(0x5c8f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f21:{NFSU2_TR(0x5c8f21);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8f28:{NFSU2_TR(0x5c8f28);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f2c:{NFSU2_TR(0x5c8f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f33:{NFSU2_TR(0x5c8f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f37:{NFSU2_TR(0x5c8f37);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8f3e:{NFSU2_TR(0x5c8f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f42:{NFSU2_TR(0x5c8f42);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f49:{NFSU2_TR(0x5c8f49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f4d:{NFSU2_TR(0x5c8f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8f54:{NFSU2_TR(0x5c8f54);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f58:{NFSU2_TR(0x5c8f58);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f5f:{NFSU2_TR(0x5c8f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f63:{NFSU2_TR(0x5c8f63);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8f6a:{NFSU2_TR(0x5c8f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f6e:{NFSU2_TR(0x5c8f6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f72:{NFSU2_TR(0x5c8f72);
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
B5c8f74:{NFSU2_TR(0x5c8f74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8f75:{NFSU2_TR(0x5c8f75);
w4(R+4,u32(0xeull));
}
B5c8f7a:{NFSU2_TR(0x5c8f7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c8f7e:L5c8f7e:{c.instructions+=1;NFSU2_TR(0x5c8f7e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c8f80;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c8f7eu);}goto L5c8f7e;}
}
B5c8f80:L5c8f80:{c.instructions+=27;NFSU2_TR(0x5c8f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f87:{NFSU2_TR(0x5c8f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8f8e:{NFSU2_TR(0x5c8f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f92:{NFSU2_TR(0x5c8f92);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8f99:{NFSU2_TR(0x5c8f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8f9d:{NFSU2_TR(0x5c8f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8fa4:{NFSU2_TR(0x5c8fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fa8:{NFSU2_TR(0x5c8fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8faf:{NFSU2_TR(0x5c8faf);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fb3:{NFSU2_TR(0x5c8fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fb7:{NFSU2_TR(0x5c8fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8fbe:{NFSU2_TR(0x5c8fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fc2:{NFSU2_TR(0x5c8fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c8fc9:{NFSU2_TR(0x5c8fc9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8fcd:{NFSU2_TR(0x5c8fcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fd1:{NFSU2_TR(0x5c8fd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8fd5:{NFSU2_TR(0x5c8fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fd9:{NFSU2_TR(0x5c8fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c8fe0:{NFSU2_TR(0x5c8fe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fe4:{NFSU2_TR(0x5c8fe4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c8fe8:{NFSU2_TR(0x5c8fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8fec:{NFSU2_TR(0x5c8fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c8ff0:{NFSU2_TR(0x5c8ff0);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ff5:{NFSU2_TR(0x5c8ff5);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c8ff9:{NFSU2_TR(0x5c8ff9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c8ffd:{NFSU2_TR(0x5c8ffd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c8ffe:{NFSU2_TR(0x5c8ffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5c9006u,5c9);
}
XIT:NFSU2_TR_EXIT(0x5c8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
