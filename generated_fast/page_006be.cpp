#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6bf(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6c7(u8* __restrict R,Cpu& c);
u32 body_6c8(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6be,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6be,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6be(u8* __restrict R,Cpu& c);
u32 page_6be(Cpu& c){return body_6be(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6be(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6be001:goto L6be001;
case 0x6be007:goto L6be007;
case 0x6be009:c.instructions+=1;goto B6be009;
case 0x6be00e:goto L6be00e;
case 0x6be010:c.instructions+=2;goto B6be010;
case 0x6be013:c.instructions+=1;goto B6be013;
case 0x6be019:goto L6be019;
case 0x6be01c:c.instructions+=7;goto B6be01c;
case 0x6be022:c.instructions+=6;goto B6be022;
case 0x6be025:c.instructions+=5;goto B6be025;
case 0x6be02b:c.instructions+=4;goto B6be02b;
case 0x6be02d:c.instructions+=3;goto B6be02d;
case 0x6be02f:c.instructions+=2;goto B6be02f;
case 0x6be034:c.instructions+=1;goto B6be034;
case 0x6be036:goto L6be036;
case 0x6be03b:c.instructions+=1;goto B6be03b;
case 0x6be03d:goto L6be03d;
case 0x6be042:c.instructions+=1;goto B6be042;
case 0x6be044:goto L6be044;
case 0x6be049:c.instructions+=1;goto B6be049;
case 0x6be04b:goto L6be04b;
case 0x6be050:c.instructions+=1;goto B6be050;
case 0x6be052:goto L6be052;
case 0x6be057:c.instructions+=1;goto B6be057;
case 0x6be059:goto L6be059;
case 0x6be05b:c.instructions+=1;goto B6be05b;
case 0x6be060:goto L6be060;
case 0x6be062:c.instructions+=1;goto B6be062;
case 0x6be068:goto L6be068;
case 0x6be06a:c.instructions+=1;goto B6be06a;
case 0x6be06f:goto L6be06f;
case 0x6be071:goto L6be071;
case 0x6be073:c.instructions+=1;goto B6be073;
case 0x6be078:goto L6be078;
case 0x6be07a:c.instructions+=1;goto B6be07a;
case 0x6be080:goto L6be080;
case 0x6be082:c.instructions+=1;goto B6be082;
case 0x6be087:goto L6be087;
case 0x6be089:goto L6be089;
case 0x6be08f:c.instructions+=3;goto B6be08f;
case 0x6be094:c.instructions+=2;goto B6be094;
case 0x6be099:c.instructions+=1;goto B6be099;
case 0x6be09b:goto L6be09b;
case 0x6be09d:c.instructions+=2;goto B6be09d;
case 0x6be09f:c.instructions+=1;goto B6be09f;
case 0x6be0a4:goto L6be0a4;
case 0x6be0a6:goto L6be0a6;
case 0x6be0ac:c.instructions+=3;goto B6be0ac;
case 0x6be0b1:c.instructions+=2;goto B6be0b1;
case 0x6be0b6:c.instructions+=1;goto B6be0b6;
case 0x6be0b8:goto L6be0b8;
case 0x6be0ba:c.instructions+=1;goto B6be0ba;
case 0x6be0bf:goto L6be0bf;
case 0x6be0c1:goto L6be0c1;
case 0x6be0c3:c.instructions+=1;goto B6be0c3;
case 0x6be0c4:goto L6be0c4;
case 0x6be0c6:c.instructions+=1;goto B6be0c6;
case 0x6be0cc:goto L6be0cc;
case 0x6be0cd:c.instructions+=2;goto B6be0cd;
case 0x6be0d0:c.instructions+=1;goto B6be0d0;
case 0x6be0d6:goto L6be0d6;
case 0x6be0d8:c.instructions+=2;goto B6be0d8;
case 0x6be0db:c.instructions+=1;goto B6be0db;
case 0x6be0dd:goto L6be0dd;
case 0x6be0e0:c.instructions+=8;goto B6be0e0;
case 0x6be0e6:c.instructions+=7;goto B6be0e6;
case 0x6be0e9:c.instructions+=6;goto B6be0e9;
case 0x6be0ef:c.instructions+=5;goto B6be0ef;
case 0x6be0f1:c.instructions+=4;goto B6be0f1;
case 0x6be0f3:c.instructions+=3;goto B6be0f3;
case 0x6be0f8:c.instructions+=2;goto B6be0f8;
case 0x6be0fa:c.instructions+=1;goto B6be0fa;
case 0x6be0fc:goto L6be0fc;
case 0x6be0fe:goto L6be0fe;
case 0x6be103:c.instructions+=1;goto B6be103;
case 0x6be105:goto L6be105;
case 0x6be10a:c.instructions+=1;goto B6be10a;
case 0x6be10c:goto L6be10c;
case 0x6be111:c.instructions+=1;goto B6be111;
case 0x6be113:goto L6be113;
case 0x6be118:c.instructions+=1;goto B6be118;
case 0x6be11a:goto L6be11a;
case 0x6be11c:c.instructions+=1;goto B6be11c;
case 0x6be121:goto L6be121;
case 0x6be123:goto L6be123;
case 0x6be128:c.instructions+=1;goto B6be128;
case 0x6be12a:goto L6be12a;
case 0x6be12f:c.instructions+=1;goto B6be12f;
case 0x6be131:goto L6be131;
case 0x6be136:c.instructions+=1;goto B6be136;
case 0x6be138:goto L6be138;
case 0x6be13a:c.instructions+=1;goto B6be13a;
case 0x6be13f:goto L6be13f;
case 0x6be141:c.instructions+=1;goto B6be141;
case 0x6be147:goto L6be147;
case 0x6be148:c.instructions+=2;goto B6be148;
case 0x6be14b:c.instructions+=1;goto B6be14b;
case 0x6be14d:goto L6be14d;
case 0x6be14f:c.instructions+=2;goto B6be14f;
case 0x6be152:c.instructions+=1;goto B6be152;
case 0x6be154:goto L6be154;
case 0x6be157:c.instructions+=7;goto B6be157;
case 0x6be15d:c.instructions+=6;goto B6be15d;
case 0x6be160:c.instructions+=5;goto B6be160;
case 0x6be166:c.instructions+=4;goto B6be166;
case 0x6be168:c.instructions+=3;goto B6be168;
case 0x6be16a:c.instructions+=2;goto B6be16a;
case 0x6be16f:c.instructions+=1;goto B6be16f;
case 0x6be171:goto L6be171;
case 0x6be173:c.instructions+=1;goto B6be173;
case 0x6be178:goto L6be178;
case 0x6be17a:c.instructions+=1;goto B6be17a;
case 0x6be180:goto L6be180;
case 0x6be181:c.instructions+=2;goto B6be181;
case 0x6be184:c.instructions+=1;goto B6be184;
case 0x6be186:goto L6be186;
case 0x6be188:c.instructions+=1;goto B6be188;
case 0x6be18d:goto L6be18d;
case 0x6be18f:c.instructions+=2;goto B6be18f;
case 0x6be192:c.instructions+=1;goto B6be192;
case 0x6be194:goto L6be194;
case 0x6be197:c.instructions+=7;goto B6be197;
case 0x6be19d:c.instructions+=6;goto B6be19d;
case 0x6be1a0:c.instructions+=5;goto B6be1a0;
case 0x6be1a6:c.instructions+=4;goto B6be1a6;
case 0x6be1a8:c.instructions+=3;goto B6be1a8;
case 0x6be1aa:c.instructions+=2;goto B6be1aa;
case 0x6be1af:c.instructions+=1;goto B6be1af;
case 0x6be1b1:goto L6be1b1;
case 0x6be1b6:c.instructions+=1;goto B6be1b6;
case 0x6be1b8:goto L6be1b8;
case 0x6be1ba:c.instructions+=1;goto B6be1ba;
case 0x6be1bf:goto L6be1bf;
case 0x6be1c1:c.instructions+=1;goto B6be1c1;
case 0x6be1c7:goto L6be1c7;
case 0x6be1c9:c.instructions+=1;goto B6be1c9;
case 0x6be1ce:goto L6be1ce;
case 0x6be1d0:c.instructions+=1;goto B6be1d0;
case 0x6be1d6:goto L6be1d6;
case 0x6be1d7:c.instructions+=2;goto B6be1d7;
case 0x6be1da:c.instructions+=1;goto B6be1da;
case 0x6be1dc:goto L6be1dc;
case 0x6be1de:c.instructions+=2;goto B6be1de;
case 0x6be1e1:c.instructions+=1;goto B6be1e1;
case 0x6be1e3:goto L6be1e3;
case 0x6be1e6:c.instructions+=7;goto B6be1e6;
case 0x6be1ec:c.instructions+=6;goto B6be1ec;
case 0x6be1ef:c.instructions+=5;goto B6be1ef;
case 0x6be1f5:c.instructions+=4;goto B6be1f5;
case 0x6be1f7:c.instructions+=3;goto B6be1f7;
case 0x6be1f9:c.instructions+=2;goto B6be1f9;
case 0x6be1fe:c.instructions+=1;goto B6be1fe;
case 0x6be200:goto L6be200;
case 0x6be205:c.instructions+=1;goto B6be205;
case 0x6be207:goto L6be207;
case 0x6be20c:c.instructions+=1;goto B6be20c;
case 0x6be20e:goto L6be20e;
case 0x6be213:c.instructions+=1;goto B6be213;
case 0x6be215:goto L6be215;
case 0x6be217:c.instructions+=1;goto B6be217;
case 0x6be21c:goto L6be21c;
case 0x6be21d:c.instructions+=2;goto B6be21d;
case 0x6be220:c.instructions+=1;goto B6be220;
case 0x6be222:goto L6be222;
case 0x6be224:c.instructions+=2;goto B6be224;
case 0x6be227:c.instructions+=1;goto B6be227;
case 0x6be229:goto L6be229;
case 0x6be22c:c.instructions+=7;goto B6be22c;
case 0x6be232:c.instructions+=6;goto B6be232;
case 0x6be235:c.instructions+=5;goto B6be235;
case 0x6be23b:c.instructions+=4;goto B6be23b;
case 0x6be23d:c.instructions+=3;goto B6be23d;
case 0x6be23f:c.instructions+=2;goto B6be23f;
case 0x6be244:c.instructions+=1;goto B6be244;
case 0x6be246:goto L6be246;
case 0x6be248:c.instructions+=1;goto B6be248;
case 0x6be24d:goto L6be24d;
case 0x6be24f:c.instructions+=1;goto B6be24f;
case 0x6be255:goto L6be255;
case 0x6be256:c.instructions+=2;goto B6be256;
case 0x6be259:c.instructions+=1;goto B6be259;
case 0x6be25b:goto L6be25b;
case 0x6be25d:c.instructions+=2;goto B6be25d;
case 0x6be260:c.instructions+=1;goto B6be260;
case 0x6be262:goto L6be262;
case 0x6be265:c.instructions+=7;goto B6be265;
case 0x6be26b:c.instructions+=6;goto B6be26b;
case 0x6be26e:c.instructions+=5;goto B6be26e;
case 0x6be274:c.instructions+=4;goto B6be274;
case 0x6be276:c.instructions+=3;goto B6be276;
case 0x6be278:c.instructions+=2;goto B6be278;
case 0x6be27d:c.instructions+=1;goto B6be27d;
case 0x6be27f:goto L6be27f;
case 0x6be281:c.instructions+=1;goto B6be281;
case 0x6be286:goto L6be286;
case 0x6be288:c.instructions+=1;goto B6be288;
case 0x6be28e:goto L6be28e;
case 0x6be28f:c.instructions+=2;goto B6be28f;
case 0x6be292:c.instructions+=1;goto B6be292;
case 0x6be294:goto L6be294;
case 0x6be296:c.instructions+=2;goto B6be296;
case 0x6be299:c.instructions+=1;goto B6be299;
case 0x6be29b:goto L6be29b;
case 0x6be29e:c.instructions+=7;goto B6be29e;
case 0x6be2a4:c.instructions+=6;goto B6be2a4;
case 0x6be2a7:c.instructions+=5;goto B6be2a7;
case 0x6be2ad:c.instructions+=4;goto B6be2ad;
case 0x6be2af:c.instructions+=3;goto B6be2af;
case 0x6be2b1:c.instructions+=2;goto B6be2b1;
case 0x6be2b6:c.instructions+=1;goto B6be2b6;
case 0x6be2b8:goto L6be2b8;
case 0x6be2be:c.instructions+=3;goto B6be2be;
case 0x6be2c3:c.instructions+=2;goto B6be2c3;
case 0x6be2c8:c.instructions+=1;goto B6be2c8;
case 0x6be2ca:goto L6be2ca;
case 0x6be2cc:c.instructions+=2;goto B6be2cc;
case 0x6be2ce:c.instructions+=1;goto B6be2ce;
case 0x6be2d3:goto L6be2d3;
case 0x6be2d5:goto L6be2d5;
case 0x6be2d7:c.instructions+=1;goto B6be2d7;
case 0x6be2d8:goto L6be2d8;
case 0x6be2da:c.instructions+=1;goto B6be2da;
case 0x6be2e0:goto L6be2e0;
case 0x6be2e1:c.instructions+=2;goto B6be2e1;
case 0x6be2e4:c.instructions+=1;goto B6be2e4;
case 0x6be2e6:goto L6be2e6;
case 0x6be2e8:c.instructions+=1;goto B6be2e8;
case 0x6be2ed:goto L6be2ed;
case 0x6be2ef:c.instructions+=2;goto B6be2ef;
case 0x6be2f2:c.instructions+=1;goto B6be2f2;
case 0x6be2f4:goto L6be2f4;
case 0x6be2f7:c.instructions+=7;goto B6be2f7;
case 0x6be2fd:c.instructions+=6;goto B6be2fd;
case 0x6be300:c.instructions+=5;goto B6be300;
case 0x6be306:c.instructions+=4;goto B6be306;
case 0x6be308:c.instructions+=3;goto B6be308;
case 0x6be30a:c.instructions+=2;goto B6be30a;
case 0x6be30f:c.instructions+=1;goto B6be30f;
case 0x6be311:goto L6be311;
case 0x6be316:c.instructions+=1;goto B6be316;
case 0x6be318:goto L6be318;
case 0x6be31d:c.instructions+=1;goto B6be31d;
case 0x6be31f:goto L6be31f;
case 0x6be324:c.instructions+=1;goto B6be324;
case 0x6be326:goto L6be326;
case 0x6be32b:c.instructions+=1;goto B6be32b;
case 0x6be32d:goto L6be32d;
case 0x6be332:c.instructions+=1;goto B6be332;
case 0x6be334:goto L6be334;
case 0x6be33a:c.instructions+=3;goto B6be33a;
case 0x6be33f:c.instructions+=2;goto B6be33f;
case 0x6be344:c.instructions+=1;goto B6be344;
case 0x6be346:goto L6be346;
case 0x6be348:c.instructions+=1;goto B6be348;
case 0x6be34d:goto L6be34d;
case 0x6be34f:goto L6be34f;
case 0x6be351:c.instructions+=2;goto B6be351;
case 0x6be352:c.instructions+=1;goto B6be352;
case 0x6be354:goto L6be354;
case 0x6be356:c.instructions+=1;goto B6be356;
case 0x6be35b:goto L6be35b;
case 0x6be35d:c.instructions+=1;goto B6be35d;
case 0x6be35f:goto L6be35f;
case 0x6be360:c.instructions+=2;goto B6be360;
case 0x6be363:c.instructions+=1;goto B6be363;
case 0x6be365:goto L6be365;
case 0x6be367:c.instructions+=1;goto B6be367;
case 0x6be36c:goto L6be36c;
case 0x6be36e:c.instructions+=2;goto B6be36e;
case 0x6be371:c.instructions+=1;goto B6be371;
case 0x6be373:goto L6be373;
case 0x6be376:c.instructions+=7;goto B6be376;
case 0x6be37c:c.instructions+=6;goto B6be37c;
case 0x6be37f:c.instructions+=5;goto B6be37f;
case 0x6be385:c.instructions+=4;goto B6be385;
case 0x6be387:c.instructions+=3;goto B6be387;
case 0x6be389:c.instructions+=2;goto B6be389;
case 0x6be38e:c.instructions+=1;goto B6be38e;
case 0x6be390:goto L6be390;
case 0x6be392:c.instructions+=1;goto B6be392;
case 0x6be397:goto L6be397;
case 0x6be399:c.instructions+=1;goto B6be399;
case 0x6be39b:goto L6be39b;
case 0x6be39c:c.instructions+=2;goto B6be39c;
case 0x6be39f:c.instructions+=1;goto B6be39f;
case 0x6be3a1:goto L6be3a1;
case 0x6be3a3:c.instructions+=1;goto B6be3a3;
case 0x6be3a8:goto L6be3a8;
case 0x6be3aa:c.instructions+=1;goto B6be3aa;
case 0x6be3ac:goto L6be3ac;
case 0x6be3ae:c.instructions+=1;goto B6be3ae;
case 0x6be3b3:goto L6be3b3;
case 0x6be3b5:c.instructions+=1;goto B6be3b5;
case 0x6be3b7:goto L6be3b7;
case 0x6be3b9:c.instructions+=1;goto B6be3b9;
case 0x6be3be:goto L6be3be;
case 0x6be3c0:c.instructions+=1;goto B6be3c0;
case 0x6be3c2:goto L6be3c2;
case 0x6be3c4:c.instructions+=1;goto B6be3c4;
case 0x6be3c9:goto L6be3c9;
case 0x6be3cb:c.instructions+=1;goto B6be3cb;
case 0x6be3cd:goto L6be3cd;
case 0x6be3cf:c.instructions+=1;goto B6be3cf;
case 0x6be3d4:goto L6be3d4;
case 0x6be3d6:goto L6be3d6;
case 0x6be3d7:c.instructions+=3;goto B6be3d7;
case 0x6be3d8:c.instructions+=2;goto B6be3d8;
case 0x6be3d9:c.instructions+=1;goto B6be3d9;
case 0x6be3da:goto L6be3da;
case 0x6be3e0:c.instructions+=3;goto B6be3e0;
case 0x6be3e5:c.instructions+=2;goto B6be3e5;
case 0x6be3ea:c.instructions+=1;goto B6be3ea;
case 0x6be3ec:goto L6be3ec;
case 0x6be3f2:c.instructions+=7;goto B6be3f2;
case 0x6be3f8:c.instructions+=6;goto B6be3f8;
case 0x6be3fe:c.instructions+=5;goto B6be3fe;
case 0x6be400:c.instructions+=4;goto B6be400;
case 0x6be401:c.instructions+=3;goto B6be401;
case 0x6be404:c.instructions+=2;goto B6be404;
case 0x6be407:c.instructions+=1;goto B6be407;
case 0x6be409:goto L6be409;
case 0x6be40b:c.instructions+=1;goto B6be40b;
case 0x6be40c:goto L6be40c;
case 0x6be40e:c.instructions+=13;goto B6be40e;
case 0x6be40f:c.instructions+=12;goto B6be40f;
case 0x6be411:c.instructions+=11;goto B6be411;
case 0x6be414:c.instructions+=10;goto B6be414;
case 0x6be415:c.instructions+=9;goto B6be415;
case 0x6be416:c.instructions+=8;goto B6be416;
case 0x6be417:c.instructions+=7;goto B6be417;
case 0x6be41d:c.instructions+=6;goto B6be41d;
case 0x6be41f:c.instructions+=5;goto B6be41f;
case 0x6be425:c.instructions+=4;goto B6be425;
case 0x6be428:c.instructions+=3;goto B6be428;
case 0x6be42b:c.instructions+=2;goto B6be42b;
case 0x6be42e:c.instructions+=1;goto B6be42e;
case 0x6be434:goto L6be434;
case 0x6be436:c.instructions+=5;goto B6be436;
case 0x6be438:c.instructions+=4;goto B6be438;
case 0x6be43a:c.instructions+=3;goto B6be43a;
case 0x6be43b:c.instructions+=2;goto B6be43b;
case 0x6be440:c.instructions+=1;goto B6be440;
case 0x6be445:goto L6be445;
case 0x6be447:c.instructions+=2;goto B6be447;
case 0x6be449:c.instructions+=1;goto B6be449;
case 0x6be44b:goto L6be44b;
case 0x6be44e:c.instructions+=6;goto B6be44e;
case 0x6be450:c.instructions+=5;goto B6be450;
case 0x6be452:c.instructions+=4;goto B6be452;
case 0x6be453:c.instructions+=3;goto B6be453;
case 0x6be454:c.instructions+=2;goto B6be454;
case 0x6be459:c.instructions+=1;goto B6be459;
case 0x6be45e:goto L6be45e;
case 0x6be460:c.instructions+=2;goto B6be460;
case 0x6be462:c.instructions+=1;goto B6be462;
case 0x6be464:goto L6be464;
case 0x6be467:c.instructions+=6;goto B6be467;
case 0x6be469:c.instructions+=5;goto B6be469;
case 0x6be46b:c.instructions+=4;goto B6be46b;
case 0x6be46c:c.instructions+=3;goto B6be46c;
case 0x6be46d:c.instructions+=2;goto B6be46d;
case 0x6be472:c.instructions+=1;goto B6be472;
case 0x6be477:goto L6be477;
case 0x6be479:c.instructions+=2;goto B6be479;
case 0x6be47b:c.instructions+=1;goto B6be47b;
case 0x6be481:goto L6be481;
case 0x6be484:c.instructions+=8;goto B6be484;
case 0x6be487:c.instructions+=7;goto B6be487;
case 0x6be48a:c.instructions+=6;goto B6be48a;
case 0x6be48c:c.instructions+=5;goto B6be48c;
case 0x6be48f:c.instructions+=4;goto B6be48f;
case 0x6be492:c.instructions+=3;goto B6be492;
case 0x6be495:c.instructions+=2;goto B6be495;
case 0x6be49b:c.instructions+=1;goto B6be49b;
case 0x6be4a1:goto L6be4a1;
case 0x6be4a3:c.instructions+=3;goto B6be4a3;
case 0x6be4a8:c.instructions+=2;goto B6be4a8;
case 0x6be4af:c.instructions+=1;goto B6be4af;
case 0x6be4b1:goto L6be4b1;
case 0x6be4b4:c.instructions+=4;goto B6be4b4;
case 0x6be4b6:c.instructions+=3;goto B6be4b6;
case 0x6be4b9:c.instructions+=2;goto B6be4b9;
case 0x6be4bc:c.instructions+=1;goto B6be4bc;
case 0x6be4bf:goto L6be4bf;
case 0x6be4c1:c.instructions+=2;goto B6be4c1;
case 0x6be4c4:c.instructions+=1;goto B6be4c4;
case 0x6be4c6:goto L6be4c6;
case 0x6be4c9:c.instructions+=3;goto B6be4c9;
case 0x6be4cc:c.instructions+=2;goto B6be4cc;
case 0x6be4d3:c.instructions+=1;goto B6be4d3;
case 0x6be4d5:goto L6be4d5;
case 0x6be4d9:goto L6be4d9;
case 0x6be4dc:c.instructions+=2;goto B6be4dc;
case 0x6be4df:c.instructions+=1;goto B6be4df;
case 0x6be4e1:goto L6be4e1;
case 0x6be4e5:c.instructions+=1;goto B6be4e5;
case 0x6be4eb:goto L6be4eb;
case 0x6be4ed:c.instructions+=1;goto B6be4ed;
case 0x6be4f2:goto L6be4f2;
case 0x6be4f4:c.instructions+=1;goto B6be4f4;
case 0x6be4f6:goto L6be4f6;
case 0x6be4f8:c.instructions+=1;goto B6be4f8;
case 0x6be4fd:goto L6be4fd;
case 0x6be500:c.instructions+=1;goto B6be500;
case 0x6be502:goto L6be502;
case 0x6be506:goto L6be506;
case 0x6be509:c.instructions+=2;goto B6be509;
case 0x6be50b:c.instructions+=1;goto B6be50b;
case 0x6be511:goto L6be511;
case 0x6be513:c.instructions+=6;goto B6be513;
case 0x6be516:c.instructions+=5;goto B6be516;
case 0x6be51c:c.instructions+=4;goto B6be51c;
case 0x6be51f:c.instructions+=3;goto B6be51f;
case 0x6be525:c.instructions+=2;goto B6be525;
case 0x6be526:c.instructions+=1;goto B6be526;
case 0x6be52b:goto L6be52b;
case 0x6be52d:c.instructions+=2;goto B6be52d;
case 0x6be52f:c.instructions+=1;goto B6be52f;
case 0x6be531:goto L6be531;
case 0x6be532:c.instructions+=3;goto B6be532;
case 0x6be535:c.instructions+=2;goto B6be535;
case 0x6be537:c.instructions+=1;goto B6be537;
case 0x6be53c:goto L6be53c;
case 0x6be53e:c.instructions+=2;goto B6be53e;
case 0x6be540:c.instructions+=1;goto B6be540;
case 0x6be542:goto L6be542;
case 0x6be545:c.instructions+=6;goto B6be545;
case 0x6be548:c.instructions+=5;goto B6be548;
case 0x6be54b:c.instructions+=4;goto B6be54b;
case 0x6be54e:c.instructions+=3;goto B6be54e;
case 0x6be550:c.instructions+=2;goto B6be550;
case 0x6be553:c.instructions+=1;goto B6be553;
case 0x6be556:goto L6be556;
case 0x6be558:goto L6be558;
case 0x6be55a:c.instructions+=2;goto B6be55a;
case 0x6be55d:c.instructions+=1;goto B6be55d;
case 0x6be560:goto L6be560;
case 0x6be562:goto L6be562;
case 0x6be565:c.instructions+=5;goto B6be565;
case 0x6be568:c.instructions+=4;goto B6be568;
case 0x6be56b:c.instructions+=3;goto B6be56b;
case 0x6be56e:c.instructions+=2;goto B6be56e;
case 0x6be570:c.instructions+=1;goto B6be570;
case 0x6be573:goto L6be573;
case 0x6be575:goto L6be575;
case 0x6be577:c.instructions+=1;goto B6be577;
case 0x6be57a:goto L6be57a;
case 0x6be57c:goto L6be57c;
case 0x6be57f:c.instructions+=4;goto B6be57f;
case 0x6be582:c.instructions+=3;goto B6be582;
case 0x6be588:c.instructions+=2;goto B6be588;
case 0x6be58a:c.instructions+=1;goto B6be58a;
case 0x6be58c:goto L6be58c;
case 0x6be58e:c.instructions+=1;goto B6be58e;
case 0x6be593:goto L6be593;
case 0x6be596:goto L6be596;
case 0x6be59c:c.instructions+=4;goto B6be59c;
case 0x6be59f:c.instructions+=3;goto B6be59f;
case 0x6be5a2:c.instructions+=2;goto B6be5a2;
case 0x6be5a8:c.instructions+=1;goto B6be5a8;
case 0x6be5ad:goto L6be5ad;
case 0x6be5b0:goto L6be5b0;
case 0x6be5b2:c.instructions+=2;goto B6be5b2;
case 0x6be5b4:c.instructions+=1;goto B6be5b4;
case 0x6be5b9:goto L6be5b9;
case 0x6be5bb:c.instructions+=1;goto B6be5bb;
case 0x6be5c0:goto L6be5c0;
case 0x6be5c3:c.instructions+=2;goto B6be5c3;
case 0x6be5c6:c.instructions+=1;goto B6be5c6;
case 0x6be5cc:goto L6be5cc;
case 0x6be5d2:c.instructions+=3;goto B6be5d2;
case 0x6be5d7:c.instructions+=2;goto B6be5d7;
case 0x6be5dc:c.instructions+=1;goto B6be5dc;
case 0x6be5e2:goto L6be5e2;
case 0x6be5e8:c.instructions+=5;goto B6be5e8;
case 0x6be5eb:c.instructions+=4;goto B6be5eb;
case 0x6be5ed:c.instructions+=3;goto B6be5ed;
case 0x6be5ee:c.instructions+=2;goto B6be5ee;
case 0x6be5f1:c.instructions+=1;goto B6be5f1;
case 0x6be5f3:goto L6be5f3;
case 0x6be5f5:goto L6be5f5;
case 0x6be5f8:c.instructions+=1;goto B6be5f8;
case 0x6be5fe:goto L6be5fe;
case 0x6be601:c.instructions+=6;goto B6be601;
case 0x6be603:c.instructions+=5;goto B6be603;
case 0x6be605:c.instructions+=4;goto B6be605;
case 0x6be606:c.instructions+=3;goto B6be606;
case 0x6be607:c.instructions+=2;goto B6be607;
case 0x6be60c:c.instructions+=1;goto B6be60c;
case 0x6be611:goto L6be611;
case 0x6be613:c.instructions+=3;goto B6be613;
case 0x6be615:c.instructions+=2;goto B6be615;
case 0x6be618:c.instructions+=1;goto B6be618;
case 0x6be61e:goto L6be61e;
case 0x6be621:c.instructions+=7;goto B6be621;
case 0x6be623:c.instructions+=6;goto B6be623;
case 0x6be625:c.instructions+=5;goto B6be625;
case 0x6be628:c.instructions+=4;goto B6be628;
case 0x6be629:c.instructions+=3;goto B6be629;
case 0x6be62a:c.instructions+=2;goto B6be62a;
case 0x6be62f:c.instructions+=1;goto B6be62f;
case 0x6be634:goto L6be634;
case 0x6be636:c.instructions+=2;goto B6be636;
case 0x6be638:c.instructions+=1;goto B6be638;
case 0x6be63a:goto L6be63a;
case 0x6be63d:c.instructions+=7;goto B6be63d;
case 0x6be63f:c.instructions+=6;goto B6be63f;
case 0x6be641:c.instructions+=5;goto B6be641;
case 0x6be644:c.instructions+=4;goto B6be644;
case 0x6be645:c.instructions+=3;goto B6be645;
case 0x6be646:c.instructions+=2;goto B6be646;
case 0x6be64b:c.instructions+=1;goto B6be64b;
case 0x6be650:goto L6be650;
case 0x6be652:c.instructions+=2;goto B6be652;
case 0x6be654:c.instructions+=1;goto B6be654;
case 0x6be65a:goto L6be65a;
case 0x6be65d:c.instructions+=20;goto B6be65d;
case 0x6be660:c.instructions+=19;goto B6be660;
case 0x6be663:c.instructions+=18;goto B6be663;
case 0x6be666:c.instructions+=17;goto B6be666;
case 0x6be668:c.instructions+=16;goto B6be668;
case 0x6be66b:c.instructions+=15;goto B6be66b;
case 0x6be66e:c.instructions+=14;goto B6be66e;
case 0x6be670:c.instructions+=13;goto B6be670;
case 0x6be673:c.instructions+=12;goto B6be673;
case 0x6be675:c.instructions+=11;goto B6be675;
case 0x6be678:c.instructions+=10;goto B6be678;
case 0x6be67e:c.instructions+=9;goto B6be67e;
case 0x6be681:c.instructions+=8;goto B6be681;
case 0x6be683:c.instructions+=7;goto B6be683;
case 0x6be686:c.instructions+=6;goto B6be686;
case 0x6be689:c.instructions+=5;goto B6be689;
case 0x6be68b:c.instructions+=4;goto B6be68b;
case 0x6be68d:c.instructions+=3;goto B6be68d;
case 0x6be690:c.instructions+=2;goto B6be690;
case 0x6be691:c.instructions+=1;goto B6be691;
case 0x6be693:goto L6be693;
case 0x6be695:goto L6be695;
case 0x6be69b:goto L6be69b;
case 0x6be69e:c.instructions+=3;goto B6be69e;
case 0x6be6a1:c.instructions+=2;goto B6be6a1;
case 0x6be6a4:c.instructions+=1;goto B6be6a4;
case 0x6be6a6:goto L6be6a6;
case 0x6be6a9:c.instructions+=2;goto B6be6a9;
case 0x6be6ac:c.instructions+=1;goto B6be6ac;
case 0x6be6b2:goto L6be6b2;
case 0x6be6b4:c.instructions+=1;goto B6be6b4;
case 0x6be6b9:goto L6be6b9;
case 0x6be6bb:c.instructions+=1;goto B6be6bb;
case 0x6be6bd:goto L6be6bd;
case 0x6be6bf:c.instructions+=1;goto B6be6bf;
case 0x6be6c4:goto L6be6c4;
case 0x6be6c6:c.instructions+=2;goto B6be6c6;
case 0x6be6c9:c.instructions+=1;goto B6be6c9;
case 0x6be6cb:goto L6be6cb;
case 0x6be6cf:c.instructions+=1;goto B6be6cf;
case 0x6be6d2:goto L6be6d2;
case 0x6be6d4:c.instructions+=1;goto B6be6d4;
case 0x6be6d6:goto L6be6d6;
case 0x6be6db:c.instructions+=1;goto B6be6db;
case 0x6be6e0:goto L6be6e0;
case 0x6be6e3:c.instructions+=9;goto B6be6e3;
case 0x6be6e5:c.instructions+=8;goto B6be6e5;
case 0x6be6e8:c.instructions+=7;goto B6be6e8;
case 0x6be6ed:c.instructions+=6;goto B6be6ed;
case 0x6be6f0:c.instructions+=5;goto B6be6f0;
case 0x6be6f3:c.instructions+=4;goto B6be6f3;
case 0x6be6f8:c.instructions+=3;goto B6be6f8;
case 0x6be6f9:c.instructions+=2;goto B6be6f9;
case 0x6be6fb:c.instructions+=1;goto B6be6fb;
case 0x6be700:goto L6be700;
case 0x6be702:c.instructions+=1;goto B6be702;
case 0x6be708:goto L6be708;
case 0x6be709:c.instructions+=2;goto B6be709;
case 0x6be70b:c.instructions+=1;goto B6be70b;
case 0x6be710:goto L6be710;
case 0x6be712:c.instructions+=1;goto B6be712;
case 0x6be718:goto L6be718;
case 0x6be71b:c.instructions+=4;goto B6be71b;
case 0x6be71e:c.instructions+=3;goto B6be71e;
case 0x6be721:c.instructions+=2;goto B6be721;
case 0x6be723:c.instructions+=1;goto B6be723;
case 0x6be726:goto L6be726;
case 0x6be728:goto L6be728;
case 0x6be72a:c.instructions+=1;goto B6be72a;
case 0x6be72d:goto L6be72d;
case 0x6be72f:goto L6be72f;
case 0x6be732:c.instructions+=6;goto B6be732;
case 0x6be734:c.instructions+=5;goto B6be734;
case 0x6be736:c.instructions+=4;goto B6be736;
case 0x6be739:c.instructions+=3;goto B6be739;
case 0x6be73c:c.instructions+=2;goto B6be73c;
case 0x6be73e:c.instructions+=1;goto B6be73e;
case 0x6be741:goto L6be741;
case 0x6be743:goto L6be743;
case 0x6be745:c.instructions+=1;goto B6be745;
case 0x6be748:goto L6be748;
case 0x6be74a:goto L6be74a;
case 0x6be74d:c.instructions+=5;goto B6be74d;
case 0x6be74f:c.instructions+=4;goto B6be74f;
case 0x6be751:c.instructions+=3;goto B6be751;
case 0x6be752:c.instructions+=2;goto B6be752;
case 0x6be754:c.instructions+=1;goto B6be754;
case 0x6be757:goto L6be757;
case 0x6be759:c.instructions+=1;goto B6be759;
case 0x6be75b:goto L6be75b;
case 0x6be75e:c.instructions+=9;goto B6be75e;
case 0x6be761:c.instructions+=8;goto B6be761;
case 0x6be764:c.instructions+=7;goto B6be764;
case 0x6be767:c.instructions+=6;goto B6be767;
case 0x6be76a:c.instructions+=5;goto B6be76a;
case 0x6be76d:c.instructions+=4;goto B6be76d;
case 0x6be76f:c.instructions+=3;goto B6be76f;
case 0x6be772:c.instructions+=2;goto B6be772;
case 0x6be774:c.instructions+=1;goto B6be774;
case 0x6be777:goto L6be777;
case 0x6be779:c.instructions+=1;goto B6be779;
case 0x6be77b:goto L6be77b;
case 0x6be77e:c.instructions+=4;goto B6be77e;
case 0x6be781:c.instructions+=3;goto B6be781;
case 0x6be784:c.instructions+=2;goto B6be784;
case 0x6be786:c.instructions+=1;goto B6be786;
case 0x6be788:goto L6be788;
case 0x6be78a:c.instructions+=1;goto B6be78a;
case 0x6be78f:goto L6be78f;
case 0x6be792:c.instructions+=4;goto B6be792;
case 0x6be795:c.instructions+=3;goto B6be795;
case 0x6be798:c.instructions+=2;goto B6be798;
case 0x6be79b:c.instructions+=1;goto B6be79b;
case 0x6be79d:goto L6be79d;
case 0x6be7a0:c.instructions+=5;goto B6be7a0;
case 0x6be7a6:c.instructions+=4;goto B6be7a6;
case 0x6be7a9:c.instructions+=3;goto B6be7a9;
case 0x6be7ae:c.instructions+=2;goto B6be7ae;
case 0x6be7b4:c.instructions+=1;goto B6be7b4;
case 0x6be7b6:goto L6be7b6;
case 0x6be7b9:c.instructions+=2;goto B6be7b9;
case 0x6be7bb:c.instructions+=1;goto B6be7bb;
case 0x6be7c0:goto L6be7c0;
case 0x6be7c2:goto L6be7c2;
case 0x6be7c3:c.instructions+=4;goto B6be7c3;
case 0x6be7c4:c.instructions+=3;goto B6be7c4;
case 0x6be7c5:c.instructions+=2;goto B6be7c5;
case 0x6be7c6:c.instructions+=1;goto B6be7c6;
case 0x6be7c7:goto L6be7c7;
case 0x6be7c9:c.instructions+=4;goto B6be7c9;
case 0x6be7ca:c.instructions+=3;goto B6be7ca;
case 0x6be7cc:c.instructions+=2;goto B6be7cc;
case 0x6be7d3:c.instructions+=1;goto B6be7d3;
case 0x6be7d5:goto L6be7d5;
case 0x6be7db:c.instructions+=2;goto B6be7db;
case 0x6be7e0:c.instructions+=1;goto B6be7e0;
case 0x6be7e1:goto L6be7e1;
case 0x6be7e6:goto L6be7e6;
case 0x6be7e8:c.instructions+=1;goto B6be7e8;
case 0x6be7ea:goto L6be7ea;
case 0x6be7ec:c.instructions+=1;goto B6be7ec;
case 0x6be7f1:goto L6be7f1;
case 0x6be7f3:c.instructions+=1;goto B6be7f3;
case 0x6be7f5:goto L6be7f5;
case 0x6be7f7:goto L6be7f7;
case 0x6be7f8:c.instructions+=1;goto B6be7f8;
case 0x6be7f9:goto L6be7f9;
case 0x6be7ff:c.instructions+=1;goto B6be7ff;
case 0x6be801:goto L6be801;
case 0x6be803:c.instructions+=11;goto B6be803;
case 0x6be804:c.instructions+=10;goto B6be804;
case 0x6be806:c.instructions+=9;goto B6be806;
case 0x6be809:c.instructions+=8;goto B6be809;
case 0x6be80a:c.instructions+=7;goto B6be80a;
case 0x6be80d:c.instructions+=6;goto B6be80d;
case 0x6be80e:c.instructions+=5;goto B6be80e;
case 0x6be80f:c.instructions+=4;goto B6be80f;
case 0x6be812:c.instructions+=3;goto B6be812;
case 0x6be814:c.instructions+=2;goto B6be814;
case 0x6be816:c.instructions+=1;goto B6be816;
case 0x6be819:goto L6be819;
case 0x6be81c:c.instructions+=4;goto B6be81c;
case 0x6be81f:c.instructions+=3;goto B6be81f;
case 0x6be821:c.instructions+=2;goto B6be821;
case 0x6be823:c.instructions+=1;goto B6be823;
case 0x6be826:goto L6be826;
case 0x6be82d:c.instructions+=2;goto B6be82d;
case 0x6be82f:c.instructions+=1;goto B6be82f;
case 0x6be835:goto L6be835;
case 0x6be839:c.instructions+=1;goto B6be839;
case 0x6be83f:goto L6be83f;
case 0x6be846:c.instructions+=1;goto B6be846;
case 0x6be84c:goto L6be84c;
case 0x6be84f:c.instructions+=2;goto B6be84f;
case 0x6be851:c.instructions+=1;goto B6be851;
case 0x6be856:goto L6be856;
case 0x6be857:c.instructions+=6;goto B6be857;
case 0x6be859:c.instructions+=5;goto B6be859;
case 0x6be85c:c.instructions+=4;goto B6be85c;
case 0x6be861:c.instructions+=3;goto B6be861;
case 0x6be863:c.instructions+=2;goto B6be863;
case 0x6be864:c.instructions+=1;goto B6be864;
case 0x6be869:goto L6be869;
case 0x6be86c:c.instructions+=7;goto B6be86c;
case 0x6be86e:c.instructions+=6;goto B6be86e;
case 0x6be871:c.instructions+=5;goto B6be871;
case 0x6be874:c.instructions+=4;goto B6be874;
case 0x6be87a:c.instructions+=3;goto B6be87a;
case 0x6be87b:c.instructions+=2;goto B6be87b;
case 0x6be87f:c.instructions+=1;goto B6be87f;
case 0x6be884:goto L6be884;
case 0x6be886:c.instructions+=1;goto B6be886;
case 0x6be88c:goto L6be88c;
case 0x6be892:c.instructions+=2;goto B6be892;
case 0x6be899:c.instructions+=1;goto B6be899;
case 0x6be89f:goto L6be89f;
case 0x6be8a2:c.instructions+=2;goto B6be8a2;
case 0x6be8a4:c.instructions+=1;goto B6be8a4;
case 0x6be8a6:goto L6be8a6;
case 0x6be8aa:c.instructions+=1;goto B6be8aa;
case 0x6be8ac:goto L6be8ac;
case 0x6be8af:c.instructions+=2;goto B6be8af;
case 0x6be8b3:c.instructions+=1;goto B6be8b3;
case 0x6be8b5:goto L6be8b5;
case 0x6be8b8:c.instructions+=1;goto B6be8b8;
case 0x6be8bb:goto L6be8bb;
case 0x6be8bd:c.instructions+=3;goto B6be8bd;
case 0x6be8be:c.instructions+=2;goto B6be8be;
case 0x6be8c0:c.instructions+=1;goto B6be8c0;
case 0x6be8c2:goto L6be8c2;
case 0x6be8c4:c.instructions+=3;goto B6be8c4;
case 0x6be8c7:c.instructions+=2;goto B6be8c7;
case 0x6be8c8:c.instructions+=1;goto B6be8c8;
case 0x6be8cd:goto L6be8cd;
case 0x6be8cf:c.instructions+=3;goto B6be8cf;
case 0x6be8d0:c.instructions+=2;goto B6be8d0;
case 0x6be8d3:c.instructions+=1;goto B6be8d3;
case 0x6be8d5:goto L6be8d5;
case 0x6be8da:c.instructions+=1;goto B6be8da;
case 0x6be8df:goto L6be8df;
case 0x6be8e2:c.instructions+=3;goto B6be8e2;
case 0x6be8e7:c.instructions+=2;goto B6be8e7;
case 0x6be8e8:c.instructions+=1;goto B6be8e8;
case 0x6be8ed:goto L6be8ed;
case 0x6be8f0:c.instructions+=5;goto B6be8f0;
case 0x6be8f2:c.instructions+=4;goto B6be8f2;
case 0x6be8f5:c.instructions+=3;goto B6be8f5;
case 0x6be8fb:c.instructions+=2;goto B6be8fb;
case 0x6be8fe:c.instructions+=1;goto B6be8fe;
case 0x6be903:goto L6be903;
case 0x6be906:c.instructions+=2;goto B6be906;
case 0x6be908:c.instructions+=1;goto B6be908;
case 0x6be90d:goto L6be90d;
case 0x6be90f:c.instructions+=2;goto B6be90f;
case 0x6be910:c.instructions+=1;goto B6be910;
case 0x6be912:goto L6be912;
case 0x6be914:c.instructions+=1;goto B6be914;
case 0x6be919:goto L6be919;
case 0x6be91f:goto L6be91f;
case 0x6be922:c.instructions+=2;goto B6be922;
case 0x6be924:c.instructions+=1;goto B6be924;
case 0x6be92a:goto L6be92a;
case 0x6be92d:c.instructions+=1;goto B6be92d;
case 0x6be932:goto L6be932;
case 0x6be935:c.instructions+=2;goto B6be935;
case 0x6be938:c.instructions+=1;goto B6be938;
case 0x6be93e:goto L6be93e;
case 0x6be945:goto L6be945;
case 0x6be949:goto L6be949;
case 0x6be94c:c.instructions+=1;goto B6be94c;
case 0x6be952:goto L6be952;
case 0x6be958:c.instructions+=5;goto B6be958;
case 0x6be95b:c.instructions+=4;goto B6be95b;
case 0x6be95e:c.instructions+=3;goto B6be95e;
case 0x6be960:c.instructions+=2;goto B6be960;
case 0x6be962:c.instructions+=1;goto B6be962;
case 0x6be967:goto L6be967;
case 0x6be969:c.instructions+=1;goto B6be969;
case 0x6be96f:goto L6be96f;
case 0x6be972:c.instructions+=2;goto B6be972;
case 0x6be974:c.instructions+=1;goto B6be974;
case 0x6be979:goto L6be979;
case 0x6be97b:c.instructions+=1;goto B6be97b;
case 0x6be981:goto L6be981;
case 0x6be988:c.instructions+=1;goto B6be988;
case 0x6be98e:goto L6be98e;
case 0x6be992:c.instructions+=9;goto B6be992;
case 0x6be996:c.instructions+=8;goto B6be996;
case 0x6be999:c.instructions+=7;goto B6be999;
case 0x6be99d:c.instructions+=6;goto B6be99d;
case 0x6be9a0:c.instructions+=5;goto B6be9a0;
case 0x6be9a1:c.instructions+=4;goto B6be9a1;
case 0x6be9a2:c.instructions+=3;goto B6be9a2;
case 0x6be9a3:c.instructions+=2;goto B6be9a3;
case 0x6be9a4:c.instructions+=1;goto B6be9a4;
case 0x6be9a6:goto L6be9a6;
case 0x6be9a9:c.instructions+=1;goto B6be9a9;
case 0x6be9ac:goto L6be9ac;
case 0x6be9ae:c.instructions+=2;goto B6be9ae;
case 0x6be9b1:c.instructions+=1;goto B6be9b1;
case 0x6be9b3:goto L6be9b3;
case 0x6be9b6:c.instructions+=2;goto B6be9b6;
case 0x6be9b9:c.instructions+=1;goto B6be9b9;
case 0x6be9bb:goto L6be9bb;
case 0x6be9be:c.instructions+=2;goto B6be9be;
case 0x6be9c1:c.instructions+=1;goto B6be9c1;
case 0x6be9c3:goto L6be9c3;
case 0x6be9c6:c.instructions+=2;goto B6be9c6;
case 0x6be9c9:c.instructions+=1;goto B6be9c9;
case 0x6be9cd:goto L6be9cd;
case 0x6be9d0:c.instructions+=4;goto B6be9d0;
case 0x6be9d3:c.instructions+=3;goto B6be9d3;
case 0x6be9d6:c.instructions+=2;goto B6be9d6;
case 0x6be9d9:c.instructions+=1;goto B6be9d9;
case 0x6be9db:goto L6be9db;
case 0x6be9de:c.instructions+=1;goto B6be9de;
case 0x6be9e0:goto L6be9e0;
case 0x6be9e4:c.instructions+=2;goto B6be9e4;
case 0x6be9e7:c.instructions+=1;goto B6be9e7;
case 0x6be9e9:goto L6be9e9;
case 0x6be9ed:c.instructions+=1;goto B6be9ed;
case 0x6be9ee:goto L6be9ee;
case 0x6be9ef:c.instructions+=2;goto B6be9ef;
case 0x6be9f2:c.instructions+=1;goto B6be9f2;
case 0x6be9f4:goto L6be9f4;
case 0x6be9f6:c.instructions+=8;goto B6be9f6;
case 0x6be9f8:c.instructions+=7;goto B6be9f8;
case 0x6be9fb:c.instructions+=6;goto B6be9fb;
case 0x6be9fc:c.instructions+=5;goto B6be9fc;
case 0x6be9fd:c.instructions+=4;goto B6be9fd;
case 0x6bea00:c.instructions+=3;goto B6bea00;
case 0x6bea01:c.instructions+=2;goto B6bea01;
case 0x6bea03:c.instructions+=1;goto B6bea03;
case 0x6bea06:goto L6bea06;
case 0x6bea08:c.instructions+=1;goto B6bea08;
case 0x6bea0e:goto L6bea0e;
case 0x6bea10:c.instructions+=7;goto B6bea10;
case 0x6bea13:c.instructions+=6;goto B6bea13;
case 0x6bea14:c.instructions+=5;goto B6bea14;
case 0x6bea17:c.instructions+=4;goto B6bea17;
case 0x6bea18:c.instructions+=3;goto B6bea18;
case 0x6bea19:c.instructions+=2;goto B6bea19;
case 0x6bea1b:c.instructions+=1;goto B6bea1b;
case 0x6bea21:goto L6bea21;
case 0x6bea23:c.instructions+=1;goto B6bea23;
case 0x6bea29:goto L6bea29;
case 0x6bea2c:c.instructions+=15;goto B6bea2c;
case 0x6bea2e:c.instructions+=14;goto B6bea2e;
case 0x6bea30:c.instructions+=13;goto B6bea30;
case 0x6bea33:c.instructions+=12;goto B6bea33;
case 0x6bea36:c.instructions+=11;goto B6bea36;
case 0x6bea39:c.instructions+=10;goto B6bea39;
case 0x6bea3b:c.instructions+=9;goto B6bea3b;
case 0x6bea3e:c.instructions+=8;goto B6bea3e;
case 0x6bea40:c.instructions+=7;goto B6bea40;
case 0x6bea43:c.instructions+=6;goto B6bea43;
case 0x6bea48:c.instructions+=5;goto B6bea48;
case 0x6bea4a:c.instructions+=4;goto B6bea4a;
case 0x6bea4f:c.instructions+=3;goto B6bea4f;
case 0x6bea50:c.instructions+=2;goto B6bea50;
case 0x6bea52:c.instructions+=1;goto B6bea52;
case 0x6bea55:goto L6bea55;
case 0x6bea57:c.instructions+=1;goto B6bea57;
case 0x6bea5d:goto L6bea5d;
case 0x6bea5f:c.instructions+=2;goto B6bea5f;
case 0x6bea61:c.instructions+=1;goto B6bea61;
case 0x6bea64:goto L6bea64;
case 0x6bea66:c.instructions+=1;goto B6bea66;
case 0x6bea6c:goto L6bea6c;
case 0x6bea6e:c.instructions+=1;goto B6bea6e;
case 0x6bea73:goto L6bea73;
case 0x6bea75:c.instructions+=1;goto B6bea75;
case 0x6bea77:goto L6bea77;
case 0x6bea7a:c.instructions+=2;goto B6bea7a;
case 0x6bea7c:c.instructions+=1;goto B6bea7c;
case 0x6bea7e:goto L6bea7e;
case 0x6bea81:goto L6bea81;
case 0x6bea83:goto L6bea83;
case 0x6bea85:c.instructions+=1;goto B6bea85;
case 0x6bea87:goto L6bea87;
case 0x6bea8e:c.instructions+=1;goto B6bea8e;
case 0x6bea93:goto L6bea93;
case 0x6bea9a:c.instructions+=1;goto B6bea9a;
case 0x6bea9f:goto L6bea9f;
case 0x6beaa6:c.instructions+=1;goto B6beaa6;
case 0x6beaab:goto L6beaab;
case 0x6beab2:c.instructions+=1;goto B6beab2;
case 0x6beab7:goto L6beab7;
case 0x6beabe:c.instructions+=1;goto B6beabe;
case 0x6beac3:goto L6beac3;
case 0x6beaca:c.instructions+=1;goto B6beaca;
case 0x6beacf:goto L6beacf;
case 0x6bead6:c.instructions+=1;goto B6bead6;
case 0x6beadb:goto L6beadb;
case 0x6beadd:c.instructions+=2;goto B6beadd;
case 0x6beae4:c.instructions+=1;goto B6beae4;
case 0x6beaea:goto L6beaea;
case 0x6beaef:goto L6beaef;
case 0x6beaf0:c.instructions+=4;goto B6beaf0;
case 0x6beaf1:c.instructions+=3;goto B6beaf1;
case 0x6beaf2:c.instructions+=2;goto B6beaf2;
case 0x6beaf3:c.instructions+=1;goto B6beaf3;
case 0x6beaf6:goto L6beaf6;
case 0x6beafd:c.instructions+=1;goto B6beafd;
case 0x6beb02:goto L6beb02;
case 0x6beb09:c.instructions+=1;goto B6beb09;
case 0x6beb0e:goto L6beb0e;
case 0x6beb15:c.instructions+=1;goto B6beb15;
case 0x6beb1a:goto L6beb1a;
case 0x6beb21:c.instructions+=1;goto B6beb21;
case 0x6beb26:goto L6beb26;
case 0x6beb2d:c.instructions+=1;goto B6beb2d;
case 0x6beb32:goto L6beb32;
case 0x6beb34:c.instructions+=2;goto B6beb34;
case 0x6beb35:c.instructions+=1;goto B6beb35;
case 0x6beb73:goto L6beb73;
case 0x6beb75:c.instructions+=13;goto B6beb75;
case 0x6beb76:c.instructions+=12;goto B6beb76;
case 0x6beb78:c.instructions+=11;goto B6beb78;
case 0x6beb7b:c.instructions+=10;goto B6beb7b;
case 0x6beb7c:c.instructions+=9;goto B6beb7c;
case 0x6beb7d:c.instructions+=8;goto B6beb7d;
case 0x6beb7f:c.instructions+=7;goto B6beb7f;
case 0x6beb85:c.instructions+=6;goto B6beb85;
case 0x6beb88:c.instructions+=5;goto B6beb88;
case 0x6beb89:c.instructions+=4;goto B6beb89;
case 0x6beb8b:c.instructions+=3;goto B6beb8b;
case 0x6beb8e:c.instructions+=2;goto B6beb8e;
case 0x6beb91:c.instructions+=1;goto B6beb91;
case 0x6beb97:goto L6beb97;
case 0x6beb99:c.instructions+=8;goto B6beb99;
case 0x6beb9a:c.instructions+=7;goto B6beb9a;
case 0x6beb9b:c.instructions+=6;goto B6beb9b;
case 0x6beb9d:c.instructions+=5;goto B6beb9d;
case 0x6beba0:c.instructions+=4;goto B6beba0;
case 0x6beba1:c.instructions+=3;goto B6beba1;
case 0x6beba7:c.instructions+=2;goto B6beba7;
case 0x6beba9:c.instructions+=1;goto B6beba9;
case 0x6bebaf:goto L6bebaf;
case 0x6bebb1:c.instructions+=1;goto B6bebb1;
case 0x6bebb7:goto L6bebb7;
case 0x6bebbd:c.instructions+=14;goto B6bebbd;
case 0x6bebbe:c.instructions+=13;goto B6bebbe;
case 0x6bebbf:c.instructions+=12;goto B6bebbf;
case 0x6bebc0:c.instructions+=11;goto B6bebc0;
case 0x6bebc1:c.instructions+=10;goto B6bebc1;
case 0x6bebc3:c.instructions+=9;goto B6bebc3;
case 0x6bebc4:c.instructions+=8;goto B6bebc4;
case 0x6bebc5:c.instructions+=7;goto B6bebc5;
case 0x6bebc8:c.instructions+=6;goto B6bebc8;
case 0x6bebcb:c.instructions+=5;goto B6bebcb;
case 0x6bebcd:c.instructions+=4;goto B6bebcd;
case 0x6bebce:c.instructions+=3;goto B6bebce;
case 0x6bebd0:c.instructions+=2;goto B6bebd0;
case 0x6bebd2:c.instructions+=1;goto B6bebd2;
case 0x6bebd7:goto L6bebd7;
case 0x6bebd9:c.instructions+=1;goto B6bebd9;
case 0x6bebdf:goto L6bebdf;
case 0x6bebe5:c.instructions+=3;goto B6bebe5;
case 0x6bebe7:c.instructions+=2;goto B6bebe7;
case 0x6bebea:c.instructions+=1;goto B6bebea;
case 0x6bebec:goto L6bebec;
case 0x6bebef:c.instructions+=4;goto B6bebef;
case 0x6bebf3:c.instructions+=3;goto B6bebf3;
case 0x6bebf4:c.instructions+=2;goto B6bebf4;
case 0x6bebf7:c.instructions+=1;goto B6bebf7;
case 0x6bebf9:goto L6bebf9;
case 0x6bebff:c.instructions+=15;goto B6bebff;
case 0x6bec02:c.instructions+=14;goto B6bec02;
case 0x6bec03:c.instructions+=13;goto B6bec03;
case 0x6bec04:c.instructions+=12;goto B6bec04;
case 0x6bec05:c.instructions+=11;goto B6bec05;
case 0x6bec06:c.instructions+=10;goto B6bec06;
case 0x6bec07:c.instructions+=9;goto B6bec07;
case 0x6bec08:c.instructions+=8;goto B6bec08;
case 0x6bec09:c.instructions+=7;goto B6bec09;
case 0x6bec0c:c.instructions+=6;goto B6bec0c;
case 0x6bec0d:c.instructions+=5;goto B6bec0d;
case 0x6bec0e:c.instructions+=4;goto B6bec0e;
case 0x6bec11:c.instructions+=3;goto B6bec11;
case 0x6bec13:c.instructions+=2;goto B6bec13;
case 0x6bec15:c.instructions+=1;goto B6bec15;
case 0x6bec1a:goto L6bec1a;
case 0x6bec1c:c.instructions+=1;goto B6bec1c;
case 0x6bec22:goto L6bec22;
case 0x6bec27:goto L6bec27;
case 0x6bec2a:goto L6bec2a;
case 0x6bec30:c.instructions+=5;goto B6bec30;
case 0x6bec33:c.instructions+=4;goto B6bec33;
case 0x6bec35:c.instructions+=3;goto B6bec35;
case 0x6bec38:c.instructions+=2;goto B6bec38;
case 0x6bec3b:c.instructions+=1;goto B6bec3b;
case 0x6bec41:goto L6bec41;
case 0x6bec48:c.instructions+=1;goto B6bec48;
case 0x6bec4f:goto L6bec4f;
case 0x6bec52:c.instructions+=10;goto B6bec52;
case 0x6bec55:c.instructions+=9;goto B6bec55;
case 0x6bec58:c.instructions+=8;goto B6bec58;
case 0x6bec5b:c.instructions+=7;goto B6bec5b;
case 0x6bec5d:c.instructions+=6;goto B6bec5d;
case 0x6bec5f:c.instructions+=5;goto B6bec5f;
case 0x6bec62:c.instructions+=4;goto B6bec62;
case 0x6bec65:c.instructions+=3;goto B6bec65;
case 0x6bec68:c.instructions+=2;goto B6bec68;
case 0x6bec6b:c.instructions+=1;goto B6bec6b;
case 0x6bec6d:goto L6bec6d;
case 0x6bec70:c.instructions+=2;goto B6bec70;
case 0x6bec73:c.instructions+=1;goto B6bec73;
case 0x6bec75:goto L6bec75;
case 0x6bec79:c.instructions+=1;goto B6bec79;
case 0x6bec7f:goto L6bec7f;
case 0x6bec85:c.instructions+=16;goto B6bec85;
case 0x6bec88:c.instructions+=15;goto B6bec88;
case 0x6bec8b:c.instructions+=14;goto B6bec8b;
case 0x6bec8c:c.instructions+=13;goto B6bec8c;
case 0x6bec8d:c.instructions+=12;goto B6bec8d;
case 0x6bec8e:c.instructions+=11;goto B6bec8e;
case 0x6bec8f:c.instructions+=10;goto B6bec8f;
case 0x6bec91:c.instructions+=9;goto B6bec91;
case 0x6bec92:c.instructions+=8;goto B6bec92;
case 0x6bec93:c.instructions+=7;goto B6bec93;
case 0x6bec95:c.instructions+=6;goto B6bec95;
case 0x6bec96:c.instructions+=5;goto B6bec96;
case 0x6bec98:c.instructions+=4;goto B6bec98;
case 0x6bec9a:c.instructions+=3;goto B6bec9a;
case 0x6bec9b:c.instructions+=2;goto B6bec9b;
case 0x6bec9d:c.instructions+=1;goto B6bec9d;
case 0x6beca2:goto L6beca2;
case 0x6beca5:c.instructions+=2;goto B6beca5;
case 0x6beca8:c.instructions+=1;goto B6beca8;
case 0x6becae:goto L6becae;
case 0x6becb1:c.instructions+=1;goto B6becb1;
case 0x6becb7:goto L6becb7;
case 0x6becba:c.instructions+=1;goto B6becba;
case 0x6becbc:goto L6becbc;
case 0x6becbe:c.instructions+=8;goto B6becbe;
case 0x6becbf:c.instructions+=7;goto B6becbf;
case 0x6becc0:c.instructions+=6;goto B6becc0;
case 0x6becc2:c.instructions+=5;goto B6becc2;
case 0x6becc5:c.instructions+=4;goto B6becc5;
case 0x6becc6:c.instructions+=3;goto B6becc6;
case 0x6beccc:c.instructions+=2;goto B6beccc;
case 0x6becce:c.instructions+=1;goto B6becce;
case 0x6becd4:goto L6becd4;
case 0x6becd6:c.instructions+=1;goto B6becd6;
case 0x6becdc:goto L6becdc;
case 0x6bece3:goto L6bece3;
case 0x6bece9:c.instructions+=16;goto B6bece9;
case 0x6becec:c.instructions+=15;goto B6becec;
case 0x6beced:c.instructions+=14;goto B6beced;
case 0x6becee:c.instructions+=13;goto B6becee;
case 0x6becef:c.instructions+=12;goto B6becef;
case 0x6becf0:c.instructions+=11;goto B6becf0;
case 0x6becf2:c.instructions+=10;goto B6becf2;
case 0x6becf3:c.instructions+=9;goto B6becf3;
case 0x6becf4:c.instructions+=8;goto B6becf4;
case 0x6becf6:c.instructions+=7;goto B6becf6;
case 0x6becf7:c.instructions+=6;goto B6becf7;
case 0x6becf9:c.instructions+=5;goto B6becf9;
case 0x6becfc:c.instructions+=4;goto B6becfc;
case 0x6becfd:c.instructions+=3;goto B6becfd;
case 0x6becff:c.instructions+=2;goto B6becff;
case 0x6bed01:c.instructions+=1;goto B6bed01;
case 0x6bed06:goto L6bed06;
case 0x6bed08:c.instructions+=1;goto B6bed08;
case 0x6bed0e:goto L6bed0e;
case 0x6bed0f:c.instructions+=14;goto B6bed0f;
case 0x6bed10:c.instructions+=13;goto B6bed10;
case 0x6bed11:c.instructions+=12;goto B6bed11;
case 0x6bed12:c.instructions+=11;goto B6bed12;
case 0x6bed14:c.instructions+=10;goto B6bed14;
case 0x6bed15:c.instructions+=9;goto B6bed15;
case 0x6bed16:c.instructions+=8;goto B6bed16;
case 0x6bed19:c.instructions+=7;goto B6bed19;
case 0x6bed1a:c.instructions+=6;goto B6bed1a;
case 0x6bed20:c.instructions+=5;goto B6bed20;
case 0x6bed23:c.instructions+=4;goto B6bed23;
case 0x6bed25:c.instructions+=3;goto B6bed25;
case 0x6bed27:c.instructions+=2;goto B6bed27;
case 0x6bed28:c.instructions+=1;goto B6bed28;
case 0x6bed2a:goto L6bed2a;
case 0x6bed2c:c.instructions+=1;goto B6bed2c;
case 0x6bed31:goto L6bed31;
case 0x6bed33:c.instructions+=1;goto B6bed33;
case 0x6bed39:goto L6bed39;
case 0x6bed3c:c.instructions+=3;goto B6bed3c;
case 0x6bed3f:c.instructions+=2;goto B6bed3f;
case 0x6bed42:c.instructions+=1;goto B6bed42;
case 0x6bed47:goto L6bed47;
case 0x6bed4a:c.instructions+=1;goto B6bed4a;
case 0x6bed4c:goto L6bed4c;
case 0x6bed4f:c.instructions+=4;goto B6bed4f;
case 0x6bed52:c.instructions+=3;goto B6bed52;
case 0x6bed55:c.instructions+=2;goto B6bed55;
case 0x6bed59:c.instructions+=1;goto B6bed59;
case 0x6bed5b:goto L6bed5b;
case 0x6bed5f:c.instructions+=1;goto B6bed5f;
case 0x6bed65:goto L6bed65;
case 0x6bed6b:c.instructions+=16;goto B6bed6b;
case 0x6bed6e:c.instructions+=15;goto B6bed6e;
case 0x6bed71:c.instructions+=14;goto B6bed71;
case 0x6bed72:c.instructions+=13;goto B6bed72;
case 0x6bed73:c.instructions+=12;goto B6bed73;
case 0x6bed74:c.instructions+=11;goto B6bed74;
case 0x6bed75:c.instructions+=10;goto B6bed75;
case 0x6bed77:c.instructions+=9;goto B6bed77;
case 0x6bed78:c.instructions+=8;goto B6bed78;
case 0x6bed79:c.instructions+=7;goto B6bed79;
case 0x6bed7b:c.instructions+=6;goto B6bed7b;
case 0x6bed7c:c.instructions+=5;goto B6bed7c;
case 0x6bed7e:c.instructions+=4;goto B6bed7e;
case 0x6bed80:c.instructions+=3;goto B6bed80;
case 0x6bed81:c.instructions+=2;goto B6bed81;
case 0x6bed83:c.instructions+=1;goto B6bed83;
case 0x6bed85:goto L6bed85;
case 0x6bed88:c.instructions+=1;goto B6bed88;
case 0x6bed8a:goto L6bed8a;
case 0x6bed8d:c.instructions+=1;goto B6bed8d;
case 0x6bed8f:goto L6bed8f;
case 0x6bed91:c.instructions+=8;goto B6bed91;
case 0x6bed92:c.instructions+=7;goto B6bed92;
case 0x6bed93:c.instructions+=6;goto B6bed93;
case 0x6bed95:c.instructions+=5;goto B6bed95;
case 0x6bed98:c.instructions+=4;goto B6bed98;
case 0x6bed99:c.instructions+=3;goto B6bed99;
case 0x6bed9f:c.instructions+=2;goto B6bed9f;
case 0x6beda1:c.instructions+=1;goto B6beda1;
case 0x6beda7:goto L6beda7;
case 0x6beda9:c.instructions+=1;goto B6beda9;
case 0x6bedaf:goto L6bedaf;
case 0x6bedb6:goto L6bedb6;
case 0x6bedbc:c.instructions+=16;goto B6bedbc;
case 0x6bedbf:c.instructions+=15;goto B6bedbf;
case 0x6bedc0:c.instructions+=14;goto B6bedc0;
case 0x6bedc1:c.instructions+=13;goto B6bedc1;
case 0x6bedc2:c.instructions+=12;goto B6bedc2;
case 0x6bedc3:c.instructions+=11;goto B6bedc3;
case 0x6bedc5:c.instructions+=10;goto B6bedc5;
case 0x6bedc6:c.instructions+=9;goto B6bedc6;
case 0x6bedc7:c.instructions+=8;goto B6bedc7;
case 0x6bedc9:c.instructions+=7;goto B6bedc9;
case 0x6bedca:c.instructions+=6;goto B6bedca;
case 0x6bedcc:c.instructions+=5;goto B6bedcc;
case 0x6bedcf:c.instructions+=4;goto B6bedcf;
case 0x6bedd0:c.instructions+=3;goto B6bedd0;
case 0x6bedd2:c.instructions+=2;goto B6bedd2;
case 0x6bedd4:c.instructions+=1;goto B6bedd4;
case 0x6bedd9:goto L6bedd9;
case 0x6beddb:c.instructions+=1;goto B6beddb;
case 0x6beddd:goto L6beddd;
case 0x6bedde:c.instructions+=14;goto B6bedde;
case 0x6beddf:c.instructions+=13;goto B6beddf;
case 0x6bede0:c.instructions+=12;goto B6bede0;
case 0x6bede1:c.instructions+=11;goto B6bede1;
case 0x6bede3:c.instructions+=10;goto B6bede3;
case 0x6bede4:c.instructions+=9;goto B6bede4;
case 0x6bede5:c.instructions+=8;goto B6bede5;
case 0x6bede8:c.instructions+=7;goto B6bede8;
case 0x6bede9:c.instructions+=6;goto B6bede9;
case 0x6bedef:c.instructions+=5;goto B6bedef;
case 0x6bedf2:c.instructions+=4;goto B6bedf2;
case 0x6bedf4:c.instructions+=3;goto B6bedf4;
case 0x6bedf6:c.instructions+=2;goto B6bedf6;
case 0x6bedf7:c.instructions+=1;goto B6bedf7;
case 0x6bedf9:goto L6bedf9;
case 0x6bedfb:c.instructions+=1;goto B6bedfb;
case 0x6bee00:goto L6bee00;
case 0x6bee02:c.instructions+=1;goto B6bee02;
case 0x6bee04:goto L6bee04;
case 0x6bee08:c.instructions+=2;goto B6bee08;
case 0x6bee0c:c.instructions+=1;goto B6bee0c;
case 0x6bee10:goto L6bee10;
case 0x6bee16:c.instructions+=4;goto B6bee16;
case 0x6bee19:c.instructions+=3;goto B6bee19;
case 0x6bee1c:c.instructions+=2;goto B6bee1c;
case 0x6bee1f:c.instructions+=1;goto B6bee1f;
case 0x6bee25:goto L6bee25;
case 0x6bee28:c.instructions+=2;goto B6bee28;
case 0x6bee2c:c.instructions+=1;goto B6bee2c;
case 0x6bee32:goto L6bee32;
case 0x6bee34:goto L6bee34;
case 0x6bee35:c.instructions+=4;goto B6bee35;
case 0x6bee36:c.instructions+=3;goto B6bee36;
case 0x6bee37:c.instructions+=2;goto B6bee37;
case 0x6bee38:c.instructions+=1;goto B6bee38;
case 0x6bee39:goto L6bee39;
case 0x6bee3b:c.instructions+=13;goto B6bee3b;
case 0x6bee3c:c.instructions+=12;goto B6bee3c;
case 0x6bee3e:c.instructions+=11;goto B6bee3e;
case 0x6bee41:c.instructions+=10;goto B6bee41;
case 0x6bee42:c.instructions+=9;goto B6bee42;
case 0x6bee43:c.instructions+=8;goto B6bee43;
case 0x6bee45:c.instructions+=7;goto B6bee45;
case 0x6bee4b:c.instructions+=6;goto B6bee4b;
case 0x6bee4e:c.instructions+=5;goto B6bee4e;
case 0x6bee4f:c.instructions+=4;goto B6bee4f;
case 0x6bee51:c.instructions+=3;goto B6bee51;
case 0x6bee53:c.instructions+=2;goto B6bee53;
case 0x6bee56:c.instructions+=1;goto B6bee56;
case 0x6bee58:goto L6bee58;
case 0x6bee5b:c.instructions+=1;goto B6bee5b;
case 0x6bee5e:goto L6bee5e;
case 0x6bee60:c.instructions+=3;goto B6bee60;
case 0x6bee63:c.instructions+=2;goto B6bee63;
case 0x6bee67:c.instructions+=1;goto B6bee67;
case 0x6bee69:goto L6bee69;
case 0x6bee6c:c.instructions+=3;goto B6bee6c;
case 0x6bee6f:c.instructions+=2;goto B6bee6f;
case 0x6bee72:c.instructions+=1;goto B6bee72;
case 0x6bee74:goto L6bee74;
case 0x6bee77:c.instructions+=1;goto B6bee77;
case 0x6bee79:goto L6bee79;
case 0x6bee7f:c.instructions+=8;goto B6bee7f;
case 0x6bee80:c.instructions+=7;goto B6bee80;
case 0x6bee81:c.instructions+=6;goto B6bee81;
case 0x6bee84:c.instructions+=5;goto B6bee84;
case 0x6bee87:c.instructions+=4;goto B6bee87;
case 0x6bee8a:c.instructions+=3;goto B6bee8a;
case 0x6bee8d:c.instructions+=2;goto B6bee8d;
case 0x6bee8f:c.instructions+=1;goto B6bee8f;
case 0x6bee91:goto L6bee91;
case 0x6bee97:c.instructions+=4;goto B6bee97;
case 0x6bee9c:c.instructions+=3;goto B6bee9c;
case 0x6beea1:c.instructions+=2;goto B6beea1;
case 0x6beea7:c.instructions+=1;goto B6beea7;
case 0x6beea9:goto L6beea9;
case 0x6beeaa:c.instructions+=6;goto B6beeaa;
case 0x6beeab:c.instructions+=5;goto B6beeab;
case 0x6beeae:c.instructions+=4;goto B6beeae;
case 0x6beeb1:c.instructions+=3;goto B6beeb1;
case 0x6beeb4:c.instructions+=2;goto B6beeb4;
case 0x6beeb7:c.instructions+=1;goto B6beeb7;
case 0x6beeb9:goto L6beeb9;
case 0x6beebb:c.instructions+=1;goto B6beebb;
case 0x6beec0:goto L6beec0;
case 0x6beec5:goto L6beec5;
case 0x6beec8:c.instructions+=3;goto B6beec8;
case 0x6beecb:c.instructions+=2;goto B6beecb;
case 0x6beece:c.instructions+=1;goto B6beece;
case 0x6beed4:goto L6beed4;
case 0x6beed6:c.instructions+=8;goto B6beed6;
case 0x6beed7:c.instructions+=7;goto B6beed7;
case 0x6beed8:c.instructions+=6;goto B6beed8;
case 0x6beeda:c.instructions+=5;goto B6beeda;
case 0x6beedd:c.instructions+=4;goto B6beedd;
case 0x6beede:c.instructions+=3;goto B6beede;
case 0x6beee4:c.instructions+=2;goto B6beee4;
case 0x6beee6:c.instructions+=1;goto B6beee6;
case 0x6beeec:goto L6beeec;
case 0x6beeee:c.instructions+=1;goto B6beeee;
case 0x6beef4:goto L6beef4;
case 0x6beefa:c.instructions+=14;goto B6beefa;
case 0x6beefb:c.instructions+=13;goto B6beefb;
case 0x6beefc:c.instructions+=12;goto B6beefc;
case 0x6beefd:c.instructions+=11;goto B6beefd;
case 0x6beefe:c.instructions+=10;goto B6beefe;
case 0x6bef00:c.instructions+=9;goto B6bef00;
case 0x6bef01:c.instructions+=8;goto B6bef01;
case 0x6bef02:c.instructions+=7;goto B6bef02;
case 0x6bef05:c.instructions+=6;goto B6bef05;
case 0x6bef08:c.instructions+=5;goto B6bef08;
case 0x6bef0a:c.instructions+=4;goto B6bef0a;
case 0x6bef0b:c.instructions+=3;goto B6bef0b;
case 0x6bef0d:c.instructions+=2;goto B6bef0d;
case 0x6bef0f:c.instructions+=1;goto B6bef0f;
case 0x6bef14:goto L6bef14;
case 0x6bef16:c.instructions+=1;goto B6bef16;
case 0x6bef1c:goto L6bef1c;
case 0x6bef22:c.instructions+=3;goto B6bef22;
case 0x6bef24:c.instructions+=2;goto B6bef24;
case 0x6bef27:c.instructions+=1;goto B6bef27;
case 0x6bef29:goto L6bef29;
case 0x6bef2c:c.instructions+=4;goto B6bef2c;
case 0x6bef30:c.instructions+=3;goto B6bef30;
case 0x6bef31:c.instructions+=2;goto B6bef31;
case 0x6bef34:c.instructions+=1;goto B6bef34;
case 0x6bef36:goto L6bef36;
case 0x6bef3c:c.instructions+=15;goto B6bef3c;
case 0x6bef3f:c.instructions+=14;goto B6bef3f;
case 0x6bef40:c.instructions+=13;goto B6bef40;
case 0x6bef41:c.instructions+=12;goto B6bef41;
case 0x6bef42:c.instructions+=11;goto B6bef42;
case 0x6bef43:c.instructions+=10;goto B6bef43;
case 0x6bef44:c.instructions+=9;goto B6bef44;
case 0x6bef45:c.instructions+=8;goto B6bef45;
case 0x6bef46:c.instructions+=7;goto B6bef46;
case 0x6bef49:c.instructions+=6;goto B6bef49;
case 0x6bef4a:c.instructions+=5;goto B6bef4a;
case 0x6bef4b:c.instructions+=4;goto B6bef4b;
case 0x6bef4e:c.instructions+=3;goto B6bef4e;
case 0x6bef50:c.instructions+=2;goto B6bef50;
case 0x6bef52:c.instructions+=1;goto B6bef52;
case 0x6bef57:goto L6bef57;
case 0x6bef59:c.instructions+=1;goto B6bef59;
case 0x6bef5f:goto L6bef5f;
case 0x6bef64:goto L6bef64;
case 0x6bef66:c.instructions+=2;goto B6bef66;
case 0x6bef69:c.instructions+=1;goto B6bef69;
case 0x6bef6f:goto L6bef6f;
case 0x6bef75:c.instructions+=12;goto B6bef75;
case 0x6bef78:c.instructions+=11;goto B6bef78;
case 0x6bef7b:c.instructions+=10;goto B6bef7b;
case 0x6bef7e:c.instructions+=9;goto B6bef7e;
case 0x6bef81:c.instructions+=8;goto B6bef81;
case 0x6bef84:c.instructions+=7;goto B6bef84;
case 0x6bef87:c.instructions+=6;goto B6bef87;
case 0x6bef8a:c.instructions+=5;goto B6bef8a;
case 0x6bef8d:c.instructions+=4;goto B6bef8d;
case 0x6bef8f:c.instructions+=3;goto B6bef8f;
case 0x6bef92:c.instructions+=2;goto B6bef92;
case 0x6bef95:c.instructions+=1;goto B6bef95;
case 0x6bef97:goto L6bef97;
case 0x6bef9a:c.instructions+=1;goto B6bef9a;
case 0x6befa0:goto L6befa0;
case 0x6befa3:c.instructions+=1;goto B6befa3;
case 0x6befa9:goto L6befa9;
case 0x6befac:c.instructions+=1;goto B6befac;
case 0x6befae:goto L6befae;
case 0x6befb0:c.instructions+=2;goto B6befb0;
case 0x6befb3:c.instructions+=1;goto B6befb3;
case 0x6befb5:goto L6befb5;
case 0x6befb8:c.instructions+=1;goto B6befb8;
case 0x6befba:goto L6befba;
case 0x6befbd:c.instructions+=1;goto B6befbd;
case 0x6befbf:goto L6befbf;
case 0x6befc1:c.instructions+=8;goto B6befc1;
case 0x6befc2:c.instructions+=7;goto B6befc2;
case 0x6befc3:c.instructions+=6;goto B6befc3;
case 0x6befc5:c.instructions+=5;goto B6befc5;
case 0x6befc8:c.instructions+=4;goto B6befc8;
case 0x6befc9:c.instructions+=3;goto B6befc9;
case 0x6befcf:c.instructions+=2;goto B6befcf;
case 0x6befd1:c.instructions+=1;goto B6befd1;
case 0x6befd7:goto L6befd7;
case 0x6befd9:c.instructions+=1;goto B6befd9;
case 0x6befdf:goto L6befdf;
case 0x6befe6:goto L6befe6;
case 0x6befec:c.instructions+=13;goto B6befec;
case 0x6befef:c.instructions+=12;goto B6befef;
case 0x6beff0:c.instructions+=11;goto B6beff0;
case 0x6beff1:c.instructions+=10;goto B6beff1;
case 0x6beff2:c.instructions+=9;goto B6beff2;
case 0x6beff3:c.instructions+=8;goto B6beff3;
case 0x6beff5:c.instructions+=7;goto B6beff5;
case 0x6beff6:c.instructions+=6;goto B6beff6;
case 0x6beff7:c.instructions+=5;goto B6beff7;
case 0x6beff9:c.instructions+=4;goto B6beff9;
case 0x6beffa:c.instructions+=3;goto B6beffa;
case 0x6beffc:c.instructions+=2;goto B6beffc;
case 0x6befff:c.instructions+=1;goto B6befff;
default:missing_instruction(c.pc);}
B6be001:L6be001:{c.instructions+=1;NFSU2_TR(0x6be001);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be007:L6be007:{c.instructions+=2;NFSU2_TR(0x6be007);
__builtin_memmove((R+4),(R+24),4);
}
B6be009:{NFSU2_TR(0x6be009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be00eull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6be00e:L6be00e:{c.instructions+=3;NFSU2_TR(0x6be00e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be010:{NFSU2_TR(0x6be010);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be013:{NFSU2_TR(0x6be013);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be0d6;}}
}
B6be019:L6be019:{c.instructions+=8;NFSU2_TR(0x6be019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be01c:{NFSU2_TR(0x6be01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be022:{NFSU2_TR(0x6be022);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be025:{NFSU2_TR(0x6be025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be02b:{NFSU2_TR(0x6be02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be02d:{NFSU2_TR(0x6be02d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be02f:{NFSU2_TR(0x6be02f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be034:{NFSU2_TR(0x6be034);
if(r1(R+518)){{goto L6be0a6;}}
}
B6be036:L6be036:{c.instructions+=2;NFSU2_TR(0x6be036);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be03b:{NFSU2_TR(0x6be03b);
if(r1(R+518)){{goto L6be089;}}
}
B6be03d:L6be03d:{c.instructions+=2;NFSU2_TR(0x6be03d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be042:{NFSU2_TR(0x6be042);
if(r1(R+518)){{goto L6be071;}}
}
B6be044:L6be044:{c.instructions+=2;NFSU2_TR(0x6be044);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be049:{NFSU2_TR(0x6be049);
if(r1(R+518)){{goto L6be071;}}
}
B6be04b:L6be04b:{c.instructions+=2;NFSU2_TR(0x6be04b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be050:{NFSU2_TR(0x6be050);
if(r1(R+518)){{goto L6be059;}}
}
B6be052:L6be052:{c.instructions+=2;NFSU2_TR(0x6be052);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be057:{NFSU2_TR(0x6be057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be0cc;}}
}
B6be059:L6be059:{c.instructions+=2;NFSU2_TR(0x6be059);
__builtin_memmove((R+4),(R+24),4);
}
B6be05b:{NFSU2_TR(0x6be05b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be060ull));
TAIL_STATIC(0x6c8379u,6c8);
}
B6be060:L6be060:{c.instructions+=2;NFSU2_TR(0x6be060);
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
B6be062:{NFSU2_TR(0x6be062);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be068:L6be068:{c.instructions+=2;NFSU2_TR(0x6be068);
__builtin_memmove((R+4),(R+24),4);
}
B6be06a:{NFSU2_TR(0x6be06a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be06full));
TAIL_STATIC(0x6c84c7u,6c8);
}
B6be06f:L6be06f:{c.instructions+=1;NFSU2_TR(0x6be06f);
{goto L6be0c4;}
}
B6be071:L6be071:{c.instructions+=2;NFSU2_TR(0x6be071);
__builtin_memmove((R+4),(R+24),4);
}
B6be073:{NFSU2_TR(0x6be073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be078ull));
TAIL_STATIC(0x6c6d02u,6c6);
}
B6be078:L6be078:{c.instructions+=2;NFSU2_TR(0x6be078);
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
B6be07a:{NFSU2_TR(0x6be07a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be080:L6be080:{c.instructions+=2;NFSU2_TR(0x6be080);
__builtin_memmove((R+4),(R+24),4);
}
B6be082:{NFSU2_TR(0x6be082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be087ull));
TAIL_STATIC(0x6c6e50u,6c6);
}
B6be087:L6be087:{c.instructions+=1;NFSU2_TR(0x6be087);
{goto L6be0c4;}
}
B6be089:L6be089:{c.instructions+=4;NFSU2_TR(0x6be089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be08f:{NFSU2_TR(0x6be08f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6be094:{NFSU2_TR(0x6be094);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6be099:{NFSU2_TR(0x6be099);
if(r1(R+512)){{goto L6be0c1;}}
}
B6be09b:L6be09b:{c.instructions+=3;NFSU2_TR(0x6be09b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be09d:{NFSU2_TR(0x6be09d);
__builtin_memmove((R+4),(R+24),4);
}
B6be09f:{NFSU2_TR(0x6be09f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be0a4ull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6be0a4:L6be0a4:{c.instructions+=1;NFSU2_TR(0x6be0a4);
{goto L6be0c4;}
}
B6be0a6:L6be0a6:{c.instructions+=4;NFSU2_TR(0x6be0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be0ac:{NFSU2_TR(0x6be0ac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6be0b1:{NFSU2_TR(0x6be0b1);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6be0b6:{NFSU2_TR(0x6be0b6);
if(r1(R+512)){{goto L6be0c1;}}
}
B6be0b8:L6be0b8:{c.instructions+=2;NFSU2_TR(0x6be0b8);
__builtin_memmove((R+4),(R+24),4);
}
B6be0ba:{NFSU2_TR(0x6be0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be0bfull));
TAIL_STATIC(0x6c8841u,6c8);
}
B6be0bf:L6be0bf:{c.instructions+=1;NFSU2_TR(0x6be0bf);
{goto L6be0c4;}
}
B6be0c1:L6be0c1:{c.instructions+=2;NFSU2_TR(0x6be0c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6be0c3:{NFSU2_TR(0x6be0c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6be0c4:L6be0c4:{c.instructions+=2;NFSU2_TR(0x6be0c4);
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
B6be0c6:{NFSU2_TR(0x6be0c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be0cc:L6be0cc:{c.instructions+=3;NFSU2_TR(0x6be0cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be0cd:{NFSU2_TR(0x6be0cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be0d0:{NFSU2_TR(0x6be0d0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be019u);}goto L6be019;}}
}
B6be0d6:L6be0d6:{c.instructions+=3;NFSU2_TR(0x6be0d6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be0d8:{NFSU2_TR(0x6be0d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be0db:{NFSU2_TR(0x6be0db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be14d;}}
}
B6be0dd:L6be0dd:{c.instructions+=9;NFSU2_TR(0x6be0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be0e0:{NFSU2_TR(0x6be0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be0e6:{NFSU2_TR(0x6be0e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be0e9:{NFSU2_TR(0x6be0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be0ef:{NFSU2_TR(0x6be0ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be0f1:{NFSU2_TR(0x6be0f1);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be0f3:{NFSU2_TR(0x6be0f3);
w4(R+4,u32(0x74400000ull));
}
B6be0f8:{NFSU2_TR(0x6be0f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6be0fa:{NFSU2_TR(0x6be0fa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6be123;}}
}
B6be0fc:L6be0fc:{c.instructions+=1;NFSU2_TR(0x6be0fc);
if(r1(R+518)){{goto L6be138;}}
}
B6be0fe:L6be0fe:{c.instructions+=2;NFSU2_TR(0x6be0fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be103:{NFSU2_TR(0x6be103);
if(r1(R+518)){{goto L6be11a;}}
}
B6be105:L6be105:{c.instructions+=2;NFSU2_TR(0x6be105);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be10a:{NFSU2_TR(0x6be10a);
if(r1(R+518)){{goto L6be11a;}}
}
B6be10c:L6be10c:{c.instructions+=2;NFSU2_TR(0x6be10c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be111:{NFSU2_TR(0x6be111);
if(r1(R+518)){{goto L6be11a;}}
}
B6be113:L6be113:{c.instructions+=2;NFSU2_TR(0x6be113);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be118:{NFSU2_TR(0x6be118);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be147;}}
}
B6be11a:L6be11a:{c.instructions+=2;NFSU2_TR(0x6be11a);
__builtin_memmove((R+4),(R+24),4);
}
B6be11c:{NFSU2_TR(0x6be11c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be121ull));
TAIL_STATIC(0x6c6fb2u,6c6);
}
B6be121:L6be121:{c.instructions+=1;NFSU2_TR(0x6be121);
{goto L6be13f;}
}
B6be123:L6be123:{c.instructions+=2;NFSU2_TR(0x6be123);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be128:{NFSU2_TR(0x6be128);
if(r1(R+518)){{goto L6be138;}}
}
B6be12a:L6be12a:{c.instructions+=2;NFSU2_TR(0x6be12a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be12f:{NFSU2_TR(0x6be12f);
if(r1(R+518)){{goto L6be138;}}
}
B6be131:L6be131:{c.instructions+=2;NFSU2_TR(0x6be131);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be136:{NFSU2_TR(0x6be136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be147;}}
}
B6be138:L6be138:{c.instructions+=2;NFSU2_TR(0x6be138);
__builtin_memmove((R+4),(R+24),4);
}
B6be13a:{NFSU2_TR(0x6be13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be13full));
TAIL_STATIC(0x6c8629u,6c8);
}
B6be13f:L6be13f:{c.instructions+=2;NFSU2_TR(0x6be13f);
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
B6be141:{NFSU2_TR(0x6be141);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be147:L6be147:{c.instructions+=3;NFSU2_TR(0x6be147);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be148:{NFSU2_TR(0x6be148);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be14b:{NFSU2_TR(0x6be14b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be0ddu);}goto L6be0dd;}}
}
B6be14d:L6be14d:{c.instructions+=3;NFSU2_TR(0x6be14d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be14f:{NFSU2_TR(0x6be14f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be152:{NFSU2_TR(0x6be152);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be186;}}
}
B6be154:L6be154:{c.instructions+=8;NFSU2_TR(0x6be154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be157:{NFSU2_TR(0x6be157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be15d:{NFSU2_TR(0x6be15d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be160:{NFSU2_TR(0x6be160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be166:{NFSU2_TR(0x6be166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be168:{NFSU2_TR(0x6be168);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be16a:{NFSU2_TR(0x6be16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be16f:{NFSU2_TR(0x6be16f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be180;}}
}
B6be171:L6be171:{c.instructions+=2;NFSU2_TR(0x6be171);
__builtin_memmove((R+4),(R+24),4);
}
B6be173:{NFSU2_TR(0x6be173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be178ull));
TAIL_STATIC(0x6c6c1bu,6c6);
}
B6be178:L6be178:{c.instructions+=2;NFSU2_TR(0x6be178);
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
B6be17a:{NFSU2_TR(0x6be17a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be180:L6be180:{c.instructions+=3;NFSU2_TR(0x6be180);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be181:{NFSU2_TR(0x6be181);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be184:{NFSU2_TR(0x6be184);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be154u);}goto L6be154;}}
}
B6be186:L6be186:{c.instructions+=2;NFSU2_TR(0x6be186);
__builtin_memmove((R+4),(R+24),4);
}
B6be188:{NFSU2_TR(0x6be188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be18dull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6be18d:L6be18d:{c.instructions+=3;NFSU2_TR(0x6be18d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be18f:{NFSU2_TR(0x6be18f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be192:{NFSU2_TR(0x6be192);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be1dc;}}
}
B6be194:L6be194:{c.instructions+=8;NFSU2_TR(0x6be194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be197:{NFSU2_TR(0x6be197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be19d:{NFSU2_TR(0x6be19d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be1a0:{NFSU2_TR(0x6be1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be1a6:{NFSU2_TR(0x6be1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be1a8:{NFSU2_TR(0x6be1a8);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be1aa:{NFSU2_TR(0x6be1aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be1af:{NFSU2_TR(0x6be1af);
if(r1(R+518)){{goto L6be1b8;}}
}
B6be1b1:L6be1b1:{c.instructions+=2;NFSU2_TR(0x6be1b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be1b6:{NFSU2_TR(0x6be1b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be1d6;}}
}
B6be1b8:L6be1b8:{c.instructions+=2;NFSU2_TR(0x6be1b8);
__builtin_memmove((R+4),(R+24),4);
}
B6be1ba:{NFSU2_TR(0x6be1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be1bfull));
TAIL_STATIC(0x6c8379u,6c8);
}
B6be1bf:L6be1bf:{c.instructions+=2;NFSU2_TR(0x6be1bf);
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
B6be1c1:{NFSU2_TR(0x6be1c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be1c7:L6be1c7:{c.instructions+=2;NFSU2_TR(0x6be1c7);
__builtin_memmove((R+4),(R+24),4);
}
B6be1c9:{NFSU2_TR(0x6be1c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be1ceull));
TAIL_STATIC(0x6c84c7u,6c8);
}
B6be1ce:L6be1ce:{c.instructions+=2;NFSU2_TR(0x6be1ce);
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
B6be1d0:{NFSU2_TR(0x6be1d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be1d6:L6be1d6:{c.instructions+=3;NFSU2_TR(0x6be1d6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be1d7:{NFSU2_TR(0x6be1d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be1da:{NFSU2_TR(0x6be1da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be194u);}goto L6be194;}}
}
B6be1dc:L6be1dc:{c.instructions+=3;NFSU2_TR(0x6be1dc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be1de:{NFSU2_TR(0x6be1de);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be1e1:{NFSU2_TR(0x6be1e1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be222;}}
}
B6be1e3:L6be1e3:{c.instructions+=8;NFSU2_TR(0x6be1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be1e6:{NFSU2_TR(0x6be1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be1ec:{NFSU2_TR(0x6be1ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be1ef:{NFSU2_TR(0x6be1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be1f5:{NFSU2_TR(0x6be1f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be1f7:{NFSU2_TR(0x6be1f7);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be1f9:{NFSU2_TR(0x6be1f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be1fe:{NFSU2_TR(0x6be1fe);
if(r1(R+518)){{goto L6be215;}}
}
B6be200:L6be200:{c.instructions+=2;NFSU2_TR(0x6be200);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be205:{NFSU2_TR(0x6be205);
if(r1(R+518)){{goto L6be215;}}
}
B6be207:L6be207:{c.instructions+=2;NFSU2_TR(0x6be207);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be20c:{NFSU2_TR(0x6be20c);
if(r1(R+518)){{goto L6be215;}}
}
B6be20e:L6be20e:{c.instructions+=2;NFSU2_TR(0x6be20e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be213:{NFSU2_TR(0x6be213);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be21c;}}
}
B6be215:L6be215:{c.instructions+=2;NFSU2_TR(0x6be215);
__builtin_memmove((R+4),(R+24),4);
}
B6be217:{NFSU2_TR(0x6be217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be21cull));
TAIL_STATIC(0x6c8629u,6c8);
}
B6be21c:L6be21c:{c.instructions+=3;NFSU2_TR(0x6be21c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be21d:{NFSU2_TR(0x6be21d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be220:{NFSU2_TR(0x6be220);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be1e3u);}goto L6be1e3;}}
}
B6be222:L6be222:{c.instructions+=3;NFSU2_TR(0x6be222);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be224:{NFSU2_TR(0x6be224);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be227:{NFSU2_TR(0x6be227);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be25b;}}
}
B6be229:L6be229:{c.instructions+=8;NFSU2_TR(0x6be229);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be22c:{NFSU2_TR(0x6be22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be232:{NFSU2_TR(0x6be232);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be235:{NFSU2_TR(0x6be235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be23b:{NFSU2_TR(0x6be23b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be23d:{NFSU2_TR(0x6be23d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be23f:{NFSU2_TR(0x6be23f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be244:{NFSU2_TR(0x6be244);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be255;}}
}
B6be246:L6be246:{c.instructions+=2;NFSU2_TR(0x6be246);
__builtin_memmove((R+4),(R+24),4);
}
B6be248:{NFSU2_TR(0x6be248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be24dull));
TAIL_STATIC(0x6c7b5bu,6c7);
}
B6be24d:L6be24d:{c.instructions+=2;NFSU2_TR(0x6be24d);
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
B6be24f:{NFSU2_TR(0x6be24f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be255:L6be255:{c.instructions+=3;NFSU2_TR(0x6be255);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be256:{NFSU2_TR(0x6be256);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be259:{NFSU2_TR(0x6be259);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be229u);}goto L6be229;}}
}
B6be25b:L6be25b:{c.instructions+=3;NFSU2_TR(0x6be25b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be25d:{NFSU2_TR(0x6be25d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be260:{NFSU2_TR(0x6be260);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be294;}}
}
B6be262:L6be262:{c.instructions+=8;NFSU2_TR(0x6be262);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be265:{NFSU2_TR(0x6be265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be26b:{NFSU2_TR(0x6be26b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be26e:{NFSU2_TR(0x6be26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be274:{NFSU2_TR(0x6be274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be276:{NFSU2_TR(0x6be276);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be278:{NFSU2_TR(0x6be278);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be27d:{NFSU2_TR(0x6be27d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be28e;}}
}
B6be27f:L6be27f:{c.instructions+=2;NFSU2_TR(0x6be27f);
__builtin_memmove((R+4),(R+24),4);
}
B6be281:{NFSU2_TR(0x6be281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be286ull));
TAIL_STATIC(0x6c2d19u,6c2);
}
B6be286:L6be286:{c.instructions+=2;NFSU2_TR(0x6be286);
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
B6be288:{NFSU2_TR(0x6be288);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be28e:L6be28e:{c.instructions+=3;NFSU2_TR(0x6be28e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be28f:{NFSU2_TR(0x6be28f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be292:{NFSU2_TR(0x6be292);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be262u);}goto L6be262;}}
}
B6be294:L6be294:{c.instructions+=3;NFSU2_TR(0x6be294);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be296:{NFSU2_TR(0x6be296);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be299:{NFSU2_TR(0x6be299);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be2e6;}}
}
B6be29b:L6be29b:{c.instructions+=8;NFSU2_TR(0x6be29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be29e:{NFSU2_TR(0x6be29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be2a4:{NFSU2_TR(0x6be2a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be2a7:{NFSU2_TR(0x6be2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be2ad:{NFSU2_TR(0x6be2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be2af:{NFSU2_TR(0x6be2af);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be2b1:{NFSU2_TR(0x6be2b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be2b6:{NFSU2_TR(0x6be2b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be2e0;}}
}
B6be2b8:L6be2b8:{c.instructions+=4;NFSU2_TR(0x6be2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be2be:{NFSU2_TR(0x6be2be);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6be2c3:{NFSU2_TR(0x6be2c3);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6be2c8:{NFSU2_TR(0x6be2c8);
if(r1(R+512)){{goto L6be2d5;}}
}
B6be2ca:L6be2ca:{c.instructions+=3;NFSU2_TR(0x6be2ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be2cc:{NFSU2_TR(0x6be2cc);
__builtin_memmove((R+4),(R+24),4);
}
B6be2ce:{NFSU2_TR(0x6be2ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be2d3ull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6be2d3:L6be2d3:{c.instructions+=1;NFSU2_TR(0x6be2d3);
{goto L6be2d8;}
}
B6be2d5:L6be2d5:{c.instructions+=2;NFSU2_TR(0x6be2d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6be2d7:{NFSU2_TR(0x6be2d7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6be2d8:L6be2d8:{c.instructions+=2;NFSU2_TR(0x6be2d8);
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
B6be2da:{NFSU2_TR(0x6be2da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be2e0:L6be2e0:{c.instructions+=3;NFSU2_TR(0x6be2e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be2e1:{NFSU2_TR(0x6be2e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be2e4:{NFSU2_TR(0x6be2e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be29bu);}goto L6be29b;}}
}
B6be2e6:L6be2e6:{c.instructions+=2;NFSU2_TR(0x6be2e6);
__builtin_memmove((R+4),(R+24),4);
}
B6be2e8:{NFSU2_TR(0x6be2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be2edull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6be2ed:L6be2ed:{c.instructions+=3;NFSU2_TR(0x6be2ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be2ef:{NFSU2_TR(0x6be2ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be2f2:{NFSU2_TR(0x6be2f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be365;}}
}
B6be2f4:L6be2f4:{c.instructions+=8;NFSU2_TR(0x6be2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be2f7:{NFSU2_TR(0x6be2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be2fd:{NFSU2_TR(0x6be2fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be300:{NFSU2_TR(0x6be300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be306:{NFSU2_TR(0x6be306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be308:{NFSU2_TR(0x6be308);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be30a:{NFSU2_TR(0x6be30a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be30f:{NFSU2_TR(0x6be30f);
if(r1(R+518)){{goto L6be354;}}
}
B6be311:L6be311:{c.instructions+=2;NFSU2_TR(0x6be311);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be316:{NFSU2_TR(0x6be316);
if(r1(R+518)){{goto L6be354;}}
}
B6be318:L6be318:{c.instructions+=2;NFSU2_TR(0x6be318);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be31d:{NFSU2_TR(0x6be31d);
if(r1(R+518)){{goto L6be354;}}
}
B6be31f:L6be31f:{c.instructions+=2;NFSU2_TR(0x6be31f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be324:{NFSU2_TR(0x6be324);
if(r1(R+518)){{goto L6be354;}}
}
B6be326:L6be326:{c.instructions+=2;NFSU2_TR(0x6be326);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be32b:{NFSU2_TR(0x6be32b);
if(r1(R+518)){{goto L6be354;}}
}
B6be32d:L6be32d:{c.instructions+=2;NFSU2_TR(0x6be32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be332:{NFSU2_TR(0x6be332);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be35f;}}
}
B6be334:L6be334:{c.instructions+=4;NFSU2_TR(0x6be334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be33a:{NFSU2_TR(0x6be33a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6be33f:{NFSU2_TR(0x6be33f);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6be344:{NFSU2_TR(0x6be344);
if(r1(R+512)){{goto L6be34f;}}
}
B6be346:L6be346:{c.instructions+=2;NFSU2_TR(0x6be346);
__builtin_memmove((R+4),(R+24),4);
}
B6be348:{NFSU2_TR(0x6be348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be34dull));
TAIL_STATIC(0x6cf6c6u,6cf);
}
B6be34d:L6be34d:{c.instructions+=1;NFSU2_TR(0x6be34d);
{goto L6be35b;}
}
B6be34f:L6be34f:{c.instructions+=3;NFSU2_TR(0x6be34f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6be351:{NFSU2_TR(0x6be351);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6be352:{NFSU2_TR(0x6be352);
{goto L6be35b;}
}
B6be354:L6be354:{c.instructions+=2;NFSU2_TR(0x6be354);
__builtin_memmove((R+4),(R+24),4);
}
B6be356:{NFSU2_TR(0x6be356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be35bull));
TAIL_STATIC(0x6c62ddu,6c6);
}
B6be35b:L6be35b:{c.instructions+=2;NFSU2_TR(0x6be35b);
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
B6be35d:{NFSU2_TR(0x6be35d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be35f:L6be35f:{c.instructions+=3;NFSU2_TR(0x6be35f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be360:{NFSU2_TR(0x6be360);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be363:{NFSU2_TR(0x6be363);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be2f4u);}goto L6be2f4;}}
}
B6be365:L6be365:{c.instructions+=2;NFSU2_TR(0x6be365);
__builtin_memmove((R+4),(R+24),4);
}
B6be367:{NFSU2_TR(0x6be367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be36cull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6be36c:L6be36c:{c.instructions+=3;NFSU2_TR(0x6be36c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6be36e:{NFSU2_TR(0x6be36e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be371:{NFSU2_TR(0x6be371);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be3a1;}}
}
B6be373:L6be373:{c.instructions+=8;NFSU2_TR(0x6be373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be376:{NFSU2_TR(0x6be376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be37c:{NFSU2_TR(0x6be37c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be37f:{NFSU2_TR(0x6be37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be385:{NFSU2_TR(0x6be385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be387:{NFSU2_TR(0x6be387);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6be389:{NFSU2_TR(0x6be389);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be38e:{NFSU2_TR(0x6be38e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be39b;}}
}
B6be390:L6be390:{c.instructions+=2;NFSU2_TR(0x6be390);
__builtin_memmove((R+4),(R+24),4);
}
B6be392:{NFSU2_TR(0x6be392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be397ull));
TAIL_STATIC(0x6c307au,6c3);
}
B6be397:L6be397:{c.instructions+=2;NFSU2_TR(0x6be397);
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
B6be399:{NFSU2_TR(0x6be399);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be39b:L6be39b:{c.instructions+=3;NFSU2_TR(0x6be39b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6be39c:{NFSU2_TR(0x6be39c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6be39f:{NFSU2_TR(0x6be39f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be373u);}goto L6be373;}}
}
B6be3a1:L6be3a1:{c.instructions+=2;NFSU2_TR(0x6be3a1);
__builtin_memmove((R+4),(R+24),4);
}
B6be3a3:{NFSU2_TR(0x6be3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be3a8ull));
TAIL_STATIC(0x69f745u,69f);
}
B6be3a8:L6be3a8:{c.instructions+=2;NFSU2_TR(0x6be3a8);
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
B6be3aa:{NFSU2_TR(0x6be3aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be3ac:L6be3ac:{c.instructions+=2;NFSU2_TR(0x6be3ac);
__builtin_memmove((R+4),(R+24),4);
}
B6be3ae:{NFSU2_TR(0x6be3ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be3b3ull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6be3b3:L6be3b3:{c.instructions+=2;NFSU2_TR(0x6be3b3);
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
B6be3b5:{NFSU2_TR(0x6be3b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be3b7:L6be3b7:{c.instructions+=2;NFSU2_TR(0x6be3b7);
__builtin_memmove((R+4),(R+24),4);
}
B6be3b9:{NFSU2_TR(0x6be3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be3beull));
TAIL_STATIC(0x69a74eu,69a);
}
B6be3be:L6be3be:{c.instructions+=2;NFSU2_TR(0x6be3be);
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
B6be3c0:{NFSU2_TR(0x6be3c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be3c2:L6be3c2:{c.instructions+=2;NFSU2_TR(0x6be3c2);
__builtin_memmove((R+4),(R+24),4);
}
B6be3c4:{NFSU2_TR(0x6be3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be3c9ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6be3c9:L6be3c9:{c.instructions+=2;NFSU2_TR(0x6be3c9);
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
B6be3cb:{NFSU2_TR(0x6be3cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be3d6;}}
}
B6be3cd:L6be3cd:{c.instructions+=2;NFSU2_TR(0x6be3cd);
__builtin_memmove((R+4),(R+24),4);
}
B6be3cf:{NFSU2_TR(0x6be3cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be3d4ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6be3d4:L6be3d4:{c.instructions+=1;NFSU2_TR(0x6be3d4);
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
B6be3d6:L6be3d6:{c.instructions+=4;NFSU2_TR(0x6be3d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6be3d7:{NFSU2_TR(0x6be3d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6be3d8:{NFSU2_TR(0x6be3d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6be3d9:{NFSU2_TR(0x6be3d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6be3da:L6be3da:{c.instructions+=4;NFSU2_TR(0x6be3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be3e0:{NFSU2_TR(0x6be3e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6be3e5:{NFSU2_TR(0x6be3e5);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6be3ea:{NFSU2_TR(0x6be3ea);
if(r1(R+512)){{goto L6be409;}}
}
B6be3ec:L6be3ec:{c.instructions+=8;NFSU2_TR(0x6be3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be3f2:{NFSU2_TR(0x6be3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be3f8:{NFSU2_TR(0x6be3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be3fe:{NFSU2_TR(0x6be3fe);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6be400:{NFSU2_TR(0x6be400);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6be401:{NFSU2_TR(0x6be401);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6be404:{NFSU2_TR(0x6be404);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6be407:{NFSU2_TR(0x6be407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B6be409:L6be409:{c.instructions+=2;NFSU2_TR(0x6be409);
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
B6be40b:{NFSU2_TR(0x6be40b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6be40c:L6be40c:{c.instructions+=14;NFSU2_TR(0x6be40c);
__builtin_memmove((R+28),(R+28),4);
}
B6be40e:{NFSU2_TR(0x6be40e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be40f:{NFSU2_TR(0x6be40f);
__builtin_memmove((R+20),(R+16),4);
}
B6be411:{NFSU2_TR(0x6be411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6be414:{NFSU2_TR(0x6be414);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be415:{NFSU2_TR(0x6be415);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be416:{NFSU2_TR(0x6be416);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be417:{NFSU2_TR(0x6be417);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be41d:{NFSU2_TR(0x6be41d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6be41f:{NFSU2_TR(0x6be41f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6be425:{NFSU2_TR(0x6be425);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6be428:{NFSU2_TR(0x6be428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be42b:{NFSU2_TR(0x6be42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be42e:{NFSU2_TR(0x6be42e);
if(r1(R+512)){{goto L6be7c0;}}
}
B6be434:L6be434:{c.instructions+=6;NFSU2_TR(0x6be434);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be436:{NFSU2_TR(0x6be436);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be438:{NFSU2_TR(0x6be438);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be43a:{NFSU2_TR(0x6be43a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be43b:{NFSU2_TR(0x6be43b);
u8 U[4];
w4(U+0,u32(0x10000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be440:{NFSU2_TR(0x6be440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be445ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6be445:L6be445:{c.instructions+=3;NFSU2_TR(0x6be445);
__builtin_memmove((R+12),(R+0),4);
}
B6be447:{NFSU2_TR(0x6be447);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be449:{NFSU2_TR(0x6be449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be481;}}
}
B6be44b:L6be44b:{c.instructions+=7;NFSU2_TR(0x6be44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be44e:{NFSU2_TR(0x6be44e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be450:{NFSU2_TR(0x6be450);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be452:{NFSU2_TR(0x6be452);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be453:{NFSU2_TR(0x6be453);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be454:{NFSU2_TR(0x6be454);
u8 U[4];
w4(U+0,u32(0x10000003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be459:{NFSU2_TR(0x6be459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be45eull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6be45e:L6be45e:{c.instructions+=3;NFSU2_TR(0x6be45e);
__builtin_memmove((R+12),(R+0),4);
}
B6be460:{NFSU2_TR(0x6be460);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be462:{NFSU2_TR(0x6be462);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be481;}}
}
B6be464:L6be464:{c.instructions+=7;NFSU2_TR(0x6be464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be467:{NFSU2_TR(0x6be467);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be469:{NFSU2_TR(0x6be469);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be46b:{NFSU2_TR(0x6be46b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be46c:{NFSU2_TR(0x6be46c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be46d:{NFSU2_TR(0x6be46d);
u8 U[4];
w4(U+0,u32(0x10000004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be472:{NFSU2_TR(0x6be472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be477ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6be477:L6be477:{c.instructions+=3;NFSU2_TR(0x6be477);
__builtin_memmove((R+12),(R+0),4);
}
B6be479:{NFSU2_TR(0x6be479);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be47b:{NFSU2_TR(0x6be47b);
if(r1(R+518)){{goto L6be5c0;}}
}
B6be481:L6be481:{c.instructions+=9;NFSU2_TR(0x6be481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be484:{NFSU2_TR(0x6be484);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be487:{NFSU2_TR(0x6be487);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be48a:{NFSU2_TR(0x6be48a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6be48c:{NFSU2_TR(0x6be48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be48f:{NFSU2_TR(0x6be48f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be492:{NFSU2_TR(0x6be492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be495:{NFSU2_TR(0x6be495);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be49b:{NFSU2_TR(0x6be49b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be5c0;}}
}
B6be4a1:L6be4a1:{c.instructions+=4;NFSU2_TR(0x6be4a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be4a3:{NFSU2_TR(0x6be4a3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6be4a8:{NFSU2_TR(0x6be4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6be4af:{NFSU2_TR(0x6be4af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be4eb;}}
}
B6be4b1:L6be4b1:{c.instructions+=5;NFSU2_TR(0x6be4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be4b4:{NFSU2_TR(0x6be4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6be4b6:{NFSU2_TR(0x6be4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be4b9:{NFSU2_TR(0x6be4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be4bc:{NFSU2_TR(0x6be4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be4bf:L6be4bf:{c.instructions+=3;NFSU2_TR(0x6be4bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be4c1:{NFSU2_TR(0x6be4c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be4c4:{NFSU2_TR(0x6be4c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be4d5;}}
}
B6be4c6:L6be4c6:{c.instructions+=4;NFSU2_TR(0x6be4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be4c9:{NFSU2_TR(0x6be4c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be4cc:{NFSU2_TR(0x6be4cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x1ffe00ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6be4d3:{NFSU2_TR(0x6be4d3);
if(r1(R+518)){{goto L6be4d9;}}
}
B6be4d5:L6be4d5:{c.instructions+=1;NFSU2_TR(0x6be4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be4d9:L6be4d9:{c.instructions+=3;NFSU2_TR(0x6be4d9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6be4dc:{NFSU2_TR(0x6be4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6be4df:{NFSU2_TR(0x6be4df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be4bfu);}goto L6be4bf;}}
}
B6be4e1:L6be4e1:{c.instructions+=2;NFSU2_TR(0x6be4e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be4e5:{NFSU2_TR(0x6be4e5);
if(r1(R+518)){{goto L6be5c0;}}
}
B6be4eb:L6be4eb:{c.instructions+=2;NFSU2_TR(0x6be4eb);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be4ed:{NFSU2_TR(0x6be4ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be4f2ull));
TAIL_STATIC(0x699317u,699);
}
B6be4f2:L6be4f2:{c.instructions+=2;NFSU2_TR(0x6be4f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be4f4:{NFSU2_TR(0x6be4f4);
if(r1(R+518)){{goto L6be502;}}
}
B6be4f6:L6be4f6:{c.instructions+=2;NFSU2_TR(0x6be4f6);
__builtin_memmove((R+4),(R+0),4);
}
B6be4f8:{NFSU2_TR(0x6be4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be4fdull));
TAIL_STATIC(0x698e7du,698);
}
B6be4fd:L6be4fd:{c.instructions+=2;NFSU2_TR(0x6be4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be500:{NFSU2_TR(0x6be500);
{goto L6be506;}
}
B6be502:L6be502:{c.instructions+=1;NFSU2_TR(0x6be502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be506:L6be506:{c.instructions+=3;NFSU2_TR(0x6be506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be509:{NFSU2_TR(0x6be509);
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
B6be50b:{NFSU2_TR(0x6be50b);
if(r1(R+518)){{goto L6be6d6;}}
}
B6be511:L6be511:{c.instructions+=7;NFSU2_TR(0x6be511);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be513:{NFSU2_TR(0x6be513);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be516:{NFSU2_TR(0x6be516);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6be51c:{NFSU2_TR(0x6be51c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be51f:{NFSU2_TR(0x6be51f);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x50000000ull))));
}
B6be525:{NFSU2_TR(0x6be525);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be526:{NFSU2_TR(0x6be526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be52bull));
TAIL_STATIC(0x699362u,699);
}
B6be52b:L6be52b:{c.instructions+=3;NFSU2_TR(0x6be52b);
__builtin_memmove((R+24),(R+0),4);
}
B6be52d:{NFSU2_TR(0x6be52d);
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
B6be52f:{NFSU2_TR(0x6be52f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be5ad;}}
}
B6be531:L6be531:{c.instructions+=4;NFSU2_TR(0x6be531);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be532:{NFSU2_TR(0x6be532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be535:{NFSU2_TR(0x6be535);
__builtin_memmove((R+4),(R+28),4);
}
B6be537:{NFSU2_TR(0x6be537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be53cull));
TAIL_STATIC(0x698eb3u,698);
}
B6be53c:L6be53c:{c.instructions+=3;NFSU2_TR(0x6be53c);
__builtin_memmove((R+24),(R+0),4);
}
B6be53e:{NFSU2_TR(0x6be53e);
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
B6be540:{NFSU2_TR(0x6be540);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be5b0;}}
}
B6be542:L6be542:{c.instructions+=7;NFSU2_TR(0x6be542);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be545:{NFSU2_TR(0x6be545);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be548:{NFSU2_TR(0x6be548);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be54b:{NFSU2_TR(0x6be54b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6be54e:{NFSU2_TR(0x6be54e);
__builtin_memmove((R+0),(R+4),4);
}
B6be550:{NFSU2_TR(0x6be550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be553:{NFSU2_TR(0x6be553);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6be556:L6be556:{c.instructions+=1;NFSU2_TR(0x6be556);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6be558;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be556u);}goto L6be556;}
}
B6be558:L6be558:{c.instructions+=3;NFSU2_TR(0x6be558);
__builtin_memmove((R+4),(R+0),4);
}
B6be55a:{NFSU2_TR(0x6be55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be55d:{NFSU2_TR(0x6be55d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6be560:L6be560:{c.instructions+=1;NFSU2_TR(0x6be560);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6be562;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be560u);}goto L6be560;}
}
B6be562:L6be562:{c.instructions+=6;NFSU2_TR(0x6be562);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be565:{NFSU2_TR(0x6be565);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be568:{NFSU2_TR(0x6be568);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be56b:{NFSU2_TR(0x6be56b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6be56e:{NFSU2_TR(0x6be56e);
__builtin_memmove((R+8),(R+4),4);
}
B6be570:{NFSU2_TR(0x6be570);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6be573:L6be573:{c.instructions+=1;NFSU2_TR(0x6be573);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6be575;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be573u);}goto L6be573;}
}
B6be575:L6be575:{c.instructions+=2;NFSU2_TR(0x6be575);
__builtin_memmove((R+4),(R+8),4);
}
B6be577:{NFSU2_TR(0x6be577);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6be57a:L6be57a:{c.instructions+=1;NFSU2_TR(0x6be57a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6be57c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be57au);}goto L6be57a;}
}
B6be57c:L6be57c:{c.instructions+=5;NFSU2_TR(0x6be57c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6be57f:{NFSU2_TR(0x6be57f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be582:{NFSU2_TR(0x6be582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be588:{NFSU2_TR(0x6be588);
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
B6be58a:{NFSU2_TR(0x6be58a);
if(r1(R+518)){{goto L6be596;}}
}
B6be58c:L6be58c:{c.instructions+=2;NFSU2_TR(0x6be58c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be58e:{NFSU2_TR(0x6be58e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be593ull));
TAIL_STATIC(0x6739efu,673);
}
B6be593:L6be593:{c.instructions+=1;NFSU2_TR(0x6be593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be596:L6be596:{c.instructions+=5;NFSU2_TR(0x6be596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be59c:{NFSU2_TR(0x6be59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be59f:{NFSU2_TR(0x6be59f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6be5a2:{NFSU2_TR(0x6be5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be5a8:{NFSU2_TR(0x6be5a8);
{goto L6be7c0;}
}
B6be5ad:L6be5ad:{c.instructions+=1;NFSU2_TR(0x6be5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be5b0:L6be5b0:{c.instructions+=3;NFSU2_TR(0x6be5b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be5b2:{NFSU2_TR(0x6be5b2);
__builtin_memmove((R+4),(R+28),4);
}
B6be5b4:{NFSU2_TR(0x6be5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be5b9ull));
TAIL_STATIC(0x6739efu,673);
}
B6be5b9:L6be5b9:{c.instructions+=2;NFSU2_TR(0x6be5b9);
__builtin_memmove((R+0),(R+24),4);
}
B6be5bb:{NFSU2_TR(0x6be5bb);
{goto L6be7c2;}
}
B6be5c0:L6be5c0:{c.instructions+=3;NFSU2_TR(0x6be5c0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6be5c3:{NFSU2_TR(0x6be5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be5c6:{NFSU2_TR(0x6be5c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be7c0;}}
}
B6be5cc:L6be5cc:{c.instructions+=4;NFSU2_TR(0x6be5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be5d2:{NFSU2_TR(0x6be5d2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6be5d7:{NFSU2_TR(0x6be5d7);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6be5dc:{NFSU2_TR(0x6be5dc);
if(r1(R+512)){{goto L6be7c0;}}
}
B6be5e2:L6be5e2:{c.instructions+=6;NFSU2_TR(0x6be5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be5e8:{NFSU2_TR(0x6be5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be5eb:{NFSU2_TR(0x6be5eb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be5ed:{NFSU2_TR(0x6be5ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be5ee:{NFSU2_TR(0x6be5ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6be5f1:{NFSU2_TR(0x6be5f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6be5f3:L6be5f3:{c.instructions+=1;NFSU2_TR(0x6be5f3);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6be5f5;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be5f3u);}goto L6be5f3;}}
}
B6be5f5:L6be5f5:{c.instructions+=2;NFSU2_TR(0x6be5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be5f8:{NFSU2_TR(0x6be5f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be7c0;}}
}
B6be5fe:L6be5fe:{c.instructions+=7;NFSU2_TR(0x6be5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be601:{NFSU2_TR(0x6be601);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be603:{NFSU2_TR(0x6be603);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be605:{NFSU2_TR(0x6be605);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be606:{NFSU2_TR(0x6be606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be607:{NFSU2_TR(0x6be607);
u8 U[4];
w4(U+0,u32(0x10700001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be60c:{NFSU2_TR(0x6be60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be611ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6be611:L6be611:{c.instructions+=4;NFSU2_TR(0x6be611);
__builtin_memmove((R+24),(R+0),4);
}
B6be613:{NFSU2_TR(0x6be613);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be615:{NFSU2_TR(0x6be615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be618:{NFSU2_TR(0x6be618);
if(r1(R+518)){{goto L6be7c0;}}
}
B6be61e:L6be61e:{c.instructions+=8;NFSU2_TR(0x6be61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be621:{NFSU2_TR(0x6be621);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be623:{NFSU2_TR(0x6be623);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be625:{NFSU2_TR(0x6be625);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6be628:{NFSU2_TR(0x6be628);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be629:{NFSU2_TR(0x6be629);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be62a:{NFSU2_TR(0x6be62a);
u8 U[4];
w4(U+0,u32(0x20500003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be62f:{NFSU2_TR(0x6be62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be634ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6be634:L6be634:{c.instructions+=3;NFSU2_TR(0x6be634);
__builtin_memmove((R+12),(R+0),4);
}
B6be636:{NFSU2_TR(0x6be636);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be638:{NFSU2_TR(0x6be638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be65a;}}
}
B6be63a:L6be63a:{c.instructions+=8;NFSU2_TR(0x6be63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be63d:{NFSU2_TR(0x6be63d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be63f:{NFSU2_TR(0x6be63f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be641:{NFSU2_TR(0x6be641);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6be644:{NFSU2_TR(0x6be644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be645:{NFSU2_TR(0x6be645);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be646:{NFSU2_TR(0x6be646);
u8 U[4];
w4(U+0,u32(0x20500004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be64b:{NFSU2_TR(0x6be64b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be650ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6be650:L6be650:{c.instructions+=3;NFSU2_TR(0x6be650);
__builtin_memmove((R+12),(R+0),4);
}
B6be652:{NFSU2_TR(0x6be652);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be654:{NFSU2_TR(0x6be654);
if(r1(R+518)){{goto L6be7c0;}}
}
B6be65a:L6be65a:{c.instructions+=21;NFSU2_TR(0x6be65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be65d:{NFSU2_TR(0x6be65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be660:{NFSU2_TR(0x6be660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be663:{NFSU2_TR(0x6be663);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be666:{NFSU2_TR(0x6be666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6be668:{NFSU2_TR(0x6be668);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6be66b:{NFSU2_TR(0x6be66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be66e:{NFSU2_TR(0x6be66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6be670:{NFSU2_TR(0x6be670);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6be673:{NFSU2_TR(0x6be673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6be675:{NFSU2_TR(0x6be675);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be678:{NFSU2_TR(0x6be678);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6be67e:{NFSU2_TR(0x6be67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be681:{NFSU2_TR(0x6be681);
__builtin_memmove((R+0),(R+4),4);
}
B6be683:{NFSU2_TR(0x6be683);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6be686:{NFSU2_TR(0x6be686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be689:{NFSU2_TR(0x6be689);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be68b:{NFSU2_TR(0x6be68b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6be68d:{NFSU2_TR(0x6be68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be690:{NFSU2_TR(0x6be690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be691:{NFSU2_TR(0x6be691);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6be693:L6be693:{c.instructions+=1;NFSU2_TR(0x6be693);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6be695;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be693u);}goto L6be693;}}
}
B6be695:L6be695:{c.instructions+=1;NFSU2_TR(0x6be695);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be7c0;}}
}
B6be69b:L6be69b:{c.instructions+=4;NFSU2_TR(0x6be69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be69e:{NFSU2_TR(0x6be69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be6a1:{NFSU2_TR(0x6be6a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be6a4:{NFSU2_TR(0x6be6a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be6b2;}}
}
B6be6a6:L6be6a6:{c.instructions+=3;NFSU2_TR(0x6be6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be6a9:{NFSU2_TR(0x6be6a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be6ac:{NFSU2_TR(0x6be6ac);
if(r1(R+518)){{goto L6be7c0;}}
}
B6be6b2:L6be6b2:{c.instructions+=2;NFSU2_TR(0x6be6b2);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be6b4:{NFSU2_TR(0x6be6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be6b9ull));
TAIL_STATIC(0x699317u,699);
}
B6be6b9:L6be6b9:{c.instructions+=2;NFSU2_TR(0x6be6b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be6bb:{NFSU2_TR(0x6be6bb);
if(r1(R+518)){{goto L6be6cb;}}
}
B6be6bd:L6be6bd:{c.instructions+=2;NFSU2_TR(0x6be6bd);
__builtin_memmove((R+4),(R+0),4);
}
B6be6bf:{NFSU2_TR(0x6be6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be6c4ull));
TAIL_STATIC(0x698e7du,698);
}
B6be6c4:L6be6c4:{c.instructions+=3;NFSU2_TR(0x6be6c4);
__builtin_memmove((R+28),(R+0),4);
}
B6be6c6:{NFSU2_TR(0x6be6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be6c9:{NFSU2_TR(0x6be6c9);
{goto L6be6d2;}
}
B6be6cb:L6be6cb:{c.instructions+=2;NFSU2_TR(0x6be6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be6cf:{NFSU2_TR(0x6be6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be6d2:L6be6d2:{c.instructions+=2;NFSU2_TR(0x6be6d2);
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
B6be6d4:{NFSU2_TR(0x6be6d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be6e0;}}
}
B6be6d6:L6be6d6:{c.instructions+=2;NFSU2_TR(0x6be6d6);
w4(R+0,u32(0x8007000eull));
}
B6be6db:{NFSU2_TR(0x6be6db);
{goto L6be7c2;}
}
B6be6e0:L6be6e0:{c.instructions+=10;NFSU2_TR(0x6be6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be6e3:{NFSU2_TR(0x6be6e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be6e5:{NFSU2_TR(0x6be6e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be6e8:{NFSU2_TR(0x6be6e8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6be6ed:{NFSU2_TR(0x6be6ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be6f0:{NFSU2_TR(0x6be6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be6f3:{NFSU2_TR(0x6be6f3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70200000ull))));
}
B6be6f8:{NFSU2_TR(0x6be6f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be6f9:{NFSU2_TR(0x6be6f9);
__builtin_memmove((R+4),(R+28),4);
}
B6be6fb:{NFSU2_TR(0x6be6fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be700ull));
TAIL_STATIC(0x699362u,699);
}
B6be700:L6be700:{c.instructions+=2;NFSU2_TR(0x6be700);
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
B6be702:{NFSU2_TR(0x6be702);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be7c2;}}
}
B6be708:L6be708:{c.instructions+=3;NFSU2_TR(0x6be708);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be709:{NFSU2_TR(0x6be709);
__builtin_memmove((R+4),(R+28),4);
}
B6be70b:{NFSU2_TR(0x6be70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be710ull));
TAIL_STATIC(0x698eb3u,698);
}
B6be710:L6be710:{c.instructions+=2;NFSU2_TR(0x6be710);
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
B6be712:{NFSU2_TR(0x6be712);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be7c2;}}
}
B6be718:L6be718:{c.instructions+=5;NFSU2_TR(0x6be718);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be71b:{NFSU2_TR(0x6be71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be71e:{NFSU2_TR(0x6be71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be721:{NFSU2_TR(0x6be721);
__builtin_memmove((R+0),(R+4),4);
}
B6be723:{NFSU2_TR(0x6be723);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6be726:L6be726:{c.instructions+=1;NFSU2_TR(0x6be726);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6be728;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be726u);}goto L6be726;}
}
B6be728:L6be728:{c.instructions+=2;NFSU2_TR(0x6be728);
__builtin_memmove((R+4),(R+0),4);
}
B6be72a:{NFSU2_TR(0x6be72a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6be72d:L6be72d:{c.instructions+=1;NFSU2_TR(0x6be72d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6be72f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be72du);}goto L6be72d;}
}
B6be72f:L6be72f:{c.instructions+=7;NFSU2_TR(0x6be72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be732:{NFSU2_TR(0x6be732);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6be734:{NFSU2_TR(0x6be734);
__builtin_memmove((R+4),(R+0),4);
}
B6be736:{NFSU2_TR(0x6be736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be739:{NFSU2_TR(0x6be739);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be73c:{NFSU2_TR(0x6be73c);
__builtin_memmove((R+8),(R+4),4);
}
B6be73e:{NFSU2_TR(0x6be73e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6be741:L6be741:{c.instructions+=1;NFSU2_TR(0x6be741);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6be743;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be741u);}goto L6be741;}
}
B6be743:L6be743:{c.instructions+=2;NFSU2_TR(0x6be743);
__builtin_memmove((R+4),(R+8),4);
}
B6be745:{NFSU2_TR(0x6be745);
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
B6be748:L6be748:{c.instructions+=1;NFSU2_TR(0x6be748);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6be74a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be748u);}goto L6be748;}
}
B6be74a:L6be74a:{c.instructions+=6;NFSU2_TR(0x6be74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6be74d:{NFSU2_TR(0x6be74d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6be74f:{NFSU2_TR(0x6be74f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be751:{NFSU2_TR(0x6be751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be752:{NFSU2_TR(0x6be752);
__builtin_memmove((R+4),(R+24),4);
}
B6be754:{NFSU2_TR(0x6be754);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be757ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6be757:L6be757:{c.instructions+=2;NFSU2_TR(0x6be757);
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
B6be759:{NFSU2_TR(0x6be759);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be7b6;}}
}
B6be75b:L6be75b:{c.instructions+=10;NFSU2_TR(0x6be75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be75e:{NFSU2_TR(0x6be75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6be761:{NFSU2_TR(0x6be761);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be764:{NFSU2_TR(0x6be764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6be767:{NFSU2_TR(0x6be767);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6be76a:{NFSU2_TR(0x6be76a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be76d:{NFSU2_TR(0x6be76d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be76f:{NFSU2_TR(0x6be76f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be772:{NFSU2_TR(0x6be772);
__builtin_memmove((R+4),(R+24),4);
}
B6be774:{NFSU2_TR(0x6be774);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be777ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6be777:L6be777:{c.instructions+=2;NFSU2_TR(0x6be777);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be779:{NFSU2_TR(0x6be779);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be79d;}}
}
B6be77b:L6be77b:{c.instructions+=5;NFSU2_TR(0x6be77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be77e:{NFSU2_TR(0x6be77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be781:{NFSU2_TR(0x6be781);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6be784:{NFSU2_TR(0x6be784);
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
B6be786:{NFSU2_TR(0x6be786);
if(r1(R+518)){{goto L6be78f;}}
}
B6be788:L6be788:{c.instructions+=2;NFSU2_TR(0x6be788);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be78a:{NFSU2_TR(0x6be78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be78full));
TAIL_STATIC(0x6739efu,673);
}
B6be78f:L6be78f:{c.instructions+=5;NFSU2_TR(0x6be78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be792:{NFSU2_TR(0x6be792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be795:{NFSU2_TR(0x6be795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be798:{NFSU2_TR(0x6be798);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6be79b:{NFSU2_TR(0x6be79b);
{goto L6be7c0;}
}
B6be79d:L6be79d:{c.instructions+=6;NFSU2_TR(0x6be79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be7a0:{NFSU2_TR(0x6be7a0);
u8 U[4];
w4(U+0,u32(0x50000003ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6be7a6:{NFSU2_TR(0x6be7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be7a9:{NFSU2_TR(0x6be7a9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6be7ae:{NFSU2_TR(0x6be7ae);
u8 U[4];
w4(U+0,u32(0x10700001ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6be7b4:{NFSU2_TR(0x6be7b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6be7b6:L6be7b6:{c.instructions+=3;NFSU2_TR(0x6be7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be7b9:{NFSU2_TR(0x6be7b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be7bb:{NFSU2_TR(0x6be7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be7c0ull));
TAIL_STATIC(0x6739efu,673);
}
B6be7c0:L6be7c0:{c.instructions+=1;NFSU2_TR(0x6be7c0);
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
B6be7c2:L6be7c2:{c.instructions+=5;NFSU2_TR(0x6be7c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6be7c3:{NFSU2_TR(0x6be7c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6be7c4:{NFSU2_TR(0x6be7c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6be7c5:{NFSU2_TR(0x6be7c5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6be7c6:{NFSU2_TR(0x6be7c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6be7c7:L6be7c7:{c.instructions+=5;NFSU2_TR(0x6be7c7);
__builtin_memmove((R+28),(R+28),4);
}
B6be7c9:{NFSU2_TR(0x6be7c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be7ca:{NFSU2_TR(0x6be7ca);
__builtin_memmove((R+24),(R+4),4);
}
B6be7cc:{NFSU2_TR(0x6be7cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be7d3:{NFSU2_TR(0x6be7d3);
if(r1(R+518)){{goto L6be7f9;}}
}
B6be7d5:L6be7d5:{c.instructions+=3;NFSU2_TR(0x6be7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be7db:{NFSU2_TR(0x6be7db);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B6be7e0:{NFSU2_TR(0x6be7e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be7e1:L6be7e1:{c.instructions+=1;NFSU2_TR(0x6be7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be7e6ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6be7e6:L6be7e6:{c.instructions+=2;NFSU2_TR(0x6be7e6);
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
B6be7e8:{NFSU2_TR(0x6be7e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be7f7;}}
}
B6be7ea:L6be7ea:{c.instructions+=2;NFSU2_TR(0x6be7ea);
__builtin_memmove((R+4),(R+24),4);
}
B6be7ec:{NFSU2_TR(0x6be7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be7f1ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6be7f1:L6be7f1:{c.instructions+=2;NFSU2_TR(0x6be7f1);
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
B6be7f3:{NFSU2_TR(0x6be7f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6be7f7;}}
}
B6be7f5:L6be7f5:{c.instructions+=1;NFSU2_TR(0x6be7f5);
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
B6be7f7:L6be7f7:{c.instructions+=2;NFSU2_TR(0x6be7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6be7f8:{NFSU2_TR(0x6be7f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6be7f9:L6be7f9:{c.instructions+=2;NFSU2_TR(0x6be7f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be7ff:{NFSU2_TR(0x6be7ff);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be7e1u);}goto L6be7e1;}
}
B6be801:L6be801:{c.instructions+=12;NFSU2_TR(0x6be801);
__builtin_memmove((R+28),(R+28),4);
}
B6be803:{NFSU2_TR(0x6be803);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be804:{NFSU2_TR(0x6be804);
__builtin_memmove((R+20),(R+16),4);
}
B6be806:{NFSU2_TR(0x6be806);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6be809:{NFSU2_TR(0x6be809);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be80a:{NFSU2_TR(0x6be80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6be80d:{NFSU2_TR(0x6be80d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be80e:{NFSU2_TR(0x6be80e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be80f:{NFSU2_TR(0x6be80f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be812:{NFSU2_TR(0x6be812);
__builtin_memmove((R+24),(R+4),4);
}
B6be814:{NFSU2_TR(0x6be814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be816:{NFSU2_TR(0x6be816);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be819ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6be819:L6be819:{c.instructions+=5;NFSU2_TR(0x6be819);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be81c:{NFSU2_TR(0x6be81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be81f:{NFSU2_TR(0x6be81f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be821:{NFSU2_TR(0x6be821);
__builtin_memmove((R+4),(R+24),4);
}
B6be823:{NFSU2_TR(0x6be823);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be826ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6be826:L6be826:{c.instructions+=3;NFSU2_TR(0x6be826);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be82d:{NFSU2_TR(0x6be82d);
__builtin_memmove((R+28),(R+0),4);
}
B6be82f:{NFSU2_TR(0x6be82f);
if(r1(R+518)){{goto L6be932;}}
}
B6be835:L6be835:{c.instructions+=2;NFSU2_TR(0x6be835);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be839:{NFSU2_TR(0x6be839);
if(r1(R+518)){{goto L6bea83;}}
}
B6be83f:L6be83f:{c.instructions+=2;NFSU2_TR(0x6be83f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be846:{NFSU2_TR(0x6be846);
if(r1(R+518)){{goto L6be91f;}}
}
B6be84c:L6be84c:{c.instructions+=3;NFSU2_TR(0x6be84c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be84f:{NFSU2_TR(0x6be84f);
__builtin_memmove((R+4),(R+24),4);
}
B6be851:{NFSU2_TR(0x6be851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be856ull));
TAIL_STATIC(0x6d0cb9u,6d0);
}
B6be856:L6be856:{c.instructions+=7;NFSU2_TR(0x6be856);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be857:{NFSU2_TR(0x6be857);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6be859:{NFSU2_TR(0x6be859);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6be85c:{NFSU2_TR(0x6be85c);
u8 U[4];
w4(U+0,u32(0x7bb1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be861:{NFSU2_TR(0x6be861);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be863:{NFSU2_TR(0x6be863);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be864:{NFSU2_TR(0x6be864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be869ull));
TAIL_STATIC(0x75e081u,75e);
}
B6be869:L6be869:{c.instructions+=8;NFSU2_TR(0x6be869);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6be86c:{NFSU2_TR(0x6be86c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be86e:{NFSU2_TR(0x6be86e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be871:{NFSU2_TR(0x6be871);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6be874:{NFSU2_TR(0x6be874);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be87a:{NFSU2_TR(0x6be87a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be87b:{NFSU2_TR(0x6be87b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffefull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6be87f:{NFSU2_TR(0x6be87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be884ull));
TAIL_STATIC(0x686b20u,686);
}
B6be884:L6be884:{c.instructions+=2;NFSU2_TR(0x6be884);
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
B6be886:{NFSU2_TR(0x6be886);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6be88c:L6be88c:{c.instructions+=3;NFSU2_TR(0x6be88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be892:{NFSU2_TR(0x6be892);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6be899:{NFSU2_TR(0x6be899);
if(r1(R+518)){{goto L6be91f;}}
}
B6be89f:L6be89f:{c.instructions+=3;NFSU2_TR(0x6be89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be8a2:{NFSU2_TR(0x6be8a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be8a4:{NFSU2_TR(0x6be8a4);
if(r1(R+518)){{goto L6be91f;}}
}
B6be8a6:L6be8a6:{c.instructions+=2;NFSU2_TR(0x6be8a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be8aa:{NFSU2_TR(0x6be8aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be91f;}}
}
B6be8ac:L6be8ac:{c.instructions+=3;NFSU2_TR(0x6be8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be8af:{NFSU2_TR(0x6be8af);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be8b3:{NFSU2_TR(0x6be8b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be91f;}}
}
B6be8b5:L6be8b5:{c.instructions+=2;NFSU2_TR(0x6be8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be8b8:{NFSU2_TR(0x6be8b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6be8bb:L6be8bb:{c.instructions+=4;NFSU2_TR(0x6be8bb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6be8bd:{NFSU2_TR(0x6be8bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6be8be:{NFSU2_TR(0x6be8be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6be8c0:{NFSU2_TR(0x6be8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be8bbu);}goto L6be8bb;}}
}
B6be8c2:L6be8c2:{c.instructions+=4;NFSU2_TR(0x6be8c2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6be8c4:{NFSU2_TR(0x6be8c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6be8c7:{NFSU2_TR(0x6be8c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be8c8:{NFSU2_TR(0x6be8c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be8cdull));
TAIL_STATIC(0x575620u,575);
}
B6be8cd:L6be8cd:{c.instructions+=4;NFSU2_TR(0x6be8cd);
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
B6be8cf:{NFSU2_TR(0x6be8cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be8d0:{NFSU2_TR(0x6be8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6be8d3:{NFSU2_TR(0x6be8d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be8df;}}
}
B6be8d5:L6be8d5:{c.instructions+=2;NFSU2_TR(0x6be8d5);
w4(R+0,u32(0x8007000eull));
}
B6be8da:{NFSU2_TR(0x6be8da);
{goto L6beaef;}
}
B6be8df:L6be8df:{c.instructions+=4;NFSU2_TR(0x6be8df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be8e2:{NFSU2_TR(0x6be8e2);
u8 U[4];
w4(U+0,u32(0x7bb1d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be8e7:{NFSU2_TR(0x6be8e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be8e8:{NFSU2_TR(0x6be8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be8edull));
TAIL_STATIC(0x75c784u,75c);
}
B6be8ed:L6be8ed:{c.instructions+=6;NFSU2_TR(0x6be8ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6be8f0:{NFSU2_TR(0x6be8f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be8f2:{NFSU2_TR(0x6be8f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be8f5:{NFSU2_TR(0x6be8f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be8fb:{NFSU2_TR(0x6be8fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be8fe:{NFSU2_TR(0x6be8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be903ull));
TAIL_STATIC(0x686b20u,686);
}
B6be903:L6be903:{c.instructions+=3;NFSU2_TR(0x6be903);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be906:{NFSU2_TR(0x6be906);
__builtin_memmove((R+28),(R+0),4);
}
B6be908:{NFSU2_TR(0x6be908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be90dull));
TAIL_STATIC(0x575630u,575);
}
B6be90d:L6be90d:{c.instructions+=3;NFSU2_TR(0x6be90d);
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
B6be90f:{NFSU2_TR(0x6be90f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be910:{NFSU2_TR(0x6be910);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6be919;}}
}
B6be912:L6be912:{c.instructions+=2;NFSU2_TR(0x6be912);
__builtin_memmove((R+0),(R+28),4);
}
B6be914:{NFSU2_TR(0x6be914);
{goto L6beaef;}
}
B6be919:L6be919:{c.instructions+=1;NFSU2_TR(0x6be919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be91f:L6be91f:{c.instructions+=3;NFSU2_TR(0x6be91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be922:{NFSU2_TR(0x6be922);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6be924:{NFSU2_TR(0x6be924);
if(r1(R+518)){{goto L6bea83;}}
}
B6be92a:L6be92a:{c.instructions+=2;NFSU2_TR(0x6be92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be92d:{NFSU2_TR(0x6be92d);
{goto L6bea81;}
}
B6be932:L6be932:{c.instructions+=3;NFSU2_TR(0x6be932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be935:{NFSU2_TR(0x6be935);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6be938:{NFSU2_TR(0x6be938);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6beaea;}}
}
B6be93e:L6be93e:{c.instructions+=1;NFSU2_TR(0x6be93e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6beb37ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6be945:L6be945:{c.instructions+=1;NFSU2_TR(0x6be945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be949:L6be949:{c.instructions+=2;NFSU2_TR(0x6be949);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6be94c:{NFSU2_TR(0x6be94c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6beaea;}}
}
B6be952:L6be952:{c.instructions+=6;NFSU2_TR(0x6be952);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffff8000ull))));
}
B6be958:{NFSU2_TR(0x6be958);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6be95b:{NFSU2_TR(0x6be95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be95e:{NFSU2_TR(0x6be95e);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be960:{NFSU2_TR(0x6be960);
__builtin_memmove((R+4),(R+24),4);
}
B6be962:{NFSU2_TR(0x6be962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be967ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6be967:L6be967:{c.instructions+=2;NFSU2_TR(0x6be967);
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
B6be969:{NFSU2_TR(0x6be969);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6be96f:L6be96f:{c.instructions+=3;NFSU2_TR(0x6be96f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6be972:{NFSU2_TR(0x6be972);
__builtin_memmove((R+4),(R+24),4);
}
B6be974:{NFSU2_TR(0x6be974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6be979ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6be979:L6be979:{c.instructions+=2;NFSU2_TR(0x6be979);
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
B6be97b:{NFSU2_TR(0x6be97b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6be981:L6be981:{c.instructions+=2;NFSU2_TR(0x6be981);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
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
B6be988:{NFSU2_TR(0x6be988);
if(r1(R+518)){{goto L6bea0e;}}
}
B6be98e:L6be98e:{c.instructions+=10;NFSU2_TR(0x6be98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be992:{NFSU2_TR(0x6be992);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be996:{NFSU2_TR(0x6be996);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6be999:{NFSU2_TR(0x6be999);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be99d:{NFSU2_TR(0x6be99d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6be9a0:{NFSU2_TR(0x6be9a0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6be9a1:{NFSU2_TR(0x6be9a1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6be9a2:{NFSU2_TR(0x6be9a2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6be9a3:{NFSU2_TR(0x6be9a3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6be9a4:{NFSU2_TR(0x6be9a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6be9db;}}
}
B6be9a6:L6be9a6:{c.instructions+=2;NFSU2_TR(0x6be9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6be9a9:{NFSU2_TR(0x6be9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6be9ac:L6be9ac:{c.instructions+=3;NFSU2_TR(0x6be9ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be9ae:{NFSU2_TR(0x6be9ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be9b1:{NFSU2_TR(0x6be9b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be9cd;}}
}
B6be9b3:L6be9b3:{c.instructions+=3;NFSU2_TR(0x6be9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be9b6:{NFSU2_TR(0x6be9b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be9b9:{NFSU2_TR(0x6be9b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be9cd;}}
}
B6be9bb:L6be9bb:{c.instructions+=3;NFSU2_TR(0x6be9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be9be:{NFSU2_TR(0x6be9be);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6be9c1:{NFSU2_TR(0x6be9c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6be9cd;}}
}
B6be9c3:L6be9c3:{c.instructions+=3;NFSU2_TR(0x6be9c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be9c6:{NFSU2_TR(0x6be9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be9c9:{NFSU2_TR(0x6be9c9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6be9cd:L6be9cd:{c.instructions+=5;NFSU2_TR(0x6be9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6be9d0:{NFSU2_TR(0x6be9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6be9d3:{NFSU2_TR(0x6be9d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6be9d6:{NFSU2_TR(0x6be9d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6be9d9:{NFSU2_TR(0x6be9d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be9acu);}goto L6be9ac;}}
}
B6be9db:L6be9db:{c.instructions+=2;NFSU2_TR(0x6be9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6be9de:{NFSU2_TR(0x6be9de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6be9e0:L6be9e0:{c.instructions+=3;NFSU2_TR(0x6be9e0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6be9e4:{NFSU2_TR(0x6be9e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6be9e7:{NFSU2_TR(0x6be9e7);
if(r1(R+518)){{goto L6be9ee;}}
}
B6be9e9:L6be9e9:{c.instructions+=2;NFSU2_TR(0x6be9e9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6be9ed:{NFSU2_TR(0x6be9ed);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6be9ee:L6be9ee:{c.instructions+=3;NFSU2_TR(0x6be9ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6be9ef:{NFSU2_TR(0x6be9ef);
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
B6be9f2:{NFSU2_TR(0x6be9f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be9e0u);}goto L6be9e0;}}
}
B6be9f4:L6be9f4:{c.instructions+=9;NFSU2_TR(0x6be9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6be9f6:{NFSU2_TR(0x6be9f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be9f8:{NFSU2_TR(0x6be9f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6be9fb:{NFSU2_TR(0x6be9fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be9fc:{NFSU2_TR(0x6be9fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6be9fd:{NFSU2_TR(0x6be9fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bea00:{NFSU2_TR(0x6bea00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea01:{NFSU2_TR(0x6bea01);
__builtin_memmove((R+4),(R+24),4);
}
B6bea03:{NFSU2_TR(0x6bea03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bea06ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bea06:L6bea06:{c.instructions+=2;NFSU2_TR(0x6bea06);
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
B6bea08:{NFSU2_TR(0x6bea08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6bea0e:L6bea0e:{c.instructions+=8;NFSU2_TR(0x6bea0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bea10:{NFSU2_TR(0x6bea10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bea13:{NFSU2_TR(0x6bea13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea14:{NFSU2_TR(0x6bea14);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bea17:{NFSU2_TR(0x6bea17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea18:{NFSU2_TR(0x6bea18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea19:{NFSU2_TR(0x6bea19);
__builtin_memmove((R+4),(R+24),4);
}
B6bea1b:{NFSU2_TR(0x6bea1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bea21ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bea21:L6bea21:{c.instructions+=2;NFSU2_TR(0x6bea21);
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
B6bea23:{NFSU2_TR(0x6bea23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6bea29:L6bea29:{c.instructions+=16;NFSU2_TR(0x6bea29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bea2c:{NFSU2_TR(0x6bea2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bea2e:{NFSU2_TR(0x6bea2e);
__builtin_memmove((R+4),(R+0),4);
}
B6bea30:{NFSU2_TR(0x6bea30);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B6bea33:{NFSU2_TR(0x6bea33);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bea36:{NFSU2_TR(0x6bea36);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x18ull))));
}
B6bea39:{NFSU2_TR(0x6bea39);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6bea3b:{NFSU2_TR(0x6bea3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bea3e:{NFSU2_TR(0x6bea3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea40:{NFSU2_TR(0x6bea40);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bea43:{NFSU2_TR(0x6bea43);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6bea48:{NFSU2_TR(0x6bea48);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bea4a:{NFSU2_TR(0x6bea4a);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea4f:{NFSU2_TR(0x6bea4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bea50:{NFSU2_TR(0x6bea50);
__builtin_memmove((R+4),(R+24),4);
}
B6bea52:{NFSU2_TR(0x6bea52);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bea55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bea55:L6bea55:{c.instructions+=2;NFSU2_TR(0x6bea55);
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
B6bea57:{NFSU2_TR(0x6bea57);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6bea5d:L6bea5d:{c.instructions+=3;NFSU2_TR(0x6bea5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bea5f:{NFSU2_TR(0x6bea5f);
__builtin_memmove((R+4),(R+24),4);
}
B6bea61:{NFSU2_TR(0x6bea61);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bea64ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bea64:L6bea64:{c.instructions+=2;NFSU2_TR(0x6bea64);
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
B6bea66:{NFSU2_TR(0x6bea66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6bea6c:L6bea6c:{c.instructions+=2;NFSU2_TR(0x6bea6c);
__builtin_memmove((R+4),(R+24),4);
}
B6bea6e:{NFSU2_TR(0x6bea6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bea73ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6bea73:L6bea73:{c.instructions+=2;NFSU2_TR(0x6bea73);
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
B6bea75:{NFSU2_TR(0x6bea75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6beaef;}}
}
B6bea77:L6bea77:{c.instructions+=3;NFSU2_TR(0x6bea77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bea7a:{NFSU2_TR(0x6bea7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bea7c:{NFSU2_TR(0x6bea7c);
if(r1(R+518)){{goto L6bea83;}}
}
B6bea7e:L6bea7e:{c.instructions+=1;NFSU2_TR(0x6bea7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bea81:L6bea81:{c.instructions+=1;NFSU2_TR(0x6bea81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bea83:L6bea83:{c.instructions+=2;NFSU2_TR(0x6bea83);
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
B6bea85:{NFSU2_TR(0x6bea85);
{goto L6beaef;}
}
B6bea87:L6bea87:{c.instructions+=2;NFSU2_TR(0x6bea87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bea8e:{NFSU2_TR(0x6bea8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6bea93:L6bea93:{c.instructions+=2;NFSU2_TR(0x6bea93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bea9a:{NFSU2_TR(0x6bea9a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6bea9f:L6bea9f:{c.instructions+=2;NFSU2_TR(0x6bea9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beaa6:{NFSU2_TR(0x6beaa6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beaab:L6beaab:{c.instructions+=2;NFSU2_TR(0x6beaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beab2:{NFSU2_TR(0x6beab2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beab7:L6beab7:{c.instructions+=2;NFSU2_TR(0x6beab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beabe:{NFSU2_TR(0x6beabe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beac3:L6beac3:{c.instructions+=2;NFSU2_TR(0x6beac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beaca:{NFSU2_TR(0x6beaca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beacf:L6beacf:{c.instructions+=2;NFSU2_TR(0x6beacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bead6:{NFSU2_TR(0x6bead6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beadb:L6beadb:{c.instructions+=3;NFSU2_TR(0x6beadb);
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
B6beadd:{NFSU2_TR(0x6beadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beae4:{NFSU2_TR(0x6beae4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be952u);}goto L6be952;}}
}
B6beaea:L6beaea:{c.instructions+=1;NFSU2_TR(0x6beaea);
w4(R+0,u32(0x80004005ull));
}
B6beaef:L6beaef:{c.instructions+=5;NFSU2_TR(0x6beaef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6beaf0:{NFSU2_TR(0x6beaf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6beaf1:{NFSU2_TR(0x6beaf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6beaf2:{NFSU2_TR(0x6beaf2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6beaf3:{NFSU2_TR(0x6beaf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6beaf6:L6beaf6:{c.instructions+=2;NFSU2_TR(0x6beaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beafd:{NFSU2_TR(0x6beafd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beb02:L6beb02:{c.instructions+=2;NFSU2_TR(0x6beb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beb09:{NFSU2_TR(0x6beb09);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beb0e:L6beb0e:{c.instructions+=2;NFSU2_TR(0x6beb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beb15:{NFSU2_TR(0x6beb15);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beb1a:L6beb1a:{c.instructions+=2;NFSU2_TR(0x6beb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beb21:{NFSU2_TR(0x6beb21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beb26:L6beb26:{c.instructions+=2;NFSU2_TR(0x6beb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B6beb2d:{NFSU2_TR(0x6beb2d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6be949u);}goto L6be949;}
}
B6beb32:L6beb32:{c.instructions+=3;NFSU2_TR(0x6beb32);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6beb34:{NFSU2_TR(0x6beb34);
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
B6beb35:{NFSU2_TR(0x6beb35);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6beaefu);}goto L6beaef;}
}
B6beb73:L6beb73:{c.instructions+=14;NFSU2_TR(0x6beb73);
__builtin_memmove((R+28),(R+28),4);
}
B6beb75:{NFSU2_TR(0x6beb75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb76:{NFSU2_TR(0x6beb76);
__builtin_memmove((R+20),(R+16),4);
}
B6beb78:{NFSU2_TR(0x6beb78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6beb7b:{NFSU2_TR(0x6beb7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb7c:{NFSU2_TR(0x6beb7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb7d:{NFSU2_TR(0x6beb7d);
__builtin_memmove((R+24),(R+4),4);
}
B6beb7f:{NFSU2_TR(0x6beb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6beb85:{NFSU2_TR(0x6beb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6beb88:{NFSU2_TR(0x6beb88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb89:{NFSU2_TR(0x6beb89);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6beb8b:{NFSU2_TR(0x6beb8b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B6beb8e:{NFSU2_TR(0x6beb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6beb91:{NFSU2_TR(0x6beb91);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bec27;}}
}
B6beb97:L6beb97:{c.instructions+=9;NFSU2_TR(0x6beb97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6beb99:{NFSU2_TR(0x6beb99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb9a:{NFSU2_TR(0x6beb9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb9b:{NFSU2_TR(0x6beb9b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beb9d:{NFSU2_TR(0x6beb9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6beba0:{NFSU2_TR(0x6beba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beba1:{NFSU2_TR(0x6beba1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beba7:{NFSU2_TR(0x6beba7);
__builtin_memmove((R+4),(R+24),4);
}
B6beba9:{NFSU2_TR(0x6beba9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bebafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bebaf:L6bebaf:{c.instructions+=2;NFSU2_TR(0x6bebaf);
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
B6bebb1:{NFSU2_TR(0x6bebb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6bebb7:L6bebb7:{c.instructions+=15;NFSU2_TR(0x6bebb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bebbd:{NFSU2_TR(0x6bebbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebbe:{NFSU2_TR(0x6bebbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebbf:{NFSU2_TR(0x6bebbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebc0:{NFSU2_TR(0x6bebc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebc1:{NFSU2_TR(0x6bebc1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebc3:{NFSU2_TR(0x6bebc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebc4:{NFSU2_TR(0x6bebc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebc5:{NFSU2_TR(0x6bebc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bebc8:{NFSU2_TR(0x6bebc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bebcb:{NFSU2_TR(0x6bebcb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebcd:{NFSU2_TR(0x6bebcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebce:{NFSU2_TR(0x6bebce);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bebd0:{NFSU2_TR(0x6bebd0);
__builtin_memmove((R+4),(R+24),4);
}
B6bebd2:{NFSU2_TR(0x6bebd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bebd7ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bebd7:L6bebd7:{c.instructions+=2;NFSU2_TR(0x6bebd7);
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
B6bebd9:{NFSU2_TR(0x6bebd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6bebdf:L6bebdf:{c.instructions+=4;NFSU2_TR(0x6bebdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bebe5:{NFSU2_TR(0x6bebe5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bebe7:{NFSU2_TR(0x6bebe7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bebea:{NFSU2_TR(0x6bebea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bebf9;}}
}
B6bebec:L6bebec:{c.instructions+=5;NFSU2_TR(0x6bebec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bebef:{NFSU2_TR(0x6bebef);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bebf3:{NFSU2_TR(0x6bebf3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bebf4:{NFSU2_TR(0x6bebf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bebf7:{NFSU2_TR(0x6bebf7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bebecu);}goto L6bebec;}}
}
B6bebf9:L6bebf9:{c.instructions+=16;NFSU2_TR(0x6bebf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bebff:{NFSU2_TR(0x6bebff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bec02:{NFSU2_TR(0x6bec02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec03:{NFSU2_TR(0x6bec03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec04:{NFSU2_TR(0x6bec04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec05:{NFSU2_TR(0x6bec05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec06:{NFSU2_TR(0x6bec06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec07:{NFSU2_TR(0x6bec07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec08:{NFSU2_TR(0x6bec08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec09:{NFSU2_TR(0x6bec09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bec0c:{NFSU2_TR(0x6bec0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec0d:{NFSU2_TR(0x6bec0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec0e:{NFSU2_TR(0x6bec0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bec11:{NFSU2_TR(0x6bec11);
__builtin_memmove((R+4),(R+24),4);
}
B6bec13:{NFSU2_TR(0x6bec13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec15:{NFSU2_TR(0x6bec15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bec1aull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bec1a:L6bec1a:{c.instructions+=2;NFSU2_TR(0x6bec1a);
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
B6bec1c:{NFSU2_TR(0x6bec1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6bee32;}}
}
B6bec22:L6bec22:{c.instructions+=1;NFSU2_TR(0x6bec22);
{goto L6bee34;}
}
B6bec27:L6bec27:{c.instructions+=1;NFSU2_TR(0x6bec27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bec2a:L6bec2a:{c.instructions+=6;NFSU2_TR(0x6bec2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bec30:{NFSU2_TR(0x6bec30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bec33:{NFSU2_TR(0x6bec33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bec35:{NFSU2_TR(0x6bec35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bec38:{NFSU2_TR(0x6bec38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bec3b:{NFSU2_TR(0x6bec3b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bee25;}}
}
B6bec41:L6bec41:{c.instructions+=2;NFSU2_TR(0x6bec41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bec48:{NFSU2_TR(0x6bec48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bec4f:L6bec4f:{c.instructions+=11;NFSU2_TR(0x6bec4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bec52:{NFSU2_TR(0x6bec52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bec55:{NFSU2_TR(0x6bec55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bec58:{NFSU2_TR(0x6bec58);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6bec5b:{NFSU2_TR(0x6bec5b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bec5d:{NFSU2_TR(0x6bec5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bec5f:{NFSU2_TR(0x6bec5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bec62:{NFSU2_TR(0x6bec62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bec65:{NFSU2_TR(0x6bec65);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bec68:{NFSU2_TR(0x6bec68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bec6b:{NFSU2_TR(0x6bec6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6beca2;}}
}
B6bec6d:L6bec6d:{c.instructions+=3;NFSU2_TR(0x6bec6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bec70:{NFSU2_TR(0x6bec70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bec73:{NFSU2_TR(0x6bec73);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6beca2;}}
}
B6bec75:L6bec75:{c.instructions+=2;NFSU2_TR(0x6bec75);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bec79:{NFSU2_TR(0x6bec79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bed39;}}
}
B6bec7f:L6bec7f:{c.instructions+=17;NFSU2_TR(0x6bec7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bec85:{NFSU2_TR(0x6bec85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bec88:{NFSU2_TR(0x6bec88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bec8b:{NFSU2_TR(0x6bec8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec8c:{NFSU2_TR(0x6bec8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec8d:{NFSU2_TR(0x6bec8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec8e:{NFSU2_TR(0x6bec8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec8f:{NFSU2_TR(0x6bec8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec91:{NFSU2_TR(0x6bec91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec92:{NFSU2_TR(0x6bec92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec93:{NFSU2_TR(0x6bec93);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6bec95:{NFSU2_TR(0x6bec95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec96:{NFSU2_TR(0x6bec96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec98:{NFSU2_TR(0x6bec98);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bec9a:{NFSU2_TR(0x6bec9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec9b:{NFSU2_TR(0x6bec9b);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bec9d:{NFSU2_TR(0x6bec9d);
{goto L6bed2a;}
}
B6beca2:L6beca2:{c.instructions+=3;NFSU2_TR(0x6beca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6beca5:{NFSU2_TR(0x6beca5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6beca8:{NFSU2_TR(0x6beca8);
if(r1(R+512)){{goto L6bed47;}}
}
B6becae:L6becae:{c.instructions+=2;NFSU2_TR(0x6becae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6becb1:{NFSU2_TR(0x6becb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bed39;}}
}
B6becb7:L6becb7:{c.instructions+=2;NFSU2_TR(0x6becb7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6becba:{NFSU2_TR(0x6becba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bece3;}}
}
B6becbc:L6becbc:{c.instructions+=9;NFSU2_TR(0x6becbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6becbe:{NFSU2_TR(0x6becbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becbf:{NFSU2_TR(0x6becbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becc0:{NFSU2_TR(0x6becc0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becc2:{NFSU2_TR(0x6becc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6becc5:{NFSU2_TR(0x6becc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becc6:{NFSU2_TR(0x6becc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beccc:{NFSU2_TR(0x6beccc);
__builtin_memmove((R+4),(R+24),4);
}
B6becce:{NFSU2_TR(0x6becce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6becd4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6becd4:L6becd4:{c.instructions+=2;NFSU2_TR(0x6becd4);
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
B6becd6:{NFSU2_TR(0x6becd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6becdc:L6becdc:{c.instructions+=1;NFSU2_TR(0x6becdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bece3:L6bece3:{c.instructions+=17;NFSU2_TR(0x6bece3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bece9:{NFSU2_TR(0x6bece9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6becec:{NFSU2_TR(0x6becec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beced:{NFSU2_TR(0x6beced);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becee:{NFSU2_TR(0x6becee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becef:{NFSU2_TR(0x6becef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becf0:{NFSU2_TR(0x6becf0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becf2:{NFSU2_TR(0x6becf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becf3:{NFSU2_TR(0x6becf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becf4:{NFSU2_TR(0x6becf4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6becf6:{NFSU2_TR(0x6becf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becf7:{NFSU2_TR(0x6becf7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becf9:{NFSU2_TR(0x6becf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6becfc:{NFSU2_TR(0x6becfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becfd:{NFSU2_TR(0x6becfd);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6becff:{NFSU2_TR(0x6becff);
__builtin_memmove((R+4),(R+24),4);
}
B6bed01:{NFSU2_TR(0x6bed01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bed06ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bed06:L6bed06:{c.instructions+=2;NFSU2_TR(0x6bed06);
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
B6bed08:{NFSU2_TR(0x6bed08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6bed0e:L6bed0e:{c.instructions+=15;NFSU2_TR(0x6bed0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed0f:{NFSU2_TR(0x6bed0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed10:{NFSU2_TR(0x6bed10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed11:{NFSU2_TR(0x6bed11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed12:{NFSU2_TR(0x6bed12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed14:{NFSU2_TR(0x6bed14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed15:{NFSU2_TR(0x6bed15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed16:{NFSU2_TR(0x6bed16);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bed19:{NFSU2_TR(0x6bed19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed1a:{NFSU2_TR(0x6bed1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bed20:{NFSU2_TR(0x6bed20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bed23:{NFSU2_TR(0x6bed23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed25:{NFSU2_TR(0x6bed25);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bed27:{NFSU2_TR(0x6bed27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed28:{NFSU2_TR(0x6bed28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed2a:L6bed2a:{c.instructions+=2;NFSU2_TR(0x6bed2a);
__builtin_memmove((R+4),(R+24),4);
}
B6bed2c:{NFSU2_TR(0x6bed2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bed31ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bed31:L6bed31:{c.instructions+=2;NFSU2_TR(0x6bed31);
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
B6bed33:{NFSU2_TR(0x6bed33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6bed39:L6bed39:{c.instructions+=4;NFSU2_TR(0x6bed39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bed3c:{NFSU2_TR(0x6bed3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bed3f:{NFSU2_TR(0x6bed3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bed42:{NFSU2_TR(0x6bed42);
{goto L6bee10;}
}
B6bed47:L6bed47:{c.instructions+=2;NFSU2_TR(0x6bed47);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bed4a:{NFSU2_TR(0x6bed4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bed85;}}
}
B6bed4c:L6bed4c:{c.instructions+=5;NFSU2_TR(0x6bed4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bed4f:{NFSU2_TR(0x6bed4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bed52:{NFSU2_TR(0x6bed52);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bed55:{NFSU2_TR(0x6bed55);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bed59:{NFSU2_TR(0x6bed59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bed85;}}
}
B6bed5b:L6bed5b:{c.instructions+=2;NFSU2_TR(0x6bed5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bed5f:{NFSU2_TR(0x6bed5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bee04;}}
}
B6bed65:L6bed65:{c.instructions+=17;NFSU2_TR(0x6bed65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bed6b:{NFSU2_TR(0x6bed6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bed6e:{NFSU2_TR(0x6bed6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bed71:{NFSU2_TR(0x6bed71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed72:{NFSU2_TR(0x6bed72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed73:{NFSU2_TR(0x6bed73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed74:{NFSU2_TR(0x6bed74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed75:{NFSU2_TR(0x6bed75);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed77:{NFSU2_TR(0x6bed77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed78:{NFSU2_TR(0x6bed78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed79:{NFSU2_TR(0x6bed79);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6bed7b:{NFSU2_TR(0x6bed7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed7c:{NFSU2_TR(0x6bed7c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed7e:{NFSU2_TR(0x6bed7e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bed80:{NFSU2_TR(0x6bed80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed81:{NFSU2_TR(0x6bed81);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed83:{NFSU2_TR(0x6bed83);
{goto L6bedf9;}
}
B6bed85:L6bed85:{c.instructions+=2;NFSU2_TR(0x6bed85);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bed88:{NFSU2_TR(0x6bed88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bee04;}}
}
B6bed8a:L6bed8a:{c.instructions+=2;NFSU2_TR(0x6bed8a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bed8d:{NFSU2_TR(0x6bed8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bedb6;}}
}
B6bed8f:L6bed8f:{c.instructions+=9;NFSU2_TR(0x6bed8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bed91:{NFSU2_TR(0x6bed91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed92:{NFSU2_TR(0x6bed92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed93:{NFSU2_TR(0x6bed93);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed95:{NFSU2_TR(0x6bed95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bed98:{NFSU2_TR(0x6bed98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bed99:{NFSU2_TR(0x6bed99);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bed9f:{NFSU2_TR(0x6bed9f);
__builtin_memmove((R+4),(R+24),4);
}
B6beda1:{NFSU2_TR(0x6beda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6beda7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6beda7:L6beda7:{c.instructions+=2;NFSU2_TR(0x6beda7);
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
B6beda9:{NFSU2_TR(0x6beda9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6bedaf:L6bedaf:{c.instructions+=1;NFSU2_TR(0x6bedaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bedb6:L6bedb6:{c.instructions+=17;NFSU2_TR(0x6bedb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bedbc:{NFSU2_TR(0x6bedbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bedbf:{NFSU2_TR(0x6bedbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc0:{NFSU2_TR(0x6bedc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc1:{NFSU2_TR(0x6bedc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc2:{NFSU2_TR(0x6bedc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc3:{NFSU2_TR(0x6bedc3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc5:{NFSU2_TR(0x6bedc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc6:{NFSU2_TR(0x6bedc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedc7:{NFSU2_TR(0x6bedc7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bedc9:{NFSU2_TR(0x6bedc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedca:{NFSU2_TR(0x6bedca);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedcc:{NFSU2_TR(0x6bedcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bedcf:{NFSU2_TR(0x6bedcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedd0:{NFSU2_TR(0x6bedd0);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedd2:{NFSU2_TR(0x6bedd2);
__builtin_memmove((R+4),(R+24),4);
}
B6bedd4:{NFSU2_TR(0x6bedd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bedd9ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bedd9:L6bedd9:{c.instructions+=2;NFSU2_TR(0x6bedd9);
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
B6beddb:{NFSU2_TR(0x6beddb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6beddd:L6beddd:{c.instructions+=15;NFSU2_TR(0x6beddd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedde:{NFSU2_TR(0x6bedde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beddf:{NFSU2_TR(0x6beddf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bede0:{NFSU2_TR(0x6bede0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bede1:{NFSU2_TR(0x6bede1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bede3:{NFSU2_TR(0x6bede3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bede4:{NFSU2_TR(0x6bede4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bede5:{NFSU2_TR(0x6bede5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bede8:{NFSU2_TR(0x6bede8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bede9:{NFSU2_TR(0x6bede9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bedef:{NFSU2_TR(0x6bedef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bedf2:{NFSU2_TR(0x6bedf2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedf4:{NFSU2_TR(0x6bedf4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bedf6:{NFSU2_TR(0x6bedf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedf7:{NFSU2_TR(0x6bedf7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bedf9:L6bedf9:{c.instructions+=2;NFSU2_TR(0x6bedf9);
__builtin_memmove((R+4),(R+24),4);
}
B6bedfb:{NFSU2_TR(0x6bedfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bee00ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bee00:L6bee00:{c.instructions+=2;NFSU2_TR(0x6bee00);
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
B6bee02:{NFSU2_TR(0x6bee02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bee34;}}
}
B6bee04:L6bee04:{c.instructions+=3;NFSU2_TR(0x6bee04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bee08:{NFSU2_TR(0x6bee08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bee0c:{NFSU2_TR(0x6bee0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bee10:L6bee10:{c.instructions+=5;NFSU2_TR(0x6bee10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bee16:{NFSU2_TR(0x6bee16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bee19:{NFSU2_TR(0x6bee19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6bee1c:{NFSU2_TR(0x6bee1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bee1f:{NFSU2_TR(0x6bee1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bec4fu);}goto L6bec4f;}}
}
B6bee25:L6bee25:{c.instructions+=3;NFSU2_TR(0x6bee25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bee28:{NFSU2_TR(0x6bee28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6bee2c:{NFSU2_TR(0x6bee2c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bec2au);}goto L6bec2a;}}
}
B6bee32:L6bee32:{c.instructions+=1;NFSU2_TR(0x6bee32);
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
B6bee34:L6bee34:{c.instructions+=5;NFSU2_TR(0x6bee34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bee35:{NFSU2_TR(0x6bee35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bee36:{NFSU2_TR(0x6bee36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bee37:{NFSU2_TR(0x6bee37);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bee38:{NFSU2_TR(0x6bee38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bee39:L6bee39:{c.instructions+=14;NFSU2_TR(0x6bee39);
__builtin_memmove((R+28),(R+28),4);
}
B6bee3b:{NFSU2_TR(0x6bee3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee3c:{NFSU2_TR(0x6bee3c);
__builtin_memmove((R+20),(R+16),4);
}
B6bee3e:{NFSU2_TR(0x6bee3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6bee41:{NFSU2_TR(0x6bee41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee42:{NFSU2_TR(0x6bee42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee43:{NFSU2_TR(0x6bee43);
__builtin_memmove((R+24),(R+4),4);
}
B6bee45:{NFSU2_TR(0x6bee45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bee4b:{NFSU2_TR(0x6bee4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bee4e:{NFSU2_TR(0x6bee4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee4f:{NFSU2_TR(0x6bee4f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bee51:{NFSU2_TR(0x6bee51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bee53:{NFSU2_TR(0x6bee53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bee56:{NFSU2_TR(0x6bee56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bee74;}}
}
B6bee58:L6bee58:{c.instructions+=2;NFSU2_TR(0x6bee58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bee5b:{NFSU2_TR(0x6bee5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bee5e:L6bee5e:{c.instructions+=4;NFSU2_TR(0x6bee5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6bee60:{NFSU2_TR(0x6bee60);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6bee63:{NFSU2_TR(0x6bee63);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bee67:{NFSU2_TR(0x6bee67);
if(r1(R+518)){{goto L6bee74;}}
}
B6bee69:L6bee69:{c.instructions+=4;NFSU2_TR(0x6bee69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bee6c:{NFSU2_TR(0x6bee6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bee6f:{NFSU2_TR(0x6bee6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6bee72:{NFSU2_TR(0x6bee72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bee5eu);}goto L6bee5e;}}
}
B6bee74:L6bee74:{c.instructions+=2;NFSU2_TR(0x6bee74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6bee77:{NFSU2_TR(0x6bee77);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bee91;}}
}
B6bee79:L6bee79:{c.instructions+=9;NFSU2_TR(0x6bee79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bee7f:{NFSU2_TR(0x6bee7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee80:{NFSU2_TR(0x6bee80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee81:{NFSU2_TR(0x6bee81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bee84:{NFSU2_TR(0x6bee84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bee87:{NFSU2_TR(0x6bee87);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bee8a:{NFSU2_TR(0x6bee8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bee8d:{NFSU2_TR(0x6bee8d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bee8f:{NFSU2_TR(0x6bee8f);
{goto L6beeb9;}
}
B6bee91:L6bee91:{c.instructions+=5;NFSU2_TR(0x6bee91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bee97:{NFSU2_TR(0x6bee97);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bee9c:{NFSU2_TR(0x6bee9c);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6beea1:{NFSU2_TR(0x6beea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6beea7:{NFSU2_TR(0x6beea7);
if(r1(R+512)){{goto L6beec5;}}
}
B6beea9:L6beea9:{c.instructions+=7;NFSU2_TR(0x6beea9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beeaa:{NFSU2_TR(0x6beeaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beeab:{NFSU2_TR(0x6beeab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beeae:{NFSU2_TR(0x6beeae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beeb1:{NFSU2_TR(0x6beeb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beeb4:{NFSU2_TR(0x6beeb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beeb7:{NFSU2_TR(0x6beeb7);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beeb9:L6beeb9:{c.instructions+=2;NFSU2_TR(0x6beeb9);
__builtin_memmove((R+4),(R+24),4);
}
B6beebb:{NFSU2_TR(0x6beebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6beec0ull));
TAIL_STATIC(0x6d3382u,6d3);
}
B6beec0:L6beec0:{c.instructions+=1;NFSU2_TR(0x6beec0);
TAIL_STATIC(0x6bf06bu,6bf);
}
B6beec5:L6beec5:{c.instructions+=4;NFSU2_TR(0x6beec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6beec8:{NFSU2_TR(0x6beec8);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6beecb:{NFSU2_TR(0x6beecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6beece:{NFSU2_TR(0x6beece);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bef64;}}
}
B6beed4:L6beed4:{c.instructions+=9;NFSU2_TR(0x6beed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6beed6:{NFSU2_TR(0x6beed6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beed7:{NFSU2_TR(0x6beed7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beed8:{NFSU2_TR(0x6beed8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beeda:{NFSU2_TR(0x6beeda);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6beedd:{NFSU2_TR(0x6beedd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beede:{NFSU2_TR(0x6beede);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6beee4:{NFSU2_TR(0x6beee4);
__builtin_memmove((R+4),(R+24),4);
}
B6beee6:{NFSU2_TR(0x6beee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6beeecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6beeec:L6beeec:{c.instructions+=2;NFSU2_TR(0x6beeec);
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
B6beeee:{NFSU2_TR(0x6beeee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bf06bu,6bf);}
}
B6beef4:L6beef4:{c.instructions+=15;NFSU2_TR(0x6beef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6beefa:{NFSU2_TR(0x6beefa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beefb:{NFSU2_TR(0x6beefb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beefc:{NFSU2_TR(0x6beefc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beefd:{NFSU2_TR(0x6beefd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beefe:{NFSU2_TR(0x6beefe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef00:{NFSU2_TR(0x6bef00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef01:{NFSU2_TR(0x6bef01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef02:{NFSU2_TR(0x6bef02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bef05:{NFSU2_TR(0x6bef05);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bef08:{NFSU2_TR(0x6bef08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef0a:{NFSU2_TR(0x6bef0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef0b:{NFSU2_TR(0x6bef0b);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef0d:{NFSU2_TR(0x6bef0d);
__builtin_memmove((R+4),(R+24),4);
}
B6bef0f:{NFSU2_TR(0x6bef0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bef14ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bef14:L6bef14:{c.instructions+=2;NFSU2_TR(0x6bef14);
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
B6bef16:{NFSU2_TR(0x6bef16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bf06bu,6bf);}
}
B6bef1c:L6bef1c:{c.instructions+=4;NFSU2_TR(0x6bef1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bef22:{NFSU2_TR(0x6bef22);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bef24:{NFSU2_TR(0x6bef24);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bef27:{NFSU2_TR(0x6bef27);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bef36;}}
}
B6bef29:L6bef29:{c.instructions+=5;NFSU2_TR(0x6bef29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bef2c:{NFSU2_TR(0x6bef2c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bef30:{NFSU2_TR(0x6bef30);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bef31:{NFSU2_TR(0x6bef31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bef34:{NFSU2_TR(0x6bef34);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bef29u);}goto L6bef29;}}
}
B6bef36:L6bef36:{c.instructions+=16;NFSU2_TR(0x6bef36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bef3c:{NFSU2_TR(0x6bef3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bef3f:{NFSU2_TR(0x6bef3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef40:{NFSU2_TR(0x6bef40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef41:{NFSU2_TR(0x6bef41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef42:{NFSU2_TR(0x6bef42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef43:{NFSU2_TR(0x6bef43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef44:{NFSU2_TR(0x6bef44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef45:{NFSU2_TR(0x6bef45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef46:{NFSU2_TR(0x6bef46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bef49:{NFSU2_TR(0x6bef49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef4a:{NFSU2_TR(0x6bef4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef4b:{NFSU2_TR(0x6bef4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bef4e:{NFSU2_TR(0x6bef4e);
__builtin_memmove((R+4),(R+24),4);
}
B6bef50:{NFSU2_TR(0x6bef50);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bef52:{NFSU2_TR(0x6bef52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bef57ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bef57:L6bef57:{c.instructions+=2;NFSU2_TR(0x6bef57);
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
B6bef59:{NFSU2_TR(0x6bef59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bf069u,6bf);}
}
B6bef5f:L6bef5f:{c.instructions+=1;NFSU2_TR(0x6bef5f);
TAIL_STATIC(0x6bf06bu,6bf);
}
B6bef64:L6bef64:{c.instructions+=3;NFSU2_TR(0x6bef64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bef66:{NFSU2_TR(0x6bef66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bef69:{NFSU2_TR(0x6bef69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bf069u,6bf);}
}
B6bef6f:L6bef6f:{c.instructions+=13;NFSU2_TR(0x6bef6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bef75:{NFSU2_TR(0x6bef75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bef78:{NFSU2_TR(0x6bef78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bef7b:{NFSU2_TR(0x6bef7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bef7e:{NFSU2_TR(0x6bef7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bef81:{NFSU2_TR(0x6bef81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6bef84:{NFSU2_TR(0x6bef84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bef87:{NFSU2_TR(0x6bef87);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bef8a:{NFSU2_TR(0x6bef8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bef8d:{NFSU2_TR(0x6bef8d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bef8f:{NFSU2_TR(0x6bef8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bef92:{NFSU2_TR(0x6bef92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bef95:{NFSU2_TR(0x6bef95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6befa0;}}
}
B6bef97:L6bef97:{c.instructions+=2;NFSU2_TR(0x6bef97);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6bef9a:{NFSU2_TR(0x6bef9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bf02bu,6bf);}
}
B6befa0:L6befa0:{c.instructions+=2;NFSU2_TR(0x6befa0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6befa3:{NFSU2_TR(0x6befa3);
if(r1(R+518)){TAIL_STATIC(0x6bf02bu,6bf);}
}
B6befa9:L6befa9:{c.instructions+=2;NFSU2_TR(0x6befa9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6befac:{NFSU2_TR(0x6befac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6befba;}}
}
B6befae:L6befae:{c.instructions+=3;NFSU2_TR(0x6befae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6befb0:{NFSU2_TR(0x6befb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6befb3:{NFSU2_TR(0x6befb3);
if(r1(R+518)){{goto L6befba;}}
}
B6befb5:L6befb5:{c.instructions+=2;NFSU2_TR(0x6befb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6befb8:{NFSU2_TR(0x6befb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6bf02bu,6bf);}
}
B6befba:L6befba:{c.instructions+=2;NFSU2_TR(0x6befba);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6befbd:{NFSU2_TR(0x6befbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6befe6;}}
}
B6befbf:L6befbf:{c.instructions+=9;NFSU2_TR(0x6befbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6befc1:{NFSU2_TR(0x6befc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6befc2:{NFSU2_TR(0x6befc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6befc3:{NFSU2_TR(0x6befc3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6befc5:{NFSU2_TR(0x6befc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6befc8:{NFSU2_TR(0x6befc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6befc9:{NFSU2_TR(0x6befc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6befcf:{NFSU2_TR(0x6befcf);
__builtin_memmove((R+4),(R+24),4);
}
B6befd1:{NFSU2_TR(0x6befd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6befd7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6befd7:L6befd7:{c.instructions+=2;NFSU2_TR(0x6befd7);
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
B6befd9:{NFSU2_TR(0x6befd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6bf06bu,6bf);}
}
B6befdf:L6befdf:{c.instructions+=1;NFSU2_TR(0x6befdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6befe6:L6befe6:{c.instructions+=14;NFSU2_TR(0x6befe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6befec:{NFSU2_TR(0x6befec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6befef:{NFSU2_TR(0x6befef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff0:{NFSU2_TR(0x6beff0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff1:{NFSU2_TR(0x6beff1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff2:{NFSU2_TR(0x6beff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff3:{NFSU2_TR(0x6beff3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff5:{NFSU2_TR(0x6beff5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff6:{NFSU2_TR(0x6beff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beff7:{NFSU2_TR(0x6beff7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6beff9:{NFSU2_TR(0x6beff9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beffa:{NFSU2_TR(0x6beffa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6beffc:{NFSU2_TR(0x6beffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6befff:{NFSU2_TR(0x6befff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x6bf000u,6bf);
}
XIT:NFSU2_TR_EXIT(0x6be,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
