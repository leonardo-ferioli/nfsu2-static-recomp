#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5c6(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5cb(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5cc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5cc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5cc(u8* __restrict R,Cpu& c);
u32 page_5cc(Cpu& c){return body_5cc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5cc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5cc000:goto L5cc000;
case 0x5cc002:c.instructions+=2;goto B5cc002;
case 0x5cc004:c.instructions+=1;goto B5cc004;
case 0x5cc007:goto L5cc007;
case 0x5cc00a:c.instructions+=5;goto B5cc00a;
case 0x5cc00f:c.instructions+=4;goto B5cc00f;
case 0x5cc011:c.instructions+=3;goto B5cc011;
case 0x5cc012:c.instructions+=2;goto B5cc012;
case 0x5cc013:c.instructions+=1;goto B5cc013;
case 0x5cc019:goto L5cc019;
case 0x5cc01c:c.instructions+=6;goto B5cc01c;
case 0x5cc01e:c.instructions+=5;goto B5cc01e;
case 0x5cc01f:c.instructions+=4;goto B5cc01f;
case 0x5cc023:c.instructions+=3;goto B5cc023;
case 0x5cc024:c.instructions+=2;goto B5cc024;
case 0x5cc025:c.instructions+=1;goto B5cc025;
case 0x5cc02b:goto L5cc02b;
case 0x5cc032:c.instructions+=2;goto B5cc032;
case 0x5cc033:c.instructions+=1;goto B5cc033;
case 0x5cc038:goto L5cc038;
case 0x5cc03a:c.instructions+=4;goto B5cc03a;
case 0x5cc03c:c.instructions+=3;goto B5cc03c;
case 0x5cc03f:c.instructions+=2;goto B5cc03f;
case 0x5cc044:c.instructions+=1;goto B5cc044;
case 0x5cc04b:goto L5cc04b;
case 0x5cc04d:goto L5cc04d;
case 0x5cc050:c.instructions+=5;goto B5cc050;
case 0x5cc051:c.instructions+=4;goto B5cc051;
case 0x5cc052:c.instructions+=3;goto B5cc052;
case 0x5cc057:c.instructions+=2;goto B5cc057;
case 0x5cc058:c.instructions+=1;goto B5cc058;
case 0x5cc05d:goto L5cc05d;
case 0x5cc061:c.instructions+=9;goto B5cc061;
case 0x5cc063:c.instructions+=8;goto B5cc063;
case 0x5cc066:c.instructions+=7;goto B5cc066;
case 0x5cc067:c.instructions+=6;goto B5cc067;
case 0x5cc068:c.instructions+=5;goto B5cc068;
case 0x5cc06d:c.instructions+=4;goto B5cc06d;
case 0x5cc06f:c.instructions+=3;goto B5cc06f;
case 0x5cc074:c.instructions+=2;goto B5cc074;
case 0x5cc07b:c.instructions+=1;goto B5cc07b;
case 0x5cc07c:goto L5cc07c;
case 0x5cc07e:goto L5cc07e;
case 0x5cc083:goto L5cc083;
case 0x5cc08a:c.instructions+=3;goto B5cc08a;
case 0x5cc08c:c.instructions+=2;goto B5cc08c;
case 0x5cc08d:c.instructions+=1;goto B5cc08d;
case 0x5cc092:goto L5cc092;
case 0x5cc097:c.instructions+=6;goto B5cc097;
case 0x5cc099:c.instructions+=5;goto B5cc099;
case 0x5cc09c:c.instructions+=4;goto B5cc09c;
case 0x5cc09e:c.instructions+=3;goto B5cc09e;
case 0x5cc0a0:c.instructions+=2;goto B5cc0a0;
case 0x5cc0a1:c.instructions+=1;goto B5cc0a1;
case 0x5cc0a7:goto L5cc0a7;
case 0x5cc0ac:c.instructions+=5;goto B5cc0ac;
case 0x5cc0ae:c.instructions+=4;goto B5cc0ae;
case 0x5cc0b0:c.instructions+=3;goto B5cc0b0;
case 0x5cc0b2:c.instructions+=2;goto B5cc0b2;
case 0x5cc0b3:c.instructions+=1;goto B5cc0b3;
case 0x5cc0b9:goto L5cc0b9;
case 0x5cc0bc:c.instructions+=2;goto B5cc0bc;
case 0x5cc0be:c.instructions+=1;goto B5cc0be;
case 0x5cc0c0:goto L5cc0c0;
case 0x5cc0c5:goto L5cc0c5;
case 0x5cc0ca:goto L5cc0ca;
case 0x5cc0cf:c.instructions+=2;goto B5cc0cf;
case 0x5cc0d1:c.instructions+=1;goto B5cc0d1;
case 0x5cc0d7:goto L5cc0d7;
case 0x5cc0d9:c.instructions+=1;goto B5cc0d9;
case 0x5cc0de:goto L5cc0de;
case 0x5cc0e1:c.instructions+=3;goto B5cc0e1;
case 0x5cc0e4:c.instructions+=2;goto B5cc0e4;
case 0x5cc0e6:c.instructions+=1;goto B5cc0e6;
case 0x5cc0ec:goto L5cc0ec;
case 0x5cc0f0:c.instructions+=1;goto B5cc0f0;
case 0x5cc0f5:goto L5cc0f5;
case 0x5cc0fd:c.instructions+=9;goto B5cc0fd;
case 0x5cc105:c.instructions+=8;goto B5cc105;
case 0x5cc10d:c.instructions+=7;goto B5cc10d;
case 0x5cc115:c.instructions+=6;goto B5cc115;
case 0x5cc11d:c.instructions+=5;goto B5cc11d;
case 0x5cc125:c.instructions+=4;goto B5cc125;
case 0x5cc12d:c.instructions+=3;goto B5cc12d;
case 0x5cc135:c.instructions+=2;goto B5cc135;
case 0x5cc137:c.instructions+=1;goto B5cc137;
case 0x5cc140:goto L5cc140;
case 0x5cc147:c.instructions+=2;goto B5cc147;
case 0x5cc14c:c.instructions+=1;goto B5cc14c;
case 0x5cc150:goto L5cc150;
case 0x5cc153:c.instructions+=3;goto B5cc153;
case 0x5cc156:c.instructions+=2;goto B5cc156;
case 0x5cc157:c.instructions+=1;goto B5cc157;
case 0x5cc159:goto L5cc159;
case 0x5cc15a:c.instructions+=2;goto B5cc15a;
case 0x5cc15d:c.instructions+=1;goto B5cc15d;
case 0x5cc15f:goto L5cc15f;
case 0x5cc165:c.instructions+=8;goto B5cc165;
case 0x5cc168:c.instructions+=7;goto B5cc168;
case 0x5cc16a:c.instructions+=6;goto B5cc16a;
case 0x5cc16b:c.instructions+=5;goto B5cc16b;
case 0x5cc16e:c.instructions+=4;goto B5cc16e;
case 0x5cc174:c.instructions+=3;goto B5cc174;
case 0x5cc175:c.instructions+=2;goto B5cc175;
case 0x5cc176:c.instructions+=1;goto B5cc176;
case 0x5cc17c:goto L5cc17c;
case 0x5cc181:c.instructions+=6;goto B5cc181;
case 0x5cc183:c.instructions+=5;goto B5cc183;
case 0x5cc185:c.instructions+=4;goto B5cc185;
case 0x5cc187:c.instructions+=3;goto B5cc187;
case 0x5cc189:c.instructions+=2;goto B5cc189;
case 0x5cc18a:c.instructions+=1;goto B5cc18a;
case 0x5cc190:goto L5cc190;
case 0x5cc195:c.instructions+=6;goto B5cc195;
case 0x5cc197:c.instructions+=5;goto B5cc197;
case 0x5cc199:c.instructions+=4;goto B5cc199;
case 0x5cc19b:c.instructions+=3;goto B5cc19b;
case 0x5cc19d:c.instructions+=2;goto B5cc19d;
case 0x5cc19e:c.instructions+=1;goto B5cc19e;
case 0x5cc1a4:goto L5cc1a4;
case 0x5cc1a6:c.instructions+=2;goto B5cc1a6;
case 0x5cc1a8:c.instructions+=1;goto B5cc1a8;
case 0x5cc1ad:goto L5cc1ad;
case 0x5cc1af:c.instructions+=3;goto B5cc1af;
case 0x5cc1b1:c.instructions+=2;goto B5cc1b1;
case 0x5cc1b3:c.instructions+=1;goto B5cc1b3;
case 0x5cc1b8:goto L5cc1b8;
case 0x5cc1bd:goto L5cc1bd;
case 0x5cc1bf:c.instructions+=4;goto B5cc1bf;
case 0x5cc1c3:c.instructions+=3;goto B5cc1c3;
case 0x5cc1c5:c.instructions+=2;goto B5cc1c5;
case 0x5cc1c6:c.instructions+=1;goto B5cc1c6;
case 0x5cc1cb:goto L5cc1cb;
case 0x5cc1d0:c.instructions+=7;goto B5cc1d0;
case 0x5cc1d2:c.instructions+=6;goto B5cc1d2;
case 0x5cc1d5:c.instructions+=5;goto B5cc1d5;
case 0x5cc1d7:c.instructions+=4;goto B5cc1d7;
case 0x5cc1d9:c.instructions+=3;goto B5cc1d9;
case 0x5cc1db:c.instructions+=2;goto B5cc1db;
case 0x5cc1dc:c.instructions+=1;goto B5cc1dc;
case 0x5cc1e2:goto L5cc1e2;
case 0x5cc1e7:c.instructions+=6;goto B5cc1e7;
case 0x5cc1e9:c.instructions+=5;goto B5cc1e9;
case 0x5cc1eb:c.instructions+=4;goto B5cc1eb;
case 0x5cc1ed:c.instructions+=3;goto B5cc1ed;
case 0x5cc1ef:c.instructions+=2;goto B5cc1ef;
case 0x5cc1f0:c.instructions+=1;goto B5cc1f0;
case 0x5cc1f6:goto L5cc1f6;
case 0x5cc1fb:goto L5cc1fb;
case 0x5cc200:goto L5cc200;
case 0x5cc202:c.instructions+=2;goto B5cc202;
case 0x5cc204:c.instructions+=1;goto B5cc204;
case 0x5cc207:goto L5cc207;
case 0x5cc20a:c.instructions+=3;goto B5cc20a;
case 0x5cc20c:c.instructions+=2;goto B5cc20c;
case 0x5cc20d:c.instructions+=1;goto B5cc20d;
case 0x5cc213:goto L5cc213;
case 0x5cc218:c.instructions+=6;goto B5cc218;
case 0x5cc21a:c.instructions+=5;goto B5cc21a;
case 0x5cc21c:c.instructions+=4;goto B5cc21c;
case 0x5cc226:c.instructions+=3;goto B5cc226;
case 0x5cc228:c.instructions+=2;goto B5cc228;
case 0x5cc229:c.instructions+=1;goto B5cc229;
case 0x5cc22f:goto L5cc22f;
case 0x5cc234:c.instructions+=5;goto B5cc234;
case 0x5cc236:c.instructions+=4;goto B5cc236;
case 0x5cc238:c.instructions+=3;goto B5cc238;
case 0x5cc23a:c.instructions+=2;goto B5cc23a;
case 0x5cc23b:c.instructions+=1;goto B5cc23b;
case 0x5cc241:goto L5cc241;
case 0x5cc242:c.instructions+=5;goto B5cc242;
case 0x5cc243:c.instructions+=4;goto B5cc243;
case 0x5cc244:c.instructions+=3;goto B5cc244;
case 0x5cc246:c.instructions+=2;goto B5cc246;
case 0x5cc247:c.instructions+=1;goto B5cc247;
case 0x5cc250:goto L5cc250;
case 0x5cc253:c.instructions+=3;goto B5cc253;
case 0x5cc258:c.instructions+=2;goto B5cc258;
case 0x5cc25a:c.instructions+=1;goto B5cc25a;
case 0x5cc25c:goto L5cc25c;
case 0x5cc261:c.instructions+=2;goto B5cc261;
case 0x5cc263:c.instructions+=1;goto B5cc263;
case 0x5cc265:goto L5cc265;
case 0x5cc267:c.instructions+=2;goto B5cc267;
case 0x5cc268:c.instructions+=1;goto B5cc268;
case 0x5cc26b:goto L5cc26b;
case 0x5cc272:goto L5cc272;
case 0x5cc277:c.instructions+=1;goto B5cc277;
case 0x5cc280:goto L5cc280;
case 0x5cc283:c.instructions+=15;goto B5cc283;
case 0x5cc287:c.instructions+=14;goto B5cc287;
case 0x5cc288:c.instructions+=13;goto B5cc288;
case 0x5cc289:c.instructions+=12;goto B5cc289;
case 0x5cc28a:c.instructions+=11;goto B5cc28a;
case 0x5cc28c:c.instructions+=10;goto B5cc28c;
case 0x5cc28f:c.instructions+=9;goto B5cc28f;
case 0x5cc292:c.instructions+=8;goto B5cc292;
case 0x5cc296:c.instructions+=7;goto B5cc296;
case 0x5cc297:c.instructions+=6;goto B5cc297;
case 0x5cc299:c.instructions+=5;goto B5cc299;
case 0x5cc29b:c.instructions+=4;goto B5cc29b;
case 0x5cc29d:c.instructions+=3;goto B5cc29d;
case 0x5cc2a1:c.instructions+=2;goto B5cc2a1;
case 0x5cc2a5:c.instructions+=1;goto B5cc2a5;
case 0x5cc2ab:goto L5cc2ab;
case 0x5cc2ad:goto L5cc2ad;
case 0x5cc2af:c.instructions+=1;goto B5cc2af;
case 0x5cc2b0:goto L5cc2b0;
case 0x5cc2b3:c.instructions+=2;goto B5cc2b3;
case 0x5cc2b8:c.instructions+=1;goto B5cc2b8;
case 0x5cc2ba:goto L5cc2ba;
case 0x5cc2bd:c.instructions+=8;goto B5cc2bd;
case 0x5cc2c0:c.instructions+=7;goto B5cc2c0;
case 0x5cc2c2:c.instructions+=6;goto B5cc2c2;
case 0x5cc2c7:c.instructions+=5;goto B5cc2c7;
case 0x5cc2c9:c.instructions+=4;goto B5cc2c9;
case 0x5cc2cf:c.instructions+=3;goto B5cc2cf;
case 0x5cc2d2:c.instructions+=2;goto B5cc2d2;
case 0x5cc2d8:c.instructions+=1;goto B5cc2d8;
case 0x5cc2dd:goto L5cc2dd;
case 0x5cc2e2:c.instructions+=1;goto B5cc2e2;
case 0x5cc2e4:goto L5cc2e4;
case 0x5cc2e6:c.instructions+=4;goto B5cc2e6;
case 0x5cc2e9:c.instructions+=3;goto B5cc2e9;
case 0x5cc2ec:c.instructions+=2;goto B5cc2ec;
case 0x5cc2ef:c.instructions+=1;goto B5cc2ef;
case 0x5cc2f4:goto L5cc2f4;
case 0x5cc2f9:c.instructions+=1;goto B5cc2f9;
case 0x5cc2fb:goto L5cc2fb;
case 0x5cc2fd:c.instructions+=12;goto B5cc2fd;
case 0x5cc300:c.instructions+=11;goto B5cc300;
case 0x5cc302:c.instructions+=10;goto B5cc302;
case 0x5cc305:c.instructions+=9;goto B5cc305;
case 0x5cc308:c.instructions+=8;goto B5cc308;
case 0x5cc30b:c.instructions+=7;goto B5cc30b;
case 0x5cc30e:c.instructions+=6;goto B5cc30e;
case 0x5cc310:c.instructions+=5;goto B5cc310;
case 0x5cc314:c.instructions+=4;goto B5cc314;
case 0x5cc315:c.instructions+=3;goto B5cc315;
case 0x5cc317:c.instructions+=2;goto B5cc317;
case 0x5cc31a:c.instructions+=1;goto B5cc31a;
case 0x5cc31f:goto L5cc31f;
case 0x5cc322:c.instructions+=2;goto B5cc322;
case 0x5cc324:c.instructions+=1;goto B5cc324;
case 0x5cc32a:goto L5cc32a;
case 0x5cc330:c.instructions+=10;goto B5cc330;
case 0x5cc332:c.instructions+=9;goto B5cc332;
case 0x5cc334:c.instructions+=8;goto B5cc334;
case 0x5cc337:c.instructions+=7;goto B5cc337;
case 0x5cc338:c.instructions+=6;goto B5cc338;
case 0x5cc33a:c.instructions+=5;goto B5cc33a;
case 0x5cc33c:c.instructions+=4;goto B5cc33c;
case 0x5cc33e:c.instructions+=3;goto B5cc33e;
case 0x5cc33f:c.instructions+=2;goto B5cc33f;
case 0x5cc340:c.instructions+=1;goto B5cc340;
case 0x5cc343:goto L5cc343;
case 0x5cc345:c.instructions+=8;goto B5cc345;
case 0x5cc347:c.instructions+=7;goto B5cc347;
case 0x5cc349:c.instructions+=6;goto B5cc349;
case 0x5cc34d:c.instructions+=5;goto B5cc34d;
case 0x5cc34e:c.instructions+=4;goto B5cc34e;
case 0x5cc350:c.instructions+=3;goto B5cc350;
case 0x5cc352:c.instructions+=2;goto B5cc352;
case 0x5cc353:c.instructions+=1;goto B5cc353;
case 0x5cc356:goto L5cc356;
case 0x5cc359:c.instructions+=4;goto B5cc359;
case 0x5cc35c:c.instructions+=3;goto B5cc35c;
case 0x5cc360:c.instructions+=2;goto B5cc360;
case 0x5cc362:c.instructions+=1;goto B5cc362;
case 0x5cc365:goto L5cc365;
case 0x5cc367:goto L5cc367;
case 0x5cc369:c.instructions+=1;goto B5cc369;
case 0x5cc36c:goto L5cc36c;
case 0x5cc36e:goto L5cc36e;
case 0x5cc371:c.instructions+=1;goto B5cc371;
case 0x5cc376:goto L5cc376;
case 0x5cc37b:c.instructions+=1;goto B5cc37b;
case 0x5cc381:goto L5cc381;
case 0x5cc384:c.instructions+=14;goto B5cc384;
case 0x5cc386:c.instructions+=13;goto B5cc386;
case 0x5cc38c:c.instructions+=12;goto B5cc38c;
case 0x5cc38e:c.instructions+=11;goto B5cc38e;
case 0x5cc391:c.instructions+=10;goto B5cc391;
case 0x5cc394:c.instructions+=9;goto B5cc394;
case 0x5cc397:c.instructions+=8;goto B5cc397;
case 0x5cc39a:c.instructions+=7;goto B5cc39a;
case 0x5cc39d:c.instructions+=6;goto B5cc39d;
case 0x5cc39f:c.instructions+=5;goto B5cc39f;
case 0x5cc3a2:c.instructions+=4;goto B5cc3a2;
case 0x5cc3a4:c.instructions+=3;goto B5cc3a4;
case 0x5cc3a8:c.instructions+=2;goto B5cc3a8;
case 0x5cc3ab:c.instructions+=1;goto B5cc3ab;
case 0x5cc3b1:goto L5cc3b1;
case 0x5cc3b6:c.instructions+=2;goto B5cc3b6;
case 0x5cc3b8:c.instructions+=1;goto B5cc3b8;
case 0x5cc3ba:goto L5cc3ba;
case 0x5cc3bd:c.instructions+=1;goto B5cc3bd;
case 0x5cc3bf:goto L5cc3bf;
case 0x5cc3c2:c.instructions+=2;goto B5cc3c2;
case 0x5cc3c3:c.instructions+=1;goto B5cc3c3;
case 0x5cc3c8:goto L5cc3c8;
case 0x5cc3cb:c.instructions+=2;goto B5cc3cb;
case 0x5cc3ce:c.instructions+=1;goto B5cc3ce;
case 0x5cc3d0:goto L5cc3d0;
case 0x5cc3d7:c.instructions+=1;goto B5cc3d7;
case 0x5cc3d9:goto L5cc3d9;
case 0x5cc3de:c.instructions+=10;goto B5cc3de;
case 0x5cc3e0:c.instructions+=9;goto B5cc3e0;
case 0x5cc3e2:c.instructions+=8;goto B5cc3e2;
case 0x5cc3e5:c.instructions+=7;goto B5cc3e5;
case 0x5cc3e6:c.instructions+=6;goto B5cc3e6;
case 0x5cc3e8:c.instructions+=5;goto B5cc3e8;
case 0x5cc3ea:c.instructions+=4;goto B5cc3ea;
case 0x5cc3ec:c.instructions+=3;goto B5cc3ec;
case 0x5cc3ed:c.instructions+=2;goto B5cc3ed;
case 0x5cc3ee:c.instructions+=1;goto B5cc3ee;
case 0x5cc3f1:goto L5cc3f1;
case 0x5cc3f3:c.instructions+=9;goto B5cc3f3;
case 0x5cc3f5:c.instructions+=8;goto B5cc3f5;
case 0x5cc3f9:c.instructions+=7;goto B5cc3f9;
case 0x5cc3fa:c.instructions+=6;goto B5cc3fa;
case 0x5cc3fc:c.instructions+=5;goto B5cc3fc;
case 0x5cc3fe:c.instructions+=4;goto B5cc3fe;
case 0x5cc405:c.instructions+=3;goto B5cc405;
case 0x5cc407:c.instructions+=2;goto B5cc407;
case 0x5cc408:c.instructions+=1;goto B5cc408;
case 0x5cc40b:goto L5cc40b;
case 0x5cc40e:c.instructions+=4;goto B5cc40e;
case 0x5cc411:c.instructions+=3;goto B5cc411;
case 0x5cc415:c.instructions+=2;goto B5cc415;
case 0x5cc417:c.instructions+=1;goto B5cc417;
case 0x5cc41a:goto L5cc41a;
case 0x5cc41c:goto L5cc41c;
case 0x5cc41e:c.instructions+=1;goto B5cc41e;
case 0x5cc421:goto L5cc421;
case 0x5cc423:goto L5cc423;
case 0x5cc426:goto L5cc426;
case 0x5cc428:c.instructions+=2;goto B5cc428;
case 0x5cc429:c.instructions+=1;goto B5cc429;
case 0x5cc42c:goto L5cc42c;
case 0x5cc430:goto L5cc430;
case 0x5cc433:c.instructions+=4;goto B5cc433;
case 0x5cc437:c.instructions+=3;goto B5cc437;
case 0x5cc43b:c.instructions+=2;goto B5cc43b;
case 0x5cc43d:c.instructions+=1;goto B5cc43d;
case 0x5cc443:goto L5cc443;
case 0x5cc444:c.instructions+=6;goto B5cc444;
case 0x5cc445:c.instructions+=5;goto B5cc445;
case 0x5cc446:c.instructions+=4;goto B5cc446;
case 0x5cc44b:c.instructions+=3;goto B5cc44b;
case 0x5cc44c:c.instructions+=2;goto B5cc44c;
case 0x5cc44f:c.instructions+=1;goto B5cc44f;
case 0x5cc460:goto L5cc460;
case 0x5cc461:c.instructions+=7;goto B5cc461;
case 0x5cc463:c.instructions+=6;goto B5cc463;
case 0x5cc466:c.instructions+=5;goto B5cc466;
case 0x5cc469:c.instructions+=4;goto B5cc469;
case 0x5cc46a:c.instructions+=3;goto B5cc46a;
case 0x5cc46c:c.instructions+=2;goto B5cc46c;
case 0x5cc474:c.instructions+=1;goto B5cc474;
case 0x5cc479:goto L5cc479;
case 0x5cc47c:c.instructions+=4;goto B5cc47c;
case 0x5cc47f:c.instructions+=3;goto B5cc47f;
case 0x5cc482:c.instructions+=2;goto B5cc482;
case 0x5cc484:c.instructions+=1;goto B5cc484;
case 0x5cc486:goto L5cc486;
case 0x5cc48e:goto L5cc48e;
case 0x5cc490:c.instructions+=1;goto B5cc490;
case 0x5cc495:goto L5cc495;
case 0x5cc49b:c.instructions+=8;goto B5cc49b;
case 0x5cc49f:c.instructions+=7;goto B5cc49f;
case 0x5cc4a2:c.instructions+=6;goto B5cc4a2;
case 0x5cc4a5:c.instructions+=5;goto B5cc4a5;
case 0x5cc4a7:c.instructions+=4;goto B5cc4a7;
case 0x5cc4ad:c.instructions+=3;goto B5cc4ad;
case 0x5cc4af:c.instructions+=2;goto B5cc4af;
case 0x5cc4b2:c.instructions+=1;goto B5cc4b2;
case 0x5cc4b4:goto L5cc4b4;
case 0x5cc4ba:c.instructions+=4;goto B5cc4ba;
case 0x5cc4be:c.instructions+=3;goto B5cc4be;
case 0x5cc4c0:c.instructions+=2;goto B5cc4c0;
case 0x5cc4c3:c.instructions+=1;goto B5cc4c3;
case 0x5cc4c5:goto L5cc4c5;
case 0x5cc4cb:c.instructions+=2;goto B5cc4cb;
case 0x5cc4d1:c.instructions+=1;goto B5cc4d1;
case 0x5cc4d3:goto L5cc4d3;
case 0x5cc4d9:c.instructions+=1;goto B5cc4d9;
case 0x5cc4df:goto L5cc4df;
case 0x5cc4e5:goto L5cc4e5;
case 0x5cc4eb:c.instructions+=80;goto B5cc4eb;
case 0x5cc4f1:c.instructions+=79;goto B5cc4f1;
case 0x5cc4f7:c.instructions+=78;goto B5cc4f7;
case 0x5cc4fd:c.instructions+=77;goto B5cc4fd;
case 0x5cc501:c.instructions+=76;goto B5cc501;
case 0x5cc503:c.instructions+=75;goto B5cc503;
case 0x5cc509:c.instructions+=74;goto B5cc509;
case 0x5cc50b:c.instructions+=73;goto B5cc50b;
case 0x5cc50f:c.instructions+=72;goto B5cc50f;
case 0x5cc511:c.instructions+=71;goto B5cc511;
case 0x5cc517:c.instructions+=70;goto B5cc517;
case 0x5cc519:c.instructions+=69;goto B5cc519;
case 0x5cc51d:c.instructions+=68;goto B5cc51d;
case 0x5cc525:c.instructions+=67;goto B5cc525;
case 0x5cc527:c.instructions+=66;goto B5cc527;
case 0x5cc529:c.instructions+=65;goto B5cc529;
case 0x5cc52b:c.instructions+=64;goto B5cc52b;
case 0x5cc52d:c.instructions+=63;goto B5cc52d;
case 0x5cc52f:c.instructions+=62;goto B5cc52f;
case 0x5cc531:c.instructions+=61;goto B5cc531;
case 0x5cc533:c.instructions+=60;goto B5cc533;
case 0x5cc535:c.instructions+=59;goto B5cc535;
case 0x5cc539:c.instructions+=58;goto B5cc539;
case 0x5cc53d:c.instructions+=57;goto B5cc53d;
case 0x5cc540:c.instructions+=56;goto B5cc540;
case 0x5cc544:c.instructions+=55;goto B5cc544;
case 0x5cc547:c.instructions+=54;goto B5cc547;
case 0x5cc549:c.instructions+=53;goto B5cc549;
case 0x5cc54d:c.instructions+=52;goto B5cc54d;
case 0x5cc54f:c.instructions+=51;goto B5cc54f;
case 0x5cc551:c.instructions+=50;goto B5cc551;
case 0x5cc554:c.instructions+=49;goto B5cc554;
case 0x5cc55a:c.instructions+=48;goto B5cc55a;
case 0x5cc55c:c.instructions+=47;goto B5cc55c;
case 0x5cc560:c.instructions+=46;goto B5cc560;
case 0x5cc563:c.instructions+=45;goto B5cc563;
case 0x5cc567:c.instructions+=44;goto B5cc567;
case 0x5cc56a:c.instructions+=43;goto B5cc56a;
case 0x5cc56c:c.instructions+=42;goto B5cc56c;
case 0x5cc570:c.instructions+=41;goto B5cc570;
case 0x5cc573:c.instructions+=40;goto B5cc573;
case 0x5cc575:c.instructions+=39;goto B5cc575;
case 0x5cc578:c.instructions+=38;goto B5cc578;
case 0x5cc57e:c.instructions+=37;goto B5cc57e;
case 0x5cc580:c.instructions+=36;goto B5cc580;
case 0x5cc584:c.instructions+=35;goto B5cc584;
case 0x5cc587:c.instructions+=34;goto B5cc587;
case 0x5cc58b:c.instructions+=33;goto B5cc58b;
case 0x5cc58e:c.instructions+=32;goto B5cc58e;
case 0x5cc590:c.instructions+=31;goto B5cc590;
case 0x5cc594:c.instructions+=30;goto B5cc594;
case 0x5cc597:c.instructions+=29;goto B5cc597;
case 0x5cc599:c.instructions+=28;goto B5cc599;
case 0x5cc59c:c.instructions+=27;goto B5cc59c;
case 0x5cc5a2:c.instructions+=26;goto B5cc5a2;
case 0x5cc5a4:c.instructions+=25;goto B5cc5a4;
case 0x5cc5a8:c.instructions+=24;goto B5cc5a8;
case 0x5cc5ac:c.instructions+=23;goto B5cc5ac;
case 0x5cc5af:c.instructions+=22;goto B5cc5af;
case 0x5cc5b3:c.instructions+=21;goto B5cc5b3;
case 0x5cc5b6:c.instructions+=20;goto B5cc5b6;
case 0x5cc5b8:c.instructions+=19;goto B5cc5b8;
case 0x5cc5bc:c.instructions+=18;goto B5cc5bc;
case 0x5cc5bf:c.instructions+=17;goto B5cc5bf;
case 0x5cc5c1:c.instructions+=16;goto B5cc5c1;
case 0x5cc5c4:c.instructions+=15;goto B5cc5c4;
case 0x5cc5c8:c.instructions+=14;goto B5cc5c8;
case 0x5cc5ce:c.instructions+=13;goto B5cc5ce;
case 0x5cc5d2:c.instructions+=12;goto B5cc5d2;
case 0x5cc5d4:c.instructions+=11;goto B5cc5d4;
case 0x5cc5d8:c.instructions+=10;goto B5cc5d8;
case 0x5cc5dc:c.instructions+=9;goto B5cc5dc;
case 0x5cc5de:c.instructions+=8;goto B5cc5de;
case 0x5cc5e2:c.instructions+=7;goto B5cc5e2;
case 0x5cc5e6:c.instructions+=6;goto B5cc5e6;
case 0x5cc5ea:c.instructions+=5;goto B5cc5ea;
case 0x5cc5ee:c.instructions+=4;goto B5cc5ee;
case 0x5cc5f4:c.instructions+=3;goto B5cc5f4;
case 0x5cc5f6:c.instructions+=2;goto B5cc5f6;
case 0x5cc5f9:c.instructions+=1;goto B5cc5f9;
case 0x5cc5fb:goto L5cc5fb;
case 0x5cc5ff:c.instructions+=4;goto B5cc5ff;
case 0x5cc600:c.instructions+=3;goto B5cc600;
case 0x5cc604:c.instructions+=2;goto B5cc604;
case 0x5cc605:c.instructions+=1;goto B5cc605;
case 0x5cc60a:goto L5cc60a;
case 0x5cc60e:c.instructions+=13;goto B5cc60e;
case 0x5cc612:c.instructions+=12;goto B5cc612;
case 0x5cc615:c.instructions+=11;goto B5cc615;
case 0x5cc619:c.instructions+=10;goto B5cc619;
case 0x5cc61d:c.instructions+=9;goto B5cc61d;
case 0x5cc621:c.instructions+=8;goto B5cc621;
case 0x5cc625:c.instructions+=7;goto B5cc625;
case 0x5cc629:c.instructions+=6;goto B5cc629;
case 0x5cc62d:c.instructions+=5;goto B5cc62d;
case 0x5cc631:c.instructions+=4;goto B5cc631;
case 0x5cc635:c.instructions+=3;goto B5cc635;
case 0x5cc639:c.instructions+=2;goto B5cc639;
case 0x5cc63d:c.instructions+=1;goto B5cc63d;
case 0x5cc63f:goto L5cc63f;
case 0x5cc641:c.instructions+=4;goto B5cc641;
case 0x5cc645:c.instructions+=3;goto B5cc645;
case 0x5cc649:c.instructions+=2;goto B5cc649;
case 0x5cc64d:c.instructions+=1;goto B5cc64d;
case 0x5cc651:goto L5cc651;
case 0x5cc656:c.instructions+=8;goto B5cc656;
case 0x5cc65a:c.instructions+=7;goto B5cc65a;
case 0x5cc660:c.instructions+=6;goto B5cc660;
case 0x5cc664:c.instructions+=5;goto B5cc664;
case 0x5cc668:c.instructions+=4;goto B5cc668;
case 0x5cc66c:c.instructions+=3;goto B5cc66c;
case 0x5cc66e:c.instructions+=2;goto B5cc66e;
case 0x5cc671:c.instructions+=1;goto B5cc671;
case 0x5cc673:goto L5cc673;
case 0x5cc679:c.instructions+=1;goto B5cc679;
case 0x5cc67b:goto L5cc67b;
case 0x5cc67f:c.instructions+=4;goto B5cc67f;
case 0x5cc683:c.instructions+=3;goto B5cc683;
case 0x5cc685:c.instructions+=2;goto B5cc685;
case 0x5cc688:c.instructions+=1;goto B5cc688;
case 0x5cc68a:goto L5cc68a;
case 0x5cc690:c.instructions+=1;goto B5cc690;
case 0x5cc692:goto L5cc692;
case 0x5cc696:c.instructions+=4;goto B5cc696;
case 0x5cc69a:c.instructions+=3;goto B5cc69a;
case 0x5cc69e:c.instructions+=2;goto B5cc69e;
case 0x5cc6a2:c.instructions+=1;goto B5cc6a2;
case 0x5cc6a4:goto L5cc6a4;
case 0x5cc6aa:c.instructions+=7;goto B5cc6aa;
case 0x5cc6b0:c.instructions+=6;goto B5cc6b0;
case 0x5cc6b2:c.instructions+=5;goto B5cc6b2;
case 0x5cc6b6:c.instructions+=4;goto B5cc6b6;
case 0x5cc6bc:c.instructions+=3;goto B5cc6bc;
case 0x5cc6be:c.instructions+=2;goto B5cc6be;
case 0x5cc6c1:c.instructions+=1;goto B5cc6c1;
case 0x5cc6c3:goto L5cc6c3;
case 0x5cc6c9:c.instructions+=1;goto B5cc6c9;
case 0x5cc6cd:goto L5cc6cd;
case 0x5cc6d1:c.instructions+=4;goto B5cc6d1;
case 0x5cc6d7:c.instructions+=3;goto B5cc6d7;
case 0x5cc6d9:c.instructions+=2;goto B5cc6d9;
case 0x5cc6dc:c.instructions+=1;goto B5cc6dc;
case 0x5cc6e2:goto L5cc6e2;
case 0x5cc6e8:c.instructions+=31;goto B5cc6e8;
case 0x5cc6ee:c.instructions+=30;goto B5cc6ee;
case 0x5cc6f4:c.instructions+=29;goto B5cc6f4;
case 0x5cc6f9:c.instructions+=28;goto B5cc6f9;
case 0x5cc6fb:c.instructions+=27;goto B5cc6fb;
case 0x5cc6fd:c.instructions+=26;goto B5cc6fd;
case 0x5cc703:c.instructions+=25;goto B5cc703;
case 0x5cc705:c.instructions+=24;goto B5cc705;
case 0x5cc706:c.instructions+=23;goto B5cc706;
case 0x5cc70c:c.instructions+=22;goto B5cc70c;
case 0x5cc710:c.instructions+=21;goto B5cc710;
case 0x5cc712:c.instructions+=20;goto B5cc712;
case 0x5cc713:c.instructions+=19;goto B5cc713;
case 0x5cc719:c.instructions+=18;goto B5cc719;
case 0x5cc71a:c.instructions+=17;goto B5cc71a;
case 0x5cc71e:c.instructions+=16;goto B5cc71e;
case 0x5cc726:c.instructions+=15;goto B5cc726;
case 0x5cc728:c.instructions+=14;goto B5cc728;
case 0x5cc72e:c.instructions+=13;goto B5cc72e;
case 0x5cc732:c.instructions+=12;goto B5cc732;
case 0x5cc736:c.instructions+=11;goto B5cc736;
case 0x5cc738:c.instructions+=10;goto B5cc738;
case 0x5cc73e:c.instructions+=9;goto B5cc73e;
case 0x5cc742:c.instructions+=8;goto B5cc742;
case 0x5cc746:c.instructions+=7;goto B5cc746;
case 0x5cc748:c.instructions+=6;goto B5cc748;
case 0x5cc74e:c.instructions+=5;goto B5cc74e;
case 0x5cc752:c.instructions+=4;goto B5cc752;
case 0x5cc756:c.instructions+=3;goto B5cc756;
case 0x5cc75c:c.instructions+=2;goto B5cc75c;
case 0x5cc760:c.instructions+=1;goto B5cc760;
case 0x5cc766:goto L5cc766;
case 0x5cc76c:c.instructions+=13;goto B5cc76c;
case 0x5cc770:c.instructions+=12;goto B5cc770;
case 0x5cc771:c.instructions+=11;goto B5cc771;
case 0x5cc776:c.instructions+=10;goto B5cc776;
case 0x5cc77a:c.instructions+=9;goto B5cc77a;
case 0x5cc77b:c.instructions+=8;goto B5cc77b;
case 0x5cc77d:c.instructions+=7;goto B5cc77d;
case 0x5cc77e:c.instructions+=6;goto B5cc77e;
case 0x5cc77f:c.instructions+=5;goto B5cc77f;
case 0x5cc787:c.instructions+=4;goto B5cc787;
case 0x5cc78f:c.instructions+=3;goto B5cc78f;
case 0x5cc797:c.instructions+=2;goto B5cc797;
case 0x5cc79f:c.instructions+=1;goto B5cc79f;
case 0x5cc7a4:goto L5cc7a4;
case 0x5cc7a8:c.instructions+=21;goto B5cc7a8;
case 0x5cc7ae:c.instructions+=20;goto B5cc7ae;
case 0x5cc7b3:c.instructions+=19;goto B5cc7b3;
case 0x5cc7b7:c.instructions+=18;goto B5cc7b7;
case 0x5cc7b8:c.instructions+=17;goto B5cc7b8;
case 0x5cc7be:c.instructions+=16;goto B5cc7be;
case 0x5cc7c2:c.instructions+=15;goto B5cc7c2;
case 0x5cc7c6:c.instructions+=14;goto B5cc7c6;
case 0x5cc7ca:c.instructions+=13;goto B5cc7ca;
case 0x5cc7d0:c.instructions+=12;goto B5cc7d0;
case 0x5cc7d1:c.instructions+=11;goto B5cc7d1;
case 0x5cc7d3:c.instructions+=10;goto B5cc7d3;
case 0x5cc7d4:c.instructions+=9;goto B5cc7d4;
case 0x5cc7d8:c.instructions+=8;goto B5cc7d8;
case 0x5cc7d9:c.instructions+=7;goto B5cc7d9;
case 0x5cc7dd:c.instructions+=6;goto B5cc7dd;
case 0x5cc7e3:c.instructions+=5;goto B5cc7e3;
case 0x5cc7e7:c.instructions+=4;goto B5cc7e7;
case 0x5cc7eb:c.instructions+=3;goto B5cc7eb;
case 0x5cc7f1:c.instructions+=2;goto B5cc7f1;
case 0x5cc7f5:c.instructions+=1;goto B5cc7f5;
case 0x5cc7fa:goto L5cc7fa;
case 0x5cc7fe:c.instructions+=5;goto B5cc7fe;
case 0x5cc801:c.instructions+=4;goto B5cc801;
case 0x5cc807:c.instructions+=3;goto B5cc807;
case 0x5cc809:c.instructions+=2;goto B5cc809;
case 0x5cc80c:c.instructions+=1;goto B5cc80c;
case 0x5cc80e:goto L5cc80e;
case 0x5cc816:goto L5cc816;
case 0x5cc81a:c.instructions+=2;goto B5cc81a;
case 0x5cc820:c.instructions+=1;goto B5cc820;
case 0x5cc825:goto L5cc825;
case 0x5cc82b:c.instructions+=12;goto B5cc82b;
case 0x5cc82d:c.instructions+=11;goto B5cc82d;
case 0x5cc82f:c.instructions+=10;goto B5cc82f;
case 0x5cc832:c.instructions+=9;goto B5cc832;
case 0x5cc834:c.instructions+=8;goto B5cc834;
case 0x5cc837:c.instructions+=7;goto B5cc837;
case 0x5cc839:c.instructions+=6;goto B5cc839;
case 0x5cc83c:c.instructions+=5;goto B5cc83c;
case 0x5cc83e:c.instructions+=4;goto B5cc83e;
case 0x5cc83f:c.instructions+=3;goto B5cc83f;
case 0x5cc844:c.instructions+=2;goto B5cc844;
case 0x5cc845:c.instructions+=1;goto B5cc845;
case 0x5cc84b:goto L5cc84b;
case 0x5cc850:c.instructions+=3;goto B5cc850;
case 0x5cc852:c.instructions+=2;goto B5cc852;
case 0x5cc854:c.instructions+=1;goto B5cc854;
case 0x5cc856:goto L5cc856;
case 0x5cc85c:c.instructions+=9;goto B5cc85c;
case 0x5cc85e:c.instructions+=8;goto B5cc85e;
case 0x5cc860:c.instructions+=7;goto B5cc860;
case 0x5cc862:c.instructions+=6;goto B5cc862;
case 0x5cc866:c.instructions+=5;goto B5cc866;
case 0x5cc867:c.instructions+=4;goto B5cc867;
case 0x5cc86c:c.instructions+=3;goto B5cc86c;
case 0x5cc86e:c.instructions+=2;goto B5cc86e;
case 0x5cc86f:c.instructions+=1;goto B5cc86f;
case 0x5cc874:goto L5cc874;
case 0x5cc877:c.instructions+=4;goto B5cc877;
case 0x5cc878:c.instructions+=3;goto B5cc878;
case 0x5cc87a:c.instructions+=2;goto B5cc87a;
case 0x5cc87b:c.instructions+=1;goto B5cc87b;
case 0x5cc87c:goto L5cc87c;
case 0x5cc881:c.instructions+=9;goto B5cc881;
case 0x5cc883:c.instructions+=8;goto B5cc883;
case 0x5cc885:c.instructions+=7;goto B5cc885;
case 0x5cc887:c.instructions+=6;goto B5cc887;
case 0x5cc88b:c.instructions+=5;goto B5cc88b;
case 0x5cc88c:c.instructions+=4;goto B5cc88c;
case 0x5cc891:c.instructions+=3;goto B5cc891;
case 0x5cc893:c.instructions+=2;goto B5cc893;
case 0x5cc894:c.instructions+=1;goto B5cc894;
case 0x5cc899:goto L5cc899;
case 0x5cc89c:goto L5cc89c;
case 0x5cc89d:c.instructions+=3;goto B5cc89d;
case 0x5cc89f:c.instructions+=2;goto B5cc89f;
case 0x5cc8a0:c.instructions+=1;goto B5cc8a0;
case 0x5cc8b0:goto L5cc8b0;
case 0x5cc8b5:c.instructions+=2;goto B5cc8b5;
case 0x5cc8b7:c.instructions+=1;goto B5cc8b7;
case 0x5cc8b9:goto L5cc8b9;
case 0x5cc8be:c.instructions+=2;goto B5cc8be;
case 0x5cc8c0:c.instructions+=1;goto B5cc8c0;
case 0x5cc8c2:goto L5cc8c2;
case 0x5cc8c7:c.instructions+=2;goto B5cc8c7;
case 0x5cc8c9:c.instructions+=1;goto B5cc8c9;
case 0x5cc8cb:goto L5cc8cb;
case 0x5cc8d1:c.instructions+=10;goto B5cc8d1;
case 0x5cc8d6:c.instructions+=9;goto B5cc8d6;
case 0x5cc8d8:c.instructions+=8;goto B5cc8d8;
case 0x5cc8da:c.instructions+=7;goto B5cc8da;
case 0x5cc8dc:c.instructions+=6;goto B5cc8dc;
case 0x5cc8dd:c.instructions+=5;goto B5cc8dd;
case 0x5cc8e3:c.instructions+=4;goto B5cc8e3;
case 0x5cc8e5:c.instructions+=3;goto B5cc8e5;
case 0x5cc8e6:c.instructions+=2;goto B5cc8e6;
case 0x5cc8e7:c.instructions+=1;goto B5cc8e7;
case 0x5cc8ed:goto L5cc8ed;
case 0x5cc8f2:c.instructions+=7;goto B5cc8f2;
case 0x5cc8f8:c.instructions+=6;goto B5cc8f8;
case 0x5cc8fa:c.instructions+=5;goto B5cc8fa;
case 0x5cc8ff:c.instructions+=4;goto B5cc8ff;
case 0x5cc901:c.instructions+=3;goto B5cc901;
case 0x5cc902:c.instructions+=2;goto B5cc902;
case 0x5cc903:c.instructions+=1;goto B5cc903;
case 0x5cc908:goto L5cc908;
case 0x5cc912:c.instructions+=1;goto B5cc912;
case 0x5cc914:goto L5cc914;
case 0x5cc91a:c.instructions+=10;goto B5cc91a;
case 0x5cc91f:c.instructions+=9;goto B5cc91f;
case 0x5cc921:c.instructions+=8;goto B5cc921;
case 0x5cc923:c.instructions+=7;goto B5cc923;
case 0x5cc925:c.instructions+=6;goto B5cc925;
case 0x5cc926:c.instructions+=5;goto B5cc926;
case 0x5cc92c:c.instructions+=4;goto B5cc92c;
case 0x5cc92e:c.instructions+=3;goto B5cc92e;
case 0x5cc92f:c.instructions+=2;goto B5cc92f;
case 0x5cc930:c.instructions+=1;goto B5cc930;
case 0x5cc936:goto L5cc936;
case 0x5cc93b:c.instructions+=3;goto B5cc93b;
case 0x5cc93d:c.instructions+=2;goto B5cc93d;
case 0x5cc947:c.instructions+=1;goto B5cc947;
case 0x5cc949:goto L5cc949;
case 0x5cc94e:c.instructions+=2;goto B5cc94e;
case 0x5cc950:c.instructions+=1;goto B5cc950;
case 0x5cc952:goto L5cc952;
case 0x5cc957:c.instructions+=5;goto B5cc957;
case 0x5cc959:c.instructions+=4;goto B5cc959;
case 0x5cc95b:c.instructions+=3;goto B5cc95b;
case 0x5cc960:c.instructions+=2;goto B5cc960;
case 0x5cc961:c.instructions+=1;goto B5cc961;
case 0x5cc967:goto L5cc967;
case 0x5cc96c:c.instructions+=7;goto B5cc96c;
case 0x5cc972:c.instructions+=6;goto B5cc972;
case 0x5cc974:c.instructions+=5;goto B5cc974;
case 0x5cc979:c.instructions+=4;goto B5cc979;
case 0x5cc97b:c.instructions+=3;goto B5cc97b;
case 0x5cc97c:c.instructions+=2;goto B5cc97c;
case 0x5cc97d:c.instructions+=1;goto B5cc97d;
case 0x5cc982:goto L5cc982;
case 0x5cc985:goto L5cc985;
case 0x5cc98a:c.instructions+=5;goto B5cc98a;
case 0x5cc98c:c.instructions+=4;goto B5cc98c;
case 0x5cc98e:c.instructions+=3;goto B5cc98e;
case 0x5cc993:c.instructions+=2;goto B5cc993;
case 0x5cc994:c.instructions+=1;goto B5cc994;
case 0x5cc99a:goto L5cc99a;
case 0x5cc9a0:goto L5cc9a0;
case 0x5cc9a5:c.instructions+=4;goto B5cc9a5;
case 0x5cc9a6:c.instructions+=3;goto B5cc9a6;
case 0x5cc9a8:c.instructions+=2;goto B5cc9a8;
case 0x5cc9aa:c.instructions+=1;goto B5cc9aa;
case 0x5cc9ac:goto L5cc9ac;
case 0x5cc9b0:goto L5cc9b0;
case 0x5cc9b5:c.instructions+=7;goto B5cc9b5;
case 0x5cc9bb:c.instructions+=6;goto B5cc9bb;
case 0x5cc9bd:c.instructions+=5;goto B5cc9bd;
case 0x5cc9c2:c.instructions+=4;goto B5cc9c2;
case 0x5cc9c4:c.instructions+=3;goto B5cc9c4;
case 0x5cc9c5:c.instructions+=2;goto B5cc9c5;
case 0x5cc9c6:c.instructions+=1;goto B5cc9c6;
case 0x5cc9cb:goto L5cc9cb;
case 0x5cc9d1:c.instructions+=7;goto B5cc9d1;
case 0x5cc9d6:c.instructions+=6;goto B5cc9d6;
case 0x5cc9d8:c.instructions+=5;goto B5cc9d8;
case 0x5cc9dd:c.instructions+=4;goto B5cc9dd;
case 0x5cc9df:c.instructions+=3;goto B5cc9df;
case 0x5cc9e0:c.instructions+=2;goto B5cc9e0;
case 0x5cc9e1:c.instructions+=1;goto B5cc9e1;
case 0x5cc9e6:goto L5cc9e6;
case 0x5cc9eb:c.instructions+=4;goto B5cc9eb;
case 0x5cc9ee:c.instructions+=3;goto B5cc9ee;
case 0x5cc9ef:c.instructions+=2;goto B5cc9ef;
case 0x5cc9f1:c.instructions+=1;goto B5cc9f1;
case 0x5cc9f3:goto L5cc9f3;
case 0x5cc9f4:c.instructions+=1;goto B5cc9f4;
case 0x5cca00:goto L5cca00;
case 0x5cca05:c.instructions+=3;goto B5cca05;
case 0x5cca08:c.instructions+=2;goto B5cca08;
case 0x5cca0b:c.instructions+=1;goto B5cca0b;
case 0x5cca0d:goto L5cca0d;
case 0x5cca14:c.instructions+=7;goto B5cca14;
case 0x5cca1a:c.instructions+=6;goto B5cca1a;
case 0x5cca1c:c.instructions+=5;goto B5cca1c;
case 0x5cca21:c.instructions+=4;goto B5cca21;
case 0x5cca23:c.instructions+=3;goto B5cca23;
case 0x5cca24:c.instructions+=2;goto B5cca24;
case 0x5cca25:c.instructions+=1;goto B5cca25;
case 0x5cca2a:goto L5cca2a;
case 0x5cca30:c.instructions+=7;goto B5cca30;
case 0x5cca35:c.instructions+=6;goto B5cca35;
case 0x5cca37:c.instructions+=5;goto B5cca37;
case 0x5cca3c:c.instructions+=4;goto B5cca3c;
case 0x5cca3e:c.instructions+=3;goto B5cca3e;
case 0x5cca3f:c.instructions+=2;goto B5cca3f;
case 0x5cca40:c.instructions+=1;goto B5cca40;
case 0x5cca45:goto L5cca45;
case 0x5cca48:c.instructions+=1;goto B5cca48;
case 0x5cca4a:goto L5cca4a;
case 0x5cca50:c.instructions+=7;goto B5cca50;
case 0x5cca56:c.instructions+=6;goto B5cca56;
case 0x5cca58:c.instructions+=5;goto B5cca58;
case 0x5cca5d:c.instructions+=4;goto B5cca5d;
case 0x5cca5f:c.instructions+=3;goto B5cca5f;
case 0x5cca60:c.instructions+=2;goto B5cca60;
case 0x5cca61:c.instructions+=1;goto B5cca61;
case 0x5cca66:goto L5cca66;
case 0x5cca69:goto L5cca69;
case 0x5cca6e:c.instructions+=4;goto B5cca6e;
case 0x5cca6f:c.instructions+=3;goto B5cca6f;
case 0x5cca71:c.instructions+=2;goto B5cca71;
case 0x5cca73:c.instructions+=1;goto B5cca73;
case 0x5cca75:goto L5cca75;
case 0x5cca80:goto L5cca80;
case 0x5cca85:c.instructions+=7;goto B5cca85;
case 0x5cca8b:c.instructions+=6;goto B5cca8b;
case 0x5cca8d:c.instructions+=5;goto B5cca8d;
case 0x5cca92:c.instructions+=4;goto B5cca92;
case 0x5cca94:c.instructions+=3;goto B5cca94;
case 0x5cca95:c.instructions+=2;goto B5cca95;
case 0x5cca96:c.instructions+=1;goto B5cca96;
case 0x5cca9b:goto L5cca9b;
case 0x5ccaa1:c.instructions+=7;goto B5ccaa1;
case 0x5ccaa6:c.instructions+=6;goto B5ccaa6;
case 0x5ccaa8:c.instructions+=5;goto B5ccaa8;
case 0x5ccaad:c.instructions+=4;goto B5ccaad;
case 0x5ccaaf:c.instructions+=3;goto B5ccaaf;
case 0x5ccab0:c.instructions+=2;goto B5ccab0;
case 0x5ccab1:c.instructions+=1;goto B5ccab1;
case 0x5ccab6:goto L5ccab6;
case 0x5ccabb:c.instructions+=4;goto B5ccabb;
case 0x5ccabe:c.instructions+=3;goto B5ccabe;
case 0x5ccabf:c.instructions+=2;goto B5ccabf;
case 0x5ccac1:c.instructions+=1;goto B5ccac1;
case 0x5ccac3:goto L5ccac3;
case 0x5ccac9:c.instructions+=14;goto B5ccac9;
case 0x5ccacf:c.instructions+=13;goto B5ccacf;
case 0x5ccad1:c.instructions+=12;goto B5ccad1;
case 0x5ccad6:c.instructions+=11;goto B5ccad6;
case 0x5ccad8:c.instructions+=10;goto B5ccad8;
case 0x5ccada:c.instructions+=9;goto B5ccada;
case 0x5ccadd:c.instructions+=8;goto B5ccadd;
case 0x5ccae5:c.instructions+=7;goto B5ccae5;
case 0x5ccae6:c.instructions+=6;goto B5ccae6;
case 0x5ccaeb:c.instructions+=5;goto B5ccaeb;
case 0x5ccaf0:c.instructions+=4;goto B5ccaf0;
case 0x5ccaf1:c.instructions+=3;goto B5ccaf1;
case 0x5ccaf6:c.instructions+=2;goto B5ccaf6;
case 0x5ccaf7:c.instructions+=1;goto B5ccaf7;
case 0x5ccafd:goto L5ccafd;
case 0x5ccb02:c.instructions+=5;goto B5ccb02;
case 0x5ccb04:c.instructions+=4;goto B5ccb04;
case 0x5ccb06:c.instructions+=3;goto B5ccb06;
case 0x5ccb0b:c.instructions+=2;goto B5ccb0b;
case 0x5ccb0c:c.instructions+=1;goto B5ccb0c;
case 0x5ccb12:goto L5ccb12;
case 0x5ccb17:c.instructions+=10;goto B5ccb17;
case 0x5ccb19:c.instructions+=9;goto B5ccb19;
case 0x5ccb1b:c.instructions+=8;goto B5ccb1b;
case 0x5ccb1d:c.instructions+=7;goto B5ccb1d;
case 0x5ccb1f:c.instructions+=6;goto B5ccb1f;
case 0x5ccb23:c.instructions+=5;goto B5ccb23;
case 0x5ccb24:c.instructions+=4;goto B5ccb24;
case 0x5ccb29:c.instructions+=3;goto B5ccb29;
case 0x5ccb2b:c.instructions+=2;goto B5ccb2b;
case 0x5ccb2c:c.instructions+=1;goto B5ccb2c;
case 0x5ccb31:goto L5ccb31;
case 0x5ccb36:c.instructions+=6;goto B5ccb36;
case 0x5ccb38:c.instructions+=5;goto B5ccb38;
case 0x5ccb3b:c.instructions+=4;goto B5ccb3b;
case 0x5ccb3d:c.instructions+=3;goto B5ccb3d;
case 0x5ccb42:c.instructions+=2;goto B5ccb42;
case 0x5ccb43:c.instructions+=1;goto B5ccb43;
case 0x5ccb49:goto L5ccb49;
case 0x5ccb4f:c.instructions+=2;goto B5ccb4f;
case 0x5ccb55:c.instructions+=1;goto B5ccb55;
case 0x5ccb57:goto L5ccb57;
case 0x5ccb59:c.instructions+=1;goto B5ccb59;
case 0x5ccb5f:goto L5ccb5f;
case 0x5ccb64:goto L5ccb64;
case 0x5ccb6a:c.instructions+=12;goto B5ccb6a;
case 0x5ccb6c:c.instructions+=11;goto B5ccb6c;
case 0x5ccb6e:c.instructions+=10;goto B5ccb6e;
case 0x5ccb71:c.instructions+=9;goto B5ccb71;
case 0x5ccb73:c.instructions+=8;goto B5ccb73;
case 0x5ccb76:c.instructions+=7;goto B5ccb76;
case 0x5ccb78:c.instructions+=6;goto B5ccb78;
case 0x5ccb7b:c.instructions+=5;goto B5ccb7b;
case 0x5ccb7d:c.instructions+=4;goto B5ccb7d;
case 0x5ccb7e:c.instructions+=3;goto B5ccb7e;
case 0x5ccb83:c.instructions+=2;goto B5ccb83;
case 0x5ccb84:c.instructions+=1;goto B5ccb84;
case 0x5ccb8a:goto L5ccb8a;
case 0x5ccb90:c.instructions+=10;goto B5ccb90;
case 0x5ccb92:c.instructions+=9;goto B5ccb92;
case 0x5ccb94:c.instructions+=8;goto B5ccb94;
case 0x5ccb96:c.instructions+=7;goto B5ccb96;
case 0x5ccb98:c.instructions+=6;goto B5ccb98;
case 0x5ccb9c:c.instructions+=5;goto B5ccb9c;
case 0x5ccb9d:c.instructions+=4;goto B5ccb9d;
case 0x5ccba2:c.instructions+=3;goto B5ccba2;
case 0x5ccba4:c.instructions+=2;goto B5ccba4;
case 0x5ccba5:c.instructions+=1;goto B5ccba5;
case 0x5ccbaa:goto L5ccbaa;
case 0x5ccbae:c.instructions+=8;goto B5ccbae;
case 0x5ccbb1:c.instructions+=7;goto B5ccbb1;
case 0x5ccbb3:c.instructions+=6;goto B5ccbb3;
case 0x5ccbb4:c.instructions+=5;goto B5ccbb4;
case 0x5ccbb6:c.instructions+=4;goto B5ccbb6;
case 0x5ccbb8:c.instructions+=3;goto B5ccbb8;
case 0x5ccbba:c.instructions+=2;goto B5ccbba;
case 0x5ccbbc:c.instructions+=1;goto B5ccbbc;
case 0x5ccbbe:goto L5ccbbe;
case 0x5ccbc3:c.instructions+=2;goto B5ccbc3;
case 0x5ccbc6:c.instructions+=1;goto B5ccbc6;
case 0x5ccbc8:goto L5ccbc8;
case 0x5ccbcd:c.instructions+=6;goto B5ccbcd;
case 0x5ccbd1:c.instructions+=5;goto B5ccbd1;
case 0x5ccbd2:c.instructions+=4;goto B5ccbd2;
case 0x5ccbd7:c.instructions+=3;goto B5ccbd7;
case 0x5ccbd9:c.instructions+=2;goto B5ccbd9;
case 0x5ccbda:c.instructions+=1;goto B5ccbda;
case 0x5ccbdc:goto L5ccbdc;
case 0x5ccbe3:c.instructions+=6;goto B5ccbe3;
case 0x5ccbe7:c.instructions+=5;goto B5ccbe7;
case 0x5ccbe8:c.instructions+=4;goto B5ccbe8;
case 0x5ccbed:c.instructions+=3;goto B5ccbed;
case 0x5ccbef:c.instructions+=2;goto B5ccbef;
case 0x5ccbf0:c.instructions+=1;goto B5ccbf0;
case 0x5ccbf5:goto L5ccbf5;
case 0x5ccbfa:c.instructions+=8;goto B5ccbfa;
case 0x5ccc01:c.instructions+=7;goto B5ccc01;
case 0x5ccc07:c.instructions+=6;goto B5ccc07;
case 0x5ccc09:c.instructions+=5;goto B5ccc09;
case 0x5ccc0e:c.instructions+=4;goto B5ccc0e;
case 0x5ccc10:c.instructions+=3;goto B5ccc10;
case 0x5ccc11:c.instructions+=2;goto B5ccc11;
case 0x5ccc12:c.instructions+=1;goto B5ccc12;
case 0x5ccc17:goto L5ccc17;
case 0x5ccc1a:c.instructions+=1;goto B5ccc1a;
case 0x5ccc1c:goto L5ccc1c;
case 0x5ccc22:c.instructions+=6;goto B5ccc22;
case 0x5ccc29:c.instructions+=5;goto B5ccc29;
case 0x5ccc2d:c.instructions+=4;goto B5ccc2d;
case 0x5ccc2e:c.instructions+=3;goto B5ccc2e;
case 0x5ccc33:c.instructions+=2;goto B5ccc33;
case 0x5ccc35:c.instructions+=1;goto B5ccc35;
case 0x5ccc36:goto L5ccc36;
case 0x5ccc3b:goto L5ccc3b;
case 0x5ccc3e:goto L5ccc3e;
case 0x5ccc43:goto L5ccc43;
case 0x5ccc49:c.instructions+=6;goto B5ccc49;
case 0x5ccc4e:c.instructions+=5;goto B5ccc4e;
case 0x5ccc50:c.instructions+=4;goto B5ccc50;
case 0x5ccc51:c.instructions+=3;goto B5ccc51;
case 0x5ccc53:c.instructions+=2;goto B5ccc53;
case 0x5ccc54:c.instructions+=1;goto B5ccc54;
case 0x5ccc5a:goto L5ccc5a;
case 0x5ccc60:c.instructions+=5;goto B5ccc60;
case 0x5ccc65:c.instructions+=4;goto B5ccc65;
case 0x5ccc67:c.instructions+=3;goto B5ccc67;
case 0x5ccc68:c.instructions+=2;goto B5ccc68;
case 0x5ccc69:c.instructions+=1;goto B5ccc69;
case 0x5ccc6f:goto L5ccc6f;
case 0x5ccc75:c.instructions+=13;goto B5ccc75;
case 0x5ccc7a:c.instructions+=12;goto B5ccc7a;
case 0x5ccc7e:c.instructions+=11;goto B5ccc7e;
case 0x5ccc82:c.instructions+=10;goto B5ccc82;
case 0x5ccc87:c.instructions+=9;goto B5ccc87;
case 0x5ccc8b:c.instructions+=8;goto B5ccc8b;
case 0x5ccc8c:c.instructions+=7;goto B5ccc8c;
case 0x5ccc94:c.instructions+=6;goto B5ccc94;
case 0x5ccc9c:c.instructions+=5;goto B5ccc9c;
case 0x5ccca4:c.instructions+=4;goto B5ccca4;
case 0x5cccac:c.instructions+=3;goto B5cccac;
case 0x5cccae:c.instructions+=2;goto B5cccae;
case 0x5cccaf:c.instructions+=1;goto B5cccaf;
case 0x5cccb5:goto L5cccb5;
case 0x5cccbf:c.instructions+=3;goto B5cccbf;
case 0x5cccc9:c.instructions+=2;goto B5cccc9;
case 0x5ccccc:c.instructions+=1;goto B5ccccc;
case 0x5cccd0:goto L5cccd0;
case 0x5cccd3:c.instructions+=11;goto B5cccd3;
case 0x5cccd8:c.instructions+=10;goto B5cccd8;
case 0x5cccdf:c.instructions+=9;goto B5cccdf;
case 0x5ccce3:c.instructions+=8;goto B5ccce3;
case 0x5ccce9:c.instructions+=7;goto B5ccce9;
case 0x5cccec:c.instructions+=6;goto B5cccec;
case 0x5cccf0:c.instructions+=5;goto B5cccf0;
case 0x5cccf4:c.instructions+=4;goto B5cccf4;
case 0x5cccf6:c.instructions+=3;goto B5cccf6;
case 0x5cccfa:c.instructions+=2;goto B5cccfa;
case 0x5cccfe:c.instructions+=1;goto B5cccfe;
case 0x5ccd00:goto L5ccd00;
case 0x5ccd06:c.instructions+=11;goto B5ccd06;
case 0x5ccd07:c.instructions+=10;goto B5ccd07;
case 0x5ccd09:c.instructions+=9;goto B5ccd09;
case 0x5ccd0b:c.instructions+=8;goto B5ccd0b;
case 0x5ccd0d:c.instructions+=7;goto B5ccd0d;
case 0x5ccd11:c.instructions+=6;goto B5ccd11;
case 0x5ccd12:c.instructions+=5;goto B5ccd12;
case 0x5ccd16:c.instructions+=4;goto B5ccd16;
case 0x5ccd17:c.instructions+=3;goto B5ccd17;
case 0x5ccd19:c.instructions+=2;goto B5ccd19;
case 0x5ccd1a:c.instructions+=1;goto B5ccd1a;
case 0x5ccd1f:goto L5ccd1f;
case 0x5ccd22:c.instructions+=2;goto B5ccd22;
case 0x5ccd25:c.instructions+=1;goto B5ccd25;
case 0x5ccd26:goto L5ccd26;
case 0x5ccd27:c.instructions+=2;goto B5ccd27;
case 0x5ccd2c:c.instructions+=1;goto B5ccd2c;
case 0x5ccd2e:goto L5ccd2e;
case 0x5ccd2f:c.instructions+=2;goto B5ccd2f;
case 0x5ccd32:c.instructions+=1;goto B5ccd32;
case 0x5ccd33:goto L5ccd33;
case 0x5ccd34:c.instructions+=12;goto B5ccd34;
case 0x5ccd36:c.instructions+=11;goto B5ccd36;
case 0x5ccd38:c.instructions+=10;goto B5ccd38;
case 0x5ccd3a:c.instructions+=9;goto B5ccd3a;
case 0x5ccd3e:c.instructions+=8;goto B5ccd3e;
case 0x5ccd3f:c.instructions+=7;goto B5ccd3f;
case 0x5ccd43:c.instructions+=6;goto B5ccd43;
case 0x5ccd44:c.instructions+=5;goto B5ccd44;
case 0x5ccd49:c.instructions+=4;goto B5ccd49;
case 0x5ccd50:c.instructions+=3;goto B5ccd50;
case 0x5ccd52:c.instructions+=2;goto B5ccd52;
case 0x5ccd53:c.instructions+=1;goto B5ccd53;
case 0x5ccd58:goto L5ccd58;
case 0x5ccd5b:c.instructions+=2;goto B5ccd5b;
case 0x5ccd5e:c.instructions+=1;goto B5ccd5e;
case 0x5ccd60:goto L5ccd60;
case 0x5ccd61:c.instructions+=6;goto B5ccd61;
case 0x5ccd62:c.instructions+=5;goto B5ccd62;
case 0x5ccd66:c.instructions+=4;goto B5ccd66;
case 0x5ccd67:c.instructions+=3;goto B5ccd67;
case 0x5ccd6b:c.instructions+=2;goto B5ccd6b;
case 0x5ccd71:c.instructions+=1;goto B5ccd71;
case 0x5ccd77:goto L5ccd77;
case 0x5ccd7d:goto L5ccd7d;
case 0x5ccd80:c.instructions+=1;goto B5ccd80;
case 0x5ccd86:goto L5ccd86;
case 0x5ccd8c:goto L5ccd8c;
case 0x5ccd8f:c.instructions+=2;goto B5ccd8f;
case 0x5ccd92:c.instructions+=1;goto B5ccd92;
case 0x5ccd98:goto L5ccd98;
case 0x5ccd9f:c.instructions+=1;goto B5ccd9f;
case 0x5ccda6:goto L5ccda6;
case 0x5ccdac:c.instructions+=4;goto B5ccdac;
case 0x5ccdb2:c.instructions+=3;goto B5ccdb2;
case 0x5ccdb5:c.instructions+=2;goto B5ccdb5;
case 0x5ccdb7:c.instructions+=1;goto B5ccdb7;
case 0x5ccdbd:goto L5ccdbd;
case 0x5ccdc3:c.instructions+=1;goto B5ccdc3;
case 0x5ccdc9:goto L5ccdc9;
case 0x5ccdcb:c.instructions+=1;goto B5ccdcb;
case 0x5ccdcd:goto L5ccdcd;
case 0x5ccdcf:c.instructions+=2;goto B5ccdcf;
case 0x5ccdd1:c.instructions+=1;goto B5ccdd1;
case 0x5ccdd6:goto L5ccdd6;
case 0x5ccddc:c.instructions+=2;goto B5ccddc;
case 0x5ccdde:c.instructions+=1;goto B5ccdde;
case 0x5ccde3:goto L5ccde3;
case 0x5ccde9:c.instructions+=1;goto B5ccde9;
case 0x5ccdee:goto L5ccdee;
case 0x5ccdf0:c.instructions+=1;goto B5ccdf0;
case 0x5ccdf5:goto L5ccdf5;
case 0x5ccdfb:c.instructions+=1;goto B5ccdfb;
case 0x5cce00:goto L5cce00;
case 0x5cce05:c.instructions+=2;goto B5cce05;
case 0x5cce06:c.instructions+=1;goto B5cce06;
case 0x5cce0c:goto L5cce0c;
case 0x5cce11:c.instructions+=2;goto B5cce11;
case 0x5cce12:c.instructions+=1;goto B5cce12;
case 0x5cce18:goto L5cce18;
case 0x5cce1d:goto L5cce1d;
case 0x5cce21:c.instructions+=5;goto B5cce21;
case 0x5cce23:c.instructions+=4;goto B5cce23;
case 0x5cce25:c.instructions+=3;goto B5cce25;
case 0x5cce27:c.instructions+=2;goto B5cce27;
case 0x5cce28:c.instructions+=1;goto B5cce28;
case 0x5cce2e:goto L5cce2e;
case 0x5cce2f:c.instructions+=1;goto B5cce2f;
case 0x5cce35:goto L5cce35;
case 0x5cce37:c.instructions+=3;goto B5cce37;
case 0x5cce39:c.instructions+=2;goto B5cce39;
case 0x5cce3a:c.instructions+=1;goto B5cce3a;
case 0x5cce3f:goto L5cce3f;
case 0x5cce40:c.instructions+=4;goto B5cce40;
case 0x5cce41:c.instructions+=3;goto B5cce41;
case 0x5cce43:c.instructions+=2;goto B5cce43;
case 0x5cce44:c.instructions+=1;goto B5cce44;
case 0x5cce47:goto L5cce47;
case 0x5cce4c:goto L5cce4c;
case 0x5cce4e:c.instructions+=1;goto B5cce4e;
case 0x5cce54:goto L5cce54;
case 0x5cce55:c.instructions+=4;goto B5cce55;
case 0x5cce56:c.instructions+=3;goto B5cce56;
case 0x5cce58:c.instructions+=2;goto B5cce58;
case 0x5cce59:c.instructions+=1;goto B5cce59;
case 0x5cce5c:goto L5cce5c;
case 0x5cce61:goto L5cce61;
case 0x5cce63:c.instructions+=1;goto B5cce63;
case 0x5cce65:goto L5cce65;
case 0x5cce6a:c.instructions+=2;goto B5cce6a;
case 0x5cce6c:c.instructions+=1;goto B5cce6c;
case 0x5cce6e:goto L5cce6e;
case 0x5cce6f:c.instructions+=5;goto B5cce6f;
case 0x5cce70:c.instructions+=4;goto B5cce70;
case 0x5cce7a:c.instructions+=3;goto B5cce7a;
case 0x5cce7c:c.instructions+=2;goto B5cce7c;
case 0x5cce7d:c.instructions+=1;goto B5cce7d;
case 0x5cce80:goto L5cce80;
case 0x5cce82:c.instructions+=2;goto B5cce82;
case 0x5cce85:c.instructions+=1;goto B5cce85;
case 0x5cce8b:goto L5cce8b;
case 0x5cce90:c.instructions+=1;goto B5cce90;
case 0x5cce92:goto L5cce92;
case 0x5cce93:c.instructions+=1;goto B5cce93;
case 0x5cce99:goto L5cce99;
case 0x5cce9e:c.instructions+=1;goto B5cce9e;
case 0x5ccea4:goto L5ccea4;
case 0x5cceae:c.instructions+=1;goto B5cceae;
case 0x5cceb3:goto L5cceb3;
case 0x5cceb4:c.instructions+=5;goto B5cceb4;
case 0x5cceb8:c.instructions+=4;goto B5cceb8;
case 0x5ccebb:c.instructions+=3;goto B5ccebb;
case 0x5ccebe:c.instructions+=2;goto B5ccebe;
case 0x5ccec3:c.instructions+=1;goto B5ccec3;
case 0x5ccec5:goto L5ccec5;
case 0x5ccecc:c.instructions+=1;goto B5ccecc;
case 0x5cced3:goto L5cced3;
case 0x5cced8:goto L5cced8;
case 0x5cceda:c.instructions+=1;goto B5cceda;
case 0x5ccedf:goto L5ccedf;
case 0x5ccee2:c.instructions+=1;goto B5ccee2;
case 0x5ccee4:goto L5ccee4;
case 0x5ccee9:goto L5ccee9;
case 0x5cceea:c.instructions+=1;goto B5cceea;
case 0x5cceef:goto L5cceef;
case 0x5ccef2:c.instructions+=1;goto B5ccef2;
case 0x5ccef4:goto L5ccef4;
case 0x5ccef9:goto L5ccef9;
case 0x5cceff:c.instructions+=3;goto B5cceff;
case 0x5ccf01:c.instructions+=2;goto B5ccf01;
case 0x5ccf02:c.instructions+=1;goto B5ccf02;
case 0x5ccf07:goto L5ccf07;
case 0x5ccf0a:c.instructions+=1;goto B5ccf0a;
case 0x5ccf0c:goto L5ccf0c;
case 0x5ccf11:goto L5ccf11;
case 0x5ccf16:c.instructions+=2;goto B5ccf16;
case 0x5ccf17:c.instructions+=1;goto B5ccf17;
case 0x5ccf1c:goto L5ccf1c;
case 0x5ccf1f:c.instructions+=1;goto B5ccf1f;
case 0x5ccf21:goto L5ccf21;
case 0x5ccf27:goto L5ccf27;
case 0x5ccf2a:c.instructions+=2;goto B5ccf2a;
case 0x5ccf2b:c.instructions+=1;goto B5ccf2b;
case 0x5ccf31:goto L5ccf31;
case 0x5ccf37:c.instructions+=1;goto B5ccf37;
case 0x5ccf3c:goto L5ccf3c;
case 0x5ccf40:c.instructions+=2;goto B5ccf40;
case 0x5ccf46:c.instructions+=1;goto B5ccf46;
case 0x5ccf4b:goto L5ccf4b;
case 0x5ccf50:goto L5ccf50;
case 0x5ccf54:c.instructions+=2;goto B5ccf54;
case 0x5ccf55:c.instructions+=1;goto B5ccf55;
case 0x5ccf5a:goto L5ccf5a;
case 0x5ccf5b:c.instructions+=2;goto B5ccf5b;
case 0x5ccf61:c.instructions+=1;goto B5ccf61;
case 0x5ccf66:goto L5ccf66;
case 0x5ccf69:c.instructions+=1;goto B5ccf69;
case 0x5ccf6b:goto L5ccf6b;
case 0x5ccf71:c.instructions+=1;goto B5ccf71;
case 0x5ccf73:goto L5ccf73;
case 0x5ccf75:goto L5ccf75;
case 0x5ccf7b:c.instructions+=2;goto B5ccf7b;
case 0x5ccf80:c.instructions+=1;goto B5ccf80;
case 0x5ccf82:goto L5ccf82;
case 0x5ccf89:c.instructions+=1;goto B5ccf89;
case 0x5ccf90:goto L5ccf90;
case 0x5ccf91:c.instructions+=1;goto B5ccf91;
case 0x5ccf97:goto L5ccf97;
case 0x5ccf99:goto L5ccf99;
case 0x5ccf9d:c.instructions+=2;goto B5ccf9d;
case 0x5ccfa2:c.instructions+=1;goto B5ccfa2;
case 0x5ccfa8:goto L5ccfa8;
case 0x5ccfab:c.instructions+=1;goto B5ccfab;
case 0x5ccfad:goto L5ccfad;
case 0x5ccfae:c.instructions+=4;goto B5ccfae;
case 0x5ccfaf:c.instructions+=3;goto B5ccfaf;
case 0x5ccfb1:c.instructions+=2;goto B5ccfb1;
case 0x5ccfb2:c.instructions+=1;goto B5ccfb2;
case 0x5ccfb5:goto L5ccfb5;
case 0x5ccfbb:goto L5ccfbb;
case 0x5ccfbd:goto L5ccfbd;
case 0x5ccfbf:c.instructions+=2;goto B5ccfbf;
case 0x5ccfc4:c.instructions+=1;goto B5ccfc4;
case 0x5ccfca:goto L5ccfca;
case 0x5ccfcf:c.instructions+=1;goto B5ccfcf;
case 0x5ccfd5:goto L5ccfd5;
case 0x5ccfd8:c.instructions+=1;goto B5ccfd8;
case 0x5ccfda:goto L5ccfda;
case 0x5ccfde:c.instructions+=1;goto B5ccfde;
case 0x5ccfe4:goto L5ccfe4;
case 0x5ccfe8:c.instructions+=6;goto B5ccfe8;
case 0x5ccfec:c.instructions+=5;goto B5ccfec;
case 0x5ccfed:c.instructions+=4;goto B5ccfed;
case 0x5ccfee:c.instructions+=3;goto B5ccfee;
case 0x5ccfef:c.instructions+=2;goto B5ccfef;
case 0x5ccff0:c.instructions+=1;goto B5ccff0;
case 0x5ccff6:goto L5ccff6;
case 0x5ccff7:c.instructions+=3;goto B5ccff7;
case 0x5ccff8:c.instructions+=2;goto B5ccff8;
case 0x5ccff9:c.instructions+=1;goto B5ccff9;
default:missing_instruction(c.pc);}
B5cc000:L5cc000:{c.instructions+=3;NFSU2_TR(0x5cc000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc002:{NFSU2_TR(0x5cc002);
__builtin_memmove((R+4),(R+12),4);
}
B5cc004:{NFSU2_TR(0x5cc004);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc007ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc007:L5cc007:{c.instructions+=6;NFSU2_TR(0x5cc007);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc00a:{NFSU2_TR(0x5cc00a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc00f:{NFSU2_TR(0x5cc00f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc011:{NFSU2_TR(0x5cc011);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc012:{NFSU2_TR(0x5cc012);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc013:{NFSU2_TR(0x5cc013);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc019ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc019:L5cc019:{c.instructions+=7;NFSU2_TR(0x5cc019);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc01c:{NFSU2_TR(0x5cc01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc01e:{NFSU2_TR(0x5cc01e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc01f:{NFSU2_TR(0x5cc01f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cc023:{NFSU2_TR(0x5cc023);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc024:{NFSU2_TR(0x5cc024);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc025:{NFSU2_TR(0x5cc025);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc02bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc02b:L5cc02b:{c.instructions+=3;NFSU2_TR(0x5cc02b);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc032:{NFSU2_TR(0x5cc032);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc033:{NFSU2_TR(0x5cc033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc038ull));
TAIL_STATIC(0x43c780u,43c);
}
B5cc038:L5cc038:{c.instructions+=5;NFSU2_TR(0x5cc038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cc03a:{NFSU2_TR(0x5cc03a);
__builtin_memmove((R+28),(R+0),4);
}
B5cc03c:{NFSU2_TR(0x5cc03c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cc03f:{NFSU2_TR(0x5cc03f);
w4(R+4,u32(0x10ull));
}
B5cc044:{NFSU2_TR(0x5cc044);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc04b:L5cc04b:{c.instructions+=1;NFSU2_TR(0x5cc04b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cc04d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc04bu);}goto L5cc04b;}
}
B5cc04d:L5cc04d:{c.instructions+=6;NFSU2_TR(0x5cc04d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cc050:{NFSU2_TR(0x5cc050);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc051:{NFSU2_TR(0x5cc051);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc052:{NFSU2_TR(0x5cc052);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cc057:{NFSU2_TR(0x5cc057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc058:{NFSU2_TR(0x5cc058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc05dull));
TAIL_STATIC(0x63cedbu,63c);
}
B5cc05d:L5cc05d:{c.instructions+=10;NFSU2_TR(0x5cc05d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc061:{NFSU2_TR(0x5cc061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cc063:{NFSU2_TR(0x5cc063);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5cc066:{NFSU2_TR(0x5cc066);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc067:{NFSU2_TR(0x5cc067);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc068:{NFSU2_TR(0x5cc068);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cc06d:{NFSU2_TR(0x5cc06d);
__builtin_memmove((R+28),(R+8),4);
}
B5cc06f:{NFSU2_TR(0x5cc06f);
w4(R+4,u32(0x10ull));
}
B5cc074:{NFSU2_TR(0x5cc074);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc07b:{NFSU2_TR(0x5cc07b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc07c:L5cc07c:{c.instructions+=1;NFSU2_TR(0x5cc07c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cc07e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc07cu);}goto L5cc07c;}
}
B5cc07e:L5cc07e:{c.instructions+=1;NFSU2_TR(0x5cc07e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc083ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5cc083:L5cc083:{c.instructions+=4;NFSU2_TR(0x5cc083);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc08a:{NFSU2_TR(0x5cc08a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc08c:{NFSU2_TR(0x5cc08c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc08d:{NFSU2_TR(0x5cc08d);
if(mod_hook_table[27]){SPILL();c.pc=0x5cc08du;mod_hook_table[27](c);SPILL();if(c.pc!=0x5cc08du){TAIL_DYNAMIC(c.pc);}goto B5cc092;}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc092ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5cc092:L5cc092:{c.instructions+=7;NFSU2_TR(0x5cc092);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc097:{NFSU2_TR(0x5cc097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc099:{NFSU2_TR(0x5cc099);
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
B5cc09c:{NFSU2_TR(0x5cc09c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc09e:{NFSU2_TR(0x5cc09e);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc0a0:{NFSU2_TR(0x5cc0a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc0a1:{NFSU2_TR(0x5cc0a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc0a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc0a7:L5cc0a7:{c.instructions+=6;NFSU2_TR(0x5cc0a7);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc0ac:{NFSU2_TR(0x5cc0ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc0ae:{NFSU2_TR(0x5cc0ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc0b0:{NFSU2_TR(0x5cc0b0);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc0b2:{NFSU2_TR(0x5cc0b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc0b3:{NFSU2_TR(0x5cc0b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc0b9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc0b9:L5cc0b9:{c.instructions+=3;NFSU2_TR(0x5cc0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc0bc:{NFSU2_TR(0x5cc0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc0be:{NFSU2_TR(0x5cc0be);
if(r1(R+518)){{goto L5cc0ca;}}
}
B5cc0c0:L5cc0c0:{c.instructions+=1;NFSU2_TR(0x5cc0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc0c5ull));
TAIL_STATIC(0x537930u,537);
}
B5cc0c5:L5cc0c5:{c.instructions+=1;NFSU2_TR(0x5cc0c5);
{goto L5cc200;}
}
B5cc0ca:L5cc0ca:{c.instructions+=3;NFSU2_TR(0x5cc0ca);
__builtin_memmove((R+0),gp(0x7fee40),4);
}
B5cc0cf:{NFSU2_TR(0x5cc0cf);
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
B5cc0d1:{NFSU2_TR(0x5cc0d1);
if(r1(R+518)){{goto L5cc200;}}
}
B5cc0d7:L5cc0d7:{c.instructions+=2;NFSU2_TR(0x5cc0d7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc0d9:{NFSU2_TR(0x5cc0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc0deull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cc0de:L5cc0de:{c.instructions+=4;NFSU2_TR(0x5cc0de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5cc0e1:{NFSU2_TR(0x5cc0e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cc0e4:{NFSU2_TR(0x5cc0e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc0e6:{NFSU2_TR(0x5cc0e6);
if(r1(R+518)){{goto L5cc1f6;}}
}
B5cc0ec:L5cc0ec:{c.instructions+=2;NFSU2_TR(0x5cc0ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cc0f0:{NFSU2_TR(0x5cc0f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc0f5ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B5cc0f5:L5cc0f5:{c.instructions+=10;NFSU2_TR(0x5cc0f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+240),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc0fd:{NFSU2_TR(0x5cc0fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x41700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc105:{NFSU2_TR(0x5cc105);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+232),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc10d:{NFSU2_TR(0x5cc10d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x41700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc115:{NFSU2_TR(0x5cc115);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+236),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc11d:{NFSU2_TR(0x5cc11d);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x42be0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc125:{NFSU2_TR(0x5cc125);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+244),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc12d:{NFSU2_TR(0x5cc12d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x42be0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc135:{NFSU2_TR(0x5cc135);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5cc137:{NFSU2_TR(0x5cc137);
{goto L5cc140;}
}
B5cc140:L5cc140:{c.instructions+=3;NFSU2_TR(0x5cc140);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5cc147:{NFSU2_TR(0x5cc147);
w4(R+4,u32(0x4ull));
}
B5cc14c:{NFSU2_TR(0x5cc14c);
__builtin_memmove((R+16),(R+16),4);
}
B5cc150:L5cc150:{c.instructions+=4;NFSU2_TR(0x5cc150);
u8 U[1];
w1(U+0,u8(0xffull));
s1(u32(r4(R+0)),r1(U+0));
}
B5cc153:{NFSU2_TR(0x5cc153);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5cc156:{NFSU2_TR(0x5cc156);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5cc157:{NFSU2_TR(0x5cc157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc150u);}goto L5cc150;}}
}
B5cc159:L5cc159:{c.instructions+=3;NFSU2_TR(0x5cc159);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5cc15a:{NFSU2_TR(0x5cc15a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5cc15d:{NFSU2_TR(0x5cc15d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc140u);}goto L5cc140;}}
}
B5cc15f:L5cc15f:{c.instructions+=9;NFSU2_TR(0x5cc15f);
__builtin_memmove((R+8),gp(0x8708a4),4);
}
B5cc165:{NFSU2_TR(0x5cc165);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc168:{NFSU2_TR(0x5cc168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc16a:{NFSU2_TR(0x5cc16a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc16b:{NFSU2_TR(0x5cc16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc16e:{NFSU2_TR(0x5cc16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc174:{NFSU2_TR(0x5cc174);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc175:{NFSU2_TR(0x5cc175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc176:{NFSU2_TR(0x5cc176);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc17cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc17c:L5cc17c:{c.instructions+=7;NFSU2_TR(0x5cc17c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc181:{NFSU2_TR(0x5cc181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc183:{NFSU2_TR(0x5cc183);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc185:{NFSU2_TR(0x5cc185);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc187:{NFSU2_TR(0x5cc187);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc189:{NFSU2_TR(0x5cc189);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc18a:{NFSU2_TR(0x5cc18a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc190ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc190:L5cc190:{c.instructions+=7;NFSU2_TR(0x5cc190);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc195:{NFSU2_TR(0x5cc195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc197:{NFSU2_TR(0x5cc197);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc199:{NFSU2_TR(0x5cc199);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc19b:{NFSU2_TR(0x5cc19b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc19d:{NFSU2_TR(0x5cc19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc19e:{NFSU2_TR(0x5cc19e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc1a4:L5cc1a4:{c.instructions+=3;NFSU2_TR(0x5cc1a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1a6:{NFSU2_TR(0x5cc1a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1a8:{NFSU2_TR(0x5cc1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1adull));
TAIL_STATIC(0x5bcb70u,5bc);
}
B5cc1ad:L5cc1ad:{c.instructions+=4;NFSU2_TR(0x5cc1ad);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1af:{NFSU2_TR(0x5cc1af);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1b1:{NFSU2_TR(0x5cc1b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1b3:{NFSU2_TR(0x5cc1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1b8ull));
TAIL_STATIC(0x5bcbc0u,5bc);
}
B5cc1b8:L5cc1b8:{c.instructions+=1;NFSU2_TR(0x5cc1b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1bdull));
TAIL_STATIC(0x5bdf90u,5bd);
}
B5cc1bd:L5cc1bd:{c.instructions+=5;NFSU2_TR(0x5cc1bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1bf:{NFSU2_TR(0x5cc1bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc1c3:{NFSU2_TR(0x5cc1c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1c5:{NFSU2_TR(0x5cc1c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1c6:{NFSU2_TR(0x5cc1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1cbull));
TAIL_STATIC(0x5c5020u,5c5);
}
B5cc1cb:L5cc1cb:{c.instructions+=8;NFSU2_TR(0x5cc1cb);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc1d0:{NFSU2_TR(0x5cc1d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc1d2:{NFSU2_TR(0x5cc1d2);
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
B5cc1d5:{NFSU2_TR(0x5cc1d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1d7:{NFSU2_TR(0x5cc1d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1d9:{NFSU2_TR(0x5cc1d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1db:{NFSU2_TR(0x5cc1db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1dc:{NFSU2_TR(0x5cc1dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc1e2:L5cc1e2:{c.instructions+=7;NFSU2_TR(0x5cc1e2);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc1e7:{NFSU2_TR(0x5cc1e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc1e9:{NFSU2_TR(0x5cc1e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1eb:{NFSU2_TR(0x5cc1eb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1ed:{NFSU2_TR(0x5cc1ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1ef:{NFSU2_TR(0x5cc1ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc1f0:{NFSU2_TR(0x5cc1f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc1f6:L5cc1f6:{c.instructions+=1;NFSU2_TR(0x5cc1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc1fbull));
TAIL_STATIC(0x5cbdc0u,5cb);
}
B5cc1fb:L5cc1fb:{c.instructions+=1;NFSU2_TR(0x5cc1fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc200ull));
TAIL_STATIC(0x5378c0u,537);
}
B5cc200:L5cc200:{c.instructions+=3;NFSU2_TR(0x5cc200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cc202:{NFSU2_TR(0x5cc202);
__builtin_memmove((R+4),(R+12),4);
}
B5cc204:{NFSU2_TR(0x5cc204);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc207ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc207:L5cc207:{c.instructions+=4;NFSU2_TR(0x5cc207);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cc20a:{NFSU2_TR(0x5cc20a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc20c:{NFSU2_TR(0x5cc20c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc20d:{NFSU2_TR(0x5cc20d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc213ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc213:L5cc213:{c.instructions+=7;NFSU2_TR(0x5cc213);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc218:{NFSU2_TR(0x5cc218);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc21a:{NFSU2_TR(0x5cc21a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc21c:{NFSU2_TR(0x5cc21c);
s4(0x870910,u32(0x0ull));
}
B5cc226:{NFSU2_TR(0x5cc226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc228:{NFSU2_TR(0x5cc228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc229:{NFSU2_TR(0x5cc229);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc22full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc22f:L5cc22f:{c.instructions+=6;NFSU2_TR(0x5cc22f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc234:{NFSU2_TR(0x5cc234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc236:{NFSU2_TR(0x5cc236);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc238:{NFSU2_TR(0x5cc238);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc23a:{NFSU2_TR(0x5cc23a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc23b:{NFSU2_TR(0x5cc23b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc241ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc241:L5cc241:{c.instructions+=6;NFSU2_TR(0x5cc241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cc242:{NFSU2_TR(0x5cc242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc243:{NFSU2_TR(0x5cc243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cc244:{NFSU2_TR(0x5cc244);
__builtin_memmove((R+16),(R+20),4);
}
B5cc246:{NFSU2_TR(0x5cc246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cc247:{NFSU2_TR(0x5cc247);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cc250:L5cc250:{c.instructions+=4;NFSU2_TR(0x5cc250);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5cc253:{NFSU2_TR(0x5cc253);
__builtin_memmove((R+0),gp(0x86b7c4),1);
}
B5cc258:{NFSU2_TR(0x5cc258);
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
B5cc25a:{NFSU2_TR(0x5cc25a);
if(r1(R+518)){{goto L5cc272;}}
}
B5cc25c:L5cc25c:{c.instructions+=3;NFSU2_TR(0x5cc25c);
__builtin_memmove((R+0),gp(0x86b7a4),4);
}
B5cc261:{NFSU2_TR(0x5cc261);
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
B5cc263:{NFSU2_TR(0x5cc263);
if(r1(R+518)){{goto L5cc272;}}
}
B5cc265:L5cc265:{c.instructions+=3;NFSU2_TR(0x5cc265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc267:{NFSU2_TR(0x5cc267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc268:{NFSU2_TR(0x5cc268);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc26bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc26b:L5cc26b:{c.instructions+=1;NFSU2_TR(0x5cc26b);
s1(0x86b7c4,u8(0x0ull));
}
B5cc272:L5cc272:{c.instructions+=2;NFSU2_TR(0x5cc272);
w4(R+4,u32(0x86b7a4ull));
}
B5cc277:{NFSU2_TR(0x5cc277);
TAIL_STATIC(0x5c57e0u,5c5);
}
B5cc280:L5cc280:{c.instructions+=16;NFSU2_TR(0x5cc280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5cc283:{NFSU2_TR(0x5cc283);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc287:{NFSU2_TR(0x5cc287);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc288:{NFSU2_TR(0x5cc288);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc289:{NFSU2_TR(0x5cc289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc28a:{NFSU2_TR(0x5cc28a);
__builtin_memmove((R+24),(R+4),4);
}
B5cc28c:{NFSU2_TR(0x5cc28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc28f:{NFSU2_TR(0x5cc28f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cc292:{NFSU2_TR(0x5cc292);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5cc296:{NFSU2_TR(0x5cc296);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc297:{NFSU2_TR(0x5cc297);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5cc299:{NFSU2_TR(0x5cc299);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5cc29b:{NFSU2_TR(0x5cc29b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5cc29d:{NFSU2_TR(0x5cc29d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc2a1:{NFSU2_TR(0x5cc2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc2a5:{NFSU2_TR(0x5cc2a5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cc443;}}
}
B5cc2ab:L5cc2ab:{c.instructions+=1;NFSU2_TR(0x5cc2ab);
{goto L5cc2b0;}
}
B5cc2ad:L5cc2ad:{c.instructions+=2;NFSU2_TR(0x5cc2ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5cc2af:{NFSU2_TR(0x5cc2af);
}
B5cc2b0:L5cc2b0:{c.instructions+=3;NFSU2_TR(0x5cc2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cc2b3:{NFSU2_TR(0x5cc2b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134900ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc2b8:{NFSU2_TR(0x5cc2b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc2dd;}}
}
B5cc2ba:L5cc2ba:{c.instructions+=9;NFSU2_TR(0x5cc2ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cc2bd:{NFSU2_TR(0x5cc2bd);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff0ull))));
}
B5cc2c0:{NFSU2_TR(0x5cc2c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5cc2c2:{NFSU2_TR(0x5cc2c2);
__builtin_memmove((R+0),gp(0x872ed4),4);
}
B5cc2c7:{NFSU2_TR(0x5cc2c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cc2c9:{NFSU2_TR(0x5cc2c9);
__builtin_memmove(gp(0x872ed4),(R+12),4);
}
B5cc2cf:{NFSU2_TR(0x5cc2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc2d2:{NFSU2_TR(0x5cc2d2);
u8 U[4];
w4(U+0,u32(0x872ed0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B5cc2d8:{NFSU2_TR(0x5cc2d8);
{goto L5cc430;}
}
B5cc2dd:L5cc2dd:{c.instructions+=2;NFSU2_TR(0x5cc2dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134b02ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc2e2:{NFSU2_TR(0x5cc2e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc2f4;}}
}
B5cc2e4:L5cc2e4:{c.instructions+=5;NFSU2_TR(0x5cc2e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5cc2e6:{NFSU2_TR(0x5cc2e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5cc2e9:{NFSU2_TR(0x5cc2e9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B5cc2ec:{NFSU2_TR(0x5cc2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc2ef:{NFSU2_TR(0x5cc2ef);
{goto L5cc430;}
}
B5cc2f4:L5cc2f4:{c.instructions+=2;NFSU2_TR(0x5cc2f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134b03ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc2f9:{NFSU2_TR(0x5cc2f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc376;}}
}
B5cc2fb:L5cc2fb:{c.instructions+=13;NFSU2_TR(0x5cc2fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5cc2fd:{NFSU2_TR(0x5cc2fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc300:{NFSU2_TR(0x5cc300);
__builtin_memmove((R+4),(R+0),4);
}
B5cc302:{NFSU2_TR(0x5cc302);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B5cc305:{NFSU2_TR(0x5cc305);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc308:{NFSU2_TR(0x5cc308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc30b:{NFSU2_TR(0x5cc30b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5cc30e:{NFSU2_TR(0x5cc30e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5cc310:{NFSU2_TR(0x5cc310);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5cc314:{NFSU2_TR(0x5cc314);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc315:{NFSU2_TR(0x5cc315);
__builtin_memmove((R+4),(R+12),4);
}
B5cc317:{NFSU2_TR(0x5cc317);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc31a:{NFSU2_TR(0x5cc31a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc31full));
TAIL_STATIC(0x5c58a0u,5c5);
}
B5cc31f:L5cc31f:{c.instructions+=3;NFSU2_TR(0x5cc31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc322:{NFSU2_TR(0x5cc322);
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
B5cc324:{NFSU2_TR(0x5cc324);
if(r1(R+518)){{goto L5cc430;}}
}
B5cc32a:L5cc32a:{c.instructions+=11;NFSU2_TR(0x5cc32a);
__builtin_memmove((R+4),gp(0x870974),4);
}
B5cc330:{NFSU2_TR(0x5cc330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc332:{NFSU2_TR(0x5cc332);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc334:{NFSU2_TR(0x5cc334);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc337:{NFSU2_TR(0x5cc337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc338:{NFSU2_TR(0x5cc338);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc33a:{NFSU2_TR(0x5cc33a);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc33c:{NFSU2_TR(0x5cc33c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc33e:{NFSU2_TR(0x5cc33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc33f:{NFSU2_TR(0x5cc33f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc340:{NFSU2_TR(0x5cc340);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc343ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc343:L5cc343:{c.instructions+=9;NFSU2_TR(0x5cc343);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cc345:{NFSU2_TR(0x5cc345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cc347:{NFSU2_TR(0x5cc347);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc349:{NFSU2_TR(0x5cc349);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cc34d:{NFSU2_TR(0x5cc34d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc34e:{NFSU2_TR(0x5cc34e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc350:{NFSU2_TR(0x5cc350);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc352:{NFSU2_TR(0x5cc352);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc353:{NFSU2_TR(0x5cc353);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc356ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc356:L5cc356:{c.instructions+=5;NFSU2_TR(0x5cc356);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc359:{NFSU2_TR(0x5cc359);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cc35c:{NFSU2_TR(0x5cc35c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cc360:{NFSU2_TR(0x5cc360);
__builtin_memmove((R+8),(R+4),4);
}
B5cc362:{NFSU2_TR(0x5cc362);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5cc365:L5cc365:{c.instructions+=1;NFSU2_TR(0x5cc365);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cc367;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc365u);}goto L5cc365;}
}
B5cc367:L5cc367:{c.instructions+=2;NFSU2_TR(0x5cc367);
__builtin_memmove((R+4),(R+8),4);
}
B5cc369:{NFSU2_TR(0x5cc369);
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
B5cc36c:L5cc36c:{c.instructions+=1;NFSU2_TR(0x5cc36c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5cc36e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc36cu);}goto L5cc36c;}
}
B5cc36e:L5cc36e:{c.instructions+=2;NFSU2_TR(0x5cc36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc371:{NFSU2_TR(0x5cc371);
{goto L5cc426;}
}
B5cc376:L5cc376:{c.instructions+=2;NFSU2_TR(0x5cc376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134b01ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc37b:{NFSU2_TR(0x5cc37b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc430;}}
}
B5cc381:L5cc381:{c.instructions+=15;NFSU2_TR(0x5cc381);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc384:{NFSU2_TR(0x5cc384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5cc386:{NFSU2_TR(0x5cc386);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x87ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc38c:{NFSU2_TR(0x5cc38c);
__builtin_memmove((R+8),(R+0),4);
}
B5cc38e:{NFSU2_TR(0x5cc38e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff80ull))));
}
B5cc391:{NFSU2_TR(0x5cc391);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc394:{NFSU2_TR(0x5cc394);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff80ull))));
}
B5cc397:{NFSU2_TR(0x5cc397);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc39a:{NFSU2_TR(0x5cc39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc39d:{NFSU2_TR(0x5cc39d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5cc39f:{NFSU2_TR(0x5cc39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc3a2:{NFSU2_TR(0x5cc3a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc3a4:{NFSU2_TR(0x5cc3a4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5cc3a8:{NFSU2_TR(0x5cc3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc3ab:{NFSU2_TR(0x5cc3ab);
if(r1(R+518)){{goto L5cc430;}}
}
B5cc3b1:L5cc3b1:{c.instructions+=3;NFSU2_TR(0x5cc3b1);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5cc3b6:{NFSU2_TR(0x5cc3b6);
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
B5cc3b8:{NFSU2_TR(0x5cc3b8);
if(r1(R+518)){{goto L5cc3d9;}}
}
B5cc3ba:L5cc3ba:{c.instructions+=2;NFSU2_TR(0x5cc3ba);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5cc3bd:{NFSU2_TR(0x5cc3bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc3d9;}}
}
B5cc3bf:L5cc3bf:{c.instructions+=3;NFSU2_TR(0x5cc3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc3c2:{NFSU2_TR(0x5cc3c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3c3:{NFSU2_TR(0x5cc3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc3c8ull));
TAIL_STATIC(0x5bc6b0u,5bc);
}
B5cc3c8:L5cc3c8:{c.instructions+=3;NFSU2_TR(0x5cc3c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cc3cb:{NFSU2_TR(0x5cc3cb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5cc3ce:{NFSU2_TR(0x5cc3ce);
if(r1(R+518)){{goto L5cc3d9;}}
}
B5cc3d0:L5cc3d0:{c.instructions+=2;NFSU2_TR(0x5cc3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc3d7:{NFSU2_TR(0x5cc3d7);
{goto L5cc430;}
}
B5cc3d9:L5cc3d9:{c.instructions+=11;NFSU2_TR(0x5cc3d9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc3de:{NFSU2_TR(0x5cc3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc3e0:{NFSU2_TR(0x5cc3e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3e2:{NFSU2_TR(0x5cc3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc3e5:{NFSU2_TR(0x5cc3e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3e6:{NFSU2_TR(0x5cc3e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3e8:{NFSU2_TR(0x5cc3e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3ea:{NFSU2_TR(0x5cc3ea);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3ec:{NFSU2_TR(0x5cc3ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3ed:{NFSU2_TR(0x5cc3ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3ee:{NFSU2_TR(0x5cc3ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc3f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc3f1:L5cc3f1:{c.instructions+=10;NFSU2_TR(0x5cc3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cc3f3:{NFSU2_TR(0x5cc3f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3f5:{NFSU2_TR(0x5cc3f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc3f9:{NFSU2_TR(0x5cc3f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3fa:{NFSU2_TR(0x5cc3fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3fc:{NFSU2_TR(0x5cc3fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc3fe:{NFSU2_TR(0x5cc3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc405:{NFSU2_TR(0x5cc405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc407:{NFSU2_TR(0x5cc407);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc408:{NFSU2_TR(0x5cc408);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc40bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc40b:L5cc40b:{c.instructions+=5;NFSU2_TR(0x5cc40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc40e:{NFSU2_TR(0x5cc40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cc411:{NFSU2_TR(0x5cc411);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cc415:{NFSU2_TR(0x5cc415);
__builtin_memmove((R+8),(R+4),4);
}
B5cc417:{NFSU2_TR(0x5cc417);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5cc41a:L5cc41a:{c.instructions+=1;NFSU2_TR(0x5cc41a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cc41c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc41au);}goto L5cc41a;}
}
B5cc41c:L5cc41c:{c.instructions+=2;NFSU2_TR(0x5cc41c);
__builtin_memmove((R+4),(R+8),4);
}
B5cc41e:{NFSU2_TR(0x5cc41e);
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
B5cc421:L5cc421:{c.instructions+=1;NFSU2_TR(0x5cc421);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5cc423;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc421u);}goto L5cc421;}
}
B5cc423:L5cc423:{c.instructions+=1;NFSU2_TR(0x5cc423);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc426:L5cc426:{c.instructions+=3;NFSU2_TR(0x5cc426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc428:{NFSU2_TR(0x5cc428);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc429:{NFSU2_TR(0x5cc429);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc42cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc42c:L5cc42c:{c.instructions+=1;NFSU2_TR(0x5cc42c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cc430:L5cc430:{c.instructions+=5;NFSU2_TR(0x5cc430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc433:{NFSU2_TR(0x5cc433);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc437:{NFSU2_TR(0x5cc437);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5cc43b:{NFSU2_TR(0x5cc43b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5cc43d:{NFSU2_TR(0x5cc43d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc2adu);}goto L5cc2ad;}}
}
B5cc443:L5cc443:{c.instructions+=7;NFSU2_TR(0x5cc443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cc444:{NFSU2_TR(0x5cc444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc445:{NFSU2_TR(0x5cc445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cc446:{NFSU2_TR(0x5cc446);
w4(R+0,u32(0x1ull));
}
B5cc44b:{NFSU2_TR(0x5cc44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cc44c:{NFSU2_TR(0x5cc44c);
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
B5cc44f:{NFSU2_TR(0x5cc44f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cc460:L5cc460:{c.instructions+=8;NFSU2_TR(0x5cc460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc461:{NFSU2_TR(0x5cc461);
__builtin_memmove((R+20),(R+16),4);
}
B5cc463:{NFSU2_TR(0x5cc463);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5cc466:{NFSU2_TR(0x5cc466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B5cc469:{NFSU2_TR(0x5cc469);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc46a:{NFSU2_TR(0x5cc46a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc46c:{NFSU2_TR(0x5cc46c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc474:{NFSU2_TR(0x5cc474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc479ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cc479:L5cc479:{c.instructions+=5;NFSU2_TR(0x5cc479);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc47c:{NFSU2_TR(0x5cc47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc47f:{NFSU2_TR(0x5cc47f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cc482:{NFSU2_TR(0x5cc482);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cc484:{NFSU2_TR(0x5cc484);
if(r1(R+518)){{goto L5cc48e;}}
}
B5cc486:L5cc486:{c.instructions+=1;NFSU2_TR(0x5cc486);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc48e:L5cc48e:{c.instructions+=2;NFSU2_TR(0x5cc48e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc490:{NFSU2_TR(0x5cc490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc495ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cc495:L5cc495:{c.instructions+=9;NFSU2_TR(0x5cc495);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc49b:{NFSU2_TR(0x5cc49b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cc49f:{NFSU2_TR(0x5cc49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc4a2:{NFSU2_TR(0x5cc4a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cc4a5:{NFSU2_TR(0x5cc4a5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5cc4a7:{NFSU2_TR(0x5cc4a7);
{u32 ea_=u32(u32(8011888u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B5cc4ad:{NFSU2_TR(0x5cc4ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc4af:{NFSU2_TR(0x5cc4af);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc4b2:{NFSU2_TR(0x5cc4b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc4e5;}}
}
B5cc4b4:L5cc4b4:{c.instructions+=5;NFSU2_TR(0x5cc4b4);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc4ba:{NFSU2_TR(0x5cc4ba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc4be:{NFSU2_TR(0x5cc4be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc4c0:{NFSU2_TR(0x5cc4c0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cc4c3:{NFSU2_TR(0x5cc4c3);
if(r1(R+514)){{goto L5cc4d3;}}
}
B5cc4c5:L5cc4c5:{c.instructions+=3;NFSU2_TR(0x5cc4c5);
{u32 ea_=u32(u32(8386496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc4cb:{NFSU2_TR(0x5cc4cb);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cc4d1:{NFSU2_TR(0x5cc4d1);
{goto L5cc4df;}
}
B5cc4d3:L5cc4d3:{c.instructions+=2;NFSU2_TR(0x5cc4d3);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc4d9:{NFSU2_TR(0x5cc4d9);
{u32 ea_=u32(u32(8386500u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cc4df:L5cc4df:{c.instructions+=1;NFSU2_TR(0x5cc4df);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc4e5:L5cc4e5:{c.instructions+=81;NFSU2_TR(0x5cc4e5);
{u32 ea_=u32(r4(R+4)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc4eb:{NFSU2_TR(0x5cc4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc4f1:{NFSU2_TR(0x5cc4f1);
{u32 ea_=u32(r4(R+4)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc4f7:{NFSU2_TR(0x5cc4f7);
{u32 ea_=u32(r4(R+4)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc4fd:{NFSU2_TR(0x5cc4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc501:{NFSU2_TR(0x5cc501);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5cc503:{NFSU2_TR(0x5cc503);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc509:{NFSU2_TR(0x5cc509);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5cc50b:{NFSU2_TR(0x5cc50b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc50f:{NFSU2_TR(0x5cc50f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5cc511:{NFSU2_TR(0x5cc511);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cc517:{NFSU2_TR(0x5cc517);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5cc519:{NFSU2_TR(0x5cc519);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc51d:{NFSU2_TR(0x5cc51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc525:{NFSU2_TR(0x5cc525);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc527:{NFSU2_TR(0x5cc527);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5cc529:{NFSU2_TR(0x5cc529);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5cc52b:{NFSU2_TR(0x5cc52b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc52d:{NFSU2_TR(0x5cc52d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5cc52f:{NFSU2_TR(0x5cc52f);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5cc531:{NFSU2_TR(0x5cc531);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cc533:{NFSU2_TR(0x5cc533);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5cc535:{NFSU2_TR(0x5cc535);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc539:{NFSU2_TR(0x5cc539);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc53d:{NFSU2_TR(0x5cc53d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc540:{NFSU2_TR(0x5cc540);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc544:{NFSU2_TR(0x5cc544);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc547:{NFSU2_TR(0x5cc547);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc549:{NFSU2_TR(0x5cc549);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc54d:{NFSU2_TR(0x5cc54d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc54f:{NFSU2_TR(0x5cc54f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc551:{NFSU2_TR(0x5cc551);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc554:{NFSU2_TR(0x5cc554);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc55a:{NFSU2_TR(0x5cc55a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc55c:{NFSU2_TR(0x5cc55c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc560:{NFSU2_TR(0x5cc560);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc563:{NFSU2_TR(0x5cc563);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc567:{NFSU2_TR(0x5cc567);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc56a:{NFSU2_TR(0x5cc56a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc56c:{NFSU2_TR(0x5cc56c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc570:{NFSU2_TR(0x5cc570);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc573:{NFSU2_TR(0x5cc573);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc575:{NFSU2_TR(0x5cc575);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc578:{NFSU2_TR(0x5cc578);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc57e:{NFSU2_TR(0x5cc57e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc580:{NFSU2_TR(0x5cc580);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc584:{NFSU2_TR(0x5cc584);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc587:{NFSU2_TR(0x5cc587);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc58b:{NFSU2_TR(0x5cc58b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc58e:{NFSU2_TR(0x5cc58e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc590:{NFSU2_TR(0x5cc590);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc594:{NFSU2_TR(0x5cc594);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc597:{NFSU2_TR(0x5cc597);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc599:{NFSU2_TR(0x5cc599);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc59c:{NFSU2_TR(0x5cc59c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc5a2:{NFSU2_TR(0x5cc5a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc5a4:{NFSU2_TR(0x5cc5a4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc5a8:{NFSU2_TR(0x5cc5a8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc5ac:{NFSU2_TR(0x5cc5ac);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc5af:{NFSU2_TR(0x5cc5af);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc5b3:{NFSU2_TR(0x5cc5b3);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc5b6:{NFSU2_TR(0x5cc5b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc5b8:{NFSU2_TR(0x5cc5b8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc5bc:{NFSU2_TR(0x5cc5bc);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc5bf:{NFSU2_TR(0x5cc5bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc5c1:{NFSU2_TR(0x5cc5c1);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc5c4:{NFSU2_TR(0x5cc5c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cc5c8:{NFSU2_TR(0x5cc5c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc5ce:{NFSU2_TR(0x5cc5ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc5d2:{NFSU2_TR(0x5cc5d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc5d4:{NFSU2_TR(0x5cc5d4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc5d8:{NFSU2_TR(0x5cc5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cc5dc:{NFSU2_TR(0x5cc5dc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5cc5de:{NFSU2_TR(0x5cc5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc5e2:{NFSU2_TR(0x5cc5e2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc5e6:{NFSU2_TR(0x5cc5e6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc5ea:{NFSU2_TR(0x5cc5ea);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc5ee:{NFSU2_TR(0x5cc5ee);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc5f4:{NFSU2_TR(0x5cc5f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc5f6:{NFSU2_TR(0x5cc5f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc5f9:{NFSU2_TR(0x5cc5f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc63f;}}
}
B5cc5fb:L5cc5fb:{c.instructions+=5;NFSU2_TR(0x5cc5fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc5ff:{NFSU2_TR(0x5cc5ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc600:{NFSU2_TR(0x5cc600);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cc604:{NFSU2_TR(0x5cc604);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc605:{NFSU2_TR(0x5cc605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc60aull));
TAIL_STATIC(0x43d010u,43d);
}
B5cc60a:L5cc60a:{c.instructions+=14;NFSU2_TR(0x5cc60a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc60e:{NFSU2_TR(0x5cc60e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cc612:{NFSU2_TR(0x5cc612);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cc615:{NFSU2_TR(0x5cc615);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc619:{NFSU2_TR(0x5cc619);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc61d:{NFSU2_TR(0x5cc61d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cc621:{NFSU2_TR(0x5cc621);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc625:{NFSU2_TR(0x5cc625);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc629:{NFSU2_TR(0x5cc629);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cc62d:{NFSU2_TR(0x5cc62d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc631:{NFSU2_TR(0x5cc631);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc635:{NFSU2_TR(0x5cc635);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cc639:{NFSU2_TR(0x5cc639);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc63d:{NFSU2_TR(0x5cc63d);
{goto L5cc651;}
}
B5cc63f:L5cc63f:{c.instructions+=5;NFSU2_TR(0x5cc63f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5cc641:{NFSU2_TR(0x5cc641);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc645:{NFSU2_TR(0x5cc645);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc649:{NFSU2_TR(0x5cc649);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc64d:{NFSU2_TR(0x5cc64d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc651:L5cc651:{c.instructions+=9;NFSU2_TR(0x5cc651);
__builtin_memmove((R+0),gp(0x7ff7b0),4);
}
B5cc656:{NFSU2_TR(0x5cc656);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc65a:{NFSU2_TR(0x5cc65a);
__builtin_memmove((R+4),gp(0x7ff7b4),4);
}
B5cc660:{NFSU2_TR(0x5cc660);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc664:{NFSU2_TR(0x5cc664);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc668:{NFSU2_TR(0x5cc668);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc66c:{NFSU2_TR(0x5cc66c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc66e:{NFSU2_TR(0x5cc66e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cc671:{NFSU2_TR(0x5cc671);
if(r1(R+514)){{goto L5cc67b;}}
}
B5cc673:L5cc673:{c.instructions+=2;NFSU2_TR(0x5cc673);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc679:{NFSU2_TR(0x5cc679);
{goto L5cc6a4;}
}
B5cc67b:L5cc67b:{c.instructions+=5;NFSU2_TR(0x5cc67b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc67f:{NFSU2_TR(0x5cc67f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc683:{NFSU2_TR(0x5cc683);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc685:{NFSU2_TR(0x5cc685);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc688:{NFSU2_TR(0x5cc688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc692;}}
}
B5cc68a:L5cc68a:{c.instructions+=2;NFSU2_TR(0x5cc68a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc690:{NFSU2_TR(0x5cc690);
{goto L5cc6a4;}
}
B5cc692:L5cc692:{c.instructions+=5;NFSU2_TR(0x5cc692);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc696:{NFSU2_TR(0x5cc696);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cc69a:{NFSU2_TR(0x5cc69a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc69e:{NFSU2_TR(0x5cc69e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cc6a2:{NFSU2_TR(0x5cc6a2);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5cc6a4:L5cc6a4:{c.instructions+=8;NFSU2_TR(0x5cc6a4);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc6aa:{NFSU2_TR(0x5cc6aa);
{u32 ea_=u32(u32(8011880u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5cc6b0:{NFSU2_TR(0x5cc6b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5cc6b2:{NFSU2_TR(0x5cc6b2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5cc6b6:{NFSU2_TR(0x5cc6b6);
{u32 ea_=u32(u32(8386488u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc6bc:{NFSU2_TR(0x5cc6bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc6be:{NFSU2_TR(0x5cc6be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc6c1:{NFSU2_TR(0x5cc6c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc6cd;}}
}
B5cc6c3:L5cc6c3:{c.instructions+=2;NFSU2_TR(0x5cc6c3);
__builtin_memmove((R+8),gp(0x7ff7b8),4);
}
B5cc6c9:{NFSU2_TR(0x5cc6c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cc6cd:L5cc6cd:{c.instructions+=5;NFSU2_TR(0x5cc6cd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc6d1:{NFSU2_TR(0x5cc6d1);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc6d7:{NFSU2_TR(0x5cc6d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc6d9:{NFSU2_TR(0x5cc6d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cc6dc:{NFSU2_TR(0x5cc6dc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5cc89c;}}
}
B5cc6e2:L5cc6e2:{c.instructions+=32;NFSU2_TR(0x5cc6e2);
{u32 ea_=u32(u32(8849664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc6e8:{NFSU2_TR(0x5cc6e8);
__builtin_memmove((R+8),gp(0x86eb0c),4);
}
B5cc6ee:{NFSU2_TR(0x5cc6ee);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc6f4:{NFSU2_TR(0x5cc6f4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc6f9:{NFSU2_TR(0x5cc6f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc6fb:{NFSU2_TR(0x5cc6fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc6fd:{NFSU2_TR(0x5cc6fd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cc703:{NFSU2_TR(0x5cc703);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc705:{NFSU2_TR(0x5cc705);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc706:{NFSU2_TR(0x5cc706);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5cc70c:{NFSU2_TR(0x5cc70c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc710:{NFSU2_TR(0x5cc710);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc712:{NFSU2_TR(0x5cc712);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc713:{NFSU2_TR(0x5cc713);
{u32 ea_=u32(u32(8386492u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc719:{NFSU2_TR(0x5cc719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc71a:{NFSU2_TR(0x5cc71a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc71e:{NFSU2_TR(0x5cc71e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc726:{NFSU2_TR(0x5cc726);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5cc728:{NFSU2_TR(0x5cc728);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc72e:{NFSU2_TR(0x5cc72e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc732:{NFSU2_TR(0x5cc732);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc736:{NFSU2_TR(0x5cc736);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5cc738:{NFSU2_TR(0x5cc738);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc73e:{NFSU2_TR(0x5cc73e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc742:{NFSU2_TR(0x5cc742);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc746:{NFSU2_TR(0x5cc746);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5cc748:{NFSU2_TR(0x5cc748);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc74e:{NFSU2_TR(0x5cc74e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc752:{NFSU2_TR(0x5cc752);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc756:{NFSU2_TR(0x5cc756);
{u32 ea_=u32(u32(7905516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc75c:{NFSU2_TR(0x5cc75c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc760:{NFSU2_TR(0x5cc760);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc766ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc766:L5cc766:{c.instructions+=14;NFSU2_TR(0x5cc766);
__builtin_memmove((R+8),gp(0x86eb88),4);
}
B5cc76c:{NFSU2_TR(0x5cc76c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc770:{NFSU2_TR(0x5cc770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc771:{NFSU2_TR(0x5cc771);
__builtin_memmove((R+0),gp(0x86eb10),4);
}
B5cc776:{NFSU2_TR(0x5cc776);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cc77a:{NFSU2_TR(0x5cc77a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc77b:{NFSU2_TR(0x5cc77b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc77d:{NFSU2_TR(0x5cc77d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc77e:{NFSU2_TR(0x5cc77e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc77f:{NFSU2_TR(0x5cc77f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc787:{NFSU2_TR(0x5cc787);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc78f:{NFSU2_TR(0x5cc78f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3e800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc797:{NFSU2_TR(0x5cc797);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc79f:{NFSU2_TR(0x5cc79f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc7a4ull));
TAIL_STATIC(0x5c5c00u,5c5);
}
B5cc7a4:L5cc7a4:{c.instructions+=22;NFSU2_TR(0x5cc7a4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc7a8:{NFSU2_TR(0x5cc7a8);
{u32 ea_=u32(u32(8011872u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5cc7ae:{NFSU2_TR(0x5cc7ae);
__builtin_memmove((R+0),gp(0x86eb8c),4);
}
B5cc7b3:{NFSU2_TR(0x5cc7b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cc7b7:{NFSU2_TR(0x5cc7b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc7b8:{NFSU2_TR(0x5cc7b8);
__builtin_memmove((R+4),gp(0x86eb0c),4);
}
B5cc7be:{NFSU2_TR(0x5cc7be);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc7c2:{NFSU2_TR(0x5cc7c2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc7c6:{NFSU2_TR(0x5cc7c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cc7ca:{NFSU2_TR(0x5cc7ca);
{u32 ea_=u32(u32(8011872u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5cc7d0:{NFSU2_TR(0x5cc7d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc7d1:{NFSU2_TR(0x5cc7d1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc7d3:{NFSU2_TR(0x5cc7d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc7d4:{NFSU2_TR(0x5cc7d4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc7d8:{NFSU2_TR(0x5cc7d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc7d9:{NFSU2_TR(0x5cc7d9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc7dd:{NFSU2_TR(0x5cc7dd);
{u32 ea_=u32(u32(8011872u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5cc7e3:{NFSU2_TR(0x5cc7e3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc7e7:{NFSU2_TR(0x5cc7e7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc7eb:{NFSU2_TR(0x5cc7eb);
{u32 ea_=u32(u32(8011872u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5cc7f1:{NFSU2_TR(0x5cc7f1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cc7f5:{NFSU2_TR(0x5cc7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc7faull));
TAIL_STATIC(0x5c5c00u,5c5);
}
B5cc7fa:L5cc7fa:{c.instructions+=6;NFSU2_TR(0x5cc7fa);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc7fe:{NFSU2_TR(0x5cc7fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5cc801:{NFSU2_TR(0x5cc801);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cc807:{NFSU2_TR(0x5cc807);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cc809:{NFSU2_TR(0x5cc809);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc80c:{NFSU2_TR(0x5cc80c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc816;}}
}
B5cc80e:L5cc80e:{c.instructions+=1;NFSU2_TR(0x5cc80e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cc816:L5cc816:{c.instructions+=3;NFSU2_TR(0x5cc816);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cc81a:{NFSU2_TR(0x5cc81a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cc820:{NFSU2_TR(0x5cc820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc825ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cc825:L5cc825:{c.instructions+=13;NFSU2_TR(0x5cc825);
__builtin_memmove((R+4),gp(0x870974),4);
}
B5cc82b:{NFSU2_TR(0x5cc82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc82d:{NFSU2_TR(0x5cc82d);
__builtin_memmove((R+24),(R+0),4);
}
B5cc82f:{NFSU2_TR(0x5cc82f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5cc832:{NFSU2_TR(0x5cc832);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B5cc834:{NFSU2_TR(0x5cc834);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5cc837:{NFSU2_TR(0x5cc837);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B5cc839:{NFSU2_TR(0x5cc839);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5cc83c:{NFSU2_TR(0x5cc83c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cc83e:{NFSU2_TR(0x5cc83e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc83f:{NFSU2_TR(0x5cc83f);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc844:{NFSU2_TR(0x5cc844);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc845:{NFSU2_TR(0x5cc845);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc84bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc84b:L5cc84b:{c.instructions+=4;NFSU2_TR(0x5cc84b);
__builtin_memmove((R+0),gp(0x8707cc),1);
}
B5cc850:{NFSU2_TR(0x5cc850);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cc852:{NFSU2_TR(0x5cc852);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc854:{NFSU2_TR(0x5cc854);
if(r1(R+518)){{goto L5cc87c;}}
}
B5cc856:L5cc856:{c.instructions+=10;NFSU2_TR(0x5cc856);
__builtin_memmove((R+4),gp(0x870850),4);
}
B5cc85c:{NFSU2_TR(0x5cc85c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc85e:{NFSU2_TR(0x5cc85e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc860:{NFSU2_TR(0x5cc860);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc862:{NFSU2_TR(0x5cc862);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cc866:{NFSU2_TR(0x5cc866);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc867:{NFSU2_TR(0x5cc867);
u8 U[4];
w4(U+0,u32(0x86eb88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc86c:{NFSU2_TR(0x5cc86c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc86e:{NFSU2_TR(0x5cc86e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc86f:{NFSU2_TR(0x5cc86f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc874ull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5cc874:L5cc874:{c.instructions+=5;NFSU2_TR(0x5cc874);
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
B5cc877:{NFSU2_TR(0x5cc877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc878:{NFSU2_TR(0x5cc878);
__builtin_memmove((R+16),(R+20),4);
}
B5cc87a:{NFSU2_TR(0x5cc87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cc87b:{NFSU2_TR(0x5cc87b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cc87c:L5cc87c:{c.instructions+=10;NFSU2_TR(0x5cc87c);
__builtin_memmove((R+0),gp(0x870850),4);
}
B5cc881:{NFSU2_TR(0x5cc881);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc883:{NFSU2_TR(0x5cc883);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc885:{NFSU2_TR(0x5cc885);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc887:{NFSU2_TR(0x5cc887);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cc88b:{NFSU2_TR(0x5cc88b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc88c:{NFSU2_TR(0x5cc88c);
u8 U[4];
w4(U+0,u32(0x86eb88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc891:{NFSU2_TR(0x5cc891);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc893:{NFSU2_TR(0x5cc893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc894:{NFSU2_TR(0x5cc894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc899ull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5cc899:L5cc899:{c.instructions+=1;NFSU2_TR(0x5cc899);
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
B5cc89c:L5cc89c:{c.instructions+=4;NFSU2_TR(0x5cc89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc89d:{NFSU2_TR(0x5cc89d);
__builtin_memmove((R+16),(R+20),4);
}
B5cc89f:{NFSU2_TR(0x5cc89f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cc8a0:{NFSU2_TR(0x5cc8a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cc8b0:L5cc8b0:{c.instructions+=3;NFSU2_TR(0x5cc8b0);
__builtin_memmove((R+0),gp(0x870d00),4);
}
B5cc8b5:{NFSU2_TR(0x5cc8b5);
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
B5cc8b7:{NFSU2_TR(0x5cc8b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc914;}}
}
B5cc8b9:L5cc8b9:{c.instructions+=3;NFSU2_TR(0x5cc8b9);
__builtin_memmove((R+0),gp(0x8707cc),1);
}
B5cc8be:{NFSU2_TR(0x5cc8be);
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
B5cc8c0:{NFSU2_TR(0x5cc8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc914;}}
}
B5cc8c2:L5cc8c2:{c.instructions+=3;NFSU2_TR(0x5cc8c2);
__builtin_memmove((R+0),gp(0x8707d2),1);
}
B5cc8c7:{NFSU2_TR(0x5cc8c7);
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
B5cc8c9:{NFSU2_TR(0x5cc8c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc914;}}
}
B5cc8cb:L5cc8cb:{c.instructions+=11;NFSU2_TR(0x5cc8cb);
__builtin_memmove((R+8),gp(0x86ffa8),4);
}
B5cc8d1:{NFSU2_TR(0x5cc8d1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc8d6:{NFSU2_TR(0x5cc8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cc8d8:{NFSU2_TR(0x5cc8d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8da:{NFSU2_TR(0x5cc8da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8dc:{NFSU2_TR(0x5cc8dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8dd:{NFSU2_TR(0x5cc8dd);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5cc8e3:{NFSU2_TR(0x5cc8e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8e5:{NFSU2_TR(0x5cc8e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8e6:{NFSU2_TR(0x5cc8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8e7:{NFSU2_TR(0x5cc8e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc8edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc8ed:L5cc8ed:{c.instructions+=8;NFSU2_TR(0x5cc8ed);
__builtin_memmove((R+0),gp(0x86ff74),4);
}
B5cc8f2:{NFSU2_TR(0x5cc8f2);
__builtin_memmove((R+4),gp(0x86ffb0),4);
}
B5cc8f8:{NFSU2_TR(0x5cc8f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8fa:{NFSU2_TR(0x5cc8fa);
u8 U[4];
w4(U+0,u32(0x7ff190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc8ff:{NFSU2_TR(0x5cc8ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc901:{NFSU2_TR(0x5cc901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc902:{NFSU2_TR(0x5cc902);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc903:{NFSU2_TR(0x5cc903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc908ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cc908:L5cc908:{c.instructions+=2;NFSU2_TR(0x5cc908);
s4(0x8708f4,u32(0xffffffffull));
}
B5cc912:{NFSU2_TR(0x5cc912);
{goto L5cc982;}
}
B5cc914:L5cc914:{c.instructions+=11;NFSU2_TR(0x5cc914);
__builtin_memmove((R+4),gp(0x86eb0c),4);
}
B5cc91a:{NFSU2_TR(0x5cc91a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc91f:{NFSU2_TR(0x5cc91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc921:{NFSU2_TR(0x5cc921);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc923:{NFSU2_TR(0x5cc923);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc925:{NFSU2_TR(0x5cc925);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc926:{NFSU2_TR(0x5cc926);
__builtin_memmove((R+4),gp(0x870850),4);
}
B5cc92c:{NFSU2_TR(0x5cc92c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc92e:{NFSU2_TR(0x5cc92e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc92f:{NFSU2_TR(0x5cc92f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc930:{NFSU2_TR(0x5cc930);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc936ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc936:L5cc936:{c.instructions+=4;NFSU2_TR(0x5cc936);
__builtin_memmove((R+0),gp(0x8707cc),1);
}
B5cc93b:{NFSU2_TR(0x5cc93b);
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
B5cc93d:{NFSU2_TR(0x5cc93d);
s4(0x8708f4,u32(0x0ull));
}
B5cc947:{NFSU2_TR(0x5cc947);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cc952;}}
}
B5cc949:L5cc949:{c.instructions+=3;NFSU2_TR(0x5cc949);
__builtin_memmove((R+0),gp(0x8707ce),1);
}
B5cc94e:{NFSU2_TR(0x5cc94e);
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
B5cc950:{NFSU2_TR(0x5cc950);
if(r1(R+518)){{goto L5cc985;}}
}
B5cc952:L5cc952:{c.instructions+=6;NFSU2_TR(0x5cc952);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc957:{NFSU2_TR(0x5cc957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc959:{NFSU2_TR(0x5cc959);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc95b:{NFSU2_TR(0x5cc95b);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc960:{NFSU2_TR(0x5cc960);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc961:{NFSU2_TR(0x5cc961);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc967ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc967:L5cc967:{c.instructions+=8;NFSU2_TR(0x5cc967);
__builtin_memmove((R+0),gp(0x86eb88),4);
}
B5cc96c:{NFSU2_TR(0x5cc96c);
__builtin_memmove((R+4),gp(0x86ffa8),4);
}
B5cc972:{NFSU2_TR(0x5cc972);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc974:{NFSU2_TR(0x5cc974);
u8 U[4];
w4(U+0,u32(0x7ff1fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc979:{NFSU2_TR(0x5cc979);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc97b:{NFSU2_TR(0x5cc97b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc97c:{NFSU2_TR(0x5cc97c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc97d:{NFSU2_TR(0x5cc97d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc982ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cc982:L5cc982:{c.instructions+=1;NFSU2_TR(0x5cc982);
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
B5cc985:L5cc985:{c.instructions+=6;NFSU2_TR(0x5cc985);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cc98a:{NFSU2_TR(0x5cc98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cc98c:{NFSU2_TR(0x5cc98c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc98e:{NFSU2_TR(0x5cc98e);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc993:{NFSU2_TR(0x5cc993);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc994:{NFSU2_TR(0x5cc994);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc99aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cc99a:L5cc99a:{c.instructions+=1;NFSU2_TR(0x5cc99a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cc9a0:L5cc9a0:{c.instructions+=5;NFSU2_TR(0x5cc9a0);
__builtin_memmove((R+0),gp(0x7ff110),4);
}
B5cc9a5:{NFSU2_TR(0x5cc9a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9a6:{NFSU2_TR(0x5cc9a6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cc9a8:{NFSU2_TR(0x5cc9a8);
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
B5cc9aa:{NFSU2_TR(0x5cc9aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cc9f3;}}
}
B5cc9ac:L5cc9ac:{c.instructions+=1;NFSU2_TR(0x5cc9ac);
__builtin_memmove((R+16),(R+16),4);
}
B5cc9b0:L5cc9b0:{c.instructions+=8;NFSU2_TR(0x5cc9b0);
__builtin_memmove((R+0),gp(0x86ff74),4);
}
B5cc9b5:{NFSU2_TR(0x5cc9b5);
__builtin_memmove((R+4),gp(0x86ffac),4);
}
B5cc9bb:{NFSU2_TR(0x5cc9bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9bd:{NFSU2_TR(0x5cc9bd);
u8 U[4];
w4(U+0,u32(0x7ff1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9c2:{NFSU2_TR(0x5cc9c2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9c4:{NFSU2_TR(0x5cc9c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9c5:{NFSU2_TR(0x5cc9c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9c6:{NFSU2_TR(0x5cc9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc9cbull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cc9cb:L5cc9cb:{c.instructions+=8;NFSU2_TR(0x5cc9cb);
__builtin_memmove((R+8),gp(0x86ff78),4);
}
B5cc9d1:{NFSU2_TR(0x5cc9d1);
__builtin_memmove((R+0),gp(0x86ffa8),4);
}
B5cc9d6:{NFSU2_TR(0x5cc9d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9d8:{NFSU2_TR(0x5cc9d8);
u8 U[4];
w4(U+0,u32(0x7ff19cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9dd:{NFSU2_TR(0x5cc9dd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9df:{NFSU2_TR(0x5cc9df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9e0:{NFSU2_TR(0x5cc9e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cc9e1:{NFSU2_TR(0x5cc9e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cc9e6ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cc9e6:L5cc9e6:{c.instructions+=5;NFSU2_TR(0x5cc9e6);
__builtin_memmove((R+0),gp(0x7ff110),4);
}
B5cc9eb:{NFSU2_TR(0x5cc9eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5cc9ee:{NFSU2_TR(0x5cc9ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cc9ef:{NFSU2_TR(0x5cc9ef);
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
B5cc9f1:{NFSU2_TR(0x5cc9f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cc9b0u);}goto L5cc9b0;}}
}
B5cc9f3:L5cc9f3:{c.instructions+=2;NFSU2_TR(0x5cc9f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cc9f4:{NFSU2_TR(0x5cc9f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cca00:L5cca00:{c.instructions+=4;NFSU2_TR(0x5cca00);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5cca05:{NFSU2_TR(0x5cca05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5cca08:{NFSU2_TR(0x5cca08);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cca0b:{NFSU2_TR(0x5cca0b);
if(r1(R+518)){{goto L5cca4a;}}
}
B5cca0d:L5cca0d:{c.instructions+=8;NFSU2_TR(0x5cca0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cca14:{NFSU2_TR(0x5cca14);
__builtin_memmove((R+4),gp(0x86ffb0),4);
}
B5cca1a:{NFSU2_TR(0x5cca1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca1c:{NFSU2_TR(0x5cca1c);
u8 U[4];
w4(U+0,u32(0x7ff190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca21:{NFSU2_TR(0x5cca21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca23:{NFSU2_TR(0x5cca23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca24:{NFSU2_TR(0x5cca24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca25:{NFSU2_TR(0x5cca25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cca2aull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cca2a:L5cca2a:{c.instructions+=8;NFSU2_TR(0x5cca2a);
__builtin_memmove((R+8),gp(0x86ff7c),4);
}
B5cca30:{NFSU2_TR(0x5cca30);
__builtin_memmove((R+0),gp(0x86ffa8),4);
}
B5cca35:{NFSU2_TR(0x5cca35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca37:{NFSU2_TR(0x5cca37);
u8 U[4];
w4(U+0,u32(0x7ff22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca3c:{NFSU2_TR(0x5cca3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca3e:{NFSU2_TR(0x5cca3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca3f:{NFSU2_TR(0x5cca3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca40:{NFSU2_TR(0x5cca40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cca45ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cca45:L5cca45:{c.instructions+=2;NFSU2_TR(0x5cca45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5cca48:{NFSU2_TR(0x5cca48);
{goto L5cca69;}
}
B5cca4a:L5cca4a:{c.instructions+=8;NFSU2_TR(0x5cca4a);
__builtin_memmove((R+4),gp(0x86ff7c),4);
}
B5cca50:{NFSU2_TR(0x5cca50);
__builtin_memmove((R+8),gp(0x86ffa8),4);
}
B5cca56:{NFSU2_TR(0x5cca56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca58:{NFSU2_TR(0x5cca58);
u8 U[4];
w4(U+0,u32(0x7ff22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca5d:{NFSU2_TR(0x5cca5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca5f:{NFSU2_TR(0x5cca5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca60:{NFSU2_TR(0x5cca60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca61:{NFSU2_TR(0x5cca61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cca66ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cca66:L5cca66:{c.instructions+=1;NFSU2_TR(0x5cca66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5cca69:L5cca69:{c.instructions+=5;NFSU2_TR(0x5cca69);
__builtin_memmove((R+0),gp(0x7ff110),4);
}
B5cca6e:{NFSU2_TR(0x5cca6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca6f:{NFSU2_TR(0x5cca6f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cca71:{NFSU2_TR(0x5cca71);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cca73:{NFSU2_TR(0x5cca73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ccac3;}}
}
B5cca75:L5cca75:{c.instructions+=1;NFSU2_TR(0x5cca75);
{goto L5cca80;}
}
B5cca80:L5cca80:{c.instructions+=8;NFSU2_TR(0x5cca80);
__builtin_memmove((R+0),gp(0x86ff74),4);
}
B5cca85:{NFSU2_TR(0x5cca85);
__builtin_memmove((R+4),gp(0x86ffac),4);
}
B5cca8b:{NFSU2_TR(0x5cca8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca8d:{NFSU2_TR(0x5cca8d);
u8 U[4];
w4(U+0,u32(0x7ff1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca92:{NFSU2_TR(0x5cca92);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca94:{NFSU2_TR(0x5cca94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca95:{NFSU2_TR(0x5cca95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cca96:{NFSU2_TR(0x5cca96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cca9bull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5cca9b:L5cca9b:{c.instructions+=8;NFSU2_TR(0x5cca9b);
__builtin_memmove((R+8),gp(0x86ff78),4);
}
B5ccaa1:{NFSU2_TR(0x5ccaa1);
__builtin_memmove((R+0),gp(0x86ffa8),4);
}
B5ccaa6:{NFSU2_TR(0x5ccaa6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccaa8:{NFSU2_TR(0x5ccaa8);
u8 U[4];
w4(U+0,u32(0x7ff19cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccaad:{NFSU2_TR(0x5ccaad);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccaaf:{NFSU2_TR(0x5ccaaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccab0:{NFSU2_TR(0x5ccab0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccab1:{NFSU2_TR(0x5ccab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccab6ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5ccab6:L5ccab6:{c.instructions+=5;NFSU2_TR(0x5ccab6);
__builtin_memmove((R+0),gp(0x7ff110),4);
}
B5ccabb:{NFSU2_TR(0x5ccabb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5ccabe:{NFSU2_TR(0x5ccabe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ccabf:{NFSU2_TR(0x5ccabf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ccac1:{NFSU2_TR(0x5ccac1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cca80u);}goto L5cca80;}}
}
B5ccac3:L5ccac3:{c.instructions+=15;NFSU2_TR(0x5ccac3);
__builtin_memmove((R+8),gp(0x8654a4),4);
}
B5ccac9:{NFSU2_TR(0x5ccac9);
__builtin_memmove((R+4),gp(0x870974),4);
}
B5ccacf:{NFSU2_TR(0x5ccacf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ccad1:{NFSU2_TR(0x5ccad1);
w4(R+24,u32(0x6ull));
}
B5ccad6:{NFSU2_TR(0x5ccad6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ccad8:{NFSU2_TR(0x5ccad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ccada:{NFSU2_TR(0x5ccada);
__builtin_memmove((R+0),(R+518),1);
}
B5ccadd:{NFSU2_TR(0x5ccadd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ccae5:{NFSU2_TR(0x5ccae5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ccae6:{NFSU2_TR(0x5ccae6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xefefeff0ull))));
}
B5ccaeb:{NFSU2_TR(0x5ccaeb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xb0b0b0b0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xb0b0b0b0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb0b0b0b0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccaf0:{NFSU2_TR(0x5ccaf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccaf1:{NFSU2_TR(0x5ccaf1);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccaf6:{NFSU2_TR(0x5ccaf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccaf7:{NFSU2_TR(0x5ccaf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccafdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccafd:L5ccafd:{c.instructions+=6;NFSU2_TR(0x5ccafd);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ccb02:{NFSU2_TR(0x5ccb02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ccb04:{NFSU2_TR(0x5ccb04);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb06:{NFSU2_TR(0x5ccb06);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb0b:{NFSU2_TR(0x5ccb0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb0c:{NFSU2_TR(0x5ccb0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccb12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccb12:L5ccb12:{c.instructions+=11;NFSU2_TR(0x5ccb12);
__builtin_memmove((R+0),gp(0x86ffa8),4);
}
B5ccb17:{NFSU2_TR(0x5ccb17);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb19:{NFSU2_TR(0x5ccb19);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb1b:{NFSU2_TR(0x5ccb1b);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb1d:{NFSU2_TR(0x5ccb1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb1f:{NFSU2_TR(0x5ccb1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ccb23:{NFSU2_TR(0x5ccb23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb24:{NFSU2_TR(0x5ccb24);
u8 U[4];
w4(U+0,u32(0x86ff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb29:{NFSU2_TR(0x5ccb29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb2b:{NFSU2_TR(0x5ccb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb2c:{NFSU2_TR(0x5ccb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccb31ull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5ccb31:L5ccb31:{c.instructions+=7;NFSU2_TR(0x5ccb31);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ccb36:{NFSU2_TR(0x5ccb36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ccb38:{NFSU2_TR(0x5ccb38);
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
B5ccb3b:{NFSU2_TR(0x5ccb3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb3d:{NFSU2_TR(0x5ccb3d);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb42:{NFSU2_TR(0x5ccb42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb43:{NFSU2_TR(0x5ccb43);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccb49ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccb49:L5ccb49:{c.instructions+=3;NFSU2_TR(0x5ccb49);
{u32 ea_=u32(u32(8384788u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ccb4f:{NFSU2_TR(0x5ccb4f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ccb55:{NFSU2_TR(0x5ccb55);
if(r1(R+518)){{goto L5ccb5f;}}
}
B5ccb57:L5ccb57:{c.instructions+=2;NFSU2_TR(0x5ccb57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ccb59:{NFSU2_TR(0x5ccb59);
{u32 ea_=u32(u32(7894456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ccb5f:L5ccb5f:{c.instructions+=1;NFSU2_TR(0x5ccb5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccb64ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ccb64:L5ccb64:{c.instructions+=13;NFSU2_TR(0x5ccb64);
__builtin_memmove((R+4),gp(0x870974),4);
}
B5ccb6a:{NFSU2_TR(0x5ccb6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ccb6c:{NFSU2_TR(0x5ccb6c);
__builtin_memmove((R+24),(R+0),4);
}
B5ccb6e:{NFSU2_TR(0x5ccb6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5ccb71:{NFSU2_TR(0x5ccb71);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B5ccb73:{NFSU2_TR(0x5ccb73);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5ccb76:{NFSU2_TR(0x5ccb76);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B5ccb78:{NFSU2_TR(0x5ccb78);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5ccb7b:{NFSU2_TR(0x5ccb7b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccb7d:{NFSU2_TR(0x5ccb7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb7e:{NFSU2_TR(0x5ccb7e);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb83:{NFSU2_TR(0x5ccb83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb84:{NFSU2_TR(0x5ccb84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccb8aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccb8a:L5ccb8a:{c.instructions+=11;NFSU2_TR(0x5ccb8a);
__builtin_memmove((R+4),gp(0x86ff70),4);
}
B5ccb90:{NFSU2_TR(0x5ccb90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb92:{NFSU2_TR(0x5ccb92);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb94:{NFSU2_TR(0x5ccb94);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb96:{NFSU2_TR(0x5ccb96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb98:{NFSU2_TR(0x5ccb98);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ccb9c:{NFSU2_TR(0x5ccb9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccb9d:{NFSU2_TR(0x5ccb9d);
u8 U[4];
w4(U+0,u32(0x86ff74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccba2:{NFSU2_TR(0x5ccba2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccba4:{NFSU2_TR(0x5ccba4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccba5:{NFSU2_TR(0x5ccba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccbaaull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5ccbaa:L5ccbaa:{c.instructions+=9;NFSU2_TR(0x5ccbaa);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ccbae:{NFSU2_TR(0x5ccbae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5ccbb1:{NFSU2_TR(0x5ccbb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ccbb3:{NFSU2_TR(0x5ccbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ccbb4:{NFSU2_TR(0x5ccbb4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbb6:{NFSU2_TR(0x5ccbb6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbb8:{NFSU2_TR(0x5ccbb8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbba:{NFSU2_TR(0x5ccbba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbbc:{NFSU2_TR(0x5ccbbc);
if(r1(R+518)){{goto L5ccc1c;}}
}
B5ccbbe:L5ccbbe:{c.instructions+=3;NFSU2_TR(0x5ccbbe);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5ccbc3:{NFSU2_TR(0x5ccbc3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ccbc6:{NFSU2_TR(0x5ccbc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ccbdc;}}
}
B5ccbc8:L5ccbc8:{c.instructions+=7;NFSU2_TR(0x5ccbc8);
__builtin_memmove((R+0),gp(0x870850),4);
}
B5ccbcd:{NFSU2_TR(0x5ccbcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ccbd1:{NFSU2_TR(0x5ccbd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbd2:{NFSU2_TR(0x5ccbd2);
u8 U[4];
w4(U+0,u32(0x86f2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbd7:{NFSU2_TR(0x5ccbd7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbd9:{NFSU2_TR(0x5ccbd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbda:{NFSU2_TR(0x5ccbda);
{goto L5ccc36;}
}
B5ccbdc:L5ccbdc:{c.instructions+=7;NFSU2_TR(0x5ccbdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ccbe3:{NFSU2_TR(0x5ccbe3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ccbe7:{NFSU2_TR(0x5ccbe7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbe8:{NFSU2_TR(0x5ccbe8);
u8 U[4];
w4(U+0,u32(0x86f2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbed:{NFSU2_TR(0x5ccbed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbef:{NFSU2_TR(0x5ccbef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccbf0:{NFSU2_TR(0x5ccbf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccbf5ull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5ccbf5:L5ccbf5:{c.instructions+=9;NFSU2_TR(0x5ccbf5);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5ccbfa:{NFSU2_TR(0x5ccbfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ccc01:{NFSU2_TR(0x5ccc01);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5ccc07:{NFSU2_TR(0x5ccc07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc09:{NFSU2_TR(0x5ccc09);
u8 U[4];
w4(U+0,u32(0x7ff190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc0e:{NFSU2_TR(0x5ccc0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc10:{NFSU2_TR(0x5ccc10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc11:{NFSU2_TR(0x5ccc11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc12:{NFSU2_TR(0x5ccc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccc17ull));
TAIL_STATIC(0x5c5f70u,5c5);
}
B5ccc17:L5ccc17:{c.instructions+=2;NFSU2_TR(0x5ccc17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B5ccc1a:{NFSU2_TR(0x5ccc1a);
{goto L5ccc3e;}
}
B5ccc1c:L5ccc1c:{c.instructions+=7;NFSU2_TR(0x5ccc1c);
__builtin_memmove((R+4),gp(0x8708f4),4);
}
B5ccc22:{NFSU2_TR(0x5ccc22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ccc29:{NFSU2_TR(0x5ccc29);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ccc2d:{NFSU2_TR(0x5ccc2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc2e:{NFSU2_TR(0x5ccc2e);
u8 U[4];
w4(U+0,u32(0x86f2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc33:{NFSU2_TR(0x5ccc33);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc35:{NFSU2_TR(0x5ccc35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc36:L5ccc36:{c.instructions+=1;NFSU2_TR(0x5ccc36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccc3bull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5ccc3b:L5ccc3b:{c.instructions+=1;NFSU2_TR(0x5ccc3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5ccc3e:L5ccc3e:{c.instructions+=1;NFSU2_TR(0x5ccc3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccc43ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5ccc43:L5ccc43:{c.instructions+=7;NFSU2_TR(0x5ccc43);
__builtin_memmove((R+8),gp(0x86e770),4);
}
B5ccc49:{NFSU2_TR(0x5ccc49);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ccc4e:{NFSU2_TR(0x5ccc4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ccc50:{NFSU2_TR(0x5ccc50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc51:{NFSU2_TR(0x5ccc51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc53:{NFSU2_TR(0x5ccc53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc54:{NFSU2_TR(0x5ccc54);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccc5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccc5a:L5ccc5a:{c.instructions+=6;NFSU2_TR(0x5ccc5a);
__builtin_memmove((R+8),gp(0x86e774),4);
}
B5ccc60:{NFSU2_TR(0x5ccc60);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ccc65:{NFSU2_TR(0x5ccc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ccc67:{NFSU2_TR(0x5ccc67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc68:{NFSU2_TR(0x5ccc68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc69:{NFSU2_TR(0x5ccc69);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccc6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccc6f:L5ccc6f:{c.instructions+=14;NFSU2_TR(0x5ccc6f);
__builtin_memmove((R+4),gp(0x86e780),4);
}
B5ccc75:{NFSU2_TR(0x5ccc75);
__builtin_memmove((R+0),gp(0x86e77c),4);
}
B5ccc7a:{NFSU2_TR(0x5ccc7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ccc7e:{NFSU2_TR(0x5ccc7e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ccc82:{NFSU2_TR(0x5ccc82);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5ccc87:{NFSU2_TR(0x5ccc87);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ccc8b:{NFSU2_TR(0x5ccc8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccc8c:{NFSU2_TR(0x5ccc8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ccc94:{NFSU2_TR(0x5ccc94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ccc9c:{NFSU2_TR(0x5ccc9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ccca4:{NFSU2_TR(0x5ccca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cccac:{NFSU2_TR(0x5cccac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cccae:{NFSU2_TR(0x5cccae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cccaf:{NFSU2_TR(0x5cccaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cccb5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cccb5:L5cccb5:{c.instructions+=4;NFSU2_TR(0x5cccb5);
s4(0x870848,u32(0x86e768ull));
}
B5cccbf:{NFSU2_TR(0x5cccbf);
s4(0x870910,u32(0x0ull));
}
B5cccc9:{NFSU2_TR(0x5cccc9);
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
B5ccccc:{NFSU2_TR(0x5ccccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cccd0:L5cccd0:{c.instructions+=12;NFSU2_TR(0x5cccd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5cccd3:{NFSU2_TR(0x5cccd3);
__builtin_memmove((R+0),gp(0x8708f4),4);
}
B5cccd8:{NFSU2_TR(0x5cccd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb88ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5cccdf:{NFSU2_TR(0x5cccdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ccce3:{NFSU2_TR(0x5ccce3);
__builtin_memmove((R+8),gp(0x86ff74),4);
}
B5ccce9:{NFSU2_TR(0x5ccce9);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B5cccec:{NFSU2_TR(0x5cccec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cccf0:{NFSU2_TR(0x5cccf0);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5cccf4:{NFSU2_TR(0x5cccf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cccf6:{NFSU2_TR(0x5cccf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5cccfa:{NFSU2_TR(0x5cccfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cccfe:{NFSU2_TR(0x5cccfe);
if(r1(R+518)){{goto L5ccd26;}}
}
B5ccd00:L5ccd00:{c.instructions+=12;NFSU2_TR(0x5ccd00);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5ccd06:{NFSU2_TR(0x5ccd06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd07:{NFSU2_TR(0x5ccd07);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd09:{NFSU2_TR(0x5ccd09);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd0b:{NFSU2_TR(0x5ccd0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd0d:{NFSU2_TR(0x5ccd0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ccd11:{NFSU2_TR(0x5ccd11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd12:{NFSU2_TR(0x5ccd12);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ccd16:{NFSU2_TR(0x5ccd16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd17:{NFSU2_TR(0x5ccd17);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd19:{NFSU2_TR(0x5ccd19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd1a:{NFSU2_TR(0x5ccd1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccd1full));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5ccd1f:L5ccd1f:{c.instructions+=3;NFSU2_TR(0x5ccd1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5ccd22:{NFSU2_TR(0x5ccd22);
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
B5ccd25:{NFSU2_TR(0x5ccd25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ccd26:L5ccd26:{c.instructions+=3;NFSU2_TR(0x5ccd26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ccd27:{NFSU2_TR(0x5ccd27);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ccd2c:{NFSU2_TR(0x5ccd2c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ccd33;}}
}
B5ccd2e:L5ccd2e:{c.instructions+=3;NFSU2_TR(0x5ccd2e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5ccd2f:{NFSU2_TR(0x5ccd2f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B5ccd32:{NFSU2_TR(0x5ccd32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ccd33:L5ccd33:{c.instructions+=13;NFSU2_TR(0x5ccd33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd34:{NFSU2_TR(0x5ccd34);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd36:{NFSU2_TR(0x5ccd36);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd38:{NFSU2_TR(0x5ccd38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd3a:{NFSU2_TR(0x5ccd3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ccd3e:{NFSU2_TR(0x5ccd3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd3f:{NFSU2_TR(0x5ccd3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ccd43:{NFSU2_TR(0x5ccd43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd44:{NFSU2_TR(0x5ccd44);
__builtin_memmove(gp(0x8708f4),(R+0),4);
}
B5ccd49:{NFSU2_TR(0x5ccd49);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86eb0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ccd50:{NFSU2_TR(0x5ccd50);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd52:{NFSU2_TR(0x5ccd52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd53:{NFSU2_TR(0x5ccd53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccd58ull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5ccd58:L5ccd58:{c.instructions+=3;NFSU2_TR(0x5ccd58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5ccd5b:{NFSU2_TR(0x5ccd5b);
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
B5ccd5e:{NFSU2_TR(0x5ccd5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ccd60:L5ccd60:{c.instructions+=7;NFSU2_TR(0x5ccd60);
if(mod_hook_table[10]&&!mod_bypass_take(10)){SPILL();c.pc=0x5ccd60u;mod_hook_table[10](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+20u);TAIL_DYNAMIC(ra_);}}
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd61:{NFSU2_TR(0x5ccd61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd62:{NFSU2_TR(0x5ccd62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5ccd66:{NFSU2_TR(0x5ccd66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccd67:{NFSU2_TR(0x5ccd67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ccd6b:{NFSU2_TR(0x5ccd6b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x102ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x102ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ccd71:{NFSU2_TR(0x5ccd71);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ccf6b;}}
}
B5ccd77:L5ccd77:{c.instructions+=1;NFSU2_TR(0x5ccd77);
if(r1(R+518)){{goto L5ccf50;}}
}
B5ccd7d:L5ccd7d:{c.instructions+=2;NFSU2_TR(0x5ccd7d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ccd80:{NFSU2_TR(0x5ccd80);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5cce80;}}
}
B5ccd86:L5ccd86:{c.instructions+=1;NFSU2_TR(0x5ccd86);
if(r1(R+518)){{goto L5cce5c;}}
}
B5ccd8c:L5ccd8c:{c.instructions+=3;NFSU2_TR(0x5ccd8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ccd8f:{NFSU2_TR(0x5ccd8f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccd92:{NFSU2_TR(0x5ccd92);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ccfe4;}}
}
B5ccd98:L5ccd98:{c.instructions+=2;NFSU2_TR(0x5ccd98);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cd010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5ccd9f:{NFSU2_TR(0x5ccd9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ccffcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccda6:L5ccda6:{c.instructions+=5;NFSU2_TR(0x5ccda6);
u8 U[10];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5ccdac:{NFSU2_TR(0x5ccdac);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5ccdb2:{NFSU2_TR(0x5ccdb2);
__builtin_memmove((R+12),(R+518),1);
}
B5ccdb5:{NFSU2_TR(0x5ccdb5);
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
B5ccdb7:{NFSU2_TR(0x5ccdb7);
if(r1(R+518)){{goto L5ccfe4;}}
}
B5ccdbd:L5ccdbd:{c.instructions+=2;NFSU2_TR(0x5ccdbd);
u8 U[5];
__builtin_memmove((U+3),gp(0x8709e0),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ccdc3:{NFSU2_TR(0x5ccdc3);
if(r1(R+518)){{goto L5ccfe4;}}
}
B5ccdc9:L5ccdc9:{c.instructions+=2;NFSU2_TR(0x5ccdc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ccdcb:{NFSU2_TR(0x5ccdcb);
if(r1(R+518)){{goto L5ccdee;}}
}
B5ccdcd:L5ccdcd:{c.instructions+=3;NFSU2_TR(0x5ccdcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccdcf:{NFSU2_TR(0x5ccdcf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccdd1:{NFSU2_TR(0x5ccdd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccdd6ull));
TAIL_STATIC(0x4810f0u,481);
}
B5ccdd6:L5ccdd6:{c.instructions+=3;NFSU2_TR(0x5ccdd6);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5ccddc:{NFSU2_TR(0x5ccddc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccdde:{NFSU2_TR(0x5ccdde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccde3ull));
TAIL_STATIC(0x483b40u,483);
}
B5ccde3:L5ccde3:{c.instructions+=2;NFSU2_TR(0x5ccde3);
__builtin_memmove(gp(0x8709e0),(R+12),1);
}
B5ccde9:{NFSU2_TR(0x5ccde9);
{goto L5ccfe4;}
}
B5ccdee:L5ccdee:{c.instructions+=2;NFSU2_TR(0x5ccdee);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccdf0:{NFSU2_TR(0x5ccdf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccdf5ull));
TAIL_STATIC(0x481210u,481);
}
B5ccdf5:L5ccdf5:{c.instructions+=2;NFSU2_TR(0x5ccdf5);
__builtin_memmove(gp(0x8709e0),(R+12),1);
}
B5ccdfb:{NFSU2_TR(0x5ccdfb);
{goto L5ccfe4;}
}
B5cce00:L5cce00:{c.instructions+=3;NFSU2_TR(0x5cce00);
u8 U[4];
w4(U+0,u32(0x876868ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce05:{NFSU2_TR(0x5cce05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce06:{NFSU2_TR(0x5cce06);
u8 U[4];
__builtin_memmove((U+0),gp(0x78336c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce0cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5cce0c:L5cce0c:{c.instructions+=3;NFSU2_TR(0x5cce0c);
u8 U[4];
w4(U+0,u32(0x876868ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce11:{NFSU2_TR(0x5cce11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce12:{NFSU2_TR(0x5cce12);
u8 U[4];
__builtin_memmove((U+0),gp(0x783370),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce18ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5cce18:L5cce18:{c.instructions+=1;NFSU2_TR(0x5cce18);
{goto L5ccfe4;}
}
B5cce1d:L5cce1d:{c.instructions+=6;NFSU2_TR(0x5cce1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cce21:{NFSU2_TR(0x5cce21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce23:{NFSU2_TR(0x5cce23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce25:{NFSU2_TR(0x5cce25);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce27:{NFSU2_TR(0x5cce27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce28:{NFSU2_TR(0x5cce28);
u8 U[4];
__builtin_memmove((U+0),gp(0x783374),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce2eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5cce2e:L5cce2e:{c.instructions+=2;NFSU2_TR(0x5cce2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce2f:{NFSU2_TR(0x5cce2f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce35ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5cce35:L5cce35:{c.instructions+=4;NFSU2_TR(0x5cce35);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5cce37:{NFSU2_TR(0x5cce37);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5cce39:{NFSU2_TR(0x5cce39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5cce3a:{NFSU2_TR(0x5cce3a);
__builtin_memmove(gp(0x870988),(R+0),4);
}
B5cce3f:L5cce3f:{c.instructions+=5;NFSU2_TR(0x5cce3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cce40:{NFSU2_TR(0x5cce40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cce41:{NFSU2_TR(0x5cce41);
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
B5cce43:{NFSU2_TR(0x5cce43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cce44:{NFSU2_TR(0x5cce44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cce47:L5cce47:{c.instructions+=1;NFSU2_TR(0x5cce47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce4cull));
TAIL_STATIC(0x5beea0u,5be);
}
B5cce4c:L5cce4c:{c.instructions+=2;NFSU2_TR(0x5cce4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cce4e:{NFSU2_TR(0x5cce4e);
u8 U[4];
__builtin_memmove((U+0),gp(0x78337c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce54ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5cce54:L5cce54:{c.instructions+=5;NFSU2_TR(0x5cce54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cce55:{NFSU2_TR(0x5cce55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cce56:{NFSU2_TR(0x5cce56);
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
B5cce58:{NFSU2_TR(0x5cce58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cce59:{NFSU2_TR(0x5cce59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cce5c:L5cce5c:{c.instructions+=1;NFSU2_TR(0x5cce5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cce61ull));
TAIL_STATIC(0x4a9330u,4a9);
}
B5cce61:L5cce61:{c.instructions+=2;NFSU2_TR(0x5cce61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cce63:{NFSU2_TR(0x5cce63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cce3fu);}goto L5cce3f;}}
}
B5cce65:L5cce65:{c.instructions+=3;NFSU2_TR(0x5cce65);
__builtin_memmove((R+0),gp(0x864f4c),4);
}
B5cce6a:{NFSU2_TR(0x5cce6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cce6c:{NFSU2_TR(0x5cce6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cce3fu);}goto L5cce3f;}}
}
B5cce6e:L5cce6e:{c.instructions+=6;NFSU2_TR(0x5cce6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cce6f:{NFSU2_TR(0x5cce6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cce70:{NFSU2_TR(0x5cce70);
s4(0x864f4c,u32(0x1ull));
}
B5cce7a:{NFSU2_TR(0x5cce7a);
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
B5cce7c:{NFSU2_TR(0x5cce7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cce7d:{NFSU2_TR(0x5cce7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cce80:L5cce80:{c.instructions+=3;NFSU2_TR(0x5cce80);
__builtin_memmove((R+0),(R+24),4);
}
B5cce82:{NFSU2_TR(0x5cce82);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1cull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cce85:{NFSU2_TR(0x5cce85);
if(r1(R+518)){{goto L5ccf3c;}}
}
B5cce8b:L5cce8b:{c.instructions+=2;NFSU2_TR(0x5cce8b);
w1(R+512,u8((r4(R+0))<(u32(0xe4ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xe4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5cce90:{NFSU2_TR(0x5cce90);
if(r1(R+518)){{goto L5cceb3;}}
}
B5cce92:L5cce92:{c.instructions+=2;NFSU2_TR(0x5cce92);
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
B5cce93:{NFSU2_TR(0x5cce93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ccfe4;}}
}
B5cce99:L5cce99:{c.instructions+=2;NFSU2_TR(0x5cce99);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x11ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cce9e:{NFSU2_TR(0x5cce9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ccfe4;}}
}
B5ccea4:L5ccea4:{c.instructions+=2;NFSU2_TR(0x5ccea4);
s4(0x8709d8,u32(0x0ull));
}
B5cceae:{NFSU2_TR(0x5cceae);
{goto L5ccfe4;}
}
B5cceb3:L5cceb3:{c.instructions+=6;NFSU2_TR(0x5cceb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cceb4:{NFSU2_TR(0x5cceb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cceb8:{NFSU2_TR(0x5cceb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffddull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ccebb:{NFSU2_TR(0x5ccebb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x58ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x58ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccebe:{NFSU2_TR(0x5ccebe);
w4(R+12,u32(0x1ull));
}
B5ccec3:{NFSU2_TR(0x5ccec3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ccf27;}}
}
B5ccec5:L5ccec5:{c.instructions+=2;NFSU2_TR(0x5ccec5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cd038ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5ccecc:{NFSU2_TR(0x5ccecc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5cd020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cced3:L5cced3:{c.instructions+=1;NFSU2_TR(0x5cced3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cced8ull));
TAIL_STATIC(0x4022c0u,402);
}
B5cced8:L5cced8:{c.instructions+=2;NFSU2_TR(0x5cced8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cceda:{NFSU2_TR(0x5cceda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccedfull));
TAIL_STATIC(0x5bf3a0u,5bf);
}
B5ccedf:L5ccedf:{c.instructions+=2;NFSU2_TR(0x5ccedf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ccee2:{NFSU2_TR(0x5ccee2);
{goto L5ccf27;}
}
B5ccee4:L5ccee4:{c.instructions+=1;NFSU2_TR(0x5ccee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccee9ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ccee9:L5ccee9:{c.instructions+=2;NFSU2_TR(0x5ccee9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cceea:{NFSU2_TR(0x5cceea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cceefull));
TAIL_STATIC(0x5bf3a0u,5bf);
}
B5cceef:L5cceef:{c.instructions+=2;NFSU2_TR(0x5cceef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ccef2:{NFSU2_TR(0x5ccef2);
{goto L5ccf27;}
}
B5ccef4:L5ccef4:{c.instructions+=1;NFSU2_TR(0x5ccef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccef9ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ccef9:L5ccef9:{c.instructions+=4;NFSU2_TR(0x5ccef9);
__builtin_memmove((R+8),gp(0x8709c0),4);
}
B5cceff:{NFSU2_TR(0x5cceff);
w4(R+8,u32(0-u32(r4(R+8))));
}
B5ccf01:{NFSU2_TR(0x5ccf01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccf02:{NFSU2_TR(0x5ccf02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf07ull));
TAIL_STATIC(0x5bf3a0u,5bf);
}
B5ccf07:L5ccf07:{c.instructions+=2;NFSU2_TR(0x5ccf07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ccf0a:{NFSU2_TR(0x5ccf0a);
{goto L5ccf27;}
}
B5ccf0c:L5ccf0c:{c.instructions+=1;NFSU2_TR(0x5ccf0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf11ull));
TAIL_STATIC(0x4022c0u,402);
}
B5ccf11:L5ccf11:{c.instructions+=3;NFSU2_TR(0x5ccf11);
__builtin_memmove((R+0),gp(0x8709c0),4);
}
B5ccf16:{NFSU2_TR(0x5ccf16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccf17:{NFSU2_TR(0x5ccf17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf1cull));
TAIL_STATIC(0x5bf3a0u,5bf);
}
B5ccf1c:L5ccf1c:{c.instructions+=2;NFSU2_TR(0x5ccf1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ccf1f:{NFSU2_TR(0x5ccf1f);
{goto L5ccf27;}
}
B5ccf21:L5ccf21:{c.instructions+=1;NFSU2_TR(0x5ccf21);
__builtin_memmove(gp(0x870994),(R+12),4);
}
B5ccf27:L5ccf27:{c.instructions+=3;NFSU2_TR(0x5ccf27);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5ccf2a:{NFSU2_TR(0x5ccf2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ccf2b:{NFSU2_TR(0x5ccf2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ccfe4;}}
}
B5ccf31:L5ccf31:{c.instructions+=2;NFSU2_TR(0x5ccf31);
__builtin_memmove(gp(0x8709d8),(R+12),4);
}
B5ccf37:{NFSU2_TR(0x5ccf37);
{goto L5ccfe4;}
}
B5ccf3c:L5ccf3c:{c.instructions+=3;NFSU2_TR(0x5ccf3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ccf40:{NFSU2_TR(0x5ccf40);
__builtin_memmove(gp(0x870988),(R+4),4);
}
B5ccf46:{NFSU2_TR(0x5ccf46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf4bull));
TAIL_STATIC(0x5b7ee0u,5b7);
}
B5ccf4b:L5ccf4b:{c.instructions+=1;NFSU2_TR(0x5ccf4b);
{goto L5ccfe4;}
}
B5ccf50:L5ccf50:{c.instructions+=3;NFSU2_TR(0x5ccf50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ccf54:{NFSU2_TR(0x5ccf54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccf55:{NFSU2_TR(0x5ccf55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf5aull));
TAIL_STATIC(0x55dbd0u,55d);
}
B5ccf5a:L5ccf5a:{c.instructions+=3;NFSU2_TR(0x5ccf5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccf5b:{NFSU2_TR(0x5ccf5b);
__builtin_memmove(gp(0x8709c5),(R+12),1);
}
B5ccf61:{NFSU2_TR(0x5ccf61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf66ull));
TAIL_STATIC(0x5c8320u,5c8);
}
B5ccf66:L5ccf66:{c.instructions+=2;NFSU2_TR(0x5ccf66);
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
B5ccf69:{NFSU2_TR(0x5ccf69);
{goto L5ccfe4;}
}
B5ccf6b:L5ccf6b:{c.instructions+=2;NFSU2_TR(0x5ccf6b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x205ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x205ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x205ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccf71:{NFSU2_TR(0x5ccf71);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ccfbd;}}
}
B5ccf73:L5ccf73:{c.instructions+=1;NFSU2_TR(0x5ccf73);
if(r1(R+518)){{goto L5ccfb5;}}
}
B5ccf75:L5ccf75:{c.instructions+=3;NFSU2_TR(0x5ccf75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffeeeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ccf7b:{NFSU2_TR(0x5ccf7b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xf2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xf2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccf80:{NFSU2_TR(0x5ccf80);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ccfe4;}}
}
B5ccf82:L5ccf82:{c.instructions+=2;NFSU2_TR(0x5ccf82);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cd0a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5ccf89:{NFSU2_TR(0x5ccf89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5cd094ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ccf90:L5ccf90:{c.instructions+=2;NFSU2_TR(0x5ccf90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccf91:{NFSU2_TR(0x5ccf91);
u8 U[4];
__builtin_memmove((U+0),gp(0x783380),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccf97ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5ccf97:L5ccf97:{c.instructions+=1;NFSU2_TR(0x5ccf97);
{goto L5ccfe4;}
}
B5ccf99:L5ccf99:{c.instructions+=3;NFSU2_TR(0x5ccf99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ccf9d:{NFSU2_TR(0x5ccf9d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xf140ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5ccfa2:{NFSU2_TR(0x5ccfa2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cce3fu);}goto L5cce3f;}}
}
B5ccfa8:L5ccfa8:{c.instructions+=2;NFSU2_TR(0x5ccfa8);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ccfab:{NFSU2_TR(0x5ccfab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ccfe4;}}
}
B5ccfad:L5ccfad:{c.instructions+=5;NFSU2_TR(0x5ccfad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ccfae:{NFSU2_TR(0x5ccfae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ccfaf:{NFSU2_TR(0x5ccfaf);
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
B5ccfb1:{NFSU2_TR(0x5ccfb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ccfb2:{NFSU2_TR(0x5ccfb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ccfb5:L5ccfb5:{c.instructions+=1;NFSU2_TR(0x5ccfb5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783324),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccfbbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5ccfbb:L5ccfbb:{c.instructions+=1;NFSU2_TR(0x5ccfbb);
{goto L5ccfe4;}
}
B5ccfbd:L5ccfbd:{c.instructions+=3;NFSU2_TR(0x5ccfbd);
__builtin_memmove((R+0),(R+24),4);
}
B5ccfbf:{NFSU2_TR(0x5ccfbf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20aull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5ccfc4:{NFSU2_TR(0x5ccfc4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cce3fu);}goto L5cce3f;}}
}
B5ccfca:L5ccfca:{c.instructions+=2;NFSU2_TR(0x5ccfca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x105ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5ccfcf:{NFSU2_TR(0x5ccfcf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cce3fu);}goto L5cce3f;}}
}
B5ccfd5:L5ccfd5:{c.instructions+=2;NFSU2_TR(0x5ccfd5);
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
B5ccfd8:{NFSU2_TR(0x5ccfd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ccfe4;}}
}
B5ccfda:L5ccfda:{c.instructions+=2;NFSU2_TR(0x5ccfda);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ccfde:{NFSU2_TR(0x5ccfde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cce3fu);}goto L5cce3f;}}
}
B5ccfe4:L5ccfe4:{c.instructions+=7;NFSU2_TR(0x5ccfe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ccfe8:{NFSU2_TR(0x5ccfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ccfec:{NFSU2_TR(0x5ccfec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccfed:{NFSU2_TR(0x5ccfed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccfee:{NFSU2_TR(0x5ccfee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccfef:{NFSU2_TR(0x5ccfef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ccff0:{NFSU2_TR(0x5ccff0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783320),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ccff6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5ccff6:L5ccff6:{c.instructions+=4;NFSU2_TR(0x5ccff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ccff7:{NFSU2_TR(0x5ccff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ccff8:{NFSU2_TR(0x5ccff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ccff9:{NFSU2_TR(0x5ccff9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5cc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
