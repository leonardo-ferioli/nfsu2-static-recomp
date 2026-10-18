#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6dc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6dc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 page_6dc(Cpu& c){return body_6dc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6dc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6dc000:goto L6dc000;
case 0x6dc004:c.instructions+=2;goto B6dc004;
case 0x6dc009:c.instructions+=1;goto B6dc009;
case 0x6dc010:goto L6dc010;
case 0x6dc016:c.instructions+=4;goto B6dc016;
case 0x6dc01b:c.instructions+=3;goto B6dc01b;
case 0x6dc01d:c.instructions+=2;goto B6dc01d;
case 0x6dc023:c.instructions+=1;goto B6dc023;
case 0x6dc025:goto L6dc025;
case 0x6dc02b:c.instructions+=1;goto B6dc02b;
case 0x6dc02d:goto L6dc02d;
case 0x6dc033:c.instructions+=9;goto B6dc033;
case 0x6dc034:c.instructions+=8;goto B6dc034;
case 0x6dc039:c.instructions+=7;goto B6dc039;
case 0x6dc03f:c.instructions+=6;goto B6dc03f;
case 0x6dc041:c.instructions+=5;goto B6dc041;
case 0x6dc043:c.instructions+=4;goto B6dc043;
case 0x6dc044:c.instructions+=3;goto B6dc044;
case 0x6dc045:c.instructions+=2;goto B6dc045;
case 0x6dc046:c.instructions+=1;goto B6dc046;
case 0x6dc04c:goto L6dc04c;
case 0x6dc052:c.instructions+=1;goto B6dc052;
case 0x6dc053:goto L6dc053;
case 0x6dc060:goto L6dc060;
case 0x6dc064:c.instructions+=3;goto B6dc064;
case 0x6dc066:c.instructions+=2;goto B6dc066;
case 0x6dc06c:c.instructions+=1;goto B6dc06c;
case 0x6dc06e:goto L6dc06e;
case 0x6dc074:c.instructions+=5;goto B6dc074;
case 0x6dc075:c.instructions+=4;goto B6dc075;
case 0x6dc07a:c.instructions+=3;goto B6dc07a;
case 0x6dc07c:c.instructions+=2;goto B6dc07c;
case 0x6dc07d:c.instructions+=1;goto B6dc07d;
case 0x6dc083:goto L6dc083;
case 0x6dc089:goto L6dc089;
case 0x6dc090:goto L6dc090;
case 0x6dc095:c.instructions+=2;goto B6dc095;
case 0x6dc097:c.instructions+=1;goto B6dc097;
case 0x6dc099:goto L6dc099;
case 0x6dc09e:c.instructions+=5;goto B6dc09e;
case 0x6dc0a0:c.instructions+=4;goto B6dc0a0;
case 0x6dc0aa:c.instructions+=3;goto B6dc0aa;
case 0x6dc0ac:c.instructions+=2;goto B6dc0ac;
case 0x6dc0ad:c.instructions+=1;goto B6dc0ad;
case 0x6dc0b3:goto L6dc0b3;
case 0x6dc0c0:goto L6dc0c0;
case 0x6dc0c4:c.instructions+=9;goto B6dc0c4;
case 0x6dc0c9:c.instructions+=8;goto B6dc0c9;
case 0x6dc0cb:c.instructions+=7;goto B6dc0cb;
case 0x6dc0cc:c.instructions+=6;goto B6dc0cc;
case 0x6dc0d0:c.instructions+=5;goto B6dc0d0;
case 0x6dc0d1:c.instructions+=4;goto B6dc0d1;
case 0x6dc0d5:c.instructions+=3;goto B6dc0d5;
case 0x6dc0d6:c.instructions+=2;goto B6dc0d6;
case 0x6dc0d7:c.instructions+=1;goto B6dc0d7;
case 0x6dc0dd:goto L6dc0dd;
case 0x6dc0e0:goto L6dc0e0;
case 0x6dc0e4:c.instructions+=10;goto B6dc0e4;
case 0x6dc0e9:c.instructions+=9;goto B6dc0e9;
case 0x6dc0eb:c.instructions+=8;goto B6dc0eb;
case 0x6dc0ec:c.instructions+=7;goto B6dc0ec;
case 0x6dc0f0:c.instructions+=6;goto B6dc0f0;
case 0x6dc0f1:c.instructions+=5;goto B6dc0f1;
case 0x6dc0f2:c.instructions+=4;goto B6dc0f2;
case 0x6dc0f8:c.instructions+=3;goto B6dc0f8;
case 0x6dc0f9:c.instructions+=2;goto B6dc0f9;
case 0x6dc0fa:c.instructions+=1;goto B6dc0fa;
case 0x6dc100:goto L6dc100;
case 0x6dc104:c.instructions+=11;goto B6dc104;
case 0x6dc10a:c.instructions+=10;goto B6dc10a;
case 0x6dc110:c.instructions+=9;goto B6dc110;
case 0x6dc112:c.instructions+=8;goto B6dc112;
case 0x6dc117:c.instructions+=7;goto B6dc117;
case 0x6dc119:c.instructions+=6;goto B6dc119;
case 0x6dc11a:c.instructions+=5;goto B6dc11a;
case 0x6dc120:c.instructions+=4;goto B6dc120;
case 0x6dc126:c.instructions+=3;goto B6dc126;
case 0x6dc12b:c.instructions+=2;goto B6dc12b;
case 0x6dc12c:c.instructions+=1;goto B6dc12c;
case 0x6dc130:goto L6dc130;
case 0x6dc135:c.instructions+=3;goto B6dc135;
case 0x6dc137:c.instructions+=2;goto B6dc137;
case 0x6dc138:c.instructions+=1;goto B6dc138;
case 0x6dc13b:goto L6dc13b;
case 0x6dc13d:c.instructions+=1;goto B6dc13d;
case 0x6dc13f:goto L6dc13f;
case 0x6dc143:c.instructions+=15;goto B6dc143;
case 0x6dc148:c.instructions+=14;goto B6dc148;
case 0x6dc14a:c.instructions+=13;goto B6dc14a;
case 0x6dc14b:c.instructions+=12;goto B6dc14b;
case 0x6dc14f:c.instructions+=11;goto B6dc14f;
case 0x6dc150:c.instructions+=10;goto B6dc150;
case 0x6dc154:c.instructions+=9;goto B6dc154;
case 0x6dc155:c.instructions+=8;goto B6dc155;
case 0x6dc156:c.instructions+=7;goto B6dc156;
case 0x6dc15a:c.instructions+=6;goto B6dc15a;
case 0x6dc15b:c.instructions+=5;goto B6dc15b;
case 0x6dc15c:c.instructions+=4;goto B6dc15c;
case 0x6dc162:c.instructions+=3;goto B6dc162;
case 0x6dc163:c.instructions+=2;goto B6dc163;
case 0x6dc164:c.instructions+=1;goto B6dc164;
case 0x6dc16a:goto L6dc16a;
case 0x6dc170:c.instructions+=10;goto B6dc170;
case 0x6dc176:c.instructions+=9;goto B6dc176;
case 0x6dc17b:c.instructions+=8;goto B6dc17b;
case 0x6dc17d:c.instructions+=7;goto B6dc17d;
case 0x6dc17f:c.instructions+=6;goto B6dc17f;
case 0x6dc180:c.instructions+=5;goto B6dc180;
case 0x6dc181:c.instructions+=4;goto B6dc181;
case 0x6dc187:c.instructions+=3;goto B6dc187;
case 0x6dc18d:c.instructions+=2;goto B6dc18d;
case 0x6dc192:c.instructions+=1;goto B6dc192;
case 0x6dc193:goto L6dc193;
case 0x6dc1a0:goto L6dc1a0;
case 0x6dc1a5:c.instructions+=3;goto B6dc1a5;
case 0x6dc1a7:c.instructions+=2;goto B6dc1a7;
case 0x6dc1a8:c.instructions+=1;goto B6dc1a8;
case 0x6dc1ab:goto L6dc1ab;
case 0x6dc1b0:c.instructions+=1;goto B6dc1b0;
case 0x6dc1b2:goto L6dc1b2;
case 0x6dc1b8:c.instructions+=20;goto B6dc1b8;
case 0x6dc1bf:c.instructions+=19;goto B6dc1bf;
case 0x6dc1c0:c.instructions+=18;goto B6dc1c0;
case 0x6dc1c1:c.instructions+=17;goto B6dc1c1;
case 0x6dc1c2:c.instructions+=16;goto B6dc1c2;
case 0x6dc1c6:c.instructions+=15;goto B6dc1c6;
case 0x6dc1c8:c.instructions+=14;goto B6dc1c8;
case 0x6dc1ca:c.instructions+=13;goto B6dc1ca;
case 0x6dc1cb:c.instructions+=12;goto B6dc1cb;
case 0x6dc1d2:c.instructions+=11;goto B6dc1d2;
case 0x6dc1d6:c.instructions+=10;goto B6dc1d6;
case 0x6dc1d7:c.instructions+=9;goto B6dc1d7;
case 0x6dc1db:c.instructions+=8;goto B6dc1db;
case 0x6dc1dc:c.instructions+=7;goto B6dc1dc;
case 0x6dc1de:c.instructions+=6;goto B6dc1de;
case 0x6dc1e3:c.instructions+=5;goto B6dc1e3;
case 0x6dc1e5:c.instructions+=4;goto B6dc1e5;
case 0x6dc1e6:c.instructions+=3;goto B6dc1e6;
case 0x6dc1e7:c.instructions+=2;goto B6dc1e7;
case 0x6dc1e8:c.instructions+=1;goto B6dc1e8;
case 0x6dc1ee:goto L6dc1ee;
case 0x6dc1f4:c.instructions+=15;goto B6dc1f4;
case 0x6dc1fa:c.instructions+=14;goto B6dc1fa;
case 0x6dc1fc:c.instructions+=13;goto B6dc1fc;
case 0x6dc1fe:c.instructions+=12;goto B6dc1fe;
case 0x6dc203:c.instructions+=11;goto B6dc203;
case 0x6dc208:c.instructions+=10;goto B6dc208;
case 0x6dc20d:c.instructions+=9;goto B6dc20d;
case 0x6dc212:c.instructions+=8;goto B6dc212;
case 0x6dc214:c.instructions+=7;goto B6dc214;
case 0x6dc215:c.instructions+=6;goto B6dc215;
case 0x6dc216:c.instructions+=5;goto B6dc216;
case 0x6dc217:c.instructions+=4;goto B6dc217;
case 0x6dc21d:c.instructions+=3;goto B6dc21d;
case 0x6dc223:c.instructions+=2;goto B6dc223;
case 0x6dc228:c.instructions+=1;goto B6dc228;
case 0x6dc229:goto L6dc229;
case 0x6dc230:goto L6dc230;
case 0x6dc232:c.instructions+=6;goto B6dc232;
case 0x6dc237:c.instructions+=5;goto B6dc237;
case 0x6dc23c:c.instructions+=4;goto B6dc23c;
case 0x6dc23f:c.instructions+=3;goto B6dc23f;
case 0x6dc244:c.instructions+=2;goto B6dc244;
case 0x6dc249:c.instructions+=1;goto B6dc249;
case 0x6dc250:goto L6dc250;
case 0x6dc251:c.instructions+=3;goto B6dc251;
case 0x6dc253:c.instructions+=2;goto B6dc253;
case 0x6dc258:c.instructions+=1;goto B6dc258;
case 0x6dc25d:goto L6dc25d;
case 0x6dc25f:goto L6dc25f;
case 0x6dc262:c.instructions+=13;goto B6dc262;
case 0x6dc263:c.instructions+=12;goto B6dc263;
case 0x6dc268:c.instructions+=11;goto B6dc268;
case 0x6dc26d:c.instructions+=10;goto B6dc26d;
case 0x6dc272:c.instructions+=9;goto B6dc272;
case 0x6dc277:c.instructions+=8;goto B6dc277;
case 0x6dc27c:c.instructions+=7;goto B6dc27c;
case 0x6dc27e:c.instructions+=6;goto B6dc27e;
case 0x6dc284:c.instructions+=5;goto B6dc284;
case 0x6dc28a:c.instructions+=4;goto B6dc28a;
case 0x6dc290:c.instructions+=3;goto B6dc290;
case 0x6dc292:c.instructions+=2;goto B6dc292;
case 0x6dc293:c.instructions+=1;goto B6dc293;
case 0x6dc299:goto L6dc299;
case 0x6dc29a:c.instructions+=1;goto B6dc29a;
case 0x6dc2a0:goto L6dc2a0;
case 0x6dc2a1:c.instructions+=3;goto B6dc2a1;
case 0x6dc2a6:c.instructions+=2;goto B6dc2a6;
case 0x6dc2a8:c.instructions+=1;goto B6dc2a8;
case 0x6dc2ad:goto L6dc2ad;
case 0x6dc2af:goto L6dc2af;
case 0x6dc2b0:c.instructions+=1;goto B6dc2b0;
case 0x6dc2c0:goto L6dc2c0;
case 0x6dc2c2:c.instructions+=7;goto B6dc2c2;
case 0x6dc2c7:c.instructions+=6;goto B6dc2c7;
case 0x6dc2cc:c.instructions+=5;goto B6dc2cc;
case 0x6dc2d1:c.instructions+=4;goto B6dc2d1;
case 0x6dc2d6:c.instructions+=3;goto B6dc2d6;
case 0x6dc2db:c.instructions+=2;goto B6dc2db;
case 0x6dc2e0:c.instructions+=1;goto B6dc2e0;
case 0x6dc2f0:goto L6dc2f0;
case 0x6dc2f5:c.instructions+=1;goto B6dc2f5;
case 0x6dc300:goto L6dc300;
case 0x6dc304:c.instructions+=2;goto B6dc304;
case 0x6dc30a:c.instructions+=1;goto B6dc30a;
case 0x6dc30c:goto L6dc30c;
case 0x6dc312:c.instructions+=6;goto B6dc312;
case 0x6dc313:c.instructions+=5;goto B6dc313;
case 0x6dc315:c.instructions+=4;goto B6dc315;
case 0x6dc31a:c.instructions+=3;goto B6dc31a;
case 0x6dc31c:c.instructions+=2;goto B6dc31c;
case 0x6dc31d:c.instructions+=1;goto B6dc31d;
case 0x6dc323:goto L6dc323;
case 0x6dc330:goto L6dc330;
case 0x6dc335:c.instructions+=1;goto B6dc335;
case 0x6dc340:goto L6dc340;
case 0x6dc344:c.instructions+=17;goto B6dc344;
case 0x6dc348:c.instructions+=16;goto B6dc348;
case 0x6dc349:c.instructions+=15;goto B6dc349;
case 0x6dc34b:c.instructions+=14;goto B6dc34b;
case 0x6dc34f:c.instructions+=13;goto B6dc34f;
case 0x6dc352:c.instructions+=12;goto B6dc352;
case 0x6dc356:c.instructions+=11;goto B6dc356;
case 0x6dc357:c.instructions+=10;goto B6dc357;
case 0x6dc359:c.instructions+=9;goto B6dc359;
case 0x6dc35c:c.instructions+=8;goto B6dc35c;
case 0x6dc360:c.instructions+=7;goto B6dc360;
case 0x6dc366:c.instructions+=6;goto B6dc366;
case 0x6dc369:c.instructions+=5;goto B6dc369;
case 0x6dc36c:c.instructions+=4;goto B6dc36c;
case 0x6dc36f:c.instructions+=3;goto B6dc36f;
case 0x6dc372:c.instructions+=2;goto B6dc372;
case 0x6dc379:c.instructions+=1;goto B6dc379;
case 0x6dc37b:goto L6dc37b;
case 0x6dc37f:c.instructions+=2;goto B6dc37f;
case 0x6dc382:c.instructions+=1;goto B6dc382;
case 0x6dc387:goto L6dc387;
case 0x6dc389:c.instructions+=1;goto B6dc389;
case 0x6dc38b:goto L6dc38b;
case 0x6dc390:c.instructions+=12;goto B6dc390;
case 0x6dc392:c.instructions+=11;goto B6dc392;
case 0x6dc395:c.instructions+=10;goto B6dc395;
case 0x6dc396:c.instructions+=9;goto B6dc396;
case 0x6dc399:c.instructions+=8;goto B6dc399;
case 0x6dc39a:c.instructions+=7;goto B6dc39a;
case 0x6dc39b:c.instructions+=6;goto B6dc39b;
case 0x6dc39e:c.instructions+=5;goto B6dc39e;
case 0x6dc39f:c.instructions+=4;goto B6dc39f;
case 0x6dc3a2:c.instructions+=3;goto B6dc3a2;
case 0x6dc3a3:c.instructions+=2;goto B6dc3a3;
case 0x6dc3a4:c.instructions+=1;goto B6dc3a4;
case 0x6dc3a7:goto L6dc3a7;
case 0x6dc3a8:c.instructions+=3;goto B6dc3a8;
case 0x6dc3aa:c.instructions+=2;goto B6dc3aa;
case 0x6dc3ab:c.instructions+=1;goto B6dc3ab;
case 0x6dc3ae:goto L6dc3ae;
case 0x6dc3b1:c.instructions+=1;goto B6dc3b1;
case 0x6dc3b6:goto L6dc3b6;
case 0x6dc3b8:c.instructions+=1;goto B6dc3b8;
case 0x6dc3ba:goto L6dc3ba;
case 0x6dc3bd:c.instructions+=15;goto B6dc3bd;
case 0x6dc3be:c.instructions+=14;goto B6dc3be;
case 0x6dc3c1:c.instructions+=13;goto B6dc3c1;
case 0x6dc3c2:c.instructions+=12;goto B6dc3c2;
case 0x6dc3c3:c.instructions+=11;goto B6dc3c3;
case 0x6dc3c6:c.instructions+=10;goto B6dc3c6;
case 0x6dc3c9:c.instructions+=9;goto B6dc3c9;
case 0x6dc3ca:c.instructions+=8;goto B6dc3ca;
case 0x6dc3cd:c.instructions+=7;goto B6dc3cd;
case 0x6dc3d3:c.instructions+=6;goto B6dc3d3;
case 0x6dc3d5:c.instructions+=5;goto B6dc3d5;
case 0x6dc3d6:c.instructions+=4;goto B6dc3d6;
case 0x6dc3d9:c.instructions+=3;goto B6dc3d9;
case 0x6dc3da:c.instructions+=2;goto B6dc3da;
case 0x6dc3db:c.instructions+=1;goto B6dc3db;
case 0x6dc3de:goto L6dc3de;
case 0x6dc3df:c.instructions+=4;goto B6dc3df;
case 0x6dc3e0:c.instructions+=3;goto B6dc3e0;
case 0x6dc3e2:c.instructions+=2;goto B6dc3e2;
case 0x6dc3e3:c.instructions+=1;goto B6dc3e3;
case 0x6dc3f0:goto L6dc3f0;
case 0x6dc3f3:c.instructions+=9;goto B6dc3f3;
case 0x6dc3f4:c.instructions+=8;goto B6dc3f4;
case 0x6dc3f5:c.instructions+=7;goto B6dc3f5;
case 0x6dc3f7:c.instructions+=6;goto B6dc3f7;
case 0x6dc3fa:c.instructions+=5;goto B6dc3fa;
case 0x6dc3fb:c.instructions+=4;goto B6dc3fb;
case 0x6dc3fe:c.instructions+=3;goto B6dc3fe;
case 0x6dc400:c.instructions+=2;goto B6dc400;
case 0x6dc408:c.instructions+=1;goto B6dc408;
case 0x6dc40d:goto L6dc40d;
case 0x6dc412:goto L6dc412;
case 0x6dc414:c.instructions+=1;goto B6dc414;
case 0x6dc416:goto L6dc416;
case 0x6dc41b:goto L6dc41b;
case 0x6dc420:c.instructions+=11;goto B6dc420;
case 0x6dc422:c.instructions+=10;goto B6dc422;
case 0x6dc426:c.instructions+=9;goto B6dc426;
case 0x6dc427:c.instructions+=8;goto B6dc427;
case 0x6dc42a:c.instructions+=7;goto B6dc42a;
case 0x6dc42c:c.instructions+=6;goto B6dc42c;
case 0x6dc42d:c.instructions+=5;goto B6dc42d;
case 0x6dc430:c.instructions+=4;goto B6dc430;
case 0x6dc431:c.instructions+=3;goto B6dc431;
case 0x6dc432:c.instructions+=2;goto B6dc432;
case 0x6dc433:c.instructions+=1;goto B6dc433;
case 0x6dc436:goto L6dc436;
case 0x6dc438:c.instructions+=1;goto B6dc438;
case 0x6dc43a:goto L6dc43a;
case 0x6dc43f:c.instructions+=11;goto B6dc43f;
case 0x6dc441:c.instructions+=10;goto B6dc441;
case 0x6dc445:c.instructions+=9;goto B6dc445;
case 0x6dc446:c.instructions+=8;goto B6dc446;
case 0x6dc449:c.instructions+=7;goto B6dc449;
case 0x6dc44b:c.instructions+=6;goto B6dc44b;
case 0x6dc44c:c.instructions+=5;goto B6dc44c;
case 0x6dc44f:c.instructions+=4;goto B6dc44f;
case 0x6dc450:c.instructions+=3;goto B6dc450;
case 0x6dc451:c.instructions+=2;goto B6dc451;
case 0x6dc452:c.instructions+=1;goto B6dc452;
case 0x6dc455:goto L6dc455;
case 0x6dc458:c.instructions+=9;goto B6dc458;
case 0x6dc45a:c.instructions+=8;goto B6dc45a;
case 0x6dc45f:c.instructions+=7;goto B6dc45f;
case 0x6dc463:c.instructions+=6;goto B6dc463;
case 0x6dc464:c.instructions+=5;goto B6dc464;
case 0x6dc467:c.instructions+=4;goto B6dc467;
case 0x6dc468:c.instructions+=3;goto B6dc468;
case 0x6dc46a:c.instructions+=2;goto B6dc46a;
case 0x6dc46b:c.instructions+=1;goto B6dc46b;
case 0x6dc46e:goto L6dc46e;
case 0x6dc472:c.instructions+=9;goto B6dc472;
case 0x6dc474:c.instructions+=8;goto B6dc474;
case 0x6dc479:c.instructions+=7;goto B6dc479;
case 0x6dc47d:c.instructions+=6;goto B6dc47d;
case 0x6dc47e:c.instructions+=5;goto B6dc47e;
case 0x6dc481:c.instructions+=4;goto B6dc481;
case 0x6dc482:c.instructions+=3;goto B6dc482;
case 0x6dc484:c.instructions+=2;goto B6dc484;
case 0x6dc485:c.instructions+=1;goto B6dc485;
case 0x6dc488:goto L6dc488;
case 0x6dc48b:c.instructions+=6;goto B6dc48b;
case 0x6dc48f:c.instructions+=5;goto B6dc48f;
case 0x6dc493:c.instructions+=4;goto B6dc493;
case 0x6dc494:c.instructions+=3;goto B6dc494;
case 0x6dc495:c.instructions+=2;goto B6dc495;
case 0x6dc496:c.instructions+=1;goto B6dc496;
case 0x6dc49b:goto L6dc49b;
case 0x6dc49f:c.instructions+=4;goto B6dc49f;
case 0x6dc4a1:c.instructions+=3;goto B6dc4a1;
case 0x6dc4a4:c.instructions+=2;goto B6dc4a4;
case 0x6dc4a5:c.instructions+=1;goto B6dc4a5;
case 0x6dc4a8:goto L6dc4a8;
case 0x6dc4ab:c.instructions+=3;goto B6dc4ab;
case 0x6dc4ad:c.instructions+=2;goto B6dc4ad;
case 0x6dc4ae:c.instructions+=1;goto B6dc4ae;
case 0x6dc4b1:goto L6dc4b1;
case 0x6dc4b4:c.instructions+=10;goto B6dc4b4;
case 0x6dc4b8:c.instructions+=9;goto B6dc4b8;
case 0x6dc4ba:c.instructions+=8;goto B6dc4ba;
case 0x6dc4bf:c.instructions+=7;goto B6dc4bf;
case 0x6dc4c3:c.instructions+=6;goto B6dc4c3;
case 0x6dc4c4:c.instructions+=5;goto B6dc4c4;
case 0x6dc4c7:c.instructions+=4;goto B6dc4c7;
case 0x6dc4c8:c.instructions+=3;goto B6dc4c8;
case 0x6dc4c9:c.instructions+=2;goto B6dc4c9;
case 0x6dc4ca:c.instructions+=1;goto B6dc4ca;
case 0x6dc4cd:goto L6dc4cd;
case 0x6dc4d0:c.instructions+=6;goto B6dc4d0;
case 0x6dc4d4:c.instructions+=5;goto B6dc4d4;
case 0x6dc4d8:c.instructions+=4;goto B6dc4d8;
case 0x6dc4d9:c.instructions+=3;goto B6dc4d9;
case 0x6dc4da:c.instructions+=2;goto B6dc4da;
case 0x6dc4db:c.instructions+=1;goto B6dc4db;
case 0x6dc4e0:goto L6dc4e0;
case 0x6dc4e4:c.instructions+=4;goto B6dc4e4;
case 0x6dc4e6:c.instructions+=3;goto B6dc4e6;
case 0x6dc4e9:c.instructions+=2;goto B6dc4e9;
case 0x6dc4ea:c.instructions+=1;goto B6dc4ea;
case 0x6dc4ed:goto L6dc4ed;
case 0x6dc4f0:c.instructions+=3;goto B6dc4f0;
case 0x6dc4f2:c.instructions+=2;goto B6dc4f2;
case 0x6dc4f3:c.instructions+=1;goto B6dc4f3;
case 0x6dc4f6:goto L6dc4f6;
case 0x6dc4fa:c.instructions+=4;goto B6dc4fa;
case 0x6dc4fd:c.instructions+=3;goto B6dc4fd;
case 0x6dc500:c.instructions+=2;goto B6dc500;
case 0x6dc503:c.instructions+=1;goto B6dc503;
case 0x6dc508:goto L6dc508;
case 0x6dc509:c.instructions+=5;goto B6dc509;
case 0x6dc50a:c.instructions+=4;goto B6dc50a;
case 0x6dc50c:c.instructions+=3;goto B6dc50c;
case 0x6dc50d:c.instructions+=2;goto B6dc50d;
case 0x6dc510:c.instructions+=1;goto B6dc510;
case 0x6dc520:goto L6dc520;
case 0x6dc523:c.instructions+=3;goto B6dc523;
case 0x6dc525:c.instructions+=2;goto B6dc525;
case 0x6dc526:c.instructions+=1;goto B6dc526;
case 0x6dc529:goto L6dc529;
case 0x6dc530:goto L6dc530;
case 0x6dc531:c.instructions+=4;goto B6dc531;
case 0x6dc533:c.instructions+=3;goto B6dc533;
case 0x6dc536:c.instructions+=2;goto B6dc536;
case 0x6dc538:c.instructions+=1;goto B6dc538;
case 0x6dc53a:goto L6dc53a;
case 0x6dc53c:c.instructions+=2;goto B6dc53c;
case 0x6dc53d:c.instructions+=1;goto B6dc53d;
case 0x6dc540:goto L6dc540;
case 0x6dc547:goto L6dc547;
case 0x6dc548:c.instructions+=1;goto B6dc548;
case 0x6dc550:goto L6dc550;
case 0x6dc551:c.instructions+=4;goto B6dc551;
case 0x6dc552:c.instructions+=3;goto B6dc552;
case 0x6dc553:c.instructions+=2;goto B6dc553;
case 0x6dc555:c.instructions+=1;goto B6dc555;
case 0x6dc55a:goto L6dc55a;
case 0x6dc55c:c.instructions+=1;goto B6dc55c;
case 0x6dc55e:goto L6dc55e;
case 0x6dc563:goto L6dc563;
case 0x6dc565:c.instructions+=1;goto B6dc565;
case 0x6dc567:goto L6dc567;
case 0x6dc56a:c.instructions+=15;goto B6dc56a;
case 0x6dc56b:c.instructions+=14;goto B6dc56b;
case 0x6dc56e:c.instructions+=13;goto B6dc56e;
case 0x6dc571:c.instructions+=12;goto B6dc571;
case 0x6dc572:c.instructions+=11;goto B6dc572;
case 0x6dc574:c.instructions+=10;goto B6dc574;
case 0x6dc577:c.instructions+=9;goto B6dc577;
case 0x6dc578:c.instructions+=8;goto B6dc578;
case 0x6dc57b:c.instructions+=7;goto B6dc57b;
case 0x6dc581:c.instructions+=6;goto B6dc581;
case 0x6dc583:c.instructions+=5;goto B6dc583;
case 0x6dc584:c.instructions+=4;goto B6dc584;
case 0x6dc587:c.instructions+=3;goto B6dc587;
case 0x6dc588:c.instructions+=2;goto B6dc588;
case 0x6dc589:c.instructions+=1;goto B6dc589;
case 0x6dc58c:goto L6dc58c;
case 0x6dc58d:c.instructions+=1;goto B6dc58d;
case 0x6dc58f:goto L6dc58f;
case 0x6dc592:c.instructions+=12;goto B6dc592;
case 0x6dc597:c.instructions+=11;goto B6dc597;
case 0x6dc599:c.instructions+=10;goto B6dc599;
case 0x6dc59c:c.instructions+=9;goto B6dc59c;
case 0x6dc59d:c.instructions+=8;goto B6dc59d;
case 0x6dc59f:c.instructions+=7;goto B6dc59f;
case 0x6dc5a0:c.instructions+=6;goto B6dc5a0;
case 0x6dc5a3:c.instructions+=5;goto B6dc5a3;
case 0x6dc5a4:c.instructions+=4;goto B6dc5a4;
case 0x6dc5a7:c.instructions+=3;goto B6dc5a7;
case 0x6dc5a8:c.instructions+=2;goto B6dc5a8;
case 0x6dc5a9:c.instructions+=1;goto B6dc5a9;
case 0x6dc5ac:goto L6dc5ac;
case 0x6dc5af:c.instructions+=2;goto B6dc5af;
case 0x6dc5b1:c.instructions+=1;goto B6dc5b1;
case 0x6dc5b3:goto L6dc5b3;
case 0x6dc5b5:c.instructions+=9;goto B6dc5b5;
case 0x6dc5b7:c.instructions+=8;goto B6dc5b7;
case 0x6dc5b9:c.instructions+=7;goto B6dc5b9;
case 0x6dc5bd:c.instructions+=6;goto B6dc5bd;
case 0x6dc5be:c.instructions+=5;goto B6dc5be;
case 0x6dc5c1:c.instructions+=4;goto B6dc5c1;
case 0x6dc5c2:c.instructions+=3;goto B6dc5c2;
case 0x6dc5c4:c.instructions+=2;goto B6dc5c4;
case 0x6dc5c5:c.instructions+=1;goto B6dc5c5;
case 0x6dc5c8:goto L6dc5c8;
case 0x6dc5cb:c.instructions+=6;goto B6dc5cb;
case 0x6dc5ce:c.instructions+=5;goto B6dc5ce;
case 0x6dc5d2:c.instructions+=4;goto B6dc5d2;
case 0x6dc5d3:c.instructions+=3;goto B6dc5d3;
case 0x6dc5d4:c.instructions+=2;goto B6dc5d4;
case 0x6dc5d5:c.instructions+=1;goto B6dc5d5;
case 0x6dc5da:goto L6dc5da;
case 0x6dc5dc:c.instructions+=4;goto B6dc5dc;
case 0x6dc5de:c.instructions+=3;goto B6dc5de;
case 0x6dc5e1:c.instructions+=2;goto B6dc5e1;
case 0x6dc5e2:c.instructions+=1;goto B6dc5e2;
case 0x6dc5e5:goto L6dc5e5;
case 0x6dc5e6:c.instructions+=3;goto B6dc5e6;
case 0x6dc5e7:c.instructions+=2;goto B6dc5e7;
case 0x6dc5e8:c.instructions+=1;goto B6dc5e8;
case 0x6dc5f0:goto L6dc5f0;
case 0x6dc5f1:c.instructions+=4;goto B6dc5f1;
case 0x6dc5f5:c.instructions+=3;goto B6dc5f5;
case 0x6dc5f7:c.instructions+=2;goto B6dc5f7;
case 0x6dc5f9:c.instructions+=1;goto B6dc5f9;
case 0x6dc5fb:goto L6dc5fb;
case 0x6dc5fe:c.instructions+=4;goto B6dc5fe;
case 0x6dc600:c.instructions+=3;goto B6dc600;
case 0x6dc603:c.instructions+=2;goto B6dc603;
case 0x6dc605:c.instructions+=1;goto B6dc605;
case 0x6dc607:goto L6dc607;
case 0x6dc60d:c.instructions+=4;goto B6dc60d;
case 0x6dc60e:c.instructions+=3;goto B6dc60e;
case 0x6dc610:c.instructions+=2;goto B6dc610;
case 0x6dc612:c.instructions+=1;goto B6dc612;
case 0x6dc614:goto L6dc614;
case 0x6dc619:c.instructions+=1;goto B6dc619;
case 0x6dc620:goto L6dc620;
case 0x6dc623:c.instructions+=1;goto B6dc623;
case 0x6dc625:goto L6dc625;
case 0x6dc626:c.instructions+=2;goto B6dc626;
case 0x6dc628:c.instructions+=1;goto B6dc628;
case 0x6dc62a:goto L6dc62a;
case 0x6dc62b:c.instructions+=2;goto B6dc62b;
case 0x6dc62c:c.instructions+=1;goto B6dc62c;
case 0x6dc62d:goto L6dc62d;
case 0x6dc62f:c.instructions+=1;goto B6dc62f;
case 0x6dc631:goto L6dc631;
case 0x6dc633:c.instructions+=2;goto B6dc633;
case 0x6dc635:c.instructions+=1;goto B6dc635;
case 0x6dc637:goto L6dc637;
case 0x6dc63d:c.instructions+=3;goto B6dc63d;
case 0x6dc643:c.instructions+=2;goto B6dc643;
case 0x6dc64a:c.instructions+=1;goto B6dc64a;
case 0x6dc650:goto L6dc650;
case 0x6dc651:goto L6dc651;
case 0x6dc652:c.instructions+=1;goto B6dc652;
case 0x6dc660:goto L6dc660;
case 0x6dc661:c.instructions+=4;goto B6dc661;
case 0x6dc665:c.instructions+=3;goto B6dc665;
case 0x6dc667:c.instructions+=2;goto B6dc667;
case 0x6dc669:c.instructions+=1;goto B6dc669;
case 0x6dc66f:goto L6dc66f;
case 0x6dc673:c.instructions+=1;goto B6dc673;
case 0x6dc675:goto L6dc675;
case 0x6dc678:c.instructions+=2;goto B6dc678;
case 0x6dc67a:c.instructions+=1;goto B6dc67a;
case 0x6dc67c:goto L6dc67c;
case 0x6dc67f:c.instructions+=3;goto B6dc67f;
case 0x6dc680:c.instructions+=2;goto B6dc680;
case 0x6dc681:c.instructions+=1;goto B6dc681;
case 0x6dc687:goto L6dc687;
case 0x6dc689:c.instructions+=2;goto B6dc689;
case 0x6dc68c:c.instructions+=1;goto B6dc68c;
case 0x6dc693:goto L6dc693;
case 0x6dc695:c.instructions+=5;goto B6dc695;
case 0x6dc698:c.instructions+=4;goto B6dc698;
case 0x6dc69a:c.instructions+=3;goto B6dc69a;
case 0x6dc69d:c.instructions+=2;goto B6dc69d;
case 0x6dc69f:c.instructions+=1;goto B6dc69f;
case 0x6dc6a1:goto L6dc6a1;
case 0x6dc6a5:c.instructions+=2;goto B6dc6a5;
case 0x6dc6ac:c.instructions+=1;goto B6dc6ac;
case 0x6dc6ae:goto L6dc6ae;
case 0x6dc6b9:goto L6dc6b9;
case 0x6dc6bf:c.instructions+=4;goto B6dc6bf;
case 0x6dc6c0:c.instructions+=3;goto B6dc6c0;
case 0x6dc6c2:c.instructions+=2;goto B6dc6c2;
case 0x6dc6c4:c.instructions+=1;goto B6dc6c4;
case 0x6dc6c6:goto L6dc6c6;
case 0x6dc6c8:c.instructions+=2;goto B6dc6c8;
case 0x6dc6cd:c.instructions+=1;goto B6dc6cd;
case 0x6dc6d0:goto L6dc6d0;
case 0x6dc6d3:c.instructions+=1;goto B6dc6d3;
case 0x6dc6d5:goto L6dc6d5;
case 0x6dc6d6:c.instructions+=2;goto B6dc6d6;
case 0x6dc6d8:c.instructions+=1;goto B6dc6d8;
case 0x6dc6da:goto L6dc6da;
case 0x6dc6df:c.instructions+=5;goto B6dc6df;
case 0x6dc6e0:c.instructions+=4;goto B6dc6e0;
case 0x6dc6e1:c.instructions+=3;goto B6dc6e1;
case 0x6dc6e6:c.instructions+=2;goto B6dc6e6;
case 0x6dc6e7:c.instructions+=1;goto B6dc6e7;
case 0x6dc6e8:goto L6dc6e8;
case 0x6dc6ea:c.instructions+=1;goto B6dc6ea;
case 0x6dc6ec:goto L6dc6ec;
case 0x6dc6ee:c.instructions+=2;goto B6dc6ee;
case 0x6dc6f0:c.instructions+=1;goto B6dc6f0;
case 0x6dc6f2:goto L6dc6f2;
case 0x6dc6f8:c.instructions+=2;goto B6dc6f8;
case 0x6dc6fd:c.instructions+=1;goto B6dc6fd;
case 0x6dc704:goto L6dc704;
case 0x6dc709:c.instructions+=3;goto B6dc709;
case 0x6dc70a:c.instructions+=2;goto B6dc70a;
case 0x6dc70b:c.instructions+=1;goto B6dc70b;
case 0x6dc710:goto L6dc710;
case 0x6dc711:c.instructions+=1;goto B6dc711;
case 0x6dc720:goto L6dc720;
case 0x6dc721:c.instructions+=3;goto B6dc721;
case 0x6dc725:c.instructions+=2;goto B6dc725;
case 0x6dc727:c.instructions+=1;goto B6dc727;
case 0x6dc729:goto L6dc729;
case 0x6dc72d:goto L6dc72d;
case 0x6dc72f:c.instructions+=2;goto B6dc72f;
case 0x6dc731:c.instructions+=1;goto B6dc731;
case 0x6dc737:goto L6dc737;
case 0x6dc73a:c.instructions+=2;goto B6dc73a;
case 0x6dc73c:c.instructions+=1;goto B6dc73c;
case 0x6dc73e:goto L6dc73e;
case 0x6dc742:c.instructions+=11;goto B6dc742;
case 0x6dc746:c.instructions+=10;goto B6dc746;
case 0x6dc748:c.instructions+=9;goto B6dc748;
case 0x6dc749:c.instructions+=8;goto B6dc749;
case 0x6dc74d:c.instructions+=7;goto B6dc74d;
case 0x6dc74e:c.instructions+=6;goto B6dc74e;
case 0x6dc752:c.instructions+=5;goto B6dc752;
case 0x6dc753:c.instructions+=4;goto B6dc753;
case 0x6dc754:c.instructions+=3;goto B6dc754;
case 0x6dc755:c.instructions+=2;goto B6dc755;
case 0x6dc757:c.instructions+=1;goto B6dc757;
case 0x6dc75c:goto L6dc75c;
case 0x6dc75e:goto L6dc75e;
case 0x6dc760:goto L6dc760;
case 0x6dc766:c.instructions+=3;goto B6dc766;
case 0x6dc768:c.instructions+=2;goto B6dc768;
case 0x6dc76a:c.instructions+=1;goto B6dc76a;
case 0x6dc76c:goto L6dc76c;
case 0x6dc772:goto L6dc772;
case 0x6dc776:c.instructions+=1;goto B6dc776;
case 0x6dc778:goto L6dc778;
case 0x6dc779:c.instructions+=2;goto B6dc779;
case 0x6dc77b:c.instructions+=1;goto B6dc77b;
case 0x6dc77d:goto L6dc77d;
case 0x6dc784:c.instructions+=2;goto B6dc784;
case 0x6dc785:c.instructions+=1;goto B6dc785;
case 0x6dc786:goto L6dc786;
case 0x6dc789:c.instructions+=1;goto B6dc789;
case 0x6dc78f:goto L6dc78f;
case 0x6dc796:c.instructions+=2;goto B6dc796;
case 0x6dc797:c.instructions+=1;goto B6dc797;
case 0x6dc7a0:goto L6dc7a0;
case 0x6dc7a4:c.instructions+=8;goto B6dc7a4;
case 0x6dc7a5:c.instructions+=7;goto B6dc7a5;
case 0x6dc7a7:c.instructions+=6;goto B6dc7a7;
case 0x6dc7aa:c.instructions+=5;goto B6dc7aa;
case 0x6dc7ae:c.instructions+=4;goto B6dc7ae;
case 0x6dc7b0:c.instructions+=3;goto B6dc7b0;
case 0x6dc7b7:c.instructions+=2;goto B6dc7b7;
case 0x6dc7be:c.instructions+=1;goto B6dc7be;
case 0x6dc7c0:goto L6dc7c0;
case 0x6dc7c5:goto L6dc7c5;
case 0x6dc7c7:c.instructions+=1;goto B6dc7c7;
case 0x6dc7c9:goto L6dc7c9;
case 0x6dc7cd:c.instructions+=1;goto B6dc7cd;
case 0x6dc7d0:goto L6dc7d0;
case 0x6dc7d1:c.instructions+=10;goto B6dc7d1;
case 0x6dc7d3:c.instructions+=9;goto B6dc7d3;
case 0x6dc7d5:c.instructions+=8;goto B6dc7d5;
case 0x6dc7d6:c.instructions+=7;goto B6dc7d6;
case 0x6dc7d9:c.instructions+=6;goto B6dc7d9;
case 0x6dc7dc:c.instructions+=5;goto B6dc7dc;
case 0x6dc7e2:c.instructions+=4;goto B6dc7e2;
case 0x6dc7e4:c.instructions+=3;goto B6dc7e4;
case 0x6dc7e5:c.instructions+=2;goto B6dc7e5;
case 0x6dc7e6:c.instructions+=1;goto B6dc7e6;
case 0x6dc7e9:goto L6dc7e9;
case 0x6dc7eb:c.instructions+=2;goto B6dc7eb;
case 0x6dc7ec:c.instructions+=1;goto B6dc7ec;
case 0x6dc7ef:goto L6dc7ef;
case 0x6dc7f4:goto L6dc7f4;
case 0x6dc7f6:c.instructions+=1;goto B6dc7f6;
case 0x6dc7f8:goto L6dc7f8;
case 0x6dc7fc:c.instructions+=1;goto B6dc7fc;
case 0x6dc800:goto L6dc800;
case 0x6dc801:c.instructions+=5;goto B6dc801;
case 0x6dc802:c.instructions+=4;goto B6dc802;
case 0x6dc808:c.instructions+=3;goto B6dc808;
case 0x6dc80a:c.instructions+=2;goto B6dc80a;
case 0x6dc80c:c.instructions+=1;goto B6dc80c;
case 0x6dc80e:goto L6dc80e;
case 0x6dc80f:c.instructions+=1;goto B6dc80f;
case 0x6dc810:goto L6dc810;
case 0x6dc813:c.instructions+=2;goto B6dc813;
case 0x6dc815:c.instructions+=1;goto B6dc815;
case 0x6dc817:goto L6dc817;
case 0x6dc81a:c.instructions+=2;goto B6dc81a;
case 0x6dc81d:c.instructions+=1;goto B6dc81d;
case 0x6dc81f:goto L6dc81f;
case 0x6dc822:c.instructions+=5;goto B6dc822;
case 0x6dc825:c.instructions+=4;goto B6dc825;
case 0x6dc827:c.instructions+=3;goto B6dc827;
case 0x6dc829:c.instructions+=2;goto B6dc829;
case 0x6dc82b:c.instructions+=1;goto B6dc82b;
case 0x6dc82d:goto L6dc82d;
case 0x6dc82f:c.instructions+=1;goto B6dc82f;
case 0x6dc830:goto L6dc830;
case 0x6dc833:c.instructions+=1;goto B6dc833;
case 0x6dc835:goto L6dc835;
case 0x6dc837:c.instructions+=1;goto B6dc837;
case 0x6dc839:goto L6dc839;
case 0x6dc83c:c.instructions+=4;goto B6dc83c;
case 0x6dc840:c.instructions+=3;goto B6dc840;
case 0x6dc843:c.instructions+=2;goto B6dc843;
case 0x6dc845:c.instructions+=1;goto B6dc845;
case 0x6dc847:goto L6dc847;
case 0x6dc84a:c.instructions+=2;goto B6dc84a;
case 0x6dc84c:c.instructions+=1;goto B6dc84c;
case 0x6dc84e:goto L6dc84e;
case 0x6dc850:goto L6dc850;
case 0x6dc853:c.instructions+=4;goto B6dc853;
case 0x6dc856:c.instructions+=3;goto B6dc856;
case 0x6dc858:c.instructions+=2;goto B6dc858;
case 0x6dc85a:c.instructions+=1;goto B6dc85a;
case 0x6dc85c:goto L6dc85c;
case 0x6dc85e:c.instructions+=1;goto B6dc85e;
case 0x6dc860:goto L6dc860;
case 0x6dc862:c.instructions+=2;goto B6dc862;
case 0x6dc865:c.instructions+=1;goto B6dc865;
case 0x6dc867:goto L6dc867;
case 0x6dc868:c.instructions+=3;goto B6dc868;
case 0x6dc86b:c.instructions+=2;goto B6dc86b;
case 0x6dc86d:c.instructions+=1;goto B6dc86d;
case 0x6dc86f:goto L6dc86f;
case 0x6dc871:c.instructions+=5;goto B6dc871;
case 0x6dc873:c.instructions+=4;goto B6dc873;
case 0x6dc876:c.instructions+=3;goto B6dc876;
case 0x6dc878:c.instructions+=2;goto B6dc878;
case 0x6dc87b:c.instructions+=1;goto B6dc87b;
case 0x6dc87d:goto L6dc87d;
case 0x6dc87f:goto L6dc87f;
case 0x6dc880:c.instructions+=1;goto B6dc880;
case 0x6dc881:goto L6dc881;
case 0x6dc884:c.instructions+=1;goto B6dc884;
case 0x6dc886:goto L6dc886;
case 0x6dc88b:goto L6dc88b;
case 0x6dc88d:c.instructions+=1;goto B6dc88d;
case 0x6dc88f:goto L6dc88f;
case 0x6dc891:c.instructions+=1;goto B6dc891;
case 0x6dc896:goto L6dc896;
case 0x6dc899:c.instructions+=2;goto B6dc899;
case 0x6dc89b:c.instructions+=1;goto B6dc89b;
case 0x6dc89d:goto L6dc89d;
case 0x6dc89f:c.instructions+=1;goto B6dc89f;
case 0x6dc8a4:goto L6dc8a4;
case 0x6dc8a7:c.instructions+=1;goto B6dc8a7;
case 0x6dc8a9:goto L6dc8a9;
case 0x6dc8ac:c.instructions+=8;goto B6dc8ac;
case 0x6dc8b1:c.instructions+=7;goto B6dc8b1;
case 0x6dc8b3:c.instructions+=6;goto B6dc8b3;
case 0x6dc8b4:c.instructions+=5;goto B6dc8b4;
case 0x6dc8b5:c.instructions+=4;goto B6dc8b5;
case 0x6dc8b8:c.instructions+=3;goto B6dc8b8;
case 0x6dc8b9:c.instructions+=2;goto B6dc8b9;
case 0x6dc8ba:c.instructions+=1;goto B6dc8ba;
case 0x6dc8c0:goto L6dc8c0;
case 0x6dc8c2:c.instructions+=1;goto B6dc8c2;
case 0x6dc8c7:goto L6dc8c7;
case 0x6dc8ca:c.instructions+=2;goto B6dc8ca;
case 0x6dc8cd:c.instructions+=1;goto B6dc8cd;
case 0x6dc8d3:goto L6dc8d3;
case 0x6dc8d4:c.instructions+=2;goto B6dc8d4;
case 0x6dc8d5:c.instructions+=1;goto B6dc8d5;
case 0x6dc8e0:goto L6dc8e0;
case 0x6dc8e1:c.instructions+=8;goto B6dc8e1;
case 0x6dc8e2:c.instructions+=7;goto B6dc8e2;
case 0x6dc8e4:c.instructions+=6;goto B6dc8e4;
case 0x6dc8e7:c.instructions+=5;goto B6dc8e7;
case 0x6dc8e9:c.instructions+=4;goto B6dc8e9;
case 0x6dc8eb:c.instructions+=3;goto B6dc8eb;
case 0x6dc8ee:c.instructions+=2;goto B6dc8ee;
case 0x6dc8f1:c.instructions+=1;goto B6dc8f1;
case 0x6dc8f3:goto L6dc8f3;
case 0x6dc8f6:c.instructions+=4;goto B6dc8f6;
case 0x6dc8f8:c.instructions+=3;goto B6dc8f8;
case 0x6dc8fb:c.instructions+=2;goto B6dc8fb;
case 0x6dc8fd:c.instructions+=1;goto B6dc8fd;
case 0x6dc8ff:goto L6dc8ff;
case 0x6dc902:c.instructions+=1;goto B6dc902;
case 0x6dc904:goto L6dc904;
case 0x6dc906:c.instructions+=5;goto B6dc906;
case 0x6dc90b:c.instructions+=4;goto B6dc90b;
case 0x6dc90d:c.instructions+=3;goto B6dc90d;
case 0x6dc90e:c.instructions+=2;goto B6dc90e;
case 0x6dc90f:c.instructions+=1;goto B6dc90f;
case 0x6dc915:goto L6dc915;
case 0x6dc918:c.instructions+=2;goto B6dc918;
case 0x6dc919:c.instructions+=1;goto B6dc919;
case 0x6dc91e:goto L6dc91e;
case 0x6dc921:goto L6dc921;
case 0x6dc923:c.instructions+=1;goto B6dc923;
case 0x6dc926:goto L6dc926;
case 0x6dc929:c.instructions+=2;goto B6dc929;
case 0x6dc92b:c.instructions+=1;goto B6dc92b;
case 0x6dc92d:goto L6dc92d;
case 0x6dc930:c.instructions+=1;goto B6dc930;
case 0x6dc933:goto L6dc933;
case 0x6dc936:c.instructions+=2;goto B6dc936;
case 0x6dc938:c.instructions+=1;goto B6dc938;
case 0x6dc93a:goto L6dc93a;
case 0x6dc93d:c.instructions+=1;goto B6dc93d;
case 0x6dc940:goto L6dc940;
case 0x6dc946:c.instructions+=1;goto B6dc946;
case 0x6dc948:goto L6dc948;
case 0x6dc94b:c.instructions+=1;goto B6dc94b;
case 0x6dc950:goto L6dc950;
case 0x6dc953:c.instructions+=4;goto B6dc953;
case 0x6dc956:c.instructions+=3;goto B6dc956;
case 0x6dc957:c.instructions+=2;goto B6dc957;
case 0x6dc958:c.instructions+=1;goto B6dc958;
case 0x6dc960:goto L6dc960;
case 0x6dc961:c.instructions+=8;goto B6dc961;
case 0x6dc963:c.instructions+=7;goto B6dc963;
case 0x6dc966:c.instructions+=6;goto B6dc966;
case 0x6dc967:c.instructions+=5;goto B6dc967;
case 0x6dc969:c.instructions+=4;goto B6dc969;
case 0x6dc96a:c.instructions+=3;goto B6dc96a;
case 0x6dc96d:c.instructions+=2;goto B6dc96d;
case 0x6dc970:c.instructions+=1;goto B6dc970;
case 0x6dc972:goto L6dc972;
case 0x6dc974:c.instructions+=2;goto B6dc974;
case 0x6dc976:c.instructions+=1;goto B6dc976;
case 0x6dc978:goto L6dc978;
case 0x6dc97e:c.instructions+=4;goto B6dc97e;
case 0x6dc980:c.instructions+=3;goto B6dc980;
case 0x6dc981:c.instructions+=2;goto B6dc981;
case 0x6dc982:c.instructions+=1;goto B6dc982;
case 0x6dc988:goto L6dc988;
case 0x6dc98b:c.instructions+=2;goto B6dc98b;
case 0x6dc98d:c.instructions+=1;goto B6dc98d;
case 0x6dc98f:goto L6dc98f;
case 0x6dc992:c.instructions+=1;goto B6dc992;
case 0x6dc995:goto L6dc995;
case 0x6dc998:c.instructions+=2;goto B6dc998;
case 0x6dc99a:c.instructions+=1;goto B6dc99a;
case 0x6dc99c:goto L6dc99c;
case 0x6dc99f:c.instructions+=1;goto B6dc99f;
case 0x6dc9a2:goto L6dc9a2;
case 0x6dc9a8:c.instructions+=1;goto B6dc9a8;
case 0x6dc9aa:goto L6dc9aa;
case 0x6dc9ad:c.instructions+=1;goto B6dc9ad;
case 0x6dc9b2:goto L6dc9b2;
case 0x6dc9b5:c.instructions+=4;goto B6dc9b5;
case 0x6dc9b8:c.instructions+=3;goto B6dc9b8;
case 0x6dc9b9:c.instructions+=2;goto B6dc9b9;
case 0x6dc9ba:c.instructions+=1;goto B6dc9ba;
case 0x6dc9c0:goto L6dc9c0;
case 0x6dc9c5:c.instructions+=5;goto B6dc9c5;
case 0x6dc9c6:c.instructions+=4;goto B6dc9c6;
case 0x6dc9c8:c.instructions+=3;goto B6dc9c8;
case 0x6dc9ca:c.instructions+=2;goto B6dc9ca;
case 0x6dc9cb:c.instructions+=1;goto B6dc9cb;
case 0x6dc9cd:goto L6dc9cd;
case 0x6dc9d0:goto L6dc9d0;
case 0x6dc9d5:c.instructions+=3;goto B6dc9d5;
case 0x6dc9d8:c.instructions+=2;goto B6dc9d8;
case 0x6dc9da:c.instructions+=1;goto B6dc9da;
case 0x6dc9dc:goto L6dc9dc;
case 0x6dc9de:c.instructions+=1;goto B6dc9de;
case 0x6dc9e1:goto L6dc9e1;
case 0x6dc9e6:c.instructions+=3;goto B6dc9e6;
case 0x6dc9e7:c.instructions+=2;goto B6dc9e7;
case 0x6dc9e9:c.instructions+=1;goto B6dc9e9;
case 0x6dc9eb:goto L6dc9eb;
case 0x6dc9f0:c.instructions+=3;goto B6dc9f0;
case 0x6dc9f2:c.instructions+=2;goto B6dc9f2;
case 0x6dc9f4:c.instructions+=1;goto B6dc9f4;
case 0x6dc9f6:goto L6dc9f6;
case 0x6dc9fb:c.instructions+=3;goto B6dc9fb;
case 0x6dc9fe:c.instructions+=2;goto B6dc9fe;
case 0x6dca00:c.instructions+=1;goto B6dca00;
case 0x6dca02:goto L6dca02;
case 0x6dca04:c.instructions+=2;goto B6dca04;
case 0x6dca06:c.instructions+=1;goto B6dca06;
case 0x6dca08:goto L6dca08;
case 0x6dca0a:c.instructions+=2;goto B6dca0a;
case 0x6dca0b:c.instructions+=1;goto B6dca0b;
case 0x6dca0e:goto L6dca0e;
case 0x6dca14:goto L6dca14;
case 0x6dca19:c.instructions+=3;goto B6dca19;
case 0x6dca1a:c.instructions+=2;goto B6dca1a;
case 0x6dca1c:c.instructions+=1;goto B6dca1c;
case 0x6dca1e:goto L6dca1e;
case 0x6dca1f:c.instructions+=2;goto B6dca1f;
case 0x6dca20:c.instructions+=1;goto B6dca20;
case 0x6dca30:goto L6dca30;
case 0x6dca31:c.instructions+=6;goto B6dca31;
case 0x6dca36:c.instructions+=5;goto B6dca36;
case 0x6dca37:c.instructions+=4;goto B6dca37;
case 0x6dca39:c.instructions+=3;goto B6dca39;
case 0x6dca3b:c.instructions+=2;goto B6dca3b;
case 0x6dca3c:c.instructions+=1;goto B6dca3c;
case 0x6dca3e:goto L6dca3e;
case 0x6dca40:goto L6dca40;
case 0x6dca45:c.instructions+=3;goto B6dca45;
case 0x6dca48:c.instructions+=2;goto B6dca48;
case 0x6dca4a:c.instructions+=1;goto B6dca4a;
case 0x6dca4c:goto L6dca4c;
case 0x6dca4e:c.instructions+=1;goto B6dca4e;
case 0x6dca51:goto L6dca51;
case 0x6dca56:c.instructions+=3;goto B6dca56;
case 0x6dca57:c.instructions+=2;goto B6dca57;
case 0x6dca59:c.instructions+=1;goto B6dca59;
case 0x6dca5b:goto L6dca5b;
case 0x6dca60:c.instructions+=3;goto B6dca60;
case 0x6dca62:c.instructions+=2;goto B6dca62;
case 0x6dca64:c.instructions+=1;goto B6dca64;
case 0x6dca66:goto L6dca66;
case 0x6dca6b:c.instructions+=3;goto B6dca6b;
case 0x6dca6e:c.instructions+=2;goto B6dca6e;
case 0x6dca70:c.instructions+=1;goto B6dca70;
case 0x6dca72:goto L6dca72;
case 0x6dca77:goto L6dca77;
case 0x6dca79:c.instructions+=1;goto B6dca79;
case 0x6dca7b:goto L6dca7b;
case 0x6dca80:goto L6dca80;
case 0x6dca83:c.instructions+=10;goto B6dca83;
case 0x6dca88:c.instructions+=9;goto B6dca88;
case 0x6dca8a:c.instructions+=8;goto B6dca8a;
case 0x6dca8b:c.instructions+=7;goto B6dca8b;
case 0x6dca8d:c.instructions+=6;goto B6dca8d;
case 0x6dca8f:c.instructions+=5;goto B6dca8f;
case 0x6dca90:c.instructions+=4;goto B6dca90;
case 0x6dca93:c.instructions+=3;goto B6dca93;
case 0x6dca94:c.instructions+=2;goto B6dca94;
case 0x6dca95:c.instructions+=1;goto B6dca95;
case 0x6dca98:goto L6dca98;
case 0x6dca9b:c.instructions+=2;goto B6dca9b;
case 0x6dca9d:c.instructions+=1;goto B6dca9d;
case 0x6dca9f:goto L6dca9f;
case 0x6dcaa1:c.instructions+=9;goto B6dcaa1;
case 0x6dcaa3:c.instructions+=8;goto B6dcaa3;
case 0x6dcaa5:c.instructions+=7;goto B6dcaa5;
case 0x6dcaa9:c.instructions+=6;goto B6dcaa9;
case 0x6dcaaa:c.instructions+=5;goto B6dcaaa;
case 0x6dcaad:c.instructions+=4;goto B6dcaad;
case 0x6dcaae:c.instructions+=3;goto B6dcaae;
case 0x6dcab0:c.instructions+=2;goto B6dcab0;
case 0x6dcab1:c.instructions+=1;goto B6dcab1;
case 0x6dcab4:goto L6dcab4;
case 0x6dcab7:c.instructions+=6;goto B6dcab7;
case 0x6dcaba:c.instructions+=5;goto B6dcaba;
case 0x6dcabe:c.instructions+=4;goto B6dcabe;
case 0x6dcabf:c.instructions+=3;goto B6dcabf;
case 0x6dcac0:c.instructions+=2;goto B6dcac0;
case 0x6dcac1:c.instructions+=1;goto B6dcac1;
case 0x6dcac6:goto L6dcac6;
case 0x6dcac8:c.instructions+=4;goto B6dcac8;
case 0x6dcaca:c.instructions+=3;goto B6dcaca;
case 0x6dcacd:c.instructions+=2;goto B6dcacd;
case 0x6dcace:c.instructions+=1;goto B6dcace;
case 0x6dcad1:goto L6dcad1;
case 0x6dcad6:c.instructions+=3;goto B6dcad6;
case 0x6dcad7:c.instructions+=2;goto B6dcad7;
case 0x6dcad9:c.instructions+=1;goto B6dcad9;
case 0x6dcadb:goto L6dcadb;
case 0x6dcadc:c.instructions+=3;goto B6dcadc;
case 0x6dcadd:c.instructions+=2;goto B6dcadd;
case 0x6dcade:c.instructions+=1;goto B6dcade;
case 0x6dcae0:goto L6dcae0;
case 0x6dcae1:c.instructions+=3;goto B6dcae1;
case 0x6dcae7:c.instructions+=2;goto B6dcae7;
case 0x6dcae9:c.instructions+=1;goto B6dcae9;
case 0x6dcaeb:goto L6dcaeb;
case 0x6dcaf0:goto L6dcaf0;
case 0x6dcaf3:c.instructions+=2;goto B6dcaf3;
case 0x6dcaf5:c.instructions+=1;goto B6dcaf5;
case 0x6dcaf7:goto L6dcaf7;
case 0x6dcafa:c.instructions+=4;goto B6dcafa;
case 0x6dcafc:c.instructions+=3;goto B6dcafc;
case 0x6dcaff:c.instructions+=2;goto B6dcaff;
case 0x6dcb02:c.instructions+=1;goto B6dcb02;
case 0x6dcb04:goto L6dcb04;
case 0x6dcb07:c.instructions+=2;goto B6dcb07;
case 0x6dcb09:c.instructions+=1;goto B6dcb09;
case 0x6dcb0b:goto L6dcb0b;
case 0x6dcb0d:c.instructions+=5;goto B6dcb0d;
case 0x6dcb12:c.instructions+=4;goto B6dcb12;
case 0x6dcb14:c.instructions+=3;goto B6dcb14;
case 0x6dcb15:c.instructions+=2;goto B6dcb15;
case 0x6dcb16:c.instructions+=1;goto B6dcb16;
case 0x6dcb1c:goto L6dcb1c;
case 0x6dcb1f:c.instructions+=2;goto B6dcb1f;
case 0x6dcb20:c.instructions+=1;goto B6dcb20;
case 0x6dcb25:goto L6dcb25;
case 0x6dcb28:goto L6dcb28;
case 0x6dcb2e:c.instructions+=1;goto B6dcb2e;
case 0x6dcb35:goto L6dcb35;
case 0x6dcb38:c.instructions+=2;goto B6dcb38;
case 0x6dcb3a:c.instructions+=1;goto B6dcb3a;
case 0x6dcb3c:goto L6dcb3c;
case 0x6dcb3d:c.instructions+=1;goto B6dcb3d;
case 0x6dcb40:goto L6dcb40;
case 0x6dcb41:c.instructions+=3;goto B6dcb41;
case 0x6dcb47:c.instructions+=2;goto B6dcb47;
case 0x6dcb49:c.instructions+=1;goto B6dcb49;
case 0x6dcb4b:goto L6dcb4b;
case 0x6dcb50:goto L6dcb50;
case 0x6dcb53:c.instructions+=2;goto B6dcb53;
case 0x6dcb55:c.instructions+=1;goto B6dcb55;
case 0x6dcb57:goto L6dcb57;
case 0x6dcb5a:c.instructions+=2;goto B6dcb5a;
case 0x6dcb5c:c.instructions+=1;goto B6dcb5c;
case 0x6dcb5e:goto L6dcb5e;
case 0x6dcb61:c.instructions+=2;goto B6dcb61;
case 0x6dcb63:c.instructions+=1;goto B6dcb63;
case 0x6dcb65:goto L6dcb65;
case 0x6dcb67:c.instructions+=1;goto B6dcb67;
case 0x6dcb6c:goto L6dcb6c;
case 0x6dcb6f:c.instructions+=2;goto B6dcb6f;
case 0x6dcb71:c.instructions+=1;goto B6dcb71;
case 0x6dcb73:goto L6dcb73;
case 0x6dcb74:c.instructions+=1;goto B6dcb74;
case 0x6dcb80:goto L6dcb80;
case 0x6dcb81:c.instructions+=3;goto B6dcb81;
case 0x6dcb87:c.instructions+=2;goto B6dcb87;
case 0x6dcb89:c.instructions+=1;goto B6dcb89;
case 0x6dcb8b:goto L6dcb8b;
case 0x6dcb90:goto L6dcb90;
case 0x6dcb93:c.instructions+=1;goto B6dcb93;
case 0x6dcb95:goto L6dcb95;
case 0x6dcb97:c.instructions+=2;goto B6dcb97;
case 0x6dcb99:c.instructions+=1;goto B6dcb99;
case 0x6dcb9b:goto L6dcb9b;
case 0x6dcba1:c.instructions+=4;goto B6dcba1;
case 0x6dcba3:c.instructions+=3;goto B6dcba3;
case 0x6dcba4:c.instructions+=2;goto B6dcba4;
case 0x6dcba5:c.instructions+=1;goto B6dcba5;
case 0x6dcbab:goto L6dcbab;
case 0x6dcbae:c.instructions+=2;goto B6dcbae;
case 0x6dcbb0:c.instructions+=1;goto B6dcbb0;
case 0x6dcbb2:goto L6dcbb2;
case 0x6dcbb3:c.instructions+=1;goto B6dcbb3;
case 0x6dcbc0:goto L6dcbc0;
case 0x6dcbc1:c.instructions+=3;goto B6dcbc1;
case 0x6dcbc7:c.instructions+=2;goto B6dcbc7;
case 0x6dcbc9:c.instructions+=1;goto B6dcbc9;
case 0x6dcbcb:goto L6dcbcb;
case 0x6dcbd0:goto L6dcbd0;
case 0x6dcbd3:c.instructions+=2;goto B6dcbd3;
case 0x6dcbd5:c.instructions+=1;goto B6dcbd5;
case 0x6dcbd7:goto L6dcbd7;
case 0x6dcbdd:c.instructions+=5;goto B6dcbdd;
case 0x6dcbdf:c.instructions+=4;goto B6dcbdf;
case 0x6dcbe0:c.instructions+=3;goto B6dcbe0;
case 0x6dcbe1:c.instructions+=2;goto B6dcbe1;
case 0x6dcbe2:c.instructions+=1;goto B6dcbe2;
case 0x6dcbe8:goto L6dcbe8;
case 0x6dcbeb:c.instructions+=3;goto B6dcbeb;
case 0x6dcbee:c.instructions+=2;goto B6dcbee;
case 0x6dcbf0:c.instructions+=1;goto B6dcbf0;
case 0x6dcbf2:goto L6dcbf2;
case 0x6dcbf3:c.instructions+=1;goto B6dcbf3;
case 0x6dcc00:goto L6dcc00;
case 0x6dcc03:c.instructions+=5;goto B6dcc03;
case 0x6dcc04:c.instructions+=4;goto B6dcc04;
case 0x6dcc06:c.instructions+=3;goto B6dcc06;
case 0x6dcc09:c.instructions+=2;goto B6dcc09;
case 0x6dcc0b:c.instructions+=1;goto B6dcc0b;
case 0x6dcc0d:goto L6dcc0d;
case 0x6dcc10:c.instructions+=3;goto B6dcc10;
case 0x6dcc13:c.instructions+=2;goto B6dcc13;
case 0x6dcc15:c.instructions+=1;goto B6dcc15;
case 0x6dcc17:goto L6dcc17;
case 0x6dcc1a:c.instructions+=9;goto B6dcc1a;
case 0x6dcc1c:c.instructions+=8;goto B6dcc1c;
case 0x6dcc1e:c.instructions+=7;goto B6dcc1e;
case 0x6dcc22:c.instructions+=6;goto B6dcc22;
case 0x6dcc23:c.instructions+=5;goto B6dcc23;
case 0x6dcc26:c.instructions+=4;goto B6dcc26;
case 0x6dcc27:c.instructions+=3;goto B6dcc27;
case 0x6dcc29:c.instructions+=2;goto B6dcc29;
case 0x6dcc2a:c.instructions+=1;goto B6dcc2a;
case 0x6dcc2d:goto L6dcc2d;
case 0x6dcc30:c.instructions+=6;goto B6dcc30;
case 0x6dcc33:c.instructions+=5;goto B6dcc33;
case 0x6dcc37:c.instructions+=4;goto B6dcc37;
case 0x6dcc38:c.instructions+=3;goto B6dcc38;
case 0x6dcc39:c.instructions+=2;goto B6dcc39;
case 0x6dcc3a:c.instructions+=1;goto B6dcc3a;
case 0x6dcc3f:goto L6dcc3f;
case 0x6dcc42:c.instructions+=4;goto B6dcc42;
case 0x6dcc44:c.instructions+=3;goto B6dcc44;
case 0x6dcc47:c.instructions+=2;goto B6dcc47;
case 0x6dcc48:c.instructions+=1;goto B6dcc48;
case 0x6dcc4b:goto L6dcc4b;
case 0x6dcc4e:c.instructions+=2;goto B6dcc4e;
case 0x6dcc52:c.instructions+=1;goto B6dcc52;
case 0x6dcc57:goto L6dcc57;
case 0x6dcc5b:c.instructions+=9;goto B6dcc5b;
case 0x6dcc5e:c.instructions+=8;goto B6dcc5e;
case 0x6dcc60:c.instructions+=7;goto B6dcc60;
case 0x6dcc62:c.instructions+=6;goto B6dcc62;
case 0x6dcc63:c.instructions+=5;goto B6dcc63;
case 0x6dcc66:c.instructions+=4;goto B6dcc66;
case 0x6dcc67:c.instructions+=3;goto B6dcc67;
case 0x6dcc69:c.instructions+=2;goto B6dcc69;
case 0x6dcc6a:c.instructions+=1;goto B6dcc6a;
case 0x6dcc6d:goto L6dcc6d;
case 0x6dcc6f:c.instructions+=3;goto B6dcc6f;
case 0x6dcc70:c.instructions+=2;goto B6dcc70;
case 0x6dcc73:c.instructions+=1;goto B6dcc73;
case 0x6dcc76:goto L6dcc76;
case 0x6dcc7b:c.instructions+=7;goto B6dcc7b;
case 0x6dcc7c:c.instructions+=6;goto B6dcc7c;
case 0x6dcc7d:c.instructions+=5;goto B6dcc7d;
case 0x6dcc7e:c.instructions+=4;goto B6dcc7e;
case 0x6dcc81:c.instructions+=3;goto B6dcc81;
case 0x6dcc82:c.instructions+=2;goto B6dcc82;
case 0x6dcc85:c.instructions+=1;goto B6dcc85;
case 0x6dcc87:goto L6dcc87;
case 0x6dcc8d:goto L6dcc8d;
case 0x6dcc90:c.instructions+=5;goto B6dcc90;
case 0x6dcc96:c.instructions+=4;goto B6dcc96;
case 0x6dcc99:c.instructions+=3;goto B6dcc99;
case 0x6dcc9b:c.instructions+=2;goto B6dcc9b;
case 0x6dcc9d:c.instructions+=1;goto B6dcc9d;
case 0x6dcc9f:goto L6dcc9f;
case 0x6dcca1:c.instructions+=3;goto B6dcca1;
case 0x6dcca4:c.instructions+=2;goto B6dcca4;
case 0x6dcca6:c.instructions+=1;goto B6dcca6;
case 0x6dcca9:goto L6dcca9;
case 0x6dccac:c.instructions+=6;goto B6dccac;
case 0x6dccaf:c.instructions+=5;goto B6dccaf;
case 0x6dccb2:c.instructions+=4;goto B6dccb2;
case 0x6dccb6:c.instructions+=3;goto B6dccb6;
case 0x6dccb9:c.instructions+=2;goto B6dccb9;
case 0x6dccbd:c.instructions+=1;goto B6dccbd;
case 0x6dccbf:goto L6dccbf;
case 0x6dccc3:c.instructions+=3;goto B6dccc3;
case 0x6dccc4:c.instructions+=2;goto B6dccc4;
case 0x6dccc6:c.instructions+=1;goto B6dccc6;
case 0x6dcccb:goto L6dcccb;
case 0x6dcccf:c.instructions+=6;goto B6dcccf;
case 0x6dccd1:c.instructions+=5;goto B6dccd1;
case 0x6dccd5:c.instructions+=4;goto B6dccd5;
case 0x6dccd8:c.instructions+=3;goto B6dccd8;
case 0x6dccd9:c.instructions+=2;goto B6dccd9;
case 0x6dccdd:c.instructions+=1;goto B6dccdd;
case 0x6dcce0:goto L6dcce0;
case 0x6dcce3:c.instructions+=2;goto B6dcce3;
case 0x6dcce5:c.instructions+=1;goto B6dcce5;
case 0x6dcce7:goto L6dcce7;
case 0x6dccea:c.instructions+=3;goto B6dccea;
case 0x6dcced:c.instructions+=2;goto B6dcced;
case 0x6dccf0:c.instructions+=1;goto B6dccf0;
case 0x6dccf2:goto L6dccf2;
case 0x6dccf5:c.instructions+=9;goto B6dccf5;
case 0x6dccf7:c.instructions+=8;goto B6dccf7;
case 0x6dccf9:c.instructions+=7;goto B6dccf9;
case 0x6dccfd:c.instructions+=6;goto B6dccfd;
case 0x6dccfe:c.instructions+=5;goto B6dccfe;
case 0x6dcd01:c.instructions+=4;goto B6dcd01;
case 0x6dcd02:c.instructions+=3;goto B6dcd02;
case 0x6dcd03:c.instructions+=2;goto B6dcd03;
case 0x6dcd04:c.instructions+=1;goto B6dcd04;
case 0x6dcd07:goto L6dcd07;
case 0x6dcd0a:c.instructions+=6;goto B6dcd0a;
case 0x6dcd0e:c.instructions+=5;goto B6dcd0e;
case 0x6dcd12:c.instructions+=4;goto B6dcd12;
case 0x6dcd13:c.instructions+=3;goto B6dcd13;
case 0x6dcd14:c.instructions+=2;goto B6dcd14;
case 0x6dcd15:c.instructions+=1;goto B6dcd15;
case 0x6dcd1a:goto L6dcd1a;
case 0x6dcd1d:c.instructions+=4;goto B6dcd1d;
case 0x6dcd1f:c.instructions+=3;goto B6dcd1f;
case 0x6dcd22:c.instructions+=2;goto B6dcd22;
case 0x6dcd23:c.instructions+=1;goto B6dcd23;
case 0x6dcd26:goto L6dcd26;
case 0x6dcd29:c.instructions+=3;goto B6dcd29;
case 0x6dcd2c:c.instructions+=2;goto B6dcd2c;
case 0x6dcd2f:c.instructions+=1;goto B6dcd2f;
case 0x6dcd31:goto L6dcd31;
case 0x6dcd35:goto L6dcd35;
case 0x6dcd39:c.instructions+=1;goto B6dcd39;
case 0x6dcd3e:goto L6dcd3e;
case 0x6dcd41:c.instructions+=11;goto B6dcd41;
case 0x6dcd43:c.instructions+=10;goto B6dcd43;
case 0x6dcd45:c.instructions+=9;goto B6dcd45;
case 0x6dcd47:c.instructions+=8;goto B6dcd47;
case 0x6dcd4b:c.instructions+=7;goto B6dcd4b;
case 0x6dcd4d:c.instructions+=6;goto B6dcd4d;
case 0x6dcd50:c.instructions+=5;goto B6dcd50;
case 0x6dcd54:c.instructions+=4;goto B6dcd54;
case 0x6dcd56:c.instructions+=3;goto B6dcd56;
case 0x6dcd59:c.instructions+=2;goto B6dcd59;
case 0x6dcd5b:c.instructions+=1;goto B6dcd5b;
case 0x6dcd5d:goto L6dcd5d;
case 0x6dcd5f:c.instructions+=1;goto B6dcd5f;
case 0x6dcd61:goto L6dcd61;
case 0x6dcd66:goto L6dcd66;
case 0x6dcd67:c.instructions+=4;goto B6dcd67;
case 0x6dcd68:c.instructions+=3;goto B6dcd68;
case 0x6dcd69:c.instructions+=2;goto B6dcd69;
case 0x6dcd6a:c.instructions+=1;goto B6dcd6a;
case 0x6dcd6d:goto L6dcd6d;
case 0x6dcd70:c.instructions+=7;goto B6dcd70;
case 0x6dcd72:c.instructions+=6;goto B6dcd72;
case 0x6dcd73:c.instructions+=5;goto B6dcd73;
case 0x6dcd74:c.instructions+=4;goto B6dcd74;
case 0x6dcd75:c.instructions+=3;goto B6dcd75;
case 0x6dcd76:c.instructions+=2;goto B6dcd76;
case 0x6dcd79:c.instructions+=1;goto B6dcd79;
case 0x6dcd80:goto L6dcd80;
case 0x6dcd81:c.instructions+=5;goto B6dcd81;
case 0x6dcd83:c.instructions+=4;goto B6dcd83;
case 0x6dcd86:c.instructions+=3;goto B6dcd86;
case 0x6dcd88:c.instructions+=2;goto B6dcd88;
case 0x6dcd8e:c.instructions+=1;goto B6dcd8e;
case 0x6dcd90:goto L6dcd90;
case 0x6dcd92:c.instructions+=2;goto B6dcd92;
case 0x6dcd93:c.instructions+=1;goto B6dcd93;
case 0x6dcd96:goto L6dcd96;
case 0x6dcd9b:c.instructions+=3;goto B6dcd9b;
case 0x6dcda2:c.instructions+=2;goto B6dcda2;
case 0x6dcda9:c.instructions+=1;goto B6dcda9;
case 0x6dcdab:goto L6dcdab;
case 0x6dcdad:c.instructions+=2;goto B6dcdad;
case 0x6dcdae:c.instructions+=1;goto B6dcdae;
case 0x6dcdb4:goto L6dcdb4;
case 0x6dcdb7:goto L6dcdb7;
case 0x6dcdb9:c.instructions+=2;goto B6dcdb9;
case 0x6dcdba:c.instructions+=1;goto B6dcdba;
case 0x6dcdc0:goto L6dcdc0;
case 0x6dcdc4:c.instructions+=14;goto B6dcdc4;
case 0x6dcdc5:c.instructions+=13;goto B6dcdc5;
case 0x6dcdc6:c.instructions+=12;goto B6dcdc6;
case 0x6dcdc7:c.instructions+=11;goto B6dcdc7;
case 0x6dcdcb:c.instructions+=10;goto B6dcdcb;
case 0x6dcdcc:c.instructions+=9;goto B6dcdcc;
case 0x6dcdd0:c.instructions+=8;goto B6dcdd0;
case 0x6dcdd1:c.instructions+=7;goto B6dcdd1;
case 0x6dcdd3:c.instructions+=6;goto B6dcdd3;
case 0x6dcdd6:c.instructions+=5;goto B6dcdd6;
case 0x6dcdd8:c.instructions+=4;goto B6dcdd8;
case 0x6dcdd9:c.instructions+=3;goto B6dcdd9;
case 0x6dcddb:c.instructions+=2;goto B6dcddb;
case 0x6dcddc:c.instructions+=1;goto B6dcddc;
case 0x6dcddf:goto L6dcddf;
case 0x6dcde3:c.instructions+=5;goto B6dcde3;
case 0x6dcde7:c.instructions+=4;goto B6dcde7;
case 0x6dcde8:c.instructions+=3;goto B6dcde8;
case 0x6dcde9:c.instructions+=2;goto B6dcde9;
case 0x6dcdea:c.instructions+=1;goto B6dcdea;
case 0x6dcdef:goto L6dcdef;
case 0x6dcdf2:c.instructions+=4;goto B6dcdf2;
case 0x6dcdf4:c.instructions+=3;goto B6dcdf4;
case 0x6dcdf7:c.instructions+=2;goto B6dcdf7;
case 0x6dcdf8:c.instructions+=1;goto B6dcdf8;
case 0x6dcdfb:goto L6dcdfb;
case 0x6dcdfe:c.instructions+=5;goto B6dcdfe;
case 0x6dcdff:c.instructions+=4;goto B6dcdff;
case 0x6dce02:c.instructions+=3;goto B6dce02;
case 0x6dce03:c.instructions+=2;goto B6dce03;
case 0x6dce04:c.instructions+=1;goto B6dce04;
case 0x6dce10:goto L6dce10;
case 0x6dce12:c.instructions+=2;goto B6dce12;
case 0x6dce14:c.instructions+=1;goto B6dce14;
case 0x6dce1a:goto L6dce1a;
case 0x6dce1d:c.instructions+=2;goto B6dce1d;
case 0x6dce1f:c.instructions+=1;goto B6dce1f;
case 0x6dce21:goto L6dce21;
case 0x6dce25:c.instructions+=7;goto B6dce25;
case 0x6dce29:c.instructions+=6;goto B6dce29;
case 0x6dce2a:c.instructions+=5;goto B6dce2a;
case 0x6dce2e:c.instructions+=4;goto B6dce2e;
case 0x6dce2f:c.instructions+=3;goto B6dce2f;
case 0x6dce30:c.instructions+=2;goto B6dce30;
case 0x6dce32:c.instructions+=1;goto B6dce32;
case 0x6dce37:goto L6dce37;
case 0x6dce39:goto L6dce39;
case 0x6dce3b:goto L6dce3b;
case 0x6dce3c:c.instructions+=4;goto B6dce3c;
case 0x6dce42:c.instructions+=3;goto B6dce42;
case 0x6dce44:c.instructions+=2;goto B6dce44;
case 0x6dce46:c.instructions+=1;goto B6dce46;
case 0x6dce48:goto L6dce48;
case 0x6dce4e:c.instructions+=1;goto B6dce4e;
case 0x6dce50:goto L6dce50;
case 0x6dce54:c.instructions+=1;goto B6dce54;
case 0x6dce56:goto L6dce56;
case 0x6dce57:c.instructions+=2;goto B6dce57;
case 0x6dce59:c.instructions+=1;goto B6dce59;
case 0x6dce5b:goto L6dce5b;
case 0x6dce5c:c.instructions+=1;goto B6dce5c;
case 0x6dce5d:goto L6dce5d;
case 0x6dce60:c.instructions+=1;goto B6dce60;
case 0x6dce66:goto L6dce66;
case 0x6dce67:c.instructions+=1;goto B6dce67;
case 0x6dce70:goto L6dce70;
case 0x6dce75:c.instructions+=2;goto B6dce75;
case 0x6dce77:c.instructions+=1;goto B6dce77;
case 0x6dce7d:goto L6dce7d;
case 0x6dce82:c.instructions+=6;goto B6dce82;
case 0x6dce83:c.instructions+=5;goto B6dce83;
case 0x6dce84:c.instructions+=4;goto B6dce84;
case 0x6dce85:c.instructions+=3;goto B6dce85;
case 0x6dce87:c.instructions+=2;goto B6dce87;
case 0x6dce89:c.instructions+=1;goto B6dce89;
case 0x6dce8b:goto L6dce8b;
case 0x6dce90:goto L6dce90;
case 0x6dce95:c.instructions+=3;goto B6dce95;
case 0x6dce98:c.instructions+=2;goto B6dce98;
case 0x6dce9a:c.instructions+=1;goto B6dce9a;
case 0x6dce9c:goto L6dce9c;
case 0x6dce9e:c.instructions+=2;goto B6dce9e;
case 0x6dcea0:c.instructions+=1;goto B6dcea0;
case 0x6dcea2:goto L6dcea2;
case 0x6dcea4:c.instructions+=2;goto B6dcea4;
case 0x6dcea5:c.instructions+=1;goto B6dcea5;
case 0x6dcea8:goto L6dcea8;
case 0x6dceaa:c.instructions+=4;goto B6dceaa;
case 0x6dceab:c.instructions+=3;goto B6dceab;
case 0x6dceb1:c.instructions+=2;goto B6dceb1;
case 0x6dceb8:c.instructions+=1;goto B6dceb8;
case 0x6dcebe:goto L6dcebe;
case 0x6dcec3:c.instructions+=3;goto B6dcec3;
case 0x6dcec6:c.instructions+=2;goto B6dcec6;
case 0x6dcec7:c.instructions+=1;goto B6dcec7;
case 0x6dcecc:goto L6dcecc;
case 0x6dced2:c.instructions+=5;goto B6dced2;
case 0x6dced9:c.instructions+=4;goto B6dced9;
case 0x6dcede:c.instructions+=3;goto B6dcede;
case 0x6dcedf:c.instructions+=2;goto B6dcedf;
case 0x6dcee1:c.instructions+=1;goto B6dcee1;
case 0x6dcee3:goto L6dcee3;
case 0x6dcee9:c.instructions+=3;goto B6dcee9;
case 0x6dceeb:c.instructions+=2;goto B6dceeb;
case 0x6dceed:c.instructions+=1;goto B6dceed;
case 0x6dceef:goto L6dceef;
case 0x6dcef0:goto L6dcef0;
case 0x6dcef5:c.instructions+=4;goto B6dcef5;
case 0x6dcef8:c.instructions+=3;goto B6dcef8;
case 0x6dcefa:c.instructions+=2;goto B6dcefa;
case 0x6dcefd:c.instructions+=1;goto B6dcefd;
case 0x6dceff:goto L6dceff;
case 0x6dcf01:c.instructions+=2;goto B6dcf01;
case 0x6dcf02:c.instructions+=1;goto B6dcf02;
case 0x6dcf07:goto L6dcf07;
case 0x6dcf0a:goto L6dcf0a;
case 0x6dcf10:c.instructions+=5;goto B6dcf10;
case 0x6dcf17:c.instructions+=4;goto B6dcf17;
case 0x6dcf1d:c.instructions+=3;goto B6dcf1d;
case 0x6dcf1e:c.instructions+=2;goto B6dcf1e;
case 0x6dcf20:c.instructions+=1;goto B6dcf20;
case 0x6dcf22:goto L6dcf22;
case 0x6dcf24:c.instructions+=2;goto B6dcf24;
case 0x6dcf26:c.instructions+=1;goto B6dcf26;
case 0x6dcf28:goto L6dcf28;
case 0x6dcf2a:c.instructions+=1;goto B6dcf2a;
case 0x6dcf30:goto L6dcf30;
case 0x6dcf36:c.instructions+=4;goto B6dcf36;
case 0x6dcf3a:c.instructions+=3;goto B6dcf3a;
case 0x6dcf3c:c.instructions+=2;goto B6dcf3c;
case 0x6dcf40:c.instructions+=1;goto B6dcf40;
case 0x6dcf42:goto L6dcf42;
case 0x6dcf45:c.instructions+=3;goto B6dcf45;
case 0x6dcf46:c.instructions+=2;goto B6dcf46;
case 0x6dcf47:c.instructions+=1;goto B6dcf47;
case 0x6dcf4d:goto L6dcf4d;
case 0x6dcf53:c.instructions+=2;goto B6dcf53;
case 0x6dcf59:c.instructions+=1;goto B6dcf59;
case 0x6dcf5c:goto L6dcf5c;
case 0x6dcf5d:c.instructions+=3;goto B6dcf5d;
case 0x6dcf60:c.instructions+=2;goto B6dcf60;
case 0x6dcf62:c.instructions+=1;goto B6dcf62;
case 0x6dcf64:goto L6dcf64;
case 0x6dcf69:c.instructions+=5;goto B6dcf69;
case 0x6dcf6b:c.instructions+=4;goto B6dcf6b;
case 0x6dcf6c:c.instructions+=3;goto B6dcf6c;
case 0x6dcf6d:c.instructions+=2;goto B6dcf6d;
case 0x6dcf6e:c.instructions+=1;goto B6dcf6e;
case 0x6dcf70:goto L6dcf70;
case 0x6dcf76:c.instructions+=4;goto B6dcf76;
case 0x6dcf7d:c.instructions+=3;goto B6dcf7d;
case 0x6dcf7e:c.instructions+=2;goto B6dcf7e;
case 0x6dcf7f:c.instructions+=1;goto B6dcf7f;
case 0x6dcf85:goto L6dcf85;
case 0x6dcf8b:c.instructions+=1;goto B6dcf8b;
case 0x6dcf8e:goto L6dcf8e;
case 0x6dcf93:c.instructions+=2;goto B6dcf93;
case 0x6dcf95:c.instructions+=1;goto B6dcf95;
case 0x6dcf97:goto L6dcf97;
case 0x6dcf9e:c.instructions+=3;goto B6dcf9e;
case 0x6dcf9f:c.instructions+=2;goto B6dcf9f;
case 0x6dcfa0:c.instructions+=1;goto B6dcfa0;
case 0x6dcfa6:goto L6dcfa6;
case 0x6dcfac:c.instructions+=1;goto B6dcfac;
case 0x6dcfaf:goto L6dcfaf;
case 0x6dcfb4:c.instructions+=2;goto B6dcfb4;
case 0x6dcfb6:c.instructions+=1;goto B6dcfb6;
case 0x6dcfb8:goto L6dcfb8;
case 0x6dcfba:c.instructions+=2;goto B6dcfba;
case 0x6dcfbb:c.instructions+=1;goto B6dcfbb;
case 0x6dcfc1:goto L6dcfc1;
case 0x6dcfc7:c.instructions+=1;goto B6dcfc7;
case 0x6dcfca:goto L6dcfca;
case 0x6dcfcf:c.instructions+=2;goto B6dcfcf;
case 0x6dcfd1:c.instructions+=1;goto B6dcfd1;
case 0x6dcfd3:goto L6dcfd3;
case 0x6dcfd6:c.instructions+=3;goto B6dcfd6;
case 0x6dcfd7:c.instructions+=2;goto B6dcfd7;
case 0x6dcfd8:c.instructions+=1;goto B6dcfd8;
case 0x6dcfde:goto L6dcfde;
case 0x6dcfe1:goto L6dcfe1;
case 0x6dcfe6:c.instructions+=2;goto B6dcfe6;
case 0x6dcfe8:c.instructions+=1;goto B6dcfe8;
case 0x6dcfea:goto L6dcfea;
case 0x6dcff0:c.instructions+=4;goto B6dcff0;
case 0x6dcff7:c.instructions+=3;goto B6dcff7;
case 0x6dcff8:c.instructions+=2;goto B6dcff8;
case 0x6dcff9:c.instructions+=1;goto B6dcff9;
case 0x6dcfff:goto L6dcfff;
default:missing_instruction(c.pc);}
B6dc000:L6dc000:{c.instructions+=3;NFSU2_TR(0x6dc000);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc004:{NFSU2_TR(0x6dc004);
__builtin_memmove(gp(0x8a8070),(R+0),4);
}
B6dc009:{NFSU2_TR(0x6dc009);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc010:L6dc010:{c.instructions+=5;NFSU2_TR(0x6dc010);
__builtin_memmove((R+4),gp(0x80efb8),4);
}
B6dc016:{NFSU2_TR(0x6dc016);
__builtin_memmove((R+0),gp(0x8a806c),4);
}
B6dc01b:{NFSU2_TR(0x6dc01b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6dc01d:{NFSU2_TR(0x6dc01d);
__builtin_memmove((R+4),gp(0x8a8070),4);
}
B6dc023:{NFSU2_TR(0x6dc023);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc02d;}}
}
B6dc025:L6dc025:{c.instructions+=2;NFSU2_TR(0x6dc025);
u8 U[14];
__builtin_memmove((U+6),gp(0x80efbc),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc02b:{NFSU2_TR(0x6dc02b);
if(r1(R+518)){{goto L6dc053;}}
}
B6dc02d:L6dc02d:{c.instructions+=10;NFSU2_TR(0x6dc02d);
__builtin_memmove((R+8),gp(0x8a79a0),4);
}
B6dc033:{NFSU2_TR(0x6dc033);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc034:{NFSU2_TR(0x6dc034);
__builtin_memmove(gp(0x80efb8),(R+0),4);
}
B6dc039:{NFSU2_TR(0x6dc039);
__builtin_memmove(gp(0x80efbc),(R+4),4);
}
B6dc03f:{NFSU2_TR(0x6dc03f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc041:{NFSU2_TR(0x6dc041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dc043:{NFSU2_TR(0x6dc043);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc044:{NFSU2_TR(0x6dc044);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc045:{NFSU2_TR(0x6dc045);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc046:{NFSU2_TR(0x6dc046);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc04cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc04c:L6dc04c:{c.instructions+=2;NFSU2_TR(0x6dc04c);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a80d0),u32(0x1ull)));
s4(0x8a80d0,u32(u32(m4(0x8a80d0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a80d0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a80d0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a80d0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc052:{NFSU2_TR(0x6dc052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc053:L6dc053:{c.instructions+=1;NFSU2_TR(0x6dc053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc060:L6dc060:{c.instructions+=4;NFSU2_TR(0x6dc060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc064:{NFSU2_TR(0x6dc064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc066:{NFSU2_TR(0x6dc066);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8064),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc06c:{NFSU2_TR(0x6dc06c);
if(r1(R+518)){{goto L6dc089;}}
}
B6dc06e:L6dc06e:{c.instructions+=6;NFSU2_TR(0x6dc06e);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dc074:{NFSU2_TR(0x6dc074);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc075:{NFSU2_TR(0x6dc075);
__builtin_memmove(gp(0x8a8064),(R+0),4);
}
B6dc07a:{NFSU2_TR(0x6dc07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc07c:{NFSU2_TR(0x6dc07c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc07d:{NFSU2_TR(0x6dc07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc083ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc083:L6dc083:{c.instructions+=1;NFSU2_TR(0x6dc083);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a80cc),u32(0x1ull)));
s4(0x8a80cc,u32(u32(m4(0x8a80cc))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a80cc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a80cc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a80cc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc089:L6dc089:{c.instructions+=1;NFSU2_TR(0x6dc089);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc090:L6dc090:{c.instructions+=3;NFSU2_TR(0x6dc090);
__builtin_memmove((R+0),gp(0x8a8064),4);
}
B6dc095:{NFSU2_TR(0x6dc095);
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
B6dc097:{NFSU2_TR(0x6dc097);
if(r1(R+518)){{goto L6dc0b3;}}
}
B6dc099:L6dc099:{c.instructions+=6;NFSU2_TR(0x6dc099);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc09e:{NFSU2_TR(0x6dc09e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0a0:{NFSU2_TR(0x6dc0a0);
s4(0x8a8064,u32(0x0ull));
}
B6dc0aa:{NFSU2_TR(0x6dc0aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc0ac:{NFSU2_TR(0x6dc0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0ad:{NFSU2_TR(0x6dc0ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc0b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc0b3:L6dc0b3:{c.instructions+=1;NFSU2_TR(0x6dc0b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc0c0:L6dc0c0:{c.instructions+=10;NFSU2_TR(0x6dc0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc0c4:{NFSU2_TR(0x6dc0c4);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc0c9:{NFSU2_TR(0x6dc0c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc0cb:{NFSU2_TR(0x6dc0cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0cc:{NFSU2_TR(0x6dc0cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc0d0:{NFSU2_TR(0x6dc0d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0d1:{NFSU2_TR(0x6dc0d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc0d5:{NFSU2_TR(0x6dc0d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0d6:{NFSU2_TR(0x6dc0d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0d7:{NFSU2_TR(0x6dc0d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc0ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc0dd:L6dc0dd:{c.instructions+=1;NFSU2_TR(0x6dc0dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc0e0:L6dc0e0:{c.instructions+=11;NFSU2_TR(0x6dc0e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc0e4:{NFSU2_TR(0x6dc0e4);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc0e9:{NFSU2_TR(0x6dc0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc0eb:{NFSU2_TR(0x6dc0eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0ec:{NFSU2_TR(0x6dc0ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dc0f0:{NFSU2_TR(0x6dc0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0f1:{NFSU2_TR(0x6dc0f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0f2:{NFSU2_TR(0x6dc0f2);
__builtin_memmove((R+8),gp(0x8a8060),4);
}
B6dc0f8:{NFSU2_TR(0x6dc0f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0f9:{NFSU2_TR(0x6dc0f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc0fa:{NFSU2_TR(0x6dc0fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc100ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc100:L6dc100:{c.instructions+=12;NFSU2_TR(0x6dc100);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc104:{NFSU2_TR(0x6dc104);
__builtin_memmove((R+8),gp(0x8a80bc),4);
}
B6dc10a:{NFSU2_TR(0x6dc10a);
__builtin_memmove((R+4),gp(0x8a80c0),4);
}
B6dc110:{NFSU2_TR(0x6dc110);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6dc112:{NFSU2_TR(0x6dc112);
__builtin_memmove((R+0),gp(0x8a80c4),4);
}
B6dc117:{NFSU2_TR(0x6dc117);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6dc119:{NFSU2_TR(0x6dc119);
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
B6dc11a:{NFSU2_TR(0x6dc11a);
__builtin_memmove(gp(0x8a80bc),(R+8),4);
}
B6dc120:{NFSU2_TR(0x6dc120);
__builtin_memmove(gp(0x8a80c0),(R+4),4);
}
B6dc126:{NFSU2_TR(0x6dc126);
__builtin_memmove(gp(0x8a80c4),(R+0),4);
}
B6dc12b:{NFSU2_TR(0x6dc12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc12c:{NFSU2_TR(0x6dc12c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc130:L6dc130:{c.instructions+=4;NFSU2_TR(0x6dc130);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc135:{NFSU2_TR(0x6dc135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc137:{NFSU2_TR(0x6dc137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc138:{NFSU2_TR(0x6dc138);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc13bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc13b:L6dc13b:{c.instructions+=2;NFSU2_TR(0x6dc13b);
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
B6dc13d:{NFSU2_TR(0x6dc13d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc193;}}
}
B6dc13f:L6dc13f:{c.instructions+=16;NFSU2_TR(0x6dc13f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc143:{NFSU2_TR(0x6dc143);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc148:{NFSU2_TR(0x6dc148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc14a:{NFSU2_TR(0x6dc14a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc14b:{NFSU2_TR(0x6dc14b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dc14f:{NFSU2_TR(0x6dc14f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc150:{NFSU2_TR(0x6dc150);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc154:{NFSU2_TR(0x6dc154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc155:{NFSU2_TR(0x6dc155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc156:{NFSU2_TR(0x6dc156);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc15a:{NFSU2_TR(0x6dc15a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc15b:{NFSU2_TR(0x6dc15b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc15c:{NFSU2_TR(0x6dc15c);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6dc162:{NFSU2_TR(0x6dc162);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc163:{NFSU2_TR(0x6dc163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc164:{NFSU2_TR(0x6dc164);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc16aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc16a:L6dc16a:{c.instructions+=11;NFSU2_TR(0x6dc16a);
__builtin_memmove((R+8),gp(0x8a80bc),4);
}
B6dc170:{NFSU2_TR(0x6dc170);
__builtin_memmove((R+4),gp(0x8a80c0),4);
}
B6dc176:{NFSU2_TR(0x6dc176);
__builtin_memmove((R+0),gp(0x8a80c4),4);
}
B6dc17b:{NFSU2_TR(0x6dc17b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6dc17d:{NFSU2_TR(0x6dc17d);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6dc17f:{NFSU2_TR(0x6dc17f);
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
B6dc180:{NFSU2_TR(0x6dc180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc181:{NFSU2_TR(0x6dc181);
__builtin_memmove(gp(0x8a80bc),(R+8),4);
}
B6dc187:{NFSU2_TR(0x6dc187);
__builtin_memmove(gp(0x8a80c0),(R+4),4);
}
B6dc18d:{NFSU2_TR(0x6dc18d);
__builtin_memmove(gp(0x8a80c4),(R+0),4);
}
B6dc192:{NFSU2_TR(0x6dc192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc193:L6dc193:{c.instructions+=1;NFSU2_TR(0x6dc193);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc1a0:L6dc1a0:{c.instructions+=4;NFSU2_TR(0x6dc1a0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc1a5:{NFSU2_TR(0x6dc1a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc1a7:{NFSU2_TR(0x6dc1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1a8:{NFSU2_TR(0x6dc1a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc1abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc1ab:L6dc1ab:{c.instructions+=2;NFSU2_TR(0x6dc1ab);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88760868ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88760868ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88760868ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc1b0:{NFSU2_TR(0x6dc1b0);
if(r1(R+518)){{goto L6dc229;}}
}
B6dc1b2:L6dc1b2:{c.instructions+=21;NFSU2_TR(0x6dc1b2);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6dc1b8:{NFSU2_TR(0x6dc1b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80ef84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6dc1bf:{NFSU2_TR(0x6dc1bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1c0:{NFSU2_TR(0x6dc1c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1c1:{NFSU2_TR(0x6dc1c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1c2:{NFSU2_TR(0x6dc1c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc1c6:{NFSU2_TR(0x6dc1c6);
__builtin_memmove((R+0),(R+28),4);
}
B6dc1c8:{NFSU2_TR(0x6dc1c8);
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
B6dc1ca:{NFSU2_TR(0x6dc1ca);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6dc1cb:{NFSU2_TR(0x6dc1cb);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80ef80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(s64(s32(r4(U+8)))));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dc1cb);w8(U+52,u64(x_/y_));}
w4(R+0,u32(r8(U+52)));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dc1cb);w8(U+60,u64(x_%y_));}
w4(R+8,u32(r8(U+60)));
}
B6dc1d2:{NFSU2_TR(0x6dc1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dc1d6:{NFSU2_TR(0x6dc1d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1d7:{NFSU2_TR(0x6dc1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dc1db:{NFSU2_TR(0x6dc1db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1dc:{NFSU2_TR(0x6dc1dc);
__builtin_memmove((R+24),(R+0),4);
}
B6dc1de:{NFSU2_TR(0x6dc1de);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc1e3:{NFSU2_TR(0x6dc1e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc1e5:{NFSU2_TR(0x6dc1e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1e6:{NFSU2_TR(0x6dc1e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1e7:{NFSU2_TR(0x6dc1e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc1e8:{NFSU2_TR(0x6dc1e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc1eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc1ee:L6dc1ee:{c.instructions+=16;NFSU2_TR(0x6dc1ee);
__builtin_memmove((R+8),gp(0x8a80bc),4);
}
B6dc1f4:{NFSU2_TR(0x6dc1f4);
__builtin_memmove((R+4),gp(0x8a80c0),4);
}
B6dc1fa:{NFSU2_TR(0x6dc1fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dc1fc:{NFSU2_TR(0x6dc1fc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6dc1fe:{NFSU2_TR(0x6dc1fe);
__builtin_memmove(gp(0x8a806c),(R+0),4);
}
B6dc203:{NFSU2_TR(0x6dc203);
__builtin_memmove(gp(0x8a8070),(R+0),4);
}
B6dc208:{NFSU2_TR(0x6dc208);
__builtin_memmove(gp(0x8a8078),(R+0),4);
}
B6dc20d:{NFSU2_TR(0x6dc20d);
__builtin_memmove((R+0),gp(0x8a80c4),4);
}
B6dc212:{NFSU2_TR(0x6dc212);
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6dc214:{NFSU2_TR(0x6dc214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc215:{NFSU2_TR(0x6dc215);
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
B6dc216:{NFSU2_TR(0x6dc216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc217:{NFSU2_TR(0x6dc217);
__builtin_memmove(gp(0x8a80bc),(R+8),4);
}
B6dc21d:{NFSU2_TR(0x6dc21d);
__builtin_memmove(gp(0x8a80c0),(R+4),4);
}
B6dc223:{NFSU2_TR(0x6dc223);
__builtin_memmove(gp(0x8a80c4),(R+0),4);
}
B6dc228:{NFSU2_TR(0x6dc228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc229:L6dc229:{c.instructions+=1;NFSU2_TR(0x6dc229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc230:L6dc230:{c.instructions+=7;NFSU2_TR(0x6dc230);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dc232:{NFSU2_TR(0x6dc232);
__builtin_memmove(gp(0x8a806c),(R+0),4);
}
B6dc237:{NFSU2_TR(0x6dc237);
__builtin_memmove(gp(0x8a8070),(R+0),4);
}
B6dc23c:{NFSU2_TR(0x6dc23c);
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
B6dc23f:{NFSU2_TR(0x6dc23f);
__builtin_memmove(gp(0x80efb8),(R+0),4);
}
B6dc244:{NFSU2_TR(0x6dc244);
__builtin_memmove(gp(0x80efbc),(R+0),4);
}
B6dc249:{NFSU2_TR(0x6dc249);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc250:L6dc250:{c.instructions+=4;NFSU2_TR(0x6dc250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc251:{NFSU2_TR(0x6dc251);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dc253:{NFSU2_TR(0x6dc253);
w4(R+4,u32(0x10ull));
}
B6dc258:{NFSU2_TR(0x6dc258);
w4(R+28,u32(0x8a8078ull));
}
B6dc25d:L6dc25d:{c.instructions+=1;NFSU2_TR(0x6dc25d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6dc25f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc25du);}goto L6dc25d;}
}
B6dc25f:L6dc25f:{c.instructions+=14;NFSU2_TR(0x6dc25f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc262:{NFSU2_TR(0x6dc262);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc263:{NFSU2_TR(0x6dc263);
__builtin_memmove(gp(0x8a8064),(R+0),4);
}
B6dc268:{NFSU2_TR(0x6dc268);
__builtin_memmove(gp(0x8a8068),(R+0),4);
}
B6dc26d:{NFSU2_TR(0x6dc26d);
__builtin_memmove(gp(0x8a806c),(R+0),4);
}
B6dc272:{NFSU2_TR(0x6dc272);
__builtin_memmove(gp(0x8a8070),(R+0),4);
}
B6dc277:{NFSU2_TR(0x6dc277);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc27c:{NFSU2_TR(0x6dc27c);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc27e:{NFSU2_TR(0x6dc27e);
__builtin_memmove(gp(0x80efb8),(R+4),4);
}
B6dc284:{NFSU2_TR(0x6dc284);
__builtin_memmove(gp(0x80efbc),(R+4),4);
}
B6dc28a:{NFSU2_TR(0x6dc28a);
__builtin_memmove(gp(0x80efc0),(R+4),4);
}
B6dc290:{NFSU2_TR(0x6dc290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc292:{NFSU2_TR(0x6dc292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc293:{NFSU2_TR(0x6dc293);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc299ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc299:L6dc299:{c.instructions+=2;NFSU2_TR(0x6dc299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc29a:{NFSU2_TR(0x6dc29a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc2a0:L6dc2a0:{c.instructions+=4;NFSU2_TR(0x6dc2a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc2a1:{NFSU2_TR(0x6dc2a1);
w4(R+4,u32(0x10ull));
}
B6dc2a6:{NFSU2_TR(0x6dc2a6);
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
B6dc2a8:{NFSU2_TR(0x6dc2a8);
w4(R+28,u32(0x8a8078ull));
}
B6dc2ad:L6dc2ad:{c.instructions+=1;NFSU2_TR(0x6dc2ad);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6dc2af;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc2adu);}goto L6dc2ad;}
}
B6dc2af:L6dc2af:{c.instructions+=2;NFSU2_TR(0x6dc2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc2b0:{NFSU2_TR(0x6dc2b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc2c0:L6dc2c0:{c.instructions+=8;NFSU2_TR(0x6dc2c0);
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
B6dc2c2:{NFSU2_TR(0x6dc2c2);
__builtin_memmove(gp(0x8a80bc),(R+0),4);
}
B6dc2c7:{NFSU2_TR(0x6dc2c7);
__builtin_memmove(gp(0x8a80c0),(R+0),4);
}
B6dc2cc:{NFSU2_TR(0x6dc2cc);
__builtin_memmove(gp(0x8a80c4),(R+0),4);
}
B6dc2d1:{NFSU2_TR(0x6dc2d1);
__builtin_memmove(gp(0x8a80c8),(R+0),4);
}
B6dc2d6:{NFSU2_TR(0x6dc2d6);
__builtin_memmove(gp(0x8a80cc),(R+0),4);
}
B6dc2db:{NFSU2_TR(0x6dc2db);
__builtin_memmove(gp(0x8a80d0),(R+0),4);
}
B6dc2e0:{NFSU2_TR(0x6dc2e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc2f0:L6dc2f0:{c.instructions+=2;NFSU2_TR(0x6dc2f0);
__builtin_memmove((R+0),gp(0x8a8064),4);
}
B6dc2f5:{NFSU2_TR(0x6dc2f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc300:L6dc300:{c.instructions+=3;NFSU2_TR(0x6dc300);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc304:{NFSU2_TR(0x6dc304);
u8 U[14];
__builtin_memmove((U+6),gp(0x80efc0),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc30a:{NFSU2_TR(0x6dc30a);
if(r1(R+518)){{goto L6dc323;}}
}
B6dc30c:L6dc30c:{c.instructions+=7;NFSU2_TR(0x6dc30c);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dc312:{NFSU2_TR(0x6dc312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc313:{NFSU2_TR(0x6dc313);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc315:{NFSU2_TR(0x6dc315);
__builtin_memmove(gp(0x80efc0),(R+0),4);
}
B6dc31a:{NFSU2_TR(0x6dc31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc31c:{NFSU2_TR(0x6dc31c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc31d:{NFSU2_TR(0x6dc31d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc323ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc323:L6dc323:{c.instructions+=1;NFSU2_TR(0x6dc323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc330:L6dc330:{c.instructions+=2;NFSU2_TR(0x6dc330);
__builtin_memmove((R+0),gp(0x80efc4),1);
}
B6dc335:{NFSU2_TR(0x6dc335);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc340:L6dc340:{c.instructions+=18;NFSU2_TR(0x6dc340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc344:{NFSU2_TR(0x6dc344);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc348:{NFSU2_TR(0x6dc348);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc349:{NFSU2_TR(0x6dc349);
__builtin_memmove((R+24),(R+4),4);
}
B6dc34b:{NFSU2_TR(0x6dc34b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc34f:{NFSU2_TR(0x6dc34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc352:{NFSU2_TR(0x6dc352);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc356:{NFSU2_TR(0x6dc356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc357:{NFSU2_TR(0x6dc357);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dc359:{NFSU2_TR(0x6dc359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc35c:{NFSU2_TR(0x6dc35c);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
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
B6dc360:{NFSU2_TR(0x6dc360);
u8 U[4];
w4(U+0,u32(0x7c0e60ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dc366:{NFSU2_TR(0x6dc366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc369:{NFSU2_TR(0x6dc369);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc36c:{NFSU2_TR(0x6dc36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc36f:{NFSU2_TR(0x6dc36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc372:{NFSU2_TR(0x6dc372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc379:{NFSU2_TR(0x6dc379);
if(r1(R+518)){{goto L6dc3ae;}}
}
B6dc37b:L6dc37b:{c.instructions+=3;NFSU2_TR(0x6dc37b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc37f:{NFSU2_TR(0x6dc37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc382:{NFSU2_TR(0x6dc382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc387ull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dc387:L6dc387:{c.instructions+=2;NFSU2_TR(0x6dc387);
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
B6dc389:{NFSU2_TR(0x6dc389);
if(r1(R+518)){{goto L6dc3ba;}}
}
B6dc38b:L6dc38b:{c.instructions+=13;NFSU2_TR(0x6dc38b);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc390:{NFSU2_TR(0x6dc390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc392:{NFSU2_TR(0x6dc392);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dc395:{NFSU2_TR(0x6dc395);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc396:{NFSU2_TR(0x6dc396);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc399:{NFSU2_TR(0x6dc399);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc39a:{NFSU2_TR(0x6dc39a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc39b:{NFSU2_TR(0x6dc39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc39e:{NFSU2_TR(0x6dc39e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc39f:{NFSU2_TR(0x6dc39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc3a2:{NFSU2_TR(0x6dc3a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3a3:{NFSU2_TR(0x6dc3a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3a4:{NFSU2_TR(0x6dc3a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc3a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc3a7:L6dc3a7:{c.instructions+=4;NFSU2_TR(0x6dc3a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc3a8:{NFSU2_TR(0x6dc3a8);
__builtin_memmove((R+0),(R+24),4);
}
B6dc3aa:{NFSU2_TR(0x6dc3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc3ab:{NFSU2_TR(0x6dc3ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc3ae:L6dc3ae:{c.instructions+=2;NFSU2_TR(0x6dc3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc3b1:{NFSU2_TR(0x6dc3b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc3b6ull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dc3b6:L6dc3b6:{c.instructions+=2;NFSU2_TR(0x6dc3b6);
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
B6dc3b8:{NFSU2_TR(0x6dc3b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc38bu);}goto L6dc38b;}}
}
B6dc3ba:L6dc3ba:{c.instructions+=16;NFSU2_TR(0x6dc3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc3bd:{NFSU2_TR(0x6dc3bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3be:{NFSU2_TR(0x6dc3be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc3c1:{NFSU2_TR(0x6dc3c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3c2:{NFSU2_TR(0x6dc3c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3c3:{NFSU2_TR(0x6dc3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc3c6:{NFSU2_TR(0x6dc3c6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc3c9:{NFSU2_TR(0x6dc3c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3ca:{NFSU2_TR(0x6dc3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc3cd:{NFSU2_TR(0x6dc3cd);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dc3d3:{NFSU2_TR(0x6dc3d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc3d5:{NFSU2_TR(0x6dc3d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3d6:{NFSU2_TR(0x6dc3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc3d9:{NFSU2_TR(0x6dc3d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3da:{NFSU2_TR(0x6dc3da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3db:{NFSU2_TR(0x6dc3db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc3deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc3de:L6dc3de:{c.instructions+=5;NFSU2_TR(0x6dc3de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc3df:{NFSU2_TR(0x6dc3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc3e0:{NFSU2_TR(0x6dc3e0);
__builtin_memmove((R+0),(R+24),4);
}
B6dc3e2:{NFSU2_TR(0x6dc3e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc3e3:{NFSU2_TR(0x6dc3e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc3f0:L6dc3f0:{c.instructions+=10;NFSU2_TR(0x6dc3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6dc3f3:{NFSU2_TR(0x6dc3f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3f4:{NFSU2_TR(0x6dc3f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3f5:{NFSU2_TR(0x6dc3f5);
__builtin_memmove((R+24),(R+4),4);
}
B6dc3f7:{NFSU2_TR(0x6dc3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc3fa:{NFSU2_TR(0x6dc3fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc3fb:{NFSU2_TR(0x6dc3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc3fe:{NFSU2_TR(0x6dc3fe);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6dc400:{NFSU2_TR(0x6dc400);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc408:{NFSU2_TR(0x6dc408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc40dull));
TAIL_STATIC(0x6da260u,6da);
}
B6dc40d:L6dc40d:{c.instructions+=1;NFSU2_TR(0x6dc40d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc412ull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dc412:L6dc412:{c.instructions+=2;NFSU2_TR(0x6dc412);
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
B6dc414:{NFSU2_TR(0x6dc414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc41b;}}
}
B6dc416:L6dc416:{c.instructions+=1;NFSU2_TR(0x6dc416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc41bull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dc41b:L6dc41b:{c.instructions+=12;NFSU2_TR(0x6dc41b);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc420:{NFSU2_TR(0x6dc420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc422:{NFSU2_TR(0x6dc422);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dc426:{NFSU2_TR(0x6dc426);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc427:{NFSU2_TR(0x6dc427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc42a:{NFSU2_TR(0x6dc42a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc42c:{NFSU2_TR(0x6dc42c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc42d:{NFSU2_TR(0x6dc42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc430:{NFSU2_TR(0x6dc430);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc431:{NFSU2_TR(0x6dc431);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc432:{NFSU2_TR(0x6dc432);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc433:{NFSU2_TR(0x6dc433);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc436ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc436:L6dc436:{c.instructions+=2;NFSU2_TR(0x6dc436);
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
B6dc438:{NFSU2_TR(0x6dc438);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6dc455;}}
}
B6dc43a:L6dc43a:{c.instructions+=12;NFSU2_TR(0x6dc43a);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc43f:{NFSU2_TR(0x6dc43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc441:{NFSU2_TR(0x6dc441);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dc445:{NFSU2_TR(0x6dc445);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc446:{NFSU2_TR(0x6dc446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc449:{NFSU2_TR(0x6dc449);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc44b:{NFSU2_TR(0x6dc44b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc44c:{NFSU2_TR(0x6dc44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc44f:{NFSU2_TR(0x6dc44f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc450:{NFSU2_TR(0x6dc450);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc451:{NFSU2_TR(0x6dc451);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc452:{NFSU2_TR(0x6dc452);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc455ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc455:L6dc455:{c.instructions+=10;NFSU2_TR(0x6dc455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc458:{NFSU2_TR(0x6dc458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc45a:{NFSU2_TR(0x6dc45a);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc45f:{NFSU2_TR(0x6dc45f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dc463:{NFSU2_TR(0x6dc463);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc464:{NFSU2_TR(0x6dc464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc467:{NFSU2_TR(0x6dc467);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc468:{NFSU2_TR(0x6dc468);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc46a:{NFSU2_TR(0x6dc46a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc46b:{NFSU2_TR(0x6dc46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc46eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc46e:L6dc46e:{c.instructions+=10;NFSU2_TR(0x6dc46e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc472:{NFSU2_TR(0x6dc472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc474:{NFSU2_TR(0x6dc474);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc479:{NFSU2_TR(0x6dc479);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dc47d:{NFSU2_TR(0x6dc47d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc47e:{NFSU2_TR(0x6dc47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc481:{NFSU2_TR(0x6dc481);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc482:{NFSU2_TR(0x6dc482);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc484:{NFSU2_TR(0x6dc484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc485:{NFSU2_TR(0x6dc485);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc488ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc488:L6dc488:{c.instructions+=7;NFSU2_TR(0x6dc488);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc48b:{NFSU2_TR(0x6dc48b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc48f:{NFSU2_TR(0x6dc48f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc493:{NFSU2_TR(0x6dc493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc494:{NFSU2_TR(0x6dc494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc495:{NFSU2_TR(0x6dc495);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc496:{NFSU2_TR(0x6dc496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc49bull));
TAIL_STATIC(0x401000u,401);
}
B6dc49b:L6dc49b:{c.instructions+=5;NFSU2_TR(0x6dc49b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc49f:{NFSU2_TR(0x6dc49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc4a1:{NFSU2_TR(0x6dc4a1);
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
B6dc4a4:{NFSU2_TR(0x6dc4a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4a5:{NFSU2_TR(0x6dc4a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc4a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc4a8:L6dc4a8:{c.instructions+=4;NFSU2_TR(0x6dc4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc4ab:{NFSU2_TR(0x6dc4ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc4ad:{NFSU2_TR(0x6dc4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4ae:{NFSU2_TR(0x6dc4ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc4b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc4b1:L6dc4b1:{c.instructions+=11;NFSU2_TR(0x6dc4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dc4b4:{NFSU2_TR(0x6dc4b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc4b8:{NFSU2_TR(0x6dc4b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc4ba:{NFSU2_TR(0x6dc4ba);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4bf:{NFSU2_TR(0x6dc4bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dc4c3:{NFSU2_TR(0x6dc4c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4c4:{NFSU2_TR(0x6dc4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc4c7:{NFSU2_TR(0x6dc4c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4c8:{NFSU2_TR(0x6dc4c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4c9:{NFSU2_TR(0x6dc4c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4ca:{NFSU2_TR(0x6dc4ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc4cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc4cd:L6dc4cd:{c.instructions+=7;NFSU2_TR(0x6dc4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc4d0:{NFSU2_TR(0x6dc4d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc4d4:{NFSU2_TR(0x6dc4d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc4d8:{NFSU2_TR(0x6dc4d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4d9:{NFSU2_TR(0x6dc4d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4da:{NFSU2_TR(0x6dc4da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4db:{NFSU2_TR(0x6dc4db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc4e0ull));
TAIL_STATIC(0x401000u,401);
}
B6dc4e0:L6dc4e0:{c.instructions+=5;NFSU2_TR(0x6dc4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc4e4:{NFSU2_TR(0x6dc4e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc4e6:{NFSU2_TR(0x6dc4e6);
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
B6dc4e9:{NFSU2_TR(0x6dc4e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4ea:{NFSU2_TR(0x6dc4ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc4edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc4ed:L6dc4ed:{c.instructions+=4;NFSU2_TR(0x6dc4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc4f0:{NFSU2_TR(0x6dc4f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc4f2:{NFSU2_TR(0x6dc4f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc4f3:{NFSU2_TR(0x6dc4f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc4f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc4f6:L6dc4f6:{c.instructions+=5;NFSU2_TR(0x6dc4f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc4fa:{NFSU2_TR(0x6dc4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc4fd:{NFSU2_TR(0x6dc4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc500:{NFSU2_TR(0x6dc500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc503:{NFSU2_TR(0x6dc503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc508ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc2a0u);}goto L6dc2a0;}
}
B6dc508:L6dc508:{c.instructions+=6;NFSU2_TR(0x6dc508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc509:{NFSU2_TR(0x6dc509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc50a:{NFSU2_TR(0x6dc50a);
__builtin_memmove((R+0),(R+12),4);
}
B6dc50c:{NFSU2_TR(0x6dc50c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc50d:{NFSU2_TR(0x6dc50d);
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
B6dc510:{NFSU2_TR(0x6dc510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc520:L6dc520:{c.instructions+=4;NFSU2_TR(0x6dc520);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc523:{NFSU2_TR(0x6dc523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc525:{NFSU2_TR(0x6dc525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc526:{NFSU2_TR(0x6dc526);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc529ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc529:L6dc529:{c.instructions+=1;NFSU2_TR(0x6dc529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc530:L6dc530:{c.instructions+=5;NFSU2_TR(0x6dc530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc531:{NFSU2_TR(0x6dc531);
__builtin_memmove((R+24),(R+4),4);
}
B6dc533:{NFSU2_TR(0x6dc533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc536:{NFSU2_TR(0x6dc536);
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
B6dc538:{NFSU2_TR(0x6dc538);
if(r1(R+518)){{goto L6dc547;}}
}
B6dc53a:L6dc53a:{c.instructions+=3;NFSU2_TR(0x6dc53a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc53c:{NFSU2_TR(0x6dc53c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc53d:{NFSU2_TR(0x6dc53d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc540ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc540:L6dc540:{c.instructions+=1;NFSU2_TR(0x6dc540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc547:L6dc547:{c.instructions+=2;NFSU2_TR(0x6dc547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc548:{NFSU2_TR(0x6dc548);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc550:L6dc550:{c.instructions+=5;NFSU2_TR(0x6dc550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc551:{NFSU2_TR(0x6dc551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc552:{NFSU2_TR(0x6dc552);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc553:{NFSU2_TR(0x6dc553);
__builtin_memmove((R+24),(R+4),4);
}
B6dc555:{NFSU2_TR(0x6dc555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc55aull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dc55a:L6dc55a:{c.instructions+=2;NFSU2_TR(0x6dc55a);
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
B6dc55c:{NFSU2_TR(0x6dc55c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc58f;}}
}
B6dc55e:L6dc55e:{c.instructions+=1;NFSU2_TR(0x6dc55e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc563ull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dc563:L6dc563:{c.instructions+=2;NFSU2_TR(0x6dc563);
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
B6dc565:{NFSU2_TR(0x6dc565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc58f;}}
}
B6dc567:L6dc567:{c.instructions+=16;NFSU2_TR(0x6dc567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc56a:{NFSU2_TR(0x6dc56a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc56b:{NFSU2_TR(0x6dc56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dc56e:{NFSU2_TR(0x6dc56e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc571:{NFSU2_TR(0x6dc571);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc572:{NFSU2_TR(0x6dc572);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc574:{NFSU2_TR(0x6dc574);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc577:{NFSU2_TR(0x6dc577);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc578:{NFSU2_TR(0x6dc578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc57b:{NFSU2_TR(0x6dc57b);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dc581:{NFSU2_TR(0x6dc581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc583:{NFSU2_TR(0x6dc583);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc584:{NFSU2_TR(0x6dc584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc587:{NFSU2_TR(0x6dc587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc588:{NFSU2_TR(0x6dc588);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc589:{NFSU2_TR(0x6dc589);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc58cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc58c:L6dc58c:{c.instructions+=2;NFSU2_TR(0x6dc58c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc58d:{NFSU2_TR(0x6dc58d);
{goto L6dc5ac;}
}
B6dc58f:L6dc58f:{c.instructions+=13;NFSU2_TR(0x6dc58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc592:{NFSU2_TR(0x6dc592);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc597:{NFSU2_TR(0x6dc597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc599:{NFSU2_TR(0x6dc599);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc59c:{NFSU2_TR(0x6dc59c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc59d:{NFSU2_TR(0x6dc59d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc59f:{NFSU2_TR(0x6dc59f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5a0:{NFSU2_TR(0x6dc5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc5a3:{NFSU2_TR(0x6dc5a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5a4:{NFSU2_TR(0x6dc5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc5a7:{NFSU2_TR(0x6dc5a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5a8:{NFSU2_TR(0x6dc5a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5a9:{NFSU2_TR(0x6dc5a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc5acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc5ac:L6dc5ac:{c.instructions+=3;NFSU2_TR(0x6dc5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc5af:{NFSU2_TR(0x6dc5af);
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
B6dc5b1:{NFSU2_TR(0x6dc5b1);
if(r1(R+518)){{goto L6dc5e5;}}
}
B6dc5b3:L6dc5b3:{c.instructions+=10;NFSU2_TR(0x6dc5b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc5b5:{NFSU2_TR(0x6dc5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc5b7:{NFSU2_TR(0x6dc5b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5b9:{NFSU2_TR(0x6dc5b9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dc5bd:{NFSU2_TR(0x6dc5bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5be:{NFSU2_TR(0x6dc5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc5c1:{NFSU2_TR(0x6dc5c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5c2:{NFSU2_TR(0x6dc5c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5c4:{NFSU2_TR(0x6dc5c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5c5:{NFSU2_TR(0x6dc5c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc5c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc5c8:L6dc5c8:{c.instructions+=7;NFSU2_TR(0x6dc5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc5cb:{NFSU2_TR(0x6dc5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc5ce:{NFSU2_TR(0x6dc5ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc5d2:{NFSU2_TR(0x6dc5d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5d3:{NFSU2_TR(0x6dc5d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5d4:{NFSU2_TR(0x6dc5d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5d5:{NFSU2_TR(0x6dc5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc5daull));
TAIL_STATIC(0x401000u,401);
}
B6dc5da:L6dc5da:{c.instructions+=5;NFSU2_TR(0x6dc5da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6dc5dc:{NFSU2_TR(0x6dc5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc5de:{NFSU2_TR(0x6dc5de);
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
B6dc5e1:{NFSU2_TR(0x6dc5e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5e2:{NFSU2_TR(0x6dc5e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc5e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc5e5:L6dc5e5:{c.instructions+=4;NFSU2_TR(0x6dc5e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc5e6:{NFSU2_TR(0x6dc5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc5e7:{NFSU2_TR(0x6dc5e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dc5e8:{NFSU2_TR(0x6dc5e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc5f0:L6dc5f0:{c.instructions+=5;NFSU2_TR(0x6dc5f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc5f1:{NFSU2_TR(0x6dc5f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc5f5:{NFSU2_TR(0x6dc5f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc5f7:{NFSU2_TR(0x6dc5f7);
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
B6dc5f9:{NFSU2_TR(0x6dc5f9);
if(r1(R+518)){{goto L6dc651;}}
}
B6dc5fb:L6dc5fb:{c.instructions+=5;NFSU2_TR(0x6dc5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc5fe:{NFSU2_TR(0x6dc5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc600:{NFSU2_TR(0x6dc600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc603:{NFSU2_TR(0x6dc603);
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
B6dc605:{NFSU2_TR(0x6dc605);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6dc651;}}
}
B6dc607:L6dc607:{c.instructions+=5;NFSU2_TR(0x6dc607);
__builtin_memmove((R+8),gp(0x80f008),4);
}
B6dc60d:{NFSU2_TR(0x6dc60d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc60e:{NFSU2_TR(0x6dc60e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dc610:{NFSU2_TR(0x6dc610);
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
B6dc612:{NFSU2_TR(0x6dc612);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dc650;}}
}
B6dc614:L6dc614:{c.instructions+=2;NFSU2_TR(0x6dc614);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dc619:{NFSU2_TR(0x6dc619);
__builtin_memmove((R+16),(R+16),4);
}
B6dc620:L6dc620:{c.instructions+=2;NFSU2_TR(0x6dc620);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dc623:{NFSU2_TR(0x6dc623);
if(r1(R+518)){{goto L6dc62d;}}
}
B6dc625:L6dc625:{c.instructions+=3;NFSU2_TR(0x6dc625);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dc626:{NFSU2_TR(0x6dc626);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6dc628:{NFSU2_TR(0x6dc628);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc620u);}goto L6dc620;}}
}
B6dc62a:L6dc62a:{c.instructions+=3;NFSU2_TR(0x6dc62a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc62b:{NFSU2_TR(0x6dc62b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc62c:{NFSU2_TR(0x6dc62c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc62d:L6dc62d:{c.instructions+=2;NFSU2_TR(0x6dc62d);
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
B6dc62f:{NFSU2_TR(0x6dc62f);
if(r1(R+518)){{goto L6dc637;}}
}
B6dc631:L6dc631:{c.instructions+=3;NFSU2_TR(0x6dc631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc633:{NFSU2_TR(0x6dc633);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc635:{NFSU2_TR(0x6dc635);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc637ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6dc637:L6dc637:{c.instructions+=4;NFSU2_TR(0x6dc637);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6dc63d:{NFSU2_TR(0x6dc63d);
__builtin_memmove((R+4),gp(0x8a80f0),4);
}
B6dc643:{NFSU2_TR(0x6dc643);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dc64a:{NFSU2_TR(0x6dc64a);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x8a8100),u32(0x1ull)));
s4(0x8a8100,u32(u32(m4(0x8a8100))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a8100))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a8100))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a8100))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc650:L6dc650:{c.instructions+=1;NFSU2_TR(0x6dc650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc651:L6dc651:{c.instructions+=2;NFSU2_TR(0x6dc651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc652:{NFSU2_TR(0x6dc652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc660:L6dc660:{c.instructions+=5;NFSU2_TR(0x6dc660);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc661:{NFSU2_TR(0x6dc661);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc665:{NFSU2_TR(0x6dc665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc667:{NFSU2_TR(0x6dc667);
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
B6dc669:{NFSU2_TR(0x6dc669);
if(r1(R+518)){{goto L6dc710;}}
}
B6dc66f:L6dc66f:{c.instructions+=2;NFSU2_TR(0x6dc66f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6dc673:{NFSU2_TR(0x6dc673);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6dc693;}}
}
B6dc675:L6dc675:{c.instructions+=3;NFSU2_TR(0x6dc675);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc678:{NFSU2_TR(0x6dc678);
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
B6dc67a:{NFSU2_TR(0x6dc67a);
if(r1(R+518)){{goto L6dc693;}}
}
B6dc67c:L6dc67c:{c.instructions+=4;NFSU2_TR(0x6dc67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc67f:{NFSU2_TR(0x6dc67f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc680:{NFSU2_TR(0x6dc680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc681:{NFSU2_TR(0x6dc681);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc687ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dc687:L6dc687:{c.instructions+=3;NFSU2_TR(0x6dc687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc689:{NFSU2_TR(0x6dc689);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dc68c:{NFSU2_TR(0x6dc68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc693:L6dc693:{c.instructions+=6;NFSU2_TR(0x6dc693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc695:{NFSU2_TR(0x6dc695);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc698:{NFSU2_TR(0x6dc698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc69a:{NFSU2_TR(0x6dc69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc69d:{NFSU2_TR(0x6dc69d);
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
B6dc69f:{NFSU2_TR(0x6dc69f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6dc710;}}
}
B6dc6a1:L6dc6a1:{c.instructions+=3;NFSU2_TR(0x6dc6a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc6a5:{NFSU2_TR(0x6dc6a5);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8078ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dc6ac:{NFSU2_TR(0x6dc6ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc6b9;}}
}
B6dc6ae:L6dc6ae:{c.instructions+=1;NFSU2_TR(0x6dc6ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8078ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dc6b9:L6dc6b9:{c.instructions+=5;NFSU2_TR(0x6dc6b9);
__builtin_memmove((R+8),gp(0x80f008),4);
}
B6dc6bf:{NFSU2_TR(0x6dc6bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc6c0:{NFSU2_TR(0x6dc6c0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dc6c2:{NFSU2_TR(0x6dc6c2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc6c4:{NFSU2_TR(0x6dc6c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dc704;}}
}
B6dc6c6:L6dc6c6:{c.instructions+=3;NFSU2_TR(0x6dc6c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc6c8:{NFSU2_TR(0x6dc6c8);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dc6cd:{NFSU2_TR(0x6dc6cd);
__builtin_memmove((R+4),(R+4),4);
}
B6dc6d0:L6dc6d0:{c.instructions+=2;NFSU2_TR(0x6dc6d0);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dc6d3:{NFSU2_TR(0x6dc6d3);
if(r1(R+518)){{goto L6dc6e8;}}
}
B6dc6d5:L6dc6d5:{c.instructions+=3;NFSU2_TR(0x6dc6d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dc6d6:{NFSU2_TR(0x6dc6d6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dc6d8:{NFSU2_TR(0x6dc6d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc6d0u);}goto L6dc6d0;}}
}
B6dc6da:L6dc6da:{c.instructions+=6;NFSU2_TR(0x6dc6da);
__builtin_memmove((R+0),gp(0x8a8100),4);
}
B6dc6df:{NFSU2_TR(0x6dc6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc6e0:{NFSU2_TR(0x6dc6e0);
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
B6dc6e1:{NFSU2_TR(0x6dc6e1);
__builtin_memmove(gp(0x8a8100),(R+0),4);
}
B6dc6e6:{NFSU2_TR(0x6dc6e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc6e7:{NFSU2_TR(0x6dc6e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc6e8:L6dc6e8:{c.instructions+=2;NFSU2_TR(0x6dc6e8);
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
B6dc6ea:{NFSU2_TR(0x6dc6ea);
if(r1(R+518)){{goto L6dc6f2;}}
}
B6dc6ec:L6dc6ec:{c.instructions+=3;NFSU2_TR(0x6dc6ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc6ee:{NFSU2_TR(0x6dc6ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc6f0:{NFSU2_TR(0x6dc6f0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc6f2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6dc6f2:L6dc6f2:{c.instructions+=3;NFSU2_TR(0x6dc6f2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6dc6f8:{NFSU2_TR(0x6dc6f8);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dc6fd:{NFSU2_TR(0x6dc6fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dc704:L6dc704:{c.instructions+=4;NFSU2_TR(0x6dc704);
__builtin_memmove((R+0),gp(0x8a8100),4);
}
B6dc709:{NFSU2_TR(0x6dc709);
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
B6dc70a:{NFSU2_TR(0x6dc70a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc70b:{NFSU2_TR(0x6dc70b);
__builtin_memmove(gp(0x8a8100),(R+0),4);
}
B6dc710:L6dc710:{c.instructions+=2;NFSU2_TR(0x6dc710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc711:{NFSU2_TR(0x6dc711);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc720:L6dc720:{c.instructions+=4;NFSU2_TR(0x6dc720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc721:{NFSU2_TR(0x6dc721);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dc725:{NFSU2_TR(0x6dc725);
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
B6dc727:{NFSU2_TR(0x6dc727);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc72d;}}
}
B6dc729:L6dc729:{c.instructions+=1;NFSU2_TR(0x6dc729);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dc72d:L6dc72d:{c.instructions+=3;NFSU2_TR(0x6dc72d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc72f:{NFSU2_TR(0x6dc72f);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc731:{NFSU2_TR(0x6dc731);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc737ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dc737:L6dc737:{c.instructions+=3;NFSU2_TR(0x6dc737);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dc73a:{NFSU2_TR(0x6dc73a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc73c:{NFSU2_TR(0x6dc73c);
if(r1(R+518)){{goto L6dc75e;}}
}
B6dc73e:L6dc73e:{c.instructions+=12;NFSU2_TR(0x6dc73e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc742:{NFSU2_TR(0x6dc742);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc746:{NFSU2_TR(0x6dc746);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc748:{NFSU2_TR(0x6dc748);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc749:{NFSU2_TR(0x6dc749);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc74d:{NFSU2_TR(0x6dc74d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc74e:{NFSU2_TR(0x6dc74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc752:{NFSU2_TR(0x6dc752);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc753:{NFSU2_TR(0x6dc753);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc754:{NFSU2_TR(0x6dc754);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc755:{NFSU2_TR(0x6dc755);
__builtin_memmove((R+4),(R+0),4);
}
B6dc757:{NFSU2_TR(0x6dc757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc75cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc340u);}goto L6dc340;}
}
B6dc75c:L6dc75c:{c.instructions+=1;NFSU2_TR(0x6dc75c);
{goto L6dc760;}
}
B6dc75e:L6dc75e:{c.instructions+=1;NFSU2_TR(0x6dc75e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dc760:L6dc760:{c.instructions+=4;NFSU2_TR(0x6dc760);
__builtin_memmove((R+24),gp(0x80f008),4);
}
B6dc766:{NFSU2_TR(0x6dc766);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6dc768:{NFSU2_TR(0x6dc768);
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
B6dc76a:{NFSU2_TR(0x6dc76a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dc78f;}}
}
B6dc76c:L6dc76c:{c.instructions+=1;NFSU2_TR(0x6dc76c);
__builtin_memmove((R+8),gp(0x8a80f0),4);
}
B6dc772:L6dc772:{c.instructions+=2;NFSU2_TR(0x6dc772);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dc776:{NFSU2_TR(0x6dc776);
if(r1(R+518)){{goto L6dc786;}}
}
B6dc778:L6dc778:{c.instructions+=3;NFSU2_TR(0x6dc778);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6dc779:{NFSU2_TR(0x6dc779);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6dc77b:{NFSU2_TR(0x6dc77b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc772u);}goto L6dc772;}}
}
B6dc77d:L6dc77d:{c.instructions+=3;NFSU2_TR(0x6dc77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc784:{NFSU2_TR(0x6dc784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc785:{NFSU2_TR(0x6dc785);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc786:L6dc786:{c.instructions+=2;NFSU2_TR(0x6dc786);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dc789:{NFSU2_TR(0x6dc789);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a8100),u32(0x1ull)));
s4(0x8a8100,u32(u32(m4(0x8a8100))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a8100))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a8100))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a8100))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc78f:L6dc78f:{c.instructions+=3;NFSU2_TR(0x6dc78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc796:{NFSU2_TR(0x6dc796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc797:{NFSU2_TR(0x6dc797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc7a0:L6dc7a0:{c.instructions+=9;NFSU2_TR(0x6dc7a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc7a4:{NFSU2_TR(0x6dc7a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7a5:{NFSU2_TR(0x6dc7a5);
__builtin_memmove((R+24),(R+4),4);
}
B6dc7a7:{NFSU2_TR(0x6dc7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc7aa:{NFSU2_TR(0x6dc7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc7ae:{NFSU2_TR(0x6dc7ae);
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
B6dc7b0:{NFSU2_TR(0x6dc7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc7b7:{NFSU2_TR(0x6dc7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dc7be:{NFSU2_TR(0x6dc7be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc7ef;}}
}
B6dc7c0:L6dc7c0:{c.instructions+=1;NFSU2_TR(0x6dc7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc7c5ull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dc7c5:L6dc7c5:{c.instructions+=2;NFSU2_TR(0x6dc7c5);
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
B6dc7c7:{NFSU2_TR(0x6dc7c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc7f8;}}
}
B6dc7c9:L6dc7c9:{c.instructions+=2;NFSU2_TR(0x6dc7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc7cd:{NFSU2_TR(0x6dc7cd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dc7d0:L6dc7d0:{c.instructions+=11;NFSU2_TR(0x6dc7d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7d1:{NFSU2_TR(0x6dc7d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7d3:{NFSU2_TR(0x6dc7d3);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7d5:{NFSU2_TR(0x6dc7d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7d6:{NFSU2_TR(0x6dc7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc7d9:{NFSU2_TR(0x6dc7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc7dc:{NFSU2_TR(0x6dc7dc);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dc7e2:{NFSU2_TR(0x6dc7e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc7e4:{NFSU2_TR(0x6dc7e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7e5:{NFSU2_TR(0x6dc7e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc7e6:{NFSU2_TR(0x6dc7e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc7e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc7e9:L6dc7e9:{c.instructions+=3;NFSU2_TR(0x6dc7e9);
__builtin_memmove((R+0),(R+24),4);
}
B6dc7eb:{NFSU2_TR(0x6dc7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc7ec:{NFSU2_TR(0x6dc7ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc7ef:L6dc7ef:{c.instructions+=1;NFSU2_TR(0x6dc7ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc7f4ull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dc7f4:L6dc7f4:{c.instructions+=2;NFSU2_TR(0x6dc7f4);
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
B6dc7f6:{NFSU2_TR(0x6dc7f6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc7c9u);}goto L6dc7c9;}}
}
B6dc7f8:L6dc7f8:{c.instructions+=2;NFSU2_TR(0x6dc7f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc7fc:{NFSU2_TR(0x6dc7fc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc7d0u);}goto L6dc7d0;}
}
B6dc800:L6dc800:{c.instructions+=6;NFSU2_TR(0x6dc800);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc801:{NFSU2_TR(0x6dc801);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc802:{NFSU2_TR(0x6dc802);
__builtin_memmove((R+28),gp(0x8a810c),4);
}
B6dc808:{NFSU2_TR(0x6dc808);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc80a:{NFSU2_TR(0x6dc80a);
__builtin_memmove((R+12),(R+4),4);
}
B6dc80c:{NFSU2_TR(0x6dc80c);
if(r1(R+518)){{goto L6dc881;}}
}
B6dc80e:L6dc80e:{c.instructions+=2;NFSU2_TR(0x6dc80e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc80f:{NFSU2_TR(0x6dc80f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc810:L6dc810:{c.instructions+=3;NFSU2_TR(0x6dc810);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dc813:{NFSU2_TR(0x6dc813);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dc815:{NFSU2_TR(0x6dc815);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc847;}}
}
B6dc817:L6dc817:{c.instructions+=3;NFSU2_TR(0x6dc817);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6dc81a:{NFSU2_TR(0x6dc81a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6dc81d:{NFSU2_TR(0x6dc81d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc847;}}
}
B6dc81f:L6dc81f:{c.instructions+=6;NFSU2_TR(0x6dc81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc822:{NFSU2_TR(0x6dc822);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dc825:{NFSU2_TR(0x6dc825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc827:{NFSU2_TR(0x6dc827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc829:{NFSU2_TR(0x6dc829);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc82b:{NFSU2_TR(0x6dc82b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc847;}}
}
B6dc82d:L6dc82d:{c.instructions+=2;NFSU2_TR(0x6dc82d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6dc82f:{NFSU2_TR(0x6dc82f);
}
B6dc830:L6dc830:{c.instructions+=2;NFSU2_TR(0x6dc830);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc833:{NFSU2_TR(0x6dc833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc839;}}
}
B6dc835:L6dc835:{c.instructions+=2;NFSU2_TR(0x6dc835);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc837:{NFSU2_TR(0x6dc837);
if(r1(R+518)){{goto L6dc850;}}
}
B6dc839:L6dc839:{c.instructions+=5;NFSU2_TR(0x6dc839);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc83c:{NFSU2_TR(0x6dc83c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6dc840:{NFSU2_TR(0x6dc840);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6dc843:{NFSU2_TR(0x6dc843);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc845:{NFSU2_TR(0x6dc845);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc830u);}goto L6dc830;}}
}
B6dc847:L6dc847:{c.instructions+=3;NFSU2_TR(0x6dc847);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc84a:{NFSU2_TR(0x6dc84a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc84c:{NFSU2_TR(0x6dc84c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc810u);}goto L6dc810;}}
}
B6dc84e:L6dc84e:{c.instructions+=1;NFSU2_TR(0x6dc84e);
{goto L6dc87f;}
}
B6dc850:L6dc850:{c.instructions+=5;NFSU2_TR(0x6dc850);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc853:{NFSU2_TR(0x6dc853);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc856:{NFSU2_TR(0x6dc856);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6dc858:{NFSU2_TR(0x6dc858);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc85a:{NFSU2_TR(0x6dc85a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dc86f;}}
}
B6dc85c:L6dc85c:{c.instructions+=2;NFSU2_TR(0x6dc85c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6dc85e:{NFSU2_TR(0x6dc85e);
__builtin_memmove((R+28),(R+28),4);
}
B6dc860:L6dc860:{c.instructions+=3;NFSU2_TR(0x6dc860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dc862:{NFSU2_TR(0x6dc862);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+24))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dc865:{NFSU2_TR(0x6dc865);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc847u);}goto L6dc847;}}
}
B6dc867:L6dc867:{c.instructions+=4;NFSU2_TR(0x6dc867);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6dc868:{NFSU2_TR(0x6dc868);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6dc86b:{NFSU2_TR(0x6dc86b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dc86d:{NFSU2_TR(0x6dc86d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc860u);}goto L6dc860;}}
}
B6dc86f:L6dc86f:{c.instructions+=6;NFSU2_TR(0x6dc86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc871:{NFSU2_TR(0x6dc871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6dc873:{NFSU2_TR(0x6dc873);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dc876:{NFSU2_TR(0x6dc876);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc878:{NFSU2_TR(0x6dc878);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc87b:{NFSU2_TR(0x6dc87b);
if(r1(R+518)){{goto L6dc87f;}}
}
B6dc87d:L6dc87d:{c.instructions+=1;NFSU2_TR(0x6dc87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6dc87f:L6dc87f:{c.instructions+=2;NFSU2_TR(0x6dc87f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc880:{NFSU2_TR(0x6dc880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dc881:L6dc881:{c.instructions+=2;NFSU2_TR(0x6dc881);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6dc884:{NFSU2_TR(0x6dc884);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc8d3;}}
}
B6dc886:L6dc886:{c.instructions+=1;NFSU2_TR(0x6dc886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc88bull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dc88b:L6dc88b:{c.instructions+=2;NFSU2_TR(0x6dc88b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dc88d:{NFSU2_TR(0x6dc88d);
if(r1(R+518)){{goto L6dc89d;}}
}
B6dc88f:L6dc88f:{c.instructions+=2;NFSU2_TR(0x6dc88f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc891:{NFSU2_TR(0x6dc891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc896ull));
TAIL_STATIC(0x6d89b0u,6d8);
}
B6dc896:L6dc896:{c.instructions+=3;NFSU2_TR(0x6dc896);
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
B6dc899:{NFSU2_TR(0x6dc899);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc89b:{NFSU2_TR(0x6dc89b);
{goto L6dc8a9;}
}
B6dc89d:L6dc89d:{c.instructions+=2;NFSU2_TR(0x6dc89d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc89f:{NFSU2_TR(0x6dc89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc8a4ull));
TAIL_STATIC(0x6d89b0u,6d8);
}
B6dc8a4:L6dc8a4:{c.instructions+=2;NFSU2_TR(0x6dc8a4);
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
B6dc8a7:{NFSU2_TR(0x6dc8a7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8a9:L6dc8a9:{c.instructions+=9;NFSU2_TR(0x6dc8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc8ac:{NFSU2_TR(0x6dc8ac);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc8b1:{NFSU2_TR(0x6dc8b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc8b3:{NFSU2_TR(0x6dc8b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8b4:{NFSU2_TR(0x6dc8b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8b5:{NFSU2_TR(0x6dc8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc8b8:{NFSU2_TR(0x6dc8b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8b9:{NFSU2_TR(0x6dc8b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8ba:{NFSU2_TR(0x6dc8ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc8c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc8c0:L6dc8c0:{c.instructions+=2;NFSU2_TR(0x6dc8c0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8c2:{NFSU2_TR(0x6dc8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc8c7ull));
TAIL_STATIC(0x575620u,575);
}
B6dc8c7:L6dc8c7:{c.instructions+=3;NFSU2_TR(0x6dc8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc8ca:{NFSU2_TR(0x6dc8ca);
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
B6dc8cd:{NFSU2_TR(0x6dc8cd);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6dc8d3:L6dc8d3:{c.instructions+=3;NFSU2_TR(0x6dc8d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc8d4:{NFSU2_TR(0x6dc8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc8d5:{NFSU2_TR(0x6dc8d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc8e0:L6dc8e0:{c.instructions+=9;NFSU2_TR(0x6dc8e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8e1:{NFSU2_TR(0x6dc8e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc8e2:{NFSU2_TR(0x6dc8e2);
__builtin_memmove((R+24),(R+4),4);
}
B6dc8e4:{NFSU2_TR(0x6dc8e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dc8e7:{NFSU2_TR(0x6dc8e7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6dc8e9:{NFSU2_TR(0x6dc8e9);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6dc8eb:{NFSU2_TR(0x6dc8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc8ee:{NFSU2_TR(0x6dc8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc8f1:{NFSU2_TR(0x6dc8f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc926;}}
}
B6dc8f3:L6dc8f3:{c.instructions+=5;NFSU2_TR(0x6dc8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc8f6:{NFSU2_TR(0x6dc8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6dc8f8:{NFSU2_TR(0x6dc8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc8fb:{NFSU2_TR(0x6dc8fb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6dc8fd:{NFSU2_TR(0x6dc8fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc921;}}
}
B6dc8ff:L6dc8ff:{c.instructions+=2;NFSU2_TR(0x6dc8ff);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6dc902:{NFSU2_TR(0x6dc902);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc915;}}
}
B6dc904:L6dc904:{c.instructions+=6;NFSU2_TR(0x6dc904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc906:{NFSU2_TR(0x6dc906);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dc90b:{NFSU2_TR(0x6dc90b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dc90d:{NFSU2_TR(0x6dc90d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc90e:{NFSU2_TR(0x6dc90e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc90f:{NFSU2_TR(0x6dc90f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc915ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc915:L6dc915:{c.instructions+=3;NFSU2_TR(0x6dc915);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc918:{NFSU2_TR(0x6dc918);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc919:{NFSU2_TR(0x6dc919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc91eull));
TAIL_STATIC(0x575630u,575);
}
B6dc91e:L6dc91e:{c.instructions+=1;NFSU2_TR(0x6dc91e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6dc921:L6dc921:{c.instructions+=2;NFSU2_TR(0x6dc921);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6dc923:{NFSU2_TR(0x6dc923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc926:L6dc926:{c.instructions+=3;NFSU2_TR(0x6dc926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc929:{NFSU2_TR(0x6dc929);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc92b:{NFSU2_TR(0x6dc92b);
if(r1(R+518)){{goto L6dc933;}}
}
B6dc92d:L6dc92d:{c.instructions+=2;NFSU2_TR(0x6dc92d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc930:{NFSU2_TR(0x6dc930);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc933:L6dc933:{c.instructions+=3;NFSU2_TR(0x6dc933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc936:{NFSU2_TR(0x6dc936);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc938:{NFSU2_TR(0x6dc938);
if(r1(R+518)){{goto L6dc940;}}
}
B6dc93a:L6dc93a:{c.instructions+=2;NFSU2_TR(0x6dc93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc93d:{NFSU2_TR(0x6dc93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc940:L6dc940:{c.instructions+=2;NFSU2_TR(0x6dc940);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a810c),4);
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
B6dc946:{NFSU2_TR(0x6dc946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc950;}}
}
B6dc948:L6dc948:{c.instructions+=2;NFSU2_TR(0x6dc948);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc94b:{NFSU2_TR(0x6dc94b);
__builtin_memmove(gp(0x8a810c),(R+0),4);
}
B6dc950:L6dc950:{c.instructions+=5;NFSU2_TR(0x6dc950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc953:{NFSU2_TR(0x6dc953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc956:{NFSU2_TR(0x6dc956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc957:{NFSU2_TR(0x6dc957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dc958:{NFSU2_TR(0x6dc958);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc960:L6dc960:{c.instructions+=9;NFSU2_TR(0x6dc960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc961:{NFSU2_TR(0x6dc961);
__builtin_memmove((R+24),(R+4),4);
}
B6dc963:{NFSU2_TR(0x6dc963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc966:{NFSU2_TR(0x6dc966);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc967:{NFSU2_TR(0x6dc967);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dc969:{NFSU2_TR(0x6dc969);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6dc96a:{NFSU2_TR(0x6dc96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc96d:{NFSU2_TR(0x6dc96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc970:{NFSU2_TR(0x6dc970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc988;}}
}
B6dc972:L6dc972:{c.instructions+=3;NFSU2_TR(0x6dc972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dc974:{NFSU2_TR(0x6dc974);
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
B6dc976:{NFSU2_TR(0x6dc976);
if(r1(R+518)){{goto L6dc988;}}
}
B6dc978:L6dc978:{c.instructions+=5;NFSU2_TR(0x6dc978);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dc97e:{NFSU2_TR(0x6dc97e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc980:{NFSU2_TR(0x6dc980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc981:{NFSU2_TR(0x6dc981);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc982:{NFSU2_TR(0x6dc982);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc988ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc988:L6dc988:{c.instructions+=3;NFSU2_TR(0x6dc988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc98b:{NFSU2_TR(0x6dc98b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc98d:{NFSU2_TR(0x6dc98d);
if(r1(R+518)){{goto L6dc995;}}
}
B6dc98f:L6dc98f:{c.instructions+=2;NFSU2_TR(0x6dc98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dc992:{NFSU2_TR(0x6dc992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc995:L6dc995:{c.instructions+=3;NFSU2_TR(0x6dc995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc998:{NFSU2_TR(0x6dc998);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dc99a:{NFSU2_TR(0x6dc99a);
if(r1(R+518)){{goto L6dc9a2;}}
}
B6dc99c:L6dc99c:{c.instructions+=2;NFSU2_TR(0x6dc99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dc99f:{NFSU2_TR(0x6dc99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc9a2:L6dc9a2:{c.instructions+=2;NFSU2_TR(0x6dc9a2);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8110),4);
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
B6dc9a8:{NFSU2_TR(0x6dc9a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dc9b2;}}
}
B6dc9aa:L6dc9aa:{c.instructions+=2;NFSU2_TR(0x6dc9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dc9ad:{NFSU2_TR(0x6dc9ad);
__builtin_memmove(gp(0x8a8110),(R+0),4);
}
B6dc9b2:L6dc9b2:{c.instructions+=5;NFSU2_TR(0x6dc9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc9b5:{NFSU2_TR(0x6dc9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dc9b8:{NFSU2_TR(0x6dc9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dc9b9:{NFSU2_TR(0x6dc9b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dc9ba:{NFSU2_TR(0x6dc9ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dc9c0:L6dc9c0:{c.instructions+=6;NFSU2_TR(0x6dc9c0);
__builtin_memmove((R+0),gp(0x80f008),4);
}
B6dc9c5:{NFSU2_TR(0x6dc9c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc9c6:{NFSU2_TR(0x6dc9c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dc9c8:{NFSU2_TR(0x6dc9c8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dc9ca:{NFSU2_TR(0x6dc9ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dc9cb:{NFSU2_TR(0x6dc9cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dc9eb;}}
}
B6dc9cd:L6dc9cd:{c.instructions+=1;NFSU2_TR(0x6dc9cd);
__builtin_memmove((R+4),(R+4),4);
}
B6dc9d0:L6dc9d0:{c.instructions+=4;NFSU2_TR(0x6dc9d0);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dc9d5:{NFSU2_TR(0x6dc9d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6dc9d8:{NFSU2_TR(0x6dc9d8);
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
B6dc9da:{NFSU2_TR(0x6dc9da);
if(r1(R+518)){{goto L6dc9e1;}}
}
B6dc9dc:L6dc9dc:{c.instructions+=2;NFSU2_TR(0x6dc9dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dc9de:{NFSU2_TR(0x6dc9de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dc9e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dc9e1:L6dc9e1:{c.instructions+=4;NFSU2_TR(0x6dc9e1);
__builtin_memmove((R+0),gp(0x80f008),4);
}
B6dc9e6:{NFSU2_TR(0x6dc9e6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dc9e7:{NFSU2_TR(0x6dc9e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dc9e9:{NFSU2_TR(0x6dc9e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc9d0u);}goto L6dc9d0;}}
}
B6dc9eb:L6dc9eb:{c.instructions+=4;NFSU2_TR(0x6dc9eb);
__builtin_memmove((R+0),gp(0x80f00c),4);
}
B6dc9f0:{NFSU2_TR(0x6dc9f0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dc9f2:{NFSU2_TR(0x6dc9f2);
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
B6dc9f4:{NFSU2_TR(0x6dc9f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dca1e;}}
}
B6dc9f6:L6dc9f6:{c.instructions+=4;NFSU2_TR(0x6dc9f6);
__builtin_memmove((R+0),gp(0x8a80f4),4);
}
B6dc9fb:{NFSU2_TR(0x6dc9fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6dc9fe:{NFSU2_TR(0x6dc9fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dca00:{NFSU2_TR(0x6dca00);
if(r1(R+518)){{goto L6dca14;}}
}
B6dca02:L6dca02:{c.instructions+=3;NFSU2_TR(0x6dca02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dca04:{NFSU2_TR(0x6dca04);
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
B6dca06:{NFSU2_TR(0x6dca06);
if(r1(R+518)){{goto L6dca14;}}
}
B6dca08:L6dca08:{c.instructions+=3;NFSU2_TR(0x6dca08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dca0a:{NFSU2_TR(0x6dca0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca0b:{NFSU2_TR(0x6dca0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dca0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dca0e:L6dca0e:{c.instructions+=1;NFSU2_TR(0x6dca0e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dca14:L6dca14:{c.instructions+=4;NFSU2_TR(0x6dca14);
__builtin_memmove((R+0),gp(0x80f00c),4);
}
B6dca19:{NFSU2_TR(0x6dca19);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dca1a:{NFSU2_TR(0x6dca1a);
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
B6dca1c:{NFSU2_TR(0x6dca1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc9f6u);}goto L6dc9f6;}}
}
B6dca1e:L6dca1e:{c.instructions+=3;NFSU2_TR(0x6dca1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dca1f:{NFSU2_TR(0x6dca1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dca20:{NFSU2_TR(0x6dca20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dca30:L6dca30:{c.instructions+=7;NFSU2_TR(0x6dca30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca31:{NFSU2_TR(0x6dca31);
__builtin_memmove((R+0),gp(0x80f008),4);
}
B6dca36:{NFSU2_TR(0x6dca36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca37:{NFSU2_TR(0x6dca37);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dca39:{NFSU2_TR(0x6dca39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dca3b:{NFSU2_TR(0x6dca3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca3c:{NFSU2_TR(0x6dca3c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dca5b;}}
}
B6dca3e:L6dca3e:{c.instructions+=1;NFSU2_TR(0x6dca3e);
__builtin_memmove((R+28),(R+28),4);
}
B6dca40:L6dca40:{c.instructions+=4;NFSU2_TR(0x6dca40);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dca45:{NFSU2_TR(0x6dca45);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6dca48:{NFSU2_TR(0x6dca48);
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
B6dca4a:{NFSU2_TR(0x6dca4a);
if(r1(R+518)){{goto L6dca51;}}
}
B6dca4c:L6dca4c:{c.instructions+=2;NFSU2_TR(0x6dca4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dca4e:{NFSU2_TR(0x6dca4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dca51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dca51:L6dca51:{c.instructions+=4;NFSU2_TR(0x6dca51);
__builtin_memmove((R+0),gp(0x80f008),4);
}
B6dca56:{NFSU2_TR(0x6dca56);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dca57:{NFSU2_TR(0x6dca57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dca59:{NFSU2_TR(0x6dca59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dca40u);}goto L6dca40;}}
}
B6dca5b:L6dca5b:{c.instructions+=4;NFSU2_TR(0x6dca5b);
__builtin_memmove((R+0),gp(0x80f00c),4);
}
B6dca60:{NFSU2_TR(0x6dca60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dca62:{NFSU2_TR(0x6dca62);
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
B6dca64:{NFSU2_TR(0x6dca64);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dcadb;}}
}
B6dca66:L6dca66:{c.instructions+=4;NFSU2_TR(0x6dca66);
__builtin_memmove((R+0),gp(0x8a80f4),4);
}
B6dca6b:{NFSU2_TR(0x6dca6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6dca6e:{NFSU2_TR(0x6dca6e);
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
B6dca70:{NFSU2_TR(0x6dca70);
if(r1(R+518)){{goto L6dcad1;}}
}
B6dca72:L6dca72:{c.instructions+=1;NFSU2_TR(0x6dca72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dca77ull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dca77:L6dca77:{c.instructions+=2;NFSU2_TR(0x6dca77);
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
B6dca79:{NFSU2_TR(0x6dca79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dca80;}}
}
B6dca7b:L6dca7b:{c.instructions+=1;NFSU2_TR(0x6dca7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dca80ull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dca80:L6dca80:{c.instructions+=11;NFSU2_TR(0x6dca80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dca83:{NFSU2_TR(0x6dca83);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dca88:{NFSU2_TR(0x6dca88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dca8a:{NFSU2_TR(0x6dca8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca8b:{NFSU2_TR(0x6dca8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca8d:{NFSU2_TR(0x6dca8d);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca8f:{NFSU2_TR(0x6dca8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca90:{NFSU2_TR(0x6dca90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dca93:{NFSU2_TR(0x6dca93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca94:{NFSU2_TR(0x6dca94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dca95:{NFSU2_TR(0x6dca95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dca98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dca98:L6dca98:{c.instructions+=3;NFSU2_TR(0x6dca98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dca9b:{NFSU2_TR(0x6dca9b);
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
B6dca9d:{NFSU2_TR(0x6dca9d);
if(r1(R+518)){{goto L6dcad1;}}
}
B6dca9f:L6dca9f:{c.instructions+=10;NFSU2_TR(0x6dca9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dcaa1:{NFSU2_TR(0x6dcaa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcaa3:{NFSU2_TR(0x6dcaa3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcaa5:{NFSU2_TR(0x6dcaa5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dcaa9:{NFSU2_TR(0x6dcaa9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcaaa:{NFSU2_TR(0x6dcaaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcaad:{NFSU2_TR(0x6dcaad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcaae:{NFSU2_TR(0x6dcaae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcab0:{NFSU2_TR(0x6dcab0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcab1:{NFSU2_TR(0x6dcab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcab4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcab4:L6dcab4:{c.instructions+=7;NFSU2_TR(0x6dcab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcab7:{NFSU2_TR(0x6dcab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dcaba:{NFSU2_TR(0x6dcaba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcabe:{NFSU2_TR(0x6dcabe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcabf:{NFSU2_TR(0x6dcabf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcac0:{NFSU2_TR(0x6dcac0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcac1:{NFSU2_TR(0x6dcac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcac6ull));
TAIL_STATIC(0x401000u,401);
}
B6dcac6:L6dcac6:{c.instructions+=5;NFSU2_TR(0x6dcac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dcac8:{NFSU2_TR(0x6dcac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dcaca:{NFSU2_TR(0x6dcaca);
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
B6dcacd:{NFSU2_TR(0x6dcacd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcace:{NFSU2_TR(0x6dcace);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcad1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcad1:L6dcad1:{c.instructions+=4;NFSU2_TR(0x6dcad1);
__builtin_memmove((R+0),gp(0x80f00c),4);
}
B6dcad6:{NFSU2_TR(0x6dcad6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dcad7:{NFSU2_TR(0x6dcad7);
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
B6dcad9:{NFSU2_TR(0x6dcad9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dca66u);}goto L6dca66;}}
}
B6dcadb:L6dcadb:{c.instructions+=4;NFSU2_TR(0x6dcadb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dcadc:{NFSU2_TR(0x6dcadc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcadd:{NFSU2_TR(0x6dcadd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dcade:{NFSU2_TR(0x6dcade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcae0:L6dcae0:{c.instructions+=4;NFSU2_TR(0x6dcae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcae1:{NFSU2_TR(0x6dcae1);
__builtin_memmove((R+24),gp(0x8a810c),4);
}
B6dcae7:{NFSU2_TR(0x6dcae7);
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
B6dcae9:{NFSU2_TR(0x6dcae9);
if(r1(R+518)){{goto L6dcb3c;}}
}
B6dcaeb:L6dcaeb:{c.instructions+=1;NFSU2_TR(0x6dcaeb);
{goto L6dcaf0;}
}
B6dcaf0:L6dcaf0:{c.instructions+=3;NFSU2_TR(0x6dcaf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dcaf3:{NFSU2_TR(0x6dcaf3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dcaf5:{NFSU2_TR(0x6dcaf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcb35;}}
}
B6dcaf7:L6dcaf7:{c.instructions+=5;NFSU2_TR(0x6dcaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcafa:{NFSU2_TR(0x6dcafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6dcafc:{NFSU2_TR(0x6dcafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcaff:{NFSU2_TR(0x6dcaff);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6dcb02:{NFSU2_TR(0x6dcb02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcb28;}}
}
B6dcb04:L6dcb04:{c.instructions+=3;NFSU2_TR(0x6dcb04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dcb07:{NFSU2_TR(0x6dcb07);
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
B6dcb09:{NFSU2_TR(0x6dcb09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcb1c;}}
}
B6dcb0b:L6dcb0b:{c.instructions+=6;NFSU2_TR(0x6dcb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dcb0d:{NFSU2_TR(0x6dcb0d);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dcb12:{NFSU2_TR(0x6dcb12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcb14:{NFSU2_TR(0x6dcb14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcb15:{NFSU2_TR(0x6dcb15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcb16:{NFSU2_TR(0x6dcb16);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcb1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcb1c:L6dcb1c:{c.instructions+=3;NFSU2_TR(0x6dcb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcb1f:{NFSU2_TR(0x6dcb1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcb20:{NFSU2_TR(0x6dcb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcb25ull));
TAIL_STATIC(0x575630u,575);
}
B6dcb25:L6dcb25:{c.instructions+=1;NFSU2_TR(0x6dcb25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6dcb28:L6dcb28:{c.instructions+=2;NFSU2_TR(0x6dcb28);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dcb2e:{NFSU2_TR(0x6dcb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dcb35:L6dcb35:{c.instructions+=3;NFSU2_TR(0x6dcb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dcb38:{NFSU2_TR(0x6dcb38);
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
B6dcb3a:{NFSU2_TR(0x6dcb3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dcaf0u);}goto L6dcaf0;}}
}
B6dcb3c:L6dcb3c:{c.instructions+=2;NFSU2_TR(0x6dcb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcb3d:{NFSU2_TR(0x6dcb3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcb40:L6dcb40:{c.instructions+=4;NFSU2_TR(0x6dcb40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcb41:{NFSU2_TR(0x6dcb41);
__builtin_memmove((R+24),gp(0x8a810c),4);
}
B6dcb47:{NFSU2_TR(0x6dcb47);
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
B6dcb49:{NFSU2_TR(0x6dcb49);
if(r1(R+518)){{goto L6dcb73;}}
}
B6dcb4b:L6dcb4b:{c.instructions+=1;NFSU2_TR(0x6dcb4b);
{goto L6dcb50;}
}
B6dcb50:L6dcb50:{c.instructions+=3;NFSU2_TR(0x6dcb50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dcb53:{NFSU2_TR(0x6dcb53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dcb55:{NFSU2_TR(0x6dcb55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcb6c;}}
}
B6dcb57:L6dcb57:{c.instructions+=3;NFSU2_TR(0x6dcb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcb5a:{NFSU2_TR(0x6dcb5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dcb5c:{NFSU2_TR(0x6dcb5c);
if(r1(R+518)){{goto L6dcb6c;}}
}
B6dcb5e:L6dcb5e:{c.instructions+=3;NFSU2_TR(0x6dcb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcb61:{NFSU2_TR(0x6dcb61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dcb63:{NFSU2_TR(0x6dcb63);
if(r1(R+518)){{goto L6dcb6c;}}
}
B6dcb65:L6dcb65:{c.instructions+=2;NFSU2_TR(0x6dcb65);
__builtin_memmove((R+4),(R+24),4);
}
B6dcb67:{NFSU2_TR(0x6dcb67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcb6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc800u);}goto L6dc800;}
}
B6dcb6c:L6dcb6c:{c.instructions+=3;NFSU2_TR(0x6dcb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dcb6f:{NFSU2_TR(0x6dcb6f);
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
B6dcb71:{NFSU2_TR(0x6dcb71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dcb50u);}goto L6dcb50;}}
}
B6dcb73:L6dcb73:{c.instructions+=2;NFSU2_TR(0x6dcb73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcb74:{NFSU2_TR(0x6dcb74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcb80:L6dcb80:{c.instructions+=4;NFSU2_TR(0x6dcb80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcb81:{NFSU2_TR(0x6dcb81);
__builtin_memmove((R+24),gp(0x8a8110),4);
}
B6dcb87:{NFSU2_TR(0x6dcb87);
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
B6dcb89:{NFSU2_TR(0x6dcb89);
if(r1(R+518)){{goto L6dcbb2;}}
}
B6dcb8b:L6dcb8b:{c.instructions+=1;NFSU2_TR(0x6dcb8b);
{goto L6dcb90;}
}
B6dcb90:L6dcb90:{c.instructions+=2;NFSU2_TR(0x6dcb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dcb93:{NFSU2_TR(0x6dcb93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcbab;}}
}
B6dcb95:L6dcb95:{c.instructions+=3;NFSU2_TR(0x6dcb95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dcb97:{NFSU2_TR(0x6dcb97);
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
B6dcb99:{NFSU2_TR(0x6dcb99);
if(r1(R+518)){{goto L6dcbab;}}
}
B6dcb9b:L6dcb9b:{c.instructions+=5;NFSU2_TR(0x6dcb9b);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dcba1:{NFSU2_TR(0x6dcba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dcba3:{NFSU2_TR(0x6dcba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcba4:{NFSU2_TR(0x6dcba4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcba5:{NFSU2_TR(0x6dcba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcbabull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcbab:L6dcbab:{c.instructions+=3;NFSU2_TR(0x6dcbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dcbae:{NFSU2_TR(0x6dcbae);
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
B6dcbb0:{NFSU2_TR(0x6dcbb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dcb90u);}goto L6dcb90;}}
}
B6dcbb2:L6dcbb2:{c.instructions+=2;NFSU2_TR(0x6dcbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcbb3:{NFSU2_TR(0x6dcbb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcbc0:L6dcbc0:{c.instructions+=4;NFSU2_TR(0x6dcbc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcbc1:{NFSU2_TR(0x6dcbc1);
__builtin_memmove((R+24),gp(0x8a8110),4);
}
B6dcbc7:{NFSU2_TR(0x6dcbc7);
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
B6dcbc9:{NFSU2_TR(0x6dcbc9);
if(r1(R+518)){{goto L6dcbf2;}}
}
B6dcbcb:L6dcbcb:{c.instructions+=1;NFSU2_TR(0x6dcbcb);
{goto L6dcbd0;}
}
B6dcbd0:L6dcbd0:{c.instructions+=3;NFSU2_TR(0x6dcbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcbd3:{NFSU2_TR(0x6dcbd3);
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
B6dcbd5:{NFSU2_TR(0x6dcbd5);
if(r1(R+518)){{goto L6dcbe8;}}
}
B6dcbd7:L6dcbd7:{c.instructions+=6;NFSU2_TR(0x6dcbd7);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dcbdd:{NFSU2_TR(0x6dcbdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dcbdf:{NFSU2_TR(0x6dcbdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcbe0:{NFSU2_TR(0x6dcbe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcbe1:{NFSU2_TR(0x6dcbe1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcbe2:{NFSU2_TR(0x6dcbe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcbe8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcbe8:L6dcbe8:{c.instructions+=4;NFSU2_TR(0x6dcbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6dcbeb:{NFSU2_TR(0x6dcbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dcbee:{NFSU2_TR(0x6dcbee);
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
B6dcbf0:{NFSU2_TR(0x6dcbf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dcbd0u);}goto L6dcbd0;}}
}
B6dcbf2:L6dcbf2:{c.instructions+=2;NFSU2_TR(0x6dcbf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcbf3:{NFSU2_TR(0x6dcbf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcc00:L6dcc00:{c.instructions+=6;NFSU2_TR(0x6dcc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6dcc03:{NFSU2_TR(0x6dcc03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc04:{NFSU2_TR(0x6dcc04);
__builtin_memmove((R+24),(R+4),4);
}
B6dcc06:{NFSU2_TR(0x6dcc06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dcc09:{NFSU2_TR(0x6dcc09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dcc0b:{NFSU2_TR(0x6dcc0b);
if(r1(R+518)){{goto L6dcc76;}}
}
B6dcc0d:L6dcc0d:{c.instructions+=4;NFSU2_TR(0x6dcc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcc10:{NFSU2_TR(0x6dcc10);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6dcc13:{NFSU2_TR(0x6dcc13);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6dcc15:{NFSU2_TR(0x6dcc15);
if(r1(R+518)){{goto L6dcc57;}}
}
B6dcc17:L6dcc17:{c.instructions+=10;NFSU2_TR(0x6dcc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcc1a:{NFSU2_TR(0x6dcc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcc1c:{NFSU2_TR(0x6dcc1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc1e:{NFSU2_TR(0x6dcc1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dcc22:{NFSU2_TR(0x6dcc22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc23:{NFSU2_TR(0x6dcc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcc26:{NFSU2_TR(0x6dcc26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc27:{NFSU2_TR(0x6dcc27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc29:{NFSU2_TR(0x6dcc29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc2a:{NFSU2_TR(0x6dcc2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcc2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcc2d:L6dcc2d:{c.instructions+=7;NFSU2_TR(0x6dcc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcc30:{NFSU2_TR(0x6dcc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dcc33:{NFSU2_TR(0x6dcc33);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcc37:{NFSU2_TR(0x6dcc37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc38:{NFSU2_TR(0x6dcc38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc39:{NFSU2_TR(0x6dcc39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc3a:{NFSU2_TR(0x6dcc3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcc3full));
TAIL_STATIC(0x401000u,401);
}
B6dcc3f:L6dcc3f:{c.instructions+=5;NFSU2_TR(0x6dcc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcc42:{NFSU2_TR(0x6dcc42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcc44:{NFSU2_TR(0x6dcc44);
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
B6dcc47:{NFSU2_TR(0x6dcc47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc48:{NFSU2_TR(0x6dcc48);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcc4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcc4b:L6dcc4b:{c.instructions+=3;NFSU2_TR(0x6dcc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcc4e:{NFSU2_TR(0x6dcc4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6dcc52:{NFSU2_TR(0x6dcc52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcc57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc2a0u);}goto L6dc2a0;}
}
B6dcc57:L6dcc57:{c.instructions+=10;NFSU2_TR(0x6dcc57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcc5b:{NFSU2_TR(0x6dcc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcc5e:{NFSU2_TR(0x6dcc5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcc60:{NFSU2_TR(0x6dcc60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc62:{NFSU2_TR(0x6dcc62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc63:{NFSU2_TR(0x6dcc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcc66:{NFSU2_TR(0x6dcc66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc67:{NFSU2_TR(0x6dcc67);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc69:{NFSU2_TR(0x6dcc69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc6a:{NFSU2_TR(0x6dcc6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcc6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcc6d:L6dcc6d:{c.instructions+=4;NFSU2_TR(0x6dcc6d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dcc6f:{NFSU2_TR(0x6dcc6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcc70:{NFSU2_TR(0x6dcc70);
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
B6dcc73:{NFSU2_TR(0x6dcc73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcc76:L6dcc76:{c.instructions+=8;NFSU2_TR(0x6dcc76);
__builtin_memmove((R+0),gp(0x8a71b0),4);
}
B6dcc7b:{NFSU2_TR(0x6dcc7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc7c:{NFSU2_TR(0x6dcc7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc7d:{NFSU2_TR(0x6dcc7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcc7e:{NFSU2_TR(0x6dcc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dcc81:{NFSU2_TR(0x6dcc81);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6dcc82:{NFSU2_TR(0x6dcc82);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dcc85:{NFSU2_TR(0x6dcc85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6dcc8d;}}
}
B6dcc87:L6dcc87:{c.instructions+=1;NFSU2_TR(0x6dcc87);
__builtin_memmove((R+28),gp(0x8a7b90),4);
}
B6dcc8d:L6dcc8d:{c.instructions+=6;NFSU2_TR(0x6dcc8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcc90:{NFSU2_TR(0x6dcc90);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x210ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6dcc96:{NFSU2_TR(0x6dcc96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6dcc99:{NFSU2_TR(0x6dcc99);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6dcc9b:{NFSU2_TR(0x6dcc9b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dcc9d:{NFSU2_TR(0x6dcc9d);
if(r1(R+518)){{goto L6dcca9;}}
}
B6dcc9f:L6dcc9f:{c.instructions+=4;NFSU2_TR(0x6dcc9f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6dcca1:{NFSU2_TR(0x6dcca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dcca4:{NFSU2_TR(0x6dcca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6dcca6:{NFSU2_TR(0x6dcca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dcca9:L6dcca9:{c.instructions+=7;NFSU2_TR(0x6dcca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6dccac:{NFSU2_TR(0x6dccac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6dccaf:{NFSU2_TR(0x6dccaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dccb2:{NFSU2_TR(0x6dccb2);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6dccb6:{NFSU2_TR(0x6dccb6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dccb9:{NFSU2_TR(0x6dccb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dccbd:{NFSU2_TR(0x6dccbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcce0;}}
}
B6dccbf:L6dccbf:{c.instructions+=4;NFSU2_TR(0x6dccbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dccc3:{NFSU2_TR(0x6dccc3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dccc4:{NFSU2_TR(0x6dccc4);
__builtin_memmove((R+4),(R+24),4);
}
B6dccc6:{NFSU2_TR(0x6dccc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcccbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc3f0u);}goto L6dc3f0;}
}
B6dcccb:L6dcccb:{c.instructions+=7;NFSU2_TR(0x6dcccb);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dcccf:{NFSU2_TR(0x6dcccf);
__builtin_memmove((R+12),(R+0),4);
}
B6dccd1:{NFSU2_TR(0x6dccd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6dccd5:{NFSU2_TR(0x6dccd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dccd8:{NFSU2_TR(0x6dccd8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6dccd9:{NFSU2_TR(0x6dccd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dccdd:{NFSU2_TR(0x6dccdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dcce0:L6dcce0:{c.instructions+=3;NFSU2_TR(0x6dcce0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dcce3:{NFSU2_TR(0x6dcce3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dcce5:{NFSU2_TR(0x6dcce5);
if(r1(R+518)){{goto L6dcd3e;}}
}
B6dcce7:L6dcce7:{c.instructions+=4;NFSU2_TR(0x6dcce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dccea:{NFSU2_TR(0x6dccea);
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
B6dcced:{NFSU2_TR(0x6dcced);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dccf0:{NFSU2_TR(0x6dccf0);
if(r1(R+518)){{goto L6dcd35;}}
}
B6dccf2:L6dccf2:{c.instructions+=10;NFSU2_TR(0x6dccf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dccf5:{NFSU2_TR(0x6dccf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dccf7:{NFSU2_TR(0x6dccf7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dccf9:{NFSU2_TR(0x6dccf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B6dccfd:{NFSU2_TR(0x6dccfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dccfe:{NFSU2_TR(0x6dccfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dcd01:{NFSU2_TR(0x6dcd01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd02:{NFSU2_TR(0x6dcd02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd03:{NFSU2_TR(0x6dcd03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd04:{NFSU2_TR(0x6dcd04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcd07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcd07:L6dcd07:{c.instructions+=7;NFSU2_TR(0x6dcd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcd0a:{NFSU2_TR(0x6dcd0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dcd0e:{NFSU2_TR(0x6dcd0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcd12:{NFSU2_TR(0x6dcd12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd13:{NFSU2_TR(0x6dcd13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd14:{NFSU2_TR(0x6dcd14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd15:{NFSU2_TR(0x6dcd15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcd1aull));
TAIL_STATIC(0x401000u,401);
}
B6dcd1a:L6dcd1a:{c.instructions+=5;NFSU2_TR(0x6dcd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcd1d:{NFSU2_TR(0x6dcd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcd1f:{NFSU2_TR(0x6dcd1f);
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
B6dcd22:{NFSU2_TR(0x6dcd22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd23:{NFSU2_TR(0x6dcd23);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcd26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcd26:L6dcd26:{c.instructions+=4;NFSU2_TR(0x6dcd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcd29:{NFSU2_TR(0x6dcd29);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6dcd2c:{NFSU2_TR(0x6dcd2c);
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
B6dcd2f:{NFSU2_TR(0x6dcd2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dccf2u);}goto L6dccf2;}}
}
B6dcd31:L6dcd31:{c.instructions+=1;NFSU2_TR(0x6dcd31);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dcd35:L6dcd35:{c.instructions+=2;NFSU2_TR(0x6dcd35);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6dcd39:{NFSU2_TR(0x6dcd39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcd3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc2a0u);}goto L6dc2a0;}
}
B6dcd3e:L6dcd3e:{c.instructions+=12;NFSU2_TR(0x6dcd3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dcd41:{NFSU2_TR(0x6dcd41);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6dcd43:{NFSU2_TR(0x6dcd43);
__builtin_memmove((R+0),(R+12),4);
}
B6dcd45:{NFSU2_TR(0x6dcd45);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6dcd45);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6dcd45);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6dcd47:{NFSU2_TR(0x6dcd47);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6dcd4b:{NFSU2_TR(0x6dcd4b);
__builtin_memmove((R+28),(R+0),4);
}
B6dcd4d:{NFSU2_TR(0x6dcd4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcd50:{NFSU2_TR(0x6dcd50);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6dcd54:{NFSU2_TR(0x6dcd54);
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
B6dcd56:{NFSU2_TR(0x6dcd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcd59:{NFSU2_TR(0x6dcd59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dcd5b:{NFSU2_TR(0x6dcd5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dcd61;}}
}
B6dcd5d:L6dcd5d:{c.instructions+=2;NFSU2_TR(0x6dcd5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd5f:{NFSU2_TR(0x6dcd5f);
{goto L6dcd66;}
}
B6dcd61:L6dcd61:{c.instructions+=1;NFSU2_TR(0x6dcd61);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd66:L6dcd66:{c.instructions+=5;NFSU2_TR(0x6dcd66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd67:{NFSU2_TR(0x6dcd67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd68:{NFSU2_TR(0x6dcd68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd69:{NFSU2_TR(0x6dcd69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd6a:{NFSU2_TR(0x6dcd6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcd6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcd6d:L6dcd6d:{c.instructions+=8;NFSU2_TR(0x6dcd6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6dcd70:{NFSU2_TR(0x6dcd70);
__builtin_memmove((R+0),(R+28),4);
}
B6dcd72:{NFSU2_TR(0x6dcd72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dcd73:{NFSU2_TR(0x6dcd73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dcd74:{NFSU2_TR(0x6dcd74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dcd75:{NFSU2_TR(0x6dcd75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcd76:{NFSU2_TR(0x6dcd76);
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
B6dcd79:{NFSU2_TR(0x6dcd79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcd80:L6dcd80:{c.instructions+=6;NFSU2_TR(0x6dcd80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd81:{NFSU2_TR(0x6dcd81);
__builtin_memmove((R+24),(R+4),4);
}
B6dcd83:{NFSU2_TR(0x6dcd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcd86:{NFSU2_TR(0x6dcd86);
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
B6dcd88:{NFSU2_TR(0x6dcd88);
u8 U[4];
w4(U+0,u32(0x7c0e60ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dcd8e:{NFSU2_TR(0x6dcd8e);
if(r1(R+518)){{goto L6dcd96;}}
}
B6dcd90:L6dcd90:{c.instructions+=3;NFSU2_TR(0x6dcd90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcd92:{NFSU2_TR(0x6dcd92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcd93:{NFSU2_TR(0x6dcd93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcd96ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcd96:L6dcd96:{c.instructions+=4;NFSU2_TR(0x6dcd96);
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
B6dcd9b:{NFSU2_TR(0x6dcd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dcda2:{NFSU2_TR(0x6dcda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dcda9:{NFSU2_TR(0x6dcda9);
if(r1(R+518)){{goto L6dcdb7;}}
}
B6dcdab:L6dcdab:{c.instructions+=3;NFSU2_TR(0x6dcdab);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdad:{NFSU2_TR(0x6dcdad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdae:{NFSU2_TR(0x6dcdae);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcdb4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcdb4:L6dcdb4:{c.instructions+=1;NFSU2_TR(0x6dcdb4);
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
B6dcdb7:L6dcdb7:{c.instructions+=3;NFSU2_TR(0x6dcdb7);
__builtin_memmove((R+0),(R+24),4);
}
B6dcdb9:{NFSU2_TR(0x6dcdb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcdba:{NFSU2_TR(0x6dcdba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dcdc0:L6dcdc0:{c.instructions+=15;NFSU2_TR(0x6dcdc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dcdc4:{NFSU2_TR(0x6dcdc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdc5:{NFSU2_TR(0x6dcdc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdc6:{NFSU2_TR(0x6dcdc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdc7:{NFSU2_TR(0x6dcdc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dcdcb:{NFSU2_TR(0x6dcdcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdcc:{NFSU2_TR(0x6dcdcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dcdd0:{NFSU2_TR(0x6dcdd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdd1:{NFSU2_TR(0x6dcdd1);
__builtin_memmove((R+24),(R+4),4);
}
B6dcdd3:{NFSU2_TR(0x6dcdd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcdd6:{NFSU2_TR(0x6dcdd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcdd8:{NFSU2_TR(0x6dcdd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdd9:{NFSU2_TR(0x6dcdd9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcddb:{NFSU2_TR(0x6dcddb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcddc:{NFSU2_TR(0x6dcddc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcddfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcddf:L6dcddf:{c.instructions+=6;NFSU2_TR(0x6dcddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dcde3:{NFSU2_TR(0x6dcde3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcde7:{NFSU2_TR(0x6dcde7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcde8:{NFSU2_TR(0x6dcde8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcde9:{NFSU2_TR(0x6dcde9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdea:{NFSU2_TR(0x6dcdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcdefull));
TAIL_STATIC(0x401000u,401);
}
B6dcdef:L6dcdef:{c.instructions+=5;NFSU2_TR(0x6dcdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dcdf2:{NFSU2_TR(0x6dcdf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcdf4:{NFSU2_TR(0x6dcdf4);
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
B6dcdf7:{NFSU2_TR(0x6dcdf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcdf8:{NFSU2_TR(0x6dcdf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcdfbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcdfb:L6dcdfb:{c.instructions+=6;NFSU2_TR(0x6dcdfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dcdfe:{NFSU2_TR(0x6dcdfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dcdff:{NFSU2_TR(0x6dcdff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dce02:{NFSU2_TR(0x6dce02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dce03:{NFSU2_TR(0x6dce03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dce04:{NFSU2_TR(0x6dce04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dce10:L6dce10:{c.instructions+=3;NFSU2_TR(0x6dce10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce12:{NFSU2_TR(0x6dce12);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce14:{NFSU2_TR(0x6dce14);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dce1aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dce1a:L6dce1a:{c.instructions+=3;NFSU2_TR(0x6dce1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dce1d:{NFSU2_TR(0x6dce1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dce1f:{NFSU2_TR(0x6dce1f);
if(r1(R+518)){{goto L6dce39;}}
}
B6dce21:L6dce21:{c.instructions+=8;NFSU2_TR(0x6dce21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dce25:{NFSU2_TR(0x6dce25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dce29:{NFSU2_TR(0x6dce29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce2a:{NFSU2_TR(0x6dce2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dce2e:{NFSU2_TR(0x6dce2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce2f:{NFSU2_TR(0x6dce2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce30:{NFSU2_TR(0x6dce30);
__builtin_memmove((R+4),(R+0),4);
}
B6dce32:{NFSU2_TR(0x6dce32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dce37ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc7a0u);}goto L6dc7a0;}
}
B6dce37:L6dce37:{c.instructions+=1;NFSU2_TR(0x6dce37);
{goto L6dce3b;}
}
B6dce39:L6dce39:{c.instructions+=1;NFSU2_TR(0x6dce39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dce3b:L6dce3b:{c.instructions+=5;NFSU2_TR(0x6dce3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce3c:{NFSU2_TR(0x6dce3c);
__builtin_memmove((R+24),gp(0x80f00c),4);
}
B6dce42:{NFSU2_TR(0x6dce42);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6dce44:{NFSU2_TR(0x6dce44);
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
B6dce46:{NFSU2_TR(0x6dce46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dce66;}}
}
B6dce48:L6dce48:{c.instructions+=2;NFSU2_TR(0x6dce48);
__builtin_memmove((R+8),gp(0x8a80f4),4);
}
B6dce4e:{NFSU2_TR(0x6dce4e);
__builtin_memmove((R+28),(R+28),4);
}
B6dce50:L6dce50:{c.instructions+=2;NFSU2_TR(0x6dce50);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dce54:{NFSU2_TR(0x6dce54);
if(r1(R+518)){{goto L6dce5d;}}
}
B6dce56:L6dce56:{c.instructions+=3;NFSU2_TR(0x6dce56);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6dce57:{NFSU2_TR(0x6dce57);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6dce59:{NFSU2_TR(0x6dce59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dce50u);}goto L6dce50;}}
}
B6dce5b:L6dce5b:{c.instructions+=2;NFSU2_TR(0x6dce5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dce5c:{NFSU2_TR(0x6dce5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dce5d:L6dce5d:{c.instructions+=2;NFSU2_TR(0x6dce5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dce60:{NFSU2_TR(0x6dce60);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a8104),u32(0x1ull)));
s4(0x8a8104,u32(u32(m4(0x8a8104))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a8104))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a8104))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a8104))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dce66:L6dce66:{c.instructions+=2;NFSU2_TR(0x6dce66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dce67:{NFSU2_TR(0x6dce67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dce70:L6dce70:{c.instructions+=3;NFSU2_TR(0x6dce70);
__builtin_memmove((R+0),gp(0x8a8108),1);
}
B6dce75:{NFSU2_TR(0x6dce75);
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
B6dce77:{NFSU2_TR(0x6dce77);
if(r1(R+518)){TAIL_STATIC(0x6dd009u,6dd);}
}
B6dce7d:L6dce7d:{c.instructions+=7;NFSU2_TR(0x6dce7d);
__builtin_memmove((R+0),gp(0x80f00c),4);
}
B6dce82:{NFSU2_TR(0x6dce82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce83:{NFSU2_TR(0x6dce83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce84:{NFSU2_TR(0x6dce84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dce85:{NFSU2_TR(0x6dce85);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dce87:{NFSU2_TR(0x6dce87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dce89:{NFSU2_TR(0x6dce89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dcee3;}}
}
B6dce8b:L6dce8b:{c.instructions+=1;NFSU2_TR(0x6dce8b);
{goto L6dce90;}
}
B6dce90:L6dce90:{c.instructions+=4;NFSU2_TR(0x6dce90);
__builtin_memmove((R+0),gp(0x8a80f4),4);
}
B6dce95:{NFSU2_TR(0x6dce95);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6dce98:{NFSU2_TR(0x6dce98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dce9a:{NFSU2_TR(0x6dce9a);
if(r1(R+518)){{goto L6dcecc;}}
}
B6dce9c:L6dce9c:{c.instructions+=3;NFSU2_TR(0x6dce9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dce9e:{NFSU2_TR(0x6dce9e);
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
B6dcea0:{NFSU2_TR(0x6dcea0);
if(r1(R+518)){{goto L6dcea8;}}
}
B6dcea2:L6dcea2:{c.instructions+=3;NFSU2_TR(0x6dcea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dcea4:{NFSU2_TR(0x6dcea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcea5:{NFSU2_TR(0x6dcea5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcea8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dcea8:L6dcea8:{c.instructions+=5;NFSU2_TR(0x6dcea8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dceaa:{NFSU2_TR(0x6dceaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dceab:{NFSU2_TR(0x6dceab);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dceb1:{NFSU2_TR(0x6dceb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dceb8:{NFSU2_TR(0x6dceb8);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcebeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcebe:L6dcebe:{c.instructions+=4;NFSU2_TR(0x6dcebe);
__builtin_memmove((R+0),gp(0x8a8104),4);
}
B6dcec3:{NFSU2_TR(0x6dcec3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcec6:{NFSU2_TR(0x6dcec6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6dcec7:{NFSU2_TR(0x6dcec7);
__builtin_memmove(gp(0x8a8104),(R+0),4);
}
B6dcecc:L6dcecc:{c.instructions+=6;NFSU2_TR(0x6dcecc);
__builtin_memmove((R+8),gp(0x8a80f4),4);
}
B6dced2:{NFSU2_TR(0x6dced2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dced9:{NFSU2_TR(0x6dced9);
__builtin_memmove((R+0),gp(0x80f00c),4);
}
B6dcede:{NFSU2_TR(0x6dcede);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dcedf:{NFSU2_TR(0x6dcedf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dcee1:{NFSU2_TR(0x6dcee1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dce90u);}goto L6dce90;}}
}
B6dcee3:L6dcee3:{c.instructions+=4;NFSU2_TR(0x6dcee3);
__builtin_memmove((R+4),gp(0x80f008),4);
}
B6dcee9:{NFSU2_TR(0x6dcee9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dceeb:{NFSU2_TR(0x6dceeb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dceed:{NFSU2_TR(0x6dceed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dcf22;}}
}
B6dceef:L6dceef:{c.instructions+=1;NFSU2_TR(0x6dceef);
}
B6dcef0:L6dcef0:{c.instructions+=5;NFSU2_TR(0x6dcef0);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dcef5:{NFSU2_TR(0x6dcef5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6dcef8:{NFSU2_TR(0x6dcef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dcefa:{NFSU2_TR(0x6dcefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dcefd:{NFSU2_TR(0x6dcefd);
if(r1(R+518)){{goto L6dcf0a;}}
}
B6dceff:L6dceff:{c.instructions+=3;NFSU2_TR(0x6dceff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf01:{NFSU2_TR(0x6dcf01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf02:{NFSU2_TR(0x6dcf02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcf07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dc660u);}goto L6dc660;}
}
B6dcf07:L6dcf07:{c.instructions+=1;NFSU2_TR(0x6dcf07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcf0a:L6dcf0a:{c.instructions+=6;NFSU2_TR(0x6dcf0a);
__builtin_memmove((R+4),gp(0x8a80f0),4);
}
B6dcf10:{NFSU2_TR(0x6dcf10);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dcf17:{NFSU2_TR(0x6dcf17);
__builtin_memmove((R+4),gp(0x80f008),4);
}
B6dcf1d:{NFSU2_TR(0x6dcf1d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dcf1e:{NFSU2_TR(0x6dcf1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dcf20:{NFSU2_TR(0x6dcf20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dcef0u);}goto L6dcef0;}}
}
B6dcf22:L6dcf22:{c.instructions+=3;NFSU2_TR(0x6dcf22);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6dcf24:{NFSU2_TR(0x6dcf24);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dcf26:{NFSU2_TR(0x6dcf26);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dcf64;}}
}
B6dcf28:L6dcf28:{c.instructions+=2;NFSU2_TR(0x6dcf28);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dcf2a:{NFSU2_TR(0x6dcf2a);
__builtin_memmove((R+12),(R+12),4);
}
B6dcf30:L6dcf30:{c.instructions+=5;NFSU2_TR(0x6dcf30);
__builtin_memmove((R+8),gp(0x8a8114),4);
}
B6dcf36:{NFSU2_TR(0x6dcf36);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6dcf3a:{NFSU2_TR(0x6dcf3a);
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
B6dcf3c:{NFSU2_TR(0x6dcf3c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6dcf40:{NFSU2_TR(0x6dcf40);
if(r1(R+518)){{goto L6dcf5c;}}
}
B6dcf42:L6dcf42:{c.instructions+=4;NFSU2_TR(0x6dcf42);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6dcf45:{NFSU2_TR(0x6dcf45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf46:{NFSU2_TR(0x6dcf46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf47:{NFSU2_TR(0x6dcf47);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcf4dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcf4d:L6dcf4d:{c.instructions+=3;NFSU2_TR(0x6dcf4d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dcf53:{NFSU2_TR(0x6dcf53);
__builtin_memmove((R+4),gp(0x80f008),4);
}
B6dcf59:{NFSU2_TR(0x6dcf59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcf5c:L6dcf5c:{c.instructions+=4;NFSU2_TR(0x6dcf5c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6dcf5d:{NFSU2_TR(0x6dcf5d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B6dcf60:{NFSU2_TR(0x6dcf60);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dcf62:{NFSU2_TR(0x6dcf62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dcf30u);}goto L6dcf30;}}
}
B6dcf64:L6dcf64:{c.instructions+=6;NFSU2_TR(0x6dcf64);
__builtin_memmove((R+0),gp(0x8a80f4),4);
}
B6dcf69:{NFSU2_TR(0x6dcf69);
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
B6dcf6b:{NFSU2_TR(0x6dcf6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dcf6c:{NFSU2_TR(0x6dcf6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dcf6d:{NFSU2_TR(0x6dcf6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dcf6e:{NFSU2_TR(0x6dcf6e);
if(r1(R+518)){{goto L6dcf8e;}}
}
B6dcf70:L6dcf70:{c.instructions+=5;NFSU2_TR(0x6dcf70);
__builtin_memmove((R+8),gp(0x80f00c),4);
}
B6dcf76:{NFSU2_TR(0x6dcf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6dcf7d:{NFSU2_TR(0x6dcf7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf7e:{NFSU2_TR(0x6dcf7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf7f:{NFSU2_TR(0x6dcf7f);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcf85ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcf85:L6dcf85:{c.instructions+=2;NFSU2_TR(0x6dcf85);
__builtin_memmove((R+4),gp(0x80f008),4);
}
B6dcf8b:{NFSU2_TR(0x6dcf8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcf8e:L6dcf8e:{c.instructions+=3;NFSU2_TR(0x6dcf8e);
__builtin_memmove((R+0),gp(0x8a80f0),4);
}
B6dcf93:{NFSU2_TR(0x6dcf93);
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
B6dcf95:{NFSU2_TR(0x6dcf95);
if(r1(R+518)){{goto L6dcfaf;}}
}
B6dcf97:L6dcf97:{c.instructions+=4;NFSU2_TR(0x6dcf97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6dcf9e:{NFSU2_TR(0x6dcf9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcf9f:{NFSU2_TR(0x6dcf9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcfa0:{NFSU2_TR(0x6dcfa0);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcfa6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcfa6:L6dcfa6:{c.instructions+=2;NFSU2_TR(0x6dcfa6);
__builtin_memmove((R+4),gp(0x80f008),4);
}
B6dcfac:{NFSU2_TR(0x6dcfac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcfaf:L6dcfaf:{c.instructions+=3;NFSU2_TR(0x6dcfaf);
__builtin_memmove((R+0),gp(0x8a8114),4);
}
B6dcfb4:{NFSU2_TR(0x6dcfb4);
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
B6dcfb6:{NFSU2_TR(0x6dcfb6);
if(r1(R+518)){{goto L6dcfca;}}
}
B6dcfb8:L6dcfb8:{c.instructions+=3;NFSU2_TR(0x6dcfb8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcfba:{NFSU2_TR(0x6dcfba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcfbb:{NFSU2_TR(0x6dcfbb);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcfc1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcfc1:L6dcfc1:{c.instructions+=2;NFSU2_TR(0x6dcfc1);
__builtin_memmove((R+4),gp(0x80f008),4);
}
B6dcfc7:{NFSU2_TR(0x6dcfc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcfca:L6dcfca:{c.instructions+=3;NFSU2_TR(0x6dcfca);
__builtin_memmove((R+0),gp(0x8a80f8),4);
}
B6dcfcf:{NFSU2_TR(0x6dcfcf);
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
B6dcfd1:{NFSU2_TR(0x6dcfd1);
if(r1(R+518)){{goto L6dcfe1;}}
}
B6dcfd3:L6dcfd3:{c.instructions+=4;NFSU2_TR(0x6dcfd3);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6dcfd6:{NFSU2_TR(0x6dcfd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcfd7:{NFSU2_TR(0x6dcfd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcfd8:{NFSU2_TR(0x6dcfd8);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcfdeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcfde:L6dcfde:{c.instructions+=1;NFSU2_TR(0x6dcfde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dcfe1:L6dcfe1:{c.instructions+=3;NFSU2_TR(0x6dcfe1);
__builtin_memmove((R+0),gp(0x8a80fc),4);
}
B6dcfe6:{NFSU2_TR(0x6dcfe6);
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
B6dcfe8:{NFSU2_TR(0x6dcfe8);
if(r1(R+518)){TAIL_STATIC(0x6dd002u,6dd);}
}
B6dcfea:L6dcfea:{c.instructions+=5;NFSU2_TR(0x6dcfea);
__builtin_memmove((R+8),gp(0x80f00c),4);
}
B6dcff0:{NFSU2_TR(0x6dcff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6dcff7:{NFSU2_TR(0x6dcff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcff8:{NFSU2_TR(0x6dcff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dcff9:{NFSU2_TR(0x6dcff9);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dcfffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dcfff:L6dcfff:{c.instructions+=1;NFSU2_TR(0x6dcfff);
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
TAIL_STATIC(0x6dd002u,6dd);
}
XIT:NFSU2_TR_EXIT(0x6dc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
