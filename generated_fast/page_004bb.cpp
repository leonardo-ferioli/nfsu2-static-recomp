#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_590(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4bb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4bb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 page_4bb(Cpu& c){return body_4bb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4bb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4bb001:goto L4bb001;
case 0x4bb003:c.instructions+=3;goto B4bb003;
case 0x4bb004:c.instructions+=2;goto B4bb004;
case 0x4bb006:c.instructions+=1;goto B4bb006;
case 0x4bb00b:goto L4bb00b;
case 0x4bb00e:c.instructions+=3;goto B4bb00e;
case 0x4bb012:c.instructions+=2;goto B4bb012;
case 0x4bb013:c.instructions+=1;goto B4bb013;
case 0x4bb018:goto L4bb018;
case 0x4bb019:c.instructions+=2;goto B4bb019;
case 0x4bb01a:c.instructions+=1;goto B4bb01a;
case 0x4bb01f:goto L4bb01f;
case 0x4bb022:c.instructions+=3;goto B4bb022;
case 0x4bb024:c.instructions+=2;goto B4bb024;
case 0x4bb026:c.instructions+=1;goto B4bb026;
case 0x4bb028:goto L4bb028;
case 0x4bb02b:c.instructions+=2;goto B4bb02b;
case 0x4bb02d:c.instructions+=1;goto B4bb02d;
case 0x4bb02f:goto L4bb02f;
case 0x4bb032:c.instructions+=5;goto B4bb032;
case 0x4bb035:c.instructions+=4;goto B4bb035;
case 0x4bb03a:c.instructions+=3;goto B4bb03a;
case 0x4bb03b:c.instructions+=2;goto B4bb03b;
case 0x4bb03c:c.instructions+=1;goto B4bb03c;
case 0x4bb041:goto L4bb041;
case 0x4bb044:c.instructions+=2;goto B4bb044;
case 0x4bb046:c.instructions+=1;goto B4bb046;
case 0x4bb048:goto L4bb048;
case 0x4bb04a:c.instructions+=2;goto B4bb04a;
case 0x4bb04f:c.instructions+=1;goto B4bb04f;
case 0x4bb051:goto L4bb051;
case 0x4bb054:c.instructions+=5;goto B4bb054;
case 0x4bb057:c.instructions+=4;goto B4bb057;
case 0x4bb05c:c.instructions+=3;goto B4bb05c;
case 0x4bb05d:c.instructions+=2;goto B4bb05d;
case 0x4bb05e:c.instructions+=1;goto B4bb05e;
case 0x4bb063:goto L4bb063;
case 0x4bb066:c.instructions+=2;goto B4bb066;
case 0x4bb068:c.instructions+=1;goto B4bb068;
case 0x4bb06a:goto L4bb06a;
case 0x4bb06c:c.instructions+=1;goto B4bb06c;
case 0x4bb071:goto L4bb071;
case 0x4bb074:c.instructions+=4;goto B4bb074;
case 0x4bb077:c.instructions+=3;goto B4bb077;
case 0x4bb078:c.instructions+=2;goto B4bb078;
case 0x4bb079:c.instructions+=1;goto B4bb079;
case 0x4bb07e:goto L4bb07e;
case 0x4bb081:goto L4bb081;
case 0x4bb084:c.instructions+=2;goto B4bb084;
case 0x4bb086:c.instructions+=1;goto B4bb086;
case 0x4bb088:goto L4bb088;
case 0x4bb08b:c.instructions+=1;goto B4bb08b;
case 0x4bb08d:goto L4bb08d;
case 0x4bb08f:goto L4bb08f;
case 0x4bb093:c.instructions+=4;goto B4bb093;
case 0x4bb094:c.instructions+=3;goto B4bb094;
case 0x4bb097:c.instructions+=2;goto B4bb097;
case 0x4bb09b:c.instructions+=1;goto B4bb09b;
case 0x4bb0a1:goto L4bb0a1;
case 0x4bb0a4:c.instructions+=3;goto B4bb0a4;
case 0x4bb0a6:c.instructions+=2;goto B4bb0a6;
case 0x4bb0a8:c.instructions+=1;goto B4bb0a8;
case 0x4bb0ad:goto L4bb0ad;
case 0x4bb0b0:c.instructions+=2;goto B4bb0b0;
case 0x4bb0b2:c.instructions+=1;goto B4bb0b2;
case 0x4bb0b7:goto L4bb0b7;
case 0x4bb0ba:c.instructions+=3;goto B4bb0ba;
case 0x4bb0bd:c.instructions+=2;goto B4bb0bd;
case 0x4bb0bf:c.instructions+=1;goto B4bb0bf;
case 0x4bb0c1:goto L4bb0c1;
case 0x4bb0c3:c.instructions+=1;goto B4bb0c3;
case 0x4bb0c5:goto L4bb0c5;
case 0x4bb0c6:c.instructions+=1;goto B4bb0c6;
case 0x4bb0cb:goto L4bb0cb;
case 0x4bb0ce:c.instructions+=1;goto B4bb0ce;
case 0x4bb0d0:goto L4bb0d0;
case 0x4bb0d1:c.instructions+=2;goto B4bb0d1;
case 0x4bb0d3:c.instructions+=1;goto B4bb0d3;
case 0x4bb0d8:goto L4bb0d8;
case 0x4bb0d9:c.instructions+=4;goto B4bb0d9;
case 0x4bb0da:c.instructions+=3;goto B4bb0da;
case 0x4bb0dc:c.instructions+=2;goto B4bb0dc;
case 0x4bb0e2:c.instructions+=1;goto B4bb0e2;
case 0x4bb0e7:goto L4bb0e7;
case 0x4bb0e8:c.instructions+=5;goto B4bb0e8;
case 0x4bb0e9:c.instructions+=4;goto B4bb0e9;
case 0x4bb0ea:c.instructions+=3;goto B4bb0ea;
case 0x4bb0eb:c.instructions+=2;goto B4bb0eb;
case 0x4bb0ee:c.instructions+=1;goto B4bb0ee;
case 0x4bb0f0:goto L4bb0f0;
case 0x4bb0f1:c.instructions+=13;goto B4bb0f1;
case 0x4bb0f3:c.instructions+=12;goto B4bb0f3;
case 0x4bb0f6:c.instructions+=11;goto B4bb0f6;
case 0x4bb0f8:c.instructions+=10;goto B4bb0f8;
case 0x4bb0fd:c.instructions+=9;goto B4bb0fd;
case 0x4bb103:c.instructions+=8;goto B4bb103;
case 0x4bb104:c.instructions+=7;goto B4bb104;
case 0x4bb10b:c.instructions+=6;goto B4bb10b;
case 0x4bb111:c.instructions+=5;goto B4bb111;
case 0x4bb118:c.instructions+=4;goto B4bb118;
case 0x4bb119:c.instructions+=3;goto B4bb119;
case 0x4bb11a:c.instructions+=2;goto B4bb11a;
case 0x4bb11c:c.instructions+=1;goto B4bb11c;
case 0x4bb122:goto L4bb122;
case 0x4bb12c:c.instructions+=1;goto B4bb12c;
case 0x4bb132:goto L4bb132;
case 0x4bb139:goto L4bb139;
case 0x4bb13e:c.instructions+=1;goto B4bb13e;
case 0x4bb143:goto L4bb143;
case 0x4bb145:c.instructions+=2;goto B4bb145;
case 0x4bb147:c.instructions+=1;goto B4bb147;
case 0x4bb14b:goto L4bb14b;
case 0x4bb14d:c.instructions+=2;goto B4bb14d;
case 0x4bb152:c.instructions+=1;goto B4bb152;
case 0x4bb157:goto L4bb157;
case 0x4bb159:c.instructions+=1;goto B4bb159;
case 0x4bb15e:goto L4bb15e;
case 0x4bb15f:c.instructions+=1;goto B4bb15f;
case 0x4bb164:goto L4bb164;
case 0x4bb167:c.instructions+=2;goto B4bb167;
case 0x4bb168:c.instructions+=1;goto B4bb168;
case 0x4bb16d:goto L4bb16d;
case 0x4bb173:c.instructions+=24;goto B4bb173;
case 0x4bb175:c.instructions+=23;goto B4bb175;
case 0x4bb179:c.instructions+=22;goto B4bb179;
case 0x4bb17c:c.instructions+=21;goto B4bb17c;
case 0x4bb180:c.instructions+=20;goto B4bb180;
case 0x4bb185:c.instructions+=19;goto B4bb185;
case 0x4bb189:c.instructions+=18;goto B4bb189;
case 0x4bb18f:c.instructions+=17;goto B4bb18f;
case 0x4bb190:c.instructions+=16;goto B4bb190;
case 0x4bb194:c.instructions+=15;goto B4bb194;
case 0x4bb199:c.instructions+=14;goto B4bb199;
case 0x4bb19d:c.instructions+=13;goto B4bb19d;
case 0x4bb1a3:c.instructions+=12;goto B4bb1a3;
case 0x4bb1a7:c.instructions+=11;goto B4bb1a7;
case 0x4bb1ab:c.instructions+=10;goto B4bb1ab;
case 0x4bb1b0:c.instructions+=9;goto B4bb1b0;
case 0x4bb1b4:c.instructions+=8;goto B4bb1b4;
case 0x4bb1b5:c.instructions+=7;goto B4bb1b5;
case 0x4bb1b9:c.instructions+=6;goto B4bb1b9;
case 0x4bb1bd:c.instructions+=5;goto B4bb1bd;
case 0x4bb1c3:c.instructions+=4;goto B4bb1c3;
case 0x4bb1c4:c.instructions+=3;goto B4bb1c4;
case 0x4bb1c9:c.instructions+=2;goto B4bb1c9;
case 0x4bb1ce:c.instructions+=1;goto B4bb1ce;
case 0x4bb1d3:goto L4bb1d3;
case 0x4bb1d5:c.instructions+=1;goto B4bb1d5;
case 0x4bb1db:goto L4bb1db;
case 0x4bb1dd:c.instructions+=2;goto B4bb1dd;
case 0x4bb1e2:c.instructions+=1;goto B4bb1e2;
case 0x4bb1e7:goto L4bb1e7;
case 0x4bb1ea:c.instructions+=2;goto B4bb1ea;
case 0x4bb1ef:c.instructions+=1;goto B4bb1ef;
case 0x4bb1f4:goto L4bb1f4;
case 0x4bb1f5:c.instructions+=5;goto B4bb1f5;
case 0x4bb1fa:c.instructions+=4;goto B4bb1fa;
case 0x4bb1ff:c.instructions+=3;goto B4bb1ff;
case 0x4bb204:c.instructions+=2;goto B4bb204;
case 0x4bb205:c.instructions+=1;goto B4bb205;
case 0x4bb20a:goto L4bb20a;
case 0x4bb20d:c.instructions+=9;goto B4bb20d;
case 0x4bb213:c.instructions+=8;goto B4bb213;
case 0x4bb215:c.instructions+=7;goto B4bb215;
case 0x4bb21c:c.instructions+=6;goto B4bb21c;
case 0x4bb223:c.instructions+=5;goto B4bb223;
case 0x4bb224:c.instructions+=4;goto B4bb224;
case 0x4bb225:c.instructions+=3;goto B4bb225;
case 0x4bb227:c.instructions+=2;goto B4bb227;
case 0x4bb228:c.instructions+=1;goto B4bb228;
case 0x4bb22b:goto L4bb22b;
case 0x4bb232:c.instructions+=1;goto B4bb232;
case 0x4bb238:goto L4bb238;
case 0x4bb23a:c.instructions+=3;goto B4bb23a;
case 0x4bb23c:c.instructions+=2;goto B4bb23c;
case 0x4bb241:c.instructions+=1;goto B4bb241;
case 0x4bb246:goto L4bb246;
case 0x4bb248:c.instructions+=2;goto B4bb248;
case 0x4bb24a:c.instructions+=1;goto B4bb24a;
case 0x4bb24c:goto L4bb24c;
case 0x4bb250:goto L4bb250;
case 0x4bb256:c.instructions+=2;goto B4bb256;
case 0x4bb25c:c.instructions+=1;goto B4bb25c;
case 0x4bb25e:goto L4bb25e;
case 0x4bb25f:c.instructions+=3;goto B4bb25f;
case 0x4bb261:c.instructions+=2;goto B4bb261;
case 0x4bb266:c.instructions+=1;goto B4bb266;
case 0x4bb26b:goto L4bb26b;
case 0x4bb26d:c.instructions+=2;goto B4bb26d;
case 0x4bb26f:c.instructions+=1;goto B4bb26f;
case 0x4bb271:goto L4bb271;
case 0x4bb275:c.instructions+=1;goto B4bb275;
case 0x4bb27a:goto L4bb27a;
case 0x4bb27c:c.instructions+=7;goto B4bb27c;
case 0x4bb27e:c.instructions+=6;goto B4bb27e;
case 0x4bb282:c.instructions+=5;goto B4bb282;
case 0x4bb283:c.instructions+=4;goto B4bb283;
case 0x4bb285:c.instructions+=3;goto B4bb285;
case 0x4bb287:c.instructions+=2;goto B4bb287;
case 0x4bb292:c.instructions+=1;goto B4bb292;
case 0x4bb295:goto L4bb295;
case 0x4bb299:c.instructions+=1;goto B4bb299;
case 0x4bb29e:goto L4bb29e;
case 0x4bb2a0:c.instructions+=5;goto B4bb2a0;
case 0x4bb2a2:c.instructions+=4;goto B4bb2a2;
case 0x4bb2a9:c.instructions+=3;goto B4bb2a9;
case 0x4bb2ad:c.instructions+=2;goto B4bb2ad;
case 0x4bb2b8:c.instructions+=1;goto B4bb2b8;
case 0x4bb2bd:goto L4bb2bd;
case 0x4bb2c2:goto L4bb2c2;
case 0x4bb2c9:c.instructions+=7;goto B4bb2c9;
case 0x4bb2ca:c.instructions+=6;goto B4bb2ca;
case 0x4bb2cd:c.instructions+=5;goto B4bb2cd;
case 0x4bb2d4:c.instructions+=4;goto B4bb2d4;
case 0x4bb2d5:c.instructions+=3;goto B4bb2d5;
case 0x4bb2d7:c.instructions+=2;goto B4bb2d7;
case 0x4bb2d8:c.instructions+=1;goto B4bb2d8;
case 0x4bb2e0:goto L4bb2e0;
case 0x4bb2e3:c.instructions+=9;goto B4bb2e3;
case 0x4bb2e4:c.instructions+=8;goto B4bb2e4;
case 0x4bb2e5:c.instructions+=7;goto B4bb2e5;
case 0x4bb2e6:c.instructions+=6;goto B4bb2e6;
case 0x4bb2e8:c.instructions+=5;goto B4bb2e8;
case 0x4bb2eb:c.instructions+=4;goto B4bb2eb;
case 0x4bb2ed:c.instructions+=3;goto B4bb2ed;
case 0x4bb2ee:c.instructions+=2;goto B4bb2ee;
case 0x4bb2f2:c.instructions+=1;goto B4bb2f2;
case 0x4bb2f4:goto L4bb2f4;
case 0x4bb2f7:c.instructions+=1;goto B4bb2f7;
case 0x4bb2f9:goto L4bb2f9;
case 0x4bb2fb:goto L4bb2fb;
case 0x4bb2fe:c.instructions+=4;goto B4bb2fe;
case 0x4bb301:c.instructions+=3;goto B4bb301;
case 0x4bb302:c.instructions+=2;goto B4bb302;
case 0x4bb304:c.instructions+=1;goto B4bb304;
case 0x4bb309:goto L4bb309;
case 0x4bb30d:c.instructions+=4;goto B4bb30d;
case 0x4bb310:c.instructions+=3;goto B4bb310;
case 0x4bb315:c.instructions+=2;goto B4bb315;
case 0x4bb317:c.instructions+=1;goto B4bb317;
case 0x4bb31d:goto L4bb31d;
case 0x4bb320:goto L4bb320;
case 0x4bb323:c.instructions+=2;goto B4bb323;
case 0x4bb325:c.instructions+=1;goto B4bb325;
case 0x4bb327:goto L4bb327;
case 0x4bb32a:c.instructions+=1;goto B4bb32a;
case 0x4bb32c:goto L4bb32c;
case 0x4bb32e:goto L4bb32e;
case 0x4bb332:c.instructions+=3;goto B4bb332;
case 0x4bb337:c.instructions+=2;goto B4bb337;
case 0x4bb339:c.instructions+=1;goto B4bb339;
case 0x4bb33b:goto L4bb33b;
case 0x4bb33e:c.instructions+=1;goto B4bb33e;
case 0x4bb340:goto L4bb340;
case 0x4bb342:c.instructions+=1;goto B4bb342;
case 0x4bb344:goto L4bb344;
case 0x4bb347:c.instructions+=1;goto B4bb347;
case 0x4bb349:goto L4bb349;
case 0x4bb34b:goto L4bb34b;
case 0x4bb34d:c.instructions+=1;goto B4bb34d;
case 0x4bb34f:goto L4bb34f;
case 0x4bb352:c.instructions+=2;goto B4bb352;
case 0x4bb354:c.instructions+=1;goto B4bb354;
case 0x4bb356:goto L4bb356;
case 0x4bb359:c.instructions+=1;goto B4bb359;
case 0x4bb35b:goto L4bb35b;
case 0x4bb35d:goto L4bb35d;
case 0x4bb361:c.instructions+=3;goto B4bb361;
case 0x4bb362:c.instructions+=2;goto B4bb362;
case 0x4bb364:c.instructions+=1;goto B4bb364;
case 0x4bb366:goto L4bb366;
case 0x4bb369:c.instructions+=3;goto B4bb369;
case 0x4bb36b:c.instructions+=2;goto B4bb36b;
case 0x4bb36e:c.instructions+=1;goto B4bb36e;
case 0x4bb370:goto L4bb370;
case 0x4bb374:c.instructions+=3;goto B4bb374;
case 0x4bb375:c.instructions+=2;goto B4bb375;
case 0x4bb376:c.instructions+=1;goto B4bb376;
case 0x4bb37b:goto L4bb37b;
case 0x4bb37e:c.instructions+=1;goto B4bb37e;
case 0x4bb380:goto L4bb380;
case 0x4bb386:c.instructions+=2;goto B4bb386;
case 0x4bb387:c.instructions+=1;goto B4bb387;
case 0x4bb38c:goto L4bb38c;
case 0x4bb390:c.instructions+=3;goto B4bb390;
case 0x4bb391:c.instructions+=2;goto B4bb391;
case 0x4bb392:c.instructions+=1;goto B4bb392;
case 0x4bb397:goto L4bb397;
case 0x4bb39a:goto L4bb39a;
case 0x4bb39c:c.instructions+=1;goto B4bb39c;
case 0x4bb39e:goto L4bb39e;
case 0x4bb3a1:c.instructions+=2;goto B4bb3a1;
case 0x4bb3a3:c.instructions+=1;goto B4bb3a3;
case 0x4bb3a5:goto L4bb3a5;
case 0x4bb3a8:c.instructions+=1;goto B4bb3a8;
case 0x4bb3aa:goto L4bb3aa;
case 0x4bb3ac:goto L4bb3ac;
case 0x4bb3b0:c.instructions+=4;goto B4bb3b0;
case 0x4bb3b3:c.instructions+=3;goto B4bb3b3;
case 0x4bb3b4:c.instructions+=2;goto B4bb3b4;
case 0x4bb3b6:c.instructions+=1;goto B4bb3b6;
case 0x4bb3bc:goto L4bb3bc;
case 0x4bb3c0:c.instructions+=3;goto B4bb3c0;
case 0x4bb3c1:c.instructions+=2;goto B4bb3c1;
case 0x4bb3c3:c.instructions+=1;goto B4bb3c3;
case 0x4bb3c8:goto L4bb3c8;
case 0x4bb3c9:c.instructions+=6;goto B4bb3c9;
case 0x4bb3ca:c.instructions+=5;goto B4bb3ca;
case 0x4bb3cb:c.instructions+=4;goto B4bb3cb;
case 0x4bb3cd:c.instructions+=3;goto B4bb3cd;
case 0x4bb3ce:c.instructions+=2;goto B4bb3ce;
case 0x4bb3d1:c.instructions+=1;goto B4bb3d1;
case 0x4bb3d4:goto L4bb3d4;
case 0x4bb3d5:c.instructions+=2;goto B4bb3d5;
case 0x4bb3d7:c.instructions+=1;goto B4bb3d7;
case 0x4bb3dc:goto L4bb3dc;
case 0x4bb3dd:c.instructions+=6;goto B4bb3dd;
case 0x4bb3de:c.instructions+=5;goto B4bb3de;
case 0x4bb3df:c.instructions+=4;goto B4bb3df;
case 0x4bb3e1:c.instructions+=3;goto B4bb3e1;
case 0x4bb3e2:c.instructions+=2;goto B4bb3e2;
case 0x4bb3e5:c.instructions+=1;goto B4bb3e5;
case 0x4bb3f0:goto L4bb3f0;
case 0x4bb3f1:c.instructions+=4;goto B4bb3f1;
case 0x4bb3f3:c.instructions+=3;goto B4bb3f3;
case 0x4bb3f5:c.instructions+=2;goto B4bb3f5;
case 0x4bb3ff:c.instructions+=1;goto B4bb3ff;
case 0x4bb404:goto L4bb404;
case 0x4bb406:c.instructions+=1;goto B4bb406;
case 0x4bb408:goto L4bb408;
case 0x4bb40e:c.instructions+=2;goto B4bb40e;
case 0x4bb410:c.instructions+=1;goto B4bb410;
case 0x4bb412:goto L4bb412;
case 0x4bb413:c.instructions+=1;goto B4bb413;
case 0x4bb418:goto L4bb418;
case 0x4bb41b:goto L4bb41b;
case 0x4bb425:c.instructions+=3;goto B4bb425;
case 0x4bb428:c.instructions+=2;goto B4bb428;
case 0x4bb42d:c.instructions+=1;goto B4bb42d;
case 0x4bb432:goto L4bb432;
case 0x4bb433:c.instructions+=6;goto B4bb433;
case 0x4bb435:c.instructions+=5;goto B4bb435;
case 0x4bb437:c.instructions+=4;goto B4bb437;
case 0x4bb43c:c.instructions+=3;goto B4bb43c;
case 0x4bb441:c.instructions+=2;goto B4bb441;
case 0x4bb442:c.instructions+=1;goto B4bb442;
case 0x4bb447:goto L4bb447;
case 0x4bb44a:goto L4bb44a;
case 0x4bb44b:c.instructions+=1;goto B4bb44b;
case 0x4bb450:goto L4bb450;
case 0x4bb453:c.instructions+=7;goto B4bb453;
case 0x4bb454:c.instructions+=6;goto B4bb454;
case 0x4bb455:c.instructions+=5;goto B4bb455;
case 0x4bb457:c.instructions+=4;goto B4bb457;
case 0x4bb45a:c.instructions+=3;goto B4bb45a;
case 0x4bb45f:c.instructions+=2;goto B4bb45f;
case 0x4bb460:c.instructions+=1;goto B4bb460;
case 0x4bb465:goto L4bb465;
case 0x4bb468:c.instructions+=4;goto B4bb468;
case 0x4bb46b:c.instructions+=3;goto B4bb46b;
case 0x4bb46e:c.instructions+=2;goto B4bb46e;
case 0x4bb470:c.instructions+=1;goto B4bb470;
case 0x4bb472:goto L4bb472;
case 0x4bb475:c.instructions+=3;goto B4bb475;
case 0x4bb47a:c.instructions+=2;goto B4bb47a;
case 0x4bb47b:c.instructions+=1;goto B4bb47b;
case 0x4bb480:goto L4bb480;
case 0x4bb483:c.instructions+=4;goto B4bb483;
case 0x4bb484:c.instructions+=3;goto B4bb484;
case 0x4bb485:c.instructions+=2;goto B4bb485;
case 0x4bb488:c.instructions+=1;goto B4bb488;
case 0x4bb489:goto L4bb489;
case 0x4bb48a:c.instructions+=3;goto B4bb48a;
case 0x4bb48b:c.instructions+=2;goto B4bb48b;
case 0x4bb48d:c.instructions+=1;goto B4bb48d;
case 0x4bb492:goto L4bb492;
case 0x4bb495:c.instructions+=2;goto B4bb495;
case 0x4bb497:c.instructions+=1;goto B4bb497;
case 0x4bb499:goto L4bb499;
case 0x4bb4a0:goto L4bb4a0;
case 0x4bb4a5:c.instructions+=3;goto B4bb4a5;
case 0x4bb4a6:c.instructions+=2;goto B4bb4a6;
case 0x4bb4a7:c.instructions+=1;goto B4bb4a7;
case 0x4bb4ac:goto L4bb4ac;
case 0x4bb4af:c.instructions+=2;goto B4bb4af;
case 0x4bb4b1:c.instructions+=1;goto B4bb4b1;
case 0x4bb4b3:goto L4bb4b3;
case 0x4bb4b6:c.instructions+=6;goto B4bb4b6;
case 0x4bb4ba:c.instructions+=5;goto B4bb4ba;
case 0x4bb4bb:c.instructions+=4;goto B4bb4bb;
case 0x4bb4c0:c.instructions+=3;goto B4bb4c0;
case 0x4bb4c1:c.instructions+=2;goto B4bb4c1;
case 0x4bb4c6:c.instructions+=1;goto B4bb4c6;
case 0x4bb4cb:goto L4bb4cb;
case 0x4bb4ce:c.instructions+=5;goto B4bb4ce;
case 0x4bb4cf:c.instructions+=4;goto B4bb4cf;
case 0x4bb4d0:c.instructions+=3;goto B4bb4d0;
case 0x4bb4d1:c.instructions+=2;goto B4bb4d1;
case 0x4bb4d4:c.instructions+=1;goto B4bb4d4;
case 0x4bb4e0:goto L4bb4e0;
case 0x4bb4e4:c.instructions+=13;goto B4bb4e4;
case 0x4bb4e5:c.instructions+=12;goto B4bb4e5;
case 0x4bb4e9:c.instructions+=11;goto B4bb4e9;
case 0x4bb4ea:c.instructions+=10;goto B4bb4ea;
case 0x4bb4eb:c.instructions+=9;goto B4bb4eb;
case 0x4bb4ef:c.instructions+=8;goto B4bb4ef;
case 0x4bb4f1:c.instructions+=7;goto B4bb4f1;
case 0x4bb4f5:c.instructions+=6;goto B4bb4f5;
case 0x4bb4f6:c.instructions+=5;goto B4bb4f6;
case 0x4bb4f7:c.instructions+=4;goto B4bb4f7;
case 0x4bb4f8:c.instructions+=3;goto B4bb4f8;
case 0x4bb4f9:c.instructions+=2;goto B4bb4f9;
case 0x4bb4fb:c.instructions+=1;goto B4bb4fb;
case 0x4bb500:goto L4bb500;
case 0x4bb506:c.instructions+=1;goto B4bb506;
case 0x4bb50c:goto L4bb50c;
case 0x4bb512:goto L4bb512;
case 0x4bb518:c.instructions+=1;goto B4bb518;
case 0x4bb51a:goto L4bb51a;
case 0x4bb520:c.instructions+=1;goto B4bb520;
case 0x4bb526:goto L4bb526;
case 0x4bb52b:c.instructions+=1;goto B4bb52b;
case 0x4bb530:goto L4bb530;
case 0x4bb535:c.instructions+=2;goto B4bb535;
case 0x4bb53a:c.instructions+=1;goto B4bb53a;
case 0x4bb53f:goto L4bb53f;
case 0x4bb542:c.instructions+=4;goto B4bb542;
case 0x4bb543:c.instructions+=3;goto B4bb543;
case 0x4bb544:c.instructions+=2;goto B4bb544;
case 0x4bb545:c.instructions+=1;goto B4bb545;
case 0x4bb548:goto L4bb548;
case 0x4bb54f:c.instructions+=1;goto B4bb54f;
case 0x4bb551:goto L4bb551;
case 0x4bb557:c.instructions+=3;goto B4bb557;
case 0x4bb558:c.instructions+=2;goto B4bb558;
case 0x4bb55a:c.instructions+=1;goto B4bb55a;
case 0x4bb55f:goto L4bb55f;
case 0x4bb561:c.instructions+=1;goto B4bb561;
case 0x4bb563:goto L4bb563;
case 0x4bb564:c.instructions+=2;goto B4bb564;
case 0x4bb569:c.instructions+=1;goto B4bb569;
case 0x4bb56e:goto L4bb56e;
case 0x4bb573:c.instructions+=2;goto B4bb573;
case 0x4bb57d:c.instructions+=1;goto B4bb57d;
case 0x4bb582:goto L4bb582;
case 0x4bb587:c.instructions+=2;goto B4bb587;
case 0x4bb58c:c.instructions+=1;goto B4bb58c;
case 0x4bb591:goto L4bb591;
case 0x4bb594:c.instructions+=4;goto B4bb594;
case 0x4bb595:c.instructions+=3;goto B4bb595;
case 0x4bb596:c.instructions+=2;goto B4bb596;
case 0x4bb597:c.instructions+=1;goto B4bb597;
case 0x4bb59a:goto L4bb59a;
case 0x4bb5a0:c.instructions+=1;goto B4bb5a0;
case 0x4bb5a2:goto L4bb5a2;
case 0x4bb5a5:c.instructions+=2;goto B4bb5a5;
case 0x4bb5ab:c.instructions+=1;goto B4bb5ab;
case 0x4bb5ad:goto L4bb5ad;
case 0x4bb5af:c.instructions+=5;goto B4bb5af;
case 0x4bb5b2:c.instructions+=4;goto B4bb5b2;
case 0x4bb5b3:c.instructions+=3;goto B4bb5b3;
case 0x4bb5b9:c.instructions+=2;goto B4bb5b9;
case 0x4bb5ba:c.instructions+=1;goto B4bb5ba;
case 0x4bb5bf:goto L4bb5bf;
case 0x4bb5c2:goto L4bb5c2;
case 0x4bb5c4:c.instructions+=1;goto B4bb5c4;
case 0x4bb5c9:goto L4bb5c9;
case 0x4bb5ca:c.instructions+=3;goto B4bb5ca;
case 0x4bb5cb:c.instructions+=2;goto B4bb5cb;
case 0x4bb5cc:c.instructions+=1;goto B4bb5cc;
case 0x4bb5d0:goto L4bb5d0;
case 0x4bb5d1:c.instructions+=10;goto B4bb5d1;
case 0x4bb5d3:c.instructions+=9;goto B4bb5d3;
case 0x4bb5d6:c.instructions+=8;goto B4bb5d6;
case 0x4bb5dc:c.instructions+=7;goto B4bb5dc;
case 0x4bb5e6:c.instructions+=6;goto B4bb5e6;
case 0x4bb5e7:c.instructions+=5;goto B4bb5e7;
case 0x4bb5e8:c.instructions+=4;goto B4bb5e8;
case 0x4bb5e9:c.instructions+=3;goto B4bb5e9;
case 0x4bb5ea:c.instructions+=2;goto B4bb5ea;
case 0x4bb5ec:c.instructions+=1;goto B4bb5ec;
case 0x4bb5f2:goto L4bb5f2;
case 0x4bb5f7:c.instructions+=3;goto B4bb5f7;
case 0x4bb5f9:c.instructions+=2;goto B4bb5f9;
case 0x4bb5fb:c.instructions+=1;goto B4bb5fb;
case 0x4bb601:goto L4bb601;
case 0x4bb607:c.instructions+=2;goto B4bb607;
case 0x4bb609:c.instructions+=1;goto B4bb609;
case 0x4bb60f:goto L4bb60f;
case 0x4bb616:c.instructions+=2;goto B4bb616;
case 0x4bb617:c.instructions+=1;goto B4bb617;
case 0x4bb61c:goto L4bb61c;
case 0x4bb61e:c.instructions+=1;goto B4bb61e;
case 0x4bb623:goto L4bb623;
case 0x4bb624:c.instructions+=3;goto B4bb624;
case 0x4bb62b:c.instructions+=2;goto B4bb62b;
case 0x4bb62c:c.instructions+=1;goto B4bb62c;
case 0x4bb631:goto L4bb631;
case 0x4bb633:c.instructions+=2;goto B4bb633;
case 0x4bb638:c.instructions+=1;goto B4bb638;
case 0x4bb63c:goto L4bb63c;
case 0x4bb63e:goto L4bb63e;
case 0x4bb642:c.instructions+=3;goto B4bb642;
case 0x4bb645:c.instructions+=2;goto B4bb645;
case 0x4bb647:c.instructions+=1;goto B4bb647;
case 0x4bb649:goto L4bb649;
case 0x4bb64e:goto L4bb64e;
case 0x4bb654:c.instructions+=7;goto B4bb654;
case 0x4bb656:c.instructions+=6;goto B4bb656;
case 0x4bb658:c.instructions+=5;goto B4bb658;
case 0x4bb65a:c.instructions+=4;goto B4bb65a;
case 0x4bb65e:c.instructions+=3;goto B4bb65e;
case 0x4bb65f:c.instructions+=2;goto B4bb65f;
case 0x4bb660:c.instructions+=1;goto B4bb660;
case 0x4bb665:goto L4bb665;
case 0x4bb66c:c.instructions+=3;goto B4bb66c;
case 0x4bb66f:c.instructions+=2;goto B4bb66f;
case 0x4bb670:c.instructions+=1;goto B4bb670;
case 0x4bb675:goto L4bb675;
case 0x4bb677:c.instructions+=1;goto B4bb677;
case 0x4bb67c:goto L4bb67c;
case 0x4bb680:c.instructions+=4;goto B4bb680;
case 0x4bb681:c.instructions+=3;goto B4bb681;
case 0x4bb683:c.instructions+=2;goto B4bb683;
case 0x4bb68a:c.instructions+=1;goto B4bb68a;
case 0x4bb68f:goto L4bb68f;
case 0x4bb693:c.instructions+=3;goto B4bb693;
case 0x4bb694:c.instructions+=2;goto B4bb694;
case 0x4bb699:c.instructions+=1;goto B4bb699;
case 0x4bb69e:goto L4bb69e;
case 0x4bb6a1:c.instructions+=6;goto B4bb6a1;
case 0x4bb6a2:c.instructions+=5;goto B4bb6a2;
case 0x4bb6a4:c.instructions+=4;goto B4bb6a4;
case 0x4bb6a6:c.instructions+=3;goto B4bb6a6;
case 0x4bb6ab:c.instructions+=2;goto B4bb6ab;
case 0x4bb6b0:c.instructions+=1;goto B4bb6b0;
case 0x4bb6b5:goto L4bb6b5;
case 0x4bb6b6:c.instructions+=1;goto B4bb6b6;
case 0x4bb6bb:goto L4bb6bb;
case 0x4bb6be:goto L4bb6be;
case 0x4bb6c3:c.instructions+=3;goto B4bb6c3;
case 0x4bb6c4:c.instructions+=2;goto B4bb6c4;
case 0x4bb6c6:c.instructions+=1;goto B4bb6c6;
case 0x4bb6cc:goto L4bb6cc;
case 0x4bb6cd:c.instructions+=6;goto B4bb6cd;
case 0x4bb6ce:c.instructions+=5;goto B4bb6ce;
case 0x4bb6cf:c.instructions+=4;goto B4bb6cf;
case 0x4bb6d0:c.instructions+=3;goto B4bb6d0;
case 0x4bb6d2:c.instructions+=2;goto B4bb6d2;
case 0x4bb6d3:c.instructions+=1;goto B4bb6d3;
case 0x4bb6e0:goto L4bb6e0;
case 0x4bb6e1:c.instructions+=9;goto B4bb6e1;
case 0x4bb6e3:c.instructions+=8;goto B4bb6e3;
case 0x4bb6e6:c.instructions+=7;goto B4bb6e6;
case 0x4bb6ec:c.instructions+=6;goto B4bb6ec;
case 0x4bb6ed:c.instructions+=5;goto B4bb6ed;
case 0x4bb6ee:c.instructions+=4;goto B4bb6ee;
case 0x4bb6f0:c.instructions+=3;goto B4bb6f0;
case 0x4bb6f6:c.instructions+=2;goto B4bb6f6;
case 0x4bb6f7:c.instructions+=1;goto B4bb6f7;
case 0x4bb6fc:goto L4bb6fc;
case 0x4bb6fe:c.instructions+=2;goto B4bb6fe;
case 0x4bb700:c.instructions+=1;goto B4bb700;
case 0x4bb702:goto L4bb702;
case 0x4bb709:c.instructions+=1;goto B4bb709;
case 0x4bb70b:goto L4bb70b;
case 0x4bb70d:c.instructions+=1;goto B4bb70d;
case 0x4bb713:goto L4bb713;
case 0x4bb719:c.instructions+=3;goto B4bb719;
case 0x4bb71a:c.instructions+=2;goto B4bb71a;
case 0x4bb71f:c.instructions+=1;goto B4bb71f;
case 0x4bb724:goto L4bb724;
case 0x4bb726:c.instructions+=1;goto B4bb726;
case 0x4bb728:goto L4bb728;
case 0x4bb72a:c.instructions+=2;goto B4bb72a;
case 0x4bb72f:c.instructions+=1;goto B4bb72f;
case 0x4bb734:goto L4bb734;
case 0x4bb735:c.instructions+=5;goto B4bb735;
case 0x4bb736:c.instructions+=4;goto B4bb736;
case 0x4bb737:c.instructions+=3;goto B4bb737;
case 0x4bb739:c.instructions+=2;goto B4bb739;
case 0x4bb73a:c.instructions+=1;goto B4bb73a;
case 0x4bb73b:goto L4bb73b;
case 0x4bb73e:c.instructions+=2;goto B4bb73e;
case 0x4bb743:c.instructions+=1;goto B4bb743;
case 0x4bb748:goto L4bb748;
case 0x4bb749:c.instructions+=6;goto B4bb749;
case 0x4bb74b:c.instructions+=5;goto B4bb74b;
case 0x4bb74d:c.instructions+=4;goto B4bb74d;
case 0x4bb752:c.instructions+=3;goto B4bb752;
case 0x4bb757:c.instructions+=2;goto B4bb757;
case 0x4bb758:c.instructions+=1;goto B4bb758;
case 0x4bb75d:goto L4bb75d;
case 0x4bb760:c.instructions+=6;goto B4bb760;
case 0x4bb761:c.instructions+=5;goto B4bb761;
case 0x4bb762:c.instructions+=4;goto B4bb762;
case 0x4bb763:c.instructions+=3;goto B4bb763;
case 0x4bb765:c.instructions+=2;goto B4bb765;
case 0x4bb766:c.instructions+=1;goto B4bb766;
case 0x4bb767:goto L4bb767;
case 0x4bb76d:c.instructions+=1;goto B4bb76d;
case 0x4bb772:goto L4bb772;
case 0x4bb778:c.instructions+=6;goto B4bb778;
case 0x4bb77a:c.instructions+=5;goto B4bb77a;
case 0x4bb780:c.instructions+=4;goto B4bb780;
case 0x4bb781:c.instructions+=3;goto B4bb781;
case 0x4bb782:c.instructions+=2;goto B4bb782;
case 0x4bb787:c.instructions+=1;goto B4bb787;
case 0x4bb78c:goto L4bb78c;
case 0x4bb78e:c.instructions+=1;goto B4bb78e;
case 0x4bb794:goto L4bb794;
case 0x4bb79e:c.instructions+=1;goto B4bb79e;
case 0x4bb7a4:goto L4bb7a4;
case 0x4bb7a9:c.instructions+=1;goto B4bb7a9;
case 0x4bb7b0:goto L4bb7b0;
case 0x4bb7b2:c.instructions+=1;goto B4bb7b2;
case 0x4bb7b4:goto L4bb7b4;
case 0x4bb7b9:goto L4bb7b9;
case 0x4bb7bb:c.instructions+=7;goto B4bb7bb;
case 0x4bb7c1:c.instructions+=6;goto B4bb7c1;
case 0x4bb7c2:c.instructions+=5;goto B4bb7c2;
case 0x4bb7c3:c.instructions+=4;goto B4bb7c3;
case 0x4bb7c5:c.instructions+=3;goto B4bb7c5;
case 0x4bb7c6:c.instructions+=2;goto B4bb7c6;
case 0x4bb7c7:c.instructions+=1;goto B4bb7c7;
case 0x4bb7cc:goto L4bb7cc;
case 0x4bb7cf:goto L4bb7cf;
case 0x4bb7d2:c.instructions+=2;goto B4bb7d2;
case 0x4bb7d8:c.instructions+=1;goto B4bb7d8;
case 0x4bb7da:goto L4bb7da;
case 0x4bb7de:c.instructions+=3;goto B4bb7de;
case 0x4bb7e0:c.instructions+=2;goto B4bb7e0;
case 0x4bb7e5:c.instructions+=1;goto B4bb7e5;
case 0x4bb7e9:goto L4bb7e9;
case 0x4bb7eb:goto L4bb7eb;
case 0x4bb7ed:c.instructions+=4;goto B4bb7ed;
case 0x4bb7f2:c.instructions+=3;goto B4bb7f2;
case 0x4bb7f7:c.instructions+=2;goto B4bb7f7;
case 0x4bb7f8:c.instructions+=1;goto B4bb7f8;
case 0x4bb7fd:goto L4bb7fd;
case 0x4bb800:c.instructions+=5;goto B4bb800;
case 0x4bb801:c.instructions+=4;goto B4bb801;
case 0x4bb805:c.instructions+=3;goto B4bb805;
case 0x4bb80a:c.instructions+=2;goto B4bb80a;
case 0x4bb80b:c.instructions+=1;goto B4bb80b;
case 0x4bb810:goto L4bb810;
case 0x4bb815:goto L4bb815;
case 0x4bb81b:c.instructions+=7;goto B4bb81b;
case 0x4bb81c:c.instructions+=6;goto B4bb81c;
case 0x4bb820:c.instructions+=5;goto B4bb820;
case 0x4bb821:c.instructions+=4;goto B4bb821;
case 0x4bb822:c.instructions+=3;goto B4bb822;
case 0x4bb824:c.instructions+=2;goto B4bb824;
case 0x4bb825:c.instructions+=1;goto B4bb825;
case 0x4bb82a:goto L4bb82a;
case 0x4bb82d:goto L4bb82d;
case 0x4bb82f:c.instructions+=2;goto B4bb82f;
case 0x4bb834:c.instructions+=1;goto B4bb834;
case 0x4bb839:goto L4bb839;
case 0x4bb83c:c.instructions+=5;goto B4bb83c;
case 0x4bb841:c.instructions+=4;goto B4bb841;
case 0x4bb846:c.instructions+=3;goto B4bb846;
case 0x4bb847:c.instructions+=2;goto B4bb847;
case 0x4bb84d:c.instructions+=1;goto B4bb84d;
case 0x4bb852:goto L4bb852;
case 0x4bb858:c.instructions+=6;goto B4bb858;
case 0x4bb85b:c.instructions+=5;goto B4bb85b;
case 0x4bb861:c.instructions+=4;goto B4bb861;
case 0x4bb867:c.instructions+=3;goto B4bb867;
case 0x4bb86d:c.instructions+=2;goto B4bb86d;
case 0x4bb873:c.instructions+=1;goto B4bb873;
case 0x4bb878:goto L4bb878;
case 0x4bb87e:c.instructions+=7;goto B4bb87e;
case 0x4bb885:c.instructions+=6;goto B4bb885;
case 0x4bb886:c.instructions+=5;goto B4bb886;
case 0x4bb887:c.instructions+=4;goto B4bb887;
case 0x4bb888:c.instructions+=3;goto B4bb888;
case 0x4bb88a:c.instructions+=2;goto B4bb88a;
case 0x4bb88b:c.instructions+=1;goto B4bb88b;
case 0x4bb88c:goto L4bb88c;
case 0x4bb88f:c.instructions+=3;goto B4bb88f;
case 0x4bb894:c.instructions+=2;goto B4bb894;
case 0x4bb895:c.instructions+=1;goto B4bb895;
case 0x4bb897:goto L4bb897;
case 0x4bb89c:goto L4bb89c;
case 0x4bb89d:c.instructions+=1;goto B4bb89d;
case 0x4bb8a2:goto L4bb8a2;
case 0x4bb8a8:c.instructions+=4;goto B4bb8a8;
case 0x4bb8ab:c.instructions+=3;goto B4bb8ab;
case 0x4bb8ac:c.instructions+=2;goto B4bb8ac;
case 0x4bb8ad:c.instructions+=1;goto B4bb8ad;
case 0x4bb8b2:goto L4bb8b2;
case 0x4bb8b5:c.instructions+=2;goto B4bb8b5;
case 0x4bb8ba:c.instructions+=1;goto B4bb8ba;
case 0x4bb8bf:goto L4bb8bf;
case 0x4bb8c0:c.instructions+=6;goto B4bb8c0;
case 0x4bb8c2:c.instructions+=5;goto B4bb8c2;
case 0x4bb8c4:c.instructions+=4;goto B4bb8c4;
case 0x4bb8c9:c.instructions+=3;goto B4bb8c9;
case 0x4bb8ce:c.instructions+=2;goto B4bb8ce;
case 0x4bb8cf:c.instructions+=1;goto B4bb8cf;
case 0x4bb8d4:goto L4bb8d4;
case 0x4bb8d7:c.instructions+=7;goto B4bb8d7;
case 0x4bb8dd:c.instructions+=6;goto B4bb8dd;
case 0x4bb8de:c.instructions+=5;goto B4bb8de;
case 0x4bb8df:c.instructions+=4;goto B4bb8df;
case 0x4bb8e0:c.instructions+=3;goto B4bb8e0;
case 0x4bb8e2:c.instructions+=2;goto B4bb8e2;
case 0x4bb8e3:c.instructions+=1;goto B4bb8e3;
case 0x4bb8e4:goto L4bb8e4;
case 0x4bb8e9:goto L4bb8e9;
case 0x4bb8ea:c.instructions+=1;goto B4bb8ea;
case 0x4bb8ef:goto L4bb8ef;
case 0x4bb8f2:c.instructions+=2;goto B4bb8f2;
case 0x4bb8f7:c.instructions+=1;goto B4bb8f7;
case 0x4bb8fc:goto L4bb8fc;
case 0x4bb8fd:c.instructions+=6;goto B4bb8fd;
case 0x4bb8ff:c.instructions+=5;goto B4bb8ff;
case 0x4bb901:c.instructions+=4;goto B4bb901;
case 0x4bb906:c.instructions+=3;goto B4bb906;
case 0x4bb90b:c.instructions+=2;goto B4bb90b;
case 0x4bb90c:c.instructions+=1;goto B4bb90c;
case 0x4bb911:goto L4bb911;
case 0x4bb914:c.instructions+=1;goto B4bb914;
case 0x4bb91a:goto L4bb91a;
case 0x4bb91b:c.instructions+=5;goto B4bb91b;
case 0x4bb91c:c.instructions+=4;goto B4bb91c;
case 0x4bb91d:c.instructions+=3;goto B4bb91d;
case 0x4bb91f:c.instructions+=2;goto B4bb91f;
case 0x4bb920:c.instructions+=1;goto B4bb920;
case 0x4bb930:goto L4bb930;
case 0x4bb931:c.instructions+=8;goto B4bb931;
case 0x4bb933:c.instructions+=7;goto B4bb933;
case 0x4bb936:c.instructions+=6;goto B4bb936;
case 0x4bb93c:c.instructions+=5;goto B4bb93c;
case 0x4bb93d:c.instructions+=4;goto B4bb93d;
case 0x4bb93f:c.instructions+=3;goto B4bb93f;
case 0x4bb945:c.instructions+=2;goto B4bb945;
case 0x4bb946:c.instructions+=1;goto B4bb946;
case 0x4bb94b:goto L4bb94b;
case 0x4bb951:c.instructions+=1;goto B4bb951;
case 0x4bb956:goto L4bb956;
case 0x4bb958:c.instructions+=1;goto B4bb958;
case 0x4bb95a:goto L4bb95a;
case 0x4bb960:c.instructions+=3;goto B4bb960;
case 0x4bb961:c.instructions+=2;goto B4bb961;
case 0x4bb966:c.instructions+=1;goto B4bb966;
case 0x4bb96b:goto L4bb96b;
case 0x4bb96d:c.instructions+=1;goto B4bb96d;
case 0x4bb96f:goto L4bb96f;
case 0x4bb971:c.instructions+=2;goto B4bb971;
case 0x4bb976:c.instructions+=1;goto B4bb976;
case 0x4bb97b:goto L4bb97b;
case 0x4bb97d:goto L4bb97d;
case 0x4bb980:c.instructions+=2;goto B4bb980;
case 0x4bb985:c.instructions+=1;goto B4bb985;
case 0x4bb98a:goto L4bb98a;
case 0x4bb98b:c.instructions+=5;goto B4bb98b;
case 0x4bb990:c.instructions+=4;goto B4bb990;
case 0x4bb995:c.instructions+=3;goto B4bb995;
case 0x4bb99a:c.instructions+=2;goto B4bb99a;
case 0x4bb99b:c.instructions+=1;goto B4bb99b;
case 0x4bb9a0:goto L4bb9a0;
case 0x4bb9a3:c.instructions+=1;goto B4bb9a3;
case 0x4bb9a5:goto L4bb9a5;
case 0x4bb9a8:c.instructions+=4;goto B4bb9a8;
case 0x4bb9aa:c.instructions+=3;goto B4bb9aa;
case 0x4bb9af:c.instructions+=2;goto B4bb9af;
case 0x4bb9b0:c.instructions+=1;goto B4bb9b0;
case 0x4bb9b5:goto L4bb9b5;
case 0x4bb9b8:goto L4bb9b8;
case 0x4bb9bd:c.instructions+=3;goto B4bb9bd;
case 0x4bb9bf:c.instructions+=2;goto B4bb9bf;
case 0x4bb9c4:c.instructions+=1;goto B4bb9c4;
case 0x4bb9c8:goto L4bb9c8;
case 0x4bb9ca:goto L4bb9ca;
case 0x4bb9cc:c.instructions+=4;goto B4bb9cc;
case 0x4bb9d1:c.instructions+=3;goto B4bb9d1;
case 0x4bb9d6:c.instructions+=2;goto B4bb9d6;
case 0x4bb9d7:c.instructions+=1;goto B4bb9d7;
case 0x4bb9dc:goto L4bb9dc;
case 0x4bb9df:c.instructions+=5;goto B4bb9df;
case 0x4bb9e0:c.instructions+=4;goto B4bb9e0;
case 0x4bb9e4:c.instructions+=3;goto B4bb9e4;
case 0x4bb9e9:c.instructions+=2;goto B4bb9e9;
case 0x4bb9ea:c.instructions+=1;goto B4bb9ea;
case 0x4bb9ef:goto L4bb9ef;
case 0x4bb9f4:goto L4bb9f4;
case 0x4bb9fa:c.instructions+=7;goto B4bb9fa;
case 0x4bb9fc:c.instructions+=6;goto B4bb9fc;
case 0x4bba00:c.instructions+=5;goto B4bba00;
case 0x4bba01:c.instructions+=4;goto B4bba01;
case 0x4bba03:c.instructions+=3;goto B4bba03;
case 0x4bba05:c.instructions+=2;goto B4bba05;
case 0x4bba06:c.instructions+=1;goto B4bba06;
case 0x4bba0b:goto L4bba0b;
case 0x4bba0e:c.instructions+=5;goto B4bba0e;
case 0x4bba0f:c.instructions+=4;goto B4bba0f;
case 0x4bba10:c.instructions+=3;goto B4bba10;
case 0x4bba12:c.instructions+=2;goto B4bba12;
case 0x4bba13:c.instructions+=1;goto B4bba13;
case 0x4bba20:goto L4bba20;
case 0x4bba21:c.instructions+=14;goto B4bba21;
case 0x4bba23:c.instructions+=13;goto B4bba23;
case 0x4bba26:c.instructions+=12;goto B4bba26;
case 0x4bba28:c.instructions+=11;goto B4bba28;
case 0x4bba2d:c.instructions+=10;goto B4bba2d;
case 0x4bba33:c.instructions+=9;goto B4bba33;
case 0x4bba34:c.instructions+=8;goto B4bba34;
case 0x4bba3b:c.instructions+=7;goto B4bba3b;
case 0x4bba41:c.instructions+=6;goto B4bba41;
case 0x4bba42:c.instructions+=5;goto B4bba42;
case 0x4bba43:c.instructions+=4;goto B4bba43;
case 0x4bba45:c.instructions+=3;goto B4bba45;
case 0x4bba4b:c.instructions+=2;goto B4bba4b;
case 0x4bba4c:c.instructions+=1;goto B4bba4c;
case 0x4bba51:goto L4bba51;
case 0x4bba53:c.instructions+=1;goto B4bba53;
case 0x4bba55:goto L4bba55;
case 0x4bba5c:c.instructions+=1;goto B4bba5c;
case 0x4bba5e:goto L4bba5e;
case 0x4bba64:c.instructions+=1;goto B4bba64;
case 0x4bba69:goto L4bba69;
case 0x4bba6b:c.instructions+=1;goto B4bba6b;
case 0x4bba71:goto L4bba71;
case 0x4bba74:c.instructions+=2;goto B4bba74;
case 0x4bba76:c.instructions+=1;goto B4bba76;
case 0x4bba78:goto L4bba78;
case 0x4bba7b:c.instructions+=1;goto B4bba7b;
case 0x4bba80:goto L4bba80;
case 0x4bba82:goto L4bba82;
case 0x4bba84:goto L4bba84;
case 0x4bba87:c.instructions+=1;goto B4bba87;
case 0x4bba8c:goto L4bba8c;
case 0x4bba8f:c.instructions+=2;goto B4bba8f;
case 0x4bba94:c.instructions+=1;goto B4bba94;
case 0x4bba99:goto L4bba99;
case 0x4bba9a:c.instructions+=3;goto B4bba9a;
case 0x4bbaa0:c.instructions+=2;goto B4bbaa0;
case 0x4bbaa1:c.instructions+=1;goto B4bbaa1;
case 0x4bbaa6:goto L4bbaa6;
case 0x4bbaa9:c.instructions+=3;goto B4bbaa9;
case 0x4bbaab:c.instructions+=2;goto B4bbaab;
case 0x4bbab1:c.instructions+=1;goto B4bbab1;
case 0x4bbab7:goto L4bbab7;
case 0x4bbab9:c.instructions+=1;goto B4bbab9;
case 0x4bbabb:goto L4bbabb;
case 0x4bbac1:c.instructions+=2;goto B4bbac1;
case 0x4bbac3:c.instructions+=1;goto B4bbac3;
case 0x4bbac5:goto L4bbac5;
case 0x4bbac8:c.instructions+=5;goto B4bbac8;
case 0x4bbaca:c.instructions+=4;goto B4bbaca;
case 0x4bbacf:c.instructions+=3;goto B4bbacf;
case 0x4bbad4:c.instructions+=2;goto B4bbad4;
case 0x4bbad5:c.instructions+=1;goto B4bbad5;
case 0x4bbada:goto L4bbada;
case 0x4bbae0:c.instructions+=6;goto B4bbae0;
case 0x4bbae3:c.instructions+=5;goto B4bbae3;
case 0x4bbae5:c.instructions+=4;goto B4bbae5;
case 0x4bbaea:c.instructions+=3;goto B4bbaea;
case 0x4bbaeb:c.instructions+=2;goto B4bbaeb;
case 0x4bbaec:c.instructions+=1;goto B4bbaec;
case 0x4bbaf1:goto L4bbaf1;
case 0x4bbaf4:goto L4bbaf4;
case 0x4bbaf7:c.instructions+=2;goto B4bbaf7;
case 0x4bbafc:c.instructions+=1;goto B4bbafc;
case 0x4bbb01:goto L4bbb01;
case 0x4bbb02:c.instructions+=3;goto B4bbb02;
case 0x4bbb07:c.instructions+=2;goto B4bbb07;
case 0x4bbb08:c.instructions+=1;goto B4bbb08;
case 0x4bbb0d:goto L4bbb0d;
case 0x4bbb10:c.instructions+=4;goto B4bbb10;
case 0x4bbb13:c.instructions+=3;goto B4bbb13;
case 0x4bbb16:c.instructions+=2;goto B4bbb16;
case 0x4bbb18:c.instructions+=1;goto B4bbb18;
case 0x4bbb1a:goto L4bbb1a;
case 0x4bbb1d:c.instructions+=3;goto B4bbb1d;
case 0x4bbb22:c.instructions+=2;goto B4bbb22;
case 0x4bbb23:c.instructions+=1;goto B4bbb23;
case 0x4bbb28:goto L4bbb28;
case 0x4bbb2a:c.instructions+=2;goto B4bbb2a;
case 0x4bbb2c:c.instructions+=1;goto B4bbb2c;
case 0x4bbb31:goto L4bbb31;
case 0x4bbb36:c.instructions+=2;goto B4bbb36;
case 0x4bbb38:c.instructions+=1;goto B4bbb38;
case 0x4bbb3a:goto L4bbb3a;
case 0x4bbb40:c.instructions+=3;goto B4bbb40;
case 0x4bbb42:c.instructions+=2;goto B4bbb42;
case 0x4bbb44:c.instructions+=1;goto B4bbb44;
case 0x4bbb46:goto L4bbb46;
case 0x4bbb49:c.instructions+=4;goto B4bbb49;
case 0x4bbb4e:c.instructions+=3;goto B4bbb4e;
case 0x4bbb53:c.instructions+=2;goto B4bbb53;
case 0x4bbb54:c.instructions+=1;goto B4bbb54;
case 0x4bbb59:goto L4bbb59;
case 0x4bbb5c:c.instructions+=5;goto B4bbb5c;
case 0x4bbb5e:c.instructions+=4;goto B4bbb5e;
case 0x4bbb63:c.instructions+=3;goto B4bbb63;
case 0x4bbb68:c.instructions+=2;goto B4bbb68;
case 0x4bbb69:c.instructions+=1;goto B4bbb69;
case 0x4bbb6e:goto L4bbb6e;
case 0x4bbb71:c.instructions+=8;goto B4bbb71;
case 0x4bbb78:c.instructions+=7;goto B4bbb78;
case 0x4bbb7f:c.instructions+=6;goto B4bbb7f;
case 0x4bbb80:c.instructions+=5;goto B4bbb80;
case 0x4bbb81:c.instructions+=4;goto B4bbb81;
case 0x4bbb82:c.instructions+=3;goto B4bbb82;
case 0x4bbb84:c.instructions+=2;goto B4bbb84;
case 0x4bbb85:c.instructions+=1;goto B4bbb85;
case 0x4bbb88:goto L4bbb88;
case 0x4bbb8b:c.instructions+=4;goto B4bbb8b;
case 0x4bbb90:c.instructions+=3;goto B4bbb90;
case 0x4bbb95:c.instructions+=2;goto B4bbb95;
case 0x4bbb96:c.instructions+=1;goto B4bbb96;
case 0x4bbb9b:goto L4bbb9b;
case 0x4bbb9e:c.instructions+=8;goto B4bbb9e;
case 0x4bbba5:c.instructions+=7;goto B4bbba5;
case 0x4bbbac:c.instructions+=6;goto B4bbbac;
case 0x4bbbad:c.instructions+=5;goto B4bbbad;
case 0x4bbbae:c.instructions+=4;goto B4bbbae;
case 0x4bbbaf:c.instructions+=3;goto B4bbbaf;
case 0x4bbbb1:c.instructions+=2;goto B4bbbb1;
case 0x4bbbb2:c.instructions+=1;goto B4bbbb2;
case 0x4bbbb5:goto L4bbbb5;
case 0x4bbbbb:c.instructions+=1;goto B4bbbbb;
case 0x4bbbc0:goto L4bbbc0;
case 0x4bbbc2:c.instructions+=2;goto B4bbbc2;
case 0x4bbbc4:c.instructions+=1;goto B4bbbc4;
case 0x4bbbc6:goto L4bbbc6;
case 0x4bbbc9:c.instructions+=4;goto B4bbbc9;
case 0x4bbbce:c.instructions+=3;goto B4bbbce;
case 0x4bbbd3:c.instructions+=2;goto B4bbbd3;
case 0x4bbbd4:c.instructions+=1;goto B4bbbd4;
case 0x4bbbd9:goto L4bbbd9;
case 0x4bbbdc:c.instructions+=8;goto B4bbbdc;
case 0x4bbbe3:c.instructions+=7;goto B4bbbe3;
case 0x4bbbea:c.instructions+=6;goto B4bbbea;
case 0x4bbbeb:c.instructions+=5;goto B4bbbeb;
case 0x4bbbec:c.instructions+=4;goto B4bbbec;
case 0x4bbbed:c.instructions+=3;goto B4bbbed;
case 0x4bbbef:c.instructions+=2;goto B4bbbef;
case 0x4bbbf0:c.instructions+=1;goto B4bbbf0;
case 0x4bbbf3:goto L4bbbf3;
case 0x4bbbf6:c.instructions+=4;goto B4bbbf6;
case 0x4bbbfb:c.instructions+=3;goto B4bbbfb;
case 0x4bbc00:c.instructions+=2;goto B4bbc00;
case 0x4bbc01:c.instructions+=1;goto B4bbc01;
case 0x4bbc06:goto L4bbc06;
case 0x4bbc09:c.instructions+=8;goto B4bbc09;
case 0x4bbc10:c.instructions+=7;goto B4bbc10;
case 0x4bbc17:c.instructions+=6;goto B4bbc17;
case 0x4bbc18:c.instructions+=5;goto B4bbc18;
case 0x4bbc19:c.instructions+=4;goto B4bbc19;
case 0x4bbc1a:c.instructions+=3;goto B4bbc1a;
case 0x4bbc1c:c.instructions+=2;goto B4bbc1c;
case 0x4bbc1d:c.instructions+=1;goto B4bbc1d;
case 0x4bbc20:goto L4bbc20;
case 0x4bbc22:c.instructions+=1;goto B4bbc22;
case 0x4bbc24:goto L4bbc24;
case 0x4bbc2a:c.instructions+=2;goto B4bbc2a;
case 0x4bbc2c:c.instructions+=1;goto B4bbc2c;
case 0x4bbc2e:goto L4bbc2e;
case 0x4bbc31:c.instructions+=5;goto B4bbc31;
case 0x4bbc33:c.instructions+=4;goto B4bbc33;
case 0x4bbc38:c.instructions+=3;goto B4bbc38;
case 0x4bbc3d:c.instructions+=2;goto B4bbc3d;
case 0x4bbc3e:c.instructions+=1;goto B4bbc3e;
case 0x4bbc43:goto L4bbc43;
case 0x4bbc49:c.instructions+=6;goto B4bbc49;
case 0x4bbc4c:c.instructions+=5;goto B4bbc4c;
case 0x4bbc4e:c.instructions+=4;goto B4bbc4e;
case 0x4bbc53:c.instructions+=3;goto B4bbc53;
case 0x4bbc54:c.instructions+=2;goto B4bbc54;
case 0x4bbc55:c.instructions+=1;goto B4bbc55;
case 0x4bbc5a:goto L4bbc5a;
case 0x4bbc5d:goto L4bbc5d;
case 0x4bbc60:c.instructions+=4;goto B4bbc60;
case 0x4bbc63:c.instructions+=3;goto B4bbc63;
case 0x4bbc64:c.instructions+=2;goto B4bbc64;
case 0x4bbc66:c.instructions+=1;goto B4bbc66;
case 0x4bbc6b:goto L4bbc6b;
case 0x4bbc6e:c.instructions+=1;goto B4bbc6e;
case 0x4bbc70:goto L4bbc70;
case 0x4bbc73:c.instructions+=4;goto B4bbc73;
case 0x4bbc78:c.instructions+=3;goto B4bbc78;
case 0x4bbc7d:c.instructions+=2;goto B4bbc7d;
case 0x4bbc7e:c.instructions+=1;goto B4bbc7e;
case 0x4bbc83:goto L4bbc83;
case 0x4bbc86:c.instructions+=4;goto B4bbc86;
case 0x4bbc8b:c.instructions+=3;goto B4bbc8b;
case 0x4bbc90:c.instructions+=2;goto B4bbc90;
case 0x4bbc91:c.instructions+=1;goto B4bbc91;
case 0x4bbc96:goto L4bbc96;
case 0x4bbc99:c.instructions+=4;goto B4bbc99;
case 0x4bbc9e:c.instructions+=3;goto B4bbc9e;
case 0x4bbca3:c.instructions+=2;goto B4bbca3;
case 0x4bbca4:c.instructions+=1;goto B4bbca4;
case 0x4bbca9:goto L4bbca9;
case 0x4bbcac:c.instructions+=2;goto B4bbcac;
case 0x4bbcae:c.instructions+=1;goto B4bbcae;
case 0x4bbcb3:goto L4bbcb3;
case 0x4bbcb8:goto L4bbcb8;
case 0x4bbcba:c.instructions+=1;goto B4bbcba;
case 0x4bbcbf:goto L4bbcbf;
case 0x4bbcc0:c.instructions+=2;goto B4bbcc0;
case 0x4bbcc2:c.instructions+=1;goto B4bbcc2;
case 0x4bbcc7:goto L4bbcc7;
case 0x4bbcc9:c.instructions+=4;goto B4bbcc9;
case 0x4bbccc:c.instructions+=3;goto B4bbccc;
case 0x4bbcce:c.instructions+=2;goto B4bbcce;
case 0x4bbcd1:c.instructions+=1;goto B4bbcd1;
case 0x4bbcd3:goto L4bbcd3;
case 0x4bbcd9:c.instructions+=7;goto B4bbcd9;
case 0x4bbcdb:c.instructions+=6;goto B4bbcdb;
case 0x4bbce1:c.instructions+=5;goto B4bbce1;
case 0x4bbce3:c.instructions+=4;goto B4bbce3;
case 0x4bbce6:c.instructions+=3;goto B4bbce6;
case 0x4bbce7:c.instructions+=2;goto B4bbce7;
case 0x4bbceb:c.instructions+=1;goto B4bbceb;
case 0x4bbcf0:goto L4bbcf0;
case 0x4bbcf1:c.instructions+=4;goto B4bbcf1;
case 0x4bbcf5:c.instructions+=3;goto B4bbcf5;
case 0x4bbcfa:c.instructions+=2;goto B4bbcfa;
case 0x4bbcfb:c.instructions+=1;goto B4bbcfb;
case 0x4bbd00:goto L4bbd00;
case 0x4bbd03:c.instructions+=1;goto B4bbd03;
case 0x4bbd05:goto L4bbd05;
case 0x4bbd08:c.instructions+=4;goto B4bbd08;
case 0x4bbd0d:c.instructions+=3;goto B4bbd0d;
case 0x4bbd12:c.instructions+=2;goto B4bbd12;
case 0x4bbd13:c.instructions+=1;goto B4bbd13;
case 0x4bbd18:goto L4bbd18;
case 0x4bbd1b:goto L4bbd1b;
case 0x4bbd20:c.instructions+=1;goto B4bbd20;
case 0x4bbd25:goto L4bbd25;
case 0x4bbd26:c.instructions+=2;goto B4bbd26;
case 0x4bbd28:c.instructions+=1;goto B4bbd28;
case 0x4bbd2d:goto L4bbd2d;
case 0x4bbd2f:c.instructions+=1;goto B4bbd2f;
case 0x4bbd35:goto L4bbd35;
case 0x4bbd3a:c.instructions+=1;goto B4bbd3a;
case 0x4bbd3f:goto L4bbd3f;
case 0x4bbd40:c.instructions+=3;goto B4bbd40;
case 0x4bbd44:c.instructions+=2;goto B4bbd44;
case 0x4bbd45:c.instructions+=1;goto B4bbd45;
case 0x4bbd4a:goto L4bbd4a;
case 0x4bbd4d:c.instructions+=4;goto B4bbd4d;
case 0x4bbd51:c.instructions+=3;goto B4bbd51;
case 0x4bbd52:c.instructions+=2;goto B4bbd52;
case 0x4bbd54:c.instructions+=1;goto B4bbd54;
case 0x4bbd59:goto L4bbd59;
case 0x4bbd5b:c.instructions+=1;goto B4bbd5b;
case 0x4bbd61:goto L4bbd61;
case 0x4bbd63:c.instructions+=1;goto B4bbd63;
case 0x4bbd69:goto L4bbd69;
case 0x4bbd6c:c.instructions+=1;goto B4bbd6c;
case 0x4bbd71:goto L4bbd71;
case 0x4bbd73:c.instructions+=3;goto B4bbd73;
case 0x4bbd77:c.instructions+=2;goto B4bbd77;
case 0x4bbd79:c.instructions+=1;goto B4bbd79;
case 0x4bbd7e:goto L4bbd7e;
case 0x4bbd80:c.instructions+=6;goto B4bbd80;
case 0x4bbd84:c.instructions+=5;goto B4bbd84;
case 0x4bbd85:c.instructions+=4;goto B4bbd85;
case 0x4bbd87:c.instructions+=3;goto B4bbd87;
case 0x4bbd8c:c.instructions+=2;goto B4bbd8c;
case 0x4bbd97:c.instructions+=1;goto B4bbd97;
case 0x4bbd9c:goto L4bbd9c;
case 0x4bbda0:c.instructions+=1;goto B4bbda0;
case 0x4bbda5:goto L4bbda5;
case 0x4bbda7:c.instructions+=7;goto B4bbda7;
case 0x4bbda9:c.instructions+=6;goto B4bbda9;
case 0x4bbdac:c.instructions+=5;goto B4bbdac;
case 0x4bbdaf:c.instructions+=4;goto B4bbdaf;
case 0x4bbdb1:c.instructions+=3;goto B4bbdb1;
case 0x4bbdb4:c.instructions+=2;goto B4bbdb4;
case 0x4bbdb7:c.instructions+=1;goto B4bbdb7;
case 0x4bbdb9:goto L4bbdb9;
case 0x4bbdc0:goto L4bbdc0;
case 0x4bbdc5:c.instructions+=1;goto B4bbdc5;
case 0x4bbdc7:goto L4bbdc7;
case 0x4bbdcc:c.instructions+=1;goto B4bbdcc;
case 0x4bbdce:goto L4bbdce;
case 0x4bbdd3:c.instructions+=1;goto B4bbdd3;
case 0x4bbdd5:goto L4bbdd5;
case 0x4bbdda:c.instructions+=1;goto B4bbdda;
case 0x4bbddc:goto L4bbddc;
case 0x4bbde1:c.instructions+=1;goto B4bbde1;
case 0x4bbde3:goto L4bbde3;
case 0x4bbde8:c.instructions+=1;goto B4bbde8;
case 0x4bbdea:goto L4bbdea;
case 0x4bbdef:goto L4bbdef;
case 0x4bbdf2:c.instructions+=1;goto B4bbdf2;
case 0x4bbdf7:goto L4bbdf7;
case 0x4bbdf8:c.instructions+=3;goto B4bbdf8;
case 0x4bbdfd:c.instructions+=2;goto B4bbdfd;
case 0x4bbdfe:c.instructions+=1;goto B4bbdfe;
case 0x4bbe03:goto L4bbe03;
case 0x4bbe06:goto L4bbe06;
case 0x4bbe0d:c.instructions+=2;goto B4bbe0d;
case 0x4bbe18:c.instructions+=1;goto B4bbe18;
case 0x4bbe1d:goto L4bbe1d;
case 0x4bbe1f:goto L4bbe1f;
case 0x4bbe22:c.instructions+=4;goto B4bbe22;
case 0x4bbe27:c.instructions+=3;goto B4bbe27;
case 0x4bbe2c:c.instructions+=2;goto B4bbe2c;
case 0x4bbe2d:c.instructions+=1;goto B4bbe2d;
case 0x4bbe32:goto L4bbe32;
case 0x4bbe35:c.instructions+=4;goto B4bbe35;
case 0x4bbe3a:c.instructions+=3;goto B4bbe3a;
case 0x4bbe3f:c.instructions+=2;goto B4bbe3f;
case 0x4bbe40:c.instructions+=1;goto B4bbe40;
case 0x4bbe45:goto L4bbe45;
case 0x4bbe48:c.instructions+=2;goto B4bbe48;
case 0x4bbe4a:c.instructions+=1;goto B4bbe4a;
case 0x4bbe4c:goto L4bbe4c;
case 0x4bbe52:c.instructions+=2;goto B4bbe52;
case 0x4bbe54:c.instructions+=1;goto B4bbe54;
case 0x4bbe56:goto L4bbe56;
case 0x4bbe59:c.instructions+=5;goto B4bbe59;
case 0x4bbe5b:c.instructions+=4;goto B4bbe5b;
case 0x4bbe60:c.instructions+=3;goto B4bbe60;
case 0x4bbe65:c.instructions+=2;goto B4bbe65;
case 0x4bbe66:c.instructions+=1;goto B4bbe66;
case 0x4bbe6b:goto L4bbe6b;
case 0x4bbe6e:goto L4bbe6e;
case 0x4bbe78:c.instructions+=1;goto B4bbe78;
case 0x4bbe7e:goto L4bbe7e;
case 0x4bbe85:c.instructions+=1;goto B4bbe85;
case 0x4bbe87:goto L4bbe87;
case 0x4bbe8a:c.instructions+=4;goto B4bbe8a;
case 0x4bbe8f:c.instructions+=3;goto B4bbe8f;
case 0x4bbe94:c.instructions+=2;goto B4bbe94;
case 0x4bbe95:c.instructions+=1;goto B4bbe95;
case 0x4bbe9a:goto L4bbe9a;
case 0x4bbe9d:c.instructions+=1;goto B4bbe9d;
case 0x4bbea2:goto L4bbea2;
case 0x4bbea4:c.instructions+=2;goto B4bbea4;
case 0x4bbea6:c.instructions+=1;goto B4bbea6;
case 0x4bbeab:goto L4bbeab;
case 0x4bbeae:c.instructions+=2;goto B4bbeae;
case 0x4bbeb0:c.instructions+=1;goto B4bbeb0;
case 0x4bbeb5:goto L4bbeb5;
case 0x4bbeb7:c.instructions+=2;goto B4bbeb7;
case 0x4bbeba:c.instructions+=1;goto B4bbeba;
case 0x4bbebc:goto L4bbebc;
case 0x4bbebf:c.instructions+=1;goto B4bbebf;
case 0x4bbec1:goto L4bbec1;
case 0x4bbec6:goto L4bbec6;
case 0x4bbecc:c.instructions+=3;goto B4bbecc;
case 0x4bbecd:c.instructions+=2;goto B4bbecd;
case 0x4bbece:c.instructions+=1;goto B4bbece;
case 0x4bbed3:goto L4bbed3;
case 0x4bbed5:c.instructions+=9;goto B4bbed5;
case 0x4bbed7:c.instructions+=8;goto B4bbed7;
case 0x4bbedb:c.instructions+=7;goto B4bbedb;
case 0x4bbedf:c.instructions+=6;goto B4bbedf;
case 0x4bbee3:c.instructions+=5;goto B4bbee3;
case 0x4bbee8:c.instructions+=4;goto B4bbee8;
case 0x4bbee9:c.instructions+=3;goto B4bbee9;
case 0x4bbeee:c.instructions+=2;goto B4bbeee;
case 0x4bbef2:c.instructions+=1;goto B4bbef2;
case 0x4bbef7:goto L4bbef7;
case 0x4bbefa:c.instructions+=3;goto B4bbefa;
case 0x4bbefb:c.instructions+=2;goto B4bbefb;
case 0x4bbefc:c.instructions+=1;goto B4bbefc;
case 0x4bbf01:goto L4bbf01;
case 0x4bbf04:c.instructions+=7;goto B4bbf04;
case 0x4bbf07:c.instructions+=6;goto B4bbf07;
case 0x4bbf08:c.instructions+=5;goto B4bbf08;
case 0x4bbf09:c.instructions+=4;goto B4bbf09;
case 0x4bbf0d:c.instructions+=3;goto B4bbf0d;
case 0x4bbf12:c.instructions+=2;goto B4bbf12;
case 0x4bbf13:c.instructions+=1;goto B4bbf13;
case 0x4bbf18:goto L4bbf18;
case 0x4bbf1b:c.instructions+=5;goto B4bbf1b;
case 0x4bbf1f:c.instructions+=4;goto B4bbf1f;
case 0x4bbf20:c.instructions+=3;goto B4bbf20;
case 0x4bbf25:c.instructions+=2;goto B4bbf25;
case 0x4bbf26:c.instructions+=1;goto B4bbf26;
case 0x4bbf2b:goto L4bbf2b;
case 0x4bbf2e:c.instructions+=1;goto B4bbf2e;
case 0x4bbf30:goto L4bbf30;
case 0x4bbf33:c.instructions+=2;goto B4bbf33;
case 0x4bbf38:c.instructions+=1;goto B4bbf38;
case 0x4bbf3d:goto L4bbf3d;
case 0x4bbf3e:c.instructions+=3;goto B4bbf3e;
case 0x4bbf43:c.instructions+=2;goto B4bbf43;
case 0x4bbf44:c.instructions+=1;goto B4bbf44;
case 0x4bbf49:goto L4bbf49;
case 0x4bbf4c:goto L4bbf4c;
case 0x4bbf56:c.instructions+=1;goto B4bbf56;
case 0x4bbf58:goto L4bbf58;
case 0x4bbf5a:c.instructions+=1;goto B4bbf5a;
case 0x4bbf5f:goto L4bbf5f;
case 0x4bbf61:goto L4bbf61;
case 0x4bbf63:c.instructions+=5;goto B4bbf63;
case 0x4bbf65:c.instructions+=4;goto B4bbf65;
case 0x4bbf6b:c.instructions+=3;goto B4bbf6b;
case 0x4bbf6c:c.instructions+=2;goto B4bbf6c;
case 0x4bbf6e:c.instructions+=1;goto B4bbf6e;
case 0x4bbf73:goto L4bbf73;
case 0x4bbf76:c.instructions+=2;goto B4bbf76;
case 0x4bbf78:c.instructions+=1;goto B4bbf78;
case 0x4bbf7d:goto L4bbf7d;
case 0x4bbf7f:c.instructions+=2;goto B4bbf7f;
case 0x4bbf81:c.instructions+=1;goto B4bbf81;
case 0x4bbf83:goto L4bbf83;
case 0x4bbf88:goto L4bbf88;
case 0x4bbf8a:goto L4bbf8a;
case 0x4bbf8d:c.instructions+=1;goto B4bbf8d;
case 0x4bbf8f:goto L4bbf8f;
case 0x4bbf94:goto L4bbf94;
case 0x4bbf96:goto L4bbf96;
case 0x4bbf9b:c.instructions+=1;goto B4bbf9b;
case 0x4bbf9d:goto L4bbf9d;
case 0x4bbfa2:goto L4bbfa2;
case 0x4bbfa4:goto L4bbfa4;
case 0x4bbfa9:goto L4bbfa9;
case 0x4bbfaa:c.instructions+=2;goto B4bbfaa;
case 0x4bbfac:c.instructions+=1;goto B4bbfac;
case 0x4bbfb1:goto L4bbfb1;
case 0x4bbfb4:c.instructions+=3;goto B4bbfb4;
case 0x4bbfb6:c.instructions+=2;goto B4bbfb6;
case 0x4bbfb9:c.instructions+=1;goto B4bbfb9;
case 0x4bbfbb:goto L4bbfbb;
case 0x4bbfbe:c.instructions+=3;goto B4bbfbe;
case 0x4bbfc3:c.instructions+=2;goto B4bbfc3;
case 0x4bbfc4:c.instructions+=1;goto B4bbfc4;
case 0x4bbfc9:goto L4bbfc9;
case 0x4bbfcb:c.instructions+=2;goto B4bbfcb;
case 0x4bbfcd:c.instructions+=1;goto B4bbfcd;
case 0x4bbfd2:goto L4bbfd2;
case 0x4bbfd4:c.instructions+=2;goto B4bbfd4;
case 0x4bbfd6:c.instructions+=1;goto B4bbfd6;
case 0x4bbfdb:goto L4bbfdb;
case 0x4bbfe2:c.instructions+=7;goto B4bbfe2;
case 0x4bbfe3:c.instructions+=6;goto B4bbfe3;
case 0x4bbfe4:c.instructions+=5;goto B4bbfe4;
case 0x4bbfeb:c.instructions+=4;goto B4bbfeb;
case 0x4bbfec:c.instructions+=3;goto B4bbfec;
case 0x4bbfee:c.instructions+=2;goto B4bbfee;
case 0x4bbfef:c.instructions+=1;goto B4bbfef;
default:missing_instruction(c.pc);}
B4bb001:L4bb001:{c.instructions+=4;NFSU2_TR(0x4bb001);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb003:{NFSU2_TR(0x4bb003);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb004:{NFSU2_TR(0x4bb004);
__builtin_memmove((R+12),(R+0),4);
}
B4bb006:{NFSU2_TR(0x4bb006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb00bull));
TAIL_STATIC(0x50c960u,50c);
}
B4bb00b:L4bb00b:{c.instructions+=4;NFSU2_TR(0x4bb00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bb00e:{NFSU2_TR(0x4bb00e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bb012:{NFSU2_TR(0x4bb012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb013:{NFSU2_TR(0x4bb013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb018ull));
TAIL_STATIC(0x505450u,505);
}
B4bb018:L4bb018:{c.instructions+=3;NFSU2_TR(0x4bb018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb019:{NFSU2_TR(0x4bb019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb01a:{NFSU2_TR(0x4bb01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb01full));
TAIL_STATIC(0x5379c0u,537);
}
B4bb01f:L4bb01f:{c.instructions+=4;NFSU2_TR(0x4bb01f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bb022:{NFSU2_TR(0x4bb022);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb024:{NFSU2_TR(0x4bb024);
__builtin_memmove((R+28),(R+0),4);
}
B4bb026:{NFSU2_TR(0x4bb026);
if(r1(R+518)){{goto L4bb051;}}
}
B4bb028:L4bb028:{c.instructions+=3;NFSU2_TR(0x4bb028);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bb02b:{NFSU2_TR(0x4bb02b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bb02d:{NFSU2_TR(0x4bb02d);
if(r1(R+518)){{goto L4bb051;}}
}
B4bb02f:L4bb02f:{c.instructions+=6;NFSU2_TR(0x4bb02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb032:{NFSU2_TR(0x4bb032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb035:{NFSU2_TR(0x4bb035);
u8 U[4];
w4(U+0,u32(0x794ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb03a:{NFSU2_TR(0x4bb03a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb03b:{NFSU2_TR(0x4bb03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb03c:{NFSU2_TR(0x4bb03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb041ull));
TAIL_STATIC(0x537cc0u,537);
}
B4bb041:L4bb041:{c.instructions+=3;NFSU2_TR(0x4bb041);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb044:{NFSU2_TR(0x4bb044);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bb046:{NFSU2_TR(0x4bb046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb081;}}
}
B4bb048:L4bb048:{c.instructions+=3;NFSU2_TR(0x4bb048);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb04a:{NFSU2_TR(0x4bb04a);
u8 U[4];
w4(U+0,u32(0x794ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb04f:{NFSU2_TR(0x4bb04f);
{goto L4bb071;}
}
B4bb051:L4bb051:{c.instructions+=6;NFSU2_TR(0x4bb051);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb054:{NFSU2_TR(0x4bb054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb057:{NFSU2_TR(0x4bb057);
u8 U[4];
w4(U+0,u32(0x794c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb05c:{NFSU2_TR(0x4bb05c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb05d:{NFSU2_TR(0x4bb05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb05e:{NFSU2_TR(0x4bb05e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb063ull));
TAIL_STATIC(0x537cc0u,537);
}
B4bb063:L4bb063:{c.instructions+=3;NFSU2_TR(0x4bb063);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb066:{NFSU2_TR(0x4bb066);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bb068:{NFSU2_TR(0x4bb068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb081;}}
}
B4bb06a:L4bb06a:{c.instructions+=2;NFSU2_TR(0x4bb06a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb06c:{NFSU2_TR(0x4bb06c);
u8 U[4];
w4(U+0,u32(0x794c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb071:L4bb071:{c.instructions+=5;NFSU2_TR(0x4bb071);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bb074:{NFSU2_TR(0x4bb074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb077:{NFSU2_TR(0x4bb077);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb078:{NFSU2_TR(0x4bb078);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb079:{NFSU2_TR(0x4bb079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb07eull));
TAIL_STATIC(0x537c00u,537);
}
B4bb07e:L4bb07e:{c.instructions+=1;NFSU2_TR(0x4bb07e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bb081:L4bb081:{c.instructions+=3;NFSU2_TR(0x4bb081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb084:{NFSU2_TR(0x4bb084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb086:{NFSU2_TR(0x4bb086);
if(r1(R+518)){{goto L4bb08d;}}
}
B4bb088:L4bb088:{c.instructions+=2;NFSU2_TR(0x4bb088);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb08b:{NFSU2_TR(0x4bb08b);
{goto L4bb08f;}
}
B4bb08d:L4bb08d:{c.instructions+=1;NFSU2_TR(0x4bb08d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4bb08f:L4bb08f:{c.instructions+=5;NFSU2_TR(0x4bb08f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb093:{NFSU2_TR(0x4bb093);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bb094:{NFSU2_TR(0x4bb094);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4bb097:{NFSU2_TR(0x4bb097);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb09b:{NFSU2_TR(0x4bb09b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4bafe4u,4ba);}
}
B4bb0a1:L4bb0a1:{c.instructions+=4;NFSU2_TR(0x4bb0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb0a4:{NFSU2_TR(0x4bb0a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0a6:{NFSU2_TR(0x4bb0a6);
__builtin_memmove((R+4),(R+28),4);
}
B4bb0a8:{NFSU2_TR(0x4bb0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb0adull));
TAIL_STATIC(0x538500u,538);
}
B4bb0ad:L4bb0ad:{c.instructions+=3;NFSU2_TR(0x4bb0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bb0b0:{NFSU2_TR(0x4bb0b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0b2:{NFSU2_TR(0x4bb0b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb0b7ull));
TAIL_STATIC(0x58f740u,58f);
}
B4bb0b7:L4bb0b7:{c.instructions+=4;NFSU2_TR(0x4bb0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb0ba:{NFSU2_TR(0x4bb0ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb0bd:{NFSU2_TR(0x4bb0bd);
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
B4bb0bf:{NFSU2_TR(0x4bb0bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb0c5;}}
}
B4bb0c1:L4bb0c1:{c.instructions+=2;NFSU2_TR(0x4bb0c1);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4bb0c3:{NFSU2_TR(0x4bb0c3);
{goto L4bb0d0;}
}
B4bb0c5:L4bb0c5:{c.instructions+=2;NFSU2_TR(0x4bb0c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0c6:{NFSU2_TR(0x4bb0c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb0cbull));
TAIL_STATIC(0x73d8d0u,73d);
}
B4bb0cb:L4bb0cb:{c.instructions+=2;NFSU2_TR(0x4bb0cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb0ce:{NFSU2_TR(0x4bb0ce);
__builtin_memmove((R+20),(R+0),4);
}
B4bb0d0:L4bb0d0:{c.instructions+=3;NFSU2_TR(0x4bb0d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0d1:{NFSU2_TR(0x4bb0d1);
__builtin_memmove((R+4),(R+28),4);
}
B4bb0d3:{NFSU2_TR(0x4bb0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb0d8ull));
TAIL_STATIC(0x51f440u,51f);
}
B4bb0d8:L4bb0d8:{c.instructions+=5;NFSU2_TR(0x4bb0d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0d9:{NFSU2_TR(0x4bb0d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0da:{NFSU2_TR(0x4bb0da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0dc:{NFSU2_TR(0x4bb0dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb0e2:{NFSU2_TR(0x4bb0e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb0e7ull));
TAIL_STATIC(0x538080u,538);
}
B4bb0e7:L4bb0e7:{c.instructions+=6;NFSU2_TR(0x4bb0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb0e8:{NFSU2_TR(0x4bb0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb0e9:{NFSU2_TR(0x4bb0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb0ea:{NFSU2_TR(0x4bb0ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb0eb:{NFSU2_TR(0x4bb0eb);
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
B4bb0ee:{NFSU2_TR(0x4bb0ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb0f0:L4bb0f0:{c.instructions+=14;NFSU2_TR(0x4bb0f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0f1:{NFSU2_TR(0x4bb0f1);
__builtin_memmove((R+20),(R+16),4);
}
B4bb0f3:{NFSU2_TR(0x4bb0f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4bb0f6:{NFSU2_TR(0x4bb0f6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0f8:{NFSU2_TR(0x4bb0f8);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb0fd:{NFSU2_TR(0x4bb0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb103:{NFSU2_TR(0x4bb103);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb104:{NFSU2_TR(0x4bb104);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb10b:{NFSU2_TR(0x4bb10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x91cull))));
}
B4bb111:{NFSU2_TR(0x4bb111);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb118:{NFSU2_TR(0x4bb118);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb119:{NFSU2_TR(0x4bb119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb11a:{NFSU2_TR(0x4bb11a);
__builtin_memmove((R+28),(R+4),4);
}
B4bb11c:{NFSU2_TR(0x4bb11c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb2c2;}}
}
B4bb122:L4bb122:{c.instructions+=2;NFSU2_TR(0x4bb122);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb12c:{NFSU2_TR(0x4bb12c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb22b;}}
}
B4bb132:L4bb132:{c.instructions+=1;NFSU2_TR(0x4bb132);
s1(0x850098,u8(0x0ull));
}
B4bb139:L4bb139:{c.instructions+=2;NFSU2_TR(0x4bb139);
w4(R+4,u32(0x8371c0ull));
}
B4bb13e:{NFSU2_TR(0x4bb13e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb143ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4bb143:L4bb143:{c.instructions+=3;NFSU2_TR(0x4bb143);
w1(R+4,u8(0x3ull));
}
B4bb145:{NFSU2_TR(0x4bb145);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+0))));
}
B4bb147:{NFSU2_TR(0x4bb147);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb14b:L4bb14b:{c.instructions+=3;NFSU2_TR(0x4bb14b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb14d:{NFSU2_TR(0x4bb14d);
u8 U[4];
w4(U+0,u32(0x794cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb152:{NFSU2_TR(0x4bb152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb157ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4bb157:L4bb157:{c.instructions+=2;NFSU2_TR(0x4bb157);
__builtin_memmove((R+4),(R+0),4);
}
B4bb159:{NFSU2_TR(0x4bb159);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb15eull));
TAIL_STATIC(0x582380u,582);
}
B4bb15e:L4bb15e:{c.instructions+=2;NFSU2_TR(0x4bb15e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb15f:{NFSU2_TR(0x4bb15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb164ull));
TAIL_STATIC(0x7414a0u,741);
}
B4bb164:L4bb164:{c.instructions+=3;NFSU2_TR(0x4bb164);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb167:{NFSU2_TR(0x4bb167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb168:{NFSU2_TR(0x4bb168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb16dull));
TAIL_STATIC(0x7420b0u,742);
}
B4bb16d:L4bb16d:{c.instructions+=25;NFSU2_TR(0x4bb16d);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4bb173:{NFSU2_TR(0x4bb173);
__builtin_memmove((R+8),(R+0),4);
}
B4bb175:{NFSU2_TR(0x4bb175);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B4bb179:{NFSU2_TR(0x4bb179);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb17c:{NFSU2_TR(0x4bb17c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb180:{NFSU2_TR(0x4bb180);
__builtin_memmove((R+0),gp(0x85008c),1);
}
B4bb185:{NFSU2_TR(0x4bb185);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb189:{NFSU2_TR(0x4bb189);
__builtin_memmove((R+8),gp(0x850098),1);
}
B4bb18f:{NFSU2_TR(0x4bb18f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb190:{NFSU2_TR(0x4bb190);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb194:{NFSU2_TR(0x4bb194);
__builtin_memmove((R+0),gp(0x85009a),1);
}
B4bb199:{NFSU2_TR(0x4bb199);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb19d:{NFSU2_TR(0x4bb19d);
__builtin_memmove((R+4),gp(0x850099),1);
}
B4bb1a3:{NFSU2_TR(0x4bb1a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb1a7:{NFSU2_TR(0x4bb1a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bb1ab:{NFSU2_TR(0x4bb1ab);
u8 U[4];
w4(U+0,u32(0x49ec60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1b0:{NFSU2_TR(0x4bb1b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb1b4:{NFSU2_TR(0x4bb1b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1b5:{NFSU2_TR(0x4bb1b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bb1b9:{NFSU2_TR(0x4bb1b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb1bd:{NFSU2_TR(0x4bb1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb1c3:{NFSU2_TR(0x4bb1c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1c4:{NFSU2_TR(0x4bb1c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bb1c9:{NFSU2_TR(0x4bb1c9);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bb1ce:{NFSU2_TR(0x4bb1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb1d3ull));
TAIL_STATIC(0x5904c0u,590);
}
B4bb1d3:L4bb1d3:{c.instructions+=2;NFSU2_TR(0x4bb1d3);
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
B4bb1d5:{NFSU2_TR(0x4bb1d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4bb2c2;}}
}
B4bb1db:L4bb1db:{c.instructions+=3;NFSU2_TR(0x4bb1db);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1dd:{NFSU2_TR(0x4bb1dd);
w4(R+4,u32(0x850080ull));
}
B4bb1e2:{NFSU2_TR(0x4bb1e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb1e7ull));
TAIL_STATIC(0x5031b0u,503);
}
B4bb1e7:L4bb1e7:{c.instructions+=3;NFSU2_TR(0x4bb1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bb1ea:{NFSU2_TR(0x4bb1ea);
u8 U[4];
w4(U+0,u32(0x65fda335ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1ef:{NFSU2_TR(0x4bb1ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb1f4ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb1f4:L4bb1f4:{c.instructions+=6;NFSU2_TR(0x4bb1f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1f5:{NFSU2_TR(0x4bb1f5);
u8 U[4];
w4(U+0,u32(0xca4ce1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1fa:{NFSU2_TR(0x4bb1fa);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb1ff:{NFSU2_TR(0x4bb1ff);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb204:{NFSU2_TR(0x4bb204);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb205:{NFSU2_TR(0x4bb205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb20aull));
TAIL_STATIC(0x5585e0u,558);
}
B4bb20a:L4bb20a:{c.instructions+=10;NFSU2_TR(0x4bb20a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bb20d:{NFSU2_TR(0x4bb20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb213:{NFSU2_TR(0x4bb213);
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
B4bb215:{NFSU2_TR(0x4bb215);
u8 U[8];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb21c:{NFSU2_TR(0x4bb21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb223:{NFSU2_TR(0x4bb223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb224:{NFSU2_TR(0x4bb224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb225:{NFSU2_TR(0x4bb225);
__builtin_memmove((R+16),(R+20),4);
}
B4bb227:{NFSU2_TR(0x4bb227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb228:{NFSU2_TR(0x4bb228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb22b:L4bb22b:{c.instructions+=2;NFSU2_TR(0x4bb22b);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bb232:{NFSU2_TR(0x4bb232);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb139u);}goto L4bb139;}}
}
B4bb238:L4bb238:{c.instructions+=4;NFSU2_TR(0x4bb238);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb23a:{NFSU2_TR(0x4bb23a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb23c:{NFSU2_TR(0x4bb23c);
w4(R+4,u32(0x83ad90ull));
}
B4bb241:{NFSU2_TR(0x4bb241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb246ull));
TAIL_STATIC(0x5162d0u,516);
}
B4bb246:L4bb246:{c.instructions+=3;NFSU2_TR(0x4bb246);
__builtin_memmove((R+24),(R+0),4);
}
B4bb248:{NFSU2_TR(0x4bb248);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb24a:{NFSU2_TR(0x4bb24a);
if(r1(R+518)){{goto L4bb271;}}
}
B4bb24c:L4bb24c:{c.instructions+=1;NFSU2_TR(0x4bb24c);
__builtin_memmove((R+16),(R+16),4);
}
B4bb250:L4bb250:{c.instructions+=3;NFSU2_TR(0x4bb250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb256:{NFSU2_TR(0x4bb256);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb25c:{NFSU2_TR(0x4bb25c);
if(r1(R+518)){{goto L4bb271;}}
}
B4bb25e:L4bb25e:{c.instructions+=4;NFSU2_TR(0x4bb25e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb25f:{NFSU2_TR(0x4bb25f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb261:{NFSU2_TR(0x4bb261);
w4(R+4,u32(0x83ad90ull));
}
B4bb266:{NFSU2_TR(0x4bb266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb26bull));
TAIL_STATIC(0x5162d0u,516);
}
B4bb26b:L4bb26b:{c.instructions+=3;NFSU2_TR(0x4bb26b);
__builtin_memmove((R+24),(R+0),4);
}
B4bb26d:{NFSU2_TR(0x4bb26d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb26f:{NFSU2_TR(0x4bb26f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb250u);}goto L4bb250;}}
}
B4bb271:L4bb271:{c.instructions+=2;NFSU2_TR(0x4bb271);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb275:{NFSU2_TR(0x4bb275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb27aull));
TAIL_STATIC(0x40c910u,40c);
}
B4bb27a:L4bb27a:{c.instructions+=8;NFSU2_TR(0x4bb27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bb27c:{NFSU2_TR(0x4bb27c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb27e:{NFSU2_TR(0x4bb27e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb282:{NFSU2_TR(0x4bb282);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb283:{NFSU2_TR(0x4bb283);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb285:{NFSU2_TR(0x4bb285);
__builtin_memmove((R+4),(R+24),4);
}
B4bb287:{NFSU2_TR(0x4bb287);
u8 U[8];
w4(U+0,u32(u32(u32(0x938ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bb292:{NFSU2_TR(0x4bb292);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb295ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bb295:L4bb295:{c.instructions+=2;NFSU2_TR(0x4bb295);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb299:{NFSU2_TR(0x4bb299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb29eull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4bb29e:L4bb29e:{c.instructions+=6;NFSU2_TR(0x4bb29e);
w1(R+8,u8(0x3ull));
}
B4bb2a0:{NFSU2_TR(0x4bb2a0);
u8 U[3];
w1(R+512,u8((r1(R+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(R+8),r1(R+0)));
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4bb2a2:{NFSU2_TR(0x4bb2a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb2a9:{NFSU2_TR(0x4bb2a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb2ad:{NFSU2_TR(0x4bb2ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x92cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bb2b8:{NFSU2_TR(0x4bb2b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb2bdull));
TAIL_STATIC(0x4022c0u,402);
}
B4bb2bd:L4bb2bd:{c.instructions+=1;NFSU2_TR(0x4bb2bd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb14bu);}goto L4bb14b;}
}
B4bb2c2:L4bb2c2:{c.instructions+=8;NFSU2_TR(0x4bb2c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb2c9:{NFSU2_TR(0x4bb2c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb2ca:{NFSU2_TR(0x4bb2ca);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bb2cd:{NFSU2_TR(0x4bb2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb2d4:{NFSU2_TR(0x4bb2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb2d5:{NFSU2_TR(0x4bb2d5);
__builtin_memmove((R+16),(R+20),4);
}
B4bb2d7:{NFSU2_TR(0x4bb2d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb2d8:{NFSU2_TR(0x4bb2d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb2e0:L4bb2e0:{c.instructions+=10;NFSU2_TR(0x4bb2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bb2e3:{NFSU2_TR(0x4bb2e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb2e4:{NFSU2_TR(0x4bb2e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb2e5:{NFSU2_TR(0x4bb2e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb2e6:{NFSU2_TR(0x4bb2e6);
__builtin_memmove((R+24),(R+4),4);
}
B4bb2e8:{NFSU2_TR(0x4bb2e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb2eb:{NFSU2_TR(0x4bb2eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb2ed:{NFSU2_TR(0x4bb2ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb2ee:{NFSU2_TR(0x4bb2ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb2f2:{NFSU2_TR(0x4bb2f2);
if(r1(R+518)){{goto L4bb2f9;}}
}
B4bb2f4:L4bb2f4:{c.instructions+=2;NFSU2_TR(0x4bb2f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb2f7:{NFSU2_TR(0x4bb2f7);
{goto L4bb2fb;}
}
B4bb2f9:L4bb2f9:{c.instructions+=1;NFSU2_TR(0x4bb2f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4bb2fb:L4bb2fb:{c.instructions+=5;NFSU2_TR(0x4bb2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb2fe:{NFSU2_TR(0x4bb2fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb301:{NFSU2_TR(0x4bb301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb302:{NFSU2_TR(0x4bb302);
__builtin_memmove((R+4),(R+12),4);
}
B4bb304:{NFSU2_TR(0x4bb304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb309ull));
TAIL_STATIC(0x51f440u,51f);
}
B4bb309:L4bb309:{c.instructions+=5;NFSU2_TR(0x4bb309);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb30d:{NFSU2_TR(0x4bb30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb310:{NFSU2_TR(0x4bb310);
w4(R+20,u32(0x1ull));
}
B4bb315:{NFSU2_TR(0x4bb315);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb317:{NFSU2_TR(0x4bb317);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4bb3bc;}}
}
B4bb31d:L4bb31d:{c.instructions+=1;NFSU2_TR(0x4bb31d);
__builtin_memmove((R+4),(R+4),4);
}
B4bb320:L4bb320:{c.instructions+=3;NFSU2_TR(0x4bb320);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb323:{NFSU2_TR(0x4bb323);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb325:{NFSU2_TR(0x4bb325);
if(r1(R+518)){{goto L4bb32c;}}
}
B4bb327:L4bb327:{c.instructions+=2;NFSU2_TR(0x4bb327);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4bb32a:{NFSU2_TR(0x4bb32a);
{goto L4bb32e;}
}
B4bb32c:L4bb32c:{c.instructions+=1;NFSU2_TR(0x4bb32c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bb32e:L4bb32e:{c.instructions+=4;NFSU2_TR(0x4bb32e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb332:{NFSU2_TR(0x4bb332);
w4(R+24,u32(0x1ull));
}
B4bb337:{NFSU2_TR(0x4bb337);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb339:{NFSU2_TR(0x4bb339);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bb366;}}
}
B4bb33b:L4bb33b:{c.instructions+=2;NFSU2_TR(0x4bb33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bb33e:{NFSU2_TR(0x4bb33e);
__builtin_memmove((R+28),(R+28),4);
}
B4bb340:L4bb340:{c.instructions+=2;NFSU2_TR(0x4bb340);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb342:{NFSU2_TR(0x4bb342);
if(r1(R+518)){{goto L4bb349;}}
}
B4bb344:L4bb344:{c.instructions+=2;NFSU2_TR(0x4bb344);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb347:{NFSU2_TR(0x4bb347);
{goto L4bb34b;}
}
B4bb349:L4bb349:{c.instructions+=1;NFSU2_TR(0x4bb349);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4bb34b:L4bb34b:{c.instructions+=2;NFSU2_TR(0x4bb34b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb34d:{NFSU2_TR(0x4bb34d);
if(r1(R+518)){{goto L4bb3c8;}}
}
B4bb34f:L4bb34f:{c.instructions+=3;NFSU2_TR(0x4bb34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb352:{NFSU2_TR(0x4bb352);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb354:{NFSU2_TR(0x4bb354);
if(r1(R+518)){{goto L4bb35b;}}
}
B4bb356:L4bb356:{c.instructions+=2;NFSU2_TR(0x4bb356);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4bb359:{NFSU2_TR(0x4bb359);
{goto L4bb35d;}
}
B4bb35b:L4bb35b:{c.instructions+=1;NFSU2_TR(0x4bb35b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bb35d:L4bb35d:{c.instructions+=4;NFSU2_TR(0x4bb35d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb361:{NFSU2_TR(0x4bb361);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bb362:{NFSU2_TR(0x4bb362);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bb364:{NFSU2_TR(0x4bb364);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb340u);}goto L4bb340;}}
}
B4bb366:L4bb366:{c.instructions+=4;NFSU2_TR(0x4bb366);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4bb369:{NFSU2_TR(0x4bb369);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bb36b:{NFSU2_TR(0x4bb36b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb36e:{NFSU2_TR(0x4bb36e);
if(r1(R+518)){{goto L4bb380;}}
}
B4bb370:L4bb370:{c.instructions+=4;NFSU2_TR(0x4bb370);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb374:{NFSU2_TR(0x4bb374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb375:{NFSU2_TR(0x4bb375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb376:{NFSU2_TR(0x4bb376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb37bull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4bb37b:L4bb37b:{c.instructions+=2;NFSU2_TR(0x4bb37b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb37e:{NFSU2_TR(0x4bb37e);
{goto L4bb39a;}
}
B4bb380:L4bb380:{c.instructions+=3;NFSU2_TR(0x4bb380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb386:{NFSU2_TR(0x4bb386);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb387:{NFSU2_TR(0x4bb387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb38cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb38c:L4bb38c:{c.instructions+=4;NFSU2_TR(0x4bb38c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bb390:{NFSU2_TR(0x4bb390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb391:{NFSU2_TR(0x4bb391);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb392:{NFSU2_TR(0x4bb392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb397ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4bb397:L4bb397:{c.instructions+=1;NFSU2_TR(0x4bb397);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb39a:L4bb39a:{c.instructions+=2;NFSU2_TR(0x4bb39a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb39c:{NFSU2_TR(0x4bb39c);
if(r1(R+518)){{goto L4bb3d4;}}
}
B4bb39e:L4bb39e:{c.instructions+=3;NFSU2_TR(0x4bb39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb3a1:{NFSU2_TR(0x4bb3a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb3a3:{NFSU2_TR(0x4bb3a3);
if(r1(R+518)){{goto L4bb3aa;}}
}
B4bb3a5:L4bb3a5:{c.instructions+=2;NFSU2_TR(0x4bb3a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb3a8:{NFSU2_TR(0x4bb3a8);
{goto L4bb3ac;}
}
B4bb3aa:L4bb3aa:{c.instructions+=1;NFSU2_TR(0x4bb3aa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4bb3ac:L4bb3ac:{c.instructions+=5;NFSU2_TR(0x4bb3ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb3b0:{NFSU2_TR(0x4bb3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb3b3:{NFSU2_TR(0x4bb3b3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4bb3b4:{NFSU2_TR(0x4bb3b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B4bb3b6:{NFSU2_TR(0x4bb3b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb320u);}goto L4bb320;}}
}
B4bb3bc:L4bb3bc:{c.instructions+=4;NFSU2_TR(0x4bb3bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb3c0:{NFSU2_TR(0x4bb3c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb3c1:{NFSU2_TR(0x4bb3c1);
__builtin_memmove((R+4),(R+12),4);
}
B4bb3c3:{NFSU2_TR(0x4bb3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb3c8ull));
TAIL_STATIC(0x54edd0u,54e);
}
B4bb3c8:L4bb3c8:{c.instructions+=7;NFSU2_TR(0x4bb3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb3c9:{NFSU2_TR(0x4bb3c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb3ca:{NFSU2_TR(0x4bb3ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb3cb:{NFSU2_TR(0x4bb3cb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4bb3cd:{NFSU2_TR(0x4bb3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb3ce:{NFSU2_TR(0x4bb3ce);
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
B4bb3d1:{NFSU2_TR(0x4bb3d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb3d4:L4bb3d4:{c.instructions+=3;NFSU2_TR(0x4bb3d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb3d5:{NFSU2_TR(0x4bb3d5);
__builtin_memmove((R+4),(R+12),4);
}
B4bb3d7:{NFSU2_TR(0x4bb3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb3dcull));
TAIL_STATIC(0x54edd0u,54e);
}
B4bb3dc:L4bb3dc:{c.instructions+=7;NFSU2_TR(0x4bb3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb3dd:{NFSU2_TR(0x4bb3dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb3de:{NFSU2_TR(0x4bb3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb3df:{NFSU2_TR(0x4bb3df);
w1(R+0,u8(0x1ull));
}
B4bb3e1:{NFSU2_TR(0x4bb3e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb3e2:{NFSU2_TR(0x4bb3e2);
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
B4bb3e5:{NFSU2_TR(0x4bb3e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb3f0:L4bb3f0:{c.instructions+=5;NFSU2_TR(0x4bb3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb3f1:{NFSU2_TR(0x4bb3f1);
__builtin_memmove((R+24),(R+4),4);
}
B4bb3f3:{NFSU2_TR(0x4bb3f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb3f5:{NFSU2_TR(0x4bb3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bb3ff:{NFSU2_TR(0x4bb3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb404ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb0f0u);}goto L4bb0f0;}
}
B4bb404:L4bb404:{c.instructions+=2;NFSU2_TR(0x4bb404);
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
B4bb406:{NFSU2_TR(0x4bb406);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bb44a;}}
}
B4bb408:L4bb408:{c.instructions+=3;NFSU2_TR(0x4bb408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb40e:{NFSU2_TR(0x4bb40e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb410:{NFSU2_TR(0x4bb410);
if(r1(R+518)){{goto L4bb41b;}}
}
B4bb412:L4bb412:{c.instructions+=2;NFSU2_TR(0x4bb412);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb413:{NFSU2_TR(0x4bb413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb418ull));
TAIL_STATIC(0x540a60u,540);
}
B4bb418:L4bb418:{c.instructions+=1;NFSU2_TR(0x4bb418);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb41b:L4bb41b:{c.instructions+=4;NFSU2_TR(0x4bb41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bb425:{NFSU2_TR(0x4bb425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bb428:{NFSU2_TR(0x4bb428);
u8 U[4];
w4(U+0,u32(0x8173fc6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb42d:{NFSU2_TR(0x4bb42d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb432ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb432:L4bb432:{c.instructions+=7;NFSU2_TR(0x4bb432);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb433:{NFSU2_TR(0x4bb433);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb435:{NFSU2_TR(0x4bb435);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb437:{NFSU2_TR(0x4bb437);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb43c:{NFSU2_TR(0x4bb43c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb441:{NFSU2_TR(0x4bb441);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb442:{NFSU2_TR(0x4bb442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb447ull));
TAIL_STATIC(0x558540u,558);
}
B4bb447:L4bb447:{c.instructions+=1;NFSU2_TR(0x4bb447);
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
B4bb44a:L4bb44a:{c.instructions+=2;NFSU2_TR(0x4bb44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb44b:{NFSU2_TR(0x4bb44b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb450:L4bb450:{c.instructions+=8;NFSU2_TR(0x4bb450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4bb453:{NFSU2_TR(0x4bb453);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb454:{NFSU2_TR(0x4bb454);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb455:{NFSU2_TR(0x4bb455);
__builtin_memmove((R+20),(R+4),4);
}
B4bb457:{NFSU2_TR(0x4bb457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb45a:{NFSU2_TR(0x4bb45a);
u8 U[4];
w4(U+0,u32(0x332c0b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb45f:{NFSU2_TR(0x4bb45f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb460:{NFSU2_TR(0x4bb460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb465ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bb465:L4bb465:{c.instructions+=5;NFSU2_TR(0x4bb465);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bb468:{NFSU2_TR(0x4bb468);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb46b:{NFSU2_TR(0x4bb46b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb46e:{NFSU2_TR(0x4bb46e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bb470:{NFSU2_TR(0x4bb470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb489;}}
}
B4bb472:L4bb472:{c.instructions+=4;NFSU2_TR(0x4bb472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb475:{NFSU2_TR(0x4bb475);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb47a:{NFSU2_TR(0x4bb47a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb47b:{NFSU2_TR(0x4bb47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb480ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bb480:L4bb480:{c.instructions+=5;NFSU2_TR(0x4bb480);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb483:{NFSU2_TR(0x4bb483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb484:{NFSU2_TR(0x4bb484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb485:{NFSU2_TR(0x4bb485);
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
B4bb488:{NFSU2_TR(0x4bb488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb489:L4bb489:{c.instructions+=4;NFSU2_TR(0x4bb489);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb48a:{NFSU2_TR(0x4bb48a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb48b:{NFSU2_TR(0x4bb48b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4bb48d:{NFSU2_TR(0x4bb48d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb492ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4bb492:L4bb492:{c.instructions+=3;NFSU2_TR(0x4bb492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb495:{NFSU2_TR(0x4bb495);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb497:{NFSU2_TR(0x4bb497);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bb4b3;}}
}
B4bb499:L4bb499:{c.instructions+=1;NFSU2_TR(0x4bb499);
__builtin_memmove((R+16),(R+16),4);
}
B4bb4a0:L4bb4a0:{c.instructions+=4;NFSU2_TR(0x4bb4a0);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x2aull));
s1(u32(r4(U+8)),r1(U+12));
}
B4bb4a5:{NFSU2_TR(0x4bb4a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4a6:{NFSU2_TR(0x4bb4a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bb4a7:{NFSU2_TR(0x4bb4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb4acull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4bb4ac:L4bb4ac:{c.instructions+=3;NFSU2_TR(0x4bb4ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb4af:{NFSU2_TR(0x4bb4af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bb4b1:{NFSU2_TR(0x4bb4b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb4a0u);}goto L4bb4a0;}}
}
B4bb4b3:L4bb4b3:{c.instructions+=7;NFSU2_TR(0x4bb4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb4b6:{NFSU2_TR(0x4bb4b6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bb4ba:{NFSU2_TR(0x4bb4ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4bb:{NFSU2_TR(0x4bb4bb);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x20ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4bb4c0:{NFSU2_TR(0x4bb4c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4c1:{NFSU2_TR(0x4bb4c1);
u8 U[13];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4bb4c6:{NFSU2_TR(0x4bb4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb4cbull));
TAIL_STATIC(0x537be0u,537);
}
B4bb4cb:L4bb4cb:{c.instructions+=6;NFSU2_TR(0x4bb4cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb4ce:{NFSU2_TR(0x4bb4ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb4cf:{NFSU2_TR(0x4bb4cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb4d0:{NFSU2_TR(0x4bb4d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb4d1:{NFSU2_TR(0x4bb4d1);
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
B4bb4d4:{NFSU2_TR(0x4bb4d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb4e0:L4bb4e0:{c.instructions+=14;NFSU2_TR(0x4bb4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb4e4:{NFSU2_TR(0x4bb4e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4e5:{NFSU2_TR(0x4bb4e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bb4e9:{NFSU2_TR(0x4bb4e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4ea:{NFSU2_TR(0x4bb4ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4eb:{NFSU2_TR(0x4bb4eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bb4ef:{NFSU2_TR(0x4bb4ef);
__builtin_memmove((R+24),(R+4),4);
}
B4bb4f1:{NFSU2_TR(0x4bb4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb4f5:{NFSU2_TR(0x4bb4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4f6:{NFSU2_TR(0x4bb4f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4f7:{NFSU2_TR(0x4bb4f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4f8:{NFSU2_TR(0x4bb4f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb4f9:{NFSU2_TR(0x4bb4f9);
__builtin_memmove((R+4),(R+24),4);
}
B4bb4fb:{NFSU2_TR(0x4bb4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb500ull));
TAIL_STATIC(0x556020u,556);
}
B4bb500:L4bb500:{c.instructions+=2;NFSU2_TR(0x4bb500);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc9d30688ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb506:{NFSU2_TR(0x4bb506);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4bb59a;}}
}
B4bb50c:L4bb50c:{c.instructions+=1;NFSU2_TR(0x4bb50c);
if(r1(R+518)){{goto L4bb5c2;}}
}
B4bb512:L4bb512:{c.instructions+=2;NFSU2_TR(0x4bb512);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb518:{NFSU2_TR(0x4bb518);
if(r1(R+518)){{goto L4bb548;}}
}
B4bb51a:L4bb51a:{c.instructions+=2;NFSU2_TR(0x4bb51a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bb520:{NFSU2_TR(0x4bb520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb5c9;}}
}
B4bb526:L4bb526:{c.instructions+=2;NFSU2_TR(0x4bb526);
u8 U[4];
w4(U+0,u32(0x794d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb52b:{NFSU2_TR(0x4bb52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb530ull));
TAIL_STATIC(0x5379a0u,537);
}
B4bb530:L4bb530:{c.instructions+=3;NFSU2_TR(0x4bb530);
u8 U[4];
w4(U+0,u32(0x78f320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb535:{NFSU2_TR(0x4bb535);
u8 U[4];
w4(U+0,u32(0xf7f19667ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb53a:{NFSU2_TR(0x4bb53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb53full));
TAIL_STATIC(0x55dda0u,55d);
}
B4bb53f:L4bb53f:{c.instructions+=5;NFSU2_TR(0x4bb53f);
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
B4bb542:{NFSU2_TR(0x4bb542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb543:{NFSU2_TR(0x4bb543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb544:{NFSU2_TR(0x4bb544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb545:{NFSU2_TR(0x4bb545);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb548:L4bb548:{c.instructions+=2;NFSU2_TR(0x4bb548);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xd79b07a0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xd79b07a0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xd79b07a0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4bb54f:{NFSU2_TR(0x4bb54f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb5c9;}}
}
B4bb551:L4bb551:{c.instructions+=4;NFSU2_TR(0x4bb551);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x155ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb557:{NFSU2_TR(0x4bb557);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb558:{NFSU2_TR(0x4bb558);
__builtin_memmove((R+4),(R+24),4);
}
B4bb55a:{NFSU2_TR(0x4bb55a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb55full));
TAIL_STATIC(0x49ee00u,49e);
}
B4bb55f:L4bb55f:{c.instructions+=2;NFSU2_TR(0x4bb55f);
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
B4bb561:{NFSU2_TR(0x4bb561);
if(r1(R+518)){{goto L4bb5c9;}}
}
B4bb563:L4bb563:{c.instructions+=3;NFSU2_TR(0x4bb563);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb564:{NFSU2_TR(0x4bb564);
w4(R+4,u32(0x850080ull));
}
B4bb569:{NFSU2_TR(0x4bb569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb56eull));
TAIL_STATIC(0x495200u,495);
}
B4bb56e:L4bb56e:{c.instructions+=3;NFSU2_TR(0x4bb56e);
u8 U[4];
w4(U+0,u32(0x794d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb573:{NFSU2_TR(0x4bb573);
s4(0x836388,u32(0x85009cull));
}
B4bb57d:{NFSU2_TR(0x4bb57d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb582ull));
TAIL_STATIC(0x5379a0u,537);
}
B4bb582:L4bb582:{c.instructions+=3;NFSU2_TR(0x4bb582);
u8 U[4];
w4(U+0,u32(0x78f320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb587:{NFSU2_TR(0x4bb587);
u8 U[4];
w4(U+0,u32(0x8905384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb58c:{NFSU2_TR(0x4bb58c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb591ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4bb591:L4bb591:{c.instructions+=5;NFSU2_TR(0x4bb591);
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
B4bb594:{NFSU2_TR(0x4bb594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb595:{NFSU2_TR(0x4bb595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb596:{NFSU2_TR(0x4bb596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb597:{NFSU2_TR(0x4bb597);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb59a:L4bb59a:{c.instructions+=2;NFSU2_TR(0x4bb59a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xda5b8712ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bb5a0:{NFSU2_TR(0x4bb5a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb5c9;}}
}
B4bb5a2:L4bb5a2:{c.instructions+=3;NFSU2_TR(0x4bb5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb5a5:{NFSU2_TR(0x4bb5a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bb5ab:{NFSU2_TR(0x4bb5ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb5c2;}}
}
B4bb5ad:L4bb5ad:{c.instructions+=6;NFSU2_TR(0x4bb5ad);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5af:{NFSU2_TR(0x4bb5af);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4bb5b2:{NFSU2_TR(0x4bb5b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5b3:{NFSU2_TR(0x4bb5b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x155ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bb5b9:{NFSU2_TR(0x4bb5b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5ba:{NFSU2_TR(0x4bb5ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb5bfull));
TAIL_STATIC(0x43dc00u,43d);
}
B4bb5bf:L4bb5bf:{c.instructions+=1;NFSU2_TR(0x4bb5bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb5c2:L4bb5c2:{c.instructions+=2;NFSU2_TR(0x4bb5c2);
__builtin_memmove((R+4),(R+24),4);
}
B4bb5c4:{NFSU2_TR(0x4bb5c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb5c9ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4bb5c9:L4bb5c9:{c.instructions+=4;NFSU2_TR(0x4bb5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb5ca:{NFSU2_TR(0x4bb5ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb5cb:{NFSU2_TR(0x4bb5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb5cc:{NFSU2_TR(0x4bb5cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb5d0:L4bb5d0:{c.instructions+=11;NFSU2_TR(0x4bb5d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5d1:{NFSU2_TR(0x4bb5d1);
__builtin_memmove((R+20),(R+16),4);
}
B4bb5d3:{NFSU2_TR(0x4bb5d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bb5d6:{NFSU2_TR(0x4bb5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x500ull))));
}
B4bb5dc:{NFSU2_TR(0x4bb5dc);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bb5e6:{NFSU2_TR(0x4bb5e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5e7:{NFSU2_TR(0x4bb5e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5e8:{NFSU2_TR(0x4bb5e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5e9:{NFSU2_TR(0x4bb5e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb5ea:{NFSU2_TR(0x4bb5ea);
__builtin_memmove((R+12),(R+4),4);
}
B4bb5ec:{NFSU2_TR(0x4bb5ec);
if(r1(R+518)){{goto L4bb6cc;}}
}
B4bb5f2:L4bb5f2:{c.instructions+=4;NFSU2_TR(0x4bb5f2);
__builtin_memmove((R+0),gp(0x8358f0),4);
}
B4bb5f7:{NFSU2_TR(0x4bb5f7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4bb5f9:{NFSU2_TR(0x4bb5f9);
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
B4bb5fb:{NFSU2_TR(0x4bb5fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bb6cc;}}
}
B4bb601:L4bb601:{c.instructions+=3;NFSU2_TR(0x4bb601);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x83590cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bb607:{NFSU2_TR(0x4bb607);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bb609:{NFSU2_TR(0x4bb609);
if(r1(R+518)){{goto L4bb6be;}}
}
B4bb60f:L4bb60f:{c.instructions+=3;NFSU2_TR(0x4bb60f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8358f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4bb616:{NFSU2_TR(0x4bb616);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb617:{NFSU2_TR(0x4bb617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb61cull));
TAIL_STATIC(0x582b60u,582);
}
B4bb61c:L4bb61c:{c.instructions+=2;NFSU2_TR(0x4bb61c);
__builtin_memmove((R+4),(R+0),4);
}
B4bb61e:{NFSU2_TR(0x4bb61e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb623ull));
TAIL_STATIC(0x582bb0u,582);
}
B4bb623:L4bb623:{c.instructions+=4;NFSU2_TR(0x4bb623);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb624:{NFSU2_TR(0x4bb624);
u8 U[4];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb62b:{NFSU2_TR(0x4bb62b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb62c:{NFSU2_TR(0x4bb62c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb631ull));
TAIL_STATIC(0x49e870u,49e);
}
B4bb631:L4bb631:{c.instructions+=3;NFSU2_TR(0x4bb631);
__builtin_memmove((R+24),(R+0),4);
}
B4bb633:{NFSU2_TR(0x4bb633);
w4(R+4,u32(0x9full));
}
B4bb638:{NFSU2_TR(0x4bb638);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb63c:L4bb63c:{c.instructions+=1;NFSU2_TR(0x4bb63c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bb63e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb63cu);}goto L4bb63c;}
}
B4bb63e:L4bb63e:{c.instructions+=4;NFSU2_TR(0x4bb63e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb642:{NFSU2_TR(0x4bb642);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bb645:{NFSU2_TR(0x4bb645);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb647:{NFSU2_TR(0x4bb647);
if(r1(R+518)){{goto L4bb6be;}}
}
B4bb649:L4bb649:{c.instructions+=1;NFSU2_TR(0x4bb649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb64eull));
TAIL_STATIC(0x582b60u,582);
}
B4bb64e:L4bb64e:{c.instructions+=8;NFSU2_TR(0x4bb64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb654:{NFSU2_TR(0x4bb654);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb656:{NFSU2_TR(0x4bb656);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb658:{NFSU2_TR(0x4bb658);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb65a:{NFSU2_TR(0x4bb65a);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bb65e:{NFSU2_TR(0x4bb65e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb65f:{NFSU2_TR(0x4bb65f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb660:{NFSU2_TR(0x4bb660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb665ull));
TAIL_STATIC(0x73fb50u,73f);
}
B4bb665:L4bb665:{c.instructions+=4;NFSU2_TR(0x4bb665);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb66c:{NFSU2_TR(0x4bb66c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4bb66f:{NFSU2_TR(0x4bb66f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb670:{NFSU2_TR(0x4bb670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb675ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4bb675:L4bb675:{c.instructions+=2;NFSU2_TR(0x4bb675);
__builtin_memmove((R+4),(R+0),4);
}
B4bb677:{NFSU2_TR(0x4bb677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb67cull));
TAIL_STATIC(0x58ff10u,58f);
}
B4bb67c:L4bb67c:{c.instructions+=5;NFSU2_TR(0x4bb67c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bb680:{NFSU2_TR(0x4bb680);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb681:{NFSU2_TR(0x4bb681);
__builtin_memmove((R+4),(R+12),4);
}
B4bb683:{NFSU2_TR(0x4bb683);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x83590cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bb68a:{NFSU2_TR(0x4bb68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb68full));
TAIL_STATIC(0x49ee40u,49e);
}
B4bb68f:L4bb68f:{c.instructions+=4;NFSU2_TR(0x4bb68f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bb693:{NFSU2_TR(0x4bb693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb694:{NFSU2_TR(0x4bb694);
u8 U[4];
w4(U+0,u32(0x635cb250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb699:{NFSU2_TR(0x4bb699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb69eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb69e:L4bb69e:{c.instructions+=7;NFSU2_TR(0x4bb69e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb6a1:{NFSU2_TR(0x4bb6a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6a2:{NFSU2_TR(0x4bb6a2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6a4:{NFSU2_TR(0x4bb6a4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6a6:{NFSU2_TR(0x4bb6a6);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6ab:{NFSU2_TR(0x4bb6ab);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6b0:{NFSU2_TR(0x4bb6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb6b5ull));
TAIL_STATIC(0x4a0000u,4a0);
}
B4bb6b5:L4bb6b5:{c.instructions+=2;NFSU2_TR(0x4bb6b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6b6:{NFSU2_TR(0x4bb6b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb6bbull));
TAIL_STATIC(0x558540u,558);
}
B4bb6bb:L4bb6bb:{c.instructions+=1;NFSU2_TR(0x4bb6bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bb6be:L4bb6be:{c.instructions+=4;NFSU2_TR(0x4bb6be);
__builtin_memmove((R+0),gp(0x8358f0),4);
}
B4bb6c3:{NFSU2_TR(0x4bb6c3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4bb6c4:{NFSU2_TR(0x4bb6c4);
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
B4bb6c6:{NFSU2_TR(0x4bb6c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb601u);}goto L4bb601;}}
}
B4bb6cc:L4bb6cc:{c.instructions+=7;NFSU2_TR(0x4bb6cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb6cd:{NFSU2_TR(0x4bb6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb6ce:{NFSU2_TR(0x4bb6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb6cf:{NFSU2_TR(0x4bb6cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb6d0:{NFSU2_TR(0x4bb6d0);
__builtin_memmove((R+16),(R+20),4);
}
B4bb6d2:{NFSU2_TR(0x4bb6d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb6d3:{NFSU2_TR(0x4bb6d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb6e0:L4bb6e0:{c.instructions+=10;NFSU2_TR(0x4bb6e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6e1:{NFSU2_TR(0x4bb6e1);
__builtin_memmove((R+20),(R+16),4);
}
B4bb6e3:{NFSU2_TR(0x4bb6e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bb6e6:{NFSU2_TR(0x4bb6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B4bb6ec:{NFSU2_TR(0x4bb6ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6ed:{NFSU2_TR(0x4bb6ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6ee:{NFSU2_TR(0x4bb6ee);
__builtin_memmove((R+24),(R+4),4);
}
B4bb6f0:{NFSU2_TR(0x4bb6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb6f6:{NFSU2_TR(0x4bb6f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb6f7:{NFSU2_TR(0x4bb6f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb6fcull));
TAIL_STATIC(0x582980u,582);
}
B4bb6fc:L4bb6fc:{c.instructions+=3;NFSU2_TR(0x4bb6fc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4bb6fe:{NFSU2_TR(0x4bb6fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb700:{NFSU2_TR(0x4bb700);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bb767;}}
}
B4bb702:L4bb702:{c.instructions+=2;NFSU2_TR(0x4bb702);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4bb709:{NFSU2_TR(0x4bb709);
if(r1(R+518)){{goto L4bb767;}}
}
B4bb70b:L4bb70b:{c.instructions+=2;NFSU2_TR(0x4bb70b);
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
B4bb70d:{NFSU2_TR(0x4bb70d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb91a;}}
}
B4bb713:L4bb713:{c.instructions+=4;NFSU2_TR(0x4bb713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb719:{NFSU2_TR(0x4bb719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb71a:{NFSU2_TR(0x4bb71a);
u8 U[4];
w4(U+0,u32(0x49f890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb71f:{NFSU2_TR(0x4bb71f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb724ull));
TAIL_STATIC(0x58aa20u,58a);
}
B4bb724:L4bb724:{c.instructions+=2;NFSU2_TR(0x4bb724);
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
B4bb726:{NFSU2_TR(0x4bb726);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bb73b;}}
}
B4bb728:L4bb728:{c.instructions+=3;NFSU2_TR(0x4bb728);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb72a:{NFSU2_TR(0x4bb72a);
w4(R+4,u32(0x850080ull));
}
B4bb72f:{NFSU2_TR(0x4bb72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb734ull));
TAIL_STATIC(0x5031b0u,503);
}
B4bb734:L4bb734:{c.instructions+=6;NFSU2_TR(0x4bb734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb735:{NFSU2_TR(0x4bb735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb736:{NFSU2_TR(0x4bb736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb737:{NFSU2_TR(0x4bb737);
__builtin_memmove((R+16),(R+20),4);
}
B4bb739:{NFSU2_TR(0x4bb739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb73a:{NFSU2_TR(0x4bb73a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb73b:L4bb73b:{c.instructions+=3;NFSU2_TR(0x4bb73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bb73e:{NFSU2_TR(0x4bb73e);
u8 U[4];
w4(U+0,u32(0x313f8cc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb743:{NFSU2_TR(0x4bb743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb748ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb748:L4bb748:{c.instructions+=7;NFSU2_TR(0x4bb748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb749:{NFSU2_TR(0x4bb749);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb74b:{NFSU2_TR(0x4bb74b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb74d:{NFSU2_TR(0x4bb74d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb752:{NFSU2_TR(0x4bb752);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb757:{NFSU2_TR(0x4bb757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb758:{NFSU2_TR(0x4bb758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb75dull));
TAIL_STATIC(0x558540u,558);
}
B4bb75d:L4bb75d:{c.instructions+=7;NFSU2_TR(0x4bb75d);
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
B4bb760:{NFSU2_TR(0x4bb760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb761:{NFSU2_TR(0x4bb761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb762:{NFSU2_TR(0x4bb762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb763:{NFSU2_TR(0x4bb763);
__builtin_memmove((R+16),(R+20),4);
}
B4bb765:{NFSU2_TR(0x4bb765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb766:{NFSU2_TR(0x4bb766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb767:L4bb767:{c.instructions+=2;NFSU2_TR(0x4bb767);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb76d:{NFSU2_TR(0x4bb76d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb772ull));
TAIL_STATIC(0x58d0d0u,58d);
}
B4bb772:L4bb772:{c.instructions+=7;NFSU2_TR(0x4bb772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb778:{NFSU2_TR(0x4bb778);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bb77a:{NFSU2_TR(0x4bb77a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bb780:{NFSU2_TR(0x4bb780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb781:{NFSU2_TR(0x4bb781);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb782:{NFSU2_TR(0x4bb782);
u8 U[4];
w4(U+0,u32(0x49f890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb787:{NFSU2_TR(0x4bb787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb78cull));
TAIL_STATIC(0x58a7e0u,58a);
}
B4bb78c:L4bb78c:{c.instructions+=2;NFSU2_TR(0x4bb78c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bb78e:{NFSU2_TR(0x4bb78e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bb88c;}}
}
B4bb794:L4bb794:{c.instructions+=2;NFSU2_TR(0x4bb794);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bb79e:{NFSU2_TR(0x4bb79e);
if(r1(R+518)){{goto L4bb82d;}}
}
B4bb7a4:L4bb7a4:{c.instructions+=2;NFSU2_TR(0x4bb7a4);
w4(R+28,u32(0x8358f4ull));
}
B4bb7a9:{NFSU2_TR(0x4bb7a9);
__builtin_memmove((R+16),(R+16),4);
}
B4bb7b0:L4bb7b0:{c.instructions+=2;NFSU2_TR(0x4bb7b0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4bb7b2:{NFSU2_TR(0x4bb7b2);
if(r1(R+518)){{goto L4bb7cf;}}
}
B4bb7b4:L4bb7b4:{c.instructions+=1;NFSU2_TR(0x4bb7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb7b9ull));
TAIL_STATIC(0x582b60u,582);
}
B4bb7b9:L4bb7b9:{c.instructions+=8;NFSU2_TR(0x4bb7b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4bb7bb:{NFSU2_TR(0x4bb7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bb7c1:{NFSU2_TR(0x4bb7c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7c2:{NFSU2_TR(0x4bb7c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7c3:{NFSU2_TR(0x4bb7c3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7c5:{NFSU2_TR(0x4bb7c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7c6:{NFSU2_TR(0x4bb7c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7c7:{NFSU2_TR(0x4bb7c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb7ccull));
TAIL_STATIC(0x73fb50u,73f);
}
B4bb7cc:L4bb7cc:{c.instructions+=1;NFSU2_TR(0x4bb7cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4bb7cf:L4bb7cf:{c.instructions+=3;NFSU2_TR(0x4bb7cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4bb7d2:{NFSU2_TR(0x4bb7d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x83590cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x83590cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bb7d8:{NFSU2_TR(0x4bb7d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb7b0u);}goto L4bb7b0;}}
}
B4bb7da:L4bb7da:{c.instructions+=4;NFSU2_TR(0x4bb7da);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb7de:{NFSU2_TR(0x4bb7de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bb7e0:{NFSU2_TR(0x4bb7e0);
w4(R+4,u32(0x1full));
}
B4bb7e5:{NFSU2_TR(0x4bb7e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb7e9:L4bb7e9:{c.instructions+=1;NFSU2_TR(0x4bb7e9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4bb7eb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb7e9u);}goto L4bb7e9;}
}
B4bb7eb:L4bb7eb:{c.instructions+=5;NFSU2_TR(0x4bb7eb);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4bb7ed:{NFSU2_TR(0x4bb7ed);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7f2:{NFSU2_TR(0x4bb7f2);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb7f7:{NFSU2_TR(0x4bb7f7);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4bb7f8:{NFSU2_TR(0x4bb7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb7fdull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb7fd:L4bb7fd:{c.instructions+=6;NFSU2_TR(0x4bb7fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb800:{NFSU2_TR(0x4bb800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb801:{NFSU2_TR(0x4bb801);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bb805:{NFSU2_TR(0x4bb805);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb80a:{NFSU2_TR(0x4bb80a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb80b:{NFSU2_TR(0x4bb80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb810ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bb810:L4bb810:{c.instructions+=1;NFSU2_TR(0x4bb810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb815ull));
TAIL_STATIC(0x582b60u,582);
}
B4bb815:L4bb815:{c.instructions+=8;NFSU2_TR(0x4bb815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bb81b:{NFSU2_TR(0x4bb81b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb81c:{NFSU2_TR(0x4bb81c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb820:{NFSU2_TR(0x4bb820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb821:{NFSU2_TR(0x4bb821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb822:{NFSU2_TR(0x4bb822);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb824:{NFSU2_TR(0x4bb824);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb825:{NFSU2_TR(0x4bb825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb82aull));
TAIL_STATIC(0x73f180u,73f);
}
B4bb82a:L4bb82a:{c.instructions+=1;NFSU2_TR(0x4bb82a);
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
B4bb82d:L4bb82d:{c.instructions+=3;NFSU2_TR(0x4bb82d);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb82f:{NFSU2_TR(0x4bb82f);
w4(R+4,u32(0x850080ull));
}
B4bb834:{NFSU2_TR(0x4bb834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb839ull));
TAIL_STATIC(0x5031b0u,503);
}
B4bb839:L4bb839:{c.instructions+=6;NFSU2_TR(0x4bb839);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb83c:{NFSU2_TR(0x4bb83c);
u8 U[4];
w4(U+0,u32(0x9c6e60a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb841:{NFSU2_TR(0x4bb841);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb846:{NFSU2_TR(0x4bb846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb847:{NFSU2_TR(0x4bb847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb84d:{NFSU2_TR(0x4bb84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb852ull));
TAIL_STATIC(0x558330u,558);
}
B4bb852:L4bb852:{c.instructions+=7;NFSU2_TR(0x4bb852);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4bb858:{NFSU2_TR(0x4bb858);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb85b:{NFSU2_TR(0x4bb85b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bb861:{NFSU2_TR(0x4bb861);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bb867:{NFSU2_TR(0x4bb867);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bb86d:{NFSU2_TR(0x4bb86d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bb873:{NFSU2_TR(0x4bb873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb878ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4bb878:L4bb878:{c.instructions+=8;NFSU2_TR(0x4bb878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bb87e:{NFSU2_TR(0x4bb87e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bb885:{NFSU2_TR(0x4bb885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb886:{NFSU2_TR(0x4bb886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb887:{NFSU2_TR(0x4bb887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb888:{NFSU2_TR(0x4bb888);
__builtin_memmove((R+16),(R+20),4);
}
B4bb88a:{NFSU2_TR(0x4bb88a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb88b:{NFSU2_TR(0x4bb88b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb88c:L4bb88c:{c.instructions+=4;NFSU2_TR(0x4bb88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb88f:{NFSU2_TR(0x4bb88f);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb894:{NFSU2_TR(0x4bb894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb895:{NFSU2_TR(0x4bb895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bb8e4;}}
}
B4bb897:L4bb897:{c.instructions+=1;NFSU2_TR(0x4bb897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb89cull));
TAIL_STATIC(0x5379c0u,537);
}
B4bb89c:L4bb89c:{c.instructions+=2;NFSU2_TR(0x4bb89c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb89d:{NFSU2_TR(0x4bb89d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8a2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bb8a2:L4bb8a2:{c.instructions+=5;NFSU2_TR(0x4bb8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb8a8:{NFSU2_TR(0x4bb8a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb8ab:{NFSU2_TR(0x4bb8ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8ac:{NFSU2_TR(0x4bb8ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8ad:{NFSU2_TR(0x4bb8ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8b2ull));
TAIL_STATIC(0x58ab40u,58a);
}
B4bb8b2:L4bb8b2:{c.instructions+=3;NFSU2_TR(0x4bb8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bb8b5:{NFSU2_TR(0x4bb8b5);
u8 U[4];
w4(U+0,u32(0xd616e55aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8ba:{NFSU2_TR(0x4bb8ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8bfull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb8bf:L4bb8bf:{c.instructions+=7;NFSU2_TR(0x4bb8bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8c0:{NFSU2_TR(0x4bb8c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8c2:{NFSU2_TR(0x4bb8c2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8c4:{NFSU2_TR(0x4bb8c4);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8c9:{NFSU2_TR(0x4bb8c9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8ce:{NFSU2_TR(0x4bb8ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8cf:{NFSU2_TR(0x4bb8cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8d4ull));
TAIL_STATIC(0x558540u,558);
}
B4bb8d4:L4bb8d4:{c.instructions+=8;NFSU2_TR(0x4bb8d4);
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
B4bb8d7:{NFSU2_TR(0x4bb8d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb8dd:{NFSU2_TR(0x4bb8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb8de:{NFSU2_TR(0x4bb8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb8df:{NFSU2_TR(0x4bb8df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb8e0:{NFSU2_TR(0x4bb8e0);
__builtin_memmove((R+16),(R+20),4);
}
B4bb8e2:{NFSU2_TR(0x4bb8e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb8e3:{NFSU2_TR(0x4bb8e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb8e4:L4bb8e4:{c.instructions+=1;NFSU2_TR(0x4bb8e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8e9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bb8e9:L4bb8e9:{c.instructions+=2;NFSU2_TR(0x4bb8e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8ea:{NFSU2_TR(0x4bb8ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8efull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bb8ef:L4bb8ef:{c.instructions+=3;NFSU2_TR(0x4bb8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bb8f2:{NFSU2_TR(0x4bb8f2);
u8 U[4];
w4(U+0,u32(0xd99cfe5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8f7:{NFSU2_TR(0x4bb8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb8fcull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb8fc:L4bb8fc:{c.instructions+=7;NFSU2_TR(0x4bb8fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8fd:{NFSU2_TR(0x4bb8fd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb8ff:{NFSU2_TR(0x4bb8ff);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb901:{NFSU2_TR(0x4bb901);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb906:{NFSU2_TR(0x4bb906);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb90b:{NFSU2_TR(0x4bb90b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb90c:{NFSU2_TR(0x4bb90c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb911ull));
TAIL_STATIC(0x558540u,558);
}
B4bb911:L4bb911:{c.instructions+=2;NFSU2_TR(0x4bb911);
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
B4bb914:{NFSU2_TR(0x4bb914);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bb91a:L4bb91a:{c.instructions+=6;NFSU2_TR(0x4bb91a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb91b:{NFSU2_TR(0x4bb91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bb91c:{NFSU2_TR(0x4bb91c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bb91d:{NFSU2_TR(0x4bb91d);
__builtin_memmove((R+16),(R+20),4);
}
B4bb91f:{NFSU2_TR(0x4bb91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bb920:{NFSU2_TR(0x4bb920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bb930:L4bb930:{c.instructions+=9;NFSU2_TR(0x4bb930);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb931:{NFSU2_TR(0x4bb931);
__builtin_memmove((R+20),(R+16),4);
}
B4bb933:{NFSU2_TR(0x4bb933);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bb936:{NFSU2_TR(0x4bb936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4bb93c:{NFSU2_TR(0x4bb93c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb93d:{NFSU2_TR(0x4bb93d);
__builtin_memmove((R+24),(R+4),4);
}
B4bb93f:{NFSU2_TR(0x4bb93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb945:{NFSU2_TR(0x4bb945);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb946:{NFSU2_TR(0x4bb946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb94bull));
TAIL_STATIC(0x58d0d0u,58d);
}
B4bb94b:L4bb94b:{c.instructions+=2;NFSU2_TR(0x4bb94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb951:{NFSU2_TR(0x4bb951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb956ull));
TAIL_STATIC(0x582930u,582);
}
B4bb956:L4bb956:{c.instructions+=2;NFSU2_TR(0x4bb956);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bb958:{NFSU2_TR(0x4bb958);
if(r1(R+518)){{goto L4bb9a5;}}
}
B4bb95a:L4bb95a:{c.instructions+=4;NFSU2_TR(0x4bb95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bb960:{NFSU2_TR(0x4bb960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb961:{NFSU2_TR(0x4bb961);
u8 U[4];
w4(U+0,u32(0x49f800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb966:{NFSU2_TR(0x4bb966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb96bull));
TAIL_STATIC(0x58d800u,58d);
}
B4bb96b:L4bb96b:{c.instructions+=2;NFSU2_TR(0x4bb96b);
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
B4bb96d:{NFSU2_TR(0x4bb96d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bb97d;}}
}
B4bb96f:L4bb96f:{c.instructions+=3;NFSU2_TR(0x4bb96f);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb971:{NFSU2_TR(0x4bb971);
w4(R+4,u32(0x850080ull));
}
B4bb976:{NFSU2_TR(0x4bb976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb97bull));
TAIL_STATIC(0x5031b0u,503);
}
B4bb97b:L4bb97b:{c.instructions+=1;NFSU2_TR(0x4bb97b);
{goto L4bb9b8;}
}
B4bb97d:L4bb97d:{c.instructions+=3;NFSU2_TR(0x4bb97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bb980:{NFSU2_TR(0x4bb980);
u8 U[4];
w4(U+0,u32(0xacc1f7daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb985:{NFSU2_TR(0x4bb985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb98aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb98a:L4bb98a:{c.instructions+=6;NFSU2_TR(0x4bb98a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb98b:{NFSU2_TR(0x4bb98b);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb990:{NFSU2_TR(0x4bb990);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb995:{NFSU2_TR(0x4bb995);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb99a:{NFSU2_TR(0x4bb99a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb99b:{NFSU2_TR(0x4bb99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb9a0ull));
TAIL_STATIC(0x5585e0u,558);
}
B4bb9a0:L4bb9a0:{c.instructions+=2;NFSU2_TR(0x4bb9a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bb9a3:{NFSU2_TR(0x4bb9a3);
{goto L4bb9b8;}
}
B4bb9a5:L4bb9a5:{c.instructions+=5;NFSU2_TR(0x4bb9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb9a8:{NFSU2_TR(0x4bb9a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9aa:{NFSU2_TR(0x4bb9aa);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9af:{NFSU2_TR(0x4bb9af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9b0:{NFSU2_TR(0x4bb9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb9b5ull));
TAIL_STATIC(0x537980u,537);
}
B4bb9b5:L4bb9b5:{c.instructions+=1;NFSU2_TR(0x4bb9b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bb9b8:L4bb9b8:{c.instructions+=4;NFSU2_TR(0x4bb9b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bb9bd:{NFSU2_TR(0x4bb9bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bb9bf:{NFSU2_TR(0x4bb9bf);
w4(R+4,u32(0x1full));
}
B4bb9c4:{NFSU2_TR(0x4bb9c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bb9c8:L4bb9c8:{c.instructions+=1;NFSU2_TR(0x4bb9c8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4bb9ca;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bb9c8u);}goto L4bb9c8;}
}
B4bb9ca:L4bb9ca:{c.instructions+=5;NFSU2_TR(0x4bb9ca);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4bb9cc:{NFSU2_TR(0x4bb9cc);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9d1:{NFSU2_TR(0x4bb9d1);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9d6:{NFSU2_TR(0x4bb9d6);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4bb9d7:{NFSU2_TR(0x4bb9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb9dcull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bb9dc:L4bb9dc:{c.instructions+=6;NFSU2_TR(0x4bb9dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bb9df:{NFSU2_TR(0x4bb9df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9e0:{NFSU2_TR(0x4bb9e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bb9e4:{NFSU2_TR(0x4bb9e4);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9e9:{NFSU2_TR(0x4bb9e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9ea:{NFSU2_TR(0x4bb9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb9efull));
TAIL_STATIC(0x50c960u,50c);
}
B4bb9ef:L4bb9ef:{c.instructions+=1;NFSU2_TR(0x4bb9ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bb9f4ull));
TAIL_STATIC(0x582b60u,582);
}
B4bb9f4:L4bb9f4:{c.instructions+=8;NFSU2_TR(0x4bb9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bb9fa:{NFSU2_TR(0x4bb9fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bb9fc:{NFSU2_TR(0x4bb9fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bba00:{NFSU2_TR(0x4bba00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba01:{NFSU2_TR(0x4bba01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba03:{NFSU2_TR(0x4bba03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba05:{NFSU2_TR(0x4bba05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba06:{NFSU2_TR(0x4bba06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bba0bull));
TAIL_STATIC(0x73f180u,73f);
}
B4bba0b:L4bba0b:{c.instructions+=6;NFSU2_TR(0x4bba0b);
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
B4bba0e:{NFSU2_TR(0x4bba0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bba0f:{NFSU2_TR(0x4bba0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bba10:{NFSU2_TR(0x4bba10);
__builtin_memmove((R+16),(R+20),4);
}
B4bba12:{NFSU2_TR(0x4bba12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bba13:{NFSU2_TR(0x4bba13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bba20:L4bba20:{c.instructions+=15;NFSU2_TR(0x4bba20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba21:{NFSU2_TR(0x4bba21);
__builtin_memmove((R+20),(R+16),4);
}
B4bba23:{NFSU2_TR(0x4bba23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4bba26:{NFSU2_TR(0x4bba26);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba28:{NFSU2_TR(0x4bba28);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba2d:{NFSU2_TR(0x4bba2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bba33:{NFSU2_TR(0x4bba33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba34:{NFSU2_TR(0x4bba34);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bba3b:{NFSU2_TR(0x4bba3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x948ull))));
}
B4bba41:{NFSU2_TR(0x4bba41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba42:{NFSU2_TR(0x4bba42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba43:{NFSU2_TR(0x4bba43);
__builtin_memmove((R+24),(R+4),4);
}
B4bba45:{NFSU2_TR(0x4bba45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bba4b:{NFSU2_TR(0x4bba4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba4c:{NFSU2_TR(0x4bba4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bba51ull));
TAIL_STATIC(0x582930u,582);
}
B4bba51:L4bba51:{c.instructions+=2;NFSU2_TR(0x4bba51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bba53:{NFSU2_TR(0x4bba53);
if(r1(R+518)){{goto L4bba71;}}
}
B4bba55:L4bba55:{c.instructions+=2;NFSU2_TR(0x4bba55);
u8 U[8];
__builtin_memmove((U+0),gp(0x850084),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bba5c:{NFSU2_TR(0x4bba5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bba71;}}
}
B4bba5e:L4bba5e:{c.instructions+=2;NFSU2_TR(0x4bba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bba64:{NFSU2_TR(0x4bba64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bba69ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4bba69:L4bba69:{c.instructions+=2;NFSU2_TR(0x4bba69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bba6b:{NFSU2_TR(0x4bba6b);
if(r1(R+518)){{goto L4bbfd2;}}
}
B4bba71:L4bba71:{c.instructions+=3;NFSU2_TR(0x4bba71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bba74:{NFSU2_TR(0x4bba74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bba76:{NFSU2_TR(0x4bba76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bba82;}}
}
B4bba78:L4bba78:{c.instructions+=2;NFSU2_TR(0x4bba78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bba7b:{NFSU2_TR(0x4bba7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bba80ull));
TAIL_STATIC(0x54eb60u,54e);
}
B4bba80:L4bba80:{c.instructions+=1;NFSU2_TR(0x4bba80);
{goto L4bba8c;}
}
B4bba82:L4bba82:{c.instructions+=1;NFSU2_TR(0x4bba82);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bba8c;}}
}
B4bba84:L4bba84:{c.instructions+=2;NFSU2_TR(0x4bba84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bba87:{NFSU2_TR(0x4bba87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bba8cull));
TAIL_STATIC(0x54eb40u,54e);
}
B4bba8c:L4bba8c:{c.instructions+=3;NFSU2_TR(0x4bba8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bba8f:{NFSU2_TR(0x4bba8f);
u8 U[4];
w4(U+0,u32(0xf636a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba94:{NFSU2_TR(0x4bba94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bba99ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bba99:L4bba99:{c.instructions+=4;NFSU2_TR(0x4bba99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bba9a:{NFSU2_TR(0x4bba9a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x918ull))));
}
B4bbaa0:{NFSU2_TR(0x4bbaa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbaa1:{NFSU2_TR(0x4bbaa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbaa6ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4bbaa6:L4bbaa6:{c.instructions+=4;NFSU2_TR(0x4bbaa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bbaa9:{NFSU2_TR(0x4bbaa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbaab:{NFSU2_TR(0x4bbaab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bbab1:{NFSU2_TR(0x4bbab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbc20;}}
}
B4bbab7:L4bbab7:{c.instructions+=2;NFSU2_TR(0x4bbab7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbab9:{NFSU2_TR(0x4bbab9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbaf4;}}
}
B4bbabb:L4bbabb:{c.instructions+=3;NFSU2_TR(0x4bbabb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bbac1:{NFSU2_TR(0x4bbac1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbac3:{NFSU2_TR(0x4bbac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbaf4;}}
}
B4bbac5:L4bbac5:{c.instructions+=6;NFSU2_TR(0x4bbac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbac8:{NFSU2_TR(0x4bbac8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbaca:{NFSU2_TR(0x4bbaca);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbacf:{NFSU2_TR(0x4bbacf);
u8 U[4];
w4(U+0,u32(0x794d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbad4:{NFSU2_TR(0x4bbad4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbad5:{NFSU2_TR(0x4bbad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbadaull));
TAIL_STATIC(0x5426c0u,542);
}
B4bbada:L4bbada:{c.instructions+=7;NFSU2_TR(0x4bbada);
__builtin_memmove((R+4),gp(0x7f44b8),4);
}
B4bbae0:{NFSU2_TR(0x4bbae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbae3:{NFSU2_TR(0x4bbae3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbae5:{NFSU2_TR(0x4bbae5);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbaea:{NFSU2_TR(0x4bbaea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbaeb:{NFSU2_TR(0x4bbaeb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbaec:{NFSU2_TR(0x4bbaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbaf1ull));
TAIL_STATIC(0x5426c0u,542);
}
B4bbaf1:L4bbaf1:{c.instructions+=1;NFSU2_TR(0x4bbaf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bbaf4:L4bbaf4:{c.instructions+=3;NFSU2_TR(0x4bbaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bbaf7:{NFSU2_TR(0x4bbaf7);
u8 U[4];
w4(U+0,u32(0xf636a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbafc:{NFSU2_TR(0x4bbafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb01ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bbb01:L4bbb01:{c.instructions+=4;NFSU2_TR(0x4bbb01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb02:{NFSU2_TR(0x4bbb02);
u8 U[4];
w4(U+0,u32(0x794d48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb07:{NFSU2_TR(0x4bbb07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb08:{NFSU2_TR(0x4bbb08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb0dull));
TAIL_STATIC(0x542600u,542);
}
B4bbb0d:L4bbb0d:{c.instructions+=5;NFSU2_TR(0x4bbb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbb10:{NFSU2_TR(0x4bbb10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbb13:{NFSU2_TR(0x4bbb13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bbb16:{NFSU2_TR(0x4bbb16);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbb18:{NFSU2_TR(0x4bbb18);
if(r1(R+518)){{goto L4bbb28;}}
}
B4bbb1a:L4bbb1a:{c.instructions+=4;NFSU2_TR(0x4bbb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbb1d:{NFSU2_TR(0x4bbb1d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb22:{NFSU2_TR(0x4bbb22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb23:{NFSU2_TR(0x4bbb23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb28ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4bbb28:L4bbb28:{c.instructions+=3;NFSU2_TR(0x4bbb28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb2a:{NFSU2_TR(0x4bbb2a);
__builtin_memmove((R+4),(R+28),4);
}
B4bbb2c:{NFSU2_TR(0x4bbb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb31ull));
TAIL_STATIC(0x538500u,538);
}
B4bbb31:L4bbb31:{c.instructions+=3;NFSU2_TR(0x4bbb31);
__builtin_memmove((R+0),gp(0x850084),4);
}
B4bbb36:{NFSU2_TR(0x4bbb36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbb38:{NFSU2_TR(0x4bbb38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbbb5;}}
}
B4bbb3a:L4bbb3a:{c.instructions+=4;NFSU2_TR(0x4bbb3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bbb40:{NFSU2_TR(0x4bbb40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbb42:{NFSU2_TR(0x4bbb42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb44:{NFSU2_TR(0x4bbb44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbb88;}}
}
B4bbb46:L4bbb46:{c.instructions+=5;NFSU2_TR(0x4bbb46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbb49:{NFSU2_TR(0x4bbb49);
u8 U[4];
w4(U+0,u32(0x78feacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb4e:{NFSU2_TR(0x4bbb4e);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb53:{NFSU2_TR(0x4bbb53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb54:{NFSU2_TR(0x4bbb54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb59ull));
TAIL_STATIC(0x537c00u,537);
}
B4bbb59:L4bbb59:{c.instructions+=6;NFSU2_TR(0x4bbb59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbb5c:{NFSU2_TR(0x4bbb5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb5e:{NFSU2_TR(0x4bbb5e);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb63:{NFSU2_TR(0x4bbb63);
u8 U[4];
w4(U+0,u32(0xb1000cc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb68:{NFSU2_TR(0x4bbb68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb69:{NFSU2_TR(0x4bbb69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb6eull));
TAIL_STATIC(0x537c00u,537);
}
B4bbb6e:L4bbb6e:{c.instructions+=9;NFSU2_TR(0x4bbb6e);
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
B4bbb71:{NFSU2_TR(0x4bbb71);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbb78:{NFSU2_TR(0x4bbb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbb7f:{NFSU2_TR(0x4bbb7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbb80:{NFSU2_TR(0x4bbb80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bbb81:{NFSU2_TR(0x4bbb81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bbb82:{NFSU2_TR(0x4bbb82);
__builtin_memmove((R+16),(R+20),4);
}
B4bbb84:{NFSU2_TR(0x4bbb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bbb85:{NFSU2_TR(0x4bbb85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bbb88:L4bbb88:{c.instructions+=5;NFSU2_TR(0x4bbb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbb8b:{NFSU2_TR(0x4bbb8b);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb90:{NFSU2_TR(0x4bbb90);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb95:{NFSU2_TR(0x4bbb95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbb96:{NFSU2_TR(0x4bbb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbb9bull));
TAIL_STATIC(0x537c00u,537);
}
B4bbb9b:L4bbb9b:{c.instructions+=9;NFSU2_TR(0x4bbb9b);
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
B4bbb9e:{NFSU2_TR(0x4bbb9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbba5:{NFSU2_TR(0x4bbba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbbac:{NFSU2_TR(0x4bbbac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbbad:{NFSU2_TR(0x4bbbad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bbbae:{NFSU2_TR(0x4bbbae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bbbaf:{NFSU2_TR(0x4bbbaf);
__builtin_memmove((R+16),(R+20),4);
}
B4bbbb1:{NFSU2_TR(0x4bbbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bbbb2:{NFSU2_TR(0x4bbbb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bbbb5:L4bbbb5:{c.instructions+=2;NFSU2_TR(0x4bbbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbbbb:{NFSU2_TR(0x4bbbbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbbc0ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4bbbc0:L4bbbc0:{c.instructions+=3;NFSU2_TR(0x4bbbc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbbc2:{NFSU2_TR(0x4bbbc2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbbc4:{NFSU2_TR(0x4bbbc4);
if(r1(R+518)){{goto L4bbbf3;}}
}
B4bbbc6:L4bbbc6:{c.instructions+=5;NFSU2_TR(0x4bbbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbbc9:{NFSU2_TR(0x4bbbc9);
u8 U[4];
w4(U+0,u32(0x78fea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbbce:{NFSU2_TR(0x4bbbce);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbbd3:{NFSU2_TR(0x4bbbd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbbd4:{NFSU2_TR(0x4bbbd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbbd9ull));
TAIL_STATIC(0x537c00u,537);
}
B4bbbd9:L4bbbd9:{c.instructions+=9;NFSU2_TR(0x4bbbd9);
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
B4bbbdc:{NFSU2_TR(0x4bbbdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbbe3:{NFSU2_TR(0x4bbbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbbea:{NFSU2_TR(0x4bbbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbbeb:{NFSU2_TR(0x4bbbeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bbbec:{NFSU2_TR(0x4bbbec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bbbed:{NFSU2_TR(0x4bbbed);
__builtin_memmove((R+16),(R+20),4);
}
B4bbbef:{NFSU2_TR(0x4bbbef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bbbf0:{NFSU2_TR(0x4bbbf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bbbf3:L4bbbf3:{c.instructions+=5;NFSU2_TR(0x4bbbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbbf6:{NFSU2_TR(0x4bbbf6);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbbfb:{NFSU2_TR(0x4bbbfb);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc00:{NFSU2_TR(0x4bbc00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc01:{NFSU2_TR(0x4bbc01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbc06ull));
TAIL_STATIC(0x537c00u,537);
}
B4bbc06:L4bbc06:{c.instructions+=9;NFSU2_TR(0x4bbc06);
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
B4bbc09:{NFSU2_TR(0x4bbc09);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbc10:{NFSU2_TR(0x4bbc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbc17:{NFSU2_TR(0x4bbc17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbc18:{NFSU2_TR(0x4bbc18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bbc19:{NFSU2_TR(0x4bbc19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bbc1a:{NFSU2_TR(0x4bbc1a);
__builtin_memmove((R+16),(R+20),4);
}
B4bbc1c:{NFSU2_TR(0x4bbc1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bbc1d:{NFSU2_TR(0x4bbc1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bbc20:L4bbc20:{c.instructions+=2;NFSU2_TR(0x4bbc20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbc22:{NFSU2_TR(0x4bbc22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbc5d;}}
}
B4bbc24:L4bbc24:{c.instructions+=3;NFSU2_TR(0x4bbc24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bbc2a:{NFSU2_TR(0x4bbc2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbc2c:{NFSU2_TR(0x4bbc2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbc5d;}}
}
B4bbc2e:L4bbc2e:{c.instructions+=6;NFSU2_TR(0x4bbc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbc31:{NFSU2_TR(0x4bbc31);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc33:{NFSU2_TR(0x4bbc33);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc38:{NFSU2_TR(0x4bbc38);
u8 U[4];
w4(U+0,u32(0x794d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc3d:{NFSU2_TR(0x4bbc3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc3e:{NFSU2_TR(0x4bbc3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbc43ull));
TAIL_STATIC(0x5426c0u,542);
}
B4bbc43:L4bbc43:{c.instructions+=7;NFSU2_TR(0x4bbc43);
__builtin_memmove((R+4),gp(0x7f44b8),4);
}
B4bbc49:{NFSU2_TR(0x4bbc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbc4c:{NFSU2_TR(0x4bbc4c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc4e:{NFSU2_TR(0x4bbc4e);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc53:{NFSU2_TR(0x4bbc53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc54:{NFSU2_TR(0x4bbc54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc55:{NFSU2_TR(0x4bbc55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbc5aull));
TAIL_STATIC(0x5426c0u,542);
}
B4bbc5a:L4bbc5a:{c.instructions+=1;NFSU2_TR(0x4bbc5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bbc5d:L4bbc5d:{c.instructions+=5;NFSU2_TR(0x4bbc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbc60:{NFSU2_TR(0x4bbc60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbc63:{NFSU2_TR(0x4bbc63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc64:{NFSU2_TR(0x4bbc64);
__builtin_memmove((R+4),(R+28),4);
}
B4bbc66:{NFSU2_TR(0x4bbc66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbc6bull));
TAIL_STATIC(0x51f440u,51f);
}
B4bbc6b:L4bbc6b:{c.instructions+=2;NFSU2_TR(0x4bbc6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bbc6e:{NFSU2_TR(0x4bbc6e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4bbcb8;}}
}
B4bbc70:L4bbc70:{c.instructions+=5;NFSU2_TR(0x4bbc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbc73:{NFSU2_TR(0x4bbc73);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc78:{NFSU2_TR(0x4bbc78);
u8 U[4];
w4(U+0,u32(0xb26c37aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc7d:{NFSU2_TR(0x4bbc7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc7e:{NFSU2_TR(0x4bbc7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbc83ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbc83:L4bbc83:{c.instructions+=5;NFSU2_TR(0x4bbc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbc86:{NFSU2_TR(0x4bbc86);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc8b:{NFSU2_TR(0x4bbc8b);
u8 U[4];
w4(U+0,u32(0xcc878e5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc90:{NFSU2_TR(0x4bbc90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc91:{NFSU2_TR(0x4bbc91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbc96ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbc96:L4bbc96:{c.instructions+=5;NFSU2_TR(0x4bbc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbc99:{NFSU2_TR(0x4bbc99);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbc9e:{NFSU2_TR(0x4bbc9e);
u8 U[4];
w4(U+0,u32(0x72979984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbca3:{NFSU2_TR(0x4bbca3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbca4:{NFSU2_TR(0x4bbca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbca9ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbca9:L4bbca9:{c.instructions+=3;NFSU2_TR(0x4bbca9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4bbcac:{NFSU2_TR(0x4bbcac);
__builtin_memmove((R+4),(R+24),4);
}
B4bbcae:{NFSU2_TR(0x4bbcae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbcb3ull));
TAIL_STATIC(0x49f6f0u,49f);
}
B4bbcb3:L4bbcb3:{c.instructions+=1;NFSU2_TR(0x4bbcb3);
{goto L4bbfb1;}
}
B4bbcb8:L4bbcb8:{c.instructions+=2;NFSU2_TR(0x4bbcb8);
__builtin_memmove((R+4),(R+28),4);
}
B4bbcba:{NFSU2_TR(0x4bbcba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbcbfull));
TAIL_STATIC(0x51f530u,51f);
}
B4bbcbf:L4bbcbf:{c.instructions+=3;NFSU2_TR(0x4bbcbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbcc0:{NFSU2_TR(0x4bbcc0);
__builtin_memmove((R+4),(R+28),4);
}
B4bbcc2:{NFSU2_TR(0x4bbcc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbcc7ull));
TAIL_STATIC(0x51f350u,51f);
}
B4bbcc7:L4bbcc7:{c.instructions+=5;NFSU2_TR(0x4bbcc7);
__builtin_memmove((R+28),(R+0),4);
}
B4bbcc9:{NFSU2_TR(0x4bbcc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbccc:{NFSU2_TR(0x4bbccc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4bbcce:{NFSU2_TR(0x4bbcce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bbcd1:{NFSU2_TR(0x4bbcd1);
if(r1(R+518)){{goto L4bbd05;}}
}
B4bbcd3:L4bbcd3:{c.instructions+=8;NFSU2_TR(0x4bbcd3);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B4bbcd9:{NFSU2_TR(0x4bbcd9);
__builtin_memmove((R+12),(R+0),4);
}
B4bbcdb:{NFSU2_TR(0x4bbcdb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B4bbce1:{NFSU2_TR(0x4bbce1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B4bbce3:{NFSU2_TR(0x4bbce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbce6:{NFSU2_TR(0x4bbce6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbce7:{NFSU2_TR(0x4bbce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbceb:{NFSU2_TR(0x4bbceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbcf0ull));
TAIL_STATIC(0x5120b0u,512);
}
B4bbcf0:L4bbcf0:{c.instructions+=5;NFSU2_TR(0x4bbcf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbcf1:{NFSU2_TR(0x4bbcf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbcf5:{NFSU2_TR(0x4bbcf5);
u8 U[4];
w4(U+0,u32(0xb26c37aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbcfa:{NFSU2_TR(0x4bbcfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbcfb:{NFSU2_TR(0x4bbcfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd00ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbd00:L4bbd00:{c.instructions+=2;NFSU2_TR(0x4bbd00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bbd03:{NFSU2_TR(0x4bbd03);
{goto L4bbd1b;}
}
B4bbd05:L4bbd05:{c.instructions+=5;NFSU2_TR(0x4bbd05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbd08:{NFSU2_TR(0x4bbd08);
u8 U[4];
w4(U+0,u32(0x794d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd0d:{NFSU2_TR(0x4bbd0d);
u8 U[4];
w4(U+0,u32(0xb26c37aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd12:{NFSU2_TR(0x4bbd12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd13:{NFSU2_TR(0x4bbd13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd18ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbd18:L4bbd18:{c.instructions+=1;NFSU2_TR(0x4bbd18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bbd1b:L4bbd1b:{c.instructions+=2;NFSU2_TR(0x4bbd1b);
w4(R+4,u32(0x850080ull));
}
B4bbd20:{NFSU2_TR(0x4bbd20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd25ull));
TAIL_STATIC(0x5031f0u,503);
}
B4bbd25:L4bbd25:{c.instructions+=3;NFSU2_TR(0x4bbd25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd26:{NFSU2_TR(0x4bbd26);
__builtin_memmove((R+4),(R+28),4);
}
B4bbd28:{NFSU2_TR(0x4bbd28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd2dull));
TAIL_STATIC(0x51ee20u,51e);
}
B4bbd2d:L4bbd2d:{c.instructions+=2;NFSU2_TR(0x4bbd2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbd2f:{NFSU2_TR(0x4bbd2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbe1f;}}
}
B4bbd35:L4bbd35:{c.instructions+=2;NFSU2_TR(0x4bbd35);
w4(R+4,u32(0x850080ull));
}
B4bbd3a:{NFSU2_TR(0x4bbd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd3full));
TAIL_STATIC(0x5031f0u,503);
}
B4bbd3f:L4bbd3f:{c.instructions+=4;NFSU2_TR(0x4bbd3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd40:{NFSU2_TR(0x4bbd40);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bbd44:{NFSU2_TR(0x4bbd44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd45:{NFSU2_TR(0x4bbd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd4aull));
TAIL_STATIC(0x4400d0u,440);
}
B4bbd4a:L4bbd4a:{c.instructions+=5;NFSU2_TR(0x4bbd4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bbd4d:{NFSU2_TR(0x4bbd4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bbd51:{NFSU2_TR(0x4bbd51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd52:{NFSU2_TR(0x4bbd52);
__builtin_memmove((R+4),(R+28),4);
}
B4bbd54:{NFSU2_TR(0x4bbd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd59ull));
TAIL_STATIC(0x51ee20u,51e);
}
B4bbd59:L4bbd59:{c.instructions+=2;NFSU2_TR(0x4bbd59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbd5b:{NFSU2_TR(0x4bbd5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbe1f;}}
}
B4bbd61:L4bbd61:{c.instructions+=2;NFSU2_TR(0x4bbd61);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbd63:{NFSU2_TR(0x4bbd63);
if(r1(R+518)){{goto L4bbe1f;}}
}
B4bbd69:L4bbd69:{c.instructions+=2;NFSU2_TR(0x4bbd69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bbd6c:{NFSU2_TR(0x4bbd6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd71ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4bbd71:L4bbd71:{c.instructions+=4;NFSU2_TR(0x4bbd71);
w1(R+12,u8(0x3ull));
}
B4bbd73:{NFSU2_TR(0x4bbd73);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bbd77:{NFSU2_TR(0x4bbd77);
w1(R+12,u8(u32(r1(R+12))-u32(r1(R+0))));
}
B4bbd79:{NFSU2_TR(0x4bbd79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd7eull));
TAIL_STATIC(0x40c910u,40c);
}
B4bbd7e:L4bbd7e:{c.instructions+=7;NFSU2_TR(0x4bbd7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd80:{NFSU2_TR(0x4bbd80);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bbd84:{NFSU2_TR(0x4bbd84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd85:{NFSU2_TR(0x4bbd85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbd87:{NFSU2_TR(0x4bbd87);
w4(R+4,u32(0x83a9d0ull));
}
B4bbd8c:{NFSU2_TR(0x4bbd8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x968ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bbd97:{NFSU2_TR(0x4bbd97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbd9cull));
TAIL_STATIC(0x515d00u,515);
}
B4bbd9c:L4bbd9c:{c.instructions+=2;NFSU2_TR(0x4bbd9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bbda0:{NFSU2_TR(0x4bbda0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbda5ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4bbda5:L4bbda5:{c.instructions+=8;NFSU2_TR(0x4bbda5);
w1(R+4,u8(0x3ull));
}
B4bbda7:{NFSU2_TR(0x4bbda7);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+0))));
}
B4bbda9:{NFSU2_TR(0x4bbda9);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B4bbdac:{NFSU2_TR(0x4bbdac);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B4bbdaf:{NFSU2_TR(0x4bbdaf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4bbdb1:{NFSU2_TR(0x4bbdb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B4bbdb4:{NFSU2_TR(0x4bbdb4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4bbdb7:{NFSU2_TR(0x4bbdb7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4bbe06;}}
}
B4bbdb9:L4bbdb9:{c.instructions+=1;NFSU2_TR(0x4bbdb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4bbff4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bbdc0:L4bbdc0:{c.instructions+=2;NFSU2_TR(0x4bbdc0);
u8 U[4];
w4(U+0,u32(0x1cd9fe88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdc5:{NFSU2_TR(0x4bbdc5);
{goto L4bbdef;}
}
B4bbdc7:L4bbdc7:{c.instructions+=2;NFSU2_TR(0x4bbdc7);
u8 U[4];
w4(U+0,u32(0x1a84d5e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdcc:{NFSU2_TR(0x4bbdcc);
{goto L4bbdef;}
}
B4bbdce:L4bbdce:{c.instructions+=2;NFSU2_TR(0x4bbdce);
u8 U[4];
w4(U+0,u32(0x182fad46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdd3:{NFSU2_TR(0x4bbdd3);
{goto L4bbdef;}
}
B4bbdd5:L4bbdd5:{c.instructions+=2;NFSU2_TR(0x4bbdd5);
u8 U[4];
w4(U+0,u32(0xd0942448ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdda:{NFSU2_TR(0x4bbdda);
{goto L4bbdef;}
}
B4bbddc:L4bbddc:{c.instructions+=2;NFSU2_TR(0x4bbddc);
u8 U[4];
w4(U+0,u32(0x1e8d8068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbde1:{NFSU2_TR(0x4bbde1);
{goto L4bbdef;}
}
B4bbde3:L4bbde3:{c.instructions+=2;NFSU2_TR(0x4bbde3);
u8 U[4];
w4(U+0,u32(0x6b87bd29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbde8:{NFSU2_TR(0x4bbde8);
{goto L4bbdef;}
}
B4bbdea:L4bbdea:{c.instructions+=1;NFSU2_TR(0x4bbdea);
u8 U[4];
w4(U+0,u32(0xb881f9eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdef:L4bbdef:{c.instructions+=2;NFSU2_TR(0x4bbdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bbdf2:{NFSU2_TR(0x4bbdf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbdf7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bbdf7:L4bbdf7:{c.instructions+=4;NFSU2_TR(0x4bbdf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdf8:{NFSU2_TR(0x4bbdf8);
u8 U[4];
w4(U+0,u32(0xcc878e5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdfd:{NFSU2_TR(0x4bbdfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbdfe:{NFSU2_TR(0x4bbdfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbe03ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbe03:L4bbe03:{c.instructions+=1;NFSU2_TR(0x4bbe03);
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
B4bbe06:L4bbe06:{c.instructions+=3;NFSU2_TR(0x4bbe06);
u8 U[4];
w4(U+0,u32(u32(u32(0x3e4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bbe0d:{NFSU2_TR(0x4bbe0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x95cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bbe18:{NFSU2_TR(0x4bbe18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbe1dull));
TAIL_STATIC(0x4022c0u,402);
}
B4bbe1d:L4bbe1d:{c.instructions+=1;NFSU2_TR(0x4bbe1d);
{goto L4bbe6e;}
}
B4bbe1f:L4bbe1f:{c.instructions+=5;NFSU2_TR(0x4bbe1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbe22:{NFSU2_TR(0x4bbe22);
u8 U[4];
w4(U+0,u32(0x794d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe27:{NFSU2_TR(0x4bbe27);
u8 U[4];
w4(U+0,u32(0xcc878e5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe2c:{NFSU2_TR(0x4bbe2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe2d:{NFSU2_TR(0x4bbe2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbe32ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbe32:L4bbe32:{c.instructions+=5;NFSU2_TR(0x4bbe32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbe35:{NFSU2_TR(0x4bbe35);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe3a:{NFSU2_TR(0x4bbe3a);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe3f:{NFSU2_TR(0x4bbe3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe40:{NFSU2_TR(0x4bbe40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbe45ull));
TAIL_STATIC(0x537cc0u,537);
}
B4bbe45:L4bbe45:{c.instructions+=3;NFSU2_TR(0x4bbe45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bbe48:{NFSU2_TR(0x4bbe48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbe4a:{NFSU2_TR(0x4bbe4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbe6e;}}
}
B4bbe4c:L4bbe4c:{c.instructions+=3;NFSU2_TR(0x4bbe4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bbe52:{NFSU2_TR(0x4bbe52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bbe54:{NFSU2_TR(0x4bbe54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbe6e;}}
}
B4bbe56:L4bbe56:{c.instructions+=6;NFSU2_TR(0x4bbe56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbe59:{NFSU2_TR(0x4bbe59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe5b:{NFSU2_TR(0x4bbe5b);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe60:{NFSU2_TR(0x4bbe60);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe65:{NFSU2_TR(0x4bbe65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe66:{NFSU2_TR(0x4bbe66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbe6bull));
TAIL_STATIC(0x537c00u,537);
}
B4bbe6b:L4bbe6b:{c.instructions+=1;NFSU2_TR(0x4bbe6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bbe6e:L4bbe6e:{c.instructions+=2;NFSU2_TR(0x4bbe6e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bbe78:{NFSU2_TR(0x4bbe78);
if(r1(R+518)){{goto L4bbf30;}}
}
B4bbe7e:L4bbe7e:{c.instructions+=2;NFSU2_TR(0x4bbe7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bbe85:{NFSU2_TR(0x4bbe85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbea2;}}
}
B4bbe87:L4bbe87:{c.instructions+=5;NFSU2_TR(0x4bbe87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbe8a:{NFSU2_TR(0x4bbe8a);
u8 U[4];
w4(U+0,u32(0x794d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe8f:{NFSU2_TR(0x4bbe8f);
u8 U[4];
w4(U+0,u32(0x72979984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe94:{NFSU2_TR(0x4bbe94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbe95:{NFSU2_TR(0x4bbe95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbe9aull));
TAIL_STATIC(0x537b80u,537);
}
B4bbe9a:L4bbe9a:{c.instructions+=2;NFSU2_TR(0x4bbe9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bbe9d:{NFSU2_TR(0x4bbe9d);
{goto L4bbf4c;}
}
B4bbea2:L4bbea2:{c.instructions+=3;NFSU2_TR(0x4bbea2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbea4:{NFSU2_TR(0x4bbea4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbea6:{NFSU2_TR(0x4bbea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbeabull));
TAIL_STATIC(0x58f740u,58f);
}
B4bbeab:L4bbeab:{c.instructions+=3;NFSU2_TR(0x4bbeab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bbeae:{NFSU2_TR(0x4bbeae);
__builtin_memmove((R+4),(R+0),4);
}
B4bbeb0:{NFSU2_TR(0x4bbeb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbeb5ull));
TAIL_STATIC(0x5829c0u,582);
}
B4bbeb5:L4bbeb5:{c.instructions+=3;NFSU2_TR(0x4bbeb5);
__builtin_memmove((R+12),(R+0),4);
}
B4bbeb7:{NFSU2_TR(0x4bbeb7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bbeba:{NFSU2_TR(0x4bbeba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bbf30;}}
}
B4bbebc:L4bbebc:{c.instructions+=2;NFSU2_TR(0x4bbebc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bbebf:{NFSU2_TR(0x4bbebf);
if(r1(R+518)){{goto L4bbf30;}}
}
B4bbec1:L4bbec1:{c.instructions+=1;NFSU2_TR(0x4bbec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbec6ull));
TAIL_STATIC(0x58f230u,58f);
}
B4bbec6:L4bbec6:{c.instructions+=4;NFSU2_TR(0x4bbec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bbecc:{NFSU2_TR(0x4bbecc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbecd:{NFSU2_TR(0x4bbecd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbece:{NFSU2_TR(0x4bbece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbed3ull));
TAIL_STATIC(0x58ce30u,58c);
}
B4bbed3:L4bbed3:{c.instructions+=10;NFSU2_TR(0x4bbed3);
__builtin_memmove((R+12),(R+0),4);
}
B4bbed5:{NFSU2_TR(0x4bbed5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bbed7:{NFSU2_TR(0x4bbed7);
u8 U[8];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbedb:{NFSU2_TR(0x4bbedb);
u8 U[8];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbedf:{NFSU2_TR(0x4bbedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbee3:{NFSU2_TR(0x4bbee3);
u8 U[6];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4bbee8:{NFSU2_TR(0x4bbee8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbee9:{NFSU2_TR(0x4bbee9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bbeee:{NFSU2_TR(0x4bbeee);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4bbef2:{NFSU2_TR(0x4bbef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbef7ull));
TAIL_STATIC(0x5825e0u,582);
}
B4bbef7:L4bbef7:{c.instructions+=4;NFSU2_TR(0x4bbef7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bbefa:{NFSU2_TR(0x4bbefa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbefb:{NFSU2_TR(0x4bbefb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbefc:{NFSU2_TR(0x4bbefc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf01ull));
TAIL_STATIC(0x5826b0u,582);
}
B4bbf01:L4bbf01:{c.instructions+=8;NFSU2_TR(0x4bbf01);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B4bbf04:{NFSU2_TR(0x4bbf04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bbf07:{NFSU2_TR(0x4bbf07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4bbf08:{NFSU2_TR(0x4bbf08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf09:{NFSU2_TR(0x4bbf09);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bbf0d:{NFSU2_TR(0x4bbf0d);
u8 U[4];
w4(U+0,u32(0x794d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf12:{NFSU2_TR(0x4bbf12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf13:{NFSU2_TR(0x4bbf13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf18ull));
TAIL_STATIC(0x4400d0u,440);
}
B4bbf18:L4bbf18:{c.instructions+=6;NFSU2_TR(0x4bbf18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbf1b:{NFSU2_TR(0x4bbf1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bbf1f:{NFSU2_TR(0x4bbf1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf20:{NFSU2_TR(0x4bbf20);
u8 U[4];
w4(U+0,u32(0x72979984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf25:{NFSU2_TR(0x4bbf25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf26:{NFSU2_TR(0x4bbf26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf2bull));
TAIL_STATIC(0x537b80u,537);
}
B4bbf2b:L4bbf2b:{c.instructions+=2;NFSU2_TR(0x4bbf2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bbf2e:{NFSU2_TR(0x4bbf2e);
{goto L4bbf4c;}
}
B4bbf30:L4bbf30:{c.instructions+=3;NFSU2_TR(0x4bbf30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bbf33:{NFSU2_TR(0x4bbf33);
u8 U[4];
w4(U+0,u32(0x7f2f7ad6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf38:{NFSU2_TR(0x4bbf38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf3dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bbf3d:L4bbf3d:{c.instructions+=4;NFSU2_TR(0x4bbf3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf3e:{NFSU2_TR(0x4bbf3e);
u8 U[4];
w4(U+0,u32(0x72979984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf43:{NFSU2_TR(0x4bbf43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf44:{NFSU2_TR(0x4bbf44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf49ull));
TAIL_STATIC(0x537b80u,537);
}
B4bbf49:L4bbf49:{c.instructions+=1;NFSU2_TR(0x4bbf49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bbf4c:L4bbf4c:{c.instructions+=2;NFSU2_TR(0x4bbf4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bbf56:{NFSU2_TR(0x4bbf56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bbf61;}}
}
B4bbf58:L4bbf58:{c.instructions+=2;NFSU2_TR(0x4bbf58);
__builtin_memmove((R+4),(R+24),4);
}
B4bbf5a:{NFSU2_TR(0x4bbf5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf5full));
TAIL_STATIC(0x49f400u,49f);
}
B4bbf5f:L4bbf5f:{c.instructions+=1;NFSU2_TR(0x4bbf5f);
{goto L4bbfa9;}
}
B4bbf61:L4bbf61:{c.instructions+=6;NFSU2_TR(0x4bbf61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf63:{NFSU2_TR(0x4bbf63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf65:{NFSU2_TR(0x4bbf65);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bbf6b:{NFSU2_TR(0x4bbf6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf6c:{NFSU2_TR(0x4bbf6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbf6e:{NFSU2_TR(0x4bbf6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf73ull));
TAIL_STATIC(0x58f740u,58f);
}
B4bbf73:L4bbf73:{c.instructions+=3;NFSU2_TR(0x4bbf73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bbf76:{NFSU2_TR(0x4bbf76);
__builtin_memmove((R+4),(R+0),4);
}
B4bbf78:{NFSU2_TR(0x4bbf78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf7dull));
TAIL_STATIC(0x58da10u,58d);
}
B4bbf7d:L4bbf7d:{c.instructions+=3;NFSU2_TR(0x4bbf7d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4bbf7f:{NFSU2_TR(0x4bbf7f);
__builtin_memmove((R+4),(R+24),4);
}
B4bbf81:{NFSU2_TR(0x4bbf81);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4bbf8a;}}
}
B4bbf83:L4bbf83:{c.instructions+=1;NFSU2_TR(0x4bbf83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf88ull));
TAIL_STATIC(0x49f660u,49f);
}
B4bbf88:L4bbf88:{c.instructions+=1;NFSU2_TR(0x4bbf88);
{goto L4bbfa9;}
}
B4bbf8a:L4bbf8a:{c.instructions+=2;NFSU2_TR(0x4bbf8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bbf8d:{NFSU2_TR(0x4bbf8d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bbf96;}}
}
B4bbf8f:L4bbf8f:{c.instructions+=1;NFSU2_TR(0x4bbf8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbf94ull));
TAIL_STATIC(0x49f400u,49f);
}
B4bbf94:L4bbf94:{c.instructions+=1;NFSU2_TR(0x4bbf94);
{goto L4bbfa9;}
}
B4bbf96:L4bbf96:{c.instructions+=2;NFSU2_TR(0x4bbf96);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x96ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x96ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbf9b:{NFSU2_TR(0x4bbf9b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4bbfa4;}}
}
B4bbf9d:L4bbf9d:{c.instructions+=1;NFSU2_TR(0x4bbf9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbfa2ull));
TAIL_STATIC(0x49f490u,49f);
}
B4bbfa2:L4bbfa2:{c.instructions+=1;NFSU2_TR(0x4bbfa2);
{goto L4bbfa9;}
}
B4bbfa4:L4bbfa4:{c.instructions+=1;NFSU2_TR(0x4bbfa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbfa9ull));
TAIL_STATIC(0x49f570u,49f);
}
B4bbfa9:L4bbfa9:{c.instructions+=3;NFSU2_TR(0x4bbfa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbfaa:{NFSU2_TR(0x4bbfaa);
__builtin_memmove((R+4),(R+24),4);
}
B4bbfac:{NFSU2_TR(0x4bbfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbfb1ull));
TAIL_STATIC(0x49f270u,49f);
}
B4bbfb1:L4bbfb1:{c.instructions+=4;NFSU2_TR(0x4bbfb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbfb4:{NFSU2_TR(0x4bbfb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bbfb6:{NFSU2_TR(0x4bbfb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbfb9:{NFSU2_TR(0x4bbfb9);
if(r1(R+518)){{goto L4bbfc9;}}
}
B4bbfbb:L4bbfbb:{c.instructions+=4;NFSU2_TR(0x4bbfbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bbfbe:{NFSU2_TR(0x4bbfbe);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbfc3:{NFSU2_TR(0x4bbfc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbfc4:{NFSU2_TR(0x4bbfc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbfc9ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4bbfc9:L4bbfc9:{c.instructions+=3;NFSU2_TR(0x4bbfc9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbfcb:{NFSU2_TR(0x4bbfcb);
__builtin_memmove((R+4),(R+28),4);
}
B4bbfcd:{NFSU2_TR(0x4bbfcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbfd2ull));
TAIL_STATIC(0x538500u,538);
}
B4bbfd2:L4bbfd2:{c.instructions+=3;NFSU2_TR(0x4bbfd2);
__builtin_memmove((R+4),(R+24),4);
}
B4bbfd4:{NFSU2_TR(0x4bbfd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bbfd6:{NFSU2_TR(0x4bbfd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bbfdbull));
TAIL_STATIC(0x49efe0u,49e);
}
B4bbfdb:L4bbfdb:{c.instructions+=8;NFSU2_TR(0x4bbfdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bbfe2:{NFSU2_TR(0x4bbfe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bbfe3:{NFSU2_TR(0x4bbfe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bbfe4:{NFSU2_TR(0x4bbfe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bbfeb:{NFSU2_TR(0x4bbfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bbfec:{NFSU2_TR(0x4bbfec);
__builtin_memmove((R+16),(R+20),4);
}
B4bbfee:{NFSU2_TR(0x4bbfee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bbfef:{NFSU2_TR(0x4bbfef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4bb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
