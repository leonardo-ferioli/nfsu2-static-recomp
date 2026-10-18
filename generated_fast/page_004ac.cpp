#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ac,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ac,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 page_4ac(Cpu& c){return body_4ac(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ac(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ac000:goto L4ac000;
case 0x4ac001:goto L4ac001;
case 0x4ac006:c.instructions+=1;goto B4ac006;
case 0x4ac007:goto L4ac007;
case 0x4ac00c:c.instructions+=1;goto B4ac00c;
case 0x4ac00d:goto L4ac00d;
case 0x4ac012:c.instructions+=1;goto B4ac012;
case 0x4ac013:goto L4ac013;
case 0x4ac018:c.instructions+=1;goto B4ac018;
case 0x4ac040:goto L4ac040;
case 0x4ac044:c.instructions+=5;goto B4ac044;
case 0x4ac047:c.instructions+=4;goto B4ac047;
case 0x4ac04d:c.instructions+=3;goto B4ac04d;
case 0x4ac050:c.instructions+=2;goto B4ac050;
case 0x4ac051:c.instructions+=1;goto B4ac051;
case 0x4ac056:goto L4ac056;
case 0x4ac058:c.instructions+=2;goto B4ac058;
case 0x4ac05a:c.instructions+=1;goto B4ac05a;
case 0x4ac060:goto L4ac060;
case 0x4ac061:c.instructions+=11;goto B4ac061;
case 0x4ac062:c.instructions+=10;goto B4ac062;
case 0x4ac066:c.instructions+=9;goto B4ac066;
case 0x4ac06b:c.instructions+=8;goto B4ac06b;
case 0x4ac06c:c.instructions+=7;goto B4ac06c;
case 0x4ac06d:c.instructions+=6;goto B4ac06d;
case 0x4ac06f:c.instructions+=5;goto B4ac06f;
case 0x4ac070:c.instructions+=4;goto B4ac070;
case 0x4ac072:c.instructions+=3;goto B4ac072;
case 0x4ac076:c.instructions+=2;goto B4ac076;
case 0x4ac07c:c.instructions+=1;goto B4ac07c;
case 0x4ac07e:goto L4ac07e;
case 0x4ac07f:c.instructions+=7;goto B4ac07f;
case 0x4ac085:c.instructions+=6;goto B4ac085;
case 0x4ac088:c.instructions+=5;goto B4ac088;
case 0x4ac08a:c.instructions+=4;goto B4ac08a;
case 0x4ac08d:c.instructions+=3;goto B4ac08d;
case 0x4ac090:c.instructions+=2;goto B4ac090;
case 0x4ac094:c.instructions+=1;goto B4ac094;
case 0x4ac096:goto L4ac096;
case 0x4ac098:c.instructions+=1;goto B4ac098;
case 0x4ac09a:goto L4ac09a;
case 0x4ac09c:c.instructions+=1;goto B4ac09c;
case 0x4ac09e:goto L4ac09e;
case 0x4ac0a1:c.instructions+=1;goto B4ac0a1;
case 0x4ac0a3:goto L4ac0a3;
case 0x4ac0a7:c.instructions+=3;goto B4ac0a7;
case 0x4ac0a8:c.instructions+=2;goto B4ac0a8;
case 0x4ac0a9:c.instructions+=1;goto B4ac0a9;
case 0x4ac0aa:goto L4ac0aa;
case 0x4ac0ac:c.instructions+=1;goto B4ac0ac;
case 0x4ac0ae:goto L4ac0ae;
case 0x4ac0b0:c.instructions+=1;goto B4ac0b0;
case 0x4ac0b2:goto L4ac0b2;
case 0x4ac0b6:c.instructions+=4;goto B4ac0b6;
case 0x4ac0b7:c.instructions+=3;goto B4ac0b7;
case 0x4ac0b8:c.instructions+=2;goto B4ac0b8;
case 0x4ac0bc:c.instructions+=1;goto B4ac0bc;
case 0x4ac0bd:goto L4ac0bd;
case 0x4ac0c1:c.instructions+=5;goto B4ac0c1;
case 0x4ac0c2:c.instructions+=4;goto B4ac0c2;
case 0x4ac0c6:c.instructions+=3;goto B4ac0c6;
case 0x4ac0c8:c.instructions+=2;goto B4ac0c8;
case 0x4ac0cc:c.instructions+=1;goto B4ac0cc;
case 0x4ac0ce:goto L4ac0ce;
case 0x4ac0cf:goto L4ac0cf;
case 0x4ac0d1:c.instructions+=2;goto B4ac0d1;
case 0x4ac0d6:c.instructions+=1;goto B4ac0d6;
case 0x4ac0d8:goto L4ac0d8;
case 0x4ac0dc:c.instructions+=1;goto B4ac0dc;
case 0x4ac0e0:goto L4ac0e0;
case 0x4ac0e2:c.instructions+=5;goto B4ac0e2;
case 0x4ac0e5:c.instructions+=4;goto B4ac0e5;
case 0x4ac0ec:c.instructions+=3;goto B4ac0ec;
case 0x4ac0ed:c.instructions+=2;goto B4ac0ed;
case 0x4ac0ee:c.instructions+=1;goto B4ac0ee;
case 0x4ac0f0:goto L4ac0f0;
case 0x4ac0f2:c.instructions+=1;goto B4ac0f2;
case 0x4ac0f4:goto L4ac0f4;
case 0x4ac0fb:c.instructions+=1;goto B4ac0fb;
case 0x4ac0fc:goto L4ac0fc;
case 0x4ac0fe:c.instructions+=1;goto B4ac0fe;
case 0x4ac100:goto L4ac100;
case 0x4ac107:c.instructions+=1;goto B4ac107;
case 0x4ac10b:goto L4ac10b;
case 0x4ac10d:goto L4ac10d;
case 0x4ac10e:c.instructions+=2;goto B4ac10e;
case 0x4ac10f:c.instructions+=1;goto B4ac10f;
case 0x4ac110:goto L4ac110;
case 0x4ac113:c.instructions+=1;goto B4ac113;
case 0x4ac120:goto L4ac120;
case 0x4ac121:c.instructions+=9;goto B4ac121;
case 0x4ac124:c.instructions+=8;goto B4ac124;
case 0x4ac127:c.instructions+=7;goto B4ac127;
case 0x4ac12a:c.instructions+=6;goto B4ac12a;
case 0x4ac12d:c.instructions+=5;goto B4ac12d;
case 0x4ac12f:c.instructions+=4;goto B4ac12f;
case 0x4ac132:c.instructions+=3;goto B4ac132;
case 0x4ac134:c.instructions+=2;goto B4ac134;
case 0x4ac136:c.instructions+=1;goto B4ac136;
case 0x4ac138:goto L4ac138;
case 0x4ac13c:c.instructions+=7;goto B4ac13c;
case 0x4ac143:c.instructions+=6;goto B4ac143;
case 0x4ac148:c.instructions+=5;goto B4ac148;
case 0x4ac14e:c.instructions+=4;goto B4ac14e;
case 0x4ac151:c.instructions+=3;goto B4ac151;
case 0x4ac152:c.instructions+=2;goto B4ac152;
case 0x4ac153:c.instructions+=1;goto B4ac153;
case 0x4ac158:goto L4ac158;
case 0x4ac15b:c.instructions+=2;goto B4ac15b;
case 0x4ac15c:c.instructions+=1;goto B4ac15c;
case 0x4ac161:goto L4ac161;
case 0x4ac164:goto L4ac164;
case 0x4ac165:c.instructions+=1;goto B4ac165;
case 0x4ac170:goto L4ac170;
case 0x4ac173:c.instructions+=2;goto B4ac173;
case 0x4ac175:c.instructions+=1;goto B4ac175;
case 0x4ac177:goto L4ac177;
case 0x4ac17b:c.instructions+=7;goto B4ac17b;
case 0x4ac17f:c.instructions+=6;goto B4ac17f;
case 0x4ac183:c.instructions+=5;goto B4ac183;
case 0x4ac188:c.instructions+=4;goto B4ac188;
case 0x4ac192:c.instructions+=3;goto B4ac192;
case 0x4ac198:c.instructions+=2;goto B4ac198;
case 0x4ac19e:c.instructions+=1;goto B4ac19e;
case 0x4ac1a5:goto L4ac1a5;
case 0x4ac1b0:goto L4ac1b0;
case 0x4ac1b6:c.instructions+=2;goto B4ac1b6;
case 0x4ac1b8:c.instructions+=1;goto B4ac1b8;
case 0x4ac1ba:goto L4ac1ba;
case 0x4ac1be:c.instructions+=1;goto B4ac1be;
case 0x4ac1c1:goto L4ac1c1;
case 0x4ac1c7:c.instructions+=2;goto B4ac1c7;
case 0x4ac1c9:c.instructions+=1;goto B4ac1c9;
case 0x4ac1cb:goto L4ac1cb;
case 0x4ac1d3:c.instructions+=1;goto B4ac1d3;
case 0x4ac1d8:goto L4ac1d8;
case 0x4ac1e0:goto L4ac1e0;
case 0x4ac1e4:c.instructions+=2;goto B4ac1e4;
case 0x4ac1e7:c.instructions+=1;goto B4ac1e7;
case 0x4ac1e9:goto L4ac1e9;
case 0x4ac1f0:goto L4ac1f0;
case 0x4ac1f5:c.instructions+=1;goto B4ac1f5;
case 0x4ac1f6:goto L4ac1f6;
case 0x4ac1fb:c.instructions+=1;goto B4ac1fb;
case 0x4ac1fc:goto L4ac1fc;
case 0x4ac201:c.instructions+=1;goto B4ac201;
case 0x4ac202:goto L4ac202;
case 0x4ac207:c.instructions+=1;goto B4ac207;
case 0x4ac208:goto L4ac208;
case 0x4ac20d:c.instructions+=1;goto B4ac20d;
case 0x4ac20e:goto L4ac20e;
case 0x4ac213:c.instructions+=1;goto B4ac213;
case 0x4ac214:goto L4ac214;
case 0x4ac219:c.instructions+=1;goto B4ac219;
case 0x4ac21a:goto L4ac21a;
case 0x4ac21f:c.instructions+=1;goto B4ac21f;
case 0x4ac220:goto L4ac220;
case 0x4ac225:c.instructions+=1;goto B4ac225;
case 0x4ac226:goto L4ac226;
case 0x4ac22b:c.instructions+=1;goto B4ac22b;
case 0x4ac22c:goto L4ac22c;
case 0x4ac231:c.instructions+=1;goto B4ac231;
case 0x4ac232:goto L4ac232;
case 0x4ac237:c.instructions+=1;goto B4ac237;
case 0x4ac238:goto L4ac238;
case 0x4ac23d:c.instructions+=1;goto B4ac23d;
case 0x4ac23e:goto L4ac23e;
case 0x4ac243:c.instructions+=1;goto B4ac243;
case 0x4ac244:goto L4ac244;
case 0x4ac246:c.instructions+=1;goto B4ac246;
case 0x4ac290:goto L4ac290;
case 0x4ac294:c.instructions+=4;goto B4ac294;
case 0x4ac29a:c.instructions+=3;goto B4ac29a;
case 0x4ac29b:c.instructions+=2;goto B4ac29b;
case 0x4ac29c:c.instructions+=1;goto B4ac29c;
case 0x4ac2a1:goto L4ac2a1;
case 0x4ac2a4:c.instructions+=1;goto B4ac2a4;
case 0x4ac2b0:goto L4ac2b0;
case 0x4ac2b1:c.instructions+=4;goto B4ac2b1;
case 0x4ac2b3:c.instructions+=3;goto B4ac2b3;
case 0x4ac2b6:c.instructions+=2;goto B4ac2b6;
case 0x4ac2b8:c.instructions+=1;goto B4ac2b8;
case 0x4ac2ba:goto L4ac2ba;
case 0x4ac2bd:c.instructions+=1;goto B4ac2bd;
case 0x4ac2bf:goto L4ac2bf;
case 0x4ac2c1:goto L4ac2c1;
case 0x4ac2c2:c.instructions+=2;goto B4ac2c2;
case 0x4ac2c5:c.instructions+=1;goto B4ac2c5;
case 0x4ac2cb:goto L4ac2cb;
case 0x4ac2d2:c.instructions+=2;goto B4ac2d2;
case 0x4ac2d3:c.instructions+=1;goto B4ac2d3;
case 0x4ac2da:goto L4ac2da;
case 0x4ac2dd:c.instructions+=9;goto B4ac2dd;
case 0x4ac2e1:c.instructions+=8;goto B4ac2e1;
case 0x4ac2e3:c.instructions+=7;goto B4ac2e3;
case 0x4ac2e6:c.instructions+=6;goto B4ac2e6;
case 0x4ac2e9:c.instructions+=5;goto B4ac2e9;
case 0x4ac2ec:c.instructions+=4;goto B4ac2ec;
case 0x4ac2f2:c.instructions+=3;goto B4ac2f2;
case 0x4ac2f3:c.instructions+=2;goto B4ac2f3;
case 0x4ac2f6:c.instructions+=1;goto B4ac2f6;
case 0x4ac2fb:goto L4ac2fb;
case 0x4ac300:goto L4ac300;
case 0x4ac303:c.instructions+=3;goto B4ac303;
case 0x4ac309:c.instructions+=2;goto B4ac309;
case 0x4ac30a:c.instructions+=1;goto B4ac30a;
case 0x4ac30f:goto L4ac30f;
case 0x4ac311:c.instructions+=2;goto B4ac311;
case 0x4ac313:c.instructions+=1;goto B4ac313;
case 0x4ac319:goto L4ac319;
case 0x4ac31c:c.instructions+=11;goto B4ac31c;
case 0x4ac320:c.instructions+=10;goto B4ac320;
case 0x4ac322:c.instructions+=9;goto B4ac322;
case 0x4ac325:c.instructions+=8;goto B4ac325;
case 0x4ac328:c.instructions+=7;goto B4ac328;
case 0x4ac32f:c.instructions+=6;goto B4ac32f;
case 0x4ac333:c.instructions+=5;goto B4ac333;
case 0x4ac334:c.instructions+=4;goto B4ac334;
case 0x4ac338:c.instructions+=3;goto B4ac338;
case 0x4ac33e:c.instructions+=2;goto B4ac33e;
case 0x4ac341:c.instructions+=1;goto B4ac341;
case 0x4ac346:goto L4ac346;
case 0x4ac34a:c.instructions+=7;goto B4ac34a;
case 0x4ac34c:c.instructions+=6;goto B4ac34c;
case 0x4ac353:c.instructions+=5;goto B4ac353;
case 0x4ac357:c.instructions+=4;goto B4ac357;
case 0x4ac35b:c.instructions+=3;goto B4ac35b;
case 0x4ac361:c.instructions+=2;goto B4ac361;
case 0x4ac364:c.instructions+=1;goto B4ac364;
case 0x4ac369:goto L4ac369;
case 0x4ac36c:c.instructions+=4;goto B4ac36c;
case 0x4ac36f:c.instructions+=3;goto B4ac36f;
case 0x4ac370:c.instructions+=2;goto B4ac370;
case 0x4ac371:c.instructions+=1;goto B4ac371;
case 0x4ac374:goto L4ac374;
case 0x4ac377:c.instructions+=3;goto B4ac377;
case 0x4ac37e:c.instructions+=2;goto B4ac37e;
case 0x4ac380:c.instructions+=1;goto B4ac380;
case 0x4ac386:goto L4ac386;
case 0x4ac389:c.instructions+=2;goto B4ac389;
case 0x4ac38b:c.instructions+=1;goto B4ac38b;
case 0x4ac391:goto L4ac391;
case 0x4ac394:c.instructions+=11;goto B4ac394;
case 0x4ac398:c.instructions+=10;goto B4ac398;
case 0x4ac39a:c.instructions+=9;goto B4ac39a;
case 0x4ac39d:c.instructions+=8;goto B4ac39d;
case 0x4ac3a0:c.instructions+=7;goto B4ac3a0;
case 0x4ac3a7:c.instructions+=6;goto B4ac3a7;
case 0x4ac3ab:c.instructions+=5;goto B4ac3ab;
case 0x4ac3ac:c.instructions+=4;goto B4ac3ac;
case 0x4ac3b0:c.instructions+=3;goto B4ac3b0;
case 0x4ac3b6:c.instructions+=2;goto B4ac3b6;
case 0x4ac3b9:c.instructions+=1;goto B4ac3b9;
case 0x4ac3be:goto L4ac3be;
case 0x4ac3c2:c.instructions+=7;goto B4ac3c2;
case 0x4ac3c4:c.instructions+=6;goto B4ac3c4;
case 0x4ac3cb:c.instructions+=5;goto B4ac3cb;
case 0x4ac3cf:c.instructions+=4;goto B4ac3cf;
case 0x4ac3d3:c.instructions+=3;goto B4ac3d3;
case 0x4ac3d9:c.instructions+=2;goto B4ac3d9;
case 0x4ac3dc:c.instructions+=1;goto B4ac3dc;
case 0x4ac3e1:goto L4ac3e1;
case 0x4ac3e4:c.instructions+=4;goto B4ac3e4;
case 0x4ac3e7:c.instructions+=3;goto B4ac3e7;
case 0x4ac3e8:c.instructions+=2;goto B4ac3e8;
case 0x4ac3e9:c.instructions+=1;goto B4ac3e9;
case 0x4ac3ec:goto L4ac3ec;
case 0x4ac3ef:c.instructions+=10;goto B4ac3ef;
case 0x4ac3f3:c.instructions+=9;goto B4ac3f3;
case 0x4ac3f5:c.instructions+=8;goto B4ac3f5;
case 0x4ac3f8:c.instructions+=7;goto B4ac3f8;
case 0x4ac3fb:c.instructions+=6;goto B4ac3fb;
case 0x4ac3fe:c.instructions+=5;goto B4ac3fe;
case 0x4ac404:c.instructions+=4;goto B4ac404;
case 0x4ac405:c.instructions+=3;goto B4ac405;
case 0x4ac40b:c.instructions+=2;goto B4ac40b;
case 0x4ac40e:c.instructions+=1;goto B4ac40e;
case 0x4ac413:goto L4ac413;
case 0x4ac417:c.instructions+=5;goto B4ac417;
case 0x4ac419:c.instructions+=4;goto B4ac419;
case 0x4ac41c:c.instructions+=3;goto B4ac41c;
case 0x4ac422:c.instructions+=2;goto B4ac422;
case 0x4ac425:c.instructions+=1;goto B4ac425;
case 0x4ac42a:goto L4ac42a;
case 0x4ac42d:c.instructions+=1;goto B4ac42d;
case 0x4ac430:goto L4ac430;
case 0x4ac431:goto L4ac431;
case 0x4ac432:c.instructions+=1;goto B4ac432;
case 0x4ac460:goto L4ac460;
case 0x4ac463:c.instructions+=6;goto B4ac463;
case 0x4ac464:c.instructions+=5;goto B4ac464;
case 0x4ac466:c.instructions+=4;goto B4ac466;
case 0x4ac469:c.instructions+=3;goto B4ac469;
case 0x4ac46b:c.instructions+=2;goto B4ac46b;
case 0x4ac46c:c.instructions+=1;goto B4ac46c;
case 0x4ac472:goto L4ac472;
case 0x4ac475:c.instructions+=2;goto B4ac475;
case 0x4ac478:c.instructions+=1;goto B4ac478;
case 0x4ac47e:goto L4ac47e;
case 0x4ac481:c.instructions+=1;goto B4ac481;
case 0x4ac487:goto L4ac487;
case 0x4ac48a:c.instructions+=1;goto B4ac48a;
case 0x4ac490:goto L4ac490;
case 0x4ac493:c.instructions+=2;goto B4ac493;
case 0x4ac496:c.instructions+=1;goto B4ac496;
case 0x4ac498:goto L4ac498;
case 0x4ac49b:c.instructions+=2;goto B4ac49b;
case 0x4ac49d:c.instructions+=1;goto B4ac49d;
case 0x4ac49f:goto L4ac49f;
case 0x4ac4a3:c.instructions+=1;goto B4ac4a3;
case 0x4ac4a5:goto L4ac4a5;
case 0x4ac4a7:c.instructions+=2;goto B4ac4a7;
case 0x4ac4a8:c.instructions+=1;goto B4ac4a8;
case 0x4ac4ad:goto L4ac4ad;
case 0x4ac4af:c.instructions+=4;goto B4ac4af;
case 0x4ac4b2:c.instructions+=3;goto B4ac4b2;
case 0x4ac4b5:c.instructions+=2;goto B4ac4b5;
case 0x4ac4b7:c.instructions+=1;goto B4ac4b7;
case 0x4ac4b9:goto L4ac4b9;
case 0x4ac4bb:c.instructions+=1;goto B4ac4bb;
case 0x4ac4bd:goto L4ac4bd;
case 0x4ac4bf:goto L4ac4bf;
case 0x4ac4c4:c.instructions+=2;goto B4ac4c4;
case 0x4ac4c5:c.instructions+=1;goto B4ac4c5;
case 0x4ac4ca:goto L4ac4ca;
case 0x4ac4cd:c.instructions+=3;goto B4ac4cd;
case 0x4ac4d0:c.instructions+=2;goto B4ac4d0;
case 0x4ac4d2:c.instructions+=1;goto B4ac4d2;
case 0x4ac4d4:goto L4ac4d4;
case 0x4ac4d6:c.instructions+=3;goto B4ac4d6;
case 0x4ac4d7:c.instructions+=2;goto B4ac4d7;
case 0x4ac4d8:c.instructions+=1;goto B4ac4d8;
case 0x4ac4dd:goto L4ac4dd;
case 0x4ac4e0:c.instructions+=4;goto B4ac4e0;
case 0x4ac4e1:c.instructions+=3;goto B4ac4e1;
case 0x4ac4e2:c.instructions+=2;goto B4ac4e2;
case 0x4ac4e5:c.instructions+=1;goto B4ac4e5;
case 0x4ac4e6:goto L4ac4e6;
case 0x4ac4e8:c.instructions+=4;goto B4ac4e8;
case 0x4ac4e9:c.instructions+=3;goto B4ac4e9;
case 0x4ac4ed:c.instructions+=2;goto B4ac4ed;
case 0x4ac4ee:c.instructions+=1;goto B4ac4ee;
case 0x4ac4f3:goto L4ac4f3;
case 0x4ac4f6:c.instructions+=2;goto B4ac4f6;
case 0x4ac4f8:c.instructions+=1;goto B4ac4f8;
case 0x4ac4fd:goto L4ac4fd;
case 0x4ac4ff:c.instructions+=3;goto B4ac4ff;
case 0x4ac502:c.instructions+=2;goto B4ac502;
case 0x4ac504:c.instructions+=1;goto B4ac504;
case 0x4ac506:goto L4ac506;
case 0x4ac508:c.instructions+=1;goto B4ac508;
case 0x4ac50a:goto L4ac50a;
case 0x4ac50c:goto L4ac50c;
case 0x4ac511:c.instructions+=2;goto B4ac511;
case 0x4ac512:c.instructions+=1;goto B4ac512;
case 0x4ac517:goto L4ac517;
case 0x4ac51a:c.instructions+=3;goto B4ac51a;
case 0x4ac51d:c.instructions+=2;goto B4ac51d;
case 0x4ac51f:c.instructions+=1;goto B4ac51f;
case 0x4ac521:goto L4ac521;
case 0x4ac523:c.instructions+=3;goto B4ac523;
case 0x4ac524:c.instructions+=2;goto B4ac524;
case 0x4ac525:c.instructions+=1;goto B4ac525;
case 0x4ac52a:goto L4ac52a;
case 0x4ac52d:c.instructions+=4;goto B4ac52d;
case 0x4ac52e:c.instructions+=3;goto B4ac52e;
case 0x4ac52f:c.instructions+=2;goto B4ac52f;
case 0x4ac532:c.instructions+=1;goto B4ac532;
case 0x4ac533:goto L4ac533;
case 0x4ac535:c.instructions+=3;goto B4ac535;
case 0x4ac536:c.instructions+=2;goto B4ac536;
case 0x4ac537:c.instructions+=1;goto B4ac537;
case 0x4ac53c:goto L4ac53c;
case 0x4ac53f:c.instructions+=4;goto B4ac53f;
case 0x4ac540:c.instructions+=3;goto B4ac540;
case 0x4ac541:c.instructions+=2;goto B4ac541;
case 0x4ac544:c.instructions+=1;goto B4ac544;
case 0x4ac545:goto L4ac545;
case 0x4ac548:c.instructions+=3;goto B4ac548;
case 0x4ac54e:c.instructions+=2;goto B4ac54e;
case 0x4ac54f:c.instructions+=1;goto B4ac54f;
case 0x4ac554:goto L4ac554;
case 0x4ac556:c.instructions+=1;goto B4ac556;
case 0x4ac55c:goto L4ac55c;
case 0x4ac562:c.instructions+=2;goto B4ac562;
case 0x4ac563:c.instructions+=1;goto B4ac563;
case 0x4ac568:goto L4ac568;
case 0x4ac56a:c.instructions+=1;goto B4ac56a;
case 0x4ac570:goto L4ac570;
case 0x4ac574:c.instructions+=2;goto B4ac574;
case 0x4ac577:c.instructions+=1;goto B4ac577;
case 0x4ac579:goto L4ac579;
case 0x4ac57b:c.instructions+=1;goto B4ac57b;
case 0x4ac57d:goto L4ac57d;
case 0x4ac57f:c.instructions+=1;goto B4ac57f;
case 0x4ac581:goto L4ac581;
case 0x4ac583:goto L4ac583;
case 0x4ac584:c.instructions+=3;goto B4ac584;
case 0x4ac588:c.instructions+=2;goto B4ac588;
case 0x4ac589:c.instructions+=1;goto B4ac589;
case 0x4ac58e:goto L4ac58e;
case 0x4ac591:c.instructions+=4;goto B4ac591;
case 0x4ac594:c.instructions+=3;goto B4ac594;
case 0x4ac596:c.instructions+=2;goto B4ac596;
case 0x4ac59e:c.instructions+=1;goto B4ac59e;
case 0x4ac5a0:goto L4ac5a0;
case 0x4ac5a2:c.instructions+=4;goto B4ac5a2;
case 0x4ac5a6:c.instructions+=3;goto B4ac5a6;
case 0x4ac5a7:c.instructions+=2;goto B4ac5a7;
case 0x4ac5a8:c.instructions+=1;goto B4ac5a8;
case 0x4ac5ad:goto L4ac5ad;
case 0x4ac5b0:c.instructions+=4;goto B4ac5b0;
case 0x4ac5b1:c.instructions+=3;goto B4ac5b1;
case 0x4ac5b2:c.instructions+=2;goto B4ac5b2;
case 0x4ac5b5:c.instructions+=1;goto B4ac5b5;
case 0x4ac5b6:goto L4ac5b6;
case 0x4ac5ba:c.instructions+=4;goto B4ac5ba;
case 0x4ac5bb:c.instructions+=3;goto B4ac5bb;
case 0x4ac5bd:c.instructions+=2;goto B4ac5bd;
case 0x4ac5be:c.instructions+=1;goto B4ac5be;
case 0x4ac5c3:goto L4ac5c3;
case 0x4ac5c6:c.instructions+=4;goto B4ac5c6;
case 0x4ac5c7:c.instructions+=3;goto B4ac5c7;
case 0x4ac5c8:c.instructions+=2;goto B4ac5c8;
case 0x4ac5cb:c.instructions+=1;goto B4ac5cb;
case 0x4ac5cc:goto L4ac5cc;
case 0x4ac5ce:c.instructions+=1;goto B4ac5ce;
case 0x4ac5d0:goto L4ac5d0;
case 0x4ac5d2:c.instructions+=1;goto B4ac5d2;
case 0x4ac5d4:goto L4ac5d4;
case 0x4ac5d6:goto L4ac5d6;
case 0x4ac5d7:c.instructions+=3;goto B4ac5d7;
case 0x4ac5db:c.instructions+=2;goto B4ac5db;
case 0x4ac5dc:c.instructions+=1;goto B4ac5dc;
case 0x4ac5e1:goto L4ac5e1;
case 0x4ac5e4:c.instructions+=4;goto B4ac5e4;
case 0x4ac5e7:c.instructions+=3;goto B4ac5e7;
case 0x4ac5e9:c.instructions+=2;goto B4ac5e9;
case 0x4ac5f1:c.instructions+=1;goto B4ac5f1;
case 0x4ac5f3:goto L4ac5f3;
case 0x4ac5f5:c.instructions+=4;goto B4ac5f5;
case 0x4ac5f9:c.instructions+=3;goto B4ac5f9;
case 0x4ac5fa:c.instructions+=2;goto B4ac5fa;
case 0x4ac5fb:c.instructions+=1;goto B4ac5fb;
case 0x4ac600:goto L4ac600;
case 0x4ac603:c.instructions+=4;goto B4ac603;
case 0x4ac604:c.instructions+=3;goto B4ac604;
case 0x4ac605:c.instructions+=2;goto B4ac605;
case 0x4ac608:c.instructions+=1;goto B4ac608;
case 0x4ac609:goto L4ac609;
case 0x4ac60d:c.instructions+=4;goto B4ac60d;
case 0x4ac60e:c.instructions+=3;goto B4ac60e;
case 0x4ac610:c.instructions+=2;goto B4ac610;
case 0x4ac611:c.instructions+=1;goto B4ac611;
case 0x4ac616:goto L4ac616;
case 0x4ac619:goto L4ac619;
case 0x4ac61a:c.instructions+=3;goto B4ac61a;
case 0x4ac61b:c.instructions+=2;goto B4ac61b;
case 0x4ac61e:c.instructions+=1;goto B4ac61e;
case 0x4ac620:goto L4ac620;
case 0x4ac624:c.instructions+=3;goto B4ac624;
case 0x4ac627:c.instructions+=2;goto B4ac627;
case 0x4ac62a:c.instructions+=1;goto B4ac62a;
case 0x4ac62c:goto L4ac62c;
case 0x4ac62d:c.instructions+=1;goto B4ac62d;
case 0x4ac62f:goto L4ac62f;
case 0x4ac630:c.instructions+=1;goto B4ac630;
case 0x4ac636:goto L4ac636;
case 0x4ac639:c.instructions+=2;goto B4ac639;
case 0x4ac63b:c.instructions+=1;goto B4ac63b;
case 0x4ac63d:goto L4ac63d;
case 0x4ac63f:c.instructions+=4;goto B4ac63f;
case 0x4ac641:c.instructions+=3;goto B4ac641;
case 0x4ac646:c.instructions+=2;goto B4ac646;
case 0x4ac647:c.instructions+=1;goto B4ac647;
case 0x4ac64c:goto L4ac64c;
case 0x4ac64f:c.instructions+=1;goto B4ac64f;
case 0x4ac652:goto L4ac652;
case 0x4ac654:c.instructions+=4;goto B4ac654;
case 0x4ac656:c.instructions+=3;goto B4ac656;
case 0x4ac65b:c.instructions+=2;goto B4ac65b;
case 0x4ac65c:c.instructions+=1;goto B4ac65c;
case 0x4ac661:goto L4ac661;
case 0x4ac664:c.instructions+=1;goto B4ac664;
case 0x4ac667:goto L4ac667;
case 0x4ac66a:c.instructions+=2;goto B4ac66a;
case 0x4ac66c:c.instructions+=1;goto B4ac66c;
case 0x4ac66e:goto L4ac66e;
case 0x4ac670:c.instructions+=4;goto B4ac670;
case 0x4ac672:c.instructions+=3;goto B4ac672;
case 0x4ac677:c.instructions+=2;goto B4ac677;
case 0x4ac678:c.instructions+=1;goto B4ac678;
case 0x4ac67d:goto L4ac67d;
case 0x4ac680:c.instructions+=1;goto B4ac680;
case 0x4ac683:goto L4ac683;
case 0x4ac685:c.instructions+=4;goto B4ac685;
case 0x4ac687:c.instructions+=3;goto B4ac687;
case 0x4ac68c:c.instructions+=2;goto B4ac68c;
case 0x4ac68d:c.instructions+=1;goto B4ac68d;
case 0x4ac692:goto L4ac692;
case 0x4ac695:c.instructions+=1;goto B4ac695;
case 0x4ac698:goto L4ac698;
case 0x4ac69b:c.instructions+=2;goto B4ac69b;
case 0x4ac69d:c.instructions+=1;goto B4ac69d;
case 0x4ac69f:goto L4ac69f;
case 0x4ac6a1:c.instructions+=4;goto B4ac6a1;
case 0x4ac6a3:c.instructions+=3;goto B4ac6a3;
case 0x4ac6a8:c.instructions+=2;goto B4ac6a8;
case 0x4ac6a9:c.instructions+=1;goto B4ac6a9;
case 0x4ac6ae:goto L4ac6ae;
case 0x4ac6b1:c.instructions+=1;goto B4ac6b1;
case 0x4ac6b4:goto L4ac6b4;
case 0x4ac6b6:c.instructions+=4;goto B4ac6b6;
case 0x4ac6b8:c.instructions+=3;goto B4ac6b8;
case 0x4ac6bd:c.instructions+=2;goto B4ac6bd;
case 0x4ac6be:c.instructions+=1;goto B4ac6be;
case 0x4ac6c3:goto L4ac6c3;
case 0x4ac6c6:goto L4ac6c6;
case 0x4ac6d0:goto L4ac6d0;
case 0x4ac6d2:c.instructions+=4;goto B4ac6d2;
case 0x4ac6d7:c.instructions+=3;goto B4ac6d7;
case 0x4ac6d9:c.instructions+=2;goto B4ac6d9;
case 0x4ac6db:c.instructions+=1;goto B4ac6db;
case 0x4ac6e0:goto L4ac6e0;
case 0x4ac6e2:c.instructions+=5;goto B4ac6e2;
case 0x4ac6e7:c.instructions+=4;goto B4ac6e7;
case 0x4ac6e9:c.instructions+=3;goto B4ac6e9;
case 0x4ac6eb:c.instructions+=2;goto B4ac6eb;
case 0x4ac6f0:c.instructions+=1;goto B4ac6f0;
case 0x4ac6f5:goto L4ac6f5;
case 0x4ac6f8:c.instructions+=2;goto B4ac6f8;
case 0x4ac6fd:c.instructions+=1;goto B4ac6fd;
case 0x4ac700:goto L4ac700;
case 0x4ac705:c.instructions+=2;goto B4ac705;
case 0x4ac706:c.instructions+=1;goto B4ac706;
case 0x4ac70b:goto L4ac70b;
case 0x4ac711:c.instructions+=3;goto B4ac711;
case 0x4ac712:c.instructions+=2;goto B4ac712;
case 0x4ac71c:c.instructions+=1;goto B4ac71c;
case 0x4ac721:goto L4ac721;
case 0x4ac724:c.instructions+=2;goto B4ac724;
case 0x4ac72e:c.instructions+=1;goto B4ac72e;
case 0x4ac730:goto L4ac730;
case 0x4ac732:c.instructions+=11;goto B4ac732;
case 0x4ac737:c.instructions+=10;goto B4ac737;
case 0x4ac73d:c.instructions+=9;goto B4ac73d;
case 0x4ac73e:c.instructions+=8;goto B4ac73e;
case 0x4ac745:c.instructions+=7;goto B4ac745;
case 0x4ac746:c.instructions+=6;goto B4ac746;
case 0x4ac74a:c.instructions+=5;goto B4ac74a;
case 0x4ac74b:c.instructions+=4;goto B4ac74b;
case 0x4ac74d:c.instructions+=3;goto B4ac74d;
case 0x4ac74e:c.instructions+=2;goto B4ac74e;
case 0x4ac752:c.instructions+=1;goto B4ac752;
case 0x4ac757:goto L4ac757;
case 0x4ac759:c.instructions+=8;goto B4ac759;
case 0x4ac75f:c.instructions+=7;goto B4ac75f;
case 0x4ac762:c.instructions+=6;goto B4ac762;
case 0x4ac765:c.instructions+=5;goto B4ac765;
case 0x4ac768:c.instructions+=4;goto B4ac768;
case 0x4ac76b:c.instructions+=3;goto B4ac76b;
case 0x4ac771:c.instructions+=2;goto B4ac771;
case 0x4ac775:c.instructions+=1;goto B4ac775;
case 0x4ac777:goto L4ac777;
case 0x4ac77e:c.instructions+=1;goto B4ac77e;
case 0x4ac780:goto L4ac780;
case 0x4ac785:c.instructions+=1;goto B4ac785;
case 0x4ac78a:goto L4ac78a;
case 0x4ac78d:goto L4ac78d;
case 0x4ac791:c.instructions+=5;goto B4ac791;
case 0x4ac793:c.instructions+=4;goto B4ac793;
case 0x4ac794:c.instructions+=3;goto B4ac794;
case 0x4ac79b:c.instructions+=2;goto B4ac79b;
case 0x4ac79e:c.instructions+=1;goto B4ac79e;
case 0x4ac7b0:goto L4ac7b0;
case 0x4ac7b1:c.instructions+=2;goto B4ac7b1;
case 0x4ac7b3:c.instructions+=1;goto B4ac7b3;
case 0x4ac7b8:goto L4ac7b8;
case 0x4ac7ba:c.instructions+=2;goto B4ac7ba;
case 0x4ac7bb:c.instructions+=1;goto B4ac7bb;
case 0x4ac7c0:goto L4ac7c0;
case 0x4ac7c6:c.instructions+=1;goto B4ac7c6;
case 0x4ac7d0:goto L4ac7d0;
case 0x4ac7d4:c.instructions+=5;goto B4ac7d4;
case 0x4ac7d5:c.instructions+=4;goto B4ac7d5;
case 0x4ac7d6:c.instructions+=3;goto B4ac7d6;
case 0x4ac7d7:c.instructions+=2;goto B4ac7d7;
case 0x4ac7d9:c.instructions+=1;goto B4ac7d9;
case 0x4ac7de:goto L4ac7de;
case 0x4ac7e2:c.instructions+=3;goto B4ac7e2;
case 0x4ac7e3:c.instructions+=2;goto B4ac7e3;
case 0x4ac7e5:c.instructions+=1;goto B4ac7e5;
case 0x4ac7ea:goto L4ac7ea;
case 0x4ac7ed:c.instructions+=2;goto B4ac7ed;
case 0x4ac7ef:c.instructions+=1;goto B4ac7ef;
case 0x4ac7f1:goto L4ac7f1;
case 0x4ac7f3:goto L4ac7f3;
case 0x4ac7f7:c.instructions+=2;goto B4ac7f7;
case 0x4ac7f8:c.instructions+=1;goto B4ac7f8;
case 0x4ac7fd:goto L4ac7fd;
case 0x4ac800:c.instructions+=2;goto B4ac800;
case 0x4ac802:c.instructions+=1;goto B4ac802;
case 0x4ac804:goto L4ac804;
case 0x4ac806:goto L4ac806;
case 0x4ac809:c.instructions+=1;goto B4ac809;
case 0x4ac80b:goto L4ac80b;
case 0x4ac812:c.instructions+=4;goto B4ac812;
case 0x4ac819:c.instructions+=3;goto B4ac819;
case 0x4ac81a:c.instructions+=2;goto B4ac81a;
case 0x4ac81b:c.instructions+=1;goto B4ac81b;
case 0x4ac81e:goto L4ac81e;
case 0x4ac821:c.instructions+=1;goto B4ac821;
case 0x4ac823:goto L4ac823;
case 0x4ac82a:c.instructions+=4;goto B4ac82a;
case 0x4ac831:c.instructions+=3;goto B4ac831;
case 0x4ac832:c.instructions+=2;goto B4ac832;
case 0x4ac833:c.instructions+=1;goto B4ac833;
case 0x4ac836:goto L4ac836;
case 0x4ac83d:c.instructions+=4;goto B4ac83d;
case 0x4ac844:c.instructions+=3;goto B4ac844;
case 0x4ac845:c.instructions+=2;goto B4ac845;
case 0x4ac846:c.instructions+=1;goto B4ac846;
case 0x4ac850:goto L4ac850;
case 0x4ac851:c.instructions+=11;goto B4ac851;
case 0x4ac853:c.instructions+=10;goto B4ac853;
case 0x4ac857:c.instructions+=9;goto B4ac857;
case 0x4ac85c:c.instructions+=8;goto B4ac85c;
case 0x4ac85f:c.instructions+=7;goto B4ac85f;
case 0x4ac862:c.instructions+=6;goto B4ac862;
case 0x4ac865:c.instructions+=5;goto B4ac865;
case 0x4ac867:c.instructions+=4;goto B4ac867;
case 0x4ac868:c.instructions+=3;goto B4ac868;
case 0x4ac86d:c.instructions+=2;goto B4ac86d;
case 0x4ac86e:c.instructions+=1;goto B4ac86e;
case 0x4ac873:goto L4ac873;
case 0x4ac876:c.instructions+=3;goto B4ac876;
case 0x4ac87c:c.instructions+=2;goto B4ac87c;
case 0x4ac87d:c.instructions+=1;goto B4ac87d;
case 0x4ac880:goto L4ac880;
case 0x4ac881:c.instructions+=11;goto B4ac881;
case 0x4ac885:c.instructions+=10;goto B4ac885;
case 0x4ac886:c.instructions+=9;goto B4ac886;
case 0x4ac88a:c.instructions+=8;goto B4ac88a;
case 0x4ac88b:c.instructions+=7;goto B4ac88b;
case 0x4ac88c:c.instructions+=6;goto B4ac88c;
case 0x4ac890:c.instructions+=5;goto B4ac890;
case 0x4ac891:c.instructions+=4;goto B4ac891;
case 0x4ac892:c.instructions+=3;goto B4ac892;
case 0x4ac893:c.instructions+=2;goto B4ac893;
case 0x4ac895:c.instructions+=1;goto B4ac895;
case 0x4ac89a:goto L4ac89a;
case 0x4ac89d:c.instructions+=4;goto B4ac89d;
case 0x4ac89e:c.instructions+=3;goto B4ac89e;
case 0x4ac8a3:c.instructions+=2;goto B4ac8a3;
case 0x4ac8a4:c.instructions+=1;goto B4ac8a4;
case 0x4ac8a9:goto L4ac8a9;
case 0x4ac8ac:c.instructions+=4;goto B4ac8ac;
case 0x4ac8ad:c.instructions+=3;goto B4ac8ad;
case 0x4ac8b2:c.instructions+=2;goto B4ac8b2;
case 0x4ac8b3:c.instructions+=1;goto B4ac8b3;
case 0x4ac8b8:goto L4ac8b8;
case 0x4ac8bb:c.instructions+=4;goto B4ac8bb;
case 0x4ac8bc:c.instructions+=3;goto B4ac8bc;
case 0x4ac8c1:c.instructions+=2;goto B4ac8c1;
case 0x4ac8c2:c.instructions+=1;goto B4ac8c2;
case 0x4ac8c7:goto L4ac8c7;
case 0x4ac8cc:c.instructions+=3;goto B4ac8cc;
case 0x4ac8cf:c.instructions+=2;goto B4ac8cf;
case 0x4ac8d1:c.instructions+=1;goto B4ac8d1;
case 0x4ac8d3:goto L4ac8d3;
case 0x4ac8d8:c.instructions+=6;goto B4ac8d8;
case 0x4ac8d9:c.instructions+=5;goto B4ac8d9;
case 0x4ac8dc:c.instructions+=4;goto B4ac8dc;
case 0x4ac8dd:c.instructions+=3;goto B4ac8dd;
case 0x4ac8de:c.instructions+=2;goto B4ac8de;
case 0x4ac8df:c.instructions+=1;goto B4ac8df;
case 0x4ac8e2:goto L4ac8e2;
case 0x4ac8e6:c.instructions+=9;goto B4ac8e6;
case 0x4ac8ec:c.instructions+=8;goto B4ac8ec;
case 0x4ac8ef:c.instructions+=7;goto B4ac8ef;
case 0x4ac8f2:c.instructions+=6;goto B4ac8f2;
case 0x4ac8f5:c.instructions+=5;goto B4ac8f5;
case 0x4ac8f7:c.instructions+=4;goto B4ac8f7;
case 0x4ac8f8:c.instructions+=3;goto B4ac8f8;
case 0x4ac8fd:c.instructions+=2;goto B4ac8fd;
case 0x4ac8fe:c.instructions+=1;goto B4ac8fe;
case 0x4ac903:goto L4ac903;
case 0x4ac906:c.instructions+=6;goto B4ac906;
case 0x4ac907:c.instructions+=5;goto B4ac907;
case 0x4ac90d:c.instructions+=4;goto B4ac90d;
case 0x4ac90e:c.instructions+=3;goto B4ac90e;
case 0x4ac90f:c.instructions+=2;goto B4ac90f;
case 0x4ac910:c.instructions+=1;goto B4ac910;
case 0x4ac920:goto L4ac920;
case 0x4ac922:c.instructions+=2;goto B4ac922;
case 0x4ac924:c.instructions+=1;goto B4ac924;
case 0x4ac929:goto L4ac929;
case 0x4ac92c:c.instructions+=2;goto B4ac92c;
case 0x4ac931:c.instructions+=1;goto B4ac931;
case 0x4ac940:goto L4ac940;
case 0x4ac944:c.instructions+=2;goto B4ac944;
case 0x4ac949:c.instructions+=1;goto B4ac949;
case 0x4ac950:goto L4ac950;
case 0x4ac957:c.instructions+=3;goto B4ac957;
case 0x4ac958:c.instructions+=2;goto B4ac958;
case 0x4ac95d:c.instructions+=1;goto B4ac95d;
case 0x4ac95f:goto L4ac95f;
case 0x4ac964:goto L4ac964;
case 0x4ac965:c.instructions+=1;goto B4ac965;
case 0x4ac96a:goto L4ac96a;
case 0x4ac96d:c.instructions+=2;goto B4ac96d;
case 0x4ac96f:c.instructions+=1;goto B4ac96f;
case 0x4ac971:goto L4ac971;
case 0x4ac973:c.instructions+=5;goto B4ac973;
case 0x4ac975:c.instructions+=4;goto B4ac975;
case 0x4ac977:c.instructions+=3;goto B4ac977;
case 0x4ac978:c.instructions+=2;goto B4ac978;
case 0x4ac97a:c.instructions+=1;goto B4ac97a;
case 0x4ac97f:goto L4ac97f;
case 0x4ac982:goto L4ac982;
case 0x4ac983:c.instructions+=1;goto B4ac983;
case 0x4ac988:goto L4ac988;
case 0x4ac98b:c.instructions+=3;goto B4ac98b;
case 0x4ac98d:c.instructions+=2;goto B4ac98d;
case 0x4ac98e:c.instructions+=1;goto B4ac98e;
case 0x4ac990:goto L4ac990;
case 0x4ac994:c.instructions+=7;goto B4ac994;
case 0x4ac998:c.instructions+=6;goto B4ac998;
case 0x4ac999:c.instructions+=5;goto B4ac999;
case 0x4ac99d:c.instructions+=4;goto B4ac99d;
case 0x4ac99e:c.instructions+=3;goto B4ac99e;
case 0x4ac99f:c.instructions+=2;goto B4ac99f;
case 0x4ac9a1:c.instructions+=1;goto B4ac9a1;
case 0x4ac9a6:goto L4ac9a6;
case 0x4ac9b0:goto L4ac9b0;
case 0x4ac9b7:c.instructions+=2;goto B4ac9b7;
case 0x4ac9bc:c.instructions+=1;goto B4ac9bc;
case 0x4ac9be:goto L4ac9be;
case 0x4ac9c3:goto L4ac9c3;
case 0x4ac9c4:c.instructions+=1;goto B4ac9c4;
case 0x4ac9c9:goto L4ac9c9;
case 0x4ac9cb:c.instructions+=3;goto B4ac9cb;
case 0x4ac9ce:c.instructions+=2;goto B4ac9ce;
case 0x4ac9d0:c.instructions+=1;goto B4ac9d0;
case 0x4ac9d2:goto L4ac9d2;
case 0x4ac9d5:c.instructions+=5;goto B4ac9d5;
case 0x4ac9db:c.instructions+=4;goto B4ac9db;
case 0x4ac9de:c.instructions+=3;goto B4ac9de;
case 0x4ac9e1:c.instructions+=2;goto B4ac9e1;
case 0x4ac9e5:c.instructions+=1;goto B4ac9e5;
case 0x4ac9ea:goto L4ac9ea;
case 0x4ac9f0:goto L4ac9f0;
case 0x4ac9f5:c.instructions+=3;goto B4ac9f5;
case 0x4ac9f7:c.instructions+=2;goto B4ac9f7;
case 0x4ac9f9:c.instructions+=1;goto B4ac9f9;
case 0x4ac9fb:goto L4ac9fb;
case 0x4aca00:c.instructions+=2;goto B4aca00;
case 0x4aca02:c.instructions+=1;goto B4aca02;
case 0x4aca04:goto L4aca04;
case 0x4aca07:c.instructions+=5;goto B4aca07;
case 0x4aca0d:c.instructions+=4;goto B4aca0d;
case 0x4aca10:c.instructions+=3;goto B4aca10;
case 0x4aca13:c.instructions+=2;goto B4aca13;
case 0x4aca14:c.instructions+=1;goto B4aca14;
case 0x4aca19:goto L4aca19;
case 0x4aca1c:goto L4aca1c;
case 0x4aca20:c.instructions+=7;goto B4aca20;
case 0x4aca23:c.instructions+=6;goto B4aca23;
case 0x4aca26:c.instructions+=5;goto B4aca26;
case 0x4aca28:c.instructions+=4;goto B4aca28;
case 0x4aca29:c.instructions+=3;goto B4aca29;
case 0x4aca2a:c.instructions+=2;goto B4aca2a;
case 0x4aca2b:c.instructions+=1;goto B4aca2b;
case 0x4aca30:goto L4aca30;
case 0x4aca33:goto L4aca33;
case 0x4aca40:goto L4aca40;
case 0x4aca45:c.instructions+=3;goto B4aca45;
case 0x4aca47:c.instructions+=2;goto B4aca47;
case 0x4aca49:c.instructions+=1;goto B4aca49;
case 0x4aca4b:goto L4aca4b;
case 0x4aca50:c.instructions+=2;goto B4aca50;
case 0x4aca52:c.instructions+=1;goto B4aca52;
case 0x4aca54:goto L4aca54;
case 0x4aca57:c.instructions+=5;goto B4aca57;
case 0x4aca5d:c.instructions+=4;goto B4aca5d;
case 0x4aca60:c.instructions+=3;goto B4aca60;
case 0x4aca63:c.instructions+=2;goto B4aca63;
case 0x4aca64:c.instructions+=1;goto B4aca64;
case 0x4aca69:goto L4aca69;
case 0x4aca6c:goto L4aca6c;
case 0x4aca71:c.instructions+=3;goto B4aca71;
case 0x4aca76:c.instructions+=2;goto B4aca76;
case 0x4aca7b:c.instructions+=1;goto B4aca7b;
case 0x4aca80:goto L4aca80;
case 0x4aca83:goto L4aca83;
case 0x4aca90:goto L4aca90;
case 0x4aca95:goto L4aca95;
case 0x4aca96:c.instructions+=4;goto B4aca96;
case 0x4aca98:c.instructions+=3;goto B4aca98;
case 0x4aca9a:c.instructions+=2;goto B4aca9a;
case 0x4aca9b:c.instructions+=1;goto B4aca9b;
case 0x4acaa0:goto L4acaa0;
case 0x4acaa1:c.instructions+=4;goto B4acaa1;
case 0x4acaa3:c.instructions+=3;goto B4acaa3;
case 0x4acaa9:c.instructions+=2;goto B4acaa9;
case 0x4acaab:c.instructions+=1;goto B4acaab;
case 0x4acab1:goto L4acab1;
case 0x4acab5:c.instructions+=6;goto B4acab5;
case 0x4acabb:c.instructions+=5;goto B4acabb;
case 0x4acac0:c.instructions+=4;goto B4acac0;
case 0x4acac1:c.instructions+=3;goto B4acac1;
case 0x4acac2:c.instructions+=2;goto B4acac2;
case 0x4acac4:c.instructions+=1;goto B4acac4;
case 0x4acac6:goto L4acac6;
case 0x4acac8:c.instructions+=1;goto B4acac8;
case 0x4acaca:goto L4acaca;
case 0x4acacc:goto L4acacc;
case 0x4acacd:c.instructions+=8;goto B4acacd;
case 0x4acad0:c.instructions+=7;goto B4acad0;
case 0x4acad7:c.instructions+=6;goto B4acad7;
case 0x4acadd:c.instructions+=5;goto B4acadd;
case 0x4acae3:c.instructions+=4;goto B4acae3;
case 0x4acae6:c.instructions+=3;goto B4acae6;
case 0x4acae8:c.instructions+=2;goto B4acae8;
case 0x4acaed:c.instructions+=1;goto B4acaed;
case 0x4acaef:goto L4acaef;
case 0x4acaf0:goto L4acaf0;
case 0x4acaf2:c.instructions+=1;goto B4acaf2;
case 0x4acaf4:goto L4acaf4;
case 0x4acafa:goto L4acafa;
case 0x4acafb:c.instructions+=6;goto B4acafb;
case 0x4acafe:c.instructions+=5;goto B4acafe;
case 0x4acb05:c.instructions+=4;goto B4acb05;
case 0x4acb0b:c.instructions+=3;goto B4acb0b;
case 0x4acb11:c.instructions+=2;goto B4acb11;
case 0x4acb16:c.instructions+=1;goto B4acb16;
case 0x4acb18:goto L4acb18;
case 0x4acb1f:c.instructions+=1;goto B4acb1f;
case 0x4acb25:goto L4acb25;
case 0x4acb2b:c.instructions+=2;goto B4acb2b;
case 0x4acb2c:c.instructions+=1;goto B4acb2c;
case 0x4acb31:goto L4acb31;
case 0x4acb37:c.instructions+=1;goto B4acb37;
case 0x4acb3c:goto L4acb3c;
case 0x4acb42:c.instructions+=1;goto B4acb42;
case 0x4acb48:goto L4acb48;
case 0x4acb49:c.instructions+=11;goto B4acb49;
case 0x4acb4e:c.instructions+=10;goto B4acb4e;
case 0x4acb4f:c.instructions+=9;goto B4acb4f;
case 0x4acb55:c.instructions+=8;goto B4acb55;
case 0x4acb58:c.instructions+=7;goto B4acb58;
case 0x4acb5a:c.instructions+=6;goto B4acb5a;
case 0x4acb5d:c.instructions+=5;goto B4acb5d;
case 0x4acb64:c.instructions+=4;goto B4acb64;
case 0x4acb6a:c.instructions+=3;goto B4acb6a;
case 0x4acb70:c.instructions+=2;goto B4acb70;
case 0x4acb75:c.instructions+=1;goto B4acb75;
case 0x4acb77:goto L4acb77;
case 0x4acb78:c.instructions+=10;goto B4acb78;
case 0x4acb7d:c.instructions+=9;goto B4acb7d;
case 0x4acb7e:c.instructions+=8;goto B4acb7e;
case 0x4acb84:c.instructions+=7;goto B4acb84;
case 0x4acb86:c.instructions+=6;goto B4acb86;
case 0x4acb89:c.instructions+=5;goto B4acb89;
case 0x4acb90:c.instructions+=4;goto B4acb90;
case 0x4acb96:c.instructions+=3;goto B4acb96;
case 0x4acb9c:c.instructions+=2;goto B4acb9c;
case 0x4acba1:c.instructions+=1;goto B4acba1;
case 0x4acba3:goto L4acba3;
case 0x4acbaa:c.instructions+=1;goto B4acbaa;
case 0x4acbac:goto L4acbac;
case 0x4acbb2:c.instructions+=2;goto B4acbb2;
case 0x4acbb3:c.instructions+=1;goto B4acbb3;
case 0x4acbb8:goto L4acbb8;
case 0x4acbbe:goto L4acbbe;
case 0x4acbc0:c.instructions+=3;goto B4acbc0;
case 0x4acbc5:c.instructions+=2;goto B4acbc5;
case 0x4acbc6:c.instructions+=1;goto B4acbc6;
case 0x4acbcb:goto L4acbcb;
case 0x4acbd0:c.instructions+=1;goto B4acbd0;
case 0x4acbd3:goto L4acbd3;
case 0x4acbd5:c.instructions+=3;goto B4acbd5;
case 0x4acbd6:c.instructions+=2;goto B4acbd6;
case 0x4acbd7:c.instructions+=1;goto B4acbd7;
case 0x4acbd9:goto L4acbd9;
case 0x4acbdc:c.instructions+=3;goto B4acbdc;
case 0x4acbdd:c.instructions+=2;goto B4acbdd;
case 0x4acbe2:c.instructions+=1;goto B4acbe2;
case 0x4acbe7:goto L4acbe7;
case 0x4acbea:goto L4acbea;
case 0x4acbeb:c.instructions+=1;goto B4acbeb;
case 0x4acbf0:goto L4acbf0;
case 0x4acbf1:c.instructions+=5;goto B4acbf1;
case 0x4acbf3:c.instructions+=4;goto B4acbf3;
case 0x4acbf4:c.instructions+=3;goto B4acbf4;
case 0x4acbfa:c.instructions+=2;goto B4acbfa;
case 0x4acbfc:c.instructions+=1;goto B4acbfc;
case 0x4acc01:goto L4acc01;
case 0x4acc07:c.instructions+=2;goto B4acc07;
case 0x4acc0a:c.instructions+=1;goto B4acc0a;
case 0x4acc0c:goto L4acc0c;
case 0x4acc0f:c.instructions+=1;goto B4acc0f;
case 0x4acc11:goto L4acc11;
case 0x4acc14:c.instructions+=3;goto B4acc14;
case 0x4acc15:c.instructions+=2;goto B4acc15;
case 0x4acc1a:c.instructions+=1;goto B4acc1a;
case 0x4acc1f:goto L4acc1f;
case 0x4acc22:c.instructions+=3;goto B4acc22;
case 0x4acc25:c.instructions+=2;goto B4acc25;
case 0x4acc27:c.instructions+=1;goto B4acc27;
case 0x4acc29:goto L4acc29;
case 0x4acc2e:c.instructions+=2;goto B4acc2e;
case 0x4acc2f:c.instructions+=1;goto B4acc2f;
case 0x4acc34:goto L4acc34;
case 0x4acc37:c.instructions+=2;goto B4acc37;
case 0x4acc39:c.instructions+=1;goto B4acc39;
case 0x4acc3b:goto L4acc3b;
case 0x4acc3e:c.instructions+=4;goto B4acc3e;
case 0x4acc40:c.instructions+=3;goto B4acc40;
case 0x4acc45:c.instructions+=2;goto B4acc45;
case 0x4acc46:c.instructions+=1;goto B4acc46;
case 0x4acc4b:goto L4acc4b;
case 0x4acc4e:c.instructions+=3;goto B4acc4e;
case 0x4acc4f:c.instructions+=2;goto B4acc4f;
case 0x4acc50:c.instructions+=1;goto B4acc50;
case 0x4acc51:goto L4acc51;
case 0x4acc54:c.instructions+=3;goto B4acc54;
case 0x4acc55:c.instructions+=2;goto B4acc55;
case 0x4acc5a:c.instructions+=1;goto B4acc5a;
case 0x4acc5f:goto L4acc5f;
case 0x4acc62:c.instructions+=3;goto B4acc62;
case 0x4acc65:c.instructions+=2;goto B4acc65;
case 0x4acc67:c.instructions+=1;goto B4acc67;
case 0x4acc69:goto L4acc69;
case 0x4acc6e:c.instructions+=2;goto B4acc6e;
case 0x4acc6f:c.instructions+=1;goto B4acc6f;
case 0x4acc74:goto L4acc74;
case 0x4acc77:c.instructions+=2;goto B4acc77;
case 0x4acc79:c.instructions+=1;goto B4acc79;
case 0x4acc7b:goto L4acc7b;
case 0x4acc7e:c.instructions+=4;goto B4acc7e;
case 0x4acc80:c.instructions+=3;goto B4acc80;
case 0x4acc85:c.instructions+=2;goto B4acc85;
case 0x4acc86:c.instructions+=1;goto B4acc86;
case 0x4acc8b:goto L4acc8b;
case 0x4acc8e:goto L4acc8e;
case 0x4acc8f:c.instructions+=2;goto B4acc8f;
case 0x4acc90:c.instructions+=1;goto B4acc90;
case 0x4acca0:goto L4acca0;
case 0x4acca4:c.instructions+=8;goto B4acca4;
case 0x4acca7:c.instructions+=7;goto B4acca7;
case 0x4acca8:c.instructions+=6;goto B4acca8;
case 0x4accad:c.instructions+=5;goto B4accad;
case 0x4accaf:c.instructions+=4;goto B4accaf;
case 0x4accb0:c.instructions+=3;goto B4accb0;
case 0x4accb4:c.instructions+=2;goto B4accb4;
case 0x4accb5:c.instructions+=1;goto B4accb5;
case 0x4accba:goto L4accba;
case 0x4accc0:c.instructions+=7;goto B4accc0;
case 0x4accc1:c.instructions+=6;goto B4accc1;
case 0x4accc5:c.instructions+=5;goto B4accc5;
case 0x4accc6:c.instructions+=4;goto B4accc6;
case 0x4accca:c.instructions+=3;goto B4accca;
case 0x4acccc:c.instructions+=2;goto B4acccc;
case 0x4acccd:c.instructions+=1;goto B4acccd;
case 0x4accd2:goto L4accd2;
case 0x4accd5:c.instructions+=3;goto B4accd5;
case 0x4accd9:c.instructions+=2;goto B4accd9;
case 0x4accda:c.instructions+=1;goto B4accda;
case 0x4accdf:goto L4accdf;
case 0x4acce0:c.instructions+=2;goto B4acce0;
case 0x4acce1:c.instructions+=1;goto B4acce1;
case 0x4acce6:goto L4acce6;
case 0x4acce9:c.instructions+=3;goto B4acce9;
case 0x4accea:c.instructions+=2;goto B4accea;
case 0x4acced:c.instructions+=1;goto B4acced;
case 0x4accf0:goto L4accf0;
case 0x4accf1:c.instructions+=10;goto B4accf1;
case 0x4accf2:c.instructions+=9;goto B4accf2;
case 0x4accf4:c.instructions+=8;goto B4accf4;
case 0x4accf7:c.instructions+=7;goto B4accf7;
case 0x4accf8:c.instructions+=6;goto B4accf8;
case 0x4accfe:c.instructions+=5;goto B4accfe;
case 0x4accff:c.instructions+=4;goto B4accff;
case 0x4acd05:c.instructions+=3;goto B4acd05;
case 0x4acd06:c.instructions+=2;goto B4acd06;
case 0x4acd07:c.instructions+=1;goto B4acd07;
case 0x4acd0c:goto L4acd0c;
case 0x4acd0f:c.instructions+=10;goto B4acd0f;
case 0x4acd11:c.instructions+=9;goto B4acd11;
case 0x4acd17:c.instructions+=8;goto B4acd17;
case 0x4acd1d:c.instructions+=7;goto B4acd1d;
case 0x4acd1e:c.instructions+=6;goto B4acd1e;
case 0x4acd24:c.instructions+=5;goto B4acd24;
case 0x4acd2a:c.instructions+=4;goto B4acd2a;
case 0x4acd2d:c.instructions+=3;goto B4acd2d;
case 0x4acd2e:c.instructions+=2;goto B4acd2e;
case 0x4acd2f:c.instructions+=1;goto B4acd2f;
case 0x4acd34:goto L4acd34;
case 0x4acd37:c.instructions+=6;goto B4acd37;
case 0x4acd3d:c.instructions+=5;goto B4acd3d;
case 0x4acd3e:c.instructions+=4;goto B4acd3e;
case 0x4acd44:c.instructions+=3;goto B4acd44;
case 0x4acd45:c.instructions+=2;goto B4acd45;
case 0x4acd46:c.instructions+=1;goto B4acd46;
case 0x4acd4b:goto L4acd4b;
case 0x4acd4e:c.instructions+=6;goto B4acd4e;
case 0x4acd54:c.instructions+=5;goto B4acd54;
case 0x4acd55:c.instructions+=4;goto B4acd55;
case 0x4acd5b:c.instructions+=3;goto B4acd5b;
case 0x4acd5c:c.instructions+=2;goto B4acd5c;
case 0x4acd5d:c.instructions+=1;goto B4acd5d;
case 0x4acd62:goto L4acd62;
case 0x4acd65:c.instructions+=6;goto B4acd65;
case 0x4acd6b:c.instructions+=5;goto B4acd6b;
case 0x4acd6c:c.instructions+=4;goto B4acd6c;
case 0x4acd72:c.instructions+=3;goto B4acd72;
case 0x4acd73:c.instructions+=2;goto B4acd73;
case 0x4acd74:c.instructions+=1;goto B4acd74;
case 0x4acd79:goto L4acd79;
case 0x4acd7b:c.instructions+=8;goto B4acd7b;
case 0x4acd7d:c.instructions+=7;goto B4acd7d;
case 0x4acd80:c.instructions+=6;goto B4acd80;
case 0x4acd81:c.instructions+=5;goto B4acd81;
case 0x4acd87:c.instructions+=4;goto B4acd87;
case 0x4acd8d:c.instructions+=3;goto B4acd8d;
case 0x4acd8e:c.instructions+=2;goto B4acd8e;
case 0x4acd8f:c.instructions+=1;goto B4acd8f;
case 0x4acd90:goto L4acd90;
case 0x4acd91:c.instructions+=3;goto B4acd91;
case 0x4acd92:c.instructions+=2;goto B4acd92;
case 0x4acd94:c.instructions+=1;goto B4acd94;
case 0x4acd99:goto L4acd99;
case 0x4acd9e:c.instructions+=6;goto B4acd9e;
case 0x4acda1:c.instructions+=5;goto B4acda1;
case 0x4acda8:c.instructions+=4;goto B4acda8;
case 0x4acdae:c.instructions+=3;goto B4acdae;
case 0x4acdb4:c.instructions+=2;goto B4acdb4;
case 0x4acdbb:c.instructions+=1;goto B4acdbb;
case 0x4acdbd:goto L4acdbd;
case 0x4acdbf:c.instructions+=1;goto B4acdbf;
case 0x4acdc4:goto L4acdc4;
case 0x4acdc7:c.instructions+=2;goto B4acdc7;
case 0x4acdc9:c.instructions+=1;goto B4acdc9;
case 0x4acdcb:goto L4acdcb;
case 0x4acdd0:goto L4acdd0;
case 0x4acdd3:c.instructions+=3;goto B4acdd3;
case 0x4acdd4:c.instructions+=2;goto B4acdd4;
case 0x4acdd9:c.instructions+=1;goto B4acdd9;
case 0x4acdde:goto L4acdde;
case 0x4acde1:c.instructions+=3;goto B4acde1;
case 0x4acde2:c.instructions+=2;goto B4acde2;
case 0x4acde3:c.instructions+=1;goto B4acde3;
case 0x4acde4:goto L4acde4;
case 0x4acde9:goto L4acde9;
case 0x4acdec:c.instructions+=3;goto B4acdec;
case 0x4acded:c.instructions+=2;goto B4acded;
case 0x4acdf2:c.instructions+=1;goto B4acdf2;
case 0x4acdf7:goto L4acdf7;
case 0x4acdfa:goto L4acdfa;
case 0x4acdfb:c.instructions+=2;goto B4acdfb;
case 0x4acdfc:c.instructions+=1;goto B4acdfc;
case 0x4ace00:goto L4ace00;
case 0x4ace01:c.instructions+=10;goto B4ace01;
case 0x4ace02:c.instructions+=9;goto B4ace02;
case 0x4ace03:c.instructions+=8;goto B4ace03;
case 0x4ace05:c.instructions+=7;goto B4ace05;
case 0x4ace0b:c.instructions+=6;goto B4ace0b;
case 0x4ace0d:c.instructions+=5;goto B4ace0d;
case 0x4ace0f:c.instructions+=4;goto B4ace0f;
case 0x4ace10:c.instructions+=3;goto B4ace10;
case 0x4ace16:c.instructions+=2;goto B4ace16;
case 0x4ace1c:c.instructions+=1;goto B4ace1c;
case 0x4ace1e:goto L4ace1e;
case 0x4ace23:c.instructions+=9;goto B4ace23;
case 0x4ace26:c.instructions+=8;goto B4ace26;
case 0x4ace2d:c.instructions+=7;goto B4ace2d;
case 0x4ace33:c.instructions+=6;goto B4ace33;
case 0x4ace39:c.instructions+=5;goto B4ace39;
case 0x4ace3f:c.instructions+=4;goto B4ace3f;
case 0x4ace42:c.instructions+=3;goto B4ace42;
case 0x4ace47:c.instructions+=2;goto B4ace47;
case 0x4ace48:c.instructions+=1;goto B4ace48;
case 0x4ace4d:goto L4ace4d;
case 0x4ace50:c.instructions+=2;goto B4ace50;
case 0x4ace55:c.instructions+=1;goto B4ace55;
case 0x4ace5a:goto L4ace5a;
case 0x4ace5b:c.instructions+=1;goto B4ace5b;
case 0x4ace60:goto L4ace60;
case 0x4ace63:c.instructions+=1;goto B4ace63;
case 0x4ace69:goto L4ace69;
case 0x4ace6e:c.instructions+=1;goto B4ace6e;
case 0x4ace73:goto L4ace73;
case 0x4ace7a:c.instructions+=1;goto B4ace7a;
case 0x4ace7c:goto L4ace7c;
case 0x4ace7e:c.instructions+=1;goto B4ace7e;
case 0x4ace83:goto L4ace83;
case 0x4ace86:c.instructions+=2;goto B4ace86;
case 0x4ace8c:c.instructions+=1;goto B4ace8c;
case 0x4ace8e:goto L4ace8e;
case 0x4ace8f:c.instructions+=1;goto B4ace8f;
case 0x4ace91:goto L4ace91;
case 0x4ace93:c.instructions+=1;goto B4ace93;
case 0x4ace95:goto L4ace95;
case 0x4ace9b:c.instructions+=4;goto B4ace9b;
case 0x4ace9c:c.instructions+=3;goto B4ace9c;
case 0x4acea1:c.instructions+=2;goto B4acea1;
case 0x4acea7:c.instructions+=1;goto B4acea7;
case 0x4acea9:goto L4acea9;
case 0x4aceae:goto L4aceae;
case 0x4aceaf:c.instructions+=4;goto B4aceaf;
case 0x4aceb5:c.instructions+=3;goto B4aceb5;
case 0x4aceb8:c.instructions+=2;goto B4aceb8;
case 0x4acebb:c.instructions+=1;goto B4acebb;
case 0x4acebe:goto L4acebe;
case 0x4acec4:c.instructions+=3;goto B4acec4;
case 0x4acec5:c.instructions+=2;goto B4acec5;
case 0x4acecb:c.instructions+=1;goto B4acecb;
case 0x4acecd:goto L4acecd;
case 0x4aced4:c.instructions+=1;goto B4aced4;
case 0x4aced6:goto L4aced6;
case 0x4acedc:c.instructions+=2;goto B4acedc;
case 0x4acedd:c.instructions+=1;goto B4acedd;
case 0x4acee2:goto L4acee2;
case 0x4acee8:c.instructions+=2;goto B4acee8;
case 0x4acee9:c.instructions+=1;goto B4acee9;
case 0x4aceee:goto L4aceee;
case 0x4acef1:c.instructions+=5;goto B4acef1;
case 0x4acef2:c.instructions+=4;goto B4acef2;
case 0x4acef3:c.instructions+=3;goto B4acef3;
case 0x4acef4:c.instructions+=2;goto B4acef4;
case 0x4acef5:c.instructions+=1;goto B4acef5;
case 0x4acef6:goto L4acef6;
case 0x4acefc:c.instructions+=2;goto B4acefc;
case 0x4acefd:c.instructions+=1;goto B4acefd;
case 0x4acf02:goto L4acf02;
case 0x4acf08:c.instructions+=2;goto B4acf08;
case 0x4acf09:c.instructions+=1;goto B4acf09;
case 0x4acf0e:goto L4acf0e;
case 0x4acf14:c.instructions+=4;goto B4acf14;
case 0x4acf16:c.instructions+=3;goto B4acf16;
case 0x4acf1b:c.instructions+=2;goto B4acf1b;
case 0x4acf1c:c.instructions+=1;goto B4acf1c;
case 0x4acf21:goto L4acf21;
case 0x4acf27:c.instructions+=4;goto B4acf27;
case 0x4acf29:c.instructions+=3;goto B4acf29;
case 0x4acf2e:c.instructions+=2;goto B4acf2e;
case 0x4acf2f:c.instructions+=1;goto B4acf2f;
case 0x4acf34:goto L4acf34;
case 0x4acf37:c.instructions+=5;goto B4acf37;
case 0x4acf38:c.instructions+=4;goto B4acf38;
case 0x4acf39:c.instructions+=3;goto B4acf39;
case 0x4acf3a:c.instructions+=2;goto B4acf3a;
case 0x4acf3b:c.instructions+=1;goto B4acf3b;
case 0x4acf40:goto L4acf40;
case 0x4acf43:c.instructions+=4;goto B4acf43;
case 0x4acf44:c.instructions+=3;goto B4acf44;
case 0x4acf48:c.instructions+=2;goto B4acf48;
case 0x4acf4a:c.instructions+=1;goto B4acf4a;
case 0x4acf4c:goto L4acf4c;
case 0x4acf50:c.instructions+=8;goto B4acf50;
case 0x4acf54:c.instructions+=7;goto B4acf54;
case 0x4acf55:c.instructions+=6;goto B4acf55;
case 0x4acf56:c.instructions+=5;goto B4acf56;
case 0x4acf57:c.instructions+=4;goto B4acf57;
case 0x4acf5b:c.instructions+=3;goto B4acf5b;
case 0x4acf61:c.instructions+=2;goto B4acf61;
case 0x4acf67:c.instructions+=1;goto B4acf67;
case 0x4acf6c:goto L4acf6c;
case 0x4acf6e:c.instructions+=3;goto B4acf6e;
case 0x4acf70:c.instructions+=2;goto B4acf70;
case 0x4acf75:c.instructions+=1;goto B4acf75;
case 0x4acf79:goto L4acf79;
case 0x4acf7b:goto L4acf7b;
case 0x4acf7d:c.instructions+=8;goto B4acf7d;
case 0x4acf7f:c.instructions+=7;goto B4acf7f;
case 0x4acf83:c.instructions+=6;goto B4acf83;
case 0x4acf84:c.instructions+=5;goto B4acf84;
case 0x4acf86:c.instructions+=4;goto B4acf86;
case 0x4acf87:c.instructions+=3;goto B4acf87;
case 0x4acf89:c.instructions+=2;goto B4acf89;
case 0x4acf8b:c.instructions+=1;goto B4acf8b;
case 0x4acf91:goto L4acf91;
case 0x4acf97:c.instructions+=2;goto B4acf97;
case 0x4acf98:c.instructions+=1;goto B4acf98;
case 0x4acf9a:goto L4acf9a;
case 0x4acf9e:c.instructions+=3;goto B4acf9e;
case 0x4acf9f:c.instructions+=2;goto B4acf9f;
case 0x4acfa0:c.instructions+=1;goto B4acfa0;
case 0x4acfa5:goto L4acfa5;
case 0x4acfa8:c.instructions+=3;goto B4acfa8;
case 0x4acfa9:c.instructions+=2;goto B4acfa9;
case 0x4acfac:c.instructions+=1;goto B4acfac;
case 0x4acfad:goto L4acfad;
case 0x4acfb2:c.instructions+=2;goto B4acfb2;
case 0x4acfb3:c.instructions+=1;goto B4acfb3;
case 0x4acfb8:goto L4acfb8;
case 0x4acfbb:goto L4acfbb;
case 0x4acfbc:c.instructions+=2;goto B4acfbc;
case 0x4acfbf:c.instructions+=1;goto B4acfbf;
case 0x4acfc0:goto L4acfc0;
case 0x4acfc3:c.instructions+=3;goto B4acfc3;
case 0x4acfc8:c.instructions+=2;goto B4acfc8;
case 0x4acfc9:c.instructions+=1;goto B4acfc9;
case 0x4acfce:goto L4acfce;
case 0x4acfd1:c.instructions+=1;goto B4acfd1;
case 0x4acfe0:goto L4acfe0;
case 0x4acfe1:c.instructions+=5;goto B4acfe1;
case 0x4acfe3:c.instructions+=4;goto B4acfe3;
case 0x4acfe5:c.instructions+=3;goto B4acfe5;
case 0x4acfe7:c.instructions+=2;goto B4acfe7;
case 0x4acfec:c.instructions+=1;goto B4acfec;
case 0x4acff1:goto L4acff1;
case 0x4acff3:c.instructions+=2;goto B4acff3;
case 0x4acff5:c.instructions+=1;goto B4acff5;
case 0x4acff8:goto L4acff8;
case 0x4acff9:c.instructions+=1;goto B4acff9;
default:missing_instruction(c.pc);}
B4ac000:L4ac000:{c.instructions+=1;NFSU2_TR(0x4ac000);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac001:L4ac001:{c.instructions+=2;NFSU2_TR(0x4ac001);
w4(R+0,u32(0xdull));
}
B4ac006:{NFSU2_TR(0x4ac006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac007:L4ac007:{c.instructions+=2;NFSU2_TR(0x4ac007);
w4(R+0,u32(0xeull));
}
B4ac00c:{NFSU2_TR(0x4ac00c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac00d:L4ac00d:{c.instructions+=2;NFSU2_TR(0x4ac00d);
w4(R+0,u32(0xbull));
}
B4ac012:{NFSU2_TR(0x4ac012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac013:L4ac013:{c.instructions+=2;NFSU2_TR(0x4ac013);
w4(R+0,u32(0x10ull));
}
B4ac018:{NFSU2_TR(0x4ac018);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac040:L4ac040:{c.instructions+=6;NFSU2_TR(0x4ac040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac044:{NFSU2_TR(0x4ac044);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac047:{NFSU2_TR(0x4ac047);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4ac04d:{NFSU2_TR(0x4ac04d);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ac050:{NFSU2_TR(0x4ac050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac051:{NFSU2_TR(0x4ac051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac056ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4ac056:L4ac056:{c.instructions+=3;NFSU2_TR(0x4ac056);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ac058:{NFSU2_TR(0x4ac058);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac05a:{NFSU2_TR(0x4ac05a);
if(r1(R+518)){{goto L4ac110;}}
}
B4ac060:L4ac060:{c.instructions+=12;NFSU2_TR(0x4ac060);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac061:{NFSU2_TR(0x4ac061);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac062:{NFSU2_TR(0x4ac062);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4ac066:{NFSU2_TR(0x4ac066);
__builtin_memmove((R+0),gp(0x7f6724),4);
}
B4ac06b:{NFSU2_TR(0x4ac06b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac06c:{NFSU2_TR(0x4ac06c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B4ac06d:{NFSU2_TR(0x4ac06d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ac06f:{NFSU2_TR(0x4ac06f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ac070:{NFSU2_TR(0x4ac070);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac072:{NFSU2_TR(0x4ac072);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac076:{NFSU2_TR(0x4ac076);
__builtin_memmove(gp(0x8362c8),(R+4),4);
}
B4ac07c:{NFSU2_TR(0x4ac07c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0cf;}}
}
B4ac07e:L4ac07e:{c.instructions+=8;NFSU2_TR(0x4ac07e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac07f:{NFSU2_TR(0x4ac07f);
__builtin_memmove((R+20),gp(0x890118),4);
}
B4ac085:{NFSU2_TR(0x4ac085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ac088:{NFSU2_TR(0x4ac088);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac08a:{NFSU2_TR(0x4ac08a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ac08d:{NFSU2_TR(0x4ac08d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ac090:{NFSU2_TR(0x4ac090);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac094:{NFSU2_TR(0x4ac094);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0ce;}}
}
B4ac096:L4ac096:{c.instructions+=2;NFSU2_TR(0x4ac096);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac098:{NFSU2_TR(0x4ac098);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0ce;}}
}
B4ac09a:L4ac09a:{c.instructions+=2;NFSU2_TR(0x4ac09a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac09c:{NFSU2_TR(0x4ac09c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0aa;}}
}
B4ac09e:L4ac09e:{c.instructions+=2;NFSU2_TR(0x4ac09e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac0a1:{NFSU2_TR(0x4ac0a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0aa;}}
}
B4ac0a3:L4ac0a3:{c.instructions+=4;NFSU2_TR(0x4ac0a3);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4ac0a7:{NFSU2_TR(0x4ac0a7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4ac0a8:{NFSU2_TR(0x4ac0a8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ac0a9:{NFSU2_TR(0x4ac0a9);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B4ac0aa:L4ac0aa:{c.instructions+=2;NFSU2_TR(0x4ac0aa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ac0ac:{NFSU2_TR(0x4ac0ac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ac0bd;}}
}
B4ac0ae:L4ac0ae:{c.instructions+=2;NFSU2_TR(0x4ac0ae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac0b0:{NFSU2_TR(0x4ac0b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0bd;}}
}
B4ac0b2:L4ac0b2:{c.instructions+=5;NFSU2_TR(0x4ac0b2);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4ac0b6:{NFSU2_TR(0x4ac0b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ac0b7:{NFSU2_TR(0x4ac0b7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ac0b8:{NFSU2_TR(0x4ac0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac0bc:{NFSU2_TR(0x4ac0bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4ac0bd:L4ac0bd:{c.instructions+=6;NFSU2_TR(0x4ac0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac0c1:{NFSU2_TR(0x4ac0c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ac0c2:{NFSU2_TR(0x4ac0c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac0c6:{NFSU2_TR(0x4ac0c6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ac0c8:{NFSU2_TR(0x4ac0c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac0cc:{NFSU2_TR(0x4ac0cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac096u);}goto L4ac096;}}
}
B4ac0ce:L4ac0ce:{c.instructions+=1;NFSU2_TR(0x4ac0ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ac0cf:L4ac0cf:{c.instructions+=3;NFSU2_TR(0x4ac0cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac0d1:{NFSU2_TR(0x4ac0d1);
w4(R+0,u32(0x1ull));
}
B4ac0d6:{NFSU2_TR(0x4ac0d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac0f0;}}
}
B4ac0d8:L4ac0d8:{c.instructions+=2;NFSU2_TR(0x4ac0d8);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4ac0dc:{NFSU2_TR(0x4ac0dc);
__builtin_memmove((R+16),(R+16),4);
}
B4ac0e0:L4ac0e0:{c.instructions+=6;NFSU2_TR(0x4ac0e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4ac0e2:{NFSU2_TR(0x4ac0e2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B4ac0e5:{NFSU2_TR(0x4ac0e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8362c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4ac0ec:{NFSU2_TR(0x4ac0ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ac0ed:{NFSU2_TR(0x4ac0ed);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B4ac0ee:{NFSU2_TR(0x4ac0ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac0e0u);}goto L4ac0e0;}}
}
B4ac0f0:L4ac0f0:{c.instructions+=2;NFSU2_TR(0x4ac0f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac0f2:{NFSU2_TR(0x4ac0f2);
if(r1(R+518)){{goto L4ac0fc;}}
}
B4ac0f4:L4ac0f4:{c.instructions+=2;NFSU2_TR(0x4ac0f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8362c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4ac0fb:{NFSU2_TR(0x4ac0fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ac0fc:L4ac0fc:{c.instructions+=2;NFSU2_TR(0x4ac0fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac0fe:{NFSU2_TR(0x4ac0fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac10d;}}
}
B4ac100:L4ac100:{c.instructions+=2;NFSU2_TR(0x4ac100);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8362c8ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4ac107:{NFSU2_TR(0x4ac107);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac10b:L4ac10b:{c.instructions+=1;NFSU2_TR(0x4ac10b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4ac10d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac10bu);}goto L4ac10b;}
}
B4ac10d:L4ac10d:{c.instructions+=3;NFSU2_TR(0x4ac10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac10e:{NFSU2_TR(0x4ac10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac10f:{NFSU2_TR(0x4ac10f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ac110:L4ac110:{c.instructions+=2;NFSU2_TR(0x4ac110);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ac113:{NFSU2_TR(0x4ac113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac120:L4ac120:{c.instructions+=10;NFSU2_TR(0x4ac120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac121:{NFSU2_TR(0x4ac121);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ac124:{NFSU2_TR(0x4ac124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac127:{NFSU2_TR(0x4ac127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac12a:{NFSU2_TR(0x4ac12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac12d:{NFSU2_TR(0x4ac12d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4ac12f:{NFSU2_TR(0x4ac12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac132:{NFSU2_TR(0x4ac132);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4ac134:{NFSU2_TR(0x4ac134);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ac136:{NFSU2_TR(0x4ac136);
if(r1(R+518)){{goto L4ac164;}}
}
B4ac138:L4ac138:{c.instructions+=8;NFSU2_TR(0x4ac138);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac13c:{NFSU2_TR(0x4ac13c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ac143:{NFSU2_TR(0x4ac143);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4ac148:{NFSU2_TR(0x4ac148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac14e:{NFSU2_TR(0x4ac14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac151:{NFSU2_TR(0x4ac151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac152:{NFSU2_TR(0x4ac152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac153:{NFSU2_TR(0x4ac153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac158ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ac158:L4ac158:{c.instructions+=3;NFSU2_TR(0x4ac158);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac15b:{NFSU2_TR(0x4ac15b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac15c:{NFSU2_TR(0x4ac15c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac161ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ac161:L4ac161:{c.instructions+=1;NFSU2_TR(0x4ac161);
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
B4ac164:L4ac164:{c.instructions+=2;NFSU2_TR(0x4ac164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac165:{NFSU2_TR(0x4ac165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac170:L4ac170:{c.instructions+=3;NFSU2_TR(0x4ac170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac173:{NFSU2_TR(0x4ac173);
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
B4ac175:{NFSU2_TR(0x4ac175);
if(r1(R+518)){{goto L4ac1a5;}}
}
B4ac177:L4ac177:{c.instructions+=8;NFSU2_TR(0x4ac177);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac17b:{NFSU2_TR(0x4ac17b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac17f:{NFSU2_TR(0x4ac17f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac183:{NFSU2_TR(0x4ac183);
__builtin_memmove(gp(0x8364a8),(R+0),4);
}
B4ac188:{NFSU2_TR(0x4ac188);
s4(0x8364ac,u32(0x4ull));
}
B4ac192:{NFSU2_TR(0x4ac192);
__builtin_memmove(gp(0x8364a0),(R+4),4);
}
B4ac198:{NFSU2_TR(0x4ac198);
__builtin_memmove(gp(0x8364a4),(R+8),4);
}
B4ac19e:{NFSU2_TR(0x4ac19e);
s1(0x83649c,u8(0x1ull));
}
B4ac1a5:L4ac1a5:{c.instructions+=1;NFSU2_TR(0x4ac1a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac1b0:L4ac1b0:{c.instructions+=3;NFSU2_TR(0x4ac1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac1b6:{NFSU2_TR(0x4ac1b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac1b8:{NFSU2_TR(0x4ac1b8);
if(r1(R+518)){{goto L4ac1c1;}}
}
B4ac1ba:L4ac1ba:{c.instructions+=2;NFSU2_TR(0x4ac1ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac1be:{NFSU2_TR(0x4ac1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac1c1:L4ac1c1:{c.instructions+=3;NFSU2_TR(0x4ac1c1);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4ac1c7:{NFSU2_TR(0x4ac1c7);
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
B4ac1c9:{NFSU2_TR(0x4ac1c9);
if(r1(R+518)){{goto L4ac1d8;}}
}
B4ac1cb:L4ac1cb:{c.instructions+=2;NFSU2_TR(0x4ac1cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac1d3:{NFSU2_TR(0x4ac1d3);
TAIL_STATIC(0x458520u,458);
}
B4ac1d8:L4ac1d8:{c.instructions+=1;NFSU2_TR(0x4ac1d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac1e0:L4ac1e0:{c.instructions+=3;NFSU2_TR(0x4ac1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac1e4:{NFSU2_TR(0x4ac1e4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ac1e7:{NFSU2_TR(0x4ac1e7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ac244;}}
}
B4ac1e9:L4ac1e9:{c.instructions+=1;NFSU2_TR(0x4ac1e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ac248ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ac1f0:L4ac1f0:{c.instructions+=2;NFSU2_TR(0x4ac1f0);
w4(R+0,u32(0xcull));
}
B4ac1f5:{NFSU2_TR(0x4ac1f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac1f6:L4ac1f6:{c.instructions+=2;NFSU2_TR(0x4ac1f6);
w4(R+0,u32(0xdull));
}
B4ac1fb:{NFSU2_TR(0x4ac1fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac1fc:L4ac1fc:{c.instructions+=2;NFSU2_TR(0x4ac1fc);
w4(R+0,u32(0xeull));
}
B4ac201:{NFSU2_TR(0x4ac201);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac202:L4ac202:{c.instructions+=2;NFSU2_TR(0x4ac202);
w4(R+0,u32(0xfull));
}
B4ac207:{NFSU2_TR(0x4ac207);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac208:L4ac208:{c.instructions+=2;NFSU2_TR(0x4ac208);
w4(R+0,u32(0x10ull));
}
B4ac20d:{NFSU2_TR(0x4ac20d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac20e:L4ac20e:{c.instructions+=2;NFSU2_TR(0x4ac20e);
w4(R+0,u32(0x11ull));
}
B4ac213:{NFSU2_TR(0x4ac213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac214:L4ac214:{c.instructions+=2;NFSU2_TR(0x4ac214);
w4(R+0,u32(0x12ull));
}
B4ac219:{NFSU2_TR(0x4ac219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac21a:L4ac21a:{c.instructions+=2;NFSU2_TR(0x4ac21a);
w4(R+0,u32(0x5ull));
}
B4ac21f:{NFSU2_TR(0x4ac21f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac220:L4ac220:{c.instructions+=2;NFSU2_TR(0x4ac220);
w4(R+0,u32(0x7ull));
}
B4ac225:{NFSU2_TR(0x4ac225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac226:L4ac226:{c.instructions+=2;NFSU2_TR(0x4ac226);
w4(R+0,u32(0x8ull));
}
B4ac22b:{NFSU2_TR(0x4ac22b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac22c:L4ac22c:{c.instructions+=2;NFSU2_TR(0x4ac22c);
w4(R+0,u32(0x9ull));
}
B4ac231:{NFSU2_TR(0x4ac231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac232:L4ac232:{c.instructions+=2;NFSU2_TR(0x4ac232);
w4(R+0,u32(0xaull));
}
B4ac237:{NFSU2_TR(0x4ac237);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac238:L4ac238:{c.instructions+=2;NFSU2_TR(0x4ac238);
w4(R+0,u32(0xbull));
}
B4ac23d:{NFSU2_TR(0x4ac23d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac23e:L4ac23e:{c.instructions+=2;NFSU2_TR(0x4ac23e);
w4(R+0,u32(0x6ull));
}
B4ac243:{NFSU2_TR(0x4ac243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac244:L4ac244:{c.instructions+=2;NFSU2_TR(0x4ac244);
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
B4ac246:{NFSU2_TR(0x4ac246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac290:L4ac290:{c.instructions+=5;NFSU2_TR(0x4ac290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac294:{NFSU2_TR(0x4ac294);
__builtin_memmove((R+4),gp(0x8364b8),4);
}
B4ac29a:{NFSU2_TR(0x4ac29a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac29b:{NFSU2_TR(0x4ac29b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac29c:{NFSU2_TR(0x4ac29c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac2a1ull));
TAIL_STATIC(0x43f920u,43f);
}
B4ac2a1:L4ac2a1:{c.instructions+=2;NFSU2_TR(0x4ac2a1);
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
B4ac2a4:{NFSU2_TR(0x4ac2a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac2b0:L4ac2b0:{c.instructions+=5;NFSU2_TR(0x4ac2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac2b1:{NFSU2_TR(0x4ac2b1);
__builtin_memmove((R+24),(R+4),4);
}
B4ac2b3:{NFSU2_TR(0x4ac2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac2b6:{NFSU2_TR(0x4ac2b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac2b8:{NFSU2_TR(0x4ac2b8);
if(r1(R+518)){{goto L4ac2bf;}}
}
B4ac2ba:L4ac2ba:{c.instructions+=2;NFSU2_TR(0x4ac2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac2bd:{NFSU2_TR(0x4ac2bd);
{goto L4ac2c1;}
}
B4ac2bf:L4ac2bf:{c.instructions+=1;NFSU2_TR(0x4ac2bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ac2c1:L4ac2c1:{c.instructions+=3;NFSU2_TR(0x4ac2c1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ac2c2:{NFSU2_TR(0x4ac2c2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ac2c5:{NFSU2_TR(0x4ac2c5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ac431;}}
}
B4ac2cb:L4ac2cb:{c.instructions+=3;NFSU2_TR(0x4ac2cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ac448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4ac2d2:{NFSU2_TR(0x4ac2d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac2d3:{NFSU2_TR(0x4ac2d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ac438ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ac2da:L4ac2da:{c.instructions+=10;NFSU2_TR(0x4ac2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac2dd:{NFSU2_TR(0x4ac2dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac2e1:{NFSU2_TR(0x4ac2e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ac2e3:{NFSU2_TR(0x4ac2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac2e6:{NFSU2_TR(0x4ac2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac2e9:{NFSU2_TR(0x4ac2e9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ac2ec:{NFSU2_TR(0x4ac2ec);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac2f2:{NFSU2_TR(0x4ac2f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac2f3:{NFSU2_TR(0x4ac2f3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac2f6:{NFSU2_TR(0x4ac2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac2fbull));
TAIL_STATIC(0x401100u,401);
}
B4ac2fb:L4ac2fb:{c.instructions+=1;NFSU2_TR(0x4ac2fb);
{goto L4ac413;}
}
B4ac300:L4ac300:{c.instructions+=4;NFSU2_TR(0x4ac300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac303:{NFSU2_TR(0x4ac303);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4ac309:{NFSU2_TR(0x4ac309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac30a:{NFSU2_TR(0x4ac30a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac30full));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4ac30f:L4ac30f:{c.instructions+=3;NFSU2_TR(0x4ac30f);
__builtin_memmove((R+24),(R+0),4);
}
B4ac311:{NFSU2_TR(0x4ac311);
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
B4ac313:{NFSU2_TR(0x4ac313);
if(r1(R+518)){{goto L4ac430;}}
}
B4ac319:L4ac319:{c.instructions+=12;NFSU2_TR(0x4ac319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac31c:{NFSU2_TR(0x4ac31c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac320:{NFSU2_TR(0x4ac320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ac322:{NFSU2_TR(0x4ac322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac325:{NFSU2_TR(0x4ac325);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac328:{NFSU2_TR(0x4ac328);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4ac32f:{NFSU2_TR(0x4ac32f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac333:{NFSU2_TR(0x4ac333);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac334:{NFSU2_TR(0x4ac334);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ac338:{NFSU2_TR(0x4ac338);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac33e:{NFSU2_TR(0x4ac33e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac341:{NFSU2_TR(0x4ac341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac346ull));
TAIL_STATIC(0x401100u,401);
}
B4ac346:L4ac346:{c.instructions+=8;NFSU2_TR(0x4ac346);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ac34a:{NFSU2_TR(0x4ac34a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac34c:{NFSU2_TR(0x4ac34c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B4ac353:{NFSU2_TR(0x4ac353);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac357:{NFSU2_TR(0x4ac357);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ac35b:{NFSU2_TR(0x4ac35b);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac361:{NFSU2_TR(0x4ac361);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac364:{NFSU2_TR(0x4ac364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac369ull));
TAIL_STATIC(0x43c350u,43c);
}
B4ac369:L4ac369:{c.instructions+=5;NFSU2_TR(0x4ac369);
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
B4ac36c:{NFSU2_TR(0x4ac36c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac36f:{NFSU2_TR(0x4ac36f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac370:{NFSU2_TR(0x4ac370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac371:{NFSU2_TR(0x4ac371);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac374:L4ac374:{c.instructions+=4;NFSU2_TR(0x4ac374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac377:{NFSU2_TR(0x4ac377);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4ac37e:{NFSU2_TR(0x4ac37e);
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
B4ac380:{NFSU2_TR(0x4ac380);
if(r1(R+518)){{goto L4ac430;}}
}
B4ac386:L4ac386:{c.instructions+=3;NFSU2_TR(0x4ac386);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ac389:{NFSU2_TR(0x4ac389);
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
B4ac38b:{NFSU2_TR(0x4ac38b);
if(r1(R+518)){{goto L4ac430;}}
}
B4ac391:L4ac391:{c.instructions+=12;NFSU2_TR(0x4ac391);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac394:{NFSU2_TR(0x4ac394);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac398:{NFSU2_TR(0x4ac398);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ac39a:{NFSU2_TR(0x4ac39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac39d:{NFSU2_TR(0x4ac39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac3a0:{NFSU2_TR(0x4ac3a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4ac3a7:{NFSU2_TR(0x4ac3a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac3ab:{NFSU2_TR(0x4ac3ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac3ac:{NFSU2_TR(0x4ac3ac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ac3b0:{NFSU2_TR(0x4ac3b0);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac3b6:{NFSU2_TR(0x4ac3b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac3b9:{NFSU2_TR(0x4ac3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac3beull));
TAIL_STATIC(0x401100u,401);
}
B4ac3be:L4ac3be:{c.instructions+=8;NFSU2_TR(0x4ac3be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ac3c2:{NFSU2_TR(0x4ac3c2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac3c4:{NFSU2_TR(0x4ac3c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B4ac3cb:{NFSU2_TR(0x4ac3cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac3cf:{NFSU2_TR(0x4ac3cf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ac3d3:{NFSU2_TR(0x4ac3d3);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac3d9:{NFSU2_TR(0x4ac3d9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac3dc:{NFSU2_TR(0x4ac3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac3e1ull));
TAIL_STATIC(0x43c350u,43c);
}
B4ac3e1:L4ac3e1:{c.instructions+=5;NFSU2_TR(0x4ac3e1);
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
B4ac3e4:{NFSU2_TR(0x4ac3e4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac3e7:{NFSU2_TR(0x4ac3e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac3e8:{NFSU2_TR(0x4ac3e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac3e9:{NFSU2_TR(0x4ac3e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac3ec:L4ac3ec:{c.instructions+=11;NFSU2_TR(0x4ac3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac3ef:{NFSU2_TR(0x4ac3ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac3f3:{NFSU2_TR(0x4ac3f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ac3f5:{NFSU2_TR(0x4ac3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac3f8:{NFSU2_TR(0x4ac3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac3fb:{NFSU2_TR(0x4ac3fb);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ac3fe:{NFSU2_TR(0x4ac3fe);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac404:{NFSU2_TR(0x4ac404);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac405:{NFSU2_TR(0x4ac405);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ac40b:{NFSU2_TR(0x4ac40b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac40e:{NFSU2_TR(0x4ac40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac413ull));
TAIL_STATIC(0x43c350u,43c);
}
B4ac413:L4ac413:{c.instructions+=6;NFSU2_TR(0x4ac413);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ac417:{NFSU2_TR(0x4ac417);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac419:{NFSU2_TR(0x4ac419);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ac41c:{NFSU2_TR(0x4ac41c);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ac422:{NFSU2_TR(0x4ac422);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac425:{NFSU2_TR(0x4ac425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac42aull));
TAIL_STATIC(0x43c350u,43c);
}
B4ac42a:L4ac42a:{c.instructions+=2;NFSU2_TR(0x4ac42a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ac42d:{NFSU2_TR(0x4ac42d);
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
B4ac430:L4ac430:{c.instructions+=1;NFSU2_TR(0x4ac430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac431:L4ac431:{c.instructions+=2;NFSU2_TR(0x4ac431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac432:{NFSU2_TR(0x4ac432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac460:L4ac460:{c.instructions+=7;NFSU2_TR(0x4ac460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4ac463:{NFSU2_TR(0x4ac463);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac464:{NFSU2_TR(0x4ac464);
__builtin_memmove((R+24),(R+4),4);
}
B4ac466:{NFSU2_TR(0x4ac466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac469:{NFSU2_TR(0x4ac469);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac46b:{NFSU2_TR(0x4ac46b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac46c:{NFSU2_TR(0x4ac46c);
if(r1(R+518)){{goto L4ac619;}}
}
B4ac472:L4ac472:{c.instructions+=3;NFSU2_TR(0x4ac472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac475:{NFSU2_TR(0x4ac475);
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
B4ac478:{NFSU2_TR(0x4ac478);
if(r1(R+518)){{goto L4ac545;}}
}
B4ac47e:L4ac47e:{c.instructions+=2;NFSU2_TR(0x4ac47e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac481:{NFSU2_TR(0x4ac481);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac619;}}
}
B4ac487:L4ac487:{c.instructions+=2;NFSU2_TR(0x4ac487);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x12ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac48a:{NFSU2_TR(0x4ac48a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4ac619;}}
}
B4ac490:L4ac490:{c.instructions+=3;NFSU2_TR(0x4ac490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac493:{NFSU2_TR(0x4ac493);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ac496:{NFSU2_TR(0x4ac496);
if(r1(R+518)){{goto L4ac4e6;}}
}
B4ac498:L4ac498:{c.instructions+=3;NFSU2_TR(0x4ac498);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac49b:{NFSU2_TR(0x4ac49b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac49d:{NFSU2_TR(0x4ac49d);
if(r1(R+518)){{goto L4ac4e6;}}
}
B4ac49f:L4ac49f:{c.instructions+=2;NFSU2_TR(0x4ac49f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ac4a3:{NFSU2_TR(0x4ac4a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ac4e6;}}
}
B4ac4a5:L4ac4a5:{c.instructions+=3;NFSU2_TR(0x4ac4a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ac4a7:{NFSU2_TR(0x4ac4a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4a8:{NFSU2_TR(0x4ac4a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac4adull));
TAIL_STATIC(0x495570u,495);
}
B4ac4ad:L4ac4ad:{c.instructions+=5;NFSU2_TR(0x4ac4ad);
__builtin_memmove((R+28),(R+0),4);
}
B4ac4af:{NFSU2_TR(0x4ac4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac4b2:{NFSU2_TR(0x4ac4b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ac4b5:{NFSU2_TR(0x4ac4b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac4b7:{NFSU2_TR(0x4ac4b7);
if(r1(R+518)){{goto L4ac4bd;}}
}
B4ac4b9:L4ac4b9:{c.instructions+=2;NFSU2_TR(0x4ac4b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ac4bb:{NFSU2_TR(0x4ac4bb);
{goto L4ac4bf;}
}
B4ac4bd:L4ac4bd:{c.instructions+=1;NFSU2_TR(0x4ac4bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ac4bf:L4ac4bf:{c.instructions+=3;NFSU2_TR(0x4ac4bf);
u8 U[4];
w4(U+0,u32(0xb90f50bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4c4:{NFSU2_TR(0x4ac4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4c5:{NFSU2_TR(0x4ac4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac4caull));
TAIL_STATIC(0x50c990u,50c);
}
B4ac4ca:L4ac4ca:{c.instructions+=4;NFSU2_TR(0x4ac4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ac4cd:{NFSU2_TR(0x4ac4cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac4d0:{NFSU2_TR(0x4ac4d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac4d2:{NFSU2_TR(0x4ac4d2);
if(r1(R+518)){{goto L4ac533;}}
}
B4ac4d4:L4ac4d4:{c.instructions+=4;NFSU2_TR(0x4ac4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ac4d6:{NFSU2_TR(0x4ac4d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4d7:{NFSU2_TR(0x4ac4d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4d8:{NFSU2_TR(0x4ac4d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac4ddull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ac4dd:L4ac4dd:{c.instructions+=5;NFSU2_TR(0x4ac4dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac4e0:{NFSU2_TR(0x4ac4e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac4e1:{NFSU2_TR(0x4ac4e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac4e2:{NFSU2_TR(0x4ac4e2);
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
B4ac4e5:{NFSU2_TR(0x4ac4e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac4e6:L4ac4e6:{c.instructions+=5;NFSU2_TR(0x4ac4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ac4e8:{NFSU2_TR(0x4ac4e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4e9:{NFSU2_TR(0x4ac4e9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ac4ed:{NFSU2_TR(0x4ac4ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac4ee:{NFSU2_TR(0x4ac4ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac4f3ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4ac4f3:L4ac4f3:{c.instructions+=3;NFSU2_TR(0x4ac4f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac4f6:{NFSU2_TR(0x4ac4f6);
__builtin_memmove((R+4),(R+0),4);
}
B4ac4f8:{NFSU2_TR(0x4ac4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac4fdull));
TAIL_STATIC(0x5054d0u,505);
}
B4ac4fd:L4ac4fd:{c.instructions+=4;NFSU2_TR(0x4ac4fd);
__builtin_memmove((R+28),(R+0),4);
}
B4ac4ff:{NFSU2_TR(0x4ac4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac502:{NFSU2_TR(0x4ac502);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac504:{NFSU2_TR(0x4ac504);
if(r1(R+518)){{goto L4ac50a;}}
}
B4ac506:L4ac506:{c.instructions+=2;NFSU2_TR(0x4ac506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ac508:{NFSU2_TR(0x4ac508);
{goto L4ac50c;}
}
B4ac50a:L4ac50a:{c.instructions+=1;NFSU2_TR(0x4ac50a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ac50c:L4ac50c:{c.instructions+=3;NFSU2_TR(0x4ac50c);
u8 U[4];
w4(U+0,u32(0x25559384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac511:{NFSU2_TR(0x4ac511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac512:{NFSU2_TR(0x4ac512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac517ull));
TAIL_STATIC(0x50c990u,50c);
}
B4ac517:L4ac517:{c.instructions+=4;NFSU2_TR(0x4ac517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ac51a:{NFSU2_TR(0x4ac51a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac51d:{NFSU2_TR(0x4ac51d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac51f:{NFSU2_TR(0x4ac51f);
if(r1(R+518)){{goto L4ac533;}}
}
B4ac521:L4ac521:{c.instructions+=4;NFSU2_TR(0x4ac521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ac523:{NFSU2_TR(0x4ac523);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac524:{NFSU2_TR(0x4ac524);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac525:{NFSU2_TR(0x4ac525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac52aull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ac52a:L4ac52a:{c.instructions+=5;NFSU2_TR(0x4ac52a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac52d:{NFSU2_TR(0x4ac52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac52e:{NFSU2_TR(0x4ac52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac52f:{NFSU2_TR(0x4ac52f);
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
B4ac532:{NFSU2_TR(0x4ac532);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac533:L4ac533:{c.instructions+=4;NFSU2_TR(0x4ac533);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ac535:{NFSU2_TR(0x4ac535);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac536:{NFSU2_TR(0x4ac536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac537:{NFSU2_TR(0x4ac537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac53cull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ac53c:L4ac53c:{c.instructions+=5;NFSU2_TR(0x4ac53c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac53f:{NFSU2_TR(0x4ac53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac540:{NFSU2_TR(0x4ac540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac541:{NFSU2_TR(0x4ac541);
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
B4ac544:{NFSU2_TR(0x4ac544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac545:L4ac545:{c.instructions+=4;NFSU2_TR(0x4ac545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac548:{NFSU2_TR(0x4ac548);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4ac54e:{NFSU2_TR(0x4ac54e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac54f:{NFSU2_TR(0x4ac54f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac554ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4ac554:L4ac554:{c.instructions+=2;NFSU2_TR(0x4ac554);
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
B4ac556:{NFSU2_TR(0x4ac556);
if(r1(R+518)){{goto L4ac619;}}
}
B4ac55c:L4ac55c:{c.instructions+=3;NFSU2_TR(0x4ac55c);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4ac562:{NFSU2_TR(0x4ac562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac563:{NFSU2_TR(0x4ac563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac568ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4ac568:L4ac568:{c.instructions+=2;NFSU2_TR(0x4ac568);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac56a:{NFSU2_TR(0x4ac56a);
if(r1(R+518)){{goto L4ac619;}}
}
B4ac570:L4ac570:{c.instructions+=3;NFSU2_TR(0x4ac570);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ac574:{NFSU2_TR(0x4ac574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac577:{NFSU2_TR(0x4ac577);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ac5cc;}}
}
B4ac579:L4ac579:{c.instructions+=2;NFSU2_TR(0x4ac579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac57b:{NFSU2_TR(0x4ac57b);
if(r1(R+518)){{goto L4ac581;}}
}
B4ac57d:L4ac57d:{c.instructions+=2;NFSU2_TR(0x4ac57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ac57f:{NFSU2_TR(0x4ac57f);
{goto L4ac583;}
}
B4ac581:L4ac581:{c.instructions+=1;NFSU2_TR(0x4ac581);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ac583:L4ac583:{c.instructions+=4;NFSU2_TR(0x4ac583);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac584:{NFSU2_TR(0x4ac584);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ac588:{NFSU2_TR(0x4ac588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac589:{NFSU2_TR(0x4ac589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac58eull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4ac58e:L4ac58e:{c.instructions+=5;NFSU2_TR(0x4ac58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ac591:{NFSU2_TR(0x4ac591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac594:{NFSU2_TR(0x4ac594);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac596:{NFSU2_TR(0x4ac596);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac59e:{NFSU2_TR(0x4ac59e);
if(r1(R+518)){{goto L4ac5b6;}}
}
B4ac5a0:L4ac5a0:{c.instructions+=5;NFSU2_TR(0x4ac5a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ac5a2:{NFSU2_TR(0x4ac5a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ac5a6:{NFSU2_TR(0x4ac5a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5a7:{NFSU2_TR(0x4ac5a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5a8:{NFSU2_TR(0x4ac5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac5adull));
TAIL_STATIC(0x51d860u,51d);
}
B4ac5ad:L4ac5ad:{c.instructions+=5;NFSU2_TR(0x4ac5ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac5b0:{NFSU2_TR(0x4ac5b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac5b1:{NFSU2_TR(0x4ac5b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac5b2:{NFSU2_TR(0x4ac5b2);
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
B4ac5b5:{NFSU2_TR(0x4ac5b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac5b6:L4ac5b6:{c.instructions+=5;NFSU2_TR(0x4ac5b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ac5ba:{NFSU2_TR(0x4ac5ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5bb:{NFSU2_TR(0x4ac5bb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ac5bd:{NFSU2_TR(0x4ac5bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5be:{NFSU2_TR(0x4ac5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac5c3ull));
TAIL_STATIC(0x51d860u,51d);
}
B4ac5c3:L4ac5c3:{c.instructions+=5;NFSU2_TR(0x4ac5c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac5c6:{NFSU2_TR(0x4ac5c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac5c7:{NFSU2_TR(0x4ac5c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac5c8:{NFSU2_TR(0x4ac5c8);
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
B4ac5cb:{NFSU2_TR(0x4ac5cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac5cc:L4ac5cc:{c.instructions+=2;NFSU2_TR(0x4ac5cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac5ce:{NFSU2_TR(0x4ac5ce);
if(r1(R+518)){{goto L4ac5d4;}}
}
B4ac5d0:L4ac5d0:{c.instructions+=2;NFSU2_TR(0x4ac5d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ac5d2:{NFSU2_TR(0x4ac5d2);
{goto L4ac5d6;}
}
B4ac5d4:L4ac5d4:{c.instructions+=1;NFSU2_TR(0x4ac5d4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ac5d6:L4ac5d6:{c.instructions+=4;NFSU2_TR(0x4ac5d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5d7:{NFSU2_TR(0x4ac5d7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ac5db:{NFSU2_TR(0x4ac5db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5dc:{NFSU2_TR(0x4ac5dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac5e1ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4ac5e1:L4ac5e1:{c.instructions+=5;NFSU2_TR(0x4ac5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ac5e4:{NFSU2_TR(0x4ac5e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac5e7:{NFSU2_TR(0x4ac5e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac5e9:{NFSU2_TR(0x4ac5e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac5f1:{NFSU2_TR(0x4ac5f1);
if(r1(R+518)){{goto L4ac609;}}
}
B4ac5f3:L4ac5f3:{c.instructions+=5;NFSU2_TR(0x4ac5f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ac5f5:{NFSU2_TR(0x4ac5f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ac5f9:{NFSU2_TR(0x4ac5f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5fa:{NFSU2_TR(0x4ac5fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac5fb:{NFSU2_TR(0x4ac5fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac600ull));
TAIL_STATIC(0x51d860u,51d);
}
B4ac600:L4ac600:{c.instructions+=5;NFSU2_TR(0x4ac600);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac603:{NFSU2_TR(0x4ac603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac604:{NFSU2_TR(0x4ac604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac605:{NFSU2_TR(0x4ac605);
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
B4ac608:{NFSU2_TR(0x4ac608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac609:L4ac609:{c.instructions+=5;NFSU2_TR(0x4ac609);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ac60d:{NFSU2_TR(0x4ac60d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac60e:{NFSU2_TR(0x4ac60e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ac610:{NFSU2_TR(0x4ac610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac611:{NFSU2_TR(0x4ac611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac616ull));
TAIL_STATIC(0x51d860u,51d);
}
B4ac616:L4ac616:{c.instructions+=1;NFSU2_TR(0x4ac616);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac619:L4ac619:{c.instructions+=4;NFSU2_TR(0x4ac619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac61a:{NFSU2_TR(0x4ac61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac61b:{NFSU2_TR(0x4ac61b);
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
B4ac61e:{NFSU2_TR(0x4ac61e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac620:L4ac620:{c.instructions+=4;NFSU2_TR(0x4ac620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac624:{NFSU2_TR(0x4ac624);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac627:{NFSU2_TR(0x4ac627);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ac62a:{NFSU2_TR(0x4ac62a);
if(r1(R+518)){{goto L4ac698;}}
}
B4ac62c:L4ac62c:{c.instructions+=2;NFSU2_TR(0x4ac62c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ac62d:{NFSU2_TR(0x4ac62d);
if(r1(R+518)){{goto L4ac667;}}
}
B4ac62f:L4ac62f:{c.instructions+=2;NFSU2_TR(0x4ac62f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ac630:{NFSU2_TR(0x4ac630);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ac6c6;}}
}
B4ac636:L4ac636:{c.instructions+=3;NFSU2_TR(0x4ac636);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac639:{NFSU2_TR(0x4ac639);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac63b:{NFSU2_TR(0x4ac63b);
if(r1(R+518)){{goto L4ac652;}}
}
B4ac63d:L4ac63d:{c.instructions+=5;NFSU2_TR(0x4ac63d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ac63f:{NFSU2_TR(0x4ac63f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac641:{NFSU2_TR(0x4ac641);
u8 U[4];
w4(U+0,u32(0x790afcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac646:{NFSU2_TR(0x4ac646);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac647:{NFSU2_TR(0x4ac647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac64cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ac64c:L4ac64c:{c.instructions+=2;NFSU2_TR(0x4ac64c);
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
B4ac64f:{NFSU2_TR(0x4ac64f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac652:L4ac652:{c.instructions+=5;NFSU2_TR(0x4ac652);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac654:{NFSU2_TR(0x4ac654);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ac656:{NFSU2_TR(0x4ac656);
u8 U[4];
w4(U+0,u32(0x790afcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac65b:{NFSU2_TR(0x4ac65b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac65c:{NFSU2_TR(0x4ac65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac661ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ac661:L4ac661:{c.instructions+=2;NFSU2_TR(0x4ac661);
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
B4ac664:{NFSU2_TR(0x4ac664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac667:L4ac667:{c.instructions+=3;NFSU2_TR(0x4ac667);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac66a:{NFSU2_TR(0x4ac66a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac66c:{NFSU2_TR(0x4ac66c);
if(r1(R+518)){{goto L4ac683;}}
}
B4ac66e:L4ac66e:{c.instructions+=5;NFSU2_TR(0x4ac66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ac670:{NFSU2_TR(0x4ac670);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac672:{NFSU2_TR(0x4ac672);
u8 U[4];
w4(U+0,u32(0x78415cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac677:{NFSU2_TR(0x4ac677);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac678:{NFSU2_TR(0x4ac678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac67dull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ac67d:L4ac67d:{c.instructions+=2;NFSU2_TR(0x4ac67d);
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
B4ac680:{NFSU2_TR(0x4ac680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac683:L4ac683:{c.instructions+=5;NFSU2_TR(0x4ac683);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac685:{NFSU2_TR(0x4ac685);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ac687:{NFSU2_TR(0x4ac687);
u8 U[4];
w4(U+0,u32(0x78415cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac68c:{NFSU2_TR(0x4ac68c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac68d:{NFSU2_TR(0x4ac68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac692ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ac692:L4ac692:{c.instructions+=2;NFSU2_TR(0x4ac692);
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
B4ac695:{NFSU2_TR(0x4ac695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac698:L4ac698:{c.instructions+=3;NFSU2_TR(0x4ac698);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac69b:{NFSU2_TR(0x4ac69b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ac69d:{NFSU2_TR(0x4ac69d);
if(r1(R+518)){{goto L4ac6b4;}}
}
B4ac69f:L4ac69f:{c.instructions+=5;NFSU2_TR(0x4ac69f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ac6a1:{NFSU2_TR(0x4ac6a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6a3:{NFSU2_TR(0x4ac6a3);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6a8:{NFSU2_TR(0x4ac6a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6a9:{NFSU2_TR(0x4ac6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac6aeull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ac6ae:L4ac6ae:{c.instructions+=2;NFSU2_TR(0x4ac6ae);
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
B4ac6b1:{NFSU2_TR(0x4ac6b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac6b4:L4ac6b4:{c.instructions+=5;NFSU2_TR(0x4ac6b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6b6:{NFSU2_TR(0x4ac6b6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ac6b8:{NFSU2_TR(0x4ac6b8);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6bd:{NFSU2_TR(0x4ac6bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6be:{NFSU2_TR(0x4ac6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac6c3ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ac6c3:L4ac6c3:{c.instructions+=1;NFSU2_TR(0x4ac6c3);
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
B4ac6c6:L4ac6c6:{c.instructions+=1;NFSU2_TR(0x4ac6c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac6d0:L4ac6d0:{c.instructions+=5;NFSU2_TR(0x4ac6d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6d2:{NFSU2_TR(0x4ac6d2);
u8 U[4];
w4(U+0,u32(0x790b18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6d7:{NFSU2_TR(0x4ac6d7);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6d9:{NFSU2_TR(0x4ac6d9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6db:{NFSU2_TR(0x4ac6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac6e0ull));
TAIL_STATIC(0x440df0u,440);
}
B4ac6e0:L4ac6e0:{c.instructions+=6;NFSU2_TR(0x4ac6e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6e2:{NFSU2_TR(0x4ac6e2);
u8 U[4];
w4(U+0,u32(0x790b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6e7:{NFSU2_TR(0x4ac6e7);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6e9:{NFSU2_TR(0x4ac6e9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac6eb:{NFSU2_TR(0x4ac6eb);
__builtin_memmove(gp(0x8364b4),(R+0),4);
}
B4ac6f0:{NFSU2_TR(0x4ac6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac6f5ull));
TAIL_STATIC(0x440df0u,440);
}
B4ac6f5:L4ac6f5:{c.instructions+=3;NFSU2_TR(0x4ac6f5);
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
B4ac6f8:{NFSU2_TR(0x4ac6f8);
__builtin_memmove(gp(0x8364b8),(R+0),4);
}
B4ac6fd:{NFSU2_TR(0x4ac6fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac700:L4ac700:{c.instructions+=3;NFSU2_TR(0x4ac700);
__builtin_memmove((R+0),gp(0x8364b4),4);
}
B4ac705:{NFSU2_TR(0x4ac705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac706:{NFSU2_TR(0x4ac706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac70bull));
TAIL_STATIC(0x440e40u,440);
}
B4ac70b:L4ac70b:{c.instructions+=4;NFSU2_TR(0x4ac70b);
__builtin_memmove((R+4),gp(0x8364b8),4);
}
B4ac711:{NFSU2_TR(0x4ac711);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac712:{NFSU2_TR(0x4ac712);
s4(0x8364b4,u32(0x0ull));
}
B4ac71c:{NFSU2_TR(0x4ac71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac721ull));
TAIL_STATIC(0x440e40u,440);
}
B4ac721:L4ac721:{c.instructions+=3;NFSU2_TR(0x4ac721);
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
B4ac724:{NFSU2_TR(0x4ac724);
s4(0x8364b8,u32(0x0ull));
}
B4ac72e:{NFSU2_TR(0x4ac72e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac730:L4ac730:{c.instructions+=12;NFSU2_TR(0x4ac730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac732:{NFSU2_TR(0x4ac732);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac737:{NFSU2_TR(0x4ac737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac73d:{NFSU2_TR(0x4ac73d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac73e:{NFSU2_TR(0x4ac73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac745:{NFSU2_TR(0x4ac745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac746:{NFSU2_TR(0x4ac746);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac74a:{NFSU2_TR(0x4ac74a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac74b:{NFSU2_TR(0x4ac74b);
__builtin_memmove((R+24),(R+4),4);
}
B4ac74d:{NFSU2_TR(0x4ac74d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac74e:{NFSU2_TR(0x4ac74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac752:{NFSU2_TR(0x4ac752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac757ull));
TAIL_STATIC(0x551de0u,551);
}
B4ac757:L4ac757:{c.instructions+=9;NFSU2_TR(0x4ac757);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ac759:{NFSU2_TR(0x4ac759);
u8 U[4];
w4(U+0,u32(0x790b38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ac75f:{NFSU2_TR(0x4ac75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac762:{NFSU2_TR(0x4ac762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac765:{NFSU2_TR(0x4ac765);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ac768:{NFSU2_TR(0x4ac768);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ac76b:{NFSU2_TR(0x4ac76b);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa14),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ac771:{NFSU2_TR(0x4ac771);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac775:{NFSU2_TR(0x4ac775);
if(r1(R+518)){{goto L4ac78d;}}
}
B4ac777:L4ac777:{c.instructions+=2;NFSU2_TR(0x4ac777);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B4ac77e:{NFSU2_TR(0x4ac77e);
if(r1(R+518)){{goto L4ac78d;}}
}
B4ac780:L4ac780:{c.instructions+=2;NFSU2_TR(0x4ac780);
u8 U[4];
w4(U+0,u32(0x790b28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac785:{NFSU2_TR(0x4ac785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac78aull));
TAIL_STATIC(0x4022c0u,402);
}
B4ac78a:L4ac78a:{c.instructions+=1;NFSU2_TR(0x4ac78a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ac78d:L4ac78d:{c.instructions+=6;NFSU2_TR(0x4ac78d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac791:{NFSU2_TR(0x4ac791);
__builtin_memmove((R+0),(R+24),4);
}
B4ac793:{NFSU2_TR(0x4ac793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac794:{NFSU2_TR(0x4ac794);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac79b:{NFSU2_TR(0x4ac79b);
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
B4ac79e:{NFSU2_TR(0x4ac79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac7b0:L4ac7b0:{c.instructions+=3;NFSU2_TR(0x4ac7b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac7b1:{NFSU2_TR(0x4ac7b1);
__builtin_memmove((R+24),(R+4),4);
}
B4ac7b3:{NFSU2_TR(0x4ac7b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac7b8ull));
{goto L4ac7c0;}
}
B4ac7b8:L4ac7b8:{c.instructions+=3;NFSU2_TR(0x4ac7b8);
__builtin_memmove((R+0),(R+24),4);
}
B4ac7ba:{NFSU2_TR(0x4ac7ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac7bb:{NFSU2_TR(0x4ac7bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac7c0:L4ac7c0:{c.instructions+=2;NFSU2_TR(0x4ac7c0);
u8 U[4];
w4(U+0,u32(0x790b38ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4ac7c6:{NFSU2_TR(0x4ac7c6);
TAIL_STATIC(0x510d40u,510);
}
B4ac7d0:L4ac7d0:{c.instructions+=6;NFSU2_TR(0x4ac7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac7d4:{NFSU2_TR(0x4ac7d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac7d5:{NFSU2_TR(0x4ac7d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac7d6:{NFSU2_TR(0x4ac7d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac7d7:{NFSU2_TR(0x4ac7d7);
__builtin_memmove((R+28),(R+4),4);
}
B4ac7d9:{NFSU2_TR(0x4ac7d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac7deull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ac7de:L4ac7de:{c.instructions+=4;NFSU2_TR(0x4ac7de);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac7e2:{NFSU2_TR(0x4ac7e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac7e3:{NFSU2_TR(0x4ac7e3);
__builtin_memmove((R+24),(R+0),4);
}
B4ac7e5:{NFSU2_TR(0x4ac7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac7eaull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ac7ea:L4ac7ea:{c.instructions+=3;NFSU2_TR(0x4ac7ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ac7ed:{NFSU2_TR(0x4ac7ed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac7ef:{NFSU2_TR(0x4ac7ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac7f3;}}
}
B4ac7f1:L4ac7f1:{c.instructions+=1;NFSU2_TR(0x4ac7f1);
__builtin_memmove((R+24),(R+0),4);
}
B4ac7f3:L4ac7f3:{c.instructions+=3;NFSU2_TR(0x4ac7f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac7f7:{NFSU2_TR(0x4ac7f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac7f8:{NFSU2_TR(0x4ac7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac7fdull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ac7fd:L4ac7fd:{c.instructions+=3;NFSU2_TR(0x4ac7fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ac800:{NFSU2_TR(0x4ac800);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac802:{NFSU2_TR(0x4ac802);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac806;}}
}
B4ac804:L4ac804:{c.instructions+=1;NFSU2_TR(0x4ac804);
__builtin_memmove((R+24),(R+0),4);
}
B4ac806:L4ac806:{c.instructions+=2;NFSU2_TR(0x4ac806);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4ac809:{NFSU2_TR(0x4ac809);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4ac81e;}}
}
B4ac80b:L4ac80b:{c.instructions+=5;NFSU2_TR(0x4ac80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
w4(U+4,u32(0x790b70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac812:{NFSU2_TR(0x4ac812);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
w4(U+4,u32(0x790b64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac819:{NFSU2_TR(0x4ac819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac81a:{NFSU2_TR(0x4ac81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac81b:{NFSU2_TR(0x4ac81b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac81e:L4ac81e:{c.instructions+=2;NFSU2_TR(0x4ac81e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x23ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x23ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x23ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ac821:{NFSU2_TR(0x4ac821);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4ac836;}}
}
B4ac823:L4ac823:{c.instructions+=5;NFSU2_TR(0x4ac823);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
w4(U+4,u32(0x790b60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac82a:{NFSU2_TR(0x4ac82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
w4(U+4,u32(0x790b58ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac831:{NFSU2_TR(0x4ac831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac832:{NFSU2_TR(0x4ac832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac833:{NFSU2_TR(0x4ac833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac836:L4ac836:{c.instructions+=5;NFSU2_TR(0x4ac836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
w4(U+4,u32(0x790b50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac83d:{NFSU2_TR(0x4ac83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
w4(U+4,u32(0x790b48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ac844:{NFSU2_TR(0x4ac844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac845:{NFSU2_TR(0x4ac845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac846:{NFSU2_TR(0x4ac846);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac850:L4ac850:{c.instructions+=12;NFSU2_TR(0x4ac850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac851:{NFSU2_TR(0x4ac851);
__builtin_memmove((R+24),(R+4),4);
}
B4ac853:{NFSU2_TR(0x4ac853);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ac857:{NFSU2_TR(0x4ac857);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4ac85c:{NFSU2_TR(0x4ac85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac85f:{NFSU2_TR(0x4ac85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac862:{NFSU2_TR(0x4ac862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac865:{NFSU2_TR(0x4ac865);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac867:{NFSU2_TR(0x4ac867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac868:{NFSU2_TR(0x4ac868);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac86d:{NFSU2_TR(0x4ac86d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac86e:{NFSU2_TR(0x4ac86e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac873ull));
TAIL_STATIC(0x537c00u,537);
}
B4ac873:L4ac873:{c.instructions+=4;NFSU2_TR(0x4ac873);
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
B4ac876:{NFSU2_TR(0x4ac876);
__builtin_memmove(gp(0x8364e0),(R+24),4);
}
B4ac87c:{NFSU2_TR(0x4ac87c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac87d:{NFSU2_TR(0x4ac87d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac880:L4ac880:{c.instructions+=12;NFSU2_TR(0x4ac880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac881:{NFSU2_TR(0x4ac881);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ac885:{NFSU2_TR(0x4ac885);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac886:{NFSU2_TR(0x4ac886);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ac88a:{NFSU2_TR(0x4ac88a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac88b:{NFSU2_TR(0x4ac88b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac88c:{NFSU2_TR(0x4ac88c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ac890:{NFSU2_TR(0x4ac890);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac891:{NFSU2_TR(0x4ac891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac892:{NFSU2_TR(0x4ac892);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac893:{NFSU2_TR(0x4ac893);
__builtin_memmove((R+24),(R+4),4);
}
B4ac895:{NFSU2_TR(0x4ac895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac89aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac7d0u);}goto L4ac7d0;}
}
B4ac89a:L4ac89a:{c.instructions+=5;NFSU2_TR(0x4ac89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac89d:{NFSU2_TR(0x4ac89d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac89e:{NFSU2_TR(0x4ac89e);
u8 U[4];
w4(U+0,u32(0xf5387816ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8a3:{NFSU2_TR(0x4ac8a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8a4:{NFSU2_TR(0x4ac8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac8a9ull));
TAIL_STATIC(0x537b80u,537);
}
B4ac8a9:L4ac8a9:{c.instructions+=5;NFSU2_TR(0x4ac8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac8ac:{NFSU2_TR(0x4ac8ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8ad:{NFSU2_TR(0x4ac8ad);
u8 U[4];
w4(U+0,u32(0x11db9e17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8b2:{NFSU2_TR(0x4ac8b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8b3:{NFSU2_TR(0x4ac8b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac8b8ull));
TAIL_STATIC(0x537b80u,537);
}
B4ac8b8:L4ac8b8:{c.instructions+=5;NFSU2_TR(0x4ac8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac8bb:{NFSU2_TR(0x4ac8bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8bc:{NFSU2_TR(0x4ac8bc);
u8 U[4];
w4(U+0,u32(0x48097852ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8c1:{NFSU2_TR(0x4ac8c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8c2:{NFSU2_TR(0x4ac8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac8c7ull));
TAIL_STATIC(0x537b80u,537);
}
B4ac8c7:L4ac8c7:{c.instructions+=4;NFSU2_TR(0x4ac8c7);
__builtin_memmove((R+0),gp(0x8364dc),4);
}
B4ac8cc:{NFSU2_TR(0x4ac8cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4ac8cf:{NFSU2_TR(0x4ac8cf);
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
B4ac8d1:{NFSU2_TR(0x4ac8d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ac8e2;}}
}
B4ac8d3:L4ac8d3:{c.instructions+=7;NFSU2_TR(0x4ac8d3);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4ac8d8:{NFSU2_TR(0x4ac8d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac8d9:{NFSU2_TR(0x4ac8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac8dc:{NFSU2_TR(0x4ac8dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac8dd:{NFSU2_TR(0x4ac8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ac8de:{NFSU2_TR(0x4ac8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ac8df:{NFSU2_TR(0x4ac8df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac8e2:L4ac8e2:{c.instructions+=10;NFSU2_TR(0x4ac8e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ac8e6:{NFSU2_TR(0x4ac8e6);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4ac8ec:{NFSU2_TR(0x4ac8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac8ef:{NFSU2_TR(0x4ac8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac8f2:{NFSU2_TR(0x4ac8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac8f5:{NFSU2_TR(0x4ac8f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8f7:{NFSU2_TR(0x4ac8f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8f8:{NFSU2_TR(0x4ac8f8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8fd:{NFSU2_TR(0x4ac8fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac8fe:{NFSU2_TR(0x4ac8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac903ull));
TAIL_STATIC(0x537c00u,537);
}
B4ac903:L4ac903:{c.instructions+=7;NFSU2_TR(0x4ac903);
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
B4ac906:{NFSU2_TR(0x4ac906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ac907:{NFSU2_TR(0x4ac907);
__builtin_memmove(gp(0x8364e0),(R+24),4);
}
B4ac90d:{NFSU2_TR(0x4ac90d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac90e:{NFSU2_TR(0x4ac90e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ac90f:{NFSU2_TR(0x4ac90f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ac910:{NFSU2_TR(0x4ac910);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac920:L4ac920:{c.instructions+=3;NFSU2_TR(0x4ac920);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac922:{NFSU2_TR(0x4ac922);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac924:{NFSU2_TR(0x4ac924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac929ull));
TAIL_STATIC(0x440820u,440);
}
B4ac929:L4ac929:{c.instructions+=3;NFSU2_TR(0x4ac929);
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
B4ac92c:{NFSU2_TR(0x4ac92c);
__builtin_memmove(gp(0x8364d8),(R+0),4);
}
B4ac931:{NFSU2_TR(0x4ac931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac940:L4ac940:{c.instructions+=3;NFSU2_TR(0x4ac940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac944:{NFSU2_TR(0x4ac944);
__builtin_memmove(gp(0x8364dc),(R+0),4);
}
B4ac949:{NFSU2_TR(0x4ac949);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac950:L4ac950:{c.instructions+=4;NFSU2_TR(0x4ac950);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac957:{NFSU2_TR(0x4ac957);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac958:{NFSU2_TR(0x4ac958);
w4(R+24,u32(0x790014ull));
}
B4ac95d:{NFSU2_TR(0x4ac95d);
if(r1(R+518)){{goto L4ac964;}}
}
B4ac95f:L4ac95f:{c.instructions+=1;NFSU2_TR(0x4ac95f);
w4(R+24,u32(0x790b28ull));
}
B4ac964:L4ac964:{c.instructions+=2;NFSU2_TR(0x4ac964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac965:{NFSU2_TR(0x4ac965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac96aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ac96a:L4ac96a:{c.instructions+=3;NFSU2_TR(0x4ac96a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ac96d:{NFSU2_TR(0x4ac96d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ac96f:{NFSU2_TR(0x4ac96f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ac982;}}
}
B4ac971:L4ac971:{c.instructions+=6;NFSU2_TR(0x4ac971);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac973:{NFSU2_TR(0x4ac973);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac975:{NFSU2_TR(0x4ac975);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac977:{NFSU2_TR(0x4ac977);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac978:{NFSU2_TR(0x4ac978);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac97a:{NFSU2_TR(0x4ac97a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac97full));
TAIL_STATIC(0x555f50u,555);
}
B4ac97f:L4ac97f:{c.instructions+=1;NFSU2_TR(0x4ac97f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ac982:L4ac982:{c.instructions+=2;NFSU2_TR(0x4ac982);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac983:{NFSU2_TR(0x4ac983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac988ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4ac988:L4ac988:{c.instructions+=4;NFSU2_TR(0x4ac988);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ac98b:{NFSU2_TR(0x4ac98b);
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
B4ac98d:{NFSU2_TR(0x4ac98d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ac98e:{NFSU2_TR(0x4ac98e);
if(r1(R+518)){{goto L4ac9a6;}}
}
B4ac990:L4ac990:{c.instructions+=8;NFSU2_TR(0x4ac990);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac994:{NFSU2_TR(0x4ac994);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ac998:{NFSU2_TR(0x4ac998);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac999:{NFSU2_TR(0x4ac999);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ac99d:{NFSU2_TR(0x4ac99d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac99e:{NFSU2_TR(0x4ac99e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac99f:{NFSU2_TR(0x4ac99f);
__builtin_memmove((R+4),(R+0),4);
}
B4ac9a1:{NFSU2_TR(0x4ac9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac9a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac880u);}goto L4ac880;}
}
B4ac9a6:L4ac9a6:{c.instructions+=1;NFSU2_TR(0x4ac9a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac9b0:L4ac9b0:{c.instructions+=3;NFSU2_TR(0x4ac9b0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ac9b7:{NFSU2_TR(0x4ac9b7);
w4(R+0,u32(0x790014ull));
}
B4ac9bc:{NFSU2_TR(0x4ac9bc);
if(r1(R+518)){{goto L4ac9c3;}}
}
B4ac9be:L4ac9be:{c.instructions+=1;NFSU2_TR(0x4ac9be);
w4(R+0,u32(0x790b28ull));
}
B4ac9c3:L4ac9c3:{c.instructions+=2;NFSU2_TR(0x4ac9c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ac9c4:{NFSU2_TR(0x4ac9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ac9c9ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4ac9c9:L4ac9c9:{c.instructions+=4;NFSU2_TR(0x4ac9c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ac9cb:{NFSU2_TR(0x4ac9cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ac9ce:{NFSU2_TR(0x4ac9ce);
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
B4ac9d0:{NFSU2_TR(0x4ac9d0);
if(r1(R+518)){{goto L4ac9ea;}}
}
B4ac9d2:L4ac9d2:{c.instructions+=6;NFSU2_TR(0x4ac9d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ac9d5:{NFSU2_TR(0x4ac9d5);
__builtin_memmove(gp(0x8364e0),(R+4),4);
}
B4ac9db:{NFSU2_TR(0x4ac9db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ac9de:{NFSU2_TR(0x4ac9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ac9e1:{NFSU2_TR(0x4ac9e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ac9e5:{NFSU2_TR(0x4ac9e5);
TAIL_STATIC(0x5379a0u,537);
}
B4ac9ea:L4ac9ea:{c.instructions+=1;NFSU2_TR(0x4ac9ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ac9f0:L4ac9f0:{c.instructions+=4;NFSU2_TR(0x4ac9f0);
__builtin_memmove((R+0),gp(0x7f68b4),4);
}
B4ac9f5:{NFSU2_TR(0x4ac9f5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ac9f7:{NFSU2_TR(0x4ac9f7);
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
B4ac9f9:{NFSU2_TR(0x4ac9f9);
if(r1(R+518)){{goto L4aca33;}}
}
B4ac9fb:L4ac9fb:{c.instructions+=3;NFSU2_TR(0x4ac9fb);
__builtin_memmove((R+0),gp(0x8364e0),4);
}
B4aca00:{NFSU2_TR(0x4aca00);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aca02:{NFSU2_TR(0x4aca02);
if(r1(R+518)){{goto L4aca1c;}}
}
B4aca04:L4aca04:{c.instructions+=6;NFSU2_TR(0x4aca04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aca07:{NFSU2_TR(0x4aca07);
__builtin_memmove(gp(0x8364e0),(R+4),4);
}
B4aca0d:{NFSU2_TR(0x4aca0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aca10:{NFSU2_TR(0x4aca10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aca13:{NFSU2_TR(0x4aca13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca14:{NFSU2_TR(0x4aca14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aca19ull));
TAIL_STATIC(0x5379a0u,537);
}
B4aca19:L4aca19:{c.instructions+=1;NFSU2_TR(0x4aca19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aca1c:L4aca1c:{c.instructions+=8;NFSU2_TR(0x4aca1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aca20:{NFSU2_TR(0x4aca20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aca23:{NFSU2_TR(0x4aca23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aca26:{NFSU2_TR(0x4aca26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aca28:{NFSU2_TR(0x4aca28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca29:{NFSU2_TR(0x4aca29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca2a:{NFSU2_TR(0x4aca2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca2b:{NFSU2_TR(0x4aca2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aca30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac950u);}goto L4ac950;}
}
B4aca30:L4aca30:{c.instructions+=1;NFSU2_TR(0x4aca30);
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
B4aca33:L4aca33:{c.instructions+=1;NFSU2_TR(0x4aca33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aca40:L4aca40:{c.instructions+=4;NFSU2_TR(0x4aca40);
__builtin_memmove((R+0),gp(0x7f68b4),4);
}
B4aca45:{NFSU2_TR(0x4aca45);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4aca47:{NFSU2_TR(0x4aca47);
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
B4aca49:{NFSU2_TR(0x4aca49);
if(r1(R+518)){{goto L4aca83;}}
}
B4aca4b:L4aca4b:{c.instructions+=3;NFSU2_TR(0x4aca4b);
__builtin_memmove((R+0),gp(0x8364e0),4);
}
B4aca50:{NFSU2_TR(0x4aca50);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aca52:{NFSU2_TR(0x4aca52);
if(r1(R+518)){{goto L4aca6c;}}
}
B4aca54:L4aca54:{c.instructions+=6;NFSU2_TR(0x4aca54);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aca57:{NFSU2_TR(0x4aca57);
__builtin_memmove(gp(0x8364e0),(R+4),4);
}
B4aca5d:{NFSU2_TR(0x4aca5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aca60:{NFSU2_TR(0x4aca60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aca63:{NFSU2_TR(0x4aca63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca64:{NFSU2_TR(0x4aca64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aca69ull));
TAIL_STATIC(0x5379a0u,537);
}
B4aca69:L4aca69:{c.instructions+=1;NFSU2_TR(0x4aca69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aca6c:L4aca6c:{c.instructions+=4;NFSU2_TR(0x4aca6c);
u8 U[4];
w4(U+0,u32(0x790b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca71:{NFSU2_TR(0x4aca71);
u8 U[4];
w4(U+0,u32(0x790b80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca76:{NFSU2_TR(0x4aca76);
u8 U[4];
w4(U+0,u32(0x790b78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aca7b:{NFSU2_TR(0x4aca7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aca80ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ac950u);}goto L4ac950;}
}
B4aca80:L4aca80:{c.instructions+=1;NFSU2_TR(0x4aca80);
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
B4aca83:L4aca83:{c.instructions+=1;NFSU2_TR(0x4aca83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aca90:L4aca90:{c.instructions+=1;NFSU2_TR(0x4aca90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aca95ull));
TAIL_STATIC(0x5b8720u,5b8);
}
B4aca95:L4aca95:{c.instructions+=5;NFSU2_TR(0x4aca95);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4aca96:{NFSU2_TR(0x4aca96);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4aca98:{NFSU2_TR(0x4aca98);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4aca9a:{NFSU2_TR(0x4aca9a);
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
B4aca9b:{NFSU2_TR(0x4aca9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acaa0:L4acaa0:{c.instructions+=5;NFSU2_TR(0x4acaa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acaa1:{NFSU2_TR(0x4acaa1);
__builtin_memmove((R+24),(R+4),4);
}
B4acaa3:{NFSU2_TR(0x4acaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acaa9:{NFSU2_TR(0x4acaa9);
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
B4acaab:{NFSU2_TR(0x4acaab);
if(r1(R+518)){{goto L4acbea;}}
}
B4acab1:L4acab1:{c.instructions+=7;NFSU2_TR(0x4acab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acab5:{NFSU2_TR(0x4acab5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4acabb:{NFSU2_TR(0x4acabb);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4acac0:{NFSU2_TR(0x4acac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acac1:{NFSU2_TR(0x4acac1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acac2:{NFSU2_TR(0x4acac2);
__builtin_memmove((R+28),(R+0),4);
}
B4acac4:{NFSU2_TR(0x4acac4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acb3c;}}
}
B4acac6:L4acac6:{c.instructions+=2;NFSU2_TR(0x4acac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4acac8:{NFSU2_TR(0x4acac8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acacc;}}
}
B4acaca:L4acaca:{c.instructions+=1;NFSU2_TR(0x4acaca);
__builtin_memmove((R+0),(R+4),4);
}
B4acacc:L4acacc:{c.instructions+=9;NFSU2_TR(0x4acacc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4acacd:{NFSU2_TR(0x4acacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4acad0:{NFSU2_TR(0x4acad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4acad7:{NFSU2_TR(0x4acad7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4acadd:{NFSU2_TR(0x4acadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x874e70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4acae3:{NFSU2_TR(0x4acae3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B4acae6:{NFSU2_TR(0x4acae6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4acae8:{NFSU2_TR(0x4acae8);
__builtin_memmove(gp(0x8364ec),(R+0),4);
}
B4acaed:{NFSU2_TR(0x4acaed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acb18;}}
}
B4acaef:L4acaef:{c.instructions+=1;NFSU2_TR(0x4acaef);
}
B4acaf0:L4acaf0:{c.instructions+=2;NFSU2_TR(0x4acaf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4acaf2:{NFSU2_TR(0x4acaf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acafa;}}
}
B4acaf4:L4acaf4:{c.instructions+=1;NFSU2_TR(0x4acaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acafa:L4acafa:{c.instructions+=7;NFSU2_TR(0x4acafa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4acafb:{NFSU2_TR(0x4acafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4acafe:{NFSU2_TR(0x4acafe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4acb05:{NFSU2_TR(0x4acb05);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4acb0b:{NFSU2_TR(0x4acb0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x874e70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4acb11:{NFSU2_TR(0x4acb11);
__builtin_memmove(gp(0x8364ec),(R+0),4);
}
B4acb16:{NFSU2_TR(0x4acb16);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4acaf0u);}goto L4acaf0;}}
}
B4acb18:L4acb18:{c.instructions+=2;NFSU2_TR(0x4acb18);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4acb1f:{NFSU2_TR(0x4acb1f);
if(r1(R+518)){{goto L4acbd3;}}
}
B4acb25:L4acb25:{c.instructions+=3;NFSU2_TR(0x4acb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acb2b:{NFSU2_TR(0x4acb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acb2c:{NFSU2_TR(0x4acb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acb31ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4acb31:L4acb31:{c.instructions+=2;NFSU2_TR(0x4acb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acb37:{NFSU2_TR(0x4acb37);
{goto L4acbbe;}
}
B4acb3c:L4acb3c:{c.instructions+=2;NFSU2_TR(0x4acb3c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4acb42:{NFSU2_TR(0x4acb42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acbd3;}}
}
B4acb48:L4acb48:{c.instructions+=12;NFSU2_TR(0x4acb48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4acb49:{NFSU2_TR(0x4acb49);
__builtin_memmove(gp(0x8364ec),(R+0),4);
}
B4acb4e:{NFSU2_TR(0x4acb4e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4acb4f:{NFSU2_TR(0x4acb4f);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4acb4f);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4acb4f);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B4acb55:{NFSU2_TR(0x4acb55);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B4acb58:{NFSU2_TR(0x4acb58);
__builtin_memmove((R+0),(R+8),4);
}
B4acb5a:{NFSU2_TR(0x4acb5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4acb5d:{NFSU2_TR(0x4acb5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4acb64:{NFSU2_TR(0x4acb64);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4acb6a:{NFSU2_TR(0x4acb6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x874e70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4acb70:{NFSU2_TR(0x4acb70);
__builtin_memmove(gp(0x8364ec),(R+0),4);
}
B4acb75:{NFSU2_TR(0x4acb75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acba3;}}
}
B4acb77:L4acb77:{c.instructions+=11;NFSU2_TR(0x4acb77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4acb78:{NFSU2_TR(0x4acb78);
__builtin_memmove(gp(0x8364ec),(R+0),4);
}
B4acb7d:{NFSU2_TR(0x4acb7d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4acb7e:{NFSU2_TR(0x4acb7e);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4acb7e);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4acb7e);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B4acb84:{NFSU2_TR(0x4acb84);
__builtin_memmove((R+0),(R+8),4);
}
B4acb86:{NFSU2_TR(0x4acb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4acb89:{NFSU2_TR(0x4acb89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4acb90:{NFSU2_TR(0x4acb90);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4acb96:{NFSU2_TR(0x4acb96);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x874e70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4acb9c:{NFSU2_TR(0x4acb9c);
__builtin_memmove(gp(0x8364ec),(R+0),4);
}
B4acba1:{NFSU2_TR(0x4acba1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4acb77u);}goto L4acb77;}}
}
B4acba3:L4acba3:{c.instructions+=2;NFSU2_TR(0x4acba3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4acbaa:{NFSU2_TR(0x4acbaa);
if(r1(R+518)){{goto L4acbd3;}}
}
B4acbac:L4acbac:{c.instructions+=3;NFSU2_TR(0x4acbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acbb2:{NFSU2_TR(0x4acbb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbb3:{NFSU2_TR(0x4acbb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acbb8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4acbb8:L4acbb8:{c.instructions+=1;NFSU2_TR(0x4acbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acbbe:L4acbbe:{c.instructions+=4;NFSU2_TR(0x4acbbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbc0:{NFSU2_TR(0x4acbc0);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbc5:{NFSU2_TR(0x4acbc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbc6:{NFSU2_TR(0x4acbc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acbcbull));
TAIL_STATIC(0x51cf70u,51c);
}
B4acbcb:L4acbcb:{c.instructions+=2;NFSU2_TR(0x4acbcb);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4acbd0:{NFSU2_TR(0x4acbd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4acbd3:L4acbd3:{c.instructions+=4;NFSU2_TR(0x4acbd3);
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
B4acbd5:{NFSU2_TR(0x4acbd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acbd6:{NFSU2_TR(0x4acbd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4acbd7:{NFSU2_TR(0x4acbd7);
if(r1(R+518)){{goto L4acbea;}}
}
B4acbd9:L4acbd9:{c.instructions+=4;NFSU2_TR(0x4acbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acbdc:{NFSU2_TR(0x4acbdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbdd:{NFSU2_TR(0x4acbdd);
u8 U[4];
w4(U+0,u32(0xaf0bbd92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbe2:{NFSU2_TR(0x4acbe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acbe7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4acbe7:L4acbe7:{c.instructions+=1;NFSU2_TR(0x4acbe7);
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
B4acbea:L4acbea:{c.instructions+=2;NFSU2_TR(0x4acbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acbeb:{NFSU2_TR(0x4acbeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acbf0:L4acbf0:{c.instructions+=6;NFSU2_TR(0x4acbf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbf1:{NFSU2_TR(0x4acbf1);
__builtin_memmove((R+24),(R+4),4);
}
B4acbf3:{NFSU2_TR(0x4acbf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acbf4:{NFSU2_TR(0x4acbf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acbfa:{NFSU2_TR(0x4acbfa);
__builtin_memmove((R+4),(R+28),4);
}
B4acbfc:{NFSU2_TR(0x4acbfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc01ull));
TAIL_STATIC(0x538130u,538);
}
B4acc01:L4acc01:{c.instructions+=3;NFSU2_TR(0x4acc01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acc07:{NFSU2_TR(0x4acc07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4acc0a:{NFSU2_TR(0x4acc0a);
if(r1(R+518)){{goto L4acc51;}}
}
B4acc0c:L4acc0c:{c.instructions+=2;NFSU2_TR(0x4acc0c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4acc0f:{NFSU2_TR(0x4acc0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acc8e;}}
}
B4acc11:L4acc11:{c.instructions+=4;NFSU2_TR(0x4acc11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acc14:{NFSU2_TR(0x4acc14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc15:{NFSU2_TR(0x4acc15);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc1a:{NFSU2_TR(0x4acc1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc1full));
TAIL_STATIC(0x55dda0u,55d);
}
B4acc1f:L4acc1f:{c.instructions+=4;NFSU2_TR(0x4acc1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acc22:{NFSU2_TR(0x4acc22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4acc25:{NFSU2_TR(0x4acc25);
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
B4acc27:{NFSU2_TR(0x4acc27);
if(r1(R+518)){{goto L4acc8e;}}
}
B4acc29:L4acc29:{c.instructions+=3;NFSU2_TR(0x4acc29);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc2e:{NFSU2_TR(0x4acc2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc2f:{NFSU2_TR(0x4acc2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc34ull));
TAIL_STATIC(0x51d040u,51d);
}
B4acc34:L4acc34:{c.instructions+=3;NFSU2_TR(0x4acc34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4acc37:{NFSU2_TR(0x4acc37);
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
B4acc39:{NFSU2_TR(0x4acc39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acc8e;}}
}
B4acc3b:L4acc3b:{c.instructions+=5;NFSU2_TR(0x4acc3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acc3e:{NFSU2_TR(0x4acc3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc40:{NFSU2_TR(0x4acc40);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc45:{NFSU2_TR(0x4acc45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc46:{NFSU2_TR(0x4acc46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc4bull));
TAIL_STATIC(0x51cf70u,51c);
}
B4acc4b:L4acc4b:{c.instructions+=4;NFSU2_TR(0x4acc4b);
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
B4acc4e:{NFSU2_TR(0x4acc4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acc4f:{NFSU2_TR(0x4acc4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acc50:{NFSU2_TR(0x4acc50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acc51:L4acc51:{c.instructions+=4;NFSU2_TR(0x4acc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acc54:{NFSU2_TR(0x4acc54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc55:{NFSU2_TR(0x4acc55);
u8 U[4];
w4(U+0,u32(0x72619778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc5a:{NFSU2_TR(0x4acc5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc5full));
TAIL_STATIC(0x55dda0u,55d);
}
B4acc5f:L4acc5f:{c.instructions+=4;NFSU2_TR(0x4acc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acc62:{NFSU2_TR(0x4acc62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4acc65:{NFSU2_TR(0x4acc65);
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
B4acc67:{NFSU2_TR(0x4acc67);
if(r1(R+518)){{goto L4acc8e;}}
}
B4acc69:L4acc69:{c.instructions+=3;NFSU2_TR(0x4acc69);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc6e:{NFSU2_TR(0x4acc6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc6f:{NFSU2_TR(0x4acc6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc74ull));
TAIL_STATIC(0x51d040u,51d);
}
B4acc74:L4acc74:{c.instructions+=3;NFSU2_TR(0x4acc74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4acc77:{NFSU2_TR(0x4acc77);
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
B4acc79:{NFSU2_TR(0x4acc79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acc8e;}}
}
B4acc7b:L4acc7b:{c.instructions+=5;NFSU2_TR(0x4acc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acc7e:{NFSU2_TR(0x4acc7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc80:{NFSU2_TR(0x4acc80);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc85:{NFSU2_TR(0x4acc85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acc86:{NFSU2_TR(0x4acc86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acc8bull));
TAIL_STATIC(0x51cf70u,51c);
}
B4acc8b:L4acc8b:{c.instructions+=1;NFSU2_TR(0x4acc8b);
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
B4acc8e:L4acc8e:{c.instructions+=3;NFSU2_TR(0x4acc8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acc8f:{NFSU2_TR(0x4acc8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acc90:{NFSU2_TR(0x4acc90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acca0:L4acca0:{c.instructions+=9;NFSU2_TR(0x4acca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acca4:{NFSU2_TR(0x4acca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4acca7:{NFSU2_TR(0x4acca7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acca8:{NFSU2_TR(0x4acca8);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accad:{NFSU2_TR(0x4accad);
__builtin_memmove((R+24),(R+4),4);
}
B4accaf:{NFSU2_TR(0x4accaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accb0:{NFSU2_TR(0x4accb0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4accb4:{NFSU2_TR(0x4accb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accb5:{NFSU2_TR(0x4accb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4accbaull));
TAIL_STATIC(0x43dda0u,43d);
}
B4accba:L4accba:{c.instructions+=8;NFSU2_TR(0x4accba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4accc0:{NFSU2_TR(0x4accc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accc1:{NFSU2_TR(0x4accc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4accc5:{NFSU2_TR(0x4accc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accc6:{NFSU2_TR(0x4accc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4accca:{NFSU2_TR(0x4accca);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acccc:{NFSU2_TR(0x4acccc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acccd:{NFSU2_TR(0x4acccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4accd2ull));
TAIL_STATIC(0x50c960u,50c);
}
B4accd2:L4accd2:{c.instructions+=4;NFSU2_TR(0x4accd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4accd5:{NFSU2_TR(0x4accd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4accd9:{NFSU2_TR(0x4accd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accda:{NFSU2_TR(0x4accda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4accdfull));
TAIL_STATIC(0x505450u,505);
}
B4accdf:L4accdf:{c.instructions+=3;NFSU2_TR(0x4accdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acce0:{NFSU2_TR(0x4acce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acce1:{NFSU2_TR(0x4acce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acce6ull));
TAIL_STATIC(0x537a10u,537);
}
B4acce6:L4acce6:{c.instructions+=4;NFSU2_TR(0x4acce6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4acce9:{NFSU2_TR(0x4acce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4accea:{NFSU2_TR(0x4accea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4acced:{NFSU2_TR(0x4acced);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4accf0:L4accf0:{c.instructions+=11;NFSU2_TR(0x4accf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accf1:{NFSU2_TR(0x4accf1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accf2:{NFSU2_TR(0x4accf2);
__builtin_memmove((R+24),(R+4),4);
}
B4accf4:{NFSU2_TR(0x4accf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4accf7:{NFSU2_TR(0x4accf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accf8:{NFSU2_TR(0x4accf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4accfe:{NFSU2_TR(0x4accfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4accff:{NFSU2_TR(0x4accff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acd05:{NFSU2_TR(0x4acd05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd06:{NFSU2_TR(0x4acd06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd07:{NFSU2_TR(0x4acd07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acd0cull));
TAIL_STATIC(0x51d070u,51d);
}
B4acd0c:L4acd0c:{c.instructions+=11;NFSU2_TR(0x4acd0c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4acd0f:{NFSU2_TR(0x4acd0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4acd11:{NFSU2_TR(0x4acd11);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4acd17:{NFSU2_TR(0x4acd17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4acd1d:{NFSU2_TR(0x4acd1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd1e:{NFSU2_TR(0x4acd1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4acd24:{NFSU2_TR(0x4acd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4acd2a:{NFSU2_TR(0x4acd2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acd2d:{NFSU2_TR(0x4acd2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd2e:{NFSU2_TR(0x4acd2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd2f:{NFSU2_TR(0x4acd2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acd34ull));
TAIL_STATIC(0x51d070u,51d);
}
B4acd34:L4acd34:{c.instructions+=7;NFSU2_TR(0x4acd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acd37:{NFSU2_TR(0x4acd37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4acd3d:{NFSU2_TR(0x4acd3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd3e:{NFSU2_TR(0x4acd3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4acd44:{NFSU2_TR(0x4acd44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd45:{NFSU2_TR(0x4acd45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd46:{NFSU2_TR(0x4acd46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acd4bull));
TAIL_STATIC(0x51d070u,51d);
}
B4acd4b:L4acd4b:{c.instructions+=7;NFSU2_TR(0x4acd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acd4e:{NFSU2_TR(0x4acd4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acd54:{NFSU2_TR(0x4acd54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd55:{NFSU2_TR(0x4acd55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4acd5b:{NFSU2_TR(0x4acd5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd5c:{NFSU2_TR(0x4acd5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd5d:{NFSU2_TR(0x4acd5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acd62ull));
TAIL_STATIC(0x51d730u,51d);
}
B4acd62:L4acd62:{c.instructions+=7;NFSU2_TR(0x4acd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acd65:{NFSU2_TR(0x4acd65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4acd6b:{NFSU2_TR(0x4acd6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd6c:{NFSU2_TR(0x4acd6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4acd72:{NFSU2_TR(0x4acd72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd73:{NFSU2_TR(0x4acd73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd74:{NFSU2_TR(0x4acd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acd79ull));
TAIL_STATIC(0x51d730u,51d);
}
B4acd79:L4acd79:{c.instructions+=9;NFSU2_TR(0x4acd79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4acd7b:{NFSU2_TR(0x4acd7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4acd7d:{NFSU2_TR(0x4acd7d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4acd80:{NFSU2_TR(0x4acd80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acd81:{NFSU2_TR(0x4acd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4acd87:{NFSU2_TR(0x4acd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4acd8d:{NFSU2_TR(0x4acd8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acd8e:{NFSU2_TR(0x4acd8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4acd8f:{NFSU2_TR(0x4acd8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acd90:L4acd90:{c.instructions+=4;NFSU2_TR(0x4acd90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd91:{NFSU2_TR(0x4acd91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acd92:{NFSU2_TR(0x4acd92);
__builtin_memmove((R+28),(R+4),4);
}
B4acd94:{NFSU2_TR(0x4acd94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acd99ull));
TAIL_STATIC(0x5b8760u,5b8);
}
B4acd99:L4acd99:{c.instructions+=7;NFSU2_TR(0x4acd99);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4acd9e:{NFSU2_TR(0x4acd9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4acda1:{NFSU2_TR(0x4acda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4acda8:{NFSU2_TR(0x4acda8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B4acdae:{NFSU2_TR(0x4acdae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x874c40ull))));
}
B4acdb4:{NFSU2_TR(0x4acdb4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4acdbb:{NFSU2_TR(0x4acdbb);
if(r1(R+518)){{goto L4acdfa;}}
}
B4acdbd:L4acdbd:{c.instructions+=2;NFSU2_TR(0x4acdbd);
__builtin_memmove((R+4),(R+24),4);
}
B4acdbf:{NFSU2_TR(0x4acdbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acdc4ull));
TAIL_STATIC(0x5b8720u,5b8);
}
B4acdc4:L4acdc4:{c.instructions+=3;NFSU2_TR(0x4acdc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4acdc7:{NFSU2_TR(0x4acdc7);
__builtin_memmove((R+4),(R+24),4);
}
B4acdc9:{NFSU2_TR(0x4acdc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acde4;}}
}
B4acdcb:L4acdcb:{c.instructions+=1;NFSU2_TR(0x4acdcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acdd0ull));
TAIL_STATIC(0x5cfff0u,5cf);
}
B4acdd0:L4acdd0:{c.instructions+=4;NFSU2_TR(0x4acdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acdd3:{NFSU2_TR(0x4acdd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acdd4:{NFSU2_TR(0x4acdd4);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acdd9:{NFSU2_TR(0x4acdd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acddeull));
TAIL_STATIC(0x55dda0u,55d);
}
B4acdde:L4acdde:{c.instructions+=4;NFSU2_TR(0x4acdde);
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
B4acde1:{NFSU2_TR(0x4acde1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acde2:{NFSU2_TR(0x4acde2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acde3:{NFSU2_TR(0x4acde3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acde4:L4acde4:{c.instructions+=1;NFSU2_TR(0x4acde4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acde9ull));
TAIL_STATIC(0x5c11a0u,5c1);
}
B4acde9:L4acde9:{c.instructions+=4;NFSU2_TR(0x4acde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acdec:{NFSU2_TR(0x4acdec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acded:{NFSU2_TR(0x4acded);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acdf2:{NFSU2_TR(0x4acdf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acdf7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4acdf7:L4acdf7:{c.instructions+=1;NFSU2_TR(0x4acdf7);
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
B4acdfa:L4acdfa:{c.instructions+=3;NFSU2_TR(0x4acdfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acdfb:{NFSU2_TR(0x4acdfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acdfc:{NFSU2_TR(0x4acdfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ace00:L4ace00:{c.instructions+=11;NFSU2_TR(0x4ace00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace01:{NFSU2_TR(0x4ace01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace02:{NFSU2_TR(0x4ace02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace03:{NFSU2_TR(0x4ace03);
__builtin_memmove((R+24),(R+4),4);
}
B4ace05:{NFSU2_TR(0x4ace05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ace0b:{NFSU2_TR(0x4ace0b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ace0d:{NFSU2_TR(0x4ace0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ace0f:{NFSU2_TR(0x4ace0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace10:{NFSU2_TR(0x4ace10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ace16:{NFSU2_TR(0x4ace16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ace1c:{NFSU2_TR(0x4ace1c);
if(r1(R+518)){{goto L4ace69;}}
}
B4ace1e:L4ace1e:{c.instructions+=10;NFSU2_TR(0x4ace1e);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4ace23:{NFSU2_TR(0x4ace23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4ace26:{NFSU2_TR(0x4ace26);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4ace2d:{NFSU2_TR(0x4ace2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ace33:{NFSU2_TR(0x4ace33);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B4ace39:{NFSU2_TR(0x4ace39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x874f7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ace3f:{NFSU2_TR(0x4ace3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ace42:{NFSU2_TR(0x4ace42);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace47:{NFSU2_TR(0x4ace47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace48:{NFSU2_TR(0x4ace48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ace4dull));
TAIL_STATIC(0x537950u,537);
}
B4ace4d:L4ace4d:{c.instructions+=3;NFSU2_TR(0x4ace4d);
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
B4ace50:{NFSU2_TR(0x4ace50);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace55:{NFSU2_TR(0x4ace55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ace5aull));
TAIL_STATIC(0x50cea0u,50c);
}
B4ace5a:L4ace5a:{c.instructions+=2;NFSU2_TR(0x4ace5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ace5b:{NFSU2_TR(0x4ace5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ace60ull));
TAIL_STATIC(0x537950u,537);
}
B4ace60:L4ace60:{c.instructions+=2;NFSU2_TR(0x4ace60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ace63:{NFSU2_TR(0x4ace63);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ace69:L4ace69:{c.instructions+=2;NFSU2_TR(0x4ace69);
w4(R+20,u32(0x835930ull));
}
B4ace6e:{NFSU2_TR(0x4ace6e);
w4(R+28,u32(0x874c40ull));
}
B4ace73:L4ace73:{c.instructions+=2;NFSU2_TR(0x4ace73);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ace7a:{NFSU2_TR(0x4ace7a);
if(r1(R+518)){{goto L4acebe;}}
}
B4ace7c:L4ace7c:{c.instructions+=2;NFSU2_TR(0x4ace7c);
__builtin_memmove((R+4),(R+28),4);
}
B4ace7e:{NFSU2_TR(0x4ace7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ace83ull));
TAIL_STATIC(0x5b8720u,5b8);
}
B4ace83:L4ace83:{c.instructions+=3;NFSU2_TR(0x4ace83);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ace86:{NFSU2_TR(0x4ace86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ace8c:{NFSU2_TR(0x4ace8c);
if(r1(R+518)){{goto L4acea9;}}
}
B4ace8e:L4ace8e:{c.instructions+=2;NFSU2_TR(0x4ace8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ace8f:{NFSU2_TR(0x4ace8f);
if(r1(R+518)){{goto L4ace95;}}
}
B4ace91:L4ace91:{c.instructions+=2;NFSU2_TR(0x4ace91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ace93:{NFSU2_TR(0x4ace93);
{goto L4aceae;}
}
B4ace95:L4ace95:{c.instructions+=5;NFSU2_TR(0x4ace95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ace9b:{NFSU2_TR(0x4ace9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4ace9c:{NFSU2_TR(0x4ace9c);
w4(R+0,u32(0x1ull));
}
B4acea1:{NFSU2_TR(0x4acea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4acea7:{NFSU2_TR(0x4acea7);
{goto L4aceae;}
}
B4acea9:L4acea9:{c.instructions+=1;NFSU2_TR(0x4acea9);
w4(R+0,u32(0x2ull));
}
B4aceae:L4aceae:{c.instructions+=5;NFSU2_TR(0x4aceae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4aceaf:{NFSU2_TR(0x4aceaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aceb5:{NFSU2_TR(0x4aceb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aceb8:{NFSU2_TR(0x4aceb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4acebb:{NFSU2_TR(0x4acebb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B4acebe:L4acebe:{c.instructions+=4;NFSU2_TR(0x4acebe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x370ull))));
}
B4acec4:{NFSU2_TR(0x4acec4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4acec5:{NFSU2_TR(0x4acec5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8760e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4acecb:{NFSU2_TR(0x4acecb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ace73u);}goto L4ace73;}}
}
B4acecd:L4acecd:{c.instructions+=2;NFSU2_TR(0x4acecd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4aced4:{NFSU2_TR(0x4aced4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4acef6;}}
}
B4aced6:L4aced6:{c.instructions+=3;NFSU2_TR(0x4aced6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acedc:{NFSU2_TR(0x4acedc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acedd:{NFSU2_TR(0x4acedd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acee2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4acee2:L4acee2:{c.instructions+=3;NFSU2_TR(0x4acee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acee8:{NFSU2_TR(0x4acee8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acee9:{NFSU2_TR(0x4acee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aceeeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aceee:L4aceee:{c.instructions+=6;NFSU2_TR(0x4aceee);
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
B4acef1:{NFSU2_TR(0x4acef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acef2:{NFSU2_TR(0x4acef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acef3:{NFSU2_TR(0x4acef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4acef4:{NFSU2_TR(0x4acef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4acef5:{NFSU2_TR(0x4acef5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acef6:L4acef6:{c.instructions+=3;NFSU2_TR(0x4acef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acefc:{NFSU2_TR(0x4acefc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acefd:{NFSU2_TR(0x4acefd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acf02ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4acf02:L4acf02:{c.instructions+=3;NFSU2_TR(0x4acf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acf08:{NFSU2_TR(0x4acf08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf09:{NFSU2_TR(0x4acf09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acf0eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4acf0e:L4acf0e:{c.instructions+=5;NFSU2_TR(0x4acf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acf14:{NFSU2_TR(0x4acf14);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf16:{NFSU2_TR(0x4acf16);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf1b:{NFSU2_TR(0x4acf1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf1c:{NFSU2_TR(0x4acf1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acf21ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4acf21:L4acf21:{c.instructions+=5;NFSU2_TR(0x4acf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4acf27:{NFSU2_TR(0x4acf27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf29:{NFSU2_TR(0x4acf29);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf2e:{NFSU2_TR(0x4acf2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf2f:{NFSU2_TR(0x4acf2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acf34ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4acf34:L4acf34:{c.instructions+=6;NFSU2_TR(0x4acf34);
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
B4acf37:{NFSU2_TR(0x4acf37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acf38:{NFSU2_TR(0x4acf38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acf39:{NFSU2_TR(0x4acf39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4acf3a:{NFSU2_TR(0x4acf3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4acf3b:{NFSU2_TR(0x4acf3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acf40:L4acf40:{c.instructions+=5;NFSU2_TR(0x4acf40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B4acf43:{NFSU2_TR(0x4acf43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf44:{NFSU2_TR(0x4acf44);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4acf48:{NFSU2_TR(0x4acf48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4acf4a:{NFSU2_TR(0x4acf4a);
if(r1(R+518)){{goto L4acfbb;}}
}
B4acf4c:L4acf4c:{c.instructions+=9;NFSU2_TR(0x4acf4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acf50:{NFSU2_TR(0x4acf50);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acf54:{NFSU2_TR(0x4acf54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf55:{NFSU2_TR(0x4acf55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf56:{NFSU2_TR(0x4acf56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf57:{NFSU2_TR(0x4acf57);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4acf5b:{NFSU2_TR(0x4acf5b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4acf61:{NFSU2_TR(0x4acf61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4acf67:{NFSU2_TR(0x4acf67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acf6cull));
TAIL_STATIC(0x5c20e0u,5c2);
}
B4acf6c:L4acf6c:{c.instructions+=4;NFSU2_TR(0x4acf6c);
__builtin_memmove((R+8),(R+0),4);
}
B4acf6e:{NFSU2_TR(0x4acf6e);
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
B4acf70:{NFSU2_TR(0x4acf70);
w4(R+4,u32(0xbull));
}
B4acf75:{NFSU2_TR(0x4acf75);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4acf79:L4acf79:{c.instructions+=1;NFSU2_TR(0x4acf79);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4acf7b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4acf79u);}goto L4acf79;}
}
B4acf7b:L4acf7b:{c.instructions+=9;NFSU2_TR(0x4acf7b);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf7d:{NFSU2_TR(0x4acf7d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4acf7f:{NFSU2_TR(0x4acf7f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4acf83:{NFSU2_TR(0x4acf83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf84:{NFSU2_TR(0x4acf84);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf86:{NFSU2_TR(0x4acf86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf87:{NFSU2_TR(0x4acf87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf89:{NFSU2_TR(0x4acf89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf8b:{NFSU2_TR(0x4acf8b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783130),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acf91ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4acf91:L4acf91:{c.instructions+=3;NFSU2_TR(0x4acf91);
if(mod_hook_table[19]){SPILL();c.pc=0x4acf91u;mod_hook_table[19](c);SPILL();if(c.pc!=0x4acf91u){TAIL_DYNAMIC(c.pc);}goto B4acf9a;}
u8 U[10];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B4acf97:{NFSU2_TR(0x4acf97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4acf98:{NFSU2_TR(0x4acf98);
if(r1(R+518)){{goto L4acfad;}}
}
B4acf9a:L4acf9a:{c.instructions+=4;NFSU2_TR(0x4acf9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4acf9e:{NFSU2_TR(0x4acf9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acf9f:{NFSU2_TR(0x4acf9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfa0:{NFSU2_TR(0x4acfa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acfa5ull));
TAIL_STATIC(0x537ab0u,537);
}
B4acfa5:L4acfa5:{c.instructions+=4;NFSU2_TR(0x4acfa5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4acfa8:{NFSU2_TR(0x4acfa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acfa9:{NFSU2_TR(0x4acfa9);
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
B4acfac:{NFSU2_TR(0x4acfac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acfad:L4acfad:{c.instructions+=3;NFSU2_TR(0x4acfad);
u8 U[4];
w4(U+0,u32(0x790b94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfb2:{NFSU2_TR(0x4acfb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfb3:{NFSU2_TR(0x4acfb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acfb8ull));
TAIL_STATIC(0x537be0u,537);
}
B4acfb8:L4acfb8:{c.instructions+=1;NFSU2_TR(0x4acfb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4acfbb:L4acfbb:{c.instructions+=3;NFSU2_TR(0x4acfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acfbc:{NFSU2_TR(0x4acfbc);
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
B4acfbf:{NFSU2_TR(0x4acfbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acfc0:L4acfc0:{c.instructions+=4;NFSU2_TR(0x4acfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4acfc3:{NFSU2_TR(0x4acfc3);
u8 U[4];
w4(U+0,u32(0x153e7337ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfc8:{NFSU2_TR(0x4acfc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfc9:{NFSU2_TR(0x4acfc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acfceull));
TAIL_STATIC(0x50c900u,50c);
}
B4acfce:L4acfce:{c.instructions+=2;NFSU2_TR(0x4acfce);
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
B4acfd1:{NFSU2_TR(0x4acfd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4acfe0:L4acfe0:{c.instructions+=6;NFSU2_TR(0x4acfe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfe1:{NFSU2_TR(0x4acfe1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfe3:{NFSU2_TR(0x4acfe3);
__builtin_memmove((R+24),(R+4),4);
}
B4acfe5:{NFSU2_TR(0x4acfe5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4acfe7:{NFSU2_TR(0x4acfe7);
w4(R+4,u32(0x874c40ull));
}
B4acfec:{NFSU2_TR(0x4acfec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acff1ull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4acff1:L4acff1:{c.instructions+=3;NFSU2_TR(0x4acff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4acff3:{NFSU2_TR(0x4acff3);
__builtin_memmove((R+4),(R+24),4);
}
B4acff5:{NFSU2_TR(0x4acff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4acff8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4acff8:L4acff8:{c.instructions+=2;NFSU2_TR(0x4acff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4acff9:{NFSU2_TR(0x4acff9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4ac,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
