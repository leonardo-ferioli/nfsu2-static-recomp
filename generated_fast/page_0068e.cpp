#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_68d(u8* __restrict R,Cpu& c);
u32 body_68f(u8* __restrict R,Cpu& c);
u32 body_693(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x68e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x68e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_68e(u8* __restrict R,Cpu& c);
u32 page_68e(Cpu& c){return body_68e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_68e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x68e005:goto L68e005;
case 0x68e00b:c.instructions+=1;goto B68e00b;
case 0x68e010:goto L68e010;
case 0x68e016:c.instructions+=6;goto B68e016;
case 0x68e018:c.instructions+=5;goto B68e018;
case 0x68e01f:c.instructions+=4;goto B68e01f;
case 0x68e026:c.instructions+=3;goto B68e026;
case 0x68e02d:c.instructions+=2;goto B68e02d;
case 0x68e033:c.instructions+=1;goto B68e033;
case 0x68e040:goto L68e040;
case 0x68e043:c.instructions+=9;goto B68e043;
case 0x68e047:c.instructions+=8;goto B68e047;
case 0x68e04b:c.instructions+=7;goto B68e04b;
case 0x68e04e:c.instructions+=6;goto B68e04e;
case 0x68e052:c.instructions+=5;goto B68e052;
case 0x68e056:c.instructions+=4;goto B68e056;
case 0x68e05a:c.instructions+=3;goto B68e05a;
case 0x68e05e:c.instructions+=2;goto B68e05e;
case 0x68e061:c.instructions+=1;goto B68e061;
case 0x68e063:goto L68e063;
case 0x68e067:c.instructions+=5;goto B68e067;
case 0x68e06b:c.instructions+=4;goto B68e06b;
case 0x68e06e:c.instructions+=3;goto B68e06e;
case 0x68e072:c.instructions+=2;goto B68e072;
case 0x68e076:c.instructions+=1;goto B68e076;
case 0x68e07a:goto L68e07a;
case 0x68e07e:c.instructions+=16;goto B68e07e;
case 0x68e082:c.instructions+=15;goto B68e082;
case 0x68e087:c.instructions+=14;goto B68e087;
case 0x68e08b:c.instructions+=13;goto B68e08b;
case 0x68e090:c.instructions+=12;goto B68e090;
case 0x68e094:c.instructions+=11;goto B68e094;
case 0x68e097:c.instructions+=10;goto B68e097;
case 0x68e09a:c.instructions+=9;goto B68e09a;
case 0x68e09d:c.instructions+=8;goto B68e09d;
case 0x68e0a0:c.instructions+=7;goto B68e0a0;
case 0x68e0a3:c.instructions+=6;goto B68e0a3;
case 0x68e0a6:c.instructions+=5;goto B68e0a6;
case 0x68e0a9:c.instructions+=4;goto B68e0a9;
case 0x68e0ac:c.instructions+=3;goto B68e0ac;
case 0x68e0af:c.instructions+=2;goto B68e0af;
case 0x68e0b2:c.instructions+=1;goto B68e0b2;
case 0x68e0b4:goto L68e0b4;
case 0x68e0b8:c.instructions+=5;goto B68e0b8;
case 0x68e0bb:c.instructions+=4;goto B68e0bb;
case 0x68e0bf:c.instructions+=3;goto B68e0bf;
case 0x68e0c3:c.instructions+=2;goto B68e0c3;
case 0x68e0c6:c.instructions+=1;goto B68e0c6;
case 0x68e0e0:goto L68e0e0;
case 0x68e0e6:c.instructions+=10;goto B68e0e6;
case 0x68e0ed:c.instructions+=9;goto B68e0ed;
case 0x68e0f4:c.instructions+=8;goto B68e0f4;
case 0x68e0fb:c.instructions+=7;goto B68e0fb;
case 0x68e0fd:c.instructions+=6;goto B68e0fd;
case 0x68e100:c.instructions+=5;goto B68e100;
case 0x68e106:c.instructions+=4;goto B68e106;
case 0x68e10c:c.instructions+=3;goto B68e10c;
case 0x68e112:c.instructions+=2;goto B68e112;
case 0x68e115:c.instructions+=1;goto B68e115;
case 0x68e117:goto L68e117;
case 0x68e11d:c.instructions+=1;goto B68e11d;
case 0x68e120:goto L68e120;
case 0x68e126:goto L68e126;
case 0x68e129:c.instructions+=4;goto B68e129;
case 0x68e12c:c.instructions+=3;goto B68e12c;
case 0x68e130:c.instructions+=2;goto B68e130;
case 0x68e134:c.instructions+=1;goto B68e134;
case 0x68e139:goto L68e139;
case 0x68e13f:c.instructions+=5;goto B68e13f;
case 0x68e145:c.instructions+=4;goto B68e145;
case 0x68e14b:c.instructions+=3;goto B68e14b;
case 0x68e151:c.instructions+=2;goto B68e151;
case 0x68e157:c.instructions+=1;goto B68e157;
case 0x68e159:goto L68e159;
case 0x68e15d:c.instructions+=50;goto B68e15d;
case 0x68e162:c.instructions+=49;goto B68e162;
case 0x68e167:c.instructions+=48;goto B68e167;
case 0x68e16c:c.instructions+=47;goto B68e16c;
case 0x68e170:c.instructions+=46;goto B68e170;
case 0x68e174:c.instructions+=45;goto B68e174;
case 0x68e178:c.instructions+=44;goto B68e178;
case 0x68e17c:c.instructions+=43;goto B68e17c;
case 0x68e181:c.instructions+=42;goto B68e181;
case 0x68e186:c.instructions+=41;goto B68e186;
case 0x68e18b:c.instructions+=40;goto B68e18b;
case 0x68e190:c.instructions+=39;goto B68e190;
case 0x68e194:c.instructions+=38;goto B68e194;
case 0x68e198:c.instructions+=37;goto B68e198;
case 0x68e19c:c.instructions+=36;goto B68e19c;
case 0x68e1a0:c.instructions+=35;goto B68e1a0;
case 0x68e1a4:c.instructions+=34;goto B68e1a4;
case 0x68e1a9:c.instructions+=33;goto B68e1a9;
case 0x68e1ae:c.instructions+=32;goto B68e1ae;
case 0x68e1b3:c.instructions+=31;goto B68e1b3;
case 0x68e1b8:c.instructions+=30;goto B68e1b8;
case 0x68e1bd:c.instructions+=29;goto B68e1bd;
case 0x68e1c2:c.instructions+=28;goto B68e1c2;
case 0x68e1c7:c.instructions+=27;goto B68e1c7;
case 0x68e1cc:c.instructions+=26;goto B68e1cc;
case 0x68e1d1:c.instructions+=25;goto B68e1d1;
case 0x68e1d6:c.instructions+=24;goto B68e1d6;
case 0x68e1db:c.instructions+=23;goto B68e1db;
case 0x68e1df:c.instructions+=22;goto B68e1df;
case 0x68e1e3:c.instructions+=21;goto B68e1e3;
case 0x68e1e7:c.instructions+=20;goto B68e1e7;
case 0x68e1eb:c.instructions+=19;goto B68e1eb;
case 0x68e1f0:c.instructions+=18;goto B68e1f0;
case 0x68e1f5:c.instructions+=17;goto B68e1f5;
case 0x68e1fa:c.instructions+=16;goto B68e1fa;
case 0x68e1ff:c.instructions+=15;goto B68e1ff;
case 0x68e203:c.instructions+=14;goto B68e203;
case 0x68e207:c.instructions+=13;goto B68e207;
case 0x68e20b:c.instructions+=12;goto B68e20b;
case 0x68e20f:c.instructions+=11;goto B68e20f;
case 0x68e217:c.instructions+=10;goto B68e217;
case 0x68e21f:c.instructions+=9;goto B68e21f;
case 0x68e227:c.instructions+=8;goto B68e227;
case 0x68e22f:c.instructions+=7;goto B68e22f;
case 0x68e237:c.instructions+=6;goto B68e237;
case 0x68e23f:c.instructions+=5;goto B68e23f;
case 0x68e247:c.instructions+=4;goto B68e247;
case 0x68e24f:c.instructions+=3;goto B68e24f;
case 0x68e255:c.instructions+=2;goto B68e255;
case 0x68e25b:c.instructions+=1;goto B68e25b;
case 0x68e261:goto L68e261;
case 0x68e264:c.instructions+=1;goto B68e264;
case 0x68e26a:goto L68e26a;
case 0x68e26d:c.instructions+=78;goto B68e26d;
case 0x68e271:c.instructions+=77;goto B68e271;
case 0x68e276:c.instructions+=76;goto B68e276;
case 0x68e27c:c.instructions+=75;goto B68e27c;
case 0x68e27f:c.instructions+=74;goto B68e27f;
case 0x68e282:c.instructions+=73;goto B68e282;
case 0x68e285:c.instructions+=72;goto B68e285;
case 0x68e288:c.instructions+=71;goto B68e288;
case 0x68e28c:c.instructions+=70;goto B68e28c;
case 0x68e291:c.instructions+=69;goto B68e291;
case 0x68e297:c.instructions+=68;goto B68e297;
case 0x68e29a:c.instructions+=67;goto B68e29a;
case 0x68e29d:c.instructions+=66;goto B68e29d;
case 0x68e2a0:c.instructions+=65;goto B68e2a0;
case 0x68e2a3:c.instructions+=64;goto B68e2a3;
case 0x68e2a6:c.instructions+=63;goto B68e2a6;
case 0x68e2a9:c.instructions+=62;goto B68e2a9;
case 0x68e2ac:c.instructions+=61;goto B68e2ac;
case 0x68e2af:c.instructions+=60;goto B68e2af;
case 0x68e2b2:c.instructions+=59;goto B68e2b2;
case 0x68e2b5:c.instructions+=58;goto B68e2b5;
case 0x68e2b9:c.instructions+=57;goto B68e2b9;
case 0x68e2be:c.instructions+=56;goto B68e2be;
case 0x68e2c3:c.instructions+=55;goto B68e2c3;
case 0x68e2c8:c.instructions+=54;goto B68e2c8;
case 0x68e2cb:c.instructions+=53;goto B68e2cb;
case 0x68e2ce:c.instructions+=52;goto B68e2ce;
case 0x68e2d3:c.instructions+=51;goto B68e2d3;
case 0x68e2d8:c.instructions+=50;goto B68e2d8;
case 0x68e2db:c.instructions+=49;goto B68e2db;
case 0x68e2de:c.instructions+=48;goto B68e2de;
case 0x68e2e1:c.instructions+=47;goto B68e2e1;
case 0x68e2e6:c.instructions+=46;goto B68e2e6;
case 0x68e2eb:c.instructions+=45;goto B68e2eb;
case 0x68e2ee:c.instructions+=44;goto B68e2ee;
case 0x68e2f1:c.instructions+=43;goto B68e2f1;
case 0x68e2f4:c.instructions+=42;goto B68e2f4;
case 0x68e2f7:c.instructions+=41;goto B68e2f7;
case 0x68e2fa:c.instructions+=40;goto B68e2fa;
case 0x68e302:c.instructions+=39;goto B68e302;
case 0x68e30a:c.instructions+=38;goto B68e30a;
case 0x68e312:c.instructions+=37;goto B68e312;
case 0x68e31a:c.instructions+=36;goto B68e31a;
case 0x68e31d:c.instructions+=35;goto B68e31d;
case 0x68e320:c.instructions+=34;goto B68e320;
case 0x68e323:c.instructions+=33;goto B68e323;
case 0x68e326:c.instructions+=32;goto B68e326;
case 0x68e32d:c.instructions+=31;goto B68e32d;
case 0x68e335:c.instructions+=30;goto B68e335;
case 0x68e33d:c.instructions+=29;goto B68e33d;
case 0x68e345:c.instructions+=28;goto B68e345;
case 0x68e34d:c.instructions+=27;goto B68e34d;
case 0x68e350:c.instructions+=26;goto B68e350;
case 0x68e353:c.instructions+=25;goto B68e353;
case 0x68e356:c.instructions+=24;goto B68e356;
case 0x68e359:c.instructions+=23;goto B68e359;
case 0x68e35c:c.instructions+=22;goto B68e35c;
case 0x68e35f:c.instructions+=21;goto B68e35f;
case 0x68e362:c.instructions+=20;goto B68e362;
case 0x68e365:c.instructions+=19;goto B68e365;
case 0x68e368:c.instructions+=18;goto B68e368;
case 0x68e36b:c.instructions+=17;goto B68e36b;
case 0x68e36e:c.instructions+=16;goto B68e36e;
case 0x68e373:c.instructions+=15;goto B68e373;
case 0x68e377:c.instructions+=14;goto B68e377;
case 0x68e37a:c.instructions+=13;goto B68e37a;
case 0x68e37e:c.instructions+=12;goto B68e37e;
case 0x68e384:c.instructions+=11;goto B68e384;
case 0x68e388:c.instructions+=10;goto B68e388;
case 0x68e38b:c.instructions+=9;goto B68e38b;
case 0x68e38e:c.instructions+=8;goto B68e38e;
case 0x68e393:c.instructions+=7;goto B68e393;
case 0x68e397:c.instructions+=6;goto B68e397;
case 0x68e39a:c.instructions+=5;goto B68e39a;
case 0x68e39e:c.instructions+=4;goto B68e39e;
case 0x68e3a4:c.instructions+=3;goto B68e3a4;
case 0x68e3a7:c.instructions+=2;goto B68e3a7;
case 0x68e3aa:c.instructions+=1;goto B68e3aa;
case 0x68e3af:goto L68e3af;
case 0x68e3b2:c.instructions+=1;goto B68e3b2;
case 0x68e3b4:goto L68e3b4;
case 0x68e3b7:c.instructions+=8;goto B68e3b7;
case 0x68e3ba:c.instructions+=7;goto B68e3ba;
case 0x68e3bd:c.instructions+=6;goto B68e3bd;
case 0x68e3bf:c.instructions+=5;goto B68e3bf;
case 0x68e3c1:c.instructions+=4;goto B68e3c1;
case 0x68e3c6:c.instructions+=3;goto B68e3c6;
case 0x68e3cc:c.instructions+=2;goto B68e3cc;
case 0x68e3d2:c.instructions+=1;goto B68e3d2;
case 0x68e3d7:goto L68e3d7;
case 0x68e3dd:c.instructions+=6;goto B68e3dd;
case 0x68e3df:c.instructions+=5;goto B68e3df;
case 0x68e3e6:c.instructions+=4;goto B68e3e6;
case 0x68e3ed:c.instructions+=3;goto B68e3ed;
case 0x68e3f4:c.instructions+=2;goto B68e3f4;
case 0x68e3fa:c.instructions+=1;goto B68e3fa;
case 0x68e400:goto L68e400;
case 0x68e406:c.instructions+=10;goto B68e406;
case 0x68e40d:c.instructions+=9;goto B68e40d;
case 0x68e414:c.instructions+=8;goto B68e414;
case 0x68e41b:c.instructions+=7;goto B68e41b;
case 0x68e41d:c.instructions+=6;goto B68e41d;
case 0x68e420:c.instructions+=5;goto B68e420;
case 0x68e426:c.instructions+=4;goto B68e426;
case 0x68e42c:c.instructions+=3;goto B68e42c;
case 0x68e432:c.instructions+=2;goto B68e432;
case 0x68e435:c.instructions+=1;goto B68e435;
case 0x68e437:goto L68e437;
case 0x68e43d:c.instructions+=1;goto B68e43d;
case 0x68e440:goto L68e440;
case 0x68e446:goto L68e446;
case 0x68e449:c.instructions+=4;goto B68e449;
case 0x68e44c:c.instructions+=3;goto B68e44c;
case 0x68e450:c.instructions+=2;goto B68e450;
case 0x68e454:c.instructions+=1;goto B68e454;
case 0x68e459:goto L68e459;
case 0x68e45f:c.instructions+=5;goto B68e45f;
case 0x68e465:c.instructions+=4;goto B68e465;
case 0x68e46b:c.instructions+=3;goto B68e46b;
case 0x68e471:c.instructions+=2;goto B68e471;
case 0x68e477:c.instructions+=1;goto B68e477;
case 0x68e479:goto L68e479;
case 0x68e47d:c.instructions+=38;goto B68e47d;
case 0x68e482:c.instructions+=37;goto B68e482;
case 0x68e487:c.instructions+=36;goto B68e487;
case 0x68e48c:c.instructions+=35;goto B68e48c;
case 0x68e490:c.instructions+=34;goto B68e490;
case 0x68e494:c.instructions+=33;goto B68e494;
case 0x68e498:c.instructions+=32;goto B68e498;
case 0x68e49c:c.instructions+=31;goto B68e49c;
case 0x68e4a1:c.instructions+=30;goto B68e4a1;
case 0x68e4a6:c.instructions+=29;goto B68e4a6;
case 0x68e4ab:c.instructions+=28;goto B68e4ab;
case 0x68e4b0:c.instructions+=27;goto B68e4b0;
case 0x68e4b4:c.instructions+=26;goto B68e4b4;
case 0x68e4b8:c.instructions+=25;goto B68e4b8;
case 0x68e4bc:c.instructions+=24;goto B68e4bc;
case 0x68e4c0:c.instructions+=23;goto B68e4c0;
case 0x68e4c4:c.instructions+=22;goto B68e4c4;
case 0x68e4c9:c.instructions+=21;goto B68e4c9;
case 0x68e4ce:c.instructions+=20;goto B68e4ce;
case 0x68e4d3:c.instructions+=19;goto B68e4d3;
case 0x68e4d8:c.instructions+=18;goto B68e4d8;
case 0x68e4dd:c.instructions+=17;goto B68e4dd;
case 0x68e4e2:c.instructions+=16;goto B68e4e2;
case 0x68e4e7:c.instructions+=15;goto B68e4e7;
case 0x68e4ec:c.instructions+=14;goto B68e4ec;
case 0x68e4f1:c.instructions+=13;goto B68e4f1;
case 0x68e4f6:c.instructions+=12;goto B68e4f6;
case 0x68e4fb:c.instructions+=11;goto B68e4fb;
case 0x68e4ff:c.instructions+=10;goto B68e4ff;
case 0x68e503:c.instructions+=9;goto B68e503;
case 0x68e507:c.instructions+=8;goto B68e507;
case 0x68e50b:c.instructions+=7;goto B68e50b;
case 0x68e513:c.instructions+=6;goto B68e513;
case 0x68e51b:c.instructions+=5;goto B68e51b;
case 0x68e523:c.instructions+=4;goto B68e523;
case 0x68e52b:c.instructions+=3;goto B68e52b;
case 0x68e531:c.instructions+=2;goto B68e531;
case 0x68e537:c.instructions+=1;goto B68e537;
case 0x68e53d:goto L68e53d;
case 0x68e540:c.instructions+=1;goto B68e540;
case 0x68e546:goto L68e546;
case 0x68e549:c.instructions+=58;goto B68e549;
case 0x68e54d:c.instructions+=57;goto B68e54d;
case 0x68e552:c.instructions+=56;goto B68e552;
case 0x68e558:c.instructions+=55;goto B68e558;
case 0x68e55b:c.instructions+=54;goto B68e55b;
case 0x68e55e:c.instructions+=53;goto B68e55e;
case 0x68e561:c.instructions+=52;goto B68e561;
case 0x68e564:c.instructions+=51;goto B68e564;
case 0x68e568:c.instructions+=50;goto B68e568;
case 0x68e56d:c.instructions+=49;goto B68e56d;
case 0x68e573:c.instructions+=48;goto B68e573;
case 0x68e576:c.instructions+=47;goto B68e576;
case 0x68e579:c.instructions+=46;goto B68e579;
case 0x68e57c:c.instructions+=45;goto B68e57c;
case 0x68e57f:c.instructions+=44;goto B68e57f;
case 0x68e582:c.instructions+=43;goto B68e582;
case 0x68e585:c.instructions+=42;goto B68e585;
case 0x68e588:c.instructions+=41;goto B68e588;
case 0x68e58b:c.instructions+=40;goto B68e58b;
case 0x68e58e:c.instructions+=39;goto B68e58e;
case 0x68e592:c.instructions+=38;goto B68e592;
case 0x68e597:c.instructions+=37;goto B68e597;
case 0x68e59c:c.instructions+=36;goto B68e59c;
case 0x68e59f:c.instructions+=35;goto B68e59f;
case 0x68e5a2:c.instructions+=34;goto B68e5a2;
case 0x68e5a7:c.instructions+=33;goto B68e5a7;
case 0x68e5ac:c.instructions+=32;goto B68e5ac;
case 0x68e5b1:c.instructions+=31;goto B68e5b1;
case 0x68e5b4:c.instructions+=30;goto B68e5b4;
case 0x68e5b7:c.instructions+=29;goto B68e5b7;
case 0x68e5ba:c.instructions+=28;goto B68e5ba;
case 0x68e5bd:c.instructions+=27;goto B68e5bd;
case 0x68e5c0:c.instructions+=26;goto B68e5c0;
case 0x68e5c8:c.instructions+=25;goto B68e5c8;
case 0x68e5d0:c.instructions+=24;goto B68e5d0;
case 0x68e5d8:c.instructions+=23;goto B68e5d8;
case 0x68e5db:c.instructions+=22;goto B68e5db;
case 0x68e5de:c.instructions+=21;goto B68e5de;
case 0x68e5e1:c.instructions+=20;goto B68e5e1;
case 0x68e5e4:c.instructions+=19;goto B68e5e4;
case 0x68e5e7:c.instructions+=18;goto B68e5e7;
case 0x68e5ea:c.instructions+=17;goto B68e5ea;
case 0x68e5ed:c.instructions+=16;goto B68e5ed;
case 0x68e5f2:c.instructions+=15;goto B68e5f2;
case 0x68e5f6:c.instructions+=14;goto B68e5f6;
case 0x68e5f9:c.instructions+=13;goto B68e5f9;
case 0x68e5fd:c.instructions+=12;goto B68e5fd;
case 0x68e603:c.instructions+=11;goto B68e603;
case 0x68e607:c.instructions+=10;goto B68e607;
case 0x68e60a:c.instructions+=9;goto B68e60a;
case 0x68e60d:c.instructions+=8;goto B68e60d;
case 0x68e612:c.instructions+=7;goto B68e612;
case 0x68e616:c.instructions+=6;goto B68e616;
case 0x68e619:c.instructions+=5;goto B68e619;
case 0x68e61d:c.instructions+=4;goto B68e61d;
case 0x68e623:c.instructions+=3;goto B68e623;
case 0x68e626:c.instructions+=2;goto B68e626;
case 0x68e629:c.instructions+=1;goto B68e629;
case 0x68e62e:goto L68e62e;
case 0x68e631:c.instructions+=1;goto B68e631;
case 0x68e633:goto L68e633;
case 0x68e636:c.instructions+=8;goto B68e636;
case 0x68e639:c.instructions+=7;goto B68e639;
case 0x68e63c:c.instructions+=6;goto B68e63c;
case 0x68e63e:c.instructions+=5;goto B68e63e;
case 0x68e640:c.instructions+=4;goto B68e640;
case 0x68e645:c.instructions+=3;goto B68e645;
case 0x68e64b:c.instructions+=2;goto B68e64b;
case 0x68e651:c.instructions+=1;goto B68e651;
case 0x68e656:goto L68e656;
case 0x68e65c:c.instructions+=6;goto B68e65c;
case 0x68e65e:c.instructions+=5;goto B68e65e;
case 0x68e665:c.instructions+=4;goto B68e665;
case 0x68e66c:c.instructions+=3;goto B68e66c;
case 0x68e673:c.instructions+=2;goto B68e673;
case 0x68e679:c.instructions+=1;goto B68e679;
case 0x68e67c:goto L68e67c;
case 0x68e680:c.instructions+=38;goto B68e680;
case 0x68e684:c.instructions+=37;goto B68e684;
case 0x68e687:c.instructions+=36;goto B68e687;
case 0x68e68b:c.instructions+=35;goto B68e68b;
case 0x68e68e:c.instructions+=34;goto B68e68e;
case 0x68e691:c.instructions+=33;goto B68e691;
case 0x68e694:c.instructions+=32;goto B68e694;
case 0x68e697:c.instructions+=31;goto B68e697;
case 0x68e69a:c.instructions+=30;goto B68e69a;
case 0x68e69e:c.instructions+=29;goto B68e69e;
case 0x68e6a1:c.instructions+=28;goto B68e6a1;
case 0x68e6a4:c.instructions+=27;goto B68e6a4;
case 0x68e6a8:c.instructions+=26;goto B68e6a8;
case 0x68e6ab:c.instructions+=25;goto B68e6ab;
case 0x68e6ae:c.instructions+=24;goto B68e6ae;
case 0x68e6b2:c.instructions+=23;goto B68e6b2;
case 0x68e6b9:c.instructions+=22;goto B68e6b9;
case 0x68e6bd:c.instructions+=21;goto B68e6bd;
case 0x68e6c4:c.instructions+=20;goto B68e6c4;
case 0x68e6c8:c.instructions+=19;goto B68e6c8;
case 0x68e6cc:c.instructions+=18;goto B68e6cc;
case 0x68e6d0:c.instructions+=17;goto B68e6d0;
case 0x68e6d3:c.instructions+=16;goto B68e6d3;
case 0x68e6d7:c.instructions+=15;goto B68e6d7;
case 0x68e6db:c.instructions+=14;goto B68e6db;
case 0x68e6df:c.instructions+=13;goto B68e6df;
case 0x68e6e6:c.instructions+=12;goto B68e6e6;
case 0x68e6ea:c.instructions+=11;goto B68e6ea;
case 0x68e6ee:c.instructions+=10;goto B68e6ee;
case 0x68e6f5:c.instructions+=9;goto B68e6f5;
case 0x68e6f9:c.instructions+=8;goto B68e6f9;
case 0x68e6fc:c.instructions+=7;goto B68e6fc;
case 0x68e700:c.instructions+=6;goto B68e700;
case 0x68e704:c.instructions+=5;goto B68e704;
case 0x68e708:c.instructions+=4;goto B68e708;
case 0x68e70c:c.instructions+=3;goto B68e70c;
case 0x68e710:c.instructions+=2;goto B68e710;
case 0x68e712:c.instructions+=1;goto B68e712;
case 0x68e715:goto L68e715;
case 0x68e719:c.instructions+=24;goto B68e719;
case 0x68e71c:c.instructions+=23;goto B68e71c;
case 0x68e720:c.instructions+=22;goto B68e720;
case 0x68e723:c.instructions+=21;goto B68e723;
case 0x68e727:c.instructions+=20;goto B68e727;
case 0x68e72a:c.instructions+=19;goto B68e72a;
case 0x68e72e:c.instructions+=18;goto B68e72e;
case 0x68e732:c.instructions+=17;goto B68e732;
case 0x68e736:c.instructions+=16;goto B68e736;
case 0x68e73a:c.instructions+=15;goto B68e73a;
case 0x68e73d:c.instructions+=14;goto B68e73d;
case 0x68e741:c.instructions+=13;goto B68e741;
case 0x68e749:c.instructions+=12;goto B68e749;
case 0x68e74c:c.instructions+=11;goto B68e74c;
case 0x68e750:c.instructions+=10;goto B68e750;
case 0x68e754:c.instructions+=9;goto B68e754;
case 0x68e757:c.instructions+=8;goto B68e757;
case 0x68e75a:c.instructions+=7;goto B68e75a;
case 0x68e75e:c.instructions+=6;goto B68e75e;
case 0x68e762:c.instructions+=5;goto B68e762;
case 0x68e766:c.instructions+=4;goto B68e766;
case 0x68e769:c.instructions+=3;goto B68e769;
case 0x68e76d:c.instructions+=2;goto B68e76d;
case 0x68e76f:c.instructions+=1;goto B68e76f;
case 0x68e772:goto L68e772;
case 0x68e775:c.instructions+=7;goto B68e775;
case 0x68e779:c.instructions+=6;goto B68e779;
case 0x68e77d:c.instructions+=5;goto B68e77d;
case 0x68e780:c.instructions+=4;goto B68e780;
case 0x68e784:c.instructions+=3;goto B68e784;
case 0x68e786:c.instructions+=2;goto B68e786;
case 0x68e78a:c.instructions+=1;goto B68e78a;
case 0x68e78c:goto L68e78c;
case 0x68e78f:c.instructions+=1;goto B68e78f;
case 0x68e793:goto L68e793;
case 0x68e795:c.instructions+=2;goto B68e795;
case 0x68e798:c.instructions+=1;goto B68e798;
case 0x68e79a:goto L68e79a;
case 0x68e79f:goto L68e79f;
case 0x68e7a3:c.instructions+=2;goto B68e7a3;
case 0x68e7ab:c.instructions+=1;goto B68e7ab;
case 0x68e7ae:goto L68e7ae;
case 0x68e7b1:c.instructions+=2;goto B68e7b1;
case 0x68e7b3:c.instructions+=1;goto B68e7b3;
case 0x68e7b6:goto L68e7b6;
case 0x68e7ba:c.instructions+=30;goto B68e7ba;
case 0x68e7bd:c.instructions+=29;goto B68e7bd;
case 0x68e7c0:c.instructions+=28;goto B68e7c0;
case 0x68e7c4:c.instructions+=27;goto B68e7c4;
case 0x68e7c7:c.instructions+=26;goto B68e7c7;
case 0x68e7ca:c.instructions+=25;goto B68e7ca;
case 0x68e7cd:c.instructions+=24;goto B68e7cd;
case 0x68e7d1:c.instructions+=23;goto B68e7d1;
case 0x68e7d5:c.instructions+=22;goto B68e7d5;
case 0x68e7d9:c.instructions+=21;goto B68e7d9;
case 0x68e7dd:c.instructions+=20;goto B68e7dd;
case 0x68e7e1:c.instructions+=19;goto B68e7e1;
case 0x68e7e5:c.instructions+=18;goto B68e7e5;
case 0x68e7e9:c.instructions+=17;goto B68e7e9;
case 0x68e7ed:c.instructions+=16;goto B68e7ed;
case 0x68e7f1:c.instructions+=15;goto B68e7f1;
case 0x68e7f5:c.instructions+=14;goto B68e7f5;
case 0x68e7f8:c.instructions+=13;goto B68e7f8;
case 0x68e7fb:c.instructions+=12;goto B68e7fb;
case 0x68e7fe:c.instructions+=11;goto B68e7fe;
case 0x68e801:c.instructions+=10;goto B68e801;
case 0x68e804:c.instructions+=9;goto B68e804;
case 0x68e808:c.instructions+=8;goto B68e808;
case 0x68e80c:c.instructions+=7;goto B68e80c;
case 0x68e80f:c.instructions+=6;goto B68e80f;
case 0x68e812:c.instructions+=5;goto B68e812;
case 0x68e815:c.instructions+=4;goto B68e815;
case 0x68e81b:c.instructions+=3;goto B68e81b;
case 0x68e81e:c.instructions+=2;goto B68e81e;
case 0x68e820:c.instructions+=1;goto B68e820;
case 0x68e822:goto L68e822;
case 0x68e82a:c.instructions+=25;goto B68e82a;
case 0x68e82e:c.instructions+=24;goto B68e82e;
case 0x68e832:c.instructions+=23;goto B68e832;
case 0x68e836:c.instructions+=22;goto B68e836;
case 0x68e839:c.instructions+=21;goto B68e839;
case 0x68e83c:c.instructions+=20;goto B68e83c;
case 0x68e83f:c.instructions+=19;goto B68e83f;
case 0x68e842:c.instructions+=18;goto B68e842;
case 0x68e846:c.instructions+=17;goto B68e846;
case 0x68e849:c.instructions+=16;goto B68e849;
case 0x68e84d:c.instructions+=15;goto B68e84d;
case 0x68e851:c.instructions+=14;goto B68e851;
case 0x68e854:c.instructions+=13;goto B68e854;
case 0x68e858:c.instructions+=12;goto B68e858;
case 0x68e85c:c.instructions+=11;goto B68e85c;
case 0x68e860:c.instructions+=10;goto B68e860;
case 0x68e868:c.instructions+=9;goto B68e868;
case 0x68e86c:c.instructions+=8;goto B68e86c;
case 0x68e870:c.instructions+=7;goto B68e870;
case 0x68e874:c.instructions+=6;goto B68e874;
case 0x68e878:c.instructions+=5;goto B68e878;
case 0x68e87b:c.instructions+=4;goto B68e87b;
case 0x68e87e:c.instructions+=3;goto B68e87e;
case 0x68e882:c.instructions+=2;goto B68e882;
case 0x68e884:c.instructions+=1;goto B68e884;
case 0x68e887:goto L68e887;
case 0x68e88c:c.instructions+=3;goto B68e88c;
case 0x68e891:c.instructions+=2;goto B68e891;
case 0x68e895:c.instructions+=1;goto B68e895;
case 0x68e897:goto L68e897;
case 0x68e89f:c.instructions+=25;goto B68e89f;
case 0x68e8a2:c.instructions+=24;goto B68e8a2;
case 0x68e8a6:c.instructions+=23;goto B68e8a6;
case 0x68e8aa:c.instructions+=22;goto B68e8aa;
case 0x68e8ad:c.instructions+=21;goto B68e8ad;
case 0x68e8b1:c.instructions+=20;goto B68e8b1;
case 0x68e8b4:c.instructions+=19;goto B68e8b4;
case 0x68e8b8:c.instructions+=18;goto B68e8b8;
case 0x68e8bc:c.instructions+=17;goto B68e8bc;
case 0x68e8c0:c.instructions+=16;goto B68e8c0;
case 0x68e8c4:c.instructions+=15;goto B68e8c4;
case 0x68e8c7:c.instructions+=14;goto B68e8c7;
case 0x68e8cb:c.instructions+=13;goto B68e8cb;
case 0x68e8ce:c.instructions+=12;goto B68e8ce;
case 0x68e8d6:c.instructions+=11;goto B68e8d6;
case 0x68e8dd:c.instructions+=10;goto B68e8dd;
case 0x68e8e1:c.instructions+=9;goto B68e8e1;
case 0x68e8e5:c.instructions+=8;goto B68e8e5;
case 0x68e8e9:c.instructions+=7;goto B68e8e9;
case 0x68e8ed:c.instructions+=6;goto B68e8ed;
case 0x68e8f1:c.instructions+=5;goto B68e8f1;
case 0x68e8f4:c.instructions+=4;goto B68e8f4;
case 0x68e8f8:c.instructions+=3;goto B68e8f8;
case 0x68e8fb:c.instructions+=2;goto B68e8fb;
case 0x68e8fd:c.instructions+=1;goto B68e8fd;
case 0x68e900:goto L68e900;
case 0x68e906:c.instructions+=2;goto B68e906;
case 0x68e90a:c.instructions+=1;goto B68e90a;
case 0x68e90c:goto L68e90c;
case 0x68e914:c.instructions+=25;goto B68e914;
case 0x68e917:c.instructions+=24;goto B68e917;
case 0x68e91a:c.instructions+=23;goto B68e91a;
case 0x68e91e:c.instructions+=22;goto B68e91e;
case 0x68e922:c.instructions+=21;goto B68e922;
case 0x68e925:c.instructions+=20;goto B68e925;
case 0x68e928:c.instructions+=19;goto B68e928;
case 0x68e92c:c.instructions+=18;goto B68e92c;
case 0x68e92f:c.instructions+=17;goto B68e92f;
case 0x68e933:c.instructions+=16;goto B68e933;
case 0x68e936:c.instructions+=15;goto B68e936;
case 0x68e93a:c.instructions+=14;goto B68e93a;
case 0x68e93e:c.instructions+=13;goto B68e93e;
case 0x68e942:c.instructions+=12;goto B68e942;
case 0x68e949:c.instructions+=11;goto B68e949;
case 0x68e94d:c.instructions+=10;goto B68e94d;
case 0x68e955:c.instructions+=9;goto B68e955;
case 0x68e959:c.instructions+=8;goto B68e959;
case 0x68e95d:c.instructions+=7;goto B68e95d;
case 0x68e961:c.instructions+=6;goto B68e961;
case 0x68e965:c.instructions+=5;goto B68e965;
case 0x68e968:c.instructions+=4;goto B68e968;
case 0x68e96c:c.instructions+=3;goto B68e96c;
case 0x68e96f:c.instructions+=2;goto B68e96f;
case 0x68e971:c.instructions+=1;goto B68e971;
case 0x68e974:goto L68e974;
case 0x68e97c:c.instructions+=23;goto B68e97c;
case 0x68e97f:c.instructions+=22;goto B68e97f;
case 0x68e983:c.instructions+=21;goto B68e983;
case 0x68e987:c.instructions+=20;goto B68e987;
case 0x68e98a:c.instructions+=19;goto B68e98a;
case 0x68e98d:c.instructions+=18;goto B68e98d;
case 0x68e991:c.instructions+=17;goto B68e991;
case 0x68e994:c.instructions+=16;goto B68e994;
case 0x68e998:c.instructions+=15;goto B68e998;
case 0x68e99b:c.instructions+=14;goto B68e99b;
case 0x68e99f:c.instructions+=13;goto B68e99f;
case 0x68e9a3:c.instructions+=12;goto B68e9a3;
case 0x68e9a7:c.instructions+=11;goto B68e9a7;
case 0x68e9ab:c.instructions+=10;goto B68e9ab;
case 0x68e9af:c.instructions+=9;goto B68e9af;
case 0x68e9b7:c.instructions+=8;goto B68e9b7;
case 0x68e9bb:c.instructions+=7;goto B68e9bb;
case 0x68e9bf:c.instructions+=6;goto B68e9bf;
case 0x68e9c3:c.instructions+=5;goto B68e9c3;
case 0x68e9c6:c.instructions+=4;goto B68e9c6;
case 0x68e9c9:c.instructions+=3;goto B68e9c9;
case 0x68e9cd:c.instructions+=2;goto B68e9cd;
case 0x68e9cf:c.instructions+=1;goto B68e9cf;
case 0x68e9d2:goto L68e9d2;
case 0x68e9d6:c.instructions+=29;goto B68e9d6;
case 0x68e9d9:c.instructions+=28;goto B68e9d9;
case 0x68e9dc:c.instructions+=27;goto B68e9dc;
case 0x68e9e0:c.instructions+=26;goto B68e9e0;
case 0x68e9e3:c.instructions+=25;goto B68e9e3;
case 0x68e9e6:c.instructions+=24;goto B68e9e6;
case 0x68e9e9:c.instructions+=23;goto B68e9e9;
case 0x68e9ed:c.instructions+=22;goto B68e9ed;
case 0x68e9f1:c.instructions+=21;goto B68e9f1;
case 0x68e9f5:c.instructions+=20;goto B68e9f5;
case 0x68e9f9:c.instructions+=19;goto B68e9f9;
case 0x68e9fd:c.instructions+=18;goto B68e9fd;
case 0x68ea01:c.instructions+=17;goto B68ea01;
case 0x68ea05:c.instructions+=16;goto B68ea05;
case 0x68ea09:c.instructions+=15;goto B68ea09;
case 0x68ea0d:c.instructions+=14;goto B68ea0d;
case 0x68ea11:c.instructions+=13;goto B68ea11;
case 0x68ea14:c.instructions+=12;goto B68ea14;
case 0x68ea17:c.instructions+=11;goto B68ea17;
case 0x68ea1a:c.instructions+=10;goto B68ea1a;
case 0x68ea1d:c.instructions+=9;goto B68ea1d;
case 0x68ea20:c.instructions+=8;goto B68ea20;
case 0x68ea24:c.instructions+=7;goto B68ea24;
case 0x68ea28:c.instructions+=6;goto B68ea28;
case 0x68ea2b:c.instructions+=5;goto B68ea2b;
case 0x68ea2e:c.instructions+=4;goto B68ea2e;
case 0x68ea34:c.instructions+=3;goto B68ea34;
case 0x68ea37:c.instructions+=2;goto B68ea37;
case 0x68ea39:c.instructions+=1;goto B68ea39;
case 0x68ea3b:goto L68ea3b;
case 0x68ea43:c.instructions+=25;goto B68ea43;
case 0x68ea47:c.instructions+=24;goto B68ea47;
case 0x68ea4b:c.instructions+=23;goto B68ea4b;
case 0x68ea4f:c.instructions+=22;goto B68ea4f;
case 0x68ea52:c.instructions+=21;goto B68ea52;
case 0x68ea55:c.instructions+=20;goto B68ea55;
case 0x68ea58:c.instructions+=19;goto B68ea58;
case 0x68ea5b:c.instructions+=18;goto B68ea5b;
case 0x68ea5f:c.instructions+=17;goto B68ea5f;
case 0x68ea62:c.instructions+=16;goto B68ea62;
case 0x68ea66:c.instructions+=15;goto B68ea66;
case 0x68ea6a:c.instructions+=14;goto B68ea6a;
case 0x68ea6d:c.instructions+=13;goto B68ea6d;
case 0x68ea71:c.instructions+=12;goto B68ea71;
case 0x68ea75:c.instructions+=11;goto B68ea75;
case 0x68ea79:c.instructions+=10;goto B68ea79;
case 0x68ea81:c.instructions+=9;goto B68ea81;
case 0x68ea85:c.instructions+=8;goto B68ea85;
case 0x68ea89:c.instructions+=7;goto B68ea89;
case 0x68ea8d:c.instructions+=6;goto B68ea8d;
case 0x68ea91:c.instructions+=5;goto B68ea91;
case 0x68ea94:c.instructions+=4;goto B68ea94;
case 0x68ea97:c.instructions+=3;goto B68ea97;
case 0x68ea9b:c.instructions+=2;goto B68ea9b;
case 0x68ea9d:c.instructions+=1;goto B68ea9d;
case 0x68eaa0:goto L68eaa0;
case 0x68eaa5:c.instructions+=2;goto B68eaa5;
case 0x68eaaa:c.instructions+=1;goto B68eaaa;
case 0x68eaac:goto L68eaac;
case 0x68eab4:c.instructions+=25;goto B68eab4;
case 0x68eab7:c.instructions+=24;goto B68eab7;
case 0x68eabb:c.instructions+=23;goto B68eabb;
case 0x68eabf:c.instructions+=22;goto B68eabf;
case 0x68eac2:c.instructions+=21;goto B68eac2;
case 0x68eac6:c.instructions+=20;goto B68eac6;
case 0x68eac9:c.instructions+=19;goto B68eac9;
case 0x68eacd:c.instructions+=18;goto B68eacd;
case 0x68ead1:c.instructions+=17;goto B68ead1;
case 0x68ead5:c.instructions+=16;goto B68ead5;
case 0x68ead9:c.instructions+=15;goto B68ead9;
case 0x68eadc:c.instructions+=14;goto B68eadc;
case 0x68eae0:c.instructions+=13;goto B68eae0;
case 0x68eae3:c.instructions+=12;goto B68eae3;
case 0x68eaeb:c.instructions+=11;goto B68eaeb;
case 0x68eaf2:c.instructions+=10;goto B68eaf2;
case 0x68eaf6:c.instructions+=9;goto B68eaf6;
case 0x68eafa:c.instructions+=8;goto B68eafa;
case 0x68eafe:c.instructions+=7;goto B68eafe;
case 0x68eb02:c.instructions+=6;goto B68eb02;
case 0x68eb06:c.instructions+=5;goto B68eb06;
case 0x68eb09:c.instructions+=4;goto B68eb09;
case 0x68eb0d:c.instructions+=3;goto B68eb0d;
case 0x68eb10:c.instructions+=2;goto B68eb10;
case 0x68eb12:c.instructions+=1;goto B68eb12;
case 0x68eb15:goto L68eb15;
case 0x68eb1b:c.instructions+=2;goto B68eb1b;
case 0x68eb1f:c.instructions+=1;goto B68eb1f;
case 0x68eb21:goto L68eb21;
case 0x68eb29:c.instructions+=25;goto B68eb29;
case 0x68eb2c:c.instructions+=24;goto B68eb2c;
case 0x68eb2f:c.instructions+=23;goto B68eb2f;
case 0x68eb33:c.instructions+=22;goto B68eb33;
case 0x68eb37:c.instructions+=21;goto B68eb37;
case 0x68eb3a:c.instructions+=20;goto B68eb3a;
case 0x68eb3d:c.instructions+=19;goto B68eb3d;
case 0x68eb41:c.instructions+=18;goto B68eb41;
case 0x68eb44:c.instructions+=17;goto B68eb44;
case 0x68eb48:c.instructions+=16;goto B68eb48;
case 0x68eb4b:c.instructions+=15;goto B68eb4b;
case 0x68eb4f:c.instructions+=14;goto B68eb4f;
case 0x68eb53:c.instructions+=13;goto B68eb53;
case 0x68eb57:c.instructions+=12;goto B68eb57;
case 0x68eb5e:c.instructions+=11;goto B68eb5e;
case 0x68eb62:c.instructions+=10;goto B68eb62;
case 0x68eb6a:c.instructions+=9;goto B68eb6a;
case 0x68eb6e:c.instructions+=8;goto B68eb6e;
case 0x68eb72:c.instructions+=7;goto B68eb72;
case 0x68eb76:c.instructions+=6;goto B68eb76;
case 0x68eb7a:c.instructions+=5;goto B68eb7a;
case 0x68eb7d:c.instructions+=4;goto B68eb7d;
case 0x68eb81:c.instructions+=3;goto B68eb81;
case 0x68eb84:c.instructions+=2;goto B68eb84;
case 0x68eb86:c.instructions+=1;goto B68eb86;
case 0x68eb89:goto L68eb89;
case 0x68eb91:c.instructions+=23;goto B68eb91;
case 0x68eb94:c.instructions+=22;goto B68eb94;
case 0x68eb98:c.instructions+=21;goto B68eb98;
case 0x68eb9c:c.instructions+=20;goto B68eb9c;
case 0x68eb9f:c.instructions+=19;goto B68eb9f;
case 0x68eba2:c.instructions+=18;goto B68eba2;
case 0x68eba6:c.instructions+=17;goto B68eba6;
case 0x68eba9:c.instructions+=16;goto B68eba9;
case 0x68ebad:c.instructions+=15;goto B68ebad;
case 0x68ebb0:c.instructions+=14;goto B68ebb0;
case 0x68ebb4:c.instructions+=13;goto B68ebb4;
case 0x68ebb8:c.instructions+=12;goto B68ebb8;
case 0x68ebbc:c.instructions+=11;goto B68ebbc;
case 0x68ebc0:c.instructions+=10;goto B68ebc0;
case 0x68ebc4:c.instructions+=9;goto B68ebc4;
case 0x68ebcc:c.instructions+=8;goto B68ebcc;
case 0x68ebd0:c.instructions+=7;goto B68ebd0;
case 0x68ebd4:c.instructions+=6;goto B68ebd4;
case 0x68ebd8:c.instructions+=5;goto B68ebd8;
case 0x68ebdb:c.instructions+=4;goto B68ebdb;
case 0x68ebde:c.instructions+=3;goto B68ebde;
case 0x68ebe2:c.instructions+=2;goto B68ebe2;
case 0x68ebe4:c.instructions+=1;goto B68ebe4;
case 0x68ebe7:goto L68ebe7;
case 0x68ebe9:c.instructions+=9;goto B68ebe9;
case 0x68ebf0:c.instructions+=8;goto B68ebf0;
case 0x68ebf1:c.instructions+=7;goto B68ebf1;
case 0x68ebf2:c.instructions+=6;goto B68ebf2;
case 0x68ebf5:c.instructions+=5;goto B68ebf5;
case 0x68ebf8:c.instructions+=4;goto B68ebf8;
case 0x68ebfe:c.instructions+=3;goto B68ebfe;
case 0x68ec04:c.instructions+=2;goto B68ec04;
case 0x68ec09:c.instructions+=1;goto B68ec09;
case 0x68ec0e:goto L68ec0e;
case 0x68ec12:c.instructions+=3;goto B68ec12;
case 0x68ec17:c.instructions+=2;goto B68ec17;
case 0x68ec1a:c.instructions+=1;goto B68ec1a;
case 0x68ec1f:goto L68ec1f;
case 0x68ec24:c.instructions+=2;goto B68ec24;
case 0x68ec29:c.instructions+=1;goto B68ec29;
case 0x68ec2e:goto L68ec2e;
case 0x68ec32:c.instructions+=36;goto B68ec32;
case 0x68ec37:c.instructions+=35;goto B68ec37;
case 0x68ec3b:c.instructions+=34;goto B68ec3b;
case 0x68ec42:c.instructions+=33;goto B68ec42;
case 0x68ec45:c.instructions+=32;goto B68ec45;
case 0x68ec48:c.instructions+=31;goto B68ec48;
case 0x68ec4b:c.instructions+=30;goto B68ec4b;
case 0x68ec4e:c.instructions+=29;goto B68ec4e;
case 0x68ec51:c.instructions+=28;goto B68ec51;
case 0x68ec54:c.instructions+=27;goto B68ec54;
case 0x68ec57:c.instructions+=26;goto B68ec57;
case 0x68ec5a:c.instructions+=25;goto B68ec5a;
case 0x68ec5e:c.instructions+=24;goto B68ec5e;
case 0x68ec61:c.instructions+=23;goto B68ec61;
case 0x68ec64:c.instructions+=22;goto B68ec64;
case 0x68ec67:c.instructions+=21;goto B68ec67;
case 0x68ec6a:c.instructions+=20;goto B68ec6a;
case 0x68ec6e:c.instructions+=19;goto B68ec6e;
case 0x68ec72:c.instructions+=18;goto B68ec72;
case 0x68ec76:c.instructions+=17;goto B68ec76;
case 0x68ec7a:c.instructions+=16;goto B68ec7a;
case 0x68ec7d:c.instructions+=15;goto B68ec7d;
case 0x68ec80:c.instructions+=14;goto B68ec80;
case 0x68ec83:c.instructions+=13;goto B68ec83;
case 0x68ec87:c.instructions+=12;goto B68ec87;
case 0x68ec8b:c.instructions+=11;goto B68ec8b;
case 0x68ec8f:c.instructions+=10;goto B68ec8f;
case 0x68ec93:c.instructions+=9;goto B68ec93;
case 0x68ec97:c.instructions+=8;goto B68ec97;
case 0x68ec9b:c.instructions+=7;goto B68ec9b;
case 0x68ec9e:c.instructions+=6;goto B68ec9e;
case 0x68eca2:c.instructions+=5;goto B68eca2;
case 0x68eca4:c.instructions+=4;goto B68eca4;
case 0x68eca7:c.instructions+=3;goto B68eca7;
case 0x68eca8:c.instructions+=2;goto B68eca8;
case 0x68eca9:c.instructions+=1;goto B68eca9;
case 0x68ecac:goto L68ecac;
case 0x68ecaf:c.instructions+=10;goto B68ecaf;
case 0x68ecb3:c.instructions+=9;goto B68ecb3;
case 0x68ecb7:c.instructions+=8;goto B68ecb7;
case 0x68ecbb:c.instructions+=7;goto B68ecbb;
case 0x68ecbd:c.instructions+=6;goto B68ecbd;
case 0x68ecc0:c.instructions+=5;goto B68ecc0;
case 0x68ecc2:c.instructions+=4;goto B68ecc2;
case 0x68ecc4:c.instructions+=3;goto B68ecc4;
case 0x68ecc7:c.instructions+=2;goto B68ecc7;
case 0x68ecc8:c.instructions+=1;goto B68ecc8;
case 0x68eccd:goto L68eccd;
case 0x68ecd1:c.instructions+=2;goto B68ecd1;
case 0x68ecd9:c.instructions+=1;goto B68ecd9;
case 0x68ecde:goto L68ecde;
case 0x68ece1:c.instructions+=16;goto B68ece1;
case 0x68ece5:c.instructions+=15;goto B68ece5;
case 0x68ecea:c.instructions+=14;goto B68ecea;
case 0x68eced:c.instructions+=13;goto B68eced;
case 0x68ecf0:c.instructions+=12;goto B68ecf0;
case 0x68ecf4:c.instructions+=11;goto B68ecf4;
case 0x68ecf8:c.instructions+=10;goto B68ecf8;
case 0x68ecfb:c.instructions+=9;goto B68ecfb;
case 0x68ecfe:c.instructions+=8;goto B68ecfe;
case 0x68ed02:c.instructions+=7;goto B68ed02;
case 0x68ed04:c.instructions+=6;goto B68ed04;
case 0x68ed06:c.instructions+=5;goto B68ed06;
case 0x68ed0a:c.instructions+=4;goto B68ed0a;
case 0x68ed0e:c.instructions+=3;goto B68ed0e;
case 0x68ed12:c.instructions+=2;goto B68ed12;
case 0x68ed15:c.instructions+=1;goto B68ed15;
case 0x68ed18:goto L68ed18;
case 0x68ed1a:c.instructions+=26;goto B68ed1a;
case 0x68ed1d:c.instructions+=25;goto B68ed1d;
case 0x68ed21:c.instructions+=24;goto B68ed21;
case 0x68ed25:c.instructions+=23;goto B68ed25;
case 0x68ed29:c.instructions+=22;goto B68ed29;
case 0x68ed2d:c.instructions+=21;goto B68ed2d;
case 0x68ed34:c.instructions+=20;goto B68ed34;
case 0x68ed37:c.instructions+=19;goto B68ed37;
case 0x68ed3b:c.instructions+=18;goto B68ed3b;
case 0x68ed3f:c.instructions+=17;goto B68ed3f;
case 0x68ed44:c.instructions+=16;goto B68ed44;
case 0x68ed48:c.instructions+=15;goto B68ed48;
case 0x68ed4b:c.instructions+=14;goto B68ed4b;
case 0x68ed50:c.instructions+=13;goto B68ed50;
case 0x68ed54:c.instructions+=12;goto B68ed54;
case 0x68ed58:c.instructions+=11;goto B68ed58;
case 0x68ed5c:c.instructions+=10;goto B68ed5c;
case 0x68ed63:c.instructions+=9;goto B68ed63;
case 0x68ed6a:c.instructions+=8;goto B68ed6a;
case 0x68ed6d:c.instructions+=7;goto B68ed6d;
case 0x68ed71:c.instructions+=6;goto B68ed71;
case 0x68ed74:c.instructions+=5;goto B68ed74;
case 0x68ed77:c.instructions+=4;goto B68ed77;
case 0x68ed7b:c.instructions+=3;goto B68ed7b;
case 0x68ed83:c.instructions+=2;goto B68ed83;
case 0x68ed85:c.instructions+=1;goto B68ed85;
case 0x68ed87:goto L68ed87;
case 0x68ed8b:c.instructions+=14;goto B68ed8b;
case 0x68ed8e:c.instructions+=13;goto B68ed8e;
case 0x68ed93:c.instructions+=12;goto B68ed93;
case 0x68ed97:c.instructions+=11;goto B68ed97;
case 0x68ed9b:c.instructions+=10;goto B68ed9b;
case 0x68ed9f:c.instructions+=9;goto B68ed9f;
case 0x68eda3:c.instructions+=8;goto B68eda3;
case 0x68eda6:c.instructions+=7;goto B68eda6;
case 0x68edaa:c.instructions+=6;goto B68edaa;
case 0x68edae:c.instructions+=5;goto B68edae;
case 0x68edb2:c.instructions+=4;goto B68edb2;
case 0x68edb7:c.instructions+=3;goto B68edb7;
case 0x68edba:c.instructions+=2;goto B68edba;
case 0x68edbd:c.instructions+=1;goto B68edbd;
case 0x68edc2:goto L68edc2;
case 0x68edc7:c.instructions+=3;goto B68edc7;
case 0x68edcc:c.instructions+=2;goto B68edcc;
case 0x68edd0:c.instructions+=1;goto B68edd0;
case 0x68edd5:goto L68edd5;
case 0x68edda:c.instructions+=4;goto B68edda;
case 0x68edde:c.instructions+=3;goto B68edde;
case 0x68ede3:c.instructions+=2;goto B68ede3;
case 0x68ede7:c.instructions+=1;goto B68ede7;
case 0x68edec:goto L68edec;
case 0x68edf1:c.instructions+=4;goto B68edf1;
case 0x68edf6:c.instructions+=3;goto B68edf6;
case 0x68edfb:c.instructions+=2;goto B68edfb;
case 0x68edff:c.instructions+=1;goto B68edff;
case 0x68ee03:goto L68ee03;
case 0x68ee07:c.instructions+=20;goto B68ee07;
case 0x68ee0b:c.instructions+=19;goto B68ee0b;
case 0x68ee0f:c.instructions+=18;goto B68ee0f;
case 0x68ee12:c.instructions+=17;goto B68ee12;
case 0x68ee15:c.instructions+=16;goto B68ee15;
case 0x68ee18:c.instructions+=15;goto B68ee18;
case 0x68ee1b:c.instructions+=14;goto B68ee1b;
case 0x68ee1e:c.instructions+=13;goto B68ee1e;
case 0x68ee22:c.instructions+=12;goto B68ee22;
case 0x68ee26:c.instructions+=11;goto B68ee26;
case 0x68ee2b:c.instructions+=10;goto B68ee2b;
case 0x68ee30:c.instructions+=9;goto B68ee30;
case 0x68ee34:c.instructions+=8;goto B68ee34;
case 0x68ee38:c.instructions+=7;goto B68ee38;
case 0x68ee3b:c.instructions+=6;goto B68ee3b;
case 0x68ee3f:c.instructions+=5;goto B68ee3f;
case 0x68ee41:c.instructions+=4;goto B68ee41;
case 0x68ee45:c.instructions+=3;goto B68ee45;
case 0x68ee49:c.instructions+=2;goto B68ee49;
case 0x68ee4c:c.instructions+=1;goto B68ee4c;
case 0x68ee4f:goto L68ee4f;
case 0x68ee52:c.instructions+=15;goto B68ee52;
case 0x68ee56:c.instructions+=14;goto B68ee56;
case 0x68ee58:c.instructions+=13;goto B68ee58;
case 0x68ee5b:c.instructions+=12;goto B68ee5b;
case 0x68ee5d:c.instructions+=11;goto B68ee5d;
case 0x68ee5f:c.instructions+=10;goto B68ee5f;
case 0x68ee63:c.instructions+=9;goto B68ee63;
case 0x68ee67:c.instructions+=8;goto B68ee67;
case 0x68ee6b:c.instructions+=7;goto B68ee6b;
case 0x68ee6f:c.instructions+=6;goto B68ee6f;
case 0x68ee72:c.instructions+=5;goto B68ee72;
case 0x68ee76:c.instructions+=4;goto B68ee76;
case 0x68ee79:c.instructions+=3;goto B68ee79;
case 0x68ee7c:c.instructions+=2;goto B68ee7c;
case 0x68ee7d:c.instructions+=1;goto B68ee7d;
case 0x68ee82:goto L68ee82;
case 0x68ee86:c.instructions+=5;goto B68ee86;
case 0x68ee89:c.instructions+=4;goto B68ee89;
case 0x68ee8c:c.instructions+=3;goto B68ee8c;
case 0x68ee8f:c.instructions+=2;goto B68ee8f;
case 0x68ee90:c.instructions+=1;goto B68ee90;
case 0x68ee95:goto L68ee95;
case 0x68ee99:c.instructions+=13;goto B68ee99;
case 0x68ee9d:c.instructions+=12;goto B68ee9d;
case 0x68eea1:c.instructions+=11;goto B68eea1;
case 0x68eea4:c.instructions+=10;goto B68eea4;
case 0x68eea8:c.instructions+=9;goto B68eea8;
case 0x68eeac:c.instructions+=8;goto B68eeac;
case 0x68eeb0:c.instructions+=7;goto B68eeb0;
case 0x68eeb4:c.instructions+=6;goto B68eeb4;
case 0x68eeb7:c.instructions+=5;goto B68eeb7;
case 0x68eebb:c.instructions+=4;goto B68eebb;
case 0x68eebe:c.instructions+=3;goto B68eebe;
case 0x68eec3:c.instructions+=2;goto B68eec3;
case 0x68eec6:c.instructions+=1;goto B68eec6;
case 0x68eecb:goto L68eecb;
case 0x68eece:c.instructions+=5;goto B68eece;
case 0x68eed0:c.instructions+=4;goto B68eed0;
case 0x68eed2:c.instructions+=3;goto B68eed2;
case 0x68eed6:c.instructions+=2;goto B68eed6;
case 0x68eed9:c.instructions+=1;goto B68eed9;
case 0x68eedc:goto L68eedc;
case 0x68eedf:c.instructions+=9;goto B68eedf;
case 0x68eee3:c.instructions+=8;goto B68eee3;
case 0x68eee7:c.instructions+=7;goto B68eee7;
case 0x68eeeb:c.instructions+=6;goto B68eeeb;
case 0x68eeef:c.instructions+=5;goto B68eeef;
case 0x68eef3:c.instructions+=4;goto B68eef3;
case 0x68eef7:c.instructions+=3;goto B68eef7;
case 0x68eefb:c.instructions+=2;goto B68eefb;
case 0x68eefe:c.instructions+=1;goto B68eefe;
case 0x68ef03:goto L68ef03;
case 0x68ef06:c.instructions+=9;goto B68ef06;
case 0x68ef0a:c.instructions+=8;goto B68ef0a;
case 0x68ef0e:c.instructions+=7;goto B68ef0e;
case 0x68ef12:c.instructions+=6;goto B68ef12;
case 0x68ef16:c.instructions+=5;goto B68ef16;
case 0x68ef1a:c.instructions+=4;goto B68ef1a;
case 0x68ef1e:c.instructions+=3;goto B68ef1e;
case 0x68ef22:c.instructions+=2;goto B68ef22;
case 0x68ef25:c.instructions+=1;goto B68ef25;
case 0x68ef2a:goto L68ef2a;
case 0x68ef2d:c.instructions+=13;goto B68ef2d;
case 0x68ef32:c.instructions+=12;goto B68ef32;
case 0x68ef36:c.instructions+=11;goto B68ef36;
case 0x68ef39:c.instructions+=10;goto B68ef39;
case 0x68ef3d:c.instructions+=9;goto B68ef3d;
case 0x68ef41:c.instructions+=8;goto B68ef41;
case 0x68ef45:c.instructions+=7;goto B68ef45;
case 0x68ef49:c.instructions+=6;goto B68ef49;
case 0x68ef4c:c.instructions+=5;goto B68ef4c;
case 0x68ef50:c.instructions+=4;goto B68ef50;
case 0x68ef54:c.instructions+=3;goto B68ef54;
case 0x68ef5c:c.instructions+=2;goto B68ef5c;
case 0x68ef61:c.instructions+=1;goto B68ef61;
case 0x68ef66:goto L68ef66;
case 0x68ef69:c.instructions+=2;goto B68ef69;
case 0x68ef6b:c.instructions+=1;goto B68ef6b;
case 0x68ef6e:goto L68ef6e;
case 0x68ef72:c.instructions+=24;goto B68ef72;
case 0x68ef75:c.instructions+=23;goto B68ef75;
case 0x68ef78:c.instructions+=22;goto B68ef78;
case 0x68ef7c:c.instructions+=21;goto B68ef7c;
case 0x68ef7f:c.instructions+=20;goto B68ef7f;
case 0x68ef83:c.instructions+=19;goto B68ef83;
case 0x68ef87:c.instructions+=18;goto B68ef87;
case 0x68ef8b:c.instructions+=17;goto B68ef8b;
case 0x68ef8f:c.instructions+=16;goto B68ef8f;
case 0x68ef93:c.instructions+=15;goto B68ef93;
case 0x68ef96:c.instructions+=14;goto B68ef96;
case 0x68ef9a:c.instructions+=13;goto B68ef9a;
case 0x68efa2:c.instructions+=12;goto B68efa2;
case 0x68efa9:c.instructions+=11;goto B68efa9;
case 0x68efb0:c.instructions+=10;goto B68efb0;
case 0x68efb4:c.instructions+=9;goto B68efb4;
case 0x68efb7:c.instructions+=8;goto B68efb7;
case 0x68efba:c.instructions+=7;goto B68efba;
case 0x68efbe:c.instructions+=6;goto B68efbe;
case 0x68efc2:c.instructions+=5;goto B68efc2;
case 0x68efc6:c.instructions+=4;goto B68efc6;
case 0x68efc9:c.instructions+=3;goto B68efc9;
case 0x68efcd:c.instructions+=2;goto B68efcd;
case 0x68efcf:c.instructions+=1;goto B68efcf;
case 0x68efd2:goto L68efd2;
case 0x68efd5:c.instructions+=12;goto B68efd5;
case 0x68efd7:c.instructions+=11;goto B68efd7;
case 0x68efdb:c.instructions+=10;goto B68efdb;
case 0x68efdf:c.instructions+=9;goto B68efdf;
case 0x68efe2:c.instructions+=8;goto B68efe2;
case 0x68efe6:c.instructions+=7;goto B68efe6;
case 0x68efe9:c.instructions+=6;goto B68efe9;
case 0x68efec:c.instructions+=5;goto B68efec;
case 0x68efef:c.instructions+=4;goto B68efef;
case 0x68eff7:c.instructions+=3;goto B68eff7;
case 0x68effa:c.instructions+=2;goto B68effa;
case 0x68effc:c.instructions+=1;goto B68effc;
case 0x68effe:goto L68effe;
default:missing_instruction(c.pc);}
B68e005:L68e005:{c.instructions+=2;NFSU2_TR(0x68e005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e00b:{NFSU2_TR(0x68e00b);
TAIL_STATIC(0x68df79u,68d);
}
B68e010:L68e010:{c.instructions+=7;NFSU2_TR(0x68e010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e016:{NFSU2_TR(0x68e016);
__builtin_memmove((R+16),(R+20),4);
}
B68e018:{NFSU2_TR(0x68e018);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68e01f:{NFSU2_TR(0x68e01f);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e026:{NFSU2_TR(0x68e026);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e02d:{NFSU2_TR(0x68e02d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e033:{NFSU2_TR(0x68e033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e040:L68e040:{c.instructions+=10;NFSU2_TR(0x68e040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68e043:{NFSU2_TR(0x68e043);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e047:{NFSU2_TR(0x68e047);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e04b:{NFSU2_TR(0x68e04b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68e04e:{NFSU2_TR(0x68e04e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68e052:{NFSU2_TR(0x68e052);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e056:{NFSU2_TR(0x68e056);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68e05a:{NFSU2_TR(0x68e05a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e05e:{NFSU2_TR(0x68e05e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e061:{NFSU2_TR(0x68e061);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L68e0b4;}}
}
B68e063:L68e063:{c.instructions+=6;NFSU2_TR(0x68e063);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e067:{NFSU2_TR(0x68e067);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e06b:{NFSU2_TR(0x68e06b);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4864),(U+16),4);
__builtin_memmove((R+4868),(U+20),4);
__builtin_memmove((R+4872),(U+24),4);
__builtin_memmove((R+4876),(U+28),4);
}
B68e06e:{NFSU2_TR(0x68e06e);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B68e072:{NFSU2_TR(0x68e072);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B68e076:{NFSU2_TR(0x68e076);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+5056),(U+20),4);
__builtin_memmove((R+5060),(U+24),4);
__builtin_memmove((R+5064),(U+28),4);
__builtin_memmove((R+5068),(U+32),4);
}
B68e07a:L68e07a:{c.instructions+=17;NFSU2_TR(0x68e07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68e07e:{NFSU2_TR(0x68e07e);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e082:{NFSU2_TR(0x68e082);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68e087:{NFSU2_TR(0x68e087);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e08b:{NFSU2_TR(0x68e08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e090:{NFSU2_TR(0x68e090);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e094:{NFSU2_TR(0x68e094);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B68e097:{NFSU2_TR(0x68e097);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4876))));
}
B68e09a:{NFSU2_TR(0x68e09a);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B68e09d:{NFSU2_TR(0x68e09d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4992))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4996))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5000))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5004))));
}
B68e0a0:{NFSU2_TR(0x68e0a0);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68e0a3:{NFSU2_TR(0x68e0a3);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+5068))));
}
B68e0a6:{NFSU2_TR(0x68e0a6);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68e0a9:{NFSU2_TR(0x68e0a9);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B68e0ac:{NFSU2_TR(0x68e0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68e0af:{NFSU2_TR(0x68e0af);
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B68e0b2:{NFSU2_TR(0x68e0b2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e07au);}goto L68e07a;}}
}
B68e0b4:L68e0b4:{c.instructions+=6;NFSU2_TR(0x68e0b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e0b8:{NFSU2_TR(0x68e0b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+12),(U+0),4);
}
B68e0bb:{NFSU2_TR(0x68e0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e0bf:{NFSU2_TR(0x68e0bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e0c3:{NFSU2_TR(0x68e0c3);
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
B68e0c6:{NFSU2_TR(0x68e0c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e0e0:L68e0e0:{c.instructions+=11;NFSU2_TR(0x68e0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B68e0e6:{NFSU2_TR(0x68e0e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e0ed:{NFSU2_TR(0x68e0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e0f4:{NFSU2_TR(0x68e0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e0fb:{NFSU2_TR(0x68e0fb);
__builtin_memmove((R+20),(R+16),4);
}
B68e0fd:{NFSU2_TR(0x68e0fd);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68e100:{NFSU2_TR(0x68e100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68e106:{NFSU2_TR(0x68e106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e10c:{NFSU2_TR(0x68e10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e112:{NFSU2_TR(0x68e112);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68e115:{NFSU2_TR(0x68e115);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68e159;}}
}
B68e117:L68e117:{c.instructions+=2;NFSU2_TR(0x68e117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e11d:{NFSU2_TR(0x68e11d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e120:L68e120:{c.instructions+=1;NFSU2_TR(0x68e120);
if(r1(R+518)){{goto L68e3d7;}}
}
B68e126:L68e126:{c.instructions+=5;NFSU2_TR(0x68e126);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e129:{NFSU2_TR(0x68e129);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68e12c:{NFSU2_TR(0x68e12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e130:{NFSU2_TR(0x68e130);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e134:{NFSU2_TR(0x68e134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68e139ull));
TAIL_STATIC(0x693f64u,693);
}
B68e139:L68e139:{c.instructions+=6;NFSU2_TR(0x68e139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B68e13f:{NFSU2_TR(0x68e13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e145:{NFSU2_TR(0x68e145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68e14b:{NFSU2_TR(0x68e14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e151:{NFSU2_TR(0x68e151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e157:{NFSU2_TR(0x68e157);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e120u);}goto L68e120;}
}
B68e159:L68e159:{c.instructions+=51;NFSU2_TR(0x68e159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68e15d:{NFSU2_TR(0x68e15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68e162:{NFSU2_TR(0x68e162);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e167:{NFSU2_TR(0x68e167);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68e16c:{NFSU2_TR(0x68e16c);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e170:{NFSU2_TR(0x68e170);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e174:{NFSU2_TR(0x68e174);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e178:{NFSU2_TR(0x68e178);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e17c:{NFSU2_TR(0x68e17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68e181:{NFSU2_TR(0x68e181);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68e186:{NFSU2_TR(0x68e186);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68e18b:{NFSU2_TR(0x68e18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68e190:{NFSU2_TR(0x68e190);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e194:{NFSU2_TR(0x68e194);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e198:{NFSU2_TR(0x68e198);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e19c:{NFSU2_TR(0x68e19c);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e1a0:{NFSU2_TR(0x68e1a0);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+16))),(U+0),16);
}
B68e1a4:{NFSU2_TR(0x68e1a4);
u8 U[20];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1a9:{NFSU2_TR(0x68e1a9);
u8 U[20];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1ae:{NFSU2_TR(0x68e1ae);
u8 U[20];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1b3:{NFSU2_TR(0x68e1b3);
u8 U[20];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1b8:{NFSU2_TR(0x68e1b8);
u8 U[20];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1bd:{NFSU2_TR(0x68e1bd);
u8 U[20];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1c2:{NFSU2_TR(0x68e1c2);
u8 U[20];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e1c7:{NFSU2_TR(0x68e1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68e1cc:{NFSU2_TR(0x68e1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68e1d1:{NFSU2_TR(0x68e1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e1d6:{NFSU2_TR(0x68e1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68e1db:{NFSU2_TR(0x68e1db);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e1df:{NFSU2_TR(0x68e1df);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e1e3:{NFSU2_TR(0x68e1e3);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e1e7:{NFSU2_TR(0x68e1e7);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e1eb:{NFSU2_TR(0x68e1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68e1f0:{NFSU2_TR(0x68e1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68e1f5:{NFSU2_TR(0x68e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68e1fa:{NFSU2_TR(0x68e1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68e1ff:{NFSU2_TR(0x68e1ff);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e203:{NFSU2_TR(0x68e203);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e207:{NFSU2_TR(0x68e207);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e20b:{NFSU2_TR(0x68e20b);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e20f:{NFSU2_TR(0x68e20f);
u8 U[20];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e217:{NFSU2_TR(0x68e217);
u8 U[20];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e21f:{NFSU2_TR(0x68e21f);
u8 U[20];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e227:{NFSU2_TR(0x68e227);
u8 U[20];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e22f:{NFSU2_TR(0x68e22f);
u8 U[20];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e237:{NFSU2_TR(0x68e237);
u8 U[20];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e23f:{NFSU2_TR(0x68e23f);
u8 U[20];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e247:{NFSU2_TR(0x68e247);
u8 U[20];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e24f:{NFSU2_TR(0x68e24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e255:{NFSU2_TR(0x68e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e25b:{NFSU2_TR(0x68e25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e261:L68e261:{c.instructions+=2;NFSU2_TR(0x68e261);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68e264:{NFSU2_TR(0x68e264);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68e3af;}}
}
B68e26a:L68e26a:{c.instructions+=79;NFSU2_TR(0x68e26a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68e26d:{NFSU2_TR(0x68e26d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4672),(U+8),8);
}
B68e271:{NFSU2_TR(0x68e271);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e276:{NFSU2_TR(0x68e276);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4800),(U+12),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68e27c:{NFSU2_TR(0x68e27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68e27f:{NFSU2_TR(0x68e27f);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68e282:{NFSU2_TR(0x68e282);
__builtin_memmove((R+4744),(R+4740),4);
__builtin_memmove((R+4748),(R+4804),4);
__builtin_memmove((R+4740),(R+4800),4);
}
B68e285:{NFSU2_TR(0x68e285);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4864),(U+0),8);
}
B68e288:{NFSU2_TR(0x68e288);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4928),(U+8),8);
}
B68e28c:{NFSU2_TR(0x68e28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68e291:{NFSU2_TR(0x68e291);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+5056),(U+12),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68e297:{NFSU2_TR(0x68e297);
__builtin_memmove((R+4872),(R+4868),4);
__builtin_memmove((R+4876),(R+4932),4);
__builtin_memmove((R+4868),(R+4928),4);
}
B68e29a:{NFSU2_TR(0x68e29a);
__builtin_memmove((R+5000),(R+4996),4);
__builtin_memmove((R+5004),(R+5060),4);
__builtin_memmove((R+4996),(R+5056),4);
}
B68e29d:{NFSU2_TR(0x68e29d);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68e2a0:{NFSU2_TR(0x68e2a0);
__builtin_memmove((R+4744),(R+4992),8);
}
B68e2a3:{NFSU2_TR(0x68e2a3);
__builtin_memmove((R+4616),(R+4864),8);
}
B68e2a6:{NFSU2_TR(0x68e2a6);
__builtin_memmove((R+4864),(R+4680),8);
}
B68e2a9:{NFSU2_TR(0x68e2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68e2ac:{NFSU2_TR(0x68e2ac);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68e2af:{NFSU2_TR(0x68e2af);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68e2b2:{NFSU2_TR(0x68e2b2);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68e2b5:{NFSU2_TR(0x68e2b5);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+16))),16);
__builtin_memmove((U+16),(U+0),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+16))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+20))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+24))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+28))));
}
B68e2b9:{NFSU2_TR(0x68e2b9);
u8 U[36];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68e2be:{NFSU2_TR(0x68e2be);
u8 U[36];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68e2c3:{NFSU2_TR(0x68e2c3);
u8 U[36];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68e2c8:{NFSU2_TR(0x68e2c8);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B68e2cb:{NFSU2_TR(0x68e2cb);
__builtin_memmove((R+5056),(R+4864),4);
__builtin_memmove((R+5060),(R+4868),4);
__builtin_memmove((R+5064),(R+4872),4);
__builtin_memmove((R+5068),(R+4876),4);
}
B68e2ce:{NFSU2_TR(0x68e2ce);
u8 U[36];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68e2d3:{NFSU2_TR(0x68e2d3);
u8 U[36];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68e2d8:{NFSU2_TR(0x68e2d8);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4876))));
}
B68e2db:{NFSU2_TR(0x68e2db);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4992))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4996))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+5000))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+5004))));
}
B68e2de:{NFSU2_TR(0x68e2de);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68e2e1:{NFSU2_TR(0x68e2e1);
u8 U[36];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68e2e6:{NFSU2_TR(0x68e2e6);
u8 U[36];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68e2eb:{NFSU2_TR(0x68e2eb);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4992))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4996))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+5000))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+5004))));
}
B68e2ee:{NFSU2_TR(0x68e2ee);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5068))));
}
B68e2f1:{NFSU2_TR(0x68e2f1);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68e2f4:{NFSU2_TR(0x68e2f4);
__builtin_memmove((R+4992),(R+4736),4);
__builtin_memmove((R+4996),(R+4740),4);
__builtin_memmove((R+5000),(R+4744),4);
__builtin_memmove((R+5004),(R+4748),4);
}
B68e2f7:{NFSU2_TR(0x68e2f7);
__builtin_memmove((R+5056),(R+4736),4);
__builtin_memmove((R+5060),(R+4740),4);
__builtin_memmove((R+5064),(R+4744),4);
__builtin_memmove((R+5068),(R+4748),4);
}
B68e2fa:{NFSU2_TR(0x68e2fa);
u8 U[36];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68e302:{NFSU2_TR(0x68e302);
u8 U[36];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68e30a:{NFSU2_TR(0x68e30a);
u8 U[36];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68e312:{NFSU2_TR(0x68e312);
u8 U[36];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68e31a:{NFSU2_TR(0x68e31a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68e31d:{NFSU2_TR(0x68e31d);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4876))));
}
B68e320:{NFSU2_TR(0x68e320);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4992))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4996))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+5000))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+5004))));
}
B68e323:{NFSU2_TR(0x68e323);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5068))));
}
B68e326:{NFSU2_TR(0x68e326);
u8 U[16];
__builtin_memmove((U+0),gp(0x80aec0),16);
__builtin_memmove((R+4736),(U+0),4);
__builtin_memmove((R+4740),(U+4),4);
__builtin_memmove((R+4744),(U+8),4);
__builtin_memmove((R+4748),(U+12),4);
}
B68e32d:{NFSU2_TR(0x68e32d);
u8 U[36];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(U+32))));
}
B68e335:{NFSU2_TR(0x68e335);
u8 U[36];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+32))));
}
B68e33d:{NFSU2_TR(0x68e33d);
u8 U[36];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68e345:{NFSU2_TR(0x68e345);
u8 U[36];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68e34d:{NFSU2_TR(0x68e34d);
{wv<16>((R+4864),uo::rcpps<16>(rv<16>((R+4864)),rv<16>((R+4928))));}
}
B68e350:{NFSU2_TR(0x68e350);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68e353:{NFSU2_TR(0x68e353);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4940))));
}
B68e356:{NFSU2_TR(0x68e356);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4736))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4740))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4744))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4748))));
}
B68e359:{NFSU2_TR(0x68e359);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4876))));
}
B68e35c:{NFSU2_TR(0x68e35c);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B68e35f:{NFSU2_TR(0x68e35f);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4864))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4868))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4872))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4876))));
}
B68e362:{NFSU2_TR(0x68e362);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68e365:{NFSU2_TR(0x68e365);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68e368:{NFSU2_TR(0x68e368);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68e36b:{NFSU2_TR(0x68e36b);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e36e:{NFSU2_TR(0x68e36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e373:{NFSU2_TR(0x68e373);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e377:{NFSU2_TR(0x68e377);
__builtin_memmove((R+4608),(R+4616),8);
}
B68e37a:{NFSU2_TR(0x68e37a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68e37e:{NFSU2_TR(0x68e37e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68e384:{NFSU2_TR(0x68e384);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e388:{NFSU2_TR(0x68e388);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68e38b:{NFSU2_TR(0x68e38b);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e38e:{NFSU2_TR(0x68e38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e393:{NFSU2_TR(0x68e393);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e397:{NFSU2_TR(0x68e397);
__builtin_memmove((R+4736),(R+4744),8);
}
B68e39a:{NFSU2_TR(0x68e39a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68e39e:{NFSU2_TR(0x68e39e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68e3a4:{NFSU2_TR(0x68e3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68e3a7:{NFSU2_TR(0x68e3a7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B68e3aa:{NFSU2_TR(0x68e3aa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e261u);}goto L68e261;}
}
B68e3af:L68e3af:{c.instructions+=2;NFSU2_TR(0x68e3af);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e3b2:{NFSU2_TR(0x68e3b2);
if(r1(R+518)){{goto L68e3d7;}}
}
B68e3b4:L68e3b4:{c.instructions+=9;NFSU2_TR(0x68e3b4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B68e3b7:{NFSU2_TR(0x68e3b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B68e3ba:{NFSU2_TR(0x68e3ba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B68e3bd:{NFSU2_TR(0x68e3bd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B68e3bf:{NFSU2_TR(0x68e3bf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B68e3c1:{NFSU2_TR(0x68e3c1);
w4(R+4,u32(0x4ull));
}
B68e3c6:{NFSU2_TR(0x68e3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e3cc:{NFSU2_TR(0x68e3cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e3d2:{NFSU2_TR(0x68e3d2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e261u);}goto L68e261;}
}
B68e3d7:L68e3d7:{c.instructions+=7;NFSU2_TR(0x68e3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e3dd:{NFSU2_TR(0x68e3dd);
__builtin_memmove((R+16),(R+20),4);
}
B68e3df:{NFSU2_TR(0x68e3df);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68e3e6:{NFSU2_TR(0x68e3e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e3ed:{NFSU2_TR(0x68e3ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e3f4:{NFSU2_TR(0x68e3f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e3fa:{NFSU2_TR(0x68e3fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e400:L68e400:{c.instructions+=11;NFSU2_TR(0x68e400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B68e406:{NFSU2_TR(0x68e406);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e40d:{NFSU2_TR(0x68e40d);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e414:{NFSU2_TR(0x68e414);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e41b:{NFSU2_TR(0x68e41b);
__builtin_memmove((R+20),(R+16),4);
}
B68e41d:{NFSU2_TR(0x68e41d);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68e420:{NFSU2_TR(0x68e420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68e426:{NFSU2_TR(0x68e426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e42c:{NFSU2_TR(0x68e42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e432:{NFSU2_TR(0x68e432);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68e435:{NFSU2_TR(0x68e435);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68e479;}}
}
B68e437:L68e437:{c.instructions+=2;NFSU2_TR(0x68e437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e43d:{NFSU2_TR(0x68e43d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e440:L68e440:{c.instructions+=1;NFSU2_TR(0x68e440);
if(r1(R+518)){{goto L68e656;}}
}
B68e446:L68e446:{c.instructions+=5;NFSU2_TR(0x68e446);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e449:{NFSU2_TR(0x68e449);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68e44c:{NFSU2_TR(0x68e44c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e450:{NFSU2_TR(0x68e450);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e454:{NFSU2_TR(0x68e454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68e459ull));
TAIL_STATIC(0x693a17u,693);
}
B68e459:L68e459:{c.instructions+=6;NFSU2_TR(0x68e459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B68e45f:{NFSU2_TR(0x68e45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e465:{NFSU2_TR(0x68e465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68e46b:{NFSU2_TR(0x68e46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e471:{NFSU2_TR(0x68e471);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e477:{NFSU2_TR(0x68e477);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e440u);}goto L68e440;}
}
B68e479:L68e479:{c.instructions+=39;NFSU2_TR(0x68e479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68e47d:{NFSU2_TR(0x68e47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68e482:{NFSU2_TR(0x68e482);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e487:{NFSU2_TR(0x68e487);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68e48c:{NFSU2_TR(0x68e48c);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e490:{NFSU2_TR(0x68e490);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e494:{NFSU2_TR(0x68e494);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e498:{NFSU2_TR(0x68e498);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e49c:{NFSU2_TR(0x68e49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68e4a1:{NFSU2_TR(0x68e4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68e4a6:{NFSU2_TR(0x68e4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68e4ab:{NFSU2_TR(0x68e4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68e4b0:{NFSU2_TR(0x68e4b0);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e4b4:{NFSU2_TR(0x68e4b4);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e4b8:{NFSU2_TR(0x68e4b8);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e4bc:{NFSU2_TR(0x68e4bc);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e4c0:{NFSU2_TR(0x68e4c0);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+16))),(U+0),16);
}
B68e4c4:{NFSU2_TR(0x68e4c4);
u8 U[20];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4c9:{NFSU2_TR(0x68e4c9);
u8 U[20];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4ce:{NFSU2_TR(0x68e4ce);
u8 U[20];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4d3:{NFSU2_TR(0x68e4d3);
u8 U[20];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4d8:{NFSU2_TR(0x68e4d8);
u8 U[20];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4dd:{NFSU2_TR(0x68e4dd);
u8 U[20];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4e2:{NFSU2_TR(0x68e4e2);
u8 U[20];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e4e7:{NFSU2_TR(0x68e4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68e4ec:{NFSU2_TR(0x68e4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68e4f1:{NFSU2_TR(0x68e4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e4f6:{NFSU2_TR(0x68e4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68e4fb:{NFSU2_TR(0x68e4fb);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e4ff:{NFSU2_TR(0x68e4ff);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e503:{NFSU2_TR(0x68e503);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e507:{NFSU2_TR(0x68e507);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e50b:{NFSU2_TR(0x68e50b);
u8 U[20];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e513:{NFSU2_TR(0x68e513);
u8 U[20];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e51b:{NFSU2_TR(0x68e51b);
u8 U[20];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e523:{NFSU2_TR(0x68e523);
u8 U[20];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68e52b:{NFSU2_TR(0x68e52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e531:{NFSU2_TR(0x68e531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e537:{NFSU2_TR(0x68e537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e53d:L68e53d:{c.instructions+=2;NFSU2_TR(0x68e53d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68e540:{NFSU2_TR(0x68e540);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68e62e;}}
}
B68e546:L68e546:{c.instructions+=59;NFSU2_TR(0x68e546);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68e549:{NFSU2_TR(0x68e549);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4672),(U+8),8);
}
B68e54d:{NFSU2_TR(0x68e54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68e552:{NFSU2_TR(0x68e552);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4800),(U+12),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68e558:{NFSU2_TR(0x68e558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68e55b:{NFSU2_TR(0x68e55b);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68e55e:{NFSU2_TR(0x68e55e);
__builtin_memmove((R+4744),(R+4740),4);
__builtin_memmove((R+4748),(R+4804),4);
__builtin_memmove((R+4740),(R+4800),4);
}
B68e561:{NFSU2_TR(0x68e561);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4864),(U+0),8);
}
B68e564:{NFSU2_TR(0x68e564);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4928),(U+8),8);
}
B68e568:{NFSU2_TR(0x68e568);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68e56d:{NFSU2_TR(0x68e56d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+5056),(U+12),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68e573:{NFSU2_TR(0x68e573);
__builtin_memmove((R+4872),(R+4868),4);
__builtin_memmove((R+4876),(R+4932),4);
__builtin_memmove((R+4868),(R+4928),4);
}
B68e576:{NFSU2_TR(0x68e576);
__builtin_memmove((R+5000),(R+4996),4);
__builtin_memmove((R+5004),(R+5060),4);
__builtin_memmove((R+4996),(R+5056),4);
}
B68e579:{NFSU2_TR(0x68e579);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68e57c:{NFSU2_TR(0x68e57c);
__builtin_memmove((R+4744),(R+4992),8);
}
B68e57f:{NFSU2_TR(0x68e57f);
__builtin_memmove((R+4616),(R+4864),8);
}
B68e582:{NFSU2_TR(0x68e582);
__builtin_memmove((R+4864),(R+4680),8);
}
B68e585:{NFSU2_TR(0x68e585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68e588:{NFSU2_TR(0x68e588);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68e58b:{NFSU2_TR(0x68e58b);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68e58e:{NFSU2_TR(0x68e58e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+16))),16);
__builtin_memmove((U+16),(U+0),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+16))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+20))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+24))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+28))));
}
B68e592:{NFSU2_TR(0x68e592);
u8 U[36];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68e597:{NFSU2_TR(0x68e597);
u8 U[36];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68e59c:{NFSU2_TR(0x68e59c);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68e59f:{NFSU2_TR(0x68e59f);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B68e5a2:{NFSU2_TR(0x68e5a2);
u8 U[36];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68e5a7:{NFSU2_TR(0x68e5a7);
u8 U[36];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68e5ac:{NFSU2_TR(0x68e5ac);
u8 U[36];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68e5b1:{NFSU2_TR(0x68e5b1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4876))));
}
B68e5b4:{NFSU2_TR(0x68e5b4);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4992))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4996))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+5000))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+5004))));
}
B68e5b7:{NFSU2_TR(0x68e5b7);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4940))));
}
B68e5ba:{NFSU2_TR(0x68e5ba);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68e5bd:{NFSU2_TR(0x68e5bd);
__builtin_memmove((R+5056),(R+4736),4);
__builtin_memmove((R+5060),(R+4740),4);
__builtin_memmove((R+5064),(R+4744),4);
__builtin_memmove((R+5068),(R+4748),4);
}
B68e5c0:{NFSU2_TR(0x68e5c0);
u8 U[36];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68e5c8:{NFSU2_TR(0x68e5c8);
u8 U[36];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68e5d0:{NFSU2_TR(0x68e5d0);
u8 U[36];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68e5d8:{NFSU2_TR(0x68e5d8);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68e5db:{NFSU2_TR(0x68e5db);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4876))));
}
B68e5de:{NFSU2_TR(0x68e5de);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+5068))));
}
B68e5e1:{NFSU2_TR(0x68e5e1);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68e5e4:{NFSU2_TR(0x68e5e4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68e5e7:{NFSU2_TR(0x68e5e7);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68e5ea:{NFSU2_TR(0x68e5ea);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e5ed:{NFSU2_TR(0x68e5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e5f2:{NFSU2_TR(0x68e5f2);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e5f6:{NFSU2_TR(0x68e5f6);
__builtin_memmove((R+4608),(R+4616),8);
}
B68e5f9:{NFSU2_TR(0x68e5f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68e5fd:{NFSU2_TR(0x68e5fd);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68e603:{NFSU2_TR(0x68e603);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e607:{NFSU2_TR(0x68e607);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68e60a:{NFSU2_TR(0x68e60a);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e60d:{NFSU2_TR(0x68e60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68e612:{NFSU2_TR(0x68e612);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68e616:{NFSU2_TR(0x68e616);
__builtin_memmove((R+4736),(R+4744),8);
}
B68e619:{NFSU2_TR(0x68e619);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68e61d:{NFSU2_TR(0x68e61d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68e623:{NFSU2_TR(0x68e623);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68e626:{NFSU2_TR(0x68e626);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B68e629:{NFSU2_TR(0x68e629);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e53du);}goto L68e53d;}
}
B68e62e:L68e62e:{c.instructions+=2;NFSU2_TR(0x68e62e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68e631:{NFSU2_TR(0x68e631);
if(r1(R+518)){{goto L68e656;}}
}
B68e633:L68e633:{c.instructions+=9;NFSU2_TR(0x68e633);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B68e636:{NFSU2_TR(0x68e636);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B68e639:{NFSU2_TR(0x68e639);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B68e63c:{NFSU2_TR(0x68e63c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B68e63e:{NFSU2_TR(0x68e63e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B68e640:{NFSU2_TR(0x68e640);
w4(R+4,u32(0x4ull));
}
B68e645:{NFSU2_TR(0x68e645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e64b:{NFSU2_TR(0x68e64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e651:{NFSU2_TR(0x68e651);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68e53du);}goto L68e53d;}
}
B68e656:L68e656:{c.instructions+=7;NFSU2_TR(0x68e656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e65c:{NFSU2_TR(0x68e65c);
__builtin_memmove((R+16),(R+20),4);
}
B68e65e:{NFSU2_TR(0x68e65e);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68e665:{NFSU2_TR(0x68e665);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68e66c:{NFSU2_TR(0x68e66c);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68e673:{NFSU2_TR(0x68e673);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e679:{NFSU2_TR(0x68e679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e67c:L68e67c:{c.instructions+=39;NFSU2_TR(0x68e67c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e680:{NFSU2_TR(0x68e680);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e684:{NFSU2_TR(0x68e684);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B68e687:{NFSU2_TR(0x68e687);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B68e68b:{NFSU2_TR(0x68e68b);
__builtin_memmove((R+4416),(R+4384),8);
}
B68e68e:{NFSU2_TR(0x68e68e);
__builtin_memmove((R+4432),(R+4400),8);
}
B68e691:{NFSU2_TR(0x68e691);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68e694:{NFSU2_TR(0x68e694);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4388),4);
}
B68e697:{NFSU2_TR(0x68e697);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B68e69a:{NFSU2_TR(0x68e69a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68e69e:{NFSU2_TR(0x68e69e);
__builtin_memmove((R+4420),(R+4384),4);
}
B68e6a1:{NFSU2_TR(0x68e6a1);
__builtin_memmove((R+4436),(R+4400),4);
}
B68e6a4:{NFSU2_TR(0x68e6a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e6a8:{NFSU2_TR(0x68e6a8);
__builtin_memmove((R+4448),(R+4416),8);
}
B68e6ab:{NFSU2_TR(0x68e6ab);
__builtin_memmove((R+4464),(R+4432),8);
}
B68e6ae:{NFSU2_TR(0x68e6ae);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B68e6b2:{NFSU2_TR(0x68e6b2);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68e6b9:{NFSU2_TR(0x68e6b9);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68e6bd:{NFSU2_TR(0x68e6bd);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b7170))));
}
B68e6c4:{NFSU2_TR(0x68e6c4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B68e6c8:{NFSU2_TR(0x68e6c8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68e6cc:{NFSU2_TR(0x68e6cc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68e6d0:{NFSU2_TR(0x68e6d0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B68e6d3:{NFSU2_TR(0x68e6d3);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B68e6d7:{NFSU2_TR(0x68e6d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68e6db:{NFSU2_TR(0x68e6db);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68e6df:{NFSU2_TR(0x68e6df);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7170))));
}
B68e6e6:{NFSU2_TR(0x68e6e6);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68e6ea:{NFSU2_TR(0x68e6ea);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68e6ee:{NFSU2_TR(0x68e6ee);
w8(R+4432,u64(u64(r8(R+4432))^u64(m8(0x7b7170))));
}
B68e6f5:{NFSU2_TR(0x68e6f5);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68e6f9:{NFSU2_TR(0x68e6f9);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e6fc:{NFSU2_TR(0x68e6fc);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68e700:{NFSU2_TR(0x68e700);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68e704:{NFSU2_TR(0x68e704);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B68e708:{NFSU2_TR(0x68e708);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B68e70c:{NFSU2_TR(0x68e70c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68e710:{NFSU2_TR(0x68e710);
w2(R+4260,0xffffu);
}
B68e712:{NFSU2_TR(0x68e712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e715:L68e715:{c.instructions+=25;NFSU2_TR(0x68e715);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e719:{NFSU2_TR(0x68e719);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68e71c:{NFSU2_TR(0x68e71c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68e720:{NFSU2_TR(0x68e720);
__builtin_memmove((R+4368),(R+4352),8);
}
B68e723:{NFSU2_TR(0x68e723);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68e727:{NFSU2_TR(0x68e727);
__builtin_memmove((R+4400),(R+4384),8);
}
B68e72a:{NFSU2_TR(0x68e72a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68e72e:{NFSU2_TR(0x68e72e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68e732:{NFSU2_TR(0x68e732);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e736:{NFSU2_TR(0x68e736);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68e73a:{NFSU2_TR(0x68e73a);
__builtin_memmove((R+4432),(R+4352),8);
}
B68e73d:{NFSU2_TR(0x68e73d);
{SPILL();c.pc=0x68e73du;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68e741:{NFSU2_TR(0x68e741);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B68e749:{NFSU2_TR(0x68e749);
__builtin_memmove((R+4384),(R+4416),8);
}
B68e74c:{NFSU2_TR(0x68e74c);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68e750:{NFSU2_TR(0x68e750);
{SPILL();c.pc=0x68e750u;V r_=user_op(c,524535,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B68e754:{NFSU2_TR(0x68e754);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B68e757:{NFSU2_TR(0x68e757);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B68e75a:{NFSU2_TR(0x68e75a);
{SPILL();c.pc=0x68e75au;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68e75e:{NFSU2_TR(0x68e75e);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68e762:{NFSU2_TR(0x68e762);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68e766:{NFSU2_TR(0x68e766);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e769:{NFSU2_TR(0x68e769);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68e76d:{NFSU2_TR(0x68e76d);
w2(R+4260,0xffffu);
}
B68e76f:{NFSU2_TR(0x68e76f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e772:L68e772:{c.instructions+=8;NFSU2_TR(0x68e772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B68e775:{NFSU2_TR(0x68e775);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68e779:{NFSU2_TR(0x68e779);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e77d:{NFSU2_TR(0x68e77d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B68e780:{NFSU2_TR(0x68e780);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68e784:{NFSU2_TR(0x68e784);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68e786:{NFSU2_TR(0x68e786);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68e78a:{NFSU2_TR(0x68e78a);
if(r1(R+518)){{goto L68e793;}}
}
B68e78c:L68e78c:{c.instructions+=2;NFSU2_TR(0x68e78c);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B68e78f:{NFSU2_TR(0x68e78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B68e793:L68e793:{c.instructions+=3;NFSU2_TR(0x68e793);
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
B68e795:{NFSU2_TR(0x68e795);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B68e798:{NFSU2_TR(0x68e798);
if(r1(R+518)){{goto L68e7ae;}}
}
B68e79a:L68e79a:{c.instructions+=1;NFSU2_TR(0x68e79a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68e79full));
TAIL_STATIC(0x6d3e80u,6d3);
}
B68e79f:L68e79f:{c.instructions+=3;NFSU2_TR(0x68e79f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68e7a3:{NFSU2_TR(0x68e7a3);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7160))));}
}
B68e7ab:{NFSU2_TR(0x68e7ab);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+4)),r4(U+0));
}
B68e7ae:L68e7ae:{c.instructions+=3;NFSU2_TR(0x68e7ae);
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
B68e7b1:{NFSU2_TR(0x68e7b1);
w2(R+4260,0xffffu);
}
B68e7b3:{NFSU2_TR(0x68e7b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e7b6:L68e7b6:{c.instructions+=31;NFSU2_TR(0x68e7b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e7ba:{NFSU2_TR(0x68e7ba);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68e7bd:{NFSU2_TR(0x68e7bd);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B68e7c0:{NFSU2_TR(0x68e7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68e7c4:{NFSU2_TR(0x68e7c4);
__builtin_memmove((R+4368),(R+4352),8);
}
B68e7c7:{NFSU2_TR(0x68e7c7);
__builtin_memmove((R+4384),(R+4352),8);
}
B68e7ca:{NFSU2_TR(0x68e7ca);
__builtin_memmove((R+4400),(R+4352),8);
}
B68e7cd:{NFSU2_TR(0x68e7cd);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68e7d1:{NFSU2_TR(0x68e7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B68e7d5:{NFSU2_TR(0x68e7d5);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68e7d9:{NFSU2_TR(0x68e7d9);
{wv<8>((R+4384),uo::pfsubr<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68e7dd:{NFSU2_TR(0x68e7dd);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68e7e1:{NFSU2_TR(0x68e7e1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B68e7e5:{NFSU2_TR(0x68e7e5);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B68e7e9:{NFSU2_TR(0x68e7e9);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B68e7ed:{NFSU2_TR(0x68e7ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68e7f1:{NFSU2_TR(0x68e7f1);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68e7f5:{NFSU2_TR(0x68e7f5);
__builtin_memmove((R+4356),(R+4384),4);
}
B68e7f8:{NFSU2_TR(0x68e7f8);
__builtin_memmove((R+4464),(R+4384),8);
}
B68e7fb:{NFSU2_TR(0x68e7fb);
__builtin_memmove((R+4452),(R+4368),4);
}
B68e7fe:{NFSU2_TR(0x68e7fe);
__builtin_memmove((R+4468),(R+4368),4);
}
B68e801:{NFSU2_TR(0x68e801);
__builtin_memmove((R+4404),(R+4400),4);
}
B68e804:{NFSU2_TR(0x68e804);
{wv<8>((R+4448),uo::pfcmpge<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68e808:{NFSU2_TR(0x68e808);
{wv<8>((R+4464),uo::pfcmpge<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B68e80c:{NFSU2_TR(0x68e80c);
{wv<8>((R+4448),uo::packssdw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68e80f:{NFSU2_TR(0x68e80f);
{wv<8>((R+4448),uo::packsswb<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B68e812:{NFSU2_TR(0x68e812);
w4(R+4,u32(r8(R+4448)));
}
B68e815:{NFSU2_TR(0x68e815);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e81b:{NFSU2_TR(0x68e81b);
__builtin_memmove((R+4448),(R+4432),8);
}
B68e81e:{NFSU2_TR(0x68e81e);
__builtin_memmove((R+0),(R+4),4);
}
B68e820:{NFSU2_TR(0x68e820);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68e887;}}
}
B68e822:L68e822:{c.instructions+=26;NFSU2_TR(0x68e822);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7148))));}
}
B68e82a:{NFSU2_TR(0x68e82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68e82e:{NFSU2_TR(0x68e82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68e832:{NFSU2_TR(0x68e832);
{SPILL();c.pc=0x68e832u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68e836:{NFSU2_TR(0x68e836);
__builtin_memmove((R+4404),(R+4432),4);
}
B68e839:{NFSU2_TR(0x68e839);
__builtin_memmove((R+4468),(R+4464),4);
}
B68e83c:{NFSU2_TR(0x68e83c);
__builtin_memmove((R+4384),(R+4416),8);
}
B68e83f:{NFSU2_TR(0x68e83f);
__builtin_memmove((R+4356),(R+4352),4);
}
B68e842:{NFSU2_TR(0x68e842);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68e846:{NFSU2_TR(0x68e846);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B68e849:{NFSU2_TR(0x68e849);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B68e84d:{NFSU2_TR(0x68e84d);
{SPILL();c.pc=0x68e84du;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68e851:{NFSU2_TR(0x68e851);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68e854:{NFSU2_TR(0x68e854);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68e858:{NFSU2_TR(0x68e858);
{SPILL();c.pc=0x68e858u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68e85c:{NFSU2_TR(0x68e85c);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B68e860:{NFSU2_TR(0x68e860);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>(gp(0x7b71c0))));}
}
B68e868:{NFSU2_TR(0x68e868);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e86c:{NFSU2_TR(0x68e86c);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68e870:{NFSU2_TR(0x68e870);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68e874:{NFSU2_TR(0x68e874);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68e878:{NFSU2_TR(0x68e878);
__builtin_memmove((R+4372),(R+4352),4);
}
B68e87b:{NFSU2_TR(0x68e87b);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e87e:{NFSU2_TR(0x68e87e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68e882:{NFSU2_TR(0x68e882);
w2(R+4260,0xffffu);
}
B68e884:{NFSU2_TR(0x68e884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e887:L68e887:{c.instructions+=4;NFSU2_TR(0x68e887);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff00ff00ull))));
}
B68e88c:{NFSU2_TR(0x68e88c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xff00ff00ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xff00ff00ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xff00ff00ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e891:{NFSU2_TR(0x68e891);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e895:{NFSU2_TR(0x68e895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68e900;}}
}
B68e897:L68e897:{c.instructions+=26;NFSU2_TR(0x68e897);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>(gp(0x7b7148))));}
}
B68e89f:{NFSU2_TR(0x68e89f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B68e8a2:{NFSU2_TR(0x68e8a2);
{SPILL();c.pc=0x68e8a2u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4368))});SPILL();wv<8>((R+4416),r_);}
}
B68e8a6:{NFSU2_TR(0x68e8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68e8aa:{NFSU2_TR(0x68e8aa);
__builtin_memmove((R+4352),(R+4416),8);
}
B68e8ad:{NFSU2_TR(0x68e8ad);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68e8b1:{NFSU2_TR(0x68e8b1);
__builtin_memmove((R+4372),(R+4368),4);
}
B68e8b4:{NFSU2_TR(0x68e8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4436),(U+4),4);
}
B68e8b8:{NFSU2_TR(0x68e8b8);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B68e8bc:{NFSU2_TR(0x68e8bc);
{SPILL();c.pc=0x68e8bcu;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4368))});SPILL();wv<8>((R+4416),r_);}
}
B68e8c0:{NFSU2_TR(0x68e8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68e8c4:{NFSU2_TR(0x68e8c4);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68e8c7:{NFSU2_TR(0x68e8c7);
{SPILL();c.pc=0x68e8c7u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68e8cb:{NFSU2_TR(0x68e8cb);
__builtin_memmove((R+4468),(R+4448),4);
}
B68e8ce:{NFSU2_TR(0x68e8ce);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>(gp(0x7b71c0))));}
}
B68e8d6:{NFSU2_TR(0x68e8d6);
w8(R+4464,u64(u64(r8(R+4464))^u64(m8(0x7b7178))));
}
B68e8dd:{NFSU2_TR(0x68e8dd);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68e8e1:{NFSU2_TR(0x68e8e1);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68e8e5:{NFSU2_TR(0x68e8e5);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68e8e9:{NFSU2_TR(0x68e8e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e8ed:{NFSU2_TR(0x68e8ed);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B68e8f1:{NFSU2_TR(0x68e8f1);
__builtin_memmove((R+4372),(R+4400),4);
}
B68e8f4:{NFSU2_TR(0x68e8f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68e8f8:{NFSU2_TR(0x68e8f8);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e8fb:{NFSU2_TR(0x68e8fb);
w2(R+4260,0xffffu);
}
B68e8fd:{NFSU2_TR(0x68e8fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e900:L68e900:{c.instructions+=3;NFSU2_TR(0x68e900);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68e906:{NFSU2_TR(0x68e906);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68e90a:{NFSU2_TR(0x68e90a);
if(r1(R+518)){{goto L68e974;}}
}
B68e90c:L68e90c:{c.instructions+=26;NFSU2_TR(0x68e90c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b7148))));}
}
B68e914:{NFSU2_TR(0x68e914);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68e917:{NFSU2_TR(0x68e917);
__builtin_memmove((R+4448),(R+4432),8);
}
B68e91a:{NFSU2_TR(0x68e91a);
{SPILL();c.pc=0x68e91au;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68e91e:{NFSU2_TR(0x68e91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68e922:{NFSU2_TR(0x68e922);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68e925:{NFSU2_TR(0x68e925);
__builtin_memmove((R+4352),(R+4416),8);
}
B68e928:{NFSU2_TR(0x68e928);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68e92c:{NFSU2_TR(0x68e92c);
__builtin_memmove((R+4388),(R+4384),4);
}
B68e92f:{NFSU2_TR(0x68e92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4452),(U+4),4);
}
B68e933:{NFSU2_TR(0x68e933);
__builtin_memmove((R+4404),(R+4432),4);
}
B68e936:{NFSU2_TR(0x68e936);
{SPILL();c.pc=0x68e936u;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68e93a:{NFSU2_TR(0x68e93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68e93e:{NFSU2_TR(0x68e93e);
{SPILL();c.pc=0x68e93eu;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68e942:{NFSU2_TR(0x68e942);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7178))));
}
B68e949:{NFSU2_TR(0x68e949);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B68e94d:{NFSU2_TR(0x68e94d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>(gp(0x7b71c0))));}
}
B68e955:{NFSU2_TR(0x68e955);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B68e959:{NFSU2_TR(0x68e959);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68e95d:{NFSU2_TR(0x68e95d);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68e961:{NFSU2_TR(0x68e961);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68e965:{NFSU2_TR(0x68e965);
__builtin_memmove((R+4372),(R+4384),4);
}
B68e968:{NFSU2_TR(0x68e968);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68e96c:{NFSU2_TR(0x68e96c);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e96f:{NFSU2_TR(0x68e96f);
w2(R+4260,0xffffu);
}
B68e971:{NFSU2_TR(0x68e971);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e974:L68e974:{c.instructions+=24;NFSU2_TR(0x68e974);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7148))));}
}
B68e97c:{NFSU2_TR(0x68e97c);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68e97f:{NFSU2_TR(0x68e97f);
{SPILL();c.pc=0x68e97fu;V r_=user_op(c,524533,{rv<8>((R+4384)),rv<8>((R+4400))});SPILL();wv<8>((R+4384),r_);}
}
B68e983:{NFSU2_TR(0x68e983);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68e987:{NFSU2_TR(0x68e987);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68e98a:{NFSU2_TR(0x68e98a);
__builtin_memmove((R+4352),(R+4384),8);
}
B68e98d:{NFSU2_TR(0x68e98d);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68e991:{NFSU2_TR(0x68e991);
__builtin_memmove((R+4404),(R+4400),4);
}
B68e994:{NFSU2_TR(0x68e994);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4436),(U+4),4);
}
B68e998:{NFSU2_TR(0x68e998);
__builtin_memmove((R+4420),(R+4448),4);
}
B68e99b:{NFSU2_TR(0x68e99b);
{SPILL();c.pc=0x68e99bu;V r_=user_op(c,524535,{rv<8>((R+4384)),rv<8>((R+4400))});SPILL();wv<8>((R+4384),r_);}
}
B68e99f:{NFSU2_TR(0x68e99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68e9a3:{NFSU2_TR(0x68e9a3);
{SPILL();c.pc=0x68e9a3u;V r_=user_op(c,524536,{rv<8>((R+4384)),rv<8>((R+4352))});SPILL();wv<8>((R+4384),r_);}
}
B68e9a7:{NFSU2_TR(0x68e9a7);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B68e9ab:{NFSU2_TR(0x68e9ab);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B68e9af:{NFSU2_TR(0x68e9af);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71c0))));}
}
B68e9b7:{NFSU2_TR(0x68e9b7);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B68e9bb:{NFSU2_TR(0x68e9bb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B68e9bf:{NFSU2_TR(0x68e9bf);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B68e9c3:{NFSU2_TR(0x68e9c3);
__builtin_memmove((R+4404),(R+4368),4);
}
B68e9c6:{NFSU2_TR(0x68e9c6);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68e9c9:{NFSU2_TR(0x68e9c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68e9cd:{NFSU2_TR(0x68e9cd);
w2(R+4260,0xffffu);
}
B68e9cf:{NFSU2_TR(0x68e9cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68e9d2:L68e9d2:{c.instructions+=30;NFSU2_TR(0x68e9d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68e9d6:{NFSU2_TR(0x68e9d6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68e9d9:{NFSU2_TR(0x68e9d9);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B68e9dc:{NFSU2_TR(0x68e9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68e9e0:{NFSU2_TR(0x68e9e0);
__builtin_memmove((R+4368),(R+4352),8);
}
B68e9e3:{NFSU2_TR(0x68e9e3);
__builtin_memmove((R+4384),(R+4352),8);
}
B68e9e6:{NFSU2_TR(0x68e9e6);
__builtin_memmove((R+4400),(R+4352),8);
}
B68e9e9:{NFSU2_TR(0x68e9e9);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68e9ed:{NFSU2_TR(0x68e9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B68e9f1:{NFSU2_TR(0x68e9f1);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68e9f5:{NFSU2_TR(0x68e9f5);
{wv<8>((R+4384),uo::pfsubr<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68e9f9:{NFSU2_TR(0x68e9f9);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68e9fd:{NFSU2_TR(0x68e9fd);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B68ea01:{NFSU2_TR(0x68ea01);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B68ea05:{NFSU2_TR(0x68ea05);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B68ea09:{NFSU2_TR(0x68ea09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B68ea0d:{NFSU2_TR(0x68ea0d);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68ea11:{NFSU2_TR(0x68ea11);
__builtin_memmove((R+4356),(R+4384),4);
}
B68ea14:{NFSU2_TR(0x68ea14);
__builtin_memmove((R+4464),(R+4384),8);
}
B68ea17:{NFSU2_TR(0x68ea17);
__builtin_memmove((R+4452),(R+4368),4);
}
B68ea1a:{NFSU2_TR(0x68ea1a);
__builtin_memmove((R+4468),(R+4368),4);
}
B68ea1d:{NFSU2_TR(0x68ea1d);
__builtin_memmove((R+4404),(R+4400),4);
}
B68ea20:{NFSU2_TR(0x68ea20);
{wv<8>((R+4448),uo::pfcmpge<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B68ea24:{NFSU2_TR(0x68ea24);
{wv<8>((R+4464),uo::pfcmpge<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B68ea28:{NFSU2_TR(0x68ea28);
{wv<8>((R+4448),uo::packssdw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B68ea2b:{NFSU2_TR(0x68ea2b);
u8 U[96];
w1(U+0,u8(0x0ull));
w1(U+11,u8(u32(r1(U+0))&u32(u8(0xfeull))));
w8(U+1,shr<u64>(r8(R+4448),u64(u32(0x7ull))));
w1(U+9,u8(r8(U+1)));
w1(U+10,u8(u32(r1(U+9))&u32(u8(0x1ull))));
w1(U+0,u8(u32(r1(U+11))|u32(r1(U+10))));
w1(U+22,u8(u32(r1(U+0))&u32(u8(0xfdull))));
w8(U+12,shr<u64>(r8(R+4448),u64(u32(0xfull))));
w1(U+20,u8(r8(U+12)));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(U+23,shl<u8>(r1(U+21),u64(u32(0x1ull))));
w1(U+0,u8(u32(r1(U+22))|u32(r1(U+23))));
w1(U+34,u8(u32(r1(U+0))&u32(u8(0xfbull))));
w8(U+24,shr<u64>(r8(R+4448),u64(u32(0x17ull))));
w1(U+32,u8(r8(U+24)));
w1(U+33,u8(u32(r1(U+32))&u32(u8(0x1ull))));
w1(U+35,shl<u8>(r1(U+33),u64(u32(0x2ull))));
w1(U+0,u8(u32(r1(U+34))|u32(r1(U+35))));
w1(U+46,u8(u32(r1(U+0))&u32(u8(0xf7ull))));
w8(U+36,shr<u64>(r8(R+4448),u64(u32(0x1full))));
w1(U+44,u8(r8(U+36)));
w1(U+45,u8(u32(r1(U+44))&u32(u8(0x1ull))));
w1(U+47,shl<u8>(r1(U+45),u64(u32(0x3ull))));
w1(U+0,u8(u32(r1(U+46))|u32(r1(U+47))));
w1(U+58,u8(u32(r1(U+0))&u32(u8(0xefull))));
w8(U+48,shr<u64>(r8(R+4448),u64(u32(0x27ull))));
w1(U+56,u8(r8(U+48)));
w1(U+57,u8(u32(r1(U+56))&u32(u8(0x1ull))));
w1(U+59,shl<u8>(r1(U+57),u64(u32(0x4ull))));
w1(U+0,u8(u32(r1(U+58))|u32(r1(U+59))));
w1(U+70,u8(u32(r1(U+0))&u32(u8(0xdfull))));
w8(U+60,shr<u64>(r8(R+4448),u64(u32(0x2full))));
w1(U+68,u8(r8(U+60)));
w1(U+69,u8(u32(r1(U+68))&u32(u8(0x1ull))));
w1(U+71,shl<u8>(r1(U+69),u64(u32(0x5ull))));
w1(U+0,u8(u32(r1(U+70))|u32(r1(U+71))));
w1(U+82,u8(u32(r1(U+0))&u32(u8(0xbfull))));
w8(U+72,shr<u64>(r8(R+4448),u64(u32(0x37ull))));
w1(U+80,u8(r8(U+72)));
w1(U+81,u8(u32(r1(U+80))&u32(u8(0x1ull))));
w1(U+83,shl<u8>(r1(U+81),u64(u32(0x6ull))));
w1(U+0,u8(u32(r1(U+82))|u32(r1(U+83))));
w1(U+94,u8(u32(r1(U+0))&u32(u8(0x7full))));
w8(U+84,shr<u64>(r8(R+4448),u64(u32(0x3full))));
w1(U+92,u8(r8(U+84)));
w1(U+93,u8(u32(r1(U+92))&u32(u8(0x1ull))));
w1(U+95,shl<u8>(r1(U+93),u64(u32(0x7ull))));
w1(U+0,u8(u32(r1(U+94))|u32(r1(U+95))));
w4(R+4,u32(r1(U+0)));
}
B68ea2e:{NFSU2_TR(0x68ea2e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68ea34:{NFSU2_TR(0x68ea34);
__builtin_memmove((R+4448),(R+4432),8);
}
B68ea37:{NFSU2_TR(0x68ea37);
__builtin_memmove((R+0),(R+4),4);
}
B68ea39:{NFSU2_TR(0x68ea39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68eaa0;}}
}
B68ea3b:L68ea3b:{c.instructions+=26;NFSU2_TR(0x68ea3b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7148))));}
}
B68ea43:{NFSU2_TR(0x68ea43);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68ea47:{NFSU2_TR(0x68ea47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68ea4b:{NFSU2_TR(0x68ea4b);
{SPILL();c.pc=0x68ea4bu;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68ea4f:{NFSU2_TR(0x68ea4f);
__builtin_memmove((R+4404),(R+4432),4);
}
B68ea52:{NFSU2_TR(0x68ea52);
__builtin_memmove((R+4468),(R+4464),4);
}
B68ea55:{NFSU2_TR(0x68ea55);
__builtin_memmove((R+4384),(R+4416),8);
}
B68ea58:{NFSU2_TR(0x68ea58);
__builtin_memmove((R+4356),(R+4352),4);
}
B68ea5b:{NFSU2_TR(0x68ea5b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68ea5f:{NFSU2_TR(0x68ea5f);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B68ea62:{NFSU2_TR(0x68ea62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B68ea66:{NFSU2_TR(0x68ea66);
{SPILL();c.pc=0x68ea66u;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68ea6a:{NFSU2_TR(0x68ea6a);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68ea6d:{NFSU2_TR(0x68ea6d);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68ea71:{NFSU2_TR(0x68ea71);
{SPILL();c.pc=0x68ea71u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68ea75:{NFSU2_TR(0x68ea75);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B68ea79:{NFSU2_TR(0x68ea79);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>(gp(0x7b71c0))));}
}
B68ea81:{NFSU2_TR(0x68ea81);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ea85:{NFSU2_TR(0x68ea85);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68ea89:{NFSU2_TR(0x68ea89);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68ea8d:{NFSU2_TR(0x68ea8d);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68ea91:{NFSU2_TR(0x68ea91);
__builtin_memmove((R+4372),(R+4352),4);
}
B68ea94:{NFSU2_TR(0x68ea94);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68ea97:{NFSU2_TR(0x68ea97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ea9b:{NFSU2_TR(0x68ea9b);
w2(R+4260,0xffffu);
}
B68ea9d:{NFSU2_TR(0x68ea9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68eaa0:L68eaa0:{c.instructions+=3;NFSU2_TR(0x68eaa0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xccull))));
}
B68eaa5:{NFSU2_TR(0x68eaa5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xccull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xccull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xccull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68eaaa:{NFSU2_TR(0x68eaaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68eb15;}}
}
B68eaac:L68eaac:{c.instructions+=26;NFSU2_TR(0x68eaac);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>(gp(0x7b7148))));}
}
B68eab4:{NFSU2_TR(0x68eab4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B68eab7:{NFSU2_TR(0x68eab7);
{SPILL();c.pc=0x68eab7u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4368))});SPILL();wv<8>((R+4416),r_);}
}
B68eabb:{NFSU2_TR(0x68eabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68eabf:{NFSU2_TR(0x68eabf);
__builtin_memmove((R+4352),(R+4416),8);
}
B68eac2:{NFSU2_TR(0x68eac2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68eac6:{NFSU2_TR(0x68eac6);
__builtin_memmove((R+4372),(R+4368),4);
}
B68eac9:{NFSU2_TR(0x68eac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4436),(U+4),4);
}
B68eacd:{NFSU2_TR(0x68eacd);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B68ead1:{NFSU2_TR(0x68ead1);
{SPILL();c.pc=0x68ead1u;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4368))});SPILL();wv<8>((R+4416),r_);}
}
B68ead5:{NFSU2_TR(0x68ead5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68ead9:{NFSU2_TR(0x68ead9);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68eadc:{NFSU2_TR(0x68eadc);
{SPILL();c.pc=0x68eadcu;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68eae0:{NFSU2_TR(0x68eae0);
__builtin_memmove((R+4468),(R+4448),4);
}
B68eae3:{NFSU2_TR(0x68eae3);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>(gp(0x7b71c0))));}
}
B68eaeb:{NFSU2_TR(0x68eaeb);
w8(R+4464,u64(u64(r8(R+4464))^u64(m8(0x7b7178))));
}
B68eaf2:{NFSU2_TR(0x68eaf2);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68eaf6:{NFSU2_TR(0x68eaf6);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B68eafa:{NFSU2_TR(0x68eafa);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68eafe:{NFSU2_TR(0x68eafe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68eb02:{NFSU2_TR(0x68eb02);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B68eb06:{NFSU2_TR(0x68eb06);
__builtin_memmove((R+4372),(R+4400),4);
}
B68eb09:{NFSU2_TR(0x68eb09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68eb0d:{NFSU2_TR(0x68eb0d);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68eb10:{NFSU2_TR(0x68eb10);
w2(R+4260,0xffffu);
}
B68eb12:{NFSU2_TR(0x68eb12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68eb15:L68eb15:{c.instructions+=3;NFSU2_TR(0x68eb15);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68eb1b:{NFSU2_TR(0x68eb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68eb1f:{NFSU2_TR(0x68eb1f);
if(r1(R+518)){{goto L68eb89;}}
}
B68eb21:L68eb21:{c.instructions+=26;NFSU2_TR(0x68eb21);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b7148))));}
}
B68eb29:{NFSU2_TR(0x68eb29);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68eb2c:{NFSU2_TR(0x68eb2c);
__builtin_memmove((R+4448),(R+4432),8);
}
B68eb2f:{NFSU2_TR(0x68eb2f);
{SPILL();c.pc=0x68eb2fu;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68eb33:{NFSU2_TR(0x68eb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B68eb37:{NFSU2_TR(0x68eb37);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68eb3a:{NFSU2_TR(0x68eb3a);
__builtin_memmove((R+4352),(R+4416),8);
}
B68eb3d:{NFSU2_TR(0x68eb3d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B68eb41:{NFSU2_TR(0x68eb41);
__builtin_memmove((R+4388),(R+4384),4);
}
B68eb44:{NFSU2_TR(0x68eb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4452),(U+4),4);
}
B68eb48:{NFSU2_TR(0x68eb48);
__builtin_memmove((R+4404),(R+4432),4);
}
B68eb4b:{NFSU2_TR(0x68eb4b);
{SPILL();c.pc=0x68eb4bu;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68eb4f:{NFSU2_TR(0x68eb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68eb53:{NFSU2_TR(0x68eb53);
{SPILL();c.pc=0x68eb53u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68eb57:{NFSU2_TR(0x68eb57);
w8(R+4448,u64(u64(r8(R+4448))^u64(m8(0x7b7178))));
}
B68eb5e:{NFSU2_TR(0x68eb5e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B68eb62:{NFSU2_TR(0x68eb62);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>(gp(0x7b71c0))));}
}
B68eb6a:{NFSU2_TR(0x68eb6a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B68eb6e:{NFSU2_TR(0x68eb6e);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B68eb72:{NFSU2_TR(0x68eb72);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68eb76:{NFSU2_TR(0x68eb76);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B68eb7a:{NFSU2_TR(0x68eb7a);
__builtin_memmove((R+4372),(R+4384),4);
}
B68eb7d:{NFSU2_TR(0x68eb7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68eb81:{NFSU2_TR(0x68eb81);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68eb84:{NFSU2_TR(0x68eb84);
w2(R+4260,0xffffu);
}
B68eb86:{NFSU2_TR(0x68eb86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68eb89:L68eb89:{c.instructions+=24;NFSU2_TR(0x68eb89);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7148))));}
}
B68eb91:{NFSU2_TR(0x68eb91);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B68eb94:{NFSU2_TR(0x68eb94);
{SPILL();c.pc=0x68eb94u;V r_=user_op(c,524533,{rv<8>((R+4384)),rv<8>((R+4400))});SPILL();wv<8>((R+4384),r_);}
}
B68eb98:{NFSU2_TR(0x68eb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68eb9c:{NFSU2_TR(0x68eb9c);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68eb9f:{NFSU2_TR(0x68eb9f);
__builtin_memmove((R+4352),(R+4384),8);
}
B68eba2:{NFSU2_TR(0x68eba2);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68eba6:{NFSU2_TR(0x68eba6);
__builtin_memmove((R+4404),(R+4400),4);
}
B68eba9:{NFSU2_TR(0x68eba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4436),(U+4),4);
}
B68ebad:{NFSU2_TR(0x68ebad);
__builtin_memmove((R+4420),(R+4448),4);
}
B68ebb0:{NFSU2_TR(0x68ebb0);
{SPILL();c.pc=0x68ebb0u;V r_=user_op(c,524535,{rv<8>((R+4384)),rv<8>((R+4400))});SPILL();wv<8>((R+4384),r_);}
}
B68ebb4:{NFSU2_TR(0x68ebb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68ebb8:{NFSU2_TR(0x68ebb8);
{SPILL();c.pc=0x68ebb8u;V r_=user_op(c,524536,{rv<8>((R+4384)),rv<8>((R+4352))});SPILL();wv<8>((R+4384),r_);}
}
B68ebbc:{NFSU2_TR(0x68ebbc);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B68ebc0:{NFSU2_TR(0x68ebc0);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B68ebc4:{NFSU2_TR(0x68ebc4);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71c0))));}
}
B68ebcc:{NFSU2_TR(0x68ebcc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B68ebd0:{NFSU2_TR(0x68ebd0);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B68ebd4:{NFSU2_TR(0x68ebd4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B68ebd8:{NFSU2_TR(0x68ebd8);
__builtin_memmove((R+4404),(R+4368),4);
}
B68ebdb:{NFSU2_TR(0x68ebdb);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68ebde:{NFSU2_TR(0x68ebde);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ebe2:{NFSU2_TR(0x68ebe2);
w2(R+4260,0xffffu);
}
B68ebe4:{NFSU2_TR(0x68ebe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ebe7:L68ebe7:{c.instructions+=10;NFSU2_TR(0x68ebe7);
w2(R+4260,0xffffu);
}
B68ebe9:{NFSU2_TR(0x68ebe9);
__builtin_memmove((R+4352),gp(0x7b71e8),8);
}
B68ebf0:{NFSU2_TR(0x68ebf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ebf1:{NFSU2_TR(0x68ebf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ebf2:{NFSU2_TR(0x68ebf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B68ebf5:{NFSU2_TR(0x68ebf5);
__builtin_memmove((R+4368),(R+4352),8);
}
B68ebf8:{NFSU2_TR(0x68ebf8);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B68ebfe:{NFSU2_TR(0x68ebfe);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B68ec04:{NFSU2_TR(0x68ec04);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ec09:{NFSU2_TR(0x68ec09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ec0eull));
TAIL_STATIC(0x6d4460u,6d4);
}
B68ec0e:L68ec0e:{c.instructions+=4;NFSU2_TR(0x68ec0e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B68ec12:{NFSU2_TR(0x68ec12);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68ec17:{NFSU2_TR(0x68ec17);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B68ec1a:{NFSU2_TR(0x68ec1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ec1full));
TAIL_STATIC(0x6d4460u,6d4);
}
B68ec1f:L68ec1f:{c.instructions+=3;NFSU2_TR(0x68ec1f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ec24:{NFSU2_TR(0x68ec24);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B68ec29:{NFSU2_TR(0x68ec29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ec2eull));
TAIL_STATIC(0x6d4460u,6d4);
}
B68ec2e:L68ec2e:{c.instructions+=37;NFSU2_TR(0x68ec2e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68ec32:{NFSU2_TR(0x68ec32);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68ec37:{NFSU2_TR(0x68ec37);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ec3b:{NFSU2_TR(0x68ec3b);
__builtin_memmove((R+4464),gp(0x7b71d8),8);
}
B68ec42:{NFSU2_TR(0x68ec42);
__builtin_memmove((R+4400),(R+4352),8);
}
B68ec45:{NFSU2_TR(0x68ec45);
__builtin_memmove((R+4416),(R+4352),8);
}
B68ec48:{NFSU2_TR(0x68ec48);
__builtin_memmove((R+4432),(R+4352),8);
}
B68ec4b:{NFSU2_TR(0x68ec4b);
__builtin_memmove((R+4356),(R+4352),4);
}
B68ec4e:{NFSU2_TR(0x68ec4e);
__builtin_memmove((R+4404),(R+4400),4);
}
B68ec51:{NFSU2_TR(0x68ec51);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B68ec54:{NFSU2_TR(0x68ec54);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B68ec57:{NFSU2_TR(0x68ec57);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4464))));
}
B68ec5a:{NFSU2_TR(0x68ec5a);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B68ec5e:{NFSU2_TR(0x68ec5e);
__builtin_memmove((R+4448),(R+4384),8);
}
B68ec61:{NFSU2_TR(0x68ec61);
__builtin_memmove((R+4388),(R+4384),4);
}
B68ec64:{NFSU2_TR(0x68ec64);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B68ec67:{NFSU2_TR(0x68ec67);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4464))));
}
B68ec6a:{NFSU2_TR(0x68ec6a);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B68ec6e:{NFSU2_TR(0x68ec6e);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B68ec72:{NFSU2_TR(0x68ec72);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B68ec76:{NFSU2_TR(0x68ec76);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B68ec7a:{NFSU2_TR(0x68ec7a);
__builtin_memmove((R+4464),(R+4368),8);
}
B68ec7d:{NFSU2_TR(0x68ec7d);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B68ec80:{NFSU2_TR(0x68ec80);
__builtin_memmove((R+4468),(R+4368),4);
}
B68ec83:{NFSU2_TR(0x68ec83);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68ec87:{NFSU2_TR(0x68ec87);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B68ec8b:{NFSU2_TR(0x68ec8b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B68ec8f:{NFSU2_TR(0x68ec8f);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B68ec93:{NFSU2_TR(0x68ec93);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68ec97:{NFSU2_TR(0x68ec97);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B68ec9b:{NFSU2_TR(0x68ec9b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68ec9e:{NFSU2_TR(0x68ec9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68eca2:{NFSU2_TR(0x68eca2);
w2(R+4260,0xffffu);
}
B68eca4:{NFSU2_TR(0x68eca4);
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
B68eca7:{NFSU2_TR(0x68eca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68eca8:{NFSU2_TR(0x68eca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68eca9:{NFSU2_TR(0x68eca9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ecac:L68ecac:{c.instructions+=11;NFSU2_TR(0x68ecac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B68ecaf:{NFSU2_TR(0x68ecaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ecb3:{NFSU2_TR(0x68ecb3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ecb7:{NFSU2_TR(0x68ecb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ecbb:{NFSU2_TR(0x68ecbb);
__builtin_memmove((R+20),(R+16),4);
}
B68ecbd:{NFSU2_TR(0x68ecbd);
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
B68ecc0:{NFSU2_TR(0x68ecc0);
__builtin_memmove((R+8),(R+16),4);
}
B68ecc2:{NFSU2_TR(0x68ecc2);
w2(R+4260,0xffffu);
}
B68ecc4:{NFSU2_TR(0x68ecc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ecc7:{NFSU2_TR(0x68ecc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ecc8:{NFSU2_TR(0x68ecc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68eccdull));
TAIL_STATIC(0x693a80u,693);
}
B68eccd:L68eccd:{c.instructions+=3;NFSU2_TR(0x68eccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B68ecd1:{NFSU2_TR(0x68ecd1);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e8))));}
}
B68ecd9:{NFSU2_TR(0x68ecd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ecdeull));
TAIL_STATIC(0x6d4460u,6d4);
}
B68ecde:L68ecde:{c.instructions+=17;NFSU2_TR(0x68ecde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ece1:{NFSU2_TR(0x68ece1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68ece5:{NFSU2_TR(0x68ece5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B68ecea:{NFSU2_TR(0x68ecea);
__builtin_memmove((R+4400),(R+4352),8);
}
B68eced:{NFSU2_TR(0x68eced);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B68ecf0:{NFSU2_TR(0x68ecf0);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B68ecf4:{NFSU2_TR(0x68ecf4);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B68ecf8:{NFSU2_TR(0x68ecf8);
__builtin_memmove((R+4388),(R+4352),4);
}
B68ecfb:{NFSU2_TR(0x68ecfb);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68ecfe:{NFSU2_TR(0x68ecfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ed02:{NFSU2_TR(0x68ed02);
w2(R+4260,0xffffu);
}
B68ed04:{NFSU2_TR(0x68ed04);
__builtin_memmove((R+16),(R+20),4);
}
B68ed06:{NFSU2_TR(0x68ed06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68ed0a:{NFSU2_TR(0x68ed0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68ed0e:{NFSU2_TR(0x68ed0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68ed12:{NFSU2_TR(0x68ed12);
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
B68ed15:{NFSU2_TR(0x68ed15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ed18:L68ed18:{c.instructions+=27;NFSU2_TR(0x68ed18);
w2(R+4260,0xffffu);
}
B68ed1a:{NFSU2_TR(0x68ed1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B68ed1d:{NFSU2_TR(0x68ed1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68ed21:{NFSU2_TR(0x68ed21);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68ed25:{NFSU2_TR(0x68ed25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ed29:{NFSU2_TR(0x68ed29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ed2d:{NFSU2_TR(0x68ed2d);
w8(R+4352,u64(m4(0x7b71e0)));
}
B68ed34:{NFSU2_TR(0x68ed34);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68ed37:{NFSU2_TR(0x68ed37);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B68ed3b:{NFSU2_TR(0x68ed3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68ed3f:{NFSU2_TR(0x68ed3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B68ed44:{NFSU2_TR(0x68ed44);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B68ed48:{NFSU2_TR(0x68ed48);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B68ed4b:{NFSU2_TR(0x68ed4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68ed50:{NFSU2_TR(0x68ed50);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68ed54:{NFSU2_TR(0x68ed54);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B68ed58:{NFSU2_TR(0x68ed58);
{wv<8>((R+4464),uo::pfcmpge<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B68ed5c:{NFSU2_TR(0x68ed5c);
__builtin_memmove((R+4448),gp(0x7b7240),8);
}
B68ed63:{NFSU2_TR(0x68ed63);
w8(R+4464,u64(u64(r8(R+4464))&u64(m8(0x7b7228))));
}
B68ed6a:{NFSU2_TR(0x68ed6a);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4464))));
}
B68ed6d:{NFSU2_TR(0x68ed6d);
{wv<8>((R+4448),uo::pfcmpge<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B68ed71:{NFSU2_TR(0x68ed71);
w4(R+0,u32(r8(R+4448)));
}
B68ed74:{NFSU2_TR(0x68ed74);
__builtin_memmove((R+4400),(R+4368),8);
}
B68ed77:{NFSU2_TR(0x68ed77);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B68ed7b:{NFSU2_TR(0x68ed7b);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e0))));}
}
B68ed83:{NFSU2_TR(0x68ed83);
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
B68ed85:{NFSU2_TR(0x68ed85);
if(r1(R+518)){{goto L68ee03;}}
}
B68ed87:L68ed87:{c.instructions+=15;NFSU2_TR(0x68ed87);
{SPILL();c.pc=0x68ed87u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4400))});SPILL();wv<8>((R+4416),r_);}
}
B68ed8b:{NFSU2_TR(0x68ed8b);
__builtin_memmove((R+4384),(R+4416),8);
}
B68ed8e:{NFSU2_TR(0x68ed8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4464)));
s4(u32(r4(U+0)),r4(U+4));
}
B68ed93:{NFSU2_TR(0x68ed93);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B68ed97:{NFSU2_TR(0x68ed97);
{SPILL();c.pc=0x68ed97u;V r_=user_op(c,524535,{rv<8>((R+4400)),rv<8>((R+4384))});SPILL();wv<8>((R+4400),r_);}
}
B68ed9b:{NFSU2_TR(0x68ed9b);
{SPILL();c.pc=0x68ed9bu;V r_=user_op(c,524536,{rv<8>((R+4400)),rv<8>((R+4416))});SPILL();wv<8>((R+4400),r_);}
}
B68ed9f:{NFSU2_TR(0x68ed9f);
{SPILL();c.pc=0x68ed9fu;V r_=user_op(c,524532,{rv<8>((R+4384)),rv<8>((R+4400))});SPILL();wv<8>((R+4384),r_);}
}
B68eda3:{NFSU2_TR(0x68eda3);
__builtin_memmove((R+4416),(R+4400),8);
}
B68eda6:{NFSU2_TR(0x68eda6);
{SPILL();c.pc=0x68eda6u;V r_=user_op(c,524534,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68edaa:{NFSU2_TR(0x68edaa);
{SPILL();c.pc=0x68edaau;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4384))});SPILL();wv<8>((R+4416),r_);}
}
B68edae:{NFSU2_TR(0x68edae);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68edb2:{NFSU2_TR(0x68edb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B68edb7:{NFSU2_TR(0x68edb7);
__builtin_memmove((R+4352),(R+4368),8);
}
B68edba:{NFSU2_TR(0x68edba);
__builtin_memmove((R+4368),(R+4416),8);
}
B68edbd:{NFSU2_TR(0x68edbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68edc2ull));
TAIL_STATIC(0x6d3d80u,6d3);
}
B68edc2:L68edc2:{c.instructions+=4;NFSU2_TR(0x68edc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68edc7:{NFSU2_TR(0x68edc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B68edcc:{NFSU2_TR(0x68edcc);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68edd0:{NFSU2_TR(0x68edd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68edd5ull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68edd5:L68edd5:{c.instructions+=5;NFSU2_TR(0x68edd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B68edda:{NFSU2_TR(0x68edda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w8(R+4368,u64(r4(U+0)));
}
B68edde:{NFSU2_TR(0x68edde);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B68ede3:{NFSU2_TR(0x68ede3);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68ede7:{NFSU2_TR(0x68ede7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68edecull));
TAIL_STATIC(0x6d4560u,6d4);
}
B68edec:L68edec:{c.instructions+=5;NFSU2_TR(0x68edec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B68edf1:{NFSU2_TR(0x68edf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68edf6:{NFSU2_TR(0x68edf6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B68edfb:{NFSU2_TR(0x68edfb);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68edff:{NFSU2_TR(0x68edff);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B68ee03:L68ee03:{c.instructions+=21;NFSU2_TR(0x68ee03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68ee07:{NFSU2_TR(0x68ee07);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68ee0b:{NFSU2_TR(0x68ee0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ee0f:{NFSU2_TR(0x68ee0f);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4464))));
}
B68ee12:{NFSU2_TR(0x68ee12);
__builtin_memmove((R+4356),(R+4352),4);
}
B68ee15:{NFSU2_TR(0x68ee15);
__builtin_memmove((R+4420),(R+4416),4);
}
B68ee18:{NFSU2_TR(0x68ee18);
__builtin_memmove((R+4432),(R+4352),8);
}
B68ee1b:{NFSU2_TR(0x68ee1b);
__builtin_memmove((R+4448),(R+4416),8);
}
B68ee1e:{NFSU2_TR(0x68ee1e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B68ee22:{NFSU2_TR(0x68ee22);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+0))));}
}
B68ee26:{NFSU2_TR(0x68ee26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B68ee2b:{NFSU2_TR(0x68ee2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B68ee30:{NFSU2_TR(0x68ee30);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B68ee34:{NFSU2_TR(0x68ee34);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B68ee38:{NFSU2_TR(0x68ee38);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68ee3b:{NFSU2_TR(0x68ee3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ee3f:{NFSU2_TR(0x68ee3f);
w2(R+4260,0xffffu);
}
B68ee41:{NFSU2_TR(0x68ee41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68ee45:{NFSU2_TR(0x68ee45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68ee49:{NFSU2_TR(0x68ee49);
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
B68ee4c:{NFSU2_TR(0x68ee4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ee4f:L68ee4f:{c.instructions+=16;NFSU2_TR(0x68ee4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B68ee52:{NFSU2_TR(0x68ee52);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ee56:{NFSU2_TR(0x68ee56);
__builtin_memmove((R+20),(R+16),4);
}
B68ee58:{NFSU2_TR(0x68ee58);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B68ee5b:{NFSU2_TR(0x68ee5b);
__builtin_memmove((R+8),(R+16),4);
}
B68ee5d:{NFSU2_TR(0x68ee5d);
w2(R+4260,0xffffu);
}
B68ee5f:{NFSU2_TR(0x68ee5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B68ee63:{NFSU2_TR(0x68ee63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68ee67:{NFSU2_TR(0x68ee67);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68ee6b:{NFSU2_TR(0x68ee6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B68ee6f:{NFSU2_TR(0x68ee6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
}
B68ee72:{NFSU2_TR(0x68ee72);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+16)),r4(U+0));
}
B68ee76:{NFSU2_TR(0x68ee76);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ee79:{NFSU2_TR(0x68ee79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ee7c:{NFSU2_TR(0x68ee7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ee7d:{NFSU2_TR(0x68ee7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ee82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ed18u);}goto L68ed18;}
}
B68ee82:L68ee82:{c.instructions+=6;NFSU2_TR(0x68ee82);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B68ee86:{NFSU2_TR(0x68ee86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ee89:{NFSU2_TR(0x68ee89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ee8c:{NFSU2_TR(0x68ee8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ee8f:{NFSU2_TR(0x68ee8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ee90:{NFSU2_TR(0x68ee90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ee95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ed18u);}goto L68ed18;}
}
B68ee95:L68ee95:{c.instructions+=14;NFSU2_TR(0x68ee95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B68ee99:{NFSU2_TR(0x68ee99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B68ee9d:{NFSU2_TR(0x68ee9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B68eea1:{NFSU2_TR(0x68eea1);
__builtin_memmove((R+4),(R+16),4);
}
B68eea4:{NFSU2_TR(0x68eea4);
{SPILL();c.pc=0x68eea4u;V r_=user_op(c,524532,{rv<8>((R+4384)),rv<8>((R+4352))});SPILL();wv<8>((R+4384),r_);}
}
B68eea8:{NFSU2_TR(0x68eea8);
{SPILL();c.pc=0x68eea8u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B68eeac:{NFSU2_TR(0x68eeac);
{SPILL();c.pc=0x68eeacu;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B68eeb0:{NFSU2_TR(0x68eeb0);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B68eeb4:{NFSU2_TR(0x68eeb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68eeb7:{NFSU2_TR(0x68eeb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68eebb:{NFSU2_TR(0x68eebb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68eebe:{NFSU2_TR(0x68eebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B68eec3:{NFSU2_TR(0x68eec3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68eec6:{NFSU2_TR(0x68eec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68eecbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ed18u);}goto L68ed18;}
}
B68eecb:L68eecb:{c.instructions+=6;NFSU2_TR(0x68eecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68eece:{NFSU2_TR(0x68eece);
w2(R+4260,0xffffu);
}
B68eed0:{NFSU2_TR(0x68eed0);
__builtin_memmove((R+16),(R+20),4);
}
B68eed2:{NFSU2_TR(0x68eed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B68eed6:{NFSU2_TR(0x68eed6);
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
B68eed9:{NFSU2_TR(0x68eed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68eedc:L68eedc:{c.instructions+=10;NFSU2_TR(0x68eedc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B68eedf:{NFSU2_TR(0x68eedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68eee3:{NFSU2_TR(0x68eee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68eee7:{NFSU2_TR(0x68eee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68eeeb:{NFSU2_TR(0x68eeeb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68eeef:{NFSU2_TR(0x68eeef);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B68eef3:{NFSU2_TR(0x68eef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68eef7:{NFSU2_TR(0x68eef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68eefb:{NFSU2_TR(0x68eefb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68eefe:{NFSU2_TR(0x68eefe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ef03ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ed18u);}goto L68ed18;}
}
B68ef03:L68ef03:{c.instructions+=10;NFSU2_TR(0x68ef03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B68ef06:{NFSU2_TR(0x68ef06);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ef0a:{NFSU2_TR(0x68ef0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68ef0e:{NFSU2_TR(0x68ef0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68ef12:{NFSU2_TR(0x68ef12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ef16:{NFSU2_TR(0x68ef16);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B68ef1a:{NFSU2_TR(0x68ef1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ef1e:{NFSU2_TR(0x68ef1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ef22:{NFSU2_TR(0x68ef22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68ef25:{NFSU2_TR(0x68ef25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ef2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ed18u);}goto L68ed18;}
}
B68ef2a:L68ef2a:{c.instructions+=14;NFSU2_TR(0x68ef2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B68ef2d:{NFSU2_TR(0x68ef2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B68ef32:{NFSU2_TR(0x68ef32);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ef36:{NFSU2_TR(0x68ef36);
__builtin_memmove((R+4368),(R+4352),8);
}
B68ef39:{NFSU2_TR(0x68ef39);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B68ef3d:{NFSU2_TR(0x68ef3d);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68ef41:{NFSU2_TR(0x68ef41);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B68ef45:{NFSU2_TR(0x68ef45);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68ef49:{NFSU2_TR(0x68ef49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B68ef4c:{NFSU2_TR(0x68ef4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ef50:{NFSU2_TR(0x68ef50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ef54:{NFSU2_TR(0x68ef54);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b7160))));}
}
B68ef5c:{NFSU2_TR(0x68ef5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B68ef61:{NFSU2_TR(0x68ef61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ef66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ed18u);}goto L68ed18;}
}
B68ef66:L68ef66:{c.instructions+=3;NFSU2_TR(0x68ef66);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68ef69:{NFSU2_TR(0x68ef69);
w2(R+4260,0xffffu);
}
B68ef6b:{NFSU2_TR(0x68ef6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ef6e:L68ef6e:{c.instructions+=25;NFSU2_TR(0x68ef6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68ef72:{NFSU2_TR(0x68ef72);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68ef75:{NFSU2_TR(0x68ef75);
__builtin_memmove((R+4368),(R+4352),8);
}
B68ef78:{NFSU2_TR(0x68ef78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68ef7c:{NFSU2_TR(0x68ef7c);
__builtin_memmove((R+4400),(R+4384),8);
}
B68ef7f:{NFSU2_TR(0x68ef7f);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68ef83:{NFSU2_TR(0x68ef83);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B68ef87:{NFSU2_TR(0x68ef87);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B68ef8b:{NFSU2_TR(0x68ef8b);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B68ef8f:{NFSU2_TR(0x68ef8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ef93:{NFSU2_TR(0x68ef93);
__builtin_memmove((R+4432),(R+4352),8);
}
B68ef96:{NFSU2_TR(0x68ef96);
{SPILL();c.pc=0x68ef96u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B68ef9a:{NFSU2_TR(0x68ef9a);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B68efa2:{NFSU2_TR(0x68efa2);
w8(R+4368,u64(u64(r8(R+4368))^u64(m8(0x7b7228))));
}
B68efa9:{NFSU2_TR(0x68efa9);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7170))));
}
B68efb0:{NFSU2_TR(0x68efb0);
{SPILL();c.pc=0x68efb0u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68efb4:{NFSU2_TR(0x68efb4);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B68efb7:{NFSU2_TR(0x68efb7);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B68efba:{NFSU2_TR(0x68efba);
{SPILL();c.pc=0x68efbau;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B68efbe:{NFSU2_TR(0x68efbe);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B68efc2:{NFSU2_TR(0x68efc2);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B68efc6:{NFSU2_TR(0x68efc6);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B68efc9:{NFSU2_TR(0x68efc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68efcd:{NFSU2_TR(0x68efcd);
w2(R+4260,0xffffu);
}
B68efcf:{NFSU2_TR(0x68efcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68efd2:L68efd2:{c.instructions+=13;NFSU2_TR(0x68efd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68efd5:{NFSU2_TR(0x68efd5);
w2(R+4260,0xffffu);
}
B68efd7:{NFSU2_TR(0x68efd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68efdb:{NFSU2_TR(0x68efdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68efdf:{NFSU2_TR(0x68efdf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B68efe2:{NFSU2_TR(0x68efe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B68efe6:{NFSU2_TR(0x68efe6);
__builtin_memmove((R+4400),(R+4384),8);
}
B68efe9:{NFSU2_TR(0x68efe9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B68efec:{NFSU2_TR(0x68efec);
__builtin_memmove((R+4352),(R+4400),8);
}
B68efef:{NFSU2_TR(0x68efef);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e0))));}
}
B68eff7:{NFSU2_TR(0x68eff7);
w4(R+4,u32(r8(R+4400)));
}
B68effa:{NFSU2_TR(0x68effa);
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
B68effc:{NFSU2_TR(0x68effc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x68f063u,68f);}
}
B68effe:L68effe:{c.instructions+=1;NFSU2_TR(0x68effe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68f003ull));
TAIL_STATIC(0x6d3e80u,6d3);
}
XIT:NFSU2_TR_EXIT(0x68e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
