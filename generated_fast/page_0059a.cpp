#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x59a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x59a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_59a(u8* __restrict R,Cpu& c);
u32 page_59a(Cpu& c){return body_59a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_59a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x59a000:goto L59a000;
case 0x59a007:c.instructions+=4;goto B59a007;
case 0x59a00e:c.instructions+=3;goto B59a00e;
case 0x59a011:c.instructions+=2;goto B59a011;
case 0x59a013:c.instructions+=1;goto B59a013;
case 0x59a015:goto L59a015;
case 0x59a01c:c.instructions+=1;goto B59a01c;
case 0x59a01e:goto L59a01e;
case 0x59a024:goto L59a024;
case 0x59a026:c.instructions+=4;goto B59a026;
case 0x59a02d:c.instructions+=3;goto B59a02d;
case 0x59a030:c.instructions+=2;goto B59a030;
case 0x59a032:c.instructions+=1;goto B59a032;
case 0x59a034:goto L59a034;
case 0x59a03b:c.instructions+=1;goto B59a03b;
case 0x59a03d:goto L59a03d;
case 0x59a043:goto L59a043;
case 0x59a045:c.instructions+=6;goto B59a045;
case 0x59a047:c.instructions+=5;goto B59a047;
case 0x59a04e:c.instructions+=4;goto B59a04e;
case 0x59a051:c.instructions+=3;goto B59a051;
case 0x59a053:c.instructions+=2;goto B59a053;
case 0x59a055:c.instructions+=1;goto B59a055;
case 0x59a057:goto L59a057;
case 0x59a05e:c.instructions+=1;goto B59a05e;
case 0x59a060:goto L59a060;
case 0x59a066:goto L59a066;
case 0x59a06d:c.instructions+=6;goto B59a06d;
case 0x59a06f:c.instructions+=5;goto B59a06f;
case 0x59a076:c.instructions+=4;goto B59a076;
case 0x59a079:c.instructions+=3;goto B59a079;
case 0x59a07b:c.instructions+=2;goto B59a07b;
case 0x59a07d:c.instructions+=1;goto B59a07d;
case 0x59a07f:goto L59a07f;
case 0x59a086:c.instructions+=1;goto B59a086;
case 0x59a088:goto L59a088;
case 0x59a08e:goto L59a08e;
case 0x59a095:c.instructions+=4;goto B59a095;
case 0x59a09c:c.instructions+=3;goto B59a09c;
case 0x59a09f:c.instructions+=2;goto B59a09f;
case 0x59a0a1:c.instructions+=1;goto B59a0a1;
case 0x59a0a3:goto L59a0a3;
case 0x59a0aa:c.instructions+=1;goto B59a0aa;
case 0x59a0ac:goto L59a0ac;
case 0x59a0b2:goto L59a0b2;
case 0x59a0b4:c.instructions+=4;goto B59a0b4;
case 0x59a0bb:c.instructions+=3;goto B59a0bb;
case 0x59a0be:c.instructions+=2;goto B59a0be;
case 0x59a0c0:c.instructions+=1;goto B59a0c0;
case 0x59a0c2:goto L59a0c2;
case 0x59a0c9:c.instructions+=1;goto B59a0c9;
case 0x59a0cb:goto L59a0cb;
case 0x59a0d1:goto L59a0d1;
case 0x59a0d3:c.instructions+=6;goto B59a0d3;
case 0x59a0d5:c.instructions+=5;goto B59a0d5;
case 0x59a0dc:c.instructions+=4;goto B59a0dc;
case 0x59a0df:c.instructions+=3;goto B59a0df;
case 0x59a0e1:c.instructions+=2;goto B59a0e1;
case 0x59a0e3:c.instructions+=1;goto B59a0e3;
case 0x59a0e5:goto L59a0e5;
case 0x59a0ec:c.instructions+=1;goto B59a0ec;
case 0x59a0ee:goto L59a0ee;
case 0x59a0f4:goto L59a0f4;
case 0x59a0fb:c.instructions+=6;goto B59a0fb;
case 0x59a0fd:c.instructions+=5;goto B59a0fd;
case 0x59a104:c.instructions+=4;goto B59a104;
case 0x59a107:c.instructions+=3;goto B59a107;
case 0x59a109:c.instructions+=2;goto B59a109;
case 0x59a10b:c.instructions+=1;goto B59a10b;
case 0x59a10d:goto L59a10d;
case 0x59a114:c.instructions+=1;goto B59a114;
case 0x59a116:goto L59a116;
case 0x59a11c:goto L59a11c;
case 0x59a123:c.instructions+=4;goto B59a123;
case 0x59a12a:c.instructions+=3;goto B59a12a;
case 0x59a12d:c.instructions+=2;goto B59a12d;
case 0x59a12f:c.instructions+=1;goto B59a12f;
case 0x59a131:goto L59a131;
case 0x59a138:c.instructions+=1;goto B59a138;
case 0x59a13a:goto L59a13a;
case 0x59a140:goto L59a140;
case 0x59a142:c.instructions+=4;goto B59a142;
case 0x59a149:c.instructions+=3;goto B59a149;
case 0x59a14c:c.instructions+=2;goto B59a14c;
case 0x59a14e:c.instructions+=1;goto B59a14e;
case 0x59a150:goto L59a150;
case 0x59a157:c.instructions+=1;goto B59a157;
case 0x59a159:goto L59a159;
case 0x59a15f:goto L59a15f;
case 0x59a161:c.instructions+=6;goto B59a161;
case 0x59a163:c.instructions+=5;goto B59a163;
case 0x59a16a:c.instructions+=4;goto B59a16a;
case 0x59a16d:c.instructions+=3;goto B59a16d;
case 0x59a16f:c.instructions+=2;goto B59a16f;
case 0x59a171:c.instructions+=1;goto B59a171;
case 0x59a173:goto L59a173;
case 0x59a17a:c.instructions+=1;goto B59a17a;
case 0x59a17c:goto L59a17c;
case 0x59a182:goto L59a182;
case 0x59a189:c.instructions+=6;goto B59a189;
case 0x59a18b:c.instructions+=5;goto B59a18b;
case 0x59a192:c.instructions+=4;goto B59a192;
case 0x59a195:c.instructions+=3;goto B59a195;
case 0x59a197:c.instructions+=2;goto B59a197;
case 0x59a199:c.instructions+=1;goto B59a199;
case 0x59a19b:goto L59a19b;
case 0x59a1a2:c.instructions+=1;goto B59a1a2;
case 0x59a1a4:goto L59a1a4;
case 0x59a1aa:goto L59a1aa;
case 0x59a1b1:c.instructions+=4;goto B59a1b1;
case 0x59a1b8:c.instructions+=3;goto B59a1b8;
case 0x59a1bb:c.instructions+=2;goto B59a1bb;
case 0x59a1bd:c.instructions+=1;goto B59a1bd;
case 0x59a1bf:goto L59a1bf;
case 0x59a1c6:c.instructions+=1;goto B59a1c6;
case 0x59a1c8:goto L59a1c8;
case 0x59a1ce:goto L59a1ce;
case 0x59a1d0:c.instructions+=4;goto B59a1d0;
case 0x59a1d7:c.instructions+=3;goto B59a1d7;
case 0x59a1da:c.instructions+=2;goto B59a1da;
case 0x59a1dc:c.instructions+=1;goto B59a1dc;
case 0x59a1de:goto L59a1de;
case 0x59a1e5:c.instructions+=1;goto B59a1e5;
case 0x59a1e7:goto L59a1e7;
case 0x59a1ed:goto L59a1ed;
case 0x59a1ef:c.instructions+=6;goto B59a1ef;
case 0x59a1f1:c.instructions+=5;goto B59a1f1;
case 0x59a1f8:c.instructions+=4;goto B59a1f8;
case 0x59a1fb:c.instructions+=3;goto B59a1fb;
case 0x59a1fd:c.instructions+=2;goto B59a1fd;
case 0x59a1ff:c.instructions+=1;goto B59a1ff;
case 0x59a201:goto L59a201;
case 0x59a208:c.instructions+=1;goto B59a208;
case 0x59a20a:goto L59a20a;
case 0x59a210:goto L59a210;
case 0x59a217:c.instructions+=6;goto B59a217;
case 0x59a219:c.instructions+=5;goto B59a219;
case 0x59a220:c.instructions+=4;goto B59a220;
case 0x59a223:c.instructions+=3;goto B59a223;
case 0x59a225:c.instructions+=2;goto B59a225;
case 0x59a227:c.instructions+=1;goto B59a227;
case 0x59a229:goto L59a229;
case 0x59a230:c.instructions+=1;goto B59a230;
case 0x59a232:goto L59a232;
case 0x59a238:goto L59a238;
case 0x59a23f:c.instructions+=4;goto B59a23f;
case 0x59a246:c.instructions+=3;goto B59a246;
case 0x59a249:c.instructions+=2;goto B59a249;
case 0x59a24b:c.instructions+=1;goto B59a24b;
case 0x59a24d:goto L59a24d;
case 0x59a254:c.instructions+=1;goto B59a254;
case 0x59a256:goto L59a256;
case 0x59a25c:goto L59a25c;
case 0x59a25e:c.instructions+=4;goto B59a25e;
case 0x59a265:c.instructions+=3;goto B59a265;
case 0x59a268:c.instructions+=2;goto B59a268;
case 0x59a26a:c.instructions+=1;goto B59a26a;
case 0x59a26c:goto L59a26c;
case 0x59a273:c.instructions+=1;goto B59a273;
case 0x59a275:goto L59a275;
case 0x59a27b:goto L59a27b;
case 0x59a27d:c.instructions+=6;goto B59a27d;
case 0x59a27f:c.instructions+=5;goto B59a27f;
case 0x59a286:c.instructions+=4;goto B59a286;
case 0x59a289:c.instructions+=3;goto B59a289;
case 0x59a28b:c.instructions+=2;goto B59a28b;
case 0x59a28d:c.instructions+=1;goto B59a28d;
case 0x59a28f:goto L59a28f;
case 0x59a296:c.instructions+=1;goto B59a296;
case 0x59a298:goto L59a298;
case 0x59a29e:goto L59a29e;
case 0x59a2a5:c.instructions+=6;goto B59a2a5;
case 0x59a2a7:c.instructions+=5;goto B59a2a7;
case 0x59a2ae:c.instructions+=4;goto B59a2ae;
case 0x59a2b1:c.instructions+=3;goto B59a2b1;
case 0x59a2b3:c.instructions+=2;goto B59a2b3;
case 0x59a2b5:c.instructions+=1;goto B59a2b5;
case 0x59a2b7:goto L59a2b7;
case 0x59a2be:c.instructions+=1;goto B59a2be;
case 0x59a2c0:goto L59a2c0;
case 0x59a2c6:goto L59a2c6;
case 0x59a2cd:c.instructions+=4;goto B59a2cd;
case 0x59a2d4:c.instructions+=3;goto B59a2d4;
case 0x59a2d7:c.instructions+=2;goto B59a2d7;
case 0x59a2d9:c.instructions+=1;goto B59a2d9;
case 0x59a2db:goto L59a2db;
case 0x59a2e2:c.instructions+=1;goto B59a2e2;
case 0x59a2e4:goto L59a2e4;
case 0x59a2ea:goto L59a2ea;
case 0x59a2ec:c.instructions+=4;goto B59a2ec;
case 0x59a2f3:c.instructions+=3;goto B59a2f3;
case 0x59a2f6:c.instructions+=2;goto B59a2f6;
case 0x59a2f8:c.instructions+=1;goto B59a2f8;
case 0x59a2fa:goto L59a2fa;
case 0x59a301:c.instructions+=1;goto B59a301;
case 0x59a303:goto L59a303;
case 0x59a309:goto L59a309;
case 0x59a30b:c.instructions+=6;goto B59a30b;
case 0x59a30d:c.instructions+=5;goto B59a30d;
case 0x59a314:c.instructions+=4;goto B59a314;
case 0x59a317:c.instructions+=3;goto B59a317;
case 0x59a319:c.instructions+=2;goto B59a319;
case 0x59a31b:c.instructions+=1;goto B59a31b;
case 0x59a31d:goto L59a31d;
case 0x59a324:c.instructions+=1;goto B59a324;
case 0x59a326:goto L59a326;
case 0x59a32c:goto L59a32c;
case 0x59a333:c.instructions+=6;goto B59a333;
case 0x59a336:c.instructions+=5;goto B59a336;
case 0x59a339:c.instructions+=4;goto B59a339;
case 0x59a33b:c.instructions+=3;goto B59a33b;
case 0x59a342:c.instructions+=2;goto B59a342;
case 0x59a344:c.instructions+=1;goto B59a344;
case 0x59a34a:goto L59a34a;
case 0x59a34b:c.instructions+=2;goto B59a34b;
case 0x59a34c:c.instructions+=1;goto B59a34c;
case 0x59a350:goto L59a350;
case 0x59a353:c.instructions+=8;goto B59a353;
case 0x59a354:c.instructions+=7;goto B59a354;
case 0x59a355:c.instructions+=6;goto B59a355;
case 0x59a357:c.instructions+=5;goto B59a357;
case 0x59a358:c.instructions+=4;goto B59a358;
case 0x59a360:c.instructions+=3;goto B59a360;
case 0x59a368:c.instructions+=2;goto B59a368;
case 0x59a36e:c.instructions+=1;goto B59a36e;
case 0x59a371:goto L59a371;
case 0x59a375:c.instructions+=3;goto B59a375;
case 0x59a376:c.instructions+=2;goto B59a376;
case 0x59a378:c.instructions+=1;goto B59a378;
case 0x59a37d:goto L59a37d;
case 0x59a381:c.instructions+=2;goto B59a381;
case 0x59a384:c.instructions+=1;goto B59a384;
case 0x59a386:goto L59a386;
case 0x59a388:c.instructions+=4;goto B59a388;
case 0x59a38a:c.instructions+=3;goto B59a38a;
case 0x59a38c:c.instructions+=2;goto B59a38c;
case 0x59a38e:c.instructions+=1;goto B59a38e;
case 0x59a393:goto L59a393;
case 0x59a397:c.instructions+=6;goto B59a397;
case 0x59a39a:c.instructions+=5;goto B59a39a;
case 0x59a39c:c.instructions+=4;goto B59a39c;
case 0x59a3a2:c.instructions+=3;goto B59a3a2;
case 0x59a3a6:c.instructions+=2;goto B59a3a6;
case 0x59a3aa:c.instructions+=1;goto B59a3aa;
case 0x59a3ac:goto L59a3ac;
case 0x59a3ae:c.instructions+=4;goto B59a3ae;
case 0x59a3b0:c.instructions+=3;goto B59a3b0;
case 0x59a3b2:c.instructions+=2;goto B59a3b2;
case 0x59a3b4:c.instructions+=1;goto B59a3b4;
case 0x59a3b9:goto L59a3b9;
case 0x59a3bd:c.instructions+=6;goto B59a3bd;
case 0x59a3c3:c.instructions+=5;goto B59a3c3;
case 0x59a3c7:c.instructions+=4;goto B59a3c7;
case 0x59a3c9:c.instructions+=3;goto B59a3c9;
case 0x59a3cb:c.instructions+=2;goto B59a3cb;
case 0x59a3ce:c.instructions+=1;goto B59a3ce;
case 0x59a3d0:goto L59a3d0;
case 0x59a3d4:c.instructions+=12;goto B59a3d4;
case 0x59a3d6:c.instructions+=11;goto B59a3d6;
case 0x59a3dc:c.instructions+=10;goto B59a3dc;
case 0x59a3e0:c.instructions+=9;goto B59a3e0;
case 0x59a3e4:c.instructions+=8;goto B59a3e4;
case 0x59a3e6:c.instructions+=7;goto B59a3e6;
case 0x59a3ec:c.instructions+=6;goto B59a3ec;
case 0x59a3f0:c.instructions+=5;goto B59a3f0;
case 0x59a3f4:c.instructions+=4;goto B59a3f4;
case 0x59a3fa:c.instructions+=3;goto B59a3fa;
case 0x59a3fc:c.instructions+=2;goto B59a3fc;
case 0x59a3ff:c.instructions+=1;goto B59a3ff;
case 0x59a405:goto L59a405;
case 0x59a409:c.instructions+=5;goto B59a409;
case 0x59a40a:c.instructions+=4;goto B59a40a;
case 0x59a40b:c.instructions+=3;goto B59a40b;
case 0x59a40c:c.instructions+=2;goto B59a40c;
case 0x59a40f:c.instructions+=1;goto B59a40f;
case 0x59a410:goto L59a410;
case 0x59a411:c.instructions+=6;goto B59a411;
case 0x59a413:c.instructions+=5;goto B59a413;
case 0x59a417:c.instructions+=4;goto B59a417;
case 0x59a418:c.instructions+=3;goto B59a418;
case 0x59a419:c.instructions+=2;goto B59a419;
case 0x59a41c:c.instructions+=1;goto B59a41c;
case 0x59a420:goto L59a420;
case 0x59a426:c.instructions+=3;goto B59a426;
case 0x59a42c:c.instructions+=2;goto B59a42c;
case 0x59a42e:c.instructions+=1;goto B59a42e;
case 0x59a430:goto L59a430;
case 0x59a432:c.instructions+=1;goto B59a432;
case 0x59a438:goto L59a438;
case 0x59a43e:c.instructions+=2;goto B59a43e;
case 0x59a440:c.instructions+=1;goto B59a440;
case 0x59a442:goto L59a442;
case 0x59a448:goto L59a448;
case 0x59a450:goto L59a450;
case 0x59a454:c.instructions+=14;goto B59a454;
case 0x59a45b:c.instructions+=13;goto B59a45b;
case 0x59a45d:c.instructions+=12;goto B59a45d;
case 0x59a464:c.instructions+=11;goto B59a464;
case 0x59a465:c.instructions+=10;goto B59a465;
case 0x59a469:c.instructions+=9;goto B59a469;
case 0x59a46b:c.instructions+=8;goto B59a46b;
case 0x59a472:c.instructions+=7;goto B59a472;
case 0x59a474:c.instructions+=6;goto B59a474;
case 0x59a477:c.instructions+=5;goto B59a477;
case 0x59a47b:c.instructions+=4;goto B59a47b;
case 0x59a47f:c.instructions+=3;goto B59a47f;
case 0x59a481:c.instructions+=2;goto B59a481;
case 0x59a482:c.instructions+=1;goto B59a482;
case 0x59a490:goto L59a490;
case 0x59a494:c.instructions+=3;goto B59a494;
case 0x59a496:c.instructions+=2;goto B59a496;
case 0x59a498:c.instructions+=1;goto B59a498;
case 0x59a49a:goto L59a49a;
case 0x59a49e:c.instructions+=4;goto B59a49e;
case 0x59a4a4:c.instructions+=3;goto B59a4a4;
case 0x59a4a6:c.instructions+=2;goto B59a4a6;
case 0x59a4a9:c.instructions+=1;goto B59a4a9;
case 0x59a4ab:goto L59a4ab;
case 0x59a4af:c.instructions+=5;goto B59a4af;
case 0x59a4b5:c.instructions+=4;goto B59a4b5;
case 0x59a4b9:c.instructions+=3;goto B59a4b9;
case 0x59a4bb:c.instructions+=2;goto B59a4bb;
case 0x59a4be:c.instructions+=1;goto B59a4be;
case 0x59a4c0:goto L59a4c0;
case 0x59a4c2:c.instructions+=1;goto B59a4c2;
case 0x59a4c8:goto L59a4c8;
case 0x59a4ce:c.instructions+=6;goto B59a4ce;
case 0x59a4d4:c.instructions+=5;goto B59a4d4;
case 0x59a4d6:c.instructions+=4;goto B59a4d6;
case 0x59a4dc:c.instructions+=3;goto B59a4dc;
case 0x59a4de:c.instructions+=2;goto B59a4de;
case 0x59a4e4:c.instructions+=1;goto B59a4e4;
case 0x59a4e8:goto L59a4e8;
case 0x59a4ed:c.instructions+=1;goto B59a4ed;
case 0x59a4f0:goto L59a4f0;
case 0x59a4f4:c.instructions+=4;goto B59a4f4;
case 0x59a4fb:c.instructions+=3;goto B59a4fb;
case 0x59a4fd:c.instructions+=2;goto B59a4fd;
case 0x59a500:c.instructions+=1;goto B59a500;
case 0x59a502:goto L59a502;
case 0x59a503:c.instructions+=1;goto B59a503;
case 0x59a505:goto L59a505;
case 0x59a507:c.instructions+=1;goto B59a507;
case 0x59a508:goto L59a508;
case 0x59a50e:c.instructions+=1;goto B59a50e;
case 0x59a510:goto L59a510;
case 0x59a512:c.instructions+=2;goto B59a512;
case 0x59a514:c.instructions+=1;goto B59a514;
case 0x59a520:goto L59a520;
case 0x59a521:c.instructions+=13;goto B59a521;
case 0x59a523:c.instructions+=12;goto B59a523;
case 0x59a526:c.instructions+=11;goto B59a526;
case 0x59a52c:c.instructions+=10;goto B59a52c;
case 0x59a52d:c.instructions+=9;goto B59a52d;
case 0x59a52e:c.instructions+=8;goto B59a52e;
case 0x59a52f:c.instructions+=7;goto B59a52f;
case 0x59a531:c.instructions+=6;goto B59a531;
case 0x59a537:c.instructions+=5;goto B59a537;
case 0x59a538:c.instructions+=4;goto B59a538;
case 0x59a53e:c.instructions+=3;goto B59a53e;
case 0x59a540:c.instructions+=2;goto B59a540;
case 0x59a545:c.instructions+=1;goto B59a545;
case 0x59a549:goto L59a549;
case 0x59a54b:goto L59a54b;
case 0x59a550:goto L59a550;
case 0x59a554:c.instructions+=3;goto B59a554;
case 0x59a55a:c.instructions+=2;goto B59a55a;
case 0x59a560:c.instructions+=1;goto B59a560;
case 0x59a565:goto L59a565;
case 0x59a56b:c.instructions+=3;goto B59a56b;
case 0x59a571:c.instructions+=2;goto B59a571;
case 0x59a575:c.instructions+=1;goto B59a575;
case 0x59a57a:goto L59a57a;
case 0x59a580:c.instructions+=3;goto B59a580;
case 0x59a586:c.instructions+=2;goto B59a586;
case 0x59a58a:c.instructions+=1;goto B59a58a;
case 0x59a58f:goto L59a58f;
case 0x59a595:c.instructions+=3;goto B59a595;
case 0x59a59b:c.instructions+=2;goto B59a59b;
case 0x59a59f:c.instructions+=1;goto B59a59f;
case 0x59a5a4:goto L59a5a4;
case 0x59a5aa:c.instructions+=3;goto B59a5aa;
case 0x59a5b0:c.instructions+=2;goto B59a5b0;
case 0x59a5b4:c.instructions+=1;goto B59a5b4;
case 0x59a5b9:goto L59a5b9;
case 0x59a5bf:c.instructions+=3;goto B59a5bf;
case 0x59a5c5:c.instructions+=2;goto B59a5c5;
case 0x59a5c9:c.instructions+=1;goto B59a5c9;
case 0x59a5ce:goto L59a5ce;
case 0x59a5d4:c.instructions+=3;goto B59a5d4;
case 0x59a5da:c.instructions+=2;goto B59a5da;
case 0x59a5de:c.instructions+=1;goto B59a5de;
case 0x59a5e3:goto L59a5e3;
case 0x59a5e9:c.instructions+=3;goto B59a5e9;
case 0x59a5ef:c.instructions+=2;goto B59a5ef;
case 0x59a5f3:c.instructions+=1;goto B59a5f3;
case 0x59a5f8:goto L59a5f8;
case 0x59a5fe:c.instructions+=3;goto B59a5fe;
case 0x59a604:c.instructions+=2;goto B59a604;
case 0x59a608:c.instructions+=1;goto B59a608;
case 0x59a60d:goto L59a60d;
case 0x59a613:c.instructions+=3;goto B59a613;
case 0x59a619:c.instructions+=2;goto B59a619;
case 0x59a61d:c.instructions+=1;goto B59a61d;
case 0x59a622:goto L59a622;
case 0x59a628:c.instructions+=3;goto B59a628;
case 0x59a62e:c.instructions+=2;goto B59a62e;
case 0x59a632:c.instructions+=1;goto B59a632;
case 0x59a637:goto L59a637;
case 0x59a63d:c.instructions+=3;goto B59a63d;
case 0x59a643:c.instructions+=2;goto B59a643;
case 0x59a647:c.instructions+=1;goto B59a647;
case 0x59a64c:goto L59a64c;
case 0x59a652:c.instructions+=3;goto B59a652;
case 0x59a658:c.instructions+=2;goto B59a658;
case 0x59a65c:c.instructions+=1;goto B59a65c;
case 0x59a661:goto L59a661;
case 0x59a667:c.instructions+=3;goto B59a667;
case 0x59a66b:c.instructions+=2;goto B59a66b;
case 0x59a671:c.instructions+=1;goto B59a671;
case 0x59a676:goto L59a676;
case 0x59a67c:c.instructions+=3;goto B59a67c;
case 0x59a682:c.instructions+=2;goto B59a682;
case 0x59a686:c.instructions+=1;goto B59a686;
case 0x59a68b:goto L59a68b;
case 0x59a691:c.instructions+=3;goto B59a691;
case 0x59a697:c.instructions+=2;goto B59a697;
case 0x59a69b:c.instructions+=1;goto B59a69b;
case 0x59a6a0:goto L59a6a0;
case 0x59a6a6:c.instructions+=3;goto B59a6a6;
case 0x59a6ac:c.instructions+=2;goto B59a6ac;
case 0x59a6b0:c.instructions+=1;goto B59a6b0;
case 0x59a6b5:goto L59a6b5;
case 0x59a6bb:c.instructions+=3;goto B59a6bb;
case 0x59a6c1:c.instructions+=2;goto B59a6c1;
case 0x59a6c5:c.instructions+=1;goto B59a6c5;
case 0x59a6ca:goto L59a6ca;
case 0x59a6d0:c.instructions+=3;goto B59a6d0;
case 0x59a6d6:c.instructions+=2;goto B59a6d6;
case 0x59a6da:c.instructions+=1;goto B59a6da;
case 0x59a6df:goto L59a6df;
case 0x59a6e5:c.instructions+=3;goto B59a6e5;
case 0x59a6eb:c.instructions+=2;goto B59a6eb;
case 0x59a6ef:c.instructions+=1;goto B59a6ef;
case 0x59a6f4:goto L59a6f4;
case 0x59a6f6:c.instructions+=3;goto B59a6f6;
case 0x59a6fc:c.instructions+=2;goto B59a6fc;
case 0x59a700:c.instructions+=1;goto B59a700;
case 0x59a705:goto L59a705;
case 0x59a708:c.instructions+=3;goto B59a708;
case 0x59a70e:c.instructions+=2;goto B59a70e;
case 0x59a712:c.instructions+=1;goto B59a712;
case 0x59a717:goto L59a717;
case 0x59a71a:c.instructions+=3;goto B59a71a;
case 0x59a720:c.instructions+=2;goto B59a720;
case 0x59a724:c.instructions+=1;goto B59a724;
case 0x59a729:goto L59a729;
case 0x59a72f:c.instructions+=3;goto B59a72f;
case 0x59a735:c.instructions+=2;goto B59a735;
case 0x59a739:c.instructions+=1;goto B59a739;
case 0x59a73e:goto L59a73e;
case 0x59a744:c.instructions+=3;goto B59a744;
case 0x59a74a:c.instructions+=2;goto B59a74a;
case 0x59a74e:c.instructions+=1;goto B59a74e;
case 0x59a753:goto L59a753;
case 0x59a759:c.instructions+=3;goto B59a759;
case 0x59a75f:c.instructions+=2;goto B59a75f;
case 0x59a763:c.instructions+=1;goto B59a763;
case 0x59a768:goto L59a768;
case 0x59a76e:c.instructions+=3;goto B59a76e;
case 0x59a774:c.instructions+=2;goto B59a774;
case 0x59a778:c.instructions+=1;goto B59a778;
case 0x59a77d:goto L59a77d;
case 0x59a783:c.instructions+=3;goto B59a783;
case 0x59a789:c.instructions+=2;goto B59a789;
case 0x59a78d:c.instructions+=1;goto B59a78d;
case 0x59a792:goto L59a792;
case 0x59a798:c.instructions+=3;goto B59a798;
case 0x59a79e:c.instructions+=2;goto B59a79e;
case 0x59a7a5:c.instructions+=1;goto B59a7a5;
case 0x59a7aa:goto L59a7aa;
case 0x59a7b0:c.instructions+=3;goto B59a7b0;
case 0x59a7b6:c.instructions+=2;goto B59a7b6;
case 0x59a7bd:c.instructions+=1;goto B59a7bd;
case 0x59a7c2:goto L59a7c2;
case 0x59a7c8:c.instructions+=3;goto B59a7c8;
case 0x59a7cf:c.instructions+=2;goto B59a7cf;
case 0x59a7d5:c.instructions+=1;goto B59a7d5;
case 0x59a7da:goto L59a7da;
case 0x59a7e0:c.instructions+=3;goto B59a7e0;
case 0x59a7e6:c.instructions+=2;goto B59a7e6;
case 0x59a7ed:c.instructions+=1;goto B59a7ed;
case 0x59a7f2:goto L59a7f2;
case 0x59a7f8:c.instructions+=3;goto B59a7f8;
case 0x59a7fe:c.instructions+=2;goto B59a7fe;
case 0x59a805:c.instructions+=1;goto B59a805;
case 0x59a80a:goto L59a80a;
case 0x59a810:c.instructions+=3;goto B59a810;
case 0x59a816:c.instructions+=2;goto B59a816;
case 0x59a81d:c.instructions+=1;goto B59a81d;
case 0x59a822:goto L59a822;
case 0x59a828:c.instructions+=3;goto B59a828;
case 0x59a82e:c.instructions+=2;goto B59a82e;
case 0x59a835:c.instructions+=1;goto B59a835;
case 0x59a83a:goto L59a83a;
case 0x59a840:c.instructions+=3;goto B59a840;
case 0x59a846:c.instructions+=2;goto B59a846;
case 0x59a84d:c.instructions+=1;goto B59a84d;
case 0x59a852:goto L59a852;
case 0x59a858:c.instructions+=3;goto B59a858;
case 0x59a85e:c.instructions+=2;goto B59a85e;
case 0x59a865:c.instructions+=1;goto B59a865;
case 0x59a86a:goto L59a86a;
case 0x59a870:c.instructions+=3;goto B59a870;
case 0x59a876:c.instructions+=2;goto B59a876;
case 0x59a87d:c.instructions+=1;goto B59a87d;
case 0x59a882:goto L59a882;
case 0x59a888:c.instructions+=3;goto B59a888;
case 0x59a88f:c.instructions+=2;goto B59a88f;
case 0x59a895:c.instructions+=1;goto B59a895;
case 0x59a89a:goto L59a89a;
case 0x59a8a0:c.instructions+=3;goto B59a8a0;
case 0x59a8a6:c.instructions+=2;goto B59a8a6;
case 0x59a8ad:c.instructions+=1;goto B59a8ad;
case 0x59a8b2:goto L59a8b2;
case 0x59a8b8:c.instructions+=3;goto B59a8b8;
case 0x59a8be:c.instructions+=2;goto B59a8be;
case 0x59a8c5:c.instructions+=1;goto B59a8c5;
case 0x59a8ca:goto L59a8ca;
case 0x59a8d0:c.instructions+=3;goto B59a8d0;
case 0x59a8d6:c.instructions+=2;goto B59a8d6;
case 0x59a8dd:c.instructions+=1;goto B59a8dd;
case 0x59a8e2:goto L59a8e2;
case 0x59a8e8:c.instructions+=3;goto B59a8e8;
case 0x59a8ee:c.instructions+=2;goto B59a8ee;
case 0x59a8f5:c.instructions+=1;goto B59a8f5;
case 0x59a8fa:goto L59a8fa;
case 0x59a900:c.instructions+=3;goto B59a900;
case 0x59a906:c.instructions+=2;goto B59a906;
case 0x59a90d:c.instructions+=1;goto B59a90d;
case 0x59a912:goto L59a912;
case 0x59a918:c.instructions+=3;goto B59a918;
case 0x59a91e:c.instructions+=2;goto B59a91e;
case 0x59a925:c.instructions+=1;goto B59a925;
case 0x59a92a:goto L59a92a;
case 0x59a930:c.instructions+=3;goto B59a930;
case 0x59a936:c.instructions+=2;goto B59a936;
case 0x59a93d:c.instructions+=1;goto B59a93d;
case 0x59a942:goto L59a942;
case 0x59a948:c.instructions+=3;goto B59a948;
case 0x59a94f:c.instructions+=2;goto B59a94f;
case 0x59a955:c.instructions+=1;goto B59a955;
case 0x59a95a:goto L59a95a;
case 0x59a960:c.instructions+=3;goto B59a960;
case 0x59a966:c.instructions+=2;goto B59a966;
case 0x59a96d:c.instructions+=1;goto B59a96d;
case 0x59a972:goto L59a972;
case 0x59a978:c.instructions+=3;goto B59a978;
case 0x59a97e:c.instructions+=2;goto B59a97e;
case 0x59a985:c.instructions+=1;goto B59a985;
case 0x59a98a:goto L59a98a;
case 0x59a990:c.instructions+=3;goto B59a990;
case 0x59a996:c.instructions+=2;goto B59a996;
case 0x59a99d:c.instructions+=1;goto B59a99d;
case 0x59a9a2:goto L59a9a2;
case 0x59a9a8:c.instructions+=3;goto B59a9a8;
case 0x59a9ae:c.instructions+=2;goto B59a9ae;
case 0x59a9b5:c.instructions+=1;goto B59a9b5;
case 0x59a9ba:goto L59a9ba;
case 0x59a9c0:c.instructions+=3;goto B59a9c0;
case 0x59a9c6:c.instructions+=2;goto B59a9c6;
case 0x59a9cd:c.instructions+=1;goto B59a9cd;
case 0x59a9d2:goto L59a9d2;
case 0x59a9d8:c.instructions+=3;goto B59a9d8;
case 0x59a9de:c.instructions+=2;goto B59a9de;
case 0x59a9e5:c.instructions+=1;goto B59a9e5;
case 0x59a9ea:goto L59a9ea;
case 0x59a9f0:c.instructions+=3;goto B59a9f0;
case 0x59a9f6:c.instructions+=2;goto B59a9f6;
case 0x59a9fd:c.instructions+=1;goto B59a9fd;
case 0x59aa02:goto L59aa02;
case 0x59aa08:c.instructions+=3;goto B59aa08;
case 0x59aa0e:c.instructions+=2;goto B59aa0e;
case 0x59aa15:c.instructions+=1;goto B59aa15;
case 0x59aa1a:goto L59aa1a;
case 0x59aa20:c.instructions+=3;goto B59aa20;
case 0x59aa26:c.instructions+=2;goto B59aa26;
case 0x59aa2d:c.instructions+=1;goto B59aa2d;
case 0x59aa32:goto L59aa32;
case 0x59aa38:c.instructions+=3;goto B59aa38;
case 0x59aa3e:c.instructions+=2;goto B59aa3e;
case 0x59aa45:c.instructions+=1;goto B59aa45;
case 0x59aa4a:goto L59aa4a;
case 0x59aa50:c.instructions+=3;goto B59aa50;
case 0x59aa56:c.instructions+=2;goto B59aa56;
case 0x59aa5d:c.instructions+=1;goto B59aa5d;
case 0x59aa62:goto L59aa62;
case 0x59aa68:c.instructions+=3;goto B59aa68;
case 0x59aa6e:c.instructions+=2;goto B59aa6e;
case 0x59aa75:c.instructions+=1;goto B59aa75;
case 0x59aa7a:goto L59aa7a;
case 0x59aa80:c.instructions+=3;goto B59aa80;
case 0x59aa86:c.instructions+=2;goto B59aa86;
case 0x59aa8d:c.instructions+=1;goto B59aa8d;
case 0x59aa92:goto L59aa92;
case 0x59aa98:c.instructions+=3;goto B59aa98;
case 0x59aa9e:c.instructions+=2;goto B59aa9e;
case 0x59aaa5:c.instructions+=1;goto B59aaa5;
case 0x59aaaa:goto L59aaaa;
case 0x59aab0:c.instructions+=3;goto B59aab0;
case 0x59aab6:c.instructions+=2;goto B59aab6;
case 0x59aabd:c.instructions+=1;goto B59aabd;
case 0x59aac2:goto L59aac2;
case 0x59aac8:c.instructions+=3;goto B59aac8;
case 0x59aacf:c.instructions+=2;goto B59aacf;
case 0x59aad5:c.instructions+=1;goto B59aad5;
case 0x59aada:goto L59aada;
case 0x59aae0:c.instructions+=3;goto B59aae0;
case 0x59aae6:c.instructions+=2;goto B59aae6;
case 0x59aaed:c.instructions+=1;goto B59aaed;
case 0x59aaf2:goto L59aaf2;
case 0x59aaf8:c.instructions+=3;goto B59aaf8;
case 0x59aafe:c.instructions+=2;goto B59aafe;
case 0x59ab05:c.instructions+=1;goto B59ab05;
case 0x59ab0a:goto L59ab0a;
case 0x59ab10:c.instructions+=3;goto B59ab10;
case 0x59ab16:c.instructions+=2;goto B59ab16;
case 0x59ab1d:c.instructions+=1;goto B59ab1d;
case 0x59ab22:goto L59ab22;
case 0x59ab28:c.instructions+=3;goto B59ab28;
case 0x59ab2e:c.instructions+=2;goto B59ab2e;
case 0x59ab35:c.instructions+=1;goto B59ab35;
case 0x59ab3a:goto L59ab3a;
case 0x59ab40:c.instructions+=3;goto B59ab40;
case 0x59ab46:c.instructions+=2;goto B59ab46;
case 0x59ab4d:c.instructions+=1;goto B59ab4d;
case 0x59ab52:goto L59ab52;
case 0x59ab58:c.instructions+=3;goto B59ab58;
case 0x59ab5e:c.instructions+=2;goto B59ab5e;
case 0x59ab65:c.instructions+=1;goto B59ab65;
case 0x59ab6a:goto L59ab6a;
case 0x59ab70:c.instructions+=3;goto B59ab70;
case 0x59ab76:c.instructions+=2;goto B59ab76;
case 0x59ab7d:c.instructions+=1;goto B59ab7d;
case 0x59ab82:goto L59ab82;
case 0x59ab88:c.instructions+=3;goto B59ab88;
case 0x59ab8e:c.instructions+=2;goto B59ab8e;
case 0x59ab95:c.instructions+=1;goto B59ab95;
case 0x59ab9a:goto L59ab9a;
case 0x59aba0:c.instructions+=3;goto B59aba0;
case 0x59aba6:c.instructions+=2;goto B59aba6;
case 0x59abad:c.instructions+=1;goto B59abad;
case 0x59abb2:goto L59abb2;
case 0x59abb8:c.instructions+=3;goto B59abb8;
case 0x59abbe:c.instructions+=2;goto B59abbe;
case 0x59abc5:c.instructions+=1;goto B59abc5;
case 0x59abca:goto L59abca;
case 0x59abd0:c.instructions+=3;goto B59abd0;
case 0x59abd7:c.instructions+=2;goto B59abd7;
case 0x59abdd:c.instructions+=1;goto B59abdd;
case 0x59abe2:goto L59abe2;
case 0x59abe8:c.instructions+=3;goto B59abe8;
case 0x59abee:c.instructions+=2;goto B59abee;
case 0x59abf5:c.instructions+=1;goto B59abf5;
case 0x59abfa:goto L59abfa;
case 0x59ac00:c.instructions+=3;goto B59ac00;
case 0x59ac06:c.instructions+=2;goto B59ac06;
case 0x59ac0d:c.instructions+=1;goto B59ac0d;
case 0x59ac12:goto L59ac12;
case 0x59ac18:c.instructions+=4;goto B59ac18;
case 0x59ac1e:c.instructions+=3;goto B59ac1e;
case 0x59ac25:c.instructions+=2;goto B59ac25;
case 0x59ac2a:c.instructions+=1;goto B59ac2a;
case 0x59ac2f:goto L59ac2f;
case 0x59ac36:c.instructions+=2;goto B59ac36;
case 0x59ac3c:c.instructions+=1;goto B59ac3c;
case 0x59ac41:goto L59ac41;
case 0x59ac44:c.instructions+=3;goto B59ac44;
case 0x59ac45:c.instructions+=2;goto B59ac45;
case 0x59ac4b:c.instructions+=1;goto B59ac4b;
case 0x59ac50:goto L59ac50;
case 0x59ac52:c.instructions+=4;goto B59ac52;
case 0x59ac58:c.instructions+=3;goto B59ac58;
case 0x59ac5c:c.instructions+=2;goto B59ac5c;
case 0x59ac5d:c.instructions+=1;goto B59ac5d;
case 0x59ac62:goto L59ac62;
case 0x59ac65:c.instructions+=4;goto B59ac65;
case 0x59ac6b:c.instructions+=3;goto B59ac6b;
case 0x59ac6f:c.instructions+=2;goto B59ac6f;
case 0x59ac70:c.instructions+=1;goto B59ac70;
case 0x59ac75:goto L59ac75;
case 0x59ac78:c.instructions+=4;goto B59ac78;
case 0x59ac7e:c.instructions+=3;goto B59ac7e;
case 0x59ac82:c.instructions+=2;goto B59ac82;
case 0x59ac83:c.instructions+=1;goto B59ac83;
case 0x59ac88:goto L59ac88;
case 0x59ac8b:c.instructions+=4;goto B59ac8b;
case 0x59ac91:c.instructions+=3;goto B59ac91;
case 0x59ac95:c.instructions+=2;goto B59ac95;
case 0x59ac96:c.instructions+=1;goto B59ac96;
case 0x59ac9b:goto L59ac9b;
case 0x59ac9e:c.instructions+=4;goto B59ac9e;
case 0x59aca4:c.instructions+=3;goto B59aca4;
case 0x59aca8:c.instructions+=2;goto B59aca8;
case 0x59aca9:c.instructions+=1;goto B59aca9;
case 0x59acae:goto L59acae;
case 0x59acb1:c.instructions+=4;goto B59acb1;
case 0x59acb7:c.instructions+=3;goto B59acb7;
case 0x59acbb:c.instructions+=2;goto B59acbb;
case 0x59acbc:c.instructions+=1;goto B59acbc;
case 0x59acc1:goto L59acc1;
case 0x59acc4:c.instructions+=4;goto B59acc4;
case 0x59acca:c.instructions+=3;goto B59acca;
case 0x59acce:c.instructions+=2;goto B59acce;
case 0x59accf:c.instructions+=1;goto B59accf;
case 0x59acd4:goto L59acd4;
case 0x59acda:c.instructions+=4;goto B59acda;
case 0x59ace0:c.instructions+=3;goto B59ace0;
case 0x59ace4:c.instructions+=2;goto B59ace4;
case 0x59ace5:c.instructions+=1;goto B59ace5;
case 0x59acea:goto L59acea;
case 0x59acf0:c.instructions+=4;goto B59acf0;
case 0x59acf6:c.instructions+=3;goto B59acf6;
case 0x59acfa:c.instructions+=2;goto B59acfa;
case 0x59acfb:c.instructions+=1;goto B59acfb;
case 0x59ad00:goto L59ad00;
case 0x59ad06:c.instructions+=4;goto B59ad06;
case 0x59ad0c:c.instructions+=3;goto B59ad0c;
case 0x59ad10:c.instructions+=2;goto B59ad10;
case 0x59ad11:c.instructions+=1;goto B59ad11;
case 0x59ad16:goto L59ad16;
case 0x59ad1c:c.instructions+=4;goto B59ad1c;
case 0x59ad22:c.instructions+=3;goto B59ad22;
case 0x59ad26:c.instructions+=2;goto B59ad26;
case 0x59ad27:c.instructions+=1;goto B59ad27;
case 0x59ad2c:goto L59ad2c;
case 0x59ad32:c.instructions+=4;goto B59ad32;
case 0x59ad38:c.instructions+=3;goto B59ad38;
case 0x59ad3c:c.instructions+=2;goto B59ad3c;
case 0x59ad3d:c.instructions+=1;goto B59ad3d;
case 0x59ad42:goto L59ad42;
case 0x59ad45:c.instructions+=3;goto B59ad45;
case 0x59ad46:c.instructions+=2;goto B59ad46;
case 0x59ad4a:c.instructions+=1;goto B59ad4a;
case 0x59ad50:goto L59ad50;
case 0x59ad54:c.instructions+=3;goto B59ad54;
case 0x59ad57:c.instructions+=2;goto B59ad57;
case 0x59ad5c:c.instructions+=1;goto B59ad5c;
case 0x59ad60:goto L59ad60;
case 0x59ad63:c.instructions+=3;goto B59ad63;
case 0x59ad66:c.instructions+=2;goto B59ad66;
case 0x59ad6c:c.instructions+=1;goto B59ad6c;
case 0x59ad71:goto L59ad71;
case 0x59ad73:c.instructions+=4;goto B59ad73;
case 0x59ad79:c.instructions+=3;goto B59ad79;
case 0x59ad7b:c.instructions+=2;goto B59ad7b;
case 0x59ad7e:c.instructions+=1;goto B59ad7e;
case 0x59ad83:goto L59ad83;
case 0x59ad86:c.instructions+=4;goto B59ad86;
case 0x59ad8c:c.instructions+=3;goto B59ad8c;
case 0x59ad8e:c.instructions+=2;goto B59ad8e;
case 0x59ad91:c.instructions+=1;goto B59ad91;
case 0x59ad96:goto L59ad96;
case 0x59ad99:c.instructions+=4;goto B59ad99;
case 0x59ad9f:c.instructions+=3;goto B59ad9f;
case 0x59ada1:c.instructions+=2;goto B59ada1;
case 0x59ada4:c.instructions+=1;goto B59ada4;
case 0x59ada9:goto L59ada9;
case 0x59adac:c.instructions+=4;goto B59adac;
case 0x59adae:c.instructions+=3;goto B59adae;
case 0x59adb1:c.instructions+=2;goto B59adb1;
case 0x59adb7:c.instructions+=1;goto B59adb7;
case 0x59adbc:goto L59adbc;
case 0x59adbf:c.instructions+=4;goto B59adbf;
case 0x59adc5:c.instructions+=3;goto B59adc5;
case 0x59adc7:c.instructions+=2;goto B59adc7;
case 0x59adca:c.instructions+=1;goto B59adca;
case 0x59adcf:goto L59adcf;
case 0x59add2:c.instructions+=4;goto B59add2;
case 0x59add8:c.instructions+=3;goto B59add8;
case 0x59adda:c.instructions+=2;goto B59adda;
case 0x59addd:c.instructions+=1;goto B59addd;
case 0x59ade2:goto L59ade2;
case 0x59ade5:c.instructions+=4;goto B59ade5;
case 0x59adeb:c.instructions+=3;goto B59adeb;
case 0x59aded:c.instructions+=2;goto B59aded;
case 0x59adf0:c.instructions+=1;goto B59adf0;
case 0x59adf5:goto L59adf5;
case 0x59adf8:c.instructions+=3;goto B59adf8;
case 0x59adf9:c.instructions+=2;goto B59adf9;
case 0x59adfb:c.instructions+=1;goto B59adfb;
case 0x59ae01:goto L59ae01;
case 0x59ae03:c.instructions+=4;goto B59ae03;
case 0x59ae07:c.instructions+=3;goto B59ae07;
case 0x59ae0c:c.instructions+=2;goto B59ae0c;
case 0x59ae0d:c.instructions+=1;goto B59ae0d;
case 0x59ae12:goto L59ae12;
case 0x59ae15:c.instructions+=7;goto B59ae15;
case 0x59ae16:c.instructions+=6;goto B59ae16;
case 0x59ae17:c.instructions+=5;goto B59ae17;
case 0x59ae18:c.instructions+=4;goto B59ae18;
case 0x59ae19:c.instructions+=3;goto B59ae19;
case 0x59ae1b:c.instructions+=2;goto B59ae1b;
case 0x59ae1c:c.instructions+=1;goto B59ae1c;
case 0x59ae20:goto L59ae20;
case 0x59ae24:c.instructions+=6;goto B59ae24;
case 0x59ae29:c.instructions+=5;goto B59ae29;
case 0x59ae2e:c.instructions+=4;goto B59ae2e;
case 0x59ae32:c.instructions+=3;goto B59ae32;
case 0x59ae35:c.instructions+=2;goto B59ae35;
case 0x59ae3b:c.instructions+=1;goto B59ae3b;
case 0x59ae40:goto L59ae40;
case 0x59ae46:c.instructions+=3;goto B59ae46;
case 0x59ae48:c.instructions+=2;goto B59ae48;
case 0x59ae4a:c.instructions+=1;goto B59ae4a;
case 0x59ae4c:goto L59ae4c;
case 0x59ae52:c.instructions+=2;goto B59ae52;
case 0x59ae54:c.instructions+=1;goto B59ae54;
case 0x59ae56:goto L59ae56;
case 0x59ae57:c.instructions+=6;goto B59ae57;
case 0x59ae58:c.instructions+=5;goto B59ae58;
case 0x59ae5c:c.instructions+=4;goto B59ae5c;
case 0x59ae5d:c.instructions+=3;goto B59ae5d;
case 0x59ae5e:c.instructions+=2;goto B59ae5e;
case 0x59ae62:c.instructions+=1;goto B59ae62;
case 0x59ae64:goto L59ae64;
case 0x59ae68:c.instructions+=2;goto B59ae68;
case 0x59ae6a:c.instructions+=1;goto B59ae6a;
case 0x59ae6c:goto L59ae6c;
case 0x59ae6e:c.instructions+=3;goto B59ae6e;
case 0x59ae72:c.instructions+=2;goto B59ae72;
case 0x59ae74:c.instructions+=1;goto B59ae74;
case 0x59ae76:goto L59ae76;
case 0x59ae78:c.instructions+=1;goto B59ae78;
case 0x59ae7a:goto L59ae7a;
case 0x59ae7d:c.instructions+=2;goto B59ae7d;
case 0x59ae80:c.instructions+=1;goto B59ae80;
case 0x59ae82:goto L59ae82;
case 0x59ae84:goto L59ae84;
case 0x59ae87:c.instructions+=2;goto B59ae87;
case 0x59ae88:c.instructions+=1;goto B59ae88;
case 0x59ae8a:goto L59ae8a;
case 0x59ae8b:c.instructions+=3;goto B59ae8b;
case 0x59ae8c:c.instructions+=2;goto B59ae8c;
case 0x59ae8d:c.instructions+=1;goto B59ae8d;
case 0x59ae8e:goto L59ae8e;
case 0x59ae90:goto L59ae90;
case 0x59ae91:c.instructions+=8;goto B59ae91;
case 0x59ae95:c.instructions+=7;goto B59ae95;
case 0x59ae96:c.instructions+=6;goto B59ae96;
case 0x59ae97:c.instructions+=5;goto B59ae97;
case 0x59ae99:c.instructions+=4;goto B59ae99;
case 0x59ae9b:c.instructions+=3;goto B59ae9b;
case 0x59ae9d:c.instructions+=2;goto B59ae9d;
case 0x59ae9f:c.instructions+=1;goto B59ae9f;
case 0x59aea0:goto L59aea0;
case 0x59aea2:c.instructions+=2;goto B59aea2;
case 0x59aea5:c.instructions+=1;goto B59aea5;
case 0x59aea7:goto L59aea7;
case 0x59aea8:c.instructions+=3;goto B59aea8;
case 0x59aea9:c.instructions+=2;goto B59aea9;
case 0x59aeac:c.instructions+=1;goto B59aeac;
case 0x59aeae:goto L59aeae;
case 0x59aeb0:c.instructions+=1;goto B59aeb0;
case 0x59aeb3:goto L59aeb3;
case 0x59aeb5:c.instructions+=2;goto B59aeb5;
case 0x59aeb8:c.instructions+=1;goto B59aeb8;
case 0x59aeba:goto L59aeba;
case 0x59aebe:c.instructions+=2;goto B59aebe;
case 0x59aec2:c.instructions+=1;goto B59aec2;
case 0x59aec4:goto L59aec4;
case 0x59aec5:c.instructions+=3;goto B59aec5;
case 0x59aec6:c.instructions+=2;goto B59aec6;
case 0x59aec9:c.instructions+=1;goto B59aec9;
case 0x59aecb:goto L59aecb;
case 0x59aecc:c.instructions+=4;goto B59aecc;
case 0x59aecd:c.instructions+=3;goto B59aecd;
case 0x59aece:c.instructions+=2;goto B59aece;
case 0x59aed0:c.instructions+=1;goto B59aed0;
case 0x59aed3:goto L59aed3;
case 0x59aed4:c.instructions+=4;goto B59aed4;
case 0x59aed5:c.instructions+=3;goto B59aed5;
case 0x59aed6:c.instructions+=2;goto B59aed6;
case 0x59aed8:c.instructions+=1;goto B59aed8;
case 0x59aee0:goto L59aee0;
case 0x59aee4:c.instructions+=3;goto B59aee4;
case 0x59aeea:c.instructions+=2;goto B59aeea;
case 0x59aeed:c.instructions+=1;goto B59aeed;
case 0x59aeef:goto L59aeef;
case 0x59aef3:c.instructions+=4;goto B59aef3;
case 0x59aef5:c.instructions+=3;goto B59aef5;
case 0x59aef9:c.instructions+=2;goto B59aef9;
case 0x59aefd:c.instructions+=1;goto B59aefd;
case 0x59aeff:goto L59aeff;
case 0x59af01:goto L59af01;
case 0x59af05:c.instructions+=5;goto B59af05;
case 0x59af07:c.instructions+=4;goto B59af07;
case 0x59af0c:c.instructions+=3;goto B59af0c;
case 0x59af10:c.instructions+=2;goto B59af10;
case 0x59af14:c.instructions+=1;goto B59af14;
case 0x59af16:goto L59af16;
case 0x59af19:c.instructions+=1;goto B59af19;
case 0x59af1b:goto L59af1b;
case 0x59af1f:c.instructions+=4;goto B59af1f;
case 0x59af21:c.instructions+=3;goto B59af21;
case 0x59af26:c.instructions+=2;goto B59af26;
case 0x59af2a:c.instructions+=1;goto B59af2a;
case 0x59af2e:goto L59af2e;
case 0x59af34:c.instructions+=6;goto B59af34;
case 0x59af3a:c.instructions+=5;goto B59af3a;
case 0x59af3e:c.instructions+=4;goto B59af3e;
case 0x59af44:c.instructions+=3;goto B59af44;
case 0x59af46:c.instructions+=2;goto B59af46;
case 0x59af49:c.instructions+=1;goto B59af49;
case 0x59af4b:goto L59af4b;
case 0x59af4f:c.instructions+=5;goto B59af4f;
case 0x59af55:c.instructions+=4;goto B59af55;
case 0x59af59:c.instructions+=3;goto B59af59;
case 0x59af5b:c.instructions+=2;goto B59af5b;
case 0x59af5e:c.instructions+=1;goto B59af5e;
case 0x59af60:goto L59af60;
case 0x59af62:c.instructions+=1;goto B59af62;
case 0x59af68:goto L59af68;
case 0x59af6b:goto L59af6b;
case 0x59af71:c.instructions+=1;goto B59af71;
case 0x59af80:goto L59af80;
case 0x59af84:c.instructions+=5;goto B59af84;
case 0x59af85:c.instructions+=4;goto B59af85;
case 0x59af8b:c.instructions+=3;goto B59af8b;
case 0x59af8d:c.instructions+=2;goto B59af8d;
case 0x59af93:c.instructions+=1;goto B59af93;
case 0x59af98:goto L59af98;
case 0x59af9a:c.instructions+=1;goto B59af9a;
case 0x59af9c:goto L59af9c;
case 0x59af9e:c.instructions+=1;goto B59af9e;
case 0x59afa0:goto L59afa0;
case 0x59afa5:c.instructions+=1;goto B59afa5;
case 0x59afa7:goto L59afa7;
case 0x59afac:goto L59afac;
case 0x59afb0:c.instructions+=2;goto B59afb0;
case 0x59afb3:c.instructions+=1;goto B59afb3;
case 0x59afb5:goto L59afb5;
case 0x59afb8:c.instructions+=2;goto B59afb8;
case 0x59afb9:c.instructions+=1;goto B59afb9;
case 0x59afbc:goto L59afbc;
case 0x59afbe:goto L59afbe;
case 0x59afc2:c.instructions+=3;goto B59afc2;
case 0x59afc6:c.instructions+=2;goto B59afc6;
case 0x59afc7:c.instructions+=1;goto B59afc7;
case 0x59afca:goto L59afca;
case 0x59afcd:c.instructions+=1;goto B59afcd;
case 0x59afcf:goto L59afcf;
case 0x59afd3:c.instructions+=1;goto B59afd3;
case 0x59afd7:goto L59afd7;
case 0x59afd8:c.instructions+=1;goto B59afd8;
case 0x59afe0:goto L59afe0;
case 0x59afe4:c.instructions+=2;goto B59afe4;
case 0x59afe7:c.instructions+=1;goto B59afe7;
case 0x59afe9:goto L59afe9;
case 0x59afeb:c.instructions+=7;goto B59afeb;
case 0x59aff0:c.instructions+=6;goto B59aff0;
case 0x59aff2:c.instructions+=5;goto B59aff2;
case 0x59aff5:c.instructions+=4;goto B59aff5;
case 0x59aff8:c.instructions+=3;goto B59aff8;
case 0x59affb:c.instructions+=2;goto B59affb;
case 0x59affe:c.instructions+=1;goto B59affe;
default:missing_instruction(c.pc);}
B59a000:L59a000:{c.instructions+=5;NFSU2_TR(0x59a000);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59a007:{NFSU2_TR(0x59a007);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a00e:{NFSU2_TR(0x59a00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a011:{NFSU2_TR(0x59a011);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a013:{NFSU2_TR(0x59a013);
if(r1(R+518)){{goto L59a01e;}}
}
B59a015:L59a015:{c.instructions+=2;NFSU2_TR(0x59a015);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a01c:{NFSU2_TR(0x59a01c);
{goto L59a024;}
}
B59a01e:L59a01e:{c.instructions+=1;NFSU2_TR(0x59a01e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a024:L59a024:{c.instructions+=5;NFSU2_TR(0x59a024);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59a026:{NFSU2_TR(0x59a026);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a02d:{NFSU2_TR(0x59a02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a030:{NFSU2_TR(0x59a030);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a032:{NFSU2_TR(0x59a032);
if(r1(R+518)){{goto L59a03d;}}
}
B59a034:L59a034:{c.instructions+=2;NFSU2_TR(0x59a034);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a03b:{NFSU2_TR(0x59a03b);
{goto L59a043;}
}
B59a03d:L59a03d:{c.instructions+=1;NFSU2_TR(0x59a03d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a043:L59a043:{c.instructions+=7;NFSU2_TR(0x59a043);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a045:{NFSU2_TR(0x59a045);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a047:{NFSU2_TR(0x59a047);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a04e:{NFSU2_TR(0x59a04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a051:{NFSU2_TR(0x59a051);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a053:{NFSU2_TR(0x59a053);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a055:{NFSU2_TR(0x59a055);
if(r1(R+518)){{goto L59a060;}}
}
B59a057:L59a057:{c.instructions+=2;NFSU2_TR(0x59a057);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a05e:{NFSU2_TR(0x59a05e);
{goto L59a066;}
}
B59a060:L59a060:{c.instructions+=1;NFSU2_TR(0x59a060);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a066:L59a066:{c.instructions+=7;NFSU2_TR(0x59a066);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a06d:{NFSU2_TR(0x59a06d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a06f:{NFSU2_TR(0x59a06f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a076:{NFSU2_TR(0x59a076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a079:{NFSU2_TR(0x59a079);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a07b:{NFSU2_TR(0x59a07b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a07d:{NFSU2_TR(0x59a07d);
if(r1(R+518)){{goto L59a088;}}
}
B59a07f:L59a07f:{c.instructions+=2;NFSU2_TR(0x59a07f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a086:{NFSU2_TR(0x59a086);
{goto L59a08e;}
}
B59a088:L59a088:{c.instructions+=1;NFSU2_TR(0x59a088);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a08e:L59a08e:{c.instructions+=5;NFSU2_TR(0x59a08e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59a095:{NFSU2_TR(0x59a095);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a09c:{NFSU2_TR(0x59a09c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a09f:{NFSU2_TR(0x59a09f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a0a1:{NFSU2_TR(0x59a0a1);
if(r1(R+518)){{goto L59a0ac;}}
}
B59a0a3:L59a0a3:{c.instructions+=2;NFSU2_TR(0x59a0a3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0aa:{NFSU2_TR(0x59a0aa);
{goto L59a0b2;}
}
B59a0ac:L59a0ac:{c.instructions+=1;NFSU2_TR(0x59a0ac);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0b2:L59a0b2:{c.instructions+=5;NFSU2_TR(0x59a0b2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59a0b4:{NFSU2_TR(0x59a0b4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a0bb:{NFSU2_TR(0x59a0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a0be:{NFSU2_TR(0x59a0be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a0c0:{NFSU2_TR(0x59a0c0);
if(r1(R+518)){{goto L59a0cb;}}
}
B59a0c2:L59a0c2:{c.instructions+=2;NFSU2_TR(0x59a0c2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0c9:{NFSU2_TR(0x59a0c9);
{goto L59a0d1;}
}
B59a0cb:L59a0cb:{c.instructions+=1;NFSU2_TR(0x59a0cb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0d1:L59a0d1:{c.instructions+=7;NFSU2_TR(0x59a0d1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a0d3:{NFSU2_TR(0x59a0d3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a0d5:{NFSU2_TR(0x59a0d5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a0dc:{NFSU2_TR(0x59a0dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a0df:{NFSU2_TR(0x59a0df);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a0e1:{NFSU2_TR(0x59a0e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a0e3:{NFSU2_TR(0x59a0e3);
if(r1(R+518)){{goto L59a0ee;}}
}
B59a0e5:L59a0e5:{c.instructions+=2;NFSU2_TR(0x59a0e5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0ec:{NFSU2_TR(0x59a0ec);
{goto L59a0f4;}
}
B59a0ee:L59a0ee:{c.instructions+=1;NFSU2_TR(0x59a0ee);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0f4:L59a0f4:{c.instructions+=7;NFSU2_TR(0x59a0f4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a0fb:{NFSU2_TR(0x59a0fb);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a0fd:{NFSU2_TR(0x59a0fd);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a104:{NFSU2_TR(0x59a104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a107:{NFSU2_TR(0x59a107);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a109:{NFSU2_TR(0x59a109);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a10b:{NFSU2_TR(0x59a10b);
if(r1(R+518)){{goto L59a116;}}
}
B59a10d:L59a10d:{c.instructions+=2;NFSU2_TR(0x59a10d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a114:{NFSU2_TR(0x59a114);
{goto L59a11c;}
}
B59a116:L59a116:{c.instructions+=1;NFSU2_TR(0x59a116);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a11c:L59a11c:{c.instructions+=5;NFSU2_TR(0x59a11c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59a123:{NFSU2_TR(0x59a123);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a12a:{NFSU2_TR(0x59a12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a12d:{NFSU2_TR(0x59a12d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a12f:{NFSU2_TR(0x59a12f);
if(r1(R+518)){{goto L59a13a;}}
}
B59a131:L59a131:{c.instructions+=2;NFSU2_TR(0x59a131);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a138:{NFSU2_TR(0x59a138);
{goto L59a140;}
}
B59a13a:L59a13a:{c.instructions+=1;NFSU2_TR(0x59a13a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a140:L59a140:{c.instructions+=5;NFSU2_TR(0x59a140);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59a142:{NFSU2_TR(0x59a142);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a149:{NFSU2_TR(0x59a149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a14c:{NFSU2_TR(0x59a14c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a14e:{NFSU2_TR(0x59a14e);
if(r1(R+518)){{goto L59a159;}}
}
B59a150:L59a150:{c.instructions+=2;NFSU2_TR(0x59a150);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a157:{NFSU2_TR(0x59a157);
{goto L59a15f;}
}
B59a159:L59a159:{c.instructions+=1;NFSU2_TR(0x59a159);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a15f:L59a15f:{c.instructions+=7;NFSU2_TR(0x59a15f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a161:{NFSU2_TR(0x59a161);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a163:{NFSU2_TR(0x59a163);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a16a:{NFSU2_TR(0x59a16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a16d:{NFSU2_TR(0x59a16d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a16f:{NFSU2_TR(0x59a16f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a171:{NFSU2_TR(0x59a171);
if(r1(R+518)){{goto L59a17c;}}
}
B59a173:L59a173:{c.instructions+=2;NFSU2_TR(0x59a173);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a17a:{NFSU2_TR(0x59a17a);
{goto L59a182;}
}
B59a17c:L59a17c:{c.instructions+=1;NFSU2_TR(0x59a17c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a182:L59a182:{c.instructions+=7;NFSU2_TR(0x59a182);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a189:{NFSU2_TR(0x59a189);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a18b:{NFSU2_TR(0x59a18b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a192:{NFSU2_TR(0x59a192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a195:{NFSU2_TR(0x59a195);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a197:{NFSU2_TR(0x59a197);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a199:{NFSU2_TR(0x59a199);
if(r1(R+518)){{goto L59a1a4;}}
}
B59a19b:L59a19b:{c.instructions+=2;NFSU2_TR(0x59a19b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a1a2:{NFSU2_TR(0x59a1a2);
{goto L59a1aa;}
}
B59a1a4:L59a1a4:{c.instructions+=1;NFSU2_TR(0x59a1a4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a1aa:L59a1aa:{c.instructions+=5;NFSU2_TR(0x59a1aa);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59a1b1:{NFSU2_TR(0x59a1b1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a1b8:{NFSU2_TR(0x59a1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a1bb:{NFSU2_TR(0x59a1bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a1bd:{NFSU2_TR(0x59a1bd);
if(r1(R+518)){{goto L59a1c8;}}
}
B59a1bf:L59a1bf:{c.instructions+=2;NFSU2_TR(0x59a1bf);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a1c6:{NFSU2_TR(0x59a1c6);
{goto L59a1ce;}
}
B59a1c8:L59a1c8:{c.instructions+=1;NFSU2_TR(0x59a1c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a1ce:L59a1ce:{c.instructions+=5;NFSU2_TR(0x59a1ce);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59a1d0:{NFSU2_TR(0x59a1d0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a1d7:{NFSU2_TR(0x59a1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a1da:{NFSU2_TR(0x59a1da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a1dc:{NFSU2_TR(0x59a1dc);
if(r1(R+518)){{goto L59a1e7;}}
}
B59a1de:L59a1de:{c.instructions+=2;NFSU2_TR(0x59a1de);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a1e5:{NFSU2_TR(0x59a1e5);
{goto L59a1ed;}
}
B59a1e7:L59a1e7:{c.instructions+=1;NFSU2_TR(0x59a1e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a1ed:L59a1ed:{c.instructions+=7;NFSU2_TR(0x59a1ed);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a1ef:{NFSU2_TR(0x59a1ef);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a1f1:{NFSU2_TR(0x59a1f1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a1f8:{NFSU2_TR(0x59a1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a1fb:{NFSU2_TR(0x59a1fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a1fd:{NFSU2_TR(0x59a1fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a1ff:{NFSU2_TR(0x59a1ff);
if(r1(R+518)){{goto L59a20a;}}
}
B59a201:L59a201:{c.instructions+=2;NFSU2_TR(0x59a201);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a208:{NFSU2_TR(0x59a208);
{goto L59a210;}
}
B59a20a:L59a20a:{c.instructions+=1;NFSU2_TR(0x59a20a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a210:L59a210:{c.instructions+=7;NFSU2_TR(0x59a210);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a217:{NFSU2_TR(0x59a217);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a219:{NFSU2_TR(0x59a219);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a220:{NFSU2_TR(0x59a220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a223:{NFSU2_TR(0x59a223);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a225:{NFSU2_TR(0x59a225);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a227:{NFSU2_TR(0x59a227);
if(r1(R+518)){{goto L59a232;}}
}
B59a229:L59a229:{c.instructions+=2;NFSU2_TR(0x59a229);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a230:{NFSU2_TR(0x59a230);
{goto L59a238;}
}
B59a232:L59a232:{c.instructions+=1;NFSU2_TR(0x59a232);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a238:L59a238:{c.instructions+=5;NFSU2_TR(0x59a238);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59a23f:{NFSU2_TR(0x59a23f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a246:{NFSU2_TR(0x59a246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a249:{NFSU2_TR(0x59a249);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a24b:{NFSU2_TR(0x59a24b);
if(r1(R+518)){{goto L59a256;}}
}
B59a24d:L59a24d:{c.instructions+=2;NFSU2_TR(0x59a24d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a254:{NFSU2_TR(0x59a254);
{goto L59a25c;}
}
B59a256:L59a256:{c.instructions+=1;NFSU2_TR(0x59a256);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a25c:L59a25c:{c.instructions+=5;NFSU2_TR(0x59a25c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59a25e:{NFSU2_TR(0x59a25e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a265:{NFSU2_TR(0x59a265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a268:{NFSU2_TR(0x59a268);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a26a:{NFSU2_TR(0x59a26a);
if(r1(R+518)){{goto L59a275;}}
}
B59a26c:L59a26c:{c.instructions+=2;NFSU2_TR(0x59a26c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a273:{NFSU2_TR(0x59a273);
{goto L59a27b;}
}
B59a275:L59a275:{c.instructions+=1;NFSU2_TR(0x59a275);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a27b:L59a27b:{c.instructions+=7;NFSU2_TR(0x59a27b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a27d:{NFSU2_TR(0x59a27d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a27f:{NFSU2_TR(0x59a27f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a286:{NFSU2_TR(0x59a286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a289:{NFSU2_TR(0x59a289);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a28b:{NFSU2_TR(0x59a28b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a28d:{NFSU2_TR(0x59a28d);
if(r1(R+518)){{goto L59a298;}}
}
B59a28f:L59a28f:{c.instructions+=2;NFSU2_TR(0x59a28f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a296:{NFSU2_TR(0x59a296);
{goto L59a29e;}
}
B59a298:L59a298:{c.instructions+=1;NFSU2_TR(0x59a298);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a29e:L59a29e:{c.instructions+=7;NFSU2_TR(0x59a29e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a2a5:{NFSU2_TR(0x59a2a5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a2a7:{NFSU2_TR(0x59a2a7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a2ae:{NFSU2_TR(0x59a2ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a2b1:{NFSU2_TR(0x59a2b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a2b3:{NFSU2_TR(0x59a2b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a2b5:{NFSU2_TR(0x59a2b5);
if(r1(R+518)){{goto L59a2c0;}}
}
B59a2b7:L59a2b7:{c.instructions+=2;NFSU2_TR(0x59a2b7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a2be:{NFSU2_TR(0x59a2be);
{goto L59a2c6;}
}
B59a2c0:L59a2c0:{c.instructions+=1;NFSU2_TR(0x59a2c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a2c6:L59a2c6:{c.instructions+=5;NFSU2_TR(0x59a2c6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59a2cd:{NFSU2_TR(0x59a2cd);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a2d4:{NFSU2_TR(0x59a2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a2d7:{NFSU2_TR(0x59a2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a2d9:{NFSU2_TR(0x59a2d9);
if(r1(R+518)){{goto L59a2e4;}}
}
B59a2db:L59a2db:{c.instructions+=2;NFSU2_TR(0x59a2db);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a2e2:{NFSU2_TR(0x59a2e2);
{goto L59a2ea;}
}
B59a2e4:L59a2e4:{c.instructions+=1;NFSU2_TR(0x59a2e4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a2ea:L59a2ea:{c.instructions+=5;NFSU2_TR(0x59a2ea);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59a2ec:{NFSU2_TR(0x59a2ec);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a2f3:{NFSU2_TR(0x59a2f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a2f6:{NFSU2_TR(0x59a2f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a2f8:{NFSU2_TR(0x59a2f8);
if(r1(R+518)){{goto L59a303;}}
}
B59a2fa:L59a2fa:{c.instructions+=2;NFSU2_TR(0x59a2fa);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a301:{NFSU2_TR(0x59a301);
{goto L59a309;}
}
B59a303:L59a303:{c.instructions+=1;NFSU2_TR(0x59a303);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a309:L59a309:{c.instructions+=7;NFSU2_TR(0x59a309);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a30b:{NFSU2_TR(0x59a30b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a30d:{NFSU2_TR(0x59a30d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a314:{NFSU2_TR(0x59a314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59a317:{NFSU2_TR(0x59a317);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59a319:{NFSU2_TR(0x59a319);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a31b:{NFSU2_TR(0x59a31b);
if(r1(R+518)){{goto L59a326;}}
}
B59a31d:L59a31d:{c.instructions+=2;NFSU2_TR(0x59a31d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a324:{NFSU2_TR(0x59a324);
{goto L59a32c;}
}
B59a326:L59a326:{c.instructions+=1;NFSU2_TR(0x59a326);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a32c:L59a32c:{c.instructions+=7;NFSU2_TR(0x59a32c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a333:{NFSU2_TR(0x59a333);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B59a336:{NFSU2_TR(0x59a336);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59a339:{NFSU2_TR(0x59a339);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a33b:{NFSU2_TR(0x59a33b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a342:{NFSU2_TR(0x59a342);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a344:{NFSU2_TR(0x59a344);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x599e40u,599);}
}
B59a34a:L59a34a:{c.instructions+=3;NFSU2_TR(0x59a34a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59a34b:{NFSU2_TR(0x59a34b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59a34c:{NFSU2_TR(0x59a34c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a350:L59a350:{c.instructions+=9;NFSU2_TR(0x59a350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B59a353:{NFSU2_TR(0x59a353);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a354:{NFSU2_TR(0x59a354);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a355:{NFSU2_TR(0x59a355);
__builtin_memmove((R+24),(R+4),4);
}
B59a357:{NFSU2_TR(0x59a357);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a358:{NFSU2_TR(0x59a358);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59a360:{NFSU2_TR(0x59a360);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59a368:{NFSU2_TR(0x59a368);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55cull))));
__builtin_memmove((R+28),(U+0),4);
}
B59a36e:{NFSU2_TR(0x59a36e);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0xffull))));
}
B59a371:L59a371:{c.instructions+=4;NFSU2_TR(0x59a371);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59a375:{NFSU2_TR(0x59a375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a376:{NFSU2_TR(0x59a376);
__builtin_memmove((R+4),(R+28),4);
}
B59a378:{NFSU2_TR(0x59a378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a37dull));
TAIL_STATIC(0x5764d0u,576);
}
B59a37d:L59a37d:{c.instructions+=3;NFSU2_TR(0x59a37d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a381:{NFSU2_TR(0x59a381);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B59a384:{NFSU2_TR(0x59a384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59a393;}}
}
B59a386:L59a386:{c.instructions+=5;NFSU2_TR(0x59a386);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a388:{NFSU2_TR(0x59a388);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a38a:{NFSU2_TR(0x59a38a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a38c:{NFSU2_TR(0x59a38c);
__builtin_memmove((R+4),(R+24),4);
}
B59a38e:{NFSU2_TR(0x59a38e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a393ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B59a393:L59a393:{c.instructions+=7;NFSU2_TR(0x59a393);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a397:{NFSU2_TR(0x59a397);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59a39a:{NFSU2_TR(0x59a39a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B59a39c:{NFSU2_TR(0x59a39c);
{u32 ea_=u32(r4(R+24)+u32(656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a3a2:{NFSU2_TR(0x59a3a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a3a6:{NFSU2_TR(0x59a3a6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a3aa:{NFSU2_TR(0x59a3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59a3b9;}}
}
B59a3ac:L59a3ac:{c.instructions+=5;NFSU2_TR(0x59a3ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a3ae:{NFSU2_TR(0x59a3ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a3b0:{NFSU2_TR(0x59a3b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a3b2:{NFSU2_TR(0x59a3b2);
__builtin_memmove((R+4),(R+24),4);
}
B59a3b4:{NFSU2_TR(0x59a3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a3b9ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B59a3b9:L59a3b9:{c.instructions+=7;NFSU2_TR(0x59a3b9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a3bd:{NFSU2_TR(0x59a3bd);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59a3c3:{NFSU2_TR(0x59a3c3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a3c7:{NFSU2_TR(0x59a3c7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59a3c9:{NFSU2_TR(0x59a3c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59a3cb:{NFSU2_TR(0x59a3cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59a3ce:{NFSU2_TR(0x59a3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59a410;}}
}
B59a3d0:L59a3d0:{c.instructions+=13;NFSU2_TR(0x59a3d0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a3d4:{NFSU2_TR(0x59a3d4);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B59a3d6:{NFSU2_TR(0x59a3d6);
{u32 ea_=u32(u32(8002176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a3dc:{NFSU2_TR(0x59a3dc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59a3e0:{NFSU2_TR(0x59a3e0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a3e4:{NFSU2_TR(0x59a3e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a3e6:{NFSU2_TR(0x59a3e6);
{u32 ea_=u32(u32(8002176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a3ec:{NFSU2_TR(0x59a3ec);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59a3f0:{NFSU2_TR(0x59a3f0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59a3f4:{NFSU2_TR(0x59a3f4);
{u32 ea_=u32(u32(7897440u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59a3fa:{NFSU2_TR(0x59a3fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59a3fc:{NFSU2_TR(0x59a3fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59a3ff:{NFSU2_TR(0x59a3ff);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59a371u);}goto L59a371;}}
}
B59a405:L59a405:{c.instructions+=6;NFSU2_TR(0x59a405);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a409:{NFSU2_TR(0x59a409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59a40a:{NFSU2_TR(0x59a40a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59a40b:{NFSU2_TR(0x59a40b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59a40c:{NFSU2_TR(0x59a40c);
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
B59a40f:{NFSU2_TR(0x59a40f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a410:L59a410:{c.instructions+=7;NFSU2_TR(0x59a410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59a411:{NFSU2_TR(0x59a411);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a413:{NFSU2_TR(0x59a413);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a417:{NFSU2_TR(0x59a417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59a418:{NFSU2_TR(0x59a418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59a419:{NFSU2_TR(0x59a419);
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
B59a41c:{NFSU2_TR(0x59a41c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a420:L59a420:{c.instructions+=4;NFSU2_TR(0x59a420);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x354ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59a426:{NFSU2_TR(0x59a426);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a42c:{NFSU2_TR(0x59a42c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59a42e:{NFSU2_TR(0x59a42e);
if(r1(R+518)){{goto L59a438;}}
}
B59a430:L59a430:{c.instructions+=2;NFSU2_TR(0x59a430);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a432:{NFSU2_TR(0x59a432);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a438:L59a438:{c.instructions+=3;NFSU2_TR(0x59a438);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x353ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59a43e:{NFSU2_TR(0x59a43e);
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
B59a440:{NFSU2_TR(0x59a440);
if(r1(R+518)){{goto L59a448;}}
}
B59a442:L59a442:{c.instructions+=1;NFSU2_TR(0x59a442);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59a448:L59a448:{c.instructions+=1;NFSU2_TR(0x59a448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a450:L59a450:{c.instructions+=15;NFSU2_TR(0x59a450);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59a454:{NFSU2_TR(0x59a454);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B59a45b:{NFSU2_TR(0x59a45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59a45d:{NFSU2_TR(0x59a45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0ccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B59a464:{NFSU2_TR(0x59a464);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a465:{NFSU2_TR(0x59a465);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59a469:{NFSU2_TR(0x59a469);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B59a46b:{NFSU2_TR(0x59a46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B59a472:{NFSU2_TR(0x59a472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59a474:{NFSU2_TR(0x59a474);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B59a477:{NFSU2_TR(0x59a477);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B59a47b:{NFSU2_TR(0x59a47b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59a47f:{NFSU2_TR(0x59a47f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B59a481:{NFSU2_TR(0x59a481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59a482:{NFSU2_TR(0x59a482);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a490:L59a490:{c.instructions+=4;NFSU2_TR(0x59a490);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59a494:{NFSU2_TR(0x59a494);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59a496:{NFSU2_TR(0x59a496);
w1(R+8,u8(0x3ull));
}
B59a498:{NFSU2_TR(0x59a498);
if(r1(R+518)){{goto L59a4e8;}}
}
B59a49a:L59a49a:{c.instructions+=5;NFSU2_TR(0x59a49a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a49e:{NFSU2_TR(0x59a49e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59a4a4:{NFSU2_TR(0x59a4a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59a4a6:{NFSU2_TR(0x59a4a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59a4a9:{NFSU2_TR(0x59a4a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59a508;}}
}
B59a4ab:L59a4ab:{c.instructions+=6;NFSU2_TR(0x59a4ab);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a4af:{NFSU2_TR(0x59a4af);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a4b5:{NFSU2_TR(0x59a4b5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59a4b9:{NFSU2_TR(0x59a4b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59a4bb:{NFSU2_TR(0x59a4bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59a4be:{NFSU2_TR(0x59a4be);
if(r1(R+514)){{goto L59a4c8;}}
}
B59a4c0:L59a4c0:{c.instructions+=2;NFSU2_TR(0x59a4c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59a4c2:{NFSU2_TR(0x59a4c2);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a4c8:L59a4c8:{c.instructions+=7;NFSU2_TR(0x59a4c8);
{u32 ea_=u32(u32(8827900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a4ce:{NFSU2_TR(0x59a4ce);
{u32 ea_=u32(u32(8827896u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59a4d4:{NFSU2_TR(0x59a4d4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59a4d6:{NFSU2_TR(0x59a4d6);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a4dc:{NFSU2_TR(0x59a4dc);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59a4de:{NFSU2_TR(0x59a4de);
{u32 ea_=u32(u32(8827896u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59a4e4:{NFSU2_TR(0x59a4e4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59a4e8:L59a4e8:{c.instructions+=2;NFSU2_TR(0x59a4e8);
w4(R+4,u32(0x3ull));
}
B59a4ed:{NFSU2_TR(0x59a4ed);
__builtin_memmove((R+4),(R+4),4);
}
B59a4f0:L59a4f0:{c.instructions+=5;NFSU2_TR(0x59a4f0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a4f4:{NFSU2_TR(0x59a4f4);
{u32 ea_=u32((r4(R+4)*4u)+u32(8002180u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59a4fb:{NFSU2_TR(0x59a4fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59a4fd:{NFSU2_TR(0x59a4fd);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59a500:{NFSU2_TR(0x59a500);
if(r1(R+518)){{goto L59a510;}}
}
B59a502:L59a502:{c.instructions+=2;NFSU2_TR(0x59a502);
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
B59a503:{NFSU2_TR(0x59a503);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59a4f0u);}goto L59a4f0;}}
}
B59a505:L59a505:{c.instructions+=2;NFSU2_TR(0x59a505);
__builtin_memmove((R+0),(R+8),1);
}
B59a507:{NFSU2_TR(0x59a507);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a508:L59a508:{c.instructions+=2;NFSU2_TR(0x59a508);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a50e:{NFSU2_TR(0x59a50e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59a4c8u);}goto L59a4c8;}
}
B59a510:L59a510:{c.instructions+=3;NFSU2_TR(0x59a510);
w1(R+0,u8(0x3ull));
}
B59a512:{NFSU2_TR(0x59a512);
u8 U[3];
w1(R+512,u8((r1(R+0))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(R+0),r1(R+4)));
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59a514:{NFSU2_TR(0x59a514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59a520:L59a520:{c.instructions+=14;NFSU2_TR(0x59a520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a521:{NFSU2_TR(0x59a521);
__builtin_memmove((R+20),(R+16),4);
}
B59a523:{NFSU2_TR(0x59a523);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B59a526:{NFSU2_TR(0x59a526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2b0ull))));
}
B59a52c:{NFSU2_TR(0x59a52c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a52d:{NFSU2_TR(0x59a52d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a52e:{NFSU2_TR(0x59a52e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a52f:{NFSU2_TR(0x59a52f);
__builtin_memmove((R+24),(R+4),4);
}
B59a531:{NFSU2_TR(0x59a531);
{u32 ea_=u32(r4(R+24)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a537:{NFSU2_TR(0x59a537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59a538:{NFSU2_TR(0x59a538);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a53e:{NFSU2_TR(0x59a53e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59a540:{NFSU2_TR(0x59a540);
w4(R+4,u32(0xacull));
}
B59a545:{NFSU2_TR(0x59a545);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B59a549:L59a549:{c.instructions+=1;NFSU2_TR(0x59a549);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L59a54b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59a549u);}goto L59a549;}
}
B59a54b:L59a54b:{c.instructions+=1;NFSU2_TR(0x59a54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a550ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a550:L59a550:{c.instructions+=4;NFSU2_TR(0x59a550);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a554:{NFSU2_TR(0x59a554);
{u32 ea_=u32(r4(R+24)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a55a:{NFSU2_TR(0x59a55a);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a560:{NFSU2_TR(0x59a560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a565ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a565:L59a565:{c.instructions+=4;NFSU2_TR(0x59a565);
{u32 ea_=u32(r4(R+24)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a56b:{NFSU2_TR(0x59a56b);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a571:{NFSU2_TR(0x59a571);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a575:{NFSU2_TR(0x59a575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a57aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a57a:L59a57a:{c.instructions+=4;NFSU2_TR(0x59a57a);
{u32 ea_=u32(r4(R+24)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a580:{NFSU2_TR(0x59a580);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a586:{NFSU2_TR(0x59a586);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a58a:{NFSU2_TR(0x59a58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a58full));
TAIL_STATIC(0x75bed4u,75b);
}
B59a58f:L59a58f:{c.instructions+=4;NFSU2_TR(0x59a58f);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a595:{NFSU2_TR(0x59a595);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a59b:{NFSU2_TR(0x59a59b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a59f:{NFSU2_TR(0x59a59f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a5a4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a5a4:L59a5a4:{c.instructions+=4;NFSU2_TR(0x59a5a4);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a5aa:{NFSU2_TR(0x59a5aa);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a5b0:{NFSU2_TR(0x59a5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a5b4:{NFSU2_TR(0x59a5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a5b9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a5b9:L59a5b9:{c.instructions+=4;NFSU2_TR(0x59a5b9);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a5bf:{NFSU2_TR(0x59a5bf);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a5c5:{NFSU2_TR(0x59a5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a5c9:{NFSU2_TR(0x59a5c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a5ceull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a5ce:L59a5ce:{c.instructions+=4;NFSU2_TR(0x59a5ce);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a5d4:{NFSU2_TR(0x59a5d4);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a5da:{NFSU2_TR(0x59a5da);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a5de:{NFSU2_TR(0x59a5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a5e3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a5e3:L59a5e3:{c.instructions+=4;NFSU2_TR(0x59a5e3);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a5e9:{NFSU2_TR(0x59a5e9);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a5ef:{NFSU2_TR(0x59a5ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a5f3:{NFSU2_TR(0x59a5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a5f8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a5f8:L59a5f8:{c.instructions+=4;NFSU2_TR(0x59a5f8);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a5fe:{NFSU2_TR(0x59a5fe);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a604:{NFSU2_TR(0x59a604);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a608:{NFSU2_TR(0x59a608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a60dull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a60d:L59a60d:{c.instructions+=4;NFSU2_TR(0x59a60d);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a613:{NFSU2_TR(0x59a613);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a619:{NFSU2_TR(0x59a619);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a61d:{NFSU2_TR(0x59a61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a622ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a622:L59a622:{c.instructions+=4;NFSU2_TR(0x59a622);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a628:{NFSU2_TR(0x59a628);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a62e:{NFSU2_TR(0x59a62e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a632:{NFSU2_TR(0x59a632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a637ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a637:L59a637:{c.instructions+=4;NFSU2_TR(0x59a637);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a63d:{NFSU2_TR(0x59a63d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a643:{NFSU2_TR(0x59a643);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a647:{NFSU2_TR(0x59a647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a64cull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a64c:L59a64c:{c.instructions+=4;NFSU2_TR(0x59a64c);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a652:{NFSU2_TR(0x59a652);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a658:{NFSU2_TR(0x59a658);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a65c:{NFSU2_TR(0x59a65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a661ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a661:L59a661:{c.instructions+=4;NFSU2_TR(0x59a661);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a667:{NFSU2_TR(0x59a667);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a66b:{NFSU2_TR(0x59a66b);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a671:{NFSU2_TR(0x59a671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a676ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a676:L59a676:{c.instructions+=4;NFSU2_TR(0x59a676);
{u32 ea_=u32(r4(R+24)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a67c:{NFSU2_TR(0x59a67c);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a682:{NFSU2_TR(0x59a682);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a686:{NFSU2_TR(0x59a686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a68bull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a68b:L59a68b:{c.instructions+=4;NFSU2_TR(0x59a68b);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a691:{NFSU2_TR(0x59a691);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a697:{NFSU2_TR(0x59a697);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a69b:{NFSU2_TR(0x59a69b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a6a0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a6a0:L59a6a0:{c.instructions+=4;NFSU2_TR(0x59a6a0);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a6a6:{NFSU2_TR(0x59a6a6);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a6ac:{NFSU2_TR(0x59a6ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a6b0:{NFSU2_TR(0x59a6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a6b5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a6b5:L59a6b5:{c.instructions+=4;NFSU2_TR(0x59a6b5);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a6bb:{NFSU2_TR(0x59a6bb);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a6c1:{NFSU2_TR(0x59a6c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a6c5:{NFSU2_TR(0x59a6c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a6caull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a6ca:L59a6ca:{c.instructions+=4;NFSU2_TR(0x59a6ca);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a6d0:{NFSU2_TR(0x59a6d0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a6d6:{NFSU2_TR(0x59a6d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a6da:{NFSU2_TR(0x59a6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a6dfull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a6df:L59a6df:{c.instructions+=4;NFSU2_TR(0x59a6df);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a6e5:{NFSU2_TR(0x59a6e5);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a6eb:{NFSU2_TR(0x59a6eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a6ef:{NFSU2_TR(0x59a6ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a6f4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a6f4:L59a6f4:{c.instructions+=4;NFSU2_TR(0x59a6f4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a6f6:{NFSU2_TR(0x59a6f6);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a6fc:{NFSU2_TR(0x59a6fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a700:{NFSU2_TR(0x59a700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a705ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a705:L59a705:{c.instructions+=4;NFSU2_TR(0x59a705);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a708:{NFSU2_TR(0x59a708);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a70e:{NFSU2_TR(0x59a70e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a712:{NFSU2_TR(0x59a712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a717ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a717:L59a717:{c.instructions+=4;NFSU2_TR(0x59a717);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a71a:{NFSU2_TR(0x59a71a);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a720:{NFSU2_TR(0x59a720);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a724:{NFSU2_TR(0x59a724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a729ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a729:L59a729:{c.instructions+=4;NFSU2_TR(0x59a729);
{u32 ea_=u32(r4(R+24)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a72f:{NFSU2_TR(0x59a72f);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a735:{NFSU2_TR(0x59a735);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a739:{NFSU2_TR(0x59a739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a73eull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a73e:L59a73e:{c.instructions+=4;NFSU2_TR(0x59a73e);
{u32 ea_=u32(r4(R+24)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a744:{NFSU2_TR(0x59a744);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a74a:{NFSU2_TR(0x59a74a);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a74e:{NFSU2_TR(0x59a74e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a753ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a753:L59a753:{c.instructions+=4;NFSU2_TR(0x59a753);
{u32 ea_=u32(r4(R+24)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a759:{NFSU2_TR(0x59a759);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a75f:{NFSU2_TR(0x59a75f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a763:{NFSU2_TR(0x59a763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a768ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a768:L59a768:{c.instructions+=4;NFSU2_TR(0x59a768);
{u32 ea_=u32(r4(R+24)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a76e:{NFSU2_TR(0x59a76e);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a774:{NFSU2_TR(0x59a774);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a778:{NFSU2_TR(0x59a778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a77dull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a77d:L59a77d:{c.instructions+=4;NFSU2_TR(0x59a77d);
{u32 ea_=u32(r4(R+24)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a783:{NFSU2_TR(0x59a783);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a789:{NFSU2_TR(0x59a789);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a78d:{NFSU2_TR(0x59a78d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a792ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a792:L59a792:{c.instructions+=4;NFSU2_TR(0x59a792);
{u32 ea_=u32(r4(R+24)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a798:{NFSU2_TR(0x59a798);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a79e:{NFSU2_TR(0x59a79e);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a7a5:{NFSU2_TR(0x59a7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a7aaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a7aa:L59a7aa:{c.instructions+=4;NFSU2_TR(0x59a7aa);
{u32 ea_=u32(r4(R+24)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a7b0:{NFSU2_TR(0x59a7b0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a7b6:{NFSU2_TR(0x59a7b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a7bd:{NFSU2_TR(0x59a7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a7c2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a7c2:L59a7c2:{c.instructions+=4;NFSU2_TR(0x59a7c2);
{u32 ea_=u32(r4(R+24)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a7c8:{NFSU2_TR(0x59a7c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a7cf:{NFSU2_TR(0x59a7cf);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a7d5:{NFSU2_TR(0x59a7d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a7daull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a7da:L59a7da:{c.instructions+=4;NFSU2_TR(0x59a7da);
{u32 ea_=u32(r4(R+24)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a7e0:{NFSU2_TR(0x59a7e0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a7e6:{NFSU2_TR(0x59a7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a7ed:{NFSU2_TR(0x59a7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a7f2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a7f2:L59a7f2:{c.instructions+=4;NFSU2_TR(0x59a7f2);
{u32 ea_=u32(r4(R+24)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a7f8:{NFSU2_TR(0x59a7f8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a7fe:{NFSU2_TR(0x59a7fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a805:{NFSU2_TR(0x59a805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a80aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a80a:L59a80a:{c.instructions+=4;NFSU2_TR(0x59a80a);
{u32 ea_=u32(r4(R+24)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a810:{NFSU2_TR(0x59a810);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a816:{NFSU2_TR(0x59a816);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a81d:{NFSU2_TR(0x59a81d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a822ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a822:L59a822:{c.instructions+=4;NFSU2_TR(0x59a822);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a828:{NFSU2_TR(0x59a828);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a82e:{NFSU2_TR(0x59a82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a835:{NFSU2_TR(0x59a835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a83aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a83a:L59a83a:{c.instructions+=4;NFSU2_TR(0x59a83a);
{u32 ea_=u32(r4(R+24)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a840:{NFSU2_TR(0x59a840);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a846:{NFSU2_TR(0x59a846);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a84d:{NFSU2_TR(0x59a84d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a852ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a852:L59a852:{c.instructions+=4;NFSU2_TR(0x59a852);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a858:{NFSU2_TR(0x59a858);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a85e:{NFSU2_TR(0x59a85e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a865:{NFSU2_TR(0x59a865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a86aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a86a:L59a86a:{c.instructions+=4;NFSU2_TR(0x59a86a);
{u32 ea_=u32(r4(R+24)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a870:{NFSU2_TR(0x59a870);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a876:{NFSU2_TR(0x59a876);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a87d:{NFSU2_TR(0x59a87d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a882ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a882:L59a882:{c.instructions+=4;NFSU2_TR(0x59a882);
{u32 ea_=u32(r4(R+24)+u32(456u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59a888:{NFSU2_TR(0x59a888);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a88f:{NFSU2_TR(0x59a88f);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a895:{NFSU2_TR(0x59a895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a89aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a89a:L59a89a:{c.instructions+=4;NFSU2_TR(0x59a89a);
{u32 ea_=u32(r4(R+24)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a8a0:{NFSU2_TR(0x59a8a0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a8a6:{NFSU2_TR(0x59a8a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a8ad:{NFSU2_TR(0x59a8ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a8b2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a8b2:L59a8b2:{c.instructions+=4;NFSU2_TR(0x59a8b2);
{u32 ea_=u32(r4(R+24)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a8b8:{NFSU2_TR(0x59a8b8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a8be:{NFSU2_TR(0x59a8be);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a8c5:{NFSU2_TR(0x59a8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a8caull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a8ca:L59a8ca:{c.instructions+=4;NFSU2_TR(0x59a8ca);
{u32 ea_=u32(r4(R+24)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a8d0:{NFSU2_TR(0x59a8d0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a8d6:{NFSU2_TR(0x59a8d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a8dd:{NFSU2_TR(0x59a8dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a8e2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a8e2:L59a8e2:{c.instructions+=4;NFSU2_TR(0x59a8e2);
{u32 ea_=u32(r4(R+24)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a8e8:{NFSU2_TR(0x59a8e8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a8ee:{NFSU2_TR(0x59a8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a8f5:{NFSU2_TR(0x59a8f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a8faull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a8fa:L59a8fa:{c.instructions+=4;NFSU2_TR(0x59a8fa);
{u32 ea_=u32(r4(R+24)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a900:{NFSU2_TR(0x59a900);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a906:{NFSU2_TR(0x59a906);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a90d:{NFSU2_TR(0x59a90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a912ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a912:L59a912:{c.instructions+=4;NFSU2_TR(0x59a912);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a918:{NFSU2_TR(0x59a918);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a91e:{NFSU2_TR(0x59a91e);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a925:{NFSU2_TR(0x59a925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a92aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a92a:L59a92a:{c.instructions+=4;NFSU2_TR(0x59a92a);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a930:{NFSU2_TR(0x59a930);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a936:{NFSU2_TR(0x59a936);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a93d:{NFSU2_TR(0x59a93d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a942ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a942:L59a942:{c.instructions+=4;NFSU2_TR(0x59a942);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a948:{NFSU2_TR(0x59a948);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a94f:{NFSU2_TR(0x59a94f);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a955:{NFSU2_TR(0x59a955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a95aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a95a:L59a95a:{c.instructions+=4;NFSU2_TR(0x59a95a);
{u32 ea_=u32(r4(R+24)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a960:{NFSU2_TR(0x59a960);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a966:{NFSU2_TR(0x59a966);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a96d:{NFSU2_TR(0x59a96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a972ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a972:L59a972:{c.instructions+=4;NFSU2_TR(0x59a972);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a978:{NFSU2_TR(0x59a978);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a97e:{NFSU2_TR(0x59a97e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a985:{NFSU2_TR(0x59a985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a98aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a98a:L59a98a:{c.instructions+=4;NFSU2_TR(0x59a98a);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a990:{NFSU2_TR(0x59a990);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a996:{NFSU2_TR(0x59a996);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a99d:{NFSU2_TR(0x59a99d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a9a2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a9a2:L59a9a2:{c.instructions+=4;NFSU2_TR(0x59a9a2);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a9a8:{NFSU2_TR(0x59a9a8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a9ae:{NFSU2_TR(0x59a9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a9b5:{NFSU2_TR(0x59a9b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a9baull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a9ba:L59a9ba:{c.instructions+=4;NFSU2_TR(0x59a9ba);
{u32 ea_=u32(r4(R+24)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a9c0:{NFSU2_TR(0x59a9c0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a9c6:{NFSU2_TR(0x59a9c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a9cd:{NFSU2_TR(0x59a9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a9d2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a9d2:L59a9d2:{c.instructions+=4;NFSU2_TR(0x59a9d2);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a9d8:{NFSU2_TR(0x59a9d8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a9de:{NFSU2_TR(0x59a9de);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a9e5:{NFSU2_TR(0x59a9e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59a9eaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59a9ea:L59a9ea:{c.instructions+=4;NFSU2_TR(0x59a9ea);
{u32 ea_=u32(r4(R+24)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59a9f0:{NFSU2_TR(0x59a9f0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59a9f6:{NFSU2_TR(0x59a9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59a9fd:{NFSU2_TR(0x59a9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa02ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa02:L59aa02:{c.instructions+=4;NFSU2_TR(0x59aa02);
{u32 ea_=u32(r4(R+24)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa08:{NFSU2_TR(0x59aa08);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa0e:{NFSU2_TR(0x59aa0e);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aa15:{NFSU2_TR(0x59aa15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa1aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa1a:L59aa1a:{c.instructions+=4;NFSU2_TR(0x59aa1a);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa20:{NFSU2_TR(0x59aa20);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa26:{NFSU2_TR(0x59aa26);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aa2d:{NFSU2_TR(0x59aa2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa32ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa32:L59aa32:{c.instructions+=4;NFSU2_TR(0x59aa32);
{u32 ea_=u32(r4(R+24)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa38:{NFSU2_TR(0x59aa38);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa3e:{NFSU2_TR(0x59aa3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aa45:{NFSU2_TR(0x59aa45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa4aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa4a:L59aa4a:{c.instructions+=4;NFSU2_TR(0x59aa4a);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa50:{NFSU2_TR(0x59aa50);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa56:{NFSU2_TR(0x59aa56);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aa5d:{NFSU2_TR(0x59aa5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa62ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa62:L59aa62:{c.instructions+=4;NFSU2_TR(0x59aa62);
{u32 ea_=u32(r4(R+24)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa68:{NFSU2_TR(0x59aa68);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa6e:{NFSU2_TR(0x59aa6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aa75:{NFSU2_TR(0x59aa75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa7aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa7a:L59aa7a:{c.instructions+=4;NFSU2_TR(0x59aa7a);
{u32 ea_=u32(r4(R+24)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa80:{NFSU2_TR(0x59aa80);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa86:{NFSU2_TR(0x59aa86);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aa8d:{NFSU2_TR(0x59aa8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aa92ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aa92:L59aa92:{c.instructions+=4;NFSU2_TR(0x59aa92);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aa98:{NFSU2_TR(0x59aa98);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aa9e:{NFSU2_TR(0x59aa9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aaa5:{NFSU2_TR(0x59aaa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aaaaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aaaa:L59aaaa:{c.instructions+=4;NFSU2_TR(0x59aaaa);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aab0:{NFSU2_TR(0x59aab0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aab6:{NFSU2_TR(0x59aab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aabd:{NFSU2_TR(0x59aabd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aac2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aac2:L59aac2:{c.instructions+=4;NFSU2_TR(0x59aac2);
{u32 ea_=u32(r4(R+24)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aac8:{NFSU2_TR(0x59aac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aacf:{NFSU2_TR(0x59aacf);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aad5:{NFSU2_TR(0x59aad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aadaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aada:L59aada:{c.instructions+=4;NFSU2_TR(0x59aada);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aae0:{NFSU2_TR(0x59aae0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aae6:{NFSU2_TR(0x59aae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aaed:{NFSU2_TR(0x59aaed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aaf2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59aaf2:L59aaf2:{c.instructions+=4;NFSU2_TR(0x59aaf2);
{u32 ea_=u32(r4(R+24)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aaf8:{NFSU2_TR(0x59aaf8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aafe:{NFSU2_TR(0x59aafe);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab05:{NFSU2_TR(0x59ab05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab0aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab0a:L59ab0a:{c.instructions+=4;NFSU2_TR(0x59ab0a);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ab10:{NFSU2_TR(0x59ab10);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ab16:{NFSU2_TR(0x59ab16);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab1d:{NFSU2_TR(0x59ab1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab22ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab22:L59ab22:{c.instructions+=4;NFSU2_TR(0x59ab22);
{u32 ea_=u32(r4(R+24)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ab28:{NFSU2_TR(0x59ab28);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ab2e:{NFSU2_TR(0x59ab2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab35:{NFSU2_TR(0x59ab35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab3aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab3a:L59ab3a:{c.instructions+=4;NFSU2_TR(0x59ab3a);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ab40:{NFSU2_TR(0x59ab40);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ab46:{NFSU2_TR(0x59ab46);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab4d:{NFSU2_TR(0x59ab4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab52ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab52:L59ab52:{c.instructions+=4;NFSU2_TR(0x59ab52);
{u32 ea_=u32(r4(R+24)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ab58:{NFSU2_TR(0x59ab58);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ab5e:{NFSU2_TR(0x59ab5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab65:{NFSU2_TR(0x59ab65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab6aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab6a:L59ab6a:{c.instructions+=4;NFSU2_TR(0x59ab6a);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ab70:{NFSU2_TR(0x59ab70);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ab76:{NFSU2_TR(0x59ab76);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab7d:{NFSU2_TR(0x59ab7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab82ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab82:L59ab82:{c.instructions+=4;NFSU2_TR(0x59ab82);
{u32 ea_=u32(r4(R+24)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ab88:{NFSU2_TR(0x59ab88);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ab8e:{NFSU2_TR(0x59ab8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ab95:{NFSU2_TR(0x59ab95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ab9aull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ab9a:L59ab9a:{c.instructions+=4;NFSU2_TR(0x59ab9a);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aba0:{NFSU2_TR(0x59aba0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aba6:{NFSU2_TR(0x59aba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59abad:{NFSU2_TR(0x59abad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59abb2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59abb2:L59abb2:{c.instructions+=4;NFSU2_TR(0x59abb2);
{u32 ea_=u32(r4(R+24)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59abb8:{NFSU2_TR(0x59abb8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59abbe:{NFSU2_TR(0x59abbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59abc5:{NFSU2_TR(0x59abc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59abcaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59abca:L59abca:{c.instructions+=4;NFSU2_TR(0x59abca);
{u32 ea_=u32(r4(R+24)+u32(676u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59abd0:{NFSU2_TR(0x59abd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59abd7:{NFSU2_TR(0x59abd7);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59abdd:{NFSU2_TR(0x59abdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59abe2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59abe2:L59abe2:{c.instructions+=4;NFSU2_TR(0x59abe2);
{u32 ea_=u32(r4(R+24)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59abe8:{NFSU2_TR(0x59abe8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59abee:{NFSU2_TR(0x59abee);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59abf5:{NFSU2_TR(0x59abf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59abfaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59abfa:L59abfa:{c.instructions+=4;NFSU2_TR(0x59abfa);
{u32 ea_=u32(r4(R+24)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac00:{NFSU2_TR(0x59ac00);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac06:{NFSU2_TR(0x59ac06);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ac0d:{NFSU2_TR(0x59ac0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac12ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac12:L59ac12:{c.instructions+=5;NFSU2_TR(0x59ac12);
{u32 ea_=u32(r4(R+24)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac18:{NFSU2_TR(0x59ac18);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac1e:{NFSU2_TR(0x59ac1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ac25:{NFSU2_TR(0x59ac25);
w4(R+28,u32(0x4dull));
}
B59ac2a:{NFSU2_TR(0x59ac2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac2full));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac2f:L59ac2f:{c.instructions+=3;NFSU2_TR(0x59ac2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ac36:{NFSU2_TR(0x59ac36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59ac3c:{NFSU2_TR(0x59ac3c);
w4(R+20,u32(0x2ull));
}
B59ac41:L59ac41:{c.instructions+=4;NFSU2_TR(0x59ac41);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac44:{NFSU2_TR(0x59ac44);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ac45:{NFSU2_TR(0x59ac45);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac4b:{NFSU2_TR(0x59ac4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac50ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac50:L59ac50:{c.instructions+=5;NFSU2_TR(0x59ac50);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac52:{NFSU2_TR(0x59ac52);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac58:{NFSU2_TR(0x59ac58);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ac5c:{NFSU2_TR(0x59ac5c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ac5d:{NFSU2_TR(0x59ac5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac62ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac62:L59ac62:{c.instructions+=5;NFSU2_TR(0x59ac62);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac65:{NFSU2_TR(0x59ac65);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac6b:{NFSU2_TR(0x59ac6b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ac6f:{NFSU2_TR(0x59ac6f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ac70:{NFSU2_TR(0x59ac70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac75ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac75:L59ac75:{c.instructions+=5;NFSU2_TR(0x59ac75);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac78:{NFSU2_TR(0x59ac78);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac7e:{NFSU2_TR(0x59ac7e);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ac82:{NFSU2_TR(0x59ac82);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ac83:{NFSU2_TR(0x59ac83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac88ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac88:L59ac88:{c.instructions+=5;NFSU2_TR(0x59ac88);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac8b:{NFSU2_TR(0x59ac8b);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ac91:{NFSU2_TR(0x59ac91);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ac95:{NFSU2_TR(0x59ac95);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ac96:{NFSU2_TR(0x59ac96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ac9bull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ac9b:L59ac9b:{c.instructions+=5;NFSU2_TR(0x59ac9b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ac9e:{NFSU2_TR(0x59ac9e);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59aca4:{NFSU2_TR(0x59aca4);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59aca8:{NFSU2_TR(0x59aca8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59aca9:{NFSU2_TR(0x59aca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59acaeull));
TAIL_STATIC(0x75bed4u,75b);
}
B59acae:L59acae:{c.instructions+=5;NFSU2_TR(0x59acae);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59acb1:{NFSU2_TR(0x59acb1);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59acb7:{NFSU2_TR(0x59acb7);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59acbb:{NFSU2_TR(0x59acbb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59acbc:{NFSU2_TR(0x59acbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59acc1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59acc1:L59acc1:{c.instructions+=5;NFSU2_TR(0x59acc1);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59acc4:{NFSU2_TR(0x59acc4);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59acca:{NFSU2_TR(0x59acca);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59acce:{NFSU2_TR(0x59acce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59accf:{NFSU2_TR(0x59accf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59acd4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59acd4:L59acd4:{c.instructions+=5;NFSU2_TR(0x59acd4);
{u32 ea_=u32(r4(R+12)+u32(4294967148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59acda:{NFSU2_TR(0x59acda);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ace0:{NFSU2_TR(0x59ace0);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ace4:{NFSU2_TR(0x59ace4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ace5:{NFSU2_TR(0x59ace5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59aceaull));
TAIL_STATIC(0x75bed4u,75b);
}
B59acea:L59acea:{c.instructions+=5;NFSU2_TR(0x59acea);
{u32 ea_=u32(r4(R+12)+u32(4294967140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59acf0:{NFSU2_TR(0x59acf0);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59acf6:{NFSU2_TR(0x59acf6);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59acfa:{NFSU2_TR(0x59acfa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59acfb:{NFSU2_TR(0x59acfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad00ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad00:L59ad00:{c.instructions+=5;NFSU2_TR(0x59ad00);
{u32 ea_=u32(r4(R+12)+u32(4294967136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad06:{NFSU2_TR(0x59ad06);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad0c:{NFSU2_TR(0x59ad0c);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ad10:{NFSU2_TR(0x59ad10);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ad11:{NFSU2_TR(0x59ad11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad16ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad16:L59ad16:{c.instructions+=5;NFSU2_TR(0x59ad16);
{u32 ea_=u32(r4(R+12)+u32(4294967132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad1c:{NFSU2_TR(0x59ad1c);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad22:{NFSU2_TR(0x59ad22);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ad26:{NFSU2_TR(0x59ad26);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ad27:{NFSU2_TR(0x59ad27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad2cull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad2c:L59ad2c:{c.instructions+=5;NFSU2_TR(0x59ad2c);
{u32 ea_=u32(r4(R+12)+u32(4294967144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad32:{NFSU2_TR(0x59ad32);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad38:{NFSU2_TR(0x59ad38);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ad3c:{NFSU2_TR(0x59ad3c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59ad3d:{NFSU2_TR(0x59ad3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad42ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad42:L59ad42:{c.instructions+=4;NFSU2_TR(0x59ad42);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B59ad45:{NFSU2_TR(0x59ad45);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B59ad46:{NFSU2_TR(0x59ad46);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59ad4a:{NFSU2_TR(0x59ad4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ac41u);}goto L59ac41;}}
}
B59ad50:L59ad50:{c.instructions+=4;NFSU2_TR(0x59ad50);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B59ad54:{NFSU2_TR(0x59ad54);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B59ad57:{NFSU2_TR(0x59ad57);
w4(R+12,u32(0x4ull));
}
B59ad5c:{NFSU2_TR(0x59ad5c);
__builtin_memmove((R+16),(R+16),4);
}
B59ad60:L59ad60:{c.instructions+=4;NFSU2_TR(0x59ad60);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad63:{NFSU2_TR(0x59ad63);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59ad66:{NFSU2_TR(0x59ad66);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad6c:{NFSU2_TR(0x59ad6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad71ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad71:L59ad71:{c.instructions+=5;NFSU2_TR(0x59ad71);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad73:{NFSU2_TR(0x59ad73);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad79:{NFSU2_TR(0x59ad79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59ad7b:{NFSU2_TR(0x59ad7b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59ad7e:{NFSU2_TR(0x59ad7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad83ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad83:L59ad83:{c.instructions+=5;NFSU2_TR(0x59ad83);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad86:{NFSU2_TR(0x59ad86);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad8c:{NFSU2_TR(0x59ad8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59ad8e:{NFSU2_TR(0x59ad8e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59ad91:{NFSU2_TR(0x59ad91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ad96ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ad96:L59ad96:{c.instructions+=5;NFSU2_TR(0x59ad96);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ad99:{NFSU2_TR(0x59ad99);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ad9f:{NFSU2_TR(0x59ad9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59ada1:{NFSU2_TR(0x59ada1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59ada4:{NFSU2_TR(0x59ada4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ada9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ada9:L59ada9:{c.instructions+=5;NFSU2_TR(0x59ada9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59adac:{NFSU2_TR(0x59adac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59adae:{NFSU2_TR(0x59adae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59adb1:{NFSU2_TR(0x59adb1);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59adb7:{NFSU2_TR(0x59adb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59adbcull));
TAIL_STATIC(0x75bed4u,75b);
}
B59adbc:L59adbc:{c.instructions+=5;NFSU2_TR(0x59adbc);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59adbf:{NFSU2_TR(0x59adbf);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59adc5:{NFSU2_TR(0x59adc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59adc7:{NFSU2_TR(0x59adc7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59adca:{NFSU2_TR(0x59adca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59adcfull));
TAIL_STATIC(0x75bed4u,75b);
}
B59adcf:L59adcf:{c.instructions+=5;NFSU2_TR(0x59adcf);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59add2:{NFSU2_TR(0x59add2);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59add8:{NFSU2_TR(0x59add8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59adda:{NFSU2_TR(0x59adda);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59addd:{NFSU2_TR(0x59addd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ade2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59ade2:L59ade2:{c.instructions+=5;NFSU2_TR(0x59ade2);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ade5:{NFSU2_TR(0x59ade5);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59adeb:{NFSU2_TR(0x59adeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59aded:{NFSU2_TR(0x59aded);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B59adf0:{NFSU2_TR(0x59adf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59adf5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59adf5:L59adf5:{c.instructions+=4;NFSU2_TR(0x59adf5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B59adf8:{NFSU2_TR(0x59adf8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B59adf9:{NFSU2_TR(0x59adf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59adfb:{NFSU2_TR(0x59adfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ad60u);}goto L59ad60;}}
}
B59ae01:L59ae01:{c.instructions+=5;NFSU2_TR(0x59ae01);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae03:{NFSU2_TR(0x59ae03);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ae07:{NFSU2_TR(0x59ae07);
u8 U[4];
w4(U+0,u32(0x2b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae0c:{NFSU2_TR(0x59ae0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae0d:{NFSU2_TR(0x59ae0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ae12ull));
TAIL_STATIC(0x43bcd0u,43b);
}
B59ae12:L59ae12:{c.instructions+=8;NFSU2_TR(0x59ae12);
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
B59ae15:{NFSU2_TR(0x59ae15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ae16:{NFSU2_TR(0x59ae16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59ae17:{NFSU2_TR(0x59ae17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59ae18:{NFSU2_TR(0x59ae18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59ae19:{NFSU2_TR(0x59ae19);
__builtin_memmove((R+16),(R+20),4);
}
B59ae1b:{NFSU2_TR(0x59ae1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59ae1c:{NFSU2_TR(0x59ae1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59ae20:L59ae20:{c.instructions+=7;NFSU2_TR(0x59ae20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ae24:{NFSU2_TR(0x59ae24);
__builtin_memmove(gp(0x86b340),(R+0),4);
}
B59ae29:{NFSU2_TR(0x59ae29);
w4(R+0,u32(0xaaaaaaabull));
}
B59ae2e:{NFSU2_TR(0x59ae2e);
u8 U[32];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+24)));
}
B59ae32:{NFSU2_TR(0x59ae32);
u8 U[48];
w4(U+40,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B59ae35:{NFSU2_TR(0x59ae35);
__builtin_memmove(gp(0x86b344),(R+8),4);
}
B59ae3b:{NFSU2_TR(0x59ae3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59ae40:L59ae40:{c.instructions+=4;NFSU2_TR(0x59ae40);
__builtin_memmove((R+4),gp(0x86b340),4);
}
B59ae46:{NFSU2_TR(0x59ae46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59ae48:{NFSU2_TR(0x59ae48);
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
B59ae4a:{NFSU2_TR(0x59ae4a);
if(r1(R+518)){{goto L59ae8e;}}
}
B59ae4c:L59ae4c:{c.instructions+=3;NFSU2_TR(0x59ae4c);
__builtin_memmove((R+8),gp(0x86b344),4);
}
B59ae52:{NFSU2_TR(0x59ae52);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59ae54:{NFSU2_TR(0x59ae54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59ae8e;}}
}
B59ae56:L59ae56:{c.instructions+=7;NFSU2_TR(0x59ae56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae57:{NFSU2_TR(0x59ae57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae58:{NFSU2_TR(0x59ae58);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B59ae5c:{NFSU2_TR(0x59ae5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae5d:{NFSU2_TR(0x59ae5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae5e:{NFSU2_TR(0x59ae5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59ae62:{NFSU2_TR(0x59ae62);
__builtin_memmove((R+24),(R+8),4);
}
B59ae64:L59ae64:{c.instructions+=3;NFSU2_TR(0x59ae64);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B59ae68:{NFSU2_TR(0x59ae68);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59ae6a:{NFSU2_TR(0x59ae6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59ae84;}}
}
B59ae6c:L59ae6c:{c.instructions+=4;NFSU2_TR(0x59ae6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59ae6e:{NFSU2_TR(0x59ae6e);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B59ae72:{NFSU2_TR(0x59ae72);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ae74:{NFSU2_TR(0x59ae74);
if(r1(R+518)){{goto L59ae84;}}
}
B59ae76:L59ae76:{c.instructions+=2;NFSU2_TR(0x59ae76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59ae78:{NFSU2_TR(0x59ae78);
if(r1(R+518)){{goto L59ae82;}}
}
B59ae7a:L59ae7a:{c.instructions+=3;NFSU2_TR(0x59ae7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59ae7d:{NFSU2_TR(0x59ae7d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+5)));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B59ae80:{NFSU2_TR(0x59ae80);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59ae84;}}
}
B59ae82:L59ae82:{c.instructions+=1;NFSU2_TR(0x59ae82);
__builtin_memmove((R+0),(R+4),4);
}
B59ae84:L59ae84:{c.instructions+=3;NFSU2_TR(0x59ae84);
w1(R+512,carry<u32>(r4(R+4),u32(0x18ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B59ae87:{NFSU2_TR(0x59ae87);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59ae88:{NFSU2_TR(0x59ae88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ae64u);}goto L59ae64;}}
}
B59ae8a:L59ae8a:{c.instructions+=4;NFSU2_TR(0x59ae8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ae8b:{NFSU2_TR(0x59ae8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59ae8c:{NFSU2_TR(0x59ae8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59ae8d:{NFSU2_TR(0x59ae8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59ae8e:L59ae8e:{c.instructions+=1;NFSU2_TR(0x59ae8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59ae90:L59ae90:{c.instructions+=9;NFSU2_TR(0x59ae90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae91:{NFSU2_TR(0x59ae91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B59ae95:{NFSU2_TR(0x59ae95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae96:{NFSU2_TR(0x59ae96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ae97:{NFSU2_TR(0x59ae97);
__builtin_memmove((R+28),(R+20),4);
}
B59ae99:{NFSU2_TR(0x59ae99);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B59ae9b:{NFSU2_TR(0x59ae9b);
__builtin_memmove((R+0),(R+4),4);
}
B59ae9d:{NFSU2_TR(0x59ae9d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B59ae9f:{NFSU2_TR(0x59ae9f);
}
B59aea0:L59aea0:{c.instructions+=3;NFSU2_TR(0x59aea0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B59aea2:{NFSU2_TR(0x59aea2);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(R+8))-u32(r1(U+9))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B59aea5:{NFSU2_TR(0x59aea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59aed3;}}
}
B59aea7:L59aea7:{c.instructions+=4;NFSU2_TR(0x59aea7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B59aea8:{NFSU2_TR(0x59aea8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59aea9:{NFSU2_TR(0x59aea9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59aeac:{NFSU2_TR(0x59aeac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59aea0u);}goto L59aea0;}}
}
B59aeae:L59aeae:{c.instructions+=2;NFSU2_TR(0x59aeae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59aeb0:{NFSU2_TR(0x59aeb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59aeb3:L59aeb3:{c.instructions+=3;NFSU2_TR(0x59aeb3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B59aeb5:{NFSU2_TR(0x59aeb5);
u8 U[11];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(R+8))-u32(r1(U+9))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B59aeb8:{NFSU2_TR(0x59aeb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59aed3;}}
}
B59aeba:L59aeba:{c.instructions+=3;NFSU2_TR(0x59aeba);
u8 U[13];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B59aebe:{NFSU2_TR(0x59aebe);
u8 U[15];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(R+8))-u32(r1(U+13))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B59aec2:{NFSU2_TR(0x59aec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59aed3;}}
}
B59aec4:L59aec4:{c.instructions+=4;NFSU2_TR(0x59aec4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59aec5:{NFSU2_TR(0x59aec5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B59aec6:{NFSU2_TR(0x59aec6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59aec9:{NFSU2_TR(0x59aec9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59aeb3u);}goto L59aeb3;}}
}
B59aecb:L59aecb:{c.instructions+=5;NFSU2_TR(0x59aecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59aecc:{NFSU2_TR(0x59aecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59aecd:{NFSU2_TR(0x59aecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59aece:{NFSU2_TR(0x59aece);
w1(R+0,u8(0x1ull));
}
B59aed0:{NFSU2_TR(0x59aed0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59aed3:L59aed3:{c.instructions+=5;NFSU2_TR(0x59aed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59aed4:{NFSU2_TR(0x59aed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59aed5:{NFSU2_TR(0x59aed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59aed6:{NFSU2_TR(0x59aed6);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59aed8:{NFSU2_TR(0x59aed8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59aee0:L59aee0:{c.instructions+=4;NFSU2_TR(0x59aee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59aee4:{NFSU2_TR(0x59aee4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59aeea:{NFSU2_TR(0x59aeea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59aeed:{NFSU2_TR(0x59aeed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59aeff;}}
}
B59aeef:L59aeef:{c.instructions+=5;NFSU2_TR(0x59aeef);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B59aef3:{NFSU2_TR(0x59aef3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59aef5:{NFSU2_TR(0x59aef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aef9:{NFSU2_TR(0x59aef9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59aefd:{NFSU2_TR(0x59aefd);
{goto L59af2e;}
}
B59aeff:L59aeff:{c.instructions+=1;NFSU2_TR(0x59aeff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59af16;}}
}
B59af01:L59af01:{c.instructions+=6;NFSU2_TR(0x59af01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59af05:{NFSU2_TR(0x59af05);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59af07:{NFSU2_TR(0x59af07);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B59af0c:{NFSU2_TR(0x59af0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59af10:{NFSU2_TR(0x59af10);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59af14:{NFSU2_TR(0x59af14);
{goto L59af2e;}
}
B59af16:L59af16:{c.instructions+=2;NFSU2_TR(0x59af16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59af19:{NFSU2_TR(0x59af19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59af2e;}}
}
B59af1b:L59af1b:{c.instructions+=5;NFSU2_TR(0x59af1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59af1f:{NFSU2_TR(0x59af1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59af21:{NFSU2_TR(0x59af21);
u8 U[13];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B59af26:{NFSU2_TR(0x59af26);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59af2a:{NFSU2_TR(0x59af2a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59af2e:L59af2e:{c.instructions+=7;NFSU2_TR(0x59af2e);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59af34:{NFSU2_TR(0x59af34);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59af3a:{NFSU2_TR(0x59af3a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59af3e:{NFSU2_TR(0x59af3e);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59af44:{NFSU2_TR(0x59af44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59af46:{NFSU2_TR(0x59af46);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59af49:{NFSU2_TR(0x59af49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59af6b;}}
}
B59af4b:L59af4b:{c.instructions+=6;NFSU2_TR(0x59af4b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59af4f:{NFSU2_TR(0x59af4f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59af55:{NFSU2_TR(0x59af55);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59af59:{NFSU2_TR(0x59af59);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59af5b:{NFSU2_TR(0x59af5b);
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
B59af5e:{NFSU2_TR(0x59af5e);
if(r1(R+514)){{goto L59af68;}}
}
B59af60:L59af60:{c.instructions+=2;NFSU2_TR(0x59af60);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59af62:{NFSU2_TR(0x59af62);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59af68:L59af68:{c.instructions+=1;NFSU2_TR(0x59af68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59af6b:L59af6b:{c.instructions+=2;NFSU2_TR(0x59af6b);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59af71:{NFSU2_TR(0x59af71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59af80:L59af80:{c.instructions+=6;NFSU2_TR(0x59af80);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59af84:{NFSU2_TR(0x59af84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59af85:{NFSU2_TR(0x59af85);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59af8b:{NFSU2_TR(0x59af8b);
__builtin_memmove((R+24),(R+4),4);
}
B59af8d:{NFSU2_TR(0x59af8d);
{u32 ea_=u32(u32(8003152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59af93:{NFSU2_TR(0x59af93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59af98ull));
TAIL_STATIC(0x75bed4u,75b);
}
B59af98:L59af98:{c.instructions+=2;NFSU2_TR(0x59af98);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59af9a:{NFSU2_TR(0x59af9a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L59afa0;}}
}
B59af9c:L59af9c:{c.instructions+=2;NFSU2_TR(0x59af9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59af9e:{NFSU2_TR(0x59af9e);
{goto L59afac;}
}
B59afa0:L59afa0:{c.instructions+=2;NFSU2_TR(0x59afa0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59afa5:{NFSU2_TR(0x59afa5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59afac;}}
}
B59afa7:L59afa7:{c.instructions+=1;NFSU2_TR(0x59afa7);
w4(R+0,u32(0xc8ull));
}
B59afac:L59afac:{c.instructions+=3;NFSU2_TR(0x59afac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59afb0:{NFSU2_TR(0x59afb0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x17ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x17ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59afb3:{NFSU2_TR(0x59afb3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59afbc;}}
}
B59afb5:L59afb5:{c.instructions+=3;NFSU2_TR(0x59afb5);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B59afb8:{NFSU2_TR(0x59afb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59afb9:{NFSU2_TR(0x59afb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59afbc:L59afbc:{c.instructions+=1;NFSU2_TR(0x59afbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59afca;}}
}
B59afbe:L59afbe:{c.instructions+=4;NFSU2_TR(0x59afbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59afc2:{NFSU2_TR(0x59afc2);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B59afc6:{NFSU2_TR(0x59afc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59afc7:{NFSU2_TR(0x59afc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59afca:L59afca:{c.instructions+=2;NFSU2_TR(0x59afca);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59afcd:{NFSU2_TR(0x59afcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59afd7;}}
}
B59afcf:L59afcf:{c.instructions+=2;NFSU2_TR(0x59afcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59afd3:{NFSU2_TR(0x59afd3);
u8 U[13];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B59afd7:L59afd7:{c.instructions+=2;NFSU2_TR(0x59afd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59afd8:{NFSU2_TR(0x59afd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59afe0:L59afe0:{c.instructions+=3;NFSU2_TR(0x59afe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59afe4:{NFSU2_TR(0x59afe4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59afe7:{NFSU2_TR(0x59afe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x59b01eu,59b);}
}
B59afe9:L59afe9:{c.instructions+=8;NFSU2_TR(0x59afe9);
__builtin_memmove((R+8),(R+4),4);
}
B59afeb:{NFSU2_TR(0x59afeb);
w4(R+0,u32(0x64646464ull));
}
B59aff0:{NFSU2_TR(0x59aff0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59aff2:{NFSU2_TR(0x59aff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aff5:{NFSU2_TR(0x59aff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59aff8:{NFSU2_TR(0x59aff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59affb:{NFSU2_TR(0x59affb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59affe:{NFSU2_TR(0x59affe);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
TAIL_STATIC(0x59b002u,59b);
}
XIT:NFSU2_TR_EXIT(0x59a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
