#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c6(u8* __restrict R,Cpu& c);
u32 page_5c6(Cpu& c){return body_5c6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c6008:goto L5c6008;
case 0x5c600f:c.instructions+=6;goto B5c600f;
case 0x5c6016:c.instructions+=5;goto B5c6016;
case 0x5c6021:c.instructions+=4;goto B5c6021;
case 0x5c602c:c.instructions+=3;goto B5c602c;
case 0x5c6033:c.instructions+=2;goto B5c6033;
case 0x5c603a:c.instructions+=1;goto B5c603a;
case 0x5c603c:goto L5c603c;
case 0x5c6042:goto L5c6042;
case 0x5c6048:c.instructions+=5;goto B5c6048;
case 0x5c604f:c.instructions+=4;goto B5c604f;
case 0x5c6051:c.instructions+=3;goto B5c6051;
case 0x5c6055:c.instructions+=2;goto B5c6055;
case 0x5c605c:c.instructions+=1;goto B5c605c;
case 0x5c605e:goto L5c605e;
case 0x5c6064:goto L5c6064;
case 0x5c606a:c.instructions+=64;goto B5c606a;
case 0x5c6071:c.instructions+=63;goto B5c6071;
case 0x5c6073:c.instructions+=62;goto B5c6073;
case 0x5c6077:c.instructions+=61;goto B5c6077;
case 0x5c607b:c.instructions+=60;goto B5c607b;
case 0x5c607d:c.instructions+=59;goto B5c607d;
case 0x5c6081:c.instructions+=58;goto B5c6081;
case 0x5c6085:c.instructions+=57;goto B5c6085;
case 0x5c6087:c.instructions+=56;goto B5c6087;
case 0x5c608b:c.instructions+=55;goto B5c608b;
case 0x5c6091:c.instructions+=54;goto B5c6091;
case 0x5c6095:c.instructions+=53;goto B5c6095;
case 0x5c6099:c.instructions+=52;goto B5c6099;
case 0x5c609b:c.instructions+=51;goto B5c609b;
case 0x5c609f:c.instructions+=50;goto B5c609f;
case 0x5c60a6:c.instructions+=49;goto B5c60a6;
case 0x5c60ac:c.instructions+=48;goto B5c60ac;
case 0x5c60b0:c.instructions+=47;goto B5c60b0;
case 0x5c60b4:c.instructions+=46;goto B5c60b4;
case 0x5c60b8:c.instructions+=45;goto B5c60b8;
case 0x5c60bf:c.instructions+=44;goto B5c60bf;
case 0x5c60c1:c.instructions+=43;goto B5c60c1;
case 0x5c60c3:c.instructions+=42;goto B5c60c3;
case 0x5c60ca:c.instructions+=41;goto B5c60ca;
case 0x5c60d1:c.instructions+=40;goto B5c60d1;
case 0x5c60d8:c.instructions+=39;goto B5c60d8;
case 0x5c60df:c.instructions+=38;goto B5c60df;
case 0x5c60e1:c.instructions+=37;goto B5c60e1;
case 0x5c60e5:c.instructions+=36;goto B5c60e5;
case 0x5c60e7:c.instructions+=35;goto B5c60e7;
case 0x5c60eb:c.instructions+=34;goto B5c60eb;
case 0x5c60ed:c.instructions+=33;goto B5c60ed;
case 0x5c60f1:c.instructions+=32;goto B5c60f1;
case 0x5c60f3:c.instructions+=31;goto B5c60f3;
case 0x5c60f7:c.instructions+=30;goto B5c60f7;
case 0x5c60f9:c.instructions+=29;goto B5c60f9;
case 0x5c6100:c.instructions+=28;goto B5c6100;
case 0x5c6107:c.instructions+=27;goto B5c6107;
case 0x5c6109:c.instructions+=26;goto B5c6109;
case 0x5c6110:c.instructions+=25;goto B5c6110;
case 0x5c6117:c.instructions+=24;goto B5c6117;
case 0x5c6119:c.instructions+=23;goto B5c6119;
case 0x5c611d:c.instructions+=22;goto B5c611d;
case 0x5c611f:c.instructions+=21;goto B5c611f;
case 0x5c6123:c.instructions+=20;goto B5c6123;
case 0x5c6125:c.instructions+=19;goto B5c6125;
case 0x5c612c:c.instructions+=18;goto B5c612c;
case 0x5c612e:c.instructions+=17;goto B5c612e;
case 0x5c6135:c.instructions+=16;goto B5c6135;
case 0x5c6137:c.instructions+=15;goto B5c6137;
case 0x5c613e:c.instructions+=14;goto B5c613e;
case 0x5c6145:c.instructions+=13;goto B5c6145;
case 0x5c6147:c.instructions+=12;goto B5c6147;
case 0x5c614e:c.instructions+=11;goto B5c614e;
case 0x5c6155:c.instructions+=10;goto B5c6155;
case 0x5c6157:c.instructions+=9;goto B5c6157;
case 0x5c615b:c.instructions+=8;goto B5c615b;
case 0x5c615d:c.instructions+=7;goto B5c615d;
case 0x5c6161:c.instructions+=6;goto B5c6161;
case 0x5c6168:c.instructions+=5;goto B5c6168;
case 0x5c616a:c.instructions+=4;goto B5c616a;
case 0x5c6171:c.instructions+=3;goto B5c6171;
case 0x5c6178:c.instructions+=2;goto B5c6178;
case 0x5c617f:c.instructions+=1;goto B5c617f;
case 0x5c6181:goto L5c6181;
case 0x5c6187:c.instructions+=4;goto B5c6187;
case 0x5c618d:c.instructions+=3;goto B5c618d;
case 0x5c618f:c.instructions+=2;goto B5c618f;
case 0x5c6191:c.instructions+=1;goto B5c6191;
case 0x5c6194:goto L5c6194;
case 0x5c6197:c.instructions+=5;goto B5c6197;
case 0x5c619c:c.instructions+=4;goto B5c619c;
case 0x5c619e:c.instructions+=3;goto B5c619e;
case 0x5c619f:c.instructions+=2;goto B5c619f;
case 0x5c61a0:c.instructions+=1;goto B5c61a0;
case 0x5c61a6:goto L5c61a6;
case 0x5c61a9:c.instructions+=6;goto B5c61a9;
case 0x5c61ab:c.instructions+=5;goto B5c61ab;
case 0x5c61ac:c.instructions+=4;goto B5c61ac;
case 0x5c61b0:c.instructions+=3;goto B5c61b0;
case 0x5c61b1:c.instructions+=2;goto B5c61b1;
case 0x5c61b2:c.instructions+=1;goto B5c61b2;
case 0x5c61b8:goto L5c61b8;
case 0x5c61bb:c.instructions+=4;goto B5c61bb;
case 0x5c61bd:c.instructions+=3;goto B5c61bd;
case 0x5c61be:c.instructions+=2;goto B5c61be;
case 0x5c61bf:c.instructions+=1;goto B5c61bf;
case 0x5c61c5:goto L5c61c5;
case 0x5c61cc:c.instructions+=1;goto B5c61cc;
case 0x5c61ce:goto L5c61ce;
case 0x5c61d4:c.instructions+=4;goto B5c61d4;
case 0x5c61da:c.instructions+=3;goto B5c61da;
case 0x5c61dc:c.instructions+=2;goto B5c61dc;
case 0x5c61de:c.instructions+=1;goto B5c61de;
case 0x5c61e1:goto L5c61e1;
case 0x5c61e4:c.instructions+=5;goto B5c61e4;
case 0x5c61e9:c.instructions+=4;goto B5c61e9;
case 0x5c61eb:c.instructions+=3;goto B5c61eb;
case 0x5c61ec:c.instructions+=2;goto B5c61ec;
case 0x5c61ed:c.instructions+=1;goto B5c61ed;
case 0x5c61f3:goto L5c61f3;
case 0x5c61f6:c.instructions+=6;goto B5c61f6;
case 0x5c61f8:c.instructions+=5;goto B5c61f8;
case 0x5c61f9:c.instructions+=4;goto B5c61f9;
case 0x5c61fd:c.instructions+=3;goto B5c61fd;
case 0x5c61fe:c.instructions+=2;goto B5c61fe;
case 0x5c61ff:c.instructions+=1;goto B5c61ff;
case 0x5c6205:goto L5c6205;
case 0x5c620c:c.instructions+=6;goto B5c620c;
case 0x5c620f:c.instructions+=5;goto B5c620f;
case 0x5c6211:c.instructions+=4;goto B5c6211;
case 0x5c6214:c.instructions+=3;goto B5c6214;
case 0x5c6215:c.instructions+=2;goto B5c6215;
case 0x5c6216:c.instructions+=1;goto B5c6216;
case 0x5c621c:goto L5c621c;
case 0x5c6223:c.instructions+=7;goto B5c6223;
case 0x5c6225:c.instructions+=6;goto B5c6225;
case 0x5c6226:c.instructions+=5;goto B5c6226;
case 0x5c622d:c.instructions+=4;goto B5c622d;
case 0x5c622e:c.instructions+=3;goto B5c622e;
case 0x5c622f:c.instructions+=2;goto B5c622f;
case 0x5c6230:c.instructions+=1;goto B5c6230;
case 0x5c6233:goto L5c6233;
case 0x5c623a:c.instructions+=3;goto B5c623a;
case 0x5c6241:c.instructions+=2;goto B5c6241;
case 0x5c6243:c.instructions+=1;goto B5c6243;
case 0x5c6245:goto L5c6245;
case 0x5c624b:goto L5c624b;
case 0x5c6251:c.instructions+=5;goto B5c6251;
case 0x5c6258:c.instructions+=4;goto B5c6258;
case 0x5c625a:c.instructions+=3;goto B5c625a;
case 0x5c625e:c.instructions+=2;goto B5c625e;
case 0x5c6265:c.instructions+=1;goto B5c6265;
case 0x5c6267:goto L5c6267;
case 0x5c626d:goto L5c626d;
case 0x5c626f:c.instructions+=7;goto B5c626f;
case 0x5c6275:c.instructions+=6;goto B5c6275;
case 0x5c627d:c.instructions+=5;goto B5c627d;
case 0x5c6285:c.instructions+=4;goto B5c6285;
case 0x5c628d:c.instructions+=3;goto B5c628d;
case 0x5c6295:c.instructions+=2;goto B5c6295;
case 0x5c6299:c.instructions+=1;goto B5c6299;
case 0x5c629f:goto L5c629f;
case 0x5c62a6:c.instructions+=2;goto B5c62a6;
case 0x5c62ad:c.instructions+=1;goto B5c62ad;
case 0x5c62b0:goto L5c62b0;
case 0x5c62b3:c.instructions+=11;goto B5c62b3;
case 0x5c62b5:c.instructions+=10;goto B5c62b5;
case 0x5c62bc:c.instructions+=9;goto B5c62bc;
case 0x5c62bd:c.instructions+=8;goto B5c62bd;
case 0x5c62c1:c.instructions+=7;goto B5c62c1;
case 0x5c62c4:c.instructions+=6;goto B5c62c4;
case 0x5c62c7:c.instructions+=5;goto B5c62c7;
case 0x5c62cb:c.instructions+=4;goto B5c62cb;
case 0x5c62ce:c.instructions+=3;goto B5c62ce;
case 0x5c62cf:c.instructions+=2;goto B5c62cf;
case 0x5c62d0:c.instructions+=1;goto B5c62d0;
case 0x5c62d6:goto L5c62d6;
case 0x5c62da:c.instructions+=39;goto B5c62da;
case 0x5c62dd:c.instructions+=38;goto B5c62dd;
case 0x5c62e0:c.instructions+=37;goto B5c62e0;
case 0x5c62e2:c.instructions+=36;goto B5c62e2;
case 0x5c62e5:c.instructions+=35;goto B5c62e5;
case 0x5c62e7:c.instructions+=34;goto B5c62e7;
case 0x5c62ee:c.instructions+=33;goto B5c62ee;
case 0x5c62f2:c.instructions+=32;goto B5c62f2;
case 0x5c62f4:c.instructions+=31;goto B5c62f4;
case 0x5c62f7:c.instructions+=30;goto B5c62f7;
case 0x5c62fa:c.instructions+=29;goto B5c62fa;
case 0x5c62fe:c.instructions+=28;goto B5c62fe;
case 0x5c6301:c.instructions+=27;goto B5c6301;
case 0x5c6305:c.instructions+=26;goto B5c6305;
case 0x5c6306:c.instructions+=25;goto B5c6306;
case 0x5c6308:c.instructions+=24;goto B5c6308;
case 0x5c630b:c.instructions+=23;goto B5c630b;
case 0x5c630e:c.instructions+=22;goto B5c630e;
case 0x5c6310:c.instructions+=21;goto B5c6310;
case 0x5c6312:c.instructions+=20;goto B5c6312;
case 0x5c6316:c.instructions+=19;goto B5c6316;
case 0x5c631a:c.instructions+=18;goto B5c631a;
case 0x5c631c:c.instructions+=17;goto B5c631c;
case 0x5c6320:c.instructions+=16;goto B5c6320;
case 0x5c6324:c.instructions+=15;goto B5c6324;
case 0x5c6326:c.instructions+=14;goto B5c6326;
case 0x5c632a:c.instructions+=13;goto B5c632a;
case 0x5c632e:c.instructions+=12;goto B5c632e;
case 0x5c6330:c.instructions+=11;goto B5c6330;
case 0x5c6337:c.instructions+=10;goto B5c6337;
case 0x5c633e:c.instructions+=9;goto B5c633e;
case 0x5c6340:c.instructions+=8;goto B5c6340;
case 0x5c6347:c.instructions+=7;goto B5c6347;
case 0x5c634e:c.instructions+=6;goto B5c634e;
case 0x5c6350:c.instructions+=5;goto B5c6350;
case 0x5c6357:c.instructions+=4;goto B5c6357;
case 0x5c635e:c.instructions+=3;goto B5c635e;
case 0x5c6365:c.instructions+=2;goto B5c6365;
case 0x5c636c:c.instructions+=1;goto B5c636c;
case 0x5c6372:goto L5c6372;
case 0x5c6374:c.instructions+=1;goto B5c6374;
case 0x5c6376:goto L5c6376;
case 0x5c6379:c.instructions+=2;goto B5c6379;
case 0x5c637b:c.instructions+=1;goto B5c637b;
case 0x5c637d:goto L5c637d;
case 0x5c6380:c.instructions+=1;goto B5c6380;
case 0x5c6387:goto L5c6387;
case 0x5c638b:c.instructions+=9;goto B5c638b;
case 0x5c638e:c.instructions+=8;goto B5c638e;
case 0x5c6390:c.instructions+=7;goto B5c6390;
case 0x5c6391:c.instructions+=6;goto B5c6391;
case 0x5c6394:c.instructions+=5;goto B5c6394;
case 0x5c6397:c.instructions+=4;goto B5c6397;
case 0x5c639b:c.instructions+=3;goto B5c639b;
case 0x5c639c:c.instructions+=2;goto B5c639c;
case 0x5c639d:c.instructions+=1;goto B5c639d;
case 0x5c63a3:goto L5c63a3;
case 0x5c63a5:c.instructions+=8;goto B5c63a5;
case 0x5c63a8:c.instructions+=7;goto B5c63a8;
case 0x5c63aa:c.instructions+=6;goto B5c63aa;
case 0x5c63ad:c.instructions+=5;goto B5c63ad;
case 0x5c63b0:c.instructions+=4;goto B5c63b0;
case 0x5c63b1:c.instructions+=3;goto B5c63b1;
case 0x5c63b4:c.instructions+=2;goto B5c63b4;
case 0x5c63b7:c.instructions+=1;goto B5c63b7;
case 0x5c63b9:goto L5c63b9;
case 0x5c63bc:c.instructions+=9;goto B5c63bc;
case 0x5c63be:c.instructions+=8;goto B5c63be;
case 0x5c63c0:c.instructions+=7;goto B5c63c0;
case 0x5c63c7:c.instructions+=6;goto B5c63c7;
case 0x5c63c8:c.instructions+=5;goto B5c63c8;
case 0x5c63cb:c.instructions+=4;goto B5c63cb;
case 0x5c63d1:c.instructions+=3;goto B5c63d1;
case 0x5c63d2:c.instructions+=2;goto B5c63d2;
case 0x5c63d3:c.instructions+=1;goto B5c63d3;
case 0x5c63d9:goto L5c63d9;
case 0x5c63dd:c.instructions+=2;goto B5c63dd;
case 0x5c63de:c.instructions+=1;goto B5c63de;
case 0x5c63e0:goto L5c63e0;
case 0x5c63e3:c.instructions+=12;goto B5c63e3;
case 0x5c63e7:c.instructions+=11;goto B5c63e7;
case 0x5c63e8:c.instructions+=10;goto B5c63e8;
case 0x5c63eb:c.instructions+=9;goto B5c63eb;
case 0x5c63f3:c.instructions+=8;goto B5c63f3;
case 0x5c63fb:c.instructions+=7;goto B5c63fb;
case 0x5c6403:c.instructions+=6;goto B5c6403;
case 0x5c640b:c.instructions+=5;goto B5c640b;
case 0x5c6411:c.instructions+=4;goto B5c6411;
case 0x5c6413:c.instructions+=3;goto B5c6413;
case 0x5c6414:c.instructions+=2;goto B5c6414;
case 0x5c6415:c.instructions+=1;goto B5c6415;
case 0x5c641b:goto L5c641b;
case 0x5c6421:c.instructions+=11;goto B5c6421;
case 0x5c6424:c.instructions+=10;goto B5c6424;
case 0x5c6426:c.instructions+=9;goto B5c6426;
case 0x5c642c:c.instructions+=8;goto B5c642c;
case 0x5c642d:c.instructions+=7;goto B5c642d;
case 0x5c6430:c.instructions+=6;goto B5c6430;
case 0x5c6436:c.instructions+=5;goto B5c6436;
case 0x5c643c:c.instructions+=4;goto B5c643c;
case 0x5c643f:c.instructions+=3;goto B5c643f;
case 0x5c6440:c.instructions+=2;goto B5c6440;
case 0x5c6441:c.instructions+=1;goto B5c6441;
case 0x5c6444:goto L5c6444;
case 0x5c6446:c.instructions+=3;goto B5c6446;
case 0x5c6448:c.instructions+=2;goto B5c6448;
case 0x5c6449:c.instructions+=1;goto B5c6449;
case 0x5c644e:goto L5c644e;
case 0x5c6451:c.instructions+=1;goto B5c6451;
case 0x5c6456:goto L5c6456;
case 0x5c645c:c.instructions+=5;goto B5c645c;
case 0x5c6462:c.instructions+=4;goto B5c6462;
case 0x5c6465:c.instructions+=3;goto B5c6465;
case 0x5c6467:c.instructions+=2;goto B5c6467;
case 0x5c6468:c.instructions+=1;goto B5c6468;
case 0x5c646e:goto L5c646e;
case 0x5c6473:c.instructions+=8;goto B5c6473;
case 0x5c6475:c.instructions+=7;goto B5c6475;
case 0x5c6477:c.instructions+=6;goto B5c6477;
case 0x5c647b:c.instructions+=5;goto B5c647b;
case 0x5c647c:c.instructions+=4;goto B5c647c;
case 0x5c647e:c.instructions+=3;goto B5c647e;
case 0x5c6480:c.instructions+=2;goto B5c6480;
case 0x5c6481:c.instructions+=1;goto B5c6481;
case 0x5c6487:goto L5c6487;
case 0x5c648a:c.instructions+=3;goto B5c648a;
case 0x5c648c:c.instructions+=2;goto B5c648c;
case 0x5c648d:c.instructions+=1;goto B5c648d;
case 0x5c6493:goto L5c6493;
case 0x5c6495:c.instructions+=2;goto B5c6495;
case 0x5c6497:c.instructions+=1;goto B5c6497;
case 0x5c649a:goto L5c649a;
case 0x5c64a0:c.instructions+=1;goto B5c64a0;
case 0x5c64a5:goto L5c64a5;
case 0x5c64a8:c.instructions+=6;goto B5c64a8;
case 0x5c64ad:c.instructions+=5;goto B5c64ad;
case 0x5c64af:c.instructions+=4;goto B5c64af;
case 0x5c64b0:c.instructions+=3;goto B5c64b0;
case 0x5c64b1:c.instructions+=2;goto B5c64b1;
case 0x5c64b2:c.instructions+=1;goto B5c64b2;
case 0x5c64b8:goto L5c64b8;
case 0x5c64bb:c.instructions+=5;goto B5c64bb;
case 0x5c64c0:c.instructions+=4;goto B5c64c0;
case 0x5c64c2:c.instructions+=3;goto B5c64c2;
case 0x5c64c3:c.instructions+=2;goto B5c64c3;
case 0x5c64c4:c.instructions+=1;goto B5c64c4;
case 0x5c64ca:goto L5c64ca;
case 0x5c64cd:c.instructions+=13;goto B5c64cd;
case 0x5c64d0:c.instructions+=12;goto B5c64d0;
case 0x5c64d4:c.instructions+=11;goto B5c64d4;
case 0x5c64d8:c.instructions+=10;goto B5c64d8;
case 0x5c64dd:c.instructions+=9;goto B5c64dd;
case 0x5c64e1:c.instructions+=8;goto B5c64e1;
case 0x5c64e2:c.instructions+=7;goto B5c64e2;
case 0x5c64e6:c.instructions+=6;goto B5c64e6;
case 0x5c64ea:c.instructions+=5;goto B5c64ea;
case 0x5c64f2:c.instructions+=4;goto B5c64f2;
case 0x5c64fa:c.instructions+=3;goto B5c64fa;
case 0x5c64fc:c.instructions+=2;goto B5c64fc;
case 0x5c64fd:c.instructions+=1;goto B5c64fd;
case 0x5c6503:goto L5c6503;
case 0x5c6509:c.instructions+=6;goto B5c6509;
case 0x5c650a:c.instructions+=5;goto B5c650a;
case 0x5c6510:c.instructions+=4;goto B5c6510;
case 0x5c6511:c.instructions+=3;goto B5c6511;
case 0x5c6512:c.instructions+=2;goto B5c6512;
case 0x5c6518:c.instructions+=1;goto B5c6518;
case 0x5c6520:goto L5c6520;
case 0x5c6521:c.instructions+=10;goto B5c6521;
case 0x5c6523:c.instructions+=9;goto B5c6523;
case 0x5c6526:c.instructions+=8;goto B5c6526;
case 0x5c652c:c.instructions+=7;goto B5c652c;
case 0x5c652f:c.instructions+=6;goto B5c652f;
case 0x5c6530:c.instructions+=5;goto B5c6530;
case 0x5c6531:c.instructions+=4;goto B5c6531;
case 0x5c6532:c.instructions+=3;goto B5c6532;
case 0x5c6534:c.instructions+=2;goto B5c6534;
case 0x5c6536:c.instructions+=1;goto B5c6536;
case 0x5c6538:goto L5c6538;
case 0x5c653d:c.instructions+=5;goto B5c653d;
case 0x5c653f:c.instructions+=4;goto B5c653f;
case 0x5c6540:c.instructions+=3;goto B5c6540;
case 0x5c6541:c.instructions+=2;goto B5c6541;
case 0x5c6542:c.instructions+=1;goto B5c6542;
case 0x5c6548:goto L5c6548;
case 0x5c654d:c.instructions+=4;goto B5c654d;
case 0x5c654f:c.instructions+=3;goto B5c654f;
case 0x5c6550:c.instructions+=2;goto B5c6550;
case 0x5c6551:c.instructions+=1;goto B5c6551;
case 0x5c6557:goto L5c6557;
case 0x5c655d:c.instructions+=46;goto B5c655d;
case 0x5c6560:c.instructions+=45;goto B5c6560;
case 0x5c6567:c.instructions+=44;goto B5c6567;
case 0x5c656c:c.instructions+=43;goto B5c656c;
case 0x5c6572:c.instructions+=42;goto B5c6572;
case 0x5c657a:c.instructions+=41;goto B5c657a;
case 0x5c6582:c.instructions+=40;goto B5c6582;
case 0x5c658a:c.instructions+=39;goto B5c658a;
case 0x5c658e:c.instructions+=38;goto B5c658e;
case 0x5c6596:c.instructions+=37;goto B5c6596;
case 0x5c659e:c.instructions+=36;goto B5c659e;
case 0x5c65a6:c.instructions+=35;goto B5c65a6;
case 0x5c65aa:c.instructions+=34;goto B5c65aa;
case 0x5c65b2:c.instructions+=33;goto B5c65b2;
case 0x5c65ba:c.instructions+=32;goto B5c65ba;
case 0x5c65c2:c.instructions+=31;goto B5c65c2;
case 0x5c65c6:c.instructions+=30;goto B5c65c6;
case 0x5c65ce:c.instructions+=29;goto B5c65ce;
case 0x5c65d6:c.instructions+=28;goto B5c65d6;
case 0x5c65e1:c.instructions+=27;goto B5c65e1;
case 0x5c65e8:c.instructions+=26;goto B5c65e8;
case 0x5c65ee:c.instructions+=25;goto B5c65ee;
case 0x5c65f0:c.instructions+=24;goto B5c65f0;
case 0x5c65f4:c.instructions+=23;goto B5c65f4;
case 0x5c65fa:c.instructions+=22;goto B5c65fa;
case 0x5c6600:c.instructions+=21;goto B5c6600;
case 0x5c6604:c.instructions+=20;goto B5c6604;
case 0x5c6608:c.instructions+=19;goto B5c6608;
case 0x5c660a:c.instructions+=18;goto B5c660a;
case 0x5c660e:c.instructions+=17;goto B5c660e;
case 0x5c6612:c.instructions+=16;goto B5c6612;
case 0x5c6614:c.instructions+=15;goto B5c6614;
case 0x5c6618:c.instructions+=14;goto B5c6618;
case 0x5c661e:c.instructions+=13;goto B5c661e;
case 0x5c6622:c.instructions+=12;goto B5c6622;
case 0x5c6626:c.instructions+=11;goto B5c6626;
case 0x5c6628:c.instructions+=10;goto B5c6628;
case 0x5c662c:c.instructions+=9;goto B5c662c;
case 0x5c6630:c.instructions+=8;goto B5c6630;
case 0x5c6636:c.instructions+=7;goto B5c6636;
case 0x5c663a:c.instructions+=6;goto B5c663a;
case 0x5c663e:c.instructions+=5;goto B5c663e;
case 0x5c6640:c.instructions+=4;goto B5c6640;
case 0x5c6647:c.instructions+=3;goto B5c6647;
case 0x5c664e:c.instructions+=2;goto B5c664e;
case 0x5c6650:c.instructions+=1;goto B5c6650;
case 0x5c6653:goto L5c6653;
case 0x5c6656:c.instructions+=5;goto B5c6656;
case 0x5c665b:c.instructions+=4;goto B5c665b;
case 0x5c665d:c.instructions+=3;goto B5c665d;
case 0x5c665e:c.instructions+=2;goto B5c665e;
case 0x5c665f:c.instructions+=1;goto B5c665f;
case 0x5c6665:goto L5c6665;
case 0x5c6668:c.instructions+=6;goto B5c6668;
case 0x5c666a:c.instructions+=5;goto B5c666a;
case 0x5c666b:c.instructions+=4;goto B5c666b;
case 0x5c666f:c.instructions+=3;goto B5c666f;
case 0x5c6670:c.instructions+=2;goto B5c6670;
case 0x5c6671:c.instructions+=1;goto B5c6671;
case 0x5c6677:goto L5c6677;
case 0x5c667a:c.instructions+=8;goto B5c667a;
case 0x5c667d:c.instructions+=7;goto B5c667d;
case 0x5c667f:c.instructions+=6;goto B5c667f;
case 0x5c6680:c.instructions+=5;goto B5c6680;
case 0x5c6683:c.instructions+=4;goto B5c6683;
case 0x5c6689:c.instructions+=3;goto B5c6689;
case 0x5c668a:c.instructions+=2;goto B5c668a;
case 0x5c668b:c.instructions+=1;goto B5c668b;
case 0x5c6691:goto L5c6691;
case 0x5c6694:c.instructions+=1;goto B5c6694;
case 0x5c669a:goto L5c669a;
case 0x5c66a0:c.instructions+=8;goto B5c66a0;
case 0x5c66a3:c.instructions+=7;goto B5c66a3;
case 0x5c66a5:c.instructions+=6;goto B5c66a5;
case 0x5c66a6:c.instructions+=5;goto B5c66a6;
case 0x5c66a9:c.instructions+=4;goto B5c66a9;
case 0x5c66af:c.instructions+=3;goto B5c66af;
case 0x5c66b0:c.instructions+=2;goto B5c66b0;
case 0x5c66b1:c.instructions+=1;goto B5c66b1;
case 0x5c66b7:goto L5c66b7;
case 0x5c66bd:c.instructions+=8;goto B5c66bd;
case 0x5c66c0:c.instructions+=7;goto B5c66c0;
case 0x5c66c2:c.instructions+=6;goto B5c66c2;
case 0x5c66c3:c.instructions+=5;goto B5c66c3;
case 0x5c66c6:c.instructions+=4;goto B5c66c6;
case 0x5c66cc:c.instructions+=3;goto B5c66cc;
case 0x5c66cd:c.instructions+=2;goto B5c66cd;
case 0x5c66ce:c.instructions+=1;goto B5c66ce;
case 0x5c66d4:goto L5c66d4;
case 0x5c66da:c.instructions+=19;goto B5c66da;
case 0x5c66e0:c.instructions+=18;goto B5c66e0;
case 0x5c66e6:c.instructions+=17;goto B5c66e6;
case 0x5c66eb:c.instructions+=16;goto B5c66eb;
case 0x5c66ec:c.instructions+=15;goto B5c66ec;
case 0x5c66ef:c.instructions+=14;goto B5c66ef;
case 0x5c66f3:c.instructions+=13;goto B5c66f3;
case 0x5c66f9:c.instructions+=12;goto B5c66f9;
case 0x5c66fd:c.instructions+=11;goto B5c66fd;
case 0x5c6703:c.instructions+=10;goto B5c6703;
case 0x5c6706:c.instructions+=9;goto B5c6706;
case 0x5c670a:c.instructions+=8;goto B5c670a;
case 0x5c6710:c.instructions+=7;goto B5c6710;
case 0x5c6716:c.instructions+=6;goto B5c6716;
case 0x5c671a:c.instructions+=5;goto B5c671a;
case 0x5c6720:c.instructions+=4;goto B5c6720;
case 0x5c6722:c.instructions+=3;goto B5c6722;
case 0x5c6723:c.instructions+=2;goto B5c6723;
case 0x5c6724:c.instructions+=1;goto B5c6724;
case 0x5c6727:goto L5c6727;
case 0x5c672d:c.instructions+=8;goto B5c672d;
case 0x5c6730:c.instructions+=7;goto B5c6730;
case 0x5c6732:c.instructions+=6;goto B5c6732;
case 0x5c6733:c.instructions+=5;goto B5c6733;
case 0x5c6736:c.instructions+=4;goto B5c6736;
case 0x5c673c:c.instructions+=3;goto B5c673c;
case 0x5c673d:c.instructions+=2;goto B5c673d;
case 0x5c673e:c.instructions+=1;goto B5c673e;
case 0x5c6741:goto L5c6741;
case 0x5c6744:c.instructions+=8;goto B5c6744;
case 0x5c6746:c.instructions+=7;goto B5c6746;
case 0x5c674a:c.instructions+=6;goto B5c674a;
case 0x5c674b:c.instructions+=5;goto B5c674b;
case 0x5c674e:c.instructions+=4;goto B5c674e;
case 0x5c6754:c.instructions+=3;goto B5c6754;
case 0x5c6755:c.instructions+=2;goto B5c6755;
case 0x5c6756:c.instructions+=1;goto B5c6756;
case 0x5c675c:goto L5c675c;
case 0x5c675e:goto L5c675e;
case 0x5c6760:c.instructions+=1;goto B5c6760;
case 0x5c6762:goto L5c6762;
case 0x5c6769:c.instructions+=2;goto B5c6769;
case 0x5c676a:c.instructions+=1;goto B5c676a;
case 0x5c676f:goto L5c676f;
case 0x5c6775:c.instructions+=3;goto B5c6775;
case 0x5c6778:c.instructions+=2;goto B5c6778;
case 0x5c6779:c.instructions+=1;goto B5c6779;
case 0x5c677e:goto L5c677e;
case 0x5c6780:c.instructions+=3;goto B5c6780;
case 0x5c6781:c.instructions+=2;goto B5c6781;
case 0x5c6785:c.instructions+=1;goto B5c6785;
case 0x5c678a:goto L5c678a;
case 0x5c678d:c.instructions+=2;goto B5c678d;
case 0x5c678e:c.instructions+=1;goto B5c678e;
case 0x5c6793:goto L5c6793;
case 0x5c6796:c.instructions+=6;goto B5c6796;
case 0x5c6799:c.instructions+=5;goto B5c6799;
case 0x5c679a:c.instructions+=4;goto B5c679a;
case 0x5c679b:c.instructions+=3;goto B5c679b;
case 0x5c67a1:c.instructions+=2;goto B5c67a1;
case 0x5c67a2:c.instructions+=1;goto B5c67a2;
case 0x5c67a7:goto L5c67a7;
case 0x5c67ab:c.instructions+=6;goto B5c67ab;
case 0x5c67b5:c.instructions+=5;goto B5c67b5;
case 0x5c67b8:c.instructions+=4;goto B5c67b8;
case 0x5c67b9:c.instructions+=3;goto B5c67b9;
case 0x5c67c0:c.instructions+=2;goto B5c67c0;
case 0x5c67c1:c.instructions+=1;goto B5c67c1;
case 0x5c67c6:goto L5c67c6;
case 0x5c67c9:goto L5c67c9;
case 0x5c67cc:c.instructions+=6;goto B5c67cc;
case 0x5c67cf:c.instructions+=5;goto B5c67cf;
case 0x5c67d2:c.instructions+=4;goto B5c67d2;
case 0x5c67d3:c.instructions+=3;goto B5c67d3;
case 0x5c67d4:c.instructions+=2;goto B5c67d4;
case 0x5c67d5:c.instructions+=1;goto B5c67d5;
case 0x5c67da:goto L5c67da;
case 0x5c67db:c.instructions+=2;goto B5c67db;
case 0x5c67dc:c.instructions+=1;goto B5c67dc;
case 0x5c67e1:goto L5c67e1;
case 0x5c67e4:c.instructions+=1;goto B5c67e4;
case 0x5c67e9:goto L5c67e9;
case 0x5c67ec:c.instructions+=6;goto B5c67ec;
case 0x5c67f2:c.instructions+=5;goto B5c67f2;
case 0x5c67f5:c.instructions+=4;goto B5c67f5;
case 0x5c67f7:c.instructions+=3;goto B5c67f7;
case 0x5c67f8:c.instructions+=2;goto B5c67f8;
case 0x5c67f9:c.instructions+=1;goto B5c67f9;
case 0x5c67ff:goto L5c67ff;
case 0x5c6804:c.instructions+=4;goto B5c6804;
case 0x5c6807:c.instructions+=3;goto B5c6807;
case 0x5c6809:c.instructions+=2;goto B5c6809;
case 0x5c680a:c.instructions+=1;goto B5c680a;
case 0x5c6810:goto L5c6810;
case 0x5c6815:c.instructions+=8;goto B5c6815;
case 0x5c6817:c.instructions+=7;goto B5c6817;
case 0x5c6819:c.instructions+=6;goto B5c6819;
case 0x5c681d:c.instructions+=5;goto B5c681d;
case 0x5c681e:c.instructions+=4;goto B5c681e;
case 0x5c6820:c.instructions+=3;goto B5c6820;
case 0x5c6822:c.instructions+=2;goto B5c6822;
case 0x5c6823:c.instructions+=1;goto B5c6823;
case 0x5c6829:goto L5c6829;
case 0x5c682c:c.instructions+=3;goto B5c682c;
case 0x5c682e:c.instructions+=2;goto B5c682e;
case 0x5c682f:c.instructions+=1;goto B5c682f;
case 0x5c6835:goto L5c6835;
case 0x5c6837:c.instructions+=2;goto B5c6837;
case 0x5c6839:c.instructions+=1;goto B5c6839;
case 0x5c683c:goto L5c683c;
case 0x5c683f:c.instructions+=3;goto B5c683f;
case 0x5c6841:c.instructions+=2;goto B5c6841;
case 0x5c6842:c.instructions+=1;goto B5c6842;
case 0x5c6848:goto L5c6848;
case 0x5c684e:c.instructions+=2;goto B5c684e;
case 0x5c6854:c.instructions+=1;goto B5c6854;
case 0x5c6859:goto L5c6859;
case 0x5c685c:c.instructions+=6;goto B5c685c;
case 0x5c6861:c.instructions+=5;goto B5c6861;
case 0x5c6863:c.instructions+=4;goto B5c6863;
case 0x5c6864:c.instructions+=3;goto B5c6864;
case 0x5c6865:c.instructions+=2;goto B5c6865;
case 0x5c6866:c.instructions+=1;goto B5c6866;
case 0x5c686c:goto L5c686c;
case 0x5c686f:c.instructions+=5;goto B5c686f;
case 0x5c6874:c.instructions+=4;goto B5c6874;
case 0x5c6876:c.instructions+=3;goto B5c6876;
case 0x5c6877:c.instructions+=2;goto B5c6877;
case 0x5c6878:c.instructions+=1;goto B5c6878;
case 0x5c687e:goto L5c687e;
case 0x5c6881:c.instructions+=13;goto B5c6881;
case 0x5c6884:c.instructions+=12;goto B5c6884;
case 0x5c6888:c.instructions+=11;goto B5c6888;
case 0x5c688c:c.instructions+=10;goto B5c688c;
case 0x5c6891:c.instructions+=9;goto B5c6891;
case 0x5c6895:c.instructions+=8;goto B5c6895;
case 0x5c6896:c.instructions+=7;goto B5c6896;
case 0x5c689a:c.instructions+=6;goto B5c689a;
case 0x5c689e:c.instructions+=5;goto B5c689e;
case 0x5c68a6:c.instructions+=4;goto B5c68a6;
case 0x5c68ae:c.instructions+=3;goto B5c68ae;
case 0x5c68b0:c.instructions+=2;goto B5c68b0;
case 0x5c68b1:c.instructions+=1;goto B5c68b1;
case 0x5c68b7:goto L5c68b7;
case 0x5c68bd:c.instructions+=7;goto B5c68bd;
case 0x5c68be:c.instructions+=6;goto B5c68be;
case 0x5c68c4:c.instructions+=5;goto B5c68c4;
case 0x5c68c5:c.instructions+=4;goto B5c68c5;
case 0x5c68c6:c.instructions+=3;goto B5c68c6;
case 0x5c68c8:c.instructions+=2;goto B5c68c8;
case 0x5c68c9:c.instructions+=1;goto B5c68c9;
case 0x5c68d0:goto L5c68d0;
case 0x5c68d6:c.instructions+=28;goto B5c68d6;
case 0x5c68da:c.instructions+=27;goto B5c68da;
case 0x5c68e0:c.instructions+=26;goto B5c68e0;
case 0x5c68e5:c.instructions+=25;goto B5c68e5;
case 0x5c68ec:c.instructions+=24;goto B5c68ec;
case 0x5c68f0:c.instructions+=23;goto B5c68f0;
case 0x5c68f6:c.instructions+=22;goto B5c68f6;
case 0x5c68fc:c.instructions+=21;goto B5c68fc;
case 0x5c6902:c.instructions+=20;goto B5c6902;
case 0x5c6908:c.instructions+=19;goto B5c6908;
case 0x5c690c:c.instructions+=18;goto B5c690c;
case 0x5c6912:c.instructions+=17;goto B5c6912;
case 0x5c6918:c.instructions+=16;goto B5c6918;
case 0x5c691e:c.instructions+=15;goto B5c691e;
case 0x5c6924:c.instructions+=14;goto B5c6924;
case 0x5c6928:c.instructions+=13;goto B5c6928;
case 0x5c692e:c.instructions+=12;goto B5c692e;
case 0x5c6934:c.instructions+=11;goto B5c6934;
case 0x5c693a:c.instructions+=10;goto B5c693a;
case 0x5c6940:c.instructions+=9;goto B5c6940;
case 0x5c6944:c.instructions+=8;goto B5c6944;
case 0x5c694a:c.instructions+=7;goto B5c694a;
case 0x5c6950:c.instructions+=6;goto B5c6950;
case 0x5c6956:c.instructions+=5;goto B5c6956;
case 0x5c695c:c.instructions+=4;goto B5c695c;
case 0x5c6960:c.instructions+=3;goto B5c6960;
case 0x5c6966:c.instructions+=2;goto B5c6966;
case 0x5c696c:c.instructions+=1;goto B5c696c;
case 0x5c696e:goto L5c696e;
case 0x5c6973:c.instructions+=4;goto B5c6973;
case 0x5c6979:c.instructions+=3;goto B5c6979;
case 0x5c697c:c.instructions+=2;goto B5c697c;
case 0x5c6981:c.instructions+=1;goto B5c6981;
case 0x5c6987:goto L5c6987;
case 0x5c698d:c.instructions+=3;goto B5c698d;
case 0x5c698f:c.instructions+=2;goto B5c698f;
case 0x5c6992:c.instructions+=1;goto B5c6992;
case 0x5c6994:goto L5c6994;
case 0x5c699a:c.instructions+=4;goto B5c699a;
case 0x5c69a0:c.instructions+=3;goto B5c69a0;
case 0x5c69a2:c.instructions+=2;goto B5c69a2;
case 0x5c69a5:c.instructions+=1;goto B5c69a5;
case 0x5c69a7:goto L5c69a7;
case 0x5c69ad:c.instructions+=4;goto B5c69ad;
case 0x5c69b3:c.instructions+=3;goto B5c69b3;
case 0x5c69b5:c.instructions+=2;goto B5c69b5;
case 0x5c69b8:c.instructions+=1;goto B5c69b8;
case 0x5c69ba:goto L5c69ba;
case 0x5c69c0:c.instructions+=4;goto B5c69c0;
case 0x5c69c6:c.instructions+=3;goto B5c69c6;
case 0x5c69c8:c.instructions+=2;goto B5c69c8;
case 0x5c69cb:c.instructions+=1;goto B5c69cb;
case 0x5c69cd:goto L5c69cd;
case 0x5c69d3:c.instructions+=4;goto B5c69d3;
case 0x5c69d9:c.instructions+=3;goto B5c69d9;
case 0x5c69db:c.instructions+=2;goto B5c69db;
case 0x5c69de:c.instructions+=1;goto B5c69de;
case 0x5c69e0:goto L5c69e0;
case 0x5c69e6:c.instructions+=4;goto B5c69e6;
case 0x5c69ec:c.instructions+=3;goto B5c69ec;
case 0x5c69ee:c.instructions+=2;goto B5c69ee;
case 0x5c69f1:c.instructions+=1;goto B5c69f1;
case 0x5c69f3:goto L5c69f3;
case 0x5c69f8:c.instructions+=2;goto B5c69f8;
case 0x5c69fa:c.instructions+=1;goto B5c69fa;
case 0x5c69fc:goto L5c69fc;
case 0x5c6a02:c.instructions+=2;goto B5c6a02;
case 0x5c6a08:c.instructions+=1;goto B5c6a08;
case 0x5c6a0d:goto L5c6a0d;
case 0x5c6a17:goto L5c6a17;
case 0x5c6a1c:c.instructions+=6;goto B5c6a1c;
case 0x5c6a1e:c.instructions+=5;goto B5c6a1e;
case 0x5c6a1f:c.instructions+=4;goto B5c6a1f;
case 0x5c6a21:c.instructions+=3;goto B5c6a21;
case 0x5c6a26:c.instructions+=2;goto B5c6a26;
case 0x5c6a27:c.instructions+=1;goto B5c6a27;
case 0x5c6a2d:goto L5c6a2d;
case 0x5c6a31:c.instructions+=4;goto B5c6a31;
case 0x5c6a33:c.instructions+=3;goto B5c6a33;
case 0x5c6a38:c.instructions+=2;goto B5c6a38;
case 0x5c6a3b:c.instructions+=1;goto B5c6a3b;
case 0x5c6a41:goto L5c6a41;
case 0x5c6a47:c.instructions+=1;goto B5c6a47;
case 0x5c6a49:goto L5c6a49;
case 0x5c6a4a:c.instructions+=2;goto B5c6a4a;
case 0x5c6a4d:c.instructions+=1;goto B5c6a4d;
case 0x5c6a4e:goto L5c6a4e;
case 0x5c6a54:c.instructions+=8;goto B5c6a54;
case 0x5c6a57:c.instructions+=7;goto B5c6a57;
case 0x5c6a59:c.instructions+=6;goto B5c6a59;
case 0x5c6a5b:c.instructions+=5;goto B5c6a5b;
case 0x5c6a5d:c.instructions+=4;goto B5c6a5d;
case 0x5c6a5f:c.instructions+=3;goto B5c6a5f;
case 0x5c6a61:c.instructions+=2;goto B5c6a61;
case 0x5c6a63:c.instructions+=1;goto B5c6a63;
case 0x5c6a65:goto L5c6a65;
case 0x5c6a6c:c.instructions+=4;goto B5c6a6c;
case 0x5c6a73:c.instructions+=3;goto B5c6a73;
case 0x5c6a74:c.instructions+=2;goto B5c6a74;
case 0x5c6a75:c.instructions+=1;goto B5c6a75;
case 0x5c6a7a:goto L5c6a7a;
case 0x5c6a81:c.instructions+=10;goto B5c6a81;
case 0x5c6a86:c.instructions+=9;goto B5c6a86;
case 0x5c6a8d:c.instructions+=8;goto B5c6a8d;
case 0x5c6a8f:c.instructions+=7;goto B5c6a8f;
case 0x5c6a91:c.instructions+=6;goto B5c6a91;
case 0x5c6a93:c.instructions+=5;goto B5c6a93;
case 0x5c6a95:c.instructions+=4;goto B5c6a95;
case 0x5c6a97:c.instructions+=3;goto B5c6a97;
case 0x5c6a98:c.instructions+=2;goto B5c6a98;
case 0x5c6a99:c.instructions+=1;goto B5c6a99;
case 0x5c6a9e:goto L5c6a9e;
case 0x5c6aa4:c.instructions+=10;goto B5c6aa4;
case 0x5c6aab:c.instructions+=9;goto B5c6aab;
case 0x5c6ab1:c.instructions+=8;goto B5c6ab1;
case 0x5c6ab3:c.instructions+=7;goto B5c6ab3;
case 0x5c6ab5:c.instructions+=6;goto B5c6ab5;
case 0x5c6ab7:c.instructions+=5;goto B5c6ab7;
case 0x5c6ab9:c.instructions+=4;goto B5c6ab9;
case 0x5c6abb:c.instructions+=3;goto B5c6abb;
case 0x5c6abc:c.instructions+=2;goto B5c6abc;
case 0x5c6abd:c.instructions+=1;goto B5c6abd;
case 0x5c6ac2:goto L5c6ac2;
case 0x5c6ac5:c.instructions+=3;goto B5c6ac5;
case 0x5c6acf:c.instructions+=2;goto B5c6acf;
case 0x5c6ad0:c.instructions+=1;goto B5c6ad0;
case 0x5c6ad1:goto L5c6ad1;
case 0x5c6ad8:c.instructions+=4;goto B5c6ad8;
case 0x5c6adf:c.instructions+=3;goto B5c6adf;
case 0x5c6ae0:c.instructions+=2;goto B5c6ae0;
case 0x5c6ae1:c.instructions+=1;goto B5c6ae1;
case 0x5c6ae6:goto L5c6ae6;
case 0x5c6aed:c.instructions+=9;goto B5c6aed;
case 0x5c6af3:c.instructions+=8;goto B5c6af3;
case 0x5c6af5:c.instructions+=7;goto B5c6af5;
case 0x5c6af7:c.instructions+=6;goto B5c6af7;
case 0x5c6af9:c.instructions+=5;goto B5c6af9;
case 0x5c6afb:c.instructions+=4;goto B5c6afb;
case 0x5c6afd:c.instructions+=3;goto B5c6afd;
case 0x5c6afe:c.instructions+=2;goto B5c6afe;
case 0x5c6aff:c.instructions+=1;goto B5c6aff;
case 0x5c6b04:goto L5c6b04;
case 0x5c6b07:c.instructions+=3;goto B5c6b07;
case 0x5c6b11:c.instructions+=2;goto B5c6b11;
case 0x5c6b12:c.instructions+=1;goto B5c6b12;
case 0x5c6b13:goto L5c6b13;
case 0x5c6b19:c.instructions+=1;goto B5c6b19;
case 0x5c6b1b:goto L5c6b1b;
case 0x5c6b1c:c.instructions+=2;goto B5c6b1c;
case 0x5c6b1f:c.instructions+=1;goto B5c6b1f;
case 0x5c6b20:goto L5c6b20;
case 0x5c6b26:c.instructions+=8;goto B5c6b26;
case 0x5c6b29:c.instructions+=7;goto B5c6b29;
case 0x5c6b2b:c.instructions+=6;goto B5c6b2b;
case 0x5c6b2d:c.instructions+=5;goto B5c6b2d;
case 0x5c6b2f:c.instructions+=4;goto B5c6b2f;
case 0x5c6b31:c.instructions+=3;goto B5c6b31;
case 0x5c6b33:c.instructions+=2;goto B5c6b33;
case 0x5c6b35:c.instructions+=1;goto B5c6b35;
case 0x5c6b37:goto L5c6b37;
case 0x5c6b3e:c.instructions+=4;goto B5c6b3e;
case 0x5c6b45:c.instructions+=3;goto B5c6b45;
case 0x5c6b46:c.instructions+=2;goto B5c6b46;
case 0x5c6b47:c.instructions+=1;goto B5c6b47;
case 0x5c6b4c:goto L5c6b4c;
case 0x5c6b53:c.instructions+=10;goto B5c6b53;
case 0x5c6b59:c.instructions+=9;goto B5c6b59;
case 0x5c6b60:c.instructions+=8;goto B5c6b60;
case 0x5c6b62:c.instructions+=7;goto B5c6b62;
case 0x5c6b64:c.instructions+=6;goto B5c6b64;
case 0x5c6b66:c.instructions+=5;goto B5c6b66;
case 0x5c6b68:c.instructions+=4;goto B5c6b68;
case 0x5c6b6a:c.instructions+=3;goto B5c6b6a;
case 0x5c6b6b:c.instructions+=2;goto B5c6b6b;
case 0x5c6b6c:c.instructions+=1;goto B5c6b6c;
case 0x5c6b71:goto L5c6b71;
case 0x5c6b77:c.instructions+=10;goto B5c6b77;
case 0x5c6b7e:c.instructions+=9;goto B5c6b7e;
case 0x5c6b85:c.instructions+=8;goto B5c6b85;
case 0x5c6b87:c.instructions+=7;goto B5c6b87;
case 0x5c6b89:c.instructions+=6;goto B5c6b89;
case 0x5c6b8b:c.instructions+=5;goto B5c6b8b;
case 0x5c6b8d:c.instructions+=4;goto B5c6b8d;
case 0x5c6b8f:c.instructions+=3;goto B5c6b8f;
case 0x5c6b90:c.instructions+=2;goto B5c6b90;
case 0x5c6b91:c.instructions+=1;goto B5c6b91;
case 0x5c6b96:goto L5c6b96;
case 0x5c6b99:c.instructions+=3;goto B5c6b99;
case 0x5c6b9f:c.instructions+=2;goto B5c6b9f;
case 0x5c6ba0:c.instructions+=1;goto B5c6ba0;
case 0x5c6ba1:goto L5c6ba1;
case 0x5c6ba8:c.instructions+=4;goto B5c6ba8;
case 0x5c6baf:c.instructions+=3;goto B5c6baf;
case 0x5c6bb0:c.instructions+=2;goto B5c6bb0;
case 0x5c6bb1:c.instructions+=1;goto B5c6bb1;
case 0x5c6bb6:goto L5c6bb6;
case 0x5c6bbd:c.instructions+=10;goto B5c6bbd;
case 0x5c6bc3:c.instructions+=9;goto B5c6bc3;
case 0x5c6bca:c.instructions+=8;goto B5c6bca;
case 0x5c6bcc:c.instructions+=7;goto B5c6bcc;
case 0x5c6bce:c.instructions+=6;goto B5c6bce;
case 0x5c6bd0:c.instructions+=5;goto B5c6bd0;
case 0x5c6bd2:c.instructions+=4;goto B5c6bd2;
case 0x5c6bd4:c.instructions+=3;goto B5c6bd4;
case 0x5c6bd5:c.instructions+=2;goto B5c6bd5;
case 0x5c6bd6:c.instructions+=1;goto B5c6bd6;
case 0x5c6bdb:goto L5c6bdb;
case 0x5c6bde:c.instructions+=2;goto B5c6bde;
case 0x5c6bdf:c.instructions+=1;goto B5c6bdf;
case 0x5c6be0:goto L5c6be0;
case 0x5c6be6:c.instructions+=8;goto B5c6be6;
case 0x5c6be7:c.instructions+=7;goto B5c6be7;
case 0x5c6be8:c.instructions+=6;goto B5c6be8;
case 0x5c6bef:c.instructions+=5;goto B5c6bef;
case 0x5c6bf1:c.instructions+=4;goto B5c6bf1;
case 0x5c6bf8:c.instructions+=3;goto B5c6bf8;
case 0x5c6bf9:c.instructions+=2;goto B5c6bf9;
case 0x5c6bfa:c.instructions+=1;goto B5c6bfa;
case 0x5c6bfd:goto L5c6bfd;
case 0x5c6c02:c.instructions+=6;goto B5c6c02;
case 0x5c6c04:c.instructions+=5;goto B5c6c04;
case 0x5c6c05:c.instructions+=4;goto B5c6c05;
case 0x5c6c07:c.instructions+=3;goto B5c6c07;
case 0x5c6c08:c.instructions+=2;goto B5c6c08;
case 0x5c6c09:c.instructions+=1;goto B5c6c09;
case 0x5c6c0f:goto L5c6c0f;
case 0x5c6c15:c.instructions+=1;goto B5c6c15;
case 0x5c6c17:goto L5c6c17;
case 0x5c6c1c:c.instructions+=4;goto B5c6c1c;
case 0x5c6c1e:c.instructions+=3;goto B5c6c1e;
case 0x5c6c1f:c.instructions+=2;goto B5c6c1f;
case 0x5c6c20:c.instructions+=1;goto B5c6c20;
case 0x5c6c26:goto L5c6c26;
case 0x5c6c2d:c.instructions+=22;goto B5c6c2d;
case 0x5c6c34:c.instructions+=21;goto B5c6c34;
case 0x5c6c3b:c.instructions+=20;goto B5c6c3b;
case 0x5c6c3d:c.instructions+=19;goto B5c6c3d;
case 0x5c6c3e:c.instructions+=18;goto B5c6c3e;
case 0x5c6c3f:c.instructions+=17;goto B5c6c3f;
case 0x5c6c47:c.instructions+=16;goto B5c6c47;
case 0x5c6c4f:c.instructions+=15;goto B5c6c4f;
case 0x5c6c57:c.instructions+=14;goto B5c6c57;
case 0x5c6c5b:c.instructions+=13;goto B5c6c5b;
case 0x5c6c63:c.instructions+=12;goto B5c6c63;
case 0x5c6c6b:c.instructions+=11;goto B5c6c6b;
case 0x5c6c73:c.instructions+=10;goto B5c6c73;
case 0x5c6c77:c.instructions+=9;goto B5c6c77;
case 0x5c6c82:c.instructions+=8;goto B5c6c82;
case 0x5c6c8d:c.instructions+=7;goto B5c6c8d;
case 0x5c6c98:c.instructions+=6;goto B5c6c98;
case 0x5c6c9f:c.instructions+=5;goto B5c6c9f;
case 0x5c6caa:c.instructions+=4;goto B5c6caa;
case 0x5c6cb5:c.instructions+=3;goto B5c6cb5;
case 0x5c6cc0:c.instructions+=2;goto B5c6cc0;
case 0x5c6cc7:c.instructions+=1;goto B5c6cc7;
case 0x5c6cc9:goto L5c6cc9;
case 0x5c6ccf:goto L5c6ccf;
case 0x5c6cd5:c.instructions+=5;goto B5c6cd5;
case 0x5c6cdc:c.instructions+=4;goto B5c6cdc;
case 0x5c6cde:c.instructions+=3;goto B5c6cde;
case 0x5c6ce2:c.instructions+=2;goto B5c6ce2;
case 0x5c6ce9:c.instructions+=1;goto B5c6ce9;
case 0x5c6ceb:goto L5c6ceb;
case 0x5c6cf1:goto L5c6cf1;
case 0x5c6cf7:c.instructions+=64;goto B5c6cf7;
case 0x5c6cfe:c.instructions+=63;goto B5c6cfe;
case 0x5c6d01:c.instructions+=62;goto B5c6d01;
case 0x5c6d05:c.instructions+=61;goto B5c6d05;
case 0x5c6d09:c.instructions+=60;goto B5c6d09;
case 0x5c6d0b:c.instructions+=59;goto B5c6d0b;
case 0x5c6d0f:c.instructions+=58;goto B5c6d0f;
case 0x5c6d13:c.instructions+=57;goto B5c6d13;
case 0x5c6d15:c.instructions+=56;goto B5c6d15;
case 0x5c6d19:c.instructions+=55;goto B5c6d19;
case 0x5c6d1f:c.instructions+=54;goto B5c6d1f;
case 0x5c6d23:c.instructions+=53;goto B5c6d23;
case 0x5c6d27:c.instructions+=52;goto B5c6d27;
case 0x5c6d29:c.instructions+=51;goto B5c6d29;
case 0x5c6d2d:c.instructions+=50;goto B5c6d2d;
case 0x5c6d34:c.instructions+=49;goto B5c6d34;
case 0x5c6d3a:c.instructions+=48;goto B5c6d3a;
case 0x5c6d3e:c.instructions+=47;goto B5c6d3e;
case 0x5c6d42:c.instructions+=46;goto B5c6d42;
case 0x5c6d46:c.instructions+=45;goto B5c6d46;
case 0x5c6d4d:c.instructions+=44;goto B5c6d4d;
case 0x5c6d4f:c.instructions+=43;goto B5c6d4f;
case 0x5c6d51:c.instructions+=42;goto B5c6d51;
case 0x5c6d58:c.instructions+=41;goto B5c6d58;
case 0x5c6d5f:c.instructions+=40;goto B5c6d5f;
case 0x5c6d66:c.instructions+=39;goto B5c6d66;
case 0x5c6d6d:c.instructions+=38;goto B5c6d6d;
case 0x5c6d6f:c.instructions+=37;goto B5c6d6f;
case 0x5c6d73:c.instructions+=36;goto B5c6d73;
case 0x5c6d75:c.instructions+=35;goto B5c6d75;
case 0x5c6d79:c.instructions+=34;goto B5c6d79;
case 0x5c6d7b:c.instructions+=33;goto B5c6d7b;
case 0x5c6d7f:c.instructions+=32;goto B5c6d7f;
case 0x5c6d81:c.instructions+=31;goto B5c6d81;
case 0x5c6d85:c.instructions+=30;goto B5c6d85;
case 0x5c6d87:c.instructions+=29;goto B5c6d87;
case 0x5c6d8e:c.instructions+=28;goto B5c6d8e;
case 0x5c6d95:c.instructions+=27;goto B5c6d95;
case 0x5c6d97:c.instructions+=26;goto B5c6d97;
case 0x5c6d9e:c.instructions+=25;goto B5c6d9e;
case 0x5c6da5:c.instructions+=24;goto B5c6da5;
case 0x5c6da7:c.instructions+=23;goto B5c6da7;
case 0x5c6dab:c.instructions+=22;goto B5c6dab;
case 0x5c6dad:c.instructions+=21;goto B5c6dad;
case 0x5c6db1:c.instructions+=20;goto B5c6db1;
case 0x5c6db3:c.instructions+=19;goto B5c6db3;
case 0x5c6dba:c.instructions+=18;goto B5c6dba;
case 0x5c6dbc:c.instructions+=17;goto B5c6dbc;
case 0x5c6dc3:c.instructions+=16;goto B5c6dc3;
case 0x5c6dc5:c.instructions+=15;goto B5c6dc5;
case 0x5c6dcc:c.instructions+=14;goto B5c6dcc;
case 0x5c6dd3:c.instructions+=13;goto B5c6dd3;
case 0x5c6dd5:c.instructions+=12;goto B5c6dd5;
case 0x5c6ddc:c.instructions+=11;goto B5c6ddc;
case 0x5c6de3:c.instructions+=10;goto B5c6de3;
case 0x5c6de5:c.instructions+=9;goto B5c6de5;
case 0x5c6de9:c.instructions+=8;goto B5c6de9;
case 0x5c6deb:c.instructions+=7;goto B5c6deb;
case 0x5c6def:c.instructions+=6;goto B5c6def;
case 0x5c6df6:c.instructions+=5;goto B5c6df6;
case 0x5c6df8:c.instructions+=4;goto B5c6df8;
case 0x5c6dff:c.instructions+=3;goto B5c6dff;
case 0x5c6e06:c.instructions+=2;goto B5c6e06;
case 0x5c6e0d:c.instructions+=1;goto B5c6e0d;
case 0x5c6e0f:goto L5c6e0f;
case 0x5c6e15:c.instructions+=4;goto B5c6e15;
case 0x5c6e1b:c.instructions+=3;goto B5c6e1b;
case 0x5c6e1d:c.instructions+=2;goto B5c6e1d;
case 0x5c6e1f:c.instructions+=1;goto B5c6e1f;
case 0x5c6e22:goto L5c6e22;
case 0x5c6e25:c.instructions+=5;goto B5c6e25;
case 0x5c6e2a:c.instructions+=4;goto B5c6e2a;
case 0x5c6e2c:c.instructions+=3;goto B5c6e2c;
case 0x5c6e2d:c.instructions+=2;goto B5c6e2d;
case 0x5c6e2e:c.instructions+=1;goto B5c6e2e;
case 0x5c6e34:goto L5c6e34;
case 0x5c6e37:c.instructions+=6;goto B5c6e37;
case 0x5c6e39:c.instructions+=5;goto B5c6e39;
case 0x5c6e3a:c.instructions+=4;goto B5c6e3a;
case 0x5c6e3e:c.instructions+=3;goto B5c6e3e;
case 0x5c6e3f:c.instructions+=2;goto B5c6e3f;
case 0x5c6e40:c.instructions+=1;goto B5c6e40;
case 0x5c6e46:goto L5c6e46;
case 0x5c6e49:c.instructions+=4;goto B5c6e49;
case 0x5c6e4b:c.instructions+=3;goto B5c6e4b;
case 0x5c6e4c:c.instructions+=2;goto B5c6e4c;
case 0x5c6e4d:c.instructions+=1;goto B5c6e4d;
case 0x5c6e53:goto L5c6e53;
case 0x5c6e5e:c.instructions+=2;goto B5c6e5e;
case 0x5c6e65:c.instructions+=1;goto B5c6e65;
case 0x5c6e67:goto L5c6e67;
case 0x5c6e6d:c.instructions+=4;goto B5c6e6d;
case 0x5c6e73:c.instructions+=3;goto B5c6e73;
case 0x5c6e75:c.instructions+=2;goto B5c6e75;
case 0x5c6e77:c.instructions+=1;goto B5c6e77;
case 0x5c6e7a:goto L5c6e7a;
case 0x5c6e7d:c.instructions+=5;goto B5c6e7d;
case 0x5c6e82:c.instructions+=4;goto B5c6e82;
case 0x5c6e84:c.instructions+=3;goto B5c6e84;
case 0x5c6e85:c.instructions+=2;goto B5c6e85;
case 0x5c6e86:c.instructions+=1;goto B5c6e86;
case 0x5c6e8c:goto L5c6e8c;
case 0x5c6e8f:c.instructions+=6;goto B5c6e8f;
case 0x5c6e91:c.instructions+=5;goto B5c6e91;
case 0x5c6e92:c.instructions+=4;goto B5c6e92;
case 0x5c6e96:c.instructions+=3;goto B5c6e96;
case 0x5c6e97:c.instructions+=2;goto B5c6e97;
case 0x5c6e98:c.instructions+=1;goto B5c6e98;
case 0x5c6e9e:goto L5c6e9e;
case 0x5c6ea1:c.instructions+=5;goto B5c6ea1;
case 0x5c6ea3:c.instructions+=4;goto B5c6ea3;
case 0x5c6ea6:c.instructions+=3;goto B5c6ea6;
case 0x5c6ea7:c.instructions+=2;goto B5c6ea7;
case 0x5c6ea8:c.instructions+=1;goto B5c6ea8;
case 0x5c6eae:goto L5c6eae;
case 0x5c6eb5:c.instructions+=6;goto B5c6eb5;
case 0x5c6ebc:c.instructions+=5;goto B5c6ebc;
case 0x5c6ec3:c.instructions+=4;goto B5c6ec3;
case 0x5c6ec4:c.instructions+=3;goto B5c6ec4;
case 0x5c6ec5:c.instructions+=2;goto B5c6ec5;
case 0x5c6ec6:c.instructions+=1;goto B5c6ec6;
case 0x5c6ecb:goto L5c6ecb;
case 0x5c6ece:c.instructions+=6;goto B5c6ece;
case 0x5c6ed0:c.instructions+=5;goto B5c6ed0;
case 0x5c6ed8:c.instructions+=4;goto B5c6ed8;
case 0x5c6ee0:c.instructions+=3;goto B5c6ee0;
case 0x5c6ee8:c.instructions+=2;goto B5c6ee8;
case 0x5c6ef0:c.instructions+=1;goto B5c6ef0;
case 0x5c6ef6:goto L5c6ef6;
case 0x5c6efd:c.instructions+=7;goto B5c6efd;
case 0x5c6f04:c.instructions+=6;goto B5c6f04;
case 0x5c6f08:c.instructions+=5;goto B5c6f08;
case 0x5c6f0b:c.instructions+=4;goto B5c6f0b;
case 0x5c6f0d:c.instructions+=3;goto B5c6f0d;
case 0x5c6f14:c.instructions+=2;goto B5c6f14;
case 0x5c6f18:c.instructions+=1;goto B5c6f18;
case 0x5c6f1a:goto L5c6f1a;
case 0x5c6f1e:c.instructions+=1;goto B5c6f1e;
case 0x5c6f20:goto L5c6f20;
case 0x5c6f23:c.instructions+=12;goto B5c6f23;
case 0x5c6f25:c.instructions+=11;goto B5c6f25;
case 0x5c6f28:c.instructions+=10;goto B5c6f28;
case 0x5c6f2c:c.instructions+=9;goto B5c6f2c;
case 0x5c6f30:c.instructions+=8;goto B5c6f30;
case 0x5c6f31:c.instructions+=7;goto B5c6f31;
case 0x5c6f34:c.instructions+=6;goto B5c6f34;
case 0x5c6f37:c.instructions+=5;goto B5c6f37;
case 0x5c6f3b:c.instructions+=4;goto B5c6f3b;
case 0x5c6f3c:c.instructions+=3;goto B5c6f3c;
case 0x5c6f3f:c.instructions+=2;goto B5c6f3f;
case 0x5c6f40:c.instructions+=1;goto B5c6f40;
case 0x5c6f46:goto L5c6f46;
case 0x5c6f49:c.instructions+=5;goto B5c6f49;
case 0x5c6f4f:c.instructions+=4;goto B5c6f4f;
case 0x5c6f51:c.instructions+=3;goto B5c6f51;
case 0x5c6f55:c.instructions+=2;goto B5c6f55;
case 0x5c6f59:c.instructions+=1;goto B5c6f59;
case 0x5c6f5b:goto L5c6f5b;
case 0x5c6f61:goto L5c6f61;
case 0x5c6f67:c.instructions+=22;goto B5c6f67;
case 0x5c6f6b:c.instructions+=21;goto B5c6f6b;
case 0x5c6f6e:c.instructions+=20;goto B5c6f6e;
case 0x5c6f71:c.instructions+=19;goto B5c6f71;
case 0x5c6f75:c.instructions+=18;goto B5c6f75;
case 0x5c6f79:c.instructions+=17;goto B5c6f79;
case 0x5c6f7a:c.instructions+=16;goto B5c6f7a;
case 0x5c6f7d:c.instructions+=15;goto B5c6f7d;
case 0x5c6f81:c.instructions+=14;goto B5c6f81;
case 0x5c6f85:c.instructions+=13;goto B5c6f85;
case 0x5c6f8c:c.instructions+=12;goto B5c6f8c;
case 0x5c6f8f:c.instructions+=11;goto B5c6f8f;
case 0x5c6f91:c.instructions+=10;goto B5c6f91;
case 0x5c6f97:c.instructions+=9;goto B5c6f97;
case 0x5c6f9a:c.instructions+=8;goto B5c6f9a;
case 0x5c6f9e:c.instructions+=7;goto B5c6f9e;
case 0x5c6fa2:c.instructions+=6;goto B5c6fa2;
case 0x5c6fa8:c.instructions+=5;goto B5c6fa8;
case 0x5c6fab:c.instructions+=4;goto B5c6fab;
case 0x5c6faf:c.instructions+=3;goto B5c6faf;
case 0x5c6fb5:c.instructions+=2;goto B5c6fb5;
case 0x5c6fb8:c.instructions+=1;goto B5c6fb8;
case 0x5c6fbe:goto L5c6fbe;
case 0x5c6fc0:c.instructions+=1;goto B5c6fc0;
case 0x5c6fc2:goto L5c6fc2;
case 0x5c6fc6:c.instructions+=1;goto B5c6fc6;
case 0x5c6fc8:goto L5c6fc8;
case 0x5c6fcb:c.instructions+=2;goto B5c6fcb;
case 0x5c6fcd:c.instructions+=1;goto B5c6fcd;
case 0x5c6fcf:goto L5c6fcf;
case 0x5c6fd2:c.instructions+=12;goto B5c6fd2;
case 0x5c6fd9:c.instructions+=11;goto B5c6fd9;
case 0x5c6fe0:c.instructions+=10;goto B5c6fe0;
case 0x5c6fe4:c.instructions+=9;goto B5c6fe4;
case 0x5c6fe7:c.instructions+=8;goto B5c6fe7;
case 0x5c6fe9:c.instructions+=7;goto B5c6fe9;
case 0x5c6fea:c.instructions+=6;goto B5c6fea;
case 0x5c6fed:c.instructions+=5;goto B5c6fed;
case 0x5c6ff0:c.instructions+=4;goto B5c6ff0;
case 0x5c6ff4:c.instructions+=3;goto B5c6ff4;
case 0x5c6ff5:c.instructions+=2;goto B5c6ff5;
case 0x5c6ff6:c.instructions+=1;goto B5c6ff6;
case 0x5c6ffc:goto L5c6ffc;
case 0x5c6ffe:c.instructions+=1;goto B5c6ffe;
default:missing_instruction(c.pc);}
B5c6008:L5c6008:{c.instructions+=7;NFSU2_TR(0x5c6008);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c600f:{NFSU2_TR(0x5c600f);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6016:{NFSU2_TR(0x5c6016);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6021:{NFSU2_TR(0x5c6021);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c602c:{NFSU2_TR(0x5c602c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6033:{NFSU2_TR(0x5c6033);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c603a:{NFSU2_TR(0x5c603a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c6042;}}
}
B5c603c:L5c603c:{c.instructions+=1;NFSU2_TR(0x5c603c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6042:L5c6042:{c.instructions+=6;NFSU2_TR(0x5c6042);
{u32 ea_=u32(u32(8005580u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6048:{NFSU2_TR(0x5c6048);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c604f:{NFSU2_TR(0x5c604f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c6051:{NFSU2_TR(0x5c6051);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6055:{NFSU2_TR(0x5c6055);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c605c:{NFSU2_TR(0x5c605c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c6064;}}
}
B5c605e:L5c605e:{c.instructions+=1;NFSU2_TR(0x5c605e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6064:L5c6064:{c.instructions+=65;NFSU2_TR(0x5c6064);
{u32 ea_=u32(u32(8005584u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c606a:{NFSU2_TR(0x5c606a);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6071:{NFSU2_TR(0x5c6071);
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
B5c6073:{NFSU2_TR(0x5c6073);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6077:{NFSU2_TR(0x5c6077);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c607b:{NFSU2_TR(0x5c607b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c607d:{NFSU2_TR(0x5c607d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6081:{NFSU2_TR(0x5c6081);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6085:{NFSU2_TR(0x5c6085);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c6087:{NFSU2_TR(0x5c6087);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c608b:{NFSU2_TR(0x5c608b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6091:{NFSU2_TR(0x5c6091);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6095:{NFSU2_TR(0x5c6095);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6099:{NFSU2_TR(0x5c6099);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c609b:{NFSU2_TR(0x5c609b);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c609f:{NFSU2_TR(0x5c609f);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c60a6:{NFSU2_TR(0x5c60a6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c60ac:{NFSU2_TR(0x5c60ac);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c60b0:{NFSU2_TR(0x5c60b0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c60b4:{NFSU2_TR(0x5c60b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c60b8:{NFSU2_TR(0x5c60b8);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c60bf:{NFSU2_TR(0x5c60bf);
__builtin_memmove((R+8),(R+4),4);
}
B5c60c1:{NFSU2_TR(0x5c60c1);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c60c3:{NFSU2_TR(0x5c60c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c60ca:{NFSU2_TR(0x5c60ca);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c60d1:{NFSU2_TR(0x5c60d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c60d8:{NFSU2_TR(0x5c60d8);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c60df:{NFSU2_TR(0x5c60df);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c60e1:{NFSU2_TR(0x5c60e1);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c60e5:{NFSU2_TR(0x5c60e5);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c60e7:{NFSU2_TR(0x5c60e7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c60eb:{NFSU2_TR(0x5c60eb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c60ed:{NFSU2_TR(0x5c60ed);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c60f1:{NFSU2_TR(0x5c60f1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c60f3:{NFSU2_TR(0x5c60f3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c60f7:{NFSU2_TR(0x5c60f7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c60f9:{NFSU2_TR(0x5c60f9);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6100:{NFSU2_TR(0x5c6100);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6107:{NFSU2_TR(0x5c6107);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6109:{NFSU2_TR(0x5c6109);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6110:{NFSU2_TR(0x5c6110);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6117:{NFSU2_TR(0x5c6117);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6119:{NFSU2_TR(0x5c6119);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c611d:{NFSU2_TR(0x5c611d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c611f:{NFSU2_TR(0x5c611f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6123:{NFSU2_TR(0x5c6123);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6125:{NFSU2_TR(0x5c6125);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c612c:{NFSU2_TR(0x5c612c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c612e:{NFSU2_TR(0x5c612e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6135:{NFSU2_TR(0x5c6135);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6137:{NFSU2_TR(0x5c6137);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c613e:{NFSU2_TR(0x5c613e);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6145:{NFSU2_TR(0x5c6145);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6147:{NFSU2_TR(0x5c6147);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c614e:{NFSU2_TR(0x5c614e);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6155:{NFSU2_TR(0x5c6155);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c6157:{NFSU2_TR(0x5c6157);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c615b:{NFSU2_TR(0x5c615b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c615d:{NFSU2_TR(0x5c615d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6161:{NFSU2_TR(0x5c6161);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6168:{NFSU2_TR(0x5c6168);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c616a:{NFSU2_TR(0x5c616a);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6171:{NFSU2_TR(0x5c6171);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6178:{NFSU2_TR(0x5c6178);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c617f:{NFSU2_TR(0x5c617f);
if(r1(R+518)){{goto L5c61ce;}}
}
B5c6181:L5c6181:{c.instructions+=5;NFSU2_TR(0x5c6181);
__builtin_memmove((R+12),gp(0x86eb68),4);
}
B5c6187:{NFSU2_TR(0x5c6187);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5c618d:{NFSU2_TR(0x5c618d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c618f:{NFSU2_TR(0x5c618f);
__builtin_memmove((R+4),(R+12),4);
}
B5c6191:{NFSU2_TR(0x5c6191);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6194ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6194:L5c6194:{c.instructions+=6;NFSU2_TR(0x5c6194);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6197:{NFSU2_TR(0x5c6197);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c619c:{NFSU2_TR(0x5c619c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c619e:{NFSU2_TR(0x5c619e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c619f:{NFSU2_TR(0x5c619f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61a0:{NFSU2_TR(0x5c61a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c61a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c61a6:L5c61a6:{c.instructions+=7;NFSU2_TR(0x5c61a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c61a9:{NFSU2_TR(0x5c61a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c61ab:{NFSU2_TR(0x5c61ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61ac:{NFSU2_TR(0x5c61ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c61b0:{NFSU2_TR(0x5c61b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61b1:{NFSU2_TR(0x5c61b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61b2:{NFSU2_TR(0x5c61b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c61b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c61b8:L5c61b8:{c.instructions+=5;NFSU2_TR(0x5c61b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c61bb:{NFSU2_TR(0x5c61bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c61bd:{NFSU2_TR(0x5c61bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61be:{NFSU2_TR(0x5c61be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61bf:{NFSU2_TR(0x5c61bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c61c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c61c5:L5c61c5:{c.instructions+=2;NFSU2_TR(0x5c61c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c61cc:{NFSU2_TR(0x5c61cc);
{goto L5c621c;}
}
B5c61ce:L5c61ce:{c.instructions+=5;NFSU2_TR(0x5c61ce);
__builtin_memmove((R+12),gp(0x86eb64),4);
}
B5c61d4:{NFSU2_TR(0x5c61d4);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5c61da:{NFSU2_TR(0x5c61da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c61dc:{NFSU2_TR(0x5c61dc);
__builtin_memmove((R+4),(R+12),4);
}
B5c61de:{NFSU2_TR(0x5c61de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c61e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c61e1:L5c61e1:{c.instructions+=6;NFSU2_TR(0x5c61e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c61e4:{NFSU2_TR(0x5c61e4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c61e9:{NFSU2_TR(0x5c61e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c61eb:{NFSU2_TR(0x5c61eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61ec:{NFSU2_TR(0x5c61ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61ed:{NFSU2_TR(0x5c61ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c61f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c61f3:L5c61f3:{c.instructions+=7;NFSU2_TR(0x5c61f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c61f6:{NFSU2_TR(0x5c61f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c61f8:{NFSU2_TR(0x5c61f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61f9:{NFSU2_TR(0x5c61f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c61fd:{NFSU2_TR(0x5c61fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61fe:{NFSU2_TR(0x5c61fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c61ff:{NFSU2_TR(0x5c61ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6205ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6205:L5c6205:{c.instructions+=7;NFSU2_TR(0x5c6205);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c620c:{NFSU2_TR(0x5c620c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c620f:{NFSU2_TR(0x5c620f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6211:{NFSU2_TR(0x5c6211);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c6214:{NFSU2_TR(0x5c6214);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6215:{NFSU2_TR(0x5c6215);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6216:{NFSU2_TR(0x5c6216);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c621cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c621c:L5c621c:{c.instructions+=8;NFSU2_TR(0x5c621c);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6223:{NFSU2_TR(0x5c6223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6225:{NFSU2_TR(0x5c6225);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6226:{NFSU2_TR(0x5c6226);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c622d:{NFSU2_TR(0x5c622d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c622e:{NFSU2_TR(0x5c622e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c622f:{NFSU2_TR(0x5c622f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6230:{NFSU2_TR(0x5c6230);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6233ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6233:L5c6233:{c.instructions+=4;NFSU2_TR(0x5c6233);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c623a:{NFSU2_TR(0x5c623a);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6241:{NFSU2_TR(0x5c6241);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c6243:{NFSU2_TR(0x5c6243);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c624b;}}
}
B5c6245:L5c6245:{c.instructions+=1;NFSU2_TR(0x5c6245);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c624b:L5c624b:{c.instructions+=6;NFSU2_TR(0x5c624b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6251:{NFSU2_TR(0x5c6251);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6258:{NFSU2_TR(0x5c6258);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c625a:{NFSU2_TR(0x5c625a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c625e:{NFSU2_TR(0x5c625e);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6265:{NFSU2_TR(0x5c6265);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c626d;}}
}
B5c6267:L5c6267:{c.instructions+=1;NFSU2_TR(0x5c6267);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c626d:L5c626d:{c.instructions+=8;NFSU2_TR(0x5c626d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c626f:{NFSU2_TR(0x5c626f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6275:{NFSU2_TR(0x5c6275);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c627d:{NFSU2_TR(0x5c627d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6285:{NFSU2_TR(0x5c6285);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c628d:{NFSU2_TR(0x5c628d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6295:{NFSU2_TR(0x5c6295);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6299:{NFSU2_TR(0x5c6299);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c6376;}}
}
B5c629f:L5c629f:{c.instructions+=3;NFSU2_TR(0x5c629f);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c62a6:{NFSU2_TR(0x5c62a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B5c62ad:{NFSU2_TR(0x5c62ad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c62b0:L5c62b0:{c.instructions+=12;NFSU2_TR(0x5c62b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c62b3:{NFSU2_TR(0x5c62b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c62b5:{NFSU2_TR(0x5c62b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c62bc:{NFSU2_TR(0x5c62bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c62bd:{NFSU2_TR(0x5c62bd);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c62c1:{NFSU2_TR(0x5c62c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5c62c4:{NFSU2_TR(0x5c62c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c62c7:{NFSU2_TR(0x5c62c7);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c62cb:{NFSU2_TR(0x5c62cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c62ce:{NFSU2_TR(0x5c62ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c62cf:{NFSU2_TR(0x5c62cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c62d0:{NFSU2_TR(0x5c62d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c62d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c62d6:L5c62d6:{c.instructions+=40;NFSU2_TR(0x5c62d6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c62da:{NFSU2_TR(0x5c62da);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c62dd:{NFSU2_TR(0x5c62dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c62e0:{NFSU2_TR(0x5c62e0);
__builtin_memmove((R+0),(R+8),4);
}
B5c62e2:{NFSU2_TR(0x5c62e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5c62e5:{NFSU2_TR(0x5c62e5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c62e7:{NFSU2_TR(0x5c62e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c62ee:{NFSU2_TR(0x5c62ee);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c62f2:{NFSU2_TR(0x5c62f2);
__builtin_memmove((R+4),(R+8),4);
}
B5c62f4:{NFSU2_TR(0x5c62f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c62f7:{NFSU2_TR(0x5c62f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c62fa:{NFSU2_TR(0x5c62fa);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c62fe:{NFSU2_TR(0x5c62fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6301:{NFSU2_TR(0x5c6301);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6305:{NFSU2_TR(0x5c6305);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c6306:{NFSU2_TR(0x5c6306);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6308:{NFSU2_TR(0x5c6308);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5c630b:{NFSU2_TR(0x5c630b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B5c630e:{NFSU2_TR(0x5c630e);
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
B5c6310:{NFSU2_TR(0x5c6310);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c6312:{NFSU2_TR(0x5c6312);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6316:{NFSU2_TR(0x5c6316);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c631a:{NFSU2_TR(0x5c631a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c631c:{NFSU2_TR(0x5c631c);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6320:{NFSU2_TR(0x5c6320);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6324:{NFSU2_TR(0x5c6324);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c6326:{NFSU2_TR(0x5c6326);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c632a:{NFSU2_TR(0x5c632a);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c632e:{NFSU2_TR(0x5c632e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6330:{NFSU2_TR(0x5c6330);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6337:{NFSU2_TR(0x5c6337);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c633e:{NFSU2_TR(0x5c633e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5c6340:{NFSU2_TR(0x5c6340);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6347:{NFSU2_TR(0x5c6347);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c634e:{NFSU2_TR(0x5c634e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c6350:{NFSU2_TR(0x5c6350);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6357:{NFSU2_TR(0x5c6357);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c635e:{NFSU2_TR(0x5c635e);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6365:{NFSU2_TR(0x5c6365);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c636c:{NFSU2_TR(0x5c636c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c62b0u);}goto L5c62b0;}}
}
B5c6372:L5c6372:{c.instructions+=2;NFSU2_TR(0x5c6372);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c6374:{NFSU2_TR(0x5c6374);
__builtin_memmove((R+28),(R+0),4);
}
B5c6376:L5c6376:{c.instructions+=3;NFSU2_TR(0x5c6376);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5c6379:{NFSU2_TR(0x5c6379);
__builtin_memmove((R+20),(R+28),4);
}
B5c637b:{NFSU2_TR(0x5c637b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c63b9;}}
}
B5c637d:L5c637d:{c.instructions+=2;NFSU2_TR(0x5c637d);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5c6380:{NFSU2_TR(0x5c6380);
u8 U[12];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5c6387:L5c6387:{c.instructions+=10;NFSU2_TR(0x5c6387);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c638b:{NFSU2_TR(0x5c638b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c638e:{NFSU2_TR(0x5c638e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6390:{NFSU2_TR(0x5c6390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6391:{NFSU2_TR(0x5c6391);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c6394:{NFSU2_TR(0x5c6394);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5c6397:{NFSU2_TR(0x5c6397);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c639b:{NFSU2_TR(0x5c639b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c639c:{NFSU2_TR(0x5c639c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c639d:{NFSU2_TR(0x5c639d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c63a3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c63a3:L5c63a3:{c.instructions+=9;NFSU2_TR(0x5c63a3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c63a5:{NFSU2_TR(0x5c63a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c63a8:{NFSU2_TR(0x5c63a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5c63aa:{NFSU2_TR(0x5c63aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c63ad:{NFSU2_TR(0x5c63ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c63b0:{NFSU2_TR(0x5c63b0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5c63b1:{NFSU2_TR(0x5c63b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5c63b4:{NFSU2_TR(0x5c63b4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5c63b7:{NFSU2_TR(0x5c63b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6387u);}goto L5c6387;}}
}
B5c63b9:L5c63b9:{c.instructions+=10;NFSU2_TR(0x5c63b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c63bc:{NFSU2_TR(0x5c63bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c63be:{NFSU2_TR(0x5c63be);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c63c0:{NFSU2_TR(0x5c63c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c63c7:{NFSU2_TR(0x5c63c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c63c8:{NFSU2_TR(0x5c63c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c63cb:{NFSU2_TR(0x5c63cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c63d1:{NFSU2_TR(0x5c63d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c63d2:{NFSU2_TR(0x5c63d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c63d3:{NFSU2_TR(0x5c63d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c63d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c63d9:L5c63d9:{c.instructions+=3;NFSU2_TR(0x5c63d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5c63dd:{NFSU2_TR(0x5c63dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c63de:{NFSU2_TR(0x5c63de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c6444;}}
}
B5c63e0:L5c63e0:{c.instructions+=13;NFSU2_TR(0x5c63e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c63e3:{NFSU2_TR(0x5c63e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c63e7:{NFSU2_TR(0x5c63e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c63e8:{NFSU2_TR(0x5c63e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c63eb:{NFSU2_TR(0x5c63eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f169697ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c63f3:{NFSU2_TR(0x5c63f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f169697ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c63fb:{NFSU2_TR(0x5c63fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f169697ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6403:{NFSU2_TR(0x5c6403);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f48c8c9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c640b:{NFSU2_TR(0x5c640b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x63cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6411:{NFSU2_TR(0x5c6411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6413:{NFSU2_TR(0x5c6413);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6414:{NFSU2_TR(0x5c6414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6415:{NFSU2_TR(0x5c6415);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c641bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c641b:L5c641b:{c.instructions+=12;NFSU2_TR(0x5c641b);
{u32 ea_=u32(u32(8384780u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6421:{NFSU2_TR(0x5c6421);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6424:{NFSU2_TR(0x5c6424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6426:{NFSU2_TR(0x5c6426);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c642c:{NFSU2_TR(0x5c642c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c642d:{NFSU2_TR(0x5c642d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6430:{NFSU2_TR(0x5c6430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x664ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6436:{NFSU2_TR(0x5c6436);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c643c:{NFSU2_TR(0x5c643c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c643f:{NFSU2_TR(0x5c643f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6440:{NFSU2_TR(0x5c6440);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6441:{NFSU2_TR(0x5c6441);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6444ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6444:L5c6444:{c.instructions+=4;NFSU2_TR(0x5c6444);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6446:{NFSU2_TR(0x5c6446);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6448:{NFSU2_TR(0x5c6448);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6449:{NFSU2_TR(0x5c6449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c644eull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c644e:L5c644e:{c.instructions+=2;NFSU2_TR(0x5c644e);
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
B5c6451:{NFSU2_TR(0x5c6451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6456ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c6456:L5c6456:{c.instructions+=6;NFSU2_TR(0x5c6456);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5c645c:{NFSU2_TR(0x5c645c);
__builtin_memmove(gp(0x87092c),(R+24),4);
}
B5c6462:{NFSU2_TR(0x5c6462);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6465:{NFSU2_TR(0x5c6465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6467:{NFSU2_TR(0x5c6467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6468:{NFSU2_TR(0x5c6468);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c646eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c646e:L5c646e:{c.instructions+=9;NFSU2_TR(0x5c646e);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6473:{NFSU2_TR(0x5c6473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6475:{NFSU2_TR(0x5c6475);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6477:{NFSU2_TR(0x5c6477);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c647b:{NFSU2_TR(0x5c647b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c647c:{NFSU2_TR(0x5c647c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c647e:{NFSU2_TR(0x5c647e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6480:{NFSU2_TR(0x5c6480);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6481:{NFSU2_TR(0x5c6481);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6487ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6487:L5c6487:{c.instructions+=4;NFSU2_TR(0x5c6487);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c648a:{NFSU2_TR(0x5c648a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c648c:{NFSU2_TR(0x5c648c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c648d:{NFSU2_TR(0x5c648d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6493ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6493:L5c6493:{c.instructions+=3;NFSU2_TR(0x5c6493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c6495:{NFSU2_TR(0x5c6495);
__builtin_memmove((R+4),(R+12),4);
}
B5c6497:{NFSU2_TR(0x5c6497);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c649aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c649a:L5c649a:{c.instructions+=2;NFSU2_TR(0x5c649a);
__builtin_memmove((R+28),gp(0x870848),4);
}
B5c64a0:{NFSU2_TR(0x5c64a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c64a5ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5c64a5:L5c64a5:{c.instructions+=7;NFSU2_TR(0x5c64a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c64a8:{NFSU2_TR(0x5c64a8);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c64ad:{NFSU2_TR(0x5c64ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c64af:{NFSU2_TR(0x5c64af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64b0:{NFSU2_TR(0x5c64b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64b1:{NFSU2_TR(0x5c64b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64b2:{NFSU2_TR(0x5c64b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c64b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c64b8:L5c64b8:{c.instructions+=6;NFSU2_TR(0x5c64b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c64bb:{NFSU2_TR(0x5c64bb);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c64c0:{NFSU2_TR(0x5c64c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c64c2:{NFSU2_TR(0x5c64c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64c3:{NFSU2_TR(0x5c64c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64c4:{NFSU2_TR(0x5c64c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c64caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c64ca:L5c64ca:{c.instructions+=14;NFSU2_TR(0x5c64ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c64cd:{NFSU2_TR(0x5c64cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c64d0:{NFSU2_TR(0x5c64d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c64d4:{NFSU2_TR(0x5c64d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c64d8:{NFSU2_TR(0x5c64d8);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c64dd:{NFSU2_TR(0x5c64dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c64e1:{NFSU2_TR(0x5c64e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64e2:{NFSU2_TR(0x5c64e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c64e6:{NFSU2_TR(0x5c64e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c64ea:{NFSU2_TR(0x5c64ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c64f2:{NFSU2_TR(0x5c64f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c64fa:{NFSU2_TR(0x5c64fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c64fc:{NFSU2_TR(0x5c64fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c64fd:{NFSU2_TR(0x5c64fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6503ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6503:L5c6503:{c.instructions+=7;NFSU2_TR(0x5c6503);
__builtin_memmove(gp(0x870848),(R+28),4);
}
B5c6509:{NFSU2_TR(0x5c6509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c650a:{NFSU2_TR(0x5c650a);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c6510:{NFSU2_TR(0x5c6510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c6511:{NFSU2_TR(0x5c6511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c6512:{NFSU2_TR(0x5c6512);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x164ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x164ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x164ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6518:{NFSU2_TR(0x5c6518);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c6520:L5c6520:{c.instructions+=11;NFSU2_TR(0x5c6520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6521:{NFSU2_TR(0x5c6521);
__builtin_memmove((R+20),(R+16),4);
}
B5c6523:{NFSU2_TR(0x5c6523);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c6526:{NFSU2_TR(0x5c6526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B5c652c:{NFSU2_TR(0x5c652c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c652f:{NFSU2_TR(0x5c652f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6530:{NFSU2_TR(0x5c6530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6531:{NFSU2_TR(0x5c6531);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6532:{NFSU2_TR(0x5c6532);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c6534:{NFSU2_TR(0x5c6534);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5c6536:{NFSU2_TR(0x5c6536);
if(r1(R+518)){{goto L5c6557;}}
}
B5c6538:L5c6538:{c.instructions+=6;NFSU2_TR(0x5c6538);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c653d:{NFSU2_TR(0x5c653d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c653f:{NFSU2_TR(0x5c653f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6540:{NFSU2_TR(0x5c6540);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6541:{NFSU2_TR(0x5c6541);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6542:{NFSU2_TR(0x5c6542);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6548ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6548:L5c6548:{c.instructions+=5;NFSU2_TR(0x5c6548);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c654d:{NFSU2_TR(0x5c654d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c654f:{NFSU2_TR(0x5c654f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6550:{NFSU2_TR(0x5c6550);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6551:{NFSU2_TR(0x5c6551);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6557ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6557:L5c6557:{c.instructions+=47;NFSU2_TR(0x5c6557);
{u32 ea_=u32(u32(8849792u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c655d:{NFSU2_TR(0x5c655d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c6560:{NFSU2_TR(0x5c6560);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5c6567:{NFSU2_TR(0x5c6567);
w4(R+0,u32(0xff7f7f7full));
}
B5c656c:{NFSU2_TR(0x5c656c);
{u32 ea_=u32(u32(8005580u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6572:{NFSU2_TR(0x5c6572);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c657a:{NFSU2_TR(0x5c657a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6582:{NFSU2_TR(0x5c6582);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c658a:{NFSU2_TR(0x5c658a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c658e:{NFSU2_TR(0x5c658e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6596:{NFSU2_TR(0x5c6596);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c659e:{NFSU2_TR(0x5c659e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65a6:{NFSU2_TR(0x5c65a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c65aa:{NFSU2_TR(0x5c65aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65b2:{NFSU2_TR(0x5c65b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65ba:{NFSU2_TR(0x5c65ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65c2:{NFSU2_TR(0x5c65c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c65c6:{NFSU2_TR(0x5c65c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65ce:{NFSU2_TR(0x5c65ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65d6:{NFSU2_TR(0x5c65d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c65e1:{NFSU2_TR(0x5c65e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c65e8:{NFSU2_TR(0x5c65e8);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c65ee:{NFSU2_TR(0x5c65ee);
__builtin_memmove((R+4),(R+24),4);
}
B5c65f0:{NFSU2_TR(0x5c65f0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c65f4:{NFSU2_TR(0x5c65f4);
{u32 ea_=u32(u32(8849796u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c65fa:{NFSU2_TR(0x5c65fa);
{u32 ea_=u32(u32(8005584u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6600:{NFSU2_TR(0x5c6600);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6604:{NFSU2_TR(0x5c6604);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6608:{NFSU2_TR(0x5c6608);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c660a:{NFSU2_TR(0x5c660a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c660e:{NFSU2_TR(0x5c660e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6612:{NFSU2_TR(0x5c6612);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c6614:{NFSU2_TR(0x5c6614);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6618:{NFSU2_TR(0x5c6618);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c661e:{NFSU2_TR(0x5c661e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6622:{NFSU2_TR(0x5c6622);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6626:{NFSU2_TR(0x5c6626);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c6628:{NFSU2_TR(0x5c6628);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c662c:{NFSU2_TR(0x5c662c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6630:{NFSU2_TR(0x5c6630);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6636:{NFSU2_TR(0x5c6636);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c663a:{NFSU2_TR(0x5c663a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c663e:{NFSU2_TR(0x5c663e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c6640:{NFSU2_TR(0x5c6640);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6647:{NFSU2_TR(0x5c6647);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c664e:{NFSU2_TR(0x5c664e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6650:{NFSU2_TR(0x5c6650);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6653ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6653:L5c6653:{c.instructions+=6;NFSU2_TR(0x5c6653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6656:{NFSU2_TR(0x5c6656);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c665b:{NFSU2_TR(0x5c665b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c665d:{NFSU2_TR(0x5c665d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c665e:{NFSU2_TR(0x5c665e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c665f:{NFSU2_TR(0x5c665f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6665ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6665:L5c6665:{c.instructions+=7;NFSU2_TR(0x5c6665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6668:{NFSU2_TR(0x5c6668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c666a:{NFSU2_TR(0x5c666a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c666b:{NFSU2_TR(0x5c666b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c666f:{NFSU2_TR(0x5c666f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6670:{NFSU2_TR(0x5c6670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6671:{NFSU2_TR(0x5c6671);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6677ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6677:L5c6677:{c.instructions+=9;NFSU2_TR(0x5c6677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c667a:{NFSU2_TR(0x5c667a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c667d:{NFSU2_TR(0x5c667d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c667f:{NFSU2_TR(0x5c667f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6680:{NFSU2_TR(0x5c6680);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6683:{NFSU2_TR(0x5c6683);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6689:{NFSU2_TR(0x5c6689);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c668a:{NFSU2_TR(0x5c668a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c668b:{NFSU2_TR(0x5c668b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6691ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6691:L5c6691:{c.instructions+=2;NFSU2_TR(0x5c6691);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6694:{NFSU2_TR(0x5c6694);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c675e;}}
}
B5c669a:L5c669a:{c.instructions+=9;NFSU2_TR(0x5c669a);
__builtin_memmove((R+8),gp(0x86ffa4),4);
}
B5c66a0:{NFSU2_TR(0x5c66a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c66a3:{NFSU2_TR(0x5c66a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c66a5:{NFSU2_TR(0x5c66a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66a6:{NFSU2_TR(0x5c66a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c66a9:{NFSU2_TR(0x5c66a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c66af:{NFSU2_TR(0x5c66af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66b0:{NFSU2_TR(0x5c66b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66b1:{NFSU2_TR(0x5c66b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c66b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c66b7:L5c66b7:{c.instructions+=9;NFSU2_TR(0x5c66b7);
__builtin_memmove((R+8),gp(0x86f8ac),4);
}
B5c66bd:{NFSU2_TR(0x5c66bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c66c0:{NFSU2_TR(0x5c66c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c66c2:{NFSU2_TR(0x5c66c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66c3:{NFSU2_TR(0x5c66c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c66c6:{NFSU2_TR(0x5c66c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c66cc:{NFSU2_TR(0x5c66cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66cd:{NFSU2_TR(0x5c66cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66ce:{NFSU2_TR(0x5c66ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c66d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c66d4:L5c66d4:{c.instructions+=20;NFSU2_TR(0x5c66d4);
{u32 ea_=u32(u32(8384876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c66da:{NFSU2_TR(0x5c66da);
{u32 ea_=u32(u32(8384860u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c66e0:{NFSU2_TR(0x5c66e0);
__builtin_memmove((R+8),gp(0x86ec98),4);
}
B5c66e6:{NFSU2_TR(0x5c66e6);
__builtin_memmove((R+0),gp(0x7ff188),4);
}
B5c66eb:{NFSU2_TR(0x5c66eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c66ec:{NFSU2_TR(0x5c66ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c66ef:{NFSU2_TR(0x5c66ef);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c66f3:{NFSU2_TR(0x5c66f3);
{u32 ea_=u32(u32(8384864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c66f9:{NFSU2_TR(0x5c66f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c66fd:{NFSU2_TR(0x5c66fd);
{u32 ea_=u32(u32(8384876u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6703:{NFSU2_TR(0x5c6703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6706:{NFSU2_TR(0x5c6706);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c670a:{NFSU2_TR(0x5c670a);
{u32 ea_=u32(u32(8384868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6710:{NFSU2_TR(0x5c6710);
{u32 ea_=u32(u32(8384876u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6716:{NFSU2_TR(0x5c6716);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c671a:{NFSU2_TR(0x5c671a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6720:{NFSU2_TR(0x5c6720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6722:{NFSU2_TR(0x5c6722);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6723:{NFSU2_TR(0x5c6723);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6724:{NFSU2_TR(0x5c6724);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6727ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6727:L5c6727:{c.instructions+=9;NFSU2_TR(0x5c6727);
__builtin_memmove((R+8),gp(0x7a27d4),4);
}
B5c672d:{NFSU2_TR(0x5c672d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6730:{NFSU2_TR(0x5c6730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6732:{NFSU2_TR(0x5c6732);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6733:{NFSU2_TR(0x5c6733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6736:{NFSU2_TR(0x5c6736);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c673c:{NFSU2_TR(0x5c673c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c673d:{NFSU2_TR(0x5c673d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c673e:{NFSU2_TR(0x5c673e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6741ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6741:L5c6741:{c.instructions+=9;NFSU2_TR(0x5c6741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6744:{NFSU2_TR(0x5c6744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6746:{NFSU2_TR(0x5c6746);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c674a:{NFSU2_TR(0x5c674a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c674b:{NFSU2_TR(0x5c674b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c674e:{NFSU2_TR(0x5c674e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6754:{NFSU2_TR(0x5c6754);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6755:{NFSU2_TR(0x5c6755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6756:{NFSU2_TR(0x5c6756);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c675cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c675c:L5c675c:{c.instructions+=1;NFSU2_TR(0x5c675c);
{goto L5c67c9;}
}
B5c675e:L5c675e:{c.instructions+=2;NFSU2_TR(0x5c675e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c6760:{NFSU2_TR(0x5c6760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c67c9;}}
}
B5c6762:L5c6762:{c.instructions+=3;NFSU2_TR(0x5c6762);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c6769:{NFSU2_TR(0x5c6769);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c676a:{NFSU2_TR(0x5c676a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c676full));
TAIL_STATIC(0x43c780u,43c);
}
B5c676f:L5c676f:{c.instructions+=4;NFSU2_TR(0x5c676f);
__builtin_memmove((R+4),gp(0x870848),4);
}
B5c6775:{NFSU2_TR(0x5c6775);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6778:{NFSU2_TR(0x5c6778);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6779:{NFSU2_TR(0x5c6779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c677eull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c677e:L5c677e:{c.instructions+=4;NFSU2_TR(0x5c677e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5c6780:{NFSU2_TR(0x5c6780);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6781:{NFSU2_TR(0x5c6781);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6785:{NFSU2_TR(0x5c6785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c678aull));
TAIL_STATIC(0x43c780u,43c);
}
B5c678a:L5c678a:{c.instructions+=3;NFSU2_TR(0x5c678a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c678d:{NFSU2_TR(0x5c678d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c678e:{NFSU2_TR(0x5c678e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6793ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c6793:L5c6793:{c.instructions+=7;NFSU2_TR(0x5c6793);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c6796:{NFSU2_TR(0x5c6796);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c6799:{NFSU2_TR(0x5c6799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c679a:{NFSU2_TR(0x5c679a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c679b:{NFSU2_TR(0x5c679b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x80ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c67a1:{NFSU2_TR(0x5c67a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67a2:{NFSU2_TR(0x5c67a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c67a7ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5c67a7:L5c67a7:{c.instructions+=7;NFSU2_TR(0x5c67a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c67ab:{NFSU2_TR(0x5c67ab);
s4(0x800534,u32(0xffffffffull));
}
B5c67b5:{NFSU2_TR(0x5c67b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c67b8:{NFSU2_TR(0x5c67b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67b9:{NFSU2_TR(0x5c67b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c67c0:{NFSU2_TR(0x5c67c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67c1:{NFSU2_TR(0x5c67c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c67c6ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5c67c6:L5c67c6:{c.instructions+=1;NFSU2_TR(0x5c67c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c67c9:L5c67c9:{c.instructions+=7;NFSU2_TR(0x5c67c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c67cc:{NFSU2_TR(0x5c67cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c67cf:{NFSU2_TR(0x5c67cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c67d2:{NFSU2_TR(0x5c67d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67d3:{NFSU2_TR(0x5c67d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67d4:{NFSU2_TR(0x5c67d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67d5:{NFSU2_TR(0x5c67d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c67daull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c67da:L5c67da:{c.instructions+=3;NFSU2_TR(0x5c67da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67db:{NFSU2_TR(0x5c67db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67dc:{NFSU2_TR(0x5c67dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c67e1ull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5c67e1:L5c67e1:{c.instructions+=2;NFSU2_TR(0x5c67e1);
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
B5c67e4:{NFSU2_TR(0x5c67e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c67e9ull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5c67e9:L5c67e9:{c.instructions+=7;NFSU2_TR(0x5c67e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c67ec:{NFSU2_TR(0x5c67ec);
__builtin_memmove(gp(0x87092c),(R+28),4);
}
B5c67f2:{NFSU2_TR(0x5c67f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c67f5:{NFSU2_TR(0x5c67f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c67f7:{NFSU2_TR(0x5c67f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67f8:{NFSU2_TR(0x5c67f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c67f9:{NFSU2_TR(0x5c67f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c67ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c67ff:L5c67ff:{c.instructions+=5;NFSU2_TR(0x5c67ff);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5c6804:{NFSU2_TR(0x5c6804);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6807:{NFSU2_TR(0x5c6807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6809:{NFSU2_TR(0x5c6809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c680a:{NFSU2_TR(0x5c680a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6810ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6810:L5c6810:{c.instructions+=9;NFSU2_TR(0x5c6810);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6815:{NFSU2_TR(0x5c6815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6817:{NFSU2_TR(0x5c6817);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6819:{NFSU2_TR(0x5c6819);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c681d:{NFSU2_TR(0x5c681d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c681e:{NFSU2_TR(0x5c681e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6820:{NFSU2_TR(0x5c6820);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6822:{NFSU2_TR(0x5c6822);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6823:{NFSU2_TR(0x5c6823);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6829ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6829:L5c6829:{c.instructions+=4;NFSU2_TR(0x5c6829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c682c:{NFSU2_TR(0x5c682c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c682e:{NFSU2_TR(0x5c682e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c682f:{NFSU2_TR(0x5c682f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6835ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6835:L5c6835:{c.instructions+=3;NFSU2_TR(0x5c6835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c6837:{NFSU2_TR(0x5c6837);
__builtin_memmove((R+4),(R+24),4);
}
B5c6839:{NFSU2_TR(0x5c6839);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c683cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c683c:L5c683c:{c.instructions+=4;NFSU2_TR(0x5c683c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c683f:{NFSU2_TR(0x5c683f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6841:{NFSU2_TR(0x5c6841);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6842:{NFSU2_TR(0x5c6842);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6848ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6848:L5c6848:{c.instructions+=3;NFSU2_TR(0x5c6848);
__builtin_memmove((R+24),gp(0x870848),4);
}
B5c684e:{NFSU2_TR(0x5c684e);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5c6854:{NFSU2_TR(0x5c6854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6859ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5c6859:L5c6859:{c.instructions+=7;NFSU2_TR(0x5c6859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c685c:{NFSU2_TR(0x5c685c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6861:{NFSU2_TR(0x5c6861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6863:{NFSU2_TR(0x5c6863);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6864:{NFSU2_TR(0x5c6864);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6865:{NFSU2_TR(0x5c6865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6866:{NFSU2_TR(0x5c6866);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c686cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c686c:L5c686c:{c.instructions+=6;NFSU2_TR(0x5c686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c686f:{NFSU2_TR(0x5c686f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6874:{NFSU2_TR(0x5c6874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6876:{NFSU2_TR(0x5c6876);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6877:{NFSU2_TR(0x5c6877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6878:{NFSU2_TR(0x5c6878);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c687eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c687e:L5c687e:{c.instructions+=14;NFSU2_TR(0x5c687e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6881:{NFSU2_TR(0x5c6881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6884:{NFSU2_TR(0x5c6884);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6888:{NFSU2_TR(0x5c6888);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c688c:{NFSU2_TR(0x5c688c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6891:{NFSU2_TR(0x5c6891);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c6895:{NFSU2_TR(0x5c6895);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6896:{NFSU2_TR(0x5c6896);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c689a:{NFSU2_TR(0x5c689a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c689e:{NFSU2_TR(0x5c689e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c68a6:{NFSU2_TR(0x5c68a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c68ae:{NFSU2_TR(0x5c68ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c68b0:{NFSU2_TR(0x5c68b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c68b1:{NFSU2_TR(0x5c68b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c68b7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c68b7:L5c68b7:{c.instructions+=8;NFSU2_TR(0x5c68b7);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5c68bd:{NFSU2_TR(0x5c68bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c68be:{NFSU2_TR(0x5c68be);
__builtin_memmove(gp(0x870848),(R+24),4);
}
B5c68c4:{NFSU2_TR(0x5c68c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c68c5:{NFSU2_TR(0x5c68c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c68c6:{NFSU2_TR(0x5c68c6);
__builtin_memmove((R+16),(R+20),4);
}
B5c68c8:{NFSU2_TR(0x5c68c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c68c9:{NFSU2_TR(0x5c68c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c68d0:L5c68d0:{c.instructions+=29;NFSU2_TR(0x5c68d0);
{u32 ea_=u32(u32(8384828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c68d6:{NFSU2_TR(0x5c68d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c68da:{NFSU2_TR(0x5c68da);
{u32 ea_=u32(u32(8384812u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c68e0:{NFSU2_TR(0x5c68e0);
__builtin_memmove(gp(0x86ec98),(R+0),4);
}
B5c68e5:{NFSU2_TR(0x5c68e5);
u8 U[1];
w1(U+0,u8(u32(m1(0x876860))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c68ec:{NFSU2_TR(0x5c68ec);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c68f0:{NFSU2_TR(0x5c68f0);
{u32 ea_=u32(u32(8384812u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c68f6:{NFSU2_TR(0x5c68f6);
{u32 ea_=u32(u32(8384844u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c68fc:{NFSU2_TR(0x5c68fc);
{u32 ea_=u32(u32(8384832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6902:{NFSU2_TR(0x5c6902);
{u32 ea_=u32(u32(8384816u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6908:{NFSU2_TR(0x5c6908);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c690c:{NFSU2_TR(0x5c690c);
{u32 ea_=u32(u32(8384816u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6912:{NFSU2_TR(0x5c6912);
{u32 ea_=u32(u32(8384848u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6918:{NFSU2_TR(0x5c6918);
{u32 ea_=u32(u32(8384836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c691e:{NFSU2_TR(0x5c691e);
{u32 ea_=u32(u32(8384820u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6924:{NFSU2_TR(0x5c6924);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6928:{NFSU2_TR(0x5c6928);
{u32 ea_=u32(u32(8384820u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c692e:{NFSU2_TR(0x5c692e);
{u32 ea_=u32(u32(8384852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6934:{NFSU2_TR(0x5c6934);
{u32 ea_=u32(u32(8384840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c693a:{NFSU2_TR(0x5c693a);
{u32 ea_=u32(u32(8384824u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6940:{NFSU2_TR(0x5c6940);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6944:{NFSU2_TR(0x5c6944);
{u32 ea_=u32(u32(8384824u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c694a:{NFSU2_TR(0x5c694a);
{u32 ea_=u32(u32(8384856u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6950:{NFSU2_TR(0x5c6950);
{u32 ea_=u32(u32(8384808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6956:{NFSU2_TR(0x5c6956);
{u32 ea_=u32(u32(8849644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c695c:{NFSU2_TR(0x5c695c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6960:{NFSU2_TR(0x5c6960);
{u32 ea_=u32(u32(8849644u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6966:{NFSU2_TR(0x5c6966);
{u32 ea_=u32(u32(8384876u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c696c:{NFSU2_TR(0x5c696c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c6987;}}
}
B5c696e:L5c696e:{c.instructions+=5;NFSU2_TR(0x5c696e);
__builtin_memmove((R+0),gp(0x876860),4);
}
B5c6973:{NFSU2_TR(0x5c6973);
__builtin_memmove((R+4),gp(0x7ff7ac),4);
}
B5c6979:{NFSU2_TR(0x5c6979);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B5c697c:{NFSU2_TR(0x5c697c);
__builtin_memmove(gp(0x876860),(R+0),4);
}
B5c6981:{NFSU2_TR(0x5c6981);
__builtin_memmove(gp(0x87685c),(R+4),4);
}
B5c6987:L5c6987:{c.instructions+=4;NFSU2_TR(0x5c6987);
{u32 ea_=u32(u32(8842004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c698d:{NFSU2_TR(0x5c698d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c698f:{NFSU2_TR(0x5c698f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c6992:{NFSU2_TR(0x5c6992);
if(r1(R+514)){{goto L5c69fc;}}
}
B5c6994:L5c6994:{c.instructions+=5;NFSU2_TR(0x5c6994);
{u32 ea_=u32(u32(8384848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c699a:{NFSU2_TR(0x5c699a);
{u32 ea_=u32(u32(8842008u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c69a0:{NFSU2_TR(0x5c69a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c69a2:{NFSU2_TR(0x5c69a2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c69a5:{NFSU2_TR(0x5c69a5);
if(r1(R+514)){{goto L5c69fc;}}
}
B5c69a7:L5c69a7:{c.instructions+=5;NFSU2_TR(0x5c69a7);
{u32 ea_=u32(u32(8384852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c69ad:{NFSU2_TR(0x5c69ad);
{u32 ea_=u32(u32(8842012u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c69b3:{NFSU2_TR(0x5c69b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c69b5:{NFSU2_TR(0x5c69b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c69b8:{NFSU2_TR(0x5c69b8);
if(r1(R+514)){{goto L5c69fc;}}
}
B5c69ba:L5c69ba:{c.instructions+=5;NFSU2_TR(0x5c69ba);
{u32 ea_=u32(u32(8384856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c69c0:{NFSU2_TR(0x5c69c0);
{u32 ea_=u32(u32(8842016u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c69c6:{NFSU2_TR(0x5c69c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c69c8:{NFSU2_TR(0x5c69c8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c69cb:{NFSU2_TR(0x5c69cb);
if(r1(R+514)){{goto L5c69fc;}}
}
B5c69cd:L5c69cd:{c.instructions+=5;NFSU2_TR(0x5c69cd);
{u32 ea_=u32(u32(8874076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c69d3:{NFSU2_TR(0x5c69d3);
{u32 ea_=u32(u32(8386476u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c69d9:{NFSU2_TR(0x5c69d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c69db:{NFSU2_TR(0x5c69db);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c69de:{NFSU2_TR(0x5c69de);
if(r1(R+514)){{goto L5c69fc;}}
}
B5c69e0:L5c69e0:{c.instructions+=5;NFSU2_TR(0x5c69e0);
{u32 ea_=u32(u32(8849648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c69e6:{NFSU2_TR(0x5c69e6);
{u32 ea_=u32(u32(8384908u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c69ec:{NFSU2_TR(0x5c69ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c69ee:{NFSU2_TR(0x5c69ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c69f1:{NFSU2_TR(0x5c69f1);
if(r1(R+514)){{goto L5c69fc;}}
}
B5c69f3:L5c69f3:{c.instructions+=3;NFSU2_TR(0x5c69f3);
__builtin_memmove((R+0),gp(0x876858),4);
}
B5c69f8:{NFSU2_TR(0x5c69f8);
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
B5c69fa:{NFSU2_TR(0x5c69fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c6a17;}}
}
B5c69fc:L5c69fc:{c.instructions+=3;NFSU2_TR(0x5c69fc);
__builtin_memmove((R+8),gp(0x7ff7ac),4);
}
B5c6a02:{NFSU2_TR(0x5c6a02);
__builtin_memmove(gp(0x87685c),(R+8),4);
}
B5c6a08:{NFSU2_TR(0x5c6a08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6a0dull));
TAIL_STATIC(0x5bbe80u,5bb);
}
B5c6a0d:L5c6a0d:{c.instructions+=1;NFSU2_TR(0x5c6a0d);
s4(0x876858,u32(0x1ull));
}
B5c6a17:L5c6a17:{c.instructions+=7;NFSU2_TR(0x5c6a17);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6a1c:{NFSU2_TR(0x5c6a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6a1e:{NFSU2_TR(0x5c6a1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a1f:{NFSU2_TR(0x5c6a1f);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a21:{NFSU2_TR(0x5c6a21);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a26:{NFSU2_TR(0x5c6a26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a27:{NFSU2_TR(0x5c6a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6a2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6a2d:L5c6a2d:{c.instructions+=5;NFSU2_TR(0x5c6a2d);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5c6a31:{NFSU2_TR(0x5c6a31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c6a33:{NFSU2_TR(0x5c6a33);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5c6a38:{NFSU2_TR(0x5c6a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c6a3b:{NFSU2_TR(0x5c6a3b);
if(r1(R+518)){{goto L5c6b13;}}
}
B5c6a41:L5c6a41:{c.instructions+=2;NFSU2_TR(0x5c6a41);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5c6a47:{NFSU2_TR(0x5c6a47);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5c6a4e;}}
}
B5c6a49:L5c6a49:{c.instructions+=3;NFSU2_TR(0x5c6a49);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5c6a4a:{NFSU2_TR(0x5c6a4a);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffeull))));
}
B5c6a4d:{NFSU2_TR(0x5c6a4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c6a4e:L5c6a4e:{c.instructions+=9;NFSU2_TR(0x5c6a4e);
__builtin_memmove((R+8),gp(0x86eb6c),4);
}
B5c6a54:{NFSU2_TR(0x5c6a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6a57:{NFSU2_TR(0x5c6a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c6a59:{NFSU2_TR(0x5c6a59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a5b:{NFSU2_TR(0x5c6a5b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a5d:{NFSU2_TR(0x5c6a5d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a5f:{NFSU2_TR(0x5c6a5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a61:{NFSU2_TR(0x5c6a61);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a63:{NFSU2_TR(0x5c6a63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c6ad1;}}
}
B5c6a65:L5c6a65:{c.instructions+=5;NFSU2_TR(0x5c6a65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6a6c:{NFSU2_TR(0x5c6a6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c6a73:{NFSU2_TR(0x5c6a73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a74:{NFSU2_TR(0x5c6a74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a75:{NFSU2_TR(0x5c6a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6a7aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6a7a:L5c6a7a:{c.instructions+=11;NFSU2_TR(0x5c6a7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c6a81:{NFSU2_TR(0x5c6a81);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5c6a86:{NFSU2_TR(0x5c6a86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c6a8d:{NFSU2_TR(0x5c6a8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a8f:{NFSU2_TR(0x5c6a8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a91:{NFSU2_TR(0x5c6a91);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a93:{NFSU2_TR(0x5c6a93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a95:{NFSU2_TR(0x5c6a95);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a97:{NFSU2_TR(0x5c6a97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a98:{NFSU2_TR(0x5c6a98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6a99:{NFSU2_TR(0x5c6a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6a9eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6a9e:L5c6a9e:{c.instructions+=11;NFSU2_TR(0x5c6a9e);
__builtin_memmove((R+8),gp(0x8708f4),4);
}
B5c6aa4:{NFSU2_TR(0x5c6aa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6aab:{NFSU2_TR(0x5c6aab);
__builtin_memmove((R+4),gp(0x870850),4);
}
B5c6ab1:{NFSU2_TR(0x5c6ab1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ab3:{NFSU2_TR(0x5c6ab3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ab5:{NFSU2_TR(0x5c6ab5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ab7:{NFSU2_TR(0x5c6ab7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ab9:{NFSU2_TR(0x5c6ab9);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6abb:{NFSU2_TR(0x5c6abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6abc:{NFSU2_TR(0x5c6abc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6abd:{NFSU2_TR(0x5c6abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6ac2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6ac2:L5c6ac2:{c.instructions+=4;NFSU2_TR(0x5c6ac2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6ac5:{NFSU2_TR(0x5c6ac5);
s4(0x8708f4,u32(0xffffffffull));
}
B5c6acf:{NFSU2_TR(0x5c6acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c6ad0:{NFSU2_TR(0x5c6ad0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c6ad1:L5c6ad1:{c.instructions+=5;NFSU2_TR(0x5c6ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c6ad8:{NFSU2_TR(0x5c6ad8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6adf:{NFSU2_TR(0x5c6adf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ae0:{NFSU2_TR(0x5c6ae0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ae1:{NFSU2_TR(0x5c6ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6ae6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6ae6:L5c6ae6:{c.instructions+=10;NFSU2_TR(0x5c6ae6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c6aed:{NFSU2_TR(0x5c6aed);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5c6af3:{NFSU2_TR(0x5c6af3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6af5:{NFSU2_TR(0x5c6af5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6af7:{NFSU2_TR(0x5c6af7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6af9:{NFSU2_TR(0x5c6af9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6afb:{NFSU2_TR(0x5c6afb);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6afd:{NFSU2_TR(0x5c6afd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6afe:{NFSU2_TR(0x5c6afe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6aff:{NFSU2_TR(0x5c6aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6b04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6b04:L5c6b04:{c.instructions+=4;NFSU2_TR(0x5c6b04);
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
B5c6b07:{NFSU2_TR(0x5c6b07);
s4(0x8708f4,u32(0xffffffffull));
}
B5c6b11:{NFSU2_TR(0x5c6b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c6b12:{NFSU2_TR(0x5c6b12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c6b13:L5c6b13:{c.instructions+=2;NFSU2_TR(0x5c6b13);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5c6b19:{NFSU2_TR(0x5c6b19);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5c6b20;}}
}
B5c6b1b:L5c6b1b:{c.instructions+=3;NFSU2_TR(0x5c6b1b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5c6b1c:{NFSU2_TR(0x5c6b1c);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffeull))));
}
B5c6b1f:{NFSU2_TR(0x5c6b1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5c6b20:L5c6b20:{c.instructions+=9;NFSU2_TR(0x5c6b20);
__builtin_memmove((R+4),gp(0x86eb6c),4);
}
B5c6b26:{NFSU2_TR(0x5c6b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6b29:{NFSU2_TR(0x5c6b29);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c6b2b:{NFSU2_TR(0x5c6b2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b2d:{NFSU2_TR(0x5c6b2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b2f:{NFSU2_TR(0x5c6b2f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b31:{NFSU2_TR(0x5c6b31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b33:{NFSU2_TR(0x5c6b33);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b35:{NFSU2_TR(0x5c6b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c6ba1;}}
}
B5c6b37:L5c6b37:{c.instructions+=5;NFSU2_TR(0x5c6b37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c6b3e:{NFSU2_TR(0x5c6b3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6b45:{NFSU2_TR(0x5c6b45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b46:{NFSU2_TR(0x5c6b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b47:{NFSU2_TR(0x5c6b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6b4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6b4c:L5c6b4c:{c.instructions+=11;NFSU2_TR(0x5c6b4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c6b53:{NFSU2_TR(0x5c6b53);
__builtin_memmove((R+8),gp(0x8708f4),4);
}
B5c6b59:{NFSU2_TR(0x5c6b59);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6b60:{NFSU2_TR(0x5c6b60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b62:{NFSU2_TR(0x5c6b62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b64:{NFSU2_TR(0x5c6b64);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b66:{NFSU2_TR(0x5c6b66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b68:{NFSU2_TR(0x5c6b68);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b6a:{NFSU2_TR(0x5c6b6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b6b:{NFSU2_TR(0x5c6b6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b6c:{NFSU2_TR(0x5c6b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6b71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6b71:L5c6b71:{c.instructions+=11;NFSU2_TR(0x5c6b71);
__builtin_memmove((R+4),gp(0x8708f4),4);
}
B5c6b77:{NFSU2_TR(0x5c6b77);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c6b7e:{NFSU2_TR(0x5c6b7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6b85:{NFSU2_TR(0x5c6b85);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b87:{NFSU2_TR(0x5c6b87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b89:{NFSU2_TR(0x5c6b89);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b8b:{NFSU2_TR(0x5c6b8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b8d:{NFSU2_TR(0x5c6b8d);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b8f:{NFSU2_TR(0x5c6b8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b90:{NFSU2_TR(0x5c6b90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6b91:{NFSU2_TR(0x5c6b91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6b96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6b96:L5c6b96:{c.instructions+=4;NFSU2_TR(0x5c6b96);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6b99:{NFSU2_TR(0x5c6b99);
__builtin_memmove(gp(0x8708f4),(R+24),4);
}
B5c6b9f:{NFSU2_TR(0x5c6b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c6ba0:{NFSU2_TR(0x5c6ba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c6ba1:L5c6ba1:{c.instructions+=5;NFSU2_TR(0x5c6ba1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5c6ba8:{NFSU2_TR(0x5c6ba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c6baf:{NFSU2_TR(0x5c6baf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bb0:{NFSU2_TR(0x5c6bb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bb1:{NFSU2_TR(0x5c6bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6bb6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6bb6:L5c6bb6:{c.instructions+=11;NFSU2_TR(0x5c6bb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c6bbd:{NFSU2_TR(0x5c6bbd);
__builtin_memmove((R+4),gp(0x8708f4),4);
}
B5c6bc3:{NFSU2_TR(0x5c6bc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5c6bca:{NFSU2_TR(0x5c6bca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bcc:{NFSU2_TR(0x5c6bcc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bce:{NFSU2_TR(0x5c6bce);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bd0:{NFSU2_TR(0x5c6bd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bd2:{NFSU2_TR(0x5c6bd2);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bd4:{NFSU2_TR(0x5c6bd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bd5:{NFSU2_TR(0x5c6bd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bd6:{NFSU2_TR(0x5c6bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6bdbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6520u);}goto L5c6520;}
}
B5c6bdb:L5c6bdb:{c.instructions+=3;NFSU2_TR(0x5c6bdb);
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
B5c6bde:{NFSU2_TR(0x5c6bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c6bdf:{NFSU2_TR(0x5c6bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c6be0:L5c6be0:{c.instructions+=9;NFSU2_TR(0x5c6be0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x140ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x140ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x140ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6be6:{NFSU2_TR(0x5c6be6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6be7:{NFSU2_TR(0x5c6be7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6be8:{NFSU2_TR(0x5c6be8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c6bef:{NFSU2_TR(0x5c6bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c6bf1:{NFSU2_TR(0x5c6bf1);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c6bf8:{NFSU2_TR(0x5c6bf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bf9:{NFSU2_TR(0x5c6bf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6bfa:{NFSU2_TR(0x5c6bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6bfdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6bfd:L5c6bfd:{c.instructions+=7;NFSU2_TR(0x5c6bfd);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6c02:{NFSU2_TR(0x5c6c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6c04:{NFSU2_TR(0x5c6c04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c05:{NFSU2_TR(0x5c6c05);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6c07:{NFSU2_TR(0x5c6c07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c08:{NFSU2_TR(0x5c6c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c09:{NFSU2_TR(0x5c6c09);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6c0full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6c0f:L5c6c0f:{c.instructions+=2;NFSU2_TR(0x5c6c0f);
u8 U[14];
__builtin_memmove((U+6),gp(0x870d08),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6c15:{NFSU2_TR(0x5c6c15);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c6c26;}}
}
B5c6c17:L5c6c17:{c.instructions+=5;NFSU2_TR(0x5c6c17);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6c1c:{NFSU2_TR(0x5c6c1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6c1e:{NFSU2_TR(0x5c6c1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c1f:{NFSU2_TR(0x5c6c1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c20:{NFSU2_TR(0x5c6c20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6c26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6c26:L5c6c26:{c.instructions+=23;NFSU2_TR(0x5c6c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6c2d:{NFSU2_TR(0x5c6c2d);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6c34:{NFSU2_TR(0x5c6c34);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6c3b:{NFSU2_TR(0x5c6c3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c6c3d:{NFSU2_TR(0x5c6c3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c3e:{NFSU2_TR(0x5c6c3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6c3f:{NFSU2_TR(0x5c6c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c47:{NFSU2_TR(0x5c6c47);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c4f:{NFSU2_TR(0x5c6c4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c57:{NFSU2_TR(0x5c6c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c5b:{NFSU2_TR(0x5c6c5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c63:{NFSU2_TR(0x5c6c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c6b:{NFSU2_TR(0x5c6c6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c73:{NFSU2_TR(0x5c6c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c77:{NFSU2_TR(0x5c6c77);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c82:{NFSU2_TR(0x5c6c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c8d:{NFSU2_TR(0x5c6c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c98:{NFSU2_TR(0x5c6c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6c9f:{NFSU2_TR(0x5c6c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6caa:{NFSU2_TR(0x5c6caa);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6cb5:{NFSU2_TR(0x5c6cb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6cc0:{NFSU2_TR(0x5c6cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6cc7:{NFSU2_TR(0x5c6cc7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c6ccf;}}
}
B5c6cc9:L5c6cc9:{c.instructions+=1;NFSU2_TR(0x5c6cc9);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6ccf:L5c6ccf:{c.instructions+=6;NFSU2_TR(0x5c6ccf);
{u32 ea_=u32(u32(8005580u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6cd5:{NFSU2_TR(0x5c6cd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6cdc:{NFSU2_TR(0x5c6cdc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c6cde:{NFSU2_TR(0x5c6cde);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6ce2:{NFSU2_TR(0x5c6ce2);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6ce9:{NFSU2_TR(0x5c6ce9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c6cf1;}}
}
B5c6ceb:L5c6ceb:{c.instructions+=1;NFSU2_TR(0x5c6ceb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6cf1:L5c6cf1:{c.instructions+=65;NFSU2_TR(0x5c6cf1);
{u32 ea_=u32(u32(8005584u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5c6cf7:{NFSU2_TR(0x5c6cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c6cfe:{NFSU2_TR(0x5c6cfe);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5c6d01:{NFSU2_TR(0x5c6d01);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d05:{NFSU2_TR(0x5c6d05);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6d09:{NFSU2_TR(0x5c6d09);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c6d0b:{NFSU2_TR(0x5c6d0b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d0f:{NFSU2_TR(0x5c6d0f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6d13:{NFSU2_TR(0x5c6d13);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c6d15:{NFSU2_TR(0x5c6d15);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d19:{NFSU2_TR(0x5c6d19);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6d1f:{NFSU2_TR(0x5c6d1f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6d23:{NFSU2_TR(0x5c6d23);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d27:{NFSU2_TR(0x5c6d27);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6d29:{NFSU2_TR(0x5c6d29);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d2d:{NFSU2_TR(0x5c6d2d);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d34:{NFSU2_TR(0x5c6d34);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c6d3a:{NFSU2_TR(0x5c6d3a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c6d3e:{NFSU2_TR(0x5c6d3e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d42:{NFSU2_TR(0x5c6d42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6d46:{NFSU2_TR(0x5c6d46);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d4d:{NFSU2_TR(0x5c6d4d);
__builtin_memmove((R+8),(R+4),4);
}
B5c6d4f:{NFSU2_TR(0x5c6d4f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6d51:{NFSU2_TR(0x5c6d51);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6d58:{NFSU2_TR(0x5c6d58);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d5f:{NFSU2_TR(0x5c6d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6d66:{NFSU2_TR(0x5c6d66);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d6d:{NFSU2_TR(0x5c6d6d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6d6f:{NFSU2_TR(0x5c6d6f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d73:{NFSU2_TR(0x5c6d73);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c6d75:{NFSU2_TR(0x5c6d75);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d79:{NFSU2_TR(0x5c6d79);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6d7b:{NFSU2_TR(0x5c6d7b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d7f:{NFSU2_TR(0x5c6d7f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c6d81:{NFSU2_TR(0x5c6d81);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d85:{NFSU2_TR(0x5c6d85);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6d87:{NFSU2_TR(0x5c6d87);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d8e:{NFSU2_TR(0x5c6d8e);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6d95:{NFSU2_TR(0x5c6d95);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6d97:{NFSU2_TR(0x5c6d97);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6d9e:{NFSU2_TR(0x5c6d9e);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6da5:{NFSU2_TR(0x5c6da5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6da7:{NFSU2_TR(0x5c6da7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6dab:{NFSU2_TR(0x5c6dab);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c6dad:{NFSU2_TR(0x5c6dad);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6db1:{NFSU2_TR(0x5c6db1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6db3:{NFSU2_TR(0x5c6db3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6dba:{NFSU2_TR(0x5c6dba);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c6dbc:{NFSU2_TR(0x5c6dbc);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6dc3:{NFSU2_TR(0x5c6dc3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6dc5:{NFSU2_TR(0x5c6dc5);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6dcc:{NFSU2_TR(0x5c6dcc);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6dd3:{NFSU2_TR(0x5c6dd3);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5c6dd5:{NFSU2_TR(0x5c6dd5);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6ddc:{NFSU2_TR(0x5c6ddc);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6de3:{NFSU2_TR(0x5c6de3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5c6de5:{NFSU2_TR(0x5c6de5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6de9:{NFSU2_TR(0x5c6de9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5c6deb:{NFSU2_TR(0x5c6deb);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6def:{NFSU2_TR(0x5c6def);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5c6df6:{NFSU2_TR(0x5c6df6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c6df8:{NFSU2_TR(0x5c6df8);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6dff:{NFSU2_TR(0x5c6dff);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6e06:{NFSU2_TR(0x5c6e06);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6e0d:{NFSU2_TR(0x5c6e0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c6e67;}}
}
B5c6e0f:L5c6e0f:{c.instructions+=5;NFSU2_TR(0x5c6e0f);
__builtin_memmove((R+24),gp(0x86eb70),4);
}
B5c6e15:{NFSU2_TR(0x5c6e15);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c6e1b:{NFSU2_TR(0x5c6e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c6e1d:{NFSU2_TR(0x5c6e1d);
__builtin_memmove((R+4),(R+24),4);
}
B5c6e1f:{NFSU2_TR(0x5c6e1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e22:L5c6e22:{c.instructions+=6;NFSU2_TR(0x5c6e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6e25:{NFSU2_TR(0x5c6e25);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6e2a:{NFSU2_TR(0x5c6e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6e2c:{NFSU2_TR(0x5c6e2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e2d:{NFSU2_TR(0x5c6e2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e2e:{NFSU2_TR(0x5c6e2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e34:L5c6e34:{c.instructions+=7;NFSU2_TR(0x5c6e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6e37:{NFSU2_TR(0x5c6e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6e39:{NFSU2_TR(0x5c6e39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e3a:{NFSU2_TR(0x5c6e3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c6e3e:{NFSU2_TR(0x5c6e3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e3f:{NFSU2_TR(0x5c6e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e40:{NFSU2_TR(0x5c6e40);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e46:L5c6e46:{c.instructions+=5;NFSU2_TR(0x5c6e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6e49:{NFSU2_TR(0x5c6e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6e4b:{NFSU2_TR(0x5c6e4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e4c:{NFSU2_TR(0x5c6e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e4d:{NFSU2_TR(0x5c6e4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e53ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e53:L5c6e53:{c.instructions+=3;NFSU2_TR(0x5c6e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6e5e:{NFSU2_TR(0x5c6e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c6e65:{NFSU2_TR(0x5c6e65);
{goto L5c6eae;}
}
B5c6e67:L5c6e67:{c.instructions+=5;NFSU2_TR(0x5c6e67);
__builtin_memmove((R+24),gp(0x86eb64),4);
}
B5c6e6d:{NFSU2_TR(0x5c6e6d);
__builtin_memmove(gp(0x870910),(R+24),4);
}
B5c6e73:{NFSU2_TR(0x5c6e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6e75:{NFSU2_TR(0x5c6e75);
__builtin_memmove((R+4),(R+24),4);
}
B5c6e77:{NFSU2_TR(0x5c6e77);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e7a:L5c6e7a:{c.instructions+=6;NFSU2_TR(0x5c6e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6e7d:{NFSU2_TR(0x5c6e7d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c6e82:{NFSU2_TR(0x5c6e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6e84:{NFSU2_TR(0x5c6e84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e85:{NFSU2_TR(0x5c6e85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e86:{NFSU2_TR(0x5c6e86);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e8cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e8c:L5c6e8c:{c.instructions+=7;NFSU2_TR(0x5c6e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6e8f:{NFSU2_TR(0x5c6e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6e91:{NFSU2_TR(0x5c6e91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e92:{NFSU2_TR(0x5c6e92);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c6e96:{NFSU2_TR(0x5c6e96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e97:{NFSU2_TR(0x5c6e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6e98:{NFSU2_TR(0x5c6e98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6e9eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6e9e:L5c6e9e:{c.instructions+=6;NFSU2_TR(0x5c6e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6ea1:{NFSU2_TR(0x5c6ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c6ea3:{NFSU2_TR(0x5c6ea3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5c6ea6:{NFSU2_TR(0x5c6ea6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ea7:{NFSU2_TR(0x5c6ea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ea8:{NFSU2_TR(0x5c6ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6eaeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6eae:L5c6eae:{c.instructions+=7;NFSU2_TR(0x5c6eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6eb5:{NFSU2_TR(0x5c6eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6ebc:{NFSU2_TR(0x5c6ebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c6ec3:{NFSU2_TR(0x5c6ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ec4:{NFSU2_TR(0x5c6ec4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ec5:{NFSU2_TR(0x5c6ec5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ec6:{NFSU2_TR(0x5c6ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6ecbull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5c6ecb:L5c6ecb:{c.instructions+=7;NFSU2_TR(0x5c6ecb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c6ece:{NFSU2_TR(0x5c6ece);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c6ed0:{NFSU2_TR(0x5c6ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6ed8:{NFSU2_TR(0x5c6ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6ee0:{NFSU2_TR(0x5c6ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6ee8:{NFSU2_TR(0x5c6ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c6ef0:{NFSU2_TR(0x5c6ef0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5c6fc2;}}
}
B5c6ef6:L5c6ef6:{c.instructions+=8;NFSU2_TR(0x5c6ef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c6efd:{NFSU2_TR(0x5c6efd);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6f04:{NFSU2_TR(0x5c6f04);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c6f08:{NFSU2_TR(0x5c6f08);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5c6f0b:{NFSU2_TR(0x5c6f0b);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6f0d:{NFSU2_TR(0x5c6f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5c6f14:{NFSU2_TR(0x5c6f14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6f18:{NFSU2_TR(0x5c6f18);
{goto L5c6f20;}
}
B5c6f1a:L5c6f1a:{c.instructions+=2;NFSU2_TR(0x5c6f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6f1e:{NFSU2_TR(0x5c6f1e);
__builtin_memmove((R+28),(R+28),4);
}
B5c6f20:L5c6f20:{c.instructions+=13;NFSU2_TR(0x5c6f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6f23:{NFSU2_TR(0x5c6f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6f25:{NFSU2_TR(0x5c6f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c6f28:{NFSU2_TR(0x5c6f28);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c6f2c:{NFSU2_TR(0x5c6f2c);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c6f30:{NFSU2_TR(0x5c6f30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6f31:{NFSU2_TR(0x5c6f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6f34:{NFSU2_TR(0x5c6f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c6f37:{NFSU2_TR(0x5c6f37);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c6f3b:{NFSU2_TR(0x5c6f3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6f3c:{NFSU2_TR(0x5c6f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6f3f:{NFSU2_TR(0x5c6f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6f40:{NFSU2_TR(0x5c6f40);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6f46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6f46:L5c6f46:{c.instructions+=6;NFSU2_TR(0x5c6f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c6f49:{NFSU2_TR(0x5c6f49);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B5c6f4f:{NFSU2_TR(0x5c6f4f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c6f51:{NFSU2_TR(0x5c6f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6f55:{NFSU2_TR(0x5c6f55);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6f59:{NFSU2_TR(0x5c6f59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c6f61;}}
}
B5c6f5b:L5c6f5b:{c.instructions+=1;NFSU2_TR(0x5c6f5b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c6f61:L5c6f61:{c.instructions+=23;NFSU2_TR(0x5c6f61);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6f67:{NFSU2_TR(0x5c6f67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5c6f6b:{NFSU2_TR(0x5c6f6b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B5c6f6e:{NFSU2_TR(0x5c6f6e);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6f71:{NFSU2_TR(0x5c6f71);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5c6f75:{NFSU2_TR(0x5c6f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6f79:{NFSU2_TR(0x5c6f79);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5c6f7a:{NFSU2_TR(0x5c6f7a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5c6f7d:{NFSU2_TR(0x5c6f7d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6f81:{NFSU2_TR(0x5c6f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6f85:{NFSU2_TR(0x5c6f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6f8c:{NFSU2_TR(0x5c6f8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5c6f8f:{NFSU2_TR(0x5c6f8f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c6f91:{NFSU2_TR(0x5c6f91);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6f97:{NFSU2_TR(0x5c6f97);
{u32 ea_=u32(r4(R+12)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6f9a:{NFSU2_TR(0x5c6f9a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6f9e:{NFSU2_TR(0x5c6f9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c6fa2:{NFSU2_TR(0x5c6fa2);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6fa8:{NFSU2_TR(0x5c6fa8);
{u32 ea_=u32(r4(R+12)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6fab:{NFSU2_TR(0x5c6fab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c6faf:{NFSU2_TR(0x5c6faf);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c6fb5:{NFSU2_TR(0x5c6fb5);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c6fb8:{NFSU2_TR(0x5c6fb8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c6f1au);}goto L5c6f1a;}}
}
B5c6fbe:L5c6fbe:{c.instructions+=2;NFSU2_TR(0x5c6fbe);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5c6fc0:{NFSU2_TR(0x5c6fc0);
__builtin_memmove((R+28),(R+0),4);
}
B5c6fc2:L5c6fc2:{c.instructions+=2;NFSU2_TR(0x5c6fc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c6fc6:{NFSU2_TR(0x5c6fc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5c7012u,5c7);}
}
B5c6fc8:L5c6fc8:{c.instructions+=3;NFSU2_TR(0x5c6fc8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5c6fcb:{NFSU2_TR(0x5c6fcb);
__builtin_memmove((R+12),(R+28),4);
}
B5c6fcd:{NFSU2_TR(0x5c6fcd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5c7012u,5c7);}
}
B5c6fcf:L5c6fcf:{c.instructions+=13;NFSU2_TR(0x5c6fcf);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5c6fd2:{NFSU2_TR(0x5c6fd2);
u8 U[12];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5c6fd9:{NFSU2_TR(0x5c6fd9);
__builtin_memmove((R+16),(R+16),4);
}
B5c6fe0:{NFSU2_TR(0x5c6fe0);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c6fe4:{NFSU2_TR(0x5c6fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c6fe7:{NFSU2_TR(0x5c6fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c6fe9:{NFSU2_TR(0x5c6fe9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6fea:{NFSU2_TR(0x5c6fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c6fed:{NFSU2_TR(0x5c6fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5c6ff0:{NFSU2_TR(0x5c6ff0);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5c6ff4:{NFSU2_TR(0x5c6ff4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ff5:{NFSU2_TR(0x5c6ff5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c6ff6:{NFSU2_TR(0x5c6ff6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c6ffcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c6ffc:L5c6ffc:{c.instructions+=2;NFSU2_TR(0x5c6ffc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5c6ffe:{NFSU2_TR(0x5c6ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5c7001u,5c7);
}
XIT:NFSU2_TR_EXIT(0x5c6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
