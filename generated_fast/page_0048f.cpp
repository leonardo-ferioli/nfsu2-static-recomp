#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_489(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x48f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x48f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_48f(u8* __restrict R,Cpu& c);
u32 page_48f(Cpu& c){return body_48f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_48f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x48f000:goto L48f000;
case 0x48f004:c.instructions+=5;goto B48f004;
case 0x48f009:c.instructions+=4;goto B48f009;
case 0x48f00b:c.instructions+=3;goto B48f00b;
case 0x48f00f:c.instructions+=2;goto B48f00f;
case 0x48f013:c.instructions+=1;goto B48f013;
case 0x48f015:goto L48f015;
case 0x48f01b:goto L48f01b;
case 0x48f01e:c.instructions+=3;goto B48f01e;
case 0x48f022:c.instructions+=2;goto B48f022;
case 0x48f024:c.instructions+=1;goto B48f024;
case 0x48f026:goto L48f026;
case 0x48f02a:c.instructions+=11;goto B48f02a;
case 0x48f030:c.instructions+=10;goto B48f030;
case 0x48f037:c.instructions+=9;goto B48f037;
case 0x48f03e:c.instructions+=8;goto B48f03e;
case 0x48f042:c.instructions+=7;goto B48f042;
case 0x48f048:c.instructions+=6;goto B48f048;
case 0x48f04f:c.instructions+=5;goto B48f04f;
case 0x48f056:c.instructions+=4;goto B48f056;
case 0x48f05a:c.instructions+=3;goto B48f05a;
case 0x48f060:c.instructions+=2;goto B48f060;
case 0x48f067:c.instructions+=1;goto B48f067;
case 0x48f06c:goto L48f06c;
case 0x48f06f:c.instructions+=5;goto B48f06f;
case 0x48f070:c.instructions+=4;goto B48f070;
case 0x48f076:c.instructions+=3;goto B48f076;
case 0x48f07c:c.instructions+=2;goto B48f07c;
case 0x48f07f:c.instructions+=1;goto B48f07f;
case 0x48f084:goto L48f084;
case 0x48f087:c.instructions+=15;goto B48f087;
case 0x48f08b:c.instructions+=14;goto B48f08b;
case 0x48f08d:c.instructions+=13;goto B48f08d;
case 0x48f091:c.instructions+=12;goto B48f091;
case 0x48f094:c.instructions+=11;goto B48f094;
case 0x48f098:c.instructions+=10;goto B48f098;
case 0x48f09b:c.instructions+=9;goto B48f09b;
case 0x48f09e:c.instructions+=8;goto B48f09e;
case 0x48f0a2:c.instructions+=7;goto B48f0a2;
case 0x48f0a5:c.instructions+=6;goto B48f0a5;
case 0x48f0a9:c.instructions+=5;goto B48f0a9;
case 0x48f0ac:c.instructions+=4;goto B48f0ac;
case 0x48f0ad:c.instructions+=3;goto B48f0ad;
case 0x48f0ae:c.instructions+=2;goto B48f0ae;
case 0x48f0b2:c.instructions+=1;goto B48f0b2;
case 0x48f0b7:goto L48f0b7;
case 0x48f0bb:c.instructions+=12;goto B48f0bb;
case 0x48f0be:c.instructions+=11;goto B48f0be;
case 0x48f0c1:c.instructions+=10;goto B48f0c1;
case 0x48f0c5:c.instructions+=9;goto B48f0c5;
case 0x48f0c8:c.instructions+=8;goto B48f0c8;
case 0x48f0ca:c.instructions+=7;goto B48f0ca;
case 0x48f0ce:c.instructions+=6;goto B48f0ce;
case 0x48f0d1:c.instructions+=5;goto B48f0d1;
case 0x48f0d3:c.instructions+=4;goto B48f0d3;
case 0x48f0d7:c.instructions+=3;goto B48f0d7;
case 0x48f0d9:c.instructions+=2;goto B48f0d9;
case 0x48f0dc:c.instructions+=1;goto B48f0dc;
case 0x48f0de:goto L48f0de;
case 0x48f0e2:c.instructions+=4;goto B48f0e2;
case 0x48f0e8:c.instructions+=3;goto B48f0e8;
case 0x48f0ec:c.instructions+=2;goto B48f0ec;
case 0x48f0ee:c.instructions+=1;goto B48f0ee;
case 0x48f0f0:goto L48f0f0;
case 0x48f0f2:c.instructions+=1;goto B48f0f2;
case 0x48f0f8:goto L48f0f8;
case 0x48f0ff:c.instructions+=10;goto B48f0ff;
case 0x48f103:c.instructions+=9;goto B48f103;
case 0x48f105:c.instructions+=8;goto B48f105;
case 0x48f10b:c.instructions+=7;goto B48f10b;
case 0x48f112:c.instructions+=6;goto B48f112;
case 0x48f116:c.instructions+=5;goto B48f116;
case 0x48f118:c.instructions+=4;goto B48f118;
case 0x48f11e:c.instructions+=3;goto B48f11e;
case 0x48f125:c.instructions+=2;goto B48f125;
case 0x48f129:c.instructions+=1;goto B48f129;
case 0x48f12f:goto L48f12f;
case 0x48f133:c.instructions+=5;goto B48f133;
case 0x48f13a:c.instructions+=4;goto B48f13a;
case 0x48f13b:c.instructions+=3;goto B48f13b;
case 0x48f13e:c.instructions+=2;goto B48f13e;
case 0x48f140:c.instructions+=1;goto B48f140;
case 0x48f146:goto L48f146;
case 0x48f148:c.instructions+=4;goto B48f148;
case 0x48f14a:c.instructions+=3;goto B48f14a;
case 0x48f14d:c.instructions+=2;goto B48f14d;
case 0x48f14f:c.instructions+=1;goto B48f14f;
case 0x48f155:goto L48f155;
case 0x48f156:c.instructions+=3;goto B48f156;
case 0x48f15d:c.instructions+=2;goto B48f15d;
case 0x48f15e:c.instructions+=1;goto B48f15e;
case 0x48f163:goto L48f163;
case 0x48f166:c.instructions+=3;goto B48f166;
case 0x48f169:c.instructions+=2;goto B48f169;
case 0x48f16b:c.instructions+=1;goto B48f16b;
case 0x48f171:goto L48f171;
case 0x48f178:c.instructions+=1;goto B48f178;
case 0x48f180:goto L48f180;
case 0x48f187:c.instructions+=35;goto B48f187;
case 0x48f18a:c.instructions+=34;goto B48f18a;
case 0x48f18b:c.instructions+=33;goto B48f18b;
case 0x48f18e:c.instructions+=32;goto B48f18e;
case 0x48f195:c.instructions+=31;goto B48f195;
case 0x48f198:c.instructions+=30;goto B48f198;
case 0x48f19a:c.instructions+=29;goto B48f19a;
case 0x48f1a1:c.instructions+=28;goto B48f1a1;
case 0x48f1a4:c.instructions+=27;goto B48f1a4;
case 0x48f1a6:c.instructions+=26;goto B48f1a6;
case 0x48f1ad:c.instructions+=25;goto B48f1ad;
case 0x48f1b4:c.instructions+=24;goto B48f1b4;
case 0x48f1b7:c.instructions+=23;goto B48f1b7;
case 0x48f1be:c.instructions+=22;goto B48f1be;
case 0x48f1c1:c.instructions+=21;goto B48f1c1;
case 0x48f1c3:c.instructions+=20;goto B48f1c3;
case 0x48f1ca:c.instructions+=19;goto B48f1ca;
case 0x48f1cd:c.instructions+=18;goto B48f1cd;
case 0x48f1cf:c.instructions+=17;goto B48f1cf;
case 0x48f1d6:c.instructions+=16;goto B48f1d6;
case 0x48f1dd:c.instructions+=15;goto B48f1dd;
case 0x48f1e0:c.instructions+=14;goto B48f1e0;
case 0x48f1e7:c.instructions+=13;goto B48f1e7;
case 0x48f1ea:c.instructions+=12;goto B48f1ea;
case 0x48f1ec:c.instructions+=11;goto B48f1ec;
case 0x48f1f3:c.instructions+=10;goto B48f1f3;
case 0x48f1f6:c.instructions+=9;goto B48f1f6;
case 0x48f1f8:c.instructions+=8;goto B48f1f8;
case 0x48f1ff:c.instructions+=7;goto B48f1ff;
case 0x48f203:c.instructions+=6;goto B48f203;
case 0x48f207:c.instructions+=5;goto B48f207;
case 0x48f209:c.instructions+=4;goto B48f209;
case 0x48f20c:c.instructions+=3;goto B48f20c;
case 0x48f20f:c.instructions+=2;goto B48f20f;
case 0x48f212:c.instructions+=1;goto B48f212;
case 0x48f218:goto L48f218;
case 0x48f21b:c.instructions+=2;goto B48f21b;
case 0x48f21d:c.instructions+=1;goto B48f21d;
case 0x48f223:goto L48f223;
case 0x48f225:c.instructions+=1;goto B48f225;
case 0x48f230:goto L48f230;
case 0x48f237:c.instructions+=4;goto B48f237;
case 0x48f238:c.instructions+=3;goto B48f238;
case 0x48f23f:c.instructions+=2;goto B48f23f;
case 0x48f240:c.instructions+=1;goto B48f240;
case 0x48f245:goto L48f245;
case 0x48f24c:c.instructions+=18;goto B48f24c;
case 0x48f253:c.instructions+=17;goto B48f253;
case 0x48f25a:c.instructions+=16;goto B48f25a;
case 0x48f261:c.instructions+=15;goto B48f261;
case 0x48f265:c.instructions+=14;goto B48f265;
case 0x48f26b:c.instructions+=13;goto B48f26b;
case 0x48f26e:c.instructions+=12;goto B48f26e;
case 0x48f271:c.instructions+=11;goto B48f271;
case 0x48f272:c.instructions+=10;goto B48f272;
case 0x48f279:c.instructions+=9;goto B48f279;
case 0x48f27b:c.instructions+=8;goto B48f27b;
case 0x48f281:c.instructions+=7;goto B48f281;
case 0x48f288:c.instructions+=6;goto B48f288;
case 0x48f28e:c.instructions+=5;goto B48f28e;
case 0x48f295:c.instructions+=4;goto B48f295;
case 0x48f299:c.instructions+=3;goto B48f299;
case 0x48f29f:c.instructions+=2;goto B48f29f;
case 0x48f2a6:c.instructions+=1;goto B48f2a6;
case 0x48f2a8:goto L48f2a8;
case 0x48f2aa:c.instructions+=2;goto B48f2aa;
case 0x48f2ac:c.instructions+=1;goto B48f2ac;
case 0x48f2ae:goto L48f2ae;
case 0x48f2b5:c.instructions+=1;goto B48f2b5;
case 0x48f2b7:goto L48f2b7;
case 0x48f2ba:c.instructions+=11;goto B48f2ba;
case 0x48f2bd:c.instructions+=10;goto B48f2bd;
case 0x48f2be:c.instructions+=9;goto B48f2be;
case 0x48f2c4:c.instructions+=8;goto B48f2c4;
case 0x48f2c7:c.instructions+=7;goto B48f2c7;
case 0x48f2cd:c.instructions+=6;goto B48f2cd;
case 0x48f2cf:c.instructions+=5;goto B48f2cf;
case 0x48f2d2:c.instructions+=4;goto B48f2d2;
case 0x48f2d8:c.instructions+=3;goto B48f2d8;
case 0x48f2da:c.instructions+=2;goto B48f2da;
case 0x48f2dd:c.instructions+=1;goto B48f2dd;
case 0x48f2df:goto L48f2df;
case 0x48f2e2:c.instructions+=39;goto B48f2e2;
case 0x48f2e9:c.instructions+=38;goto B48f2e9;
case 0x48f2f0:c.instructions+=37;goto B48f2f0;
case 0x48f2f7:c.instructions+=36;goto B48f2f7;
case 0x48f2fa:c.instructions+=35;goto B48f2fa;
case 0x48f301:c.instructions+=34;goto B48f301;
case 0x48f304:c.instructions+=33;goto B48f304;
case 0x48f30b:c.instructions+=32;goto B48f30b;
case 0x48f30e:c.instructions+=31;goto B48f30e;
case 0x48f315:c.instructions+=30;goto B48f315;
case 0x48f318:c.instructions+=29;goto B48f318;
case 0x48f31f:c.instructions+=28;goto B48f31f;
case 0x48f322:c.instructions+=27;goto B48f322;
case 0x48f329:c.instructions+=26;goto B48f329;
case 0x48f32c:c.instructions+=25;goto B48f32c;
case 0x48f333:c.instructions+=24;goto B48f333;
case 0x48f336:c.instructions+=23;goto B48f336;
case 0x48f33d:c.instructions+=22;goto B48f33d;
case 0x48f340:c.instructions+=21;goto B48f340;
case 0x48f347:c.instructions+=20;goto B48f347;
case 0x48f34a:c.instructions+=19;goto B48f34a;
case 0x48f351:c.instructions+=18;goto B48f351;
case 0x48f353:c.instructions+=17;goto B48f353;
case 0x48f35a:c.instructions+=16;goto B48f35a;
case 0x48f35d:c.instructions+=15;goto B48f35d;
case 0x48f364:c.instructions+=14;goto B48f364;
case 0x48f367:c.instructions+=13;goto B48f367;
case 0x48f36e:c.instructions+=12;goto B48f36e;
case 0x48f371:c.instructions+=11;goto B48f371;
case 0x48f378:c.instructions+=10;goto B48f378;
case 0x48f37b:c.instructions+=9;goto B48f37b;
case 0x48f382:c.instructions+=8;goto B48f382;
case 0x48f385:c.instructions+=7;goto B48f385;
case 0x48f38c:c.instructions+=6;goto B48f38c;
case 0x48f38f:c.instructions+=5;goto B48f38f;
case 0x48f392:c.instructions+=4;goto B48f392;
case 0x48f395:c.instructions+=3;goto B48f395;
case 0x48f399:c.instructions+=2;goto B48f399;
case 0x48f39e:c.instructions+=1;goto B48f39e;
case 0x48f3a0:goto L48f3a0;
case 0x48f3a3:c.instructions+=6;goto B48f3a3;
case 0x48f3a5:c.instructions+=5;goto B48f3a5;
case 0x48f3a8:c.instructions+=4;goto B48f3a8;
case 0x48f3ab:c.instructions+=3;goto B48f3ab;
case 0x48f3ae:c.instructions+=2;goto B48f3ae;
case 0x48f3af:c.instructions+=1;goto B48f3af;
case 0x48f3b1:goto L48f3b1;
case 0x48f3b3:c.instructions+=1;goto B48f3b3;
case 0x48f3b5:goto L48f3b5;
case 0x48f3c0:goto L48f3c0;
case 0x48f3c7:c.instructions+=5;goto B48f3c7;
case 0x48f3c8:c.instructions+=4;goto B48f3c8;
case 0x48f3cf:c.instructions+=3;goto B48f3cf;
case 0x48f3d0:c.instructions+=2;goto B48f3d0;
case 0x48f3d4:c.instructions+=1;goto B48f3d4;
case 0x48f3d9:goto L48f3d9;
case 0x48f3dc:c.instructions+=2;goto B48f3dc;
case 0x48f3dd:c.instructions+=1;goto B48f3dd;
case 0x48f3df:goto L48f3df;
case 0x48f3e5:c.instructions+=9;goto B48f3e5;
case 0x48f3ea:c.instructions+=8;goto B48f3ea;
case 0x48f3f0:c.instructions+=7;goto B48f3f0;
case 0x48f3f1:c.instructions+=6;goto B48f3f1;
case 0x48f3f7:c.instructions+=5;goto B48f3f7;
case 0x48f3f8:c.instructions+=4;goto B48f3f8;
case 0x48f3f9:c.instructions+=3;goto B48f3f9;
case 0x48f3fa:c.instructions+=2;goto B48f3fa;
case 0x48f3fe:c.instructions+=1;goto B48f3fe;
case 0x48f403:goto L48f403;
case 0x48f407:c.instructions+=86;goto B48f407;
case 0x48f40b:c.instructions+=85;goto B48f40b;
case 0x48f40f:c.instructions+=84;goto B48f40f;
case 0x48f415:c.instructions+=83;goto B48f415;
case 0x48f419:c.instructions+=82;goto B48f419;
case 0x48f41f:c.instructions+=81;goto B48f41f;
case 0x48f423:c.instructions+=80;goto B48f423;
case 0x48f429:c.instructions+=79;goto B48f429;
case 0x48f42d:c.instructions+=78;goto B48f42d;
case 0x48f433:c.instructions+=77;goto B48f433;
case 0x48f437:c.instructions+=76;goto B48f437;
case 0x48f43d:c.instructions+=75;goto B48f43d;
case 0x48f441:c.instructions+=74;goto B48f441;
case 0x48f447:c.instructions+=73;goto B48f447;
case 0x48f44e:c.instructions+=72;goto B48f44e;
case 0x48f454:c.instructions+=71;goto B48f454;
case 0x48f45b:c.instructions+=70;goto B48f45b;
case 0x48f461:c.instructions+=69;goto B48f461;
case 0x48f468:c.instructions+=68;goto B48f468;
case 0x48f46e:c.instructions+=67;goto B48f46e;
case 0x48f475:c.instructions+=66;goto B48f475;
case 0x48f47b:c.instructions+=65;goto B48f47b;
case 0x48f482:c.instructions+=64;goto B48f482;
case 0x48f488:c.instructions+=63;goto B48f488;
case 0x48f48f:c.instructions+=62;goto B48f48f;
case 0x48f495:c.instructions+=61;goto B48f495;
case 0x48f49c:c.instructions+=60;goto B48f49c;
case 0x48f4a2:c.instructions+=59;goto B48f4a2;
case 0x48f4a9:c.instructions+=58;goto B48f4a9;
case 0x48f4af:c.instructions+=57;goto B48f4af;
case 0x48f4b6:c.instructions+=56;goto B48f4b6;
case 0x48f4bc:c.instructions+=55;goto B48f4bc;
case 0x48f4c3:c.instructions+=54;goto B48f4c3;
case 0x48f4c9:c.instructions+=53;goto B48f4c9;
case 0x48f4d0:c.instructions+=52;goto B48f4d0;
case 0x48f4d6:c.instructions+=51;goto B48f4d6;
case 0x48f4dd:c.instructions+=50;goto B48f4dd;
case 0x48f4e3:c.instructions+=49;goto B48f4e3;
case 0x48f4ea:c.instructions+=48;goto B48f4ea;
case 0x48f4f0:c.instructions+=47;goto B48f4f0;
case 0x48f4f7:c.instructions+=46;goto B48f4f7;
case 0x48f4fd:c.instructions+=45;goto B48f4fd;
case 0x48f504:c.instructions+=44;goto B48f504;
case 0x48f50a:c.instructions+=43;goto B48f50a;
case 0x48f511:c.instructions+=42;goto B48f511;
case 0x48f517:c.instructions+=41;goto B48f517;
case 0x48f51e:c.instructions+=40;goto B48f51e;
case 0x48f524:c.instructions+=39;goto B48f524;
case 0x48f52b:c.instructions+=38;goto B48f52b;
case 0x48f531:c.instructions+=37;goto B48f531;
case 0x48f538:c.instructions+=36;goto B48f538;
case 0x48f53e:c.instructions+=35;goto B48f53e;
case 0x48f545:c.instructions+=34;goto B48f545;
case 0x48f54b:c.instructions+=33;goto B48f54b;
case 0x48f552:c.instructions+=32;goto B48f552;
case 0x48f558:c.instructions+=31;goto B48f558;
case 0x48f55f:c.instructions+=30;goto B48f55f;
case 0x48f565:c.instructions+=29;goto B48f565;
case 0x48f56c:c.instructions+=28;goto B48f56c;
case 0x48f572:c.instructions+=27;goto B48f572;
case 0x48f579:c.instructions+=26;goto B48f579;
case 0x48f57f:c.instructions+=25;goto B48f57f;
case 0x48f586:c.instructions+=24;goto B48f586;
case 0x48f58c:c.instructions+=23;goto B48f58c;
case 0x48f593:c.instructions+=22;goto B48f593;
case 0x48f599:c.instructions+=21;goto B48f599;
case 0x48f5a0:c.instructions+=20;goto B48f5a0;
case 0x48f5a6:c.instructions+=19;goto B48f5a6;
case 0x48f5ad:c.instructions+=18;goto B48f5ad;
case 0x48f5b3:c.instructions+=17;goto B48f5b3;
case 0x48f5b9:c.instructions+=16;goto B48f5b9;
case 0x48f5c0:c.instructions+=15;goto B48f5c0;
case 0x48f5c7:c.instructions+=14;goto B48f5c7;
case 0x48f5cd:c.instructions+=13;goto B48f5cd;
case 0x48f5d4:c.instructions+=12;goto B48f5d4;
case 0x48f5da:c.instructions+=11;goto B48f5da;
case 0x48f5e1:c.instructions+=10;goto B48f5e1;
case 0x48f5e2:c.instructions+=9;goto B48f5e2;
case 0x48f5e8:c.instructions+=8;goto B48f5e8;
case 0x48f5e9:c.instructions+=7;goto B48f5e9;
case 0x48f5ef:c.instructions+=6;goto B48f5ef;
case 0x48f5f5:c.instructions+=5;goto B48f5f5;
case 0x48f5fa:c.instructions+=4;goto B48f5fa;
case 0x48f5fb:c.instructions+=3;goto B48f5fb;
case 0x48f5fd:c.instructions+=2;goto B48f5fd;
case 0x48f5fe:c.instructions+=1;goto B48f5fe;
case 0x48f600:goto L48f600;
case 0x48f601:c.instructions+=5;goto B48f601;
case 0x48f605:c.instructions+=4;goto B48f605;
case 0x48f607:c.instructions+=3;goto B48f607;
case 0x48f608:c.instructions+=2;goto B48f608;
case 0x48f609:c.instructions+=1;goto B48f609;
case 0x48f60b:goto L48f60b;
case 0x48f60f:c.instructions+=2;goto B48f60f;
case 0x48f611:c.instructions+=1;goto B48f611;
case 0x48f613:goto L48f613;
case 0x48f617:c.instructions+=2;goto B48f617;
case 0x48f619:c.instructions+=1;goto B48f619;
case 0x48f61b:goto L48f61b;
case 0x48f61c:c.instructions+=3;goto B48f61c;
case 0x48f61e:c.instructions+=2;goto B48f61e;
case 0x48f623:c.instructions+=1;goto B48f623;
case 0x48f625:goto L48f625;
case 0x48f627:goto L48f627;
case 0x48f62b:c.instructions+=6;goto B48f62b;
case 0x48f62f:c.instructions+=5;goto B48f62f;
case 0x48f630:c.instructions+=4;goto B48f630;
case 0x48f631:c.instructions+=3;goto B48f631;
case 0x48f632:c.instructions+=2;goto B48f632;
case 0x48f633:c.instructions+=1;goto B48f633;
case 0x48f638:goto L48f638;
case 0x48f63c:c.instructions+=8;goto B48f63c;
case 0x48f63d:c.instructions+=7;goto B48f63d;
case 0x48f63e:c.instructions+=6;goto B48f63e;
case 0x48f63f:c.instructions+=5;goto B48f63f;
case 0x48f642:c.instructions+=4;goto B48f642;
case 0x48f643:c.instructions+=3;goto B48f643;
case 0x48f644:c.instructions+=2;goto B48f644;
case 0x48f645:c.instructions+=1;goto B48f645;
case 0x48f64a:goto L48f64a;
case 0x48f64d:c.instructions+=6;goto B48f64d;
case 0x48f64e:c.instructions+=5;goto B48f64e;
case 0x48f64f:c.instructions+=4;goto B48f64f;
case 0x48f650:c.instructions+=3;goto B48f650;
case 0x48f655:c.instructions+=2;goto B48f655;
case 0x48f656:c.instructions+=1;goto B48f656;
case 0x48f657:goto L48f657;
case 0x48f658:c.instructions+=4;goto B48f658;
case 0x48f659:c.instructions+=3;goto B48f659;
case 0x48f65b:c.instructions+=2;goto B48f65b;
case 0x48f65c:c.instructions+=1;goto B48f65c;
case 0x48f660:goto L48f660;
case 0x48f664:c.instructions+=8;goto B48f664;
case 0x48f665:c.instructions+=7;goto B48f665;
case 0x48f669:c.instructions+=6;goto B48f669;
case 0x48f66a:c.instructions+=5;goto B48f66a;
case 0x48f66e:c.instructions+=4;goto B48f66e;
case 0x48f66f:c.instructions+=3;goto B48f66f;
case 0x48f670:c.instructions+=2;goto B48f670;
case 0x48f671:c.instructions+=1;goto B48f671;
case 0x48f676:goto L48f676;
case 0x48f67a:c.instructions+=6;goto B48f67a;
case 0x48f67e:c.instructions+=5;goto B48f67e;
case 0x48f67f:c.instructions+=4;goto B48f67f;
case 0x48f680:c.instructions+=3;goto B48f680;
case 0x48f681:c.instructions+=2;goto B48f681;
case 0x48f682:c.instructions+=1;goto B48f682;
case 0x48f687:goto L48f687;
case 0x48f68a:c.instructions+=4;goto B48f68a;
case 0x48f68b:c.instructions+=3;goto B48f68b;
case 0x48f690:c.instructions+=2;goto B48f690;
case 0x48f691:c.instructions+=1;goto B48f691;
case 0x48f6a0:goto L48f6a0;
case 0x48f6a5:c.instructions+=3;goto B48f6a5;
case 0x48f6a7:c.instructions+=2;goto B48f6a7;
case 0x48f6a8:c.instructions+=1;goto B48f6a8;
case 0x48f6aa:goto L48f6aa;
case 0x48f6ad:c.instructions+=1;goto B48f6ad;
case 0x48f6af:goto L48f6af;
case 0x48f6b1:goto L48f6b1;
case 0x48f6b6:c.instructions+=1;goto B48f6b6;
case 0x48f6bb:goto L48f6bb;
case 0x48f6bd:c.instructions+=1;goto B48f6bd;
case 0x48f6bf:goto L48f6bf;
case 0x48f6c3:goto L48f6c3;
case 0x48f6c6:c.instructions+=1;goto B48f6c6;
case 0x48f6c8:goto L48f6c8;
case 0x48f6cb:c.instructions+=2;goto B48f6cb;
case 0x48f6cd:c.instructions+=1;goto B48f6cd;
case 0x48f6cf:goto L48f6cf;
case 0x48f6d2:c.instructions+=1;goto B48f6d2;
case 0x48f6d4:goto L48f6d4;
case 0x48f6d6:goto L48f6d6;
case 0x48f6d8:c.instructions+=1;goto B48f6d8;
case 0x48f6da:goto L48f6da;
case 0x48f6df:c.instructions+=2;goto B48f6df;
case 0x48f6e0:c.instructions+=1;goto B48f6e0;
case 0x48f6e1:goto L48f6e1;
case 0x48f6e3:c.instructions+=2;goto B48f6e3;
case 0x48f6e4:c.instructions+=1;goto B48f6e4;
case 0x48f6f0:goto L48f6f0;
case 0x48f6f1:c.instructions+=11;goto B48f6f1;
case 0x48f6f3:c.instructions+=10;goto B48f6f3;
case 0x48f6f6:c.instructions+=9;goto B48f6f6;
case 0x48f6f9:c.instructions+=8;goto B48f6f9;
case 0x48f6fa:c.instructions+=7;goto B48f6fa;
case 0x48f6fc:c.instructions+=6;goto B48f6fc;
case 0x48f700:c.instructions+=5;goto B48f700;
case 0x48f701:c.instructions+=4;goto B48f701;
case 0x48f705:c.instructions+=3;goto B48f705;
case 0x48f706:c.instructions+=2;goto B48f706;
case 0x48f709:c.instructions+=1;goto B48f709;
case 0x48f70e:goto L48f70e;
case 0x48f711:c.instructions+=7;goto B48f711;
case 0x48f712:c.instructions+=6;goto B48f712;
case 0x48f716:c.instructions+=5;goto B48f716;
case 0x48f717:c.instructions+=4;goto B48f717;
case 0x48f71b:c.instructions+=3;goto B48f71b;
case 0x48f71c:c.instructions+=2;goto B48f71c;
case 0x48f71e:c.instructions+=1;goto B48f71e;
case 0x48f723:goto L48f723;
case 0x48f724:c.instructions+=3;goto B48f724;
case 0x48f726:c.instructions+=2;goto B48f726;
case 0x48f727:c.instructions+=1;goto B48f727;
case 0x48f730:goto L48f730;
case 0x48f734:c.instructions+=2;goto B48f734;
case 0x48f736:c.instructions+=1;goto B48f736;
case 0x48f738:goto L48f738;
case 0x48f73b:c.instructions+=1;goto B48f73b;
case 0x48f73d:goto L48f73d;
case 0x48f73f:goto L48f73f;
case 0x48f742:c.instructions+=6;goto B48f742;
case 0x48f745:c.instructions+=5;goto B48f745;
case 0x48f747:c.instructions+=4;goto B48f747;
case 0x48f74a:c.instructions+=3;goto B48f74a;
case 0x48f74d:c.instructions+=2;goto B48f74d;
case 0x48f74f:c.instructions+=1;goto B48f74f;
case 0x48f754:goto L48f754;
case 0x48f760:goto L48f760;
case 0x48f764:c.instructions+=2;goto B48f764;
case 0x48f766:c.instructions+=1;goto B48f766;
case 0x48f768:goto L48f768;
case 0x48f76b:c.instructions+=5;goto B48f76b;
case 0x48f76e:c.instructions+=4;goto B48f76e;
case 0x48f771:c.instructions+=3;goto B48f771;
case 0x48f773:c.instructions+=2;goto B48f773;
case 0x48f776:c.instructions+=1;goto B48f776;
case 0x48f77b:goto L48f77b;
case 0x48f77e:goto L48f77e;
case 0x48f780:c.instructions+=5;goto B48f780;
case 0x48f782:c.instructions+=4;goto B48f782;
case 0x48f785:c.instructions+=3;goto B48f785;
case 0x48f787:c.instructions+=2;goto B48f787;
case 0x48f78a:c.instructions+=1;goto B48f78a;
case 0x48f78f:goto L48f78f;
case 0x48f7a0:goto L48f7a0;
case 0x48f7a1:c.instructions+=10;goto B48f7a1;
case 0x48f7a3:c.instructions+=9;goto B48f7a3;
case 0x48f7a6:c.instructions+=8;goto B48f7a6;
case 0x48f7ac:c.instructions+=7;goto B48f7ac;
case 0x48f7ad:c.instructions+=6;goto B48f7ad;
case 0x48f7af:c.instructions+=5;goto B48f7af;
case 0x48f7b2:c.instructions+=4;goto B48f7b2;
case 0x48f7b4:c.instructions+=3;goto B48f7b4;
case 0x48f7b5:c.instructions+=2;goto B48f7b5;
case 0x48f7bc:c.instructions+=1;goto B48f7bc;
case 0x48f7c2:goto L48f7c2;
case 0x48f7c8:c.instructions+=4;goto B48f7c8;
case 0x48f7ce:c.instructions+=3;goto B48f7ce;
case 0x48f7d4:c.instructions+=2;goto B48f7d4;
case 0x48f7d6:c.instructions+=1;goto B48f7d6;
case 0x48f7d8:goto L48f7d8;
case 0x48f7e2:c.instructions+=3;goto B48f7e2;
case 0x48f7ec:c.instructions+=2;goto B48f7ec;
case 0x48f7ee:c.instructions+=1;goto B48f7ee;
case 0x48f7f0:goto L48f7f0;
case 0x48f7f6:goto L48f7f6;
case 0x48f7f8:c.instructions+=2;goto B48f7f8;
case 0x48f7fb:c.instructions+=1;goto B48f7fb;
case 0x48f801:goto L48f801;
case 0x48f804:c.instructions+=27;goto B48f804;
case 0x48f807:c.instructions+=26;goto B48f807;
case 0x48f80a:c.instructions+=25;goto B48f80a;
case 0x48f811:c.instructions+=24;goto B48f811;
case 0x48f817:c.instructions+=23;goto B48f817;
case 0x48f818:c.instructions+=22;goto B48f818;
case 0x48f81a:c.instructions+=21;goto B48f81a;
case 0x48f825:c.instructions+=20;goto B48f825;
case 0x48f828:c.instructions+=19;goto B48f828;
case 0x48f82f:c.instructions+=18;goto B48f82f;
case 0x48f835:c.instructions+=17;goto B48f835;
case 0x48f837:c.instructions+=16;goto B48f837;
case 0x48f83a:c.instructions+=15;goto B48f83a;
case 0x48f841:c.instructions+=14;goto B48f841;
case 0x48f843:c.instructions+=13;goto B48f843;
case 0x48f845:c.instructions+=12;goto B48f845;
case 0x48f84b:c.instructions+=11;goto B48f84b;
case 0x48f852:c.instructions+=10;goto B48f852;
case 0x48f855:c.instructions+=9;goto B48f855;
case 0x48f85c:c.instructions+=8;goto B48f85c;
case 0x48f85d:c.instructions+=7;goto B48f85d;
case 0x48f863:c.instructions+=6;goto B48f863;
case 0x48f868:c.instructions+=5;goto B48f868;
case 0x48f86d:c.instructions+=4;goto B48f86d;
case 0x48f872:c.instructions+=3;goto B48f872;
case 0x48f873:c.instructions+=2;goto B48f873;
case 0x48f87a:c.instructions+=1;goto B48f87a;
case 0x48f87f:goto L48f87f;
case 0x48f886:c.instructions+=13;goto B48f886;
case 0x48f887:c.instructions+=12;goto B48f887;
case 0x48f88e:c.instructions+=11;goto B48f88e;
case 0x48f88f:c.instructions+=10;goto B48f88f;
case 0x48f893:c.instructions+=9;goto B48f893;
case 0x48f898:c.instructions+=8;goto B48f898;
case 0x48f899:c.instructions+=7;goto B48f899;
case 0x48f8a4:c.instructions+=6;goto B48f8a4;
case 0x48f8af:c.instructions+=5;goto B48f8af;
case 0x48f8ba:c.instructions+=4;goto B48f8ba;
case 0x48f8c5:c.instructions+=3;goto B48f8c5;
case 0x48f8d0:c.instructions+=2;goto B48f8d0;
case 0x48f8db:c.instructions+=1;goto B48f8db;
case 0x48f8e0:goto L48f8e0;
case 0x48f8e7:c.instructions+=144;goto B48f8e7;
case 0x48f8ed:c.instructions+=143;goto B48f8ed;
case 0x48f8f4:c.instructions+=142;goto B48f8f4;
case 0x48f8fa:c.instructions+=141;goto B48f8fa;
case 0x48f8fe:c.instructions+=140;goto B48f8fe;
case 0x48f904:c.instructions+=139;goto B48f904;
case 0x48f908:c.instructions+=138;goto B48f908;
case 0x48f90e:c.instructions+=137;goto B48f90e;
case 0x48f910:c.instructions+=136;goto B48f910;
case 0x48f912:c.instructions+=135;goto B48f912;
case 0x48f914:c.instructions+=134;goto B48f914;
case 0x48f91b:c.instructions+=133;goto B48f91b;
case 0x48f922:c.instructions+=132;goto B48f922;
case 0x48f928:c.instructions+=131;goto B48f928;
case 0x48f92f:c.instructions+=130;goto B48f92f;
case 0x48f935:c.instructions+=129;goto B48f935;
case 0x48f939:c.instructions+=128;goto B48f939;
case 0x48f93d:c.instructions+=127;goto B48f93d;
case 0x48f943:c.instructions+=126;goto B48f943;
case 0x48f947:c.instructions+=125;goto B48f947;
case 0x48f94b:c.instructions+=124;goto B48f94b;
case 0x48f951:c.instructions+=123;goto B48f951;
case 0x48f955:c.instructions+=122;goto B48f955;
case 0x48f959:c.instructions+=121;goto B48f959;
case 0x48f95b:c.instructions+=120;goto B48f95b;
case 0x48f962:c.instructions+=119;goto B48f962;
case 0x48f969:c.instructions+=118;goto B48f969;
case 0x48f96f:c.instructions+=117;goto B48f96f;
case 0x48f976:c.instructions+=116;goto B48f976;
case 0x48f97c:c.instructions+=115;goto B48f97c;
case 0x48f980:c.instructions+=114;goto B48f980;
case 0x48f987:c.instructions+=113;goto B48f987;
case 0x48f98d:c.instructions+=112;goto B48f98d;
case 0x48f991:c.instructions+=111;goto B48f991;
case 0x48f995:c.instructions+=110;goto B48f995;
case 0x48f99b:c.instructions+=109;goto B48f99b;
case 0x48f99f:c.instructions+=108;goto B48f99f;
case 0x48f9a3:c.instructions+=107;goto B48f9a3;
case 0x48f9a5:c.instructions+=106;goto B48f9a5;
case 0x48f9ac:c.instructions+=105;goto B48f9ac;
case 0x48f9b3:c.instructions+=104;goto B48f9b3;
case 0x48f9b9:c.instructions+=103;goto B48f9b9;
case 0x48f9bd:c.instructions+=102;goto B48f9bd;
case 0x48f9c4:c.instructions+=101;goto B48f9c4;
case 0x48f9ca:c.instructions+=100;goto B48f9ca;
case 0x48f9ce:c.instructions+=99;goto B48f9ce;
case 0x48f9d5:c.instructions+=98;goto B48f9d5;
case 0x48f9db:c.instructions+=97;goto B48f9db;
case 0x48f9df:c.instructions+=96;goto B48f9df;
case 0x48f9e3:c.instructions+=95;goto B48f9e3;
case 0x48f9e9:c.instructions+=94;goto B48f9e9;
case 0x48f9ed:c.instructions+=93;goto B48f9ed;
case 0x48f9f1:c.instructions+=92;goto B48f9f1;
case 0x48f9f5:c.instructions+=91;goto B48f9f5;
case 0x48f9fc:c.instructions+=90;goto B48f9fc;
case 0x48fa00:c.instructions+=89;goto B48fa00;
case 0x48fa06:c.instructions+=88;goto B48fa06;
case 0x48fa0a:c.instructions+=87;goto B48fa0a;
case 0x48fa0e:c.instructions+=86;goto B48fa0e;
case 0x48fa14:c.instructions+=85;goto B48fa14;
case 0x48fa18:c.instructions+=84;goto B48fa18;
case 0x48fa1a:c.instructions+=83;goto B48fa1a;
case 0x48fa1c:c.instructions+=82;goto B48fa1c;
case 0x48fa23:c.instructions+=81;goto B48fa23;
case 0x48fa27:c.instructions+=80;goto B48fa27;
case 0x48fa2d:c.instructions+=79;goto B48fa2d;
case 0x48fa31:c.instructions+=78;goto B48fa31;
case 0x48fa35:c.instructions+=77;goto B48fa35;
case 0x48fa3b:c.instructions+=76;goto B48fa3b;
case 0x48fa3f:c.instructions+=75;goto B48fa3f;
case 0x48fa43:c.instructions+=74;goto B48fa43;
case 0x48fa45:c.instructions+=73;goto B48fa45;
case 0x48fa4c:c.instructions+=72;goto B48fa4c;
case 0x48fa50:c.instructions+=71;goto B48fa50;
case 0x48fa56:c.instructions+=70;goto B48fa56;
case 0x48fa5a:c.instructions+=69;goto B48fa5a;
case 0x48fa61:c.instructions+=68;goto B48fa61;
case 0x48fa67:c.instructions+=67;goto B48fa67;
case 0x48fa6b:c.instructions+=66;goto B48fa6b;
case 0x48fa6f:c.instructions+=65;goto B48fa6f;
case 0x48fa71:c.instructions+=64;goto B48fa71;
case 0x48fa78:c.instructions+=63;goto B48fa78;
case 0x48fa7c:c.instructions+=62;goto B48fa7c;
case 0x48fa82:c.instructions+=61;goto B48fa82;
case 0x48fa86:c.instructions+=60;goto B48fa86;
case 0x48fa8d:c.instructions+=59;goto B48fa8d;
case 0x48fa93:c.instructions+=58;goto B48fa93;
case 0x48fa97:c.instructions+=57;goto B48fa97;
case 0x48fa9b:c.instructions+=56;goto B48fa9b;
case 0x48fa9f:c.instructions+=55;goto B48fa9f;
case 0x48faa6:c.instructions+=54;goto B48faa6;
case 0x48faad:c.instructions+=53;goto B48faad;
case 0x48fab3:c.instructions+=52;goto B48fab3;
case 0x48fab7:c.instructions+=51;goto B48fab7;
case 0x48fab9:c.instructions+=50;goto B48fab9;
case 0x48fabb:c.instructions+=49;goto B48fabb;
case 0x48fac2:c.instructions+=48;goto B48fac2;
case 0x48fac9:c.instructions+=47;goto B48fac9;
case 0x48facf:c.instructions+=46;goto B48facf;
case 0x48fad3:c.instructions+=45;goto B48fad3;
case 0x48fad7:c.instructions+=44;goto B48fad7;
case 0x48fad9:c.instructions+=43;goto B48fad9;
case 0x48fae0:c.instructions+=42;goto B48fae0;
case 0x48fae7:c.instructions+=41;goto B48fae7;
case 0x48faed:c.instructions+=40;goto B48faed;
case 0x48faf1:c.instructions+=39;goto B48faf1;
case 0x48faf5:c.instructions+=38;goto B48faf5;
case 0x48fafc:c.instructions+=37;goto B48fafc;
case 0x48fafd:c.instructions+=36;goto B48fafd;
case 0x48fb01:c.instructions+=35;goto B48fb01;
case 0x48fb03:c.instructions+=34;goto B48fb03;
case 0x48fb04:c.instructions+=33;goto B48fb04;
case 0x48fb0b:c.instructions+=32;goto B48fb0b;
case 0x48fb0d:c.instructions+=31;goto B48fb0d;
case 0x48fb0f:c.instructions+=30;goto B48fb0f;
case 0x48fb16:c.instructions+=29;goto B48fb16;
case 0x48fb1c:c.instructions+=28;goto B48fb1c;
case 0x48fb20:c.instructions+=27;goto B48fb20;
case 0x48fb24:c.instructions+=26;goto B48fb24;
case 0x48fb28:c.instructions+=25;goto B48fb28;
case 0x48fb2f:c.instructions+=24;goto B48fb2f;
case 0x48fb36:c.instructions+=23;goto B48fb36;
case 0x48fb3a:c.instructions+=22;goto B48fb3a;
case 0x48fb3c:c.instructions+=21;goto B48fb3c;
case 0x48fb3e:c.instructions+=20;goto B48fb3e;
case 0x48fb45:c.instructions+=19;goto B48fb45;
case 0x48fb47:c.instructions+=18;goto B48fb47;
case 0x48fb49:c.instructions+=17;goto B48fb49;
case 0x48fb4b:c.instructions+=16;goto B48fb4b;
case 0x48fb52:c.instructions+=15;goto B48fb52;
case 0x48fb56:c.instructions+=14;goto B48fb56;
case 0x48fb5a:c.instructions+=13;goto B48fb5a;
case 0x48fb5e:c.instructions+=12;goto B48fb5e;
case 0x48fb65:c.instructions+=11;goto B48fb65;
case 0x48fb6c:c.instructions+=10;goto B48fb6c;
case 0x48fb70:c.instructions+=9;goto B48fb70;
case 0x48fb74:c.instructions+=8;goto B48fb74;
case 0x48fb78:c.instructions+=7;goto B48fb78;
case 0x48fb7f:c.instructions+=6;goto B48fb7f;
case 0x48fb86:c.instructions+=5;goto B48fb86;
case 0x48fb8a:c.instructions+=4;goto B48fb8a;
case 0x48fb8e:c.instructions+=3;goto B48fb8e;
case 0x48fb92:c.instructions+=2;goto B48fb92;
case 0x48fb99:c.instructions+=1;goto B48fb99;
case 0x48fb9e:goto L48fb9e;
case 0x48fba1:c.instructions+=5;goto B48fba1;
case 0x48fba5:c.instructions+=4;goto B48fba5;
case 0x48fba6:c.instructions+=3;goto B48fba6;
case 0x48fbac:c.instructions+=2;goto B48fbac;
case 0x48fbad:c.instructions+=1;goto B48fbad;
case 0x48fbb2:goto L48fbb2;
case 0x48fbb5:goto L48fbb5;
case 0x48fbb6:c.instructions+=4;goto B48fbb6;
case 0x48fbb7:c.instructions+=3;goto B48fbb7;
case 0x48fbb9:c.instructions+=2;goto B48fbb9;
case 0x48fbba:c.instructions+=1;goto B48fbba;
case 0x48fbc0:goto L48fbc0;
case 0x48fbc1:c.instructions+=3;goto B48fbc1;
case 0x48fbc7:c.instructions+=2;goto B48fbc7;
case 0x48fbcc:c.instructions+=1;goto B48fbcc;
case 0x48fbd1:goto L48fbd1;
case 0x48fbd3:c.instructions+=1;goto B48fbd3;
case 0x48fbd5:goto L48fbd5;
case 0x48fbd9:c.instructions+=1;goto B48fbd9;
case 0x48fbe0:goto L48fbe0;
case 0x48fbe3:c.instructions+=1;goto B48fbe3;
case 0x48fbe5:goto L48fbe5;
case 0x48fbe7:c.instructions+=2;goto B48fbe7;
case 0x48fbe9:c.instructions+=1;goto B48fbe9;
case 0x48fbeb:goto L48fbeb;
case 0x48fbed:c.instructions+=2;goto B48fbed;
case 0x48fbee:c.instructions+=1;goto B48fbee;
case 0x48fbef:goto L48fbef;
case 0x48fbf1:c.instructions+=2;goto B48fbf1;
case 0x48fbf2:c.instructions+=1;goto B48fbf2;
case 0x48fc00:goto L48fc00;
case 0x48fc04:c.instructions+=8;goto B48fc04;
case 0x48fc07:c.instructions+=7;goto B48fc07;
case 0x48fc0b:c.instructions+=6;goto B48fc0b;
case 0x48fc0f:c.instructions+=5;goto B48fc0f;
case 0x48fc12:c.instructions+=4;goto B48fc12;
case 0x48fc16:c.instructions+=3;goto B48fc16;
case 0x48fc19:c.instructions+=2;goto B48fc19;
case 0x48fc1b:c.instructions+=1;goto B48fc1b;
case 0x48fc1d:goto L48fc1d;
case 0x48fc24:goto L48fc24;
case 0x48fc27:c.instructions+=6;goto B48fc27;
case 0x48fc2d:c.instructions+=5;goto B48fc2d;
case 0x48fc2f:c.instructions+=4;goto B48fc2f;
case 0x48fc34:c.instructions+=3;goto B48fc34;
case 0x48fc37:c.instructions+=2;goto B48fc37;
case 0x48fc3d:c.instructions+=1;goto B48fc3d;
case 0x48fc40:goto L48fc40;
case 0x48fc44:c.instructions+=9;goto B48fc44;
case 0x48fc4a:c.instructions+=8;goto B48fc4a;
case 0x48fc4c:c.instructions+=7;goto B48fc4c;
case 0x48fc4d:c.instructions+=6;goto B48fc4d;
case 0x48fc4e:c.instructions+=5;goto B48fc4e;
case 0x48fc55:c.instructions+=4;goto B48fc55;
case 0x48fc56:c.instructions+=3;goto B48fc56;
case 0x48fc57:c.instructions+=2;goto B48fc57;
case 0x48fc59:c.instructions+=1;goto B48fc59;
case 0x48fc5b:goto L48fc5b;
case 0x48fc5d:c.instructions+=1;goto B48fc5d;
case 0x48fc5f:goto L48fc5f;
case 0x48fc62:goto L48fc62;
case 0x48fc69:c.instructions+=2;goto B48fc69;
case 0x48fc6b:c.instructions+=1;goto B48fc6b;
case 0x48fc6d:goto L48fc6d;
case 0x48fc6f:c.instructions+=1;goto B48fc6f;
case 0x48fc71:goto L48fc71;
case 0x48fc74:goto L48fc74;
case 0x48fc76:c.instructions+=1;goto B48fc76;
case 0x48fc78:goto L48fc78;
case 0x48fc7d:goto L48fc7d;
case 0x48fc7f:c.instructions+=1;goto B48fc7f;
case 0x48fc81:goto L48fc81;
case 0x48fc86:goto L48fc86;
case 0x48fc87:c.instructions+=3;goto B48fc87;
case 0x48fc8a:c.instructions+=2;goto B48fc8a;
case 0x48fc8b:c.instructions+=1;goto B48fc8b;
case 0x48fc90:goto L48fc90;
case 0x48fc93:c.instructions+=4;goto B48fc93;
case 0x48fc95:c.instructions+=3;goto B48fc95;
case 0x48fc98:c.instructions+=2;goto B48fc98;
case 0x48fc9b:c.instructions+=1;goto B48fc9b;
case 0x48fc9d:goto L48fc9d;
case 0x48fc9e:c.instructions+=2;goto B48fc9e;
case 0x48fc9f:c.instructions+=1;goto B48fc9f;
case 0x48fca4:goto L48fca4;
case 0x48fca7:goto L48fca7;
case 0x48fca8:c.instructions+=2;goto B48fca8;
case 0x48fcab:c.instructions+=1;goto B48fcab;
case 0x48fcb0:goto L48fcb0;
case 0x48fcb3:c.instructions+=13;goto B48fcb3;
case 0x48fcba:c.instructions+=12;goto B48fcba;
case 0x48fcbd:c.instructions+=11;goto B48fcbd;
case 0x48fcc4:c.instructions+=10;goto B48fcc4;
case 0x48fcc9:c.instructions+=9;goto B48fcc9;
case 0x48fcca:c.instructions+=8;goto B48fcca;
case 0x48fccc:c.instructions+=7;goto B48fccc;
case 0x48fcd0:c.instructions+=6;goto B48fcd0;
case 0x48fcd6:c.instructions+=5;goto B48fcd6;
case 0x48fcdb:c.instructions+=4;goto B48fcdb;
case 0x48fcdc:c.instructions+=3;goto B48fcdc;
case 0x48fcdf:c.instructions+=2;goto B48fcdf;
case 0x48fce5:c.instructions+=1;goto B48fce5;
case 0x48fcea:goto L48fcea;
case 0x48fcee:c.instructions+=3;goto B48fcee;
case 0x48fcf3:c.instructions+=2;goto B48fcf3;
case 0x48fcf4:c.instructions+=1;goto B48fcf4;
case 0x48fcf9:goto L48fcf9;
case 0x48fcfc:c.instructions+=8;goto B48fcfc;
case 0x48fcfd:c.instructions+=7;goto B48fcfd;
case 0x48fd00:c.instructions+=6;goto B48fd00;
case 0x48fd02:c.instructions+=5;goto B48fd02;
case 0x48fd03:c.instructions+=4;goto B48fd03;
case 0x48fd04:c.instructions+=3;goto B48fd04;
case 0x48fd05:c.instructions+=2;goto B48fd05;
case 0x48fd0b:c.instructions+=1;goto B48fd0b;
case 0x48fd10:goto L48fd10;
case 0x48fd12:c.instructions+=6;goto B48fd12;
case 0x48fd15:c.instructions+=5;goto B48fd15;
case 0x48fd17:c.instructions+=4;goto B48fd17;
case 0x48fd1a:c.instructions+=3;goto B48fd1a;
case 0x48fd1d:c.instructions+=2;goto B48fd1d;
case 0x48fd1e:c.instructions+=1;goto B48fd1e;
case 0x48fd23:goto L48fd23;
case 0x48fd24:c.instructions+=1;goto B48fd24;
case 0x48fd30:goto L48fd30;
case 0x48fd34:c.instructions+=6;goto B48fd34;
case 0x48fd36:c.instructions+=5;goto B48fd36;
case 0x48fd37:c.instructions+=4;goto B48fd37;
case 0x48fd3b:c.instructions+=3;goto B48fd3b;
case 0x48fd3c:c.instructions+=2;goto B48fd3c;
case 0x48fd3e:c.instructions+=1;goto B48fd3e;
case 0x48fd40:goto L48fd40;
case 0x48fd43:c.instructions+=2;goto B48fd43;
case 0x48fd45:c.instructions+=1;goto B48fd45;
case 0x48fd47:goto L48fd47;
case 0x48fd4a:c.instructions+=2;goto B48fd4a;
case 0x48fd4c:c.instructions+=1;goto B48fd4c;
case 0x48fd4e:goto L48fd4e;
case 0x48fd51:c.instructions+=7;goto B48fd51;
case 0x48fd54:c.instructions+=6;goto B48fd54;
case 0x48fd56:c.instructions+=5;goto B48fd56;
case 0x48fd58:c.instructions+=4;goto B48fd58;
case 0x48fd59:c.instructions+=3;goto B48fd59;
case 0x48fd5a:c.instructions+=2;goto B48fd5a;
case 0x48fd5b:c.instructions+=1;goto B48fd5b;
case 0x48fd60:goto L48fd60;
case 0x48fd63:c.instructions+=2;goto B48fd63;
case 0x48fd65:c.instructions+=1;goto B48fd65;
case 0x48fd67:goto L48fd67;
case 0x48fd6a:c.instructions+=7;goto B48fd6a;
case 0x48fd6d:c.instructions+=6;goto B48fd6d;
case 0x48fd73:c.instructions+=5;goto B48fd73;
case 0x48fd78:c.instructions+=4;goto B48fd78;
case 0x48fd79:c.instructions+=3;goto B48fd79;
case 0x48fd7e:c.instructions+=2;goto B48fd7e;
case 0x48fd84:c.instructions+=1;goto B48fd84;
case 0x48fd86:goto L48fd86;
case 0x48fd89:c.instructions+=2;goto B48fd89;
case 0x48fd8b:c.instructions+=1;goto B48fd8b;
case 0x48fd8d:goto L48fd8d;
case 0x48fd90:c.instructions+=2;goto B48fd90;
case 0x48fd92:c.instructions+=1;goto B48fd92;
case 0x48fd94:goto L48fd94;
case 0x48fd97:c.instructions+=2;goto B48fd97;
case 0x48fd99:c.instructions+=1;goto B48fd99;
case 0x48fd9b:goto L48fd9b;
case 0x48fd9e:c.instructions+=6;goto B48fd9e;
case 0x48fda0:c.instructions+=5;goto B48fda0;
case 0x48fda2:c.instructions+=4;goto B48fda2;
case 0x48fda3:c.instructions+=3;goto B48fda3;
case 0x48fda4:c.instructions+=2;goto B48fda4;
case 0x48fda5:c.instructions+=1;goto B48fda5;
case 0x48fdaa:goto L48fdaa;
case 0x48fdad:c.instructions+=2;goto B48fdad;
case 0x48fdaf:c.instructions+=1;goto B48fdaf;
case 0x48fdb1:goto L48fdb1;
case 0x48fdb4:c.instructions+=2;goto B48fdb4;
case 0x48fdb7:c.instructions+=1;goto B48fdb7;
case 0x48fdb9:goto L48fdb9;
case 0x48fdbb:c.instructions+=2;goto B48fdbb;
case 0x48fdbe:c.instructions+=1;goto B48fdbe;
case 0x48fdc0:goto L48fdc0;
case 0x48fdc3:goto L48fdc3;
case 0x48fdc7:c.instructions+=6;goto B48fdc7;
case 0x48fdc8:c.instructions+=5;goto B48fdc8;
case 0x48fdca:c.instructions+=4;goto B48fdca;
case 0x48fdcd:c.instructions+=3;goto B48fdcd;
case 0x48fdd4:c.instructions+=2;goto B48fdd4;
case 0x48fddb:c.instructions+=1;goto B48fddb;
case 0x48fde0:goto L48fde0;
case 0x48fde7:c.instructions+=2;goto B48fde7;
case 0x48fdf1:c.instructions+=1;goto B48fdf1;
case 0x48fdf3:goto L48fdf3;
case 0x48fdf9:goto L48fdf9;
case 0x48fdfa:c.instructions+=2;goto B48fdfa;
case 0x48fdfb:c.instructions+=1;goto B48fdfb;
case 0x48fe00:goto L48fe00;
case 0x48fe04:c.instructions+=7;goto B48fe04;
case 0x48fe06:c.instructions+=6;goto B48fe06;
case 0x48fe0b:c.instructions+=5;goto B48fe0b;
case 0x48fe0c:c.instructions+=4;goto B48fe0c;
case 0x48fe12:c.instructions+=3;goto B48fe12;
case 0x48fe14:c.instructions+=2;goto B48fe14;
case 0x48fe15:c.instructions+=1;goto B48fe15;
case 0x48fe17:goto L48fe17;
case 0x48fe1a:c.instructions+=2;goto B48fe1a;
case 0x48fe1c:c.instructions+=1;goto B48fe1c;
case 0x48fe1e:goto L48fe1e;
case 0x48fe21:c.instructions+=2;goto B48fe21;
case 0x48fe23:c.instructions+=1;goto B48fe23;
case 0x48fe25:goto L48fe25;
case 0x48fe28:c.instructions+=6;goto B48fe28;
case 0x48fe2a:c.instructions+=5;goto B48fe2a;
case 0x48fe2c:c.instructions+=4;goto B48fe2c;
case 0x48fe2d:c.instructions+=3;goto B48fe2d;
case 0x48fe2e:c.instructions+=2;goto B48fe2e;
case 0x48fe2f:c.instructions+=1;goto B48fe2f;
case 0x48fe34:goto L48fe34;
case 0x48fe37:c.instructions+=2;goto B48fe37;
case 0x48fe39:c.instructions+=1;goto B48fe39;
case 0x48fe3b:goto L48fe3b;
case 0x48fe3e:c.instructions+=2;goto B48fe3e;
case 0x48fe40:c.instructions+=1;goto B48fe40;
case 0x48fe42:goto L48fe42;
case 0x48fe45:c.instructions+=2;goto B48fe45;
case 0x48fe47:c.instructions+=1;goto B48fe47;
case 0x48fe49:goto L48fe49;
case 0x48fe4c:c.instructions+=2;goto B48fe4c;
case 0x48fe4e:c.instructions+=1;goto B48fe4e;
case 0x48fe50:goto L48fe50;
case 0x48fe53:c.instructions+=2;goto B48fe53;
case 0x48fe55:c.instructions+=1;goto B48fe55;
case 0x48fe57:goto L48fe57;
case 0x48fe59:goto L48fe59;
case 0x48fe60:goto L48fe60;
case 0x48fe64:c.instructions+=14;goto B48fe64;
case 0x48fe66:c.instructions+=13;goto B48fe66;
case 0x48fe6a:c.instructions+=12;goto B48fe6a;
case 0x48fe6b:c.instructions+=11;goto B48fe6b;
case 0x48fe6f:c.instructions+=10;goto B48fe6f;
case 0x48fe70:c.instructions+=9;goto B48fe70;
case 0x48fe74:c.instructions+=8;goto B48fe74;
case 0x48fe76:c.instructions+=7;goto B48fe76;
case 0x48fe79:c.instructions+=6;goto B48fe79;
case 0x48fe7d:c.instructions+=5;goto B48fe7d;
case 0x48fe80:c.instructions+=4;goto B48fe80;
case 0x48fe83:c.instructions+=3;goto B48fe83;
case 0x48fe86:c.instructions+=2;goto B48fe86;
case 0x48fe89:c.instructions+=1;goto B48fe89;
case 0x48fe8b:goto L48fe8b;
case 0x48fe8d:c.instructions+=1;goto B48fe8d;
case 0x48fe90:goto L48fe90;
case 0x48fe93:c.instructions+=8;goto B48fe93;
case 0x48fe95:c.instructions+=7;goto B48fe95;
case 0x48fe98:c.instructions+=6;goto B48fe98;
case 0x48fe9b:c.instructions+=5;goto B48fe9b;
case 0x48fe9e:c.instructions+=4;goto B48fe9e;
case 0x48fea0:c.instructions+=3;goto B48fea0;
case 0x48fea3:c.instructions+=2;goto B48fea3;
case 0x48fea4:c.instructions+=1;goto B48fea4;
case 0x48fea6:goto L48fea6;
case 0x48feac:c.instructions+=7;goto B48feac;
case 0x48feae:c.instructions+=6;goto B48feae;
case 0x48feb3:c.instructions+=5;goto B48feb3;
case 0x48feb4:c.instructions+=4;goto B48feb4;
case 0x48feb7:c.instructions+=3;goto B48feb7;
case 0x48febd:c.instructions+=2;goto B48febd;
case 0x48febe:c.instructions+=1;goto B48febe;
case 0x48fed0:goto L48fed0;
case 0x48fed1:c.instructions+=8;goto B48fed1;
case 0x48fed2:c.instructions+=7;goto B48fed2;
case 0x48fed4:c.instructions+=6;goto B48fed4;
case 0x48fed7:c.instructions+=5;goto B48fed7;
case 0x48fed8:c.instructions+=4;goto B48fed8;
case 0x48feda:c.instructions+=3;goto B48feda;
case 0x48fedc:c.instructions+=2;goto B48fedc;
case 0x48fee0:c.instructions+=1;goto B48fee0;
case 0x48fee2:goto L48fee2;
case 0x48fee3:c.instructions+=1;goto B48fee3;
case 0x48fee4:goto L48fee4;
case 0x48fee7:c.instructions+=5;goto B48fee7;
case 0x48feeb:c.instructions+=4;goto B48feeb;
case 0x48feed:c.instructions+=3;goto B48feed;
case 0x48fef0:c.instructions+=2;goto B48fef0;
case 0x48fef2:c.instructions+=1;goto B48fef2;
case 0x48fef4:goto L48fef4;
case 0x48fef7:c.instructions+=2;goto B48fef7;
case 0x48fef9:c.instructions+=1;goto B48fef9;
case 0x48ff00:goto L48ff00;
case 0x48ff02:c.instructions+=2;goto B48ff02;
case 0x48ff04:c.instructions+=1;goto B48ff04;
case 0x48ff06:goto L48ff06;
case 0x48ff09:c.instructions+=2;goto B48ff09;
case 0x48ff0a:c.instructions+=1;goto B48ff0a;
case 0x48ff0f:goto L48ff0f;
case 0x48ff12:c.instructions+=2;goto B48ff12;
case 0x48ff13:c.instructions+=1;goto B48ff13;
case 0x48ff15:goto L48ff15;
case 0x48ff19:c.instructions+=6;goto B48ff19;
case 0x48ff1c:c.instructions+=5;goto B48ff1c;
case 0x48ff1d:c.instructions+=4;goto B48ff1d;
case 0x48ff20:c.instructions+=3;goto B48ff20;
case 0x48ff22:c.instructions+=2;goto B48ff22;
case 0x48ff26:c.instructions+=1;goto B48ff26;
case 0x48ff28:goto L48ff28;
case 0x48ff29:c.instructions+=1;goto B48ff29;
case 0x48ff2a:goto L48ff2a;
case 0x48ff2c:c.instructions+=7;goto B48ff2c;
case 0x48ff2f:c.instructions+=6;goto B48ff2f;
case 0x48ff31:c.instructions+=5;goto B48ff31;
case 0x48ff32:c.instructions+=4;goto B48ff32;
case 0x48ff35:c.instructions+=3;goto B48ff35;
case 0x48ff36:c.instructions+=2;goto B48ff36;
case 0x48ff37:c.instructions+=1;goto B48ff37;
case 0x48ff40:goto L48ff40;
case 0x48ff43:c.instructions+=8;goto B48ff43;
case 0x48ff45:c.instructions+=7;goto B48ff45;
case 0x48ff48:c.instructions+=6;goto B48ff48;
case 0x48ff49:c.instructions+=5;goto B48ff49;
case 0x48ff4d:c.instructions+=4;goto B48ff4d;
case 0x48ff50:c.instructions+=3;goto B48ff50;
case 0x48ff52:c.instructions+=2;goto B48ff52;
case 0x48ff54:c.instructions+=1;goto B48ff54;
case 0x48ff5a:goto L48ff5a;
case 0x48ff5b:c.instructions+=9;goto B48ff5b;
case 0x48ff5c:c.instructions+=8;goto B48ff5c;
case 0x48ff5d:c.instructions+=7;goto B48ff5d;
case 0x48ff60:c.instructions+=6;goto B48ff60;
case 0x48ff64:c.instructions+=5;goto B48ff64;
case 0x48ff66:c.instructions+=4;goto B48ff66;
case 0x48ff68:c.instructions+=3;goto B48ff68;
case 0x48ff6b:c.instructions+=2;goto B48ff6b;
case 0x48ff70:c.instructions+=1;goto B48ff70;
case 0x48ff76:goto L48ff76;
case 0x48ff79:c.instructions+=2;goto B48ff79;
case 0x48ff7d:c.instructions+=1;goto B48ff7d;
case 0x48ff80:goto L48ff80;
case 0x48ff83:c.instructions+=6;goto B48ff83;
case 0x48ff87:c.instructions+=5;goto B48ff87;
case 0x48ff8a:c.instructions+=4;goto B48ff8a;
case 0x48ff8c:c.instructions+=3;goto B48ff8c;
case 0x48ff92:c.instructions+=2;goto B48ff92;
case 0x48ff98:c.instructions+=1;goto B48ff98;
case 0x48ff9a:goto L48ff9a;
case 0x48ff9d:c.instructions+=2;goto B48ff9d;
case 0x48ff9f:c.instructions+=1;goto B48ff9f;
case 0x48ffa1:goto L48ffa1;
case 0x48ffa4:c.instructions+=2;goto B48ffa4;
case 0x48ffa6:c.instructions+=1;goto B48ffa6;
case 0x48ffa8:goto L48ffa8;
case 0x48ffab:c.instructions+=6;goto B48ffab;
case 0x48ffad:c.instructions+=5;goto B48ffad;
case 0x48ffae:c.instructions+=4;goto B48ffae;
case 0x48ffaf:c.instructions+=3;goto B48ffaf;
case 0x48ffb0:c.instructions+=2;goto B48ffb0;
case 0x48ffb1:c.instructions+=1;goto B48ffb1;
case 0x48ffb6:goto L48ffb6;
case 0x48ffb9:c.instructions+=2;goto B48ffb9;
case 0x48ffbb:c.instructions+=1;goto B48ffbb;
case 0x48ffbd:goto L48ffbd;
case 0x48ffc0:c.instructions+=2;goto B48ffc0;
case 0x48ffc2:c.instructions+=1;goto B48ffc2;
case 0x48ffc4:goto L48ffc4;
case 0x48ffc7:c.instructions+=1;goto B48ffc7;
case 0x48ffc9:goto L48ffc9;
case 0x48ffcc:c.instructions+=1;goto B48ffcc;
case 0x48ffce:goto L48ffce;
case 0x48ffd1:c.instructions+=1;goto B48ffd1;
case 0x48ffd3:goto L48ffd3;
case 0x48ffd6:c.instructions+=1;goto B48ffd6;
case 0x48ffdb:goto L48ffdb;
case 0x48ffdd:c.instructions+=1;goto B48ffdd;
case 0x48ffdf:goto L48ffdf;
case 0x48ffe2:c.instructions+=2;goto B48ffe2;
case 0x48ffe4:c.instructions+=1;goto B48ffe4;
case 0x48ffe6:goto L48ffe6;
case 0x48ffea:c.instructions+=4;goto B48ffea;
case 0x48ffed:c.instructions+=3;goto B48ffed;
case 0x48ffee:c.instructions+=2;goto B48ffee;
case 0x48fff2:c.instructions+=1;goto B48fff2;
case 0x48fff4:goto L48fff4;
case 0x48fff8:c.instructions+=3;goto B48fff8;
case 0x48fffb:c.instructions+=2;goto B48fffb;
case 0x48fffe:c.instructions+=1;goto B48fffe;
default:missing_instruction(c.pc);}
B48f000:L48f000:{c.instructions+=6;NFSU2_TR(0x48f000);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f004:{NFSU2_TR(0x48f004);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B48f009:{NFSU2_TR(0x48f009);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48f00b:{NFSU2_TR(0x48f00b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f00f:{NFSU2_TR(0x48f00f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48f013:{NFSU2_TR(0x48f013);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48f01b;}}
}
B48f015:L48f015:{c.instructions+=1;NFSU2_TR(0x48f015);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f01b:L48f01b:{c.instructions+=4;NFSU2_TR(0x48f01b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48f01e:{NFSU2_TR(0x48f01e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f022:{NFSU2_TR(0x48f022);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48f024:{NFSU2_TR(0x48f024);
if(r1(R+518)){{goto L48f06c;}}
}
B48f026:L48f026:{c.instructions+=12;NFSU2_TR(0x48f026);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f02a:{NFSU2_TR(0x48f02a);
{u32 ea_=u32(u32(7919484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f030:{NFSU2_TR(0x48f030);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f037:{NFSU2_TR(0x48f037);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f03e:{NFSU2_TR(0x48f03e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f042:{NFSU2_TR(0x48f042);
{u32 ea_=u32(u32(7919484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f048:{NFSU2_TR(0x48f048);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f04f:{NFSU2_TR(0x48f04f);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f056:{NFSU2_TR(0x48f056);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f05a:{NFSU2_TR(0x48f05a);
{u32 ea_=u32(u32(7919484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f060:{NFSU2_TR(0x48f060);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f067:{NFSU2_TR(0x48f067);
{goto L48f12f;}
}
B48f06c:L48f06c:{c.instructions+=6;NFSU2_TR(0x48f06c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f06f:{NFSU2_TR(0x48f06f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f070:{NFSU2_TR(0x48f070);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f076:{NFSU2_TR(0x48f076);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f07c:{NFSU2_TR(0x48f07c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f07f:{NFSU2_TR(0x48f07f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f084ull));
TAIL_STATIC(0x43c350u,43c);
}
B48f084:L48f084:{c.instructions+=16;NFSU2_TR(0x48f084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f087:{NFSU2_TR(0x48f087);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f08b:{NFSU2_TR(0x48f08b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f08d:{NFSU2_TR(0x48f08d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48f091:{NFSU2_TR(0x48f091);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48f094:{NFSU2_TR(0x48f094);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f098:{NFSU2_TR(0x48f098);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f09b:{NFSU2_TR(0x48f09b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48f09e:{NFSU2_TR(0x48f09e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f0a2:{NFSU2_TR(0x48f0a2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f0a5:{NFSU2_TR(0x48f0a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f0a9:{NFSU2_TR(0x48f0a9);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48f0ac:{NFSU2_TR(0x48f0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f0ad:{NFSU2_TR(0x48f0ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f0ae:{NFSU2_TR(0x48f0ae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f0b2:{NFSU2_TR(0x48f0b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f0b7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B48f0b7:L48f0b7:{c.instructions+=13;NFSU2_TR(0x48f0b7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f0bb:{NFSU2_TR(0x48f0bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48f0be:{NFSU2_TR(0x48f0be);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f0c1:{NFSU2_TR(0x48f0c1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f0c5:{NFSU2_TR(0x48f0c5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f0c8:{NFSU2_TR(0x48f0c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f0ca:{NFSU2_TR(0x48f0ca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f0ce:{NFSU2_TR(0x48f0ce);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f0d1:{NFSU2_TR(0x48f0d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f0d3:{NFSU2_TR(0x48f0d3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48f0d7:{NFSU2_TR(0x48f0d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48f0d9:{NFSU2_TR(0x48f0d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48f0dc:{NFSU2_TR(0x48f0dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48f0f0;}}
}
B48f0de:L48f0de:{c.instructions+=5;NFSU2_TR(0x48f0de);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48f0e2:{NFSU2_TR(0x48f0e2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f0e8:{NFSU2_TR(0x48f0e8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48f0ec:{NFSU2_TR(0x48f0ec);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B48f0ee:{NFSU2_TR(0x48f0ee);
{goto L48f0f8;}
}
B48f0f0:L48f0f0:{c.instructions+=2;NFSU2_TR(0x48f0f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48f0f2:{NFSU2_TR(0x48f0f2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f0f8:L48f0f8:{c.instructions+=11;NFSU2_TR(0x48f0f8);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f0ff:{NFSU2_TR(0x48f0ff);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f103:{NFSU2_TR(0x48f103);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48f105:{NFSU2_TR(0x48f105);
{u32 ea_=u32(u32(7919484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f10b:{NFSU2_TR(0x48f10b);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f112:{NFSU2_TR(0x48f112);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f116:{NFSU2_TR(0x48f116);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48f118:{NFSU2_TR(0x48f118);
{u32 ea_=u32(u32(7919484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f11e:{NFSU2_TR(0x48f11e);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f125:{NFSU2_TR(0x48f125);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f129:{NFSU2_TR(0x48f129);
{u32 ea_=u32(u32(7919484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f12f:L48f12f:{c.instructions+=6;NFSU2_TR(0x48f12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f133:{NFSU2_TR(0x48f133);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f13a:{NFSU2_TR(0x48f13a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B48f13b:{NFSU2_TR(0x48f13b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B48f13e:{NFSU2_TR(0x48f13e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48f140:{NFSU2_TR(0x48f140);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x48ef91u,48e);}
}
B48f146:L48f146:{c.instructions+=5;NFSU2_TR(0x48f146);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48f148:{NFSU2_TR(0x48f148);
__builtin_memmove((R+28),(R+0),4);
}
B48f14a:{NFSU2_TR(0x48f14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f14d:{NFSU2_TR(0x48f14d);
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
B48f14f:{NFSU2_TR(0x48f14f);
if(r1(R+518)){{goto L48f218;}}
}
B48f155:L48f155:{c.instructions+=4;NFSU2_TR(0x48f155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f156:{NFSU2_TR(0x48f156);
u8 U[4];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48f15d:{NFSU2_TR(0x48f15d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f15e:{NFSU2_TR(0x48f15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f163ull));
TAIL_STATIC(0x5bb190u,5bb);
}
B48f163:L48f163:{c.instructions+=4;NFSU2_TR(0x48f163);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48f166:{NFSU2_TR(0x48f166);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48f169:{NFSU2_TR(0x48f169);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48f16b:{NFSU2_TR(0x48f16b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48f218;}}
}
B48f171:L48f171:{c.instructions+=2;NFSU2_TR(0x48f171);
u8 U[4];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f178:{NFSU2_TR(0x48f178);
{goto L48f180;}
}
B48f180:L48f180:{c.instructions+=36;NFSU2_TR(0x48f180);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f187:{NFSU2_TR(0x48f187);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B48f18a:{NFSU2_TR(0x48f18a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B48f18b:{NFSU2_TR(0x48f18b);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f18e:{NFSU2_TR(0x48f18e);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f195:{NFSU2_TR(0x48f195);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f198:{NFSU2_TR(0x48f198);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f19a:{NFSU2_TR(0x48f19a);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1a1:{NFSU2_TR(0x48f1a1);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1a4:{NFSU2_TR(0x48f1a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f1a6:{NFSU2_TR(0x48f1a6);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f1ad:{NFSU2_TR(0x48f1ad);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1b4:{NFSU2_TR(0x48f1b4);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1b7:{NFSU2_TR(0x48f1b7);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1be:{NFSU2_TR(0x48f1be);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1c1:{NFSU2_TR(0x48f1c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f1c3:{NFSU2_TR(0x48f1c3);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1ca:{NFSU2_TR(0x48f1ca);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1cd:{NFSU2_TR(0x48f1cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f1cf:{NFSU2_TR(0x48f1cf);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f1d6:{NFSU2_TR(0x48f1d6);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1dd:{NFSU2_TR(0x48f1dd);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1e0:{NFSU2_TR(0x48f1e0);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1e7:{NFSU2_TR(0x48f1e7);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1ea:{NFSU2_TR(0x48f1ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f1ec:{NFSU2_TR(0x48f1ec);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f1f3:{NFSU2_TR(0x48f1f3);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f1f6:{NFSU2_TR(0x48f1f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f1f8:{NFSU2_TR(0x48f1f8);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f1ff:{NFSU2_TR(0x48f1ff);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f203:{NFSU2_TR(0x48f203);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f207:{NFSU2_TR(0x48f207);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48f209:{NFSU2_TR(0x48f209);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f20c:{NFSU2_TR(0x48f20c);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f20f:{NFSU2_TR(0x48f20f);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f212:{NFSU2_TR(0x48f212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f180u);}goto L48f180;}}
}
B48f218:L48f218:{c.instructions+=3;NFSU2_TR(0x48f218);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B48f21b:{NFSU2_TR(0x48f21b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48f21d:{NFSU2_TR(0x48f21d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48f2df;}}
}
B48f223:L48f223:{c.instructions+=2;NFSU2_TR(0x48f223);
__builtin_memmove((R+12),(R+28),4);
}
B48f225:{NFSU2_TR(0x48f225);
{goto L48f230;}
}
B48f230:L48f230:{c.instructions+=5;NFSU2_TR(0x48f230);
u8 U[12];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48f237:{NFSU2_TR(0x48f237);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f238:{NFSU2_TR(0x48f238);
u8 U[12];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48f23f:{NFSU2_TR(0x48f23f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f240:{NFSU2_TR(0x48f240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f245ull));
TAIL_STATIC(0x43cf10u,43c);
}
B48f245:L48f245:{c.instructions+=19;NFSU2_TR(0x48f245);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f24c:{NFSU2_TR(0x48f24c);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f253:{NFSU2_TR(0x48f253);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B48f25a:{NFSU2_TR(0x48f25a);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f261:{NFSU2_TR(0x48f261);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f265:{NFSU2_TR(0x48f265);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f26b:{NFSU2_TR(0x48f26b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48f26e:{NFSU2_TR(0x48f26e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B48f271:{NFSU2_TR(0x48f271);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B48f272:{NFSU2_TR(0x48f272);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f279:{NFSU2_TR(0x48f279);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48f27b:{NFSU2_TR(0x48f27b);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f281:{NFSU2_TR(0x48f281);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f288:{NFSU2_TR(0x48f288);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f28e:{NFSU2_TR(0x48f28e);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f295:{NFSU2_TR(0x48f295);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f299:{NFSU2_TR(0x48f299);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f29f:{NFSU2_TR(0x48f29f);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f2a6:{NFSU2_TR(0x48f2a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f230u);}goto L48f230;}}
}
B48f2a8:L48f2a8:{c.instructions+=3;NFSU2_TR(0x48f2a8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48f2aa:{NFSU2_TR(0x48f2aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48f2ac:{NFSU2_TR(0x48f2ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48f2df;}}
}
B48f2ae:L48f2ae:{c.instructions+=2;NFSU2_TR(0x48f2ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f2b5:{NFSU2_TR(0x48f2b5);
__builtin_memmove((R+4),(R+28),4);
}
B48f2b7:L48f2b7:{c.instructions+=12;NFSU2_TR(0x48f2b7);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f2ba:{NFSU2_TR(0x48f2ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B48f2bd:{NFSU2_TR(0x48f2bd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B48f2be:{NFSU2_TR(0x48f2be);
{u32 ea_=u32(u32(7920060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f2c4:{NFSU2_TR(0x48f2c4);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f2c7:{NFSU2_TR(0x48f2c7);
{u32 ea_=u32(u32(7920056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f2cd:{NFSU2_TR(0x48f2cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f2cf:{NFSU2_TR(0x48f2cf);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f2d2:{NFSU2_TR(0x48f2d2);
{u32 ea_=u32(u32(7920052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f2d8:{NFSU2_TR(0x48f2d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48f2da:{NFSU2_TR(0x48f2da);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f2dd:{NFSU2_TR(0x48f2dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f2b7u);}goto L48f2b7;}}
}
B48f2df:L48f2df:{c.instructions+=40;NFSU2_TR(0x48f2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48f2e2:{NFSU2_TR(0x48f2e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f2e9:{NFSU2_TR(0x48f2e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f2f0:{NFSU2_TR(0x48f2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f2f7:{NFSU2_TR(0x48f2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f2fa:{NFSU2_TR(0x48f2fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f301:{NFSU2_TR(0x48f301);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f304:{NFSU2_TR(0x48f304);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f30b:{NFSU2_TR(0x48f30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f30e:{NFSU2_TR(0x48f30e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f315:{NFSU2_TR(0x48f315);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f318:{NFSU2_TR(0x48f318);
u8 U[8];
w4(U+0,u32(u32(u32(0x300ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f31f:{NFSU2_TR(0x48f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f322:{NFSU2_TR(0x48f322);
u8 U[8];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f329:{NFSU2_TR(0x48f329);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f32c:{NFSU2_TR(0x48f32c);
u8 U[8];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f333:{NFSU2_TR(0x48f333);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f336:{NFSU2_TR(0x48f336);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f33d:{NFSU2_TR(0x48f33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f340:{NFSU2_TR(0x48f340);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f347:{NFSU2_TR(0x48f347);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f34a:{NFSU2_TR(0x48f34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f351:{NFSU2_TR(0x48f351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B48f353:{NFSU2_TR(0x48f353);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f35a:{NFSU2_TR(0x48f35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f35d:{NFSU2_TR(0x48f35d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f364:{NFSU2_TR(0x48f364);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f367:{NFSU2_TR(0x48f367);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f36e:{NFSU2_TR(0x48f36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f371:{NFSU2_TR(0x48f371);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f378:{NFSU2_TR(0x48f378);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f37b:{NFSU2_TR(0x48f37b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f382:{NFSU2_TR(0x48f382);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f385:{NFSU2_TR(0x48f385);
u8 U[8];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f38c:{NFSU2_TR(0x48f38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f38f:{NFSU2_TR(0x48f38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f392:{NFSU2_TR(0x48f392);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f395:{NFSU2_TR(0x48f395);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f399:{NFSU2_TR(0x48f399);
w4(R+4,u32(0xaull));
}
B48f39e:{NFSU2_TR(0x48f39e);
__builtin_memmove((R+28),(R+28),4);
}
B48f3a0:L48f3a0:{c.instructions+=7;NFSU2_TR(0x48f3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f3a3:{NFSU2_TR(0x48f3a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48f3a5:{NFSU2_TR(0x48f3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f3a8:{NFSU2_TR(0x48f3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f3ab:{NFSU2_TR(0x48f3ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B48f3ae:{NFSU2_TR(0x48f3ae);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B48f3af:{NFSU2_TR(0x48f3af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f3a0u);}goto L48f3a0;}}
}
B48f3b1:L48f3b1:{c.instructions+=2;NFSU2_TR(0x48f3b1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48f3b3:{NFSU2_TR(0x48f3b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48f3df;}}
}
B48f3b5:L48f3b5:{c.instructions+=1;NFSU2_TR(0x48f3b5);
{goto L48f3c0;}
}
B48f3c0:L48f3c0:{c.instructions+=6;NFSU2_TR(0x48f3c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48f3c7:{NFSU2_TR(0x48f3c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f3c8:{NFSU2_TR(0x48f3c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48f3cf:{NFSU2_TR(0x48f3cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f3d0:{NFSU2_TR(0x48f3d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48f3d4:{NFSU2_TR(0x48f3d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f3d9ull));
TAIL_STATIC(0x489af0u,489);
}
B48f3d9:L48f3d9:{c.instructions+=3;NFSU2_TR(0x48f3d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B48f3dc:{NFSU2_TR(0x48f3dc);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B48f3dd:{NFSU2_TR(0x48f3dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f3c0u);}goto L48f3c0;}}
}
B48f3df:L48f3df:{c.instructions+=10;NFSU2_TR(0x48f3df);
__builtin_memmove((R+8),gp(0x7f39c0),4);
}
B48f3e5:{NFSU2_TR(0x48f3e5);
__builtin_memmove((R+0),gp(0x7f39bc),4);
}
B48f3ea:{NFSU2_TR(0x48f3ea);
__builtin_memmove((R+4),gp(0x7f39b8),4);
}
B48f3f0:{NFSU2_TR(0x48f3f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f3f1:{NFSU2_TR(0x48f3f1);
__builtin_memmove((R+8),gp(0x82dae4),4);
}
B48f3f7:{NFSU2_TR(0x48f3f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f3f8:{NFSU2_TR(0x48f3f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f3f9:{NFSU2_TR(0x48f3f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f3fa:{NFSU2_TR(0x48f3fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48f3fe:{NFSU2_TR(0x48f3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f403ull));
TAIL_STATIC(0x489ed0u,489);
}
B48f403:L48f403:{c.instructions+=87;NFSU2_TR(0x48f403);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f407:{NFSU2_TR(0x48f407);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f40b:{NFSU2_TR(0x48f40b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f40f:{NFSU2_TR(0x48f40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f415:{NFSU2_TR(0x48f415);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f419:{NFSU2_TR(0x48f419);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f41f:{NFSU2_TR(0x48f41f);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f423:{NFSU2_TR(0x48f423);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f429:{NFSU2_TR(0x48f429);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f42d:{NFSU2_TR(0x48f42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f433:{NFSU2_TR(0x48f433);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f437:{NFSU2_TR(0x48f437);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f43d:{NFSU2_TR(0x48f43d);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f441:{NFSU2_TR(0x48f441);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f447:{NFSU2_TR(0x48f447);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f44e:{NFSU2_TR(0x48f44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f454:{NFSU2_TR(0x48f454);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f45b:{NFSU2_TR(0x48f45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f461:{NFSU2_TR(0x48f461);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f468:{NFSU2_TR(0x48f468);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f46e:{NFSU2_TR(0x48f46e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f475:{NFSU2_TR(0x48f475);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f47b:{NFSU2_TR(0x48f47b);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f482:{NFSU2_TR(0x48f482);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f488:{NFSU2_TR(0x48f488);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f48f:{NFSU2_TR(0x48f48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f495:{NFSU2_TR(0x48f495);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f49c:{NFSU2_TR(0x48f49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4a2:{NFSU2_TR(0x48f4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f4a9:{NFSU2_TR(0x48f4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4af:{NFSU2_TR(0x48f4af);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f4b6:{NFSU2_TR(0x48f4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4bc:{NFSU2_TR(0x48f4bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f4c3:{NFSU2_TR(0x48f4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4c9:{NFSU2_TR(0x48f4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f4d0:{NFSU2_TR(0x48f4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4d6:{NFSU2_TR(0x48f4d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f4dd:{NFSU2_TR(0x48f4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4e3:{NFSU2_TR(0x48f4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f4ea:{NFSU2_TR(0x48f4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4f0:{NFSU2_TR(0x48f4f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f4f7:{NFSU2_TR(0x48f4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f4fd:{NFSU2_TR(0x48f4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f504:{NFSU2_TR(0x48f504);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f50a:{NFSU2_TR(0x48f50a);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f511:{NFSU2_TR(0x48f511);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f517:{NFSU2_TR(0x48f517);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f51e:{NFSU2_TR(0x48f51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f524:{NFSU2_TR(0x48f524);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f52b:{NFSU2_TR(0x48f52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f531:{NFSU2_TR(0x48f531);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f538:{NFSU2_TR(0x48f538);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f53e:{NFSU2_TR(0x48f53e);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f545:{NFSU2_TR(0x48f545);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f54b:{NFSU2_TR(0x48f54b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f552:{NFSU2_TR(0x48f552);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f558:{NFSU2_TR(0x48f558);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f55f:{NFSU2_TR(0x48f55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f565:{NFSU2_TR(0x48f565);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f56c:{NFSU2_TR(0x48f56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f572:{NFSU2_TR(0x48f572);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f579:{NFSU2_TR(0x48f579);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f57f:{NFSU2_TR(0x48f57f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f586:{NFSU2_TR(0x48f586);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f58c:{NFSU2_TR(0x48f58c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f593:{NFSU2_TR(0x48f593);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f599:{NFSU2_TR(0x48f599);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f5a0:{NFSU2_TR(0x48f5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5a6:{NFSU2_TR(0x48f5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f5ad:{NFSU2_TR(0x48f5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5b3:{NFSU2_TR(0x48f5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5b9:{NFSU2_TR(0x48f5b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f5c0:{NFSU2_TR(0x48f5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f5c7:{NFSU2_TR(0x48f5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5cd:{NFSU2_TR(0x48f5cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f5d4:{NFSU2_TR(0x48f5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5da:{NFSU2_TR(0x48f5da);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f5e1:{NFSU2_TR(0x48f5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48f5e2:{NFSU2_TR(0x48f5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5e8:{NFSU2_TR(0x48f5e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f5e9:{NFSU2_TR(0x48f5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5ef:{NFSU2_TR(0x48f5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f5f5:{NFSU2_TR(0x48f5f5);
w4(R+0,u32(0x1ull));
}
B48f5fa:{NFSU2_TR(0x48f5fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48f5fb:{NFSU2_TR(0x48f5fb);
__builtin_memmove((R+16),(R+20),4);
}
B48f5fd:{NFSU2_TR(0x48f5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48f5fe:{NFSU2_TR(0x48f5fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f600:L48f600:{c.instructions+=6;NFSU2_TR(0x48f600);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f601:{NFSU2_TR(0x48f601);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48f605:{NFSU2_TR(0x48f605);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f607:{NFSU2_TR(0x48f607);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f608:{NFSU2_TR(0x48f608);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f609:{NFSU2_TR(0x48f609);
if(r1(R+518)){{goto L48f657;}}
}
B48f60b:L48f60b:{c.instructions+=3;NFSU2_TR(0x48f60b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48f60f:{NFSU2_TR(0x48f60f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f611:{NFSU2_TR(0x48f611);
if(r1(R+518)){{goto L48f657;}}
}
B48f613:L48f613:{c.instructions+=3;NFSU2_TR(0x48f613);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48f617:{NFSU2_TR(0x48f617);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f619:{NFSU2_TR(0x48f619);
if(r1(R+518)){{goto L48f657;}}
}
B48f61b:L48f61b:{c.instructions+=4;NFSU2_TR(0x48f61b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f61c:{NFSU2_TR(0x48f61c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48f61e:{NFSU2_TR(0x48f61e);
w4(R+4,u32(0x70ull));
}
B48f623:{NFSU2_TR(0x48f623);
__builtin_memmove((R+28),(R+12),4);
}
B48f625:L48f625:{c.instructions+=1;NFSU2_TR(0x48f625);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48f627;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f625u);}goto L48f625;}
}
B48f627:L48f627:{c.instructions+=7;NFSU2_TR(0x48f627);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f62b:{NFSU2_TR(0x48f62b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48f62f:{NFSU2_TR(0x48f62f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f630:{NFSU2_TR(0x48f630);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f631:{NFSU2_TR(0x48f631);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f632:{NFSU2_TR(0x48f632);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f633:{NFSU2_TR(0x48f633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f638ull));
TAIL_STATIC(0x48a6a0u,48a);
}
B48f638:L48f638:{c.instructions+=9;NFSU2_TR(0x48f638);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f63c:{NFSU2_TR(0x48f63c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f63d:{NFSU2_TR(0x48f63d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f63e:{NFSU2_TR(0x48f63e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f63f:{NFSU2_TR(0x48f63f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B48f642:{NFSU2_TR(0x48f642);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f643:{NFSU2_TR(0x48f643);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f644:{NFSU2_TR(0x48f644);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f645:{NFSU2_TR(0x48f645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f64aull));
TAIL_STATIC(0x48ed60u,48e);
}
B48f64a:L48f64a:{c.instructions+=7;NFSU2_TR(0x48f64a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48f64d:{NFSU2_TR(0x48f64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48f64e:{NFSU2_TR(0x48f64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f64f:{NFSU2_TR(0x48f64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48f650:{NFSU2_TR(0x48f650);
w4(R+0,u32(0x1ull));
}
B48f655:{NFSU2_TR(0x48f655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48f656:{NFSU2_TR(0x48f656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f657:L48f657:{c.instructions+=5;NFSU2_TR(0x48f657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f658:{NFSU2_TR(0x48f658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48f659:{NFSU2_TR(0x48f659);
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
B48f65b:{NFSU2_TR(0x48f65b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48f65c:{NFSU2_TR(0x48f65c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f660:L48f660:{c.instructions+=9;NFSU2_TR(0x48f660);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f664:{NFSU2_TR(0x48f664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f665:{NFSU2_TR(0x48f665);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48f669:{NFSU2_TR(0x48f669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f66a:{NFSU2_TR(0x48f66a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48f66e:{NFSU2_TR(0x48f66e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f66f:{NFSU2_TR(0x48f66f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f670:{NFSU2_TR(0x48f670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f671:{NFSU2_TR(0x48f671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f676ull));
TAIL_STATIC(0x48e6c0u,48e);
}
B48f676:L48f676:{c.instructions+=7;NFSU2_TR(0x48f676);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f67a:{NFSU2_TR(0x48f67a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f67e:{NFSU2_TR(0x48f67e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f67f:{NFSU2_TR(0x48f67f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f680:{NFSU2_TR(0x48f680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f681:{NFSU2_TR(0x48f681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f682:{NFSU2_TR(0x48f682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f687ull));
TAIL_STATIC(0x48a6a0u,48a);
}
B48f687:L48f687:{c.instructions+=5;NFSU2_TR(0x48f687);
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
B48f68a:{NFSU2_TR(0x48f68a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48f68b:{NFSU2_TR(0x48f68b);
w4(R+0,u32(0x1ull));
}
B48f690:{NFSU2_TR(0x48f690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f691:{NFSU2_TR(0x48f691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f6a0:L48f6a0:{c.instructions+=4;NFSU2_TR(0x48f6a0);
__builtin_memmove((R+0),gp(0x8358c0),4);
}
B48f6a5:{NFSU2_TR(0x48f6a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f6a7:{NFSU2_TR(0x48f6a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f6a8:{NFSU2_TR(0x48f6a8);
if(r1(R+518)){{goto L48f6af;}}
}
B48f6aa:L48f6aa:{c.instructions+=2;NFSU2_TR(0x48f6aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f6ad:{NFSU2_TR(0x48f6ad);
{goto L48f6b1;}
}
B48f6af:L48f6af:{c.instructions+=1;NFSU2_TR(0x48f6af);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48f6b1:L48f6b1:{c.instructions+=2;NFSU2_TR(0x48f6b1);
w4(R+4,u32(0x8358c0ull));
}
B48f6b6:{NFSU2_TR(0x48f6b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f6bbull));
TAIL_STATIC(0x431780u,431);
}
B48f6bb:L48f6bb:{c.instructions+=2;NFSU2_TR(0x48f6bb);
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
B48f6bd:{NFSU2_TR(0x48f6bd);
if(r1(R+518)){{goto L48f6da;}}
}
B48f6bf:L48f6bf:{c.instructions+=1;NFSU2_TR(0x48f6bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f6c3:L48f6c3:{c.instructions+=2;NFSU2_TR(0x48f6c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48f6c6:{NFSU2_TR(0x48f6c6);
if(r1(R+518)){{goto L48f6e1;}}
}
B48f6c8:L48f6c8:{c.instructions+=3;NFSU2_TR(0x48f6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48f6cb:{NFSU2_TR(0x48f6cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f6cd:{NFSU2_TR(0x48f6cd);
if(r1(R+518)){{goto L48f6d4;}}
}
B48f6cf:L48f6cf:{c.instructions+=2;NFSU2_TR(0x48f6cf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B48f6d2:{NFSU2_TR(0x48f6d2);
{goto L48f6d6;}
}
B48f6d4:L48f6d4:{c.instructions+=1;NFSU2_TR(0x48f6d4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48f6d6:L48f6d6:{c.instructions+=2;NFSU2_TR(0x48f6d6);
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
B48f6d8:{NFSU2_TR(0x48f6d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f6c3u);}goto L48f6c3;}}
}
B48f6da:L48f6da:{c.instructions+=3;NFSU2_TR(0x48f6da);
__builtin_memmove((R+0),gp(0x7f399c),4);
}
B48f6df:{NFSU2_TR(0x48f6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f6e0:{NFSU2_TR(0x48f6e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f6e1:L48f6e1:{c.instructions+=3;NFSU2_TR(0x48f6e1);
__builtin_memmove((R+0),(R+24),4);
}
B48f6e3:{NFSU2_TR(0x48f6e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f6e4:{NFSU2_TR(0x48f6e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f6f0:L48f6f0:{c.instructions+=12;NFSU2_TR(0x48f6f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f6f1:{NFSU2_TR(0x48f6f1);
__builtin_memmove((R+20),(R+16),4);
}
B48f6f3:{NFSU2_TR(0x48f6f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48f6f6:{NFSU2_TR(0x48f6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B48f6f9:{NFSU2_TR(0x48f6f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f6fa:{NFSU2_TR(0x48f6fa);
__builtin_memmove((R+24),(R+4),4);
}
B48f6fc:{NFSU2_TR(0x48f6fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f700:{NFSU2_TR(0x48f700);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f701:{NFSU2_TR(0x48f701);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48f705:{NFSU2_TR(0x48f705);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f706:{NFSU2_TR(0x48f706);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f709:{NFSU2_TR(0x48f709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f70eull));
TAIL_STATIC(0x48d7e0u,48d);
}
B48f70e:L48f70e:{c.instructions+=8;NFSU2_TR(0x48f70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f711:{NFSU2_TR(0x48f711);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f712:{NFSU2_TR(0x48f712);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f716:{NFSU2_TR(0x48f716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f717:{NFSU2_TR(0x48f717);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48f71b:{NFSU2_TR(0x48f71b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f71c:{NFSU2_TR(0x48f71c);
__builtin_memmove((R+4),(R+24),4);
}
B48f71e:{NFSU2_TR(0x48f71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f723ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B48f723:L48f723:{c.instructions+=4;NFSU2_TR(0x48f723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48f724:{NFSU2_TR(0x48f724);
__builtin_memmove((R+16),(R+20),4);
}
B48f726:{NFSU2_TR(0x48f726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48f727:{NFSU2_TR(0x48f727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f730:L48f730:{c.instructions+=3;NFSU2_TR(0x48f730);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f734:{NFSU2_TR(0x48f734);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f736:{NFSU2_TR(0x48f736);
if(r1(R+518)){{goto L48f73d;}}
}
B48f738:L48f738:{c.instructions+=2;NFSU2_TR(0x48f738);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B48f73b:{NFSU2_TR(0x48f73b);
{goto L48f73f;}
}
B48f73d:L48f73d:{c.instructions+=1;NFSU2_TR(0x48f73d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48f73f:L48f73f:{c.instructions+=7;NFSU2_TR(0x48f73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f742:{NFSU2_TR(0x48f742);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B48f745:{NFSU2_TR(0x48f745);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48f747:{NFSU2_TR(0x48f747);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f74a:{NFSU2_TR(0x48f74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f74d:{NFSU2_TR(0x48f74d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48f74f:{NFSU2_TR(0x48f74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f754ull));
TAIL_STATIC(0x5c2120u,5c2);
}
B48f754:L48f754:{c.instructions+=1;NFSU2_TR(0x48f754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f760:L48f760:{c.instructions+=3;NFSU2_TR(0x48f760);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f764:{NFSU2_TR(0x48f764);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48f766:{NFSU2_TR(0x48f766);
if(r1(R+518)){{goto L48f77e;}}
}
B48f768:L48f768:{c.instructions+=6;NFSU2_TR(0x48f768);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48f76b:{NFSU2_TR(0x48f76b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B48f76e:{NFSU2_TR(0x48f76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f771:{NFSU2_TR(0x48f771);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48f773:{NFSU2_TR(0x48f773);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f776:{NFSU2_TR(0x48f776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f77bull));
TAIL_STATIC(0x5c2120u,5c2);
}
B48f77b:L48f77b:{c.instructions+=1;NFSU2_TR(0x48f77b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f77e:L48f77e:{c.instructions+=6;NFSU2_TR(0x48f77e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48f780:{NFSU2_TR(0x48f780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48f782:{NFSU2_TR(0x48f782);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f785:{NFSU2_TR(0x48f785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48f787:{NFSU2_TR(0x48f787);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f78a:{NFSU2_TR(0x48f78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f78full));
TAIL_STATIC(0x5c2120u,5c2);
}
B48f78f:L48f78f:{c.instructions+=1;NFSU2_TR(0x48f78f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48f7a0:L48f7a0:{c.instructions+=11;NFSU2_TR(0x48f7a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f7a1:{NFSU2_TR(0x48f7a1);
__builtin_memmove((R+20),(R+16),4);
}
B48f7a3:{NFSU2_TR(0x48f7a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48f7a6:{NFSU2_TR(0x48f7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe8ull))));
}
B48f7ac:{NFSU2_TR(0x48f7ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f7ad:{NFSU2_TR(0x48f7ad);
__builtin_memmove((R+24),(R+4),4);
}
B48f7af:{NFSU2_TR(0x48f7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48f7b2:{NFSU2_TR(0x48f7b2);
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
B48f7b4:{NFSU2_TR(0x48f7b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f7b5:{NFSU2_TR(0x48f7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f7bc:{NFSU2_TR(0x48f7bc);
if(r1(R+518)){{goto L48fbb5;}}
}
B48f7c2:L48f7c2:{c.instructions+=5;NFSU2_TR(0x48f7c2);
__builtin_memmove((R+4),gp(0x82da5c),4);
}
B48f7c8:{NFSU2_TR(0x48f7c8);
__builtin_memmove((R+28),gp(0x82da60),4);
}
B48f7ce:{NFSU2_TR(0x48f7ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48f7d4:{NFSU2_TR(0x48f7d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B48f7d6:{NFSU2_TR(0x48f7d6);
if(r1(R+512)){{goto L48f7f0;}}
}
B48f7d8:L48f7d8:{c.instructions+=4;NFSU2_TR(0x48f7d8);
s4(0x82da70,u32(u32(m4(0x82da70))+u32(u32(0x1c0ull))));
}
B48f7e2:{NFSU2_TR(0x48f7e2);
s4(0x82da6c,u32(0x1ull));
}
B48f7ec:{NFSU2_TR(0x48f7ec);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48f7ee:{NFSU2_TR(0x48f7ee);
{goto L48f7f6;}
}
B48f7f0:L48f7f0:{c.instructions+=1;NFSU2_TR(0x48f7f0);
__builtin_memmove(gp(0x82da5c),(R+8),4);
}
B48f7f6:L48f7f6:{c.instructions+=3;NFSU2_TR(0x48f7f6);
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
B48f7f8:{NFSU2_TR(0x48f7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f7fb:{NFSU2_TR(0x48f7fb);
if(r1(R+518)){{goto L48fbb5;}}
}
B48f801:L48f801:{c.instructions+=28;NFSU2_TR(0x48f801);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f804:{NFSU2_TR(0x48f804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48f807:{NFSU2_TR(0x48f807);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f80a:{NFSU2_TR(0x48f80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48f811:{NFSU2_TR(0x48f811);
{u32 ea_=u32(u32(7919544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f817:{NFSU2_TR(0x48f817);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f818:{NFSU2_TR(0x48f818);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B48f81a:{NFSU2_TR(0x48f81a);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f825:{NFSU2_TR(0x48f825);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B48f828:{NFSU2_TR(0x48f828);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f82f:{NFSU2_TR(0x48f82f);
{u32 ea_=u32(u32(7919544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f835:{NFSU2_TR(0x48f835);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48f837:{NFSU2_TR(0x48f837);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B48f83a:{NFSU2_TR(0x48f83a);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f841:{NFSU2_TR(0x48f841);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48f843:{NFSU2_TR(0x48f843);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48f845:{NFSU2_TR(0x48f845);
{u32 ea_=u32(u32(7919544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f84b:{NFSU2_TR(0x48f84b);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f852:{NFSU2_TR(0x48f852);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B48f855:{NFSU2_TR(0x48f855);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f85c:{NFSU2_TR(0x48f85c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f85d:{NFSU2_TR(0x48f85d);
{u32 ea_=u32(u32(7919548u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f863:{NFSU2_TR(0x48f863);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f868:{NFSU2_TR(0x48f868);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f86d:{NFSU2_TR(0x48f86d);
u8 U[4];
w4(U+0,u32(0x7f3e10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f872:{NFSU2_TR(0x48f872);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f873:{NFSU2_TR(0x48f873);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f87a:{NFSU2_TR(0x48f87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f87full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48f600u);}goto L48f600;}
}
B48f87f:L48f87f:{c.instructions+=14;NFSU2_TR(0x48f87f);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48f886:{NFSU2_TR(0x48f886);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f887:{NFSU2_TR(0x48f887);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48f88e:{NFSU2_TR(0x48f88e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f88f:{NFSU2_TR(0x48f88f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48f893:{NFSU2_TR(0x48f893);
u8 U[4];
w4(U+0,u32(0x830d90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f898:{NFSU2_TR(0x48f898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48f899:{NFSU2_TR(0x48f899);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f8a4:{NFSU2_TR(0x48f8a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f8af:{NFSU2_TR(0x48f8af);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f8ba:{NFSU2_TR(0x48f8ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f8c5:{NFSU2_TR(0x48f8c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f8d0:{NFSU2_TR(0x48f8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48f8db:{NFSU2_TR(0x48f8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48f8e0ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B48f8e0:L48f8e0:{c.instructions+=145;NFSU2_TR(0x48f8e0);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f8e7:{NFSU2_TR(0x48f8e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f8ed:{NFSU2_TR(0x48f8ed);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f8f4:{NFSU2_TR(0x48f8f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f8fa:{NFSU2_TR(0x48f8fa);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f8fe:{NFSU2_TR(0x48f8fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f904:{NFSU2_TR(0x48f904);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f908:{NFSU2_TR(0x48f908);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f90e:{NFSU2_TR(0x48f90e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48f910:{NFSU2_TR(0x48f910);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B48f912:{NFSU2_TR(0x48f912);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B48f914:{NFSU2_TR(0x48f914);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f91b:{NFSU2_TR(0x48f91b);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f922:{NFSU2_TR(0x48f922);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f928:{NFSU2_TR(0x48f928);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f92f:{NFSU2_TR(0x48f92f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f935:{NFSU2_TR(0x48f935);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f939:{NFSU2_TR(0x48f939);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f93d:{NFSU2_TR(0x48f93d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f943:{NFSU2_TR(0x48f943);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f947:{NFSU2_TR(0x48f947);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f94b:{NFSU2_TR(0x48f94b);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f951:{NFSU2_TR(0x48f951);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f955:{NFSU2_TR(0x48f955);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f959:{NFSU2_TR(0x48f959);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48f95b:{NFSU2_TR(0x48f95b);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f962:{NFSU2_TR(0x48f962);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f969:{NFSU2_TR(0x48f969);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f96f:{NFSU2_TR(0x48f96f);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f976:{NFSU2_TR(0x48f976);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f97c:{NFSU2_TR(0x48f97c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f980:{NFSU2_TR(0x48f980);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f987:{NFSU2_TR(0x48f987);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f98d:{NFSU2_TR(0x48f98d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f991:{NFSU2_TR(0x48f991);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f995:{NFSU2_TR(0x48f995);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f99b:{NFSU2_TR(0x48f99b);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f99f:{NFSU2_TR(0x48f99f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f9a3:{NFSU2_TR(0x48f9a3);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48f9a5:{NFSU2_TR(0x48f9a5);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f9ac:{NFSU2_TR(0x48f9ac);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f9b3:{NFSU2_TR(0x48f9b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f9b9:{NFSU2_TR(0x48f9b9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f9bd:{NFSU2_TR(0x48f9bd);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f9c4:{NFSU2_TR(0x48f9c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f9ca:{NFSU2_TR(0x48f9ca);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f9ce:{NFSU2_TR(0x48f9ce);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f9d5:{NFSU2_TR(0x48f9d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f9db:{NFSU2_TR(0x48f9db);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f9df:{NFSU2_TR(0x48f9df);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48f9e3:{NFSU2_TR(0x48f9e3);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48f9e9:{NFSU2_TR(0x48f9e9);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f9ed:{NFSU2_TR(0x48f9ed);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f9f1:{NFSU2_TR(0x48f9f1);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48f9f5:{NFSU2_TR(0x48f9f5);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48f9fc:{NFSU2_TR(0x48f9fc);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa00:{NFSU2_TR(0x48fa00);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa06:{NFSU2_TR(0x48fa06);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa0a:{NFSU2_TR(0x48fa0a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa0e:{NFSU2_TR(0x48fa0e);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa14:{NFSU2_TR(0x48fa14);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa18:{NFSU2_TR(0x48fa18);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B48fa1a:{NFSU2_TR(0x48fa1a);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B48fa1c:{NFSU2_TR(0x48fa1c);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa23:{NFSU2_TR(0x48fa23);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa27:{NFSU2_TR(0x48fa27);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa2d:{NFSU2_TR(0x48fa2d);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa31:{NFSU2_TR(0x48fa31);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa35:{NFSU2_TR(0x48fa35);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa3b:{NFSU2_TR(0x48fa3b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa3f:{NFSU2_TR(0x48fa3f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa43:{NFSU2_TR(0x48fa43);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B48fa45:{NFSU2_TR(0x48fa45);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa4c:{NFSU2_TR(0x48fa4c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa50:{NFSU2_TR(0x48fa50);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa56:{NFSU2_TR(0x48fa56);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa5a:{NFSU2_TR(0x48fa5a);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa61:{NFSU2_TR(0x48fa61);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa67:{NFSU2_TR(0x48fa67);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa6b:{NFSU2_TR(0x48fa6b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa6f:{NFSU2_TR(0x48fa6f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48fa71:{NFSU2_TR(0x48fa71);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa78:{NFSU2_TR(0x48fa78);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa7c:{NFSU2_TR(0x48fa7c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa82:{NFSU2_TR(0x48fa82);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fa86:{NFSU2_TR(0x48fa86);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fa8d:{NFSU2_TR(0x48fa8d);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fa93:{NFSU2_TR(0x48fa93);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa97:{NFSU2_TR(0x48fa97);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa9b:{NFSU2_TR(0x48fa9b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fa9f:{NFSU2_TR(0x48fa9f);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48faa6:{NFSU2_TR(0x48faa6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48faad:{NFSU2_TR(0x48faad);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fab3:{NFSU2_TR(0x48fab3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fab7:{NFSU2_TR(0x48fab7);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B48fab9:{NFSU2_TR(0x48fab9);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B48fabb:{NFSU2_TR(0x48fabb);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fac2:{NFSU2_TR(0x48fac2);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fac9:{NFSU2_TR(0x48fac9);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48facf:{NFSU2_TR(0x48facf);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fad3:{NFSU2_TR(0x48fad3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fad7:{NFSU2_TR(0x48fad7);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B48fad9:{NFSU2_TR(0x48fad9);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fae0:{NFSU2_TR(0x48fae0);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fae7:{NFSU2_TR(0x48fae7);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48faed:{NFSU2_TR(0x48faed);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48faf1:{NFSU2_TR(0x48faf1);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48faf5:{NFSU2_TR(0x48faf5);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48fafc:{NFSU2_TR(0x48fafc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fafd:{NFSU2_TR(0x48fafd);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48fb01:{NFSU2_TR(0x48fb01);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48fb03:{NFSU2_TR(0x48fb03);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fb04:{NFSU2_TR(0x48fb04);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fb0b:{NFSU2_TR(0x48fb0b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48fb0d:{NFSU2_TR(0x48fb0d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48fb0f:{NFSU2_TR(0x48fb0f);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fb16:{NFSU2_TR(0x48fb16);
{u32 ea_=u32(u32(7919540u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48fb1c:{NFSU2_TR(0x48fb1c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb20:{NFSU2_TR(0x48fb20);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb24:{NFSU2_TR(0x48fb24);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb28:{NFSU2_TR(0x48fb28);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fb2f:{NFSU2_TR(0x48fb2f);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fb36:{NFSU2_TR(0x48fb36);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb3a:{NFSU2_TR(0x48fb3a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48fb3c:{NFSU2_TR(0x48fb3c);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B48fb3e:{NFSU2_TR(0x48fb3e);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fb45:{NFSU2_TR(0x48fb45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48fb47:{NFSU2_TR(0x48fb47);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48fb49:{NFSU2_TR(0x48fb49);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48fb4b:{NFSU2_TR(0x48fb4b);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fb52:{NFSU2_TR(0x48fb52);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb56:{NFSU2_TR(0x48fb56);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb5a:{NFSU2_TR(0x48fb5a);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb5e:{NFSU2_TR(0x48fb5e);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fb65:{NFSU2_TR(0x48fb65);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fb6c:{NFSU2_TR(0x48fb6c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb70:{NFSU2_TR(0x48fb70);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb74:{NFSU2_TR(0x48fb74);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb78:{NFSU2_TR(0x48fb78);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fb7f:{NFSU2_TR(0x48fb7f);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48fb86:{NFSU2_TR(0x48fb86);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb8a:{NFSU2_TR(0x48fb8a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb8e:{NFSU2_TR(0x48fb8e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48fb92:{NFSU2_TR(0x48fb92);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48fb99:{NFSU2_TR(0x48fb99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fb9eull));
TAIL_STATIC(0x4012b0u,401);
}
B48fb9e:L48fb9e:{c.instructions+=6;NFSU2_TR(0x48fb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fba1:{NFSU2_TR(0x48fba1);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48fba5:{NFSU2_TR(0x48fba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fba6:{NFSU2_TR(0x48fba6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x80ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48fbac:{NFSU2_TR(0x48fbac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fbad:{NFSU2_TR(0x48fbad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fbb2ull));
TAIL_STATIC(0x4012b0u,401);
}
B48fbb2:L48fbb2:{c.instructions+=1;NFSU2_TR(0x48fbb2);
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
B48fbb5:L48fbb5:{c.instructions+=5;NFSU2_TR(0x48fbb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48fbb6:{NFSU2_TR(0x48fbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48fbb7:{NFSU2_TR(0x48fbb7);
__builtin_memmove((R+16),(R+20),4);
}
B48fbb9:{NFSU2_TR(0x48fbb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48fbba:{NFSU2_TR(0x48fbba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fbc0:L48fbc0:{c.instructions+=4;NFSU2_TR(0x48fbc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fbc1:{NFSU2_TR(0x48fbc1);
__builtin_memmove((R+24),gp(0x8358c8),4);
}
B48fbc7:{NFSU2_TR(0x48fbc7);
w4(R+4,u32(0x8358c8ull));
}
B48fbcc:{NFSU2_TR(0x48fbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fbd1ull));
TAIL_STATIC(0x502fd0u,502);
}
B48fbd1:L48fbd1:{c.instructions+=2;NFSU2_TR(0x48fbd1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48fbd3:{NFSU2_TR(0x48fbd3);
if(r1(R+518)){{goto L48fbeb;}}
}
B48fbd5:L48fbd5:{c.instructions+=2;NFSU2_TR(0x48fbd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fbd9:{NFSU2_TR(0x48fbd9);
__builtin_memmove((R+16),(R+16),4);
}
B48fbe0:L48fbe0:{c.instructions+=2;NFSU2_TR(0x48fbe0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48fbe3:{NFSU2_TR(0x48fbe3);
if(r1(R+518)){{goto L48fbef;}}
}
B48fbe5:L48fbe5:{c.instructions+=3;NFSU2_TR(0x48fbe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48fbe7:{NFSU2_TR(0x48fbe7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48fbe9:{NFSU2_TR(0x48fbe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48fbe0u);}goto L48fbe0;}}
}
B48fbeb:L48fbeb:{c.instructions+=3;NFSU2_TR(0x48fbeb);
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
B48fbed:{NFSU2_TR(0x48fbed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48fbee:{NFSU2_TR(0x48fbee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fbef:L48fbef:{c.instructions+=3;NFSU2_TR(0x48fbef);
__builtin_memmove((R+0),(R+24),4);
}
B48fbf1:{NFSU2_TR(0x48fbf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48fbf2:{NFSU2_TR(0x48fbf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fc00:L48fc00:{c.instructions+=9;NFSU2_TR(0x48fc00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fc04:{NFSU2_TR(0x48fc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fc07:{NFSU2_TR(0x48fc07);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B48fc0b:{NFSU2_TR(0x48fc0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48fc0f:{NFSU2_TR(0x48fc0f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B48fc12:{NFSU2_TR(0x48fc12);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48fc16:{NFSU2_TR(0x48fc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fc19:{NFSU2_TR(0x48fc19);
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
B48fc1b:{NFSU2_TR(0x48fc1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fc24;}}
}
B48fc1d:L48fc1d:{c.instructions+=1;NFSU2_TR(0x48fc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48fc24:L48fc24:{c.instructions+=7;NFSU2_TR(0x48fc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fc27:{NFSU2_TR(0x48fc27);
__builtin_memmove((R+4),gp(0x8358cc),4);
}
B48fc2d:{NFSU2_TR(0x48fc2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48fc2f:{NFSU2_TR(0x48fc2f);
__builtin_memmove(gp(0x8358cc),(R+0),4);
}
B48fc34:{NFSU2_TR(0x48fc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fc37:{NFSU2_TR(0x48fc37);
u8 U[4];
w4(U+0,u32(0x8358c8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48fc3d:{NFSU2_TR(0x48fc3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fc40:L48fc40:{c.instructions+=10;NFSU2_TR(0x48fc40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fc44:{NFSU2_TR(0x48fc44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x400ull))));
}
B48fc4a:{NFSU2_TR(0x48fc4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc4c:{NFSU2_TR(0x48fc4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc4d:{NFSU2_TR(0x48fc4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc4e:{NFSU2_TR(0x48fc4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48fc55:{NFSU2_TR(0x48fc55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc56:{NFSU2_TR(0x48fc56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc57:{NFSU2_TR(0x48fc57);
__builtin_memmove((R+24),(R+4),4);
}
B48fc59:{NFSU2_TR(0x48fc59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fc62;}}
}
B48fc5b:L48fc5b:{c.instructions+=2;NFSU2_TR(0x48fc5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc5d:{NFSU2_TR(0x48fc5d);
if(r1(R+518)){{goto L48fc62;}}
}
B48fc5f:L48fc5f:{c.instructions+=1;NFSU2_TR(0x48fc5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48fc62:L48fc62:{c.instructions+=3;NFSU2_TR(0x48fc62);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48fc69:{NFSU2_TR(0x48fc69);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc6b:{NFSU2_TR(0x48fc6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fc74;}}
}
B48fc6d:L48fc6d:{c.instructions+=2;NFSU2_TR(0x48fc6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc6f:{NFSU2_TR(0x48fc6f);
if(r1(R+518)){{goto L48fc74;}}
}
B48fc71:L48fc71:{c.instructions+=1;NFSU2_TR(0x48fc71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48fc74:L48fc74:{c.instructions+=2;NFSU2_TR(0x48fc74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc76:{NFSU2_TR(0x48fc76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fc7d;}}
}
B48fc78:L48fc78:{c.instructions+=1;NFSU2_TR(0x48fc78);
w4(R+0,u32(0x78da04ull));
}
B48fc7d:L48fc7d:{c.instructions+=2;NFSU2_TR(0x48fc7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc7f:{NFSU2_TR(0x48fc7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fc86;}}
}
B48fc81:L48fc81:{c.instructions+=1;NFSU2_TR(0x48fc81);
w4(R+12,u32(0x78da04ull));
}
B48fc86:L48fc86:{c.instructions+=4;NFSU2_TR(0x48fc86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc87:{NFSU2_TR(0x48fc87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48fc8a:{NFSU2_TR(0x48fc8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc8b:{NFSU2_TR(0x48fc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fc90ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B48fc90:L48fc90:{c.instructions+=5;NFSU2_TR(0x48fc90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48fc93:{NFSU2_TR(0x48fc93);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fc95:{NFSU2_TR(0x48fc95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48fc98:{NFSU2_TR(0x48fc98);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B48fc9b:{NFSU2_TR(0x48fc9b);
if(r1(R+518)){{goto L48fca7;}}
}
B48fc9d:L48fc9d:{c.instructions+=3;NFSU2_TR(0x48fc9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc9e:{NFSU2_TR(0x48fc9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fc9f:{NFSU2_TR(0x48fc9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fca4ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B48fca4:L48fca4:{c.instructions+=1;NFSU2_TR(0x48fca4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48fca7:L48fca7:{c.instructions+=3;NFSU2_TR(0x48fca7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fca8:{NFSU2_TR(0x48fca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fcab:{NFSU2_TR(0x48fcab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fcb0ull));
TAIL_STATIC(0x43db50u,43d);
}
B48fcb0:L48fcb0:{c.instructions+=14;NFSU2_TR(0x48fcb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fcb3:{NFSU2_TR(0x48fcb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fcba:{NFSU2_TR(0x48fcba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fcbd:{NFSU2_TR(0x48fcbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48fcc4:{NFSU2_TR(0x48fcc4);
__builtin_memmove((R+0),gp(0x830af4),4);
}
B48fcc9:{NFSU2_TR(0x48fcc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fcca:{NFSU2_TR(0x48fcca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48fccc:{NFSU2_TR(0x48fccc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48fcd0:{NFSU2_TR(0x48fcd0);
__builtin_memmove(gp(0x830af4),(R+24),4);
}
B48fcd6:{NFSU2_TR(0x48fcd6);
u8 U[4];
w4(U+0,u32(0x78d9f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fcdb:{NFSU2_TR(0x48fcdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fcdc:{NFSU2_TR(0x48fcdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fcdf:{NFSU2_TR(0x48fcdf);
u8 U[4];
w4(U+0,u32(0x830af0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B48fce5:{NFSU2_TR(0x48fce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fceaull));
TAIL_STATIC(0x4400d0u,440);
}
B48fcea:L48fcea:{c.instructions+=4;NFSU2_TR(0x48fcea);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48fcee:{NFSU2_TR(0x48fcee);
u8 U[4];
w4(U+0,u32(0x78d9c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fcf3:{NFSU2_TR(0x48fcf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fcf4:{NFSU2_TR(0x48fcf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fcf9ull));
TAIL_STATIC(0x50d510u,50d);
}
B48fcf9:L48fcf9:{c.instructions+=9;NFSU2_TR(0x48fcf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48fcfc:{NFSU2_TR(0x48fcfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48fcfd:{NFSU2_TR(0x48fcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fd00:{NFSU2_TR(0x48fd00);
__builtin_memmove((R+0),(R+24),4);
}
B48fd02:{NFSU2_TR(0x48fd02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48fd03:{NFSU2_TR(0x48fd03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48fd04:{NFSU2_TR(0x48fd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48fd05:{NFSU2_TR(0x48fd05);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x400ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x400ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48fd0b:{NFSU2_TR(0x48fd0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fd10:L48fd10:{c.instructions+=7;NFSU2_TR(0x48fd10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48fd12:{NFSU2_TR(0x48fd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fd15:{NFSU2_TR(0x48fd15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48fd17:{NFSU2_TR(0x48fd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fd1a:{NFSU2_TR(0x48fd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd1d:{NFSU2_TR(0x48fd1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd1e:{NFSU2_TR(0x48fd1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fd23ull));
TAIL_STATIC(0x4022c0u,402);
}
B48fd23:L48fd23:{c.instructions+=2;NFSU2_TR(0x48fd23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48fd24:{NFSU2_TR(0x48fd24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fd30:L48fd30:{c.instructions+=7;NFSU2_TR(0x48fd30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd34:{NFSU2_TR(0x48fd34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fd36:{NFSU2_TR(0x48fd36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd37:{NFSU2_TR(0x48fd37);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48fd3b:{NFSU2_TR(0x48fd3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd3c:{NFSU2_TR(0x48fd3c);
__builtin_memmove((R+28),(R+4),4);
}
B48fd3e:{NFSU2_TR(0x48fd3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fd67;}}
}
B48fd40:L48fd40:{c.instructions+=3;NFSU2_TR(0x48fd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd43:{NFSU2_TR(0x48fd43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fd45:{NFSU2_TR(0x48fd45);
if(r1(R+518)){{goto L48fd86;}}
}
B48fd47:L48fd47:{c.instructions+=3;NFSU2_TR(0x48fd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd4a:{NFSU2_TR(0x48fd4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fd4c:{NFSU2_TR(0x48fd4c);
if(r1(R+518)){{goto L48fd86;}}
}
B48fd4e:L48fd4e:{c.instructions+=8;NFSU2_TR(0x48fd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fd51:{NFSU2_TR(0x48fd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fd54:{NFSU2_TR(0x48fd54);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd56:{NFSU2_TR(0x48fd56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd58:{NFSU2_TR(0x48fd58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd59:{NFSU2_TR(0x48fd59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd5a:{NFSU2_TR(0x48fd5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fd5b:{NFSU2_TR(0x48fd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fd60ull));
TAIL_STATIC(0x488bc0u,488);
}
B48fd60:L48fd60:{c.instructions+=3;NFSU2_TR(0x48fd60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48fd63:{NFSU2_TR(0x48fd63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fd65:{NFSU2_TR(0x48fd65);
if(r1(R+518)){{goto L48fd86;}}
}
B48fd67:L48fd67:{c.instructions+=8;NFSU2_TR(0x48fd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fd6a:{NFSU2_TR(0x48fd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd6d:{NFSU2_TR(0x48fd6d);
__builtin_memmove((R+8),gp(0x833780),4);
}
B48fd73:{NFSU2_TR(0x48fd73);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B48fd78:{NFSU2_TR(0x48fd78);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B48fd79:{NFSU2_TR(0x48fd79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x833784ull))));
}
B48fd7e:{NFSU2_TR(0x48fd7e);
__builtin_memmove(gp(0x833780),(R+8),4);
}
B48fd84:{NFSU2_TR(0x48fd84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B48fd86:L48fd86:{c.instructions+=3;NFSU2_TR(0x48fd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fd89:{NFSU2_TR(0x48fd89);
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
B48fd8b:{NFSU2_TR(0x48fd8b);
if(r1(R+518)){{goto L48fdc0;}}
}
B48fd8d:L48fd8d:{c.instructions+=3;NFSU2_TR(0x48fd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd90:{NFSU2_TR(0x48fd90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fd92:{NFSU2_TR(0x48fd92);
if(r1(R+518)){{goto L48fdb9;}}
}
B48fd94:L48fd94:{c.instructions+=3;NFSU2_TR(0x48fd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fd97:{NFSU2_TR(0x48fd97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fd99:{NFSU2_TR(0x48fd99);
if(r1(R+518)){{goto L48fdb9;}}
}
B48fd9b:L48fd9b:{c.instructions+=7;NFSU2_TR(0x48fd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fd9e:{NFSU2_TR(0x48fd9e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fda0:{NFSU2_TR(0x48fda0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fda2:{NFSU2_TR(0x48fda2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fda3:{NFSU2_TR(0x48fda3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fda4:{NFSU2_TR(0x48fda4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fda5:{NFSU2_TR(0x48fda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fdaaull));
TAIL_STATIC(0x488bc0u,488);
}
B48fdaa:L48fdaa:{c.instructions+=3;NFSU2_TR(0x48fdaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48fdad:{NFSU2_TR(0x48fdad);
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
B48fdaf:{NFSU2_TR(0x48fdaf);
if(r1(R+518)){{goto L48fdb9;}}
}
B48fdb1:L48fdb1:{c.instructions+=3;NFSU2_TR(0x48fdb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fdb4:{NFSU2_TR(0x48fdb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fdb7:{NFSU2_TR(0x48fdb7);
{goto L48fdc3;}
}
B48fdb9:L48fdb9:{c.instructions+=3;NFSU2_TR(0x48fdb9);
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
B48fdbb:{NFSU2_TR(0x48fdbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fdbe:{NFSU2_TR(0x48fdbe);
{goto L48fdc3;}
}
B48fdc0:L48fdc0:{c.instructions+=1;NFSU2_TR(0x48fdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fdc3:L48fdc3:{c.instructions+=7;NFSU2_TR(0x48fdc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fdc7:{NFSU2_TR(0x48fdc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fdc8:{NFSU2_TR(0x48fdc8);
__builtin_memmove((R+4),(R+24),4);
}
B48fdca:{NFSU2_TR(0x48fdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fdcd:{NFSU2_TR(0x48fdcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48fdd4:{NFSU2_TR(0x48fdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48fddb:{NFSU2_TR(0x48fddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fde0ull));
TAIL_STATIC(0x5b9690u,5b9);
}
B48fde0:L48fde0:{c.instructions+=3;NFSU2_TR(0x48fde0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x66994f4aull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x66994f4aull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x66994f4aull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48fde7:{NFSU2_TR(0x48fde7);
s4(0x82dab4,u32(0x1ull));
}
B48fdf1:{NFSU2_TR(0x48fdf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fdf9;}}
}
B48fdf3:L48fdf3:{c.instructions+=1;NFSU2_TR(0x48fdf3);
__builtin_memmove(gp(0x82db08),(R+24),4);
}
B48fdf9:L48fdf9:{c.instructions+=3;NFSU2_TR(0x48fdf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48fdfa:{NFSU2_TR(0x48fdfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48fdfb:{NFSU2_TR(0x48fdfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fe00:L48fe00:{c.instructions+=8;NFSU2_TR(0x48fe00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fe04:{NFSU2_TR(0x48fe04);
__builtin_memmove((R+0),(R+8),4);
}
B48fe06:{NFSU2_TR(0x48fe06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B48fe0b:{NFSU2_TR(0x48fe0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe0c:{NFSU2_TR(0x48fe0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x833784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B48fe12:{NFSU2_TR(0x48fe12);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48fe14:{NFSU2_TR(0x48fe14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48fe15:{NFSU2_TR(0x48fe15);
if(r1(R+518)){{goto L48fe57;}}
}
B48fe17:L48fe17:{c.instructions+=3;NFSU2_TR(0x48fe17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fe1a:{NFSU2_TR(0x48fe1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fe1c:{NFSU2_TR(0x48fe1c);
if(r1(R+518)){{goto L48fe57;}}
}
B48fe1e:L48fe1e:{c.instructions+=3;NFSU2_TR(0x48fe1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fe21:{NFSU2_TR(0x48fe21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fe23:{NFSU2_TR(0x48fe23);
if(r1(R+518)){{goto L48fe57;}}
}
B48fe25:L48fe25:{c.instructions+=7;NFSU2_TR(0x48fe25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fe28:{NFSU2_TR(0x48fe28);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe2a:{NFSU2_TR(0x48fe2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe2c:{NFSU2_TR(0x48fe2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe2d:{NFSU2_TR(0x48fe2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe2e:{NFSU2_TR(0x48fe2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe2f:{NFSU2_TR(0x48fe2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48fe34ull));
TAIL_STATIC(0x488bc0u,488);
}
B48fe34:L48fe34:{c.instructions+=3;NFSU2_TR(0x48fe34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48fe37:{NFSU2_TR(0x48fe37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fe39:{NFSU2_TR(0x48fe39);
if(r1(R+518)){{goto L48fe57;}}
}
B48fe3b:L48fe3b:{c.instructions+=3;NFSU2_TR(0x48fe3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fe3e:{NFSU2_TR(0x48fe3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fe40:{NFSU2_TR(0x48fe40);
if(r1(R+518)){{goto L48fe57;}}
}
B48fe42:L48fe42:{c.instructions+=3;NFSU2_TR(0x48fe42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fe45:{NFSU2_TR(0x48fe45);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fe47:{NFSU2_TR(0x48fe47);
if(r1(R+518)){{goto L48fe57;}}
}
B48fe49:L48fe49:{c.instructions+=3;NFSU2_TR(0x48fe49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fe4c:{NFSU2_TR(0x48fe4c);
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
B48fe4e:{NFSU2_TR(0x48fe4e);
if(r1(R+518)){{goto L48fe59;}}
}
B48fe50:L48fe50:{c.instructions+=3;NFSU2_TR(0x48fe50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fe53:{NFSU2_TR(0x48fe53);
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
B48fe55:{NFSU2_TR(0x48fe55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48fe59;}}
}
B48fe57:L48fe57:{c.instructions+=1;NFSU2_TR(0x48fe57);
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
B48fe59:L48fe59:{c.instructions+=1;NFSU2_TR(0x48fe59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fe60:L48fe60:{c.instructions+=15;NFSU2_TR(0x48fe60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fe64:{NFSU2_TR(0x48fe64);
__builtin_memmove((R+0),(R+4),4);
}
B48fe66:{NFSU2_TR(0x48fe66);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fe6a:{NFSU2_TR(0x48fe6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe6b:{NFSU2_TR(0x48fe6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48fe6f:{NFSU2_TR(0x48fe6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fe70:{NFSU2_TR(0x48fe70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48fe74:{NFSU2_TR(0x48fe74);
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
B48fe76:{NFSU2_TR(0x48fe76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fe79:{NFSU2_TR(0x48fe79);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48fe7d:{NFSU2_TR(0x48fe7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fe80:{NFSU2_TR(0x48fe80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fe83:{NFSU2_TR(0x48fe83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fe86:{NFSU2_TR(0x48fe86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fe89:{NFSU2_TR(0x48fe89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48fea6;}}
}
B48fe8b:L48fe8b:{c.instructions+=2;NFSU2_TR(0x48fe8b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48fe8d:{NFSU2_TR(0x48fe8d);
__builtin_memmove((R+4),(R+4),4);
}
B48fe90:L48fe90:{c.instructions+=9;NFSU2_TR(0x48fe90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fe93:{NFSU2_TR(0x48fe93);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B48fe95:{NFSU2_TR(0x48fe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fe98:{NFSU2_TR(0x48fe98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48fe9b:{NFSU2_TR(0x48fe9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B48fe9e:{NFSU2_TR(0x48fe9e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B48fea0:{NFSU2_TR(0x48fea0);
w1(R+512,carry<u32>(r4(R+4),u32(0x34ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B48fea3:{NFSU2_TR(0x48fea3);
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
B48fea4:{NFSU2_TR(0x48fea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48fe90u);}goto L48fe90;}}
}
B48fea6:L48fea6:{c.instructions+=8;NFSU2_TR(0x48fea6);
__builtin_memmove((R+4),gp(0x82dc04),4);
}
B48feac:{NFSU2_TR(0x48feac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48feae:{NFSU2_TR(0x48feae);
__builtin_memmove(gp(0x82dc04),(R+0),4);
}
B48feb3:{NFSU2_TR(0x48feb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48feb4:{NFSU2_TR(0x48feb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48feb7:{NFSU2_TR(0x48feb7);
u8 U[4];
w4(U+0,u32(0x82dc00ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48febd:{NFSU2_TR(0x48febd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48febe:{NFSU2_TR(0x48febe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48fed0:L48fed0:{c.instructions+=9;NFSU2_TR(0x48fed0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fed1:{NFSU2_TR(0x48fed1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fed2:{NFSU2_TR(0x48fed2);
__builtin_memmove((R+12),(R+4),4);
}
B48fed4:{NFSU2_TR(0x48fed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fed7:{NFSU2_TR(0x48fed7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fed8:{NFSU2_TR(0x48fed8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48feda:{NFSU2_TR(0x48feda);
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
B48fedc:{NFSU2_TR(0x48fedc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fee0:{NFSU2_TR(0x48fee0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48ff2a;}}
}
B48fee2:L48fee2:{c.instructions+=2;NFSU2_TR(0x48fee2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fee3:{NFSU2_TR(0x48fee3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48fee4:L48fee4:{c.instructions+=6;NFSU2_TR(0x48fee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fee7:{NFSU2_TR(0x48fee7);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B48feeb:{NFSU2_TR(0x48feeb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B48feed:{NFSU2_TR(0x48feed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fef0:{NFSU2_TR(0x48fef0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48fef2:{NFSU2_TR(0x48fef2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48ff15;}}
}
B48fef4:L48fef4:{c.instructions+=3;NFSU2_TR(0x48fef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48fef7:{NFSU2_TR(0x48fef7);
__builtin_memmove((R+28),(R+0),4);
}
B48fef9:{NFSU2_TR(0x48fef9);
__builtin_memmove((R+16),(R+16),4);
}
B48ff00:L48ff00:{c.instructions+=3;NFSU2_TR(0x48ff00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48ff02:{NFSU2_TR(0x48ff02);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48ff04:{NFSU2_TR(0x48ff04);
if(r1(R+518)){{goto L48ff0f;}}
}
B48ff06:L48ff06:{c.instructions+=3;NFSU2_TR(0x48ff06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ff09:{NFSU2_TR(0x48ff09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ff0a:{NFSU2_TR(0x48ff0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ff0full));
TAIL_STATIC(0x5b9710u,5b9);
}
B48ff0f:L48ff0f:{c.instructions+=3;NFSU2_TR(0x48ff0f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B48ff12:{NFSU2_TR(0x48ff12);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B48ff13:{NFSU2_TR(0x48ff13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ff00u);}goto L48ff00;}}
}
B48ff15:L48ff15:{c.instructions+=7;NFSU2_TR(0x48ff15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ff19:{NFSU2_TR(0x48ff19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ff1c:{NFSU2_TR(0x48ff1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48ff1d:{NFSU2_TR(0x48ff1d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x34ull))));
}
B48ff20:{NFSU2_TR(0x48ff20);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B48ff22:{NFSU2_TR(0x48ff22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ff26:{NFSU2_TR(0x48ff26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48fee4u);}goto L48fee4;}}
}
B48ff28:L48ff28:{c.instructions+=2;NFSU2_TR(0x48ff28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ff29:{NFSU2_TR(0x48ff29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ff2a:L48ff2a:{c.instructions+=8;NFSU2_TR(0x48ff2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48ff2c:{NFSU2_TR(0x48ff2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48ff2f:{NFSU2_TR(0x48ff2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B48ff31:{NFSU2_TR(0x48ff31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48ff32:{NFSU2_TR(0x48ff32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ff35:{NFSU2_TR(0x48ff35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48ff36:{NFSU2_TR(0x48ff36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48ff37:{NFSU2_TR(0x48ff37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ff40:L48ff40:{c.instructions+=9;NFSU2_TR(0x48ff40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B48ff43:{NFSU2_TR(0x48ff43);
__builtin_memmove((R+0),(R+4),4);
}
B48ff45:{NFSU2_TR(0x48ff45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ff48:{NFSU2_TR(0x48ff48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ff49:{NFSU2_TR(0x48ff49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ff4d:{NFSU2_TR(0x48ff4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ff50:{NFSU2_TR(0x48ff50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48ff52:{NFSU2_TR(0x48ff52);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ff54:{NFSU2_TR(0x48ff54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x49000fu,490);}
}
B48ff5a:L48ff5a:{c.instructions+=10;NFSU2_TR(0x48ff5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ff5b:{NFSU2_TR(0x48ff5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ff5c:{NFSU2_TR(0x48ff5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ff5d:{NFSU2_TR(0x48ff5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ff60:{NFSU2_TR(0x48ff60);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ff64:{NFSU2_TR(0x48ff64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48ff66:{NFSU2_TR(0x48ff66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ff68:{NFSU2_TR(0x48ff68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ff6b:{NFSU2_TR(0x48ff6b);
w4(R+20,u32(0x1ull));
}
B48ff70:{NFSU2_TR(0x48ff70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48fff4;}}
}
B48ff76:L48ff76:{c.instructions+=3;NFSU2_TR(0x48ff76);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ff79:{NFSU2_TR(0x48ff79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ff7d:{NFSU2_TR(0x48ff7d);
__builtin_memmove((R+4),(R+4),4);
}
B48ff80:L48ff80:{c.instructions+=7;NFSU2_TR(0x48ff80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ff83:{NFSU2_TR(0x48ff83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ff87:{NFSU2_TR(0x48ff87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ff8a:{NFSU2_TR(0x48ff8a);
__builtin_memmove((R+8),(R+0),4);
}
B48ff8c:{NFSU2_TR(0x48ff8c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1fffull))));
}
B48ff92:{NFSU2_TR(0x48ff92);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x833784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B48ff98:{NFSU2_TR(0x48ff98);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ff9a:L48ff9a:{c.instructions+=3;NFSU2_TR(0x48ff9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ff9d:{NFSU2_TR(0x48ff9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ff9f:{NFSU2_TR(0x48ff9f);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ffa1:L48ffa1:{c.instructions+=3;NFSU2_TR(0x48ffa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ffa4:{NFSU2_TR(0x48ffa4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ffa6:{NFSU2_TR(0x48ffa6);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ffa8:L48ffa8:{c.instructions+=7;NFSU2_TR(0x48ffa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ffab:{NFSU2_TR(0x48ffab);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ffad:{NFSU2_TR(0x48ffad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ffae:{NFSU2_TR(0x48ffae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ffaf:{NFSU2_TR(0x48ffaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ffb0:{NFSU2_TR(0x48ffb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ffb1:{NFSU2_TR(0x48ffb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ffb6ull));
TAIL_STATIC(0x488bc0u,488);
}
B48ffb6:L48ffb6:{c.instructions+=3;NFSU2_TR(0x48ffb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48ffb9:{NFSU2_TR(0x48ffb9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ffbb:{NFSU2_TR(0x48ffbb);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ffbd:L48ffbd:{c.instructions+=3;NFSU2_TR(0x48ffbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ffc0:{NFSU2_TR(0x48ffc0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ffc2:{NFSU2_TR(0x48ffc2);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ffc4:L48ffc4:{c.instructions+=2;NFSU2_TR(0x48ffc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48ffc7:{NFSU2_TR(0x48ffc7);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ffc9:L48ffc9:{c.instructions+=2;NFSU2_TR(0x48ffc9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48ffcc:{NFSU2_TR(0x48ffcc);
if(r1(R+518)){{goto L48ffd3;}}
}
B48ffce:L48ffce:{c.instructions+=2;NFSU2_TR(0x48ffce);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48ffd1:{NFSU2_TR(0x48ffd1);
if(r1(R+518)){{goto L48ffdf;}}
}
B48ffd3:L48ffd3:{c.instructions+=2;NFSU2_TR(0x48ffd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ffd6:{NFSU2_TR(0x48ffd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ffdbull));
TAIL_STATIC(0x5b96f0u,5b9);
}
B48ffdb:L48ffdb:{c.instructions+=2;NFSU2_TR(0x48ffdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48ffdd:{NFSU2_TR(0x48ffdd);
{goto L48ffe6;}
}
B48ffdf:L48ffdf:{c.instructions+=3;NFSU2_TR(0x48ffdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ffe2:{NFSU2_TR(0x48ffe2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48ffe4:{NFSU2_TR(0x48ffe4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48ffe6:L48ffe6:{c.instructions+=5;NFSU2_TR(0x48ffe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ffea:{NFSU2_TR(0x48ffea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B48ffed:{NFSU2_TR(0x48ffed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48ffee:{NFSU2_TR(0x48ffee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fff2:{NFSU2_TR(0x48fff2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ff80u);}goto L48ff80;}}
}
B48fff4:L48fff4:{c.instructions+=4;NFSU2_TR(0x48fff4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48fff8:{NFSU2_TR(0x48fff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fffb:{NFSU2_TR(0x48fffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48fffe:{NFSU2_TR(0x48fffe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x34ull))));
TAIL_STATIC(0x490001u,490);
}
XIT:NFSU2_TR_EXIT(0x48f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
