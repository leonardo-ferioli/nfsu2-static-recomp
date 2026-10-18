#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69c(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a2(u8* __restrict R,Cpu& c);
u32 body_6a3(u8* __restrict R,Cpu& c);
u32 body_6a4(u8* __restrict R,Cpu& c);
u32 body_6a6(u8* __restrict R,Cpu& c);
u32 body_6a7(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6aa(u8* __restrict R,Cpu& c);
u32 body_6ab(u8* __restrict R,Cpu& c);
u32 body_6ad(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ac,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ac,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ac(u8* __restrict R,Cpu& c);
u32 page_6ac(Cpu& c){return body_6ac(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ac(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ac002:goto L6ac002;
case 0x6ac005:c.instructions+=1;goto B6ac005;
case 0x6ac007:goto L6ac007;
case 0x6ac009:c.instructions+=5;goto B6ac009;
case 0x6ac00d:c.instructions+=4;goto B6ac00d;
case 0x6ac010:c.instructions+=3;goto B6ac010;
case 0x6ac011:c.instructions+=2;goto B6ac011;
case 0x6ac013:c.instructions+=1;goto B6ac013;
case 0x6ac015:goto L6ac015;
case 0x6ac018:c.instructions+=3;goto B6ac018;
case 0x6ac01b:c.instructions+=2;goto B6ac01b;
case 0x6ac01e:c.instructions+=1;goto B6ac01e;
case 0x6ac020:goto L6ac020;
case 0x6ac022:goto L6ac022;
case 0x6ac029:goto L6ac029;
case 0x6ac02c:c.instructions+=2;goto B6ac02c;
case 0x6ac030:c.instructions+=1;goto B6ac030;
case 0x6ac036:goto L6ac036;
case 0x6ac039:c.instructions+=7;goto B6ac039;
case 0x6ac03c:c.instructions+=6;goto B6ac03c;
case 0x6ac03f:c.instructions+=5;goto B6ac03f;
case 0x6ac040:c.instructions+=4;goto B6ac040;
case 0x6ac043:c.instructions+=3;goto B6ac043;
case 0x6ac046:c.instructions+=2;goto B6ac046;
case 0x6ac049:c.instructions+=1;goto B6ac049;
case 0x6ac04e:goto L6ac04e;
case 0x6ac050:c.instructions+=2;goto B6ac050;
case 0x6ac053:c.instructions+=1;goto B6ac053;
case 0x6ac059:goto L6ac059;
case 0x6ac05c:c.instructions+=1;goto B6ac05c;
case 0x6ac05e:goto L6ac05e;
case 0x6ac061:c.instructions+=6;goto B6ac061;
case 0x6ac062:c.instructions+=5;goto B6ac062;
case 0x6ac065:c.instructions+=4;goto B6ac065;
case 0x6ac066:c.instructions+=3;goto B6ac066;
case 0x6ac069:c.instructions+=2;goto B6ac069;
case 0x6ac06b:c.instructions+=1;goto B6ac06b;
case 0x6ac070:goto L6ac070;
case 0x6ac072:c.instructions+=1;goto B6ac072;
case 0x6ac074:goto L6ac074;
case 0x6ac077:c.instructions+=5;goto B6ac077;
case 0x6ac07a:c.instructions+=4;goto B6ac07a;
case 0x6ac07b:c.instructions+=3;goto B6ac07b;
case 0x6ac07d:c.instructions+=2;goto B6ac07d;
case 0x6ac07e:c.instructions+=1;goto B6ac07e;
case 0x6ac083:goto L6ac083;
case 0x6ac085:c.instructions+=1;goto B6ac085;
case 0x6ac08b:goto L6ac08b;
case 0x6ac08e:c.instructions+=6;goto B6ac08e;
case 0x6ac091:c.instructions+=5;goto B6ac091;
case 0x6ac093:c.instructions+=4;goto B6ac093;
case 0x6ac096:c.instructions+=3;goto B6ac096;
case 0x6ac099:c.instructions+=2;goto B6ac099;
case 0x6ac09c:c.instructions+=1;goto B6ac09c;
case 0x6ac09e:goto L6ac09e;
case 0x6ac0a2:c.instructions+=1;goto B6ac0a2;
case 0x6ac0a4:goto L6ac0a4;
case 0x6ac0a5:c.instructions+=5;goto B6ac0a5;
case 0x6ac0a6:c.instructions+=4;goto B6ac0a6;
case 0x6ac0a9:c.instructions+=3;goto B6ac0a9;
case 0x6ac0aa:c.instructions+=2;goto B6ac0aa;
case 0x6ac0ac:c.instructions+=1;goto B6ac0ac;
case 0x6ac0b1:goto L6ac0b1;
case 0x6ac0b4:c.instructions+=5;goto B6ac0b4;
case 0x6ac0b7:c.instructions+=4;goto B6ac0b7;
case 0x6ac0b8:c.instructions+=3;goto B6ac0b8;
case 0x6ac0b9:c.instructions+=2;goto B6ac0b9;
case 0x6ac0ba:c.instructions+=1;goto B6ac0ba;
case 0x6ac0bf:goto L6ac0bf;
case 0x6ac0c1:c.instructions+=1;goto B6ac0c1;
case 0x6ac0c3:goto L6ac0c3;
case 0x6ac0c8:goto L6ac0c8;
case 0x6ac0cc:c.instructions+=4;goto B6ac0cc;
case 0x6ac0cf:c.instructions+=3;goto B6ac0cf;
case 0x6ac0d0:c.instructions+=2;goto B6ac0d0;
case 0x6ac0d2:c.instructions+=1;goto B6ac0d2;
case 0x6ac0d7:goto L6ac0d7;
case 0x6ac0da:c.instructions+=6;goto B6ac0da;
case 0x6ac0dd:c.instructions+=5;goto B6ac0dd;
case 0x6ac0df:c.instructions+=4;goto B6ac0df;
case 0x6ac0e2:c.instructions+=3;goto B6ac0e2;
case 0x6ac0e5:c.instructions+=2;goto B6ac0e5;
case 0x6ac0e8:c.instructions+=1;goto B6ac0e8;
case 0x6ac0ea:goto L6ac0ea;
case 0x6ac0ee:c.instructions+=1;goto B6ac0ee;
case 0x6ac0f0:goto L6ac0f0;
case 0x6ac0f3:c.instructions+=3;goto B6ac0f3;
case 0x6ac0f5:c.instructions+=2;goto B6ac0f5;
case 0x6ac0f7:c.instructions+=1;goto B6ac0f7;
case 0x6ac0f9:goto L6ac0f9;
case 0x6ac0fb:c.instructions+=1;goto B6ac0fb;
case 0x6ac0fe:goto L6ac0fe;
case 0x6ac100:goto L6ac100;
case 0x6ac102:c.instructions+=7;goto B6ac102;
case 0x6ac103:c.instructions+=6;goto B6ac103;
case 0x6ac105:c.instructions+=5;goto B6ac105;
case 0x6ac107:c.instructions+=4;goto B6ac107;
case 0x6ac108:c.instructions+=3;goto B6ac108;
case 0x6ac10a:c.instructions+=2;goto B6ac10a;
case 0x6ac10e:c.instructions+=1;goto B6ac10e;
case 0x6ac110:goto L6ac110;
case 0x6ac112:c.instructions+=3;goto B6ac112;
case 0x6ac113:c.instructions+=2;goto B6ac113;
case 0x6ac115:c.instructions+=1;goto B6ac115;
case 0x6ac117:goto L6ac117;
case 0x6ac119:c.instructions+=6;goto B6ac119;
case 0x6ac11c:c.instructions+=5;goto B6ac11c;
case 0x6ac120:c.instructions+=4;goto B6ac120;
case 0x6ac124:c.instructions+=3;goto B6ac124;
case 0x6ac126:c.instructions+=2;goto B6ac126;
case 0x6ac129:c.instructions+=1;goto B6ac129;
case 0x6ac12b:goto L6ac12b;
case 0x6ac12d:goto L6ac12d;
case 0x6ac12f:c.instructions+=3;goto B6ac12f;
case 0x6ac132:c.instructions+=2;goto B6ac132;
case 0x6ac135:c.instructions+=1;goto B6ac135;
case 0x6ac137:goto L6ac137;
case 0x6ac139:goto L6ac139;
case 0x6ac13c:c.instructions+=6;goto B6ac13c;
case 0x6ac13d:c.instructions+=5;goto B6ac13d;
case 0x6ac140:c.instructions+=4;goto B6ac140;
case 0x6ac141:c.instructions+=3;goto B6ac141;
case 0x6ac144:c.instructions+=2;goto B6ac144;
case 0x6ac146:c.instructions+=1;goto B6ac146;
case 0x6ac14b:goto L6ac14b;
case 0x6ac14e:c.instructions+=5;goto B6ac14e;
case 0x6ac151:c.instructions+=4;goto B6ac151;
case 0x6ac154:c.instructions+=3;goto B6ac154;
case 0x6ac156:c.instructions+=2;goto B6ac156;
case 0x6ac157:c.instructions+=1;goto B6ac157;
case 0x6ac15c:goto L6ac15c;
case 0x6ac15f:c.instructions+=3;goto B6ac15f;
case 0x6ac162:c.instructions+=2;goto B6ac162;
case 0x6ac163:c.instructions+=1;goto B6ac163;
case 0x6ac166:goto L6ac166;
case 0x6ac169:c.instructions+=1;goto B6ac169;
case 0x6ac16e:goto L6ac16e;
case 0x6ac170:c.instructions+=2;goto B6ac170;
case 0x6ac173:c.instructions+=1;goto B6ac173;
case 0x6ac179:goto L6ac179;
case 0x6ac17c:c.instructions+=3;goto B6ac17c;
case 0x6ac17f:c.instructions+=2;goto B6ac17f;
case 0x6ac182:c.instructions+=1;goto B6ac182;
case 0x6ac188:goto L6ac188;
case 0x6ac18a:c.instructions+=3;goto B6ac18a;
case 0x6ac18d:c.instructions+=2;goto B6ac18d;
case 0x6ac190:c.instructions+=1;goto B6ac190;
case 0x6ac192:goto L6ac192;
case 0x6ac195:c.instructions+=7;goto B6ac195;
case 0x6ac198:c.instructions+=6;goto B6ac198;
case 0x6ac19b:c.instructions+=5;goto B6ac19b;
case 0x6ac19e:c.instructions+=4;goto B6ac19e;
case 0x6ac1a1:c.instructions+=3;goto B6ac1a1;
case 0x6ac1a4:c.instructions+=2;goto B6ac1a4;
case 0x6ac1a6:c.instructions+=1;goto B6ac1a6;
case 0x6ac1a8:goto L6ac1a8;
case 0x6ac1ac:c.instructions+=1;goto B6ac1ac;
case 0x6ac1ae:goto L6ac1ae;
case 0x6ac1b1:c.instructions+=2;goto B6ac1b1;
case 0x6ac1b4:c.instructions+=1;goto B6ac1b4;
case 0x6ac1b6:goto L6ac1b6;
case 0x6ac1b9:c.instructions+=2;goto B6ac1b9;
case 0x6ac1bc:c.instructions+=1;goto B6ac1bc;
case 0x6ac1be:goto L6ac1be;
case 0x6ac1c1:c.instructions+=1;goto B6ac1c1;
case 0x6ac1c3:goto L6ac1c3;
case 0x6ac1c6:c.instructions+=1;goto B6ac1c6;
case 0x6ac1c8:goto L6ac1c8;
case 0x6ac1cc:c.instructions+=2;goto B6ac1cc;
case 0x6ac1cf:c.instructions+=1;goto B6ac1cf;
case 0x6ac1d1:goto L6ac1d1;
case 0x6ac1d8:goto L6ac1d8;
case 0x6ac1d9:c.instructions+=2;goto B6ac1d9;
case 0x6ac1dc:c.instructions+=1;goto B6ac1dc;
case 0x6ac1de:goto L6ac1de;
case 0x6ac1e1:c.instructions+=6;goto B6ac1e1;
case 0x6ac1e4:c.instructions+=5;goto B6ac1e4;
case 0x6ac1e7:c.instructions+=4;goto B6ac1e7;
case 0x6ac1eb:c.instructions+=3;goto B6ac1eb;
case 0x6ac1ed:c.instructions+=2;goto B6ac1ed;
case 0x6ac1f0:c.instructions+=1;goto B6ac1f0;
case 0x6ac1f2:goto L6ac1f2;
case 0x6ac1f5:c.instructions+=3;goto B6ac1f5;
case 0x6ac1f8:c.instructions+=2;goto B6ac1f8;
case 0x6ac1fb:c.instructions+=1;goto B6ac1fb;
case 0x6ac1ff:goto L6ac1ff;
case 0x6ac202:c.instructions+=6;goto B6ac202;
case 0x6ac205:c.instructions+=5;goto B6ac205;
case 0x6ac208:c.instructions+=4;goto B6ac208;
case 0x6ac20b:c.instructions+=3;goto B6ac20b;
case 0x6ac20d:c.instructions+=2;goto B6ac20d;
case 0x6ac210:c.instructions+=1;goto B6ac210;
case 0x6ac212:goto L6ac212;
case 0x6ac215:c.instructions+=4;goto B6ac215;
case 0x6ac218:c.instructions+=3;goto B6ac218;
case 0x6ac21b:c.instructions+=2;goto B6ac21b;
case 0x6ac21e:c.instructions+=1;goto B6ac21e;
case 0x6ac220:goto L6ac220;
case 0x6ac224:c.instructions+=1;goto B6ac224;
case 0x6ac226:goto L6ac226;
case 0x6ac229:c.instructions+=4;goto B6ac229;
case 0x6ac22c:c.instructions+=3;goto B6ac22c;
case 0x6ac22f:c.instructions+=2;goto B6ac22f;
case 0x6ac232:c.instructions+=1;goto B6ac232;
case 0x6ac234:goto L6ac234;
case 0x6ac235:c.instructions+=1;goto B6ac235;
case 0x6ac238:goto L6ac238;
case 0x6ac239:c.instructions+=2;goto B6ac239;
case 0x6ac23c:c.instructions+=1;goto B6ac23c;
case 0x6ac23e:goto L6ac23e;
case 0x6ac241:c.instructions+=1;goto B6ac241;
case 0x6ac243:goto L6ac243;
case 0x6ac245:c.instructions+=1;goto B6ac245;
case 0x6ac24a:goto L6ac24a;
case 0x6ac24d:c.instructions+=2;goto B6ac24d;
case 0x6ac257:c.instructions+=1;goto B6ac257;
case 0x6ac25c:goto L6ac25c;
case 0x6ac25d:c.instructions+=6;goto B6ac25d;
case 0x6ac25f:c.instructions+=5;goto B6ac25f;
case 0x6ac260:c.instructions+=4;goto B6ac260;
case 0x6ac261:c.instructions+=3;goto B6ac261;
case 0x6ac262:c.instructions+=2;goto B6ac262;
case 0x6ac263:c.instructions+=1;goto B6ac263;
case 0x6ac264:goto L6ac264;
case 0x6ac266:c.instructions+=10;goto B6ac266;
case 0x6ac267:c.instructions+=9;goto B6ac267;
case 0x6ac269:c.instructions+=8;goto B6ac269;
case 0x6ac26c:c.instructions+=7;goto B6ac26c;
case 0x6ac26d:c.instructions+=6;goto B6ac26d;
case 0x6ac26e:c.instructions+=5;goto B6ac26e;
case 0x6ac270:c.instructions+=4;goto B6ac270;
case 0x6ac272:c.instructions+=3;goto B6ac272;
case 0x6ac276:c.instructions+=2;goto B6ac276;
case 0x6ac279:c.instructions+=1;goto B6ac279;
case 0x6ac27b:goto L6ac27b;
case 0x6ac27d:c.instructions+=2;goto B6ac27d;
case 0x6ac27e:c.instructions+=1;goto B6ac27e;
case 0x6ac283:goto L6ac283;
case 0x6ac285:c.instructions+=1;goto B6ac285;
case 0x6ac28a:goto L6ac28a;
case 0x6ac28c:c.instructions+=1;goto B6ac28c;
case 0x6ac292:goto L6ac292;
case 0x6ac295:c.instructions+=7;goto B6ac295;
case 0x6ac296:c.instructions+=6;goto B6ac296;
case 0x6ac297:c.instructions+=5;goto B6ac297;
case 0x6ac29d:c.instructions+=4;goto B6ac29d;
case 0x6ac2a0:c.instructions+=3;goto B6ac2a0;
case 0x6ac2a1:c.instructions+=2;goto B6ac2a1;
case 0x6ac2a3:c.instructions+=1;goto B6ac2a3;
case 0x6ac2a8:goto L6ac2a8;
case 0x6ac2aa:c.instructions+=1;goto B6ac2aa;
case 0x6ac2ac:goto L6ac2ac;
case 0x6ac2ad:c.instructions+=4;goto B6ac2ad;
case 0x6ac2b0:c.instructions+=3;goto B6ac2b0;
case 0x6ac2b1:c.instructions+=2;goto B6ac2b1;
case 0x6ac2b3:c.instructions+=1;goto B6ac2b3;
case 0x6ac2b8:goto L6ac2b8;
case 0x6ac2ba:c.instructions+=1;goto B6ac2ba;
case 0x6ac2bc:goto L6ac2bc;
case 0x6ac2bf:c.instructions+=3;goto B6ac2bf;
case 0x6ac2c0:c.instructions+=2;goto B6ac2c0;
case 0x6ac2c2:c.instructions+=1;goto B6ac2c2;
case 0x6ac2c7:goto L6ac2c7;
case 0x6ac2ca:c.instructions+=5;goto B6ac2ca;
case 0x6ac2cd:c.instructions+=4;goto B6ac2cd;
case 0x6ac2d3:c.instructions+=3;goto B6ac2d3;
case 0x6ac2d5:c.instructions+=2;goto B6ac2d5;
case 0x6ac2d6:c.instructions+=1;goto B6ac2d6;
case 0x6ac2db:goto L6ac2db;
case 0x6ac2dd:c.instructions+=1;goto B6ac2dd;
case 0x6ac2e3:goto L6ac2e3;
case 0x6ac2e4:c.instructions+=4;goto B6ac2e4;
case 0x6ac2e7:c.instructions+=3;goto B6ac2e7;
case 0x6ac2e8:c.instructions+=2;goto B6ac2e8;
case 0x6ac2ea:c.instructions+=1;goto B6ac2ea;
case 0x6ac2ef:goto L6ac2ef;
case 0x6ac2f1:c.instructions+=1;goto B6ac2f1;
case 0x6ac2f7:goto L6ac2f7;
case 0x6ac2fa:c.instructions+=3;goto B6ac2fa;
case 0x6ac2fd:c.instructions+=2;goto B6ac2fd;
case 0x6ac2fe:c.instructions+=1;goto B6ac2fe;
case 0x6ac303:goto L6ac303;
case 0x6ac305:c.instructions+=3;goto B6ac305;
case 0x6ac306:c.instructions+=2;goto B6ac306;
case 0x6ac309:c.instructions+=1;goto B6ac309;
case 0x6ac30f:goto L6ac30f;
case 0x6ac312:c.instructions+=6;goto B6ac312;
case 0x6ac315:c.instructions+=5;goto B6ac315;
case 0x6ac318:c.instructions+=4;goto B6ac318;
case 0x6ac319:c.instructions+=3;goto B6ac319;
case 0x6ac31b:c.instructions+=2;goto B6ac31b;
case 0x6ac31d:c.instructions+=1;goto B6ac31d;
case 0x6ac320:goto L6ac320;
case 0x6ac322:goto L6ac322;
case 0x6ac324:c.instructions+=1;goto B6ac324;
case 0x6ac327:goto L6ac327;
case 0x6ac329:goto L6ac329;
case 0x6ac32b:c.instructions+=1;goto B6ac32b;
case 0x6ac330:goto L6ac330;
case 0x6ac333:c.instructions+=4;goto B6ac333;
case 0x6ac335:c.instructions+=3;goto B6ac335;
case 0x6ac338:c.instructions+=2;goto B6ac338;
case 0x6ac33b:c.instructions+=1;goto B6ac33b;
case 0x6ac341:goto L6ac341;
case 0x6ac344:c.instructions+=3;goto B6ac344;
case 0x6ac347:c.instructions+=2;goto B6ac347;
case 0x6ac34b:c.instructions+=1;goto B6ac34b;
case 0x6ac351:goto L6ac351;
case 0x6ac353:c.instructions+=2;goto B6ac353;
case 0x6ac356:c.instructions+=1;goto B6ac356;
case 0x6ac358:goto L6ac358;
case 0x6ac35b:c.instructions+=2;goto B6ac35b;
case 0x6ac35d:c.instructions+=1;goto B6ac35d;
case 0x6ac362:goto L6ac362;
case 0x6ac364:c.instructions+=1;goto B6ac364;
case 0x6ac366:goto L6ac366;
case 0x6ac36b:goto L6ac36b;
case 0x6ac36e:c.instructions+=2;goto B6ac36e;
case 0x6ac371:c.instructions+=1;goto B6ac371;
case 0x6ac373:goto L6ac373;
case 0x6ac375:goto L6ac375;
case 0x6ac379:c.instructions+=1;goto B6ac379;
case 0x6ac37b:goto L6ac37b;
case 0x6ac37e:c.instructions+=7;goto B6ac37e;
case 0x6ac381:c.instructions+=6;goto B6ac381;
case 0x6ac384:c.instructions+=5;goto B6ac384;
case 0x6ac387:c.instructions+=4;goto B6ac387;
case 0x6ac389:c.instructions+=3;goto B6ac389;
case 0x6ac38c:c.instructions+=2;goto B6ac38c;
case 0x6ac38f:c.instructions+=1;goto B6ac38f;
case 0x6ac391:goto L6ac391;
case 0x6ac393:c.instructions+=4;goto B6ac393;
case 0x6ac396:c.instructions+=3;goto B6ac396;
case 0x6ac397:c.instructions+=2;goto B6ac397;
case 0x6ac399:c.instructions+=1;goto B6ac399;
case 0x6ac39e:goto L6ac39e;
case 0x6ac3a0:c.instructions+=1;goto B6ac3a0;
case 0x6ac3a2:goto L6ac3a2;
case 0x6ac3a5:c.instructions+=5;goto B6ac3a5;
case 0x6ac3a8:c.instructions+=4;goto B6ac3a8;
case 0x6ac3ab:c.instructions+=3;goto B6ac3ab;
case 0x6ac3b2:c.instructions+=2;goto B6ac3b2;
case 0x6ac3b4:c.instructions+=1;goto B6ac3b4;
case 0x6ac3b7:goto L6ac3b7;
case 0x6ac3b9:goto L6ac3b9;
case 0x6ac3bb:c.instructions+=2;goto B6ac3bb;
case 0x6ac3be:c.instructions+=1;goto B6ac3be;
case 0x6ac3c1:goto L6ac3c1;
case 0x6ac3c3:goto L6ac3c3;
case 0x6ac3c6:goto L6ac3c6;
case 0x6ac3c9:c.instructions+=1;goto B6ac3c9;
case 0x6ac3cb:goto L6ac3cb;
case 0x6ac3ce:goto L6ac3ce;
case 0x6ac3d1:c.instructions+=4;goto B6ac3d1;
case 0x6ac3d4:c.instructions+=3;goto B6ac3d4;
case 0x6ac3db:c.instructions+=2;goto B6ac3db;
case 0x6ac3dd:c.instructions+=1;goto B6ac3dd;
case 0x6ac3e0:goto L6ac3e0;
case 0x6ac3e2:goto L6ac3e2;
case 0x6ac3e4:c.instructions+=1;goto B6ac3e4;
case 0x6ac3e7:goto L6ac3e7;
case 0x6ac3e9:goto L6ac3e9;
case 0x6ac3ea:c.instructions+=3;goto B6ac3ea;
case 0x6ac3ed:c.instructions+=2;goto B6ac3ed;
case 0x6ac3f0:c.instructions+=1;goto B6ac3f0;
case 0x6ac3f6:goto L6ac3f6;
case 0x6ac3f9:c.instructions+=4;goto B6ac3f9;
case 0x6ac3fb:c.instructions+=3;goto B6ac3fb;
case 0x6ac3fd:c.instructions+=2;goto B6ac3fd;
case 0x6ac400:c.instructions+=1;goto B6ac400;
case 0x6ac402:goto L6ac402;
case 0x6ac405:c.instructions+=5;goto B6ac405;
case 0x6ac407:c.instructions+=4;goto B6ac407;
case 0x6ac40a:c.instructions+=3;goto B6ac40a;
case 0x6ac40d:c.instructions+=2;goto B6ac40d;
case 0x6ac411:c.instructions+=1;goto B6ac411;
case 0x6ac413:goto L6ac413;
case 0x6ac416:c.instructions+=2;goto B6ac416;
case 0x6ac418:c.instructions+=1;goto B6ac418;
case 0x6ac41a:goto L6ac41a;
case 0x6ac41d:c.instructions+=3;goto B6ac41d;
case 0x6ac420:c.instructions+=2;goto B6ac420;
case 0x6ac423:c.instructions+=1;goto B6ac423;
case 0x6ac426:goto L6ac426;
case 0x6ac428:c.instructions+=2;goto B6ac428;
case 0x6ac42b:c.instructions+=1;goto B6ac42b;
case 0x6ac42d:goto L6ac42d;
case 0x6ac42e:c.instructions+=3;goto B6ac42e;
case 0x6ac431:c.instructions+=2;goto B6ac431;
case 0x6ac434:c.instructions+=1;goto B6ac434;
case 0x6ac436:goto L6ac436;
case 0x6ac439:goto L6ac439;
case 0x6ac43b:c.instructions+=3;goto B6ac43b;
case 0x6ac43d:c.instructions+=2;goto B6ac43d;
case 0x6ac43f:c.instructions+=1;goto B6ac43f;
case 0x6ac441:goto L6ac441;
case 0x6ac443:c.instructions+=3;goto B6ac443;
case 0x6ac446:c.instructions+=2;goto B6ac446;
case 0x6ac449:c.instructions+=1;goto B6ac449;
case 0x6ac44c:goto L6ac44c;
case 0x6ac44f:c.instructions+=11;goto B6ac44f;
case 0x6ac452:c.instructions+=10;goto B6ac452;
case 0x6ac456:c.instructions+=9;goto B6ac456;
case 0x6ac458:c.instructions+=8;goto B6ac458;
case 0x6ac45c:c.instructions+=7;goto B6ac45c;
case 0x6ac45e:c.instructions+=6;goto B6ac45e;
case 0x6ac460:c.instructions+=5;goto B6ac460;
case 0x6ac463:c.instructions+=4;goto B6ac463;
case 0x6ac467:c.instructions+=3;goto B6ac467;
case 0x6ac46a:c.instructions+=2;goto B6ac46a;
case 0x6ac46d:c.instructions+=1;goto B6ac46d;
case 0x6ac46f:goto L6ac46f;
case 0x6ac472:goto L6ac472;
case 0x6ac475:c.instructions+=4;goto B6ac475;
case 0x6ac476:c.instructions+=3;goto B6ac476;
case 0x6ac478:c.instructions+=2;goto B6ac478;
case 0x6ac47b:c.instructions+=1;goto B6ac47b;
case 0x6ac47d:goto L6ac47d;
case 0x6ac47e:goto L6ac47e;
case 0x6ac481:c.instructions+=3;goto B6ac481;
case 0x6ac482:c.instructions+=2;goto B6ac482;
case 0x6ac484:c.instructions+=1;goto B6ac484;
case 0x6ac489:goto L6ac489;
case 0x6ac48c:c.instructions+=1;goto B6ac48c;
case 0x6ac491:goto L6ac491;
case 0x6ac492:c.instructions+=1;goto B6ac492;
case 0x6ac494:goto L6ac494;
case 0x6ac495:c.instructions+=3;goto B6ac495;
case 0x6ac496:c.instructions+=2;goto B6ac496;
case 0x6ac497:c.instructions+=1;goto B6ac497;
case 0x6ac498:goto L6ac498;
case 0x6ac49a:c.instructions+=10;goto B6ac49a;
case 0x6ac49b:c.instructions+=9;goto B6ac49b;
case 0x6ac49d:c.instructions+=8;goto B6ac49d;
case 0x6ac4a0:c.instructions+=7;goto B6ac4a0;
case 0x6ac4a1:c.instructions+=6;goto B6ac4a1;
case 0x6ac4a2:c.instructions+=5;goto B6ac4a2;
case 0x6ac4a7:c.instructions+=4;goto B6ac4a7;
case 0x6ac4a9:c.instructions+=3;goto B6ac4a9;
case 0x6ac4ab:c.instructions+=2;goto B6ac4ab;
case 0x6ac4b1:c.instructions+=1;goto B6ac4b1;
case 0x6ac4b6:goto L6ac4b6;
case 0x6ac4b8:c.instructions+=2;goto B6ac4b8;
case 0x6ac4ba:c.instructions+=1;goto B6ac4ba;
case 0x6ac4c0:goto L6ac4c0;
case 0x6ac4c5:c.instructions+=4;goto B6ac4c5;
case 0x6ac4c7:c.instructions+=3;goto B6ac4c7;
case 0x6ac4cd:c.instructions+=2;goto B6ac4cd;
case 0x6ac4cf:c.instructions+=1;goto B6ac4cf;
case 0x6ac4d4:goto L6ac4d4;
case 0x6ac4d6:c.instructions+=1;goto B6ac4d6;
case 0x6ac4dc:goto L6ac4dc;
case 0x6ac4e1:c.instructions+=4;goto B6ac4e1;
case 0x6ac4e3:c.instructions+=3;goto B6ac4e3;
case 0x6ac4e9:c.instructions+=2;goto B6ac4e9;
case 0x6ac4eb:c.instructions+=1;goto B6ac4eb;
case 0x6ac4f0:goto L6ac4f0;
case 0x6ac4f2:c.instructions+=1;goto B6ac4f2;
case 0x6ac4f8:goto L6ac4f8;
case 0x6ac4fe:c.instructions+=5;goto B6ac4fe;
case 0x6ac4ff:c.instructions+=4;goto B6ac4ff;
case 0x6ac504:c.instructions+=3;goto B6ac504;
case 0x6ac506:c.instructions+=2;goto B6ac506;
case 0x6ac50b:c.instructions+=1;goto B6ac50b;
case 0x6ac50d:goto L6ac50d;
case 0x6ac512:c.instructions+=1;goto B6ac512;
case 0x6ac514:goto L6ac514;
case 0x6ac519:c.instructions+=4;goto B6ac519;
case 0x6ac51b:c.instructions+=3;goto B6ac51b;
case 0x6ac521:c.instructions+=2;goto B6ac521;
case 0x6ac523:c.instructions+=1;goto B6ac523;
case 0x6ac528:goto L6ac528;
case 0x6ac52a:c.instructions+=1;goto B6ac52a;
case 0x6ac530:goto L6ac530;
case 0x6ac536:c.instructions+=3;goto B6ac536;
case 0x6ac538:c.instructions+=2;goto B6ac538;
case 0x6ac53d:c.instructions+=1;goto B6ac53d;
case 0x6ac53f:goto L6ac53f;
case 0x6ac544:c.instructions+=4;goto B6ac544;
case 0x6ac546:c.instructions+=3;goto B6ac546;
case 0x6ac54c:c.instructions+=2;goto B6ac54c;
case 0x6ac54e:c.instructions+=1;goto B6ac54e;
case 0x6ac553:goto L6ac553;
case 0x6ac555:c.instructions+=1;goto B6ac555;
case 0x6ac55b:goto L6ac55b;
case 0x6ac560:c.instructions+=4;goto B6ac560;
case 0x6ac562:c.instructions+=3;goto B6ac562;
case 0x6ac568:c.instructions+=2;goto B6ac568;
case 0x6ac56a:c.instructions+=1;goto B6ac56a;
case 0x6ac56f:goto L6ac56f;
case 0x6ac571:c.instructions+=1;goto B6ac571;
case 0x6ac577:goto L6ac577;
case 0x6ac57c:c.instructions+=4;goto B6ac57c;
case 0x6ac581:c.instructions+=3;goto B6ac581;
case 0x6ac587:c.instructions+=2;goto B6ac587;
case 0x6ac589:c.instructions+=1;goto B6ac589;
case 0x6ac58e:goto L6ac58e;
case 0x6ac590:c.instructions+=1;goto B6ac590;
case 0x6ac596:goto L6ac596;
case 0x6ac59b:c.instructions+=4;goto B6ac59b;
case 0x6ac5a0:c.instructions+=3;goto B6ac5a0;
case 0x6ac5a6:c.instructions+=2;goto B6ac5a6;
case 0x6ac5a8:c.instructions+=1;goto B6ac5a8;
case 0x6ac5ad:goto L6ac5ad;
case 0x6ac5af:c.instructions+=1;goto B6ac5af;
case 0x6ac5b1:goto L6ac5b1;
case 0x6ac5b7:c.instructions+=3;goto B6ac5b7;
case 0x6ac5b9:c.instructions+=2;goto B6ac5b9;
case 0x6ac5bb:c.instructions+=1;goto B6ac5bb;
case 0x6ac5bd:goto L6ac5bd;
case 0x6ac5be:c.instructions+=4;goto B6ac5be;
case 0x6ac5c3:c.instructions+=3;goto B6ac5c3;
case 0x6ac5c9:c.instructions+=2;goto B6ac5c9;
case 0x6ac5cb:c.instructions+=1;goto B6ac5cb;
case 0x6ac5d0:goto L6ac5d0;
case 0x6ac5d2:c.instructions+=1;goto B6ac5d2;
case 0x6ac5d4:goto L6ac5d4;
case 0x6ac5d7:c.instructions+=2;goto B6ac5d7;
case 0x6ac5d9:c.instructions+=1;goto B6ac5d9;
case 0x6ac5db:goto L6ac5db;
case 0x6ac5dc:c.instructions+=5;goto B6ac5dc;
case 0x6ac5e2:c.instructions+=4;goto B6ac5e2;
case 0x6ac5e5:c.instructions+=3;goto B6ac5e5;
case 0x6ac5e6:c.instructions+=2;goto B6ac5e6;
case 0x6ac5e8:c.instructions+=1;goto B6ac5e8;
case 0x6ac5ed:goto L6ac5ed;
case 0x6ac5ef:c.instructions+=1;goto B6ac5ef;
case 0x6ac5f1:goto L6ac5f1;
case 0x6ac5f2:c.instructions+=4;goto B6ac5f2;
case 0x6ac5f5:c.instructions+=3;goto B6ac5f5;
case 0x6ac5f6:c.instructions+=2;goto B6ac5f6;
case 0x6ac5f8:c.instructions+=1;goto B6ac5f8;
case 0x6ac5fd:goto L6ac5fd;
case 0x6ac5ff:c.instructions+=2;goto B6ac5ff;
case 0x6ac601:c.instructions+=1;goto B6ac601;
case 0x6ac603:goto L6ac603;
case 0x6ac608:c.instructions+=3;goto B6ac608;
case 0x6ac60a:c.instructions+=2;goto B6ac60a;
case 0x6ac610:c.instructions+=1;goto B6ac610;
case 0x6ac615:goto L6ac615;
case 0x6ac617:c.instructions+=2;goto B6ac617;
case 0x6ac619:c.instructions+=1;goto B6ac619;
case 0x6ac61b:goto L6ac61b;
case 0x6ac61e:c.instructions+=3;goto B6ac61e;
case 0x6ac620:c.instructions+=2;goto B6ac620;
case 0x6ac621:c.instructions+=1;goto B6ac621;
case 0x6ac626:goto L6ac626;
case 0x6ac628:goto L6ac628;
case 0x6ac629:goto L6ac629;
case 0x6ac62a:c.instructions+=3;goto B6ac62a;
case 0x6ac62b:c.instructions+=2;goto B6ac62b;
case 0x6ac62c:c.instructions+=1;goto B6ac62c;
case 0x6ac62d:goto L6ac62d;
case 0x6ac62f:c.instructions+=3;goto B6ac62f;
case 0x6ac632:c.instructions+=2;goto B6ac632;
case 0x6ac633:c.instructions+=1;goto B6ac633;
case 0x6ac638:goto L6ac638;
case 0x6ac63b:c.instructions+=3;goto B6ac63b;
case 0x6ac63c:c.instructions+=2;goto B6ac63c;
case 0x6ac63e:c.instructions+=1;goto B6ac63e;
case 0x6ac643:goto L6ac643;
case 0x6ac645:c.instructions+=1;goto B6ac645;
case 0x6ac647:goto L6ac647;
case 0x6ac64a:c.instructions+=5;goto B6ac64a;
case 0x6ac64d:c.instructions+=4;goto B6ac64d;
case 0x6ac653:c.instructions+=3;goto B6ac653;
case 0x6ac655:c.instructions+=2;goto B6ac655;
case 0x6ac656:c.instructions+=1;goto B6ac656;
case 0x6ac65b:goto L6ac65b;
case 0x6ac65d:c.instructions+=2;goto B6ac65d;
case 0x6ac65f:c.instructions+=1;goto B6ac65f;
case 0x6ac661:goto L6ac661;
case 0x6ac663:c.instructions+=4;goto B6ac663;
case 0x6ac666:c.instructions+=3;goto B6ac666;
case 0x6ac667:c.instructions+=2;goto B6ac667;
case 0x6ac669:c.instructions+=1;goto B6ac669;
case 0x6ac66e:goto L6ac66e;
case 0x6ac670:c.instructions+=2;goto B6ac670;
case 0x6ac672:c.instructions+=1;goto B6ac672;
case 0x6ac674:goto L6ac674;
case 0x6ac677:c.instructions+=3;goto B6ac677;
case 0x6ac678:c.instructions+=2;goto B6ac678;
case 0x6ac67a:c.instructions+=1;goto B6ac67a;
case 0x6ac67f:goto L6ac67f;
case 0x6ac681:c.instructions+=2;goto B6ac681;
case 0x6ac683:c.instructions+=1;goto B6ac683;
case 0x6ac685:goto L6ac685;
case 0x6ac688:c.instructions+=5;goto B6ac688;
case 0x6ac68b:c.instructions+=4;goto B6ac68b;
case 0x6ac691:c.instructions+=3;goto B6ac691;
case 0x6ac693:c.instructions+=2;goto B6ac693;
case 0x6ac694:c.instructions+=1;goto B6ac694;
case 0x6ac699:goto L6ac699;
case 0x6ac69b:c.instructions+=2;goto B6ac69b;
case 0x6ac69d:c.instructions+=1;goto B6ac69d;
case 0x6ac6a3:goto L6ac6a3;
case 0x6ac6a5:c.instructions+=4;goto B6ac6a5;
case 0x6ac6a8:c.instructions+=3;goto B6ac6a8;
case 0x6ac6a9:c.instructions+=2;goto B6ac6a9;
case 0x6ac6ab:c.instructions+=1;goto B6ac6ab;
case 0x6ac6b0:goto L6ac6b0;
case 0x6ac6b2:c.instructions+=2;goto B6ac6b2;
case 0x6ac6b4:c.instructions+=1;goto B6ac6b4;
case 0x6ac6ba:goto L6ac6ba;
case 0x6ac6bd:c.instructions+=3;goto B6ac6bd;
case 0x6ac6be:c.instructions+=2;goto B6ac6be;
case 0x6ac6c0:c.instructions+=1;goto B6ac6c0;
case 0x6ac6c5:goto L6ac6c5;
case 0x6ac6c7:c.instructions+=2;goto B6ac6c7;
case 0x6ac6c9:c.instructions+=1;goto B6ac6c9;
case 0x6ac6cf:goto L6ac6cf;
case 0x6ac6d6:c.instructions+=1;goto B6ac6d6;
case 0x6ac6dc:goto L6ac6dc;
case 0x6ac6de:c.instructions+=2;goto B6ac6de;
case 0x6ac6e1:c.instructions+=1;goto B6ac6e1;
case 0x6ac6e6:goto L6ac6e6;
case 0x6ac6e9:c.instructions+=2;goto B6ac6e9;
case 0x6ac6ec:c.instructions+=1;goto B6ac6ec;
case 0x6ac6f2:goto L6ac6f2;
case 0x6ac6f5:c.instructions+=6;goto B6ac6f5;
case 0x6ac6f8:c.instructions+=5;goto B6ac6f8;
case 0x6ac6fb:c.instructions+=4;goto B6ac6fb;
case 0x6ac6fd:c.instructions+=3;goto B6ac6fd;
case 0x6ac703:c.instructions+=2;goto B6ac703;
case 0x6ac709:c.instructions+=1;goto B6ac709;
case 0x6ac70f:goto L6ac70f;
case 0x6ac711:c.instructions+=4;goto B6ac711;
case 0x6ac714:c.instructions+=3;goto B6ac714;
case 0x6ac717:c.instructions+=2;goto B6ac717;
case 0x6ac71a:c.instructions+=1;goto B6ac71a;
case 0x6ac720:goto L6ac720;
case 0x6ac723:c.instructions+=13;goto B6ac723;
case 0x6ac726:c.instructions+=12;goto B6ac726;
case 0x6ac729:c.instructions+=11;goto B6ac729;
case 0x6ac72c:c.instructions+=10;goto B6ac72c;
case 0x6ac72f:c.instructions+=9;goto B6ac72f;
case 0x6ac732:c.instructions+=8;goto B6ac732;
case 0x6ac735:c.instructions+=7;goto B6ac735;
case 0x6ac738:c.instructions+=6;goto B6ac738;
case 0x6ac73b:c.instructions+=5;goto B6ac73b;
case 0x6ac73e:c.instructions+=4;goto B6ac73e;
case 0x6ac741:c.instructions+=3;goto B6ac741;
case 0x6ac744:c.instructions+=2;goto B6ac744;
case 0x6ac747:c.instructions+=1;goto B6ac747;
case 0x6ac749:goto L6ac749;
case 0x6ac74c:c.instructions+=2;goto B6ac74c;
case 0x6ac74f:c.instructions+=1;goto B6ac74f;
case 0x6ac751:goto L6ac751;
case 0x6ac754:c.instructions+=2;goto B6ac754;
case 0x6ac757:c.instructions+=1;goto B6ac757;
case 0x6ac759:goto L6ac759;
case 0x6ac75c:c.instructions+=2;goto B6ac75c;
case 0x6ac75f:c.instructions+=1;goto B6ac75f;
case 0x6ac761:goto L6ac761;
case 0x6ac764:c.instructions+=2;goto B6ac764;
case 0x6ac767:c.instructions+=1;goto B6ac767;
case 0x6ac769:goto L6ac769;
case 0x6ac76c:c.instructions+=2;goto B6ac76c;
case 0x6ac76f:c.instructions+=1;goto B6ac76f;
case 0x6ac771:goto L6ac771;
case 0x6ac773:c.instructions+=2;goto B6ac773;
case 0x6ac776:c.instructions+=1;goto B6ac776;
case 0x6ac778:goto L6ac778;
case 0x6ac77b:c.instructions+=1;goto B6ac77b;
case 0x6ac77d:goto L6ac77d;
case 0x6ac780:c.instructions+=2;goto B6ac780;
case 0x6ac782:c.instructions+=1;goto B6ac782;
case 0x6ac784:goto L6ac784;
case 0x6ac787:c.instructions+=2;goto B6ac787;
case 0x6ac78a:c.instructions+=1;goto B6ac78a;
case 0x6ac78d:goto L6ac78d;
case 0x6ac790:c.instructions+=2;goto B6ac790;
case 0x6ac793:c.instructions+=1;goto B6ac793;
case 0x6ac795:goto L6ac795;
case 0x6ac798:c.instructions+=10;goto B6ac798;
case 0x6ac79b:c.instructions+=9;goto B6ac79b;
case 0x6ac79e:c.instructions+=8;goto B6ac79e;
case 0x6ac7a1:c.instructions+=7;goto B6ac7a1;
case 0x6ac7a4:c.instructions+=6;goto B6ac7a4;
case 0x6ac7a7:c.instructions+=5;goto B6ac7a7;
case 0x6ac7aa:c.instructions+=4;goto B6ac7aa;
case 0x6ac7ad:c.instructions+=3;goto B6ac7ad;
case 0x6ac7ae:c.instructions+=2;goto B6ac7ae;
case 0x6ac7b1:c.instructions+=1;goto B6ac7b1;
case 0x6ac7b3:goto L6ac7b3;
case 0x6ac7b6:c.instructions+=3;goto B6ac7b6;
case 0x6ac7b9:c.instructions+=2;goto B6ac7b9;
case 0x6ac7bc:c.instructions+=1;goto B6ac7bc;
case 0x6ac7c2:goto L6ac7c2;
case 0x6ac7c5:c.instructions+=1;goto B6ac7c5;
case 0x6ac7c7:goto L6ac7c7;
case 0x6ac7c9:c.instructions+=10;goto B6ac7c9;
case 0x6ac7cf:c.instructions+=9;goto B6ac7cf;
case 0x6ac7d1:c.instructions+=8;goto B6ac7d1;
case 0x6ac7d7:c.instructions+=7;goto B6ac7d7;
case 0x6ac7d9:c.instructions+=6;goto B6ac7d9;
case 0x6ac7db:c.instructions+=5;goto B6ac7db;
case 0x6ac7dd:c.instructions+=4;goto B6ac7dd;
case 0x6ac7df:c.instructions+=3;goto B6ac7df;
case 0x6ac7e2:c.instructions+=2;goto B6ac7e2;
case 0x6ac7e5:c.instructions+=1;goto B6ac7e5;
case 0x6ac7ec:goto L6ac7ec;
case 0x6ac7ef:c.instructions+=3;goto B6ac7ef;
case 0x6ac7f2:c.instructions+=2;goto B6ac7f2;
case 0x6ac7f5:c.instructions+=1;goto B6ac7f5;
case 0x6ac7fb:goto L6ac7fb;
case 0x6ac7fe:c.instructions+=1;goto B6ac7fe;
case 0x6ac800:goto L6ac800;
case 0x6ac802:c.instructions+=1;goto B6ac802;
case 0x6ac807:goto L6ac807;
case 0x6ac809:c.instructions+=1;goto B6ac809;
case 0x6ac80f:goto L6ac80f;
case 0x6ac814:goto L6ac814;
case 0x6ac816:c.instructions+=1;goto B6ac816;
case 0x6ac81c:goto L6ac81c;
case 0x6ac81e:c.instructions+=1;goto B6ac81e;
case 0x6ac823:goto L6ac823;
case 0x6ac825:c.instructions+=1;goto B6ac825;
case 0x6ac82b:goto L6ac82b;
case 0x6ac82d:c.instructions+=1;goto B6ac82d;
case 0x6ac832:goto L6ac832;
case 0x6ac834:c.instructions+=7;goto B6ac834;
case 0x6ac835:c.instructions+=6;goto B6ac835;
case 0x6ac837:c.instructions+=5;goto B6ac837;
case 0x6ac838:c.instructions+=4;goto B6ac838;
case 0x6ac839:c.instructions+=3;goto B6ac839;
case 0x6ac83a:c.instructions+=2;goto B6ac83a;
case 0x6ac83c:c.instructions+=1;goto B6ac83c;
case 0x6ac841:goto L6ac841;
case 0x6ac843:c.instructions+=2;goto B6ac843;
case 0x6ac845:c.instructions+=1;goto B6ac845;
case 0x6ac84b:goto L6ac84b;
case 0x6ac84d:c.instructions+=1;goto B6ac84d;
case 0x6ac852:goto L6ac852;
case 0x6ac854:c.instructions+=1;goto B6ac854;
case 0x6ac85a:goto L6ac85a;
case 0x6ac85c:c.instructions+=1;goto B6ac85c;
case 0x6ac861:goto L6ac861;
case 0x6ac863:c.instructions+=1;goto B6ac863;
case 0x6ac869:goto L6ac869;
case 0x6ac86b:c.instructions+=1;goto B6ac86b;
case 0x6ac870:goto L6ac870;
case 0x6ac872:c.instructions+=1;goto B6ac872;
case 0x6ac878:goto L6ac878;
case 0x6ac87a:c.instructions+=1;goto B6ac87a;
case 0x6ac87f:goto L6ac87f;
case 0x6ac881:c.instructions+=1;goto B6ac881;
case 0x6ac887:goto L6ac887;
case 0x6ac889:c.instructions+=2;goto B6ac889;
case 0x6ac88c:c.instructions+=1;goto B6ac88c;
case 0x6ac88e:goto L6ac88e;
case 0x6ac891:c.instructions+=5;goto B6ac891;
case 0x6ac894:c.instructions+=4;goto B6ac894;
case 0x6ac896:c.instructions+=3;goto B6ac896;
case 0x6ac89c:c.instructions+=2;goto B6ac89c;
case 0x6ac8a2:c.instructions+=1;goto B6ac8a2;
case 0x6ac8a4:goto L6ac8a4;
case 0x6ac8a7:c.instructions+=3;goto B6ac8a7;
case 0x6ac8ad:c.instructions+=2;goto B6ac8ad;
case 0x6ac8b3:c.instructions+=1;goto B6ac8b3;
case 0x6ac8b5:goto L6ac8b5;
case 0x6ac8b6:c.instructions+=2;goto B6ac8b6;
case 0x6ac8b9:c.instructions+=1;goto B6ac8b9;
case 0x6ac8bb:goto L6ac8bb;
case 0x6ac8c2:c.instructions+=1;goto B6ac8c2;
case 0x6ac8c4:goto L6ac8c4;
case 0x6ac8ce:c.instructions+=2;goto B6ac8ce;
case 0x6ac8d0:c.instructions+=1;goto B6ac8d0;
case 0x6ac8d5:goto L6ac8d5;
case 0x6ac8d7:c.instructions+=1;goto B6ac8d7;
case 0x6ac8dc:goto L6ac8dc;
case 0x6ac8de:c.instructions+=1;goto B6ac8de;
case 0x6ac8e4:goto L6ac8e4;
case 0x6ac8e6:c.instructions+=1;goto B6ac8e6;
case 0x6ac8eb:goto L6ac8eb;
case 0x6ac8ed:c.instructions+=1;goto B6ac8ed;
case 0x6ac8f3:goto L6ac8f3;
case 0x6ac8f6:c.instructions+=1;goto B6ac8f6;
case 0x6ac8f7:goto L6ac8f7;
case 0x6ac8f9:c.instructions+=1;goto B6ac8f9;
case 0x6ac8fe:goto L6ac8fe;
case 0x6ac900:c.instructions+=1;goto B6ac900;
case 0x6ac902:goto L6ac902;
case 0x6ac904:c.instructions+=1;goto B6ac904;
case 0x6ac906:goto L6ac906;
case 0x6ac90c:goto L6ac90c;
case 0x6ac90e:c.instructions+=5;goto B6ac90e;
case 0x6ac910:c.instructions+=4;goto B6ac910;
case 0x6ac913:c.instructions+=3;goto B6ac913;
case 0x6ac915:c.instructions+=2;goto B6ac915;
case 0x6ac917:c.instructions+=1;goto B6ac917;
case 0x6ac91c:goto L6ac91c;
case 0x6ac91e:c.instructions+=1;goto B6ac91e;
case 0x6ac920:goto L6ac920;
case 0x6ac922:c.instructions+=1;goto B6ac922;
case 0x6ac924:goto L6ac924;
case 0x6ac92a:goto L6ac92a;
case 0x6ac92c:c.instructions+=5;goto B6ac92c;
case 0x6ac92e:c.instructions+=4;goto B6ac92e;
case 0x6ac931:c.instructions+=3;goto B6ac931;
case 0x6ac933:c.instructions+=2;goto B6ac933;
case 0x6ac935:c.instructions+=1;goto B6ac935;
case 0x6ac93a:goto L6ac93a;
case 0x6ac93c:c.instructions+=1;goto B6ac93c;
case 0x6ac93e:goto L6ac93e;
case 0x6ac940:c.instructions+=1;goto B6ac940;
case 0x6ac942:goto L6ac942;
case 0x6ac948:goto L6ac948;
case 0x6ac94a:c.instructions+=6;goto B6ac94a;
case 0x6ac94c:c.instructions+=5;goto B6ac94c;
case 0x6ac94f:c.instructions+=4;goto B6ac94f;
case 0x6ac950:c.instructions+=3;goto B6ac950;
case 0x6ac952:c.instructions+=2;goto B6ac952;
case 0x6ac954:c.instructions+=1;goto B6ac954;
case 0x6ac959:goto L6ac959;
case 0x6ac95b:c.instructions+=1;goto B6ac95b;
case 0x6ac95d:goto L6ac95d;
case 0x6ac95f:c.instructions+=1;goto B6ac95f;
case 0x6ac961:goto L6ac961;
case 0x6ac967:goto L6ac967;
case 0x6ac969:c.instructions+=5;goto B6ac969;
case 0x6ac96b:c.instructions+=4;goto B6ac96b;
case 0x6ac96e:c.instructions+=3;goto B6ac96e;
case 0x6ac970:c.instructions+=2;goto B6ac970;
case 0x6ac972:c.instructions+=1;goto B6ac972;
case 0x6ac977:goto L6ac977;
case 0x6ac979:c.instructions+=1;goto B6ac979;
case 0x6ac97b:goto L6ac97b;
case 0x6ac97d:c.instructions+=1;goto B6ac97d;
case 0x6ac97f:goto L6ac97f;
case 0x6ac985:goto L6ac985;
case 0x6ac987:c.instructions+=5;goto B6ac987;
case 0x6ac989:c.instructions+=4;goto B6ac989;
case 0x6ac98c:c.instructions+=3;goto B6ac98c;
case 0x6ac98e:c.instructions+=2;goto B6ac98e;
case 0x6ac990:c.instructions+=1;goto B6ac990;
case 0x6ac995:goto L6ac995;
case 0x6ac997:c.instructions+=1;goto B6ac997;
case 0x6ac999:goto L6ac999;
case 0x6ac99b:c.instructions+=1;goto B6ac99b;
case 0x6ac99d:goto L6ac99d;
case 0x6ac9a3:goto L6ac9a3;
case 0x6ac9a5:c.instructions+=5;goto B6ac9a5;
case 0x6ac9a7:c.instructions+=4;goto B6ac9a7;
case 0x6ac9aa:c.instructions+=3;goto B6ac9aa;
case 0x6ac9ac:c.instructions+=2;goto B6ac9ac;
case 0x6ac9ae:c.instructions+=1;goto B6ac9ae;
case 0x6ac9b3:goto L6ac9b3;
case 0x6ac9b5:c.instructions+=1;goto B6ac9b5;
case 0x6ac9b7:goto L6ac9b7;
case 0x6ac9b9:c.instructions+=1;goto B6ac9b9;
case 0x6ac9bb:goto L6ac9bb;
case 0x6ac9c1:goto L6ac9c1;
case 0x6ac9c3:c.instructions+=5;goto B6ac9c3;
case 0x6ac9c5:c.instructions+=4;goto B6ac9c5;
case 0x6ac9c8:c.instructions+=3;goto B6ac9c8;
case 0x6ac9ca:c.instructions+=2;goto B6ac9ca;
case 0x6ac9cc:c.instructions+=1;goto B6ac9cc;
case 0x6ac9d1:goto L6ac9d1;
case 0x6ac9d3:c.instructions+=1;goto B6ac9d3;
case 0x6ac9d5:goto L6ac9d5;
case 0x6ac9d7:c.instructions+=1;goto B6ac9d7;
case 0x6ac9d9:goto L6ac9d9;
case 0x6ac9df:goto L6ac9df;
case 0x6ac9e1:c.instructions+=5;goto B6ac9e1;
case 0x6ac9e3:c.instructions+=4;goto B6ac9e3;
case 0x6ac9e6:c.instructions+=3;goto B6ac9e6;
case 0x6ac9e8:c.instructions+=2;goto B6ac9e8;
case 0x6ac9ea:c.instructions+=1;goto B6ac9ea;
case 0x6ac9ef:goto L6ac9ef;
case 0x6ac9f1:c.instructions+=1;goto B6ac9f1;
case 0x6ac9f3:goto L6ac9f3;
case 0x6ac9f5:c.instructions+=1;goto B6ac9f5;
case 0x6ac9f7:goto L6ac9f7;
case 0x6ac9fd:goto L6ac9fd;
case 0x6ac9ff:c.instructions+=4;goto B6ac9ff;
case 0x6aca01:c.instructions+=3;goto B6aca01;
case 0x6aca04:c.instructions+=2;goto B6aca04;
case 0x6aca06:c.instructions+=1;goto B6aca06;
case 0x6aca08:goto L6aca08;
case 0x6aca0b:c.instructions+=2;goto B6aca0b;
case 0x6aca12:c.instructions+=1;goto B6aca12;
case 0x6aca18:goto L6aca18;
case 0x6aca1f:c.instructions+=1;goto B6aca1f;
case 0x6aca21:goto L6aca21;
case 0x6aca26:c.instructions+=4;goto B6aca26;
case 0x6aca27:c.instructions+=3;goto B6aca27;
case 0x6aca28:c.instructions+=2;goto B6aca28;
case 0x6aca29:c.instructions+=1;goto B6aca29;
case 0x6aca2e:goto L6aca2e;
case 0x6aca31:goto L6aca31;
case 0x6aca33:c.instructions+=2;goto B6aca33;
case 0x6aca36:c.instructions+=1;goto B6aca36;
case 0x6aca38:goto L6aca38;
case 0x6aca3b:c.instructions+=7;goto B6aca3b;
case 0x6aca3e:c.instructions+=6;goto B6aca3e;
case 0x6aca41:c.instructions+=5;goto B6aca41;
case 0x6aca44:c.instructions+=4;goto B6aca44;
case 0x6aca47:c.instructions+=3;goto B6aca47;
case 0x6aca4a:c.instructions+=2;goto B6aca4a;
case 0x6aca4d:c.instructions+=1;goto B6aca4d;
case 0x6aca4f:goto L6aca4f;
case 0x6aca52:c.instructions+=1;goto B6aca52;
case 0x6aca54:goto L6aca54;
case 0x6aca57:c.instructions+=3;goto B6aca57;
case 0x6aca5b:c.instructions+=2;goto B6aca5b;
case 0x6aca5f:c.instructions+=1;goto B6aca5f;
case 0x6aca62:goto L6aca62;
case 0x6aca63:c.instructions+=2;goto B6aca63;
case 0x6aca66:c.instructions+=1;goto B6aca66;
case 0x6aca68:goto L6aca68;
case 0x6aca6a:c.instructions+=1;goto B6aca6a;
case 0x6aca6f:goto L6aca6f;
case 0x6aca71:c.instructions+=1;goto B6aca71;
case 0x6aca73:goto L6aca73;
case 0x6aca75:c.instructions+=1;goto B6aca75;
case 0x6aca7a:goto L6aca7a;
case 0x6aca7c:c.instructions+=1;goto B6aca7c;
case 0x6aca7e:goto L6aca7e;
case 0x6aca80:c.instructions+=1;goto B6aca80;
case 0x6aca85:goto L6aca85;
case 0x6aca87:c.instructions+=1;goto B6aca87;
case 0x6aca89:goto L6aca89;
case 0x6aca8b:c.instructions+=1;goto B6aca8b;
case 0x6aca90:goto L6aca90;
case 0x6aca92:c.instructions+=1;goto B6aca92;
case 0x6aca94:goto L6aca94;
case 0x6aca96:c.instructions+=1;goto B6aca96;
case 0x6aca9b:goto L6aca9b;
case 0x6aca9d:c.instructions+=1;goto B6aca9d;
case 0x6aca9f:goto L6aca9f;
case 0x6acaa9:c.instructions+=1;goto B6acaa9;
case 0x6acaab:goto L6acaab;
case 0x6acaac:goto L6acaac;
case 0x6acaad:c.instructions+=3;goto B6acaad;
case 0x6acaae:c.instructions+=2;goto B6acaae;
case 0x6acaaf:c.instructions+=1;goto B6acaaf;
case 0x6acab0:goto L6acab0;
case 0x6acab2:c.instructions+=3;goto B6acab2;
case 0x6acab3:c.instructions+=2;goto B6acab3;
case 0x6acab5:c.instructions+=1;goto B6acab5;
case 0x6acaba:goto L6acaba;
case 0x6acabc:c.instructions+=1;goto B6acabc;
case 0x6acac2:goto L6acac2;
case 0x6acac4:c.instructions+=1;goto B6acac4;
case 0x6acac9:goto L6acac9;
case 0x6acacb:c.instructions+=1;goto B6acacb;
case 0x6acad1:goto L6acad1;
case 0x6acad2:c.instructions+=5;goto B6acad2;
case 0x6acad4:c.instructions+=4;goto B6acad4;
case 0x6acad5:c.instructions+=3;goto B6acad5;
case 0x6acad6:c.instructions+=2;goto B6acad6;
case 0x6acad8:c.instructions+=1;goto B6acad8;
case 0x6acadd:goto L6acadd;
case 0x6acadf:c.instructions+=1;goto B6acadf;
case 0x6acae5:goto L6acae5;
case 0x6acae6:c.instructions+=1;goto B6acae6;
case 0x6acae8:goto L6acae8;
case 0x6acae9:c.instructions+=2;goto B6acae9;
case 0x6acaeb:c.instructions+=1;goto B6acaeb;
case 0x6acaf0:goto L6acaf0;
case 0x6acaf2:c.instructions+=1;goto B6acaf2;
case 0x6acaf4:goto L6acaf4;
case 0x6acafa:goto L6acafa;
case 0x6acafc:c.instructions+=1;goto B6acafc;
case 0x6acafe:goto L6acafe;
case 0x6acaff:c.instructions+=2;goto B6acaff;
case 0x6acb05:c.instructions+=1;goto B6acb05;
case 0x6acb07:goto L6acb07;
case 0x6acb09:c.instructions+=1;goto B6acb09;
case 0x6acb0e:goto L6acb0e;
case 0x6acb10:c.instructions+=1;goto B6acb10;
case 0x6acb16:goto L6acb16;
case 0x6acb18:c.instructions+=1;goto B6acb18;
case 0x6acb1d:goto L6acb1d;
case 0x6acb1f:c.instructions+=1;goto B6acb1f;
case 0x6acb25:goto L6acb25;
case 0x6acb27:c.instructions+=2;goto B6acb27;
case 0x6acb29:c.instructions+=1;goto B6acb29;
case 0x6acb2c:goto L6acb2c;
case 0x6acb2e:c.instructions+=1;goto B6acb2e;
case 0x6acb34:goto L6acb34;
case 0x6acb36:c.instructions+=2;goto B6acb36;
case 0x6acb38:c.instructions+=1;goto B6acb38;
case 0x6acb3d:goto L6acb3d;
case 0x6acb3f:c.instructions+=1;goto B6acb3f;
case 0x6acb41:goto L6acb41;
case 0x6acb43:c.instructions+=1;goto B6acb43;
case 0x6acb48:goto L6acb48;
case 0x6acb4a:c.instructions+=1;goto B6acb4a;
case 0x6acb4c:goto L6acb4c;
case 0x6acb4e:c.instructions+=2;goto B6acb4e;
case 0x6acb54:c.instructions+=1;goto B6acb54;
case 0x6acb59:goto L6acb59;
case 0x6acb5b:c.instructions+=1;goto B6acb5b;
case 0x6acb5d:goto L6acb5d;
case 0x6acb5f:c.instructions+=1;goto B6acb5f;
case 0x6acb64:goto L6acb64;
case 0x6acb66:c.instructions+=1;goto B6acb66;
case 0x6acb68:goto L6acb68;
case 0x6acb6a:c.instructions+=1;goto B6acb6a;
case 0x6acb6f:goto L6acb6f;
case 0x6acb71:c.instructions+=1;goto B6acb71;
case 0x6acb73:goto L6acb73;
case 0x6acb75:c.instructions+=2;goto B6acb75;
case 0x6acb77:c.instructions+=1;goto B6acb77;
case 0x6acb7a:goto L6acb7a;
case 0x6acb7c:c.instructions+=1;goto B6acb7c;
case 0x6acb7e:goto L6acb7e;
case 0x6acb80:c.instructions+=2;goto B6acb80;
case 0x6acb82:c.instructions+=1;goto B6acb82;
case 0x6acb85:goto L6acb85;
case 0x6acb87:c.instructions+=1;goto B6acb87;
case 0x6acb89:goto L6acb89;
case 0x6acb8b:c.instructions+=1;goto B6acb8b;
case 0x6acb90:goto L6acb90;
case 0x6acb92:c.instructions+=1;goto B6acb92;
case 0x6acb94:goto L6acb94;
case 0x6acb96:c.instructions+=1;goto B6acb96;
case 0x6acb9b:goto L6acb9b;
case 0x6acb9d:c.instructions+=1;goto B6acb9d;
case 0x6acb9f:goto L6acb9f;
case 0x6acba1:c.instructions+=1;goto B6acba1;
case 0x6acba6:goto L6acba6;
case 0x6acba8:c.instructions+=1;goto B6acba8;
case 0x6acbaa:goto L6acbaa;
case 0x6acbac:c.instructions+=1;goto B6acbac;
case 0x6acbb1:goto L6acbb1;
case 0x6acbb3:c.instructions+=1;goto B6acbb3;
case 0x6acbb5:goto L6acbb5;
case 0x6acbb7:goto L6acbb7;
case 0x6acbb8:goto L6acbb8;
case 0x6acbb9:goto L6acbb9;
case 0x6acbba:c.instructions+=1;goto B6acbba;
case 0x6acbbb:goto L6acbbb;
case 0x6acbbd:c.instructions+=9;goto B6acbbd;
case 0x6acbbe:c.instructions+=8;goto B6acbbe;
case 0x6acbc0:c.instructions+=7;goto B6acbc0;
case 0x6acbc3:c.instructions+=6;goto B6acbc3;
case 0x6acbc4:c.instructions+=5;goto B6acbc4;
case 0x6acbc6:c.instructions+=4;goto B6acbc6;
case 0x6acbcd:c.instructions+=3;goto B6acbcd;
case 0x6acbd4:c.instructions+=2;goto B6acbd4;
case 0x6acbd6:c.instructions+=1;goto B6acbd6;
case 0x6acbd8:goto L6acbd8;
case 0x6acbdb:goto L6acbdb;
case 0x6acbdd:c.instructions+=1;goto B6acbdd;
case 0x6acbe2:goto L6acbe2;
case 0x6acbe4:c.instructions+=1;goto B6acbe4;
case 0x6acbe6:goto L6acbe6;
case 0x6acbe8:c.instructions+=1;goto B6acbe8;
case 0x6acbed:goto L6acbed;
case 0x6acbef:c.instructions+=1;goto B6acbef;
case 0x6acbf1:goto L6acbf1;
case 0x6acbf3:goto L6acbf3;
case 0x6acbf4:c.instructions+=2;goto B6acbf4;
case 0x6acbf5:c.instructions+=1;goto B6acbf5;
case 0x6acbf8:goto L6acbf8;
case 0x6acbfa:c.instructions+=5;goto B6acbfa;
case 0x6acbfb:c.instructions+=4;goto B6acbfb;
case 0x6acbfd:c.instructions+=3;goto B6acbfd;
case 0x6acbfe:c.instructions+=2;goto B6acbfe;
case 0x6acc00:c.instructions+=1;goto B6acc00;
case 0x6acc05:goto L6acc05;
case 0x6acc08:c.instructions+=9;goto B6acc08;
case 0x6acc0e:c.instructions+=8;goto B6acc0e;
case 0x6acc14:c.instructions+=7;goto B6acc14;
case 0x6acc1e:c.instructions+=6;goto B6acc1e;
case 0x6acc28:c.instructions+=5;goto B6acc28;
case 0x6acc32:c.instructions+=4;goto B6acc32;
case 0x6acc34:c.instructions+=3;goto B6acc34;
case 0x6acc35:c.instructions+=2;goto B6acc35;
case 0x6acc36:c.instructions+=1;goto B6acc36;
case 0x6acc39:goto L6acc39;
case 0x6acc3f:c.instructions+=5;goto B6acc3f;
case 0x6acc44:c.instructions+=4;goto B6acc44;
case 0x6acc45:c.instructions+=3;goto B6acc45;
case 0x6acc46:c.instructions+=2;goto B6acc46;
case 0x6acc4c:c.instructions+=1;goto B6acc4c;
case 0x6acc52:goto L6acc52;
case 0x6acc57:c.instructions+=1;goto B6acc57;
case 0x6acc59:goto L6acc59;
case 0x6acc5e:c.instructions+=1;goto B6acc5e;
case 0x6acc60:goto L6acc60;
case 0x6acc65:c.instructions+=1;goto B6acc65;
case 0x6acc67:goto L6acc67;
case 0x6acc6c:c.instructions+=4;goto B6acc6c;
case 0x6acc6e:c.instructions+=3;goto B6acc6e;
case 0x6acc70:c.instructions+=2;goto B6acc70;
case 0x6acc71:c.instructions+=1;goto B6acc71;
case 0x6acc76:goto L6acc76;
case 0x6acc79:c.instructions+=2;goto B6acc79;
case 0x6acc7e:c.instructions+=1;goto B6acc7e;
case 0x6acc83:goto L6acc83;
case 0x6acc87:c.instructions+=13;goto B6acc87;
case 0x6acc8e:c.instructions+=12;goto B6acc8e;
case 0x6acc90:c.instructions+=11;goto B6acc90;
case 0x6acc91:c.instructions+=10;goto B6acc91;
case 0x6acc93:c.instructions+=9;goto B6acc93;
case 0x6acc94:c.instructions+=8;goto B6acc94;
case 0x6acc96:c.instructions+=7;goto B6acc96;
case 0x6acc98:c.instructions+=6;goto B6acc98;
case 0x6acc99:c.instructions+=5;goto B6acc99;
case 0x6acc9a:c.instructions+=4;goto B6acc9a;
case 0x6acca0:c.instructions+=3;goto B6acca0;
case 0x6acca3:c.instructions+=2;goto B6acca3;
case 0x6acca6:c.instructions+=1;goto B6acca6;
case 0x6acca8:goto L6acca8;
case 0x6accaf:c.instructions+=15;goto B6accaf;
case 0x6accb1:c.instructions+=14;goto B6accb1;
case 0x6accb2:c.instructions+=13;goto B6accb2;
case 0x6accb4:c.instructions+=12;goto B6accb4;
case 0x6accb5:c.instructions+=11;goto B6accb5;
case 0x6accbb:c.instructions+=10;goto B6accbb;
case 0x6accc0:c.instructions+=9;goto B6accc0;
case 0x6accc2:c.instructions+=8;goto B6accc2;
case 0x6accc3:c.instructions+=7;goto B6accc3;
case 0x6accc6:c.instructions+=6;goto B6accc6;
case 0x6accc9:c.instructions+=5;goto B6accc9;
case 0x6acccc:c.instructions+=4;goto B6acccc;
case 0x6acccf:c.instructions+=3;goto B6acccf;
case 0x6accd6:c.instructions+=2;goto B6accd6;
case 0x6accd9:c.instructions+=1;goto B6accd9;
case 0x6accdb:goto L6accdb;
case 0x6acce2:c.instructions+=11;goto B6acce2;
case 0x6acce4:c.instructions+=10;goto B6acce4;
case 0x6acce5:c.instructions+=9;goto B6acce5;
case 0x6acce7:c.instructions+=8;goto B6acce7;
case 0x6acce8:c.instructions+=7;goto B6acce8;
case 0x6accea:c.instructions+=6;goto B6accea;
case 0x6accec:c.instructions+=5;goto B6accec;
case 0x6acced:c.instructions+=4;goto B6acced;
case 0x6accf3:c.instructions+=3;goto B6accf3;
case 0x6accf4:c.instructions+=2;goto B6accf4;
case 0x6accf7:c.instructions+=1;goto B6accf7;
case 0x6accfa:goto L6accfa;
case 0x6accfd:c.instructions+=3;goto B6accfd;
case 0x6acd00:c.instructions+=2;goto B6acd00;
case 0x6acd07:c.instructions+=1;goto B6acd07;
case 0x6acd0a:goto L6acd0a;
case 0x6acd0e:c.instructions+=10;goto B6acd0e;
case 0x6acd11:c.instructions+=9;goto B6acd11;
case 0x6acd14:c.instructions+=8;goto B6acd14;
case 0x6acd17:c.instructions+=7;goto B6acd17;
case 0x6acd1e:c.instructions+=6;goto B6acd1e;
case 0x6acd25:c.instructions+=5;goto B6acd25;
case 0x6acd28:c.instructions+=4;goto B6acd28;
case 0x6acd2f:c.instructions+=3;goto B6acd2f;
case 0x6acd35:c.instructions+=2;goto B6acd35;
case 0x6acd3b:c.instructions+=1;goto B6acd3b;
case 0x6acd3d:goto L6acd3d;
case 0x6acd3e:c.instructions+=2;goto B6acd3e;
case 0x6acd3f:c.instructions+=1;goto B6acd3f;
case 0x6acd40:goto L6acd40;
case 0x6acd42:c.instructions+=9;goto B6acd42;
case 0x6acd43:c.instructions+=8;goto B6acd43;
case 0x6acd45:c.instructions+=7;goto B6acd45;
case 0x6acd48:c.instructions+=6;goto B6acd48;
case 0x6acd49:c.instructions+=5;goto B6acd49;
case 0x6acd4b:c.instructions+=4;goto B6acd4b;
case 0x6acd4d:c.instructions+=3;goto B6acd4d;
case 0x6acd4f:c.instructions+=2;goto B6acd4f;
case 0x6acd55:c.instructions+=1;goto B6acd55;
case 0x6acd5b:goto L6acd5b;
case 0x6acd5f:c.instructions+=6;goto B6acd5f;
case 0x6acd60:c.instructions+=5;goto B6acd60;
case 0x6acd61:c.instructions+=4;goto B6acd61;
case 0x6acd64:c.instructions+=3;goto B6acd64;
case 0x6acd67:c.instructions+=2;goto B6acd67;
case 0x6acd6a:c.instructions+=1;goto B6acd6a;
case 0x6acd70:goto L6acd70;
case 0x6acd73:c.instructions+=7;goto B6acd73;
case 0x6acd76:c.instructions+=6;goto B6acd76;
case 0x6acd77:c.instructions+=5;goto B6acd77;
case 0x6acd78:c.instructions+=4;goto B6acd78;
case 0x6acd79:c.instructions+=3;goto B6acd79;
case 0x6acd7c:c.instructions+=2;goto B6acd7c;
case 0x6acd7d:c.instructions+=1;goto B6acd7d;
case 0x6acd83:goto L6acd83;
case 0x6acd86:c.instructions+=7;goto B6acd86;
case 0x6acd89:c.instructions+=6;goto B6acd89;
case 0x6acd8c:c.instructions+=5;goto B6acd8c;
case 0x6acd8f:c.instructions+=4;goto B6acd8f;
case 0x6acd92:c.instructions+=3;goto B6acd92;
case 0x6acd95:c.instructions+=2;goto B6acd95;
case 0x6acd99:c.instructions+=1;goto B6acd99;
case 0x6acd9b:goto L6acd9b;
case 0x6acd9e:c.instructions+=3;goto B6acd9e;
case 0x6acda0:c.instructions+=2;goto B6acda0;
case 0x6acda2:c.instructions+=1;goto B6acda2;
case 0x6acda5:goto L6acda5;
case 0x6acda8:c.instructions+=4;goto B6acda8;
case 0x6acdaa:c.instructions+=3;goto B6acdaa;
case 0x6acdac:c.instructions+=2;goto B6acdac;
case 0x6acdae:c.instructions+=1;goto B6acdae;
case 0x6acdb1:goto L6acdb1;
case 0x6acdb3:c.instructions+=2;goto B6acdb3;
case 0x6acdb4:c.instructions+=1;goto B6acdb4;
case 0x6acdb6:goto L6acdb6;
case 0x6acdb9:c.instructions+=1;goto B6acdb9;
case 0x6acdbb:goto L6acdbb;
case 0x6acdbd:c.instructions+=1;goto B6acdbd;
case 0x6acdbf:goto L6acdbf;
case 0x6acdc2:c.instructions+=1;goto B6acdc2;
case 0x6acdc4:goto L6acdc4;
case 0x6acdc7:c.instructions+=1;goto B6acdc7;
case 0x6acdc9:goto L6acdc9;
case 0x6acdce:c.instructions+=4;goto B6acdce;
case 0x6acdd3:c.instructions+=3;goto B6acdd3;
case 0x6acdd6:c.instructions+=2;goto B6acdd6;
case 0x6acdd7:c.instructions+=1;goto B6acdd7;
case 0x6acddc:goto L6acddc;
case 0x6acdde:c.instructions+=5;goto B6acdde;
case 0x6acde1:c.instructions+=4;goto B6acde1;
case 0x6acde2:c.instructions+=3;goto B6acde2;
case 0x6acde5:c.instructions+=2;goto B6acde5;
case 0x6acde8:c.instructions+=1;goto B6acde8;
case 0x6acdea:goto L6acdea;
case 0x6acdec:c.instructions+=1;goto B6acdec;
case 0x6acdee:goto L6acdee;
case 0x6acdf1:c.instructions+=3;goto B6acdf1;
case 0x6acdf9:c.instructions+=2;goto B6acdf9;
case 0x6acdfc:c.instructions+=1;goto B6acdfc;
case 0x6acdff:goto L6acdff;
case 0x6ace02:c.instructions+=3;goto B6ace02;
case 0x6ace05:c.instructions+=2;goto B6ace05;
case 0x6ace08:c.instructions+=1;goto B6ace08;
case 0x6ace0e:goto L6ace0e;
case 0x6ace10:goto L6ace10;
case 0x6ace12:c.instructions+=1;goto B6ace12;
case 0x6ace14:goto L6ace14;
case 0x6ace18:c.instructions+=1;goto B6ace18;
case 0x6ace1a:goto L6ace1a;
case 0x6ace1b:goto L6ace1b;
case 0x6ace1c:c.instructions+=2;goto B6ace1c;
case 0x6ace1f:c.instructions+=1;goto B6ace1f;
case 0x6ace21:goto L6ace21;
case 0x6ace24:c.instructions+=1;goto B6ace24;
case 0x6ace2a:goto L6ace2a;
case 0x6ace2f:c.instructions+=3;goto B6ace2f;
case 0x6ace34:c.instructions+=2;goto B6ace34;
case 0x6ace37:c.instructions+=1;goto B6ace37;
case 0x6ace3c:goto L6ace3c;
case 0x6ace3e:c.instructions+=2;goto B6ace3e;
case 0x6ace3f:c.instructions+=1;goto B6ace3f;
case 0x6ace42:goto L6ace42;
case 0x6ace44:goto L6ace44;
case 0x6ace46:c.instructions+=9;goto B6ace46;
case 0x6ace49:c.instructions+=8;goto B6ace49;
case 0x6ace4a:c.instructions+=7;goto B6ace4a;
case 0x6ace4b:c.instructions+=6;goto B6ace4b;
case 0x6ace4d:c.instructions+=5;goto B6ace4d;
case 0x6ace4e:c.instructions+=4;goto B6ace4e;
case 0x6ace4f:c.instructions+=3;goto B6ace4f;
case 0x6ace52:c.instructions+=2;goto B6ace52;
case 0x6ace53:c.instructions+=1;goto B6ace53;
case 0x6ace59:goto L6ace59;
case 0x6ace5c:c.instructions+=7;goto B6ace5c;
case 0x6ace5f:c.instructions+=6;goto B6ace5f;
case 0x6ace62:c.instructions+=5;goto B6ace62;
case 0x6ace65:c.instructions+=4;goto B6ace65;
case 0x6ace68:c.instructions+=3;goto B6ace68;
case 0x6ace6b:c.instructions+=2;goto B6ace6b;
case 0x6ace6f:c.instructions+=1;goto B6ace6f;
case 0x6ace71:goto L6ace71;
case 0x6ace74:c.instructions+=3;goto B6ace74;
case 0x6ace76:c.instructions+=2;goto B6ace76;
case 0x6ace78:c.instructions+=1;goto B6ace78;
case 0x6ace7b:goto L6ace7b;
case 0x6ace7e:c.instructions+=4;goto B6ace7e;
case 0x6ace81:c.instructions+=3;goto B6ace81;
case 0x6ace83:c.instructions+=2;goto B6ace83;
case 0x6ace85:c.instructions+=1;goto B6ace85;
case 0x6ace88:goto L6ace88;
case 0x6ace8b:c.instructions+=2;goto B6ace8b;
case 0x6ace8e:c.instructions+=1;goto B6ace8e;
case 0x6ace90:goto L6ace90;
case 0x6ace91:c.instructions+=2;goto B6ace91;
case 0x6ace92:c.instructions+=1;goto B6ace92;
case 0x6ace94:goto L6ace94;
case 0x6ace96:c.instructions+=1;goto B6ace96;
case 0x6ace98:goto L6ace98;
case 0x6ace9b:c.instructions+=1;goto B6ace9b;
case 0x6ace9d:goto L6ace9d;
case 0x6acea0:c.instructions+=1;goto B6acea0;
case 0x6acea2:goto L6acea2;
case 0x6acea7:c.instructions+=4;goto B6acea7;
case 0x6aceac:c.instructions+=3;goto B6aceac;
case 0x6aceaf:c.instructions+=2;goto B6aceaf;
case 0x6aceb0:c.instructions+=1;goto B6aceb0;
case 0x6aceb5:goto L6aceb5;
case 0x6aceb8:c.instructions+=3;goto B6aceb8;
case 0x6acebb:c.instructions+=2;goto B6acebb;
case 0x6acebe:c.instructions+=1;goto B6acebe;
case 0x6acec0:goto L6acec0;
case 0x6acec3:c.instructions+=1;goto B6acec3;
case 0x6acec5:goto L6acec5;
case 0x6acec8:c.instructions+=5;goto B6acec8;
case 0x6acecb:c.instructions+=4;goto B6acecb;
case 0x6acecd:c.instructions+=3;goto B6acecd;
case 0x6aced1:c.instructions+=2;goto B6aced1;
case 0x6aced4:c.instructions+=1;goto B6aced4;
case 0x6aced8:goto L6aced8;
case 0x6acedb:c.instructions+=3;goto B6acedb;
case 0x6acede:c.instructions+=2;goto B6acede;
case 0x6acee1:c.instructions+=1;goto B6acee1;
case 0x6acee7:goto L6acee7;
case 0x6acee9:goto L6acee9;
case 0x6aceec:c.instructions+=2;goto B6aceec;
case 0x6aceef:c.instructions+=1;goto B6aceef;
case 0x6acef1:goto L6acef1;
case 0x6acef3:c.instructions+=5;goto B6acef3;
case 0x6acef5:c.instructions+=4;goto B6acef5;
case 0x6acef8:c.instructions+=3;goto B6acef8;
case 0x6acefa:c.instructions+=2;goto B6acefa;
case 0x6acefe:c.instructions+=1;goto B6acefe;
case 0x6aceff:goto L6aceff;
case 0x6acf01:c.instructions+=6;goto B6acf01;
case 0x6acf03:c.instructions+=5;goto B6acf03;
case 0x6acf06:c.instructions+=4;goto B6acf06;
case 0x6acf09:c.instructions+=3;goto B6acf09;
case 0x6acf0b:c.instructions+=2;goto B6acf0b;
case 0x6acf0c:c.instructions+=1;goto B6acf0c;
case 0x6acf0e:goto L6acf0e;
case 0x6acf10:c.instructions+=1;goto B6acf10;
case 0x6acf12:goto L6acf12;
case 0x6acf14:c.instructions+=1;goto B6acf14;
case 0x6acf16:goto L6acf16;
case 0x6acf1b:c.instructions+=4;goto B6acf1b;
case 0x6acf20:c.instructions+=3;goto B6acf20;
case 0x6acf23:c.instructions+=2;goto B6acf23;
case 0x6acf24:c.instructions+=1;goto B6acf24;
case 0x6acf29:goto L6acf29;
case 0x6acf2c:c.instructions+=1;goto B6acf2c;
case 0x6acf33:goto L6acf33;
case 0x6acf3a:goto L6acf3a;
case 0x6acf3b:c.instructions+=2;goto B6acf3b;
case 0x6acf3e:c.instructions+=1;goto B6acf3e;
case 0x6acf40:goto L6acf40;
case 0x6acf44:c.instructions+=1;goto B6acf44;
case 0x6acf46:goto L6acf46;
case 0x6acf4b:c.instructions+=2;goto B6acf4b;
case 0x6acf50:c.instructions+=1;goto B6acf50;
case 0x6acf52:goto L6acf52;
case 0x6acf53:c.instructions+=1;goto B6acf53;
case 0x6acf58:goto L6acf58;
case 0x6acf5b:c.instructions+=1;goto B6acf5b;
case 0x6acf62:goto L6acf62;
case 0x6acf65:c.instructions+=5;goto B6acf65;
case 0x6acf67:c.instructions+=4;goto B6acf67;
case 0x6acf69:c.instructions+=3;goto B6acf69;
case 0x6acf6a:c.instructions+=2;goto B6acf6a;
case 0x6acf6f:c.instructions+=1;goto B6acf6f;
case 0x6acf70:goto L6acf70;
case 0x6acf71:c.instructions+=2;goto B6acf71;
case 0x6acf72:c.instructions+=1;goto B6acf72;
case 0x6acf73:goto L6acf73;
case 0x6acf76:c.instructions+=1;goto B6acf76;
case 0x6acf78:goto L6acf78;
case 0x6acf79:c.instructions+=5;goto B6acf79;
case 0x6acf7e:c.instructions+=4;goto B6acf7e;
case 0x6acf83:c.instructions+=3;goto B6acf83;
case 0x6acf87:c.instructions+=2;goto B6acf87;
case 0x6acf88:c.instructions+=1;goto B6acf88;
case 0x6acf8d:goto L6acf8d;
case 0x6acf90:c.instructions+=1;goto B6acf90;
case 0x6acf97:goto L6acf97;
case 0x6acf9b:c.instructions+=1;goto B6acf9b;
case 0x6acf9d:goto L6acf9d;
case 0x6acfa1:c.instructions+=1;goto B6acfa1;
case 0x6acfa3:goto L6acfa3;
case 0x6acfa5:c.instructions+=10;goto B6acfa5;
case 0x6acfa6:c.instructions+=9;goto B6acfa6;
case 0x6acfa8:c.instructions+=8;goto B6acfa8;
case 0x6acfa9:c.instructions+=7;goto B6acfa9;
case 0x6acfaa:c.instructions+=6;goto B6acfaa;
case 0x6acfab:c.instructions+=5;goto B6acfab;
case 0x6acfae:c.instructions+=4;goto B6acfae;
case 0x6acfb1:c.instructions+=3;goto B6acfb1;
case 0x6acfb3:c.instructions+=2;goto B6acfb3;
case 0x6acfb5:c.instructions+=1;goto B6acfb5;
case 0x6acfb8:goto L6acfb8;
case 0x6acfbb:c.instructions+=4;goto B6acfbb;
case 0x6acfbd:c.instructions+=3;goto B6acfbd;
case 0x6acfbf:c.instructions+=2;goto B6acfbf;
case 0x6acfc1:c.instructions+=1;goto B6acfc1;
case 0x6acfc4:goto L6acfc4;
case 0x6acfc7:c.instructions+=3;goto B6acfc7;
case 0x6acfc9:c.instructions+=2;goto B6acfc9;
case 0x6acfcd:c.instructions+=1;goto B6acfcd;
case 0x6acfcf:goto L6acfcf;
case 0x6acfd2:c.instructions+=3;goto B6acfd2;
case 0x6acfd4:c.instructions+=2;goto B6acfd4;
case 0x6acfd6:c.instructions+=1;goto B6acfd6;
case 0x6acfd8:goto L6acfd8;
case 0x6acfda:goto L6acfda;
case 0x6acfdd:c.instructions+=1;goto B6acfdd;
case 0x6acfdf:goto L6acfdf;
case 0x6acfe1:c.instructions+=1;goto B6acfe1;
case 0x6acfe3:goto L6acfe3;
case 0x6acfe5:c.instructions+=1;goto B6acfe5;
case 0x6acfe7:goto L6acfe7;
case 0x6acfed:goto L6acfed;
case 0x6acff3:c.instructions+=1;goto B6acff3;
case 0x6acff5:goto L6acff5;
case 0x6acff8:c.instructions+=2;goto B6acff8;
case 0x6acffa:c.instructions+=1;goto B6acffa;
case 0x6acfff:goto L6acfff;
default:missing_instruction(c.pc);}
B6ac002:L6ac002:{c.instructions+=2;NFSU2_TR(0x6ac002);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ac005:{NFSU2_TR(0x6ac005);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac015;}}
}
B6ac007:L6ac007:{c.instructions+=6;NFSU2_TR(0x6ac007);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ac009:{NFSU2_TR(0x6ac009);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ac00d:{NFSU2_TR(0x6ac00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac010:{NFSU2_TR(0x6ac010);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ac011:{NFSU2_TR(0x6ac011);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ac013:{NFSU2_TR(0x6ac013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ac015:L6ac015:{c.instructions+=4;NFSU2_TR(0x6ac015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac018:{NFSU2_TR(0x6ac018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac01b:{NFSU2_TR(0x6ac01b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ac01e:{NFSU2_TR(0x6ac01e);
if(r1(R+512)){TAIL_STATIC(0x6abfbcu,6ab);}
}
B6ac020:L6ac020:{c.instructions+=1;NFSU2_TR(0x6ac020);
{goto L6ac029;}
}
B6ac022:L6ac022:{c.instructions+=1;NFSU2_TR(0x6ac022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac029:L6ac029:{c.instructions+=3;NFSU2_TR(0x6ac029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac02c:{NFSU2_TR(0x6ac02c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac030:{NFSU2_TR(0x6ac030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac0c8;}}
}
B6ac036:L6ac036:{c.instructions+=8;NFSU2_TR(0x6ac036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac039:{NFSU2_TR(0x6ac039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac03c:{NFSU2_TR(0x6ac03c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac03f:{NFSU2_TR(0x6ac03f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac040:{NFSU2_TR(0x6ac040);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac043:{NFSU2_TR(0x6ac043);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6ac046:{NFSU2_TR(0x6ac046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac049:{NFSU2_TR(0x6ac049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac04eull));
TAIL_STATIC(0x698ed2u,698);
}
B6ac04e:L6ac04e:{c.instructions+=3;NFSU2_TR(0x6ac04e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac050:{NFSU2_TR(0x6ac050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac053:{NFSU2_TR(0x6ac053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6abf57u,6ab);}
}
B6ac059:L6ac059:{c.instructions+=2;NFSU2_TR(0x6ac059);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac05c:{NFSU2_TR(0x6ac05c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac0c8;}}
}
B6ac05e:L6ac05e:{c.instructions+=7;NFSU2_TR(0x6ac05e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac061:{NFSU2_TR(0x6ac061);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac062:{NFSU2_TR(0x6ac062);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac065:{NFSU2_TR(0x6ac065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac066:{NFSU2_TR(0x6ac066);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac069:{NFSU2_TR(0x6ac069);
__builtin_memmove((R+4),(R+12),4);
}
B6ac06b:{NFSU2_TR(0x6ac06b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac070ull));
TAIL_STATIC(0x69d348u,69d);
}
B6ac070:L6ac070:{c.instructions+=2;NFSU2_TR(0x6ac070);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac072:{NFSU2_TR(0x6ac072);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac0c8;}}
}
B6ac074:L6ac074:{c.instructions+=6;NFSU2_TR(0x6ac074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac077:{NFSU2_TR(0x6ac077);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac07a:{NFSU2_TR(0x6ac07a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac07b:{NFSU2_TR(0x6ac07b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ac07d:{NFSU2_TR(0x6ac07d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac07e:{NFSU2_TR(0x6ac07e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac083ull));
TAIL_STATIC(0x698ed2u,698);
}
B6ac083:L6ac083:{c.instructions+=2;NFSU2_TR(0x6ac083);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac085:{NFSU2_TR(0x6ac085);
if(r1(R+518)){{goto L6ac179;}}
}
B6ac08b:L6ac08b:{c.instructions+=7;NFSU2_TR(0x6ac08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac08e:{NFSU2_TR(0x6ac08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac091:{NFSU2_TR(0x6ac091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ac093:{NFSU2_TR(0x6ac093);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ac096:{NFSU2_TR(0x6ac096);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac099:{NFSU2_TR(0x6ac099);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac09c:{NFSU2_TR(0x6ac09c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac0b1;}}
}
B6ac09e:L6ac09e:{c.instructions+=2;NFSU2_TR(0x6ac09e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac0a2:{NFSU2_TR(0x6ac0a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac0b1;}}
}
B6ac0a4:L6ac0a4:{c.instructions+=6;NFSU2_TR(0x6ac0a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0a5:{NFSU2_TR(0x6ac0a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0a6:{NFSU2_TR(0x6ac0a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac0a9:{NFSU2_TR(0x6ac0a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0aa:{NFSU2_TR(0x6ac0aa);
__builtin_memmove((R+4),(R+12),4);
}
B6ac0ac:{NFSU2_TR(0x6ac0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac0b1ull));
TAIL_STATIC(0x69d257u,69d);
}
B6ac0b1:L6ac0b1:{c.instructions+=6;NFSU2_TR(0x6ac0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac0b4:{NFSU2_TR(0x6ac0b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac0b7:{NFSU2_TR(0x6ac0b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0b8:{NFSU2_TR(0x6ac0b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ac0b9:{NFSU2_TR(0x6ac0b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0ba:{NFSU2_TR(0x6ac0ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac0bfull));
TAIL_STATIC(0x698ed2u,698);
}
B6ac0bf:L6ac0bf:{c.instructions+=2;NFSU2_TR(0x6ac0bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac0c1:{NFSU2_TR(0x6ac0c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac08bu);}goto L6ac08b;}}
}
B6ac0c3:L6ac0c3:{c.instructions+=1;NFSU2_TR(0x6ac0c3);
{goto L6ac179;}
}
B6ac0c8:L6ac0c8:{c.instructions+=5;NFSU2_TR(0x6ac0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac0cc:{NFSU2_TR(0x6ac0cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac0cf:{NFSU2_TR(0x6ac0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0d0:{NFSU2_TR(0x6ac0d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac0d2:{NFSU2_TR(0x6ac0d2);
{goto L6ac166;}
}
B6ac0d7:L6ac0d7:{c.instructions+=7;NFSU2_TR(0x6ac0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac0da:{NFSU2_TR(0x6ac0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac0dd:{NFSU2_TR(0x6ac0dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ac0df:{NFSU2_TR(0x6ac0df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac0e2:{NFSU2_TR(0x6ac0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac0e5:{NFSU2_TR(0x6ac0e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac0e8:{NFSU2_TR(0x6ac0e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac15c;}}
}
B6ac0ea:L6ac0ea:{c.instructions+=2;NFSU2_TR(0x6ac0ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac0ee:{NFSU2_TR(0x6ac0ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac15c;}}
}
B6ac0f0:L6ac0f0:{c.instructions+=4;NFSU2_TR(0x6ac0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac0f3:{NFSU2_TR(0x6ac0f3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ac0f5:{NFSU2_TR(0x6ac0f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac0f7:{NFSU2_TR(0x6ac0f7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac110;}}
}
B6ac0f9:L6ac0f9:{c.instructions+=2;NFSU2_TR(0x6ac0f9);
__builtin_memmove((R+4),(R+0),4);
}
B6ac0fb:{NFSU2_TR(0x6ac0fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ac0fe:L6ac0fe:{c.instructions+=1;NFSU2_TR(0x6ac0fe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ac100;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac0feu);}goto L6ac0fe;}
}
B6ac100:L6ac100:{c.instructions+=8;NFSU2_TR(0x6ac100);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ac102:{NFSU2_TR(0x6ac102);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ac103:{NFSU2_TR(0x6ac103);
__builtin_memmove((R+4),(R+8),4);
}
B6ac105:{NFSU2_TR(0x6ac105);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B6ac107:{NFSU2_TR(0x6ac107);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ac108:{NFSU2_TR(0x6ac108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6ac10a:{NFSU2_TR(0x6ac10a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ac10e:{NFSU2_TR(0x6ac10e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac100u);}goto L6ac100;}}
}
B6ac110:L6ac110:{c.instructions+=4;NFSU2_TR(0x6ac110);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac112:{NFSU2_TR(0x6ac112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ac113:{NFSU2_TR(0x6ac113);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6ac115:{NFSU2_TR(0x6ac115);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ac139;}}
}
B6ac117:L6ac117:{c.instructions+=7;NFSU2_TR(0x6ac117);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6ac119:{NFSU2_TR(0x6ac119);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6ac11c:{NFSU2_TR(0x6ac11c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ac120:{NFSU2_TR(0x6ac120);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6ac124:{NFSU2_TR(0x6ac124);
__builtin_memmove((R+4),(R+8),4);
}
B6ac126:{NFSU2_TR(0x6ac126);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac129:{NFSU2_TR(0x6ac129);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac12b:L6ac12b:{c.instructions+=1;NFSU2_TR(0x6ac12b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ac12d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac12bu);}goto L6ac12b;}
}
B6ac12d:L6ac12d:{c.instructions+=4;NFSU2_TR(0x6ac12d);
__builtin_memmove((R+4),(R+8),4);
}
B6ac12f:{NFSU2_TR(0x6ac12f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac132:{NFSU2_TR(0x6ac132);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ac135:{NFSU2_TR(0x6ac135);
__builtin_memmove((R+28),(R+24),4);
}
B6ac137:L6ac137:{c.instructions+=1;NFSU2_TR(0x6ac137);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ac139;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac137u);}goto L6ac137;}
}
B6ac139:L6ac139:{c.instructions+=7;NFSU2_TR(0x6ac139);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac13c:{NFSU2_TR(0x6ac13c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac13d:{NFSU2_TR(0x6ac13d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac140:{NFSU2_TR(0x6ac140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac141:{NFSU2_TR(0x6ac141);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac144:{NFSU2_TR(0x6ac144);
__builtin_memmove((R+4),(R+12),4);
}
B6ac146:{NFSU2_TR(0x6ac146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac14bull));
TAIL_STATIC(0x69d348u,69d);
}
B6ac14b:L6ac14b:{c.instructions+=6;NFSU2_TR(0x6ac14b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac14e:{NFSU2_TR(0x6ac14e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac151:{NFSU2_TR(0x6ac151);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac154:{NFSU2_TR(0x6ac154);
__builtin_memmove((R+4),(R+12),4);
}
B6ac156:{NFSU2_TR(0x6ac156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac157:{NFSU2_TR(0x6ac157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac15cull));
TAIL_STATIC(0x69d257u,69d);
}
B6ac15c:L6ac15c:{c.instructions+=4;NFSU2_TR(0x6ac15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac15f:{NFSU2_TR(0x6ac15f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac162:{NFSU2_TR(0x6ac162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac163:{NFSU2_TR(0x6ac163);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac166:L6ac166:{c.instructions+=2;NFSU2_TR(0x6ac166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac169:{NFSU2_TR(0x6ac169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac16eull));
TAIL_STATIC(0x698ed2u,698);
}
B6ac16e:L6ac16e:{c.instructions+=3;NFSU2_TR(0x6ac16e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac170:{NFSU2_TR(0x6ac170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac173:{NFSU2_TR(0x6ac173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac0d7u);}goto L6ac0d7;}}
}
B6ac179:L6ac179:{c.instructions+=4;NFSU2_TR(0x6ac179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac17c:{NFSU2_TR(0x6ac17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac17f:{NFSU2_TR(0x6ac17f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ac182:{NFSU2_TR(0x6ac182);
if(r1(R+512)){TAIL_STATIC(0x6abf03u,6ab);}
}
B6ac188:L6ac188:{c.instructions+=4;NFSU2_TR(0x6ac188);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ac18a:{NFSU2_TR(0x6ac18a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac18d:{NFSU2_TR(0x6ac18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac190:{NFSU2_TR(0x6ac190);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac1de;}}
}
B6ac192:L6ac192:{c.instructions+=8;NFSU2_TR(0x6ac192);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac195:{NFSU2_TR(0x6ac195);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac198:{NFSU2_TR(0x6ac198);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac19b:{NFSU2_TR(0x6ac19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac19e:{NFSU2_TR(0x6ac19e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ac1a1:{NFSU2_TR(0x6ac1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac1a4:{NFSU2_TR(0x6ac1a4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac1a6:{NFSU2_TR(0x6ac1a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac1b6;}}
}
B6ac1a8:L6ac1a8:{c.instructions+=2;NFSU2_TR(0x6ac1a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac1ac:{NFSU2_TR(0x6ac1ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac1b6;}}
}
B6ac1ae:L6ac1ae:{c.instructions+=3;NFSU2_TR(0x6ac1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac1b1:{NFSU2_TR(0x6ac1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac1b4:{NFSU2_TR(0x6ac1b4);
{goto L6ac1d8;}
}
B6ac1b6:L6ac1b6:{c.instructions+=3;NFSU2_TR(0x6ac1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac1b9:{NFSU2_TR(0x6ac1b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ac1bc:{NFSU2_TR(0x6ac1bc);
if(r1(R+518)){{goto L6ac1d8;}}
}
B6ac1be:L6ac1be:{c.instructions+=2;NFSU2_TR(0x6ac1be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ac1c1:{NFSU2_TR(0x6ac1c1);
if(r1(R+518)){{goto L6ac1d8;}}
}
B6ac1c3:L6ac1c3:{c.instructions+=2;NFSU2_TR(0x6ac1c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ac1c6:{NFSU2_TR(0x6ac1c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac1d8;}}
}
B6ac1c8:L6ac1c8:{c.instructions+=3;NFSU2_TR(0x6ac1c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac1cc:{NFSU2_TR(0x6ac1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac1cf:{NFSU2_TR(0x6ac1cf);
if(r1(R+518)){{goto L6ac1d8;}}
}
B6ac1d1:L6ac1d1:{c.instructions+=1;NFSU2_TR(0x6ac1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac1d8:L6ac1d8:{c.instructions+=3;NFSU2_TR(0x6ac1d8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ac1d9:{NFSU2_TR(0x6ac1d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ac1dc:{NFSU2_TR(0x6ac1dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac192u);}goto L6ac192;}}
}
B6ac1de:L6ac1de:{c.instructions+=7;NFSU2_TR(0x6ac1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac1e1:{NFSU2_TR(0x6ac1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac1e4:{NFSU2_TR(0x6ac1e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac1e7:{NFSU2_TR(0x6ac1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac1eb:{NFSU2_TR(0x6ac1eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ac1ed:{NFSU2_TR(0x6ac1ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac1f0:{NFSU2_TR(0x6ac1f0);
if(r1(R+518)){{goto L6ac1ff;}}
}
B6ac1f2:L6ac1f2:{c.instructions+=4;NFSU2_TR(0x6ac1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac1f5:{NFSU2_TR(0x6ac1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac1f8:{NFSU2_TR(0x6ac1f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac1fb:{NFSU2_TR(0x6ac1fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x4ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6ac1ff:L6ac1ff:{c.instructions+=7;NFSU2_TR(0x6ac1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac202:{NFSU2_TR(0x6ac202);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac205:{NFSU2_TR(0x6ac205);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac208:{NFSU2_TR(0x6ac208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac20b:{NFSU2_TR(0x6ac20b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ac20d:{NFSU2_TR(0x6ac20d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac210:{NFSU2_TR(0x6ac210);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac23e;}}
}
B6ac212:L6ac212:{c.instructions+=5;NFSU2_TR(0x6ac212);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac215:{NFSU2_TR(0x6ac215);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac218:{NFSU2_TR(0x6ac218);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac21b:{NFSU2_TR(0x6ac21b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac21e:{NFSU2_TR(0x6ac21e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac238;}}
}
B6ac220:L6ac220:{c.instructions+=2;NFSU2_TR(0x6ac220);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac224:{NFSU2_TR(0x6ac224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac238;}}
}
B6ac226:L6ac226:{c.instructions+=5;NFSU2_TR(0x6ac226);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac229:{NFSU2_TR(0x6ac229);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ac22c:{NFSU2_TR(0x6ac22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac22f:{NFSU2_TR(0x6ac22f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac232:{NFSU2_TR(0x6ac232);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ac238;}}
}
B6ac234:L6ac234:{c.instructions+=2;NFSU2_TR(0x6ac234);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ac235:{NFSU2_TR(0x6ac235);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac238:L6ac238:{c.instructions+=3;NFSU2_TR(0x6ac238);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ac239:{NFSU2_TR(0x6ac239);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ac23c:{NFSU2_TR(0x6ac23c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac212u);}goto L6ac212;}}
}
B6ac23e:L6ac23e:{c.instructions+=2;NFSU2_TR(0x6ac23e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac241:{NFSU2_TR(0x6ac241);
if(r1(R+518)){{goto L6ac24a;}}
}
B6ac243:L6ac243:{c.instructions+=2;NFSU2_TR(0x6ac243);
__builtin_memmove((R+4),(R+12),4);
}
B6ac245:{NFSU2_TR(0x6ac245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac24aull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6ac24a:L6ac24a:{c.instructions+=3;NFSU2_TR(0x6ac24a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac24d:{NFSU2_TR(0x6ac24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac257:{NFSU2_TR(0x6ac257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac25cull));
TAIL_STATIC(0x575630u,575);
}
B6ac25c:L6ac25c:{c.instructions+=7;NFSU2_TR(0x6ac25c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ac25d:{NFSU2_TR(0x6ac25d);
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
B6ac25f:{NFSU2_TR(0x6ac25f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ac260:{NFSU2_TR(0x6ac260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ac261:{NFSU2_TR(0x6ac261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ac262:{NFSU2_TR(0x6ac262);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ac263:{NFSU2_TR(0x6ac263);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ac264:L6ac264:{c.instructions+=11;NFSU2_TR(0x6ac264);
__builtin_memmove((R+28),(R+28),4);
}
B6ac266:{NFSU2_TR(0x6ac266);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac267:{NFSU2_TR(0x6ac267);
__builtin_memmove((R+20),(R+16),4);
}
B6ac269:{NFSU2_TR(0x6ac269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B6ac26c:{NFSU2_TR(0x6ac26c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac26d:{NFSU2_TR(0x6ac26d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac26e:{NFSU2_TR(0x6ac26e);
__builtin_memmove((R+12),(R+4),4);
}
B6ac270:{NFSU2_TR(0x6ac270);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ac272:{NFSU2_TR(0x6ac272);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ac276:{NFSU2_TR(0x6ac276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac279:{NFSU2_TR(0x6ac279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac283;}}
}
B6ac27b:L6ac27b:{c.instructions+=3;NFSU2_TR(0x6ac27b);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac27d:{NFSU2_TR(0x6ac27d);
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
B6ac27e:{NFSU2_TR(0x6ac27e);
{goto L6ac494;}
}
B6ac283:L6ac283:{c.instructions+=2;NFSU2_TR(0x6ac283);
__builtin_memmove((R+4),(R+12),4);
}
B6ac285:{NFSU2_TR(0x6ac285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac28aull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ac28a:L6ac28a:{c.instructions+=2;NFSU2_TR(0x6ac28a);
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
B6ac28c:{NFSU2_TR(0x6ac28c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac494;}}
}
B6ac292:L6ac292:{c.instructions+=8;NFSU2_TR(0x6ac292);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac295:{NFSU2_TR(0x6ac295);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ac296:{NFSU2_TR(0x6ac296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac297:{NFSU2_TR(0x6ac297);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac29d:{NFSU2_TR(0x6ac29d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac2a0:{NFSU2_TR(0x6ac2a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2a1:{NFSU2_TR(0x6ac2a1);
__builtin_memmove((R+4),(R+12),4);
}
B6ac2a3:{NFSU2_TR(0x6ac2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac2a8ull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ac2a8:L6ac2a8:{c.instructions+=2;NFSU2_TR(0x6ac2a8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac2aa:{NFSU2_TR(0x6ac2aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac2bc;}}
}
B6ac2ac:L6ac2ac:{c.instructions+=5;NFSU2_TR(0x6ac2ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2ad:{NFSU2_TR(0x6ac2ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac2b0:{NFSU2_TR(0x6ac2b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2b1:{NFSU2_TR(0x6ac2b1);
__builtin_memmove((R+4),(R+12),4);
}
B6ac2b3:{NFSU2_TR(0x6ac2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac2b8ull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac2b8:L6ac2b8:{c.instructions+=2;NFSU2_TR(0x6ac2b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac2ba:{NFSU2_TR(0x6ac2ba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ac2f7;}}
}
B6ac2bc:L6ac2bc:{c.instructions+=4;NFSU2_TR(0x6ac2bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac2bf:{NFSU2_TR(0x6ac2bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2c0:{NFSU2_TR(0x6ac2c0);
__builtin_memmove((R+4),(R+12),4);
}
B6ac2c2:{NFSU2_TR(0x6ac2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac2c7ull));
TAIL_STATIC(0x69df0cu,69d);
}
B6ac2c7:L6ac2c7:{c.instructions+=6;NFSU2_TR(0x6ac2c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac2ca:{NFSU2_TR(0x6ac2ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac2cd:{NFSU2_TR(0x6ac2cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac2d3:{NFSU2_TR(0x6ac2d3);
__builtin_memmove((R+4),(R+12),4);
}
B6ac2d5:{NFSU2_TR(0x6ac2d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2d6:{NFSU2_TR(0x6ac2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac2dbull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ac2db:L6ac2db:{c.instructions+=2;NFSU2_TR(0x6ac2db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac2dd:{NFSU2_TR(0x6ac2dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac47e;}}
}
B6ac2e3:L6ac2e3:{c.instructions+=5;NFSU2_TR(0x6ac2e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2e4:{NFSU2_TR(0x6ac2e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac2e7:{NFSU2_TR(0x6ac2e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2e8:{NFSU2_TR(0x6ac2e8);
__builtin_memmove((R+4),(R+12),4);
}
B6ac2ea:{NFSU2_TR(0x6ac2ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac2efull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac2ef:L6ac2ef:{c.instructions+=2;NFSU2_TR(0x6ac2ef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac2f1:{NFSU2_TR(0x6ac2f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac47e;}}
}
B6ac2f7:L6ac2f7:{c.instructions+=4;NFSU2_TR(0x6ac2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac2fa:{NFSU2_TR(0x6ac2fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ac2fd:{NFSU2_TR(0x6ac2fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac2fe:{NFSU2_TR(0x6ac2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac303ull));
TAIL_STATIC(0x575620u,575);
}
B6ac303:L6ac303:{c.instructions+=4;NFSU2_TR(0x6ac303);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac305:{NFSU2_TR(0x6ac305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ac306:{NFSU2_TR(0x6ac306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac309:{NFSU2_TR(0x6ac309);
if(r1(R+518)){{goto L6ac47e;}}
}
B6ac30f:L6ac30f:{c.instructions+=7;NFSU2_TR(0x6ac30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac312:{NFSU2_TR(0x6ac312);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac315:{NFSU2_TR(0x6ac315);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac318:{NFSU2_TR(0x6ac318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac319:{NFSU2_TR(0x6ac319);
__builtin_memmove((R+28),(R+0),4);
}
B6ac31b:{NFSU2_TR(0x6ac31b);
__builtin_memmove((R+0),(R+4),4);
}
B6ac31d:{NFSU2_TR(0x6ac31d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac320:L6ac320:{c.instructions+=1;NFSU2_TR(0x6ac320);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ac322;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac320u);}goto L6ac320;}
}
B6ac322:L6ac322:{c.instructions+=2;NFSU2_TR(0x6ac322);
__builtin_memmove((R+4),(R+0),4);
}
B6ac324:{NFSU2_TR(0x6ac324);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ac327:L6ac327:{c.instructions+=1;NFSU2_TR(0x6ac327);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ac329;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac327u);}goto L6ac327;}
}
B6ac329:L6ac329:{c.instructions+=2;NFSU2_TR(0x6ac329);
__builtin_memmove((R+4),(R+12),4);
}
B6ac32b:{NFSU2_TR(0x6ac32b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac330ull));
TAIL_STATIC(0x69cbe8u,69c);
}
B6ac330:L6ac330:{c.instructions+=5;NFSU2_TR(0x6ac330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac333:{NFSU2_TR(0x6ac333);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac335:{NFSU2_TR(0x6ac335);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac338:{NFSU2_TR(0x6ac338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac33b:{NFSU2_TR(0x6ac33b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac3f6;}}
}
B6ac341:L6ac341:{c.instructions+=4;NFSU2_TR(0x6ac341);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac344:{NFSU2_TR(0x6ac344);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ac347:{NFSU2_TR(0x6ac347);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ac34b:{NFSU2_TR(0x6ac34b);
if(r1(R+518)){{goto L6ac3e9;}}
}
B6ac351:L6ac351:{c.instructions+=3;NFSU2_TR(0x6ac351);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac353:{NFSU2_TR(0x6ac353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac356:{NFSU2_TR(0x6ac356);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac3ce;}}
}
B6ac358:L6ac358:{c.instructions+=3;NFSU2_TR(0x6ac358);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac35b:{NFSU2_TR(0x6ac35b);
__builtin_memmove((R+4),(R+12),4);
}
B6ac35d:{NFSU2_TR(0x6ac35d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac362ull));
TAIL_STATIC(0x69cc9au,69c);
}
B6ac362:L6ac362:{c.instructions+=2;NFSU2_TR(0x6ac362);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac364:{NFSU2_TR(0x6ac364);
if(r1(R+518)){{goto L6ac3cb;}}
}
B6ac366:L6ac366:{c.instructions+=1;NFSU2_TR(0x6ac366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac36bull));
TAIL_STATIC(0x69cbe8u,69c);
}
B6ac36b:L6ac36b:{c.instructions+=3;NFSU2_TR(0x6ac36b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac36e:{NFSU2_TR(0x6ac36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac371:{NFSU2_TR(0x6ac371);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ac3c6;}}
}
B6ac373:L6ac373:{c.instructions+=1;NFSU2_TR(0x6ac373);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac391;}}
}
B6ac375:L6ac375:{c.instructions+=2;NFSU2_TR(0x6ac375);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ac379:{NFSU2_TR(0x6ac379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac3c6;}}
}
B6ac37b:L6ac37b:{c.instructions+=8;NFSU2_TR(0x6ac37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac37e:{NFSU2_TR(0x6ac37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac381:{NFSU2_TR(0x6ac381);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ac384:{NFSU2_TR(0x6ac384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac387:{NFSU2_TR(0x6ac387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ac389:{NFSU2_TR(0x6ac389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac38c:{NFSU2_TR(0x6ac38c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac38f:{NFSU2_TR(0x6ac38f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac3c6;}}
}
B6ac391:L6ac391:{c.instructions+=5;NFSU2_TR(0x6ac391);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac393:{NFSU2_TR(0x6ac393);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac396:{NFSU2_TR(0x6ac396);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac397:{NFSU2_TR(0x6ac397);
__builtin_memmove((R+4),(R+12),4);
}
B6ac399:{NFSU2_TR(0x6ac399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac39eull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac39e:L6ac39e:{c.instructions+=2;NFSU2_TR(0x6ac39e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac3a0:{NFSU2_TR(0x6ac3a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac3c6;}}
}
B6ac3a2:L6ac3a2:{c.instructions+=6;NFSU2_TR(0x6ac3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac3a5:{NFSU2_TR(0x6ac3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac3a8:{NFSU2_TR(0x6ac3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac3ab:{NFSU2_TR(0x6ac3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ac3b2:{NFSU2_TR(0x6ac3b2);
__builtin_memmove((R+0),(R+4),4);
}
B6ac3b4:{NFSU2_TR(0x6ac3b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac3b7:L6ac3b7:{c.instructions+=1;NFSU2_TR(0x6ac3b7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ac3b9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac3b7u);}goto L6ac3b7;}
}
B6ac3b9:L6ac3b9:{c.instructions+=3;NFSU2_TR(0x6ac3b9);
__builtin_memmove((R+4),(R+0),4);
}
B6ac3bb:{NFSU2_TR(0x6ac3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac3be:{NFSU2_TR(0x6ac3be);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ac3c1:L6ac3c1:{c.instructions+=1;NFSU2_TR(0x6ac3c1);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ac3c3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac3c1u);}goto L6ac3c1;}
}
B6ac3c3:L6ac3c3:{c.instructions+=1;NFSU2_TR(0x6ac3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac3c6:L6ac3c6:{c.instructions+=2;NFSU2_TR(0x6ac3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac3c9:{NFSU2_TR(0x6ac3c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac358u);}goto L6ac358;}}
}
B6ac3cb:L6ac3cb:{c.instructions+=1;NFSU2_TR(0x6ac3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac3ce:L6ac3ce:{c.instructions+=5;NFSU2_TR(0x6ac3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac3d1:{NFSU2_TR(0x6ac3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac3d4:{NFSU2_TR(0x6ac3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ac3db:{NFSU2_TR(0x6ac3db);
__builtin_memmove((R+8),(R+4),4);
}
B6ac3dd:{NFSU2_TR(0x6ac3dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac3e0:L6ac3e0:{c.instructions+=1;NFSU2_TR(0x6ac3e0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ac3e2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac3e0u);}goto L6ac3e0;}
}
B6ac3e2:L6ac3e2:{c.instructions+=2;NFSU2_TR(0x6ac3e2);
__builtin_memmove((R+4),(R+8),4);
}
B6ac3e4:{NFSU2_TR(0x6ac3e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ac3e7:L6ac3e7:{c.instructions+=1;NFSU2_TR(0x6ac3e7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ac3e9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac3e7u);}goto L6ac3e7;}
}
B6ac3e9:L6ac3e9:{c.instructions+=4;NFSU2_TR(0x6ac3e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ac3ea:{NFSU2_TR(0x6ac3ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ac3ed:{NFSU2_TR(0x6ac3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac3f0:{NFSU2_TR(0x6ac3f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac341u);}goto L6ac341;}}
}
B6ac3f6:L6ac3f6:{c.instructions+=5;NFSU2_TR(0x6ac3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac3f9:{NFSU2_TR(0x6ac3f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac3fb:{NFSU2_TR(0x6ac3fb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac3fd:{NFSU2_TR(0x6ac3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac400:{NFSU2_TR(0x6ac400);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac47d;}}
}
B6ac402:L6ac402:{c.instructions+=6;NFSU2_TR(0x6ac402);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ac405:{NFSU2_TR(0x6ac405);
__builtin_memmove((R+4),(R+0),4);
}
B6ac407:{NFSU2_TR(0x6ac407);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ac40a:{NFSU2_TR(0x6ac40a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ac40d:{NFSU2_TR(0x6ac40d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ac411:{NFSU2_TR(0x6ac411);
if(r1(R+518)){{goto L6ac472;}}
}
B6ac413:L6ac413:{c.instructions+=3;NFSU2_TR(0x6ac413);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ac416:{NFSU2_TR(0x6ac416);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6ac418:{NFSU2_TR(0x6ac418);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ac439;}}
}
B6ac41a:L6ac41a:{c.instructions+=4;NFSU2_TR(0x6ac41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac41d:{NFSU2_TR(0x6ac41d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ac420:{NFSU2_TR(0x6ac420);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac423:{NFSU2_TR(0x6ac423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ac426:L6ac426:{c.instructions+=3;NFSU2_TR(0x6ac426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ac428:{NFSU2_TR(0x6ac428);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac42b:{NFSU2_TR(0x6ac42b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac436;}}
}
B6ac42d:L6ac42d:{c.instructions+=4;NFSU2_TR(0x6ac42d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ac42e:{NFSU2_TR(0x6ac42e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ac431:{NFSU2_TR(0x6ac431);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6ac434:{NFSU2_TR(0x6ac434);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac426u);}goto L6ac426;}}
}
B6ac436:L6ac436:{c.instructions+=1;NFSU2_TR(0x6ac436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac439:L6ac439:{c.instructions+=4;NFSU2_TR(0x6ac439);
__builtin_memmove((R+8),(R+24),4);
}
B6ac43b:{NFSU2_TR(0x6ac43b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6ac43d:{NFSU2_TR(0x6ac43d);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6ac43f:{NFSU2_TR(0x6ac43f);
if(r1(R+518)){{goto L6ac46f;}}
}
B6ac441:L6ac441:{c.instructions+=4;NFSU2_TR(0x6ac441);
__builtin_memmove((R+0),(R+24),4);
}
B6ac443:{NFSU2_TR(0x6ac443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac446:{NFSU2_TR(0x6ac446);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ac449:{NFSU2_TR(0x6ac449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac44c:L6ac44c:{c.instructions+=12;NFSU2_TR(0x6ac44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac44f:{NFSU2_TR(0x6ac44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac452:{NFSU2_TR(0x6ac452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac456:{NFSU2_TR(0x6ac456);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6ac458:{NFSU2_TR(0x6ac458);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ac45c:{NFSU2_TR(0x6ac45c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ac45e:{NFSU2_TR(0x6ac45e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6ac460:{NFSU2_TR(0x6ac460);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac463:{NFSU2_TR(0x6ac463);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ac467:{NFSU2_TR(0x6ac467);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B6ac46a:{NFSU2_TR(0x6ac46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac46d:{NFSU2_TR(0x6ac46d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac44cu);}goto L6ac44c;}}
}
B6ac46f:L6ac46f:{c.instructions+=1;NFSU2_TR(0x6ac46f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac472:L6ac472:{c.instructions+=5;NFSU2_TR(0x6ac472);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac475:{NFSU2_TR(0x6ac475);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ac476:{NFSU2_TR(0x6ac476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6ac478:{NFSU2_TR(0x6ac478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac47b:{NFSU2_TR(0x6ac47b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac402u);}goto L6ac402;}}
}
B6ac47d:L6ac47d:{c.instructions+=1;NFSU2_TR(0x6ac47d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ac47e:L6ac47e:{c.instructions+=4;NFSU2_TR(0x6ac47e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac481:{NFSU2_TR(0x6ac481);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac482:{NFSU2_TR(0x6ac482);
__builtin_memmove((R+4),(R+12),4);
}
B6ac484:{NFSU2_TR(0x6ac484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac489ull));
TAIL_STATIC(0x69df0cu,69d);
}
B6ac489:L6ac489:{c.instructions+=2;NFSU2_TR(0x6ac489);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac48c:{NFSU2_TR(0x6ac48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac491ull));
TAIL_STATIC(0x575630u,575);
}
B6ac491:L6ac491:{c.instructions+=2;NFSU2_TR(0x6ac491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ac492:{NFSU2_TR(0x6ac492);
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
B6ac494:L6ac494:{c.instructions+=4;NFSU2_TR(0x6ac494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ac495:{NFSU2_TR(0x6ac495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ac496:{NFSU2_TR(0x6ac496);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ac497:{NFSU2_TR(0x6ac497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ac498:L6ac498:{c.instructions+=11;NFSU2_TR(0x6ac498);
__builtin_memmove((R+28),(R+28),4);
}
B6ac49a:{NFSU2_TR(0x6ac49a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac49b:{NFSU2_TR(0x6ac49b);
__builtin_memmove((R+20),(R+16),4);
}
B6ac49d:{NFSU2_TR(0x6ac49d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x7cull))));
}
B6ac4a0:{NFSU2_TR(0x6ac4a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4a1:{NFSU2_TR(0x6ac4a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4a2:{NFSU2_TR(0x6ac4a2);
u8 U[4];
w4(U+0,u32(0x20400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4a7:{NFSU2_TR(0x6ac4a7);
__builtin_memmove((R+24),(R+4),4);
}
B6ac4a9:{NFSU2_TR(0x6ac4a9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4ab:{NFSU2_TR(0x6ac4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac4b1:{NFSU2_TR(0x6ac4b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac4b6ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac4b6:L6ac4b6:{c.instructions+=3;NFSU2_TR(0x6ac4b6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ac4b8:{NFSU2_TR(0x6ac4b8);
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
B6ac4ba:{NFSU2_TR(0x6ac4ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac629;}}
}
B6ac4c0:L6ac4c0:{c.instructions+=5;NFSU2_TR(0x6ac4c0);
u8 U[4];
w4(U+0,u32(0x401ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4c5:{NFSU2_TR(0x6ac4c5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4c7:{NFSU2_TR(0x6ac4c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac4cd:{NFSU2_TR(0x6ac4cd);
__builtin_memmove((R+4),(R+24),4);
}
B6ac4cf:{NFSU2_TR(0x6ac4cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac4d4ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac4d4:L6ac4d4:{c.instructions+=2;NFSU2_TR(0x6ac4d4);
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
B6ac4d6:{NFSU2_TR(0x6ac4d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac629;}}
}
B6ac4dc:L6ac4dc:{c.instructions+=5;NFSU2_TR(0x6ac4dc);
u8 U[4];
w4(U+0,u32(0x4401ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4e1:{NFSU2_TR(0x6ac4e1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4e3:{NFSU2_TR(0x6ac4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac4e9:{NFSU2_TR(0x6ac4e9);
__builtin_memmove((R+4),(R+24),4);
}
B6ac4eb:{NFSU2_TR(0x6ac4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac4f0ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac4f0:L6ac4f0:{c.instructions+=2;NFSU2_TR(0x6ac4f0);
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
B6ac4f2:{NFSU2_TR(0x6ac4f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac629;}}
}
B6ac4f8:L6ac4f8:{c.instructions+=6;NFSU2_TR(0x6ac4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac4fe:{NFSU2_TR(0x6ac4fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac4ff:{NFSU2_TR(0x6ac4ff);
w4(R+28,u32(0xffff0000ull));
}
B6ac504:{NFSU2_TR(0x6ac504);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B6ac506:{NFSU2_TR(0x6ac506);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46580000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac50b:{NFSU2_TR(0x6ac50b);
if(r1(R+518)){{goto L6ac514;}}
}
B6ac50d:L6ac50d:{c.instructions+=2;NFSU2_TR(0x6ac50d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x54580000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac512:{NFSU2_TR(0x6ac512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac530;}}
}
B6ac514:L6ac514:{c.instructions+=5;NFSU2_TR(0x6ac514);
u8 U[4];
w4(U+0,u32(0x31028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac519:{NFSU2_TR(0x6ac519);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac51b:{NFSU2_TR(0x6ac51b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac521:{NFSU2_TR(0x6ac521);
__builtin_memmove((R+4),(R+24),4);
}
B6ac523:{NFSU2_TR(0x6ac523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac528ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac528:L6ac528:{c.instructions+=2;NFSU2_TR(0x6ac528);
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
B6ac52a:{NFSU2_TR(0x6ac52a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac530:L6ac530:{c.instructions+=4;NFSU2_TR(0x6ac530);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac536:{NFSU2_TR(0x6ac536);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B6ac538:{NFSU2_TR(0x6ac538);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ac53d:{NFSU2_TR(0x6ac53d);
if(r1(R+518)){{goto L6ac55b;}}
}
B6ac53f:L6ac53f:{c.instructions+=5;NFSU2_TR(0x6ac53f);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac544:{NFSU2_TR(0x6ac544);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac546:{NFSU2_TR(0x6ac546);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac54c:{NFSU2_TR(0x6ac54c);
__builtin_memmove((R+4),(R+24),4);
}
B6ac54e:{NFSU2_TR(0x6ac54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac553ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac553:L6ac553:{c.instructions+=2;NFSU2_TR(0x6ac553);
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
B6ac555:{NFSU2_TR(0x6ac555);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac55b:L6ac55b:{c.instructions+=5;NFSU2_TR(0x6ac55b);
u8 U[4];
w4(U+0,u32(0x42000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac560:{NFSU2_TR(0x6ac560);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac562:{NFSU2_TR(0x6ac562);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac568:{NFSU2_TR(0x6ac568);
__builtin_memmove((R+4),(R+24),4);
}
B6ac56a:{NFSU2_TR(0x6ac56a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac56full));
TAIL_STATIC(0x69d815u,69d);
}
B6ac56f:L6ac56f:{c.instructions+=2;NFSU2_TR(0x6ac56f);
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
B6ac571:{NFSU2_TR(0x6ac571);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac577:L6ac577:{c.instructions+=5;NFSU2_TR(0x6ac577);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac57c:{NFSU2_TR(0x6ac57c);
u8 U[4];
w4(U+0,u32(0x2020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac581:{NFSU2_TR(0x6ac581);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac587:{NFSU2_TR(0x6ac587);
__builtin_memmove((R+4),(R+24),4);
}
B6ac589:{NFSU2_TR(0x6ac589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac58eull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac58e:L6ac58e:{c.instructions+=2;NFSU2_TR(0x6ac58e);
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
B6ac590:{NFSU2_TR(0x6ac590);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac596:L6ac596:{c.instructions+=5;NFSU2_TR(0x6ac596);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac59b:{NFSU2_TR(0x6ac59b);
u8 U[4];
w4(U+0,u32(0x40020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5a0:{NFSU2_TR(0x6ac5a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac5a6:{NFSU2_TR(0x6ac5a6);
__builtin_memmove((R+4),(R+24),4);
}
B6ac5a8:{NFSU2_TR(0x6ac5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac5adull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac5ad:L6ac5ad:{c.instructions+=2;NFSU2_TR(0x6ac5ad);
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
B6ac5af:{NFSU2_TR(0x6ac5af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac5b1:L6ac5b1:{c.instructions+=4;NFSU2_TR(0x6ac5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac5b7:{NFSU2_TR(0x6ac5b7);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B6ac5b9:{NFSU2_TR(0x6ac5b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac5bb:{NFSU2_TR(0x6ac5bb);
if(r1(R+518)){{goto L6ac5d4;}}
}
B6ac5bd:L6ac5bd:{c.instructions+=5;NFSU2_TR(0x6ac5bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5be:{NFSU2_TR(0x6ac5be);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5c3:{NFSU2_TR(0x6ac5c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac5c9:{NFSU2_TR(0x6ac5c9);
__builtin_memmove((R+4),(R+24),4);
}
B6ac5cb:{NFSU2_TR(0x6ac5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac5d0ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac5d0:L6ac5d0:{c.instructions+=2;NFSU2_TR(0x6ac5d0);
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
B6ac5d2:{NFSU2_TR(0x6ac5d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac5d4:L6ac5d4:{c.instructions+=3;NFSU2_TR(0x6ac5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac5d7:{NFSU2_TR(0x6ac5d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac5d9:{NFSU2_TR(0x6ac5d9);
if(r1(R+518)){{goto L6ac647;}}
}
B6ac5db:L6ac5db:{c.instructions+=6;NFSU2_TR(0x6ac5db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5dc:{NFSU2_TR(0x6ac5dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac5e2:{NFSU2_TR(0x6ac5e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac5e5:{NFSU2_TR(0x6ac5e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5e6:{NFSU2_TR(0x6ac5e6);
__builtin_memmove((R+4),(R+24),4);
}
B6ac5e8:{NFSU2_TR(0x6ac5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac5edull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ac5ed:L6ac5ed:{c.instructions+=2;NFSU2_TR(0x6ac5ed);
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
B6ac5ef:{NFSU2_TR(0x6ac5ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ac628;}}
}
B6ac5f1:L6ac5f1:{c.instructions+=5;NFSU2_TR(0x6ac5f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5f2:{NFSU2_TR(0x6ac5f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac5f5:{NFSU2_TR(0x6ac5f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac5f6:{NFSU2_TR(0x6ac5f6);
__builtin_memmove((R+4),(R+24),4);
}
B6ac5f8:{NFSU2_TR(0x6ac5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac5fdull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac5fd:L6ac5fd:{c.instructions+=3;NFSU2_TR(0x6ac5fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ac5ff:{NFSU2_TR(0x6ac5ff);
__builtin_memmove((R+4),(R+24),4);
}
B6ac601:{NFSU2_TR(0x6ac601);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ac62d;}}
}
B6ac603:L6ac603:{c.instructions+=4;NFSU2_TR(0x6ac603);
u8 U[4];
w4(U+0,u32(0x30028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac608:{NFSU2_TR(0x6ac608);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac60a:{NFSU2_TR(0x6ac60a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac610:{NFSU2_TR(0x6ac610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac615ull));
TAIL_STATIC(0x69d815u,69d);
}
B6ac615:L6ac615:{c.instructions+=3;NFSU2_TR(0x6ac615);
__builtin_memmove((R+28),(R+0),4);
}
B6ac617:{NFSU2_TR(0x6ac617);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac619:{NFSU2_TR(0x6ac619);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ac638;}}
}
B6ac61b:L6ac61b:{c.instructions+=4;NFSU2_TR(0x6ac61b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac61e:{NFSU2_TR(0x6ac61e);
__builtin_memmove((R+4),(R+24),4);
}
B6ac620:{NFSU2_TR(0x6ac620);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac621:{NFSU2_TR(0x6ac621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac626ull));
TAIL_STATIC(0x69df0cu,69d);
}
B6ac626:L6ac626:{c.instructions+=1;NFSU2_TR(0x6ac626);
__builtin_memmove((R+0),(R+28),4);
}
B6ac628:L6ac628:{c.instructions+=1;NFSU2_TR(0x6ac628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ac629:L6ac629:{c.instructions+=4;NFSU2_TR(0x6ac629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ac62a:{NFSU2_TR(0x6ac62a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ac62b:{NFSU2_TR(0x6ac62b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ac62c:{NFSU2_TR(0x6ac62c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ac62d:L6ac62d:{c.instructions+=4;NFSU2_TR(0x6ac62d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac62f:{NFSU2_TR(0x6ac62f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac632:{NFSU2_TR(0x6ac632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac633:{NFSU2_TR(0x6ac633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac638ull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac638:L6ac638:{c.instructions+=4;NFSU2_TR(0x6ac638);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac63b:{NFSU2_TR(0x6ac63b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac63c:{NFSU2_TR(0x6ac63c);
__builtin_memmove((R+4),(R+24),4);
}
B6ac63e:{NFSU2_TR(0x6ac63e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac643ull));
TAIL_STATIC(0x69df0cu,69d);
}
B6ac643:L6ac643:{c.instructions+=2;NFSU2_TR(0x6ac643);
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
B6ac645:{NFSU2_TR(0x6ac645);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac628u);}goto L6ac628;}}
}
B6ac647:L6ac647:{c.instructions+=6;NFSU2_TR(0x6ac647);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac64a:{NFSU2_TR(0x6ac64a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac64d:{NFSU2_TR(0x6ac64d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac653:{NFSU2_TR(0x6ac653);
__builtin_memmove((R+4),(R+24),4);
}
B6ac655:{NFSU2_TR(0x6ac655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac656:{NFSU2_TR(0x6ac656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac65bull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ac65b:L6ac65b:{c.instructions+=3;NFSU2_TR(0x6ac65b);
__builtin_memmove((R+28),(R+0),4);
}
B6ac65d:{NFSU2_TR(0x6ac65d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac65f:{NFSU2_TR(0x6ac65f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac61bu);}goto L6ac61b;}}
}
B6ac661:L6ac661:{c.instructions+=5;NFSU2_TR(0x6ac661);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac663:{NFSU2_TR(0x6ac663);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac666:{NFSU2_TR(0x6ac666);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac667:{NFSU2_TR(0x6ac667);
__builtin_memmove((R+4),(R+24),4);
}
B6ac669:{NFSU2_TR(0x6ac669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac66eull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac66e:L6ac66e:{c.instructions+=3;NFSU2_TR(0x6ac66e);
__builtin_memmove((R+28),(R+0),4);
}
B6ac670:{NFSU2_TR(0x6ac670);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac672:{NFSU2_TR(0x6ac672);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac61bu);}goto L6ac61b;}}
}
B6ac674:L6ac674:{c.instructions+=4;NFSU2_TR(0x6ac674);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac677:{NFSU2_TR(0x6ac677);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac678:{NFSU2_TR(0x6ac678);
__builtin_memmove((R+4),(R+24),4);
}
B6ac67a:{NFSU2_TR(0x6ac67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac67full));
TAIL_STATIC(0x69df0cu,69d);
}
B6ac67f:L6ac67f:{c.instructions+=3;NFSU2_TR(0x6ac67f);
__builtin_memmove((R+28),(R+0),4);
}
B6ac681:{NFSU2_TR(0x6ac681);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac683:{NFSU2_TR(0x6ac683);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac61bu);}goto L6ac61b;}}
}
B6ac685:L6ac685:{c.instructions+=6;NFSU2_TR(0x6ac685);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac688:{NFSU2_TR(0x6ac688);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac68b:{NFSU2_TR(0x6ac68b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ac691:{NFSU2_TR(0x6ac691);
__builtin_memmove((R+4),(R+24),4);
}
B6ac693:{NFSU2_TR(0x6ac693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac694:{NFSU2_TR(0x6ac694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac699ull));
TAIL_STATIC(0x6a61ecu,6a6);
}
B6ac699:L6ac699:{c.instructions+=3;NFSU2_TR(0x6ac699);
__builtin_memmove((R+28),(R+0),4);
}
B6ac69b:{NFSU2_TR(0x6ac69b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac69d:{NFSU2_TR(0x6ac69d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac61bu);}goto L6ac61b;}}
}
B6ac6a3:L6ac6a3:{c.instructions+=5;NFSU2_TR(0x6ac6a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac6a5:{NFSU2_TR(0x6ac6a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac6a8:{NFSU2_TR(0x6ac6a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac6a9:{NFSU2_TR(0x6ac6a9);
__builtin_memmove((R+4),(R+24),4);
}
B6ac6ab:{NFSU2_TR(0x6ac6ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac6b0ull));
TAIL_STATIC(0x6a68b7u,6a6);
}
B6ac6b0:L6ac6b0:{c.instructions+=3;NFSU2_TR(0x6ac6b0);
__builtin_memmove((R+28),(R+0),4);
}
B6ac6b2:{NFSU2_TR(0x6ac6b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac6b4:{NFSU2_TR(0x6ac6b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac61bu);}goto L6ac61b;}}
}
B6ac6ba:L6ac6ba:{c.instructions+=4;NFSU2_TR(0x6ac6ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ac6bd:{NFSU2_TR(0x6ac6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac6be:{NFSU2_TR(0x6ac6be);
__builtin_memmove((R+4),(R+24),4);
}
B6ac6c0:{NFSU2_TR(0x6ac6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac6c5ull));
TAIL_STATIC(0x69df0cu,69d);
}
B6ac6c5:L6ac6c5:{c.instructions+=3;NFSU2_TR(0x6ac6c5);
__builtin_memmove((R+28),(R+0),4);
}
B6ac6c7:{NFSU2_TR(0x6ac6c7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ac6c9:{NFSU2_TR(0x6ac6c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac61bu);}goto L6ac61b;}}
}
B6ac6cf:L6ac6cf:{c.instructions+=2;NFSU2_TR(0x6ac6cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ac6d6:{NFSU2_TR(0x6ac6d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac82b;}}
}
B6ac6dc:L6ac6dc:{c.instructions+=3;NFSU2_TR(0x6ac6dc);
__builtin_memmove((R+4),(R+24),4);
}
B6ac6de:{NFSU2_TR(0x6ac6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac6e1:{NFSU2_TR(0x6ac6e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac6e6ull));
TAIL_STATIC(0x69e7abu,69e);
}
B6ac6e6:L6ac6e6:{c.instructions+=3;NFSU2_TR(0x6ac6e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac6e9:{NFSU2_TR(0x6ac6e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac6ec:{NFSU2_TR(0x6ac6ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac82b;}}
}
B6ac6f2:L6ac6f2:{c.instructions+=7;NFSU2_TR(0x6ac6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac6f5:{NFSU2_TR(0x6ac6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac6f8:{NFSU2_TR(0x6ac6f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac6fb:{NFSU2_TR(0x6ac6fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ac6fd:{NFSU2_TR(0x6ac6fd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6ac703:{NFSU2_TR(0x6ac703);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac709:{NFSU2_TR(0x6ac709);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac7ec;}}
}
B6ac70f:L6ac70f:{c.instructions+=5;NFSU2_TR(0x6ac70f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac711:{NFSU2_TR(0x6ac711);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac714:{NFSU2_TR(0x6ac714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac717:{NFSU2_TR(0x6ac717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac71a:{NFSU2_TR(0x6ac71a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac7c2;}}
}
B6ac720:L6ac720:{c.instructions+=14;NFSU2_TR(0x6ac720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac723:{NFSU2_TR(0x6ac723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac726:{NFSU2_TR(0x6ac726);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac729:{NFSU2_TR(0x6ac729);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6ac72c:{NFSU2_TR(0x6ac72c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ac72f:{NFSU2_TR(0x6ac72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac732:{NFSU2_TR(0x6ac732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac735:{NFSU2_TR(0x6ac735);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ac738:{NFSU2_TR(0x6ac738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac73b:{NFSU2_TR(0x6ac73b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ac73e:{NFSU2_TR(0x6ac73e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ac741:{NFSU2_TR(0x6ac741);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac744:{NFSU2_TR(0x6ac744);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac747:{NFSU2_TR(0x6ac747);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac749:L6ac749:{c.instructions+=3;NFSU2_TR(0x6ac749);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac74c:{NFSU2_TR(0x6ac74c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac74f:{NFSU2_TR(0x6ac74f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac751:L6ac751:{c.instructions+=3;NFSU2_TR(0x6ac751);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac754:{NFSU2_TR(0x6ac754);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac757:{NFSU2_TR(0x6ac757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac759:L6ac759:{c.instructions+=3;NFSU2_TR(0x6ac759);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac75c:{NFSU2_TR(0x6ac75c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac75f:{NFSU2_TR(0x6ac75f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac761:L6ac761:{c.instructions+=3;NFSU2_TR(0x6ac761);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac764:{NFSU2_TR(0x6ac764);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac767:{NFSU2_TR(0x6ac767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac769:L6ac769:{c.instructions+=3;NFSU2_TR(0x6ac769);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ac76c:{NFSU2_TR(0x6ac76c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac76f:{NFSU2_TR(0x6ac76f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac771:L6ac771:{c.instructions+=3;NFSU2_TR(0x6ac771);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ac773:{NFSU2_TR(0x6ac773);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac776:{NFSU2_TR(0x6ac776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac778:L6ac778:{c.instructions+=2;NFSU2_TR(0x6ac778);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac77b:{NFSU2_TR(0x6ac77b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac795;}}
}
B6ac77d:L6ac77d:{c.instructions+=3;NFSU2_TR(0x6ac77d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B6ac780:{NFSU2_TR(0x6ac780);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac782:{NFSU2_TR(0x6ac782);
if(r1(R+518)){{goto L6ac78d;}}
}
B6ac784:L6ac784:{c.instructions+=3;NFSU2_TR(0x6ac784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac787:{NFSU2_TR(0x6ac787);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ac78a:{NFSU2_TR(0x6ac78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac78d:L6ac78d:{c.instructions+=3;NFSU2_TR(0x6ac78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac790:{NFSU2_TR(0x6ac790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac793:{NFSU2_TR(0x6ac793);
{goto L6ac7b3;}
}
B6ac795:L6ac795:{c.instructions+=11;NFSU2_TR(0x6ac795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ac798:{NFSU2_TR(0x6ac798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac79b:{NFSU2_TR(0x6ac79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac79e:{NFSU2_TR(0x6ac79e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ac7a1:{NFSU2_TR(0x6ac7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac7a4:{NFSU2_TR(0x6ac7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ac7a7:{NFSU2_TR(0x6ac7a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ac7aa:{NFSU2_TR(0x6ac7aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ac7ad:{NFSU2_TR(0x6ac7ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ac7ae:{NFSU2_TR(0x6ac7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac7b1:{NFSU2_TR(0x6ac7b1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ac7b3:L6ac7b3:{c.instructions+=4;NFSU2_TR(0x6ac7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac7b6:{NFSU2_TR(0x6ac7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac7b9:{NFSU2_TR(0x6ac7b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ac7bc:{NFSU2_TR(0x6ac7bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac720u);}goto L6ac720;}}
}
B6ac7c2:L6ac7c2:{c.instructions+=2;NFSU2_TR(0x6ac7c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac7c5:{NFSU2_TR(0x6ac7c5);
if(r1(R+518)){{goto L6ac7ec;}}
}
B6ac7c7:L6ac7c7:{c.instructions+=11;NFSU2_TR(0x6ac7c7);
__builtin_memmove((R+28),(R+4),4);
}
B6ac7c9:{NFSU2_TR(0x6ac7c9);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6ac7cf:{NFSU2_TR(0x6ac7cf);
__builtin_memmove((R+8),(R+4),4);
}
B6ac7d1:{NFSU2_TR(0x6ac7d1);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x10000000ull))));
}
B6ac7d7:{NFSU2_TR(0x6ac7d7);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B6ac7d9:{NFSU2_TR(0x6ac7d9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6ac7db:{NFSU2_TR(0x6ac7db);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B6ac7dd:{NFSU2_TR(0x6ac7dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ac7df:{NFSU2_TR(0x6ac7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac7e2:{NFSU2_TR(0x6ac7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac7e5:{NFSU2_TR(0x6ac7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac7ec:L6ac7ec:{c.instructions+=4;NFSU2_TR(0x6ac7ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac7ef:{NFSU2_TR(0x6ac7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac7f2:{NFSU2_TR(0x6ac7f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ac7f5:{NFSU2_TR(0x6ac7f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac6f2u);}goto L6ac6f2;}}
}
B6ac7fb:L6ac7fb:{c.instructions+=2;NFSU2_TR(0x6ac7fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac7fe:{NFSU2_TR(0x6ac7fe);
if(r1(R+518)){{goto L6ac82b;}}
}
B6ac800:L6ac800:{c.instructions+=2;NFSU2_TR(0x6ac800);
__builtin_memmove((R+4),(R+24),4);
}
B6ac802:{NFSU2_TR(0x6ac802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac807ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6ac807:L6ac807:{c.instructions+=2;NFSU2_TR(0x6ac807);
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
B6ac809:{NFSU2_TR(0x6ac809);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac628u);}goto L6ac628;}}
}
B6ac80f:L6ac80f:{c.instructions+=1;NFSU2_TR(0x6ac80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac814ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6ac814:L6ac814:{c.instructions+=2;NFSU2_TR(0x6ac814);
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
B6ac816:{NFSU2_TR(0x6ac816);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac628u);}goto L6ac628;}}
}
B6ac81c:L6ac81c:{c.instructions+=2;NFSU2_TR(0x6ac81c);
__builtin_memmove((R+4),(R+24),4);
}
B6ac81e:{NFSU2_TR(0x6ac81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac823ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ac823:L6ac823:{c.instructions+=2;NFSU2_TR(0x6ac823);
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
B6ac825:{NFSU2_TR(0x6ac825);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac628u);}goto L6ac628;}}
}
B6ac82b:L6ac82b:{c.instructions+=2;NFSU2_TR(0x6ac82b);
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
B6ac82d:{NFSU2_TR(0x6ac82d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac628u);}goto L6ac628;}
}
B6ac832:L6ac832:{c.instructions+=8;NFSU2_TR(0x6ac832);
__builtin_memmove((R+28),(R+28),4);
}
B6ac834:{NFSU2_TR(0x6ac834);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac835:{NFSU2_TR(0x6ac835);
__builtin_memmove((R+20),(R+16),4);
}
B6ac837:{NFSU2_TR(0x6ac837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac838:{NFSU2_TR(0x6ac838);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac839:{NFSU2_TR(0x6ac839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac83a:{NFSU2_TR(0x6ac83a);
__builtin_memmove((R+24),(R+4),4);
}
B6ac83c:{NFSU2_TR(0x6ac83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac841ull));
TAIL_STATIC(0x69ef9eu,69e);
}
B6ac841:L6ac841:{c.instructions+=3;NFSU2_TR(0x6ac841);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ac843:{NFSU2_TR(0x6ac843);
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
B6ac845:{NFSU2_TR(0x6ac845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac84b:L6ac84b:{c.instructions+=2;NFSU2_TR(0x6ac84b);
__builtin_memmove((R+4),(R+24),4);
}
B6ac84d:{NFSU2_TR(0x6ac84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac852ull));
TAIL_STATIC(0x69f745u,69f);
}
B6ac852:L6ac852:{c.instructions+=2;NFSU2_TR(0x6ac852);
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
B6ac854:{NFSU2_TR(0x6ac854);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac85a:L6ac85a:{c.instructions+=2;NFSU2_TR(0x6ac85a);
__builtin_memmove((R+4),(R+24),4);
}
B6ac85c:{NFSU2_TR(0x6ac85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac861ull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6ac861:L6ac861:{c.instructions+=2;NFSU2_TR(0x6ac861);
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
B6ac863:{NFSU2_TR(0x6ac863);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac869:L6ac869:{c.instructions+=2;NFSU2_TR(0x6ac869);
__builtin_memmove((R+4),(R+24),4);
}
B6ac86b:{NFSU2_TR(0x6ac86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac870ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ac870:L6ac870:{c.instructions+=2;NFSU2_TR(0x6ac870);
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
B6ac872:{NFSU2_TR(0x6ac872);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac878:L6ac878:{c.instructions+=2;NFSU2_TR(0x6ac878);
__builtin_memmove((R+4),(R+24),4);
}
B6ac87a:{NFSU2_TR(0x6ac87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac87full));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6ac87f:L6ac87f:{c.instructions+=2;NFSU2_TR(0x6ac87f);
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
B6ac881:{NFSU2_TR(0x6ac881);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac887:L6ac887:{c.instructions+=3;NFSU2_TR(0x6ac887);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac889:{NFSU2_TR(0x6ac889);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ac88c:{NFSU2_TR(0x6ac88c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ac8bb;}}
}
B6ac88e:L6ac88e:{c.instructions+=6;NFSU2_TR(0x6ac88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ac891:{NFSU2_TR(0x6ac891);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ac894:{NFSU2_TR(0x6ac894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ac896:{NFSU2_TR(0x6ac896);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6ac89c:{NFSU2_TR(0x6ac89c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac8a2:{NFSU2_TR(0x6ac8a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac8b5;}}
}
B6ac8a4:L6ac8a4:{c.instructions+=4;NFSU2_TR(0x6ac8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ac8a7:{NFSU2_TR(0x6ac8a7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6ac8ad:{NFSU2_TR(0x6ac8ad);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000000ull))));
}
B6ac8b3:{NFSU2_TR(0x6ac8b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ac8b5:L6ac8b5:{c.instructions+=3;NFSU2_TR(0x6ac8b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ac8b6:{NFSU2_TR(0x6ac8b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ac8b9:{NFSU2_TR(0x6ac8b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac88eu);}goto L6ac88e;}}
}
B6ac8bb:L6ac8bb:{c.instructions+=2;NFSU2_TR(0x6ac8bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ac8c2:{NFSU2_TR(0x6ac8c2);
if(r1(R+518)){{goto L6ac8d5;}}
}
B6ac8c4:L6ac8c4:{c.instructions+=3;NFSU2_TR(0x6ac8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ac8ce:{NFSU2_TR(0x6ac8ce);
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
B6ac8d0:{NFSU2_TR(0x6ac8d0);
{goto L6acaac;}
}
B6ac8d5:L6ac8d5:{c.instructions+=2;NFSU2_TR(0x6ac8d5);
__builtin_memmove((R+4),(R+24),4);
}
B6ac8d7:{NFSU2_TR(0x6ac8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac8dcull));
TAIL_STATIC(0x6a2ec6u,6a2);
}
B6ac8dc:L6ac8dc:{c.instructions+=2;NFSU2_TR(0x6ac8dc);
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
B6ac8de:{NFSU2_TR(0x6ac8de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac8e4:L6ac8e4:{c.instructions+=2;NFSU2_TR(0x6ac8e4);
__builtin_memmove((R+4),(R+24),4);
}
B6ac8e6:{NFSU2_TR(0x6ac8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac8ebull));
TAIL_STATIC(0x69f45fu,69f);
}
B6ac8eb:L6ac8eb:{c.instructions+=2;NFSU2_TR(0x6ac8eb);
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
B6ac8ed:{NFSU2_TR(0x6ac8ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaac;}}
}
B6ac8f3:L6ac8f3:{c.instructions+=2;NFSU2_TR(0x6ac8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ac8f6:{NFSU2_TR(0x6ac8f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac8f7:L6ac8f7:{c.instructions+=2;NFSU2_TR(0x6ac8f7);
__builtin_memmove((R+4),(R+24),4);
}
B6ac8f9:{NFSU2_TR(0x6ac8f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac8feull));
TAIL_STATIC(0x6a74c6u,6a7);
}
B6ac8fe:L6ac8fe:{c.instructions+=2;NFSU2_TR(0x6ac8fe);
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
B6ac900:{NFSU2_TR(0x6ac900);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac906;}}
}
B6ac902:L6ac902:{c.instructions+=2;NFSU2_TR(0x6ac902);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac904:{NFSU2_TR(0x6ac904);
{goto L6ac90c;}
}
B6ac906:L6ac906:{c.instructions+=1;NFSU2_TR(0x6ac906);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac90c:L6ac90c:{c.instructions+=6;NFSU2_TR(0x6ac90c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac90e:{NFSU2_TR(0x6ac90e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac910:{NFSU2_TR(0x6ac910);
__builtin_memmove((R+4),(R+518),1);
}
B6ac913:{NFSU2_TR(0x6ac913);
__builtin_memmove((R+28),(R+4),4);
}
B6ac915:{NFSU2_TR(0x6ac915);
__builtin_memmove((R+4),(R+24),4);
}
B6ac917:{NFSU2_TR(0x6ac917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac91cull));
TAIL_STATIC(0x69f745u,69f);
}
B6ac91c:L6ac91c:{c.instructions+=2;NFSU2_TR(0x6ac91c);
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
B6ac91e:{NFSU2_TR(0x6ac91e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac924;}}
}
B6ac920:L6ac920:{c.instructions+=2;NFSU2_TR(0x6ac920);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac922:{NFSU2_TR(0x6ac922);
{goto L6ac92a;}
}
B6ac924:L6ac924:{c.instructions+=1;NFSU2_TR(0x6ac924);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac92a:L6ac92a:{c.instructions+=6;NFSU2_TR(0x6ac92a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac92c:{NFSU2_TR(0x6ac92c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac92e:{NFSU2_TR(0x6ac92e);
__builtin_memmove((R+4),(R+518),1);
}
B6ac931:{NFSU2_TR(0x6ac931);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac933:{NFSU2_TR(0x6ac933);
__builtin_memmove((R+4),(R+24),4);
}
B6ac935:{NFSU2_TR(0x6ac935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac93aull));
TAIL_STATIC(0x6a823bu,6a8);
}
B6ac93a:L6ac93a:{c.instructions+=2;NFSU2_TR(0x6ac93a);
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
B6ac93c:{NFSU2_TR(0x6ac93c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac942;}}
}
B6ac93e:L6ac93e:{c.instructions+=2;NFSU2_TR(0x6ac93e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac940:{NFSU2_TR(0x6ac940);
{goto L6ac948;}
}
B6ac942:L6ac942:{c.instructions+=1;NFSU2_TR(0x6ac942);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac948:L6ac948:{c.instructions+=7;NFSU2_TR(0x6ac948);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac94a:{NFSU2_TR(0x6ac94a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac94c:{NFSU2_TR(0x6ac94c);
__builtin_memmove((R+4),(R+518),1);
}
B6ac94f:{NFSU2_TR(0x6ac94f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ac950:{NFSU2_TR(0x6ac950);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac952:{NFSU2_TR(0x6ac952);
__builtin_memmove((R+4),(R+24),4);
}
B6ac954:{NFSU2_TR(0x6ac954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac959ull));
TAIL_STATIC(0x6a8713u,6a8);
}
B6ac959:L6ac959:{c.instructions+=2;NFSU2_TR(0x6ac959);
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
B6ac95b:{NFSU2_TR(0x6ac95b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac961;}}
}
B6ac95d:L6ac95d:{c.instructions+=2;NFSU2_TR(0x6ac95d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac95f:{NFSU2_TR(0x6ac95f);
{goto L6ac967;}
}
B6ac961:L6ac961:{c.instructions+=1;NFSU2_TR(0x6ac961);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac967:L6ac967:{c.instructions+=6;NFSU2_TR(0x6ac967);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac969:{NFSU2_TR(0x6ac969);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac96b:{NFSU2_TR(0x6ac96b);
__builtin_memmove((R+4),(R+518),1);
}
B6ac96e:{NFSU2_TR(0x6ac96e);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac970:{NFSU2_TR(0x6ac970);
__builtin_memmove((R+4),(R+24),4);
}
B6ac972:{NFSU2_TR(0x6ac972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac977ull));
TAIL_STATIC(0x69fbf7u,69f);
}
B6ac977:L6ac977:{c.instructions+=2;NFSU2_TR(0x6ac977);
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
B6ac979:{NFSU2_TR(0x6ac979);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac97f;}}
}
B6ac97b:L6ac97b:{c.instructions+=2;NFSU2_TR(0x6ac97b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac97d:{NFSU2_TR(0x6ac97d);
{goto L6ac985;}
}
B6ac97f:L6ac97f:{c.instructions+=1;NFSU2_TR(0x6ac97f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac985:L6ac985:{c.instructions+=6;NFSU2_TR(0x6ac985);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac987:{NFSU2_TR(0x6ac987);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac989:{NFSU2_TR(0x6ac989);
__builtin_memmove((R+4),(R+518),1);
}
B6ac98c:{NFSU2_TR(0x6ac98c);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac98e:{NFSU2_TR(0x6ac98e);
__builtin_memmove((R+4),(R+24),4);
}
B6ac990:{NFSU2_TR(0x6ac990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac995ull));
TAIL_STATIC(0x6a899au,6a8);
}
B6ac995:L6ac995:{c.instructions+=2;NFSU2_TR(0x6ac995);
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
B6ac997:{NFSU2_TR(0x6ac997);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac99d;}}
}
B6ac999:L6ac999:{c.instructions+=2;NFSU2_TR(0x6ac999);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac99b:{NFSU2_TR(0x6ac99b);
{goto L6ac9a3;}
}
B6ac99d:L6ac99d:{c.instructions+=1;NFSU2_TR(0x6ac99d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac9a3:L6ac9a3:{c.instructions+=6;NFSU2_TR(0x6ac9a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac9a5:{NFSU2_TR(0x6ac9a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac9a7:{NFSU2_TR(0x6ac9a7);
__builtin_memmove((R+4),(R+518),1);
}
B6ac9aa:{NFSU2_TR(0x6ac9aa);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac9ac:{NFSU2_TR(0x6ac9ac);
__builtin_memmove((R+4),(R+24),4);
}
B6ac9ae:{NFSU2_TR(0x6ac9ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac9b3ull));
TAIL_STATIC(0x6a00a6u,6a0);
}
B6ac9b3:L6ac9b3:{c.instructions+=2;NFSU2_TR(0x6ac9b3);
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
B6ac9b5:{NFSU2_TR(0x6ac9b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac9bb;}}
}
B6ac9b7:L6ac9b7:{c.instructions+=2;NFSU2_TR(0x6ac9b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac9b9:{NFSU2_TR(0x6ac9b9);
{goto L6ac9c1;}
}
B6ac9bb:L6ac9bb:{c.instructions+=1;NFSU2_TR(0x6ac9bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac9c1:L6ac9c1:{c.instructions+=6;NFSU2_TR(0x6ac9c1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac9c3:{NFSU2_TR(0x6ac9c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac9c5:{NFSU2_TR(0x6ac9c5);
__builtin_memmove((R+4),(R+518),1);
}
B6ac9c8:{NFSU2_TR(0x6ac9c8);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac9ca:{NFSU2_TR(0x6ac9ca);
__builtin_memmove((R+4),(R+24),4);
}
B6ac9cc:{NFSU2_TR(0x6ac9cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac9d1ull));
TAIL_STATIC(0x6a03aau,6a0);
}
B6ac9d1:L6ac9d1:{c.instructions+=2;NFSU2_TR(0x6ac9d1);
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
B6ac9d3:{NFSU2_TR(0x6ac9d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac9d9;}}
}
B6ac9d5:L6ac9d5:{c.instructions+=2;NFSU2_TR(0x6ac9d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac9d7:{NFSU2_TR(0x6ac9d7);
{goto L6ac9df;}
}
B6ac9d9:L6ac9d9:{c.instructions+=1;NFSU2_TR(0x6ac9d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac9df:L6ac9df:{c.instructions+=6;NFSU2_TR(0x6ac9df);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac9e1:{NFSU2_TR(0x6ac9e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ac9e3:{NFSU2_TR(0x6ac9e3);
__builtin_memmove((R+4),(R+518),1);
}
B6ac9e6:{NFSU2_TR(0x6ac9e6);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ac9e8:{NFSU2_TR(0x6ac9e8);
__builtin_memmove((R+4),(R+24),4);
}
B6ac9ea:{NFSU2_TR(0x6ac9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ac9efull));
TAIL_STATIC(0x6aa1e9u,6aa);
}
B6ac9ef:L6ac9ef:{c.instructions+=2;NFSU2_TR(0x6ac9ef);
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
B6ac9f1:{NFSU2_TR(0x6ac9f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ac9f7;}}
}
B6ac9f3:L6ac9f3:{c.instructions+=2;NFSU2_TR(0x6ac9f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ac9f5:{NFSU2_TR(0x6ac9f5);
{goto L6ac9fd;}
}
B6ac9f7:L6ac9f7:{c.instructions+=1;NFSU2_TR(0x6ac9f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6ac9fd:L6ac9fd:{c.instructions+=5;NFSU2_TR(0x6ac9fd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ac9ff:{NFSU2_TR(0x6ac9ff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aca01:{NFSU2_TR(0x6aca01);
__builtin_memmove((R+4),(R+518),1);
}
B6aca04:{NFSU2_TR(0x6aca04);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6aca06:{NFSU2_TR(0x6aca06);
if(r1(R+518)){{goto L6aca18;}}
}
B6aca08:L6aca08:{c.instructions+=3;NFSU2_TR(0x6aca08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aca0b:{NFSU2_TR(0x6aca0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x100ull))));
}
B6aca12:{NFSU2_TR(0x6aca12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac8f7u);}goto L6ac8f7;}}
}
B6aca18:L6aca18:{c.instructions+=2;NFSU2_TR(0x6aca18);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aca1f:{NFSU2_TR(0x6aca1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aca31;}}
}
B6aca21:L6aca21:{c.instructions+=5;NFSU2_TR(0x6aca21);
u8 U[4];
w4(U+0,u32(0x7baeacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aca26:{NFSU2_TR(0x6aca26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aca27:{NFSU2_TR(0x6aca27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aca28:{NFSU2_TR(0x6aca28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aca29:{NFSU2_TR(0x6aca29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aca2eull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6aca2e:L6aca2e:{c.instructions+=1;NFSU2_TR(0x6aca2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6aca31:L6aca31:{c.instructions+=3;NFSU2_TR(0x6aca31);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6aca33:{NFSU2_TR(0x6aca33);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aca36:{NFSU2_TR(0x6aca36);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aca68;}}
}
B6aca38:L6aca38:{c.instructions+=8;NFSU2_TR(0x6aca38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aca3b:{NFSU2_TR(0x6aca3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aca3e:{NFSU2_TR(0x6aca3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aca41:{NFSU2_TR(0x6aca41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aca44:{NFSU2_TR(0x6aca44);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6aca47:{NFSU2_TR(0x6aca47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aca4a:{NFSU2_TR(0x6aca4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6aca4d:{NFSU2_TR(0x6aca4d);
if(r1(R+518)){{goto L6aca62;}}
}
B6aca4f:L6aca4f:{c.instructions+=2;NFSU2_TR(0x6aca4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6aca52:{NFSU2_TR(0x6aca52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aca62;}}
}
B6aca54:L6aca54:{c.instructions+=4;NFSU2_TR(0x6aca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aca57:{NFSU2_TR(0x6aca57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aca5b:{NFSU2_TR(0x6aca5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aca5f:{NFSU2_TR(0x6aca5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aca62:L6aca62:{c.instructions+=3;NFSU2_TR(0x6aca62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6aca63:{NFSU2_TR(0x6aca63);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6aca66:{NFSU2_TR(0x6aca66);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aca38u);}goto L6aca38;}}
}
B6aca68:L6aca68:{c.instructions+=2;NFSU2_TR(0x6aca68);
__builtin_memmove((R+4),(R+24),4);
}
B6aca6a:{NFSU2_TR(0x6aca6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aca6full));
TAIL_STATIC(0x6a6f6au,6a6);
}
B6aca6f:L6aca6f:{c.instructions+=2;NFSU2_TR(0x6aca6f);
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
B6aca71:{NFSU2_TR(0x6aca71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6aca73:L6aca73:{c.instructions+=2;NFSU2_TR(0x6aca73);
__builtin_memmove((R+4),(R+24),4);
}
B6aca75:{NFSU2_TR(0x6aca75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aca7aull));
TAIL_STATIC(0x6a0accu,6a0);
}
B6aca7a:L6aca7a:{c.instructions+=2;NFSU2_TR(0x6aca7a);
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
B6aca7c:{NFSU2_TR(0x6aca7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6aca7e:L6aca7e:{c.instructions+=2;NFSU2_TR(0x6aca7e);
__builtin_memmove((R+4),(R+24),4);
}
B6aca80:{NFSU2_TR(0x6aca80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aca85ull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6aca85:L6aca85:{c.instructions+=2;NFSU2_TR(0x6aca85);
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
B6aca87:{NFSU2_TR(0x6aca87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6aca89:L6aca89:{c.instructions+=2;NFSU2_TR(0x6aca89);
__builtin_memmove((R+4),(R+24),4);
}
B6aca8b:{NFSU2_TR(0x6aca8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aca90ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6aca90:L6aca90:{c.instructions+=2;NFSU2_TR(0x6aca90);
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
B6aca92:{NFSU2_TR(0x6aca92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6aca94:L6aca94:{c.instructions+=2;NFSU2_TR(0x6aca94);
__builtin_memmove((R+4),(R+24),4);
}
B6aca96:{NFSU2_TR(0x6aca96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aca9bull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6aca9b:L6aca9b:{c.instructions+=2;NFSU2_TR(0x6aca9b);
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
B6aca9d:{NFSU2_TR(0x6aca9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acaab;}}
}
B6aca9f:L6aca9f:{c.instructions+=2;NFSU2_TR(0x6aca9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acaa9:{NFSU2_TR(0x6acaa9);
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
B6acaab:L6acaab:{c.instructions+=1;NFSU2_TR(0x6acaab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acaac:L6acaac:{c.instructions+=4;NFSU2_TR(0x6acaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acaad:{NFSU2_TR(0x6acaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6acaae:{NFSU2_TR(0x6acaae);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6acaaf:{NFSU2_TR(0x6acaaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6acab0:L6acab0:{c.instructions+=4;NFSU2_TR(0x6acab0);
__builtin_memmove((R+28),(R+28),4);
}
B6acab2:{NFSU2_TR(0x6acab2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acab3:{NFSU2_TR(0x6acab3);
__builtin_memmove((R+24),(R+4),4);
}
B6acab5:{NFSU2_TR(0x6acab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acabaull));
TAIL_STATIC(0x6a2ec6u,6a2);
}
B6acaba:L6acaba:{c.instructions+=2;NFSU2_TR(0x6acaba);
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
B6acabc:{NFSU2_TR(0x6acabc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb9;}}
}
B6acac2:L6acac2:{c.instructions+=2;NFSU2_TR(0x6acac2);
__builtin_memmove((R+4),(R+24),4);
}
B6acac4:{NFSU2_TR(0x6acac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acac9ull));
TAIL_STATIC(0x6aa79fu,6aa);
}
B6acac9:L6acac9:{c.instructions+=2;NFSU2_TR(0x6acac9);
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
B6acacb:{NFSU2_TR(0x6acacb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb9;}}
}
B6acad1:L6acad1:{c.instructions+=6;NFSU2_TR(0x6acad1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acad2:{NFSU2_TR(0x6acad2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6acad4:{NFSU2_TR(0x6acad4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6acad5:{NFSU2_TR(0x6acad5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acad6:{NFSU2_TR(0x6acad6);
__builtin_memmove((R+4),(R+24),4);
}
B6acad8:{NFSU2_TR(0x6acad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acaddull));
TAIL_STATIC(0x6a46f4u,6a4);
}
B6acadd:L6acadd:{c.instructions+=2;NFSU2_TR(0x6acadd);
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
B6acadf:{NFSU2_TR(0x6acadf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb8;}}
}
B6acae5:L6acae5:{c.instructions+=2;NFSU2_TR(0x6acae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acae6:{NFSU2_TR(0x6acae6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6acae8:L6acae8:{c.instructions+=3;NFSU2_TR(0x6acae8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acae9:{NFSU2_TR(0x6acae9);
__builtin_memmove((R+4),(R+24),4);
}
B6acaeb:{NFSU2_TR(0x6acaeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acaf0ull));
TAIL_STATIC(0x6a8713u,6a8);
}
B6acaf0:L6acaf0:{c.instructions+=2;NFSU2_TR(0x6acaf0);
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
B6acaf2:{NFSU2_TR(0x6acaf2);
if(r1(R+518)){{goto L6acafe;}}
}
B6acaf4:L6acaf4:{c.instructions+=1;NFSU2_TR(0x6acaf4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acafa:L6acafa:{c.instructions+=2;NFSU2_TR(0x6acafa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6acafc:{NFSU2_TR(0x6acafc);
if(r1(R+518)){{goto L6acb07;}}
}
B6acafe:L6acafe:{c.instructions+=3;NFSU2_TR(0x6acafe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6acaff:{NFSU2_TR(0x6acaff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B6acb05:{NFSU2_TR(0x6acb05);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6acae8u);}goto L6acae8;}}
}
B6acb07:L6acb07:{c.instructions+=2;NFSU2_TR(0x6acb07);
__builtin_memmove((R+4),(R+24),4);
}
B6acb09:{NFSU2_TR(0x6acb09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb0eull));
TAIL_STATIC(0x6a30ffu,6a3);
}
B6acb0e:L6acb0e:{c.instructions+=2;NFSU2_TR(0x6acb0e);
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
B6acb10:{NFSU2_TR(0x6acb10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb16:L6acb16:{c.instructions+=2;NFSU2_TR(0x6acb16);
__builtin_memmove((R+4),(R+24),4);
}
B6acb18:{NFSU2_TR(0x6acb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb1dull));
TAIL_STATIC(0x6aae66u,6aa);
}
B6acb1d:L6acb1d:{c.instructions+=2;NFSU2_TR(0x6acb1d);
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
B6acb1f:{NFSU2_TR(0x6acb1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb25:L6acb25:{c.instructions+=3;NFSU2_TR(0x6acb25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acb27:{NFSU2_TR(0x6acb27);
__builtin_memmove((R+4),(R+24),4);
}
B6acb29:{NFSU2_TR(0x6acb29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb2cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acb2c:L6acb2c:{c.instructions+=2;NFSU2_TR(0x6acb2c);
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
B6acb2e:{NFSU2_TR(0x6acb2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb34:L6acb34:{c.instructions+=3;NFSU2_TR(0x6acb34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acb36:{NFSU2_TR(0x6acb36);
__builtin_memmove((R+4),(R+24),4);
}
B6acb38:{NFSU2_TR(0x6acb38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb3dull));
TAIL_STATIC(0x6a46f4u,6a4);
}
B6acb3d:L6acb3d:{c.instructions+=2;NFSU2_TR(0x6acb3d);
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
B6acb3f:{NFSU2_TR(0x6acb3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb41:L6acb41:{c.instructions+=2;NFSU2_TR(0x6acb41);
__builtin_memmove((R+4),(R+24),4);
}
B6acb43:{NFSU2_TR(0x6acb43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb48ull));
TAIL_STATIC(0x6abd0au,6ab);
}
B6acb48:L6acb48:{c.instructions+=2;NFSU2_TR(0x6acb48);
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
B6acb4a:{NFSU2_TR(0x6acb4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb4c:L6acb4c:{c.instructions+=3;NFSU2_TR(0x6acb4c);
__builtin_memmove((R+4),(R+24),4);
}
B6acb4e:{NFSU2_TR(0x6acb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acb54:{NFSU2_TR(0x6acb54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb59ull));
TAIL_STATIC(0x6a493eu,6a4);
}
B6acb59:L6acb59:{c.instructions+=2;NFSU2_TR(0x6acb59);
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
B6acb5b:{NFSU2_TR(0x6acb5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb5d:L6acb5d:{c.instructions+=2;NFSU2_TR(0x6acb5d);
__builtin_memmove((R+4),(R+24),4);
}
B6acb5f:{NFSU2_TR(0x6acb5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb64ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac264u);}goto L6ac264;}
}
B6acb64:L6acb64:{c.instructions+=2;NFSU2_TR(0x6acb64);
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
B6acb66:{NFSU2_TR(0x6acb66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb68:L6acb68:{c.instructions+=2;NFSU2_TR(0x6acb68);
__builtin_memmove((R+4),(R+24),4);
}
B6acb6a:{NFSU2_TR(0x6acb6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb6full));
TAIL_STATIC(0x69ce02u,69c);
}
B6acb6f:L6acb6f:{c.instructions+=2;NFSU2_TR(0x6acb6f);
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
B6acb71:{NFSU2_TR(0x6acb71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb73:L6acb73:{c.instructions+=3;NFSU2_TR(0x6acb73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acb75:{NFSU2_TR(0x6acb75);
__builtin_memmove((R+4),(R+24),4);
}
B6acb77:{NFSU2_TR(0x6acb77);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acb7a:L6acb7a:{c.instructions+=2;NFSU2_TR(0x6acb7a);
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
B6acb7c:{NFSU2_TR(0x6acb7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb7e:L6acb7e:{c.instructions+=3;NFSU2_TR(0x6acb7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acb80:{NFSU2_TR(0x6acb80);
__builtin_memmove((R+4),(R+24),4);
}
B6acb82:{NFSU2_TR(0x6acb82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb85ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acb85:L6acb85:{c.instructions+=2;NFSU2_TR(0x6acb85);
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
B6acb87:{NFSU2_TR(0x6acb87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb89:L6acb89:{c.instructions+=2;NFSU2_TR(0x6acb89);
__builtin_memmove((R+4),(R+24),4);
}
B6acb8b:{NFSU2_TR(0x6acb8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb90ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6acb90:L6acb90:{c.instructions+=2;NFSU2_TR(0x6acb90);
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
B6acb92:{NFSU2_TR(0x6acb92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb94:L6acb94:{c.instructions+=2;NFSU2_TR(0x6acb94);
__builtin_memmove((R+4),(R+24),4);
}
B6acb96:{NFSU2_TR(0x6acb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acb9bull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6acb9b:L6acb9b:{c.instructions+=2;NFSU2_TR(0x6acb9b);
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
B6acb9d:{NFSU2_TR(0x6acb9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acb9f:L6acb9f:{c.instructions+=2;NFSU2_TR(0x6acb9f);
__builtin_memmove((R+4),(R+24),4);
}
B6acba1:{NFSU2_TR(0x6acba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acba6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac498u);}goto L6ac498;}
}
B6acba6:L6acba6:{c.instructions+=2;NFSU2_TR(0x6acba6);
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
B6acba8:{NFSU2_TR(0x6acba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acbaa:L6acbaa:{c.instructions+=2;NFSU2_TR(0x6acbaa);
__builtin_memmove((R+4),(R+24),4);
}
B6acbac:{NFSU2_TR(0x6acbac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acbb1ull));
TAIL_STATIC(0x6a4c7au,6a4);
}
B6acbb1:L6acbb1:{c.instructions+=2;NFSU2_TR(0x6acbb1);
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
B6acbb3:{NFSU2_TR(0x6acbb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbb7;}}
}
B6acbb5:L6acbb5:{c.instructions+=1;NFSU2_TR(0x6acbb5);
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
B6acbb7:L6acbb7:{c.instructions+=1;NFSU2_TR(0x6acbb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acbb8:L6acbb8:{c.instructions+=1;NFSU2_TR(0x6acbb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6acbb9:L6acbb9:{c.instructions+=2;NFSU2_TR(0x6acbb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acbba:{NFSU2_TR(0x6acbba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6acbbb:L6acbbb:{c.instructions+=10;NFSU2_TR(0x6acbbb);
__builtin_memmove((R+28),(R+28),4);
}
B6acbbd:{NFSU2_TR(0x6acbbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acbbe:{NFSU2_TR(0x6acbbe);
__builtin_memmove((R+20),(R+16),4);
}
B6acbc0:{NFSU2_TR(0x6acbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acbc3:{NFSU2_TR(0x6acbc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acbc4:{NFSU2_TR(0x6acbc4);
__builtin_memmove((R+24),(R+4),4);
}
B6acbc6:{NFSU2_TR(0x6acbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acbcd:{NFSU2_TR(0x6acbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acbd4:{NFSU2_TR(0x6acbd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acbd6:{NFSU2_TR(0x6acbd6);
if(r1(R+518)){{goto L6acbdb;}}
}
B6acbd8:L6acbd8:{c.instructions+=1;NFSU2_TR(0x6acbd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6acbdb:L6acbdb:{c.instructions+=2;NFSU2_TR(0x6acbdb);
__builtin_memmove((R+4),(R+24),4);
}
B6acbdd:{NFSU2_TR(0x6acbdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acbe2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ac832u);}goto L6ac832;}
}
B6acbe2:L6acbe2:{c.instructions+=2;NFSU2_TR(0x6acbe2);
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
B6acbe4:{NFSU2_TR(0x6acbe4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbf3;}}
}
B6acbe6:L6acbe6:{c.instructions+=2;NFSU2_TR(0x6acbe6);
__builtin_memmove((R+4),(R+24),4);
}
B6acbe8:{NFSU2_TR(0x6acbe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acbedull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6acab0u);}goto L6acab0;}
}
B6acbed:L6acbed:{c.instructions+=2;NFSU2_TR(0x6acbed);
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
B6acbef:{NFSU2_TR(0x6acbef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6acbf3;}}
}
B6acbf1:L6acbf1:{c.instructions+=1;NFSU2_TR(0x6acbf1);
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
B6acbf3:L6acbf3:{c.instructions+=3;NFSU2_TR(0x6acbf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acbf4:{NFSU2_TR(0x6acbf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6acbf5:{NFSU2_TR(0x6acbf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6acbf8:L6acbf8:{c.instructions+=6;NFSU2_TR(0x6acbf8);
__builtin_memmove((R+28),(R+28),4);
}
B6acbfa:{NFSU2_TR(0x6acbfa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acbfb:{NFSU2_TR(0x6acbfb);
__builtin_memmove((R+20),(R+16),4);
}
B6acbfd:{NFSU2_TR(0x6acbfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acbfe:{NFSU2_TR(0x6acbfe);
__builtin_memmove((R+24),(R+4),4);
}
B6acc00:{NFSU2_TR(0x6acc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acc05ull));
TAIL_STATIC(0x6cd15fu,6cd);
}
B6acc05:L6acc05:{c.instructions+=10;NFSU2_TR(0x6acc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acc08:{NFSU2_TR(0x6acc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acc0e:{NFSU2_TR(0x6acc0e);
u8 U[4];
w4(U+0,u32(0x7baf88ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6acc14:{NFSU2_TR(0x6acc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x80aff0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acc1e:{NFSU2_TR(0x6acc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w4(U+4,u32(0x80b230ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acc28:{NFSU2_TR(0x6acc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
w4(U+4,u32(0x80b4e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acc32:{NFSU2_TR(0x6acc32);
__builtin_memmove((R+0),(R+24),4);
}
B6acc34:{NFSU2_TR(0x6acc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acc35:{NFSU2_TR(0x6acc35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6acc36:{NFSU2_TR(0x6acc36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6acc39:L6acc39:{c.instructions+=6;NFSU2_TR(0x6acc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acc3f:{NFSU2_TR(0x6acc3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acc44:{NFSU2_TR(0x6acc44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc45:{NFSU2_TR(0x6acc45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc46:{NFSU2_TR(0x6acc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acc4c:{NFSU2_TR(0x6acc4c);
if(r1(R+518)){{goto L6accdb;}}
}
B6acc52:L6acc52:{c.instructions+=2;NFSU2_TR(0x6acc52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe03ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acc57:{NFSU2_TR(0x6acc57);
if(r1(R+518)){{goto L6acca8;}}
}
B6acc59:L6acc59:{c.instructions+=2;NFSU2_TR(0x6acc59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acc5e:{NFSU2_TR(0x6acc5e);
if(r1(R+518)){{goto L6acc83;}}
}
B6acc60:L6acc60:{c.instructions+=2;NFSU2_TR(0x6acc60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff03ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acc65:{NFSU2_TR(0x6acc65);
if(r1(R+518)){{goto L6acc83;}}
}
B6acc67:L6acc67:{c.instructions+=5;NFSU2_TR(0x6acc67);
u8 U[4];
w4(U+0,u32(0x7bb02cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc6c:{NFSU2_TR(0x6acc6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc6e:{NFSU2_TR(0x6acc6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc70:{NFSU2_TR(0x6acc70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc71:{NFSU2_TR(0x6acc71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acc76ull));
TAIL_STATIC(0x69e936u,69e);
}
B6acc76:L6acc76:{c.instructions+=3;NFSU2_TR(0x6acc76);
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
B6acc79:{NFSU2_TR(0x6acc79);
w4(R+0,u32(0x80004005ull));
}
B6acc7e:{NFSU2_TR(0x6acc7e);
{goto L6acd3d;}
}
B6acc83:L6acc83:{c.instructions+=14;NFSU2_TR(0x6acc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acc87:{NFSU2_TR(0x6acc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x402001a0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acc8e:{NFSU2_TR(0x6acc8e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc90:{NFSU2_TR(0x6acc90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6acc91:{NFSU2_TR(0x6acc91);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc93:{NFSU2_TR(0x6acc93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acc94:{NFSU2_TR(0x6acc94);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6acc96:{NFSU2_TR(0x6acc96);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acc98:{NFSU2_TR(0x6acc98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acc99:{NFSU2_TR(0x6acc99);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6acc9a:{NFSU2_TR(0x6acc9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x534ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6acca0:{NFSU2_TR(0x6acca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acca3:{NFSU2_TR(0x6acca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acca6:{NFSU2_TR(0x6acca6);
{goto L6accfa;}
}
B6acca8:L6acca8:{c.instructions+=16;NFSU2_TR(0x6acca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40200100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6accaf:{NFSU2_TR(0x6accaf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6accb1:{NFSU2_TR(0x6accb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6accb2:{NFSU2_TR(0x6accb2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6accb4:{NFSU2_TR(0x6accb4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6accb5:{NFSU2_TR(0x6accb5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xfe4ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6accbb:{NFSU2_TR(0x6accbb);
w4(R+24,u32(0x800ull));
}
B6accc0:{NFSU2_TR(0x6accc0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6accc2:{NFSU2_TR(0x6accc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6accc3:{NFSU2_TR(0x6accc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6accc6:{NFSU2_TR(0x6accc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6accc9:{NFSU2_TR(0x6accc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acccc:{NFSU2_TR(0x6acccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acccf:{NFSU2_TR(0x6acccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6accd6:{NFSU2_TR(0x6accd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6accd9:{NFSU2_TR(0x6accd9);
{goto L6acd0a;}
}
B6accdb:L6accdb:{c.instructions+=12;NFSU2_TR(0x6accdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40200100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acce2:{NFSU2_TR(0x6acce2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acce4:{NFSU2_TR(0x6acce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6acce5:{NFSU2_TR(0x6acce5);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acce7:{NFSU2_TR(0x6acce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acce8:{NFSU2_TR(0x6acce8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6accea:{NFSU2_TR(0x6accea);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6accec:{NFSU2_TR(0x6accec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6acced:{NFSU2_TR(0x6acced);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xfe4ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6accf3:{NFSU2_TR(0x6accf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6accf4:{NFSU2_TR(0x6accf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6accf7:{NFSU2_TR(0x6accf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6accfa:L6accfa:{c.instructions+=4;NFSU2_TR(0x6accfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6accfd:{NFSU2_TR(0x6accfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd00:{NFSU2_TR(0x6acd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acd07:{NFSU2_TR(0x6acd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd0a:L6acd0a:{c.instructions+=11;NFSU2_TR(0x6acd0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6acd0e:{NFSU2_TR(0x6acd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd11:{NFSU2_TR(0x6acd11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd14:{NFSU2_TR(0x6acd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd17:{NFSU2_TR(0x6acd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acd1e:{NFSU2_TR(0x6acd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acd25:{NFSU2_TR(0x6acd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd28:{NFSU2_TR(0x6acd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acd2f:{NFSU2_TR(0x6acd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd35:{NFSU2_TR(0x6acd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd3b:{NFSU2_TR(0x6acd3b);
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
B6acd3d:L6acd3d:{c.instructions+=3;NFSU2_TR(0x6acd3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acd3e:{NFSU2_TR(0x6acd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acd3f:{NFSU2_TR(0x6acd3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6acd40:L6acd40:{c.instructions+=10;NFSU2_TR(0x6acd40);
__builtin_memmove((R+28),(R+28),4);
}
B6acd42:{NFSU2_TR(0x6acd42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acd43:{NFSU2_TR(0x6acd43);
__builtin_memmove((R+20),(R+16),4);
}
B6acd45:{NFSU2_TR(0x6acd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B6acd48:{NFSU2_TR(0x6acd48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acd49:{NFSU2_TR(0x6acd49);
__builtin_memmove((R+24),(R+4),4);
}
B6acd4b:{NFSU2_TR(0x6acd4b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6acd4d:{NFSU2_TR(0x6acd4d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6acd4f:{NFSU2_TR(0x6acd4f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
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
B6acd55:{NFSU2_TR(0x6acd55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acf70;}}
}
B6acd5b:L6acd5b:{c.instructions+=7;NFSU2_TR(0x6acd5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6acd5f:{NFSU2_TR(0x6acd5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acd60:{NFSU2_TR(0x6acd60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acd61:{NFSU2_TR(0x6acd61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd64:{NFSU2_TR(0x6acd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd67:{NFSU2_TR(0x6acd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd6a:{NFSU2_TR(0x6acd6a);
if(r1(R+518)){{goto L6ace3c;}}
}
B6acd70:L6acd70:{c.instructions+=8;NFSU2_TR(0x6acd70);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6acd73:{NFSU2_TR(0x6acd73);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acd76:{NFSU2_TR(0x6acd76);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6acd77:{NFSU2_TR(0x6acd77);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6acd78:{NFSU2_TR(0x6acd78);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6acd79:{NFSU2_TR(0x6acd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acd7c:{NFSU2_TR(0x6acd7c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6acd7d:{NFSU2_TR(0x6acd7d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ace10;}}
}
B6acd83:L6acd83:{c.instructions+=8;NFSU2_TR(0x6acd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acd86:{NFSU2_TR(0x6acd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6acd89:{NFSU2_TR(0x6acd89);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6acd8c:{NFSU2_TR(0x6acd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acd8f:{NFSU2_TR(0x6acd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6acd92:{NFSU2_TR(0x6acd92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6acd95:{NFSU2_TR(0x6acd95);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6acd99:{NFSU2_TR(0x6acd99);
if(r1(R+518)){{goto L6acdff;}}
}
B6acd9b:L6acd9b:{c.instructions+=4;NFSU2_TR(0x6acd9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6acd9e:{NFSU2_TR(0x6acd9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acda0:{NFSU2_TR(0x6acda0);
__builtin_memmove((R+4),(R+24),4);
}
B6acda2:{NFSU2_TR(0x6acda2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acda5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acda5:L6acda5:{c.instructions+=5;NFSU2_TR(0x6acda5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6acda8:{NFSU2_TR(0x6acda8);
__builtin_memmove((R+12),(R+0),4);
}
B6acdaa:{NFSU2_TR(0x6acdaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acdac:{NFSU2_TR(0x6acdac);
__builtin_memmove((R+4),(R+24),4);
}
B6acdae:{NFSU2_TR(0x6acdae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acdb1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acdb1:L6acdb1:{c.instructions+=3;NFSU2_TR(0x6acdb1);
__builtin_memmove((R+4),(R+12),4);
}
B6acdb3:{NFSU2_TR(0x6acdb3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6acdb4:{NFSU2_TR(0x6acdb4);
if(r1(R+518)){{goto L6acdea;}}
}
B6acdb6:L6acdb6:{c.instructions+=2;NFSU2_TR(0x6acdb6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6acdb9:{NFSU2_TR(0x6acdb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acdff;}}
}
B6acdbb:L6acdbb:{c.instructions+=2;NFSU2_TR(0x6acdbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acdbd:{NFSU2_TR(0x6acdbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acdff;}}
}
B6acdbf:L6acdbf:{c.instructions+=2;NFSU2_TR(0x6acdbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6acdc2:{NFSU2_TR(0x6acdc2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6acdff;}}
}
B6acdc4:L6acdc4:{c.instructions+=2;NFSU2_TR(0x6acdc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6acdc7:{NFSU2_TR(0x6acdc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acdff;}}
}
B6acdc9:L6acdc9:{c.instructions+=5;NFSU2_TR(0x6acdc9);
u8 U[4];
w4(U+0,u32(0x7bb164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acdce:{NFSU2_TR(0x6acdce);
u8 U[4];
w4(U+0,u32(0x11bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acdd3:{NFSU2_TR(0x6acdd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6acdd6:{NFSU2_TR(0x6acdd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acdd7:{NFSU2_TR(0x6acdd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acddcull));
TAIL_STATIC(0x69e936u,69e);
}
B6acddc:L6acddc:{c.instructions+=6;NFSU2_TR(0x6acddc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6acdde:{NFSU2_TR(0x6acdde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6acde1:{NFSU2_TR(0x6acde1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6acde2:{NFSU2_TR(0x6acde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acde5:{NFSU2_TR(0x6acde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acde8:{NFSU2_TR(0x6acde8);
{goto L6acdff;}
}
B6acdea:L6acdea:{c.instructions+=2;NFSU2_TR(0x6acdea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acdec:{NFSU2_TR(0x6acdec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acdff;}}
}
B6acdee:L6acdee:{c.instructions+=4;NFSU2_TR(0x6acdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acdf1:{NFSU2_TR(0x6acdf1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6acdf9:{NFSU2_TR(0x6acdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acdfc:{NFSU2_TR(0x6acdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acdff:L6acdff:{c.instructions+=4;NFSU2_TR(0x6acdff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ace02:{NFSU2_TR(0x6ace02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ace05:{NFSU2_TR(0x6ace05);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ace08:{NFSU2_TR(0x6ace08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6acd83u);}goto L6acd83;}}
}
B6ace0e:L6ace0e:{c.instructions+=1;NFSU2_TR(0x6ace0e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ace10:L6ace10:{c.instructions+=2;NFSU2_TR(0x6ace10);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ace12:{NFSU2_TR(0x6ace12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ace14:L6ace14:{c.instructions+=2;NFSU2_TR(0x6ace14);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ace18:{NFSU2_TR(0x6ace18);
if(r1(R+518)){{goto L6ace1b;}}
}
B6ace1a:L6ace1a:{c.instructions+=1;NFSU2_TR(0x6ace1a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ace1b:L6ace1b:{c.instructions+=3;NFSU2_TR(0x6ace1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ace1c:{NFSU2_TR(0x6ace1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6ace1f:{NFSU2_TR(0x6ace1f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ace14u);}goto L6ace14;}}
}
B6ace21:L6ace21:{c.instructions+=2;NFSU2_TR(0x6ace21);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ace24:{NFSU2_TR(0x6ace24);
if(r1(R+518)){{goto L6acf62;}}
}
B6ace2a:L6ace2a:{c.instructions+=4;NFSU2_TR(0x6ace2a);
u8 U[4];
w4(U+0,u32(0x7bb120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ace2f:{NFSU2_TR(0x6ace2f);
u8 U[4];
w4(U+0,u32(0x11bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ace34:{NFSU2_TR(0x6ace34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ace37:{NFSU2_TR(0x6ace37);
{goto L6acf52;}
}
B6ace3c:L6ace3c:{c.instructions+=3;NFSU2_TR(0x6ace3c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ace3e:{NFSU2_TR(0x6ace3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ace3f:{NFSU2_TR(0x6ace3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ace42:L6ace42:{c.instructions+=1;NFSU2_TR(0x6ace42);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ace44;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ace42u);}goto L6ace42;}
}
B6ace44:L6ace44:{c.instructions+=10;NFSU2_TR(0x6ace44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ace46:{NFSU2_TR(0x6ace46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ace49:{NFSU2_TR(0x6ace49);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ace4a:{NFSU2_TR(0x6ace4a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ace4b:{NFSU2_TR(0x6ace4b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ace4d:{NFSU2_TR(0x6ace4d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ace4e:{NFSU2_TR(0x6ace4e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ace4f:{NFSU2_TR(0x6ace4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ace52:{NFSU2_TR(0x6ace52);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ace53:{NFSU2_TR(0x6ace53);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6acee9;}}
}
B6ace59:L6ace59:{c.instructions+=8;NFSU2_TR(0x6ace59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ace5c:{NFSU2_TR(0x6ace5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ace5f:{NFSU2_TR(0x6ace5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ace62:{NFSU2_TR(0x6ace62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ace65:{NFSU2_TR(0x6ace65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ace68:{NFSU2_TR(0x6ace68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ace6b:{NFSU2_TR(0x6ace6b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6ace6f:{NFSU2_TR(0x6ace6f);
if(r1(R+518)){{goto L6aced8;}}
}
B6ace71:L6ace71:{c.instructions+=4;NFSU2_TR(0x6ace71);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ace74:{NFSU2_TR(0x6ace74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ace76:{NFSU2_TR(0x6ace76);
__builtin_memmove((R+4),(R+24),4);
}
B6ace78:{NFSU2_TR(0x6ace78);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ace7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ace7b:L6ace7b:{c.instructions+=5;NFSU2_TR(0x6ace7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ace7e:{NFSU2_TR(0x6ace7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ace81:{NFSU2_TR(0x6ace81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ace83:{NFSU2_TR(0x6ace83);
__builtin_memmove((R+4),(R+24),4);
}
B6ace85:{NFSU2_TR(0x6ace85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ace88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ace88:L6ace88:{c.instructions+=3;NFSU2_TR(0x6ace88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ace8b:{NFSU2_TR(0x6ace8b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6ace8e:{NFSU2_TR(0x6ace8e);
if(r1(R+518)){{goto L6acec0;}}
}
B6ace90:L6ace90:{c.instructions+=3;NFSU2_TR(0x6ace90);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ace91:{NFSU2_TR(0x6ace91);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6ace92:{NFSU2_TR(0x6ace92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aced8;}}
}
B6ace94:L6ace94:{c.instructions+=2;NFSU2_TR(0x6ace94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ace96:{NFSU2_TR(0x6ace96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aced8;}}
}
B6ace98:L6ace98:{c.instructions+=2;NFSU2_TR(0x6ace98);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ace9b:{NFSU2_TR(0x6ace9b);
if(r1(R+518)){{goto L6aced8;}}
}
B6ace9d:L6ace9d:{c.instructions+=2;NFSU2_TR(0x6ace9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6acea0:{NFSU2_TR(0x6acea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aced8;}}
}
B6acea2:L6acea2:{c.instructions+=5;NFSU2_TR(0x6acea2);
u8 U[4];
w4(U+0,u32(0x7bb108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acea7:{NFSU2_TR(0x6acea7);
u8 U[4];
w4(U+0,u32(0x11b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aceac:{NFSU2_TR(0x6aceac);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aceaf:{NFSU2_TR(0x6aceaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aceb0:{NFSU2_TR(0x6aceb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aceb5ull));
TAIL_STATIC(0x69e936u,69e);
}
B6aceb5:L6aceb5:{c.instructions+=4;NFSU2_TR(0x6aceb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6aceb8:{NFSU2_TR(0x6aceb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acebb:{NFSU2_TR(0x6acebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6acebe:{NFSU2_TR(0x6acebe);
{goto L6aced8;}
}
B6acec0:L6acec0:{c.instructions+=2;NFSU2_TR(0x6acec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6acec3:{NFSU2_TR(0x6acec3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6aced8;}}
}
B6acec5:L6acec5:{c.instructions+=6;NFSU2_TR(0x6acec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6acec8:{NFSU2_TR(0x6acec8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6acecb:{NFSU2_TR(0x6acecb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6acecd:{NFSU2_TR(0x6acecd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aced1:{NFSU2_TR(0x6aced1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aced4:{NFSU2_TR(0x6aced4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6aced8:L6aced8:{c.instructions+=4;NFSU2_TR(0x6aced8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acedb:{NFSU2_TR(0x6acedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acede:{NFSU2_TR(0x6acede);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6acee1:{NFSU2_TR(0x6acee1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ace59u);}goto L6ace59;}}
}
B6acee7:L6acee7:{c.instructions+=1;NFSU2_TR(0x6acee7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6acee9:L6acee9:{c.instructions+=3;NFSU2_TR(0x6acee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aceec:{NFSU2_TR(0x6aceec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aceef:{NFSU2_TR(0x6aceef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6acef1:L6acef1:{c.instructions+=6;NFSU2_TR(0x6acef1);
__builtin_memmove((R+0),(R+28),4);
}
B6acef3:{NFSU2_TR(0x6acef3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6acef5:{NFSU2_TR(0x6acef5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6acef8:{NFSU2_TR(0x6acef8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acefa:{NFSU2_TR(0x6acefa);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6acefe:{NFSU2_TR(0x6acefe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6aceff:L6aceff:{c.instructions+=7;NFSU2_TR(0x6aceff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6acf01:{NFSU2_TR(0x6acf01);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6acf03:{NFSU2_TR(0x6acf03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B6acf06:{NFSU2_TR(0x6acf06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6acf09:{NFSU2_TR(0x6acf09);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6acf0b:{NFSU2_TR(0x6acf0b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6acf0c:{NFSU2_TR(0x6acf0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aceffu);}goto L6aceff;}}
}
B6acf0e:L6acf0e:{c.instructions+=2;NFSU2_TR(0x6acf0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acf10:{NFSU2_TR(0x6acf10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acf73;}}
}
B6acf12:L6acf12:{c.instructions+=2;NFSU2_TR(0x6acf12);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6acf14:{NFSU2_TR(0x6acf14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acf33;}}
}
B6acf16:L6acf16:{c.instructions+=5;NFSU2_TR(0x6acf16);
u8 U[4];
w4(U+0,u32(0x7bb0c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf1b:{NFSU2_TR(0x6acf1b);
u8 U[4];
w4(U+0,u32(0x11b2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf20:{NFSU2_TR(0x6acf20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6acf23:{NFSU2_TR(0x6acf23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf24:{NFSU2_TR(0x6acf24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acf29ull));
TAIL_STATIC(0x69e936u,69e);
}
B6acf29:L6acf29:{c.instructions+=2;NFSU2_TR(0x6acf29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6acf2c:{NFSU2_TR(0x6acf2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acf33:L6acf33:{c.instructions+=1;NFSU2_TR(0x6acf33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acf3a:L6acf3a:{c.instructions+=3;NFSU2_TR(0x6acf3a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6acf3b:{NFSU2_TR(0x6acf3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6acf3e:{NFSU2_TR(0x6acf3e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6acef1u);}goto L6acef1;}}
}
B6acf40:L6acf40:{c.instructions+=2;NFSU2_TR(0x6acf40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6acf44:{NFSU2_TR(0x6acf44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acf62;}}
}
B6acf46:L6acf46:{c.instructions+=3;NFSU2_TR(0x6acf46);
u8 U[4];
w4(U+0,u32(0x7bb090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf4b:{NFSU2_TR(0x6acf4b);
u8 U[4];
w4(U+0,u32(0x11baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf50:{NFSU2_TR(0x6acf50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf52:L6acf52:{c.instructions+=2;NFSU2_TR(0x6acf52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf53:{NFSU2_TR(0x6acf53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acf58ull));
TAIL_STATIC(0x69e936u,69e);
}
B6acf58:L6acf58:{c.instructions+=2;NFSU2_TR(0x6acf58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6acf5b:{NFSU2_TR(0x6acf5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acf62:L6acf62:{c.instructions+=6;NFSU2_TR(0x6acf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acf65:{NFSU2_TR(0x6acf65);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6acf67:{NFSU2_TR(0x6acf67);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6acf69:{NFSU2_TR(0x6acf69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6acf6a:{NFSU2_TR(0x6acf6a);
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
B6acf6f:{NFSU2_TR(0x6acf6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6acf70:L6acf70:{c.instructions+=3;NFSU2_TR(0x6acf70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6acf71:{NFSU2_TR(0x6acf71);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6acf72:{NFSU2_TR(0x6acf72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6acf73:L6acf73:{c.instructions+=2;NFSU2_TR(0x6acf73);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6acf76:{NFSU2_TR(0x6acf76);
if(r1(R+518)){{goto L6acf97;}}
}
B6acf78:L6acf78:{c.instructions+=6;NFSU2_TR(0x6acf78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf79:{NFSU2_TR(0x6acf79);
u8 U[4];
w4(U+0,u32(0x7bb068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf7e:{NFSU2_TR(0x6acf7e);
u8 U[4];
w4(U+0,u32(0x11b1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf83:{NFSU2_TR(0x6acf83);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6acf87:{NFSU2_TR(0x6acf87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acf88:{NFSU2_TR(0x6acf88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acf8dull));
TAIL_STATIC(0x69e936u,69e);
}
B6acf8d:L6acf8d:{c.instructions+=2;NFSU2_TR(0x6acf8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6acf90:{NFSU2_TR(0x6acf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6acf97:L6acf97:{c.instructions+=2;NFSU2_TR(0x6acf97);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6acf9b:{NFSU2_TR(0x6acf9b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6acf3au);}goto L6acf3a;}}
}
B6acf9d:L6acf9d:{c.instructions+=2;NFSU2_TR(0x6acf9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6acfa1:{NFSU2_TR(0x6acfa1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6acf3au);}goto L6acf3a;}
}
B6acfa3:L6acfa3:{c.instructions+=11;NFSU2_TR(0x6acfa3);
__builtin_memmove((R+28),(R+28),4);
}
B6acfa5:{NFSU2_TR(0x6acfa5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acfa6:{NFSU2_TR(0x6acfa6);
__builtin_memmove((R+20),(R+16),4);
}
B6acfa8:{NFSU2_TR(0x6acfa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acfa9:{NFSU2_TR(0x6acfa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acfaa:{NFSU2_TR(0x6acfaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6acfab:{NFSU2_TR(0x6acfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6acfae:{NFSU2_TR(0x6acfae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6acfb1:{NFSU2_TR(0x6acfb1);
__builtin_memmove((R+24),(R+4),4);
}
B6acfb3:{NFSU2_TR(0x6acfb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acfb5:{NFSU2_TR(0x6acfb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acfb8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acfb8:L6acfb8:{c.instructions+=5;NFSU2_TR(0x6acfb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6acfbb:{NFSU2_TR(0x6acfbb);
__builtin_memmove((R+12),(R+0),4);
}
B6acfbd:{NFSU2_TR(0x6acfbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6acfbf:{NFSU2_TR(0x6acfbf);
__builtin_memmove((R+4),(R+24),4);
}
B6acfc1:{NFSU2_TR(0x6acfc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6acfc4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6acfc4:L6acfc4:{c.instructions+=4;NFSU2_TR(0x6acfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6acfc7:{NFSU2_TR(0x6acfc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6acfc9:{NFSU2_TR(0x6acfc9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6acfcd:{NFSU2_TR(0x6acfcd);
if(r1(R+518)){TAIL_STATIC(0x6ad00fu,6ad);}
}
B6acfcf:L6acfcf:{c.instructions+=4;NFSU2_TR(0x6acfcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acfd2:{NFSU2_TR(0x6acfd2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6acfd4:{NFSU2_TR(0x6acfd4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6acfd6:{NFSU2_TR(0x6acfd6);
if(r1(R+518)){{goto L6acfda;}}
}
B6acfd8:L6acfd8:{c.instructions+=1;NFSU2_TR(0x6acfd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6acfda:L6acfda:{c.instructions+=2;NFSU2_TR(0x6acfda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6acfdd:{NFSU2_TR(0x6acfdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acfed;}}
}
B6acfdf:L6acfdf:{c.instructions+=2;NFSU2_TR(0x6acfdf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6acfe1:{NFSU2_TR(0x6acfe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acfff;}}
}
B6acfe3:L6acfe3:{c.instructions+=2;NFSU2_TR(0x6acfe3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6acfe5:{NFSU2_TR(0x6acfe5);
if(r1(R+518)){{goto L6acfff;}}
}
B6acfe7:L6acfe7:{c.instructions+=1;NFSU2_TR(0x6acfe7);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6acfed:L6acfed:{c.instructions+=2;NFSU2_TR(0x6acfed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6acff3:{NFSU2_TR(0x6acff3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6acfff;}}
}
B6acff5:L6acff5:{c.instructions+=3;NFSU2_TR(0x6acff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6acff8:{NFSU2_TR(0x6acff8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6acffa:{NFSU2_TR(0x6acffa);
TAIL_STATIC(0x6ad081u,6ad);
}
B6acfff:L6acfff:{c.instructions+=1;NFSU2_TR(0x6acfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6ad002u,6ad);
}
XIT:NFSU2_TR_EXIT(0x6ac,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
