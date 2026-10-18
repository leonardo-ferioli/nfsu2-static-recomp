#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4af(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_636(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x77f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x77f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_77f(u8* __restrict R,Cpu& c);
u32 page_77f(Cpu& c){return body_77f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_77f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x77f001:goto L77f001;
case 0x77f006:c.instructions+=1;goto B77f006;
case 0x77f00b:goto L77f00b;
case 0x77f00e:c.instructions+=3;goto B77f00e;
case 0x77f013:c.instructions+=2;goto B77f013;
case 0x77f018:c.instructions+=1;goto B77f018;
case 0x77f01d:goto L77f01d;
case 0x77f022:c.instructions+=2;goto B77f022;
case 0x77f027:c.instructions+=1;goto B77f027;
case 0x77f02c:goto L77f02c;
case 0x77f031:c.instructions+=2;goto B77f031;
case 0x77f036:c.instructions+=1;goto B77f036;
case 0x77f03b:goto L77f03b;
case 0x77f040:c.instructions+=2;goto B77f040;
case 0x77f045:c.instructions+=1;goto B77f045;
case 0x77f04a:goto L77f04a;
case 0x77f04f:c.instructions+=2;goto B77f04f;
case 0x77f054:c.instructions+=1;goto B77f054;
case 0x77f059:goto L77f059;
case 0x77f05e:c.instructions+=2;goto B77f05e;
case 0x77f063:c.instructions+=1;goto B77f063;
case 0x77f068:goto L77f068;
case 0x77f06d:c.instructions+=2;goto B77f06d;
case 0x77f072:c.instructions+=1;goto B77f072;
case 0x77f077:goto L77f077;
case 0x77f07c:c.instructions+=2;goto B77f07c;
case 0x77f081:c.instructions+=1;goto B77f081;
case 0x77f086:goto L77f086;
case 0x77f08b:c.instructions+=2;goto B77f08b;
case 0x77f090:c.instructions+=1;goto B77f090;
case 0x77f095:goto L77f095;
case 0x77f09a:c.instructions+=2;goto B77f09a;
case 0x77f09f:c.instructions+=1;goto B77f09f;
case 0x77f0a4:goto L77f0a4;
case 0x77f0a9:c.instructions+=2;goto B77f0a9;
case 0x77f0ae:c.instructions+=1;goto B77f0ae;
case 0x77f0b3:goto L77f0b3;
case 0x77f0b6:c.instructions+=2;goto B77f0b6;
case 0x77f0bb:c.instructions+=1;goto B77f0bb;
case 0x77f0c0:goto L77f0c0;
case 0x77f0c5:c.instructions+=1;goto B77f0c5;
case 0x77f0ca:goto L77f0ca;
case 0x77f0cf:c.instructions+=2;goto B77f0cf;
case 0x77f0d4:c.instructions+=1;goto B77f0d4;
case 0x77f0d9:goto L77f0d9;
case 0x77f0de:c.instructions+=2;goto B77f0de;
case 0x77f0e3:c.instructions+=1;goto B77f0e3;
case 0x77f0e8:goto L77f0e8;
case 0x77f0ed:c.instructions+=2;goto B77f0ed;
case 0x77f0f2:c.instructions+=1;goto B77f0f2;
case 0x77f0f7:goto L77f0f7;
case 0x77f0fc:c.instructions+=2;goto B77f0fc;
case 0x77f101:c.instructions+=1;goto B77f101;
case 0x77f106:goto L77f106;
case 0x77f10b:c.instructions+=2;goto B77f10b;
case 0x77f110:c.instructions+=1;goto B77f110;
case 0x77f115:goto L77f115;
case 0x77f11a:c.instructions+=2;goto B77f11a;
case 0x77f11f:c.instructions+=1;goto B77f11f;
case 0x77f124:goto L77f124;
case 0x77f129:c.instructions+=2;goto B77f129;
case 0x77f12e:c.instructions+=1;goto B77f12e;
case 0x77f133:goto L77f133;
case 0x77f138:c.instructions+=2;goto B77f138;
case 0x77f13d:c.instructions+=1;goto B77f13d;
case 0x77f142:goto L77f142;
case 0x77f147:c.instructions+=2;goto B77f147;
case 0x77f14c:c.instructions+=1;goto B77f14c;
case 0x77f151:goto L77f151;
case 0x77f156:c.instructions+=2;goto B77f156;
case 0x77f15b:c.instructions+=1;goto B77f15b;
case 0x77f160:goto L77f160;
case 0x77f165:c.instructions+=2;goto B77f165;
case 0x77f16a:c.instructions+=1;goto B77f16a;
case 0x77f16f:goto L77f16f;
case 0x77f172:c.instructions+=2;goto B77f172;
case 0x77f177:c.instructions+=1;goto B77f177;
case 0x77f180:goto L77f180;
case 0x77f185:c.instructions+=1;goto B77f185;
case 0x77f18a:goto L77f18a;
case 0x77f18b:c.instructions+=1;goto B77f18b;
case 0x77f190:goto L77f190;
case 0x77f195:c.instructions+=1;goto B77f195;
case 0x77f19a:goto L77f19a;
case 0x77f19f:c.instructions+=1;goto B77f19f;
case 0x77f1a4:goto L77f1a4;
case 0x77f1a5:c.instructions+=1;goto B77f1a5;
case 0x77f1b0:goto L77f1b0;
case 0x77f1b5:c.instructions+=1;goto B77f1b5;
case 0x77f1ba:goto L77f1ba;
case 0x77f1bf:c.instructions+=1;goto B77f1bf;
case 0x77f1c4:goto L77f1c4;
case 0x77f1c5:c.instructions+=1;goto B77f1c5;
case 0x77f1d0:goto L77f1d0;
case 0x77f1d5:c.instructions+=1;goto B77f1d5;
case 0x77f1da:goto L77f1da;
case 0x77f1df:c.instructions+=1;goto B77f1df;
case 0x77f1e4:goto L77f1e4;
case 0x77f1e5:c.instructions+=1;goto B77f1e5;
case 0x77f1f0:goto L77f1f0;
case 0x77f1f5:c.instructions+=1;goto B77f1f5;
case 0x77f1fa:goto L77f1fa;
case 0x77f1ff:c.instructions+=1;goto B77f1ff;
case 0x77f204:goto L77f204;
case 0x77f205:c.instructions+=1;goto B77f205;
case 0x77f210:goto L77f210;
case 0x77f215:c.instructions+=1;goto B77f215;
case 0x77f21a:goto L77f21a;
case 0x77f21f:c.instructions+=1;goto B77f21f;
case 0x77f224:goto L77f224;
case 0x77f225:c.instructions+=1;goto B77f225;
case 0x77f230:goto L77f230;
case 0x77f235:c.instructions+=3;goto B77f235;
case 0x77f23a:c.instructions+=2;goto B77f23a;
case 0x77f23c:c.instructions+=1;goto B77f23c;
case 0x77f240:goto L77f240;
case 0x77f243:c.instructions+=6;goto B77f243;
case 0x77f246:c.instructions+=5;goto B77f246;
case 0x77f248:c.instructions+=4;goto B77f248;
case 0x77f24b:c.instructions+=3;goto B77f24b;
case 0x77f24e:c.instructions+=2;goto B77f24e;
case 0x77f24f:c.instructions+=1;goto B77f24f;
case 0x77f251:goto L77f251;
case 0x77f260:goto L77f260;
case 0x77f265:c.instructions+=3;goto B77f265;
case 0x77f26a:c.instructions+=2;goto B77f26a;
case 0x77f26c:c.instructions+=1;goto B77f26c;
case 0x77f270:goto L77f270;
case 0x77f273:c.instructions+=6;goto B77f273;
case 0x77f276:c.instructions+=5;goto B77f276;
case 0x77f278:c.instructions+=4;goto B77f278;
case 0x77f27b:c.instructions+=3;goto B77f27b;
case 0x77f27e:c.instructions+=2;goto B77f27e;
case 0x77f27f:c.instructions+=1;goto B77f27f;
case 0x77f281:goto L77f281;
case 0x77f290:goto L77f290;
case 0x77f295:c.instructions+=1;goto B77f295;
case 0x77f29a:goto L77f29a;
case 0x77f29f:c.instructions+=1;goto B77f29f;
case 0x77f2a4:goto L77f2a4;
case 0x77f2a5:c.instructions+=1;goto B77f2a5;
case 0x77f2b0:goto L77f2b0;
case 0x77f2b5:c.instructions+=1;goto B77f2b5;
case 0x77f2ba:goto L77f2ba;
case 0x77f2bf:c.instructions+=1;goto B77f2bf;
case 0x77f2c4:goto L77f2c4;
case 0x77f2c5:c.instructions+=1;goto B77f2c5;
case 0x77f2d0:goto L77f2d0;
case 0x77f2d1:c.instructions+=3;goto B77f2d1;
case 0x77f2d2:c.instructions+=2;goto B77f2d2;
case 0x77f2d7:c.instructions+=1;goto B77f2d7;
case 0x77f2dc:goto L77f2dc;
case 0x77f2e1:c.instructions+=4;goto B77f2e1;
case 0x77f2e6:c.instructions+=3;goto B77f2e6;
case 0x77f2eb:c.instructions+=2;goto B77f2eb;
case 0x77f2f1:c.instructions+=1;goto B77f2f1;
case 0x77f2f6:goto L77f2f6;
case 0x77f2fb:c.instructions+=2;goto B77f2fb;
case 0x77f300:c.instructions+=1;goto B77f300;
case 0x77f305:goto L77f305;
case 0x77f30a:c.instructions+=2;goto B77f30a;
case 0x77f30f:c.instructions+=1;goto B77f30f;
case 0x77f314:goto L77f314;
case 0x77f319:c.instructions+=2;goto B77f319;
case 0x77f31e:c.instructions+=1;goto B77f31e;
case 0x77f323:goto L77f323;
case 0x77f328:c.instructions+=2;goto B77f328;
case 0x77f32d:c.instructions+=1;goto B77f32d;
case 0x77f332:goto L77f332;
case 0x77f334:c.instructions+=6;goto B77f334;
case 0x77f339:c.instructions+=5;goto B77f339;
case 0x77f33e:c.instructions+=4;goto B77f33e;
case 0x77f344:c.instructions+=3;goto B77f344;
case 0x77f34a:c.instructions+=2;goto B77f34a;
case 0x77f350:c.instructions+=1;goto B77f350;
case 0x77f355:goto L77f355;
case 0x77f35a:c.instructions+=3;goto B77f35a;
case 0x77f35f:c.instructions+=2;goto B77f35f;
case 0x77f365:c.instructions+=1;goto B77f365;
case 0x77f36a:goto L77f36a;
case 0x77f36f:c.instructions+=2;goto B77f36f;
case 0x77f374:c.instructions+=1;goto B77f374;
case 0x77f379:goto L77f379;
case 0x77f37e:c.instructions+=2;goto B77f37e;
case 0x77f383:c.instructions+=1;goto B77f383;
case 0x77f388:goto L77f388;
case 0x77f38d:c.instructions+=2;goto B77f38d;
case 0x77f392:c.instructions+=1;goto B77f392;
case 0x77f397:goto L77f397;
case 0x77f39c:c.instructions+=2;goto B77f39c;
case 0x77f3a1:c.instructions+=1;goto B77f3a1;
case 0x77f3a6:goto L77f3a6;
case 0x77f3ab:c.instructions+=5;goto B77f3ab;
case 0x77f3b0:c.instructions+=4;goto B77f3b0;
case 0x77f3b6:c.instructions+=3;goto B77f3b6;
case 0x77f3bc:c.instructions+=2;goto B77f3bc;
case 0x77f3c2:c.instructions+=1;goto B77f3c2;
case 0x77f3c7:goto L77f3c7;
case 0x77f3cc:c.instructions+=3;goto B77f3cc;
case 0x77f3d1:c.instructions+=2;goto B77f3d1;
case 0x77f3d7:c.instructions+=1;goto B77f3d7;
case 0x77f3dc:goto L77f3dc;
case 0x77f3e1:c.instructions+=2;goto B77f3e1;
case 0x77f3e6:c.instructions+=1;goto B77f3e6;
case 0x77f3eb:goto L77f3eb;
case 0x77f3f0:c.instructions+=2;goto B77f3f0;
case 0x77f3f5:c.instructions+=1;goto B77f3f5;
case 0x77f3fa:goto L77f3fa;
case 0x77f3fd:c.instructions+=3;goto B77f3fd;
case 0x77f402:c.instructions+=2;goto B77f402;
case 0x77f407:c.instructions+=1;goto B77f407;
case 0x77f40c:goto L77f40c;
case 0x77f411:c.instructions+=2;goto B77f411;
case 0x77f416:c.instructions+=1;goto B77f416;
case 0x77f41b:goto L77f41b;
case 0x77f420:c.instructions+=5;goto B77f420;
case 0x77f425:c.instructions+=4;goto B77f425;
case 0x77f42b:c.instructions+=3;goto B77f42b;
case 0x77f431:c.instructions+=2;goto B77f431;
case 0x77f437:c.instructions+=1;goto B77f437;
case 0x77f43c:goto L77f43c;
case 0x77f441:c.instructions+=3;goto B77f441;
case 0x77f446:c.instructions+=2;goto B77f446;
case 0x77f44c:c.instructions+=1;goto B77f44c;
case 0x77f451:goto L77f451;
case 0x77f456:c.instructions+=2;goto B77f456;
case 0x77f45b:c.instructions+=1;goto B77f45b;
case 0x77f460:goto L77f460;
case 0x77f465:c.instructions+=2;goto B77f465;
case 0x77f46a:c.instructions+=1;goto B77f46a;
case 0x77f46f:goto L77f46f;
case 0x77f474:c.instructions+=2;goto B77f474;
case 0x77f479:c.instructions+=1;goto B77f479;
case 0x77f47e:goto L77f47e;
case 0x77f483:c.instructions+=2;goto B77f483;
case 0x77f488:c.instructions+=1;goto B77f488;
case 0x77f48d:goto L77f48d;
case 0x77f492:c.instructions+=5;goto B77f492;
case 0x77f497:c.instructions+=4;goto B77f497;
case 0x77f49d:c.instructions+=3;goto B77f49d;
case 0x77f4a3:c.instructions+=2;goto B77f4a3;
case 0x77f4a9:c.instructions+=1;goto B77f4a9;
case 0x77f4ae:goto L77f4ae;
case 0x77f4b3:c.instructions+=3;goto B77f4b3;
case 0x77f4b8:c.instructions+=2;goto B77f4b8;
case 0x77f4be:c.instructions+=1;goto B77f4be;
case 0x77f4c3:goto L77f4c3;
case 0x77f4c8:c.instructions+=2;goto B77f4c8;
case 0x77f4cd:c.instructions+=1;goto B77f4cd;
case 0x77f4d2:goto L77f4d2;
case 0x77f4d7:c.instructions+=2;goto B77f4d7;
case 0x77f4dc:c.instructions+=1;goto B77f4dc;
case 0x77f4e1:goto L77f4e1;
case 0x77f4e6:c.instructions+=2;goto B77f4e6;
case 0x77f4eb:c.instructions+=1;goto B77f4eb;
case 0x77f4f0:goto L77f4f0;
case 0x77f4f5:c.instructions+=2;goto B77f4f5;
case 0x77f4fa:c.instructions+=1;goto B77f4fa;
case 0x77f4ff:goto L77f4ff;
case 0x77f502:c.instructions+=7;goto B77f502;
case 0x77f503:c.instructions+=6;goto B77f503;
case 0x77f509:c.instructions+=5;goto B77f509;
case 0x77f50f:c.instructions+=4;goto B77f50f;
case 0x77f515:c.instructions+=3;goto B77f515;
case 0x77f51a:c.instructions+=2;goto B77f51a;
case 0x77f51b:c.instructions+=1;goto B77f51b;
case 0x77f520:goto L77f520;
case 0x77f525:c.instructions+=1;goto B77f525;
case 0x77f52a:goto L77f52a;
case 0x77f52f:c.instructions+=2;goto B77f52f;
case 0x77f534:c.instructions+=1;goto B77f534;
case 0x77f539:goto L77f539;
case 0x77f53e:c.instructions+=2;goto B77f53e;
case 0x77f543:c.instructions+=1;goto B77f543;
case 0x77f548:goto L77f548;
case 0x77f54d:c.instructions+=2;goto B77f54d;
case 0x77f552:c.instructions+=1;goto B77f552;
case 0x77f557:goto L77f557;
case 0x77f55c:c.instructions+=2;goto B77f55c;
case 0x77f561:c.instructions+=1;goto B77f561;
case 0x77f566:goto L77f566;
case 0x77f56b:c.instructions+=2;goto B77f56b;
case 0x77f570:c.instructions+=1;goto B77f570;
case 0x77f575:goto L77f575;
case 0x77f57a:c.instructions+=2;goto B77f57a;
case 0x77f57f:c.instructions+=1;goto B77f57f;
case 0x77f584:goto L77f584;
case 0x77f589:c.instructions+=2;goto B77f589;
case 0x77f58e:c.instructions+=1;goto B77f58e;
case 0x77f593:goto L77f593;
case 0x77f598:c.instructions+=2;goto B77f598;
case 0x77f59d:c.instructions+=1;goto B77f59d;
case 0x77f5a2:goto L77f5a2;
case 0x77f5a7:c.instructions+=2;goto B77f5a7;
case 0x77f5ac:c.instructions+=1;goto B77f5ac;
case 0x77f5b1:goto L77f5b1;
case 0x77f5b6:c.instructions+=2;goto B77f5b6;
case 0x77f5bb:c.instructions+=1;goto B77f5bb;
case 0x77f5c0:goto L77f5c0;
case 0x77f5c5:c.instructions+=2;goto B77f5c5;
case 0x77f5ca:c.instructions+=1;goto B77f5ca;
case 0x77f5cf:goto L77f5cf;
case 0x77f5d4:c.instructions+=2;goto B77f5d4;
case 0x77f5d9:c.instructions+=1;goto B77f5d9;
case 0x77f5de:goto L77f5de;
case 0x77f5e3:c.instructions+=2;goto B77f5e3;
case 0x77f5e8:c.instructions+=1;goto B77f5e8;
case 0x77f5ed:goto L77f5ed;
case 0x77f5f2:c.instructions+=2;goto B77f5f2;
case 0x77f5f7:c.instructions+=1;goto B77f5f7;
case 0x77f5fc:goto L77f5fc;
case 0x77f601:c.instructions+=2;goto B77f601;
case 0x77f606:c.instructions+=1;goto B77f606;
case 0x77f60b:goto L77f60b;
case 0x77f60e:c.instructions+=3;goto B77f60e;
case 0x77f613:c.instructions+=2;goto B77f613;
case 0x77f618:c.instructions+=1;goto B77f618;
case 0x77f61d:goto L77f61d;
case 0x77f622:c.instructions+=2;goto B77f622;
case 0x77f627:c.instructions+=1;goto B77f627;
case 0x77f62c:goto L77f62c;
case 0x77f631:c.instructions+=2;goto B77f631;
case 0x77f636:c.instructions+=1;goto B77f636;
case 0x77f63b:goto L77f63b;
case 0x77f640:c.instructions+=2;goto B77f640;
case 0x77f645:c.instructions+=1;goto B77f645;
case 0x77f64a:goto L77f64a;
case 0x77f64d:c.instructions+=2;goto B77f64d;
case 0x77f652:c.instructions+=1;goto B77f652;
case 0x77f660:goto L77f660;
case 0x77f665:c.instructions+=1;goto B77f665;
case 0x77f66a:goto L77f66a;
case 0x77f66f:c.instructions+=1;goto B77f66f;
case 0x77f674:goto L77f674;
case 0x77f675:c.instructions+=1;goto B77f675;
case 0x77f680:goto L77f680;
case 0x77f685:c.instructions+=1;goto B77f685;
case 0x77f68a:goto L77f68a;
case 0x77f68f:c.instructions+=1;goto B77f68f;
case 0x77f694:goto L77f694;
case 0x77f695:c.instructions+=1;goto B77f695;
case 0x77f6a0:goto L77f6a0;
case 0x77f6a5:c.instructions+=1;goto B77f6a5;
case 0x77f6aa:goto L77f6aa;
case 0x77f6af:c.instructions+=1;goto B77f6af;
case 0x77f6b4:goto L77f6b4;
case 0x77f6b5:c.instructions+=1;goto B77f6b5;
case 0x77f6c0:goto L77f6c0;
case 0x77f6c6:c.instructions+=3;goto B77f6c6;
case 0x77f6cc:c.instructions+=2;goto B77f6cc;
case 0x77f6d2:c.instructions+=1;goto B77f6d2;
case 0x77f6e0:goto L77f6e0;
case 0x77f6e5:c.instructions+=1;goto B77f6e5;
case 0x77f6ea:goto L77f6ea;
case 0x77f6ef:c.instructions+=1;goto B77f6ef;
case 0x77f6f4:goto L77f6f4;
case 0x77f6f5:c.instructions+=1;goto B77f6f5;
case 0x77f700:goto L77f700;
case 0x77f705:c.instructions+=2;goto B77f705;
case 0x77f70a:c.instructions+=1;goto B77f70a;
case 0x77f70f:goto L77f70f;
case 0x77f714:c.instructions+=1;goto B77f714;
case 0x77f719:goto L77f719;
case 0x77f71a:c.instructions+=1;goto B77f71a;
case 0x77f720:goto L77f720;
case 0x77f725:c.instructions+=5;goto B77f725;
case 0x77f72a:c.instructions+=4;goto B77f72a;
case 0x77f72c:c.instructions+=3;goto B77f72c;
case 0x77f72e:c.instructions+=2;goto B77f72e;
case 0x77f733:c.instructions+=1;goto B77f733;
case 0x77f738:goto L77f738;
case 0x77f73d:c.instructions+=1;goto B77f73d;
case 0x77f742:goto L77f742;
case 0x77f743:c.instructions+=1;goto B77f743;
case 0x77f750:goto L77f750;
case 0x77f755:c.instructions+=2;goto B77f755;
case 0x77f75a:c.instructions+=1;goto B77f75a;
case 0x77f75f:goto L77f75f;
case 0x77f764:c.instructions+=2;goto B77f764;
case 0x77f769:c.instructions+=1;goto B77f769;
case 0x77f76e:goto L77f76e;
case 0x77f773:c.instructions+=1;goto B77f773;
case 0x77f778:goto L77f778;
case 0x77f779:c.instructions+=1;goto B77f779;
case 0x77f780:goto L77f780;
case 0x77f785:c.instructions+=2;goto B77f785;
case 0x77f78a:c.instructions+=1;goto B77f78a;
case 0x77f78f:goto L77f78f;
case 0x77f794:c.instructions+=2;goto B77f794;
case 0x77f799:c.instructions+=1;goto B77f799;
case 0x77f79e:goto L77f79e;
case 0x77f7a3:c.instructions+=1;goto B77f7a3;
case 0x77f7a8:goto L77f7a8;
case 0x77f7a9:c.instructions+=1;goto B77f7a9;
case 0x77f7b0:goto L77f7b0;
case 0x77f7b5:c.instructions+=2;goto B77f7b5;
case 0x77f7ba:c.instructions+=1;goto B77f7ba;
case 0x77f7bf:goto L77f7bf;
case 0x77f7c4:c.instructions+=2;goto B77f7c4;
case 0x77f7c9:c.instructions+=1;goto B77f7c9;
case 0x77f7ce:goto L77f7ce;
case 0x77f7d3:c.instructions+=1;goto B77f7d3;
case 0x77f7d8:goto L77f7d8;
case 0x77f7d9:c.instructions+=1;goto B77f7d9;
case 0x77f7e0:goto L77f7e0;
case 0x77f7e5:c.instructions+=2;goto B77f7e5;
case 0x77f7ea:c.instructions+=1;goto B77f7ea;
case 0x77f7ef:goto L77f7ef;
case 0x77f7f4:c.instructions+=2;goto B77f7f4;
case 0x77f7f9:c.instructions+=1;goto B77f7f9;
case 0x77f7fe:goto L77f7fe;
case 0x77f803:c.instructions+=1;goto B77f803;
case 0x77f808:goto L77f808;
case 0x77f809:c.instructions+=1;goto B77f809;
case 0x77f810:goto L77f810;
case 0x77f815:c.instructions+=2;goto B77f815;
case 0x77f81a:c.instructions+=1;goto B77f81a;
case 0x77f81f:goto L77f81f;
case 0x77f824:c.instructions+=2;goto B77f824;
case 0x77f829:c.instructions+=1;goto B77f829;
case 0x77f82e:goto L77f82e;
case 0x77f833:c.instructions+=1;goto B77f833;
case 0x77f838:goto L77f838;
case 0x77f839:c.instructions+=1;goto B77f839;
case 0x77f840:goto L77f840;
case 0x77f846:c.instructions+=3;goto B77f846;
case 0x77f848:c.instructions+=2;goto B77f848;
case 0x77f84e:c.instructions+=1;goto B77f84e;
case 0x77f850:goto L77f850;
case 0x77f856:c.instructions+=3;goto B77f856;
case 0x77f85c:c.instructions+=2;goto B77f85c;
case 0x77f862:c.instructions+=1;goto B77f862;
case 0x77f870:goto L77f870;
case 0x77f876:c.instructions+=3;goto B77f876;
case 0x77f878:c.instructions+=2;goto B77f878;
case 0x77f87e:c.instructions+=1;goto B77f87e;
case 0x77f880:goto L77f880;
case 0x77f886:c.instructions+=3;goto B77f886;
case 0x77f88c:c.instructions+=2;goto B77f88c;
case 0x77f892:c.instructions+=1;goto B77f892;
case 0x77f8a0:goto L77f8a0;
case 0x77f8a6:c.instructions+=3;goto B77f8a6;
case 0x77f8a8:c.instructions+=2;goto B77f8a8;
case 0x77f8ae:c.instructions+=1;goto B77f8ae;
case 0x77f8b0:goto L77f8b0;
case 0x77f8b6:c.instructions+=3;goto B77f8b6;
case 0x77f8bc:c.instructions+=2;goto B77f8bc;
case 0x77f8c2:c.instructions+=1;goto B77f8c2;
case 0x77f8d0:goto L77f8d0;
case 0x77f8d6:c.instructions+=3;goto B77f8d6;
case 0x77f8d8:c.instructions+=2;goto B77f8d8;
case 0x77f8de:c.instructions+=1;goto B77f8de;
case 0x77f8e0:goto L77f8e0;
case 0x77f8e6:c.instructions+=3;goto B77f8e6;
case 0x77f8ec:c.instructions+=2;goto B77f8ec;
case 0x77f8f2:c.instructions+=1;goto B77f8f2;
case 0x77f900:goto L77f900;
case 0x77f905:c.instructions+=1;goto B77f905;
case 0x77f90a:goto L77f90a;
case 0x77f90f:c.instructions+=1;goto B77f90f;
case 0x77f914:goto L77f914;
case 0x77f915:c.instructions+=1;goto B77f915;
case 0x77f920:goto L77f920;
case 0x77f925:c.instructions+=1;goto B77f925;
case 0x77f92a:goto L77f92a;
case 0x77f92f:c.instructions+=1;goto B77f92f;
case 0x77f934:goto L77f934;
case 0x77f939:c.instructions+=1;goto B77f939;
case 0x77f93e:goto L77f93e;
case 0x77f93f:c.instructions+=1;goto B77f93f;
case 0x77f940:goto L77f940;
case 0x77f945:c.instructions+=1;goto B77f945;
case 0x77f94a:goto L77f94a;
case 0x77f94f:c.instructions+=1;goto B77f94f;
case 0x77f954:goto L77f954;
case 0x77f959:c.instructions+=1;goto B77f959;
case 0x77f95e:goto L77f95e;
case 0x77f95f:c.instructions+=1;goto B77f95f;
case 0x77f960:goto L77f960;
case 0x77f966:c.instructions+=3;goto B77f966;
case 0x77f968:c.instructions+=2;goto B77f968;
case 0x77f96e:c.instructions+=1;goto B77f96e;
case 0x77f970:goto L77f970;
case 0x77f976:c.instructions+=3;goto B77f976;
case 0x77f97c:c.instructions+=2;goto B77f97c;
case 0x77f982:c.instructions+=1;goto B77f982;
case 0x77f990:goto L77f990;
case 0x77f996:c.instructions+=3;goto B77f996;
case 0x77f998:c.instructions+=2;goto B77f998;
case 0x77f99e:c.instructions+=1;goto B77f99e;
case 0x77f9a0:goto L77f9a0;
case 0x77f9a6:c.instructions+=3;goto B77f9a6;
case 0x77f9ac:c.instructions+=2;goto B77f9ac;
case 0x77f9b2:c.instructions+=1;goto B77f9b2;
case 0x77f9c0:goto L77f9c0;
case 0x77f9c6:c.instructions+=3;goto B77f9c6;
case 0x77f9c8:c.instructions+=2;goto B77f9c8;
case 0x77f9ce:c.instructions+=1;goto B77f9ce;
case 0x77f9d0:goto L77f9d0;
case 0x77f9d6:c.instructions+=3;goto B77f9d6;
case 0x77f9dc:c.instructions+=2;goto B77f9dc;
case 0x77f9e2:c.instructions+=1;goto B77f9e2;
case 0x77f9f0:goto L77f9f0;
case 0x77f9f6:c.instructions+=3;goto B77f9f6;
case 0x77f9f8:c.instructions+=2;goto B77f9f8;
case 0x77f9fe:c.instructions+=1;goto B77f9fe;
case 0x77fa00:goto L77fa00;
case 0x77fa06:c.instructions+=3;goto B77fa06;
case 0x77fa0c:c.instructions+=2;goto B77fa0c;
case 0x77fa12:c.instructions+=1;goto B77fa12;
case 0x77fa20:goto L77fa20;
case 0x77fa26:c.instructions+=3;goto B77fa26;
case 0x77fa28:c.instructions+=2;goto B77fa28;
case 0x77fa2e:c.instructions+=1;goto B77fa2e;
case 0x77fa30:goto L77fa30;
case 0x77fa36:c.instructions+=3;goto B77fa36;
case 0x77fa3c:c.instructions+=2;goto B77fa3c;
case 0x77fa42:c.instructions+=1;goto B77fa42;
case 0x77fa50:goto L77fa50;
case 0x77fa56:c.instructions+=3;goto B77fa56;
case 0x77fa58:c.instructions+=2;goto B77fa58;
case 0x77fa5e:c.instructions+=1;goto B77fa5e;
case 0x77fa60:goto L77fa60;
case 0x77fa66:c.instructions+=3;goto B77fa66;
case 0x77fa6c:c.instructions+=2;goto B77fa6c;
case 0x77fa72:c.instructions+=1;goto B77fa72;
case 0x77fa80:goto L77fa80;
case 0x77fa86:c.instructions+=3;goto B77fa86;
case 0x77fa88:c.instructions+=2;goto B77fa88;
case 0x77fa8e:c.instructions+=1;goto B77fa8e;
case 0x77fa90:goto L77fa90;
case 0x77fa96:c.instructions+=3;goto B77fa96;
case 0x77fa9c:c.instructions+=2;goto B77fa9c;
case 0x77faa2:c.instructions+=1;goto B77faa2;
case 0x77fab0:goto L77fab0;
case 0x77fab6:c.instructions+=3;goto B77fab6;
case 0x77fab8:c.instructions+=2;goto B77fab8;
case 0x77fabe:c.instructions+=1;goto B77fabe;
case 0x77fac0:goto L77fac0;
case 0x77fac6:c.instructions+=3;goto B77fac6;
case 0x77facc:c.instructions+=2;goto B77facc;
case 0x77fad2:c.instructions+=1;goto B77fad2;
case 0x77fae0:goto L77fae0;
case 0x77fae6:c.instructions+=3;goto B77fae6;
case 0x77fae8:c.instructions+=2;goto B77fae8;
case 0x77faee:c.instructions+=1;goto B77faee;
case 0x77faf0:goto L77faf0;
case 0x77faf6:c.instructions+=3;goto B77faf6;
case 0x77fafc:c.instructions+=2;goto B77fafc;
case 0x77fb02:c.instructions+=1;goto B77fb02;
case 0x77fb10:goto L77fb10;
case 0x77fb16:c.instructions+=3;goto B77fb16;
case 0x77fb18:c.instructions+=2;goto B77fb18;
case 0x77fb1e:c.instructions+=1;goto B77fb1e;
case 0x77fb20:goto L77fb20;
case 0x77fb26:c.instructions+=3;goto B77fb26;
case 0x77fb2c:c.instructions+=2;goto B77fb2c;
case 0x77fb32:c.instructions+=1;goto B77fb32;
case 0x77fb40:goto L77fb40;
case 0x77fb46:c.instructions+=3;goto B77fb46;
case 0x77fb48:c.instructions+=2;goto B77fb48;
case 0x77fb4e:c.instructions+=1;goto B77fb4e;
case 0x77fb50:goto L77fb50;
case 0x77fb56:c.instructions+=3;goto B77fb56;
case 0x77fb5c:c.instructions+=2;goto B77fb5c;
case 0x77fb62:c.instructions+=1;goto B77fb62;
case 0x77fb70:goto L77fb70;
case 0x77fb76:c.instructions+=3;goto B77fb76;
case 0x77fb78:c.instructions+=2;goto B77fb78;
case 0x77fb7e:c.instructions+=1;goto B77fb7e;
case 0x77fb80:goto L77fb80;
case 0x77fb86:c.instructions+=3;goto B77fb86;
case 0x77fb8c:c.instructions+=2;goto B77fb8c;
case 0x77fb92:c.instructions+=1;goto B77fb92;
case 0x77fba0:goto L77fba0;
case 0x77fba6:c.instructions+=3;goto B77fba6;
case 0x77fba8:c.instructions+=2;goto B77fba8;
case 0x77fbae:c.instructions+=1;goto B77fbae;
case 0x77fbb0:goto L77fbb0;
case 0x77fbb6:c.instructions+=3;goto B77fbb6;
case 0x77fbbc:c.instructions+=2;goto B77fbbc;
case 0x77fbc2:c.instructions+=1;goto B77fbc2;
case 0x77fbd0:goto L77fbd0;
case 0x77fbd6:c.instructions+=3;goto B77fbd6;
case 0x77fbd8:c.instructions+=2;goto B77fbd8;
case 0x77fbde:c.instructions+=1;goto B77fbde;
case 0x77fbe0:goto L77fbe0;
case 0x77fbe6:c.instructions+=3;goto B77fbe6;
case 0x77fbec:c.instructions+=2;goto B77fbec;
case 0x77fbf2:c.instructions+=1;goto B77fbf2;
case 0x77fc00:goto L77fc00;
case 0x77fc01:c.instructions+=3;goto B77fc01;
case 0x77fc07:c.instructions+=2;goto B77fc07;
case 0x77fc09:c.instructions+=1;goto B77fc09;
case 0x77fc0b:goto L77fc0b;
case 0x77fc10:c.instructions+=3;goto B77fc10;
case 0x77fc12:c.instructions+=2;goto B77fc12;
case 0x77fc17:c.instructions+=1;goto B77fc17;
case 0x77fc19:goto L77fc19;
case 0x77fc1a:c.instructions+=1;goto B77fc1a;
case 0x77fc20:goto L77fc20;
case 0x77fc25:c.instructions+=3;goto B77fc25;
case 0x77fc27:c.instructions+=2;goto B77fc27;
case 0x77fc2c:c.instructions+=1;goto B77fc2c;
case 0x77fc32:goto L77fc32;
case 0x77fc37:c.instructions+=6;goto B77fc37;
case 0x77fc41:c.instructions+=5;goto B77fc41;
case 0x77fc4b:c.instructions+=4;goto B77fc4b;
case 0x77fc55:c.instructions+=3;goto B77fc55;
case 0x77fc5f:c.instructions+=2;goto B77fc5f;
case 0x77fc60:c.instructions+=1;goto B77fc60;
case 0x77fc70:goto L77fc70;
case 0x77fc76:c.instructions+=3;goto B77fc76;
case 0x77fc78:c.instructions+=2;goto B77fc78;
case 0x77fc7e:c.instructions+=1;goto B77fc7e;
case 0x77fc80:goto L77fc80;
case 0x77fc86:c.instructions+=3;goto B77fc86;
case 0x77fc8c:c.instructions+=2;goto B77fc8c;
case 0x77fc92:c.instructions+=1;goto B77fc92;
case 0x77fca0:goto L77fca0;
case 0x77fca6:c.instructions+=3;goto B77fca6;
case 0x77fca8:c.instructions+=2;goto B77fca8;
case 0x77fcae:c.instructions+=1;goto B77fcae;
case 0x77fcb0:goto L77fcb0;
case 0x77fcb6:c.instructions+=3;goto B77fcb6;
case 0x77fcbc:c.instructions+=2;goto B77fcbc;
case 0x77fcc2:c.instructions+=1;goto B77fcc2;
case 0x77fcd0:goto L77fcd0;
case 0x77fcd6:c.instructions+=3;goto B77fcd6;
case 0x77fcd8:c.instructions+=2;goto B77fcd8;
case 0x77fcde:c.instructions+=1;goto B77fcde;
case 0x77fce0:goto L77fce0;
case 0x77fce6:c.instructions+=3;goto B77fce6;
case 0x77fcec:c.instructions+=2;goto B77fcec;
case 0x77fcf2:c.instructions+=1;goto B77fcf2;
case 0x77fd00:goto L77fd00;
case 0x77fd06:c.instructions+=3;goto B77fd06;
case 0x77fd08:c.instructions+=2;goto B77fd08;
case 0x77fd0e:c.instructions+=1;goto B77fd0e;
case 0x77fd10:goto L77fd10;
case 0x77fd16:c.instructions+=3;goto B77fd16;
case 0x77fd1c:c.instructions+=2;goto B77fd1c;
case 0x77fd22:c.instructions+=1;goto B77fd22;
case 0x77fd30:goto L77fd30;
case 0x77fd36:c.instructions+=3;goto B77fd36;
case 0x77fd38:c.instructions+=2;goto B77fd38;
case 0x77fd3e:c.instructions+=1;goto B77fd3e;
case 0x77fd40:goto L77fd40;
case 0x77fd46:c.instructions+=3;goto B77fd46;
case 0x77fd4c:c.instructions+=2;goto B77fd4c;
case 0x77fd52:c.instructions+=1;goto B77fd52;
case 0x77fd60:goto L77fd60;
case 0x77fd66:c.instructions+=3;goto B77fd66;
case 0x77fd68:c.instructions+=2;goto B77fd68;
case 0x77fd6e:c.instructions+=1;goto B77fd6e;
case 0x77fd70:goto L77fd70;
case 0x77fd76:c.instructions+=3;goto B77fd76;
case 0x77fd7c:c.instructions+=2;goto B77fd7c;
case 0x77fd82:c.instructions+=1;goto B77fd82;
case 0x77fd90:goto L77fd90;
case 0x77fd96:c.instructions+=3;goto B77fd96;
case 0x77fd98:c.instructions+=2;goto B77fd98;
case 0x77fd9e:c.instructions+=1;goto B77fd9e;
case 0x77fda0:goto L77fda0;
case 0x77fda6:c.instructions+=3;goto B77fda6;
case 0x77fdac:c.instructions+=2;goto B77fdac;
case 0x77fdb2:c.instructions+=1;goto B77fdb2;
case 0x77fdc0:goto L77fdc0;
case 0x77fdc6:c.instructions+=3;goto B77fdc6;
case 0x77fdc8:c.instructions+=2;goto B77fdc8;
case 0x77fdce:c.instructions+=1;goto B77fdce;
case 0x77fdd0:goto L77fdd0;
case 0x77fdd6:c.instructions+=3;goto B77fdd6;
case 0x77fddc:c.instructions+=2;goto B77fddc;
case 0x77fde2:c.instructions+=1;goto B77fde2;
case 0x77fdf0:goto L77fdf0;
case 0x77fdf6:c.instructions+=3;goto B77fdf6;
case 0x77fdf8:c.instructions+=2;goto B77fdf8;
case 0x77fdfe:c.instructions+=1;goto B77fdfe;
case 0x77fe00:goto L77fe00;
case 0x77fe06:c.instructions+=3;goto B77fe06;
case 0x77fe0c:c.instructions+=2;goto B77fe0c;
case 0x77fe12:c.instructions+=1;goto B77fe12;
case 0x77fe20:goto L77fe20;
case 0x77fe26:c.instructions+=3;goto B77fe26;
case 0x77fe28:c.instructions+=2;goto B77fe28;
case 0x77fe2e:c.instructions+=1;goto B77fe2e;
case 0x77fe30:goto L77fe30;
case 0x77fe36:c.instructions+=3;goto B77fe36;
case 0x77fe3c:c.instructions+=2;goto B77fe3c;
case 0x77fe42:c.instructions+=1;goto B77fe42;
case 0x77fe50:goto L77fe50;
case 0x77fe56:c.instructions+=3;goto B77fe56;
case 0x77fe58:c.instructions+=2;goto B77fe58;
case 0x77fe5e:c.instructions+=1;goto B77fe5e;
case 0x77fe60:goto L77fe60;
case 0x77fe66:c.instructions+=3;goto B77fe66;
case 0x77fe6c:c.instructions+=2;goto B77fe6c;
case 0x77fe72:c.instructions+=1;goto B77fe72;
case 0x77fe80:goto L77fe80;
case 0x77fe86:c.instructions+=3;goto B77fe86;
case 0x77fe88:c.instructions+=2;goto B77fe88;
case 0x77fe8e:c.instructions+=1;goto B77fe8e;
case 0x77fe90:goto L77fe90;
case 0x77fe96:c.instructions+=3;goto B77fe96;
case 0x77fe9c:c.instructions+=2;goto B77fe9c;
case 0x77fea2:c.instructions+=1;goto B77fea2;
case 0x77feb0:goto L77feb0;
case 0x77feb6:c.instructions+=3;goto B77feb6;
case 0x77feb8:c.instructions+=2;goto B77feb8;
case 0x77febe:c.instructions+=1;goto B77febe;
case 0x77fec0:goto L77fec0;
case 0x77fec6:c.instructions+=3;goto B77fec6;
case 0x77fecc:c.instructions+=2;goto B77fecc;
case 0x77fed2:c.instructions+=1;goto B77fed2;
case 0x77fee0:goto L77fee0;
case 0x77fee6:c.instructions+=3;goto B77fee6;
case 0x77fee8:c.instructions+=2;goto B77fee8;
case 0x77feee:c.instructions+=1;goto B77feee;
case 0x77fef0:goto L77fef0;
case 0x77fef6:c.instructions+=3;goto B77fef6;
case 0x77fefc:c.instructions+=2;goto B77fefc;
case 0x77ff02:c.instructions+=1;goto B77ff02;
case 0x77ff10:goto L77ff10;
case 0x77ff16:c.instructions+=3;goto B77ff16;
case 0x77ff18:c.instructions+=2;goto B77ff18;
case 0x77ff1e:c.instructions+=1;goto B77ff1e;
case 0x77ff20:goto L77ff20;
case 0x77ff26:c.instructions+=3;goto B77ff26;
case 0x77ff2c:c.instructions+=2;goto B77ff2c;
case 0x77ff32:c.instructions+=1;goto B77ff32;
case 0x77ff40:goto L77ff40;
case 0x77ff46:c.instructions+=3;goto B77ff46;
case 0x77ff48:c.instructions+=2;goto B77ff48;
case 0x77ff4e:c.instructions+=1;goto B77ff4e;
case 0x77ff50:goto L77ff50;
case 0x77ff56:c.instructions+=3;goto B77ff56;
case 0x77ff5c:c.instructions+=2;goto B77ff5c;
case 0x77ff62:c.instructions+=1;goto B77ff62;
case 0x77ff70:goto L77ff70;
case 0x77ff76:c.instructions+=3;goto B77ff76;
case 0x77ff78:c.instructions+=2;goto B77ff78;
case 0x77ff7e:c.instructions+=1;goto B77ff7e;
case 0x77ff80:goto L77ff80;
case 0x77ff86:c.instructions+=3;goto B77ff86;
case 0x77ff8c:c.instructions+=2;goto B77ff8c;
case 0x77ff92:c.instructions+=1;goto B77ff92;
case 0x77ffa0:goto L77ffa0;
case 0x77ffa6:c.instructions+=3;goto B77ffa6;
case 0x77ffa8:c.instructions+=2;goto B77ffa8;
case 0x77ffae:c.instructions+=1;goto B77ffae;
case 0x77ffb0:goto L77ffb0;
case 0x77ffb6:c.instructions+=3;goto B77ffb6;
case 0x77ffbc:c.instructions+=2;goto B77ffbc;
case 0x77ffc2:c.instructions+=1;goto B77ffc2;
case 0x77ffd0:goto L77ffd0;
case 0x77ffd6:c.instructions+=3;goto B77ffd6;
case 0x77ffd8:c.instructions+=2;goto B77ffd8;
case 0x77ffde:c.instructions+=1;goto B77ffde;
case 0x77ffe0:goto L77ffe0;
case 0x77ffe6:c.instructions+=3;goto B77ffe6;
case 0x77ffec:c.instructions+=2;goto B77ffec;
case 0x77fff2:c.instructions+=1;goto B77fff2;
default:missing_instruction(c.pc);}
B77f001:L77f001:{c.instructions+=2;NFSU2_TR(0x77f001);
__builtin_memmove(gp(0x8a4390),(R+0),4);
}
B77f006:{NFSU2_TR(0x77f006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f00bull));
TAIL_STATIC(0x43db50u,43d);
}
B77f00b:L77f00b:{c.instructions+=4;NFSU2_TR(0x77f00b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B77f00e:{NFSU2_TR(0x77f00e);
u8 U[4];
w4(U+0,u32(0x7a8fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f013:{NFSU2_TR(0x77f013);
__builtin_memmove(gp(0x8a4394),(R+0),4);
}
B77f018:{NFSU2_TR(0x77f018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f01dull));
TAIL_STATIC(0x43db50u,43d);
}
B77f01d:L77f01d:{c.instructions+=3;NFSU2_TR(0x77f01d);
u8 U[4];
w4(U+0,u32(0x7a8fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f022:{NFSU2_TR(0x77f022);
__builtin_memmove(gp(0x8a4398),(R+0),4);
}
B77f027:{NFSU2_TR(0x77f027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f02cull));
TAIL_STATIC(0x43db50u,43d);
}
B77f02c:L77f02c:{c.instructions+=3;NFSU2_TR(0x77f02c);
u8 U[4];
w4(U+0,u32(0x7a8fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f031:{NFSU2_TR(0x77f031);
__builtin_memmove(gp(0x8a439c),(R+0),4);
}
B77f036:{NFSU2_TR(0x77f036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f03bull));
TAIL_STATIC(0x43db50u,43d);
}
B77f03b:L77f03b:{c.instructions+=3;NFSU2_TR(0x77f03b);
u8 U[4];
w4(U+0,u32(0x7a8fa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f040:{NFSU2_TR(0x77f040);
__builtin_memmove(gp(0x8a43a0),(R+0),4);
}
B77f045:{NFSU2_TR(0x77f045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f04aull));
TAIL_STATIC(0x43db50u,43d);
}
B77f04a:L77f04a:{c.instructions+=3;NFSU2_TR(0x77f04a);
u8 U[4];
w4(U+0,u32(0x7a8f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f04f:{NFSU2_TR(0x77f04f);
__builtin_memmove(gp(0x8a43a4),(R+0),4);
}
B77f054:{NFSU2_TR(0x77f054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f059ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f059:L77f059:{c.instructions+=3;NFSU2_TR(0x77f059);
u8 U[4];
w4(U+0,u32(0x7a8f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f05e:{NFSU2_TR(0x77f05e);
__builtin_memmove(gp(0x8a43a8),(R+0),4);
}
B77f063:{NFSU2_TR(0x77f063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f068ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f068:L77f068:{c.instructions+=3;NFSU2_TR(0x77f068);
u8 U[4];
w4(U+0,u32(0x7a8f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f06d:{NFSU2_TR(0x77f06d);
__builtin_memmove(gp(0x8a43ac),(R+0),4);
}
B77f072:{NFSU2_TR(0x77f072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f077ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f077:L77f077:{c.instructions+=3;NFSU2_TR(0x77f077);
u8 U[4];
w4(U+0,u32(0x7a8f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f07c:{NFSU2_TR(0x77f07c);
__builtin_memmove(gp(0x8a43b0),(R+0),4);
}
B77f081:{NFSU2_TR(0x77f081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f086ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f086:L77f086:{c.instructions+=3;NFSU2_TR(0x77f086);
u8 U[4];
w4(U+0,u32(0x7a8f44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f08b:{NFSU2_TR(0x77f08b);
__builtin_memmove(gp(0x8a43b4),(R+0),4);
}
B77f090:{NFSU2_TR(0x77f090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f095ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f095:L77f095:{c.instructions+=3;NFSU2_TR(0x77f095);
u8 U[4];
w4(U+0,u32(0x7a8f28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f09a:{NFSU2_TR(0x77f09a);
__builtin_memmove(gp(0x8a43b8),(R+0),4);
}
B77f09f:{NFSU2_TR(0x77f09f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f0a4ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f0a4:L77f0a4:{c.instructions+=3;NFSU2_TR(0x77f0a4);
u8 U[4];
w4(U+0,u32(0x7a8f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f0a9:{NFSU2_TR(0x77f0a9);
__builtin_memmove(gp(0x8a43bc),(R+0),4);
}
B77f0ae:{NFSU2_TR(0x77f0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f0b3ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f0b3:L77f0b3:{c.instructions+=3;NFSU2_TR(0x77f0b3);
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
B77f0b6:{NFSU2_TR(0x77f0b6);
__builtin_memmove(gp(0x8a43c0),(R+0),4);
}
B77f0bb:{NFSU2_TR(0x77f0bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f0c0:L77f0c0:{c.instructions+=2;NFSU2_TR(0x77f0c0);
u8 U[4];
w4(U+0,u32(0x7a9208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f0c5:{NFSU2_TR(0x77f0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f0caull));
TAIL_STATIC(0x43db50u,43d);
}
B77f0ca:L77f0ca:{c.instructions+=3;NFSU2_TR(0x77f0ca);
u8 U[4];
w4(U+0,u32(0x7a91f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f0cf:{NFSU2_TR(0x77f0cf);
__builtin_memmove(gp(0x8a4324),(R+0),4);
}
B77f0d4:{NFSU2_TR(0x77f0d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f0d9ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f0d9:L77f0d9:{c.instructions+=3;NFSU2_TR(0x77f0d9);
u8 U[4];
w4(U+0,u32(0x7a91e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f0de:{NFSU2_TR(0x77f0de);
__builtin_memmove(gp(0x8a4328),(R+0),4);
}
B77f0e3:{NFSU2_TR(0x77f0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f0e8ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f0e8:L77f0e8:{c.instructions+=3;NFSU2_TR(0x77f0e8);
u8 U[4];
w4(U+0,u32(0x7a91ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f0ed:{NFSU2_TR(0x77f0ed);
__builtin_memmove(gp(0x8a432c),(R+0),4);
}
B77f0f2:{NFSU2_TR(0x77f0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f0f7ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f0f7:L77f0f7:{c.instructions+=3;NFSU2_TR(0x77f0f7);
u8 U[4];
w4(U+0,u32(0x7a91b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f0fc:{NFSU2_TR(0x77f0fc);
__builtin_memmove(gp(0x8a4330),(R+0),4);
}
B77f101:{NFSU2_TR(0x77f101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f106ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f106:L77f106:{c.instructions+=3;NFSU2_TR(0x77f106);
u8 U[4];
w4(U+0,u32(0x7a91a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f10b:{NFSU2_TR(0x77f10b);
__builtin_memmove(gp(0x8a4334),(R+0),4);
}
B77f110:{NFSU2_TR(0x77f110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f115ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f115:L77f115:{c.instructions+=3;NFSU2_TR(0x77f115);
u8 U[4];
w4(U+0,u32(0x7a9190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f11a:{NFSU2_TR(0x77f11a);
__builtin_memmove(gp(0x8a4338),(R+0),4);
}
B77f11f:{NFSU2_TR(0x77f11f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f124ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f124:L77f124:{c.instructions+=3;NFSU2_TR(0x77f124);
u8 U[4];
w4(U+0,u32(0x7a917cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f129:{NFSU2_TR(0x77f129);
__builtin_memmove(gp(0x8a433c),(R+0),4);
}
B77f12e:{NFSU2_TR(0x77f12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f133ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f133:L77f133:{c.instructions+=3;NFSU2_TR(0x77f133);
u8 U[4];
w4(U+0,u32(0x7a9168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f138:{NFSU2_TR(0x77f138);
__builtin_memmove(gp(0x8a4340),(R+0),4);
}
B77f13d:{NFSU2_TR(0x77f13d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f142ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f142:L77f142:{c.instructions+=3;NFSU2_TR(0x77f142);
u8 U[4];
w4(U+0,u32(0x7a9154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f147:{NFSU2_TR(0x77f147);
__builtin_memmove(gp(0x8a4344),(R+0),4);
}
B77f14c:{NFSU2_TR(0x77f14c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f151ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f151:L77f151:{c.instructions+=3;NFSU2_TR(0x77f151);
u8 U[4];
w4(U+0,u32(0x7a913cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f156:{NFSU2_TR(0x77f156);
__builtin_memmove(gp(0x8a4348),(R+0),4);
}
B77f15b:{NFSU2_TR(0x77f15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f160ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f160:L77f160:{c.instructions+=3;NFSU2_TR(0x77f160);
u8 U[4];
w4(U+0,u32(0x7a9124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f165:{NFSU2_TR(0x77f165);
__builtin_memmove(gp(0x8a434c),(R+0),4);
}
B77f16a:{NFSU2_TR(0x77f16a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f16full));
TAIL_STATIC(0x43db50u,43d);
}
B77f16f:L77f16f:{c.instructions+=3;NFSU2_TR(0x77f16f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77f172:{NFSU2_TR(0x77f172);
__builtin_memmove(gp(0x8a4350),(R+0),4);
}
B77f177:{NFSU2_TR(0x77f177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f180:L77f180:{c.instructions+=2;NFSU2_TR(0x77f180);
u8 U[4];
w4(U+0,u32(0x782720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f185:{NFSU2_TR(0x77f185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f18aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f18a:L77f18a:{c.instructions+=2;NFSU2_TR(0x77f18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f18b:{NFSU2_TR(0x77f18b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f190:L77f190:{c.instructions+=2;NFSU2_TR(0x77f190);
w4(R+4,u32(0x8a1de4ull));
}
B77f195:{NFSU2_TR(0x77f195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f19aull));
TAIL_STATIC(0x4afaf0u,4af);
}
B77f19a:L77f19a:{c.instructions+=2;NFSU2_TR(0x77f19a);
u8 U[4];
w4(U+0,u32(0x7827e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f19f:{NFSU2_TR(0x77f19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f1a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f1a4:L77f1a4:{c.instructions+=2;NFSU2_TR(0x77f1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f1a5:{NFSU2_TR(0x77f1a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f1b0:L77f1b0:{c.instructions+=2;NFSU2_TR(0x77f1b0);
w4(R+4,u32(0x8a3168ull));
}
B77f1b5:{NFSU2_TR(0x77f1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f1baull));
TAIL_STATIC(0x4afaf0u,4af);
}
B77f1ba:L77f1ba:{c.instructions+=2;NFSU2_TR(0x77f1ba);
u8 U[4];
w4(U+0,u32(0x7827f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f1bf:{NFSU2_TR(0x77f1bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f1c4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f1c4:L77f1c4:{c.instructions+=2;NFSU2_TR(0x77f1c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f1c5:{NFSU2_TR(0x77f1c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f1d0:L77f1d0:{c.instructions+=2;NFSU2_TR(0x77f1d0);
w4(R+4,u32(0x8a30f0ull));
}
B77f1d5:{NFSU2_TR(0x77f1d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f1daull));
TAIL_STATIC(0x598750u,598);
}
B77f1da:L77f1da:{c.instructions+=2;NFSU2_TR(0x77f1da);
u8 U[4];
w4(U+0,u32(0x7828b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f1df:{NFSU2_TR(0x77f1df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f1e4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f1e4:L77f1e4:{c.instructions+=2;NFSU2_TR(0x77f1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f1e5:{NFSU2_TR(0x77f1e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f1f0:L77f1f0:{c.instructions+=2;NFSU2_TR(0x77f1f0);
w4(R+4,u32(0x8a1dfcull));
}
B77f1f5:{NFSU2_TR(0x77f1f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f1faull));
TAIL_STATIC(0x4afaf0u,4af);
}
B77f1fa:L77f1fa:{c.instructions+=2;NFSU2_TR(0x77f1fa);
u8 U[4];
w4(U+0,u32(0x782800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f1ff:{NFSU2_TR(0x77f1ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f204ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f204:L77f204:{c.instructions+=2;NFSU2_TR(0x77f204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f205:{NFSU2_TR(0x77f205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f210:L77f210:{c.instructions+=2;NFSU2_TR(0x77f210);
w4(R+4,u32(0x8a1f10ull));
}
B77f215:{NFSU2_TR(0x77f215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f21aull));
TAIL_STATIC(0x4afaf0u,4af);
}
B77f21a:L77f21a:{c.instructions+=2;NFSU2_TR(0x77f21a);
u8 U[4];
w4(U+0,u32(0x782810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f21f:{NFSU2_TR(0x77f21f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f224ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f224:L77f224:{c.instructions+=2;NFSU2_TR(0x77f224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f225:{NFSU2_TR(0x77f225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f230:L77f230:{c.instructions+=4;NFSU2_TR(0x77f230);
w4(R+0,u32(0x8a2cb4ull));
}
B77f235:{NFSU2_TR(0x77f235);
w4(R+8,u32(0x2ull));
}
B77f23a:{NFSU2_TR(0x77f23a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B77f23c:{NFSU2_TR(0x77f23c);
__builtin_memmove((R+16),(R+16),4);
}
B77f240:L77f240:{c.instructions+=7;NFSU2_TR(0x77f240);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77f243:{NFSU2_TR(0x77f243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77f246:{NFSU2_TR(0x77f246);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B77f248:{NFSU2_TR(0x77f248);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77f24b:{NFSU2_TR(0x77f24b);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B77f24e:{NFSU2_TR(0x77f24e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77f24f:{NFSU2_TR(0x77f24f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77f240u);}goto L77f240;}}
}
B77f251:L77f251:{c.instructions+=1;NFSU2_TR(0x77f251);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f260:L77f260:{c.instructions+=4;NFSU2_TR(0x77f260);
w4(R+0,u32(0x8a3130ull));
}
B77f265:{NFSU2_TR(0x77f265);
w4(R+8,u32(0x2ull));
}
B77f26a:{NFSU2_TR(0x77f26a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B77f26c:{NFSU2_TR(0x77f26c);
__builtin_memmove((R+16),(R+16),4);
}
B77f270:L77f270:{c.instructions+=7;NFSU2_TR(0x77f270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77f273:{NFSU2_TR(0x77f273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77f276:{NFSU2_TR(0x77f276);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B77f278:{NFSU2_TR(0x77f278);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77f27b:{NFSU2_TR(0x77f27b);
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B77f27e:{NFSU2_TR(0x77f27e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77f27f:{NFSU2_TR(0x77f27f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77f270u);}goto L77f270;}}
}
B77f281:L77f281:{c.instructions+=1;NFSU2_TR(0x77f281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f290:L77f290:{c.instructions+=2;NFSU2_TR(0x77f290);
w4(R+4,u32(0x8a2b68ull));
}
B77f295:{NFSU2_TR(0x77f295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f29aull));
TAIL_STATIC(0x636ac0u,636);
}
B77f29a:L77f29a:{c.instructions+=2;NFSU2_TR(0x77f29a);
u8 U[4];
w4(U+0,u32(0x782850ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f29f:{NFSU2_TR(0x77f29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f2a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f2a4:L77f2a4:{c.instructions+=2;NFSU2_TR(0x77f2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f2a5:{NFSU2_TR(0x77f2a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f2b0:L77f2b0:{c.instructions+=2;NFSU2_TR(0x77f2b0);
w4(R+4,u32(0x8a31e4ull));
}
B77f2b5:{NFSU2_TR(0x77f2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f2baull));
TAIL_STATIC(0x598750u,598);
}
B77f2ba:L77f2ba:{c.instructions+=2;NFSU2_TR(0x77f2ba);
u8 U[4];
w4(U+0,u32(0x782860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f2bf:{NFSU2_TR(0x77f2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f2c4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f2c4:L77f2c4:{c.instructions+=2;NFSU2_TR(0x77f2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f2c5:{NFSU2_TR(0x77f2c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f2d0:L77f2d0:{c.instructions+=4;NFSU2_TR(0x77f2d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f2d1:{NFSU2_TR(0x77f2d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f2d2:{NFSU2_TR(0x77f2d2);
u8 U[4];
w4(U+0,u32(0x7a9340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f2d7:{NFSU2_TR(0x77f2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f2dcull));
TAIL_STATIC(0x43db50u,43d);
}
B77f2dc:L77f2dc:{c.instructions+=5;NFSU2_TR(0x77f2dc);
w4(R+28,u32(0x5ull));
}
B77f2e1:{NFSU2_TR(0x77f2e1);
u8 U[4];
w4(U+0,u32(0x7a9340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f2e6:{NFSU2_TR(0x77f2e6);
__builtin_memmove(gp(0x8a4418),(R+0),4);
}
B77f2eb:{NFSU2_TR(0x77f2eb);
__builtin_memmove(gp(0x8a441c),(R+28),4);
}
B77f2f1:{NFSU2_TR(0x77f2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f2f6ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f2f6:L77f2f6:{c.instructions+=3;NFSU2_TR(0x77f2f6);
u8 U[4];
w4(U+0,u32(0x7a932cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f2fb:{NFSU2_TR(0x77f2fb);
__builtin_memmove(gp(0x8a4420),(R+0),4);
}
B77f300:{NFSU2_TR(0x77f300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f305ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f305:L77f305:{c.instructions+=3;NFSU2_TR(0x77f305);
u8 U[4];
w4(U+0,u32(0x7a9318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f30a:{NFSU2_TR(0x77f30a);
__builtin_memmove(gp(0x8a4424),(R+0),4);
}
B77f30f:{NFSU2_TR(0x77f30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f314ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f314:L77f314:{c.instructions+=3;NFSU2_TR(0x77f314);
u8 U[4];
w4(U+0,u32(0x7a9304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f319:{NFSU2_TR(0x77f319);
__builtin_memmove(gp(0x8a4428),(R+0),4);
}
B77f31e:{NFSU2_TR(0x77f31e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f323ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f323:L77f323:{c.instructions+=3;NFSU2_TR(0x77f323);
u8 U[4];
w4(U+0,u32(0x7a92f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f328:{NFSU2_TR(0x77f328);
__builtin_memmove(gp(0x8a442c),(R+0),4);
}
B77f32d:{NFSU2_TR(0x77f32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f332ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f332:L77f332:{c.instructions+=7;NFSU2_TR(0x77f332);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B77f334:{NFSU2_TR(0x77f334);
u8 U[4];
w4(U+0,u32(0x7a92dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f339:{NFSU2_TR(0x77f339);
__builtin_memmove(gp(0x8a4430),(R+0),4);
}
B77f33e:{NFSU2_TR(0x77f33e);
__builtin_memmove(gp(0x8a4434),(R+24),4);
}
B77f344:{NFSU2_TR(0x77f344);
__builtin_memmove(gp(0x8a4438),(R+24),4);
}
B77f34a:{NFSU2_TR(0x77f34a);
__builtin_memmove(gp(0x8a443c),(R+24),4);
}
B77f350:{NFSU2_TR(0x77f350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f355ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f355:L77f355:{c.instructions+=4;NFSU2_TR(0x77f355);
u8 U[4];
w4(U+0,u32(0x7a92dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f35a:{NFSU2_TR(0x77f35a);
__builtin_memmove(gp(0x8a4440),(R+0),4);
}
B77f35f:{NFSU2_TR(0x77f35f);
__builtin_memmove(gp(0x8a4444),(R+28),4);
}
B77f365:{NFSU2_TR(0x77f365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f36aull));
TAIL_STATIC(0x43db50u,43d);
}
B77f36a:L77f36a:{c.instructions+=3;NFSU2_TR(0x77f36a);
u8 U[4];
w4(U+0,u32(0x7a9340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f36f:{NFSU2_TR(0x77f36f);
__builtin_memmove(gp(0x8a4448),(R+0),4);
}
B77f374:{NFSU2_TR(0x77f374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f379ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f379:L77f379:{c.instructions+=3;NFSU2_TR(0x77f379);
u8 U[4];
w4(U+0,u32(0x7a92c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f37e:{NFSU2_TR(0x77f37e);
__builtin_memmove(gp(0x8a444c),(R+0),4);
}
B77f383:{NFSU2_TR(0x77f383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f388ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f388:L77f388:{c.instructions+=3;NFSU2_TR(0x77f388);
u8 U[4];
w4(U+0,u32(0x7a92b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f38d:{NFSU2_TR(0x77f38d);
__builtin_memmove(gp(0x8a4450),(R+0),4);
}
B77f392:{NFSU2_TR(0x77f392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f397ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f397:L77f397:{c.instructions+=3;NFSU2_TR(0x77f397);
u8 U[4];
w4(U+0,u32(0x7a92a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f39c:{NFSU2_TR(0x77f39c);
__builtin_memmove(gp(0x8a4454),(R+0),4);
}
B77f3a1:{NFSU2_TR(0x77f3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f3a6ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f3a6:L77f3a6:{c.instructions+=6;NFSU2_TR(0x77f3a6);
u8 U[4];
w4(U+0,u32(0x7a92c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f3ab:{NFSU2_TR(0x77f3ab);
__builtin_memmove(gp(0x8a4458),(R+0),4);
}
B77f3b0:{NFSU2_TR(0x77f3b0);
__builtin_memmove(gp(0x8a445c),(R+24),4);
}
B77f3b6:{NFSU2_TR(0x77f3b6);
__builtin_memmove(gp(0x8a4460),(R+24),4);
}
B77f3bc:{NFSU2_TR(0x77f3bc);
__builtin_memmove(gp(0x8a4464),(R+24),4);
}
B77f3c2:{NFSU2_TR(0x77f3c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f3c7ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f3c7:L77f3c7:{c.instructions+=4;NFSU2_TR(0x77f3c7);
u8 U[4];
w4(U+0,u32(0x7a92c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f3cc:{NFSU2_TR(0x77f3cc);
__builtin_memmove(gp(0x8a4468),(R+0),4);
}
B77f3d1:{NFSU2_TR(0x77f3d1);
__builtin_memmove(gp(0x8a446c),(R+28),4);
}
B77f3d7:{NFSU2_TR(0x77f3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f3dcull));
TAIL_STATIC(0x43db50u,43d);
}
B77f3dc:L77f3dc:{c.instructions+=3;NFSU2_TR(0x77f3dc);
u8 U[4];
w4(U+0,u32(0x7a9318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f3e1:{NFSU2_TR(0x77f3e1);
__builtin_memmove(gp(0x8a4470),(R+0),4);
}
B77f3e6:{NFSU2_TR(0x77f3e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f3ebull));
TAIL_STATIC(0x43db50u,43d);
}
B77f3eb:L77f3eb:{c.instructions+=3;NFSU2_TR(0x77f3eb);
u8 U[4];
w4(U+0,u32(0x7a9304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f3f0:{NFSU2_TR(0x77f3f0);
__builtin_memmove(gp(0x8a4474),(R+0),4);
}
B77f3f5:{NFSU2_TR(0x77f3f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f3faull));
TAIL_STATIC(0x43db50u,43d);
}
B77f3fa:L77f3fa:{c.instructions+=4;NFSU2_TR(0x77f3fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B77f3fd:{NFSU2_TR(0x77f3fd);
u8 U[4];
w4(U+0,u32(0x7a9290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f402:{NFSU2_TR(0x77f402);
__builtin_memmove(gp(0x8a4478),(R+0),4);
}
B77f407:{NFSU2_TR(0x77f407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f40cull));
TAIL_STATIC(0x43db50u,43d);
}
B77f40c:L77f40c:{c.instructions+=3;NFSU2_TR(0x77f40c);
u8 U[4];
w4(U+0,u32(0x7a927cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f411:{NFSU2_TR(0x77f411);
__builtin_memmove(gp(0x8a447c),(R+0),4);
}
B77f416:{NFSU2_TR(0x77f416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f41bull));
TAIL_STATIC(0x43db50u,43d);
}
B77f41b:L77f41b:{c.instructions+=6;NFSU2_TR(0x77f41b);
u8 U[4];
w4(U+0,u32(0x7a9268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f420:{NFSU2_TR(0x77f420);
__builtin_memmove(gp(0x8a4480),(R+0),4);
}
B77f425:{NFSU2_TR(0x77f425);
__builtin_memmove(gp(0x8a4484),(R+24),4);
}
B77f42b:{NFSU2_TR(0x77f42b);
__builtin_memmove(gp(0x8a4488),(R+24),4);
}
B77f431:{NFSU2_TR(0x77f431);
__builtin_memmove(gp(0x8a448c),(R+24),4);
}
B77f437:{NFSU2_TR(0x77f437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f43cull));
TAIL_STATIC(0x43db50u,43d);
}
B77f43c:L77f43c:{c.instructions+=4;NFSU2_TR(0x77f43c);
u8 U[4];
w4(U+0,u32(0x7a9268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f441:{NFSU2_TR(0x77f441);
__builtin_memmove(gp(0x8a4490),(R+0),4);
}
B77f446:{NFSU2_TR(0x77f446);
__builtin_memmove(gp(0x8a4494),(R+28),4);
}
B77f44c:{NFSU2_TR(0x77f44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f451ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f451:L77f451:{c.instructions+=3;NFSU2_TR(0x77f451);
u8 U[4];
w4(U+0,u32(0x7a9340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f456:{NFSU2_TR(0x77f456);
__builtin_memmove(gp(0x8a4498),(R+0),4);
}
B77f45b:{NFSU2_TR(0x77f45b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f460ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f460:L77f460:{c.instructions+=3;NFSU2_TR(0x77f460);
__builtin_memmove(gp(0x8a449c),(R+0),4);
}
B77f465:{NFSU2_TR(0x77f465);
u8 U[4];
w4(U+0,u32(0x7a9254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f46a:{NFSU2_TR(0x77f46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f46full));
TAIL_STATIC(0x43db50u,43d);
}
B77f46f:L77f46f:{c.instructions+=3;NFSU2_TR(0x77f46f);
u8 U[4];
w4(U+0,u32(0x7a92c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f474:{NFSU2_TR(0x77f474);
__builtin_memmove(gp(0x8a44a0),(R+0),4);
}
B77f479:{NFSU2_TR(0x77f479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f47eull));
TAIL_STATIC(0x43db50u,43d);
}
B77f47e:L77f47e:{c.instructions+=3;NFSU2_TR(0x77f47e);
u8 U[4];
w4(U+0,u32(0x7a9304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f483:{NFSU2_TR(0x77f483);
__builtin_memmove(gp(0x8a44a4),(R+0),4);
}
B77f488:{NFSU2_TR(0x77f488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f48dull));
TAIL_STATIC(0x43db50u,43d);
}
B77f48d:L77f48d:{c.instructions+=6;NFSU2_TR(0x77f48d);
u8 U[4];
w4(U+0,u32(0x7a9240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f492:{NFSU2_TR(0x77f492);
__builtin_memmove(gp(0x8a44a8),(R+0),4);
}
B77f497:{NFSU2_TR(0x77f497);
__builtin_memmove(gp(0x8a44ac),(R+24),4);
}
B77f49d:{NFSU2_TR(0x77f49d);
__builtin_memmove(gp(0x8a44b0),(R+24),4);
}
B77f4a3:{NFSU2_TR(0x77f4a3);
__builtin_memmove(gp(0x8a44b4),(R+24),4);
}
B77f4a9:{NFSU2_TR(0x77f4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f4aeull));
TAIL_STATIC(0x43db50u,43d);
}
B77f4ae:L77f4ae:{c.instructions+=4;NFSU2_TR(0x77f4ae);
u8 U[4];
w4(U+0,u32(0x7a9240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f4b3:{NFSU2_TR(0x77f4b3);
__builtin_memmove(gp(0x8a44b8),(R+0),4);
}
B77f4b8:{NFSU2_TR(0x77f4b8);
__builtin_memmove(gp(0x8a44bc),(R+28),4);
}
B77f4be:{NFSU2_TR(0x77f4be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f4c3ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f4c3:L77f4c3:{c.instructions+=3;NFSU2_TR(0x77f4c3);
u8 U[4];
w4(U+0,u32(0x7a9340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f4c8:{NFSU2_TR(0x77f4c8);
__builtin_memmove(gp(0x8a44c0),(R+0),4);
}
B77f4cd:{NFSU2_TR(0x77f4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f4d2ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f4d2:L77f4d2:{c.instructions+=3;NFSU2_TR(0x77f4d2);
u8 U[4];
w4(U+0,u32(0x7a932cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f4d7:{NFSU2_TR(0x77f4d7);
__builtin_memmove(gp(0x8a44c4),(R+0),4);
}
B77f4dc:{NFSU2_TR(0x77f4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f4e1ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f4e1:L77f4e1:{c.instructions+=3;NFSU2_TR(0x77f4e1);
u8 U[4];
w4(U+0,u32(0x7a922cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f4e6:{NFSU2_TR(0x77f4e6);
__builtin_memmove(gp(0x8a44c8),(R+0),4);
}
B77f4eb:{NFSU2_TR(0x77f4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f4f0ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f4f0:L77f4f0:{c.instructions+=3;NFSU2_TR(0x77f4f0);
u8 U[4];
w4(U+0,u32(0x7a921cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f4f5:{NFSU2_TR(0x77f4f5);
__builtin_memmove(gp(0x8a44cc),(R+0),4);
}
B77f4fa:{NFSU2_TR(0x77f4fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f4ffull));
TAIL_STATIC(0x43db50u,43d);
}
B77f4ff:L77f4ff:{c.instructions+=8;NFSU2_TR(0x77f4ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77f502:{NFSU2_TR(0x77f502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77f503:{NFSU2_TR(0x77f503);
__builtin_memmove(gp(0x8a44d4),(R+24),4);
}
B77f509:{NFSU2_TR(0x77f509);
__builtin_memmove(gp(0x8a44d8),(R+24),4);
}
B77f50f:{NFSU2_TR(0x77f50f);
__builtin_memmove(gp(0x8a44dc),(R+24),4);
}
B77f515:{NFSU2_TR(0x77f515);
__builtin_memmove(gp(0x8a44d0),(R+0),4);
}
B77f51a:{NFSU2_TR(0x77f51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77f51b:{NFSU2_TR(0x77f51b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f520:L77f520:{c.instructions+=2;NFSU2_TR(0x77f520);
u8 U[4];
w4(U+0,u32(0x7a8c98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f525:{NFSU2_TR(0x77f525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f52aull));
TAIL_STATIC(0x43db50u,43d);
}
B77f52a:L77f52a:{c.instructions+=3;NFSU2_TR(0x77f52a);
u8 U[4];
w4(U+0,u32(0x7a8cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f52f:{NFSU2_TR(0x77f52f);
__builtin_memmove(gp(0x8a43c8),(R+0),4);
}
B77f534:{NFSU2_TR(0x77f534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f539ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f539:L77f539:{c.instructions+=3;NFSU2_TR(0x77f539);
u8 U[4];
w4(U+0,u32(0x7a8cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f53e:{NFSU2_TR(0x77f53e);
__builtin_memmove(gp(0x8a43cc),(R+0),4);
}
B77f543:{NFSU2_TR(0x77f543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f548ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f548:L77f548:{c.instructions+=3;NFSU2_TR(0x77f548);
u8 U[4];
w4(U+0,u32(0x7a8cd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f54d:{NFSU2_TR(0x77f54d);
__builtin_memmove(gp(0x8a43d0),(R+0),4);
}
B77f552:{NFSU2_TR(0x77f552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f557ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f557:L77f557:{c.instructions+=3;NFSU2_TR(0x77f557);
u8 U[4];
w4(U+0,u32(0x7a8c98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f55c:{NFSU2_TR(0x77f55c);
__builtin_memmove(gp(0x8a43d4),(R+0),4);
}
B77f561:{NFSU2_TR(0x77f561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f566ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f566:L77f566:{c.instructions+=3;NFSU2_TR(0x77f566);
u8 U[4];
w4(U+0,u32(0x7a8cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f56b:{NFSU2_TR(0x77f56b);
__builtin_memmove(gp(0x8a43d8),(R+0),4);
}
B77f570:{NFSU2_TR(0x77f570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f575ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f575:L77f575:{c.instructions+=3;NFSU2_TR(0x77f575);
u8 U[4];
w4(U+0,u32(0x7a93f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f57a:{NFSU2_TR(0x77f57a);
__builtin_memmove(gp(0x8a43dc),(R+0),4);
}
B77f57f:{NFSU2_TR(0x77f57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f584ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f584:L77f584:{c.instructions+=3;NFSU2_TR(0x77f584);
u8 U[4];
w4(U+0,u32(0x7a93e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f589:{NFSU2_TR(0x77f589);
__builtin_memmove(gp(0x8a43e0),(R+0),4);
}
B77f58e:{NFSU2_TR(0x77f58e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f593ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f593:L77f593:{c.instructions+=3;NFSU2_TR(0x77f593);
u8 U[4];
w4(U+0,u32(0x7a8cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f598:{NFSU2_TR(0x77f598);
__builtin_memmove(gp(0x8a43e4),(R+0),4);
}
B77f59d:{NFSU2_TR(0x77f59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5a2ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5a2:L77f5a2:{c.instructions+=3;NFSU2_TR(0x77f5a2);
u8 U[4];
w4(U+0,u32(0x7a93f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f5a7:{NFSU2_TR(0x77f5a7);
__builtin_memmove(gp(0x8a43e8),(R+0),4);
}
B77f5ac:{NFSU2_TR(0x77f5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5b1ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5b1:L77f5b1:{c.instructions+=3;NFSU2_TR(0x77f5b1);
u8 U[4];
w4(U+0,u32(0x7a93e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f5b6:{NFSU2_TR(0x77f5b6);
__builtin_memmove(gp(0x8a43ec),(R+0),4);
}
B77f5bb:{NFSU2_TR(0x77f5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5c0ull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5c0:L77f5c0:{c.instructions+=3;NFSU2_TR(0x77f5c0);
u8 U[4];
w4(U+0,u32(0x7a93ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f5c5:{NFSU2_TR(0x77f5c5);
__builtin_memmove(gp(0x8a43f0),(R+0),4);
}
B77f5ca:{NFSU2_TR(0x77f5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5cfull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5cf:L77f5cf:{c.instructions+=3;NFSU2_TR(0x77f5cf);
u8 U[4];
w4(U+0,u32(0x7a8cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f5d4:{NFSU2_TR(0x77f5d4);
__builtin_memmove(gp(0x8a43f4),(R+0),4);
}
B77f5d9:{NFSU2_TR(0x77f5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5deull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5de:L77f5de:{c.instructions+=3;NFSU2_TR(0x77f5de);
u8 U[4];
w4(U+0,u32(0x7a93b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f5e3:{NFSU2_TR(0x77f5e3);
__builtin_memmove(gp(0x8a43f8),(R+0),4);
}
B77f5e8:{NFSU2_TR(0x77f5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5edull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5ed:L77f5ed:{c.instructions+=3;NFSU2_TR(0x77f5ed);
u8 U[4];
w4(U+0,u32(0x7a93a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f5f2:{NFSU2_TR(0x77f5f2);
__builtin_memmove(gp(0x8a43fc),(R+0),4);
}
B77f5f7:{NFSU2_TR(0x77f5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f5fcull));
TAIL_STATIC(0x43db50u,43d);
}
B77f5fc:L77f5fc:{c.instructions+=3;NFSU2_TR(0x77f5fc);
u8 U[4];
w4(U+0,u32(0x7a9390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f601:{NFSU2_TR(0x77f601);
__builtin_memmove(gp(0x8a4400),(R+0),4);
}
B77f606:{NFSU2_TR(0x77f606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f60bull));
TAIL_STATIC(0x43db50u,43d);
}
B77f60b:L77f60b:{c.instructions+=4;NFSU2_TR(0x77f60b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B77f60e:{NFSU2_TR(0x77f60e);
u8 U[4];
w4(U+0,u32(0x7a8cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f613:{NFSU2_TR(0x77f613);
__builtin_memmove(gp(0x8a4404),(R+0),4);
}
B77f618:{NFSU2_TR(0x77f618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f61dull));
TAIL_STATIC(0x43db50u,43d);
}
B77f61d:L77f61d:{c.instructions+=3;NFSU2_TR(0x77f61d);
u8 U[4];
w4(U+0,u32(0x7a937cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f622:{NFSU2_TR(0x77f622);
__builtin_memmove(gp(0x8a4408),(R+0),4);
}
B77f627:{NFSU2_TR(0x77f627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f62cull));
TAIL_STATIC(0x43db50u,43d);
}
B77f62c:L77f62c:{c.instructions+=3;NFSU2_TR(0x77f62c);
u8 U[4];
w4(U+0,u32(0x7a9368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f631:{NFSU2_TR(0x77f631);
__builtin_memmove(gp(0x8a440c),(R+0),4);
}
B77f636:{NFSU2_TR(0x77f636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f63bull));
TAIL_STATIC(0x43db50u,43d);
}
B77f63b:L77f63b:{c.instructions+=3;NFSU2_TR(0x77f63b);
u8 U[4];
w4(U+0,u32(0x7a9354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f640:{NFSU2_TR(0x77f640);
__builtin_memmove(gp(0x8a4410),(R+0),4);
}
B77f645:{NFSU2_TR(0x77f645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f64aull));
TAIL_STATIC(0x43db50u,43d);
}
B77f64a:L77f64a:{c.instructions+=3;NFSU2_TR(0x77f64a);
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
B77f64d:{NFSU2_TR(0x77f64d);
__builtin_memmove(gp(0x8a4414),(R+0),4);
}
B77f652:{NFSU2_TR(0x77f652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f660:L77f660:{c.instructions+=2;NFSU2_TR(0x77f660);
w4(R+4,u32(0x8a3288ull));
}
B77f665:{NFSU2_TR(0x77f665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f66aull));
TAIL_STATIC(0x637940u,637);
}
B77f66a:L77f66a:{c.instructions+=2;NFSU2_TR(0x77f66a);
u8 U[4];
w4(U+0,u32(0x782870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f66f:{NFSU2_TR(0x77f66f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f674ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f674:L77f674:{c.instructions+=2;NFSU2_TR(0x77f674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f675:{NFSU2_TR(0x77f675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f680:L77f680:{c.instructions+=2;NFSU2_TR(0x77f680);
w4(R+4,u32(0x8a3148ull));
}
B77f685:{NFSU2_TR(0x77f685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f68aull));
TAIL_STATIC(0x598750u,598);
}
B77f68a:L77f68a:{c.instructions+=2;NFSU2_TR(0x77f68a);
u8 U[4];
w4(U+0,u32(0x782880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f68f:{NFSU2_TR(0x77f68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f694ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f694:L77f694:{c.instructions+=2;NFSU2_TR(0x77f694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f695:{NFSU2_TR(0x77f695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f6a0:L77f6a0:{c.instructions+=2;NFSU2_TR(0x77f6a0);
w4(R+4,u32(0x8a2c9cull));
}
B77f6a5:{NFSU2_TR(0x77f6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f6aaull));
TAIL_STATIC(0x598750u,598);
}
B77f6aa:L77f6aa:{c.instructions+=2;NFSU2_TR(0x77f6aa);
u8 U[4];
w4(U+0,u32(0x7828c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f6af:{NFSU2_TR(0x77f6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f6b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f6b4:L77f6b4:{c.instructions+=2;NFSU2_TR(0x77f6b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f6b5:{NFSU2_TR(0x77f6b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f6c0:L77f6c0:{c.instructions+=4;NFSU2_TR(0x77f6c0);
{u32 ea_=u32(u32(8403264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f6c6:{NFSU2_TR(0x77f6c6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77f6cc:{NFSU2_TR(0x77f6cc);
{u32 ea_=u32(u32(9051616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f6d2:{NFSU2_TR(0x77f6d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f6e0:L77f6e0:{c.instructions+=2;NFSU2_TR(0x77f6e0);
w4(R+4,u32(0x8a4260ull));
}
B77f6e5:{NFSU2_TR(0x77f6e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f6eaull));
TAIL_STATIC(0x598750u,598);
}
B77f6ea:L77f6ea:{c.instructions+=2;NFSU2_TR(0x77f6ea);
u8 U[4];
w4(U+0,u32(0x782890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f6ef:{NFSU2_TR(0x77f6ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f6f4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f6f4:L77f6f4:{c.instructions+=2;NFSU2_TR(0x77f6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f6f5:{NFSU2_TR(0x77f6f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f700:L77f700:{c.instructions+=3;NFSU2_TR(0x77f700);
u8 U[4];
w4(U+0,u32(0x7a9408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f705:{NFSU2_TR(0x77f705);
w4(R+4,u32(0x8a1f28ull));
}
B77f70a:{NFSU2_TR(0x77f70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f70full));
TAIL_STATIC(0x60b780u,60b);
}
B77f70f:L77f70f:{c.instructions+=2;NFSU2_TR(0x77f70f);
u8 U[4];
w4(U+0,u32(0x782730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f714:{NFSU2_TR(0x77f714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f719ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f719:L77f719:{c.instructions+=2;NFSU2_TR(0x77f719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f71a:{NFSU2_TR(0x77f71a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f720:L77f720:{c.instructions+=6;NFSU2_TR(0x77f720);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f725:{NFSU2_TR(0x77f725);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f72a:{NFSU2_TR(0x77f72a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f72c:{NFSU2_TR(0x77f72c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f72e:{NFSU2_TR(0x77f72e);
u8 U[4];
w4(U+0,u32(0x8a42c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f733:{NFSU2_TR(0x77f733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f738ull));
TAIL_STATIC(0x75c461u,75c);
}
B77f738:L77f738:{c.instructions+=2;NFSU2_TR(0x77f738);
u8 U[4];
w4(U+0,u32(0x782820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f73d:{NFSU2_TR(0x77f73d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f742ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f742:L77f742:{c.instructions+=2;NFSU2_TR(0x77f742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f743:{NFSU2_TR(0x77f743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f750:L77f750:{c.instructions+=3;NFSU2_TR(0x77f750);
u8 U[4];
w4(U+0,u32(0x7a9410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f755:{NFSU2_TR(0x77f755);
w4(R+4,u32(0x8a3180ull));
}
B77f75a:{NFSU2_TR(0x77f75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f75full));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f75f:L77f75f:{c.instructions+=3;NFSU2_TR(0x77f75f);
u8 U[4];
w4(U+0,u32(0x7a9410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f764:{NFSU2_TR(0x77f764);
w4(R+4,u32(0x8a31b0ull));
}
B77f769:{NFSU2_TR(0x77f769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f76eull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f76e:L77f76e:{c.instructions+=2;NFSU2_TR(0x77f76e);
u8 U[4];
w4(U+0,u32(0x782740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f773:{NFSU2_TR(0x77f773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f778ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f778:L77f778:{c.instructions+=2;NFSU2_TR(0x77f778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f779:{NFSU2_TR(0x77f779);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f780:L77f780:{c.instructions+=3;NFSU2_TR(0x77f780);
u8 U[4];
w4(U+0,u32(0x7a9418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f785:{NFSU2_TR(0x77f785);
w4(R+4,u32(0x8a1e90ull));
}
B77f78a:{NFSU2_TR(0x77f78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f78full));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f78f:L77f78f:{c.instructions+=3;NFSU2_TR(0x77f78f);
u8 U[4];
w4(U+0,u32(0x7a9418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f794:{NFSU2_TR(0x77f794);
w4(R+4,u32(0x8a1ec0ull));
}
B77f799:{NFSU2_TR(0x77f799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f79eull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f79e:L77f79e:{c.instructions+=2;NFSU2_TR(0x77f79e);
u8 U[4];
w4(U+0,u32(0x782760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f7a3:{NFSU2_TR(0x77f7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f7a8ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f7a8:L77f7a8:{c.instructions+=2;NFSU2_TR(0x77f7a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f7a9:{NFSU2_TR(0x77f7a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f7b0:L77f7b0:{c.instructions+=3;NFSU2_TR(0x77f7b0);
u8 U[4];
w4(U+0,u32(0x7a9424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f7b5:{NFSU2_TR(0x77f7b5);
w4(R+4,u32(0x8a31f0ull));
}
B77f7ba:{NFSU2_TR(0x77f7ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f7bfull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f7bf:L77f7bf:{c.instructions+=3;NFSU2_TR(0x77f7bf);
u8 U[4];
w4(U+0,u32(0x7a9424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f7c4:{NFSU2_TR(0x77f7c4);
w4(R+4,u32(0x8a3220ull));
}
B77f7c9:{NFSU2_TR(0x77f7c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f7ceull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f7ce:L77f7ce:{c.instructions+=2;NFSU2_TR(0x77f7ce);
u8 U[4];
w4(U+0,u32(0x782780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f7d3:{NFSU2_TR(0x77f7d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f7d8ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f7d8:L77f7d8:{c.instructions+=2;NFSU2_TR(0x77f7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f7d9:{NFSU2_TR(0x77f7d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f7e0:L77f7e0:{c.instructions+=3;NFSU2_TR(0x77f7e0);
u8 U[4];
w4(U+0,u32(0x7a9438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f7e5:{NFSU2_TR(0x77f7e5);
w4(R+4,u32(0x8a1e30ull));
}
B77f7ea:{NFSU2_TR(0x77f7ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f7efull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f7ef:L77f7ef:{c.instructions+=3;NFSU2_TR(0x77f7ef);
u8 U[4];
w4(U+0,u32(0x7a9438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f7f4:{NFSU2_TR(0x77f7f4);
w4(R+4,u32(0x8a1e60ull));
}
B77f7f9:{NFSU2_TR(0x77f7f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f7feull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77f7fe:L77f7fe:{c.instructions+=2;NFSU2_TR(0x77f7fe);
u8 U[4];
w4(U+0,u32(0x7827a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f803:{NFSU2_TR(0x77f803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f808ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f808:L77f808:{c.instructions+=2;NFSU2_TR(0x77f808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f809:{NFSU2_TR(0x77f809);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f810:L77f810:{c.instructions+=3;NFSU2_TR(0x77f810);
u8 U[4];
w4(U+0,u32(0x7a944cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f815:{NFSU2_TR(0x77f815);
w4(R+4,u32(0x8a3250ull));
}
B77f81a:{NFSU2_TR(0x77f81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f81full));
TAIL_STATIC(0x60b780u,60b);
}
B77f81f:L77f81f:{c.instructions+=3;NFSU2_TR(0x77f81f);
u8 U[4];
w4(U+0,u32(0x7a944cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f824:{NFSU2_TR(0x77f824);
w4(R+4,u32(0x8a326cull));
}
B77f829:{NFSU2_TR(0x77f829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f82eull));
TAIL_STATIC(0x60b780u,60b);
}
B77f82e:L77f82e:{c.instructions+=2;NFSU2_TR(0x77f82e);
u8 U[4];
w4(U+0,u32(0x7827c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f833:{NFSU2_TR(0x77f833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f838ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f838:L77f838:{c.instructions+=2;NFSU2_TR(0x77f838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f839:{NFSU2_TR(0x77f839);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f840:L77f840:{c.instructions+=4;NFSU2_TR(0x77f840);
{u32 ea_=u32(u32(8125944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f846:{NFSU2_TR(0x77f846);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f848:{NFSU2_TR(0x77f848);
{u32 ea_=u32(u32(9072908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f84e:{NFSU2_TR(0x77f84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f850:L77f850:{c.instructions+=4;NFSU2_TR(0x77f850);
{u32 ea_=u32(u32(8125944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f856:{NFSU2_TR(0x77f856);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77f85c:{NFSU2_TR(0x77f85c);
{u32 ea_=u32(u32(9072904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f862:{NFSU2_TR(0x77f862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f870:L77f870:{c.instructions+=4;NFSU2_TR(0x77f870);
{u32 ea_=u32(u32(8125952u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f876:{NFSU2_TR(0x77f876);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f878:{NFSU2_TR(0x77f878);
{u32 ea_=u32(u32(9072896u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f87e:{NFSU2_TR(0x77f87e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f880:L77f880:{c.instructions+=4;NFSU2_TR(0x77f880);
{u32 ea_=u32(u32(8125952u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f886:{NFSU2_TR(0x77f886);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77f88c:{NFSU2_TR(0x77f88c);
{u32 ea_=u32(u32(9072888u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f892:{NFSU2_TR(0x77f892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f8a0:L77f8a0:{c.instructions+=4;NFSU2_TR(0x77f8a0);
{u32 ea_=u32(u32(8125960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f8a6:{NFSU2_TR(0x77f8a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f8a8:{NFSU2_TR(0x77f8a8);
{u32 ea_=u32(u32(9072956u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f8ae:{NFSU2_TR(0x77f8ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f8b0:L77f8b0:{c.instructions+=4;NFSU2_TR(0x77f8b0);
{u32 ea_=u32(u32(8125960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f8b6:{NFSU2_TR(0x77f8b6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77f8bc:{NFSU2_TR(0x77f8bc);
{u32 ea_=u32(u32(9072952u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f8c2:{NFSU2_TR(0x77f8c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f8d0:L77f8d0:{c.instructions+=4;NFSU2_TR(0x77f8d0);
{u32 ea_=u32(u32(8125968u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f8d6:{NFSU2_TR(0x77f8d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f8d8:{NFSU2_TR(0x77f8d8);
{u32 ea_=u32(u32(9072944u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f8de:{NFSU2_TR(0x77f8de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f8e0:L77f8e0:{c.instructions+=4;NFSU2_TR(0x77f8e0);
{u32 ea_=u32(u32(8125968u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f8e6:{NFSU2_TR(0x77f8e6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77f8ec:{NFSU2_TR(0x77f8ec);
{u32 ea_=u32(u32(9072936u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f8f2:{NFSU2_TR(0x77f8f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f900:L77f900:{c.instructions+=2;NFSU2_TR(0x77f900);
w4(R+4,u32(0x8a7114ull));
}
B77f905:{NFSU2_TR(0x77f905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f90aull));
TAIL_STATIC(0x6d8360u,6d8);
}
B77f90a:L77f90a:{c.instructions+=2;NFSU2_TR(0x77f90a);
u8 U[4];
w4(U+0,u32(0x7828d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f90f:{NFSU2_TR(0x77f90f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f914ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f914:L77f914:{c.instructions+=2;NFSU2_TR(0x77f914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f915:{NFSU2_TR(0x77f915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f920:L77f920:{c.instructions+=2;NFSU2_TR(0x77f920);
w4(R+4,u32(0x8a7168ull));
}
B77f925:{NFSU2_TR(0x77f925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f92aull));
TAIL_STATIC(0x6d8360u,6d8);
}
B77f92a:L77f92a:{c.instructions+=2;NFSU2_TR(0x77f92a);
w4(R+4,u32(0x8a717cull));
}
B77f92f:{NFSU2_TR(0x77f92f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f934ull));
TAIL_STATIC(0x6d8360u,6d8);
}
B77f934:L77f934:{c.instructions+=2;NFSU2_TR(0x77f934);
u8 U[4];
w4(U+0,u32(0x7828e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f939:{NFSU2_TR(0x77f939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f93eull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f93e:L77f93e:{c.instructions+=2;NFSU2_TR(0x77f93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f93f:{NFSU2_TR(0x77f93f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f940:L77f940:{c.instructions+=2;NFSU2_TR(0x77f940);
w4(R+4,u32(0x8a7140ull));
}
B77f945:{NFSU2_TR(0x77f945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f94aull));
TAIL_STATIC(0x6d8360u,6d8);
}
B77f94a:L77f94a:{c.instructions+=2;NFSU2_TR(0x77f94a);
w4(R+4,u32(0x8a7154ull));
}
B77f94f:{NFSU2_TR(0x77f94f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f954ull));
TAIL_STATIC(0x6d8360u,6d8);
}
B77f954:L77f954:{c.instructions+=2;NFSU2_TR(0x77f954);
u8 U[4];
w4(U+0,u32(0x7828f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77f959:{NFSU2_TR(0x77f959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77f95eull));
TAIL_STATIC(0x75c5edu,75c);
}
B77f95e:L77f95e:{c.instructions+=2;NFSU2_TR(0x77f95e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77f95f:{NFSU2_TR(0x77f95f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f960:L77f960:{c.instructions+=4;NFSU2_TR(0x77f960);
{u32 ea_=u32(u32(8127936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f966:{NFSU2_TR(0x77f966);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f968:{NFSU2_TR(0x77f968);
{u32 ea_=u32(u32(9073068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f96e:{NFSU2_TR(0x77f96e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f970:L77f970:{c.instructions+=4;NFSU2_TR(0x77f970);
{u32 ea_=u32(u32(8127936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f976:{NFSU2_TR(0x77f976);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77f97c:{NFSU2_TR(0x77f97c);
{u32 ea_=u32(u32(9073064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f982:{NFSU2_TR(0x77f982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f990:L77f990:{c.instructions+=4;NFSU2_TR(0x77f990);
{u32 ea_=u32(u32(8127944u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f996:{NFSU2_TR(0x77f996);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f998:{NFSU2_TR(0x77f998);
{u32 ea_=u32(u32(9073056u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f99e:{NFSU2_TR(0x77f99e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f9a0:L77f9a0:{c.instructions+=4;NFSU2_TR(0x77f9a0);
{u32 ea_=u32(u32(8127944u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f9a6:{NFSU2_TR(0x77f9a6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77f9ac:{NFSU2_TR(0x77f9ac);
{u32 ea_=u32(u32(9073048u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f9b2:{NFSU2_TR(0x77f9b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f9c0:L77f9c0:{c.instructions+=4;NFSU2_TR(0x77f9c0);
{u32 ea_=u32(u32(8127960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f9c6:{NFSU2_TR(0x77f9c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f9c8:{NFSU2_TR(0x77f9c8);
{u32 ea_=u32(u32(9073100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f9ce:{NFSU2_TR(0x77f9ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f9d0:L77f9d0:{c.instructions+=4;NFSU2_TR(0x77f9d0);
{u32 ea_=u32(u32(8127960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77f9d6:{NFSU2_TR(0x77f9d6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77f9dc:{NFSU2_TR(0x77f9dc);
{u32 ea_=u32(u32(9073096u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77f9e2:{NFSU2_TR(0x77f9e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77f9f0:L77f9f0:{c.instructions+=4;NFSU2_TR(0x77f9f0);
{u32 ea_=u32(u32(8127968u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77f9f6:{NFSU2_TR(0x77f9f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77f9f8:{NFSU2_TR(0x77f9f8);
{u32 ea_=u32(u32(9073088u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77f9fe:{NFSU2_TR(0x77f9fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa00:L77fa00:{c.instructions+=4;NFSU2_TR(0x77fa00);
{u32 ea_=u32(u32(8127968u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fa06:{NFSU2_TR(0x77fa06);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fa0c:{NFSU2_TR(0x77fa0c);
{u32 ea_=u32(u32(9073080u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fa12:{NFSU2_TR(0x77fa12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa20:L77fa20:{c.instructions+=4;NFSU2_TR(0x77fa20);
{u32 ea_=u32(u32(8127984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fa26:{NFSU2_TR(0x77fa26);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fa28:{NFSU2_TR(0x77fa28);
{u32 ea_=u32(u32(9073124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fa2e:{NFSU2_TR(0x77fa2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa30:L77fa30:{c.instructions+=4;NFSU2_TR(0x77fa30);
{u32 ea_=u32(u32(8127984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fa36:{NFSU2_TR(0x77fa36);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fa3c:{NFSU2_TR(0x77fa3c);
{u32 ea_=u32(u32(9073120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fa42:{NFSU2_TR(0x77fa42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa50:L77fa50:{c.instructions+=4;NFSU2_TR(0x77fa50);
{u32 ea_=u32(u32(8127992u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fa56:{NFSU2_TR(0x77fa56);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fa58:{NFSU2_TR(0x77fa58);
{u32 ea_=u32(u32(9073112u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fa5e:{NFSU2_TR(0x77fa5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa60:L77fa60:{c.instructions+=4;NFSU2_TR(0x77fa60);
{u32 ea_=u32(u32(8127992u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fa66:{NFSU2_TR(0x77fa66);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fa6c:{NFSU2_TR(0x77fa6c);
{u32 ea_=u32(u32(9073104u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fa72:{NFSU2_TR(0x77fa72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa80:L77fa80:{c.instructions+=4;NFSU2_TR(0x77fa80);
{u32 ea_=u32(u32(8128056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fa86:{NFSU2_TR(0x77fa86);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fa88:{NFSU2_TR(0x77fa88);
{u32 ea_=u32(u32(9073156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fa8e:{NFSU2_TR(0x77fa8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fa90:L77fa90:{c.instructions+=4;NFSU2_TR(0x77fa90);
{u32 ea_=u32(u32(8128056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fa96:{NFSU2_TR(0x77fa96);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fa9c:{NFSU2_TR(0x77fa9c);
{u32 ea_=u32(u32(9073152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77faa2:{NFSU2_TR(0x77faa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fab0:L77fab0:{c.instructions+=4;NFSU2_TR(0x77fab0);
{u32 ea_=u32(u32(8128064u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fab6:{NFSU2_TR(0x77fab6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fab8:{NFSU2_TR(0x77fab8);
{u32 ea_=u32(u32(9073144u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fabe:{NFSU2_TR(0x77fabe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fac0:L77fac0:{c.instructions+=4;NFSU2_TR(0x77fac0);
{u32 ea_=u32(u32(8128064u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fac6:{NFSU2_TR(0x77fac6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77facc:{NFSU2_TR(0x77facc);
{u32 ea_=u32(u32(9073136u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fad2:{NFSU2_TR(0x77fad2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fae0:L77fae0:{c.instructions+=4;NFSU2_TR(0x77fae0);
{u32 ea_=u32(u32(8128072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fae6:{NFSU2_TR(0x77fae6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fae8:{NFSU2_TR(0x77fae8);
{u32 ea_=u32(u32(9073180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77faee:{NFSU2_TR(0x77faee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77faf0:L77faf0:{c.instructions+=4;NFSU2_TR(0x77faf0);
{u32 ea_=u32(u32(8128072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77faf6:{NFSU2_TR(0x77faf6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fafc:{NFSU2_TR(0x77fafc);
{u32 ea_=u32(u32(9073176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fb02:{NFSU2_TR(0x77fb02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fb10:L77fb10:{c.instructions+=4;NFSU2_TR(0x77fb10);
{u32 ea_=u32(u32(8128080u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fb16:{NFSU2_TR(0x77fb16);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fb18:{NFSU2_TR(0x77fb18);
{u32 ea_=u32(u32(9073168u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fb1e:{NFSU2_TR(0x77fb1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fb20:L77fb20:{c.instructions+=4;NFSU2_TR(0x77fb20);
{u32 ea_=u32(u32(8128080u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fb26:{NFSU2_TR(0x77fb26);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fb2c:{NFSU2_TR(0x77fb2c);
{u32 ea_=u32(u32(9073160u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fb32:{NFSU2_TR(0x77fb32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fb40:L77fb40:{c.instructions+=4;NFSU2_TR(0x77fb40);
{u32 ea_=u32(u32(8128088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fb46:{NFSU2_TR(0x77fb46);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fb48:{NFSU2_TR(0x77fb48);
{u32 ea_=u32(u32(9073412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fb4e:{NFSU2_TR(0x77fb4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fb50:L77fb50:{c.instructions+=4;NFSU2_TR(0x77fb50);
{u32 ea_=u32(u32(8128088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fb56:{NFSU2_TR(0x77fb56);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fb5c:{NFSU2_TR(0x77fb5c);
{u32 ea_=u32(u32(9073408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fb62:{NFSU2_TR(0x77fb62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fb70:L77fb70:{c.instructions+=4;NFSU2_TR(0x77fb70);
{u32 ea_=u32(u32(8128096u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fb76:{NFSU2_TR(0x77fb76);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fb78:{NFSU2_TR(0x77fb78);
{u32 ea_=u32(u32(9073400u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fb7e:{NFSU2_TR(0x77fb7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fb80:L77fb80:{c.instructions+=4;NFSU2_TR(0x77fb80);
{u32 ea_=u32(u32(8128096u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fb86:{NFSU2_TR(0x77fb86);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fb8c:{NFSU2_TR(0x77fb8c);
{u32 ea_=u32(u32(9073392u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fb92:{NFSU2_TR(0x77fb92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fba0:L77fba0:{c.instructions+=4;NFSU2_TR(0x77fba0);
{u32 ea_=u32(u32(8128368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fba6:{NFSU2_TR(0x77fba6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fba8:{NFSU2_TR(0x77fba8);
{u32 ea_=u32(u32(9075164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fbae:{NFSU2_TR(0x77fbae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fbb0:L77fbb0:{c.instructions+=4;NFSU2_TR(0x77fbb0);
{u32 ea_=u32(u32(8128368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fbb6:{NFSU2_TR(0x77fbb6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fbbc:{NFSU2_TR(0x77fbbc);
{u32 ea_=u32(u32(9075160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fbc2:{NFSU2_TR(0x77fbc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fbd0:L77fbd0:{c.instructions+=4;NFSU2_TR(0x77fbd0);
{u32 ea_=u32(u32(8128376u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fbd6:{NFSU2_TR(0x77fbd6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fbd8:{NFSU2_TR(0x77fbd8);
{u32 ea_=u32(u32(9075152u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fbde:{NFSU2_TR(0x77fbde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fbe0:L77fbe0:{c.instructions+=4;NFSU2_TR(0x77fbe0);
{u32 ea_=u32(u32(8128376u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fbe6:{NFSU2_TR(0x77fbe6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fbec:{NFSU2_TR(0x77fbec);
{u32 ea_=u32(u32(9075144u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fbf2:{NFSU2_TR(0x77fbf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fc00:L77fc00:{c.instructions+=4;NFSU2_TR(0x77fc00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc01:{NFSU2_TR(0x77fc01);
__builtin_memmove((R+24),gp(0x783138),4);
}
B77fc07:{NFSU2_TR(0x77fc07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc09:{NFSU2_TR(0x77fc09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77fc0bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B77fc0b:L77fc0b:{c.instructions+=4;NFSU2_TR(0x77fc0b);
u8 U[4];
w4(U+0,u32(0x7f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc10:{NFSU2_TR(0x77fc10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc12:{NFSU2_TR(0x77fc12);
__builtin_memmove(gp(0x80c0cc),(R+0),4);
}
B77fc17:{NFSU2_TR(0x77fc17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77fc19ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B77fc19:L77fc19:{c.instructions+=2;NFSU2_TR(0x77fc19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc1a:{NFSU2_TR(0x77fc1a);
u8 U[4];
__builtin_memmove((U+0),gp(0x783338),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77fc20ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B77fc20:L77fc20:{c.instructions+=4;NFSU2_TR(0x77fc20);
u8 U[4];
w4(U+0,u32(0x7f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc25:{NFSU2_TR(0x77fc25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77fc27:{NFSU2_TR(0x77fc27);
__builtin_memmove(gp(0x80c0d0),(R+0),4);
}
B77fc2c:{NFSU2_TR(0x77fc2c);
u8 U[4];
__builtin_memmove((U+0),gp(0x78333c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77fc32ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B77fc32:L77fc32:{c.instructions+=7;NFSU2_TR(0x77fc32);
__builtin_memmove(gp(0x80c0d4),(R+0),4);
}
B77fc37:{NFSU2_TR(0x77fc37);
s4(0x80c0d8,u32(0x0ull));
}
B77fc41:{NFSU2_TR(0x77fc41);
s4(0x80c0dc,u32(0x0ull));
}
B77fc4b:{NFSU2_TR(0x77fc4b);
s4(0x80c0e0,u32(0x7c08ecull));
}
B77fc55:{NFSU2_TR(0x77fc55);
s4(0x80c0e4,u32(0x0ull));
}
B77fc5f:{NFSU2_TR(0x77fc5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77fc60:{NFSU2_TR(0x77fc60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fc70:L77fc70:{c.instructions+=4;NFSU2_TR(0x77fc70);
{u32 ea_=u32(u32(8128872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fc76:{NFSU2_TR(0x77fc76);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fc78:{NFSU2_TR(0x77fc78);
{u32 ea_=u32(u32(9075188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fc7e:{NFSU2_TR(0x77fc7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fc80:L77fc80:{c.instructions+=4;NFSU2_TR(0x77fc80);
{u32 ea_=u32(u32(8128872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fc86:{NFSU2_TR(0x77fc86);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fc8c:{NFSU2_TR(0x77fc8c);
{u32 ea_=u32(u32(9075184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fc92:{NFSU2_TR(0x77fc92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fca0:L77fca0:{c.instructions+=4;NFSU2_TR(0x77fca0);
{u32 ea_=u32(u32(8128880u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fca6:{NFSU2_TR(0x77fca6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fca8:{NFSU2_TR(0x77fca8);
{u32 ea_=u32(u32(9075176u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fcae:{NFSU2_TR(0x77fcae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fcb0:L77fcb0:{c.instructions+=4;NFSU2_TR(0x77fcb0);
{u32 ea_=u32(u32(8128880u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fcb6:{NFSU2_TR(0x77fcb6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fcbc:{NFSU2_TR(0x77fcbc);
{u32 ea_=u32(u32(9075168u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fcc2:{NFSU2_TR(0x77fcc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fcd0:L77fcd0:{c.instructions+=4;NFSU2_TR(0x77fcd0);
{u32 ea_=u32(u32(8128896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fcd6:{NFSU2_TR(0x77fcd6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fcd8:{NFSU2_TR(0x77fcd8);
{u32 ea_=u32(u32(9075212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fcde:{NFSU2_TR(0x77fcde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fce0:L77fce0:{c.instructions+=4;NFSU2_TR(0x77fce0);
{u32 ea_=u32(u32(8128896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fce6:{NFSU2_TR(0x77fce6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fcec:{NFSU2_TR(0x77fcec);
{u32 ea_=u32(u32(9075208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fcf2:{NFSU2_TR(0x77fcf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd00:L77fd00:{c.instructions+=4;NFSU2_TR(0x77fd00);
{u32 ea_=u32(u32(8128904u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fd06:{NFSU2_TR(0x77fd06);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fd08:{NFSU2_TR(0x77fd08);
{u32 ea_=u32(u32(9075200u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fd0e:{NFSU2_TR(0x77fd0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd10:L77fd10:{c.instructions+=4;NFSU2_TR(0x77fd10);
{u32 ea_=u32(u32(8128904u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fd16:{NFSU2_TR(0x77fd16);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fd1c:{NFSU2_TR(0x77fd1c);
{u32 ea_=u32(u32(9075192u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fd22:{NFSU2_TR(0x77fd22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd30:L77fd30:{c.instructions+=4;NFSU2_TR(0x77fd30);
{u32 ea_=u32(u32(8128920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fd36:{NFSU2_TR(0x77fd36);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fd38:{NFSU2_TR(0x77fd38);
{u32 ea_=u32(u32(9075364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fd3e:{NFSU2_TR(0x77fd3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd40:L77fd40:{c.instructions+=4;NFSU2_TR(0x77fd40);
{u32 ea_=u32(u32(8128920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fd46:{NFSU2_TR(0x77fd46);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fd4c:{NFSU2_TR(0x77fd4c);
{u32 ea_=u32(u32(9075360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fd52:{NFSU2_TR(0x77fd52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd60:L77fd60:{c.instructions+=4;NFSU2_TR(0x77fd60);
{u32 ea_=u32(u32(8128928u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fd66:{NFSU2_TR(0x77fd66);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fd68:{NFSU2_TR(0x77fd68);
{u32 ea_=u32(u32(9075352u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fd6e:{NFSU2_TR(0x77fd6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd70:L77fd70:{c.instructions+=4;NFSU2_TR(0x77fd70);
{u32 ea_=u32(u32(8128928u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fd76:{NFSU2_TR(0x77fd76);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fd7c:{NFSU2_TR(0x77fd7c);
{u32 ea_=u32(u32(9075344u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fd82:{NFSU2_TR(0x77fd82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fd90:L77fd90:{c.instructions+=4;NFSU2_TR(0x77fd90);
{u32 ea_=u32(u32(8129192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fd96:{NFSU2_TR(0x77fd96);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fd98:{NFSU2_TR(0x77fd98);
{u32 ea_=u32(u32(9075388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fd9e:{NFSU2_TR(0x77fd9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fda0:L77fda0:{c.instructions+=4;NFSU2_TR(0x77fda0);
{u32 ea_=u32(u32(8129192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fda6:{NFSU2_TR(0x77fda6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fdac:{NFSU2_TR(0x77fdac);
{u32 ea_=u32(u32(9075384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fdb2:{NFSU2_TR(0x77fdb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fdc0:L77fdc0:{c.instructions+=4;NFSU2_TR(0x77fdc0);
{u32 ea_=u32(u32(8129200u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fdc6:{NFSU2_TR(0x77fdc6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fdc8:{NFSU2_TR(0x77fdc8);
{u32 ea_=u32(u32(9075376u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fdce:{NFSU2_TR(0x77fdce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fdd0:L77fdd0:{c.instructions+=4;NFSU2_TR(0x77fdd0);
{u32 ea_=u32(u32(8129200u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fdd6:{NFSU2_TR(0x77fdd6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fddc:{NFSU2_TR(0x77fddc);
{u32 ea_=u32(u32(9075368u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fde2:{NFSU2_TR(0x77fde2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fdf0:L77fdf0:{c.instructions+=4;NFSU2_TR(0x77fdf0);
{u32 ea_=u32(u32(8129208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fdf6:{NFSU2_TR(0x77fdf6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fdf8:{NFSU2_TR(0x77fdf8);
{u32 ea_=u32(u32(9075500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fdfe:{NFSU2_TR(0x77fdfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe00:L77fe00:{c.instructions+=4;NFSU2_TR(0x77fe00);
{u32 ea_=u32(u32(8129208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fe06:{NFSU2_TR(0x77fe06);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fe0c:{NFSU2_TR(0x77fe0c);
{u32 ea_=u32(u32(9075496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fe12:{NFSU2_TR(0x77fe12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe20:L77fe20:{c.instructions+=4;NFSU2_TR(0x77fe20);
{u32 ea_=u32(u32(8129216u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fe26:{NFSU2_TR(0x77fe26);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fe28:{NFSU2_TR(0x77fe28);
{u32 ea_=u32(u32(9075488u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fe2e:{NFSU2_TR(0x77fe2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe30:L77fe30:{c.instructions+=4;NFSU2_TR(0x77fe30);
{u32 ea_=u32(u32(8129216u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fe36:{NFSU2_TR(0x77fe36);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fe3c:{NFSU2_TR(0x77fe3c);
{u32 ea_=u32(u32(9075480u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fe42:{NFSU2_TR(0x77fe42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe50:L77fe50:{c.instructions+=4;NFSU2_TR(0x77fe50);
{u32 ea_=u32(u32(8129488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fe56:{NFSU2_TR(0x77fe56);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fe58:{NFSU2_TR(0x77fe58);
{u32 ea_=u32(u32(9075596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fe5e:{NFSU2_TR(0x77fe5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe60:L77fe60:{c.instructions+=4;NFSU2_TR(0x77fe60);
{u32 ea_=u32(u32(8129488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fe66:{NFSU2_TR(0x77fe66);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fe6c:{NFSU2_TR(0x77fe6c);
{u32 ea_=u32(u32(9075592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fe72:{NFSU2_TR(0x77fe72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe80:L77fe80:{c.instructions+=4;NFSU2_TR(0x77fe80);
{u32 ea_=u32(u32(8129496u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fe86:{NFSU2_TR(0x77fe86);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fe88:{NFSU2_TR(0x77fe88);
{u32 ea_=u32(u32(9075584u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fe8e:{NFSU2_TR(0x77fe8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fe90:L77fe90:{c.instructions+=4;NFSU2_TR(0x77fe90);
{u32 ea_=u32(u32(8129496u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fe96:{NFSU2_TR(0x77fe96);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fe9c:{NFSU2_TR(0x77fe9c);
{u32 ea_=u32(u32(9075576u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77fea2:{NFSU2_TR(0x77fea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77feb0:L77feb0:{c.instructions+=4;NFSU2_TR(0x77feb0);
{u32 ea_=u32(u32(8129512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77feb6:{NFSU2_TR(0x77feb6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77feb8:{NFSU2_TR(0x77feb8);
{u32 ea_=u32(u32(9075628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77febe:{NFSU2_TR(0x77febe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fec0:L77fec0:{c.instructions+=4;NFSU2_TR(0x77fec0);
{u32 ea_=u32(u32(8129512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77fec6:{NFSU2_TR(0x77fec6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77fecc:{NFSU2_TR(0x77fecc);
{u32 ea_=u32(u32(9075624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fed2:{NFSU2_TR(0x77fed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fee0:L77fee0:{c.instructions+=4;NFSU2_TR(0x77fee0);
{u32 ea_=u32(u32(8129520u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fee6:{NFSU2_TR(0x77fee6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77fee8:{NFSU2_TR(0x77fee8);
{u32 ea_=u32(u32(9075616u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77feee:{NFSU2_TR(0x77feee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77fef0:L77fef0:{c.instructions+=4;NFSU2_TR(0x77fef0);
{u32 ea_=u32(u32(8129520u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77fef6:{NFSU2_TR(0x77fef6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77fefc:{NFSU2_TR(0x77fefc);
{u32 ea_=u32(u32(9075608u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ff02:{NFSU2_TR(0x77ff02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ff10:L77ff10:{c.instructions+=4;NFSU2_TR(0x77ff10);
{u32 ea_=u32(u32(8129792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ff16:{NFSU2_TR(0x77ff16);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ff18:{NFSU2_TR(0x77ff18);
{u32 ea_=u32(u32(9075652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ff1e:{NFSU2_TR(0x77ff1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ff20:L77ff20:{c.instructions+=4;NFSU2_TR(0x77ff20);
{u32 ea_=u32(u32(8129792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ff26:{NFSU2_TR(0x77ff26);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ff2c:{NFSU2_TR(0x77ff2c);
{u32 ea_=u32(u32(9075648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ff32:{NFSU2_TR(0x77ff32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ff40:L77ff40:{c.instructions+=4;NFSU2_TR(0x77ff40);
{u32 ea_=u32(u32(8129800u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77ff46:{NFSU2_TR(0x77ff46);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ff48:{NFSU2_TR(0x77ff48);
{u32 ea_=u32(u32(9075640u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ff4e:{NFSU2_TR(0x77ff4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ff50:L77ff50:{c.instructions+=4;NFSU2_TR(0x77ff50);
{u32 ea_=u32(u32(8129800u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77ff56:{NFSU2_TR(0x77ff56);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77ff5c:{NFSU2_TR(0x77ff5c);
{u32 ea_=u32(u32(9075632u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ff62:{NFSU2_TR(0x77ff62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ff70:L77ff70:{c.instructions+=4;NFSU2_TR(0x77ff70);
{u32 ea_=u32(u32(8129808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ff76:{NFSU2_TR(0x77ff76);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ff78:{NFSU2_TR(0x77ff78);
{u32 ea_=u32(u32(9075700u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ff7e:{NFSU2_TR(0x77ff7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ff80:L77ff80:{c.instructions+=4;NFSU2_TR(0x77ff80);
{u32 ea_=u32(u32(8129808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ff86:{NFSU2_TR(0x77ff86);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ff8c:{NFSU2_TR(0x77ff8c);
{u32 ea_=u32(u32(9075696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ff92:{NFSU2_TR(0x77ff92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ffa0:L77ffa0:{c.instructions+=4;NFSU2_TR(0x77ffa0);
{u32 ea_=u32(u32(8129816u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77ffa6:{NFSU2_TR(0x77ffa6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ffa8:{NFSU2_TR(0x77ffa8);
{u32 ea_=u32(u32(9075688u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ffae:{NFSU2_TR(0x77ffae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ffb0:L77ffb0:{c.instructions+=4;NFSU2_TR(0x77ffb0);
{u32 ea_=u32(u32(8129816u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77ffb6:{NFSU2_TR(0x77ffb6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77ffbc:{NFSU2_TR(0x77ffbc);
{u32 ea_=u32(u32(9075680u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ffc2:{NFSU2_TR(0x77ffc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ffd0:L77ffd0:{c.instructions+=4;NFSU2_TR(0x77ffd0);
{u32 ea_=u32(u32(8129824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ffd6:{NFSU2_TR(0x77ffd6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ffd8:{NFSU2_TR(0x77ffd8);
{u32 ea_=u32(u32(9076276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ffde:{NFSU2_TR(0x77ffde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ffe0:L77ffe0:{c.instructions+=4;NFSU2_TR(0x77ffe0);
{u32 ea_=u32(u32(8129824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ffe6:{NFSU2_TR(0x77ffe6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ffec:{NFSU2_TR(0x77ffec);
{u32 ea_=u32(u32(9076272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77fff2:{NFSU2_TR(0x77fff2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x77f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
