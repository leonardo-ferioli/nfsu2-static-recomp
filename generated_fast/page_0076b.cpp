#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_76d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x76b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x76b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_76b(u8* __restrict R,Cpu& c);
u32 page_76b(Cpu& c){return body_76b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_76b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x76b0e5:goto L76b0e5;
case 0x76b0e7:c.instructions+=2;goto B76b0e7;
case 0x76b0ec:c.instructions+=1;goto B76b0ec;
case 0x76b0f1:goto L76b0f1;
case 0x76b0f4:c.instructions+=2;goto B76b0f4;
case 0x76b0fa:c.instructions+=1;goto B76b0fa;
case 0x76b100:goto L76b100;
case 0x76b102:c.instructions+=9;goto B76b102;
case 0x76b105:c.instructions+=8;goto B76b105;
case 0x76b10c:c.instructions+=7;goto B76b10c;
case 0x76b10e:c.instructions+=6;goto B76b10e;
case 0x76b111:c.instructions+=5;goto B76b111;
case 0x76b114:c.instructions+=4;goto B76b114;
case 0x76b117:c.instructions+=3;goto B76b117;
case 0x76b119:c.instructions+=2;goto B76b119;
case 0x76b11e:c.instructions+=1;goto B76b11e;
case 0x76b120:goto L76b120;
case 0x76b121:c.instructions+=1;goto B76b121;
case 0x76b126:goto L76b126;
case 0x76b127:c.instructions+=4;goto B76b127;
case 0x76b12b:c.instructions+=3;goto B76b12b;
case 0x76b12d:c.instructions+=2;goto B76b12d;
case 0x76b132:c.instructions+=1;goto B76b132;
case 0x76b134:goto L76b134;
case 0x76b135:c.instructions+=1;goto B76b135;
case 0x76b13a:goto L76b13a;
case 0x76b13b:c.instructions+=2;goto B76b13b;
case 0x76b13c:c.instructions+=1;goto B76b13c;
case 0x76b142:goto L76b142;
case 0x76b144:c.instructions+=1;goto B76b144;
case 0x76b146:goto L76b146;
case 0x76b14c:goto L76b14c;
case 0x76b14f:c.instructions+=1;goto B76b14f;
case 0x76b151:goto L76b151;
case 0x76b155:goto L76b155;
case 0x76b159:c.instructions+=1;goto B76b159;
case 0x76b15b:goto L76b15b;
case 0x76b160:goto L76b160;
case 0x76b163:c.instructions+=1;goto B76b163;
case 0x76b165:goto L76b165;
case 0x76b16a:goto L76b16a;
case 0x76b170:c.instructions+=1;goto B76b170;
case 0x76b174:goto L76b174;
case 0x76b178:c.instructions+=1;goto B76b178;
case 0x76b17d:goto L76b17d;
case 0x76b180:c.instructions+=1;goto B76b180;
case 0x76b185:goto L76b185;
case 0x76b186:c.instructions+=1;goto B76b186;
case 0x76b18b:goto L76b18b;
case 0x76b18c:c.instructions+=1;goto B76b18c;
case 0x76b18d:goto L76b18d;
case 0x76b192:goto L76b192;
case 0x76b198:c.instructions+=1;goto B76b198;
case 0x76b19b:goto L76b19b;
case 0x76b1a0:goto L76b1a0;
case 0x76b1a1:goto L76b1a1;
case 0x76b1a5:c.instructions+=1;goto B76b1a5;
case 0x76b1a7:goto L76b1a7;
case 0x76b1ab:c.instructions+=1;goto B76b1ab;
case 0x76b1ad:goto L76b1ad;
case 0x76b1ae:c.instructions+=2;goto B76b1ae;
case 0x76b1b2:c.instructions+=1;goto B76b1b2;
case 0x76b1b7:goto L76b1b7;
case 0x76b1bb:c.instructions+=3;goto B76b1bb;
case 0x76b1bc:c.instructions+=2;goto B76b1bc;
case 0x76b1bd:c.instructions+=1;goto B76b1bd;
case 0x76b1bf:goto L76b1bf;
case 0x76b1c2:c.instructions+=1;goto B76b1c2;
case 0x76b1c3:goto L76b1c3;
case 0x76b1c5:c.instructions+=1;goto B76b1c5;
case 0x76b1c6:goto L76b1c6;
case 0x76b1c7:c.instructions+=4;goto B76b1c7;
case 0x76b1c9:c.instructions+=3;goto B76b1c9;
case 0x76b1ca:c.instructions+=2;goto B76b1ca;
case 0x76b1cc:c.instructions+=1;goto B76b1cc;
case 0x76b1ce:goto L76b1ce;
case 0x76b1d1:c.instructions+=3;goto B76b1d1;
case 0x76b1d4:c.instructions+=2;goto B76b1d4;
case 0x76b1d7:c.instructions+=1;goto B76b1d7;
case 0x76b1dc:goto L76b1dc;
case 0x76b1df:c.instructions+=2;goto B76b1df;
case 0x76b1e0:c.instructions+=1;goto B76b1e0;
case 0x76b1e2:goto L76b1e2;
case 0x76b1e6:c.instructions+=1;goto B76b1e6;
case 0x76b1e8:goto L76b1e8;
case 0x76b1e9:c.instructions+=2;goto B76b1e9;
case 0x76b1ea:c.instructions+=1;goto B76b1ea;
case 0x76b1eb:goto L76b1eb;
case 0x76b1ef:c.instructions+=5;goto B76b1ef;
case 0x76b1f0:c.instructions+=4;goto B76b1f0;
case 0x76b1f1:c.instructions+=3;goto B76b1f1;
case 0x76b1f3:c.instructions+=2;goto B76b1f3;
case 0x76b1f5:c.instructions+=1;goto B76b1f5;
case 0x76b1f7:goto L76b1f7;
case 0x76b1fb:c.instructions+=1;goto B76b1fb;
case 0x76b1fd:goto L76b1fd;
case 0x76b201:c.instructions+=2;goto B76b201;
case 0x76b203:c.instructions+=1;goto B76b203;
case 0x76b205:goto L76b205;
case 0x76b209:c.instructions+=5;goto B76b209;
case 0x76b20b:c.instructions+=4;goto B76b20b;
case 0x76b20e:c.instructions+=3;goto B76b20e;
case 0x76b20f:c.instructions+=2;goto B76b20f;
case 0x76b211:c.instructions+=1;goto B76b211;
case 0x76b216:goto L76b216;
case 0x76b217:c.instructions+=4;goto B76b217;
case 0x76b218:c.instructions+=3;goto B76b218;
case 0x76b21b:c.instructions+=2;goto B76b21b;
case 0x76b21c:c.instructions+=1;goto B76b21c;
case 0x76b21e:goto L76b21e;
case 0x76b223:c.instructions+=1;goto B76b223;
case 0x76b225:goto L76b225;
case 0x76b226:c.instructions+=2;goto B76b226;
case 0x76b227:c.instructions+=1;goto B76b227;
case 0x76b228:goto L76b228;
case 0x76b229:c.instructions+=15;goto B76b229;
case 0x76b22b:c.instructions+=14;goto B76b22b;
case 0x76b231:c.instructions+=13;goto B76b231;
case 0x76b236:c.instructions+=12;goto B76b236;
case 0x76b239:c.instructions+=11;goto B76b239;
case 0x76b23c:c.instructions+=10;goto B76b23c;
case 0x76b23f:c.instructions+=9;goto B76b23f;
case 0x76b241:c.instructions+=8;goto B76b241;
case 0x76b242:c.instructions+=7;goto B76b242;
case 0x76b245:c.instructions+=6;goto B76b245;
case 0x76b247:c.instructions+=5;goto B76b247;
case 0x76b24a:c.instructions+=4;goto B76b24a;
case 0x76b24d:c.instructions+=3;goto B76b24d;
case 0x76b250:c.instructions+=2;goto B76b250;
case 0x76b253:c.instructions+=1;goto B76b253;
case 0x76b259:goto L76b259;
case 0x76b25a:c.instructions+=2;goto B76b25a;
case 0x76b25b:c.instructions+=1;goto B76b25b;
case 0x76b25d:goto L76b25d;
case 0x76b260:goto L76b260;
case 0x76b262:c.instructions+=4;goto B76b262;
case 0x76b263:c.instructions+=3;goto B76b263;
case 0x76b266:c.instructions+=2;goto B76b266;
case 0x76b26a:c.instructions+=1;goto B76b26a;
case 0x76b270:goto L76b270;
case 0x76b272:c.instructions+=3;goto B76b272;
case 0x76b273:c.instructions+=2;goto B76b273;
case 0x76b276:c.instructions+=1;goto B76b276;
case 0x76b278:goto L76b278;
case 0x76b27c:c.instructions+=1;goto B76b27c;
case 0x76b27e:goto L76b27e;
case 0x76b281:c.instructions+=3;goto B76b281;
case 0x76b288:c.instructions+=2;goto B76b288;
case 0x76b28b:c.instructions+=1;goto B76b28b;
case 0x76b28d:goto L76b28d;
case 0x76b28f:goto L76b28f;
case 0x76b297:c.instructions+=6;goto B76b297;
case 0x76b299:c.instructions+=5;goto B76b299;
case 0x76b29c:c.instructions+=4;goto B76b29c;
case 0x76b29d:c.instructions+=3;goto B76b29d;
case 0x76b29f:c.instructions+=2;goto B76b29f;
case 0x76b2a2:c.instructions+=1;goto B76b2a2;
case 0x76b2a8:goto L76b2a8;
case 0x76b2af:goto L76b2af;
case 0x76b2b1:c.instructions+=8;goto B76b2b1;
case 0x76b2b5:c.instructions+=7;goto B76b2b5;
case 0x76b2b8:c.instructions+=6;goto B76b2b8;
case 0x76b2bb:c.instructions+=5;goto B76b2bb;
case 0x76b2be:c.instructions+=4;goto B76b2be;
case 0x76b2c1:c.instructions+=3;goto B76b2c1;
case 0x76b2c4:c.instructions+=2;goto B76b2c4;
case 0x76b2c7:c.instructions+=1;goto B76b2c7;
case 0x76b2cc:goto L76b2cc;
case 0x76b2cf:c.instructions+=2;goto B76b2cf;
case 0x76b2d1:c.instructions+=1;goto B76b2d1;
case 0x76b2d3:goto L76b2d3;
case 0x76b2d6:c.instructions+=1;goto B76b2d6;
case 0x76b2d8:goto L76b2d8;
case 0x76b2db:c.instructions+=1;goto B76b2db;
case 0x76b2dd:goto L76b2dd;
case 0x76b2df:c.instructions+=1;goto B76b2df;
case 0x76b2e1:goto L76b2e1;
case 0x76b2e4:c.instructions+=1;goto B76b2e4;
case 0x76b2ea:goto L76b2ea;
case 0x76b2ee:c.instructions+=1;goto B76b2ee;
case 0x76b2f3:goto L76b2f3;
case 0x76b2f7:c.instructions+=1;goto B76b2f7;
case 0x76b2fc:goto L76b2fc;
case 0x76b300:c.instructions+=1;goto B76b300;
case 0x76b305:goto L76b305;
case 0x76b309:c.instructions+=1;goto B76b309;
case 0x76b30e:goto L76b30e;
case 0x76b311:c.instructions+=1;goto B76b311;
case 0x76b316:goto L76b316;
case 0x76b31a:c.instructions+=1;goto B76b31a;
case 0x76b31c:goto L76b31c;
case 0x76b320:c.instructions+=5;goto B76b320;
case 0x76b323:c.instructions+=4;goto B76b323;
case 0x76b326:c.instructions+=3;goto B76b326;
case 0x76b328:c.instructions+=2;goto B76b328;
case 0x76b32b:c.instructions+=1;goto B76b32b;
case 0x76b331:goto L76b331;
case 0x76b335:c.instructions+=2;goto B76b335;
case 0x76b338:c.instructions+=1;goto B76b338;
case 0x76b33d:goto L76b33d;
case 0x76b340:c.instructions+=5;goto B76b340;
case 0x76b343:c.instructions+=4;goto B76b343;
case 0x76b346:c.instructions+=3;goto B76b346;
case 0x76b34a:c.instructions+=2;goto B76b34a;
case 0x76b34d:c.instructions+=1;goto B76b34d;
case 0x76b352:goto L76b352;
case 0x76b356:c.instructions+=1;goto B76b356;
case 0x76b35b:goto L76b35b;
case 0x76b35f:c.instructions+=1;goto B76b35f;
case 0x76b361:goto L76b361;
case 0x76b365:c.instructions+=5;goto B76b365;
case 0x76b368:c.instructions+=4;goto B76b368;
case 0x76b36b:c.instructions+=3;goto B76b36b;
case 0x76b36d:c.instructions+=2;goto B76b36d;
case 0x76b370:c.instructions+=1;goto B76b370;
case 0x76b376:goto L76b376;
case 0x76b37a:c.instructions+=1;goto B76b37a;
case 0x76b37f:goto L76b37f;
case 0x76b382:c.instructions+=5;goto B76b382;
case 0x76b385:c.instructions+=4;goto B76b385;
case 0x76b388:c.instructions+=3;goto B76b388;
case 0x76b38c:c.instructions+=2;goto B76b38c;
case 0x76b38f:c.instructions+=1;goto B76b38f;
case 0x76b394:goto L76b394;
case 0x76b397:c.instructions+=2;goto B76b397;
case 0x76b39a:c.instructions+=1;goto B76b39a;
case 0x76b39c:goto L76b39c;
case 0x76b39f:c.instructions+=1;goto B76b39f;
case 0x76b3a1:goto L76b3a1;
case 0x76b3a4:c.instructions+=1;goto B76b3a4;
case 0x76b3a6:goto L76b3a6;
case 0x76b3a9:c.instructions+=1;goto B76b3a9;
case 0x76b3af:goto L76b3af;
case 0x76b3b3:c.instructions+=1;goto B76b3b3;
case 0x76b3b8:goto L76b3b8;
case 0x76b3bc:c.instructions+=1;goto B76b3bc;
case 0x76b3c1:goto L76b3c1;
case 0x76b3c4:c.instructions+=1;goto B76b3c4;
case 0x76b3c9:goto L76b3c9;
case 0x76b3cc:c.instructions+=3;goto B76b3cc;
case 0x76b3cf:c.instructions+=2;goto B76b3cf;
case 0x76b3d3:c.instructions+=1;goto B76b3d3;
case 0x76b3d5:goto L76b3d5;
case 0x76b3d8:c.instructions+=2;goto B76b3d8;
case 0x76b3dd:c.instructions+=1;goto B76b3dd;
case 0x76b3df:goto L76b3df;
case 0x76b3e3:c.instructions+=2;goto B76b3e3;
case 0x76b3e7:c.instructions+=1;goto B76b3e7;
case 0x76b3ec:goto L76b3ec;
case 0x76b3f0:c.instructions+=1;goto B76b3f0;
case 0x76b3f2:goto L76b3f2;
case 0x76b3f5:c.instructions+=2;goto B76b3f5;
case 0x76b3fa:c.instructions+=1;goto B76b3fa;
case 0x76b3fc:goto L76b3fc;
case 0x76b400:c.instructions+=2;goto B76b400;
case 0x76b404:c.instructions+=1;goto B76b404;
case 0x76b409:goto L76b409;
case 0x76b40d:c.instructions+=1;goto B76b40d;
case 0x76b413:goto L76b413;
case 0x76b417:c.instructions+=1;goto B76b417;
case 0x76b41d:goto L76b41d;
case 0x76b421:c.instructions+=1;goto B76b421;
case 0x76b427:goto L76b427;
case 0x76b42b:c.instructions+=1;goto B76b42b;
case 0x76b431:goto L76b431;
case 0x76b435:c.instructions+=1;goto B76b435;
case 0x76b43b:goto L76b43b;
case 0x76b43f:c.instructions+=1;goto B76b43f;
case 0x76b445:goto L76b445;
case 0x76b449:c.instructions+=5;goto B76b449;
case 0x76b44c:c.instructions+=4;goto B76b44c;
case 0x76b44d:c.instructions+=3;goto B76b44d;
case 0x76b450:c.instructions+=2;goto B76b450;
case 0x76b457:c.instructions+=1;goto B76b457;
case 0x76b45c:goto L76b45c;
case 0x76b461:goto L76b461;
case 0x76b464:c.instructions+=2;goto B76b464;
case 0x76b467:c.instructions+=1;goto B76b467;
case 0x76b46d:goto L76b46d;
case 0x76b470:c.instructions+=1;goto B76b470;
case 0x76b476:goto L76b476;
case 0x76b479:c.instructions+=1;goto B76b479;
case 0x76b47f:goto L76b47f;
case 0x76b485:goto L76b485;
case 0x76b488:c.instructions+=1;goto B76b488;
case 0x76b48e:goto L76b48e;
case 0x76b490:c.instructions+=1;goto B76b490;
case 0x76b496:goto L76b496;
case 0x76b498:c.instructions+=1;goto B76b498;
case 0x76b49a:goto L76b49a;
case 0x76b49d:c.instructions+=1;goto B76b49d;
case 0x76b4a3:goto L76b4a3;
case 0x76b4a9:c.instructions+=1;goto B76b4a9;
case 0x76b4ab:goto L76b4ab;
case 0x76b4ae:goto L76b4ae;
case 0x76b4b1:c.instructions+=2;goto B76b4b1;
case 0x76b4b4:c.instructions+=1;goto B76b4b4;
case 0x76b4b6:goto L76b4b6;
case 0x76b4bb:goto L76b4bb;
case 0x76b4bf:c.instructions+=5;goto B76b4bf;
case 0x76b4c3:c.instructions+=4;goto B76b4c3;
case 0x76b4c6:c.instructions+=3;goto B76b4c6;
case 0x76b4c9:c.instructions+=2;goto B76b4c9;
case 0x76b4cc:c.instructions+=1;goto B76b4cc;
case 0x76b4d2:goto L76b4d2;
case 0x76b4d4:c.instructions+=1;goto B76b4d4;
case 0x76b4d6:goto L76b4d6;
case 0x76b4db:c.instructions+=1;goto B76b4db;
case 0x76b4de:goto L76b4de;
case 0x76b4e2:c.instructions+=3;goto B76b4e2;
case 0x76b4e4:c.instructions+=2;goto B76b4e4;
case 0x76b4e7:c.instructions+=1;goto B76b4e7;
case 0x76b4ed:goto L76b4ed;
case 0x76b4ef:c.instructions+=2;goto B76b4ef;
case 0x76b4f1:c.instructions+=1;goto B76b4f1;
case 0x76b4f7:goto L76b4f7;
case 0x76b4fd:c.instructions+=3;goto B76b4fd;
case 0x76b500:c.instructions+=2;goto B76b500;
case 0x76b505:c.instructions+=1;goto B76b505;
case 0x76b507:goto L76b507;
case 0x76b508:goto L76b508;
case 0x76b509:c.instructions+=3;goto B76b509;
case 0x76b50c:c.instructions+=2;goto B76b50c;
case 0x76b50f:c.instructions+=1;goto B76b50f;
case 0x76b511:goto L76b511;
case 0x76b516:goto L76b516;
case 0x76b51d:c.instructions+=1;goto B76b51d;
case 0x76b51f:goto L76b51f;
case 0x76b523:c.instructions+=4;goto B76b523;
case 0x76b527:c.instructions+=3;goto B76b527;
case 0x76b52d:c.instructions+=2;goto B76b52d;
case 0x76b530:c.instructions+=1;goto B76b530;
case 0x76b536:goto L76b536;
case 0x76b53d:c.instructions+=1;goto B76b53d;
case 0x76b542:goto L76b542;
case 0x76b548:c.instructions+=1;goto B76b548;
case 0x76b54a:goto L76b54a;
case 0x76b54d:goto L76b54d;
case 0x76b551:c.instructions+=8;goto B76b551;
case 0x76b554:c.instructions+=7;goto B76b554;
case 0x76b558:c.instructions+=6;goto B76b558;
case 0x76b55a:c.instructions+=5;goto B76b55a;
case 0x76b55b:c.instructions+=4;goto B76b55b;
case 0x76b55f:c.instructions+=3;goto B76b55f;
case 0x76b562:c.instructions+=2;goto B76b562;
case 0x76b565:c.instructions+=1;goto B76b565;
case 0x76b567:goto L76b567;
case 0x76b56d:c.instructions+=7;goto B76b56d;
case 0x76b571:c.instructions+=6;goto B76b571;
case 0x76b574:c.instructions+=5;goto B76b574;
case 0x76b577:c.instructions+=4;goto B76b577;
case 0x76b578:c.instructions+=3;goto B76b578;
case 0x76b57e:c.instructions+=2;goto B76b57e;
case 0x76b57f:c.instructions+=1;goto B76b57f;
case 0x76b584:goto L76b584;
case 0x76b587:c.instructions+=2;goto B76b587;
case 0x76b589:c.instructions+=1;goto B76b589;
case 0x76b58b:goto L76b58b;
case 0x76b58e:c.instructions+=1;goto B76b58e;
case 0x76b590:goto L76b590;
case 0x76b593:c.instructions+=1;goto B76b593;
case 0x76b595:goto L76b595;
case 0x76b598:c.instructions+=1;goto B76b598;
case 0x76b59a:goto L76b59a;
case 0x76b59b:c.instructions+=1;goto B76b59b;
case 0x76b5a1:goto L76b5a1;
case 0x76b5a5:goto L76b5a5;
case 0x76b5ac:goto L76b5ac;
case 0x76b5af:c.instructions+=3;goto B76b5af;
case 0x76b5b4:c.instructions+=2;goto B76b5b4;
case 0x76b5b6:c.instructions+=1;goto B76b5b6;
case 0x76b5bc:goto L76b5bc;
case 0x76b5bf:c.instructions+=5;goto B76b5bf;
case 0x76b5c1:c.instructions+=4;goto B76b5c1;
case 0x76b5c4:c.instructions+=3;goto B76b5c4;
case 0x76b5c7:c.instructions+=2;goto B76b5c7;
case 0x76b5ca:c.instructions+=1;goto B76b5ca;
case 0x76b5cf:goto L76b5cf;
case 0x76b5d6:goto L76b5d6;
case 0x76b5dc:c.instructions+=3;goto B76b5dc;
case 0x76b5df:c.instructions+=2;goto B76b5df;
case 0x76b5e2:c.instructions+=1;goto B76b5e2;
case 0x76b5e7:goto L76b5e7;
case 0x76b5eb:c.instructions+=4;goto B76b5eb;
case 0x76b5ee:c.instructions+=3;goto B76b5ee;
case 0x76b5f1:c.instructions+=2;goto B76b5f1;
case 0x76b5f3:c.instructions+=1;goto B76b5f3;
case 0x76b5f5:goto L76b5f5;
case 0x76b5f8:c.instructions+=2;goto B76b5f8;
case 0x76b5fa:c.instructions+=1;goto B76b5fa;
case 0x76b5fc:goto L76b5fc;
case 0x76b600:c.instructions+=3;goto B76b600;
case 0x76b603:c.instructions+=2;goto B76b603;
case 0x76b606:c.instructions+=1;goto B76b606;
case 0x76b608:goto L76b608;
case 0x76b609:c.instructions+=4;goto B76b609;
case 0x76b60b:c.instructions+=3;goto B76b60b;
case 0x76b60d:c.instructions+=2;goto B76b60d;
case 0x76b614:c.instructions+=1;goto B76b614;
case 0x76b619:goto L76b619;
case 0x76b61d:c.instructions+=1;goto B76b61d;
case 0x76b622:goto L76b622;
case 0x76b627:c.instructions+=3;goto B76b627;
case 0x76b62a:c.instructions+=2;goto B76b62a;
case 0x76b62b:c.instructions+=1;goto B76b62b;
case 0x76b630:goto L76b630;
case 0x76b632:goto L76b632;
case 0x76b636:c.instructions+=1;goto B76b636;
case 0x76b638:goto L76b638;
case 0x76b63f:c.instructions+=1;goto B76b63f;
case 0x76b641:goto L76b641;
case 0x76b646:c.instructions+=2;goto B76b646;
case 0x76b649:c.instructions+=1;goto B76b649;
case 0x76b64b:goto L76b64b;
case 0x76b64e:goto L76b64e;
case 0x76b653:c.instructions+=2;goto B76b653;
case 0x76b656:c.instructions+=1;goto B76b656;
case 0x76b658:goto L76b658;
case 0x76b65b:c.instructions+=3;goto B76b65b;
case 0x76b660:c.instructions+=2;goto B76b660;
case 0x76b661:c.instructions+=1;goto B76b661;
case 0x76b666:goto L76b666;
case 0x76b668:c.instructions+=3;goto B76b668;
case 0x76b669:c.instructions+=2;goto B76b669;
case 0x76b66c:c.instructions+=1;goto B76b66c;
case 0x76b66e:goto L76b66e;
case 0x76b671:c.instructions+=2;goto B76b671;
case 0x76b673:c.instructions+=1;goto B76b673;
case 0x76b675:goto L76b675;
case 0x76b678:goto L76b678;
case 0x76b67b:c.instructions+=14;goto B76b67b;
case 0x76b67d:c.instructions+=13;goto B76b67d;
case 0x76b680:c.instructions+=12;goto B76b680;
case 0x76b683:c.instructions+=11;goto B76b683;
case 0x76b686:c.instructions+=10;goto B76b686;
case 0x76b689:c.instructions+=9;goto B76b689;
case 0x76b68c:c.instructions+=8;goto B76b68c;
case 0x76b68f:c.instructions+=7;goto B76b68f;
case 0x76b692:c.instructions+=6;goto B76b692;
case 0x76b693:c.instructions+=5;goto B76b693;
case 0x76b696:c.instructions+=4;goto B76b696;
case 0x76b697:c.instructions+=3;goto B76b697;
case 0x76b698:c.instructions+=2;goto B76b698;
case 0x76b69b:c.instructions+=1;goto B76b69b;
case 0x76b6a1:goto L76b6a1;
case 0x76b6a4:c.instructions+=3;goto B76b6a4;
case 0x76b6a7:c.instructions+=2;goto B76b6a7;
case 0x76b6ad:c.instructions+=1;goto B76b6ad;
case 0x76b6af:goto L76b6af;
case 0x76b6b3:c.instructions+=1;goto B76b6b3;
case 0x76b6b5:goto L76b6b5;
case 0x76b6b6:c.instructions+=1;goto B76b6b6;
case 0x76b6bc:goto L76b6bc;
case 0x76b6bd:goto L76b6bd;
case 0x76b6c1:c.instructions+=1;goto B76b6c1;
case 0x76b6c3:goto L76b6c3;
case 0x76b6c5:c.instructions+=1;goto B76b6c5;
case 0x76b6c7:goto L76b6c7;
case 0x76b6c8:c.instructions+=1;goto B76b6c8;
case 0x76b6ce:goto L76b6ce;
case 0x76b6cf:goto L76b6cf;
case 0x76b6d2:c.instructions+=1;goto B76b6d2;
case 0x76b6d4:goto L76b6d4;
case 0x76b6d8:c.instructions+=2;goto B76b6d8;
case 0x76b6d9:c.instructions+=1;goto B76b6d9;
case 0x76b6dc:goto L76b6dc;
case 0x76b6dd:goto L76b6dd;
case 0x76b6e2:goto L76b6e2;
case 0x76b6e3:c.instructions+=1;goto B76b6e3;
case 0x76b6e8:goto L76b6e8;
case 0x76b6eb:c.instructions+=1;goto B76b6eb;
case 0x76b6f1:goto L76b6f1;
case 0x76b6f4:c.instructions+=1;goto B76b6f4;
case 0x76b6fa:goto L76b6fa;
case 0x76b6fb:c.instructions+=1;goto B76b6fb;
case 0x76b701:goto L76b701;
case 0x76b702:c.instructions+=1;goto B76b702;
case 0x76b704:goto L76b704;
case 0x76b707:c.instructions+=1;goto B76b707;
case 0x76b70d:goto L76b70d;
case 0x76b70f:c.instructions+=1;goto B76b70f;
case 0x76b715:goto L76b715;
case 0x76b718:c.instructions+=1;goto B76b718;
case 0x76b71e:goto L76b71e;
case 0x76b725:c.instructions+=1;goto B76b725;
case 0x76b727:goto L76b727;
case 0x76b729:c.instructions+=1;goto B76b729;
case 0x76b72b:goto L76b72b;
case 0x76b730:c.instructions+=1;goto B76b730;
case 0x76b733:goto L76b733;
case 0x76b736:c.instructions+=2;goto B76b736;
case 0x76b73d:c.instructions+=1;goto B76b73d;
case 0x76b73f:goto L76b73f;
case 0x76b740:c.instructions+=2;goto B76b740;
case 0x76b744:c.instructions+=1;goto B76b744;
case 0x76b746:goto L76b746;
case 0x76b748:goto L76b748;
case 0x76b74a:c.instructions+=1;goto B76b74a;
case 0x76b74c:goto L76b74c;
case 0x76b74f:c.instructions+=2;goto B76b74f;
case 0x76b751:c.instructions+=1;goto B76b751;
case 0x76b756:goto L76b756;
case 0x76b75d:goto L76b75d;
case 0x76b760:goto L76b760;
case 0x76b764:c.instructions+=2;goto B76b764;
case 0x76b76b:c.instructions+=1;goto B76b76b;
case 0x76b771:goto L76b771;
case 0x76b774:c.instructions+=5;goto B76b774;
case 0x76b777:c.instructions+=4;goto B76b777;
case 0x76b77d:c.instructions+=3;goto B76b77d;
case 0x76b781:c.instructions+=2;goto B76b781;
case 0x76b784:c.instructions+=1;goto B76b784;
case 0x76b789:goto L76b789;
case 0x76b78d:c.instructions+=2;goto B76b78d;
case 0x76b794:c.instructions+=1;goto B76b794;
case 0x76b79a:goto L76b79a;
case 0x76b79e:c.instructions+=1;goto B76b79e;
case 0x76b7a3:goto L76b7a3;
case 0x76b7a7:c.instructions+=4;goto B76b7a7;
case 0x76b7ab:c.instructions+=3;goto B76b7ab;
case 0x76b7ae:c.instructions+=2;goto B76b7ae;
case 0x76b7b1:c.instructions+=1;goto B76b7b1;
case 0x76b7b3:goto L76b7b3;
case 0x76b7b7:c.instructions+=2;goto B76b7b7;
case 0x76b7ba:c.instructions+=1;goto B76b7ba;
case 0x76b7bc:goto L76b7bc;
case 0x76b7bf:c.instructions+=1;goto B76b7bf;
case 0x76b7c1:goto L76b7c1;
case 0x76b7c8:c.instructions+=1;goto B76b7c8;
case 0x76b7cd:goto L76b7cd;
case 0x76b7d1:c.instructions+=3;goto B76b7d1;
case 0x76b7d4:c.instructions+=2;goto B76b7d4;
case 0x76b7d7:c.instructions+=1;goto B76b7d7;
case 0x76b7d9:goto L76b7d9;
case 0x76b7dc:c.instructions+=1;goto B76b7dc;
case 0x76b7de:goto L76b7de;
case 0x76b7e2:goto L76b7e2;
case 0x76b7e3:c.instructions+=1;goto B76b7e3;
case 0x76b7e5:goto L76b7e5;
case 0x76b7e9:c.instructions+=1;goto B76b7e9;
case 0x76b7eb:goto L76b7eb;
case 0x76b7ee:c.instructions+=2;goto B76b7ee;
case 0x76b7f1:c.instructions+=1;goto B76b7f1;
case 0x76b7f3:goto L76b7f3;
case 0x76b7f5:goto L76b7f5;
case 0x76b7f8:c.instructions+=1;goto B76b7f8;
case 0x76b7fa:goto L76b7fa;
case 0x76b7fc:c.instructions+=1;goto B76b7fc;
case 0x76b7fe:goto L76b7fe;
case 0x76b800:goto L76b800;
case 0x76b802:c.instructions+=1;goto B76b802;
case 0x76b804:goto L76b804;
case 0x76b806:c.instructions+=3;goto B76b806;
case 0x76b809:c.instructions+=2;goto B76b809;
case 0x76b80b:c.instructions+=1;goto B76b80b;
case 0x76b80f:goto L76b80f;
case 0x76b812:c.instructions+=3;goto B76b812;
case 0x76b814:c.instructions+=2;goto B76b814;
case 0x76b816:c.instructions+=1;goto B76b816;
case 0x76b818:goto L76b818;
case 0x76b81a:goto L76b81a;
case 0x76b81e:c.instructions+=1;goto B76b81e;
case 0x76b820:goto L76b820;
case 0x76b827:c.instructions+=1;goto B76b827;
case 0x76b829:goto L76b829;
case 0x76b82d:c.instructions+=3;goto B76b82d;
case 0x76b832:c.instructions+=2;goto B76b832;
case 0x76b835:c.instructions+=1;goto B76b835;
case 0x76b837:goto L76b837;
case 0x76b83a:goto L76b83a;
case 0x76b83c:c.instructions+=2;goto B76b83c;
case 0x76b83e:c.instructions+=1;goto B76b83e;
case 0x76b840:goto L76b840;
case 0x76b844:goto L76b844;
case 0x76b84a:goto L76b84a;
case 0x76b84d:c.instructions+=3;goto B76b84d;
case 0x76b850:c.instructions+=2;goto B76b850;
case 0x76b852:c.instructions+=1;goto B76b852;
case 0x76b854:goto L76b854;
case 0x76b856:c.instructions+=2;goto B76b856;
case 0x76b858:c.instructions+=1;goto B76b858;
case 0x76b85a:goto L76b85a;
case 0x76b85d:c.instructions+=6;goto B76b85d;
case 0x76b85e:c.instructions+=5;goto B76b85e;
case 0x76b85f:c.instructions+=4;goto B76b85f;
case 0x76b860:c.instructions+=3;goto B76b860;
case 0x76b861:c.instructions+=2;goto B76b861;
case 0x76b862:c.instructions+=1;goto B76b862;
case 0x76b867:goto L76b867;
case 0x76b86a:c.instructions+=5;goto B76b86a;
case 0x76b86d:c.instructions+=4;goto B76b86d;
case 0x76b870:c.instructions+=3;goto B76b870;
case 0x76b872:c.instructions+=2;goto B76b872;
case 0x76b874:c.instructions+=1;goto B76b874;
case 0x76b876:goto L76b876;
case 0x76b879:goto L76b879;
case 0x76b87b:c.instructions+=2;goto B76b87b;
case 0x76b87c:c.instructions+=1;goto B76b87c;
case 0x76b87e:goto L76b87e;
case 0x76b884:c.instructions+=6;goto B76b884;
case 0x76b886:c.instructions+=5;goto B76b886;
case 0x76b887:c.instructions+=4;goto B76b887;
case 0x76b88b:c.instructions+=3;goto B76b88b;
case 0x76b88e:c.instructions+=2;goto B76b88e;
case 0x76b891:c.instructions+=1;goto B76b891;
case 0x76b893:goto L76b893;
case 0x76b895:c.instructions+=2;goto B76b895;
case 0x76b898:c.instructions+=1;goto B76b898;
case 0x76b89a:goto L76b89a;
case 0x76b89c:c.instructions+=1;goto B76b89c;
case 0x76b89e:goto L76b89e;
case 0x76b8a1:c.instructions+=3;goto B76b8a1;
case 0x76b8a4:c.instructions+=2;goto B76b8a4;
case 0x76b8a7:c.instructions+=1;goto B76b8a7;
case 0x76b8a8:goto L76b8a8;
case 0x76b8ab:goto L76b8ab;
case 0x76b8af:c.instructions+=1;goto B76b8af;
case 0x76b8b5:goto L76b8b5;
case 0x76b8b8:c.instructions+=2;goto B76b8b8;
case 0x76b8ba:c.instructions+=1;goto B76b8ba;
case 0x76b8bc:goto L76b8bc;
case 0x76b8bf:c.instructions+=1;goto B76b8bf;
case 0x76b8c1:goto L76b8c1;
case 0x76b8c7:c.instructions+=1;goto B76b8c7;
case 0x76b8c9:goto L76b8c9;
case 0x76b8cb:c.instructions+=1;goto B76b8cb;
case 0x76b8cd:goto L76b8cd;
case 0x76b8d3:c.instructions+=1;goto B76b8d3;
case 0x76b8d5:goto L76b8d5;
case 0x76b8d7:c.instructions+=1;goto B76b8d7;
case 0x76b8d9:goto L76b8d9;
case 0x76b8df:goto L76b8df;
case 0x76b8e6:goto L76b8e6;
case 0x76b8e9:c.instructions+=4;goto B76b8e9;
case 0x76b8ec:c.instructions+=3;goto B76b8ec;
case 0x76b8ef:c.instructions+=2;goto B76b8ef;
case 0x76b8f3:c.instructions+=1;goto B76b8f3;
case 0x76b8f5:goto L76b8f5;
case 0x76b8f8:c.instructions+=4;goto B76b8f8;
case 0x76b8fb:c.instructions+=3;goto B76b8fb;
case 0x76b8fc:c.instructions+=2;goto B76b8fc;
case 0x76b8fe:c.instructions+=1;goto B76b8fe;
case 0x76b903:goto L76b903;
case 0x76b906:goto L76b906;
case 0x76b909:c.instructions+=4;goto B76b909;
case 0x76b90c:c.instructions+=3;goto B76b90c;
case 0x76b90f:c.instructions+=2;goto B76b90f;
case 0x76b912:c.instructions+=1;goto B76b912;
case 0x76b917:goto L76b917;
case 0x76b91b:c.instructions+=2;goto B76b91b;
case 0x76b91c:c.instructions+=1;goto B76b91c;
case 0x76b91e:goto L76b91e;
case 0x76b922:c.instructions+=1;goto B76b922;
case 0x76b924:goto L76b924;
case 0x76b925:c.instructions+=4;goto B76b925;
case 0x76b926:c.instructions+=3;goto B76b926;
case 0x76b928:c.instructions+=2;goto B76b928;
case 0x76b92b:c.instructions+=1;goto B76b92b;
case 0x76b930:goto L76b930;
case 0x76b933:goto L76b933;
case 0x76b937:c.instructions+=1;goto B76b937;
case 0x76b939:goto L76b939;
case 0x76b93c:c.instructions+=2;goto B76b93c;
case 0x76b93e:c.instructions+=1;goto B76b93e;
case 0x76b940:goto L76b940;
case 0x76b943:c.instructions+=1;goto B76b943;
case 0x76b946:goto L76b946;
case 0x76b94c:c.instructions+=5;goto B76b94c;
case 0x76b94f:c.instructions+=4;goto B76b94f;
case 0x76b952:c.instructions+=3;goto B76b952;
case 0x76b953:c.instructions+=2;goto B76b953;
case 0x76b954:c.instructions+=1;goto B76b954;
case 0x76b959:goto L76b959;
case 0x76b95c:c.instructions+=3;goto B76b95c;
case 0x76b95e:c.instructions+=2;goto B76b95e;
case 0x76b961:c.instructions+=1;goto B76b961;
case 0x76b963:goto L76b963;
case 0x76b966:c.instructions+=3;goto B76b966;
case 0x76b969:c.instructions+=2;goto B76b969;
case 0x76b96c:c.instructions+=1;goto B76b96c;
case 0x76b971:goto L76b971;
case 0x76b974:c.instructions+=3;goto B76b974;
case 0x76b978:c.instructions+=2;goto B76b978;
case 0x76b979:c.instructions+=1;goto B76b979;
case 0x76b97b:goto L76b97b;
case 0x76b97d:goto L76b97d;
case 0x76b980:c.instructions+=3;goto B76b980;
case 0x76b983:c.instructions+=2;goto B76b983;
case 0x76b986:c.instructions+=1;goto B76b986;
case 0x76b98b:goto L76b98b;
case 0x76b98c:goto L76b98c;
case 0x76b990:c.instructions+=1;goto B76b990;
case 0x76b992:goto L76b992;
case 0x76b995:c.instructions+=4;goto B76b995;
case 0x76b998:c.instructions+=3;goto B76b998;
case 0x76b999:c.instructions+=2;goto B76b999;
case 0x76b99b:c.instructions+=1;goto B76b99b;
case 0x76b9a0:goto L76b9a0;
case 0x76b9a3:goto L76b9a3;
case 0x76b9a7:c.instructions+=1;goto B76b9a7;
case 0x76b9a9:goto L76b9a9;
case 0x76b9ac:c.instructions+=1;goto B76b9ac;
case 0x76b9b1:goto L76b9b1;
case 0x76b9b5:goto L76b9b5;
case 0x76b9b6:goto L76b9b6;
case 0x76b9b9:c.instructions+=3;goto B76b9b9;
case 0x76b9bc:c.instructions+=2;goto B76b9bc;
case 0x76b9bf:c.instructions+=1;goto B76b9bf;
case 0x76b9c5:goto L76b9c5;
case 0x76b9c6:c.instructions+=1;goto B76b9c6;
case 0x76b9c7:goto L76b9c7;
case 0x76b9ca:c.instructions+=4;goto B76b9ca;
case 0x76b9cd:c.instructions+=3;goto B76b9cd;
case 0x76b9d0:c.instructions+=2;goto B76b9d0;
case 0x76b9d1:c.instructions+=1;goto B76b9d1;
case 0x76b9d6:goto L76b9d6;
case 0x76b9d7:c.instructions+=1;goto B76b9d7;
case 0x76b9f8:goto L76b9f8;
case 0x76b9f9:c.instructions+=2;goto B76b9f9;
case 0x76b9fb:c.instructions+=1;goto B76b9fb;
case 0x76ba00:goto L76ba00;
case 0x76ba03:c.instructions+=2;goto B76ba03;
case 0x76ba09:c.instructions+=1;goto B76ba09;
case 0x76ba0b:goto L76ba0b;
case 0x76ba10:goto L76ba10;
case 0x76ba14:c.instructions+=1;goto B76ba14;
case 0x76ba16:goto L76ba16;
case 0x76ba18:c.instructions+=2;goto B76ba18;
case 0x76ba19:c.instructions+=1;goto B76ba19;
case 0x76ba1a:goto L76ba1a;
case 0x76ba1d:c.instructions+=7;goto B76ba1d;
case 0x76ba20:c.instructions+=6;goto B76ba20;
case 0x76ba23:c.instructions+=5;goto B76ba23;
case 0x76ba26:c.instructions+=4;goto B76ba26;
case 0x76ba29:c.instructions+=3;goto B76ba29;
case 0x76ba2b:c.instructions+=2;goto B76ba2b;
case 0x76ba2e:c.instructions+=1;goto B76ba2e;
case 0x76ba33:goto L76ba33;
case 0x76ba36:c.instructions+=2;goto B76ba36;
case 0x76ba38:c.instructions+=1;goto B76ba38;
case 0x76ba3a:goto L76ba3a;
case 0x76ba3f:c.instructions+=2;goto B76ba3f;
case 0x76ba40:c.instructions+=1;goto B76ba40;
case 0x76ba41:goto L76ba41;
case 0x76ba44:c.instructions+=2;goto B76ba44;
case 0x76ba45:c.instructions+=1;goto B76ba45;
case 0x76ba46:goto L76ba46;
case 0x76ba47:c.instructions+=9;goto B76ba47;
case 0x76ba48:c.instructions+=8;goto B76ba48;
case 0x76ba49:c.instructions+=7;goto B76ba49;
case 0x76ba4a:c.instructions+=6;goto B76ba4a;
case 0x76ba50:c.instructions+=5;goto B76ba50;
case 0x76ba52:c.instructions+=4;goto B76ba52;
case 0x76ba53:c.instructions+=3;goto B76ba53;
case 0x76ba55:c.instructions+=2;goto B76ba55;
case 0x76ba57:c.instructions+=1;goto B76ba57;
case 0x76ba59:goto L76ba59;
case 0x76ba5f:goto L76ba5f;
case 0x76ba60:c.instructions+=8;goto B76ba60;
case 0x76ba61:c.instructions+=7;goto B76ba61;
case 0x76ba62:c.instructions+=6;goto B76ba62;
case 0x76ba63:c.instructions+=5;goto B76ba63;
case 0x76ba65:c.instructions+=4;goto B76ba65;
case 0x76ba66:c.instructions+=3;goto B76ba66;
case 0x76ba67:c.instructions+=2;goto B76ba67;
case 0x76ba68:c.instructions+=1;goto B76ba68;
case 0x76ba6a:goto L76ba6a;
case 0x76ba6c:c.instructions+=2;goto B76ba6c;
case 0x76ba6e:c.instructions+=1;goto B76ba6e;
case 0x76ba70:goto L76ba70;
case 0x76ba71:c.instructions+=1;goto B76ba71;
case 0x76ba76:goto L76ba76;
case 0x76ba78:c.instructions+=3;goto B76ba78;
case 0x76ba79:c.instructions+=2;goto B76ba79;
case 0x76ba7d:c.instructions+=1;goto B76ba7d;
case 0x76ba7f:goto L76ba7f;
case 0x76ba80:c.instructions+=8;goto B76ba80;
case 0x76ba81:c.instructions+=7;goto B76ba81;
case 0x76ba82:c.instructions+=6;goto B76ba82;
case 0x76ba83:c.instructions+=5;goto B76ba83;
case 0x76ba85:c.instructions+=4;goto B76ba85;
case 0x76ba87:c.instructions+=3;goto B76ba87;
case 0x76ba88:c.instructions+=2;goto B76ba88;
case 0x76ba89:c.instructions+=1;goto B76ba89;
case 0x76ba8b:goto L76ba8b;
case 0x76ba8d:c.instructions+=1;goto B76ba8d;
case 0x76ba8f:goto L76ba8f;
case 0x76ba90:c.instructions+=2;goto B76ba90;
case 0x76ba94:c.instructions+=1;goto B76ba94;
case 0x76ba99:goto L76ba99;
case 0x76ba9c:c.instructions+=5;goto B76ba9c;
case 0x76ba9e:c.instructions+=4;goto B76ba9e;
case 0x76baa0:c.instructions+=3;goto B76baa0;
case 0x76baa1:c.instructions+=2;goto B76baa1;
case 0x76baa2:c.instructions+=1;goto B76baa2;
case 0x76baa4:goto L76baa4;
case 0x76baa6:goto L76baa6;
case 0x76baa7:c.instructions+=5;goto B76baa7;
case 0x76baa8:c.instructions+=4;goto B76baa8;
case 0x76baa9:c.instructions+=3;goto B76baa9;
case 0x76baaa:c.instructions+=2;goto B76baaa;
case 0x76baab:c.instructions+=1;goto B76baab;
case 0x76baac:goto L76baac;
case 0x76baaf:c.instructions+=1;goto B76baaf;
case 0x76bab1:goto L76bab1;
case 0x76bab2:c.instructions+=7;goto B76bab2;
case 0x76bab4:c.instructions+=6;goto B76bab4;
case 0x76bab7:c.instructions+=5;goto B76bab7;
case 0x76bab8:c.instructions+=4;goto B76bab8;
case 0x76babb:c.instructions+=3;goto B76babb;
case 0x76bac1:c.instructions+=2;goto B76bac1;
case 0x76bac4:c.instructions+=1;goto B76bac4;
case 0x76baca:goto L76baca;
case 0x76bad0:c.instructions+=1;goto B76bad0;
case 0x76bad6:goto L76bad6;
case 0x76bad7:c.instructions+=11;goto B76bad7;
case 0x76bad8:c.instructions+=10;goto B76bad8;
case 0x76bada:c.instructions+=9;goto B76bada;
case 0x76badc:c.instructions+=8;goto B76badc;
case 0x76badd:c.instructions+=7;goto B76badd;
case 0x76bade:c.instructions+=6;goto B76bade;
case 0x76bae0:c.instructions+=5;goto B76bae0;
case 0x76bae3:c.instructions+=4;goto B76bae3;
case 0x76baea:c.instructions+=3;goto B76baea;
case 0x76baed:c.instructions+=2;goto B76baed;
case 0x76baef:c.instructions+=1;goto B76baef;
case 0x76baf1:goto L76baf1;
case 0x76baf3:c.instructions+=6;goto B76baf3;
case 0x76baf5:c.instructions+=5;goto B76baf5;
case 0x76baf6:c.instructions+=4;goto B76baf6;
case 0x76baf7:c.instructions+=3;goto B76baf7;
case 0x76baf9:c.instructions+=2;goto B76baf9;
case 0x76bafb:c.instructions+=1;goto B76bafb;
case 0x76bafd:goto L76bafd;
case 0x76bb03:c.instructions+=5;goto B76bb03;
case 0x76bb04:c.instructions+=4;goto B76bb04;
case 0x76bb09:c.instructions+=3;goto B76bb09;
case 0x76bb0b:c.instructions+=2;goto B76bb0b;
case 0x76bb0d:c.instructions+=1;goto B76bb0d;
case 0x76bb0f:goto L76bb0f;
case 0x76bb12:c.instructions+=1;goto B76bb12;
case 0x76bb14:goto L76bb14;
case 0x76bb15:goto L76bb15;
case 0x76bb1a:goto L76bb1a;
case 0x76bb20:c.instructions+=42;goto B76bb20;
case 0x76bb21:c.instructions+=41;goto B76bb21;
case 0x76bb26:c.instructions+=40;goto B76bb26;
case 0x76bb28:c.instructions+=39;goto B76bb28;
case 0x76bb2b:c.instructions+=38;goto B76bb2b;
case 0x76bb2d:c.instructions+=37;goto B76bb2d;
case 0x76bb30:c.instructions+=36;goto B76bb30;
case 0x76bb33:c.instructions+=35;goto B76bb33;
case 0x76bb35:c.instructions+=34;goto B76bb35;
case 0x76bb37:c.instructions+=33;goto B76bb37;
case 0x76bb38:c.instructions+=32;goto B76bb38;
case 0x76bb39:c.instructions+=31;goto B76bb39;
case 0x76bb3b:c.instructions+=30;goto B76bb3b;
case 0x76bb3d:c.instructions+=29;goto B76bb3d;
case 0x76bb3e:c.instructions+=28;goto B76bb3e;
case 0x76bb40:c.instructions+=27;goto B76bb40;
case 0x76bb43:c.instructions+=26;goto B76bb43;
case 0x76bb44:c.instructions+=25;goto B76bb44;
case 0x76bb46:c.instructions+=24;goto B76bb46;
case 0x76bb49:c.instructions+=23;goto B76bb49;
case 0x76bb4c:c.instructions+=22;goto B76bb4c;
case 0x76bb4e:c.instructions+=21;goto B76bb4e;
case 0x76bb50:c.instructions+=20;goto B76bb50;
case 0x76bb56:c.instructions+=19;goto B76bb56;
case 0x76bb58:c.instructions+=18;goto B76bb58;
case 0x76bb5a:c.instructions+=17;goto B76bb5a;
case 0x76bb5c:c.instructions+=16;goto B76bb5c;
case 0x76bb5f:c.instructions+=15;goto B76bb5f;
case 0x76bb62:c.instructions+=14;goto B76bb62;
case 0x76bb65:c.instructions+=13;goto B76bb65;
case 0x76bb68:c.instructions+=12;goto B76bb68;
case 0x76bb6b:c.instructions+=11;goto B76bb6b;
case 0x76bb6e:c.instructions+=10;goto B76bb6e;
case 0x76bb70:c.instructions+=9;goto B76bb70;
case 0x76bb73:c.instructions+=8;goto B76bb73;
case 0x76bb79:c.instructions+=7;goto B76bb79;
case 0x76bb7a:c.instructions+=6;goto B76bb7a;
case 0x76bb7e:c.instructions+=5;goto B76bb7e;
case 0x76bb85:c.instructions+=4;goto B76bb85;
case 0x76bb88:c.instructions+=3;goto B76bb88;
case 0x76bb8b:c.instructions+=2;goto B76bb8b;
case 0x76bb8e:c.instructions+=1;goto B76bb8e;
case 0x76bb90:goto L76bb90;
case 0x76bb94:c.instructions+=1;goto B76bb94;
case 0x76bb96:goto L76bb96;
case 0x76bb9d:c.instructions+=1;goto B76bb9d;
case 0x76bb9f:goto L76bb9f;
case 0x76bba2:c.instructions+=2;goto B76bba2;
case 0x76bba3:c.instructions+=1;goto B76bba3;
case 0x76bba8:goto L76bba8;
case 0x76bbaa:c.instructions+=2;goto B76bbaa;
case 0x76bbab:c.instructions+=1;goto B76bbab;
case 0x76bbad:goto L76bbad;
case 0x76bbb3:goto L76bbb3;
case 0x76bbb4:c.instructions+=3;goto B76bbb4;
case 0x76bbb6:c.instructions+=2;goto B76bbb6;
case 0x76bbb7:c.instructions+=1;goto B76bbb7;
case 0x76bbb9:goto L76bbb9;
case 0x76bbbc:goto L76bbbc;
case 0x76bbbd:c.instructions+=2;goto B76bbbd;
case 0x76bbbe:c.instructions+=1;goto B76bbbe;
case 0x76bbbf:goto L76bbbf;
case 0x76bbc0:c.instructions+=4;goto B76bbc0;
case 0x76bbc2:c.instructions+=3;goto B76bbc2;
case 0x76bbc5:c.instructions+=2;goto B76bbc5;
case 0x76bbc7:c.instructions+=1;goto B76bbc7;
case 0x76bbc9:goto L76bbc9;
case 0x76bbcd:c.instructions+=7;goto B76bbcd;
case 0x76bbcf:c.instructions+=6;goto B76bbcf;
case 0x76bbd2:c.instructions+=5;goto B76bbd2;
case 0x76bbd5:c.instructions+=4;goto B76bbd5;
case 0x76bbd6:c.instructions+=3;goto B76bbd6;
case 0x76bbda:c.instructions+=2;goto B76bbda;
case 0x76bbde:c.instructions+=1;goto B76bbde;
case 0x76bbe4:goto L76bbe4;
case 0x76bbe6:c.instructions+=1;goto B76bbe6;
case 0x76bbe8:goto L76bbe8;
case 0x76bbeb:c.instructions+=1;goto B76bbeb;
case 0x76bbed:goto L76bbed;
case 0x76bbef:c.instructions+=3;goto B76bbef;
case 0x76bbf0:c.instructions+=2;goto B76bbf0;
case 0x76bbf1:c.instructions+=1;goto B76bbf1;
case 0x76bbf2:goto L76bbf2;
case 0x76bbf4:c.instructions+=2;goto B76bbf4;
case 0x76bbf5:c.instructions+=1;goto B76bbf5;
case 0x76bbf6:goto L76bbf6;
case 0x76bbf7:c.instructions+=9;goto B76bbf7;
case 0x76bbf9:c.instructions+=8;goto B76bbf9;
case 0x76bbff:c.instructions+=7;goto B76bbff;
case 0x76bc04:c.instructions+=6;goto B76bc04;
case 0x76bc07:c.instructions+=5;goto B76bc07;
case 0x76bc08:c.instructions+=4;goto B76bc08;
case 0x76bc0b:c.instructions+=3;goto B76bc0b;
case 0x76bc0d:c.instructions+=2;goto B76bc0d;
case 0x76bc10:c.instructions+=1;goto B76bc10;
case 0x76bc12:goto L76bc12;
case 0x76bc13:c.instructions+=1;goto B76bc13;
case 0x76bc18:goto L76bc18;
case 0x76bc1a:c.instructions+=2;goto B76bc1a;
case 0x76bc1b:c.instructions+=1;goto B76bc1b;
case 0x76bc1d:goto L76bc1d;
case 0x76bc22:goto L76bc22;
case 0x76bc28:c.instructions+=1;goto B76bc28;
case 0x76bc2d:goto L76bc2d;
case 0x76bc33:goto L76bc33;
case 0x76bc35:goto L76bc35;
case 0x76bc38:c.instructions+=3;goto B76bc38;
case 0x76bc3b:c.instructions+=2;goto B76bc3b;
case 0x76bc3c:c.instructions+=1;goto B76bc3c;
case 0x76bc41:goto L76bc41;
case 0x76bc42:c.instructions+=1;goto B76bc42;
case 0x76bc43:goto L76bc43;
case 0x76bc47:c.instructions+=12;goto B76bc47;
case 0x76bc4a:c.instructions+=11;goto B76bc4a;
case 0x76bc4b:c.instructions+=10;goto B76bc4b;
case 0x76bc51:c.instructions+=9;goto B76bc51;
case 0x76bc52:c.instructions+=8;goto B76bc52;
case 0x76bc57:c.instructions+=7;goto B76bc57;
case 0x76bc5a:c.instructions+=6;goto B76bc5a;
case 0x76bc5d:c.instructions+=5;goto B76bc5d;
case 0x76bc5e:c.instructions+=4;goto B76bc5e;
case 0x76bc61:c.instructions+=3;goto B76bc61;
case 0x76bc65:c.instructions+=2;goto B76bc65;
case 0x76bc69:c.instructions+=1;goto B76bc69;
case 0x76bc6f:goto L76bc6f;
case 0x76bc71:goto L76bc71;
case 0x76bc77:c.instructions+=3;goto B76bc77;
case 0x76bc78:c.instructions+=2;goto B76bc78;
case 0x76bc7d:c.instructions+=1;goto B76bc7d;
case 0x76bc83:goto L76bc83;
case 0x76bc85:c.instructions+=1;goto B76bc85;
case 0x76bc87:goto L76bc87;
case 0x76bc88:c.instructions+=2;goto B76bc88;
case 0x76bc8d:c.instructions+=1;goto B76bc8d;
case 0x76bc8f:goto L76bc8f;
case 0x76bc92:c.instructions+=2;goto B76bc92;
case 0x76bc94:c.instructions+=1;goto B76bc94;
case 0x76bc96:goto L76bc96;
case 0x76bc99:c.instructions+=1;goto B76bc99;
case 0x76bc9b:goto L76bc9b;
case 0x76bc9e:goto L76bc9e;
case 0x76bc9f:c.instructions+=1;goto B76bc9f;
case 0x76bca4:goto L76bca4;
case 0x76bca5:c.instructions+=3;goto B76bca5;
case 0x76bca7:c.instructions+=2;goto B76bca7;
case 0x76bca9:c.instructions+=1;goto B76bca9;
case 0x76bcab:goto L76bcab;
case 0x76bcb0:goto L76bcb0;
case 0x76bcb6:c.instructions+=1;goto B76bcb6;
case 0x76bcbb:goto L76bcbb;
case 0x76bcbe:c.instructions+=1;goto B76bcbe;
case 0x76bcc0:goto L76bcc0;
case 0x76bcc5:goto L76bcc5;
case 0x76bccb:c.instructions+=1;goto B76bccb;
case 0x76bcd0:goto L76bcd0;
case 0x76bcd6:c.instructions+=3;goto B76bcd6;
case 0x76bcd7:c.instructions+=2;goto B76bcd7;
case 0x76bcd8:c.instructions+=1;goto B76bcd8;
case 0x76bcdd:goto L76bcdd;
case 0x76bcde:c.instructions+=2;goto B76bcde;
case 0x76bcdf:c.instructions+=1;goto B76bcdf;
case 0x76bce4:goto L76bce4;
case 0x76bce6:c.instructions+=2;goto B76bce6;
case 0x76bceb:c.instructions+=1;goto B76bceb;
case 0x76bcf0:goto L76bcf0;
case 0x76bcf2:c.instructions+=1;goto B76bcf2;
case 0x76bcf7:goto L76bcf7;
case 0x76bcf8:c.instructions+=5;goto B76bcf8;
case 0x76bcfc:c.instructions+=4;goto B76bcfc;
case 0x76bcff:c.instructions+=3;goto B76bcff;
case 0x76bd02:c.instructions+=2;goto B76bd02;
case 0x76bd04:c.instructions+=1;goto B76bd04;
case 0x76bd09:goto L76bd09;
case 0x76bd0c:c.instructions+=3;goto B76bd0c;
case 0x76bd0f:c.instructions+=2;goto B76bd0f;
case 0x76bd13:c.instructions+=1;goto B76bd13;
case 0x76bd18:goto L76bd18;
case 0x76bd1b:c.instructions+=1;goto B76bd1b;
case 0x76bd20:goto L76bd20;
case 0x76bd21:goto L76bd21;
case 0x76bd23:c.instructions+=1;goto B76bd23;
case 0x76bd28:goto L76bd28;
case 0x76bd29:c.instructions+=1;goto B76bd29;
case 0x76bd2a:goto L76bd2a;
case 0x76bd2e:c.instructions+=4;goto B76bd2e;
case 0x76bd34:c.instructions+=3;goto B76bd34;
case 0x76bd35:c.instructions+=2;goto B76bd35;
case 0x76bd36:c.instructions+=1;goto B76bd36;
case 0x76bd38:goto L76bd38;
case 0x76bd3a:c.instructions+=9;goto B76bd3a;
case 0x76bd3d:c.instructions+=8;goto B76bd3d;
case 0x76bd44:c.instructions+=7;goto B76bd44;
case 0x76bd46:c.instructions+=6;goto B76bd46;
case 0x76bd49:c.instructions+=5;goto B76bd49;
case 0x76bd4c:c.instructions+=4;goto B76bd4c;
case 0x76bd4e:c.instructions+=3;goto B76bd4e;
case 0x76bd51:c.instructions+=2;goto B76bd51;
case 0x76bd55:c.instructions+=1;goto B76bd55;
case 0x76bd57:goto L76bd57;
case 0x76bd5e:c.instructions+=3;goto B76bd5e;
case 0x76bd5f:c.instructions+=2;goto B76bd5f;
case 0x76bd63:c.instructions+=1;goto B76bd63;
case 0x76bd65:goto L76bd65;
case 0x76bd68:c.instructions+=1;goto B76bd68;
case 0x76bd6a:goto L76bd6a;
case 0x76bd6b:c.instructions+=1;goto B76bd6b;
case 0x76bd6d:goto L76bd6d;
case 0x76bd6e:c.instructions+=1;goto B76bd6e;
case 0x76bd70:goto L76bd70;
case 0x76bd71:c.instructions+=2;goto B76bd71;
case 0x76bd73:c.instructions+=1;goto B76bd73;
case 0x76bd75:goto L76bd75;
case 0x76bd76:c.instructions+=2;goto B76bd76;
case 0x76bd78:c.instructions+=1;goto B76bd78;
case 0x76bd7a:goto L76bd7a;
case 0x76bd7b:c.instructions+=1;goto B76bd7b;
case 0x76bd7d:goto L76bd7d;
case 0x76bd83:goto L76bd83;
case 0x76bd85:c.instructions+=4;goto B76bd85;
case 0x76bd88:c.instructions+=3;goto B76bd88;
case 0x76bd8a:c.instructions+=2;goto B76bd8a;
case 0x76bd8b:c.instructions+=1;goto B76bd8b;
case 0x76bd8d:goto L76bd8d;
case 0x76bd92:goto L76bd92;
case 0x76bd98:c.instructions+=1;goto B76bd98;
case 0x76bd9d:goto L76bd9d;
case 0x76bda0:c.instructions+=1;goto B76bda0;
case 0x76bda3:goto L76bda3;
case 0x76bda4:c.instructions+=2;goto B76bda4;
case 0x76bda5:c.instructions+=1;goto B76bda5;
case 0x76bda6:goto L76bda6;
case 0x76bdaa:c.instructions+=4;goto B76bdaa;
case 0x76bdb0:c.instructions+=3;goto B76bdb0;
case 0x76bdb1:c.instructions+=2;goto B76bdb1;
case 0x76bdb2:c.instructions+=1;goto B76bdb2;
case 0x76bdb4:goto L76bdb4;
case 0x76bdb6:c.instructions+=10;goto B76bdb6;
case 0x76bdb9:c.instructions+=9;goto B76bdb9;
case 0x76bdc0:c.instructions+=8;goto B76bdc0;
case 0x76bdc2:c.instructions+=7;goto B76bdc2;
case 0x76bdc5:c.instructions+=6;goto B76bdc5;
case 0x76bdc8:c.instructions+=5;goto B76bdc8;
case 0x76bdca:c.instructions+=4;goto B76bdca;
case 0x76bdcd:c.instructions+=3;goto B76bdcd;
case 0x76bdcf:c.instructions+=2;goto B76bdcf;
case 0x76bdd3:c.instructions+=1;goto B76bdd3;
case 0x76bdd5:goto L76bdd5;
case 0x76bdd8:c.instructions+=1;goto B76bdd8;
case 0x76bdda:goto L76bdda;
case 0x76bde1:c.instructions+=1;goto B76bde1;
case 0x76bde3:goto L76bde3;
case 0x76bde5:c.instructions+=2;goto B76bde5;
case 0x76bde7:c.instructions+=1;goto B76bde7;
case 0x76bde9:goto L76bde9;
case 0x76bdea:c.instructions+=1;goto B76bdea;
case 0x76bdec:goto L76bdec;
case 0x76bded:c.instructions+=1;goto B76bded;
case 0x76bdef:goto L76bdef;
case 0x76bdf0:c.instructions+=2;goto B76bdf0;
case 0x76bdf2:c.instructions+=1;goto B76bdf2;
case 0x76bdf4:goto L76bdf4;
case 0x76bdf5:c.instructions+=2;goto B76bdf5;
case 0x76bdf7:c.instructions+=1;goto B76bdf7;
case 0x76bdf9:goto L76bdf9;
case 0x76bdfa:c.instructions+=1;goto B76bdfa;
case 0x76bdfc:goto L76bdfc;
case 0x76be02:goto L76be02;
case 0x76be04:c.instructions+=3;goto B76be04;
case 0x76be08:c.instructions+=2;goto B76be08;
case 0x76be0a:c.instructions+=1;goto B76be0a;
case 0x76be0c:goto L76be0c;
case 0x76be11:goto L76be11;
case 0x76be17:c.instructions+=1;goto B76be17;
case 0x76be1c:goto L76be1c;
case 0x76be1f:c.instructions+=1;goto B76be1f;
case 0x76be22:goto L76be22;
case 0x76be23:c.instructions+=2;goto B76be23;
case 0x76be24:c.instructions+=1;goto B76be24;
case 0x76be25:goto L76be25;
case 0x76be29:c.instructions+=2;goto B76be29;
case 0x76be2f:c.instructions+=1;goto B76be2f;
case 0x76be31:goto L76be31;
case 0x76be33:c.instructions+=7;goto B76be33;
case 0x76be36:c.instructions+=6;goto B76be36;
case 0x76be39:c.instructions+=5;goto B76be39;
case 0x76be40:c.instructions+=4;goto B76be40;
case 0x76be43:c.instructions+=3;goto B76be43;
case 0x76be46:c.instructions+=2;goto B76be46;
case 0x76be4a:c.instructions+=1;goto B76be4a;
case 0x76be4c:goto L76be4c;
case 0x76be4e:c.instructions+=1;goto B76be4e;
case 0x76be4f:goto L76be4f;
case 0x76be54:goto L76be54;
case 0x76be5a:c.instructions+=1;goto B76be5a;
case 0x76be5f:goto L76be5f;
case 0x76be62:c.instructions+=2;goto B76be62;
case 0x76be65:c.instructions+=1;goto B76be65;
case 0x76be66:goto L76be66;
case 0x76be6a:c.instructions+=13;goto B76be6a;
case 0x76be6b:c.instructions+=12;goto B76be6b;
case 0x76be6c:c.instructions+=11;goto B76be6c;
case 0x76be6e:c.instructions+=10;goto B76be6e;
case 0x76be71:c.instructions+=9;goto B76be71;
case 0x76be74:c.instructions+=8;goto B76be74;
case 0x76be75:c.instructions+=7;goto B76be75;
case 0x76be7c:c.instructions+=6;goto B76be7c;
case 0x76be7e:c.instructions+=5;goto B76be7e;
case 0x76be81:c.instructions+=4;goto B76be81;
case 0x76be84:c.instructions+=3;goto B76be84;
case 0x76be86:c.instructions+=2;goto B76be86;
case 0x76be8a:c.instructions+=1;goto B76be8a;
case 0x76be8c:goto L76be8c;
case 0x76be8e:c.instructions+=1;goto B76be8e;
case 0x76be93:goto L76be93;
case 0x76be97:c.instructions+=2;goto B76be97;
case 0x76be98:c.instructions+=1;goto B76be98;
case 0x76be9a:goto L76be9a;
case 0x76be9d:c.instructions+=3;goto B76be9d;
case 0x76bea2:c.instructions+=2;goto B76bea2;
case 0x76bea3:c.instructions+=1;goto B76bea3;
case 0x76bea8:goto L76bea8;
case 0x76beaa:c.instructions+=3;goto B76beaa;
case 0x76beab:c.instructions+=2;goto B76beab;
case 0x76beac:c.instructions+=1;goto B76beac;
case 0x76beae:goto L76beae;
case 0x76beb0:c.instructions+=1;goto B76beb0;
case 0x76beb5:goto L76beb5;
case 0x76beb6:c.instructions+=2;goto B76beb6;
case 0x76beb8:c.instructions+=1;goto B76beb8;
case 0x76beba:goto L76beba;
case 0x76bebd:goto L76bebd;
case 0x76bebf:c.instructions+=1;goto B76bebf;
case 0x76bec4:goto L76bec4;
case 0x76bec5:goto L76bec5;
case 0x76bec7:c.instructions+=3;goto B76bec7;
case 0x76becb:c.instructions+=2;goto B76becb;
case 0x76becc:c.instructions+=1;goto B76becc;
case 0x76bed2:goto L76bed2;
case 0x76bed4:c.instructions+=1;goto B76bed4;
case 0x76bed5:goto L76bed5;
case 0x76bed6:c.instructions+=3;goto B76bed6;
case 0x76bed7:c.instructions+=2;goto B76bed7;
case 0x76bed8:c.instructions+=1;goto B76bed8;
case 0x76bed9:goto L76bed9;
case 0x76bedd:c.instructions+=8;goto B76bedd;
case 0x76bedf:c.instructions+=7;goto B76bedf;
case 0x76bee2:c.instructions+=6;goto B76bee2;
case 0x76bee5:c.instructions+=5;goto B76bee5;
case 0x76beec:c.instructions+=4;goto B76beec;
case 0x76beef:c.instructions+=3;goto B76beef;
case 0x76bef3:c.instructions+=2;goto B76bef3;
case 0x76bef4:c.instructions+=1;goto B76bef4;
case 0x76befa:goto L76befa;
case 0x76befb:goto L76befb;
case 0x76befc:c.instructions+=5;goto B76befc;
case 0x76befd:c.instructions+=4;goto B76befd;
case 0x76befe:c.instructions+=3;goto B76befe;
case 0x76bf00:c.instructions+=2;goto B76bf00;
case 0x76bf03:c.instructions+=1;goto B76bf03;
case 0x76bf08:goto L76bf08;
case 0x76bf0a:c.instructions+=2;goto B76bf0a;
case 0x76bf0b:c.instructions+=1;goto B76bf0b;
case 0x76bf11:goto L76bf11;
case 0x76bf12:c.instructions+=4;goto B76bf12;
case 0x76bf13:c.instructions+=3;goto B76bf13;
case 0x76bf14:c.instructions+=2;goto B76bf14;
case 0x76bf16:c.instructions+=1;goto B76bf16;
case 0x76bf1b:goto L76bf1b;
case 0x76bf1d:c.instructions+=4;goto B76bf1d;
case 0x76bf1e:c.instructions+=3;goto B76bf1e;
case 0x76bf22:c.instructions+=2;goto B76bf22;
case 0x76bf26:c.instructions+=1;goto B76bf26;
case 0x76bf2b:goto L76bf2b;
case 0x76bf2d:c.instructions+=2;goto B76bf2d;
case 0x76bf2f:c.instructions+=1;goto B76bf2f;
case 0x76bf35:goto L76bf35;
case 0x76bf3b:c.instructions+=1;goto B76bf3b;
case 0x76bf3d:goto L76bf3d;
case 0x76bf41:c.instructions+=1;goto B76bf41;
case 0x76bf43:goto L76bf43;
case 0x76bf47:c.instructions+=1;goto B76bf47;
case 0x76bf49:goto L76bf49;
case 0x76bf4b:c.instructions+=1;goto B76bf4b;
case 0x76bf50:goto L76bf50;
case 0x76bf54:c.instructions+=2;goto B76bf54;
case 0x76bf55:c.instructions+=1;goto B76bf55;
case 0x76bf57:goto L76bf57;
case 0x76bf5a:c.instructions+=3;goto B76bf5a;
case 0x76bf5f:c.instructions+=2;goto B76bf5f;
case 0x76bf60:c.instructions+=1;goto B76bf60;
case 0x76bf65:goto L76bf65;
case 0x76bf67:c.instructions+=3;goto B76bf67;
case 0x76bf68:c.instructions+=2;goto B76bf68;
case 0x76bf69:c.instructions+=1;goto B76bf69;
case 0x76bf6b:goto L76bf6b;
case 0x76bf6e:goto L76bf6e;
case 0x76bf70:c.instructions+=1;goto B76bf70;
case 0x76bf75:goto L76bf75;
case 0x76bf76:goto L76bf76;
case 0x76bf79:c.instructions+=2;goto B76bf79;
case 0x76bf7a:c.instructions+=1;goto B76bf7a;
case 0x76bf80:goto L76bf80;
case 0x76bf84:c.instructions+=1;goto B76bf84;
case 0x76bf86:goto L76bf86;
case 0x76bf87:c.instructions+=1;goto B76bf87;
case 0x76bf8d:goto L76bf8d;
case 0x76bf91:goto L76bf91;
case 0x76bf93:c.instructions+=2;goto B76bf93;
case 0x76bf96:c.instructions+=1;goto B76bf96;
case 0x76bf9b:goto L76bf9b;
case 0x76bf9d:c.instructions+=1;goto B76bf9d;
case 0x76bf9f:goto L76bf9f;
case 0x76bfa1:goto L76bfa1;
case 0x76bfa4:c.instructions+=10;goto B76bfa4;
case 0x76bfa6:c.instructions+=9;goto B76bfa6;
case 0x76bfa8:c.instructions+=8;goto B76bfa8;
case 0x76bfaa:c.instructions+=7;goto B76bfaa;
case 0x76bfab:c.instructions+=6;goto B76bfab;
case 0x76bfac:c.instructions+=5;goto B76bfac;
case 0x76bfae:c.instructions+=4;goto B76bfae;
case 0x76bfb0:c.instructions+=3;goto B76bfb0;
case 0x76bfb4:c.instructions+=2;goto B76bfb4;
case 0x76bfb7:c.instructions+=1;goto B76bfb7;
case 0x76bfb9:goto L76bfb9;
case 0x76bfbd:goto L76bfbd;
case 0x76bfc2:c.instructions+=5;goto B76bfc2;
case 0x76bfc3:c.instructions+=4;goto B76bfc3;
case 0x76bfc6:c.instructions+=3;goto B76bfc6;
case 0x76bfcc:c.instructions+=2;goto B76bfcc;
case 0x76bfd0:c.instructions+=1;goto B76bfd0;
case 0x76bfd6:goto L76bfd6;
case 0x76bfd8:goto L76bfd8;
case 0x76bfda:c.instructions+=1;goto B76bfda;
case 0x76bfdf:goto L76bfdf;
case 0x76bfe0:c.instructions+=1;goto B76bfe0;
case 0x76bfe2:goto L76bfe2;
case 0x76bfe7:c.instructions+=2;goto B76bfe7;
case 0x76bfe8:c.instructions+=1;goto B76bfe8;
case 0x76bfed:goto L76bfed;
case 0x76bfef:c.instructions+=2;goto B76bfef;
case 0x76bff0:c.instructions+=1;goto B76bff0;
case 0x76bff2:goto L76bff2;
case 0x76bff9:c.instructions+=1;goto B76bff9;
default:missing_instruction(c.pc);}
B76b0e5:L76b0e5:{c.instructions+=3;NFSU2_TR(0x76b0e5);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b0e7:{NFSU2_TR(0x76b0e7);
u8 U[4];
w4(U+0,u32(0x7d9690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b0ec:{NFSU2_TR(0x76b0ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b0f1ull));
TAIL_STATIC(0x760da0u,760);
}
B76b0f1:L76b0f1:{c.instructions+=3;NFSU2_TR(0x76b0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76b0f4:{NFSU2_TR(0x76b0f4);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B76b0fa:{NFSU2_TR(0x76b0fa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76b18d;}}
}
B76b100:L76b100:{c.instructions+=10;NFSU2_TR(0x76b100);
__builtin_memmove((R+0),(R+12),4);
}
B76b102:{NFSU2_TR(0x76b102);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76b105:{NFSU2_TR(0x76b105);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76b10c:{NFSU2_TR(0x76b10c);
__builtin_memmove((R+0),(R+12),4);
}
B76b10e:{NFSU2_TR(0x76b10e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76b111:{NFSU2_TR(0x76b111);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76b114:{NFSU2_TR(0x76b114);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B76b117:{NFSU2_TR(0x76b117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76b119:{NFSU2_TR(0x76b119);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76b11e:{NFSU2_TR(0x76b11e);
if(r1(R+518)){{goto L76b18d;}}
}
B76b120:L76b120:{c.instructions+=2;NFSU2_TR(0x76b120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b121:{NFSU2_TR(0x76b121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b126ull));
{goto L76be66;}
}
B76b126:L76b126:{c.instructions+=5;NFSU2_TR(0x76b126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b127:{NFSU2_TR(0x76b127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b12b:{NFSU2_TR(0x76b12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76b12d:{NFSU2_TR(0x76b12d);
u8 U[17];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+16,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+16))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+16))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+16))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B76b132:{NFSU2_TR(0x76b132);
if(r1(R+518)){{goto L76b165;}}
}
B76b134:L76b134:{c.instructions+=2;NFSU2_TR(0x76b134);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b135:{NFSU2_TR(0x76b135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b13aull));
{goto L76be25;}
}
B76b13a:L76b13a:{c.instructions+=3;NFSU2_TR(0x76b13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b13b:{NFSU2_TR(0x76b13b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b13c:{NFSU2_TR(0x76b13c);
u8 U[4];
__builtin_memmove((U+0),gp(0x78307c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b142ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76b142:L76b142:{c.instructions+=2;NFSU2_TR(0x76b142);
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
B76b144:{NFSU2_TR(0x76b144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b151;}}
}
B76b146:L76b146:{c.instructions+=1;NFSU2_TR(0x76b146);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b14cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76b14c:L76b14c:{c.instructions+=2;NFSU2_TR(0x76b14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b14f:{NFSU2_TR(0x76b14f);
{goto L76b155;}
}
B76b151:L76b151:{c.instructions+=1;NFSU2_TR(0x76b151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b155:L76b155:{c.instructions+=2;NFSU2_TR(0x76b155);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76b159:{NFSU2_TR(0x76b159);
if(r1(R+518)){{goto L76b174;}}
}
B76b15b:L76b15b:{c.instructions+=1;NFSU2_TR(0x76b15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b160ull));
TAIL_STATIC(0x7661c3u,766);
}
B76b160:L76b160:{c.instructions+=2;NFSU2_TR(0x76b160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b163:{NFSU2_TR(0x76b163);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76b165:L76b165:{c.instructions+=1;NFSU2_TR(0x76b165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b16aull));
TAIL_STATIC(0x7661bau,766);
}
B76b16a:L76b16a:{c.instructions+=2;NFSU2_TR(0x76b16a);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76b170:{NFSU2_TR(0x76b170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b174:L76b174:{c.instructions+=2;NFSU2_TR(0x76b174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b178:{NFSU2_TR(0x76b178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b17dull));
{goto L76b185;}
}
B76b17d:L76b17d:{c.instructions+=2;NFSU2_TR(0x76b17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b180:{NFSU2_TR(0x76b180);
{goto L76b19b;}
}
B76b185:L76b185:{c.instructions+=2;NFSU2_TR(0x76b185);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b186:{NFSU2_TR(0x76b186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b18bull));
{goto L76bed9;}
}
B76b18b:L76b18b:{c.instructions+=2;NFSU2_TR(0x76b18b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b18c:{NFSU2_TR(0x76b18c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b18d:L76b18d:{c.instructions+=1;NFSU2_TR(0x76b18d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b192ull));
TAIL_STATIC(0x7661bau,766);
}
B76b192:L76b192:{c.instructions+=2;NFSU2_TR(0x76b192);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76b198:{NFSU2_TR(0x76b198);
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
B76b19b:L76b19b:{c.instructions+=1;NFSU2_TR(0x76b19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b1a0ull));
TAIL_STATIC(0x760ddbu,760);
}
B76b1a0:L76b1a0:{c.instructions+=1;NFSU2_TR(0x76b1a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b1a1:L76b1a1:{c.instructions+=2;NFSU2_TR(0x76b1a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b1a5:{NFSU2_TR(0x76b1a5);
if(r1(R+518)){{goto L76b1ad;}}
}
B76b1a7:L76b1a7:{c.instructions+=2;NFSU2_TR(0x76b1a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b1ab:{NFSU2_TR(0x76b1ab);
if(r1(R+518)){{goto L76b1c3;}}
}
B76b1ad:L76b1ad:{c.instructions+=3;NFSU2_TR(0x76b1ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b1ae:{NFSU2_TR(0x76b1ae);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b1b2:{NFSU2_TR(0x76b1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b1b7ull));
TAIL_STATIC(0x76d644u,76d);
}
B76b1b7:L76b1b7:{c.instructions+=4;NFSU2_TR(0x76b1b7);
u8 U[2];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b1bb:{NFSU2_TR(0x76b1bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b1bc:{NFSU2_TR(0x76b1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b1bd:{NFSU2_TR(0x76b1bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b1c3;}}
}
B76b1bf:L76b1bf:{c.instructions+=2;NFSU2_TR(0x76b1bf);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76b1c2:{NFSU2_TR(0x76b1c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b1c3:L76b1c3:{c.instructions+=2;NFSU2_TR(0x76b1c3);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76b1c5:{NFSU2_TR(0x76b1c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b1c6:L76b1c6:{c.instructions+=5;NFSU2_TR(0x76b1c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b1c7:{NFSU2_TR(0x76b1c7);
__builtin_memmove((R+20),(R+16),4);
}
B76b1c9:{NFSU2_TR(0x76b1c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b1ca:{NFSU2_TR(0x76b1ca);
__builtin_memmove((R+24),(R+0),4);
}
B76b1cc:{NFSU2_TR(0x76b1cc);
{goto L76b1e2;}
}
B76b1ce:L76b1ce:{c.instructions+=4;NFSU2_TR(0x76b1ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b1d1:{NFSU2_TR(0x76b1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b1d4:{NFSU2_TR(0x76b1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b1d7:{NFSU2_TR(0x76b1d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b1dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1a1u);}goto L76b1a1;}
}
B76b1dc:L76b1dc:{c.instructions+=3;NFSU2_TR(0x76b1dc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76b1df:{NFSU2_TR(0x76b1df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b1e0:{NFSU2_TR(0x76b1e0);
if(r1(R+518)){{goto L76b1e8;}}
}
B76b1e2:L76b1e2:{c.instructions+=2;NFSU2_TR(0x76b1e2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76b1e6:{NFSU2_TR(0x76b1e6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1ceu);}goto L76b1ce;}}
}
B76b1e8:L76b1e8:{c.instructions+=3;NFSU2_TR(0x76b1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b1e9:{NFSU2_TR(0x76b1e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76b1ea:{NFSU2_TR(0x76b1ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b1eb:L76b1eb:{c.instructions+=6;NFSU2_TR(0x76b1eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b1ef:{NFSU2_TR(0x76b1ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b1f0:{NFSU2_TR(0x76b1f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b1f1:{NFSU2_TR(0x76b1f1);
__builtin_memmove((R+24),(R+0),4);
}
B76b1f3:{NFSU2_TR(0x76b1f3);
__builtin_memmove((R+12),(R+4),4);
}
B76b1f5:{NFSU2_TR(0x76b1f5);
if(r1(R+518)){{goto L76b21e;}}
}
B76b1f7:L76b1f7:{c.instructions+=2;NFSU2_TR(0x76b1f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b1fb:{NFSU2_TR(0x76b1fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b21e;}}
}
B76b1fd:L76b1fd:{c.instructions+=3;NFSU2_TR(0x76b1fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b201:{NFSU2_TR(0x76b201);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76b203:{NFSU2_TR(0x76b203);
{goto L76b225;}
}
B76b205:L76b205:{c.instructions+=6;NFSU2_TR(0x76b205);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b209:{NFSU2_TR(0x76b209);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76b20b:{NFSU2_TR(0x76b20b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B76b20e:{NFSU2_TR(0x76b20e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b20f:{NFSU2_TR(0x76b20f);
__builtin_memmove((R+0),(R+28),4);
}
B76b211:{NFSU2_TR(0x76b211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b216ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1a1u);}goto L76b1a1;}
}
B76b216:L76b216:{c.instructions+=5;NFSU2_TR(0x76b216);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76b217:{NFSU2_TR(0x76b217);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76b218:{NFSU2_TR(0x76b218);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76b21b:{NFSU2_TR(0x76b21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b21c:{NFSU2_TR(0x76b21c);
if(r1(R+518)){{goto L76b225;}}
}
B76b21e:L76b21e:{c.instructions+=2;NFSU2_TR(0x76b21e);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76b223:{NFSU2_TR(0x76b223);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b205u);}goto L76b205;}}
}
B76b225:L76b225:{c.instructions+=3;NFSU2_TR(0x76b225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b226:{NFSU2_TR(0x76b226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76b227:{NFSU2_TR(0x76b227);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b228:L76b228:{c.instructions+=16;NFSU2_TR(0x76b228);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b229:{NFSU2_TR(0x76b229);
__builtin_memmove((R+20),(R+16),4);
}
B76b22b:{NFSU2_TR(0x76b22b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x458ull))));
}
B76b231:{NFSU2_TR(0x76b231);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76b236:{NFSU2_TR(0x76b236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76b239:{NFSU2_TR(0x76b239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76b23c:{NFSU2_TR(0x76b23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b23f:{NFSU2_TR(0x76b23f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76b241:{NFSU2_TR(0x76b241);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b242:{NFSU2_TR(0x76b242);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B76b245:{NFSU2_TR(0x76b245);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B76b247:{NFSU2_TR(0x76b247);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76b24a:{NFSU2_TR(0x76b24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b24d:{NFSU2_TR(0x76b24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b250:{NFSU2_TR(0x76b250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b253:{NFSU2_TR(0x76b253);
if(r1(R+518)){{goto L76b9c7;}}
}
B76b259:L76b259:{c.instructions+=3;NFSU2_TR(0x76b259);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b25a:{NFSU2_TR(0x76b25a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b25b:{NFSU2_TR(0x76b25b);
{goto L76b260;}
}
B76b25d:L76b25d:{c.instructions+=1;NFSU2_TR(0x76b25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b260:L76b260:{c.instructions+=5;NFSU2_TR(0x76b260);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b262:{NFSU2_TR(0x76b262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76b263:{NFSU2_TR(0x76b263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b266:{NFSU2_TR(0x76b266);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76b26a:{NFSU2_TR(0x76b26a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76b9c5;}}
}
B76b270:L76b270:{c.instructions+=4;NFSU2_TR(0x76b270);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b272:{NFSU2_TR(0x76b272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b273:{NFSU2_TR(0x76b273);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(R+12))<(r2(U+0))));
}
B76b276:{NFSU2_TR(0x76b276);
if(r1(R+512)){{goto L76b28d;}}
}
B76b278:L76b278:{c.instructions+=2;NFSU2_TR(0x76b278);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w1(R+512,u8((r2(U+0))<(u16(0x78ull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x78ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76b27c:{NFSU2_TR(0x76b27c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76b28d;}}
}
B76b27e:L76b27e:{c.instructions+=4;NFSU2_TR(0x76b27e);
w4(R+0,u32(r2(R+12)));
}
B76b281:{NFSU2_TR(0x76b281);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d4270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B76b288:{NFSU2_TR(0x76b288);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B76b28b:{NFSU2_TR(0x76b28b);
{goto L76b28f;}
}
B76b28d:L76b28d:{c.instructions+=1;NFSU2_TR(0x76b28d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76b28f:L76b28f:{c.instructions+=7;NFSU2_TR(0x76b28f);
u8 U[13];
w4(U+0,u32(u32(u32(0x7d4290ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B76b297:{NFSU2_TR(0x76b297);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b299:{NFSU2_TR(0x76b299);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76b29c:{NFSU2_TR(0x76b29c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b29d:{NFSU2_TR(0x76b29d);
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
B76b29f:{NFSU2_TR(0x76b29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2a2:{NFSU2_TR(0x76b2a2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76b9b6;}}
}
B76b2a8:L76b2a8:{c.instructions+=1;NFSU2_TR(0x76b2a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x76b9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B76b2af:L76b2af:{c.instructions+=9;NFSU2_TR(0x76b2af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76b2b1:{NFSU2_TR(0x76b2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b2b5:{NFSU2_TR(0x76b2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2b8:{NFSU2_TR(0x76b2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2bb:{NFSU2_TR(0x76b2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2be:{NFSU2_TR(0x76b2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2c1:{NFSU2_TR(0x76b2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2c4:{NFSU2_TR(0x76b2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b2c7:{NFSU2_TR(0x76b2c7);
{goto L76b9b6;}
}
B76b2cc:L76b2cc:{c.instructions+=3;NFSU2_TR(0x76b2cc);
w4(R+0,u32(r2(R+12)));
}
B76b2cf:{NFSU2_TR(0x76b2cf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b2d1:{NFSU2_TR(0x76b2d1);
if(r1(R+518)){{goto L76b30e;}}
}
B76b2d3:L76b2d3:{c.instructions+=2;NFSU2_TR(0x76b2d3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b2d6:{NFSU2_TR(0x76b2d6);
if(r1(R+518)){{goto L76b305;}}
}
B76b2d8:L76b2d8:{c.instructions+=2;NFSU2_TR(0x76b2d8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b2db:{NFSU2_TR(0x76b2db);
if(r1(R+518)){{goto L76b2fc;}}
}
B76b2dd:L76b2dd:{c.instructions+=2;NFSU2_TR(0x76b2dd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b2df:{NFSU2_TR(0x76b2df);
if(r1(R+518)){{goto L76b2f3;}}
}
B76b2e1:L76b2e1:{c.instructions+=2;NFSU2_TR(0x76b2e1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b2e4:{NFSU2_TR(0x76b2e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b9b6;}}
}
B76b2ea:L76b2ea:{c.instructions+=2;NFSU2_TR(0x76b2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b2ee:{NFSU2_TR(0x76b2ee);
{goto L76b9b6;}
}
B76b2f3:L76b2f3:{c.instructions+=2;NFSU2_TR(0x76b2f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b2f7:{NFSU2_TR(0x76b2f7);
{goto L76b9b6;}
}
B76b2fc:L76b2fc:{c.instructions+=2;NFSU2_TR(0x76b2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b300:{NFSU2_TR(0x76b300);
{goto L76b9b6;}
}
B76b305:L76b305:{c.instructions+=2;NFSU2_TR(0x76b305);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b309:{NFSU2_TR(0x76b309);
{goto L76b9b6;}
}
B76b30e:L76b30e:{c.instructions+=2;NFSU2_TR(0x76b30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b311:{NFSU2_TR(0x76b311);
{goto L76b9b6;}
}
B76b316:L76b316:{c.instructions+=2;NFSU2_TR(0x76b316);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x2aull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76b31a:{NFSU2_TR(0x76b31a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b33d;}}
}
B76b31c:L76b31c:{c.instructions+=6;NFSU2_TR(0x76b31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b320:{NFSU2_TR(0x76b320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b323:{NFSU2_TR(0x76b323);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b326:{NFSU2_TR(0x76b326);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76b328:{NFSU2_TR(0x76b328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b32b:{NFSU2_TR(0x76b32b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76b9b6;}}
}
B76b331:L76b331:{c.instructions+=3;NFSU2_TR(0x76b331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b335:{NFSU2_TR(0x76b335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(0-u32(r4(U+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b338:{NFSU2_TR(0x76b338);
{goto L76b9b6;}
}
B76b33d:L76b33d:{c.instructions+=6;NFSU2_TR(0x76b33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b340:{NFSU2_TR(0x76b340);
w4(R+4,u32(r2(R+12)));
}
B76b343:{NFSU2_TR(0x76b343);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76b346:{NFSU2_TR(0x76b346);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76b34a:{NFSU2_TR(0x76b34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b34d:{NFSU2_TR(0x76b34d);
{goto L76b9b6;}
}
B76b352:L76b352:{c.instructions+=2;NFSU2_TR(0x76b352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b356:{NFSU2_TR(0x76b356);
{goto L76b9b6;}
}
B76b35b:L76b35b:{c.instructions+=2;NFSU2_TR(0x76b35b);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x2aull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76b35f:{NFSU2_TR(0x76b35f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b37f;}}
}
B76b361:L76b361:{c.instructions+=6;NFSU2_TR(0x76b361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b365:{NFSU2_TR(0x76b365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b368:{NFSU2_TR(0x76b368);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b36b:{NFSU2_TR(0x76b36b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76b36d:{NFSU2_TR(0x76b36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b370:{NFSU2_TR(0x76b370);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76b9b6;}}
}
B76b376:L76b376:{c.instructions+=2;NFSU2_TR(0x76b376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b37a:{NFSU2_TR(0x76b37a);
{goto L76b9b6;}
}
B76b37f:L76b37f:{c.instructions+=6;NFSU2_TR(0x76b37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b382:{NFSU2_TR(0x76b382);
w4(R+4,u32(r2(R+12)));
}
B76b385:{NFSU2_TR(0x76b385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76b388:{NFSU2_TR(0x76b388);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76b38c:{NFSU2_TR(0x76b38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b38f:{NFSU2_TR(0x76b38f);
{goto L76b9b6;}
}
B76b394:L76b394:{c.instructions+=3;NFSU2_TR(0x76b394);
w4(R+0,u32(r2(R+12)));
}
B76b397:{NFSU2_TR(0x76b397);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x49ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b39a:{NFSU2_TR(0x76b39a);
if(r1(R+518)){{goto L76b3c9;}}
}
B76b39c:L76b39c:{c.instructions+=2;NFSU2_TR(0x76b39c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b39f:{NFSU2_TR(0x76b39f);
if(r1(R+518)){{goto L76b3c1;}}
}
B76b3a1:L76b3a1:{c.instructions+=2;NFSU2_TR(0x76b3a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b3a4:{NFSU2_TR(0x76b3a4);
if(r1(R+518)){{goto L76b3b8;}}
}
B76b3a6:L76b3a6:{c.instructions+=2;NFSU2_TR(0x76b3a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x77ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b3a9:{NFSU2_TR(0x76b3a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b9b6;}}
}
B76b3af:L76b3af:{c.instructions+=2;NFSU2_TR(0x76b3af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b3b3:{NFSU2_TR(0x76b3b3);
{goto L76b9b6;}
}
B76b3b8:L76b3b8:{c.instructions+=2;NFSU2_TR(0x76b3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b3bc:{NFSU2_TR(0x76b3bc);
{goto L76b9b6;}
}
B76b3c1:L76b3c1:{c.instructions+=2;NFSU2_TR(0x76b3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b3c4:{NFSU2_TR(0x76b3c4);
{goto L76b9b6;}
}
B76b3c9:L76b3c9:{c.instructions+=4;NFSU2_TR(0x76b3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b3cc:{NFSU2_TR(0x76b3cc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B76b3cf:{NFSU2_TR(0x76b3cf);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x36ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b3d3:{NFSU2_TR(0x76b3d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b3ec;}}
}
B76b3d5:L76b3d5:{c.instructions+=3;NFSU2_TR(0x76b3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b3d8:{NFSU2_TR(0x76b3d8);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x34ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76b3dd:{NFSU2_TR(0x76b3dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b3ec;}}
}
B76b3df:L76b3df:{c.instructions+=3;NFSU2_TR(0x76b3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b3e3:{NFSU2_TR(0x76b3e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b3e7:{NFSU2_TR(0x76b3e7);
{goto L76b9b6;}
}
B76b3ec:L76b3ec:{c.instructions+=2;NFSU2_TR(0x76b3ec);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x33ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b3f0:{NFSU2_TR(0x76b3f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b409;}}
}
B76b3f2:L76b3f2:{c.instructions+=3;NFSU2_TR(0x76b3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b3f5:{NFSU2_TR(0x76b3f5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x32ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B76b3fa:{NFSU2_TR(0x76b3fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b409;}}
}
B76b3fc:L76b3fc:{c.instructions+=3;NFSU2_TR(0x76b3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b400:{NFSU2_TR(0x76b400);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b404:{NFSU2_TR(0x76b404);
{goto L76b9b6;}
}
B76b409:L76b409:{c.instructions+=2;NFSU2_TR(0x76b409);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x64ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b40d:{NFSU2_TR(0x76b40d);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b413:L76b413:{c.instructions+=2;NFSU2_TR(0x76b413);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x69ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b417:{NFSU2_TR(0x76b417);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b41d:L76b41d:{c.instructions+=2;NFSU2_TR(0x76b41d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x6full))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b421:{NFSU2_TR(0x76b421);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b427:L76b427:{c.instructions+=2;NFSU2_TR(0x76b427);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x75ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b42b:{NFSU2_TR(0x76b42b);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b431:L76b431:{c.instructions+=2;NFSU2_TR(0x76b431);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x78ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b435:{NFSU2_TR(0x76b435);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b43b:L76b43b:{c.instructions+=2;NFSU2_TR(0x76b43b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x58ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b43f:{NFSU2_TR(0x76b43f);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b445:L76b445:{c.instructions+=6;NFSU2_TR(0x76b445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b449:{NFSU2_TR(0x76b449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b44c:{NFSU2_TR(0x76b44c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b44d:{NFSU2_TR(0x76b44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b450:{NFSU2_TR(0x76b450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b457:{NFSU2_TR(0x76b457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b45cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1a1u);}goto L76b1a1;}
}
B76b45c:L76b45c:{c.instructions+=1;NFSU2_TR(0x76b45c);
{goto L76b9b5;}
}
B76b461:L76b461:{c.instructions+=3;NFSU2_TR(0x76b461);
w4(R+0,u32(r2(R+12)));
}
B76b464:{NFSU2_TR(0x76b464);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x67ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x67ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b467:{NFSU2_TR(0x76b467);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76b6e8;}}
}
B76b46d:L76b46d:{c.instructions+=2;NFSU2_TR(0x76b46d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x65ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x65ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76b470:{NFSU2_TR(0x76b470);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76b51f;}}
}
B76b476:L76b476:{c.instructions+=2;NFSU2_TR(0x76b476);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x58ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b479:{NFSU2_TR(0x76b479);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76b590;}}
}
B76b47f:L76b47f:{c.instructions+=1;NFSU2_TR(0x76b47f);
if(r1(R+518)){{goto L76b75d;}}
}
B76b485:L76b485:{c.instructions+=2;NFSU2_TR(0x76b485);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b488:{NFSU2_TR(0x76b488);
if(r1(R+518)){{goto L76b542;}}
}
B76b48e:L76b48e:{c.instructions+=2;NFSU2_TR(0x76b48e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b490:{NFSU2_TR(0x76b490);
if(r1(R+518)){{goto L76b516;}}
}
B76b496:L76b496:{c.instructions+=2;NFSU2_TR(0x76b496);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b498:{NFSU2_TR(0x76b498);
if(r1(R+518)){{goto L76b516;}}
}
B76b49a:L76b49a:{c.instructions+=2;NFSU2_TR(0x76b49a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b49d:{NFSU2_TR(0x76b49d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b8ab;}}
}
B76b4a3:L76b4a3:{c.instructions+=2;NFSU2_TR(0x76b4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x830ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B76b4a9:{NFSU2_TR(0x76b4a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b4ae;}}
}
B76b4ab:L76b4ab:{c.instructions+=1;NFSU2_TR(0x76b4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b4ae:L76b4ae:{c.instructions+=3;NFSU2_TR(0x76b4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76b4b1:{NFSU2_TR(0x76b4b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b4b4:{NFSU2_TR(0x76b4b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b4bb;}}
}
B76b4b6:L76b4b6:{c.instructions+=1;NFSU2_TR(0x76b4b6);
w4(R+8,u32(0x7fffffffull));
}
B76b4bb:L76b4bb:{c.instructions+=6;NFSU2_TR(0x76b4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b4bf:{NFSU2_TR(0x76b4bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b4c3:{NFSU2_TR(0x76b4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b4c6:{NFSU2_TR(0x76b4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b4c9:{NFSU2_TR(0x76b4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b4cc:{NFSU2_TR(0x76b4cc);
if(r1(R+518)){{goto L76b727;}}
}
B76b4d2:L76b4d2:{c.instructions+=2;NFSU2_TR(0x76b4d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b4d4:{NFSU2_TR(0x76b4d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b4de;}}
}
B76b4d6:L76b4d6:{c.instructions+=2;NFSU2_TR(0x76b4d6);
__builtin_memmove((R+0),gp(0x81a460),4);
}
B76b4db:{NFSU2_TR(0x76b4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b4de:L76b4de:{c.instructions+=4;NFSU2_TR(0x76b4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b4e2:{NFSU2_TR(0x76b4e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b4e4:{NFSU2_TR(0x76b4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b4e7:{NFSU2_TR(0x76b4e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b8ab;}}
}
B76b4ed:L76b4ed:{c.instructions+=3;NFSU2_TR(0x76b4ed);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B76b4ef:{NFSU2_TR(0x76b4ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b4f1:{NFSU2_TR(0x76b4f1);
if(r1(R+518)){{goto L76b8ab;}}
}
B76b4f7:L76b4f7:{c.instructions+=4;NFSU2_TR(0x76b4f7);
__builtin_memmove((R+24),gp(0x81aa00),4);
}
B76b4fd:{NFSU2_TR(0x76b4fd);
w4(R+4,u32(r1(R+4)));
}
B76b500:{NFSU2_TR(0x76b500);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B76b505:{NFSU2_TR(0x76b505);
if(r1(R+518)){{goto L76b508;}}
}
B76b507:L76b507:{c.instructions+=1;NFSU2_TR(0x76b507);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76b508:L76b508:{c.instructions+=4;NFSU2_TR(0x76b508);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76b509:{NFSU2_TR(0x76b509);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b50c:{NFSU2_TR(0x76b50c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76b50f:{NFSU2_TR(0x76b50f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b4edu);}goto L76b4ed;}}
}
B76b511:L76b511:{c.instructions+=1;NFSU2_TR(0x76b511);
{goto L76b8ab;}
}
B76b516:L76b516:{c.instructions+=2;NFSU2_TR(0x76b516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b51d:{NFSU2_TR(0x76b51d);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B76b51f:L76b51f:{c.instructions+=5;NFSU2_TR(0x76b51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b523:{NFSU2_TR(0x76b523);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b527:{NFSU2_TR(0x76b527);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b52d:{NFSU2_TR(0x76b52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b530:{NFSU2_TR(0x76b530);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76b630;}}
}
B76b536:L76b536:{c.instructions+=2;NFSU2_TR(0x76b536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b53d:{NFSU2_TR(0x76b53d);
{goto L76b678;}
}
B76b542:L76b542:{c.instructions+=2;NFSU2_TR(0x76b542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x830ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B76b548:{NFSU2_TR(0x76b548);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b54d;}}
}
B76b54a:L76b54a:{c.instructions+=1;NFSU2_TR(0x76b54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b54d:L76b54d:{c.instructions+=9;NFSU2_TR(0x76b54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b551:{NFSU2_TR(0x76b551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b554:{NFSU2_TR(0x76b554);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B76b558:{NFSU2_TR(0x76b558);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76b55a:{NFSU2_TR(0x76b55a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76b55b:{NFSU2_TR(0x76b55b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b55f:{NFSU2_TR(0x76b55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b562:{NFSU2_TR(0x76b562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b565:{NFSU2_TR(0x76b565);
if(r1(R+518)){{goto L76b5cf;}}
}
B76b567:L76b567:{c.instructions+=8;NFSU2_TR(0x76b567);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa50),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b56d:{NFSU2_TR(0x76b56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
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
B76b571:{NFSU2_TR(0x76b571);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76b574:{NFSU2_TR(0x76b574);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b577:{NFSU2_TR(0x76b577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b578:{NFSU2_TR(0x76b578);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b57e:{NFSU2_TR(0x76b57e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b57f:{NFSU2_TR(0x76b57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b584ull));
TAIL_STATIC(0x76d619u,76d);
}
B76b584:L76b584:{c.instructions+=3;NFSU2_TR(0x76b584);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76b587:{NFSU2_TR(0x76b587);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76b589:{NFSU2_TR(0x76b589);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76b5d6;}}
}
B76b58b:L76b58b:{c.instructions+=2;NFSU2_TR(0x76b58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b58e:{NFSU2_TR(0x76b58e);
{goto L76b5d6;}
}
B76b590:L76b590:{c.instructions+=2;NFSU2_TR(0x76b590);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5aull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b593:{NFSU2_TR(0x76b593);
if(r1(R+518)){{goto L76b5e7;}}
}
B76b595:L76b595:{c.instructions+=2;NFSU2_TR(0x76b595);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b598:{NFSU2_TR(0x76b598);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b54du);}goto L76b54d;}}
}
B76b59a:L76b59a:{c.instructions+=2;NFSU2_TR(0x76b59a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b59b:{NFSU2_TR(0x76b59b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b8ab;}}
}
B76b5a1:L76b5a1:{c.instructions+=1;NFSU2_TR(0x76b5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b5a5:L76b5a5:{c.instructions+=1;NFSU2_TR(0x76b5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b5ac:L76b5ac:{c.instructions+=4;NFSU2_TR(0x76b5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76b5af:{NFSU2_TR(0x76b5af);
w4(R+24,u32(0x8000ull));
}
B76b5b4:{NFSU2_TR(0x76b5b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b5b6:{NFSU2_TR(0x76b5b6);
if(r1(R+518)){{goto L76b7cd;}}
}
B76b5bc:L76b5bc:{c.instructions+=6;NFSU2_TR(0x76b5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b5bf:{NFSU2_TR(0x76b5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76b5c1:{NFSU2_TR(0x76b5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76b5c4:{NFSU2_TR(0x76b5c4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B76b5c7:{NFSU2_TR(0x76b5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b5ca:{NFSU2_TR(0x76b5ca);
{goto L76b7f5;}
}
B76b5cf:L76b5cf:{c.instructions+=1;NFSU2_TR(0x76b5cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76b5d6:L76b5d6:{c.instructions+=4;NFSU2_TR(0x76b5d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b5dc:{NFSU2_TR(0x76b5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b5df:{NFSU2_TR(0x76b5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b5e2:{NFSU2_TR(0x76b5e2);
{goto L76b8ab;}
}
B76b5e7:L76b5e7:{c.instructions+=5;NFSU2_TR(0x76b5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b5eb:{NFSU2_TR(0x76b5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b5ee:{NFSU2_TR(0x76b5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b5f1:{NFSU2_TR(0x76b5f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b5f3:{NFSU2_TR(0x76b5f3);
if(r1(R+518)){{goto L76b622;}}
}
B76b5f5:L76b5f5:{c.instructions+=3;NFSU2_TR(0x76b5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b5f8:{NFSU2_TR(0x76b5f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b5fa:{NFSU2_TR(0x76b5fa);
if(r1(R+518)){{goto L76b622;}}
}
B76b5fc:L76b5fc:{c.instructions+=4;NFSU2_TR(0x76b5fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b600:{NFSU2_TR(0x76b600);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B76b603:{NFSU2_TR(0x76b603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b606:{NFSU2_TR(0x76b606);
if(r1(R+518)){{goto L76b619;}}
}
B76b608:L76b608:{c.instructions+=5;NFSU2_TR(0x76b608);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76b609:{NFSU2_TR(0x76b609);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B76b60b:{NFSU2_TR(0x76b60b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B76b60d:{NFSU2_TR(0x76b60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b614:{NFSU2_TR(0x76b614);
{goto L76b8a8;}
}
B76b619:L76b619:{c.instructions+=2;NFSU2_TR(0x76b619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b61d:{NFSU2_TR(0x76b61d);
{goto L76b8a8;}
}
B76b622:L76b622:{c.instructions+=4;NFSU2_TR(0x76b622);
__builtin_memmove((R+0),gp(0x81a460),4);
}
B76b627:{NFSU2_TR(0x76b627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b62a:{NFSU2_TR(0x76b62a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b62b:{NFSU2_TR(0x76b62b);
{goto L76b6dd;}
}
B76b630:L76b630:{c.instructions+=1;NFSU2_TR(0x76b630);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b641;}}
}
B76b632:L76b632:{c.instructions+=2;NFSU2_TR(0x76b632);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x67ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76b636:{NFSU2_TR(0x76b636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b678;}}
}
B76b638:L76b638:{c.instructions+=2;NFSU2_TR(0x76b638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b63f:{NFSU2_TR(0x76b63f);
{goto L76b678;}
}
B76b641:L76b641:{c.instructions+=3;NFSU2_TR(0x76b641);
w4(R+0,u32(0x200ull));
}
B76b646:{NFSU2_TR(0x76b646);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b649:{NFSU2_TR(0x76b649);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b64e;}}
}
B76b64b:L76b64b:{c.instructions+=1;NFSU2_TR(0x76b64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b64e:L76b64e:{c.instructions+=3;NFSU2_TR(0x76b64e);
w4(R+28,u32(0xa3ull));
}
B76b653:{NFSU2_TR(0x76b653);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b656:{NFSU2_TR(0x76b656);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b678;}}
}
B76b658:L76b658:{c.instructions+=4;NFSU2_TR(0x76b658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b65b:{NFSU2_TR(0x76b65b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x15dull))));
}
B76b660:{NFSU2_TR(0x76b660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b661:{NFSU2_TR(0x76b661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b666ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76b666:L76b666:{c.instructions+=4;NFSU2_TR(0x76b666);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b668:{NFSU2_TR(0x76b668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b669:{NFSU2_TR(0x76b669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b66c:{NFSU2_TR(0x76b66c);
if(r1(R+518)){{goto L76b675;}}
}
B76b66e:L76b66e:{c.instructions+=3;NFSU2_TR(0x76b66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b671:{NFSU2_TR(0x76b671);
__builtin_memmove((R+24),(R+0),4);
}
B76b673:{NFSU2_TR(0x76b673);
{goto L76b678;}
}
B76b675:L76b675:{c.instructions+=1;NFSU2_TR(0x76b675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b678:L76b678:{c.instructions+=15;NFSU2_TR(0x76b678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b67b:{NFSU2_TR(0x76b67b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76b67d:{NFSU2_TR(0x76b67d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b680:{NFSU2_TR(0x76b680);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76b683:{NFSU2_TR(0x76b683);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b686:{NFSU2_TR(0x76b686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b689:{NFSU2_TR(0x76b689);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b68c:{NFSU2_TR(0x76b68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b68f:{NFSU2_TR(0x76b68f);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B76b692:{NFSU2_TR(0x76b692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b693:{NFSU2_TR(0x76b693);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b696:{NFSU2_TR(0x76b696);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b697:{NFSU2_TR(0x76b697);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b698:{NFSU2_TR(0x76b698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b69b:{NFSU2_TR(0x76b69b);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a31c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b6a1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76b6a1:L76b6a1:{c.instructions+=4;NFSU2_TR(0x76b6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76b6a4:{NFSU2_TR(0x76b6a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B76b6a7:{NFSU2_TR(0x76b6a7);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x80ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B76b6ad:{NFSU2_TR(0x76b6ad);
if(r1(R+518)){{goto L76b6bd;}}
}
B76b6af:L76b6af:{c.instructions+=2;NFSU2_TR(0x76b6af);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76b6b3:{NFSU2_TR(0x76b6b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b6bd;}}
}
B76b6b5:L76b6b5:{c.instructions+=2;NFSU2_TR(0x76b6b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b6b6:{NFSU2_TR(0x76b6b6);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a328),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b6bcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76b6bc:L76b6bc:{c.instructions+=1;NFSU2_TR(0x76b6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b6bd:L76b6bd:{c.instructions+=2;NFSU2_TR(0x76b6bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x67ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B76b6c1:{NFSU2_TR(0x76b6c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b6cf;}}
}
B76b6c3:L76b6c3:{c.instructions+=2;NFSU2_TR(0x76b6c3);
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
B76b6c5:{NFSU2_TR(0x76b6c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b6cf;}}
}
B76b6c7:L76b6c7:{c.instructions+=2;NFSU2_TR(0x76b6c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b6c8:{NFSU2_TR(0x76b6c8);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a320),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b6ceull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76b6ce:L76b6ce:{c.instructions+=1;NFSU2_TR(0x76b6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b6cf:L76b6cf:{c.instructions+=2;NFSU2_TR(0x76b6cf);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76b6d2:{NFSU2_TR(0x76b6d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b6dc;}}
}
B76b6d4:L76b6d4:{c.instructions+=3;NFSU2_TR(0x76b6d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b6d8:{NFSU2_TR(0x76b6d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76b6d9:{NFSU2_TR(0x76b6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b6dc:L76b6dc:{c.instructions+=1;NFSU2_TR(0x76b6dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b6dd:L76b6dd:{c.instructions+=1;NFSU2_TR(0x76b6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b6e2ull));
TAIL_STATIC(0x766bc0u,766);
}
B76b6e2:L76b6e2:{c.instructions+=2;NFSU2_TR(0x76b6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b6e3:{NFSU2_TR(0x76b6e3);
{goto L76b8a8;}
}
B76b6e8:L76b6e8:{c.instructions+=2;NFSU2_TR(0x76b6e8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x69ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b6eb:{NFSU2_TR(0x76b6eb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b5a1u);}goto L76b5a1;}}
}
B76b6f1:L76b6f1:{c.instructions+=2;NFSU2_TR(0x76b6f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b6f4:{NFSU2_TR(0x76b6f4);
if(r1(R+518)){{goto L76b7a3;}}
}
B76b6fa:L76b6fa:{c.instructions+=2;NFSU2_TR(0x76b6fa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b6fb:{NFSU2_TR(0x76b6fb);
if(r1(R+518)){{goto L76b789;}}
}
B76b701:L76b701:{c.instructions+=2;NFSU2_TR(0x76b701);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b702:{NFSU2_TR(0x76b702);
if(r1(R+518)){{goto L76b756;}}
}
B76b704:L76b704:{c.instructions+=2;NFSU2_TR(0x76b704);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b707:{NFSU2_TR(0x76b707);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b4aeu);}goto L76b4ae;}}
}
B76b70d:L76b70d:{c.instructions+=2;NFSU2_TR(0x76b70d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b70f:{NFSU2_TR(0x76b70f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b5a5u);}goto L76b5a5;}}
}
B76b715:L76b715:{c.instructions+=2;NFSU2_TR(0x76b715);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b718:{NFSU2_TR(0x76b718);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b8ab;}}
}
B76b71e:L76b71e:{c.instructions+=2;NFSU2_TR(0x76b71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b725:{NFSU2_TR(0x76b725);
{goto L76b760;}
}
B76b727:L76b727:{c.instructions+=2;NFSU2_TR(0x76b727);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b729:{NFSU2_TR(0x76b729);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b733;}}
}
B76b72b:L76b72b:{c.instructions+=2;NFSU2_TR(0x76b72b);
__builtin_memmove((R+0),gp(0x81a464),4);
}
B76b730:{NFSU2_TR(0x76b730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b733:L76b733:{c.instructions+=3;NFSU2_TR(0x76b733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b736:{NFSU2_TR(0x76b736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b73d:{NFSU2_TR(0x76b73d);
{goto L76b748;}
}
B76b73f:L76b73f:{c.instructions+=3;NFSU2_TR(0x76b73f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B76b740:{NFSU2_TR(0x76b740);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B76b744:{NFSU2_TR(0x76b744);
if(r1(R+518)){{goto L76b74c;}}
}
B76b746:L76b746:{c.instructions+=1;NFSU2_TR(0x76b746);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B76b748:L76b748:{c.instructions+=2;NFSU2_TR(0x76b748);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b74a:{NFSU2_TR(0x76b74a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b73fu);}goto L76b73f;}}
}
B76b74c:L76b74c:{c.instructions+=3;NFSU2_TR(0x76b74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B76b74f:{NFSU2_TR(0x76b74f);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B76b751:{NFSU2_TR(0x76b751);
{goto L76b8a8;}
}
B76b756:L76b756:{c.instructions+=1;NFSU2_TR(0x76b756);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b75d:L76b75d:{c.instructions+=1;NFSU2_TR(0x76b75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b760:L76b760:{c.instructions+=3;NFSU2_TR(0x76b760);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b764:{NFSU2_TR(0x76b764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b76b:{NFSU2_TR(0x76b76b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b5acu);}goto L76b5ac;}}
}
B76b771:L76b771:{c.instructions+=6;NFSU2_TR(0x76b771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b774:{NFSU2_TR(0x76b774);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x51ull))));
}
B76b777:{NFSU2_TR(0x76b777);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w2(U+4,u16(0x30ull));
s2(u32(r4(U+0)),r2(U+4));
}
B76b77d:{NFSU2_TR(0x76b77d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B76b781:{NFSU2_TR(0x76b781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b784:{NFSU2_TR(0x76b784);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b5acu);}goto L76b5ac;}
}
B76b789:L76b789:{c.instructions+=3;NFSU2_TR(0x76b789);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b78d:{NFSU2_TR(0x76b78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b794:{NFSU2_TR(0x76b794);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b5acu);}goto L76b5ac;}}
}
B76b79a:L76b79a:{c.instructions+=2;NFSU2_TR(0x76b79a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b79e:{NFSU2_TR(0x76b79e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b5acu);}goto L76b5ac;}
}
B76b7a3:L76b7a3:{c.instructions+=5;NFSU2_TR(0x76b7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b7a7:{NFSU2_TR(0x76b7a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b7ab:{NFSU2_TR(0x76b7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b7ae:{NFSU2_TR(0x76b7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b7b1:{NFSU2_TR(0x76b7b1);
if(r1(R+518)){{goto L76b7bc;}}
}
B76b7b3:L76b7b3:{c.instructions+=3;NFSU2_TR(0x76b7b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B76b7b7:{NFSU2_TR(0x76b7b7);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B76b7ba:{NFSU2_TR(0x76b7ba);
{goto L76b7c1;}
}
B76b7bc:L76b7bc:{c.instructions+=2;NFSU2_TR(0x76b7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b7bf:{NFSU2_TR(0x76b7bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B76b7c1:L76b7c1:{c.instructions+=2;NFSU2_TR(0x76b7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b7c8:{NFSU2_TR(0x76b7c8);
{goto L76b9a3;}
}
B76b7cd:L76b7cd:{c.instructions+=4;NFSU2_TR(0x76b7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b7d1:{NFSU2_TR(0x76b7d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b7d4:{NFSU2_TR(0x76b7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b7d7:{NFSU2_TR(0x76b7d7);
if(r1(R+518)){{goto L76b7eb;}}
}
B76b7d9:L76b7d9:{c.instructions+=2;NFSU2_TR(0x76b7d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b7dc:{NFSU2_TR(0x76b7dc);
if(r1(R+518)){{goto L76b7e5;}}
}
B76b7de:L76b7de:{c.instructions+=1;NFSU2_TR(0x76b7de);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B76b7e2:L76b7e2:{c.instructions+=2;NFSU2_TR(0x76b7e2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76b7e3:{NFSU2_TR(0x76b7e3);
{goto L76b7f5;}
}
B76b7e5:L76b7e5:{c.instructions+=2;NFSU2_TR(0x76b7e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B76b7e9:{NFSU2_TR(0x76b7e9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b7e2u);}goto L76b7e2;}
}
B76b7eb:L76b7eb:{c.instructions+=3;NFSU2_TR(0x76b7eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b7ee:{NFSU2_TR(0x76b7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b7f1:{NFSU2_TR(0x76b7f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b7e2u);}goto L76b7e2;}}
}
B76b7f3:L76b7f3:{c.instructions+=1;NFSU2_TR(0x76b7f3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76b7f5:L76b7f5:{c.instructions+=2;NFSU2_TR(0x76b7f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b7f8:{NFSU2_TR(0x76b7f8);
if(r1(R+518)){{goto L76b80f;}}
}
B76b7fa:L76b7fa:{c.instructions+=2;NFSU2_TR(0x76b7fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b7fc:{NFSU2_TR(0x76b7fc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76b80f;}}
}
B76b7fe:L76b7fe:{c.instructions+=1;NFSU2_TR(0x76b7fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76b804;}}
}
B76b800:L76b800:{c.instructions+=2;NFSU2_TR(0x76b800);
w1(R+512,u8(0x0ull));
}
B76b802:{NFSU2_TR(0x76b802);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76b80f;}}
}
B76b804:L76b804:{c.instructions+=4;NFSU2_TR(0x76b804);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B76b806:{NFSU2_TR(0x76b806);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))+u32(u32(0x0ull))));
w4(R+8,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B76b809:{NFSU2_TR(0x76b809);
w4(R+8,u32(0-u32(r4(R+8))));
}
B76b80b:{NFSU2_TR(0x76b80b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76b80f:L76b80f:{c.instructions+=4;NFSU2_TR(0x76b80f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B76b812:{NFSU2_TR(0x76b812);
__builtin_memmove((R+12),(R+0),4);
}
B76b814:{NFSU2_TR(0x76b814);
__builtin_memmove((R+28),(R+8),4);
}
B76b816:{NFSU2_TR(0x76b816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b81a;}}
}
B76b818:L76b818:{c.instructions+=1;NFSU2_TR(0x76b818);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76b81a:L76b81a:{c.instructions+=2;NFSU2_TR(0x76b81a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B76b81e:{NFSU2_TR(0x76b81e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76b829;}}
}
B76b820:L76b820:{c.instructions+=2;NFSU2_TR(0x76b820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b827:{NFSU2_TR(0x76b827);
{goto L76b83a;}
}
B76b829:L76b829:{c.instructions+=4;NFSU2_TR(0x76b829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b82d:{NFSU2_TR(0x76b82d);
w4(R+0,u32(0x200ull));
}
B76b832:{NFSU2_TR(0x76b832);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b835:{NFSU2_TR(0x76b835);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b83a;}}
}
B76b837:L76b837:{c.instructions+=1;NFSU2_TR(0x76b837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b83a:L76b83a:{c.instructions+=3;NFSU2_TR(0x76b83a);
__builtin_memmove((R+0),(R+12),4);
}
B76b83c:{NFSU2_TR(0x76b83c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b83e:{NFSU2_TR(0x76b83e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b844;}}
}
B76b840:L76b840:{c.instructions+=1;NFSU2_TR(0x76b840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b844:L76b844:{c.instructions+=1;NFSU2_TR(0x76b844);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda7ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b84a:L76b84a:{c.instructions+=4;NFSU2_TR(0x76b84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b84d:{NFSU2_TR(0x76b84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b850:{NFSU2_TR(0x76b850);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b852:{NFSU2_TR(0x76b852);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76b85a;}}
}
B76b854:L76b854:{c.instructions+=3;NFSU2_TR(0x76b854);
__builtin_memmove((R+0),(R+12),4);
}
B76b856:{NFSU2_TR(0x76b856);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76b858:{NFSU2_TR(0x76b858);
if(r1(R+518)){{goto L76b87e;}}
}
B76b85a:L76b85a:{c.instructions+=7;NFSU2_TR(0x76b85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b85d:{NFSU2_TR(0x76b85d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76b85e:{NFSU2_TR(0x76b85e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b85f:{NFSU2_TR(0x76b85f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b860:{NFSU2_TR(0x76b860);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b861:{NFSU2_TR(0x76b861);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b862:{NFSU2_TR(0x76b862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b867ull));
TAIL_STATIC(0x76cae0u,76c);
}
B76b867:L76b867:{c.instructions+=6;NFSU2_TR(0x76b867);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B76b86a:{NFSU2_TR(0x76b86a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x39ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76b86d:{NFSU2_TR(0x76b86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b870:{NFSU2_TR(0x76b870);
__builtin_memmove((R+12),(R+0),4);
}
B76b872:{NFSU2_TR(0x76b872);
__builtin_memmove((R+28),(R+8),4);
}
B76b874:{NFSU2_TR(0x76b874);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b879;}}
}
B76b876:L76b876:{c.instructions+=1;NFSU2_TR(0x76b876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B76b879:L76b879:{c.instructions+=3;NFSU2_TR(0x76b879);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76b87b:{NFSU2_TR(0x76b87b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76b87c:{NFSU2_TR(0x76b87c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b84au);}goto L76b84a;}
}
B76b87e:L76b87e:{c.instructions+=7;NFSU2_TR(0x76b87e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b884:{NFSU2_TR(0x76b884);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B76b886:{NFSU2_TR(0x76b886);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76b887:{NFSU2_TR(0x76b887);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b88b:{NFSU2_TR(0x76b88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b88e:{NFSU2_TR(0x76b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b891:{NFSU2_TR(0x76b891);
if(r1(R+518)){{goto L76b8ab;}}
}
B76b893:L76b893:{c.instructions+=3;NFSU2_TR(0x76b893);
__builtin_memmove((R+4),(R+24),4);
}
B76b895:{NFSU2_TR(0x76b895);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B76b898:{NFSU2_TR(0x76b898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b89e;}}
}
B76b89a:L76b89a:{c.instructions+=2;NFSU2_TR(0x76b89a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b89c:{NFSU2_TR(0x76b89c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b8ab;}}
}
B76b89e:L76b89e:{c.instructions+=4;NFSU2_TR(0x76b89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b8a1:{NFSU2_TR(0x76b8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b8a4:{NFSU2_TR(0x76b8a4);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+4)),r1(U+0));
}
B76b8a7:{NFSU2_TR(0x76b8a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76b8a8:L76b8a8:{c.instructions+=1;NFSU2_TR(0x76b8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b8ab:L76b8ab:{c.instructions+=2;NFSU2_TR(0x76b8ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b8af:{NFSU2_TR(0x76b8af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b9a3;}}
}
B76b8b5:L76b8b5:{c.instructions+=3;NFSU2_TR(0x76b8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b8b8:{NFSU2_TR(0x76b8b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b8ba:{NFSU2_TR(0x76b8ba);
if(r1(R+518)){{goto L76b8e6;}}
}
B76b8bc:L76b8bc:{c.instructions+=2;NFSU2_TR(0x76b8bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b8bf:{NFSU2_TR(0x76b8bf);
if(r1(R+518)){{goto L76b8c9;}}
}
B76b8c1:L76b8c1:{c.instructions+=2;NFSU2_TR(0x76b8c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w2(U+4,u16(0x2dull));
s2(u32(r4(U+0)),r2(U+4));
}
B76b8c7:{NFSU2_TR(0x76b8c7);
{goto L76b8df;}
}
B76b8c9:L76b8c9:{c.instructions+=2;NFSU2_TR(0x76b8c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b8cb:{NFSU2_TR(0x76b8cb);
if(r1(R+518)){{goto L76b8d5;}}
}
B76b8cd:L76b8cd:{c.instructions+=2;NFSU2_TR(0x76b8cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w2(U+4,u16(0x2bull));
s2(u32(r4(U+0)),r2(U+4));
}
B76b8d3:{NFSU2_TR(0x76b8d3);
{goto L76b8df;}
}
B76b8d5:L76b8d5:{c.instructions+=2;NFSU2_TR(0x76b8d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B76b8d7:{NFSU2_TR(0x76b8d7);
if(r1(R+518)){{goto L76b8e6;}}
}
B76b8d9:L76b8d9:{c.instructions+=1;NFSU2_TR(0x76b8d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w2(U+4,u16(0x20ull));
s2(u32(r4(U+0)),r2(U+4));
}
B76b8df:L76b8df:{c.instructions+=1;NFSU2_TR(0x76b8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B76b8e6:L76b8e6:{c.instructions+=5;NFSU2_TR(0x76b8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76b8e9:{NFSU2_TR(0x76b8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B76b8ec:{NFSU2_TR(0x76b8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B76b8ef:{NFSU2_TR(0x76b8ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b8f3:{NFSU2_TR(0x76b8f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b906;}}
}
B76b8f5:L76b8f5:{c.instructions+=5;NFSU2_TR(0x76b8f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b8f8:{NFSU2_TR(0x76b8f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b8fb:{NFSU2_TR(0x76b8fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b8fc:{NFSU2_TR(0x76b8fc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b8fe:{NFSU2_TR(0x76b8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b903ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1c6u);}goto L76b1c6;}
}
B76b903:L76b903:{c.instructions+=1;NFSU2_TR(0x76b903);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76b906:L76b906:{c.instructions+=5;NFSU2_TR(0x76b906);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b909:{NFSU2_TR(0x76b909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76b90c:{NFSU2_TR(0x76b90c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b90f:{NFSU2_TR(0x76b90f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b912:{NFSU2_TR(0x76b912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b917ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1ebu);}goto L76b1eb;}
}
B76b917:L76b917:{c.instructions+=3;NFSU2_TR(0x76b917);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b91b:{NFSU2_TR(0x76b91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b91c:{NFSU2_TR(0x76b91c);
if(r1(R+518)){{goto L76b933;}}
}
B76b91e:L76b91e:{c.instructions+=2;NFSU2_TR(0x76b91e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b922:{NFSU2_TR(0x76b922);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b933;}}
}
B76b924:L76b924:{c.instructions+=5;NFSU2_TR(0x76b924);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b925:{NFSU2_TR(0x76b925);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b926:{NFSU2_TR(0x76b926);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b928:{NFSU2_TR(0x76b928);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b92b:{NFSU2_TR(0x76b92b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b930ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1c6u);}goto L76b1c6;}
}
B76b930:L76b930:{c.instructions+=1;NFSU2_TR(0x76b930);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76b933:L76b933:{c.instructions+=2;NFSU2_TR(0x76b933);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b937:{NFSU2_TR(0x76b937);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76b97d;}}
}
B76b939:L76b939:{c.instructions+=3;NFSU2_TR(0x76b939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b93c:{NFSU2_TR(0x76b93c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b93e:{NFSU2_TR(0x76b93e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b97d;}}
}
B76b940:L76b940:{c.instructions+=2;NFSU2_TR(0x76b940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76b943:{NFSU2_TR(0x76b943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b946:L76b946:{c.instructions+=6;NFSU2_TR(0x76b946);
u8 U[4];
__builtin_memmove((U+0),gp(0x81aa50),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b94c:{NFSU2_TR(0x76b94c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B76b94f:{NFSU2_TR(0x76b94f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b952:{NFSU2_TR(0x76b952);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b953:{NFSU2_TR(0x76b953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b954:{NFSU2_TR(0x76b954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b959ull));
TAIL_STATIC(0x76d619u,76d);
}
B76b959:L76b959:{c.instructions+=4;NFSU2_TR(0x76b959);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76b95c:{NFSU2_TR(0x76b95c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76b95e:{NFSU2_TR(0x76b95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76b961:{NFSU2_TR(0x76b961);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76b98c;}}
}
B76b963:L76b963:{c.instructions+=4;NFSU2_TR(0x76b963);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b966:{NFSU2_TR(0x76b966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b969:{NFSU2_TR(0x76b969);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b96c:{NFSU2_TR(0x76b96c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b971ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1a1u);}goto L76b1a1;}
}
B76b971:L76b971:{c.instructions+=4;NFSU2_TR(0x76b971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B76b974:{NFSU2_TR(0x76b974);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b978:{NFSU2_TR(0x76b978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b979:{NFSU2_TR(0x76b979);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b946u);}goto L76b946;}}
}
B76b97b:L76b97b:{c.instructions+=1;NFSU2_TR(0x76b97b);
{goto L76b98c;}
}
B76b97d:L76b97d:{c.instructions+=4;NFSU2_TR(0x76b97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b980:{NFSU2_TR(0x76b980);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b983:{NFSU2_TR(0x76b983);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b986:{NFSU2_TR(0x76b986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b98bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1ebu);}goto L76b1eb;}
}
B76b98b:L76b98b:{c.instructions+=1;NFSU2_TR(0x76b98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b98c:L76b98c:{c.instructions+=2;NFSU2_TR(0x76b98c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76b990:{NFSU2_TR(0x76b990);
if(r1(R+518)){{goto L76b9a3;}}
}
B76b992:L76b992:{c.instructions+=5;NFSU2_TR(0x76b992);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b995:{NFSU2_TR(0x76b995);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76b998:{NFSU2_TR(0x76b998);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b999:{NFSU2_TR(0x76b999);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b99b:{NFSU2_TR(0x76b99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b9a0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b1c6u);}goto L76b1c6;}
}
B76b9a0:L76b9a0:{c.instructions+=1;NFSU2_TR(0x76b9a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76b9a3:L76b9a3:{c.instructions+=2;NFSU2_TR(0x76b9a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76b9a7:{NFSU2_TR(0x76b9a7);
if(r1(R+518)){{goto L76b9b6;}}
}
B76b9a9:L76b9a9:{c.instructions+=2;NFSU2_TR(0x76b9a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76b9ac:{NFSU2_TR(0x76b9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b9b1ull));
TAIL_STATIC(0x75c6dau,75c);
}
B76b9b1:L76b9b1:{c.instructions+=1;NFSU2_TR(0x76b9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76b9b5:L76b9b5:{c.instructions+=1;NFSU2_TR(0x76b9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76b9b6:L76b9b6:{c.instructions+=4;NFSU2_TR(0x76b9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b9b9:{NFSU2_TR(0x76b9b9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+12),(U+0),2);
}
B76b9bc:{NFSU2_TR(0x76b9bc);
u8 U[2];
w2(U+0,u16(u32(r2(R+12))&u32(r2(R+12))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B76b9bf:{NFSU2_TR(0x76b9bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76b25du);}goto L76b25d;}}
}
B76b9c5:L76b9c5:{c.instructions+=2;NFSU2_TR(0x76b9c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76b9c6:{NFSU2_TR(0x76b9c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76b9c7:L76b9c7:{c.instructions+=5;NFSU2_TR(0x76b9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76b9ca:{NFSU2_TR(0x76b9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76b9cd:{NFSU2_TR(0x76b9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76b9d0:{NFSU2_TR(0x76b9d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76b9d1:{NFSU2_TR(0x76b9d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76b9d6ull));
TAIL_STATIC(0x76115eu,761);
}
B76b9d6:L76b9d6:{c.instructions+=2;NFSU2_TR(0x76b9d6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76b9d7:{NFSU2_TR(0x76b9d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76b9f8:L76b9f8:{c.instructions+=3;NFSU2_TR(0x76b9f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76b9f9:{NFSU2_TR(0x76b9f9);
__builtin_memmove((R+20),(R+16),4);
}
B76b9fb:{NFSU2_TR(0x76b9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba00ull));
TAIL_STATIC(0x761e3cu,761);
}
B76ba00:L76ba00:{c.instructions+=3;NFSU2_TR(0x76ba00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ba03:{NFSU2_TR(0x76ba03);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba23c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ba09:{NFSU2_TR(0x76ba09);
if(r1(R+518)){{goto L76ba10;}}
}
B76ba0b:L76ba0b:{c.instructions+=1;NFSU2_TR(0x76ba0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba10ull));
TAIL_STATIC(0x765c02u,765);
}
B76ba10:L76ba10:{c.instructions+=2;NFSU2_TR(0x76ba10);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76ba14:{NFSU2_TR(0x76ba14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ba1a;}}
}
B76ba16:L76ba16:{c.instructions+=3;NFSU2_TR(0x76ba16);
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
B76ba18:{NFSU2_TR(0x76ba18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76ba19:{NFSU2_TR(0x76ba19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ba1a:L76ba1a:{c.instructions+=8;NFSU2_TR(0x76ba1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba1d:{NFSU2_TR(0x76ba1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba20:{NFSU2_TR(0x76ba20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba23:{NFSU2_TR(0x76ba23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba26:{NFSU2_TR(0x76ba26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba29:{NFSU2_TR(0x76ba29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba2b:{NFSU2_TR(0x76ba2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba2e:{NFSU2_TR(0x76ba2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba33ull));
TAIL_STATIC(0x76d73cu,76d);
}
B76ba33:L76ba33:{c.instructions+=3;NFSU2_TR(0x76ba33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B76ba36:{NFSU2_TR(0x76ba36);
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
B76ba38:{NFSU2_TR(0x76ba38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ba41;}}
}
B76ba3a:L76ba3a:{c.instructions+=3;NFSU2_TR(0x76ba3a);
w4(R+0,u32(0x7fffffffull));
}
B76ba3f:{NFSU2_TR(0x76ba3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76ba40:{NFSU2_TR(0x76ba40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ba41:L76ba41:{c.instructions+=3;NFSU2_TR(0x76ba41);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76ba44:{NFSU2_TR(0x76ba44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76ba45:{NFSU2_TR(0x76ba45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ba46:L76ba46:{c.instructions+=10;NFSU2_TR(0x76ba46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba47:{NFSU2_TR(0x76ba47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba48:{NFSU2_TR(0x76ba48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba49:{NFSU2_TR(0x76ba49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba4a:{NFSU2_TR(0x76ba4a);
__builtin_memmove((R+24),gp(0x8b8458),4);
}
B76ba50:{NFSU2_TR(0x76ba50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76ba52:{NFSU2_TR(0x76ba52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba53:{NFSU2_TR(0x76ba53);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76ba55:{NFSU2_TR(0x76ba55);
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
B76ba57:{NFSU2_TR(0x76ba57);
if(r1(R+518)){{goto L76baa4;}}
}
B76ba59:L76ba59:{c.instructions+=1;NFSU2_TR(0x76ba59);
__builtin_memmove((R+20),gp(0x78319c),4);
}
B76ba5f:L76ba5f:{c.instructions+=9;NFSU2_TR(0x76ba5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba60:{NFSU2_TR(0x76ba60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba61:{NFSU2_TR(0x76ba61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba62:{NFSU2_TR(0x76ba62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba63:{NFSU2_TR(0x76ba63);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba65:{NFSU2_TR(0x76ba65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba66:{NFSU2_TR(0x76ba66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba67:{NFSU2_TR(0x76ba67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba68:{NFSU2_TR(0x76ba68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba6aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ba6a:L76ba6a:{c.instructions+=3;NFSU2_TR(0x76ba6a);
__builtin_memmove((R+12),(R+0),4);
}
B76ba6c:{NFSU2_TR(0x76ba6c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ba6e:{NFSU2_TR(0x76ba6e);
if(r1(R+518)){{goto L76baac;}}
}
B76ba70:L76ba70:{c.instructions+=2;NFSU2_TR(0x76ba70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba71:{NFSU2_TR(0x76ba71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba76ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76ba76:L76ba76:{c.instructions+=4;NFSU2_TR(0x76ba76);
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
B76ba78:{NFSU2_TR(0x76ba78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ba79:{NFSU2_TR(0x76ba79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ba7d:{NFSU2_TR(0x76ba7d);
if(r1(R+518)){{goto L76baac;}}
}
B76ba7f:L76ba7f:{c.instructions+=9;NFSU2_TR(0x76ba7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba80:{NFSU2_TR(0x76ba80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba81:{NFSU2_TR(0x76ba81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba82:{NFSU2_TR(0x76ba82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba83:{NFSU2_TR(0x76ba83);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba85:{NFSU2_TR(0x76ba85);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B76ba87:{NFSU2_TR(0x76ba87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba88:{NFSU2_TR(0x76ba88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba89:{NFSU2_TR(0x76ba89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba8bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ba8b:L76ba8b:{c.instructions+=2;NFSU2_TR(0x76ba8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ba8d:{NFSU2_TR(0x76ba8d);
if(r1(R+518)){{goto L76baac;}}
}
B76ba8f:L76ba8f:{c.instructions+=3;NFSU2_TR(0x76ba8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ba90:{NFSU2_TR(0x76ba90);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ba94:{NFSU2_TR(0x76ba94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ba99ull));
TAIL_STATIC(0x76db74u,76d);
}
B76ba99:L76ba99:{c.instructions+=6;NFSU2_TR(0x76ba99);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B76ba9c:{NFSU2_TR(0x76ba9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76ba9e:{NFSU2_TR(0x76ba9e);
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
B76baa0:{NFSU2_TR(0x76baa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76baa1:{NFSU2_TR(0x76baa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76baa2:{NFSU2_TR(0x76baa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ba5fu);}goto L76ba5f;}}
}
B76baa4:L76baa4:{c.instructions+=1;NFSU2_TR(0x76baa4);
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
B76baa6:L76baa6:{c.instructions+=6;NFSU2_TR(0x76baa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76baa7:{NFSU2_TR(0x76baa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76baa8:{NFSU2_TR(0x76baa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76baa9:{NFSU2_TR(0x76baa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76baaa:{NFSU2_TR(0x76baaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76baab:{NFSU2_TR(0x76baab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76baac:L76baac:{c.instructions+=2;NFSU2_TR(0x76baac);
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
B76baaf:{NFSU2_TR(0x76baaf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76baa6u);}goto L76baa6;}
}
B76bab1:L76bab1:{c.instructions+=8;NFSU2_TR(0x76bab1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bab2:{NFSU2_TR(0x76bab2);
__builtin_memmove((R+20),(R+16),4);
}
B76bab4:{NFSU2_TR(0x76bab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B76bab7:{NFSU2_TR(0x76bab7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bab8:{NFSU2_TR(0x76bab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76babb:{NFSU2_TR(0x76babb);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x76cull))));
}
B76bac1:{NFSU2_TR(0x76bac1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x46ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x46ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76bac4:{NFSU2_TR(0x76bac4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76bbb9;}}
}
B76baca:L76baca:{c.instructions+=2;NFSU2_TR(0x76baca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8aull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8aull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76bad0:{NFSU2_TR(0x76bad0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76bbb9;}}
}
B76bad6:L76bad6:{c.instructions+=12;NFSU2_TR(0x76bad6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bad7:{NFSU2_TR(0x76bad7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bad8:{NFSU2_TR(0x76bad8);
__builtin_memmove((R+0),(R+24),4);
}
B76bada:{NFSU2_TR(0x76bada);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76badc:{NFSU2_TR(0x76badc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76badd:{NFSU2_TR(0x76badd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76bade:{NFSU2_TR(0x76bade);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bade);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bade);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76bae0:{NFSU2_TR(0x76bae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76bae3:{NFSU2_TR(0x76bae3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x81ac70ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B76baea:{NFSU2_TR(0x76baea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B76baed:{NFSU2_TR(0x76baed);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76baef:{NFSU2_TR(0x76baef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bafd;}}
}
B76baf1:L76baf1:{c.instructions+=7;NFSU2_TR(0x76baf1);
__builtin_memmove((R+0),(R+24),4);
}
B76baf3:{NFSU2_TR(0x76baf3);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76baf5:{NFSU2_TR(0x76baf5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76baf6:{NFSU2_TR(0x76baf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76baf7:{NFSU2_TR(0x76baf7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76baf7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76baf7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76baf9:{NFSU2_TR(0x76baf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bafb:{NFSU2_TR(0x76bafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bb0f;}}
}
B76bafd:L76bafd:{c.instructions+=6;NFSU2_TR(0x76bafd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76cull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bb03:{NFSU2_TR(0x76bb03);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76bb04:{NFSU2_TR(0x76bb04);
w4(R+12,u32(0x190ull));
}
B76bb09:{NFSU2_TR(0x76bb09);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb09);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb09);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76bb0b:{NFSU2_TR(0x76bb0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bb0d:{NFSU2_TR(0x76bb0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bb15;}}
}
B76bb0f:L76bb0f:{c.instructions+=2;NFSU2_TR(0x76bb0f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76bb12:{NFSU2_TR(0x76bb12);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76bb15;}}
}
B76bb14:L76bb14:{c.instructions+=1;NFSU2_TR(0x76bb14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76bb15:L76bb15:{c.instructions+=1;NFSU2_TR(0x76bb15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bb1aull));
TAIL_STATIC(0x76698cu,766);
}
B76bb1a:L76bb1a:{c.instructions+=43;NFSU2_TR(0x76bb1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12bull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bb20:{NFSU2_TR(0x76bb20);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76bb21:{NFSU2_TR(0x76bb21);
w4(R+12,u32(0x190ull));
}
B76bb26:{NFSU2_TR(0x76bb26);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb26);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb26);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76bb28:{NFSU2_TR(0x76bb28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bb2b:{NFSU2_TR(0x76bb2b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bb2d:{NFSU2_TR(0x76bb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bb30:{NFSU2_TR(0x76bb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bb33:{NFSU2_TR(0x76bb33);
__builtin_memmove((R+12),(R+0),4);
}
B76bb35:{NFSU2_TR(0x76bb35);
__builtin_memmove((R+0),(R+4),4);
}
B76bb37:{NFSU2_TR(0x76bb37);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76bb38:{NFSU2_TR(0x76bb38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bb39:{NFSU2_TR(0x76bb39);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb39);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb39);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76bb3b:{NFSU2_TR(0x76bb3b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bb3d:{NFSU2_TR(0x76bb3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bb3e:{NFSU2_TR(0x76bb3e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B76bb40:{NFSU2_TR(0x76bb40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bb43:{NFSU2_TR(0x76bb43);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76bb44:{NFSU2_TR(0x76bb44);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb44);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bb44);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76bb46:{NFSU2_TR(0x76bb46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76bb49:{NFSU2_TR(0x76bb49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bb4c:{NFSU2_TR(0x76bb4c);
__builtin_memmove((R+4),(R+0),4);
}
B76bb4e:{NFSU2_TR(0x76bb4e);
__builtin_memmove((R+0),(R+24),4);
}
B76bb50:{NFSU2_TR(0x76bb50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x16dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B76bb56:{NFSU2_TR(0x76bb56);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B76bb58:{NFSU2_TR(0x76bb58);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B76bb5a:{NFSU2_TR(0x76bb5a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B76bb5c:{NFSU2_TR(0x76bb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76bb5f:{NFSU2_TR(0x76bb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B76bb62:{NFSU2_TR(0x76bb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76bb65:{NFSU2_TR(0x76bb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B76bb68:{NFSU2_TR(0x76bb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76bb6b:{NFSU2_TR(0x76bb6b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B76bb6e:{NFSU2_TR(0x76bb6e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B76bb70:{NFSU2_TR(0x76bb70);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B76bb73:{NFSU2_TR(0x76bb73);
w4(R+12,u32(u32(r4(R+12))+u32(m4(0x81a760))));
}
B76bb79:{NFSU2_TR(0x76bb79);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B76bb7a:{NFSU2_TR(0x76bb7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76bb7e:{NFSU2_TR(0x76bb7e);
u8 U[12];
w4(U+0,u32(u32(u32(0x7c558180ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B76bb85:{NFSU2_TR(0x76bb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bb88:{NFSU2_TR(0x76bb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bb8b:{NFSU2_TR(0x76bb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bb8e:{NFSU2_TR(0x76bb8e);
if(r1(R+518)){{goto L76bbad;}}
}
B76bb90:L76bb90:{c.instructions+=2;NFSU2_TR(0x76bb90);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B76bb94:{NFSU2_TR(0x76bb94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bbb3;}}
}
B76bb96:L76bb96:{c.instructions+=2;NFSU2_TR(0x76bb96);
u8 U[14];
__builtin_memmove((U+6),gp(0x81a764),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bb9d:{NFSU2_TR(0x76bb9d);
if(r1(R+518)){{goto L76bbb3;}}
}
B76bb9f:L76bb9f:{c.instructions+=3;NFSU2_TR(0x76bb9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bba2:{NFSU2_TR(0x76bba2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bba3:{NFSU2_TR(0x76bba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bba8ull));
TAIL_STATIC(0x7669bau,766);
}
B76bba8:L76bba8:{c.instructions+=3;NFSU2_TR(0x76bba8);
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
B76bbaa:{NFSU2_TR(0x76bbaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bbab:{NFSU2_TR(0x76bbab);
if(r1(R+518)){{goto L76bbb3;}}
}
B76bbad:L76bbad:{c.instructions+=1;NFSU2_TR(0x76bbad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),m4(0x81a768)));
w1(R+523,scarry<u32>(r4(R+12),m4(0x81a768)));
w4(R+12,u32(u32(r4(R+12))+u32(m4(0x81a768))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bbb3:L76bbb3:{c.instructions+=4;NFSU2_TR(0x76bbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76bbb4:{NFSU2_TR(0x76bbb4);
__builtin_memmove((R+0),(R+12),4);
}
B76bbb6:{NFSU2_TR(0x76bbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76bbb7:{NFSU2_TR(0x76bbb7);
{goto L76bbbc;}
}
B76bbb9:L76bbb9:{c.instructions+=1;NFSU2_TR(0x76bbb9);
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
B76bbbc:L76bbbc:{c.instructions+=3;NFSU2_TR(0x76bbbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76bbbd:{NFSU2_TR(0x76bbbd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76bbbe:{NFSU2_TR(0x76bbbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bbbf:L76bbbf:{c.instructions+=5;NFSU2_TR(0x76bbbf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bbc0:{NFSU2_TR(0x76bbc0);
__builtin_memmove((R+20),(R+16),4);
}
B76bbc2:{NFSU2_TR(0x76bbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76bbc5:{NFSU2_TR(0x76bbc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bbc7:{NFSU2_TR(0x76bbc7);
if(r1(R+518)){{goto L76bbed;}}
}
B76bbc9:L76bbc9:{c.instructions+=8;NFSU2_TR(0x76bbc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76bbcd:{NFSU2_TR(0x76bbcd);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0x40ull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0x40ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B76bbcf:{NFSU2_TR(0x76bbcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76bbd2:{NFSU2_TR(0x76bbd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bbd5:{NFSU2_TR(0x76bbd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bbd6:{NFSU2_TR(0x76bbd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B76bbda:{NFSU2_TR(0x76bbda);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(U+4,u8(0x5cull));
s1(u32(r4(U+0)),r1(U+4));
}
B76bbde:{NFSU2_TR(0x76bbde);
u8 U[4];
__builtin_memmove((U+0),gp(0x783160),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bbe4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bbe4:L76bbe4:{c.instructions+=2;NFSU2_TR(0x76bbe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bbe6:{NFSU2_TR(0x76bbe6);
if(r1(R+518)){{goto L76bbf2;}}
}
B76bbe8:L76bbe8:{c.instructions+=2;NFSU2_TR(0x76bbe8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76bbeb:{NFSU2_TR(0x76bbeb);
if(r1(R+518)){{goto L76bbf2;}}
}
B76bbed:L76bbed:{c.instructions+=4;NFSU2_TR(0x76bbed);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76bbef:{NFSU2_TR(0x76bbef);
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
B76bbf0:{NFSU2_TR(0x76bbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76bbf1:{NFSU2_TR(0x76bbf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bbf2:L76bbf2:{c.instructions+=3;NFSU2_TR(0x76bbf2);
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
B76bbf4:{NFSU2_TR(0x76bbf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76bbf5:{NFSU2_TR(0x76bbf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bbf6:L76bbf6:{c.instructions+=10;NFSU2_TR(0x76bbf6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bbf7:{NFSU2_TR(0x76bbf7);
__builtin_memmove((R+20),(R+16),4);
}
B76bbf9:{NFSU2_TR(0x76bbf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B76bbff:{NFSU2_TR(0x76bbff);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B76bc04:{NFSU2_TR(0x76bc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B76bc07:{NFSU2_TR(0x76bc07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc08:{NFSU2_TR(0x76bc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76bc0b:{NFSU2_TR(0x76bc0b);
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
B76bc0d:{NFSU2_TR(0x76bc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bc10:{NFSU2_TR(0x76bc10);
if(r1(R+518)){{goto L76bc71;}}
}
B76bc12:L76bc12:{c.instructions+=2;NFSU2_TR(0x76bc12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc13:{NFSU2_TR(0x76bc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bc18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bbbfu);}goto L76bbbf;}
}
B76bc18:L76bc18:{c.instructions+=3;NFSU2_TR(0x76bc18);
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
B76bc1a:{NFSU2_TR(0x76bc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bc1b:{NFSU2_TR(0x76bc1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bc43;}}
}
B76bc1d:L76bc1d:{c.instructions+=1;NFSU2_TR(0x76bc1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bc22ull));
TAIL_STATIC(0x7661c3u,766);
}
B76bc22:L76bc22:{c.instructions+=2;NFSU2_TR(0x76bc22);
u8 U[4];
w4(U+0,u32(0xfull));
s4(u32(r4(R+0)),r4(U+0));
}
B76bc28:{NFSU2_TR(0x76bc28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bc2dull));
TAIL_STATIC(0x7661bau,766);
}
B76bc2d:L76bc2d:{c.instructions+=1;NFSU2_TR(0x76bc2d);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+0)),r4(U+0));
}
B76bc33:L76bc33:{c.instructions+=1;NFSU2_TR(0x76bc33);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76bc35:L76bc35:{c.instructions+=4;NFSU2_TR(0x76bc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76bc38:{NFSU2_TR(0x76bc38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B76bc3b:{NFSU2_TR(0x76bc3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76bc3c:{NFSU2_TR(0x76bc3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bc41ull));
TAIL_STATIC(0x76115eu,761);
}
B76bc41:L76bc41:{c.instructions+=2;NFSU2_TR(0x76bc41);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76bc42:{NFSU2_TR(0x76bc42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bc43:L76bc43:{c.instructions+=13;NFSU2_TR(0x76bc43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B76bc47:{NFSU2_TR(0x76bc47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bc4a:{NFSU2_TR(0x76bc4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc4b:{NFSU2_TR(0x76bc4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bc51:{NFSU2_TR(0x76bc51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc52:{NFSU2_TR(0x76bc52);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc57:{NFSU2_TR(0x76bc57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bc5a:{NFSU2_TR(0x76bc5a);
u8 U[3];
w1(R+512,carry<u8>(r1(R+12),u8(0x40ull)));
w1(R+523,scarry<u8>(r1(R+12),u8(0x40ull)));
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B76bc5d:{NFSU2_TR(0x76bc5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc5e:{NFSU2_TR(0x76bc5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B76bc61:{NFSU2_TR(0x76bc61);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B76bc65:{NFSU2_TR(0x76bc65);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(U+4,u8(0x2eull));
s1(u32(r4(U+0)),r1(U+4));
}
B76bc69:{NFSU2_TR(0x76bc69);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bc6full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bc6f:L76bc6f:{c.instructions+=1;NFSU2_TR(0x76bc6f);
{goto L76bc83;}
}
B76bc71:L76bc71:{c.instructions+=4;NFSU2_TR(0x76bc71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bc77:{NFSU2_TR(0x76bc77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc78:{NFSU2_TR(0x76bc78);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc7d:{NFSU2_TR(0x76bc7d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783220),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bc83ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bc83:L76bc83:{c.instructions+=2;NFSU2_TR(0x76bc83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bc85:{NFSU2_TR(0x76bc85);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bc33u);}goto L76bc33;}}
}
B76bc87:L76bc87:{c.instructions+=3;NFSU2_TR(0x76bc87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B76bc88:{NFSU2_TR(0x76bc88);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x104ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bc8d:{NFSU2_TR(0x76bc8d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bc33u);}goto L76bc33;}}
}
B76bc8f:L76bc8f:{c.instructions+=3;NFSU2_TR(0x76bc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76bc92:{NFSU2_TR(0x76bc92);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bc94:{NFSU2_TR(0x76bc94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bcbb;}}
}
B76bc96:L76bc96:{c.instructions+=2;NFSU2_TR(0x76bc96);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76bc99:{NFSU2_TR(0x76bc99);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L76bc9e;}}
}
B76bc9b:L76bc9b:{c.instructions+=1;NFSU2_TR(0x76bc9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76bc9e:L76bc9e:{c.instructions+=2;NFSU2_TR(0x76bc9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bc9f:{NFSU2_TR(0x76bc9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bca4ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76bca4:L76bca4:{c.instructions+=4;NFSU2_TR(0x76bca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bca5:{NFSU2_TR(0x76bca5);
__builtin_memmove((R+4),(R+0),4);
}
B76bca7:{NFSU2_TR(0x76bca7);
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
B76bca9:{NFSU2_TR(0x76bca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bcd0;}}
}
B76bcab:L76bcab:{c.instructions+=1;NFSU2_TR(0x76bcab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bcb0ull));
TAIL_STATIC(0x7661bau,766);
}
B76bcb0:L76bcb0:{c.instructions+=2;NFSU2_TR(0x76bcb0);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B76bcb6:{NFSU2_TR(0x76bcb6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bc33u);}goto L76bc33;}
}
B76bcbb:L76bcbb:{c.instructions+=2;NFSU2_TR(0x76bcbb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B76bcbe:{NFSU2_TR(0x76bcbe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L76bcd0;}}
}
B76bcc0:L76bcc0:{c.instructions+=1;NFSU2_TR(0x76bcc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bcc5ull));
TAIL_STATIC(0x7661bau,766);
}
B76bcc5:L76bcc5:{c.instructions+=2;NFSU2_TR(0x76bcc5);
u8 U[4];
w4(U+0,u32(0x22ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76bccb:{NFSU2_TR(0x76bccb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bc33u);}goto L76bc33;}
}
B76bcd0:L76bcd0:{c.instructions+=4;NFSU2_TR(0x76bcd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bcd6:{NFSU2_TR(0x76bcd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bcd7:{NFSU2_TR(0x76bcd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bcd8:{NFSU2_TR(0x76bcd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bcddull));
TAIL_STATIC(0x766ac0u,766);
}
B76bcdd:L76bcdd:{c.instructions+=3;NFSU2_TR(0x76bcdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bcde:{NFSU2_TR(0x76bcde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bcdf:{NFSU2_TR(0x76bcdf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bc35u);}goto L76bc35;}
}
B76bce4:L76bce4:{c.instructions+=3;NFSU2_TR(0x76bce4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bce6:{NFSU2_TR(0x76bce6);
u8 U[4];
w4(U+0,u32(0x7d96a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bceb:{NFSU2_TR(0x76bceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bcf0ull));
TAIL_STATIC(0x760da0u,760);
}
B76bcf0:L76bcf0:{c.instructions+=2;NFSU2_TR(0x76bcf0);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bcf2:{NFSU2_TR(0x76bcf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bcf7ull));
TAIL_STATIC(0x7631f1u,763);
}
B76bcf7:L76bcf7:{c.instructions+=6;NFSU2_TR(0x76bcf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bcf8:{NFSU2_TR(0x76bcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76bcfc:{NFSU2_TR(0x76bcfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76bcff:{NFSU2_TR(0x76bcff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76bd02:{NFSU2_TR(0x76bd02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd04:{NFSU2_TR(0x76bd04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd09ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bbf6u);}goto L76bbf6;}
}
B76bd09:L76bd09:{c.instructions+=4;NFSU2_TR(0x76bd09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76bd0c:{NFSU2_TR(0x76bd0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bd0f:{NFSU2_TR(0x76bd0f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B76bd13:{NFSU2_TR(0x76bd13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd18ull));
{goto L76bd21;}
}
B76bd18:L76bd18:{c.instructions+=2;NFSU2_TR(0x76bd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76bd1b:{NFSU2_TR(0x76bd1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd20ull));
TAIL_STATIC(0x760ddbu,760);
}
B76bd20:L76bd20:{c.instructions+=1;NFSU2_TR(0x76bd20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bd21:L76bd21:{c.instructions+=2;NFSU2_TR(0x76bd21);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd23:{NFSU2_TR(0x76bd23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd28ull));
TAIL_STATIC(0x76315du,763);
}
B76bd28:L76bd28:{c.instructions+=2;NFSU2_TR(0x76bd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bd29:{NFSU2_TR(0x76bd29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bd2a:L76bd2a:{c.instructions+=5;NFSU2_TR(0x76bd2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76bd2e:{NFSU2_TR(0x76bd2e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B76bd34:{NFSU2_TR(0x76bd34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd35:{NFSU2_TR(0x76bd35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd36:{NFSU2_TR(0x76bd36);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76bd8d;}}
}
B76bd38:L76bd38:{c.instructions+=10;NFSU2_TR(0x76bd38);
__builtin_memmove((R+0),(R+4),4);
}
B76bd3a:{NFSU2_TR(0x76bd3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76bd3d:{NFSU2_TR(0x76bd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76bd44:{NFSU2_TR(0x76bd44);
__builtin_memmove((R+0),(R+4),4);
}
B76bd46:{NFSU2_TR(0x76bd46);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76bd49:{NFSU2_TR(0x76bd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76bd4c:{NFSU2_TR(0x76bd4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76bd4e:{NFSU2_TR(0x76bd4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B76bd51:{NFSU2_TR(0x76bd51);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
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
B76bd55:{NFSU2_TR(0x76bd55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bd8d;}}
}
B76bd57:L76bd57:{c.instructions+=4;NFSU2_TR(0x76bd57);
u8 U[8];
__builtin_memmove((U+0),gp(0x819c58),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76bd5e:{NFSU2_TR(0x76bd5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd5f:{NFSU2_TR(0x76bd5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76bd63:{NFSU2_TR(0x76bd63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bd83;}}
}
B76bd65:L76bd65:{c.instructions+=2;NFSU2_TR(0x76bd65);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x0ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bd68:{NFSU2_TR(0x76bd68);
if(r1(R+518)){{goto L76bd7a;}}
}
B76bd6a:L76bd6a:{c.instructions+=2;NFSU2_TR(0x76bd6a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bd6b:{NFSU2_TR(0x76bd6b);
if(r1(R+518)){{goto L76bd75;}}
}
B76bd6d:L76bd6d:{c.instructions+=2;NFSU2_TR(0x76bd6d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bd6e:{NFSU2_TR(0x76bd6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bd83;}}
}
B76bd70:L76bd70:{c.instructions+=3;NFSU2_TR(0x76bd70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd71:{NFSU2_TR(0x76bd71);
u8 U[4];
w4(U+0,u32(0xfffffff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd73:{NFSU2_TR(0x76bd73);
{goto L76bd7d;}
}
B76bd75:L76bd75:{c.instructions+=3;NFSU2_TR(0x76bd75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd76:{NFSU2_TR(0x76bd76);
u8 U[4];
w4(U+0,u32(0xfffffff5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd78:{NFSU2_TR(0x76bd78);
{goto L76bd7d;}
}
B76bd7a:L76bd7a:{c.instructions+=2;NFSU2_TR(0x76bd7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd7b:{NFSU2_TR(0x76bd7b);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bd7d:L76bd7d:{c.instructions+=1;NFSU2_TR(0x76bd7d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783078),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd83ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bd83:L76bd83:{c.instructions+=5;NFSU2_TR(0x76bd83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76bd85:{NFSU2_TR(0x76bd85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B76bd88:{NFSU2_TR(0x76bd88);
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
B76bd8a:{NFSU2_TR(0x76bd8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76bd8b:{NFSU2_TR(0x76bd8b);
{goto L76bda3;}
}
B76bd8d:L76bd8d:{c.instructions+=1;NFSU2_TR(0x76bd8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd92ull));
TAIL_STATIC(0x7661bau,766);
}
B76bd92:L76bd92:{c.instructions+=2;NFSU2_TR(0x76bd92);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76bd98:{NFSU2_TR(0x76bd98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bd9dull));
TAIL_STATIC(0x7661c3u,766);
}
B76bd9d:L76bd9d:{c.instructions+=2;NFSU2_TR(0x76bd9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76bda0:{NFSU2_TR(0x76bda0);
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
B76bda3:L76bda3:{c.instructions+=3;NFSU2_TR(0x76bda3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76bda4:{NFSU2_TR(0x76bda4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76bda5:{NFSU2_TR(0x76bda5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bda6:L76bda6:{c.instructions+=5;NFSU2_TR(0x76bda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76bdaa:{NFSU2_TR(0x76bdaa);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B76bdb0:{NFSU2_TR(0x76bdb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdb1:{NFSU2_TR(0x76bdb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdb2:{NFSU2_TR(0x76bdb2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76be0c;}}
}
B76bdb4:L76bdb4:{c.instructions+=11;NFSU2_TR(0x76bdb4);
__builtin_memmove((R+0),(R+4),4);
}
B76bdb6:{NFSU2_TR(0x76bdb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76bdb9:{NFSU2_TR(0x76bdb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76bdc0:{NFSU2_TR(0x76bdc0);
__builtin_memmove((R+0),(R+4),4);
}
B76bdc2:{NFSU2_TR(0x76bdc2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76bdc5:{NFSU2_TR(0x76bdc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B76bdc8:{NFSU2_TR(0x76bdc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76bdca:{NFSU2_TR(0x76bdca);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B76bdcd:{NFSU2_TR(0x76bdcd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B76bdcf:{NFSU2_TR(0x76bdcf);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B76bdd3:{NFSU2_TR(0x76bdd3);
if(r1(R+518)){{goto L76be0c;}}
}
B76bdd5:L76bdd5:{c.instructions+=2;NFSU2_TR(0x76bdd5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B76bdd8:{NFSU2_TR(0x76bdd8);
if(r1(R+518)){{goto L76be0c;}}
}
B76bdda:L76bdda:{c.instructions+=2;NFSU2_TR(0x76bdda);
u8 U[8];
__builtin_memmove((U+0),gp(0x819c58),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76bde1:{NFSU2_TR(0x76bde1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76be02;}}
}
B76bde3:L76bde3:{c.instructions+=3;NFSU2_TR(0x76bde3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76bde5:{NFSU2_TR(0x76bde5);
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
B76bde7:{NFSU2_TR(0x76bde7);
if(r1(R+518)){{goto L76bdf9;}}
}
B76bde9:L76bde9:{c.instructions+=2;NFSU2_TR(0x76bde9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bdea:{NFSU2_TR(0x76bdea);
if(r1(R+518)){{goto L76bdf4;}}
}
B76bdec:L76bdec:{c.instructions+=2;NFSU2_TR(0x76bdec);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bded:{NFSU2_TR(0x76bded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76be02;}}
}
B76bdef:L76bdef:{c.instructions+=3;NFSU2_TR(0x76bdef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdf0:{NFSU2_TR(0x76bdf0);
u8 U[4];
w4(U+0,u32(0xfffffff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdf2:{NFSU2_TR(0x76bdf2);
{goto L76bdfc;}
}
B76bdf4:L76bdf4:{c.instructions+=3;NFSU2_TR(0x76bdf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdf5:{NFSU2_TR(0x76bdf5);
u8 U[4];
w4(U+0,u32(0xfffffff5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdf7:{NFSU2_TR(0x76bdf7);
{goto L76bdfc;}
}
B76bdf9:L76bdf9:{c.instructions+=2;NFSU2_TR(0x76bdf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdfa:{NFSU2_TR(0x76bdfa);
u8 U[4];
w4(U+0,u32(0xfffffff6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bdfc:L76bdfc:{c.instructions+=1;NFSU2_TR(0x76bdfc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783078),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76be02ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76be02:L76be02:{c.instructions+=4;NFSU2_TR(0x76be02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76be04:{NFSU2_TR(0x76be04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B76be08:{NFSU2_TR(0x76be08);
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
B76be0a:{NFSU2_TR(0x76be0a);
{goto L76be22;}
}
B76be0c:L76be0c:{c.instructions+=1;NFSU2_TR(0x76be0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76be11ull));
TAIL_STATIC(0x7661bau,766);
}
B76be11:L76be11:{c.instructions+=2;NFSU2_TR(0x76be11);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76be17:{NFSU2_TR(0x76be17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76be1cull));
TAIL_STATIC(0x7661c3u,766);
}
B76be1c:L76be1c:{c.instructions+=2;NFSU2_TR(0x76be1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76be1f:{NFSU2_TR(0x76be1f);
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
B76be22:L76be22:{c.instructions+=3;NFSU2_TR(0x76be22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76be23:{NFSU2_TR(0x76be23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76be24:{NFSU2_TR(0x76be24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76be25:L76be25:{c.instructions+=3;NFSU2_TR(0x76be25);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76be29:{NFSU2_TR(0x76be29);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4ac),4);
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
B76be2f:{NFSU2_TR(0x76be2f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76be4f;}}
}
B76be31:L76be31:{c.instructions+=8;NFSU2_TR(0x76be31);
__builtin_memmove((R+4),(R+0),4);
}
B76be33:{NFSU2_TR(0x76be33);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76be36:{NFSU2_TR(0x76be36);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B76be39:{NFSU2_TR(0x76be39);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B76be40:{NFSU2_TR(0x76be40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76be43:{NFSU2_TR(0x76be43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76be46:{NFSU2_TR(0x76be46);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B76be4a:{NFSU2_TR(0x76be4a);
if(r1(R+518)){{goto L76be4f;}}
}
B76be4c:L76be4c:{c.instructions+=2;NFSU2_TR(0x76be4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76be4e:{NFSU2_TR(0x76be4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76be4f:L76be4f:{c.instructions+=1;NFSU2_TR(0x76be4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76be54ull));
TAIL_STATIC(0x7661bau,766);
}
B76be54:L76be54:{c.instructions+=2;NFSU2_TR(0x76be54);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B76be5a:{NFSU2_TR(0x76be5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76be5full));
TAIL_STATIC(0x7661c3u,766);
}
B76be5f:L76be5f:{c.instructions+=3;NFSU2_TR(0x76be5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B76be62:{NFSU2_TR(0x76be62);
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
B76be65:{NFSU2_TR(0x76be65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76be66:L76be66:{c.instructions+=14;NFSU2_TR(0x76be66);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76be6a:{NFSU2_TR(0x76be6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76be6b:{NFSU2_TR(0x76be6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76be6c:{NFSU2_TR(0x76be6c);
__builtin_memmove((R+4),(R+0),4);
}
B76be6e:{NFSU2_TR(0x76be6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B76be71:{NFSU2_TR(0x76be71);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B76be74:{NFSU2_TR(0x76be74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76be75:{NFSU2_TR(0x76be75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B76be7c:{NFSU2_TR(0x76be7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76be7e:{NFSU2_TR(0x76be7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B76be81:{NFSU2_TR(0x76be81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B76be84:{NFSU2_TR(0x76be84);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B76be86:{NFSU2_TR(0x76be86);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76be8a:{NFSU2_TR(0x76be8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bec5;}}
}
B76be8c:L76be8c:{c.instructions+=2;NFSU2_TR(0x76be8c);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76be8e:{NFSU2_TR(0x76be8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76be93ull));
TAIL_STATIC(0x7631f1u,763);
}
B76be93:L76be93:{c.instructions+=3;NFSU2_TR(0x76be93);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76be97:{NFSU2_TR(0x76be97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76be98:{NFSU2_TR(0x76be98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bebd;}}
}
B76be9a:L76be9a:{c.instructions+=4;NFSU2_TR(0x76be9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76be9d:{NFSU2_TR(0x76be9d);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bea2:{NFSU2_TR(0x76bea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bea3:{NFSU2_TR(0x76bea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bea8ull));
TAIL_STATIC(0x76c3b6u,76c);
}
B76bea8:L76bea8:{c.instructions+=4;NFSU2_TR(0x76bea8);
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
B76beaa:{NFSU2_TR(0x76beaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76beab:{NFSU2_TR(0x76beab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76beac:{NFSU2_TR(0x76beac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76beba;}}
}
B76beae:L76beae:{c.instructions+=2;NFSU2_TR(0x76beae);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76beb0:{NFSU2_TR(0x76beb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76beb5ull));
TAIL_STATIC(0x76315du,763);
}
B76beb5:L76beb5:{c.instructions+=3;NFSU2_TR(0x76beb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76beb6:{NFSU2_TR(0x76beb6);
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
B76beb8:{NFSU2_TR(0x76beb8);
{goto L76bed5;}
}
B76beba:L76beba:{c.instructions+=1;NFSU2_TR(0x76beba);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B76bebd:L76bebd:{c.instructions+=2;NFSU2_TR(0x76bebd);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bebf:{NFSU2_TR(0x76bebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bec4ull));
TAIL_STATIC(0x76315du,763);
}
B76bec4:L76bec4:{c.instructions+=1;NFSU2_TR(0x76bec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bec5:L76bec5:{c.instructions+=4;NFSU2_TR(0x76bec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76bec7:{NFSU2_TR(0x76bec7);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76becb:{NFSU2_TR(0x76becb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76becc:{NFSU2_TR(0x76becc);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bed2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bed2:L76bed2:{c.instructions+=2;NFSU2_TR(0x76bed2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B76bed4:{NFSU2_TR(0x76bed4);
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
B76bed5:L76bed5:{c.instructions+=4;NFSU2_TR(0x76bed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76bed6:{NFSU2_TR(0x76bed6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76bed7:{NFSU2_TR(0x76bed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76bed8:{NFSU2_TR(0x76bed8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76bed9:L76bed9:{c.instructions+=9;NFSU2_TR(0x76bed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76bedd:{NFSU2_TR(0x76bedd);
__builtin_memmove((R+4),(R+0),4);
}
B76bedf:{NFSU2_TR(0x76bedf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bee2:{NFSU2_TR(0x76bee2);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+4),4);
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B76bee5:{NFSU2_TR(0x76bee5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B76beec:{NFSU2_TR(0x76beec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B76beef:{NFSU2_TR(0x76beef);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B76bef3:{NFSU2_TR(0x76bef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bef4:{NFSU2_TR(0x76bef4);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76befaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76befa:L76befa:{c.instructions+=1;NFSU2_TR(0x76befa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76befb:L76befb:{c.instructions+=6;NFSU2_TR(0x76befb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76befc:{NFSU2_TR(0x76befc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76befd:{NFSU2_TR(0x76befd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76befe:{NFSU2_TR(0x76befe);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf00:{NFSU2_TR(0x76bf00);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B76bf03:{NFSU2_TR(0x76bf03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf08ull));
TAIL_STATIC(0x763172u,763);
}
B76bf08:L76bf08:{c.instructions+=3;NFSU2_TR(0x76bf08);
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
B76bf0a:{NFSU2_TR(0x76bf0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bf0b:{NFSU2_TR(0x76bf0b);
if(r1(R+518)){TAIL_STATIC(0x76c042u,76c);}
}
B76bf11:L76bf11:{c.instructions+=5;NFSU2_TR(0x76bf11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf12:{NFSU2_TR(0x76bf12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf13:{NFSU2_TR(0x76bf13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf14:{NFSU2_TR(0x76bf14);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf16:{NFSU2_TR(0x76bf16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf1bull));
TAIL_STATIC(0x7631f1u,763);
}
B76bf1b:L76bf1b:{c.instructions+=5;NFSU2_TR(0x76bf1b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76bf1d:{NFSU2_TR(0x76bf1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bf1e:{NFSU2_TR(0x76bf1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bf22:{NFSU2_TR(0x76bf22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bf26:{NFSU2_TR(0x76bf26);
w4(R+28,u32(0x8ba4c0ull));
}
B76bf2b:L76bf2b:{c.instructions+=3;NFSU2_TR(0x76bf2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B76bf2d:{NFSU2_TR(0x76bf2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76bf2f:{NFSU2_TR(0x76bf2f);
if(r1(R+518)){{goto L76bfe2;}}
}
B76bf35:L76bf35:{c.instructions+=2;NFSU2_TR(0x76bf35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bf3b:{NFSU2_TR(0x76bf3b);
{goto L76bf9b;}
}
B76bf3d:L76bf3d:{c.instructions+=2;NFSU2_TR(0x76bf3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76bf41:{NFSU2_TR(0x76bf41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bf91;}}
}
B76bf43:L76bf43:{c.instructions+=2;NFSU2_TR(0x76bf43);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76bf47:{NFSU2_TR(0x76bf47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bf76;}}
}
B76bf49:L76bf49:{c.instructions+=2;NFSU2_TR(0x76bf49);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf4b:{NFSU2_TR(0x76bf4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf50ull));
TAIL_STATIC(0x7631f1u,763);
}
B76bf50:L76bf50:{c.instructions+=3;NFSU2_TR(0x76bf50);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B76bf54:{NFSU2_TR(0x76bf54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bf55:{NFSU2_TR(0x76bf55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76bf6e;}}
}
B76bf57:L76bf57:{c.instructions+=4;NFSU2_TR(0x76bf57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B76bf5a:{NFSU2_TR(0x76bf5a);
u8 U[4];
w4(U+0,u32(0xfa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf5f:{NFSU2_TR(0x76bf5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf60:{NFSU2_TR(0x76bf60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf65ull));
TAIL_STATIC(0x76c3b6u,76c);
}
B76bf65:L76bf65:{c.instructions+=4;NFSU2_TR(0x76bf65);
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
B76bf67:{NFSU2_TR(0x76bf67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bf68:{NFSU2_TR(0x76bf68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bf69:{NFSU2_TR(0x76bf69);
if(r1(R+518)){{goto L76bfd8;}}
}
B76bf6b:L76bf6b:{c.instructions+=1;NFSU2_TR(0x76bf6b);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B76bf6e:L76bf6e:{c.instructions+=2;NFSU2_TR(0x76bf6e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf70:{NFSU2_TR(0x76bf70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf75ull));
TAIL_STATIC(0x76315du,763);
}
B76bf75:L76bf75:{c.instructions+=1;NFSU2_TR(0x76bf75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bf76:L76bf76:{c.instructions+=3;NFSU2_TR(0x76bf76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B76bf79:{NFSU2_TR(0x76bf79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf7a:{NFSU2_TR(0x76bf7a);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf80ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bf80:L76bf80:{c.instructions+=2;NFSU2_TR(0x76bf80);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B76bf84:{NFSU2_TR(0x76bf84);
if(r1(R+518)){{goto L76bfa1;}}
}
B76bf86:L76bf86:{c.instructions+=2;NFSU2_TR(0x76bf86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bf87:{NFSU2_TR(0x76bf87);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bf8dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76bf8d:L76bf8d:{c.instructions+=1;NFSU2_TR(0x76bf8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76bf91:L76bf91:{c.instructions+=3;NFSU2_TR(0x76bf91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76bf93:{NFSU2_TR(0x76bf93);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B76bf96:{NFSU2_TR(0x76bf96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x480ull))));
}
B76bf9b:L76bf9b:{c.instructions+=2;NFSU2_TR(0x76bf9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B76bf9d:{NFSU2_TR(0x76bf9d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bf3du);}goto L76bf3d;}}
}
B76bf9f:L76bf9f:{c.instructions+=1;NFSU2_TR(0x76bf9f);
{goto L76bfbd;}
}
B76bfa1:L76bfa1:{c.instructions+=11;NFSU2_TR(0x76bfa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+24)),r4(U+0));
}
B76bfa4:{NFSU2_TR(0x76bfa4);
__builtin_memmove((R+0),(R+24),4);
}
B76bfa6:{NFSU2_TR(0x76bfa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B76bfa8:{NFSU2_TR(0x76bfa8);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bfaa:{NFSU2_TR(0x76bfaa);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B76bfab:{NFSU2_TR(0x76bfab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bfac:{NFSU2_TR(0x76bfac);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bfac);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x76bfac);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B76bfae:{NFSU2_TR(0x76bfae);
__builtin_memmove((R+20),(R+0),4);
}
B76bfb0:{NFSU2_TR(0x76bfb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(U+4))));
}
B76bfb4:{NFSU2_TR(0x76bfb4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B76bfb7:{NFSU2_TR(0x76bfb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76c037u,76c);}
}
B76bfb9:L76bfb9:{c.instructions+=1;NFSU2_TR(0x76bfb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76bfbd:L76bfbd:{c.instructions+=6;NFSU2_TR(0x76bfbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76bfc2:{NFSU2_TR(0x76bfc2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76bfc3:{NFSU2_TR(0x76bfc3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B76bfc6:{NFSU2_TR(0x76bfc6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ba5c0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ba5c0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ba5c0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76bfcc:{NFSU2_TR(0x76bfcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76bfd0:{NFSU2_TR(0x76bfd0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76bf2bu);}goto L76bf2b;}}
}
B76bfd6:L76bfd6:{c.instructions+=1;NFSU2_TR(0x76bfd6);
TAIL_STATIC(0x76c037u,76c);
}
B76bfd8:L76bfd8:{c.instructions+=2;NFSU2_TR(0x76bfd8);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bfda:{NFSU2_TR(0x76bfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bfdfull));
TAIL_STATIC(0x76315du,763);
}
B76bfdf:L76bfdf:{c.instructions+=2;NFSU2_TR(0x76bfdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bfe0:{NFSU2_TR(0x76bfe0);
TAIL_STATIC(0x76c034u,76c);
}
B76bfe2:L76bfe2:{c.instructions+=3;NFSU2_TR(0x76bfe2);
w4(R+24,u32(0x480ull));
}
B76bfe7:{NFSU2_TR(0x76bfe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76bfe8:{NFSU2_TR(0x76bfe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76bfedull));
TAIL_STATIC(0x75c6c8u,75c);
}
B76bfed:L76bfed:{c.instructions+=3;NFSU2_TR(0x76bfed);
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
B76bfef:{NFSU2_TR(0x76bfef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76bff0:{NFSU2_TR(0x76bff0);
if(r1(R+518)){TAIL_STATIC(0x76c037u,76c);}
}
B76bff2:L76bff2:{c.instructions+=2;NFSU2_TR(0x76bff2);
s4(0x8ba4ac,u32(u32(m4(0x8ba4ac))+u32(u32(0x20ull))));
}
B76bff9:{NFSU2_TR(0x76bff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x76c000u,76c);
}
XIT:NFSU2_TR_EXIT(0x76b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
