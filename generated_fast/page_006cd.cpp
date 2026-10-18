#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6ce(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6cd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6cd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 page_6cd(Cpu& c){return body_6cd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6cd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6cd000:goto L6cd000;
case 0x6cd006:c.instructions+=2;goto B6cd006;
case 0x6cd009:c.instructions+=1;goto B6cd009;
case 0x6cd00b:goto L6cd00b;
case 0x6cd00d:c.instructions+=1;goto B6cd00d;
case 0x6cd012:goto L6cd012;
case 0x6cd015:c.instructions+=5;goto B6cd015;
case 0x6cd016:c.instructions+=4;goto B6cd016;
case 0x6cd019:c.instructions+=3;goto B6cd019;
case 0x6cd01b:c.instructions+=2;goto B6cd01b;
case 0x6cd01c:c.instructions+=1;goto B6cd01c;
case 0x6cd022:goto L6cd022;
case 0x6cd025:c.instructions+=2;goto B6cd025;
case 0x6cd029:c.instructions+=1;goto B6cd029;
case 0x6cd02b:goto L6cd02b;
case 0x6cd02e:c.instructions+=2;goto B6cd02e;
case 0x6cd030:c.instructions+=1;goto B6cd030;
case 0x6cd032:goto L6cd032;
case 0x6cd035:goto L6cd035;
case 0x6cd038:c.instructions+=2;goto B6cd038;
case 0x6cd03a:c.instructions+=1;goto B6cd03a;
case 0x6cd03c:goto L6cd03c;
case 0x6cd03e:c.instructions+=1;goto B6cd03e;
case 0x6cd040:goto L6cd040;
case 0x6cd043:goto L6cd043;
case 0x6cd045:c.instructions+=1;goto B6cd045;
case 0x6cd047:goto L6cd047;
case 0x6cd049:c.instructions+=1;goto B6cd049;
case 0x6cd04b:goto L6cd04b;
case 0x6cd04e:c.instructions+=4;goto B6cd04e;
case 0x6cd04f:c.instructions+=3;goto B6cd04f;
case 0x6cd051:c.instructions+=2;goto B6cd051;
case 0x6cd052:c.instructions+=1;goto B6cd052;
case 0x6cd057:goto L6cd057;
case 0x6cd059:c.instructions+=1;goto B6cd059;
case 0x6cd05b:goto L6cd05b;
case 0x6cd05e:c.instructions+=2;goto B6cd05e;
case 0x6cd05f:c.instructions+=1;goto B6cd05f;
case 0x6cd064:goto L6cd064;
case 0x6cd067:c.instructions+=2;goto B6cd067;
case 0x6cd068:c.instructions+=1;goto B6cd068;
case 0x6cd06a:goto L6cd06a;
case 0x6cd06d:c.instructions+=3;goto B6cd06d;
case 0x6cd073:c.instructions+=2;goto B6cd073;
case 0x6cd076:c.instructions+=1;goto B6cd076;
case 0x6cd078:goto L6cd078;
case 0x6cd07a:c.instructions+=1;goto B6cd07a;
case 0x6cd07c:goto L6cd07c;
case 0x6cd07f:c.instructions+=2;goto B6cd07f;
case 0x6cd084:c.instructions+=1;goto B6cd084;
case 0x6cd086:goto L6cd086;
case 0x6cd08c:c.instructions+=1;goto B6cd08c;
case 0x6cd08e:goto L6cd08e;
case 0x6cd091:c.instructions+=1;goto B6cd091;
case 0x6cd093:goto L6cd093;
case 0x6cd095:c.instructions+=1;goto B6cd095;
case 0x6cd097:goto L6cd097;
case 0x6cd09a:c.instructions+=2;goto B6cd09a;
case 0x6cd09b:c.instructions+=1;goto B6cd09b;
case 0x6cd0a0:goto L6cd0a0;
case 0x6cd0a3:c.instructions+=2;goto B6cd0a3;
case 0x6cd0a4:c.instructions+=1;goto B6cd0a4;
case 0x6cd0a6:goto L6cd0a6;
case 0x6cd0a9:goto L6cd0a9;
case 0x6cd0ac:c.instructions+=2;goto B6cd0ac;
case 0x6cd0ae:c.instructions+=1;goto B6cd0ae;
case 0x6cd0b4:goto L6cd0b4;
case 0x6cd0b6:c.instructions+=1;goto B6cd0b6;
case 0x6cd0b8:goto L6cd0b8;
case 0x6cd0bb:c.instructions+=2;goto B6cd0bb;
case 0x6cd0bd:c.instructions+=1;goto B6cd0bd;
case 0x6cd0bf:goto L6cd0bf;
case 0x6cd0c2:c.instructions+=2;goto B6cd0c2;
case 0x6cd0c4:c.instructions+=1;goto B6cd0c4;
case 0x6cd0c6:goto L6cd0c6;
case 0x6cd0c9:c.instructions+=2;goto B6cd0c9;
case 0x6cd0ca:c.instructions+=1;goto B6cd0ca;
case 0x6cd0cf:goto L6cd0cf;
case 0x6cd0d2:c.instructions+=2;goto B6cd0d2;
case 0x6cd0d3:c.instructions+=1;goto B6cd0d3;
case 0x6cd0d5:goto L6cd0d5;
case 0x6cd0d8:c.instructions+=3;goto B6cd0d8;
case 0x6cd0db:c.instructions+=2;goto B6cd0db;
case 0x6cd0dc:c.instructions+=1;goto B6cd0dc;
case 0x6cd0e1:goto L6cd0e1;
case 0x6cd0e3:c.instructions+=2;goto B6cd0e3;
case 0x6cd0e4:c.instructions+=1;goto B6cd0e4;
case 0x6cd0e6:goto L6cd0e6;
case 0x6cd0e9:c.instructions+=2;goto B6cd0e9;
case 0x6cd0eb:c.instructions+=1;goto B6cd0eb;
case 0x6cd0ed:goto L6cd0ed;
case 0x6cd0ee:goto L6cd0ee;
case 0x6cd0f1:c.instructions+=2;goto B6cd0f1;
case 0x6cd0f2:c.instructions+=1;goto B6cd0f2;
case 0x6cd0f7:goto L6cd0f7;
case 0x6cd0f9:c.instructions+=2;goto B6cd0f9;
case 0x6cd0fa:c.instructions+=1;goto B6cd0fa;
case 0x6cd0fc:goto L6cd0fc;
case 0x6cd0fe:c.instructions+=1;goto B6cd0fe;
case 0x6cd100:goto L6cd100;
case 0x6cd101:c.instructions+=1;goto B6cd101;
case 0x6cd106:goto L6cd106;
case 0x6cd10b:c.instructions+=2;goto B6cd10b;
case 0x6cd10c:c.instructions+=1;goto B6cd10c;
case 0x6cd10e:goto L6cd10e;
case 0x6cd10f:c.instructions+=6;goto B6cd10f;
case 0x6cd110:c.instructions+=5;goto B6cd110;
case 0x6cd115:c.instructions+=4;goto B6cd115;
case 0x6cd117:c.instructions+=3;goto B6cd117;
case 0x6cd119:c.instructions+=2;goto B6cd119;
case 0x6cd11c:c.instructions+=1;goto B6cd11c;
case 0x6cd121:goto L6cd121;
case 0x6cd124:c.instructions+=2;goto B6cd124;
case 0x6cd129:c.instructions+=1;goto B6cd129;
case 0x6cd12b:goto L6cd12b;
case 0x6cd12e:c.instructions+=3;goto B6cd12e;
case 0x6cd131:c.instructions+=2;goto B6cd131;
case 0x6cd134:c.instructions+=1;goto B6cd134;
case 0x6cd138:goto L6cd138;
case 0x6cd13a:goto L6cd13a;
case 0x6cd13b:c.instructions+=1;goto B6cd13b;
case 0x6cd13c:goto L6cd13c;
case 0x6cd13d:c.instructions+=2;goto B6cd13d;
case 0x6cd13e:c.instructions+=1;goto B6cd13e;
case 0x6cd141:goto L6cd141;
case 0x6cd143:c.instructions+=4;goto B6cd143;
case 0x6cd144:c.instructions+=3;goto B6cd144;
case 0x6cd146:c.instructions+=2;goto B6cd146;
case 0x6cd149:c.instructions+=1;goto B6cd149;
case 0x6cd14b:goto L6cd14b;
case 0x6cd14e:c.instructions+=1;goto B6cd14e;
case 0x6cd150:goto L6cd150;
case 0x6cd153:goto L6cd153;
case 0x6cd156:c.instructions+=2;goto B6cd156;
case 0x6cd159:c.instructions+=1;goto B6cd159;
case 0x6cd15b:goto L6cd15b;
case 0x6cd15c:c.instructions+=1;goto B6cd15c;
case 0x6cd15f:goto L6cd15f;
case 0x6cd161:c.instructions+=4;goto B6cd161;
case 0x6cd162:c.instructions+=3;goto B6cd162;
case 0x6cd163:c.instructions+=2;goto B6cd163;
case 0x6cd165:c.instructions+=1;goto B6cd165;
case 0x6cd16a:goto L6cd16a;
case 0x6cd16c:c.instructions+=4;goto B6cd16c;
case 0x6cd16d:c.instructions+=3;goto B6cd16d;
case 0x6cd16f:c.instructions+=2;goto B6cd16f;
case 0x6cd175:c.instructions+=1;goto B6cd175;
case 0x6cd17b:goto L6cd17b;
case 0x6cd17d:goto L6cd17d;
case 0x6cd17f:c.instructions+=2;goto B6cd17f;
case 0x6cd180:c.instructions+=1;goto B6cd180;
case 0x6cd186:goto L6cd186;
case 0x6cd188:goto L6cd188;
case 0x6cd18f:c.instructions+=35;goto B6cd18f;
case 0x6cd191:c.instructions+=34;goto B6cd191;
case 0x6cd197:c.instructions+=33;goto B6cd197;
case 0x6cd19d:c.instructions+=32;goto B6cd19d;
case 0x6cd1a3:c.instructions+=31;goto B6cd1a3;
case 0x6cd1a6:c.instructions+=30;goto B6cd1a6;
case 0x6cd1ac:c.instructions+=29;goto B6cd1ac;
case 0x6cd1ad:c.instructions+=28;goto B6cd1ad;
case 0x6cd1ae:c.instructions+=27;goto B6cd1ae;
case 0x6cd1af:c.instructions+=26;goto B6cd1af;
case 0x6cd1b6:c.instructions+=25;goto B6cd1b6;
case 0x6cd1b7:c.instructions+=24;goto B6cd1b7;
case 0x6cd1bd:c.instructions+=23;goto B6cd1bd;
case 0x6cd1c3:c.instructions+=22;goto B6cd1c3;
case 0x6cd1c9:c.instructions+=21;goto B6cd1c9;
case 0x6cd1cf:c.instructions+=20;goto B6cd1cf;
case 0x6cd1d5:c.instructions+=19;goto B6cd1d5;
case 0x6cd1db:c.instructions+=18;goto B6cd1db;
case 0x6cd1e1:c.instructions+=17;goto B6cd1e1;
case 0x6cd1e7:c.instructions+=16;goto B6cd1e7;
case 0x6cd1ed:c.instructions+=15;goto B6cd1ed;
case 0x6cd1f3:c.instructions+=14;goto B6cd1f3;
case 0x6cd1f9:c.instructions+=13;goto B6cd1f9;
case 0x6cd1ff:c.instructions+=12;goto B6cd1ff;
case 0x6cd205:c.instructions+=11;goto B6cd205;
case 0x6cd20b:c.instructions+=10;goto B6cd20b;
case 0x6cd215:c.instructions+=9;goto B6cd215;
case 0x6cd21f:c.instructions+=8;goto B6cd21f;
case 0x6cd229:c.instructions+=7;goto B6cd229;
case 0x6cd22f:c.instructions+=6;goto B6cd22f;
case 0x6cd235:c.instructions+=5;goto B6cd235;
case 0x6cd23b:c.instructions+=4;goto B6cd23b;
case 0x6cd241:c.instructions+=3;goto B6cd241;
case 0x6cd243:c.instructions+=2;goto B6cd243;
case 0x6cd244:c.instructions+=1;goto B6cd244;
case 0x6cd245:goto L6cd245;
case 0x6cd247:c.instructions+=6;goto B6cd247;
case 0x6cd248:c.instructions+=5;goto B6cd248;
case 0x6cd24a:c.instructions+=4;goto B6cd24a;
case 0x6cd24b:c.instructions+=3;goto B6cd24b;
case 0x6cd251:c.instructions+=2;goto B6cd251;
case 0x6cd257:c.instructions+=1;goto B6cd257;
case 0x6cd25c:goto L6cd25c;
case 0x6cd262:c.instructions+=1;goto B6cd262;
case 0x6cd267:goto L6cd267;
case 0x6cd26d:c.instructions+=5;goto B6cd26d;
case 0x6cd26f:c.instructions+=4;goto B6cd26f;
case 0x6cd271:c.instructions+=3;goto B6cd271;
case 0x6cd272:c.instructions+=2;goto B6cd272;
case 0x6cd273:c.instructions+=1;goto B6cd273;
case 0x6cd275:goto L6cd275;
case 0x6cd277:c.instructions+=2;goto B6cd277;
case 0x6cd278:c.instructions+=1;goto B6cd278;
case 0x6cd27b:goto L6cd27b;
case 0x6cd27e:goto L6cd27e;
case 0x6cd284:c.instructions+=1;goto B6cd284;
case 0x6cd289:goto L6cd289;
case 0x6cd28f:c.instructions+=1;goto B6cd28f;
case 0x6cd294:goto L6cd294;
case 0x6cd295:c.instructions+=3;goto B6cd295;
case 0x6cd297:c.instructions+=2;goto B6cd297;
case 0x6cd298:c.instructions+=1;goto B6cd298;
case 0x6cd29d:goto L6cd29d;
case 0x6cd29f:c.instructions+=12;goto B6cd29f;
case 0x6cd2a0:c.instructions+=11;goto B6cd2a0;
case 0x6cd2a2:c.instructions+=10;goto B6cd2a2;
case 0x6cd2a8:c.instructions+=9;goto B6cd2a8;
case 0x6cd2a9:c.instructions+=8;goto B6cd2a9;
case 0x6cd2aa:c.instructions+=7;goto B6cd2aa;
case 0x6cd2ad:c.instructions+=6;goto B6cd2ad;
case 0x6cd2af:c.instructions+=5;goto B6cd2af;
case 0x6cd2b2:c.instructions+=4;goto B6cd2b2;
case 0x6cd2b4:c.instructions+=3;goto B6cd2b4;
case 0x6cd2b6:c.instructions+=2;goto B6cd2b6;
case 0x6cd2b9:c.instructions+=1;goto B6cd2b9;
case 0x6cd2bb:goto L6cd2bb;
case 0x6cd2bf:c.instructions+=5;goto B6cd2bf;
case 0x6cd2c1:c.instructions+=4;goto B6cd2c1;
case 0x6cd2c2:c.instructions+=3;goto B6cd2c2;
case 0x6cd2c3:c.instructions+=2;goto B6cd2c3;
case 0x6cd2c5:c.instructions+=1;goto B6cd2c5;
case 0x6cd2c8:goto L6cd2c8;
case 0x6cd2cb:c.instructions+=2;goto B6cd2cb;
case 0x6cd2cd:c.instructions+=1;goto B6cd2cd;
case 0x6cd2d2:goto L6cd2d2;
case 0x6cd2d9:c.instructions+=7;goto B6cd2d9;
case 0x6cd2dc:c.instructions+=6;goto B6cd2dc;
case 0x6cd2df:c.instructions+=5;goto B6cd2df;
case 0x6cd2e2:c.instructions+=4;goto B6cd2e2;
case 0x6cd2e3:c.instructions+=3;goto B6cd2e3;
case 0x6cd2e6:c.instructions+=2;goto B6cd2e6;
case 0x6cd2e9:c.instructions+=1;goto B6cd2e9;
case 0x6cd2ef:goto L6cd2ef;
case 0x6cd2f1:c.instructions+=2;goto B6cd2f1;
case 0x6cd2f4:c.instructions+=1;goto B6cd2f4;
case 0x6cd2f7:goto L6cd2f7;
case 0x6cd2f9:c.instructions+=3;goto B6cd2f9;
case 0x6cd2fa:c.instructions+=2;goto B6cd2fa;
case 0x6cd2fc:c.instructions+=1;goto B6cd2fc;
case 0x6cd2fe:goto L6cd2fe;
case 0x6cd301:c.instructions+=2;goto B6cd301;
case 0x6cd304:c.instructions+=1;goto B6cd304;
case 0x6cd30a:goto L6cd30a;
case 0x6cd30f:c.instructions+=3;goto B6cd30f;
case 0x6cd312:c.instructions+=2;goto B6cd312;
case 0x6cd315:c.instructions+=1;goto B6cd315;
case 0x6cd31b:goto L6cd31b;
case 0x6cd31f:c.instructions+=1;goto B6cd31f;
case 0x6cd321:goto L6cd321;
case 0x6cd322:c.instructions+=5;goto B6cd322;
case 0x6cd327:c.instructions+=4;goto B6cd327;
case 0x6cd32c:c.instructions+=3;goto B6cd32c;
case 0x6cd32d:c.instructions+=2;goto B6cd32d;
case 0x6cd32e:c.instructions+=1;goto B6cd32e;
case 0x6cd333:goto L6cd333;
case 0x6cd336:c.instructions+=1;goto B6cd336;
case 0x6cd33d:goto L6cd33d;
case 0x6cd343:c.instructions+=2;goto B6cd343;
case 0x6cd344:c.instructions+=1;goto B6cd344;
case 0x6cd349:goto L6cd349;
case 0x6cd34b:c.instructions+=1;goto B6cd34b;
case 0x6cd34d:goto L6cd34d;
case 0x6cd34f:c.instructions+=4;goto B6cd34f;
case 0x6cd355:c.instructions+=3;goto B6cd355;
case 0x6cd35b:c.instructions+=2;goto B6cd35b;
case 0x6cd35c:c.instructions+=1;goto B6cd35c;
case 0x6cd361:goto L6cd361;
case 0x6cd363:c.instructions+=1;goto B6cd363;
case 0x6cd365:goto L6cd365;
case 0x6cd36b:c.instructions+=3;goto B6cd36b;
case 0x6cd36e:c.instructions+=2;goto B6cd36e;
case 0x6cd374:c.instructions+=1;goto B6cd374;
case 0x6cd376:goto L6cd376;
case 0x6cd379:goto L6cd379;
case 0x6cd37b:c.instructions+=4;goto B6cd37b;
case 0x6cd37c:c.instructions+=3;goto B6cd37c;
case 0x6cd381:c.instructions+=2;goto B6cd381;
case 0x6cd383:c.instructions+=1;goto B6cd383;
case 0x6cd386:goto L6cd386;
case 0x6cd389:goto L6cd389;
case 0x6cd38c:c.instructions+=3;goto B6cd38c;
case 0x6cd38e:c.instructions+=2;goto B6cd38e;
case 0x6cd390:c.instructions+=1;goto B6cd390;
case 0x6cd395:goto L6cd395;
case 0x6cd396:goto L6cd396;
case 0x6cd397:c.instructions+=3;goto B6cd397;
case 0x6cd398:c.instructions+=2;goto B6cd398;
case 0x6cd399:c.instructions+=1;goto B6cd399;
case 0x6cd39c:goto L6cd39c;
case 0x6cd39f:goto L6cd39f;
case 0x6cd3a3:c.instructions+=1;goto B6cd3a3;
case 0x6cd3a5:goto L6cd3a5;
case 0x6cd3a9:c.instructions+=1;goto B6cd3a9;
case 0x6cd3ab:goto L6cd3ab;
case 0x6cd3af:c.instructions+=1;goto B6cd3af;
case 0x6cd3b1:goto L6cd3b1;
case 0x6cd3b6:c.instructions+=5;goto B6cd3b6;
case 0x6cd3bc:c.instructions+=4;goto B6cd3bc;
case 0x6cd3bd:c.instructions+=3;goto B6cd3bd;
case 0x6cd3be:c.instructions+=2;goto B6cd3be;
case 0x6cd3c0:c.instructions+=1;goto B6cd3c0;
case 0x6cd3c5:goto L6cd3c5;
case 0x6cd3cb:c.instructions+=2;goto B6cd3cb;
case 0x6cd3cc:c.instructions+=1;goto B6cd3cc;
case 0x6cd3d1:goto L6cd3d1;
case 0x6cd3d6:c.instructions+=3;goto B6cd3d6;
case 0x6cd3d9:c.instructions+=2;goto B6cd3d9;
case 0x6cd3da:c.instructions+=1;goto B6cd3da;
case 0x6cd3df:goto L6cd3df;
case 0x6cd3e2:c.instructions+=2;goto B6cd3e2;
case 0x6cd3e9:c.instructions+=1;goto B6cd3e9;
case 0x6cd3eb:goto L6cd3eb;
case 0x6cd3ef:c.instructions+=2;goto B6cd3ef;
case 0x6cd3f2:c.instructions+=1;goto B6cd3f2;
case 0x6cd3f4:goto L6cd3f4;
case 0x6cd3f6:c.instructions+=1;goto B6cd3f6;
case 0x6cd3f8:goto L6cd3f8;
case 0x6cd3fb:c.instructions+=1;goto B6cd3fb;
case 0x6cd3fd:goto L6cd3fd;
case 0x6cd400:c.instructions+=6;goto B6cd400;
case 0x6cd401:c.instructions+=5;goto B6cd401;
case 0x6cd403:c.instructions+=4;goto B6cd403;
case 0x6cd409:c.instructions+=3;goto B6cd409;
case 0x6cd40b:c.instructions+=2;goto B6cd40b;
case 0x6cd40c:c.instructions+=1;goto B6cd40c;
case 0x6cd411:goto L6cd411;
case 0x6cd413:c.instructions+=1;goto B6cd413;
case 0x6cd415:goto L6cd415;
case 0x6cd419:c.instructions+=1;goto B6cd419;
case 0x6cd41f:goto L6cd41f;
case 0x6cd423:c.instructions+=1;goto B6cd423;
case 0x6cd429:goto L6cd429;
case 0x6cd42a:c.instructions+=2;goto B6cd42a;
case 0x6cd42c:c.instructions+=1;goto B6cd42c;
case 0x6cd431:goto L6cd431;
case 0x6cd432:c.instructions+=2;goto B6cd432;
case 0x6cd437:c.instructions+=1;goto B6cd437;
case 0x6cd439:goto L6cd439;
case 0x6cd43b:c.instructions+=1;goto B6cd43b;
case 0x6cd441:goto L6cd441;
case 0x6cd444:c.instructions+=3;goto B6cd444;
case 0x6cd445:c.instructions+=2;goto B6cd445;
case 0x6cd447:c.instructions+=1;goto B6cd447;
case 0x6cd44d:goto L6cd44d;
case 0x6cd44f:c.instructions+=2;goto B6cd44f;
case 0x6cd450:c.instructions+=1;goto B6cd450;
case 0x6cd455:goto L6cd455;
case 0x6cd457:c.instructions+=1;goto B6cd457;
case 0x6cd45d:goto L6cd45d;
case 0x6cd462:goto L6cd462;
case 0x6cd464:c.instructions+=1;goto B6cd464;
case 0x6cd466:goto L6cd466;
case 0x6cd469:c.instructions+=1;goto B6cd469;
case 0x6cd46b:goto L6cd46b;
case 0x6cd46e:c.instructions+=6;goto B6cd46e;
case 0x6cd46f:c.instructions+=5;goto B6cd46f;
case 0x6cd471:c.instructions+=4;goto B6cd471;
case 0x6cd477:c.instructions+=3;goto B6cd477;
case 0x6cd479:c.instructions+=2;goto B6cd479;
case 0x6cd47a:c.instructions+=1;goto B6cd47a;
case 0x6cd47f:goto L6cd47f;
case 0x6cd481:c.instructions+=1;goto B6cd481;
case 0x6cd487:goto L6cd487;
case 0x6cd48b:c.instructions+=1;goto B6cd48b;
case 0x6cd491:goto L6cd491;
case 0x6cd494:c.instructions+=3;goto B6cd494;
case 0x6cd496:c.instructions+=2;goto B6cd496;
case 0x6cd498:c.instructions+=1;goto B6cd498;
case 0x6cd49b:goto L6cd49b;
case 0x6cd49e:c.instructions+=1;goto B6cd49e;
case 0x6cd4a4:goto L6cd4a4;
case 0x6cd4a9:c.instructions+=5;goto B6cd4a9;
case 0x6cd4ab:c.instructions+=4;goto B6cd4ab;
case 0x6cd4ae:c.instructions+=3;goto B6cd4ae;
case 0x6cd4b0:c.instructions+=2;goto B6cd4b0;
case 0x6cd4b3:c.instructions+=1;goto B6cd4b3;
case 0x6cd4b8:goto L6cd4b8;
case 0x6cd4ba:c.instructions+=1;goto B6cd4ba;
case 0x6cd4c0:goto L6cd4c0;
case 0x6cd4c3:c.instructions+=4;goto B6cd4c3;
case 0x6cd4c4:c.instructions+=3;goto B6cd4c4;
case 0x6cd4c6:c.instructions+=2;goto B6cd4c6;
case 0x6cd4cc:c.instructions+=1;goto B6cd4cc;
case 0x6cd4d1:goto L6cd4d1;
case 0x6cd4d3:c.instructions+=6;goto B6cd4d3;
case 0x6cd4d4:c.instructions+=5;goto B6cd4d4;
case 0x6cd4d6:c.instructions+=4;goto B6cd4d6;
case 0x6cd4d9:c.instructions+=3;goto B6cd4d9;
case 0x6cd4da:c.instructions+=2;goto B6cd4da;
case 0x6cd4dc:c.instructions+=1;goto B6cd4dc;
case 0x6cd4e1:goto L6cd4e1;
case 0x6cd4e3:c.instructions+=1;goto B6cd4e3;
case 0x6cd4e9:goto L6cd4e9;
case 0x6cd4ec:c.instructions+=4;goto B6cd4ec;
case 0x6cd4f0:c.instructions+=3;goto B6cd4f0;
case 0x6cd4f2:c.instructions+=2;goto B6cd4f2;
case 0x6cd4f3:c.instructions+=1;goto B6cd4f3;
case 0x6cd4f5:goto L6cd4f5;
case 0x6cd4fb:c.instructions+=2;goto B6cd4fb;
case 0x6cd4fe:c.instructions+=1;goto B6cd4fe;
case 0x6cd500:goto L6cd500;
case 0x6cd502:c.instructions+=2;goto B6cd502;
case 0x6cd505:c.instructions+=1;goto B6cd505;
case 0x6cd507:goto L6cd507;
case 0x6cd50a:c.instructions+=2;goto B6cd50a;
case 0x6cd50d:c.instructions+=1;goto B6cd50d;
case 0x6cd50f:goto L6cd50f;
case 0x6cd510:c.instructions+=1;goto B6cd510;
case 0x6cd513:goto L6cd513;
case 0x6cd516:c.instructions+=2;goto B6cd516;
case 0x6cd517:c.instructions+=1;goto B6cd517;
case 0x6cd519:goto L6cd519;
case 0x6cd51c:c.instructions+=6;goto B6cd51c;
case 0x6cd51e:c.instructions+=5;goto B6cd51e;
case 0x6cd520:c.instructions+=4;goto B6cd520;
case 0x6cd521:c.instructions+=3;goto B6cd521;
case 0x6cd524:c.instructions+=2;goto B6cd524;
case 0x6cd527:c.instructions+=1;goto B6cd527;
case 0x6cd52d:goto L6cd52d;
case 0x6cd530:c.instructions+=5;goto B6cd530;
case 0x6cd533:c.instructions+=4;goto B6cd533;
case 0x6cd535:c.instructions+=3;goto B6cd535;
case 0x6cd53a:c.instructions+=2;goto B6cd53a;
case 0x6cd53d:c.instructions+=1;goto B6cd53d;
case 0x6cd543:goto L6cd543;
case 0x6cd548:c.instructions+=14;goto B6cd548;
case 0x6cd54b:c.instructions+=13;goto B6cd54b;
case 0x6cd54e:c.instructions+=12;goto B6cd54e;
case 0x6cd550:c.instructions+=11;goto B6cd550;
case 0x6cd553:c.instructions+=10;goto B6cd553;
case 0x6cd556:c.instructions+=9;goto B6cd556;
case 0x6cd559:c.instructions+=8;goto B6cd559;
case 0x6cd55c:c.instructions+=7;goto B6cd55c;
case 0x6cd55e:c.instructions+=6;goto B6cd55e;
case 0x6cd561:c.instructions+=5;goto B6cd561;
case 0x6cd564:c.instructions+=4;goto B6cd564;
case 0x6cd567:c.instructions+=3;goto B6cd567;
case 0x6cd56a:c.instructions+=2;goto B6cd56a;
case 0x6cd56d:c.instructions+=1;goto B6cd56d;
case 0x6cd572:goto L6cd572;
case 0x6cd574:c.instructions+=3;goto B6cd574;
case 0x6cd579:c.instructions+=2;goto B6cd579;
case 0x6cd57e:c.instructions+=1;goto B6cd57e;
case 0x6cd584:goto L6cd584;
case 0x6cd587:c.instructions+=12;goto B6cd587;
case 0x6cd58a:c.instructions+=11;goto B6cd58a;
case 0x6cd58c:c.instructions+=10;goto B6cd58c;
case 0x6cd590:c.instructions+=9;goto B6cd590;
case 0x6cd593:c.instructions+=8;goto B6cd593;
case 0x6cd596:c.instructions+=7;goto B6cd596;
case 0x6cd599:c.instructions+=6;goto B6cd599;
case 0x6cd59c:c.instructions+=5;goto B6cd59c;
case 0x6cd59f:c.instructions+=4;goto B6cd59f;
case 0x6cd5a2:c.instructions+=3;goto B6cd5a2;
case 0x6cd5a6:c.instructions+=2;goto B6cd5a6;
case 0x6cd5a9:c.instructions+=1;goto B6cd5a9;
case 0x6cd5af:goto L6cd5af;
case 0x6cd5b1:c.instructions+=4;goto B6cd5b1;
case 0x6cd5b4:c.instructions+=3;goto B6cd5b4;
case 0x6cd5b7:c.instructions+=2;goto B6cd5b7;
case 0x6cd5ba:c.instructions+=1;goto B6cd5ba;
case 0x6cd5c0:goto L6cd5c0;
case 0x6cd5c3:goto L6cd5c3;
case 0x6cd5c6:c.instructions+=12;goto B6cd5c6;
case 0x6cd5c9:c.instructions+=11;goto B6cd5c9;
case 0x6cd5cc:c.instructions+=10;goto B6cd5cc;
case 0x6cd5cf:c.instructions+=9;goto B6cd5cf;
case 0x6cd5d2:c.instructions+=8;goto B6cd5d2;
case 0x6cd5d5:c.instructions+=7;goto B6cd5d5;
case 0x6cd5d8:c.instructions+=6;goto B6cd5d8;
case 0x6cd5db:c.instructions+=5;goto B6cd5db;
case 0x6cd5de:c.instructions+=4;goto B6cd5de;
case 0x6cd5e0:c.instructions+=3;goto B6cd5e0;
case 0x6cd5e1:c.instructions+=2;goto B6cd5e1;
case 0x6cd5e3:c.instructions+=1;goto B6cd5e3;
case 0x6cd5e9:goto L6cd5e9;
case 0x6cd5ec:c.instructions+=1;goto B6cd5ec;
case 0x6cd5ee:goto L6cd5ee;
case 0x6cd5f1:c.instructions+=2;goto B6cd5f1;
case 0x6cd5f3:c.instructions+=1;goto B6cd5f3;
case 0x6cd5f5:goto L6cd5f5;
case 0x6cd5f8:c.instructions+=4;goto B6cd5f8;
case 0x6cd5fb:c.instructions+=3;goto B6cd5fb;
case 0x6cd5fd:c.instructions+=2;goto B6cd5fd;
case 0x6cd602:c.instructions+=1;goto B6cd602;
case 0x6cd604:goto L6cd604;
case 0x6cd607:c.instructions+=2;goto B6cd607;
case 0x6cd609:c.instructions+=1;goto B6cd609;
case 0x6cd60b:goto L6cd60b;
case 0x6cd60e:c.instructions+=1;goto B6cd60e;
case 0x6cd611:goto L6cd611;
case 0x6cd614:c.instructions+=5;goto B6cd614;
case 0x6cd617:c.instructions+=4;goto B6cd617;
case 0x6cd61a:c.instructions+=3;goto B6cd61a;
case 0x6cd61d:c.instructions+=2;goto B6cd61d;
case 0x6cd620:c.instructions+=1;goto B6cd620;
case 0x6cd622:goto L6cd622;
case 0x6cd625:c.instructions+=2;goto B6cd625;
case 0x6cd628:c.instructions+=1;goto B6cd628;
case 0x6cd62b:goto L6cd62b;
case 0x6cd62e:c.instructions+=2;goto B6cd62e;
case 0x6cd62f:c.instructions+=1;goto B6cd62f;
case 0x6cd631:goto L6cd631;
case 0x6cd634:c.instructions+=6;goto B6cd634;
case 0x6cd637:c.instructions+=5;goto B6cd637;
case 0x6cd63a:c.instructions+=4;goto B6cd63a;
case 0x6cd63d:c.instructions+=3;goto B6cd63d;
case 0x6cd640:c.instructions+=2;goto B6cd640;
case 0x6cd643:c.instructions+=1;goto B6cd643;
case 0x6cd649:goto L6cd649;
case 0x6cd64c:c.instructions+=1;goto B6cd64c;
case 0x6cd64e:goto L6cd64e;
case 0x6cd652:c.instructions+=14;goto B6cd652;
case 0x6cd655:c.instructions+=13;goto B6cd655;
case 0x6cd658:c.instructions+=12;goto B6cd658;
case 0x6cd65b:c.instructions+=11;goto B6cd65b;
case 0x6cd65e:c.instructions+=10;goto B6cd65e;
case 0x6cd661:c.instructions+=9;goto B6cd661;
case 0x6cd664:c.instructions+=8;goto B6cd664;
case 0x6cd667:c.instructions+=7;goto B6cd667;
case 0x6cd66a:c.instructions+=6;goto B6cd66a;
case 0x6cd66d:c.instructions+=5;goto B6cd66d;
case 0x6cd670:c.instructions+=4;goto B6cd670;
case 0x6cd674:c.instructions+=3;goto B6cd674;
case 0x6cd677:c.instructions+=2;goto B6cd677;
case 0x6cd67a:c.instructions+=1;goto B6cd67a;
case 0x6cd680:goto L6cd680;
case 0x6cd683:c.instructions+=9;goto B6cd683;
case 0x6cd686:c.instructions+=8;goto B6cd686;
case 0x6cd687:c.instructions+=7;goto B6cd687;
case 0x6cd688:c.instructions+=6;goto B6cd688;
case 0x6cd68b:c.instructions+=5;goto B6cd68b;
case 0x6cd68c:c.instructions+=4;goto B6cd68c;
case 0x6cd68e:c.instructions+=3;goto B6cd68e;
case 0x6cd691:c.instructions+=2;goto B6cd691;
case 0x6cd692:c.instructions+=1;goto B6cd692;
case 0x6cd694:goto L6cd694;
case 0x6cd697:c.instructions+=1;goto B6cd697;
case 0x6cd69a:goto L6cd69a;
case 0x6cd69d:c.instructions+=3;goto B6cd69d;
case 0x6cd69f:c.instructions+=2;goto B6cd69f;
case 0x6cd6a2:c.instructions+=1;goto B6cd6a2;
case 0x6cd6a4:goto L6cd6a4;
case 0x6cd6a7:c.instructions+=2;goto B6cd6a7;
case 0x6cd6aa:c.instructions+=1;goto B6cd6aa;
case 0x6cd6ac:goto L6cd6ac;
case 0x6cd6af:c.instructions+=2;goto B6cd6af;
case 0x6cd6b2:c.instructions+=1;goto B6cd6b2;
case 0x6cd6b4:goto L6cd6b4;
case 0x6cd6b8:c.instructions+=1;goto B6cd6b8;
case 0x6cd6ba:goto L6cd6ba;
case 0x6cd6bd:c.instructions+=2;goto B6cd6bd;
case 0x6cd6c0:c.instructions+=1;goto B6cd6c0;
case 0x6cd6c2:goto L6cd6c2;
case 0x6cd6c5:c.instructions+=3;goto B6cd6c5;
case 0x6cd6c8:c.instructions+=2;goto B6cd6c8;
case 0x6cd6cc:c.instructions+=1;goto B6cd6cc;
case 0x6cd6ce:goto L6cd6ce;
case 0x6cd6cf:c.instructions+=1;goto B6cd6cf;
case 0x6cd6d2:goto L6cd6d2;
case 0x6cd6d6:c.instructions+=3;goto B6cd6d6;
case 0x6cd6d7:c.instructions+=2;goto B6cd6d7;
case 0x6cd6da:c.instructions+=1;goto B6cd6da;
case 0x6cd6dc:goto L6cd6dc;
case 0x6cd6de:c.instructions+=2;goto B6cd6de;
case 0x6cd6e1:c.instructions+=1;goto B6cd6e1;
case 0x6cd6e4:goto L6cd6e4;
case 0x6cd6e7:c.instructions+=5;goto B6cd6e7;
case 0x6cd6ea:c.instructions+=4;goto B6cd6ea;
case 0x6cd6ee:c.instructions+=3;goto B6cd6ee;
case 0x6cd6f1:c.instructions+=2;goto B6cd6f1;
case 0x6cd6f4:c.instructions+=1;goto B6cd6f4;
case 0x6cd6f6:goto L6cd6f6;
case 0x6cd6f7:c.instructions+=8;goto B6cd6f7;
case 0x6cd6f9:c.instructions+=7;goto B6cd6f9;
case 0x6cd6fa:c.instructions+=6;goto B6cd6fa;
case 0x6cd6fd:c.instructions+=5;goto B6cd6fd;
case 0x6cd700:c.instructions+=4;goto B6cd700;
case 0x6cd702:c.instructions+=3;goto B6cd702;
case 0x6cd705:c.instructions+=2;goto B6cd705;
case 0x6cd70b:c.instructions+=1;goto B6cd70b;
case 0x6cd710:goto L6cd710;
case 0x6cd713:c.instructions+=2;goto B6cd713;
case 0x6cd717:c.instructions+=1;goto B6cd717;
case 0x6cd71d:goto L6cd71d;
case 0x6cd720:c.instructions+=5;goto B6cd720;
case 0x6cd723:c.instructions+=4;goto B6cd723;
case 0x6cd726:c.instructions+=3;goto B6cd726;
case 0x6cd729:c.instructions+=2;goto B6cd729;
case 0x6cd72b:c.instructions+=1;goto B6cd72b;
case 0x6cd730:goto L6cd730;
case 0x6cd732:c.instructions+=1;goto B6cd732;
case 0x6cd738:goto L6cd738;
case 0x6cd73b:c.instructions+=8;goto B6cd73b;
case 0x6cd73f:c.instructions+=7;goto B6cd73f;
case 0x6cd743:c.instructions+=6;goto B6cd743;
case 0x6cd747:c.instructions+=5;goto B6cd747;
case 0x6cd74a:c.instructions+=4;goto B6cd74a;
case 0x6cd74d:c.instructions+=3;goto B6cd74d;
case 0x6cd750:c.instructions+=2;goto B6cd750;
case 0x6cd753:c.instructions+=1;goto B6cd753;
case 0x6cd756:goto L6cd756;
case 0x6cd759:c.instructions+=2;goto B6cd759;
case 0x6cd75d:c.instructions+=1;goto B6cd75d;
case 0x6cd75f:goto L6cd75f;
case 0x6cd760:c.instructions+=6;goto B6cd760;
case 0x6cd761:c.instructions+=5;goto B6cd761;
case 0x6cd766:c.instructions+=4;goto B6cd766;
case 0x6cd76b:c.instructions+=3;goto B6cd76b;
case 0x6cd76c:c.instructions+=2;goto B6cd76c;
case 0x6cd76e:c.instructions+=1;goto B6cd76e;
case 0x6cd773:goto L6cd773;
case 0x6cd776:c.instructions+=1;goto B6cd776;
case 0x6cd77c:goto L6cd77c;
case 0x6cd77f:c.instructions+=4;goto B6cd77f;
case 0x6cd782:c.instructions+=3;goto B6cd782;
case 0x6cd783:c.instructions+=2;goto B6cd783;
case 0x6cd785:c.instructions+=1;goto B6cd785;
case 0x6cd78a:goto L6cd78a;
case 0x6cd78c:c.instructions+=1;goto B6cd78c;
case 0x6cd792:goto L6cd792;
case 0x6cd794:c.instructions+=1;goto B6cd794;
case 0x6cd797:goto L6cd797;
case 0x6cd79a:c.instructions+=3;goto B6cd79a;
case 0x6cd79e:c.instructions+=2;goto B6cd79e;
case 0x6cd7a1:c.instructions+=1;goto B6cd7a1;
case 0x6cd7a3:goto L6cd7a3;
case 0x6cd7a6:c.instructions+=6;goto B6cd7a6;
case 0x6cd7a9:c.instructions+=5;goto B6cd7a9;
case 0x6cd7ac:c.instructions+=4;goto B6cd7ac;
case 0x6cd7af:c.instructions+=3;goto B6cd7af;
case 0x6cd7b3:c.instructions+=2;goto B6cd7b3;
case 0x6cd7b6:c.instructions+=1;goto B6cd7b6;
case 0x6cd7b9:goto L6cd7b9;
case 0x6cd7bd:c.instructions+=2;goto B6cd7bd;
case 0x6cd7c1:c.instructions+=1;goto B6cd7c1;
case 0x6cd7c3:goto L6cd7c3;
case 0x6cd7c6:c.instructions+=2;goto B6cd7c6;
case 0x6cd7c9:c.instructions+=1;goto B6cd7c9;
case 0x6cd7ce:goto L6cd7ce;
case 0x6cd7d1:c.instructions+=3;goto B6cd7d1;
case 0x6cd7d4:c.instructions+=2;goto B6cd7d4;
case 0x6cd7da:c.instructions+=1;goto B6cd7da;
case 0x6cd7e0:goto L6cd7e0;
case 0x6cd7e3:c.instructions+=6;goto B6cd7e3;
case 0x6cd7e5:c.instructions+=5;goto B6cd7e5;
case 0x6cd7e8:c.instructions+=4;goto B6cd7e8;
case 0x6cd7eb:c.instructions+=3;goto B6cd7eb;
case 0x6cd7ee:c.instructions+=2;goto B6cd7ee;
case 0x6cd7f1:c.instructions+=1;goto B6cd7f1;
case 0x6cd7f3:goto L6cd7f3;
case 0x6cd7f6:c.instructions+=1;goto B6cd7f6;
case 0x6cd7f8:goto L6cd7f8;
case 0x6cd7fb:c.instructions+=1;goto B6cd7fb;
case 0x6cd7fd:goto L6cd7fd;
case 0x6cd800:c.instructions+=3;goto B6cd800;
case 0x6cd803:c.instructions+=2;goto B6cd803;
case 0x6cd806:c.instructions+=1;goto B6cd806;
case 0x6cd809:goto L6cd809;
case 0x6cd80c:c.instructions+=1;goto B6cd80c;
case 0x6cd80e:goto L6cd80e;
case 0x6cd811:c.instructions+=1;goto B6cd811;
case 0x6cd817:goto L6cd817;
case 0x6cd81a:c.instructions+=1;goto B6cd81a;
case 0x6cd820:goto L6cd820;
case 0x6cd822:c.instructions+=4;goto B6cd822;
case 0x6cd824:c.instructions+=3;goto B6cd824;
case 0x6cd825:c.instructions+=2;goto B6cd825;
case 0x6cd827:c.instructions+=1;goto B6cd827;
case 0x6cd82a:goto L6cd82a;
case 0x6cd82c:c.instructions+=1;goto B6cd82c;
case 0x6cd832:goto L6cd832;
case 0x6cd836:c.instructions+=2;goto B6cd836;
case 0x6cd83a:c.instructions+=1;goto B6cd83a;
case 0x6cd840:goto L6cd840;
case 0x6cd843:c.instructions+=11;goto B6cd843;
case 0x6cd846:c.instructions+=10;goto B6cd846;
case 0x6cd849:c.instructions+=9;goto B6cd849;
case 0x6cd84c:c.instructions+=8;goto B6cd84c;
case 0x6cd84f:c.instructions+=7;goto B6cd84f;
case 0x6cd851:c.instructions+=6;goto B6cd851;
case 0x6cd854:c.instructions+=5;goto B6cd854;
case 0x6cd856:c.instructions+=4;goto B6cd856;
case 0x6cd859:c.instructions+=3;goto B6cd859;
case 0x6cd85c:c.instructions+=2;goto B6cd85c;
case 0x6cd85f:c.instructions+=1;goto B6cd85f;
case 0x6cd865:goto L6cd865;
case 0x6cd868:c.instructions+=2;goto B6cd868;
case 0x6cd86b:c.instructions+=1;goto B6cd86b;
case 0x6cd86d:goto L6cd86d;
case 0x6cd870:c.instructions+=2;goto B6cd870;
case 0x6cd873:c.instructions+=1;goto B6cd873;
case 0x6cd875:goto L6cd875;
case 0x6cd879:c.instructions+=3;goto B6cd879;
case 0x6cd87c:c.instructions+=2;goto B6cd87c;
case 0x6cd880:c.instructions+=1;goto B6cd880;
case 0x6cd882:goto L6cd882;
case 0x6cd885:c.instructions+=2;goto B6cd885;
case 0x6cd887:c.instructions+=1;goto B6cd887;
case 0x6cd889:goto L6cd889;
case 0x6cd88c:c.instructions+=10;goto B6cd88c;
case 0x6cd88e:c.instructions+=9;goto B6cd88e;
case 0x6cd88f:c.instructions+=8;goto B6cd88f;
case 0x6cd890:c.instructions+=7;goto B6cd890;
case 0x6cd893:c.instructions+=6;goto B6cd893;
case 0x6cd896:c.instructions+=5;goto B6cd896;
case 0x6cd899:c.instructions+=4;goto B6cd899;
case 0x6cd89c:c.instructions+=3;goto B6cd89c;
case 0x6cd89e:c.instructions+=2;goto B6cd89e;
case 0x6cd8a4:c.instructions+=1;goto B6cd8a4;
case 0x6cd8a9:goto L6cd8a9;
case 0x6cd8ac:c.instructions+=4;goto B6cd8ac;
case 0x6cd8af:c.instructions+=3;goto B6cd8af;
case 0x6cd8b2:c.instructions+=2;goto B6cd8b2;
case 0x6cd8b6:c.instructions+=1;goto B6cd8b6;
case 0x6cd8bc:goto L6cd8bc;
case 0x6cd8bf:c.instructions+=5;goto B6cd8bf;
case 0x6cd8c2:c.instructions+=4;goto B6cd8c2;
case 0x6cd8c5:c.instructions+=3;goto B6cd8c5;
case 0x6cd8c8:c.instructions+=2;goto B6cd8c8;
case 0x6cd8ca:c.instructions+=1;goto B6cd8ca;
case 0x6cd8cf:goto L6cd8cf;
case 0x6cd8d1:c.instructions+=1;goto B6cd8d1;
case 0x6cd8d3:goto L6cd8d3;
case 0x6cd8d6:c.instructions+=5;goto B6cd8d6;
case 0x6cd8d9:c.instructions+=4;goto B6cd8d9;
case 0x6cd8dd:c.instructions+=3;goto B6cd8dd;
case 0x6cd8e0:c.instructions+=2;goto B6cd8e0;
case 0x6cd8e3:c.instructions+=1;goto B6cd8e3;
case 0x6cd8e6:goto L6cd8e6;
case 0x6cd8e9:c.instructions+=3;goto B6cd8e9;
case 0x6cd8ec:c.instructions+=2;goto B6cd8ec;
case 0x6cd8ef:c.instructions+=1;goto B6cd8ef;
case 0x6cd8f5:goto L6cd8f5;
case 0x6cd8f8:goto L6cd8f8;
case 0x6cd8fb:c.instructions+=1;goto B6cd8fb;
case 0x6cd8fc:goto L6cd8fc;
case 0x6cd8ff:c.instructions+=2;goto B6cd8ff;
case 0x6cd902:c.instructions+=1;goto B6cd902;
case 0x6cd908:goto L6cd908;
case 0x6cd90a:c.instructions+=5;goto B6cd90a;
case 0x6cd90d:c.instructions+=4;goto B6cd90d;
case 0x6cd90e:c.instructions+=3;goto B6cd90e;
case 0x6cd910:c.instructions+=2;goto B6cd910;
case 0x6cd911:c.instructions+=1;goto B6cd911;
case 0x6cd914:goto L6cd914;
case 0x6cd916:c.instructions+=1;goto B6cd916;
case 0x6cd91c:goto L6cd91c;
case 0x6cd91d:c.instructions+=2;goto B6cd91d;
case 0x6cd91f:c.instructions+=1;goto B6cd91f;
case 0x6cd924:goto L6cd924;
case 0x6cd926:c.instructions+=1;goto B6cd926;
case 0x6cd928:goto L6cd928;
case 0x6cd92b:goto L6cd92b;
case 0x6cd92e:c.instructions+=4;goto B6cd92e;
case 0x6cd92f:c.instructions+=3;goto B6cd92f;
case 0x6cd932:c.instructions+=2;goto B6cd932;
case 0x6cd935:c.instructions+=1;goto B6cd935;
case 0x6cd93b:goto L6cd93b;
case 0x6cd93d:goto L6cd93d;
case 0x6cd93e:c.instructions+=1;goto B6cd93e;
case 0x6cd93f:goto L6cd93f;
case 0x6cd940:c.instructions+=2;goto B6cd940;
case 0x6cd941:c.instructions+=1;goto B6cd941;
case 0x6cd942:goto L6cd942;
case 0x6cd947:c.instructions+=2;goto B6cd947;
case 0x6cd949:c.instructions+=1;goto B6cd949;
case 0x6cd94b:goto L6cd94b;
case 0x6cd950:c.instructions+=1;goto B6cd950;
case 0x6cd951:goto L6cd951;
case 0x6cd954:c.instructions+=2;goto B6cd954;
case 0x6cd955:c.instructions+=1;goto B6cd955;
case 0x6cd95a:goto L6cd95a;
case 0x6cd95d:c.instructions+=2;goto B6cd95d;
case 0x6cd962:c.instructions+=1;goto B6cd962;
case 0x6cd964:goto L6cd964;
case 0x6cd969:c.instructions+=1;goto B6cd969;
case 0x6cd96b:goto L6cd96b;
case 0x6cd96d:c.instructions+=6;goto B6cd96d;
case 0x6cd96e:c.instructions+=5;goto B6cd96e;
case 0x6cd970:c.instructions+=4;goto B6cd970;
case 0x6cd973:c.instructions+=3;goto B6cd973;
case 0x6cd974:c.instructions+=2;goto B6cd974;
case 0x6cd976:c.instructions+=1;goto B6cd976;
case 0x6cd97b:goto L6cd97b;
case 0x6cd97d:c.instructions+=1;goto B6cd97d;
case 0x6cd983:goto L6cd983;
case 0x6cd987:c.instructions+=6;goto B6cd987;
case 0x6cd988:c.instructions+=5;goto B6cd988;
case 0x6cd989:c.instructions+=4;goto B6cd989;
case 0x6cd98c:c.instructions+=3;goto B6cd98c;
case 0x6cd98e:c.instructions+=2;goto B6cd98e;
case 0x6cd991:c.instructions+=1;goto B6cd991;
case 0x6cd997:goto L6cd997;
case 0x6cd99a:c.instructions+=6;goto B6cd99a;
case 0x6cd99d:c.instructions+=5;goto B6cd99d;
case 0x6cd9a0:c.instructions+=4;goto B6cd9a0;
case 0x6cd9a2:c.instructions+=3;goto B6cd9a2;
case 0x6cd9a7:c.instructions+=2;goto B6cd9a7;
case 0x6cd9aa:c.instructions+=1;goto B6cd9aa;
case 0x6cd9b0:goto L6cd9b0;
case 0x6cd9b4:c.instructions+=8;goto B6cd9b4;
case 0x6cd9b9:c.instructions+=7;goto B6cd9b9;
case 0x6cd9bc:c.instructions+=6;goto B6cd9bc;
case 0x6cd9bd:c.instructions+=5;goto B6cd9bd;
case 0x6cd9c0:c.instructions+=4;goto B6cd9c0;
case 0x6cd9c2:c.instructions+=3;goto B6cd9c2;
case 0x6cd9c3:c.instructions+=2;goto B6cd9c3;
case 0x6cd9c5:c.instructions+=1;goto B6cd9c5;
case 0x6cd9c8:goto L6cd9c8;
case 0x6cd9cd:goto L6cd9cd;
case 0x6cd9cf:c.instructions+=3;goto B6cd9cf;
case 0x6cd9d4:c.instructions+=2;goto B6cd9d4;
case 0x6cd9d9:c.instructions+=1;goto B6cd9d9;
case 0x6cd9df:goto L6cd9df;
case 0x6cd9e2:c.instructions+=2;goto B6cd9e2;
case 0x6cd9e8:c.instructions+=1;goto B6cd9e8;
case 0x6cd9ea:goto L6cd9ea;
case 0x6cd9ed:c.instructions+=11;goto B6cd9ed;
case 0x6cd9f0:c.instructions+=10;goto B6cd9f0;
case 0x6cd9f1:c.instructions+=9;goto B6cd9f1;
case 0x6cd9f2:c.instructions+=8;goto B6cd9f2;
case 0x6cd9f3:c.instructions+=7;goto B6cd9f3;
case 0x6cd9f4:c.instructions+=6;goto B6cd9f4;
case 0x6cd9f7:c.instructions+=5;goto B6cd9f7;
case 0x6cd9fa:c.instructions+=4;goto B6cd9fa;
case 0x6cd9fb:c.instructions+=3;goto B6cd9fb;
case 0x6cd9fc:c.instructions+=2;goto B6cd9fc;
case 0x6cd9fd:c.instructions+=1;goto B6cd9fd;
case 0x6cd9fe:goto L6cd9fe;
case 0x6cda01:c.instructions+=16;goto B6cda01;
case 0x6cda04:c.instructions+=15;goto B6cda04;
case 0x6cda07:c.instructions+=14;goto B6cda07;
case 0x6cda09:c.instructions+=13;goto B6cda09;
case 0x6cda0a:c.instructions+=12;goto B6cda0a;
case 0x6cda0c:c.instructions+=11;goto B6cda0c;
case 0x6cda0e:c.instructions+=10;goto B6cda0e;
case 0x6cda11:c.instructions+=9;goto B6cda11;
case 0x6cda14:c.instructions+=8;goto B6cda14;
case 0x6cda17:c.instructions+=7;goto B6cda17;
case 0x6cda1a:c.instructions+=6;goto B6cda1a;
case 0x6cda1d:c.instructions+=5;goto B6cda1d;
case 0x6cda20:c.instructions+=4;goto B6cda20;
case 0x6cda23:c.instructions+=3;goto B6cda23;
case 0x6cda27:c.instructions+=2;goto B6cda27;
case 0x6cda29:c.instructions+=1;goto B6cda29;
case 0x6cda2c:goto L6cda2c;
case 0x6cda2e:goto L6cda2e;
case 0x6cda31:c.instructions+=1;goto B6cda31;
case 0x6cda33:goto L6cda33;
case 0x6cda36:c.instructions+=2;goto B6cda36;
case 0x6cda3a:c.instructions+=1;goto B6cda3a;
case 0x6cda40:goto L6cda40;
case 0x6cda43:c.instructions+=5;goto B6cda43;
case 0x6cda45:c.instructions+=4;goto B6cda45;
case 0x6cda48:c.instructions+=3;goto B6cda48;
case 0x6cda4b:c.instructions+=2;goto B6cda4b;
case 0x6cda4f:c.instructions+=1;goto B6cda4f;
case 0x6cda55:goto L6cda55;
case 0x6cda58:c.instructions+=8;goto B6cda58;
case 0x6cda5a:c.instructions+=7;goto B6cda5a;
case 0x6cda5c:c.instructions+=6;goto B6cda5c;
case 0x6cda61:c.instructions+=5;goto B6cda61;
case 0x6cda63:c.instructions+=4;goto B6cda63;
case 0x6cda68:c.instructions+=3;goto B6cda68;
case 0x6cda69:c.instructions+=2;goto B6cda69;
case 0x6cda6b:c.instructions+=1;goto B6cda6b;
case 0x6cda70:goto L6cda70;
case 0x6cda73:c.instructions+=1;goto B6cda73;
case 0x6cda79:goto L6cda79;
case 0x6cda7c:c.instructions+=5;goto B6cda7c;
case 0x6cda7f:c.instructions+=4;goto B6cda7f;
case 0x6cda82:c.instructions+=3;goto B6cda82;
case 0x6cda84:c.instructions+=2;goto B6cda84;
case 0x6cda87:c.instructions+=1;goto B6cda87;
case 0x6cda8c:goto L6cda8c;
case 0x6cda8e:c.instructions+=1;goto B6cda8e;
case 0x6cda94:goto L6cda94;
case 0x6cda97:c.instructions+=10;goto B6cda97;
case 0x6cda9a:c.instructions+=9;goto B6cda9a;
case 0x6cda9c:c.instructions+=8;goto B6cda9c;
case 0x6cda9f:c.instructions+=7;goto B6cda9f;
case 0x6cdaa0:c.instructions+=6;goto B6cdaa0;
case 0x6cdaa1:c.instructions+=5;goto B6cdaa1;
case 0x6cdaa5:c.instructions+=4;goto B6cdaa5;
case 0x6cdaa6:c.instructions+=3;goto B6cdaa6;
case 0x6cdaa9:c.instructions+=2;goto B6cdaa9;
case 0x6cdaab:c.instructions+=1;goto B6cdaab;
case 0x6cdab1:goto L6cdab1;
case 0x6cdab3:c.instructions+=1;goto B6cdab3;
case 0x6cdab9:goto L6cdab9;
case 0x6cdabc:c.instructions+=9;goto B6cdabc;
case 0x6cdabe:c.instructions+=8;goto B6cdabe;
case 0x6cdac1:c.instructions+=7;goto B6cdac1;
case 0x6cdac4:c.instructions+=6;goto B6cdac4;
case 0x6cdac7:c.instructions+=5;goto B6cdac7;
case 0x6cdaca:c.instructions+=4;goto B6cdaca;
case 0x6cdacc:c.instructions+=3;goto B6cdacc;
case 0x6cdacf:c.instructions+=2;goto B6cdacf;
case 0x6cdad1:c.instructions+=1;goto B6cdad1;
case 0x6cdad3:goto L6cdad3;
case 0x6cdad7:c.instructions+=5;goto B6cdad7;
case 0x6cdada:c.instructions+=4;goto B6cdada;
case 0x6cdade:c.instructions+=3;goto B6cdade;
case 0x6cdae1:c.instructions+=2;goto B6cdae1;
case 0x6cdae4:c.instructions+=1;goto B6cdae4;
case 0x6cdae6:goto L6cdae6;
case 0x6cdae9:c.instructions+=11;goto B6cdae9;
case 0x6cdaeb:c.instructions+=10;goto B6cdaeb;
case 0x6cdaee:c.instructions+=9;goto B6cdaee;
case 0x6cdaf1:c.instructions+=8;goto B6cdaf1;
case 0x6cdaf4:c.instructions+=7;goto B6cdaf4;
case 0x6cdaf7:c.instructions+=6;goto B6cdaf7;
case 0x6cdafa:c.instructions+=5;goto B6cdafa;
case 0x6cdafc:c.instructions+=4;goto B6cdafc;
case 0x6cdaff:c.instructions+=3;goto B6cdaff;
case 0x6cdb02:c.instructions+=2;goto B6cdb02;
case 0x6cdb05:c.instructions+=1;goto B6cdb05;
case 0x6cdb08:goto L6cdb08;
case 0x6cdb0b:c.instructions+=2;goto B6cdb0b;
case 0x6cdb0c:c.instructions+=1;goto B6cdb0c;
case 0x6cdb0f:goto L6cdb0f;
case 0x6cdb12:c.instructions+=1;goto B6cdb12;
case 0x6cdb14:goto L6cdb14;
case 0x6cdb17:c.instructions+=11;goto B6cdb17;
case 0x6cdb1a:c.instructions+=10;goto B6cdb1a;
case 0x6cdb1d:c.instructions+=9;goto B6cdb1d;
case 0x6cdb20:c.instructions+=8;goto B6cdb20;
case 0x6cdb24:c.instructions+=7;goto B6cdb24;
case 0x6cdb26:c.instructions+=6;goto B6cdb26;
case 0x6cdb28:c.instructions+=5;goto B6cdb28;
case 0x6cdb2b:c.instructions+=4;goto B6cdb2b;
case 0x6cdb2e:c.instructions+=3;goto B6cdb2e;
case 0x6cdb30:c.instructions+=2;goto B6cdb30;
case 0x6cdb32:c.instructions+=1;goto B6cdb32;
case 0x6cdb35:goto L6cdb35;
case 0x6cdb37:goto L6cdb37;
case 0x6cdb39:c.instructions+=2;goto B6cdb39;
case 0x6cdb3c:c.instructions+=1;goto B6cdb3c;
case 0x6cdb3f:goto L6cdb3f;
case 0x6cdb41:goto L6cdb41;
case 0x6cdb44:c.instructions+=4;goto B6cdb44;
case 0x6cdb47:c.instructions+=3;goto B6cdb47;
case 0x6cdb49:c.instructions+=2;goto B6cdb49;
case 0x6cdb4b:c.instructions+=1;goto B6cdb4b;
case 0x6cdb4e:goto L6cdb4e;
case 0x6cdb50:goto L6cdb50;
case 0x6cdb53:c.instructions+=3;goto B6cdb53;
case 0x6cdb55:c.instructions+=2;goto B6cdb55;
case 0x6cdb58:c.instructions+=1;goto B6cdb58;
case 0x6cdb5b:goto L6cdb5b;
case 0x6cdb5d:goto L6cdb5d;
case 0x6cdb60:c.instructions+=4;goto B6cdb60;
case 0x6cdb63:c.instructions+=3;goto B6cdb63;
case 0x6cdb65:c.instructions+=2;goto B6cdb65;
case 0x6cdb68:c.instructions+=1;goto B6cdb68;
case 0x6cdb6c:goto L6cdb6c;
case 0x6cdb6e:goto L6cdb6e;
case 0x6cdb70:c.instructions+=2;goto B6cdb70;
case 0x6cdb73:c.instructions+=1;goto B6cdb73;
case 0x6cdb76:goto L6cdb76;
case 0x6cdb78:goto L6cdb78;
case 0x6cdb7b:c.instructions+=5;goto B6cdb7b;
case 0x6cdb7e:c.instructions+=4;goto B6cdb7e;
case 0x6cdb81:c.instructions+=3;goto B6cdb81;
case 0x6cdb85:c.instructions+=2;goto B6cdb85;
case 0x6cdb87:c.instructions+=1;goto B6cdb87;
case 0x6cdb8a:goto L6cdb8a;
case 0x6cdb8c:goto L6cdb8c;
case 0x6cdb8e:c.instructions+=1;goto B6cdb8e;
case 0x6cdb91:goto L6cdb91;
case 0x6cdb93:goto L6cdb93;
case 0x6cdb95:c.instructions+=5;goto B6cdb95;
case 0x6cdb98:c.instructions+=4;goto B6cdb98;
case 0x6cdb99:c.instructions+=3;goto B6cdb99;
case 0x6cdb9a:c.instructions+=2;goto B6cdb9a;
case 0x6cdb9c:c.instructions+=1;goto B6cdb9c;
case 0x6cdb9f:goto L6cdb9f;
case 0x6cdba2:c.instructions+=1;goto B6cdba2;
case 0x6cdba5:goto L6cdba5;
case 0x6cdba7:c.instructions+=1;goto B6cdba7;
case 0x6cdbad:goto L6cdbad;
case 0x6cdbae:c.instructions+=2;goto B6cdbae;
case 0x6cdbb0:c.instructions+=1;goto B6cdbb0;
case 0x6cdbb5:goto L6cdbb5;
case 0x6cdbb8:c.instructions+=1;goto B6cdbb8;
case 0x6cdbba:goto L6cdbba;
case 0x6cdbbc:c.instructions+=2;goto B6cdbbc;
case 0x6cdbbe:c.instructions+=1;goto B6cdbbe;
case 0x6cdbc3:goto L6cdbc3;
case 0x6cdbc6:c.instructions+=2;goto B6cdbc6;
case 0x6cdbc9:c.instructions+=1;goto B6cdbc9;
case 0x6cdbcd:goto L6cdbcd;
case 0x6cdbd0:c.instructions+=2;goto B6cdbd0;
case 0x6cdbd3:c.instructions+=1;goto B6cdbd3;
case 0x6cdbd9:goto L6cdbd9;
case 0x6cdbdc:c.instructions+=2;goto B6cdbdc;
case 0x6cdbde:c.instructions+=1;goto B6cdbde;
case 0x6cdbe0:goto L6cdbe0;
case 0x6cdbe2:goto L6cdbe2;
case 0x6cdbe5:c.instructions+=6;goto B6cdbe5;
case 0x6cdbe8:c.instructions+=5;goto B6cdbe8;
case 0x6cdbeb:c.instructions+=4;goto B6cdbeb;
case 0x6cdbec:c.instructions+=3;goto B6cdbec;
case 0x6cdbef:c.instructions+=2;goto B6cdbef;
case 0x6cdbf2:c.instructions+=1;goto B6cdbf2;
case 0x6cdbf4:goto L6cdbf4;
case 0x6cdbf7:c.instructions+=1;goto B6cdbf7;
case 0x6cdbf9:goto L6cdbf9;
case 0x6cdbfa:c.instructions+=1;goto B6cdbfa;
case 0x6cdbfb:goto L6cdbfb;
case 0x6cdbfc:c.instructions+=2;goto B6cdbfc;
case 0x6cdbfd:c.instructions+=1;goto B6cdbfd;
case 0x6cdbfe:goto L6cdbfe;
case 0x6cdc03:c.instructions+=1;goto B6cdc03;
case 0x6cdc05:goto L6cdc05;
case 0x6cdc07:c.instructions+=10;goto B6cdc07;
case 0x6cdc08:c.instructions+=9;goto B6cdc08;
case 0x6cdc0a:c.instructions+=8;goto B6cdc0a;
case 0x6cdc10:c.instructions+=7;goto B6cdc10;
case 0x6cdc11:c.instructions+=6;goto B6cdc11;
case 0x6cdc14:c.instructions+=5;goto B6cdc14;
case 0x6cdc16:c.instructions+=4;goto B6cdc16;
case 0x6cdc17:c.instructions+=3;goto B6cdc17;
case 0x6cdc18:c.instructions+=2;goto B6cdc18;
case 0x6cdc1a:c.instructions+=1;goto B6cdc1a;
case 0x6cdc1c:goto L6cdc1c;
case 0x6cdc22:c.instructions+=1;goto B6cdc22;
case 0x6cdc25:goto L6cdc25;
case 0x6cdc28:c.instructions+=6;goto B6cdc28;
case 0x6cdc2b:c.instructions+=5;goto B6cdc2b;
case 0x6cdc2d:c.instructions+=4;goto B6cdc2d;
case 0x6cdc30:c.instructions+=3;goto B6cdc30;
case 0x6cdc36:c.instructions+=2;goto B6cdc36;
case 0x6cdc39:c.instructions+=1;goto B6cdc39;
case 0x6cdc3f:goto L6cdc3f;
case 0x6cdc45:c.instructions+=7;goto B6cdc45;
case 0x6cdc47:c.instructions+=6;goto B6cdc47;
case 0x6cdc4a:c.instructions+=5;goto B6cdc4a;
case 0x6cdc4e:c.instructions+=4;goto B6cdc4e;
case 0x6cdc51:c.instructions+=3;goto B6cdc51;
case 0x6cdc57:c.instructions+=2;goto B6cdc57;
case 0x6cdc59:c.instructions+=1;goto B6cdc59;
case 0x6cdc5f:goto L6cdc5f;
case 0x6cdc63:c.instructions+=2;goto B6cdc63;
case 0x6cdc65:c.instructions+=1;goto B6cdc65;
case 0x6cdc6b:goto L6cdc6b;
case 0x6cdc6e:c.instructions+=7;goto B6cdc6e;
case 0x6cdc71:c.instructions+=6;goto B6cdc71;
case 0x6cdc74:c.instructions+=5;goto B6cdc74;
case 0x6cdc77:c.instructions+=4;goto B6cdc77;
case 0x6cdc79:c.instructions+=3;goto B6cdc79;
case 0x6cdc7c:c.instructions+=2;goto B6cdc7c;
case 0x6cdc7f:c.instructions+=1;goto B6cdc7f;
case 0x6cdc81:goto L6cdc81;
case 0x6cdc84:goto L6cdc84;
case 0x6cdc86:c.instructions+=8;goto B6cdc86;
case 0x6cdc89:c.instructions+=7;goto B6cdc89;
case 0x6cdc8c:c.instructions+=6;goto B6cdc8c;
case 0x6cdc8f:c.instructions+=5;goto B6cdc8f;
case 0x6cdc92:c.instructions+=4;goto B6cdc92;
case 0x6cdc95:c.instructions+=3;goto B6cdc95;
case 0x6cdc98:c.instructions+=2;goto B6cdc98;
case 0x6cdc9b:c.instructions+=1;goto B6cdc9b;
case 0x6cdc9d:goto L6cdc9d;
case 0x6cdca1:c.instructions+=1;goto B6cdca1;
case 0x6cdca3:goto L6cdca3;
case 0x6cdcaa:c.instructions+=1;goto B6cdcaa;
case 0x6cdcac:goto L6cdcac;
case 0x6cdcb3:goto L6cdcb3;
case 0x6cdcb6:c.instructions+=3;goto B6cdcb6;
case 0x6cdcbb:c.instructions+=2;goto B6cdcbb;
case 0x6cdcbd:c.instructions+=1;goto B6cdcbd;
case 0x6cdcbf:goto L6cdcbf;
case 0x6cdcc2:c.instructions+=4;goto B6cdcc2;
case 0x6cdcc4:c.instructions+=3;goto B6cdcc4;
case 0x6cdcc6:c.instructions+=2;goto B6cdcc6;
case 0x6cdcc8:c.instructions+=1;goto B6cdcc8;
case 0x6cdcca:goto L6cdcca;
case 0x6cdcd1:c.instructions+=1;goto B6cdcd1;
case 0x6cdcd7:goto L6cdcd7;
case 0x6cdcde:goto L6cdcde;
case 0x6cdce1:c.instructions+=5;goto B6cdce1;
case 0x6cdce3:c.instructions+=4;goto B6cdce3;
case 0x6cdce6:c.instructions+=3;goto B6cdce6;
case 0x6cdce9:c.instructions+=2;goto B6cdce9;
case 0x6cdced:c.instructions+=1;goto B6cdced;
case 0x6cdcf3:goto L6cdcf3;
case 0x6cdcf7:c.instructions+=1;goto B6cdcf7;
case 0x6cdcf9:goto L6cdcf9;
case 0x6cdcfc:c.instructions+=2;goto B6cdcfc;
case 0x6cdd00:c.instructions+=1;goto B6cdd00;
case 0x6cdd02:goto L6cdd02;
case 0x6cdd05:c.instructions+=3;goto B6cdd05;
case 0x6cdd0a:c.instructions+=2;goto B6cdd0a;
case 0x6cdd0f:c.instructions+=1;goto B6cdd0f;
case 0x6cdd15:goto L6cdd15;
case 0x6cdd1c:goto L6cdd1c;
case 0x6cdd1f:c.instructions+=5;goto B6cdd1f;
case 0x6cdd25:c.instructions+=4;goto B6cdd25;
case 0x6cdd28:c.instructions+=3;goto B6cdd28;
case 0x6cdd2c:c.instructions+=2;goto B6cdd2c;
case 0x6cdd2f:c.instructions+=1;goto B6cdd2f;
case 0x6cdd35:goto L6cdd35;
case 0x6cdd39:c.instructions+=2;goto B6cdd39;
case 0x6cdd3d:c.instructions+=1;goto B6cdd3d;
case 0x6cdd43:goto L6cdd43;
case 0x6cdd46:c.instructions+=6;goto B6cdd46;
case 0x6cdd48:c.instructions+=5;goto B6cdd48;
case 0x6cdd4b:c.instructions+=4;goto B6cdd4b;
case 0x6cdd4e:c.instructions+=3;goto B6cdd4e;
case 0x6cdd51:c.instructions+=2;goto B6cdd51;
case 0x6cdd53:c.instructions+=1;goto B6cdd53;
case 0x6cdd56:goto L6cdd56;
case 0x6cdd59:c.instructions+=27;goto B6cdd59;
case 0x6cdd5c:c.instructions+=26;goto B6cdd5c;
case 0x6cdd5f:c.instructions+=25;goto B6cdd5f;
case 0x6cdd62:c.instructions+=24;goto B6cdd62;
case 0x6cdd65:c.instructions+=23;goto B6cdd65;
case 0x6cdd69:c.instructions+=22;goto B6cdd69;
case 0x6cdd6c:c.instructions+=21;goto B6cdd6c;
case 0x6cdd6f:c.instructions+=20;goto B6cdd6f;
case 0x6cdd73:c.instructions+=19;goto B6cdd73;
case 0x6cdd76:c.instructions+=18;goto B6cdd76;
case 0x6cdd79:c.instructions+=17;goto B6cdd79;
case 0x6cdd7c:c.instructions+=16;goto B6cdd7c;
case 0x6cdd7e:c.instructions+=15;goto B6cdd7e;
case 0x6cdd81:c.instructions+=14;goto B6cdd81;
case 0x6cdd84:c.instructions+=13;goto B6cdd84;
case 0x6cdd88:c.instructions+=12;goto B6cdd88;
case 0x6cdd8b:c.instructions+=11;goto B6cdd8b;
case 0x6cdd8f:c.instructions+=10;goto B6cdd8f;
case 0x6cdd92:c.instructions+=9;goto B6cdd92;
case 0x6cdd99:c.instructions+=8;goto B6cdd99;
case 0x6cdd9c:c.instructions+=7;goto B6cdd9c;
case 0x6cdda0:c.instructions+=6;goto B6cdda0;
case 0x6cdda3:c.instructions+=5;goto B6cdda3;
case 0x6cddaa:c.instructions+=4;goto B6cddaa;
case 0x6cddad:c.instructions+=3;goto B6cddad;
case 0x6cddb1:c.instructions+=2;goto B6cddb1;
case 0x6cddb8:c.instructions+=1;goto B6cddb8;
case 0x6cddba:goto L6cddba;
case 0x6cddbd:c.instructions+=22;goto B6cddbd;
case 0x6cddc0:c.instructions+=21;goto B6cddc0;
case 0x6cddc3:c.instructions+=20;goto B6cddc3;
case 0x6cddc6:c.instructions+=19;goto B6cddc6;
case 0x6cddc9:c.instructions+=18;goto B6cddc9;
case 0x6cddcc:c.instructions+=17;goto B6cddcc;
case 0x6cddcf:c.instructions+=16;goto B6cddcf;
case 0x6cddd2:c.instructions+=15;goto B6cddd2;
case 0x6cddd5:c.instructions+=14;goto B6cddd5;
case 0x6cddd8:c.instructions+=13;goto B6cddd8;
case 0x6cdddb:c.instructions+=12;goto B6cdddb;
case 0x6cddde:c.instructions+=11;goto B6cddde;
case 0x6cdde1:c.instructions+=10;goto B6cdde1;
case 0x6cdde4:c.instructions+=9;goto B6cdde4;
case 0x6cdde7:c.instructions+=8;goto B6cdde7;
case 0x6cddea:c.instructions+=7;goto B6cddea;
case 0x6cdded:c.instructions+=6;goto B6cdded;
case 0x6cddef:c.instructions+=5;goto B6cddef;
case 0x6cddf2:c.instructions+=4;goto B6cddf2;
case 0x6cddf5:c.instructions+=3;goto B6cddf5;
case 0x6cddf7:c.instructions+=2;goto B6cddf7;
case 0x6cddf9:c.instructions+=1;goto B6cddf9;
case 0x6cddfb:goto L6cddfb;
case 0x6cddfe:c.instructions+=4;goto B6cddfe;
case 0x6cde00:c.instructions+=3;goto B6cde00;
case 0x6cde03:c.instructions+=2;goto B6cde03;
case 0x6cde05:c.instructions+=1;goto B6cde05;
case 0x6cde07:goto L6cde07;
case 0x6cde0a:c.instructions+=5;goto B6cde0a;
case 0x6cde0d:c.instructions+=4;goto B6cde0d;
case 0x6cde10:c.instructions+=3;goto B6cde10;
case 0x6cde13:c.instructions+=2;goto B6cde13;
case 0x6cde16:c.instructions+=1;goto B6cde16;
case 0x6cde1c:goto L6cde1c;
case 0x6cde1f:c.instructions+=4;goto B6cde1f;
case 0x6cde23:c.instructions+=3;goto B6cde23;
case 0x6cde25:c.instructions+=2;goto B6cde25;
case 0x6cde28:c.instructions+=1;goto B6cde28;
case 0x6cde2a:goto L6cde2a;
case 0x6cde2d:c.instructions+=1;goto B6cde2d;
case 0x6cde30:goto L6cde30;
case 0x6cde33:c.instructions+=3;goto B6cde33;
case 0x6cde35:c.instructions+=2;goto B6cde35;
case 0x6cde37:c.instructions+=1;goto B6cde37;
case 0x6cde3c:goto L6cde3c;
case 0x6cde3f:c.instructions+=1;goto B6cde3f;
case 0x6cde45:goto L6cde45;
case 0x6cde48:c.instructions+=3;goto B6cde48;
case 0x6cde4c:c.instructions+=2;goto B6cde4c;
case 0x6cde4f:c.instructions+=1;goto B6cde4f;
case 0x6cde51:goto L6cde51;
case 0x6cde55:c.instructions+=4;goto B6cde55;
case 0x6cde59:c.instructions+=3;goto B6cde59;
case 0x6cde5d:c.instructions+=2;goto B6cde5d;
case 0x6cde5f:c.instructions+=1;goto B6cde5f;
case 0x6cde65:goto L6cde65;
case 0x6cde68:c.instructions+=16;goto B6cde68;
case 0x6cde6b:c.instructions+=15;goto B6cde6b;
case 0x6cde6e:c.instructions+=14;goto B6cde6e;
case 0x6cde71:c.instructions+=13;goto B6cde71;
case 0x6cde73:c.instructions+=12;goto B6cde73;
case 0x6cde76:c.instructions+=11;goto B6cde76;
case 0x6cde79:c.instructions+=10;goto B6cde79;
case 0x6cde7b:c.instructions+=9;goto B6cde7b;
case 0x6cde7e:c.instructions+=8;goto B6cde7e;
case 0x6cde80:c.instructions+=7;goto B6cde80;
case 0x6cde83:c.instructions+=6;goto B6cde83;
case 0x6cde85:c.instructions+=5;goto B6cde85;
case 0x6cde88:c.instructions+=4;goto B6cde88;
case 0x6cde8b:c.instructions+=3;goto B6cde8b;
case 0x6cde8e:c.instructions+=2;goto B6cde8e;
case 0x6cde91:c.instructions+=1;goto B6cde91;
case 0x6cde93:goto L6cde93;
case 0x6cde96:goto L6cde96;
case 0x6cde99:c.instructions+=7;goto B6cde99;
case 0x6cde9c:c.instructions+=6;goto B6cde9c;
case 0x6cde9e:c.instructions+=5;goto B6cde9e;
case 0x6cdea1:c.instructions+=4;goto B6cdea1;
case 0x6cdea4:c.instructions+=3;goto B6cdea4;
case 0x6cdea7:c.instructions+=2;goto B6cdea7;
case 0x6cdeaa:c.instructions+=1;goto B6cdeaa;
case 0x6cdeac:goto L6cdeac;
case 0x6cdeaf:goto L6cdeaf;
case 0x6cdeb2:c.instructions+=3;goto B6cdeb2;
case 0x6cdeb5:c.instructions+=2;goto B6cdeb5;
case 0x6cdeb8:c.instructions+=1;goto B6cdeb8;
case 0x6cdeba:goto L6cdeba;
case 0x6cdebd:goto L6cdebd;
case 0x6cdec3:c.instructions+=2;goto B6cdec3;
case 0x6cdec6:c.instructions+=1;goto B6cdec6;
case 0x6cdec8:goto L6cdec8;
case 0x6cdecb:c.instructions+=3;goto B6cdecb;
case 0x6cdece:c.instructions+=2;goto B6cdece;
case 0x6cded1:c.instructions+=1;goto B6cded1;
case 0x6cded3:goto L6cded3;
case 0x6cded6:c.instructions+=3;goto B6cded6;
case 0x6cded9:c.instructions+=2;goto B6cded9;
case 0x6cdedc:c.instructions+=1;goto B6cdedc;
case 0x6cdede:goto L6cdede;
case 0x6cdee1:c.instructions+=3;goto B6cdee1;
case 0x6cdee4:c.instructions+=2;goto B6cdee4;
case 0x6cdee7:c.instructions+=1;goto B6cdee7;
case 0x6cdee9:goto L6cdee9;
case 0x6cdeec:goto L6cdeec;
case 0x6cdeef:c.instructions+=2;goto B6cdeef;
case 0x6cdef2:c.instructions+=1;goto B6cdef2;
case 0x6cdef4:goto L6cdef4;
case 0x6cdef7:goto L6cdef7;
case 0x6cdefa:c.instructions+=2;goto B6cdefa;
case 0x6cdefd:c.instructions+=1;goto B6cdefd;
case 0x6cdeff:goto L6cdeff;
case 0x6cdf02:goto L6cdf02;
case 0x6cdf04:c.instructions+=3;goto B6cdf04;
case 0x6cdf07:c.instructions+=2;goto B6cdf07;
case 0x6cdf0c:c.instructions+=1;goto B6cdf0c;
case 0x6cdf0e:goto L6cdf0e;
case 0x6cdf11:c.instructions+=2;goto B6cdf11;
case 0x6cdf14:c.instructions+=1;goto B6cdf14;
case 0x6cdf16:goto L6cdf16;
case 0x6cdf19:c.instructions+=1;goto B6cdf19;
case 0x6cdf1f:goto L6cdf1f;
case 0x6cdf22:c.instructions+=1;goto B6cdf22;
case 0x6cdf28:goto L6cdf28;
case 0x6cdf2b:c.instructions+=3;goto B6cdf2b;
case 0x6cdf2e:c.instructions+=2;goto B6cdf2e;
case 0x6cdf31:c.instructions+=1;goto B6cdf31;
case 0x6cdf37:goto L6cdf37;
case 0x6cdf3a:c.instructions+=8;goto B6cdf3a;
case 0x6cdf3d:c.instructions+=7;goto B6cdf3d;
case 0x6cdf40:c.instructions+=6;goto B6cdf40;
case 0x6cdf43:c.instructions+=5;goto B6cdf43;
case 0x6cdf45:c.instructions+=4;goto B6cdf45;
case 0x6cdf47:c.instructions+=3;goto B6cdf47;
case 0x6cdf49:c.instructions+=2;goto B6cdf49;
case 0x6cdf4c:c.instructions+=1;goto B6cdf4c;
case 0x6cdf52:goto L6cdf52;
case 0x6cdf55:c.instructions+=8;goto B6cdf55;
case 0x6cdf58:c.instructions+=7;goto B6cdf58;
case 0x6cdf5c:c.instructions+=6;goto B6cdf5c;
case 0x6cdf5f:c.instructions+=5;goto B6cdf5f;
case 0x6cdf61:c.instructions+=4;goto B6cdf61;
case 0x6cdf66:c.instructions+=3;goto B6cdf66;
case 0x6cdf68:c.instructions+=2;goto B6cdf68;
case 0x6cdf6b:c.instructions+=1;goto B6cdf6b;
case 0x6cdf71:goto L6cdf71;
case 0x6cdf75:c.instructions+=3;goto B6cdf75;
case 0x6cdf79:c.instructions+=2;goto B6cdf79;
case 0x6cdf7b:c.instructions+=1;goto B6cdf7b;
case 0x6cdf7d:goto L6cdf7d;
case 0x6cdf81:c.instructions+=2;goto B6cdf81;
case 0x6cdf85:c.instructions+=1;goto B6cdf85;
case 0x6cdf87:goto L6cdf87;
case 0x6cdf8a:c.instructions+=1;goto B6cdf8a;
case 0x6cdf8c:goto L6cdf8c;
case 0x6cdf8f:goto L6cdf8f;
case 0x6cdf92:c.instructions+=3;goto B6cdf92;
case 0x6cdf95:c.instructions+=2;goto B6cdf95;
case 0x6cdf97:c.instructions+=1;goto B6cdf97;
case 0x6cdf99:goto L6cdf99;
case 0x6cdf9c:c.instructions+=5;goto B6cdf9c;
case 0x6cdf9f:c.instructions+=4;goto B6cdf9f;
case 0x6cdfa2:c.instructions+=3;goto B6cdfa2;
case 0x6cdfa5:c.instructions+=2;goto B6cdfa5;
case 0x6cdfa8:c.instructions+=1;goto B6cdfa8;
case 0x6cdfaa:goto L6cdfaa;
case 0x6cdfac:goto L6cdfac;
case 0x6cdfaf:goto L6cdfaf;
case 0x6cdfb2:c.instructions+=2;goto B6cdfb2;
case 0x6cdfb5:c.instructions+=1;goto B6cdfb5;
case 0x6cdfb7:goto L6cdfb7;
case 0x6cdfbb:c.instructions+=1;goto B6cdfbb;
case 0x6cdfbd:goto L6cdfbd;
case 0x6cdfc0:c.instructions+=1;goto B6cdfc0;
case 0x6cdfc6:goto L6cdfc6;
case 0x6cdfc9:c.instructions+=3;goto B6cdfc9;
case 0x6cdfcf:c.instructions+=2;goto B6cdfcf;
case 0x6cdfd5:c.instructions+=1;goto B6cdfd5;
case 0x6cdfdb:goto L6cdfdb;
case 0x6cdfe1:c.instructions+=1;goto B6cdfe1;
case 0x6cdfe3:goto L6cdfe3;
case 0x6cdfe9:c.instructions+=1;goto B6cdfe9;
case 0x6cdfeb:goto L6cdfeb;
case 0x6cdff2:goto L6cdff2;
case 0x6cdff5:c.instructions+=2;goto B6cdff5;
case 0x6cdff8:c.instructions+=1;goto B6cdff8;
case 0x6cdffe:goto L6cdffe;
default:missing_instruction(c.pc);}
B6cd000:L6cd000:{c.instructions+=3;NFSU2_TR(0x6cd000);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd006:{NFSU2_TR(0x6cd006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd009:{NFSU2_TR(0x6cd009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd012;}}
}
B6cd00b:L6cd00b:{c.instructions+=2;NFSU2_TR(0x6cd00b);
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
B6cd00d:{NFSU2_TR(0x6cd00d);
{goto L6cd13c;}
}
B6cd012:L6cd012:{c.instructions+=6;NFSU2_TR(0x6cd012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd015:{NFSU2_TR(0x6cd015);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd016:{NFSU2_TR(0x6cd016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cd019:{NFSU2_TR(0x6cd019);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd01b:{NFSU2_TR(0x6cd01b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd01c:{NFSU2_TR(0x6cd01c);
if(r1(R+518)){{goto L6cd0b8;}}
}
B6cd022:L6cd022:{c.instructions+=3;NFSU2_TR(0x6cd022);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd025:{NFSU2_TR(0x6cd025);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd029:{NFSU2_TR(0x6cd029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0a9;}}
}
B6cd02b:L6cd02b:{c.instructions+=3;NFSU2_TR(0x6cd02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd02e:{NFSU2_TR(0x6cd02e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd030:{NFSU2_TR(0x6cd030);
if(r1(R+518)){{goto L6cd035;}}
}
B6cd032:L6cd032:{c.instructions+=1;NFSU2_TR(0x6cd032);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd035:L6cd035:{c.instructions+=3;NFSU2_TR(0x6cd035);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd038:{NFSU2_TR(0x6cd038);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd03a:{NFSU2_TR(0x6cd03a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd040;}}
}
B6cd03c:L6cd03c:{c.instructions+=2;NFSU2_TR(0x6cd03c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cd03e:{NFSU2_TR(0x6cd03e);
{goto L6cd043;}
}
B6cd040:L6cd040:{c.instructions+=1;NFSU2_TR(0x6cd040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cd043:L6cd043:{c.instructions+=2;NFSU2_TR(0x6cd043);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd045:{NFSU2_TR(0x6cd045);
if(r1(R+518)){{goto L6cd093;}}
}
B6cd047:L6cd047:{c.instructions+=2;NFSU2_TR(0x6cd047);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd049:{NFSU2_TR(0x6cd049);
if(r1(R+518)){{goto L6cd0a9;}}
}
B6cd04b:L6cd04b:{c.instructions+=5;NFSU2_TR(0x6cd04b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd04e:{NFSU2_TR(0x6cd04e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd04f:{NFSU2_TR(0x6cd04f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd051:{NFSU2_TR(0x6cd051);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd052:{NFSU2_TR(0x6cd052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd057ull));
TAIL_STATIC(0x672277u,672);
}
B6cd057:L6cd057:{c.instructions+=2;NFSU2_TR(0x6cd057);
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
B6cd059:{NFSU2_TR(0x6cd059);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd0a9;}}
}
B6cd05b:L6cd05b:{c.instructions+=3;NFSU2_TR(0x6cd05b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6cd05e:{NFSU2_TR(0x6cd05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd05f:{NFSU2_TR(0x6cd05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd064ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6cd064:L6cd064:{c.instructions+=3;NFSU2_TR(0x6cd064);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd067:{NFSU2_TR(0x6cd067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd068:{NFSU2_TR(0x6cd068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0a9;}}
}
B6cd06a:L6cd06a:{c.instructions+=4;NFSU2_TR(0x6cd06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd06d:{NFSU2_TR(0x6cd06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd073:{NFSU2_TR(0x6cd073);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd076:{NFSU2_TR(0x6cd076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd07c;}}
}
B6cd078:L6cd078:{c.instructions+=2;NFSU2_TR(0x6cd078);
__builtin_memmove((R+28),(R+24),4);
}
B6cd07a:{NFSU2_TR(0x6cd07a);
{goto L6cd0a9;}
}
B6cd07c:L6cd07c:{c.instructions+=3;NFSU2_TR(0x6cd07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6cd07f:{NFSU2_TR(0x6cd07f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd084:{NFSU2_TR(0x6cd084);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0a9;}}
}
B6cd086:L6cd086:{c.instructions+=2;NFSU2_TR(0x6cd086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffffull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6cd08c:{NFSU2_TR(0x6cd08c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0a9;}}
}
B6cd08e:L6cd08e:{c.instructions+=2;NFSU2_TR(0x6cd08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd091:{NFSU2_TR(0x6cd091);
{goto L6cd0a9;}
}
B6cd093:L6cd093:{c.instructions+=2;NFSU2_TR(0x6cd093);
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
B6cd095:{NFSU2_TR(0x6cd095);
if(r1(R+518)){{goto L6cd0a9;}}
}
B6cd097:L6cd097:{c.instructions+=3;NFSU2_TR(0x6cd097);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6cd09a:{NFSU2_TR(0x6cd09a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd09b:{NFSU2_TR(0x6cd09b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd0a0ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6cd0a0:L6cd0a0:{c.instructions+=3;NFSU2_TR(0x6cd0a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd0a3:{NFSU2_TR(0x6cd0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd0a4:{NFSU2_TR(0x6cd0a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0a9;}}
}
B6cd0a6:L6cd0a6:{c.instructions+=1;NFSU2_TR(0x6cd0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd0a9:L6cd0a9:{c.instructions+=3;NFSU2_TR(0x6cd0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cd0ac:{NFSU2_TR(0x6cd0ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd0ae:{NFSU2_TR(0x6cd0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd022u);}goto L6cd022;}}
}
B6cd0b4:L6cd0b4:{c.instructions+=2;NFSU2_TR(0x6cd0b4);
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
B6cd0b6:{NFSU2_TR(0x6cd0b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0c6;}}
}
B6cd0b8:L6cd0b8:{c.instructions+=3;NFSU2_TR(0x6cd0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd0bb:{NFSU2_TR(0x6cd0bb);
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
B6cd0bd:{NFSU2_TR(0x6cd0bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd0c6;}}
}
B6cd0bf:L6cd0bf:{c.instructions+=3;NFSU2_TR(0x6cd0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd0c2:{NFSU2_TR(0x6cd0c2);
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
B6cd0c4:{NFSU2_TR(0x6cd0c4);
if(r1(R+518)){{goto L6cd138;}}
}
B6cd0c6:L6cd0c6:{c.instructions+=3;NFSU2_TR(0x6cd0c6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6cd0c9:{NFSU2_TR(0x6cd0c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd0ca:{NFSU2_TR(0x6cd0ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd0cfull));
TAIL_STATIC(0x75ded8u,75d);
}
B6cd0cf:L6cd0cf:{c.instructions+=3;NFSU2_TR(0x6cd0cf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x63ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x63ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x63ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd0d2:{NFSU2_TR(0x6cd0d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd0d3:{NFSU2_TR(0x6cd0d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd138;}}
}
B6cd0d5:L6cd0d5:{c.instructions+=4;NFSU2_TR(0x6cd0d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cd0d8:{NFSU2_TR(0x6cd0d8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6cd0db:{NFSU2_TR(0x6cd0db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd0dc:{NFSU2_TR(0x6cd0dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd0e1ull));
TAIL_STATIC(0x75df39u,75d);
}
B6cd0e1:L6cd0e1:{c.instructions+=3;NFSU2_TR(0x6cd0e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd0e3:{NFSU2_TR(0x6cd0e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd0e4:{NFSU2_TR(0x6cd0e4);
if(r1(R+518)){{goto L6cd138;}}
}
B6cd0e6:L6cd0e6:{c.instructions+=3;NFSU2_TR(0x6cd0e6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x2ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd0e9:{NFSU2_TR(0x6cd0e9);
__builtin_memmove((R+24),(R+28),4);
}
B6cd0eb:{NFSU2_TR(0x6cd0eb);
{goto L6cd0ee;}
}
B6cd0ed:L6cd0ed:{c.instructions+=1;NFSU2_TR(0x6cd0ed);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd0ee:L6cd0ee:{c.instructions+=3;NFSU2_TR(0x6cd0ee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6cd0f1:{NFSU2_TR(0x6cd0f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd0f2:{NFSU2_TR(0x6cd0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd0f7ull));
TAIL_STATIC(0x75df39u,75d);
}
B6cd0f7:L6cd0f7:{c.instructions+=3;NFSU2_TR(0x6cd0f7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd0f9:{NFSU2_TR(0x6cd0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd0fa:{NFSU2_TR(0x6cd0fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd0edu);}goto L6cd0ed;}}
}
B6cd0fc:L6cd0fc:{c.instructions+=2;NFSU2_TR(0x6cd0fc);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+0)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6cd0fe:{NFSU2_TR(0x6cd0fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd138;}}
}
B6cd100:L6cd100:{c.instructions+=2;NFSU2_TR(0x6cd100);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd101:{NFSU2_TR(0x6cd101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd106ull));
TAIL_STATIC(0x75d65bu,75d);
}
B6cd106:L6cd106:{c.instructions+=3;NFSU2_TR(0x6cd106);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x1fffull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd10b:{NFSU2_TR(0x6cd10b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd10c:{NFSU2_TR(0x6cd10c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd12b;}}
}
B6cd10e:L6cd10e:{c.instructions+=7;NFSU2_TR(0x6cd10e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd10f:{NFSU2_TR(0x6cd10f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd110:{NFSU2_TR(0x6cd110);
u8 U[4];
w4(U+0,u32(0x7baa38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd115:{NFSU2_TR(0x6cd115);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd117:{NFSU2_TR(0x6cd117);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd119:{NFSU2_TR(0x6cd119);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd11c:{NFSU2_TR(0x6cd11c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd121ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cd121:L6cd121:{c.instructions+=3;NFSU2_TR(0x6cd121);
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
B6cd124:{NFSU2_TR(0x6cd124);
w4(R+0,u32(0x80004005ull));
}
B6cd129:{NFSU2_TR(0x6cd129);
{goto L6cd13a;}
}
B6cd12b:L6cd12b:{c.instructions+=4;NFSU2_TR(0x6cd12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd12e:{NFSU2_TR(0x6cd12e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cd131:{NFSU2_TR(0x6cd131);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B6cd134:{NFSU2_TR(0x6cd134);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B6cd138:L6cd138:{c.instructions+=1;NFSU2_TR(0x6cd138);
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
B6cd13a:L6cd13a:{c.instructions+=2;NFSU2_TR(0x6cd13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cd13b:{NFSU2_TR(0x6cd13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cd13c:L6cd13c:{c.instructions+=3;NFSU2_TR(0x6cd13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd13d:{NFSU2_TR(0x6cd13d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cd13e:{NFSU2_TR(0x6cd13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cd141:L6cd141:{c.instructions+=5;NFSU2_TR(0x6cd141);
__builtin_memmove((R+28),(R+28),4);
}
B6cd143:{NFSU2_TR(0x6cd143);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd144:{NFSU2_TR(0x6cd144);
__builtin_memmove((R+20),(R+16),4);
}
B6cd146:{NFSU2_TR(0x6cd146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd149:{NFSU2_TR(0x6cd149);
{goto L6cd153;}
}
B6cd14b:L6cd14b:{c.instructions+=2;NFSU2_TR(0x6cd14b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cd14e:{NFSU2_TR(0x6cd14e);
if(r1(R+518)){{goto L6cd15b;}}
}
B6cd150:L6cd150:{c.instructions+=1;NFSU2_TR(0x6cd150);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B6cd153:L6cd153:{c.instructions+=3;NFSU2_TR(0x6cd153);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd156:{NFSU2_TR(0x6cd156);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd159:{NFSU2_TR(0x6cd159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd14bu);}goto L6cd14b;}}
}
B6cd15b:L6cd15b:{c.instructions+=2;NFSU2_TR(0x6cd15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6cd15c:{NFSU2_TR(0x6cd15c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cd15f:L6cd15f:{c.instructions+=5;NFSU2_TR(0x6cd15f);
__builtin_memmove((R+28),(R+28),4);
}
B6cd161:{NFSU2_TR(0x6cd161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd162:{NFSU2_TR(0x6cd162);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd163:{NFSU2_TR(0x6cd163);
__builtin_memmove((R+24),(R+4),4);
}
B6cd165:{NFSU2_TR(0x6cd165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd16aull));
TAIL_STATIC(0x69a534u,69a);
}
B6cd16a:L6cd16a:{c.instructions+=5;NFSU2_TR(0x6cd16a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd16c:{NFSU2_TR(0x6cd16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd16d:{NFSU2_TR(0x6cd16d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cd16f:{NFSU2_TR(0x6cd16f);
u8 U[4];
w4(U+0,u32(0x7bf4c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6cd175:{NFSU2_TR(0x6cd175);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd17b:L6cd17b:{c.instructions+=1;NFSU2_TR(0x6cd17b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6cd17d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd17bu);}goto L6cd17b;}
}
B6cd17d:L6cd17d:{c.instructions+=3;NFSU2_TR(0x6cd17d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd17f:{NFSU2_TR(0x6cd17f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd180:{NFSU2_TR(0x6cd180);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd186:L6cd186:{c.instructions+=1;NFSU2_TR(0x6cd186);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6cd188;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd186u);}goto L6cd186;}
}
B6cd188:L6cd188:{c.instructions+=36;NFSU2_TR(0x6cd188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd18f:{NFSU2_TR(0x6cd18f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cd191:{NFSU2_TR(0x6cd191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd197:{NFSU2_TR(0x6cd197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd19d:{NFSU2_TR(0x6cd19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1a3:{NFSU2_TR(0x6cd1a3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6cd1a6:{NFSU2_TR(0x6cd1a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd1ac:{NFSU2_TR(0x6cd1ac);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd1ad:{NFSU2_TR(0x6cd1ad);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd1ae:{NFSU2_TR(0x6cd1ae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd1af:{NFSU2_TR(0x6cd1af);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6cd1b6:{NFSU2_TR(0x6cd1b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd1b7:{NFSU2_TR(0x6cd1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1bd:{NFSU2_TR(0x6cd1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1c3:{NFSU2_TR(0x6cd1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1c9:{NFSU2_TR(0x6cd1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1cf:{NFSU2_TR(0x6cd1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1d5:{NFSU2_TR(0x6cd1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1db:{NFSU2_TR(0x6cd1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1e1:{NFSU2_TR(0x6cd1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1e7:{NFSU2_TR(0x6cd1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1ed:{NFSU2_TR(0x6cd1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1f3:{NFSU2_TR(0x6cd1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1f9:{NFSU2_TR(0x6cd1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd1ff:{NFSU2_TR(0x6cd1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd205:{NFSU2_TR(0x6cd205);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd20b:{NFSU2_TR(0x6cd20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0xffff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd215:{NFSU2_TR(0x6cd215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd21f:{NFSU2_TR(0x6cd21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0xffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd229:{NFSU2_TR(0x6cd229);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd22f:{NFSU2_TR(0x6cd22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd235:{NFSU2_TR(0x6cd235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd23b:{NFSU2_TR(0x6cd23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd241:{NFSU2_TR(0x6cd241);
__builtin_memmove((R+0),(R+24),4);
}
B6cd243:{NFSU2_TR(0x6cd243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cd244:{NFSU2_TR(0x6cd244);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cd245:L6cd245:{c.instructions+=7;NFSU2_TR(0x6cd245);
__builtin_memmove((R+28),(R+28),4);
}
B6cd247:{NFSU2_TR(0x6cd247);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd248:{NFSU2_TR(0x6cd248);
__builtin_memmove((R+24),(R+4),4);
}
B6cd24a:{NFSU2_TR(0x6cd24a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd24b:{NFSU2_TR(0x6cd24b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd251:{NFSU2_TR(0x6cd251);
u8 U[4];
w4(U+0,u32(0x7bf4c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6cd257:{NFSU2_TR(0x6cd257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd25cull));
TAIL_STATIC(0x575630u,575);
}
B6cd25c:L6cd25c:{c.instructions+=2;NFSU2_TR(0x6cd25c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd262:{NFSU2_TR(0x6cd262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd267ull));
TAIL_STATIC(0x575630u,575);
}
B6cd267:L6cd267:{c.instructions+=6;NFSU2_TR(0x6cd267);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd26d:{NFSU2_TR(0x6cd26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd26f:{NFSU2_TR(0x6cd26f);
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
B6cd271:{NFSU2_TR(0x6cd271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd272:{NFSU2_TR(0x6cd272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd273:{NFSU2_TR(0x6cd273);
if(r1(R+518)){{goto L6cd27e;}}
}
B6cd275:L6cd275:{c.instructions+=3;NFSU2_TR(0x6cd275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cd277:{NFSU2_TR(0x6cd277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd278:{NFSU2_TR(0x6cd278);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd27bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd27b:L6cd27b:{c.instructions+=1;NFSU2_TR(0x6cd27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cd27e:L6cd27e:{c.instructions+=2;NFSU2_TR(0x6cd27e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd284:{NFSU2_TR(0x6cd284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd289ull));
TAIL_STATIC(0x686aa8u,686);
}
B6cd289:L6cd289:{c.instructions+=2;NFSU2_TR(0x6cd289);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd28f:{NFSU2_TR(0x6cd28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd294ull));
TAIL_STATIC(0x686aa8u,686);
}
B6cd294:L6cd294:{c.instructions+=4;NFSU2_TR(0x6cd294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd295:{NFSU2_TR(0x6cd295);
__builtin_memmove((R+4),(R+24),4);
}
B6cd297:{NFSU2_TR(0x6cd297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cd298:{NFSU2_TR(0x6cd298);
TAIL_STATIC(0x69a5dau,69a);
}
B6cd29d:L6cd29d:{c.instructions+=13;NFSU2_TR(0x6cd29d);
__builtin_memmove((R+28),(R+28),4);
}
B6cd29f:{NFSU2_TR(0x6cd29f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd2a0:{NFSU2_TR(0x6cd2a0);
__builtin_memmove((R+20),(R+16),4);
}
B6cd2a2:{NFSU2_TR(0x6cd2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x208ull))));
}
B6cd2a8:{NFSU2_TR(0x6cd2a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd2a9:{NFSU2_TR(0x6cd2a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd2aa:{NFSU2_TR(0x6cd2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd2ad:{NFSU2_TR(0x6cd2ad);
__builtin_memmove((R+24),(R+4),4);
}
B6cd2af:{NFSU2_TR(0x6cd2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd2b2:{NFSU2_TR(0x6cd2b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cd2b4:{NFSU2_TR(0x6cd2b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd2b6:{NFSU2_TR(0x6cd2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd2b9:{NFSU2_TR(0x6cd2b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd2d2;}}
}
B6cd2bb:L6cd2bb:{c.instructions+=6;NFSU2_TR(0x6cd2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x40ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6cd2bf:{NFSU2_TR(0x6cd2bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cd2c1:{NFSU2_TR(0x6cd2c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd2c2:{NFSU2_TR(0x6cd2c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd2c3:{NFSU2_TR(0x6cd2c3);
__builtin_memmove((R+4),(R+24),4);
}
B6cd2c5:{NFSU2_TR(0x6cd2c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd2c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd2c8:L6cd2c8:{c.instructions+=3;NFSU2_TR(0x6cd2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd2cb:{NFSU2_TR(0x6cd2cb);
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
B6cd2cd:{NFSU2_TR(0x6cd2cd);
{goto L6cd396;}
}
B6cd2d2:L6cd2d2:{c.instructions+=8;NFSU2_TR(0x6cd2d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd2d9:{NFSU2_TR(0x6cd2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd2dc:{NFSU2_TR(0x6cd2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd2df:{NFSU2_TR(0x6cd2df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd2e2:{NFSU2_TR(0x6cd2e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd2e3:{NFSU2_TR(0x6cd2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cd2e6:{NFSU2_TR(0x6cd2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd2e9:{NFSU2_TR(0x6cd2e9);
if(r1(R+518)){{goto L6cd39f;}}
}
B6cd2ef:L6cd2ef:{c.instructions+=3;NFSU2_TR(0x6cd2ef);
__builtin_memmove((R+0),(R+12),4);
}
B6cd2f1:{NFSU2_TR(0x6cd2f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6cd2f4:{NFSU2_TR(0x6cd2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd2f7:L6cd2f7:{c.instructions+=4;NFSU2_TR(0x6cd2f7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6cd2f9:{NFSU2_TR(0x6cd2f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cd2fa:{NFSU2_TR(0x6cd2fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd2fc:{NFSU2_TR(0x6cd2fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd2f7u);}goto L6cd2f7;}}
}
B6cd2fe:L6cd2fe:{c.instructions+=3;NFSU2_TR(0x6cd2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6cd301:{NFSU2_TR(0x6cd301);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd304:{NFSU2_TR(0x6cd304);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd39c;}}
}
B6cd30a:L6cd30a:{c.instructions+=4;NFSU2_TR(0x6cd30a);
w4(R+0,u32(0x7ba1fcull));
}
B6cd30f:{NFSU2_TR(0x6cd30f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6cd312:{NFSU2_TR(0x6cd312);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+0))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6cd315:{NFSU2_TR(0x6cd315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd39c;}}
}
B6cd31b:L6cd31b:{c.instructions+=2;NFSU2_TR(0x6cd31b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd31f:{NFSU2_TR(0x6cd31f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd33d;}}
}
B6cd321:L6cd321:{c.instructions+=6;NFSU2_TR(0x6cd321);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd322:{NFSU2_TR(0x6cd322);
u8 U[4];
w4(U+0,u32(0x7bf594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd327:{NFSU2_TR(0x6cd327);
u8 U[4];
w4(U+0,u32(0x11bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd32c:{NFSU2_TR(0x6cd32c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd32d:{NFSU2_TR(0x6cd32d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd32e:{NFSU2_TR(0x6cd32e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd333ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cd333:L6cd333:{c.instructions+=2;NFSU2_TR(0x6cd333);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6cd336:{NFSU2_TR(0x6cd336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd33d:L6cd33d:{c.instructions+=3;NFSU2_TR(0x6cd33d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd343:{NFSU2_TR(0x6cd343);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd344:{NFSU2_TR(0x6cd344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd349ull));
TAIL_STATIC(0x684f81u,684);
}
B6cd349:L6cd349:{c.instructions+=2;NFSU2_TR(0x6cd349);
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
B6cd34b:{NFSU2_TR(0x6cd34b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd376;}}
}
B6cd34d:L6cd34d:{c.instructions+=5;NFSU2_TR(0x6cd34d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd34f:{NFSU2_TR(0x6cd34f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd355:{NFSU2_TR(0x6cd355);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd35b:{NFSU2_TR(0x6cd35b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd35c:{NFSU2_TR(0x6cd35c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd361ull));
TAIL_STATIC(0x686b20u,686);
}
B6cd361:L6cd361:{c.instructions+=2;NFSU2_TR(0x6cd361);
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
B6cd363:{NFSU2_TR(0x6cd363);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd395;}}
}
B6cd365:L6cd365:{c.instructions+=4;NFSU2_TR(0x6cd365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd36b:{NFSU2_TR(0x6cd36b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd36e:{NFSU2_TR(0x6cd36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd374:{NFSU2_TR(0x6cd374);
{goto L6cd379;}
}
B6cd376:L6cd376:{c.instructions+=1;NFSU2_TR(0x6cd376);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd379:L6cd379:{c.instructions+=5;NFSU2_TR(0x6cd379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cd37b:{NFSU2_TR(0x6cd37b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd37c:{NFSU2_TR(0x6cd37c);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd381:{NFSU2_TR(0x6cd381);
__builtin_memmove((R+4),(R+24),4);
}
B6cd383:{NFSU2_TR(0x6cd383);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd386ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd386:L6cd386:{c.instructions+=1;NFSU2_TR(0x6cd386);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd389:L6cd389:{c.instructions+=4;NFSU2_TR(0x6cd389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd38c:{NFSU2_TR(0x6cd38c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6cd38e:{NFSU2_TR(0x6cd38e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6cd390:{NFSU2_TR(0x6cd390);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd395:L6cd395:{c.instructions+=1;NFSU2_TR(0x6cd395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cd396:L6cd396:{c.instructions+=4;NFSU2_TR(0x6cd396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd397:{NFSU2_TR(0x6cd397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cd398:{NFSU2_TR(0x6cd398);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cd399:{NFSU2_TR(0x6cd399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cd39c:L6cd39c:{c.instructions+=1;NFSU2_TR(0x6cd39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd39f:L6cd39f:{c.instructions+=2;NFSU2_TR(0x6cd39f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd3a3:{NFSU2_TR(0x6cd3a3);
if(r1(R+518)){{goto L6cd3eb;}}
}
B6cd3a5:L6cd3a5:{c.instructions+=2;NFSU2_TR(0x6cd3a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd3a9:{NFSU2_TR(0x6cd3a9);
if(r1(R+518)){{goto L6cd3eb;}}
}
B6cd3ab:L6cd3ab:{c.instructions+=2;NFSU2_TR(0x6cd3ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd3af:{NFSU2_TR(0x6cd3af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd3eb;}}
}
B6cd3b1:L6cd3b1:{c.instructions+=6;NFSU2_TR(0x6cd3b1);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3b6:{NFSU2_TR(0x6cd3b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd3bc:{NFSU2_TR(0x6cd3bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3bd:{NFSU2_TR(0x6cd3bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3be:{NFSU2_TR(0x6cd3be);
__builtin_memmove((R+4),(R+24),4);
}
B6cd3c0:{NFSU2_TR(0x6cd3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd3c5ull));
TAIL_STATIC(0x699f6fu,699);
}
B6cd3c5:L6cd3c5:{c.instructions+=3;NFSU2_TR(0x6cd3c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd3cb:{NFSU2_TR(0x6cd3cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3cc:{NFSU2_TR(0x6cd3cc);
u8 U[4];
w4(U+0,u32(0x7bf588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3d1:L6cd3d1:{c.instructions+=4;NFSU2_TR(0x6cd3d1);
u8 U[4];
w4(U+0,u32(0x1196ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3d6:{NFSU2_TR(0x6cd3d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd3d9:{NFSU2_TR(0x6cd3d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd3da:{NFSU2_TR(0x6cd3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd3dfull));
TAIL_STATIC(0x69e936u,69e);
}
B6cd3df:L6cd3df:{c.instructions+=3;NFSU2_TR(0x6cd3df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6cd3e2:{NFSU2_TR(0x6cd3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd3e9:{NFSU2_TR(0x6cd3e9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}
}
B6cd3eb:L6cd3eb:{c.instructions+=3;NFSU2_TR(0x6cd3eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd3ef:{NFSU2_TR(0x6cd3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd3f2:{NFSU2_TR(0x6cd3f2);
if(r1(R+518)){{goto L6cd462;}}
}
B6cd3f4:L6cd3f4:{c.instructions+=2;NFSU2_TR(0x6cd3f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd3f6:{NFSU2_TR(0x6cd3f6);
if(r1(R+518)){{goto L6cd439;}}
}
B6cd3f8:L6cd3f8:{c.instructions+=2;NFSU2_TR(0x6cd3f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd3fb:{NFSU2_TR(0x6cd3fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd439;}}
}
B6cd3fd:L6cd3fd:{c.instructions+=7;NFSU2_TR(0x6cd3fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd400:{NFSU2_TR(0x6cd400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd401:{NFSU2_TR(0x6cd401);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd403:{NFSU2_TR(0x6cd403);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd409:{NFSU2_TR(0x6cd409);
__builtin_memmove((R+4),(R+24),4);
}
B6cd40b:{NFSU2_TR(0x6cd40b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd40c:{NFSU2_TR(0x6cd40c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd411ull));
TAIL_STATIC(0x6c2a09u,6c2);
}
B6cd411:L6cd411:{c.instructions+=2;NFSU2_TR(0x6cd411);
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
B6cd413:{NFSU2_TR(0x6cd413);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd395u);}goto L6cd395;}}
}
B6cd415:L6cd415:{c.instructions+=2;NFSU2_TR(0x6cd415);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd419:{NFSU2_TR(0x6cd419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd41f:L6cd41f:{c.instructions+=2;NFSU2_TR(0x6cd41f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd423:{NFSU2_TR(0x6cd423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd429:L6cd429:{c.instructions+=3;NFSU2_TR(0x6cd429);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd42a:{NFSU2_TR(0x6cd42a);
__builtin_memmove((R+4),(R+24),4);
}
B6cd42c:{NFSU2_TR(0x6cd42c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd431ull));
TAIL_STATIC(0x699de1u,699);
}
B6cd431:L6cd431:{c.instructions+=3;NFSU2_TR(0x6cd431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd432:{NFSU2_TR(0x6cd432);
u8 U[4];
w4(U+0,u32(0x7bf564ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd437:{NFSU2_TR(0x6cd437);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd3d1u);}goto L6cd3d1;}
}
B6cd439:L6cd439:{c.instructions+=2;NFSU2_TR(0x6cd439);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd43b:{NFSU2_TR(0x6cd43b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd441:L6cd441:{c.instructions+=4;NFSU2_TR(0x6cd441);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd444:{NFSU2_TR(0x6cd444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd445:{NFSU2_TR(0x6cd445);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd447:{NFSU2_TR(0x6cd447);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd44d:L6cd44d:{c.instructions+=3;NFSU2_TR(0x6cd44d);
__builtin_memmove((R+4),(R+24),4);
}
B6cd44f:{NFSU2_TR(0x6cd44f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd450:{NFSU2_TR(0x6cd450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd455ull));
TAIL_STATIC(0x6c2a09u,6c2);
}
B6cd455:L6cd455:{c.instructions+=2;NFSU2_TR(0x6cd455);
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
B6cd457:{NFSU2_TR(0x6cd457);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd45d:L6cd45d:{c.instructions+=1;NFSU2_TR(0x6cd45d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd395u);}goto L6cd395;}
}
B6cd462:L6cd462:{c.instructions+=2;NFSU2_TR(0x6cd462);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd464:{NFSU2_TR(0x6cd464);
if(r1(R+518)){{goto L6cd4b8;}}
}
B6cd466:L6cd466:{c.instructions+=2;NFSU2_TR(0x6cd466);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd469:{NFSU2_TR(0x6cd469);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd4b8;}}
}
B6cd46b:L6cd46b:{c.instructions+=7;NFSU2_TR(0x6cd46b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd46e:{NFSU2_TR(0x6cd46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd46f:{NFSU2_TR(0x6cd46f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd471:{NFSU2_TR(0x6cd471);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd477:{NFSU2_TR(0x6cd477);
__builtin_memmove((R+4),(R+24),4);
}
B6cd479:{NFSU2_TR(0x6cd479);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd47a:{NFSU2_TR(0x6cd47a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd47full));
TAIL_STATIC(0x6c2a09u,6c2);
}
B6cd47f:L6cd47f:{c.instructions+=2;NFSU2_TR(0x6cd47f);
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
B6cd481:{NFSU2_TR(0x6cd481);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd395u);}goto L6cd395;}}
}
B6cd487:L6cd487:{c.instructions+=2;NFSU2_TR(0x6cd487);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cd48b:{NFSU2_TR(0x6cd48b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd491:L6cd491:{c.instructions+=4;NFSU2_TR(0x6cd491);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd494:{NFSU2_TR(0x6cd494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd496:{NFSU2_TR(0x6cd496);
__builtin_memmove((R+4),(R+24),4);
}
B6cd498:{NFSU2_TR(0x6cd498);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd49bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd49b:L6cd49b:{c.instructions+=2;NFSU2_TR(0x6cd49b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd49e:{NFSU2_TR(0x6cd49e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd4a4:L6cd4a4:{c.instructions+=6;NFSU2_TR(0x6cd4a4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w2(U+0,u16(u32(r2(U+0))|u32(u16(0x114ull))));
s2(u32(r4(R+28)),r2(U+0));
}
B6cd4a9:{NFSU2_TR(0x6cd4a9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cd4ab:{NFSU2_TR(0x6cd4ab);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cd4ae:{NFSU2_TR(0x6cd4ae);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6cd4b0:{NFSU2_TR(0x6cd4b0);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cd4b3:{NFSU2_TR(0x6cd4b3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}
}
B6cd4b8:L6cd4b8:{c.instructions+=2;NFSU2_TR(0x6cd4b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd4ba:{NFSU2_TR(0x6cd4ba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd389u);}goto L6cd389;}}
}
B6cd4c0:L6cd4c0:{c.instructions+=5;NFSU2_TR(0x6cd4c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cd4c3:{NFSU2_TR(0x6cd4c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd4c4:{NFSU2_TR(0x6cd4c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd4c6:{NFSU2_TR(0x6cd4c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd4cc:{NFSU2_TR(0x6cd4cc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd44du);}goto L6cd44d;}
}
B6cd4d1:L6cd4d1:{c.instructions+=7;NFSU2_TR(0x6cd4d1);
__builtin_memmove((R+28),(R+28),4);
}
B6cd4d3:{NFSU2_TR(0x6cd4d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd4d4:{NFSU2_TR(0x6cd4d4);
__builtin_memmove((R+20),(R+16),4);
}
B6cd4d6:{NFSU2_TR(0x6cd4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B6cd4d9:{NFSU2_TR(0x6cd4d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd4da:{NFSU2_TR(0x6cd4da);
__builtin_memmove((R+24),(R+4),4);
}
B6cd4dc:{NFSU2_TR(0x6cd4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd4e1ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6cd4e1:L6cd4e1:{c.instructions+=2;NFSU2_TR(0x6cd4e1);
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
B6cd4e3:{NFSU2_TR(0x6cd4e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd93f;}}
}
B6cd4e9:L6cd4e9:{c.instructions+=5;NFSU2_TR(0x6cd4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd4ec:{NFSU2_TR(0x6cd4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd4f0:{NFSU2_TR(0x6cd4f0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd4f2:{NFSU2_TR(0x6cd4f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd4f3:{NFSU2_TR(0x6cd4f3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd519;}}
}
B6cd4f5:L6cd4f5:{c.instructions+=3;NFSU2_TR(0x6cd4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd4fb:{NFSU2_TR(0x6cd4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd4fe:{NFSU2_TR(0x6cd4fe);
__builtin_memmove((R+28),(R+0),4);
}
B6cd500:L6cd500:{c.instructions+=3;NFSU2_TR(0x6cd500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd502:{NFSU2_TR(0x6cd502);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd505:{NFSU2_TR(0x6cd505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd513;}}
}
B6cd507:L6cd507:{c.instructions+=3;NFSU2_TR(0x6cd507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd50a:{NFSU2_TR(0x6cd50a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cd50d:{NFSU2_TR(0x6cd50d);
if(r1(R+512)){{goto L6cd513;}}
}
B6cd50f:L6cd50f:{c.instructions+=2;NFSU2_TR(0x6cd50f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cd510:{NFSU2_TR(0x6cd510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd513:L6cd513:{c.instructions+=3;NFSU2_TR(0x6cd513);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cd516:{NFSU2_TR(0x6cd516);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6cd517:{NFSU2_TR(0x6cd517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd500u);}goto L6cd500;}}
}
B6cd519:L6cd519:{c.instructions+=7;NFSU2_TR(0x6cd519);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd51c:{NFSU2_TR(0x6cd51c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cd51e:{NFSU2_TR(0x6cd51e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd520:{NFSU2_TR(0x6cd520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd521:{NFSU2_TR(0x6cd521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd524:{NFSU2_TR(0x6cd524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd527:{NFSU2_TR(0x6cd527);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd93b;}}
}
B6cd52d:L6cd52d:{c.instructions+=6;NFSU2_TR(0x6cd52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd530:{NFSU2_TR(0x6cd530);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cd533:{NFSU2_TR(0x6cd533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd535:{NFSU2_TR(0x6cd535);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd53a:{NFSU2_TR(0x6cd53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd53d:{NFSU2_TR(0x6cd53d);
if(r1(R+518)){{goto L6cd92b;}}
}
B6cd543:L6cd543:{c.instructions+=15;NFSU2_TR(0x6cd543);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cd548:{NFSU2_TR(0x6cd548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd54b:{NFSU2_TR(0x6cd54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd54e:{NFSU2_TR(0x6cd54e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd550:{NFSU2_TR(0x6cd550);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6cd550);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6cd550);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6cd553:{NFSU2_TR(0x6cd553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd556:{NFSU2_TR(0x6cd556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd559:{NFSU2_TR(0x6cd559);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd55c:{NFSU2_TR(0x6cd55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd55e:{NFSU2_TR(0x6cd55e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd561:{NFSU2_TR(0x6cd561);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd564:{NFSU2_TR(0x6cd564);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd567:{NFSU2_TR(0x6cd567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd56a:{NFSU2_TR(0x6cd56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd56d:{NFSU2_TR(0x6cd56d);
{goto L6cd908;}
}
B6cd572:L6cd572:{c.instructions+=4;NFSU2_TR(0x6cd572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd574:{NFSU2_TR(0x6cd574);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6cd579:{NFSU2_TR(0x6cd579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd57e:{NFSU2_TR(0x6cd57e);
if(r1(R+518)){{goto L6cd91c;}}
}
B6cd584:L6cd584:{c.instructions+=13;NFSU2_TR(0x6cd584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd587:{NFSU2_TR(0x6cd587);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd58a:{NFSU2_TR(0x6cd58a);
__builtin_memmove((R+0),(R+4),4);
}
B6cd58c:{NFSU2_TR(0x6cd58c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6cd590:{NFSU2_TR(0x6cd590);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd593:{NFSU2_TR(0x6cd593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd596:{NFSU2_TR(0x6cd596);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd599:{NFSU2_TR(0x6cd599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd59c:{NFSU2_TR(0x6cd59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd59f:{NFSU2_TR(0x6cd59f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd5a2:{NFSU2_TR(0x6cd5a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd5a6:{NFSU2_TR(0x6cd5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd5a9:{NFSU2_TR(0x6cd5a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd942;}}
}
B6cd5af:L6cd5af:{c.instructions+=5;NFSU2_TR(0x6cd5af);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cd5b1:{NFSU2_TR(0x6cd5b1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cd5b4:{NFSU2_TR(0x6cd5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd5b7:{NFSU2_TR(0x6cd5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd5ba:{NFSU2_TR(0x6cd5ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd64e;}}
}
B6cd5c0:L6cd5c0:{c.instructions+=1;NFSU2_TR(0x6cd5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd5c3:L6cd5c3:{c.instructions+=13;NFSU2_TR(0x6cd5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd5c6:{NFSU2_TR(0x6cd5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd5c9:{NFSU2_TR(0x6cd5c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd5cc:{NFSU2_TR(0x6cd5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd5cf:{NFSU2_TR(0x6cd5cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd5d2:{NFSU2_TR(0x6cd5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd5d5:{NFSU2_TR(0x6cd5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd5d8:{NFSU2_TR(0x6cd5d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd5db:{NFSU2_TR(0x6cd5db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cd5de:{NFSU2_TR(0x6cd5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd5e0:{NFSU2_TR(0x6cd5e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd5e1:{NFSU2_TR(0x6cd5e1);
__builtin_memmove((R+4),(R+24),4);
}
B6cd5e3:{NFSU2_TR(0x6cd5e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd5e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd5e9:L6cd5e9:{c.instructions+=2;NFSU2_TR(0x6cd5e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd5ec:{NFSU2_TR(0x6cd5ec);
if(r1(R+518)){{goto L6cd631;}}
}
B6cd5ee:L6cd5ee:{c.instructions+=3;NFSU2_TR(0x6cd5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd5f1:{NFSU2_TR(0x6cd5f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cd5f3:{NFSU2_TR(0x6cd5f3);
if(r1(R+518)){{goto L6cd631;}}
}
B6cd5f5:L6cd5f5:{c.instructions+=5;NFSU2_TR(0x6cd5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd5f8:{NFSU2_TR(0x6cd5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd5fb:{NFSU2_TR(0x6cd5fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B6cd5fd:{NFSU2_TR(0x6cd5fd);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(u16(0x12bfull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6cd602:{NFSU2_TR(0x6cd602);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd631;}}
}
B6cd604:L6cd604:{c.instructions+=3;NFSU2_TR(0x6cd604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd607:{NFSU2_TR(0x6cd607);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd609:{NFSU2_TR(0x6cd609);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd631;}}
}
B6cd60b:L6cd60b:{c.instructions+=2;NFSU2_TR(0x6cd60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd60e:{NFSU2_TR(0x6cd60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd611:L6cd611:{c.instructions+=6;NFSU2_TR(0x6cd611);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd614:{NFSU2_TR(0x6cd614);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd617:{NFSU2_TR(0x6cd617);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd61a:{NFSU2_TR(0x6cd61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd61d:{NFSU2_TR(0x6cd61d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6cd620:{NFSU2_TR(0x6cd620);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cd62b;}}
}
B6cd622:L6cd622:{c.instructions+=3;NFSU2_TR(0x6cd622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd625:{NFSU2_TR(0x6cd625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd628:{NFSU2_TR(0x6cd628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd62b:L6cd62b:{c.instructions+=3;NFSU2_TR(0x6cd62b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cd62e:{NFSU2_TR(0x6cd62e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6cd62f:{NFSU2_TR(0x6cd62f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd611u);}goto L6cd611;}}
}
B6cd631:L6cd631:{c.instructions+=7;NFSU2_TR(0x6cd631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd634:{NFSU2_TR(0x6cd634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd637:{NFSU2_TR(0x6cd637);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cd63a:{NFSU2_TR(0x6cd63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd63d:{NFSU2_TR(0x6cd63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd640:{NFSU2_TR(0x6cd640);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cd643:{NFSU2_TR(0x6cd643);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd5c3u);}goto L6cd5c3;}}
}
B6cd649:L6cd649:{c.instructions+=2;NFSU2_TR(0x6cd649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd64c:{NFSU2_TR(0x6cd64c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cd64e:L6cd64e:{c.instructions+=15;NFSU2_TR(0x6cd64e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6cd652:{NFSU2_TR(0x6cd652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd655:{NFSU2_TR(0x6cd655);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd658:{NFSU2_TR(0x6cd658);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd65b:{NFSU2_TR(0x6cd65b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd65e:{NFSU2_TR(0x6cd65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd661:{NFSU2_TR(0x6cd661);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd664:{NFSU2_TR(0x6cd664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd667:{NFSU2_TR(0x6cd667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd66a:{NFSU2_TR(0x6cd66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd66d:{NFSU2_TR(0x6cd66d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd670:{NFSU2_TR(0x6cd670);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd674:{NFSU2_TR(0x6cd674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd677:{NFSU2_TR(0x6cd677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd67a:{NFSU2_TR(0x6cd67a);
if(r1(R+518)){{goto L6cd94b;}}
}
B6cd680:L6cd680:{c.instructions+=10;NFSU2_TR(0x6cd680);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6cd683:{NFSU2_TR(0x6cd683);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd686:{NFSU2_TR(0x6cd686);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd687:{NFSU2_TR(0x6cd687);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd688:{NFSU2_TR(0x6cd688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd68b:{NFSU2_TR(0x6cd68b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd68c:{NFSU2_TR(0x6cd68c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cd68e:{NFSU2_TR(0x6cd68e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd691:{NFSU2_TR(0x6cd691);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd692:{NFSU2_TR(0x6cd692);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd6dc;}}
}
B6cd694:L6cd694:{c.instructions+=2;NFSU2_TR(0x6cd694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd697:{NFSU2_TR(0x6cd697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd69a:L6cd69a:{c.instructions+=4;NFSU2_TR(0x6cd69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd69d:{NFSU2_TR(0x6cd69d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd69f:{NFSU2_TR(0x6cd69f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd6a2:{NFSU2_TR(0x6cd6a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd6d2;}}
}
B6cd6a4:L6cd6a4:{c.instructions+=3;NFSU2_TR(0x6cd6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd6a7:{NFSU2_TR(0x6cd6a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd6aa:{NFSU2_TR(0x6cd6aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd6d2;}}
}
B6cd6ac:L6cd6ac:{c.instructions+=3;NFSU2_TR(0x6cd6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd6af:{NFSU2_TR(0x6cd6af);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd6b2:{NFSU2_TR(0x6cd6b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd6d2;}}
}
B6cd6b4:L6cd6b4:{c.instructions+=2;NFSU2_TR(0x6cd6b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd6b8:{NFSU2_TR(0x6cd6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd6d2;}}
}
B6cd6ba:L6cd6ba:{c.instructions+=3;NFSU2_TR(0x6cd6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd6bd:{NFSU2_TR(0x6cd6bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6cd6c0:{NFSU2_TR(0x6cd6c0);
if(r1(R+512)){{goto L6cd6d2;}}
}
B6cd6c2:L6cd6c2:{c.instructions+=4;NFSU2_TR(0x6cd6c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd6c5:{NFSU2_TR(0x6cd6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd6c8:{NFSU2_TR(0x6cd6c8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cd6cc:{NFSU2_TR(0x6cd6cc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cd6d2;}}
}
B6cd6ce:L6cd6ce:{c.instructions+=2;NFSU2_TR(0x6cd6ce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cd6cf:{NFSU2_TR(0x6cd6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd6d2:L6cd6d2:{c.instructions+=4;NFSU2_TR(0x6cd6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd6d6:{NFSU2_TR(0x6cd6d6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cd6d7:{NFSU2_TR(0x6cd6d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6cd6da:{NFSU2_TR(0x6cd6da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd69au);}goto L6cd69a;}}
}
B6cd6dc:L6cd6dc:{c.instructions+=3;NFSU2_TR(0x6cd6dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cd6de:{NFSU2_TR(0x6cd6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd6e1:{NFSU2_TR(0x6cd6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd6e4:L6cd6e4:{c.instructions+=6;NFSU2_TR(0x6cd6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd6e7:{NFSU2_TR(0x6cd6e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6cd6ea:{NFSU2_TR(0x6cd6ea);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cd6ee:{NFSU2_TR(0x6cd6ee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd6f1:{NFSU2_TR(0x6cd6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd6f4:{NFSU2_TR(0x6cd6f4);
if(r1(R+518)){{goto L6cd756;}}
}
B6cd6f6:L6cd6f6:{c.instructions+=9;NFSU2_TR(0x6cd6f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd6f7:{NFSU2_TR(0x6cd6f7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cd6f9:{NFSU2_TR(0x6cd6f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd6fa:{NFSU2_TR(0x6cd6fa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cd6fd:{NFSU2_TR(0x6cd6fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd700:{NFSU2_TR(0x6cd700);
__builtin_memmove((R+4),(R+24),4);
}
B6cd702:{NFSU2_TR(0x6cd702);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd705:{NFSU2_TR(0x6cd705);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd70b:{NFSU2_TR(0x6cd70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd710ull));
TAIL_STATIC(0x699c39u,699);
}
B6cd710:L6cd710:{c.instructions+=3;NFSU2_TR(0x6cd710);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd713:{NFSU2_TR(0x6cd713);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cd717:{NFSU2_TR(0x6cd717);
if(r1(R+518)){{goto L6cd964;}}
}
B6cd71d:L6cd71d:{c.instructions+=6;NFSU2_TR(0x6cd71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd720:{NFSU2_TR(0x6cd720);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cd723:{NFSU2_TR(0x6cd723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd726:{NFSU2_TR(0x6cd726);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6cd729:{NFSU2_TR(0x6cd729);
__builtin_memmove((R+4),(R+28),4);
}
B6cd72b:{NFSU2_TR(0x6cd72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd730ull));
TAIL_STATIC(0x699821u,699);
}
B6cd730:L6cd730:{c.instructions+=2;NFSU2_TR(0x6cd730);
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
B6cd732:{NFSU2_TR(0x6cd732);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd93d;}}
}
B6cd738:L6cd738:{c.instructions+=9;NFSU2_TR(0x6cd738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd73b:{NFSU2_TR(0x6cd73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd73f:{NFSU2_TR(0x6cd73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd743:{NFSU2_TR(0x6cd743);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd747:{NFSU2_TR(0x6cd747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd74a:{NFSU2_TR(0x6cd74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd74d:{NFSU2_TR(0x6cd74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd750:{NFSU2_TR(0x6cd750);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd753:{NFSU2_TR(0x6cd753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd756:L6cd756:{c.instructions+=3;NFSU2_TR(0x6cd756);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd759:{NFSU2_TR(0x6cd759);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6cd75d:{NFSU2_TR(0x6cd75d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd6e4u);}goto L6cd6e4;}}
}
B6cd75f:L6cd75f:{c.instructions+=7;NFSU2_TR(0x6cd75f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd760:{NFSU2_TR(0x6cd760);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd761:{NFSU2_TR(0x6cd761);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cd766:{NFSU2_TR(0x6cd766);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6cd76b:{NFSU2_TR(0x6cd76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd76c:{NFSU2_TR(0x6cd76c);
__builtin_memmove((R+4),(R+24),4);
}
B6cd76e:{NFSU2_TR(0x6cd76e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd773ull));
TAIL_STATIC(0x699c99u,699);
}
B6cd773:L6cd773:{c.instructions+=2;NFSU2_TR(0x6cd773);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd776:{NFSU2_TR(0x6cd776);
if(r1(R+518)){{goto L6cd964;}}
}
B6cd77c:L6cd77c:{c.instructions+=5;NFSU2_TR(0x6cd77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd77f:{NFSU2_TR(0x6cd77f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cd782:{NFSU2_TR(0x6cd782);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd783:{NFSU2_TR(0x6cd783);
__builtin_memmove((R+4),(R+28),4);
}
B6cd785:{NFSU2_TR(0x6cd785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd78aull));
TAIL_STATIC(0x698eb3u,698);
}
B6cd78a:L6cd78a:{c.instructions+=2;NFSU2_TR(0x6cd78a);
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
B6cd78c:{NFSU2_TR(0x6cd78c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd93d;}}
}
B6cd792:L6cd792:{c.instructions+=2;NFSU2_TR(0x6cd792);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cd794:{NFSU2_TR(0x6cd794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd797:L6cd797:{c.instructions+=4;NFSU2_TR(0x6cd797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd79a:{NFSU2_TR(0x6cd79a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cd79e:{NFSU2_TR(0x6cd79e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd7a1:{NFSU2_TR(0x6cd7a1);
if(r1(R+518)){{goto L6cd7b9;}}
}
B6cd7a3:L6cd7a3:{c.instructions+=7;NFSU2_TR(0x6cd7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd7a6:{NFSU2_TR(0x6cd7a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cd7a9:{NFSU2_TR(0x6cd7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd7ac:{NFSU2_TR(0x6cd7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd7af:{NFSU2_TR(0x6cd7af);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6cd7b3:{NFSU2_TR(0x6cd7b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cd7b6:{NFSU2_TR(0x6cd7b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cd7b9:L6cd7b9:{c.instructions+=3;NFSU2_TR(0x6cd7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd7bd:{NFSU2_TR(0x6cd7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B6cd7c1:{NFSU2_TR(0x6cd7c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd797u);}goto L6cd797;}}
}
B6cd7c3:L6cd7c3:{c.instructions+=3;NFSU2_TR(0x6cd7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd7c6:{NFSU2_TR(0x6cd7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd7c9:{NFSU2_TR(0x6cd7c9);
{goto L6cd8fc;}
}
B6cd7ce:L6cd7ce:{c.instructions+=4;NFSU2_TR(0x6cd7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd7d1:{NFSU2_TR(0x6cd7d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cd7d4:{NFSU2_TR(0x6cd7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6cd7da:{NFSU2_TR(0x6cd7da);
if(r1(R+518)){{goto L6cd8f8;}}
}
B6cd7e0:L6cd7e0:{c.instructions+=7;NFSU2_TR(0x6cd7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd7e3:{NFSU2_TR(0x6cd7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd7e5:{NFSU2_TR(0x6cd7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd7e8:{NFSU2_TR(0x6cd7e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cd7eb:{NFSU2_TR(0x6cd7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd7ee:{NFSU2_TR(0x6cd7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd7f1:{NFSU2_TR(0x6cd7f1);
{goto L6cd809;}
}
B6cd7f3:L6cd7f3:{c.instructions+=2;NFSU2_TR(0x6cd7f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd7f6:{NFSU2_TR(0x6cd7f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd7fd;}}
}
B6cd7f8:L6cd7f8:{c.instructions+=2;NFSU2_TR(0x6cd7f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd7fb:{NFSU2_TR(0x6cd7fb);
if(r1(R+518)){{goto L6cd80e;}}
}
B6cd7fd:L6cd7fd:{c.instructions+=4;NFSU2_TR(0x6cd7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd800:{NFSU2_TR(0x6cd800);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd803:{NFSU2_TR(0x6cd803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd806:{NFSU2_TR(0x6cd806);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd809:L6cd809:{c.instructions+=2;NFSU2_TR(0x6cd809);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cd80c:{NFSU2_TR(0x6cd80c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd7f3u);}goto L6cd7f3;}}
}
B6cd80e:L6cd80e:{c.instructions+=2;NFSU2_TR(0x6cd80e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd811:{NFSU2_TR(0x6cd811);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd8f8;}}
}
B6cd817:L6cd817:{c.instructions+=2;NFSU2_TR(0x6cd817);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cd81a:{NFSU2_TR(0x6cd81a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd8f8;}}
}
B6cd820:L6cd820:{c.instructions+=5;NFSU2_TR(0x6cd820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd822:{NFSU2_TR(0x6cd822);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd824:{NFSU2_TR(0x6cd824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd825:{NFSU2_TR(0x6cd825);
__builtin_memmove((R+4),(R+24),4);
}
B6cd827:{NFSU2_TR(0x6cd827);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd82aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd82a:L6cd82a:{c.instructions+=2;NFSU2_TR(0x6cd82a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd82c:{NFSU2_TR(0x6cd82c);
if(r1(R+518)){{goto L6cd8f8;}}
}
B6cd832:L6cd832:{c.instructions+=3;NFSU2_TR(0x6cd832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd836:{NFSU2_TR(0x6cd836);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd83a:{NFSU2_TR(0x6cd83a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cd8f8;}}
}
B6cd840:L6cd840:{c.instructions+=12;NFSU2_TR(0x6cd840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cd843:{NFSU2_TR(0x6cd843);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd846:{NFSU2_TR(0x6cd846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd849:{NFSU2_TR(0x6cd849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd84c:{NFSU2_TR(0x6cd84c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6cd84f:{NFSU2_TR(0x6cd84f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6cd851:{NFSU2_TR(0x6cd851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd854:{NFSU2_TR(0x6cd854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd856:{NFSU2_TR(0x6cd856);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd859:{NFSU2_TR(0x6cd859);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd85c:{NFSU2_TR(0x6cd85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd85f:{NFSU2_TR(0x6cd85f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd8e6;}}
}
B6cd865:L6cd865:{c.instructions+=3;NFSU2_TR(0x6cd865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd868:{NFSU2_TR(0x6cd868);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd86b:{NFSU2_TR(0x6cd86b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd8e6;}}
}
B6cd86d:L6cd86d:{c.instructions+=3;NFSU2_TR(0x6cd86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cd870:{NFSU2_TR(0x6cd870);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd873:{NFSU2_TR(0x6cd873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd8e6;}}
}
B6cd875:L6cd875:{c.instructions+=4;NFSU2_TR(0x6cd875);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cd879:{NFSU2_TR(0x6cd879);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd87c:{NFSU2_TR(0x6cd87c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6cd880:{NFSU2_TR(0x6cd880);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cd889;}}
}
B6cd882:L6cd882:{c.instructions+=3;NFSU2_TR(0x6cd882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd885:{NFSU2_TR(0x6cd885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cd887:{NFSU2_TR(0x6cd887);
{goto L6cd8e6;}
}
B6cd889:L6cd889:{c.instructions+=11;NFSU2_TR(0x6cd889);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cd88c:{NFSU2_TR(0x6cd88c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cd88e:{NFSU2_TR(0x6cd88e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd88f:{NFSU2_TR(0x6cd88f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd890:{NFSU2_TR(0x6cd890);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cd893:{NFSU2_TR(0x6cd893);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd896:{NFSU2_TR(0x6cd896);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd899:{NFSU2_TR(0x6cd899);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd89c:{NFSU2_TR(0x6cd89c);
__builtin_memmove((R+4),(R+24),4);
}
B6cd89e:{NFSU2_TR(0x6cd89e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd8a4:{NFSU2_TR(0x6cd8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd8a9ull));
TAIL_STATIC(0x699c39u,699);
}
B6cd8a9:L6cd8a9:{c.instructions+=5;NFSU2_TR(0x6cd8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd8ac:{NFSU2_TR(0x6cd8ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cd8af:{NFSU2_TR(0x6cd8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd8b2:{NFSU2_TR(0x6cd8b2);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6cd8b6:{NFSU2_TR(0x6cd8b6);
if(r1(R+518)){{goto L6cd964;}}
}
B6cd8bc:L6cd8bc:{c.instructions+=6;NFSU2_TR(0x6cd8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd8bf:{NFSU2_TR(0x6cd8bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cd8c2:{NFSU2_TR(0x6cd8c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cd8c5:{NFSU2_TR(0x6cd8c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd8c8:{NFSU2_TR(0x6cd8c8);
__builtin_memmove((R+4),(R+12),4);
}
B6cd8ca:{NFSU2_TR(0x6cd8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd8cfull));
TAIL_STATIC(0x699821u,699);
}
B6cd8cf:L6cd8cf:{c.instructions+=2;NFSU2_TR(0x6cd8cf);
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
B6cd8d1:{NFSU2_TR(0x6cd8d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd93d;}}
}
B6cd8d3:L6cd8d3:{c.instructions+=6;NFSU2_TR(0x6cd8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd8d6:{NFSU2_TR(0x6cd8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd8d9:{NFSU2_TR(0x6cd8d9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cd8dd:{NFSU2_TR(0x6cd8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd8e0:{NFSU2_TR(0x6cd8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd8e3:{NFSU2_TR(0x6cd8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd8e6:L6cd8e6:{c.instructions+=4;NFSU2_TR(0x6cd8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd8e9:{NFSU2_TR(0x6cd8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd8ec:{NFSU2_TR(0x6cd8ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cd8ef:{NFSU2_TR(0x6cd8ef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd840u);}goto L6cd840;}}
}
B6cd8f5:L6cd8f5:{c.instructions+=1;NFSU2_TR(0x6cd8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cd8f8:L6cd8f8:{c.instructions+=2;NFSU2_TR(0x6cd8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd8fb:{NFSU2_TR(0x6cd8fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cd8fc:L6cd8fc:{c.instructions+=3;NFSU2_TR(0x6cd8fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cd8ff:{NFSU2_TR(0x6cd8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd902:{NFSU2_TR(0x6cd902);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd7ceu);}goto L6cd7ce;}}
}
B6cd908:L6cd908:{c.instructions+=6;NFSU2_TR(0x6cd908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd90a:{NFSU2_TR(0x6cd90a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd90d:{NFSU2_TR(0x6cd90d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd90e:{NFSU2_TR(0x6cd90e);
__builtin_memmove((R+4),(R+24),4);
}
B6cd910:{NFSU2_TR(0x6cd910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd911:{NFSU2_TR(0x6cd911);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd914ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd914:L6cd914:{c.instructions+=2;NFSU2_TR(0x6cd914);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd916:{NFSU2_TR(0x6cd916);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd572u);}goto L6cd572;}}
}
B6cd91c:L6cd91c:{c.instructions+=3;NFSU2_TR(0x6cd91c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd91d:{NFSU2_TR(0x6cd91d);
__builtin_memmove((R+4),(R+24),4);
}
B6cd91f:{NFSU2_TR(0x6cd91f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd924ull));
TAIL_STATIC(0x699d92u,699);
}
B6cd924:L6cd924:{c.instructions+=2;NFSU2_TR(0x6cd924);
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
B6cd926:{NFSU2_TR(0x6cd926);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cd93d;}}
}
B6cd928:L6cd928:{c.instructions+=1;NFSU2_TR(0x6cd928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6cd92b:L6cd92b:{c.instructions+=5;NFSU2_TR(0x6cd92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd92e:{NFSU2_TR(0x6cd92e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cd92f:{NFSU2_TR(0x6cd92f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cd932:{NFSU2_TR(0x6cd932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd935:{NFSU2_TR(0x6cd935);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd52du);}goto L6cd52d;}}
}
B6cd93b:L6cd93b:{c.instructions+=1;NFSU2_TR(0x6cd93b);
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
B6cd93d:L6cd93d:{c.instructions+=2;NFSU2_TR(0x6cd93d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cd93e:{NFSU2_TR(0x6cd93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd93f:L6cd93f:{c.instructions+=3;NFSU2_TR(0x6cd93f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cd940:{NFSU2_TR(0x6cd940);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cd941:{NFSU2_TR(0x6cd941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cd942:L6cd942:{c.instructions+=3;NFSU2_TR(0x6cd942);
u8 U[4];
w4(U+0,u32(0x7bf610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd947:{NFSU2_TR(0x6cd947);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd949:{NFSU2_TR(0x6cd949);
{goto L6cd951;}
}
B6cd94b:L6cd94b:{c.instructions+=2;NFSU2_TR(0x6cd94b);
u8 U[4];
w4(U+0,u32(0x7bf5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd950:{NFSU2_TR(0x6cd950);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd951:L6cd951:{c.instructions+=3;NFSU2_TR(0x6cd951);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cd954:{NFSU2_TR(0x6cd954);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd955:{NFSU2_TR(0x6cd955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd95aull));
TAIL_STATIC(0x69e936u,69e);
}
B6cd95a:L6cd95a:{c.instructions+=3;NFSU2_TR(0x6cd95a);
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
B6cd95d:{NFSU2_TR(0x6cd95d);
w4(R+0,u32(0x80004005ull));
}
B6cd962:{NFSU2_TR(0x6cd962);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd93du);}goto L6cd93d;}
}
B6cd964:L6cd964:{c.instructions+=2;NFSU2_TR(0x6cd964);
w4(R+0,u32(0x8007000eull));
}
B6cd969:{NFSU2_TR(0x6cd969);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd93du);}goto L6cd93d;}
}
B6cd96b:L6cd96b:{c.instructions+=7;NFSU2_TR(0x6cd96b);
__builtin_memmove((R+28),(R+28),4);
}
B6cd96d:{NFSU2_TR(0x6cd96d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd96e:{NFSU2_TR(0x6cd96e);
__builtin_memmove((R+20),(R+16),4);
}
B6cd970:{NFSU2_TR(0x6cd970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B6cd973:{NFSU2_TR(0x6cd973);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd974:{NFSU2_TR(0x6cd974);
__builtin_memmove((R+12),(R+4),4);
}
B6cd976:{NFSU2_TR(0x6cd976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd97bull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6cd97b:L6cd97b:{c.instructions+=2;NFSU2_TR(0x6cd97b);
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
B6cd97d:{NFSU2_TR(0x6cd97d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cdbfb;}}
}
B6cd983:L6cd983:{c.instructions+=7;NFSU2_TR(0x6cd983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd987:{NFSU2_TR(0x6cd987);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd988:{NFSU2_TR(0x6cd988);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd989:{NFSU2_TR(0x6cd989);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cd98c:{NFSU2_TR(0x6cd98c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd98e:{NFSU2_TR(0x6cd98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd991:{NFSU2_TR(0x6cd991);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cdbd9;}}
}
B6cd997:L6cd997:{c.instructions+=7;NFSU2_TR(0x6cd997);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd99a:{NFSU2_TR(0x6cd99a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cd99d:{NFSU2_TR(0x6cd99d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6cd9a0:{NFSU2_TR(0x6cd9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd9a2:{NFSU2_TR(0x6cd9a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd9a7:{NFSU2_TR(0x6cd9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd9aa:{NFSU2_TR(0x6cd9aa);
if(r1(R+518)){{goto L6cdbcd;}}
}
B6cd9b0:L6cd9b0:{c.instructions+=9;NFSU2_TR(0x6cd9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cd9b4:{NFSU2_TR(0x6cd9b4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cd9b9:{NFSU2_TR(0x6cd9b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cd9bc:{NFSU2_TR(0x6cd9bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd9bd:{NFSU2_TR(0x6cd9bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cd9c0:{NFSU2_TR(0x6cd9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd9c2:{NFSU2_TR(0x6cd9c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cd9c3:{NFSU2_TR(0x6cd9c3);
__builtin_memmove((R+4),(R+12),4);
}
B6cd9c5:{NFSU2_TR(0x6cd9c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cd9c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cd9c8:L6cd9c8:{c.instructions+=1;NFSU2_TR(0x6cd9c8);
{goto L6cdba5;}
}
B6cd9cd:L6cd9cd:{c.instructions+=4;NFSU2_TR(0x6cd9cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cd9cf:{NFSU2_TR(0x6cd9cf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6cd9d4:{NFSU2_TR(0x6cd9d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cd9d9:{NFSU2_TR(0x6cd9d9);
if(r1(R+518)){{goto L6cdbad;}}
}
B6cd9df:L6cd9df:{c.instructions+=3;NFSU2_TR(0x6cd9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cd9e2:{NFSU2_TR(0x6cd9e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cd9e8:{NFSU2_TR(0x6cd9e8);
if(r1(R+512)){{goto L6cd9fe;}}
}
B6cd9ea:L6cd9ea:{c.instructions+=12;NFSU2_TR(0x6cd9ea);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6cd9ed:{NFSU2_TR(0x6cd9ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd9f0:{NFSU2_TR(0x6cd9f0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9f1:{NFSU2_TR(0x6cd9f1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9f2:{NFSU2_TR(0x6cd9f2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9f3:{NFSU2_TR(0x6cd9f3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9f4:{NFSU2_TR(0x6cd9f4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6cd9f7:{NFSU2_TR(0x6cd9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cd9fa:{NFSU2_TR(0x6cd9fa);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9fb:{NFSU2_TR(0x6cd9fb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9fc:{NFSU2_TR(0x6cd9fc);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9fd:{NFSU2_TR(0x6cd9fd);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cd9fe:L6cd9fe:{c.instructions+=17;NFSU2_TR(0x6cd9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cda01:{NFSU2_TR(0x6cda01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cda04:{NFSU2_TR(0x6cda04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cda07:{NFSU2_TR(0x6cda07);
__builtin_memmove((R+0),(R+4),4);
}
B6cda09:{NFSU2_TR(0x6cda09);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6cda0a:{NFSU2_TR(0x6cda0a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6cda0c:{NFSU2_TR(0x6cda0c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6cda0e:{NFSU2_TR(0x6cda0e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6cda11:{NFSU2_TR(0x6cda11);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
}
B6cda14:{NFSU2_TR(0x6cda14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6cda17:{NFSU2_TR(0x6cda17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cda1a:{NFSU2_TR(0x6cda1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cda1d:{NFSU2_TR(0x6cda1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6cda20:{NFSU2_TR(0x6cda20);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cda23:{NFSU2_TR(0x6cda23);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6cda27:{NFSU2_TR(0x6cda27);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cda29:{NFSU2_TR(0x6cda29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cda2c:L6cda2c:{c.instructions+=1;NFSU2_TR(0x6cda2c);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cda2e;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cda2cu);}goto L6cda2c;}}
}
B6cda2e:L6cda2e:{c.instructions+=2;NFSU2_TR(0x6cda2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cda31:{NFSU2_TR(0x6cda31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cda55;}}
}
B6cda33:L6cda33:{c.instructions+=3;NFSU2_TR(0x6cda33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cda36:{NFSU2_TR(0x6cda36);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cda3a:{NFSU2_TR(0x6cda3a);
if(r1(R+518)){{goto L6cdb78;}}
}
B6cda40:L6cda40:{c.instructions+=6;NFSU2_TR(0x6cda40);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cda43:{NFSU2_TR(0x6cda43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cda45:{NFSU2_TR(0x6cda45);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cda48:{NFSU2_TR(0x6cda48);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cda4b:{NFSU2_TR(0x6cda4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cda4f:{NFSU2_TR(0x6cda4f);
if(r1(R+518)){{goto L6cdb78;}}
}
B6cda55:L6cda55:{c.instructions+=9;NFSU2_TR(0x6cda55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cda58:{NFSU2_TR(0x6cda58);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cda5a:{NFSU2_TR(0x6cda5a);
__builtin_memmove((R+0),(R+24),4);
}
B6cda5c:{NFSU2_TR(0x6cda5c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cda61:{NFSU2_TR(0x6cda61);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cda63:{NFSU2_TR(0x6cda63);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6cda68:{NFSU2_TR(0x6cda68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cda69:{NFSU2_TR(0x6cda69);
__builtin_memmove((R+4),(R+12),4);
}
B6cda6b:{NFSU2_TR(0x6cda6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cda70ull));
TAIL_STATIC(0x699c99u,699);
}
B6cda70:L6cda70:{c.instructions+=2;NFSU2_TR(0x6cda70);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cda73:{NFSU2_TR(0x6cda73);
if(r1(R+518)){{goto L6cdbfe;}}
}
B6cda79:L6cda79:{c.instructions+=6;NFSU2_TR(0x6cda79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cda7c:{NFSU2_TR(0x6cda7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cda7f:{NFSU2_TR(0x6cda7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cda82:{NFSU2_TR(0x6cda82);
__builtin_memmove((R+4),(R+0),4);
}
B6cda84:{NFSU2_TR(0x6cda84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cda87:{NFSU2_TR(0x6cda87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cda8cull));
TAIL_STATIC(0x698eb3u,698);
}
B6cda8c:L6cda8c:{c.instructions+=2;NFSU2_TR(0x6cda8c);
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
B6cda8e:{NFSU2_TR(0x6cda8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cdbf9;}}
}
B6cda94:L6cda94:{c.instructions+=11;NFSU2_TR(0x6cda94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cda97:{NFSU2_TR(0x6cda97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cda9a:{NFSU2_TR(0x6cda9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cda9c:{NFSU2_TR(0x6cda9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cda9f:{NFSU2_TR(0x6cda9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdaa0:{NFSU2_TR(0x6cdaa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdaa1:{NFSU2_TR(0x6cdaa1);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6cdaa5:{NFSU2_TR(0x6cdaa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdaa6:{NFSU2_TR(0x6cdaa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cdaa9:{NFSU2_TR(0x6cdaa9);
__builtin_memmove((R+4),(R+12),4);
}
B6cdaab:{NFSU2_TR(0x6cdaab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cdab1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cdab1:L6cdab1:{c.instructions+=2;NFSU2_TR(0x6cdab1);
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
B6cdab3:{NFSU2_TR(0x6cdab3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cdbf9;}}
}
B6cdab9:L6cdab9:{c.instructions+=10;NFSU2_TR(0x6cdab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdabc:{NFSU2_TR(0x6cdabc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cdabe:{NFSU2_TR(0x6cdabe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdac1:{NFSU2_TR(0x6cdac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdac4:{NFSU2_TR(0x6cdac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdac7:{NFSU2_TR(0x6cdac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6cdaca:{NFSU2_TR(0x6cdaca);
__builtin_memmove((R+8),(R+0),4);
}
B6cdacc:{NFSU2_TR(0x6cdacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdacf:{NFSU2_TR(0x6cdacf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cdad1:{NFSU2_TR(0x6cdad1);
{goto L6cdb0f;}
}
B6cdad3:L6cdad3:{c.instructions+=6;NFSU2_TR(0x6cdad3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cdad7:{NFSU2_TR(0x6cdad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdada:{NFSU2_TR(0x6cdada);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdade:{NFSU2_TR(0x6cdade);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdae1:{NFSU2_TR(0x6cdae1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cdae4:{NFSU2_TR(0x6cdae4);
if(r1(R+518)){{goto L6cdb08;}}
}
B6cdae6:L6cdae6:{c.instructions+=12;NFSU2_TR(0x6cdae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdae9:{NFSU2_TR(0x6cdae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cdaeb:{NFSU2_TR(0x6cdaeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdaee:{NFSU2_TR(0x6cdaee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdaf1:{NFSU2_TR(0x6cdaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdaf4:{NFSU2_TR(0x6cdaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdaf7:{NFSU2_TR(0x6cdaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdafa:{NFSU2_TR(0x6cdafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cdafc:{NFSU2_TR(0x6cdafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdaff:{NFSU2_TR(0x6cdaff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdb02:{NFSU2_TR(0x6cdb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdb05:{NFSU2_TR(0x6cdb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdb08:L6cdb08:{c.instructions+=3;NFSU2_TR(0x6cdb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdb0b:{NFSU2_TR(0x6cdb0b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cdb0c:{NFSU2_TR(0x6cdb0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6cdb0f:L6cdb0f:{c.instructions+=2;NFSU2_TR(0x6cdb0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdb12:{NFSU2_TR(0x6cdb12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdad3u);}goto L6cdad3;}}
}
B6cdb14:L6cdb14:{c.instructions+=12;NFSU2_TR(0x6cdb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdb17:{NFSU2_TR(0x6cdb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdb1a:{NFSU2_TR(0x6cdb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdb1d:{NFSU2_TR(0x6cdb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdb20:{NFSU2_TR(0x6cdb20);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cdb24:{NFSU2_TR(0x6cdb24);
__builtin_memmove((R+0),(R+24),4);
}
B6cdb26:{NFSU2_TR(0x6cdb26);
__builtin_memmove((R+24),(R+28),4);
}
B6cdb28:{NFSU2_TR(0x6cdb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdb2b:{NFSU2_TR(0x6cdb2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cdb2e:{NFSU2_TR(0x6cdb2e);
__builtin_memmove((R+4),(R+0),4);
}
B6cdb30:{NFSU2_TR(0x6cdb30);
__builtin_memmove((R+8),(R+4),4);
}
B6cdb32:{NFSU2_TR(0x6cdb32);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdb35:L6cdb35:{c.instructions+=1;NFSU2_TR(0x6cdb35);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cdb37;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb35u);}goto L6cdb35;}
}
B6cdb37:L6cdb37:{c.instructions+=3;NFSU2_TR(0x6cdb37);
__builtin_memmove((R+4),(R+8),4);
}
B6cdb39:{NFSU2_TR(0x6cdb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdb3c:{NFSU2_TR(0x6cdb3c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cdb3f:L6cdb3f:{c.instructions+=1;NFSU2_TR(0x6cdb3f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cdb41;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb3fu);}goto L6cdb3f;}
}
B6cdb41:L6cdb41:{c.instructions+=5;NFSU2_TR(0x6cdb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdb44:{NFSU2_TR(0x6cdb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cdb47:{NFSU2_TR(0x6cdb47);
__builtin_memmove((R+4),(R+0),4);
}
B6cdb49:{NFSU2_TR(0x6cdb49);
__builtin_memmove((R+8),(R+4),4);
}
B6cdb4b:{NFSU2_TR(0x6cdb4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdb4e:L6cdb4e:{c.instructions+=1;NFSU2_TR(0x6cdb4e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cdb50;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb4eu);}goto L6cdb4e;}
}
B6cdb50:L6cdb50:{c.instructions+=4;NFSU2_TR(0x6cdb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdb53:{NFSU2_TR(0x6cdb53);
__builtin_memmove((R+4),(R+8),4);
}
B6cdb55:{NFSU2_TR(0x6cdb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdb58:{NFSU2_TR(0x6cdb58);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cdb5b:L6cdb5b:{c.instructions+=1;NFSU2_TR(0x6cdb5b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cdb5d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb5bu);}goto L6cdb5b;}
}
B6cdb5d:L6cdb5d:{c.instructions+=5;NFSU2_TR(0x6cdb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdb60:{NFSU2_TR(0x6cdb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cdb63:{NFSU2_TR(0x6cdb63);
__builtin_memmove((R+4),(R+0),4);
}
B6cdb65:{NFSU2_TR(0x6cdb65);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdb68:{NFSU2_TR(0x6cdb68);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6cdb6c:L6cdb6c:{c.instructions+=1;NFSU2_TR(0x6cdb6c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cdb6e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb6cu);}goto L6cdb6c;}
}
B6cdb6e:L6cdb6e:{c.instructions+=3;NFSU2_TR(0x6cdb6e);
__builtin_memmove((R+4),(R+0),4);
}
B6cdb70:{NFSU2_TR(0x6cdb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdb73:{NFSU2_TR(0x6cdb73);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cdb76:L6cdb76:{c.instructions+=1;NFSU2_TR(0x6cdb76);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cdb78;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb76u);}goto L6cdb76;}
}
B6cdb78:L6cdb78:{c.instructions+=6;NFSU2_TR(0x6cdb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdb7b:{NFSU2_TR(0x6cdb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdb7e:{NFSU2_TR(0x6cdb7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdb81:{NFSU2_TR(0x6cdb81);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6cdb85:{NFSU2_TR(0x6cdb85);
__builtin_memmove((R+0),(R+4),4);
}
B6cdb87:{NFSU2_TR(0x6cdb87);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdb8a:L6cdb8a:{c.instructions+=1;NFSU2_TR(0x6cdb8a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cdb8c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb8au);}goto L6cdb8a;}
}
B6cdb8c:L6cdb8c:{c.instructions+=2;NFSU2_TR(0x6cdb8c);
__builtin_memmove((R+4),(R+0),4);
}
B6cdb8e:{NFSU2_TR(0x6cdb8e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cdb91:L6cdb91:{c.instructions+=1;NFSU2_TR(0x6cdb91);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cdb93;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdb91u);}goto L6cdb91;}
}
B6cdb93:L6cdb93:{c.instructions+=6;NFSU2_TR(0x6cdb93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cdb95:{NFSU2_TR(0x6cdb95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cdb98:{NFSU2_TR(0x6cdb98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdb99:{NFSU2_TR(0x6cdb99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdb9a:{NFSU2_TR(0x6cdb9a);
__builtin_memmove((R+4),(R+12),4);
}
B6cdb9c:{NFSU2_TR(0x6cdb9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cdb9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cdb9f:L6cdb9f:{c.instructions+=2;NFSU2_TR(0x6cdb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cdba2:{NFSU2_TR(0x6cdba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdba5:L6cdba5:{c.instructions+=2;NFSU2_TR(0x6cdba5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdba7:{NFSU2_TR(0x6cdba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd9cdu);}goto L6cd9cd;}}
}
B6cdbad:L6cdbad:{c.instructions+=3;NFSU2_TR(0x6cdbad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdbae:{NFSU2_TR(0x6cdbae);
__builtin_memmove((R+4),(R+12),4);
}
B6cdbb0:{NFSU2_TR(0x6cdbb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cdbb5ull));
TAIL_STATIC(0x699d92u,699);
}
B6cdbb5:L6cdbb5:{c.instructions+=2;NFSU2_TR(0x6cdbb5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cdbb8:{NFSU2_TR(0x6cdbb8);
if(r1(R+518)){{goto L6cdbfe;}}
}
B6cdbba:L6cdbba:{c.instructions+=3;NFSU2_TR(0x6cdbba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdbbc:{NFSU2_TR(0x6cdbbc);
__builtin_memmove((R+4),(R+24),4);
}
B6cdbbe:{NFSU2_TR(0x6cdbbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cdbc3ull));
TAIL_STATIC(0x6739efu,673);
}
B6cdbc3:L6cdbc3:{c.instructions+=3;NFSU2_TR(0x6cdbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdbc6:{NFSU2_TR(0x6cdbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdbc9:{NFSU2_TR(0x6cdbc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6cdbcd:L6cdbcd:{c.instructions+=3;NFSU2_TR(0x6cdbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdbd0:{NFSU2_TR(0x6cdbd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6cdbd3:{NFSU2_TR(0x6cdbd3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cd997u);}goto L6cd997;}}
}
B6cdbd9:L6cdbd9:{c.instructions+=3;NFSU2_TR(0x6cdbd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6cdbdc:{NFSU2_TR(0x6cdbdc);
__builtin_memmove((R+4),(R+28),4);
}
B6cdbde:{NFSU2_TR(0x6cdbde);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cdbf4;}}
}
B6cdbe0:L6cdbe0:{c.instructions+=1;NFSU2_TR(0x6cdbe0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cdbe2:L6cdbe2:{c.instructions+=7;NFSU2_TR(0x6cdbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdbe5:{NFSU2_TR(0x6cdbe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6cdbe8:{NFSU2_TR(0x6cdbe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cdbeb:{NFSU2_TR(0x6cdbeb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cdbec:{NFSU2_TR(0x6cdbec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cdbef:{NFSU2_TR(0x6cdbef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cdbf2:{NFSU2_TR(0x6cdbf2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdbe2u);}goto L6cdbe2;}}
}
B6cdbf4:L6cdbf4:{c.instructions+=2;NFSU2_TR(0x6cdbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdbf7:{NFSU2_TR(0x6cdbf7);
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
B6cdbf9:L6cdbf9:{c.instructions+=2;NFSU2_TR(0x6cdbf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cdbfa:{NFSU2_TR(0x6cdbfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cdbfb:L6cdbfb:{c.instructions+=3;NFSU2_TR(0x6cdbfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cdbfc:{NFSU2_TR(0x6cdbfc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cdbfd:{NFSU2_TR(0x6cdbfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cdbfe:L6cdbfe:{c.instructions+=2;NFSU2_TR(0x6cdbfe);
w4(R+0,u32(0x8007000eull));
}
B6cdc03:{NFSU2_TR(0x6cdc03);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdbf9u);}goto L6cdbf9;}
}
B6cdc05:L6cdc05:{c.instructions+=11;NFSU2_TR(0x6cdc05);
__builtin_memmove((R+28),(R+28),4);
}
B6cdc07:{NFSU2_TR(0x6cdc07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdc08:{NFSU2_TR(0x6cdc08);
__builtin_memmove((R+20),(R+16),4);
}
B6cdc0a:{NFSU2_TR(0x6cdc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B6cdc10:{NFSU2_TR(0x6cdc10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdc11:{NFSU2_TR(0x6cdc11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cdc14:{NFSU2_TR(0x6cdc14);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdc16:{NFSU2_TR(0x6cdc16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdc17:{NFSU2_TR(0x6cdc17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cdc18:{NFSU2_TR(0x6cdc18);
__builtin_memmove((R+24),(R+4),4);
}
B6cdc1a:{NFSU2_TR(0x6cdc1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdc25;}}
}
B6cdc1c:L6cdc1c:{c.instructions+=2;NFSU2_TR(0x6cdc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cdc22:{NFSU2_TR(0x6cdc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc25:L6cdc25:{c.instructions+=7;NFSU2_TR(0x6cdc25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdc28:{NFSU2_TR(0x6cdc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdc2b:{NFSU2_TR(0x6cdc2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cdc2d:{NFSU2_TR(0x6cdc2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdc30:{NFSU2_TR(0x6cdc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdc36:{NFSU2_TR(0x6cdc36);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdc39:{NFSU2_TR(0x6cdc39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce0c4u,6ce);}
}
B6cdc3f:L6cdc3f:{c.instructions+=8;NFSU2_TR(0x6cdc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdc45:{NFSU2_TR(0x6cdc45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cdc47:{NFSU2_TR(0x6cdc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdc4a:{NFSU2_TR(0x6cdc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc4e:{NFSU2_TR(0x6cdc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc51:{NFSU2_TR(0x6cdc51);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6cdc57:{NFSU2_TR(0x6cdc57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cdc59:{NFSU2_TR(0x6cdc59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce0c4u,6ce);}
}
B6cdc5f:L6cdc5f:{c.instructions+=3;NFSU2_TR(0x6cdc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc63:{NFSU2_TR(0x6cdc63);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdc65:{NFSU2_TR(0x6cdc65);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cdd35;}}
}
B6cdc6b:L6cdc6b:{c.instructions+=8;NFSU2_TR(0x6cdc6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdc6e:{NFSU2_TR(0x6cdc6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdc71:{NFSU2_TR(0x6cdc71);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdc74:{NFSU2_TR(0x6cdc74);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdc77:{NFSU2_TR(0x6cdc77);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6cdc79:{NFSU2_TR(0x6cdc79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc7c:{NFSU2_TR(0x6cdc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc7f:{NFSU2_TR(0x6cdc7f);
{goto L6cdc84;}
}
B6cdc81:L6cdc81:{c.instructions+=1;NFSU2_TR(0x6cdc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdc84:L6cdc84:{c.instructions+=9;NFSU2_TR(0x6cdc84);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdc86:{NFSU2_TR(0x6cdc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdc89:{NFSU2_TR(0x6cdc89);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdc8c:{NFSU2_TR(0x6cdc8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdc8f:{NFSU2_TR(0x6cdc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdc92:{NFSU2_TR(0x6cdc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdc95:{NFSU2_TR(0x6cdc95);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cdc98:{NFSU2_TR(0x6cdc98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdc9b:{NFSU2_TR(0x6cdc9b);
if(r1(R+518)){{goto L6cdcb3;}}
}
B6cdc9d:L6cdc9d:{c.instructions+=2;NFSU2_TR(0x6cdc9d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cdca1:{NFSU2_TR(0x6cdca1);
if(r1(R+518)){{goto L6cdcb3;}}
}
B6cdca3:L6cdca3:{c.instructions+=2;NFSU2_TR(0x6cdca3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdcaa:{NFSU2_TR(0x6cdcaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdcb3;}}
}
B6cdcac:L6cdcac:{c.instructions+=1;NFSU2_TR(0x6cdcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdcb3:L6cdcb3:{c.instructions+=4;NFSU2_TR(0x6cdcb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdcb6:{NFSU2_TR(0x6cdcb6);
w4(R+8,u32(0x1f0000ull));
}
B6cdcbb:{NFSU2_TR(0x6cdcbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdcbd:{NFSU2_TR(0x6cdcbd);
if(r1(R+518)){{goto L6cdcde;}}
}
B6cdcbf:L6cdcbf:{c.instructions+=5;NFSU2_TR(0x6cdcbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdcc2:{NFSU2_TR(0x6cdcc2);
w4(R+28,u32(~u32(r4(R+28))));
}
B6cdcc4:{NFSU2_TR(0x6cdcc4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B6cdcc6:{NFSU2_TR(0x6cdcc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdcc8:{NFSU2_TR(0x6cdcc8);
if(r1(R+518)){{goto L6cdcde;}}
}
B6cdcca:L6cdcca:{c.instructions+=2;NFSU2_TR(0x6cdcca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdcd1:{NFSU2_TR(0x6cdcd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce0c4u,6ce);}
}
B6cdcd7:L6cdcd7:{c.instructions+=1;NFSU2_TR(0x6cdcd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdcde:L6cdcde:{c.instructions+=6;NFSU2_TR(0x6cdcde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdce1:{NFSU2_TR(0x6cdce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cdce3:{NFSU2_TR(0x6cdce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdce6:{NFSU2_TR(0x6cdce6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdce9:{NFSU2_TR(0x6cdce9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xfeull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cdced:{NFSU2_TR(0x6cdced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce0c4u,6ce);}
}
B6cdcf3:L6cdcf3:{c.instructions+=2;NFSU2_TR(0x6cdcf3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cdcf7:{NFSU2_TR(0x6cdcf7);
if(r1(R+518)){{goto L6cdd1c;}}
}
B6cdcf9:L6cdcf9:{c.instructions+=3;NFSU2_TR(0x6cdcf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdcfc:{NFSU2_TR(0x6cdcfc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cdd00:{NFSU2_TR(0x6cdd00);
if(r1(R+518)){{goto L6cdd1c;}}
}
B6cdd02:L6cdd02:{c.instructions+=4;NFSU2_TR(0x6cdd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdd05:{NFSU2_TR(0x6cdd05);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6cdd0a:{NFSU2_TR(0x6cdd0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdd0f:{NFSU2_TR(0x6cdd0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce0c4u,6ce);}
}
B6cdd15:L6cdd15:{c.instructions+=1;NFSU2_TR(0x6cdd15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdd1c:L6cdd1c:{c.instructions+=6;NFSU2_TR(0x6cdd1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdd1f:{NFSU2_TR(0x6cdd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdd25:{NFSU2_TR(0x6cdd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdd28:{NFSU2_TR(0x6cdd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdd2c:{NFSU2_TR(0x6cdd2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6cdd2f:{NFSU2_TR(0x6cdd2f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdc81u);}goto L6cdc81;}}
}
B6cdd35:L6cdd35:{c.instructions+=3;NFSU2_TR(0x6cdd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdd39:{NFSU2_TR(0x6cdd39);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdd3d:{NFSU2_TR(0x6cdd3d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cde1c;}}
}
B6cdd43:L6cdd43:{c.instructions+=7;NFSU2_TR(0x6cdd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdd46:{NFSU2_TR(0x6cdd46);
w4(R+0,u32(~u32(r4(R+0))));
}
B6cdd48:{NFSU2_TR(0x6cdd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdd4b:{NFSU2_TR(0x6cdd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdd4e:{NFSU2_TR(0x6cdd4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cdd51:{NFSU2_TR(0x6cdd51);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6cdd53:{NFSU2_TR(0x6cdd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdd56:L6cdd56:{c.instructions+=28;NFSU2_TR(0x6cdd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdd59:{NFSU2_TR(0x6cdd59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdd5c:{NFSU2_TR(0x6cdd5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdd5f:{NFSU2_TR(0x6cdd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cdd62:{NFSU2_TR(0x6cdd62);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cdd65:{NFSU2_TR(0x6cdd65);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdd69:{NFSU2_TR(0x6cdd69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdd6c:{NFSU2_TR(0x6cdd6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cdd6f:{NFSU2_TR(0x6cdd6f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6cdd73:{NFSU2_TR(0x6cdd73);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cdd76:{NFSU2_TR(0x6cdd76);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cdd79:{NFSU2_TR(0x6cdd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cdd7c:{NFSU2_TR(0x6cdd7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6cdd7e:{NFSU2_TR(0x6cdd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdd81:{NFSU2_TR(0x6cdd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cdd84:{NFSU2_TR(0x6cdd84);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cdd88:{NFSU2_TR(0x6cdd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdd8b:{NFSU2_TR(0x6cdd8b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cdd8f:{NFSU2_TR(0x6cdd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdd92:{NFSU2_TR(0x6cdd92);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cdd99:{NFSU2_TR(0x6cdd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdd9c:{NFSU2_TR(0x6cdd9c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cdda0:{NFSU2_TR(0x6cdda0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdda3:{NFSU2_TR(0x6cdda3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cddaa:{NFSU2_TR(0x6cddaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cddad:{NFSU2_TR(0x6cddad);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cddb1:{NFSU2_TR(0x6cddb1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cddb8:{NFSU2_TR(0x6cddb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cddfb;}}
}
B6cddba:L6cddba:{c.instructions+=23;NFSU2_TR(0x6cddba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cddbd:{NFSU2_TR(0x6cddbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddc0:{NFSU2_TR(0x6cddc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cddc3:{NFSU2_TR(0x6cddc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddc6:{NFSU2_TR(0x6cddc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cddc9:{NFSU2_TR(0x6cddc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddcc:{NFSU2_TR(0x6cddcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cddcf:{NFSU2_TR(0x6cddcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddd2:{NFSU2_TR(0x6cddd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cddd5:{NFSU2_TR(0x6cddd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddd8:{NFSU2_TR(0x6cddd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdddb:{NFSU2_TR(0x6cdddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddde:{NFSU2_TR(0x6cddde);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdde1:{NFSU2_TR(0x6cdde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdde4:{NFSU2_TR(0x6cdde4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdde7:{NFSU2_TR(0x6cdde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cddea:{NFSU2_TR(0x6cddea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdded:{NFSU2_TR(0x6cdded);
__builtin_memmove((R+4),(R+8),4);
}
B6cddef:{NFSU2_TR(0x6cddef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B6cddf2:{NFSU2_TR(0x6cddf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B6cddf5:{NFSU2_TR(0x6cddf5);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6cddf7:{NFSU2_TR(0x6cddf7);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B6cddf9:{NFSU2_TR(0x6cddf9);
{goto L6cde07;}
}
B6cddfb:L6cddfb:{c.instructions+=5;NFSU2_TR(0x6cddfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cddfe:{NFSU2_TR(0x6cddfe);
__builtin_memmove((R+4),(R+28),4);
}
B6cde00:{NFSU2_TR(0x6cde00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B6cde03:{NFSU2_TR(0x6cde03);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B6cde05:{NFSU2_TR(0x6cde05);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6cde07:L6cde07:{c.instructions+=6;NFSU2_TR(0x6cde07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde0a:{NFSU2_TR(0x6cde0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cde0d:{NFSU2_TR(0x6cde0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde10:{NFSU2_TR(0x6cde10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cde13:{NFSU2_TR(0x6cde13);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cde16:{NFSU2_TR(0x6cde16);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdd56u);}goto L6cdd56;}}
}
B6cde1c:L6cde1c:{c.instructions+=5;NFSU2_TR(0x6cde1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cde1f:{NFSU2_TR(0x6cde1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde23:{NFSU2_TR(0x6cde23);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cde25:{NFSU2_TR(0x6cde25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde28:{NFSU2_TR(0x6cde28);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cde51;}}
}
B6cde2a:L6cde2a:{c.instructions+=2;NFSU2_TR(0x6cde2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cde2d:{NFSU2_TR(0x6cde2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde30:L6cde30:{c.instructions+=4;NFSU2_TR(0x6cde30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cde33:{NFSU2_TR(0x6cde33);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cde35:{NFSU2_TR(0x6cde35);
__builtin_memmove((R+4),(R+24),4);
}
B6cde37:{NFSU2_TR(0x6cde37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cde3cull));
TAIL_STATIC(0x6c9acdu,6c9);
}
B6cde3c:L6cde3c:{c.instructions+=2;NFSU2_TR(0x6cde3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cde3f:{NFSU2_TR(0x6cde3f);
if(r1(R+518)){TAIL_STATIC(0x6ce05cu,6ce);}
}
B6cde45:L6cde45:{c.instructions+=4;NFSU2_TR(0x6cde45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde48:{NFSU2_TR(0x6cde48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde4c:{NFSU2_TR(0x6cde4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6cde4f:{NFSU2_TR(0x6cde4f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cde30u);}goto L6cde30;}}
}
B6cde51:L6cde51:{c.instructions+=5;NFSU2_TR(0x6cde51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde55:{NFSU2_TR(0x6cde55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde59:{NFSU2_TR(0x6cde59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cde5d:{NFSU2_TR(0x6cde5d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cde5f:{NFSU2_TR(0x6cde5f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cdf02;}}
}
B6cde65:L6cde65:{c.instructions+=17;NFSU2_TR(0x6cde65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cde68:{NFSU2_TR(0x6cde68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cde6b:{NFSU2_TR(0x6cde6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cde6e:{NFSU2_TR(0x6cde6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cde71:{NFSU2_TR(0x6cde71);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6cde73:{NFSU2_TR(0x6cde73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde76:{NFSU2_TR(0x6cde76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cde79:{NFSU2_TR(0x6cde79);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6cde7b:{NFSU2_TR(0x6cde7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde7e:{NFSU2_TR(0x6cde7e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6cde80:{NFSU2_TR(0x6cde80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cde83:{NFSU2_TR(0x6cde83);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6cde85:{NFSU2_TR(0x6cde85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde88:{NFSU2_TR(0x6cde88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cde8b:{NFSU2_TR(0x6cde8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde8e:{NFSU2_TR(0x6cde8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cde91:{NFSU2_TR(0x6cde91);
{goto L6cde96;}
}
B6cde93:L6cde93:{c.instructions+=1;NFSU2_TR(0x6cde93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cde96:L6cde96:{c.instructions+=8;NFSU2_TR(0x6cde96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cde99:{NFSU2_TR(0x6cde99);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cde9c:{NFSU2_TR(0x6cde9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cde9e:{NFSU2_TR(0x6cde9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cdea1:{NFSU2_TR(0x6cdea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdea4:{NFSU2_TR(0x6cdea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdea7:{NFSU2_TR(0x6cdea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6cdeaa:{NFSU2_TR(0x6cdeaa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cdeaf;}}
}
B6cdeac:L6cdeac:{c.instructions+=1;NFSU2_TR(0x6cdeac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdeaf:L6cdeaf:{c.instructions+=4;NFSU2_TR(0x6cdeaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdeb2:{NFSU2_TR(0x6cdeb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdeb5:{NFSU2_TR(0x6cdeb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdeb8:{NFSU2_TR(0x6cdeb8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cdebd;}}
}
B6cdeba:L6cdeba:{c.instructions+=1;NFSU2_TR(0x6cdeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdebd:L6cdebd:{c.instructions+=3;NFSU2_TR(0x6cdebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdec3:{NFSU2_TR(0x6cdec3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdec6:{NFSU2_TR(0x6cdec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdeec;}}
}
B6cdec8:L6cdec8:{c.instructions+=4;NFSU2_TR(0x6cdec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdecb:{NFSU2_TR(0x6cdecb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cdece:{NFSU2_TR(0x6cdece);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cded1:{NFSU2_TR(0x6cded1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdeec;}}
}
B6cded3:L6cded3:{c.instructions+=4;NFSU2_TR(0x6cded3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cded6:{NFSU2_TR(0x6cded6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cded9:{NFSU2_TR(0x6cded9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdedc:{NFSU2_TR(0x6cdedc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdeec;}}
}
B6cdede:L6cdede:{c.instructions+=4;NFSU2_TR(0x6cdede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdee1:{NFSU2_TR(0x6cdee1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cdee4:{NFSU2_TR(0x6cdee4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdee7:{NFSU2_TR(0x6cdee7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdeec;}}
}
B6cdee9:L6cdee9:{c.instructions+=1;NFSU2_TR(0x6cdee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdeec:L6cdeec:{c.instructions+=3;NFSU2_TR(0x6cdeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdeef:{NFSU2_TR(0x6cdeef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cdef2:{NFSU2_TR(0x6cdef2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cdef7;}}
}
B6cdef4:L6cdef4:{c.instructions+=1;NFSU2_TR(0x6cdef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdef7:L6cdef7:{c.instructions+=3;NFSU2_TR(0x6cdef7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cdefa:{NFSU2_TR(0x6cdefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cdefd:{NFSU2_TR(0x6cdefd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cde93u);}goto L6cde93;}}
}
B6cdeff:L6cdeff:{c.instructions+=1;NFSU2_TR(0x6cdeff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cdf02:L6cdf02:{c.instructions+=4;NFSU2_TR(0x6cdf02);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cdf04:{NFSU2_TR(0x6cdf04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdf07:{NFSU2_TR(0x6cdf07);
w4(R+0,u32(0x10000000ull));
}
B6cdf0c:{NFSU2_TR(0x6cdf0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cdf1f;}}
}
B6cdf0e:L6cdf0e:{c.instructions+=3;NFSU2_TR(0x6cdf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdf11:{NFSU2_TR(0x6cdf11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6cdf14:{NFSU2_TR(0x6cdf14);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cdf1f;}}
}
B6cdf16:L6cdf16:{c.instructions+=2;NFSU2_TR(0x6cdf16);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cdf19:{NFSU2_TR(0x6cdf19);
if(r1(R+518)){TAIL_STATIC(0x6ce05cu,6ce);}
}
B6cdf1f:L6cdf1f:{c.instructions+=2;NFSU2_TR(0x6cdf1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdf22:{NFSU2_TR(0x6cdf22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce141u,6ce);}
}
B6cdf28:L6cdf28:{c.instructions+=4;NFSU2_TR(0x6cdf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdf2b:{NFSU2_TR(0x6cdf2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdf2e:{NFSU2_TR(0x6cdf2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf31:{NFSU2_TR(0x6cdf31);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6ce04cu,6ce);}
}
B6cdf37:L6cdf37:{c.instructions+=9;NFSU2_TR(0x6cdf37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdf3a:{NFSU2_TR(0x6cdf3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cdf3d:{NFSU2_TR(0x6cdf3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf40:{NFSU2_TR(0x6cdf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdf43:{NFSU2_TR(0x6cdf43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cdf45:{NFSU2_TR(0x6cdf45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cdf47:{NFSU2_TR(0x6cdf47);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdf49:{NFSU2_TR(0x6cdf49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf4c:{NFSU2_TR(0x6cdf4c);
if(r1(R+518)){TAIL_STATIC(0x6ce037u,6ce);}
}
B6cdf52:L6cdf52:{c.instructions+=9;NFSU2_TR(0x6cdf52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cdf55:{NFSU2_TR(0x6cdf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cdf58:{NFSU2_TR(0x6cdf58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf5c:{NFSU2_TR(0x6cdf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cdf5f:{NFSU2_TR(0x6cdf5f);
__builtin_memmove((R+0),(R+28),4);
}
B6cdf61:{NFSU2_TR(0x6cdf61);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cdf66:{NFSU2_TR(0x6cdf66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6cdf68:{NFSU2_TR(0x6cdf68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf6b:{NFSU2_TR(0x6cdf6b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6ce037u,6ce);}
}
B6cdf71:L6cdf71:{c.instructions+=4;NFSU2_TR(0x6cdf71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf75:{NFSU2_TR(0x6cdf75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf79:{NFSU2_TR(0x6cdf79);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cdf7b:{NFSU2_TR(0x6cdf7b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cdff2;}}
}
B6cdf7d:L6cdf7d:{c.instructions+=3;NFSU2_TR(0x6cdf7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf81:{NFSU2_TR(0x6cdf81);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdf85:{NFSU2_TR(0x6cdf85);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cdfaf;}}
}
B6cdf87:L6cdf87:{c.instructions+=2;NFSU2_TR(0x6cdf87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdf8a:{NFSU2_TR(0x6cdf8a);
{goto L6cdf8f;}
}
B6cdf8c:L6cdf8c:{c.instructions+=1;NFSU2_TR(0x6cdf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdf8f:L6cdf8f:{c.instructions+=4;NFSU2_TR(0x6cdf8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cdf92:{NFSU2_TR(0x6cdf92);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cdf95:{NFSU2_TR(0x6cdf95);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cdf97:{NFSU2_TR(0x6cdf97);
if(r1(R+518)){{goto L6cdfac;}}
}
B6cdf99:L6cdf99:{c.instructions+=6;NFSU2_TR(0x6cdf99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdf9c:{NFSU2_TR(0x6cdf9c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cdf9f:{NFSU2_TR(0x6cdf9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cdfa2:{NFSU2_TR(0x6cdfa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdfa5:{NFSU2_TR(0x6cdfa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6cdfa8:{NFSU2_TR(0x6cdfa8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdf8cu);}goto L6cdf8c;}}
}
B6cdfaa:L6cdfaa:{c.instructions+=1;NFSU2_TR(0x6cdfaa);
{goto L6cdfaf;}
}
B6cdfac:L6cdfac:{c.instructions+=1;NFSU2_TR(0x6cdfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdfaf:L6cdfaf:{c.instructions+=3;NFSU2_TR(0x6cdfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdfb2:{NFSU2_TR(0x6cdfb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6cdfb5:{NFSU2_TR(0x6cdfb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdf7du);}goto L6cdf7d;}}
}
B6cdfb7:L6cdfb7:{c.instructions+=2;NFSU2_TR(0x6cdfb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdfbb:{NFSU2_TR(0x6cdfbb);
if(r1(R+518)){{goto L6cdff2;}}
}
B6cdfbd:L6cdfbd:{c.instructions+=2;NFSU2_TR(0x6cdfbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cdfc0:{NFSU2_TR(0x6cdfc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ce05cu,6ce);}
}
B6cdfc6:L6cdfc6:{c.instructions+=4;NFSU2_TR(0x6cdfc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cdfc9:{NFSU2_TR(0x6cdfc9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6cdfcf:{NFSU2_TR(0x6cdfcf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cdfd5:{NFSU2_TR(0x6cdfd5);
if(r1(R+518)){TAIL_STATIC(0x6ce05cu,6ce);}
}
B6cdfdb:L6cdfdb:{c.instructions+=2;NFSU2_TR(0x6cdfdb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cdfe1:{NFSU2_TR(0x6cdfe1);
if(r1(R+518)){TAIL_STATIC(0x6ce05cu,6ce);}
}
B6cdfe3:L6cdfe3:{c.instructions+=2;NFSU2_TR(0x6cdfe3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cdfe9:{NFSU2_TR(0x6cdfe9);
if(r1(R+518)){TAIL_STATIC(0x6ce05cu,6ce);}
}
B6cdfeb:L6cdfeb:{c.instructions+=1;NFSU2_TR(0x6cdfeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cdff2:L6cdff2:{c.instructions+=3;NFSU2_TR(0x6cdff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6cdff5:{NFSU2_TR(0x6cdff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cdff8:{NFSU2_TR(0x6cdff8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cdf71u);}goto L6cdf71;}}
}
B6cdffe:L6cdffe:{c.instructions+=1;NFSU2_TR(0x6cdffe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x6ce002u,6ce);
}
XIT:NFSU2_TR_EXIT(0x6cd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
