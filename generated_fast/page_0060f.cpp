#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x60f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x60f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_60f(u8* __restrict R,Cpu& c);
u32 page_60f(Cpu& c){return body_60f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_60f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x60f004:goto L60f004;
case 0x60f00b:c.instructions+=213;goto B60f00b;
case 0x60f00d:c.instructions+=212;goto B60f00d;
case 0x60f014:c.instructions+=211;goto B60f014;
case 0x60f01b:c.instructions+=210;goto B60f01b;
case 0x60f01f:c.instructions+=209;goto B60f01f;
case 0x60f026:c.instructions+=208;goto B60f026;
case 0x60f02a:c.instructions+=207;goto B60f02a;
case 0x60f02e:c.instructions+=206;goto B60f02e;
case 0x60f032:c.instructions+=205;goto B60f032;
case 0x60f039:c.instructions+=204;goto B60f039;
case 0x60f040:c.instructions+=203;goto B60f040;
case 0x60f044:c.instructions+=202;goto B60f044;
case 0x60f046:c.instructions+=201;goto B60f046;
case 0x60f04d:c.instructions+=200;goto B60f04d;
case 0x60f054:c.instructions+=199;goto B60f054;
case 0x60f05b:c.instructions+=198;goto B60f05b;
case 0x60f05f:c.instructions+=197;goto B60f05f;
case 0x60f066:c.instructions+=196;goto B60f066;
case 0x60f06a:c.instructions+=195;goto B60f06a;
case 0x60f071:c.instructions+=194;goto B60f071;
case 0x60f075:c.instructions+=193;goto B60f075;
case 0x60f07c:c.instructions+=192;goto B60f07c;
case 0x60f083:c.instructions+=191;goto B60f083;
case 0x60f085:c.instructions+=190;goto B60f085;
case 0x60f08c:c.instructions+=189;goto B60f08c;
case 0x60f093:c.instructions+=188;goto B60f093;
case 0x60f097:c.instructions+=187;goto B60f097;
case 0x60f09b:c.instructions+=186;goto B60f09b;
case 0x60f0a2:c.instructions+=185;goto B60f0a2;
case 0x60f0a9:c.instructions+=184;goto B60f0a9;
case 0x60f0ad:c.instructions+=183;goto B60f0ad;
case 0x60f0b1:c.instructions+=182;goto B60f0b1;
case 0x60f0b5:c.instructions+=181;goto B60f0b5;
case 0x60f0bc:c.instructions+=180;goto B60f0bc;
case 0x60f0be:c.instructions+=179;goto B60f0be;
case 0x60f0c2:c.instructions+=178;goto B60f0c2;
case 0x60f0c4:c.instructions+=177;goto B60f0c4;
case 0x60f0c8:c.instructions+=176;goto B60f0c8;
case 0x60f0cc:c.instructions+=175;goto B60f0cc;
case 0x60f0ce:c.instructions+=174;goto B60f0ce;
case 0x60f0d5:c.instructions+=173;goto B60f0d5;
case 0x60f0dc:c.instructions+=172;goto B60f0dc;
case 0x60f0e3:c.instructions+=171;goto B60f0e3;
case 0x60f0e7:c.instructions+=170;goto B60f0e7;
case 0x60f0ee:c.instructions+=169;goto B60f0ee;
case 0x60f0f2:c.instructions+=168;goto B60f0f2;
case 0x60f0f9:c.instructions+=167;goto B60f0f9;
case 0x60f0fd:c.instructions+=166;goto B60f0fd;
case 0x60f104:c.instructions+=165;goto B60f104;
case 0x60f106:c.instructions+=164;goto B60f106;
case 0x60f10d:c.instructions+=163;goto B60f10d;
case 0x60f114:c.instructions+=162;goto B60f114;
case 0x60f11b:c.instructions+=161;goto B60f11b;
case 0x60f122:c.instructions+=160;goto B60f122;
case 0x60f129:c.instructions+=159;goto B60f129;
case 0x60f12b:c.instructions+=158;goto B60f12b;
case 0x60f132:c.instructions+=157;goto B60f132;
case 0x60f139:c.instructions+=156;goto B60f139;
case 0x60f140:c.instructions+=155;goto B60f140;
case 0x60f144:c.instructions+=154;goto B60f144;
case 0x60f148:c.instructions+=153;goto B60f148;
case 0x60f14f:c.instructions+=152;goto B60f14f;
case 0x60f156:c.instructions+=151;goto B60f156;
case 0x60f15a:c.instructions+=150;goto B60f15a;
case 0x60f15e:c.instructions+=149;goto B60f15e;
case 0x60f165:c.instructions+=148;goto B60f165;
case 0x60f16c:c.instructions+=147;goto B60f16c;
case 0x60f170:c.instructions+=146;goto B60f170;
case 0x60f177:c.instructions+=145;goto B60f177;
case 0x60f17e:c.instructions+=144;goto B60f17e;
case 0x60f180:c.instructions+=143;goto B60f180;
case 0x60f187:c.instructions+=142;goto B60f187;
case 0x60f18e:c.instructions+=141;goto B60f18e;
case 0x60f190:c.instructions+=140;goto B60f190;
case 0x60f197:c.instructions+=139;goto B60f197;
case 0x60f19e:c.instructions+=138;goto B60f19e;
case 0x60f1a5:c.instructions+=137;goto B60f1a5;
case 0x60f1ac:c.instructions+=136;goto B60f1ac;
case 0x60f1b0:c.instructions+=135;goto B60f1b0;
case 0x60f1b7:c.instructions+=134;goto B60f1b7;
case 0x60f1bb:c.instructions+=133;goto B60f1bb;
case 0x60f1c2:c.instructions+=132;goto B60f1c2;
case 0x60f1c6:c.instructions+=131;goto B60f1c6;
case 0x60f1cd:c.instructions+=130;goto B60f1cd;
case 0x60f1d4:c.instructions+=129;goto B60f1d4;
case 0x60f1d6:c.instructions+=128;goto B60f1d6;
case 0x60f1dd:c.instructions+=127;goto B60f1dd;
case 0x60f1e4:c.instructions+=126;goto B60f1e4;
case 0x60f1eb:c.instructions+=125;goto B60f1eb;
case 0x60f1f2:c.instructions+=124;goto B60f1f2;
case 0x60f1f9:c.instructions+=123;goto B60f1f9;
case 0x60f200:c.instructions+=122;goto B60f200;
case 0x60f207:c.instructions+=121;goto B60f207;
case 0x60f20e:c.instructions+=120;goto B60f20e;
case 0x60f212:c.instructions+=119;goto B60f212;
case 0x60f216:c.instructions+=118;goto B60f216;
case 0x60f218:c.instructions+=117;goto B60f218;
case 0x60f21f:c.instructions+=116;goto B60f21f;
case 0x60f226:c.instructions+=115;goto B60f226;
case 0x60f22d:c.instructions+=114;goto B60f22d;
case 0x60f231:c.instructions+=113;goto B60f231;
case 0x60f238:c.instructions+=112;goto B60f238;
case 0x60f23c:c.instructions+=111;goto B60f23c;
case 0x60f243:c.instructions+=110;goto B60f243;
case 0x60f247:c.instructions+=109;goto B60f247;
case 0x60f24e:c.instructions+=108;goto B60f24e;
case 0x60f255:c.instructions+=107;goto B60f255;
case 0x60f257:c.instructions+=106;goto B60f257;
case 0x60f25e:c.instructions+=105;goto B60f25e;
case 0x60f265:c.instructions+=104;goto B60f265;
case 0x60f26c:c.instructions+=103;goto B60f26c;
case 0x60f273:c.instructions+=102;goto B60f273;
case 0x60f27a:c.instructions+=101;goto B60f27a;
case 0x60f281:c.instructions+=100;goto B60f281;
case 0x60f288:c.instructions+=99;goto B60f288;
case 0x60f28f:c.instructions+=98;goto B60f28f;
case 0x60f296:c.instructions+=97;goto B60f296;
case 0x60f29a:c.instructions+=96;goto B60f29a;
case 0x60f2a1:c.instructions+=95;goto B60f2a1;
case 0x60f2a5:c.instructions+=94;goto B60f2a5;
case 0x60f2ac:c.instructions+=93;goto B60f2ac;
case 0x60f2b0:c.instructions+=92;goto B60f2b0;
case 0x60f2b7:c.instructions+=91;goto B60f2b7;
case 0x60f2be:c.instructions+=90;goto B60f2be;
case 0x60f2c0:c.instructions+=89;goto B60f2c0;
case 0x60f2c7:c.instructions+=88;goto B60f2c7;
case 0x60f2ce:c.instructions+=87;goto B60f2ce;
case 0x60f2d5:c.instructions+=86;goto B60f2d5;
case 0x60f2dc:c.instructions+=85;goto B60f2dc;
case 0x60f2e3:c.instructions+=84;goto B60f2e3;
case 0x60f2ea:c.instructions+=83;goto B60f2ea;
case 0x60f2f1:c.instructions+=82;goto B60f2f1;
case 0x60f2f8:c.instructions+=81;goto B60f2f8;
case 0x60f2fa:c.instructions+=80;goto B60f2fa;
case 0x60f301:c.instructions+=79;goto B60f301;
case 0x60f303:c.instructions+=78;goto B60f303;
case 0x60f307:c.instructions+=77;goto B60f307;
case 0x60f30b:c.instructions+=76;goto B60f30b;
case 0x60f30d:c.instructions+=75;goto B60f30d;
case 0x60f314:c.instructions+=74;goto B60f314;
case 0x60f31b:c.instructions+=73;goto B60f31b;
case 0x60f322:c.instructions+=72;goto B60f322;
case 0x60f324:c.instructions+=71;goto B60f324;
case 0x60f328:c.instructions+=70;goto B60f328;
case 0x60f32f:c.instructions+=69;goto B60f32f;
case 0x60f336:c.instructions+=68;goto B60f336;
case 0x60f33a:c.instructions+=67;goto B60f33a;
case 0x60f33e:c.instructions+=66;goto B60f33e;
case 0x60f342:c.instructions+=65;goto B60f342;
case 0x60f349:c.instructions+=64;goto B60f349;
case 0x60f350:c.instructions+=63;goto B60f350;
case 0x60f354:c.instructions+=62;goto B60f354;
case 0x60f35b:c.instructions+=61;goto B60f35b;
case 0x60f362:c.instructions+=60;goto B60f362;
case 0x60f364:c.instructions+=59;goto B60f364;
case 0x60f36b:c.instructions+=58;goto B60f36b;
case 0x60f36d:c.instructions+=57;goto B60f36d;
case 0x60f36f:c.instructions+=56;goto B60f36f;
case 0x60f370:c.instructions+=55;goto B60f370;
case 0x60f377:c.instructions+=54;goto B60f377;
case 0x60f382:c.instructions+=53;goto B60f382;
case 0x60f389:c.instructions+=52;goto B60f389;
case 0x60f394:c.instructions+=51;goto B60f394;
case 0x60f39b:c.instructions+=50;goto B60f39b;
case 0x60f3a6:c.instructions+=49;goto B60f3a6;
case 0x60f3ad:c.instructions+=48;goto B60f3ad;
case 0x60f3b8:c.instructions+=47;goto B60f3b8;
case 0x60f3c3:c.instructions+=46;goto B60f3c3;
case 0x60f3ce:c.instructions+=45;goto B60f3ce;
case 0x60f3d5:c.instructions+=44;goto B60f3d5;
case 0x60f3e0:c.instructions+=43;goto B60f3e0;
case 0x60f3e2:c.instructions+=42;goto B60f3e2;
case 0x60f3ed:c.instructions+=41;goto B60f3ed;
case 0x60f3f4:c.instructions+=40;goto B60f3f4;
case 0x60f3fb:c.instructions+=39;goto B60f3fb;
case 0x60f402:c.instructions+=38;goto B60f402;
case 0x60f406:c.instructions+=37;goto B60f406;
case 0x60f40a:c.instructions+=36;goto B60f40a;
case 0x60f411:c.instructions+=35;goto B60f411;
case 0x60f415:c.instructions+=34;goto B60f415;
case 0x60f41c:c.instructions+=33;goto B60f41c;
case 0x60f420:c.instructions+=32;goto B60f420;
case 0x60f427:c.instructions+=31;goto B60f427;
case 0x60f42e:c.instructions+=30;goto B60f42e;
case 0x60f430:c.instructions+=29;goto B60f430;
case 0x60f437:c.instructions+=28;goto B60f437;
case 0x60f43e:c.instructions+=27;goto B60f43e;
case 0x60f445:c.instructions+=26;goto B60f445;
case 0x60f446:c.instructions+=25;goto B60f446;
case 0x60f44d:c.instructions+=24;goto B60f44d;
case 0x60f44f:c.instructions+=23;goto B60f44f;
case 0x60f456:c.instructions+=22;goto B60f456;
case 0x60f45a:c.instructions+=21;goto B60f45a;
case 0x60f461:c.instructions+=20;goto B60f461;
case 0x60f465:c.instructions+=19;goto B60f465;
case 0x60f46c:c.instructions+=18;goto B60f46c;
case 0x60f470:c.instructions+=17;goto B60f470;
case 0x60f477:c.instructions+=16;goto B60f477;
case 0x60f47e:c.instructions+=15;goto B60f47e;
case 0x60f480:c.instructions+=14;goto B60f480;
case 0x60f487:c.instructions+=13;goto B60f487;
case 0x60f48e:c.instructions+=12;goto B60f48e;
case 0x60f492:c.instructions+=11;goto B60f492;
case 0x60f499:c.instructions+=10;goto B60f499;
case 0x60f49a:c.instructions+=9;goto B60f49a;
case 0x60f4a1:c.instructions+=8;goto B60f4a1;
case 0x60f4a8:c.instructions+=7;goto B60f4a8;
case 0x60f4af:c.instructions+=6;goto B60f4af;
case 0x60f4b6:c.instructions+=5;goto B60f4b6;
case 0x60f4bd:c.instructions+=4;goto B60f4bd;
case 0x60f4bf:c.instructions+=3;goto B60f4bf;
case 0x60f4c6:c.instructions+=2;goto B60f4c6;
case 0x60f4c8:c.instructions+=1;goto B60f4c8;
case 0x60f4cd:goto L60f4cd;
case 0x60f4d4:c.instructions+=3;goto B60f4d4;
case 0x60f4d5:c.instructions+=2;goto B60f4d5;
case 0x60f4d7:c.instructions+=1;goto B60f4d7;
case 0x60f4dd:goto L60f4dd;
case 0x60f4de:c.instructions+=5;goto B60f4de;
case 0x60f4df:c.instructions+=4;goto B60f4df;
case 0x60f4e0:c.instructions+=3;goto B60f4e0;
case 0x60f4e2:c.instructions+=2;goto B60f4e2;
case 0x60f4e3:c.instructions+=1;goto B60f4e3;
case 0x60f4f0:goto L60f4f0;
case 0x60f4f6:c.instructions+=4;goto B60f4f6;
case 0x60f4f8:c.instructions+=3;goto B60f4f8;
case 0x60f4fe:c.instructions+=2;goto B60f4fe;
case 0x60f501:c.instructions+=1;goto B60f501;
case 0x60f510:goto L60f510;
case 0x60f514:c.instructions+=2;goto B60f514;
case 0x60f516:c.instructions+=1;goto B60f516;
case 0x60f518:goto L60f518;
case 0x60f51e:c.instructions+=2;goto B60f51e;
case 0x60f520:c.instructions+=1;goto B60f520;
case 0x60f522:goto L60f522;
case 0x60f528:c.instructions+=1;goto B60f528;
case 0x60f529:goto L60f529;
case 0x60f52b:c.instructions+=1;goto B60f52b;
case 0x60f530:goto L60f530;
case 0x60f534:c.instructions+=2;goto B60f534;
case 0x60f536:c.instructions+=1;goto B60f536;
case 0x60f538:goto L60f538;
case 0x60f53e:c.instructions+=2;goto B60f53e;
case 0x60f540:c.instructions+=1;goto B60f540;
case 0x60f542:goto L60f542;
case 0x60f546:c.instructions+=1;goto B60f546;
case 0x60f54c:goto L60f54c;
case 0x60f550:goto L60f550;
case 0x60f555:c.instructions+=6;goto B60f555;
case 0x60f556:c.instructions+=5;goto B60f556;
case 0x60f557:c.instructions+=4;goto B60f557;
case 0x60f559:c.instructions+=3;goto B60f559;
case 0x60f55b:c.instructions+=2;goto B60f55b;
case 0x60f55d:c.instructions+=1;goto B60f55d;
case 0x60f563:goto L60f563;
case 0x60f564:c.instructions+=4;goto B60f564;
case 0x60f568:c.instructions+=3;goto B60f568;
case 0x60f569:c.instructions+=2;goto B60f569;
case 0x60f56b:c.instructions+=1;goto B60f56b;
case 0x60f570:goto L60f570;
case 0x60f572:c.instructions+=2;goto B60f572;
case 0x60f574:c.instructions+=1;goto B60f574;
case 0x60f579:goto L60f579;
case 0x60f580:goto L60f580;
case 0x60f586:c.instructions+=5;goto B60f586;
case 0x60f588:c.instructions+=4;goto B60f588;
case 0x60f58b:c.instructions+=3;goto B60f58b;
case 0x60f58d:c.instructions+=2;goto B60f58d;
case 0x60f594:c.instructions+=1;goto B60f594;
case 0x60f596:goto L60f596;
case 0x60f59c:c.instructions+=3;goto B60f59c;
case 0x60f59f:c.instructions+=2;goto B60f59f;
case 0x60f5a5:c.instructions+=1;goto B60f5a5;
case 0x60f5a7:goto L60f5a7;
case 0x60f5aa:goto L60f5aa;
case 0x60f5ac:c.instructions+=3;goto B60f5ac;
case 0x60f5b3:c.instructions+=2;goto B60f5b3;
case 0x60f5b6:c.instructions+=1;goto B60f5b6;
case 0x60f5b8:goto L60f5b8;
case 0x60f5be:c.instructions+=1;goto B60f5be;
case 0x60f5c0:goto L60f5c0;
case 0x60f5c7:c.instructions+=2;goto B60f5c7;
case 0x60f5ca:c.instructions+=1;goto B60f5ca;
case 0x60f5cc:goto L60f5cc;
case 0x60f5d2:goto L60f5d2;
case 0x60f5d4:c.instructions+=3;goto B60f5d4;
case 0x60f5d6:c.instructions+=2;goto B60f5d6;
case 0x60f5d9:c.instructions+=1;goto B60f5d9;
case 0x60f5db:goto L60f5db;
case 0x60f5e1:c.instructions+=1;goto B60f5e1;
case 0x60f5e3:goto L60f5e3;
case 0x60f5e9:goto L60f5e9;
case 0x60f5eb:c.instructions+=3;goto B60f5eb;
case 0x60f5ee:c.instructions+=2;goto B60f5ee;
case 0x60f5f1:c.instructions+=1;goto B60f5f1;
case 0x60f5f3:goto L60f5f3;
case 0x60f5f9:c.instructions+=1;goto B60f5f9;
case 0x60f5fb:goto L60f5fb;
case 0x60f601:goto L60f601;
case 0x60f604:c.instructions+=25;goto B60f604;
case 0x60f605:c.instructions+=24;goto B60f605;
case 0x60f608:c.instructions+=23;goto B60f608;
case 0x60f60b:c.instructions+=22;goto B60f60b;
case 0x60f612:c.instructions+=21;goto B60f612;
case 0x60f614:c.instructions+=20;goto B60f614;
case 0x60f617:c.instructions+=19;goto B60f617;
case 0x60f61e:c.instructions+=18;goto B60f61e;
case 0x60f621:c.instructions+=17;goto B60f621;
case 0x60f624:c.instructions+=16;goto B60f624;
case 0x60f627:c.instructions+=15;goto B60f627;
case 0x60f62a:c.instructions+=14;goto B60f62a;
case 0x60f631:c.instructions+=13;goto B60f631;
case 0x60f634:c.instructions+=12;goto B60f634;
case 0x60f637:c.instructions+=11;goto B60f637;
case 0x60f63e:c.instructions+=10;goto B60f63e;
case 0x60f641:c.instructions+=9;goto B60f641;
case 0x60f649:c.instructions+=8;goto B60f649;
case 0x60f64d:c.instructions+=7;goto B60f64d;
case 0x60f651:c.instructions+=6;goto B60f651;
case 0x60f654:c.instructions+=5;goto B60f654;
case 0x60f65b:c.instructions+=4;goto B60f65b;
case 0x60f65e:c.instructions+=3;goto B60f65e;
case 0x60f662:c.instructions+=2;goto B60f662;
case 0x60f668:c.instructions+=1;goto B60f668;
case 0x60f66e:goto L60f66e;
case 0x60f66f:c.instructions+=1;goto B60f66f;
case 0x60f670:goto L60f670;
case 0x60f671:c.instructions+=2;goto B60f671;
case 0x60f672:c.instructions+=1;goto B60f672;
case 0x60f680:goto L60f680;
case 0x60f68a:c.instructions+=1;goto B60f68a;
case 0x60f690:goto L60f690;
case 0x60f691:c.instructions+=4;goto B60f691;
case 0x60f695:c.instructions+=3;goto B60f695;
case 0x60f698:c.instructions+=2;goto B60f698;
case 0x60f69a:c.instructions+=1;goto B60f69a;
case 0x60f69c:goto L60f69c;
case 0x60f6a1:c.instructions+=2;goto B60f6a1;
case 0x60f6a2:c.instructions+=1;goto B60f6a2;
case 0x60f6a3:goto L60f6a3;
case 0x60f6a4:c.instructions+=3;goto B60f6a4;
case 0x60f6a8:c.instructions+=2;goto B60f6a8;
case 0x60f6a9:c.instructions+=1;goto B60f6a9;
case 0x60f6ae:goto L60f6ae;
case 0x60f6b1:c.instructions+=2;goto B60f6b1;
case 0x60f6b3:c.instructions+=1;goto B60f6b3;
case 0x60f6b5:goto L60f6b5;
case 0x60f6b6:c.instructions+=2;goto B60f6b6;
case 0x60f6b7:c.instructions+=1;goto B60f6b7;
case 0x60f6b8:goto L60f6b8;
case 0x60f6b9:c.instructions+=2;goto B60f6b9;
case 0x60f6bb:c.instructions+=1;goto B60f6bb;
case 0x60f6c0:goto L60f6c0;
case 0x60f6c1:c.instructions+=1;goto B60f6c1;
case 0x60f6c6:goto L60f6c6;
case 0x60f6c9:c.instructions+=2;goto B60f6c9;
case 0x60f6cb:c.instructions+=1;goto B60f6cb;
case 0x60f6cd:goto L60f6cd;
case 0x60f6ce:c.instructions+=1;goto B60f6ce;
case 0x60f6d3:goto L60f6d3;
case 0x60f6d6:c.instructions+=3;goto B60f6d6;
case 0x60f6d9:c.instructions+=2;goto B60f6d9;
case 0x60f6de:c.instructions+=1;goto B60f6de;
case 0x60f6e0:goto L60f6e0;
case 0x60f6e2:c.instructions+=2;goto B60f6e2;
case 0x60f6e4:c.instructions+=1;goto B60f6e4;
case 0x60f6e6:goto L60f6e6;
case 0x60f6eb:goto L60f6eb;
case 0x60f6ee:c.instructions+=2;goto B60f6ee;
case 0x60f6ef:c.instructions+=1;goto B60f6ef;
case 0x60f6f1:goto L60f6f1;
case 0x60f6f2:c.instructions+=3;goto B60f6f2;
case 0x60f6f7:c.instructions+=2;goto B60f6f7;
case 0x60f6f8:c.instructions+=1;goto B60f6f8;
case 0x60f700:goto L60f700;
case 0x60f70a:c.instructions+=1;goto B60f70a;
case 0x60f710:goto L60f710;
case 0x60f715:c.instructions+=2;goto B60f715;
case 0x60f71a:c.instructions+=1;goto B60f71a;
case 0x60f71f:goto L60f71f;
case 0x60f724:c.instructions+=2;goto B60f724;
case 0x60f729:c.instructions+=1;goto B60f729;
case 0x60f72e:goto L60f72e;
case 0x60f731:c.instructions+=1;goto B60f731;
case 0x60f740:goto L60f740;
case 0x60f745:c.instructions+=2;goto B60f745;
case 0x60f746:c.instructions+=1;goto B60f746;
case 0x60f74b:goto L60f74b;
case 0x60f751:c.instructions+=2;goto B60f751;
case 0x60f752:c.instructions+=1;goto B60f752;
case 0x60f757:goto L60f757;
case 0x60f75d:c.instructions+=2;goto B60f75d;
case 0x60f75e:c.instructions+=1;goto B60f75e;
case 0x60f763:goto L60f763;
case 0x60f768:c.instructions+=2;goto B60f768;
case 0x60f769:c.instructions+=1;goto B60f769;
case 0x60f76e:goto L60f76e;
case 0x60f774:c.instructions+=2;goto B60f774;
case 0x60f775:c.instructions+=1;goto B60f775;
case 0x60f77a:goto L60f77a;
case 0x60f780:c.instructions+=2;goto B60f780;
case 0x60f781:c.instructions+=1;goto B60f781;
case 0x60f786:goto L60f786;
case 0x60f789:c.instructions+=2;goto B60f789;
case 0x60f78e:c.instructions+=1;goto B60f78e;
case 0x60f793:goto L60f793;
case 0x60f798:c.instructions+=1;goto B60f798;
case 0x60f79d:goto L60f79d;
case 0x60f79f:c.instructions+=26;goto B60f79f;
case 0x60f7a9:c.instructions+=25;goto B60f7a9;
case 0x60f7b3:c.instructions+=24;goto B60f7b3;
case 0x60f7bd:c.instructions+=23;goto B60f7bd;
case 0x60f7c7:c.instructions+=22;goto B60f7c7;
case 0x60f7d1:c.instructions+=21;goto B60f7d1;
case 0x60f7db:c.instructions+=20;goto B60f7db;
case 0x60f7e5:c.instructions+=19;goto B60f7e5;
case 0x60f7ef:c.instructions+=18;goto B60f7ef;
case 0x60f7f9:c.instructions+=17;goto B60f7f9;
case 0x60f803:c.instructions+=16;goto B60f803;
case 0x60f80d:c.instructions+=15;goto B60f80d;
case 0x60f817:c.instructions+=14;goto B60f817;
case 0x60f821:c.instructions+=13;goto B60f821;
case 0x60f82b:c.instructions+=12;goto B60f82b;
case 0x60f835:c.instructions+=11;goto B60f835;
case 0x60f83f:c.instructions+=10;goto B60f83f;
case 0x60f849:c.instructions+=9;goto B60f849;
case 0x60f84e:c.instructions+=8;goto B60f84e;
case 0x60f853:c.instructions+=7;goto B60f853;
case 0x60f858:c.instructions+=6;goto B60f858;
case 0x60f85d:c.instructions+=5;goto B60f85d;
case 0x60f862:c.instructions+=4;goto B60f862;
case 0x60f867:c.instructions+=3;goto B60f867;
case 0x60f86c:c.instructions+=2;goto B60f86c;
case 0x60f871:c.instructions+=1;goto B60f871;
case 0x60f880:goto L60f880;
case 0x60f881:c.instructions+=10;goto B60f881;
case 0x60f883:c.instructions+=9;goto B60f883;
case 0x60f886:c.instructions+=8;goto B60f886;
case 0x60f889:c.instructions+=7;goto B60f889;
case 0x60f88e:c.instructions+=6;goto B60f88e;
case 0x60f88f:c.instructions+=5;goto B60f88f;
case 0x60f890:c.instructions+=4;goto B60f890;
case 0x60f892:c.instructions+=3;goto B60f892;
case 0x60f894:c.instructions+=2;goto B60f894;
case 0x60f895:c.instructions+=1;goto B60f895;
case 0x60f89b:goto L60f89b;
case 0x60f8a0:goto L60f8a0;
case 0x60f8a2:c.instructions+=4;goto B60f8a2;
case 0x60f8a3:c.instructions+=3;goto B60f8a3;
case 0x60f8a5:c.instructions+=2;goto B60f8a5;
case 0x60f8aa:c.instructions+=1;goto B60f8aa;
case 0x60f8ac:goto L60f8ac;
case 0x60f8b1:c.instructions+=12;goto B60f8b1;
case 0x60f8b8:c.instructions+=11;goto B60f8b8;
case 0x60f8bf:c.instructions+=10;goto B60f8bf;
case 0x60f8c4:c.instructions+=9;goto B60f8c4;
case 0x60f8ca:c.instructions+=8;goto B60f8ca;
case 0x60f8cd:c.instructions+=7;goto B60f8cd;
case 0x60f8d3:c.instructions+=6;goto B60f8d3;
case 0x60f8d9:c.instructions+=5;goto B60f8d9;
case 0x60f8df:c.instructions+=4;goto B60f8df;
case 0x60f8e5:c.instructions+=3;goto B60f8e5;
case 0x60f8ea:c.instructions+=2;goto B60f8ea;
case 0x60f8f0:c.instructions+=1;goto B60f8f0;
case 0x60f8f2:goto L60f8f2;
case 0x60f8f8:c.instructions+=10;goto B60f8f8;
case 0x60f8fd:c.instructions+=9;goto B60f8fd;
case 0x60f900:c.instructions+=8;goto B60f900;
case 0x60f906:c.instructions+=7;goto B60f906;
case 0x60f90c:c.instructions+=6;goto B60f90c;
case 0x60f912:c.instructions+=5;goto B60f912;
case 0x60f918:c.instructions+=4;goto B60f918;
case 0x60f91e:c.instructions+=3;goto B60f91e;
case 0x60f923:c.instructions+=2;goto B60f923;
case 0x60f929:c.instructions+=1;goto B60f929;
case 0x60f92f:goto L60f92f;
case 0x60f934:c.instructions+=1;goto B60f934;
case 0x60f939:goto L60f939;
case 0x60f93c:c.instructions+=13;goto B60f93c;
case 0x60f93f:c.instructions+=12;goto B60f93f;
case 0x60f942:c.instructions+=11;goto B60f942;
case 0x60f948:c.instructions+=10;goto B60f948;
case 0x60f94b:c.instructions+=9;goto B60f94b;
case 0x60f94e:c.instructions+=8;goto B60f94e;
case 0x60f951:c.instructions+=7;goto B60f951;
case 0x60f955:c.instructions+=6;goto B60f955;
case 0x60f958:c.instructions+=5;goto B60f958;
case 0x60f95d:c.instructions+=4;goto B60f95d;
case 0x60f960:c.instructions+=3;goto B60f960;
case 0x60f962:c.instructions+=2;goto B60f962;
case 0x60f966:c.instructions+=1;goto B60f966;
case 0x60f968:goto L60f968;
case 0x60f96d:c.instructions+=3;goto B60f96d;
case 0x60f970:c.instructions+=2;goto B60f970;
case 0x60f97a:c.instructions+=1;goto B60f97a;
case 0x60f97f:goto L60f97f;
case 0x60f981:goto L60f981;
case 0x60f982:c.instructions+=5;goto B60f982;
case 0x60f983:c.instructions+=4;goto B60f983;
case 0x60f984:c.instructions+=3;goto B60f984;
case 0x60f986:c.instructions+=2;goto B60f986;
case 0x60f987:c.instructions+=1;goto B60f987;
case 0x60f988:goto L60f988;
case 0x60f98a:c.instructions+=2;goto B60f98a;
case 0x60f990:c.instructions+=1;goto B60f990;
case 0x60f992:goto L60f992;
case 0x60f995:c.instructions+=20;goto B60f995;
case 0x60f998:c.instructions+=19;goto B60f998;
case 0x60f99d:c.instructions+=18;goto B60f99d;
case 0x60f99f:c.instructions+=17;goto B60f99f;
case 0x60f9a2:c.instructions+=16;goto B60f9a2;
case 0x60f9a5:c.instructions+=15;goto B60f9a5;
case 0x60f9a8:c.instructions+=14;goto B60f9a8;
case 0x60f9ac:c.instructions+=13;goto B60f9ac;
case 0x60f9af:c.instructions+=12;goto B60f9af;
case 0x60f9b3:c.instructions+=11;goto B60f9b3;
case 0x60f9b6:c.instructions+=10;goto B60f9b6;
case 0x60f9b9:c.instructions+=9;goto B60f9b9;
case 0x60f9bc:c.instructions+=8;goto B60f9bc;
case 0x60f9bf:c.instructions+=7;goto B60f9bf;
case 0x60f9c2:c.instructions+=6;goto B60f9c2;
case 0x60f9c5:c.instructions+=5;goto B60f9c5;
case 0x60f9c8:c.instructions+=4;goto B60f9c8;
case 0x60f9cb:c.instructions+=3;goto B60f9cb;
case 0x60f9ce:c.instructions+=2;goto B60f9ce;
case 0x60f9d1:c.instructions+=1;goto B60f9d1;
case 0x60f9d3:goto L60f9d3;
case 0x60f9d6:c.instructions+=1;goto B60f9d6;
case 0x60f9d8:goto L60f9d8;
case 0x60f9de:c.instructions+=1;goto B60f9de;
case 0x60f9e0:goto L60f9e0;
case 0x60f9e6:goto L60f9e6;
case 0x60f9e9:c.instructions+=4;goto B60f9e9;
case 0x60f9ec:c.instructions+=3;goto B60f9ec;
case 0x60f9ee:c.instructions+=2;goto B60f9ee;
case 0x60f9f1:c.instructions+=1;goto B60f9f1;
case 0x60f9f3:goto L60f9f3;
case 0x60f9f6:c.instructions+=1;goto B60f9f6;
case 0x60f9f8:goto L60f9f8;
case 0x60f9fe:c.instructions+=1;goto B60f9fe;
case 0x60fa00:goto L60fa00;
case 0x60fa06:c.instructions+=1;goto B60fa06;
case 0x60fa0c:goto L60fa0c;
case 0x60fa0d:c.instructions+=5;goto B60fa0d;
case 0x60fa0e:c.instructions+=4;goto B60fa0e;
case 0x60fa0f:c.instructions+=3;goto B60fa0f;
case 0x60fa10:c.instructions+=2;goto B60fa10;
case 0x60fa15:c.instructions+=1;goto B60fa15;
case 0x60fa1a:goto L60fa1a;
case 0x60fa1b:c.instructions+=5;goto B60fa1b;
case 0x60fa1c:c.instructions+=4;goto B60fa1c;
case 0x60fa1d:c.instructions+=3;goto B60fa1d;
case 0x60fa1f:c.instructions+=2;goto B60fa1f;
case 0x60fa20:c.instructions+=1;goto B60fa20;
case 0x60fa21:goto L60fa21;
case 0x60fa24:c.instructions+=1;goto B60fa24;
case 0x60fa2a:goto L60fa2a;
case 0x60fa2d:c.instructions+=1;goto B60fa2d;
case 0x60fa33:goto L60fa33;
case 0x60fa39:c.instructions+=1;goto B60fa39;
case 0x60fa3f:goto L60fa3f;
case 0x60fa45:c.instructions+=14;goto B60fa45;
case 0x60fa46:c.instructions+=13;goto B60fa46;
case 0x60fa48:c.instructions+=12;goto B60fa48;
case 0x60fa49:c.instructions+=11;goto B60fa49;
case 0x60fa4a:c.instructions+=10;goto B60fa4a;
case 0x60fa4b:c.instructions+=9;goto B60fa4b;
case 0x60fa4d:c.instructions+=8;goto B60fa4d;
case 0x60fa52:c.instructions+=7;goto B60fa52;
case 0x60fa58:c.instructions+=6;goto B60fa58;
case 0x60fa5b:c.instructions+=5;goto B60fa5b;
case 0x60fa5e:c.instructions+=4;goto B60fa5e;
case 0x60fa64:c.instructions+=3;goto B60fa64;
case 0x60fa67:c.instructions+=2;goto B60fa67;
case 0x60fa6a:c.instructions+=1;goto B60fa6a;
case 0x60fa6f:goto L60fa6f;
case 0x60fa70:c.instructions+=5;goto B60fa70;
case 0x60fa71:c.instructions+=4;goto B60fa71;
case 0x60fa72:c.instructions+=3;goto B60fa72;
case 0x60fa74:c.instructions+=2;goto B60fa74;
case 0x60fa75:c.instructions+=1;goto B60fa75;
case 0x60fa80:goto L60fa80;
case 0x60fa85:c.instructions+=3;goto B60fa85;
case 0x60fa8b:c.instructions+=2;goto B60fa8b;
case 0x60fa8d:c.instructions+=1;goto B60fa8d;
case 0x60fa8f:goto L60fa8f;
case 0x60fa95:goto L60fa95;
case 0x60faa0:goto L60faa0;
case 0x60faa7:c.instructions+=1;goto B60faa7;
case 0x60faa9:goto L60faa9;
case 0x60faae:c.instructions+=1;goto B60faae;
case 0x60faaf:goto L60faaf;
case 0x60fab4:c.instructions+=5;goto B60fab4;
case 0x60fab5:c.instructions+=4;goto B60fab5;
case 0x60fab6:c.instructions+=3;goto B60fab6;
case 0x60fab8:c.instructions+=2;goto B60fab8;
case 0x60faba:c.instructions+=1;goto B60faba;
case 0x60fabc:goto L60fabc;
case 0x60fabd:c.instructions+=3;goto B60fabd;
case 0x60fac2:c.instructions+=2;goto B60fac2;
case 0x60fac3:c.instructions+=1;goto B60fac3;
case 0x60fac4:goto L60fac4;
case 0x60faca:c.instructions+=1;goto B60faca;
case 0x60facf:goto L60facf;
case 0x60fad0:c.instructions+=5;goto B60fad0;
case 0x60fad5:c.instructions+=4;goto B60fad5;
case 0x60fad7:c.instructions+=3;goto B60fad7;
case 0x60fada:c.instructions+=2;goto B60fada;
case 0x60fae0:c.instructions+=1;goto B60fae0;
case 0x60fae2:goto L60fae2;
case 0x60fae8:c.instructions+=1;goto B60fae8;
case 0x60faea:goto L60faea;
case 0x60faf4:goto L60faf4;
case 0x60fafa:c.instructions+=1;goto B60fafa;
case 0x60fafc:goto L60fafc;
case 0x60fb02:c.instructions+=1;goto B60fb02;
case 0x60fb08:goto L60fb08;
case 0x60fb0e:c.instructions+=1;goto B60fb0e;
case 0x60fb14:goto L60fb14;
case 0x60fb19:c.instructions+=1;goto B60fb19;
case 0x60fb1e:goto L60fb1e;
case 0x60fb23:c.instructions+=2;goto B60fb23;
case 0x60fb28:c.instructions+=1;goto B60fb28;
case 0x60fb2d:goto L60fb2d;
case 0x60fb32:c.instructions+=2;goto B60fb32;
case 0x60fb37:c.instructions+=1;goto B60fb37;
case 0x60fb3c:goto L60fb3c;
case 0x60fb41:c.instructions+=2;goto B60fb41;
case 0x60fb46:c.instructions+=1;goto B60fb46;
case 0x60fb4b:goto L60fb4b;
case 0x60fb50:c.instructions+=2;goto B60fb50;
case 0x60fb55:c.instructions+=1;goto B60fb55;
case 0x60fb5a:goto L60fb5a;
case 0x60fb5f:c.instructions+=2;goto B60fb5f;
case 0x60fb64:c.instructions+=1;goto B60fb64;
case 0x60fb69:goto L60fb69;
case 0x60fb6e:c.instructions+=2;goto B60fb6e;
case 0x60fb73:c.instructions+=1;goto B60fb73;
case 0x60fb78:goto L60fb78;
case 0x60fb7d:c.instructions+=2;goto B60fb7d;
case 0x60fb82:c.instructions+=1;goto B60fb82;
case 0x60fb87:goto L60fb87;
case 0x60fb8a:c.instructions+=2;goto B60fb8a;
case 0x60fb8f:c.instructions+=1;goto B60fb8f;
case 0x60fb94:goto L60fb94;
case 0x60fb99:c.instructions+=2;goto B60fb99;
case 0x60fb9e:c.instructions+=1;goto B60fb9e;
case 0x60fba3:goto L60fba3;
case 0x60fba8:c.instructions+=1;goto B60fba8;
case 0x60fbad:goto L60fbad;
case 0x60fbaf:c.instructions+=1;goto B60fbaf;
case 0x60fbb5:goto L60fbb5;
case 0x60fbba:c.instructions+=3;goto B60fbba;
case 0x60fbbb:c.instructions+=2;goto B60fbbb;
case 0x60fbbe:c.instructions+=1;goto B60fbbe;
case 0x60fbc4:goto L60fbc4;
case 0x60fbcb:goto L60fbcb;
case 0x60fbd1:c.instructions+=8;goto B60fbd1;
case 0x60fbd7:c.instructions+=7;goto B60fbd7;
case 0x60fbdd:c.instructions+=6;goto B60fbdd;
case 0x60fbe3:c.instructions+=5;goto B60fbe3;
case 0x60fbe5:c.instructions+=4;goto B60fbe5;
case 0x60fbeb:c.instructions+=3;goto B60fbeb;
case 0x60fbed:c.instructions+=2;goto B60fbed;
case 0x60fbf0:c.instructions+=1;goto B60fbf0;
case 0x60fbf2:goto L60fbf2;
case 0x60fbf4:c.instructions+=1;goto B60fbf4;
case 0x60fbfa:goto L60fbfa;
case 0x60fc00:c.instructions+=4;goto B60fc00;
case 0x60fc02:c.instructions+=3;goto B60fc02;
case 0x60fc08:c.instructions+=2;goto B60fc08;
case 0x60fc0e:c.instructions+=1;goto B60fc0e;
case 0x60fc13:goto L60fc13;
case 0x60fc19:c.instructions+=5;goto B60fc19;
case 0x60fc1e:c.instructions+=4;goto B60fc1e;
case 0x60fc20:c.instructions+=3;goto B60fc20;
case 0x60fc22:c.instructions+=2;goto B60fc22;
case 0x60fc25:c.instructions+=1;goto B60fc25;
case 0x60fc2b:goto L60fc2b;
case 0x60fc2c:c.instructions+=5;goto B60fc2c;
case 0x60fc2e:c.instructions+=4;goto B60fc2e;
case 0x60fc38:c.instructions+=3;goto B60fc38;
case 0x60fc42:c.instructions+=2;goto B60fc42;
case 0x60fc43:c.instructions+=1;goto B60fc43;
case 0x60fc44:goto L60fc44;
case 0x60fc49:c.instructions+=13;goto B60fc49;
case 0x60fc50:c.instructions+=12;goto B60fc50;
case 0x60fc57:c.instructions+=11;goto B60fc57;
case 0x60fc59:c.instructions+=10;goto B60fc59;
case 0x60fc5c:c.instructions+=9;goto B60fc5c;
case 0x60fc5f:c.instructions+=8;goto B60fc5f;
case 0x60fc64:c.instructions+=7;goto B60fc64;
case 0x60fc65:c.instructions+=6;goto B60fc65;
case 0x60fc67:c.instructions+=5;goto B60fc67;
case 0x60fc6d:c.instructions+=4;goto B60fc6d;
case 0x60fc73:c.instructions+=3;goto B60fc73;
case 0x60fc7d:c.instructions+=2;goto B60fc7d;
case 0x60fc7e:c.instructions+=1;goto B60fc7e;
case 0x60fc7f:goto L60fc7f;
case 0x60fc81:c.instructions+=4;goto B60fc81;
case 0x60fc82:c.instructions+=3;goto B60fc82;
case 0x60fc84:c.instructions+=2;goto B60fc84;
case 0x60fc85:c.instructions+=1;goto B60fc85;
case 0x60fc86:goto L60fc86;
case 0x60fc8c:c.instructions+=8;goto B60fc8c;
case 0x60fc92:c.instructions+=7;goto B60fc92;
case 0x60fc98:c.instructions+=6;goto B60fc98;
case 0x60fc9e:c.instructions+=5;goto B60fc9e;
case 0x60fca0:c.instructions+=4;goto B60fca0;
case 0x60fca6:c.instructions+=3;goto B60fca6;
case 0x60fca8:c.instructions+=2;goto B60fca8;
case 0x60fcab:c.instructions+=1;goto B60fcab;
case 0x60fcad:goto L60fcad;
case 0x60fcaf:c.instructions+=1;goto B60fcaf;
case 0x60fcb5:goto L60fcb5;
case 0x60fcbb:c.instructions+=5;goto B60fcbb;
case 0x60fcbd:c.instructions+=4;goto B60fcbd;
case 0x60fcc3:c.instructions+=3;goto B60fcc3;
case 0x60fcc9:c.instructions+=2;goto B60fcc9;
case 0x60fccf:c.instructions+=1;goto B60fccf;
case 0x60fcd4:goto L60fcd4;
case 0x60fcda:c.instructions+=4;goto B60fcda;
case 0x60fcdc:c.instructions+=3;goto B60fcdc;
case 0x60fcde:c.instructions+=2;goto B60fcde;
case 0x60fce1:c.instructions+=1;goto B60fce1;
case 0x60fce3:goto L60fce3;
case 0x60fce9:c.instructions+=4;goto B60fce9;
case 0x60fcf3:c.instructions+=3;goto B60fcf3;
case 0x60fcfd:c.instructions+=2;goto B60fcfd;
case 0x60fd03:c.instructions+=1;goto B60fd03;
case 0x60fd05:goto L60fd05;
case 0x60fd0b:c.instructions+=1;goto B60fd0b;
case 0x60fd11:goto L60fd11;
case 0x60fd16:c.instructions+=4;goto B60fd16;
case 0x60fd17:c.instructions+=3;goto B60fd17;
case 0x60fd1a:c.instructions+=2;goto B60fd1a;
case 0x60fd1f:c.instructions+=1;goto B60fd1f;
case 0x60fd21:goto L60fd21;
case 0x60fd27:goto L60fd27;
case 0x60fd28:c.instructions+=3;goto B60fd28;
case 0x60fd2a:c.instructions+=2;goto B60fd2a;
case 0x60fd2b:c.instructions+=1;goto B60fd2b;
case 0x60fd40:goto L60fd40;
case 0x60fd45:c.instructions+=1;goto B60fd45;
case 0x60fd4a:goto L60fd4a;
case 0x60fd4f:c.instructions+=2;goto B60fd4f;
case 0x60fd54:c.instructions+=1;goto B60fd54;
case 0x60fd59:goto L60fd59;
case 0x60fd5e:c.instructions+=2;goto B60fd5e;
case 0x60fd63:c.instructions+=1;goto B60fd63;
case 0x60fd68:goto L60fd68;
case 0x60fd6d:c.instructions+=2;goto B60fd6d;
case 0x60fd72:c.instructions+=1;goto B60fd72;
case 0x60fd77:goto L60fd77;
case 0x60fd7c:c.instructions+=2;goto B60fd7c;
case 0x60fd81:c.instructions+=1;goto B60fd81;
case 0x60fd86:goto L60fd86;
case 0x60fd8b:c.instructions+=2;goto B60fd8b;
case 0x60fd90:c.instructions+=1;goto B60fd90;
case 0x60fd95:goto L60fd95;
case 0x60fd9a:c.instructions+=2;goto B60fd9a;
case 0x60fd9f:c.instructions+=1;goto B60fd9f;
case 0x60fda4:goto L60fda4;
case 0x60fda9:c.instructions+=2;goto B60fda9;
case 0x60fdae:c.instructions+=1;goto B60fdae;
case 0x60fdb3:goto L60fdb3;
case 0x60fdb5:c.instructions+=6;goto B60fdb5;
case 0x60fdb7:c.instructions+=5;goto B60fdb7;
case 0x60fdb9:c.instructions+=4;goto B60fdb9;
case 0x60fdbb:c.instructions+=3;goto B60fdbb;
case 0x60fdc0:c.instructions+=2;goto B60fdc0;
case 0x60fdc5:c.instructions+=1;goto B60fdc5;
case 0x60fdca:goto L60fdca;
case 0x60fdcc:c.instructions+=1;goto B60fdcc;
case 0x60fdd1:goto L60fdd1;
case 0x60fdd4:c.instructions+=1;goto B60fdd4;
case 0x60fde0:goto L60fde0;
case 0x60fde6:c.instructions+=2;goto B60fde6;
case 0x60fdec:c.instructions+=1;goto B60fdec;
case 0x60fdf0:goto L60fdf0;
case 0x60fdf6:c.instructions+=4;goto B60fdf6;
case 0x60fdf8:c.instructions+=3;goto B60fdf8;
case 0x60fdfb:c.instructions+=2;goto B60fdfb;
case 0x60fdfe:c.instructions+=1;goto B60fdfe;
case 0x60fe00:goto L60fe00;
case 0x60fe05:c.instructions+=1;goto B60fe05;
case 0x60fe10:goto L60fe10;
case 0x60fe14:c.instructions+=5;goto B60fe14;
case 0x60fe17:c.instructions+=4;goto B60fe17;
case 0x60fe1d:c.instructions+=3;goto B60fe1d;
case 0x60fe1f:c.instructions+=2;goto B60fe1f;
case 0x60fe22:c.instructions+=1;goto B60fe22;
case 0x60fe24:goto L60fe24;
case 0x60fe27:c.instructions+=4;goto B60fe27;
case 0x60fe2d:c.instructions+=3;goto B60fe2d;
case 0x60fe2f:c.instructions+=2;goto B60fe2f;
case 0x60fe32:c.instructions+=1;goto B60fe32;
case 0x60fe34:goto L60fe34;
case 0x60fe37:c.instructions+=4;goto B60fe37;
case 0x60fe3d:c.instructions+=3;goto B60fe3d;
case 0x60fe3f:c.instructions+=2;goto B60fe3f;
case 0x60fe42:c.instructions+=1;goto B60fe42;
case 0x60fe44:goto L60fe44;
case 0x60fe46:c.instructions+=1;goto B60fe46;
case 0x60fe47:goto L60fe47;
case 0x60fe4c:c.instructions+=1;goto B60fe4c;
case 0x60fe4d:goto L60fe4d;
case 0x60fe50:c.instructions+=4;goto B60fe50;
case 0x60fe56:c.instructions+=3;goto B60fe56;
case 0x60fe58:c.instructions+=2;goto B60fe58;
case 0x60fe5b:c.instructions+=1;goto B60fe5b;
case 0x60fe5d:goto L60fe5d;
case 0x60fe60:c.instructions+=4;goto B60fe60;
case 0x60fe66:c.instructions+=3;goto B60fe66;
case 0x60fe68:c.instructions+=2;goto B60fe68;
case 0x60fe6b:c.instructions+=1;goto B60fe6b;
case 0x60fe6d:goto L60fe6d;
case 0x60fe70:c.instructions+=5;goto B60fe70;
case 0x60fe76:c.instructions+=4;goto B60fe76;
case 0x60fe78:c.instructions+=3;goto B60fe78;
case 0x60fe7b:c.instructions+=2;goto B60fe7b;
case 0x60fe80:c.instructions+=1;goto B60fe80;
case 0x60fe82:goto L60fe82;
case 0x60fe87:c.instructions+=1;goto B60fe87;
case 0x60fe88:goto L60fe88;
case 0x60fe8b:c.instructions+=4;goto B60fe8b;
case 0x60fe91:c.instructions+=3;goto B60fe91;
case 0x60fe93:c.instructions+=2;goto B60fe93;
case 0x60fe96:c.instructions+=1;goto B60fe96;
case 0x60fe98:goto L60fe98;
case 0x60fe9b:c.instructions+=4;goto B60fe9b;
case 0x60fea1:c.instructions+=3;goto B60fea1;
case 0x60fea3:c.instructions+=2;goto B60fea3;
case 0x60fea6:c.instructions+=1;goto B60fea6;
case 0x60fea8:goto L60fea8;
case 0x60feab:c.instructions+=5;goto B60feab;
case 0x60feb1:c.instructions+=4;goto B60feb1;
case 0x60feb3:c.instructions+=3;goto B60feb3;
case 0x60feb6:c.instructions+=2;goto B60feb6;
case 0x60febb:c.instructions+=1;goto B60febb;
case 0x60febd:goto L60febd;
case 0x60fec2:c.instructions+=1;goto B60fec2;
case 0x60fec3:goto L60fec3;
case 0x60fec6:c.instructions+=5;goto B60fec6;
case 0x60fecc:c.instructions+=4;goto B60fecc;
case 0x60fece:c.instructions+=3;goto B60fece;
case 0x60fed1:c.instructions+=2;goto B60fed1;
case 0x60fed6:c.instructions+=1;goto B60fed6;
case 0x60fed8:goto L60fed8;
case 0x60fedd:goto L60fedd;
case 0x60fee0:goto L60fee0;
case 0x60fee4:c.instructions+=2;goto B60fee4;
case 0x60feeb:c.instructions+=1;goto B60feeb;
case 0x60fef0:goto L60fef0;
case 0x60fef4:c.instructions+=2;goto B60fef4;
case 0x60fef8:c.instructions+=1;goto B60fef8;
case 0x60fefa:goto L60fefa;
case 0x60fefc:c.instructions+=1;goto B60fefc;
case 0x60feff:goto L60feff;
case 0x60ff03:c.instructions+=12;goto B60ff03;
case 0x60ff04:c.instructions+=11;goto B60ff04;
case 0x60ff0a:c.instructions+=10;goto B60ff0a;
case 0x60ff0d:c.instructions+=9;goto B60ff0d;
case 0x60ff10:c.instructions+=8;goto B60ff10;
case 0x60ff11:c.instructions+=7;goto B60ff11;
case 0x60ff14:c.instructions+=6;goto B60ff14;
case 0x60ff15:c.instructions+=5;goto B60ff15;
case 0x60ff17:c.instructions+=4;goto B60ff17;
case 0x60ff19:c.instructions+=3;goto B60ff19;
case 0x60ff1a:c.instructions+=2;goto B60ff1a;
case 0x60ff1d:c.instructions+=1;goto B60ff1d;
case 0x60ff1f:goto L60ff1f;
case 0x60ff21:c.instructions+=1;goto B60ff21;
case 0x60ff23:goto L60ff23;
case 0x60ff26:goto L60ff26;
case 0x60ff2b:c.instructions+=4;goto B60ff2b;
case 0x60ff2c:c.instructions+=3;goto B60ff2c;
case 0x60ff2f:c.instructions+=2;goto B60ff2f;
case 0x60ff31:c.instructions+=1;goto B60ff31;
case 0x60ff33:goto L60ff33;
case 0x60ff35:c.instructions+=1;goto B60ff35;
case 0x60ff37:goto L60ff37;
case 0x60ff39:c.instructions+=1;goto B60ff39;
case 0x60ff3b:goto L60ff3b;
case 0x60ff3c:c.instructions+=5;goto B60ff3c;
case 0x60ff3d:c.instructions+=4;goto B60ff3d;
case 0x60ff3e:c.instructions+=3;goto B60ff3e;
case 0x60ff40:c.instructions+=2;goto B60ff40;
case 0x60ff41:c.instructions+=1;goto B60ff41;
case 0x60ff44:goto L60ff44;
case 0x60ff46:goto L60ff46;
case 0x60ff48:goto L60ff48;
case 0x60ff4b:c.instructions+=2;goto B60ff4b;
case 0x60ff4f:c.instructions+=1;goto B60ff4f;
case 0x60ff53:goto L60ff53;
case 0x60ff55:c.instructions+=3;goto B60ff55;
case 0x60ff58:c.instructions+=2;goto B60ff58;
case 0x60ff5b:c.instructions+=1;goto B60ff5b;
case 0x60ff5d:goto L60ff5d;
case 0x60ff5f:c.instructions+=1;goto B60ff5f;
case 0x60ff61:goto L60ff61;
case 0x60ff62:c.instructions+=3;goto B60ff62;
case 0x60ff65:c.instructions+=2;goto B60ff65;
case 0x60ff67:c.instructions+=1;goto B60ff67;
case 0x60ff69:goto L60ff69;
case 0x60ff6b:goto L60ff6b;
case 0x60ff6c:c.instructions+=4;goto B60ff6c;
case 0x60ff6d:c.instructions+=3;goto B60ff6d;
case 0x60ff6e:c.instructions+=2;goto B60ff6e;
case 0x60ff6f:c.instructions+=1;goto B60ff6f;
case 0x60ff80:goto L60ff80;
case 0x60ff84:c.instructions+=7;goto B60ff84;
case 0x60ff88:c.instructions+=6;goto B60ff88;
case 0x60ff8b:c.instructions+=5;goto B60ff8b;
case 0x60ff8c:c.instructions+=4;goto B60ff8c;
case 0x60ff90:c.instructions+=3;goto B60ff90;
case 0x60ff92:c.instructions+=2;goto B60ff92;
case 0x60ff95:c.instructions+=1;goto B60ff95;
case 0x60ff97:goto L60ff97;
case 0x60ff99:c.instructions+=2;goto B60ff99;
case 0x60ff9a:c.instructions+=1;goto B60ff9a;
case 0x60ff9d:goto L60ff9d;
case 0x60ffa0:c.instructions+=1;goto B60ffa0;
case 0x60ffa2:goto L60ffa2;
case 0x60ffa6:c.instructions+=7;goto B60ffa6;
case 0x60ffaa:c.instructions+=6;goto B60ffaa;
case 0x60ffad:c.instructions+=5;goto B60ffad;
case 0x60ffb2:c.instructions+=4;goto B60ffb2;
case 0x60ffb7:c.instructions+=3;goto B60ffb7;
case 0x60ffbb:c.instructions+=2;goto B60ffbb;
case 0x60ffc0:c.instructions+=1;goto B60ffc0;
case 0x60ffc2:goto L60ffc2;
case 0x60ffc8:c.instructions+=6;goto B60ffc8;
case 0x60ffc9:c.instructions+=5;goto B60ffc9;
case 0x60ffcc:c.instructions+=4;goto B60ffcc;
case 0x60ffcf:c.instructions+=3;goto B60ffcf;
case 0x60ffd2:c.instructions+=2;goto B60ffd2;
case 0x60ffd3:c.instructions+=1;goto B60ffd3;
case 0x60ffd8:goto L60ffd8;
case 0x60ffdb:goto L60ffdb;
case 0x60ffdd:c.instructions+=3;goto B60ffdd;
case 0x60ffde:c.instructions+=2;goto B60ffde;
case 0x60ffdf:c.instructions+=1;goto B60ffdf;
case 0x60ffe4:goto L60ffe4;
case 0x60ffe5:c.instructions+=3;goto B60ffe5;
case 0x60ffe9:c.instructions+=2;goto B60ffe9;
case 0x60ffea:c.instructions+=1;goto B60ffea;
case 0x60ffef:goto L60ffef;
case 0x60fff2:goto L60fff2;
case 0x60fff3:c.instructions+=1;goto B60fff3;
default:missing_instruction(c.pc);}
B60f004:L60f004:{c.instructions+=214;NFSU2_TR(0x60f004);
u8 U[8];
w4(U+0,u32(u32(u32(0x8b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f00b:{NFSU2_TR(0x60f00b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f00d:{NFSU2_TR(0x60f00d);
u8 U[8];
w4(U+0,u32(u32(u32(0x478ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f014:{NFSU2_TR(0x60f014);
{u32 ea_=u32(r4(R+16)+u32(1136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f01b:{NFSU2_TR(0x60f01b);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f01f:{NFSU2_TR(0x60f01f);
{u32 ea_=u32(r4(R+16)+u32(1136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f026:{NFSU2_TR(0x60f026);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f02a:{NFSU2_TR(0x60f02a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f02e:{NFSU2_TR(0x60f02e);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f032:{NFSU2_TR(0x60f032);
{u32 ea_=u32(r4(R+16)+u32(1144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f039:{NFSU2_TR(0x60f039);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f040:{NFSU2_TR(0x60f040);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f044:{NFSU2_TR(0x60f044);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f046:{NFSU2_TR(0x60f046);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f04d:{NFSU2_TR(0x60f04d);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f054:{NFSU2_TR(0x60f054);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f05b:{NFSU2_TR(0x60f05b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f05f:{NFSU2_TR(0x60f05f);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f066:{NFSU2_TR(0x60f066);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f06a:{NFSU2_TR(0x60f06a);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f071:{NFSU2_TR(0x60f071);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f075:{NFSU2_TR(0x60f075);
{u32 ea_=u32(r4(R+16)+u32(2296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f07c:{NFSU2_TR(0x60f07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f083:{NFSU2_TR(0x60f083);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f085:{NFSU2_TR(0x60f085);
u8 U[8];
w4(U+0,u32(u32(u32(0x498ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f08c:{NFSU2_TR(0x60f08c);
{u32 ea_=u32(r4(R+16)+u32(1168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f093:{NFSU2_TR(0x60f093);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f097:{NFSU2_TR(0x60f097);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f09b:{NFSU2_TR(0x60f09b);
u8 U[8];
w4(U+0,u32(u32(u32(0x384ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f0a2:{NFSU2_TR(0x60f0a2);
{u32 ea_=u32(r4(R+16)+u32(1168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f0a9:{NFSU2_TR(0x60f0a9);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f0ad:{NFSU2_TR(0x60f0ad);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f0b1:{NFSU2_TR(0x60f0b1);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f0b5:{NFSU2_TR(0x60f0b5);
{u32 ea_=u32(r4(R+16)+u32(1176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f0bc:{NFSU2_TR(0x60f0bc);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60f0be:{NFSU2_TR(0x60f0be);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f0c2:{NFSU2_TR(0x60f0c2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60f0c4:{NFSU2_TR(0x60f0c4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f0c8:{NFSU2_TR(0x60f0c8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f0cc:{NFSU2_TR(0x60f0cc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f0ce:{NFSU2_TR(0x60f0ce);
{u32 ea_=u32(r4(R+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f0d5:{NFSU2_TR(0x60f0d5);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f0dc:{NFSU2_TR(0x60f0dc);
{u32 ea_=u32(r4(R+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f0e3:{NFSU2_TR(0x60f0e3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f0e7:{NFSU2_TR(0x60f0e7);
{u32 ea_=u32(r4(R+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f0ee:{NFSU2_TR(0x60f0ee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f0f2:{NFSU2_TR(0x60f0f2);
{u32 ea_=u32(r4(R+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f0f9:{NFSU2_TR(0x60f0f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f0fd:{NFSU2_TR(0x60f0fd);
{u32 ea_=u32(r4(R+16)+u32(2360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f104:{NFSU2_TR(0x60f104);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f106:{NFSU2_TR(0x60f106);
{u32 ea_=u32(r4(R+16)+u32(2384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f10d:{NFSU2_TR(0x60f10d);
{u32 ea_=u32(r4(R+16)+u32(2360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f114:{NFSU2_TR(0x60f114);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f11b:{NFSU2_TR(0x60f11b);
{u32 ea_=u32(r4(R+16)+u32(2384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f122:{NFSU2_TR(0x60f122);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f129:{NFSU2_TR(0x60f129);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f12b:{NFSU2_TR(0x60f12b);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f132:{NFSU2_TR(0x60f132);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f139:{NFSU2_TR(0x60f139);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f140:{NFSU2_TR(0x60f140);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f144:{NFSU2_TR(0x60f144);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f148:{NFSU2_TR(0x60f148);
u8 U[8];
w4(U+0,u32(u32(u32(0x388ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f14f:{NFSU2_TR(0x60f14f);
{u32 ea_=u32(r4(R+16)+u32(900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f156:{NFSU2_TR(0x60f156);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f15a:{NFSU2_TR(0x60f15a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f15e:{NFSU2_TR(0x60f15e);
u8 U[8];
w4(U+0,u32(u32(u32(0x9b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f165:{NFSU2_TR(0x60f165);
{u32 ea_=u32(r4(R+16)+u32(904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f16c:{NFSU2_TR(0x60f16c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f170:{NFSU2_TR(0x60f170);
{u32 ea_=u32(r4(R+16)+u32(2424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f177:{NFSU2_TR(0x60f177);
u8 U[8];
w4(U+0,u32(u32(u32(0x978ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f17e:{NFSU2_TR(0x60f17e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f180:{NFSU2_TR(0x60f180);
u8 U[8];
w4(U+0,u32(u32(u32(0x2b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f187:{NFSU2_TR(0x60f187);
{u32 ea_=u32(r4(R+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f18e:{NFSU2_TR(0x60f18e);
__builtin_memmove((R+0),(R+8),4);
}
B60f190:{NFSU2_TR(0x60f190);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f197:{NFSU2_TR(0x60f197);
{u32 ea_=u32(r4(R+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f19e:{NFSU2_TR(0x60f19e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f1a5:{NFSU2_TR(0x60f1a5);
{u32 ea_=u32(r4(R+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f1ac:{NFSU2_TR(0x60f1ac);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f1b0:{NFSU2_TR(0x60f1b0);
{u32 ea_=u32(r4(R+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f1b7:{NFSU2_TR(0x60f1b7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f1bb:{NFSU2_TR(0x60f1bb);
{u32 ea_=u32(r4(R+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f1c2:{NFSU2_TR(0x60f1c2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f1c6:{NFSU2_TR(0x60f1c6);
{u32 ea_=u32(r4(R+16)+u32(2456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f1cd:{NFSU2_TR(0x60f1cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x998ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f1d4:{NFSU2_TR(0x60f1d4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f1d6:{NFSU2_TR(0x60f1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f1dd:{NFSU2_TR(0x60f1dd);
{u32 ea_=u32(r4(R+16)+u32(1232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f1e4:{NFSU2_TR(0x60f1e4);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f1eb:{NFSU2_TR(0x60f1eb);
{u32 ea_=u32(r4(R+16)+u32(1232u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f1f2:{NFSU2_TR(0x60f1f2);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f1f9:{NFSU2_TR(0x60f1f9);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f200:{NFSU2_TR(0x60f200);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f207:{NFSU2_TR(0x60f207);
{u32 ea_=u32(r4(R+16)+u32(1240u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f20e:{NFSU2_TR(0x60f20e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f212:{NFSU2_TR(0x60f212);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f216:{NFSU2_TR(0x60f216);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f218:{NFSU2_TR(0x60f218);
{u32 ea_=u32(r4(R+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f21f:{NFSU2_TR(0x60f21f);
{u32 ea_=u32(r4(R+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f226:{NFSU2_TR(0x60f226);
{u32 ea_=u32(r4(R+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f22d:{NFSU2_TR(0x60f22d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f231:{NFSU2_TR(0x60f231);
{u32 ea_=u32(r4(R+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f238:{NFSU2_TR(0x60f238);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f23c:{NFSU2_TR(0x60f23c);
{u32 ea_=u32(r4(R+16)+u32(728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f243:{NFSU2_TR(0x60f243);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f247:{NFSU2_TR(0x60f247);
{u32 ea_=u32(r4(R+16)+u32(2520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f24e:{NFSU2_TR(0x60f24e);
u8 U[8];
w4(U+0,u32(u32(u32(0x9d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f255:{NFSU2_TR(0x60f255);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f257:{NFSU2_TR(0x60f257);
u8 U[8];
w4(U+0,u32(u32(u32(0x4f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f25e:{NFSU2_TR(0x60f25e);
{u32 ea_=u32(r4(R+16)+u32(1264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f265:{NFSU2_TR(0x60f265);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f26c:{NFSU2_TR(0x60f26c);
{u32 ea_=u32(r4(R+16)+u32(1264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f273:{NFSU2_TR(0x60f273);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f27a:{NFSU2_TR(0x60f27a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f281:{NFSU2_TR(0x60f281);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f288:{NFSU2_TR(0x60f288);
{u32 ea_=u32(r4(R+16)+u32(1272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f28f:{NFSU2_TR(0x60f28f);
{u32 ea_=u32(r4(R+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f296:{NFSU2_TR(0x60f296);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f29a:{NFSU2_TR(0x60f29a);
{u32 ea_=u32(r4(R+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f2a1:{NFSU2_TR(0x60f2a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f2a5:{NFSU2_TR(0x60f2a5);
{u32 ea_=u32(r4(R+16)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f2ac:{NFSU2_TR(0x60f2ac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f2b0:{NFSU2_TR(0x60f2b0);
{u32 ea_=u32(r4(R+16)+u32(2552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f2b7:{NFSU2_TR(0x60f2b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x9f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f2be:{NFSU2_TR(0x60f2be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f2c0:{NFSU2_TR(0x60f2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x518ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f2c7:{NFSU2_TR(0x60f2c7);
{u32 ea_=u32(r4(R+16)+u32(1296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f2ce:{NFSU2_TR(0x60f2ce);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f2d5:{NFSU2_TR(0x60f2d5);
{u32 ea_=u32(r4(R+16)+u32(1296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f2dc:{NFSU2_TR(0x60f2dc);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f2e3:{NFSU2_TR(0x60f2e3);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f2ea:{NFSU2_TR(0x60f2ea);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f2f1:{NFSU2_TR(0x60f2f1);
{u32 ea_=u32(r4(R+16)+u32(1304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f2f8:{NFSU2_TR(0x60f2f8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60f2fa:{NFSU2_TR(0x60f2fa);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f301:{NFSU2_TR(0x60f301);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60f303:{NFSU2_TR(0x60f303);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f307:{NFSU2_TR(0x60f307);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f30b:{NFSU2_TR(0x60f30b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f30d:{NFSU2_TR(0x60f30d);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f314:{NFSU2_TR(0x60f314);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f31b:{NFSU2_TR(0x60f31b);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f322:{NFSU2_TR(0x60f322);
__builtin_memmove((R+4),(R+0),4);
}
B60f324:{NFSU2_TR(0x60f324);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f328:{NFSU2_TR(0x60f328);
u8 U[8];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f32f:{NFSU2_TR(0x60f32f);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f336:{NFSU2_TR(0x60f336);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f33a:{NFSU2_TR(0x60f33a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f33e:{NFSU2_TR(0x60f33e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f342:{NFSU2_TR(0x60f342);
{u32 ea_=u32(r4(R+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f349:{NFSU2_TR(0x60f349);
u8 U[8];
w4(U+0,u32(u32(u32(0x534ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f350:{NFSU2_TR(0x60f350);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f354:{NFSU2_TR(0x60f354);
u8 U[8];
w4(U+0,u32(u32(u32(0x538ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f35b:{NFSU2_TR(0x60f35b);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f362:{NFSU2_TR(0x60f362);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f364:{NFSU2_TR(0x60f364);
{u32 ea_=u32(r4(R+16)+u32(2620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f36b:{NFSU2_TR(0x60f36b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f36d:{NFSU2_TR(0x60f36d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f36f:{NFSU2_TR(0x60f36f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f370:{NFSU2_TR(0x60f370);
{u32 ea_=u32(r4(R+16)+u32(2652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f377:{NFSU2_TR(0x60f377);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f382:{NFSU2_TR(0x60f382);
{u32 ea_=u32(r4(R+16)+u32(2628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f389:{NFSU2_TR(0x60f389);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f394:{NFSU2_TR(0x60f394);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f39b:{NFSU2_TR(0x60f39b);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f3a6:{NFSU2_TR(0x60f3a6);
{u32 ea_=u32(r4(R+16)+u32(2652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f3ad:{NFSU2_TR(0x60f3ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f3b8:{NFSU2_TR(0x60f3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f3c3:{NFSU2_TR(0x60f3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f3ce:{NFSU2_TR(0x60f3ce);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f3d5:{NFSU2_TR(0x60f3d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f3e0:{NFSU2_TR(0x60f3e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f3e2:{NFSU2_TR(0x60f3e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60f3ed:{NFSU2_TR(0x60f3ed);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f3f4:{NFSU2_TR(0x60f3f4);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f3fb:{NFSU2_TR(0x60f3fb);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f402:{NFSU2_TR(0x60f402);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f406:{NFSU2_TR(0x60f406);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f40a:{NFSU2_TR(0x60f40a);
{u32 ea_=u32(r4(R+16)+u32(1344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f411:{NFSU2_TR(0x60f411);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f415:{NFSU2_TR(0x60f415);
{u32 ea_=u32(r4(R+16)+u32(1348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f41c:{NFSU2_TR(0x60f41c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f420:{NFSU2_TR(0x60f420);
{u32 ea_=u32(r4(R+16)+u32(2692u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f427:{NFSU2_TR(0x60f427);
u8 U[8];
w4(U+0,u32(u32(u32(0xa84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f42e:{NFSU2_TR(0x60f42e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f430:{NFSU2_TR(0x60f430);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f437:{NFSU2_TR(0x60f437);
{u32 ea_=u32(r4(R+16)+u32(828u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f43e:{NFSU2_TR(0x60f43e);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f445:{NFSU2_TR(0x60f445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f446:{NFSU2_TR(0x60f446);
{u32 ea_=u32(r4(R+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f44d:{NFSU2_TR(0x60f44d);
__builtin_memmove((R+4),(R+12),4);
}
B60f44f:{NFSU2_TR(0x60f44f);
{u32 ea_=u32(r4(R+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f456:{NFSU2_TR(0x60f456);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f45a:{NFSU2_TR(0x60f45a);
{u32 ea_=u32(r4(R+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f461:{NFSU2_TR(0x60f461);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f465:{NFSU2_TR(0x60f465);
{u32 ea_=u32(r4(R+16)+u32(840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f46c:{NFSU2_TR(0x60f46c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f470:{NFSU2_TR(0x60f470);
{u32 ea_=u32(r4(R+16)+u32(2728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f477:{NFSU2_TR(0x60f477);
u8 U[8];
w4(U+0,u32(u32(u32(0xaa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f47e:{NFSU2_TR(0x60f47e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60f480:{NFSU2_TR(0x60f480);
u8 U[8];
w4(U+0,u32(u32(u32(0x568ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f487:{NFSU2_TR(0x60f487);
{u32 ea_=u32(r4(R+16)+u32(1376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f48e:{NFSU2_TR(0x60f48e);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60f492:{NFSU2_TR(0x60f492);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f499:{NFSU2_TR(0x60f499);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f49a:{NFSU2_TR(0x60f49a);
{u32 ea_=u32(r4(R+16)+u32(1380u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f4a1:{NFSU2_TR(0x60f4a1);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f4a8:{NFSU2_TR(0x60f4a8);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f4af:{NFSU2_TR(0x60f4af);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f4b6:{NFSU2_TR(0x60f4b6);
{u32 ea_=u32(r4(R+16)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f4bd:{NFSU2_TR(0x60f4bd);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60f4bf:{NFSU2_TR(0x60f4bf);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f4c6:{NFSU2_TR(0x60f4c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60f4c8:{NFSU2_TR(0x60f4c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f4cdull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B60f4cd:L60f4cd:{c.instructions+=4;NFSU2_TR(0x60f4cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f4d4:{NFSU2_TR(0x60f4d4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60f4d5:{NFSU2_TR(0x60f4d5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B60f4d7:{NFSU2_TR(0x60f4d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x60da73u,60d);}
}
B60f4dd:L60f4dd:{c.instructions+=6;NFSU2_TR(0x60f4dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f4de:{NFSU2_TR(0x60f4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60f4df:{NFSU2_TR(0x60f4df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60f4e0:{NFSU2_TR(0x60f4e0);
__builtin_memmove((R+16),(R+20),4);
}
B60f4e2:{NFSU2_TR(0x60f4e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60f4e3:{NFSU2_TR(0x60f4e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f4f0:L60f4f0:{c.instructions+=5;NFSU2_TR(0x60f4f0);
__builtin_memmove((R+4),gp(0x8a30f0),4);
}
B60f4f6:{NFSU2_TR(0x60f4f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60f4f8:{NFSU2_TR(0x60f4f8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8a30f0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8a30f0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8a30f0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60f4fe:{NFSU2_TR(0x60f4fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B60f501:{NFSU2_TR(0x60f501);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f510:L60f510:{c.instructions+=3;NFSU2_TR(0x60f510);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f514:{NFSU2_TR(0x60f514);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60f516:{NFSU2_TR(0x60f516);
if(r1(R+518)){{goto L60f529;}}
}
B60f518:L60f518:{c.instructions+=3;NFSU2_TR(0x60f518);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f51e:{NFSU2_TR(0x60f51e);
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
B60f520:{NFSU2_TR(0x60f520);
if(r1(R+518)){{goto L60f529;}}
}
B60f522:L60f522:{c.instructions+=2;NFSU2_TR(0x60f522);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f528:{NFSU2_TR(0x60f528);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f529:L60f529:{c.instructions+=2;NFSU2_TR(0x60f529);
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
B60f52b:{NFSU2_TR(0x60f52b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f530:L60f530:{c.instructions+=3;NFSU2_TR(0x60f530);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f534:{NFSU2_TR(0x60f534);
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
B60f536:{NFSU2_TR(0x60f536);
if(r1(R+518)){{goto L60f54c;}}
}
B60f538:L60f538:{c.instructions+=3;NFSU2_TR(0x60f538);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f53e:{NFSU2_TR(0x60f53e);
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
B60f540:{NFSU2_TR(0x60f540);
if(r1(R+518)){{goto L60f54c;}}
}
B60f542:L60f542:{c.instructions+=2;NFSU2_TR(0x60f542);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f546:{NFSU2_TR(0x60f546);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x208cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f54c:L60f54c:{c.instructions+=1;NFSU2_TR(0x60f54c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f550:L60f550:{c.instructions+=7;NFSU2_TR(0x60f550);
__builtin_memmove((R+0),gp(0x802948),4);
}
B60f555:{NFSU2_TR(0x60f555);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f556:{NFSU2_TR(0x60f556);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f557:{NFSU2_TR(0x60f557);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60f559:{NFSU2_TR(0x60f559);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60f55b:{NFSU2_TR(0x60f55b);
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
B60f55d:{NFSU2_TR(0x60f55d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L60f670;}}
}
B60f563:L60f563:{c.instructions+=5;NFSU2_TR(0x60f563);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f564:{NFSU2_TR(0x60f564);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B60f568:{NFSU2_TR(0x60f568);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f569:{NFSU2_TR(0x60f569);
__builtin_memmove((R+4),(R+20),4);
}
B60f56b:{NFSU2_TR(0x60f56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f570ull));
TAIL_STATIC(0x4018b0u,401);
}
B60f570:L60f570:{c.instructions+=3;NFSU2_TR(0x60f570);
__builtin_memmove((R+4),(R+20),4);
}
B60f572:{NFSU2_TR(0x60f572);
__builtin_memmove((R+28),(R+0),4);
}
B60f574:{NFSU2_TR(0x60f574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f579ull));
TAIL_STATIC(0x401890u,401);
}
B60f579:L60f579:{c.instructions+=1;NFSU2_TR(0x60f579);
__builtin_memmove((R+16),(R+16),4);
}
B60f580:L60f580:{c.instructions+=6;NFSU2_TR(0x60f580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f586:{NFSU2_TR(0x60f586);
__builtin_memmove((R+4),(R+24),4);
}
B60f588:{NFSU2_TR(0x60f588);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B60f58b:{NFSU2_TR(0x60f58b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f58d:{NFSU2_TR(0x60f58d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1fbcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B60f594:{NFSU2_TR(0x60f594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60f5c0;}}
}
B60f596:L60f596:{c.instructions+=4;NFSU2_TR(0x60f596);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f59c:{NFSU2_TR(0x60f59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f59f:{NFSU2_TR(0x60f59f);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x93dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B60f5a5:{NFSU2_TR(0x60f5a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60f5aa;}}
}
B60f5a7:L60f5a7:{c.instructions+=1;NFSU2_TR(0x60f5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f5aa:L60f5aa:{c.instructions+=4;NFSU2_TR(0x60f5aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f5ac:{NFSU2_TR(0x60f5ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802924ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60f5b3:{NFSU2_TR(0x60f5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f5b6:{NFSU2_TR(0x60f5b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60f5cc;}}
}
B60f5b8:L60f5b8:{c.instructions+=2;NFSU2_TR(0x60f5b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f5be:{NFSU2_TR(0x60f5be);
{goto L60f5d2;}
}
B60f5c0:L60f5c0:{c.instructions+=3;NFSU2_TR(0x60f5c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80293cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60f5c7:{NFSU2_TR(0x60f5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f5ca:{NFSU2_TR(0x60f5ca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f5aau);}goto L60f5aa;}
}
B60f5cc:L60f5cc:{c.instructions+=1;NFSU2_TR(0x60f5cc);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f5d2:L60f5d2:{c.instructions+=4;NFSU2_TR(0x60f5d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f5d4:{NFSU2_TR(0x60f5d4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f5d6:{NFSU2_TR(0x60f5d6);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f5d9:{NFSU2_TR(0x60f5d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60f5e3;}}
}
B60f5db:L60f5db:{c.instructions+=2;NFSU2_TR(0x60f5db);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f5e1:{NFSU2_TR(0x60f5e1);
{goto L60f5e9;}
}
B60f5e3:L60f5e3:{c.instructions+=1;NFSU2_TR(0x60f5e3);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f5e9:L60f5e9:{c.instructions+=4;NFSU2_TR(0x60f5e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f5eb:{NFSU2_TR(0x60f5eb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f5ee:{NFSU2_TR(0x60f5ee);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f5f1:{NFSU2_TR(0x60f5f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60f5fb;}}
}
B60f5f3:L60f5f3:{c.instructions+=2;NFSU2_TR(0x60f5f3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f5f9:{NFSU2_TR(0x60f5f9);
{goto L60f601;}
}
B60f5fb:L60f5fb:{c.instructions+=1;NFSU2_TR(0x60f5fb);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f601:L60f601:{c.instructions+=26;NFSU2_TR(0x60f601);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f604:{NFSU2_TR(0x60f604);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B60f605:{NFSU2_TR(0x60f605);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f608:{NFSU2_TR(0x60f608);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f60b:{NFSU2_TR(0x60f60b);
{u32 ea_=u32((r4(R+24)*4u)+u32(8399152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f612:{NFSU2_TR(0x60f612);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f614:{NFSU2_TR(0x60f614);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f617:{NFSU2_TR(0x60f617);
{u32 ea_=u32((r4(R+24)*4u)+u32(8399152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f61e:{NFSU2_TR(0x60f61e);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f621:{NFSU2_TR(0x60f621);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f624:{NFSU2_TR(0x60f624);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f627:{NFSU2_TR(0x60f627);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f62a:{NFSU2_TR(0x60f62a);
{u32 ea_=u32((r4(R+24)*4u)+u32(8399152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60f631:{NFSU2_TR(0x60f631);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60f634:{NFSU2_TR(0x60f634);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f637:{NFSU2_TR(0x60f637);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a1c68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60f63e:{NFSU2_TR(0x60f63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f641:{NFSU2_TR(0x60f641);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x802942ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B60f649:{NFSU2_TR(0x60f649);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f64d:{NFSU2_TR(0x60f64d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60f651:{NFSU2_TR(0x60f651);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f654:{NFSU2_TR(0x60f654);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802928ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60f65b:{NFSU2_TR(0x60f65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f65e:{NFSU2_TR(0x60f65e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B60f662:{NFSU2_TR(0x60f662);
u8 U[14];
__builtin_memmove((U+6),gp(0x802948),4);
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
B60f668:{NFSU2_TR(0x60f668);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f580u);}goto L60f580;}}
}
B60f66e:L60f66e:{c.instructions+=2;NFSU2_TR(0x60f66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f66f:{NFSU2_TR(0x60f66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60f670:L60f670:{c.instructions+=3;NFSU2_TR(0x60f670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60f671:{NFSU2_TR(0x60f671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60f672:{NFSU2_TR(0x60f672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f680:L60f680:{c.instructions+=2;NFSU2_TR(0x60f680);
s4(0x8a1c78,u32(0x1ull));
}
B60f68a:{NFSU2_TR(0x60f68a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f690:L60f690:{c.instructions+=5;NFSU2_TR(0x60f690);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f691:{NFSU2_TR(0x60f691);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60f695:{NFSU2_TR(0x60f695);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f698:{NFSU2_TR(0x60f698);
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
B60f69a:{NFSU2_TR(0x60f69a);
if(r1(R+518)){{goto L60f6a3;}}
}
B60f69c:L60f69c:{c.instructions+=3;NFSU2_TR(0x60f69c);
w4(R+0,u32(0x1ull));
}
B60f6a1:{NFSU2_TR(0x60f6a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f6a2:{NFSU2_TR(0x60f6a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f6a3:L60f6a3:{c.instructions+=4;NFSU2_TR(0x60f6a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f6a4:{NFSU2_TR(0x60f6a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60f6a8:{NFSU2_TR(0x60f6a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f6a9:{NFSU2_TR(0x60f6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f6aeull));
TAIL_STATIC(0x4908e0u,490);
}
B60f6ae:L60f6ae:{c.instructions+=3;NFSU2_TR(0x60f6ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60f6b1:{NFSU2_TR(0x60f6b1);
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
B60f6b3:{NFSU2_TR(0x60f6b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60f6b8;}}
}
B60f6b5:L60f6b5:{c.instructions+=3;NFSU2_TR(0x60f6b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60f6b6:{NFSU2_TR(0x60f6b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f6b7:{NFSU2_TR(0x60f6b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f6b8:L60f6b8:{c.instructions+=3;NFSU2_TR(0x60f6b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f6b9:{NFSU2_TR(0x60f6b9);
__builtin_memmove((R+4),(R+28),4);
}
B60f6bb:{NFSU2_TR(0x60f6bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f6c0ull));
TAIL_STATIC(0x493600u,493);
}
B60f6c0:L60f6c0:{c.instructions+=2;NFSU2_TR(0x60f6c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f6c1:{NFSU2_TR(0x60f6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f6c6ull));
TAIL_STATIC(0x5db3d0u,5db);
}
B60f6c6:L60f6c6:{c.instructions+=3;NFSU2_TR(0x60f6c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60f6c9:{NFSU2_TR(0x60f6c9);
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
B60f6cb:{NFSU2_TR(0x60f6cb);
if(r1(R+518)){{goto L60f6f1;}}
}
B60f6cd:L60f6cd:{c.instructions+=2;NFSU2_TR(0x60f6cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f6ce:{NFSU2_TR(0x60f6ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f6d3ull));
TAIL_STATIC(0x5db380u,5db);
}
B60f6d3:L60f6d3:{c.instructions+=4;NFSU2_TR(0x60f6d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60f6d6:{NFSU2_TR(0x60f6d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60f6d9:{NFSU2_TR(0x60f6d9);
w4(R+28,u32(0x3ull));
}
B60f6de:{NFSU2_TR(0x60f6de);
__builtin_memmove((R+28),(R+28),4);
}
B60f6e0:L60f6e0:{c.instructions+=3;NFSU2_TR(0x60f6e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60f6e2:{NFSU2_TR(0x60f6e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60f6e4:{NFSU2_TR(0x60f6e4);
if(r1(R+518)){{goto L60f6eb;}}
}
B60f6e6:L60f6e6:{c.instructions+=1;NFSU2_TR(0x60f6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f6ebull));
TAIL_STATIC(0x4903b0u,490);
}
B60f6eb:L60f6eb:{c.instructions+=3;NFSU2_TR(0x60f6eb);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B60f6ee:{NFSU2_TR(0x60f6ee);
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
B60f6ef:{NFSU2_TR(0x60f6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f6e0u);}goto L60f6e0;}}
}
B60f6f1:L60f6f1:{c.instructions+=4;NFSU2_TR(0x60f6f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60f6f2:{NFSU2_TR(0x60f6f2);
w4(R+0,u32(0x1ull));
}
B60f6f7:{NFSU2_TR(0x60f6f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f6f8:{NFSU2_TR(0x60f6f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f700:L60f700:{c.instructions+=2;NFSU2_TR(0x60f700);
s4(0x8a1c7c,u32(0x1ull));
}
B60f70a:{NFSU2_TR(0x60f70a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f710:L60f710:{c.instructions+=3;NFSU2_TR(0x60f710);
u8 U[4];
w4(U+0,u32(0xbe43edbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f715:{NFSU2_TR(0x60f715);
u8 U[4];
w4(U+0,u32(0x8a1dfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f71a:{NFSU2_TR(0x60f71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f71full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f690u);}goto L60f690;}
}
B60f71f:L60f71f:{c.instructions+=3;NFSU2_TR(0x60f71f);
u8 U[4];
w4(U+0,u32(0x72923c81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f724:{NFSU2_TR(0x60f724);
u8 U[4];
w4(U+0,u32(0x8a1f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f729:{NFSU2_TR(0x60f729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f72eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f690u);}goto L60f690;}
}
B60f72e:L60f72e:{c.instructions+=2;NFSU2_TR(0x60f72e);
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
B60f731:{NFSU2_TR(0x60f731);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f740:L60f740:{c.instructions+=3;NFSU2_TR(0x60f740);
__builtin_memmove((R+0),gp(0x8a07a8),4);
}
B60f745:{NFSU2_TR(0x60f745);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f746:{NFSU2_TR(0x60f746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f74bull));
TAIL_STATIC(0x490130u,490);
}
B60f74b:L60f74b:{c.instructions+=3;NFSU2_TR(0x60f74b);
__builtin_memmove((R+4),gp(0x8a07ac),4);
}
B60f751:{NFSU2_TR(0x60f751);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f752:{NFSU2_TR(0x60f752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f757ull));
TAIL_STATIC(0x490130u,490);
}
B60f757:L60f757:{c.instructions+=3;NFSU2_TR(0x60f757);
__builtin_memmove((R+8),gp(0x8a07b0),4);
}
B60f75d:{NFSU2_TR(0x60f75d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f75e:{NFSU2_TR(0x60f75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f763ull));
TAIL_STATIC(0x490130u,490);
}
B60f763:L60f763:{c.instructions+=3;NFSU2_TR(0x60f763);
__builtin_memmove((R+0),gp(0x8a07b4),4);
}
B60f768:{NFSU2_TR(0x60f768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f769:{NFSU2_TR(0x60f769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f76eull));
TAIL_STATIC(0x490130u,490);
}
B60f76e:L60f76e:{c.instructions+=3;NFSU2_TR(0x60f76e);
__builtin_memmove((R+4),gp(0x8a07b8),4);
}
B60f774:{NFSU2_TR(0x60f774);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f775:{NFSU2_TR(0x60f775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f77aull));
TAIL_STATIC(0x490130u,490);
}
B60f77a:L60f77a:{c.instructions+=3;NFSU2_TR(0x60f77a);
__builtin_memmove((R+8),gp(0x8a07bc),4);
}
B60f780:{NFSU2_TR(0x60f780);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f781:{NFSU2_TR(0x60f781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f786ull));
TAIL_STATIC(0x490130u,490);
}
B60f786:L60f786:{c.instructions+=3;NFSU2_TR(0x60f786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B60f789:{NFSU2_TR(0x60f789);
w4(R+4,u32(0x8a1dfcull));
}
B60f78e:{NFSU2_TR(0x60f78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f793ull));
TAIL_STATIC(0x4903b0u,490);
}
B60f793:L60f793:{c.instructions+=2;NFSU2_TR(0x60f793);
w4(R+4,u32(0x8a1f10ull));
}
B60f798:{NFSU2_TR(0x60f798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f79dull));
TAIL_STATIC(0x4903b0u,490);
}
B60f79d:L60f79d:{c.instructions+=27;NFSU2_TR(0x60f79d);
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
B60f79f:{NFSU2_TR(0x60f79f);
s4(0x8a1da0,u32(0x3f800000ull));
}
B60f7a9:{NFSU2_TR(0x60f7a9);
s4(0x8a1da4,u32(0x0ull));
}
B60f7b3:{NFSU2_TR(0x60f7b3);
s4(0x8a1da8,u32(0x0ull));
}
B60f7bd:{NFSU2_TR(0x60f7bd);
s4(0x8a1dac,u32(0x0ull));
}
B60f7c7:{NFSU2_TR(0x60f7c7);
s4(0x8a1db0,u32(0x0ull));
}
B60f7d1:{NFSU2_TR(0x60f7d1);
s4(0x8a1db4,u32(0x3f800000ull));
}
B60f7db:{NFSU2_TR(0x60f7db);
s4(0x8a1db8,u32(0x0ull));
}
B60f7e5:{NFSU2_TR(0x60f7e5);
s4(0x8a1dbc,u32(0x0ull));
}
B60f7ef:{NFSU2_TR(0x60f7ef);
s4(0x8a1dc0,u32(0x0ull));
}
B60f7f9:{NFSU2_TR(0x60f7f9);
s4(0x8a1dc4,u32(0x0ull));
}
B60f803:{NFSU2_TR(0x60f803);
s4(0x8a1dc8,u32(0x3f800000ull));
}
B60f80d:{NFSU2_TR(0x60f80d);
s4(0x8a1dcc,u32(0x0ull));
}
B60f817:{NFSU2_TR(0x60f817);
s4(0x8a1dd0,u32(0x0ull));
}
B60f821:{NFSU2_TR(0x60f821);
s4(0x8a1dd4,u32(0x0ull));
}
B60f82b:{NFSU2_TR(0x60f82b);
s4(0x8a1dd8,u32(0x0ull));
}
B60f835:{NFSU2_TR(0x60f835);
s4(0x8a1ddc,u32(0x3f800000ull));
}
B60f83f:{NFSU2_TR(0x60f83f);
s4(0x8a1c7c,u32(0x1ull));
}
B60f849:{NFSU2_TR(0x60f849);
__builtin_memmove(gp(0x8a1c80),(R+0),4);
}
B60f84e:{NFSU2_TR(0x60f84e);
__builtin_memmove(gp(0x8a1c8c),(R+0),4);
}
B60f853:{NFSU2_TR(0x60f853);
__builtin_memmove(gp(0x8a1c90),(R+0),4);
}
B60f858:{NFSU2_TR(0x60f858);
__builtin_memmove(gp(0x8a1c98),(R+0),4);
}
B60f85d:{NFSU2_TR(0x60f85d);
__builtin_memmove(gp(0x8a1c94),(R+0),4);
}
B60f862:{NFSU2_TR(0x60f862);
__builtin_memmove(gp(0x8a1c9c),(R+0),4);
}
B60f867:{NFSU2_TR(0x60f867);
__builtin_memmove(gp(0x8a1c88),(R+0),4);
}
B60f86c:{NFSU2_TR(0x60f86c);
__builtin_memmove(gp(0x8a1c78),(R+0),4);
}
B60f871:{NFSU2_TR(0x60f871);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f880:L60f880:{c.instructions+=11;NFSU2_TR(0x60f880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f881:{NFSU2_TR(0x60f881);
__builtin_memmove((R+20),(R+16),4);
}
B60f883:{NFSU2_TR(0x60f883);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60f886:{NFSU2_TR(0x60f886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B60f889:{NFSU2_TR(0x60f889);
__builtin_memmove((R+0),gp(0x8a1c98),4);
}
B60f88e:{NFSU2_TR(0x60f88e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f88f:{NFSU2_TR(0x60f88f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f890:{NFSU2_TR(0x60f890);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60f892:{NFSU2_TR(0x60f892);
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
B60f894:{NFSU2_TR(0x60f894);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f895:{NFSU2_TR(0x60f895);
if(r1(R+518)){{goto L60f981;}}
}
B60f89b:L60f89b:{c.instructions+=1;NFSU2_TR(0x60f89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f8a0ull));
TAIL_STATIC(0x5bf1b0u,5bf);
}
B60f8a0:L60f8a0:{c.instructions+=5;NFSU2_TR(0x60f8a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60f8a2:{NFSU2_TR(0x60f8a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f8a3:{NFSU2_TR(0x60f8a3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f8a5:{NFSU2_TR(0x60f8a5);
u8 U[4];
w4(U+0,u32(0x8a2cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60f8aa:{NFSU2_TR(0x60f8aa);
if(r1(R+518)){{goto L60f8f2;}}
}
B60f8ac:L60f8ac:{c.instructions+=13;NFSU2_TR(0x60f8ac);
__builtin_memmove((R+0),gp(0x8a1c94),4);
}
B60f8b1:{NFSU2_TR(0x60f8b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60f8b8:{NFSU2_TR(0x60f8b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60f8bf:{NFSU2_TR(0x60f8bf);
__builtin_memmove((R+0),gp(0x8a07a8),4);
}
B60f8c4:{NFSU2_TR(0x60f8c4);
__builtin_memmove(gp(0x8a2cb0),(R+4),4);
}
B60f8ca:{NFSU2_TR(0x60f8ca);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60f8cd:{NFSU2_TR(0x60f8cd);
__builtin_memmove(gp(0x8a2cb4),(R+4),4);
}
B60f8d3:{NFSU2_TR(0x60f8d3);
__builtin_memmove(gp(0x8a2cc4),(R+4),4);
}
B60f8d9:{NFSU2_TR(0x60f8d9);
__builtin_memmove((R+4),gp(0x8a07ac),4);
}
B60f8df:{NFSU2_TR(0x60f8df);
__builtin_memmove(gp(0x8a2cc0),(R+8),4);
}
B60f8e5:{NFSU2_TR(0x60f8e5);
__builtin_memmove(gp(0x8a2cac),(R+0),4);
}
B60f8ea:{NFSU2_TR(0x60f8ea);
__builtin_memmove(gp(0x8a2cbc),(R+4),4);
}
B60f8f0:{NFSU2_TR(0x60f8f0);
{goto L60f92f;}
}
B60f8f2:L60f8f2:{c.instructions+=11;NFSU2_TR(0x60f8f2);
__builtin_memmove((R+8),gp(0x8a07b0),4);
}
B60f8f8:{NFSU2_TR(0x60f8f8);
__builtin_memmove((R+0),gp(0x8a07b4),4);
}
B60f8fd:{NFSU2_TR(0x60f8fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60f900:{NFSU2_TR(0x60f900);
__builtin_memmove(gp(0x8a2cb0),(R+8),4);
}
B60f906:{NFSU2_TR(0x60f906);
__builtin_memmove((R+8),gp(0x8a07ac),4);
}
B60f90c:{NFSU2_TR(0x60f90c);
__builtin_memmove(gp(0x8a2cb4),(R+4),4);
}
B60f912:{NFSU2_TR(0x60f912);
__builtin_memmove(gp(0x8a2cc4),(R+4),4);
}
B60f918:{NFSU2_TR(0x60f918);
__builtin_memmove((R+4),gp(0x8a07a8),4);
}
B60f91e:{NFSU2_TR(0x60f91e);
__builtin_memmove(gp(0x8a2cc0),(R+0),4);
}
B60f923:{NFSU2_TR(0x60f923);
__builtin_memmove(gp(0x8a2cac),(R+4),4);
}
B60f929:{NFSU2_TR(0x60f929);
__builtin_memmove(gp(0x8a2cbc),(R+8),4);
}
B60f92f:L60f92f:{c.instructions+=2;NFSU2_TR(0x60f92f);
w4(R+4,u32(0x8a1dfcull));
}
B60f934:{NFSU2_TR(0x60f934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60f939ull));
TAIL_STATIC(0x488e20u,488);
}
B60f939:L60f939:{c.instructions+=14;NFSU2_TR(0x60f939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60f93c:{NFSU2_TR(0x60f93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60f93f:{NFSU2_TR(0x60f93f);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f942:{NFSU2_TR(0x60f942);
__builtin_memmove((R+12),gp(0x82da60),4);
}
B60f948:{NFSU2_TR(0x60f948);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f94b:{NFSU2_TR(0x60f94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60f94e:{NFSU2_TR(0x60f94e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B60f951:{NFSU2_TR(0x60f951);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f955:{NFSU2_TR(0x60f955);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f958:{NFSU2_TR(0x60f958);
__builtin_memmove((R+0),gp(0x82da5c),4);
}
B60f95d:{NFSU2_TR(0x60f95d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f960:{NFSU2_TR(0x60f960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B60f962:{NFSU2_TR(0x60f962);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f966:{NFSU2_TR(0x60f966);
if(r1(R+512)){{goto L60f988;}}
}
B60f968:L60f968:{c.instructions+=4;NFSU2_TR(0x60f968);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B60f96d:{NFSU2_TR(0x60f96d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60f970:{NFSU2_TR(0x60f970);
s4(0x82da6c,u32(0x1ull));
}
B60f97a:{NFSU2_TR(0x60f97a);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B60f97f:L60f97f:{c.instructions+=1;NFSU2_TR(0x60f97f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60f981:L60f981:{c.instructions+=6;NFSU2_TR(0x60f981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60f982:{NFSU2_TR(0x60f982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60f983:{NFSU2_TR(0x60f983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60f984:{NFSU2_TR(0x60f984);
__builtin_memmove((R+16),(R+20),4);
}
B60f986:{NFSU2_TR(0x60f986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60f987:{NFSU2_TR(0x60f987);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60f988:L60f988:{c.instructions+=3;NFSU2_TR(0x60f988);
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
B60f98a:{NFSU2_TR(0x60f98a);
__builtin_memmove(gp(0x82da5c),(R+28),4);
}
B60f990:{NFSU2_TR(0x60f990);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f97fu);}goto L60f97f;}}
}
B60f992:L60f992:{c.instructions+=21;NFSU2_TR(0x60f992);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60f995:{NFSU2_TR(0x60f995);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f998:{NFSU2_TR(0x60f998);
w4(R+28,u32(0x3f800000ull));
}
B60f99d:{NFSU2_TR(0x60f99d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60f99f:{NFSU2_TR(0x60f99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9a2:{NFSU2_TR(0x60f9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9a5:{NFSU2_TR(0x60f9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9a8:{NFSU2_TR(0x60f9a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60f9ac:{NFSU2_TR(0x60f9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9af:{NFSU2_TR(0x60f9af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60f9b3:{NFSU2_TR(0x60f9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9b6:{NFSU2_TR(0x60f9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9b9:{NFSU2_TR(0x60f9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9bc:{NFSU2_TR(0x60f9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9bf:{NFSU2_TR(0x60f9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9c2:{NFSU2_TR(0x60f9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9c5:{NFSU2_TR(0x60f9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9c8:{NFSU2_TR(0x60f9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9cb:{NFSU2_TR(0x60f9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9ce:{NFSU2_TR(0x60f9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60f9d1:{NFSU2_TR(0x60f9d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60f9e0;}}
}
B60f9d3:L60f9d3:{c.instructions+=2;NFSU2_TR(0x60f9d3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f9d6:{NFSU2_TR(0x60f9d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60f9e0;}}
}
B60f9d8:L60f9d8:{c.instructions+=2;NFSU2_TR(0x60f9d8);
{u32 ea_=u32(u32(8021864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f9de:{NFSU2_TR(0x60f9de);
{goto L60f9e6;}
}
B60f9e0:L60f9e0:{c.instructions+=1;NFSU2_TR(0x60f9e0);
{u32 ea_=u32(u32(8021868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60f9e6:L60f9e6:{c.instructions+=5;NFSU2_TR(0x60f9e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60f9e9:{NFSU2_TR(0x60f9e9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60f9ec:{NFSU2_TR(0x60f9ec);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60f9ee:{NFSU2_TR(0x60f9ee);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60f9f1:{NFSU2_TR(0x60f9f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60f9f8;}}
}
B60f9f3:L60f9f3:{c.instructions+=2;NFSU2_TR(0x60f9f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f9f6:{NFSU2_TR(0x60f9f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60fa00;}}
}
B60f9f8:L60f9f8:{c.instructions+=2;NFSU2_TR(0x60f9f8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1c84),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60f9fe:{NFSU2_TR(0x60f9fe);
if(r1(R+518)){{goto L60fa21;}}
}
B60fa00:L60fa00:{c.instructions+=2;NFSU2_TR(0x60fa00);
u8 U[14];
__builtin_memmove((U+6),gp(0x80294c),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fa06:{NFSU2_TR(0x60fa06);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f981u);}goto L60f981;}}
}
B60fa0c:L60fa0c:{c.instructions+=6;NFSU2_TR(0x60fa0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa0d:{NFSU2_TR(0x60fa0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa0e:{NFSU2_TR(0x60fa0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa0f:{NFSU2_TR(0x60fa0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa10:{NFSU2_TR(0x60fa10);
u8 U[4];
w4(U+0,u32(0x8a1dfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa15:{NFSU2_TR(0x60fa15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fa1aull));
TAIL_STATIC(0x5c5930u,5c5);
}
B60fa1a:L60fa1a:{c.instructions+=6;NFSU2_TR(0x60fa1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fa1b:{NFSU2_TR(0x60fa1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fa1c:{NFSU2_TR(0x60fa1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60fa1d:{NFSU2_TR(0x60fa1d);
__builtin_memmove((R+16),(R+20),4);
}
B60fa1f:{NFSU2_TR(0x60fa1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60fa20:{NFSU2_TR(0x60fa20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fa21:L60fa21:{c.instructions+=2;NFSU2_TR(0x60fa21);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fa24:{NFSU2_TR(0x60fa24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f981u);}goto L60f981;}}
}
B60fa2a:L60fa2a:{c.instructions+=2;NFSU2_TR(0x60fa2a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fa2d:{NFSU2_TR(0x60fa2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f981u);}goto L60f981;}}
}
B60fa33:L60fa33:{c.instructions+=2;NFSU2_TR(0x60fa33);
u8 U[14];
__builtin_memmove((U+6),gp(0x802950),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fa39:{NFSU2_TR(0x60fa39);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f981u);}goto L60f981;}}
}
B60fa3f:L60fa3f:{c.instructions+=15;NFSU2_TR(0x60fa3f);
{u32 ea_=u32(u32(8021868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fa45:{NFSU2_TR(0x60fa45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa46:{NFSU2_TR(0x60fa46);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60fa48:{NFSU2_TR(0x60fa48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa49:{NFSU2_TR(0x60fa49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa4a:{NFSU2_TR(0x60fa4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa4b:{NFSU2_TR(0x60fa4b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60fa4d:{NFSU2_TR(0x60fa4d);
u8 U[4];
w4(U+0,u32(0x8a1f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fa52:{NFSU2_TR(0x60fa52);
{u32 ea_=u32(u32(8021868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fa58:{NFSU2_TR(0x60fa58);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60fa5b:{NFSU2_TR(0x60fa5b);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60fa5e:{NFSU2_TR(0x60fa5e);
{u32 ea_=u32(u32(8021868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fa64:{NFSU2_TR(0x60fa64);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60fa67:{NFSU2_TR(0x60fa67);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60fa6a:{NFSU2_TR(0x60fa6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fa6full));
TAIL_STATIC(0x5c5930u,5c5);
}
B60fa6f:L60fa6f:{c.instructions+=6;NFSU2_TR(0x60fa6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fa70:{NFSU2_TR(0x60fa70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fa71:{NFSU2_TR(0x60fa71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60fa72:{NFSU2_TR(0x60fa72);
__builtin_memmove((R+16),(R+20),4);
}
B60fa74:{NFSU2_TR(0x60fa74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60fa75:{NFSU2_TR(0x60fa75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fa80:L60fa80:{c.instructions+=4;NFSU2_TR(0x60fa80);
__builtin_memmove((R+0),gp(0x8a1c90),4);
}
B60fa85:{NFSU2_TR(0x60fa85);
{u32 ea_=u32(u32(9051272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fa8b:{NFSU2_TR(0x60fa8b);
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
B60fa8d:{NFSU2_TR(0x60fa8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fa95;}}
}
B60fa8f:L60fa8f:{c.instructions+=1;NFSU2_TR(0x60fa8f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60fa95:L60fa95:{c.instructions+=1;NFSU2_TR(0x60fa95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60faa0:L60faa0:{c.instructions+=2;NFSU2_TR(0x60faa0);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60faa7:{NFSU2_TR(0x60faa7);
if(r1(R+518)){{goto L60faaf;}}
}
B60faa9:L60faa9:{c.instructions+=2;NFSU2_TR(0x60faa9);
w4(R+0,u32(0x80ull));
}
B60faae:{NFSU2_TR(0x60faae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60faaf:L60faaf:{c.instructions+=6;NFSU2_TR(0x60faaf);
__builtin_memmove((R+0),gp(0x8a1c78),4);
}
B60fab4:{NFSU2_TR(0x60fab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fab5:{NFSU2_TR(0x60fab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fab6:{NFSU2_TR(0x60fab6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60fab8:{NFSU2_TR(0x60fab8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B60faba:{NFSU2_TR(0x60faba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fac4;}}
}
B60fabc:L60fabc:{c.instructions+=4;NFSU2_TR(0x60fabc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fabd:{NFSU2_TR(0x60fabd);
w4(R+0,u32(0x80ull));
}
B60fac2:{NFSU2_TR(0x60fac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fac3:{NFSU2_TR(0x60fac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fac4:L60fac4:{c.instructions+=2;NFSU2_TR(0x60fac4);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60faca:{NFSU2_TR(0x60faca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60facfull));
TAIL_STATIC(0x75bed4u,75b);
}
B60facf:L60facf:{c.instructions+=6;NFSU2_TR(0x60facf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B60fad0:{NFSU2_TR(0x60fad0);
w4(R+4,u32(0x12cull));
}
B60fad5:{NFSU2_TR(0x60fad5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x60fad5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x60fad5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B60fad7:{NFSU2_TR(0x60fad7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60fada:{NFSU2_TR(0x60fada);
__builtin_memmove(gp(0x8a44e0),(R+8),4);
}
B60fae0:{NFSU2_TR(0x60fae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60faf4;}}
}
B60fae2:L60fae2:{c.instructions+=2;NFSU2_TR(0x60fae2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1c8c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60fae8:{NFSU2_TR(0x60fae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60faf4;}}
}
B60faea:L60faea:{c.instructions+=1;NFSU2_TR(0x60faea);
s4(0x8a1c8c,u32(0x2ull));
}
B60faf4:L60faf4:{c.instructions+=2;NFSU2_TR(0x60faf4);
u8 U[14];
__builtin_memmove((U+6),gp(0x802958),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fafa:{NFSU2_TR(0x60fafa);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60fabcu);}goto L60fabc;}}
}
B60fafc:L60fafc:{c.instructions+=2;NFSU2_TR(0x60fafc);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1c80),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60fb02:{NFSU2_TR(0x60fb02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fba3;}}
}
B60fb08:L60fb08:{c.instructions+=2;NFSU2_TR(0x60fb08);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1c7c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60fb0e:{NFSU2_TR(0x60fb0e);
if(r1(R+518)){{goto L60fba3;}}
}
B60fb14:L60fb14:{c.instructions+=2;NFSU2_TR(0x60fb14);
u8 U[4];
w4(U+0,u32(0x7a844cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb19:{NFSU2_TR(0x60fb19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb1eull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb1e:L60fb1e:{c.instructions+=3;NFSU2_TR(0x60fb1e);
u8 U[4];
w4(U+0,u32(0x7a8438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb23:{NFSU2_TR(0x60fb23);
__builtin_memmove(gp(0x8a07a8),(R+0),4);
}
B60fb28:{NFSU2_TR(0x60fb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb2dull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb2d:L60fb2d:{c.instructions+=3;NFSU2_TR(0x60fb2d);
u8 U[4];
w4(U+0,u32(0x7a842cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb32:{NFSU2_TR(0x60fb32);
__builtin_memmove(gp(0x8a07ac),(R+0),4);
}
B60fb37:{NFSU2_TR(0x60fb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb3cull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb3c:L60fb3c:{c.instructions+=3;NFSU2_TR(0x60fb3c);
u8 U[4];
w4(U+0,u32(0x7a841cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb41:{NFSU2_TR(0x60fb41);
__builtin_memmove(gp(0x8a07b0),(R+0),4);
}
B60fb46:{NFSU2_TR(0x60fb46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb4bull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb4b:L60fb4b:{c.instructions+=3;NFSU2_TR(0x60fb4b);
u8 U[4];
w4(U+0,u32(0x7a840cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb50:{NFSU2_TR(0x60fb50);
__builtin_memmove(gp(0x8a07b4),(R+0),4);
}
B60fb55:{NFSU2_TR(0x60fb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb5aull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb5a:L60fb5a:{c.instructions+=3;NFSU2_TR(0x60fb5a);
u8 U[4];
w4(U+0,u32(0x7a83f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb5f:{NFSU2_TR(0x60fb5f);
__builtin_memmove(gp(0x8a07b8),(R+0),4);
}
B60fb64:{NFSU2_TR(0x60fb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb69ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb69:L60fb69:{c.instructions+=3;NFSU2_TR(0x60fb69);
u8 U[4];
w4(U+0,u32(0x7a842cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb6e:{NFSU2_TR(0x60fb6e);
__builtin_memmove(gp(0x8a07bc),(R+0),4);
}
B60fb73:{NFSU2_TR(0x60fb73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb78ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb78:L60fb78:{c.instructions+=3;NFSU2_TR(0x60fb78);
u8 U[4];
w4(U+0,u32(0x7a841cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fb7d:{NFSU2_TR(0x60fb7d);
__builtin_memmove(gp(0x8a07c0),(R+0),4);
}
B60fb82:{NFSU2_TR(0x60fb82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb87ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fb87:L60fb87:{c.instructions+=3;NFSU2_TR(0x60fb87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B60fb8a:{NFSU2_TR(0x60fb8a);
__builtin_memmove(gp(0x8a07c4),(R+0),4);
}
B60fb8f:{NFSU2_TR(0x60fb8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fb94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60f710u);}goto L60f710;}
}
B60fb94:L60fb94:{c.instructions+=3;NFSU2_TR(0x60fb94);
w4(R+0,u32(0x1ull));
}
B60fb99:{NFSU2_TR(0x60fb99);
__builtin_memmove(gp(0x8a1c98),(R+0),4);
}
B60fb9e:{NFSU2_TR(0x60fb9e);
__builtin_memmove(gp(0x8a1c80),(R+0),4);
}
B60fba3:L60fba3:{c.instructions+=2;NFSU2_TR(0x60fba3);
w4(R+24,u32(0x80ull));
}
B60fba8:{NFSU2_TR(0x60fba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fbadull));
TAIL_STATIC(0x5bf1b0u,5bf);
}
B60fbad:L60fbad:{c.instructions+=2;NFSU2_TR(0x60fbad);
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
B60fbaf:{NFSU2_TR(0x60fbaf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60fabcu);}goto L60fabc;}}
}
B60fbb5:L60fbb5:{c.instructions+=4;NFSU2_TR(0x60fbb5);
__builtin_memmove((R+0),gp(0x8a1c8c),4);
}
B60fbba:{NFSU2_TR(0x60fbba);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B60fbbb:{NFSU2_TR(0x60fbbb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B60fbbe:{NFSU2_TR(0x60fbbe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60fd27;}}
}
B60fbc4:L60fbc4:{c.instructions+=1;NFSU2_TR(0x60fbc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60fd2cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60fbcb:L60fbcb:{c.instructions+=9;NFSU2_TR(0x60fbcb);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fbd1:{NFSU2_TR(0x60fbd1);
{u32 ea_=u32(u32(9051292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60fbd7:{NFSU2_TR(0x60fbd7);
{u32 ea_=u32(u32(9051292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60fbdd:{NFSU2_TR(0x60fbdd);
{u32 ea_=u32(u32(8399188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fbe3:{NFSU2_TR(0x60fbe3);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B60fbe5:{NFSU2_TR(0x60fbe5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60fbeb:{NFSU2_TR(0x60fbeb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fbed:{NFSU2_TR(0x60fbed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fbf0:{NFSU2_TR(0x60fbf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fbfa;}}
}
B60fbf2:L60fbf2:{c.instructions+=2;NFSU2_TR(0x60fbf2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60fbf4:{NFSU2_TR(0x60fbf4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fbfa:L60fbfa:{c.instructions+=5;NFSU2_TR(0x60fbfa);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fc00:{NFSU2_TR(0x60fc00);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60fc02:{NFSU2_TR(0x60fc02);
{u32 ea_=u32(u32(9051272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60fc08:{NFSU2_TR(0x60fc08);
{u32 ea_=u32(u32(8029168u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B60fc0e:{NFSU2_TR(0x60fc0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fc13ull));
TAIL_STATIC(0x75bed4u,75b);
}
B60fc13:L60fc13:{c.instructions+=6;NFSU2_TR(0x60fc13);
{u32 ea_=u32(u32(8399188u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fc19:{NFSU2_TR(0x60fc19);
w4(R+24,u32(0x80ull));
}
B60fc1e:{NFSU2_TR(0x60fc1e);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B60fc20:{NFSU2_TR(0x60fc20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fc22:{NFSU2_TR(0x60fc22);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60fc25:{NFSU2_TR(0x60fc25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fd27;}}
}
B60fc2b:L60fc2b:{c.instructions+=6;NFSU2_TR(0x60fc2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fc2c:{NFSU2_TR(0x60fc2c);
__builtin_memmove((R+0),(R+24),4);
}
B60fc2e:{NFSU2_TR(0x60fc2e);
s4(0x8a1c9c,u32(0x0ull));
}
B60fc38:{NFSU2_TR(0x60fc38);
s4(0x8a1c8c,u32(0x2ull));
}
B60fc42:{NFSU2_TR(0x60fc42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fc43:{NFSU2_TR(0x60fc43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fc44:L60fc44:{c.instructions+=14;NFSU2_TR(0x60fc44);
__builtin_memmove((R+0),gp(0x8a1c94),4);
}
B60fc49:{NFSU2_TR(0x60fc49);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60fc50:{NFSU2_TR(0x60fc50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60fc57:{NFSU2_TR(0x60fc57);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60fc59:{NFSU2_TR(0x60fc59);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B60fc5c:{NFSU2_TR(0x60fc5c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fc5f:{NFSU2_TR(0x60fc5f);
__builtin_memmove(gp(0x8a1c94),(R+0),4);
}
B60fc64:{NFSU2_TR(0x60fc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fc65:{NFSU2_TR(0x60fc65);
__builtin_memmove((R+0),(R+24),4);
}
B60fc67:{NFSU2_TR(0x60fc67);
__builtin_memmove(gp(0x8a1ca0),(R+8),4);
}
B60fc6d:{NFSU2_TR(0x60fc6d);
__builtin_memmove(gp(0x8a1ca4),(R+4),4);
}
B60fc73:{NFSU2_TR(0x60fc73);
s4(0x8a1c8c,u32(0x4ull));
}
B60fc7d:{NFSU2_TR(0x60fc7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fc7e:{NFSU2_TR(0x60fc7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fc7f:L60fc7f:{c.instructions+=5;NFSU2_TR(0x60fc7f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fc81:{NFSU2_TR(0x60fc81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fc82:{NFSU2_TR(0x60fc82);
__builtin_memmove((R+0),(R+24),4);
}
B60fc84:{NFSU2_TR(0x60fc84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fc85:{NFSU2_TR(0x60fc85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fc86:L60fc86:{c.instructions+=9;NFSU2_TR(0x60fc86);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fc8c:{NFSU2_TR(0x60fc8c);
{u32 ea_=u32(u32(9051292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60fc92:{NFSU2_TR(0x60fc92);
{u32 ea_=u32(u32(9051292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60fc98:{NFSU2_TR(0x60fc98);
{u32 ea_=u32(u32(8399188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fc9e:{NFSU2_TR(0x60fc9e);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B60fca0:{NFSU2_TR(0x60fca0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60fca6:{NFSU2_TR(0x60fca6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fca8:{NFSU2_TR(0x60fca8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fcab:{NFSU2_TR(0x60fcab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fcb5;}}
}
B60fcad:L60fcad:{c.instructions+=2;NFSU2_TR(0x60fcad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60fcaf:{NFSU2_TR(0x60fcaf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fcb5:L60fcb5:{c.instructions+=6;NFSU2_TR(0x60fcb5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fcbb:{NFSU2_TR(0x60fcbb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60fcbd:{NFSU2_TR(0x60fcbd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60fcc3:{NFSU2_TR(0x60fcc3);
{u32 ea_=u32(u32(9051272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60fcc9:{NFSU2_TR(0x60fcc9);
{u32 ea_=u32(u32(8029168u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B60fccf:{NFSU2_TR(0x60fccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fcd4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B60fcd4:L60fcd4:{c.instructions+=5;NFSU2_TR(0x60fcd4);
{u32 ea_=u32(u32(8399188u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fcda:{NFSU2_TR(0x60fcda);
__builtin_memmove((R+24),(R+0),4);
}
B60fcdc:{NFSU2_TR(0x60fcdc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fcde:{NFSU2_TR(0x60fcde);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60fce1:{NFSU2_TR(0x60fce1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fd27;}}
}
B60fce3:L60fce3:{c.instructions+=5;NFSU2_TR(0x60fce3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a1ca0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60fce9:{NFSU2_TR(0x60fce9);
s4(0x8a1c88,u32(0x0ull));
}
B60fcf3:{NFSU2_TR(0x60fcf3);
s4(0x8a1c9c,u32(0x0ull));
}
B60fcfd:{NFSU2_TR(0x60fcfd);
__builtin_memmove(gp(0x8a1c8c),(R+28),4);
}
B60fd03:{NFSU2_TR(0x60fd03);
if(r1(R+518)){{goto L60fd11;}}
}
B60fd05:L60fd05:{c.instructions+=2;NFSU2_TR(0x60fd05);
__builtin_memmove(gp(0x8a1ca0),(R+28),4);
}
B60fd0b:{NFSU2_TR(0x60fd0b);
__builtin_memmove(gp(0x8a1ca4),(R+28),4);
}
B60fd11:L60fd11:{c.instructions+=5;NFSU2_TR(0x60fd11);
__builtin_memmove((R+0),gp(0x8a1c90),4);
}
B60fd16:{NFSU2_TR(0x60fd16);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60fd17:{NFSU2_TR(0x60fd17);
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
B60fd1a:{NFSU2_TR(0x60fd1a);
__builtin_memmove(gp(0x8a1c90),(R+0),4);
}
B60fd1f:{NFSU2_TR(0x60fd1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fd27;}}
}
B60fd21:L60fd21:{c.instructions+=1;NFSU2_TR(0x60fd21);
__builtin_memmove(gp(0x8a1c90),(R+28),4);
}
B60fd27:L60fd27:{c.instructions+=4;NFSU2_TR(0x60fd27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60fd28:{NFSU2_TR(0x60fd28);
__builtin_memmove((R+0),(R+24),4);
}
B60fd2a:{NFSU2_TR(0x60fd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fd2b:{NFSU2_TR(0x60fd2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fd40:L60fd40:{c.instructions+=2;NFSU2_TR(0x60fd40);
u8 U[4];
w4(U+0,u32(0x7a844cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd45:{NFSU2_TR(0x60fd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fd4aull));
TAIL_STATIC(0x43db50u,43d);
}
B60fd4a:L60fd4a:{c.instructions+=3;NFSU2_TR(0x60fd4a);
u8 U[4];
w4(U+0,u32(0x7a8438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd4f:{NFSU2_TR(0x60fd4f);
__builtin_memmove(gp(0x8a07a8),(R+0),4);
}
B60fd54:{NFSU2_TR(0x60fd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fd59ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fd59:L60fd59:{c.instructions+=3;NFSU2_TR(0x60fd59);
u8 U[4];
w4(U+0,u32(0x7a842cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd5e:{NFSU2_TR(0x60fd5e);
__builtin_memmove(gp(0x8a07ac),(R+0),4);
}
B60fd63:{NFSU2_TR(0x60fd63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fd68ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fd68:L60fd68:{c.instructions+=3;NFSU2_TR(0x60fd68);
u8 U[4];
w4(U+0,u32(0x7a841cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd6d:{NFSU2_TR(0x60fd6d);
__builtin_memmove(gp(0x8a07b0),(R+0),4);
}
B60fd72:{NFSU2_TR(0x60fd72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fd77ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fd77:L60fd77:{c.instructions+=3;NFSU2_TR(0x60fd77);
u8 U[4];
w4(U+0,u32(0x7a840cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd7c:{NFSU2_TR(0x60fd7c);
__builtin_memmove(gp(0x8a07b4),(R+0),4);
}
B60fd81:{NFSU2_TR(0x60fd81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fd86ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fd86:L60fd86:{c.instructions+=3;NFSU2_TR(0x60fd86);
u8 U[4];
w4(U+0,u32(0x7a83f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd8b:{NFSU2_TR(0x60fd8b);
__builtin_memmove(gp(0x8a07b8),(R+0),4);
}
B60fd90:{NFSU2_TR(0x60fd90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fd95ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fd95:L60fd95:{c.instructions+=3;NFSU2_TR(0x60fd95);
u8 U[4];
w4(U+0,u32(0x7a842cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fd9a:{NFSU2_TR(0x60fd9a);
__builtin_memmove(gp(0x8a07bc),(R+0),4);
}
B60fd9f:{NFSU2_TR(0x60fd9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fda4ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fda4:L60fda4:{c.instructions+=3;NFSU2_TR(0x60fda4);
u8 U[4];
w4(U+0,u32(0x7a841cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fda9:{NFSU2_TR(0x60fda9);
__builtin_memmove(gp(0x8a07c0),(R+0),4);
}
B60fdae:{NFSU2_TR(0x60fdae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fdb3ull));
TAIL_STATIC(0x43db50u,43d);
}
B60fdb3:L60fdb3:{c.instructions+=7;NFSU2_TR(0x60fdb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fdb5:{NFSU2_TR(0x60fdb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fdb7:{NFSU2_TR(0x60fdb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fdb9:{NFSU2_TR(0x60fdb9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fdbb:{NFSU2_TR(0x60fdbb);
u8 U[4];
w4(U+0,u32(0x8a07a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fdc0:{NFSU2_TR(0x60fdc0);
__builtin_memmove(gp(0x8a07c4),(R+0),4);
}
B60fdc5:{NFSU2_TR(0x60fdc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fdcaull));
TAIL_STATIC(0x494d60u,494);
}
B60fdca:L60fdca:{c.instructions+=2;NFSU2_TR(0x60fdca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60fdcc:{NFSU2_TR(0x60fdcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60fdd1ull));
TAIL_STATIC(0x490170u,490);
}
B60fdd1:L60fdd1:{c.instructions+=2;NFSU2_TR(0x60fdd1);
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
B60fdd4:{NFSU2_TR(0x60fdd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fde0:L60fde0:{c.instructions+=3;NFSU2_TR(0x60fde0);
{u32 ea_=u32(u32(9051292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fde6:{NFSU2_TR(0x60fde6);
{u32 ea_=u32(u32(8399188u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B60fdec:{NFSU2_TR(0x60fdec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fdf0:L60fdf0:{c.instructions+=5;NFSU2_TR(0x60fdf0);
__builtin_memmove((R+4),gp(0x8a1c8c),4);
}
B60fdf6:{NFSU2_TR(0x60fdf6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60fdf8:{NFSU2_TR(0x60fdf8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60fdfb:{NFSU2_TR(0x60fdfb);
__builtin_memmove((R+0),(R+518),1);
}
B60fdfe:{NFSU2_TR(0x60fdfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fe00:L60fe00:{c.instructions+=2;NFSU2_TR(0x60fe00);
__builtin_memmove((R+0),gp(0x8a1c94),4);
}
B60fe05:{NFSU2_TR(0x60fe05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fe10:L60fe10:{c.instructions+=6;NFSU2_TR(0x60fe10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60fe14:{NFSU2_TR(0x60fe14);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe17:{NFSU2_TR(0x60fe17);
{u32 ea_=u32(u32(7913876u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe1d:{NFSU2_TR(0x60fe1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe1f:{NFSU2_TR(0x60fe1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fe22:{NFSU2_TR(0x60fe22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fe4d;}}
}
B60fe24:L60fe24:{c.instructions+=5;NFSU2_TR(0x60fe24);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe27:{NFSU2_TR(0x60fe27);
{u32 ea_=u32(u32(7963928u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe2d:{NFSU2_TR(0x60fe2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe2f:{NFSU2_TR(0x60fe2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fe32:{NFSU2_TR(0x60fe32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fe4d;}}
}
B60fe34:L60fe34:{c.instructions+=5;NFSU2_TR(0x60fe34);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe37:{NFSU2_TR(0x60fe37);
{u32 ea_=u32(u32(7913876u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe3d:{NFSU2_TR(0x60fe3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe3f:{NFSU2_TR(0x60fe3f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60fe42:{NFSU2_TR(0x60fe42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fe47;}}
}
B60fe44:L60fe44:{c.instructions+=2;NFSU2_TR(0x60fe44);
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
B60fe46:{NFSU2_TR(0x60fe46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fe47:L60fe47:{c.instructions+=2;NFSU2_TR(0x60fe47);
w4(R+0,u32(0x1ull));
}
B60fe4c:{NFSU2_TR(0x60fe4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fe4d:L60fe4d:{c.instructions+=5;NFSU2_TR(0x60fe4d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe50:{NFSU2_TR(0x60fe50);
{u32 ea_=u32(u32(7980084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe56:{NFSU2_TR(0x60fe56);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe58:{NFSU2_TR(0x60fe58);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fe5b:{NFSU2_TR(0x60fe5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fe88;}}
}
B60fe5d:L60fe5d:{c.instructions+=5;NFSU2_TR(0x60fe5d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe60:{NFSU2_TR(0x60fe60);
{u32 ea_=u32(u32(7963924u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe66:{NFSU2_TR(0x60fe66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe68:{NFSU2_TR(0x60fe68);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fe6b:{NFSU2_TR(0x60fe6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fe88;}}
}
B60fe6d:L60fe6d:{c.instructions+=6;NFSU2_TR(0x60fe6d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe70:{NFSU2_TR(0x60fe70);
{u32 ea_=u32(u32(7980084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe76:{NFSU2_TR(0x60fe76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe78:{NFSU2_TR(0x60fe78);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60fe7b:{NFSU2_TR(0x60fe7b);
w4(R+0,u32(0x2ull));
}
B60fe80:{NFSU2_TR(0x60fe80);
if(r1(R+518)){{goto L60fedd;}}
}
B60fe82:L60fe82:{c.instructions+=2;NFSU2_TR(0x60fe82);
w4(R+0,u32(0x3ull));
}
B60fe87:{NFSU2_TR(0x60fe87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fe88:L60fe88:{c.instructions+=5;NFSU2_TR(0x60fe88);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe8b:{NFSU2_TR(0x60fe8b);
{u32 ea_=u32(u32(7908344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fe91:{NFSU2_TR(0x60fe91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fe93:{NFSU2_TR(0x60fe93);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fe96:{NFSU2_TR(0x60fe96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fec3;}}
}
B60fe98:L60fe98:{c.instructions+=5;NFSU2_TR(0x60fe98);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fe9b:{NFSU2_TR(0x60fe9b);
{u32 ea_=u32(u32(8029276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fea1:{NFSU2_TR(0x60fea1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fea3:{NFSU2_TR(0x60fea3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60fea6:{NFSU2_TR(0x60fea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60fec3;}}
}
B60fea8:L60fea8:{c.instructions+=6;NFSU2_TR(0x60fea8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60feab:{NFSU2_TR(0x60feab);
{u32 ea_=u32(u32(7908344u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60feb1:{NFSU2_TR(0x60feb1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60feb3:{NFSU2_TR(0x60feb3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60feb6:{NFSU2_TR(0x60feb6);
w4(R+0,u32(0x4ull));
}
B60febb:{NFSU2_TR(0x60febb);
if(r1(R+518)){{goto L60fedd;}}
}
B60febd:L60febd:{c.instructions+=2;NFSU2_TR(0x60febd);
w4(R+0,u32(0x5ull));
}
B60fec2:{NFSU2_TR(0x60fec2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fec3:L60fec3:{c.instructions+=6;NFSU2_TR(0x60fec3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60fec6:{NFSU2_TR(0x60fec6);
{u32 ea_=u32(u32(7905248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60fecc:{NFSU2_TR(0x60fecc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60fece:{NFSU2_TR(0x60fece);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60fed1:{NFSU2_TR(0x60fed1);
w4(R+0,u32(0x6ull));
}
B60fed6:{NFSU2_TR(0x60fed6);
if(r1(R+518)){{goto L60fedd;}}
}
B60fed8:L60fed8:{c.instructions+=1;NFSU2_TR(0x60fed8);
w4(R+0,u32(0x7ull));
}
B60fedd:L60fedd:{c.instructions+=1;NFSU2_TR(0x60fedd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fee0:L60fee0:{c.instructions+=3;NFSU2_TR(0x60fee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60fee4:{NFSU2_TR(0x60fee4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802960ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60feeb:{NFSU2_TR(0x60feeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60fef0:L60fef0:{c.instructions+=3;NFSU2_TR(0x60fef0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B60fef4:{NFSU2_TR(0x60fef4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B60fef8:{NFSU2_TR(0x60fef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60feff;}}
}
B60fefa:L60fefa:{c.instructions+=2;NFSU2_TR(0x60fefa);
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
B60fefc:{NFSU2_TR(0x60fefc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60feff:L60feff:{c.instructions+=13;NFSU2_TR(0x60feff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ff03:{NFSU2_TR(0x60ff03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ff04:{NFSU2_TR(0x60ff04);
__builtin_memmove((R+12),gp(0x8a1cc8),4);
}
B60ff0a:{NFSU2_TR(0x60ff0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ff0d:{NFSU2_TR(0x60ff0d);
w4(R+0,u32(r2(R+0)));
}
B60ff10:{NFSU2_TR(0x60ff10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ff11:{NFSU2_TR(0x60ff11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B60ff14:{NFSU2_TR(0x60ff14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ff15:{NFSU2_TR(0x60ff15);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60ff17:{NFSU2_TR(0x60ff17);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ff19:{NFSU2_TR(0x60ff19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ff1a:{NFSU2_TR(0x60ff1a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B60ff1d:{NFSU2_TR(0x60ff1d);
if(r1(R+518)){{goto L60ff44;}}
}
B60ff1f:L60ff1f:{c.instructions+=2;NFSU2_TR(0x60ff1f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ff21:{NFSU2_TR(0x60ff21);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60ff37;}}
}
B60ff23:L60ff23:{c.instructions+=1;NFSU2_TR(0x60ff23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60ff26:L60ff26:{c.instructions+=5;NFSU2_TR(0x60ff26);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+20,u32(s32(s16(r2(U+12)))));
}
B60ff2b:{NFSU2_TR(0x60ff2b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60ff2c:{NFSU2_TR(0x60ff2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B60ff2f:{NFSU2_TR(0x60ff2f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ff31:{NFSU2_TR(0x60ff31);
if(r1(R+518)){{goto L60ff37;}}
}
B60ff33:L60ff33:{c.instructions+=2;NFSU2_TR(0x60ff33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60ff35:{NFSU2_TR(0x60ff35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60ff26u);}goto L60ff26;}}
}
B60ff37:L60ff37:{c.instructions+=2;NFSU2_TR(0x60ff37);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ff39:{NFSU2_TR(0x60ff39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ff46;}}
}
B60ff3b:L60ff3b:{c.instructions+=6;NFSU2_TR(0x60ff3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60ff3c:{NFSU2_TR(0x60ff3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ff3d:{NFSU2_TR(0x60ff3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60ff3e:{NFSU2_TR(0x60ff3e);
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
B60ff40:{NFSU2_TR(0x60ff40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60ff41:{NFSU2_TR(0x60ff41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60ff44:L60ff44:{c.instructions+=1;NFSU2_TR(0x60ff44);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60ff46:L60ff46:{c.instructions+=1;NFSU2_TR(0x60ff46);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60ff69;}}
}
B60ff48:L60ff48:{c.instructions+=3;NFSU2_TR(0x60ff48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60ff4b:{NFSU2_TR(0x60ff4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60ff4f:{NFSU2_TR(0x60ff4f);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B60ff53:L60ff53:{c.instructions+=4;NFSU2_TR(0x60ff53);
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
B60ff55:{NFSU2_TR(0x60ff55);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B60ff58:{NFSU2_TR(0x60ff58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B60ff5b:{NFSU2_TR(0x60ff5b);
if(r1(R+518)){{goto L60ff6b;}}
}
B60ff5d:L60ff5d:{c.instructions+=2;NFSU2_TR(0x60ff5d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B60ff5f:{NFSU2_TR(0x60ff5f);
if(r1(R+518)){{goto L60ff6b;}}
}
B60ff61:L60ff61:{c.instructions+=4;NFSU2_TR(0x60ff61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60ff62:{NFSU2_TR(0x60ff62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B60ff65:{NFSU2_TR(0x60ff65);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60ff67:{NFSU2_TR(0x60ff67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60ff53u);}goto L60ff53;}}
}
B60ff69:L60ff69:{c.instructions+=1;NFSU2_TR(0x60ff69);
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
B60ff6b:L60ff6b:{c.instructions+=5;NFSU2_TR(0x60ff6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60ff6c:{NFSU2_TR(0x60ff6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ff6d:{NFSU2_TR(0x60ff6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60ff6e:{NFSU2_TR(0x60ff6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60ff6f:{NFSU2_TR(0x60ff6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60ff80:L60ff80:{c.instructions+=8;NFSU2_TR(0x60ff80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ff84:{NFSU2_TR(0x60ff84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ff88:{NFSU2_TR(0x60ff88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B60ff8b:{NFSU2_TR(0x60ff8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ff8c:{NFSU2_TR(0x60ff8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B60ff90:{NFSU2_TR(0x60ff90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60ff92:{NFSU2_TR(0x60ff92);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ff95:{NFSU2_TR(0x60ff95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ff9d;}}
}
B60ff97:L60ff97:{c.instructions+=3;NFSU2_TR(0x60ff97);
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
B60ff99:{NFSU2_TR(0x60ff99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ff9a:{NFSU2_TR(0x60ff9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60ff9d:L60ff9d:{c.instructions+=2;NFSU2_TR(0x60ff9d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B60ffa0:{NFSU2_TR(0x60ffa0);
if(r1(R+518)){{goto L60fff2;}}
}
B60ffa2:L60ffa2:{c.instructions+=8;NFSU2_TR(0x60ffa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B60ffa6:{NFSU2_TR(0x60ffa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ffaa:{NFSU2_TR(0x60ffaa);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x41ull))));
}
B60ffad:{NFSU2_TR(0x60ffad);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B60ffb2:{NFSU2_TR(0x60ffb2);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B60ffb7:{NFSU2_TR(0x60ffb7);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60ffbb:{NFSU2_TR(0x60ffbb);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60ffc0:{NFSU2_TR(0x60ffc0);
if(r1(R+518)){{goto L60ffdb;}}
}
B60ffc2:L60ffc2:{c.instructions+=7;NFSU2_TR(0x60ffc2);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B60ffc8:{NFSU2_TR(0x60ffc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ffc9:{NFSU2_TR(0x60ffc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ffcc:{NFSU2_TR(0x60ffcc);
w4(R+4,u32(r2(R+4)));
}
B60ffcf:{NFSU2_TR(0x60ffcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B60ffd2:{NFSU2_TR(0x60ffd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ffd3:{NFSU2_TR(0x60ffd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ffd8ull));
TAIL_STATIC(0x43db80u,43d);
}
B60ffd8:L60ffd8:{c.instructions+=1;NFSU2_TR(0x60ffd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60ffdb:L60ffdb:{c.instructions+=4;NFSU2_TR(0x60ffdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60ffdd:{NFSU2_TR(0x60ffdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ffde:{NFSU2_TR(0x60ffde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ffdf:{NFSU2_TR(0x60ffdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ffe4ull));
TAIL_STATIC(0x43db80u,43d);
}
B60ffe4:L60ffe4:{c.instructions+=4;NFSU2_TR(0x60ffe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ffe5:{NFSU2_TR(0x60ffe5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60ffe9:{NFSU2_TR(0x60ffe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ffea:{NFSU2_TR(0x60ffea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ffefull));
TAIL_STATIC(0x43db80u,43d);
}
B60ffef:L60ffef:{c.instructions+=1;NFSU2_TR(0x60ffef);
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
B60fff2:L60fff2:{c.instructions+=2;NFSU2_TR(0x60fff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60fff3:{NFSU2_TR(0x60fff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x60f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
