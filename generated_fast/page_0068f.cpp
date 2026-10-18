#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_690(u8* __restrict R,Cpu& c);
u32 body_695(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x68f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x68f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_68f(u8* __restrict R,Cpu& c);
u32 page_68f(Cpu& c){return body_68f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_68f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x68f003:goto L68f003;
case 0x68f007:c.instructions+=3;goto B68f007;
case 0x68f00b:c.instructions+=2;goto B68f00b;
case 0x68f00f:c.instructions+=1;goto B68f00f;
case 0x68f014:goto L68f014;
case 0x68f017:c.instructions+=11;goto B68f017;
case 0x68f01b:c.instructions+=10;goto B68f01b;
case 0x68f01f:c.instructions+=9;goto B68f01f;
case 0x68f026:c.instructions+=8;goto B68f026;
case 0x68f02a:c.instructions+=7;goto B68f02a;
case 0x68f02e:c.instructions+=6;goto B68f02e;
case 0x68f036:c.instructions+=5;goto B68f036;
case 0x68f039:c.instructions+=4;goto B68f039;
case 0x68f03c:c.instructions+=3;goto B68f03c;
case 0x68f040:c.instructions+=2;goto B68f040;
case 0x68f042:c.instructions+=1;goto B68f042;
case 0x68f044:goto L68f044;
case 0x68f048:c.instructions+=7;goto B68f048;
case 0x68f04c:c.instructions+=6;goto B68f04c;
case 0x68f04f:c.instructions+=5;goto B68f04f;
case 0x68f053:c.instructions+=4;goto B68f053;
case 0x68f057:c.instructions+=3;goto B68f057;
case 0x68f05b:c.instructions+=2;goto B68f05b;
case 0x68f05f:c.instructions+=1;goto B68f05f;
case 0x68f063:goto L68f063;
case 0x68f06a:c.instructions+=5;goto B68f06a;
case 0x68f06d:c.instructions+=4;goto B68f06d;
case 0x68f071:c.instructions+=3;goto B68f071;
case 0x68f073:c.instructions+=2;goto B68f073;
case 0x68f076:c.instructions+=1;goto B68f076;
case 0x68f079:goto L68f079;
case 0x68f07d:c.instructions+=17;goto B68f07d;
case 0x68f080:c.instructions+=16;goto B68f080;
case 0x68f083:c.instructions+=15;goto B68f083;
case 0x68f087:c.instructions+=14;goto B68f087;
case 0x68f08b:c.instructions+=13;goto B68f08b;
case 0x68f08f:c.instructions+=12;goto B68f08f;
case 0x68f093:c.instructions+=11;goto B68f093;
case 0x68f097:c.instructions+=10;goto B68f097;
case 0x68f09b:c.instructions+=9;goto B68f09b;
case 0x68f09e:c.instructions+=8;goto B68f09e;
case 0x68f0a2:c.instructions+=7;goto B68f0a2;
case 0x68f0a6:c.instructions+=6;goto B68f0a6;
case 0x68f0aa:c.instructions+=5;goto B68f0aa;
case 0x68f0ae:c.instructions+=4;goto B68f0ae;
case 0x68f0b2:c.instructions+=3;goto B68f0b2;
case 0x68f0b6:c.instructions+=2;goto B68f0b6;
case 0x68f0ba:c.instructions+=1;goto B68f0ba;
case 0x68f0bf:goto L68f0bf;
case 0x68f0c2:c.instructions+=13;goto B68f0c2;
case 0x68f0c9:c.instructions+=12;goto B68f0c9;
case 0x68f0cd:c.instructions+=11;goto B68f0cd;
case 0x68f0d5:c.instructions+=10;goto B68f0d5;
case 0x68f0d9:c.instructions+=9;goto B68f0d9;
case 0x68f0dc:c.instructions+=8;goto B68f0dc;
case 0x68f0df:c.instructions+=7;goto B68f0df;
case 0x68f0e2:c.instructions+=6;goto B68f0e2;
case 0x68f0e5:c.instructions+=5;goto B68f0e5;
case 0x68f0e8:c.instructions+=4;goto B68f0e8;
case 0x68f0ee:c.instructions+=3;goto B68f0ee;
case 0x68f0f3:c.instructions+=2;goto B68f0f3;
case 0x68f0f7:c.instructions+=1;goto B68f0f7;
case 0x68f0f9:goto L68f0f9;
case 0x68f0fc:c.instructions+=2;goto B68f0fc;
case 0x68f100:c.instructions+=1;goto B68f100;
case 0x68f104:goto L68f104;
case 0x68f107:c.instructions+=7;goto B68f107;
case 0x68f10a:c.instructions+=6;goto B68f10a;
case 0x68f10e:c.instructions+=5;goto B68f10e;
case 0x68f112:c.instructions+=4;goto B68f112;
case 0x68f116:c.instructions+=3;goto B68f116;
case 0x68f119:c.instructions+=2;goto B68f119;
case 0x68f11b:c.instructions+=1;goto B68f11b;
case 0x68f11e:goto L68f11e;
case 0x68f120:c.instructions+=51;goto B68f120;
case 0x68f121:c.instructions+=50;goto B68f121;
case 0x68f123:c.instructions+=49;goto B68f123;
case 0x68f129:c.instructions+=48;goto B68f129;
case 0x68f12c:c.instructions+=47;goto B68f12c;
case 0x68f12f:c.instructions+=46;goto B68f12f;
case 0x68f132:c.instructions+=45;goto B68f132;
case 0x68f135:c.instructions+=44;goto B68f135;
case 0x68f139:c.instructions+=43;goto B68f139;
case 0x68f13c:c.instructions+=42;goto B68f13c;
case 0x68f13f:c.instructions+=41;goto B68f13f;
case 0x68f143:c.instructions+=40;goto B68f143;
case 0x68f148:c.instructions+=39;goto B68f148;
case 0x68f14b:c.instructions+=38;goto B68f14b;
case 0x68f14f:c.instructions+=37;goto B68f14f;
case 0x68f154:c.instructions+=36;goto B68f154;
case 0x68f158:c.instructions+=35;goto B68f158;
case 0x68f15d:c.instructions+=34;goto B68f15d;
case 0x68f161:c.instructions+=33;goto B68f161;
case 0x68f165:c.instructions+=32;goto B68f165;
case 0x68f169:c.instructions+=31;goto B68f169;
case 0x68f16d:c.instructions+=30;goto B68f16d;
case 0x68f171:c.instructions+=29;goto B68f171;
case 0x68f174:c.instructions+=28;goto B68f174;
case 0x68f178:c.instructions+=27;goto B68f178;
case 0x68f17c:c.instructions+=26;goto B68f17c;
case 0x68f180:c.instructions+=25;goto B68f180;
case 0x68f184:c.instructions+=24;goto B68f184;
case 0x68f187:c.instructions+=23;goto B68f187;
case 0x68f18b:c.instructions+=22;goto B68f18b;
case 0x68f190:c.instructions+=21;goto B68f190;
case 0x68f195:c.instructions+=20;goto B68f195;
case 0x68f198:c.instructions+=19;goto B68f198;
case 0x68f19b:c.instructions+=18;goto B68f19b;
case 0x68f19f:c.instructions+=17;goto B68f19f;
case 0x68f1a3:c.instructions+=16;goto B68f1a3;
case 0x68f1a7:c.instructions+=15;goto B68f1a7;
case 0x68f1ab:c.instructions+=14;goto B68f1ab;
case 0x68f1af:c.instructions+=13;goto B68f1af;
case 0x68f1b3:c.instructions+=12;goto B68f1b3;
case 0x68f1b7:c.instructions+=11;goto B68f1b7;
case 0x68f1bb:c.instructions+=10;goto B68f1bb;
case 0x68f1bf:c.instructions+=9;goto B68f1bf;
case 0x68f1c3:c.instructions+=8;goto B68f1c3;
case 0x68f1c7:c.instructions+=7;goto B68f1c7;
case 0x68f1cb:c.instructions+=6;goto B68f1cb;
case 0x68f1cf:c.instructions+=5;goto B68f1cf;
case 0x68f1d2:c.instructions+=4;goto B68f1d2;
case 0x68f1d5:c.instructions+=3;goto B68f1d5;
case 0x68f1da:c.instructions+=2;goto B68f1da;
case 0x68f1e1:c.instructions+=1;goto B68f1e1;
case 0x68f1e3:goto L68f1e3;
case 0x68f1e6:c.instructions+=6;goto B68f1e6;
case 0x68f1e9:c.instructions+=5;goto B68f1e9;
case 0x68f1ec:c.instructions+=4;goto B68f1ec;
case 0x68f1ef:c.instructions+=3;goto B68f1ef;
case 0x68f1f3:c.instructions+=2;goto B68f1f3;
case 0x68f1f7:c.instructions+=1;goto B68f1f7;
case 0x68f1fc:goto L68f1fc;
case 0x68f201:c.instructions+=1;goto B68f201;
case 0x68f203:goto L68f203;
case 0x68f206:c.instructions+=6;goto B68f206;
case 0x68f209:c.instructions+=5;goto B68f209;
case 0x68f20c:c.instructions+=4;goto B68f20c;
case 0x68f20f:c.instructions+=3;goto B68f20f;
case 0x68f213:c.instructions+=2;goto B68f213;
case 0x68f218:c.instructions+=1;goto B68f218;
case 0x68f21d:goto L68f21d;
case 0x68f220:c.instructions+=24;goto B68f220;
case 0x68f225:c.instructions+=23;goto B68f225;
case 0x68f22a:c.instructions+=22;goto B68f22a;
case 0x68f22d:c.instructions+=21;goto B68f22d;
case 0x68f231:c.instructions+=20;goto B68f231;
case 0x68f234:c.instructions+=19;goto B68f234;
case 0x68f237:c.instructions+=18;goto B68f237;
case 0x68f23b:c.instructions+=17;goto B68f23b;
case 0x68f240:c.instructions+=16;goto B68f240;
case 0x68f244:c.instructions+=15;goto B68f244;
case 0x68f249:c.instructions+=14;goto B68f249;
case 0x68f24d:c.instructions+=13;goto B68f24d;
case 0x68f251:c.instructions+=12;goto B68f251;
case 0x68f255:c.instructions+=11;goto B68f255;
case 0x68f259:c.instructions+=10;goto B68f259;
case 0x68f25d:c.instructions+=9;goto B68f25d;
case 0x68f261:c.instructions+=8;goto B68f261;
case 0x68f265:c.instructions+=7;goto B68f265;
case 0x68f269:c.instructions+=6;goto B68f269;
case 0x68f26d:c.instructions+=5;goto B68f26d;
case 0x68f271:c.instructions+=4;goto B68f271;
case 0x68f275:c.instructions+=3;goto B68f275;
case 0x68f278:c.instructions+=2;goto B68f278;
case 0x68f27d:c.instructions+=1;goto B68f27d;
case 0x68f27f:goto L68f27f;
case 0x68f282:c.instructions+=5;goto B68f282;
case 0x68f285:c.instructions+=4;goto B68f285;
case 0x68f288:c.instructions+=3;goto B68f288;
case 0x68f28c:c.instructions+=2;goto B68f28c;
case 0x68f291:c.instructions+=1;goto B68f291;
case 0x68f296:goto L68f296;
case 0x68f29b:c.instructions+=98;goto B68f29b;
case 0x68f29e:c.instructions+=97;goto B68f29e;
case 0x68f2a3:c.instructions+=96;goto B68f2a3;
case 0x68f2a6:c.instructions+=95;goto B68f2a6;
case 0x68f2aa:c.instructions+=94;goto B68f2aa;
case 0x68f2ae:c.instructions+=93;goto B68f2ae;
case 0x68f2b2:c.instructions+=92;goto B68f2b2;
case 0x68f2b6:c.instructions+=91;goto B68f2b6;
case 0x68f2b9:c.instructions+=90;goto B68f2b9;
case 0x68f2bd:c.instructions+=89;goto B68f2bd;
case 0x68f2c5:c.instructions+=88;goto B68f2c5;
case 0x68f2cc:c.instructions+=87;goto B68f2cc;
case 0x68f2d3:c.instructions+=86;goto B68f2d3;
case 0x68f2d7:c.instructions+=85;goto B68f2d7;
case 0x68f2da:c.instructions+=84;goto B68f2da;
case 0x68f2dd:c.instructions+=83;goto B68f2dd;
case 0x68f2e1:c.instructions+=82;goto B68f2e1;
case 0x68f2e5:c.instructions+=81;goto B68f2e5;
case 0x68f2e9:c.instructions+=80;goto B68f2e9;
case 0x68f2ee:c.instructions+=79;goto B68f2ee;
case 0x68f2f3:c.instructions+=78;goto B68f2f3;
case 0x68f2f7:c.instructions+=77;goto B68f2f7;
case 0x68f2fc:c.instructions+=76;goto B68f2fc;
case 0x68f2ff:c.instructions+=75;goto B68f2ff;
case 0x68f302:c.instructions+=74;goto B68f302;
case 0x68f307:c.instructions+=73;goto B68f307;
case 0x68f30a:c.instructions+=72;goto B68f30a;
case 0x68f30d:c.instructions+=71;goto B68f30d;
case 0x68f312:c.instructions+=70;goto B68f312;
case 0x68f315:c.instructions+=69;goto B68f315;
case 0x68f318:c.instructions+=68;goto B68f318;
case 0x68f31b:c.instructions+=67;goto B68f31b;
case 0x68f31e:c.instructions+=66;goto B68f31e;
case 0x68f322:c.instructions+=65;goto B68f322;
case 0x68f329:c.instructions+=64;goto B68f329;
case 0x68f32d:c.instructions+=63;goto B68f32d;
case 0x68f334:c.instructions+=62;goto B68f334;
case 0x68f338:c.instructions+=61;goto B68f338;
case 0x68f33c:c.instructions+=60;goto B68f33c;
case 0x68f340:c.instructions+=59;goto B68f340;
case 0x68f344:c.instructions+=58;goto B68f344;
case 0x68f348:c.instructions+=57;goto B68f348;
case 0x68f34d:c.instructions+=56;goto B68f34d;
case 0x68f351:c.instructions+=55;goto B68f351;
case 0x68f358:c.instructions+=54;goto B68f358;
case 0x68f35c:c.instructions+=53;goto B68f35c;
case 0x68f360:c.instructions+=52;goto B68f360;
case 0x68f367:c.instructions+=51;goto B68f367;
case 0x68f36b:c.instructions+=50;goto B68f36b;
case 0x68f373:c.instructions+=49;goto B68f373;
case 0x68f377:c.instructions+=48;goto B68f377;
case 0x68f37b:c.instructions+=47;goto B68f37b;
case 0x68f37f:c.instructions+=46;goto B68f37f;
case 0x68f383:c.instructions+=45;goto B68f383;
case 0x68f38b:c.instructions+=44;goto B68f38b;
case 0x68f390:c.instructions+=43;goto B68f390;
case 0x68f395:c.instructions+=42;goto B68f395;
case 0x68f398:c.instructions+=41;goto B68f398;
case 0x68f39b:c.instructions+=40;goto B68f39b;
case 0x68f3a0:c.instructions+=39;goto B68f3a0;
case 0x68f3a3:c.instructions+=38;goto B68f3a3;
case 0x68f3a6:c.instructions+=37;goto B68f3a6;
case 0x68f3ab:c.instructions+=36;goto B68f3ab;
case 0x68f3ae:c.instructions+=35;goto B68f3ae;
case 0x68f3b1:c.instructions+=34;goto B68f3b1;
case 0x68f3b4:c.instructions+=33;goto B68f3b4;
case 0x68f3b7:c.instructions+=32;goto B68f3b7;
case 0x68f3bb:c.instructions+=31;goto B68f3bb;
case 0x68f3c2:c.instructions+=30;goto B68f3c2;
case 0x68f3c6:c.instructions+=29;goto B68f3c6;
case 0x68f3cd:c.instructions+=28;goto B68f3cd;
case 0x68f3d1:c.instructions+=27;goto B68f3d1;
case 0x68f3d5:c.instructions+=26;goto B68f3d5;
case 0x68f3d9:c.instructions+=25;goto B68f3d9;
case 0x68f3de:c.instructions+=24;goto B68f3de;
case 0x68f3e2:c.instructions+=23;goto B68f3e2;
case 0x68f3e7:c.instructions+=22;goto B68f3e7;
case 0x68f3eb:c.instructions+=21;goto B68f3eb;
case 0x68f3f2:c.instructions+=20;goto B68f3f2;
case 0x68f3f6:c.instructions+=19;goto B68f3f6;
case 0x68f3fa:c.instructions+=18;goto B68f3fa;
case 0x68f401:c.instructions+=17;goto B68f401;
case 0x68f405:c.instructions+=16;goto B68f405;
case 0x68f40d:c.instructions+=15;goto B68f40d;
case 0x68f411:c.instructions+=14;goto B68f411;
case 0x68f415:c.instructions+=13;goto B68f415;
case 0x68f419:c.instructions+=12;goto B68f419;
case 0x68f41d:c.instructions+=11;goto B68f41d;
case 0x68f425:c.instructions+=10;goto B68f425;
case 0x68f428:c.instructions+=9;goto B68f428;
case 0x68f430:c.instructions+=8;goto B68f430;
case 0x68f438:c.instructions+=7;goto B68f438;
case 0x68f43b:c.instructions+=6;goto B68f43b;
case 0x68f43e:c.instructions+=5;goto B68f43e;
case 0x68f441:c.instructions+=4;goto B68f441;
case 0x68f449:c.instructions+=3;goto B68f449;
case 0x68f44c:c.instructions+=2;goto B68f44c;
case 0x68f44e:c.instructions+=1;goto B68f44e;
case 0x68f450:goto L68f450;
case 0x68f455:goto L68f455;
case 0x68f459:c.instructions+=3;goto B68f459;
case 0x68f45d:c.instructions+=2;goto B68f45d;
case 0x68f461:c.instructions+=1;goto B68f461;
case 0x68f466:goto L68f466;
case 0x68f469:c.instructions+=9;goto B68f469;
case 0x68f46d:c.instructions+=8;goto B68f46d;
case 0x68f474:c.instructions+=7;goto B68f474;
case 0x68f478:c.instructions+=6;goto B68f478;
case 0x68f480:c.instructions+=5;goto B68f480;
case 0x68f483:c.instructions+=4;goto B68f483;
case 0x68f48b:c.instructions+=3;goto B68f48b;
case 0x68f493:c.instructions+=2;goto B68f493;
case 0x68f495:c.instructions+=1;goto B68f495;
case 0x68f497:goto L68f497;
case 0x68f49b:c.instructions+=7;goto B68f49b;
case 0x68f49f:c.instructions+=6;goto B68f49f;
case 0x68f4a2:c.instructions+=5;goto B68f4a2;
case 0x68f4a6:c.instructions+=4;goto B68f4a6;
case 0x68f4aa:c.instructions+=3;goto B68f4aa;
case 0x68f4ae:c.instructions+=2;goto B68f4ae;
case 0x68f4b2:c.instructions+=1;goto B68f4b2;
case 0x68f4b6:goto L68f4b6;
case 0x68f4bd:c.instructions+=13;goto B68f4bd;
case 0x68f4c2:c.instructions+=12;goto B68f4c2;
case 0x68f4c7:c.instructions+=11;goto B68f4c7;
case 0x68f4ca:c.instructions+=10;goto B68f4ca;
case 0x68f4cd:c.instructions+=9;goto B68f4cd;
case 0x68f4d5:c.instructions+=8;goto B68f4d5;
case 0x68f4dd:c.instructions+=7;goto B68f4dd;
case 0x68f4e0:c.instructions+=6;goto B68f4e0;
case 0x68f4e3:c.instructions+=5;goto B68f4e3;
case 0x68f4e6:c.instructions+=4;goto B68f4e6;
case 0x68f4ee:c.instructions+=3;goto B68f4ee;
case 0x68f4f1:c.instructions+=2;goto B68f4f1;
case 0x68f4f3:c.instructions+=1;goto B68f4f3;
case 0x68f4f5:goto L68f4f5;
case 0x68f4fa:goto L68f4fa;
case 0x68f4fe:c.instructions+=3;goto B68f4fe;
case 0x68f502:c.instructions+=2;goto B68f502;
case 0x68f506:c.instructions+=1;goto B68f506;
case 0x68f50b:goto L68f50b;
case 0x68f50e:c.instructions+=9;goto B68f50e;
case 0x68f512:c.instructions+=8;goto B68f512;
case 0x68f519:c.instructions+=7;goto B68f519;
case 0x68f51d:c.instructions+=6;goto B68f51d;
case 0x68f525:c.instructions+=5;goto B68f525;
case 0x68f528:c.instructions+=4;goto B68f528;
case 0x68f530:c.instructions+=3;goto B68f530;
case 0x68f538:c.instructions+=2;goto B68f538;
case 0x68f53a:c.instructions+=1;goto B68f53a;
case 0x68f53c:goto L68f53c;
case 0x68f540:c.instructions+=7;goto B68f540;
case 0x68f544:c.instructions+=6;goto B68f544;
case 0x68f547:c.instructions+=5;goto B68f547;
case 0x68f54b:c.instructions+=4;goto B68f54b;
case 0x68f54f:c.instructions+=3;goto B68f54f;
case 0x68f553:c.instructions+=2;goto B68f553;
case 0x68f557:c.instructions+=1;goto B68f557;
case 0x68f55b:goto L68f55b;
case 0x68f562:c.instructions+=29;goto B68f562;
case 0x68f567:c.instructions+=28;goto B68f567;
case 0x68f56c:c.instructions+=27;goto B68f56c;
case 0x68f56f:c.instructions+=26;goto B68f56f;
case 0x68f574:c.instructions+=25;goto B68f574;
case 0x68f579:c.instructions+=24;goto B68f579;
case 0x68f57f:c.instructions+=23;goto B68f57f;
case 0x68f585:c.instructions+=22;goto B68f585;
case 0x68f58d:c.instructions+=21;goto B68f58d;
case 0x68f595:c.instructions+=20;goto B68f595;
case 0x68f59d:c.instructions+=19;goto B68f59d;
case 0x68f5a5:c.instructions+=18;goto B68f5a5;
case 0x68f5ac:c.instructions+=17;goto B68f5ac;
case 0x68f5af:c.instructions+=16;goto B68f5af;
case 0x68f5b7:c.instructions+=15;goto B68f5b7;
case 0x68f5bf:c.instructions+=14;goto B68f5bf;
case 0x68f5c3:c.instructions+=13;goto B68f5c3;
case 0x68f5c7:c.instructions+=12;goto B68f5c7;
case 0x68f5cb:c.instructions+=11;goto B68f5cb;
case 0x68f5cf:c.instructions+=10;goto B68f5cf;
case 0x68f5d3:c.instructions+=9;goto B68f5d3;
case 0x68f5d6:c.instructions+=8;goto B68f5d6;
case 0x68f5da:c.instructions+=7;goto B68f5da;
case 0x68f5de:c.instructions+=6;goto B68f5de;
case 0x68f5e2:c.instructions+=5;goto B68f5e2;
case 0x68f5e6:c.instructions+=4;goto B68f5e6;
case 0x68f5ea:c.instructions+=3;goto B68f5ea;
case 0x68f5ee:c.instructions+=2;goto B68f5ee;
case 0x68f5f2:c.instructions+=1;goto B68f5f2;
case 0x68f5f7:goto L68f5f7;
case 0x68f5fa:c.instructions+=11;goto B68f5fa;
case 0x68f601:c.instructions+=10;goto B68f601;
case 0x68f609:c.instructions+=9;goto B68f609;
case 0x68f60c:c.instructions+=8;goto B68f60c;
case 0x68f60f:c.instructions+=7;goto B68f60f;
case 0x68f617:c.instructions+=6;goto B68f617;
case 0x68f61a:c.instructions+=5;goto B68f61a;
case 0x68f61d:c.instructions+=4;goto B68f61d;
case 0x68f623:c.instructions+=3;goto B68f623;
case 0x68f628:c.instructions+=2;goto B68f628;
case 0x68f630:c.instructions+=1;goto B68f630;
case 0x68f632:goto L68f632;
case 0x68f635:c.instructions+=2;goto B68f635;
case 0x68f639:c.instructions+=1;goto B68f639;
case 0x68f63d:goto L68f63d;
case 0x68f640:c.instructions+=139;goto B68f640;
case 0x68f645:c.instructions+=138;goto B68f645;
case 0x68f64d:c.instructions+=137;goto B68f64d;
case 0x68f651:c.instructions+=136;goto B68f651;
case 0x68f655:c.instructions+=135;goto B68f655;
case 0x68f658:c.instructions+=134;goto B68f658;
case 0x68f65b:c.instructions+=133;goto B68f65b;
case 0x68f660:c.instructions+=132;goto B68f660;
case 0x68f665:c.instructions+=131;goto B68f665;
case 0x68f668:c.instructions+=130;goto B68f668;
case 0x68f66b:c.instructions+=129;goto B68f66b;
case 0x68f670:c.instructions+=128;goto B68f670;
case 0x68f673:c.instructions+=127;goto B68f673;
case 0x68f676:c.instructions+=126;goto B68f676;
case 0x68f67b:c.instructions+=125;goto B68f67b;
case 0x68f67e:c.instructions+=124;goto B68f67e;
case 0x68f681:c.instructions+=123;goto B68f681;
case 0x68f684:c.instructions+=122;goto B68f684;
case 0x68f687:c.instructions+=121;goto B68f687;
case 0x68f68b:c.instructions+=120;goto B68f68b;
case 0x68f692:c.instructions+=119;goto B68f692;
case 0x68f696:c.instructions+=118;goto B68f696;
case 0x68f69d:c.instructions+=117;goto B68f69d;
case 0x68f6a1:c.instructions+=116;goto B68f6a1;
case 0x68f6a5:c.instructions+=115;goto B68f6a5;
case 0x68f6a9:c.instructions+=114;goto B68f6a9;
case 0x68f6ae:c.instructions+=113;goto B68f6ae;
case 0x68f6b2:c.instructions+=112;goto B68f6b2;
case 0x68f6b7:c.instructions+=111;goto B68f6b7;
case 0x68f6bb:c.instructions+=110;goto B68f6bb;
case 0x68f6c2:c.instructions+=109;goto B68f6c2;
case 0x68f6c6:c.instructions+=108;goto B68f6c6;
case 0x68f6ca:c.instructions+=107;goto B68f6ca;
case 0x68f6d1:c.instructions+=106;goto B68f6d1;
case 0x68f6d5:c.instructions+=105;goto B68f6d5;
case 0x68f6d8:c.instructions+=104;goto B68f6d8;
case 0x68f6dc:c.instructions+=103;goto B68f6dc;
case 0x68f6e0:c.instructions+=102;goto B68f6e0;
case 0x68f6e4:c.instructions+=101;goto B68f6e4;
case 0x68f6e8:c.instructions+=100;goto B68f6e8;
case 0x68f6ec:c.instructions+=99;goto B68f6ec;
case 0x68f6f1:c.instructions+=98;goto B68f6f1;
case 0x68f6f4:c.instructions+=97;goto B68f6f4;
case 0x68f6f9:c.instructions+=96;goto B68f6f9;
case 0x68f6fc:c.instructions+=95;goto B68f6fc;
case 0x68f700:c.instructions+=94;goto B68f700;
case 0x68f704:c.instructions+=93;goto B68f704;
case 0x68f708:c.instructions+=92;goto B68f708;
case 0x68f70c:c.instructions+=91;goto B68f70c;
case 0x68f70f:c.instructions+=90;goto B68f70f;
case 0x68f713:c.instructions+=89;goto B68f713;
case 0x68f71b:c.instructions+=88;goto B68f71b;
case 0x68f722:c.instructions+=87;goto B68f722;
case 0x68f729:c.instructions+=86;goto B68f729;
case 0x68f72d:c.instructions+=85;goto B68f72d;
case 0x68f730:c.instructions+=84;goto B68f730;
case 0x68f733:c.instructions+=83;goto B68f733;
case 0x68f737:c.instructions+=82;goto B68f737;
case 0x68f73b:c.instructions+=81;goto B68f73b;
case 0x68f73f:c.instructions+=80;goto B68f73f;
case 0x68f744:c.instructions+=79;goto B68f744;
case 0x68f749:c.instructions+=78;goto B68f749;
case 0x68f74e:c.instructions+=77;goto B68f74e;
case 0x68f753:c.instructions+=76;goto B68f753;
case 0x68f756:c.instructions+=75;goto B68f756;
case 0x68f759:c.instructions+=74;goto B68f759;
case 0x68f75e:c.instructions+=73;goto B68f75e;
case 0x68f761:c.instructions+=72;goto B68f761;
case 0x68f764:c.instructions+=71;goto B68f764;
case 0x68f769:c.instructions+=70;goto B68f769;
case 0x68f76c:c.instructions+=69;goto B68f76c;
case 0x68f76f:c.instructions+=68;goto B68f76f;
case 0x68f772:c.instructions+=67;goto B68f772;
case 0x68f775:c.instructions+=66;goto B68f775;
case 0x68f779:c.instructions+=65;goto B68f779;
case 0x68f780:c.instructions+=64;goto B68f780;
case 0x68f784:c.instructions+=63;goto B68f784;
case 0x68f78b:c.instructions+=62;goto B68f78b;
case 0x68f78f:c.instructions+=61;goto B68f78f;
case 0x68f793:c.instructions+=60;goto B68f793;
case 0x68f797:c.instructions+=59;goto B68f797;
case 0x68f79c:c.instructions+=58;goto B68f79c;
case 0x68f7a0:c.instructions+=57;goto B68f7a0;
case 0x68f7a5:c.instructions+=56;goto B68f7a5;
case 0x68f7a9:c.instructions+=55;goto B68f7a9;
case 0x68f7b0:c.instructions+=54;goto B68f7b0;
case 0x68f7b4:c.instructions+=53;goto B68f7b4;
case 0x68f7b8:c.instructions+=52;goto B68f7b8;
case 0x68f7bf:c.instructions+=51;goto B68f7bf;
case 0x68f7c3:c.instructions+=50;goto B68f7c3;
case 0x68f7cb:c.instructions+=49;goto B68f7cb;
case 0x68f7cf:c.instructions+=48;goto B68f7cf;
case 0x68f7d3:c.instructions+=47;goto B68f7d3;
case 0x68f7d7:c.instructions+=46;goto B68f7d7;
case 0x68f7db:c.instructions+=45;goto B68f7db;
case 0x68f7e3:c.instructions+=44;goto B68f7e3;
case 0x68f7e8:c.instructions+=43;goto B68f7e8;
case 0x68f7ed:c.instructions+=42;goto B68f7ed;
case 0x68f7f0:c.instructions+=41;goto B68f7f0;
case 0x68f7f3:c.instructions+=40;goto B68f7f3;
case 0x68f7f8:c.instructions+=39;goto B68f7f8;
case 0x68f7fb:c.instructions+=38;goto B68f7fb;
case 0x68f7fe:c.instructions+=37;goto B68f7fe;
case 0x68f803:c.instructions+=36;goto B68f803;
case 0x68f806:c.instructions+=35;goto B68f806;
case 0x68f809:c.instructions+=34;goto B68f809;
case 0x68f80c:c.instructions+=33;goto B68f80c;
case 0x68f80f:c.instructions+=32;goto B68f80f;
case 0x68f813:c.instructions+=31;goto B68f813;
case 0x68f81a:c.instructions+=30;goto B68f81a;
case 0x68f81e:c.instructions+=29;goto B68f81e;
case 0x68f825:c.instructions+=28;goto B68f825;
case 0x68f829:c.instructions+=27;goto B68f829;
case 0x68f82d:c.instructions+=26;goto B68f82d;
case 0x68f831:c.instructions+=25;goto B68f831;
case 0x68f836:c.instructions+=24;goto B68f836;
case 0x68f83a:c.instructions+=23;goto B68f83a;
case 0x68f83f:c.instructions+=22;goto B68f83f;
case 0x68f843:c.instructions+=21;goto B68f843;
case 0x68f84a:c.instructions+=20;goto B68f84a;
case 0x68f84e:c.instructions+=19;goto B68f84e;
case 0x68f852:c.instructions+=18;goto B68f852;
case 0x68f859:c.instructions+=17;goto B68f859;
case 0x68f85d:c.instructions+=16;goto B68f85d;
case 0x68f865:c.instructions+=15;goto B68f865;
case 0x68f869:c.instructions+=14;goto B68f869;
case 0x68f86d:c.instructions+=13;goto B68f86d;
case 0x68f871:c.instructions+=12;goto B68f871;
case 0x68f875:c.instructions+=11;goto B68f875;
case 0x68f87d:c.instructions+=10;goto B68f87d;
case 0x68f880:c.instructions+=9;goto B68f880;
case 0x68f888:c.instructions+=8;goto B68f888;
case 0x68f890:c.instructions+=7;goto B68f890;
case 0x68f893:c.instructions+=6;goto B68f893;
case 0x68f896:c.instructions+=5;goto B68f896;
case 0x68f899:c.instructions+=4;goto B68f899;
case 0x68f8a1:c.instructions+=3;goto B68f8a1;
case 0x68f8a4:c.instructions+=2;goto B68f8a4;
case 0x68f8a6:c.instructions+=1;goto B68f8a6;
case 0x68f8a8:goto L68f8a8;
case 0x68f8ad:goto L68f8ad;
case 0x68f8b1:c.instructions+=3;goto B68f8b1;
case 0x68f8b5:c.instructions+=2;goto B68f8b5;
case 0x68f8b9:c.instructions+=1;goto B68f8b9;
case 0x68f8be:goto L68f8be;
case 0x68f8c1:c.instructions+=9;goto B68f8c1;
case 0x68f8c5:c.instructions+=8;goto B68f8c5;
case 0x68f8cc:c.instructions+=7;goto B68f8cc;
case 0x68f8d0:c.instructions+=6;goto B68f8d0;
case 0x68f8d8:c.instructions+=5;goto B68f8d8;
case 0x68f8db:c.instructions+=4;goto B68f8db;
case 0x68f8e3:c.instructions+=3;goto B68f8e3;
case 0x68f8eb:c.instructions+=2;goto B68f8eb;
case 0x68f8ed:c.instructions+=1;goto B68f8ed;
case 0x68f8ef:goto L68f8ef;
case 0x68f8f3:c.instructions+=7;goto B68f8f3;
case 0x68f8f7:c.instructions+=6;goto B68f8f7;
case 0x68f8fa:c.instructions+=5;goto B68f8fa;
case 0x68f8fe:c.instructions+=4;goto B68f8fe;
case 0x68f902:c.instructions+=3;goto B68f902;
case 0x68f906:c.instructions+=2;goto B68f906;
case 0x68f90a:c.instructions+=1;goto B68f90a;
case 0x68f90e:goto L68f90e;
case 0x68f915:c.instructions+=13;goto B68f915;
case 0x68f91a:c.instructions+=12;goto B68f91a;
case 0x68f91f:c.instructions+=11;goto B68f91f;
case 0x68f922:c.instructions+=10;goto B68f922;
case 0x68f925:c.instructions+=9;goto B68f925;
case 0x68f92d:c.instructions+=8;goto B68f92d;
case 0x68f935:c.instructions+=7;goto B68f935;
case 0x68f938:c.instructions+=6;goto B68f938;
case 0x68f93b:c.instructions+=5;goto B68f93b;
case 0x68f93e:c.instructions+=4;goto B68f93e;
case 0x68f946:c.instructions+=3;goto B68f946;
case 0x68f949:c.instructions+=2;goto B68f949;
case 0x68f94b:c.instructions+=1;goto B68f94b;
case 0x68f94d:goto L68f94d;
case 0x68f952:goto L68f952;
case 0x68f956:c.instructions+=3;goto B68f956;
case 0x68f95a:c.instructions+=2;goto B68f95a;
case 0x68f95e:c.instructions+=1;goto B68f95e;
case 0x68f963:goto L68f963;
case 0x68f966:c.instructions+=9;goto B68f966;
case 0x68f96a:c.instructions+=8;goto B68f96a;
case 0x68f971:c.instructions+=7;goto B68f971;
case 0x68f975:c.instructions+=6;goto B68f975;
case 0x68f97d:c.instructions+=5;goto B68f97d;
case 0x68f980:c.instructions+=4;goto B68f980;
case 0x68f988:c.instructions+=3;goto B68f988;
case 0x68f990:c.instructions+=2;goto B68f990;
case 0x68f992:c.instructions+=1;goto B68f992;
case 0x68f994:goto L68f994;
case 0x68f998:c.instructions+=7;goto B68f998;
case 0x68f99c:c.instructions+=6;goto B68f99c;
case 0x68f99f:c.instructions+=5;goto B68f99f;
case 0x68f9a3:c.instructions+=4;goto B68f9a3;
case 0x68f9a7:c.instructions+=3;goto B68f9a7;
case 0x68f9ab:c.instructions+=2;goto B68f9ab;
case 0x68f9af:c.instructions+=1;goto B68f9af;
case 0x68f9b3:goto L68f9b3;
case 0x68f9ba:c.instructions+=28;goto B68f9ba;
case 0x68f9bf:c.instructions+=27;goto B68f9bf;
case 0x68f9c4:c.instructions+=26;goto B68f9c4;
case 0x68f9c7:c.instructions+=25;goto B68f9c7;
case 0x68f9cc:c.instructions+=24;goto B68f9cc;
case 0x68f9d1:c.instructions+=23;goto B68f9d1;
case 0x68f9d7:c.instructions+=22;goto B68f9d7;
case 0x68f9dd:c.instructions+=21;goto B68f9dd;
case 0x68f9e5:c.instructions+=20;goto B68f9e5;
case 0x68f9ed:c.instructions+=19;goto B68f9ed;
case 0x68f9f5:c.instructions+=18;goto B68f9f5;
case 0x68f9fd:c.instructions+=17;goto B68f9fd;
case 0x68fa00:c.instructions+=16;goto B68fa00;
case 0x68fa08:c.instructions+=15;goto B68fa08;
case 0x68fa10:c.instructions+=14;goto B68fa10;
case 0x68fa14:c.instructions+=13;goto B68fa14;
case 0x68fa18:c.instructions+=12;goto B68fa18;
case 0x68fa1c:c.instructions+=11;goto B68fa1c;
case 0x68fa20:c.instructions+=10;goto B68fa20;
case 0x68fa24:c.instructions+=9;goto B68fa24;
case 0x68fa27:c.instructions+=8;goto B68fa27;
case 0x68fa2b:c.instructions+=7;goto B68fa2b;
case 0x68fa2f:c.instructions+=6;goto B68fa2f;
case 0x68fa33:c.instructions+=5;goto B68fa33;
case 0x68fa37:c.instructions+=4;goto B68fa37;
case 0x68fa3b:c.instructions+=3;goto B68fa3b;
case 0x68fa3f:c.instructions+=2;goto B68fa3f;
case 0x68fa43:c.instructions+=1;goto B68fa43;
case 0x68fa48:goto L68fa48;
case 0x68fa4b:c.instructions+=11;goto B68fa4b;
case 0x68fa52:c.instructions+=10;goto B68fa52;
case 0x68fa5a:c.instructions+=9;goto B68fa5a;
case 0x68fa5d:c.instructions+=8;goto B68fa5d;
case 0x68fa60:c.instructions+=7;goto B68fa60;
case 0x68fa68:c.instructions+=6;goto B68fa68;
case 0x68fa6b:c.instructions+=5;goto B68fa6b;
case 0x68fa6e:c.instructions+=4;goto B68fa6e;
case 0x68fa74:c.instructions+=3;goto B68fa74;
case 0x68fa79:c.instructions+=2;goto B68fa79;
case 0x68fa81:c.instructions+=1;goto B68fa81;
case 0x68fa83:goto L68fa83;
case 0x68fa86:c.instructions+=2;goto B68fa86;
case 0x68fa8a:c.instructions+=1;goto B68fa8a;
case 0x68fa8e:goto L68fa8e;
case 0x68fa91:c.instructions+=49;goto B68fa91;
case 0x68fa96:c.instructions+=48;goto B68fa96;
case 0x68fa9e:c.instructions+=47;goto B68fa9e;
case 0x68faa2:c.instructions+=46;goto B68faa2;
case 0x68faa6:c.instructions+=45;goto B68faa6;
case 0x68faa9:c.instructions+=44;goto B68faa9;
case 0x68faac:c.instructions+=43;goto B68faac;
case 0x68fab1:c.instructions+=42;goto B68fab1;
case 0x68fab6:c.instructions+=41;goto B68fab6;
case 0x68fab9:c.instructions+=40;goto B68fab9;
case 0x68fabc:c.instructions+=39;goto B68fabc;
case 0x68fac1:c.instructions+=38;goto B68fac1;
case 0x68fac4:c.instructions+=37;goto B68fac4;
case 0x68fac7:c.instructions+=36;goto B68fac7;
case 0x68facc:c.instructions+=35;goto B68facc;
case 0x68facf:c.instructions+=34;goto B68facf;
case 0x68fad2:c.instructions+=33;goto B68fad2;
case 0x68fad5:c.instructions+=32;goto B68fad5;
case 0x68fad8:c.instructions+=31;goto B68fad8;
case 0x68fadc:c.instructions+=30;goto B68fadc;
case 0x68fae3:c.instructions+=29;goto B68fae3;
case 0x68fae7:c.instructions+=28;goto B68fae7;
case 0x68faee:c.instructions+=27;goto B68faee;
case 0x68faf2:c.instructions+=26;goto B68faf2;
case 0x68faf6:c.instructions+=25;goto B68faf6;
case 0x68fafa:c.instructions+=24;goto B68fafa;
case 0x68faff:c.instructions+=23;goto B68faff;
case 0x68fb03:c.instructions+=22;goto B68fb03;
case 0x68fb08:c.instructions+=21;goto B68fb08;
case 0x68fb0c:c.instructions+=20;goto B68fb0c;
case 0x68fb13:c.instructions+=19;goto B68fb13;
case 0x68fb17:c.instructions+=18;goto B68fb17;
case 0x68fb1b:c.instructions+=17;goto B68fb1b;
case 0x68fb22:c.instructions+=16;goto B68fb22;
case 0x68fb26:c.instructions+=15;goto B68fb26;
case 0x68fb29:c.instructions+=14;goto B68fb29;
case 0x68fb2d:c.instructions+=13;goto B68fb2d;
case 0x68fb31:c.instructions+=12;goto B68fb31;
case 0x68fb35:c.instructions+=11;goto B68fb35;
case 0x68fb39:c.instructions+=10;goto B68fb39;
case 0x68fb3d:c.instructions+=9;goto B68fb3d;
case 0x68fb40:c.instructions+=8;goto B68fb40;
case 0x68fb45:c.instructions+=7;goto B68fb45;
case 0x68fb4a:c.instructions+=6;goto B68fb4a;
case 0x68fb4d:c.instructions+=5;goto B68fb4d;
case 0x68fb51:c.instructions+=4;goto B68fb51;
case 0x68fb53:c.instructions+=3;goto B68fb53;
case 0x68fb54:c.instructions+=2;goto B68fb54;
case 0x68fb56:c.instructions+=1;goto B68fb56;
case 0x68fb59:goto L68fb59;
case 0x68fb5b:c.instructions+=136;goto B68fb5b;
case 0x68fb5e:c.instructions+=135;goto B68fb5e;
case 0x68fb62:c.instructions+=134;goto B68fb62;
case 0x68fb66:c.instructions+=133;goto B68fb66;
case 0x68fb68:c.instructions+=132;goto B68fb68;
case 0x68fb6b:c.instructions+=131;goto B68fb6b;
case 0x68fb6e:c.instructions+=130;goto B68fb6e;
case 0x68fb72:c.instructions+=129;goto B68fb72;
case 0x68fb76:c.instructions+=128;goto B68fb76;
case 0x68fb7a:c.instructions+=127;goto B68fb7a;
case 0x68fb7d:c.instructions+=126;goto B68fb7d;
case 0x68fb80:c.instructions+=125;goto B68fb80;
case 0x68fb83:c.instructions+=124;goto B68fb83;
case 0x68fb86:c.instructions+=123;goto B68fb86;
case 0x68fb8a:c.instructions+=122;goto B68fb8a;
case 0x68fb8f:c.instructions+=121;goto B68fb8f;
case 0x68fb93:c.instructions+=120;goto B68fb93;
case 0x68fb96:c.instructions+=119;goto B68fb96;
case 0x68fb9a:c.instructions+=118;goto B68fb9a;
case 0x68fb9e:c.instructions+=117;goto B68fb9e;
case 0x68fba1:c.instructions+=116;goto B68fba1;
case 0x68fba4:c.instructions+=115;goto B68fba4;
case 0x68fba9:c.instructions+=114;goto B68fba9;
case 0x68fbae:c.instructions+=113;goto B68fbae;
case 0x68fbb1:c.instructions+=112;goto B68fbb1;
case 0x68fbb4:c.instructions+=111;goto B68fbb4;
case 0x68fbb8:c.instructions+=110;goto B68fbb8;
case 0x68fbbb:c.instructions+=109;goto B68fbbb;
case 0x68fbbe:c.instructions+=108;goto B68fbbe;
case 0x68fbc3:c.instructions+=107;goto B68fbc3;
case 0x68fbc6:c.instructions+=106;goto B68fbc6;
case 0x68fbc9:c.instructions+=105;goto B68fbc9;
case 0x68fbce:c.instructions+=104;goto B68fbce;
case 0x68fbd3:c.instructions+=103;goto B68fbd3;
case 0x68fbd8:c.instructions+=102;goto B68fbd8;
case 0x68fbdb:c.instructions+=101;goto B68fbdb;
case 0x68fbde:c.instructions+=100;goto B68fbde;
case 0x68fbe2:c.instructions+=99;goto B68fbe2;
case 0x68fbe5:c.instructions+=98;goto B68fbe5;
case 0x68fbe8:c.instructions+=97;goto B68fbe8;
case 0x68fbeb:c.instructions+=96;goto B68fbeb;
case 0x68fbee:c.instructions+=95;goto B68fbee;
case 0x68fbf3:c.instructions+=94;goto B68fbf3;
case 0x68fbf9:c.instructions+=93;goto B68fbf9;
case 0x68fbfc:c.instructions+=92;goto B68fbfc;
case 0x68fbff:c.instructions+=91;goto B68fbff;
case 0x68fc05:c.instructions+=90;goto B68fc05;
case 0x68fc0b:c.instructions+=89;goto B68fc0b;
case 0x68fc11:c.instructions+=88;goto B68fc11;
case 0x68fc17:c.instructions+=87;goto B68fc17;
case 0x68fc1d:c.instructions+=86;goto B68fc1d;
case 0x68fc23:c.instructions+=85;goto B68fc23;
case 0x68fc27:c.instructions+=84;goto B68fc27;
case 0x68fc2b:c.instructions+=83;goto B68fc2b;
case 0x68fc2f:c.instructions+=82;goto B68fc2f;
case 0x68fc33:c.instructions+=81;goto B68fc33;
case 0x68fc37:c.instructions+=80;goto B68fc37;
case 0x68fc3b:c.instructions+=79;goto B68fc3b;
case 0x68fc3e:c.instructions+=78;goto B68fc3e;
case 0x68fc42:c.instructions+=77;goto B68fc42;
case 0x68fc46:c.instructions+=76;goto B68fc46;
case 0x68fc4a:c.instructions+=75;goto B68fc4a;
case 0x68fc4d:c.instructions+=74;goto B68fc4d;
case 0x68fc50:c.instructions+=73;goto B68fc50;
case 0x68fc53:c.instructions+=72;goto B68fc53;
case 0x68fc56:c.instructions+=71;goto B68fc56;
case 0x68fc5b:c.instructions+=70;goto B68fc5b;
case 0x68fc61:c.instructions+=69;goto B68fc61;
case 0x68fc64:c.instructions+=68;goto B68fc64;
case 0x68fc67:c.instructions+=67;goto B68fc67;
case 0x68fc6d:c.instructions+=66;goto B68fc6d;
case 0x68fc73:c.instructions+=65;goto B68fc73;
case 0x68fc79:c.instructions+=64;goto B68fc79;
case 0x68fc7f:c.instructions+=63;goto B68fc7f;
case 0x68fc85:c.instructions+=62;goto B68fc85;
case 0x68fc8b:c.instructions+=61;goto B68fc8b;
case 0x68fc8f:c.instructions+=60;goto B68fc8f;
case 0x68fc93:c.instructions+=59;goto B68fc93;
case 0x68fc97:c.instructions+=58;goto B68fc97;
case 0x68fc9b:c.instructions+=57;goto B68fc9b;
case 0x68fc9f:c.instructions+=56;goto B68fc9f;
case 0x68fca3:c.instructions+=55;goto B68fca3;
case 0x68fca7:c.instructions+=54;goto B68fca7;
case 0x68fcab:c.instructions+=53;goto B68fcab;
case 0x68fcaf:c.instructions+=52;goto B68fcaf;
case 0x68fcb3:c.instructions+=51;goto B68fcb3;
case 0x68fcb6:c.instructions+=50;goto B68fcb6;
case 0x68fcb9:c.instructions+=49;goto B68fcb9;
case 0x68fcbc:c.instructions+=48;goto B68fcbc;
case 0x68fcbf:c.instructions+=47;goto B68fcbf;
case 0x68fcc4:c.instructions+=46;goto B68fcc4;
case 0x68fcca:c.instructions+=45;goto B68fcca;
case 0x68fccd:c.instructions+=44;goto B68fccd;
case 0x68fcd0:c.instructions+=43;goto B68fcd0;
case 0x68fcd6:c.instructions+=42;goto B68fcd6;
case 0x68fcdc:c.instructions+=41;goto B68fcdc;
case 0x68fce2:c.instructions+=40;goto B68fce2;
case 0x68fce8:c.instructions+=39;goto B68fce8;
case 0x68fcee:c.instructions+=38;goto B68fcee;
case 0x68fcf4:c.instructions+=37;goto B68fcf4;
case 0x68fcf8:c.instructions+=36;goto B68fcf8;
case 0x68fcfc:c.instructions+=35;goto B68fcfc;
case 0x68fd00:c.instructions+=34;goto B68fd00;
case 0x68fd04:c.instructions+=33;goto B68fd04;
case 0x68fd08:c.instructions+=32;goto B68fd08;
case 0x68fd0c:c.instructions+=31;goto B68fd0c;
case 0x68fd10:c.instructions+=30;goto B68fd10;
case 0x68fd14:c.instructions+=29;goto B68fd14;
case 0x68fd18:c.instructions+=28;goto B68fd18;
case 0x68fd1c:c.instructions+=27;goto B68fd1c;
case 0x68fd1f:c.instructions+=26;goto B68fd1f;
case 0x68fd22:c.instructions+=25;goto B68fd22;
case 0x68fd25:c.instructions+=24;goto B68fd25;
case 0x68fd28:c.instructions+=23;goto B68fd28;
case 0x68fd2d:c.instructions+=22;goto B68fd2d;
case 0x68fd33:c.instructions+=21;goto B68fd33;
case 0x68fd36:c.instructions+=20;goto B68fd36;
case 0x68fd39:c.instructions+=19;goto B68fd39;
case 0x68fd3f:c.instructions+=18;goto B68fd3f;
case 0x68fd45:c.instructions+=17;goto B68fd45;
case 0x68fd4b:c.instructions+=16;goto B68fd4b;
case 0x68fd51:c.instructions+=15;goto B68fd51;
case 0x68fd57:c.instructions+=14;goto B68fd57;
case 0x68fd5d:c.instructions+=13;goto B68fd5d;
case 0x68fd61:c.instructions+=12;goto B68fd61;
case 0x68fd65:c.instructions+=11;goto B68fd65;
case 0x68fd69:c.instructions+=10;goto B68fd69;
case 0x68fd6d:c.instructions+=9;goto B68fd6d;
case 0x68fd71:c.instructions+=8;goto B68fd71;
case 0x68fd75:c.instructions+=7;goto B68fd75;
case 0x68fd79:c.instructions+=6;goto B68fd79;
case 0x68fd7d:c.instructions+=5;goto B68fd7d;
case 0x68fd7f:c.instructions+=4;goto B68fd7f;
case 0x68fd83:c.instructions+=3;goto B68fd83;
case 0x68fd86:c.instructions+=2;goto B68fd86;
case 0x68fd88:c.instructions+=1;goto B68fd88;
case 0x68fd8b:goto L68fd8b;
case 0x68fd8f:c.instructions+=54;goto B68fd8f;
case 0x68fd93:c.instructions+=53;goto B68fd93;
case 0x68fd97:c.instructions+=52;goto B68fd97;
case 0x68fd9b:c.instructions+=51;goto B68fd9b;
case 0x68fd9e:c.instructions+=50;goto B68fd9e;
case 0x68fda1:c.instructions+=49;goto B68fda1;
case 0x68fda5:c.instructions+=48;goto B68fda5;
case 0x68fda9:c.instructions+=47;goto B68fda9;
case 0x68fdad:c.instructions+=46;goto B68fdad;
case 0x68fdb0:c.instructions+=45;goto B68fdb0;
case 0x68fdb3:c.instructions+=44;goto B68fdb3;
case 0x68fdb7:c.instructions+=43;goto B68fdb7;
case 0x68fdbb:c.instructions+=42;goto B68fdbb;
case 0x68fdbf:c.instructions+=41;goto B68fdbf;
case 0x68fdc4:c.instructions+=40;goto B68fdc4;
case 0x68fdc9:c.instructions+=39;goto B68fdc9;
case 0x68fdcd:c.instructions+=38;goto B68fdcd;
case 0x68fdd2:c.instructions+=37;goto B68fdd2;
case 0x68fdd7:c.instructions+=36;goto B68fdd7;
case 0x68fddb:c.instructions+=35;goto B68fddb;
case 0x68fdde:c.instructions+=34;goto B68fdde;
case 0x68fde1:c.instructions+=33;goto B68fde1;
case 0x68fde4:c.instructions+=32;goto B68fde4;
case 0x68fde7:c.instructions+=31;goto B68fde7;
case 0x68fdea:c.instructions+=30;goto B68fdea;
case 0x68fded:c.instructions+=29;goto B68fded;
case 0x68fdf0:c.instructions+=28;goto B68fdf0;
case 0x68fdf4:c.instructions+=27;goto B68fdf4;
case 0x68fdf7:c.instructions+=26;goto B68fdf7;
case 0x68fdfa:c.instructions+=25;goto B68fdfa;
case 0x68fdff:c.instructions+=24;goto B68fdff;
case 0x68fe03:c.instructions+=23;goto B68fe03;
case 0x68fe07:c.instructions+=22;goto B68fe07;
case 0x68fe0b:c.instructions+=21;goto B68fe0b;
case 0x68fe0f:c.instructions+=20;goto B68fe0f;
case 0x68fe13:c.instructions+=19;goto B68fe13;
case 0x68fe17:c.instructions+=18;goto B68fe17;
case 0x68fe1a:c.instructions+=17;goto B68fe1a;
case 0x68fe1e:c.instructions+=16;goto B68fe1e;
case 0x68fe21:c.instructions+=15;goto B68fe21;
case 0x68fe25:c.instructions+=14;goto B68fe25;
case 0x68fe29:c.instructions+=13;goto B68fe29;
case 0x68fe2c:c.instructions+=12;goto B68fe2c;
case 0x68fe30:c.instructions+=11;goto B68fe30;
case 0x68fe34:c.instructions+=10;goto B68fe34;
case 0x68fe38:c.instructions+=9;goto B68fe38;
case 0x68fe3c:c.instructions+=8;goto B68fe3c;
case 0x68fe40:c.instructions+=7;goto B68fe40;
case 0x68fe44:c.instructions+=6;goto B68fe44;
case 0x68fe48:c.instructions+=5;goto B68fe48;
case 0x68fe4c:c.instructions+=4;goto B68fe4c;
case 0x68fe51:c.instructions+=3;goto B68fe51;
case 0x68fe53:c.instructions+=2;goto B68fe53;
case 0x68fe57:c.instructions+=1;goto B68fe57;
case 0x68fe5a:goto L68fe5a;
case 0x68fe5e:c.instructions+=19;goto B68fe5e;
case 0x68fe60:c.instructions+=18;goto B68fe60;
case 0x68fe65:c.instructions+=17;goto B68fe65;
case 0x68fe6c:c.instructions+=16;goto B68fe6c;
case 0x68fe6f:c.instructions+=15;goto B68fe6f;
case 0x68fe76:c.instructions+=14;goto B68fe76;
case 0x68fe7b:c.instructions+=13;goto B68fe7b;
case 0x68fe80:c.instructions+=12;goto B68fe80;
case 0x68fe83:c.instructions+=11;goto B68fe83;
case 0x68fe86:c.instructions+=10;goto B68fe86;
case 0x68fe89:c.instructions+=9;goto B68fe89;
case 0x68fe8d:c.instructions+=8;goto B68fe8d;
case 0x68fe91:c.instructions+=7;goto B68fe91;
case 0x68fe95:c.instructions+=6;goto B68fe95;
case 0x68fe99:c.instructions+=5;goto B68fe99;
case 0x68fe9d:c.instructions+=4;goto B68fe9d;
case 0x68fea1:c.instructions+=3;goto B68fea1;
case 0x68fea5:c.instructions+=2;goto B68fea5;
case 0x68fea7:c.instructions+=1;goto B68fea7;
case 0x68feaa:goto L68feaa;
case 0x68feac:c.instructions+=8;goto B68feac;
case 0x68feaf:c.instructions+=7;goto B68feaf;
case 0x68feb3:c.instructions+=6;goto B68feb3;
case 0x68feb5:c.instructions+=5;goto B68feb5;
case 0x68feb8:c.instructions+=4;goto B68feb8;
case 0x68feba:c.instructions+=3;goto B68feba;
case 0x68febd:c.instructions+=2;goto B68febd;
case 0x68febe:c.instructions+=1;goto B68febe;
case 0x68fec3:goto L68fec3;
case 0x68fec6:c.instructions+=57;goto B68fec6;
case 0x68fec9:c.instructions+=56;goto B68fec9;
case 0x68fecd:c.instructions+=55;goto B68fecd;
case 0x68fed0:c.instructions+=54;goto B68fed0;
case 0x68fed3:c.instructions+=53;goto B68fed3;
case 0x68fed7:c.instructions+=52;goto B68fed7;
case 0x68fedc:c.instructions+=51;goto B68fedc;
case 0x68fee0:c.instructions+=50;goto B68fee0;
case 0x68fee3:c.instructions+=49;goto B68fee3;
case 0x68fee7:c.instructions+=48;goto B68fee7;
case 0x68feeb:c.instructions+=47;goto B68feeb;
case 0x68fef2:c.instructions+=46;goto B68fef2;
case 0x68fef9:c.instructions+=45;goto B68fef9;
case 0x68fefd:c.instructions+=44;goto B68fefd;
case 0x68ff00:c.instructions+=43;goto B68ff00;
case 0x68ff03:c.instructions+=42;goto B68ff03;
case 0x68ff06:c.instructions+=41;goto B68ff06;
case 0x68ff0a:c.instructions+=40;goto B68ff0a;
case 0x68ff0e:c.instructions+=39;goto B68ff0e;
case 0x68ff11:c.instructions+=38;goto B68ff11;
case 0x68ff14:c.instructions+=37;goto B68ff14;
case 0x68ff18:c.instructions+=36;goto B68ff18;
case 0x68ff1c:c.instructions+=35;goto B68ff1c;
case 0x68ff20:c.instructions+=34;goto B68ff20;
case 0x68ff23:c.instructions+=33;goto B68ff23;
case 0x68ff27:c.instructions+=32;goto B68ff27;
case 0x68ff2a:c.instructions+=31;goto B68ff2a;
case 0x68ff2d:c.instructions+=30;goto B68ff2d;
case 0x68ff30:c.instructions+=29;goto B68ff30;
case 0x68ff33:c.instructions+=28;goto B68ff33;
case 0x68ff37:c.instructions+=27;goto B68ff37;
case 0x68ff3b:c.instructions+=26;goto B68ff3b;
case 0x68ff3f:c.instructions+=25;goto B68ff3f;
case 0x68ff43:c.instructions+=24;goto B68ff43;
case 0x68ff47:c.instructions+=23;goto B68ff47;
case 0x68ff4a:c.instructions+=22;goto B68ff4a;
case 0x68ff4d:c.instructions+=21;goto B68ff4d;
case 0x68ff50:c.instructions+=20;goto B68ff50;
case 0x68ff53:c.instructions+=19;goto B68ff53;
case 0x68ff57:c.instructions+=18;goto B68ff57;
case 0x68ff5b:c.instructions+=17;goto B68ff5b;
case 0x68ff5f:c.instructions+=16;goto B68ff5f;
case 0x68ff63:c.instructions+=15;goto B68ff63;
case 0x68ff67:c.instructions+=14;goto B68ff67;
case 0x68ff6a:c.instructions+=13;goto B68ff6a;
case 0x68ff6d:c.instructions+=12;goto B68ff6d;
case 0x68ff70:c.instructions+=11;goto B68ff70;
case 0x68ff73:c.instructions+=10;goto B68ff73;
case 0x68ff77:c.instructions+=9;goto B68ff77;
case 0x68ff7b:c.instructions+=8;goto B68ff7b;
case 0x68ff7f:c.instructions+=7;goto B68ff7f;
case 0x68ff83:c.instructions+=6;goto B68ff83;
case 0x68ff87:c.instructions+=5;goto B68ff87;
case 0x68ff89:c.instructions+=4;goto B68ff89;
case 0x68ff8d:c.instructions+=3;goto B68ff8d;
case 0x68ff90:c.instructions+=2;goto B68ff90;
case 0x68ff92:c.instructions+=1;goto B68ff92;
case 0x68ff95:goto L68ff95;
case 0x68ff97:c.instructions+=8;goto B68ff97;
case 0x68ff9a:c.instructions+=7;goto B68ff9a;
case 0x68ff9e:c.instructions+=6;goto B68ff9e;
case 0x68ffa0:c.instructions+=5;goto B68ffa0;
case 0x68ffa3:c.instructions+=4;goto B68ffa3;
case 0x68ffa5:c.instructions+=3;goto B68ffa5;
case 0x68ffa8:c.instructions+=2;goto B68ffa8;
case 0x68ffa9:c.instructions+=1;goto B68ffa9;
case 0x68ffae:goto L68ffae;
case 0x68ffb1:c.instructions+=19;goto B68ffb1;
case 0x68ffb5:c.instructions+=18;goto B68ffb5;
case 0x68ffba:c.instructions+=17;goto B68ffba;
case 0x68ffbd:c.instructions+=16;goto B68ffbd;
case 0x68ffc0:c.instructions+=15;goto B68ffc0;
case 0x68ffc8:c.instructions+=14;goto B68ffc8;
case 0x68ffd0:c.instructions+=13;goto B68ffd0;
case 0x68ffd3:c.instructions+=12;goto B68ffd3;
case 0x68ffd6:c.instructions+=11;goto B68ffd6;
case 0x68ffd9:c.instructions+=10;goto B68ffd9;
case 0x68ffdc:c.instructions+=9;goto B68ffdc;
case 0x68ffdf:c.instructions+=8;goto B68ffdf;
case 0x68ffe2:c.instructions+=7;goto B68ffe2;
case 0x68ffe6:c.instructions+=6;goto B68ffe6;
case 0x68ffea:c.instructions+=5;goto B68ffea;
case 0x68ffee:c.instructions+=4;goto B68ffee;
case 0x68fff2:c.instructions+=3;goto B68fff2;
case 0x68fff6:c.instructions+=2;goto B68fff6;
case 0x68fffa:c.instructions+=1;goto B68fffa;
default:missing_instruction(c.pc);}
B68f003:L68f003:{c.instructions+=4;NFSU2_TR(0x68f003);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f007:{NFSU2_TR(0x68f007);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f00b:{NFSU2_TR(0x68f00b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f00f:{NFSU2_TR(0x68f00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f014ull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68f014:L68f014:{c.instructions+=12;NFSU2_TR(0x68f014);
__builtin_memmove((R+4400),(R+4352),8);
}
B68f017:{NFSU2_TR(0x68f017);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f01b:{NFSU2_TR(0x68f01b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f01f:{NFSU2_TR(0x68f01f);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x7b7198))));
}
B68f026:{NFSU2_TR(0x68f026);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68f02a:{NFSU2_TR(0x68f02a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f02e:{NFSU2_TR(0x68f02e);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71a0))));}
}
B68f036:{NFSU2_TR(0x68f036);
w4(R+4,u32(r8(R+4400)));
}
B68f039:{NFSU2_TR(0x68f039);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68f03c:{NFSU2_TR(0x68f03c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f040:{NFSU2_TR(0x68f040);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f042:{NFSU2_TR(0x68f042);
if(r1(R+518)){{goto L68f063;}}
}
B68f044:L68f044:{c.instructions+=8;NFSU2_TR(0x68f044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w8(R+4400,u64(r4(U+0)));
}
B68f048:{NFSU2_TR(0x68f048);
{SPILL();c.pc=0x68f048u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f04c:{NFSU2_TR(0x68f04c);
__builtin_memmove((R+4404),(R+4400),4);
}
B68f04f:{NFSU2_TR(0x68f04f);
{SPILL();c.pc=0x68f04fu;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f053:{NFSU2_TR(0x68f053);
{SPILL();c.pc=0x68f053u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f057:{NFSU2_TR(0x68f057);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f05b:{NFSU2_TR(0x68f05b);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68f05f:{NFSU2_TR(0x68f05f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f063:L68f063:{c.instructions+=6;NFSU2_TR(0x68f063);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x7b71a8))));
}
B68f06a:{NFSU2_TR(0x68f06a);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68f06d:{NFSU2_TR(0x68f06d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f071:{NFSU2_TR(0x68f071);
w2(R+4260,0xffffu);
}
B68f073:{NFSU2_TR(0x68f073);
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
B68f076:{NFSU2_TR(0x68f076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68f079:L68f079:{c.instructions+=18;NFSU2_TR(0x68f079);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f07d:{NFSU2_TR(0x68f07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68f080:{NFSU2_TR(0x68f080);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68f083:{NFSU2_TR(0x68f083);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68f087:{NFSU2_TR(0x68f087);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f08b:{NFSU2_TR(0x68f08b);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68f08f:{NFSU2_TR(0x68f08f);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68f093:{NFSU2_TR(0x68f093);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f097:{NFSU2_TR(0x68f097);
{SPILL();c.pc=0x68f097u;V r_=user_op(c,524533,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B68f09b:{NFSU2_TR(0x68f09b);
__builtin_memmove((R+4384),(R+4368),8);
}
B68f09e:{NFSU2_TR(0x68f09e);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68f0a2:{NFSU2_TR(0x68f0a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f0a6:{NFSU2_TR(0x68f0a6);
{SPILL();c.pc=0x68f0a6u;V r_=user_op(c,524535,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B68f0aa:{NFSU2_TR(0x68f0aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f0ae:{NFSU2_TR(0x68f0ae);
{SPILL();c.pc=0x68f0aeu;V r_=user_op(c,524536,{rv<8>((R+4368)),rv<8>((R+4384))});SPILL();wv<8>((R+4368),r_);}
}
B68f0b2:{NFSU2_TR(0x68f0b2);
u8 U[4];
w4(U+0,u32(r8(R+4368)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f0b6:{NFSU2_TR(0x68f0b6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68f0ba:{NFSU2_TR(0x68f0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f0bfull));
TAIL_STATIC(0x6d4460u,6d4);
}
B68f0bf:L68f0bf:{c.instructions+=14;NFSU2_TR(0x68f0bf);
__builtin_memmove((R+4368),(R+4352),8);
}
B68f0c2:{NFSU2_TR(0x68f0c2);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x7b7190))));
}
B68f0c9:{NFSU2_TR(0x68f0c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f0cd:{NFSU2_TR(0x68f0cd);
{wv<8>((R+4352),uo::pfcmpge<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71a0))));}
}
B68f0d5:{NFSU2_TR(0x68f0d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68f0d9:{NFSU2_TR(0x68f0d9);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B68f0dc:{NFSU2_TR(0x68f0dc);
w4(R+4,u32(r8(R+4352)));
}
B68f0df:{NFSU2_TR(0x68f0df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B68f0e2:{NFSU2_TR(0x68f0e2);
__builtin_memmove((R+4352),(R+4368),8);
}
B68f0e5:{NFSU2_TR(0x68f0e5);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68f0e8:{NFSU2_TR(0x68f0e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f0ee:{NFSU2_TR(0x68f0ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B68f0f3:{NFSU2_TR(0x68f0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68f0f7:{NFSU2_TR(0x68f0f7);
if(r1(R+518)){{goto L68f104;}}
}
B68f0f9:L68f0f9:{c.instructions+=3;NFSU2_TR(0x68f0f9);
__builtin_memmove((R+4372),(R+4368),4);
}
B68f0fc:{NFSU2_TR(0x68f0fc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B68f100:{NFSU2_TR(0x68f100);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f104:L68f104:{c.instructions+=8;NFSU2_TR(0x68f104);
__builtin_memmove((R+4404),(R+4352),4);
}
B68f107:{NFSU2_TR(0x68f107);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68f10a:{NFSU2_TR(0x68f10a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f10e:{NFSU2_TR(0x68f10e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f112:{NFSU2_TR(0x68f112);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f116:{NFSU2_TR(0x68f116);
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
B68f119:{NFSU2_TR(0x68f119);
w2(R+4260,0xffffu);
}
B68f11b:{NFSU2_TR(0x68f11b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68f11e:L68f11e:{c.instructions+=52;NFSU2_TR(0x68f11e);
__builtin_memmove((R+28),(R+28),4);
}
B68f120:{NFSU2_TR(0x68f120);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68f121:{NFSU2_TR(0x68f121);
__builtin_memmove((R+20),(R+16),4);
}
B68f123:{NFSU2_TR(0x68f123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B68f129:{NFSU2_TR(0x68f129);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B68f12c:{NFSU2_TR(0x68f12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f12f:{NFSU2_TR(0x68f12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68f132:{NFSU2_TR(0x68f132);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68f135:{NFSU2_TR(0x68f135);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f139:{NFSU2_TR(0x68f139);
__builtin_memmove((R+4384),(R+4352),8);
}
B68f13c:{NFSU2_TR(0x68f13c);
__builtin_memmove((R+4400),(R+4368),8);
}
B68f13f:{NFSU2_TR(0x68f13f);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B68f143:{NFSU2_TR(0x68f143);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f148:{NFSU2_TR(0x68f148);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B68f14b:{NFSU2_TR(0x68f14b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68f14f:{NFSU2_TR(0x68f14f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f154:{NFSU2_TR(0x68f154);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68f158:{NFSU2_TR(0x68f158);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f15d:{NFSU2_TR(0x68f15d);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B68f161:{NFSU2_TR(0x68f161);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68f165:{NFSU2_TR(0x68f165);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f169:{NFSU2_TR(0x68f169);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68f16d:{NFSU2_TR(0x68f16d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68f171:{NFSU2_TR(0x68f171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f174:{NFSU2_TR(0x68f174);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68f178:{NFSU2_TR(0x68f178);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B68f17c:{NFSU2_TR(0x68f17c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68f180:{NFSU2_TR(0x68f180);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f184:{NFSU2_TR(0x68f184);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B68f187:{NFSU2_TR(0x68f187);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B68f18b:{NFSU2_TR(0x68f18b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f190:{NFSU2_TR(0x68f190);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f195:{NFSU2_TR(0x68f195);
__builtin_memmove((R+4368),(R+4416),8);
}
B68f198:{NFSU2_TR(0x68f198);
__builtin_memmove((R+4400),(R+4432),8);
}
B68f19b:{NFSU2_TR(0x68f19b);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68f19f:{NFSU2_TR(0x68f19f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68f1a3:{NFSU2_TR(0x68f1a3);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B68f1a7:{NFSU2_TR(0x68f1a7);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B68f1ab:{NFSU2_TR(0x68f1ab);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68f1af:{NFSU2_TR(0x68f1af);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B68f1b3:{NFSU2_TR(0x68f1b3);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68f1b7:{NFSU2_TR(0x68f1b7);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B68f1bb:{NFSU2_TR(0x68f1bb);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68f1bf:{NFSU2_TR(0x68f1bf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68f1c3:{NFSU2_TR(0x68f1c3);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68f1c7:{NFSU2_TR(0x68f1c7);
{wv<8>((R+4384),uo::pfacc<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f1cb:{NFSU2_TR(0x68f1cb);
{wv<8>((R+4384),uo::pfcmpgt<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B68f1cf:{NFSU2_TR(0x68f1cf);
{wv<8>((R+4384),uo::packsswb<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68f1d2:{NFSU2_TR(0x68f1d2);
w4(R+0,u32(r8(R+4384)));
}
B68f1d5:{NFSU2_TR(0x68f1d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f1da:{NFSU2_TR(0x68f1da);
__builtin_memmove((R+4352),gp(0x7b7180),8);
}
B68f1e1:{NFSU2_TR(0x68f1e1);
if(r1(R+518)){{goto L68f1fc;}}
}
B68f1e3:L68f1e3:{c.instructions+=7;NFSU2_TR(0x68f1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f1e6:{NFSU2_TR(0x68f1e6);
__builtin_memmove((R+4368),(R+4352),8);
}
B68f1e9:{NFSU2_TR(0x68f1e9);
__builtin_memmove((R+4384),(R+4352),8);
}
B68f1ec:{NFSU2_TR(0x68f1ec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(U+0))));
}
B68f1ef:{NFSU2_TR(0x68f1ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(U+4))));
}
B68f1f3:{NFSU2_TR(0x68f1f3);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B68f1f7:{NFSU2_TR(0x68f1f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f1fc:L68f1fc:{c.instructions+=2;NFSU2_TR(0x68f1fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f201:{NFSU2_TR(0x68f201);
if(r1(R+518)){{goto L68f21d;}}
}
B68f203:L68f203:{c.instructions+=7;NFSU2_TR(0x68f203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68f206:{NFSU2_TR(0x68f206);
__builtin_memmove((R+4368),(R+4352),8);
}
B68f209:{NFSU2_TR(0x68f209);
__builtin_memmove((R+4384),(R+4352),8);
}
B68f20c:{NFSU2_TR(0x68f20c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(U+0))));
}
B68f20f:{NFSU2_TR(0x68f20f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(U+4))));
}
B68f213:{NFSU2_TR(0x68f213);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f218:{NFSU2_TR(0x68f218);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f21d:L68f21d:{c.instructions+=25;NFSU2_TR(0x68f21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68f220:{NFSU2_TR(0x68f220);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B68f225:{NFSU2_TR(0x68f225);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B68f22a:{NFSU2_TR(0x68f22a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68f22d:{NFSU2_TR(0x68f22d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B68f231:{NFSU2_TR(0x68f231);
__builtin_memmove((R+4400),(R+4448),8);
}
B68f234:{NFSU2_TR(0x68f234);
__builtin_memmove((R+4432),(R+4464),8);
}
B68f237:{NFSU2_TR(0x68f237);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B68f23b:{NFSU2_TR(0x68f23b);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f240:{NFSU2_TR(0x68f240);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B68f244:{NFSU2_TR(0x68f244);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f249:{NFSU2_TR(0x68f249);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B68f24d:{NFSU2_TR(0x68f24d);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B68f251:{NFSU2_TR(0x68f251);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B68f255:{NFSU2_TR(0x68f255);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B68f259:{NFSU2_TR(0x68f259);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B68f25d:{NFSU2_TR(0x68f25d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B68f261:{NFSU2_TR(0x68f261);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68f265:{NFSU2_TR(0x68f265);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68f269:{NFSU2_TR(0x68f269);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B68f26d:{NFSU2_TR(0x68f26d);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B68f271:{NFSU2_TR(0x68f271);
{wv<8>((R+4400),uo::pfcmpgt<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B68f275:{NFSU2_TR(0x68f275);
w4(R+0,u32(r8(R+4400)));
}
B68f278:{NFSU2_TR(0x68f278);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f27d:{NFSU2_TR(0x68f27d);
if(r1(R+518)){{goto L68f296;}}
}
B68f27f:L68f27f:{c.instructions+=6;NFSU2_TR(0x68f27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68f282:{NFSU2_TR(0x68f282);
__builtin_memmove((R+4384),(R+4352),8);
}
B68f285:{NFSU2_TR(0x68f285);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(U+0))));
}
B68f288:{NFSU2_TR(0x68f288);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(U+4))));
}
B68f28c:{NFSU2_TR(0x68f28c);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f291:{NFSU2_TR(0x68f291);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f296:L68f296:{c.instructions+=99;NFSU2_TR(0x68f296);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f29b:{NFSU2_TR(0x68f29b);
__builtin_memmove((R+4368),(R+4352),8);
}
B68f29e:{NFSU2_TR(0x68f29e);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f2a3:{NFSU2_TR(0x68f2a3);
__builtin_memmove((R+4400),(R+4384),8);
}
B68f2a6:{NFSU2_TR(0x68f2a6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f2aa:{NFSU2_TR(0x68f2aa);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68f2ae:{NFSU2_TR(0x68f2ae);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68f2b2:{NFSU2_TR(0x68f2b2);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f2b6:{NFSU2_TR(0x68f2b6);
__builtin_memmove((R+4432),(R+4352),8);
}
B68f2b9:{NFSU2_TR(0x68f2b9);
{SPILL();c.pc=0x68f2b9u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f2bd:{NFSU2_TR(0x68f2bd);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B68f2c5:{NFSU2_TR(0x68f2c5);
w8(R+4368,u64(u64(r8(R+4368))^u64(m8(0x7b7228))));
}
B68f2cc:{NFSU2_TR(0x68f2cc);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7170))));
}
B68f2d3:{NFSU2_TR(0x68f2d3);
{SPILL();c.pc=0x68f2d3u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f2d7:{NFSU2_TR(0x68f2d7);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B68f2da:{NFSU2_TR(0x68f2da);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B68f2dd:{NFSU2_TR(0x68f2dd);
{SPILL();c.pc=0x68f2ddu;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f2e1:{NFSU2_TR(0x68f2e1);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68f2e5:{NFSU2_TR(0x68f2e5);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f2e9:{NFSU2_TR(0x68f2e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f2ee:{NFSU2_TR(0x68f2ee);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f2f3:{NFSU2_TR(0x68f2f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B68f2f7:{NFSU2_TR(0x68f2f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f2fc:{NFSU2_TR(0x68f2fc);
__builtin_memmove((R+4416),(R+4384),8);
}
B68f2ff:{NFSU2_TR(0x68f2ff);
__builtin_memmove((R+4432),(R+4400),8);
}
B68f302:{NFSU2_TR(0x68f302);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f307:{NFSU2_TR(0x68f307);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68f30a:{NFSU2_TR(0x68f30a);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68f30d:{NFSU2_TR(0x68f30d);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f312:{NFSU2_TR(0x68f312);
__builtin_memmove((R+4420),(R+4384),4);
}
B68f315:{NFSU2_TR(0x68f315);
__builtin_memmove((R+4436),(R+4400),4);
}
B68f318:{NFSU2_TR(0x68f318);
__builtin_memmove((R+4448),(R+4416),8);
}
B68f31b:{NFSU2_TR(0x68f31b);
__builtin_memmove((R+4464),(R+4432),8);
}
B68f31e:{NFSU2_TR(0x68f31e);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f322:{NFSU2_TR(0x68f322);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f329:{NFSU2_TR(0x68f329);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f32d:{NFSU2_TR(0x68f32d);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68f334:{NFSU2_TR(0x68f334);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68f338:{NFSU2_TR(0x68f338);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68f33c:{NFSU2_TR(0x68f33c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f340:{NFSU2_TR(0x68f340);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B68f344:{NFSU2_TR(0x68f344);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68f348:{NFSU2_TR(0x68f348);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68f34d:{NFSU2_TR(0x68f34d);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68f351:{NFSU2_TR(0x68f351);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68f358:{NFSU2_TR(0x68f358);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68f35c:{NFSU2_TR(0x68f35c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68f360:{NFSU2_TR(0x68f360);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f367:{NFSU2_TR(0x68f367);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f36b:{NFSU2_TR(0x68f36b);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f373:{NFSU2_TR(0x68f373);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68f377:{NFSU2_TR(0x68f377);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68f37b:{NFSU2_TR(0x68f37b);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68f37f:{NFSU2_TR(0x68f37f);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68f383:{NFSU2_TR(0x68f383);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f38b:{NFSU2_TR(0x68f38b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f390:{NFSU2_TR(0x68f390);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f395:{NFSU2_TR(0x68f395);
__builtin_memmove((R+4416),(R+4384),8);
}
B68f398:{NFSU2_TR(0x68f398);
__builtin_memmove((R+4432),(R+4400),8);
}
B68f39b:{NFSU2_TR(0x68f39b);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f3a0:{NFSU2_TR(0x68f3a0);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68f3a3:{NFSU2_TR(0x68f3a3);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68f3a6:{NFSU2_TR(0x68f3a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f3ab:{NFSU2_TR(0x68f3ab);
__builtin_memmove((R+4420),(R+4384),4);
}
B68f3ae:{NFSU2_TR(0x68f3ae);
__builtin_memmove((R+4436),(R+4400),4);
}
B68f3b1:{NFSU2_TR(0x68f3b1);
__builtin_memmove((R+4448),(R+4416),8);
}
B68f3b4:{NFSU2_TR(0x68f3b4);
__builtin_memmove((R+4464),(R+4432),8);
}
B68f3b7:{NFSU2_TR(0x68f3b7);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f3bb:{NFSU2_TR(0x68f3bb);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f3c2:{NFSU2_TR(0x68f3c2);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f3c6:{NFSU2_TR(0x68f3c6);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68f3cd:{NFSU2_TR(0x68f3cd);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68f3d1:{NFSU2_TR(0x68f3d1);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68f3d5:{NFSU2_TR(0x68f3d5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f3d9:{NFSU2_TR(0x68f3d9);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f3de:{NFSU2_TR(0x68f3de);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68f3e2:{NFSU2_TR(0x68f3e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68f3e7:{NFSU2_TR(0x68f3e7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68f3eb:{NFSU2_TR(0x68f3eb);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68f3f2:{NFSU2_TR(0x68f3f2);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68f3f6:{NFSU2_TR(0x68f3f6);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68f3fa:{NFSU2_TR(0x68f3fa);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f401:{NFSU2_TR(0x68f401);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f405:{NFSU2_TR(0x68f405);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f40d:{NFSU2_TR(0x68f40d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68f411:{NFSU2_TR(0x68f411);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68f415:{NFSU2_TR(0x68f415);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68f419:{NFSU2_TR(0x68f419);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68f41d:{NFSU2_TR(0x68f41d);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f425:{NFSU2_TR(0x68f425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68f428:{NFSU2_TR(0x68f428);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f430:{NFSU2_TR(0x68f430);
u8 U[12];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f438:{NFSU2_TR(0x68f438);
__builtin_memmove((R+4400),(R+4384),8);
}
B68f43b:{NFSU2_TR(0x68f43b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B68f43e:{NFSU2_TR(0x68f43e);
__builtin_memmove((R+4352),(R+4400),8);
}
B68f441:{NFSU2_TR(0x68f441);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e0))));}
}
B68f449:{NFSU2_TR(0x68f449);
w4(R+4,u32(r8(R+4400)));
}
B68f44c:{NFSU2_TR(0x68f44c);
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
B68f44e:{NFSU2_TR(0x68f44e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68f4b6;}}
}
B68f450:L68f450:{c.instructions+=1;NFSU2_TR(0x68f450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f455ull));
TAIL_STATIC(0x6d3e80u,6d3);
}
B68f455:L68f455:{c.instructions+=4;NFSU2_TR(0x68f455);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f459:{NFSU2_TR(0x68f459);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f45d:{NFSU2_TR(0x68f45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f461:{NFSU2_TR(0x68f461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f466ull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68f466:L68f466:{c.instructions+=10;NFSU2_TR(0x68f466);
__builtin_memmove((R+4400),(R+4352),8);
}
B68f469:{NFSU2_TR(0x68f469);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f46d:{NFSU2_TR(0x68f46d);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x7b7198))));
}
B68f474:{NFSU2_TR(0x68f474);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f478:{NFSU2_TR(0x68f478);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71a0))));}
}
B68f480:{NFSU2_TR(0x68f480);
w4(R+4,u32(r8(R+4400)));
}
B68f483:{NFSU2_TR(0x68f483);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f48b:{NFSU2_TR(0x68f48b);
u8 U[12];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f493:{NFSU2_TR(0x68f493);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f495:{NFSU2_TR(0x68f495);
if(r1(R+518)){{goto L68f4b6;}}
}
B68f497:L68f497:{c.instructions+=8;NFSU2_TR(0x68f497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w8(R+4400,u64(r4(U+0)));
}
B68f49b:{NFSU2_TR(0x68f49b);
{SPILL();c.pc=0x68f49bu;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f49f:{NFSU2_TR(0x68f49f);
__builtin_memmove((R+4404),(R+4400),4);
}
B68f4a2:{NFSU2_TR(0x68f4a2);
{SPILL();c.pc=0x68f4a2u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f4a6:{NFSU2_TR(0x68f4a6);
{SPILL();c.pc=0x68f4a6u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f4aa:{NFSU2_TR(0x68f4aa);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f4ae:{NFSU2_TR(0x68f4ae);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68f4b2:{NFSU2_TR(0x68f4b2);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f4b6:L68f4b6:{c.instructions+=14;NFSU2_TR(0x68f4b6);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x7b71a8))));
}
B68f4bd:{NFSU2_TR(0x68f4bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f4c2:{NFSU2_TR(0x68f4c2);
u8 U[12];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f4c7:{NFSU2_TR(0x68f4c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B68f4ca:{NFSU2_TR(0x68f4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68f4cd:{NFSU2_TR(0x68f4cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f4d5:{NFSU2_TR(0x68f4d5);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f4dd:{NFSU2_TR(0x68f4dd);
__builtin_memmove((R+4400),(R+4384),8);
}
B68f4e0:{NFSU2_TR(0x68f4e0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B68f4e3:{NFSU2_TR(0x68f4e3);
__builtin_memmove((R+4352),(R+4400),8);
}
B68f4e6:{NFSU2_TR(0x68f4e6);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e0))));}
}
B68f4ee:{NFSU2_TR(0x68f4ee);
w4(R+4,u32(r8(R+4400)));
}
B68f4f1:{NFSU2_TR(0x68f4f1);
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
B68f4f3:{NFSU2_TR(0x68f4f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68f55b;}}
}
B68f4f5:L68f4f5:{c.instructions+=1;NFSU2_TR(0x68f4f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f4faull));
TAIL_STATIC(0x6d3e80u,6d3);
}
B68f4fa:L68f4fa:{c.instructions+=4;NFSU2_TR(0x68f4fa);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f4fe:{NFSU2_TR(0x68f4fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f502:{NFSU2_TR(0x68f502);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f506:{NFSU2_TR(0x68f506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f50bull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68f50b:L68f50b:{c.instructions+=10;NFSU2_TR(0x68f50b);
__builtin_memmove((R+4400),(R+4352),8);
}
B68f50e:{NFSU2_TR(0x68f50e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f512:{NFSU2_TR(0x68f512);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x7b7198))));
}
B68f519:{NFSU2_TR(0x68f519);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f51d:{NFSU2_TR(0x68f51d);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71a0))));}
}
B68f525:{NFSU2_TR(0x68f525);
w4(R+4,u32(r8(R+4400)));
}
B68f528:{NFSU2_TR(0x68f528);
u8 U[12];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f530:{NFSU2_TR(0x68f530);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f538:{NFSU2_TR(0x68f538);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f53a:{NFSU2_TR(0x68f53a);
if(r1(R+518)){{goto L68f55b;}}
}
B68f53c:L68f53c:{c.instructions+=8;NFSU2_TR(0x68f53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w8(R+4400,u64(r4(U+0)));
}
B68f540:{NFSU2_TR(0x68f540);
{SPILL();c.pc=0x68f540u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f544:{NFSU2_TR(0x68f544);
__builtin_memmove((R+4404),(R+4400),4);
}
B68f547:{NFSU2_TR(0x68f547);
{SPILL();c.pc=0x68f547u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f54b:{NFSU2_TR(0x68f54b);
{SPILL();c.pc=0x68f54bu;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f54f:{NFSU2_TR(0x68f54f);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f553:{NFSU2_TR(0x68f553);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68f557:{NFSU2_TR(0x68f557);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f55b:L68f55b:{c.instructions+=30;NFSU2_TR(0x68f55b);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x7b71a8))));
}
B68f562:{NFSU2_TR(0x68f562);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f567:{NFSU2_TR(0x68f567);
u8 U[12];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f56c:{NFSU2_TR(0x68f56c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B68f56f:{NFSU2_TR(0x68f56f);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f574:{NFSU2_TR(0x68f574);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f579:{NFSU2_TR(0x68f579);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B68f57f:{NFSU2_TR(0x68f57f);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68f585:{NFSU2_TR(0x68f585);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7bab50))));}
}
B68f58d:{NFSU2_TR(0x68f58d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7bab50))));}
}
B68f595:{NFSU2_TR(0x68f595);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f59d:{NFSU2_TR(0x68f59d);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f5a5:{NFSU2_TR(0x68f5a5);
__builtin_memmove((R+4464),gp(0x7b71a0),8);
}
B68f5ac:{NFSU2_TR(0x68f5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68f5af:{NFSU2_TR(0x68f5af);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f5b7:{NFSU2_TR(0x68f5b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68f5bf:{NFSU2_TR(0x68f5bf);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f5c3:{NFSU2_TR(0x68f5c3);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68f5c7:{NFSU2_TR(0x68f5c7);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68f5cb:{NFSU2_TR(0x68f5cb);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f5cf:{NFSU2_TR(0x68f5cf);
{SPILL();c.pc=0x68f5cfu;V r_=user_op(c,524533,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B68f5d3:{NFSU2_TR(0x68f5d3);
__builtin_memmove((R+4384),(R+4368),8);
}
B68f5d6:{NFSU2_TR(0x68f5d6);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68f5da:{NFSU2_TR(0x68f5da);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f5de:{NFSU2_TR(0x68f5de);
{SPILL();c.pc=0x68f5deu;V r_=user_op(c,524535,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B68f5e2:{NFSU2_TR(0x68f5e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f5e6:{NFSU2_TR(0x68f5e6);
{SPILL();c.pc=0x68f5e6u;V r_=user_op(c,524536,{rv<8>((R+4368)),rv<8>((R+4384))});SPILL();wv<8>((R+4368),r_);}
}
B68f5ea:{NFSU2_TR(0x68f5ea);
u8 U[4];
w4(U+0,u32(r8(R+4368)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f5ee:{NFSU2_TR(0x68f5ee);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68f5f2:{NFSU2_TR(0x68f5f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f5f7ull));
TAIL_STATIC(0x6d4460u,6d4);
}
B68f5f7:L68f5f7:{c.instructions+=12;NFSU2_TR(0x68f5f7);
__builtin_memmove((R+4368),(R+4352),8);
}
B68f5fa:{NFSU2_TR(0x68f5fa);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x7b7190))));
}
B68f601:{NFSU2_TR(0x68f601);
{wv<8>((R+4352),uo::pfcmpge<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71a0))));}
}
B68f609:{NFSU2_TR(0x68f609);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B68f60c:{NFSU2_TR(0x68f60c);
w4(R+4,u32(r8(R+4352)));
}
B68f60f:{NFSU2_TR(0x68f60f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f617:{NFSU2_TR(0x68f617);
__builtin_memmove((R+4352),(R+4368),8);
}
B68f61a:{NFSU2_TR(0x68f61a);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68f61d:{NFSU2_TR(0x68f61d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f623:{NFSU2_TR(0x68f623);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B68f628:{NFSU2_TR(0x68f628);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68f630:{NFSU2_TR(0x68f630);
if(r1(R+518)){{goto L68f63d;}}
}
B68f632:L68f632:{c.instructions+=3;NFSU2_TR(0x68f632);
__builtin_memmove((R+4372),(R+4368),4);
}
B68f635:{NFSU2_TR(0x68f635);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B68f639:{NFSU2_TR(0x68f639);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f63d:L68f63d:{c.instructions+=140;NFSU2_TR(0x68f63d);
__builtin_memmove((R+4404),(R+4352),4);
}
B68f640:{NFSU2_TR(0x68f640);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f645:{NFSU2_TR(0x68f645);
u8 U[12];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f64d:{NFSU2_TR(0x68f64d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f651:{NFSU2_TR(0x68f651);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f655:{NFSU2_TR(0x68f655);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B68f658:{NFSU2_TR(0x68f658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68f65b:{NFSU2_TR(0x68f65b);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f660:{NFSU2_TR(0x68f660);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f665:{NFSU2_TR(0x68f665);
__builtin_memmove((R+4416),(R+4384),8);
}
B68f668:{NFSU2_TR(0x68f668);
__builtin_memmove((R+4432),(R+4400),8);
}
B68f66b:{NFSU2_TR(0x68f66b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f670:{NFSU2_TR(0x68f670);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68f673:{NFSU2_TR(0x68f673);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68f676:{NFSU2_TR(0x68f676);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f67b:{NFSU2_TR(0x68f67b);
__builtin_memmove((R+4420),(R+4384),4);
}
B68f67e:{NFSU2_TR(0x68f67e);
__builtin_memmove((R+4436),(R+4400),4);
}
B68f681:{NFSU2_TR(0x68f681);
__builtin_memmove((R+4448),(R+4416),8);
}
B68f684:{NFSU2_TR(0x68f684);
__builtin_memmove((R+4464),(R+4432),8);
}
B68f687:{NFSU2_TR(0x68f687);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f68b:{NFSU2_TR(0x68f68b);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f692:{NFSU2_TR(0x68f692);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f696:{NFSU2_TR(0x68f696);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68f69d:{NFSU2_TR(0x68f69d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68f6a1:{NFSU2_TR(0x68f6a1);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68f6a5:{NFSU2_TR(0x68f6a5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f6a9:{NFSU2_TR(0x68f6a9);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f6ae:{NFSU2_TR(0x68f6ae);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68f6b2:{NFSU2_TR(0x68f6b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68f6b7:{NFSU2_TR(0x68f6b7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68f6bb:{NFSU2_TR(0x68f6bb);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68f6c2:{NFSU2_TR(0x68f6c2);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68f6c6:{NFSU2_TR(0x68f6c6);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68f6ca:{NFSU2_TR(0x68f6ca);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f6d1:{NFSU2_TR(0x68f6d1);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f6d5:{NFSU2_TR(0x68f6d5);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68f6d8:{NFSU2_TR(0x68f6d8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68f6dc:{NFSU2_TR(0x68f6dc);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68f6e0:{NFSU2_TR(0x68f6e0);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68f6e4:{NFSU2_TR(0x68f6e4);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68f6e8:{NFSU2_TR(0x68f6e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f6ec:{NFSU2_TR(0x68f6ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f6f1:{NFSU2_TR(0x68f6f1);
__builtin_memmove((R+4368),(R+4352),8);
}
B68f6f4:{NFSU2_TR(0x68f6f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f6f9:{NFSU2_TR(0x68f6f9);
__builtin_memmove((R+4400),(R+4384),8);
}
B68f6fc:{NFSU2_TR(0x68f6fc);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f700:{NFSU2_TR(0x68f700);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68f704:{NFSU2_TR(0x68f704);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68f708:{NFSU2_TR(0x68f708);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68f70c:{NFSU2_TR(0x68f70c);
__builtin_memmove((R+4432),(R+4352),8);
}
B68f70f:{NFSU2_TR(0x68f70f);
{SPILL();c.pc=0x68f70fu;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f713:{NFSU2_TR(0x68f713);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B68f71b:{NFSU2_TR(0x68f71b);
w8(R+4368,u64(u64(r8(R+4368))^u64(m8(0x7b7228))));
}
B68f722:{NFSU2_TR(0x68f722);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7170))));
}
B68f729:{NFSU2_TR(0x68f729);
{SPILL();c.pc=0x68f729u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f72d:{NFSU2_TR(0x68f72d);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B68f730:{NFSU2_TR(0x68f730);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B68f733:{NFSU2_TR(0x68f733);
{SPILL();c.pc=0x68f733u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f737:{NFSU2_TR(0x68f737);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68f73b:{NFSU2_TR(0x68f73b);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f73f:{NFSU2_TR(0x68f73f);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f744:{NFSU2_TR(0x68f744);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f749:{NFSU2_TR(0x68f749);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f74e:{NFSU2_TR(0x68f74e);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f753:{NFSU2_TR(0x68f753);
__builtin_memmove((R+4416),(R+4384),8);
}
B68f756:{NFSU2_TR(0x68f756);
__builtin_memmove((R+4432),(R+4400),8);
}
B68f759:{NFSU2_TR(0x68f759);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f75e:{NFSU2_TR(0x68f75e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68f761:{NFSU2_TR(0x68f761);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68f764:{NFSU2_TR(0x68f764);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f769:{NFSU2_TR(0x68f769);
__builtin_memmove((R+4420),(R+4384),4);
}
B68f76c:{NFSU2_TR(0x68f76c);
__builtin_memmove((R+4436),(R+4400),4);
}
B68f76f:{NFSU2_TR(0x68f76f);
__builtin_memmove((R+4448),(R+4416),8);
}
B68f772:{NFSU2_TR(0x68f772);
__builtin_memmove((R+4464),(R+4432),8);
}
B68f775:{NFSU2_TR(0x68f775);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f779:{NFSU2_TR(0x68f779);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f780:{NFSU2_TR(0x68f780);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f784:{NFSU2_TR(0x68f784);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68f78b:{NFSU2_TR(0x68f78b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68f78f:{NFSU2_TR(0x68f78f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68f793:{NFSU2_TR(0x68f793);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f797:{NFSU2_TR(0x68f797);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f79c:{NFSU2_TR(0x68f79c);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68f7a0:{NFSU2_TR(0x68f7a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68f7a5:{NFSU2_TR(0x68f7a5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68f7a9:{NFSU2_TR(0x68f7a9);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68f7b0:{NFSU2_TR(0x68f7b0);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68f7b4:{NFSU2_TR(0x68f7b4);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68f7b8:{NFSU2_TR(0x68f7b8);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f7bf:{NFSU2_TR(0x68f7bf);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f7c3:{NFSU2_TR(0x68f7c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f7cb:{NFSU2_TR(0x68f7cb);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68f7cf:{NFSU2_TR(0x68f7cf);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68f7d3:{NFSU2_TR(0x68f7d3);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68f7d7:{NFSU2_TR(0x68f7d7);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68f7db:{NFSU2_TR(0x68f7db);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f7e3:{NFSU2_TR(0x68f7e3);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f7e8:{NFSU2_TR(0x68f7e8);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f7ed:{NFSU2_TR(0x68f7ed);
__builtin_memmove((R+4416),(R+4384),8);
}
B68f7f0:{NFSU2_TR(0x68f7f0);
__builtin_memmove((R+4432),(R+4400),8);
}
B68f7f3:{NFSU2_TR(0x68f7f3);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f7f8:{NFSU2_TR(0x68f7f8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68f7fb:{NFSU2_TR(0x68f7fb);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68f7fe:{NFSU2_TR(0x68f7fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f803:{NFSU2_TR(0x68f803);
__builtin_memmove((R+4420),(R+4384),4);
}
B68f806:{NFSU2_TR(0x68f806);
__builtin_memmove((R+4436),(R+4400),4);
}
B68f809:{NFSU2_TR(0x68f809);
__builtin_memmove((R+4448),(R+4416),8);
}
B68f80c:{NFSU2_TR(0x68f80c);
__builtin_memmove((R+4464),(R+4432),8);
}
B68f80f:{NFSU2_TR(0x68f80f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68f813:{NFSU2_TR(0x68f813);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f81a:{NFSU2_TR(0x68f81a);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f81e:{NFSU2_TR(0x68f81e);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68f825:{NFSU2_TR(0x68f825);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68f829:{NFSU2_TR(0x68f829);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68f82d:{NFSU2_TR(0x68f82d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f831:{NFSU2_TR(0x68f831);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68f836:{NFSU2_TR(0x68f836);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68f83a:{NFSU2_TR(0x68f83a);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68f83f:{NFSU2_TR(0x68f83f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68f843:{NFSU2_TR(0x68f843);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68f84a:{NFSU2_TR(0x68f84a);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68f84e:{NFSU2_TR(0x68f84e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68f852:{NFSU2_TR(0x68f852);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68f859:{NFSU2_TR(0x68f859);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f85d:{NFSU2_TR(0x68f85d);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f865:{NFSU2_TR(0x68f865);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68f869:{NFSU2_TR(0x68f869);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68f86d:{NFSU2_TR(0x68f86d);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68f871:{NFSU2_TR(0x68f871);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68f875:{NFSU2_TR(0x68f875);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f87d:{NFSU2_TR(0x68f87d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68f880:{NFSU2_TR(0x68f880);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f888:{NFSU2_TR(0x68f888);
u8 U[12];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f890:{NFSU2_TR(0x68f890);
__builtin_memmove((R+4400),(R+4384),8);
}
B68f893:{NFSU2_TR(0x68f893);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B68f896:{NFSU2_TR(0x68f896);
__builtin_memmove((R+4352),(R+4400),8);
}
B68f899:{NFSU2_TR(0x68f899);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e0))));}
}
B68f8a1:{NFSU2_TR(0x68f8a1);
w4(R+4,u32(r8(R+4400)));
}
B68f8a4:{NFSU2_TR(0x68f8a4);
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
B68f8a6:{NFSU2_TR(0x68f8a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68f90e;}}
}
B68f8a8:L68f8a8:{c.instructions+=1;NFSU2_TR(0x68f8a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f8adull));
TAIL_STATIC(0x6d3e80u,6d3);
}
B68f8ad:L68f8ad:{c.instructions+=4;NFSU2_TR(0x68f8ad);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f8b1:{NFSU2_TR(0x68f8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f8b5:{NFSU2_TR(0x68f8b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f8b9:{NFSU2_TR(0x68f8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f8beull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68f8be:L68f8be:{c.instructions+=10;NFSU2_TR(0x68f8be);
__builtin_memmove((R+4400),(R+4352),8);
}
B68f8c1:{NFSU2_TR(0x68f8c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f8c5:{NFSU2_TR(0x68f8c5);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x7b7198))));
}
B68f8cc:{NFSU2_TR(0x68f8cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f8d0:{NFSU2_TR(0x68f8d0);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71a0))));}
}
B68f8d8:{NFSU2_TR(0x68f8d8);
w4(R+4,u32(r8(R+4400)));
}
B68f8db:{NFSU2_TR(0x68f8db);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f8e3:{NFSU2_TR(0x68f8e3);
u8 U[12];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f8eb:{NFSU2_TR(0x68f8eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f8ed:{NFSU2_TR(0x68f8ed);
if(r1(R+518)){{goto L68f90e;}}
}
B68f8ef:L68f8ef:{c.instructions+=8;NFSU2_TR(0x68f8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w8(R+4400,u64(r4(U+0)));
}
B68f8f3:{NFSU2_TR(0x68f8f3);
{SPILL();c.pc=0x68f8f3u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f8f7:{NFSU2_TR(0x68f8f7);
__builtin_memmove((R+4404),(R+4400),4);
}
B68f8fa:{NFSU2_TR(0x68f8fa);
{SPILL();c.pc=0x68f8fau;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f8fe:{NFSU2_TR(0x68f8fe);
{SPILL();c.pc=0x68f8feu;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f902:{NFSU2_TR(0x68f902);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f906:{NFSU2_TR(0x68f906);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68f90a:{NFSU2_TR(0x68f90a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f90e:L68f90e:{c.instructions+=14;NFSU2_TR(0x68f90e);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x7b71a8))));
}
B68f915:{NFSU2_TR(0x68f915);
u8 U[12];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f91a:{NFSU2_TR(0x68f91a);
u8 U[12];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f91f:{NFSU2_TR(0x68f91f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B68f922:{NFSU2_TR(0x68f922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68f925:{NFSU2_TR(0x68f925);
u8 U[12];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f92d:{NFSU2_TR(0x68f92d);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f935:{NFSU2_TR(0x68f935);
__builtin_memmove((R+4400),(R+4384),8);
}
B68f938:{NFSU2_TR(0x68f938);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B68f93b:{NFSU2_TR(0x68f93b);
__builtin_memmove((R+4352),(R+4400),8);
}
B68f93e:{NFSU2_TR(0x68f93e);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e0))));}
}
B68f946:{NFSU2_TR(0x68f946);
w4(R+4,u32(r8(R+4400)));
}
B68f949:{NFSU2_TR(0x68f949);
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
B68f94b:{NFSU2_TR(0x68f94b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68f9b3;}}
}
B68f94d:L68f94d:{c.instructions+=1;NFSU2_TR(0x68f94d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f952ull));
TAIL_STATIC(0x6d3e80u,6d3);
}
B68f952:L68f952:{c.instructions+=4;NFSU2_TR(0x68f952);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68f956:{NFSU2_TR(0x68f956);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f95a:{NFSU2_TR(0x68f95a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68f95e:{NFSU2_TR(0x68f95e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f963ull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68f963:L68f963:{c.instructions+=10;NFSU2_TR(0x68f963);
__builtin_memmove((R+4400),(R+4352),8);
}
B68f966:{NFSU2_TR(0x68f966);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68f96a:{NFSU2_TR(0x68f96a);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x7b7198))));
}
B68f971:{NFSU2_TR(0x68f971);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68f975:{NFSU2_TR(0x68f975);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71a0))));}
}
B68f97d:{NFSU2_TR(0x68f97d);
w4(R+4,u32(r8(R+4400)));
}
B68f980:{NFSU2_TR(0x68f980);
u8 U[12];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f988:{NFSU2_TR(0x68f988);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68f990:{NFSU2_TR(0x68f990);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68f992:{NFSU2_TR(0x68f992);
if(r1(R+518)){{goto L68f9b3;}}
}
B68f994:L68f994:{c.instructions+=8;NFSU2_TR(0x68f994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w8(R+4400,u64(r4(U+0)));
}
B68f998:{NFSU2_TR(0x68f998);
{SPILL();c.pc=0x68f998u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68f99c:{NFSU2_TR(0x68f99c);
__builtin_memmove((R+4404),(R+4400),4);
}
B68f99f:{NFSU2_TR(0x68f99f);
{SPILL();c.pc=0x68f99fu;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f9a3:{NFSU2_TR(0x68f9a3);
{SPILL();c.pc=0x68f9a3u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68f9a7:{NFSU2_TR(0x68f9a7);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68f9ab:{NFSU2_TR(0x68f9ab);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68f9af:{NFSU2_TR(0x68f9af);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68f9b3:L68f9b3:{c.instructions+=29;NFSU2_TR(0x68f9b3);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x7b71a8))));
}
B68f9ba:{NFSU2_TR(0x68f9ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f9bf:{NFSU2_TR(0x68f9bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f9c4:{NFSU2_TR(0x68f9c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B68f9c7:{NFSU2_TR(0x68f9c7);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68f9cc:{NFSU2_TR(0x68f9cc);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68f9d1:{NFSU2_TR(0x68f9d1);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B68f9d7:{NFSU2_TR(0x68f9d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68f9dd:{NFSU2_TR(0x68f9dd);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7bab50))));}
}
B68f9e5:{NFSU2_TR(0x68f9e5);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7bab50))));}
}
B68f9ed:{NFSU2_TR(0x68f9ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f9f5:{NFSU2_TR(0x68f9f5);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68f9fd:{NFSU2_TR(0x68f9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68fa00:{NFSU2_TR(0x68fa00);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fa08:{NFSU2_TR(0x68fa08);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68fa10:{NFSU2_TR(0x68fa10);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68fa14:{NFSU2_TR(0x68fa14);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68fa18:{NFSU2_TR(0x68fa18);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68fa1c:{NFSU2_TR(0x68fa1c);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68fa20:{NFSU2_TR(0x68fa20);
{SPILL();c.pc=0x68fa20u;V r_=user_op(c,524533,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B68fa24:{NFSU2_TR(0x68fa24);
__builtin_memmove((R+4384),(R+4368),8);
}
B68fa27:{NFSU2_TR(0x68fa27);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68fa2b:{NFSU2_TR(0x68fa2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68fa2f:{NFSU2_TR(0x68fa2f);
{SPILL();c.pc=0x68fa2fu;V r_=user_op(c,524535,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B68fa33:{NFSU2_TR(0x68fa33);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68fa37:{NFSU2_TR(0x68fa37);
{SPILL();c.pc=0x68fa37u;V r_=user_op(c,524536,{rv<8>((R+4368)),rv<8>((R+4384))});SPILL();wv<8>((R+4368),r_);}
}
B68fa3b:{NFSU2_TR(0x68fa3b);
u8 U[4];
w4(U+0,u32(r8(R+4368)));
s4(u32(r4(R+16)),r4(U+0));
}
B68fa3f:{NFSU2_TR(0x68fa3f);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68fa43:{NFSU2_TR(0x68fa43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68fa48ull));
TAIL_STATIC(0x6d4460u,6d4);
}
B68fa48:L68fa48:{c.instructions+=12;NFSU2_TR(0x68fa48);
__builtin_memmove((R+4368),(R+4352),8);
}
B68fa4b:{NFSU2_TR(0x68fa4b);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x7b7190))));
}
B68fa52:{NFSU2_TR(0x68fa52);
{wv<8>((R+4352),uo::pfcmpge<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71a0))));}
}
B68fa5a:{NFSU2_TR(0x68fa5a);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B68fa5d:{NFSU2_TR(0x68fa5d);
w4(R+4,u32(r8(R+4352)));
}
B68fa60:{NFSU2_TR(0x68fa60);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68fa68:{NFSU2_TR(0x68fa68);
__builtin_memmove((R+4352),(R+4368),8);
}
B68fa6b:{NFSU2_TR(0x68fa6b);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68fa6e:{NFSU2_TR(0x68fa6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68fa74:{NFSU2_TR(0x68fa74);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B68fa79:{NFSU2_TR(0x68fa79);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68fa81:{NFSU2_TR(0x68fa81);
if(r1(R+518)){{goto L68fa8e;}}
}
B68fa83:L68fa83:{c.instructions+=3;NFSU2_TR(0x68fa83);
__builtin_memmove((R+4372),(R+4368),4);
}
B68fa86:{NFSU2_TR(0x68fa86);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B68fa8a:{NFSU2_TR(0x68fa8a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68fa8e:L68fa8e:{c.instructions+=50;NFSU2_TR(0x68fa8e);
__builtin_memmove((R+4404),(R+4352),4);
}
B68fa91:{NFSU2_TR(0x68fa91);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fa96:{NFSU2_TR(0x68fa96);
u8 U[12];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fa9e:{NFSU2_TR(0x68fa9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68faa2:{NFSU2_TR(0x68faa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68faa6:{NFSU2_TR(0x68faa6);
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
B68faa9:{NFSU2_TR(0x68faa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68faac:{NFSU2_TR(0x68faac);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68fab1:{NFSU2_TR(0x68fab1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68fab6:{NFSU2_TR(0x68fab6);
__builtin_memmove((R+4416),(R+4384),8);
}
B68fab9:{NFSU2_TR(0x68fab9);
__builtin_memmove((R+4432),(R+4400),8);
}
B68fabc:{NFSU2_TR(0x68fabc);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fac1:{NFSU2_TR(0x68fac1);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68fac4:{NFSU2_TR(0x68fac4);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68fac7:{NFSU2_TR(0x68fac7);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68facc:{NFSU2_TR(0x68facc);
__builtin_memmove((R+4420),(R+4384),4);
}
B68facf:{NFSU2_TR(0x68facf);
__builtin_memmove((R+4436),(R+4400),4);
}
B68fad2:{NFSU2_TR(0x68fad2);
__builtin_memmove((R+4448),(R+4416),8);
}
B68fad5:{NFSU2_TR(0x68fad5);
__builtin_memmove((R+4464),(R+4432),8);
}
B68fad8:{NFSU2_TR(0x68fad8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68fadc:{NFSU2_TR(0x68fadc);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68fae3:{NFSU2_TR(0x68fae3);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68fae7:{NFSU2_TR(0x68fae7);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68faee:{NFSU2_TR(0x68faee);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68faf2:{NFSU2_TR(0x68faf2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68faf6:{NFSU2_TR(0x68faf6);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68fafa:{NFSU2_TR(0x68fafa);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68faff:{NFSU2_TR(0x68faff);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68fb03:{NFSU2_TR(0x68fb03);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68fb08:{NFSU2_TR(0x68fb08);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68fb0c:{NFSU2_TR(0x68fb0c);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68fb13:{NFSU2_TR(0x68fb13);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68fb17:{NFSU2_TR(0x68fb17);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68fb1b:{NFSU2_TR(0x68fb1b);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68fb22:{NFSU2_TR(0x68fb22);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68fb26:{NFSU2_TR(0x68fb26);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68fb29:{NFSU2_TR(0x68fb29);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68fb2d:{NFSU2_TR(0x68fb2d);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68fb31:{NFSU2_TR(0x68fb31);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68fb35:{NFSU2_TR(0x68fb35);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68fb39:{NFSU2_TR(0x68fb39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fb3d:{NFSU2_TR(0x68fb3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68fb40:{NFSU2_TR(0x68fb40);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fb45:{NFSU2_TR(0x68fb45);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fb4a:{NFSU2_TR(0x68fb4a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68fb4d:{NFSU2_TR(0x68fb4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fb51:{NFSU2_TR(0x68fb51);
__builtin_memmove((R+16),(R+20),4);
}
B68fb53:{NFSU2_TR(0x68fb53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68fb54:{NFSU2_TR(0x68fb54);
w2(R+4260,0xffffu);
}
B68fb56:{NFSU2_TR(0x68fb56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68fb59:L68fb59:{c.instructions+=137;NFSU2_TR(0x68fb59);
w2(R+4260,0xffffu);
}
B68fb5b:{NFSU2_TR(0x68fb5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B68fb5e:{NFSU2_TR(0x68fb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68fb62:{NFSU2_TR(0x68fb62);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68fb66:{NFSU2_TR(0x68fb66);
__builtin_memmove((R+20),(R+16),4);
}
B68fb68:{NFSU2_TR(0x68fb68);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B68fb6b:{NFSU2_TR(0x68fb6b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68fb6e:{NFSU2_TR(0x68fb6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fb72:{NFSU2_TR(0x68fb72);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68fb76:{NFSU2_TR(0x68fb76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B68fb7a:{NFSU2_TR(0x68fb7a);
__builtin_memmove((R+4384),(R+4352),8);
}
B68fb7d:{NFSU2_TR(0x68fb7d);
__builtin_memmove((R+4356),(R+4368),4);
}
B68fb80:{NFSU2_TR(0x68fb80);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B68fb83:{NFSU2_TR(0x68fb83);
__builtin_memmove((R+4432),(R+4400),8);
}
B68fb86:{NFSU2_TR(0x68fb86);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B68fb8a:{NFSU2_TR(0x68fb8a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fb8f:{NFSU2_TR(0x68fb8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B68fb93:{NFSU2_TR(0x68fb93);
__builtin_memmove((R+4404),(R+4416),4);
}
B68fb96:{NFSU2_TR(0x68fb96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B68fb9a:{NFSU2_TR(0x68fb9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fb9e:{NFSU2_TR(0x68fb9e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B68fba1:{NFSU2_TR(0x68fba1);
__builtin_memmove((R+4368),(R+4448),8);
}
B68fba4:{NFSU2_TR(0x68fba4);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fba9:{NFSU2_TR(0x68fba9);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fbae:{NFSU2_TR(0x68fbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68fbb1:{NFSU2_TR(0x68fbb1);
__builtin_memmove((R+4452),(R+4464),4);
}
B68fbb4:{NFSU2_TR(0x68fbb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B68fbb8:{NFSU2_TR(0x68fbb8);
__builtin_memmove((R+4384),(R+4352),8);
}
B68fbbb:{NFSU2_TR(0x68fbbb);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B68fbbe:{NFSU2_TR(0x68fbbe);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fbc3:{NFSU2_TR(0x68fbc3);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B68fbc6:{NFSU2_TR(0x68fbc6);
__builtin_memmove((R+4388),(R+4416),4);
}
B68fbc9:{NFSU2_TR(0x68fbc9);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fbce:{NFSU2_TR(0x68fbce);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fbd3:{NFSU2_TR(0x68fbd3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fbd8:{NFSU2_TR(0x68fbd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68fbdb:{NFSU2_TR(0x68fbdb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68fbde:{NFSU2_TR(0x68fbde);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fbe2:{NFSU2_TR(0x68fbe2);
__builtin_memmove((R+4384),(R+4352),8);
}
B68fbe5:{NFSU2_TR(0x68fbe5);
__builtin_memmove((R+4400),(R+4368),8);
}
B68fbe8:{NFSU2_TR(0x68fbe8);
__builtin_memmove((R+4416),(R+4352),8);
}
B68fbeb:{NFSU2_TR(0x68fbeb);
__builtin_memmove((R+4432),(R+4368),8);
}
B68fbee:{NFSU2_TR(0x68fbee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B68fbf3:{NFSU2_TR(0x68fbf3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68fbf9:{NFSU2_TR(0x68fbf9);
__builtin_memmove((R+4448),(R+4384),8);
}
B68fbfc:{NFSU2_TR(0x68fbfc);
__builtin_memmove((R+4464),(R+4400),8);
}
B68fbff:{NFSU2_TR(0x68fbff);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B68fc05:{NFSU2_TR(0x68fc05);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B68fc0b:{NFSU2_TR(0x68fc0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B68fc11:{NFSU2_TR(0x68fc11);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B68fc17:{NFSU2_TR(0x68fc17);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B68fc1d:{NFSU2_TR(0x68fc1d);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B68fc23:{NFSU2_TR(0x68fc23);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68fc27:{NFSU2_TR(0x68fc27);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68fc2b:{NFSU2_TR(0x68fc2b);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68fc2f:{NFSU2_TR(0x68fc2f);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68fc33:{NFSU2_TR(0x68fc33);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68fc37:{NFSU2_TR(0x68fc37);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68fc3b:{NFSU2_TR(0x68fc3b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68fc3e:{NFSU2_TR(0x68fc3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fc42:{NFSU2_TR(0x68fc42);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fc46:{NFSU2_TR(0x68fc46);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fc4a:{NFSU2_TR(0x68fc4a);
__builtin_memmove((R+4384),(R+4352),8);
}
B68fc4d:{NFSU2_TR(0x68fc4d);
__builtin_memmove((R+4400),(R+4368),8);
}
B68fc50:{NFSU2_TR(0x68fc50);
__builtin_memmove((R+4416),(R+4352),8);
}
B68fc53:{NFSU2_TR(0x68fc53);
__builtin_memmove((R+4432),(R+4368),8);
}
B68fc56:{NFSU2_TR(0x68fc56);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B68fc5b:{NFSU2_TR(0x68fc5b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68fc61:{NFSU2_TR(0x68fc61);
__builtin_memmove((R+4448),(R+4384),8);
}
B68fc64:{NFSU2_TR(0x68fc64);
__builtin_memmove((R+4464),(R+4400),8);
}
B68fc67:{NFSU2_TR(0x68fc67);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B68fc6d:{NFSU2_TR(0x68fc6d);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B68fc73:{NFSU2_TR(0x68fc73);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B68fc79:{NFSU2_TR(0x68fc79);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B68fc7f:{NFSU2_TR(0x68fc7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B68fc85:{NFSU2_TR(0x68fc85);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B68fc8b:{NFSU2_TR(0x68fc8b);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68fc8f:{NFSU2_TR(0x68fc8f);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68fc93:{NFSU2_TR(0x68fc93);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68fc97:{NFSU2_TR(0x68fc97);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68fc9b:{NFSU2_TR(0x68fc9b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68fc9f:{NFSU2_TR(0x68fc9f);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68fca3:{NFSU2_TR(0x68fca3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fca7:{NFSU2_TR(0x68fca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fcab:{NFSU2_TR(0x68fcab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fcaf:{NFSU2_TR(0x68fcaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fcb3:{NFSU2_TR(0x68fcb3);
__builtin_memmove((R+4384),(R+4352),8);
}
B68fcb6:{NFSU2_TR(0x68fcb6);
__builtin_memmove((R+4400),(R+4368),8);
}
B68fcb9:{NFSU2_TR(0x68fcb9);
__builtin_memmove((R+4416),(R+4352),8);
}
B68fcbc:{NFSU2_TR(0x68fcbc);
__builtin_memmove((R+4432),(R+4368),8);
}
B68fcbf:{NFSU2_TR(0x68fcbf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B68fcc4:{NFSU2_TR(0x68fcc4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68fcca:{NFSU2_TR(0x68fcca);
__builtin_memmove((R+4448),(R+4384),8);
}
B68fccd:{NFSU2_TR(0x68fccd);
__builtin_memmove((R+4464),(R+4400),8);
}
B68fcd0:{NFSU2_TR(0x68fcd0);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B68fcd6:{NFSU2_TR(0x68fcd6);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B68fcdc:{NFSU2_TR(0x68fcdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B68fce2:{NFSU2_TR(0x68fce2);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B68fce8:{NFSU2_TR(0x68fce8);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B68fcee:{NFSU2_TR(0x68fcee);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B68fcf4:{NFSU2_TR(0x68fcf4);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68fcf8:{NFSU2_TR(0x68fcf8);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68fcfc:{NFSU2_TR(0x68fcfc);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68fd00:{NFSU2_TR(0x68fd00);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68fd04:{NFSU2_TR(0x68fd04);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68fd08:{NFSU2_TR(0x68fd08);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68fd0c:{NFSU2_TR(0x68fd0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fd10:{NFSU2_TR(0x68fd10);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fd14:{NFSU2_TR(0x68fd14);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fd18:{NFSU2_TR(0x68fd18);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fd1c:{NFSU2_TR(0x68fd1c);
__builtin_memmove((R+4384),(R+4352),8);
}
B68fd1f:{NFSU2_TR(0x68fd1f);
__builtin_memmove((R+4400),(R+4368),8);
}
B68fd22:{NFSU2_TR(0x68fd22);
__builtin_memmove((R+4416),(R+4352),8);
}
B68fd25:{NFSU2_TR(0x68fd25);
__builtin_memmove((R+4432),(R+4368),8);
}
B68fd28:{NFSU2_TR(0x68fd28);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B68fd2d:{NFSU2_TR(0x68fd2d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68fd33:{NFSU2_TR(0x68fd33);
__builtin_memmove((R+4448),(R+4384),8);
}
B68fd36:{NFSU2_TR(0x68fd36);
__builtin_memmove((R+4464),(R+4400),8);
}
B68fd39:{NFSU2_TR(0x68fd39);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B68fd3f:{NFSU2_TR(0x68fd3f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B68fd45:{NFSU2_TR(0x68fd45);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B68fd4b:{NFSU2_TR(0x68fd4b);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B68fd51:{NFSU2_TR(0x68fd51);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B68fd57:{NFSU2_TR(0x68fd57);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B68fd5d:{NFSU2_TR(0x68fd5d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68fd61:{NFSU2_TR(0x68fd61);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68fd65:{NFSU2_TR(0x68fd65);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68fd69:{NFSU2_TR(0x68fd69);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68fd6d:{NFSU2_TR(0x68fd6d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68fd71:{NFSU2_TR(0x68fd71);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68fd75:{NFSU2_TR(0x68fd75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fd79:{NFSU2_TR(0x68fd79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fd7d:{NFSU2_TR(0x68fd7d);
__builtin_memmove((R+16),(R+20),4);
}
B68fd7f:{NFSU2_TR(0x68fd7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68fd83:{NFSU2_TR(0x68fd83);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68fd86:{NFSU2_TR(0x68fd86);
w2(R+4260,0xffffu);
}
B68fd88:{NFSU2_TR(0x68fd88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68fd8b:L68fd8b:{c.instructions+=55;NFSU2_TR(0x68fd8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68fd8f:{NFSU2_TR(0x68fd8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68fd93:{NFSU2_TR(0x68fd93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68fd97:{NFSU2_TR(0x68fd97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fd9b:{NFSU2_TR(0x68fd9b);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68fd9e:{NFSU2_TR(0x68fd9e);
__builtin_memmove((R+4388),(R+4384),4);
}
B68fda1:{NFSU2_TR(0x68fda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68fda5:{NFSU2_TR(0x68fda5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B68fda9:{NFSU2_TR(0x68fda9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68fdad:{NFSU2_TR(0x68fdad);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B68fdb0:{NFSU2_TR(0x68fdb0);
__builtin_memmove((R+4436),(R+4432),4);
}
B68fdb3:{NFSU2_TR(0x68fdb3);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B68fdb7:{NFSU2_TR(0x68fdb7);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68fdbb:{NFSU2_TR(0x68fdbb);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68fdbf:{NFSU2_TR(0x68fdbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B68fdc4:{NFSU2_TR(0x68fdc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B68fdc9:{NFSU2_TR(0x68fdc9);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B68fdcd:{NFSU2_TR(0x68fdcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B68fdd2:{NFSU2_TR(0x68fdd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B68fdd7:{NFSU2_TR(0x68fdd7);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68fddb:{NFSU2_TR(0x68fddb);
__builtin_memmove((R+4352),(R+4384),8);
}
B68fdde:{NFSU2_TR(0x68fdde);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B68fde1:{NFSU2_TR(0x68fde1);
__builtin_memmove((R+4356),(R+4416),4);
}
B68fde4:{NFSU2_TR(0x68fde4);
__builtin_memmove((R+4368),(R+4400),8);
}
B68fde7:{NFSU2_TR(0x68fde7);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4420),4);
}
B68fdea:{NFSU2_TR(0x68fdea);
__builtin_memmove((R+4432),(R+4400),8);
}
B68fded:{NFSU2_TR(0x68fded);
__builtin_memmove((R+4436),(R+4384),4);
}
B68fdf0:{NFSU2_TR(0x68fdf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B68fdf4:{NFSU2_TR(0x68fdf4);
__builtin_memmove((R+4464),(R+4448),8);
}
B68fdf7:{NFSU2_TR(0x68fdf7);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68fdfa:{NFSU2_TR(0x68fdfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B68fdff:{NFSU2_TR(0x68fdff);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B68fe03:{NFSU2_TR(0x68fe03);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B68fe07:{NFSU2_TR(0x68fe07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68fe0b:{NFSU2_TR(0x68fe0b);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B68fe0f:{NFSU2_TR(0x68fe0f);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B68fe13:{NFSU2_TR(0x68fe13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68fe17:{NFSU2_TR(0x68fe17);
__builtin_memmove((R+4356),(R+4352),4);
}
B68fe1a:{NFSU2_TR(0x68fe1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B68fe1e:{NFSU2_TR(0x68fe1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4452),(U+0),4);
}
B68fe21:{NFSU2_TR(0x68fe21);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68fe25:{NFSU2_TR(0x68fe25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B68fe29:{NFSU2_TR(0x68fe29);
u8 U[8];
__builtin_memmove((R+4448),(R+4452),4);
w4(U+4,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+0),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4452),(U+0),4);
}
B68fe2c:{NFSU2_TR(0x68fe2c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68fe30:{NFSU2_TR(0x68fe30);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68fe34:{NFSU2_TR(0x68fe34);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68fe38:{NFSU2_TR(0x68fe38);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B68fe3c:{NFSU2_TR(0x68fe3c);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B68fe40:{NFSU2_TR(0x68fe40);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B68fe44:{NFSU2_TR(0x68fe44);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68fe48:{NFSU2_TR(0x68fe48);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68fe4c:{NFSU2_TR(0x68fe4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4416)));
s4(u32(r4(U+0)),r4(U+4));
}
B68fe51:{NFSU2_TR(0x68fe51);
w2(R+4260,0xffffu);
}
B68fe53:{NFSU2_TR(0x68fe53);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B68fe57:{NFSU2_TR(0x68fe57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68fe5a:L68fe5a:{c.instructions+=20;NFSU2_TR(0x68fe5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68fe5e:{NFSU2_TR(0x68fe5e);
w2(R+4260,0xffffu);
}
B68fe60:{NFSU2_TR(0x68fe60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68fe65:{NFSU2_TR(0x68fe65);
__builtin_memmove((R+4368),gp(0x7b7218),8);
}
B68fe6c:{NFSU2_TR(0x68fe6c);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B68fe6f:{NFSU2_TR(0x68fe6f);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B68fe76:{NFSU2_TR(0x68fe76);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68fe7b:{NFSU2_TR(0x68fe7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B68fe80:{NFSU2_TR(0x68fe80);
__builtin_memmove((R+4420),(R+4384),4);
}
B68fe83:{NFSU2_TR(0x68fe83);
__builtin_memmove((R+4404),(R+4432),4);
}
B68fe86:{NFSU2_TR(0x68fe86);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68fe89:{NFSU2_TR(0x68fe89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fe8d:{NFSU2_TR(0x68fe8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fe91:{NFSU2_TR(0x68fe91);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fe95:{NFSU2_TR(0x68fe95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fe99:{NFSU2_TR(0x68fe99);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fe9d:{NFSU2_TR(0x68fe9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fea1:{NFSU2_TR(0x68fea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68fea5:{NFSU2_TR(0x68fea5);
w2(R+4260,0xffffu);
}
B68fea7:{NFSU2_TR(0x68fea7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68feaa:L68feaa:{c.instructions+=9;NFSU2_TR(0x68feaa);
w2(R+4260,0xffffu);
}
B68feac:{NFSU2_TR(0x68feac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B68feaf:{NFSU2_TR(0x68feaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68feb3:{NFSU2_TR(0x68feb3);
__builtin_memmove((R+20),(R+16),4);
}
B68feb5:{NFSU2_TR(0x68feb5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68feb8:{NFSU2_TR(0x68feb8);
__builtin_memmove((R+4),(R+16),4);
}
B68feba:{NFSU2_TR(0x68feba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68febd:{NFSU2_TR(0x68febd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68febe:{NFSU2_TR(0x68febe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68fec3ull));
TAIL_STATIC(0x695055u,695);
}
B68fec3:L68fec3:{c.instructions+=58;NFSU2_TR(0x68fec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68fec6:{NFSU2_TR(0x68fec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68fec9:{NFSU2_TR(0x68fec9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68fecd:{NFSU2_TR(0x68fecd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68fed0:{NFSU2_TR(0x68fed0);
__builtin_memmove((R+4448),(R+4368),8);
}
B68fed3:{NFSU2_TR(0x68fed3);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68fed7:{NFSU2_TR(0x68fed7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68fedc:{NFSU2_TR(0x68fedc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68fee0:{NFSU2_TR(0x68fee0);
__builtin_memmove((R+4464),(R+4400),8);
}
B68fee3:{NFSU2_TR(0x68fee3);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B68fee7:{NFSU2_TR(0x68fee7);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68feeb:{NFSU2_TR(0x68feeb);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b7228))));
}
B68fef2:{NFSU2_TR(0x68fef2);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7228))));
}
B68fef9:{NFSU2_TR(0x68fef9);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68fefd:{NFSU2_TR(0x68fefd);
__builtin_memmove((R+4416),(R+4352),8);
}
B68ff00:{NFSU2_TR(0x68ff00);
__builtin_memmove((R+4432),(R+4352),8);
}
B68ff03:{NFSU2_TR(0x68ff03);
__builtin_memmove((R+4404),(R+4368),4);
}
B68ff06:{NFSU2_TR(0x68ff06);
w8(R+4368,shl<u64>(r8(R+4368),u64(u64(0x20ull))));
}
B68ff0a:{NFSU2_TR(0x68ff0a);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B68ff0e:{NFSU2_TR(0x68ff0e);
__builtin_memmove((R+4420),(R+4416),4);
}
B68ff11:{NFSU2_TR(0x68ff11);
__builtin_memmove((R+4436),(R+4432),4);
}
B68ff14:{NFSU2_TR(0x68ff14);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68ff18:{NFSU2_TR(0x68ff18);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68ff1c:{NFSU2_TR(0x68ff1c);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B68ff20:{NFSU2_TR(0x68ff20);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68ff23:{NFSU2_TR(0x68ff23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff27:{NFSU2_TR(0x68ff27);
__builtin_memmove((R+4416),(R+4352),8);
}
B68ff2a:{NFSU2_TR(0x68ff2a);
__builtin_memmove((R+4432),(R+4352),8);
}
B68ff2d:{NFSU2_TR(0x68ff2d);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B68ff30:{NFSU2_TR(0x68ff30);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B68ff33:{NFSU2_TR(0x68ff33);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68ff37:{NFSU2_TR(0x68ff37);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68ff3b:{NFSU2_TR(0x68ff3b);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68ff3f:{NFSU2_TR(0x68ff3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff43:{NFSU2_TR(0x68ff43);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff47:{NFSU2_TR(0x68ff47);
__builtin_memmove((R+4416),(R+4384),8);
}
B68ff4a:{NFSU2_TR(0x68ff4a);
__builtin_memmove((R+4432),(R+4384),8);
}
B68ff4d:{NFSU2_TR(0x68ff4d);
__builtin_memmove((R+4420),(R+4416),4);
}
B68ff50:{NFSU2_TR(0x68ff50);
__builtin_memmove((R+4436),(R+4432),4);
}
B68ff53:{NFSU2_TR(0x68ff53);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68ff57:{NFSU2_TR(0x68ff57);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68ff5b:{NFSU2_TR(0x68ff5b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68ff5f:{NFSU2_TR(0x68ff5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff63:{NFSU2_TR(0x68ff63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff67:{NFSU2_TR(0x68ff67);
__builtin_memmove((R+4416),(R+4384),8);
}
B68ff6a:{NFSU2_TR(0x68ff6a);
__builtin_memmove((R+4432),(R+4384),8);
}
B68ff6d:{NFSU2_TR(0x68ff6d);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B68ff70:{NFSU2_TR(0x68ff70);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B68ff73:{NFSU2_TR(0x68ff73);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B68ff77:{NFSU2_TR(0x68ff77);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68ff7b:{NFSU2_TR(0x68ff7b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68ff7f:{NFSU2_TR(0x68ff7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff83:{NFSU2_TR(0x68ff83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ff87:{NFSU2_TR(0x68ff87);
__builtin_memmove((R+16),(R+20),4);
}
B68ff89:{NFSU2_TR(0x68ff89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68ff8d:{NFSU2_TR(0x68ff8d);
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
B68ff90:{NFSU2_TR(0x68ff90);
w2(R+4260,0xffffu);
}
B68ff92:{NFSU2_TR(0x68ff92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ff95:L68ff95:{c.instructions+=9;NFSU2_TR(0x68ff95);
w2(R+4260,0xffffu);
}
B68ff97:{NFSU2_TR(0x68ff97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B68ff9a:{NFSU2_TR(0x68ff9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ff9e:{NFSU2_TR(0x68ff9e);
__builtin_memmove((R+20),(R+16),4);
}
B68ffa0:{NFSU2_TR(0x68ffa0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68ffa3:{NFSU2_TR(0x68ffa3);
__builtin_memmove((R+4),(R+16),4);
}
B68ffa5:{NFSU2_TR(0x68ffa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ffa8:{NFSU2_TR(0x68ffa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ffa9:{NFSU2_TR(0x68ffa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ffaeull));
TAIL_STATIC(0x695055u,695);
}
B68ffae:L68ffae:{c.instructions+=20;NFSU2_TR(0x68ffae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ffb1:{NFSU2_TR(0x68ffb1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68ffb5:{NFSU2_TR(0x68ffb5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68ffba:{NFSU2_TR(0x68ffba);
__builtin_memmove((R+4384),(R+4352),8);
}
B68ffbd:{NFSU2_TR(0x68ffbd);
__builtin_memmove((R+4400),(R+4368),8);
}
B68ffc0:{NFSU2_TR(0x68ffc0);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7230))));}
}
B68ffc8:{NFSU2_TR(0x68ffc8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b7238))));}
}
B68ffd0:{NFSU2_TR(0x68ffd0);
__builtin_memmove((R+4416),(R+4384),8);
}
B68ffd3:{NFSU2_TR(0x68ffd3);
__builtin_memmove((R+4448),(R+4384),8);
}
B68ffd6:{NFSU2_TR(0x68ffd6);
__builtin_memmove((R+4420),(R+4416),4);
}
B68ffd9:{NFSU2_TR(0x68ffd9);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68ffdc:{NFSU2_TR(0x68ffdc);
__builtin_memmove((R+4432),(R+4416),8);
}
B68ffdf:{NFSU2_TR(0x68ffdf);
__builtin_memmove((R+4464),(R+4448),8);
}
B68ffe2:{NFSU2_TR(0x68ffe2);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B68ffe6:{NFSU2_TR(0x68ffe6);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B68ffea:{NFSU2_TR(0x68ffea);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B68ffee:{NFSU2_TR(0x68ffee);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68fff2:{NFSU2_TR(0x68fff2);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68fff6:{NFSU2_TR(0x68fff6);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68fffa:{NFSU2_TR(0x68fffa);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7220))));}
TAIL_STATIC(0x690002u,690);
}
XIT:NFSU2_TR_EXIT(0x68f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
