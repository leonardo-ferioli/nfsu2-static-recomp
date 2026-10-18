#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6cc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6cc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 page_6cc(Cpu& c){return body_6cc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6cc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6cc001:goto L6cc001;
case 0x6cc003:goto L6cc003;
case 0x6cc007:c.instructions+=3;goto B6cc007;
case 0x6cc00a:c.instructions+=2;goto B6cc00a;
case 0x6cc00b:c.instructions+=1;goto B6cc00b;
case 0x6cc010:goto L6cc010;
case 0x6cc012:c.instructions+=4;goto B6cc012;
case 0x6cc014:c.instructions+=3;goto B6cc014;
case 0x6cc015:c.instructions+=2;goto B6cc015;
case 0x6cc018:c.instructions+=1;goto B6cc018;
case 0x6cc01a:goto L6cc01a;
case 0x6cc01f:c.instructions+=1;goto B6cc01f;
case 0x6cc024:goto L6cc024;
case 0x6cc027:c.instructions+=9;goto B6cc027;
case 0x6cc02a:c.instructions+=8;goto B6cc02a;
case 0x6cc02d:c.instructions+=7;goto B6cc02d;
case 0x6cc030:c.instructions+=6;goto B6cc030;
case 0x6cc033:c.instructions+=5;goto B6cc033;
case 0x6cc034:c.instructions+=4;goto B6cc034;
case 0x6cc036:c.instructions+=3;goto B6cc036;
case 0x6cc038:c.instructions+=2;goto B6cc038;
case 0x6cc039:c.instructions+=1;goto B6cc039;
case 0x6cc03e:goto L6cc03e;
case 0x6cc040:c.instructions+=2;goto B6cc040;
case 0x6cc043:c.instructions+=1;goto B6cc043;
case 0x6cc045:goto L6cc045;
case 0x6cc048:c.instructions+=6;goto B6cc048;
case 0x6cc049:c.instructions+=5;goto B6cc049;
case 0x6cc04c:c.instructions+=4;goto B6cc04c;
case 0x6cc04e:c.instructions+=3;goto B6cc04e;
case 0x6cc051:c.instructions+=2;goto B6cc051;
case 0x6cc054:c.instructions+=1;goto B6cc054;
case 0x6cc059:goto L6cc059;
case 0x6cc05b:c.instructions+=2;goto B6cc05b;
case 0x6cc05d:c.instructions+=1;goto B6cc05d;
case 0x6cc05f:goto L6cc05f;
case 0x6cc062:c.instructions+=3;goto B6cc062;
case 0x6cc065:c.instructions+=2;goto B6cc065;
case 0x6cc067:c.instructions+=1;goto B6cc067;
case 0x6cc069:goto L6cc069;
case 0x6cc06c:c.instructions+=10;goto B6cc06c;
case 0x6cc06f:c.instructions+=9;goto B6cc06f;
case 0x6cc070:c.instructions+=8;goto B6cc070;
case 0x6cc074:c.instructions+=7;goto B6cc074;
case 0x6cc076:c.instructions+=6;goto B6cc076;
case 0x6cc077:c.instructions+=5;goto B6cc077;
case 0x6cc078:c.instructions+=4;goto B6cc078;
case 0x6cc07b:c.instructions+=3;goto B6cc07b;
case 0x6cc07c:c.instructions+=2;goto B6cc07c;
case 0x6cc07f:c.instructions+=1;goto B6cc07f;
case 0x6cc084:goto L6cc084;
case 0x6cc087:c.instructions+=2;goto B6cc087;
case 0x6cc089:c.instructions+=1;goto B6cc089;
case 0x6cc08e:goto L6cc08e;
case 0x6cc090:c.instructions+=2;goto B6cc090;
case 0x6cc091:c.instructions+=1;goto B6cc091;
case 0x6cc093:goto L6cc093;
case 0x6cc095:c.instructions+=1;goto B6cc095;
case 0x6cc097:goto L6cc097;
case 0x6cc09a:c.instructions+=1;goto B6cc09a;
case 0x6cc09f:goto L6cc09f;
case 0x6cc0a2:c.instructions+=2;goto B6cc0a2;
case 0x6cc0a3:c.instructions+=1;goto B6cc0a3;
case 0x6cc0a5:goto L6cc0a5;
case 0x6cc0a8:c.instructions+=1;goto B6cc0a8;
case 0x6cc0ad:goto L6cc0ad;
case 0x6cc0ae:c.instructions+=2;goto B6cc0ae;
case 0x6cc0b0:c.instructions+=1;goto B6cc0b0;
case 0x6cc0b2:goto L6cc0b2;
case 0x6cc0b5:c.instructions+=6;goto B6cc0b5;
case 0x6cc0b8:c.instructions+=5;goto B6cc0b8;
case 0x6cc0b9:c.instructions+=4;goto B6cc0b9;
case 0x6cc0bb:c.instructions+=3;goto B6cc0bb;
case 0x6cc0be:c.instructions+=2;goto B6cc0be;
case 0x6cc0bf:c.instructions+=1;goto B6cc0bf;
case 0x6cc0c4:goto L6cc0c4;
case 0x6cc0c6:c.instructions+=1;goto B6cc0c6;
case 0x6cc0c8:goto L6cc0c8;
case 0x6cc0ca:goto L6cc0ca;
case 0x6cc0cb:c.instructions+=4;goto B6cc0cb;
case 0x6cc0cc:c.instructions+=3;goto B6cc0cc;
case 0x6cc0cd:c.instructions+=2;goto B6cc0cd;
case 0x6cc0ce:c.instructions+=1;goto B6cc0ce;
case 0x6cc145:goto L6cc145;
case 0x6cc147:c.instructions+=10;goto B6cc147;
case 0x6cc148:c.instructions+=9;goto B6cc148;
case 0x6cc14a:c.instructions+=8;goto B6cc14a;
case 0x6cc14b:c.instructions+=7;goto B6cc14b;
case 0x6cc14c:c.instructions+=6;goto B6cc14c;
case 0x6cc14e:c.instructions+=5;goto B6cc14e;
case 0x6cc154:c.instructions+=4;goto B6cc154;
case 0x6cc156:c.instructions+=3;goto B6cc156;
case 0x6cc157:c.instructions+=2;goto B6cc157;
case 0x6cc15a:c.instructions+=1;goto B6cc15a;
case 0x6cc15c:goto L6cc15c;
case 0x6cc163:goto L6cc163;
case 0x6cc169:c.instructions+=4;goto B6cc169;
case 0x6cc16c:c.instructions+=3;goto B6cc16c;
case 0x6cc16e:c.instructions+=2;goto B6cc16e;
case 0x6cc171:c.instructions+=1;goto B6cc171;
case 0x6cc173:goto L6cc173;
case 0x6cc179:c.instructions+=1;goto B6cc179;
case 0x6cc17b:goto L6cc17b;
case 0x6cc17e:c.instructions+=4;goto B6cc17e;
case 0x6cc180:c.instructions+=3;goto B6cc180;
case 0x6cc182:c.instructions+=2;goto B6cc182;
case 0x6cc185:c.instructions+=1;goto B6cc185;
case 0x6cc187:goto L6cc187;
case 0x6cc18a:c.instructions+=2;goto B6cc18a;
case 0x6cc18c:c.instructions+=1;goto B6cc18c;
case 0x6cc18e:goto L6cc18e;
case 0x6cc191:c.instructions+=2;goto B6cc191;
case 0x6cc192:c.instructions+=1;goto B6cc192;
case 0x6cc197:goto L6cc197;
case 0x6cc199:c.instructions+=4;goto B6cc199;
case 0x6cc19b:c.instructions+=3;goto B6cc19b;
case 0x6cc19c:c.instructions+=2;goto B6cc19c;
case 0x6cc19f:c.instructions+=1;goto B6cc19f;
case 0x6cc1a1:goto L6cc1a1;
case 0x6cc1a6:c.instructions+=1;goto B6cc1a6;
case 0x6cc1a8:goto L6cc1a8;
case 0x6cc1ae:c.instructions+=5;goto B6cc1ae;
case 0x6cc1b1:c.instructions+=4;goto B6cc1b1;
case 0x6cc1b3:c.instructions+=3;goto B6cc1b3;
case 0x6cc1b4:c.instructions+=2;goto B6cc1b4;
case 0x6cc1ba:c.instructions+=1;goto B6cc1ba;
case 0x6cc1bd:goto L6cc1bd;
case 0x6cc1bf:goto L6cc1bf;
case 0x6cc1c1:c.instructions+=1;goto B6cc1c1;
case 0x6cc1c4:goto L6cc1c4;
case 0x6cc1c6:goto L6cc1c6;
case 0x6cc1cc:c.instructions+=1;goto B6cc1cc;
case 0x6cc1d1:goto L6cc1d1;
case 0x6cc1d4:c.instructions+=5;goto B6cc1d4;
case 0x6cc1da:c.instructions+=4;goto B6cc1da;
case 0x6cc1dd:c.instructions+=3;goto B6cc1dd;
case 0x6cc1de:c.instructions+=2;goto B6cc1de;
case 0x6cc1e4:c.instructions+=1;goto B6cc1e4;
case 0x6cc1e5:goto L6cc1e5;
case 0x6cc1e7:goto L6cc1e7;
case 0x6cc1e8:c.instructions+=3;goto B6cc1e8;
case 0x6cc1e9:c.instructions+=2;goto B6cc1e9;
case 0x6cc1ea:c.instructions+=1;goto B6cc1ea;
case 0x6cc1ed:goto L6cc1ed;
case 0x6cc1ef:c.instructions+=14;goto B6cc1ef;
case 0x6cc1f0:c.instructions+=13;goto B6cc1f0;
case 0x6cc1f2:c.instructions+=12;goto B6cc1f2;
case 0x6cc1f3:c.instructions+=11;goto B6cc1f3;
case 0x6cc1f4:c.instructions+=10;goto B6cc1f4;
case 0x6cc1f5:c.instructions+=9;goto B6cc1f5;
case 0x6cc1f6:c.instructions+=8;goto B6cc1f6;
case 0x6cc1f8:c.instructions+=7;goto B6cc1f8;
case 0x6cc1fa:c.instructions+=6;goto B6cc1fa;
case 0x6cc1fd:c.instructions+=5;goto B6cc1fd;
case 0x6cc1ff:c.instructions+=4;goto B6cc1ff;
case 0x6cc200:c.instructions+=3;goto B6cc200;
case 0x6cc203:c.instructions+=2;goto B6cc203;
case 0x6cc206:c.instructions+=1;goto B6cc206;
case 0x6cc208:goto L6cc208;
case 0x6cc20a:goto L6cc20a;
case 0x6cc20d:c.instructions+=3;goto B6cc20d;
case 0x6cc210:c.instructions+=2;goto B6cc210;
case 0x6cc216:c.instructions+=1;goto B6cc216;
case 0x6cc218:goto L6cc218;
case 0x6cc21b:c.instructions+=4;goto B6cc21b;
case 0x6cc21e:c.instructions+=3;goto B6cc21e;
case 0x6cc221:c.instructions+=2;goto B6cc221;
case 0x6cc224:c.instructions+=1;goto B6cc224;
case 0x6cc226:goto L6cc226;
case 0x6cc22b:c.instructions+=2;goto B6cc22b;
case 0x6cc230:c.instructions+=1;goto B6cc230;
case 0x6cc235:goto L6cc235;
case 0x6cc238:c.instructions+=2;goto B6cc238;
case 0x6cc23a:c.instructions+=1;goto B6cc23a;
case 0x6cc240:goto L6cc240;
case 0x6cc242:c.instructions+=1;goto B6cc242;
case 0x6cc248:goto L6cc248;
case 0x6cc24a:c.instructions+=3;goto B6cc24a;
case 0x6cc24d:c.instructions+=2;goto B6cc24d;
case 0x6cc254:c.instructions+=1;goto B6cc254;
case 0x6cc259:goto L6cc259;
case 0x6cc25f:c.instructions+=1;goto B6cc25f;
case 0x6cc261:goto L6cc261;
case 0x6cc264:c.instructions+=4;goto B6cc264;
case 0x6cc267:c.instructions+=3;goto B6cc267;
case 0x6cc26e:c.instructions+=2;goto B6cc26e;
case 0x6cc271:c.instructions+=1;goto B6cc271;
case 0x6cc273:goto L6cc273;
case 0x6cc278:c.instructions+=2;goto B6cc278;
case 0x6cc27d:c.instructions+=1;goto B6cc27d;
case 0x6cc27f:goto L6cc27f;
case 0x6cc285:c.instructions+=1;goto B6cc285;
case 0x6cc287:goto L6cc287;
case 0x6cc289:c.instructions+=8;goto B6cc289;
case 0x6cc28a:c.instructions+=7;goto B6cc28a;
case 0x6cc28d:c.instructions+=6;goto B6cc28d;
case 0x6cc28e:c.instructions+=5;goto B6cc28e;
case 0x6cc291:c.instructions+=4;goto B6cc291;
case 0x6cc292:c.instructions+=3;goto B6cc292;
case 0x6cc293:c.instructions+=2;goto B6cc293;
case 0x6cc295:c.instructions+=1;goto B6cc295;
case 0x6cc29b:goto L6cc29b;
case 0x6cc29d:c.instructions+=1;goto B6cc29d;
case 0x6cc29f:goto L6cc29f;
case 0x6cc2a4:c.instructions+=1;goto B6cc2a4;
case 0x6cc2a9:goto L6cc2a9;
case 0x6cc2af:c.instructions+=1;goto B6cc2af;
case 0x6cc2b1:goto L6cc2b1;
case 0x6cc2b4:c.instructions+=4;goto B6cc2b4;
case 0x6cc2b7:c.instructions+=3;goto B6cc2b7;
case 0x6cc2be:c.instructions+=2;goto B6cc2be;
case 0x6cc2c1:c.instructions+=1;goto B6cc2c1;
case 0x6cc2c3:goto L6cc2c3;
case 0x6cc2c8:c.instructions+=1;goto B6cc2c8;
case 0x6cc2cd:goto L6cc2cd;
case 0x6cc2d3:c.instructions+=3;goto B6cc2d3;
case 0x6cc2d6:c.instructions+=2;goto B6cc2d6;
case 0x6cc2d7:c.instructions+=1;goto B6cc2d7;
case 0x6cc2dc:goto L6cc2dc;
case 0x6cc2e1:c.instructions+=1;goto B6cc2e1;
case 0x6cc2e3:goto L6cc2e3;
case 0x6cc2e6:goto L6cc2e6;
case 0x6cc2e9:c.instructions+=2;goto B6cc2e9;
case 0x6cc2eb:c.instructions+=1;goto B6cc2eb;
case 0x6cc2ed:goto L6cc2ed;
case 0x6cc2f0:c.instructions+=10;goto B6cc2f0;
case 0x6cc2f2:c.instructions+=9;goto B6cc2f2;
case 0x6cc2f5:c.instructions+=8;goto B6cc2f5;
case 0x6cc2f8:c.instructions+=7;goto B6cc2f8;
case 0x6cc2fb:c.instructions+=6;goto B6cc2fb;
case 0x6cc2fd:c.instructions+=5;goto B6cc2fd;
case 0x6cc300:c.instructions+=4;goto B6cc300;
case 0x6cc305:c.instructions+=3;goto B6cc305;
case 0x6cc307:c.instructions+=2;goto B6cc307;
case 0x6cc309:c.instructions+=1;goto B6cc309;
case 0x6cc30b:goto L6cc30b;
case 0x6cc30e:c.instructions+=4;goto B6cc30e;
case 0x6cc310:c.instructions+=3;goto B6cc310;
case 0x6cc311:c.instructions+=2;goto B6cc311;
case 0x6cc313:c.instructions+=1;goto B6cc313;
case 0x6cc316:goto L6cc316;
case 0x6cc318:c.instructions+=1;goto B6cc318;
case 0x6cc31a:goto L6cc31a;
case 0x6cc31c:c.instructions+=1;goto B6cc31c;
case 0x6cc31e:goto L6cc31e;
case 0x6cc323:c.instructions+=4;goto B6cc323;
case 0x6cc324:c.instructions+=3;goto B6cc324;
case 0x6cc325:c.instructions+=2;goto B6cc325;
case 0x6cc326:c.instructions+=1;goto B6cc326;
case 0x6cc32b:goto L6cc32b;
case 0x6cc330:goto L6cc330;
case 0x6cc333:goto L6cc333;
case 0x6cc334:c.instructions+=4;goto B6cc334;
case 0x6cc335:c.instructions+=3;goto B6cc335;
case 0x6cc336:c.instructions+=2;goto B6cc336;
case 0x6cc337:c.instructions+=1;goto B6cc337;
case 0x6cc33a:goto L6cc33a;
case 0x6cc33c:c.instructions+=18;goto B6cc33c;
case 0x6cc33d:c.instructions+=17;goto B6cc33d;
case 0x6cc33f:c.instructions+=16;goto B6cc33f;
case 0x6cc340:c.instructions+=15;goto B6cc340;
case 0x6cc341:c.instructions+=14;goto B6cc341;
case 0x6cc344:c.instructions+=13;goto B6cc344;
case 0x6cc346:c.instructions+=12;goto B6cc346;
case 0x6cc347:c.instructions+=11;goto B6cc347;
case 0x6cc348:c.instructions+=10;goto B6cc348;
case 0x6cc34a:c.instructions+=9;goto B6cc34a;
case 0x6cc34b:c.instructions+=8;goto B6cc34b;
case 0x6cc34e:c.instructions+=7;goto B6cc34e;
case 0x6cc351:c.instructions+=6;goto B6cc351;
case 0x6cc354:c.instructions+=5;goto B6cc354;
case 0x6cc356:c.instructions+=4;goto B6cc356;
case 0x6cc359:c.instructions+=3;goto B6cc359;
case 0x6cc35c:c.instructions+=2;goto B6cc35c;
case 0x6cc35f:c.instructions+=1;goto B6cc35f;
case 0x6cc361:goto L6cc361;
case 0x6cc368:c.instructions+=1;goto B6cc368;
case 0x6cc36a:goto L6cc36a;
case 0x6cc36d:c.instructions+=1;goto B6cc36d;
case 0x6cc36f:goto L6cc36f;
case 0x6cc376:c.instructions+=1;goto B6cc376;
case 0x6cc378:goto L6cc378;
case 0x6cc37b:c.instructions+=1;goto B6cc37b;
case 0x6cc37d:goto L6cc37d;
case 0x6cc384:c.instructions+=1;goto B6cc384;
case 0x6cc386:goto L6cc386;
case 0x6cc389:c.instructions+=1;goto B6cc389;
case 0x6cc38b:goto L6cc38b;
case 0x6cc392:c.instructions+=1;goto B6cc392;
case 0x6cc394:goto L6cc394;
case 0x6cc397:c.instructions+=1;goto B6cc397;
case 0x6cc399:goto L6cc399;
case 0x6cc3a0:c.instructions+=1;goto B6cc3a0;
case 0x6cc3a2:goto L6cc3a2;
case 0x6cc3a4:c.instructions+=1;goto B6cc3a4;
case 0x6cc3a6:goto L6cc3a6;
case 0x6cc3ad:goto L6cc3ad;
case 0x6cc3b0:c.instructions+=1;goto B6cc3b0;
case 0x6cc3b2:goto L6cc3b2;
case 0x6cc3b6:goto L6cc3b6;
case 0x6cc3b9:c.instructions+=1;goto B6cc3b9;
case 0x6cc3bb:goto L6cc3bb;
case 0x6cc3c2:c.instructions+=1;goto B6cc3c2;
case 0x6cc3c4:goto L6cc3c4;
case 0x6cc3c6:c.instructions+=2;goto B6cc3c6;
case 0x6cc3c9:c.instructions+=1;goto B6cc3c9;
case 0x6cc3cb:goto L6cc3cb;
case 0x6cc3ce:c.instructions+=7;goto B6cc3ce;
case 0x6cc3d1:c.instructions+=6;goto B6cc3d1;
case 0x6cc3d4:c.instructions+=5;goto B6cc3d4;
case 0x6cc3d7:c.instructions+=4;goto B6cc3d7;
case 0x6cc3d9:c.instructions+=3;goto B6cc3d9;
case 0x6cc3db:c.instructions+=2;goto B6cc3db;
case 0x6cc3dd:c.instructions+=1;goto B6cc3dd;
case 0x6cc3df:goto L6cc3df;
case 0x6cc3e0:c.instructions+=1;goto B6cc3e0;
case 0x6cc3e2:goto L6cc3e2;
case 0x6cc3e3:c.instructions+=1;goto B6cc3e3;
case 0x6cc3e5:goto L6cc3e5;
case 0x6cc3e6:c.instructions+=1;goto B6cc3e6;
case 0x6cc3e8:goto L6cc3e8;
case 0x6cc3ed:c.instructions+=1;goto B6cc3ed;
case 0x6cc3ef:goto L6cc3ef;
case 0x6cc3f4:c.instructions+=1;goto B6cc3f4;
case 0x6cc3f6:goto L6cc3f6;
case 0x6cc3fb:c.instructions+=1;goto B6cc3fb;
case 0x6cc3fd:goto L6cc3fd;
case 0x6cc402:goto L6cc402;
case 0x6cc405:c.instructions+=1;goto B6cc405;
case 0x6cc407:goto L6cc407;
case 0x6cc40d:c.instructions+=5;goto B6cc40d;
case 0x6cc412:c.instructions+=4;goto B6cc412;
case 0x6cc417:c.instructions+=3;goto B6cc417;
case 0x6cc41a:c.instructions+=2;goto B6cc41a;
case 0x6cc41b:c.instructions+=1;goto B6cc41b;
case 0x6cc420:goto L6cc420;
case 0x6cc423:c.instructions+=2;goto B6cc423;
case 0x6cc426:c.instructions+=1;goto B6cc426;
case 0x6cc428:goto L6cc428;
case 0x6cc42b:c.instructions+=3;goto B6cc42b;
case 0x6cc42c:c.instructions+=2;goto B6cc42c;
case 0x6cc42f:c.instructions+=1;goto B6cc42f;
case 0x6cc431:goto L6cc431;
case 0x6cc435:c.instructions+=1;goto B6cc435;
case 0x6cc437:goto L6cc437;
case 0x6cc43b:c.instructions+=1;goto B6cc43b;
case 0x6cc43d:goto L6cc43d;
case 0x6cc444:c.instructions+=1;goto B6cc444;
case 0x6cc446:goto L6cc446;
case 0x6cc44a:c.instructions+=1;goto B6cc44a;
case 0x6cc44c:goto L6cc44c;
case 0x6cc453:goto L6cc453;
case 0x6cc45a:c.instructions+=1;goto B6cc45a;
case 0x6cc45c:goto L6cc45c;
case 0x6cc462:c.instructions+=1;goto B6cc462;
case 0x6cc464:goto L6cc464;
case 0x6cc467:c.instructions+=1;goto B6cc467;
case 0x6cc469:goto L6cc469;
case 0x6cc46f:c.instructions+=8;goto B6cc46f;
case 0x6cc472:c.instructions+=7;goto B6cc472;
case 0x6cc478:c.instructions+=6;goto B6cc478;
case 0x6cc47b:c.instructions+=5;goto B6cc47b;
case 0x6cc47e:c.instructions+=4;goto B6cc47e;
case 0x6cc47f:c.instructions+=3;goto B6cc47f;
case 0x6cc482:c.instructions+=2;goto B6cc482;
case 0x6cc486:c.instructions+=1;goto B6cc486;
case 0x6cc488:goto L6cc488;
case 0x6cc48b:c.instructions+=9;goto B6cc48b;
case 0x6cc48e:c.instructions+=8;goto B6cc48e;
case 0x6cc491:c.instructions+=7;goto B6cc491;
case 0x6cc492:c.instructions+=6;goto B6cc492;
case 0x6cc493:c.instructions+=5;goto B6cc493;
case 0x6cc495:c.instructions+=4;goto B6cc495;
case 0x6cc497:c.instructions+=3;goto B6cc497;
case 0x6cc498:c.instructions+=2;goto B6cc498;
case 0x6cc499:c.instructions+=1;goto B6cc499;
case 0x6cc49c:goto L6cc49c;
case 0x6cc49e:c.instructions+=10;goto B6cc49e;
case 0x6cc49f:c.instructions+=9;goto B6cc49f;
case 0x6cc4a1:c.instructions+=8;goto B6cc4a1;
case 0x6cc4a4:c.instructions+=7;goto B6cc4a4;
case 0x6cc4a7:c.instructions+=6;goto B6cc4a7;
case 0x6cc4ad:c.instructions+=5;goto B6cc4ad;
case 0x6cc4b0:c.instructions+=4;goto B6cc4b0;
case 0x6cc4b3:c.instructions+=3;goto B6cc4b3;
case 0x6cc4b5:c.instructions+=2;goto B6cc4b5;
case 0x6cc4b8:c.instructions+=1;goto B6cc4b8;
case 0x6cc4ba:goto L6cc4ba;
case 0x6cc4c0:c.instructions+=5;goto B6cc4c0;
case 0x6cc4c5:c.instructions+=4;goto B6cc4c5;
case 0x6cc4ca:c.instructions+=3;goto B6cc4ca;
case 0x6cc4cd:c.instructions+=2;goto B6cc4cd;
case 0x6cc4ce:c.instructions+=1;goto B6cc4ce;
case 0x6cc4d3:goto L6cc4d3;
case 0x6cc4d6:c.instructions+=2;goto B6cc4d6;
case 0x6cc4db:c.instructions+=1;goto B6cc4db;
case 0x6cc4dd:goto L6cc4dd;
case 0x6cc4df:goto L6cc4df;
case 0x6cc4e0:c.instructions+=1;goto B6cc4e0;
case 0x6cc4e3:goto L6cc4e3;
case 0x6cc4e5:c.instructions+=15;goto B6cc4e5;
case 0x6cc4e6:c.instructions+=14;goto B6cc4e6;
case 0x6cc4e8:c.instructions+=13;goto B6cc4e8;
case 0x6cc4e9:c.instructions+=12;goto B6cc4e9;
case 0x6cc4ea:c.instructions+=11;goto B6cc4ea;
case 0x6cc4eb:c.instructions+=10;goto B6cc4eb;
case 0x6cc4ec:c.instructions+=9;goto B6cc4ec;
case 0x6cc4ed:c.instructions+=8;goto B6cc4ed;
case 0x6cc4f0:c.instructions+=7;goto B6cc4f0;
case 0x6cc4f3:c.instructions+=6;goto B6cc4f3;
case 0x6cc4f5:c.instructions+=5;goto B6cc4f5;
case 0x6cc4fb:c.instructions+=4;goto B6cc4fb;
case 0x6cc4fe:c.instructions+=3;goto B6cc4fe;
case 0x6cc501:c.instructions+=2;goto B6cc501;
case 0x6cc506:c.instructions+=1;goto B6cc506;
case 0x6cc508:goto L6cc508;
case 0x6cc50b:c.instructions+=4;goto B6cc50b;
case 0x6cc50f:c.instructions+=3;goto B6cc50f;
case 0x6cc512:c.instructions+=2;goto B6cc512;
case 0x6cc515:c.instructions+=1;goto B6cc515;
case 0x6cc517:goto L6cc517;
case 0x6cc51c:goto L6cc51c;
case 0x6cc521:c.instructions+=1;goto B6cc521;
case 0x6cc526:goto L6cc526;
case 0x6cc529:c.instructions+=2;goto B6cc529;
case 0x6cc52b:c.instructions+=1;goto B6cc52b;
case 0x6cc52d:goto L6cc52d;
case 0x6cc52f:c.instructions+=1;goto B6cc52f;
case 0x6cc531:goto L6cc531;
case 0x6cc533:c.instructions+=3;goto B6cc533;
case 0x6cc536:c.instructions+=2;goto B6cc536;
case 0x6cc53d:c.instructions+=1;goto B6cc53d;
case 0x6cc53f:goto L6cc53f;
case 0x6cc542:c.instructions+=3;goto B6cc542;
case 0x6cc544:c.instructions+=2;goto B6cc544;
case 0x6cc547:c.instructions+=1;goto B6cc547;
case 0x6cc549:goto L6cc549;
case 0x6cc54c:c.instructions+=1;goto B6cc54c;
case 0x6cc54e:goto L6cc54e;
case 0x6cc555:c.instructions+=1;goto B6cc555;
case 0x6cc557:goto L6cc557;
case 0x6cc55a:c.instructions+=1;goto B6cc55a;
case 0x6cc55c:goto L6cc55c;
case 0x6cc55e:c.instructions+=2;goto B6cc55e;
case 0x6cc563:c.instructions+=1;goto B6cc563;
case 0x6cc565:goto L6cc565;
case 0x6cc567:c.instructions+=1;goto B6cc567;
case 0x6cc569:goto L6cc569;
case 0x6cc56b:c.instructions+=7;goto B6cc56b;
case 0x6cc56e:c.instructions+=6;goto B6cc56e;
case 0x6cc56f:c.instructions+=5;goto B6cc56f;
case 0x6cc572:c.instructions+=4;goto B6cc572;
case 0x6cc573:c.instructions+=3;goto B6cc573;
case 0x6cc574:c.instructions+=2;goto B6cc574;
case 0x6cc576:c.instructions+=1;goto B6cc576;
case 0x6cc57c:goto L6cc57c;
case 0x6cc57e:c.instructions+=1;goto B6cc57e;
case 0x6cc584:goto L6cc584;
case 0x6cc587:goto L6cc587;
case 0x6cc58a:c.instructions+=4;goto B6cc58a;
case 0x6cc58e:c.instructions+=3;goto B6cc58e;
case 0x6cc594:c.instructions+=2;goto B6cc594;
case 0x6cc59a:c.instructions+=1;goto B6cc59a;
case 0x6cc5a0:goto L6cc5a0;
case 0x6cc5a7:c.instructions+=1;goto B6cc5a7;
case 0x6cc5ac:goto L6cc5ac;
case 0x6cc5ae:c.instructions+=2;goto B6cc5ae;
case 0x6cc5b0:c.instructions+=1;goto B6cc5b0;
case 0x6cc5b2:goto L6cc5b2;
case 0x6cc5b8:c.instructions+=1;goto B6cc5b8;
case 0x6cc5ba:goto L6cc5ba;
case 0x6cc5bd:c.instructions+=3;goto B6cc5bd;
case 0x6cc5c0:c.instructions+=2;goto B6cc5c0;
case 0x6cc5c3:c.instructions+=1;goto B6cc5c3;
case 0x6cc5c5:goto L6cc5c5;
case 0x6cc5ca:c.instructions+=2;goto B6cc5ca;
case 0x6cc5cf:c.instructions+=1;goto B6cc5cf;
case 0x6cc5d4:goto L6cc5d4;
case 0x6cc5d9:c.instructions+=1;goto B6cc5d9;
case 0x6cc5db:goto L6cc5db;
case 0x6cc5e2:c.instructions+=1;goto B6cc5e2;
case 0x6cc5e4:goto L6cc5e4;
case 0x6cc5e9:c.instructions+=1;goto B6cc5e9;
case 0x6cc5eb:goto L6cc5eb;
case 0x6cc5f2:c.instructions+=1;goto B6cc5f2;
case 0x6cc5f4:goto L6cc5f4;
case 0x6cc5f9:c.instructions+=3;goto B6cc5f9;
case 0x6cc5fb:c.instructions+=2;goto B6cc5fb;
case 0x6cc5fe:c.instructions+=1;goto B6cc5fe;
case 0x6cc601:goto L6cc601;
case 0x6cc606:c.instructions+=1;goto B6cc606;
case 0x6cc60b:goto L6cc60b;
case 0x6cc60d:c.instructions+=1;goto B6cc60d;
case 0x6cc60f:goto L6cc60f;
case 0x6cc611:c.instructions+=1;goto B6cc611;
case 0x6cc613:goto L6cc613;
case 0x6cc616:c.instructions+=1;goto B6cc616;
case 0x6cc618:goto L6cc618;
case 0x6cc61b:c.instructions+=4;goto B6cc61b;
case 0x6cc61e:c.instructions+=3;goto B6cc61e;
case 0x6cc621:c.instructions+=2;goto B6cc621;
case 0x6cc628:c.instructions+=1;goto B6cc628;
case 0x6cc62e:goto L6cc62e;
case 0x6cc633:c.instructions+=2;goto B6cc633;
case 0x6cc638:c.instructions+=1;goto B6cc638;
case 0x6cc63a:goto L6cc63a;
case 0x6cc63c:c.instructions+=1;goto B6cc63c;
case 0x6cc63e:goto L6cc63e;
case 0x6cc641:c.instructions+=4;goto B6cc641;
case 0x6cc644:c.instructions+=3;goto B6cc644;
case 0x6cc64b:c.instructions+=2;goto B6cc64b;
case 0x6cc64e:c.instructions+=1;goto B6cc64e;
case 0x6cc654:goto L6cc654;
case 0x6cc659:c.instructions+=1;goto B6cc659;
case 0x6cc65e:goto L6cc65e;
case 0x6cc660:c.instructions+=1;goto B6cc660;
case 0x6cc662:goto L6cc662;
case 0x6cc665:c.instructions+=4;goto B6cc665;
case 0x6cc668:c.instructions+=3;goto B6cc668;
case 0x6cc66f:c.instructions+=2;goto B6cc66f;
case 0x6cc672:c.instructions+=1;goto B6cc672;
case 0x6cc678:goto L6cc678;
case 0x6cc67d:c.instructions+=1;goto B6cc67d;
case 0x6cc682:goto L6cc682;
case 0x6cc688:c.instructions+=2;goto B6cc688;
case 0x6cc68b:c.instructions+=1;goto B6cc68b;
case 0x6cc691:goto L6cc691;
case 0x6cc694:c.instructions+=4;goto B6cc694;
case 0x6cc697:c.instructions+=3;goto B6cc697;
case 0x6cc69e:c.instructions+=2;goto B6cc69e;
case 0x6cc6a1:c.instructions+=1;goto B6cc6a1;
case 0x6cc6a7:goto L6cc6a7;
case 0x6cc6ac:c.instructions+=1;goto B6cc6ac;
case 0x6cc6b1:goto L6cc6b1;
case 0x6cc6b7:c.instructions+=3;goto B6cc6b7;
case 0x6cc6ba:c.instructions+=2;goto B6cc6ba;
case 0x6cc6bb:c.instructions+=1;goto B6cc6bb;
case 0x6cc6c0:goto L6cc6c0;
case 0x6cc6c5:c.instructions+=1;goto B6cc6c5;
case 0x6cc6ca:goto L6cc6ca;
case 0x6cc6d0:c.instructions+=1;goto B6cc6d0;
case 0x6cc6d2:goto L6cc6d2;
case 0x6cc6d9:c.instructions+=1;goto B6cc6d9;
case 0x6cc6de:goto L6cc6de;
case 0x6cc6e4:c.instructions+=1;goto B6cc6e4;
case 0x6cc6e6:goto L6cc6e6;
case 0x6cc6ed:c.instructions+=1;goto B6cc6ed;
case 0x6cc6ef:goto L6cc6ef;
case 0x6cc6f5:c.instructions+=1;goto B6cc6f5;
case 0x6cc6f7:goto L6cc6f7;
case 0x6cc6fe:c.instructions+=1;goto B6cc6fe;
case 0x6cc700:goto L6cc700;
case 0x6cc706:c.instructions+=1;goto B6cc706;
case 0x6cc708:goto L6cc708;
case 0x6cc70f:c.instructions+=1;goto B6cc70f;
case 0x6cc711:goto L6cc711;
case 0x6cc717:c.instructions+=1;goto B6cc717;
case 0x6cc719:goto L6cc719;
case 0x6cc720:c.instructions+=1;goto B6cc720;
case 0x6cc722:goto L6cc722;
case 0x6cc728:c.instructions+=1;goto B6cc728;
case 0x6cc72a:goto L6cc72a;
case 0x6cc731:c.instructions+=1;goto B6cc731;
case 0x6cc733:goto L6cc733;
case 0x6cc739:c.instructions+=1;goto B6cc739;
case 0x6cc73b:goto L6cc73b;
case 0x6cc742:c.instructions+=1;goto B6cc742;
case 0x6cc744:goto L6cc744;
case 0x6cc746:c.instructions+=1;goto B6cc746;
case 0x6cc748:goto L6cc748;
case 0x6cc74f:c.instructions+=1;goto B6cc74f;
case 0x6cc751:goto L6cc751;
case 0x6cc757:c.instructions+=1;goto B6cc757;
case 0x6cc759:goto L6cc759;
case 0x6cc760:goto L6cc760;
case 0x6cc763:c.instructions+=2;goto B6cc763;
case 0x6cc765:c.instructions+=1;goto B6cc765;
case 0x6cc767:goto L6cc767;
case 0x6cc76a:c.instructions+=10;goto B6cc76a;
case 0x6cc76c:c.instructions+=9;goto B6cc76c;
case 0x6cc76f:c.instructions+=8;goto B6cc76f;
case 0x6cc772:c.instructions+=7;goto B6cc772;
case 0x6cc775:c.instructions+=6;goto B6cc775;
case 0x6cc777:c.instructions+=5;goto B6cc777;
case 0x6cc77a:c.instructions+=4;goto B6cc77a;
case 0x6cc77f:c.instructions+=3;goto B6cc77f;
case 0x6cc781:c.instructions+=2;goto B6cc781;
case 0x6cc784:c.instructions+=1;goto B6cc784;
case 0x6cc786:goto L6cc786;
case 0x6cc789:c.instructions+=2;goto B6cc789;
case 0x6cc78b:c.instructions+=1;goto B6cc78b;
case 0x6cc78d:goto L6cc78d;
case 0x6cc790:c.instructions+=1;goto B6cc790;
case 0x6cc792:goto L6cc792;
case 0x6cc796:c.instructions+=1;goto B6cc796;
case 0x6cc798:goto L6cc798;
case 0x6cc79f:c.instructions+=1;goto B6cc79f;
case 0x6cc7a1:goto L6cc7a1;
case 0x6cc7a7:c.instructions+=4;goto B6cc7a7;
case 0x6cc7ac:c.instructions+=3;goto B6cc7ac;
case 0x6cc7b1:c.instructions+=2;goto B6cc7b1;
case 0x6cc7b4:c.instructions+=1;goto B6cc7b4;
case 0x6cc7b6:goto L6cc7b6;
case 0x6cc7ba:goto L6cc7ba;
case 0x6cc7bc:c.instructions+=1;goto B6cc7bc;
case 0x6cc7be:goto L6cc7be;
case 0x6cc7c3:c.instructions+=2;goto B6cc7c3;
case 0x6cc7c5:c.instructions+=1;goto B6cc7c5;
case 0x6cc7c7:goto L6cc7c7;
case 0x6cc7c8:c.instructions+=1;goto B6cc7c8;
case 0x6cc7cd:goto L6cc7cd;
case 0x6cc7d2:goto L6cc7d2;
case 0x6cc7d5:goto L6cc7d5;
case 0x6cc7d6:c.instructions+=4;goto B6cc7d6;
case 0x6cc7d7:c.instructions+=3;goto B6cc7d7;
case 0x6cc7d8:c.instructions+=2;goto B6cc7d8;
case 0x6cc7d9:c.instructions+=1;goto B6cc7d9;
case 0x6cc7dc:goto L6cc7dc;
case 0x6cc7de:c.instructions+=6;goto B6cc7de;
case 0x6cc7df:c.instructions+=5;goto B6cc7df;
case 0x6cc7e0:c.instructions+=4;goto B6cc7e0;
case 0x6cc7e2:c.instructions+=3;goto B6cc7e2;
case 0x6cc7e4:c.instructions+=2;goto B6cc7e4;
case 0x6cc7e7:c.instructions+=1;goto B6cc7e7;
case 0x6cc7ed:goto L6cc7ed;
case 0x6cc7ee:goto L6cc7ee;
case 0x6cc7f1:c.instructions+=6;goto B6cc7f1;
case 0x6cc7f7:c.instructions+=5;goto B6cc7f7;
case 0x6cc7fa:c.instructions+=4;goto B6cc7fa;
case 0x6cc800:c.instructions+=3;goto B6cc800;
case 0x6cc802:c.instructions+=2;goto B6cc802;
case 0x6cc808:c.instructions+=1;goto B6cc808;
case 0x6cc80e:goto L6cc80e;
case 0x6cc814:c.instructions+=5;goto B6cc814;
case 0x6cc817:c.instructions+=4;goto B6cc817;
case 0x6cc819:c.instructions+=3;goto B6cc819;
case 0x6cc81c:c.instructions+=2;goto B6cc81c;
case 0x6cc81f:c.instructions+=1;goto B6cc81f;
case 0x6cc825:goto L6cc825;
case 0x6cc82b:c.instructions+=1;goto B6cc82b;
case 0x6cc831:goto L6cc831;
case 0x6cc837:c.instructions+=1;goto B6cc837;
case 0x6cc83d:goto L6cc83d;
case 0x6cc843:c.instructions+=1;goto B6cc843;
case 0x6cc849:goto L6cc849;
case 0x6cc84f:c.instructions+=1;goto B6cc84f;
case 0x6cc855:goto L6cc855;
case 0x6cc85b:c.instructions+=1;goto B6cc85b;
case 0x6cc861:goto L6cc861;
case 0x6cc867:c.instructions+=1;goto B6cc867;
case 0x6cc86d:goto L6cc86d;
case 0x6cc873:c.instructions+=1;goto B6cc873;
case 0x6cc879:goto L6cc879;
case 0x6cc87f:c.instructions+=1;goto B6cc87f;
case 0x6cc881:goto L6cc881;
case 0x6cc887:c.instructions+=1;goto B6cc887;
case 0x6cc889:goto L6cc889;
case 0x6cc88f:c.instructions+=1;goto B6cc88f;
case 0x6cc891:goto L6cc891;
case 0x6cc897:c.instructions+=1;goto B6cc897;
case 0x6cc899:goto L6cc899;
case 0x6cc89f:c.instructions+=1;goto B6cc89f;
case 0x6cc8a1:goto L6cc8a1;
case 0x6cc8a7:c.instructions+=1;goto B6cc8a7;
case 0x6cc8a9:goto L6cc8a9;
case 0x6cc8af:c.instructions+=1;goto B6cc8af;
case 0x6cc8b1:goto L6cc8b1;
case 0x6cc8b7:c.instructions+=1;goto B6cc8b7;
case 0x6cc8b9:goto L6cc8b9;
case 0x6cc8bf:c.instructions+=1;goto B6cc8bf;
case 0x6cc8c1:goto L6cc8c1;
case 0x6cc8c7:c.instructions+=1;goto B6cc8c7;
case 0x6cc8c9:goto L6cc8c9;
case 0x6cc8cf:c.instructions+=1;goto B6cc8cf;
case 0x6cc8d1:goto L6cc8d1;
case 0x6cc8d7:c.instructions+=1;goto B6cc8d7;
case 0x6cc8d9:goto L6cc8d9;
case 0x6cc8dd:c.instructions+=1;goto B6cc8dd;
case 0x6cc8df:goto L6cc8df;
case 0x6cc8e1:c.instructions+=1;goto B6cc8e1;
case 0x6cc8e2:goto L6cc8e2;
case 0x6cc8e9:c.instructions+=1;goto B6cc8e9;
case 0x6cc8eb:goto L6cc8eb;
case 0x6cc8ef:c.instructions+=1;goto B6cc8ef;
case 0x6cc8f1:goto L6cc8f1;
case 0x6cc8f3:c.instructions+=1;goto B6cc8f3;
case 0x6cc8f4:goto L6cc8f4;
case 0x6cc8fb:c.instructions+=1;goto B6cc8fb;
case 0x6cc8fd:goto L6cc8fd;
case 0x6cc901:c.instructions+=1;goto B6cc901;
case 0x6cc903:goto L6cc903;
case 0x6cc905:c.instructions+=1;goto B6cc905;
case 0x6cc906:goto L6cc906;
case 0x6cc90d:goto L6cc90d;
case 0x6cc90e:c.instructions+=2;goto B6cc90e;
case 0x6cc911:c.instructions+=1;goto B6cc911;
case 0x6cc917:goto L6cc917;
case 0x6cc919:c.instructions+=2;goto B6cc919;
case 0x6cc91a:c.instructions+=1;goto B6cc91a;
case 0x6cc91c:goto L6cc91c;
case 0x6cc921:c.instructions+=4;goto B6cc921;
case 0x6cc926:c.instructions+=3;goto B6cc926;
case 0x6cc928:c.instructions+=2;goto B6cc928;
case 0x6cc929:c.instructions+=1;goto B6cc929;
case 0x6cc92e:goto L6cc92e;
case 0x6cc931:c.instructions+=2;goto B6cc931;
case 0x6cc936:c.instructions+=1;goto B6cc936;
case 0x6cc938:goto L6cc938;
case 0x6cc93a:goto L6cc93a;
case 0x6cc93b:c.instructions+=2;goto B6cc93b;
case 0x6cc93c:c.instructions+=1;goto B6cc93c;
case 0x6cc93d:goto L6cc93d;
case 0x6cc93f:c.instructions+=18;goto B6cc93f;
case 0x6cc940:c.instructions+=17;goto B6cc940;
case 0x6cc942:c.instructions+=16;goto B6cc942;
case 0x6cc945:c.instructions+=15;goto B6cc945;
case 0x6cc948:c.instructions+=14;goto B6cc948;
case 0x6cc94a:c.instructions+=13;goto B6cc94a;
case 0x6cc94b:c.instructions+=12;goto B6cc94b;
case 0x6cc94e:c.instructions+=11;goto B6cc94e;
case 0x6cc94f:c.instructions+=10;goto B6cc94f;
case 0x6cc952:c.instructions+=9;goto B6cc952;
case 0x6cc953:c.instructions+=8;goto B6cc953;
case 0x6cc956:c.instructions+=7;goto B6cc956;
case 0x6cc959:c.instructions+=6;goto B6cc959;
case 0x6cc95c:c.instructions+=5;goto B6cc95c;
case 0x6cc95f:c.instructions+=4;goto B6cc95f;
case 0x6cc962:c.instructions+=3;goto B6cc962;
case 0x6cc964:c.instructions+=2;goto B6cc964;
case 0x6cc968:c.instructions+=1;goto B6cc968;
case 0x6cc96a:goto L6cc96a;
case 0x6cc96d:c.instructions+=2;goto B6cc96d;
case 0x6cc973:c.instructions+=1;goto B6cc973;
case 0x6cc978:goto L6cc978;
case 0x6cc97b:c.instructions+=4;goto B6cc97b;
case 0x6cc97d:c.instructions+=3;goto B6cc97d;
case 0x6cc97e:c.instructions+=2;goto B6cc97e;
case 0x6cc984:c.instructions+=1;goto B6cc984;
case 0x6cc986:goto L6cc986;
case 0x6cc98a:c.instructions+=1;goto B6cc98a;
case 0x6cc98c:goto L6cc98c;
case 0x6cc992:c.instructions+=1;goto B6cc992;
case 0x6cc994:goto L6cc994;
case 0x6cc998:c.instructions+=1;goto B6cc998;
case 0x6cc999:goto L6cc999;
case 0x6cc99f:c.instructions+=1;goto B6cc99f;
case 0x6cc9a1:goto L6cc9a1;
case 0x6cc9a9:c.instructions+=1;goto B6cc9a9;
case 0x6cc9aa:goto L6cc9aa;
case 0x6cc9b0:c.instructions+=1;goto B6cc9b0;
case 0x6cc9b2:goto L6cc9b2;
case 0x6cc9ba:c.instructions+=1;goto B6cc9ba;
case 0x6cc9bb:goto L6cc9bb;
case 0x6cc9be:c.instructions+=2;goto B6cc9be;
case 0x6cc9c0:c.instructions+=1;goto B6cc9c0;
case 0x6cc9c2:goto L6cc9c2;
case 0x6cc9c4:goto L6cc9c4;
case 0x6cc9c6:c.instructions+=2;goto B6cc9c6;
case 0x6cc9c8:c.instructions+=1;goto B6cc9c8;
case 0x6cc9ca:goto L6cc9ca;
case 0x6cc9cd:c.instructions+=2;goto B6cc9cd;
case 0x6cc9d0:c.instructions+=1;goto B6cc9d0;
case 0x6cc9d3:goto L6cc9d3;
case 0x6cc9d6:c.instructions+=4;goto B6cc9d6;
case 0x6cc9d9:c.instructions+=3;goto B6cc9d9;
case 0x6cc9dc:c.instructions+=2;goto B6cc9dc;
case 0x6cc9df:c.instructions+=1;goto B6cc9df;
case 0x6cc9e1:goto L6cc9e1;
case 0x6cc9e2:c.instructions+=2;goto B6cc9e2;
case 0x6cc9e4:c.instructions+=1;goto B6cc9e4;
case 0x6cc9e6:goto L6cc9e6;
case 0x6cc9e8:c.instructions+=1;goto B6cc9e8;
case 0x6cc9ea:goto L6cc9ea;
case 0x6cc9ec:goto L6cc9ec;
case 0x6cc9f0:c.instructions+=3;goto B6cc9f0;
case 0x6cc9f1:c.instructions+=2;goto B6cc9f1;
case 0x6cc9f4:c.instructions+=1;goto B6cc9f4;
case 0x6cc9f6:goto L6cc9f6;
case 0x6cc9f8:goto L6cc9f8;
case 0x6cc9fb:c.instructions+=6;goto B6cc9fb;
case 0x6cc9fe:c.instructions+=5;goto B6cc9fe;
case 0x6cca01:c.instructions+=4;goto B6cca01;
case 0x6cca02:c.instructions+=3;goto B6cca02;
case 0x6cca03:c.instructions+=2;goto B6cca03;
case 0x6cca04:c.instructions+=1;goto B6cca04;
case 0x6cca05:goto L6cca05;
case 0x6cca07:c.instructions+=2;goto B6cca07;
case 0x6cca09:c.instructions+=1;goto B6cca09;
case 0x6cca0b:goto L6cca0b;
case 0x6cca0e:c.instructions+=2;goto B6cca0e;
case 0x6cca11:c.instructions+=1;goto B6cca11;
case 0x6cca13:goto L6cca13;
case 0x6cca17:c.instructions+=8;goto B6cca17;
case 0x6cca1a:c.instructions+=7;goto B6cca1a;
case 0x6cca1e:c.instructions+=6;goto B6cca1e;
case 0x6cca21:c.instructions+=5;goto B6cca21;
case 0x6cca24:c.instructions+=4;goto B6cca24;
case 0x6cca25:c.instructions+=3;goto B6cca25;
case 0x6cca27:c.instructions+=2;goto B6cca27;
case 0x6cca2b:c.instructions+=1;goto B6cca2b;
case 0x6cca2d:goto L6cca2d;
case 0x6cca2f:c.instructions+=3;goto B6cca2f;
case 0x6cca31:c.instructions+=2;goto B6cca31;
case 0x6cca32:c.instructions+=1;goto B6cca32;
case 0x6cca35:goto L6cca35;
case 0x6cca37:c.instructions+=7;goto B6cca37;
case 0x6cca39:c.instructions+=6;goto B6cca39;
case 0x6cca3c:c.instructions+=5;goto B6cca3c;
case 0x6cca3e:c.instructions+=4;goto B6cca3e;
case 0x6cca3f:c.instructions+=3;goto B6cca3f;
case 0x6cca40:c.instructions+=2;goto B6cca40;
case 0x6cca43:c.instructions+=1;goto B6cca43;
case 0x6cca45:goto L6cca45;
case 0x6cca48:c.instructions+=1;goto B6cca48;
case 0x6cca4a:goto L6cca4a;
case 0x6cca4b:c.instructions+=5;goto B6cca4b;
case 0x6cca4c:c.instructions+=4;goto B6cca4c;
case 0x6cca4e:c.instructions+=3;goto B6cca4e;
case 0x6cca4f:c.instructions+=2;goto B6cca4f;
case 0x6cca50:c.instructions+=1;goto B6cca50;
case 0x6cca53:goto L6cca53;
case 0x6cca55:c.instructions+=8;goto B6cca55;
case 0x6cca56:c.instructions+=7;goto B6cca56;
case 0x6cca58:c.instructions+=6;goto B6cca58;
case 0x6cca59:c.instructions+=5;goto B6cca59;
case 0x6cca5c:c.instructions+=4;goto B6cca5c;
case 0x6cca5f:c.instructions+=3;goto B6cca5f;
case 0x6cca61:c.instructions+=2;goto B6cca61;
case 0x6cca64:c.instructions+=1;goto B6cca64;
case 0x6cca66:goto L6cca66;
case 0x6cca67:c.instructions+=8;goto B6cca67;
case 0x6cca6a:c.instructions+=7;goto B6cca6a;
case 0x6cca6d:c.instructions+=6;goto B6cca6d;
case 0x6cca70:c.instructions+=5;goto B6cca70;
case 0x6cca73:c.instructions+=4;goto B6cca73;
case 0x6cca76:c.instructions+=3;goto B6cca76;
case 0x6cca7a:c.instructions+=2;goto B6cca7a;
case 0x6cca7b:c.instructions+=1;goto B6cca7b;
case 0x6cca7d:goto L6cca7d;
case 0x6cca80:c.instructions+=5;goto B6cca80;
case 0x6cca83:c.instructions+=4;goto B6cca83;
case 0x6cca88:c.instructions+=3;goto B6cca88;
case 0x6cca8d:c.instructions+=2;goto B6cca8d;
case 0x6cca90:c.instructions+=1;goto B6cca90;
case 0x6cca92:goto L6cca92;
case 0x6cca93:c.instructions+=1;goto B6cca93;
case 0x6cca95:goto L6cca95;
case 0x6cca96:c.instructions+=1;goto B6cca96;
case 0x6cca98:goto L6cca98;
case 0x6cca99:c.instructions+=1;goto B6cca99;
case 0x6cca9b:goto L6cca9b;
case 0x6ccaa0:c.instructions+=1;goto B6ccaa0;
case 0x6ccaa2:goto L6ccaa2;
case 0x6ccaa7:c.instructions+=1;goto B6ccaa7;
case 0x6ccaa9:goto L6ccaa9;
case 0x6ccaae:goto L6ccaae;
case 0x6ccab2:c.instructions+=1;goto B6ccab2;
case 0x6ccab4:goto L6ccab4;
case 0x6ccab9:goto L6ccab9;
case 0x6ccabc:c.instructions+=3;goto B6ccabc;
case 0x6ccabe:c.instructions+=2;goto B6ccabe;
case 0x6ccabf:c.instructions+=1;goto B6ccabf;
case 0x6ccac1:goto L6ccac1;
case 0x6ccac3:goto L6ccac3;
case 0x6ccac5:c.instructions+=2;goto B6ccac5;
case 0x6ccac6:c.instructions+=1;goto B6ccac6;
case 0x6ccac9:goto L6ccac9;
case 0x6ccacb:c.instructions+=12;goto B6ccacb;
case 0x6ccacc:c.instructions+=11;goto B6ccacc;
case 0x6ccace:c.instructions+=10;goto B6ccace;
case 0x6ccacf:c.instructions+=9;goto B6ccacf;
case 0x6ccad3:c.instructions+=8;goto B6ccad3;
case 0x6ccad4:c.instructions+=7;goto B6ccad4;
case 0x6ccad5:c.instructions+=6;goto B6ccad5;
case 0x6ccad7:c.instructions+=5;goto B6ccad7;
case 0x6ccad9:c.instructions+=4;goto B6ccad9;
case 0x6ccadc:c.instructions+=3;goto B6ccadc;
case 0x6ccadd:c.instructions+=2;goto B6ccadd;
case 0x6ccadf:c.instructions+=1;goto B6ccadf;
case 0x6ccae1:goto L6ccae1;
case 0x6ccae7:goto L6ccae7;
case 0x6ccaea:c.instructions+=2;goto B6ccaea;
case 0x6ccaed:c.instructions+=1;goto B6ccaed;
case 0x6ccaef:goto L6ccaef;
case 0x6ccaf1:c.instructions+=1;goto B6ccaf1;
case 0x6ccaf2:goto L6ccaf2;
case 0x6ccaf3:c.instructions+=2;goto B6ccaf3;
case 0x6ccaf6:c.instructions+=1;goto B6ccaf6;
case 0x6ccaf8:goto L6ccaf8;
case 0x6ccafb:c.instructions+=2;goto B6ccafb;
case 0x6ccb01:c.instructions+=1;goto B6ccb01;
case 0x6ccb03:goto L6ccb03;
case 0x6ccb05:c.instructions+=1;goto B6ccb05;
case 0x6ccb0b:goto L6ccb0b;
case 0x6ccb0e:c.instructions+=9;goto B6ccb0e;
case 0x6ccb14:c.instructions+=8;goto B6ccb14;
case 0x6ccb15:c.instructions+=7;goto B6ccb15;
case 0x6ccb16:c.instructions+=6;goto B6ccb16;
case 0x6ccb17:c.instructions+=5;goto B6ccb17;
case 0x6ccb18:c.instructions+=4;goto B6ccb18;
case 0x6ccb1b:c.instructions+=3;goto B6ccb1b;
case 0x6ccb1e:c.instructions+=2;goto B6ccb1e;
case 0x6ccb1f:c.instructions+=1;goto B6ccb1f;
case 0x6ccb24:goto L6ccb24;
case 0x6ccb26:c.instructions+=4;goto B6ccb26;
case 0x6ccb28:c.instructions+=3;goto B6ccb28;
case 0x6ccb29:c.instructions+=2;goto B6ccb29;
case 0x6ccb2c:c.instructions+=1;goto B6ccb2c;
case 0x6ccb32:goto L6ccb32;
case 0x6ccb35:c.instructions+=4;goto B6ccb35;
case 0x6ccb38:c.instructions+=3;goto B6ccb38;
case 0x6ccb3a:c.instructions+=2;goto B6ccb3a;
case 0x6ccb3d:c.instructions+=1;goto B6ccb3d;
case 0x6ccb40:goto L6ccb40;
case 0x6ccb42:goto L6ccb42;
case 0x6ccb44:c.instructions+=2;goto B6ccb44;
case 0x6ccb47:c.instructions+=1;goto B6ccb47;
case 0x6ccb49:goto L6ccb49;
case 0x6ccb4b:goto L6ccb4b;
case 0x6ccb4e:c.instructions+=1;goto B6ccb4e;
case 0x6ccb50:goto L6ccb50;
case 0x6ccb53:c.instructions+=4;goto B6ccb53;
case 0x6ccb56:c.instructions+=3;goto B6ccb56;
case 0x6ccb5c:c.instructions+=2;goto B6ccb5c;
case 0x6ccb5f:c.instructions+=1;goto B6ccb5f;
case 0x6ccb61:goto L6ccb61;
case 0x6ccb65:c.instructions+=1;goto B6ccb65;
case 0x6ccb67:goto L6ccb67;
case 0x6ccb6a:c.instructions+=2;goto B6ccb6a;
case 0x6ccb6d:c.instructions+=1;goto B6ccb6d;
case 0x6ccb6f:goto L6ccb6f;
case 0x6ccb72:c.instructions+=1;goto B6ccb72;
case 0x6ccb74:goto L6ccb74;
case 0x6ccb77:c.instructions+=1;goto B6ccb77;
case 0x6ccb79:goto L6ccb79;
case 0x6ccb7c:c.instructions+=1;goto B6ccb7c;
case 0x6ccb80:goto L6ccb80;
case 0x6ccb83:c.instructions+=2;goto B6ccb83;
case 0x6ccb85:c.instructions+=1;goto B6ccb85;
case 0x6ccb87:goto L6ccb87;
case 0x6ccb8a:c.instructions+=4;goto B6ccb8a;
case 0x6ccb8d:c.instructions+=3;goto B6ccb8d;
case 0x6ccb90:c.instructions+=2;goto B6ccb90;
case 0x6ccb92:c.instructions+=1;goto B6ccb92;
case 0x6ccb94:goto L6ccb94;
case 0x6ccb96:goto L6ccb96;
case 0x6ccb97:c.instructions+=2;goto B6ccb97;
case 0x6ccb9a:c.instructions+=1;goto B6ccb9a;
case 0x6ccb9c:goto L6ccb9c;
case 0x6ccb9f:c.instructions+=5;goto B6ccb9f;
case 0x6ccba1:c.instructions+=4;goto B6ccba1;
case 0x6ccba3:c.instructions+=3;goto B6ccba3;
case 0x6ccba9:c.instructions+=2;goto B6ccba9;
case 0x6ccbaf:c.instructions+=1;goto B6ccbaf;
case 0x6ccbb1:goto L6ccbb1;
case 0x6ccbb3:c.instructions+=2;goto B6ccbb3;
case 0x6ccbb6:c.instructions+=1;goto B6ccbb6;
case 0x6ccbb8:goto L6ccbb8;
case 0x6ccbbb:c.instructions+=2;goto B6ccbbb;
case 0x6ccbbe:c.instructions+=1;goto B6ccbbe;
case 0x6ccbc0:goto L6ccbc0;
case 0x6ccbc1:c.instructions+=2;goto B6ccbc1;
case 0x6ccbc4:c.instructions+=1;goto B6ccbc4;
case 0x6ccbc6:goto L6ccbc6;
case 0x6ccbc9:c.instructions+=1;goto B6ccbc9;
case 0x6ccbcb:goto L6ccbcb;
case 0x6ccbce:c.instructions+=4;goto B6ccbce;
case 0x6ccbd4:c.instructions+=3;goto B6ccbd4;
case 0x6ccbd7:c.instructions+=2;goto B6ccbd7;
case 0x6ccbd9:c.instructions+=1;goto B6ccbd9;
case 0x6ccbdb:goto L6ccbdb;
case 0x6ccbe1:c.instructions+=2;goto B6ccbe1;
case 0x6ccbe3:c.instructions+=1;goto B6ccbe3;
case 0x6ccbe9:goto L6ccbe9;
case 0x6ccbea:c.instructions+=2;goto B6ccbea;
case 0x6ccbed:c.instructions+=1;goto B6ccbed;
case 0x6ccbef:goto L6ccbef;
case 0x6ccbf5:c.instructions+=1;goto B6ccbf5;
case 0x6ccbf7:goto L6ccbf7;
case 0x6ccbfe:c.instructions+=1;goto B6ccbfe;
case 0x6ccc04:goto L6ccc04;
case 0x6ccc07:c.instructions+=8;goto B6ccc07;
case 0x6ccc08:c.instructions+=7;goto B6ccc08;
case 0x6ccc0a:c.instructions+=6;goto B6ccc0a;
case 0x6ccc0c:c.instructions+=5;goto B6ccc0c;
case 0x6ccc10:c.instructions+=4;goto B6ccc10;
case 0x6ccc13:c.instructions+=3;goto B6ccc13;
case 0x6ccc16:c.instructions+=2;goto B6ccc16;
case 0x6ccc1a:c.instructions+=1;goto B6ccc1a;
case 0x6ccc20:goto L6ccc20;
case 0x6ccc27:c.instructions+=1;goto B6ccc27;
case 0x6ccc2a:goto L6ccc2a;
case 0x6ccc2d:c.instructions+=3;goto B6ccc2d;
case 0x6ccc2f:c.instructions+=2;goto B6ccc2f;
case 0x6ccc32:c.instructions+=1;goto B6ccc32;
case 0x6ccc34:goto L6ccc34;
case 0x6ccc37:c.instructions+=2;goto B6ccc37;
case 0x6ccc3a:c.instructions+=1;goto B6ccc3a;
case 0x6ccc3d:goto L6ccc3d;
case 0x6ccc3e:c.instructions+=8;goto B6ccc3e;
case 0x6ccc40:c.instructions+=7;goto B6ccc40;
case 0x6ccc41:c.instructions+=6;goto B6ccc41;
case 0x6ccc44:c.instructions+=5;goto B6ccc44;
case 0x6ccc45:c.instructions+=4;goto B6ccc45;
case 0x6ccc4b:c.instructions+=3;goto B6ccc4b;
case 0x6ccc4d:c.instructions+=2;goto B6ccc4d;
case 0x6ccc53:c.instructions+=1;goto B6ccc53;
case 0x6ccc58:goto L6ccc58;
case 0x6ccc5b:c.instructions+=3;goto B6ccc5b;
case 0x6ccc5e:c.instructions+=2;goto B6ccc5e;
case 0x6ccc60:c.instructions+=1;goto B6ccc60;
case 0x6ccc66:goto L6ccc66;
case 0x6ccc69:c.instructions+=13;goto B6ccc69;
case 0x6ccc6c:c.instructions+=12;goto B6ccc6c;
case 0x6ccc70:c.instructions+=11;goto B6ccc70;
case 0x6ccc74:c.instructions+=10;goto B6ccc74;
case 0x6ccc77:c.instructions+=9;goto B6ccc77;
case 0x6ccc7d:c.instructions+=8;goto B6ccc7d;
case 0x6ccc80:c.instructions+=7;goto B6ccc80;
case 0x6ccc83:c.instructions+=6;goto B6ccc83;
case 0x6ccc86:c.instructions+=5;goto B6ccc86;
case 0x6ccc8d:c.instructions+=4;goto B6ccc8d;
case 0x6ccc90:c.instructions+=3;goto B6ccc90;
case 0x6ccc93:c.instructions+=2;goto B6ccc93;
case 0x6ccc97:c.instructions+=1;goto B6ccc97;
case 0x6ccc99:goto L6ccc99;
case 0x6ccc9c:c.instructions+=13;goto B6ccc9c;
case 0x6ccc9e:c.instructions+=12;goto B6ccc9e;
case 0x6ccca1:c.instructions+=11;goto B6ccca1;
case 0x6ccca4:c.instructions+=10;goto B6ccca4;
case 0x6ccca7:c.instructions+=9;goto B6ccca7;
case 0x6cccaa:c.instructions+=8;goto B6cccaa;
case 0x6cccad:c.instructions+=7;goto B6cccad;
case 0x6cccb0:c.instructions+=6;goto B6cccb0;
case 0x6cccb3:c.instructions+=5;goto B6cccb3;
case 0x6cccb5:c.instructions+=4;goto B6cccb5;
case 0x6cccb8:c.instructions+=3;goto B6cccb8;
case 0x6cccbb:c.instructions+=2;goto B6cccbb;
case 0x6cccbe:c.instructions+=1;goto B6cccbe;
case 0x6cccc1:goto L6cccc1;
case 0x6cccc4:c.instructions+=2;goto B6cccc4;
case 0x6cccc6:c.instructions+=1;goto B6cccc6;
case 0x6cccc8:goto L6cccc8;
case 0x6ccccb:c.instructions+=3;goto B6ccccb;
case 0x6ccccd:c.instructions+=2;goto B6ccccd;
case 0x6cccd0:c.instructions+=1;goto B6cccd0;
case 0x6cccd3:goto L6cccd3;
case 0x6cccd7:c.instructions+=5;goto B6cccd7;
case 0x6cccd8:c.instructions+=4;goto B6cccd8;
case 0x6cccdb:c.instructions+=3;goto B6cccdb;
case 0x6cccde:c.instructions+=2;goto B6cccde;
case 0x6ccce1:c.instructions+=1;goto B6ccce1;
case 0x6ccce7:goto L6ccce7;
case 0x6ccce9:goto L6ccce9;
case 0x6cccec:c.instructions+=1;goto B6cccec;
case 0x6cccf1:goto L6cccf1;
case 0x6cccf2:c.instructions+=6;goto B6cccf2;
case 0x6cccf3:c.instructions+=5;goto B6cccf3;
case 0x6cccf5:c.instructions+=4;goto B6cccf5;
case 0x6cccf6:c.instructions+=3;goto B6cccf6;
case 0x6cccf7:c.instructions+=2;goto B6cccf7;
case 0x6cccf8:c.instructions+=1;goto B6cccf8;
case 0x6cccfb:goto L6cccfb;
case 0x6ccd00:c.instructions+=1;goto B6ccd00;
case 0x6ccd02:goto L6ccd02;
case 0x6ccd04:c.instructions+=12;goto B6ccd04;
case 0x6ccd05:c.instructions+=11;goto B6ccd05;
case 0x6ccd07:c.instructions+=10;goto B6ccd07;
case 0x6ccd08:c.instructions+=9;goto B6ccd08;
case 0x6ccd09:c.instructions+=8;goto B6ccd09;
case 0x6ccd0a:c.instructions+=7;goto B6ccd0a;
case 0x6ccd0b:c.instructions+=6;goto B6ccd0b;
case 0x6ccd0d:c.instructions+=5;goto B6ccd0d;
case 0x6ccd0e:c.instructions+=4;goto B6ccd0e;
case 0x6ccd14:c.instructions+=3;goto B6ccd14;
case 0x6ccd16:c.instructions+=2;goto B6ccd16;
case 0x6ccd18:c.instructions+=1;goto B6ccd18;
case 0x6ccd1a:goto L6ccd1a;
case 0x6ccd20:c.instructions+=3;goto B6ccd20;
case 0x6ccd26:c.instructions+=2;goto B6ccd26;
case 0x6ccd28:c.instructions+=1;goto B6ccd28;
case 0x6ccd2a:goto L6ccd2a;
case 0x6ccd30:c.instructions+=1;goto B6ccd30;
case 0x6ccd32:goto L6ccd32;
case 0x6ccd38:c.instructions+=4;goto B6ccd38;
case 0x6ccd3a:c.instructions+=3;goto B6ccd3a;
case 0x6ccd3d:c.instructions+=2;goto B6ccd3d;
case 0x6ccd40:c.instructions+=1;goto B6ccd40;
case 0x6ccd42:goto L6ccd42;
case 0x6ccd45:c.instructions+=2;goto B6ccd45;
case 0x6ccd47:c.instructions+=1;goto B6ccd47;
case 0x6ccd49:goto L6ccd49;
case 0x6ccd4d:c.instructions+=1;goto B6ccd4d;
case 0x6ccd4f:goto L6ccd4f;
case 0x6ccd51:c.instructions+=4;goto B6ccd51;
case 0x6ccd54:c.instructions+=3;goto B6ccd54;
case 0x6ccd57:c.instructions+=2;goto B6ccd57;
case 0x6ccd5a:c.instructions+=1;goto B6ccd5a;
case 0x6ccd5d:goto L6ccd5d;
case 0x6ccd5f:c.instructions+=9;goto B6ccd5f;
case 0x6ccd61:c.instructions+=8;goto B6ccd61;
case 0x6ccd62:c.instructions+=7;goto B6ccd62;
case 0x6ccd68:c.instructions+=6;goto B6ccd68;
case 0x6ccd6b:c.instructions+=5;goto B6ccd6b;
case 0x6ccd6c:c.instructions+=4;goto B6ccd6c;
case 0x6ccd6f:c.instructions+=3;goto B6ccd6f;
case 0x6ccd72:c.instructions+=2;goto B6ccd72;
case 0x6ccd73:c.instructions+=1;goto B6ccd73;
case 0x6ccd76:goto L6ccd76;
case 0x6ccd7c:c.instructions+=2;goto B6ccd7c;
case 0x6ccd82:c.instructions+=1;goto B6ccd82;
case 0x6ccd84:goto L6ccd84;
case 0x6ccd86:goto L6ccd86;
case 0x6ccd87:c.instructions+=4;goto B6ccd87;
case 0x6ccd88:c.instructions+=3;goto B6ccd88;
case 0x6ccd89:c.instructions+=2;goto B6ccd89;
case 0x6ccd8a:c.instructions+=1;goto B6ccd8a;
case 0x6ccd8b:goto L6ccd8b;
case 0x6ccd8d:c.instructions+=8;goto B6ccd8d;
case 0x6ccd8e:c.instructions+=7;goto B6ccd8e;
case 0x6ccd90:c.instructions+=6;goto B6ccd90;
case 0x6ccd93:c.instructions+=5;goto B6ccd93;
case 0x6ccd96:c.instructions+=4;goto B6ccd96;
case 0x6ccd99:c.instructions+=3;goto B6ccd99;
case 0x6ccd9a:c.instructions+=2;goto B6ccd9a;
case 0x6ccd9d:c.instructions+=1;goto B6ccd9d;
case 0x6ccd9f:goto L6ccd9f;
case 0x6ccda5:c.instructions+=2;goto B6ccda5;
case 0x6ccda7:c.instructions+=1;goto B6ccda7;
case 0x6ccda9:goto L6ccda9;
case 0x6ccdac:c.instructions+=2;goto B6ccdac;
case 0x6ccdae:c.instructions+=1;goto B6ccdae;
case 0x6ccdb0:goto L6ccdb0;
case 0x6ccdb4:c.instructions+=1;goto B6ccdb4;
case 0x6ccdb6:goto L6ccdb6;
case 0x6ccdb8:c.instructions+=5;goto B6ccdb8;
case 0x6ccdbb:c.instructions+=4;goto B6ccdbb;
case 0x6ccdbe:c.instructions+=3;goto B6ccdbe;
case 0x6ccdc1:c.instructions+=2;goto B6ccdc1;
case 0x6ccdc4:c.instructions+=1;goto B6ccdc4;
case 0x6ccdc6:goto L6ccdc6;
case 0x6ccdc8:goto L6ccdc8;
case 0x6ccdcb:c.instructions+=7;goto B6ccdcb;
case 0x6ccdce:c.instructions+=6;goto B6ccdce;
case 0x6ccdd1:c.instructions+=5;goto B6ccdd1;
case 0x6ccdd6:c.instructions+=4;goto B6ccdd6;
case 0x6ccdd7:c.instructions+=3;goto B6ccdd7;
case 0x6ccdd8:c.instructions+=2;goto B6ccdd8;
case 0x6ccddb:c.instructions+=1;goto B6ccddb;
case 0x6ccddd:goto L6ccddd;
case 0x6ccde0:c.instructions+=1;goto B6ccde0;
case 0x6ccde2:goto L6ccde2;
case 0x6ccde5:c.instructions+=8;goto B6ccde5;
case 0x6ccde8:c.instructions+=7;goto B6ccde8;
case 0x6ccded:c.instructions+=6;goto B6ccded;
case 0x6ccdf2:c.instructions+=5;goto B6ccdf2;
case 0x6ccdf3:c.instructions+=4;goto B6ccdf3;
case 0x6ccdf6:c.instructions+=3;goto B6ccdf6;
case 0x6ccdf7:c.instructions+=2;goto B6ccdf7;
case 0x6ccdfd:c.instructions+=1;goto B6ccdfd;
case 0x6cce02:goto L6cce02;
case 0x6cce05:c.instructions+=1;goto B6cce05;
case 0x6cce0f:goto L6cce0f;
case 0x6cce11:c.instructions+=3;goto B6cce11;
case 0x6cce12:c.instructions+=2;goto B6cce12;
case 0x6cce13:c.instructions+=1;goto B6cce13;
case 0x6cce16:goto L6cce16;
case 0x6cce1d:c.instructions+=1;goto B6cce1d;
case 0x6cce1f:goto L6cce1f;
case 0x6cce21:c.instructions+=1;goto B6cce21;
case 0x6cce22:goto L6cce22;
case 0x6cce28:c.instructions+=3;goto B6cce28;
case 0x6cce2e:c.instructions+=2;goto B6cce2e;
case 0x6cce34:c.instructions+=1;goto B6cce34;
case 0x6cce35:goto L6cce35;
case 0x6cce37:c.instructions+=11;goto B6cce37;
case 0x6cce38:c.instructions+=10;goto B6cce38;
case 0x6cce3a:c.instructions+=9;goto B6cce3a;
case 0x6cce3d:c.instructions+=8;goto B6cce3d;
case 0x6cce3e:c.instructions+=7;goto B6cce3e;
case 0x6cce3f:c.instructions+=6;goto B6cce3f;
case 0x6cce41:c.instructions+=5;goto B6cce41;
case 0x6cce43:c.instructions+=4;goto B6cce43;
case 0x6cce49:c.instructions+=3;goto B6cce49;
case 0x6cce4c:c.instructions+=2;goto B6cce4c;
case 0x6cce4f:c.instructions+=1;goto B6cce4f;
case 0x6cce51:goto L6cce51;
case 0x6cce53:c.instructions+=1;goto B6cce53;
case 0x6cce58:goto L6cce58;
case 0x6cce5e:c.instructions+=3;goto B6cce5e;
case 0x6cce64:c.instructions+=2;goto B6cce64;
case 0x6cce6a:c.instructions+=1;goto B6cce6a;
case 0x6cce70:goto L6cce70;
case 0x6cce73:c.instructions+=3;goto B6cce73;
case 0x6cce74:c.instructions+=2;goto B6cce74;
case 0x6cce75:c.instructions+=1;goto B6cce75;
case 0x6cce7a:goto L6cce7a;
case 0x6cce7c:c.instructions+=4;goto B6cce7c;
case 0x6cce7e:c.instructions+=3;goto B6cce7e;
case 0x6cce7f:c.instructions+=2;goto B6cce7f;
case 0x6cce82:c.instructions+=1;goto B6cce82;
case 0x6cce84:goto L6cce84;
case 0x6cce8b:c.instructions+=1;goto B6cce8b;
case 0x6cce90:goto L6cce90;
case 0x6cce94:c.instructions+=1;goto B6cce94;
case 0x6cce96:goto L6cce96;
case 0x6cce9c:goto L6cce9c;
case 0x6cce9d:c.instructions+=4;goto B6cce9d;
case 0x6ccea0:c.instructions+=3;goto B6ccea0;
case 0x6ccea5:c.instructions+=2;goto B6ccea5;
case 0x6ccea6:c.instructions+=1;goto B6ccea6;
case 0x6cceab:goto L6cceab;
case 0x6cceae:c.instructions+=6;goto B6cceae;
case 0x6cceb0:c.instructions+=5;goto B6cceb0;
case 0x6cceb1:c.instructions+=4;goto B6cceb1;
case 0x6cceb4:c.instructions+=3;goto B6cceb4;
case 0x6cceb5:c.instructions+=2;goto B6cceb5;
case 0x6cceb7:c.instructions+=1;goto B6cceb7;
case 0x6ccebc:goto L6ccebc;
case 0x6ccebe:c.instructions+=2;goto B6ccebe;
case 0x6ccec1:c.instructions+=1;goto B6ccec1;
case 0x6ccec7:goto L6ccec7;
case 0x6ccec8:c.instructions+=2;goto B6ccec8;
case 0x6ccecb:c.instructions+=1;goto B6ccecb;
case 0x6ccecd:goto L6ccecd;
case 0x6cced0:goto L6cced0;
case 0x6cced1:c.instructions+=2;goto B6cced1;
case 0x6cced7:c.instructions+=1;goto B6cced7;
case 0x6ccedc:goto L6ccedc;
case 0x6ccee2:c.instructions+=5;goto B6ccee2;
case 0x6ccee8:c.instructions+=4;goto B6ccee8;
case 0x6cceee:c.instructions+=3;goto B6cceee;
case 0x6ccef1:c.instructions+=2;goto B6ccef1;
case 0x6ccef2:c.instructions+=1;goto B6ccef2;
case 0x6ccef7:goto L6ccef7;
case 0x6ccefd:c.instructions+=5;goto B6ccefd;
case 0x6ccf02:c.instructions+=4;goto B6ccf02;
case 0x6ccf04:c.instructions+=3;goto B6ccf04;
case 0x6ccf05:c.instructions+=2;goto B6ccf05;
case 0x6ccf06:c.instructions+=1;goto B6ccf06;
case 0x6ccf0b:goto L6ccf0b;
case 0x6ccf0e:c.instructions+=15;goto B6ccf0e;
case 0x6ccf11:c.instructions+=14;goto B6ccf11;
case 0x6ccf13:c.instructions+=13;goto B6ccf13;
case 0x6ccf16:c.instructions+=12;goto B6ccf16;
case 0x6ccf18:c.instructions+=11;goto B6ccf18;
case 0x6ccf1b:c.instructions+=10;goto B6ccf1b;
case 0x6ccf21:c.instructions+=9;goto B6ccf21;
case 0x6ccf27:c.instructions+=8;goto B6ccf27;
case 0x6ccf2d:c.instructions+=7;goto B6ccf2d;
case 0x6ccf33:c.instructions+=6;goto B6ccf33;
case 0x6ccf39:c.instructions+=5;goto B6ccf39;
case 0x6ccf3d:c.instructions+=4;goto B6ccf3d;
case 0x6ccf40:c.instructions+=3;goto B6ccf40;
case 0x6ccf43:c.instructions+=2;goto B6ccf43;
case 0x6ccf46:c.instructions+=1;goto B6ccf46;
case 0x6ccf4c:goto L6ccf4c;
case 0x6ccf4e:goto L6ccf4e;
case 0x6ccf51:goto L6ccf51;
case 0x6ccf54:c.instructions+=8;goto B6ccf54;
case 0x6ccf57:c.instructions+=7;goto B6ccf57;
case 0x6ccf58:c.instructions+=6;goto B6ccf58;
case 0x6ccf5a:c.instructions+=5;goto B6ccf5a;
case 0x6ccf5d:c.instructions+=4;goto B6ccf5d;
case 0x6ccf5f:c.instructions+=3;goto B6ccf5f;
case 0x6ccf61:c.instructions+=2;goto B6ccf61;
case 0x6ccf63:c.instructions+=1;goto B6ccf63;
case 0x6ccf68:goto L6ccf68;
case 0x6ccf6a:c.instructions+=2;goto B6ccf6a;
case 0x6ccf6d:c.instructions+=1;goto B6ccf6d;
case 0x6ccf6f:goto L6ccf6f;
case 0x6ccf72:c.instructions+=7;goto B6ccf72;
case 0x6ccf75:c.instructions+=6;goto B6ccf75;
case 0x6ccf76:c.instructions+=5;goto B6ccf76;
case 0x6ccf78:c.instructions+=4;goto B6ccf78;
case 0x6ccf7a:c.instructions+=3;goto B6ccf7a;
case 0x6ccf7d:c.instructions+=2;goto B6ccf7d;
case 0x6ccf7e:c.instructions+=1;goto B6ccf7e;
case 0x6ccf83:goto L6ccf83;
case 0x6ccf85:c.instructions+=2;goto B6ccf85;
case 0x6ccf88:c.instructions+=1;goto B6ccf88;
case 0x6ccf8a:goto L6ccf8a;
case 0x6ccf8c:c.instructions+=2;goto B6ccf8c;
case 0x6ccf90:c.instructions+=1;goto B6ccf90;
case 0x6ccf92:goto L6ccf92;
case 0x6ccf96:c.instructions+=9;goto B6ccf96;
case 0x6ccf99:c.instructions+=8;goto B6ccf99;
case 0x6ccf9c:c.instructions+=7;goto B6ccf9c;
case 0x6ccf9d:c.instructions+=6;goto B6ccf9d;
case 0x6ccf9f:c.instructions+=5;goto B6ccf9f;
case 0x6ccfa1:c.instructions+=4;goto B6ccfa1;
case 0x6ccfa3:c.instructions+=3;goto B6ccfa3;
case 0x6ccfa6:c.instructions+=2;goto B6ccfa6;
case 0x6ccfa7:c.instructions+=1;goto B6ccfa7;
case 0x6ccfac:goto L6ccfac;
case 0x6ccfae:c.instructions+=2;goto B6ccfae;
case 0x6ccfb1:c.instructions+=1;goto B6ccfb1;
case 0x6ccfb3:goto L6ccfb3;
case 0x6ccfb6:c.instructions+=8;goto B6ccfb6;
case 0x6ccfbc:c.instructions+=7;goto B6ccfbc;
case 0x6ccfbe:c.instructions+=6;goto B6ccfbe;
case 0x6ccfc2:c.instructions+=5;goto B6ccfc2;
case 0x6ccfc6:c.instructions+=4;goto B6ccfc6;
case 0x6ccfcc:c.instructions+=3;goto B6ccfcc;
case 0x6ccfcf:c.instructions+=2;goto B6ccfcf;
case 0x6ccfd2:c.instructions+=1;goto B6ccfd2;
case 0x6ccfd8:goto L6ccfd8;
case 0x6ccfdc:goto L6ccfdc;
case 0x6ccfdd:goto L6ccfdd;
case 0x6ccfe0:c.instructions+=1;goto B6ccfe0;
case 0x6ccfe5:goto L6ccfe5;
case 0x6ccfe8:c.instructions+=1;goto B6ccfe8;
case 0x6ccfe9:goto L6ccfe9;
case 0x6ccfea:c.instructions+=3;goto B6ccfea;
case 0x6ccfeb:c.instructions+=2;goto B6ccfeb;
case 0x6ccfec:c.instructions+=1;goto B6ccfec;
case 0x6ccfef:goto L6ccfef;
case 0x6ccff1:c.instructions+=7;goto B6ccff1;
case 0x6ccff2:c.instructions+=6;goto B6ccff2;
case 0x6ccff4:c.instructions+=5;goto B6ccff4;
case 0x6ccff7:c.instructions+=4;goto B6ccff7;
case 0x6ccff8:c.instructions+=3;goto B6ccff8;
case 0x6ccffa:c.instructions+=2;goto B6ccffa;
case 0x6ccffd:c.instructions+=1;goto B6ccffd;
default:missing_instruction(c.pc);}
B6cc001:L6cc001:{c.instructions+=1;NFSU2_TR(0x6cc001);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6cbff8u,6cb);}
}
B6cc003:L6cc003:{c.instructions+=4;NFSU2_TR(0x6cc003);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6cc007:{NFSU2_TR(0x6cc007);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cc00a:{NFSU2_TR(0x6cc00a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc00b:{NFSU2_TR(0x6cc00b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc010ull));
TAIL_STATIC(0x575620u,575);
}
B6cc010:L6cc010:{c.instructions+=5;NFSU2_TR(0x6cc010);
__builtin_memmove((R+12),(R+0),4);
}
B6cc012:{NFSU2_TR(0x6cc012);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc014:{NFSU2_TR(0x6cc014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc015:{NFSU2_TR(0x6cc015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc018:{NFSU2_TR(0x6cc018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc024;}}
}
B6cc01a:L6cc01a:{c.instructions+=2;NFSU2_TR(0x6cc01a);
w4(R+0,u32(0x8007000eull));
}
B6cc01f:{NFSU2_TR(0x6cc01f);
{goto L6cc0ca;}
}
B6cc024:L6cc024:{c.instructions+=10;NFSU2_TR(0x6cc024);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc027:{NFSU2_TR(0x6cc027);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc02a:{NFSU2_TR(0x6cc02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc02d:{NFSU2_TR(0x6cc02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc030:{NFSU2_TR(0x6cc030);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc033:{NFSU2_TR(0x6cc033);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc034:{NFSU2_TR(0x6cc034);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc036:{NFSU2_TR(0x6cc036);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc038:{NFSU2_TR(0x6cc038);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc039:{NFSU2_TR(0x6cc039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc03eull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6cc03e:L6cc03e:{c.instructions+=3;NFSU2_TR(0x6cc03e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cc040:{NFSU2_TR(0x6cc040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc043:{NFSU2_TR(0x6cc043);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cc097;}}
}
B6cc045:L6cc045:{c.instructions+=7;NFSU2_TR(0x6cc045);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cc048:{NFSU2_TR(0x6cc048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc049:{NFSU2_TR(0x6cc049);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc04c:{NFSU2_TR(0x6cc04c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc04e:{NFSU2_TR(0x6cc04e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc051:{NFSU2_TR(0x6cc051);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc054:{NFSU2_TR(0x6cc054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc059ull));
TAIL_STATIC(0x6cbe4cu,6cb);
}
B6cc059:L6cc059:{c.instructions+=3;NFSU2_TR(0x6cc059);
__builtin_memmove((R+28),(R+0),4);
}
B6cc05b:{NFSU2_TR(0x6cc05b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cc05d:{NFSU2_TR(0x6cc05d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cc0a5;}}
}
B6cc05f:L6cc05f:{c.instructions+=4;NFSU2_TR(0x6cc05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cc062:{NFSU2_TR(0x6cc062);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B6cc065:{NFSU2_TR(0x6cc065);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc067:{NFSU2_TR(0x6cc067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc024u);}goto L6cc024;}}
}
B6cc069:L6cc069:{c.instructions+=11;NFSU2_TR(0x6cc069);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc06c:{NFSU2_TR(0x6cc06c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cc06f:{NFSU2_TR(0x6cc06f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc070:{NFSU2_TR(0x6cc070);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6cc074:{NFSU2_TR(0x6cc074);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc076:{NFSU2_TR(0x6cc076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc077:{NFSU2_TR(0x6cc077);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc078:{NFSU2_TR(0x6cc078);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cc07b:{NFSU2_TR(0x6cc07b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc07c:{NFSU2_TR(0x6cc07c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc07f:{NFSU2_TR(0x6cc07f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc084ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6cc084:L6cc084:{c.instructions+=3;NFSU2_TR(0x6cc084);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc087:{NFSU2_TR(0x6cc087);
__builtin_memmove((R+24),(R+0),4);
}
B6cc089:{NFSU2_TR(0x6cc089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc08eull));
TAIL_STATIC(0x575630u,575);
}
B6cc08e:L6cc08e:{c.instructions+=3;NFSU2_TR(0x6cc08e);
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
B6cc090:{NFSU2_TR(0x6cc090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc091:{NFSU2_TR(0x6cc091);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6cc0b2;}}
}
B6cc093:L6cc093:{c.instructions+=2;NFSU2_TR(0x6cc093);
__builtin_memmove((R+0),(R+24),4);
}
B6cc095:{NFSU2_TR(0x6cc095);
{goto L6cc0ca;}
}
B6cc097:L6cc097:{c.instructions+=2;NFSU2_TR(0x6cc097);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc09a:{NFSU2_TR(0x6cc09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc09full));
TAIL_STATIC(0x575630u,575);
}
B6cc09f:L6cc09f:{c.instructions+=3;NFSU2_TR(0x6cc09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc0a2:{NFSU2_TR(0x6cc0a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc0a3:{NFSU2_TR(0x6cc0a3);
{goto L6cc0ca;}
}
B6cc0a5:L6cc0a5:{c.instructions+=2;NFSU2_TR(0x6cc0a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc0a8:{NFSU2_TR(0x6cc0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc0adull));
TAIL_STATIC(0x575630u,575);
}
B6cc0ad:L6cc0ad:{c.instructions+=3;NFSU2_TR(0x6cc0ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc0ae:{NFSU2_TR(0x6cc0ae);
__builtin_memmove((R+0),(R+28),4);
}
B6cc0b0:{NFSU2_TR(0x6cc0b0);
{goto L6cc0ca;}
}
B6cc0b2:L6cc0b2:{c.instructions+=7;NFSU2_TR(0x6cc0b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc0b5:{NFSU2_TR(0x6cc0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc0b8:{NFSU2_TR(0x6cc0b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc0b9:{NFSU2_TR(0x6cc0b9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc0bb:{NFSU2_TR(0x6cc0bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cc0be:{NFSU2_TR(0x6cc0be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc0bf:{NFSU2_TR(0x6cc0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc0c4ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6cc0c4:L6cc0c4:{c.instructions+=2;NFSU2_TR(0x6cc0c4);
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
B6cc0c6:{NFSU2_TR(0x6cc0c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cc0ca;}}
}
B6cc0c8:L6cc0c8:{c.instructions+=1;NFSU2_TR(0x6cc0c8);
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
B6cc0ca:L6cc0ca:{c.instructions+=5;NFSU2_TR(0x6cc0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc0cb:{NFSU2_TR(0x6cc0cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cc0cc:{NFSU2_TR(0x6cc0cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cc0cd:{NFSU2_TR(0x6cc0cd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cc0ce:{NFSU2_TR(0x6cc0ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc145:L6cc145:{c.instructions+=11;NFSU2_TR(0x6cc145);
__builtin_memmove((R+28),(R+28),4);
}
B6cc147:{NFSU2_TR(0x6cc147);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc148:{NFSU2_TR(0x6cc148);
__builtin_memmove((R+20),(R+16),4);
}
B6cc14a:{NFSU2_TR(0x6cc14a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc14b:{NFSU2_TR(0x6cc14b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc14c:{NFSU2_TR(0x6cc14c);
__builtin_memmove((R+12),(R+4),4);
}
B6cc14e:{NFSU2_TR(0x6cc14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc154:{NFSU2_TR(0x6cc154);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc156:{NFSU2_TR(0x6cc156);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc157:{NFSU2_TR(0x6cc157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc15a:{NFSU2_TR(0x6cc15a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc163;}}
}
B6cc15c:L6cc15c:{c.instructions+=1;NFSU2_TR(0x6cc15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc163:L6cc163:{c.instructions+=5;NFSU2_TR(0x6cc163);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc169:{NFSU2_TR(0x6cc169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc16c:{NFSU2_TR(0x6cc16c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6cc16e:{NFSU2_TR(0x6cc16e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc171:{NFSU2_TR(0x6cc171);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cc187;}}
}
B6cc173:L6cc173:{c.instructions+=2;NFSU2_TR(0x6cc173);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc179:{NFSU2_TR(0x6cc179);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6cc17b:L6cc17b:{c.instructions+=5;NFSU2_TR(0x6cc17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc17e:{NFSU2_TR(0x6cc17e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
}
B6cc180:{NFSU2_TR(0x6cc180);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc182:{NFSU2_TR(0x6cc182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc185:{NFSU2_TR(0x6cc185);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc17bu);}goto L6cc17b;}}
}
B6cc187:L6cc187:{c.instructions+=3;NFSU2_TR(0x6cc187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc18a:{NFSU2_TR(0x6cc18a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc18c:{NFSU2_TR(0x6cc18c);
if(r1(R+518)){{goto L6cc1e5;}}
}
B6cc18e:L6cc18e:{c.instructions+=3;NFSU2_TR(0x6cc18e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cc191:{NFSU2_TR(0x6cc191);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc192:{NFSU2_TR(0x6cc192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc197ull));
TAIL_STATIC(0x575620u,575);
}
B6cc197:L6cc197:{c.instructions+=5;NFSU2_TR(0x6cc197);
__builtin_memmove((R+28),(R+0),4);
}
B6cc199:{NFSU2_TR(0x6cc199);
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
B6cc19b:{NFSU2_TR(0x6cc19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc19c:{NFSU2_TR(0x6cc19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc19f:{NFSU2_TR(0x6cc19f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc1a8;}}
}
B6cc1a1:L6cc1a1:{c.instructions+=2;NFSU2_TR(0x6cc1a1);
w4(R+0,u32(0x8007000eull));
}
B6cc1a6:{NFSU2_TR(0x6cc1a6);
{goto L6cc1e7;}
}
B6cc1a8:L6cc1a8:{c.instructions+=6;NFSU2_TR(0x6cc1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc1ae:{NFSU2_TR(0x6cc1ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cc1b1:{NFSU2_TR(0x6cc1b1);
__builtin_memmove((R+0),(R+4),4);
}
B6cc1b3:{NFSU2_TR(0x6cc1b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc1b4:{NFSU2_TR(0x6cc1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cc1ba:{NFSU2_TR(0x6cc1ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cc1bd:L6cc1bd:{c.instructions+=1;NFSU2_TR(0x6cc1bd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cc1bf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc1bdu);}goto L6cc1bd;}
}
B6cc1bf:L6cc1bf:{c.instructions+=2;NFSU2_TR(0x6cc1bf);
__builtin_memmove((R+4),(R+0),4);
}
B6cc1c1:{NFSU2_TR(0x6cc1c1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cc1c4:L6cc1c4:{c.instructions+=1;NFSU2_TR(0x6cc1c4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cc1c6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc1c4u);}goto L6cc1c4;}
}
B6cc1c6:L6cc1c6:{c.instructions+=2;NFSU2_TR(0x6cc1c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc1cc:{NFSU2_TR(0x6cc1cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc1d1ull));
TAIL_STATIC(0x575630u,575);
}
B6cc1d1:L6cc1d1:{c.instructions+=6;NFSU2_TR(0x6cc1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc1d4:{NFSU2_TR(0x6cc1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc1da:{NFSU2_TR(0x6cc1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc1dd:{NFSU2_TR(0x6cc1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc1de:{NFSU2_TR(0x6cc1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc1e4:{NFSU2_TR(0x6cc1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cc1e5:L6cc1e5:{c.instructions+=1;NFSU2_TR(0x6cc1e5);
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
B6cc1e7:L6cc1e7:{c.instructions+=4;NFSU2_TR(0x6cc1e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc1e8:{NFSU2_TR(0x6cc1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cc1e9:{NFSU2_TR(0x6cc1e9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cc1ea:{NFSU2_TR(0x6cc1ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc1ed:L6cc1ed:{c.instructions+=15;NFSU2_TR(0x6cc1ed);
__builtin_memmove((R+28),(R+28),4);
}
B6cc1ef:{NFSU2_TR(0x6cc1ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc1f0:{NFSU2_TR(0x6cc1f0);
__builtin_memmove((R+20),(R+16),4);
}
B6cc1f2:{NFSU2_TR(0x6cc1f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc1f3:{NFSU2_TR(0x6cc1f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc1f4:{NFSU2_TR(0x6cc1f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc1f5:{NFSU2_TR(0x6cc1f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc1f6:{NFSU2_TR(0x6cc1f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cc1f8:{NFSU2_TR(0x6cc1f8);
__builtin_memmove((R+24),(R+4),4);
}
B6cc1fa:{NFSU2_TR(0x6cc1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc1fd:{NFSU2_TR(0x6cc1fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc1ff:{NFSU2_TR(0x6cc1ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc200:{NFSU2_TR(0x6cc200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc203:{NFSU2_TR(0x6cc203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc206:{NFSU2_TR(0x6cc206);
if(r1(R+518)){{goto L6cc20a;}}
}
B6cc208:L6cc208:{c.instructions+=1;NFSU2_TR(0x6cc208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cc20a:L6cc20a:{c.instructions+=4;NFSU2_TR(0x6cc20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc20d:{NFSU2_TR(0x6cc20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc210:{NFSU2_TR(0x6cc210);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc216:{NFSU2_TR(0x6cc216);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc259;}}
}
B6cc218:L6cc218:{c.instructions+=5;NFSU2_TR(0x6cc218);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc21b:{NFSU2_TR(0x6cc21b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc21e:{NFSU2_TR(0x6cc21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc221:{NFSU2_TR(0x6cc221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc224:{NFSU2_TR(0x6cc224);
if(r1(R+512)){{goto L6cc235;}}
}
B6cc226:L6cc226:{c.instructions+=3;NFSU2_TR(0x6cc226);
u8 U[4];
w4(U+0,u32(0x7bf3b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc22b:{NFSU2_TR(0x6cc22b);
u8 U[4];
w4(U+0,u32(0x1199ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc230:{NFSU2_TR(0x6cc230);
{goto L6cc2cd;}
}
B6cc235:L6cc235:{c.instructions+=3;NFSU2_TR(0x6cc235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc238:{NFSU2_TR(0x6cc238);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc23a:{NFSU2_TR(0x6cc23a);
if(r1(R+518)){{goto L6cc2e6;}}
}
B6cc240:L6cc240:{c.instructions+=2;NFSU2_TR(0x6cc240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cc242:{NFSU2_TR(0x6cc242);
if(r1(R+512)){{goto L6cc2e6;}}
}
B6cc248:L6cc248:{c.instructions+=4;NFSU2_TR(0x6cc248);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6cc24a:{NFSU2_TR(0x6cc24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc24d:{NFSU2_TR(0x6cc24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc254:{NFSU2_TR(0x6cc254);
{goto L6cc2e6;}
}
B6cc259:L6cc259:{c.instructions+=2;NFSU2_TR(0x6cc259);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc25f:{NFSU2_TR(0x6cc25f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc27f;}}
}
B6cc261:L6cc261:{c.instructions+=5;NFSU2_TR(0x6cc261);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc264:{NFSU2_TR(0x6cc264);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B6cc267:{NFSU2_TR(0x6cc267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc26e:{NFSU2_TR(0x6cc26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc271:{NFSU2_TR(0x6cc271);
if(r1(R+512)){{goto L6cc2e6;}}
}
B6cc273:L6cc273:{c.instructions+=3;NFSU2_TR(0x6cc273);
u8 U[4];
w4(U+0,u32(0x7bf388ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc278:{NFSU2_TR(0x6cc278);
u8 U[4];
w4(U+0,u32(0x119cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc27d:{NFSU2_TR(0x6cc27d);
{goto L6cc2cd;}
}
B6cc27f:L6cc27f:{c.instructions+=2;NFSU2_TR(0x6cc27f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cc285:{NFSU2_TR(0x6cc285);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc2a9;}}
}
B6cc287:L6cc287:{c.instructions+=9;NFSU2_TR(0x6cc287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cc289:{NFSU2_TR(0x6cc289);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc28a:{NFSU2_TR(0x6cc28a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc28d:{NFSU2_TR(0x6cc28d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc28e:{NFSU2_TR(0x6cc28e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc291:{NFSU2_TR(0x6cc291);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc292:{NFSU2_TR(0x6cc292);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc293:{NFSU2_TR(0x6cc293);
__builtin_memmove((R+4),(R+24),4);
}
B6cc295:{NFSU2_TR(0x6cc295);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc29bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cc29b:L6cc29b:{c.instructions+=2;NFSU2_TR(0x6cc29b);
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
B6cc29d:{NFSU2_TR(0x6cc29d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6cc2e3;}}
}
B6cc29f:L6cc29f:{c.instructions+=2;NFSU2_TR(0x6cc29f);
w4(R+0,u32(0x80004005ull));
}
B6cc2a4:{NFSU2_TR(0x6cc2a4);
{goto L6cc333;}
}
B6cc2a9:L6cc2a9:{c.instructions+=2;NFSU2_TR(0x6cc2a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc2af:{NFSU2_TR(0x6cc2af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc31e;}}
}
B6cc2b1:L6cc2b1:{c.instructions+=5;NFSU2_TR(0x6cc2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc2b4:{NFSU2_TR(0x6cc2b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc2b7:{NFSU2_TR(0x6cc2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc2be:{NFSU2_TR(0x6cc2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc2c1:{NFSU2_TR(0x6cc2c1);
if(r1(R+512)){{goto L6cc2e6;}}
}
B6cc2c3:L6cc2c3:{c.instructions+=2;NFSU2_TR(0x6cc2c3);
u8 U[4];
w4(U+0,u32(0x7bf35cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc2c8:{NFSU2_TR(0x6cc2c8);
u8 U[4];
w4(U+0,u32(0x11c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc2cd:L6cc2cd:{c.instructions+=4;NFSU2_TR(0x6cc2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc2d3:{NFSU2_TR(0x6cc2d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc2d6:{NFSU2_TR(0x6cc2d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc2d7:{NFSU2_TR(0x6cc2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc2dcull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc2dc:L6cc2dc:{c.instructions+=2;NFSU2_TR(0x6cc2dc);
w4(R+0,u32(0x88760b59ull));
}
B6cc2e1:{NFSU2_TR(0x6cc2e1);
{goto L6cc330;}
}
B6cc2e3:L6cc2e3:{c.instructions+=1;NFSU2_TR(0x6cc2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc2e6:L6cc2e6:{c.instructions+=3;NFSU2_TR(0x6cc2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc2e9:{NFSU2_TR(0x6cc2e9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6cc2eb:{NFSU2_TR(0x6cc2eb);
if(r1(R+518)){{goto L6cc30b;}}
}
B6cc2ed:L6cc2ed:{c.instructions+=11;NFSU2_TR(0x6cc2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc2f0:{NFSU2_TR(0x6cc2f0);
__builtin_memmove((R+12),(R+8),4);
}
B6cc2f2:{NFSU2_TR(0x6cc2f2);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xfffffff8ull))));
}
B6cc2f5:{NFSU2_TR(0x6cc2f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6cc2f8:{NFSU2_TR(0x6cc2f8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x18ull))));
}
B6cc2fb:{NFSU2_TR(0x6cc2fb);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6cc2fd:{NFSU2_TR(0x6cc2fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6cc300:{NFSU2_TR(0x6cc300);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6cc305:{NFSU2_TR(0x6cc305);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6cc307:{NFSU2_TR(0x6cc307);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cc309:{NFSU2_TR(0x6cc309);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc30b:L6cc30b:{c.instructions+=5;NFSU2_TR(0x6cc30b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc30e:{NFSU2_TR(0x6cc30e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cc310:{NFSU2_TR(0x6cc310);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc311:{NFSU2_TR(0x6cc311);
__builtin_memmove((R+4),(R+24),4);
}
B6cc313:{NFSU2_TR(0x6cc313);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc316ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cc316:L6cc316:{c.instructions+=2;NFSU2_TR(0x6cc316);
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
B6cc318:{NFSU2_TR(0x6cc318);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cc333;}}
}
B6cc31a:L6cc31a:{c.instructions+=2;NFSU2_TR(0x6cc31a);
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
B6cc31c:{NFSU2_TR(0x6cc31c);
{goto L6cc333;}
}
B6cc31e:L6cc31e:{c.instructions+=5;NFSU2_TR(0x6cc31e);
u8 U[4];
w4(U+0,u32(0x7bf32cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc323:{NFSU2_TR(0x6cc323);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc324:{NFSU2_TR(0x6cc324);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc325:{NFSU2_TR(0x6cc325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc326:{NFSU2_TR(0x6cc326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc32bull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc32b:L6cc32b:{c.instructions+=1;NFSU2_TR(0x6cc32b);
w4(R+0,u32(0x80004005ull));
}
B6cc330:L6cc330:{c.instructions+=1;NFSU2_TR(0x6cc330);
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
B6cc333:L6cc333:{c.instructions+=5;NFSU2_TR(0x6cc333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc334:{NFSU2_TR(0x6cc334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cc335:{NFSU2_TR(0x6cc335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cc336:{NFSU2_TR(0x6cc336);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cc337:{NFSU2_TR(0x6cc337);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc33a:L6cc33a:{c.instructions+=19;NFSU2_TR(0x6cc33a);
__builtin_memmove((R+28),(R+28),4);
}
B6cc33c:{NFSU2_TR(0x6cc33c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc33d:{NFSU2_TR(0x6cc33d);
__builtin_memmove((R+20),(R+16),4);
}
B6cc33f:{NFSU2_TR(0x6cc33f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc340:{NFSU2_TR(0x6cc340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc341:{NFSU2_TR(0x6cc341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc344:{NFSU2_TR(0x6cc344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cc346:{NFSU2_TR(0x6cc346);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc347:{NFSU2_TR(0x6cc347);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc348:{NFSU2_TR(0x6cc348);
__builtin_memmove((R+24),(R+4),4);
}
B6cc34a:{NFSU2_TR(0x6cc34a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc34b:{NFSU2_TR(0x6cc34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc34e:{NFSU2_TR(0x6cc34e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cc351:{NFSU2_TR(0x6cc351);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc354:{NFSU2_TR(0x6cc354);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cc356:{NFSU2_TR(0x6cc356);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc359:{NFSU2_TR(0x6cc359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc35c:{NFSU2_TR(0x6cc35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc35f:{NFSU2_TR(0x6cc35f);
if(r1(R+518)){{goto L6cc36a;}}
}
B6cc361:L6cc361:{c.instructions+=2;NFSU2_TR(0x6cc361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc368:{NFSU2_TR(0x6cc368);
{goto L6cc3ad;}
}
B6cc36a:L6cc36a:{c.instructions+=2;NFSU2_TR(0x6cc36a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc36d:{NFSU2_TR(0x6cc36d);
if(r1(R+518)){{goto L6cc378;}}
}
B6cc36f:L6cc36f:{c.instructions+=2;NFSU2_TR(0x6cc36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc376:{NFSU2_TR(0x6cc376);
{goto L6cc3ad;}
}
B6cc378:L6cc378:{c.instructions+=2;NFSU2_TR(0x6cc378);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc37b:{NFSU2_TR(0x6cc37b);
if(r1(R+518)){{goto L6cc386;}}
}
B6cc37d:L6cc37d:{c.instructions+=2;NFSU2_TR(0x6cc37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc384:{NFSU2_TR(0x6cc384);
{goto L6cc3ad;}
}
B6cc386:L6cc386:{c.instructions+=2;NFSU2_TR(0x6cc386);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc389:{NFSU2_TR(0x6cc389);
if(r1(R+518)){{goto L6cc394;}}
}
B6cc38b:L6cc38b:{c.instructions+=2;NFSU2_TR(0x6cc38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc392:{NFSU2_TR(0x6cc392);
{goto L6cc3ad;}
}
B6cc394:L6cc394:{c.instructions+=2;NFSU2_TR(0x6cc394);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc397:{NFSU2_TR(0x6cc397);
if(r1(R+518)){{goto L6cc3a2;}}
}
B6cc399:L6cc399:{c.instructions+=2;NFSU2_TR(0x6cc399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xe000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc3a0:{NFSU2_TR(0x6cc3a0);
{goto L6cc3ad;}
}
B6cc3a2:L6cc3a2:{c.instructions+=2;NFSU2_TR(0x6cc3a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6cc3a4:{NFSU2_TR(0x6cc3a4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6cc3ad;}}
}
B6cc3a6:L6cc3a6:{c.instructions+=1;NFSU2_TR(0x6cc3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xd000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc3ad:L6cc3ad:{c.instructions+=2;NFSU2_TR(0x6cc3ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc3b0:{NFSU2_TR(0x6cc3b0);
if(r1(R+518)){{goto L6cc3b6;}}
}
B6cc3b2:L6cc3b2:{c.instructions+=1;NFSU2_TR(0x6cc3b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6cc3b6:L6cc3b6:{c.instructions+=2;NFSU2_TR(0x6cc3b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc3b9:{NFSU2_TR(0x6cc3b9);
if(r1(R+518)){{goto L6cc3c4;}}
}
B6cc3bb:L6cc3bb:{c.instructions+=2;NFSU2_TR(0x6cc3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc3c2:{NFSU2_TR(0x6cc3c2);
{goto L6cc431;}
}
B6cc3c4:L6cc3c4:{c.instructions+=3;NFSU2_TR(0x6cc3c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cc3c6:{NFSU2_TR(0x6cc3c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc3c9:{NFSU2_TR(0x6cc3c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cc431;}}
}
B6cc3cb:L6cc3cb:{c.instructions+=8;NFSU2_TR(0x6cc3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc3ce:{NFSU2_TR(0x6cc3ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cc3d1:{NFSU2_TR(0x6cc3d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cc3d4:{NFSU2_TR(0x6cc3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc3d7:{NFSU2_TR(0x6cc3d7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cc3d9:{NFSU2_TR(0x6cc3d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cc3db:{NFSU2_TR(0x6cc3db);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cc3dd:{NFSU2_TR(0x6cc3dd);
if(r1(R+518)){{goto L6cc3fd;}}
}
B6cc3df:L6cc3df:{c.instructions+=2;NFSU2_TR(0x6cc3df);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cc3e0:{NFSU2_TR(0x6cc3e0);
if(r1(R+518)){{goto L6cc3f6;}}
}
B6cc3e2:L6cc3e2:{c.instructions+=2;NFSU2_TR(0x6cc3e2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cc3e3:{NFSU2_TR(0x6cc3e3);
if(r1(R+518)){{goto L6cc3ef;}}
}
B6cc3e5:L6cc3e5:{c.instructions+=2;NFSU2_TR(0x6cc3e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cc3e6:{NFSU2_TR(0x6cc3e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc402;}}
}
B6cc3e8:L6cc3e8:{c.instructions+=2;NFSU2_TR(0x6cc3e8);
w4(R+12,u32(0x80000ull));
}
B6cc3ed:{NFSU2_TR(0x6cc3ed);
{goto L6cc402;}
}
B6cc3ef:L6cc3ef:{c.instructions+=2;NFSU2_TR(0x6cc3ef);
w4(R+12,u32(0x40000ull));
}
B6cc3f4:{NFSU2_TR(0x6cc3f4);
{goto L6cc402;}
}
B6cc3f6:L6cc3f6:{c.instructions+=2;NFSU2_TR(0x6cc3f6);
w4(R+12,u32(0x20000ull));
}
B6cc3fb:{NFSU2_TR(0x6cc3fb);
{goto L6cc402;}
}
B6cc3fd:L6cc3fd:{c.instructions+=1;NFSU2_TR(0x6cc3fd);
w4(R+12,u32(0x10000ull));
}
B6cc402:L6cc402:{c.instructions+=2;NFSU2_TR(0x6cc402);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cc405:{NFSU2_TR(0x6cc405);
if(r1(R+518)){{goto L6cc428;}}
}
B6cc407:L6cc407:{c.instructions+=6;NFSU2_TR(0x6cc407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc40d:{NFSU2_TR(0x6cc40d);
u8 U[4];
w4(U+0,u32(0x7bb22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc412:{NFSU2_TR(0x6cc412);
u8 U[4];
w4(U+0,u32(0x12d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc417:{NFSU2_TR(0x6cc417);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc41a:{NFSU2_TR(0x6cc41a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc41b:{NFSU2_TR(0x6cc41b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc420ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc420:L6cc420:{c.instructions+=3;NFSU2_TR(0x6cc420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc423:{NFSU2_TR(0x6cc423);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6cc426:{NFSU2_TR(0x6cc426);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cc428:L6cc428:{c.instructions+=4;NFSU2_TR(0x6cc428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc42b:{NFSU2_TR(0x6cc42b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cc42c:{NFSU2_TR(0x6cc42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6cc42f:{NFSU2_TR(0x6cc42f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc3cbu);}goto L6cc3cb;}}
}
B6cc431:L6cc431:{c.instructions+=2;NFSU2_TR(0x6cc431);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc435:{NFSU2_TR(0x6cc435);
if(r1(R+518)){{goto L6cc453;}}
}
B6cc437:L6cc437:{c.instructions+=2;NFSU2_TR(0x6cc437);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc43b:{NFSU2_TR(0x6cc43b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc446;}}
}
B6cc43d:L6cc43d:{c.instructions+=2;NFSU2_TR(0x6cc43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x70000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc444:{NFSU2_TR(0x6cc444);
{goto L6cc453;}
}
B6cc446:L6cc446:{c.instructions+=2;NFSU2_TR(0x6cc446);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x7ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc44a:{NFSU2_TR(0x6cc44a);
if(r1(R+518)){{goto L6cc453;}}
}
B6cc44c:L6cc44c:{c.instructions+=1;NFSU2_TR(0x6cc44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc453:L6cc453:{c.instructions+=2;NFSU2_TR(0x6cc453);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc45a:{NFSU2_TR(0x6cc45a);
if(r1(R+518)){{goto L6cc488;}}
}
B6cc45c:L6cc45c:{c.instructions+=2;NFSU2_TR(0x6cc45c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc462:{NFSU2_TR(0x6cc462);
if(r1(R+518)){{goto L6cc488;}}
}
B6cc464:L6cc464:{c.instructions+=2;NFSU2_TR(0x6cc464);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc467:{NFSU2_TR(0x6cc467);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cc488;}}
}
B6cc469:L6cc469:{c.instructions+=9;NFSU2_TR(0x6cc469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc46f:{NFSU2_TR(0x6cc46f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cc472:{NFSU2_TR(0x6cc472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc478:{NFSU2_TR(0x6cc478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cc47b:{NFSU2_TR(0x6cc47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cc47e:{NFSU2_TR(0x6cc47e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cc47f:{NFSU2_TR(0x6cc47f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cc482:{NFSU2_TR(0x6cc482);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cc486:{NFSU2_TR(0x6cc486);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc469u);}goto L6cc469;}}
}
B6cc488:L6cc488:{c.instructions+=10;NFSU2_TR(0x6cc488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc48b:{NFSU2_TR(0x6cc48b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B6cc48e:{NFSU2_TR(0x6cc48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc491:{NFSU2_TR(0x6cc491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc492:{NFSU2_TR(0x6cc492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cc493:{NFSU2_TR(0x6cc493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cc495:{NFSU2_TR(0x6cc495);
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
B6cc497:{NFSU2_TR(0x6cc497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cc498:{NFSU2_TR(0x6cc498);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cc499:{NFSU2_TR(0x6cc499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc49c:L6cc49c:{c.instructions+=11;NFSU2_TR(0x6cc49c);
__builtin_memmove((R+28),(R+28),4);
}
B6cc49e:{NFSU2_TR(0x6cc49e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc49f:{NFSU2_TR(0x6cc49f);
__builtin_memmove((R+20),(R+16),4);
}
B6cc4a1:{NFSU2_TR(0x6cc4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc4a4:{NFSU2_TR(0x6cc4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc4a7:{NFSU2_TR(0x6cc4a7);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6cc4ad:{NFSU2_TR(0x6cc4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc4b0:{NFSU2_TR(0x6cc4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc4b3:{NFSU2_TR(0x6cc4b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6cc4b5:{NFSU2_TR(0x6cc4b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc4b8:{NFSU2_TR(0x6cc4b8);
if(r1(R+512)){{goto L6cc4dd;}}
}
B6cc4ba:L6cc4ba:{c.instructions+=6;NFSU2_TR(0x6cc4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc4c0:{NFSU2_TR(0x6cc4c0);
u8 U[4];
w4(U+0,u32(0x7befb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4c5:{NFSU2_TR(0x6cc4c5);
u8 U[4];
w4(U+0,u32(0x119aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4ca:{NFSU2_TR(0x6cc4ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc4cd:{NFSU2_TR(0x6cc4cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4ce:{NFSU2_TR(0x6cc4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc4d3ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc4d3:L6cc4d3:{c.instructions+=3;NFSU2_TR(0x6cc4d3);
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
B6cc4d6:{NFSU2_TR(0x6cc4d6);
w4(R+0,u32(0x80004005ull));
}
B6cc4db:{NFSU2_TR(0x6cc4db);
{goto L6cc4df;}
}
B6cc4dd:L6cc4dd:{c.instructions+=1;NFSU2_TR(0x6cc4dd);
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
B6cc4df:L6cc4df:{c.instructions+=2;NFSU2_TR(0x6cc4df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6cc4e0:{NFSU2_TR(0x6cc4e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc4e3:L6cc4e3:{c.instructions+=16;NFSU2_TR(0x6cc4e3);
__builtin_memmove((R+28),(R+28),4);
}
B6cc4e5:{NFSU2_TR(0x6cc4e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4e6:{NFSU2_TR(0x6cc4e6);
__builtin_memmove((R+20),(R+16),4);
}
B6cc4e8:{NFSU2_TR(0x6cc4e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4e9:{NFSU2_TR(0x6cc4e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4ea:{NFSU2_TR(0x6cc4ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4eb:{NFSU2_TR(0x6cc4eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4ec:{NFSU2_TR(0x6cc4ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc4ed:{NFSU2_TR(0x6cc4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc4f0:{NFSU2_TR(0x6cc4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc4f3:{NFSU2_TR(0x6cc4f3);
__builtin_memmove((R+24),(R+4),4);
}
B6cc4f5:{NFSU2_TR(0x6cc4f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc4fb:{NFSU2_TR(0x6cc4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc4fe:{NFSU2_TR(0x6cc4fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cc501:{NFSU2_TR(0x6cc501);
w4(R+12,u32(0x40000ull));
}
B6cc506:{NFSU2_TR(0x6cc506);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc53f;}}
}
B6cc508:L6cc508:{c.instructions+=5;NFSU2_TR(0x6cc508);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc50b:{NFSU2_TR(0x6cc50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc50f:{NFSU2_TR(0x6cc50f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc512:{NFSU2_TR(0x6cc512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc515:{NFSU2_TR(0x6cc515);
if(r1(R+512)){{goto L6cc526;}}
}
B6cc517:L6cc517:{c.instructions+=1;NFSU2_TR(0x6cc517);
u8 U[4];
w4(U+0,u32(0x7bf3b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc51c:L6cc51c:{c.instructions+=2;NFSU2_TR(0x6cc51c);
u8 U[4];
w4(U+0,u32(0x1199ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc521:{NFSU2_TR(0x6cc521);
{goto L6cc6b1;}
}
B6cc526:L6cc526:{c.instructions+=3;NFSU2_TR(0x6cc526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc529:{NFSU2_TR(0x6cc529);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc52b:{NFSU2_TR(0x6cc52b);
if(r1(R+518)){{goto L6cc587;}}
}
B6cc52d:L6cc52d:{c.instructions+=2;NFSU2_TR(0x6cc52d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cc52f:{NFSU2_TR(0x6cc52f);
if(r1(R+512)){{goto L6cc587;}}
}
B6cc531:L6cc531:{c.instructions+=4;NFSU2_TR(0x6cc531);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6cc533:{NFSU2_TR(0x6cc533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc536:{NFSU2_TR(0x6cc536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc53d:{NFSU2_TR(0x6cc53d);
{goto L6cc587;}
}
B6cc53f:L6cc53f:{c.instructions+=4;NFSU2_TR(0x6cc53f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc542:{NFSU2_TR(0x6cc542);
__builtin_memmove((R+8),(R+4),4);
}
B6cc544:{NFSU2_TR(0x6cc544);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x10ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cc547:{NFSU2_TR(0x6cc547);
if(r1(R+518)){{goto L6cc55c;}}
}
B6cc549:L6cc549:{c.instructions+=2;NFSU2_TR(0x6cc549);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc54c:{NFSU2_TR(0x6cc54c);
if(r1(R+518)){{goto L6cc55c;}}
}
B6cc54e:L6cc54e:{c.instructions+=2;NFSU2_TR(0x6cc54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc555:{NFSU2_TR(0x6cc555);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cc557:L6cc557:{c.instructions+=2;NFSU2_TR(0x6cc557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc55a:{NFSU2_TR(0x6cc55a);
{goto L6cc587;}
}
B6cc55c:L6cc55c:{c.instructions+=3;NFSU2_TR(0x6cc55c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc55e:{NFSU2_TR(0x6cc55e);
w4(R+0,u32(0x200ull));
}
B6cc563:{NFSU2_TR(0x6cc563);
if(r1(R+518)){{goto L6cc5ac;}}
}
B6cc565:L6cc565:{c.instructions+=2;NFSU2_TR(0x6cc565);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc567:{NFSU2_TR(0x6cc567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc5ac;}}
}
B6cc569:L6cc569:{c.instructions+=8;NFSU2_TR(0x6cc569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cc56b:{NFSU2_TR(0x6cc56b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc56e:{NFSU2_TR(0x6cc56e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc56f:{NFSU2_TR(0x6cc56f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cc572:{NFSU2_TR(0x6cc572);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc573:{NFSU2_TR(0x6cc573);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc574:{NFSU2_TR(0x6cc574);
__builtin_memmove((R+4),(R+24),4);
}
B6cc576:{NFSU2_TR(0x6cc576);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc57cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cc57c:L6cc57c:{c.instructions+=2;NFSU2_TR(0x6cc57c);
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
B6cc57e:{NFSU2_TR(0x6cc57e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cc7d5;}}
}
B6cc584:L6cc584:{c.instructions+=1;NFSU2_TR(0x6cc584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc587:L6cc587:{c.instructions+=5;NFSU2_TR(0x6cc587);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc58a:{NFSU2_TR(0x6cc58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc58e:{NFSU2_TR(0x6cc58e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1f0000ull))));
}
B6cc594:{NFSU2_TR(0x6cc594);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc59a:{NFSU2_TR(0x6cc59a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc6ca;}}
}
B6cc5a0:L6cc5a0:{c.instructions+=2;NFSU2_TR(0x6cc5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xb000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc5a7:{NFSU2_TR(0x6cc5a7);
{goto L6cc760;}
}
B6cc5ac:L6cc5ac:{c.instructions+=3;NFSU2_TR(0x6cc5ac);
__builtin_memmove((R+8),(R+4),4);
}
B6cc5ae:{NFSU2_TR(0x6cc5ae);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cc5b0:{NFSU2_TR(0x6cc5b0);
if(r1(R+518)){{goto L6cc60b;}}
}
B6cc5b2:L6cc5b2:{c.instructions+=2;NFSU2_TR(0x6cc5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x42080ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc5b8:{NFSU2_TR(0x6cc5b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc60b;}}
}
B6cc5ba:L6cc5ba:{c.instructions+=4;NFSU2_TR(0x6cc5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc5bd:{NFSU2_TR(0x6cc5bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc5c0:{NFSU2_TR(0x6cc5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc5c3:{NFSU2_TR(0x6cc5c3);
if(r1(R+512)){{goto L6cc5d4;}}
}
B6cc5c5:L6cc5c5:{c.instructions+=3;NFSU2_TR(0x6cc5c5);
u8 U[4];
w4(U+0,u32(0x7bef58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc5ca:{NFSU2_TR(0x6cc5ca);
u8 U[4];
w4(U+0,u32(0x119bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc5cf:{NFSU2_TR(0x6cc5cf);
{goto L6cc6b1;}
}
B6cc5d4:L6cc5d4:{c.instructions+=2;NFSU2_TR(0x6cc5d4);
w1(R+512,u8((r4(R+0))<(u32(0x800ull))));
}
B6cc5d9:{NFSU2_TR(0x6cc5d9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cc5e4;}}
}
B6cc5db:L6cc5db:{c.instructions+=2;NFSU2_TR(0x6cc5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc5e2:{NFSU2_TR(0x6cc5e2);
{goto L6cc601;}
}
B6cc5e4:L6cc5e4:{c.instructions+=2;NFSU2_TR(0x6cc5e4);
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
}
B6cc5e9:{NFSU2_TR(0x6cc5e9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cc5f4;}}
}
B6cc5eb:L6cc5eb:{c.instructions+=2;NFSU2_TR(0x6cc5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc5f2:{NFSU2_TR(0x6cc5f2);
{goto L6cc601;}
}
B6cc5f4:L6cc5f4:{c.instructions+=4;NFSU2_TR(0x6cc5f4);
w1(R+512,u8((r4(R+0))<(u32(0x1800ull))));
}
B6cc5f9:{NFSU2_TR(0x6cc5f9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6cc5fb:{NFSU2_TR(0x6cc5fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdull))));
}
B6cc5fe:{NFSU2_TR(0x6cc5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc601:L6cc601:{c.instructions+=2;NFSU2_TR(0x6cc601);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6cc606:{NFSU2_TR(0x6cc606);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc557u);}goto L6cc557;}
}
B6cc60b:L6cc60b:{c.instructions+=2;NFSU2_TR(0x6cc60b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc60d:{NFSU2_TR(0x6cc60d);
if(r1(R+518)){{goto L6cc63a;}}
}
B6cc60f:L6cc60f:{c.instructions+=2;NFSU2_TR(0x6cc60f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6cc611:{NFSU2_TR(0x6cc611);
if(r1(R+519)){{goto L6cc63e;}}
}
B6cc613:L6cc613:{c.instructions+=2;NFSU2_TR(0x6cc613);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cc616:{NFSU2_TR(0x6cc616);
if(r1(R+518)){{goto L6cc63a;}}
}
B6cc618:L6cc618:{c.instructions+=5;NFSU2_TR(0x6cc618);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc61b:{NFSU2_TR(0x6cc61b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc61e:{NFSU2_TR(0x6cc61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc621:{NFSU2_TR(0x6cc621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc628:{NFSU2_TR(0x6cc628);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc587u);}goto L6cc587;}}
}
B6cc62e:L6cc62e:{c.instructions+=3;NFSU2_TR(0x6cc62e);
u8 U[4];
w4(U+0,u32(0x7bf45cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc633:{NFSU2_TR(0x6cc633);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc638:{NFSU2_TR(0x6cc638);
{goto L6cc6b1;}
}
B6cc63a:L6cc63a:{c.instructions+=2;NFSU2_TR(0x6cc63a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6cc63c:{NFSU2_TR(0x6cc63c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6cc65e;}}
}
B6cc63e:L6cc63e:{c.instructions+=5;NFSU2_TR(0x6cc63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc641:{NFSU2_TR(0x6cc641);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc644:{NFSU2_TR(0x6cc644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc64b:{NFSU2_TR(0x6cc64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc64e:{NFSU2_TR(0x6cc64e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc587u);}goto L6cc587;}}
}
B6cc654:L6cc654:{c.instructions+=2;NFSU2_TR(0x6cc654);
u8 U[4];
w4(U+0,u32(0x7bf020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc659:{NFSU2_TR(0x6cc659);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc51cu);}goto L6cc51c;}
}
B6cc65e:L6cc65e:{c.instructions+=2;NFSU2_TR(0x6cc65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc660:{NFSU2_TR(0x6cc660);
if(r1(R+518)){{goto L6cc682;}}
}
B6cc662:L6cc662:{c.instructions+=5;NFSU2_TR(0x6cc662);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc665:{NFSU2_TR(0x6cc665);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc668:{NFSU2_TR(0x6cc668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc66f:{NFSU2_TR(0x6cc66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc672:{NFSU2_TR(0x6cc672);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc587u);}goto L6cc587;}}
}
B6cc678:L6cc678:{c.instructions+=2;NFSU2_TR(0x6cc678);
u8 U[4];
w4(U+0,u32(0x7bf434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc67d:{NFSU2_TR(0x6cc67d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc51cu);}goto L6cc51c;}
}
B6cc682:L6cc682:{c.instructions+=3;NFSU2_TR(0x6cc682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc688:{NFSU2_TR(0x6cc688);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc68b:{NFSU2_TR(0x6cc68b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc7be;}}
}
B6cc691:L6cc691:{c.instructions+=5;NFSU2_TR(0x6cc691);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc694:{NFSU2_TR(0x6cc694);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cc697:{NFSU2_TR(0x6cc697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc69e:{NFSU2_TR(0x6cc69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc6a1:{NFSU2_TR(0x6cc6a1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc587u);}goto L6cc587;}}
}
B6cc6a7:L6cc6a7:{c.instructions+=2;NFSU2_TR(0x6cc6a7);
u8 U[4];
w4(U+0,u32(0x7bf35cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc6ac:{NFSU2_TR(0x6cc6ac);
u8 U[4];
w4(U+0,u32(0x11c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc6b1:L6cc6b1:{c.instructions+=4;NFSU2_TR(0x6cc6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc6b7:{NFSU2_TR(0x6cc6b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc6ba:{NFSU2_TR(0x6cc6ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc6bb:{NFSU2_TR(0x6cc6bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc6c0ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc6c0:L6cc6c0:{c.instructions+=2;NFSU2_TR(0x6cc6c0);
w4(R+0,u32(0x88760b59ull));
}
B6cc6c5:{NFSU2_TR(0x6cc6c5);
{goto L6cc7d2;}
}
B6cc6ca:L6cc6ca:{c.instructions+=2;NFSU2_TR(0x6cc6ca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x180000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc6d0:{NFSU2_TR(0x6cc6d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc6de;}}
}
B6cc6d2:L6cc6d2:{c.instructions+=2;NFSU2_TR(0x6cc6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xc000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc6d9:{NFSU2_TR(0x6cc6d9);
{goto L6cc760;}
}
B6cc6de:L6cc6de:{c.instructions+=2;NFSU2_TR(0x6cc6de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc6e4:{NFSU2_TR(0x6cc6e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc6ef;}}
}
B6cc6e6:L6cc6e6:{c.instructions+=2;NFSU2_TR(0x6cc6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc6ed:{NFSU2_TR(0x6cc6ed);
{goto L6cc760;}
}
B6cc6ef:L6cc6ef:{c.instructions+=2;NFSU2_TR(0x6cc6ef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc6f5:{NFSU2_TR(0x6cc6f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc700;}}
}
B6cc6f7:L6cc6f7:{c.instructions+=2;NFSU2_TR(0x6cc6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc6fe:{NFSU2_TR(0x6cc6fe);
{goto L6cc760;}
}
B6cc700:L6cc700:{c.instructions+=2;NFSU2_TR(0x6cc700);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc706:{NFSU2_TR(0x6cc706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc711;}}
}
B6cc708:L6cc708:{c.instructions+=2;NFSU2_TR(0x6cc708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc70f:{NFSU2_TR(0x6cc70f);
{goto L6cc760;}
}
B6cc711:L6cc711:{c.instructions+=2;NFSU2_TR(0x6cc711);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc717:{NFSU2_TR(0x6cc717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc722;}}
}
B6cc719:L6cc719:{c.instructions+=2;NFSU2_TR(0x6cc719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc720:{NFSU2_TR(0x6cc720);
{goto L6cc760;}
}
B6cc722:L6cc722:{c.instructions+=2;NFSU2_TR(0x6cc722);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc728:{NFSU2_TR(0x6cc728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc733;}}
}
B6cc72a:L6cc72a:{c.instructions+=2;NFSU2_TR(0x6cc72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x5000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc731:{NFSU2_TR(0x6cc731);
{goto L6cc760;}
}
B6cc733:L6cc733:{c.instructions+=2;NFSU2_TR(0x6cc733);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc739:{NFSU2_TR(0x6cc739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc744;}}
}
B6cc73b:L6cc73b:{c.instructions+=2;NFSU2_TR(0x6cc73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x6000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc742:{NFSU2_TR(0x6cc742);
{goto L6cc760;}
}
B6cc744:L6cc744:{c.instructions+=2;NFSU2_TR(0x6cc744);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc746:{NFSU2_TR(0x6cc746);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc751;}}
}
B6cc748:L6cc748:{c.instructions+=2;NFSU2_TR(0x6cc748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x7000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc74f:{NFSU2_TR(0x6cc74f);
{goto L6cc760;}
}
B6cc751:L6cc751:{c.instructions+=2;NFSU2_TR(0x6cc751);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc757:{NFSU2_TR(0x6cc757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc760;}}
}
B6cc759:L6cc759:{c.instructions+=1;NFSU2_TR(0x6cc759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc760:L6cc760:{c.instructions+=3;NFSU2_TR(0x6cc760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc763:{NFSU2_TR(0x6cc763);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc765:{NFSU2_TR(0x6cc765);
if(r1(R+518)){{goto L6cc786;}}
}
B6cc767:L6cc767:{c.instructions+=11;NFSU2_TR(0x6cc767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc76a:{NFSU2_TR(0x6cc76a);
__builtin_memmove((R+12),(R+8),4);
}
B6cc76c:{NFSU2_TR(0x6cc76c);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xfffffff8ull))));
}
B6cc76f:{NFSU2_TR(0x6cc76f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6cc772:{NFSU2_TR(0x6cc772);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x18ull))));
}
B6cc775:{NFSU2_TR(0x6cc775);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6cc777:{NFSU2_TR(0x6cc777);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6cc77a:{NFSU2_TR(0x6cc77a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6cc77f:{NFSU2_TR(0x6cc77f);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6cc781:{NFSU2_TR(0x6cc781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(U+4))));
}
B6cc784:{NFSU2_TR(0x6cc784);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cc786:L6cc786:{c.instructions+=3;NFSU2_TR(0x6cc786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc789:{NFSU2_TR(0x6cc789);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc78b:{NFSU2_TR(0x6cc78b);
if(r1(R+518)){{goto L6cc792;}}
}
B6cc78d:L6cc78d:{c.instructions+=2;NFSU2_TR(0x6cc78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cc790:{NFSU2_TR(0x6cc790);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6cc792:L6cc792:{c.instructions+=2;NFSU2_TR(0x6cc792);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc796:{NFSU2_TR(0x6cc796);
if(r1(R+518)){{goto L6cc7ba;}}
}
B6cc798:L6cc798:{c.instructions+=2;NFSU2_TR(0x6cc798);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc79f:{NFSU2_TR(0x6cc79f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc7b6;}}
}
B6cc7a1:L6cc7a1:{c.instructions+=5;NFSU2_TR(0x6cc7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc7a7:{NFSU2_TR(0x6cc7a7);
u8 U[4];
w4(U+0,u32(0x7bf408ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7ac:{NFSU2_TR(0x6cc7ac);
u8 U[4];
w4(U+0,u32(0x119full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7b1:{NFSU2_TR(0x6cc7b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cc7b4:{NFSU2_TR(0x6cc7b4);
{goto L6cc7c7;}
}
B6cc7b6:L6cc7b6:{c.instructions+=1;NFSU2_TR(0x6cc7b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6cc7ba:L6cc7ba:{c.instructions+=2;NFSU2_TR(0x6cc7ba);
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
B6cc7bc:{NFSU2_TR(0x6cc7bc);
{goto L6cc7d5;}
}
B6cc7be:L6cc7be:{c.instructions+=3;NFSU2_TR(0x6cc7be);
u8 U[4];
w4(U+0,u32(0x7bf3d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7c3:{NFSU2_TR(0x6cc7c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7c5:{NFSU2_TR(0x6cc7c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7c7:L6cc7c7:{c.instructions+=2;NFSU2_TR(0x6cc7c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7c8:{NFSU2_TR(0x6cc7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc7cdull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc7cd:L6cc7cd:{c.instructions+=1;NFSU2_TR(0x6cc7cd);
w4(R+0,u32(0x80004005ull));
}
B6cc7d2:L6cc7d2:{c.instructions+=1;NFSU2_TR(0x6cc7d2);
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
B6cc7d5:L6cc7d5:{c.instructions+=5;NFSU2_TR(0x6cc7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc7d6:{NFSU2_TR(0x6cc7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cc7d7:{NFSU2_TR(0x6cc7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cc7d8:{NFSU2_TR(0x6cc7d8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cc7d9:{NFSU2_TR(0x6cc7d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc7dc:L6cc7dc:{c.instructions+=7;NFSU2_TR(0x6cc7dc);
__builtin_memmove((R+28),(R+28),4);
}
B6cc7de:{NFSU2_TR(0x6cc7de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7df:{NFSU2_TR(0x6cc7df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7e0:{NFSU2_TR(0x6cc7e0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cc7e2:{NFSU2_TR(0x6cc7e2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cc7e4:{NFSU2_TR(0x6cc7e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc7e7:{NFSU2_TR(0x6cc7e7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cc938;}}
}
B6cc7ed:L6cc7ed:{c.instructions+=1;NFSU2_TR(0x6cc7ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc7ee:L6cc7ee:{c.instructions+=7;NFSU2_TR(0x6cc7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc7f1:{NFSU2_TR(0x6cc7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc7f7:{NFSU2_TR(0x6cc7f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cc7fa:{NFSU2_TR(0x6cc7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc800:{NFSU2_TR(0x6cc800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cc802:{NFSU2_TR(0x6cc802);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cc808:{NFSU2_TR(0x6cc808);
if(r1(R+518)){{goto L6cc90d;}}
}
B6cc80e:L6cc80e:{c.instructions+=6;NFSU2_TR(0x6cc80e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc814:{NFSU2_TR(0x6cc814);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc817:{NFSU2_TR(0x6cc817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cc819:{NFSU2_TR(0x6cc819);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cc81c:{NFSU2_TR(0x6cc81c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cc81f:{NFSU2_TR(0x6cc81f);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc825:L6cc825:{c.instructions+=2;NFSU2_TR(0x6cc825);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc82b:{NFSU2_TR(0x6cc82b);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc831:L6cc831:{c.instructions+=2;NFSU2_TR(0x6cc831);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc837:{NFSU2_TR(0x6cc837);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc83d:L6cc83d:{c.instructions+=2;NFSU2_TR(0x6cc83d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc843:{NFSU2_TR(0x6cc843);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc849:L6cc849:{c.instructions+=2;NFSU2_TR(0x6cc849);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc84f:{NFSU2_TR(0x6cc84f);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc855:L6cc855:{c.instructions+=2;NFSU2_TR(0x6cc855);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc85b:{NFSU2_TR(0x6cc85b);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc861:L6cc861:{c.instructions+=2;NFSU2_TR(0x6cc861);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc867:{NFSU2_TR(0x6cc867);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc86d:L6cc86d:{c.instructions+=2;NFSU2_TR(0x6cc86d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc873:{NFSU2_TR(0x6cc873);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc879:L6cc879:{c.instructions+=2;NFSU2_TR(0x6cc879);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc87f:{NFSU2_TR(0x6cc87f);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc881:L6cc881:{c.instructions+=2;NFSU2_TR(0x6cc881);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc887:{NFSU2_TR(0x6cc887);
if(r1(R+518)){{goto L6cc8fd;}}
}
B6cc889:L6cc889:{c.instructions+=2;NFSU2_TR(0x6cc889);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc88f:{NFSU2_TR(0x6cc88f);
if(r1(R+518)){{goto L6cc8eb;}}
}
B6cc891:L6cc891:{c.instructions+=2;NFSU2_TR(0x6cc891);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc897:{NFSU2_TR(0x6cc897);
if(r1(R+518)){{goto L6cc8eb;}}
}
B6cc899:L6cc899:{c.instructions+=2;NFSU2_TR(0x6cc899);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc89f:{NFSU2_TR(0x6cc89f);
if(r1(R+518)){{goto L6cc8eb;}}
}
B6cc8a1:L6cc8a1:{c.instructions+=2;NFSU2_TR(0x6cc8a1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8a7:{NFSU2_TR(0x6cc8a7);
if(r1(R+518)){{goto L6cc8eb;}}
}
B6cc8a9:L6cc8a9:{c.instructions+=2;NFSU2_TR(0x6cc8a9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8af:{NFSU2_TR(0x6cc8af);
if(r1(R+518)){{goto L6cc8eb;}}
}
B6cc8b1:L6cc8b1:{c.instructions+=2;NFSU2_TR(0x6cc8b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8b7:{NFSU2_TR(0x6cc8b7);
if(r1(R+518)){{goto L6cc8d9;}}
}
B6cc8b9:L6cc8b9:{c.instructions+=2;NFSU2_TR(0x6cc8b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8bf:{NFSU2_TR(0x6cc8bf);
if(r1(R+518)){{goto L6cc8d9;}}
}
B6cc8c1:L6cc8c1:{c.instructions+=2;NFSU2_TR(0x6cc8c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8c7:{NFSU2_TR(0x6cc8c7);
if(r1(R+518)){{goto L6cc8d9;}}
}
B6cc8c9:L6cc8c9:{c.instructions+=2;NFSU2_TR(0x6cc8c9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8cf:{NFSU2_TR(0x6cc8cf);
if(r1(R+518)){{goto L6cc8d9;}}
}
B6cc8d1:L6cc8d1:{c.instructions+=2;NFSU2_TR(0x6cc8d1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc8d7:{NFSU2_TR(0x6cc8d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc90d;}}
}
B6cc8d9:L6cc8d9:{c.instructions+=2;NFSU2_TR(0x6cc8d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x60ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc8dd:{NFSU2_TR(0x6cc8dd);
if(r1(R+518)){{goto L6cc8e2;}}
}
B6cc8df:L6cc8df:{c.instructions+=2;NFSU2_TR(0x6cc8df);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cc8e1:{NFSU2_TR(0x6cc8e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cc8e2:L6cc8e2:{c.instructions+=2;NFSU2_TR(0x6cc8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc8e9:{NFSU2_TR(0x6cc8e9);
{goto L6cc90d;}
}
B6cc8eb:L6cc8eb:{c.instructions+=2;NFSU2_TR(0x6cc8eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xa0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc8ef:{NFSU2_TR(0x6cc8ef);
if(r1(R+518)){{goto L6cc8f4;}}
}
B6cc8f1:L6cc8f1:{c.instructions+=2;NFSU2_TR(0x6cc8f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cc8f3:{NFSU2_TR(0x6cc8f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cc8f4:L6cc8f4:{c.instructions+=2;NFSU2_TR(0x6cc8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc8fb:{NFSU2_TR(0x6cc8fb);
{goto L6cc90d;}
}
B6cc8fd:L6cc8fd:{c.instructions+=2;NFSU2_TR(0x6cc8fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc901:{NFSU2_TR(0x6cc901);
if(r1(R+518)){{goto L6cc906;}}
}
B6cc903:L6cc903:{c.instructions+=2;NFSU2_TR(0x6cc903);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cc905:{NFSU2_TR(0x6cc905);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cc906:L6cc906:{c.instructions+=1;NFSU2_TR(0x6cc906);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc90d:L6cc90d:{c.instructions+=3;NFSU2_TR(0x6cc90d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6cc90e:{NFSU2_TR(0x6cc90e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6cc911:{NFSU2_TR(0x6cc911);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc7eeu);}goto L6cc7ee;}}
}
B6cc917:L6cc917:{c.instructions+=3;NFSU2_TR(0x6cc917);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc919:{NFSU2_TR(0x6cc919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cc91a:{NFSU2_TR(0x6cc91a);
if(r1(R+518)){{goto L6cc938;}}
}
B6cc91c:L6cc91c:{c.instructions+=5;NFSU2_TR(0x6cc91c);
u8 U[4];
w4(U+0,u32(0x7bf484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc921:{NFSU2_TR(0x6cc921);
u8 U[4];
w4(U+0,u32(0x11bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc926:{NFSU2_TR(0x6cc926);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc928:{NFSU2_TR(0x6cc928);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc929:{NFSU2_TR(0x6cc929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cc92eull));
TAIL_STATIC(0x69e936u,69e);
}
B6cc92e:L6cc92e:{c.instructions+=3;NFSU2_TR(0x6cc92e);
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
B6cc931:{NFSU2_TR(0x6cc931);
w4(R+0,u32(0x80004005ull));
}
B6cc936:{NFSU2_TR(0x6cc936);
{goto L6cc93a;}
}
B6cc938:L6cc938:{c.instructions+=1;NFSU2_TR(0x6cc938);
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
B6cc93a:L6cc93a:{c.instructions+=3;NFSU2_TR(0x6cc93a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cc93b:{NFSU2_TR(0x6cc93b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cc93c:{NFSU2_TR(0x6cc93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cc93d:L6cc93d:{c.instructions+=19;NFSU2_TR(0x6cc93d);
__builtin_memmove((R+28),(R+28),4);
}
B6cc93f:{NFSU2_TR(0x6cc93f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc940:{NFSU2_TR(0x6cc940);
__builtin_memmove((R+20),(R+16),4);
}
B6cc942:{NFSU2_TR(0x6cc942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6cc945:{NFSU2_TR(0x6cc945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc948:{NFSU2_TR(0x6cc948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cc94a:{NFSU2_TR(0x6cc94a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc94b:{NFSU2_TR(0x6cc94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cc94e:{NFSU2_TR(0x6cc94e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc94f:{NFSU2_TR(0x6cc94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cc952:{NFSU2_TR(0x6cc952);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cc953:{NFSU2_TR(0x6cc953);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cc956:{NFSU2_TR(0x6cc956);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cc959:{NFSU2_TR(0x6cc959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cc95c:{NFSU2_TR(0x6cc95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc95f:{NFSU2_TR(0x6cc95f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cc962:{NFSU2_TR(0x6cc962);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cc964:{NFSU2_TR(0x6cc964);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cc968:{NFSU2_TR(0x6cc968);
if(r1(R+518)){{goto L6cc978;}}
}
B6cc96a:L6cc96a:{c.instructions+=3;NFSU2_TR(0x6cc96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc96d:{NFSU2_TR(0x6cc96d);
u8 U[4];
w4(U+0,u32(0xe40000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6cc973:{NFSU2_TR(0x6cc973);
{goto L6cca4a;}
}
B6cc978:L6cc978:{c.instructions+=5;NFSU2_TR(0x6cc978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cc97b:{NFSU2_TR(0x6cc97b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cc97d:{NFSU2_TR(0x6cc97d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cc97e:{NFSU2_TR(0x6cc97e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc984:{NFSU2_TR(0x6cc984);
if(r1(R+518)){{goto L6cc98c;}}
}
B6cc986:L6cc986:{c.instructions+=2;NFSU2_TR(0x6cc986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cc98a:{NFSU2_TR(0x6cc98a);
__builtin_memmove((R+8),(R+28),4);
}
B6cc98c:L6cc98c:{c.instructions+=2;NFSU2_TR(0x6cc98c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc992:{NFSU2_TR(0x6cc992);
if(r1(R+518)){{goto L6cc999;}}
}
B6cc994:L6cc994:{c.instructions+=2;NFSU2_TR(0x6cc994);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cc998:{NFSU2_TR(0x6cc998);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cc999:L6cc999:{c.instructions+=2;NFSU2_TR(0x6cc999);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc99f:{NFSU2_TR(0x6cc99f);
if(r1(R+518)){{goto L6cc9aa;}}
}
B6cc9a1:L6cc9a1:{c.instructions+=2;NFSU2_TR(0x6cc9a1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6cc9a9:{NFSU2_TR(0x6cc9a9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cc9aa:L6cc9aa:{c.instructions+=2;NFSU2_TR(0x6cc9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc9b0:{NFSU2_TR(0x6cc9b0);
if(r1(R+518)){{goto L6cc9bb;}}
}
B6cc9b2:L6cc9b2:{c.instructions+=2;NFSU2_TR(0x6cc9b2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6cc9ba:{NFSU2_TR(0x6cc9ba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cc9bb:L6cc9bb:{c.instructions+=3;NFSU2_TR(0x6cc9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cc9be:{NFSU2_TR(0x6cc9be);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cc9c0:{NFSU2_TR(0x6cc9c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cc9c4;}}
}
B6cc9c2:L6cc9c2:{c.instructions+=1;NFSU2_TR(0x6cc9c2);
__builtin_memmove((R+12),(R+8),4);
}
B6cc9c4:L6cc9c4:{c.instructions+=3;NFSU2_TR(0x6cc9c4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cc9c6:{NFSU2_TR(0x6cc9c6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cc9c8:{NFSU2_TR(0x6cc9c8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cc9f8;}}
}
B6cc9ca:L6cc9ca:{c.instructions+=3;NFSU2_TR(0x6cc9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cc9cd:{NFSU2_TR(0x6cc9cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cc9d0:{NFSU2_TR(0x6cc9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc9d3:L6cc9d3:{c.instructions+=5;NFSU2_TR(0x6cc9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cc9d6:{NFSU2_TR(0x6cc9d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cc9d9:{NFSU2_TR(0x6cc9d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cc9dc:{NFSU2_TR(0x6cc9dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cc9df:{NFSU2_TR(0x6cc9df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cc9e6;}}
}
B6cc9e1:L6cc9e1:{c.instructions+=3;NFSU2_TR(0x6cc9e1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cc9e2:{NFSU2_TR(0x6cc9e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6cc9e4:{NFSU2_TR(0x6cc9e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc9d3u);}goto L6cc9d3;}}
}
B6cc9e6:L6cc9e6:{c.instructions+=2;NFSU2_TR(0x6cc9e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6cc9e8:{NFSU2_TR(0x6cc9e8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cc9f8;}}
}
B6cc9ea:L6cc9ea:{c.instructions+=1;NFSU2_TR(0x6cc9ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cc9ec:L6cc9ec:{c.instructions+=4;NFSU2_TR(0x6cc9ec);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cc9f0:{NFSU2_TR(0x6cc9f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cc9f1:{NFSU2_TR(0x6cc9f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6cc9f4:{NFSU2_TR(0x6cc9f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cc9ecu);}goto L6cc9ec;}}
}
B6cc9f6:L6cc9f6:{c.instructions+=1;NFSU2_TR(0x6cc9f6);
{goto L6cca05;}
}
B6cc9f8:L6cc9f8:{c.instructions+=7;NFSU2_TR(0x6cc9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc9fb:{NFSU2_TR(0x6cc9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cc9fe:{NFSU2_TR(0x6cc9fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cca01:{NFSU2_TR(0x6cca01);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cca02:{NFSU2_TR(0x6cca02);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cca03:{NFSU2_TR(0x6cca03);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cca04:{NFSU2_TR(0x6cca04);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cca05:L6cca05:{c.instructions+=3;NFSU2_TR(0x6cca05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cca07:{NFSU2_TR(0x6cca07);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cca09:{NFSU2_TR(0x6cca09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cca2d;}}
}
B6cca0b:L6cca0b:{c.instructions+=3;NFSU2_TR(0x6cca0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cca0e:{NFSU2_TR(0x6cca0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B6cca11:{NFSU2_TR(0x6cca11);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6cca13:L6cca13:{c.instructions+=9;NFSU2_TR(0x6cca13);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6cca17:{NFSU2_TR(0x6cca17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cca1a:{NFSU2_TR(0x6cca1a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6cca1e:{NFSU2_TR(0x6cca1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cca21:{NFSU2_TR(0x6cca21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cca24:{NFSU2_TR(0x6cca24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cca25:{NFSU2_TR(0x6cca25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cca27:{NFSU2_TR(0x6cca27);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cca2b:{NFSU2_TR(0x6cca2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cca13u);}goto L6cca13;}}
}
B6cca2d:L6cca2d:{c.instructions+=4;NFSU2_TR(0x6cca2d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cca2f:{NFSU2_TR(0x6cca2f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cca31:{NFSU2_TR(0x6cca31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cca32:{NFSU2_TR(0x6cca32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cca35:L6cca35:{c.instructions+=8;NFSU2_TR(0x6cca35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6cca37:{NFSU2_TR(0x6cca37);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B6cca39:{NFSU2_TR(0x6cca39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cca3c:{NFSU2_TR(0x6cca3c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B6cca3e:{NFSU2_TR(0x6cca3e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cca3f:{NFSU2_TR(0x6cca3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cca40:{NFSU2_TR(0x6cca40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6cca43:{NFSU2_TR(0x6cca43);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cca35u);}goto L6cca35;}}
}
B6cca45:L6cca45:{c.instructions+=2;NFSU2_TR(0x6cca45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cca48:{NFSU2_TR(0x6cca48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6cca4a:L6cca4a:{c.instructions+=6;NFSU2_TR(0x6cca4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cca4b:{NFSU2_TR(0x6cca4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cca4c:{NFSU2_TR(0x6cca4c);
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
B6cca4e:{NFSU2_TR(0x6cca4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cca4f:{NFSU2_TR(0x6cca4f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cca50:{NFSU2_TR(0x6cca50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cca53:L6cca53:{c.instructions+=9;NFSU2_TR(0x6cca53);
__builtin_memmove((R+28),(R+28),4);
}
B6cca55:{NFSU2_TR(0x6cca55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cca56:{NFSU2_TR(0x6cca56);
__builtin_memmove((R+20),(R+16),4);
}
B6cca58:{NFSU2_TR(0x6cca58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cca59:{NFSU2_TR(0x6cca59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cca5c:{NFSU2_TR(0x6cca5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cca5f:{NFSU2_TR(0x6cca5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cca61:{NFSU2_TR(0x6cca61);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cca64:{NFSU2_TR(0x6cca64);
if(r1(R+518)){{goto L6ccab9;}}
}
B6cca66:L6cca66:{c.instructions+=9;NFSU2_TR(0x6cca66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cca67:{NFSU2_TR(0x6cca67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cca6a:{NFSU2_TR(0x6cca6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cca6d:{NFSU2_TR(0x6cca6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cca70:{NFSU2_TR(0x6cca70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cca73:{NFSU2_TR(0x6cca73);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cca76:{NFSU2_TR(0x6cca76);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cca7a:{NFSU2_TR(0x6cca7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cca7b:{NFSU2_TR(0x6cca7b);
if(r1(R+518)){{goto L6ccab9;}}
}
B6cca7d:L6cca7d:{c.instructions+=6;NFSU2_TR(0x6cca7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cca80:{NFSU2_TR(0x6cca80);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cca83:{NFSU2_TR(0x6cca83);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6cca88:{NFSU2_TR(0x6cca88);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xb0001000ull))));
}
B6cca8d:{NFSU2_TR(0x6cca8d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cca90:{NFSU2_TR(0x6cca90);
if(r1(R+518)){{goto L6ccaae;}}
}
B6cca92:L6cca92:{c.instructions+=2;NFSU2_TR(0x6cca92);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cca93:{NFSU2_TR(0x6cca93);
if(r1(R+518)){{goto L6ccaa9;}}
}
B6cca95:L6cca95:{c.instructions+=2;NFSU2_TR(0x6cca95);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cca96:{NFSU2_TR(0x6cca96);
if(r1(R+518)){{goto L6ccaa2;}}
}
B6cca98:L6cca98:{c.instructions+=2;NFSU2_TR(0x6cca98);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cca99:{NFSU2_TR(0x6cca99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccaae;}}
}
B6cca9b:L6cca9b:{c.instructions+=2;NFSU2_TR(0x6cca9b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff0000ull))));
}
B6ccaa0:{NFSU2_TR(0x6ccaa0);
{goto L6ccaae;}
}
B6ccaa2:L6ccaa2:{c.instructions+=2;NFSU2_TR(0x6ccaa2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xaa0000ull))));
}
B6ccaa7:{NFSU2_TR(0x6ccaa7);
{goto L6ccaae;}
}
B6ccaa9:L6ccaa9:{c.instructions+=1;NFSU2_TR(0x6ccaa9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x550000ull))));
}
B6ccaae:L6ccaae:{c.instructions+=2;NFSU2_TR(0x6ccaae);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccab2:{NFSU2_TR(0x6ccab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccab9;}}
}
B6ccab4:L6ccab4:{c.instructions+=1;NFSU2_TR(0x6ccab4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xd000000ull))));
}
B6ccab9:L6ccab9:{c.instructions+=4;NFSU2_TR(0x6ccab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccabc:{NFSU2_TR(0x6ccabc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ccabe:{NFSU2_TR(0x6ccabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ccabf:{NFSU2_TR(0x6ccabf);
if(r1(R+518)){{goto L6ccac3;}}
}
B6ccac1:L6ccac1:{c.instructions+=1;NFSU2_TR(0x6ccac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ccac3:L6ccac3:{c.instructions+=3;NFSU2_TR(0x6ccac3);
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
B6ccac5:{NFSU2_TR(0x6ccac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ccac6:{NFSU2_TR(0x6ccac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ccac9:L6ccac9:{c.instructions+=13;NFSU2_TR(0x6ccac9);
__builtin_memmove((R+28),(R+28),4);
}
B6ccacb:{NFSU2_TR(0x6ccacb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccacc:{NFSU2_TR(0x6ccacc);
__builtin_memmove((R+20),(R+16),4);
}
B6ccace:{NFSU2_TR(0x6ccace);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccacf:{NFSU2_TR(0x6ccacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccad3:{NFSU2_TR(0x6ccad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccad4:{NFSU2_TR(0x6ccad4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccad5:{NFSU2_TR(0x6ccad5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ccad7:{NFSU2_TR(0x6ccad7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ccad9:{NFSU2_TR(0x6ccad9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccadc:{NFSU2_TR(0x6ccadc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccadd:{NFSU2_TR(0x6ccadd);
__builtin_memmove((R+24),(R+4),4);
}
B6ccadf:{NFSU2_TR(0x6ccadf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccaf8;}}
}
B6ccae1:L6ccae1:{c.instructions+=1;NFSU2_TR(0x6ccae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccae7:L6ccae7:{c.instructions+=3;NFSU2_TR(0x6ccae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccaea:{NFSU2_TR(0x6ccaea);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6ccaed:{NFSU2_TR(0x6ccaed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccaf2;}}
}
B6ccaef:L6ccaef:{c.instructions+=2;NFSU2_TR(0x6ccaef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ccaf1:{NFSU2_TR(0x6ccaf1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ccaf2:L6ccaf2:{c.instructions+=3;NFSU2_TR(0x6ccaf2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ccaf3:{NFSU2_TR(0x6ccaf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ccaf6:{NFSU2_TR(0x6ccaf6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccae7u);}goto L6ccae7;}}
}
B6ccaf8:L6ccaf8:{c.instructions+=3;NFSU2_TR(0x6ccaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ccafb:{NFSU2_TR(0x6ccafb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccb01:{NFSU2_TR(0x6ccb01);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccb0b;}}
}
B6ccb03:L6ccb03:{c.instructions+=2;NFSU2_TR(0x6ccb03);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ccb05:{NFSU2_TR(0x6ccb05);
if(r1(R+518)){{goto L6ccc04;}}
}
B6ccb0b:L6ccb0b:{c.instructions+=10;NFSU2_TR(0x6ccb0b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ccb0e:{NFSU2_TR(0x6ccb0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ccb14:{NFSU2_TR(0x6ccb14);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ccb15:{NFSU2_TR(0x6ccb15);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ccb16:{NFSU2_TR(0x6ccb16);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ccb17:{NFSU2_TR(0x6ccb17);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ccb18:{NFSU2_TR(0x6ccb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccb1b:{NFSU2_TR(0x6ccb1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ccb1e:{NFSU2_TR(0x6ccb1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccb1f:{NFSU2_TR(0x6ccb1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccb24ull));
TAIL_STATIC(0x575620u,575);
}
B6ccb24:L6ccb24:{c.instructions+=5;NFSU2_TR(0x6ccb24);
__builtin_memmove((R+28),(R+0),4);
}
B6ccb26:{NFSU2_TR(0x6ccb26);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ccb28:{NFSU2_TR(0x6ccb28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ccb29:{NFSU2_TR(0x6ccb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccb2c:{NFSU2_TR(0x6ccb2c);
if(r1(R+518)){{goto L6cccfb;}}
}
B6ccb32:L6ccb32:{c.instructions+=5;NFSU2_TR(0x6ccb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccb35:{NFSU2_TR(0x6ccb35);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ccb38:{NFSU2_TR(0x6ccb38);
__builtin_memmove((R+8),(R+4),4);
}
B6ccb3a:{NFSU2_TR(0x6ccb3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ccb3d:{NFSU2_TR(0x6ccb3d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ccb40:L6ccb40:{c.instructions+=1;NFSU2_TR(0x6ccb40);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ccb42;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccb40u);}goto L6ccb40;}
}
B6ccb42:L6ccb42:{c.instructions+=3;NFSU2_TR(0x6ccb42);
__builtin_memmove((R+4),(R+8),4);
}
B6ccb44:{NFSU2_TR(0x6ccb44);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ccb47:{NFSU2_TR(0x6ccb47);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ccb49:L6ccb49:{c.instructions+=1;NFSU2_TR(0x6ccb49);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6ccb4b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccb49u);}goto L6ccb49;}
}
B6ccb4b:L6ccb4b:{c.instructions+=2;NFSU2_TR(0x6ccb4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccb4e:{NFSU2_TR(0x6ccb4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccb9c;}}
}
B6ccb50:L6ccb50:{c.instructions+=5;NFSU2_TR(0x6ccb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccb53:{NFSU2_TR(0x6ccb53);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ccb56:{NFSU2_TR(0x6ccb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccb5c:{NFSU2_TR(0x6ccb5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccb5f:{NFSU2_TR(0x6ccb5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccb96;}}
}
B6ccb61:L6ccb61:{c.instructions+=2;NFSU2_TR(0x6ccb61);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccb65:{NFSU2_TR(0x6ccb65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccb96;}}
}
B6ccb67:L6ccb67:{c.instructions+=3;NFSU2_TR(0x6ccb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccb6a:{NFSU2_TR(0x6ccb6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ccb6d:{NFSU2_TR(0x6ccb6d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ccb96;}}
}
B6ccb6f:L6ccb6f:{c.instructions+=2;NFSU2_TR(0x6ccb6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6ccb72:{NFSU2_TR(0x6ccb72);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ccb80;}}
}
B6ccb74:L6ccb74:{c.instructions+=2;NFSU2_TR(0x6ccb74);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6ccb77:{NFSU2_TR(0x6ccb77);
if(r1(R+512)){{goto L6ccb80;}}
}
B6ccb79:L6ccb79:{c.instructions+=2;NFSU2_TR(0x6ccb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccb7c:{NFSU2_TR(0x6ccb7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6ccb80:L6ccb80:{c.instructions+=3;NFSU2_TR(0x6ccb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccb83:{NFSU2_TR(0x6ccb83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6ccb85:{NFSU2_TR(0x6ccb85);
if(r1(R+512)){{goto L6ccb96;}}
}
B6ccb87:L6ccb87:{c.instructions+=5;NFSU2_TR(0x6ccb87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccb8a:{NFSU2_TR(0x6ccb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccb8d:{NFSU2_TR(0x6ccb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ccb90:{NFSU2_TR(0x6ccb90);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
}
B6ccb92:{NFSU2_TR(0x6ccb92);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ccb96;}}
}
B6ccb94:L6ccb94:{c.instructions+=1;NFSU2_TR(0x6ccb94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ccb96:L6ccb96:{c.instructions+=3;NFSU2_TR(0x6ccb96);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ccb97:{NFSU2_TR(0x6ccb97);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ccb9a:{NFSU2_TR(0x6ccb9a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccb50u);}goto L6ccb50;}}
}
B6ccb9c:L6ccb9c:{c.instructions+=6;NFSU2_TR(0x6ccb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ccb9f:{NFSU2_TR(0x6ccb9f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ccba1:{NFSU2_TR(0x6ccba1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccba3:{NFSU2_TR(0x6ccba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccba9:{NFSU2_TR(0x6ccba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccbaf:{NFSU2_TR(0x6ccbaf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccbef;}}
}
B6ccbb1:L6ccbb1:{c.instructions+=3;NFSU2_TR(0x6ccbb1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ccbb3:{NFSU2_TR(0x6ccbb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccbb6:{NFSU2_TR(0x6ccbb6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccbcb;}}
}
B6ccbb8:L6ccbb8:{c.instructions+=3;NFSU2_TR(0x6ccbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccbbb:{NFSU2_TR(0x6ccbbb);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6ccbbe:{NFSU2_TR(0x6ccbbe);
if(r1(R+518)){{goto L6ccbc6;}}
}
B6ccbc0:L6ccbc0:{c.instructions+=3;NFSU2_TR(0x6ccbc0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ccbc1:{NFSU2_TR(0x6ccbc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ccbc4:{NFSU2_TR(0x6ccbc4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccbb8u);}goto L6ccbb8;}}
}
B6ccbc6:L6ccbc6:{c.instructions+=2;NFSU2_TR(0x6ccbc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ccbc9:{NFSU2_TR(0x6ccbc9);
if(r1(R+512)){{goto L6ccbe9;}}
}
B6ccbcb:L6ccbcb:{c.instructions+=5;NFSU2_TR(0x6ccbcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccbce:{NFSU2_TR(0x6ccbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccbd4:{NFSU2_TR(0x6ccbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ccbd7:{NFSU2_TR(0x6ccbd7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+4))));
}
B6ccbd9:{NFSU2_TR(0x6ccbd9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ccbe9;}}
}
B6ccbdb:L6ccbdb:{c.instructions+=3;NFSU2_TR(0x6ccbdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccbe1:{NFSU2_TR(0x6ccbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ccbe3:{NFSU2_TR(0x6ccbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccbe9:L6ccbe9:{c.instructions+=3;NFSU2_TR(0x6ccbe9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ccbea:{NFSU2_TR(0x6ccbea);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ccbed:{NFSU2_TR(0x6ccbed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccbb1u);}goto L6ccbb1;}}
}
B6ccbef:L6ccbef:{c.instructions+=2;NFSU2_TR(0x6ccbef);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccbf5:{NFSU2_TR(0x6ccbf5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ccc04;}}
}
B6ccbf7:L6ccbf7:{c.instructions+=2;NFSU2_TR(0x6ccbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccbfe:{NFSU2_TR(0x6ccbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc04:L6ccc04:{c.instructions+=9;NFSU2_TR(0x6ccc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccc07:{NFSU2_TR(0x6ccc07);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6ccc08:{NFSU2_TR(0x6ccc08);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B6ccc0a:{NFSU2_TR(0x6ccc0a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6ccc0c:{NFSU2_TR(0x6ccc0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc10:{NFSU2_TR(0x6ccc10);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffffdull))));
}
B6ccc13:{NFSU2_TR(0x6ccc13);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B6ccc16:{NFSU2_TR(0x6ccc16);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccc1a:{NFSU2_TR(0x6ccc1a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccce7;}}
}
B6ccc20:L6ccc20:{c.instructions+=2;NFSU2_TR(0x6ccc20);
u8 U[12];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ccc27:{NFSU2_TR(0x6ccc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc2a:L6ccc2a:{c.instructions+=4;NFSU2_TR(0x6ccc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccc2d:{NFSU2_TR(0x6ccc2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ccc2f:{NFSU2_TR(0x6ccc2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccc32:{NFSU2_TR(0x6ccc32);
if(r1(R+518)){{goto L6ccc3d;}}
}
B6ccc34:L6ccc34:{c.instructions+=3;NFSU2_TR(0x6ccc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccc37:{NFSU2_TR(0x6ccc37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ccc3a:{NFSU2_TR(0x6ccc3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc3d:L6ccc3d:{c.instructions+=9;NFSU2_TR(0x6ccc3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccc3e:{NFSU2_TR(0x6ccc3e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6ccc40:{NFSU2_TR(0x6ccc40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccc41:{NFSU2_TR(0x6ccc41);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ccc44:{NFSU2_TR(0x6ccc44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccc45:{NFSU2_TR(0x6ccc45);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccc4b:{NFSU2_TR(0x6ccc4b);
__builtin_memmove((R+4),(R+24),4);
}
B6ccc4d:{NFSU2_TR(0x6ccc4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccc53:{NFSU2_TR(0x6ccc53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccc58ull));
TAIL_STATIC(0x699c39u,699);
}
B6ccc58:L6ccc58:{c.instructions+=4;NFSU2_TR(0x6ccc58);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccc5b:{NFSU2_TR(0x6ccc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccc5e:{NFSU2_TR(0x6ccc5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ccc60:{NFSU2_TR(0x6ccc60);
if(r1(R+518)){{goto L6cccfb;}}
}
B6ccc66:L6ccc66:{c.instructions+=14;NFSU2_TR(0x6ccc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccc69:{NFSU2_TR(0x6ccc69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ccc6c:{NFSU2_TR(0x6ccc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc70:{NFSU2_TR(0x6ccc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc74:{NFSU2_TR(0x6ccc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc77:{NFSU2_TR(0x6ccc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccc7d:{NFSU2_TR(0x6ccc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc80:{NFSU2_TR(0x6ccc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc83:{NFSU2_TR(0x6ccc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc86:{NFSU2_TR(0x6ccc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccc8d:{NFSU2_TR(0x6ccc8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccc90:{NFSU2_TR(0x6ccc90);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ccc93:{NFSU2_TR(0x6ccc93);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccc97:{NFSU2_TR(0x6ccc97);
if(r1(R+518)){{goto L6cccc1;}}
}
B6ccc99:L6ccc99:{c.instructions+=14;NFSU2_TR(0x6ccc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccc9c:{NFSU2_TR(0x6ccc9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ccc9e:{NFSU2_TR(0x6ccc9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ccca1:{NFSU2_TR(0x6ccca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ccca4:{NFSU2_TR(0x6ccca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccca7:{NFSU2_TR(0x6ccca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cccaa:{NFSU2_TR(0x6cccaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cccad:{NFSU2_TR(0x6cccad);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cccb0:{NFSU2_TR(0x6cccb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cccb3:{NFSU2_TR(0x6cccb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cccb5:{NFSU2_TR(0x6cccb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cccb8:{NFSU2_TR(0x6cccb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cccbb:{NFSU2_TR(0x6cccbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cccbe:{NFSU2_TR(0x6cccbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cccc1:L6cccc1:{c.instructions+=3;NFSU2_TR(0x6cccc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cccc4:{NFSU2_TR(0x6cccc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cccc6:{NFSU2_TR(0x6cccc6);
if(r1(R+518)){{goto L6cccd3;}}
}
B6cccc8:L6cccc8:{c.instructions+=4;NFSU2_TR(0x6cccc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccccb:{NFSU2_TR(0x6ccccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ccccd:{NFSU2_TR(0x6ccccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cccd0:{NFSU2_TR(0x6cccd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cccd3:L6cccd3:{c.instructions+=6;NFSU2_TR(0x6cccd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cccd7:{NFSU2_TR(0x6cccd7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cccd8:{NFSU2_TR(0x6cccd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cccdb:{NFSU2_TR(0x6cccdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cccde:{NFSU2_TR(0x6cccde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ccce1:{NFSU2_TR(0x6ccce1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccc2au);}goto L6ccc2a;}}
}
B6ccce7:L6ccce7:{c.instructions+=1;NFSU2_TR(0x6ccce7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ccce9:L6ccce9:{c.instructions+=2;NFSU2_TR(0x6ccce9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cccec:{NFSU2_TR(0x6cccec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cccf1ull));
TAIL_STATIC(0x575630u,575);
}
B6cccf1:L6cccf1:{c.instructions+=7;NFSU2_TR(0x6cccf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cccf2:{NFSU2_TR(0x6cccf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cccf3:{NFSU2_TR(0x6cccf3);
__builtin_memmove((R+0),(R+24),4);
}
B6cccf5:{NFSU2_TR(0x6cccf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cccf6:{NFSU2_TR(0x6cccf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cccf7:{NFSU2_TR(0x6cccf7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cccf8:{NFSU2_TR(0x6cccf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cccfb:L6cccfb:{c.instructions+=2;NFSU2_TR(0x6cccfb);
w4(R+24,u32(0x8007000eull));
}
B6ccd00:{NFSU2_TR(0x6ccd00);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccce9u);}goto L6ccce9;}
}
B6ccd02:L6ccd02:{c.instructions+=13;NFSU2_TR(0x6ccd02);
__builtin_memmove((R+28),(R+28),4);
}
B6ccd04:{NFSU2_TR(0x6ccd04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd05:{NFSU2_TR(0x6ccd05);
__builtin_memmove((R+20),(R+16),4);
}
B6ccd07:{NFSU2_TR(0x6ccd07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd08:{NFSU2_TR(0x6ccd08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd09:{NFSU2_TR(0x6ccd09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd0a:{NFSU2_TR(0x6ccd0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd0b:{NFSU2_TR(0x6ccd0b);
__builtin_memmove((R+24),(R+4),4);
}
B6ccd0d:{NFSU2_TR(0x6ccd0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd0e:{NFSU2_TR(0x6ccd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccd14:{NFSU2_TR(0x6ccd14);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ccd16:{NFSU2_TR(0x6ccd16);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccd18:{NFSU2_TR(0x6ccd18);
if(r1(R+518)){{goto L6ccd84;}}
}
B6ccd1a:L6ccd1a:{c.instructions+=4;NFSU2_TR(0x6ccd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ccd20:{NFSU2_TR(0x6ccd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccd26:{NFSU2_TR(0x6ccd26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6ccd28:{NFSU2_TR(0x6ccd28);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ccd84;}}
}
B6ccd2a:L6ccd2a:{c.instructions+=2;NFSU2_TR(0x6ccd2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccd30:{NFSU2_TR(0x6ccd30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccd84;}}
}
B6ccd32:L6ccd32:{c.instructions+=5;NFSU2_TR(0x6ccd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccd38:{NFSU2_TR(0x6ccd38);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccd3a:{NFSU2_TR(0x6ccd3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccd3d:{NFSU2_TR(0x6ccd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccd40:{NFSU2_TR(0x6ccd40);
if(r1(R+518)){{goto L6ccd5d;}}
}
B6ccd42:L6ccd42:{c.instructions+=3;NFSU2_TR(0x6ccd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ccd45:{NFSU2_TR(0x6ccd45);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ccd47:{NFSU2_TR(0x6ccd47);
if(r1(R+518)){{goto L6ccd5d;}}
}
B6ccd49:L6ccd49:{c.instructions+=2;NFSU2_TR(0x6ccd49);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccd4d:{NFSU2_TR(0x6ccd4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccd5d;}}
}
B6ccd4f:L6ccd4f:{c.instructions+=5;NFSU2_TR(0x6ccd4f);
__builtin_memmove((R+4),(R+12),4);
}
B6ccd51:{NFSU2_TR(0x6ccd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ccd54:{NFSU2_TR(0x6ccd54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccd57:{NFSU2_TR(0x6ccd57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccd5a:{NFSU2_TR(0x6ccd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccd5d:L6ccd5d:{c.instructions+=10;NFSU2_TR(0x6ccd5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ccd5f:{NFSU2_TR(0x6ccd5f);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ccd61:{NFSU2_TR(0x6ccd61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd62:{NFSU2_TR(0x6ccd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccd68:{NFSU2_TR(0x6ccd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ccd6b:{NFSU2_TR(0x6ccd6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd6c:{NFSU2_TR(0x6ccd6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccd6f:{NFSU2_TR(0x6ccd6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccd72:{NFSU2_TR(0x6ccd72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd73:{NFSU2_TR(0x6ccd73);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccd76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ccd76:L6ccd76:{c.instructions+=3;NFSU2_TR(0x6ccd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccd7c:{NFSU2_TR(0x6ccd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccd82:{NFSU2_TR(0x6ccd82);
{goto L6ccd86;}
}
B6ccd84:L6ccd84:{c.instructions+=1;NFSU2_TR(0x6ccd84);
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
B6ccd86:L6ccd86:{c.instructions+=5;NFSU2_TR(0x6ccd86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ccd87:{NFSU2_TR(0x6ccd87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ccd88:{NFSU2_TR(0x6ccd88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ccd89:{NFSU2_TR(0x6ccd89);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ccd8a:{NFSU2_TR(0x6ccd8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ccd8b:L6ccd8b:{c.instructions+=9;NFSU2_TR(0x6ccd8b);
__builtin_memmove((R+28),(R+28),4);
}
B6ccd8d:{NFSU2_TR(0x6ccd8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd8e:{NFSU2_TR(0x6ccd8e);
__builtin_memmove((R+20),(R+16),4);
}
B6ccd90:{NFSU2_TR(0x6ccd90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6ccd93:{NFSU2_TR(0x6ccd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccd96:{NFSU2_TR(0x6ccd96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccd99:{NFSU2_TR(0x6ccd99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccd9a:{NFSU2_TR(0x6ccd9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ccd9d:{NFSU2_TR(0x6ccd9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccdc8;}}
}
B6ccd9f:L6ccd9f:{c.instructions+=3;NFSU2_TR(0x6ccd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccda5:{NFSU2_TR(0x6ccda5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ccda7:{NFSU2_TR(0x6ccda7);
if(r1(R+518)){{goto L6ccdc6;}}
}
B6ccda9:L6ccda9:{c.instructions+=3;NFSU2_TR(0x6ccda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccdac:{NFSU2_TR(0x6ccdac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ccdae:{NFSU2_TR(0x6ccdae);
if(r1(R+518)){{goto L6ccdc6;}}
}
B6ccdb0:L6ccdb0:{c.instructions+=2;NFSU2_TR(0x6ccdb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccdb4:{NFSU2_TR(0x6ccdb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccdc6;}}
}
B6ccdb6:L6ccdb6:{c.instructions+=6;NFSU2_TR(0x6ccdb6);
__builtin_memmove((R+0),(R+4),4);
}
B6ccdb8:{NFSU2_TR(0x6ccdb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccdbb:{NFSU2_TR(0x6ccdbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccdbe:{NFSU2_TR(0x6ccdbe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccdc1:{NFSU2_TR(0x6ccdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccdc4:{NFSU2_TR(0x6ccdc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ccdc8;}}
}
B6ccdc6:L6ccdc6:{c.instructions+=1;NFSU2_TR(0x6ccdc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ccdc8:L6ccdc8:{c.instructions+=8;NFSU2_TR(0x6ccdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccdcb:{NFSU2_TR(0x6ccdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccdce:{NFSU2_TR(0x6ccdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccdd1:{NFSU2_TR(0x6ccdd1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ccdd6:{NFSU2_TR(0x6ccdd6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ccdd7:{NFSU2_TR(0x6ccdd7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6ccdd8:{NFSU2_TR(0x6ccdd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccddb:{NFSU2_TR(0x6ccddb);
if(r1(R+518)){{goto L6ccde2;}}
}
B6ccddd:L6ccddd:{c.instructions+=2;NFSU2_TR(0x6ccddd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6ccde0:{NFSU2_TR(0x6ccde0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cce0f;}}
}
B6ccde2:L6ccde2:{c.instructions+=9;NFSU2_TR(0x6ccde2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccde5:{NFSU2_TR(0x6ccde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccde8:{NFSU2_TR(0x6ccde8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccded:{NFSU2_TR(0x6ccded);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1388ull))));
}
B6ccdf2:{NFSU2_TR(0x6ccdf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccdf3:{NFSU2_TR(0x6ccdf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ccdf6:{NFSU2_TR(0x6ccdf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccdf7:{NFSU2_TR(0x6ccdf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccdfd:{NFSU2_TR(0x6ccdfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cce02ull));
TAIL_STATIC(0x64307cu,643);
}
B6cce02:L6cce02:{c.instructions+=2;NFSU2_TR(0x6cce02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6cce05:{NFSU2_TR(0x6cce05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cce0f:L6cce0f:{c.instructions+=4;NFSU2_TR(0x6cce0f);
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
B6cce11:{NFSU2_TR(0x6cce11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cce12:{NFSU2_TR(0x6cce12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cce13:{NFSU2_TR(0x6cce13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cce16:L6cce16:{c.instructions+=2;NFSU2_TR(0x6cce16);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cce1d:{NFSU2_TR(0x6cce1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cce22;}}
}
B6cce1f:L6cce1f:{c.instructions+=2;NFSU2_TR(0x6cce1f);
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
B6cce21:{NFSU2_TR(0x6cce21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cce22:L6cce22:{c.instructions+=4;NFSU2_TR(0x6cce22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cce28:{NFSU2_TR(0x6cce28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6cce2e:{NFSU2_TR(0x6cce2e);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cce34:{NFSU2_TR(0x6cce34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cce35:L6cce35:{c.instructions+=12;NFSU2_TR(0x6cce35);
__builtin_memmove((R+28),(R+28),4);
}
B6cce37:{NFSU2_TR(0x6cce37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cce38:{NFSU2_TR(0x6cce38);
__builtin_memmove((R+20),(R+16),4);
}
B6cce3a:{NFSU2_TR(0x6cce3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B6cce3d:{NFSU2_TR(0x6cce3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cce3e:{NFSU2_TR(0x6cce3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cce3f:{NFSU2_TR(0x6cce3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cce41:{NFSU2_TR(0x6cce41);
__builtin_memmove((R+24),(R+4),4);
}
B6cce43:{NFSU2_TR(0x6cce43);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cce49:{NFSU2_TR(0x6cce49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cce4c:{NFSU2_TR(0x6cce4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cce4f:{NFSU2_TR(0x6cce4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cce58;}}
}
B6cce51:L6cce51:{c.instructions+=2;NFSU2_TR(0x6cce51);
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
B6cce53:{NFSU2_TR(0x6cce53);
{goto L6ccfe9;}
}
B6cce58:L6cce58:{c.instructions+=4;NFSU2_TR(0x6cce58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cce5e:{NFSU2_TR(0x6cce5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6cce64:{NFSU2_TR(0x6cce64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cce6a:{NFSU2_TR(0x6cce6a);
if(r1(R+518)){{goto L6ccfdd;}}
}
B6cce70:L6cce70:{c.instructions+=4;NFSU2_TR(0x6cce70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cce73:{NFSU2_TR(0x6cce73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cce74:{NFSU2_TR(0x6cce74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cce75:{NFSU2_TR(0x6cce75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cce7aull));
TAIL_STATIC(0x575620u,575);
}
B6cce7a:L6cce7a:{c.instructions+=5;NFSU2_TR(0x6cce7a);
__builtin_memmove((R+12),(R+0),4);
}
B6cce7c:{NFSU2_TR(0x6cce7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cce7e:{NFSU2_TR(0x6cce7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cce7f:{NFSU2_TR(0x6cce7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cce82:{NFSU2_TR(0x6cce82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cce90;}}
}
B6cce84:L6cce84:{c.instructions+=2;NFSU2_TR(0x6cce84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cce8b:{NFSU2_TR(0x6cce8b);
{goto L6ccfdc;}
}
B6cce90:L6cce90:{c.instructions+=2;NFSU2_TR(0x6cce90);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cce94:{NFSU2_TR(0x6cce94);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cced0;}}
}
B6cce96:L6cce96:{c.instructions+=1;NFSU2_TR(0x6cce96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cce9c:L6cce9c:{c.instructions+=5;NFSU2_TR(0x6cce9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cce9d:{NFSU2_TR(0x6cce9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ccea0:{NFSU2_TR(0x6ccea0);
u8 U[4];
w4(U+0,u32(0x7bf4b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccea5:{NFSU2_TR(0x6ccea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccea6:{NFSU2_TR(0x6ccea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cceabull));
TAIL_STATIC(0x75c784u,75c);
}
B6cceab:L6cceab:{c.instructions+=7;NFSU2_TR(0x6cceab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6cceae:{NFSU2_TR(0x6cceae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cceb0:{NFSU2_TR(0x6cceb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cceb1:{NFSU2_TR(0x6cceb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cceb4:{NFSU2_TR(0x6cceb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cceb5:{NFSU2_TR(0x6cceb5);
__builtin_memmove((R+4),(R+12),4);
}
B6cceb7:{NFSU2_TR(0x6cceb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccebcull));
TAIL_STATIC(0x686b20u,686);
}
B6ccebc:L6ccebc:{c.instructions+=3;NFSU2_TR(0x6ccebc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ccebe:{NFSU2_TR(0x6ccebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccec1:{NFSU2_TR(0x6ccec1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ccfdc;}}
}
B6ccec7:L6ccec7:{c.instructions+=3;NFSU2_TR(0x6ccec7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ccec8:{NFSU2_TR(0x6ccec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ccecb:{NFSU2_TR(0x6ccecb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cce9cu);}goto L6cce9c;}}
}
B6ccecd:L6ccecd:{c.instructions+=1;NFSU2_TR(0x6ccecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cced0:L6cced0:{c.instructions+=3;NFSU2_TR(0x6cced0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cced1:{NFSU2_TR(0x6cced1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cced7:{NFSU2_TR(0x6cced7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccedcull));
TAIL_STATIC(0x684fb7u,684);
}
B6ccedc:L6ccedc:{c.instructions+=6;NFSU2_TR(0x6ccedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ccee2:{NFSU2_TR(0x6ccee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6ccee8:{NFSU2_TR(0x6ccee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cceee:{NFSU2_TR(0x6cceee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ccef1:{NFSU2_TR(0x6ccef1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccef2:{NFSU2_TR(0x6ccef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccef7ull));
TAIL_STATIC(0x684fb7u,684);
}
B6ccef7:L6ccef7:{c.instructions+=6;NFSU2_TR(0x6ccef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6ccefd:{NFSU2_TR(0x6ccefd);
u8 U[4];
w4(U+0,u32(0x686442ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf02:{NFSU2_TR(0x6ccf02);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf04:{NFSU2_TR(0x6ccf04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf05:{NFSU2_TR(0x6ccf05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf06:{NFSU2_TR(0x6ccf06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccf0bull));
TAIL_STATIC(0x75cc70u,75c);
}
B6ccf0b:L6ccf0b:{c.instructions+=16;NFSU2_TR(0x6ccf0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccf0e:{NFSU2_TR(0x6ccf0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ccf11:{NFSU2_TR(0x6ccf11);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ccf13:{NFSU2_TR(0x6ccf13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6ccf16:{NFSU2_TR(0x6ccf16);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ccf18:{NFSU2_TR(0x6ccf18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ccf1b:{NFSU2_TR(0x6ccf1b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccf21:{NFSU2_TR(0x6ccf21);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccf27:{NFSU2_TR(0x6ccf27);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccf2d:{NFSU2_TR(0x6ccf2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccf33:{NFSU2_TR(0x6ccf33);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccf39:{NFSU2_TR(0x6ccf39);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6ccf3d:{NFSU2_TR(0x6ccf3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccf40:{NFSU2_TR(0x6ccf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ccf43:{NFSU2_TR(0x6ccf43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccf46:{NFSU2_TR(0x6ccf46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ccfd8;}}
}
B6ccf4c:L6ccf4c:{c.instructions+=1;NFSU2_TR(0x6ccf4c);
{goto L6ccf51;}
}
B6ccf4e:L6ccf4e:{c.instructions+=1;NFSU2_TR(0x6ccf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ccf51:L6ccf51:{c.instructions+=9;NFSU2_TR(0x6ccf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccf54:{NFSU2_TR(0x6ccf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccf57:{NFSU2_TR(0x6ccf57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf58:{NFSU2_TR(0x6ccf58);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf5a:{NFSU2_TR(0x6ccf5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6ccf5d:{NFSU2_TR(0x6ccf5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ccf5f:{NFSU2_TR(0x6ccf5f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf61:{NFSU2_TR(0x6ccf61);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6ccf63:{NFSU2_TR(0x6ccf63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccf68ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6ccf68:L6ccf68:{c.instructions+=3;NFSU2_TR(0x6ccf68);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ccf6a:{NFSU2_TR(0x6ccf6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccf6d:{NFSU2_TR(0x6ccf6d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ccfdc;}}
}
B6ccf6f:L6ccf6f:{c.instructions+=8;NFSU2_TR(0x6ccf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccf72:{NFSU2_TR(0x6ccf72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ccf75:{NFSU2_TR(0x6ccf75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf76:{NFSU2_TR(0x6ccf76);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf78:{NFSU2_TR(0x6ccf78);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf7a:{NFSU2_TR(0x6ccf7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ccf7d:{NFSU2_TR(0x6ccf7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf7e:{NFSU2_TR(0x6ccf7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccf83ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6ccf83:L6ccf83:{c.instructions+=3;NFSU2_TR(0x6ccf83);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ccf85:{NFSU2_TR(0x6ccf85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccf88:{NFSU2_TR(0x6ccf88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ccfdc;}}
}
B6ccf8a:L6ccf8a:{c.instructions+=3;NFSU2_TR(0x6ccf8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ccf8c:{NFSU2_TR(0x6ccf8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ccf90:{NFSU2_TR(0x6ccf90);
if(r1(R+518)){{goto L6ccfb3;}}
}
B6ccf92:L6ccf92:{c.instructions+=10;NFSU2_TR(0x6ccf92);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6ccf96:{NFSU2_TR(0x6ccf96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ccf99:{NFSU2_TR(0x6ccf99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ccf9c:{NFSU2_TR(0x6ccf9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccf9d:{NFSU2_TR(0x6ccf9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ccf9f:{NFSU2_TR(0x6ccf9f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccfa1:{NFSU2_TR(0x6ccfa1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccfa3:{NFSU2_TR(0x6ccfa3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6ccfa6:{NFSU2_TR(0x6ccfa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccfa7:{NFSU2_TR(0x6ccfa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccfacull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6ccfac:L6ccfac:{c.instructions+=3;NFSU2_TR(0x6ccfac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ccfae:{NFSU2_TR(0x6ccfae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ccfb1:{NFSU2_TR(0x6ccfb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ccfdc;}}
}
B6ccfb3:L6ccfb3:{c.instructions+=9;NFSU2_TR(0x6ccfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccfb6:{NFSU2_TR(0x6ccfb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccfbc:{NFSU2_TR(0x6ccfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ccfbe:{NFSU2_TR(0x6ccfbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6ccfc2:{NFSU2_TR(0x6ccfc2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6ccfc6:{NFSU2_TR(0x6ccfc6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6ccfcc:{NFSU2_TR(0x6ccfcc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B6ccfcf:{NFSU2_TR(0x6ccfcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6ccfd2:{NFSU2_TR(0x6ccfd2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ccf4eu);}goto L6ccf4e;}}
}
B6ccfd8:L6ccfd8:{c.instructions+=1;NFSU2_TR(0x6ccfd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccfdc:L6ccfdc:{c.instructions+=1;NFSU2_TR(0x6ccfdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ccfdd:L6ccfdd:{c.instructions+=2;NFSU2_TR(0x6ccfdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ccfe0:{NFSU2_TR(0x6ccfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ccfe5ull));
TAIL_STATIC(0x575630u,575);
}
B6ccfe5:L6ccfe5:{c.instructions+=2;NFSU2_TR(0x6ccfe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ccfe8:{NFSU2_TR(0x6ccfe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ccfe9:L6ccfe9:{c.instructions+=4;NFSU2_TR(0x6ccfe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ccfea:{NFSU2_TR(0x6ccfea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ccfeb:{NFSU2_TR(0x6ccfeb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ccfec:{NFSU2_TR(0x6ccfec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ccfef:L6ccfef:{c.instructions+=8;NFSU2_TR(0x6ccfef);
__builtin_memmove((R+28),(R+28),4);
}
B6ccff1:{NFSU2_TR(0x6ccff1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccff2:{NFSU2_TR(0x6ccff2);
__builtin_memmove((R+20),(R+16),4);
}
B6ccff4:{NFSU2_TR(0x6ccff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6ccff7:{NFSU2_TR(0x6ccff7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ccff8:{NFSU2_TR(0x6ccff8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ccffa:{NFSU2_TR(0x6ccffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ccffd:{NFSU2_TR(0x6ccffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6cd000u,6cd);
}
XIT:NFSU2_TR_EXIT(0x6cc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
