#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ae,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ae,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 page_5ae(Cpu& c){return body_5ae(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ae(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ae000:goto L5ae000;
case 0x5ae003:c.instructions+=13;goto B5ae003;
case 0x5ae009:c.instructions+=12;goto B5ae009;
case 0x5ae00f:c.instructions+=11;goto B5ae00f;
case 0x5ae010:c.instructions+=10;goto B5ae010;
case 0x5ae011:c.instructions+=9;goto B5ae011;
case 0x5ae017:c.instructions+=8;goto B5ae017;
case 0x5ae01c:c.instructions+=7;goto B5ae01c;
case 0x5ae01e:c.instructions+=6;goto B5ae01e;
case 0x5ae020:c.instructions+=5;goto B5ae020;
case 0x5ae024:c.instructions+=4;goto B5ae024;
case 0x5ae028:c.instructions+=3;goto B5ae028;
case 0x5ae02c:c.instructions+=2;goto B5ae02c;
case 0x5ae030:c.instructions+=1;goto B5ae030;
case 0x5ae036:goto L5ae036;
case 0x5ae037:c.instructions+=7;goto B5ae037;
case 0x5ae038:c.instructions+=6;goto B5ae038;
case 0x5ae03c:c.instructions+=5;goto B5ae03c;
case 0x5ae041:c.instructions+=4;goto B5ae041;
case 0x5ae043:c.instructions+=3;goto B5ae043;
case 0x5ae049:c.instructions+=2;goto B5ae049;
case 0x5ae04d:c.instructions+=1;goto B5ae04d;
case 0x5ae050:goto L5ae050;
case 0x5ae056:c.instructions+=6;goto B5ae056;
case 0x5ae059:c.instructions+=5;goto B5ae059;
case 0x5ae05b:c.instructions+=4;goto B5ae05b;
case 0x5ae05e:c.instructions+=3;goto B5ae05e;
case 0x5ae060:c.instructions+=2;goto B5ae060;
case 0x5ae064:c.instructions+=1;goto B5ae064;
case 0x5ae069:goto L5ae069;
case 0x5ae06a:c.instructions+=3;goto B5ae06a;
case 0x5ae06e:c.instructions+=2;goto B5ae06e;
case 0x5ae06f:c.instructions+=1;goto B5ae06f;
case 0x5ae074:goto L5ae074;
case 0x5ae078:c.instructions+=9;goto B5ae078;
case 0x5ae07c:c.instructions+=8;goto B5ae07c;
case 0x5ae082:c.instructions+=7;goto B5ae082;
case 0x5ae083:c.instructions+=6;goto B5ae083;
case 0x5ae085:c.instructions+=5;goto B5ae085;
case 0x5ae088:c.instructions+=4;goto B5ae088;
case 0x5ae08b:c.instructions+=3;goto B5ae08b;
case 0x5ae08c:c.instructions+=2;goto B5ae08c;
case 0x5ae08d:c.instructions+=1;goto B5ae08d;
case 0x5ae093:goto L5ae093;
case 0x5ae095:c.instructions+=4;goto B5ae095;
case 0x5ae098:c.instructions+=3;goto B5ae098;
case 0x5ae09b:c.instructions+=2;goto B5ae09b;
case 0x5ae09d:c.instructions+=1;goto B5ae09d;
case 0x5ae09f:goto L5ae09f;
case 0x5ae0a2:c.instructions+=1;goto B5ae0a2;
case 0x5ae0a4:goto L5ae0a4;
case 0x5ae0a7:goto L5ae0a7;
case 0x5ae0a9:c.instructions+=4;goto B5ae0a9;
case 0x5ae0ab:c.instructions+=3;goto B5ae0ab;
case 0x5ae0ac:c.instructions+=2;goto B5ae0ac;
case 0x5ae0ae:c.instructions+=1;goto B5ae0ae;
case 0x5ae0b3:goto L5ae0b3;
case 0x5ae0b5:c.instructions+=1;goto B5ae0b5;
case 0x5ae0ba:goto L5ae0ba;
case 0x5ae0be:c.instructions+=5;goto B5ae0be;
case 0x5ae0c0:c.instructions+=4;goto B5ae0c0;
case 0x5ae0c1:c.instructions+=3;goto B5ae0c1;
case 0x5ae0c4:c.instructions+=2;goto B5ae0c4;
case 0x5ae0c6:c.instructions+=1;goto B5ae0c6;
case 0x5ae0c8:goto L5ae0c8;
case 0x5ae0cc:c.instructions+=3;goto B5ae0cc;
case 0x5ae0cd:c.instructions+=2;goto B5ae0cd;
case 0x5ae0cf:c.instructions+=1;goto B5ae0cf;
case 0x5ae0d0:goto L5ae0d0;
case 0x5ae0d2:c.instructions+=2;goto B5ae0d2;
case 0x5ae0d4:c.instructions+=1;goto B5ae0d4;
case 0x5ae0d6:goto L5ae0d6;
case 0x5ae0d8:c.instructions+=4;goto B5ae0d8;
case 0x5ae0d9:c.instructions+=3;goto B5ae0d9;
case 0x5ae0da:c.instructions+=2;goto B5ae0da;
case 0x5ae0dd:c.instructions+=1;goto B5ae0dd;
case 0x5ae0e0:goto L5ae0e0;
case 0x5ae0e2:c.instructions+=11;goto B5ae0e2;
case 0x5ae0e7:c.instructions+=10;goto B5ae0e7;
case 0x5ae0ed:c.instructions+=9;goto B5ae0ed;
case 0x5ae0ee:c.instructions+=8;goto B5ae0ee;
case 0x5ae0f5:c.instructions+=7;goto B5ae0f5;
case 0x5ae0f6:c.instructions+=6;goto B5ae0f6;
case 0x5ae0f7:c.instructions+=5;goto B5ae0f7;
case 0x5ae0f9:c.instructions+=4;goto B5ae0f9;
case 0x5ae0fd:c.instructions+=3;goto B5ae0fd;
case 0x5ae103:c.instructions+=2;goto B5ae103;
case 0x5ae10b:c.instructions+=1;goto B5ae10b;
case 0x5ae110:goto L5ae110;
case 0x5ae116:c.instructions+=2;goto B5ae116;
case 0x5ae11e:c.instructions+=1;goto B5ae11e;
case 0x5ae123:goto L5ae123;
case 0x5ae127:c.instructions+=4;goto B5ae127;
case 0x5ae128:c.instructions+=3;goto B5ae128;
case 0x5ae12f:c.instructions+=2;goto B5ae12f;
case 0x5ae132:c.instructions+=1;goto B5ae132;
case 0x5ae140:goto L5ae140;
case 0x5ae141:c.instructions+=2;goto B5ae141;
case 0x5ae143:c.instructions+=1;goto B5ae143;
case 0x5ae148:goto L5ae148;
case 0x5ae14d:c.instructions+=1;goto B5ae14d;
case 0x5ae14f:goto L5ae14f;
case 0x5ae150:c.instructions+=1;goto B5ae150;
case 0x5ae155:goto L5ae155;
case 0x5ae158:goto L5ae158;
case 0x5ae15a:c.instructions+=2;goto B5ae15a;
case 0x5ae15b:c.instructions+=1;goto B5ae15b;
case 0x5ae160:goto L5ae160;
case 0x5ae162:c.instructions+=13;goto B5ae162;
case 0x5ae167:c.instructions+=12;goto B5ae167;
case 0x5ae16d:c.instructions+=11;goto B5ae16d;
case 0x5ae16e:c.instructions+=10;goto B5ae16e;
case 0x5ae175:c.instructions+=9;goto B5ae175;
case 0x5ae176:c.instructions+=8;goto B5ae176;
case 0x5ae177:c.instructions+=7;goto B5ae177;
case 0x5ae178:c.instructions+=6;goto B5ae178;
case 0x5ae17a:c.instructions+=5;goto B5ae17a;
case 0x5ae17b:c.instructions+=4;goto B5ae17b;
case 0x5ae17f:c.instructions+=3;goto B5ae17f;
case 0x5ae181:c.instructions+=2;goto B5ae181;
case 0x5ae189:c.instructions+=1;goto B5ae189;
case 0x5ae18e:goto L5ae18e;
case 0x5ae190:c.instructions+=2;goto B5ae190;
case 0x5ae192:c.instructions+=1;goto B5ae192;
case 0x5ae194:goto L5ae194;
case 0x5ae197:c.instructions+=2;goto B5ae197;
case 0x5ae199:c.instructions+=1;goto B5ae199;
case 0x5ae19b:goto L5ae19b;
case 0x5ae19c:c.instructions+=1;goto B5ae19c;
case 0x5ae1a1:goto L5ae1a1;
case 0x5ae1a4:goto L5ae1a4;
case 0x5ae1a6:c.instructions+=2;goto B5ae1a6;
case 0x5ae1a8:c.instructions+=1;goto B5ae1a8;
case 0x5ae1aa:goto L5ae1aa;
case 0x5ae1ac:c.instructions+=3;goto B5ae1ac;
case 0x5ae1ae:c.instructions+=2;goto B5ae1ae;
case 0x5ae1b6:c.instructions+=1;goto B5ae1b6;
case 0x5ae1b8:goto L5ae1b8;
case 0x5ae1ba:c.instructions+=5;goto B5ae1ba;
case 0x5ae1bd:c.instructions+=4;goto B5ae1bd;
case 0x5ae1bf:c.instructions+=3;goto B5ae1bf;
case 0x5ae1c0:c.instructions+=2;goto B5ae1c0;
case 0x5ae1c3:c.instructions+=1;goto B5ae1c3;
case 0x5ae1c8:goto L5ae1c8;
case 0x5ae1ca:c.instructions+=3;goto B5ae1ca;
case 0x5ae1cd:c.instructions+=2;goto B5ae1cd;
case 0x5ae1cf:c.instructions+=1;goto B5ae1cf;
case 0x5ae1d1:goto L5ae1d1;
case 0x5ae1d5:c.instructions+=6;goto B5ae1d5;
case 0x5ae1d6:c.instructions+=5;goto B5ae1d6;
case 0x5ae1d7:c.instructions+=4;goto B5ae1d7;
case 0x5ae1d8:c.instructions+=3;goto B5ae1d8;
case 0x5ae1df:c.instructions+=2;goto B5ae1df;
case 0x5ae1e2:c.instructions+=1;goto B5ae1e2;
case 0x5ae1f0:goto L5ae1f0;
case 0x5ae200:goto L5ae200;
case 0x5ae201:c.instructions+=2;goto B5ae201;
case 0x5ae203:c.instructions+=1;goto B5ae203;
case 0x5ae208:goto L5ae208;
case 0x5ae20d:c.instructions+=1;goto B5ae20d;
case 0x5ae20f:goto L5ae20f;
case 0x5ae210:c.instructions+=1;goto B5ae210;
case 0x5ae215:goto L5ae215;
case 0x5ae218:goto L5ae218;
case 0x5ae21a:c.instructions+=2;goto B5ae21a;
case 0x5ae21b:c.instructions+=1;goto B5ae21b;
case 0x5ae220:goto L5ae220;
case 0x5ae221:c.instructions+=7;goto B5ae221;
case 0x5ae222:c.instructions+=6;goto B5ae222;
case 0x5ae226:c.instructions+=5;goto B5ae226;
case 0x5ae228:c.instructions+=4;goto B5ae228;
case 0x5ae22d:c.instructions+=3;goto B5ae22d;
case 0x5ae22e:c.instructions+=2;goto B5ae22e;
case 0x5ae230:c.instructions+=1;goto B5ae230;
case 0x5ae235:goto L5ae235;
case 0x5ae238:c.instructions+=2;goto B5ae238;
case 0x5ae23b:c.instructions+=1;goto B5ae23b;
case 0x5ae23d:goto L5ae23d;
case 0x5ae243:c.instructions+=5;goto B5ae243;
case 0x5ae249:c.instructions+=4;goto B5ae249;
case 0x5ae24b:c.instructions+=3;goto B5ae24b;
case 0x5ae24c:c.instructions+=2;goto B5ae24c;
case 0x5ae24d:c.instructions+=1;goto B5ae24d;
case 0x5ae250:goto L5ae250;
case 0x5ae256:c.instructions+=5;goto B5ae256;
case 0x5ae258:c.instructions+=4;goto B5ae258;
case 0x5ae25a:c.instructions+=3;goto B5ae25a;
case 0x5ae260:c.instructions+=2;goto B5ae260;
case 0x5ae261:c.instructions+=1;goto B5ae261;
case 0x5ae264:goto L5ae264;
case 0x5ae265:c.instructions+=3;goto B5ae265;
case 0x5ae266:c.instructions+=2;goto B5ae266;
case 0x5ae268:c.instructions+=1;goto B5ae268;
case 0x5ae26d:goto L5ae26d;
case 0x5ae26e:goto L5ae26e;
case 0x5ae26f:c.instructions+=2;goto B5ae26f;
case 0x5ae271:c.instructions+=1;goto B5ae271;
case 0x5ae276:goto L5ae276;
case 0x5ae27c:c.instructions+=7;goto B5ae27c;
case 0x5ae27e:c.instructions+=6;goto B5ae27e;
case 0x5ae281:c.instructions+=5;goto B5ae281;
case 0x5ae285:c.instructions+=4;goto B5ae285;
case 0x5ae289:c.instructions+=3;goto B5ae289;
case 0x5ae28a:c.instructions+=2;goto B5ae28a;
case 0x5ae28c:c.instructions+=1;goto B5ae28c;
case 0x5ae291:goto L5ae291;
case 0x5ae295:c.instructions+=2;goto B5ae295;
case 0x5ae297:c.instructions+=1;goto B5ae297;
case 0x5ae299:goto L5ae299;
case 0x5ae29c:c.instructions+=2;goto B5ae29c;
case 0x5ae29e:c.instructions+=1;goto B5ae29e;
case 0x5ae2a0:goto L5ae2a0;
case 0x5ae2a2:c.instructions+=2;goto B5ae2a2;
case 0x5ae2a4:c.instructions+=1;goto B5ae2a4;
case 0x5ae2a9:goto L5ae2a9;
case 0x5ae2af:c.instructions+=2;goto B5ae2af;
case 0x5ae2b0:c.instructions+=1;goto B5ae2b0;
case 0x5ae2b5:goto L5ae2b5;
case 0x5ae2b7:c.instructions+=1;goto B5ae2b7;
case 0x5ae2bc:goto L5ae2bc;
case 0x5ae2bd:c.instructions+=2;goto B5ae2bd;
case 0x5ae2be:c.instructions+=1;goto B5ae2be;
case 0x5ae2d0:goto L5ae2d0;
case 0x5ae2d6:c.instructions+=14;goto B5ae2d6;
case 0x5ae2d8:c.instructions+=13;goto B5ae2d8;
case 0x5ae2dd:c.instructions+=12;goto B5ae2dd;
case 0x5ae2de:c.instructions+=11;goto B5ae2de;
case 0x5ae2e5:c.instructions+=10;goto B5ae2e5;
case 0x5ae2e8:c.instructions+=9;goto B5ae2e8;
case 0x5ae2e9:c.instructions+=8;goto B5ae2e9;
case 0x5ae2ea:c.instructions+=7;goto B5ae2ea;
case 0x5ae2eb:c.instructions+=6;goto B5ae2eb;
case 0x5ae2ec:c.instructions+=5;goto B5ae2ec;
case 0x5ae2f0:c.instructions+=4;goto B5ae2f0;
case 0x5ae2f5:c.instructions+=3;goto B5ae2f5;
case 0x5ae2f7:c.instructions+=2;goto B5ae2f7;
case 0x5ae2f9:c.instructions+=1;goto B5ae2f9;
case 0x5ae2fe:goto L5ae2fe;
case 0x5ae301:c.instructions+=4;goto B5ae301;
case 0x5ae303:c.instructions+=3;goto B5ae303;
case 0x5ae305:c.instructions+=2;goto B5ae305;
case 0x5ae307:c.instructions+=1;goto B5ae307;
case 0x5ae30d:goto L5ae30d;
case 0x5ae30f:c.instructions+=4;goto B5ae30f;
case 0x5ae311:c.instructions+=3;goto B5ae311;
case 0x5ae315:c.instructions+=2;goto B5ae315;
case 0x5ae316:c.instructions+=1;goto B5ae316;
case 0x5ae31b:goto L5ae31b;
case 0x5ae31d:c.instructions+=2;goto B5ae31d;
case 0x5ae322:c.instructions+=1;goto B5ae322;
case 0x5ae328:goto L5ae328;
case 0x5ae32a:c.instructions+=6;goto B5ae32a;
case 0x5ae32c:c.instructions+=5;goto B5ae32c;
case 0x5ae32e:c.instructions+=4;goto B5ae32e;
case 0x5ae332:c.instructions+=3;goto B5ae332;
case 0x5ae333:c.instructions+=2;goto B5ae333;
case 0x5ae335:c.instructions+=1;goto B5ae335;
case 0x5ae33a:goto L5ae33a;
case 0x5ae33c:c.instructions+=6;goto B5ae33c;
case 0x5ae33e:c.instructions+=5;goto B5ae33e;
case 0x5ae340:c.instructions+=4;goto B5ae340;
case 0x5ae344:c.instructions+=3;goto B5ae344;
case 0x5ae345:c.instructions+=2;goto B5ae345;
case 0x5ae347:c.instructions+=1;goto B5ae347;
case 0x5ae34c:goto L5ae34c;
case 0x5ae351:c.instructions+=3;goto B5ae351;
case 0x5ae353:c.instructions+=2;goto B5ae353;
case 0x5ae359:c.instructions+=1;goto B5ae359;
case 0x5ae35b:goto L5ae35b;
case 0x5ae35d:c.instructions+=1;goto B5ae35d;
case 0x5ae35f:goto L5ae35f;
case 0x5ae362:goto L5ae362;
case 0x5ae367:c.instructions+=2;goto B5ae367;
case 0x5ae369:c.instructions+=1;goto B5ae369;
case 0x5ae36b:goto L5ae36b;
case 0x5ae36d:c.instructions+=1;goto B5ae36d;
case 0x5ae36f:goto L5ae36f;
case 0x5ae372:goto L5ae372;
case 0x5ae377:c.instructions+=2;goto B5ae377;
case 0x5ae378:c.instructions+=1;goto B5ae378;
case 0x5ae37d:goto L5ae37d;
case 0x5ae380:c.instructions+=4;goto B5ae380;
case 0x5ae384:c.instructions+=3;goto B5ae384;
case 0x5ae386:c.instructions+=2;goto B5ae386;
case 0x5ae38e:c.instructions+=1;goto B5ae38e;
case 0x5ae390:goto L5ae390;
case 0x5ae391:c.instructions+=3;goto B5ae391;
case 0x5ae392:c.instructions+=2;goto B5ae392;
case 0x5ae394:c.instructions+=1;goto B5ae394;
case 0x5ae399:goto L5ae399;
case 0x5ae39b:goto L5ae39b;
case 0x5ae39d:goto L5ae39d;
case 0x5ae39e:c.instructions+=3;goto B5ae39e;
case 0x5ae3a0:c.instructions+=2;goto B5ae3a0;
case 0x5ae3a8:c.instructions+=1;goto B5ae3a8;
case 0x5ae3ad:goto L5ae3ad;
case 0x5ae3b2:c.instructions+=3;goto B5ae3b2;
case 0x5ae3b3:c.instructions+=2;goto B5ae3b3;
case 0x5ae3b5:c.instructions+=1;goto B5ae3b5;
case 0x5ae3bb:goto L5ae3bb;
case 0x5ae3c0:goto L5ae3c0;
case 0x5ae3c2:c.instructions+=3;goto B5ae3c2;
case 0x5ae3c4:c.instructions+=2;goto B5ae3c4;
case 0x5ae3c9:c.instructions+=1;goto B5ae3c9;
case 0x5ae3ce:goto L5ae3ce;
case 0x5ae3d3:c.instructions+=2;goto B5ae3d3;
case 0x5ae3d5:c.instructions+=1;goto B5ae3d5;
case 0x5ae3d7:goto L5ae3d7;
case 0x5ae3dd:c.instructions+=1;goto B5ae3dd;
case 0x5ae3df:goto L5ae3df;
case 0x5ae3e1:goto L5ae3e1;
case 0x5ae3e6:c.instructions+=1;goto B5ae3e6;
case 0x5ae3eb:goto L5ae3eb;
case 0x5ae3ed:c.instructions+=2;goto B5ae3ed;
case 0x5ae3ef:c.instructions+=1;goto B5ae3ef;
case 0x5ae3f1:goto L5ae3f1;
case 0x5ae3f7:c.instructions+=14;goto B5ae3f7;
case 0x5ae3fd:c.instructions+=13;goto B5ae3fd;
case 0x5ae3ff:c.instructions+=12;goto B5ae3ff;
case 0x5ae403:c.instructions+=11;goto B5ae403;
case 0x5ae405:c.instructions+=10;goto B5ae405;
case 0x5ae407:c.instructions+=9;goto B5ae407;
case 0x5ae409:c.instructions+=8;goto B5ae409;
case 0x5ae40b:c.instructions+=7;goto B5ae40b;
case 0x5ae40f:c.instructions+=6;goto B5ae40f;
case 0x5ae413:c.instructions+=5;goto B5ae413;
case 0x5ae417:c.instructions+=4;goto B5ae417;
case 0x5ae418:c.instructions+=3;goto B5ae418;
case 0x5ae41a:c.instructions+=2;goto B5ae41a;
case 0x5ae41e:c.instructions+=1;goto B5ae41e;
case 0x5ae423:goto L5ae423;
case 0x5ae425:c.instructions+=6;goto B5ae425;
case 0x5ae427:c.instructions+=5;goto B5ae427;
case 0x5ae429:c.instructions+=4;goto B5ae429;
case 0x5ae42d:c.instructions+=3;goto B5ae42d;
case 0x5ae42e:c.instructions+=2;goto B5ae42e;
case 0x5ae430:c.instructions+=1;goto B5ae430;
case 0x5ae435:goto L5ae435;
case 0x5ae436:c.instructions+=2;goto B5ae436;
case 0x5ae438:c.instructions+=1;goto B5ae438;
case 0x5ae43d:goto L5ae43d;
case 0x5ae443:c.instructions+=2;goto B5ae443;
case 0x5ae445:c.instructions+=1;goto B5ae445;
case 0x5ae447:goto L5ae447;
case 0x5ae44d:c.instructions+=1;goto B5ae44d;
case 0x5ae44f:goto L5ae44f;
case 0x5ae451:goto L5ae451;
case 0x5ae453:c.instructions+=1;goto B5ae453;
case 0x5ae455:goto L5ae455;
case 0x5ae457:c.instructions+=1;goto B5ae457;
case 0x5ae45c:goto L5ae45c;
case 0x5ae460:c.instructions+=7;goto B5ae460;
case 0x5ae461:c.instructions+=6;goto B5ae461;
case 0x5ae462:c.instructions+=5;goto B5ae462;
case 0x5ae463:c.instructions+=4;goto B5ae463;
case 0x5ae464:c.instructions+=3;goto B5ae464;
case 0x5ae46b:c.instructions+=2;goto B5ae46b;
case 0x5ae46e:c.instructions+=1;goto B5ae46e;
case 0x5ae470:goto L5ae470;
case 0x5ae471:c.instructions+=7;goto B5ae471;
case 0x5ae473:c.instructions+=6;goto B5ae473;
case 0x5ae479:c.instructions+=5;goto B5ae479;
case 0x5ae47f:c.instructions+=4;goto B5ae47f;
case 0x5ae481:c.instructions+=3;goto B5ae481;
case 0x5ae482:c.instructions+=2;goto B5ae482;
case 0x5ae483:c.instructions+=1;goto B5ae483;
case 0x5ae489:goto L5ae489;
case 0x5ae48f:c.instructions+=4;goto B5ae48f;
case 0x5ae495:c.instructions+=3;goto B5ae495;
case 0x5ae497:c.instructions+=2;goto B5ae497;
case 0x5ae498:c.instructions+=1;goto B5ae498;
case 0x5ae49e:goto L5ae49e;
case 0x5ae4a4:c.instructions+=2;goto B5ae4a4;
case 0x5ae4a6:c.instructions+=1;goto B5ae4a6;
case 0x5ae4a8:goto L5ae4a8;
case 0x5ae4aa:c.instructions+=1;goto B5ae4aa;
case 0x5ae4af:goto L5ae4af;
case 0x5ae4b4:c.instructions+=3;goto B5ae4b4;
case 0x5ae4b5:c.instructions+=2;goto B5ae4b5;
case 0x5ae4b6:c.instructions+=1;goto B5ae4b6;
case 0x5ae4bb:goto L5ae4bb;
case 0x5ae4be:goto L5ae4be;
case 0x5ae4c8:c.instructions+=6;goto B5ae4c8;
case 0x5ae4cd:c.instructions+=5;goto B5ae4cd;
case 0x5ae4ce:c.instructions+=4;goto B5ae4ce;
case 0x5ae4cf:c.instructions+=3;goto B5ae4cf;
case 0x5ae4d4:c.instructions+=2;goto B5ae4d4;
case 0x5ae4d5:c.instructions+=1;goto B5ae4d5;
case 0x5ae4e0:goto L5ae4e0;
case 0x5ae4e1:c.instructions+=2;goto B5ae4e1;
case 0x5ae4e3:c.instructions+=1;goto B5ae4e3;
case 0x5ae4e8:goto L5ae4e8;
case 0x5ae4ed:c.instructions+=1;goto B5ae4ed;
case 0x5ae4ef:goto L5ae4ef;
case 0x5ae4f0:c.instructions+=1;goto B5ae4f0;
case 0x5ae4f5:goto L5ae4f5;
case 0x5ae4f8:goto L5ae4f8;
case 0x5ae4fa:c.instructions+=2;goto B5ae4fa;
case 0x5ae4fb:c.instructions+=1;goto B5ae4fb;
case 0x5ae500:goto L5ae500;
case 0x5ae501:c.instructions+=2;goto B5ae501;
case 0x5ae503:c.instructions+=1;goto B5ae503;
case 0x5ae508:goto L5ae508;
case 0x5ae50d:c.instructions+=1;goto B5ae50d;
case 0x5ae50f:goto L5ae50f;
case 0x5ae510:c.instructions+=1;goto B5ae510;
case 0x5ae515:goto L5ae515;
case 0x5ae518:goto L5ae518;
case 0x5ae51a:c.instructions+=2;goto B5ae51a;
case 0x5ae51b:c.instructions+=1;goto B5ae51b;
case 0x5ae520:goto L5ae520;
case 0x5ae521:c.instructions+=19;goto B5ae521;
case 0x5ae523:c.instructions+=18;goto B5ae523;
case 0x5ae526:c.instructions+=17;goto B5ae526;
case 0x5ae52c:c.instructions+=16;goto B5ae52c;
case 0x5ae52d:c.instructions+=15;goto B5ae52d;
case 0x5ae52e:c.instructions+=14;goto B5ae52e;
case 0x5ae530:c.instructions+=13;goto B5ae530;
case 0x5ae531:c.instructions+=12;goto B5ae531;
case 0x5ae535:c.instructions+=11;goto B5ae535;
case 0x5ae53d:c.instructions+=10;goto B5ae53d;
case 0x5ae545:c.instructions+=9;goto B5ae545;
case 0x5ae54d:c.instructions+=8;goto B5ae54d;
case 0x5ae555:c.instructions+=7;goto B5ae555;
case 0x5ae55d:c.instructions+=6;goto B5ae55d;
case 0x5ae565:c.instructions+=5;goto B5ae565;
case 0x5ae56d:c.instructions+=4;goto B5ae56d;
case 0x5ae575:c.instructions+=3;goto B5ae575;
case 0x5ae57d:c.instructions+=2;goto B5ae57d;
case 0x5ae585:c.instructions+=1;goto B5ae585;
case 0x5ae58a:goto L5ae58a;
case 0x5ae58d:c.instructions+=4;goto B5ae58d;
case 0x5ae590:c.instructions+=3;goto B5ae590;
case 0x5ae592:c.instructions+=2;goto B5ae592;
case 0x5ae594:c.instructions+=1;goto B5ae594;
case 0x5ae59a:goto L5ae59a;
case 0x5ae59c:c.instructions+=1;goto B5ae59c;
case 0x5ae5a0:goto L5ae5a0;
case 0x5ae5a3:c.instructions+=4;goto B5ae5a3;
case 0x5ae5a6:c.instructions+=3;goto B5ae5a6;
case 0x5ae5a7:c.instructions+=2;goto B5ae5a7;
case 0x5ae5aa:c.instructions+=1;goto B5ae5aa;
case 0x5ae5b0:goto L5ae5b0;
case 0x5ae5b7:goto L5ae5b7;
case 0x5ae5bb:c.instructions+=3;goto B5ae5bb;
case 0x5ae5bc:c.instructions+=2;goto B5ae5bc;
case 0x5ae5bd:c.instructions+=1;goto B5ae5bd;
case 0x5ae5c2:goto L5ae5c2;
case 0x5ae5c7:goto L5ae5c7;
case 0x5ae5ca:c.instructions+=9;goto B5ae5ca;
case 0x5ae5cd:c.instructions+=8;goto B5ae5cd;
case 0x5ae5d1:c.instructions+=7;goto B5ae5d1;
case 0x5ae5d4:c.instructions+=6;goto B5ae5d4;
case 0x5ae5d8:c.instructions+=5;goto B5ae5d8;
case 0x5ae5dc:c.instructions+=4;goto B5ae5dc;
case 0x5ae5e0:c.instructions+=3;goto B5ae5e0;
case 0x5ae5e8:c.instructions+=2;goto B5ae5e8;
case 0x5ae5ed:c.instructions+=1;goto B5ae5ed;
case 0x5ae5ef:goto L5ae5ef;
case 0x5ae5f3:c.instructions+=3;goto B5ae5f3;
case 0x5ae5f4:c.instructions+=2;goto B5ae5f4;
case 0x5ae5f5:c.instructions+=1;goto B5ae5f5;
case 0x5ae5fa:goto L5ae5fa;
case 0x5ae5fc:goto L5ae5fc;
case 0x5ae601:c.instructions+=15;goto B5ae601;
case 0x5ae605:c.instructions+=14;goto B5ae605;
case 0x5ae60a:c.instructions+=13;goto B5ae60a;
case 0x5ae60f:c.instructions+=12;goto B5ae60f;
case 0x5ae614:c.instructions+=11;goto B5ae614;
case 0x5ae619:c.instructions+=10;goto B5ae619;
case 0x5ae61d:c.instructions+=9;goto B5ae61d;
case 0x5ae621:c.instructions+=8;goto B5ae621;
case 0x5ae624:c.instructions+=7;goto B5ae624;
case 0x5ae629:c.instructions+=6;goto B5ae629;
case 0x5ae62e:c.instructions+=5;goto B5ae62e;
case 0x5ae630:c.instructions+=4;goto B5ae630;
case 0x5ae634:c.instructions+=3;goto B5ae634;
case 0x5ae639:c.instructions+=2;goto B5ae639;
case 0x5ae63d:c.instructions+=1;goto B5ae63d;
case 0x5ae63f:goto L5ae63f;
case 0x5ae643:c.instructions+=3;goto B5ae643;
case 0x5ae644:c.instructions+=2;goto B5ae644;
case 0x5ae645:c.instructions+=1;goto B5ae645;
case 0x5ae64a:goto L5ae64a;
case 0x5ae64e:c.instructions+=15;goto B5ae64e;
case 0x5ae652:c.instructions+=14;goto B5ae652;
case 0x5ae656:c.instructions+=13;goto B5ae656;
case 0x5ae65a:c.instructions+=12;goto B5ae65a;
case 0x5ae65c:c.instructions+=11;goto B5ae65c;
case 0x5ae65e:c.instructions+=10;goto B5ae65e;
case 0x5ae660:c.instructions+=9;goto B5ae660;
case 0x5ae664:c.instructions+=8;goto B5ae664;
case 0x5ae668:c.instructions+=7;goto B5ae668;
case 0x5ae66c:c.instructions+=6;goto B5ae66c;
case 0x5ae66e:c.instructions+=5;goto B5ae66e;
case 0x5ae670:c.instructions+=4;goto B5ae670;
case 0x5ae674:c.instructions+=3;goto B5ae674;
case 0x5ae676:c.instructions+=2;goto B5ae676;
case 0x5ae679:c.instructions+=1;goto B5ae679;
case 0x5ae67b:goto L5ae67b;
case 0x5ae67f:c.instructions+=1;goto B5ae67f;
case 0x5ae681:goto L5ae681;
case 0x5ae683:goto L5ae683;
case 0x5ae687:c.instructions+=4;goto B5ae687;
case 0x5ae68b:c.instructions+=3;goto B5ae68b;
case 0x5ae68d:c.instructions+=2;goto B5ae68d;
case 0x5ae690:c.instructions+=1;goto B5ae690;
case 0x5ae692:goto L5ae692;
case 0x5ae696:c.instructions+=1;goto B5ae696;
case 0x5ae69a:goto L5ae69a;
case 0x5ae69e:c.instructions+=4;goto B5ae69e;
case 0x5ae6a2:c.instructions+=3;goto B5ae6a2;
case 0x5ae6a4:c.instructions+=2;goto B5ae6a4;
case 0x5ae6a7:c.instructions+=1;goto B5ae6a7;
case 0x5ae6a9:goto L5ae6a9;
case 0x5ae6ad:c.instructions+=2;goto B5ae6ad;
case 0x5ae6b1:c.instructions+=1;goto B5ae6b1;
case 0x5ae6b3:goto L5ae6b3;
case 0x5ae6b7:c.instructions+=4;goto B5ae6b7;
case 0x5ae6bb:c.instructions+=3;goto B5ae6bb;
case 0x5ae6bd:c.instructions+=2;goto B5ae6bd;
case 0x5ae6c0:c.instructions+=1;goto B5ae6c0;
case 0x5ae6c2:goto L5ae6c2;
case 0x5ae6c6:c.instructions+=1;goto B5ae6c6;
case 0x5ae6ca:goto L5ae6ca;
case 0x5ae6ce:c.instructions+=4;goto B5ae6ce;
case 0x5ae6d2:c.instructions+=3;goto B5ae6d2;
case 0x5ae6d4:c.instructions+=2;goto B5ae6d4;
case 0x5ae6d7:c.instructions+=1;goto B5ae6d7;
case 0x5ae6d9:goto L5ae6d9;
case 0x5ae6dd:c.instructions+=2;goto B5ae6dd;
case 0x5ae6e1:c.instructions+=1;goto B5ae6e1;
case 0x5ae6e3:goto L5ae6e3;
case 0x5ae6e7:c.instructions+=4;goto B5ae6e7;
case 0x5ae6eb:c.instructions+=3;goto B5ae6eb;
case 0x5ae6ed:c.instructions+=2;goto B5ae6ed;
case 0x5ae6f0:c.instructions+=1;goto B5ae6f0;
case 0x5ae6f2:goto L5ae6f2;
case 0x5ae6f6:c.instructions+=1;goto B5ae6f6;
case 0x5ae6fa:goto L5ae6fa;
case 0x5ae6fe:c.instructions+=4;goto B5ae6fe;
case 0x5ae702:c.instructions+=3;goto B5ae702;
case 0x5ae704:c.instructions+=2;goto B5ae704;
case 0x5ae707:c.instructions+=1;goto B5ae707;
case 0x5ae709:goto L5ae709;
case 0x5ae70d:c.instructions+=2;goto B5ae70d;
case 0x5ae711:c.instructions+=1;goto B5ae711;
case 0x5ae713:goto L5ae713;
case 0x5ae717:c.instructions+=4;goto B5ae717;
case 0x5ae71b:c.instructions+=3;goto B5ae71b;
case 0x5ae71d:c.instructions+=2;goto B5ae71d;
case 0x5ae720:c.instructions+=1;goto B5ae720;
case 0x5ae722:goto L5ae722;
case 0x5ae726:c.instructions+=1;goto B5ae726;
case 0x5ae72a:goto L5ae72a;
case 0x5ae72e:c.instructions+=4;goto B5ae72e;
case 0x5ae732:c.instructions+=3;goto B5ae732;
case 0x5ae734:c.instructions+=2;goto B5ae734;
case 0x5ae737:c.instructions+=1;goto B5ae737;
case 0x5ae739:goto L5ae739;
case 0x5ae73d:c.instructions+=2;goto B5ae73d;
case 0x5ae741:c.instructions+=1;goto B5ae741;
case 0x5ae743:goto L5ae743;
case 0x5ae747:c.instructions+=4;goto B5ae747;
case 0x5ae74b:c.instructions+=3;goto B5ae74b;
case 0x5ae74d:c.instructions+=2;goto B5ae74d;
case 0x5ae750:c.instructions+=1;goto B5ae750;
case 0x5ae752:goto L5ae752;
case 0x5ae756:c.instructions+=1;goto B5ae756;
case 0x5ae75a:goto L5ae75a;
case 0x5ae75d:c.instructions+=5;goto B5ae75d;
case 0x5ae760:c.instructions+=4;goto B5ae760;
case 0x5ae761:c.instructions+=3;goto B5ae761;
case 0x5ae764:c.instructions+=2;goto B5ae764;
case 0x5ae766:c.instructions+=1;goto B5ae766;
case 0x5ae76c:goto L5ae76c;
case 0x5ae772:c.instructions+=26;goto B5ae772;
case 0x5ae776:c.instructions+=25;goto B5ae776;
case 0x5ae77a:c.instructions+=24;goto B5ae77a;
case 0x5ae77e:c.instructions+=23;goto B5ae77e;
case 0x5ae782:c.instructions+=22;goto B5ae782;
case 0x5ae785:c.instructions+=21;goto B5ae785;
case 0x5ae789:c.instructions+=20;goto B5ae789;
case 0x5ae78f:c.instructions+=19;goto B5ae78f;
case 0x5ae795:c.instructions+=18;goto B5ae795;
case 0x5ae79b:c.instructions+=17;goto B5ae79b;
case 0x5ae79f:c.instructions+=16;goto B5ae79f;
case 0x5ae7a3:c.instructions+=15;goto B5ae7a3;
case 0x5ae7a9:c.instructions+=14;goto B5ae7a9;
case 0x5ae7ad:c.instructions+=13;goto B5ae7ad;
case 0x5ae7b3:c.instructions+=12;goto B5ae7b3;
case 0x5ae7b9:c.instructions+=11;goto B5ae7b9;
case 0x5ae7bf:c.instructions+=10;goto B5ae7bf;
case 0x5ae7c3:c.instructions+=9;goto B5ae7c3;
case 0x5ae7c7:c.instructions+=8;goto B5ae7c7;
case 0x5ae7cd:c.instructions+=7;goto B5ae7cd;
case 0x5ae7d0:c.instructions+=6;goto B5ae7d0;
case 0x5ae7d6:c.instructions+=5;goto B5ae7d6;
case 0x5ae7dc:c.instructions+=4;goto B5ae7dc;
case 0x5ae7e2:c.instructions+=3;goto B5ae7e2;
case 0x5ae7e5:c.instructions+=2;goto B5ae7e5;
case 0x5ae7e6:c.instructions+=1;goto B5ae7e6;
case 0x5ae7ec:goto L5ae7ec;
case 0x5ae7ef:c.instructions+=1;goto B5ae7ef;
case 0x5ae7f1:goto L5ae7f1;
case 0x5ae7f2:c.instructions+=1;goto B5ae7f2;
case 0x5ae7f8:goto L5ae7f8;
case 0x5ae7fb:c.instructions+=13;goto B5ae7fb;
case 0x5ae7fe:c.instructions+=12;goto B5ae7fe;
case 0x5ae801:c.instructions+=11;goto B5ae801;
case 0x5ae808:c.instructions+=10;goto B5ae808;
case 0x5ae80a:c.instructions+=9;goto B5ae80a;
case 0x5ae811:c.instructions+=8;goto B5ae811;
case 0x5ae818:c.instructions+=7;goto B5ae818;
case 0x5ae81b:c.instructions+=6;goto B5ae81b;
case 0x5ae81e:c.instructions+=5;goto B5ae81e;
case 0x5ae821:c.instructions+=4;goto B5ae821;
case 0x5ae828:c.instructions+=3;goto B5ae828;
case 0x5ae82a:c.instructions+=2;goto B5ae82a;
case 0x5ae831:c.instructions+=1;goto B5ae831;
case 0x5ae836:goto L5ae836;
case 0x5ae839:c.instructions+=23;goto B5ae839;
case 0x5ae83c:c.instructions+=22;goto B5ae83c;
case 0x5ae83f:c.instructions+=21;goto B5ae83f;
case 0x5ae842:c.instructions+=20;goto B5ae842;
case 0x5ae845:c.instructions+=19;goto B5ae845;
case 0x5ae848:c.instructions+=18;goto B5ae848;
case 0x5ae84f:c.instructions+=17;goto B5ae84f;
case 0x5ae856:c.instructions+=16;goto B5ae856;
case 0x5ae858:c.instructions+=15;goto B5ae858;
case 0x5ae85f:c.instructions+=14;goto B5ae85f;
case 0x5ae866:c.instructions+=13;goto B5ae866;
case 0x5ae86d:c.instructions+=12;goto B5ae86d;
case 0x5ae870:c.instructions+=11;goto B5ae870;
case 0x5ae873:c.instructions+=10;goto B5ae873;
case 0x5ae876:c.instructions+=9;goto B5ae876;
case 0x5ae879:c.instructions+=8;goto B5ae879;
case 0x5ae87c:c.instructions+=7;goto B5ae87c;
case 0x5ae87f:c.instructions+=6;goto B5ae87f;
case 0x5ae886:c.instructions+=5;goto B5ae886;
case 0x5ae888:c.instructions+=4;goto B5ae888;
case 0x5ae88f:c.instructions+=3;goto B5ae88f;
case 0x5ae896:c.instructions+=2;goto B5ae896;
case 0x5ae89d:c.instructions+=1;goto B5ae89d;
case 0x5ae89f:goto L5ae89f;
case 0x5ae8a6:c.instructions+=4;goto B5ae8a6;
case 0x5ae8a7:c.instructions+=3;goto B5ae8a7;
case 0x5ae8ae:c.instructions+=2;goto B5ae8ae;
case 0x5ae8af:c.instructions+=1;goto B5ae8af;
case 0x5ae8b4:goto L5ae8b4;
case 0x5ae8bb:goto L5ae8bb;
case 0x5ae8c2:c.instructions+=19;goto B5ae8c2;
case 0x5ae8c3:c.instructions+=18;goto B5ae8c3;
case 0x5ae8c7:c.instructions+=17;goto B5ae8c7;
case 0x5ae8ce:c.instructions+=16;goto B5ae8ce;
case 0x5ae8d5:c.instructions+=15;goto B5ae8d5;
case 0x5ae8d7:c.instructions+=14;goto B5ae8d7;
case 0x5ae8de:c.instructions+=13;goto B5ae8de;
case 0x5ae8e5:c.instructions+=12;goto B5ae8e5;
case 0x5ae8eb:c.instructions+=11;goto B5ae8eb;
case 0x5ae8f1:c.instructions+=10;goto B5ae8f1;
case 0x5ae8f7:c.instructions+=9;goto B5ae8f7;
case 0x5ae8fd:c.instructions+=8;goto B5ae8fd;
case 0x5ae904:c.instructions+=7;goto B5ae904;
case 0x5ae90a:c.instructions+=6;goto B5ae90a;
case 0x5ae910:c.instructions+=5;goto B5ae910;
case 0x5ae911:c.instructions+=4;goto B5ae911;
case 0x5ae912:c.instructions+=3;goto B5ae912;
case 0x5ae914:c.instructions+=2;goto B5ae914;
case 0x5ae915:c.instructions+=1;goto B5ae915;
case 0x5ae930:goto L5ae930;
case 0x5ae932:c.instructions+=15;goto B5ae932;
case 0x5ae937:c.instructions+=14;goto B5ae937;
case 0x5ae93d:c.instructions+=13;goto B5ae93d;
case 0x5ae93e:c.instructions+=12;goto B5ae93e;
case 0x5ae945:c.instructions+=11;goto B5ae945;
case 0x5ae94b:c.instructions+=10;goto B5ae94b;
case 0x5ae94c:c.instructions+=9;goto B5ae94c;
case 0x5ae94d:c.instructions+=8;goto B5ae94d;
case 0x5ae94f:c.instructions+=7;goto B5ae94f;
case 0x5ae951:c.instructions+=6;goto B5ae951;
case 0x5ae952:c.instructions+=5;goto B5ae952;
case 0x5ae953:c.instructions+=4;goto B5ae953;
case 0x5ae957:c.instructions+=3;goto B5ae957;
case 0x5ae95a:c.instructions+=2;goto B5ae95a;
case 0x5ae95d:c.instructions+=1;goto B5ae95d;
case 0x5ae960:goto L5ae960;
case 0x5ae963:c.instructions+=4;goto B5ae963;
case 0x5ae964:c.instructions+=3;goto B5ae964;
case 0x5ae965:c.instructions+=2;goto B5ae965;
case 0x5ae966:c.instructions+=1;goto B5ae966;
case 0x5ae96b:goto L5ae96b;
case 0x5ae96e:c.instructions+=4;goto B5ae96e;
case 0x5ae974:c.instructions+=3;goto B5ae974;
case 0x5ae976:c.instructions+=2;goto B5ae976;
case 0x5ae97e:c.instructions+=1;goto B5ae97e;
case 0x5ae984:goto L5ae984;
case 0x5ae989:c.instructions+=2;goto B5ae989;
case 0x5ae98d:c.instructions+=1;goto B5ae98d;
case 0x5ae990:goto L5ae990;
case 0x5ae993:c.instructions+=4;goto B5ae993;
case 0x5ae996:c.instructions+=3;goto B5ae996;
case 0x5ae999:c.instructions+=2;goto B5ae999;
case 0x5ae99b:c.instructions+=1;goto B5ae99b;
case 0x5ae99d:goto L5ae99d;
case 0x5ae9a0:c.instructions+=4;goto B5ae9a0;
case 0x5ae9a3:c.instructions+=3;goto B5ae9a3;
case 0x5ae9a5:c.instructions+=2;goto B5ae9a5;
case 0x5ae9a8:c.instructions+=1;goto B5ae9a8;
case 0x5ae9aa:goto L5ae9aa;
case 0x5ae9ad:c.instructions+=4;goto B5ae9ad;
case 0x5ae9b0:c.instructions+=3;goto B5ae9b0;
case 0x5ae9b2:c.instructions+=2;goto B5ae9b2;
case 0x5ae9b5:c.instructions+=1;goto B5ae9b5;
case 0x5ae9b7:goto L5ae9b7;
case 0x5ae9ba:c.instructions+=4;goto B5ae9ba;
case 0x5ae9bd:c.instructions+=3;goto B5ae9bd;
case 0x5ae9bf:c.instructions+=2;goto B5ae9bf;
case 0x5ae9c2:c.instructions+=1;goto B5ae9c2;
case 0x5ae9c4:goto L5ae9c4;
case 0x5ae9c7:c.instructions+=4;goto B5ae9c7;
case 0x5ae9ca:c.instructions+=3;goto B5ae9ca;
case 0x5ae9cc:c.instructions+=2;goto B5ae9cc;
case 0x5ae9cf:c.instructions+=1;goto B5ae9cf;
case 0x5ae9d1:goto L5ae9d1;
case 0x5ae9d2:c.instructions+=2;goto B5ae9d2;
case 0x5ae9d4:c.instructions+=1;goto B5ae9d4;
case 0x5ae9d9:goto L5ae9d9;
case 0x5ae9db:c.instructions+=3;goto B5ae9db;
case 0x5ae9de:c.instructions+=2;goto B5ae9de;
case 0x5ae9e0:c.instructions+=1;goto B5ae9e0;
case 0x5ae9e2:goto L5ae9e2;
case 0x5ae9e6:c.instructions+=2;goto B5ae9e6;
case 0x5ae9e9:c.instructions+=1;goto B5ae9e9;
case 0x5ae9eb:goto L5ae9eb;
case 0x5ae9ef:c.instructions+=2;goto B5ae9ef;
case 0x5ae9f0:c.instructions+=1;goto B5ae9f0;
case 0x5ae9f4:goto L5ae9f4;
case 0x5ae9f8:c.instructions+=4;goto B5ae9f8;
case 0x5ae9fb:c.instructions+=3;goto B5ae9fb;
case 0x5ae9fc:c.instructions+=2;goto B5ae9fc;
case 0x5aea00:c.instructions+=1;goto B5aea00;
case 0x5aea02:goto L5aea02;
case 0x5aea06:c.instructions+=2;goto B5aea06;
case 0x5aea08:c.instructions+=1;goto B5aea08;
case 0x5aea0a:goto L5aea0a;
case 0x5aea0c:c.instructions+=1;goto B5aea0c;
case 0x5aea11:goto L5aea11;
case 0x5aea12:goto L5aea12;
case 0x5aea14:c.instructions+=3;goto B5aea14;
case 0x5aea16:c.instructions+=2;goto B5aea16;
case 0x5aea18:c.instructions+=1;goto B5aea18;
case 0x5aea1a:goto L5aea1a;
case 0x5aea20:goto L5aea20;
case 0x5aea24:c.instructions+=7;goto B5aea24;
case 0x5aea28:c.instructions+=6;goto B5aea28;
case 0x5aea2b:c.instructions+=5;goto B5aea2b;
case 0x5aea2e:c.instructions+=4;goto B5aea2e;
case 0x5aea30:c.instructions+=3;goto B5aea30;
case 0x5aea32:c.instructions+=2;goto B5aea32;
case 0x5aea36:c.instructions+=1;goto B5aea36;
case 0x5aea38:goto L5aea38;
case 0x5aea3c:c.instructions+=2;goto B5aea3c;
case 0x5aea40:c.instructions+=1;goto B5aea40;
case 0x5aea41:goto L5aea41;
case 0x5aea42:c.instructions+=2;goto B5aea42;
case 0x5aea44:c.instructions+=1;goto B5aea44;
case 0x5aea46:goto L5aea46;
case 0x5aea48:c.instructions+=1;goto B5aea48;
case 0x5aea4a:goto L5aea4a;
case 0x5aea4e:c.instructions+=4;goto B5aea4e;
case 0x5aea50:c.instructions+=3;goto B5aea50;
case 0x5aea52:c.instructions+=2;goto B5aea52;
case 0x5aea56:c.instructions+=1;goto B5aea56;
case 0x5aea5c:goto L5aea5c;
case 0x5aea60:goto L5aea60;
case 0x5aea66:c.instructions+=7;goto B5aea66;
case 0x5aea6a:c.instructions+=6;goto B5aea6a;
case 0x5aea6b:c.instructions+=5;goto B5aea6b;
case 0x5aea71:c.instructions+=4;goto B5aea71;
case 0x5aea74:c.instructions+=3;goto B5aea74;
case 0x5aea77:c.instructions+=2;goto B5aea77;
case 0x5aea7d:c.instructions+=1;goto B5aea7d;
case 0x5aea82:goto L5aea82;
case 0x5aea87:c.instructions+=3;goto B5aea87;
case 0x5aea8d:c.instructions+=2;goto B5aea8d;
case 0x5aea8f:c.instructions+=1;goto B5aea8f;
case 0x5aea95:goto L5aea95;
case 0x5aea9b:c.instructions+=5;goto B5aea9b;
case 0x5aeaa1:c.instructions+=4;goto B5aeaa1;
case 0x5aeaa2:c.instructions+=3;goto B5aeaa2;
case 0x5aeaa4:c.instructions+=2;goto B5aeaa4;
case 0x5aeaaa:c.instructions+=1;goto B5aeaaa;
case 0x5aeaac:goto L5aeaac;
case 0x5aeaaf:c.instructions+=2;goto B5aeaaf;
case 0x5aeab3:c.instructions+=1;goto B5aeab3;
case 0x5aeab5:goto L5aeab5;
case 0x5aeabd:c.instructions+=1;goto B5aeabd;
case 0x5aeac1:goto L5aeac1;
case 0x5aeac6:c.instructions+=1;goto B5aeac6;
case 0x5aeacb:goto L5aeacb;
case 0x5aeacd:c.instructions+=2;goto B5aeacd;
case 0x5aead1:c.instructions+=1;goto B5aead1;
case 0x5aead7:goto L5aead7;
case 0x5aead9:goto L5aead9;
case 0x5aeadd:c.instructions+=1;goto B5aeadd;
case 0x5aeae0:goto L5aeae0;
case 0x5aeae4:c.instructions+=1;goto B5aeae4;
case 0x5aeae6:goto L5aeae6;
case 0x5aeae9:c.instructions+=3;goto B5aeae9;
case 0x5aeaec:c.instructions+=2;goto B5aeaec;
case 0x5aeaef:c.instructions+=1;goto B5aeaef;
case 0x5aeaf1:goto L5aeaf1;
case 0x5aeaf3:c.instructions+=2;goto B5aeaf3;
case 0x5aeaf5:c.instructions+=1;goto B5aeaf5;
case 0x5aeaf7:goto L5aeaf7;
case 0x5aeafa:c.instructions+=2;goto B5aeafa;
case 0x5aeafc:c.instructions+=1;goto B5aeafc;
case 0x5aeb00:goto L5aeb00;
case 0x5aeb05:c.instructions+=4;goto B5aeb05;
case 0x5aeb08:c.instructions+=3;goto B5aeb08;
case 0x5aeb09:c.instructions+=2;goto B5aeb09;
case 0x5aeb0a:c.instructions+=1;goto B5aeb0a;
case 0x5aeb0f:goto L5aeb0f;
case 0x5aeb12:c.instructions+=2;goto B5aeb12;
case 0x5aeb14:c.instructions+=1;goto B5aeb14;
case 0x5aeb16:goto L5aeb16;
case 0x5aeb1a:c.instructions+=4;goto B5aeb1a;
case 0x5aeb1b:c.instructions+=3;goto B5aeb1b;
case 0x5aeb1e:c.instructions+=2;goto B5aeb1e;
case 0x5aeb20:c.instructions+=1;goto B5aeb20;
case 0x5aeb22:goto L5aeb22;
case 0x5aeb26:c.instructions+=1;goto B5aeb26;
case 0x5aeb2a:goto L5aeb2a;
case 0x5aeb2e:c.instructions+=2;goto B5aeb2e;
case 0x5aeb30:c.instructions+=1;goto B5aeb30;
case 0x5aeb32:goto L5aeb32;
case 0x5aeb35:c.instructions+=2;goto B5aeb35;
case 0x5aeb37:c.instructions+=1;goto B5aeb37;
case 0x5aeb39:goto L5aeb39;
case 0x5aeb3c:c.instructions+=2;goto B5aeb3c;
case 0x5aeb40:c.instructions+=1;goto B5aeb40;
case 0x5aeb42:goto L5aeb42;
case 0x5aeb4a:goto L5aeb4a;
case 0x5aeb4e:c.instructions+=1;goto B5aeb4e;
case 0x5aeb50:goto L5aeb50;
case 0x5aeb52:goto L5aeb52;
case 0x5aeb58:c.instructions+=2;goto B5aeb58;
case 0x5aeb5c:c.instructions+=1;goto B5aeb5c;
case 0x5aeb64:goto L5aeb64;
case 0x5aeb68:c.instructions+=5;goto B5aeb68;
case 0x5aeb6c:c.instructions+=4;goto B5aeb6c;
case 0x5aeb6d:c.instructions+=3;goto B5aeb6d;
case 0x5aeb6f:c.instructions+=2;goto B5aeb6f;
case 0x5aeb73:c.instructions+=1;goto B5aeb73;
case 0x5aeb79:goto L5aeb79;
case 0x5aeb7d:c.instructions+=4;goto B5aeb7d;
case 0x5aeb7f:c.instructions+=3;goto B5aeb7f;
case 0x5aeb81:c.instructions+=2;goto B5aeb81;
case 0x5aeb83:c.instructions+=1;goto B5aeb83;
case 0x5aeb85:goto L5aeb85;
case 0x5aeb89:c.instructions+=2;goto B5aeb89;
case 0x5aeb8b:c.instructions+=1;goto B5aeb8b;
case 0x5aeb8d:goto L5aeb8d;
case 0x5aeb93:c.instructions+=2;goto B5aeb93;
case 0x5aeb94:c.instructions+=1;goto B5aeb94;
case 0x5aeb99:goto L5aeb99;
case 0x5aeb9c:c.instructions+=2;goto B5aeb9c;
case 0x5aeb9e:c.instructions+=1;goto B5aeb9e;
case 0x5aeba0:goto L5aeba0;
case 0x5aeba5:c.instructions+=5;goto B5aeba5;
case 0x5aebab:c.instructions+=4;goto B5aebab;
case 0x5aebae:c.instructions+=3;goto B5aebae;
case 0x5aebb2:c.instructions+=2;goto B5aebb2;
case 0x5aebb3:c.instructions+=1;goto B5aebb3;
case 0x5aebb8:goto L5aebb8;
case 0x5aebbb:c.instructions+=4;goto B5aebbb;
case 0x5aebbf:c.instructions+=3;goto B5aebbf;
case 0x5aebc1:c.instructions+=2;goto B5aebc1;
case 0x5aebcc:c.instructions+=1;goto B5aebcc;
case 0x5aebce:goto L5aebce;
case 0x5aebd2:c.instructions+=7;goto B5aebd2;
case 0x5aebd5:c.instructions+=6;goto B5aebd5;
case 0x5aebd8:c.instructions+=5;goto B5aebd8;
case 0x5aebd9:c.instructions+=4;goto B5aebd9;
case 0x5aebda:c.instructions+=3;goto B5aebda;
case 0x5aebdb:c.instructions+=2;goto B5aebdb;
case 0x5aebdd:c.instructions+=1;goto B5aebdd;
case 0x5aebe2:goto L5aebe2;
case 0x5aebed:c.instructions+=1;goto B5aebed;
case 0x5aebee:goto L5aebee;
case 0x5aebf2:c.instructions+=3;goto B5aebf2;
case 0x5aebf3:c.instructions+=2;goto B5aebf3;
case 0x5aebf5:c.instructions+=1;goto B5aebf5;
case 0x5aebf7:goto L5aebf7;
case 0x5aebf9:goto L5aebf9;
case 0x5aec00:c.instructions+=7;goto B5aec00;
case 0x5aec01:c.instructions+=6;goto B5aec01;
case 0x5aec02:c.instructions+=5;goto B5aec02;
case 0x5aec03:c.instructions+=4;goto B5aec03;
case 0x5aec04:c.instructions+=3;goto B5aec04;
case 0x5aec0b:c.instructions+=2;goto B5aec0b;
case 0x5aec11:c.instructions+=1;goto B5aec11;
case 0x5aec20:goto L5aec20;
case 0x5aec21:c.instructions+=22;goto B5aec21;
case 0x5aec23:c.instructions+=21;goto B5aec23;
case 0x5aec26:c.instructions+=20;goto B5aec26;
case 0x5aec28:c.instructions+=19;goto B5aec28;
case 0x5aec2d:c.instructions+=18;goto B5aec2d;
case 0x5aec33:c.instructions+=17;goto B5aec33;
case 0x5aec34:c.instructions+=16;goto B5aec34;
case 0x5aec3b:c.instructions+=15;goto B5aec3b;
case 0x5aec3e:c.instructions+=14;goto B5aec3e;
case 0x5aec3f:c.instructions+=13;goto B5aec3f;
case 0x5aec40:c.instructions+=12;goto B5aec40;
case 0x5aec41:c.instructions+=11;goto B5aec41;
case 0x5aec44:c.instructions+=10;goto B5aec44;
case 0x5aec4a:c.instructions+=9;goto B5aec4a;
case 0x5aec4c:c.instructions+=8;goto B5aec4c;
case 0x5aec4f:c.instructions+=7;goto B5aec4f;
case 0x5aec50:c.instructions+=6;goto B5aec50;
case 0x5aec52:c.instructions+=5;goto B5aec52;
case 0x5aec53:c.instructions+=4;goto B5aec53;
case 0x5aec54:c.instructions+=3;goto B5aec54;
case 0x5aec56:c.instructions+=2;goto B5aec56;
case 0x5aec5a:c.instructions+=1;goto B5aec5a;
case 0x5aec5f:goto L5aec5f;
case 0x5aec65:c.instructions+=11;goto B5aec65;
case 0x5aec6b:c.instructions+=10;goto B5aec6b;
case 0x5aec71:c.instructions+=9;goto B5aec71;
case 0x5aec77:c.instructions+=8;goto B5aec77;
case 0x5aec7e:c.instructions+=7;goto B5aec7e;
case 0x5aec83:c.instructions+=6;goto B5aec83;
case 0x5aec89:c.instructions+=5;goto B5aec89;
case 0x5aec8a:c.instructions+=4;goto B5aec8a;
case 0x5aec8c:c.instructions+=3;goto B5aec8c;
case 0x5aec90:c.instructions+=2;goto B5aec90;
case 0x5aec95:c.instructions+=1;goto B5aec95;
case 0x5aec97:goto L5aec97;
case 0x5aec9c:goto L5aec9c;
case 0x5aeca2:c.instructions+=15;goto B5aeca2;
case 0x5aeca5:c.instructions+=14;goto B5aeca5;
case 0x5aeca8:c.instructions+=13;goto B5aeca8;
case 0x5aecac:c.instructions+=12;goto B5aecac;
case 0x5aecb2:c.instructions+=11;goto B5aecb2;
case 0x5aecb8:c.instructions+=10;goto B5aecb8;
case 0x5aecbd:c.instructions+=9;goto B5aecbd;
case 0x5aecc3:c.instructions+=8;goto B5aecc3;
case 0x5aecc9:c.instructions+=7;goto B5aecc9;
case 0x5aeccf:c.instructions+=6;goto B5aeccf;
case 0x5aecd3:c.instructions+=5;goto B5aecd3;
case 0x5aecd4:c.instructions+=4;goto B5aecd4;
case 0x5aecd8:c.instructions+=3;goto B5aecd8;
case 0x5aecdd:c.instructions+=2;goto B5aecdd;
case 0x5aecde:c.instructions+=1;goto B5aecde;
case 0x5aece3:goto L5aece3;
case 0x5aece5:c.instructions+=5;goto B5aece5;
case 0x5aece9:c.instructions+=4;goto B5aece9;
case 0x5aecea:c.instructions+=3;goto B5aecea;
case 0x5aeced:c.instructions+=2;goto B5aeced;
case 0x5aecee:c.instructions+=1;goto B5aecee;
case 0x5aecf3:goto L5aecf3;
case 0x5aecf6:c.instructions+=5;goto B5aecf6;
case 0x5aecf9:c.instructions+=4;goto B5aecf9;
case 0x5aecff:c.instructions+=3;goto B5aecff;
case 0x5aed02:c.instructions+=2;goto B5aed02;
case 0x5aed05:c.instructions+=1;goto B5aed05;
case 0x5aed0a:goto L5aed0a;
case 0x5aed10:c.instructions+=2;goto B5aed10;
case 0x5aed14:c.instructions+=1;goto B5aed14;
case 0x5aed19:goto L5aed19;
case 0x5aed1a:c.instructions+=3;goto B5aed1a;
case 0x5aed1e:c.instructions+=2;goto B5aed1e;
case 0x5aed1f:c.instructions+=1;goto B5aed1f;
case 0x5aed24:goto L5aed24;
case 0x5aed27:c.instructions+=2;goto B5aed27;
case 0x5aed29:c.instructions+=1;goto B5aed29;
case 0x5aed2f:goto L5aed2f;
case 0x5aed32:c.instructions+=1;goto B5aed32;
case 0x5aed37:goto L5aed37;
case 0x5aed3d:c.instructions+=2;goto B5aed3d;
case 0x5aed41:c.instructions+=1;goto B5aed41;
case 0x5aed46:goto L5aed46;
case 0x5aed4a:c.instructions+=3;goto B5aed4a;
case 0x5aed4b:c.instructions+=2;goto B5aed4b;
case 0x5aed4c:c.instructions+=1;goto B5aed4c;
case 0x5aed51:goto L5aed51;
case 0x5aed54:c.instructions+=2;goto B5aed54;
case 0x5aed56:c.instructions+=1;goto B5aed56;
case 0x5aed58:goto L5aed58;
case 0x5aed5a:c.instructions+=1;goto B5aed5a;
case 0x5aed5f:goto L5aed5f;
case 0x5aed62:c.instructions+=2;goto B5aed62;
case 0x5aed64:c.instructions+=1;goto B5aed64;
case 0x5aed66:goto L5aed66;
case 0x5aed6b:c.instructions+=9;goto B5aed6b;
case 0x5aed70:c.instructions+=8;goto B5aed70;
case 0x5aed75:c.instructions+=7;goto B5aed75;
case 0x5aed7a:c.instructions+=6;goto B5aed7a;
case 0x5aed7f:c.instructions+=5;goto B5aed7f;
case 0x5aed84:c.instructions+=4;goto B5aed84;
case 0x5aed86:c.instructions+=3;goto B5aed86;
case 0x5aed8d:c.instructions+=2;goto B5aed8d;
case 0x5aed94:c.instructions+=1;goto B5aed94;
case 0x5aed99:goto L5aed99;
case 0x5aed9c:c.instructions+=2;goto B5aed9c;
case 0x5aeda0:c.instructions+=1;goto B5aeda0;
case 0x5aeda5:goto L5aeda5;
case 0x5aeda7:c.instructions+=3;goto B5aeda7;
case 0x5aedaa:c.instructions+=2;goto B5aedaa;
case 0x5aedae:c.instructions+=1;goto B5aedae;
case 0x5aedb3:goto L5aedb3;
case 0x5aedb6:c.instructions+=15;goto B5aedb6;
case 0x5aedb9:c.instructions+=14;goto B5aedb9;
case 0x5aedbc:c.instructions+=13;goto B5aedbc;
case 0x5aedbe:c.instructions+=12;goto B5aedbe;
case 0x5aedc1:c.instructions+=11;goto B5aedc1;
case 0x5aedc4:c.instructions+=10;goto B5aedc4;
case 0x5aedc6:c.instructions+=9;goto B5aedc6;
case 0x5aedca:c.instructions+=8;goto B5aedca;
case 0x5aedcd:c.instructions+=7;goto B5aedcd;
case 0x5aedce:c.instructions+=6;goto B5aedce;
case 0x5aedd2:c.instructions+=5;goto B5aedd2;
case 0x5aedd5:c.instructions+=4;goto B5aedd5;
case 0x5aedd6:c.instructions+=3;goto B5aedd6;
case 0x5aedd8:c.instructions+=2;goto B5aedd8;
case 0x5aeddc:c.instructions+=1;goto B5aeddc;
case 0x5aede1:goto L5aede1;
case 0x5aede3:c.instructions+=1;goto B5aede3;
case 0x5aede8:goto L5aede8;
case 0x5aedeb:c.instructions+=2;goto B5aedeb;
case 0x5aeded:c.instructions+=1;goto B5aeded;
case 0x5aedef:goto L5aedef;
case 0x5aedf3:c.instructions+=27;goto B5aedf3;
case 0x5aedf7:c.instructions+=26;goto B5aedf7;
case 0x5aedfb:c.instructions+=25;goto B5aedfb;
case 0x5aedff:c.instructions+=24;goto B5aedff;
case 0x5aee03:c.instructions+=23;goto B5aee03;
case 0x5aee07:c.instructions+=22;goto B5aee07;
case 0x5aee0b:c.instructions+=21;goto B5aee0b;
case 0x5aee0f:c.instructions+=20;goto B5aee0f;
case 0x5aee13:c.instructions+=19;goto B5aee13;
case 0x5aee17:c.instructions+=18;goto B5aee17;
case 0x5aee1b:c.instructions+=17;goto B5aee1b;
case 0x5aee1f:c.instructions+=16;goto B5aee1f;
case 0x5aee20:c.instructions+=15;goto B5aee20;
case 0x5aee24:c.instructions+=14;goto B5aee24;
case 0x5aee28:c.instructions+=13;goto B5aee28;
case 0x5aee2c:c.instructions+=12;goto B5aee2c;
case 0x5aee2d:c.instructions+=11;goto B5aee2d;
case 0x5aee31:c.instructions+=10;goto B5aee31;
case 0x5aee32:c.instructions+=9;goto B5aee32;
case 0x5aee36:c.instructions+=8;goto B5aee36;
case 0x5aee37:c.instructions+=7;goto B5aee37;
case 0x5aee3b:c.instructions+=6;goto B5aee3b;
case 0x5aee3c:c.instructions+=5;goto B5aee3c;
case 0x5aee3d:c.instructions+=4;goto B5aee3d;
case 0x5aee3f:c.instructions+=3;goto B5aee3f;
case 0x5aee46:c.instructions+=2;goto B5aee46;
case 0x5aee4d:c.instructions+=1;goto B5aee4d;
case 0x5aee52:goto L5aee52;
case 0x5aee54:goto L5aee54;
case 0x5aee56:goto L5aee56;
case 0x5aee5c:goto L5aee5c;
case 0x5aee5e:c.instructions+=1;goto B5aee5e;
case 0x5aee63:goto L5aee63;
case 0x5aee65:c.instructions+=1;goto B5aee65;
case 0x5aee6a:goto L5aee6a;
case 0x5aee6e:c.instructions+=8;goto B5aee6e;
case 0x5aee6f:c.instructions+=7;goto B5aee6f;
case 0x5aee71:c.instructions+=6;goto B5aee71;
case 0x5aee72:c.instructions+=5;goto B5aee72;
case 0x5aee79:c.instructions+=4;goto B5aee79;
case 0x5aee7a:c.instructions+=3;goto B5aee7a;
case 0x5aee7c:c.instructions+=2;goto B5aee7c;
case 0x5aee7d:c.instructions+=1;goto B5aee7d;
case 0x5aee80:goto L5aee80;
case 0x5aee86:c.instructions+=1;goto B5aee86;
case 0x5aee8b:goto L5aee8b;
case 0x5aee8d:c.instructions+=3;goto B5aee8d;
case 0x5aee8f:c.instructions+=2;goto B5aee8f;
case 0x5aee90:c.instructions+=1;goto B5aee90;
case 0x5aeea0:goto L5aeea0;
case 0x5aeea1:c.instructions+=3;goto B5aeea1;
case 0x5aeea3:c.instructions+=2;goto B5aeea3;
case 0x5aeea9:c.instructions+=1;goto B5aeea9;
case 0x5aeeae:goto L5aeeae;
case 0x5aeeb0:c.instructions+=1;goto B5aeeb0;
case 0x5aeeb2:goto L5aeeb2;
case 0x5aeeb8:c.instructions+=1;goto B5aeeb8;
case 0x5aeebd:goto L5aeebd;
case 0x5aeebf:c.instructions+=1;goto B5aeebf;
case 0x5aeec1:goto L5aeec1;
case 0x5aeec3:c.instructions+=2;goto B5aeec3;
case 0x5aeec4:c.instructions+=1;goto B5aeec4;
case 0x5aeec5:goto L5aeec5;
case 0x5aeeca:c.instructions+=2;goto B5aeeca;
case 0x5aeecb:c.instructions+=1;goto B5aeecb;
case 0x5aeed0:goto L5aeed0;
case 0x5aeed5:c.instructions+=1;goto B5aeed5;
case 0x5aeee0:goto L5aeee0;
case 0x5aeee2:c.instructions+=14;goto B5aeee2;
case 0x5aeee7:c.instructions+=13;goto B5aeee7;
case 0x5aeeed:c.instructions+=12;goto B5aeeed;
case 0x5aeeee:c.instructions+=11;goto B5aeeee;
case 0x5aeef5:c.instructions+=10;goto B5aeef5;
case 0x5aeef6:c.instructions+=9;goto B5aeef6;
case 0x5aeef7:c.instructions+=8;goto B5aeef7;
case 0x5aeef9:c.instructions+=7;goto B5aeef9;
case 0x5aeefd:c.instructions+=6;goto B5aeefd;
case 0x5aef03:c.instructions+=5;goto B5aef03;
case 0x5aef09:c.instructions+=4;goto B5aef09;
case 0x5aef0c:c.instructions+=3;goto B5aef0c;
case 0x5aef0e:c.instructions+=2;goto B5aef0e;
case 0x5aef16:c.instructions+=1;goto B5aef16;
case 0x5aef18:goto L5aef18;
case 0x5aef1b:c.instructions+=2;goto B5aef1b;
case 0x5aef1f:c.instructions+=1;goto B5aef1f;
case 0x5aef21:goto L5aef21;
case 0x5aef26:goto L5aef26;
case 0x5aef29:c.instructions+=2;goto B5aef29;
case 0x5aef2b:c.instructions+=1;goto B5aef2b;
case 0x5aef2d:goto L5aef2d;
case 0x5aef2e:c.instructions+=1;goto B5aef2e;
case 0x5aef33:goto L5aef33;
case 0x5aef36:goto L5aef36;
case 0x5aef3c:c.instructions+=2;goto B5aef3c;
case 0x5aef3e:c.instructions+=1;goto B5aef3e;
case 0x5aef40:goto L5aef40;
case 0x5aef41:c.instructions+=1;goto B5aef41;
case 0x5aef46:goto L5aef46;
case 0x5aef49:goto L5aef49;
case 0x5aef4f:c.instructions+=6;goto B5aef4f;
case 0x5aef54:c.instructions+=5;goto B5aef54;
case 0x5aef55:c.instructions+=4;goto B5aef55;
case 0x5aef57:c.instructions+=3;goto B5aef57;
case 0x5aef5f:c.instructions+=2;goto B5aef5f;
case 0x5aef64:c.instructions+=1;goto B5aef64;
case 0x5aef69:goto L5aef69;
case 0x5aef6d:c.instructions+=4;goto B5aef6d;
case 0x5aef6e:c.instructions+=3;goto B5aef6e;
case 0x5aef75:c.instructions+=2;goto B5aef75;
case 0x5aef78:c.instructions+=1;goto B5aef78;
case 0x5aef80:goto L5aef80;
case 0x5aef81:c.instructions+=2;goto B5aef81;
case 0x5aef83:c.instructions+=1;goto B5aef83;
case 0x5aef88:goto L5aef88;
case 0x5aef8d:c.instructions+=1;goto B5aef8d;
case 0x5aef8f:goto L5aef8f;
case 0x5aef90:c.instructions+=1;goto B5aef90;
case 0x5aef95:goto L5aef95;
case 0x5aef98:goto L5aef98;
case 0x5aef9a:c.instructions+=2;goto B5aef9a;
case 0x5aef9b:c.instructions+=1;goto B5aef9b;
case 0x5aefa0:goto L5aefa0;
case 0x5aefa2:c.instructions+=17;goto B5aefa2;
case 0x5aefa7:c.instructions+=16;goto B5aefa7;
case 0x5aefad:c.instructions+=15;goto B5aefad;
case 0x5aefae:c.instructions+=14;goto B5aefae;
case 0x5aefb5:c.instructions+=13;goto B5aefb5;
case 0x5aefb6:c.instructions+=12;goto B5aefb6;
case 0x5aefb7:c.instructions+=11;goto B5aefb7;
case 0x5aefb9:c.instructions+=10;goto B5aefb9;
case 0x5aefbd:c.instructions+=9;goto B5aefbd;
case 0x5aefc3:c.instructions+=8;goto B5aefc3;
case 0x5aefc6:c.instructions+=7;goto B5aefc6;
case 0x5aefc8:c.instructions+=6;goto B5aefc8;
case 0x5aefcb:c.instructions+=5;goto B5aefcb;
case 0x5aefcd:c.instructions+=4;goto B5aefcd;
case 0x5aefce:c.instructions+=3;goto B5aefce;
case 0x5aefd6:c.instructions+=2;goto B5aefd6;
case 0x5aefd9:c.instructions+=1;goto B5aefd9;
case 0x5aefde:goto L5aefde;
case 0x5aefe1:c.instructions+=5;goto B5aefe1;
case 0x5aefe4:c.instructions+=4;goto B5aefe4;
case 0x5aefe7:c.instructions+=3;goto B5aefe7;
case 0x5aefea:c.instructions+=2;goto B5aefea;
case 0x5aeff0:c.instructions+=1;goto B5aeff0;
case 0x5aeff5:goto L5aeff5;
case 0x5aeffa:c.instructions+=1;goto B5aeffa;
default:missing_instruction(c.pc);}
B5ae000:L5ae000:{c.instructions+=14;NFSU2_TR(0x5ae000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5ae003:{NFSU2_TR(0x5ae003);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae009:{NFSU2_TR(0x5ae009);
__builtin_memmove((R+8),gp(0x7a1eec),4);
}
B5ae00f:{NFSU2_TR(0x5ae00f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae010:{NFSU2_TR(0x5ae010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae011:{NFSU2_TR(0x5ae011);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ae017:{NFSU2_TR(0x5ae017);
__builtin_memmove((R+0),gp(0x7a1ef0),4);
}
B5ae01c:{NFSU2_TR(0x5ae01c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ae01e:{NFSU2_TR(0x5ae01e);
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
B5ae020:{NFSU2_TR(0x5ae020);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae024:{NFSU2_TR(0x5ae024);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae028:{NFSU2_TR(0x5ae028);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae02c:{NFSU2_TR(0x5ae02c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae030:{NFSU2_TR(0x5ae030);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ae0d0;}}
}
B5ae036:L5ae036:{c.instructions+=8;NFSU2_TR(0x5ae036);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae037:{NFSU2_TR(0x5ae037);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae038:{NFSU2_TR(0x5ae038);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ae03c:{NFSU2_TR(0x5ae03c);
w4(R+0,u32(0x90ull));
}
B5ae041:{NFSU2_TR(0x5ae041);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5ae043:{NFSU2_TR(0x5ae043);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x480ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ae049:{NFSU2_TR(0x5ae049);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae04d:{NFSU2_TR(0x5ae04d);
__builtin_memmove((R+4),(R+4),4);
}
B5ae050:L5ae050:{c.instructions+=7;NFSU2_TR(0x5ae050);
__builtin_memmove((R+4),gp(0x86b2bc),4);
}
B5ae056:{NFSU2_TR(0x5ae056);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ae059:{NFSU2_TR(0x5ae059);
__builtin_memmove((R+8),(R+12),1);
}
B5ae05b:{NFSU2_TR(0x5ae05b);
u8 U[3];
w1(R+512,carry<u8>(r1(R+8),u8(0x31ull)));
w1(R+523,scarry<u8>(r1(R+8),u8(0x31ull)));
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae05e:{NFSU2_TR(0x5ae05e);
__builtin_memmove((R+4),(R+20),4);
}
B5ae060:{NFSU2_TR(0x5ae060);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ae064:{NFSU2_TR(0x5ae064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae069ull));
TAIL_STATIC(0x611000u,611);
}
B5ae069:L5ae069:{c.instructions+=4;NFSU2_TR(0x5ae069);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae06a:{NFSU2_TR(0x5ae06a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ae06e:{NFSU2_TR(0x5ae06e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae06f:{NFSU2_TR(0x5ae06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae074ull));
TAIL_STATIC(0x43db80u,43d);
}
B5ae074:L5ae074:{c.instructions+=10;NFSU2_TR(0x5ae074);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae078:{NFSU2_TR(0x5ae078);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae07c:{NFSU2_TR(0x5ae07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae082:{NFSU2_TR(0x5ae082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae083:{NFSU2_TR(0x5ae083);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ae085:{NFSU2_TR(0x5ae085);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ae088:{NFSU2_TR(0x5ae088);
w4(R+0,u32(r2(R+24)));
}
B5ae08b:{NFSU2_TR(0x5ae08b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae08c:{NFSU2_TR(0x5ae08c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae08d:{NFSU2_TR(0x5ae08d);
u8 U[4];
__builtin_memmove((U+0),gp(0x86af90),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae093ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5ae093:L5ae093:{c.instructions+=5;NFSU2_TR(0x5ae093);
__builtin_memmove((R+24),(R+0),4);
}
B5ae095:{NFSU2_TR(0x5ae095);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae098:{NFSU2_TR(0x5ae098);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5ae09b:{NFSU2_TR(0x5ae09b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae09d:{NFSU2_TR(0x5ae09d);
if(r1(R+518)){{goto L5ae0a4;}}
}
B5ae09f:L5ae09f:{c.instructions+=2;NFSU2_TR(0x5ae09f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5ae0a2:{NFSU2_TR(0x5ae0a2);
{goto L5ae0a7;}
}
B5ae0a4:L5ae0a4:{c.instructions+=1;NFSU2_TR(0x5ae0a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ae0a7:L5ae0a7:{c.instructions+=5;NFSU2_TR(0x5ae0a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0a9:{NFSU2_TR(0x5ae0a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0ab:{NFSU2_TR(0x5ae0ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0ac:{NFSU2_TR(0x5ae0ac);
__builtin_memmove((R+4),(R+24),4);
}
B5ae0ae:{NFSU2_TR(0x5ae0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae0b3ull));
TAIL_STATIC(0x5adb20u,5ad);
}
B5ae0b3:L5ae0b3:{c.instructions+=2;NFSU2_TR(0x5ae0b3);
__builtin_memmove((R+4),(R+24),4);
}
B5ae0b5:{NFSU2_TR(0x5ae0b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae0baull));
TAIL_STATIC(0x5adf90u,5ad);
}
B5ae0ba:L5ae0ba:{c.instructions+=6;NFSU2_TR(0x5ae0ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae0be:{NFSU2_TR(0x5ae0be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5ae0c0:{NFSU2_TR(0x5ae0c0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ae0c1:{NFSU2_TR(0x5ae0c1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5ae0c4:{NFSU2_TR(0x5ae0c4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ae0c6:{NFSU2_TR(0x5ae0c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae050u);}goto L5ae050;}}
}
B5ae0c8:L5ae0c8:{c.instructions+=4;NFSU2_TR(0x5ae0c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae0cc:{NFSU2_TR(0x5ae0cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ae0cd:{NFSU2_TR(0x5ae0cd);
__builtin_memmove((R+24),(R+0),4);
}
B5ae0cf:{NFSU2_TR(0x5ae0cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ae0d0:L5ae0d0:{c.instructions+=3;NFSU2_TR(0x5ae0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ae0d2:{NFSU2_TR(0x5ae0d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0d4:{NFSU2_TR(0x5ae0d4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae0d6ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ae0d6:L5ae0d6:{c.instructions+=5;NFSU2_TR(0x5ae0d6);
__builtin_memmove((R+0),(R+24),4);
}
B5ae0d8:{NFSU2_TR(0x5ae0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae0d9:{NFSU2_TR(0x5ae0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ae0da:{NFSU2_TR(0x5ae0da);
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
B5ae0dd:{NFSU2_TR(0x5ae0dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae0e0:L5ae0e0:{c.instructions+=12;NFSU2_TR(0x5ae0e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0e2:{NFSU2_TR(0x5ae0e2);
u8 U[4];
w4(U+0,u32(0x778d2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0e7:{NFSU2_TR(0x5ae0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae0ed:{NFSU2_TR(0x5ae0ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0ee:{NFSU2_TR(0x5ae0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae0f5:{NFSU2_TR(0x5ae0f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0f6:{NFSU2_TR(0x5ae0f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae0f7:{NFSU2_TR(0x5ae0f7);
__builtin_memmove((R+24),(R+4),4);
}
B5ae0f9:{NFSU2_TR(0x5ae0f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae0fd:{NFSU2_TR(0x5ae0fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ae103:{NFSU2_TR(0x5ae103);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae10b:{NFSU2_TR(0x5ae10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae110ull));
TAIL_STATIC(0x4367c0u,436);
}
B5ae110:L5ae110:{c.instructions+=3;NFSU2_TR(0x5ae110);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ae116:{NFSU2_TR(0x5ae116);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae11e:{NFSU2_TR(0x5ae11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae123ull));
TAIL_STATIC(0x4367c0u,436);
}
B5ae123:L5ae123:{c.instructions+=5;NFSU2_TR(0x5ae123);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae127:{NFSU2_TR(0x5ae127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae128:{NFSU2_TR(0x5ae128);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae12f:{NFSU2_TR(0x5ae12f);
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
B5ae132:{NFSU2_TR(0x5ae132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae140:L5ae140:{c.instructions+=3;NFSU2_TR(0x5ae140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae141:{NFSU2_TR(0x5ae141);
__builtin_memmove((R+24),(R+4),4);
}
B5ae143:{NFSU2_TR(0x5ae143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae148ull));
TAIL_STATIC(0x5a92f0u,5a9);
}
B5ae148:L5ae148:{c.instructions+=2;NFSU2_TR(0x5ae148);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5ae14d:{NFSU2_TR(0x5ae14d);
if(r1(R+518)){{goto L5ae158;}}
}
B5ae14f:L5ae14f:{c.instructions+=2;NFSU2_TR(0x5ae14f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae150:{NFSU2_TR(0x5ae150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae155ull));
TAIL_STATIC(0x575630u,575);
}
B5ae155:L5ae155:{c.instructions+=1;NFSU2_TR(0x5ae155);
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
B5ae158:L5ae158:{c.instructions+=3;NFSU2_TR(0x5ae158);
__builtin_memmove((R+0),(R+24),4);
}
B5ae15a:{NFSU2_TR(0x5ae15a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae15b:{NFSU2_TR(0x5ae15b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae160:L5ae160:{c.instructions+=14;NFSU2_TR(0x5ae160);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae162:{NFSU2_TR(0x5ae162);
u8 U[4];
w4(U+0,u32(0x778d48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae167:{NFSU2_TR(0x5ae167);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae16d:{NFSU2_TR(0x5ae16d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae16e:{NFSU2_TR(0x5ae16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae175:{NFSU2_TR(0x5ae175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae176:{NFSU2_TR(0x5ae176);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae177:{NFSU2_TR(0x5ae177);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae178:{NFSU2_TR(0x5ae178);
__builtin_memmove((R+24),(R+4),4);
}
B5ae17a:{NFSU2_TR(0x5ae17a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae17b:{NFSU2_TR(0x5ae17b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae17f:{NFSU2_TR(0x5ae17f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ae181:{NFSU2_TR(0x5ae181);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae189:{NFSU2_TR(0x5ae189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae18eull));
TAIL_STATIC(0x502fd0u,502);
}
B5ae18e:L5ae18e:{c.instructions+=3;NFSU2_TR(0x5ae18e);
__builtin_memmove((R+12),(R+0),4);
}
B5ae190:{NFSU2_TR(0x5ae190);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ae192:{NFSU2_TR(0x5ae192);
if(r1(R+518)){{goto L5ae1aa;}}
}
B5ae194:L5ae194:{c.instructions+=3;NFSU2_TR(0x5ae194);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae197:{NFSU2_TR(0x5ae197);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae199:{NFSU2_TR(0x5ae199);
if(r1(R+518)){{goto L5ae1a4;}}
}
B5ae19b:L5ae19b:{c.instructions+=2;NFSU2_TR(0x5ae19b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae19c:{NFSU2_TR(0x5ae19c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae1a1ull));
TAIL_STATIC(0x575630u,575);
}
B5ae1a1:L5ae1a1:{c.instructions+=1;NFSU2_TR(0x5ae1a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ae1a4:L5ae1a4:{c.instructions+=3;NFSU2_TR(0x5ae1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ae1a6:{NFSU2_TR(0x5ae1a6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ae1a8:{NFSU2_TR(0x5ae1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae194u);}goto L5ae194;}}
}
B5ae1aa:L5ae1aa:{c.instructions+=4;NFSU2_TR(0x5ae1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ae1ac:{NFSU2_TR(0x5ae1ac);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ae1ae:{NFSU2_TR(0x5ae1ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae1b6:{NFSU2_TR(0x5ae1b6);
if(r1(R+518)){{goto L5ae1d1;}}
}
B5ae1b8:L5ae1b8:{c.instructions+=6;NFSU2_TR(0x5ae1b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ae1ba:{NFSU2_TR(0x5ae1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae1bd:{NFSU2_TR(0x5ae1bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5ae1bf:{NFSU2_TR(0x5ae1bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae1c0:{NFSU2_TR(0x5ae1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae1c3:{NFSU2_TR(0x5ae1c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae1c8ull));
TAIL_STATIC(0x440ef0u,440);
}
B5ae1c8:L5ae1c8:{c.instructions+=4;NFSU2_TR(0x5ae1c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ae1ca:{NFSU2_TR(0x5ae1ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ae1cd:{NFSU2_TR(0x5ae1cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ae1cf:{NFSU2_TR(0x5ae1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae1b8u);}goto L5ae1b8;}}
}
B5ae1d1:L5ae1d1:{c.instructions+=7;NFSU2_TR(0x5ae1d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae1d5:{NFSU2_TR(0x5ae1d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ae1d6:{NFSU2_TR(0x5ae1d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae1d7:{NFSU2_TR(0x5ae1d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ae1d8:{NFSU2_TR(0x5ae1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae1df:{NFSU2_TR(0x5ae1df);
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
B5ae1e2:{NFSU2_TR(0x5ae1e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae1f0:L5ae1f0:{c.instructions+=1;NFSU2_TR(0x5ae1f0);
TAIL_STATIC(0x5aa410u,5aa);
}
B5ae200:L5ae200:{c.instructions+=3;NFSU2_TR(0x5ae200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae201:{NFSU2_TR(0x5ae201);
__builtin_memmove((R+24),(R+4),4);
}
B5ae203:{NFSU2_TR(0x5ae203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae208ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae1f0u);}goto L5ae1f0;}
}
B5ae208:L5ae208:{c.instructions+=2;NFSU2_TR(0x5ae208);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5ae20d:{NFSU2_TR(0x5ae20d);
if(r1(R+518)){{goto L5ae218;}}
}
B5ae20f:L5ae20f:{c.instructions+=2;NFSU2_TR(0x5ae20f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae210:{NFSU2_TR(0x5ae210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae215ull));
TAIL_STATIC(0x575630u,575);
}
B5ae215:L5ae215:{c.instructions+=1;NFSU2_TR(0x5ae215);
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
B5ae218:L5ae218:{c.instructions+=3;NFSU2_TR(0x5ae218);
__builtin_memmove((R+0),(R+24),4);
}
B5ae21a:{NFSU2_TR(0x5ae21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae21b:{NFSU2_TR(0x5ae21b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae220:L5ae220:{c.instructions+=8;NFSU2_TR(0x5ae220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae221:{NFSU2_TR(0x5ae221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae222:{NFSU2_TR(0x5ae222);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ae226:{NFSU2_TR(0x5ae226);
__builtin_memmove((R+24),(R+4),4);
}
B5ae228:{NFSU2_TR(0x5ae228);
u8 U[4];
w4(U+0,u32(0x7a2434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae22d:{NFSU2_TR(0x5ae22d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae22e:{NFSU2_TR(0x5ae22e);
__builtin_memmove((R+4),(R+28),4);
}
B5ae230:{NFSU2_TR(0x5ae230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae235ull));
TAIL_STATIC(0x578ce0u,578);
}
B5ae235:L5ae235:{c.instructions+=3;NFSU2_TR(0x5ae235);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ae238:{NFSU2_TR(0x5ae238);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5ae23b:{NFSU2_TR(0x5ae23b);
if(r1(R+518)){{goto L5ae26e;}}
}
B5ae23d:L5ae23d:{c.instructions+=6;NFSU2_TR(0x5ae23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae243:{NFSU2_TR(0x5ae243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae249:{NFSU2_TR(0x5ae249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ae24b:{NFSU2_TR(0x5ae24b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae24c:{NFSU2_TR(0x5ae24c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae24d:{NFSU2_TR(0x5ae24d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae250ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ae250:L5ae250:{c.instructions+=6;NFSU2_TR(0x5ae250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae256:{NFSU2_TR(0x5ae256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ae258:{NFSU2_TR(0x5ae258);
__builtin_memmove((R+12),(R+0),4);
}
B5ae25a:{NFSU2_TR(0x5ae25a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae260:{NFSU2_TR(0x5ae260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae261:{NFSU2_TR(0x5ae261);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae264ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ae264:L5ae264:{c.instructions+=4;NFSU2_TR(0x5ae264);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae265:{NFSU2_TR(0x5ae265);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae266:{NFSU2_TR(0x5ae266);
__builtin_memmove((R+4),(R+24),4);
}
B5ae268:{NFSU2_TR(0x5ae268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae26dull));
TAIL_STATIC(0x598590u,598);
}
B5ae26d:L5ae26d:{c.instructions+=1;NFSU2_TR(0x5ae26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ae26e:L5ae26e:{c.instructions+=3;NFSU2_TR(0x5ae26e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae26f:{NFSU2_TR(0x5ae26f);
__builtin_memmove((R+4),(R+24),4);
}
B5ae271:{NFSU2_TR(0x5ae271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae276ull));
TAIL_STATIC(0x598390u,598);
}
B5ae276:L5ae276:{c.instructions+=8;NFSU2_TR(0x5ae276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae27c:{NFSU2_TR(0x5ae27c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae27e:{NFSU2_TR(0x5ae27e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5ae281:{NFSU2_TR(0x5ae281);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ae285:{NFSU2_TR(0x5ae285);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ae289:{NFSU2_TR(0x5ae289);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae28a:{NFSU2_TR(0x5ae28a);
__builtin_memmove((R+4),(R+28),4);
}
B5ae28c:{NFSU2_TR(0x5ae28c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae291ull));
TAIL_STATIC(0x5716c0u,571);
}
B5ae291:L5ae291:{c.instructions+=3;NFSU2_TR(0x5ae291);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ae295:{NFSU2_TR(0x5ae295);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae297:{NFSU2_TR(0x5ae297);
if(r1(R+518)){{goto L5ae2b5;}}
}
B5ae299:L5ae299:{c.instructions+=3;NFSU2_TR(0x5ae299);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ae29c:{NFSU2_TR(0x5ae29c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae29e:{NFSU2_TR(0x5ae29e);
if(r1(R+518)){{goto L5ae2a9;}}
}
B5ae2a0:L5ae2a0:{c.instructions+=3;NFSU2_TR(0x5ae2a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2a2:{NFSU2_TR(0x5ae2a2);
__builtin_memmove((R+4),(R+24),4);
}
B5ae2a4:{NFSU2_TR(0x5ae2a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae2a9ull));
TAIL_STATIC(0x5a9b10u,5a9);
}
B5ae2a9:L5ae2a9:{c.instructions+=3;NFSU2_TR(0x5ae2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae2af:{NFSU2_TR(0x5ae2af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2b0:{NFSU2_TR(0x5ae2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae2b5ull));
TAIL_STATIC(0x592b40u,592);
}
B5ae2b5:L5ae2b5:{c.instructions+=2;NFSU2_TR(0x5ae2b5);
__builtin_memmove((R+4),(R+28),4);
}
B5ae2b7:{NFSU2_TR(0x5ae2b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae2bcull));
TAIL_STATIC(0x578d90u,578);
}
B5ae2bc:L5ae2bc:{c.instructions+=3;NFSU2_TR(0x5ae2bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ae2bd:{NFSU2_TR(0x5ae2bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae2be:{NFSU2_TR(0x5ae2be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae2d0:L5ae2d0:{c.instructions+=15;NFSU2_TR(0x5ae2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae2d6:{NFSU2_TR(0x5ae2d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2d8:{NFSU2_TR(0x5ae2d8);
u8 U[4];
w4(U+0,u32(0x778d6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2dd:{NFSU2_TR(0x5ae2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2de:{NFSU2_TR(0x5ae2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae2e5:{NFSU2_TR(0x5ae2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5ae2e8:{NFSU2_TR(0x5ae2e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2e9:{NFSU2_TR(0x5ae2e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2ea:{NFSU2_TR(0x5ae2ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2eb:{NFSU2_TR(0x5ae2eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2ec:{NFSU2_TR(0x5ae2ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ae2f0:{NFSU2_TR(0x5ae2f0);
u8 U[4];
w4(U+0,u32(0x7a244cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2f5:{NFSU2_TR(0x5ae2f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae2f7:{NFSU2_TR(0x5ae2f7);
__builtin_memmove((R+4),(R+28),4);
}
B5ae2f9:{NFSU2_TR(0x5ae2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae2feull));
TAIL_STATIC(0x578ce0u,578);
}
B5ae2fe:L5ae2fe:{c.instructions+=5;NFSU2_TR(0x5ae2fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ae301:{NFSU2_TR(0x5ae301);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae303:{NFSU2_TR(0x5ae303);
__builtin_memmove((R+4),(R+28),4);
}
B5ae305:{NFSU2_TR(0x5ae305);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae307:{NFSU2_TR(0x5ae307);
if(r1(R+518)){{goto L5ae3c0;}}
}
B5ae30d:L5ae30d:{c.instructions+=5;NFSU2_TR(0x5ae30d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae30f:{NFSU2_TR(0x5ae30f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae311:{NFSU2_TR(0x5ae311);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ae315:{NFSU2_TR(0x5ae315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae316:{NFSU2_TR(0x5ae316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae31bull));
TAIL_STATIC(0x571640u,571);
}
B5ae31b:L5ae31b:{c.instructions+=3;NFSU2_TR(0x5ae31b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ae31d:{NFSU2_TR(0x5ae31d);
u8 U[10];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+12)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5ae322:{NFSU2_TR(0x5ae322);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ae455;}}
}
B5ae328:L5ae328:{c.instructions+=7;NFSU2_TR(0x5ae328);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae32a:{NFSU2_TR(0x5ae32a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae32c:{NFSU2_TR(0x5ae32c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae32e:{NFSU2_TR(0x5ae32e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ae332:{NFSU2_TR(0x5ae332);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae333:{NFSU2_TR(0x5ae333);
__builtin_memmove((R+4),(R+28),4);
}
B5ae335:{NFSU2_TR(0x5ae335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae33aull));
TAIL_STATIC(0x571640u,571);
}
B5ae33a:L5ae33a:{c.instructions+=7;NFSU2_TR(0x5ae33a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae33c:{NFSU2_TR(0x5ae33c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae33e:{NFSU2_TR(0x5ae33e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae340:{NFSU2_TR(0x5ae340);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ae344:{NFSU2_TR(0x5ae344);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae345:{NFSU2_TR(0x5ae345);
__builtin_memmove((R+4),(R+28),4);
}
B5ae347:{NFSU2_TR(0x5ae347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae34cull));
TAIL_STATIC(0x571640u,571);
}
B5ae34c:L5ae34c:{c.instructions+=4;NFSU2_TR(0x5ae34c);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ae351:{NFSU2_TR(0x5ae351);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ae353:{NFSU2_TR(0x5ae353);
__builtin_memmove((R+4),gp(0x86b298),4);
}
B5ae359:{NFSU2_TR(0x5ae359);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ae35f;}}
}
B5ae35b:L5ae35b:{c.instructions+=2;NFSU2_TR(0x5ae35b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ae35d:{NFSU2_TR(0x5ae35d);
{goto L5ae362;}
}
B5ae35f:L5ae35f:{c.instructions+=1;NFSU2_TR(0x5ae35f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B5ae362:L5ae362:{c.instructions+=3;NFSU2_TR(0x5ae362);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ae367:{NFSU2_TR(0x5ae367);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ae369:{NFSU2_TR(0x5ae369);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ae36f;}}
}
B5ae36b:L5ae36b:{c.instructions+=2;NFSU2_TR(0x5ae36b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ae36d:{NFSU2_TR(0x5ae36d);
{goto L5ae372;}
}
B5ae36f:L5ae36f:{c.instructions+=1;NFSU2_TR(0x5ae36f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5ae372:L5ae372:{c.instructions+=3;NFSU2_TR(0x5ae372);
__builtin_memmove((R+0),gp(0x86b0bc),4);
}
B5ae377:{NFSU2_TR(0x5ae377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae378:{NFSU2_TR(0x5ae378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae37dull));
TAIL_STATIC(0x440e50u,440);
}
B5ae37d:L5ae37d:{c.instructions+=5;NFSU2_TR(0x5ae37d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ae380:{NFSU2_TR(0x5ae380);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae384:{NFSU2_TR(0x5ae384);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae386:{NFSU2_TR(0x5ae386);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae38e:{NFSU2_TR(0x5ae38e);
if(r1(R+518)){{goto L5ae39b;}}
}
B5ae390:L5ae390:{c.instructions+=4;NFSU2_TR(0x5ae390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae391:{NFSU2_TR(0x5ae391);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae392:{NFSU2_TR(0x5ae392);
__builtin_memmove((R+4),(R+0),4);
}
B5ae394:{NFSU2_TR(0x5ae394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae399ull));
TAIL_STATIC(0x5a0340u,5a0);
}
B5ae399:L5ae399:{c.instructions+=1;NFSU2_TR(0x5ae399);
{goto L5ae39d;}
}
B5ae39b:L5ae39b:{c.instructions+=1;NFSU2_TR(0x5ae39b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ae39d:L5ae39d:{c.instructions+=4;NFSU2_TR(0x5ae39d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae39e:{NFSU2_TR(0x5ae39e);
__builtin_memmove((R+4),(R+0),4);
}
B5ae3a0:{NFSU2_TR(0x5ae3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae3a8:{NFSU2_TR(0x5ae3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae3adull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae220u);}goto L5ae220;}
}
B5ae3ad:L5ae3ad:{c.instructions+=4;NFSU2_TR(0x5ae3ad);
u8 U[6];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ae3b2:{NFSU2_TR(0x5ae3b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ae3b3:{NFSU2_TR(0x5ae3b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ae3b5:{NFSU2_TR(0x5ae3b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae328u);}goto L5ae328;}}
}
B5ae3bb:L5ae3bb:{c.instructions+=1;NFSU2_TR(0x5ae3bb);
{goto L5ae455;}
}
B5ae3c0:L5ae3c0:{c.instructions+=4;NFSU2_TR(0x5ae3c0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae3c2:{NFSU2_TR(0x5ae3c2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae3c4:{NFSU2_TR(0x5ae3c4);
u8 U[4];
w4(U+0,u32(0x86b248ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae3c9:{NFSU2_TR(0x5ae3c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae3ceull));
TAIL_STATIC(0x571640u,571);
}
B5ae3ce:L5ae3ce:{c.instructions+=3;NFSU2_TR(0x5ae3ce);
__builtin_memmove((R+0),gp(0x86b490),4);
}
B5ae3d3:{NFSU2_TR(0x5ae3d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae3d5:{NFSU2_TR(0x5ae3d5);
if(r1(R+518)){{goto L5ae3df;}}
}
B5ae3d7:L5ae3d7:{c.instructions+=2;NFSU2_TR(0x5ae3d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffdd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae3dd:{NFSU2_TR(0x5ae3dd);
{goto L5ae3e1;}
}
B5ae3df:L5ae3df:{c.instructions+=1;NFSU2_TR(0x5ae3df);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ae3e1:L5ae3e1:{c.instructions+=2;NFSU2_TR(0x5ae3e1);
w4(R+4,u32(0x86b490ull));
}
B5ae3e6:{NFSU2_TR(0x5ae3e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae3ebull));
TAIL_STATIC(0x56d4f0u,56d);
}
B5ae3eb:L5ae3eb:{c.instructions+=3;NFSU2_TR(0x5ae3eb);
__builtin_memmove((R+20),(R+0),4);
}
B5ae3ed:{NFSU2_TR(0x5ae3ed);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ae3ef:{NFSU2_TR(0x5ae3ef);
if(r1(R+518)){{goto L5ae455;}}
}
B5ae3f1:L5ae3f1:{c.instructions+=15;NFSU2_TR(0x5ae3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae3f7:{NFSU2_TR(0x5ae3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae3fd:{NFSU2_TR(0x5ae3fd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ae3ff:{NFSU2_TR(0x5ae3ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5ae403:{NFSU2_TR(0x5ae403);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ae405:{NFSU2_TR(0x5ae405);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae407:{NFSU2_TR(0x5ae407);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae409:{NFSU2_TR(0x5ae409);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae40b:{NFSU2_TR(0x5ae40b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae40f:{NFSU2_TR(0x5ae40f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5ae413:{NFSU2_TR(0x5ae413);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ae417:{NFSU2_TR(0x5ae417);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae418:{NFSU2_TR(0x5ae418);
__builtin_memmove((R+4),(R+28),4);
}
B5ae41a:{NFSU2_TR(0x5ae41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae41e:{NFSU2_TR(0x5ae41e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae423ull));
TAIL_STATIC(0x571640u,571);
}
B5ae423:L5ae423:{c.instructions+=7;NFSU2_TR(0x5ae423);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae425:{NFSU2_TR(0x5ae425);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae427:{NFSU2_TR(0x5ae427);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae429:{NFSU2_TR(0x5ae429);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ae42d:{NFSU2_TR(0x5ae42d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae42e:{NFSU2_TR(0x5ae42e);
__builtin_memmove((R+4),(R+28),4);
}
B5ae430:{NFSU2_TR(0x5ae430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae435ull));
TAIL_STATIC(0x571640u,571);
}
B5ae435:L5ae435:{c.instructions+=3;NFSU2_TR(0x5ae435);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae436:{NFSU2_TR(0x5ae436);
__builtin_memmove((R+4),(R+24),4);
}
B5ae438:{NFSU2_TR(0x5ae438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae43dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae220u);}goto L5ae220;}
}
B5ae43d:L5ae43d:{c.instructions+=3;NFSU2_TR(0x5ae43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ae443:{NFSU2_TR(0x5ae443);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae445:{NFSU2_TR(0x5ae445);
if(r1(R+518)){{goto L5ae44f;}}
}
B5ae447:L5ae447:{c.instructions+=2;NFSU2_TR(0x5ae447);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffdd0ull))));
}
B5ae44d:{NFSU2_TR(0x5ae44d);
{goto L5ae451;}
}
B5ae44f:L5ae44f:{c.instructions+=1;NFSU2_TR(0x5ae44f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ae451:L5ae451:{c.instructions+=2;NFSU2_TR(0x5ae451);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ae453:{NFSU2_TR(0x5ae453);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae3f1u);}goto L5ae3f1;}}
}
B5ae455:L5ae455:{c.instructions+=2;NFSU2_TR(0x5ae455);
__builtin_memmove((R+4),(R+28),4);
}
B5ae457:{NFSU2_TR(0x5ae457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae45cull));
TAIL_STATIC(0x578d90u,578);
}
B5ae45c:L5ae45c:{c.instructions+=8;NFSU2_TR(0x5ae45c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae460:{NFSU2_TR(0x5ae460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ae461:{NFSU2_TR(0x5ae461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae462:{NFSU2_TR(0x5ae462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ae463:{NFSU2_TR(0x5ae463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ae464:{NFSU2_TR(0x5ae464);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae46b:{NFSU2_TR(0x5ae46b);
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
B5ae46e:{NFSU2_TR(0x5ae46e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae470:L5ae470:{c.instructions+=8;NFSU2_TR(0x5ae470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae471:{NFSU2_TR(0x5ae471);
__builtin_memmove((R+24),(R+4),4);
}
B5ae473:{NFSU2_TR(0x5ae473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae479:{NFSU2_TR(0x5ae479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae47f:{NFSU2_TR(0x5ae47f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ae481:{NFSU2_TR(0x5ae481);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae482:{NFSU2_TR(0x5ae482);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae483:{NFSU2_TR(0x5ae483);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae489ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ae489:L5ae489:{c.instructions+=5;NFSU2_TR(0x5ae489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae48f:{NFSU2_TR(0x5ae48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae495:{NFSU2_TR(0x5ae495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ae497:{NFSU2_TR(0x5ae497);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae498:{NFSU2_TR(0x5ae498);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae49eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ae49e:L5ae49e:{c.instructions+=3;NFSU2_TR(0x5ae49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ae4a4:{NFSU2_TR(0x5ae4a4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae4a6:{NFSU2_TR(0x5ae4a6);
if(r1(R+518)){{goto L5ae4be;}}
}
B5ae4a8:L5ae4a8:{c.instructions+=2;NFSU2_TR(0x5ae4a8);
__builtin_memmove((R+4),(R+28),4);
}
B5ae4aa:{NFSU2_TR(0x5ae4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae4afull));
TAIL_STATIC(0x5a9570u,5a9);
}
B5ae4af:L5ae4af:{c.instructions+=4;NFSU2_TR(0x5ae4af);
__builtin_memmove((R+0),gp(0x86b240),4);
}
B5ae4b4:{NFSU2_TR(0x5ae4b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae4b5:{NFSU2_TR(0x5ae4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae4b6:{NFSU2_TR(0x5ae4b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae4bbull));
TAIL_STATIC(0x43f920u,43f);
}
B5ae4bb:L5ae4bb:{c.instructions+=1;NFSU2_TR(0x5ae4bb);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ae4be:L5ae4be:{c.instructions+=7;NFSU2_TR(0x5ae4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae4c8:{NFSU2_TR(0x5ae4c8);
__builtin_memmove((R+0),gp(0x86b24c),4);
}
B5ae4cd:{NFSU2_TR(0x5ae4cd);
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
B5ae4ce:{NFSU2_TR(0x5ae4ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ae4cf:{NFSU2_TR(0x5ae4cf);
__builtin_memmove(gp(0x86b24c),(R+0),4);
}
B5ae4d4:{NFSU2_TR(0x5ae4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae4d5:{NFSU2_TR(0x5ae4d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae4e0:L5ae4e0:{c.instructions+=3;NFSU2_TR(0x5ae4e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae4e1:{NFSU2_TR(0x5ae4e1);
__builtin_memmove((R+24),(R+4),4);
}
B5ae4e3:{NFSU2_TR(0x5ae4e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae4e8ull));
TAIL_STATIC(0x5a9c00u,5a9);
}
B5ae4e8:L5ae4e8:{c.instructions+=2;NFSU2_TR(0x5ae4e8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5ae4ed:{NFSU2_TR(0x5ae4ed);
if(r1(R+518)){{goto L5ae4f8;}}
}
B5ae4ef:L5ae4ef:{c.instructions+=2;NFSU2_TR(0x5ae4ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae4f0:{NFSU2_TR(0x5ae4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae4f5ull));
TAIL_STATIC(0x575630u,575);
}
B5ae4f5:L5ae4f5:{c.instructions+=1;NFSU2_TR(0x5ae4f5);
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
B5ae4f8:L5ae4f8:{c.instructions+=3;NFSU2_TR(0x5ae4f8);
__builtin_memmove((R+0),(R+24),4);
}
B5ae4fa:{NFSU2_TR(0x5ae4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae4fb:{NFSU2_TR(0x5ae4fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae500:L5ae500:{c.instructions+=3;NFSU2_TR(0x5ae500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae501:{NFSU2_TR(0x5ae501);
__builtin_memmove((R+24),(R+4),4);
}
B5ae503:{NFSU2_TR(0x5ae503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae508ull));
TAIL_STATIC(0x5a9dc0u,5a9);
}
B5ae508:L5ae508:{c.instructions+=2;NFSU2_TR(0x5ae508);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5ae50d:{NFSU2_TR(0x5ae50d);
if(r1(R+518)){{goto L5ae518;}}
}
B5ae50f:L5ae50f:{c.instructions+=2;NFSU2_TR(0x5ae50f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae510:{NFSU2_TR(0x5ae510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae515ull));
TAIL_STATIC(0x575630u,575);
}
B5ae515:L5ae515:{c.instructions+=1;NFSU2_TR(0x5ae515);
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
B5ae518:L5ae518:{c.instructions+=3;NFSU2_TR(0x5ae518);
__builtin_memmove((R+0),(R+24),4);
}
B5ae51a:{NFSU2_TR(0x5ae51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae51b:{NFSU2_TR(0x5ae51b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae520:L5ae520:{c.instructions+=20;NFSU2_TR(0x5ae520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae521:{NFSU2_TR(0x5ae521);
__builtin_memmove((R+20),(R+16),4);
}
B5ae523:{NFSU2_TR(0x5ae523);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ae526:{NFSU2_TR(0x5ae526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B5ae52c:{NFSU2_TR(0x5ae52c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae52d:{NFSU2_TR(0x5ae52d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae52e:{NFSU2_TR(0x5ae52e);
__builtin_memmove((R+24),(R+4),4);
}
B5ae530:{NFSU2_TR(0x5ae530);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae531:{NFSU2_TR(0x5ae531);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ae535:{NFSU2_TR(0x5ae535);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae53d:{NFSU2_TR(0x5ae53d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae545:{NFSU2_TR(0x5ae545);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae54d:{NFSU2_TR(0x5ae54d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae555:{NFSU2_TR(0x5ae555);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae55d:{NFSU2_TR(0x5ae55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae565:{NFSU2_TR(0x5ae565);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae56d:{NFSU2_TR(0x5ae56d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae575:{NFSU2_TR(0x5ae575);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae57d:{NFSU2_TR(0x5ae57d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae585:{NFSU2_TR(0x5ae585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae58aull));
TAIL_STATIC(0x59fb50u,59f);
}
B5ae58a:L5ae58a:{c.instructions+=5;NFSU2_TR(0x5ae58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae58d:{NFSU2_TR(0x5ae58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae590:{NFSU2_TR(0x5ae590);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ae592:{NFSU2_TR(0x5ae592);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae594:{NFSU2_TR(0x5ae594);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ae76c;}}
}
B5ae59a:L5ae59a:{c.instructions+=2;NFSU2_TR(0x5ae59a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ae59c:{NFSU2_TR(0x5ae59c);
__builtin_memmove((R+16),(R+16),4);
}
B5ae5a0:L5ae5a0:{c.instructions+=5;NFSU2_TR(0x5ae5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae5a3:{NFSU2_TR(0x5ae5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae5a6:{NFSU2_TR(0x5ae5a6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ae5a7:{NFSU2_TR(0x5ae5a7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5ae5aa:{NFSU2_TR(0x5ae5aa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ae64a;}}
}
B5ae5b0:L5ae5b0:{c.instructions+=1;NFSU2_TR(0x5ae5b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ae918ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ae5b7:L5ae5b7:{c.instructions+=4;NFSU2_TR(0x5ae5b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ae5bb:{NFSU2_TR(0x5ae5bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae5bc:{NFSU2_TR(0x5ae5bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae5bd:{NFSU2_TR(0x5ae5bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae5c2ull));
TAIL_STATIC(0x5a1970u,5a1);
}
B5ae5c2:L5ae5c2:{c.instructions+=1;NFSU2_TR(0x5ae5c2);
{goto L5ae64a;}
}
B5ae5c7:L5ae5c7:{c.instructions+=10;NFSU2_TR(0x5ae5c7);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae5ca:{NFSU2_TR(0x5ae5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae5cd:{NFSU2_TR(0x5ae5cd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae5d1:{NFSU2_TR(0x5ae5d1);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae5d4:{NFSU2_TR(0x5ae5d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5ae5d8:{NFSU2_TR(0x5ae5d8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae5dc:{NFSU2_TR(0x5ae5dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae5e0:{NFSU2_TR(0x5ae5e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae5e8:{NFSU2_TR(0x5ae5e8);
u8 U[6];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5ae5ed:{NFSU2_TR(0x5ae5ed);
{goto L5ae64a;}
}
B5ae5ef:L5ae5ef:{c.instructions+=4;NFSU2_TR(0x5ae5ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ae5f3:{NFSU2_TR(0x5ae5f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae5f4:{NFSU2_TR(0x5ae5f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae5f5:{NFSU2_TR(0x5ae5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae5faull));
TAIL_STATIC(0x5987d0u,598);
}
B5ae5fa:L5ae5fa:{c.instructions+=1;NFSU2_TR(0x5ae5fa);
{goto L5ae64a;}
}
B5ae5fc:L5ae5fc:{c.instructions+=16;NFSU2_TR(0x5ae5fc);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5ae601:{NFSU2_TR(0x5ae601);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae605:{NFSU2_TR(0x5ae605);
u8 U[14];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5ae60a:{NFSU2_TR(0x5ae60a);
u8 U[6];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5ae60f:{NFSU2_TR(0x5ae60f);
u8 U[14];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5ae614:{NFSU2_TR(0x5ae614);
u8 U[6];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5ae619:{NFSU2_TR(0x5ae619);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ae61d:{NFSU2_TR(0x5ae61d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae621:{NFSU2_TR(0x5ae621);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae624:{NFSU2_TR(0x5ae624);
u8 U[6];
w4(U+0,u32(u32(u32(0x4aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5ae629:{NFSU2_TR(0x5ae629);
u8 U[14];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5ae62e:{NFSU2_TR(0x5ae62e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ae630:{NFSU2_TR(0x5ae630);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae634:{NFSU2_TR(0x5ae634);
u8 U[6];
w4(U+0,u32(u32(u32(0x4eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5ae639:{NFSU2_TR(0x5ae639);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae63d:{NFSU2_TR(0x5ae63d);
{goto L5ae64a;}
}
B5ae63f:L5ae63f:{c.instructions+=4;NFSU2_TR(0x5ae63f);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ae643:{NFSU2_TR(0x5ae643);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae644:{NFSU2_TR(0x5ae644);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae645:{NFSU2_TR(0x5ae645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae64aull));
TAIL_STATIC(0x5a2780u,5a2);
}
B5ae64a:L5ae64a:{c.instructions+=16;NFSU2_TR(0x5ae64a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae64e:{NFSU2_TR(0x5ae64e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ae652:{NFSU2_TR(0x5ae652);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae656:{NFSU2_TR(0x5ae656);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ae65a:{NFSU2_TR(0x5ae65a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ae65c:{NFSU2_TR(0x5ae65c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ae65e:{NFSU2_TR(0x5ae65e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ae660:{NFSU2_TR(0x5ae660);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae664:{NFSU2_TR(0x5ae664);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae668:{NFSU2_TR(0x5ae668);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ae66c:{NFSU2_TR(0x5ae66c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ae66e:{NFSU2_TR(0x5ae66e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ae670:{NFSU2_TR(0x5ae670);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ae674:{NFSU2_TR(0x5ae674);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae676:{NFSU2_TR(0x5ae676);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae679:{NFSU2_TR(0x5ae679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae681;}}
}
B5ae67b:L5ae67b:{c.instructions+=2;NFSU2_TR(0x5ae67b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae67f:{NFSU2_TR(0x5ae67f);
{goto L5ae683;}
}
B5ae681:L5ae681:{c.instructions+=1;NFSU2_TR(0x5ae681);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ae683:L5ae683:{c.instructions+=5;NFSU2_TR(0x5ae683);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae687:{NFSU2_TR(0x5ae687);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae68b:{NFSU2_TR(0x5ae68b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae68d:{NFSU2_TR(0x5ae68d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae690:{NFSU2_TR(0x5ae690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae69a;}}
}
B5ae692:L5ae692:{c.instructions+=2;NFSU2_TR(0x5ae692);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae696:{NFSU2_TR(0x5ae696);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae69a:L5ae69a:{c.instructions+=5;NFSU2_TR(0x5ae69a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae69e:{NFSU2_TR(0x5ae69e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae6a2:{NFSU2_TR(0x5ae6a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae6a4:{NFSU2_TR(0x5ae6a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae6a7:{NFSU2_TR(0x5ae6a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae6b3;}}
}
B5ae6a9:L5ae6a9:{c.instructions+=3;NFSU2_TR(0x5ae6a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae6ad:{NFSU2_TR(0x5ae6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae6b1:{NFSU2_TR(0x5ae6b1);
{goto L5ae6ca;}
}
B5ae6b3:L5ae6b3:{c.instructions+=5;NFSU2_TR(0x5ae6b3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae6b7:{NFSU2_TR(0x5ae6b7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae6bb:{NFSU2_TR(0x5ae6bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae6bd:{NFSU2_TR(0x5ae6bd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae6c0:{NFSU2_TR(0x5ae6c0);
if(r1(R+514)){{goto L5ae6ca;}}
}
B5ae6c2:L5ae6c2:{c.instructions+=2;NFSU2_TR(0x5ae6c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae6c6:{NFSU2_TR(0x5ae6c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae6ca:L5ae6ca:{c.instructions+=5;NFSU2_TR(0x5ae6ca);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae6ce:{NFSU2_TR(0x5ae6ce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae6d2:{NFSU2_TR(0x5ae6d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae6d4:{NFSU2_TR(0x5ae6d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae6d7:{NFSU2_TR(0x5ae6d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae6e3;}}
}
B5ae6d9:L5ae6d9:{c.instructions+=3;NFSU2_TR(0x5ae6d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae6dd:{NFSU2_TR(0x5ae6dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae6e1:{NFSU2_TR(0x5ae6e1);
{goto L5ae6fa;}
}
B5ae6e3:L5ae6e3:{c.instructions+=5;NFSU2_TR(0x5ae6e3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae6e7:{NFSU2_TR(0x5ae6e7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae6eb:{NFSU2_TR(0x5ae6eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae6ed:{NFSU2_TR(0x5ae6ed);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae6f0:{NFSU2_TR(0x5ae6f0);
if(r1(R+514)){{goto L5ae6fa;}}
}
B5ae6f2:L5ae6f2:{c.instructions+=2;NFSU2_TR(0x5ae6f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae6f6:{NFSU2_TR(0x5ae6f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae6fa:L5ae6fa:{c.instructions+=5;NFSU2_TR(0x5ae6fa);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae6fe:{NFSU2_TR(0x5ae6fe);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae702:{NFSU2_TR(0x5ae702);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae704:{NFSU2_TR(0x5ae704);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae707:{NFSU2_TR(0x5ae707);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae713;}}
}
B5ae709:L5ae709:{c.instructions+=3;NFSU2_TR(0x5ae709);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae70d:{NFSU2_TR(0x5ae70d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae711:{NFSU2_TR(0x5ae711);
{goto L5ae72a;}
}
B5ae713:L5ae713:{c.instructions+=5;NFSU2_TR(0x5ae713);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae717:{NFSU2_TR(0x5ae717);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae71b:{NFSU2_TR(0x5ae71b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae71d:{NFSU2_TR(0x5ae71d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae720:{NFSU2_TR(0x5ae720);
if(r1(R+514)){{goto L5ae72a;}}
}
B5ae722:L5ae722:{c.instructions+=2;NFSU2_TR(0x5ae722);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae726:{NFSU2_TR(0x5ae726);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae72a:L5ae72a:{c.instructions+=5;NFSU2_TR(0x5ae72a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae72e:{NFSU2_TR(0x5ae72e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae732:{NFSU2_TR(0x5ae732);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae734:{NFSU2_TR(0x5ae734);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae737:{NFSU2_TR(0x5ae737);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae743;}}
}
B5ae739:L5ae739:{c.instructions+=3;NFSU2_TR(0x5ae739);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae73d:{NFSU2_TR(0x5ae73d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae741:{NFSU2_TR(0x5ae741);
{goto L5ae75a;}
}
B5ae743:L5ae743:{c.instructions+=5;NFSU2_TR(0x5ae743);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae747:{NFSU2_TR(0x5ae747);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae74b:{NFSU2_TR(0x5ae74b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae74d:{NFSU2_TR(0x5ae74d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae750:{NFSU2_TR(0x5ae750);
if(r1(R+514)){{goto L5ae75a;}}
}
B5ae752:L5ae752:{c.instructions+=2;NFSU2_TR(0x5ae752);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae756:{NFSU2_TR(0x5ae756);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae75a:L5ae75a:{c.instructions+=6;NFSU2_TR(0x5ae75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae75d:{NFSU2_TR(0x5ae75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae760:{NFSU2_TR(0x5ae760);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ae761:{NFSU2_TR(0x5ae761);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B5ae764:{NFSU2_TR(0x5ae764);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ae766:{NFSU2_TR(0x5ae766);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae5a0u);}goto L5ae5a0;}}
}
B5ae76c:L5ae76c:{c.instructions+=27;NFSU2_TR(0x5ae76c);
{u32 ea_=u32(u32(8001664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae772:{NFSU2_TR(0x5ae772);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae776:{NFSU2_TR(0x5ae776);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae77a:{NFSU2_TR(0x5ae77a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae77e:{NFSU2_TR(0x5ae77e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae782:{NFSU2_TR(0x5ae782);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae785:{NFSU2_TR(0x5ae785);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae789:{NFSU2_TR(0x5ae789);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae78f:{NFSU2_TR(0x5ae78f);
{u32 ea_=u32(u32(8001664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae795:{NFSU2_TR(0x5ae795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae79b:{NFSU2_TR(0x5ae79b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae79f:{NFSU2_TR(0x5ae79f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae7a3:{NFSU2_TR(0x5ae7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae7a9:{NFSU2_TR(0x5ae7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae7ad:{NFSU2_TR(0x5ae7ad);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae7b3:{NFSU2_TR(0x5ae7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae7b9:{NFSU2_TR(0x5ae7b9);
{u32 ea_=u32(u32(8001664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae7bf:{NFSU2_TR(0x5ae7bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae7c3:{NFSU2_TR(0x5ae7c3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ae7c7:{NFSU2_TR(0x5ae7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae7cd:{NFSU2_TR(0x5ae7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae7d0:{NFSU2_TR(0x5ae7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae7d6:{NFSU2_TR(0x5ae7d6);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae7dc:{NFSU2_TR(0x5ae7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae7e2:{NFSU2_TR(0x5ae7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae7e5:{NFSU2_TR(0x5ae7e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5ae7e6:{NFSU2_TR(0x5ae7e6);
if(r1(R+518)){{goto L5ae89f;}}
}
B5ae7ec:L5ae7ec:{c.instructions+=2;NFSU2_TR(0x5ae7ec);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ae7ef:{NFSU2_TR(0x5ae7ef);
if(r1(R+518)){{goto L5ae836;}}
}
B5ae7f1:L5ae7f1:{c.instructions+=2;NFSU2_TR(0x5ae7f1);
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
B5ae7f2:{NFSU2_TR(0x5ae7f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae8b4;}}
}
B5ae7f8:L5ae7f8:{c.instructions+=14;NFSU2_TR(0x5ae7f8);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae7fb:{NFSU2_TR(0x5ae7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae7fe:{NFSU2_TR(0x5ae7fe);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae801:{NFSU2_TR(0x5ae801);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae808:{NFSU2_TR(0x5ae808);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ae80a:{NFSU2_TR(0x5ae80a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae811:{NFSU2_TR(0x5ae811);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae818:{NFSU2_TR(0x5ae818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae81b:{NFSU2_TR(0x5ae81b);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae81e:{NFSU2_TR(0x5ae81e);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae821:{NFSU2_TR(0x5ae821);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae828:{NFSU2_TR(0x5ae828);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ae82a:{NFSU2_TR(0x5ae82a);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae831:{NFSU2_TR(0x5ae831);
{goto L5ae8bb;}
}
B5ae836:L5ae836:{c.instructions+=24;NFSU2_TR(0x5ae836);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae839:{NFSU2_TR(0x5ae839);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ae83c:{NFSU2_TR(0x5ae83c);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae83f:{NFSU2_TR(0x5ae83f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ae842:{NFSU2_TR(0x5ae842);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae845:{NFSU2_TR(0x5ae845);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ae848:{NFSU2_TR(0x5ae848);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae84f:{NFSU2_TR(0x5ae84f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae856:{NFSU2_TR(0x5ae856);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ae858:{NFSU2_TR(0x5ae858);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae85f:{NFSU2_TR(0x5ae85f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae866:{NFSU2_TR(0x5ae866);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae86d:{NFSU2_TR(0x5ae86d);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae870:{NFSU2_TR(0x5ae870);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae873:{NFSU2_TR(0x5ae873);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae876:{NFSU2_TR(0x5ae876);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae879:{NFSU2_TR(0x5ae879);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae87c:{NFSU2_TR(0x5ae87c);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae87f:{NFSU2_TR(0x5ae87f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae886:{NFSU2_TR(0x5ae886);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ae888:{NFSU2_TR(0x5ae888);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae88f:{NFSU2_TR(0x5ae88f);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae896:{NFSU2_TR(0x5ae896);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae89d:{NFSU2_TR(0x5ae89d);
{goto L5ae8bb;}
}
B5ae89f:L5ae89f:{c.instructions+=5;NFSU2_TR(0x5ae89f);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ae8a6:{NFSU2_TR(0x5ae8a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae8a7:{NFSU2_TR(0x5ae8a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ae8ae:{NFSU2_TR(0x5ae8ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae8af:{NFSU2_TR(0x5ae8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae8b4ull));
TAIL_STATIC(0x5a19f0u,5a1);
}
B5ae8b4:L5ae8b4:{c.instructions+=1;NFSU2_TR(0x5ae8b4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae8bb:L5ae8bb:{c.instructions+=20;NFSU2_TR(0x5ae8bb);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae8c2:{NFSU2_TR(0x5ae8c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ae8c3:{NFSU2_TR(0x5ae8c3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae8c7:{NFSU2_TR(0x5ae8c7);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae8ce:{NFSU2_TR(0x5ae8ce);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae8d5:{NFSU2_TR(0x5ae8d5);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ae8d7:{NFSU2_TR(0x5ae8d7);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ae8de:{NFSU2_TR(0x5ae8de);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae8e5:{NFSU2_TR(0x5ae8e5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ae8eb:{NFSU2_TR(0x5ae8eb);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae8f1:{NFSU2_TR(0x5ae8f1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ae8f7:{NFSU2_TR(0x5ae8f7);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae8fd:{NFSU2_TR(0x5ae8fd);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae904:{NFSU2_TR(0x5ae904);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ae90a:{NFSU2_TR(0x5ae90a);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ae910:{NFSU2_TR(0x5ae910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae911:{NFSU2_TR(0x5ae911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ae912:{NFSU2_TR(0x5ae912);
__builtin_memmove((R+16),(R+20),4);
}
B5ae914:{NFSU2_TR(0x5ae914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ae915:{NFSU2_TR(0x5ae915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ae930:L5ae930:{c.instructions+=16;NFSU2_TR(0x5ae930);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae932:{NFSU2_TR(0x5ae932);
u8 U[4];
w4(U+0,u32(0x778d8eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae937:{NFSU2_TR(0x5ae937);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae93d:{NFSU2_TR(0x5ae93d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae93e:{NFSU2_TR(0x5ae93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae945:{NFSU2_TR(0x5ae945);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xd4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xd4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ae94b:{NFSU2_TR(0x5ae94b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae94c:{NFSU2_TR(0x5ae94c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae94d:{NFSU2_TR(0x5ae94d);
__builtin_memmove((R+12),(R+4),4);
}
B5ae94f:{NFSU2_TR(0x5ae94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ae951:{NFSU2_TR(0x5ae951);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae952:{NFSU2_TR(0x5ae952);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae953:{NFSU2_TR(0x5ae953);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae957:{NFSU2_TR(0x5ae957);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ae95a:{NFSU2_TR(0x5ae95a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ae95d:{NFSU2_TR(0x5ae95d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae960ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ae960:L5ae960:{c.instructions+=5;NFSU2_TR(0x5ae960);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae963:{NFSU2_TR(0x5ae963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae964:{NFSU2_TR(0x5ae964);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae965:{NFSU2_TR(0x5ae965);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae966:{NFSU2_TR(0x5ae966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae96bull));
TAIL_STATIC(0x5e7100u,5e7);
}
B5ae96b:L5ae96b:{c.instructions+=5;NFSU2_TR(0x5ae96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ae96e:{NFSU2_TR(0x5ae96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae974:{NFSU2_TR(0x5ae974);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae976:{NFSU2_TR(0x5ae976);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ae97e:{NFSU2_TR(0x5ae97e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aea0a;}}
}
B5ae984:L5ae984:{c.instructions+=3;NFSU2_TR(0x5ae984);
w4(R+24,u32(0x3cull));
}
B5ae989:{NFSU2_TR(0x5ae989);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae98d:{NFSU2_TR(0x5ae98d);
__builtin_memmove((R+4),(R+4),4);
}
B5ae990:L5ae990:{c.instructions+=5;NFSU2_TR(0x5ae990);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ae993:{NFSU2_TR(0x5ae993);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5ae996:{NFSU2_TR(0x5ae996);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae999:{NFSU2_TR(0x5ae999);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae99b:{NFSU2_TR(0x5ae99b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae9f4;}}
}
B5ae99d:L5ae99d:{c.instructions+=5;NFSU2_TR(0x5ae99d);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae9a0:{NFSU2_TR(0x5ae9a0);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae9a3:{NFSU2_TR(0x5ae9a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae9a5:{NFSU2_TR(0x5ae9a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae9a8:{NFSU2_TR(0x5ae9a8);
if(r1(R+514)){{goto L5ae9f4;}}
}
B5ae9aa:L5ae9aa:{c.instructions+=5;NFSU2_TR(0x5ae9aa);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae9ad:{NFSU2_TR(0x5ae9ad);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae9b0:{NFSU2_TR(0x5ae9b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae9b2:{NFSU2_TR(0x5ae9b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae9b5:{NFSU2_TR(0x5ae9b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae9f4;}}
}
B5ae9b7:L5ae9b7:{c.instructions+=5;NFSU2_TR(0x5ae9b7);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae9ba:{NFSU2_TR(0x5ae9ba);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae9bd:{NFSU2_TR(0x5ae9bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae9bf:{NFSU2_TR(0x5ae9bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ae9c2:{NFSU2_TR(0x5ae9c2);
if(r1(R+514)){{goto L5ae9f4;}}
}
B5ae9c4:L5ae9c4:{c.instructions+=5;NFSU2_TR(0x5ae9c4);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ae9c7:{NFSU2_TR(0x5ae9c7);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ae9ca:{NFSU2_TR(0x5ae9ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ae9cc:{NFSU2_TR(0x5ae9cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae9cf:{NFSU2_TR(0x5ae9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ae9f4;}}
}
B5ae9d1:L5ae9d1:{c.instructions+=3;NFSU2_TR(0x5ae9d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ae9d2:{NFSU2_TR(0x5ae9d2);
__builtin_memmove((R+4),(R+12),4);
}
B5ae9d4:{NFSU2_TR(0x5ae9d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ae9d9ull));
TAIL_STATIC(0x5937b0u,593);
}
B5ae9d9:L5ae9d9:{c.instructions+=4;NFSU2_TR(0x5ae9d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ae9db:{NFSU2_TR(0x5ae9db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5ae9de:{NFSU2_TR(0x5ae9de);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ae9e0:{NFSU2_TR(0x5ae9e0);
if(r1(R+518)){{goto L5ae9f4;}}
}
B5ae9e2:L5ae9e2:{c.instructions+=3;NFSU2_TR(0x5ae9e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae9e6:{NFSU2_TR(0x5ae9e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ae9e9:{NFSU2_TR(0x5ae9e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ae9f4;}}
}
B5ae9eb:L5ae9eb:{c.instructions+=3;NFSU2_TR(0x5ae9eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ae9ef:{NFSU2_TR(0x5ae9ef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ae9f0:{NFSU2_TR(0x5ae9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ae9f4:L5ae9f4:{c.instructions+=5;NFSU2_TR(0x5ae9f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ae9f8:{NFSU2_TR(0x5ae9f8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ae9fb:{NFSU2_TR(0x5ae9fb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5ae9fc:{NFSU2_TR(0x5ae9fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aea00:{NFSU2_TR(0x5aea00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae990u);}goto L5ae990;}}
}
B5aea02:L5aea02:{c.instructions+=3;NFSU2_TR(0x5aea02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aea06:{NFSU2_TR(0x5aea06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aea08:{NFSU2_TR(0x5aea08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aea11;}}
}
B5aea0a:L5aea0a:{c.instructions+=2;NFSU2_TR(0x5aea0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aea0c:{NFSU2_TR(0x5aea0c);
{goto L5aebf9;}
}
B5aea11:L5aea11:{c.instructions+=1;NFSU2_TR(0x5aea11);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5aea12:L5aea12:{c.instructions+=4;NFSU2_TR(0x5aea12);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5aea14:{NFSU2_TR(0x5aea14);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5aea16:{NFSU2_TR(0x5aea16);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aea18:{NFSU2_TR(0x5aea18);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aea4a;}}
}
B5aea1a:L5aea1a:{c.instructions+=1;NFSU2_TR(0x5aea1a);
__builtin_memmove((R+12),(R+12),4);
}
B5aea20:L5aea20:{c.instructions+=8;NFSU2_TR(0x5aea20);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5aea24:{NFSU2_TR(0x5aea24);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5aea28:{NFSU2_TR(0x5aea28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5aea2b:{NFSU2_TR(0x5aea2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B5aea2e:{NFSU2_TR(0x5aea2e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5aea30:{NFSU2_TR(0x5aea30);
w4(R+12,u32(0-u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5aea32:{NFSU2_TR(0x5aea32);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aea36:{NFSU2_TR(0x5aea36);
if(r1(R+518)){{goto L5aea41;}}
}
B5aea38:L5aea38:{c.instructions+=3;NFSU2_TR(0x5aea38);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5aea3c:{NFSU2_TR(0x5aea3c);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5aea40:{NFSU2_TR(0x5aea40);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5aea41:L5aea41:{c.instructions+=3;NFSU2_TR(0x5aea41);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5aea42:{NFSU2_TR(0x5aea42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aea44:{NFSU2_TR(0x5aea44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aea20u);}goto L5aea20;}}
}
B5aea46:L5aea46:{c.instructions+=2;NFSU2_TR(0x5aea46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aea48:{NFSU2_TR(0x5aea48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aea12u);}goto L5aea12;}}
}
B5aea4a:L5aea4a:{c.instructions+=5;NFSU2_TR(0x5aea4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aea4e:{NFSU2_TR(0x5aea4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aea50:{NFSU2_TR(0x5aea50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aea52:{NFSU2_TR(0x5aea52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aea56:{NFSU2_TR(0x5aea56);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aeb79;}}
}
B5aea5c:L5aea5c:{c.instructions+=1;NFSU2_TR(0x5aea5c);
__builtin_memmove((R+16),(R+16),4);
}
B5aea60:L5aea60:{c.instructions+=8;NFSU2_TR(0x5aea60);
__builtin_memmove((R+24),gp(0x86af7c),4);
}
B5aea66:{NFSU2_TR(0x5aea66);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5aea6a:{NFSU2_TR(0x5aea6a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5aea6b:{NFSU2_TR(0x5aea6b);
__builtin_memmove(gp(0x86af7c),(R+24),4);
}
B5aea71:{NFSU2_TR(0x5aea71);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aea74:{NFSU2_TR(0x5aea74);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aea77:{NFSU2_TR(0x5aea77);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aea7d:{NFSU2_TR(0x5aea7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aea82ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5aea82:L5aea82:{c.instructions+=4;NFSU2_TR(0x5aea82);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5aea87:{NFSU2_TR(0x5aea87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86afa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5aea8d:{NFSU2_TR(0x5aea8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aea8f:{NFSU2_TR(0x5aea8f);
if(r1(R+518)){{goto L5aeb64;}}
}
B5aea95:L5aea95:{c.instructions+=6;NFSU2_TR(0x5aea95);
__builtin_memmove((R+4),gp(0x86af80),4);
}
B5aea9b:{NFSU2_TR(0x5aea9b);
__builtin_memmove((R+24),gp(0x86b4c8),4);
}
B5aeaa1:{NFSU2_TR(0x5aeaa1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5aeaa2:{NFSU2_TR(0x5aeaa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aeaa4:{NFSU2_TR(0x5aeaa4);
__builtin_memmove(gp(0x86af80),(R+4),4);
}
B5aeaaa:{NFSU2_TR(0x5aeaaa);
if(r1(R+518)){{goto L5aeab5;}}
}
B5aeaac:L5aeaac:{c.instructions+=3;NFSU2_TR(0x5aeaac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5aeaaf:{NFSU2_TR(0x5aeaaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeab3:{NFSU2_TR(0x5aeab3);
{goto L5aeac1;}
}
B5aeab5:L5aeab5:{c.instructions+=2;NFSU2_TR(0x5aeab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aeabd:{NFSU2_TR(0x5aeabd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5aeac1:L5aeac1:{c.instructions+=2;NFSU2_TR(0x5aeac1);
w4(R+4,u32(0x86b4c8ull));
}
B5aeac6:{NFSU2_TR(0x5aeac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aeacbull));
TAIL_STATIC(0x431780u,431);
}
B5aeacb:L5aeacb:{c.instructions+=3;NFSU2_TR(0x5aeacb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aeacd:{NFSU2_TR(0x5aeacd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aead1:{NFSU2_TR(0x5aead1);
if(r1(R+518)){{goto L5aeb64;}}
}
B5aead7:L5aead7:{c.instructions+=1;NFSU2_TR(0x5aead7);
{goto L5aeae0;}
}
B5aead9:L5aead9:{c.instructions+=2;NFSU2_TR(0x5aead9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5aeadd:{NFSU2_TR(0x5aeadd);
__builtin_memmove((R+4),(R+4),4);
}
B5aeae0:L5aeae0:{c.instructions+=2;NFSU2_TR(0x5aeae0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5aeae4:{NFSU2_TR(0x5aeae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aeb32;}}
}
B5aeae6:L5aeae6:{c.instructions+=4;NFSU2_TR(0x5aeae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5aeae9:{NFSU2_TR(0x5aeae9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5aeaec:{NFSU2_TR(0x5aeaec);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+4))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5aeaef:{NFSU2_TR(0x5aeaef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aeb32;}}
}
B5aeaf1:L5aeaf1:{c.instructions+=3;NFSU2_TR(0x5aeaf1);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5aeaf3:{NFSU2_TR(0x5aeaf3);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aeaf5:{NFSU2_TR(0x5aeaf5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aeb2a;}}
}
B5aeaf7:L5aeaf7:{c.instructions+=3;NFSU2_TR(0x5aeaf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aeafa:{NFSU2_TR(0x5aeafa);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B5aeafc:{NFSU2_TR(0x5aeafc);
__builtin_memmove((R+16),(R+16),4);
}
B5aeb00:L5aeb00:{c.instructions+=5;NFSU2_TR(0x5aeb00);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeb05:{NFSU2_TR(0x5aeb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5aeb08:{NFSU2_TR(0x5aeb08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeb09:{NFSU2_TR(0x5aeb09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeb0a:{NFSU2_TR(0x5aeb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aeb0full));
TAIL_STATIC(0x43d190u,43d);
}
B5aeb0f:L5aeb0f:{c.instructions+=3;NFSU2_TR(0x5aeb0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5aeb12:{NFSU2_TR(0x5aeb12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aeb14:{NFSU2_TR(0x5aeb14);
if(r1(R+518)){{goto L5aeb22;}}
}
B5aeb16:L5aeb16:{c.instructions+=5;NFSU2_TR(0x5aeb16);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5aeb1a:{NFSU2_TR(0x5aeb1a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5aeb1b:{NFSU2_TR(0x5aeb1b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5aeb1e:{NFSU2_TR(0x5aeb1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aeb20:{NFSU2_TR(0x5aeb20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aeb00u);}goto L5aeb00;}}
}
B5aeb22:L5aeb22:{c.instructions+=2;NFSU2_TR(0x5aeb22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aeb26:{NFSU2_TR(0x5aeb26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5aeb2a:L5aeb2a:{c.instructions+=3;NFSU2_TR(0x5aeb2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5aeb2e:{NFSU2_TR(0x5aeb2e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aeb30:{NFSU2_TR(0x5aeb30);
if(r1(R+518)){{goto L5aeb52;}}
}
B5aeb32:L5aeb32:{c.instructions+=3;NFSU2_TR(0x5aeb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aeb35:{NFSU2_TR(0x5aeb35);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aeb37:{NFSU2_TR(0x5aeb37);
if(r1(R+518)){{goto L5aeb42;}}
}
B5aeb39:L5aeb39:{c.instructions+=3;NFSU2_TR(0x5aeb39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B5aeb3c:{NFSU2_TR(0x5aeb3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeb40:{NFSU2_TR(0x5aeb40);
{goto L5aeb4a;}
}
B5aeb42:L5aeb42:{c.instructions+=1;NFSU2_TR(0x5aeb42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aeb4a:L5aeb4a:{c.instructions+=2;NFSU2_TR(0x5aeb4a);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aeb4e:{NFSU2_TR(0x5aeb4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aead9u);}goto L5aead9;}}
}
B5aeb50:L5aeb50:{c.instructions+=1;NFSU2_TR(0x5aeb50);
{goto L5aeb64;}
}
B5aeb52:L5aeb52:{c.instructions+=3;NFSU2_TR(0x5aeb52);
s4(0x86af84,u32(u32(m4(0x86af84))+u32(u32(0x1ull))));
}
B5aeb58:{NFSU2_TR(0x5aeb58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aeb5c:{NFSU2_TR(0x5aeb5c);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5aeb64:L5aeb64:{c.instructions+=6;NFSU2_TR(0x5aeb64);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aeb68:{NFSU2_TR(0x5aeb68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aeb6c:{NFSU2_TR(0x5aeb6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5aeb6d:{NFSU2_TR(0x5aeb6d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aeb6f:{NFSU2_TR(0x5aeb6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeb73:{NFSU2_TR(0x5aeb73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aea60u);}goto L5aea60;}}
}
B5aeb79:L5aeb79:{c.instructions+=5;NFSU2_TR(0x5aeb79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aeb7d:{NFSU2_TR(0x5aeb7d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5aeb7f:{NFSU2_TR(0x5aeb7f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5aeb81:{NFSU2_TR(0x5aeb81);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aeb83:{NFSU2_TR(0x5aeb83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aebf7;}}
}
B5aeb85:L5aeb85:{c.instructions+=3;NFSU2_TR(0x5aeb85);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5aeb89:{NFSU2_TR(0x5aeb89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aeb8b:{NFSU2_TR(0x5aeb8b);
if(r1(R+518)){{goto L5aebee;}}
}
B5aeb8d:L5aeb8d:{c.instructions+=3;NFSU2_TR(0x5aeb8d);
__builtin_memmove((R+4),gp(0x86ad68),4);
}
B5aeb93:{NFSU2_TR(0x5aeb93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeb94:{NFSU2_TR(0x5aeb94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aeb99ull));
TAIL_STATIC(0x43cd10u,43c);
}
B5aeb99:L5aeb99:{c.instructions+=3;NFSU2_TR(0x5aeb99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aeb9c:{NFSU2_TR(0x5aeb9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aeb9e:{NFSU2_TR(0x5aeb9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aebf7;}}
}
B5aeba0:L5aeba0:{c.instructions+=6;NFSU2_TR(0x5aeba0);
__builtin_memmove((R+0),gp(0x86ad68),4);
}
B5aeba5:{NFSU2_TR(0x5aeba5);
__builtin_memmove((R+8),gp(0x86b2bc),4);
}
B5aebab:{NFSU2_TR(0x5aebab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5aebae:{NFSU2_TR(0x5aebae);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B5aebb2:{NFSU2_TR(0x5aebb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aebb3:{NFSU2_TR(0x5aebb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aebb8ull));
TAIL_STATIC(0x440e50u,440);
}
B5aebb8:L5aebb8:{c.instructions+=5;NFSU2_TR(0x5aebb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aebbb:{NFSU2_TR(0x5aebbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aebbf:{NFSU2_TR(0x5aebbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aebc1:{NFSU2_TR(0x5aebc1);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aebcc:{NFSU2_TR(0x5aebcc);
if(r1(R+518)){{goto L5aebe2;}}
}
B5aebce:L5aebce:{c.instructions+=8;NFSU2_TR(0x5aebce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aebd2:{NFSU2_TR(0x5aebd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aebd5:{NFSU2_TR(0x5aebd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aebd8:{NFSU2_TR(0x5aebd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aebd9:{NFSU2_TR(0x5aebd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aebda:{NFSU2_TR(0x5aebda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aebdb:{NFSU2_TR(0x5aebdb);
__builtin_memmove((R+4),(R+0),4);
}
B5aebdd:{NFSU2_TR(0x5aebdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aebe2ull));
TAIL_STATIC(0x5aa0b0u,5aa);
}
B5aebe2:L5aebe2:{c.instructions+=2;NFSU2_TR(0x5aebe2);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aebed:{NFSU2_TR(0x5aebed);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5aebee:L5aebee:{c.instructions+=4;NFSU2_TR(0x5aebee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aebf2:{NFSU2_TR(0x5aebf2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5aebf3:{NFSU2_TR(0x5aebf3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aebf5:{NFSU2_TR(0x5aebf5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aeb85u);}goto L5aeb85;}}
}
B5aebf7:L5aebf7:{c.instructions+=1;NFSU2_TR(0x5aebf7);
__builtin_memmove((R+0),(R+20),4);
}
B5aebf9:L5aebf9:{c.instructions+=8;NFSU2_TR(0x5aebf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aec00:{NFSU2_TR(0x5aec00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aec01:{NFSU2_TR(0x5aec01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aec02:{NFSU2_TR(0x5aec02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aec03:{NFSU2_TR(0x5aec03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aec04:{NFSU2_TR(0x5aec04);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec0b:{NFSU2_TR(0x5aec0b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xe0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xe0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xe0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5aec11:{NFSU2_TR(0x5aec11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aec20:L5aec20:{c.instructions+=23;NFSU2_TR(0x5aec20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec21:{NFSU2_TR(0x5aec21);
__builtin_memmove((R+20),(R+16),4);
}
B5aec23:{NFSU2_TR(0x5aec23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5aec26:{NFSU2_TR(0x5aec26);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec28:{NFSU2_TR(0x5aec28);
u8 U[4];
w4(U+0,u32(0x778da8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec2d:{NFSU2_TR(0x5aec2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aec33:{NFSU2_TR(0x5aec33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec34:{NFSU2_TR(0x5aec34);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec3b:{NFSU2_TR(0x5aec3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B5aec3e:{NFSU2_TR(0x5aec3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec3f:{NFSU2_TR(0x5aec3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec40:{NFSU2_TR(0x5aec40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec41:{NFSU2_TR(0x5aec41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aec44:{NFSU2_TR(0x5aec44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5aec4a:{NFSU2_TR(0x5aec4a);
__builtin_memmove((R+24),(R+4),4);
}
B5aec4c:{NFSU2_TR(0x5aec4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aec4f:{NFSU2_TR(0x5aec4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec50:{NFSU2_TR(0x5aec50);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5aec52:{NFSU2_TR(0x5aec52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec53:{NFSU2_TR(0x5aec53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aec54:{NFSU2_TR(0x5aec54);
__builtin_memmove((R+4),(R+24),4);
}
B5aec56:{NFSU2_TR(0x5aec56);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec5a:{NFSU2_TR(0x5aec5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aec5full));
TAIL_STATIC(0x5a9ce0u,5a9);
}
B5aec5f:L5aec5f:{c.instructions+=12;NFSU2_TR(0x5aec5f);
u8 U[4];
w4(U+0,u32(0x7a2470ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aec65:{NFSU2_TR(0x5aec65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec6b:{NFSU2_TR(0x5aec6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec71:{NFSU2_TR(0x5aec71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec77:{NFSU2_TR(0x5aec77);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aec7e:{NFSU2_TR(0x5aec7e);
__builtin_memmove((R+0),gp(0x86b260),4);
}
B5aec83:{NFSU2_TR(0x5aec83);
__builtin_memmove((R+4),gp(0x86b288),4);
}
B5aec89:{NFSU2_TR(0x5aec89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5aec8a:{NFSU2_TR(0x5aec8a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aec8c:{NFSU2_TR(0x5aec8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aec90:{NFSU2_TR(0x5aec90);
__builtin_memmove(gp(0x86b260),(R+0),4);
}
B5aec95:{NFSU2_TR(0x5aec95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aec9c;}}
}
B5aec97:L5aec97:{c.instructions+=1;NFSU2_TR(0x5aec97);
__builtin_memmove(gp(0x86b288),(R+0),4);
}
B5aec9c:L5aec9c:{c.instructions+=16;NFSU2_TR(0x5aec9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeca2:{NFSU2_TR(0x5aeca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeca5:{NFSU2_TR(0x5aeca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeca8:{NFSU2_TR(0x5aeca8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aecac:{NFSU2_TR(0x5aecac);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5aecb2:{NFSU2_TR(0x5aecb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aecb8:{NFSU2_TR(0x5aecb8);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5aecbd:{NFSU2_TR(0x5aecbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aecc3:{NFSU2_TR(0x5aecc3);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5aecc9:{NFSU2_TR(0x5aecc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeccf:{NFSU2_TR(0x5aeccf);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5aecd3:{NFSU2_TR(0x5aecd3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aecd4:{NFSU2_TR(0x5aecd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aecd8:{NFSU2_TR(0x5aecd8);
u8 U[4];
w4(U+0,u32(0x7a2468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aecdd:{NFSU2_TR(0x5aecdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aecde:{NFSU2_TR(0x5aecde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aece3ull));
TAIL_STATIC(0x4400d0u,440);
}
B5aece3:L5aece3:{c.instructions+=6;NFSU2_TR(0x5aece3);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aece5:{NFSU2_TR(0x5aece5);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5aece9:{NFSU2_TR(0x5aece9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aecea:{NFSU2_TR(0x5aecea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5aeced:{NFSU2_TR(0x5aeced);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aecee:{NFSU2_TR(0x5aecee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aecf3ull));
TAIL_STATIC(0x43dc00u,43d);
}
B5aecf3:L5aecf3:{c.instructions+=6;NFSU2_TR(0x5aecf3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x57ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5aecf6:{NFSU2_TR(0x5aecf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5aecf9:{NFSU2_TR(0x5aecf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aecff:{NFSU2_TR(0x5aecff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aed02:{NFSU2_TR(0x5aed02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5aed05:{NFSU2_TR(0x5aed05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed0aull));
TAIL_STATIC(0x61c320u,61c);
}
B5aed0a:L5aed0a:{c.instructions+=3;NFSU2_TR(0x5aed0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aed10:{NFSU2_TR(0x5aed10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aed14:{NFSU2_TR(0x5aed14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed19ull));
TAIL_STATIC(0x5ed400u,5ed);
}
B5aed19:L5aed19:{c.instructions+=4;NFSU2_TR(0x5aed19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed1a:{NFSU2_TR(0x5aed1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aed1e:{NFSU2_TR(0x5aed1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed1f:{NFSU2_TR(0x5aed1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed24ull));
TAIL_STATIC(0x5a18c0u,5a1);
}
B5aed24:L5aed24:{c.instructions+=3;NFSU2_TR(0x5aed24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5aed27:{NFSU2_TR(0x5aed27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aed29:{NFSU2_TR(0x5aed29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aedb3;}}
}
B5aed2f:L5aed2f:{c.instructions+=2;NFSU2_TR(0x5aed2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aed32:{NFSU2_TR(0x5aed32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed37ull));
TAIL_STATIC(0x610310u,610);
}
B5aed37:L5aed37:{c.instructions+=3;NFSU2_TR(0x5aed37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aed3d:{NFSU2_TR(0x5aed3d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aed41:{NFSU2_TR(0x5aed41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed46ull));
TAIL_STATIC(0x5ed400u,5ed);
}
B5aed46:L5aed46:{c.instructions+=4;NFSU2_TR(0x5aed46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aed4a:{NFSU2_TR(0x5aed4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed4b:{NFSU2_TR(0x5aed4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed4c:{NFSU2_TR(0x5aed4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed51ull));
TAIL_STATIC(0x5a18c0u,5a1);
}
B5aed51:L5aed51:{c.instructions+=3;NFSU2_TR(0x5aed51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5aed54:{NFSU2_TR(0x5aed54);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aed56:{NFSU2_TR(0x5aed56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aedb3;}}
}
B5aed58:L5aed58:{c.instructions+=2;NFSU2_TR(0x5aed58);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed5a:{NFSU2_TR(0x5aed5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed5full));
TAIL_STATIC(0x575620u,575);
}
B5aed5f:L5aed5f:{c.instructions+=3;NFSU2_TR(0x5aed5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aed62:{NFSU2_TR(0x5aed62);
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
B5aed64:{NFSU2_TR(0x5aed64);
if(r1(R+518)){{goto L5aeda5;}}
}
B5aed66:L5aed66:{c.instructions+=10;NFSU2_TR(0x5aed66);
u8 U[4];
w4(U+0,u32(0x3f1fbe77ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed6b:{NFSU2_TR(0x5aed6b);
u8 U[4];
w4(U+0,u32(0x3f789375ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed70:{NFSU2_TR(0x5aed70);
u8 U[4];
w4(U+0,u32(0x400a8f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed75:{NFSU2_TR(0x5aed75);
u8 U[4];
w4(U+0,u32(0xbe4ccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed7a:{NFSU2_TR(0x5aed7a);
u8 U[4];
w4(U+0,u32(0xbf789375ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed7f:{NFSU2_TR(0x5aed7f);
u8 U[4];
w4(U+0,u32(0xc00de354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aed84:{NFSU2_TR(0x5aed84);
__builtin_memmove((R+4),(R+0),4);
}
B5aed86:{NFSU2_TR(0x5aed86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aed8d:{NFSU2_TR(0x5aed8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aed94:{NFSU2_TR(0x5aed94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aed99ull));
TAIL_STATIC(0x598760u,598);
}
B5aed99:L5aed99:{c.instructions+=3;NFSU2_TR(0x5aed99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aed9c:{NFSU2_TR(0x5aed9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aeda0:{NFSU2_TR(0x5aeda0);
{goto L5aee5c;}
}
B5aeda5:L5aeda5:{c.instructions+=4;NFSU2_TR(0x5aeda5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aeda7:{NFSU2_TR(0x5aeda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aedaa:{NFSU2_TR(0x5aedaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aedae:{NFSU2_TR(0x5aedae);
{goto L5aee5c;}
}
B5aedb3:L5aedb3:{c.instructions+=16;NFSU2_TR(0x5aedb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aedb6:{NFSU2_TR(0x5aedb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aedb9:{NFSU2_TR(0x5aedb9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aedbc:{NFSU2_TR(0x5aedbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aedbe:{NFSU2_TR(0x5aedbe);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aedc1:{NFSU2_TR(0x5aedc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aedc4:{NFSU2_TR(0x5aedc4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aedc6:{NFSU2_TR(0x5aedc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5aedca:{NFSU2_TR(0x5aedca);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aedcd:{NFSU2_TR(0x5aedcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aedce:{NFSU2_TR(0x5aedce);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5aedd2:{NFSU2_TR(0x5aedd2);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aedd5:{NFSU2_TR(0x5aedd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aedd6:{NFSU2_TR(0x5aedd6);
__builtin_memmove((R+4),(R+0),4);
}
B5aedd8:{NFSU2_TR(0x5aedd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aeddc:{NFSU2_TR(0x5aeddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aede1ull));
TAIL_STATIC(0x5a19f0u,5a1);
}
B5aede1:L5aede1:{c.instructions+=2;NFSU2_TR(0x5aede1);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aede3:{NFSU2_TR(0x5aede3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aede8ull));
TAIL_STATIC(0x575620u,575);
}
B5aede8:L5aede8:{c.instructions+=3;NFSU2_TR(0x5aede8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aedeb:{NFSU2_TR(0x5aedeb);
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
B5aeded:{NFSU2_TR(0x5aeded);
if(r1(R+518)){{goto L5aee54;}}
}
B5aedef:L5aedef:{c.instructions+=28;NFSU2_TR(0x5aedef);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aedf3:{NFSU2_TR(0x5aedf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aedf7:{NFSU2_TR(0x5aedf7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aedfb:{NFSU2_TR(0x5aedfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aedff:{NFSU2_TR(0x5aedff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee03:{NFSU2_TR(0x5aee03);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aee07:{NFSU2_TR(0x5aee07);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee0b:{NFSU2_TR(0x5aee0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aee0f:{NFSU2_TR(0x5aee0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee13:{NFSU2_TR(0x5aee13);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aee17:{NFSU2_TR(0x5aee17);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee1b:{NFSU2_TR(0x5aee1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aee1f:{NFSU2_TR(0x5aee1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aee20:{NFSU2_TR(0x5aee20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aee24:{NFSU2_TR(0x5aee24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee28:{NFSU2_TR(0x5aee28);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aee2c:{NFSU2_TR(0x5aee2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aee2d:{NFSU2_TR(0x5aee2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aee31:{NFSU2_TR(0x5aee31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aee32:{NFSU2_TR(0x5aee32);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aee36:{NFSU2_TR(0x5aee36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aee37:{NFSU2_TR(0x5aee37);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aee3b:{NFSU2_TR(0x5aee3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aee3c:{NFSU2_TR(0x5aee3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aee3d:{NFSU2_TR(0x5aee3d);
__builtin_memmove((R+4),(R+0),4);
}
B5aee3f:{NFSU2_TR(0x5aee3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aee46:{NFSU2_TR(0x5aee46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aee4d:{NFSU2_TR(0x5aee4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aee52ull));
TAIL_STATIC(0x598760u,598);
}
B5aee52:L5aee52:{c.instructions+=1;NFSU2_TR(0x5aee52);
{goto L5aee56;}
}
B5aee54:L5aee54:{c.instructions+=1;NFSU2_TR(0x5aee54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aee56:L5aee56:{c.instructions+=1;NFSU2_TR(0x5aee56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee5c:L5aee5c:{c.instructions+=2;NFSU2_TR(0x5aee5c);
__builtin_memmove((R+4),(R+24),4);
}
B5aee5e:{NFSU2_TR(0x5aee5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aee63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ae520u);}goto L5ae520;}
}
B5aee63:L5aee63:{c.instructions+=2;NFSU2_TR(0x5aee63);
__builtin_memmove((R+4),(R+24),4);
}
B5aee65:{NFSU2_TR(0x5aee65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aee6aull));
TAIL_STATIC(0x5a9de0u,5a9);
}
B5aee6a:L5aee6a:{c.instructions+=9;NFSU2_TR(0x5aee6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aee6e:{NFSU2_TR(0x5aee6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aee6f:{NFSU2_TR(0x5aee6f);
__builtin_memmove((R+0),(R+24),4);
}
B5aee71:{NFSU2_TR(0x5aee71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aee72:{NFSU2_TR(0x5aee72);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aee79:{NFSU2_TR(0x5aee79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aee7a:{NFSU2_TR(0x5aee7a);
__builtin_memmove((R+16),(R+20),4);
}
B5aee7c:{NFSU2_TR(0x5aee7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aee7d:{NFSU2_TR(0x5aee7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aee80:L5aee80:{c.instructions+=2;NFSU2_TR(0x5aee80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aee86:{NFSU2_TR(0x5aee86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aee8bull));
TAIL_STATIC(0x5ed1f0u,5ed);
}
B5aee8b:L5aee8b:{c.instructions+=4;NFSU2_TR(0x5aee8b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5aee8d:{NFSU2_TR(0x5aee8d);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5aee8f:{NFSU2_TR(0x5aee8f);
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
B5aee90:{NFSU2_TR(0x5aee90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aeea0:L5aeea0:{c.instructions+=4;NFSU2_TR(0x5aeea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeea1:{NFSU2_TR(0x5aeea1);
__builtin_memmove((R+24),(R+4),4);
}
B5aeea3:{NFSU2_TR(0x5aeea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aeea9:{NFSU2_TR(0x5aeea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aeeaeull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B5aeeae:L5aeeae:{c.instructions+=2;NFSU2_TR(0x5aeeae);
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
B5aeeb0:{NFSU2_TR(0x5aeeb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aeec5;}}
}
B5aeeb2:L5aeeb2:{c.instructions+=2;NFSU2_TR(0x5aeeb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aeeb8:{NFSU2_TR(0x5aeeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aeebdull));
TAIL_STATIC(0x5ec060u,5ec);
}
B5aeebd:L5aeebd:{c.instructions+=2;NFSU2_TR(0x5aeebd);
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
B5aeebf:{NFSU2_TR(0x5aeebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aeec5;}}
}
B5aeec1:L5aeec1:{c.instructions+=3;NFSU2_TR(0x5aeec1);
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
B5aeec3:{NFSU2_TR(0x5aeec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aeec4:{NFSU2_TR(0x5aeec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aeec5:L5aeec5:{c.instructions+=3;NFSU2_TR(0x5aeec5);
w4(R+0,u32(0x1ull));
}
B5aeeca:{NFSU2_TR(0x5aeeca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aeecb:{NFSU2_TR(0x5aeecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aeed0:L5aeed0:{c.instructions+=2;NFSU2_TR(0x5aeed0);
w4(R+0,u32(0x1cull));
}
B5aeed5:{NFSU2_TR(0x5aeed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aeee0:L5aeee0:{c.instructions+=15;NFSU2_TR(0x5aeee0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeee2:{NFSU2_TR(0x5aeee2);
u8 U[4];
w4(U+0,u32(0x778dc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeee7:{NFSU2_TR(0x5aeee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aeeed:{NFSU2_TR(0x5aeeed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeeee:{NFSU2_TR(0x5aeeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeef5:{NFSU2_TR(0x5aeef5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeef6:{NFSU2_TR(0x5aeef6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aeef7:{NFSU2_TR(0x5aeef7);
__builtin_memmove((R+24),(R+4),4);
}
B5aeef9:{NFSU2_TR(0x5aeef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aeefd:{NFSU2_TR(0x5aeefd);
u8 U[4];
w4(U+0,u32(0x7a2470ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aef03:{NFSU2_TR(0x5aef03);
s4(0x86b260,u32(u32(m4(0x86b260))-u32(u32(0x1ull))));
}
B5aef09:{NFSU2_TR(0x5aef09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5aef0c:{NFSU2_TR(0x5aef0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aef0e:{NFSU2_TR(0x5aef0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aef16:{NFSU2_TR(0x5aef16);
if(r1(R+518)){{goto L5aef36;}}
}
B5aef18:L5aef18:{c.instructions+=3;NFSU2_TR(0x5aef18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aef1b:{NFSU2_TR(0x5aef1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aef1f:{NFSU2_TR(0x5aef1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aef26;}}
}
B5aef21:L5aef21:{c.instructions+=1;NFSU2_TR(0x5aef21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aef26ull));
TAIL_STATIC(0x5a1920u,5a1);
}
B5aef26:L5aef26:{c.instructions+=3;NFSU2_TR(0x5aef26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aef29:{NFSU2_TR(0x5aef29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aef2b:{NFSU2_TR(0x5aef2b);
if(r1(R+518)){{goto L5aef36;}}
}
B5aef2d:L5aef2d:{c.instructions+=2;NFSU2_TR(0x5aef2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aef2e:{NFSU2_TR(0x5aef2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aef33ull));
TAIL_STATIC(0x575630u,575);
}
B5aef33:L5aef33:{c.instructions+=1;NFSU2_TR(0x5aef33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aef36:L5aef36:{c.instructions+=3;NFSU2_TR(0x5aef36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aef3c:{NFSU2_TR(0x5aef3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aef3e:{NFSU2_TR(0x5aef3e);
if(r1(R+518)){{goto L5aef49;}}
}
B5aef40:L5aef40:{c.instructions+=2;NFSU2_TR(0x5aef40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aef41:{NFSU2_TR(0x5aef41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aef46ull));
TAIL_STATIC(0x575630u,575);
}
B5aef46:L5aef46:{c.instructions+=1;NFSU2_TR(0x5aef46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aef49:L5aef49:{c.instructions+=7;NFSU2_TR(0x5aef49);
u8 U[4];
w4(U+0,u32(0x7a2168ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aef4f:{NFSU2_TR(0x5aef4f);
__builtin_memmove((R+0),gp(0x86b258),4);
}
B5aef54:{NFSU2_TR(0x5aef54);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5aef55:{NFSU2_TR(0x5aef55);
__builtin_memmove((R+4),(R+24),4);
}
B5aef57:{NFSU2_TR(0x5aef57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aef5f:{NFSU2_TR(0x5aef5f);
__builtin_memmove(gp(0x86b258),(R+0),4);
}
B5aef64:{NFSU2_TR(0x5aef64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aef69ull));
TAIL_STATIC(0x5a9c00u,5a9);
}
B5aef69:L5aef69:{c.instructions+=5;NFSU2_TR(0x5aef69);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aef6d:{NFSU2_TR(0x5aef6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aef6e:{NFSU2_TR(0x5aef6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aef75:{NFSU2_TR(0x5aef75);
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
B5aef78:{NFSU2_TR(0x5aef78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aef80:L5aef80:{c.instructions+=3;NFSU2_TR(0x5aef80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aef81:{NFSU2_TR(0x5aef81);
__builtin_memmove((R+24),(R+4),4);
}
B5aef83:{NFSU2_TR(0x5aef83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aef88ull));
TAIL_STATIC(0x5aa090u,5aa);
}
B5aef88:L5aef88:{c.instructions+=2;NFSU2_TR(0x5aef88);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5aef8d:{NFSU2_TR(0x5aef8d);
if(r1(R+518)){{goto L5aef98;}}
}
B5aef8f:L5aef8f:{c.instructions+=2;NFSU2_TR(0x5aef8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aef90:{NFSU2_TR(0x5aef90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aef95ull));
TAIL_STATIC(0x575630u,575);
}
B5aef95:L5aef95:{c.instructions+=1;NFSU2_TR(0x5aef95);
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
B5aef98:L5aef98:{c.instructions+=3;NFSU2_TR(0x5aef98);
__builtin_memmove((R+0),(R+24),4);
}
B5aef9a:{NFSU2_TR(0x5aef9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aef9b:{NFSU2_TR(0x5aef9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aefa0:L5aefa0:{c.instructions+=18;NFSU2_TR(0x5aefa0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aefa2:{NFSU2_TR(0x5aefa2);
u8 U[4];
w4(U+0,u32(0x778df3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aefa7:{NFSU2_TR(0x5aefa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aefad:{NFSU2_TR(0x5aefad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aefae:{NFSU2_TR(0x5aefae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aefb5:{NFSU2_TR(0x5aefb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aefb6:{NFSU2_TR(0x5aefb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aefb7:{NFSU2_TR(0x5aefb7);
__builtin_memmove((R+24),(R+4),4);
}
B5aefb9:{NFSU2_TR(0x5aefb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aefbd:{NFSU2_TR(0x5aefbd);
u8 U[4];
w4(U+0,u32(0x7a22a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aefc3:{NFSU2_TR(0x5aefc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aefc6:{NFSU2_TR(0x5aefc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5aefc8:{NFSU2_TR(0x5aefc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aefcb:{NFSU2_TR(0x5aefcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5aefcd:{NFSU2_TR(0x5aefcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aefce:{NFSU2_TR(0x5aefce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aefd6:{NFSU2_TR(0x5aefd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aefd9:{NFSU2_TR(0x5aefd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aefdeull));
TAIL_STATIC(0x440ef0u,440);
}
B5aefde:L5aefde:{c.instructions+=6;NFSU2_TR(0x5aefde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aefe1:{NFSU2_TR(0x5aefe1);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aefe4:{NFSU2_TR(0x5aefe4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aefe7:{NFSU2_TR(0x5aefe7);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aefea:{NFSU2_TR(0x5aefea);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aeff0:{NFSU2_TR(0x5aeff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aeff5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5aeff5:L5aeff5:{c.instructions+=2;NFSU2_TR(0x5aeff5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5aeffa:{NFSU2_TR(0x5aeffa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86afa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x5af000u,5af);
}
XIT:NFSU2_TR_EXIT(0x5ae,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
